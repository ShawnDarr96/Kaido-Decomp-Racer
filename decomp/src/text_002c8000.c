// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002c8000 - 0x002cc000
#include "ghidra_types.h"

// 0x002c8330  size 0x430
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawNeedle(float param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 <= 0.0) {
    if (param_1 < 0.0) {
      RaceUi_DrawSprite((float)param_3,(float)param_4,*(undefined4 *)(param_2 + 0x3b70),0x3f800000,
                        0x3f800000,param_2 + 0x26f0,*_s_RaceUiSpriteCursor + -10,0xf,0,0);
    }
    else {
      RaceUi_DrawSprite((float)param_3,(float)(param_4 + -1),*(undefined4 *)(param_2 + 0x3b70),
                        0x3f800000,0x3f800000,param_2 + 0x26f0,*_s_RaceUiSpriteCursor + -10,0x10,0,0
                       );
      RaceUi_DrawSprite((float)param_3,(float)(param_4 + 4),*(undefined4 *)(param_2 + 0x3b70),
                        0x3f800000,0x3f800000,param_2 + 0x26f0,*_s_RaceUiSpriteCursor + -10,0xf,0,0)
      ;
    }
  }
  else {
    RaceUi_DrawSprite((float)param_3,(float)param_4,*(undefined4 *)(param_2 + 0x3b70),0x3f800000,
                      0x3f800000,param_2 + 0x26f0,*_s_RaceUiSpriteCursor + -10,0x10,0,0);
  }
  iVar1 = (int)(param_1 * 10.0);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  RaceUi_DrawSprite((float)(param_3 + 0xd),(float)param_4,*(undefined4 *)(param_2 + 0x3b70),
                    0x3f800000,0x3f800000,param_2 + 0x26f0,*_s_RaceUiSpriteCursor + -10,
                    (iVar1 / 1000) % 10 + 3,0,0);
  RaceUi_DrawSprite((float)(param_3 + 0x1c),(float)param_4,*(undefined4 *)(param_2 + 0x3b70),
                    0x3f800000,0x3f800000,param_2 + 0x26f0,*_s_RaceUiSpriteCursor + -10,
                    (iVar1 / 100) % 10 + 3,0,0);
  RaceUi_DrawSprite((float)(param_3 + 0x2b),(float)param_4,*(undefined4 *)(param_2 + 0x3b70),
                    0x3f800000,0x3f800000,param_2 + 0x26f0,*_s_RaceUiSpriteCursor + -10,
                    (iVar1 / 10) % 10 + 3,0,0);
  RaceUi_DrawSprite((float)(param_3 + 0x3a),(float)param_4,*(undefined4 *)(param_2 + 0x3b70),
                    0x3f800000,0x3f800000,param_2 + 0x26f0,*_s_RaceUiSpriteCursor + -10,0xd,0,0);
  RaceUi_DrawSprite((float)(param_3 + 0x41),(float)param_4,*(undefined4 *)(param_2 + 0x3b70),
                    0x3f800000,0x3f800000,param_2 + 0x26f0,*_s_RaceUiSpriteCursor + -10,
                    iVar1 % 10 + 3,0,0);
  return;
}

// 0x002c8760  size 0x270
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawGauge(float param_1,float param_2,undefined8 param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fStack_8;
  float fStack_4;
  
  pfVar2 = (float *)0x8;
  pfVar3 = &fStack_8;
  pfVar1 = pfVar3;
  while (pfVar1 != (float *)0x0) {
    *(undefined1 *)pfVar3 = 0;
    pfVar3 = (float *)((int)pfVar3 + 1);
    pfVar2 = (float *)((int)pfVar2 + -1);
    pfVar1 = pfVar2;
  }
  param_1 = param_1 - param_2;
  fStack_8 = (float)(param_4 + 0x35);
  fStack_4 = (float)param_5;
  if (param_1 <= 999.9) {
    fVar8 = param_1;
    if (param_1 < -999.9) {
      fVar8 = -999.9;
    }
  }
  else {
    fVar8 = 999.9;
  }
  if (param_1 <= 30.0) {
    if (param_1 < -30.0) {
      param_1 = -30.0;
    }
  }
  else {
    param_1 = 30.0;
  }
  iVar4 = (int)param_3;
  fVar7 = (param_1 * 48.0) / 30.0;
  iVar6 = (int)((float)param_4 - fVar7);
  iVar5 = (int)((float)param_4 + fVar7);
  RaceUi_DrawSprite((float)iVar6,(float)param_5,*(undefined4 *)(iVar4 + 0x3b70),
                    (float)(iVar5 - iVar6) / 16.0,0x3f800000,iVar4 + 0x26f0,
                    *_s_RaceUiSpriteCursor + -0x11,1,0,0);
  RaceUi_DrawSprite((float)iVar5 - 8.0,(float)param_5,*(undefined4 *)(iVar4 + 0x3b70),0x3f800000,
                    0x3f800000,iVar4 + 0x26f0,*_s_RaceUiSpriteCursor + -0x11,2,1,0);
  RaceUi_DrawSprite((float)iVar6 - 8.0,(float)param_5,*(undefined4 *)(iVar4 + 0x3b70),0x3f800000,
                    0x3f800000,iVar4 + 0x26f0,*_s_RaceUiSpriteCursor + -0x11,2,0,0);
  RaceUi_DrawNeedle(fVar8,param_3,(int)fStack_8,(int)fStack_4);
  return;
}

// 0x002c89d0  size 0x228
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_TaskGearIndicator(int param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  bVar2 = false;
  if (0 < (int)uVar1) {
    uVar3 = uVar1 & 7;
    if (((int)uVar1 < 0) && (uVar3 != 0)) {
      uVar3 = uVar3 - 8;
    }
    bVar2 = (int)uVar3 < 4;
  }
  if (!bVar2) {
    if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x94)) {
      RaceUi_DrawSprite(0x43a48000,0x43590000,*(undefined4 *)(param_1 + 0x3b70),
                        -((float)*(int *)(param_1 + 0x94) * 6e-06),0x3f800000,param_1 + 0x26f0,
                        *_s_RaceUiSpriteCursor + -0x12,0,2,0);
    }
    RaceUi_DrawSprite(0x43a48000,0x43590000,*(undefined4 *)(param_1 + 0x3b70),
                      -((float)*(int *)(param_1 + 0x90) * 6e-06),0x3f800000,param_1 + 0x26f0,
                      *_s_RaceUiSpriteCursor + -0x12,0,0,0);
  }
  uVar1 = *(uint *)(param_1 + 0x164);
  bVar2 = false;
  if (0 < (int)uVar1) {
    uVar3 = uVar1 & 7;
    if (((int)uVar1 < 0) && (uVar3 != 0)) {
      uVar3 = uVar3 - 8;
    }
    bVar2 = (int)uVar3 < 4;
  }
  if (!bVar2) {
    if (*(int *)(param_1 + 0x15c) < *(int *)(param_1 + 0x160)) {
      RaceUi_DrawSprite(0x43b48000,0x43590000,*(undefined4 *)(param_1 + 0x3b70),
                        (float)*(int *)(param_1 + 0x160) * 6e-06,0x3f800000,param_1 + 0x26f0,
                        *_s_RaceUiSpriteCursor + -0x12,0,3,0);
    }
    RaceUi_DrawSprite(0x43b48000,0x43590000,*(undefined4 *)(param_1 + 0x3b70),
                      (float)*(int *)(param_1 + 0x15c) * 6e-06,0x3f800000,param_1 + 0x26f0,
                      *_s_RaceUiSpriteCursor + -0x12,0,1,0);
  }
  return;
}

