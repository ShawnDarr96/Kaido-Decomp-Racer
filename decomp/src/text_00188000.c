// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00188000 - 0x0018c000
#include "ghidra_types.h"

// 0x001882c0  size 0xa8
void Road_InitTracker(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  Road_FindNearestSection
            (param_2,iVar2 + 0x10,*(undefined4 *)(iVar2 + 6),*(undefined2 *)(iVar2 + 10));
  iVar1 = *(int *)(*(int *)(*(int *)param_2 + 4) + (uint)*(ushort *)(iVar2 + 6) * 4) + 0x7c;
  *(undefined2 *)(iVar2 + 2) = *(undefined2 *)(*(short *)(iVar2 + 8) * 0x20 + iVar1 + 0x18);
  *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(*(short *)(iVar2 + 8) * 0x20 + iVar1 + 0x1a);
  *(undefined4 *)(iVar2 + 0x60) = 0;
  Road_UpdateTracker(param_1,param_2,param_3);
  return;
}

// 0x00188370  size 0x168
void Road_UpdateTracker(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 6);
  Road_LocatePoint(param_3,param_1 + 0x10,param_1 + 2);
  fVar4 = *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x14) = fVar4 + 0.5;
  lVar3 = Road_RaycastGround(param_3,param_1 + 0x10,*(undefined4 *)(param_1 + 2),param_1 + 0x20,
                             param_1 + 0x30);
  if (lVar3 == -1) {
    *(float *)(param_1 + 0x14) = fVar4;
  }
  else {
    *(int *)(param_1 + 100) = (int)lVar3;
  }
  Road_AdvanceAlongPath(param_2,param_1 + 0x10,param_1 + 6,uVar1,*(undefined2 *)(param_1 + 10));
  iVar2 = Road_GetSectionSegments
                    (param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 6),
                     *(undefined2 *)(param_1 + 10));
  *(int *)(param_1 + 0xc) = *(short *)(param_1 + 8) * 0x20 + iVar2;
  Road_ComputeLateralOffset
            (param_2,param_1 + 0x10,*(undefined2 *)(param_1 + 6),*(undefined4 *)(param_1 + 0xc),
             *(undefined2 *)(param_1 + 10),param_1 + 0x40,param_1 + 0x44,0);
  *(byte *)(param_1 + 0x48) =
       *(byte *)(*(short *)(param_1 + 8) * 0x20 +
                 *(int *)(*(int *)(*(int *)param_2 + 4) + (uint)*(ushort *)(param_1 + 6) * 4) + 0x9a
                ) & 0xf;
  Road_ProjectOnSegment
            (param_2,param_1 + 0x50,*(undefined4 *)(param_1 + 6),*(undefined2 *)(param_1 + 10),0);
  return;
}

// 0x001884e0  size 0xe8
uint Road_GetSegment(int *param_1,float *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + (param_3 & 0xffff) * 4);
  uVar2 = 0;
  if (*(float *)(iVar1 + 4) - 20.0 <= *param_2) {
    if (*(float *)(iVar1 + 0x10) + 20.0 < *param_2) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  if (*(float *)(iVar1 + 8) - 20.0 <= param_2[1]) {
    if (*(float *)(iVar1 + 0x14) + 20.0 < param_2[1]) {
      uVar2 = uVar2 | 8;
    }
  }
  else {
    uVar2 = uVar2 | 4;
  }
  if (*(float *)(iVar1 + 0xc) - 20.0 <= param_2[2]) {
    if (*(float *)(iVar1 + 0x18) + 20.0 < param_2[2]) {
      uVar2 = uVar2 | 0x20;
    }
  }
  else {
    uVar2 = uVar2 | 0x10;
  }
  return uVar2;
}

// 0x001885d0  size 0x33c
void Road_ComputeLateralOffset
               (undefined8 param_1,undefined8 param_2,ushort param_3,uint param_4,undefined8 param_5
               ,long param_6,long param_7,char param_8)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  short sVar4;
  float *pfVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_40 [4];
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  ushort uStack_4;
  short sStack_2;
  
  iVar8 = *(int *)(*(int *)(*(int *)param_1 + 4) + (uint)param_3 * 4) + 0x7c;
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    uVar2 = param_4 + 0x1f;
  }
  sVar4 = (short)((int)uVar2 >> 5);
  uVar2 = param_4 & 0x1f;
  if (((int)param_4 < 0) && (uVar2 != 0)) {
    uVar2 = uVar2 - 0x20;
  }
  iVar7 = sVar4 * 0x20;
  pfVar5 = (float *)(iVar8 + iVar7);
  fVar13 = (float)(int)uVar2 / 32.0;
  fStack_50 = *pfVar5;
  fStack_4c = pfVar5[1];
  fStack_48 = pfVar5[2];
  fVar9 = pfVar5[3] * 0.5;
  if (param_8 == '\0') {
    fVar12 = fVar9 + 0.0;
    fVar9 = fVar9 + 0.0;
  }
  else {
    fVar12 = fVar9 + pfVar5[4];
    fVar9 = fVar9 + *(float *)(iVar7 + iVar8 + 0x14);
  }
  puVar3 = (ushort *)0x4;
  puVar6 = &uStack_4;
  puVar1 = puVar6;
  while (puVar1 != (ushort *)0x0) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (ushort *)((int)puVar6 + 1);
    puVar3 = (ushort *)((int)puVar3 + -1);
    puVar1 = puVar3;
  }
  sStack_2 = sVar4 + 1;
  fStack_30 = fStack_50;
  fStack_2c = fStack_4c;
  fStack_28 = fStack_48;
  fStack_20 = fStack_50;
  fStack_1c = fStack_4c;
  fStack_18 = fStack_48;
  uStack_4 = param_3;
  Road_GetSegmentPoint(param_1,&uStack_4,param_5);
  iVar8 = sStack_2 * 0x20;
  iVar7 = *(int *)(*(int *)(*(int *)param_1 + 4) + (uint)uStack_4 * 4) + 0x7c;
  fVar10 = *(float *)(iVar8 + iVar7 + 0xc) * 0.5;
  if (param_8 == '\0') {
    fVar11 = fVar10 + 0.0;
  }
  else {
    fVar11 = fVar10 + *(float *)(iVar8 + iVar7 + 0x10);
  }
  if (param_8 == '\0') {
    fVar10 = fVar10 + 0.0;
  }
  else {
    fVar10 = fVar10 + *(float *)(iVar8 + iVar7 + 0x14);
  }
  pfVar5 = (float *)(iVar7 + iVar8);
  fStack_20 = *pfVar5 - fStack_20;
  fVar12 = (fVar11 - fVar12) * fVar13 + fVar12 + 0.0;
  fVar10 = (fVar10 - fVar9) * fVar13 + fVar9 + 0.0;
  fStack_1c = pfVar5[1] - fStack_1c;
  fStack_18 = pfVar5[2] - fStack_18;
  sceVu0SubVector(&fStack_30,&fStack_30,param_2);
  sceVu0OuterProduct(auStack_40,&fStack_20,&fStack_30);
  maybe_sceVu0ScaleVectorXYZ(fVar13,&fStack_20,&fStack_20);
  sceVu0AddVector(&fStack_50,&fStack_50,&fStack_20);
  sceVu0SubVector(&fStack_50,param_2,&fStack_50);
  fVar9 = (float)Vu0_SqrtQ(fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c);
  if (fStack_3c != 0.0) {
    if (fStack_3c < 0.0) {
      fVar12 = fVar12 - fVar9;
      fVar10 = fVar10 + fVar9;
    }
    else {
      fVar12 = fVar12 + fVar9;
      fVar10 = fVar10 - fVar9;
    }
  }
  if (param_6 != 0) {
    *(float *)param_6 = fVar12;
  }
  if (param_7 != 0) {
    *(float *)param_7 = fVar10;
  }
  return;
}

