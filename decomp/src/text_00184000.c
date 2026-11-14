// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00184000 - 0x00188000
#include "ghidra_types.h"

// 0x00184180  size 0xf0
void Cam_BuildViewMatrix(int param_1)

{
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [64];
  undefined1 auStack_10 [16];
  
  uStack_60 = DAT_0030b9f0;
  uStack_5c = DAT_0030b9f4;
  uStack_58 = DAT_0030b9f8;
  uStack_54 = DAT_0030b9fc;
  maybe_Vu0_UnitMatrix(auStack_50);
  sceVu0ApplyMatrix(&uStack_60,param_1 + 0x550,&uStack_60);
  Demo_BuildRotation(0x40490fdb,auStack_50,auStack_50,&uStack_60);
  sceVu0SubVector(auStack_10,param_1 + 0x420,param_1 + 0x510);
  sceVu0ApplyMatrix(auStack_10,auStack_50,auStack_10);
  sceVu0AddVector(param_1 + 0x420,param_1 + 0x510,auStack_10);
  sceVu0SubVector(auStack_10,param_1 + 0x430,param_1 + 0x510);
  sceVu0ApplyMatrix(auStack_10,auStack_50,auStack_10);
  sceVu0AddVector(param_1 + 0x430,param_1 + 0x510,auStack_10);
  return;
}

// 0x00184270  size 0x574
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Cam_UpdateChase(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [28];
  ushort uStack_14;
  short sStack_12;
  ushort uStack_10;
  short sStack_e;
  ushort uStack_c;
  short sStack_a;
  ushort uStack_8;
  short sStack_6;
  undefined4 uStack_4;
  
  uStack_f0 = DAT_0030b9e0;
  uStack_ec = DAT_0030b9e4;
  uStack_e8 = DAT_0030b9e8;
  uStack_e4 = DAT_0030b9ec;
  uStack_4 = *(undefined4 *)(param_1 + 0x5f6);
  Cam_UpdateReplay(&uStack_8,param_1 + 0x420,uStack_4);
  uStack_4 = CONCAT22(sStack_6,uStack_8);
  uStack_10 = uStack_8;
  sStack_e = sStack_6;
  if (-1 < (short)uStack_8) {
    psVar3 = *(short **)(*(int *)(_g_RoadData + 4) + (uint)uStack_8 * 4);
    sVar1 = *psVar3;
    psVar2 = psVar3 + sVar1 * 0x10 + sStack_6 * 6 + 0x3e;
    psVar3 = psVar3 + sVar1 * 0x14 + sVar1 * 2 + sStack_6 * 6 + 0x3e;
    uStack_90 = *(undefined4 *)psVar3;
    uStack_8c = *(undefined4 *)(psVar3 + 2);
    uStack_88 = *(undefined4 *)(psVar3 + 4);
    uStack_84 = 0x3f800000;
    uStack_70 = *(undefined4 *)psVar2;
    uStack_6c = *(undefined4 *)(psVar2 + 2);
    uStack_68 = *(undefined4 *)(psVar2 + 4);
    uStack_64 = 0x3f800000;
    fVar4 = (float)Cam_ComputeReplayOffset(auStack_60,uStack_4);
    fVar5 = (float)sceVu0InnerProduct(auStack_60,param_1 + 0x420);
    fVar4 = fVar4 - fVar5;
    Demo_GetRoadPoint(&uStack_c,uStack_4,0xffffffffffffffff);
    uStack_4 = CONCAT22(sStack_a,uStack_c);
    uStack_14 = uStack_c;
    sStack_12 = sStack_a;
    if (-1 < (short)uStack_c) {
      psVar3 = *(short **)(*(int *)(_g_RoadData + 4) + (uint)uStack_c * 4);
      sVar1 = *psVar3;
      psVar2 = psVar3 + sVar1 * 0x10 + sStack_a * 6 + 0x3e;
      psVar3 = psVar3 + sVar1 * 0x14 + sVar1 * 2 + sStack_a * 6 + 0x3e;
      uStack_a0 = *(undefined4 *)psVar3;
      uStack_9c = *(undefined4 *)(psVar3 + 2);
      uStack_98 = *(undefined4 *)(psVar3 + 4);
      uStack_94 = 0x3f800000;
      uStack_80 = *(undefined4 *)psVar2;
      uStack_7c = *(undefined4 *)(psVar2 + 2);
      uStack_78 = *(undefined4 *)(psVar2 + 4);
      uStack_74 = 0x3f800000;
      fVar5 = (float)Cam_ComputeReplayOffset(auStack_50,uStack_4);
      fVar6 = (float)sceVu0InnerProduct(auStack_50,param_1 + 0x420);
      sceVu0OuterProduct(auStack_30,&uStack_f0,auStack_50);
      sceVu0OuterProduct(auStack_40,&uStack_f0,auStack_60);
      sceVu0ScaleVector(fVar4,auStack_30,auStack_30);
      sceVu0ScaleVector(-(fVar5 - fVar6),auStack_40,auStack_40);
      sceVu0AddVector(auStack_b0,auStack_30,auStack_40);
      sceVu0ScaleVector(1.0 / (-(fVar5 - fVar6) + fVar4),auStack_b0,auStack_b0);
      sceVu0Normalize(auStack_b0,auStack_b0);
      sceVu0AddVector(auStack_d0,&uStack_90,&uStack_a0);
      sceVu0AddVector(auStack_d0,auStack_d0,&uStack_f0);
      sceVu0ScaleVector(0x3f000000,auStack_d0,auStack_d0);
      sceVu0AddVector(auStack_c0,&uStack_70,&uStack_80);
      sceVu0AddVector(auStack_c0,auStack_c0,&uStack_f0);
      sceVu0ScaleVector(0x3f000000,auStack_c0,auStack_c0);
      fVar4 = (float)RaceCar_GetSpeedKmh(*(undefined4 *)(param_1 + 0x7b0));
      fVar5 = (fVar4 - 8.0) / 240.0;
      fVar4 = 1.0;
      if (fVar5 <= 1.0) {
        fVar4 = fVar5;
      }
      fVar6 = 0.0;
      if ((0.0 <= fVar4) && (fVar6 = 1.0, fVar5 <= 1.0)) {
        fVar6 = fVar5;
      }
      *(float *)(param_1 + 0x7c4) =
           *(float *)(param_1 + 0x7c4) + ((1.0 - fVar6) - *(float *)(param_1 + 0x7c4)) / 16.0;
      fVar4 = (float)Demo_LookAt(auStack_e0,param_1 + 0x420,&uStack_a0,auStack_d0,&uStack_90);
      if (fVar4 <= 0.0) {
        fVar4 = (float)Demo_LookAt(auStack_e0,param_1 + 0x420,&uStack_70,auStack_c0,&uStack_80);
        if (0.0 < fVar4) {
          Demo_LookAtSimple(auStack_e0,&uStack_70,auStack_c0,&uStack_80);
          fVar5 = (float)sceVu0InnerProduct(auStack_e0,auStack_b0);
          sceVu0ScaleVector((fVar4 / fVar5) * 0.85 * *(float *)(param_1 + 0x7c4),auStack_e0,
                            auStack_b0);
          sceVu0AddVector(param_1 + 0x420,param_1 + 0x420,auStack_e0);
          *(float *)(param_1 + 0x424) =
               (*(float *)(param_1 + 0x424) + 0.0) -
               (fVar4 / fVar5) * 0.15 * *(float *)(param_1 + 0x7c4);
        }
      }
      else {
        Demo_LookAtSimple(auStack_e0,&uStack_a0,auStack_d0,&uStack_90);
        fVar5 = (float)sceVu0InnerProduct(auStack_e0,auStack_b0);
        sceVu0ScaleVector((fVar4 / fVar5) * 0.85 * *(float *)(param_1 + 0x7c4),auStack_e0,auStack_b0
                         );
        sceVu0AddVector(param_1 + 0x420,param_1 + 0x420,auStack_e0);
        *(float *)(param_1 + 0x424) =
             (fVar4 / fVar5) * 0.15 * *(float *)(param_1 + 0x7c4) +
             *(float *)(param_1 + 0x424) + 0.0;
      }
    }
  }
  return;
}

// 0x001847f0  size 0x8
void Cam_Nop(void)

{
  return;
}

// 0x00184800  size 0x64
int Cam_GetTargetBodyB(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x7b4);
  while ((iVar2 = RaceCar_Get(iVar3), iVar2 == 0 || (iVar2 != iVar1))) {
    iVar3 = iVar3 + 1;
    if (2 < iVar3) {
      return 0;
    }
  }
  return iVar3;
}

// 0x00184870  size 0x64
int Cam_GetTargetBodyA(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x7b0);
  while ((iVar2 = RaceCar_Get(iVar3), iVar2 == 0 || (iVar2 != iVar1))) {
    iVar3 = iVar3 + 1;
    if (2 < iVar3) {
      return 0;
    }
  }
  return iVar3;
}

// 0x001848e0  size 0x8
void Cam_NopB(void)

{
  return;
}

// 0x001848f0  size 0x8
void Cam_ResetTimer(int param_1)

{
  *(undefined4 *)(param_1 + 0x500) = 0;
  return;
}

