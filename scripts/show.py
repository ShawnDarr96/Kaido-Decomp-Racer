"""Print functions from the exported decompilation with their calls and strings.

    python -I scripts/show.py 0x104000 0x108000      # every function in a range
    python -I scripts/show.py 0x00180160              # one function
    python -I scripts/show.py 0x104000 0x108000 --max-lines 25 --unnamed
"""
import argparse
import csv
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def load_c():
    bodies = {}
    for p in sorted((ROOT / "decomp" / "src").glob("text_*.c")):
        cur, buf = None, []
        for line in p.read_text(encoding="utf-8").splitlines():
            m = re.match(r"// (0x[0-9a-f]{8})  size", line)
            if m:
                if cur:
                    bodies[cur] = "\n".join(buf).strip()
                cur, buf = m.group(1), []
            elif cur:
                buf.append(line)
        if cur:
            bodies[cur] = "\n".join(buf).strip()
    return bodies


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("start")
    ap.add_argument("end", nargs="?")
    ap.add_argument("--max-lines", type=int, default=40)
    ap.add_argument("--unnamed", action="store_true")
    ap.add_argument("--compact", action="store_true", help="drop declarations and blank structure lines")
    a = ap.parse_args()
    lo = int(a.start, 16)
    hi = int(a.end, 16) if a.end else lo + 1
    X = {r["address"]: r for r in csv.DictReader(open(ROOT / "decomp" / "xrefs.csv", encoding="utf-8"))}
    names = {k: v["name"] for k, v in X.items()}
    C = load_c()
    for addr in sorted(X, key=lambda s: int(s, 16)):
        if not lo <= int(addr, 16) < hi:
            continue
        r = X[addr]
        if a.unnamed and not r["name"].startswith("FUN_"):
            continue
        callees = [names.get(c, c) for c in r["callees"].split()]
        print(f"=== {addr} {r['name']}  callers={len(r['callers'].split())}")
        if callees:
            print("  calls:", ", ".join(callees[:12]))
        if r["strings"]:
            print("  strings:", r["strings"][:200])
        lines = C.get(addr, "").splitlines()
        body = [l for l in lines if l.strip()]
        if a.compact:
            decl = re.compile(r"^\s+[\w ]+[\s\*]+\w+(\s*\[\w+\])?;$")
            body = [l.rstrip() for l in body if not decl.match(l) and l.strip() not in ("{", "}", "return;")]
            for k, v in names.items():
                if not v.startswith("FUN_"):
                    body = [l.replace(f"FUN_{k[2:]}", v) for l in body]
            body = [re.sub(r"\s+", " ", l) for l in body]
        print("\n".join(body[: a.max_lines]))
        if len(body) > a.max_lines:
            print(f"  ... ({len(body) - a.max_lines} more lines)")


if __name__ == "__main__":
    main()
