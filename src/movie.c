/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * https://decomp.me/scratch/zLgfx - all at objdiff 100% unless marked NONMATCHING. */
typedef struct Movie { char pad0[0x60]; char *frames; int frameSize; int bufCount; int bufSize; volatile int ready; /* decode thread updates it: Movie_ReleaseFrame re-reads it */ char pad74[8]; int user; } Movie;

char *Movie_GetFrameBuffer(Movie *m, int i) { return m->frames + i * m->frameSize; }
int Movie_GetBufferCount(Movie *m) { return m->bufCount; }
int Movie_GetBufferSize(Movie *m) { return m->bufSize; }
int Movie_GetReadyCount(Movie *m) { return m->ready; }
int Movie_GetUserData(Movie *m) { return m->user; }
void Movie_ReleaseFrame(Movie *m) { if (m->ready) m->ready--; }
int Movie_IsBufferFull(Movie *m) { return m->ready == m->bufCount; }
