// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00158000 - 0x0015c000
#include "ghidra_types.h"

// 0x00158050  size 0x50
void FUN_00158050(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0013f270(param_2,0x12,*param_1 + param_1[2] * 0x10,param_3,param_4);
  param_1[2] = param_1[2] + iVar1;
  return;
}

// 0x001580a0  size 0x50
void FUN_001580a0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0013f340(param_2,0x12,*param_1 + param_1[2] * 0x10,param_3,param_4);
  param_1[2] = param_1[2] + iVar1;
  return;
}

// 0x001580f0  size 0x68
undefined8 FUN_001580f0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_2 + 0x6c) != 0) {
    if (*(int *)(param_2 + 0x70) == 0x12) {
      uVar1 = *(uint *)(param_2 + 0x78);
      uVar2 = 1;
      *param_1 = 0x50000000;
      param_1[1] = uVar1 & 0xfffffff;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      uVar2 = FUN_0013f340();
    }
  }
  return uVar2;
}

// 0x00158160  size 0x120
void FUN_00158160(int param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)FUN_0013da40(param_2);
  uVar2 = (uint)*(ushort *)((int)param_2 + 6);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      FUN_0013e840(piVar1,param_1,param_4,param_5);
      if (param_3 == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(int **)(param_1 + 0x6c) = piVar1;
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 0x6c) = 0;
      }
      *(int *)(param_1 + 100) = (int)param_4;
      *(int *)(param_1 + 0x68) = (int)param_5;
      FUN_0013f060(param_1,param_6,param_7,param_8,param_9,param_10);
      *(undefined4 *)(param_1 + 0x70) = 0;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      param_1 = param_1 + 0x80;
      piVar1 = (int *)((int)piVar1 + *piVar1);
    } while (uVar3 < uVar2);
  }
  return;
}

// 0x00158290  size 0xd4
void FUN_00158290(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  
  FUN_0013e840(param_2,param_1,param_4,param_5);
  iVar1 = (int)param_1;
  if (param_3 == 0) {
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(int *)(iVar1 + 0x6c) = (int)param_2;
  }
  else {
    *(undefined4 *)(iVar1 + 0x60) = 1;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
  }
  *(int *)(iVar1 + 100) = (int)param_4;
  *(int *)(iVar1 + 0x68) = (int)param_5;
  FUN_0013f060(param_1,param_6,param_7,param_8,param_9,param_10);
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  return;
}

// 0x00158370  size 0x1c
int FUN_00158370(int param_1,int param_2)

{
  return *(int *)(param_1 * 8 + iRam0036f0d8 + 4) + param_2 * 0x80;
}

// 0x00158390  size 0x20
void FUN_00158390(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(iRam0036f0d8 + param_1 * 8) = param_2;
  *(undefined4 *)(param_1 * 8 + iRam0036f0d8 + 4) = param_3;
  return;
}

// 0x001583b0  size 0x30
void FUN_001583b0(void)

{
  if (iRam0036f0d8 != 0) {
    FUN_00100290();
  }
  uRam0036f0d4 = 0;
  iRam0036f0d8 = 0;
  return;
}

// 0x001583e0  size 0x80
undefined4 FUN_001583e0(uint param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  
  uRam0036f0d4 = param_1;
  lVar2 = FUN_00100680(param_1 << 3,uRam0036f0d0);
  iRam0036f0d8 = (int)lVar2;
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar4 = 0;
    if (uRam0036f0d4 == 0) {
      uVar1 = 1;
    }
    else {
      iVar3 = 0;
      do {
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iRam0036f0d8 + iVar3) = 0;
        *(undefined4 *)(iRam0036f0d8 + iVar3 + 4) = 0;
        iVar3 = iVar3 + 8;
      } while (uVar4 < uRam0036f0d4);
      uVar1 = 1;
    }
  }
  return uVar1;
}

// 0x00158460  size 0x30
void FUN_00158460(void)

{
  if (iRam0036f0d8 != 0) {
    FUN_00100290();
  }
  uRam0036f0d4 = 0;
  iRam0036f0d8 = 0;
  return;
}

// 0x00158490  size 0x10
void FUN_00158490(undefined4 param_1)

{
  uRam0036f0d0 = param_1;
  uRam0036f0d4 = 0;
  uRam0036f0d8 = 0;
  return;
}

// 0x001584a0  size 0xec
void FUN_001584a0(undefined8 param_1,undefined8 param_2)

{
  if (iRam0042e400 != 0) {
    uRam0042e430 = 0;
    FUN_00158050(0x42e428,iRam0042e400,param_1,param_2);
    FUN_00158160(uRam0042e424,iRam0042e400,1,param_1,param_2,0x50010,0,0);
  }
  if (iRam0042f370 != 0) {
    FUN_0014c660(0x42f090,2,uRam0042f0c2);
    FUN_0014c3e0(0x42f090,param_1,param_2,0x50010,0,0x80);
  }
  return;
}

// 0x00158590  size 0x38
void FUN_00158590(int param_1,uint param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x44); (iVar1 != 0 && ((*(uint *)(iVar1 + 4) & param_2) == 0));
      iVar1 = *(int *)(iVar1 + 0x44)) {
  }
  return;
}

// 0x001585d0  size 0x8
undefined4 FUN_001585d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}

// 0x001585e0  size 0x8
int FUN_001585e0(int param_1)

{
  return param_1 + 0x20;
}

// 0x001585f0  size 0x8
int FUN_001585f0(int param_1)

{
  return param_1 + 0x10;
}

// 0x00158600  size 0x20
undefined4 FUN_00158600(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[1] & 0xff000000) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}

// 0x00158620  size 0x20
undefined4 FUN_00158620(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[1] & 0xff000000) == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00158640  size 0x8
undefined4 FUN_00158640(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}

// 0x00158650  size 0x8
undefined4 FUN_00158650(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}

// 0x00158660  size 0x8
undefined4 FUN_00158660(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}

// 0x00158690  size 0x258
void FUN_00158690(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  long unaff_s5;
  long unaff_s6;
  
  iVar1 = *(int *)(param_1 + 0x18);
joined_r0x001586c4:
  do {
    while( true ) {
      while( true ) {
        if (iVar1 == 0) {
          return;
        }
        if (iVar1 != param_2) break;
        iVar1 = *(int *)(iVar1 + 0xc4);
      }
      if ((*(uint *)(iVar1 + 0xd8) & param_3) != 0) break;
LAB_00158768:
      iVar1 = *(int *)(iVar1 + 0xc4);
    }
    if ((*(int *)(param_2 + 0xf0) == *(int *)(iVar1 + 0xf0)) && (*(int *)(param_2 + 0xf0) != 0)) {
      iVar1 = *(int *)(iVar1 + 0xc4);
      goto joined_r0x001586c4;
    }
    uVar2 = *(uint *)(param_1 + 0x2c);
    uVar8 = 0;
    if (uVar2 != 0) {
      piVar9 = *(int **)(param_1 + 0x28);
      iVar6 = 0;
      piVar7 = piVar9;
      do {
        if ((*piVar7 == param_2) && (*(int *)((int)piVar9 + iVar6 + 4) == iVar1)) {
          bVar3 = true;
          goto LAB_00158758;
        }
        if ((*(int *)((int)piVar9 + iVar6) == iVar1) &&
           (((int *)((int)piVar9 + iVar6))[1] == param_2)) {
          bVar3 = true;
          goto LAB_00158758;
        }
        uVar8 = uVar8 + 1;
        piVar7 = piVar7 + 8;
        iVar6 = iVar6 + 0x20;
      } while (uVar8 < uVar2);
    }
    bVar3 = false;
LAB_00158758:
    if (!bVar3) {
      piVar9 = (int *)(*(int *)(param_1 + 0x28) + uVar2 * 0x20);
      piVar9[7] = 0;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      *piVar9 = param_2;
      piVar9[1] = iVar1;
      piVar9[4] = 0;
      piVar9[5] = 0;
      piVar9[6] = 0;
      iVar6 = *piVar9;
      lVar5 = FUN_00162420(iVar6);
      if (lVar5 == 0) {
        iVar6 = 0;
      }
      else {
        while (lVar4 = lVar5, lVar4 != 0) {
          lVar5 = FUN_0015c640(lVar4,iVar6);
          unaff_s5 = lVar4;
        }
        iVar6 = (int)unaff_s5;
      }
      piVar9[2] = iVar6;
      FUN_0015c5f0(piVar9,piVar9);
      iVar6 = piVar9[1];
      lVar5 = FUN_00162420(iVar6);
      if (lVar5 == 0) {
        iVar6 = 0;
      }
      else {
        while (lVar4 = lVar5, lVar4 != 0) {
          lVar5 = FUN_0015c640(lVar4,iVar6);
          unaff_s6 = lVar4;
        }
        iVar6 = (int)unaff_s6;
      }
      piVar9[3] = iVar6;
      FUN_0015c5a0(piVar9,piVar9);
      goto LAB_00158768;
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
  } while( true );
}

// 0x00158900  size 0x1a4
void FUN_00158900(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x28);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    do {
      iVar4 = *piVar3;
      if (iVar4 == param_2) {
        if (((*(uint *)(piVar3[1] + 0xd8) & param_3) == 0) ||
           ((*(uint *)(piVar3[1] + 0xdc) & *(uint *)(iVar4 + 0xd8)) != 0)) {
LAB_001589c0:
          piVar3 = piVar3 + 8;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x28) + uVar2 * 0x20;
          FUN_0015c4d0(iVar4);
          uVar1 = *(int *)(param_1 + 0x2c) - 1;
          if (uVar2 < uVar1) {
            FUN_0015c3c0(*(int *)(param_1 + 0x28) + uVar1 * 0x20,iVar4);
          }
          uVar2 = uVar2 - 1;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        }
      }
      else {
        if (((piVar3[1] != param_2) || ((*(uint *)(iVar4 + 0xd8) & param_3) == 0)) ||
           ((*(uint *)(iVar4 + 0xdc) & *(uint *)(piVar3[1] + 0xd8)) != 0)) goto LAB_001589c0;
        iVar4 = *(int *)(param_1 + 0x28) + uVar2 * 0x20;
        FUN_0015c4d0(iVar4);
        uVar1 = *(int *)(param_1 + 0x2c) - 1;
        if (uVar2 < uVar1) {
          FUN_0015c3c0(*(int *)(param_1 + 0x28) + uVar1 * 0x20,iVar4);
        }
        uVar2 = uVar2 - 1;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x2c));
  }
  return;
}

