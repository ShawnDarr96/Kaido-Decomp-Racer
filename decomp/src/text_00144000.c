// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00144000 - 0x00148000
#include "ghidra_types.h"

// 0x00144350  size 0x48
void FUN_00144350(int param_1,undefined8 param_2)

{
  undefined1 auStack_40 [64];
  
  FUN_00132ba0(auStack_40,param_1 + 0x380);
  FUN_00133680(param_2,auStack_40,0x361610,1);
  return;
}

// 0x001443a0  size 0x1b4
void FUN_001443a0(float param_1,float param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [4];
  float fStack_8c;
  undefined4 uStack_84;
  undefined1 auStack_80 [64];
  float afStack_40 [5];
  undefined4 uStack_2c;
  float fStack_18;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_98 = 0x3f800000;
  uStack_94 = 0x3f800000;
  uStack_a0 = 0;
  uStack_9c = 0;
  FUN_001328b0(param_5,param_5);
  FUN_00132b10(0,auStack_b0,param_5);
  FUN_00132b70(auStack_90,param_4,auStack_b0);
  uStack_84 = 0x3f800000;
  fStack_8c = fStack_8c + 0.2;
  *(undefined4 *)((int)param_5 + 0xc) = 0x3f800000;
  FUN_001336d0(auStack_80,auStack_90,param_5,param_6);
  FUN_00133090(afStack_40);
  if (param_1 == 0.0) {
    param_1 = 1.0;
  }
  if (param_2 == 0.0) {
    param_2 = 1.0;
  }
  afStack_40[0] = 1.0 / param_1;
  fStack_18 = 1.0 / param_2;
  FUN_00132ba0(param_3 + 0x3e0,afStack_40,auStack_80);
  FUN_00133090(afStack_40);
  uStack_2c = 0x3e088889;
  afStack_40[0] = 0.13333334 / param_1;
  uStack_8 = 0xbf800000;
  uStack_4 = 0x3f800000;
  fStack_18 = 0.05 / param_2;
  FUN_00132ba0(param_3 + 0x420,afStack_40,auStack_80);
  return;
}

// 0x00144560  size 0x64
void FUN_00144560(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  *param_2 = (0x800 - (iVar1 >> 1)) * 0x10;
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  param_2[1] = (0x800 - (iVar1 >> 1)) * 0x10;
  param_2[2] = *(int *)(param_1 + 0x80) << 4;
  param_2[3] = *(int *)(param_1 + 0x84) << 4;
  return;
}

// 0x001445d0  size 0x2d8
void FUN_001445d0(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  undefined4 auStack_d0 [5];
  undefined4 uStack_bc;
  undefined4 uStack_a8;
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [12];
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x3c0) = 0x44fa0000;
  *(undefined4 *)(iVar1 + 0x3c4) = 0x44fa0000;
  *(undefined4 *)(iVar1 + 0x3c8) = *(undefined4 *)(iVar1 + 0xa0);
  *(undefined4 *)(iVar1 + 0x3cc) = *(undefined4 *)(iVar1 + 0xa4);
  FUN_00143890(*(undefined4 *)(iVar1 + 0x8c),*(undefined4 *)(iVar1 + 0x90),
               *(undefined4 *)(iVar1 + 0x94),0x45000000,0x45000000,*(undefined4 *)(iVar1 + 0x98),
               *(undefined4 *)(iVar1 + 0x9c),*(undefined4 *)(iVar1 + 0xa0),iVar1 + 0x1c0,
               iVar1 + 0x3c0,iVar1 + 0x200,iVar1 + 0x240,iVar1 + 0x300);
  FUN_00133090(auStack_40);
  FUN_001430f0(iVar1 + 0x300,iVar1 + 0x340,auStack_40);
  FUN_00132b50(iVar1 + 0x40,iVar1 + 0x10,param_1);
  FUN_001328b0(iVar1 + 0x40,iVar1 + 0x40);
  *(undefined4 *)(iVar1 + 0x3d0) = 0xbf800000;
  if (*(int *)(iVar1 + 0xb4) == 0) {
    *(undefined4 *)(iVar1 + 0x3d4) = 0x3f800000;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3d4) = 0xbf800000;
  }
  fVar2 = *(float *)(iVar1 + 0xac);
  if (0.0 < fVar2 - *(float *)(iVar1 + 0xa8)) {
    if (*(float *)(iVar1 + 0xa4) <= fVar2) {
      *(float *)(iVar1 + 0x3d8) = fVar2;
      *(float *)(iVar1 + 0x3dc) = 255.0 / (*(float *)(iVar1 + 0xac) - *(float *)(iVar1 + 0xa8));
    }
    else {
      *(float *)(iVar1 + 0x3d8) = *(float *)(iVar1 + 0xa4);
      *(float *)(iVar1 + 0x3dc) = 255.0 / (*(float *)(iVar1 + 0xa4) - *(float *)(iVar1 + 0xa8));
    }
  }
  else {
    *(float *)(iVar1 + 0x3d8) = fVar2;
    *(float *)(iVar1 + 0x3dc) = 255.0 / (*(float *)(iVar1 + 0xac) - 1.0);
  }
  FUN_00132b10(0xbf800000,auStack_50,iVar1 + 0x40);
  uStack_44 = 0x3f800000;
  FUN_001336d0(iVar1 + 0x180,param_1,auStack_50,iVar1 + 0x20);
  FUN_00133090(auStack_90);
  FUN_00132d80(*(undefined4 *)(iVar1 + 0x30),auStack_90,auStack_90);
  FUN_00132ba0(iVar1 + 0x180,auStack_90,iVar1 + 0x180);
  FUN_00132a90(iVar1 + 0x50,iVar1 + 0x20,iVar1 + 0x40);
  FUN_001328b0(iVar1 + 0x50,iVar1 + 0x50);
  FUN_00133090(auStack_d0);
  if (*(int *)(iVar1 + 0xb0) == 0) {
    auStack_d0[0] = 0x3f800000;
  }
  else {
    auStack_d0[0] = 0xbf800000;
  }
  uStack_bc = 0xbf800000;
  uStack_a8 = 0xbf800000;
  FUN_00132ba0(iVar1 + 0x180,auStack_d0,iVar1 + 0x180);
  FUN_00133260(iVar1 + 0x180);
  FUN_001331f0(iVar1 + 0x280,iVar1 + 0x200);
  FUN_001331f0(iVar1 + 0x2c0,iVar1 + 0x240);
  FUN_001331f0(iVar1 + 0x380,iVar1 + 0x1c0);
  fVar2 = (float)FUN_00120df0(*(undefined4 *)(iVar1 + 0x8c));
  *(int *)(iVar1 + 0xb8) = (int)((5.0 - fVar2 / 0.6931472) * 16.0);
  return;
}

// 0x001448b0  size 0x90
void FUN_001448b0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00140070(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x70));
  FUN_00149a80(param_1 + 0x480,*(undefined4 *)(param_1 + 0x60),uVar1,*(undefined4 *)(param_1 + 100),
               0,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),0);
  return;
}

// 0x00144940  size 0xc
void FUN_00144940(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x84) = param_3;
  return;
}

// 0x00144950  size 0xc
void FUN_00144950(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  return;
}

// 0x00144960  size 0x134
void FUN_00144960(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  param_1[0x18] = *param_2;
  param_1[0x19] = param_2[1];
  param_1[0x1a] = param_2[2];
  param_1[0x1b] = param_2[3];
  param_1[0x1c] = param_2[4];
  param_1[0x1d] = param_2[5];
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = param_2[4];
  param_1[0x21] = param_2[5];
  param_1[0x22] = param_2[6];
  param_1[0x23] = param_2[7];
  param_1[0x24] = param_2[8];
  param_1[0x25] = param_2[9];
  param_1[0x26] = param_2[10];
  param_1[0x27] = param_2[0xb];
  param_1[0x28] = 0x3f000000;
  param_1[0x29] = 0x459c4000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x459c4000;
  param_1[0x2c] = param_2[0xc];
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = param_2[0xd];
  param_1[0x30] = param_2[0xe];
  param_1[0x31] = param_2[0xf];
  param_1[0x32] = param_2[0x10];
  param_1[0x33] = param_2[0x11];
  param_1[0x34] = param_2[0x12];
  param_1[0x35] = param_2[0x13];
  param_1[0x36] = param_2[0x14];
  param_1[0x37] = param_2[0x15];
  param_1[0x38] = param_2[0x16];
  uVar1 = param_2[7];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0x3f800000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}

// 0x00144aa0  size 0x5c
void FUN_00144aa0(uint *param_1)