// 0x00188910  size 0x23c
void Road_ProjectOnSegment
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  ushort uStack_34;
  short sStack_32;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ushort uStack_10;
  short sStack_e;
  ushort uStack_c;
  short sStack_a;
  ushort uStack_8;
  short sStack_6;
  ushort uStack_4;
  short sStack_2;
  
  sStack_32 = (short)((uint)param_3 >> 0x10);
  piVar2 = (int *)param_1;
  uStack_34 = (ushort)param_3;
  if (param_5 == 1) {
    sStack_2 = sStack_32 + 1;
    uStack_4 = uStack_34;
    Road_GetSegmentPoint(param_1,&uStack_4,param_4);
    puVar1 = (undefined4 *)
             (*(int *)(*(int *)(*piVar2 + 4) + (uint)uStack_4 * 4) + 0x7c + sStack_2 * 0x20);
    uStack_20 = *puVar1;
    uStack_1c = puVar1[1];
    uStack_18 = puVar1[2];
    uStack_14 = 0x3f800000;
    uStack_8 = uStack_34;
    sStack_6 = sStack_32;
    Road_GetSegmentPoint(param_1,&uStack_8,param_4);
    puVar1 = (undefined4 *)
             (*(int *)(*(int *)(*piVar2 + 4) + (uint)uStack_8 * 4) + 0x7c + sStack_6 * 0x20);
    uStack_30 = *puVar1;
    uStack_2c = puVar1[1];
    uStack_28 = puVar1[2];
  }
  else {
    sStack_a = sStack_32;
    uStack_c = uStack_34;
    Road_GetSegmentPoint(param_1,&uStack_c,param_4);
    sStack_e = sStack_32 + 1;
    puVar1 = (undefined4 *)
             (*(int *)(*(int *)(*piVar2 + 4) + (uint)uStack_c * 4) + 0x7c + sStack_a * 0x20);
    uStack_20 = *puVar1;
    uStack_1c = puVar1[1];
    uStack_18 = puVar1[2];
    uStack_14 = 0x3f800000;
    uStack_10 = uStack_34;
    Road_GetSegmentPoint(param_1,&uStack_10,param_4);
    puVar1 = (undefined4 *)
             (*(int *)(*(int *)(*piVar2 + 4) + (uint)uStack_10 * 4) + 0x7c + sStack_e * 0x20);
    uStack_30 = *puVar1;
    uStack_2c = puVar1[1];
    uStack_28 = puVar1[2];
  }
  uStack_24 = 0x3f800000;
  sceVu0SubVector(param_2,&uStack_30,&uStack_20);
  *(undefined4 *)((int)param_2 + 0xc) = 0x3f800000;
  sceVu0Normalize(param_2,param_2);
  *(undefined4 *)((int)param_2 + 0xc) = 0x3f800000;
  return;
}

// 0x00188b50  size 0x2b0
void maybe_Road_InterpolateSegment
               (float param_1,undefined8 param_2,undefined8 param_3,ushort param_4,int param_5,
               undefined8 param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  short sVar5;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ushort uStack_10;
  short sStack_e;
  ushort uStack_c;
  short sStack_a;
  ushort uStack_8;
  short sStack_6;
  ushort uStack_4;
  short sStack_2;
  
  uVar2 = param_5 + (int)(param_1 * 32.0);
  uVar1 = uVar2;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 + 0x1f;
  }
  sVar5 = (short)((int)uVar1 >> 5);
  uVar1 = uVar2 & 0x1f;
  if (((int)uVar2 < 0) && (uVar1 != 0)) {
    uVar1 = uVar1 - 0x20;
  }
  piVar4 = (int *)param_2;
  if (param_7 == 1) {
    uStack_4 = param_4;
    sStack_2 = sVar5 + 1;
    Road_GetSegmentPoint(param_2,&uStack_4,param_6);
    puVar3 = (undefined4 *)
             (*(int *)(*(int *)(*piVar4 + 4) + (uint)uStack_4 * 4) + 0x7c + sStack_2 * 0x20);
    uStack_20 = *puVar3;
    uStack_1c = puVar3[1];
    uStack_18 = puVar3[2];
    uStack_14 = 0x3f800000;
    uStack_8 = param_4;
    sStack_6 = sVar5;
    Road_GetSegmentPoint(param_2,&uStack_8,param_6);
    puVar3 = (undefined4 *)
             (*(int *)(*(int *)(*piVar4 + 4) + (uint)uStack_8 * 4) + 0x7c + sStack_6 * 0x20);
    uStack_30 = *puVar3;
    uStack_2c = puVar3[1];
    uStack_28 = puVar3[2];
  }
  else {
    uStack_c = param_4;
    sStack_a = sVar5;
    Road_GetSegmentPoint(param_2,&uStack_c,param_6);
    puVar3 = (undefined4 *)
             (*(int *)(*(int *)(*piVar4 + 4) + (uint)uStack_c * 4) + 0x7c + sStack_a * 0x20);
    uStack_20 = *puVar3;
    uStack_1c = puVar3[1];
    uStack_18 = puVar3[2];
    uStack_14 = 0x3f800000;
    uStack_10 = param_4;
    sStack_e = sVar5 + 1;
    Road_GetSegmentPoint(param_2,&uStack_10,param_6);
    puVar3 = (undefined4 *)
             (*(int *)(*(int *)(*piVar4 + 4) + (uint)uStack_10 * 4) + 0x7c + sStack_e * 0x20);
    uStack_30 = *puVar3;
    uStack_2c = puVar3[1];
    uStack_28 = puVar3[2];
  }
  uStack_24 = 0x3f800000;
  sceVu0SubVector(auStack_50,&uStack_30,&uStack_20);
  maybe_sceVu0ScaleVectorXYZ((float)(int)uVar1 / 32.0,auStack_40,auStack_50);
  sceVu0AddVector(param_3,auStack_40,&uStack_20);
  return;
}

// 0x00188e00  size 0x168
int Road_GetSectionSegments(undefined8 param_1,float *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ushort uStack_4;
  short sStack_2;
  
  uStack_4 = (ushort)param_3;
  fVar8 = *param_2;
  fVar9 = param_2[2];
  sStack_2 = (short)(param_3 >> 0x10);
  iVar1 = (int)sStack_2;
  sStack_2 = sStack_2 + 1;
  pfVar2 = (float *)(*(int *)(*(int *)(*(int *)param_1 + 4) + (param_3 & 0xffff) * 4) + 0x7c +
                    iVar1 * 0x20);
  fVar6 = *pfVar2;
  fVar7 = pfVar2[2];
  Road_GetSegmentPoint(param_1,&uStack_4,param_4);
  pfVar2 = (float *)(*(int *)(*(int *)(*(int *)param_1 + 4) + (uint)uStack_4 * 4) + 0x7c +
                    sStack_2 * 0x20);
  fVar4 = *pfVar2 - fVar6;
  fVar5 = pfVar2[2] - fVar7;
  fVar3 = fVar4 * fVar4 + fVar5 * fVar5;
  if (1e-05 <= fVar3) {
    fVar3 = ((fVar8 - fVar6) * fVar4 + (fVar9 - fVar7) * fVar5) / fVar3;
  }
  else {
    fVar3 = 1.0;
  }
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  return (int)(fVar3 * 32.0);
}

// 0x00188f70  size 0xbc
ushort Road_FindNearestSection
                 (undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  ushort uStack_8;
  short sStack_6;
  ushort uStack_4;
  short sStack_2;
  
  uStack_8 = (ushort)param_3;
  sStack_6 = (short)((uint)param_3 >> 0x10);
  uStack_4 = uStack_8;
  sStack_2 = sStack_6;
  Road_GetSegmentPoint(param_1,&uStack_4,param_4);
  iVar1 = *(int *)(*(int *)(*(int *)param_1 + 4) + (uint)uStack_4 * 4) + 0x7c;
  *param_2 = *(undefined4 *)(iVar1 + sStack_2 * 0x20);
  param_2[1] = *(undefined4 *)(sStack_2 * 0x20 + iVar1 + 4);
  param_2[2] = *(undefined4 *)(sStack_2 * 0x20 + iVar1 + 8);
  param_2[3] = 0x3f800000;
  return uStack_4;
}

