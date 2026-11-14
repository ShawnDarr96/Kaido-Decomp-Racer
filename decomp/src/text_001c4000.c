// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001c4000 - 0x001c8000
#include "ghidra_types.h"

// 0x001c4130  size 0x170
void Prop_DrawLeaves(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_160 [352];
  
  iVar1 = iRam0036f328;
  if (iRam0036f1f8 == 0) {
    Cam_SetupViewport(0x431100,0,0);
    maybe_Pkt_InitLayers(auStack_160,0x431100,0x436180,0,1);
    Prop_DrawModel(0x431100,auStack_160,iRam0036f328,800,4,0x10);
    if (iRam00433904 != 0) {
      maybe_Pkt_InitLayers(auStack_160,0x433380,0x436180,0,0);
      Prop_DrawModel(0x431100,auStack_160,iRam0036f328,800,4,0x10);
    }
  }
  else {
    iVar2 = iRam0036f328 + 0x4b00;
    maybe_Pkt_InitLayers(auStack_160,0x4316c0,0x436180,0,0);
    Prop_DrawModel(0x4316c0,auStack_160,iVar1,400,4,0x10);
    maybe_Pkt_InitLayers(auStack_160,0x431c80,0x436180,0,0);
    Prop_DrawModel(0x431c80,auStack_160,iVar2,400,4,0x10);
  }
  return;
}

// 0x001c42a0  size 0x140
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Prop_UpdatePaper(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  iVar2 = iRam0036f328;
  if (iRam0036f1f8 == 0) {
    sceVu0CopyVector(auStack_10,*(int *)(_g_Loading + 0x14) + 0x70);
    if (*param_1 == 0) {
      *param_1 = 1;
      Prop_MovePaper(iRam0036f328,auStack_10,800,param_2);
    }
    else {
      Prop_SpawnPaper(iRam0036f328,auStack_10,800,param_2);
    }
  }
  else {
    iVar1 = *(int *)(_g_Loading + 0x18);
    iVar3 = iRam0036f328 + 0x4b00;
    sceVu0CopyVector(auStack_20,*(int *)(_g_Loading + 0x14) + 0x70);
    sceVu0CopyVector(auStack_30,iVar1 + 0x70);
    if (*param_1 == 0) {
      *param_1 = 1;
      Prop_MovePaper(iVar2,auStack_20,400,param_2);
      Prop_MovePaper(iVar3,auStack_30,400,param_2);
    }
    else {
      Prop_SpawnPaper(iVar2,auStack_20,400,param_2);
      Prop_SpawnPaper(iVar3,auStack_30,400,param_2);
    }
  }
  return;
}

// 0x001c43e0  size 0x2a8
void Prop_SpawnPaper(float *param_1,undefined4 *param_2,int param_3,long param_4)

{
  int iVar1;
  float fVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_8;
  float fStack_4;
  
  uStack_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  if (6.2831855 < DAT_0036e858) {
    DAT_0036e858 = DAT_0036e858 - 6.2831855;
  }
  if (DAT_0036e858 < 0.0) {
    DAT_0036e858 = DAT_0036e858 + 6.2831855;
  }
  if (param_4 == 0) {
    uStack_2c = 0x3d888889;
    uStack_30 = 0x3ca3d70a;
    uStack_28 = 0x3ca3d70a;
  }
  else {
    uStack_30 = 0x3e124925;
    uStack_2c = 0x3e124925;
    uStack_28 = 0x3e124925;
  }
  uStack_24 = 0x3f800000;
  iVar1 = 0;
  if (0 < param_3) {
    do {
      if (param_4 == 0) {
        fVar2 = (float)maybe_Rand_Next(0xbbda740e,0x3bda740e);
        param_1[10] = (param_1[10] + fVar2) * 0.97;
        fVar2 = (float)maybe_Rand_Next(0xbbda740e,0x3bda740e);
        param_1[0xb] = (param_1[0xb] + fVar2) * 0.97;
      }
      else {
        maybe_Math_AngleToIndex(DAT_0036e858,&fStack_8,&fStack_4);
        fVar2 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
        *param_1 = fStack_4 * fVar2 * 0.33333334 * 0.9 + *param_1 + 0.0;
        fVar2 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
        param_1[2] = fStack_8 * fVar2 * 0.33333334 * 0.9 + param_1[2] + 0.0;
      }
      *param_1 = *param_1 + param_1[10];
      fVar2 = (float)maybe_Rand_Next(0x3d088889,0x3d888889);
      param_1[1] = param_1[1] - fVar2;
      param_1[2] = param_1[2] + param_1[0xb];
      Prop_CollideWithCar(&uStack_20,param_1,&uStack_30);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0xc;
    } while (iVar1 < param_3);
  }
  return;
}

// 0x001c4690  size 0x258
void Prop_MovePaper(undefined4 *param_1,float *param_2,int param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  if (param_4 == 0) {
    iVar4 = 0;
    if (0 < param_3) {
      do {
        uVar5 = maybe_Rand_Next(fVar1 - 50.0,fVar1 + 50.0);
        *param_1 = uVar5;
        uVar5 = maybe_Rand_Next(fVar2 - 15.0,fVar2 + 15.0);
        param_1[1] = uVar5;
        uVar5 = maybe_Rand_Next(fVar3 - 50.0,fVar3 + 50.0);
        param_1[2] = uVar5;
        uVar5 = maybe_Rand_Next(0x3cf5c28f,0x3d23d70a);
        param_1[3] = uVar5;
        param_1[4] = 0x43000000;
        param_1[5] = 0x43000000;
        param_1[6] = 0x43000000;
        uVar5 = maybe_Rand_Next(0x42400000,0x42c00000);
        param_1[7] = uVar5;
        uVar5 = maybe_Rand_Next(0xc0490fdb,0x40490fdb);
        maybe_Math_AngleToIndex(uVar5,param_1 + 8,param_1 + 9);
        param_1[10] = 0;
        iVar4 = iVar4 + 1;
        param_1[0xb] = 0;
        param_1 = param_1 + 0xc;
      } while (iVar4 < param_3);
    }
  }
  else {
    iVar4 = 0;
    if (0 < param_3) {
      do {
        uVar5 = maybe_Rand_Next(fVar1 - 7.0,fVar1 + 7.0);
        *param_1 = uVar5;
        uVar5 = maybe_Rand_Next(fVar2 - 7.0,fVar2 + 7.0);
        param_1[1] = uVar5;
        uVar5 = maybe_Rand_Next(fVar3 - 7.0,fVar3 + 7.0);
        param_1[2] = uVar5;
        uVar5 = maybe_Rand_Next(0x3b9374bc,0x3c1374bc);
        param_1[3] = uVar5;
        param_1[4] = 0x43000000;
        param_1[5] = 0x43000000;
        param_1[6] = 0x43000000;
        uVar5 = maybe_Rand_Next(0x42400000,0x42c00000);
        param_1[7] = uVar5;
        uVar5 = maybe_Rand_Next(0xc0490fdb,0x40490fdb);
        maybe_Math_AngleToIndex(uVar5,param_1 + 8,param_1 + 9);
        param_1[10] = 0;
        iVar4 = iVar4 + 1;
        param_1[0xb] = 0;
        param_1 = param_1 + 0xc;
      } while (iVar4 < param_3);
    }
  }
  return;
}

// 0x001c48f0  size 0x240
void Prop_DrawPaper(uint param_1)

