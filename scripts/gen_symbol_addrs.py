"""Write splat/symbol_addrs.txt from config/symbols.csv, decomp/functions.csv and config/globals.csv."""
import csv
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sizes = {int(r["address"], 16): int(r["size"], 16)
         for r in csv.DictReader(open(ROOT / "decomp" / "functions.csv", encoding="utf-8"))}
seen, out = set(), []
for r in csv.DictReader(open(ROOT / "config" / "symbols.csv", encoding="utf-8")):
    a, n = int(r["address"], 16), r["name"].replace("::", "__").replace("~", "dtor_")
    if n in seen:
        n = f"{n}_{a:08x}"
    seen.add(n)
    size = f" size:0x{sizes[a]:x}" if a in sizes else ""
    out.append(f"{n} = 0x{a:08X}; // type:func{size}")
for r in csv.DictReader(open(ROOT / "config" / "globals.csv", encoding="utf-8")):
    out.append(f"{r['name']} = 0x{int(r['address'], 16):08X}; // type:u32")
(ROOT / "splat" / "symbol_addrs.txt").write_text("\n".join(out) + "\n", encoding="utf-8")
print(f"{len(out)} symbols")