// 0x00189030  size 0x4e4
/* WARNING: Removing unreachable block (ram,0x00189278) */
/* WARNING: Removing unreachable block (ram,0x001892e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Road_AdvanceAlongPath
               (undefined8 param_1,undefined8 param_2,ushort *param_3,undefined4 param_4,
               ulong param_5)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  ushort uVar5;
  int *piVar6;
  ushort uVar7;
  long lVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  float fVar11;
  ushort uStack_18;
  ushort uStack_16;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  ushort uStack_4;
  ushort uStack_2;
  
  fStack_14 = 1e+06;
  uStack_4 = _s_Road_AdvanceAlongPath_1;
  uStack_2 = _s_Road_AdvanceAlongPath_2;
  piVar6 = (int *)param_1;
  uVar5 = *param_3;
  uStack_10 = *(undefined4 *)param_3;
  uStack_8 = *(undefined4 *)param_3;
  iVar3 = (short)param_3[1] + 1;
  psVar1 = *(short **)(*(int *)(*piVar6 + 4) + (uint)uVar5 * 4);
  lVar8 = 0;
  uVar9 = (undefined2)param_5;
  sVar2 = (short)iVar3;
  if ((long)iVar3 < (long)*psVar1) {
    uStack_c = CONCAT22(sVar2,uVar5);
    uVar10 = uVar9;
  }
  else {
    if ((param_5 & 0xffff) < 3) {
      iVar3 = 0;
    }
    else {
      iVar3 = 3;
    }
    uVar7 = psVar1[(int)(param_5 & 0xffff) * 2 + 0xe];
    if (uVar7 == 0xffff) {
      uVar7 = uVar5;
      if (psVar1[iVar3 * 2 + 0xe] != 0xffff) {
        uVar7 = psVar1[iVar3 * 2 + 0xe];
      }
    }
    if (uVar7 == uVar5) {
      uVar7 = uVar5;
      if (psVar1[0xe] != 0xffff) {
        uVar7 = psVar1[0xe];
      }
    }
    uStack_c = CONCAT22(sVar2 - *psVar1,uVar7);
    uVar10 = 0;
  }
  iVar3 = (short)param_3[1] + -1;
  uStack_16 = (ushort)((uint)param_4 >> 0x10);
  uStack_18 = (ushort)param_4;
  if (iVar3 < 0) {
    uVar7 = psVar1[0x14];
    if (uVar7 == 0xffff) {
      if (uStack_18 == 0xffff) {
      }
      else {
        uStack_10 = param_4;
      }
    }
    else {
      if (uVar7 != 0xffff) {
        uVar5 = uVar7;
      }
      uStack_10 = CONCAT22(**(short **)(*(int *)(*piVar6 + 4) + (uint)uVar5 * 4) + -1,uVar5);
    }
  }
  else {
    uStack_10 = CONCAT22((short)iVar3,uVar5);
    uVar9 = uVar10;
  }
  lVar4 = Road_DistanceToSegment(param_1,param_2,uStack_8,param_5,&fStack_14,0);
  if (lVar4 == 1) {
    uStack_4 = (ushort)uStack_8;
    uStack_2 = uStack_8._2_2_;
LAB_001891ac:
    iVar3 = *piVar6;
  }
  else {
    lVar4 = Road_DistanceToSegment(param_1,param_2,uStack_c,uVar10,&fStack_14,0);
    if (lVar4 == 1) {
      uStack_4 = (ushort)uStack_c;
      uStack_2 = uStack_c._2_2_;
      if ((ushort)uStack_8 != (ushort)uStack_c) {
        lVar8 = 1;
      }
      goto LAB_001891ac;
    }
    lVar4 = Road_DistanceToSegment(param_1,param_2,uStack_10,uVar9,&fStack_14,0);
    if (lVar4 == 1) {
      uStack_4 = (ushort)uStack_10;
      uStack_2 = uStack_10._2_2_;
      if ((ushort)uStack_8 != (ushort)uStack_10) {
        lVar8 = 2;
      }
      goto LAB_001891ac;
    }
    if ((((uStack_18 == 0xffff) || (uStack_18 == (ushort)uStack_8)) ||
        (uStack_18 == (ushort)uStack_c)) || (uStack_18 == (ushort)uStack_10)) {
      Road_SearchNeighbours(param_1,param_2,&uStack_4,*param_3,uStack_18);
      goto LAB_001891ac;
    }
    lVar4 = Road_DistanceToSegment(param_1,param_2,param_4,param_5,&fStack_14,0);
    if (lVar4 == 1) {
      uStack_4 = uStack_18;
      uStack_2 = uStack_16;
      goto LAB_001891ac;
    }
    Road_SearchNeighbours(param_1,param_2,&uStack_4,*param_3,uStack_18);
    iVar3 = *piVar6;
  }
  fVar11 = (float)fabsf(*(float *)((short)uStack_2 * 0x20 +
                                   *(int *)(*(int *)(iVar3 + 4) + (uint)uStack_4 * 4) + 0x80) -
                        *(float *)((int)param_2 + 4));
  uVar7 = uStack_2;
  uVar5 = uStack_4;
  if (fVar11 <= 150.0) {
    uStack_4 = uVar5;
    uStack_2 = uVar7;
    if (fStack_14 <= 62500.0) goto LAB_00189220;
  }
  Road_SearchNeighbours(param_1,param_2,&uStack_4,*param_3,uStack_18);
  fVar11 = (float)fabsf(*(float *)((short)uStack_2 * 0x20 +
                                   *(int *)(*(int *)(*piVar6 + 4) + (uint)uStack_4 * 4) + 0x80) -
                        *(float *)((int)param_2 + 4));
  if (150.0 < fVar11) {
    uStack_4 = uVar5;
    uStack_2 = uVar7;
  }
LAB_00189220:
  if ((*param_3 != uStack_4) && (lVar8 == 0)) {
    lVar8 = -0x80000000;
  }
  *param_3 = uStack_4;
  param_3[1] = uStack_2;
  return lVar8;
}

// 0x00189520  size 0x240
/* WARNING: Removing unreachable block (ram,0x00189728) */

undefined4 Road_GetSegmentPoint(int *param_1,ushort *param_2,short param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short *psVar9;
  ushort uStack_4;
  ushort uStack_2;
  
  uStack_4 = *param_2;
  uStack_2 = param_2[1];
  if (param_3 < 3) {
    if ((short)uStack_2 < 0) {
      do {
        iVar6 = *(int *)(*(int *)(*param_1 + 4) + (uint)uStack_4 * 4);
        bVar4 = *(byte *)(iVar6 + 2) & 0xf;
        if ((bVar4 == 1) || (bVar4 == 3)) {
          *param_2 = uStack_4;
          param_2[1] = uStack_2;
          return 0;
        }
        uVar2 = *(ushort *)(param_3 * 4 + iVar6 + 0x28);
        if (uVar2 == 0xffff) {
          if (*(ushort *)(iVar6 + 0x28) != 0xffff) {
            uStack_4 = *(ushort *)(iVar6 + 0x28);
          }
        }
        else {
          uStack_4 = uVar2;
        }
        uStack_2 = uStack_2 + **(short **)(*(int *)(*param_1 + 4) + (uint)uStack_4 * 4);
      } while ((short)uStack_2 < 0);
      iVar6 = *param_1;
    }
    else {
      iVar6 = *param_1;
    }
    uVar5 = (uint)uStack_4;
    piVar1 = (int *)(iVar6 + 4);
    iVar8 = (uint)uStack_4 * 4;
    psVar9 = *(short **)(*piVar1 + iVar8);
    sVar7 = *psVar9;
    if (sVar7 <= (short)uStack_2) {
      do {
        if (((*(byte *)(*(int *)(*piVar1 + iVar8) + 2) & 0xf) == 2) ||
           ((*(byte *)(psVar9 + 1) & 0xf) == 4)) {
          *param_2 = uStack_4;
          param_2[1] = uStack_2;
          return 0;
        }
        iVar6 = *(int *)(*(int *)(iVar6 + 4) + uVar5 * 4);
        uStack_2 = uStack_2 - sVar7;
        uVar2 = *(ushort *)(param_3 * 4 + iVar6 + 0x1c);
        if (uVar2 == 0xffff) {
          uVar2 = *(ushort *)(iVar6 + 0x1c);
          if (uVar2 == 0xffff) {
            *param_2 = uStack_4;
            param_2[1] = uStack_2;
            return 0;
          }
          uStack_4 = uVar2;
        }
        else {
          uStack_4 = uVar2;
        }
        iVar6 = *param_1;
        uVar5 = (uint)uStack_4;
        iVar8 = uVar5 * 4;
        psVar9 = *(short **)(*(int *)(iVar6 + 4) + iVar8);
        sVar7 = *psVar9;
      } while (sVar7 <= (short)uStack_2);
    }
    uVar3 = 1;
    *param_2 = uStack_4;
    param_2[1] = uStack_2;
  }
  else {
    uVar3 = 0;
    *param_2 = uStack_4;
    param_2[1] = uStack_2;
  }
  return uVar3;
}

// 0x00189770  size 0x564
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Road_SearchNeighbours
               (undefined8 param_1,undefined8 param_2,ushort *param_3,ushort param_4,ushort param_5)

