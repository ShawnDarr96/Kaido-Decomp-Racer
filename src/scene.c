/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * 0x14b850-0x14b8c0 - https://decomp.me/scratch/peXXi (all at 100%). */
extern int s_SceneCallback2, s_SceneResetCheck, s_SceneVar4, s_SceneVar5, s_SceneVar6, s_SceneVar9, s_SceneVar10;

void Scene_SetCallback2(int f) { s_SceneCallback2 = f; }
void Scene_SetResetCheck(int f) { s_SceneResetCheck = f; }
int Scene_GetNext(void) { return s_SceneVar4; }
void Scene_RequestChange(int next) { s_SceneVar4 = next; s_SceneVar10 = 1; }
void Scene_RequestExit(void) { s_SceneVar9 = 1; }
int Scene_SetParam(int v) { s_SceneVar6 = v; return s_SceneVar5; }
int Scene_GetParam(void) { return s_SceneVar5; }
