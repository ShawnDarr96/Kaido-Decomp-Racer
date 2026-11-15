/* Matching C (MWCPS2 3.0 build 011126, -O4,p; see config/compiler.txt). */
typedef struct Options { char pad[0x1c]; int seVolume; int bgmVolume; char pad24[4]; char block[2][0xe8]; } Options;
extern Options *g_Options;
int SndMgr_GetInstance(void);
int Snd_VolumeToMidi(char vol);
void SndMgr_SetPitchAll(int mgr, int value);

/* 0x001833f0 - matched: https://decomp.me/scratch/BJ7BQ */
void Options_ApplySeVolume(int vol) {
    if (SndMgr_GetInstance() != 0) {
        int mgr = SndMgr_GetInstance();
        SndMgr_SetPitchAll(mgr, Snd_VolumeToMidi((char)vol));
    }
    g_Options->seVolume = (char)vol;
}

/* 0x183460-0x1834f0 - matched: https://decomp.me/scratch/zUNmC */
signed char Options_GetBgmVolume(void) { return *(signed char *)(((char *)g_Options) + 0x20); }
signed char Options_Get_1c(void) { return *(signed char *)(((char *)g_Options) + 0x1c); }
int Options_Get_14(void) { return *(int *)(((char *)g_Options) + 0x14); }
int Options_Get_18(void) { return *(int *)(((char *)g_Options) + 0x18); }
int Options_Get_10(void) { return *(int *)(((char *)g_Options) + 0x10); }
void Options_Set_4(int v) { *(int *)(((char *)g_Options) + 0x4) = v; }
int Options_Get_4(void) { return *(int *)(((char *)g_Options) + 0x4); }
int Options_Get_8(void) { return *(int *)(((char *)g_Options) + 0x8); }
int Options_Get_c(void) { return *(int *)(((char *)g_Options) + 0xc); }

/* 0x1830d0-0x1833f0 - https://decomp.me/scratch/tudGj (objdiff 100% except where noted) */
typedef struct OptBlock { int w[58]; } OptBlock;
extern int g_ControlsShared1;
extern int g_ControlsShared2;
int Snd_RpmToPitch(char v);
void SndMgr_PlayEngine(int mgr, int pitch);

void Options_SetDefaultsSound(int *p) { p[0] = 0x80000000; p[1] = 0x200; p[2] = 0x40; p[3] = 0x20000000; p[4] = 2; p[5] = 1; }
void Options_SetDefaultsDisplay(int *p) {
    p[0] = 0; p[1] = 0x80000000; p[2] = 0; p[3] = 0; p[4] = 0x10; p[5] = 0x20; p[6] = 0x40; p[7] = 8;
    p[8] = 0x200; p[9] = 4; p[10] = 2; p[11] = 0x100; p[12] = 0x800000; p[13] = 1; p[14] = 0x20000000; p[15] = 0x80;
    p[16] = 0; p[17] = 0; p[18] = 0x10; p[19] = 0x20; p[20] = 0; p[21] = 0; p[22] = 0; p[23] = 0;
}
Options *Options_GetInstance(void) { return g_Options; }
/* NONMATCHING (objdiff 54%): the game keeps five repeated constants in s1-s5 and stores the
 * control map in order; the original was probably written differently (helper or table). */
void Options_SetDefaults(int *p) {
    Options_SetDefaultsDisplay(p);
    p[24] = 0x80000000; p[25] = 0x200; p[26] = 0x40; p[27] = 0x20000000; p[28] = 2; p[29] = 1;
    p[30] = 1; p[31] = 4; p[32] = 2; p[33] = 5; p[34] = 4; p[35] = 2; p[36] = 8; p[37] = 0;
    p[38] = 0x10; p[39] = 3; p[40] = 0x20; p[41] = 0xb; p[42] = g_ControlsShared1; p[43] = g_ControlsShared2;
    p[44] = 0x14; p[45] = 0x15; p[46] = 0x16; p[47] = 0x17; p[48] = 0x10; p[49] = 0x11; p[50] = 0x12; p[51] = 0x13;
    p[52] = 0x1a; p[53] = 0x1b; p[54] = 0x1c; p[55] = 0x1d; p[56] = 8; p[57] = 9;
}
void Options_SetDefaultsVolume(int *p) { p[0] = 0xf; p[1] = 0xf; p[2] = 0; }
void Options_SetDefaultsGame(int *p) { p[0] = 0; p[2] = 1; p[3] = 1; p[4] = 1; p[5] = 1; p[6] = 1; p[1] = 1; }
OptBlock *Options_Elem_28_xe8(int i) { return &((OptBlock *)((char *)g_Options + 0x28))[i]; }
/* matches: the only scratch differences were the target's "move" assembling as or instead of
 * the game's daddu (fixed in scripts/mkscratch.py) */
void Options_ApplyBgmVolume(int vol) {
    if (SndMgr_GetInstance() != 0) {
        int mgr = SndMgr_GetInstance();
        SndMgr_PlayEngine(mgr, Snd_RpmToPitch((char)vol));
    }
    g_Options->bgmVolume = (char)vol;
}
