"""Classify and name functions that are still FUN_ after the export (typically ones added from
config/extra_functions.txt after a coverage scan).

    python -I scripts/name_new_functions.py            # writes tools/names/new_functions.txt
    python -I scripts/add_names.py tools/names/new_functions.txt --source game --force

For each unnamed function:
- EE kernel syscall stub matching a ghidra-emotionengine-reloaded pattern -> that syscall name
- branch target only from the function just before it -> appended to config/not_functions.txt
  (a tail block of that function; the export folds it back in)
- jumped/branched into from another function -> <Source>_TailN
- address used as a constant somewhere -> <Referrer>_CallbackN
- otherwise -> <PreviousNamedFunction>_OrphanN (no call, branch, pointer or constant reference:
  exception landing pad or dead code)
"""
import bisect
import collections
import csv
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
from show import load_c  # noqa: E402

ELF = ROOT / "iso_extract" / "SLES_531.91"
PATTERNS = ROOT / "tools/ghidra_12.2_PUBLIC/Ghidra/Extensions/ghidra-emotionengine-reloaded/data/patterns/r5900_LE_patterns.xml"
TEXT = (0x100000, 0x308080)


def main():
    d = ELF.read_bytes()
    w = lambda v: struct.unpack_from("<I", d, v - 0x100000 + 0x80)[0]
    S = {int(r["address"], 16): r["name"] for r in csv.DictReader(open(ROOT / "config/symbols.csv", encoding="utf-8"))}
    F = sorted((int(r["address"], 16), int(r["size"], 16), r["name"])
               for r in csv.DictReader(open(ROOT / "decomp/functions.csv")))
    st = [a for a, _, _ in F]
    name = {a: S.get(a, n) for a, _, n in F}
    notf_path = ROOT / "config/not_functions.txt"
    notf = {int(l.split("#")[0], 16) for l in notf_path.read_text().splitlines() if l.split("#")[0].strip()}
    left = [a for a, _, n in F if "FUN_" in name[a] and a not in notf]

    pats = {}
    if PATTERNS.exists():
        x = PATTERNS.read_text(encoding="utf-8")
        for m in re.finditer(r'<data>([^<]+)</data>\s*<funcstart label="(\w+)"', x):
            bs = bytes(int(t, 16) for t in m.group(1).split() if t.startswith("0x"))
            if len(bs) == 16:
                pats[bs] = m.group(2)

    targets = collections.defaultdict(list)
    for pc in range(*TEXT, 4):
        i = w(pc)
        op = i >> 26
        if op in (4, 5, 6, 7, 20, 21, 22, 23) or (op == 1 and ((i >> 16) & 0x1F) in (0, 1, 2, 3, 0x10, 0x11, 0x12, 0x13)):
            off = struct.unpack("<h", struct.pack("<H", i & 0xFFFF))[0]
            targets[pc + 4 + off * 4].append(pc)
        elif op == 2:
            targets[(pc & 0xF0000000) | ((i & 0x3FFFFFF) << 2)].append(pc)

    def owner(pc):
        k = bisect.bisect_right(st, pc) - 1
        a, s, _ = F[k]
        return a if a <= pc < a + s else None

    def prev_named(a):
        k = bisect.bisect_left(st, a) - 1
        while k >= 0 and "FUN_" in name[F[k][0]]:
            k -= 1
        n = name[F[k][0]] if k >= 0 else "Text"
        return re.sub(r"_(Orphan|Tail|Callback)\d+$", "", re.sub(r"^maybe_", "", n)), (F[k][0] if k >= 0 else None)

    constref = collections.defaultdict(list)
    for ad, b in load_c().items():
        for m in re.finditer(r"0x([0-9a-f]{6})\b", b):
            constref[int(m.group(1), 16)].append(int(ad, 16))

    used = set(S.values())
    out, fold = [], []

    def uniq(base):
        k = 1
        while f"{base}{k}" in used:
            k += 1
        used.add(f"{base}{k}")
        return f"{base}{k}"

    for a in left:
        bs = d[a - 0x100000 + 0x80:a - 0x100000 + 0x90]
        prev, prev_addr = prev_named(a)
        if bs in pats:
            n, base, k = pats[bs], pats[bs], 2
            while n in used:
                n, k = f"{base}_copy{k}", k + 1
            used.add(n)
            out.append(f"0x{a:08x} {n}  # EE kernel syscall stub (ghidra-emotionengine-reloaded pattern)")
        elif a in targets:
            owners = {owner(p) for p in targets[a]} - {None}
            k = bisect.bisect_left(st, a) - 1
            if owners == {F[k][0]}:
                fold.append(a)
            else:
                src = re.sub(r"^maybe_", "", name[sorted(owners)[0]]) if owners else prev
                out.append(f"0x{a:08x} {uniq(src + '_Tail')}  # jumped/branched into from {src}; shared tail")
        elif constref.get(a):
            r = re.sub(r"^maybe_", "", name[constref[a][0]])
            out.append(f"0x{a:08x} {uniq(r + '_Callback')}  # address loaded as a constant in {r}")
        else:
            out.append(f"0x{a:08x} {uniq(prev + '_Orphan')}  # follows {prev}; no call, branch, pointer or "
                       f"constant reference (exception landing pad or dead code)")
    (ROOT / "tools/names").mkdir(parents=True, exist_ok=True)
    (ROOT / "tools/names/new_functions.txt").write_text("\n".join(out) + "\n")
    if fold:
        with open(notf_path, "a", newline="\n") as f:
            for a in fold:
                f.write(f"0x{a:08x}  # tail block of the preceding function (branch target from it)\n")
    print(f"{len(left)} unnamed: {len(out)} named, {len(fold)} folded into the preceding function")


if __name__ == "__main__":
    main()
