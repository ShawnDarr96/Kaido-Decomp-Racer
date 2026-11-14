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
| N132 | Replace the menuscr_sub_* placeholders with real names (read each function; keep maybe_ where unsure) | any |  |  | 382 functions |
| N133 | Replace the scrcareer_sub_* placeholders with real names (read each function; keep maybe_ where unsure) | any |  |  | 169 functions |
| N134 | Replace the scrgarage_sub_* placeholders with real names (read each function; keep maybe_ where unsure) | any |  |  | 157 functions |
| N135 | Replace the phys_sub_* placeholders with real names (read each function; keep maybe_ where unsure) | any |  |  | 143 functions |
| N136 | Replace the libkernl_sub_* placeholders with real names (read each function; keep maybe_ where unsure) | any |  |  | 105 functions |
| N137 | Replace the script_sub_* placeholders with real names (read each function; keep maybe_ where unsure) | any |  |  | 85 functions |

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
| N1 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N2 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N3 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N4 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N5 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N6 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N7 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N8 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N9 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N10 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N11 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N12 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N17 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N18 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N20 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N23 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N24 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N25 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N26 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N27 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N28 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N29 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N31 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N33 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N130 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N131 | every function in the file named or assigned to its library | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N13 | named; module placeholders: vu0math 35, libpad2 12, libdbc 5 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N14 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N15 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N16 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N19 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N21 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N22 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N30 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N32 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N34 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N35 | named; module placeholders: road 8 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N36 | named; module placeholders: snd 32 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N37 | named; module placeholders: snd 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N38 | named; module placeholders: carsnd 13 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N39 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N40 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N41 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N42 | named; module placeholders: course 10 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N43 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N44 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N45 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N46 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N47 | named; module placeholders: garage 15 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N48 | named; module placeholders: garage 36 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N49 | named; module placeholders: profile 19 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N50 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N51 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N52 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N53 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N54 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N55 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N56 | named; module placeholders: raceprog 6 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N57 | named; module placeholders: raceprog 2, race 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N58 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N59 | named; module placeholders: race 11 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N60 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N61 | named; module placeholders: demo 11 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N62 | named; module placeholders: ui 2, demo 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N63 | named; module placeholders: menu 5 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N64 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N65 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N66 | named; module placeholders: menu 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N67 | all functions named | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N68 | named; module placeholders: menuscr 8, scrcareer 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N69 | named; module placeholders: scrcareer 7, menuscr 7 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N70 | named; module placeholders: scrgarage 11, scrrace 1, menuscr 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N71 | named; module placeholders: scrcareer 6, scrrace 3, menuscr 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N72 | named; module placeholders: scrcareer 3, menuscr 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N73 | named; module placeholders: scrcareer 4, scrrace 3, menuscr 3 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N74 | named; module placeholders: scrcareer 6 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N75 | named; module placeholders: menuscr 2, scrcareer 1, scrrace 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N76 | named; module placeholders: menuscr 15, scrcareer 4, scrrace 4 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N77 | named; module placeholders: menuscr 7, scrcareer 6, scrrace 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N78 | named; module placeholders: menuscr 20, scrcareer 6, scrrace 6 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N79 | named; module placeholders: scrcareer 9, menuscr 3, scrrace 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N80 | named; module placeholders: menuscr 17, scrrace 4 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N81 | named; module placeholders: menuscr 19, scrrecord 1, scrrace 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N82 | named; module placeholders: scrcareer 9, menuscr 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N83 | named; module placeholders: scrcareer 13, menuscr 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N84 | named; module placeholders: scrcareer 6, scrrace 4, menuscr 3 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N85 | named; module placeholders: menuscr 2, scrcareer 1, scrrace 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N86 | named; module placeholders: scrrace 3, scrgarage 3, scrcareer 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N87 | named; module placeholders: scrgarage 8, scrrace 8, scrcareer 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N88 | named; module placeholders: scrgarage 11, scrrace 2, menuscr 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N89 | named; module placeholders: scrcareer 7, menuscr 5, scrgarage 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N90 | named; module placeholders: menuscr 12, scrcareer 3, scrgarage 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N91 | named; module placeholders: menuscr 11, scrgarage 10, scrrace 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N92 | named; module placeholders: scrgarage 3, menuscr 3, scrcareer 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N93 | named; module placeholders: scrcareer 8, scrgarage 5, scrrace 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N94 | named; module placeholders: scrgarage 13, menuscr 6, scrcareer 3 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N95 | named; module placeholders: scrgarage 5, scrcareer 4, scrrace 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N96 | named; module placeholders: menuscr 7, scrgarage 3, scrcareer 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N97 | named; module placeholders: menuscr 6, scrgarage 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N98 | named; module placeholders: menuscr 16, scrgarage 15, scrrace 7 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N99 | named; module placeholders: menuscr 13, scrcareer 8, scrrecord 1 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N100 | named; module placeholders: menuscr 27, scrrace 9, scrcareer 2 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N101 | named; module placeholders: menuscr 22, scrcareer 9, scrrace 6 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N102 | named; module placeholders: menuscr 20, scroptions 9, scrcareer 4 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N103 | named; module placeholders: scrgarage 5, scrcareer 5, menuscr 5 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N104 | named; module placeholders: menuscr 9, scrcareer 8, scrgarage 3 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N105 | named; module placeholders: menuscr 17, scrgarage 13, scrcareer 3 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N106 | named; module placeholders: menuscr 28, scrgarage 8, scrrecord 3 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N107 | named; module placeholders: scrgarage 11, menuscr 10, scrcareer 7 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N108 | named; module placeholders: menuscr 23, scrgarage 10, scrcareer 4 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N109 | named; module placeholders: script 16 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N110 | named; module placeholders: script 6 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N111 | named; module placeholders: script 49 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N112 | named; module placeholders: script 14, result 9 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N113 | named; module placeholders: result 33 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N114 | named; module placeholders: raceui 22, result 4 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N115 | named; module placeholders: raceui 17 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N116 | named; module placeholders: racehud 23 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N117 | named; module placeholders: racehud 10, showroom 8 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N118 | named; module placeholders: showroom 45 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N119 | named; module placeholders: showroom 13, replayui 13 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N120 | named; module placeholders: password 50 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N121 | named; module placeholders: eventui 26 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N122 | named; module placeholders: eventui 15 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N123 | named; module placeholders: eventui 29 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N124 | named; module placeholders: eventui 14 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N125 | named; module placeholders: menuscr 11 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N126 | named; module placeholders: nameentry 33, menuscr 12 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N127 | named; module placeholders: nameentry 52, attract 19 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N128 | named; module placeholders: misc 7 | P1 | ShawnDarr96/claude | 2026-11-14 |  |
| N129 | named; module placeholders: misc 9 | P1 | ShawnDarr96/claude | 2026-11-14 |  |

