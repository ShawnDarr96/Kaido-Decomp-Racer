// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0015c000 - 0x00160000
#include "ghidra_types.h"

// 0x0015c0e0  size 0x8
void FUN_0015c0e0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}

// 0x0015c0f0  size 0x8
void FUN_0015c0f0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}

// 0x0015c100  size 0x8
undefined4 FUN_0015c100(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 0x0015c110  size 0x8
undefined4 FUN_0015c110(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// 0x0015c120  size 0x8
void FUN_0015c120(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = param_1;
  return;
}

// 0x0015c130  size 0x8
void FUN_0015c130(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}

// 0x0015c1b0  size 0x4c
long FUN_0015c1b0(long param_1,short param_2)

{
  if ((param_1 != 0) && (*(undefined4 *)param_1 = &DAT_0036e200, 0 < param_2)) {
    Mem_Free();
  }
  return param_1;
}

// 0x0015c200  size 0x1bc
undefined8 FUN_0015c200(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uStack_24;
  undefined4 uStack_14;
  undefined4 uStack_4;
  
  puVar6 = (undefined4 *)param_1;
  *puVar6 = &DAT_0036e200;
  puVar6[0xb] = 0x3f800000;
  puVar6[0xf] = 0x3f800000;
  puVar4 = puVar6 + 0x10;
  if (puVar4 < puVar6 + 0x18) {
    uVar9 = (int)(puVar6 + 0x18) - (int)(puVar6 + 0x10);
    uVar8 = uVar9 + 0xf;
    uVar5 = uVar8;
    if ((int)uVar8 < 0) {
      uVar5 = uVar9 + 0x1e;
    }
    uVar7 = ((int)uVar5 >> 4) + 1;
    if (8 < (int)uVar7) {
      bVar3 = false;
      bVar2 = false;
      if (puVar6 + 0x10 <= puVar6 + 0x18) {
        bVar1 = true;
        if (((uVar9 & 0x80000000) == 0) && ((uVar8 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if ((((int)uVar5 >> 4 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        do {
          puVar4[3] = 0x3f800000;
          puVar4[7] = 0x3f800000;
          puVar4[0xb] = 0x3f800000;
          puVar4[0xf] = 0x3f800000;
          puVar4[0x13] = 0x3f800000;
          puVar4[0x17] = 0x3f800000;
          puVar4[0x1b] = 0x3f800000;
          puVar4[0x1f] = 0x3f800000;
          puVar4 = puVar4 + 0x20;
        } while (puVar4 < puVar6 + -8);
      }
    }
    for (; puVar4 < puVar6 + 0x18; puVar4 = puVar4 + 4) {
      puVar4[3] = 0x3f800000;
    }
  }
  puVar6[10] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[5] = 0;
  puVar6[1] = 0x3f000000;
  puVar6[2] = 0x3f000000;
  puVar6[3] = 0x3e800000;
  puVar6[4] = 0x3d4ccccd;
  puVar6[0xc] = 0x3f800000;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = uStack_4;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0x3f800000;
  puVar6[0x12] = 0;
  puVar6[0x13] = uStack_14;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0x3f800000;
  puVar6[0x17] = uStack_24;
  return param_1;
}

// 0x0015c3c0  size 0x10c
void FUN_0015c3c0(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[2];
  piVar2 = (int *)param_2;
  if (piVar1 == (int *)0x0) {
    FUN_00162410(*param_1);
    piVar1 = (int *)param_1[3];
  }
  else {
    if (*piVar1 == *param_1) {
      piVar1[4] = (int)piVar2;
    }
    else {
      piVar1[5] = (int)piVar2;
    }
    piVar1 = (int *)param_1[3];
  }
  if (piVar1 == (int *)0x0) {
    FUN_00162410(param_1[1],param_2);
    piVar1 = (int *)param_1[4];
  }
  else {
    if (*piVar1 == param_1[1]) {
      piVar1[4] = (int)piVar2;
    }
    else {
      piVar1[5] = (int)piVar2;
    }
    piVar1 = (int *)param_1[4];
  }
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == *param_1) {
      piVar1[2] = (int)piVar2;
    }
    else {
      piVar1[3] = (int)piVar2;
    }
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == param_1[1]) {
      piVar1[2] = (int)piVar2;
    }
    else {
      piVar1[3] = (int)piVar2;
    }
  }
  *piVar2 = *param_1;
  piVar2[1] = param_1[1];
  piVar2[2] = param_1[2];
  piVar2[3] = param_1[3];
  piVar2[4] = param_1[4];
  piVar2[5] = param_1[5];
  piVar2[6] = param_1[6];
  piVar2[7] = param_1[7];
  return;
}

// 0x0015c4d0  size 0xc4
void FUN_0015c4d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 == (int *)0x0) {
    FUN_00162410(*param_1);
    piVar1 = (int *)param_1[3];
  }
  else {
    if (*piVar1 == *param_1) {
      piVar1[4] = param_1[4];
    }
    else {
      piVar1[5] = param_1[4];
    }
    piVar1 = (int *)param_1[3];
  }
  if (piVar1 == (int *)0x0) {
    FUN_00162410(param_1[1]);
    piVar1 = (int *)param_1[4];
  }
  else {
    if (*piVar1 == param_1[1]) {
      piVar1[4] = param_1[5];
    }
    else {
      piVar1[5] = param_1[5];
    }
    piVar1 = (int *)param_1[4];
  }
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == *param_1) {
      piVar1[2] = param_1[2];
    }
    else {
      piVar1[3] = param_1[2];
    }
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == param_1[1]) {
      piVar1[2] = param_1[3];
    }
    else {
      piVar1[3] = param_1[3];
    }
  }
  return;
}

// 0x0015c5a0  size 0x48
void FUN_0015c5a0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    FUN_00162410(*(undefined4 *)(param_1 + 4));
  }
  else if (*piVar1 == *(int *)(param_1 + 4)) {
    piVar1[4] = param_2;
  }
  else {
    piVar1[5] = param_2;
  }
  return;
}

// 0x0015c5f0  size 0x48
void FUN_0015c5f0(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 == (int *)0x0) {
    FUN_00162410(*param_1);
  }
  else if (*piVar1 == *param_1) {
    piVar1[4] = param_2;
  }
  else {
    piVar1[5] = param_2;
  }
  return;
}

// 0x0015c640  size 0x18
int FUN_0015c640(int *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 == param_2) {
    iVar1 = param_1[4];
  }
  else {
    iVar1 = param_1[5];
  }
  return iVar1;
}

// 0x0015c660  size 0x124
float FUN_0015c660(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_10 [16];
  
  iVar1 = *param_1;
  if ((((*(char *)(iVar1 + 0xf4) == '\0') && (iVar2 = param_1[1], *(char *)(iVar2 + 0xf4) == '\0'))
      && (*(char *)(iVar1 + 0xf5) == '\0')) && (*(char *)(iVar2 + 0xf5) == '\0')) {
    fVar5 = (float)FUN_00164f10(*(undefined4 *)(iVar1 + 4));
    fVar6 = (float)FUN_00164f10(*(undefined4 *)(iVar2 + 4));
    if (fVar5 + fVar6 == 0.0) {
      fVar5 = fRam0036f104 + fRam0036f100;
    }
    else {
      uVar3 = FUN_00159cb0(*param_1 + 0x10);
      uVar4 = FUN_00159cb0(param_1[1] + 0x10);
      FUN_00163b40(auStack_10,uVar3,uVar4);
      fVar7 = (float)FUN_00163c10(auStack_10);
      fVar8 = (float)FUN_00159c90(*(undefined4 *)(*param_1 + 8));
      fVar9 = (float)FUN_00159c90(*(undefined4 *)(param_1[1] + 8));
      fVar5 = fRam0036f104 + (fVar7 - (fVar8 + fVar9)) / (fVar5 + fVar6);
    }
  }
  else {
    fVar5 = fRam0036f104 + fRam0036f100;
  }
  return fVar5;
}

