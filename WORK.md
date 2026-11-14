# WORK.md: the board for the Kaido Racer decomp

How to use it: [`AGENTS.md`](AGENTS.md). Change it with the `board` command, not by hand.

Columns:
- **ID**: stable, one letter per section, never reused. A row that is split gets a letter or digit added (`N3` → `N3a`).
- **Area**: a person, `unowned`, `any`, or `humans` (a decision for a person, not for an agent).
- **Needs**: rows that must be in Done first.
- **Who**: empty = open, or `person/agent (date)`.

## P0 Foundations

| ID | Task | Area | Needs | Who | Notes |
|---|---|---|---|---|---|
| F3 | Decide module prefixes for game code (Car_, Race_, Menu_, Gfx_, Snd_, Fs_ ...) and write the list into AGENTS.md | humans |  |  |  |
| F4 | Check the functions Ghidra found at 0x00368000-0x0036ef80 (end of the segment): real code, data, or VU microcode? Fix the Ghidra project and symbols.csv accordingly | any |  |  | 200 functions in text_00368000.c and text_0036c000.c |
| F5 | Name the main global singletons in .data/.sbss (iRam0036f1a8 and friends) and record them in a new config/globals.csv applied by the export | any |  |  |  |
| F6 | Reverse the BUILD.TOC / BUILD.DAT archive format (GUT_Archive) and write scripts/extract_build.py | any |  |  | BUILD.DAT is 1.3 GB, BUILD.TOC 304 KB |
| F7 | Survey the IOP modules in IRX/ (LGD, PAD2, XVI folders): which are stock Sony modules and which are game-specific, and whether any need decompiling | any |  |  |  |
| F8 | Check the maybe_ SDK names against real SDK 2.8.0 symbols (another game with symbols, or the SDK libs) and drop maybe_ where confirmed | any |  |  | Gap of F1 |
| F9 | Identify the code at 0x131c00-0x1328b0 (C++ containers with vtable 0x36e0a0, used by the heap) | any |  |  | Gap of F1 |

## P1 Naming

