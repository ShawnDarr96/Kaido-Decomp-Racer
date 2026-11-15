/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * https://decomp.me/scratch/zLgfx - all at objdiff 100% unless marked NONMATCHING. */
typedef struct Panel { int id; int f4; int f8; int cancel; int confirm; int dirty; int redraw; int redrawn; } Panel;

void Composer_ConsumeRedraw(Panel *p) { if (p->redraw) { p->redraw = 0; p->redrawn = 1; } }
void Composer_ClearDirty(Panel *p) { p->dirty = 0; }
int Nameentry_GetField_18(Panel *p) { return p->redraw; }
int Nameentry_GetField_14(Panel *p) { return p->dirty; }
int Composer_ConsumeConfirm(Panel *p) { int r = p->confirm; p->confirm = 0; return r; }
int Composer_ConsumeCancel(Panel *p) { int r = p->cancel; p->cancel = 0; return r; }
int Nameentry_GetField_8_81f0(Panel *p) { return p->f8; }
int Nameentry_GetField_4_8200(Panel *p) { return p->f4; }
int Nameentry_Nop_2(Panel *p) { return p->id; }
void Nameentry_SetField_8(Panel *p, int v) { p->f8 = v; }
void Composer_InitPanel(Panel *p, int v) { p->id = -1; p->f4 = v; p->f8 = v; p->cancel = 1; p->confirm = 1; p->dirty = 1; p->redraw = 0; p->redrawn = 0; }