{
  if (*param_1 != 0) {
    *param_1 = *param_1 & 0xfffffff;
  }
  if (*param_1 != 0) {
    FUN_00100290();
    *param_1 = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 0x00144b00  size 0x80
undefined4 FUN_00144b00(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00100480(param_3 << 4,0x40,param_2);
  *param_1 = uVar1;
  FlushCache(0);
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 0xfffffff | 0x20000000;
    }
    *param_1 = uVar2;
    param_1[1] = param_3;
    uVar3 = 1;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return uVar3;
}

// 0x00144b80  size 0x2c
void FUN_00144b80(uint *param_1,long param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (uint)param_2 & 0xfffffff | 0x20000000;
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 0x00144bb0  size 0x11c
undefined4 FUN_00144bb0(char *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) == 0)) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    uVar2 = 0;
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
  }
  else {
    if (*param_1 == '\0') {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
      *param_2 = *(uint *)(param_1 + 0x14);
      *param_3 = *(uint *)(param_1 + 0x18);
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = *(undefined4 *)(param_1 + 0x14);
      while( true ) {
        puVar3 = *(uint **)(param_1 + 0xc);
        for (puVar1 = (uint *)puVar3[3]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[3]) {
          if (*puVar1 < *puVar3) {
            puVar3 = puVar1;
          }
        }
        if (*puVar3 == 0xffffff) {
          puVar3 = (uint *)0x0;
        }
        if (puVar3 == (uint *)0x0) break;
        *puVar3 = 0xffffff;
        if (*param_2 == 0) {
          *param_2 = puVar3[1];
          *param_3 = puVar3[2];
        }
        else {
          *(uint *)(*param_3 + 4) = puVar3[1] & 0xfffffff;
          *param_3 = puVar3[2];
        }
      }
    }
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    uVar2 = 1;
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
  }
  return uVar2;
}

// 0x00144cd0  size 0xb4
bool FUN_00144cd0(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  
  *param_1 = param_2;
  uVar2 = FUN_00100680(*param_1 * 0x1c,uGpffff8990);
  param_1[1] = uVar2;
  if (param_1[1] == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = 0;
    if (*param_1 != 0) {
      iVar5 = 0;
      do {
        uVar2 = uVar2 + 1;
        puVar3 = (undefined1 *)(param_1[1] + iVar5);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        *(undefined4 *)(puVar3 + 0xc) = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0;
        *(undefined4 *)(puVar3 + 0x14) = 0;
        *(undefined4 *)(puVar3 + 0x18) = 0;
        iVar5 = iVar5 + 0x1c;
      } while (uVar2 < *param_1);
    }
    lVar4 = FUN_00144b00(param_1 + 2,uGpffff8990,param_2 + 1);
    bVar1 = lVar4 != 0;
  }
  return bVar1;
}

// 0x00144d90  size 0xb4
void FUN_00144d90(uint param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  uint uStack_4;
  
  iVar2 = (param_1 & 0xff) * 0x10;
  if (*(int *)(iVar2 + 0x387f54) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x387f50) % *(int *)(iVar2 + 0x387f54);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x387f5c) + iVar3 * 0x28 + 4);
  iVar3 = iVar2 + param_2 * 0x1c;
  lVar1 = FUN_00144bb0(iVar2 + param_3 * 0x1c,&uStack_4,&uStack_8);
  if (lVar1 != 0) {
    *(uint *)(*(int *)(iVar3 + 0x18) + 4) = uStack_4 & 0xfffffff;
    *(undefined4 *)(iVar3 + 0x18) = uStack_8;
  }
  return;
}

// 0x00144e50  size 0x178
uint FUN_00144e50(uint param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iStack_8;
  uint uStack_4;
  
  iVar2 = (param_1 & 0xff) * 0x10;
  iVar4 = *(int *)(iVar2 + 0x387f54);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x387f50) % iVar4;
    }
    puVar6 = (uint *)(*(int *)(iVar2 + 0x387f5c) + iVar4 * 0x28);
    puVar6[4] = 0;
    uVar5 = 0;
    if (*puVar6 == 0) {
      uVar5 = puVar6[4];
    }
    else {
      iVar4 = 0;
      do {
        lVar1 = FUN_00144bb0(puVar6[1] + iVar4,&uStack_4,&iStack_8);
        if (lVar1 != 0) {
          puVar3 = (undefined4 *)(puVar6[2] + puVar6[4] * 0x10);
          *puVar3 = 0x20000000;
          puVar3[1] = uStack_4 & 0xfffffff;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar6[4] = puVar6[4] + 1;
          *(uint *)(iStack_8 + 4) = puVar6[2] + puVar6[4] * 0x10 & 0xfffffff;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (uVar5 < *puVar6);
      uVar5 = puVar6[4];
    }
    if (uVar5 != 0) {
      puVar3 = (undefined4 *)(puVar6[2] + uVar5 * 0x10);
      *puVar3 = 0x70000000;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *param_2 = puVar3;
    }
    *(undefined4 *)(iVar2 + 0x387f58) = 0;
    uVar5 = puVar6[2];
  }
  return uVar5;
}

// 0x00144fd0  size 0x128
void FUN_00144fd0(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  
  iVar2 = (param_1 & 0xff) * 0x10;
  iVar6 = *(int *)(iVar2 + 0x387f54);
  if (iVar6 != 0) {
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar2 + 0x387f50) % iVar6;
    }
    puVar3 = (uint *)(*(int *)(iVar2 + 0x387f5c) + iVar6 * 0x28);
    *(undefined4 *)(iVar2 + 0x387f58) = 1;
    puVar3[8] = 0;
    uVar1 = 0;
    if (*puVar3 != 0) {
      iVar6 = 0;
      do {
        pcVar5 = (char *)(puVar3[1] + iVar6);
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        pcVar5[6] = '\0';
        pcVar5[7] = '\0';
        pcVar5[8] = '\x01';
        pcVar5[9] = '\0';
        pcVar5[10] = '\0';
        pcVar5[0xb] = '\0';
        if (*pcVar5 == '\x01') {
          puVar4 = (undefined4 *)(puVar3[6] + puVar3[8] * 0x10);
          puVar3[8] = puVar3[8] + 1;
          *puVar4 = 0xffffff;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          *(undefined4 **)(pcVar5 + 0xc) = puVar4;
          *(undefined4 **)(pcVar5 + 0x10) = puVar4;
        }
        else {
          pcVar5[0xc] = '\0';
          pcVar5[0xd] = '\0';
          pcVar5[0xe] = '\0';
          pcVar5[0xf] = '\0';
          pcVar5[0x10] = '\0';
          pcVar5[0x11] = '\0';
          pcVar5[0x12] = '\0';
          pcVar5[0x13] = '\0';
        }
        uVar1 = uVar1 + 1;
        puVar4 = (undefined4 *)(puVar3[6] + puVar3[8] * 0x10);
        puVar3[8] = puVar3[8] + 1;
        *puVar4 = 0x20000000;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined4 **)(pcVar5 + 0x14) = puVar4;
        *(undefined4 **)(pcVar5 + 0x18) = puVar4;
        iVar6 = iVar6 + 0x1c;
      } while (uVar1 < *puVar3);
    }
  }
  return;
}

// 0x00145100  size 0x68
void FUN_00145100(uint param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (param_1 & 0xff) * 0x10;
  uVar3 = 0;
  if (*(int *)(iVar1 + 0x387f54) != 0) {
    iVar2 = 0;
    do {
      uVar3 = uVar3 + 1;
      *(undefined1 *)(param_2 * 0x1c + *(int *)(*(int *)(iVar1 + 0x387f5c) + iVar2 + 4)) = param_3;
      iVar2 = iVar2 + 0x28;
    } while (uVar3 < *(uint *)(iVar1 + 0x387f54));
  }
  return;
}

