"""Decode the in-game string tables (BUILD.DAT entries 0x1870 + language).

    python -I scripts/extract_build.py <disc> extracted --only 0x1870-0x1875
    python -I scripts/text_table.py extracted [--lang en] [--dump out.txt]

Languages (entry 0x1870 + n): 0 Japanese, 1 English, 2 German, 3 Italian, 4 Spanish, 5 French.
Each table is a flat array of u16 codes; 0xffff ends a string, so text id k is the k-th string
(UiText_DrawById indexes it through an offset table built at load time). 0xfffe is a line break,
codes >= 0xff00 are control codes (colour, icons), code 0 is a space. Latin glyphs: uppercase,
digits and punctuation are code + 0x1c; lowercase a-z are code + 0x22. Higher codes index kana/kanji.
The decoded text is game content: keep dumps local, do not commit them.
"""
import argparse
import struct
from pathlib import Path

LANGS = {"ja": 0, "en": 1, "de": 2, "it": 3, "es": 4, "fr": 5}


def load(extracted, lang="en"):
    data = (Path(extracted) / f"{0x1870 + LANGS[lang]:05d}.bin").read_bytes()
    codes = struct.unpack(f"<{len(data) // 2}H", data)
    out, cur = [], []
    for c in codes:
        if c == 0xFFFF:
            out.append(cur)
            cur = []
        else:
            cur.append(c)
    return out


def decode(codes):
    s = []
    for c in codes:
        if c == 0xFFFE:
            s.append("\n")
        elif c >= 0xFF00:
            continue
        elif c == 0:
            s.append(" ")
        elif 0x41 <= c + 0x1C <= 0x5A or 0x21 <= c + 0x1C <= 0x40:
            s.append(chr(c + 0x1C))
        elif 0x61 <= c + 0x22 <= 0x7A:
            s.append(chr(c + 0x22))
        else:
            s.append("?")
    return "".join(s)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("extracted")
    ap.add_argument("--lang", default="en", choices=LANGS)
    ap.add_argument("--dump")
    a = ap.parse_args()
    strs = [decode(s) for s in load(a.extracted, a.lang)]
    print(f"{len(strs)} strings")
    if a.dump:
        with open(a.dump, "w", encoding="utf-8") as f:
            for i, s in enumerate(strs):
                f.write(f"{i:#06x}\t{s!r}\n")


if __name__ == "__main__":
    main()