// 0x00158ac0  size 0x3c
int FUN_00158ac0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 < *(uint *)(param_1 + 0x30)) {
    *(uint *)(param_1 + 0x38) = uVar1 + 1;
    iVar2 = *(int *)(param_1 + 0x34) + uVar1 * 0x50;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

// 0x00158b00  size 0x2c8
void FUN_00158b00(float param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  float fVar8;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  fGpffff8a14 = fGpffff8a14 + param_1;
  if (3600.0 < fGpffff8a14) {
    fGpffff8a14 = fGpffff8a14 - 3600.0;
    iVar4 = *(int *)(param_2 + 0x2c);
    iVar5 = *(int *)(param_2 + 0x28);
    if (iVar4 != 0) {
      do {
        iVar4 = iVar4 + -1;
        *(float *)(iVar5 + 0x1c) = *(float *)(iVar5 + 0x1c) - 3600.0;
        iVar5 = iVar5 + 0x20;
      } while (iVar4 != 0);
      iVar4 = *(int *)(param_2 + 0xc);
      goto LAB_00158b54;
    }
  }
  iVar4 = *(int *)(param_2 + 0xc);
LAB_00158b54:
  uVar6 = 0;
  fGpffff8a10 = param_1;
  if (iVar4 != 0) {
    do {
      iVar4 = *(int *)(param_2 + 0x18);
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_2 + 0x2c);
      }
      else {
        do {
          *(undefined4 *)(iVar4 + 0x108) = 0;
          *(undefined4 *)(iVar4 + 0x104) = 0;
          *(undefined4 *)(iVar4 + 0x100) = 0;
          iVar4 = *(int *)(iVar4 + 0xc4);
        } while (iVar4 != 0);
        iVar4 = *(int *)(param_2 + 0x2c);
      }
      piVar7 = *(int **)(param_2 + 0x28);
      iVar5 = 0;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (((*(char *)(*piVar7 + 0xf7) != '\0') || (*(char *)(piVar7[1] + 0xf7) != '\0')) ||
           ((float)piVar7[7] <= fGpffff8a14)) {
          fVar8 = (float)FUN_0015c660(piVar7);
          piVar7[7] = (int)fVar8;
          if (fVar8 < fGpffff8a14 + fGpffff8a10) {
            puVar1 = (undefined4 *)FUN_00165250(*(undefined4 *)(*piVar7 + 4));
            uStack_10 = *puVar1;
            uStack_c = puVar1[1];
            uStack_8 = puVar1[2];
            uStack_4 = puVar1[3];
            puVar1 = (undefined4 *)FUN_00165250(*(undefined4 *)(piVar7[1] + 4));
            uStack_20 = *puVar1;
            uStack_1c = puVar1[1];
            uStack_18 = puVar1[2];
            uStack_14 = puVar1[3];
            lVar3 = FUN_0015cab0(piVar7);
            if (lVar3 != 0) {
              iVar5 = iVar5 + 1;
              FUN_00161bb0(*piVar7);
              FUN_00161bb0(piVar7[1]);
              FUN_00165260(*(undefined4 *)(*piVar7 + 4),&uStack_10);
              FUN_00165260(*(undefined4 *)(piVar7[1] + 4),&uStack_20);
            }
          }
        }
        piVar7 = piVar7 + 8;
      }
      if (iVar5 == 0) {
        return;
      }
      for (iVar4 = *(int *)(param_2 + 0x18); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc4)) {
        *(float *)(iVar4 + 0x100) = *(float *)(iVar4 + 0x100) * *(float *)(iVar4 + 0xb0);
        *(float *)(iVar4 + 0x104) = *(float *)(iVar4 + 0x104) * *(float *)(iVar4 + 0xb4);
        *(float *)(iVar4 + 0x108) = *(float *)(iVar4 + 0x108) * *(float *)(iVar4 + 0xb8);
        uVar2 = FUN_00165250(*(undefined4 *)(iVar4 + 4));
        FUN_00163b80(auStack_30,uVar2,iVar4 + 0x100);
        FUN_00165260(*(undefined4 *)(iVar4 + 4),auStack_30);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_2 + 0xc));
  }
  return;
}

// 0x00158dd0  size 0x2b8
void FUN_00158dd0(float param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  iVar8 = (int)param_2;
  *(undefined4 *)(iVar8 + 0x38) = 0;
  *(undefined1 *)(iVar8 + 0x3c) = 1;
  for (iVar1 = *(int *)(iVar8 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc4)) {
    if (*(char *)(iVar1 + 0xf6) == '\0') {
      uVar7 = FUN_00164c40(*(undefined4 *)(iVar1 + 4));
      FUN_00159c20(iVar1 + 0x10,uVar7);
    }
    *(undefined4 *)(iVar1 + 0xd4) = 0;
  }
  if (param_1 == 0.0) {
    iVar1 = *(int *)(iVar8 + 0x18);
  }
  else {
    FUN_00158b00(param_1,param_2);
    iVar1 = *(int *)(iVar8 + 0x18);
  }
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc4)) {
    if (*(char *)(iVar1 + 0xf4) == '\0') {
      FUN_00161bb0(iVar1);
    }
  }
  for (iVar1 = *(int *)(iVar8 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc4)) {
    if ((*(int *)(iVar1 + 0xd4) != 0) && (*(int *)(iVar1 + 0xa0) != 0)) {
      FUN_00164d60(*(undefined4 *)(iVar1 + 4),iVar1 + 0x80);
      FUN_001638b0(1.0 / (float)*(uint *)(iVar1 + 0xa0),auStack_20,iVar1 + 0x90);
      FUN_001638b0(*(undefined4 *)(iVar1 + 0xc0),auStack_10,auStack_20);
      FUN_00164d40(*(undefined4 *)(iVar1 + 4),auStack_10);
      FUN_00163f80(0x3f800000,*(undefined4 *)(iVar1 + 4));
    }
  }
  for (iVar1 = *(int *)(iVar8 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc4)) {
    *(undefined1 *)(iVar1 + 0xf7) = 0;
    uVar5 = DAT_003625ec;
    uVar4 = DAT_003625e8;
    uVar3 = DAT_003625e4;
    if (*(int *)(iVar1 + 0xa0) != 0) {
      *(undefined4 *)(iVar1 + 0x80) = DAT_003625e0;
      *(undefined4 *)(iVar1 + 0x84) = uVar3;
      *(undefined4 *)(iVar1 + 0x88) = uVar4;
      *(undefined4 *)(iVar1 + 0x8c) = uVar5;
      uVar5 = DAT_003625ec;
      uVar4 = DAT_003625e8;
      uVar3 = DAT_003625e4;
      *(undefined4 *)(iVar1 + 0x90) = DAT_003625e0;
      *(undefined4 *)(iVar1 + 0x94) = uVar3;
      *(undefined4 *)(iVar1 + 0x98) = uVar4;
      *(undefined4 *)(iVar1 + 0x9c) = uVar5;
      *(undefined4 *)(iVar1 + 0xa0) = 0;
    }
    if (*(int *)(iVar1 + 0xd4) != 0) {
      if (*(code **)(iVar1 + 0xcc) != (code *)0x0) {
        (**(code **)(iVar1 + 0xcc))(*(undefined4 *)(iVar1 + 0xd0));
      }
      if (*(int **)(iVar1 + 0x110) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0x110) + 8))();
      }
    }
    if (*(int *)(iVar1 + 0x110) != 0) {
      piVar2 = *(int **)(iVar1 + 0xd4);
      while (piVar2 != (int *)0x0) {
        if ((piVar2[1] & 0xff000000U) == 0) {
          iVar6 = *piVar2;
        }
        else {
          iVar6 = 0;
        }
        if (iVar6 == 0) {
          (**(code **)(**(int **)(iVar1 + 0x110) + 0xc))(*(int **)(iVar1 + 0x110),piVar2);
          piVar2 = (int *)piVar2[0x11];
        }
        else {
          (**(code **)(**(int **)(iVar1 + 0x110) + 0x10))(*(int **)(iVar1 + 0x110),piVar2);
          piVar2 = (int *)piVar2[0x11];
        }
      }
    }
  }
  *(undefined1 *)(iVar8 + 0x3c) = 0;
  return;
}