// 0x00184900  size 0x214
void Cam_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x500) = 0;
  *(undefined1 *)(iVar2 + 0x4f9) = 1;
  Cam_SetPitch(((float)uRam0038804c * 1.9209821) / 2.0,param_1);
  Cam_SetYaw(0,param_1);
  *(undefined4 *)(iVar2 + 0x4e8) = 0x3f000000;
  uRam004311a0 = 0x3f000000;
  *(undefined4 *)(iVar2 + 0x4ec) = *(undefined4 *)(iVar2 + 0x4e0);
  *(undefined4 *)(iVar2 + 0x4f0) = *(undefined4 *)(iVar2 + 0x4e4);
  *(undefined4 *)(iVar2 + 0x4f4) = *(undefined4 *)(iVar2 + 0x4e8);
  *(undefined4 *)(iVar2 + 0xa8) = uRam004311a4;
  uVar1 = uRam004322e4;
  *(undefined4 *)(iVar2 + 0x168) = uRam004322e4;
  *(undefined4 *)(iVar2 + 0x108) = uVar1;
  *(undefined4 *)(iVar2 + 0x1c8) = uRam004328a4;
  *(undefined4 *)(iVar2 + 0x228) = uRam00433424;
  *(undefined4 *)(iVar2 + 0x288) = 0x459c4000;
  *(undefined4 *)(iVar2 + 0x2e8) = 0x459c4000;
  *(undefined4 *)(iVar2 + 0x348) = 0x459c4000;
  *(undefined4 *)(iVar2 + 0x3a8) = uRam004311a4;
  *(undefined4 *)(iVar2 + 0x408) = uRam004311a4;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 0x240) = 0;
  *(undefined4 *)(iVar2 + 0xc0) = 1;
  *(undefined4 *)(iVar2 + 0x120) = 0;
  *(undefined4 *)(iVar2 + 0x180) = 1;
  *(undefined4 *)(iVar2 + 0x1e0) = 1;
  *(undefined4 *)(iVar2 + 0x2a0) = 1;
  *(undefined4 *)(iVar2 + 0x360) = 0;
  *(undefined4 *)(iVar2 + 0x3c0) = 0;
  *(undefined4 *)(iVar2 + 0x4b0) = 0;
  *(undefined4 *)(iVar2 + 0x4b4) = 0;
  *(undefined4 *)(iVar2 + 0x4b8) = 0;
  *(undefined4 *)(iVar2 + 0x4bc) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x7c4) = 0;
  *(undefined4 *)(iVar2 + 0x7c8) = 0;
  sceVu0CopyVector(iVar2 + 0x470,0x3634f0);
  sceVu0CopyVector(iVar2 + 0x480,0x363500);
  sceVu0CopyVector(iVar2 + 0x490,0x363510);
  Cam_SetMode(param_1,*(undefined1 *)(iVar2 + 0x4f9));
  return;
}

// 0x00184b20  size 0xf4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 11 callers */

void Cam_SetupViewport(undefined8 param_1,uint param_2,byte param_3)

{
  int iVar1;
  uint *puVar2;
  
  if ((param_3 == 0) && (iRam0036f1f8 != 0)) {
    puVar2 = (uint *)(*(int *)((param_2 & 0xff) * 4 + _g_Loading + 0x14) + 0x3c0);
  }
  else {
    puVar2 = (uint *)(*(int *)((param_2 & 0xff) * 4 + _g_Loading + 0x14) + (uint)param_3 * 0x60 +
                     0x60);
  }
  sceVu0CopyVector(param_1,puVar2 + 4);
  iVar1 = (int)param_1;
  sceVu0CopyVector(iVar1 + 0x10,puVar2 + 8);
  sceVu0CopyVector(iVar1 + 0x20,puVar2 + 0xc);
  *(uint *)(iVar1 + 0x8c) = puVar2[0x11];
  *(uint *)(iVar1 + 0xa4) = puVar2[0x12];
  *(uint *)(iVar1 + 0xcc) = puVar2[0x15];
  *(uint *)(iVar1 + 0xa8) = puVar2[0x13];
  *(uint *)(iVar1 + 0xac) = puVar2[0x14];
  *(uint *)(iVar1 + 0x30) = puVar2[0x10];
  *(uint *)(iVar1 + 0xb4) = (uint)((*puVar2 & 1) != 0);
  Camera_Init(param_1);
  return;
}

// 0x00184c20  size 0x78
void Cam_SetPositionAndTarget
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  sceVu0CopyVector(iVar1 + 0x420);
  sceVu0CopyVector(iVar1 + 0x430,param_3);
  sceVu0CopyVector(iVar1 + 0x440,param_4);
  sceVu0CopyVector(iVar1 + 0x450,param_5);
  Cam_ApplyLookAt(param_1);
  return;
}

// 0x00184ca0  size 0x280
void Cam_ApplyLookAt(int param_1)

{
  sceVu0CopyVector(param_1 + 0x70,param_1 + 0x420);
  sceVu0CopyVector(param_1 + 0x80,param_1 + 0x430);
  sceVu0CopyVector(param_1 + 0x90,param_1 + 0x440);
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
  sceVu0SubVector(param_1 + 0x260,param_1 + 0x430,param_1 + 0x420);
  *(undefined4 *)(param_1 + 0x26c) = 0x3f800000;
  sceVu0CopyVector(param_1 + 0x270,param_1 + 0x440);
  sceVu0CopyVector(param_1 + 0x2b0,param_1 + 0x250);
  sceVu0SubVector(param_1 + 0x2c0,param_1 + 0x260,param_1 + 0x250);
  maybe_sceVu0ScaleVectorXYZ(0xbf800000,param_1 + 0x2c0,param_1 + 0x260);
  sceVu0AddVector(param_1 + 0x2c0,param_1 + 0x2c0,param_1 + 0x2b0);
  sceVu0CopyVector(param_1 + 0x2d0,param_1 + 0x270);
  sceVu0CopyVector(param_1 + 0x130,param_1 + 0x420);
  sceVu0CopyVector(param_1 + 0x140,param_1 + 0x430);
  sceVu0CopyVector(param_1 + 0x150,param_1 + 0x440);
  sceVu0CopyVector(param_1 + 0xd0,param_1 + 0x420);
  sceVu0CopyVector(param_1 + 0xe0,param_1 + 0x430);
  sceVu0CopyVector(param_1 + 0xf0,param_1 + 0x440);
  sceVu0CopyVector(param_1 + 400,param_1 + 0x450);
  sceVu0CopyVector(param_1 + 0x1a0,param_1 + 0x420);
  sceVu0CopyVector(param_1 + 0x1b0,param_1 + 0x440);
  *(float *)(param_1 + 0x194) = *(float *)(param_1 + 0x194) + 0.5;
  *(float *)(param_1 + 0x1a4) = *(float *)(param_1 + 0x1a4) + -1.57;
  sceVu0SubVector(param_1 + 0x200,param_1 + 0x430,param_1 + 0x460);
  sceVu0Normalize(param_1 + 0x200,param_1 + 0x200);
  sceVu0ScaleVector(0xbf800000,param_1 + 0x200,param_1 + 0x200);
  sceVu0AddVector(param_1 + 0x200,param_1 + 0x200,param_1 + 0x460);
  sceVu0CopyVector(param_1 + 0x1f0,param_1 + 0x460);
  sceVu0CopyVector(param_1 + 0x210,param_1 + 0x440);
  sceVu0CopyVector(param_1 + 0x310,param_1 + 0x420);
  sceVu0CopyVector(param_1 + 800,param_1 + 0x430);
  sceVu0CopyVector(param_1 + 0x330,param_1 + 0x440);
  sceVu0CopyVector(param_1 + 0x370,param_1 + 0x420);
  sceVu0CopyVector(param_1 + 0x380,param_1 + 0x430);
  sceVu0CopyVector(param_1 + 0x390,param_1 + 0x440);
  sceVu0CopyVector(param_1 + 0x3d0,param_1 + 0x420);
  sceVu0CopyVector(param_1 + 0x3e0,param_1 + 0x430);
  sceVu0CopyVector(param_1 + 0x3f0,param_1 + 0x440);
  sceVu0SubVector(param_1 + 0x4b0,param_1 + 0x420,param_1 + 0x4c0);
  sceVu0CopyVector(param_1 + 0x4c0,param_1 + 0x420);
  return;
}

// 0x00184f20  size 0x28
void Cam_NormalizeDirection(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sceVu0InnerProduct(param_1 + 0x4b0,param_1 + 0x4b0);
  maybe_Vu0_SqrtQ(uVar1);
  return;
}

// 0x00184f50  size 0x10
void Cam_SetFov(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x4e8) = param_1;
  uRam004311a0 = param_1;
  return;
}

// 0x00184f60  size 0xd0
/* wraps to [0, 2pi] */

void Cam_SetYaw(float param_1,int param_2)

{
  float fVar1;
  
  for (param_1 = param_1 + 3.1415927; 6.2831855 < param_1; param_1 = param_1 - 6.2831855) {
  }
  for (; param_1 < 0.0; param_1 = param_1 + 6.2831855) {
  }
  param_1 = param_1 - 3.1415927;
  *(float *)(param_2 + 0x4e0) = param_1;
  *(float *)(param_2 + 0xa0) = param_1;
  *(float *)(param_2 + 0x280) = param_1;
  *(float *)(param_2 + 0x100) = param_1;
  *(float *)(param_2 + 0x160) = param_1;
  fVar1 = -param_1;
  *(float *)(param_2 + 0x1c0) = fVar1;
  *(float *)(param_2 + 0x220) = fVar1;
  *(float *)(param_2 + 0x2e0) = fVar1;
  *(float *)(param_2 + 0x340) = param_1;
  *(float *)(param_2 + 0x3a0) = param_1;
  *(float *)(param_2 + 0x400) = param_1;
  return;
}

// 0x00185030  size 0x13c
/* 10 callers */

void Cam_SetPitch(float param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = uRam00432870;
  uVar1 = (ulong)uRam004333f0;
  fVar4 = param_1 / (float)uRam00431170;
  fVar3 = (float)uRam00432870 * fVar4;
  *(float *)(param_2 + 0x4e4) = param_1;
  *(float *)(param_2 + 0xa4) = param_1;
  *(float *)(param_2 + 0x284) = param_1;
  *(float *)(param_2 + 0x104) = fVar3;
  *(float *)(param_2 + 0x164) = fVar3;
  *(float *)(param_2 + 0x1c4) = (float)uVar2 / 4.0;
  *(float *)(param_2 + 0x224) = ((float)uVar1 * fVar4) / 2.0;
  *(float *)(param_2 + 0x2e4) = fVar3;
  *(float *)(param_2 + 0x344) = param_1;
  *(float *)(param_2 + 0x3a4) = fVar4 * 64.0;
  *(float *)(param_2 + 0x404) = param_1;
  return;
}