// 0x002c8c00  size 0x64c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawResultBanner(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_d0 [20];
  undefined4 uStack_bc;
  int iStack_b8;
  undefined1 auStack_90 [20];
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uVar7 = Profile_Get(0);
  lVar8 = GameState_GetRivalCount();
  bVar2 = lVar8 != 2;
  GameState_GetCurrentRecord(&iStack_50);
  iStack_30 = iStack_50;
  iStack_2c = iStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  iVar10 = (int)param_1;
  if (bVar2) {
    iVar6 = UiMgr_FindLayout(0x10);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,4,8);
    iVar6 = UiMgr_FindLayout(0x10);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,3,8);
    iVar6 = UiMgr_FindLayout(0x10);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,7,8);
    uVar9 = *(uint *)(iVar10 + 0x98);
  }
  else {
    uVar9 = *(uint *)(iVar10 + 0x98);
  }
  bVar1 = false;
  if (0 < (int)uVar9) {
    uVar5 = uVar9 & 7;
    if (((int)uVar9 < 0) && (uVar5 != 0)) {
      uVar5 = uVar5 - 8;
    }
    bVar1 = (int)uVar5 < 4;
  }
  if (!bVar1) {
    if (*(int *)(iVar10 + 0x90) < *(int *)(iVar10 + 0x94)) {
      RaceUi_DrawSprite(0x43988000,0x42000000,*(undefined4 *)(iVar10 + 0x3b70),
                        -((float)*(int *)(iVar10 + 0x94) * 6.6e-06),0x3f800000,iVar10 + 0x26f0,
                        *_s_RaceUiSpriteCursor + -0x13,0,2,0);
    }
    RaceUi_DrawSprite(0x43988000,0x42000000,*(undefined4 *)(iVar10 + 0x3b70),
                      -((float)*(int *)(iVar10 + 0x90) * 6.6e-06),0x3f800000,iVar10 + 0x26f0,
                      *_s_RaceUiSpriteCursor + -0x13,0,0,0);
  }
  cVar3 = RaceCtx_Get_8();
  if (cVar3 == '\x10') {
    uVar9 = *(uint *)(iVar10 + 0x164);
  }
  else {
    UiElem_SetPropFloat(*(undefined4 *)(iVar10 + 0x3b70),*(undefined4 *)(iVar10 + 0x10f8),0xb,8);
    cVar3 = Profile_GetFlag273d(uVar7);
    cVar4 = Profile_GetFlag273f(uVar7);
    MenuWnd_DrawRivalLabel(0x10,0xb,1,0x68,cVar3 + 0x2ab,cVar4 + 0x2c5);
    uVar9 = *(uint *)(iVar10 + 0x164);
  }
  bVar1 = false;
  if (0 < (int)uVar9) {
    uVar5 = uVar9 & 7;
    if (((int)uVar9 < 0) && (uVar5 != 0)) {
      uVar5 = uVar5 - 8;
    }
    bVar1 = (int)uVar5 < 4;
  }
  if (!bVar1) {
    if (*(int *)(iVar10 + 0x15c) < *(int *)(iVar10 + 0x160)) {
      RaceUi_DrawSprite(0x43a78000,0x42000000,*(undefined4 *)(iVar10 + 0x3b70),
                        (float)*(int *)(iVar10 + 0x160) * 6.6e-06,0x3f800000,iVar10 + 0x26f0,
                        *_s_RaceUiSpriteCursor + -0x13,0,3,0);
    }
    RaceUi_DrawSprite(0x43a78000,0x42000000,*(undefined4 *)(iVar10 + 0x3b70),
                      (float)*(int *)(iVar10 + 0x15c) * 6.6e-06,0x3f800000,iVar10 + 0x26f0,
                      *_s_RaceUiSpriteCursor + -0x13,0,1,0);
  }
  UiElem_GetRect(*(undefined4 *)(iVar10 + 0x10f8),auStack_90,10);
  uStack_7c = 1;
  iStack_78 = (int)((float)iStack_78 * *(float *)(iVar10 + 0x3b70));
  UiText_DrawById(auStack_90,iStack_30 + 0x2df);
  if (!bVar2) {
    uVar9 = *(uint *)(iVar10 + 0x230);
    bVar1 = false;
    if (0 < (int)uVar9) {
      uVar5 = uVar9 & 7;
      if (((int)uVar9 < 0) && (uVar5 != 0)) {
        uVar5 = uVar5 - 8;
      }
      bVar1 = (int)uVar5 < 4;
    }
    if (!bVar1) {
      if (*(int *)(iVar10 + 0x228) < *(int *)(iVar10 + 0x22c)) {
        RaceUi_DrawSprite(0x43a78000,0x423c0000,*(undefined4 *)(iVar10 + 0x3b70),
                          (float)*(int *)(iVar10 + 0x22c) * 6.6e-06,0x3f800000,iVar10 + 0x26f0,
                          *_s_RaceUiSpriteCursor + -0x13,0,3,0);
      }
      RaceUi_DrawSprite(0x43a78000,0x423c0000,*(undefined4 *)(iVar10 + 0x3b70),
                        (float)*(int *)(iVar10 + 0x228) * 6.6e-06,0x3f800000,iVar10 + 0x26f0,
                        *_s_RaceUiSpriteCursor + -0x13,0,1,0);
    }
    UiElem_GetRect(*(undefined4 *)(iVar10 + 0x10f8),auStack_d0,0xc);
    uStack_bc = 1;
    iStack_b8 = (int)((float)iStack_b8 * *(float *)(iVar10 + 0x3b70));
    UiText_DrawById(auStack_d0,iStack_2c + 0x2df);
  }
  RaceUi_DrawGauge(*(undefined4 *)(iVar10 + 100),*(undefined4 *)(iVar10 + 0x130),param_1,0x112,0xf);
  if (bVar2) {
    iStack_10 = *(int *)(iVar10 + 0xc0);
  }
  else {
    RaceUi_DrawGauge(*(undefined4 *)(iVar10 + 100),*(undefined4 *)(iVar10 + 0x1fc),param_1,0x112,
                     0x36);
    iStack_10 = *(int *)(iVar10 + 0xc0);
  }
  iStack_c = *(int *)(iVar10 + 0xc4);
  iStack_8 = *(int *)(iVar10 + 200);
  if (((((iStack_10 != 0) || (iStack_c != 0)) || (iStack_8 != 0)) &&
      (((iStack_10 != 99 || (iStack_c != 0x3b)) || (iStack_8 != 999)))) &&
     (cVar3 = RaceProg_Get(), cVar3 == '\x03')) {
    lVar8 = RaceScene_IsPaused();
    if (lVar8 == 0) {
      iVar6 = maybe_rand();
      *(int *)(iVar10 + 0xcc) = iVar6 % 3;
    }
    iStack_8 = iStack_8 - *(int *)(iVar10 + 0xcc);
    if (iStack_8 < 0) {
      iStack_8 = -iStack_8;
    }
  }
  RaceUi_DrawNumber(param_1,0x1bd,0x5d,&iStack_10,0);
  return;
}