{
  long lVar1;
  ushort uVar2;
  float fVar3;
  long lVar4;
  short sVar5;
  int *piVar6;
  int *piVar7;
  short *psVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_8;
  float fStack_4;
  
  fVar3 = 1e+06;
  fStack_4 = 1e+06;
  piVar7 = (int *)param_1;
  uVar10 = _s_Road_SearchNeighbours_2;
  uVar9 = _s_Road_SearchNeighbours_1;
  if ((long)(short)param_4 != -1) {
    iVar11 = 0;
    iVar12 = *(int *)(*(int *)(*piVar7 + 4) + (uint)param_4 * 4);
    do {
      uVar2 = *(ushort *)(iVar12 + 0x1c);
      uStack_8 = (uint)uVar2;
      if ((uVar2 != 0xffff) && (lVar4 = Road_GetSegment(param_1,param_2,uVar2), lVar4 == 0)) {
        uStack_8 = (uint)uVar2;
        psVar8 = *(short **)(*(int *)(*piVar7 + 4) + (uint)uVar2 * 4);
        if (0 < *psVar8) {
          do {
            lVar4 = Road_DistanceToSegment(param_1,param_2,uStack_8,0,&fStack_4,0);
            if ((lVar4 == 1) && (fStack_4 < fVar3)) {
              fVar3 = fStack_4;
              uVar10 = uStack_8._2_2_;
              uVar9 = (ushort)uStack_8;
            }
            sVar5 = uStack_8._2_2_ + 1;
            uStack_8 = CONCAT22(sVar5,(ushort)uStack_8);
          } while (sVar5 < *psVar8);
        }
      }
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar11 < 0xc);
    if ((fVar3 < 62500.0) && (uVar9 != 0xffff)) {
      *param_3 = uVar9;
      param_3[1] = uVar10;
      return;
    }
  }
  lVar4 = (long)(short)param_5;
  if ((lVar4 != -1) &&
     (lVar4 != CONCAT44((int)((ulong)(long)(short)param_4 >> 0x20),(int)(short)param_4))) {
    psVar8 = *(short **)(*(int *)(*piVar7 + 4) + (uint)param_5 * 4);
    lVar1 = Road_GetSegment(param_1,param_2,param_5);
    if ((lVar1 == 0) && (uStack_8 = uStack_8 & 0xffff, 0 < *psVar8)) {
      do {
        lVar1 = Road_DistanceToSegment(param_1,param_2,uStack_8,0,&fStack_4,0);
        if ((lVar1 == 1) && (fStack_4 < fVar3)) {
          fVar3 = fStack_4;
          uVar10 = uStack_8._2_2_;
          uVar9 = (ushort)uStack_8;
        }
        sVar5 = uStack_8._2_2_ + 1;
        uStack_8 = CONCAT22(sVar5,(ushort)uStack_8);
      } while (sVar5 < *psVar8);
    }
    iVar12 = 0;
    iVar11 = 0;
    do {
      uVar2 = *(ushort *)((int)psVar8 + iVar11 + 0x1c);
      if ((uVar2 != 0xffff) && (lVar1 = Road_GetSegment(param_1,param_2,uVar2), lVar1 == 0)) {
        uStack_8 = (uint)uVar2;
        psVar8 = *(short **)(*(int *)(*piVar7 + 4) + (uint)uVar2 * 4);
        if (0 < *psVar8) {
          do {
            lVar1 = Road_DistanceToSegment(param_1,param_2,uStack_8,0,&fStack_4,0);
            if ((lVar1 == 1) && (fStack_4 < fVar3)) {
              fVar3 = fStack_4;
              uVar10 = uStack_8._2_2_;
              uVar9 = (ushort)uStack_8;
            }
            sVar5 = uStack_8._2_2_ + 1;
            uStack_8 = CONCAT22(sVar5,(ushort)uStack_8);
          } while (sVar5 < *psVar8);
        }
      }
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 4;
    } while (iVar12 < 0xc);
    if ((fVar3 < 62500.0) && (uVar9 != 0xffff)) {
      *param_3 = uVar9;
      param_3[1] = uVar10;
      return;
    }
  }
  piVar6 = (int *)*piVar7;
  uStack_8 = 0;
  lVar1 = 0;
  if (0 < *piVar6) {
    do {
      psVar8 = *(short **)(piVar6[1] + ((uint)lVar1 & 0xffff) * 4);
      if (((0x2f < *(byte *)(psVar8 + 1)) && (lVar1 = Road_GetSegment(param_1,param_2), lVar1 == 0))
         && (0 < *psVar8)) {
        do {
          lVar1 = Road_DistanceToSegment(param_1,param_2,uStack_8,0,&fStack_4,0);
          if ((lVar1 == 1) && (fStack_4 < fVar3)) {
            fVar3 = fStack_4;
            uVar10 = uStack_8._2_2_;
            uVar9 = (ushort)uStack_8;
          }
          sVar5 = uStack_8._2_2_ + 1;
          uStack_8 = CONCAT22(sVar5,(ushort)uStack_8);
        } while (sVar5 < *psVar8);
      }
      piVar6 = (int *)*piVar7;
      uVar2 = (ushort)uStack_8 + 1;
      uStack_8 = (uint)uVar2;
      lVar1 = (long)(short)uVar2;
    } while (lVar1 < *piVar6);
  }
  if (uVar9 == 0xffff) {
    if ((*param_3 == 0xffff) || (param_3[1] == 0xffff)) {
      if (lVar4 == -1) {
        uVar10 = 0;
        uVar9 = 0;
      }
      else {
        uVar10 = param_3[1];
        uVar9 = param_5;
      }
    }
    else {
      uVar10 = param_3[1];
      uVar9 = *param_3;
    }
  }
  *param_3 = uVar9;
  param_3[1] = uVar10;
  return;
}

// 0x00189ce0  size 0x358
int Road_DistanceToSegment
              (int *param_1,float *param_2,uint param_3,ushort param_4,float *param_5,int param_6)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  short sVar10;
  short *psVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  short *psStack_30;
  ushort uStack_8;
  short sStack_6;
  short sStack_2;
  
  iVar12 = 0;
  uStack_8 = (ushort)param_3;
  sStack_6 = (short)(param_3 >> 0x10);
  iVar9 = (param_3 & 0xffff) * 4;
  psVar11 = *(short **)(*(int *)(*param_1 + 4) + iVar9);
  sVar1 = *psVar11;
  psVar11 = psVar11 + 0x3e;
  lVar4 = Road_GetSegment();
  if (lVar4 == 0) {
    iVar5 = sStack_6 + 1;
    sVar10 = (short)iVar5;
    if ((long)iVar5 < (long)sVar1) {
      lVar4 = (long)(short)uStack_8;
      sStack_2 = sVar10;
      psStack_30 = psVar11;
    }
    else {
      iVar5 = *(int *)(*(int *)(*param_1 + 4) + iVar9);
      if (param_4 < 3) {
        iVar6 = 0;
      }
      else {
        iVar6 = 3;
      }
      uVar7 = (ulong)*(short *)((uint)param_4 * 4 + iVar5 + 0x1c);
      if (uVar7 == 0xffffffffffffffff) {
        uVar8 = (ulong)*(short *)(iVar6 * 4 + iVar5 + 0x1c);
        uVar7 = (ulong)uStack_8;
        if (uVar8 != 0xffffffffffffffff) {
          uVar7 = uVar8;
        }
      }
      lVar4 = (long)(short)uVar7;
      if (lVar4 != (short)uStack_8) {
        sStack_2 = sVar10 - sVar1;
        psStack_30 = (short *)(*(int *)(*(int *)(*param_1 + 4) + ((uint)uVar7 & 0xffff) * 4) + 0x7c)
        ;
      }
    }
    psVar2 = *(short **)(*(int *)(*param_1 + 4) + iVar9);
    psVar3 = *(short **)(*(int *)(*param_1 + 4) + ((uint)lVar4 & 0xffff) * 4);
    sVar1 = *psVar2;
    sVar10 = *psVar3;
    fVar13 = (float)fabsf(*(float *)(psVar11 + sStack_6 * 0x10 + 2) - param_2[1]);
    iVar9 = (int)sStack_2;
    if ((fVar13 <= 100.0) ||
       (fVar13 = (float)fabsf(*(float *)(psStack_30 + iVar9 * 0x10 + 2) - param_2[1]),
       fVar13 <= 100.0)) {
      fVar15 = *(float *)(psVar3 + sVar10 * 0x14 + sVar10 * 2 + iVar9 * 6 + 0x3e);
      fVar14 = *(float *)((int)(psVar3 + sVar10 * 0x14 + sVar10 * 2 + iVar9 * 6 + 0x3e) + 8);
      fVar13 = *param_2;
      fVar16 = param_2[2];
      if ((0.0 <= (fVar14 - *(float *)((int)(psVar3 + sVar10 * 0x10 + iVar9 * 6 + 0x3e) + 8)) *
                  (fVar15 - fVar13) -
                  (fVar15 - *(float *)(psVar3 + sVar10 * 0x10 + iVar9 * 6 + 0x3e)) *
                  (fVar14 - fVar16)) &&
         (iVar9 = (int)sStack_6,
         fVar15 = *(float *)(psVar2 + sVar1 * 0x14 + sVar1 * 2 + iVar9 * 6 + 0x3e),
         fVar14 = *(float *)((int)(psVar2 + sVar1 * 0x14 + sVar1 * 2 + iVar9 * 6 + 0x3e) + 8),
         ((fVar14 - *(float *)((int)(psVar2 + sVar1 * 0x10 + iVar9 * 6 + 0x3e) + 8)) *
          (fVar15 - fVar13) + 0.0) -
         (fVar15 - *(float *)(psVar2 + sVar1 * 0x10 + iVar9 * 6 + 0x3e)) * (fVar14 - fVar16) <= 0.0)
         ) {
        if (param_5 != (float *)0x0) {
          fVar16 = fVar16 - *(float *)((int)(psVar11 + iVar9 * 0x10) + 8);
          fVar13 = fVar13 - *(float *)(psVar11 + iVar9 * 0x10);
          *param_5 = fVar13 * fVar13 + fVar16 * fVar16 + 0.0;
        }
        iVar12 = 1;
      }
      if ((param_6 == 1) && (iVar12 == 1)) {
        iVar12 = 1;
      }
    }
    else {
      iVar12 = 0;
    }
  }
  else {
    iVar12 = 0;
  }
  return iVar12;
}

// 0x0018a0a0  size 0x30
void RoadData_Free(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  Mem_Free(*param_1);
  *param_1 = 0;
  return;
}

// 0x0018a0d0  size 0xdc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 RoadData_Load(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = g_ArcToc->entries[(int)param_2].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[(int)param_2].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  Sema_Wait(0x36efc0);
  uVar1 = _g_FileShared2;
  Sema_Signal(0x36efc0,0);
  if (uVar1 < 0x100) {
    uVar3 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
    *(undefined4 *)param_1 = uVar3;
    uVar4 = Arc_LoadFileEx(param_2,*(undefined4 *)param_1,0x18a040,param_1,0,0);
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  return uVar4;
}

// 0x0018a1b0  size 0x10
void RoadData_MarkLoaded(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}

