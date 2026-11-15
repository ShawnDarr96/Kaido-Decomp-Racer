/* Generated from config/structs.json by scripts/ghidra_export.py. Edit the JSON. */
#ifndef KAIDO_STRUCTS_H
#define KAIDO_STRUCTS_H
#include "types.h"

typedef struct GameRecord {  /* size 0x14 */
    u8 pad_0000[0x14];
} GameRecord;

typedef struct RaceEntrySetup {  /* size 0xcc */
    u8 pad_0000[0xcc];
} RaceEntrySetup;

typedef struct RacerState {  /* size 0x540 */
    u8 pad_0000[0x540];
} RacerState;

typedef struct RacerResult {  /* size 0x100 */
    u8 pad_0000[0x100];
} RacerResult;

typedef struct RacerStats {  /* size 0x17c */
    u8 pad_0000[0x17c];
} RacerStats;

typedef struct GameState {  /* size 0x3ae0 */
    u8 course;  /* 0x0 */
    u8 direction;  /* 0x1 */
    u8 unk_0002;  /* 0x2 */
    u8 unk_0003;  /* 0x3 */
    u8 pad_0004[0x4];
    u32 unk_0008;  /* 0x8 */
    u32 unk_000c;  /* 0xc */
    u32 unk_0010;  /* 0x10 */
    u32 unk_0014;  /* 0x14 */
    u8 pad_0018[0x28];
    u32 unk_0040;  /* 0x40 */
    u32 unk_0044;  /* 0x44 */
    u32 recordHeader;  /* 0x48 */
    u32 unk_004c;  /* 0x4c */
    GameRecord records[5];  /* 0x50 */
    u8 pad_00b4[0x10];
    u32 currentRecord;  /* 0xc4 */
    u32 unk_00c8;  /* 0xc8 */
    u32 unk_00cc;  /* 0xcc */
    u32 unk_00d0;  /* 0xd0 */
    u32 unk_00d4;  /* 0xd4 */
    u32 unk_00d8;  /* 0xd8 */
    u32 unk_00dc;  /* 0xdc */
    u32 playerCount;  /* 0xe0 */
    u32 rivalCount;  /* 0xe4 */
    u32 trafficCount;  /* 0xe8 */
    u32 unk_00ec;  /* 0xec */
    RaceEntrySetup entrySetup[3];  /* 0xf0 */
    u8 modeFlags;  /* 0x354 */
    u8 pad_0355[0x7];
    u32 unk_035c;  /* 0x35c */
    u32 unk_0360;  /* 0x360 */
    u32 unk_0364;  /* 0x364 */
    u8 pad_0368[0x28];
    u32 unk_0390;  /* 0x390 */
    u32 unk_0394;  /* 0x394 */
    u32 unk_0398;  /* 0x398 */
    u32 unk_039c;  /* 0x39c */
    u32 unk_03a0;  /* 0x3a0 */
    u32 unk_03a4;  /* 0x3a4 */
    u32 unk_03a8;  /* 0x3a8 */
    u32 unk_03ac;  /* 0x3ac */
    u32 unk_03b0;  /* 0x3b0 */
    u32 unk_03b4;  /* 0x3b4 */
    u32 unk_03b8;  /* 0x3b8 */
    u32 unk_03bc;  /* 0x3bc */
    u32 unk_03c0;  /* 0x3c0 */
    u8 color[4];  /* 0x3c4 */
    u32 unk_03c8;  /* 0x3c8 */
    u32 unk_03cc;  /* 0x3cc */
    f32 startPos[3];  /* 0x3d0 */
    u8 unk_03dc;  /* 0x3dc */
    u8 pad_03dd[0x3];
    RacerState racers[7];  /* 0x3e0 */
    RacerResult results[7];  /* 0x28a0 */
    RacerStats stats[7];  /* 0x2fa0 */
    u8 pad_3a04[0x44];
    u32 unk_3a48;  /* 0x3a48 */
    u8 pad_3a4c[0x2c];
    u32 unk_3a78;  /* 0x3a78 */
    u8 pad_3a7c[0x4c];
    u32 unk_3ac8;  /* 0x3ac8 */
    void * replayBuf;  /* 0x3acc */
    void * ghostBuf;  /* 0x3ad0 */
    u8 pad_3ad4[0xc];
} GameState;

extern GameState *g_GameState;