{
  undefined1 auStack_3e0 [8];
  uint uStack_3d8;
  uint uStack_3d4;
  undefined1 auStack_3d0 [128];
  uint auStack_350 [170];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_40 [20];
  undefined1 *puStack_2c;
  
  Pkt_Init(auStack_40,1,2,0);
  puStack_2c = &g_Views;
  Pkt_SubmitToChain(auStack_40,8);
  Pkt_End(auStack_40);
  Gfx_SetupRenderTargetEx(&g_Views + (param_1 & 0xff) * 0x5c0,auStack_3d0,0,0);
  TexSlot_Set(0,1,auStack_3d0);
  Obj_Reset(auStack_350,4,0xffffffffffffffff);
  Obj_SetVisible(auStack_350,1,0,0);
  uStack_5c = DAT_00318354;
  uStack_60 = DAT_00318350;
  Gfx_GetViewportSize(0x431100,auStack_3e0);
  fStack_6c = ((float)uStack_3d4 / 16.0) / 64.0;
  fStack_70 = ((float)uStack_3d8 / 16.0) / 64.0;
  uStack_a8 = 0x31001;
  uStack_a0 = 0x48;
  auStack_350[0] = auStack_350[0] | 6;
  Pkt_AddPrimitives(auStack_40,auStack_350,1);
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x001c4b30  size 0x258
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Prop_DrawBirds(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [352];
  
  if (iRam0036f1f8 == 0) {
    param_1 = param_1 & 0xff;
    iVar1 = *(int *)(_g_Loading + 0x14);
    if (param_1 - 2 < 2) {
      uVar3 = 100;
    }
    else {
      uVar3 = 800;
    }
    sceVu0CopyVector(auStack_170,iVar1 + 0x420);
    uRam00433fa4 = *(undefined4 *)(iVar1 + 0xa8);
    Cam_SetupViewport(0x433f00,0,8);
    maybe_Pkt_InitLayers(auStack_160,0x433f00,0x436180,8,9);
    if (param_1 - 2 < 2) {
      Prop_DrawModel(0x433f00,auStack_160,iRam0036f32c,uVar3,4,4);
    }
    else {
      Prop_DrawModel(0x433f00,auStack_160,iRam0036f328,uVar3,4,4);
    }
    if (iRam00433904 != 0) {
      maybe_Pkt_InitLayers(auStack_160,0x433380,0x436180,0,0);
      if (param_1 - 2 < 2) {
        Prop_DrawModel(0x433380,auStack_160,iRam0036f32c,uVar3,4,4);
      }
      else {
        Prop_DrawModel(0x433380,auStack_160,iRam0036f328,uVar3,4,4);
      }
    }
  }
  else {
    if ((param_1 & 0xff) - 2 < 2) {
      uVar3 = 0x32;
      iVar2 = iRam0036f32c + 0x960;
      iVar1 = iRam0036f32c;
    }
    else {
      uVar3 = 400;
      iVar2 = iRam0036f328 + 0x4b00;
      iVar1 = iRam0036f328;
    }
    Cam_SetupViewport(0x434a80,0,8);
    maybe_Pkt_InitLayers(auStack_160,0x434a80,0x436180,8,9);
    Prop_DrawModel(0x434a80,auStack_160,iVar1,uVar3,4,4);
    Cam_SetupViewport(0x435040,1,8);
    maybe_Pkt_InitLayers(auStack_160,0x435040,0x436180,8,9);
    Prop_DrawModel(0x435040,auStack_160,iVar2,uVar3,4,4);
  }
  DmaChain_Kick(1,8,9);
  return;
}

// 0x001c4d90  size 0x1d8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Prop_UpdateBirds(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  if (iRam0036f1f8 == 0) {
    uVar4 = (uint)param_2 & 0xff;
    if (uVar4 - 2 < 2) {
      uVar3 = 100;
    }
    else {
      uVar3 = 800;
    }
    sceVu0CopyVector(auStack_10,*(int *)(_g_Loading + 0x14) + 0x70);
    if (*param_1 == 0) {
      *param_1 = 1;
      if (uVar4 - 2 < 2) {
        Prop_MoveBirds(iRam0036f32c,auStack_10,uVar3,param_2);
      }
      else {
        Prop_MoveBirds(iRam0036f328,auStack_10,uVar3,param_2);
      }
    }
    else if (uVar4 - 2 < 2) {
      Prop_SpawnBird(iRam0036f32c,auStack_10,uVar3,param_2);
    }
    else {
      Prop_SpawnBird(iRam0036f328,auStack_10,uVar3,param_2);
    }
  }
  else {
    iVar1 = *(int *)(_g_Loading + 0x18);
    if (((uint)param_2 & 0xff) - 2 < 2) {
      uVar3 = 0x32;
      iVar5 = iRam0036f32c + 0x960;
      iVar2 = iRam0036f32c;
    }
    else {
      uVar3 = 400;
      iVar5 = iRam0036f328 + 0x4b00;
      iVar2 = iRam0036f328;
    }
    sceVu0CopyVector(auStack_20,*(int *)(_g_Loading + 0x14) + 0x70);
    sceVu0CopyVector(auStack_30,iVar1 + 0x70);
    if (*param_1 == 0) {
      *param_1 = 1;
      Prop_MoveBirds(iVar2,auStack_20,uVar3,param_2);
      Prop_MoveBirds(iVar5,auStack_30,uVar3,param_2);
    }
    else {
      Prop_SpawnBird(iVar2,auStack_20,uVar3,param_2);
      Prop_SpawnBird(iVar5,auStack_30,uVar3,param_2);
    }
  }
  return;
}

// 0x001c4f70  size 0x330
/* WARNING: Removing unreachable block (ram,0x001c50b4) */

void Prop_SpawnBird(float *param_1,undefined4 *param_2,int param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float afStack_30 [5];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_8;
  float fStack_4;
  
  afStack_30[4] = (float)*param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  if (6.2831855 < fRam0036e854) {
    fRam0036e854 = fRam0036e854 - 6.2831855;
  }
  if (fRam0036e854 < 0.0) {
    fRam0036e854 = fRam0036e854 + 6.2831855;
  }
  afStack_30[3] = 1.0;
  if (param_4 == '\0') {
    uVar1 = 10;
    if (iRam0036f318 == 0) {
      uVar1 = 100;
    }
    fRam0036f330 = 0.021666666;
    afStack_30[1] = 0.1;
    afStack_30[0] = 1.0 / ((float)uVar1 / 2.0);
    afStack_30[2] = afStack_30[0];
  }
  else if (param_4 == '\x01') {
    fRam0036f330 = 0.021666666;
    afStack_30[2] = 0.1;
    afStack_30[1] = 0.13333334;
    afStack_30[0] = afStack_30[2];
  }
  else if (param_4 == '\x02') {
    fRam0036f330 = 0.33333334;
    afStack_30[2] = 0.06666667;
    afStack_30[1] = 0.13333334;
    afStack_30[0] = afStack_30[2];
  }
  else if (param_4 == '\x03') {
    fRam0036f330 = 0.5;
    afStack_30[1] = 0.2;
    afStack_30[2] = 0.2;
    afStack_30[0] = afStack_30[2];
  }
  maybe_Math_AngleToIndex(&fStack_8,&fStack_4);
  iVar2 = 0;
  if (0 < param_3) {
    do {
      if ((param_4 == '\x01') || (param_4 == '\0')) {
        fVar4 = (float)maybe_Rand_Next(fRam0036f330,fRam0036f330 + 0.021666666);
        fVar3 = fRam0036f330;
        fVar5 = fRam0036f330 + 0.021666666;
        *param_1 = fStack_4 * fVar4 + *param_1 + 0.0;
        fVar3 = (float)maybe_Rand_Next(fVar3,fVar5);
        param_1[2] = fStack_8 * fVar3 + param_1[2] + 0.0;
      }
      else {
        if (param_4 != '\x03') {
          if (param_4 != '\x02') goto LAB_001c5268;
          fVar3 = (float)maybe_Rand_Next(fRam0036f330,fRam0036f330 + 1.275);
          param_1[1] = (param_1[1] + 0.0) - fVar3 * 0.4;
        }
        fVar3 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
        *param_1 = fRam0036f330 * fStack_4 * fVar3 + *param_1 + 0.0;
        fVar3 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
        param_1[2] = fRam0036f330 * fStack_8 * fVar3 + param_1[2] + 0.0;
      }
LAB_001c5268:
      Prop_CollideWithCar(afStack_30 + 4,param_1,afStack_30);
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 0xc;
    } while (iVar2 < param_3);
  }
  return;
}

// 0x001c52b0  size 0x23c
void Prop_MoveBirds(undefined4 *param_1,float *param_2,int param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float in_f1;
  float in_f0;
  undefined4 uVar5;
  float in_f2;
  float in_f21;
  float unaff_f20;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  if (param_4 == '\0') {
    in_f21 = 7.0;
    if (iRam0036f318 == 0) {
      unaff_f20 = 8.0;
      in_f2 = 100.0;
      in_f1 = 20.0;
      in_f0 = 8.0;
    }
    else {
      in_f0 = 3.4;
      unaff_f20 = 3.0;
      in_f2 = 10.0;
      in_f1 = 20.0;
    }
  }
  else if (param_4 == '\x01') {
    unaff_f20 = 2.0;
    in_f21 = 7.0;
    in_f2 = 20.0;
    in_f1 = 15.0;
    in_f0 = 2.0;
  }
  else if (param_4 == '\x02') {
    unaff_f20 = 4.0;
    in_f21 = 6.0;
    in_f2 = 30.0;
    in_f1 = 15.0;
    in_f0 = 4.0;
  }
  else if (param_4 == '\x03') {
    unaff_f20 = 8.0;
    in_f21 = 6.0;
    in_f2 = 30.0;
    in_f1 = 15.0;
    in_f0 = 8.0;
  }
  iVar4 = 0;
  if (0 < param_3) {
    fVar6 = in_f21 + in_f21;
    fVar7 = in_f2 / 2.0;
    do {
      uVar5 = maybe_Rand_Next(fVar1 - fVar7,fVar7 + fVar1);
      *param_1 = uVar5;
      uVar5 = maybe_Rand_Next(fVar2 - in_f1 / 2.0,in_f1 / 2.0 + fVar2);
      param_1[1] = uVar5;
      uVar5 = maybe_Rand_Next(fVar3 - fVar7,fVar7 + fVar3);
      param_1[2] = uVar5;
      uVar5 = maybe_Rand_Next(in_f21,fVar6);
      param_1[3] = uVar5;
      param_1[4] = 0x43000000;
      param_1[5] = 0x43000000;
      param_1[6] = 0x43000000;
      uVar5 = maybe_Rand_Next(unaff_f20,unaff_f20 + in_f0);
      param_1[7] = uVar5;
      iVar4 = iVar4 + 1;
      param_1[8] = in_f21;
      param_1[9] = in_f21;
      param_1[10] = 0x3f800000;
      param_1[0xb] = 0x3f800000;
      param_1 = param_1 + 0xc;
    } while (iVar4 < param_3);
  }
  return;
}

// 0x001c54f0  size 0x208
void Prop_DrawOverlay(uint param_1)

