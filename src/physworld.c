/* Matching C (MWCPS2 3.0.1b145, -O4,p).
 * 0x1585d0-0x158690 - https://decomp.me/scratch/tIAOp (objdiff 100%) */
typedef struct PhysWorld {
    int w0[4];
    int bounds[4];    /* 0x10 */
    int gravity[4];   /* 0x20 */
    int pad30[4];
    union { int bodyList; float firstBody; } u40; /* 0x40: read both as a list handle and as a float */
    int islandList;   /* 0x44 */
    int contactPool;  /* 0x48 */
} PhysWorld;
typedef struct PhysHandle { int value; int flags; } PhysHandle;

float PhysWorld_GetFirstBody(PhysWorld *w) { return w->u40.firstBody; }
int *PhysWorld_GetGravity(PhysWorld *w) { return w->gravity; }
int *PhysWorld_GetBounds(PhysWorld *w) { return w->bounds; }
/* the else arm of each ternary lands in the branch-likely delay slot */
int PhysHandle_GetIndexIfValid(PhysHandle *h) { return (h->flags & 0xff000000) == 0 ? 0 : h->value; }
int PhysHandle_GetValueIfValid(PhysHandle *h) { return (h->flags & 0xff000000) != 0 ? 0 : h->value; }
int PhysWorld_GetContactPool(PhysWorld *w) { return w->contactPool; }
int PhysWorld_GetIslandList(PhysWorld *w) { return w->islandList; }
int PhysWorld_GetBodyList(PhysWorld *w) { return w->u40.bodyList; }
float *PhysWorld_Init_Callback1(float *p) { p[3] = 1.0f; p[7] = 1.0f; p[11] = 1.0f; return p; }