// 0x00185170  size 0x34
void Cam_DistanceTo(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x420) - *param_2;
  fVar2 = *(float *)(param_1 + 0x424) - param_2[1];
  fVar1 = *(float *)(param_1 + 0x428) - param_2[2];
  maybe_Vu0_SqrtQ(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  return;
}

// 0x001851b0  size 0x15c
void Cam_SetTarget(undefined8 param_1,long param_2)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar6 = (undefined4 *)param_1;
  iVar7 = 8;
  puVar9 = puVar6 + 0x10;
  puVar8 = puVar6 + 0x20;
  puVar6[4] = *puVar6;
  puVar6[5] = puVar6[1];
  puVar6[6] = puVar6[2];
  puVar6[7] = puVar6[3];
  puVar6[0xc] = puVar6[8];
  puVar6[0xd] = puVar6[9];
  puVar6[0xe] = puVar6[10];
  puVar6[0xf] = puVar6[0xb];
  do {
    iVar7 = iVar7 + -1;
    uVar3 = puVar9[1];
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 2;
    puVar8[1] = uVar3;
    puVar8 = puVar8 + 2;
  } while (0 < iVar7);
  puVar6[0x34] = puVar6[0x30];
  puVar6[0x35] = puVar6[0x31];
  puVar6[0x36] = puVar6[0x32];
  puVar6[0x37] = puVar6[0x33];
  if (param_2 != 0) {
    Cam_GetCarAttachPoint(param_1,puVar6 + 8,puVar6 + 0x10,puVar6 + 0x30,param_2);
    puVar2 = (undefined1 *)RaceCar_GetTracker(param_2);
    *(undefined1 *)(puVar6 + 0x38) = *puVar2;
    uVar1 = *(undefined2 *)(puVar2 + 4);
    *(undefined2 *)((int)puVar6 + 0xe2) = *(undefined2 *)(puVar2 + 2);
    *(undefined2 *)(puVar6 + 0x39) = uVar1;
    uVar1 = *(undefined2 *)(puVar2 + 8);
    *(undefined2 *)((int)puVar6 + 0xe6) = *(undefined2 *)(puVar2 + 6);
    *(undefined2 *)(puVar6 + 0x3a) = uVar1;
    *(undefined2 *)((int)puVar6 + 0xea) = *(undefined2 *)(puVar2 + 10);
    puVar6[0x3b] = *(undefined4 *)(puVar2 + 0xc);
    uVar3 = *(undefined4 *)(puVar2 + 0x14);
    uVar4 = *(undefined4 *)(puVar2 + 0x18);
    uVar5 = *(undefined4 *)(puVar2 + 0x1c);
    puVar6[0x3c] = *(undefined4 *)(puVar2 + 0x10);
    puVar6[0x3d] = uVar3;
    puVar6[0x3e] = uVar4;
    puVar6[0x3f] = uVar5;
    uVar3 = *(undefined4 *)(puVar2 + 0x24);
    uVar4 = *(undefined4 *)(puVar2 + 0x28);
    uVar5 = *(undefined4 *)(puVar2 + 0x2c);
    puVar6[0x40] = *(undefined4 *)(puVar2 + 0x20);
    puVar6[0x41] = uVar3;
    puVar6[0x42] = uVar4;
    puVar6[0x43] = uVar5;
    uVar3 = *(undefined4 *)(puVar2 + 0x34);
    uVar4 = *(undefined4 *)(puVar2 + 0x38);
    uVar5 = *(undefined4 *)(puVar2 + 0x3c);
    puVar6[0x44] = *(undefined4 *)(puVar2 + 0x30);
    puVar6[0x45] = uVar3;
    puVar6[0x46] = uVar4;
    puVar6[0x47] = uVar5;
    puVar6[0x48] = *(undefined4 *)(puVar2 + 0x40);
    puVar6[0x49] = *(undefined4 *)(puVar2 + 0x44);
    *(undefined1 *)(puVar6 + 0x4a) = puVar2[0x48];
    uVar3 = *(undefined4 *)(puVar2 + 0x54);
    uVar4 = *(undefined4 *)(puVar2 + 0x58);
    uVar5 = *(undefined4 *)(puVar2 + 0x5c);
    puVar6[0x4c] = *(undefined4 *)(puVar2 + 0x50);
    puVar6[0x4d] = uVar3;
    puVar6[0x4e] = uVar4;
    puVar6[0x4f] = uVar5;
    puVar6[0x50] = *(undefined4 *)(puVar2 + 0x60);
    puVar6[0x51] = *(undefined4 *)(puVar2 + 100);
  }
  return;
}

// 0x00185348  size 0x8
/* screen record 0x363568 */

undefined8 screc363568_exit_sub_00185348(void)

{
  return 0;
}

// 0x00185350  size 0x8
/* screen record 0x363574 */

undefined4 screc363574_enter_sub_00185350(void)

{
  return 2;
}

// 0x00185358  size 0x8
/* screen record 0x363574 */

undefined4 screc363574_update_sub_00185358(void)

{
  return 4;
}

// 0x00185360  size 0x8
/* screen record 0x363574 */

undefined4 screc363574_exit_sub_00185360(void)

{
  return 6;
}

// 0x00185368  size 0x8
/* screen record 0x363580 */

undefined4 screc363580_enter_sub_00185368(void)

{
  return 8;
}

// 0x00185370  size 0x8
/* screen record 0x363580 */

undefined4 screc363580_update_sub_00185370(void)

{
  return 10;
}

// 0x00185378  size 0x8
/* screen record 0x363580 */

undefined4 screc363580_exit_sub_00185378(void)

{
  return 0xc;
}

// 0x00185380  size 0x8
undefined4 Game_Nop_2(void)

{
  return 0xe;
}

// 0x001853b8  size 0x8
/* screen record 0x363550 */

undefined4 screc363550_enter_sub_001853b8(void)

{
  return 1;
}

// 0x001853c0  size 0x8
/* screen record 0x363550 */

undefined4 screc363550_update_sub_001853c0(void)

{
  return 3;
}

// 0x001853c8  size 0x8
/* screen record 0x363550 */

undefined4 screc363550_exit_sub_001853c8(void)

{
  return 5;
}

// 0x001853d0  size 0x8
/* screen record 0x36355c */

undefined4 screc36355c_enter_sub_001853d0(void)

{
  return 7;
}

// 0x001853d8  size 0x8
/* screen record 0x36355c */

undefined4 screc36355c_update_sub_001853d8(void)

{
  return 9;
}

// 0x001853e0  size 0x8
/* screen record 0x36355c */

undefined4 screc36355c_exit_sub_001853e0(void)

{
  return 0xb;
}

// 0x001853e8  size 0x8
/* screen record 0x363568 */

undefined4 screc363568_enter_sub_001853e8(void)

{
  return 0xd;
}

// 0x001853f0  size 0x10
/* screen record 0x363568 */

undefined4 screc363568_update_sub_001853f0(void)

{
  return 0xf;
}

// 0x00185410  size 0x4a8
void Cam_UpdateReplay(short *param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_80 [28];
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_44;
  short sStack_24;
  short sStack_22;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  short sStack_c;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  undefined4 uStack_4;
  
  uStack_4 = param_3;
  fVar1 = (float)Cam_ComputeReplayOffset(auStack_80,param_3);
  fVar2 = (float)sceVu0InnerProduct(auStack_80,param_2);
  Demo_GetRoadPoint(&sStack_8,uStack_4,1);
  uStack_4 = CONCAT22(sStack_6,sStack_8);
  if (sStack_8 < 0) {
    *param_1 = sStack_8;
    param_1[1] = sStack_6;
  }
  else {
    fVar3 = (float)Cam_ComputeReplayOffset(auStack_80,uStack_4);
    fVar4 = (float)sceVu0InnerProduct(auStack_80,param_2);
    fVar3 = fVar3 - fVar4;
    Demo_GetRoadPoint(&sStack_c,uStack_4,0xfffffffffffffffe);
    uStack_4 = CONCAT22(sStack_a,sStack_c);
    if (sStack_c < 0) {
      *param_1 = sStack_c;
      param_1[1] = sStack_a;
    }
    else {
      fVar4 = (float)Cam_ComputeReplayOffset(auStack_80,uStack_4);
      fVar5 = (float)sceVu0InnerProduct(auStack_80,param_2);
      fVar4 = fVar4 - fVar5;
      Demo_GetRoadPoint(&sStack_10,uStack_4,1);
      uStack_54 = CONCAT22(sStack_e,sStack_10);
      uStack_44 = uStack_54;
      fVar1 = fVar1 - fVar2;
      if (sStack_10 < 0) {
        *param_1 = sStack_10;
        param_1[1] = sStack_e;
      }
      else {
        do {
          do {
            while( true ) {
              fVar2 = fVar1;
              fVar1 = fVar3;
              if ((0.0 <= fVar1) && (fVar2 <= 0.0)) {
                Demo_GetRoadPoint(&sStack_14,uStack_44,1);
                *param_1 = sStack_14;
                param_1[1] = sStack_12;
                return;
              }
              if ((0.0 <= fVar2) && (fVar4 <= 0.0)) {
                *param_1 = (short)uStack_44;
                param_1[1] = uStack_44._2_2_;
                return;
              }
              if (0.0 <= fVar1) break;
              Demo_GetRoadPoint(&sStack_18,uStack_44,2);
              uStack_4 = CONCAT22(sStack_16,sStack_18);
              if (sStack_18 < 0) {
                *param_1 = sStack_18;
                param_1[1] = sStack_16;
                return;
              }
              fVar3 = (float)Cam_ComputeReplayOffset(auStack_80,uStack_4);
              fVar4 = (float)sceVu0InnerProduct(auStack_80,param_2);
              fVar3 = fVar3 - fVar4;
              Demo_GetRoadPoint(&sStack_1c,uStack_4,0xffffffffffffffff);
              uStack_5c = CONCAT22(sStack_1a,sStack_1c);
              uStack_44 = uStack_5c;
              fVar4 = fVar2;
              if (sStack_1c < 0) {
                *param_1 = sStack_1c;
                param_1[1] = sStack_1a;
                return;
              }
            }
            fVar3 = fVar1;
            fVar1 = fVar2;
          } while (fVar4 <= 0.0);
          Demo_GetRoadPoint(&sStack_20,uStack_44,0xfffffffffffffffe);
          uStack_4 = CONCAT22(sStack_1e,sStack_20);
          if (sStack_20 < 0) {
            *param_1 = sStack_20;
            param_1[1] = sStack_1e;
            return;
          }
          fVar5 = (float)Cam_ComputeReplayOffset(auStack_80,uStack_4);
          fVar6 = (float)sceVu0InnerProduct(auStack_80,param_2);
          Demo_GetRoadPoint(&sStack_24,uStack_4,1);
          uStack_64 = CONCAT22(sStack_22,sStack_24);
          uStack_44 = uStack_64;
          fVar3 = fVar2;
          fVar1 = fVar4;
          fVar4 = fVar5 - fVar6;
        } while (-1 < sStack_24);
        *param_1 = sStack_24;
        param_1[1] = sStack_22;
      }
    }
  }
  return;
}