// 0x00159090  size 0x2bc
void FUN_00159090(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  param_1[4] = param_2;
  if (*param_1 == 0) {
    iVar1 = param_1[4];
    uVar2 = FUN_00100270(iVar1 * 0x120 + 0x10);
    iVar1 = FUN_00100c10(uVar2,0x159370,0x1626d0,0x120,iVar1);
    param_1[5] = iVar1;
  }
  else {
    iVar1 = param_1[4];
    uVar2 = FUN_00100230(iVar1 * 0x120 + 0x10);
    iVar1 = FUN_00100c10(uVar2,0x159370,0x1626d0,0x120,iVar1);
    param_1[5] = iVar1;
  }
  param_1[6] = 0;
  param_1[7] = param_1[5];
  uVar3 = 0;
  if (param_1[4] == 0) {
    iVar1 = param_1[5];
  }
  else {
    iVar1 = 0;
    do {
      uVar3 = uVar3 + 1;
      *(int *)(param_1[5] + iVar1 + 0xc4) = param_1[5] + iVar1 + 0x120;
      *(int *)(param_1[5] + iVar1 + 200) = param_1[5] + iVar1 + -0x120;
      iVar1 = iVar1 + 0x120;
    } while (uVar3 < (uint)param_1[4]);
    iVar1 = param_1[5];
  }
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(param_1[4] * 0x120 + param_1[5] + -0x5c) = 0;
  param_1[8] = 0;
  param_1[9] = param_3;
  if (*param_1 == 0) {
    iVar1 = FUN_00100270(param_1[9] << 5);
    param_1[10] = iVar1;
  }
  else {
    iVar1 = FUN_00100230(param_1[9] << 5);
    param_1[10] = iVar1;
  }
  param_1[0xb] = 0;
  param_1[3] = 2;
  uGpffff89fc = 2;
  param_1[0x10] = 0x20;
  if (*param_1 == 0) {
    iVar1 = param_1[0x10];
    uVar2 = FUN_00100270(iVar1 * 0x80 + 0x10);
    iVar1 = FUN_00100c10(uVar2,0x158670,0,0x40,iVar1 << 1);
    param_1[0x11] = iVar1;
  }
  else {
    iVar1 = param_1[0x10];
    uVar2 = FUN_00100230(iVar1 * 0x80 + 0x10);
    iVar1 = FUN_00100c10(uVar2,0x158670,0,0x40,iVar1 << 1);
    param_1[0x11] = iVar1;
  }
  param_1[0x12] = param_1[0x11] + param_1[0x10] * 0x40;
  param_1[0xc] = param_4;
  if (*param_1 == 0) {
    iVar1 = param_1[0xc];
    uVar2 = FUN_00100270(iVar1 * 0x50 + 0x10);
    iVar1 = FUN_00100c10(uVar2,0x159350,0,0x50,iVar1);
    param_1[0xd] = iVar1;
  }
  else {
    iVar1 = param_1[0xc];
    uVar2 = FUN_00100230(iVar1 * 0x50 + 0x10);
    iVar1 = FUN_00100c10(uVar2,0x159350,0,0x50,iVar1);
    param_1[0xd] = iVar1;
  }
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[2] = 0x3c888889;
  return;
}

// 0x00159370  size 0x4c
undefined8 FUN_00159370(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_0036e268;
  FUN_00159e40(puVar1 + 4);
  puVar1[0x23] = 0x3f800000;
  puVar1[0x27] = 0x3f800000;
  puVar1[0x2f] = 0x3f800000;
  puVar1[0x43] = 0x3f800000;
  return param_1;
}

// 0x001593c0  size 0xec
void FUN_001593c0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iRam0042f400 = param_1;
  if (iRam0042f404 != 0) {
    thunk_FUN_00100290(iRam0042f404 + -0x10);
  }
  if (iRam0042f3c0 == 0) {
    iVar2 = iRam0042f400 << 1;
    uVar1 = FUN_00100270(iRam0042f400 * 0x80 + 0x10);
    iRam0042f404 = FUN_00100c10(uVar1,0x158670,0,0x40,iVar2);
  }
  else {
    iVar2 = iRam0042f400 << 1;
    uVar1 = FUN_00100230(iRam0042f400 * 0x80 + 0x10);
    iRam0042f404 = FUN_00100c10(uVar1,0x158670,0,0x40,iVar2);
  }
  iRam0042f408 = iRam0042f404 + iRam0042f400 * 0x40;
  return;
}

// 0x001594b0  size 0xc
void FUN_001594b0(void)

{
  FUN_00158dd0(0x42f3c0);
  return;
}

// 0x001594c0  size 0x130
void FUN_001594c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  FUN_001624b0(param_1,0x42f3d8);
  FUN_00162500(param_1,0x42f3dc);
  uVar2 = 0;
  iRam0042f3e0 = iRam0042f3e0 + -1;
  piVar3 = piRam0042f3e8;
  if (uRam0042f3ec != 0) {
    do {
      if ((*piVar3 == param_1) || (piVar3[1] == param_1)) {
        piVar1 = piRam0042f3e8 + uVar2 * 8;
        FUN_0015c4d0(piVar1);
        if (uVar2 < uRam0042f3ec - 1) {
          FUN_0015c3c0(piRam0042f3e8 + (uRam0042f3ec - 1) * 8,piVar1);
        }
        uVar2 = uVar2 - 1;
        uRam0042f3ec = uRam0042f3ec - 1;
      }
      else {
        piVar3 = piVar3 + 8;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uRam0042f3ec);
  }
  return;
}

// 0x00159600  size 0xb0
int FUN_00159600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = iRam0042f3dc;
  FUN_001624b0(iRam0042f3dc,0x42f3dc);
  FUN_00162500(iVar1,0x42f3d8);
  iRam0042f3e0 = iRam0042f3e0 + 1;
  FUN_00162740(iVar1,param_1,param_2,param_3,uRam0042f3c0);
  FUN_00158690(0x42f3c0,iVar1,*(undefined4 *)(iVar1 + 0xdc));
  return iVar1;
}

// 0x001596b0  size 0x10
void FUN_001596b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x001596b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0042f3c4)();
  return;
}

// 0x001596c0  size 0xc
void FUN_001596c0(undefined4 param_1)

{
  uRam0042f3c4 = param_1;
  return;
}

// 0x001596d0  size 0x8
void FUN_001596d0(undefined4 param_1)

{
  uGpffff8a80 = param_1;
  return;
}

// 0x001596e0  size 0x8
void FUN_001596e0(undefined4 param_1)

{
  uGpffff8a7c = param_1;
  return;
}

// 0x001596f0  size 0x7c
void FUN_001596f0(void)

{
  FUN_001009c0(uRam0042f3d4,0x1626d0);
  thunk_FUN_00100290(uRam0042f3e8);
  if (iRam0042f3f4 != 0) {
    thunk_FUN_00100290(iRam0042f3f4 + -0x10);
  }
  uRam0042f3d0 = 0;
  uRam0042f3e0 = 0;
  uRam0042f3e4 = 0;
  uRam0042f3ec = 0;
  uRam0042f3f0 = 0;
  uRam0042f3f8 = 0;
  return;
}

// 0x00159770  size 0x6c
void FUN_00159770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uRam0042f3c0 = param_4;
  FUN_00159090(0x42f3c0,param_1,param_2,param_3);
  FUN_0015d220();
  puGpffff8a7c = &LAB_0015d390;
  puGpffff8a80 = &LAB_0015d370;
  puRam0042f3c4 = &LAB_0015d330;
  return;
}

