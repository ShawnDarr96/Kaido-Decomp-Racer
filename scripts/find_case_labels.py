"""Find 'functions' that are really switch-case labels: never called, and their code branches
out of their own body before any `jr ra`."""
import csv, struct, sys
d = open('iso_extract/SLES_531.91', 'rb').read()
def w(v): return struct.unpack_from('<I', d, v - 0x100000 + 0x80)[0]
F = {int(r['address'], 16): r for r in csv.DictReader(open('decomp/functions.csv'))}
X = {int(r['address'], 16): r for r in csv.DictReader(open('decomp/xrefs.csv', encoding='utf-8'))}
S = {int(r['address'], 16): r['name'] for r in csv.DictReader(open('config/symbols.csv', encoding='utf-8'))}
starts = sorted(F)
out = []
for i, a in enumerate(starts):
    size = int(F[a]['size'], 16)
    if X.get(a, {}).get('callers', '').strip():
        continue
    end = a + size
    pc, verdict = a, None
    while pc < end + 8:
        ins = w(pc)
        op = ins >> 26
        if ins == 0x03e00008:          # jr ra
            verdict = 'ret'; break
        if op in (4, 5, 1, 6, 7, 20, 21, 22, 23):   # branches
            off = struct.unpack('<h', struct.pack('<H', ins & 0xffff))[0]
            tgt = pc + 4 + off * 4
            uncond = op == 4 and (ins >> 16) & 0x3ff == 0
            if uncond and not a <= tgt < end:
                verdict = 'out'; break
        if op == 2:                     # j
            tgt = (pc & 0xf0000000) | ((ins & 0x3ffffff) << 2)
            if not a <= tgt < end and tgt not in F:
                verdict = 'out'; break
        if ins & 0xfc1fffff == 0x00000008 and ins != 0x03e00008:  # jr reg (tail/jump table)
            verdict = 'jr'; break
        pc += 4
    if verdict == 'out':
        prev = starts[i - 1] if i else None
        out.append((a, S.get(a, F[a]['name']), size, prev))
for a, n, s, p in out:
    print(f'{a:#010x} {s:#x} {n} prev={p:#010x}')
print(len(out), 'case-label fragments', file=sys.stderr)