// 0x001858c0  size 0x140
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Cam_ComputeReplayOffset(undefined8 param_1,uint param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short sStack_42;
  undefined4 uStack_40;
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
  undefined1 auStack_10 [16];
  
  sStack_42 = (short)(param_2 >> 0x10);
  uStack_40 = DAT_0030b9d0;
  uStack_3c = DAT_0030b9d4;
  uStack_38 = DAT_0030b9d8;
  iVar3 = (param_2 & 0xffff) * 4;
  uStack_34 = DAT_0030b9dc;
  psVar2 = *(short **)(*(int *)(_g_RoadData + 4) + iVar3);
  psVar2 = psVar2 + *psVar2 * 0x10 + sStack_42 * 6 + 0x3e;
  uStack_20 = *(undefined4 *)psVar2;
  uStack_1c = *(undefined4 *)(psVar2 + 2);
  uStack_18 = *(undefined4 *)(psVar2 + 4);
  uStack_14 = 0x3f800000;
  psVar2 = *(short **)(*(int *)(_g_RoadData + 4) + iVar3);
  sVar1 = *psVar2;
  psVar2 = psVar2 + sVar1 * 0x14 + sVar1 * 2 + sStack_42 * 6 + 0x3e;
  uStack_30 = *(undefined4 *)psVar2;
  uStack_2c = *(undefined4 *)(psVar2 + 2);
  uStack_28 = *(undefined4 *)(psVar2 + 4);
  uStack_24 = 0x3f800000;
  sceVu0SubVector(auStack_10,&uStack_30,&uStack_20);
  sceVu0OuterProduct(param_1,&uStack_40,auStack_10);
  sceVu0Normalize(param_1,param_1);
  sceVu0InnerProduct(param_1,&uStack_30);
  return;
}