// 0x0018a1c0  size 0xf4
uint RoadData_GetSection(int *param_1,float *param_2,short param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + param_3 * 4);
  uVar2 = 0;
  if (*(float *)(iVar1 + 0x30) - 10.0 <= *param_2) {
    if (*(float *)(iVar1 + 0x38) + 10.0 < *param_2) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  if ((*(float *)(iVar1 + 0x2c) - *(float *)(iVar1 + 0x28)) - 10.0 <= param_2[1]) {
    if (*(float *)(iVar1 + 0x2c) + *(float *)(iVar1 + 0x28) + 10.0 < param_2[1]) {
      uVar2 = uVar2 | 8;
    }
  }
  else {
    uVar2 = uVar2 | 4;
  }
  if (*(float *)(iVar1 + 0x34) - 10.0 <= param_2[2]) {
    if (*(float *)(iVar1 + 0x3c) + 10.0 < param_2[2]) {
      uVar2 = uVar2 | 0x20;
    }
  }
  else {
    uVar2 = uVar2 | 0x10;
  }
  return uVar2;
}

// 0x0018a2c0  size 0x548
undefined4 Road_LocatePoint(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  long lVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  short sVar14;
  long lVar15;
  short sVar16;
  undefined4 uStack_10;
  
  lVar15 = 1;
  psVar10 = (short *)param_3;
  sVar1 = psVar10[1];
  uStack_10 = 0;
  if (*psVar10 == -1) {
    maybe_Road_FindSectionCell(param_2,param_3,param_1);
    uStack_10 = 0;
  }
  else {
    piVar13 = (int *)param_1;
    psVar4 = *(short **)(*(int *)(*piVar13 + 4) + *psVar10 * 4);
    iVar12 = *(int *)(psVar4 + 0x22);
    iVar11 = (int)psVar4 + (uint)(ushort)psVar4[1];
    lVar9 = Road_PointInTriangle((int)psVar4 + sVar1 * 0x1c + iVar12,iVar11,param_2);
    if (lVar9 == 1) {
      uStack_10 = 0;
    }
    else {
      sVar2 = psVar10[1];
      sVar7 = sVar2 + -1;
      sVar8 = sVar2 + 1;
      sVar14 = sVar2 + -2;
      sVar16 = sVar2 + 2;
      if (((long)sVar8 < (long)*psVar4) &&
         (lVar9 = Road_PointInTriangle((int)psVar4 + sVar8 * 0x1c + iVar12,iVar11,param_2),
         lVar9 == 1)) {
        psVar10[1] = sVar8;
      }
      else if (((long)sVar7 < 0) ||
              (lVar9 = Road_PointInTriangle((int)psVar4 + sVar7 * 0x1c + iVar12,iVar11,param_2),
              lVar9 != 1)) {
        if ((sVar16 < *psVar4) &&
           (lVar9 = Road_PointInTriangle
                              ((int)psVar4 + (sVar16 * 8 - (int)sVar16) * 4 + iVar12,iVar11,param_2)
           , lVar9 == 1)) {
          psVar10[1] = sVar16;
        }
        else if ((sVar14 < 0) ||
                (lVar9 = Road_PointInTriangle
                                   ((int)psVar4 + (sVar14 * 8 - (int)sVar14) * 4 + iVar12,iVar11,
                                    param_2), lVar9 != 1)) {
          if (((short)(sVar2 + 3) < *psVar4) &&
             (lVar9 = Road_PointInTriangle
                                ((int)psVar4 + (short)(sVar2 + 3) * 0x1c + iVar12,iVar11,param_2),
             lVar9 == 1)) {
            psVar10[1] = sVar16;
          }
          else if (((short)(sVar2 + -3) < 0) ||
                  (lVar9 = Road_PointInTriangle
                                     ((int)psVar4 + (short)(sVar2 + -3) * 0x1c + iVar12,iVar11,
                                      param_2), lVar9 != 1)) {
            if (CONCAT44((int)((ulong)(long)sVar8 >> 0x20),(int)sVar8) < (long)*psVar4) {
              if (CONCAT44((int)((ulong)(long)sVar7 >> 0x20),(int)sVar7) < 1) {
                psVar10[1] = sVar7;
                lVar15 = maybe_Road_FindCellContaining(param_1,param_2,param_3);
              }
              else {
                lVar15 = 0;
                iVar11 = 0;
                iVar12 = *(int *)(*(int *)(*piVar13 + 4) + *psVar10 * 4);
                do {
                  if (*(short *)(iVar12 + 4) != -1) {
                    sVar2 = *(short *)(iVar12 + 6);
                    sVar7 = *(short *)(iVar12 + 8);
                    iVar5 = *(int *)(*(int *)(*piVar13 + 4) + sVar2 * 4);
                    lVar9 = Road_PointInTriangle
                                      (iVar5 + *(int *)(iVar5 + 0x44) + sVar7 * 0x1c,
                                       iVar5 + (uint)*(ushort *)(iVar5 + 2),param_2);
                    if (lVar9 == 1) {
                      *psVar10 = sVar2;
                      psVar10[1] = sVar7;
                      lVar15 = 1;
                      break;
                    }
                  }
                  iVar11 = iVar11 + 1;
                  iVar12 = iVar12 + 6;
                } while (iVar11 < 6);
              }
            }
            else {
              psVar10[1] = sVar8;
              lVar15 = maybe_Road_FindCellContaining(param_1,param_2,param_3);
            }
          }
          else {
            psVar10[1] = sVar14;
          }
        }
        else {
          psVar10[1] = sVar14;
        }
      }
      else {
        psVar10[1] = sVar7;
      }
      if (lVar15 == 0) {
        if (*psVar10 == -1) {
LAB_0018a750:
          sVar2 = psVar10[1];
        }
        else {
          iVar11 = 0;
          iVar12 = *(int *)(*(int *)(*piVar13 + 4) + *psVar10 * 4);
          do {
            if (*(short *)(iVar12 + 4) != -1) {
              sVar2 = *(short *)(iVar12 + 6);
              iVar5 = *(int *)(*(int *)(*piVar13 + 4) + sVar2 * 4);
              iVar6 = *(int *)(iVar5 + 0x44);
              uVar3 = *(ushort *)(iVar5 + 2);
              sVar7 = Road_PointInCell(iVar5,*(undefined2 *)(iVar12 + 8),param_2);
              if (sVar7 == -1) {
                sVar7 = Road_PointInCell(iVar5,0xffffffffffffffff,param_2);
              }
              if ((sVar7 != -1) &&
                 (lVar15 = Road_PointInTriangle
                                     (iVar5 + iVar6 + sVar7 * 0x1c,iVar5 + (uint)uVar3,param_2),
                 lVar15 == 1)) {
                *psVar10 = sVar2;
                psVar10[1] = sVar7;
                goto LAB_0018a750;
              }
            }
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + 6;
          } while (iVar11 < 6);
          sVar2 = psVar10[1];
        }
        if (sVar2 == -1) {
          uStack_10 = 0xffffffff;
          lVar15 = maybe_Road_FindSectionCell(param_2,param_3,param_1);
          if (lVar15 != 1) {
            uStack_10 = 0xfffffffe;
            lVar15 = maybe_Road_FindSectionTriangle(param_2,param_3,param_1);
            if (lVar15 != 1) {
              psVar10[1] = sVar1;
              uStack_10 = 0xfffffffd;
            }
          }
        }
      }
      else {
        uStack_10 = 0;
      }
    }
  }
  return uStack_10;
}

// 0x0018a810  size 0x864
ulong Road_RaycastGround(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                        int param_5)

