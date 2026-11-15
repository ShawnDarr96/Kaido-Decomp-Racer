"""Find MWCC switch jump tables: sltiu rB, rI, N ... lui rT, hi ... lw rD, lo(rT) ... jr rD.
Writes config/jumptables.txt: <jr address> <table address> <count> then the target addresses."""
import csv, struct
d = open('iso_extract/SLES_531.91', 'rb').read()
def w(v): return struct.unpack_from('<I', d, v - 0x100000 + 0x80)[0]
def s16(x): return struct.unpack('<h', struct.pack('<H', x & 0xffff))[0]
F = sorted(int(r['address'], 16) for r in csv.DictReader(open('decomp/functions.csv')))
TEXT_END = 0x308080
out = []
pc = 0x100000
while pc < TEXT_END:
    ins = w(pc)
    if ins & 0xfc1fffff == 0x00000008 and (ins >> 21) & 31 != 31:   # jr rD
        rd = (ins >> 21) & 31
        table = n = None
        win = [w(pc - b * 4) for b in range(1, 24)]
        lw = next((i for i in win[:4] if i >> 26 == 0x23 and (i >> 16) & 31 == rd), None)
        if lw is not None:
            off = s16(lw)
            for k, i2 in enumerate(win[:10]):
                if i2 >> 26 == 0x09:                          # addiu rT, rT, lo
                    rt = (i2 >> 16) & 31
                    lui = next((i for i in win[k + 1:12] if i >> 26 == 0x0f and (i >> 16) & 31 == rt), None)
                    if lui is not None:
                        table = ((lui & 0xffff) << 16) + s16(i2) + off
                        break
                if i2 >> 26 == 0x0f and table is None and k < 4:   # lui rT, hi; lw rD, lo(..)
                    table = ((i2 & 0xffff) << 16) + off
                    break
            n = next((i & 0xffff for i in win if i >> 26 == 0x0b), None)
        if table and n and 0x308080 <= table < 0x3685e0 and n < 512:
            tg = [w(table + 4 * k) for k in range(n)]
            if all(0x100000 <= t < TEXT_END for t in tg):
                out.append((pc, table, n, tg))
    pc += 4
with open('config/jumptables.txt', 'w', newline='\n') as f:
    f.write('# Switch jump tables (tools/jumptables.py): jr_address table count targets...\n')
    for pc, t, n, tg in out:
        f.write(f'{pc:#010x} {t:#010x} {n} ' + ' '.join(f'{x:#x}' for x in tg) + '\n')
print(len(out), 'jump tables;', sum(len(set(x[3])) for x in out), 'targets')