// 0x00145170  size 0xd8
void FUN_00145170(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (param_1 & 0xff) * 0x10;
  uVar3 = 0;
  if (*(int *)(iVar1 + 0x387f54) == 0) {
    *(undefined4 *)(iVar1 + 0x387f50) = 0;
  }
  else {
    iVar2 = 0;
    do {
      puVar4 = (undefined4 *)(*(int *)(iVar1 + 0x387f5c) + iVar2);
      FUN_00144aa0(puVar4 + 6);
      FUN_00144aa0(puVar4 + 2);
      *puVar4 = 0;
      if (puVar4[1] != 0) {
        FUN_00100290();
        puVar4[1] = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x28;
    } while (uVar3 < *(uint *)(iVar1 + 0x387f54));
    *(undefined4 *)(iVar1 + 0x387f50) = 0;
  }
  *(undefined4 *)(iVar1 + 0x387f54) = 0;
  *(undefined4 *)(iVar1 + 0x387f58) = 0;
  if (*(int *)(iVar1 + 0x387f5c) != 0) {
    FUN_00100290();
    *(undefined4 *)(iVar1 + 0x387f5c) = 0;
  }
  return;
}

// 0x00145250  size 0x120
undefined4 FUN_00145250(uint param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = (param_1 & 0xff) * 0x10;
  *(undefined4 *)(iVar4 + 0x387f50) = 0;
  *(undefined4 *)(iVar4 + 0x387f54) = param_2;
  *(undefined4 *)(iVar4 + 0x387f58) = 0;
  uVar2 = FUN_00100680(*(int *)(iVar4 + 0x387f54) * 0x28,uGpffff8990);
  *(undefined4 *)(iVar4 + 0x387f5c) = uVar2;
  if (*(int *)(iVar4 + 0x387f5c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar7 = 0;
    if (*(int *)(iVar4 + 0x387f54) != 0) {
      iVar6 = 0;
      do {
        iVar5 = *(int *)(iVar4 + 0x387f5c) + iVar6;
        lVar3 = FUN_00144cd0(iVar5,param_4);
        if (lVar3 == 0) {
          bVar1 = false;
        }
        else {
          lVar3 = FUN_00144b00(iVar5 + 0x18,uGpffff8990,param_3);
          if (lVar3 == 0) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        if (!bVar1) {
          return 0;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x28;
      } while (uVar7 < *(uint *)(iVar4 + 0x387f54));
    }
    uVar2 = 1;
  }
  return uVar2;
}

// 0x00145370  size 0x184
void FUN_00145370(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  do {
    iVar1 = (uVar4 & 0xff) * 0x10;
    uVar3 = 0;
    if (*(int *)(iVar1 + 0x387f54) != 0) {
      iVar2 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(iVar1 + 0x387f5c) + iVar2);
        FUN_00144aa0(puVar5 + 6);
        FUN_00144aa0(puVar5 + 2);
        *puVar5 = 0;
        if (puVar5[1] != 0) {
          FUN_00100290();
          puVar5[1] = 0;
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x28;
      } while (uVar3 < *(uint *)(iVar1 + 0x387f54));
    }
    *(undefined4 *)(iVar1 + 0x387f50) = 0;
    *(undefined4 *)(iVar1 + 0x387f54) = 0;
    *(undefined4 *)(iVar1 + 0x387f58) = 0;
    if (*(int *)(iVar1 + 0x387f5c) != 0) {
      FUN_00100290();
      *(undefined4 *)(iVar1 + 0x387f5c) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  uRam00387f50 = 0;
  uRam00387f54 = 0;
  uRam00387f58 = 0;
  uGpffff8990 = 0;
  uRam00387f5c = 0;
  uRam00387f60 = 0;
  uRam00387f64 = 0;
  uRam00387f68 = 0;
  uRam00387f6c = 0;
  uRam00387f70 = 0;
  uRam00387f74 = 0;
  uRam00387f78 = 0;
  uRam00387f7c = 0;
  uRam00387f80 = 0;
  uRam00387f84 = 0;
  uRam00387f88 = 0;
  uRam00387f8c = 0;
  uRam00387f90 = 0;
  uRam00387f94 = 0;
  uRam00387f98 = 0;
  uRam00387f9c = 0;
  return;
}

// 0x00145500  size 0x88
void FUN_00145500(undefined4 param_1)

{
  uGpffff8990 = param_1;
  uRam00387f54 = 0;
  uRam00387f50 = 0;
  uRam00387f5c = 0;
  uRam00387f58 = 0;
  uRam00387f60 = 0;
  uRam00387f64 = 0;
  uRam00387f68 = 0;
  uRam00387f6c = 0;
  uRam00387f70 = 0;
  uRam00387f74 = 0;
  uRam00387f78 = 0;
  uRam00387f7c = 0;
  uRam00387f80 = 0;
  uRam00387f84 = 0;
  uRam00387f88 = 0;
  uRam00387f8c = 0;
  uRam00387f90 = 0;
  uRam00387f94 = 0;
  uRam00387f98 = 0;
  uRam00387f9c = 0;
  return;
}

// 0x00145590  size 0xac
void FUN_00145590(char *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    if (*param_1 == '\x05') {
      cVar1 = param_1[2];
    }
    else {
      cVar1 = *param_1;
    }
    FUN_00152b20(cVar1,param_1 + 0x1c);
    iVar2 = *(int *)(param_1 + 0x14);
  }
  else {
    FUN_00144560(*(int *)(param_1 + 0x14),param_1 + 0x1c);
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (iVar2 == 0) {
    if (*param_1 == '\x05') {
      cVar1 = param_1[2];
    }
    else {
      cVar1 = *param_1;
    }
    FUN_00152ac0(cVar1,param_1 + 0x2c);
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar2 + 0xd4);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0xd8);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 0xdc);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar2 + 0xe0);
  }
  return;
}

// 0x00145640  size 0x3c
void FUN_00145640(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00146370(param_1,0x36,0x10000000);
  FUN_00132560(uVar1,param_2,0x36);
  return;
}

// 0x00145680  size 0x3c
void FUN_00145680(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00146370(param_1,0xf,0x10000000);
  FUN_00132560(uVar1,param_2,0xf);
  return;
}

// 0x001456c0  size 0xb8
undefined4 FUN_001456c0(char *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *(int *)(param_1 + 0x10) = **(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2] * 0x10;
  piVar1 = *(int **)(param_1 + 4);
  piVar1[2] = piVar1[2] + param_2;
  *(int *)(param_1 + 0xc) = *piVar1 + piVar1[2] * 0x10;
  if (*param_1 != '\x05') {
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + 1;
    puVar2 = *(undefined4 **)(param_1 + 0xc);
    *puVar2 = 0x20000000;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 4) = *(uint *)(param_1 + 0x10) & 0xfffffff;
    *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(*(int *)(param_1 + 8) + 4) + param_2;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = *(undefined4 *)(param_1 + 0xc);
  }
  return *(undefined4 *)(param_1 + 0x10);
}

// 0x00145780  size 0x80
void FUN_00145780(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *(undefined4 *)(param_2 + 6);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar1 = *param_2;
  uVar4 = FUN_001456c0(param_1,1);
  *(undefined4 *)((int)param_1 + 0xc) = uVar4;
  FUN_00145800(*(undefined4 *)((int)param_1 + 0xc),(ulong)uVar1 | 0x30000000,
               (uint)(param_2 + 8) & 0xfffffff,uVar3,uVar2);
  return;
}

// 0x00145800  size 0x14
void FUN_00145800(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

// 0x00145820  size 0x40
void FUN_00145820(undefined8 param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00146370(param_1,1,0x13000000);
  *plVar1 = (long)param_2;
  plVar1[1] = 0x22;
  return;
}

// 0x00145860  size 0x21c
void FUN_00145860(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,long param_6)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  ushort *puVar4;
  byte *pbVar5;
  
  puVar3 = (ulong *)FUN_00146370(param_1,1,0x13000000);
  pbVar5 = (byte *)param_1;
  iVar2 = *(int *)(pbVar5 + 0x14);
  if (iVar2 == 0) {
    if (param_6 == 0) {
      if (*pbVar5 == 5) {
        bVar1 = pbVar5[2];
      }
      else {
        bVar1 = *pbVar5;
      }
      puVar4 = (ushort *)
               (((uint)bVar1 * 0x104 + (uint)bVar1) * 0x80 +
                iGpffff88a0 * 0x28c80 + (uGpffff88a4 & 1) * 0x51900 + 0x38fcf0);
    }
    else {
      if (*pbVar5 == 5) {
        bVar1 = pbVar5[2];
      }
      else {
        bVar1 = *pbVar5;
      }
      puVar4 = (ushort *)
               (((uint)bVar1 * 0x104 + (uint)bVar1) * 0x80 +
                iGpffff88a0 * 0x28c80 + (uGpffff88a4 & 1) * 0x51900 + 0x38fd30);
    }
  }
  else if (param_6 == 0) {
    puVar4 = (ushort *)(iVar2 + 0x4d0);
  }
  else {
    puVar4 = (ushort *)(iVar2 + 0x510);
  }
  *puVar3 = (long)(int)((puVar4[3] & 0x7ff) + param_5) << 0x30 |
            (long)(int)((puVar4[2] & 0x7ff) + param_4) << 0x20 |
            (long)(int)((*puVar4 & 0x7ff) + param_2) |
            (long)(int)((puVar4[1] & 0x7ff) + param_3) << 0x10;
  puVar3[1] = (ulong)((int)param_6 + 0x40);
  return;
}

// 0x00145a80  size 0x1c4
void FUN_00145a80(undefined8 param_1,int param_2,int param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  ushort *puVar4;
  byte *pbVar5;
  
  puVar3 = (ulong *)FUN_00146370(param_1,1,0x13000000);
  pbVar5 = (byte *)param_1;
  iVar2 = *(int *)(pbVar5 + 0x14);
  if (iVar2 == 0) {
    if (param_4 == 0) {
      if (*pbVar5 == 5) {
        bVar1 = pbVar5[2];
      }
      else {
        bVar1 = *pbVar5;
      }
      puVar4 = (ushort *)
               (((uint)bVar1 * 0x104 + (uint)bVar1) * 0x80 +
                iGpffff88a0 * 0x28c80 + (uGpffff88a4 & 1) * 0x51900 + 0x38fce0);
    }
    else {
      if (*pbVar5 == 5) {
        bVar1 = pbVar5[2];
      }
      else {
        bVar1 = *pbVar5;
      }
      puVar4 = (ushort *)
               (((uint)bVar1 * 0x104 + (uint)bVar1) * 0x80 +
                iGpffff88a0 * 0x28c80 + (uGpffff88a4 & 1) * 0x51900 + 0x38fd20);
    }
  }
  else if (param_4 == 0) {
    puVar4 = (ushort *)(iVar2 + 0x4c0);
  }
  else {
    puVar4 = (ushort *)(iVar2 + 0x500);
  }
  *puVar3 = (long)(int)((uint)*puVar4 + param_2) | (long)(int)((uint)puVar4[2] + param_3) << 0x20;
  puVar3[1] = (ulong)((int)param_4 + 0x18);
  return;
}