// 0x002c9250  size 0x424
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawTimer(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  RaceUi_DrawSprite((float)param_2,(float)param_3,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                    0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x11,param_4 + 4,1,0);
  RaceUi_DrawSprite((float)(param_2 + 0x14),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x10,0,0,0);
  RaceUi_DrawSprite((float)(param_2 + 0x20),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x11,
                    *param_5 / 10 + 3,0,0);
  RaceUi_DrawSprite((float)(param_2 + 0x30),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x11,
                    *param_5 % 10 + 3,0,0);
  RaceUi_DrawSprite((float)(param_2 + 0x3f),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x10,2,0,0);
  RaceUi_DrawSprite((float)(param_2 + 0x48),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x11,
                    param_5[1] / 10 + 3,0,0);
  RaceUi_DrawSprite((float)(param_2 + 0x58),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x11,
                    param_5[1] % 10 + 3,0,0);
  RaceUi_DrawSprite((float)(param_2 + 0x67),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x10,1,0,0);
  RaceUi_DrawSprite((float)(param_2 + 0x76),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x11,
                    param_5[2] / 100 + 3,0,0);
  RaceUi_DrawSprite((float)(param_2 + 0x86),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x11,
                    (param_5[2] / 10) % 10 + 3,0,0);
  RaceUi_DrawSprite((float)(param_2 + 0x96),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x26f0,*_s_RaceUiSpriteCursor + -0x11,
                    param_5[2] % 10 + 3,0,0);
  return;
}

// 0x002c9680  size 0x5dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 6 callers */

void RaceUi_DrawNumber(int param_1,int param_2,int param_3,int *param_4,long param_5)

{
  if (param_5 == 0) {
    RaceUi_DrawSprite((float)param_2,(float)param_3,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                      0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,
                      *param_4 / 10 + 0x20,0,0);
    RaceUi_DrawSprite((float)(param_2 + 0x14),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,
                      *param_4 % 10 + 0x20,0,0);
    RaceUi_DrawSprite((float)(param_2 + 0x32),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,
                      param_4[1] / 10 + 0x20,0,0);
    RaceUi_DrawSprite((float)(param_2 + 0x46),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,
                      param_4[1] % 10 + 0x20,0,0);
    RaceUi_DrawSprite((float)(param_2 + 0x6e),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,
                      param_4[2] / 100 + 0x20,0,0);
    RaceUi_DrawSprite((float)(param_2 + 0x82),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,
                      (param_4[2] / 10) % 10 + 0x20,0,0);
    RaceUi_DrawSprite((float)(param_2 + 0x96),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,
                      param_4[2] % 10 + 0x20,0,0);
  }
  else {
    RaceUi_DrawSprite((float)param_2,(float)param_3,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                      0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,0x2d,0,0);
    RaceUi_DrawSprite((float)(param_2 + 0x14),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,0x2d,0,0
                     );
    RaceUi_DrawSprite((float)(param_2 + 0x32),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,0x2d,0,0
                     );
    RaceUi_DrawSprite((float)(param_2 + 0x46),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,0x2d,0,0
                     );
    RaceUi_DrawSprite((float)(param_2 + 0x6e),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,0x2d,0,0
                     );
    RaceUi_DrawSprite((float)(param_2 + 0x82),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,0x2d,0,0
                     );
    RaceUi_DrawSprite((float)(param_2 + 0x96),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                      0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,0x2d,0,0
                     );
  }
  RaceUi_DrawSprite((float)(param_2 + 0x28),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,0x2a,0,0);
  RaceUi_DrawSprite((float)(param_2 + 0x5a),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,0x2a,0,0);
  RaceUi_DrawSprite((float)(param_2 + 100),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                    0x3f800000,0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,0x2a,0,0);
  return;
}