// 0x0015c790  size 0x318
void FUN_0015c790(float param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  iVar6 = param_2[1];
  bVar1 = (*(uint *)(*param_2 + 0xe8) & *(uint *)(iVar6 + 0xd8)) != 0;
  bVar2 = (*(uint *)(iVar6 + 0xe8) & *(uint *)(*param_2 + 0xd8)) != 0;
  if (((bVar1) || (bVar2)) && (0.0 < param_1)) {
    fVar13 = (float)FUN_00165390(*(undefined4 *)(*param_2 + 4));
    fVar11 = (float)FUN_00165390(*(undefined4 *)(iVar6 + 4));
    fVar13 = 1.0 / (fVar13 + fVar11);
    lVar5 = FUN_00164260(*(undefined4 *)(param_2[1] + 4));
    if (lVar5 == 0) {
      fVar11 = (float)FUN_00165390(*(undefined4 *)(param_2[1] + 4));
      fVar11 = fVar13 * fVar11;
    }
    else {
      fVar11 = 1.0;
    }
    lVar4 = FUN_00164260(*(undefined4 *)(*param_2 + 4));
    if (lVar4 == 0) {
      fVar12 = (float)FUN_00165390(*(undefined4 *)(*param_2 + 4));
      fVar13 = fVar13 * -fVar12;
    }
    else {
      fVar13 = -1.0;
    }
    if (lVar4 == 0 && bVar1) {
      FUN_001638b0(param_1,auStack_30,param_5);
      FUN_001638b0(fVar11,auStack_20,auStack_30);
      FUN_00162530(*param_2,auStack_20);
    }
    if (lVar5 == 0 && bVar2) {
      FUN_001638b0(param_1,auStack_50,param_5);
      FUN_001638b0(fVar13,auStack_40,auStack_50);
      FUN_00162530(param_2[1],auStack_40);
    }
  }
  iVar6 = param_2[1];
  fVar13 = 0.0;
  iVar7 = *param_2;
  bVar1 = (*(uint *)(iVar7 + 0xe4) & *(uint *)(iVar6 + 0xd8)) != 0;
  bVar2 = (*(uint *)(iVar6 + 0xe4) & *(uint *)(iVar7 + 0xd8)) != 0;
  if ((bVar1) || (bVar2)) {
    fVar13 = (float)FUN_001645d0(*(undefined4 *)(iVar7 + 4),param_3,param_4,
                                 *(undefined4 *)(iVar6 + 4));
    FUN_001638b0(fVar13 * DAT_0036e754,auStack_10,param_4);
    if (bVar1) {
      FUN_001625c0(*param_2,param_3,auStack_10);
    }
    if (bVar2) {
      FUN_001638b0(0xbf800000,auStack_60,auStack_10);
      FUN_001625c0(param_2[1],param_3,auStack_60);
    }
  }
  lVar5 = FUN_00162470(*param_2);
  piVar10 = (int *)param_3;
  if (lVar5 != 0) {
    piVar9 = (int *)param_4;
    iVar6 = piVar9[1];
    iVar7 = piVar9[2];
    iVar8 = piVar9[3];
    piVar3 = (int *)lVar5;
    piVar3[8] = *piVar9;
    piVar3[9] = iVar6;
    piVar3[10] = iVar7;
    piVar3[0xb] = iVar8;
    iVar6 = piVar10[1];
    iVar7 = piVar10[2];
    iVar8 = piVar10[3];
    piVar3[4] = *piVar10;
    piVar3[5] = iVar6;
    piVar3[6] = iVar7;
    piVar3[7] = iVar8;
    piVar3[1] = *(int *)(param_2[1] + 0xd8);
    *piVar3 = param_2[1];
    piVar3[0x10] = (int)fVar13;
  }
  lVar5 = FUN_00162470(param_2[1]);
  if (lVar5 != 0) {
    FUN_001638b0(0xbf800000,&iStack_70,param_4);
    piVar3 = (int *)lVar5;
    piVar3[8] = iStack_70;
    piVar3[9] = iStack_6c;
    piVar3[10] = iStack_68;
    piVar3[0xb] = iStack_64;
    iVar6 = piVar10[1];
    iVar7 = piVar10[2];
    iVar8 = piVar10[3];
    piVar3[4] = *piVar10;
    piVar3[5] = iVar6;
    piVar3[6] = iVar7;
    piVar3[7] = iVar8;
    piVar3[1] = *(int *)(*param_2 + 0xd8);
    *piVar3 = *param_2;
    piVar3[0x10] = (int)fVar13;
  }
  return;
}

// 0x0015cab0  size 0x270
undefined8 FUN_0015cab0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  piVar6 = (int *)param_1;
  FUN_0015e170(0x42f570,*piVar6 + 0x10,piVar6[1] + 0x10);
  lVar2 = FUN_0015d630(0x42f570,piVar6 + 6);
  if (lVar2 == 0) {
    uVar3 = 0;
    iVar8 = 9;
    do {
      lVar2 = FUN_0015e180(0x42f570);
      if (lVar2 == 0) break;
      uVar3 = FUN_0015e160(0x42f570);
      iVar1 = (int)uVar3;
      FUN_0015c790(*(float *)(iVar1 + 0x30) + 0.01,param_1,uVar3,iVar1 + 0x10,iVar1 + 0x20);
      uVar3 = 1;
      bVar7 = false;
      if (((*(uint *)(*piVar6 + 0xe8) & *(uint *)(piVar6[1] + 0xd8)) != 0) &&
         ((*(uint *)(piVar6[1] + 0xe8) & *(uint *)(*piVar6 + 0xd8)) != 0)) {
        bVar7 = true;
      }
      if (!bVar7) {
        return 1;
      }
      lVar2 = FUN_0015d440(0x42f570);
      if (lVar2 != 0) {
        return 1;
      }
      bVar7 = iVar8 != 0;
      iVar8 = iVar8 + -1;
    } while (bVar7);
    uVar4 = FUN_00159ca0(*piVar6 + 0x10);
    uVar5 = FUN_00159ca0(piVar6[1] + 0x10);
    FUN_00163b40(&fStack_10,uVar4,uVar5);
    fStack_10 = fStack_10 * *(float *)(*piVar6 + 0xb0) * *(float *)(piVar6[1] + 0xb0);
    fStack_c = fStack_c * *(float *)(*piVar6 + 0xb4) * *(float *)(piVar6[1] + 0xb4);
    fStack_8 = fStack_8 * *(float *)(*piVar6 + 0xb8) * *(float *)(piVar6[1] + 0xb8);
    if (fStack_8 * fStack_8 + fStack_10 * fStack_10 + fStack_c * fStack_c < 0.01) {
      fStack_10 = 1.0;
      fStack_c = 0.0;
      fStack_8 = 0.0;
    }
    FUN_00163bc0(&fStack_10);
    uVar9 = 0;
    do {
      lVar2 = FUN_0015e240(0x42f570,&fStack_10);
      if (lVar2 == 0) break;
      uVar3 = FUN_0015e160(0x42f570);
      iVar8 = (int)uVar3;
      FUN_0015c790(*(float *)(iVar8 + 0x30) + 0.01,param_1,uVar3,iVar8 + 0x10,iVar8 + 0x20);
      uVar9 = uVar9 + 1;
      uVar3 = 1;
    } while (uVar9 < 3);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// 0x0015cd20  size 0x4c
void FUN_0015cd20(void)

{
  uGpffff8a24 = 0x3f000000;
  uGpffff8a28 = 0x3f800000;
  uGpffff8a2c = 0x3f000000;
  uGpffff8a30 = 0x3f800000;
  uGpffff8a44 = 0x3f000000;
  uGpffff8a48 = 0x3f800000;
  uGpffff8a4c = 0x3f000000;
  uGpffff8a50 = 0x3f800000;
  uGpffff8a34 = 0x3f000000;
  uGpffff8a38 = 0x3f800000;
  uGpffff8a3c = 0x3f000000;
  uGpffff8a40 = 0x3f800000;
  uGpffff8a54 = 0x3f000000;
  uGpffff8a5c = 0x3f000000;
  uGpffff8a58 = 0x3f800000;
  uGpffff8a60 = 0x3f800000;
  return;
}

// 0x0015cd70  size 0x48
void FUN_0015cd70(undefined4 param_1,ulong param_2)

{
  if ((param_2 & 0x7000000) != 0) {
    uGpffff8a28 = param_1;
  }
  if ((param_2 & 0x1000000) != 0) {
    uGpffff8a38 = param_1;
  }
  if ((param_2 & 0x2000000) != 0) {
    uGpffff8a48 = param_1;
  }
  if ((param_2 & 0x4000000) != 0) {
    uGpffff8a58 = param_1;
  }
  return;
}

// 0x0015cdc0  size 0x48
void FUN_0015cdc0(undefined4 param_1,ulong param_2)

{
  if ((param_2 & 0x7000000) != 0) {
    uGpffff8a24 = param_1;
  }
  if ((param_2 & 0x1000000) != 0) {
    uGpffff8a34 = param_1;
  }
  if ((param_2 & 0x2000000) != 0) {
    uGpffff8a44 = param_1;
  }
  if ((param_2 & 0x4000000) != 0) {
    uGpffff8a54 = param_1;
  }
  return;
}

// 0x0015ce10  size 0x48
void FUN_0015ce10(undefined4 param_1,ulong param_2)

{
  if ((param_2 & 0x7000000) != 0) {
    uGpffff8a30 = param_1;
  }
  if ((param_2 & 0x1000000) != 0) {
    uGpffff8a40 = param_1;
  }
  if ((param_2 & 0x2000000) != 0) {
    uGpffff8a50 = param_1;
  }
  if ((param_2 & 0x4000000) != 0) {
    uGpffff8a60 = param_1;
  }
  return;
}

// 0x0015ce60  size 0x48
void FUN_0015ce60(undefined4 param_1,ulong param_2)

{
  if ((param_2 & 0x7000000) != 0) {
    uGpffff8a2c = param_1;
  }
  if ((param_2 & 0x1000000) != 0) {
    uGpffff8a3c = param_1;
  }
  if ((param_2 & 0x2000000) != 0) {
    uGpffff8a4c = param_1;
  }
  if ((param_2 & 0x4000000) != 0) {
    uGpffff8a5c = param_1;
  }
  return;
}

// 0x0015ceb0  size 0x320
bool FUN_0015ceb0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  param_2[0xc] = 0;
  piVar10 = (int *)param_3;
  cVar2 = (**(code **)(*piVar10 + 0x18))(param_3);
  if (cVar2 == '\x02') {
    uVar11 = 0;
    do {
      puVar5 = (undefined4 *)FUN_0015a8b0(param_3,uVar11);
      (**(code **)(*piVar10 + 0x5c))(param_3,uVar11);
      uVar9 = DAT_0036257c;
      uVar8 = DAT_00362578;
      uVar7 = DAT_00362574;
      fVar12 = (float)puVar5[1];
      if ((float)param_2[0xc] < -fVar12) {
        param_2[4] = DAT_00362570;
        param_2[5] = uVar7;
        param_2[6] = uVar8;
        param_2[7] = uVar9;
        param_2[0xc] = -fVar12;
        uVar7 = puVar5[1];
        uVar8 = puVar5[2];
        uVar9 = puVar5[3];
        *param_2 = *puVar5;
        param_2[1] = uVar7;
        param_2[2] = uVar8;
        param_2[3] = uVar9;
        param_2[0xd] = 0x4000000;
      }
      (**(code **)(*piVar10 + 0x58))(param_3,uVar11,0);
      uVar11 = uVar11 + 1;
    } while (uVar11 < 4);
  }
  else if (cVar2 == '\x01') {
    uVar11 = 0;
    lVar6 = (**(code **)(*piVar10 + 0x34))(param_3);
    if (lVar6 != 0) {
      do {
        (**(code **)(*piVar10 + 0x5c))(param_3,uVar11);
        iVar3 = (**(code **)(*piVar10 + 0x38))(param_3,uVar11);
        uVar9 = DAT_0036257c;
        uVar8 = DAT_00362578;
        uVar7 = DAT_00362574;
        fVar12 = *(float *)(iVar3 + 4);
        if ((float)param_2[0xc] < -fVar12) {
          param_2[4] = DAT_00362570;
          param_2[5] = uVar7;
          param_2[6] = uVar8;
          param_2[7] = uVar9;
          param_2[0xc] = -fVar12;
          puVar5 = (undefined4 *)(**(code **)(*piVar10 + 0x38))(param_3,uVar11);
          uVar7 = puVar5[1];
          uVar8 = puVar5[2];
          uVar9 = puVar5[3];
          *param_2 = *puVar5;
          param_2[1] = uVar7;
          param_2[2] = uVar8;
          param_2[3] = uVar9;
          param_2[0xd] = 0x4000000;
        }
        (**(code **)(*piVar10 + 0x58))(param_3,uVar11,0);
        uVar11 = uVar11 + 1;
        uVar4 = (**(code **)(*piVar10 + 0x34))(param_3);
      } while (uVar11 < uVar4);
    }
  }
  else {
    iVar3 = FUN_0015bf20(param_3);
    uVar1 = DAT_0036257c;
    uVar9 = DAT_00362578;
    uVar8 = DAT_00362574;
    uVar7 = DAT_00362570;
    fVar12 = *(float *)(iVar3 + 4);
    fVar13 = (float)FUN_00159c90(param_3);
    fVar13 = fVar13 - fVar12;
    if ((float)param_2[0xc] < fVar13) {
      param_2[4] = uVar7;
      param_2[5] = uVar8;
      param_2[6] = uVar9;
      param_2[7] = uVar1;
      param_2[0xc] = fVar13;
      puVar5 = (undefined4 *)FUN_0015bf20(param_3);
      uVar7 = puVar5[1];
      uVar8 = puVar5[2];
      uVar9 = puVar5[3];
      *param_2 = *puVar5;
      param_2[1] = uVar7;
      param_2[2] = uVar8;
      param_2[3] = uVar9;
      fVar12 = (float)FUN_00159c90(param_3);
      param_2[2] = (float)param_2[2] - fVar12;
      param_2[0xd] = 0x4000000;
    }
  }
  fVar12 = (float)param_2[0xc];
  if (0.0 < fVar12) {
    param_2[0xc] = fVar12 + 0.01;
  }
  return 0.0 < fVar12;
}

