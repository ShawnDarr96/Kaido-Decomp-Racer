"""Extract BUILD.DAT using BUILD.TOC (Kaido Racer archive format).

    python -I scripts/extract_build.py <iso_extract dir> <out dir> [--raw] [--only N[-M]]

Format (from Arc_Init / Arc_LoadFileEx / Gut_ArchiveDecompress in the executable):

BUILD.TOC   16-byte header (u32 entry count, 3 more u32), then `count` entries of 0x14 bytes:
            u32 sector   start in BUILD.DAT, in 2048-byte sectors
            u32 stored   bytes stored in BUILD.DAT
            u32 sectors  ceil(stored / 2048), checked for all 15219 entries
            u32 stream   1 on 102 entries with sector 0 and 4-333 MB sizes (files streamed from
                         outside BUILD.DAT); 0 otherwise
            u32 unpacked 0 = stored as-is, otherwise the size after GUT decompression
GUT archive a standard `uclpack` stream: magic 00 e9 'UCL' ff 01 1a, u32 BE flags, u8 method (0x2b,
            NRV2B_LE32), u8 level, u32 BE block size; then chunks of big-endian u32 raw size and u32
            packed size followed by the packed bytes (raw <= packed means stored). A raw size of 0 ends.

The output is your own game data: it is git-ignored and must not be committed.
"""
import argparse
import struct
import sys
from pathlib import Path


def nrv2b_decompress_32(src, dst_size):
    """UCL NRV2B decompression, 32-bit LE bit buffer (port of Gut_DecompressBlock)."""
    out = bytearray()
    ip = 0
    bb = 0
    bc = 0

    def getbit():
        nonlocal ip, bb, bc
        if bc == 0:
            bb = struct.unpack_from("<I", src, ip)[0]
            ip += 4
            bc = 31
            return bb >> 31
        bc -= 1
        return (bb >> bc) & 1

    last_off = 1
    while True:
        while getbit():
            out.append(src[ip])
            ip += 1
        m_off = 1
        while True:
            m_off = m_off * 2 + getbit()
            if getbit():
                break
        if m_off != 2:
            m_off = (m_off - 3) * 256 + src[ip]
            ip += 1
            if m_off == 0xFFFFFFFF or m_off == -1 or (m_off & 0xFFFFFFFF) == 0xFFFFFFFF:
                break
            last_off = m_off + 1
        m_len = getbit() * 2 + getbit()
        if m_len == 0:
            m_len = 1
            while True:
                m_len = m_len * 2 + getbit()
                if getbit():
                    break
            m_len += 2
        m_len += 1 if last_off > 0xD00 else 0
        pos = len(out) - last_off
        out.append(out[pos])
        for i in range(m_len):
            out.append(out[pos + 1 + i])
        if len(out) > dst_size + 0x100:
            raise ValueError("NRV2B output overflow")
    return bytes(out)


def gut_decompress(data, unpacked):
    out = bytearray()
    off = 0x12
    while True:
        raw = struct.unpack_from(">I", data, off)[0]
        if raw == 0:
            break
        packed = struct.unpack_from(">I", data, off + 4)[0]
        off += 8
        chunk = data[off:off + packed]
        off += packed
        out += chunk[:raw] if raw <= packed else nrv2b_decompress_32(chunk, raw)[:raw]
    if len(out) != unpacked:
        raise ValueError(f"size {len(out):#x} != expected {unpacked:#x}")
    return bytes(out)


def read_toc(path):
    toc = Path(path).read_bytes()
    count = struct.unpack_from("<I", toc, 0)[0]
    entries = [struct.unpack_from("<5I", toc, 0x10 + i * 0x14) for i in range(count)]
    return toc[:0x10], entries


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("src", help="folder with BUILD.TOC and BUILD.DAT")
    ap.add_argument("out")
    ap.add_argument("--raw", action="store_true", help="do not decompress")
    ap.add_argument("--only", help="entry index or range, e.g. 0-99")
    a = ap.parse_args()
    src, out = Path(a.src), Path(a.out)
    header, entries = read_toc(src / "BUILD.TOC")
    lo, hi = 0, len(entries) - 1
    if a.only:
        parts = a.only.split("-")
        lo, hi = int(parts[0], 0), int(parts[-1], 0)
    out.mkdir(parents=True, exist_ok=True)
    ok = bad = 0
    with open(src / "BUILD.DAT", "rb") as dat:
        for i in range(lo, hi + 1):
            sector, stored, unk08, unk0c, unpacked = entries[i]
            if stored == 0:
                continue
            dat.seek(sector * 2048)
            data = dat.read(stored)
            ext = "bin"
            if unpacked and not a.raw:
                try:
                    data = gut_decompress(data, unpacked)
                except Exception as e:  # keep going; report
                    print(f"entry {i}: {e}", file=sys.stderr)
                    bad += 1
                    ext = "gut"
            (out / f"{i:05d}.{ext}").write_bytes(data)
            ok += 1
    print(f"{len(entries)} entries in TOC; wrote {ok} files to {out} ({bad} failed to decompress)")


if __name__ == "__main__":
    main()