typedef struct MenuMgr {  /* size 0x660 */
    u8 pad_0000[0x1c];
    u32 curScreen;  /* 0x1c */
    u32 nextScreen;  /* 0x20 */
    u32 prevScreen;  /* 0x24 */
    u32 flags;  /* 0x28 */
    u32 unk_002c;  /* 0x2c */
    u32 nextBgMode;  /* 0x30 */
    u32 bgMode;  /* 0x34 */
    u32 unk_0038;  /* 0x38 */
    u32 voiceParam;  /* 0x3c */
    u8 pad_0040[0x304];
    u32 unk_0344;  /* 0x344 */
    u8 pad_0348[0x8];
    u32 unk_0350;  /* 0x350 */
    u8 pad_0354[0x10];
    u32 unk_0364;  /* 0x364 */
    u8 pad_0368[0x1c8];
    u32 unk_0530;  /* 0x530 */
    u32 unk_0534;  /* 0x534 */
    u32 unk_0538;  /* 0x538 */
    u8 pad_053c[0x4];
    u32 unk_0540;  /* 0x540 */
    u32 unk_0544;  /* 0x544 */
    u8 pad_0548[0x1a];
    u16 unk_0562;  /* 0x562 */
    u16 unk_0564;  /* 0x564 */
    u8 pad_0566[0x2e];
    u32 unk_0594;  /* 0x594 */
    u32 unk_0598;  /* 0x598 */
    u8 pad_059c[0x4];
    u32 unk_05a0;  /* 0x5a0 */
    u32 unk_05a4;  /* 0x5a4 */
    u8 pad_05a8[0x4];
    u8 unk_05ac;  /* 0x5ac */
    u8 pad_05ad[0x3];
    u32 unk_05b0;  /* 0x5b0 */
    u8 pad_05b4[0x4];
    u32 unk_05b8;  /* 0x5b8 */
    u32 unk_05bc;  /* 0x5bc */
    u8 pad_05c0[0x14];
    u8 unk_05d4;  /* 0x5d4 */
    u8 unk_05d5;  /* 0x5d5 */
    u8 pad_05d6[0x6];
    u32 unk_05dc;  /* 0x5dc */
    u8 pad_05e0[0x4];
    u32 unk_05e4;  /* 0x5e4 */
    u32 unk_05e8;  /* 0x5e8 */
    u8 pad_05ec[0x4];
    u32 unk_05f0;  /* 0x5f0 */
    u8 pad_05f4[0x8];
    u32 unk_05fc;  /* 0x5fc */
    u32 unk_0600;  /* 0x600 */
    u32 unk_0604;  /* 0x604 */
    u8 pad_0608[0x4];
    u32 unk_060c;  /* 0x60c */
    u8 pad_0610[0x8];
    u32 unk_0618;  /* 0x618 */
    u8 pad_061c[0x4];
    u8 unk_0620;  /* 0x620 */
    u8 pad_0621[0x3];
    u32 unk_0624;  /* 0x624 */
    u32 unk_0628;  /* 0x628 */
    u8 pad_062c[0x4];
    u32 unk_0630;  /* 0x630 */
    u32 unk_0634;  /* 0x634 */
    u32 unk_0638;  /* 0x638 */
    u8 pad_063c[0x4];
    u8 unk_0640;  /* 0x640 */
    u8 unk_0641;  /* 0x641 */
    u8 pad_0642[0x2];
    u32 unk_0644;  /* 0x644 */
    u32 unk_0648;  /* 0x648 */
    u32 unk_064c;  /* 0x64c */
    u32 unk_0650;  /* 0x650 */
    u8 pad_0654[0xc];
} MenuMgr;

extern MenuMgr *g_MenuMgr;

typedef struct Options {  /* size 0x1f8 */
    u8 pad_0000[0x4];
    u32 unk_0004;  /* 0x4 */
    u32 unk_0008;  /* 0x8 */
    u32 unk_000c;  /* 0xc */
    u32 unk_0010;  /* 0x10 */
    u32 unk_0014;  /* 0x14 */
    u32 unk_0018;  /* 0x18 */
    u32 seVolume;  /* 0x1c */
    u32 bgmVolume;  /* 0x20 */
    u8 pad_0024[0x1d4];
} Options;

extern Options *g_Options;

typedef struct RaceCtx {  /* size 0x18 */
    u8 mode;  /* 0x0 */
    u8 pad_0001[0x3];
    u32 unk_0004;  /* 0x4 */
    u8 raceType;  /* 0x8 */
    u8 unk_0009;  /* 0x9 */
    u8 pad_000a[0x6];
    u8 courseOverride;  /* 0x10 */
    u8 directionOverride;  /* 0x11 */
    u8 unk_0012;  /* 0x12 */
    u8 unk_0013;  /* 0x13 */
    u8 unk_0014;  /* 0x14 */
    u8 unk_0015;  /* 0x15 */
    u8 pad_0016[0x2];
} RaceCtx;

extern RaceCtx *g_RaceCtx;

#endif