| ID | Task | Area | Needs | Who | Notes |
|---|---|---|---|---|---|
| N1 | Name every function in decomp/src/text_00100000.c | any |  | ShawnDarr96/claude (2026-11-14) | 71 functions |
| N2 | Name every function in decomp/src/text_00104000.c | any | | | 48 functions |
| N3 | Name every function in decomp/src/text_00108000.c | any | | | 25 functions |
| N4 | Name every function in decomp/src/text_0010c000.c | any | | | 65 functions |
| N5 | Name every function in decomp/src/text_00110000.c | any | | | 151 functions |
| N6 | Name every function in decomp/src/text_00114000.c | any | | | 59 functions |
| N7 | Name every function in decomp/src/text_00118000.c | any | | | 98 functions |
| N8 | Name every function in decomp/src/text_0011c000.c | any | | | 29 functions |
| N9 | Name every function in decomp/src/text_00120000.c | any | | | 73 functions |
| N10 | Name every function in decomp/src/text_00124000.c | any | | | 44 functions |
| N11 | Name every function in decomp/src/text_00128000.c | any | | | 61 functions |
| N12 | Name every function in decomp/src/text_0012c000.c | any | | | 27 functions |
| N13 | Name every function in decomp/src/text_00130000.c | any | | | 117 functions |
| N14 | Name every function in decomp/src/text_00134000.c | any | | | 65 functions |
| N15 | Name every function in decomp/src/text_00138000.c | any | | | 78 functions |
| N16 | Name every function in decomp/src/text_0013c000.c | any | | | 55 functions |
| N17 | Name every function in decomp/src/text_00140000.c | any | | | 36 functions |
| N18 | Name every function in decomp/src/text_00144000.c | any | | | 61 functions |
| N19 | Name every function in decomp/src/text_00148000.c | any | | | 41 functions |
| N20 | Name every function in decomp/src/text_0014c000.c | any | | | 60 functions |
| N21 | Name every function in decomp/src/text_00150000.c | any | | | 27 functions |
| N22 | Name every function in decomp/src/text_00154000.c | any | | | 32 functions |
| N23 | Name every function in decomp/src/text_00158000.c | any | | | 83 functions |
| N24 | Name every function in decomp/src/text_0015c000.c | any | | | 53 functions |
| N25 | Name every function in decomp/src/text_00160000.c | any | | | 77 functions |
| N26 | Name every function in decomp/src/text_00164000.c | any | | | 59 functions |
| N27 | Name every function in decomp/src/text_00168000.c | any | | | 22 functions |
| N28 | Name every function in decomp/src/text_0016c000.c | any | | | 23 functions |
| N29 | Name every function in decomp/src/text_00170000.c | any | | | 55 functions |
| N30 | Name every function in decomp/src/text_00174000.c | any | | | 92 functions |
| N31 | Name every function in decomp/src/text_00178000.c | any | | | 39 functions |
| N32 | Name every function in decomp/src/text_0017c000.c | any | | | 45 functions |
| N33 | Name every function in decomp/src/text_00180000.c | any | | | 54 functions |
| N34 | Name every function in decomp/src/text_00184000.c | any | | | 38 functions |
| N35 | Name every function in decomp/src/text_00188000.c | any | | | 29 functions |
| N36 | Name every function in decomp/src/text_0018c000.c | any | | | 49 functions |
| N37 | Name every function in decomp/src/text_00190000.c | any | | | 33 functions |
| N38 | Name every function in decomp/src/text_00194000.c | any | | | 22 functions |
| N39 | Name every function in decomp/src/text_00198000.c | any | | | 30 functions |
| N40 | Name every function in decomp/src/text_0019c000.c | any | | | 21 functions |
| N41 | Name every function in decomp/src/text_001a0000.c | any | | | 28 functions |
| N42 | Name every function in decomp/src/text_001a4000.c | any | | | 55 functions |
| N43 | Name every function in decomp/src/text_001a8000.c | any | | | 50 functions |
| N44 | Name every function in decomp/src/text_001ac000.c | any | | | 34 functions |
| N45 | Name every function in decomp/src/text_001b0000.c | any | | | 33 functions |
| N46 | Name every function in decomp/src/text_001b4000.c | any | | | 27 functions |
| N47 | Name every function in decomp/src/text_001b8000.c | any | | | 41 functions |
| N48 | Name every function in decomp/src/text_001bc000.c | any | | | 36 functions |
| N49 | Name every function in decomp/src/text_001c0000.c | any | | | 70 functions |
| N50 | Name every function in decomp/src/text_001c4000.c | any | | | 32 functions |
| N51 | Name every function in decomp/src/text_001c8000.c | any | | | 28 functions |
| N52 | Name every function in decomp/src/text_001cc000.c | any | | | 17 functions |
| N53 | Name every function in decomp/src/text_001d0000.c | any | | | 35 functions |
| N54 | Name every function in decomp/src/text_001d4000.c | any | | | 16 functions |
| N55 | Name every function in decomp/src/text_001d8000.c | any | | | 21 functions |
| N56 | Name every function in decomp/src/text_001dc000.c | any | | | 51 functions |
| N57 | Name every function in decomp/src/text_001e0000.c | any | | | 19 functions |
| N58 | Name every function in decomp/src/text_001e4000.c | any | | | 24 functions |
| N59 | Name every function in decomp/src/text_001e8000.c | any | | | 57 functions |
| N60 | Name every function in decomp/src/text_001ec000.c | any | | | 31 functions |
| N61 | Name every function in decomp/src/text_001f0000.c | any | | | 53 functions |
| N62 | Name every function in decomp/src/text_001f4000.c | any | | | 75 functions |
| N63 | Name every function in decomp/src/text_001f8000.c | any | | | 37 functions |
| N64 | Name every function in decomp/src/text_001fc000.c | any | | | 34 functions |
| N65 | Name every function in decomp/src/text_00200000.c | any | | | 28 functions |
| N66 | Name every function in decomp/src/text_00204000.c | any | | | 44 functions |
| N67 | Name every function in decomp/src/text_00208000.c | any | | | 42 functions |
| N68 | Name every function in decomp/src/text_0020c000.c | any | | | 37 functions |
| N69 | Name every function in decomp/src/text_00210000.c | any | | | 14 functions |
| N70 | Name every function in decomp/src/text_00214000.c | any | | | 14 functions |
| N71 | Name every function in decomp/src/text_00218000.c | any | | | 11 functions |
| N72 | Name every function in decomp/src/text_0021c000.c | any | | | 4 functions |
| N73 | Name every function in decomp/src/text_00220000.c | any | | | 10 functions |
| N74 | Name every function in decomp/src/text_00224000.c | any | | | 6 functions |
| N75 | Name every function in decomp/src/text_00228000.c | any | | | 4 functions |
| N76 | Name every function in decomp/src/text_0022c000.c | any | | | 24 functions |
| N77 | Name every function in decomp/src/text_00230000.c | any | | | 15 functions |
| N78 | Name every function in decomp/src/text_00234000.c | any | | | 34 functions |
| N79 | Name every function in decomp/src/text_00238000.c | any | | | 16 functions |
| N80 | Name every function in decomp/src/text_0023c000.c | any | | | 21 functions |
| N81 | Name every function in decomp/src/text_00240000.c | any | | | 21 functions |
| N82 | Name every function in decomp/src/text_00244000.c | any | | | 11 functions |
| N83 | Name every function in decomp/src/text_00248000.c | any | | | 14 functions |
| N84 | Name every function in decomp/src/text_0024c000.c | any | | | 15 functions |
| N85 | Name every function in decomp/src/text_00250000.c | any | | | 4 functions |
| N86 | Name every function in decomp/src/text_00254000.c | any | | | 11 functions |
| N87 | Name every function in decomp/src/text_00258000.c | any | | | 17 functions |
| N88 | Name every function in decomp/src/text_0025c000.c | any | | | 15 functions |
| N89 | Name every function in decomp/src/text_00260000.c | any | | | 16 functions |
| N90 | Name every function in decomp/src/text_00264000.c | any | | | 18 functions |
| N91 | Name every function in decomp/src/text_00268000.c | any | | | 23 functions |
| N92 | Name every function in decomp/src/text_0026c000.c | any | | | 8 functions |
| N93 | Name every function in decomp/src/text_00270000.c | any | | | 17 functions |
| N94 | Name every function in decomp/src/text_00274000.c | any | | | 22 functions |
| N95 | Name every function in decomp/src/text_00278000.c | any | | | 10 functions |
| N96 | Name every function in decomp/src/text_0027c000.c | any | | | 13 functions |
| N97 | Name every function in decomp/src/text_00280000.c | any | | | 8 functions |
| N98 | Name every function in decomp/src/text_00284000.c | any | | | 40 functions |
| N99 | Name every function in decomp/src/text_00288000.c | any | | | 25 functions |
| N100 | Name every function in decomp/src/text_0028c000.c | any | | | 39 functions |
| N101 | Name every function in decomp/src/text_00290000.c | any | | | 46 functions |
| N102 | Name every function in decomp/src/text_00294000.c | any | | | 36 functions |
| N103 | Name every function in decomp/src/text_00298000.c | any | | | 17 functions |
| N104 | Name every function in decomp/src/text_0029c000.c | any | | | 22 functions |
| N105 | Name every function in decomp/src/text_002a0000.c | any | | | 36 functions |
| N106 | Name every function in decomp/src/text_002a4000.c | any | | | 45 functions |
| N107 | Name every function in decomp/src/text_002a8000.c | any | | | 30 functions |
| N108 | Name every function in decomp/src/text_002ac000.c | any | | | 37 functions |
| N109 | Name every function in decomp/src/text_002b0000.c | any | | | 16 functions |
| N110 | Name every function in decomp/src/text_002b4000.c | any | | | 6 functions |
| N111 | Name every function in decomp/src/text_002b8000.c | any | | | 49 functions |
| N112 | Name every function in decomp/src/text_002bc000.c | any | | | 23 functions |
| N113 | Name every function in decomp/src/text_002c0000.c | any | | | 33 functions |
| N114 | Name every function in decomp/src/text_002c4000.c | any | | | 26 functions |
| N115 | Name every function in decomp/src/text_002c8000.c | any | | | 17 functions |
| N116 | Name every function in decomp/src/text_002cc000.c | any | | | 23 functions |
| N117 | Name every function in decomp/src/text_002d0000.c | any | | | 18 functions |
| N118 | Name every function in decomp/src/text_002d4000.c | any | | | 45 functions |
| N119 | Name every function in decomp/src/text_002d8000.c | any | | | 26 functions |
| N120 | Name every function in decomp/src/text_002dc000.c | any | | | 53 functions |
| N121 | Name every function in decomp/src/text_002e0000.c | any | | | 26 functions |
| N122 | Name every function in decomp/src/text_002e4000.c | any | | | 15 functions |
| N123 | Name every function in decomp/src/text_002e8000.c | any | | | 29 functions |
| N124 | Name every function in decomp/src/text_002ec000.c | any | | | 14 functions |
| N125 | Name every function in decomp/src/text_002f0000.c | any | | | 11 functions |
| N126 | Name every function in decomp/src/text_002f4000.c | any | | | 45 functions |
| N127 | Name every function in decomp/src/text_002f8000.c | any | | | 71 functions |
| N128 | Name every function in decomp/src/text_002fc000.c | any | | | 7 functions |
| N129 | Name every function in decomp/src/text_00304000.c | any | | | 9 functions |
| N130 | Name every function in decomp/src/text_00368000.c | any | | | 128 functions |
| N131 | Name every function in decomp/src/text_0036c000.c | any | | | 72 functions |