// 0x001597f0  size 0x184
void FUN_001597f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar4 = iVar1 + 0x30;
  iVar3 = iVar2 + 0x30;
  uVar5 = FUN_001638e0(iVar3,iVar4);
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  uVar5 = FUN_001638e0(iVar3,iVar1 + 0x40);
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  uVar5 = FUN_001638e0(iVar3,iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  uVar5 = FUN_001638e0(iVar2 + 0x40,iVar4);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  uVar5 = FUN_001638e0(iVar2 + 0x40,iVar1 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  uVar5 = FUN_001638e0(iVar2 + 0x40,iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  uVar5 = FUN_001638e0(iVar2 + 0x50,iVar4);
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  uVar5 = FUN_001638e0(iVar2 + 0x50,iVar1 + 0x40);
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  uVar5 = FUN_001638e0(iVar2 + 0x50,iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  FUN_00163b40(&uStack_30,*(int *)(param_1 + 8) + 0x20,*(int *)(param_1 + 4) + 0x20);
  uStack_14 = 0x3f800000;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  uStack_18 = uStack_28;
  *(undefined4 *)(param_1 + 0x60) = uStack_30;
  *(undefined4 *)(param_1 + 100) = uStack_2c;
  *(undefined4 *)(param_1 + 0x68) = uStack_28;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 8);
  fStack_38 = -*(float *)(iVar1 + 0x28);
  fStack_3c = -*(float *)(iVar1 + 0x24);
  fStack_40 = -*(float *)(iVar1 + 0x20);
  FUN_00162e70(auStack_10,param_1 + 0x30,&fStack_40);
  FUN_00163b80(&uStack_60,auStack_10,*(int *)(param_1 + 8) + 0x20);
  *(undefined4 *)(param_1 + 0x60) = uStack_60;
  *(undefined4 *)(param_1 + 100) = uStack_5c;
  *(undefined4 *)(param_1 + 0x68) = uStack_58;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  return;
}

// 0x00159980  size 0x70
uint FUN_00159980(int param_1,float *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(float *)(param_1 + 0x10) <= *param_2) {
    if (*(float *)(param_1 + 0x20) < *param_2) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  if (*(float *)(param_1 + 0x18) <= param_2[2]) {
    if (*(float *)(param_1 + 0x28) < param_2[2]) {
      uVar1 = uVar1 | 0x20;
    }
  }
  else {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}

// 0x001599f0  size 0x8
undefined4 FUN_001599f0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0x00159a00  size 0x8
undefined4 FUN_00159a00(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0x00159a10  size 0x8
undefined4 FUN_00159a10(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0x00159a20  size 0x8
undefined4 FUN_00159a20(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0x00159a30  size 0xf0
void FUN_00159a30(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  iVar2 = (int)param_1;
  (**(code **)(**(int **)(iVar2 + 8) + 0x30))();
  FUN_00163b40(&uStack_30,*(int *)(iVar2 + 8) + 0x20,*(int *)(iVar2 + 4) + 0x20);
  uStack_14 = 0x3f800000;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  uStack_18 = uStack_28;
  *(undefined4 *)(iVar2 + 0x60) = uStack_30;
  *(undefined4 *)(iVar2 + 100) = uStack_2c;
  *(undefined4 *)(iVar2 + 0x68) = uStack_28;
  *(undefined4 *)(iVar2 + 0x6c) = 0x3f800000;
  iVar1 = *(int *)(iVar2 + 8);
  fStack_38 = -*(float *)(iVar1 + 0x28);
  fStack_3c = -*(float *)(iVar1 + 0x24);
  fStack_40 = -*(float *)(iVar1 + 0x20);
  FUN_00162e70(auStack_10,iVar2 + 0x30,&fStack_40);
  FUN_00163b80(&uStack_60,auStack_10,*(int *)(iVar2 + 8) + 0x20);
  uStack_44 = 0x3f800000;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  *(undefined4 *)(iVar2 + 0x60) = uStack_60;
  *(undefined4 *)(iVar2 + 100) = uStack_5c;
  *(undefined4 *)(iVar2 + 0x68) = uStack_58;
  *(undefined4 *)(iVar2 + 0x6c) = 0x3f800000;
  FUN_00159b40(param_1);
  return;
}

// 0x00159b20  size 0x14
void FUN_00159b20(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00159b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x18))();
  return;
}

// 0x00159b40  size 0xd4
void FUN_00159b40(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  fVar3 = *(float *)(*param_1 + 0x14);
  if (*(float *)(iVar1 + 0x20) < *(float *)(iVar2 + 0x20)) {
    param_1[4] = (int)(*(float *)(iVar1 + 0x20) - fVar3);
    param_1[8] = (int)(*(float *)(iVar2 + 0x20) + fVar3);
  }
  else {
    param_1[4] = (int)(*(float *)(iVar2 + 0x20) - fVar3);
    param_1[8] = (int)(*(float *)(iVar1 + 0x20) + fVar3);
  }
  if (*(float *)(iVar1 + 0x24) < *(float *)(iVar2 + 0x24)) {
    param_1[5] = (int)(*(float *)(iVar1 + 0x24) - fVar3);
    param_1[9] = (int)(*(float *)(iVar2 + 0x24) + fVar3);
  }
  else {
    param_1[5] = (int)(*(float *)(iVar2 + 0x24) - fVar3);
    param_1[9] = (int)(*(float *)(iVar1 + 0x24) + fVar3);
  }
  if (*(float *)(iVar1 + 0x28) < *(float *)(iVar2 + 0x28)) {
    param_1[6] = (int)(*(float *)(iVar1 + 0x28) - fVar3);
    param_1[10] = (int)(*(float *)(iVar2 + 0x28) + fVar3);
  }
  else {
    param_1[6] = (int)(*(float *)(iVar2 + 0x28) - fVar3);
    param_1[10] = (int)(*(float *)(iVar1 + 0x28) + fVar3);
  }
  return;
}

// 0x00159c20  size 0x68
void FUN_00159c20(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  uVar1 = puVar2[1];
  puVar2[1] = puVar2[2];
  puVar2[2] = uVar1;
  (**(code **)(*(int *)puVar2[2] + 0x2c))((int *)puVar2[2],param_2,*puVar2);
  (**(code **)(*(int *)puVar2[2] + 0x60))((int *)puVar2[2],puVar2[1]);
  FUN_001597f0(param_1);
  FUN_00159b40(param_1);
  return;
}

// 0x00159c90  size 0x8
undefined4 FUN_00159c90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 0x00159ca0  size 0xc
int FUN_00159ca0(int param_1)

{
  return *(int *)(param_1 + 4) + 0x20;
}

// 0x00159cb0  size 0xc
int FUN_00159cb0(int param_1)

{
  return *(int *)(param_1 + 8) + 0x20;
}

// 0x00159cc0  size 0xec
void FUN_00159cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)param_1;
  piVar3 = (int *)puVar2[1];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3,1);
  }
  piVar3 = (int *)puVar2[2];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3,1);
  }
  piVar3 = (int *)param_2;
  uVar1 = (**(code **)(*piVar3 + 0x1c))(param_2,param_4);
  puVar2[1] = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x1c))(param_2,param_4);
  puVar2[2] = uVar1;
  (**(code **)(*(int *)puVar2[1] + 0x2c))((int *)puVar2[1],param_3,param_2);
  (**(code **)(*(int *)puVar2[2] + 0x2c))((int *)puVar2[2],param_3,param_2);
  *puVar2 = piVar3;
  FUN_001630c0(puVar2 + 0xc);
  FUN_00159b40(param_1);
  return;
}

// 0x00159db0  size 0x84
long FUN_00159db0(long param_1,short param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    piVar1 = *(int **)((int)param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,1);
    }
    piVar1 = *(int **)((int)param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,1);
    }
    if (0 < param_2) {
      thunk_FUN_00100290(param_1);
    }
  }
  return param_1;
}

// 0x00159e40  size 0x20
undefined8 FUN_00159e40(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[7] = 0x3f800000;
  puVar1[0xb] = 0x3f800000;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return param_1;
}

// 0x00159e60  size 0x148
void FUN_00159e60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
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
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar1 = (int)param_1;
  FUN_001636f0(&uStack_80,param_2,iVar1 + 0x20);
  *(undefined4 *)(iVar1 + 0x20) = uStack_80;
  *(undefined4 *)(iVar1 + 0x24) = uStack_7c;
  *(undefined4 *)(iVar1 + 0x28) = uStack_78;
  *(undefined4 *)(iVar1 + 0x2c) = uStack_74;
  uStack_50 = *(undefined4 *)(iVar1 + 0x60);
  uStack_4c = 0;
  uStack_48 = 0;
  FUN_001636a0(&uStack_10,param_2,&uStack_50);
  uStack_5c = *(undefined4 *)(iVar1 + 100);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_001636a0(&uStack_20,param_2,&uStack_60);
  uStack_68 = *(undefined4 *)(iVar1 + 0x68);
  uStack_70 = 0;
  uStack_6c = 0;
  FUN_001636a0(&uStack_30,param_2,&uStack_70);
  uStack_34 = 0x3f800000;
  fVar2 = (float)FUN_00120a68(uStack_20);
  fVar3 = (float)FUN_00120a68(uStack_10);
  fStack_40 = (float)FUN_00120a68(uStack_30);
  fStack_40 = fStack_40 + fVar3 + fVar2;
  fVar2 = (float)FUN_00120a68(uStack_1c);
  fVar3 = (float)FUN_00120a68(uStack_c);
  fStack_3c = (float)FUN_00120a68(uStack_2c);
  fStack_3c = fStack_3c + fVar3 + fVar2;
  fVar2 = (float)FUN_00120a68(uStack_18);
  fVar3 = (float)FUN_00120a68(uStack_8);
  fStack_38 = (float)FUN_00120a68(uStack_28);
  fStack_38 = fStack_38 + fVar3 + fVar2;
  FUN_0015a1b0(param_1,&fStack_40);
  return;
}

// 0x00159ff0  size 0x1b4
void FUN_00159ff0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_001638b0(*(undefined4 *)(param_1 + 0x60),auStack_50,param_1 + 0x120);
  FUN_00163b40(auStack_40,param_1 + 0x20,auStack_50);
  FUN_001638b0(*(undefined4 *)(param_1 + 100),auStack_60,param_1 + 0x140);
  FUN_00163b40(auStack_30,auStack_40,auStack_60);
  FUN_001638b0(*(undefined4 *)(param_1 + 0x68),auStack_70,param_1 + 0x160);
  FUN_00163b40(&uStack_10,auStack_30,auStack_70);
  FUN_001638b0(*(undefined4 *)(param_1 + 0x60),auStack_a0,param_1 + 0x120);
  FUN_00163b80(auStack_90,param_1 + 0x20,auStack_a0);
  FUN_001638b0(*(undefined4 *)(param_1 + 100),auStack_b0,param_1 + 0x140);
  FUN_00163b80(auStack_80,auStack_90,auStack_b0);
  FUN_001638b0(*(undefined4 *)(param_1 + 0x68),auStack_c0,param_1 + 0x160);
  FUN_00163b80(&uStack_20,auStack_80,auStack_c0);
  uVar5 = 0;
  iVar4 = param_1;
  do {
    if ((uVar5 & 1) == 0) {
      uVar1 = uStack_20;
    }
    else {
      uVar1 = uStack_10;
    }
    *(undefined4 *)(iVar4 + 0x90) = uVar1;
    if ((uVar5 & 2) == 0) {
      uVar1 = uStack_1c;
    }
    else {
      uVar1 = uStack_c;
    }
    *(undefined4 *)(iVar4 + 0x94) = uVar1;
    if ((uVar5 & 4) == 0) {
      uVar1 = uStack_18;
    }
    else {
      uVar1 = uStack_8;
    }
    uVar5 = uVar5 + 1;
    *(undefined4 *)(iVar4 + 0x98) = uVar1;
    iVar4 = iVar4 + 0x10;
  } while (uVar5 < 8);
  uVar1 = FUN_001638e0(param_1 + 0x120,&uStack_20);
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  uVar1 = FUN_001638e0(param_1 + 0x140,&uStack_20);
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  uVar1 = FUN_001638e0(param_1 + 0x160,&uStack_20);
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  uVar1 = FUN_001638e0(param_1 + 0x180,&uStack_10);
  *(undefined4 *)(param_1 + 0x170) = uVar1;
  uVar1 = FUN_001638e0(param_1 + 0x1a0,&uStack_10);
  *(undefined4 *)(param_1 + 400) = uVar1;
  uVar1 = FUN_001638e0(param_1 + 0x1c0,&uStack_10);
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  return;
}

