"""Decompile the game's own IOP modules (board row F17) with Ghidra, headless.

    tools/venv/Scripts/python -I scripts/iop_export.py

Imports iso_extract/IRX/XVI/XVI_IOP.IRX and XVI_SND.IRX (MIPS R3000, little-endian IRX = ELF
type 0xff80) into tools/ghidra_iop_proj, names the import stubs after their library and export
index (e.g. `libsd_12`) and the module's own exports (`xvi_iop_N`), names functions after the
"Prefix> Message" debug strings they print, and writes decomp/iop/<module>.c and
decomp/iop/<module>_functions.csv. The IRX files are game data and are never committed.
"""
import csv
import re
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
GHIDRA = ROOT / "tools" / "ghidra_12.2_PUBLIC"
PROJ = ROOT / "tools" / "ghidra_iop_proj"
OUT = ROOT / "decomp" / "iop"
MODULES = [ROOT / "iso_extract/IRX/XVI/XVI_IOP.IRX", ROOT / "iso_extract/IRX/XVI/XVI_SND.IRX"]
LANG = "MIPS:LE:32:default"


def ident(s):
    return re.sub(r"[^A-Za-z0-9_]", "_", s)


def main():
    import pyghidra
    pyghidra.start(install_dir=GHIDRA)
    OUT.mkdir(parents=True, exist_ok=True)
    for mod in MODULES:
        with pyghidra.open_program(str(mod), project_location=str(PROJ), project_name="KaidoIOP",
                                   analyze=True, language=LANG) as flat:
            export_module(flat.getCurrentProgram(), mod)


def known_exports():
    """(library, index) -> name from config/iop_exports.csv (ps2sdk export tables)."""
    out = {}
    with open(ROOT / "config" / "iop_exports.csv") as f:
        for r in csv.DictReader(line for line in f if not line.startswith("#")):
            out[(r["library"], int(r["index"]))] = r["name"]
    return out


def export_module(program, mod):
    from ghidra.app.decompiler import DecompInterface
    from ghidra.program.model.symbol import SourceType
    from ghidra.util.task import ConsoleTaskMonitor
    mem = program.getMemory()
    af = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    listing = program.getListing()
    tx = program.startTransaction("name")
    names = {}
    known = known_exports()
    try:
        # walk every initialized block for import (0x41e00000) and export (0x41c00000) tables
        for blk in mem.getBlocks():
            if not blk.isInitialized() or not blk.isExecute() and blk.getName() not in (".text", ".data"):
                pass
            if not blk.isInitialized():
                continue
            start = blk.getStart().getOffset()
            data = bytes(b & 0xff for b in blk.getData().readAllBytes()) if hasattr(blk.getData(), "readAllBytes") else None
            if data is None:
                buf = bytearray(blk.getSize())
                for i in range(len(buf)):
                    buf[i] = mem.getByte(blk.getStart().add(i)) & 0xff
                data = bytes(buf)
            for magic, kind in ((b"\x00\x00\xe0\x41\x00\x00\x00\x00", "imp"), (b"\x00\x00\xc0\x41\x00\x00\x00\x00", "exp")):
                for m in re.finditer(re.escape(magic), data):
                    lib = data[m.start() + 12:m.start() + 20].split(b"\0")[0].decode("latin-1")
                    if not re.fullmatch(r"[A-Za-z0-9_]{2,8}", lib):
                        continue
                    o = m.start() + 20
                    if kind == "imp":
                        # stubs: jr $ra ; addiu $zero, $zero, index
                        while o + 8 <= len(data):
                            a, b = struct.unpack_from("<II", data, o)
                            if a != 0x03E00008 or (b >> 16) != 0x2400:
                                break
                            names[start + o] = known.get((lib, b & 0xffff), f"{lib}_{b & 0xffff}")
                            o += 8
                    else:
                        idx = 0
                        while o + 4 <= len(data):
                            p, = struct.unpack_from("<I", data, o)
                            if p == 0:
                                break
                            if idx >= 4 or True:
                                names.setdefault(p, f"{lib}_export{idx}")
                            idx += 1
                            o += 4
        for a, n in names.items():
            addr = af.getAddress(a)
            f = fm.getFunctionAt(addr)
            if f is None:
                f = flat_create(program, addr)
            if f is not None:
                f.setName(n, SourceType.USER_DEFINED)
        # hand-confirmed names (config/iop_symbols.csv) win over everything else
        with open(ROOT / "config" / "iop_symbols.csv", encoding="utf-8") as fh:
            for r in csv.DictReader(fh):
                if r["module"].upper() == mod.stem.upper():
                    a = af.getAddress(int(r["address"], 16))
                    f = fm.getFunctionAt(a) or flat_create(program, a)
                    if f is not None:
                        f.setName(r["name"], SourceType.USER_DEFINED)
                        if r["comment"]:
                            f.setComment(r["comment"])
        # name functions after the debug string prefix they use ("SBasic> BlockTrans ...")
        refm = program.getReferenceManager()
        for d in listing.getDefinedData(True):
            v = d.getValue()
            if not isinstance(v, str):
                continue
            m = re.match(r"(\w+)> ([A-Za-z][A-Za-z0-9]+)", v)
            if not m:
                continue
            for r in refm.getReferencesTo(d.getAddress()):
                f = fm.getFunctionContaining(r.getFromAddress())
                if f and f.getName().startswith("FUN_"):
                    f.setName(ident(f"{m.group(1)}_{m.group(2)}"), SourceType.ANALYSIS)
    finally:
        program.endTransaction(tx, True)

    dec = DecompInterface()
    dec.openProgram(program)
    mon = ConsoleTaskMonitor()
    stem = mod.stem.lower()
    rows, parts = [], [f"/* {mod.name}: Ghidra decompilation (scripts/iop_export.py). IOP R3000 code. */\n"]
    for f in fm.getFunctions(True):
        if f.isThunk():
            continue
        res = dec.decompileFunction(f, 60, mon)
        body = res.getDecompiledFunction().getC() if res and res.getDecompiledFunction() else "/* decompile failed */\n"
        a = f.getEntryPoint().getOffset()
        rows.append((f"0x{a:08x}", f.getName(), f.getBody().getNumAddresses()))
        parts.append(f"// 0x{a:08x}  size 0x{f.getBody().getNumAddresses():x}\n{body}\n")
    (OUT / f"{stem}.c").write_text("".join(parts), encoding="utf-8", newline="\n")
    with open(OUT / f"{stem}_functions.csv", "w", newline="") as fh:
        w = csv.writer(fh)
        w.writerow(["address", "name", "size"])
        w.writerows(rows)
    named = sum(1 for r in rows if not r[1].startswith("FUN_"))
    print(f"{mod.name}: {len(rows)} functions, {named} named")


def flat_create(program, addr):
    from ghidra.app.cmd.function import CreateFunctionCmd
    CreateFunctionCmd(addr).applyTo(program)
    return program.getFunctionManager().getFunctionAt(addr)


if __name__ == "__main__":
    main()