{
  short *psVar1;
  bool bVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  short sVar7;
  short sVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  short *psVar12;
  ushort *puVar13;
  short *psVar14;
  float *pfVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iStack_60;
  short sStack_50;
  short sStack_34;
  short sStack_32;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  sStack_32 = (short)((uint)param_3 >> 0x10);
  sStack_34 = (short)param_3;
  sStack_50 = sStack_32;
  if (param_4 != 0) {
    Vu0_SetUnitW(param_4);
  }
  if (param_5 != 0) {
    Vu0_SetUnitW(param_5);
    *(undefined4 *)(param_5 + 4) = 0x3f800000;
  }
  uVar4 = 0xffffffffffffffff;
  if (sStack_34 != -1) {
    piVar16 = (int *)param_1;
    psVar14 = *(short **)(*(int *)(*piVar16 + 4) + sStack_34 * 4);
    if (sStack_32 != -1) {
      lVar5 = maybe_Road_FindCellIndex(psVar14,sStack_32,param_2,0);
      sVar7 = sStack_50;
      if (lVar5 == -1) {
        uVar10 = 0;
        psVar12 = &DAT_00363590;
        do {
          sVar7 = sStack_32 + *psVar12;
          if (sVar7 < 0) {
            sVar8 = -1;
          }
          else {
            sVar8 = sStack_34;
            if (*psVar14 <= sVar7) {
              sVar8 = -1;
            }
          }
          if (sVar8 != -1) {
            psVar14 = *(short **)(*(int *)(*piVar16 + 4) + sVar8 * 4);
            lVar5 = maybe_Road_FindCellIndex(psVar14,sVar7,param_2,0);
            if (lVar5 != -1) break;
          }
          uVar10 = uVar10 + 1;
          psVar12 = psVar12 + 1;
          sVar7 = sStack_50;
        } while (uVar10 < 4);
      }
      sStack_50 = sVar7;
      if (lVar5 == -1) {
        iVar17 = 0;
        psVar12 = psVar14;
        do {
          if ((psVar12[2] != -1) && (psVar12[2] == sStack_32)) {
            sVar7 = psVar12[4];
            psVar1 = *(short **)(*(int *)(*piVar16 + 4) + psVar12[3] * 4);
            lVar5 = maybe_Road_FindCellIndex(psVar1,sVar7,param_2,0);
            if (lVar5 != -1) {
              psVar14 = psVar1;
              sStack_50 = sVar7;
              break;
            }
          }
          iVar17 = iVar17 + 1;
          psVar12 = psVar12 + 3;
        } while (iVar17 < 6);
      }
      if (lVar5 == -1) {
        iVar17 = 0;
        iStack_60 = 0;
        do {
          sVar7 = *(short *)((int)psVar14 + iStack_60 + 4);
          if ((sVar7 != -1) && (sVar7 == sStack_32)) {
            uVar10 = 0;
            psVar12 = &DAT_00363590;
            do {
              sVar7 = *(short *)((int)psVar14 + iStack_60 + 6);
              sVar8 = *(short *)((int)psVar14 + iStack_60 + 8) + *psVar12;
              psVar1 = *(short **)(*(int *)(*piVar16 + 4) + sVar7 * 4);
              if (sVar8 < 0) {
                sVar7 = -1;
              }
              else if (*psVar1 <= sVar8) {
                sVar7 = -1;
              }
              if ((sVar7 != -1) &&
                 (lVar5 = maybe_Road_FindCellIndex(psVar1,sVar8,param_2,0), lVar5 != -1)) {
                psVar14 = psVar1;
                sStack_50 = sVar8;
                break;
              }
              uVar10 = uVar10 + 1;
              psVar12 = psVar12 + 1;
            } while (uVar10 < 4);
          }
          iVar17 = iVar17 + 1;
          iStack_60 = iStack_60 + 6;
        } while (iVar17 < 6);
      }
      uVar4 = 0xffffffffffffffff;
      if (lVar5 != -1) {
        bVar2 = true;
        puVar13 = (ushort *)((int)psVar14 + (int)lVar5 * 0xc + *(int *)(psVar14 + 0x24));
        uVar4 = (ulong)puVar13[4];
        pfVar9 = (float *)((int)psVar14 + (uint)*puVar13 * 0x10 + *(int *)(psVar14 + 0x20));
        if (uVar4 == 4) {
          lVar5 = maybe_Road_FindCellIndex(psVar14,sStack_50,param_2,1);
          if ((lVar5 == -1) && ((long)(sStack_50 + 1) < (long)*psVar14)) {
            lVar5 = maybe_Road_FindCellIndex(psVar14,(long)(sStack_50 + 1),param_2,1);
          }
          if ((lVar5 == -1) && (-1 < sStack_50 + -1)) {
            lVar5 = maybe_Road_FindCellIndex(psVar14,sStack_50 + -1,param_2,1);
          }
          if ((lVar5 == -1) && ((long)(sStack_50 + 2) < (long)*psVar14)) {
            lVar5 = maybe_Road_FindCellIndex(psVar14,(long)(sStack_50 + 2),param_2,1);
          }
          if ((lVar5 == -1) && (-1 < sStack_50 + -2)) {
            lVar5 = maybe_Road_FindCellIndex(psVar14,sStack_50 + -2,param_2,1);
          }
          if (lVar5 == -1) {
            bVar2 = false;
          }
          else {
            puVar13 = (ushort *)((int)psVar14 + (int)lVar5 * 0xc + *(int *)(psVar14 + 0x24));
            pfVar9 = (float *)((int)psVar14 + (uint)*puVar13 * 0x10 + *(int *)(psVar14 + 0x20));
          }
        }
        pfVar15 = (float *)param_2;
        if ((puVar13[3] == 0xffff) || ((puVar13[5] & 1) == 0)) {
          RoadMesh_Init(param_1,psVar14,puVar13,&fStack_10,0,1,2);
          fVar18 = pfVar9[1] +
                   (fStack_10 / fStack_c) * (*pfVar9 - *pfVar15) +
                   (fStack_8 / fStack_c) * (pfVar9[2] - pfVar15[2]) + 0.05;
        }
        else {
          iVar17 = *(int *)(psVar14 + 0x20);
          fVar21 = *pfVar15;
          fVar20 = pfVar15[2];
          pfVar3 = (float *)((int)psVar14 + (uint)puVar13[3] * 0x10 + iVar17);
          fVar18 = pfVar3[2];
          pfVar11 = (float *)((int)psVar14 + (uint)*puVar13 * 0x10 + iVar17);
          pfVar6 = (float *)((int)psVar14 + (uint)puVar13[2] * 0x10 + iVar17);
          pfVar9 = (float *)((int)psVar14 + (uint)puVar13[1] * 0x10 + iVar17);
          fVar22 = *pfVar3 - fVar21;
          fVar19 = pfVar9[2];
          fVar23 = *pfVar9 - fVar21;
          if (0.0 < (pfVar11[2] - fVar20) * (*pfVar6 - fVar21) -
                    (*pfVar11 - fVar21) * (pfVar6[2] - fVar20)) {
            RoadMesh_Init(param_1,psVar14,puVar13,&fStack_20,0,1,2);
            fVar21 = pfVar11[2];
          }
          else {
            RoadMesh_Init(param_1,psVar14,puVar13,&fStack_20,0,2,3);
            fVar21 = pfVar11[2];
          }
          fVar21 = pfVar11[1] +
                   (fStack_20 / fStack_1c) * (*pfVar11 - *pfVar15) +
                   (fStack_18 / fStack_1c) * (fVar21 - pfVar15[2]);
          if (0.0 < (fVar19 - fVar20) * fVar22 - fVar23 * (fVar18 - fVar20)) {
            RoadMesh_Init(param_1,psVar14,puVar13,&fStack_30,1,2,3);
          }
          else {
            RoadMesh_Init(param_1,psVar14,puVar13,&fStack_30,0,1,3);
            pfVar9 = pfVar11;
          }
          fVar18 = (fVar21 + pfVar9[1] +
                             (fStack_30 / fStack_2c) * (*pfVar9 - *pfVar15) +
                             (fStack_28 / fStack_2c) * (pfVar9[2] - pfVar15[2])) / 2.0 + 0.05;
          sceVu0AddVector(&fStack_10,&fStack_20,&fStack_30);
          sceVu0ScaleVector(0x3f000000,&fStack_10,&fStack_10);
          sceVu0Normalize(param_5,&fStack_10);
        }
        if ((uVar4 == 4) && (!bVar2)) {
          fVar18 = fVar18 + -0.02;
        }
        fVar19 = (float)fabsf(pfVar15[1] - fVar18);
        if (fVar19 < 9.0) {
          pfVar15[1] = fVar18;
          if ((int)param_4 != 0) {
            maybe_Road_ClipToEdge
                      (param_2,puVar13,(int)psVar14 + *(int *)(psVar14 + 0x20),(int)param_4);
          }
          if (param_5 != 0) {
            uStack_4 = 0x3f800000;
            sceVu0Normalize(param_5,&fStack_10);
          }
        }
        else {
          uVar4 = 0xfffffffffffffffe;
        }
      }
    }
  }
  return uVar4;
}

// 0x0018b080  size 0xc8
void RoadMesh_Init(undefined8 param_1,int param_2,int param_3,undefined8 param_4,int param_5,
                  int param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  param_2 = param_2 + *(int *)(param_2 + 0x40);
  puVar3 = (undefined4 *)(param_2 + (uint)*(ushort *)(param_3 + param_5 * 2) * 0x10);
  uStack_10 = *puVar3;
  puVar2 = (undefined4 *)(param_2 + (uint)*(ushort *)(param_3 + param_6 * 2) * 0x10);
  puVar1 = (undefined4 *)(param_2 + (uint)*(ushort *)(param_3 + param_7 * 2) * 0x10);
  uStack_c = puVar3[1];
  uStack_8 = puVar3[2];
  uStack_20 = *puVar2;
  uStack_1c = puVar2[1];
  uStack_18 = puVar2[2];
  uStack_30 = *puVar1;
  uStack_2c = puVar1[1];
  uStack_28 = puVar1[2];
  uStack_24 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_4 = 0x3f800000;
  *(undefined4 *)((int)param_4 + 0xc) = 0x3f800000;
  maybe_Road_NormalizeDir(param_4,&uStack_10,&uStack_20,&uStack_30);
  return;
}

// 0x0018b1b0  size 0x2c
void RoadMesh_Free(undefined4 *param_1)

{
  Mem_Free(*param_1);
  *param_1 = 0;
  return;
}

