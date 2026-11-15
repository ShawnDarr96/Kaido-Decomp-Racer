/* Generated from config/structs.json by scripts/ghidra_export.py. Edit the JSON. */
#ifndef KAIDO_STRUCTS_H
#define KAIDO_STRUCTS_H
#include "types.h"

typedef struct GameRecord {  /* size 0x14 */
    u8 pad_0000[0x14];
} GameRecord;

typedef struct RaceEntrySetup {  /* size 0xcc */
    u8 maybe_state;  /* 0x0 */
    u8 pad_0001[0x3];
    u32 unk_04;  /* 0x4 */
    u8 unk_08;  /* 0x8 */
    u8 unk_09;  /* 0x9 */
    u8 pad_000a[0x2];
    u32 maybe_counter;  /* 0xc */
    f32 maybe_accum;  /* 0x10 */
    u32 unk_14;  /* 0x14 */
    u8 pad_0018[0x8];
    u32 unk_20;  /* 0x20 */
    u8 pad_0024[0x4];
    u32 unk_28;  /* 0x28 */
    u8 unk_2c;  /* 0x2c */
    u8 pad_002d[0x3];
    u32 unk_30;  /* 0x30 */
    u32 unk_34;  /* 0x34 */
    u32 unk_38;  /* 0x38 */
    u32 unk_3c;  /* 0x3c */
    u32 unk_40;  /* 0x40 */
    u32 unk_44;  /* 0x44 */
    u32 unk_48;  /* 0x48 */
    u32 unk_4c;  /* 0x4c */
    u32 unk_50;  /* 0x50 */
    u32 unk_54;  /* 0x54 */
    u32 unk_58;  /* 0x58 */
    u32 unk_5c;  /* 0x5c */
    u32 unk_60;  /* 0x60 */
    u32 unk_64;  /* 0x64 */
    u32 unk_68;  /* 0x68 */
    u32 unk_6c;  /* 0x6c */
    u32 unk_70;  /* 0x70 */
    u8 pad_0074[0xc];
    u32 maybe_scheduleIds[18];  /* 0x80 */
    u32 unk_c8;  /* 0xc8 */
} RaceEntrySetup;

typedef struct RacerState {  /* size 0x540 */
    u32 unk_00;  /* 0x0 */
    u32 unk_04;  /* 0x4 */
    u8 pad_0008[0x1];
    u8 unk_09;  /* 0x9 */
    u8 pad_000a[0x2];
    u16 unk_0c;  /* 0xc */
    u8 pad_000e[0x26];
    u32 unk_34;  /* 0x34 */
    void * maybe_carObj;  /* 0x38 */
    u8 pad_003c[0x8];
    u32 unk_44;  /* 0x44 */
    u8 unk_48;  /* 0x48 */
    u8 unk_49;  /* 0x49 */
    u8 pad_004a[0x2];
    u32 unk_4c;  /* 0x4c */
    u32 unk_50;  /* 0x50 */
    u8 pad_0054[0x38];
    u32 unk_8c;  /* 0x8c */
    u32 unk_90;  /* 0x90 */
    u8 pad_0094[0x68];
    u16 unk_fc;  /* 0xfc */
    u8 pad_00fe[0x62];
    u32 unk_160;  /* 0x160 */
    u8 pad_0164[0x4];
    u32 unk_168;  /* 0x168 */
    u8 pad_016c[0x48];
    u32 unk_1b4;  /* 0x1b4 */
    u8 pad_01b8[0x88];
    u32 unk_240;  /* 0x240 */
    u8 pad_0244[0x2fc];
} RacerState;

typedef struct RacerResult {  /* size 0x100 */
    u8 pad_0000[0x100];
} RacerResult;

typedef struct RacerStats {  /* size 0x17c */
    u8 pad_0000[0x4];
    u32 unk_04;  /* 0x4 */
    u32 unk_08;  /* 0x8 */
    u8 pad_000c[0x4];
    u32 unk_10;  /* 0x10 */
    u8 pad_0014[0x4];
    u32 unk_18;  /* 0x18 */
    u32 unk_1c;  /* 0x1c */
    u8 pad_0020[0x15c];
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
    u8 language;  /* 0x15 */
    u8 pad_0016[0x2];
} RaceCtx;

extern RaceCtx *g_RaceCtx;

typedef struct ArcTocEntry {  /* size 0x14 */
    u32 sector;  /* 0x0 */
    u32 storedSize;  /* 0x4 */
    u32 sectorCount;  /* 0x8 */
    u32 maybe_isStream;  /* 0xc */
    u32 unpackedSize;  /* 0x10 */
} ArcTocEntry;