// 0x00145c50  size 0x118
void FUN_00145c50(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 auStack_360 [864];
  
  pbVar3 = (byte *)param_1;
  iVar2 = *(int *)(pbVar3 + 0x14);
  if (iVar2 == 0) {
    if (*pbVar3 == 5) {
      bVar1 = pbVar3[2];
    }
    else {
      bVar1 = *pbVar3;
    }
    FUN_00145640(param_1,(uint)bVar1 * 0x8280 + iGpffff88a0 * 0x28c80 + (uGpffff88a4 & 1) * 0x51900
                         + 0x388660);
  }
  else {
    FUN_00148bb0(auStack_360,*(undefined4 *)(iVar2 + 0xc4),*(undefined4 *)(iVar2 + 0xbc),
                 *(undefined4 *)(iVar2 + 200),2,*(undefined4 *)(iVar2 + 0xc0),
                 *(undefined4 *)(iVar2 + 0x70),*(undefined4 *)(iVar2 + 0x74));
    FUN_00145640(param_1,auStack_360);
  }
  return;
}

// 0x00145d70  size 0xbc
void FUN_00145d70(byte *param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    if (*param_1 == 5) {
      bVar1 = param_1[2];
    }
    else {
      bVar1 = *param_1;
    }
    FUN_00145680(param_1,(uint)bVar1 * 0x8280 + iGpffff88a0 * 0x28c80 + (uGpffff88a4 & 1) * 0x51900
                         + 0x38fca0);
  }
  else {
    FUN_00145680(param_1,*(int *)(param_1 + 0x14) + 0x480);
  }
  return;
}

// 0x00145e30  size 0xd4
void FUN_00145e30(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = param_2[2];
  if (iVar1 != 0) {
    uVar2 = *param_2;
    *(int *)(param_1 + 0x10) = **(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2] * 0x10;
    piVar3 = *(int **)(param_1 + 4);
    piVar3[2] = piVar3[2] + iVar1;
    *(int *)(param_1 + 0xc) = *piVar3 + piVar3[2] * 0x10;
    if (*param_1 != '\x05') {
      *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + 1;
      puVar4 = *(undefined4 **)(param_1 + 0xc);
      *puVar4 = 0x20000000;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 4) = *(uint *)(param_1 + 0x10) & 0xfffffff;
      *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(*(int *)(param_1 + 8) + 4) + iVar1;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = *(undefined4 *)(param_1 + 0xc);
    }
    FUN_00132560(*(undefined4 *)(param_1 + 0x10),uVar2);
  }
  return;
}

// 0x00145f10  size 0x34
void FUN_00145f10(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    FUN_00146230();
  }
  return;
}

// 0x00145f50  size 0xf8
void FUN_00145f50(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_0013f340(param_4,0x12,**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2] * 0x10,
                       param_2,param_3);
  *(int *)(param_1 + 0x10) = **(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2] * 0x10;
  piVar1 = *(int **)(param_1 + 4);
  piVar1[2] = piVar1[2] + iVar3;
  *(int *)(param_1 + 0xc) = *piVar1 + piVar1[2] * 0x10;
  if (*param_1 != '\x05') {
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + 1;
    puVar2 = *(undefined4 **)(param_1 + 0xc);
    *puVar2 = 0x20000000;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 4) = *(uint *)(param_1 + 0x10) & 0xfffffff;
    *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(*(int *)(param_1 + 8) + 4) + iVar3;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

// 0x00146050  size 0xe4
void FUN_00146050(char *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_001580f0(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2] * 0x10);
  *(int *)(param_1 + 0x10) = **(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2] * 0x10;
  piVar1 = *(int **)(param_1 + 4);
  piVar1[2] = piVar1[2] + iVar3;
  *(int *)(param_1 + 0xc) = *piVar1 + piVar1[2] * 0x10;
  if (*param_1 != '\x05') {
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + 1;
    puVar2 = *(undefined4 **)(param_1 + 0xc);
    *puVar2 = 0x20000000;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 4) = *(uint *)(param_1 + 0x10) & 0xfffffff;
    *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(*(int *)(param_1 + 8) + 4) + iVar3;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

// 0x00146140  size 0xf0
void FUN_00146140(char *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_0013f950(param_2,param_3,0x12,
                       **(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2] * 0x10);
  *(int *)(param_1 + 0x10) = **(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2] * 0x10;
  piVar1 = *(int **)(param_1 + 4);
  piVar1[2] = piVar1[2] + iVar3;
  *(int *)(param_1 + 0xc) = *piVar1 + piVar1[2] * 0x10;
  if (*param_1 != '\x05') {
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + 1;
    puVar2 = *(undefined4 **)(param_1 + 0xc);
    *puVar2 = 0x20000000;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 4) = *(uint *)(param_1 + 0x10) & 0xfffffff;
    *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(*(int *)(param_1 + 8) + 4) + iVar3;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

// 0x00146230  size 0x74
void FUN_00146230(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_2;
  puVar3 = (undefined4 *)(uVar1 + param_2[2] * 0x10);
  *puVar3 = 0x60000000;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  uVar2 = FUN_001456c0(param_1,1);
  *(undefined4 *)((int)param_1 + 0xc) = uVar2;
  FUN_00145800(*(undefined4 *)((int)param_1 + 0xc),0x50000000,uVar1 & 0xfffffff,0,0);
  return;
}

// 0x001462b0  size 0xbc
void FUN_001462b0(char *param_1,uint param_2,undefined4 param_3)

{
  ulong *puVar1;
  uint uVar2;
  
  puVar1 = *(ulong **)(param_1 + 0x10);
  uVar2 = param_2 + 1;
  *puVar1 = (ulong)param_2 | 0x1000000000008000;
  puVar1[1] = 0xe;
  **(uint **)(param_1 + 0xc) = **(uint **)(param_1 + 0xc) | uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = param_3;
  *(uint *)(*(int *)(param_1 + 0xc) + 0xc) = uVar2 | 0x50000000;
  *(uint *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + uVar2;
  if (*param_1 != '\x05') {
    *(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 4) = *(uint *)(param_1 + 0xc) & 0xfffffff;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(*(int *)(param_1 + 8) + 4) = *(int *)(*(int *)(param_1 + 8) + 4) + uVar2;
  }
  return;
}

// 0x00146370  size 0x78
ulong * FUN_00146370(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (ulong *)FUN_00146480(param_1,0,0,0);
  }
  else {
    puVar1 = (ulong *)FUN_00146480();
  }
  *puVar1 = param_2 & 0xffffffff | 0x1000000000008000;
  puVar1[1] = 0xe;
  return puVar1 + 2;
}

// 0x001463f0  size 0x84
void FUN_001463f0(char *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  **(uint **)(param_1 + 0xc) = **(uint **)(param_1 + 0xc) | param_2;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = param_4;
  *(uint *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + param_2;
  if (*param_1 != '\x05') {
    *(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 4) = *(uint *)(param_1 + 0xc) & 0xfffffff;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(*(int *)(param_1 + 8) + 4) = *(int *)(*(int *)(param_1 + 8) + 4) + param_2;
  }
  return;
}

// 0x00146480  size 0xe8
undefined4 FUN_00146480(char *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = (uint)param_2;
  if (*param_1 == '\x05') {
    uVar3 = 0x10000000;
  }
  else {
    uVar3 = 0x20000000;
  }
  *(int *)(param_1 + 0xc) = **(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2] * 0x10;
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  *puVar1 = uVar3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + 1;
  *(int *)(param_1 + 0x10) = **(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2] * 0x10;
  if (param_2 != 0) {
    **(uint **)(param_1 + 0xc) = **(uint **)(param_1 + 0xc) | uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = param_4;
    *(uint *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + uVar2;
    if (*param_1 != '\x05') {
      *(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 4) = *(uint *)(param_1 + 0xc) & 0xfffffff;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(*(int *)(param_1 + 8) + 4) = *(int *)(*(int *)(param_1 + 8) + 4) + uVar2;
    }
  }
  return *(undefined4 *)(param_1 + 0x10);
}

// 0x00146570  size 0x4c
void FUN_00146570(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if ((*(char *)(param_1 + 1) == '\x01') &&
     (puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 0x10),
     puVar1[2] != *(int *)(*(int *)(param_1 + 8) + 0x18))) {
    *puVar1 = param_2;
    puVar1[1] = *(undefined4 *)(puVar1[1] + 4);
    puVar1[2] = *(undefined4 *)(*(int *)(param_1 + 8) + 0x18);
  }
  return;
}

// 0x001465c0  size 0xe8
void FUN_001465c0(byte *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  if (*param_1 != 5) {
    iVar2 = (uint)*param_1 * 0x10;
    if (*(int *)(iVar2 + 0x387f54) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x387f50) % *(int *)(iVar2 + 0x387f54);
    }
    iVar2 = *(int *)(iVar2 + 0x387f5c) + iVar3 * 0x28;
    pbVar4 = (byte *)(*(int *)(iVar2 + 4) + param_2 * 0x1c);
    param_1[1] = *pbVar4;
    *(int *)(param_1 + 4) = iVar2 + 0x18;
    *(byte **)(param_1 + 8) = pbVar4;
  }
  if (param_1[1] == 1) {
    piVar1 = *(int **)(param_1 + 4);
    puVar5 = (undefined4 *)(*piVar1 + piVar1[2] * 0x10);
    piVar1[2] = piVar1[2] + 1;
    *(undefined4 **)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0xc) = puVar5;
    *puVar5 = 0xffffff;
    puVar5[1] = *(undefined4 *)(*(int *)(param_1 + 8) + 0x18);
    puVar5[2] = puVar5[1];
    puVar5[3] = 0;
    *(undefined4 **)(*(int *)(param_1 + 8) + 0x10) = puVar5;
  }
  return;
}