{
  undefined1 auStack_420 [8];
  uint uStack_418;
  uint uStack_414;
  undefined1 auStack_410 [128];
  uint auStack_390 [170];
  undefined8 uStack_e8;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  undefined1 auStack_40 [20];
  undefined1 *puStack_2c;
  
  Pkt_Init(auStack_40,1,2,0);
  puStack_2c = &g_Views + (param_1 & 0xff) * 0x5c0;
  Pkt_SubmitToChain(auStack_40,8);
  Pkt_End(auStack_40);
  Pkt_Begin(auStack_40);
  Pkt_Submit(auStack_40,0);
  Pkt_Init(auStack_80,1,2,0);
  uStack_6c = 0x4344c0;
  Pkt_SubmitToChain(auStack_80,8);
  Pkt_End(auStack_80);
  Gfx_SetupRenderTarget(0x431100,auStack_410,0);
  TexSlot_Set(0,1,auStack_410);
  Obj_Reset(auStack_390,4,0xffffffffffffffff);
  Obj_SetVisible(auStack_390,1,0,0);
  uStack_a0 = 0;
  uStack_9c = 0;
  Gfx_GetViewportSize(0x431100,auStack_420);
  auStack_390[0] = auStack_390[0] | 4;
  fStack_ac = 64.0 / ((float)uStack_414 / 16.0);
  fStack_b0 = 64.0 / ((float)uStack_418 / 16.0);
  uStack_e8 = 0x31001;
  Pkt_AddPrimitives(auStack_80,auStack_390,1);
  Pkt_Submit(auStack_80,0);
  return;
}

// 0x001c5700  size 0x280
void RaceScene_Draw(void)

{
  long lVar1;
  
  lVar1 = ResPool_Get(1);
  if (lVar1 != 0) {
    TexSlot_Set(5,1);
  }
  if (((bRam0036f31c == 0) && (cRam0036f324 == '\x01')) && (cRam0036f320 == '\0')) {
    lVar1 = ResPool_Get(6);
    if (lVar1 != 0) {
      TexSlot_Set(5,1,lVar1);
    }
    Prop_DrawSparks();
  }
  else if (cRam0036f320 == '\x04') {
    Prop_DrawOverlay(8);
    Prop_DrawBirds(2);
    Prop_DrawPaper(8);
    lVar1 = ResPool_Get(4);
    if (lVar1 != 0) {
      TexSlot_Set(5,1,lVar1);
    }
    Prop_DrawDebris();
    uRam004301c0 = 2;
    if (iRam0036f318 == 0) {
      Course_SpawnAmbient();
    }
  }
  else if (cRam0036f320 == '\x05') {
    Prop_DrawOverlay(8);
    Prop_DrawBirds(3);
    Prop_DrawPaper(8);
    lVar1 = ResPool_Get(8);
    if (lVar1 != 0) {
      TexSlot_Set(5,1,lVar1);
    }
    Prop_DrawLeaves();
    Course_DrawSky();
  }
  else if (cRam0036f320 == '\x02') {
    lVar1 = ResPool_Get(8);
    if (lVar1 != 0) {
      TexSlot_Set(5,1,lVar1);
    }
    Prop_DrawLeaves();
  }
  else if (cRam0036f320 == '\0') {
    if (bRam0036f31c - 2 < 2) {
      lVar1 = ResPool_Get();
      if (lVar1 != 0) {
        TexSlot_Set(5,1,lVar1);
      }
      Prop_DrawDebris();
    }
    else if (bRam0036f31c == 1) {
      lVar1 = ResPool_Get(7);
      if (lVar1 != 0) {
        TexSlot_Set(5,1,lVar1);
      }
      Prop_DrawAll();
    }
  }
  else if (cRam0036f320 == '\x03') {
    Prop_DrawOverlay(8);
    Prop_DrawBirds(1);
    Prop_DrawPaper(8);
  }
  else {
    Prop_DrawOverlay(8);
    Prop_DrawBirds(0);
    Prop_DrawPaper(8);
    uRam004301c0 = 1;
  }
  return;
}

// 0x001c5990  size 0x170
void RaceScene_UpdateAmbient(undefined8 param_1)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((bRam0036f31c == 0) && (cRam0036f324 == '\x01')) && (cRam0036f320 == '\0')) {
    Prop_UpdateLeaves();
  }
  if (cRam0036f320 == '\x04') {
    uStack_4 = *(undefined4 *)param_1;
    Prop_UpdateBirds(&uStack_4,2);
    Prop_UpdateSparks(param_1,cRam0036f324 == '\x01',1);
  }
  else if (cRam0036f320 == '\x05') {
    uStack_8 = *(undefined4 *)param_1;
    Prop_UpdateBirds(&uStack_8,3);
    Prop_UpdatePaper(param_1,1);
  }
  else if (cRam0036f320 == '\x02') {
    Prop_UpdatePaper(param_1,0);
  }
  else if (cRam0036f320 == '\0') {
    if (bRam0036f31c - 2 < 2) {
      Prop_UpdateSparks(param_1,cRam0036f324 == '\x01',0);
    }
    else if (bRam0036f31c == 1) {
      Prop_UpdateDebris(param_1);
    }
  }
  else if (cRam0036f320 == '\x03') {
    Prop_UpdateBirds(param_1,1);
  }
  else {
    Prop_UpdateBirds(param_1,0);
  }
  return;
}

// 0x001c5b00  size 0x28
void Prop_SetLight(int param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 * 0x50 + 0x436570) = param_2;
  sceVu0CopyMatrix(param_1 * 0x50 + 0x436580,param_3);
  return;
}

// 0x001c5b30  size 0x14
void RaceScene_SetPaused(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4
                        )

{
  uRam0036f31c = param_1;
  uRam0036f320 = param_2;
  uRam0036f324 = param_3;
  uRam0036f318 = param_4;
  return;
}

// 0x001c5b50  size 0x44
void RaceScene_FreeProps(void)

{
  if (iRam0036f328 != 0) {
    Mem_Free();
    iRam0036f328 = 0;
  }
  if (iRam0036f32c != 0) {
    Mem_Free();
    iRam0036f32c = 0;
  }
  return;
}

// 0x001c5ba0  size 0x78
void RaceScene_AllocProps(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  uRam0036f328 = Mem_AllocAligned(0x9600,0x10,param_1);
  uRam0036f32c = Mem_AllocAligned(0x12c0,0x10,param_1);
  iVar2 = 0;
  puVar1 = (undefined4 *)0x436570;
  do {
    *puVar1 = 0;
    maybe_Vu0_UnitMatrix(puVar1 + 4);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x14;
  } while (iVar2 < 2);
  return;
}

// 0x001c5c20  size 0x3c
void RaceScene_Update(void)

{
  long lVar1;
  
  lVar1 = RaceScene_IsRunning();
  if (lVar1 == 1) {
    RaceCar_PlaceAll();
  }
  return;
}

// 0x001c5c60  size 0x24
void RaceScene_Exit(void)

{
  RaceCar_FreeAll();
  RaceWorld_Shutdown();
  return;
}

// 0x001c5c90  size 0x3c
void RaceScene_Enter(int param_1)

{
  RaceWorld_Init();
  RaceCar_CreateAll(0x430750);
  *(code **)(param_1 + 0x1c) = RaceScene_Update;
  return;
}

// 0x001c5cd0  size 0x90
void RaceScene_SetupPlayerCar(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  cVar1 = GameState_GetPlayerCount();
  lVar4 = 0;
  if (0 < (long)cVar1) {
    iVar3 = 0;
    do {
      iVar2 = GameState_Elem_f0_xcc(lVar4);
      if ((*(uint *)(iVar2 + 4) & 0x100) == 0) {
        *(undefined4 *)(*(int *)(iRam0036f34c + iVar3) + 0x1d8) = 0;
      }
      lVar4 = (long)((int)lVar4 + 1);
      iVar3 = iVar3 + 4;
    } while (lVar4 < cVar1);
  }
  return;
}

// 0x001c5d60  size 0xe8
void Driver_FreeAll(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (iRam0036f34c != 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      if (*(int *)(iRam0036f34c + iVar2) != 0) {
        iVar1 = *(int *)(*(int *)(iRam0036f34c + iVar2) + 0x198);
        if (iVar1 != 0) {
          Wheel_IsEffectPlaying(iVar1,0);
          Wheel_IsEffectPlaying(iVar1,2);
          Wheel_IsEffectPlaying(iVar1,1);
        }
        Mem_Free(*(undefined4 *)(iRam0036f34c + iVar2));
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 2);
    iVar3 = 0;
    iVar2 = 0;
    do {
      if (*(int *)(iRam0036f34c + iVar2 + 8) != 0) {
        Mem_Free();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 3);
    Mem_Free(iRam0036f34c);
  }
  return;
}

// 0x001c5e50  size 0x168
void Driver_CreatePlayers(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = GameState_GetPlayerCount();
  iVar3 = GameState_GetTotalCarCount();
  iVar6 = 0;
  iVar5 = 0;
  do {
    if (*(int *)(iRam0036f34c + iVar5 + 8) != 0) {
      Mem_Free();
    }
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iRam0036f34c + iVar5 + 8) = 0;
    iVar5 = iVar5 + 4;
  } while (iVar6 < 3);
  iVar5 = 0;
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      uVar4 = Mem_Alloc16(0x18,param_1);
      *(undefined4 *)(iRam0036f34c + iVar6 + 8) = uVar4;
      puVar1 = *(undefined4 **)(iRam0036f34c + iVar6 + 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined1 *)(puVar1 + 5) = 0;
      if (iVar5 < iVar2) {
        if (*(int *)(iRam0036f34c + iVar6) == 0) {
          uVar4 = Mem_Alloc16(0x6a130,param_1);
          *(undefined4 *)(iRam0036f34c + iVar6) = uVar4;
          Driver_InitController(*(undefined4 *)(iRam0036f34c + iVar6),(char)iVar5);
        }
        **(undefined4 **)(iRam0036f34c + iVar6) = 0;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < iVar3);
  }
  return;
}

