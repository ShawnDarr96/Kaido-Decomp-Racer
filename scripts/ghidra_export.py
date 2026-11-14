"""Import + analyze the Kaido Racer ELF in Ghidra (headless, via PyGhidra) and export
every function as decompiled C.

    tools/venv/Scripts/python scripts/ghidra_export.py [--reanalyze]

Output (committed): decomp/src/text_XXXXXXXX.c (one per 16 KiB), decomp/functions.csv,
decomp/strings.csv. The Ghidra project is kept in tools/ghidra_proj (not committed) and can
be opened in the Ghidra GUI with the GhidraMCP plugin.
"""
import argparse
import concurrent.futures as cf
import csv
import os
import sys
import threading
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
GHIDRA = ROOT / "tools" / "ghidra_12.2_PUBLIC"
ELF = ROOT / "iso_extract" / "SLES_531.91"
PROJ = ROOT / "tools" / "ghidra_proj"
OUT = ROOT / "decomp"
BUCKET = 0x4000
LANG = "r5900:LE:32:default"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--threads", type=int, default=max(2, (os.cpu_count() or 4) - 2))
    ap.add_argument("--timeout", type=int, default=120)
    ap.add_argument("--auto-names", action="store_true",
                    help="name SDK functions after the function names quoted in their error strings")
    args = ap.parse_args()

    import pyghidra
    pyghidra.start(install_dir=GHIDRA)

    with pyghidra.open_program(str(ELF), project_location=str(PROJ), project_name="KaidoRacer",
                               analyze=True, language=LANG) as flat:
        program = flat.getCurrentProgram()
        tx = program.startTransaction("apply symbols")
        try:
            apply_symbols(program)
            if args.auto_names:
                auto_name_from_strings(program)
        finally:
            program.endTransaction(tx, True)
        write_symbols(program)
        export(program, args)


SYMBOLS = ROOT / "config" / "symbols.csv"
SYM_FIELDS = ["address", "name", "signature", "source", "comment"]


def read_symbols():
    if not SYMBOLS.exists():
        return {}
    with open(SYMBOLS, encoding="utf-8", newline="") as f:
        return {int(r["address"], 16): r for r in csv.DictReader(f)}


def apply_symbols(program):
    """Apply config/symbols.csv (the shared source of truth) to the Ghidra project."""
    from ghidra.program.model.symbol import SourceType
    from ghidra.app.util.parser import FunctionSignatureParser
    from ghidra.app.cmd.function import ApplyFunctionSignatureCmd, CreateFunctionCmd
    from ghidra.program.model.listing import CodeUnit
    from ghidra.util.task import ConsoleTaskMonitor

    af = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    parser = FunctionSignatureParser(program.getDataTypeManager(), None)
    n = bad = 0
    for a, r in read_symbols().items():
        addr = af.getAddress(a)
        f = fm.getFunctionAt(addr)
        if f is None:
            CreateFunctionCmd(addr).applyTo(program, ConsoleTaskMonitor())
            f = fm.getFunctionAt(addr)
        if f is None:
            print(f"  symbols.csv: no function at 0x{a:08x}", flush=True)
            bad += 1
            continue
        if r["name"] and f.getName() != r["name"]:
            f.setName(r["name"], SourceType.USER_DEFINED)
        if r.get("signature"):
            try:
                sig = parser.parse(f.getSignature(), r["signature"])
                ApplyFunctionSignatureCmd(addr, sig, SourceType.USER_DEFINED).applyTo(program, ConsoleTaskMonitor())
            except Exception as e:  # keep going; report the row
                print(f"  symbols.csv: bad signature at 0x{a:08x}: {e}", flush=True)
                bad += 1
        if r.get("comment"):
            program.getListing().setComment(addr, CodeUnit.PLATE_COMMENT, r["comment"])
        n += 1
    print(f"applied {n} symbols ({bad} problems)", flush=True)


def write_symbols(program):
    """Merge names given in Ghidra back into config/symbols.csv (one row per function, by address)."""
    from ghidra.program.model.symbol import SourceType
    rows = read_symbols()
    for f in program.getFunctionManager().getFunctions(True):
        if f.isExternal() or f.getSymbol().getSource() == SourceType.DEFAULT:
            continue
        a = f.getEntryPoint().getOffset()
        src = {"USER_DEFINED": "ghidra", "ANALYSIS": "analysis", "IMPORTED": "elf"}.get(
            str(f.getSymbol().getSource()), "ghidra")
        r = rows.setdefault(a, {"address": f"0x{a:08x}", "name": "", "signature": "", "source": src,
                                "comment": ""})
        r["name"] = f.getName()
    SYMBOLS.parent.mkdir(exist_ok=True)
    with open(SYMBOLS, "w", encoding="utf-8", newline="\n") as fh:
        w = csv.DictWriter(fh, SYM_FIELDS, lineterminator="\n")
        w.writeheader()
        for a in sorted(rows):
            w.writerow({k: rows[a].get(k, "") for k in SYM_FIELDS})
    print(f"symbols.csv: {len(rows)} names", flush=True)


