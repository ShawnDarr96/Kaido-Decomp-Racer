"""Survey the IOP modules shipped on the disc (board row F7).

    python -I scripts/survey_irx.py iso_extract/IRX

For each .IRX: the module name and version from its .iopmod section, the libraries it exports
and imports (from the export/import tables), and Sony/SCE copyright strings. Also lists what is
inside IOPRP*.IMG (a ROMDIR image of replacement IOP modules).
"""
import re
import struct
import sys
from pathlib import Path


def iopmod(data):
    if data[:4] != b"\x7fELF":
        return None
    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum = struct.unpack_from("<HH", data, 0x2E)
    for i in range(shnum):
        sh = struct.unpack_from("<10I", data, shoff + i * shentsize)
        if sh[1] == 0x70000080:  # SHT_IOPMOD
            off = sh[4]
            ver, = struct.unpack_from("<H", data, off + 0x18)
            name = data[off + 0x1A:].split(b"\0")[0].decode("latin-1")
            return name, f"{ver >> 8}.{ver & 0xff}"
    return None


def tables(data):
    """Export (magic 0x41c00000) and import (0x41e00000) tables: magic, 0, version, 0, 8-byte name."""
    out = []
    for magic in (rb"\x00\x00\xc0\x41\x00\x00\x00\x00", rb"\x00\x00\xe0\x41\x00\x00\x00\x00"):
        names = set()
        for m in re.finditer(magic, data):
            name = data[m.start() + 12:m.start() + 20].split(b"\0")[0]
            if re.fullmatch(rb"[A-Za-z0-9_]{2,8}", name):
                names.add(name.decode())
        out.append(sorted(names))
    return out


def romdir(data):
    out, o = [], 0
    while o + 16 <= len(data):
        name = data[o:o + 10].split(b"\0")[0]
        if not name:
            break
        size, = struct.unpack_from("<I", data, o + 12)
        out.append((name.decode("latin-1"), size))
        o += 16
    return out


def main():
    root = Path(sys.argv[1])
    for f in sorted(root.rglob("*")):
        if not f.is_file():
            continue
        data = f.read_bytes()
        rel = f.relative_to(root)
        if f.suffix.upper() == ".IMG":
            print(f"{rel}: ROMDIR " + ", ".join(f"{n}({s})" for n, s in romdir(data)))
            continue
        mod = iopmod(data)
        ex, im = tables(data)
        sce = sorted({m.decode() for m in re.findall(rb"(?:Copyright|\(C\)|SCEI|Sony)[ -~]{0,60}", data)})
        print(f"{rel}: size {len(data)}, module {mod}, exports {ex}, imports {im}")
        for s in sce[:3]:
            print(f"    {s}")


if __name__ == "__main__":
    main()