// 0x001c5fc0  size 0x168
void Driver_CreateAi(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = GameState_Elem_f0_xcc(param_2);
  uVar1 = *(uint *)(iVar3 + 4);
  iVar3 = (int)param_2;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) != 0) {
        uVar4 = Mem_Alloc16(0x18,param_1);
        *(undefined4 *)(iVar3 * 4 + iRam0036f34c + 8) = uVar4;
        puVar2 = *(undefined4 **)(iVar3 * 4 + iRam0036f34c + 8);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined1 *)(puVar2 + 5) = 0;
      }
    }
    else {
      uVar4 = Mem_Alloc16(0x18,param_1);
      *(undefined4 *)(iVar3 * 4 + iRam0036f34c + 8) = uVar4;
      puVar2 = *(undefined4 **)(iVar3 * 4 + iRam0036f34c + 8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
    }
  }
  else {
    iVar3 = iVar3 * 4;
    uVar4 = Mem_Alloc16(0x6a130,param_1);
    *(undefined4 *)(iRam0036f34c + iVar3) = uVar4;
    Driver_InitController(*(undefined4 *)(iRam0036f34c + iVar3),(char)param_2);
    uVar4 = Mem_Alloc16(0x18,param_1);
    *(undefined4 *)(iVar3 + iRam0036f34c + 8) = uVar4;
    puVar2 = *(undefined4 **)(iVar3 + iRam0036f34c + 8);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
  }
  return;
}

// 0x001c6130  size 0x58
void Driver_SetInputMode(int param_1,undefined4 *param_2,float *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x6a114) = param_4;
  *(float *)(param_1 + 0x6a11c) = *param_3 + 50.0;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  *(undefined4 *)(param_1 + 0x6a120) = *param_2;
  *(undefined4 *)(param_1 + 0x6a124) = uVar3;
  *(undefined4 *)(param_1 + 0x6a128) = uVar1;
  *(undefined4 *)(param_1 + 0x6a12c) = uVar2;
  return;
}

// 0x001c6190  size 0x19c
void Ffb_PlayCollision(undefined1 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lVar1 = Wheel_GetDeviceName();
  lVar2 = Pad_GetPort(param_1,0);
  if ((lVar1 != 0) && (lVar3 = Wheel_IsActive(lVar1), lVar3 == 0)) {
    auStack_40[0] = 2;
    uStack_3c = 0xffffffff;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_14 = 0;
    Wheel_PlayEffect(lVar1,0,auStack_40);
    uStack_3c = 0xffffffff;
    uStack_34 = 0xff;
    auStack_40[0] = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    Wheel_PlayEffect(lVar1,2,auStack_40);
    auStack_40[0] = 7;
    uStack_3c = 0xffffffff;
    uStack_24 = 0xff;
    uStack_2c = 0x32;
    uStack_28 = 0x32;
    uStack_38 = 0;
    uStack_20 = 0xff;
    uStack_34 = 0;
    uStack_30 = 0;
    Wheel_PlayEffect(lVar1,1,auStack_40);
  }
  if (lVar2 != 0) {
    Pad_SetActuator(lVar2,3,0,0);
  }
  return;
}

// 0x001c6330  size 0x184
void Ffb_PlayCurb(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1 + 0x198);
  iVar2 = *(int *)(param_1 + 0xd0);
  if ((iVar1 != 0) && (lVar3 = Wheel_IsActive(iVar1), lVar3 == 0)) {
    auStack_40[0] = 2;
    uStack_3c = 0xffffffff;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_14 = 0;
    Wheel_PlayEffect(iVar1,0,auStack_40);
    uStack_3c = 0xffffffff;
    uStack_34 = 0xff;
    auStack_40[0] = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    Wheel_PlayEffect(iVar1,2,auStack_40);
    auStack_40[0] = 7;
    uStack_3c = 0xffffffff;
    uStack_24 = 0xff;
    uStack_2c = 0x32;
    uStack_28 = 0x32;
    uStack_38 = 0;
    uStack_20 = 0xff;
    uStack_34 = 0;
    uStack_30 = 0;
    Wheel_PlayEffect(iVar1,1,auStack_40);
  }
  if (iVar2 != 0) {
    Pad_SetActuator(iVar2,3,0,0);
  }
  return;
}

// 0x001c64c0  size 0x680
void Ffb_Update(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  uint uVar11;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lVar7 = Options_Get_4();
  if (lVar7 == 0) {
    return;
  }
  cVar5 = RaceCtx_GetMode();
  if (cVar5 == '\x06') {
    return;
  }
  iVar9 = (int)param_1;
  iVar1 = *(int *)(iVar9 + 0x198);
  bVar3 = false;
  uVar2 = *(undefined4 *)(iVar9 + 0xd0);
  bVar4 = false;
  if (((iVar1 != 0) && (lVar7 = (**(code **)(*(int *)(iVar1 + 4) + 8))(iVar1), lVar7 != 0)) &&
     (lVar7 = Wheel_IsActive(iVar1), lVar7 != 0)) {
    return;
  }
  if (*(char *)(iVar9 + 0x69960) == '\x02') {
    return;
  }
  if (*(uint *)(iVar9 + 4) != (uRam0036f0cc & 1)) {
    return;
  }
  uVar8 = RaceScene_GetState();
  if (((uVar8 & 0x20) != 0) || (cVar5 = RaceProg_Get(), cVar5 != '\x03')) {
    Ffb_PlayCurb(param_1);
    *(undefined1 *)(iVar9 + 0x6a114) = 0xff;
    *(undefined4 *)(iVar9 + 0x6a118) = 0;
    *(undefined4 *)(iVar9 + 0x6a11c) = 0;
    return;
  }
  if ((*(char *)(iVar9 + 0x69960) == '\x01') && (iVar1 != 0)) {
    bVar3 = true;
  }
  else {
    if (*(char *)(iVar9 + 0x69960) != '\0') {
      return;
    }
    bVar4 = true;
  }
  cVar5 = *(char *)(iVar9 + 0x6a114);
  if (cVar5 == '\x02') {
    *(undefined4 *)(iVar9 + 0x6a118) = 1;
    if (bVar4) {
      Pad_SetActuator(uVar2,1,1,0);
    }
    else {
      auStack_40[0] = 2;
      uStack_3c = 100;
      uStack_34 = 0x80;
      uStack_38 = 0;
      uStack_30 = 0x5a;
      uStack_28 = 0;
      uStack_2c = 0x1e;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      Wheel_PlayEffect(iVar1,0,auStack_40);
    }
  }
  else if (cVar5 == '\x01') {
    *(undefined4 *)(iVar9 + 0x6a118) = 1;
    if (bVar4) {
      Pad_SetActuator(uVar2,1,1,0);
    }
    else {
      auStack_40[0] = 2;
      uStack_3c = 100;
      uStack_34 = 0x80;
      uStack_38 = 0;
      uStack_30 = 0x5a;
      uStack_28 = 0;
      uStack_2c = 0x1e;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      Wheel_PlayEffect(iVar1,0,auStack_40);
    }
  }
  else if (cVar5 == '\0') {
    fVar10 = (float)fabsf(*(undefined4 *)(iVar9 + 0x6a11c));
    if (0.0 < fVar10) {
      if (*(float *)(iVar9 + 0x6a11c) < 0.0) {
        *(float *)(iVar9 + 0x6a11c) = -*(float *)(iVar9 + 0x6a11c);
      }
      fVar10 = (*(float *)(iVar9 + 0x6a11c) * 255.0) / 300.0;
      if (fVar10 < 2.1474836e+09) {
        uStack_34 = (uint)fVar10;
      }
      else {
        uStack_34 = (int)(fVar10 - 2.1474836e+09) | 0x80000000;
      }
      if (0xff < uStack_34) {
        uStack_34 = 0xff;
      }
      fVar10 = (*(float *)(iVar9 + 0x6a11c) * 10.0) / 300.0;
      if (fVar10 < 2.1474836e+09) {
        uVar11 = (uint)fVar10;
      }
      else {
        uVar11 = (int)(fVar10 - 2.1474836e+09) | 0x80000000;
      }
      *(uint *)(iVar9 + 0x6a118) = uVar11;
      if (10 < *(int *)(iVar9 + 0x6a118)) {
        *(undefined4 *)(iVar9 + 0x6a118) = 10;
      }
      if (bVar4) {
        Pad_SetActuator(uVar2,2,0);
      }
      else {
        if (*(float *)(iVar9 + 0x6a124) < 0.0) {
          uStack_30 = 0x5a;
        }
        else {
          uStack_30 = 0x10e;
        }
        auStack_40[0] = 2;
        uStack_3c = 0xffffffff;
        uStack_38 = 0;
        uStack_2c = 100;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        Wheel_PlayEffect(iVar1,0,auStack_40);
      }
    }
  }
  else if (cVar5 == -1) {
    if (bVar3) {
      auStack_40[0] = 2;
      uStack_3c = 0xffffffff;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      Wheel_PlayEffect(iVar1,0,auStack_40);
    }
    if (*(int *)(iVar9 + 0x6a118) < 1) {
      Pad_SetActuator(uVar2,3,0,0);
      *(undefined4 *)(iVar9 + 0x6a118) = 0;
      if (!bVar4) {
        iVar6 = RaceCar_Get(*(undefined4 *)(iVar9 + 4));
        uStack_34 = (uint)(*(float *)(iVar6 + 0xb5c) * 5000.0);
        if ((int)uStack_34 < 1) {
          if ((int)uStack_34 < 0) {
            uStack_34 = (uint)((float)(int)uStack_34 - 20.0);
          }
        }
        else {
          uStack_34 = (uint)((float)(int)uStack_34 + 20.0);
        }
        if ((int)uStack_34 < 0x100) {
          if ((int)uStack_34 < -0xff) {
            uStack_34 = -0xff;
          }
        }
        else {
          uStack_34 = 0xff;
        }
        uStack_3c = 0xffffffff;
        auStack_40[0] = 0;
        uStack_30 = 0x5a;
        uStack_38 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        Wheel_PlayEffect(iVar1,2,auStack_40);
      }
    }
    else {
      *(int *)(iVar9 + 0x6a118) = *(int *)(iVar9 + 0x6a118) + -1;
      *(int *)(iVar9 + 0x6a118) = *(int *)(iVar9 + 0x6a118) + -1;
    }
  }
  *(undefined1 *)(iVar9 + 0x6a114) = 0xff;
  return;
}

