/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p).
 * 0x2cfab0-0x2cfb70 - matched: https://decomp.me/scratch/EJChW (objdiff 100%) */
typedef struct HudPanel { int w[51]; } HudPanel;
typedef struct RaceHud {
    int unk0;
    HudPanel panel[3];       /* 0x004, 0xcc each (RaceHud_GetRacerPanel) */
    float field268;          /* 0x268 */
    int field26c;            /* 0x26c */
    int pad270[3];
    int flags;               /* 0x27c */
    char pad280[0xfb4 - 0x280];
    signed char state;       /* 0xfb4 */
} RaceHud;
extern RaceHud *g_RaceHud;
extern char D_0032F7B0[];    /* meter table */

void RaceHud_SetField268(float v) { g_RaceHud->field268 = v; }
void RaceHud_SetField26c(int v) { g_RaceHud->field26c = v; }
int RaceHud_GetFlags(void) { return g_RaceHud->flags; }
void RaceHud_ToggleFlags(int m) { g_RaceHud->flags ^= m; }
void RaceHud_SetFlags(int m) { g_RaceHud->flags |= m; }
char *RaceHud_GetMeterTable(void) { return D_0032F7B0; }
HudPanel *RaceHud_GetRacerPanel(int i) { return &g_RaceHud->panel[i]; }
signed char RaceHud_GetState(void) { return g_RaceHud->state; }