// 0x0018b1e0  size 0xc8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 RoadMesh_Load(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  Sema_Wait(0x36efc0);
  uVar1 = _g_FileShared2;
  Sema_Signal(0x36efc0,0);
  if (uVar1 < 0x100) {
    uVar1 = g_ArcToc->entries[(int)param_2].unpackedSize;
    if (uVar1 == 0) {
      uVar1 = g_ArcToc->entries[(int)param_2].sectorCount;
    }
    else {
      uVar1 = uVar1 + 0x7ff >> 0xb;
    }
    uVar2 = Mem_AllocAligned(uVar1 << 0xb,0x10,0x430750);
    *(undefined4 *)param_1 = uVar2;
    uVar3 = Arc_LoadFileEx(param_2,*(undefined4 *)param_1,0x18b150,param_1,0,0);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}

// 0x0018b2b0  size 0x10
void RoadMesh_MarkLoaded(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}

// 0x0018b2c0  size 0xcc
void maybe_Road_NormalizeDir(undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  
  pfVar1 = (float *)param_1;
  *pfVar1 = (param_4[1] - param_3[1]) * (param_3[2] - param_2[2]) -
            (param_4[2] - param_3[2]) * (param_3[1] - param_2[1]);
  pfVar1[1] = (param_4[2] - param_3[2]) * (*param_3 - *param_2) -
              (*param_4 - *param_3) * (param_3[2] - param_2[2]);
  pfVar1[2] = (*param_4 - *param_3) * (param_3[1] - param_2[1]) -
              (param_4[1] - param_3[1]) * (*param_3 - *param_2);
  sceVu0Normalize(pfVar1,param_1);
  pfVar1[3] = 1.0;
  return;
}

// 0x0018b390  size 0x1b4
int maybe_Road_FindCellIndex(int param_1,int param_2,float *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar5 = 0;
  puVar4 = (ushort *)(param_1 + *(int *)(param_1 + 0x44) + param_2 * 0x1c);
  uVar1 = puVar4[1];
  iVar3 = param_1 + *(int *)(param_1 + 0x40);
  uVar2 = (uint)*puVar4;
  puVar4 = (ushort *)(param_1 + *(int *)(param_1 + 0x48) + (uint)uVar1 * 0xc);
  if (uVar2 != 0) {
    do {
      if ((param_4 != 1) || (puVar4[4] != 4)) {
        fVar12 = param_3[2];
        fVar14 = *param_3;
        pfVar7 = (float *)(iVar3 + (uint)*puVar4 * 0x10);
        pfVar6 = (float *)(iVar3 + (uint)puVar4[1] * 0x10);
        fVar13 = pfVar7[2] - fVar12;
        fVar11 = *pfVar6 - fVar14;
        fVar15 = *pfVar7 - fVar14;
        fVar9 = pfVar6[2] - fVar12;
        if (fVar13 * fVar11 - fVar15 * fVar9 <= 0.001) {
          pfVar6 = (float *)(iVar3 + (uint)puVar4[2] * 0x10);
          fVar10 = *pfVar6 - fVar14;
          fVar8 = pfVar6[2] - fVar12;
          if ((fVar9 * fVar10 + 0.0) - fVar11 * fVar8 <= 0.001) {
            if (puVar4[3] == 0xffff) {
              fVar12 = (fVar8 * fVar15 + 0.0) - fVar10 * fVar13;
            }
            else {
              pfVar6 = (float *)(iVar3 + (uint)puVar4[3] * 0x10);
              fVar14 = *pfVar6 - fVar14;
              fVar12 = pfVar6[2] - fVar12;
              if (0.001 < (fVar8 * fVar14 + 0.0) - fVar10 * fVar12) goto LAB_0018b508;
              fVar12 = (fVar12 * fVar15 + 0.0) - fVar14 * fVar13;
            }
            if (fVar12 <= 0.001) {
              return iVar5 + (uint)uVar1;
            }
          }
        }
      }
LAB_0018b508:
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 6;
    } while (iVar5 < (int)uVar2);
  }
  return -1;
}

// 0x0018b550  size 0x1b4
bool maybe_Road_FindCellContaining(int *param_1,undefined8 param_2,short *param_3)

{
  bool bVar1;
  short sVar2;
  short *psVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  short sVar7;
  short *psVar8;
  short sVar9;
  
  sVar9 = *param_3;
  sVar7 = param_3[1];
  psVar8 = *(short **)(*(int *)(*param_1 + 4) + sVar9 * 4);
  sVar4 = sVar7;
  if (sVar7 < 0) {
    sVar4 = 0;
  }
  sVar4 = Road_PointInCell(psVar8,sVar4,param_2);
  bVar1 = sVar4 != -1;
  if (bVar1) {
    sVar7 = sVar4;
  }
  if ((sVar7 < 0) || (sVar4 = sVar7, *psVar8 <= sVar7)) {
    iVar6 = 0;
    psVar5 = psVar8;
    do {
      if (psVar5[2] != -1) {
        sVar2 = psVar5[3];
        psVar3 = *(short **)(*(int *)(*param_1 + 4) + sVar2 * 4);
        sVar4 = Road_PointInCell(psVar3,psVar5[4],param_2);
        if (sVar4 != -1) {
          bVar1 = true;
          sVar9 = sVar2;
          psVar8 = psVar3;
          goto LAB_0018b604;
        }
      }
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 3;
    } while (iVar6 < 6);
  }
  else {
LAB_0018b604:
    sVar7 = sVar4;
  }
  if ((sVar7 < 0) || (*psVar8 <= sVar7)) {
    sVar7 = 0;
  }
  *param_3 = sVar9;
  param_3[1] = sVar7;
  return bVar1;
}

// 0x0018b710  size 0x528
void maybe_Road_ClipToEdge(float *param_1,ushort *param_2,int param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  float afStack_80 [2];
  float fStack_78;
  float afStack_70 [2];
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float afStack_30 [3];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  bVar4 = true;
  if ((param_2[3] != 0xffff) &&
     (pfVar6 = (float *)((uint)param_2[2] * 0x10 + param_3),
     pfVar5 = (float *)((uint)*param_2 * 0x10 + param_3), fVar8 = pfVar6[2], fVar7 = *pfVar6,
     (param_1[2] - fVar8) * (*pfVar5 - fVar7) - (*param_1 - fVar7) * (pfVar5[2] - fVar8) < 0.0)) {
    bVar4 = false;
  }
  if (bVar4) {
    uStack_10 = *(undefined4 *)(param_3 + (uint)*param_2 * 0x10);
    uStack_8 = *(undefined4 *)((uint)*param_2 * 0x10 + param_3 + 8);
    uStack_20 = *(undefined4 *)(param_3 + (uint)param_2[1] * 0x10);
    uStack_18 = *(undefined4 *)((uint)param_2[1] * 0x10 + param_3 + 8);
    afStack_30[0] = *(float *)(param_3 + (uint)param_2[2] * 0x10);
    afStack_30[2] = *(float *)((uint)param_2[2] * 0x10 + param_3 + 8);
    uVar1 = *(ushort *)((uint)*param_2 * 0x10 + param_3 + 0xc);
    uVar2 = *(ushort *)((uint)param_2[1] * 0x10 + param_3 + 0xc);
    uVar3 = *(ushort *)((uint)param_2[2] * 0x10 + param_3 + 0xc);
  }
  else {
    uStack_10 = *(undefined4 *)(param_3 + (uint)param_2[2] * 0x10);
    uStack_8 = *(undefined4 *)((uint)param_2[2] * 0x10 + param_3 + 8);
    uStack_20 = *(undefined4 *)(param_3 + (uint)param_2[3] * 0x10);
    uStack_18 = *(undefined4 *)((uint)param_2[3] * 0x10 + param_3 + 8);
    afStack_30[0] = *(float *)(param_3 + (uint)*param_2 * 0x10);
    afStack_30[2] = *(float *)((uint)*param_2 * 0x10 + param_3 + 8);
    uVar1 = *(ushort *)((uint)param_2[2] * 0x10 + param_3 + 0xc);
    uVar2 = *(ushort *)((uint)param_2[3] * 0x10 + param_3 + 0xc);
    uVar3 = *(ushort *)((uint)*param_2 * 0x10 + param_3 + 0xc);
  }
  fStack_38 = (float)((uVar1 & 0x1f) << 3);
  fStack_3c = (float)(((int)(uint)uVar1 >> 5 & 0x1fU) << 3);
  fStack_40 = (float)(((int)(uint)uVar1 >> 10 & 0x1fU) << 3);
  fStack_48 = (float)((uVar2 & 0x1f) << 3);
  fStack_4c = (float)(((int)(uint)uVar2 >> 5 & 0x1fU) << 3);
  fStack_50 = (float)(((int)(uint)uVar2 >> 10 & 0x1fU) << 3);
  fStack_58 = (float)((uVar3 & 0x1f) << 3);
  fStack_5c = (float)(((int)(uint)uVar3 >> 5 & 0x1fU) << 3);
  fStack_60 = (float)(((int)(uint)uVar3 >> 10 & 0x1fU) << 3);
  uStack_4 = 0x3f800000;
  uStack_c = 0;
  uStack_14 = 0x3f800000;
  uStack_1c = 0;
  uStack_24 = 0x3f800000;
  afStack_30[1] = 0.0;
  uStack_34 = 0x437f0000;
  uStack_44 = 0x437f0000;
  uStack_54 = 0x437f0000;
  sceVu0SubVector(afStack_70,&uStack_10,afStack_30);
  sceVu0SubVector(afStack_80,&uStack_10,&uStack_20);
  sceVu0SubVector(auStack_a0,&fStack_40,&fStack_60);
  sceVu0SubVector(auStack_90,&fStack_40,&fStack_50);
  fVar7 = param_1[2] - afStack_30[2];
  fVar8 = -1.0 / (fStack_78 * afStack_70[0] - afStack_80[0] * fStack_68);
  fVar9 = *param_1 - afStack_30[0];
  sceVu0ScaleVector(fVar8 * (fVar9 * fStack_68 - fVar7 * afStack_70[0]),auStack_90,auStack_90);
  sceVu0ScaleVector(fVar8 * (fVar9 * fStack_78 - fVar7 * afStack_80[0]),auStack_a0,auStack_a0);
  sceVu0SubVector(param_4,auStack_90,auStack_a0);
  sceVu0AddVector(param_4,param_4,&fStack_60);
  sceVu0ScaleVector(0x3b842108,param_4,param_4);
  return;
}