// 0x001c6b40  size 0xa8
void Driver_UpdateAll(void)

{
  char cVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  
  Pad_GetPort(0,0);
  Pad_GetPort(1,0);
  lVar2 = RaceScene_IsRunning();
  if (lVar2 == 1) {
    cVar4 = '\0';
    lVar2 = GameState_GetPlayerCount();
    if (0 < lVar2) {
      iVar3 = 0;
      do {
        Driver_UpdatePlayer(*(undefined4 *)(iRam0036f34c + iVar3),cVar4);
        cVar4 = cVar4 + '\x01';
        iVar3 = iVar3 + 4;
        cVar1 = GameState_GetPlayerCount();
      } while (cVar4 < cVar1);
    }
  }
  return;
}

// 0x001c6bf0  size 0x66c
/* WARNING: Removing unreachable block (ram,0x001c7138) */
/* WARNING: Removing unreachable block (ram,0x001c6eec) */
/* WARNING: Removing unreachable block (ram,0x001c6e5c) */
/* WARNING: Removing unreachable block (ram,0x001c6ea4) */
/* WARNING: Removing unreachable block (ram,0x001c70d4) */
/* WARNING: Removing unreachable block (ram,0x001c7184) */

void Driver_UpdatePlayer(undefined8 param_1,char param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 uStack_1c;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined2 uStack_c;
  
  uVar6 = RaceCar_Get(param_2);
  iVar9 = (int)param_1;
  *(undefined4 *)(iVar9 + 0x1b4) = *(undefined4 *)(iVar9 + 0x19c);
  *(undefined4 *)(iVar9 + 0x1b8) = *(undefined4 *)(iVar9 + 0x1a0);
  *(undefined4 *)(iVar9 + 0x1bc) = *(undefined4 *)(iVar9 + 0x1a4);
  *(undefined4 *)(iVar9 + 0x1c0) = *(undefined4 *)(iVar9 + 0x1a8);
  *(undefined4 *)(iVar9 + 0x1c4) = *(undefined4 *)(iVar9 + 0x1ac);
  *(undefined1 *)(iVar9 + 0x1c8) = *(undefined1 *)(iVar9 + 0x1b0);
  *(undefined4 *)(iVar9 + 0x19c) = 0;
  *(undefined4 *)(iVar9 + 0x1a0) = 0;
  *(undefined4 *)(iVar9 + 0x1a8) = 0;
  *(undefined4 *)(iVar9 + 0x1a4) = 0;
  *(undefined4 *)(iVar9 + 0x1ac) = 0;
  *(undefined1 *)(iVar9 + 0x1b0) = 0;
  *(undefined1 *)(iVar9 + 0x1cd) = 0;
  *(undefined1 *)(iVar9 + 0x1ce) = 0;
  *(undefined1 *)(iVar9 + 0x1cf) = 0;
  *(undefined2 *)(iVar9 + 0x1d0) = 0;
  *(undefined4 *)(iVar9 + 0x1d4) = 0;
  *(undefined1 *)(iVar9 + 0x1cc) = 0;
  Driver_ApplyControls(param_1);
  Driver_UpdateAssists(param_1);
  if ((*(uint *)(iVar9 + 0x1ac) & 0x80000000) != 0) {
    if (param_2 == '\0') {
      RaceScene_SetFlags(0x20);
      cVar1 = *(char *)((int)uVar6 + 0x890);
      goto LAB_001c6ccc;
    }
    RaceScene_SetFlags(0x100020);
  }
  cVar1 = *(char *)((int)uVar6 + 0x890);
LAB_001c6ccc:
  if (cVar1 == '\x01') {
    *(undefined4 *)(iVar9 + 0x1a8) = 0x3f800000;
  }
  lVar7 = race_leaf_sub_001e8fc0();
  if ((lVar7 == 0) && (uVar8 = RaceCar_GetFlags(uVar6), (uVar8 & 0x400) == 0)) {
    Driver_ReadInput(iVar9 + 0x19c,iVar9 + 0x69964);
    *(short *)(iVar9 + 0x1d0) = (short)(int)(*(float *)(iVar9 + 0x1a4) * 255.0);
    fVar10 = *(float *)(iVar9 + 0x19c) * 255.0;
    if (2.1474836e+09 <= fVar10) {
      fVar10 = fVar10 - 2.1474836e+09;
    }
    *(char *)(iVar9 + 0x1cd) = (char)(int)fVar10;
    fVar10 = *(float *)(iVar9 + 0x1a0) * 255.0;
    if (2.1474836e+09 <= fVar10) {
      fVar10 = fVar10 - 2.1474836e+09;
    }
    *(char *)(iVar9 + 0x1ce) = (char)(int)fVar10;
    fVar10 = *(float *)(iVar9 + 0x1a8) * 255.0;
    if (2.1474836e+09 <= fVar10) {
      fVar10 = fVar10 - 2.1474836e+09;
    }
    *(char *)(iVar9 + 0x1cf) = (char)(int)fVar10;
    *(undefined4 *)(iVar9 + 0x1d4) = *(undefined4 *)(iVar9 + 0x1ac);
    *(undefined1 *)(iVar9 + 0x1cc) = *(undefined1 *)(iVar9 + 0x1b0);
    *(float *)(iVar9 + 0x1a4) = (float)(int)*(short *)(iVar9 + 0x1d0) / 255.0;
    *(float *)(iVar9 + 0x19c) = (float)*(byte *)(iVar9 + 0x1cd) / 255.0;
    *(float *)(iVar9 + 0x1a0) = (float)*(byte *)(iVar9 + 0x1ce) / 255.0;
    *(float *)(iVar9 + 0x1a8) = (float)*(byte *)(iVar9 + 0x1cf) / 255.0;
    lVar7 = RaceScene_Get_38();
    if ((((lVar7 != 0) && (uVar8 = RaceScene_Get_38(), uVar8 < 0x8ca1)) &&
        (uVar8 = RaceCar_GetFlags(uVar6), (uVar8 & 1) == 0)) &&
       (uVar8 = RaceCar_GetFlags(uVar6), (uVar8 & 0x800) == 0)) {
      uVar3 = RaceScene_Get_38();
      *(undefined4 *)(iVar9 + 0x6995c) = uVar3;
      iVar4 = RaceScene_Get_38();
      uVar11 = *(undefined4 *)(iVar9 + 0x1cc);
      uVar3 = *(undefined4 *)(iVar9 + 0x1d4);
      if (iVar4 + -1 < 36000) {
        uStack_10 = (undefined1)uVar11;
        uStack_f = (undefined1)((uint)uVar11 >> 8);
        uStack_e = (undefined1)((uint)uVar11 >> 0x10);
        uStack_d = (undefined1)((uint)uVar11 >> 0x18);
        iVar4 = (iVar4 + -1) * 0xc + iVar9;
        uStack_c = (undefined2)*(undefined4 *)(iVar9 + 0x1d0);
        *(undefined1 *)(iVar4 + 0x1dc) = uStack_10;
        *(undefined1 *)(iVar4 + 0x1dd) = uStack_f;
        *(undefined1 *)(iVar4 + 0x1de) = uStack_e;
        *(undefined1 *)(iVar4 + 0x1df) = uStack_d;
        *(undefined2 *)(iVar4 + 0x1e0) = uStack_c;
        *(undefined4 *)(iVar4 + 0x1e4) = uVar3;
      }
      uVar3 = RaceScene_Get_38();
      *(undefined4 *)(iVar9 + 0x1d8) = uVar3;
    }
    Ffb_Update(param_1);
  }
  else {
    lVar7 = RaceScene_Get_38();
    if ((lVar7 == 0) || (uVar5 = RaceScene_Get_38(), *(uint *)(iVar9 + 0x1d8) < uVar5)) {
      if ((*(uint *)((param_2 * 0x1c + (int)param_2) * 4 + iRam0036f36c + 4) & 2) != 0) {
        RaceScene_Get_38();
      }
    }
    else {
      uVar5 = *(uint *)(iVar9 + 0x1ac);
      iVar4 = RaceScene_Get_38();
      iVar4 = (iVar4 + -1) * 0xc;
      *(float *)(iVar9 + 0x19c) = (float)*(byte *)(iVar4 + iVar9 + 0x1dd) / 255.0;
      *(float *)(iVar9 + 0x1a4) = (float)(int)*(short *)(iVar4 + iVar9 + 0x1e0) / 255.0;
      *(float *)(iVar9 + 0x1a0) = (float)*(byte *)(iVar4 + iVar9 + 0x1de) / 255.0;
      *(float *)(iVar9 + 0x1a8) = (float)*(byte *)(iVar4 + iVar9 + 0x1df) / 255.0;
      *(undefined4 *)(iVar9 + 0x1ac) = *(undefined4 *)(iVar4 + iVar9 + 0x1e4);
      *(undefined1 *)(iVar9 + 0x1b0) = *(undefined1 *)(iVar4 + iVar9 + 0x1dc);
      *(uint *)(iVar9 + 0x1ac) = *(uint *)(iVar9 + 0x1ac) & 0x7fffff3f;
      if ((uVar5 & 0x40) != 0) {
        *(uint *)(iVar9 + 0x1ac) = *(uint *)(iVar9 + 0x1ac) | 0x40;
      }
    }
  }
  uVar3 = *(undefined4 *)(iVar9 + 0x1ac);
  puVar2 = *(undefined4 **)(param_2 * 4 + iRam0036f34c + 8);
  uVar13 = *(undefined4 *)(iVar9 + 0x1a0);
  uVar11 = *(undefined4 *)(iVar9 + 0x1a4);
  uVar12 = *(undefined4 *)(iVar9 + 0x1a8);
  uStack_1c = (undefined1)*(undefined4 *)(iVar9 + 0x1b0);
  *puVar2 = *(undefined4 *)(iVar9 + 0x19c);
  puVar2[1] = uVar13;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  puVar2[4] = uVar3;
  *(undefined1 *)(puVar2 + 5) = uStack_1c;
  return;
}