// 0x001466b0  size 0x28
void FUN_001466b0(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 0x001466e0  size 0xb4
void FUN_001466e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = param_1;
  do {
    thunk_FUN_001466b0(iVar1,1,2,0);
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    iVar1 = iVar1 + 0x44;
  } while (uVar2 < 2);
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x80) = param_5;
  *(undefined4 *)(param_1 + 0x84) = 0xfffff0;
  *(undefined4 *)(param_1 + 0x88) = param_2;
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  return;
}

// 0x001467a0  size 0x7c
void FUN_001467a0(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00146480(param_1,0xf,0x10000000,0x6c0e0035);
  *(undefined8 *)(iVar1 + 0xa0) = 0x1000000000008003;
  *(undefined8 *)(iVar1 + 0xa8) = 0xe;
  *(undefined4 *)(iVar1 + 0xe0) = 0x13000000;
  *(uint *)(iVar1 + 0xe4) = param_2 | 0x15000000;
  *(undefined4 *)(iVar1 + 0xe8) = 0x30000e6;
  *(undefined4 *)(iVar1 + 0xec) = 0x200018d;
  return;
}

// 0x00146820  size 0x7c
void FUN_00146820(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00146480(param_1,0x17,0x13000000,0x6c160035);
  *(undefined8 *)(iVar1 + 0xa0) = 0x100000000000800b;
  *(undefined8 *)(iVar1 + 0xa8) = 0xe;
  *(undefined4 *)(iVar1 + 0x160) = 0x13000000;
  *(uint *)(iVar1 + 0x164) = param_2 | 0x15000000;
  *(undefined4 *)(iVar1 + 0x168) = 0x30000e6;
  *(undefined4 *)(iVar1 + 0x16c) = 0x200018d;
  return;
}

// 0x001468a0  size 0x7c
void FUN_001468a0(undefined8 param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00146480(param_1,8,0x13000000,0x6c07003f);
  *puVar1 = 0x1000000000008006;
  puVar1[1] = 0xe;
  *(undefined4 *)(puVar1 + 0xe) = 0x13000000;
  *(uint *)((int)puVar1 + 0x74) = param_2 | 0x15000000;
  *(undefined4 *)(puVar1 + 0xf) = 0x30000e6;
  *(undefined4 *)((int)puVar1 + 0x7c) = 0x200018d;
  return;
}

// 0x00146920  size 0x170
undefined8 FUN_00146920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00146480(param_1,0x31,0x10000000,0x6c300005);
  iVar3 = (int)param_1;
  iVar2 = (int)uVar1;
  FUN_00132c20(uVar1,*(int *)(iVar3 + 0x18) + 0xb0);
  FUN_00132c20(iVar2 + 0x40,*(int *)(iVar3 + 0x18) + 0x130);
  FUN_00132c20(iVar2 + 0x80,*(int *)(iVar3 + 0x18) + 0xf0);
  FUN_00132c20(iVar2 + 0xc0,*(int *)(iVar3 + 0x14) + 0x180);
  FUN_00132c20(iVar2 + 0x100,*(int *)(iVar3 + 0x14) + 0x1c0);
  FUN_00132c20(iVar2 + 0x140,*(int *)(iVar3 + 0x14) + 0x280);
  FUN_00132ae0(iVar2 + 0x180,*(int *)(iVar3 + 0x14) + 0x40);
  FUN_00132ae0(iVar2 + 400,*(int *)(iVar3 + 0x14) + 0x20);
  FUN_00132ae0(iVar2 + 0x1a0,*(int *)(iVar3 + 0x14) + 0x50);
  FUN_00132ae0(iVar2 + 0x1b0,*(int *)(iVar3 + 0x14) + 0x3d0);
  FUN_00132c20(iVar2 + 0x240,param_2);
  FUN_00132c20(iVar2 + 0x280,param_4);
  FUN_00132c20(iVar2 + 0x2c0,param_3);
  FUN_00132c20(iVar2 + 0x1c0,*(int *)(iVar3 + 0x14) + 0x340);
  FUN_00132c20(iVar2 + 0x200,*(int *)(iVar3 + 0x14) + 0x3e0);
  *(undefined4 *)(iVar2 + 0x300) = 0x13000000;
  *(undefined4 *)(iVar2 + 0x304) = 0x15000000;
  *(undefined4 *)(iVar2 + 0x308) = 0;
  *(undefined4 *)(iVar2 + 0x30c) = 0;
  return uVar1;
}

// 0x00146a90  size 0xdc
undefined4 * FUN_00146a90(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  
  param_2 = param_2 * iGpffff88a0;
  puVar1 = (undefined4 *)FUN_00146480(param_1,6,0,0x10000000);
  *puVar1 = 0x30000e6;
  puVar1[1] = 0x200018d;
  puVar1[2] = 0x1000404;
  puVar1[3] = 0x6c050000;
  puVar1[4] = 0x3f800000;
  puVar1[5] = 0x3f800000;
  puVar1[6] = 0x3f800000;
  puVar1[7] = 0x3f800000;
  puVar1[8] = 0x437f0000;
  puVar1[9] = 0x437f0000;
  puVar1[10] = 0x437f0000;
  puVar1[0xb] = 0x42fe0000;
  puVar1[0xc] = param_2;
  puVar1[0xd] = param_2;
  puVar1[0xe] = param_2;
  puVar1[0xf] = param_2;
  *(undefined8 *)(puVar1 + 0x10) = 0x1000000000008001;
  *(undefined8 *)(puVar1 + 0x12) = 0xe;
  *(undefined8 *)(puVar1 + 0x16) = 0x3d;
  *(ulong *)(puVar1 + 0x14) = (ulong)*(uint *)(*(int *)((int)param_1 + 0x14) + 0xd0);
  return puVar1 + 4;
}