## P2 Types

| ID | Task | Area | Needs | Who | Notes |
|---|---|---|---|---|---|
| T1 | Import SDK 2.8.0 types (sceGsDrawEnv, sceGsDispEnv, sceDmaChan, sceCdRMode, sceMcTblGetDir, ...) into the Ghidra project and decomp/include/ | any | F1 |  |  |
| T2 | Recover the game state struct behind the global at 0x0036f1a8 | any | F5 |  |  |
| T3 | Recover the car / vehicle struct and physics state | any | F5 |  |  |
| T4 | Recover the race, course and opponent structs | any | F5 |  |  |
| T5 | Recover the menu / UI structs | any | F5 |  |  |
| T6 | Recover the file-system / archive structs used with BUILD.DAT | any | F6 |  |  |

## P3 Matching

| ID | Task | Area | Needs | Who | Notes |
|---|---|---|---|---|---|
| M1 | Find the matching compiler: MWCC PS2 2.4.1 (decomp.me mwcps2 builds) and record its flags by matching a few small functions | any | F2 |  |  |
| M2 | Set up splat (splat64) for SLES_531.91: yaml, asm/data extraction, linker script; rebuild a byte-identical ELF from asm | any | F4 |  |  |
| M3 | Split .text into original translation units using SDK library boundaries and alignment | any | M2, F1, F2 |  |  |
| M4 | Add a progress report for matched bytes to scripts/progress.py and CI | any | M2 |  |  |
| M5 | Plan matching rows per translation unit once M3 is done and add them to this board | humans | M3 |  |  |

