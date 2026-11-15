/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p).
 * 0x1ca6b0-0x1ca780 and 0x1e9010-0x1e9140 - https://decomp.me/scratch/LM97T (objdiff 100% unless noted) */
typedef struct WheelFx { int w[28]; } WheelFx;
typedef struct RaceCar {
    char pad0[0x1360];
    int tracker[28];         /* 0x1360 */
    WheelFx wheelFx[4];      /* 0x13d0, 0x70 each */
    char pad1[0x1780 - 0x1590];
    float trackPos;          /* 0x1780 */
    float lap;               /* 0x1784 */
    char pad2[0x17d0 - 0x1788];
    int checkpoint;          /* 0x17d0 */
    int pad17d4;
    int flags;               /* 0x17d8 */
    int index;               /* 0x17dc */
} RaceCar;
typedef struct RaceCarList { RaceCar *cars[7]; } RaceCarList;
extern RaceCarList *g_RaceCars;
typedef struct RaceScene { int state; int handlers[10]; char handlerCount; char pad2d[3]; int flags; int flagsB; } RaceScene;
extern RaceScene *g_RaceScene;

/* the ternary's else arm lands in the beqzl delay slot (3.0.1b145) */
RaceCar *RaceCar_Get(int i) { RaceCarList *l = g_RaceCars; return l != 0 ? l->cars[i] : 0; }
float RaceCar_GetLap(RaceCar *c) { return c->lap; }
float RaceCar_GetPosition(RaceCar *c) { return c->trackPos; }
int RaceCar_GetCheckpoint(RaceCar *c) { return c->checkpoint; }
void RaceCar_ClearFlags(RaceCar *c, int m) { c->flags &= ~m; }
void RaceCar_SetFlags(RaceCar *c, int m) { c->flags |= m; }
int RaceCar_GetFlags(RaceCar *c) { return c->flags; }
WheelFx *RaceCar_GetWheelFx(RaceCar *c, int i) { return &c->wheelFx[i]; }
int *RaceCar_GetTracker(RaceCar *c) { return c->tracker; }
int RaceCar_GetIndex(RaceCar *c) { return c->index; }

int RaceScene_IsPaused(void) { RaceScene *s = g_RaceScene; return s != 0 ? (s->flags & 0x40) != 0 : 0; }
void RaceScene_SetFlagB4(void) { g_RaceScene->flagsB |= 4; }
int RaceScene_IsFlag2(void) { return (g_RaceScene->flags & 2) != 0; }
void RaceScene_SetFlagB2(void) { g_RaceScene->flagsB |= 2; }
int RaceScene_IsReplay(void) { return (g_RaceScene->flags & 0x10000) != 0; }
int RaceScene_IsFlag8000(void) { return (g_RaceScene->flags & 0x8000) != 0; }
void RaceScene_ClearFlag1(void) { g_RaceScene->flags &= ~1; }
int RaceScene_IsRunning(void) { return (g_RaceScene->flags & 1) != 0; }
int RaceScene_GetState(void) { return g_RaceScene->state; }
void RaceScene_SetFlags(int m) { g_RaceScene->state |= m; }