// 0x0015a1b0  size 0x1fc
void FUN_0015a1b0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar6 = FUN_00163c10(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  puVar5 = (undefined4 *)param_2;
  uVar6 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *(undefined4 *)(param_1 + 0x60) = *puVar5;
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(float *)(param_1 + 0x70) = 1.0 / *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x74) = 1.0 / *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x78) = 1.0 / *(float *)(param_1 + 0x68);
  FUN_001638b0(*(undefined4 *)(param_1 + 0x60),auStack_50,param_1 + 0x120);
  FUN_00163b40(auStack_40,param_1 + 0x20,auStack_50);
  FUN_001638b0(*(undefined4 *)(param_1 + 100),auStack_60,param_1 + 0x140);
  FUN_00163b40(auStack_30,auStack_40,auStack_60);
  FUN_001638b0(*(undefined4 *)(param_1 + 0x68),auStack_70,param_1 + 0x160);
  FUN_00163b40(&uStack_10,auStack_30,auStack_70);
  FUN_001638b0(*(undefined4 *)(param_1 + 0x60),auStack_a0,param_1 + 0x120);
  FUN_00163b80(auStack_90,param_1 + 0x20,auStack_a0);
  FUN_001638b0(*(undefined4 *)(param_1 + 100),auStack_b0,param_1 + 0x140);
  FUN_00163b80(auStack_80,auStack_90,auStack_b0);
  FUN_001638b0(*(undefined4 *)(param_1 + 0x68),auStack_c0,param_1 + 0x160);
  FUN_00163b80(&uStack_20,auStack_80,auStack_c0);
  uVar4 = 0;
  iVar3 = param_1;
  do {
    if ((uVar4 & 1) == 0) {
      uVar6 = uStack_20;
    }
    else {
      uVar6 = uStack_10;
    }
    *(undefined4 *)(iVar3 + 0x90) = uVar6;
    if ((uVar4 & 2) == 0) {
      uVar6 = uStack_1c;
    }
    else {
      uVar6 = uStack_c;
    }
    *(undefined4 *)(iVar3 + 0x94) = uVar6;
    if ((uVar4 & 4) == 0) {
      uVar6 = uStack_18;
    }
    else {
      uVar6 = uStack_8;
    }
    uVar4 = uVar4 + 1;
    *(undefined4 *)(iVar3 + 0x98) = uVar6;
    iVar3 = iVar3 + 0x10;
  } while (uVar4 < 8);
  uVar6 = FUN_001638e0(param_1 + 0x120,&uStack_20);
  *(undefined4 *)(param_1 + 0x110) = uVar6;
  uVar6 = FUN_001638e0(param_1 + 0x140,&uStack_20);
  *(undefined4 *)(param_1 + 0x130) = uVar6;
  uVar6 = FUN_001638e0(param_1 + 0x160,&uStack_20);
  *(undefined4 *)(param_1 + 0x150) = uVar6;
  uVar6 = FUN_001638e0(param_1 + 0x180,&uStack_10);
  *(undefined4 *)(param_1 + 0x170) = uVar6;
  uVar6 = FUN_001638e0(param_1 + 0x1a0,&uStack_10);
  *(undefined4 *)(param_1 + 400) = uVar6;
  uVar6 = FUN_001638e0(param_1 + 0x1c0,&uStack_10);
  *(undefined4 *)(param_1 + 0x1b0) = uVar6;
  return;
}

// 0x0015a3b0  size 0x28
void FUN_0015a3b0(undefined4 param_1,undefined8 param_2)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  uStack_c = param_1;
  uStack_8 = param_1;
  FUN_0015a1b0(param_2,&uStack_10);
  return;
}

// 0x0015a3e0  size 0x8
int FUN_0015a3e0(int param_1)

{
  return param_1 + 0x70;
}

// 0x0015a3f0  size 0x8
int FUN_0015a3f0(int param_1)

{
  return param_1 + 0x60;
}

// 0x0015a420  size 0x154
undefined4 FUN_0015a420(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = FUN_001638e0(param_3 + 0x140,param_1 + 4);
  fVar3 = (float)FUN_00120a68(uVar2);
  uVar2 = FUN_001638e0(param_3 + 0x120,param_1 + 4);
  fVar4 = (float)FUN_00120a68(uVar2);
  uVar2 = FUN_001638e0(param_3 + 0x160,param_1 + 4);
  fVar5 = (float)FUN_00120a68(uVar2);
  fVar1 = *(float *)(param_3 + 100);
  fVar8 = *(float *)(param_3 + 0x60);
  fVar7 = *(float *)(param_3 + 0x68);
  fVar6 = (float)FUN_001638e0(param_3 + 0x20,param_1 + 4);
  if (fVar6 - *param_1 < fVar7 * fVar5 + fVar8 * fVar4 + fVar1 * fVar3) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_001638e0(param_4 + 0x140,param_2 + 4);
    fVar3 = (float)FUN_00120a68(uVar2);
    uVar2 = FUN_001638e0(param_4 + 0x120,param_2 + 4);
    fVar4 = (float)FUN_00120a68(uVar2);
    uVar2 = FUN_001638e0(param_4 + 0x160,param_2 + 4);
    fVar5 = (float)FUN_00120a68(uVar2);
    fVar1 = *(float *)(param_4 + 100);
    fVar8 = *(float *)(param_4 + 0x60);
    fVar7 = *(float *)(param_4 + 0x68);
    fVar6 = (float)FUN_001638e0(param_4 + 0x20,param_2 + 4);
    uVar2 = 1;
    if (fVar6 - *param_2 <= fVar7 * fVar5 + fVar8 * fVar4 + fVar1 * fVar3) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

// 0x0015a580  size 0xd4
void FUN_0015a580(int param_1,int param_2,int param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_001638e0(param_3 + 0x20,param_1 + 0x120);
  *(float *)(param_2 + 0x30) =
       *(float *)(param_1 + 0x70) * (fVar1 - *(float *)(param_1 + 0x110)) + 1.0;
  fVar1 = (float)FUN_001638e0(param_3 + 0x20,param_1 + 0x140);
  *(float *)(param_2 + 0x34) =
       *(float *)(param_1 + 0x74) * (fVar1 - *(float *)(param_1 + 0x130)) + 1.0;
  fVar1 = (float)FUN_001638e0(param_3 + 0x20,param_1 + 0x160);
  *(float *)(param_2 + 0x38) =
       *(float *)(param_1 + 0x78) * (fVar1 - *(float *)(param_1 + 0x150)) + 1.0;
  return;
}

// 0x0015a660  size 0x1f4
void FUN_0015a660(int param_1,float *param_2,int param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_001638e0(param_3 + 0x20,param_1 + 0x120);
  param_2[0xc] = *(float *)(param_1 + 0x70) * (fVar1 - *(float *)(param_1 + 0x110)) + 1.0;
  fVar1 = (float)FUN_001638e0(param_3 + 0x20,param_1 + 0x140);
  param_2[0xd] = *(float *)(param_1 + 0x74) * (fVar1 - *(float *)(param_1 + 0x130)) + 1.0;
  fVar1 = (float)FUN_001638e0(param_3 + 0x20,param_1 + 0x160);
  param_2[0xe] = *(float *)(param_1 + 0x78) * (fVar1 - *(float *)(param_1 + 0x150)) + 1.0;
  fVar1 = (float)FUN_001638e0(param_3 + 0x120,param_1 + 0x120);
  *param_2 = *(float *)(param_1 + 0x70) * *(float *)(param_3 + 0x60) * fVar1;
  fVar1 = (float)FUN_001638e0(param_3 + 0x120,param_1 + 0x140);
  param_2[1] = *(float *)(param_1 + 0x74) * *(float *)(param_3 + 0x60) * fVar1;
  fVar1 = (float)FUN_001638e0(param_3 + 0x120,param_1 + 0x160);
  param_2[2] = *(float *)(param_1 + 0x78) * *(float *)(param_3 + 0x60) * fVar1;
  fVar1 = (float)FUN_001638e0(param_3 + 0x140,param_1 + 0x120);
  param_2[4] = *(float *)(param_1 + 0x70) * *(float *)(param_3 + 100) * fVar1;
  fVar1 = (float)FUN_001638e0(param_3 + 0x140,param_1 + 0x140);
  param_2[5] = *(float *)(param_1 + 0x74) * *(float *)(param_3 + 100) * fVar1;
  fVar1 = (float)FUN_001638e0(param_3 + 0x140,param_1 + 0x160);
  param_2[6] = *(float *)(param_1 + 0x78) * *(float *)(param_3 + 100) * fVar1;
  fVar1 = (float)FUN_001638e0(param_3 + 0x160,param_1 + 0x120);
  param_2[8] = *(float *)(param_1 + 0x70) * *(float *)(param_3 + 0x68) * fVar1;
  fVar1 = (float)FUN_001638e0(param_3 + 0x160,param_1 + 0x140);
  param_2[9] = *(float *)(param_1 + 0x74) * *(float *)(param_3 + 0x68) * fVar1;
  fVar1 = (float)FUN_001638e0(param_3 + 0x160,param_1 + 0x160);
  param_2[10] = *(float *)(param_1 + 0x78) * *(float *)(param_3 + 0x68) * fVar1;
  return;
}

// 0x0015a860  size 0x48
float FUN_0015a860(int param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_001638e0(param_1 + param_2 * 0x20 + 0x120,param_3);
  return fVar1 - *(float *)(param_2 * 0x20 + param_1 + 0x110);
}

// 0x0015a8b0  size 0x48
int FUN_0015a8b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(uint *)(&DAT_00362430 + param_2 * 4) * 0x10 + param_1;
  param_1 = (*(uint *)(&DAT_00362430 + param_2 * 4) ^ 2) * 0x10 + param_1;
  if (*(float *)(param_1 + 0x94) <= *(float *)(iVar1 + 0x94)) {
    iVar1 = param_1;
  }
  return iVar1 + 0x90;
}

