/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * 0x1c0ea0-0x1c0f30 - https://decomp.me/scratch/peXXi (all at 100%).
 * Same Profile record as src/rival_profile.c; the three course arrays are 20 ints each. */
typedef struct Profile {
    char pad0[0x2708];
    int stat[15];            /* 0x2708 */
    int points;              /* 0x2744 */
    char pad2748[0x2a74 - 0x2748];
    int courseRecord[20];    /* 0x2a74 */
    int courseRecordB[20];   /* 0x2ac4 */
    char pad2b14[0x2c0c - 0x2b14];
    int eventSeen[100];      /* 0x2c0c */
    char pad2d9c[0x5310 - 0x2d9c];
    short playYear;          /* 0x5310 */
    short playMonth;         /* 0x5312 */
    short playDay;           /* 0x5314 */
} Profile;

int Profile_GetPlayYear(Profile *p) { return p->playYear; }
int Profile_GetPlayDay(Profile *p) { return p->playDay; }
int Profile_GetPlayMonth(Profile *p) { return p->playMonth; }
int Profile_GetStat(Profile *p, unsigned char i) { return p->stat[i]; }
int Profile_GetPoints(Profile *p) { return p->points; }
int Profile_IsEventSeen(Profile *p, int i) { return p->eventSeen[i]; }
int Profile_GetCourseRecordB(Profile *p, int i) { return p->courseRecordB[i]; }
int Profile_GetCourseRecord(Profile *p, int i) { return p->courseRecord[i]; }