// 0x002c9c60  size 0x420
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawArrow3d(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_6e0 [48];
  float fStack_6b0;
  float fStack_6ac;
  float fStack_6a0;
  float fStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  float fStack_690;
  float fStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  float fStack_680;
  float fStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  float fStack_670;
  float fStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  uint auStack_660 [392];
  undefined1 auStack_40 [64];
  
  iVar5 = 0;
  puVar4 = auStack_660;
  iVar2 = 0x32f6f0;
  iVar6 = param_1;
  do {
    Pkt_Init(auStack_40,2,2,0);
    Pkt_SubmitToChain(auStack_40,*_s_RaceUiSpriteCursor + -10);
    fVar9 = DAT_0032f7d4 + *(float *)(iVar2 + 8);
    fVar8 = DAT_0032f7d4 + *(float *)(iVar2 + 0xc);
    maybe_Vu0_UnitMatrix(auStack_6e0);
    fStack_6b0 = fStack_6b0 - fVar9;
    fStack_6ac = fStack_6ac - fVar8;
    if (*(float *)(iVar6 + 0x34) != 0.0) {
      for (fVar7 = *(float *)(iVar6 + 0x34) * 0.017453292; 3.1415927 < fVar7;
          fVar7 = fVar7 - 6.2831855) {
      }
      for (; fVar7 < -3.1415927; fVar7 = fVar7 + 6.2831855) {
      }
      maybe_Vu0_RotMatrixX(auStack_6e0,auStack_6e0);
    }
    uStack_698 = 0;
    uVar3 = 0;
    pfVar1 = &fStack_6a0;
    uStack_688 = 0;
    fStack_6ac = fStack_6ac + fVar8;
    fStack_6b0 = fStack_6b0 + fVar9;
    uStack_678 = 0;
    fStack_69c = fVar8 - DAT_0032f7d8;
    uStack_668 = 0;
    uStack_694 = 0x3f800000;
    uStack_684 = 0x3f800000;
    uStack_674 = 0x3f800000;
    uStack_664 = 0x3f800000;
    fStack_67c = fVar8 + 12.0;
    fStack_6a0 = fVar9 - 1.0;
    fStack_690 = fVar9 + 1.0;
    fStack_680 = fVar9 - 2.0;
    fStack_670 = fVar9 + 2.0;
    fStack_68c = fStack_69c;
    fStack_66c = fStack_67c;
    do {
      sceVu0ApplyMatrix(pfVar1,auStack_6e0,pfVar1);
      uVar3 = uVar3 + 1;
      pfVar1 = pfVar1 + 4;
    } while (uVar3 < 4);
    Obj_Reset(puVar4,5,4);
    *puVar4 = *puVar4 | 2;
    Obj_CopyParams(puVar4,&fStack_6a0);
    puVar4[0xb0] = DAT_0032f7dc >> 0x10 & 0xff;
    puVar4[0xb1] = DAT_0032f7dc >> 8 & 0xff;
    puVar4[0xb2] = DAT_0032f7dc & 0xff;
    puVar4[0xb3] = DAT_0032f7dc >> 0x18;
    fVar8 = *(float *)(param_1 + 0x3b70) * 128.0;
    if (2.1474836e+09 <= fVar8) {
      fVar8 = fVar8 - 2.1474836e+09;
    }
    iVar5 = iVar5 + 1;
    puVar4[0xb3] = (int)fVar8 & 0xff;
    puVar4 = puVar4 + 0xc4;
    iVar6 = iVar6 + 0xcc;
    iVar2 = iVar2 + 0x60;
  } while (iVar5 < 2);
  Pkt_AddPrimitives(auStack_40,auStack_660,((int)puVar4 - (int)auStack_660) / 0x310);
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x002ca080  size 0x490
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawMinimap3d(int param_1)

{
  uint *puVar1;
  float *pfVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_1320 [48];
  float fStack_12f0;
  float fStack_12ec;
  float fStack_12e0;
  float fStack_12dc;
  undefined4 uStack_12d8;
  undefined4 uStack_12d4;
  float fStack_12d0;
  float fStack_12cc;
  undefined4 uStack_12c8;
  undefined4 uStack_12c4;
  float fStack_12c0;
  float fStack_12bc;
  undefined4 uStack_12b8;
  undefined4 uStack_12b4;
  float fStack_12b0;
  float fStack_12ac;
  undefined4 uStack_12a8;
  undefined4 uStack_12a4;
  uint auStack_12a0 [1176];
  undefined1 auStack_40 [64];
  
  puVar6 = auStack_12a0;
  Pkt_Init(auStack_40,2,2,0);
  Pkt_SubmitToChain(auStack_40,*_s_RaceUiSpriteCursor + -10);
  iVar5 = 0;
  puVar3 = &DAT_0032f7b0;
  iVar8 = 0;
  iVar7 = param_1;
  do {
    if (((*(int *)(param_1 + 0x68) != 0) || (iVar5 != 2)) &&
       ((*(int *)(param_1 + 0x74) != 1 || (iVar5 != 0)))) {
      fVar11 = *(float *)(puVar3 + 0xc) +
               *(float *)(&DAT_0032f5d0 + iVar8 + *(int *)(param_1 + 0x74) * 0x60);
      fVar10 = *(float *)(puVar3 + 0xc) +
               *(float *)((int)(&DAT_0032f5d0 + iVar8 + *(int *)(param_1 + 0x74) * 0x60) + 4);
      maybe_Vu0_UnitMatrix(auStack_1320);
      fStack_12f0 = fStack_12f0 - fVar11;
      fStack_12ec = fStack_12ec - fVar10;
      if (*(float *)(iVar7 + 0x1c) != 0.0) {
        for (fVar9 = *(float *)(iVar7 + 0x1c) * 0.017453292; 3.1415927 < fVar9;
            fVar9 = fVar9 - 6.2831855) {
        }
        for (; fVar9 < -3.1415927; fVar9 = fVar9 + 6.2831855) {
        }
        maybe_Vu0_RotMatrixX(auStack_1320,auStack_1320);
      }
      uStack_12d8 = 0;
      uVar4 = 0;
      pfVar2 = &fStack_12e0;
      uStack_12c8 = 0;
      fStack_12ec = fStack_12ec + fVar10;
      fStack_12dc = fVar10 - *(float *)(puVar3 + 0x10);
      fStack_12f0 = fStack_12f0 + fVar11;
      uStack_12b8 = 0;
      uStack_12a8 = 0;
      uStack_12d4 = 0x3f800000;
      uStack_12c4 = 0x3f800000;
      uStack_12b4 = 0x3f800000;
      uStack_12a4 = 0x3f800000;
      fStack_12bc = fVar10 + 12.0;
      fStack_12e0 = fVar11 - 1.0;
      fStack_12d0 = fVar11 + 1.0;
      fStack_12c0 = fVar11 - 2.0;
      fStack_12b0 = fVar11 + 2.0;
      fStack_12cc = fStack_12dc;
      fStack_12ac = fStack_12bc;
      do {
        sceVu0ApplyMatrix(pfVar2,auStack_1320,pfVar2);
        uVar4 = uVar4 + 1;
        pfVar2 = pfVar2 + 4;
      } while (uVar4 < 4);
      Obj_Reset(puVar6,5,4);
      *puVar6 = *puVar6 | 2;
      Obj_CopyParams(puVar6,&fStack_12e0);
      uVar4 = *(uint *)(puVar3 + 0x14);
      puVar6[0xb0] = uVar4 >> 0x10 & 0xff;
      puVar6[0xb1] = uVar4 >> 8 & 0xff;
      puVar6[0xb2] = uVar4 & 0xff;
      puVar6[0xb3] = uVar4 >> 0x18;
      fVar10 = *(float *)(param_1 + 0x3b70) * 128.0;
      puVar1 = puVar6 + 0xb3;
      if (2.1474836e+09 <= fVar10) {
        fVar10 = fVar10 - 2.1474836e+09;
      }
      puVar6 = puVar6 + 0xc4;
      *puVar1 = (int)fVar10 & 0xff;
    }
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x18;
    puVar3 = puVar3 + 0x18;
    iVar8 = iVar8 + 8;
  } while (iVar5 < 3);
  Pkt_AddPrimitives(auStack_40,auStack_12a0,((int)puVar6 - (int)auStack_12a0) / 0x310);
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x002ca520  size 0x424
/* WARNING: Removing unreachable block (ram,0x002ca710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawTachometer(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  
  iVar12 = 0;
  iVar10 = 0x32f6f0;
  iVar13 = param_1;
  iVar9 = param_1;
  do {
    RaceUi_DrawSpriteRotated
              (*(undefined4 *)(iVar10 + 8),*(undefined4 *)(iVar10 + 0xc),
               *(undefined4 *)(param_1 + 0x3b70),0x3f800000,0x3f800000,iVar13 + 0x1144,
               *_s_RaceUiSpriteCursor + -0x11,0);
    RaceUi_DrawSprite(*(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24),
                      *(undefined4 *)(param_1 + 0x3b70),0x3f800000,0x3f800000,param_1 + 0x1270,
                      *_s_RaceUiSpriteCursor + -0x11,2,0,0);
    if (*(int *)(iVar9 + 0x6c) == 0) {
      RaceUi_DrawSprite(*(undefined4 *)(iVar10 + 0x48),*(undefined4 *)(iVar10 + 0x4c),
                        *(undefined4 *)(param_1 + 0x3b70),0x3f800000,0x3f800000,param_1 + 0x1270,
                        *_s_RaceUiSpriteCursor + -10,*(int *)(iVar9 + 0x54) + 0xe,0,0);
    }
    else if (*(int *)(iVar9 + 0x54) == -1) {
      RaceUi_DrawSprite(*(undefined4 *)(iVar10 + 0x48),*(undefined4 *)(iVar10 + 0x4c),
                        *(undefined4 *)(param_1 + 0x3b70),0x3f800000,0x3f800000,param_1 + 0x1270,
                        *_s_RaceUiSpriteCursor + -10,0xd,0,0);
    }
    else if (*(int *)(iVar9 + 0x54) == 0) {
      RaceUi_DrawSprite(*(undefined4 *)(iVar10 + 0x48),*(undefined4 *)(iVar10 + 0x4c),
                        *(undefined4 *)(param_1 + 0x3b70),0x3f800000,0x3f800000,param_1 + 0x1270,
                        *_s_RaceUiSpriteCursor + -10,0xe,0,0);
    }
    else {
      RaceUi_DrawSprite(*(undefined4 *)(iVar10 + 0x48),*(undefined4 *)(iVar10 + 0x4c),
                        *(undefined4 *)(param_1 + 0x3b70),0x3f800000,0x3f800000,param_1 + 0x1270,
                        *_s_RaceUiSpriteCursor + -10,0xc,0,0);
    }
    iVar11 = 0;
    iVar8 = 0;
    do {
      iVar2 = -iVar11;
      iVar5 = 1;
      iVar7 = iVar2 + 2;
      iVar4 = 0;
      if (0 < iVar7) {
        if (8 < iVar7) {
          bVar3 = false;
          if ((-1 < iVar7) && (iVar7 < 0x7fffffff)) {
            bVar3 = true;
          }
          if (bVar3) {
            do {
              iVar4 = iVar4 + 8;
              iVar5 = iVar5 * 100000000;
            } while (iVar4 < iVar2 + -6);
          }
        }
        if (iVar4 < iVar7) {
          do {
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 * 10;
          } while (iVar4 < iVar2 + 2);
        }
      }
      RaceUi_DrawSprite(*(float *)(iVar10 + 0x38) + (float)iVar8,*(undefined4 *)(iVar10 + 0x3c),
                        *(undefined4 *)(param_1 + 0x3b70),0x3f800000,0x3f800000,param_1 + 0x1270,
                        *_s_RaceUiSpriteCursor + -10,
                        ((int)*(float *)(iVar9 + 0x18) / iVar5) % 10 + 0x16,0,0);
      iVar11 = iVar11 + 1;
      iVar8 = iVar8 + 0x18;
    } while (iVar11 < 3);
    uVar6 = 0xb;
    if (iVar12 != 0) {
      uVar6 = 3;
    }
    if (*(int *)(iVar9 + 0x60) == 0) {
      uVar14 = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x10fc);
    }
    else {
      uVar14 = 0x3f800000;
      uVar1 = *(undefined4 *)(param_1 + 0x10fc);
    }
    UiElem_SetPropFloat(uVar14,uVar1,uVar6,8);
    iVar12 = iVar12 + 1;
    iVar10 = iVar10 + 0x60;
    iVar13 = iVar13 + 0xb4;
    iVar9 = iVar9 + 0xcc;
  } while (iVar12 < 2);
  RaceUi_DrawArrow3d(param_1);
  UiLayout_Draw(*(undefined4 *)(param_1 + 0x3b70),*(undefined4 *)(param_1 + 0x10fc));
  return;
}

// 0x002ca950  size 0x4a8
/* WARNING: Removing unreachable block (ram,0x002cabf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawSpeedometer(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar5 = (int)param_1;
  iVar4 = *(int *)(iVar5 + 0x74) * 0x60;
  if (*(int *)(iVar5 + 0x74) == 0) {
    RaceUi_DrawSpriteRotated
              (_DAT_0032f5d0,_DAT_0032f5d4,*(undefined4 *)(iVar5 + 0x3b70),0x3f800000,0x3f800000,
               iVar5 + 0x1108,*_s_RaceUiSpriteCursor + -0x11,0);
    RaceUi_DrawSprite(_DAT_0032f5e8,_DAT_0032f5ec,*(undefined4 *)(iVar5 + 0x3b70),0x3f800000,
                      0x3f800000,iVar5 + 0x1270,*_s_RaceUiSpriteCursor + -0x11,2,0,0);
  }
  RaceUi_DrawSpriteRotated
            (*(undefined4 *)(&DAT_0032f5d8 + iVar4),*(undefined4 *)(&DAT_0032f5dc + iVar4),
             *(undefined4 *)(iVar5 + 0x3b70),0x3f800000,0x3f800000,iVar5 + 0x1144,
             *_s_RaceUiSpriteCursor + -0x11,0);
  RaceUi_DrawSprite(*(undefined4 *)(&DAT_0032f5f0 + iVar4),*(undefined4 *)(&DAT_0032f5f4 + iVar4),
                    *(undefined4 *)(iVar5 + 0x3b70),0x3f800000,0x3f800000,iVar5 + 0x1270,
                    *_s_RaceUiSpriteCursor + -0x11,2,0,0);
  if (*(int *)(iVar5 + 0x68) != 0) {
    RaceUi_DrawSpriteRotated
              (*(undefined4 *)(&DAT_0032f5e0 + iVar4),*(undefined4 *)(&DAT_0032f5e4 + iVar4),
               *(undefined4 *)(iVar5 + 0x3b70),0x3f800000,0x3f800000,iVar5 + 0x1180,
               *_s_RaceUiSpriteCursor + -0x11,0);
  }
  RaceUi_DrawMinimap3d(param_1);
  if (*(int *)(iVar5 + 0x6c) == 0) {
    RaceUi_DrawSprite(*(undefined4 *)(&DAT_0032f618 + iVar4),*(undefined4 *)(&DAT_0032f61c + iVar4),
                      *(undefined4 *)(iVar5 + 0x3b70),0x3f800000,0x3f800000,iVar5 + 0x1270,
                      *_s_RaceUiSpriteCursor + -10,*(int *)(iVar5 + 0x54) + 0xe,0,0);
  }
  else if (*(int *)(iVar5 + 0x54) == -1) {
    RaceUi_DrawSprite(*(undefined4 *)(&DAT_0032f618 + iVar4),*(undefined4 *)(&DAT_0032f61c + iVar4),
                      *(undefined4 *)(iVar5 + 0x3b70),0x3f800000,0x3f800000,iVar5 + 0x1270,
                      *_s_RaceUiSpriteCursor + -10,0xd,0,0);
  }
  else if (*(int *)(iVar5 + 0x54) == 0) {
    RaceUi_DrawSprite(*(undefined4 *)(&DAT_0032f618 + iVar4),*(undefined4 *)(&DAT_0032f61c + iVar4),
                      *(undefined4 *)(iVar5 + 0x3b70),0x3f800000,0x3f800000,iVar5 + 0x1270,
                      *_s_RaceUiSpriteCursor + -10,0xe,0,0);
  }
  else {
    RaceUi_DrawSprite(*(undefined4 *)(&DAT_0032f618 + iVar4),*(undefined4 *)(&DAT_0032f61c + iVar4),
                      *(undefined4 *)(iVar5 + 0x3b70),0x3f800000,0x3f800000,iVar5 + 0x1270,
                      *_s_RaceUiSpriteCursor + -10,0xc,0,0);
  }
  iVar10 = 0;
  iVar9 = 0;
  do {
    iVar2 = -iVar10;
    iVar8 = 1;
    iVar6 = iVar2 + 2;
    iVar7 = 0;
    if (0 < iVar6) {
      if (8 < iVar6) {
        iVar3 = 0;
        if ((-1 < iVar6) && (iVar6 < 0x7fffffff)) {
          iVar3 = iVar8;
        }
        if (iVar3 != 0) {
          do {
            iVar7 = iVar7 + 8;
            iVar8 = iVar8 * 100000000;
          } while (iVar7 < iVar2 + -6);
        }
      }
      if (iVar7 < iVar6) {
        do {
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 * 10;
        } while (iVar7 < iVar2 + 2);
      }
    }
    RaceUi_DrawSprite(*(float *)(&DAT_0032f608 + iVar4) + (float)iVar9,
                      *(undefined4 *)(&DAT_0032f60c + iVar4),*(undefined4 *)(iVar5 + 0x3b70),
                      0x3f800000,0x3f800000,iVar5 + 0x1270,*_s_RaceUiSpriteCursor + -10,
                      ((int)*(float *)(iVar5 + 0x18) / iVar8) % 10 + 0x16,0,0);
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 0x18;
  } while (iVar10 < 3);
  if (*(int *)(iVar5 + 0x60) == 0) {
    uVar11 = 0;
    uVar1 = *(undefined4 *)(iVar5 + 0x10fc);
  }
  else {
    uVar11 = 0x3f800000;
    uVar1 = *(undefined4 *)(iVar5 + 0x10fc);
  }
  UiElem_SetPropFloat(uVar11,uVar1,3,8);
  UiLayout_Draw(*(undefined4 *)(iVar5 + 0x3b70),*(undefined4 *)(iVar5 + 0x10fc));
  return;
}

// 0x002cae00  size 0x3c4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawRivalMarkers(int param_1)

{
  float fVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  float fStack_8;
  float fStack_4;
  
  iVar9 = 0;
  pfVar7 = (float *)&uStack_20;
  uStack_20 = DAT_0032fc70;
  uStack_18 = DAT_0032fc78;
  iVar6 = param_1;
  do {
    fVar1 = fRam0036ee78;
    fVar11 = *pfVar7 - fRam0036ee78;
    fVar13 = pfVar7[1] - fRam0036ee7c;
    fVar12 = fRam0036ee78 + *pfVar7;
    fVar15 = fRam0036ee7c;
    uVar2 = RaceCar_Get(iVar9);
    uVar3 = RaceCar_GetFlags(uVar2);
    if ((uVar3 & 0x100) == 0) {
      pbVar5 = (byte *)(iVar6 + 0x80);
      iVar8 = 0;
      iVar10 = 8;
      uStack_10 = CONCAT44(uRam0036ee84,uRam0036ee80);
      do {
        fVar14 = *(float *)(pbVar5 + 4);
        if (fVar14 != 0.0) {
          if (fVar14 < 0.05) {
            fVar14 = fVar15 * (fVar14 / 0.05) + (float)(int)fVar13 + 0.0;
          }
          else if (0.95 < fVar14) {
            fVar14 = fVar15 * ((fVar14 - 0.95) / 0.05) + pfVar7[1] + 0.0;
          }
          else {
            fVar14 = pfVar7[1];
          }
          fStack_4 = uStack_10._4_4_ - 39.0;
          if (fVar14 <= uStack_10._4_4_ - 39.0) {
            fStack_4 = fVar14;
          }
          uVar2 = maybe___sf_to_df(pfVar7[1] - fStack_4);
          uVar2 = fabs(uVar2);
          fVar14 = (float)maybe___extendsfdf2(uVar2);
          fVar14 = 1.0 - fVar14 / fVar15;
          if (iVar8 < 1) {
            fStack_8 = *pfVar7;
          }
          else if (*pbVar5 < 4) {
            fStack_8 = ((float)(int)fVar12 + 0.0) - fVar14 * fVar1;
          }
          else {
            fStack_8 = fVar14 * fVar1 + (float)(int)fVar11 + 0.0;
          }
          if (pfVar7[1] < fStack_4) {
            fVar14 = fVar14 / 3.0;
          }
          else if (0 < iVar8) {
            fVar14 = fVar14 + 1.0 / (float)(iVar8 + 2);
          }
          if (0.0 <= fVar14) {
            if (1.0 < fVar14) {
              fVar14 = 1.0;
            }
          }
          else {
            fVar14 = 0.0;
          }
          uVar2 = 7;
          uStack_10 = CONCAT44(fStack_4,fStack_8);
          uVar4 = 0;
          if (*pbVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
            switch(*pbVar5) {
            case 0:
              uVar4 = 1;
              break;
            case 1:
              uVar2 = 8;
              uVar4 = 1;
              break;
            case 2:
              uVar2 = 9;
              uVar4 = 1;
              break;
            case 3:
              uVar2 = 10;
              uVar4 = 1;
              break;
            case 4:
              break;
            case 5:
              uVar2 = 8;
              break;
            case 6:
              uVar2 = 9;
              break;
            case 7:
              uVar2 = 10;
            }
          }
          RaceUi_DrawSprite(fStack_8,fStack_4,fVar14,0x3f800000,0x3f800000,param_1 + 0x1270,
                            (*_s_RaceUiSpriteCursor + -2) - iVar10,uVar2,0,uVar4);
        }
        iVar8 = iVar8 + 1;
        pbVar5 = pbVar5 + 8;
        iVar10 = iVar10 + 2;
      } while (iVar8 < 2);
    }
    iVar9 = iVar9 + 1;
    pfVar7 = pfVar7 + 2;
    iVar6 = iVar6 + 0xcc;
  } while (iVar9 < 2);
  return;
}

// 0x002cb1d0  size 0x3b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawRivalMarkersAlt(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_c;
  float fStack_8;
  
  fVar3 = fRam0036ee68;
  fVar2 = fRam0036ee60;
  fVar10 = fRam0036ee60 - fRam0036ee68;
  fVar11 = fRam0036ee60 + fRam0036ee68;
  fVar12 = fRam0036ee64 - fRam0036ee6c;
  fVar14 = fRam0036ee6c;
  fVar15 = fRam0036ee64;
  uVar4 = RaceCar_Get(0);
  uVar5 = RaceCar_GetFlags(uVar4);
  if ((uVar5 & 0x100) == 0) {
    pbVar8 = (byte *)(param_1 + 0x80);
    iVar9 = 0;
    iVar7 = 8;
    fStack_c = fRam0036ee74;
    do {
      fVar13 = *(float *)(pbVar8 + 4);
      if (fVar13 != 0.0) {
        if (fVar13 < 0.05) {
          fVar13 = fVar14 * (fVar13 / 0.05) + (float)(int)fVar12 + 0.0;
        }
        else if (0.95 < fVar13) {
          fVar13 = fVar14 * ((fVar13 - 0.95) / 0.05) + fVar15 + 0.0;
        }
        else {
          fVar13 = fVar15;
        }
        fStack_c = fStack_c - 55.0;
        if (fVar13 <= fStack_c) {
          fStack_c = fVar13;
        }
        uVar4 = maybe___sf_to_df(fVar15 - fStack_c);
        uVar4 = fabs(uVar4);
        fVar13 = (float)maybe___extendsfdf2(uVar4);
        fVar13 = 1.0 - fVar13 / fVar14;
        if (iVar9 < 1) {
          fStack_8 = fVar2;
        }
        else if (*pbVar8 < 4) {
          fStack_8 = ((float)(int)fVar11 + 0.0) - fVar13 * fVar3;
        }
        else {
          fStack_8 = fVar13 * fVar3 + (float)(int)fVar10 + 0.0;
        }
        if (fVar15 < fStack_c) {
          fVar13 = fVar13 / 3.0;
        }
        else if (0 < iVar9) {
          fVar13 = fVar13 + 1.0 / (float)(iVar9 + 2);
        }
        if (0.0 <= fVar13) {
          if (1.0 < fVar13) {
            fVar13 = 1.0;
          }
          bVar1 = *pbVar8;
        }
        else {
          fVar13 = 0.0;
          bVar1 = *pbVar8;
        }
        uVar4 = 3;
        uVar6 = 0;
        if (bVar1 < 8) {
                    /* WARNING: Switch is manually overridden */
          switch(bVar1) {
          case 0:
            uVar6 = 1;
            break;
          case 1:
            uVar4 = 4;
            uVar6 = 1;
            break;
          case 2:
            uVar4 = 5;
            uVar6 = 1;
            break;
          case 3:
            uVar4 = 6;
            uVar6 = 1;
            break;
          case 4:
            break;
          case 5:
            uVar4 = 4;
            break;
          case 6:
            uVar4 = 5;
            break;
          case 7:
            uVar4 = 6;
          }
        }
        RaceUi_DrawSprite(fStack_8,fStack_c,fVar13,0x3f800000,0x3f800000,param_1 + 0x1270,
                          (*_s_RaceUiSpriteCursor + -2) - iVar7,uVar4,0,uVar6);
      }
      iVar9 = iVar9 + 1;
      pbVar8 = pbVar8 + 8;
      iVar7 = iVar7 + 2;
    } while (iVar9 < 2);
  }
  return;
}