// 0x0015a900  size 0x9c
void FUN_0015a900(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_00163b00(iVar1 + 0x90,param_2);
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x10;
  } while (uVar2 < 8);
  uVar2 = 0;
  iVar1 = param_1;
  do {
    fVar3 = (float)FUN_001638e0(iVar1 + 0x120,param_2);
    uVar2 = uVar2 + 1;
    *(float *)(iVar1 + 0x110) = *(float *)(iVar1 + 0x110) + fVar3;
    iVar1 = iVar1 + 0x20;
  } while (uVar2 < 6);
  FUN_00163b00(param_1 + 0x20,param_2);
  return;
}

// 0x0015a9a0  size 0x114
void FUN_0015a9a0(undefined4 param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3f800000;
  uStack_14 = 0x3f800000;
  FUN_00163880(*(undefined4 *)(param_3 + 0x110),&uStack_50,param_3 + 0x120);
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  uStack_18 = uStack_48;
  uStack_14 = uStack_44;
  FUN_00163880(*(undefined4 *)(param_3 + 0x130),auStack_60,param_3 + 0x140);
  FUN_00163b00(&uStack_20,auStack_60);
  FUN_00163880(*(undefined4 *)(param_3 + 0x150),auStack_70,param_3 + 0x160);
  FUN_00163b00(&uStack_20,auStack_70);
  FUN_00163880(*(undefined4 *)(param_3 + 0x170),&uStack_80,param_3 + 0x180);
  uStack_10 = uStack_80;
  uStack_c = uStack_7c;
  uStack_8 = uStack_78;
  uStack_4 = uStack_74;
  FUN_00163880(*(undefined4 *)(param_3 + 400),auStack_90,param_3 + 0x1a0);
  FUN_00163b00(&uStack_10,auStack_90);
  FUN_00163880(*(undefined4 *)(param_3 + 0x1b0),auStack_a0,param_3 + 0x1c0);
  FUN_00163b00(&uStack_10,auStack_a0);
  FUN_001638b0(param_1,auStack_30,&uStack_10);
  FUN_001638b0(param_1,auStack_40,&uStack_20);
  FUN_0015b7c0(param_2,auStack_30,auStack_40);
  return;
}