typedef struct ArcToc {  /* size 0x4a50c */
    u32 entryCount;  /* 0x0 */
    u32 unk04;  /* 0x4 */
    u32 unk08;  /* 0x8 */
    u32 unk0c;  /* 0xc */
    ArcTocEntry entries[15219];  /* 0x10 */
} ArcToc;

extern ArcToc *g_ArcToc;

typedef struct UiLayout {  /* size 0x4f0 */
    u8 pad_0000[0x304];
    u32 maybe_inUse;  /* 0x304 */
    u8 pad_0308[0x10];
    u32 unk_318;  /* 0x318 */
    u8 pad_031c[0x10];
    u32 animState;  /* 0x32c */
    u8 pad_0330[0x1c0];
} UiLayout;

typedef struct UiLayoutSlot {  /* size 0x4f4 */
    u32 id;  /* 0x0 */
    UiLayout layout;  /* 0x4 */
} UiLayoutSlot;

typedef struct UiMgr {  /* size 0x518 */
    UiLayoutSlot * slots;  /* 0x0 */
    u8 pad_0004[0x4f0];
    u32 unk_4f4;  /* 0x4f4 */
    u32 unk_4f8;  /* 0x4f8 */
    u32 unk_4fc;  /* 0x4fc */
    void * buffer;  /* 0x500 */
    u32 slotCount;  /* 0x504 */
    u32 unk_508;  /* 0x508 */
    u32 unk_50c;  /* 0x50c */
    void * bufferB;  /* 0x510 */
    u32 unk_514;  /* 0x514 */
} UiMgr;

extern UiMgr *g_UiMgr;