// 0x00185a00  size 0x148
void Cam_GetCarAttachPoint(long param_1,long param_2,long param_3,undefined4 *param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_1 != 0) {
    uVar1 = PhysBody_GetWorldMatrix(*(undefined4 *)(param_5 + 0x154));
    sceVu0CopyVector(param_1,uVar1);
  }
  if (param_2 != 0) {
    uStack_8 = 0;
    uStack_4 = 0x3f800000;
    iVar2 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    do {
      Vec3_AddInPlace(&uStack_10,param_5 + iVar2 * 0x140 + 0x1f0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    Vec3_DivInPlace(0x40800000,&uStack_10);
    sceVu0CopyVector(param_2,&uStack_10);
  }
  if (param_3 != 0) {
    uVar1 = PhysBody_GetRotation(*(undefined4 *)(param_5 + 0x154));
    Mat34_Identity(auStack_50);
    Quat_ToMat33(auStack_50,uVar1);
    sceVu0CopyVector(param_3,auStack_50);
    iVar2 = (int)param_3;
    sceVu0CopyVector(iVar2 + 0x10,auStack_40);
    sceVu0CopyVector(iVar2 + 0x20,auStack_30);
    sceVu0CopyVector(iVar2 + 0x30,auStack_20);
    puVar3 = (undefined4 *)uVar1;
    *param_4 = *puVar3;
    param_4[1] = puVar3[1];
    param_4[2] = puVar3[2];
    param_4[3] = puVar3[3];
  }
  return;
}

// 0x00185b50  size 0xe4
void Cam_FindReplayKey(uint param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  puVar2 = param_2 + 4;
  uVar1 = param_2[1];
  puVar4 = puVar2 + *param_2 * 5;
  if (*param_2 == 0) {
    uVar1 = param_4[3];
  }
  else {
    do {
      Demo_SetTrack(puVar2,puVar4,puVar4 + uVar1 * 0x36);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 5;
    } while (uVar3 < *param_2);
    uVar1 = param_4[3];
  }
  if (uVar1 == param_1) {
    *param_4 = *param_4 & 0xfffffff7;
  }
  return;
}

// 0x00185c40  size 0x260
void Cam_UpdateTrackside(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_4;
  
  piVar7 = (int *)param_2;
  piVar9 = piVar7 + 0x144;
  if (*piVar7 != 0) {
    uStack_4 = *(undefined4 *)((int)piVar7 + 0x5f6);
    iVar3 = Demo_ProjectOnRoad(uStack_4);
    uVar4 = Cam_FindKeyBefore(*piVar7,piVar7[1],iVar3);
    if (uVar4 != 0) {
      puVar8 = (uint *)uVar4;
      uVar6 = *puVar8;
      uVar1 = puVar8[1];
      fVar10 = (float)Demo_EvalCameraPath(uStack_4,piVar9);
      fVar11 = (float)(int)(uVar1 - uVar6);
      Cam_InterpolatePath((float)(iVar3 - uVar6) / fVar11 + fVar10 / fVar11,
                          puVar8[4] + piVar7[3] * 0xd8,auStack_70,piVar9);
      Cam_SetPitch(fStack_2c,param_2);
      Cam_SetYaw(uStack_30,param_2);
      fRam004311a0 = (float)piVar7[0x13d] * (fStack_2c / (float)piVar7[0x13c]);
      piVar7[0x13a] = (int)fRam004311a0;
      sceVu0CopyVector(piVar7 + 0x108,auStack_60);
      sceVu0CopyVector(piVar7 + 0x10c,auStack_50);
      sceVu0CopyVector(piVar7 + 0x110,piVar7 + 0x124);
      Cam_UpdateTargetFromCar(param_2);
      iVar2 = piVar7[2];
      if (iVar3 != iVar2) {
        if (iVar2 < iVar3) {
          uVar6 = puVar8[1];
          if (puVar8[1] <= *puVar8) {
            uVar6 = *puVar8;
          }
          iRam0036f220 = uVar6 + 1;
        }
        else if (iVar3 < iVar2) {
          uVar6 = puVar8[1];
          if (*puVar8 <= puVar8[1]) {
            uVar6 = *puVar8;
          }
          iRam0036f220 = uVar6 - 1;
        }
        uVar5 = Cam_FindKeyBefore(*piVar7,piVar7[1],iRam0036f220);
        if (uVar5 == 0) {
          sceVu0CopyVector(piVar7 + 0x134,auStack_60);
          return;
        }
        if (uVar5 < uVar4) {
          uVar12 = 0x3f800000;
        }
        else {
          uVar12 = 0;
        }
        Cam_InterpolatePath(uVar12,*(int *)((int)uVar5 + 0x10) + piVar7[3] * 0xd8,auStack_70,piVar9)
        ;
        sceVu0CopyVector(piVar7 + 0x134,auStack_60);
      }
      piVar7[2] = iVar3;
    }
  }
  return;
}

// 0x00185ea0  size 0x260
void Cam_UpdateTracksideAlt(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_4;
  
  piVar7 = (int *)param_2;
  piVar9 = piVar7 + 0x144;
  if (*piVar7 != 0) {
    uStack_4 = *(undefined4 *)((int)piVar7 + 0x5f6);
    iVar3 = Demo_ProjectOnRoad(uStack_4);
    uVar4 = Cam_FindKeyAfter(*piVar7,piVar7[1],iVar3);
    if (uVar4 != 0) {
      puVar8 = (uint *)uVar4;
      uVar6 = *puVar8;
      uVar1 = puVar8[1];
      fVar10 = (float)Demo_EvalCameraPath(uStack_4,piVar9);
      fVar11 = (float)(int)(uVar1 - uVar6);
      Cam_InterpolatePathAlt
                ((float)(iVar3 - uVar6) / fVar11 + fVar10 / fVar11,puVar8[4] + piVar7[3] * 0xd8,
                 auStack_70,piVar9);
      Cam_SetPitch(fStack_2c,param_2);
      Cam_SetYaw(uStack_30,param_2);
      fRam004311a0 = (float)piVar7[0x13d] * (fStack_2c / (float)piVar7[0x13c]);
      piVar7[0x13a] = (int)fRam004311a0;
      sceVu0CopyVector(piVar7 + 0x108,auStack_60);
      sceVu0CopyVector(piVar7 + 0x10c,auStack_50);
      sceVu0CopyVector(piVar7 + 0x110,piVar7 + 0x124);
      Cam_UpdateTargetFromCar(param_2);
      iVar2 = piVar7[2];
      if (iVar3 != iVar2) {
        if (iVar2 < iVar3) {
          uVar6 = puVar8[1];
          if (puVar8[1] <= *puVar8) {
            uVar6 = *puVar8;
          }
          iRam0036f224 = uVar6 + 1;
        }
        else if (iVar3 < iVar2) {
          uVar6 = puVar8[1];
          if (*puVar8 <= puVar8[1]) {
            uVar6 = *puVar8;
          }
          iRam0036f224 = uVar6 - 1;
        }
        uVar5 = Cam_FindKeyAfter(*piVar7,piVar7[1],iRam0036f224);
        if (uVar5 == 0) {
          sceVu0CopyVector(piVar7 + 0x134,auStack_60);
          return;
        }
        if (uVar5 < uVar4) {
          uVar12 = 0x3f800000;
        }
        else {
          uVar12 = 0;
        }
        Cam_InterpolatePathAlt
                  (uVar12,*(int *)((int)uVar5 + 0x10) + piVar7[3] * 0xd8,auStack_70,piVar9);
        sceVu0CopyVector(piVar7 + 0x134,auStack_60);
      }
      piVar7[2] = iVar3;
    }
  }
  return;
}

// 0x00186100  size 0x4c
uint * Cam_FindKeyBefore(uint *param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  
  while( true ) {
    bVar1 = param_3 < *param_1;
    if (!bVar1) {
      bVar1 = param_1[1] <= param_3;
    }
    if ((bool)(bVar1 ^ 1)) break;
    param_1 = param_1 + 5;
    if (param_2 < param_1) {
      return (uint *)0x0;
    }
  }
  return param_1;
}

// 0x00186150  size 0x4c
uint * Cam_FindKeyAfter(uint *param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  
  while( true ) {
    bVar1 = param_3 < *param_1;
    if (!bVar1) {
      bVar1 = param_1[1] <= param_3;
    }
    if ((bool)(bVar1 ^ 1)) break;
    param_1 = param_1 + 5;
    if (param_2 < param_1) {
      return (uint *)0x0;
    }
  }
  return param_1;
}

// 0x001861a0  size 0x4ec
void Cam_InterpolatePath(float param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  fVar5 = 0.0;
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
    fVar5 = param_1;
  }
  fVar1 = (float)Demo_EvalKeyB(fVar5,param_2 + 8);
  *(float *)(param_3 + 0x40) = fVar1 * 0.017453292;
  fVar1 = (float)Demo_EvalKeyB(fVar5,param_2 + 0x10);
  *(float *)(param_3 + 0x44) = ((float)uRam00431170 * 50.0) / fVar1;
  uVar2 = Demo_EvalKeyA(fVar5,param_2 + 0x18);
  *(undefined4 *)(param_3 + 0x10) = uVar2;
  uVar2 = Demo_EvalKeyA(fVar5,param_2 + 0x20);
  *(undefined4 *)(param_3 + 0x14) = uVar2;
  uVar2 = Demo_EvalKeyA(fVar5,param_2 + 0x28);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  *(undefined4 *)(param_3 + 0x1c) = 0x3f800000;
  uVar2 = Demo_EvalKeyA(fVar5,param_2 + 0x78);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  uVar2 = Demo_EvalKeyA(fVar5,param_2 + 0x80);
  *(undefined4 *)(param_3 + 0x24) = uVar2;
  uVar2 = Demo_EvalKeyA(fVar5,param_2 + 0x88);
  *(undefined4 *)(param_3 + 0x28) = uVar2;
  *(undefined4 *)(param_3 + 0x2c) = 0x3f800000;
  fVar1 = (float)Demo_EvalKeyB(fVar5,param_2 + 0x48);
  if (fVar1 != 0.0) {
    fStack_40 = (float)Demo_EvalKeyA(fVar5,param_2 + 0x30);
    uStack_3c = Demo_EvalKeyA(fVar5,param_2 + 0x38);
    fVar4 = (float)Demo_EvalKeyA(fVar5,param_2 + 0x40);
    uStack_34 = 0x3f800000;
    fStack_38 = -fStack_40;
    fStack_40 = fVar4;
    sceVu0ApplyMatrix(&fStack_40,param_4 + 0x40,&fStack_40);
    sceVu0AddVector(&fStack_40,&fStack_40,param_4 + 0x20);
    sceVu0ScaleVector(fVar1,&fStack_40,&fStack_40);
    sceVu0ScaleVector(1.0 - fVar1,param_3 + 0x10,param_3 + 0x10);
    sceVu0AddVector(param_3 + 0x10,&fStack_40,param_3 + 0x10);
  }
  fVar1 = (float)Demo_EvalKeyB(fVar5,param_2 + 0xa8);
  if (fVar1 != 0.0) {
    fStack_50 = (float)Demo_EvalKeyA(fVar5,param_2 + 0x90);
    uStack_4c = Demo_EvalKeyA(fVar5,param_2 + 0x98);
    fVar4 = (float)Demo_EvalKeyA(fVar5,param_2 + 0xa0);
    uStack_44 = 0x3f800000;
    fStack_48 = -fStack_50;
    fStack_50 = fVar4;
    sceVu0ApplyMatrix(&fStack_50,param_4 + 0x40,&fStack_50);
    sceVu0AddVector(&fStack_50,&fStack_50,param_4 + 0x20);
    sceVu0ScaleVector(fVar1,&fStack_50,&fStack_50);
    sceVu0ScaleVector(1.0 - fVar1,param_3 + 0x20,param_3 + 0x20);
    sceVu0AddVector(param_3 + 0x20,&fStack_50,param_3 + 0x20);
  }
  fVar1 = (float)Demo_EvalKeyB(fVar5,param_2 + 0x68);
  if (fVar1 != 0.0) {
    fStack_30 = (float)Demo_EvalKeyA(fVar5,param_2 + 0x50);
    uStack_2c = Demo_EvalKeyA(fVar5,param_2 + 0x58);
    fVar4 = (float)Demo_EvalKeyA(fVar5,param_2 + 0x60);
    uStack_24 = 0x3f800000;
    fStack_28 = -fStack_30;
    fStack_30 = fVar4;
    fVar4 = (float)Demo_EvalKeyB(fVar5,param_2 + 0x70);
    iVar3 = (int)fVar4;
    Demo_FindRoadSection(&uStack_c,iVar3);
    uStack_4 = CONCAT22(uStack_a,uStack_c);
    Cam_ApplyOrbit(fVar4 - (float)iVar3,auStack_20,uStack_4,&fStack_30);
    sceVu0ScaleVector(fVar1,auStack_20,auStack_20);
    sceVu0ScaleVector(1.0 - fVar1,param_3 + 0x10,param_3 + 0x10);
    sceVu0AddVector(param_3 + 0x10,auStack_20,param_3 + 0x10);
  }
  fVar1 = (float)Demo_EvalKeyB(fVar5,param_2 + 200);
  if (fVar1 != 0.0) {
    fStack_30 = (float)Demo_EvalKeyA(fVar5,param_2 + 0xb0);
    uStack_2c = Demo_EvalKeyA(fVar5,param_2 + 0xb8);
    fVar4 = (float)Demo_EvalKeyA(fVar5,param_2 + 0xc0);
    uStack_24 = 0x3f800000;
    fStack_28 = -fStack_30;
    fStack_30 = fVar4;
    fVar5 = (float)Demo_EvalKeyB(fVar5,param_2 + 0xd0);
    Demo_FindRoadSection(&uStack_10,(int)fVar5);
    uStack_8 = CONCAT22(uStack_e,uStack_10);
    Cam_ApplyOrbit(fVar5 - (float)(int)fVar5,auStack_20,uStack_8,&fStack_30);
    sceVu0ScaleVector(fVar1,auStack_20,auStack_20);
    sceVu0ScaleVector(1.0 - fVar1,param_3 + 0x20,param_3 + 0x20);
    sceVu0AddVector(param_3 + 0x20,auStack_20,param_3 + 0x20);
  }
  return;
}