// 0x002cb580  size 0x138
void RaceUi_AnimateWarning(int param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = param_1;
  do {
    uVar3 = 0xc;
    if (iVar4 != 0) {
      uVar3 = 0xd;
    }
    if (*(int *)(iVar2 + 0x78) < 1) {
      UiElem_SetPropFloat(0,*(undefined4 *)(param_1 + 0x10fc),uVar3,8);
    }
    else {
      lVar1 = RaceScene_IsFlag10();
      if ((lVar1 == 0) && (*(int *)(iVar2 + 0x78) == 1)) {
        Se_PlayMenuVol(3,0x60);
      }
      *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) % 0x1e;
      UiElem_SetPropFloat((float)((*(int *)(iVar2 + 0x78) / 5) % 6) / 5.0,
                          *(undefined4 *)(param_1 + 0x10fc),uVar3,8);
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0xcc;
  } while (iVar4 < 2);
  return;
}

// 0x002cb6c0  size 0x2a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_AnimateSpGauge(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  iVar7 = 0xb2;
  iVar6 = 0x9b;
  iVar5 = 0;
  iVar4 = param_1;
  do {
    fVar8 = *(float *)(iVar4 + 0x5c);
    if (iVar5 == 1) {
      unaff_s3 = 6;
      unaff_s2 = 5;
    }
    else if (iVar5 == 0) {
      unaff_s3 = 9;
      unaff_s2 = 8;
    }
    iVar3 = *(int *)(iVar4 + 0x7c) % 0x28;
    RaceUi_DrawSprite(0x43fb8000,(float)iVar6,*(undefined4 *)(param_1 + 0x3b70),
                      (*(float *)(iVar4 + 0x58) * 104.0) / 16.0,0x3f800000,param_1 + 0x1270,
                      *_s_RaceUiSpriteCursor + -0x12,0xb,0,0);
    iVar2 = iVar3 >> 2;
    if ((*(uint *)(iVar4 + 8) & 2) == 0) {
      UiElem_SetPropFloat(0,*(undefined4 *)(param_1 + 0x10fc),unaff_s2,8);
    }
    else {
      iVar1 = iVar2;
      if (iVar3 < 0) {
        iVar1 = iVar3 + 3 >> 2;
      }
      iVar1 = iVar1 % 10 + -5;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      UiElem_SetPropFloat(0x3f800000,*(undefined4 *)(param_1 + 0x10fc),unaff_s2,8);
      UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10fc),unaff_s2,9,iVar1);
    }
    RaceUi_DrawSprite(0x43fb8000,(float)iVar7,*(undefined4 *)(param_1 + 0x3b70),
                      (fVar8 * 104.0) / 16.0,0x3f800000,param_1 + 0x1270,
                      *_s_RaceUiSpriteCursor + -0x12,0xb,0,0);
    if ((*(uint *)(iVar4 + 8) & 1) == 0) {
      UiElem_SetPropFloat(0,*(undefined4 *)(param_1 + 0x10fc),unaff_s3,8);
    }
    else {
      if (iVar3 < 0) {
        iVar2 = iVar3 + 3 >> 2;
      }
      iVar3 = iVar2 % 10 + -5;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      UiElem_SetPropFloat(0x3f800000,*(undefined4 *)(param_1 + 0x10fc),unaff_s3,8);
      UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10fc),unaff_s3,9,iVar3);
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xcc;
    iVar6 = iVar6 + 0xe9;
    iVar7 = iVar7 + 0xe9;
  } while (iVar5 < 2);
  return;
}