// 0x001c7260  size 0x9f0
/* WARNING: Removing unreachable block (ram,0x001c79c8) */
/* WARNING: Removing unreachable block (ram,0x001c7770) */
/* WARNING: Removing unreachable block (ram,0x001c7518) */
/* WARNING: Removing unreachable block (ram,0x001c72c0) */
/* WARNING: Removing unreachable block (ram,0x001c73c8) */
/* WARNING: Removing unreachable block (ram,0x001c7620) */
/* WARNING: Removing unreachable block (ram,0x001c7878) */
/* WARNING: Removing unreachable block (ram,0x001c7ad0) */

void Driver_ReadInput(float *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = *(int *)(param_2 + 0x5c0) + -1;
  fVar5 = param_1[2];
  if (0 < iVar4) {
    if (8 < iVar4) {
      bVar1 = false;
      if ((-1 < iVar4) && (-0x80000000 < iVar4)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar2 = param_2 + iVar4 * 4;
        do {
          iVar4 = iVar4 + -8;
          *(undefined4 *)(iVar2 + 0x4cc) = *(undefined4 *)(iVar2 + 0x4c8);
          *(undefined4 *)(iVar2 + 0x4c8) = *(undefined4 *)(iVar2 + 0x4c4);
          *(undefined4 *)(iVar2 + 0x4c4) = *(undefined4 *)(iVar2 + 0x4c0);
          *(undefined4 *)(iVar2 + 0x4c0) = *(undefined4 *)(iVar2 + 0x4bc);
          *(undefined4 *)(iVar2 + 0x4bc) = *(undefined4 *)(iVar2 + 0x4b8);
          *(undefined4 *)(iVar2 + 0x4b8) = *(undefined4 *)(iVar2 + 0x4b4);
          *(undefined4 *)(iVar2 + 0x4b4) = *(undefined4 *)(iVar2 + 0x4b0);
          *(undefined4 *)(iVar2 + 0x4b0) = *(undefined4 *)(iVar2 + 0x4ac);
          iVar2 = iVar2 + -0x20;
        } while (8 < iVar4);
      }
    }
    if (0 < iVar4) {
      iVar2 = param_2 + iVar4 * 4;
      do {
        iVar4 = iVar4 + -1;
        *(undefined4 *)(iVar2 + 0x4cc) = *(undefined4 *)(iVar2 + 0x4c8);
        iVar2 = iVar2 + -4;
      } while (0 < iVar4);
    }
  }
  *(float *)(param_2 + 0x4cc) = fVar5;
  iVar4 = *(int *)(param_2 + 0x5c0);
  fVar5 = 0.0;
  iVar2 = 0;
  if (0 < iVar4) {
    if (8 < iVar4) {
      bVar1 = false;
      if ((-1 < iVar4) && (iVar4 < 0x7fffffff)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = param_2;
        do {
          iVar2 = iVar2 + 8;
          fVar5 = *(float *)(iVar3 + 0x4e8) * *(float *)(iVar3 + 0x3f8) +
                  *(float *)(iVar3 + 0x4e4) * *(float *)(iVar3 + 0x3f4) +
                  *(float *)(iVar3 + 0x4e0) * *(float *)(iVar3 + 0x3f0) +
                  *(float *)(iVar3 + 0x4dc) * *(float *)(iVar3 + 0x3ec) +
                  *(float *)(iVar3 + 0x4d8) * *(float *)(iVar3 + 1000) +
                  *(float *)(iVar3 + 0x4d4) * *(float *)(iVar3 + 0x3e4) +
                  *(float *)(iVar3 + 0x4d0) * *(float *)(iVar3 + 0x3e0) +
                  *(float *)(iVar3 + 0x4cc) * *(float *)(iVar3 + 0x3dc) + fVar5 + 0.0;
          iVar3 = iVar3 + 0x20;
        } while (iVar2 < iVar4 + -8);
      }
    }
    iVar4 = *(int *)(param_2 + 0x5c0);
    if (iVar2 < iVar4) {
      iVar3 = param_2 + iVar2 * 4;
      do {
        iVar2 = iVar2 + 1;
        fVar5 = *(float *)(iVar3 + 0x4cc) * *(float *)(iVar3 + 0x3dc) + fVar5 + 0.0;
        iVar3 = iVar3 + 4;
      } while (iVar2 < iVar4);
    }
  }
  *(float *)(param_2 + 0x5bc) = fVar5 / (float)iVar4;
  param_1[2] = fVar5 / (float)iVar4;
  iVar4 = *(int *)(param_2 + 0x1e8) + -1;
  fVar5 = *param_1;
  if (0 < iVar4) {
    if (8 < iVar4) {
      bVar1 = false;
      if ((-1 < iVar4) && (-0x80000000 < iVar4)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar2 = param_2 + iVar4 * 4;
        do {
          iVar4 = iVar4 + -8;
          *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar2 + 0xf0);
          *(undefined4 *)(iVar2 + 0xf0) = *(undefined4 *)(iVar2 + 0xec);
          *(undefined4 *)(iVar2 + 0xec) = *(undefined4 *)(iVar2 + 0xe8);
          *(undefined4 *)(iVar2 + 0xe8) = *(undefined4 *)(iVar2 + 0xe4);
          *(undefined4 *)(iVar2 + 0xe4) = *(undefined4 *)(iVar2 + 0xe0);
          *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(iVar2 + 0xdc);
          *(undefined4 *)(iVar2 + 0xdc) = *(undefined4 *)(iVar2 + 0xd8);
          *(undefined4 *)(iVar2 + 0xd8) = *(undefined4 *)(iVar2 + 0xd4);
          iVar2 = iVar2 + -0x20;
        } while (8 < iVar4);
      }
    }
    if (0 < iVar4) {
      iVar2 = param_2 + iVar4 * 4;
      do {
        iVar4 = iVar4 + -1;
        *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar2 + 0xf0);
        iVar2 = iVar2 + -4;
      } while (0 < iVar4);
    }
  }
  *(float *)(param_2 + 0xf4) = fVar5;
  iVar4 = *(int *)(param_2 + 0x1e8);
  fVar5 = 0.0;
  iVar2 = 0;
  if (0 < iVar4) {
    if (8 < iVar4) {
      bVar1 = false;
      if ((-1 < iVar4) && (iVar4 < 0x7fffffff)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = param_2;
        do {
          iVar2 = iVar2 + 8;
          fVar5 = *(float *)(iVar3 + 0x110) * *(float *)(iVar3 + 0x20) +
                  *(float *)(iVar3 + 0x10c) * *(float *)(iVar3 + 0x1c) +
                  *(float *)(iVar3 + 0x108) * *(float *)(iVar3 + 0x18) +
                  *(float *)(iVar3 + 0x104) * *(float *)(iVar3 + 0x14) +
                  *(float *)(iVar3 + 0x100) * *(float *)(iVar3 + 0x10) +
                  *(float *)(iVar3 + 0xfc) * *(float *)(iVar3 + 0xc) +
                  *(float *)(iVar3 + 0xf8) * *(float *)(iVar3 + 8) +
                  *(float *)(iVar3 + 0xf4) * *(float *)(iVar3 + 4) + fVar5 + 0.0;
          iVar3 = iVar3 + 0x20;
        } while (iVar2 < iVar4 + -8);
      }
    }
    iVar4 = *(int *)(param_2 + 0x1e8);
    if (iVar2 < iVar4) {
      iVar3 = param_2 + iVar2 * 4;
      do {
        iVar2 = iVar2 + 1;
        fVar5 = *(float *)(iVar3 + 0xf4) * *(float *)(iVar3 + 4) + fVar5 + 0.0;
        iVar3 = iVar3 + 4;
      } while (iVar2 < iVar4);
    }
  }
  *(float *)(param_2 + 0x1e4) = fVar5 / (float)iVar4;
  *param_1 = fVar5 / (float)iVar4;
  iVar4 = *(int *)(param_2 + 0x3d4) + -1;
  fVar5 = param_1[1];
  if (0 < iVar4) {
    if (8 < iVar4) {
      bVar1 = false;
      if ((-1 < iVar4) && (-0x80000000 < iVar4)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar2 = param_2 + iVar4 * 4;
        do {
          iVar4 = iVar4 + -8;
          *(undefined4 *)(iVar2 + 0x2e0) = *(undefined4 *)(iVar2 + 0x2dc);
          *(undefined4 *)(iVar2 + 0x2dc) = *(undefined4 *)(iVar2 + 0x2d8);
          *(undefined4 *)(iVar2 + 0x2d8) = *(undefined4 *)(iVar2 + 0x2d4);
          *(undefined4 *)(iVar2 + 0x2d4) = *(undefined4 *)(iVar2 + 0x2d0);
          *(undefined4 *)(iVar2 + 0x2d0) = *(undefined4 *)(iVar2 + 0x2cc);
          *(undefined4 *)(iVar2 + 0x2cc) = *(undefined4 *)(iVar2 + 0x2c8);
          *(undefined4 *)(iVar2 + 0x2c8) = *(undefined4 *)(iVar2 + 0x2c4);
          *(undefined4 *)(iVar2 + 0x2c4) = *(undefined4 *)(iVar2 + 0x2c0);
          iVar2 = iVar2 + -0x20;
        } while (8 < iVar4);
      }
    }
    if (0 < iVar4) {
      iVar2 = param_2 + iVar4 * 4;
      do {
        iVar4 = iVar4 + -1;
        *(undefined4 *)(iVar2 + 0x2e0) = *(undefined4 *)(iVar2 + 0x2dc);
        iVar2 = iVar2 + -4;
      } while (0 < iVar4);
    }
  }
  *(float *)(param_2 + 0x2e0) = fVar5;
  iVar4 = *(int *)(param_2 + 0x3d4);
  fVar5 = 0.0;
  iVar2 = 0;
  if (0 < iVar4) {
    if (8 < iVar4) {
      bVar1 = false;
      if ((-1 < iVar4) && (iVar4 < 0x7fffffff)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = param_2;
        do {
          iVar2 = iVar2 + 8;
          fVar5 = *(float *)(iVar3 + 0x2fc) * *(float *)(iVar3 + 0x20c) +
                  *(float *)(iVar3 + 0x2f8) * *(float *)(iVar3 + 0x208) +
                  *(float *)(iVar3 + 0x2f4) * *(float *)(iVar3 + 0x204) +
                  *(float *)(iVar3 + 0x2f0) * *(float *)(iVar3 + 0x200) +
                  *(float *)(iVar3 + 0x2ec) * *(float *)(iVar3 + 0x1fc) +
                  *(float *)(iVar3 + 0x2e8) * *(float *)(iVar3 + 0x1f8) +
                  *(float *)(iVar3 + 0x2e4) * *(float *)(iVar3 + 500) +
                  *(float *)(iVar3 + 0x2e0) * *(float *)(iVar3 + 0x1f0) + fVar5 + 0.0;
          iVar3 = iVar3 + 0x20;
        } while (iVar2 < iVar4 + -8);
      }
    }
    iVar4 = *(int *)(param_2 + 0x3d4);
    if (iVar2 < iVar4) {
      iVar3 = param_2 + iVar2 * 4;
      do {
        iVar2 = iVar2 + 1;
        fVar5 = *(float *)(iVar3 + 0x2e0) * *(float *)(iVar3 + 0x1f0) + fVar5 + 0.0;
        iVar3 = iVar3 + 4;
      } while (iVar2 < iVar4);
    }
  }
  *(float *)(param_2 + 0x3d0) = fVar5 / (float)iVar4;
  param_1[1] = fVar5 / (float)iVar4;
  iVar4 = *(int *)(param_2 + 0x7ac) + -1;
  fVar5 = param_1[3];
  if (0 < iVar4) {
    if (8 < iVar4) {
      bVar1 = false;
      if ((-1 < iVar4) && (-0x80000000 < iVar4)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar2 = param_2 + iVar4 * 4;
        do {
          iVar4 = iVar4 + -8;
          *(undefined4 *)(iVar2 + 0x6b8) = *(undefined4 *)(iVar2 + 0x6b4);
          *(undefined4 *)(iVar2 + 0x6b4) = *(undefined4 *)(iVar2 + 0x6b0);
          *(undefined4 *)(iVar2 + 0x6b0) = *(undefined4 *)(iVar2 + 0x6ac);
          *(undefined4 *)(iVar2 + 0x6ac) = *(undefined4 *)(iVar2 + 0x6a8);
          *(undefined4 *)(iVar2 + 0x6a8) = *(undefined4 *)(iVar2 + 0x6a4);
          *(undefined4 *)(iVar2 + 0x6a4) = *(undefined4 *)(iVar2 + 0x6a0);
          *(undefined4 *)(iVar2 + 0x6a0) = *(undefined4 *)(iVar2 + 0x69c);
          *(undefined4 *)(iVar2 + 0x69c) = *(undefined4 *)(iVar2 + 0x698);
          iVar2 = iVar2 + -0x20;
        } while (8 < iVar4);
      }
    }
    if (0 < iVar4) {
      iVar2 = param_2 + iVar4 * 4;
      do {
        iVar4 = iVar4 + -1;
        *(undefined4 *)(iVar2 + 0x6b8) = *(undefined4 *)(iVar2 + 0x6b4);
        iVar2 = iVar2 + -4;
      } while (0 < iVar4);
    }
  }
  *(float *)(param_2 + 0x6b8) = fVar5;
  iVar4 = *(int *)(param_2 + 0x7ac);
  fVar5 = 0.0;
  iVar2 = 0;
  if (0 < iVar4) {
    if (8 < iVar4) {
      bVar1 = false;
      if ((-1 < iVar4) && (iVar4 < 0x7fffffff)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = param_2;
        do {
          iVar2 = iVar2 + 8;
          fVar5 = *(float *)(iVar3 + 0x6d4) * *(float *)(iVar3 + 0x5e4) +
                  *(float *)(iVar3 + 0x6d0) * *(float *)(iVar3 + 0x5e0) +
                  *(float *)(iVar3 + 0x6cc) * *(float *)(iVar3 + 0x5dc) +
                  *(float *)(iVar3 + 0x6c8) * *(float *)(iVar3 + 0x5d8) +
                  *(float *)(iVar3 + 0x6c4) * *(float *)(iVar3 + 0x5d4) +
                  *(float *)(iVar3 + 0x6c0) * *(float *)(iVar3 + 0x5d0) +
                  *(float *)(iVar3 + 0x6bc) * *(float *)(iVar3 + 0x5cc) +
                  *(float *)(iVar3 + 0x6b8) * *(float *)(iVar3 + 0x5c8) + fVar5 + 0.0;
          iVar3 = iVar3 + 0x20;
        } while (iVar2 < iVar4 + -8);
      }
    }
    iVar4 = *(int *)(param_2 + 0x7ac);
    if (iVar2 < iVar4) {
      iVar3 = param_2 + iVar2 * 4;
      do {
        iVar2 = iVar2 + 1;
        fVar5 = *(float *)(iVar3 + 0x6b8) * *(float *)(iVar3 + 0x5c8) + fVar5 + 0.0;
        iVar3 = iVar3 + 4;
      } while (iVar2 < iVar4);
    }
  }
  *(float *)(param_2 + 0x7a8) = fVar5 / (float)iVar4;
  param_1[3] = fVar5 / (float)iVar4;
  return;
}

