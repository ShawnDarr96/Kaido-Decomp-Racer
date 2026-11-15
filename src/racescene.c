/* Matching C (MWCPS2 3.0.1b145, -O4,p).
 * 0x1e8f20-0x1e9000 - https://decomp.me/scratch/tIAOp (objdiff 100%) */
typedef struct RaceScene {
    int state;
    int handlers[10];
    char handlerCount;
    char pad2d[3];
    int flags;   /* 0x30 */
    int flagsB;  /* 0x34 */
    int unk38;
    int unk3c;
    int unk40;
} RaceScene;
extern RaceScene *g_RaceScene;

int RaceScene_Get_38(void) { return g_RaceScene->unk38; }
int RaceScene_Get_40(void) { return g_RaceScene->unk40; }
int RaceScene_IsFlag1000(void) { return (g_RaceScene->flags & 0x1000) != 0; }
int RaceScene_IsFlag400(void) { return (g_RaceScene->flags & 0x400) != 0; }
void RaceScene_ClearFlag800(void) { g_RaceScene->flags &= ~0x800; }
int RaceScene_IsFlag800(void) { return (g_RaceScene->flags & 0x800) != 0; }
int RaceScene_IsFlag10(void) { return (g_RaceScene->flags & 0x10) != 0; }
/* the else arm of the ternary lands in the beqzl delay slot */
int RaceScene_IsActive(void) { RaceScene *s = g_RaceScene; return s != 0 ? (s->flags & 0x20000) != 0 : 0; }