// 0x00186690  size 0x4ec
void Cam_InterpolatePathAlt(float param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  fVar5 = 0.0;
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
    fVar5 = param_1;
  }
  fVar1 = (float)Demo_EvalKeyD(fVar5,param_2 + 8);
  *(float *)(param_3 + 0x40) = fVar1 * 0.017453292;
  fVar1 = (float)Demo_EvalKeyD(fVar5,param_2 + 0x10);
  *(float *)(param_3 + 0x44) = ((float)uRam00431170 * 50.0) / fVar1;
  uVar2 = Demo_EvalKeyC(fVar5,param_2 + 0x18);
  *(undefined4 *)(param_3 + 0x10) = uVar2;
  uVar2 = Demo_EvalKeyC(fVar5,param_2 + 0x20);
  *(undefined4 *)(param_3 + 0x14) = uVar2;
  uVar2 = Demo_EvalKeyC(fVar5,param_2 + 0x28);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  *(undefined4 *)(param_3 + 0x1c) = 0x3f800000;
  uVar2 = Demo_EvalKeyC(fVar5,param_2 + 0x78);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  uVar2 = Demo_EvalKeyC(fVar5,param_2 + 0x80);
  *(undefined4 *)(param_3 + 0x24) = uVar2;
  uVar2 = Demo_EvalKeyC(fVar5,param_2 + 0x88);
  *(undefined4 *)(param_3 + 0x28) = uVar2;
  *(undefined4 *)(param_3 + 0x2c) = 0x3f800000;
  fVar1 = (float)Demo_EvalKeyD(fVar5,param_2 + 0x48);
  if (fVar1 != 0.0) {
    fStack_40 = (float)Demo_EvalKeyC(fVar5,param_2 + 0x30);
    uStack_3c = Demo_EvalKeyC(fVar5,param_2 + 0x38);
    fVar4 = (float)Demo_EvalKeyC(fVar5,param_2 + 0x40);
    uStack_34 = 0x3f800000;
    fStack_38 = -fStack_40;
    fStack_40 = fVar4;
    sceVu0ApplyMatrix(&fStack_40,param_4 + 0x40,&fStack_40);
    sceVu0AddVector(&fStack_40,&fStack_40,param_4 + 0x20);
    sceVu0ScaleVector(fVar1,&fStack_40,&fStack_40);
    sceVu0ScaleVector(1.0 - fVar1,param_3 + 0x10,param_3 + 0x10);
    sceVu0AddVector(param_3 + 0x10,&fStack_40,param_3 + 0x10);
  }
  fVar1 = (float)Demo_EvalKeyD(fVar5,param_2 + 0xa8);
  if (fVar1 != 0.0) {
    fStack_50 = (float)Demo_EvalKeyC(fVar5,param_2 + 0x90);
    uStack_4c = Demo_EvalKeyC(fVar5,param_2 + 0x98);
    fVar4 = (float)Demo_EvalKeyC(fVar5,param_2 + 0xa0);
    uStack_44 = 0x3f800000;
    fStack_48 = -fStack_50;
    fStack_50 = fVar4;
    sceVu0ApplyMatrix(&fStack_50,param_4 + 0x40,&fStack_50);
    sceVu0AddVector(&fStack_50,&fStack_50,param_4 + 0x20);
    sceVu0ScaleVector(fVar1,&fStack_50,&fStack_50);
    sceVu0ScaleVector(1.0 - fVar1,param_3 + 0x20,param_3 + 0x20);
    sceVu0AddVector(param_3 + 0x20,&fStack_50,param_3 + 0x20);
  }
  fVar1 = (float)Demo_EvalKeyD(fVar5,param_2 + 0x68);
  if (fVar1 != 0.0) {
    fStack_30 = (float)Demo_EvalKeyC(fVar5,param_2 + 0x50);
    uStack_2c = Demo_EvalKeyC(fVar5,param_2 + 0x58);
    fVar4 = (float)Demo_EvalKeyC(fVar5,param_2 + 0x60);
    uStack_24 = 0x3f800000;
    fStack_28 = -fStack_30;
    fStack_30 = fVar4;
    fVar4 = (float)Demo_EvalKeyD(fVar5,param_2 + 0x70);
    iVar3 = (int)fVar4;
    Demo_FindRoadSection(&uStack_c,iVar3);
    uStack_4 = CONCAT22(uStack_a,uStack_c);
    Cam_ApplyOrbit(fVar4 - (float)iVar3,auStack_20,uStack_4,&fStack_30);
    sceVu0ScaleVector(fVar1,auStack_20,auStack_20);
    sceVu0ScaleVector(1.0 - fVar1,param_3 + 0x10,param_3 + 0x10);
    sceVu0AddVector(param_3 + 0x10,auStack_20,param_3 + 0x10);
  }
  fVar1 = (float)Demo_EvalKeyD(fVar5,param_2 + 200);
  if (fVar1 != 0.0) {
    fStack_30 = (float)Demo_EvalKeyC(fVar5,param_2 + 0xb0);
    uStack_2c = Demo_EvalKeyC(fVar5,param_2 + 0xb8);
    fVar4 = (float)Demo_EvalKeyC(fVar5,param_2 + 0xc0);
    uStack_24 = 0x3f800000;
    fStack_28 = -fStack_30;
    fStack_30 = fVar4;
    fVar5 = (float)Demo_EvalKeyD(fVar5,param_2 + 0xd0);
    Demo_FindRoadSection(&uStack_10,(int)fVar5);
    uStack_8 = CONCAT22(uStack_e,uStack_10);
    Cam_ApplyOrbit(fVar5 - (float)(int)fVar5,auStack_20,uStack_8,&fStack_30);
    sceVu0ScaleVector(fVar1,auStack_20,auStack_20);
    sceVu0ScaleVector(1.0 - fVar1,param_3 + 0x20,param_3 + 0x20);
    sceVu0AddVector(param_3 + 0x20,auStack_20,param_3 + 0x20);
  }
  return;
}

// 0x00186b80  size 0x5c
void Cam_ApplyOrbit(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  Cam_ComputeOrbitMatrix(param_1,auStack_40,param_2);
  sceVu0ApplyMatrix(auStack_50,auStack_40,param_3);
  sceVu0AddVector(param_1,param_1,auStack_50);
  return;
}

// 0x00186be0  size 0x2f4
void Cam_ComputeOrbitMatrix(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  undefined4 uStack_114;
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_100 = DAT_0030ba40;
  uStack_fc = DAT_0030ba44;
  uStack_f8 = DAT_0030ba48;
  uStack_f4 = DAT_0030ba4c;
  Demo_GetRoadPoint(&uStack_4,param_4,0xffffffffffffffff);
  uStack_114 = CONCAT22(uStack_2,uStack_4);
  Cam_LoadPresetC(auStack_50,uStack_114);
  Demo_GetRoadPoint(&uStack_8,uStack_114,1);
  uStack_114 = CONCAT22(uStack_6,uStack_8);
  Cam_LoadPresetC(auStack_40,uStack_114);
  Cam_LoadPresetB(auStack_b0,uStack_114);
  Cam_LoadPresetA(auStack_d0,uStack_114);
  Demo_GetRoadPoint(&uStack_c,uStack_114,1);
  uStack_114 = CONCAT22(uStack_a,uStack_c);
  Cam_LoadPresetC(auStack_30,uStack_114);
  Cam_LoadPresetB(auStack_a0,uStack_114);
  Cam_LoadPresetA(auStack_c0,uStack_114);
  Demo_GetRoadPoint(&uStack_10,uStack_114,1);
  uStack_114 = CONCAT22(uStack_e,uStack_10);
  Cam_LoadPresetC(auStack_20,uStack_114);
  maybe_Vu0_EvalCurve(param_1,param_2,auStack_50,4,0x10);
  sceVu0SubVector(auStack_60,auStack_30,auStack_50);
  sceVu0SubVector(auStack_70,auStack_20,auStack_40);
  fVar1 = 1.0 - param_1;
  sceVu0ScaleVector(fVar1,auStack_60,auStack_60);
  sceVu0ScaleVector(param_1,auStack_70,auStack_70);
  sceVu0AddVector(auStack_80,auStack_60,auStack_70);
  sceVu0Normalize(auStack_80,auStack_80);
  sceVu0SubVector(auStack_f0,auStack_b0,auStack_d0);
  sceVu0SubVector(auStack_e0,auStack_a0,auStack_c0);
  sceVu0ScaleVector(fVar1,auStack_f0,auStack_f0);
  sceVu0ScaleVector(param_1,auStack_e0,auStack_e0);
  sceVu0AddVector(auStack_90,auStack_f0,auStack_e0);
  sceVu0Normalize(auStack_90,auStack_90);
  sceVu0OuterProduct(auStack_110,auStack_90,auStack_80);
  fVar1 = (float)sceVu0InnerProduct(auStack_110,&uStack_100);
  if (fVar1 < 0.0) {
    sceVu0ScaleVector(0xbf800000,auStack_90,auStack_90);
    sceVu0ScaleVector(0xbf800000,auStack_110,auStack_110);
  }
  Demo_ResetMatrix(param_3,auStack_80,auStack_110,auStack_90);
  return;
}

// 0x00186ee0  size 0x88
void Cam_LoadPresetA(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uStack_8;
  short sStack_6;
  int iStack_4;
  
  uStack_8 = (undefined2)param_2;
  sStack_6 = (short)((uint)param_2 >> 0x10);
  RoadData_GetSectionEnd(&iStack_4,uStack_8);
  iVar1 = sStack_6 * 0xc;
  *param_1 = *(undefined4 *)(iStack_4 + iVar1);
  param_1[1] = *(undefined4 *)(iVar1 + iStack_4 + 4);
  param_1[2] = *(undefined4 *)(iVar1 + iStack_4 + 8);
  param_1[3] = 0x3f800000;
  return;
}

// 0x00186f70  size 0x88
void Cam_LoadPresetB(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uStack_8;
  short sStack_6;
  int iStack_4;
  
  uStack_8 = (undefined2)param_2;
  sStack_6 = (short)((uint)param_2 >> 0x10);
  RoadData_GetSectionStart(&iStack_4,uStack_8);
  iVar1 = sStack_6 * 0xc;
  *param_1 = *(undefined4 *)(iStack_4 + iVar1);
  param_1[1] = *(undefined4 *)(iVar1 + iStack_4 + 4);
  param_1[2] = *(undefined4 *)(iVar1 + iStack_4 + 8);
  param_1[3] = 0x3f800000;
  return;
}

// 0x00187000  size 0x80
void Cam_LoadPresetC(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uStack_8;
  short sStack_6;
  int iStack_4;
  
  uStack_8 = (undefined2)param_2;
  sStack_6 = (short)((uint)param_2 >> 0x10);
  RoadData_GetSegmentTable(&iStack_4,uStack_8);
  iVar1 = sStack_6 * 0x20;
  *param_1 = *(undefined4 *)(iStack_4 + iVar1);
  param_1[1] = *(undefined4 *)(iVar1 + iStack_4 + 4);
  param_1[2] = *(undefined4 *)(iVar1 + iStack_4 + 8);
  param_1[3] = 0x3f800000;
  return;
}