// 0x002cb970  size 0x27c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawSpGauge(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = (int)((364.0 - (*(float *)(param_1 + 100) * 276.0) / *(float *)(param_1 + 0x268)) - 9.0);
  if (iVar3 < 0x4f) {
    iVar3 = 0x4f;
    fVar5 = *(float *)(param_1 + 0x130);
  }
  else {
    if (0x163 < iVar3) {
      iVar3 = 0x163;
    }
    fVar5 = *(float *)(param_1 + 0x130);
  }
  iVar4 = (int)((364.0 - (fVar5 * 276.0) / *(float *)(param_1 + 0x268)) - 9.0);
  if (iVar4 < 0x4f) {
    iVar4 = 0x4f;
  }
  else if (0x163 < iVar4) {
    iVar4 = 0x163;
  }
  if (iVar3 < iVar4) {
    iVar2 = iVar3;
  }
  else {
    iVar2 = iVar4;
  }
  iVar2 = iVar2 + 9;
  RaceUi_DrawSprite(0x41e80000,(float)iVar2,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                    (float)(0x16c - iVar2) / 16.0,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0xf,1,0
                    ,0);
  RaceUi_DrawSprite(0x41d00000,(float)iVar3,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,0x3f800000,
                    param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0xc,0,0,0);
  RaceUi_DrawSprite(0x42000000,(float)iVar4,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,0x3f800000,
                    param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0xd,0,1,0);
  cVar1 = GameState_Get_354_7050();
  if (cVar1 == '\0') {
    fVar5 = (float)(iVar4 - iVar3) / 16.0;
    if (fVar5 < 0.0) {
      fVar5 = fVar5 * -1.0;
    }
    RaceUi_DrawSprite(0x41e80000,(float)iVar2,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,fVar5,
                      param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0xe,1,1,0);
  }
  return;
}

