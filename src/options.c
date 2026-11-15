/* Matching C (MWCPS2 3.0 build 011126, -O4,p; see config/compiler.txt). */
typedef struct Options { char pad[0x1c]; int seVolume; int bgmVolume; } Options;
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