// 0x001c7c50  size 0x2e0
void Driver_UpdateAssists(uint *param_1)

{
  bool bVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x6c) = 0;
  bVar1 = false;
  if ((*param_1 & 2) == 0) {
    *(undefined1 *)(param_1 + 0x1a658) = 0;
  }
  else {
    Driver_FilterPedals(param_1 + 0x35,param_1 + 0x67,param_1 + 0x6d);
    bVar1 = (float)param_1[0x69] != 0.0;
    if (bVar1) {
      *(undefined1 *)(param_1 + 0x1a658) = 1;
    }
  }
  if ((*param_1 & 1) != 0) {
    Driver_FilterSteering(param_1 + 3,param_1 + 0x67,param_1 + 0x6d);
    lVar2 = Options_Get_18();
    if (lVar2 == 0) {
      if ((float)param_1[0x67] != 0.0) {
        param_1[0x67] = 0x3f800000;
      }
      if ((float)param_1[0x68] != 0.0) {
        param_1[0x68] = 0x3f800000;
      }
      if ((float)param_1[0x69] <= 0.5) {
        if ((float)param_1[0x69] < -0.5) {
          param_1[0x69] = 0xbf800000;
        }
        else {
          param_1[0x69] = 0;
        }
      }
      else {
        param_1[0x69] = 0x3f800000;
      }
      if (0.0 < (float)param_1[0x6a]) {
        param_1[0x6a] = 0x3f800000;
      }
    }
    if ((bool)((float)param_1[0x69] != 0.0 & ~bVar1)) {
      *(undefined1 *)(param_1 + 0x1a658) = 0;
    }
  }
  return;
}