// 0x002cbbf0  size 0x250
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_AnimateBoost(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar5 = 6;
    uVar4 = 5;
  }
  else {
    uVar5 = 5;
    uVar4 = 4;
  }
  iVar3 = *(int *)(param_1 + 0x7c) % 0x28;
  RaceUi_DrawSprite(0x43fb8000,0x43bf8000,*(undefined4 *)(param_1 + 0x3b70),
                    (*(float *)(param_1 + 0x58) * 112.0) / 16.0,0x3f800000,param_1 + 0x1270,
                    *_s_RaceUiSpriteCursor + -0x12,0xb,0,0);
  iVar2 = iVar3 >> 2;
  if ((*(uint *)(param_1 + 8) & 2) == 0) {
    UiElem_SetPropFloat(0,*(undefined4 *)(param_1 + 0x10fc),uVar4,8);
  }
  else {
    iVar1 = iVar2;
    if (iVar3 < 0) {
      iVar1 = iVar3 + 3 >> 2;
    }
    iVar1 = iVar1 % 10 + -5;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    UiElem_SetPropFloat(0x3f800000,*(undefined4 *)(param_1 + 0x10fc),uVar4,8);
    UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10fc),uVar4,9,iVar1);
  }
  RaceUi_DrawSprite(0x43fb8000,0x43cb0000,*(undefined4 *)(param_1 + 0x3b70),(fVar6 * 112.0) / 16.0,
                    0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x12,0xb,0,0);
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    UiElem_SetPropFloat(0,*(undefined4 *)(param_1 + 0x10fc),uVar5,8);
  }
  else {
    if (iVar3 < 0) {
      iVar2 = iVar3 + 3 >> 2;
    }
    iVar3 = iVar2 % 10 + -5;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    UiElem_SetPropFloat(0x3f800000,*(undefined4 *)(param_1 + 0x10fc),uVar5,8);
    UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10fc),uVar5,9,iVar3);
  }
  return;
}

