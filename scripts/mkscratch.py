"""Make decomp.me target assembly for the functions in an address range.

    python -I scripts/mkscratch.py 0x176f30 0x177210 > scratch.s

Uses objdump on build/SLES_531.91.elf (run scripts/build.py first), names from config/symbols.csv
and config/globals.csv. Only instructions inside function bodies are emitted (no link padding).
"""
import csv
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OBJDUMP = ROOT / "tools/ps2dev/ee/bin/mips64r5900el-ps2-elf-objdump.exe"
GP = 0x3766F0


def main():
    lo, hi = int(sys.argv[1], 16), int(sys.argv[2], 16)
    funcs = {int(r["address"], 16): r["name"] for r in csv.DictReader(open(ROOT / "config/symbols.csv", encoding="utf-8"))}
    glob = {int(r["address"], 16): r["name"] for r in csv.DictReader(open(ROOT / "config/globals.csv", encoding="utf-8"))}
    ranges = [(int(r["start"], 16), int(r["end"], 16)) for r in csv.DictReader(open(ROOT / "decomp/function_ranges.csv"))]
    inside = lambda a: any(s <= a < e for s, e in ranges)
    out = subprocess.run([str(OBJDUMP), "-D", "-z", f"--start-address={lo:#x}", f"--stop-address={hi:#x}",
                          str(ROOT / "build/SLES_531.91.elf")], capture_output=True, text=True).stdout
    ins = []
    for line in out.splitlines():
        m = re.match(r"\s+([0-9a-f]+):\t([0-9a-f]{8}) \t(\S+)\t?(.*)", line)
        if m:
            word, op, args = int(m.group(2), 16), m.group(3), m.group(4).split("<")[0].strip()
            if op == "move":
                # objdump prints daddu/or/addu rd,rs,zero all as "move", and GAS assembles "move" as
                # only one of them, so spell out the instruction the game actually uses
                real = {0x2d: "daddu", 0x25: "or", 0x21: "addu"}.get(word & 0x3f)
                if real:
                    op, args = real, args + ",zero"
            ins.append((int(m.group(1), 16), op, args))
    targets = set()
    for a, op, args in ins:
        if (op.startswith("b") or op == "j") and re.search(r"\b([0-9a-f]{6})$", args):
            targets.add(int(re.search(r"([0-9a-f]{6})$", args).group(1), 16))
    regs = r"\b(zero|at|v[01]|a[0-3]|t[0-9]|s[0-8]|k[01]|gp|sp|fp|ra|f[0-9]{1,2})\b"
    lines = []
    for a, op, args in ins:
        if not inside(a):
            continue
        if a in funcs:
            lines.append(f"glabel {funcs[a]}")
        elif a in targets:
            lines.append(f".L{a:06x}:")
        m = re.search(r"(-?\d+)\(gp\)", args)
        if m and (GP + int(m.group(1))) in glob:
            args = args.replace(m.group(0), f"%gp_rel({glob[GP + int(m.group(1))]})(gp)")
        if op in ("jal", "j") and re.search(r"([0-9a-f]{6})$", args):
            t = int(re.search(r"([0-9a-f]{6})$", args).group(1), 16)
            args = funcs.get(t, f"func_{t:08x}") if op == "jal" else (f".L{t:06x}" if t in targets else funcs.get(t, f"func_{t:08x}"))
        elif op.startswith("b") and re.search(r"([0-9a-f]{6})$", args):
            t = int(re.search(r"([0-9a-f]{6})$", args).group(1), 16)
            args = re.sub(r"[0-9a-f]{6}$", f".L{t:06x}", args)
        args = re.sub(regs, r"$\1", args)
        lines.append(f"{op} {args}".rstrip())
    print("\n".join(lines))


if __name__ == "__main__":
    main()