// 0x00146b80  size 0x49c
void FUN_00146b80(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5
                 )

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar7 = (int)param_2;
  iVar1 = *(int *)(iVar7 + 0x40);
  iVar3 = FUN_0014c370(param_2,param_5);
  uVar6 = FUN_001456c0(param_1,*(undefined4 *)(iVar3 + 8));
  FUN_00132560(uVar6,iVar3 + 0x10,*(undefined4 *)(iVar3 + 8));
  iVar3 = (int)param_1;
  if ((int)(param_3 << 4) < 0) {
    fVar14 = (float)((param_3 & 0xfffffff) << 3);
    fVar14 = fVar14 + fVar14;
  }
  else {
    fVar14 = (float)(int)(param_3 << 4);
  }
  fVar14 = *(float *)(iVar3 + 0x34) * 16.0 +
           *(float *)(iVar3 + 0x2c) * fVar14 + (float)*(uint *)(iVar3 + 0x1c) + 0.0;
  if (fVar14 < 2.1474836e+09) {
    uVar12 = (ulong)(int)fVar14;
    fVar14 = *(float *)(iVar3 + 0x30);
  }
  else {
    uVar12 = (long)(int)(fVar14 - 2.1474836e+09) | 0xffffffff80000000;
    fVar14 = *(float *)(iVar3 + 0x30);
  }
  if ((int)(param_4 << 4) < 0) {
    fVar15 = (float)((param_4 & 0xfffffff) << 3);
    fVar15 = fVar15 + fVar15;
  }
  else {
    fVar15 = (float)(int)(param_4 << 4);
  }
  fVar15 = *(float *)(iVar3 + 0x38) * 16.0 + fVar14 * fVar15 + (float)*(uint *)(iVar3 + 0x20) + 0.0;
  if (fVar15 < 2.1474836e+09) {
    uVar11 = (ulong)(int)fVar15;
    uVar4 = *(uint *)(iVar1 + 8);
  }
  else {
    uVar11 = (long)(int)(fVar15 - 2.1474836e+09) | 0xffffffff80000000;
    uVar4 = *(uint *)(iVar1 + 8);
  }
  if ((int)(uVar4 << 4) < 0) {
    fVar15 = (float)((uVar4 & 0xfffffff) << 3);
    fVar15 = fVar15 + fVar15;
  }
  else {
    fVar15 = (float)(int)(uVar4 << 4);
  }
  if ((long)uVar12 < 0) {
    fVar13 = (float)(uVar12 & 0xffffffff);
  }
  else {
    fVar13 = (float)(int)uVar12;
  }
  fVar15 = *(float *)(iVar3 + 0x2c) * fVar15 + fVar13 + 0.0;
  if (fVar15 < 2.1474836e+09) {
    uVar10 = (ulong)(int)fVar15;
    uVar4 = *(uint *)(iVar1 + 0xc);
  }
  else {
    uVar10 = (long)(int)(fVar15 - 2.1474836e+09) | 0xffffffff80000000;
    uVar4 = *(uint *)(iVar1 + 0xc);
  }
  if ((int)(uVar4 << 4) < 0) {
    fVar15 = (float)((uVar4 & 0xfffffff) << 3);
    fVar15 = fVar15 + fVar15;
  }
  else {
    fVar15 = (float)(int)(uVar4 << 4);
  }
  if ((long)uVar11 < 0) {
    fVar13 = (float)(uVar11 & 0xffffffff);
  }
  else {
    fVar13 = (float)(int)uVar11;
  }
  fVar14 = fVar14 * fVar15 + fVar13 + 0.0;
  if (fVar14 < 2.1474836e+09) {
    uVar9 = (ulong)(int)fVar14;
    uVar4 = *(uint *)(iVar7 + 4);
  }
  else {
    uVar9 = (long)(int)(fVar14 - 2.1474836e+09) | 0xffffffff80000000;
    uVar4 = *(uint *)(iVar7 + 4);
  }
  uVar5 = FUN_00146480(param_1,0,0,0);
  *(undefined4 *)(iVar3 + 0x40) = uVar5;
  *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x40) + 0x10;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  puVar2 = *(undefined8 **)(iVar3 + 0x44);
  *puVar2 = *(undefined8 *)(iVar7 + 200);
  puVar2[1] = 8;
  iVar1 = *(int *)(iVar3 + 0x44);
  *(undefined8 *)(iVar1 + 0x10) = *(undefined8 *)(iVar7 + 0xd0);
  *(undefined8 *)(iVar1 + 0x18) = 3;
  iVar1 = *(int *)(iVar3 + 0x44);
  *(ulong *)(iVar1 + 0x20) =
       (ulong)uVar4 << 0x20 | uVar12 & 0xffffffff | (uVar11 & 0xffffffff) << 0x10;
  *(undefined8 *)(iVar1 + 0x28) = 0xc;
  iVar1 = *(int *)(iVar3 + 0x44);
  *(undefined8 *)(iVar1 + 0x30) = *(undefined8 *)(iVar7 + 0xd8);
  *(undefined8 *)(iVar1 + 0x38) = 3;
  iVar1 = *(int *)(iVar3 + 0x44);
  *(ulong *)(iVar1 + 0x40) =
       (ulong)uVar4 << 0x20 | uVar10 & 0xffffffff | (uVar9 & 0xffffffff) << 0x10;
  *(undefined8 *)(iVar1 + 0x48) = 4;
  *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
  if (*(int *)(iVar3 + 0x48) != 0) {
    uVar4 = *(int *)(iVar3 + 0x48) * 5;
    uVar8 = uVar4 + 1;
    **(ulong **)(iVar3 + 0x40) =
         (ulong)uVar4 | 0x400000008000 | (ulong)*(uint *)(*(int *)(iVar3 + 0x3c) + 0x34) << 0x2f |
         0x1000000000000000;
    *(undefined8 *)(*(int *)(iVar3 + 0x40) + 8) = 0xe;
    FUN_001463f0(param_1,uVar8,0,uVar8 | 0x50000000);
  }
  return;
}

// 0x00147020  size 0x48
void FUN_00147020(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_0014c2f0(param_2);
  uVar1 = FUN_001456c0(param_1,*(undefined4 *)(iVar2 + 8));
  FUN_00132560(uVar1,iVar2 + 0x10,*(undefined4 *)(iVar2 + 8));
  return;
}

// 0x00147070  size 0x414
void FUN_00147070(int param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  iVar6 = (int)param_2;
  if (*(int *)(iVar6 + 0x48) == 0) {
    FUN_0014c870(param_2,param_5,&uStack_8,&uStack_10,&uStack_18);
  }
  else {
    iVar3 = (int)param_5 * 0x18;
    uStack_8 = *(undefined8 *)(*(int *)(iVar6 + 0x48) + iVar3);
    uStack_10 = *(undefined8 *)(iVar3 + *(int *)(iVar6 + 0x48) + 8);
    uStack_18 = *(undefined8 *)(iVar3 + *(int *)(iVar6 + 0x48) + 0x10);
  }
  if ((int)(param_3 << 4) < 0) {
    fVar11 = (float)((param_3 & 0xfffffff) << 3);
    fVar11 = fVar11 + fVar11;
  }
  else {
    fVar11 = (float)(int)(param_3 << 4);
  }
  fVar11 = *(float *)(param_1 + 0x34) * 16.0 +
           *(float *)(param_1 + 0x2c) * fVar11 + (float)*(uint *)(param_1 + 0x1c) + 0.0;
  if (fVar11 < 2.1474836e+09) {
    uVar4 = (ulong)(int)fVar11;
    fVar11 = *(float *)(param_1 + 0x30);
  }
  else {
    uVar4 = (long)(int)(fVar11 - 2.1474836e+09) | 0xffffffff80000000;
    fVar11 = *(float *)(param_1 + 0x30);
  }
  if ((int)(param_4 << 4) < 0) {
    fVar12 = (float)((param_4 & 0xfffffff) << 3);
    fVar12 = fVar12 + fVar12;
  }
  else {
    fVar12 = (float)(int)(param_4 << 4);
  }
  fVar12 = *(float *)(param_1 + 0x38) * 16.0 +
           fVar11 * fVar12 + (float)*(uint *)(param_1 + 0x20) + 0.0;
  if (fVar12 < 2.1474836e+09) {
    uVar2 = (ulong)(int)fVar12;
    uVar7 = *(uint *)(iVar6 + 0x40);
  }
  else {
    uVar2 = (long)(int)(fVar12 - 2.1474836e+09) | 0xffffffff80000000;
    uVar7 = *(uint *)(iVar6 + 0x40);
  }
  if ((int)(uVar7 << 4) < 0) {
    fVar12 = (float)((uVar7 & 0xfffffff) << 3);
    fVar12 = fVar12 + fVar12;
  }
  else {
    fVar12 = (float)(int)(uVar7 << 4);
  }
  if ((long)uVar4 < 0) {
    fVar10 = (float)(uVar4 & 0xffffffff);
  }
  else {
    fVar10 = (float)(int)uVar4;
  }
  fVar12 = *(float *)(param_1 + 0x2c) * fVar12 + fVar10 + 0.0;
  if (fVar12 < 2.1474836e+09) {
    uVar9 = (ulong)(int)fVar12;
    uVar7 = *(uint *)(iVar6 + 0x44);
  }
  else {
    uVar9 = (long)(int)(fVar12 - 2.1474836e+09) | 0xffffffff80000000;
    uVar7 = *(uint *)(iVar6 + 0x44);
  }
  if ((int)(uVar7 << 4) < 0) {
    fVar12 = (float)((uVar7 & 0xfffffff) << 3);
    fVar12 = fVar12 + fVar12;
  }
  else {
    fVar12 = (float)(int)(uVar7 << 4);
  }
  if ((long)uVar2 < 0) {
    fVar10 = (float)(uVar2 & 0xffffffff);
  }
  else {
    fVar10 = (float)(int)uVar2;
  }
  fVar11 = fVar11 * fVar12 + fVar10 + 0.0;
  if (fVar11 < 2.1474836e+09) {
    uVar8 = (ulong)(int)fVar11;
  }
  else {
    uVar8 = (long)(int)(fVar11 - 2.1474836e+09) | 0xffffffff80000000;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x44);
  uVar5 = (ulong)*(uint *)(iVar6 + 4) << 0x20;
  *puVar1 = uStack_8;
  puVar1[1] = 8;
  iVar6 = *(int *)(param_1 + 0x44);
  *(undefined8 *)(iVar6 + 0x10) = uStack_10;
  *(undefined8 *)(iVar6 + 0x18) = 3;
  iVar6 = *(int *)(param_1 + 0x44);
  *(ulong *)(iVar6 + 0x20) = uVar5 | uVar4 & 0xffffffff | (uVar2 & 0xffffffff) << 0x10;
  *(undefined8 *)(iVar6 + 0x28) = 0xc;
  iVar6 = *(int *)(param_1 + 0x44);
  *(undefined8 *)(iVar6 + 0x30) = uStack_18;
  *(undefined8 *)(iVar6 + 0x38) = 3;
  iVar6 = *(int *)(param_1 + 0x44);
  *(ulong *)(iVar6 + 0x40) = uVar5 | uVar9 & 0xffffffff | (uVar8 & 0xffffffff) << 0x10;
  *(undefined8 *)(iVar6 + 0x48) = 4;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 0x50;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}

// 0x00147490  size 0xe4
void FUN_00147490(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x48) != 0) {
    uVar1 = *(int *)(iVar3 + 0x48) * 5;
    uVar4 = uVar1 + 1;
    **(ulong **)(iVar3 + 0x40) =
         (ulong)uVar1 | 0x400000008000 | (ulong)*(uint *)(*(int *)(iVar3 + 0x3c) + 0x34) << 0x2f |
         0x1000000000000000;
    *(undefined8 *)(*(int *)(iVar3 + 0x40) + 8) = 0xe;
    FUN_001463f0(param_1,uVar4,0,uVar4 | 0x50000000);
  }
  FUN_00147660(param_1,param_2);
  FUN_00145590(param_1);
  uVar2 = FUN_00146480(param_1,0,0,0);
  *(undefined4 *)(iVar3 + 0x40) = uVar2;
  *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x40) + 0x10;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  return;
}

