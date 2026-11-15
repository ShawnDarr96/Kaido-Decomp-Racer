/* Matching C - https://decomp.me/scratch/wWxaE, all 20 at objdiff 100% with
 * MWCPS2 3.0.1b145 (Built 050209), -O4,p (see config/compiler.txt);
 * also identical under 3.0.1b103.
 * 0x1b48e0-0x1b49a0 (RivalRec) and 0x1c1670-0x1c1730 (Profile). */
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct RivalRec {
    short id;            /* 0x00, -1 = empty */
    short subId;         /* 0x02 */
    unsigned char team;  /* 0x04 */
    char pad5[3];
    int carId;           /* 0x08 */
    char padc[0x20 - 0xc];
    Vec3 pos;            /* 0x20 */
    signed char type;    /* 0x2c */
    char pad2d[0x38 - 0x2d];
    short count;         /* 0x38 */
    short max;           /* 0x3a */
} RivalRec;
typedef struct Profile {
    char pad0[0x2730];
    signed char chapter;     /* 0x2730 */
    signed char difficulty;  /* 0x2731 */
    char pad2732;
    signed char selection;   /* 0x2733 */
    int day;                 /* 0x2734 */
    char pad2738[0x273d - 0x2738];
    signed char flag273d;    /* 0x273d */
    char pad273e;
    signed char flag273f;    /* 0x273f */
    char pad2740[0x2a74 - 0x2740];
    int courseRecord[40];    /* 0x2a74 */
    int courseBest[62];      /* 0x2b14 */
    int eventSeen[1];        /* 0x2c0c */
} Profile;

void RivalRec_GetPosition(Vec3 *out, RivalRec *r) { *out = r->pos; }
int RivalRec_GetId(RivalRec *r) { return r->id; }
int RivalRec_IsBelowMax(RivalRec *r) { return r->count < r->max; }
int RivalRec_GetType(RivalRec *r) { return r->type; }
int RivalRec_GetTeam(RivalRec *r) { return (signed char)r->team; }
int RivalRec_IsValid(RivalRec *r) { return r->id != -1; }
int RivalRec_IsBoss(RivalRec *r) { return r->team == 1; }
int RivalRec_GetCarId(RivalRec *r) { return r->carId; }
int RivalRec_GetCourse(RivalRec *r) { int c = -1; if ((unsigned)(r->team - 11) < 2) c = r->subId; return c; }
int RivalRec_GetSubId(RivalRec *r) { return r->subId; }
void Profile_SetEventSeen(Profile *p, int i) { p->eventSeen[i] = 1; }
void Profile_SetCourseRecord(Profile *p, int i, int v) { p->courseRecord[i] = v; }
void Profile_SetCourseBest(Profile *p, int i, int v) { p->courseBest[i] = v; }
int Profile_GetFlag273f(Profile *p) { return p->flag273f; }
int Profile_GetFlag273d(Profile *p) { return p->flag273d; }
int Profile_GetDifficulty(Profile *p) { return p->difficulty; }
int Profile_GetChapter(Profile *p) { return p->chapter; }
void Profile_SetSelection2733(Profile *p, int v) { p->selection = v; }
int Profile_GetSelection2733(Profile *p) { return p->selection; }
int Profile_GetWeekday(Profile *p) { return p->day % 7; }