// 0x00187080  size 0x834
void Cam_UpdateCollision(float *param_1,int *param_2,int *param_3,undefined4 param_4,char param_5)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  short *psVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  short *psVar16;
  uint uVar17;
  short *psVar18;
  int *piVar19;
  int iVar20;
  bool bVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  ushort *puVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  int iStack_250;
  short sStack_234;
  short sStack_232;
  undefined1 auStack_230 [256];
  int iStack_130;
  undefined1 auStack_120 [12];
  undefined4 uStack_114;
  undefined1 auStack_110 [12];
  undefined4 uStack_104;
  undefined1 auStack_100 [12];
  undefined4 uStack_f4;
  undefined1 auStack_f0 [12];
  undefined4 uStack_e4;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [4];
  float fStack_cc;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [4];
  float fStack_bc;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [4];
  float fStack_ac;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  undefined1 auStack_90 [12];
  undefined4 uStack_84;
  undefined1 auStack_80 [4];
  float fStack_7c;
  short sStack_10;
  ushort uStack_e;
  ushort uStack_c;
  float fStack_8;
  float fStack_4;
  
  sStack_234 = (short)param_4;
  sStack_232 = (short)((uint)param_4 >> 0x10);
  iVar7 = *(int *)(*(int *)(*param_3 + 4) + sStack_234 * 4);
  iVar22 = iVar7 + *(int *)(iVar7 + 0x40);
  iVar20 = iVar7 + *(int *)(iVar7 + 0x44) + sStack_232 * 0x1c;
  uVar5 = (uint)*(ushort *)(iVar20 + 4);
  puVar25 = (ushort *)(iVar7 + *(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar20 + 6) * 8);
  uVar8 = PhysContact_GetBodyA(param_2[3]);
  uVar9 = PhysContact_GetBodyB(param_2[3]);
  pfVar6 = (float *)0x8;
  pfVar15 = &fStack_8;
  pfVar3 = pfVar15;
  while (pfVar3 != (float *)0x0) {
    *(undefined1 *)pfVar15 = 0;
    pfVar15 = (float *)((int)pfVar15 + 1);
    pfVar6 = (float *)((int)pfVar6 + -1);
    pfVar3 = pfVar6;
  }
  param_2[7] = 0x3f800000;
  param_2[0xb] = 0x3f800000;
  Cam_GetShapeCenter(auStack_80,uVar9);
  uVar10 = PhysShape_GetCenter(uVar9);
  uVar11 = PhysShape_GetCenter(uVar8);
  sceVu0SubVector(auStack_90,uVar10,uVar11);
  maybe_Vu0_SetUnitW(auStack_a0);
  uStack_84 = 0x3f800000;
  iStack_250 = 0;
  if (uVar5 != 0) {
    pfVar15 = (float *)(param_2 + 0xd);
    do {
      uVar17 = param_2[0x9b];
      bVar21 = true;
      if (0x40 < uVar17) {
        uVar17 = 0x40;
      }
      psVar16 = (short *)0x6;
      psVar18 = &sStack_10;
      psVar4 = psVar18;
      while (psVar4 != (short *)0x0) {
        *(undefined1 *)psVar18 = 0;
        psVar18 = (short *)((int)psVar18 + 1);
        psVar16 = (short *)((int)psVar16 + -1);
        psVar4 = psVar16;
      }
      uStack_e = *puVar25;
      iVar7 = 0;
      uStack_c = puVar25[1];
      if (0 < (int)uVar17) {
        piVar19 = param_2;
        do {
          bVar1 = false;
          if ((short)piVar19[0x9c] == sStack_234) {
            bVar1 = *(ushort *)((int)piVar19 + 0x272) == uStack_e;
          }
          bVar2 = false;
          if (bVar1) {
            bVar2 = *(ushort *)(piVar19 + 0x9d) == uStack_c;
          }
          if (bVar2) {
            bVar21 = false;
            break;
          }
          iVar7 = iVar7 + 1;
          piVar19 = (int *)((int)piVar19 + 6);
        } while (iVar7 < (int)uVar17);
      }
      if (bVar21) {
        uVar17 = param_2[0x9b];
        if (uVar17 < 0x40) {
          *(short *)((int)param_2 + uVar17 * 6 + 0x270) = sStack_234;
          *(ushort *)((int)param_2 + uVar17 * 6 + 0x272) = uStack_e;
          *(ushort *)((int)param_2 + uVar17 * 6 + 0x274) = uStack_c;
        }
        param_2[0x9b] = param_2[0x9b] + 1;
        if ((param_5 != '\x02') || (puVar25[2] == 0)) {
          fVar26 = *(float *)(iVar22 + (uint)puVar25[1] * 0x10 + 4);
          fVar27 = *(float *)(iVar22 + (uint)*puVar25 * 0x10 + 4);
          if (fVar27 <= fVar26) {
            fVar26 = fVar27;
          }
          fVar26 = fVar26 + -1.0;
          sStack_10 = sStack_234;
          iVar7 = PhysShape_GetCenter(uVar9);
          fVar27 = (float)fabsf(fVar26 - *(float *)(iVar7 + 4));
          if (fVar27 <= 100.0) {
            param_2[4] = *(int *)(iVar22 + (uint)*puVar25 * 0x10);
            param_2[5] = (int)fVar26;
            param_2[6] = *(int *)(iVar22 + (uint)*puVar25 * 0x10 + 8);
            param_2[8] = *(int *)(iVar22 + (uint)puVar25[1] * 0x10);
            param_2[9] = (int)fVar26;
            param_2[10] = *(int *)(iVar22 + (uint)puVar25[1] * 0x10 + 8);
            uVar12 = PhysContact_IsInside(param_2[3],param_2 + 4);
            uVar13 = PhysContact_IsInside(param_2[3],param_2 + 8);
            if ((uVar12 & uVar13) == 0) {
              sceVu0CopyVector(auStack_e0,param_2 + 4);
              sceVu0CopyVector(auStack_d0,param_2 + 4);
              sceVu0CopyVector(auStack_c0,param_2 + 8);
              sceVu0CopyVector(auStack_b0,param_2 + 8);
              uStack_d4 = 0x3f800000;
              fStack_cc = fStack_cc + 100.0;
              fStack_bc = fStack_bc + 100.0;
              uStack_c4 = 0x3f800000;
              uStack_b4 = 0x3f800000;
              uStack_a4 = 0x3f800000;
              lVar14 = Cam_SweepTest(&fStack_8,auStack_80,auStack_90,auStack_e0,auStack_a0);
              if ((lVar14 != 0) &&
                 (Cam_RaycastCourse(auStack_230,auStack_80,auStack_e0), iStack_130 != 0)) {
                uVar10 = (**(code **)(*(int *)uVar9 + 0x38))(uVar9,0);
                uVar11 = (**(code **)(*(int *)uVar8 + 0x38))(uVar8,0);
                sceVu0SubVector(auStack_120,uVar10,uVar11);
                uVar28 = sceVu0InnerProduct(auStack_90,auStack_90);
                maybe_Vu0_SqrtQ(uVar28);
                param_2[0x19] = param_2[0x9b];
                sceVu0AddVector(auStack_120,auStack_120,auStack_90);
                sceVu0ScaleVector(0x3f000000,auStack_90,auStack_120);
                uStack_84 = 0x3f800000;
                uVar28 = sceVu0InnerProduct(auStack_90,auStack_90);
                fVar26 = (float)maybe_Vu0_SqrtQ(uVar28);
                uStack_114 = 0x3f800000;
                sceVu0SubVector(auStack_100,auStack_d0,auStack_e0);
                sceVu0SubVector(auStack_110,auStack_c0,auStack_d0);
                uStack_f4 = 0x3f800000;
                uStack_104 = 0x3f800000;
                sceVu0OuterProduct(auStack_f0,auStack_110,auStack_100);
                sceVu0Normalize(auStack_f0,auStack_f0);
                uStack_e4 = 0x3f800000;
                sceVu0CopyVector(param_2 + 0x10,auStack_f0);
                sceVu0CopyVector(param_2 + 0x14,auStack_f0);
                maybe_Vu0_SetUnitW(param_2 + 0xc);
                iVar7 = 0;
                if (0 < iStack_130) {
                  puVar23 = auStack_230;
                  do {
                    sceVu0AddVector(param_2 + 0xc,param_2 + 0xc,puVar23);
                    iVar7 = iVar7 + 1;
                    puVar23 = puVar23 + 0x10;
                  } while (iVar7 < iStack_130);
                }
                sceVu0ScaleVector(1.0 / (float)iStack_130,param_2 + 0xc,param_2 + 0xc);
                *pfVar15 = fStack_7c;
                *pfVar15 = (*pfVar15 + (((fStack_dc + fStack_ac) / 2.0 - -1.0) - 1.0)) / 2.0;
                param_2[0xf] = 0x3f800000;
                sceVu0Normalize(auStack_a0,auStack_90);
                uStack_94 = 0x3f800000;
                uVar28 = sceVu0InnerProduct(auStack_a0,param_2 + 0x10);
                iVar7 = fabsf(uVar28);
                param_2[1] = iVar7;
                fVar26 = fVar26 * (DAT_0036e78c - fStack_8) * (DAT_0036e78c - fStack_8);
                param_2[0x18] = (int)fVar26;
                param_2[0x18] =
                     (int)(DAT_0036e790 * fVar26 * (float)param_2[1] + fVar26 * (1.0 - DAT_0036e790)
                          );
                fVar26 = DAT_0036e784 * (1.0 - (float)param_2[1]) + DAT_0036e780 + 0.0;
                if (fVar26 <= (float)param_2[0x18]) {
                  fVar26 = (float)param_2[0x18];
                }
                param_2[0x18] = (int)fVar26;
                param_2[1] = (int)((float)param_2[1] * DAT_0036e788);
                iVar20 = PhysWorld_GetBodyList(0x42f3c0);
                iVar7 = *param_2;
                if (iVar7 < iVar20) {
                  iVar24 = iVar7;
                }
                else {
                  iVar24 = iVar20 + -1;
                }
                iVar24 = param_2[2] + iVar24 * 0x40;
                if (iVar7 < iVar20) {
                  *param_2 = *param_2 + 1;
                }
                *(int *)(iVar24 + 0x38) = param_2[0x19];
                *(int *)(iVar24 + 0x3c) = param_2[1];
                *(int *)(iVar24 + 0x30) = param_2[0x18];
                *(undefined4 *)(iVar24 + 0x34) = 0x1000000;
                sceVu0CopyVector(iVar24,param_2 + 0xc);
                sceVu0CopyVector(iVar24 + 0x10,param_2 + 0x10);
                sceVu0CopyVector(iVar24 + 0x20,param_2 + 0x14);
              }
            }
          }
        }
      }
      iStack_250 = iStack_250 + 1;
      puVar25 = puVar25 + 4;
    } while ((long)iStack_250 < (long)(ulong)uVar5);
  }
  *param_1 = fStack_8;
  param_1[1] = fStack_4;
  return;
}

// 0x001878c0  size 0xd4
void Cam_ResolveCollision(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_10 [12];
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1 + 0x26c) = 0;
  Cam_CollideWithWorld();
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    iVar4 = param_1;
    do {
      puVar2 = (undefined4 *)0x4;
      puVar3 = &uStack_4;
      puVar1 = puVar3;
      while (puVar1 != (undefined4 *)0x0) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        puVar1 = puVar2;
      }
      uStack_4 = *(undefined4 *)(iVar4 + 0x6c);
      Cam_UpdateCollision(auStack_10,param_1,param_2,uStack_4,2);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x68));
  }
  return;
}

