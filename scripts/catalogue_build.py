"""Catalogue the BUILD.DAT entries by file type (board row F11).

    python -I scripts/catalogue_build.py "<game>.iso" iso_extract/BUILD.TOC [--csv out.csv]

Reads BUILD.DAT straight from the ISO (ISO 9660 root directory), decompresses only the first bytes
of each GUT-packed entry, and classifies the entry by its header. Prints a summary per type; with
--csv also writes one row per entry (index, sector, stored, unpacked, type, magic). The CSV
describes the game data's layout only, no content.
"""
import argparse
import collections
import csv
import importlib.util
import struct
import sys
from pathlib import Path

_spec = importlib.util.spec_from_file_location("extract_build", Path(__file__).with_name("extract_build.py"))
eb = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(eb)


def iso_find(iso, name):
    """Return (byte offset, size) of a file in the ISO 9660 root directory."""
    iso.seek(16 * 2048)
    pvd = iso.read(2048)
    root = pvd[156:156 + 34]
    lba, size = struct.unpack_from("<I", root, 2)[0], struct.unpack_from("<I", root, 10)[0]
    iso.seek(lba * 2048)
    d = iso.read(size)
    o = 0
    while o < len(d):
        n = d[o]
        if n == 0:
            o = (o // 2048 + 1) * 2048
            continue
        fname = d[o + 33:o + 33 + d[o + 32]].decode("latin-1").split(";")[0]
        if fname.upper() == name.upper():
            return struct.unpack_from("<I", d, o + 2)[0] * 2048, struct.unpack_from("<I", d, o + 10)[0]
        o += n
    raise FileNotFoundError(name)


class Enough(Exception):
    pass


def head_of_gut(data, want=8192):
    """First `want` bytes of a GUT/UCL entry, decompressing only as much as needed."""
    off = 0x12
    raw = struct.unpack_from(">I", data, off)[0]
    packed = struct.unpack_from(">I", data, off + 4)[0]
    chunk = data[off + 8:off + 8 + packed]
    if raw <= packed:
        return chunk[:want]
    try:
        return eb.nrv2b_decompress_32(chunk, raw)[:want]
    except Exception:
        return b""


def classify(h, size=None):
    """Type of an entry from its first bytes; packs are 'pack(N): <type of item 0>'."""
    leaf = classify_leaf(h)
    if leaf != "unknown" or len(h) < 8:
        return leaf
    n = struct.unpack_from("<I", h, 0)[0]
    if 1 <= n <= 4096 and 4 + 4 * n <= len(h):
        offs = struct.unpack_from(f"<{n}I", h, 4)
        nz = [o for o in offs if o]
        if nz and all(4 + 4 * n <= o for o in nz) and nz == sorted(nz) and (size is None or nz[-1] <= size):
            first = nz[0]
            inner = classify_leaf(h[first:first + 64]) if first + 16 <= len(h) else "?"
            return f"pack: {inner}"
    if len(h) >= 32 and h[2:4] != b"\0\0" and sum(1 for i in range(1, 32, 2) if h[i] in (0, 0xff)) >= 14:
        return "16-bit glyph-index text"
    if n == 0xC and len(h) > 0x10:
        o = struct.unpack_from("<I", h, 4)[0]
        if 0x10 < o < len(h) - 16 and h[o + 12:o + 16] == b"TIM2":
            return "sprite sheet (0xc header + TIM2)"
    return "unknown"


def classify_leaf(h):
    table = {
        b"TIM2": "TIM2 texture",
        b"\x7fELF": "ELF",
        b"RIFF": "RIFF",
        b"VAGp": "VAG sound",
        b"IECS": "PS2 sound bank (IECS/SCEI)",
        b"SShd": "PS2 sound bank header (SShd)",
        b"SSbd": "PS2 sound bank body",
        b"PSMF": "PSMF movie",
        b"\x00\x00\x01\xba": "MPEG-2 program stream (PSS movie)",
        b"BM": "BMP",
        b"\x89PNG": "PNG",
    }
    for k, v in table.items():
        if h.startswith(k):
            return v
    if h[:4] == b"0IVX":
        return "XVI model (XVI0: XMDL/NORM/... chunks)"
    if len(h) >= 8 and all(48 <= c < 91 for c in h[:4]) and h[4:8].replace(b".", b"").isdigit():
        return f"XVI chunk {h[:4][::-1].decode()} v{h[4:8].decode()}"
    if h[:8] == b"IECSsreV":
        return "PS2 sound bank (IECS/SCEI)"
    if h and all(32 <= c < 127 or c in (9, 10, 13) for c in h[:32]):
        return "text"
    return "unknown"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("iso")
    ap.add_argument("toc")
    ap.add_argument("--csv")
    a = ap.parse_args()
    _, entries = eb.read_toc(a.toc)
    rows = []
    with open(a.iso, "rb") as iso:
        base, _size = iso_find(iso, "BUILD.DAT")
        for i, (sector, stored, _n, stream, unpacked) in enumerate(entries):
            if stream or stored == 0:
                # stream entries have sector 0 and name files read from outside BUILD.DAT
                rows.append((i, sector, stored, unpacked, "streamed (outside BUILD.DAT)" if stream else "empty", ""))
                continue
            iso.seek(base + sector * 2048)
            if unpacked:
                # the first chunk only; chunk sizes are in the 18-byte header region
                hdr = iso.read(0x1a)
                packed = struct.unpack_from(">I", hdr, 0x16)[0]
                iso.seek(base + sector * 2048)
                h = head_of_gut(iso.read(0x1a + packed))
            else:
                h = iso.read(min(stored, 8192))
            t = classify(h, unpacked or stored)
            rows.append((i, sector, stored, unpacked, ("packed " if unpacked else "") + t, h[:8].hex()))
            if i % 1000 == 0:
                print(f"  {i}/{len(entries)}", file=sys.stderr)
    by = collections.Counter(r[4] for r in rows)
    mag = collections.Counter((r[4], r[5][:8]) for r in rows if "unknown" in r[4])
    for t, n in by.most_common():
        print(f"{n:6d}  {t}")
    print("most common unknown 4-byte headers:")
    for (t, m), n in mag.most_common(25):
        print(f"{n:6d}  {t:16s} {m}")
    if a.csv:
        with open(a.csv, "w", newline="") as f:
            w = csv.writer(f)
            w.writerow(["index", "sector", "stored", "unpacked", "type", "magic8"])
            w.writerows(rows)


if __name__ == "__main__":
    main()