// 0x001c7f40  size 0xcac
void Driver_FilterSteering(uint *param_1,float *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  char cStack_50;
  char cStack_40;
  char cStack_30;
  char cStack_20;
  
  iVar4 = 0;
  puVar5 = (uint *)0x318a40;
  uVar1 = param_1[0x31];
  pbVar6 = &DAT_00318aa0;
  puVar7 = param_1;
  do {
    uVar2 = puVar7[1];
    if (uVar2 != 0) {
      uVar3 = puVar7[2];
      if ((iVar4 < 0x10) || (0x17 < iVar4)) {
        if ((uVar3 & 1) == 0) {
          if ((uVar3 & 2) == 0) {
            if ((uVar3 & 4) == 0) {
              if ((uVar3 & 8) == 0) {
                if ((uVar3 & 0x30) == 0) {
                  if ((uVar3 & 0x40) != 0) {
                    fVar8 = 0.0;
                    fVar9 = *(float *)(uVar1 + (uint)*pbVar6 * 0x10 + 0x1b0);
                    if (fVar9 != 0.0) {
                      if (0.1 <= fVar9) {
                        if (fVar9 < 0.5) {
                          fVar8 = ((fVar9 - 0.1) / 0.4) * 0.5;
                        }
                        else {
                          fVar8 = ((fVar9 - 0.5) / 0.5) * 0.5 + 0.5;
                        }
                      }
                      param_2[3] = fVar8;
                      if (param_2[1] != 0.0) {
                        param_2[4] = (float)((uint)param_2[4] | uVar2);
                      }
                    }
                  }
                }
                else if ((*puVar5 & *(uint *)(uVar1 + 0xc)) != 0) {
                  param_2[4] = (float)((uint)param_2[4] | uVar2);
                  if ((uVar3 & 0x10) == 0) {
                    param_2[2] = 1.0;
                  }
                  else {
                    param_2[2] = -1.0;
                  }
                }
              }
              else {
                fVar8 = 0.0;
                fVar9 = *(float *)(uVar1 + (uint)*pbVar6 * 0x10 + 0x1b0);
                if (fVar9 != 0.0) {
                  if (0.1 <= fVar9) {
                    if (fVar9 < 0.5) {
                      fVar8 = ((fVar9 - 0.1) / 0.4) * 0.5;
                    }
                    else {
                      fVar8 = ((fVar9 - 0.5) / 0.5) * 0.5 + 0.5;
                    }
                  }
                  param_2[1] = fVar8;
                  if (fVar8 != 0.0) {
                    param_2[4] = (float)((uint)param_2[4] | uVar2);
                  }
                }
              }
            }
            else {
              fVar8 = 0.0;
              fVar9 = *(float *)(uVar1 + (uint)*pbVar6 * 0x10 + 0x1b0);
              if (fVar9 != 0.0) {
                if (0.1 <= fVar9) {
                  if (fVar9 < 0.5) {
                    fVar8 = ((fVar9 - 0.1) / 0.4) * 0.5;
                  }
                  else {
                    fVar8 = ((fVar9 - 0.5) / 0.5) * 0.5 + 0.5;
                  }
                }
                *param_2 = fVar8;
                if (*param_2 != 0.0) {
                  param_2[4] = (float)((uint)param_2[4] | uVar2);
                }
              }
            }
          }
          else if ((*puVar5 & *(uint *)(uVar1 + 0x14)) != 0) {
            param_2[4] = (float)((uint)param_2[4] | uVar2);
          }
        }
        else if ((*puVar5 & *(uint *)(uVar1 + 0xc)) != 0) {
          param_2[4] = (float)((uint)param_2[4] | uVar2);
        }
      }
      else if ((uVar3 & 1) == 0) {
        if ((uVar3 & 2) == 0) {
          if ((uVar3 & 0x30) == 0) {
            if ((uVar3 & 4) == 0) {
              if ((uVar3 & 8) == 0) {
                if (((uVar3 & 0x40) != 0) && (fVar9 = 0.0, param_2[1] == 0.0)) {
                  fVar8 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
                  switch(iVar4) {
                  case 0x10:
                  case 0x12:
                  case 0x14:
                  case 0x16:
                    cStack_50 = '\0';
                    break;
                  case 0x11:
                  case 0x13:
                  case 0x15:
                  case 0x17:
                    cStack_50 = '\x01';
                  }
                  if (cStack_50 == '\0') {
                    if (fVar8 < 0.0) {
                      fVar9 = -1.0;
                    }
                  }
                  else if (0.0 < fVar8) {
                    fVar9 = 1.0;
                  }
                  fVar9 = (float)fabsf(fVar8 * fVar9);
                  if (0.2 <= fVar9) {
                    if (fVar9 < 0.6) {
                      fVar9 = ((fVar9 - 0.2) / 0.40000004) * 0.5;
                    }
                    else {
                      fVar9 = ((fVar9 - 0.6) / 0.39999998) * 0.5 + 0.5;
                    }
                  }
                  else {
                    fVar9 = 0.0;
                  }
                  if (fVar9 != 0.0) {
                    param_2[4] = (float)((uint)param_2[4] | uVar2);
                    param_2[3] = fVar9;
                  }
                }
              }
              else {
                fVar9 = 0.0;
                if (param_2[1] == 0.0) {
                  fVar8 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
                  switch(iVar4) {
                  case 0x10:
                  case 0x12:
                  case 0x14:
                  case 0x16:
                    cStack_40 = '\0';
                    break;
                  case 0x11:
                  case 0x13:
                  case 0x15:
                  case 0x17:
                    cStack_40 = '\x01';
                  }
                  if (cStack_40 == '\0') {
                    if (fVar8 < 0.0) {
                      fVar9 = -1.0;
                    }
                  }
                  else if (0.0 < fVar8) {
                    fVar9 = 1.0;
                  }
                  fVar9 = (float)fabsf(fVar8 * fVar9);
                  if (0.2 <= fVar9) {
                    if (fVar9 < 0.6) {
                      fVar9 = ((fVar9 - 0.2) / 0.40000004) * 0.5;
                    }
                    else {
                      fVar9 = ((fVar9 - 0.6) / 0.39999998) * 0.5 + 0.5;
                    }
                  }
                  else {
                    fVar9 = 0.0;
                  }
                  if (fVar9 != 0.0) {
                    param_2[4] = (float)((uint)param_2[4] | uVar2);
                    param_2[1] = fVar9;
                  }
                }
              }
            }
            else {
              fVar9 = 0.0;
              if (*param_2 == 0.0) {
                fVar8 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
                switch(iVar4) {
                case 0x10:
                case 0x12:
                case 0x14:
                case 0x16:
                  cStack_30 = '\0';
                  break;
                case 0x11:
                case 0x13:
                case 0x15:
                case 0x17:
                  cStack_30 = '\x01';
                }
                if (cStack_30 == '\0') {
                  if (fVar8 < 0.0) {
                    fVar9 = -1.0;
                  }
                }
                else if (0.0 < fVar8) {
                  fVar9 = 1.0;
                }
                fVar9 = (float)fabsf(fVar8 * fVar9);
                if (0.2 <= fVar9) {
                  if (fVar9 < 0.6) {
                    fVar9 = ((fVar9 - 0.2) / 0.40000004) * 0.5;
                  }
                  else {
                    fVar9 = ((fVar9 - 0.6) / 0.39999998) * 0.5 + 0.5;
                  }
                }
                else {
                  fVar9 = 0.0;
                }
                if (fVar9 != 0.0) {
                  param_2[4] = (float)((uint)param_2[4] | uVar2);
                  *param_2 = fVar9;
                }
              }
            }
          }
          else {
            fVar9 = 0.0;
            if (param_2[2] == 0.0) {
              fVar8 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
              switch(iVar4) {
              case 0x10:
              case 0x12:
              case 0x14:
              case 0x16:
                cStack_20 = '\0';
                break;
              case 0x11:
              case 0x13:
              case 0x15:
              case 0x17:
                cStack_20 = '\x01';
              }
              if (cStack_20 == '\0') {
                if (fVar8 < 0.0) {
                  fVar9 = -1.0;
                }
              }
              else if (0.0 < fVar8) {
                fVar9 = 1.0;
              }
              fVar9 = (float)fabsf(fVar8 * fVar9);
              if (0.2 <= fVar9) {
                if (fVar9 < 0.6) {
                  fVar9 = ((fVar9 - 0.2) / 0.40000004) * 0.5;
                }
                else {
                  fVar9 = ((fVar9 - 0.6) / 0.36499995) * 0.5 + 0.5;
                }
              }
              else {
                fVar9 = 0.0;
              }
              if (1.0 < fVar9) {
                fVar9 = 1.0;
              }
              if (fVar9 != 0.0) {
                if ((uVar3 & 0x10) == 0) {
                  param_2[2] = fVar9;
                }
                else {
                  param_2[2] = -fVar9;
                }
                *(undefined1 *)(param_2 + 5) = 0;
              }
            }
          }
        }
        else if ((*(uint *)(param_3 + 0x10) & uVar2) == 0) {
          fVar9 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
          switch(iVar4) {
          case 0x10:
          case 0x12:
            if ((fVar9 < -0.75) && ((*param_1 & 1) != 0)) {
              param_2[4] = (float)((uint)param_2[4] | uVar2);
              *param_1 = *param_1 & 0xfffffffe;
            }
            break;
          case 0x11:
          case 0x13:
            if ((0.75 < fVar9) && ((*param_1 & 1) != 0)) {
              param_2[4] = (float)((uint)param_2[4] | uVar2);
              *param_1 = *param_1 & 0xfffffffe;
            }
            break;
          case 0x14:
          case 0x16:
            if ((fVar9 < -0.75) && ((*param_1 & 2) != 0)) {
              param_2[4] = (float)((uint)param_2[4] | uVar2);
              *param_1 = *param_1 & 0xfffffffd;
            }
            break;
          case 0x15:
          case 0x17:
            if ((0.75 < fVar9) && ((*param_1 & 2) != 0)) {
              param_2[4] = (float)((uint)param_2[4] | uVar2);
              *param_1 = *param_1 & 0xfffffffd;
            }
          }
        }
      }
      else {
        fVar9 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
        switch(iVar4) {
        case 0x10:
        case 0x12:
          if (fVar9 < -0.75) {
            param_2[4] = (float)((uint)param_2[4] | uVar2);
          }
          break;
        case 0x11:
        case 0x13:
          if (0.75 < fVar9) {
            param_2[4] = (float)((uint)param_2[4] | uVar2);
          }
          break;
        case 0x14:
        case 0x16:
          if (fVar9 < -0.75) {
            param_2[4] = (float)((uint)param_2[4] | uVar2);
          }
          break;
        case 0x15:
        case 0x17:
          if (0.75 < fVar9) {
            param_2[4] = (float)((uint)param_2[4] | uVar2);
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
    puVar7 = puVar7 + 2;
    puVar5 = puVar5 + 1;
    pbVar6 = pbVar6 + 4;
  } while (iVar4 < 0x18);
  return;
}