## P4 Finish

| ID | Task | Area | Needs | Who | Notes |
|---|---|---|---|---|---|
| X1 | Every function named and typed, every translation unit matching, the ELF rebuilds byte-identical | any | N1–N131, T1–T6, M5 | | |

## Done

| ID | Task | Section | Who | Date | Commit |
|---|---|---|---|---|---|
| S1 | Extract SLES_531.91, identify compiler (MWCC 2.4.1) and SDK (2.8.0) | P0 | ShawnDarr96/claude | 2026-11-14 | 6ee14e0 |
| S2 | Ghidra 12.2 + EE processor analysis; all 4753 functions decompiled to decomp/src | P0 | ShawnDarr96/claude | 2026-11-14 | 6ee14e0 |
| S3 | GhidraMCP built for Ghidra 12.2; headless MCP server script; config/symbols.csv sync | P0 | ShawnDarr96/claude | 2026-11-14 | 6ee14e0 |
| F1 | libgraph, libmpeg/ipu, libkernl, sif/rpc, fileio, loadfile, libcdvd, libmc, libpad2, libdbc, vu0 math named or assigned | P0 | ShawnDarr96/claude | 2026-11-14 | af8e1a8 |
| F2 | MSL C++ iostream/string/EH runtime, newlib libc/libm/stdio/malloc/dtoa, libgcc soft-float named; landed with F1's commit | P0 | ShawnDarr96/claude | 2026-11-14 |  |

## Changes to the board

- 2026-11-14 board created with `board init`; rows for SDK identification, naming (one per 16 KiB file), types and matching added.
- 2026-11-14 ShawnDarr96/claude: claim F1, F2.
- 2026-11-14 ShawnDarr96/claude: F1, F2 done; added F8, F9 (gaps).
- 2026-11-14 ShawnDarr96/claude: claim N1.
