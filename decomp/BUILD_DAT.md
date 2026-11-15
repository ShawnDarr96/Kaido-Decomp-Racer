# BUILD.DAT catalogue (board row F11)

Made with `python -I scripts/catalogue_build.py "<game>.iso" iso_extract/BUILD.TOC [--csv out.csv]`.
It reads BUILD.DAT straight from the ISO, decompresses only the first GUT/UCL chunk of each packed
entry, and classifies the entry by its header. Archive format: see `scripts/extract_build.py`.

| Entries | Type |
|---:|---|
| 9,215 | Pack (u32 count + offset table) whose first item is an **XVI model**: tag `XVI0` v00.1, then `XMDL`, `NORM`, ... chunks (fourccs stored byte-reversed). 9,124 of them GUT-packed |
| 2,249 | **Sprite sheet**: u32 0xc, u32 offset to an embedded TIM2, a small layout header (sizes as floats) |
| 613 | **PS2 sound bank** (`IECS`/SCEI header, for MODHSYN on the IOP) |
| 103 | **TIM2 texture**, alone (64) or as item 0 of a pack (39) |
| 102 | **Streamed** entries: sector 0 in the TOC, 4-333 MB; read from outside BUILD.DAT (movies/music streams) |
| 22 | 16-bit glyph-index text (localised strings as indices into the font, 0xffff separators) |
| 1 | Pack whose first item is plain text |
| 2,914 | Not identified yet (below) |

Total 15,219.

Not identified yet:
- 1,497 entries start with u32 0xc but have no TIM2 at the first offset (another 0xc record kind).
- 892 start with zeros; many are 398,664-byte float tables (probably collision or height data).
- 255 packs (count 6, 0x25, 1, 5, ...) whose first item has no known header.
- The rest are small records with a u32 type id followed by floats (e.g. 0x01/0x0f/0x15/0x1b records
  that share the layout `id, 8 or 9, 5 zero words, 1/3, 2/3, 1.0`).

The XVI model, sprite-sheet and sound-bank formats are the next things to document: the EE loaders
are the `Xvi_*`, `Tex_*`/`Sprite_*` and `Snd_*` functions in `config/symbols.csv`.