// 0x001879a0  size 0x3dc
undefined4 Cam_CollideWithWorld(int param_1,int *param_2)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  uint uVar13;
  
  uVar5 = PhysContact_GetBodyB(*(undefined4 *)(param_1 + 0xc));
  uVar3 = (**(code **)(*(int *)uVar5 + 0x34))(uVar5);
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar13 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = (**(code **)(*(int *)uVar5 + 0x5c))(uVar5,uVar13 >> 1);
      iVar11 = *(int *)(param_1 + 0x68);
      bVar2 = true;
      iVar8 = 0;
      sVar1 = *(short *)(iVar4 + 4);
      if (0 < iVar11) {
        iVar10 = param_1;
        do {
          if ((*(short *)(iVar10 + 0x6c) == *(short *)(iVar4 + 2)) &&
             (*(short *)(iVar10 + 0x6e) == sVar1)) {
            bVar2 = false;
            break;
          }
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar8 < iVar11);
      }
      if (bVar2) {
        *(short *)(param_1 + iVar11 * 4 + 0x6c) = *(short *)(iVar4 + 2);
        *(short *)(param_1 + *(int *)(param_1 + 0x68) * 4 + 0x6e) = sVar1;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        sVar1 = *(short *)(iVar4 + 2);
        psVar12 = *(short **)(*(int *)(*param_2 + 4) + *(short *)(iVar4 + 2) * 4);
        sVar6 = *(short *)(iVar4 + 4) + 1;
        sVar7 = *(short *)(iVar4 + 4) + -1;
        if (sVar6 < *psVar12) {
          iVar11 = *(int *)(param_1 + 0x68);
          bVar2 = true;
          iVar8 = 0;
          if (0 < iVar11) {
            iVar10 = param_1;
            do {
              if ((*(short *)(iVar10 + 0x6c) == sVar1) && (*(short *)(iVar10 + 0x6e) == sVar6)) {
                bVar2 = false;
                break;
              }
              iVar8 = iVar8 + 1;
              iVar10 = iVar10 + 4;
            } while (iVar8 < iVar11);
          }
          if (bVar2) {
            *(short *)(param_1 + iVar11 * 4 + 0x6c) = sVar1;
            *(short *)(param_1 + *(int *)(param_1 + 0x68) * 4 + 0x6e) = sVar6;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          }
        }
        if (-1 < sVar7) {
          iVar11 = *(int *)(param_1 + 0x68);
          bVar2 = true;
          iVar8 = 0;
          if (0 < iVar11) {
            iVar10 = param_1;
            do {
              if ((*(short *)(iVar10 + 0x6c) == sVar1) && (*(short *)(iVar10 + 0x6e) == sVar7)) {
                bVar2 = false;
                break;
              }
              iVar8 = iVar8 + 1;
              iVar10 = iVar10 + 4;
            } while (iVar8 < iVar11);
          }
          if (bVar2) {
            *(short *)(param_1 + iVar11 * 4 + 0x6c) = sVar1;
            *(short *)(param_1 + *(int *)(param_1 + 0x68) * 4 + 0x6e) = sVar7;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          }
        }
        iVar11 = 0;
        do {
          sVar1 = psVar12[2];
          if ((sVar1 != -1) &&
             (((sVar1 == *(short *)(iVar4 + 4) || (sVar1 == sVar6)) || (sVar1 == sVar7)))) {
            iVar8 = *(int *)(param_1 + 0x68);
            bVar2 = true;
            sVar1 = psVar12[4];
            iVar10 = 0;
            if (0 < iVar8) {
              iVar9 = param_1;
              do {
                if ((*(short *)(iVar9 + 0x6c) == psVar12[3]) && (*(short *)(iVar9 + 0x6e) == sVar1))
                {
                  bVar2 = false;
                  break;
                }
                iVar10 = iVar10 + 1;
                iVar9 = iVar9 + 4;
              } while (iVar10 < iVar8);
            }
            if (bVar2) {
              *(short *)(param_1 + iVar8 * 4 + 0x6c) = psVar12[3];
              *(short *)(param_1 + *(int *)(param_1 + 0x68) * 4 + 0x6e) = sVar1;
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            }
          }
          iVar11 = iVar11 + 1;
          psVar12 = psVar12 + 3;
        } while (iVar11 < 6);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar3);
  }
  return *(undefined4 *)(param_1 + 0x68);
}

// 0x00187d80  size 0x178
void Cam_GetShapeCenter(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  
  uVar3 = PhysShape_GetCenter(param_2);
  sceVu0CopyVector(param_1,uVar3);
  piVar4 = (int *)param_2;
  pfVar1 = (float *)(**(code **)(*piVar4 + 0x40))(param_2,0);
  pfVar2 = (float *)(**(code **)(*piVar4 + 0x40))(param_2,3);
  iVar5 = (int)param_1;
  sceVu0CopyVector(iVar5 + 0x10,pfVar1 + 4);
  *(float *)(iVar5 + 0x20) = (*pfVar1 + *pfVar2) / 2.0;
  pfVar1 = (float *)(**(code **)(*piVar4 + 0x40))(param_2,1);
  pfVar2 = (float *)(**(code **)(*piVar4 + 0x40))(param_2,4);
  sceVu0CopyVector(iVar5 + 0x30,pfVar1 + 4);
  *(float *)(iVar5 + 0x40) = (*pfVar1 + *pfVar2) / 2.0;
  pfVar1 = (float *)(**(code **)(*piVar4 + 0x40))(param_2,2);
  pfVar2 = (float *)(**(code **)(*piVar4 + 0x40))(param_2,5);
  sceVu0CopyVector(iVar5 + 0x50,pfVar1 + 4);
  *(float *)(iVar5 + 0x60) = (*pfVar1 + *pfVar2) / 2.0;
  *(undefined4 *)(iVar5 + 0xc) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x1c) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x3c) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x5c) = 0x3f800000;
  return;
}

// 0x00187f00  size 0xe8
bool Cam_RaycastCourse(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_10 [16];
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x100) = 4;
  iVar3 = param_1;
  do {
    sceVu0CopyVector(iVar3,param_3);
    iVar1 = iVar1 + 1;
    param_3 = param_3 + 0x10;
    iVar3 = iVar3 + 0x10;
  } while (iVar1 < 4);
  iVar3 = -1;
  do {
    iVar2 = 0;
    iVar1 = param_2;
    do {
      sceVu0ScaleVector((float)iVar3,auStack_10,iVar1 + 0x10);
      fVar4 = (float)sceVu0InnerProduct(auStack_10,param_2);
      Minimap_Draw(fVar4 - *(float *)(iVar1 + 0x20),auStack_10,param_1 + 0x100,param_1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < 3);
    iVar3 = iVar3 + 2;
  } while (iVar3 < 2);
  return 0 < *(int *)(param_1 + 0x100);
}

// 0x00187ff0  size 0x2bc
undefined4
Cam_SweepTest(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [240];
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar6 = (undefined4 *)param_1 + 1;
  sceVu0SubVector(auStack_130,param_3,param_5);
  puVar8 = auStack_120;
  *(undefined4 *)param_1 = 0;
  iVar4 = 0;
  *puVar6 = 0x7f7fffff;
  puVar3 = puVar8;
  iVar7 = param_4;
  do {
    uVar1 = iVar4 + 1U & 3;
    if (((int)(iVar4 + 1U) < 0) && (uVar1 != 0)) {
      uVar1 = uVar1 - 4;
    }
    sceVu0SubVector(puVar3,iVar7,param_4 + uVar1 * 0x10);
    iVar4 = iVar4 + 1;
    *(undefined4 *)(puVar3 + 0xc) = 0x3f800000;
    iVar7 = iVar7 + 0x10;
    puVar3 = puVar3 + 0x10;
  } while (iVar4 < 4);
  sceVu0OuterProduct(auStack_20,auStack_120,auStack_110);
  uStack_14 = 0x3f800000;
  uStack_8 = sceVu0InnerProduct(auStack_20,param_4);
  uStack_4 = uStack_8;
  Minimap_ClampToFrame(auStack_20,param_2,&fStack_c,&fStack_10);
  uVar9 = sceVu0InnerProduct(auStack_20,auStack_130);
  lVar2 = Minimap_Project(0x3f800000,uVar9,uStack_4,uStack_8,fStack_c,fStack_10,param_1,puVar6);
  if (lVar2 == 0) {
    iVar4 = 0;
    iVar7 = param_2;
    do {
      sceVu0CopyVector(auStack_20,iVar7 + 0x10);
      Minimap_RotatePoint(auStack_20,param_4,4,&uStack_4,&uStack_8);
      fStack_10 = (float)sceVu0InnerProduct(auStack_20,param_2);
      fStack_c = fStack_10 - *(float *)(iVar7 + 0x20);
      fStack_10 = fStack_10 + *(float *)(iVar7 + 0x20);
      uVar9 = sceVu0InnerProduct(auStack_20,auStack_130);
      lVar2 = Minimap_Project(0x3f800000,uVar9,uStack_4,uStack_8,fStack_c,fStack_10,param_1,puVar6);
      if (lVar2 != 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 0x20;
    } while (iVar4 < 3);
    iVar7 = 0;
    do {
      iVar5 = 0;
      iVar4 = param_2;
      do {
        sceVu0OuterProduct(auStack_20,puVar8,iVar4 + 0x10);
        Minimap_RotatePoint(auStack_20,param_4,4,&uStack_4,&uStack_8);
        Minimap_ClampToFrame(auStack_20,param_2,&fStack_c,&fStack_10);
        uVar9 = sceVu0InnerProduct(auStack_20,auStack_130);
        lVar2 = Minimap_Project(0x3f800000,uVar9,uStack_4,uStack_8,fStack_c,fStack_10,param_1,puVar6
                               );
        if (lVar2 != 0) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x20;
      } while (iVar5 < 3);
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 0x10;
    } while (iVar7 < 4);
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