// 0x00147580  size 0x90
void FUN_00147580(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = *(int *)(param_1 + 0x48) * 5;
    uVar2 = uVar1 + 1;
    **(ulong **)(param_1 + 0x40) =
         (ulong)uVar1 | 0x400000008000 | (ulong)*(uint *)(*(int *)(param_1 + 0x3c) + 0x34) << 0x2f |
         0x1000000000000000;
    *(undefined8 *)(*(int *)(param_1 + 0x40) + 8) = 0xe;
    FUN_001463f0(param_1,uVar2,0,uVar2 | 0x50000000);
  }
  return;
}

// 0x00147610  size 0x44
void FUN_00147610(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00146480(param_1,0,0,0);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x40) = uVar1;
  *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x40) + 0x10;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  return;
}

// 0x00147660  size 0x124
void FUN_00147660(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puVar6 = (undefined8 *)FUN_00146370(param_1,9,0);
  iVar1 = *(int *)(param_2 + 8);
  *(int *)((int)param_1 + 0x3c) = param_2;
  FUN_0013ed10(iVar1,*(undefined4 *)(param_2 + 0xc),&uStack_8,&uStack_10);
  iVar2 = *(int *)(param_2 + 0x24);
  iVar3 = *(int *)(param_2 + 0x28);
  iVar4 = *(int *)(param_2 + 0x2c);
  iVar5 = *(int *)(param_2 + 0x20);
  *puVar6 = uStack_10;
  puVar6[1] = 6;
  puVar6[2] = *(undefined8 *)(param_2 + 0x10);
  puVar6[3] = 0x47;
  puVar6[4] = *(undefined8 *)(param_2 + 0x18);
  puVar6[5] = 0x42;
  puVar6[6] = uStack_8;
  puVar6[7] = 6;
  puVar6[8] = *(undefined8 *)(iVar1 + 0x20);
  puVar6[9] = 0x14;
  puVar6[10] = (long)iVar4 << 0x18 | (long)iVar3 << 0x10 | (long)iVar5 | (long)iVar2 << 8;
  puVar6[0xb] = 1;
  puVar6[0xc] = *(undefined8 *)(iVar1 + 0x28);
  puVar6[0xd] = 0x3b;
  puVar6[0xe] = *(undefined8 *)(iVar1 + 0x30);
  puVar6[0xf] = 0x4a;
  puVar6[0x10] = *(undefined8 *)(iVar1 + 0x38);
  puVar6[0x11] = 0x49;
  return;
}

// 0x001477a0  size 0x388
void FUN_001477a0(int param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined1 in_zero_qw [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  
  param_2[0xc] = *(undefined4 *)(param_1 + 0xb4);
  param_2[0xf] = *(undefined4 *)(param_3 + 0x68);
  uVar6 = *(undefined4 *)(param_3 + 0x24);
  uVar7 = *(undefined4 *)(param_3 + 0x28);
  uVar8 = *(undefined4 *)(param_3 + 0x2c);
  *param_2 = *(undefined4 *)(param_3 + 0x20);
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  param_2[6] = 0x3f800000;
  param_2[5] = 0x3f800000;
  param_2[4] = 0x3f800000;
  param_2[7] = 0x40;
  uVar6 = *(undefined4 *)(param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 0x18);
  uVar5 = *(undefined4 *)(param_3 + 0x1c);
  param_2[8] = *(undefined4 *)(param_3 + 0x10);
  param_2[9] = uVar6;
  param_2[10] = uVar4;
  param_2[0xb] = uVar5;
  if ((*(uint *)(param_1 + 0xb4) & 0x800) == 0) {
    if ((*(uint *)(param_1 + 0xb4) & 0x100) == 0) {
      *(ulong *)(param_2 + 0x18) = *(long *)(param_3 + 0x40) << 0x2f | 0x3000400000008000;
      *(undefined8 *)(param_2 + 0x1a) = 0x412;
      *(ulong *)(param_2 + 0x1c) = (*(ulong *)(param_3 + 0x40) | 1) << 0x2f | 0x3000400000008000;
      *(undefined8 *)(param_2 + 0x1e) = 0x412;
    }
    else {
      *(ulong *)(param_2 + 0x18) = *(long *)(param_3 + 0x40) << 0x2f | 0x3000400000008000;
      *(undefined8 *)(param_2 + 0x1a) = 0x412;
      *(ulong *)(param_2 + 0x1c) = (*(ulong *)(param_3 + 0x40) | 1) << 0x2f | 0x3000400000008000;
      *(undefined8 *)(param_2 + 0x1e) = 0x412;
      *(ulong *)(param_2 + 0x20) = (*(ulong *)(param_3 + 0x40) | 0x250) << 0x2f | 0x3000400000008000
      ;
      *(undefined8 *)(param_2 + 0x22) = 0x412;
      *(ulong *)(param_2 + 0x24) = (*(ulong *)(param_3 + 0x40) | 0x251) << 0x2f | 0x3000400000008000
      ;
      *(undefined8 *)(param_2 + 0x26) = 0x412;
    }
  }
  else {
    auVar10._8_4_ = uVar7;
    auVar10._0_8_ = 0xffffffffffffffdf;
    auVar10._12_4_ = uVar8;
    auVar10 = _pcpyld(in_zero_qw,auVar10);
    *(ulong *)(param_2 + 0x18) = (*(ulong *)(param_3 + 0x40) | 0x40) << 0x2f | 0x3000400000008000;
    *(undefined8 *)(param_2 + 0x1a) = 0x412;
    *(ulong *)(param_2 + 0x1c) = (*(ulong *)(param_3 + 0x40) | 0x41) << 0x2f | 0x3000400000008000;
    *(undefined8 *)(param_2 + 0x1e) = 0x412;
    *(ulong *)(param_2 + 0x20) = (*(ulong *)(param_3 + 0x40) | 0x250) << 0x2f | 0x3000400000008000;
    *(undefined8 *)(param_2 + 0x22) = 0x412;
    *(ulong *)(param_2 + 0x24) = (*(ulong *)(param_3 + 0x40) | 0x251) << 0x2f | 0x3000400000008000;
    *(undefined8 *)(param_2 + 0x26) = 0x412;
    *(ulong *)(param_2 + 0x20) =
         *(ulong *)(param_2 + 0x20) & 0xfc007fffffffffff |
         ((*(ulong *)(param_2 + 0x20) & 0x3ffffffffffffff) >> 0x2f & auVar10._0_8_) << 0x2f;
    *(ulong *)(param_2 + 0x24) =
         *(ulong *)(param_2 + 0x24) & 0xfc007fffffffffff |
         ((*(ulong *)(param_2 + 0x24) & 0x3ffffffffffffff) >> 0x2f & auVar10._0_8_) << 0x2f;
  }
  if (*(int *)(param_3 + 0x6c) != 0) {
    if (((((*(uint *)(param_1 + 0xb4) & 0x100) == 0) && ((*(uint *)(param_1 + 0xb4) & 0x20) != 0))
        && ((*(byte *)(param_3 + 0x50) & 3) == 2)) &&
       (((ulong)(uint)*(byte *)(param_3 + 0x50) & 0xf) >> 2 == 2)) {
      uVar1 = *(ushort *)(param_3 + 0x54);
      uVar9 = *(ulong *)(*(int *)(param_1 + 0x9c) + 0x18);
      uVar2 = (uint)(*(ulong *)(param_3 + 0x50) >> 0x18) & 0x3ff;
      iVar3 = (int)(((ulong)*(ushort *)(param_3 + 0x50) & 0x3fff) >> 4);
      fVar11 = (float)(1 << (uint)(((ulong)*(byte *)(*(int *)(param_1 + 0x9c) + 0x1b) << 0x3a) >>
                                  0x3c));
      param_2[0x14] =
           ((float)(((int)((*(ulong *)(param_3 + 0x50) & 0xffffff) >> 0xe) - iVar3) + 1) * 0.5) /
           fVar11;
      fVar12 = (float)(1 << (int)((uVar9 & 0x3ffffffff) >> 0x1e));
      param_2[0x15] =
           ((float)(int)(((int)(((ulong)uVar1 & 0xfff) >> 2) - uVar2) + 1) * 0.5) / fVar12;
      param_2[0x10] = ((float)iVar3 / fVar11) / (float)param_2[0x14] + 1.0;
      param_2[0x11] = ((float)uVar2 / fVar12) / (float)param_2[0x15] + 1.0;
    }
    else {
      param_2[0x14] = 0x3f000000;
      param_2[0x15] = 0x3f000000;
      param_2[0x10] = 0x3f800000;
      param_2[0x11] = 0x3f800000;
    }
  }
  return;
}

// 0x00147b30  size 0x244
/* WARNING: Removing unreachable block (ram,0x00147bcc) */
/* WARNING: Removing unreachable block (ram,0x00147b88) */
/* WARNING: Removing unreachable block (ram,0x00147b98) */
/* WARNING: Removing unreachable block (ram,0x00147bdc) */

void FUN_00147b30(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)param_1;
  iVar4 = iVar3 + (param_2 & 0xff) * 0x44;
  if (*(char *)(iVar3 + 0x90) == '\0') {
    uVar2 = FUN_00146820(iVar4,0x32);
  }
  else {
    uVar2 = FUN_00146820(iVar4,8);
  }
  FUN_001477a0(param_1,uVar2,param_3);
  iVar5 = (int)param_3;
  iVar4 = (int)uVar2;
  FUN_0013ed10(*(undefined4 *)(iVar3 + 0x9c),*(undefined1 *)(iVar5 + 0xc),iVar4 + 0xc0,iVar4 + 0xb0)
  ;
  *(undefined8 *)(iVar4 + 0xb8) = 6;
  *(undefined8 *)(iVar4 + 200) = 6;
  *(byte *)(iVar4 + 0xc4) =
       *(byte *)(iVar4 + 0xc4) & 0xfb | ((*(uint *)(iVar3 + 0xb4) & 0x20000) == 0) << 2;
  *(undefined8 *)(iVar4 + 0xd8) = 0x14;
  *(undefined8 *)(iVar4 + 0xd0) = *(undefined8 *)(*(int *)(iVar3 + 0x9c) + 0x20);
  *(byte *)(iVar4 + 0xd0) =
       *(byte *)(iVar4 + 0xd0) & 0xdf | ((*(uint *)(iVar3 + 0xb4) & 0x40000) != 0) << 5;
  *(ushort *)(iVar4 + 0xd4) =
       *(ushort *)(iVar4 + 0xd4) & 0xf000 |
       (ushort)*(undefined4 *)(*(int *)(iVar3 + 0x88) + 0xb8) & 0xfff;
  *(undefined8 *)(iVar4 + 0xe8) = 0x3b;
  *(undefined8 *)(iVar4 + 0xe0) = 0x8000000000;
  *(undefined8 *)(iVar4 + 0x138) = 0x34;
  *(undefined8 *)(iVar4 + 0x130) = *(undefined8 *)(*(int *)(iVar3 + 0x9c) + 0x48);
  *(undefined8 *)(iVar4 + 0x148) = 0x36;
  *(undefined8 *)(iVar4 + 0x140) = *(undefined8 *)(*(int *)(iVar3 + 0x9c) + 0x50);
  *(undefined8 *)(iVar4 + 0xf8) = 0x47;
  *(undefined8 *)(iVar4 + 0xf0) = *(undefined8 *)(iVar5 + 0x58);
  *(undefined8 *)(iVar4 + 0x108) = 0x49;
  *(undefined8 *)(iVar4 + 0x100) = 0;
  *(undefined8 *)(iVar4 + 0x118) = 8;
  *(undefined8 *)(iVar4 + 0x110) = *(undefined8 *)(iVar5 + 0x50);
  *(undefined8 *)(iVar4 + 0x128) = 0x42;
  *(undefined8 *)(iVar4 + 0x120) = *(undefined8 *)(iVar5 + 0x48);
  *(undefined8 *)(iVar4 + 0x158) = 0x3d;
  if ((*(char *)(iVar5 + 0x48) == 'H') || (*(char *)(iVar5 + 0x48) == 'B')) {
    uVar1 = *(uint *)(*(int *)(iVar3 + 0x88) + 0xd0);
  }
  else {
    uVar1 = *(uint *)(*(int *)(iVar3 + 0x88) + 0xcc);
  }
  *(ulong *)(iVar4 + 0x150) = (ulong)uVar1;
  return;
}

