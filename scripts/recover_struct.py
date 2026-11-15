"""Recover a struct layout from the exported C: every `*(T *)(_g_X + off)` access through a global
pointer gives a field offset and width; the accessor functions that touch only that field name it.

    python -I scripts/recover_struct.py g_GameState GameState 0x3ae0 > decomp/include/gamestate.h
"""
import csv, re, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / 'scripts'))
from show import load_c

SIZES = {'undefined1': 1, 'byte': 1, 'char': 1, 'bool': 1, 'undefined2': 2, 'short': 2, 'ushort': 2,
         'undefined4': 4, 'int': 4, 'uint': 4, 'float': 4, 'undefined8': 8, 'long': 8, 'ulong': 8,
         'longlong': 8, 'undefined16': 16}
CTYPE = {1: 'u8', 2: 'u16', 4: 'u32', 8: 'u64', 16: 'u128'}


def scan(glob):
    acc = {}   # off -> {size: count}
    users = {}  # off -> set(function names)
    names = {r['address']: r['name'] for r in csv.DictReader(open(ROOT / 'config/symbols.csv', encoding='utf-8'))}
    pat = re.compile(r'\*\((\w+) \*\)\(_?' + glob + r' \+ (0x[0-9a-f]+|\d+)\)')
    arr = re.compile(r'_?' + glob + r' \+ [^;]*?\* (0x[0-9a-f]+|\d+) \+ (0x[0-9a-f]+|\d+)\)')
    arrays = {}
    for a, body in load_c().items():
        n = names.get(a, a)
        for t, off in pat.findall(body):
            o = int(off, 0)
            sz = SIZES.get(t.split()[-1], 4)
            acc.setdefault(o, {}).setdefault(sz, 0)
            acc[o][sz] += 1
            users.setdefault(o, set()).add(n)
        for stride, off in arr.findall(body):
            arrays.setdefault(int(off, 0), set()).add(int(stride, 0))
    return acc, users, arrays


def field_name(off, users, prefix):
    # an accessor named Prefix_GetFoo / Prefix_SetFoo / Prefix_IsFoo touching this field names it
    cands = []
    for n in users.get(off, ()):
        m = re.match(r'(?:maybe_)?' + prefix + r'_(?:Get|Set|Is|Has|Inc|Dec|Clear|Add)([A-Z]\w*)$', n)
        if m and not re.search(r'(_[0-9a-f]+|[0-9a-f]{3})$', m.group(1)):
            cands.append(m.group(1))
    if len(set(cands)) == 1:
        c = cands[0]
        return c[0].lower() + c[1:]
    return None


def main():
    glob, prefix, size = sys.argv[1], sys.argv[2], int(sys.argv[3], 0)
    acc, users, arrays = scan(glob)
    out = [f'/* {prefix}: layout recovered from {sum(sum(v.values()) for v in acc.values())} accesses through {glob}',
           f'   (scripts/recover_struct.py). unk_XXX fields are known only by offset and width. */',
           f'#ifndef {prefix.upper()}_H', f'#define {prefix.upper()}_H', '#include "types.h"', '',
           f'typedef struct {prefix} {{']
    pos = 0
    used = set()
    for off in sorted(o for o in acc if o < size):
        if off < pos:
            continue
        sz = max(acc[off], key=lambda s: (acc[off][s], s))
        if off % min(sz, 4):
            sz = 1
        if off > pos:
            out.append(f'    u8 pad_{pos:04x}[0x{off - pos:x}];')
        nm = field_name(off, users, prefix) or f'unk_{off:04x}'
        if nm in used:
            nm = f'{nm}_{off:04x}'
        used.add(nm)
        note = ''
        if off in arrays:
            note = f'  /* also indexed: stride {", ".join(hex(s) for s in sorted(arrays[off]))} */'
        out.append(f'    {CTYPE[sz]} {nm};{note}  /* 0x{off:04x} */')
        pos = off + sz
    if pos < size:
        out.append(f'    u8 pad_{pos:04x}[0x{size - pos:x}];')
    out += [f'}} {prefix};  /* size 0x{size:x} */', '', f'#endif']
    print('\n'.join(out))


if __name__ == '__main__':
    main()
