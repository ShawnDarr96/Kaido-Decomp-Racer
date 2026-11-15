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
