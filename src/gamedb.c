/* Matching C (MWCPS2 3.0.1b145, -O4,p).
 * 0x2093a0-0x2094a0 - https://decomp.me/scratch/tIAOp (objdiff 100%) */
typedef struct Section { int w[8]; } Section;
typedef struct Course { int w[14]; } Course;
typedef struct Team { int w[22]; } Team;
typedef struct Event { int w[18]; } Event;
typedef struct Member { int w[16]; } Member;
typedef struct GameDb {
    int file;
    int teamCount;
    int eventCount;
    int memberCount[121];
    Team *teams;          /* 0x1f0 */
    Event *events;        /* 0x1f4 */
    Member *members[9];   /* 0x1f8 */
    Course *courses;      /* 0x21c */
    Section *sections[8]; /* 0x220 */
} GameDb;
extern GameDb *g_GameDb;
int File_IsBusy(int file);

Section *GameDb_GetCourseSection(unsigned char c, int s) { return &g_GameDb->sections[c][s]; }
Course *GameDb_GetCourse(int i) { return &g_GameDb->courses[i]; }
int GameDb_GetTeamCount(void) { return g_GameDb->teamCount; }
Team *GameDb_GetTeamRecord(int i) { return &g_GameDb->teams[i]; }
int GameDb_GetTeamMemberCount(int i) { return g_GameDb->memberCount[i]; }
Member *GameDb_GetTeamMember(int i, int j) { return &g_GameDb->members[i][j]; }
int GameDb_GetEventCount(void) { return g_GameDb->eventCount; }
Event *GameDb_GetEvent(int i) { return &g_GameDb->events[i]; }
int GameDb_IsLoading(void) { return File_IsBusy(g_GameDb->file); }