// 0x0015d1d0  size 0x44
long FUN_0015d1d0(long param_1,short param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
    Mem_Free();
  }
  return param_1;
}

// 0x0015d220  size 0x8
void FUN_0015d220(void)

{
  uGpffff8a24 = 0x3f000000;
  uGpffff8a28 = 0x3f800000;
  uGpffff8a2c = 0x3f000000;
  uGpffff8a30 = 0x3f800000;
  uGpffff8a44 = 0x3f000000;
  uGpffff8a48 = 0x3f800000;
  uGpffff8a4c = 0x3f000000;
  uGpffff8a50 = 0x3f800000;
  uGpffff8a34 = 0x3f000000;
  uGpffff8a38 = 0x3f800000;
  uGpffff8a3c = 0x3f000000;
  uGpffff8a40 = 0x3f800000;
  uGpffff8a54 = 0x3f000000;
  uGpffff8a5c = 0x3f000000;
  uGpffff8a58 = 0x3f800000;
  uGpffff8a60 = 0x3f800000;
  return;
}

// 0x0015d230  size 0x3c
undefined4 FUN_0015d230(ulong param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 0x1000000) == 0) {
    if ((param_1 & 0x2000000) == 0) {
      if ((param_1 & 0x4000000) == 0) {
        uVar1 = uGpffff8a30;
      }
      else {
        uVar1 = uGpffff8a60;
      }
    }
    else {
      uVar1 = uGpffff8a50;
    }
  }
  else {
    uVar1 = uGpffff8a40;
  }
  return uVar1;
}

// 0x0015d270  size 0x3c
undefined4 FUN_0015d270(ulong param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 0x1000000) == 0) {
    if ((param_1 & 0x2000000) == 0) {
      if ((param_1 & 0x4000000) == 0) {
        uVar1 = uGpffff8a2c;
      }
      else {
        uVar1 = uGpffff8a5c;
      }
    }
    else {
      uVar1 = uGpffff8a4c;
    }
  }
  else {
    uVar1 = uGpffff8a3c;
  }
  return uVar1;
}

// 0x0015d2b0  size 0x3c
undefined4 FUN_0015d2b0(ulong param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 0x1000000) == 0) {
    if ((param_1 & 0x2000000) == 0) {
      if ((param_1 & 0x4000000) == 0) {
        uVar1 = uGpffff8a30;
      }
      else {
        uVar1 = uGpffff8a58;
      }
    }
    else {
      uVar1 = uGpffff8a48;
    }
  }
  else {
    uVar1 = uGpffff8a38;
  }
  return uVar1;
}

// 0x0015d2f0  size 0x3c
undefined4 FUN_0015d2f0(ulong param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 0x1000000) == 0) {
    if ((param_1 & 0x2000000) == 0) {
      if ((param_1 & 0x4000000) == 0) {
        uVar1 = uGpffff8a24;
      }
      else {
        uVar1 = uGpffff8a54;
      }
    }
    else {
      uVar1 = uGpffff8a44;
    }
  }
  else {
    uVar1 = uGpffff8a34;
  }
  return uVar1;
}

// 0x0015d3a0  size 0x24
void FUN_0015d3a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *param_3 = *param_4;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  param_3[4] = *param_5;
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  param_3[8] = *param_5;
  param_3[9] = uVar1;
  param_3[10] = uVar2;
  param_3[0xb] = uVar3;
  param_3[0xc] = param_1;
  param_3[0xd] = param_2;
  return;
}

// 0x0015d3d0  size 0x24
void FUN_0015d3d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *param_3 = *param_4;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  param_3[4] = *param_5;
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  param_3[8] = *param_6;
  param_3[9] = uVar1;
  param_3[10] = uVar2;
  param_3[0xb] = uVar3;
  param_3[0xc] = param_1;
  param_3[0xd] = param_2;
  return;
}

// 0x0015d400  size 0x40
void FUN_0015d400(int param_1)

{
  FUN_00163a90(0xbf800000,param_1 + 0x10);
  FUN_00163a90(0xbf800000,param_1 + 0x20);
  return;
}

// 0x0015d440  size 0x68
void FUN_0015d440(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00159b20(*(undefined4 *)param_1);
  if ((cVar1 == '\x02') && (cVar1 = FUN_00159b20(((undefined4 *)param_1)[1]), cVar1 == '\x02')) {
    FUN_0015d4b0(param_1);
  }
  else {
    FUN_0015df50(param_1);
  }
  return;
}