typedef struct RaceCar {  /* size 0x17e0 */
    void * vtable;  /* 0x0 */
    u8 pad_0004[0x2];
    u16 unk_0006;  /* 0x6 */
    u16 unk_0008;  /* 0x8 */
    u8 pad_000a[0x6];
    u32 unk_0010;  /* 0x10 */
    u32 unk_0014;  /* 0x14 */
    u32 unk_0018;  /* 0x18 */
    u32 unk_001c;  /* 0x1c */
    u32 unk_0020;  /* 0x20 */
    u32 unk_0024;  /* 0x24 */
    u32 unk_0028;  /* 0x28 */
    u32 unk_002c;  /* 0x2c */
    u32 unk_0030;  /* 0x30 */
    u32 unk_0034;  /* 0x34 */
    u32 unk_0038;  /* 0x38 */
    u32 unk_003c;  /* 0x3c */
    f32 speed;  /* 0x40 */
    u32 unk_0044;  /* 0x44 */
    u8 pad_0048[0x8];
    u32 unk_0050;  /* 0x50 */
    u32 unk_0054;  /* 0x54 */
    u32 unk_0058;  /* 0x58 */
    u32 unk_005c;  /* 0x5c */
    u32 unk_0060;  /* 0x60 */
    u32 unk_0064;  /* 0x64 */
    u32 unk_0068;  /* 0x68 */
    u32 unk_006c;  /* 0x6c */
    u32 unk_0070;  /* 0x70 */
    u32 unk_0074;  /* 0x74 */
    u32 unk_0078;  /* 0x78 */
    u8 pad_007c[0x4];
    u32 unk_0080;  /* 0x80 */
    u32 unk_0084;  /* 0x84 */
    u32 unk_0088;  /* 0x88 */
    u32 unk_008c;  /* 0x8c */
    u32 unk_0090;  /* 0x90 */
    u32 unk_0094;  /* 0x94 */
    u32 unk_0098;  /* 0x98 */
    u32 unk_009c;  /* 0x9c */
    u32 unk_00a0;  /* 0xa0 */
    u32 unk_00a4;  /* 0xa4 */
    u32 unk_00a8;  /* 0xa8 */
    u32 unk_00ac;  /* 0xac */
    u32 unk_00b0;  /* 0xb0 */
    u32 unk_00b4;  /* 0xb4 */
    u32 unk_00b8;  /* 0xb8 */
    u32 unk_00bc;  /* 0xbc */
    u32 unk_00c0;  /* 0xc0 */
    u32 unk_00c4;  /* 0xc4 */
    u32 unk_00c8;  /* 0xc8 */
    u32 unk_00cc;  /* 0xcc */
    u8 pad_00d0[0xc];
    u32 unk_00dc;  /* 0xdc */
    u32 unk_00e0;  /* 0xe0 */
    u32 unk_00e4;  /* 0xe4 */
    u32 unk_00e8;  /* 0xe8 */
    u32 unk_00ec;  /* 0xec */
    u32 unk_00f0;  /* 0xf0 */
    u32 unk_00f4;  /* 0xf4 */
    u32 unk_00f8;  /* 0xf8 */
    u32 unk_00fc;  /* 0xfc */
    u32 unk_0100;  /* 0x100 */
    u32 unk_0104;  /* 0x104 */
    u32 unk_0108;  /* 0x108 */
    u32 unk_010c;  /* 0x10c */
    u32 unk_0110;  /* 0x110 */
    u32 unk_0114;  /* 0x114 */
    u32 unk_0118;  /* 0x118 */
    u32 unk_011c;  /* 0x11c */
    void * maybe_params;  /* 0x120 */
    u32 unk_0124;  /* 0x124 */
    f32 maybe_handbrakeInput;  /* 0x128 */
    f32 maybe_brakeInput;  /* 0x12c */
    f32 maybe_clutchInput;  /* 0x130 */
    f32 maybe_throttleInput;  /* 0x134 */
    u32 unk_0138;  /* 0x138 */
    u32 unk_013c;  /* 0x13c */
    u32 unk_0140;  /* 0x140 */
    u32 unk_0144;  /* 0x144 */
    u32 unk_0148;  /* 0x148 */
    u32 unk_014c;  /* 0x14c */
    u32 unk_0150;  /* 0x150 */
    u32 unk_0154;  /* 0x154 */
    u32 unk_0158;  /* 0x158 */
    u8 pad_015c[0x4];
    u32 unk_0160;  /* 0x160 */
    u8 pad_0164[0xc];
    u32 unk_0170;  /* 0x170 */
    u32 unk_0174;  /* 0x174 */
    u32 unk_0178;  /* 0x178 */
    u8 pad_017c[0x4];
    u32 unk_0180;  /* 0x180 */
    u32 unk_0184;  /* 0x184 */
    u32 unk_0188;  /* 0x188 */
    u32 unk_018c;  /* 0x18c */
    u32 unk_0190;  /* 0x190 */
    u32 unk_0194;  /* 0x194 */
    u32 unk_0198;  /* 0x198 */
    u32 unk_019c;  /* 0x19c */
    u32 unk_01a0;  /* 0x1a0 */
    u32 unk_01a4;  /* 0x1a4 */
    u32 unk_01a8;  /* 0x1a8 */
    u8 pad_01ac[0x4];
    u32 unk_01b0;  /* 0x1b0 */
    u8 pad_01b4[0x18];
    u32 unk_01cc;  /* 0x1cc */
    u8 pad_01d0[0x8];
    u32 unk_01d8;  /* 0x1d8 */
    u8 pad_01dc[0x14];
    u32 unk_01f0;  /* 0x1f0 */
    u32 unk_01f4;  /* 0x1f4 */
    u32 unk_01f8;  /* 0x1f8 */
    u32 unk_01fc;  /* 0x1fc */
    u8 pad_0200[0x10];
    u32 unk_0210;  /* 0x210 */
    u32 unk_0214;  /* 0x214 */
    u32 unk_0218;  /* 0x218 */
    u8 pad_021c[0x4];
    u32 unk_0220;  /* 0x220 */
    u32 unk_0224;  /* 0x224 */
    u32 unk_0228;  /* 0x228 */
    u32 unk_022c;  /* 0x22c */
    u32 unk_0230;  /* 0x230 */
    u32 unk_0234;  /* 0x234 */
    u32 unk_0238;  /* 0x238 */
    u32 unk_023c;  /* 0x23c */
    u8 pad_0240[0x20];
    u32 unk_0260;  /* 0x260 */
    u32 unk_0264;  /* 0x264 */
    u8 pad_0268[0x4];
    u32 unk_026c;  /* 0x26c */
    u32 unk_0270;  /* 0x270 */
    u32 unk_0274;  /* 0x274 */
    u32 unk_0278;  /* 0x278 */
    u8 pad_027c[0x10];
    u32 unk_028c;  /* 0x28c */
    u32 unk_0290;  /* 0x290 */
    u8 pad_0294[0xc];
    u32 unk_02a0;  /* 0x2a0 */
    u8 pad_02a4[0x8];
    u32 unk_02ac;  /* 0x2ac */
    u32 unk_02b0;  /* 0x2b0 */
    u32 unk_02b4;  /* 0x2b4 */
    u8 pad_02b8[0x38];
    u32 unk_02f0;  /* 0x2f0 */
    u8 pad_02f4[0x18];
    u32 unk_030c;  /* 0x30c */
    u8 pad_0310[0x8];
    u32 unk_0318;  /* 0x318 */
    u8 pad_031c[0x14];
    u32 unk_0330;  /* 0x330 */
    u32 unk_0334;  /* 0x334 */
    u32 unk_0338;  /* 0x338 */
    u32 unk_033c;  /* 0x33c */
    u8 pad_0340[0x10];
    u32 unk_0350;  /* 0x350 */
    u32 unk_0354;  /* 0x354 */
    u32 unk_0358;  /* 0x358 */
    u8 pad_035c[0x4];
    u32 unk_0360;  /* 0x360 */
    u32 unk_0364;  /* 0x364 */
    u32 unk_0368;  /* 0x368 */
    u32 unk_036c;  /* 0x36c */
    u32 unk_0370;  /* 0x370 */
    u32 unk_0374;  /* 0x374 */
    u32 unk_0378;  /* 0x378 */
    u32 unk_037c;  /* 0x37c */
    u8 pad_0380[0x20];
    u32 unk_03a0;  /* 0x3a0 */
    u32 unk_03a4;  /* 0x3a4 */
    u8 pad_03a8[0x4];
    u32 unk_03ac;  /* 0x3ac */
    u32 unk_03b0;  /* 0x3b0 */
    u32 unk_03b4;  /* 0x3b4 */
    u32 unk_03b8;  /* 0x3b8 */
    u8 pad_03bc[0x10];
    u32 unk_03cc;  /* 0x3cc */
    u32 unk_03d0;  /* 0x3d0 */
    u8 pad_03d4[0xc];
    u32 unk_03e0;  /* 0x3e0 */
    u8 pad_03e4[0x8];
    u32 unk_03ec;  /* 0x3ec */
    u32 unk_03f0;  /* 0x3f0 */
    u32 unk_03f4;  /* 0x3f4 */
    u8 pad_03f8[0x38];
    u32 unk_0430;  /* 0x430 */
    u8 pad_0434[0x18];
    u32 unk_044c;  /* 0x44c */
    u8 pad_0450[0x8];
    u32 unk_0458;  /* 0x458 */
    u8 pad_045c[0x14];
    u32 unk_0470;  /* 0x470 */
    u32 unk_0474;  /* 0x474 */
    u32 unk_0478;  /* 0x478 */
    u32 unk_047c;  /* 0x47c */
    u8 pad_0480[0x10];
    u32 unk_0490;  /* 0x490 */
    u32 unk_0494;  /* 0x494 */
    u32 unk_0498;  /* 0x498 */
    u32 unk_049c;  /* 0x49c */
    u32 unk_04a0;  /* 0x4a0 */
    u32 unk_04a4;  /* 0x4a4 */
    u32 unk_04a8;  /* 0x4a8 */
    u32 unk_04ac;  /* 0x4ac */
    u32 unk_04b0;  /* 0x4b0 */
    u32 unk_04b4;  /* 0x4b4 */
    u32 unk_04b8;  /* 0x4b8 */
    u32 unk_04bc;  /* 0x4bc */
    u8 pad_04c0[0x20];
    u32 unk_04e0;  /* 0x4e0 */
    u32 unk_04e4;  /* 0x4e4 */
    u32 unk_04e8;  /* 0x4e8 */
    u32 unk_04ec;  /* 0x4ec */
    u32 unk_04f0;  /* 0x4f0 */
    u32 unk_04f4;  /* 0x4f4 */
    u32 unk_04f8;  /* 0x4f8 */
    u8 pad_04fc[0x8];
    u32 unk_0504;  /* 0x504 */
    u8 pad_0508[0x4];
    u32 unk_050c;  /* 0x50c */
    u32 unk_0510;  /* 0x510 */
    u8 pad_0514[0xc];
    u32 unk_0520;  /* 0x520 */
    u8 pad_0524[0x8];
    u32 unk_052c;  /* 0x52c */
    u32 unk_0530;  /* 0x530 */
    u32 unk_0534;  /* 0x534 */
    u8 pad_0538[0x38];
    u32 unk_0570;  /* 0x570 */
    u8 pad_0574[0x18];
    u32 unk_058c;  /* 0x58c */
    u8 pad_0590[0x8];
    u32 unk_0598;  /* 0x598 */
    u8 pad_059c[0x14];
    u32 unk_05b0;  /* 0x5b0 */
    u32 unk_05b4;  /* 0x5b4 */
    u32 unk_05b8;  /* 0x5b8 */
    u32 unk_05bc;  /* 0x5bc */
    u8 pad_05c0[0x10];
    u32 unk_05d0;  /* 0x5d0 */
    u32 unk_05d4;  /* 0x5d4 */
    u32 unk_05d8;  /* 0x5d8 */
    u8 pad_05dc[0x4];
    u32 unk_05e0;  /* 0x5e0 */
    u32 unk_05e4;  /* 0x5e4 */
    u32 unk_05e8;  /* 0x5e8 */
    u32 unk_05ec;  /* 0x5ec */
    u32 unk_05f0;  /* 0x5f0 */
    u32 unk_05f4;  /* 0x5f4 */
    u32 unk_05f8;  /* 0x5f8 */
    u32 unk_05fc;  /* 0x5fc */
    u8 pad_0600[0x20];
    u32 unk_0620;  /* 0x620 */
    u32 unk_0624;  /* 0x624 */
    u32 unk_0628;  /* 0x628 */
    u32 unk_062c;  /* 0x62c */
    u32 unk_0630;  /* 0x630 */
    u32 unk_0634;  /* 0x634 */
    u32 unk_0638;  /* 0x638 */
    u8 pad_063c[0x10];
    u32 unk_064c;  /* 0x64c */
    u32 unk_0650;  /* 0x650 */
    u8 pad_0654[0xc];
    u32 unk_0660;  /* 0x660 */
    u8 pad_0664[0x8];
    u32 unk_066c;  /* 0x66c */
    u32 unk_0670;  /* 0x670 */
    u32 unk_0674;  /* 0x674 */
    u8 pad_0678[0x38];
    u32 unk_06b0;  /* 0x6b0 */
    u32 unk_06b4;  /* 0x6b4 */
    u32 unk_06b8;  /* 0x6b8 */
    u32 unk_06bc;  /* 0x6bc */
    u32 unk_06c0;  /* 0x6c0 */
    u32 unk_06c4;  /* 0x6c4 */
    u32 unk_06c8;  /* 0x6c8 */
    u32 unk_06cc;  /* 0x6cc */
    u8 pad_06d0[0x10];
    u32 unk_06e0;  /* 0x6e0 */
    u32 unk_06e4;  /* 0x6e4 */
    u32 unk_06e8;  /* 0x6e8 */
    u32 unk_06ec;  /* 0x6ec */
    u32 unk_06f0;  /* 0x6f0 */
    u32 unk_06f4;  /* 0x6f4 */
    u32 unk_06f8;  /* 0x6f8 */
    u32 unk_06fc;  /* 0x6fc */
    u32 unk_0700;  /* 0x700 */
    u32 unk_0704;  /* 0x704 */
    u32 unk_0708;  /* 0x708 */
    u32 unk_070c;  /* 0x70c */
    u8 pad_0710[0x4];
    u32 unk_0714;  /* 0x714 */
    u32 unk_0718;  /* 0x718 */
    u32 unk_071c;  /* 0x71c */
    u32 unk_0720;  /* 0x720 */
    u8 pad_0724[0xc];
    u32 unk_0730;  /* 0x730 */
    u32 unk_0734;  /* 0x734 */
    u32 unk_0738;  /* 0x738 */
    u32 unk_073c;  /* 0x73c */
    u32 unk_0740;  /* 0x740 */
    u32 unk_0744;  /* 0x744 */
    u32 unk_0748;  /* 0x748 */
    u32 unk_074c;  /* 0x74c */
    u8 pad_0750[0x8];
    u32 unk_0758;  /* 0x758 */
    u32 unk_075c;  /* 0x75c */
    u32 unk_0760;  /* 0x760 */
    u32 unk_0764;  /* 0x764 */
    u32 unk_0768;  /* 0x768 */
    u32 unk_076c;  /* 0x76c */
    u32 unk_0770;  /* 0x770 */
    u32 unk_0774;  /* 0x774 */
    u32 unk_0778;  /* 0x778 */
    u32 unk_077c;  /* 0x77c */
    u32 unk_0780;  /* 0x780 */
    u32 unk_0784;  /* 0x784 */
    u32 unk_0788;  /* 0x788 */
    u32 unk_078c;  /* 0x78c */
    u8 pad_0790[0x4];
    u32 unk_0794;  /* 0x794 */
    u32 unk_0798;  /* 0x798 */
    u32 unk_079c;  /* 0x79c */
    u32 unk_07a0;  /* 0x7a0 */
    u8 pad_07a4[0xc];
    u32 unk_07b0;  /* 0x7b0 */
    u32 unk_07b4;  /* 0x7b4 */
    u32 unk_07b8;  /* 0x7b8 */
    u32 unk_07bc;  /* 0x7bc */
    u32 unk_07c0;  /* 0x7c0 */
    u32 unk_07c4;  /* 0x7c4 */
    u32 unk_07c8;  /* 0x7c8 */
    u32 unk_07cc;  /* 0x7cc */
    u32 unk_07d0;  /* 0x7d0 */
    u32 unk_07d4;  /* 0x7d4 */
    u32 unk_07d8;  /* 0x7d8 */
    u32 unk_07dc;  /* 0x7dc */
    u32 unk_07e0;  /* 0x7e0 */
    u32 unk_07e4;  /* 0x7e4 */
    u32 unk_07e8;  /* 0x7e8 */
    u32 unk_07ec;  /* 0x7ec */
    u32 unk_07f0;  /* 0x7f0 */
    u32 unk_07f4;  /* 0x7f4 */
    f32 rpm;  /* 0x7f8 */
    u32 unk_07fc;  /* 0x7fc */
    u32 unk_0800;  /* 0x800 */
    u32 unk_0804;  /* 0x804 */
    u32 unk_0808;  /* 0x808 */
    u32 unk_080c;  /* 0x80c */
    u8 unk_0810;  /* 0x810 */
    u8 unk_0811;  /* 0x811 */
    u8 pad_0812[0x2];
    u32 gear;  /* 0x814 */
    u32 unk_0818;  /* 0x818 */
    u32 unk_081c;  /* 0x81c */
    u32 unk_0820;  /* 0x820 */
    u32 unk_0824;  /* 0x824 */
    u32 unk_0828;  /* 0x828 */
    u8 unk_082c;  /* 0x82c */
    u8 unk_082d;  /* 0x82d */
    u8 pad_082e[0x1];
    u8 unk_082f;  /* 0x82f */
    u8 unk_0830;  /* 0x830 */
    u8 unk_0831;  /* 0x831 */
    u8 unk_0832;  /* 0x832 */
    u8 pad_0833[0x1];
    u8 unk_0834;  /* 0x834 */
    u8 unk_0835;  /* 0x835 */
    u8 pad_0836[0x2];
    u32 unk_0838;  /* 0x838 */
    u8 pad_083c[0x8];
    u32 unk_0844;  /* 0x844 */
    u32 unk_0848;  /* 0x848 */
    u32 unk_084c;  /* 0x84c */
    u32 unk_0850;  /* 0x850 */
    u8 pad_0854[0x4];
    u32 unk_0858;  /* 0x858 */
    u32 unk_085c;  /* 0x85c */
    u32 unk_0860;  /* 0x860 */
    u32 unk_0864;  /* 0x864 */
    u32 unk_0868;  /* 0x868 */
    u32 unk_086c;  /* 0x86c */
    f32 maybe_rpmLimit;  /* 0x870 */
    f32 maybe_rpmLimitInv;  /* 0x874 */
    u32 unk_0878;  /* 0x878 */
    u32 unk_087c;  /* 0x87c */
    u32 unk_0880;  /* 0x880 */
    u32 unk_0884;  /* 0x884 */
    u32 unk_0888;  /* 0x888 */
    u8 unk_088c;  /* 0x88c */
    u8 nitroOn;  /* 0x88d */
    u8 unk_088e;  /* 0x88e */
    u8 unk_088f;  /* 0x88f */
    u8 unk_0890;  /* 0x890 */
    u8 unk_0891;  /* 0x891 */
    u8 unk_0892;  /* 0x892 */
    u8 unk_0893;  /* 0x893 */
    u32 unk_0894;  /* 0x894 */
    u32 unk_0898;  /* 0x898 */
    u32 unk_089c;  /* 0x89c */
    u8 unk_08a0;  /* 0x8a0 */
    u8 unk_08a1;  /* 0x8a1 */
    u8 pad_08a2[0x2];
    u32 unk_08a4;  /* 0x8a4 */
    u32 unk_08a8;  /* 0x8a8 */
    u32 unk_08ac;  /* 0x8ac */
    u8 unk_08b0;  /* 0x8b0 */
    u8 unk_08b1;  /* 0x8b1 */
    u8 pad_08b2[0x2];
    u32 unk_08b4;  /* 0x8b4 */
    u32 unk_08b8;  /* 0x8b8 */
    u8 unk_08bc;  /* 0x8bc */
    u8 pad_08bd[0x3];
    u32 unk_08c0;  /* 0x8c0 */
    u32 unk_08c4;  /* 0x8c4 */
    u32 unk_08c8;  /* 0x8c8 */
    u32 unk_08cc;  /* 0x8cc */
    u32 unk_08d0;  /* 0x8d0 */
    u32 unk_08d4;  /* 0x8d4 */
    u32 unk_08d8;  /* 0x8d8 */
    u32 unk_08dc;  /* 0x8dc */
    u32 unk_08e0;  /* 0x8e0 */
    u32 unk_08e4;  /* 0x8e4 */
    u8 unk_08e8;  /* 0x8e8 */
    u8 pad_08e9[0x3];
    u32 unk_08ec;  /* 0x8ec */
    u8 unk_08f0;  /* 0x8f0 */
    u8 pad_08f1[0x3];
    u32 unk_08f4;  /* 0x8f4 */
    u32 unk_08f8;  /* 0x8f8 */
    u8 pad_08fc[0x4];
    u32 unk_0900;  /* 0x900 */
    u32 unk_0904;  /* 0x904 */
    u32 unk_0908;  /* 0x908 */
    u32 unk_090c;  /* 0x90c */
    u32 unk_0910;  /* 0x910 */
    u32 unk_0914;  /* 0x914 */
    u32 unk_0918;  /* 0x918 */
    u32 unk_091c;  /* 0x91c */
    u32 unk_0920;  /* 0x920 */
    u32 unk_0924;  /* 0x924 */
    u32 unk_0928;  /* 0x928 */
    u32 unk_092c;  /* 0x92c */
    u32 unk_0930;  /* 0x930 */
    u32 unk_0934;  /* 0x934 */
    u32 unk_0938;  /* 0x938 */
    u32 unk_093c;  /* 0x93c */
    u32 unk_0940;  /* 0x940 */
    u32 unk_0944;  /* 0x944 */
    u32 unk_0948;  /* 0x948 */
    u32 unk_094c;  /* 0x94c */
    u32 unk_0950;  /* 0x950 */
    u32 unk_0954;  /* 0x954 */
    u32 unk_0958;  /* 0x958 */
    u32 unk_095c;  /* 0x95c */
    u8 pad_0960[0x1];
    u8 unk_0961;  /* 0x961 */
    u8 pad_0962[0x2];
    u32 unk_0964;  /* 0x964 */
    u32 unk_0968;  /* 0x968 */
    u32 unk_096c;  /* 0x96c */
    u32 unk_0970;  /* 0x970 */
    u32 unk_0974;  /* 0x974 */
    u32 unk_0978;  /* 0x978 */
    u32 unk_097c;  /* 0x97c */
    u32 unk_0980;  /* 0x980 */
    u8 pad_0984[0x4];
    u32 unk_0988;  /* 0x988 */
    u32 unk_098c;  /* 0x98c */
    u32 unk_0990;  /* 0x990 */
    u32 unk_0994;  /* 0x994 */
    u32 unk_0998;  /* 0x998 */
    u32 unk_099c;  /* 0x99c */
    u32 unk_09a0;  /* 0x9a0 */
    u32 unk_09a4;  /* 0x9a4 */
    u8 unk_09a8;  /* 0x9a8 */
    u8 pad_09a9[0x103];
    u32 unk_0aac;  /* 0xaac */
    u8 unk_0ab0;  /* 0xab0 */
    u8 unk_0ab1;  /* 0xab1 */
    u8 pad_0ab2[0x6];
    u32 unk_0ab8;  /* 0xab8 */
    u32 unk_0abc;  /* 0xabc */
    u32 unk_0ac0;  /* 0xac0 */
    u8 unk_0ac4;  /* 0xac4 */
    u8 pad_0ac5[0x3];
    u32 unk_0ac8;  /* 0xac8 */
    u8 unk_0acc;  /* 0xacc */
    u8 pad_0acd[0xb];
    u32 unk_0ad8;  /* 0xad8 */
    u32 unk_0adc;  /* 0xadc */
    u32 unk_0ae0;  /* 0xae0 */
    u8 pad_0ae4[0x20];
    u32 unk_0b04;  /* 0xb04 */
    u32 unk_0b08;  /* 0xb08 */
    u32 unk_0b0c;  /* 0xb0c */
    u8 pad_0b10[0x4c];
    u32 unk_0b5c;  /* 0xb5c */
    u32 unk_0b60;  /* 0xb60 */
    u32 unk_0b64;  /* 0xb64 */
    u32 unk_0b68;  /* 0xb68 */
    u32 unk_0b6c;  /* 0xb6c */
    u32 unk_0b70;  /* 0xb70 */
    u8 unk_0b74;  /* 0xb74 */
    u8 pad_0b75[0x17];
    u32 unk_0b8c;  /* 0xb8c */
    u8 pad_0b90[0x40];
    u32 unk_0bd0;  /* 0xbd0 */
    u8 pad_0bd4[0xc];
    u32 unk_0be0;  /* 0xbe0 */
    u32 unk_0be4;  /* 0xbe4 */
    u32 unk_0be8;  /* 0xbe8 */
    u32 unk_0bec;  /* 0xbec */
    u8 pad_0bf0[0xd4];
    u32 unk_0cc4;  /* 0xcc4 */
    u32 unk_0cc8;  /* 0xcc8 */
    u8 pad_0ccc[0xd8];
    u32 unk_0da4;  /* 0xda4 */
    u8 pad_0da8[0x10c];
    u32 unk_0eb4;  /* 0xeb4 */
    u8 pad_0eb8[0x4ae];
    u16 unk_1366;  /* 0x1366 */
    u8 pad_1368[0x4];
    u32 unk_136c;  /* 0x136c */
    u8 pad_1370[0x370];
    u32 unk_16e0;  /* 0x16e0 */
    u8 pad_16e4[0x4];
    u32 unk_16e8;  /* 0x16e8 */
    u32 unk_16ec;  /* 0x16ec */
    u8 pad_16f0[0x90];
    f32 trackPos;  /* 0x1780 */
    u32 lap;  /* 0x1784 */
    u32 unk_1788;  /* 0x1788 */
    u8 pad_178c[0x4];
    u32 unk_1790;  /* 0x1790 */
    u32 unk_1794;  /* 0x1794 */
    u32 unk_1798;  /* 0x1798 */
    u32 unk_179c;  /* 0x179c */
    f32 distance;  /* 0x17a0 */
    u8 pad_17a4[0x2c];
    u32 checkpoint;  /* 0x17d0 */
    u32 unk_17d4;  /* 0x17d4 */
    u32 flags;  /* 0x17d8 */
    u32 index;  /* 0x17dc */
} RaceCar;

