"""Write C for simple global-pointer accessors in an address range, from the mkscratch.py asm.

    python -I scripts/autoc.py 0x17e600 0x17e900          # prints C, or lists what it cannot handle
    python -I scripts/autoc.py --scan                     # find runs where every function is handled

Patterns (MWCPS2 3.0 -O4,p output): load the global pointer, then one load/store/addiu at an offset.
"""
import csv
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
LOADS = {"lw": "int", "lb": "signed char", "lbu": "unsigned char", "lh": "short", "lhu": "unsigned short",
         "lwc1": "float"}
STORES = {"sw": "int", "sb": "signed char", "sh": "short", "swc1": "float"}


def asm(lo, hi):
    return subprocess.run([sys.executable, "-I", str(ROOT / "scripts/mkscratch.py"), hex(lo), hex(hi)],
                          capture_output=True, text=True).stdout


def split(text):
    funcs, cur = [], None
    for l in text.splitlines():
        if l.startswith("glabel "):
            cur = [l[7:], []]
            funcs.append(cur)
        elif cur:
            cur[1].append(l)
    return funcs


def c_for(name, body):
    b = " ; ".join(body)
    g = r"%gp_rel\((\w+)\)\(\$gp\)"
    m = re.fullmatch(r"lw \$(v[01]),"+g+r" ; jr \$ra ; (l\w+) \$(v0|f0),(\d+)\(\$\1\)", b)
    if m and m.group(3) in LOADS:
        t = LOADS[m.group(3)]
        return f"{t} {name}(void) {{ return *({t} *)(((char *){m.group(2)}) + 0x{int(m.group(5)):x}); }}", m.group(2)
    m = re.fullmatch(r"lw \$(v[01]),"+g+r" ; jr \$ra ; (s\w+) \$(a0|f12),(\d+)\(\$\1\)", b)
    if m and m.group(3) in STORES:
        t = STORES[m.group(3)]
        return f"void {name}({t} v) {{ *({t} *)(((char *){m.group(2)}) + 0x{int(m.group(5)):x}) = v; }}", m.group(2)
    m = re.fullmatch(r"lw \$v0,"+g+r" ; jr \$ra ; addiu \$v0,\$v0,(\d+)", b)
    if m:
        return f"char *{name}(void) {{ return ((char *){m.group(1)}) + 0x{int(m.group(2)):x}; }}", m.group(1)
    m = re.fullmatch(r"lw \$v0,"+g+r" ; jr \$ra ; nop", b)
    if m:
        return f"void *{name}(void) {{ return {m.group(1)}; }}", m.group(1)
    return None, None


def main():
    if sys.argv[1] == "--scan":
        F = sorted((int(r["address"], 16), r["name"]) for r in csv.DictReader(open(ROOT / "decomp/functions.csv")))
        text = asm(0x100000, 0x2fd9b8)
        ok = {n for n, b in split(text) if c_for(n, b)[0]}
        runs, cur = [], []
        for a, n in F:
            if n in ok:
                cur.append((a, n))
            else:
                if len(cur) >= 4:
                    runs.append(cur)
                cur = []
        for r in sorted(runs, key=len, reverse=True)[:15]:
            print(f"{r[0][0]:#x}-{r[-1][0]:#x} {len(r)} functions, e.g. {r[0][1]}")
        print(len(ok), "accessor-shaped functions in total")
        return
    lo, hi = int(sys.argv[1], 16), int(sys.argv[2], 16)
    out, globs, bad = [], set(), []
    for n, b in split(asm(lo, hi)):
        c, gl = c_for(n, b)
        if c:
            out.append(c)
            globs.add(gl)
        else:
            bad.append(n)
    print("\n".join(f"extern void *{g};" for g in sorted(globs)))
    print("\n".join(out))
    if bad:
        print("/* not handled: " + ", ".join(bad) + " */")


if __name__ == "__main__":
    main()
