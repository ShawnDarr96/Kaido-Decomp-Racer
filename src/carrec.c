/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * 0x1d20f0-0x1d2190 - https://decomp.me/scratch/peXXi (all at 100%). */
typedef struct CarRec {
    short model;                         /* 0x0, -1 = empty */
    union { short s; signed char c; } u2; /* 0x2: cleared as a short, colour/parts set as a byte */
    int flag4;                           /* 0x4 */
    char pad8[8];
    int mileage;                         /* 0x10 */
} CarRec;

int CarRec_GetModelId(CarRec *r) { return r->model; }
void CarRec_Clear(CarRec *r) { r->model = -1; r->u2.s = 0; r->flag4 = 1; }
void CarRec_ClearModel(CarRec *r) { r->model = -1; }
int CarRec_GetModelIdRaw(CarRec *r) { return r->model; }
void CarRec_SetModel(CarRec *r, short m) { r->model = m; }
void CarRec_SetModelAndColor(CarRec *r, short m) { r->model = m; r->u2.c = 31; }
void CarRec_ClearParts(CarRec *r) { r->model = -1; r->u2.c = 32; }
void CarRec_SetMileage(CarRec *r, int v) { r->mileage = v; }