// 0x0015aac0  size 0x57c
long FUN_0015aac0(int param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  if (param_2 == 0) {
    lVar5 = FUN_00100280(0x1d0);
    if (lVar5 != 0) {
      FUN_0015c200(lVar5);
      puVar10 = (undefined4 *)lVar5;
      *puVar10 = &DAT_0036e190;
      puVar10[0x1b] = 0x3f800000;
      puVar4 = puVar10 + 0x28;
      puVar10[0x1f] = 0x3f800000;
      puVar10[0x27] = 0x3f800000;
      if (puVar4 < puVar10 + 0x44) {
        uVar9 = (int)(puVar10 + 0x44) - (int)(puVar10 + 0x28);
        uVar8 = uVar9 + 0xf;
        uVar6 = uVar8;
        if ((int)uVar8 < 0) {
          uVar6 = uVar9 + 0x1e;
        }
        uVar7 = ((int)uVar6 >> 4) + 1;
        if (8 < (int)uVar7) {
          bVar3 = false;
          bVar2 = false;
          if (puVar10 + 0x28 <= puVar10 + 0x44) {
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
            if ((((int)uVar6 >> 4 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
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
            } while (puVar4 < puVar10 + 0x24);
          }
        }
        for (; puVar4 < puVar10 + 0x44; puVar4 = puVar4 + 4) {
          puVar4[3] = 0x3f800000;
        }
      }
      puVar10[0x4b] = 0x3f800000;
      puVar4 = puVar10 + 0x4c;
      if (puVar4 < puVar10 + 0x74) {
        uVar9 = (int)(puVar10 + 0x74) - (int)(puVar10 + 0x4c);
        uVar8 = uVar9 + 0x1f;
        uVar6 = uVar8;
        if ((int)uVar8 < 0) {
          uVar6 = uVar9 + 0x3e;
        }
        uVar7 = ((int)uVar6 >> 5) + 1;
        if (8 < (int)uVar7) {
          bVar3 = false;
          bVar2 = false;
          if (puVar10 + 0x4c <= puVar10 + 0x74) {
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
            if ((((int)uVar6 >> 5 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
              bVar2 = false;
            }
            if (bVar2) {
              bVar3 = true;
            }
          }
          if (bVar3) {
            do {
              puVar4[7] = 0x3f800000;
              puVar4[0xf] = 0x3f800000;
              puVar4[0x17] = 0x3f800000;
              puVar4[0x1f] = 0x3f800000;
              puVar4[0x27] = 0x3f800000;
              puVar4[0x2f] = 0x3f800000;
              puVar4[0x37] = 0x3f800000;
              puVar4[0x3f] = 0x3f800000;
              puVar4 = puVar4 + 0x40;
            } while (puVar4 < puVar10 + 0x34);
          }
        }
        for (; puVar4 < puVar10 + 0x74; puVar4 = puVar4 + 8) {
          puVar4[7] = 0x3f800000;
        }
      }
      FUN_0015b7c0(lVar5,param_1 + 0x100,param_1 + 0x90);
    }
  }
  else {
    lVar5 = FUN_00100240(0x1d0);
    if (lVar5 != 0) {
      FUN_0015c200(lVar5);
      puVar10 = (undefined4 *)lVar5;
      *puVar10 = &DAT_0036e190;
      puVar10[0x1b] = 0x3f800000;
      puVar4 = puVar10 + 0x28;
      puVar10[0x1f] = 0x3f800000;
      puVar10[0x27] = 0x3f800000;
      if (puVar4 < puVar10 + 0x44) {
        uVar9 = (int)(puVar10 + 0x44) - (int)(puVar10 + 0x28);
        uVar8 = uVar9 + 0xf;
        uVar6 = uVar8;
        if ((int)uVar8 < 0) {
          uVar6 = uVar9 + 0x1e;
        }
        uVar7 = ((int)uVar6 >> 4) + 1;
        if (8 < (int)uVar7) {
          bVar3 = false;
          bVar2 = false;
          if (puVar10 + 0x28 <= puVar10 + 0x44) {
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
            if ((((int)uVar6 >> 4 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
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
            } while (puVar4 < puVar10 + 0x24);
          }
        }
        for (; puVar4 < puVar10 + 0x44; puVar4 = puVar4 + 4) {
          puVar4[3] = 0x3f800000;
        }
      }
      puVar10[0x4b] = 0x3f800000;
      puVar4 = puVar10 + 0x4c;
      if (puVar4 < puVar10 + 0x74) {
        uVar9 = (int)(puVar10 + 0x74) - (int)(puVar10 + 0x4c);
        uVar8 = uVar9 + 0x1f;
        uVar6 = uVar8;
        if ((int)uVar8 < 0) {
          uVar6 = uVar9 + 0x3e;
        }
        uVar7 = ((int)uVar6 >> 5) + 1;
        if (8 < (int)uVar7) {
          bVar3 = false;
          bVar2 = false;
          if (puVar10 + 0x4c <= puVar10 + 0x74) {
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
            if ((((int)uVar6 >> 5 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
              bVar2 = false;
            }
            if (bVar2) {
              bVar3 = true;
            }
          }
          if (bVar3) {
            do {
              puVar4[7] = 0x3f800000;
              puVar4[0xf] = 0x3f800000;
              puVar4[0x17] = 0x3f800000;
              puVar4[0x1f] = 0x3f800000;
              puVar4[0x27] = 0x3f800000;
              puVar4[0x2f] = 0x3f800000;
              puVar4[0x37] = 0x3f800000;
              puVar4[0x3f] = 0x3f800000;
              puVar4 = puVar4 + 0x40;
            } while (puVar4 < puVar10 + 0x34);
          }
        }
        for (; puVar4 < puVar10 + 0x74; puVar4 = puVar4 + 8) {
          puVar4[7] = 0x3f800000;
        }
      }
      FUN_0015b7c0(lVar5,param_1 + 0x100,param_1 + 0x90);
    }
  }
  return lVar5;
}

// 0x0015b050  size 0x8c
undefined4 FUN_0015b050(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = 0;
  iVar1 = param_1;
  do {
    fVar3 = (float)FUN_001638e0(param_2,param_1 + 0x120);
    if (*(float *)(iVar1 + 0x110) < fVar3) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x20;
    iVar1 = iVar1 + 0x20;
  } while (uVar2 < 6);
  return 1;
}

// 0x0015b0e0  size 0x2c4
undefined4 FUN_0015b0e0(int param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iStack_50;
  uint uStack_3c;
  uint uStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar6 = 0;
  iVar4 = param_1;
  iVar3 = param_1;
  do {
    fVar9 = (float)FUN_001638e0(param_3,iVar4 + 0x120);
    if ((*(float *)(iVar3 + 0x110) <= fVar9) &&
       (fVar9 = (float)FUN_001638e0(param_4,iVar4 + 0x120), *(float *)(iVar3 + 0x110) < fVar9)) {
      return 0;
    }
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 0x20;
    iVar3 = iVar3 + 0x20;
  } while (uVar6 < 6);
  FUN_00163b40(auStack_10,param_4,param_3);
  fVar12 = 0.0;
  iVar3 = 0;
  uStack_38 = 0;
  uVar6 = 0;
  uStack_3c = 0;
  fVar9 = 0.0;
  iVar4 = param_1;
  iStack_50 = param_1;
  do {
    fVar10 = (float)FUN_001638e0(auStack_10,iVar4 + 0x120);
    if (fVar10 != 0.0) {
      fVar11 = (float)FUN_001638e0(param_3,iVar4 + 0x120);
      fVar10 = (*(float *)(iStack_50 + 0x110) - fVar11) / fVar10;
      FUN_001638b0(fVar10,auStack_30,auStack_10);
      FUN_00163b80(auStack_20,param_3,auStack_30);
      bVar1 = true;
      uVar8 = 0;
      iVar5 = param_1;
      iVar7 = param_1;
      do {
        if ((uVar6 != uVar8) &&
           (fVar11 = (float)FUN_001638e0(auStack_20,iVar7 + 0x120),
           *(float *)(iVar5 + 0x110) < fVar11)) {
          bVar1 = false;
          break;
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 0x20;
        iVar5 = iVar5 + 0x20;
      } while (uVar8 < 6);
      if (bVar1) {
        if (iVar3 == 0) {
          fVar12 = fVar10;
          uStack_38 = uVar6;
        }
        else {
          fVar9 = fVar10;
          uStack_3c = uVar6;
        }
        iVar3 = iVar3 + 1;
      }
    }
    uVar6 = uVar6 + 1;
    iStack_50 = iStack_50 + 0x20;
    iVar4 = iVar4 + 0x20;
    if (5 < uVar6) {
      if (iVar3 == 2) {
        if (((1.0 < fVar12) && (1.0 < fVar9)) || ((fVar12 < 0.0 && (fVar9 < 0.0)))) {
          uVar2 = 0;
        }
        else {
          if (fVar12 < fVar9) {
            param_2[2] = (uint)fVar12;
            param_2[3] = (uint)fVar9;
            *param_2 = uStack_38;
            param_2[1] = uStack_3c;
          }
          else {
            param_2[2] = (uint)fVar9;
            param_2[3] = (uint)fVar12;
            *param_2 = uStack_3c;
            param_2[1] = uStack_38;
          }
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  } while( true );
}

// 0x0015b3b0  size 0x18
undefined4 FUN_0015b3b0(int param_1)

{
  return *(undefined4 *)(&DAT_0030acb0 + param_1 * 4);
}

// 0x0015b3d0  size 0x18
undefined4 FUN_0015b3d0(int param_1)

{
  return *(undefined4 *)(&DAT_0030ac80 + param_1 * 4);
}

// 0x0015b430  size 0x9c
undefined4 FUN_0015b430(int param_1,int param_2)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  param_2 = param_2 * 0x10;
  FUN_001638b0(*(undefined4 *)(param_2 + 0x42f480),auStack_30,param_1 + 0x120);
  FUN_001638b0(*(undefined4 *)(param_2 + 0x42f484),auStack_40,param_1 + 0x140);
  FUN_00163b80(auStack_20,auStack_30,auStack_40);
  FUN_001638b0(*(undefined4 *)(param_2 + 0x42f488),auStack_50,param_1 + 0x160);
  FUN_00163b80(&uStack_10,auStack_20,auStack_50);
  uRam0042f540 = uStack_10;
  uRam0042f544 = uStack_c;
  uRam0042f548 = uStack_8;
  uRam0042f54c = uStack_4;
  return 0x42f540;
}

// 0x0015b4e0  size 0x10
int FUN_0015b4e0(int param_1,int param_2)

{
  return param_1 + param_2 * 0x20 + 0x110;
}

// 0x0015b520  size 0x240
void FUN_0015b520(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_94;
  undefined4 uStack_84;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
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
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = *(undefined4 *)(param_3 + 100);
  uVar2 = *(undefined4 *)(param_3 + 0x68);
  uVar3 = *(undefined4 *)(param_3 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar1 = *(undefined4 *)(param_3 + 0x74);
  uVar2 = *(undefined4 *)(param_3 + 0x78);
  uVar3 = *(undefined4 *)(param_3 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_3 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  FUN_00162e70(&uStack_10,param_2,param_3 + 0x20);
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x20) = uStack_10;
  *(undefined4 *)(param_1 + 0x24) = uStack_c;
  *(undefined4 *)(param_1 + 0x28) = uStack_8;
  *(undefined4 *)(param_1 + 0x2c) = uStack_4;
  puVar6 = (undefined4 *)(param_1 + 0x90);
  iVar5 = param_3 + 0x90;
  do {
    FUN_00162e70(&uStack_b0,param_2,iVar5);
    uVar4 = uVar4 + 1;
    *puVar6 = uStack_b0;
    puVar6[1] = uStack_ac;
    puVar6[2] = uStack_a8;
    puVar6[3] = uStack_a4;
    puVar6 = puVar6 + 4;
    iVar5 = iVar5 + 0x10;
  } while (uVar4 < 8);
  puVar6 = (undefined4 *)param_2;
  uStack_20 = *puVar6;
  uStack_1c = puVar6[1];
  uStack_18 = puVar6[2];
  *(undefined4 *)(param_1 + 0x120) = uStack_20;
  *(undefined4 *)(param_1 + 0x124) = uStack_1c;
  *(undefined4 *)(param_1 + 0x128) = uStack_18;
  *(undefined4 *)(param_1 + 300) = uStack_14;
  uVar1 = FUN_001638e0(param_1 + 0x120,param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  uStack_30 = puVar6[4];
  uStack_2c = puVar6[5];
  uStack_28 = puVar6[6];
  *(undefined4 *)(param_1 + 0x140) = uStack_30;
  *(undefined4 *)(param_1 + 0x144) = uStack_2c;
  *(undefined4 *)(param_1 + 0x148) = uStack_28;
  *(undefined4 *)(param_1 + 0x14c) = uStack_24;
  uVar1 = FUN_001638e0(param_1 + 0x140,param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  uStack_40 = puVar6[8];
  uStack_3c = puVar6[9];
  uStack_38 = puVar6[10];
  *(undefined4 *)(param_1 + 0x160) = uStack_40;
  *(undefined4 *)(param_1 + 0x164) = uStack_3c;
  *(undefined4 *)(param_1 + 0x168) = uStack_38;
  *(undefined4 *)(param_1 + 0x16c) = uStack_34;
  uVar1 = FUN_001638e0(param_1 + 0x160,param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  FUN_001638b0(0xbf800000,&uStack_50,param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x180) = uStack_50;
  *(undefined4 *)(param_1 + 0x184) = uStack_4c;
  *(undefined4 *)(param_1 + 0x188) = uStack_48;
  *(undefined4 *)(param_1 + 0x18c) = uStack_44;
  *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x60) * 2.0 - *(float *)(param_1 + 0x110);
  FUN_001638b0(0xbf800000,&uStack_60,param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x1a0) = uStack_60;
  *(undefined4 *)(param_1 + 0x1a4) = uStack_5c;
  *(undefined4 *)(param_1 + 0x1a8) = uStack_58;
  *(undefined4 *)(param_1 + 0x1ac) = uStack_54;
  *(float *)(param_1 + 400) = *(float *)(param_1 + 100) * 2.0 - *(float *)(param_1 + 0x130);
  FUN_001638b0(0xbf800000,&uStack_70,param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x1c0) = uStack_70;
  *(undefined4 *)(param_1 + 0x1c4) = uStack_6c;
  *(undefined4 *)(param_1 + 0x1c8) = uStack_68;
  *(undefined4 *)(param_1 + 0x1cc) = uStack_64;
  *(float *)(param_1 + 0x1b0) = *(float *)(param_1 + 0x68) * 2.0 - *(float *)(param_1 + 0x150);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  *(undefined4 *)(param_1 + 0x30) = *puVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uStack_74;
  uVar1 = puVar6[5];
  uVar2 = puVar6[6];
  *(undefined4 *)(param_1 + 0x40) = puVar6[4];
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uStack_84;
  uVar1 = puVar6[9];
  uVar2 = puVar6[10];
  *(undefined4 *)(param_1 + 0x50) = puVar6[8];
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uStack_94;
  return;
}

// 0x0015b760  size 0x60
long FUN_0015b760(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e190;
    if (param_1 != 0) {
      *(undefined4 *)param_1 = &DAT_0036e200;
    }
    if (0 < param_2) {
      thunk_FUN_00100290(param_1);
    }
  }
  return param_1;
}

// 0x0015b7c0  size 0x248
void FUN_0015b7c0(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uStack_74;
  undefined4 uStack_64;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00163b80(auStack_20);
  FUN_001638b0(0x3f000000,&uStack_10,auStack_20);
  *(undefined4 *)(param_1 + 0x20) = uStack_10;
  *(undefined4 *)(param_1 + 0x24) = uStack_c;
  *(undefined4 *)(param_1 + 0x28) = uStack_8;
  *(undefined4 *)(param_1 + 0x2c) = uStack_4;
  FUN_00163b40(auStack_30,param_3,param_2);
  fVar5 = (float)FUN_00163c10(auStack_30);
  *(float *)(param_1 + 0x14) = fVar5 * 0.5;
  FUN_00163b40(auStack_50,param_3,param_2);
  FUN_001638b0(0x3f000000,&uStack_40,auStack_50);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x60) = uStack_40;
  *(undefined4 *)(param_1 + 100) = uStack_3c;
  *(undefined4 *)(param_1 + 0x68) = uStack_38;
  *(undefined4 *)(param_1 + 0x6c) = uStack_34;
  *(float *)(param_1 + 0x70) = 1.0 / *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x74) = 1.0 / *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x78) = 1.0 / *(float *)(param_1 + 0x68);
  iVar1 = param_1;
  do {
    puVar3 = (undefined4 *)param_3;
    puVar4 = (undefined4 *)param_2;
    if ((uVar2 & 1) == 0) {
      uVar6 = *puVar3;
    }
    else {
      uVar6 = *puVar4;
    }
    *(undefined4 *)(iVar1 + 0x90) = uVar6;
    if ((uVar2 & 2) == 0) {
      uVar6 = puVar3[1];
    }
    else {
      uVar6 = puVar4[1];
    }
    *(undefined4 *)(iVar1 + 0x94) = uVar6;
    if ((uVar2 & 4) == 0) {
      uVar6 = puVar3[2];
    }
    else {
      uVar6 = puVar4[2];
    }
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar1 + 0x98) = uVar6;
    iVar1 = iVar1 + 0x10;
  } while (uVar2 < 8);
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  uVar6 = FUN_001638e0(param_1 + 0x120,param_3);
  *(undefined4 *)(param_1 + 0x110) = uVar6;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x148) = 0;
  uVar6 = FUN_001638e0(param_1 + 0x140,param_3);
  *(undefined4 *)(param_1 + 0x130) = uVar6;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0x3f800000;
  uVar6 = FUN_001638e0(param_1 + 0x160,param_3);
  *(undefined4 *)(param_1 + 0x150) = uVar6;
  *(undefined4 *)(param_1 + 0x180) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  uVar6 = FUN_001638e0(param_1 + 0x180,param_2);
  *(undefined4 *)(param_1 + 0x170) = uVar6;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  uVar6 = FUN_001638e0(param_1 + 0x1a0,param_2);
  *(undefined4 *)(param_1 + 400) = uVar6;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0xbf800000;
  uVar6 = FUN_001638e0(param_1 + 0x1c0,param_2);
  *(undefined4 *)(param_1 + 0x1b0) = uVar6;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = uStack_54;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = uStack_64;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = uStack_74;
  return;
}

// 0x0015ba10  size 0x2bc
undefined8 FUN_0015ba10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  FUN_0015c200();
  puVar9 = (undefined4 *)param_1;
  *puVar9 = &DAT_0036e190;
  puVar9[0x1b] = 0x3f800000;
  puVar4 = puVar9 + 0x28;
  puVar9[0x1f] = 0x3f800000;
  puVar9[0x27] = 0x3f800000;
  if (puVar4 < puVar9 + 0x44) {
    uVar8 = (int)(puVar9 + 0x44) - (int)(puVar9 + 0x28);
    uVar7 = uVar8 + 0xf;
    uVar5 = uVar7;
    if ((int)uVar7 < 0) {
      uVar5 = uVar8 + 0x1e;
    }
    uVar6 = ((int)uVar5 >> 4) + 1;
    if (8 < (int)uVar6) {
      bVar3 = false;
      bVar2 = false;
      if (puVar9 + 0x28 <= puVar9 + 0x44) {
        bVar1 = true;
        if (((uVar8 & 0x80000000) == 0) && ((uVar7 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if ((((int)uVar5 >> 4 & 0x80000000U) == 0) && ((uVar6 & 0x80000000) != 0)) {
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
        } while (puVar4 < puVar9 + 0x24);
      }
    }
    for (; puVar4 < puVar9 + 0x44; puVar4 = puVar4 + 4) {
      puVar4[3] = 0x3f800000;
    }
  }
  puVar9[0x4b] = 0x3f800000;
  puVar4 = puVar9 + 0x4c;
  if (puVar4 < puVar9 + 0x74) {
    uVar8 = (int)(puVar9 + 0x74) - (int)(puVar9 + 0x4c);
    uVar7 = uVar8 + 0x1f;
    uVar5 = uVar7;
    if ((int)uVar7 < 0) {
      uVar5 = uVar8 + 0x3e;
    }
    uVar6 = ((int)uVar5 >> 5) + 1;
    if (8 < (int)uVar6) {
      bVar3 = false;
      bVar2 = false;
      if (puVar9 + 0x4c <= puVar9 + 0x74) {
        bVar1 = true;
        if (((uVar8 & 0x80000000) == 0) && ((uVar7 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if ((((int)uVar5 >> 5 & 0x80000000U) == 0) && ((uVar6 & 0x80000000) != 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        do {
          puVar4[7] = 0x3f800000;
          puVar4[0xf] = 0x3f800000;
          puVar4[0x17] = 0x3f800000;
          puVar4[0x1f] = 0x3f800000;
          puVar4[0x27] = 0x3f800000;
          puVar4[0x2f] = 0x3f800000;
          puVar4[0x37] = 0x3f800000;
          puVar4[0x3f] = 0x3f800000;
          puVar4 = puVar4 + 0x40;
        } while (puVar4 < puVar9 + 0x34);
      }
    }
    for (; puVar4 < puVar9 + 0x74; puVar4 = puVar4 + 8) {
      puVar4[7] = 0x3f800000;
    }
  }
  FUN_0015b7c0(param_1,param_2,param_3);
  return param_1;
}

// 0x0015bcd0  size 0x34
void FUN_0015bcd0(int param_1,undefined8 param_2)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_001636f0(&uStack_10,param_2,param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = uStack_10;
  *(undefined4 *)(param_1 + 0x24) = uStack_c;
  *(undefined4 *)(param_1 + 0x28) = uStack_8;
  *(undefined4 *)(param_1 + 0x2c) = uStack_4;
  return;
}

// 0x0015bdc0  size 0xa0
void FUN_0015bdc0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = (**(code **)(*(int *)param_1 + 0x54))();
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = (**(code **)(*(int *)param_2 + 0x5c))(param_2,uVar3);
      (**(code **)(*(int *)param_1 + 0x58))(param_1,uVar3,uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}

// 0x0015be60  size 0xa0
void FUN_0015be60(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00162e70(&uStack_10,param_2,param_3 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = uStack_10;
  *(undefined4 *)(param_1 + 0x24) = uStack_c;
  *(undefined4 *)(param_1 + 0x28) = uStack_8;
  *(undefined4 *)(param_1 + 0x2c) = uStack_4;
  puVar1 = (undefined4 *)param_2;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *(undefined4 *)(param_1 + 0x30) = *puVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uStack_14;
  uVar2 = puVar1[5];
  uVar3 = puVar1[6];
  *(undefined4 *)(param_1 + 0x40) = puVar1[4];
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uStack_24;
  uVar2 = puVar1[9];
  uVar3 = puVar1[10];
  *(undefined4 *)(param_1 + 0x50) = puVar1[8];
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uStack_34;
  return;
}

// 0x0015bf20  size 0x8
int FUN_0015bf20(int param_1)

{
  return param_1 + 0x20;
}

// 0x0015bf30  size 0x1a4
undefined4 FUN_0015bf30(int param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  FUN_00163b40(auStack_10,param_3,param_1 + 0x20);
  FUN_00163b40(auStack_20,param_4,param_3);
  fVar2 = (float)FUN_001638e0(auStack_20,auStack_20);
  fVar3 = (float)FUN_001638e0(auStack_20,auStack_10);
  fVar5 = *(float *)(param_1 + 0x14);
  fVar3 = fVar3 * 2.0;
  fVar4 = (float)FUN_001638e0(auStack_10,auStack_10);
  fVar4 = fVar3 * fVar3 - fVar2 * 4.0 * ((fVar4 + 0.0) - fVar5 * fVar5);
  if (fVar4 < 0.0) {
    uVar1 = 0;
  }
  else {
    fVar4 = SQRT(fVar4);
    if (fVar2 < 1e-06) {
      fVar2 = 1e-06;
    }
    fVar5 = (0.5 / fVar2) * (-fVar3 - fVar4);
    fVar2 = (0.5 / fVar2) * (-fVar3 + fVar4);
    if ((0.0 <= fVar5) || (0.0 <= fVar2)) {
      if ((fVar5 <= 1.0) || (fVar2 <= 1.0)) {
        uVar1 = 1;
        *param_2 = 0xffffffff;
        param_2[1] = 0xffffffff;
        param_2[2] = fVar5;
        param_2[3] = fVar2;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

