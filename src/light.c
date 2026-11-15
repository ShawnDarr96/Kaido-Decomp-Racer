/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * https://decomp.me/scratch/zLgfx - all at objdiff 100% unless marked NONMATCHING. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
typedef struct Light { union { Vec4 dir[11]; float intensity[44]; } u; Vec4 colorMat[5]; Vec4 ambient; char pad110[0x130 - 0x110]; Vec4 dirMat[4]; } Light;

void Color_SetRgb5551(unsigned short *c, int rgb) { *c = rgb | 0x8000; }
Vec4 *Light_GetColorMatrix(Light *l) { return l->colorMat; }
Vec4 *Light_GetDirMatrix(Light *l) { return l->dirMat; }
Vec4 *Light_GetDirection(Light *l, int i) { return &l->u.dir[i]; }
Vec4 *Light_GetAmbient(Light *l) { return &l->ambient; }
float *Light_GetIntensity(Light *l, int i) { return &l->u.intensity[i]; }