// 0x0018bc40  size 0x240
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int maybe_Road_FindSectionCell(undefined8 param_1,short *param_2,undefined8 param_3)

{
  short sVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  short *psVar9;
  int iVar10;
  
  iVar10 = 0;
  iVar6 = 0;
  _s_Road_FindSectionCell_1 = 0xffff;
  _s_Road_FindSectionCell_2 = 0xffff;
  _s_Road_FindSectionCell_3 = 0xffff;
  _s_Road_FindSectionCell_4 = 0xffff;
  _s_Road_FindSectionCell_5 = 0xffff;
  _s_Road_FindSectionCell_6 = 0xffff;
  piVar8 = (int *)param_3;
  if (*param_2 != -1) {
    iVar7 = 0;
    psVar9 = (short *)&s_Road_FindSectionCell_1;
    iVar5 = *(int *)(*(int *)(*piVar8 + 4) + *param_2 * 4);
    do {
      if (*(short *)(iVar5 + 4) != -1) {
        sVar1 = *(short *)(iVar5 + 6);
        lVar3 = RoadData_GetSection(param_3,param_1,sVar1);
        if (lVar3 == 0) {
          lVar3 = Road_PointInCell(*(undefined4 *)(*(int *)(*piVar8 + 4) + sVar1 * 4),
                                   0xffffffffffffffff,param_1);
          if (lVar3 != -1) {
            param_2[1] = (short)lVar3;
            *param_2 = sVar1;
            iVar10 = 1;
            break;
          }
          *psVar9 = sVar1;
          iVar6 = iVar6 + 1;
          psVar9 = psVar9 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 6;
    } while (iVar7 < 6);
    *(undefined2 *)(&s_Road_FindSectionCell_1 + iVar6 * 2) = 0xffff;
  }
  if ((iVar10 == 0) && (lVar3 = 0, 0 < *(int *)*piVar8)) {
    iVar5 = 0;
    do {
      bVar2 = true;
      iVar7 = 0;
      if (0 < iVar6) {
        psVar9 = (short *)&s_Road_FindSectionCell_1;
        do {
          if (lVar3 == *psVar9) {
            bVar2 = false;
            break;
          }
          iVar7 = iVar7 + 1;
          psVar9 = psVar9 + 1;
        } while (iVar7 < iVar6);
      }
      if (bVar2) {
        lVar4 = RoadData_GetSection(param_3,param_1,(short)lVar3);
        if ((lVar4 == 0) &&
           (lVar4 = Road_PointInCell(*(undefined4 *)(*(int *)(*piVar8 + 4) + iVar5),
                                     0xffffffffffffffff,param_1), lVar4 != -1)) {
          param_2[1] = (short)lVar4;
          iVar10 = 1;
          *param_2 = (short)lVar3;
          break;
        }
      }
      lVar3 = (long)((int)lVar3 + 1);
      iVar5 = iVar5 + 4;
    } while (lVar3 < *(int *)*piVar8);
  }
  return iVar10;
}

// 0x0018be90  size 0x104
undefined4 maybe_Road_FindSectionTriangle(undefined8 param_1,undefined2 *param_2,undefined8 param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fStack_4;
  
  uVar5 = 0;
  fStack_4 = 1e+06;
  piVar2 = (int *)param_3;
  iVar4 = 0;
  if (0 < *(int *)*piVar2) {
    iVar3 = 0;
    do {
      lVar1 = RoadData_GetSection(param_3,param_1,(short)iVar4);
      if ((lVar1 == 0) &&
         (lVar1 = maybe_Road_FindTriangle
                            (*(undefined4 *)(*(int *)(*piVar2 + 4) + iVar3),param_1,&fStack_4),
         lVar1 != -1)) {
        param_2[1] = (short)lVar1;
        *param_2 = (short)iVar4;
        uVar5 = 1;
        if (fStack_4 == 0.0) {
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)*piVar2);
  }
  return uVar5;
}

// 0x0018bfa0  size 0x368
/* WARNING: Removing unreachable block (ram,0x0018c0d8) */

long maybe_Road_FindTriangle(short *param_1,undefined8 param_2,float *param_3)

{
  ushort *puVar1;
  byte bVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar19 = -1;
  lVar15 = 0;
  fVar23 = *param_3;
  iVar17 = (int)param_1 + *(int *)(param_1 + 0x22);
  iVar16 = (int)param_1 + (uint)(ushort)param_1[1];
  if (0 < *param_1) {
    pfVar18 = (float *)param_2;
    do {
      bVar2 = 1;
      if ((pfVar18[1] <= *(float *)(iVar17 + 0x14) + 9.0) &&
         (*(float *)(iVar17 + 0x14) + -5.0 <= pfVar18[1])) {
        bVar2 = 0;
      }
      if ((bool)(bVar2 ^ 1)) {
        fVar21 = 0.0;
        fVar22 = 0.0;
        if (*(short *)(iVar17 + 0x12) == -1) {
          uVar12 = 3;
        }
        else {
          uVar12 = 4;
        }
        iVar14 = 0;
        if (uVar12 != 0) {
          if ((8 < uVar12) && (uVar12 < 0x7fffffff)) {
            iVar13 = iVar17;
            do {
              iVar14 = iVar14 + 8;
              puVar1 = (ushort *)(iVar13 + 0x1a);
              pfVar11 = (float *)(iVar16 + (uint)*(ushort *)(iVar13 + 0xc) * 8);
              pfVar10 = (float *)(iVar16 + (uint)*(ushort *)(iVar13 + 0xe) * 8);
              pfVar8 = (float *)(iVar16 + (uint)*(ushort *)(iVar13 + 0x10) * 8);
              pfVar7 = (float *)(iVar16 + (uint)*(ushort *)(iVar13 + 0x12) * 8);
              pfVar6 = (float *)(iVar16 + (uint)*(ushort *)(iVar13 + 0x14) * 8);
              pfVar5 = (float *)(iVar16 + (uint)*(ushort *)(iVar13 + 0x16) * 8);
              pfVar3 = (float *)(iVar16 + (uint)*(ushort *)(iVar13 + 0x18) * 8);
              iVar13 = iVar13 + 0x10;
              pfVar9 = (float *)(iVar16 + (uint)*puVar1 * 8);
              fVar21 = fVar21 + *pfVar11 + *pfVar10 + *pfVar8 + *pfVar7 + *pfVar6 + *pfVar5 +
                       *pfVar3 + *pfVar9;
              fVar22 = fVar22 + pfVar11[1] + pfVar10[1] + pfVar8[1] + pfVar7[1] + pfVar6[1] +
                       pfVar5[1] + pfVar3[1] + pfVar9[1];
            } while (iVar14 < (int)(uVar12 - 8));
          }
          if (iVar14 < (int)uVar12) {
            iVar13 = iVar17 + iVar14 * 2;
            do {
              puVar1 = (ushort *)(iVar13 + 0xc);
              iVar14 = iVar14 + 1;
              iVar13 = iVar13 + 2;
              pfVar3 = (float *)(iVar16 + (uint)*puVar1 * 8);
              fVar21 = fVar21 + *pfVar3;
              fVar22 = fVar22 + pfVar3[1];
            } while (iVar14 < (int)uVar12);
          }
        }
        fVar20 = fVar21 / (float)uVar12 - *pfVar18;
        fVar21 = fVar22 / (float)uVar12 - pfVar18[2];
        fVar21 = fVar20 * fVar20 + fVar21 * fVar21;
        if (fVar21 <= 62500.0) {
          if (fVar21 < fVar23) {
            *param_3 = fVar21;
            lVar19 = lVar15;
            fVar23 = fVar21;
          }
          lVar4 = Road_PointInTriangle(iVar17,iVar16,param_2);
          if (lVar4 != 0) {
            *param_3 = 0.0;
            return lVar15;
          }
        }
      }
      lVar15 = (long)((int)lVar15 + 1);
      iVar17 = iVar17 + 0x1c;
    } while (lVar15 < *param_1);
  }
  return lVar19;
}

