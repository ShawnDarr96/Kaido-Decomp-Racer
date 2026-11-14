"""Merge names into config/symbols.csv.

    python -I scripts/add_names.py names.txt [--source manual] [--force]

names.txt: one `0xADDRESS name [# comment]` per line; blank lines and lines starting with # are skipped.
Existing names are kept unless --force is given (names from the ELF/analysis are always replaceable).
"""
import argparse
import csv
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SYM = ROOT / "config" / "symbols.csv"
FIELDS = ["address", "name", "signature", "source", "comment"]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file", nargs="?")
    ap.add_argument("--fill", nargs=3, metavar=("START", "END", "MODULE"),
                    help="name every still-unnamed function in [START, END) MODULE_sub_ADDRESS")
    ap.add_argument("--source", default="manual")
    ap.add_argument("--force", action="store_true")
    a = ap.parse_args()
    rows = {int(r["address"], 16): r for r in csv.DictReader(open(SYM, encoding="utf-8"))}
    xrefs = {int(r["address"], 16) for r in csv.DictReader(open(ROOT / "decomp" / "xrefs.csv", encoding="utf-8"))}
    used = {r["name"] for r in rows.values()}
    added = kept = 0
    lines = open(a.file, encoding="utf-8").read().splitlines() if a.file else []
    if a.fill:
        lo, hi, mod = int(a.fill[0], 16), int(a.fill[1], 16), a.fill[2]
        lines = [f"0x{x:08x} {mod}_sub_{x:08x}" for x in sorted(xrefs)
                 if lo <= x < hi and (x not in rows or not rows[x]["name"])]
    for line in lines:
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        m = re.match(r"(0x[0-9a-fA-F]+)\s+([A-Za-z_][\w:~<>]*)\s*(?:#\s*(.*))?$", line)
        if not m:
            raise SystemExit(f"bad line: {line}")
        addr, name, comment = int(m.group(1), 16), m.group(2), (m.group(3) or "").strip()
        if addr not in xrefs:
            print(f"warning: no function at 0x{addr:08x} ({name})")
        old = rows.get(addr)
        if old and old["name"] and not a.force and old["source"] not in ("analysis", "elf"):
            kept += 1
            continue
        if name in used and (not old or old["name"] != name):
            raise SystemExit(f"duplicate name {name} at 0x{addr:08x}")
        used.add(name)
        rows[addr] = {"address": f"0x{addr:08x}", "name": name, "signature": (old or {}).get("signature", ""),
                      "source": a.source, "comment": comment or (old or {}).get("comment", "")}
        added += 1
    with open(SYM, "w", encoding="utf-8", newline="\n") as f:
        w = csv.DictWriter(f, FIELDS, lineterminator="\n")
        w.writeheader()
        for k in sorted(rows):
            w.writerow({x: rows[k].get(x, "") for x in FIELDS})
    print(f"added/updated {added}, kept {kept}; {len(rows)} names total")


if __name__ == "__main__":
    main()