typedef struct RaceCarList {  /* size 0x1c */
    RaceCar * cars[7];  /* 0x0 */
} RaceCarList;

extern RaceCarList *g_RaceCars;

typedef struct RaceScene {  /* size 0x44 */
    u32 unk_00;  /* 0x0 */
    u32 handlers[10];  /* 0x4 */
    u8 handlerCount;  /* 0x2c */
    u8 pad_002d[0x3];
    u32 flags;  /* 0x30 */
    u32 flagsB;  /* 0x34 */
    u32 unk_38;  /* 0x38 */
    u32 unk_3c;  /* 0x3c */
    u32 unk_40;  /* 0x40 */
} RaceScene;

extern RaceScene *g_RaceScene;

typedef struct RaceProg {  /* size 0x18 */
    u16 checkpointFlags;  /* 0x0 */
    u8 unk_02;  /* 0x2 */
    u8 pad_0003[0x1];
    u32 stateFlags;  /* 0x4 */
    u8 phase;  /* 0x8 */
    u8 pad_0009[0x3];
    u32 unk_0c;  /* 0xc */
    u32 unk_10;  /* 0x10 */
    u32 unk_14;  /* 0x14 */
} RaceProg;

extern RaceProg *g_RaceProg;

typedef struct LoadingCtx {  /* size 0x1c */
    u32 flags;  /* 0x0 */
    u32 unk_04;  /* 0x4 */
    u32 unk_08;  /* 0x8 */
    u8 pad_000c[0x8];
    void * workBufs[2];  /* 0x14 */
} LoadingCtx;

extern LoadingCtx *g_Loading;

typedef struct RoadData {  /* size 0x8 */
    u32 unk_00;  /* 0x0 */
    void * aiLine;  /* 0x4 */
} RoadData;

extern RoadData *g_RoadData;

#endif