// 0x0015d4b0  size 0x174
undefined4 FUN_0015d4b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar6 = FUN_001599f0(*param_1);
  uVar7 = FUN_001599f0(param_1[1]);
  iVar1 = param_1[3];
  iVar2 = param_1[2];
  iVar3 = param_1[4];
  uStack_10 = *(undefined4 *)(iVar1 + 0x30);
  iVar4 = param_1[5];
  uStack_c = *(undefined4 *)(iVar1 + 0x34);
  uStack_8 = *(undefined4 *)(iVar1 + 0x38);
  FUN_0015a580(uVar6,iVar1,uVar7);
  uVar5 = FUN_0015ddf0(iVar1);
  *(undefined4 *)(iVar1 + 0x40) = uVar5;
  if ((*(uint *)(iVar2 + 0x40) & *(uint *)(iVar1 + 0x40)) == 0) {
    uStack_20 = *(undefined4 *)(iVar4 + 0x30);
    uStack_1c = *(undefined4 *)(iVar4 + 0x34);
    uStack_18 = *(undefined4 *)(iVar4 + 0x38);
    FUN_0015a580(uVar7,iVar4,uVar6);
    uVar5 = FUN_0015ddf0(iVar4);
    *(undefined4 *)(iVar4 + 0x40) = uVar5;
    if ((*(uint *)(iVar3 + 0x40) & *(uint *)(iVar4 + 0x40)) == 0) {
      FUN_001639a0(&uStack_40,iVar1 + 0x30,&uStack_10);
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      FUN_0015d970(iVar1 + 0x50,&uStack_30);
      FUN_001639a0(&uStack_60,iVar4 + 0x30,&uStack_20);
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      uStack_48 = uStack_58;
      FUN_0015d970(iVar4 + 0x50,&uStack_50);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

// 0x0015d630  size 0x78
void FUN_0015d630(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00159b20(*(undefined4 *)param_1);
  if ((cVar1 == '\x02') && (cVar1 = FUN_00159b20(((undefined4 *)param_1)[1]), cVar1 == '\x02')) {
    FUN_0015d6b0(param_1,param_2);
  }
  else {
    FUN_0015df50(param_1);
  }
  return;
}

// 0x0015d6b0  size 0x2c0
undefined4 FUN_0015d6b0(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar7 = FUN_00159a00(*param_1);
  uVar8 = FUN_001599f0(*param_1);
  uVar9 = FUN_00159a00(param_1[1]);
  uVar10 = FUN_001599f0(param_1[1]);
  uVar6 = *param_2;
  if (uVar6 != 0) {
    if ((uVar6 & 0x3f) == 0) {
      if ((uVar6 & 0x3f00) != 0) {
        if ((uVar6 & 0x100) == 0) {
          if ((uVar6 & 0x200) == 0) {
            if ((uVar6 & 0x400) == 0) {
              if ((uVar6 & 0x800) == 0) {
                if ((uVar6 & 0x1000) == 0) {
                  uVar13 = 5;
                }
                else {
                  uVar13 = 2;
                }
              }
              else {
                uVar13 = 4;
              }
            }
            else {
              uVar13 = 1;
            }
          }
          else {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 0;
        }
        uVar11 = (**(code **)(*(int *)uVar9 + 0x40))(uVar9,uVar13);
        uVar13 = (**(code **)(*(int *)uVar10 + 0x40))(uVar10,uVar13);
        lVar12 = FUN_0015a420(uVar11,uVar13,uVar7,uVar8);
        if (lVar12 != 0) {
          return 1;
        }
      }
    }
    else {
      if ((uVar6 & 1) == 0) {
        if ((uVar6 & 2) == 0) {
          if ((uVar6 & 4) == 0) {
            if ((uVar6 & 8) == 0) {
              if ((uVar6 & 0x10) == 0) {
                uVar13 = 5;
              }
              else {
                uVar13 = 2;
              }
            }
            else {
              uVar13 = 4;
            }
          }
          else {
            uVar13 = 1;
          }
        }
        else {
          uVar13 = 3;
        }
      }
      else {
        uVar13 = 0;
      }
      uVar11 = (**(code **)(*(int *)uVar7 + 0x40))(uVar7,uVar13);
      uVar13 = (**(code **)(*(int *)uVar8 + 0x40))(uVar8,uVar13);
      lVar12 = FUN_0015a420(uVar11,uVar13,uVar9,uVar10);
      if (lVar12 != 0) {
        return 1;
      }
    }
  }
  iVar1 = param_1[2];
  iVar2 = param_1[3];
  iVar3 = param_1[4];
  iVar4 = param_1[5];
  FUN_0015a660(uVar7,iVar1,uVar9);
  uVar5 = FUN_0015ddf0(iVar1);
  *(undefined4 *)(iVar1 + 0x40) = uVar5;
  FUN_0015a660(uVar8,iVar2,uVar10);
  uVar5 = FUN_0015ddf0(iVar2);
  *(undefined4 *)(iVar2 + 0x40) = uVar5;
  uVar6 = *(uint *)(iVar1 + 0x40) & *(uint *)(iVar2 + 0x40);
  if (uVar6 == 0) {
    FUN_0015a660(uVar9,iVar3,uVar7);
    uVar5 = FUN_0015ddf0(iVar3);
    *(undefined4 *)(iVar3 + 0x40) = uVar5;
    FUN_0015a660(uVar10,iVar4,uVar8);
    uVar5 = FUN_0015ddf0(iVar4);
    *(undefined4 *)(iVar4 + 0x40) = uVar5;
    if ((*(uint *)(iVar3 + 0x40) & *(uint *)(iVar4 + 0x40)) == 0) {
      *param_2 = 0;
      FUN_0015dac0(iVar1);
      FUN_0015dac0(iVar2);
      FUN_0015dac0(iVar3);
      FUN_0015dac0(iVar4);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
      *param_2 = (*(uint *)(iVar1 + 0x40) & *(uint *)(iVar2 + 0x40)) << 8;
    }
  }
  else {
    *param_2 = uVar6;
    uVar5 = 1;
  }
  return uVar5;
}

// 0x0015d970  size 0x14c
void FUN_0015d970(float *param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    param_1[4] = 0.0;
    FUN_00163b00(param_1,param_2);
    if (*param_1 <= 1.0) {
      if (*param_1 < -1.0) {
        param_1[4] = (float)((uint)param_1[4] | 2);
      }
    }
    else {
      param_1[4] = (float)((uint)param_1[4] | 1);
    }
    if (param_1[1] <= 1.0) {
      if (param_1[1] < -1.0) {
        param_1[4] = (float)((uint)param_1[4] | 8);
      }
    }
    else {
      param_1[4] = (float)((uint)param_1[4] | 4);
    }
    if (param_1[2] <= 1.0) {
      if (param_1[2] < -1.0) {
        param_1[4] = (float)((uint)param_1[4] | 0x20);
      }
    }
    else {
      param_1[4] = (float)((uint)param_1[4] | 0x10);
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 8;
  } while (uVar1 < 8);
  return;
}

// 0x0015dac0  size 0x324
void FUN_0015dac0(undefined8 param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = (int)param_1;
  FUN_00163910(auStack_40,iVar3 + 0x30,param_1);
  FUN_00163910(auStack_30,auStack_40,iVar3 + 0x10);
  FUN_00163910(&uStack_20,auStack_30,iVar3 + 0x20);
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  uStack_8 = uStack_18;
  *(undefined4 *)(iVar3 + 0x50) = uStack_20;
  *(undefined4 *)(iVar3 + 0x54) = uStack_1c;
  *(undefined4 *)(iVar3 + 0x58) = uStack_18;
  *(undefined4 *)(iVar3 + 0x5c) = uStack_4;
  FUN_00163840(0x40000000,&uStack_70,param_1);
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  uStack_58 = uStack_68;
  FUN_00163b40(&uStack_50,iVar3 + 0x50,&uStack_60);
  *(undefined4 *)(iVar3 + 0x70) = uStack_50;
  *(undefined4 *)(iVar3 + 0x74) = uStack_4c;
  *(undefined4 *)(iVar3 + 0x78) = uStack_48;
  *(undefined4 *)(iVar3 + 0x7c) = uStack_44;
  FUN_00163840(0x40000000,&uStack_a0,iVar3 + 0x10);
  uStack_90 = uStack_a0;
  uStack_8c = uStack_9c;
  uStack_88 = uStack_98;
  FUN_00163b40(&uStack_80,iVar3 + 0x70,&uStack_90);
  *(undefined4 *)(iVar3 + 0xb0) = uStack_80;
  *(undefined4 *)(iVar3 + 0xb4) = uStack_7c;
  *(undefined4 *)(iVar3 + 0xb8) = uStack_78;
  *(undefined4 *)(iVar3 + 0xbc) = uStack_74;
  FUN_00163840(0x40000000,&uStack_d0,param_1);
  uStack_c0 = uStack_d0;
  uStack_bc = uStack_cc;
  uStack_b8 = uStack_c8;
  FUN_00163b80(&uStack_b0,iVar3 + 0xb0,&uStack_c0);
  *(undefined4 *)(iVar3 + 0x90) = uStack_b0;
  *(undefined4 *)(iVar3 + 0x94) = uStack_ac;
  *(undefined4 *)(iVar3 + 0x98) = uStack_a8;
  *(undefined4 *)(iVar3 + 0x9c) = uStack_a4;
  FUN_00163840(0x40000000,&uStack_100,iVar3 + 0x20);
  uStack_f0 = uStack_100;
  uStack_ec = uStack_fc;
  uStack_e8 = uStack_f8;
  FUN_00163b40(&uStack_e0,iVar3 + 0x90,&uStack_f0);
  *(undefined4 *)(iVar3 + 0x110) = uStack_e0;
  *(undefined4 *)(iVar3 + 0x114) = uStack_dc;
  *(undefined4 *)(iVar3 + 0x118) = uStack_d8;
  *(undefined4 *)(iVar3 + 0x11c) = uStack_d4;
  FUN_00163840(0x40000000,&uStack_130,iVar3 + 0x10);
  uStack_120 = uStack_130;
  uStack_11c = uStack_12c;
  uStack_118 = uStack_128;
  FUN_00163b80(&uStack_110,iVar3 + 0x110,&uStack_120);
  *(undefined4 *)(iVar3 + 0xd0) = uStack_110;
  *(undefined4 *)(iVar3 + 0xd4) = uStack_10c;
  *(undefined4 *)(iVar3 + 0xd8) = uStack_108;
  *(undefined4 *)(iVar3 + 0xdc) = uStack_104;
  FUN_00163840(0x40000000,&uStack_160,param_1);
  uStack_150 = uStack_160;
  uStack_14c = uStack_15c;
  uStack_148 = uStack_158;
  FUN_00163b40(&uStack_140,iVar3 + 0xd0,&uStack_150);
  *(undefined4 *)(iVar3 + 0xf0) = uStack_140;
  *(undefined4 *)(iVar3 + 0xf4) = uStack_13c;
  *(undefined4 *)(iVar3 + 0xf8) = uStack_138;
  *(undefined4 *)(iVar3 + 0xfc) = uStack_134;
  FUN_00163840(0x40000000,&uStack_190,iVar3 + 0x10);
  uStack_180 = uStack_190;
  uStack_17c = uStack_18c;
  uStack_178 = uStack_188;
  FUN_00163b40(&uStack_170,iVar3 + 0xf0,&uStack_180);
  pfVar2 = (float *)(iVar3 + 0x50);
  uVar1 = 0;
  *(undefined4 *)(iVar3 + 0x130) = uStack_170;
  *(undefined4 *)(iVar3 + 0x134) = uStack_16c;
  *(undefined4 *)(iVar3 + 0x138) = uStack_168;
  *(undefined4 *)(iVar3 + 0x13c) = uStack_164;
  do {
    pfVar2[4] = 0.0;
    if (*pfVar2 <= 1.0) {
      if (*pfVar2 < -1.0) {
        pfVar2[4] = (float)((uint)pfVar2[4] | 2);
      }
    }
    else {
      pfVar2[4] = (float)((uint)pfVar2[4] | 1);
    }
    if (pfVar2[1] <= 1.0) {
      if (pfVar2[1] < -1.0) {
        pfVar2[4] = (float)((uint)pfVar2[4] | 8);
      }
    }
    else {
      pfVar2[4] = (float)((uint)pfVar2[4] | 4);
    }
    if (pfVar2[2] <= 1.0) {
      if (pfVar2[2] < -1.0) {
        pfVar2[4] = (float)((uint)pfVar2[4] | 0x20);
      }
    }
    else {
      pfVar2[4] = (float)((uint)pfVar2[4] | 0x10);
    }
    uVar1 = uVar1 + 1;
    pfVar2 = pfVar2 + 8;
  } while (uVar1 < 8);
  return;
}

// 0x0015ddf0  size 0x160
ulong FUN_0015ddf0(undefined4 *param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = 0;
  fVar2 = (float)fabsf(param_1[4]);
  fVar3 = (float)fabsf(*param_1);
  fVar4 = (float)fabsf(param_1[8]);
  fVar2 = fVar4 + fVar3 + fVar2 + 1.0;
  if ((float)param_1[0xc] - fVar2 <= 0.0) {
    if ((float)param_1[0xc] + fVar2 < 0.0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  fVar2 = (float)fabsf(param_1[5]);
  fVar3 = (float)fabsf(param_1[1]);
  fVar4 = (float)fabsf(param_1[9]);
  fVar2 = fVar4 + fVar3 + fVar2 + 1.0;
  if ((float)param_1[0xd] - fVar2 <= 0.0) {
    if ((float)param_1[0xd] + fVar2 < 0.0) {
      uVar1 = uVar1 | 8;
    }
  }
  else {
    uVar1 = uVar1 | 4;
  }
  fVar2 = (float)fabsf(param_1[6]);
  fVar3 = (float)fabsf(param_1[2]);
  fVar4 = (float)fabsf(param_1[10]);
  fVar2 = fVar4 + fVar3 + fVar2 + 1.0;
  if ((float)param_1[0xe] - fVar2 <= 0.0) {
    if ((float)param_1[0xe] + fVar2 < 0.0) {
      uVar1 = uVar1 | 0x20;
    }
  }
  else {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}

// 0x0015df50  size 0x20c
undefined4 FUN_0015df50(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar2 = FUN_00159a20(*param_1);
  uVar3 = FUN_00159a10(*param_1);
  uVar4 = FUN_00159a20(param_1[1]);
  uVar5 = FUN_00159a10(param_1[1]);
  fVar6 = (float)FUN_00159c90(uVar2);
  fVar7 = (float)FUN_00159c90(uVar4);
  uVar4 = FUN_0015bf20(uVar4);
  uVar2 = FUN_0015bf20(uVar2);
  FUN_00163b40(auStack_10,uVar4,uVar2);
  uVar2 = FUN_0015bf20(uVar5);
  uVar3 = FUN_0015bf20(uVar3);
  FUN_00163b40(auStack_30,uVar2,uVar3);
  FUN_00163b40(auStack_20,auStack_30,auStack_10);
  fVar8 = (float)FUN_001638e0(auStack_20,auStack_20);
  fVar9 = (float)FUN_001638e0(auStack_20,auStack_10);
  fVar9 = fVar9 * 2.0;
  fVar10 = (float)FUN_001638e0(auStack_10,auStack_10);
  fVar6 = fVar9 * fVar9 - fVar8 * 4.0 * ((fVar10 + 0.0) - (fVar6 + fVar7) * (fVar6 + fVar7));
  if (fVar6 < 0.0) {
    uVar1 = 1;
  }
  else {
    fVar6 = SQRT(fVar6);
    if (fVar8 < 1e-06) {
      fVar8 = 1e-06;
    }
    fVar7 = (0.5 / fVar8) * (-fVar9 - fVar6);
    fVar6 = (0.5 / fVar8) * (-fVar9 + fVar6);
    if ((0.0 <= fVar7) || (0.0 <= fVar6)) {
      if ((fVar7 <= 1.0) || (fVar6 <= 1.0)) {
        param_1[0x16] = fVar7;
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

// 0x0015e160  size 0x8
int FUN_0015e160(int param_1)

{
  return param_1 + 0x20;
}

// 0x0015e170  size 0xc
void FUN_0015e170(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 0x0015e180  size 0xbc
bool FUN_0015e180(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0x40000000;
  puVar1[0x16] = 0x40000000;
  FUN_00159b20(puVar1[1]);
  FUN_00159b20(*puVar1);
  msl_sub_00101180(param_1);
  return (float)puVar1[0x15] < 1.01;
}

// 0x0015e240  size 0xbc
bool FUN_0015e240(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  puVar4 = (undefined4 *)param_1;
  puVar4[0x18] = *param_2;
  puVar4[0x19] = uVar1;
  puVar4[0x1a] = uVar2;
  puVar4[0x1b] = uVar3;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0x40000000;
  puVar4[0x16] = 0x40000000;
  FUN_00159b20(puVar4[1]);
  FUN_00159b20(*puVar4);
  msl_sub_00101180(param_1);
  return 0.0 < (float)puVar4[0x14];
}

// 0x0015e320  size 0x4f8
undefined8 FUN_0015e320(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  puVar6 = (undefined4 *)param_1;
  puVar6[0xb] = 0x3f800000;
  puVar4 = puVar6 + 0x38;
  puVar6[0xf] = 0x3f800000;
  puVar6[0x13] = 0x3f800000;
  puVar6[0x1b] = 0x3f800000;
  puVar6[0x33] = 0x3f800000;
  if (puVar4 < puVar6 + 0x70) {
    uVar9 = (int)(puVar6 + 0x70) - (int)(puVar6 + 0x38);
    uVar8 = uVar9 + 0x1f;
    uVar5 = uVar8;
    if ((int)uVar8 < 0) {
      uVar5 = uVar9 + 0x3e;
    }
    uVar7 = ((int)uVar5 >> 5) + 1;
    if (8 < (int)uVar7) {
      bVar3 = false;
      bVar2 = false;
      if (puVar6 + 0x38 <= puVar6 + 0x70) {
        bVar1 = true;
        if (((uVar9 & 0x80000000) == 0) && ((uVar8 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if ((((int)uVar5 >> 5 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        do {
          puVar4[3] = 0x3f800000;
          puVar4[0xb] = 0x3f800000;
          puVar4[0x13] = 0x3f800000;
          puVar4[0x1b] = 0x3f800000;
          puVar4[0x23] = 0x3f800000;
          puVar4[0x2b] = 0x3f800000;
          puVar4[0x33] = 0x3f800000;
          puVar4[0x3b] = 0x3f800000;
          puVar4 = puVar4 + 0x40;
        } while (puVar4 < puVar6 + 0x30);
      }
    }
    for (; puVar4 < puVar6 + 0x70; puVar4 = puVar4 + 8) {
      puVar4[3] = 0x3f800000;
    }
  }
  puVar6[0x87] = 0x3f800000;
  puVar4 = puVar6 + 0x8c;
  if (puVar4 < puVar6 + 0xc4) {
    uVar9 = (int)(puVar6 + 0xc4) - (int)(puVar6 + 0x8c);
    uVar8 = uVar9 + 0x1f;
    uVar5 = uVar8;
    if ((int)uVar8 < 0) {
      uVar5 = uVar9 + 0x3e;
    }
    uVar7 = ((int)uVar5 >> 5) + 1;
    if (8 < (int)uVar7) {
      bVar3 = false;
      bVar2 = false;
      if (puVar6 + 0x8c <= puVar6 + 0xc4) {
        bVar1 = true;
        if (((uVar9 & 0x80000000) == 0) && ((uVar8 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if ((((int)uVar5 >> 5 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        do {
          puVar4[3] = 0x3f800000;
          puVar4[0xb] = 0x3f800000;
          puVar4[0x13] = 0x3f800000;
          puVar4[0x1b] = 0x3f800000;
          puVar4[0x23] = 0x3f800000;
          puVar4[0x2b] = 0x3f800000;
          puVar4[0x33] = 0x3f800000;
          puVar4[0x3b] = 0x3f800000;
          puVar4 = puVar4 + 0x40;
        } while (puVar4 < puVar6 + 0x84);
      }
    }
    for (; puVar4 < puVar6 + 0xc4; puVar4 = puVar4 + 8) {
      puVar4[3] = 0x3f800000;
    }
  }
  puVar6[0xdb] = 0x3f800000;
  puVar4 = puVar6 + 0xe0;
  if (puVar4 < puVar6 + 0x118) {
    uVar9 = (int)(puVar6 + 0x118) - (int)(puVar6 + 0xe0);
    uVar8 = uVar9 + 0x1f;
    uVar5 = uVar8;
    if ((int)uVar8 < 0) {
      uVar5 = uVar9 + 0x3e;
    }
    uVar7 = ((int)uVar5 >> 5) + 1;
    if (8 < (int)uVar7) {
      bVar3 = false;
      bVar2 = false;
      if (puVar6 + 0xe0 <= puVar6 + 0x118) {
        bVar1 = true;
        if (((uVar9 & 0x80000000) == 0) && ((uVar8 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if ((((int)uVar5 >> 5 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        do {
          puVar4[3] = 0x3f800000;
          puVar4[0xb] = 0x3f800000;
          puVar4[0x13] = 0x3f800000;
          puVar4[0x1b] = 0x3f800000;
          puVar4[0x23] = 0x3f800000;
          puVar4[0x2b] = 0x3f800000;
          puVar4[0x33] = 0x3f800000;
          puVar4[0x3b] = 0x3f800000;
          puVar4 = puVar4 + 0x40;
        } while (puVar4 < puVar6 + 0xd8);
      }
    }
    for (; puVar4 < puVar6 + 0x118; puVar4 = puVar4 + 8) {
      puVar4[3] = 0x3f800000;
    }
  }
  puVar6[0x12f] = 0x3f800000;
  puVar4 = puVar6 + 0x134;
  if (puVar4 < puVar6 + 0x16c) {
    uVar9 = (int)(puVar6 + 0x16c) - (int)(puVar6 + 0x134);
    uVar8 = uVar9 + 0x1f;
    uVar5 = uVar8;
    if ((int)uVar8 < 0) {
      uVar5 = uVar9 + 0x3e;
    }
    uVar7 = ((int)uVar5 >> 5) + 1;
    if (8 < (int)uVar7) {
      bVar3 = false;
      bVar2 = false;
      if (puVar6 + 0x134 <= puVar6 + 0x16c) {
        bVar1 = true;
        if (((uVar9 & 0x80000000) == 0) && ((uVar8 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if ((((int)uVar5 >> 5 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        do {
          puVar4[3] = 0x3f800000;
          puVar4[0xb] = 0x3f800000;
          puVar4[0x13] = 0x3f800000;
          puVar4[0x1b] = 0x3f800000;
          puVar4[0x23] = 0x3f800000;
          puVar4[0x2b] = 0x3f800000;
          puVar4[0x33] = 0x3f800000;
          puVar4[0x3b] = 0x3f800000;
          puVar4 = puVar4 + 0x40;
        } while (puVar4 < puVar6 + 300);
      }
    }
    for (; puVar4 < puVar6 + 0x16c; puVar4 = puVar4 + 8) {
      puVar4[3] = 0x3f800000;
    }
  }
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = puVar6 + 0x1c;
  puVar6[3] = puVar6 + 0x70;
  puVar6[4] = puVar6 + 0xc4;
  puVar6[5] = puVar6 + 0x118;
  return param_1;
}

// 0x0015e820  size 0x72c
void FUN_0015e820(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  undefined *apuStack_200 [24];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  float afStack_170 [32];
  float afStack_f0 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (param_2 == 0) {
    uVar2 = *param_1;
    uVar1 = param_1[1];
  }
  else {
    uVar1 = *param_1;
    uVar2 = param_1[1];
  }
  uVar4 = FUN_00159a10(uVar2);
  uVar5 = FUN_001599f0(uVar1);
  uVar6 = FUN_0015bf20(uVar4);
  uVar7 = FUN_0015bf20(uVar5);
  FUN_00163b40(&fStack_10,uVar6,uVar7);
  fVar15 = fStack_8 * fStack_8 + fStack_10 * fStack_10 + fStack_c * fStack_c;
  fVar12 = (float)FUN_00159c90(uVar4);
  fVar13 = (float)FUN_00159c90(uVar5);
  if (fVar15 <= (fVar12 + fVar13) * (fVar12 + fVar13)) {
    if (0.001 <= SQRT(fVar15)) {
      FUN_001638b0(1.0 / SQRT(fVar15),auStack_240,&fStack_10);
    }
    pfVar3 = (float *)FUN_0015a3f0(uVar5);
    uStack_24 = 0x3f800000;
    fStack_30 = *pfVar3 * (fVar12 / *pfVar3 + 1.0);
    fStack_2c = pfVar3[1] * (fVar12 / pfVar3[1] + 1.0);
    fStack_28 = pfVar3[2] * (fVar12 / pfVar3[2] + 1.0);
    uVar4 = FUN_001599f0(uVar1);
    FUN_0015efb0(apuStack_200,uVar4);
    iVar11 = (int)uVar4;
    apuStack_200[0] = &DAT_0036e190;
    FUN_0015ef80(auStack_1a0,iVar11 + 0x60);
    FUN_0015ef80(auStack_190,iVar11 + 0x70);
    uStack_180 = *(undefined4 *)(iVar11 + 0x80);
    pfVar3 = afStack_170;
    uStack_17c = *(undefined4 *)(iVar11 + 0x84);
    iVar10 = iVar11 + 0x90;
    uStack_178 = *(undefined4 *)(iVar11 + 0x88);
    uStack_174 = *(undefined4 *)(iVar11 + 0x8c);
    do {
      FUN_0015ef80(pfVar3,iVar10);
      pfVar3 = pfVar3 + 4;
      pfVar9 = afStack_f0;
      iVar10 = iVar10 + 0x10;
    } while (pfVar3 < pfVar9);
    iVar11 = iVar11 + 0x110;
    do {
      FUN_0015ef50(pfVar9,iVar11);
      pfVar9 = pfVar9 + 8;
      iVar11 = iVar11 + 0x20;
    } while (pfVar9 < &fStack_30);
    FUN_0015a1b0(apuStack_200,&fStack_30);
    lVar8 = FUN_0015b050(apuStack_200,uVar6);
    if (lVar8 == 0) {
      FUN_0015b760(apuStack_200,0xffffffffffffffff);
    }
    else {
      uVar4 = 0xffffffffffffffff;
      fVar12 = 100000.0;
      uStack_204 = 0x3f800000;
      iVar10 = FUN_0015b4e0(apuStack_200,0);
      fVar13 = (float)FUN_001638e0(iVar10 + 0x10,param_1 + 0x18);
      pfVar3 = (float *)FUN_0015a3e0(apuStack_200);
      fStack_210 = fVar13 * *pfVar3;
      iVar10 = FUN_0015b4e0(apuStack_200,1);
      fVar13 = (float)FUN_001638e0(iVar10 + 0x10,param_1 + 0x18);
      iVar10 = FUN_0015a3e0(apuStack_200);
      fStack_20c = fVar13 * *(float *)(iVar10 + 4);
      iVar10 = FUN_0015b4e0(apuStack_200,2);
      fVar13 = (float)FUN_001638e0(iVar10 + 0x10,param_1 + 0x18);
      iVar10 = FUN_0015a3e0(apuStack_200);
      fStack_208 = fVar13 * *(float *)(iVar10 + 8);
      fVar13 = (float)FUN_0015a860(apuStack_200,0,uVar6);
      fVar15 = (float)FUN_0015a860(apuStack_200,3,uVar6);
      fVar13 = 1.0 - (fVar13 * 2.0) / (fVar13 + fVar15);
      fVar15 = (float)FUN_0015a860(apuStack_200,1,uVar6);
      fVar14 = (float)FUN_0015a860(apuStack_200,4,uVar6);
      fVar16 = 1.0 - (fVar15 * 2.0) / (fVar15 + fVar14);
      fVar15 = (float)FUN_0015a860(apuStack_200,2,uVar6);
      fVar14 = (float)FUN_0015a860(apuStack_200,5,uVar6);
      fVar15 = 1.0 - (fVar15 * 2.0) / (fVar15 + fVar14);
      if (param_2 != 0) {
        FUN_00163a90(0xbf800000,&fStack_210);
      }
      if (0.0 < fStack_210) {
        fVar13 = 1.0 - fVar13;
        if (fVar13 < fStack_210 * 100000.0) {
          fVar12 = fVar13 / fStack_210;
          uVar4 = 0;
        }
      }
      else if (fStack_210 < 0.0) {
        fVar13 = fVar13 + 1.0;
        if (fVar13 < -fStack_210 * 100000.0) {
          fVar12 = fVar13 / -fStack_210;
          uVar4 = 3;
        }
      }
      if (0.0 < fStack_20c) {
        if (1.0 - fVar16 < fVar12 * fStack_20c) {
          fVar12 = (1.0 - fVar16) / fStack_20c;
          uVar4 = 1;
        }
      }
      else if (fStack_20c < 0.0) {
        if (fVar16 + 1.0 < fVar12 * -fStack_20c) {
          fVar12 = (fVar16 + 1.0) / -fStack_20c;
          uVar4 = 4;
        }
      }
      if (0.0 < fStack_208) {
        fVar15 = 1.0 - fVar15;
        if (fVar15 < fVar12 * fStack_208) {
          fVar12 = fVar15 / fStack_208;
          uVar4 = 2;
        }
      }
      else if (fStack_208 < 0.0) {
        fVar15 = fVar15 + 1.0;
        if (fVar15 < fVar12 * -fStack_208) {
          fVar12 = fVar15 / -fStack_208;
          uVar4 = 5;
        }
      }
      if (0.0 < fVar12) {
        FUN_001638b0(fVar12,&fStack_220,&fStack_210);
        iVar10 = FUN_0015b4e0(apuStack_200,0);
        pfVar3 = (float *)FUN_0015a3f0(apuStack_200);
        FUN_001638b0(fStack_220 * *pfVar3,auStack_260,iVar10 + 0x10);
        iVar10 = FUN_0015b4e0(apuStack_200,1);
        iVar11 = FUN_0015a3f0(apuStack_200);
        FUN_001638b0(fStack_21c * *(float *)(iVar11 + 4),auStack_270,iVar10 + 0x10);
        FUN_00163b80(auStack_250,auStack_260,auStack_270);
        iVar10 = FUN_0015b4e0(apuStack_200,2);
        iVar11 = FUN_0015a3f0(apuStack_200);
        FUN_001638b0(fStack_218 * *(float *)(iVar11 + 8),auStack_280,iVar10 + 0x10);
        FUN_00163b80(auStack_230,auStack_250,auStack_280);
        fVar12 = (float)FUN_00163c10(auStack_230);
        if ((float)param_1[0x14] < fVar12) {
          iVar10 = FUN_0015b4e0(apuStack_200,uVar4);
          FUN_0015d3a0(fVar12,0,param_1 + 8,uVar6,iVar10 + 0x10);
        }
      }
      FUN_0015b760(apuStack_200,0xffffffffffffffff);
    }
  }
  return;
}

// 0x0015ef50  size 0x30
undefined8 FUN_0015ef50(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = *param_2;
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  return param_1;
}

// 0x0015ef80  size 0x28
undefined8 FUN_0015ef80(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  return param_1;
}

// 0x0015efb0  size 0xbc
undefined8 FUN_0015efb0(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_0036e200;
  puVar1[1] = *(undefined4 *)(param_2 + 4);
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  puVar1[3] = *(undefined4 *)(param_2 + 0xc);
  puVar1[4] = *(undefined4 *)(param_2 + 0x10);
  puVar1[5] = *(undefined4 *)(param_2 + 0x14);
  puVar1[8] = *(undefined4 *)(param_2 + 0x20);
  puVar1[9] = *(undefined4 *)(param_2 + 0x24);
  puVar1[10] = *(undefined4 *)(param_2 + 0x28);
  puVar1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  puVar1[0xc] = *(undefined4 *)(param_2 + 0x30);
  puVar1[0xd] = *(undefined4 *)(param_2 + 0x34);
  puVar1[0xe] = *(undefined4 *)(param_2 + 0x38);
  puVar1[0xf] = *(undefined4 *)(param_2 + 0x3c);
  puVar1[0x10] = *(undefined4 *)(param_2 + 0x40);
  puVar1[0x11] = *(undefined4 *)(param_2 + 0x44);
  puVar1[0x12] = *(undefined4 *)(param_2 + 0x48);
  puVar1[0x13] = *(undefined4 *)(param_2 + 0x4c);
  puVar1[0x14] = *(undefined4 *)(param_2 + 0x50);
  puVar1[0x15] = *(undefined4 *)(param_2 + 0x54);
  puVar1[0x16] = *(undefined4 *)(param_2 + 0x58);
  puVar1[0x17] = *(undefined4 *)(param_2 + 0x5c);
  return param_1;
}

// 0x0015f090  size 0x488
void FUN_0015f090(undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  char *pcStack_100;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  char acStack_20 [16];
  char acStack_10 [16];
  
  uVar2 = FUN_001599f0(*param_1);
  uVar3 = FUN_001599f0(param_1[1]);
  cVar1 = FUN_0015f520(acStack_10,param_1[5]);
  if ((cVar1 != '\0') && (cVar1 = FUN_0015f520(acStack_20,param_1[3]), cVar1 != '\0')) {
    uStack_24 = 0x3f800000;
    uStack_34 = 0x3f800000;
    fVar10 = 100000.0;
    pcStack_100 = acStack_10;
    iVar12 = 0;
    do {
      if (*pcStack_100 != '\0') {
        iVar11 = 0;
        pcVar14 = acStack_20;
        do {
          if (*pcVar14 != '\0') {
            piVar13 = (int *)uVar2;
            uVar4 = (**(code **)(*piVar13 + 0x4c))(uVar2,iVar12);
            uVar4 = (**(code **)(*piVar13 + 0x38))(uVar2,uVar4);
            uVar5 = (**(code **)(*piVar13 + 0x50))(uVar2,iVar12);
            uVar5 = (**(code **)(*piVar13 + 0x38))(uVar2,uVar5);
            piVar13 = (int *)uVar3;
            uVar6 = (**(code **)(*piVar13 + 0x4c))(uVar3,iVar11);
            uVar6 = (**(code **)(*piVar13 + 0x38))(uVar3,uVar6);
            uVar7 = (**(code **)(*piVar13 + 0x50))(uVar3,iVar11);
            uVar7 = (**(code **)(*piVar13 + 0x38))(uVar3,uVar7);
            FUN_00163b40(&fStack_50,uVar5,uVar4);
            FUN_00163b40(&fStack_60,uVar7,uVar6);
            FUN_00163800(&fStack_70,&fStack_50,&fStack_60);
            if (fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c != 0.0) {
              FUN_00163bc0(&fStack_70);
              uVar8 = (**(code **)(*piVar13 + 0x48))(uVar3,iVar11);
              fVar15 = (float)FUN_001638e0(&fStack_70,uVar8);
              if (0.0 < fVar15) {
                FUN_001638b0(0xbf800000,&fStack_90,&fStack_70);
                fStack_70 = fStack_90;
                fStack_6c = fStack_8c;
                fStack_68 = fStack_88;
                uStack_64 = uStack_84;
              }
              FUN_00163b40(auStack_a0,uVar6,uVar4);
              fVar15 = (float)FUN_001638e0(auStack_a0,&fStack_70);
              uVar8 = newlib_sub_0012f600(fVar15);
              lVar9 = msl_sub_00100960(uVar8,0x3f50624dd2f1a9fc);
              if (lVar9 == 0) {
                FUN_00163b80(auStack_c0,uVar4,uVar5);
                FUN_00163b80(auStack_d0,uVar6,uVar7);
                FUN_00163b40(auStack_b0,auStack_c0,auStack_d0);
                FUN_001638b0(0x3f000000,&fStack_80,auStack_b0);
                fVar16 = fStack_78 * fStack_78 + fStack_80 * fStack_80 + fStack_7c * fStack_7c;
                if ((((fVar16 <= fStack_48 * fStack_48 +
                                 fStack_50 * fStack_50 + fStack_4c * fStack_4c) ||
                     (fVar16 <= fStack_58 * fStack_58 +
                                fStack_60 * fStack_60 + fStack_5c * fStack_5c + 0.0 + 0.0)) &&
                    (fVar16 = (float)FUN_001638e0(param_1 + 0x18,&fStack_70), 0.0 < fVar16)) &&
                   (fVar15 < fVar10)) {
                  fStack_30 = fStack_70;
                  fStack_2c = fStack_6c;
                  fStack_28 = fStack_68;
                  uStack_24 = uStack_64;
                  FUN_001637a0(0x3f000000,&uStack_e0,uVar6,uVar7);
                  uStack_40 = uStack_e0;
                  uStack_3c = uStack_dc;
                  uStack_38 = uStack_d8;
                  uStack_34 = uStack_d4;
                  fVar10 = fVar15;
                }
              }
            }
          }
          iVar11 = iVar11 + 1;
          pcVar14 = pcVar14 + 1;
        } while (iVar11 < 0xc);
      }
      iVar12 = iVar12 + 1;
      pcStack_100 = pcStack_100 + 1;
    } while (iVar12 < 0xc);
    if ((fVar10 < 100000.0) && ((float)param_1[0x14] < fVar10)) {
      FUN_0015d3a0(fVar10,0,param_1 + 8,&uStack_40,&fStack_30);
    }
  }
  return;
}

// 0x0015f520  size 0x534
undefined8 FUN_0015f520(undefined1 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  uVar9 = 0;
  iVar8 = 0;
  do {
    iVar4 = FUN_0015b3d0(iVar8);
    iVar4 = param_2 + iVar4 * 0x20;
    pfVar7 = (float *)(iVar4 + 0x50);
    iVar5 = FUN_0015b3b0(iVar8);
    *param_1 = 0;
    iVar5 = param_2 + iVar5 * 0x20;
    uVar1 = *(uint *)(iVar4 + 0x60);
    uVar2 = *(uint *)(iVar5 + 0x60);
    pfVar6 = (float *)(iVar5 + 0x50);
    if ((((uVar1 & uVar2) == 0) && (uVar1 != 0 || uVar2 != 0)) &&
       (uVar1 = uVar1 ^ uVar2, uVar1 != 0)) {
      *param_1 = 1;
      if ((uVar1 & 1) != 0) {
        bVar3 = false;
        fVar11 = (*pfVar7 - 1.0) / (*pfVar7 - *pfVar6);
        fVar10 = (float)fabsf(fVar11 * (*(float *)(iVar5 + 0x54) - *(float *)(iVar4 + 0x54)) +
                              *(float *)(iVar4 + 0x54) + 0.0);
        if ((fVar10 <= 1.0) &&
           (fVar10 = (float)fabsf(fVar11 * (*(float *)(iVar5 + 0x58) - *(float *)(iVar4 + 0x58)) +
                                  *(float *)(iVar4 + 0x58) + 0.0), fVar10 <= 1.0)) {
          bVar3 = true;
        }
        if (bVar3) {
          uVar9 = 1;
          goto LAB_0015f9d0;
        }
      }
      if ((uVar1 & 2) != 0) {
        bVar3 = false;
        fVar11 = (*pfVar7 + 1.0) / (*pfVar7 - *pfVar6);
        fVar10 = (float)fabsf(fVar11 * (*(float *)(iVar5 + 0x54) - *(float *)(iVar4 + 0x54)) +
                              *(float *)(iVar4 + 0x54) + 0.0);
        if ((fVar10 <= 1.0) &&
           (fVar10 = (float)fabsf(fVar11 * (*(float *)(iVar5 + 0x58) - *(float *)(iVar4 + 0x58)) +
                                  *(float *)(iVar4 + 0x58) + 0.0), fVar10 <= 1.0)) {
          bVar3 = true;
        }
        if (bVar3) {
          uVar9 = 1;
          goto LAB_0015f9d0;
        }
      }
      if ((uVar1 & 4) != 0) {
        bVar3 = false;
        fVar11 = (*(float *)(iVar4 + 0x54) - 1.0) /
                 (*(float *)(iVar4 + 0x54) - *(float *)(iVar5 + 0x54));
        fVar10 = (float)fabsf(fVar11 * (*pfVar6 - *pfVar7) + *pfVar7 + 0.0);
        if ((fVar10 <= 1.0) &&
           (fVar10 = (float)fabsf(fVar11 * (*(float *)(iVar5 + 0x58) - *(float *)(iVar4 + 0x58)) +
                                  *(float *)(iVar4 + 0x58) + 0.0), fVar10 <= 1.0)) {
          bVar3 = true;
        }
        if (bVar3) {
          uVar9 = 1;
          goto LAB_0015f9d0;
        }
      }
      if ((uVar1 & 8) != 0) {
        bVar3 = false;
        fVar11 = (*(float *)(iVar4 + 0x54) + 1.0) /
                 (*(float *)(iVar4 + 0x54) - *(float *)(iVar5 + 0x54));
        fVar10 = (float)fabsf(fVar11 * (*pfVar6 - *pfVar7) + *pfVar7 + 0.0);
        if ((fVar10 <= 1.0) &&
           (fVar10 = (float)fabsf(fVar11 * (*(float *)(iVar5 + 0x58) - *(float *)(iVar4 + 0x58)) +
                                  *(float *)(iVar4 + 0x58) + 0.0), fVar10 <= 1.0)) {
          bVar3 = true;
        }
        if (bVar3) {
          uVar9 = 1;
          goto LAB_0015f9d0;
        }
      }
      if ((uVar1 & 0x10) != 0) {
        bVar3 = false;
        fVar11 = (*(float *)(iVar4 + 0x58) - 1.0) /
                 (*(float *)(iVar4 + 0x58) - *(float *)(iVar5 + 0x58));
        fVar10 = (float)fabsf(fVar11 * (*(float *)(iVar5 + 0x54) - *(float *)(iVar4 + 0x54)) +
                              *(float *)(iVar4 + 0x54) + 0.0);
        if ((fVar10 <= 1.0) &&
           (fVar10 = (float)fabsf(fVar11 * (*pfVar6 - *pfVar7) + *pfVar7 + 0.0), fVar10 <= 1.0)) {
          bVar3 = true;
        }
        if (bVar3) {
          uVar9 = 1;
          goto LAB_0015f9d0;
        }
      }
      if ((uVar1 & 0x20) != 0) {
        bVar3 = false;
        fVar11 = (*(float *)(iVar4 + 0x58) + 1.0) /
                 (*(float *)(iVar4 + 0x58) - *(float *)(iVar5 + 0x58));
        fVar10 = (float)fabsf(fVar11 * (*(float *)(iVar5 + 0x54) - *(float *)(iVar4 + 0x54)) +
                              *(float *)(iVar4 + 0x54) + 0.0);
        if ((fVar10 <= 1.0) &&
           (fVar10 = (float)fabsf(fVar11 * (*pfVar6 - *pfVar7) + *pfVar7 + 0.0), fVar10 <= 1.0)) {
          bVar3 = true;
        }
        if (bVar3) {
          uVar9 = 1;
          goto LAB_0015f9d0;
        }
      }
      *param_1 = 0;
    }
LAB_0015f9d0:
    iVar8 = iVar8 + 1;
    param_1 = param_1 + 1;
    if (0xb < iVar8) {
      return uVar9;
    }
  } while( true );
}

// 0x0015fa60  size 0xe0
void FUN_0015fa60(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  if ((*(int *)(puVar2[3] + 0x40) == 0) && (*(int *)(puVar2[5] + 0x40) == 0)) {
    FUN_0015fb40();
    FUN_00163a90(0xbf800000,puVar2 + 0x18);
    FUN_0015d400(puVar2 + 8);
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    uVar1 = puVar2[3];
    puVar2[3] = puVar2[5];
    puVar2[5] = uVar1;
    FUN_0015fb40(param_1);
    FUN_00163a90(0xbf800000,puVar2 + 0x18);
    FUN_0015d400(puVar2 + 8);
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    uVar1 = puVar2[3];
    puVar2[3] = puVar2[5];
    puVar2[5] = uVar1;
    if ((float)puVar2[0x14] <= 0.0) {
      FUN_0015f090(param_1);
    }
  }
  return;
}

// 0x0015fb40  size 0x484
void FUN_0015fb40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  uVar4 = FUN_001599f0(*param_1);
  uVar5 = FUN_001599f0(param_1[1]);
  piVar1 = (int *)uVar5;
  uStack_4 = 0x3f800000;
  iVar2 = (**(code **)(*piVar1 + 0x40))(uVar5,0);
  fVar11 = (float)FUN_001638e0(iVar2 + 0x10,param_1 + 0x18);
  pfVar3 = (float *)FUN_0015a3e0(uVar5);
  fStack_10 = fVar11 * *pfVar3;
  iVar2 = (**(code **)(*piVar1 + 0x40))(uVar5,1);
  fVar11 = (float)FUN_001638e0(iVar2 + 0x10,param_1 + 0x18);
  iVar2 = FUN_0015a3e0(uVar5);
  fStack_c = fVar11 * *(float *)(iVar2 + 4);
  iVar2 = (**(code **)(*piVar1 + 0x40))(uVar5,2);
  fVar12 = (float)FUN_001638e0(iVar2 + 0x10,param_1 + 0x18);
  iVar2 = FUN_0015a3e0(uVar5);
  fVar11 = 0.0;
  fStack_8 = fVar12 * *(float *)(iVar2 + 8);
  if (fStack_8 * fStack_8 + fStack_10 * fStack_10 + fStack_c * fStack_c != 0.0) {
    iVar2 = param_1[5];
    iVar7 = 0;
    iVar9 = -1;
    iVar8 = iVar9;
    iVar10 = iVar9;
    do {
      if (*(int *)(iVar2 + 0x60) == 0) {
        fVar12 = 3.402e+38;
        iVar6 = iVar9;
        if (0.0 < fStack_10) {
          fVar13 = 1.0 - *(float *)(iVar2 + 0x50);
          if (fVar13 < fStack_10 * 3.402e+38) {
            fVar12 = fVar13 / fStack_10;
            iVar6 = 0;
          }
        }
        else if ((fStack_10 < 0.0) &&
                (fVar13 = *(float *)(iVar2 + 0x50) + 1.0, fVar13 < -fStack_10 * 3.402e+38)) {
          fVar12 = fVar13 / -fStack_10;
          iVar6 = 3;
        }
        if (0.0 < fStack_c) {
          fVar13 = 1.0 - *(float *)(iVar2 + 0x54);
          if (fVar13 < fVar12 * fStack_c) {
            fVar12 = fVar13 / fStack_c;
            iVar6 = 1;
          }
        }
        else if ((fStack_c < 0.0) &&
                (fVar13 = *(float *)(iVar2 + 0x54) + 1.0, fVar13 < fVar12 * -fStack_c)) {
          fVar12 = fVar13 / -fStack_c;
          iVar6 = 4;
        }
        if (0.0 < fStack_8) {
          fVar13 = 1.0 - *(float *)(iVar2 + 0x58);
          if (fVar13 < fVar12 * fStack_8) {
            fVar12 = fVar13 / fStack_8;
            iVar6 = 2;
          }
        }
        else if ((fStack_8 < 0.0) &&
                (fVar13 = *(float *)(iVar2 + 0x58) + 1.0, fVar13 < fVar12 * -fStack_8)) {
          fVar12 = fVar13 / -fStack_8;
          iVar6 = 5;
        }
        if (fVar11 < fVar12) {
          fVar11 = fVar12;
          iVar8 = iVar7;
          iVar10 = iVar6;
        }
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar7 < 8);
    if (0.0 < fVar11) {
      FUN_001638b0(&fStack_20,&fStack_10);
      iVar2 = (**(code **)(*piVar1 + 0x40))(uVar5,0);
      pfVar3 = (float *)FUN_0015a3f0(uVar5);
      FUN_001638b0(fStack_20 * *pfVar3,auStack_50,iVar2 + 0x10);
      iVar2 = (**(code **)(*piVar1 + 0x40))(uVar5,1);
      iVar7 = FUN_0015a3f0(uVar5);
      FUN_001638b0(fStack_1c * *(float *)(iVar7 + 4),auStack_60,iVar2 + 0x10);
      FUN_00163b80(auStack_40,auStack_50,auStack_60);
      iVar2 = (**(code **)(*piVar1 + 0x40))(uVar5,2);
      iVar7 = FUN_0015a3f0(uVar5);
      FUN_001638b0(fStack_18 * *(float *)(iVar7 + 8),auStack_70,iVar2 + 0x10);
      FUN_00163b80(auStack_30,auStack_40,auStack_70);
      fVar11 = (float)FUN_00163c10(auStack_30);
      if ((float)param_1[0x14] < fVar11) {
        uVar4 = (**(code **)(*(int *)uVar4 + 0x38))(uVar4,iVar8);
        iVar2 = (**(code **)(*piVar1 + 0x40))(uVar5,iVar10);
        FUN_0015d3d0(fVar11,0,param_1 + 8,uVar4,iVar2 + 0x10,param_1 + 0x18);
      }
    }
  }
  return;
}

// 0x0015ffd0  size 0x310
void FUN_0015ffd0(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar7 = FUN_00159a10(*param_1);
  uVar8 = FUN_00159a10(param_1[1]);
  FUN_001638b0(param_1[0x14],auStack_10,param_1 + 0x10);
  bVar1 = false;
  uVar15 = 0xffffffff;
  do {
    piVar14 = (int *)uVar7;
    bVar2 = false;
    uVar12 = 0;
    lVar9 = (**(code **)(*piVar14 + 0x34))(uVar7);
    piVar13 = (int *)uVar8;
    if (lVar9 != 0) {
      do {
        uVar10 = (**(code **)(*piVar14 + 0x38))(uVar7,uVar12);
        FUN_00163b80(auStack_20,uVar10,auStack_10);
        lVar9 = (**(code **)(*piVar13 + 0x28))(uVar8,auStack_20);
        if (lVar9 != 0) {
          fVar18 = 100000.0;
          bVar2 = true;
          fVar19 = 0.0;
          uVar4 = 0xffffffff;
          uVar11 = 0;
          lVar9 = (**(code **)(*piVar13 + 0x3c))(uVar8);
          if (lVar9 != 0) {
            do {
              iVar3 = (**(code **)(*piVar13 + 0x40))(uVar8,uVar11);
              fVar16 = (float)FUN_001638e0(param_1 + 0x18,iVar3 + 0x10);
              if (0.0 < fVar16) {
                iVar3 = (**(code **)(*piVar13 + 0x40))(uVar8,uVar11);
                fVar17 = (float)FUN_001638e0(auStack_20,iVar3 + 0x10);
                pfVar5 = (float *)(**(code **)(*piVar13 + 0x40))(uVar8,uVar11);
                fVar16 = (*pfVar5 - fVar17) / fVar16;
                if (fVar16 < fVar18) {
                  fVar18 = fVar16;
                  fVar19 = *pfVar5 - fVar17;
                  uVar15 = uVar12;
                  uVar4 = uVar11;
                }
              }
              uVar11 = uVar11 + 1;
              uVar6 = (**(code **)(*piVar13 + 0x3c))(uVar8);
            } while (uVar11 < uVar6);
          }
          if (-1 < (int)uVar4) {
            iVar3 = (**(code **)(*piVar13 + 0x40))(uVar8,uVar4);
            FUN_001638b0(fVar19 + 0.01,auStack_30,iVar3 + 0x10);
            FUN_00163b00(auStack_10,auStack_30);
            bVar1 = true;
          }
        }
        uVar12 = uVar12 + 1;
        uVar4 = (**(code **)(*piVar14 + 0x34))(uVar7);
      } while (uVar12 < uVar4);
    }
  } while (bVar2);
  if (bVar1) {
    fVar18 = (float)FUN_00163c10(auStack_10);
    uVar7 = (**(code **)(*piVar13 + 0x38))(uVar8,uVar15);
    FUN_001638b0(1.0 / fVar18,auStack_40,auStack_10);
    FUN_0015d3a0(fVar18,0,param_1 + 8,uVar7,auStack_40);
  }
  return;
}