## Changes to the board

- 2026-11-14 board created with `board init`; rows for SDK identification, naming (one per 16 KiB file), types and matching added.
- 2026-11-14 ShawnDarr96/claude: claim F1, F2.
- 2026-11-14 ShawnDarr96/claude: F1, F2 done; added F8, F9 (gaps).
- 2026-11-14 ShawnDarr96/claude: claim N1.
- 2026-11-14 ShawnDarr96/claude: claim N2, N3, N4, N5, N6, N7, N8, N9, N10, N11, N12, N17, N18, N20, N23, N24, N25, N26, N27, N28, N29, N31, N33, N130, N131.
- 2026-11-14 ShawnDarr96/claude: N1, N2, N3, N4, N5, N6, N7, N8, N9, N10, N11, N12, N17, N18, N20, N23, N24, N25, N26, N27, N28, N29, N31, N33, N130, N131 done.
- 2026-11-14 ShawnDarr96/claude: claim N13, N14, N15, N16, N19, N21, N22, N30, N32, N34, N35, N36, N37, N38, N39, N40, N41, N42, N43, N44, N45, N46, N47, N48, N49, N50, N51, N52, N53, N54, N55, N56, N57, N58, N59, N60, N61, N62, N63, N64, N65, N66, N67, N68, N69, N70, N71, N72, N73, N74, N75, N76, N77, N78, N79, N80, N81, N82, N83, N84, N85, N86, N87, N88, N89, N90, N91, N92, N93, N94, N95, N96, N97, N98, N99, N100, N101, N102, N103, N104, N105, N106, N107, N108, N109, N110, N111, N112, N113, N114, N115, N116, N117, N118, N119, N120, N121, N122, N123, N124, N125, N126, N127, N128, N129.
- 2026-11-14 ShawnDarr96/claude: N13, N14, N15, N16, N19, N21, N22, N30, N32, N34, N35, N36, N37, N38, N39, N40, N41, N42, N43, N44, N45, N46, N47, N48, N49, N50, N51, N52, N53, N54, N55, N56, N57, N58, N59, N60, N61, N62, N63, N64, N65, N66, N67, N68, N69, N70, N71, N72, N73, N74, N75, N76, N77, N78, N79, N80, N81, N82, N83, N84, N85, N86, N87, N88, N89, N90, N91, N92, N93, N94, N95, N96, N97, N98, N99, N100, N101, N102, N103, N104, N105, N106, N107, N108, N109, N110, N111, N112, N113, N114, N115, N116, N117, N118, N119, N120, N121, N122, N123, N124, N125, N126, N127, N128, N129 done.
- 2026-11-14 ShawnDarr96: added N132.
- 2026-11-14 ShawnDarr96: added N133.
- 2026-11-14 ShawnDarr96: added N134.
- 2026-11-14 ShawnDarr96: added N135.
- 2026-11-14 ShawnDarr96: added N136.
- 2026-11-14 ShawnDarr96: added N137.