def auto_name_from_strings(program):
    """Name unnamed functions after the SDK function quoted in their own error strings,
    e.g. a function that prints "sceGsSyncPath: DMA Ch.1 does not terminate" is sceGsSyncPath.
    Only names a function when exactly one such name is referenced from it."""
    import re
    from ghidra.program.model.symbol import SourceType
    pat = re.compile(r"^(sce[A-Z]\w+|lgDev[A-Z]\w+|sceMpeg\w+)\s*[:(=]")
    listing = program.getListing()
    refman = program.getReferenceManager()
    fm = program.getFunctionManager()
    cands = {}
    for d in listing.getDefinedData(True):
        if not d.hasStringValue() or d.getValue() is None:
            continue
        m = pat.match(str(d.getValue()))
        if not m:
            continue
        for ref in refman.getReferencesTo(d.getAddress()):
            f = fm.getFunctionContaining(ref.getFromAddress())
            if f is not None:
                cands.setdefault(f.getEntryPoint(), set()).add(m.group(1))
    used = {f.getName() for f in fm.getFunctions(True)}
    n = 0
    for ep, names in cands.items():
        f = fm.getFunctionAt(ep)
        if len(names) != 1 or f.getSymbol().getSource() != SourceType.DEFAULT:
            continue
        name = names.pop()
        if name in used:
            continue
        f.setName(name, SourceType.ANALYSIS)
        used.add(name)
        n += 1
    print(f"auto-named {n} functions from strings", flush=True)


def export(program, args):
    from ghidra.app.decompiler import DecompInterface, DecompileOptions
    from ghidra.util.task import ConsoleTaskMonitor

    listing = program.getListing()
    funcs = [f for f in listing.getFunctions(True) if not f.isExternal() and not f.isThunk()]
    print(f"functions: {len(funcs)}", flush=True)

    local = threading.local()
    lock = threading.Lock()
    done = [0]

    def decomp(f):
        d = getattr(local, "d", None)
        if d is None:
            d = DecompInterface()
            d.setOptions(DecompileOptions())
            d.toggleCCode(True)
            d.toggleSyntaxTree(False)
            d.openProgram(program)
            local.d = d
        r = d.decompileFunction(f, args.timeout, ConsoleTaskMonitor())
        if r.decompileCompleted() and r.getDecompiledFunction() is not None:
            c, ok = str(r.getDecompiledFunction().getC()), True
        else:
            c, ok = f"/* decompilation failed: {r.getErrorMessage()} */\n", False
        with lock:
            done[0] += 1
            if done[0] % 500 == 0:
                print(f"  {done[0]}/{len(funcs)}", flush=True)
        return c, ok

    with cf.ThreadPoolExecutor(args.threads) as ex:
        results = list(ex.map(decomp, funcs))

    src = OUT / "src"
    src.mkdir(parents=True, exist_ok=True)
    for old in src.glob("text_*.c"):
        old.unlink()

    buckets = {}
    for f, res in zip(funcs, results):
        a = f.getEntryPoint().getOffset()
        buckets.setdefault(a // BUCKET * BUCKET, []).append((f, res))

    failed = 0
    with open(OUT / "functions.csv", "w", newline="", encoding="utf-8") as idxf:
        idx = csv.writer(idxf)
        idx.writerow(["address", "size", "name", "file", "status"])
        for base in sorted(buckets):
            name = f"text_{base:08x}.c"
            with open(src / name, "w", encoding="utf-8", newline="\n") as w:
                w.write("// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.\n")
                w.write(f"// Address range 0x{base:08x} - 0x{base + BUCKET:08x}\n")
                w.write('#include "ghidra_types.h"\n\n')
                for f, (c, ok) in buckets[base]:
                    failed += not ok
                    addr = f"0x{f.getEntryPoint().getOffset():08x}"
                    size = f.getBody().getNumAddresses()
                    w.write(f"// {addr}  size 0x{size:x}\n{c.strip()}\n\n")
                    idx.writerow([addr, f"0x{size:x}", f.getName(), f"src/{name}",
                                  "decompiled" if ok else "failed"])

    # Call graph + string references per function (for naming work without Ghidra open).
    from ghidra.util.task import ConsoleTaskMonitor
    mon = ConsoleTaskMonitor()
    refman = program.getReferenceManager()
    with open(OUT / "xrefs.csv", "w", newline="", encoding="utf-8") as xf:
        xw = csv.writer(xf, lineterminator="\n")
        xw.writerow(["address", "name", "callees", "callers", "strings", "data_refs"])
        for f in funcs:
            callees = sorted(f"0x{c.getEntryPoint().getOffset():08x}" for c in f.getCalledFunctions(mon))
            callers = sorted(f"0x{c.getEntryPoint().getOffset():08x}" for c in f.getCallingFunctions(mon))
            strs, datas = [], set()
            for a in f.getBody().getAddresses(True):
                for ref in refman.getReferencesFrom(a):
                    if not ref.getReferenceType().isData():
                        continue
                    d = listing.getDataAt(ref.getToAddress())
                    if d is not None and d.hasStringValue() and d.getValue() is not None:
                        s = str(d.getValue())
                        if s not in strs:
                            strs.append(s)
                    else:
                        datas.add(f"0x{ref.getToAddress().getOffset():08x}")
            xw.writerow([f"0x{f.getEntryPoint().getOffset():08x}", f.getName(), " ".join(callees),
                         " ".join(callers), " | ".join(s.replace("\n", "\\n") for s in strs),
                         " ".join(sorted(datas))])

    with open(OUT / "strings.csv", "w", newline="", encoding="utf-8") as sf:
        sw = csv.writer(sf)
        sw.writerow(["address", "string"])
        for d in listing.getDefinedData(True):
            if d.hasStringValue() and d.getValue() is not None:
                sw.writerow([f"0x{d.getAddress().getOffset():08x}", str(d.getValue())])

    print(f"exported {len(funcs)} functions into {len(buckets)} files; failed: {failed}", flush=True)


if __name__ == "__main__":
    sys.exit(main())
