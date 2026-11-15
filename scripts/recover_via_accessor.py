"""Collect field accesses on pointers returned by an accessor, e.g. every `*(T *)(v + off)` where
`v = GameState_Elem_f0_xcc(i)`. Prints offset, width, use count and the functions using it.

    python -I scripts/recover_via_accessor.py GameState_Elem_f0_xcc 0xcc
"""
import csv, re, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / 'scripts'))
from show import load_c
from recover_struct import SIZES


def scan(accessor, size):
    names = {r['address']: r['name'] for r in csv.DictReader(open(ROOT / 'config/symbols.csv', encoding='utf-8'))}
    assign = re.compile(r'(\w+) = (?:\([\w ]+\*?\))?' + accessor + r'\(')
    acc, users = {}, {}
    for a, body in load_c().items():
        for v in set(assign.findall(body)):
            for t, off in re.findall(r'\*\((\w+) \*\)\(' + v + r' \+ (0x[0-9a-f]+|\d+)\)', body):
                o = int(off, 0)
                if o >= size:
                    continue
                sz = SIZES.get(t, 4)
                acc.setdefault(o, {}).setdefault(sz, 0)
                acc[o][sz] += 1
                users.setdefault(o, set()).add(names.get(a, a))
            if re.search(r'\*\((\w+) \*\)' + v + r'\b', body) or re.search(r'\*' + v + r'\b', body):
                acc.setdefault(0, {}).setdefault(4, 0)
                acc[0][4] += 1
                users.setdefault(0, set()).add(names.get(a, a))
    return acc, users


if __name__ == '__main__':
    acc, users = scan(sys.argv[1], int(sys.argv[2], 0))
    for o in sorted(acc):
        sz = max(acc[o], key=lambda s: acc[o][s])
        print(f'{o:#06x} w{sz} n{sum(acc[o].values()):3d} ' + ', '.join(sorted(users[o])[:5])[:130])