// 0x002cbe40  size 0x390
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawPositionList(int param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x288) == 0) {
    lVar1 = GameState_GetRivalCount();
    iVar3 = (int)((398.0 - (*(float *)(param_1 + 100) * 276.0) / *(float *)(param_1 + 0x268)) - 9.0)
    ;
    if (iVar3 < 0x71) {
      iVar3 = 0x71;
    }
    else if (0x185 < iVar3) {
      iVar3 = 0x185;
    }
    RaceUi_DrawSprite(0x41e80000,(float)(iVar3 + 9),*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                      (float)(0x18e - (iVar3 + 9)) / 16.0,param_1 + 0x1270,
                      *_s_RaceUiSpriteCursor + -0x11,1,0,0);
    lVar2 = GameState_GetTotalCarCount();
    if (lVar2 == 1) {
      RaceUi_DrawSprite(0x41e80000,(float)iVar3,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                        0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -10,0,0,0);
    }
    else {
      iVar4 = (int)((398.0 - (*(float *)(param_1 + 0x130) * 276.0) / *(float *)(param_1 + 0x268)) -
                   9.0);
      if (iVar4 < 0x71) {
        iVar4 = 0x71;
      }
      else if (0x185 < iVar4) {
        iVar4 = 0x185;
      }
      if (lVar1 == 2) {
        iVar5 = (int)((398.0 - (*(float *)(param_1 + 0x1fc) * 276.0) / *(float *)(param_1 + 0x268))
                     - 9.0);
        if (iVar5 < 0x71) {
          iVar5 = 0x71;
        }
        else if (0x185 < iVar5) {
          iVar5 = 0x185;
        }
        RaceUi_DrawSprite(0x41c80000,(float)iVar3,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                          0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0xe,0,0,0);
        RaceUi_DrawSprite(0x41e80000,(float)iVar4,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                          0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0xf,0,1,0);
        RaceUi_DrawSprite(0x42040000,(float)iVar5,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                          0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x10,0,1,0);
      }
      else {
        RaceUi_DrawSprite(0x41c80000,(float)iVar3,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                          0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0xe,0,0,0);
        RaceUi_DrawSprite(0x42040000,(float)iVar4,*(undefined4 *)(param_1 + 0x3b70),0x3f800000,
                          0x3f800000,param_1 + 0x1270,*_s_RaceUiSpriteCursor + -0x10,0,1,0);
      }
    }
  }
  return;
}