// 0x00147d80  size 0x3d0
/* WARNING: Removing unreachable block (ram,0x00147f64) */
/* WARNING: Removing unreachable block (ram,0x00147f20) */
/* WARNING: Removing unreachable block (ram,0x00147f30) */
/* WARNING: Removing unreachable block (ram,0x00147f74) */

void FUN_00147d80(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  puVar6 = (undefined4 *)param_2;
  iVar8 = (int)param_1;
  *(undefined4 *)(iVar8 + 0xb4) = *puVar6;
  if ((puVar6[2] & 1) != 0) {
    return;
  }
  lVar4 = FUN_00142ff0(*(undefined4 *)(iVar8 + 0x88),iVar8 + 0x180,puVar6 + 0x20);
  if (lVar4 == 0) {
    return;
  }
  if ((*(int *)(iVar8 + 0xb0) == 0) && ((*(uint *)(iVar8 + 0xb4) & 0x200000) == 0)) {
    uVar7 = 0xffffff;
    if ((*(uint *)(iVar8 + 0xb4) & 0x400000) == 0) {
      uVar7 = 0xbefbef;
    }
    lVar4 = FUN_00133120(puVar6 + 0x20,uVar7);
    if (lVar4 == 0) {
      *(uint *)(iVar8 + 0xb4) = *(uint *)(iVar8 + 0xb4) & 0xffffbfff;
    }
    else {
      *(uint *)(iVar8 + 0xb4) = *(uint *)(iVar8 + 0xb4) | 0x4000;
    }
  }
  else {
    *(uint *)(iVar8 + 0xb4) = *(uint *)(iVar8 + 0xb4) | 0x4000;
  }
  if (*(int *)(iVar8 + 0xa0) == 0) {
    *(uint *)(iVar8 + 0xb4) = *(uint *)(iVar8 + 0xb4) & 0xfffff7ff;
  }
  else if ((*(uint *)(iVar8 + 0xb4) & 0x10000) == 0) {
    *(uint *)(iVar8 + 0xb4) = *(uint *)(iVar8 + 0xb4) & 0xfffff7ff;
  }
  else {
    lVar4 = FUN_00142ff0(*(undefined4 *)(iVar8 + 0x88),iVar8 + 0x200,puVar6 + 0x20);
    if (lVar4 == 0) {
      *(uint *)(iVar8 + 0xb4) = *(uint *)(iVar8 + 0xb4) & 0xfffff7ff;
    }
    else {
      *(uint *)(iVar8 + 0xb4) = *(uint *)(iVar8 + 0xb4) | 0x800;
    }
  }
  uVar2 = *(uint *)(iVar8 + 0xb4);
  if ((uVar2 & 0x80000) == 0) {
    if ((uVar2 & 0x10) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = 1;
    }
  }
  else {
    iVar9 = 0;
  }
  if (((*(int *)(iVar8 + 0xa0) == 0) || (*(int *)(*(int *)(iVar8 + 0xa0) + 0x60) != 0)) ||
     ((uVar2 & 0x800) == 0)) {
    if (((*(int *)(iVar8 + 0xa4) != 0) && (*(int *)(*(int *)(iVar8 + 0xa4) + 0x60) == 0)) &&
       ((uVar2 & 0x100) != 0)) {
      FUN_00146050(iVar8 + iVar9 * 0x44);
      uVar2 = *(uint *)(iVar8 + 0xb4);
      goto LAB_00147edc;
    }
  }
  else {
    FUN_00146050(iVar8 + iVar9 * 0x44);
  }
  uVar2 = *(uint *)(iVar8 + 0xb4);
LAB_00147edc:
  if ((uVar2 & 0x20) == 0) {
    iVar5 = iVar8 + iVar9 * 0x44;
    if (*(char *)(iVar8 + 0x90) == '\0') {
      uVar7 = FUN_001467a0(iVar5,0x32);
    }
    else {
      uVar7 = FUN_001467a0(iVar5,8);
    }
    FUN_001477a0(param_1,uVar7,param_2);
    iVar5 = (int)uVar7;
    *(undefined8 *)(iVar5 + 0xb8) = 0x47;
    *(undefined8 *)(iVar5 + 0xb0) = *(undefined8 *)(puVar6 + 0x16);
    *(undefined8 *)(iVar5 + 200) = 0x42;
    *(undefined8 *)(iVar5 + 0xc0) = *(undefined8 *)(puVar6 + 0x12);
    *(undefined8 *)(iVar5 + 0xd8) = 0x3d;
    if ((*(char *)(puVar6 + 0x12) == 'H') || (*(char *)(puVar6 + 0x12) == 'B')) {
      uVar2 = *(uint *)(*(int *)(iVar8 + 0x88) + 0xd0);
    }
    else {
      uVar2 = *(uint *)(*(int *)(iVar8 + 0x88) + 0xcc);
    }
    *(ulong *)(iVar5 + 0xd0) = (ulong)uVar2;
  }
  else {
    uVar3 = FUN_00158370(*(undefined1 *)((int)puVar6 + 0xd),*(undefined2 *)((int)puVar6 + 0xe));
    *(undefined4 *)(iVar8 + 0x9c) = uVar3;
    if (*(int *)(*(int *)(iVar8 + 0x9c) + 0x60) == 0) {
      FUN_00146050(iVar8 + iVar9 * 0x44);
    }
    FUN_00147b30(param_1,iVar9,param_2);
  }
  iVar8 = iVar8 + iVar9 * 0x44;
  uVar3 = FUN_001456c0(iVar8,1);
  *(undefined4 *)(iVar8 + 0xc) = uVar3;
  puVar1 = *(undefined4 **)(iVar8 + 0xc);
  *puVar1 = 0x50000000;
  puVar1[1] = (uint)(puVar6 + 0x28) & 0xfffffff;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}

