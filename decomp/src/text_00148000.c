// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00148000 - 0x0014c000
#include "ghidra_types.h"

// 0x00148150  size 0x174
/* WARNING: Removing unreachable block (ram,0x001481e0) */
/* WARNING: Removing unreachable block (ram,0x0014819c) */
/* WARNING: Removing unreachable block (ram,0x001481ac) */
/* WARNING: Removing unreachable block (ram,0x001481f0) */

void FUN_00148150(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 + (param_2 & 0xff) * 0x44;
  if (*(char *)(param_1 + 0x90) == '\0') {
    iVar1 = FUN_001468a0(iVar1,0x32);
  }
  else {
    iVar1 = FUN_001468a0(iVar1,8);
  }
  FUN_0013ed10(*(undefined4 *)(param_1 + 0xa4),0,iVar1 + 0x20,iVar1 + 0x10);
  *(undefined8 *)(iVar1 + 0x18) = 7;
  *(undefined8 *)(iVar1 + 0x28) = 7;
  *(byte *)(iVar1 + 0x24) = *(byte *)(iVar1 + 0x24) & 0xe7;
  *(byte *)(iVar1 + 0x24) = *(byte *)(iVar1 + 0x24) & 0xfb | 4;
  *(undefined8 *)(iVar1 + 0x38) = 0x15;
  *(undefined8 *)(iVar1 + 0x30) = *(undefined8 *)(*(int *)(param_1 + 0xa4) + 0x20);
  *(undefined8 *)(iVar1 + 0x48) = 0x48;
  *(undefined8 *)(iVar1 + 0x40) = 0x50000;
  *(undefined8 *)(iVar1 + 0x58) = 9;
  *(undefined8 *)(iVar1 + 0x50) = 5;
  *(undefined8 *)(iVar1 + 0x68) = 0x43;
  *(ulong *)(iVar1 + 0x60) = (ulong)*(uint *)(param_1 + 0xa8) << 4 | 0x8000000048;
  return;
}

// 0x001482d0  size 0x160
/* WARNING: Removing unreachable block (ram,0x00148360) */
/* WARNING: Removing unreachable block (ram,0x0014831c) */
/* WARNING: Removing unreachable block (ram,0x0014832c) */
/* WARNING: Removing unreachable block (ram,0x00148370) */

void FUN_001482d0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 + (param_2 & 0xff) * 0x44;
  if (*(char *)(param_1 + 0x90) == '\0') {
    iVar1 = FUN_001468a0(iVar1,0x32);
  }
  else {
    iVar1 = FUN_001468a0(iVar1,8);
  }
  FUN_0013ed10(*(undefined4 *)(param_1 + 0xa0),0,iVar1 + 0x20,iVar1 + 0x10);
  *(undefined8 *)(iVar1 + 0x18) = 7;
  *(undefined8 *)(iVar1 + 0x28) = 7;
  *(byte *)(iVar1 + 0x24) = *(byte *)(iVar1 + 0x24) & 0xe7;
  *(byte *)(iVar1 + 0x24) = *(byte *)(iVar1 + 0x24) & 0xfb | 4;
  *(undefined8 *)(iVar1 + 0x38) = 0x15;
  *(undefined8 *)(iVar1 + 0x30) = *(undefined8 *)(*(int *)(param_1 + 0xa0) + 0x20);
  *(undefined8 *)(iVar1 + 0x48) = 0x48;
  *(undefined8 *)(iVar1 + 0x40) = 0x51001;
  *(undefined8 *)(iVar1 + 0x58) = 9;
  *(undefined8 *)(iVar1 + 0x50) = 5;
  *(undefined8 *)(iVar1 + 0x68) = 0x43;
  *(undefined8 *)(iVar1 + 0x60) = 0x48;
  return;
}

// 0x00148430  size 0x268
undefined4 FUN_00148430(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 auStack_10 [8];
  int iStack_8;
  
  if ((*param_2 & 0x10) == 0) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = param_2 + 0x14;
  }
  if (puVar6 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar5 = (int)param_1;
    FUN_00133260(iVar5 + 0x100);
    FUN_001330c0(iVar5 + 0xc0);
    FUN_00133280(iVar5 + 0x140);
    FUN_00133260(iVar5 + 0x140);
    FUN_001330c0(*(int *)(iVar5 + 0x88) + 0x2c0);
    FUN_00133280(iVar5 + 0x180);
    lVar4 = FUN_00142ff0(*(undefined4 *)(iVar5 + 0x88),iVar5 + 0x180,puVar6 + 4);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_00133260(iVar5 + 0x140);
      FUN_001330c0(*(int *)(iVar5 + 0x88) + 0x280);
      FUN_00133280(iVar5 + 0x1c0);
      if ((param_2[2] & 2) == 0) {
        uVar3 = FUN_00133120(puVar6 + 4,0xffffff);
        *(undefined4 *)(iVar5 + 0xb0) = uVar3;
      }
      else {
        *(undefined4 *)(iVar5 + 0xb0) = 1;
      }
      if (*(int *)(iVar5 + 0xa0) == 0) {
        uVar2 = *param_2;
      }
      else {
        FUN_00132ba0(iVar5 + 0x200,*(int *)(iVar5 + 0x88) + 0x420,iVar5 + 0x140);
        uVar2 = *param_2;
      }
      if ((uVar2 & 0x20) != 0) {
        if (*(int *)(iVar5 + 0x94) == 0) {
          FUN_001465c0(param_1,*(undefined4 *)(iVar5 + 0x3c));
        }
        FUN_00146920(param_1,iVar5 + 0x140,iVar5 + 0x180,iVar5 + 0x1c0);
      }
      if ((uVar2 & 0x40) != 0) {
        if (*(int *)(iVar5 + 0x98) == 0) {
          FUN_001465c0(iVar5 + 0x44,*(undefined4 *)(iVar5 + 0x80));
        }
        FUN_00146920(iVar5 + 0x44,iVar5 + 0x140,iVar5 + 0x180,iVar5 + 0x1c0);
      }
      puVar8 = puVar6 + 0xc;
      uVar7 = 0;
      do {
        FUN_00147d80(param_1,puVar8);
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + (puVar8[0x1e] + 1) * 4 + 0x28;
      } while (uVar7 < puVar6[3]);
      if (((uVar2 & 0x20) != 0) && (*(int *)(iVar5 + 0x94) == 0)) {
        FUN_00146570(param_1,*(undefined4 *)(iVar5 + 0x40));
      }
      if (((uVar2 & 0x40) != 0) && (*(int *)(iVar5 + 0x98) == 0)) {
        FUN_00144350(*(undefined4 *)(iVar5 + 0x88),auStack_10,iVar5 + 0x140);
        bVar1 = true;
        if ((-1 < iStack_8) && (iStack_8 < 0xffffff)) {
          bVar1 = false;
        }
        if (bVar1) {
          iStack_8 = 0xfffff0;
        }
        *(int *)(iVar5 + 0x84) = iStack_8;
        FUN_00146570(iVar5 + 0x44,*(undefined4 *)(iVar5 + 0x84));
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

// 0x001486a0  size 0x178
void FUN_001486a0(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  puVar4 = (uint *)param_2;
  iVar6 = (int)param_1;
  if (((*puVar4 & 1) != 0) && (*(int *)(iVar6 + 0x94) == 0)) {
    FUN_001465c0(param_1,*(undefined4 *)(iVar6 + 0x3c));
    FUN_00145d70(param_1);
    if (*(char *)(iVar6 + 0x90) == '\0') {
      FUN_00145780(param_1,0x301800);
      FUN_00146a90(param_1,1);
      iVar3 = *(int *)(iVar6 + 0xa0);
    }
    else {
      FUN_00145780(param_1,0x3054b0);
      FUN_00146a90(param_1,0x20);
      iVar3 = *(int *)(iVar6 + 0xa0);
    }
    if (iVar3 == 0) {
      if (*(int *)(iVar6 + 0xa4) != 0) {
        FUN_00148150(param_1,0);
      }
      uVar2 = *(undefined4 *)(iVar6 + 0x40);
    }
    else {
      FUN_001482d0(param_1,0);
      uVar2 = *(undefined4 *)(iVar6 + 0x40);
    }
    FUN_00146570(param_1,uVar2);
  }
  uVar5 = 0;
  if (puVar4[4] != 0) {
    do {
      puVar1 = *(uint **)(puVar4[5] + (puVar4[3] + uVar5) * 4);
      if (((puVar1[2] & 1) == 0) && ((*puVar1 & 0x10) != 0)) {
        FUN_00133090(iVar6 + 0x100);
        FUN_0014d750(param_2,iVar6 + 0x100,puVar1);
        FUN_00148430(param_1,puVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < puVar4[4]);
  }
  return;
}

// 0x00148820  size 0x28
void FUN_00148820(int param_1,uint param_2)

{
  *(undefined4 *)((param_2 & 0xff) * 4 + param_1 + 0x94) = 0;
  param_1 = param_1 + (param_2 & 0xff) * 0x44;
  FUN_00146570(param_1,*(undefined4 *)(param_1 + 0x40));
  return;
}

// 0x00148850  size 0xf8
void FUN_00148850(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)param_2 & 0xff;
  iVar2 = (int)param_1;
  *(undefined4 *)(uVar1 * 4 + iVar2 + 0x94) = 1;
  iVar3 = iVar2 + uVar1 * 0x44;
  FUN_001465c0(iVar3,*(undefined4 *)(iVar3 + 0x3c));
  FUN_00145d70(iVar3);
  if (*(char *)(iVar2 + 0x90) == '\0') {
    FUN_00145780(iVar3,0x301800);
    FUN_00146a90(iVar3,1);
    iVar3 = *(int *)(iVar2 + 0xa0);
  }
  else {
    FUN_00145780(iVar3,0x3054b0);
    FUN_00146a90(iVar3,0x20);
    iVar3 = *(int *)(iVar2 + 0xa0);
  }
  if (iVar3 == 0) {
    if (*(int *)(iVar2 + 0xa4) != 0) {
      FUN_00148150(param_1,param_2);
    }
  }
  else {
    FUN_001482d0(param_1,param_2);
  }
  return;
}

// 0x00148950  size 0x50
void FUN_00148950(int param_1)

{
  FUN_001466e0();
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_00133090(param_1 + 0xc0);
  FUN_00133090(param_1 + 0x100);
  return;
}

// 0x001489a0  size 0x20c
void FUN_001489a0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = *(uint *)(param_2 + 0x70);
  uVar3 = (uint)param_6;
  uVar2 = *(uint *)(param_2 + 0x74);
  *param_1 = param_5;
  param_1[1] = 0x42;
  iVar5 = (0x1000 - uVar4 >> 1) * 0x10;
  param_1[2] = CONCAT44((0x800 - (uVar2 >> 1)) * 0x10,(0x800 - (uVar4 >> 1)) * 0x10);
  param_1[3] = 0x18;
  param_1[4] = param_3;
  param_1[5] = 0x47;
  param_1[6] = (long)(int)(uVar3 >> 0x18) << 0x18 |
               (param_6 & 0xff) << 0x10 |
               (long)(int)(uVar3 >> 0x10) & 0xffU | ((long)(int)(uVar3 >> 8) & 0xffU) << 8 |
               0x100000000;
  param_1[7] = 1;
  param_1[8] = 0x46;
  param_1[9] = 0;
  uVar4 = *(uint *)(param_2 + 0x70);
  uVar2 = (0x1000 - uVar2 >> 1) * 0x10;
  if ((uVar4 & 0xf) == 0) {
    uVar4 = uVar4 >> 4;
  }
  else {
    uVar4 = (uVar4 >> 4) + 1;
  }
  uVar3 = *(uint *)(param_2 + 0x74);
  uVar8 = 0;
  puVar6 = param_1;
  do {
    iVar1 = uVar8 + 1;
    uVar7 = uVar4 * iVar1 - 1;
    if (*(uint *)(param_2 + 0x70) <= uVar7) {
      uVar7 = *(uint *)(param_2 + 0x70) - 1;
    }
    puVar6[10] = (ulong)uVar3 << 0x30 | (long)(int)uVar7 << 0x10 | (ulong)(uVar4 * uVar8);
    puVar6[0xb] = 0x40;
    puVar6[0xc] = (long)param_7 << 0x20 |
                  (ulong)uVar2 << 0x10 | (ulong)(iVar5 + uVar4 * 0x10 * uVar8);
    puVar6[0xd] = 0xd;
    uVar8 = uVar8 + 1;
    puVar6[0xe] = (long)param_7 << 0x20 |
                  (ulong)(uVar2 + uVar3 * 0x10) << 0x10 | (ulong)(iVar5 + uVar4 * 0x10 * iVar1);
    puVar6[0xf] = 5;
    puVar6 = puVar6 + 6;
  } while (uVar8 < 0x10);
  param_1[0x6a] = param_4;
  param_1[0x6b] = 0x47;
  return;
}

// 0x00148bb0  size 0x2e4
void FUN_00148bb0(undefined8 *param_1,long param_2,long param_3,long param_4,ulong param_5,
                 ulong param_6,uint param_7,long param_8,uint param_9,uint param_10,uint param_11,
                 uint param_12,uint param_13,uint param_14,uint param_15,undefined8 param_16)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  uVar3 = (uint)param_6;
  iVar8 = (0x1000 - param_7 >> 1) * 0x10;
  uVar2 = (uint)param_8;
  uVar6 = (0x1000 - uVar2 >> 1) * 0x10;
  *param_1 = param_16;
  param_1[1] = 0x42;
  param_1[2] = CONCAT44((0x800 - (uVar2 >> 1)) * 0x10,(0x800 - (param_7 >> 1)) * 0x10);
  param_1[3] = 0x18;
  if ((param_2 == 0) || (param_3 == 0)) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        param_1[4] = 0x10000;
        param_1[5] = 0x47;
      }
      else {
        param_1[4] = 0x32001;
        param_1[5] = 0x47;
      }
    }
    else {
      param_1[4] = 0x31001;
      param_1[5] = 0x47;
    }
  }
  else {
    param_1[4] = 0x30000;
    param_1[5] = 0x47;
  }
  param_1[6] = (long)(int)(uVar3 >> 0x18) << 0x18 |
               (param_6 & 0xff) << 0x10 |
               (long)(int)(uVar3 >> 0x10) & 0xffU | ((long)(int)(uVar3 >> 8) & 0xffU) << 8 |
               0x100000000;
  param_1[7] = 1;
  param_1[8] = (ulong)param_15 << 6 | 6;
  param_1[9] = 0;
  if ((param_7 & 0xf) == 0) {
    uVar3 = param_7 >> 4;
  }
  else {
    uVar3 = (param_7 >> 4) + 1;
  }
  uVar4 = 0;
  puVar7 = param_1;
  do {
    iVar1 = uVar4 + 1;
    uVar5 = uVar3 * iVar1 - 1;
    if (param_7 <= uVar5) {
      uVar5 = param_7 - 1;
    }
    puVar7[10] = param_8 << 0x30 | (long)(int)uVar5 << 0x10 | (ulong)(uVar3 * uVar4);
    puVar7[0xb] = 0x40;
    puVar7[0xc] = param_4 << 0x20 | (ulong)uVar6 << 0x10 | (ulong)(iVar8 + uVar3 * 0x10 * uVar4);
    puVar7[0xd] = 0xd;
    uVar4 = uVar4 + 1;
    puVar7[0xe] = param_4 << 0x20 |
                  (ulong)(uVar6 + uVar2 * 0x10) << 0x10 | (ulong)(iVar8 + uVar3 * 0x10 * iVar1);
    puVar7[0xf] = 5;
    puVar7 = puVar7 + 6;
  } while (uVar4 < 0x10);
  param_1[0x6a] =
       (param_5 & 0xffffffff) << 0x11 |
       (ulong)param_14 << 0xf |
       (ulong)param_13 << 0xe |
       (ulong)param_12 << 0xc | (ulong)param_11 << 4 | (ulong)param_9 | (ulong)param_10 << 1 |
       0x10000;
  param_1[0x6b] = 0x47;
  return;
}

// 0x00148ea0  size 0x1f8
void FUN_00148ea0(int param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (uint)param_3;
  lVar1 = (long)(int)(uVar2 >> 0x18);
  param_3 = param_3 & 0xff;
  uVar3 = (long)(int)(uVar2 >> 0x10) & 0xff;
  uVar4 = (long)(int)(uVar2 >> 8) & 0xff;
  if (param_2 == 0) {
    uVar3 = lVar1 << 0x18 | param_3 << 0x10 | uVar3 | uVar4 << 8;
    *(undefined8 *)(param_1 + 0x60) = 0x40000000a8;
    *(undefined8 *)(param_1 + 0x68) = 0x42;
    *(undefined8 *)(param_1 + 0x80) = 0x156;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(ulong *)(param_1 + 0x70) = uVar3;
    *(undefined8 *)(param_1 + 0x78) = 1;
    *(undefined8 *)(param_1 + 0x590) = 0x4000000068;
    *(undefined8 *)(param_1 + 0x598) = 0x42;
    *(undefined8 *)(param_1 + 0x5b0) = 0x156;
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    *(ulong *)(param_1 + 0x5a0) = uVar3;
    *(undefined8 *)(param_1 + 0x5a8) = 1;
  }
  else if (param_2 == 1) {
    uVar3 = lVar1 << 0x18 | param_3 << 0x10 | uVar3 | uVar4 << 8;
    *(undefined8 *)(param_1 + 0x60) = 0x40000000a1;
    *(undefined8 *)(param_1 + 0x68) = 0x42;
    *(undefined8 *)(param_1 + 0x80) = 0x156;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(ulong *)(param_1 + 0x70) = uVar3;
    *(undefined8 *)(param_1 + 0x78) = 1;
    *(undefined8 *)(param_1 + 0x590) = 0x4000000061;
    *(undefined8 *)(param_1 + 0x598) = 0x42;
    *(undefined8 *)(param_1 + 0x5b0) = 0x156;
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    *(ulong *)(param_1 + 0x5a0) = uVar3;
    *(undefined8 *)(param_1 + 0x5a8) = 1;
  }
  else if (param_2 == 2) {
    uVar3 = lVar1 << 0x18 |
            (long)(int)((uint)param_3 >> 1) << 0x10 |
            (long)(int)((uint)uVar3 >> 1) | (long)(int)((uint)uVar4 >> 1) << 8;
    *(undefined8 *)(param_1 + 0x60) = 0x2000000064;
    *(undefined8 *)(param_1 + 0x68) = 0x42;
    *(undefined8 *)(param_1 + 0x80) = 0x156;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(ulong *)(param_1 + 0x70) = uVar3;
    *(undefined8 *)(param_1 + 0x78) = 1;
    *(undefined8 *)(param_1 + 0x590) = 0x2000000068;
    *(undefined8 *)(param_1 + 0x598) = 0x42;
    *(undefined8 *)(param_1 + 0x5b0) = 0x156;
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    *(ulong *)(param_1 + 0x5a0) = uVar3;
    *(undefined8 *)(param_1 + 0x5a8) = 1;
  }
  return;
}

// 0x001490a0  size 0x2f0
void FUN_001490a0(undefined8 *param_1,int param_2,ulong param_3,ulong param_4,ulong param_5,
                 ulong param_6,ulong param_7,uint param_8,int param_9,uint param_10,
                 undefined4 param_11,undefined4 param_12,uint param_13,uint param_14)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  *param_1 = 0;
  param_1[1] = 0x3f;
  param_1[2] = 0x30000;
  iVar5 = (0x1000 - param_8 >> 1) * 0x10;
  iVar4 = (0x1000 - param_10 >> 1) * 0x10;
  param_1[3] = 0x47;
  param_1[4] = (ulong)param_14 << 0x23 |
               (ulong)param_13 << 0x22 |
               (param_7 & 0xffffffff) << 0x1e |
               (param_6 & 0xffffffff) << 0x1a |
               (param_5 & 0xffffffff) << 0x14 | param_3 & 0xffffffff | (param_4 & 0xffffffff) << 0xe
  ;
  param_1[5] = 6;
  param_1[6] = 0x61;
  param_1[7] = 0x14;
  param_1[8] = 0x8000008080;
  param_1[9] = 0x3b;
  param_1[10] = (ulong)param_8 << 0xe | 10 | (ulong)(param_9 - 1) << 0x22;
  param_1[0xb] = 8;
  FUN_00148ea0(param_1,param_11,param_12);
  param_8 = param_8 >> 4;
  iVar1 = param_2 + param_9 * 0x10;
  uVar6 = 0;
  do {
    uVar3 = uVar6 + 1;
    uVar2 = (ulong)(uVar6 * param_8 * 0x10);
    uVar7 = (ulong)(uVar3 * param_8 * 0x10);
    uVar8 = (ulong)param_10 << 0x30 |
            (ulong)(uVar6 * param_8) | (ulong)(uVar3 * param_8 - 1) << 0x10;
    param_1[0x12] = uVar8;
    param_1[0x13] = 0x40;
    param_1[0xb8] = uVar8;
    param_1[0xb9] = 0x40;
    param_1[0x14] = (ulong)(param_2 + 1) << 0x10 | uVar2;
    param_1[0x15] = 3;
    param_1[0xba] = (ulong)(param_2 + 0x11) << 0x10 | uVar2;
    param_1[0xbb] = 3;
    param_1[0x18] = (ulong)(iVar1 + 1) << 0x10 | uVar7;
    param_1[0x19] = 3;
    param_1[0xbe] = (ulong)(iVar1 + 0x11) << 0x10 | uVar7;
    param_1[0xbf] = 3;
    uVar2 = (long)iVar4 << 0x10 | (ulong)((iVar5 + param_8 * 0x10 * uVar6) - 8);
    param_1[0x16] = uVar2;
    param_1[0x17] = 0xd;
    param_1[0xbc] = uVar2;
    param_1[0xbd] = 0xd;
    uVar2 = (ulong)(iVar4 + param_10 * 0x10) << 0x10 | (ulong)((iVar5 + param_8 * 0x10 * uVar3) - 8)
    ;
    param_1[0x1a] = uVar2;
    param_1[0x1b] = 5;
    param_1[0xc0] = uVar2;
    param_1[0xc1] = 5;
    param_1 = param_1 + 10;
    uVar6 = uVar3;
  } while (uVar3 < 0x10);
  return;
}

// 0x00149390  size 0x2d4
void FUN_00149390(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_28;
  
  iVar9 = (0x1000U - *(int *)(param_2 + 0x70) >> 1) * 0x10;
  iVar8 = (0x1000U - *(int *)(param_2 + 0x74) >> 1) * 0x10;
  FUN_00143e10(param_3,auStack_80,0,0);
  *param_1 = 0;
  param_1[1] = 0x3f;
  param_1[2] = param_4;
  param_1[3] = 0x47;
  param_1[4] = uStack_68;
  param_1[5] = 6;
  param_1[6] = uStack_60;
  param_1[7] = 0x14;
  param_1[8] = uStack_58;
  param_1[9] = 0x3b;
  param_1[10] = uStack_28;
  param_1[0xb] = 8;
  param_1[0xc] = param_5;
  param_1[0xd] = 0x42;
  param_1[0x10] = (ulong)((long)(int)(param_6 >> 0x18) != 0) << 6 | 0x116;
  param_1[0x11] = 0;
  param_1[0xe] = (long)(int)(param_6 >> 0x18) << 0x18 |
                 (ulong)(param_6 & 0xff) << 0x10 |
                 (long)(int)(param_6 >> 0x10) & 0xffU | (ulong)(param_6 >> 8 & 0xff) << 8;
  param_1[0xf] = 1;
  iVar1 = *(int *)(param_2 + 0x74);
  uVar5 = *(uint *)(param_2 + 0x70) & 0xfffffff0;
  uVar6 = 0;
  do {
    iVar2 = *(int *)((int)param_3 + 0x74);
    uVar3 = uVar6 + 1;
    uVar4 = *(uint *)((int)param_3 + 0x70) >> 4;
    uVar7 = *(uint *)(param_2 + 0x70) >> 4;
    param_1[0x12] =
         (ulong)*(uint *)(param_2 + 0x74) << 0x30 |
         (ulong)(uVar6 * uVar7) | (ulong)(uVar3 * uVar7 - 1) << 0x10;
    param_1[0x13] = 0x40;
    param_1[0x14] = (ulong)(uVar6 * uVar4 * 0x10) | 0x10000;
    param_1[0x15] = 3;
    param_1[0x18] = (ulong)(iVar2 * 0x10 + 1) << 0x10 | (ulong)(uVar3 * uVar4 * 0x10);
    param_1[0x19] = 3;
    param_1[0x16] = (long)iVar8 << 0x10 | (ulong)((iVar9 + uVar5 * uVar6) - 8);
    param_1[0x17] = 0xd;
    param_1[0x1a] =
         (ulong)(uint)(iVar8 + iVar1 * 0x10) << 0x10 | (ulong)((iVar9 + uVar5 * uVar3) - 8);
    param_1[0x1b] = 5;
    param_1 = param_1 + 10;
    uVar6 = uVar3;
  } while (uVar3 < 0x10);
  return;
}

// 0x00149670  size 0x178
void FUN_00149670(int param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (uint)param_3;
  lVar1 = (long)(int)(uVar2 >> 0x18);
  uVar4 = (long)(int)(uVar2 >> 0x10) & 0xff;
  uVar3 = (long)(int)(uVar2 >> 8) & 0xff;
  param_3 = param_3 & 0xff;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x60) = 10;
    *(undefined8 *)(param_1 + 0x68) = 0x42;
    *(undefined8 *)(param_1 + 0x80) = 0x156;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(ulong *)(param_1 + 0x70) = lVar1 << 0x18 | param_3 << 0x10 | uVar4 | uVar3 << 8;
    *(undefined8 *)(param_1 + 0x78) = 1;
  }
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 0x60) = 0x81;
    *(undefined8 *)(param_1 + 0x68) = 0x42;
    *(undefined8 *)(param_1 + 0x80) = 0x156;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(ulong *)(param_1 + 0x70) = lVar1 << 0x18 | param_3 << 0x10 | uVar4 | uVar3 << 8;
    *(undefined8 *)(param_1 + 0x78) = 1;
  }
  if (param_2 == 2) {
    *(ulong *)(param_1 + 0x60) = lVar1 << 0x20 | 0x29;
    *(undefined8 *)(param_1 + 0x68) = 0x42;
    *(undefined8 *)(param_1 + 0x80) = 0x156;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(long *)(param_1 + 0x70) =
         lVar1 << 0x18 |
         (long)(int)((uint)param_3 >> 1) << 0x10 |
         (long)(int)((uint)uVar4 >> 1) | (long)(int)((uint)uVar3 >> 1) << 8;
    *(undefined8 *)(param_1 + 0x78) = 1;
  }
  return;
}

// 0x001497f0  size 0x288
void FUN_001497f0(undefined8 *param_1,int param_2,ulong param_3,ulong param_4,ulong param_5,
                 ulong param_6,ulong param_7,uint param_8,int param_9,uint param_10,
                 undefined4 param_11,undefined4 param_12,uint param_13,uint param_14)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0x3f;
  param_1[2] = 0x30000;
  iVar4 = (0x1000 - param_8 >> 1) * 0x10;
  iVar3 = (0x1000 - param_10 >> 1) * 0x10;
  param_1[3] = 0x47;
  param_1[4] = (ulong)param_14 << 0x23 |
               (ulong)param_13 << 0x22 |
               (param_7 & 0xffffffff) << 0x1e |
               (param_6 & 0xffffffff) << 0x1a |
               (param_5 & 0xffffffff) << 0x14 | param_3 & 0xffffffff | (param_4 & 0xffffffff) << 0xe
  ;
  param_1[5] = 6;
  param_1[6] = 1;
  param_1[7] = 0x14;
  param_1[8] = 0x8000008080;
  param_1[9] = 0x3b;
  param_1[10] = (ulong)param_8 << 0xe | 10 | (ulong)(param_9 - 1) << 0x22;
  param_1[0xb] = 8;
  FUN_00149670(param_1,param_11,param_12);
  param_8 = param_8 >> 4;
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1;
    param_1[0x12] =
         (ulong)param_10 << 0x30 | (ulong)(uVar2 * param_8) | (ulong)(uVar1 * param_8 - 1) << 0x10;
    param_1[0x13] = 0x40;
    param_1[0x14] = (ulong)(param_2 + 1) << 0x10 | (ulong)(uVar2 * param_8 * 0x10);
    param_1[0x15] = 3;
    param_1[0x18] = (ulong)(param_2 + param_9 * 0x10 + 1) << 0x10 | (ulong)(uVar1 * param_8 * 0x10);
    param_1[0x19] = 3;
    param_1[0x16] = (long)iVar3 << 0x10 | (ulong)((iVar4 + param_8 * 0x10 * uVar2) - 8);
    param_1[0x17] = 0xd;
    param_1[0x1a] =
         (ulong)(iVar3 + param_10 * 0x10) << 0x10 | (ulong)((iVar4 + param_8 * 0x10 * uVar1) - 8);
    param_1[0x1b] = 5;
    param_1 = param_1 + 10;
    uVar2 = uVar1;
  } while (uVar1 < 0x10);
  return;
}

// 0x00149a80  size 0x204
void FUN_00149a80(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,
                 ulong param_6,ulong param_7,long param_8,uint param_9,uint param_10,uint param_11,
                 uint param_12,uint param_13,uint param_14,int param_15)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_5 << 0x20 |
          (param_4 & 0xffffffff) << 0x18 | param_2 & 0xffffffff | (param_3 & 0xffffffff) << 0x10;
  *param_1 = 0;
  uVar3 = param_8 << 0x20 | param_6 & 0xffffffff | (param_7 & 0xf) << 0x18;
  param_1[1] = 0x3f;
  param_1[2] = 0;
  param_1[3] = 0x22;
  param_1[4] = uVar4;
  param_1[5] = 0x4c;
  param_1[6] = uVar3;
  param_1[7] = 0x4e;
  uVar1 = CONCAT44(param_15 + ((0x800 - (param_12 >> 1)) - param_10) * 0x10,
                   ((0x800 - (param_11 >> 1)) - param_9) * 0x10);
  param_1[8] = uVar1;
  param_1[9] = 0x18;
  uVar2 = (ulong)((param_10 + param_12) - 1) << 0x30 |
          (ulong)param_10 << 0x20 | (ulong)param_9 | (ulong)((param_9 + param_11) - 1) << 0x10;
  param_1[10] = uVar2;
  param_1[0xb] = 0x40;
  param_1[0xc] = uVar4;
  param_1[0xd] = 0x4d;
  param_1[0xe] = uVar3;
  param_1[0xf] = 0x4f;
  param_1[0x10] = uVar1;
  param_1[0x11] = 0x19;
  param_1[0x12] = uVar2;
  param_1[0x13] = 0x41;
  param_1[0x14] = 1;
  param_1[0x15] = 0x46;
  param_1[0x16] = 1;
  param_1[0x17] = 0x1a;
  param_1[0x18] = (ulong)param_13;
  param_1[0x19] = 0x45;
  param_1[0x1a] = (ulong)param_14;
  param_1[0x1b] = 0x44;
  param_1[0x1c] = 0xffffff;
  param_1[0x1d] = 0x3d;
  return;
}

// 0x00149c90  size 0x438
void FUN_00149c90(int param_1,byte param_2,short *param_3)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  
  uVar11 = *(uint *)(param_3 + 0x50);
  uVar10 = *(uint *)(param_3 + 0x52);
  uVar7 = (((uVar11 + 0xe) / 0xf) * 0xf) / 0xf;
  if (*param_3 == 2) {
    uVar7 = 1;
  }
  puVar4 = (undefined4 *)FUN_001456c0(param_1 + (uint)param_2 * 0x44,uVar7 << 2);
  if (uVar11 != 0) {
    lVar6 = 3;
    uVar5 = 0x412;
    do {
      if (uVar11 < 0x10) {
        uVar7 = uVar11;
      }
      else {
        uVar7 = 0xf;
      }
      uVar15 = uVar7 * 3;
      if (*param_3 == 2) {
        uVar7 = 0x20;
        uVar11 = 0x20;
        uVar15 = 1;
      }
      *puVar4 = &DAT_10000001;
      puVar4[1] = 0;
      puVar4[2] = 0x1000404;
      puVar4[3] = 0x6c018000;
      puVar4[8] = uVar15 | 0x30000000;
      puVar4[9] = uVar10 & 0xfffffff;
      puVar4[10] = 0x1000404;
      puVar4[0xb] = uVar15 << 0x10 | 0x6c008001;
      uVar16 = 0;
      lVar14 = 0;
      puVar4[0xc] = 0x10000000;
      uVar9 = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0x17000000;
      bVar1 = *(byte *)(param_3 + 1);
      bVar3 = *(int *)(param_3 + 2) != 0;
      uVar8 = (ulong)(param_2 == 1);
      if ((bVar1 & 0x20) != 0) {
        uVar8 = 1;
      }
      sVar2 = *param_3;
      if (sVar2 == 1) {
        lVar13 = (long)(int)(uVar7 << 1);
        uVar9 = 0x51;
        lVar14 = 2;
        uVar16 = 1;
LAB_0014a03c:
        uVar8 = lVar13 << 0x20;
      }
      else {
        if (sVar2 == 0x200) {
          lVar13 = (long)(int)(uVar7 << 1);
          uVar16 = (ulong)(int)((uint)bVar3 << 4 | 0x4e);
          uVar9 = 0x512;
          lVar14 = lVar6;
          goto LAB_0014a03c;
        }
        if (sVar2 == 2) {
          lVar13 = (long)(int)(uVar7 << 1);
          uVar16 = (ulong)(int)((uint)bVar3 << 4 | 0xe);
          uVar9 = 0x512;
          lVar14 = lVar6;
          goto LAB_0014a03c;
        }
        if (sVar2 == 4) {
          lVar13 = (long)(int)(uVar7 << 1);
          if ((bVar1 & 2) == 0) {
            uVar15 = (uint)(uVar8 << 6) | (uint)bVar3 << 4 | 0x2e;
          }
          else {
            uVar15 = (uint)bVar3 << 4 | 0x2e;
          }
          uVar16 = (ulong)(int)uVar15;
          uVar9 = uVar5;
          lVar14 = lVar6;
          goto LAB_0014a03c;
        }
        if (sVar2 == 0x800) {
          lVar13 = (long)(int)(uVar7 << 2);
          uVar16 = (ulong)(int)((uint)bVar3 << 4 | 0x6c);
          uVar9 = uVar5;
          lVar14 = lVar6;
          goto LAB_0014a03c;
        }
        if (sVar2 == 8) {
          lVar13 = (long)(int)(uVar7 << 2);
          uVar16 = (ulong)(int)((uint)(uVar8 << 6) | (uint)bVar3 << 4 | 0x2c);
          uVar9 = uVar5;
          lVar14 = lVar6;
          goto LAB_0014a03c;
        }
        if ((((sVar2 == 0x400) || (sVar2 == 0x100)) || (sVar2 == 0x10)) ||
           ((sVar2 == 0x20 || (sVar2 == 0x40)))) {
          if (bVar3) {
            iVar12 = uVar7 << 2;
            uVar15 = 4;
          }
          else {
            iVar12 = uVar7 << 1;
            uVar15 = 6;
          }
          lVar13 = (long)iVar12;
          if ((bVar1 & 2) == 0) {
            uVar15 = (uint)(uVar8 << 6) | uVar15 | 8 | (uint)bVar3 << 4 | 0x20;
          }
          else {
            uVar15 = uVar15 | 8 | (uint)bVar3 << 4 | 0x20;
          }
          uVar16 = (ulong)(int)uVar15;
          uVar9 = uVar5;
          lVar14 = lVar6;
          goto LAB_0014a03c;
        }
        uVar8 = 0;
      }
      uVar11 = uVar11 - uVar7;
      *(ulong *)(puVar4 + 4) = lVar14 << 0x3c | uVar8 >> 0x20 | 0x400000008000 | uVar16 << 0x2f;
      *(undefined8 *)(puVar4 + 6) = uVar9;
      puVar4[7] = uVar7;
      puVar4 = puVar4 + 0x10;
      uVar10 = uVar10 + uVar7 * 0x30;
    } while (uVar11 != 0);
  }
  return;
}

// 0x0014a0d0  size 0x47c
/* WARNING: Removing unreachable block (ram,0x0014a448) */
/* WARNING: Removing unreachable block (ram,0x0014a124) */
/* WARNING: Removing unreachable block (ram,0x0014a134) */
/* WARNING: Removing unreachable block (ram,0x0014a4a0) */

void FUN_0014a0d0(int param_1,byte param_2,ushort *param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = FUN_00146820(param_1 + (uint)param_2 * 0x44,0x2f);
  *(uint *)(iVar3 + 0x30) = (uint)*param_3;
  if ((param_3[1] & 2) != 0) {
    *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 0x80;
  }
  if (*(int *)(param_3 + 6) == 0) {
    FUN_00132ae0(iVar3 + 0x40,*(undefined4 *)(param_1 + 0x88));
  }
  else {
    uStack_10 = DAT_0030a8b0;
    uStack_c = DAT_0030a8b4;
    uStack_8 = DAT_0030a8b8;
    uStack_4 = DAT_0030a8bc;
    FUN_00132ae0(iVar3 + 0x40,&uStack_10);
  }
  *(undefined4 *)(iVar3 + 0x4c) = 0x40000000;
  if (*(int *)(param_3 + 2) == 0) {
    *(undefined8 *)(iVar3 + 0xb8) = 0x7f;
    *(undefined8 *)(iVar3 + 200) = 0x7f;
    *(undefined8 *)(iVar3 + 0xd8) = 0x7f;
    *(undefined8 *)(iVar3 + 0xe8) = 0x7f;
    *(undefined8 *)(iVar3 + 0x138) = 0x7f;
    *(undefined8 *)(iVar3 + 0x148) = 0x7f;
    *(undefined8 *)(iVar3 + 0x108) = 0x7f;
    *(undefined8 *)(iVar3 + 0x118) = 0x7f;
  }
  else {
    FUN_0013ed10(*(undefined4 *)(param_1 + 0x90),0,iVar3 + 0xc0,iVar3 + 0xb0);
    *(undefined8 *)(iVar3 + 0xb8) = 6;
    *(undefined8 *)(iVar3 + 200) = 6;
    if (*param_3 == 2) {
      *(byte *)(iVar3 + 0xc4) = *(byte *)(iVar3 + 0xc4) & 0xe7 | 8;
    }
    else {
      *(byte *)(iVar3 + 0xc4) = *(byte *)(iVar3 + 0xc4) & 0xe7;
    }
    *(undefined8 *)(iVar3 + 0xd8) = 0x14;
    *(undefined8 *)(iVar3 + 0xd0) = *(undefined8 *)(*(int *)(param_1 + 0x90) + 0x20);
    *(undefined8 *)(iVar3 + 0xe8) = 0x3b;
    if (*param_3 == 2) {
      *(undefined8 *)(iVar3 + 0xe0) = 0x8000000000;
    }
    else {
      *(undefined8 *)(iVar3 + 0xe0) = 0x8000008080;
    }
    *(undefined8 *)(iVar3 + 0x138) = 0x34;
    *(undefined8 *)(iVar3 + 0x130) = *(undefined8 *)(*(int *)(param_1 + 0x90) + 0x48);
    *(undefined8 *)(iVar3 + 0x148) = 0x36;
    *(undefined8 *)(iVar3 + 0x140) = *(undefined8 *)(*(int *)(param_1 + 0x90) + 0x50);
    *(undefined8 *)(iVar3 + 0x108) = 0x49;
    *(undefined8 *)(iVar3 + 0x100) = 0;
    *(undefined8 *)(iVar3 + 0x118) = 8;
    *(undefined8 *)(iVar3 + 0x110) = *(undefined8 *)(param_3 + 0x38);
    iVar1 = *(int *)(param_1 + 0x90);
    fVar6 = (float)(1 << (int)(((ulong)*(byte *)(iVar1 + 0x1b) & 0x3f) >> 2));
    fVar5 = (float)(1 << (int)((*(ulong *)(iVar1 + 0x18) & 0x3ffffffff) >> 0x1e));
    *(float *)(iVar3 + 0x50) = (float)*(ushort *)(iVar1 + 4) / fVar6;
    *(float *)(iVar3 + 0x54) =
         (float)((uint)*(ushort *)(*(int *)(param_1 + 0x90) + 4) +
                (uint)*(ushort *)(*(int *)(param_1 + 0x90) + 8)) / fVar6;
    *(float *)(iVar3 + 0x58) = (float)*(ushort *)(*(int *)(param_1 + 0x90) + 6) / fVar5;
    *(float *)(iVar3 + 0x5c) =
         (float)((uint)*(ushort *)(*(int *)(param_1 + 0x90) + 6) +
                (uint)*(ushort *)(*(int *)(param_1 + 0x90) + 10)) / fVar5;
  }
  uVar2 = param_3[1];
  if ((uVar2 & 0x40) == 0) {
    if (*param_3 == 2) {
      uVar4 = 0x30000;
    }
    else if (*param_3 == 0x200) {
      uVar4 = 0x33001;
    }
    else if ((uVar2 & 2) == 0) {
      if ((param_2 == 1) || ((uVar2 & 0x20) != 0)) {
        uVar4 = 0x51001;
      }
      else {
        uVar4 = 0x50000;
      }
    }
    else {
      uVar4 = 0x5040b;
    }
  }
  else {
    uVar4 = 0x5000d;
  }
  *(undefined8 *)(iVar3 + 0xf8) = 0x47;
  *(undefined8 *)(iVar3 + 0xf0) = uVar4;
  uVar2 = param_3[1];
  if ((uVar2 & 0x80) == 0) {
    if (*param_3 == 0x200) {
      uVar4 = 0x48;
    }
    else if (((uVar2 & 4) == 0) && ((uVar2 & 0x40) == 0)) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 8) == 0) {
          uVar4 = 0x48;
        }
        else {
          uVar4 = 0x44;
        }
      }
      else {
        uVar4 = 0x8000000042;
      }
    }
    else {
      uVar4 = 0x8000000048;
    }
  }
  else {
    uVar4 = 0x54;
  }
  *(undefined8 *)(iVar3 + 0x128) = 0x42;
  *(undefined8 *)(iVar3 + 0x120) = uVar4;
  *(undefined8 *)(iVar3 + 0x158) = 0x3d;
  *(ulong *)(iVar3 + 0x150) = (ulong)*(uint *)(*(int *)(param_1 + 0x88) + 0xd0);
  return;
}

// 0x0014a550  size 0x2a4
void FUN_0014a550(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined1 auStack_70 [8];
  int iStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 auStack_10 [8];
  int iStack_8;
  
  iVar3 = ((uint)param_2 & 0xff) * 0x44;
  iVar6 = (int)param_1;
  iVar4 = iVar6 + iVar3;
  FUN_00145d70(iVar4);
  FUN_00145780(iVar4,0x2fda00);
  FUN_00146a90(iVar4,1);
  FUN_00146920(iVar4,iVar6 + 0xa0,iVar6 + 0xe0,iVar6 + 0x120);
  psVar5 = (short *)param_3;
  if (*(int *)(psVar5 + 2) != 0) {
    uVar2 = FUN_00158370(*(undefined1 *)((int)psVar5 + 9),psVar5[5]);
    *(undefined4 *)(iVar6 + 0x90) = uVar2;
    if (*(int *)(*(int *)(iVar6 + 0x90) + 0x60) == 0) {
      FUN_00146050(iVar4);
    }
  }
  FUN_0014a0d0(param_1,param_2,param_3);
  FUN_00149c90(param_1,param_2,param_3);
  if ((param_2 & 0xff) != 0) {
    if ((*psVar5 == 0x800) || (*psVar5 == 2)) {
      *(undefined4 *)(iVar3 + iVar6 + 0x40) = 0xfffff0;
    }
    else if (*(int *)(psVar5 + 6) == 0) {
      fStack_60 = (*(float *)(psVar5 + 0x40) + *(float *)(psVar5 + 0x48)) / 2.0;
      fStack_5c = (*(float *)(psVar5 + 0x42) + *(float *)(psVar5 + 0x4a)) / 2.0;
      uStack_54 = 0x3f800000;
      fStack_58 = (*(float *)(psVar5 + 0x44) + *(float *)(psVar5 + 0x4c)) / 2.0;
      FUN_00132ae0(iVar6 + 0xd0,&fStack_60);
      FUN_00144350(*(undefined4 *)(iVar6 + 0x88),auStack_70,iVar6 + 0xa0);
      bVar1 = true;
      if ((-1 < iStack_68) && (iStack_68 < 0xffffff)) {
        bVar1 = false;
      }
      if (bVar1) {
        iStack_68 = 0xfffff0;
      }
      *(int *)(iVar3 + iVar6 + 0x40) = iStack_68;
    }
    else {
      FUN_00133090(auStack_50);
      fStack_20 = (*(float *)(psVar5 + 0x40) + *(float *)(psVar5 + 0x48)) / 2.0;
      fStack_1c = (*(float *)(psVar5 + 0x42) + *(float *)(psVar5 + 0x4a)) / 2.0;
      fStack_18 = (*(float *)(psVar5 + 0x44) + *(float *)(psVar5 + 0x4c)) / 2.0;
      FUN_00132ba0(iVar6 + 0xa0,iVar6 + 0xa0,auStack_50);
      FUN_00144350(*(undefined4 *)(iVar6 + 0x88),auStack_10,iVar6 + 0xa0);
      bVar1 = true;
      if ((-1 < iStack_8) && (iStack_8 < 0xffffff)) {
        bVar1 = false;
      }
      if (bVar1) {
        iStack_8 = 0xfffff0;
      }
      *(int *)(iVar3 + iVar6 + 0x40) = iStack_8;
    }
  }
  return;
}

// 0x0014a800  size 0x1b0
undefined4 FUN_0014a800(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [60];
  undefined4 uStack_4;
  
  psVar5 = (short *)param_2;
  if (*(int *)(psVar5 + 0x50) == 0) {
    uVar3 = 0;
  }
  else {
    iVar7 = (int)param_1;
    if (*(int *)(psVar5 + 6) == 0) {
      FUN_00133090(iVar7 + 0xa0);
      sVar2 = *psVar5;
    }
    else {
      FUN_00133090(auStack_40);
      FUN_00132d20(auStack_40,auStack_40,psVar5 + 0x28);
      uStack_4 = 0x3f800000;
      FUN_00132ba0(iVar7 + 0xa0,auStack_40,psVar5 + 8);
      sVar2 = *psVar5;
    }
    if (((sVar2 != 0x800) && (sVar2 != 2)) && (sVar2 != 0x200)) {
      FUN_00132ba0(iVar7 + 0xe0,*(int *)(iVar7 + 0x88) + 0x2c0,iVar7 + 0xa0);
      lVar4 = FUN_00142ff0(*(undefined4 *)(iVar7 + 0x88),iVar7 + 0xe0,psVar5 + 0x40);
      if (lVar4 == 0) {
        return 0;
      }
    }
    if (*(int *)(psVar5 + 6) == 0) {
      FUN_00133090(auStack_80);
      FUN_00132d20(iVar7 + 0xa0,auStack_80,*(undefined4 *)(iVar7 + 0x88));
      bVar1 = *(byte *)(psVar5 + 1);
    }
    else {
      bVar1 = *(byte *)(psVar5 + 1);
    }
    if ((bVar1 & 0x20) == 0) {
      if ((((bVar1 & 4) == 0) && ((bVar1 & 0x10) == 0)) && ((bVar1 & 8) == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = 0;
    }
    iVar7 = iVar7 + iVar6 * 0x44;
    FUN_001465c0(iVar7,*(undefined4 *)(iVar7 + 0x3c));
    FUN_0014a550(param_1,iVar6,param_2);
    FUN_00146570(iVar7,*(undefined4 *)(iVar7 + 0x40));
    uVar3 = 1;
  }
  return uVar3;
}

// 0x0014a9c0  size 0x178
void FUN_0014a9c0(undefined8 param_1,uint *param_2,int *param_3,int *param_4,uint param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2[1] == 4) {
    uVar6 = *param_2;
    if ((uVar6 & 0x100) == 0) {
      uVar4 = (uint)*(ushort *)(param_6 + 4);
      uVar3 = (uint)*(ushort *)(param_6 + 6);
      uVar1 = uVar4 + *(ushort *)(param_6 + 8);
      uVar5 = uVar3 + *(ushort *)(param_6 + 10);
    }
    else {
      uVar3 = (uint)*(ushort *)(param_6 + 6) + param_4[1];
      uVar1 = (uint)*(ushort *)(param_6 + 4) + param_4[6];
      uVar4 = (uint)*(ushort *)(param_6 + 4) + *param_4;
      uVar5 = (uint)*(ushort *)(param_6 + 6) + param_4[7];
    }
    uVar2 = uVar1;
    if ((uVar6 & 0x200) != 0) {
      uVar2 = uVar4;
      uVar4 = uVar1;
    }
    uVar1 = uVar3;
    if ((uVar6 & 0x400) != 0) {
      uVar1 = uVar5;
      uVar5 = uVar3;
    }
    param_3[8] = uVar4 << 4;
    *param_3 = uVar4 << 4;
    param_3[0xc] = uVar2 << 4;
    param_3[4] = uVar2 << 4;
    param_3[1] = uVar1 << 4;
    param_3[5] = uVar1 << 4;
    param_3[0xd] = uVar5 << 4;
    param_3[9] = uVar5 << 4;
    param_3[0xe] = 0;
    param_3[10] = 0;
    param_3[6] = 0;
    param_3[2] = 0;
    param_3[0xf] = 1;
    param_3[0xb] = 1;
    param_3[7] = 1;
    param_3[3] = 1;
  }
  else {
    uVar6 = 0;
    if (param_5 != 0) {
      do {
        if ((*param_2 & 0x10) == 0) {
          *param_3 = 0;
          param_3[1] = 0;
          param_3[2] = 0;
          param_3[3] = 0x10;
        }
        else {
          *param_3 = ((uint)*(ushort *)(param_6 + 4) + *param_4) * 0x10;
          param_3[1] = ((uint)*(ushort *)(param_6 + 6) + param_4[1]) * 0x10;
          param_3[2] = 0;
          param_3[3] = 0x10;
        }
        uVar6 = uVar6 + 1;
        param_3 = param_3 + 4;
        param_4 = param_4 + 2;
      } while (uVar6 < param_5);
    }
  }
  return;
}

// 0x0014ab40  size 0x438
undefined4 FUN_0014ab40(int param_1,uint *param_2,uint *param_3,int param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  float fVar4;
  undefined4 auStack_110 [5];
  undefined4 uStack_fc;
  uint auStack_d0 [5];
  uint uStack_bc;
  undefined1 auStack_90 [48];
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint auStack_30 [6];
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  bVar1 = param_2[1] == 4;
  if (bVar1) {
    uStack_40 = 0;
    auStack_30[4] = 0;
    auStack_30[0] = param_2[0xc0];
    uStack_3c = 0;
    auStack_30[1] = 0;
    auStack_30[5] = param_2[0xc1];
    uStack_8 = 0;
    uStack_4 = 0x3f800000;
    uStack_18 = 0;
    uStack_14 = 0x3f800000;
    auStack_30[2] = 0;
    auStack_30[3] = 0x3f800000;
    uStack_34 = 0x3f800000;
    uStack_38 = 0;
    uStack_10 = auStack_30[0];
    uStack_c = auStack_30[5];
  }
  FUN_00133090(auStack_90);
  FUN_00132b50(&fStack_60,&fStack_60,param_2 + 0xb4);
  if ((*param_2 & 4) == 0) {
    uVar2 = *param_2;
  }
  else {
    FUN_00133090(auStack_d0);
    auStack_d0[0] = param_2[0xb8];
    uStack_bc = param_2[0xb9];
    FUN_00132ba0(auStack_90,auStack_d0,auStack_90);
    uVar2 = *param_2;
  }
  if ((uVar2 & 8) != 0) {
    if (3.1415927 < (float)param_2[0xa8]) {
      param_2[0xa8] = (uint)((float)param_2[0xa8] - 6.2831855);
    }
    FUN_00132d80(param_2[0xa8],auStack_90,auStack_90);
  }
  if (bVar1) {
    FUN_00132b70(&fStack_60,&fStack_60,param_2 + 0xbc);
    fVar4 = *(float *)(param_1 + 0x30);
  }
  else {
    FUN_00132b70(&fStack_60,&fStack_60,param_2 + 0xb4);
    fVar4 = *(float *)(param_1 + 0x30);
  }
  if ((fVar4 == 1.0) && (*(float *)(param_1 + 0x2c) == 1.0)) {
    uVar2 = *(uint *)(param_1 + 0x1c);
  }
  else {
    FUN_00133090(auStack_110);
    auStack_110[0] = *(undefined4 *)(param_1 + 0x2c);
    uStack_fc = *(undefined4 *)(param_1 + 0x30);
    FUN_00132ba0(auStack_90,auStack_110,auStack_90);
    uVar2 = *(uint *)(param_1 + 0x1c);
  }
  fStack_60 = fStack_60 + (float)uVar2 / 16.0 + *(float *)(param_1 + 0x34);
  fStack_5c = fStack_5c + (float)*(uint *)(param_1 + 0x20) / 16.0 + *(float *)(param_1 + 0x38);
  if (bVar1) {
    FUN_00132d50(&uStack_40,auStack_90,&uStack_40);
    FUN_00132d50(auStack_30,auStack_90,auStack_30);
    puVar3 = auStack_30 + 4;
    FUN_00132d50(puVar3,auStack_90,puVar3);
    FUN_00132d50(&uStack_10,auStack_90,&uStack_10);
    FUN_00132950(param_3,&uStack_40);
    FUN_00132950(param_3 + 4,auStack_30);
    FUN_00132950(param_3 + 8,puVar3);
    FUN_00132950(param_3 + 0xc,&uStack_10);
    if (((*param_2 & 0x40) != 0) &&
       (((param_3[0xd] |
         param_3[0xc] | param_3[9] | param_3[8] | param_3[5] | param_3[4] | *param_3 | param_3[1]) &
        0xffff0000) != 0)) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
    if (param_5 != 0) {
      do {
        FUN_00132d50(auStack_50,auStack_90,param_4);
        FUN_00132950(param_3,auStack_50);
        if ((*param_2 & 0x40) != 0) {
          if (((int)*param_3 < 0) || (0xfff0 < (int)*param_3)) {
            return 0;
          }
          if (((int)param_3[1] < 0) || (0xfff0 < (int)param_3[1])) {
            return 0;
          }
        }
        uVar2 = uVar2 + 1;
        param_3 = param_3 + 4;
        param_4 = param_4 + 0x10;
      } while (uVar2 < param_5);
    }
  }
  return 1;
}

// 0x0014af80  size 0x770
/* WARNING: Removing unreachable block (ram,0x0014aff8) */
/* WARNING: Removing unreachable block (ram,0x0014b030) */

int FUN_0014af80(undefined8 param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  int iVar17;
  int iVar18;
  ulong unaff_s6;
  ulong uVar19;
  ulong auStack_2a0 [16];
  int aiStack_220 [12];
  int iStack_1f0;
  int iStack_1ec;
  int aiStack_120 [12];
  int iStack_f0;
  int iStack_ec;
  undefined8 uStack_18;
  ulong uStack_10;
  ulong uStack_8;
  
  iVar18 = 1;
  puVar13 = (uint *)param_2;
  uVar5 = *puVar13;
  uVar2 = puVar13[1];
  uVar19 = (ulong)((uVar5 & 2) != 0);
  iVar15 = (int)param_4;
  if ((param_4 != 0) && ((uVar5 & 4) != 0)) {
    puVar13[0xc0] = (uint)(float)*(ushort *)(iVar15 + 8);
    puVar13[0xc1] = (uint)(float)*(ushort *)(iVar15 + 10);
  }
  lVar7 = FUN_0014ab40(param_1,param_2,aiStack_120,puVar13 + 4,puVar13[2]);
  if (lVar7 == 0) {
    iVar17 = 0;
  }
  else {
    if (param_4 == 0) {
      uVar11 = puVar13[0xb3];
    }
    else {
      uStack_8 = *(ulong *)(iVar15 + 0x18);
      uStack_10 = 0;
      uStack_18 = *(undefined8 *)(iVar15 + 0x20);
      FUN_0013ed10(param_4,puVar13[0xa7],&uStack_8,&uStack_10);
      uVar3 = uStack_18._4_2_ & 0xf000;
      uStack_18._0_6_ = CONCAT24(uVar3 | (ushort)puVar13[0xa5] & 0xfff,(undefined4)uStack_18);
      FUN_0014a9c0(param_1,param_2,aiStack_220,puVar13 + 0x84,puVar13[2],param_4);
      uVar11 = puVar13[0xb3];
    }
    uVar6 = uVar11;
    if ((int)uVar11 < 0) {
      uVar6 = uVar11 + 0x7f;
    }
    if (((uVar5 & 0x20) == 0) || (param_4 != 0)) {
      unaff_s6 = (long)(int)uVar11 << 0x18 |
                 (long)(int)puVar13[0xb2] << 0x10 |
                 (long)(int)puVar13[0xb0] | (long)(int)puVar13[0xb1] << 8;
    }
    else {
      uVar11 = puVar13[2];
      uVar14 = 0;
      if (uVar11 != 0) {
        puVar9 = auStack_2a0;
        puVar4 = puVar13;
        do {
          uVar14 = uVar14 + 1;
          *puVar9 = (long)(int)puVar4[0x46] << 0x10 |
                    (long)(int)puVar4[0x44] | (long)(int)puVar4[0x45] << 8 |
                    (long)(int)(((int)uVar6 >> 7) * puVar4[0x47]) << 0x18;
          puVar9 = puVar9 + 1;
          puVar4 = puVar4 + 4;
        } while (uVar14 < uVar11);
      }
    }
    uVar8 = 1;
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        uVar8 = 3;
      }
      else if ((uVar2 - 3 < 2) && ((uVar5 & 0x38) == 0)) {
        uVar8 = 6;
      }
      else if (uVar2 == 6) {
        uVar8 = 5;
      }
      else {
        uVar8 = 4;
      }
    }
    if (param_4 == 0) {
      iVar17 = 4;
      param_3[2] = uVar8 | 8 | uVar19 << 6;
      param_3[3] = 0;
      param_3[4] = *(ulong *)(puVar13 + 0xaa);
      param_3[5] = 0x47;
      param_3[6] = *(ulong *)(puVar13 + 0xac);
      param_3[7] = 0x42;
      if ((uVar5 & 0x20) == 0) {
        if (uVar8 == 6) {
          param_3[8] = unaff_s6;
          param_3[9] = 1;
          iVar17 = 7;
          param_3[10] = (long)(int)puVar13[0xa6] << 0x20 |
                        (long)aiStack_120[0] | (long)aiStack_120[1] << 0x10;
          param_3[0xb] = 4;
          param_3[0xc] = (long)(int)puVar13[0xa6] << 0x20 |
                         (long)iStack_f0 | (long)iStack_ec << 0x10;
          param_3[0xd] = 4;
        }
        else {
          iVar17 = 5;
          param_3[8] = unaff_s6;
          param_3[9] = 1;
          uVar5 = 0;
          if (puVar13[2] != 0) {
            piVar10 = aiStack_120;
            puVar9 = param_3 + 10;
            do {
              uVar5 = uVar5 + 1;
              iVar17 = iVar17 + 1;
              *puVar9 = (long)(int)puVar13[0xa6] << 0x20 | (long)*piVar10 | (long)piVar10[1] << 0x10
              ;
              puVar9[1] = 4;
              piVar10 = piVar10 + 4;
              puVar9 = puVar9 + 2;
            } while (uVar5 < puVar13[2]);
          }
        }
      }
      else {
        uVar5 = 0;
        if (puVar13[2] != 0) {
          puVar9 = auStack_2a0;
          puVar16 = param_3 + 8;
          piVar10 = aiStack_120;
          do {
            iVar18 = iVar17 + 1;
            uVar5 = uVar5 + 1;
            iVar17 = iVar17 + 2;
            *puVar16 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar16[1] = 1;
            puVar16 = puVar16 + 4;
            param_3[iVar18 * 2] =
                 (long)(int)puVar13[0xa6] << 0x20 | (long)*piVar10 | (long)piVar10[1] << 0x10;
            (param_3 + iVar18 * 2)[1] = 4;
            piVar10 = piVar10 + 4;
          } while (uVar5 < puVar13[2]);
        }
      }
    }
    else {
      if (uStack_10 != 0) {
        param_3[2] = uStack_10;
        iVar18 = 2;
        param_3[3] = 6;
      }
      param_3[iVar18 * 2] = uVar8 | 0x10 | uVar19 << 6 | 0x100;
      (param_3 + iVar18 * 2)[1] = 0;
      param_3[(iVar18 + 1) * 2] = *(ulong *)(puVar13 + 0xaa);
      (param_3 + (iVar18 + 1) * 2)[1] = 0x47;
      param_3[(iVar18 + 2) * 2] = *(ulong *)(puVar13 + 0xac);
      (param_3 + (iVar18 + 2) * 2)[1] = 0x42;
      iVar17 = iVar18 + 10;
      param_3[(iVar18 + 3) * 2] = uStack_8;
      (param_3 + (iVar18 + 3) * 2)[1] = 6;
      param_3[(iVar18 + 4) * 2] = uStack_18;
      (param_3 + (iVar18 + 4) * 2)[1] = 0x14;
      param_3[(iVar18 + 5) * 2] = *(ulong *)(iVar15 + 0x48);
      (param_3 + (iVar18 + 5) * 2)[1] = 0x34;
      param_3[(iVar18 + 6) * 2] = *(ulong *)(iVar15 + 0x50);
      (param_3 + (iVar18 + 6) * 2)[1] = 0x36;
      param_3[(iVar18 + 7) * 2] = unaff_s6;
      (param_3 + (iVar18 + 7) * 2)[1] = 1;
      param_3[(iVar18 + 8) * 2] = *(ulong *)(iVar15 + 0x28);
      (param_3 + (iVar18 + 8) * 2)[1] = 0x3b;
      param_3[(iVar18 + 9) * 2] = *(ulong *)(iVar15 + 0x58);
      (param_3 + (iVar18 + 9) * 2)[1] = 8;
      if (uVar8 == 6) {
        param_3[iVar17 * 2] = (long)aiStack_220[0] | (long)aiStack_220[1] << 0x10;
        (param_3 + iVar17 * 2)[1] = 3;
        iVar17 = iVar18 + 0xe;
        param_3[(iVar18 + 0xb) * 2] =
             (long)(int)puVar13[0xa6] << 0x20 | (long)aiStack_120[0] | (long)aiStack_120[1] << 0x10;
        (param_3 + (iVar18 + 0xb) * 2)[1] = 4;
        param_3[(iVar18 + 0xc) * 2] = (long)iStack_1f0 | (long)iStack_1ec << 0x10;
        (param_3 + (iVar18 + 0xc) * 2)[1] = 3;
        param_3[(iVar18 + 0xd) * 2] =
             (long)(int)puVar13[0xa6] << 0x20 | (long)iStack_f0 | (long)iStack_ec << 0x10;
        (param_3 + (iVar18 + 0xd) * 2)[1] = 4;
      }
      else {
        uVar5 = 0;
        if (puVar13[2] != 0) {
          piVar12 = aiStack_220;
          puVar9 = param_3 + iVar17 * 2;
          piVar10 = aiStack_120;
          do {
            piVar1 = piVar12 + 1;
            iVar15 = iVar17 + 1;
            iVar18 = *piVar12;
            uVar5 = uVar5 + 1;
            iVar17 = iVar17 + 2;
            piVar12 = piVar12 + 4;
            *puVar9 = (long)iVar18 | (long)*piVar1 << 0x10;
            puVar9[1] = 3;
            puVar9 = puVar9 + 4;
            param_3[iVar15 * 2] =
                 (long)(int)puVar13[0xa6] << 0x20 | (long)*piVar10 | (long)piVar10[1] << 0x10;
            (param_3 + iVar15 * 2)[1] = 4;
            piVar10 = piVar10 + 4;
          } while (uVar5 < puVar13[2]);
        }
      }
    }
    *param_3 = (ulong)(iVar17 - 1) | 0x1000000000008000;
    param_3[1] = 0xe;
  }
  return iVar17;
}

// 0x0014b700  size 0x14c
void FUN_0014b700(undefined8 param_1,uint *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  int iVar7;
  
  piVar1 = *(int **)((int)param_1 + 4);
  iVar4 = 0;
  iVar7 = *piVar1 + piVar1[2] * 0x10;
  FUN_00145590();
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar6 = 0;
    if ((*param_2 & 0xc0) != 0) {
      if ((*param_2 & 1) != 0) {
        lVar6 = FUN_00158370(*(undefined1 *)((int)param_2 + 0x291),
                             *(undefined2 *)((int)param_2 + 0x292));
      }
      if ((lVar6 != 0) && (*(int *)((int)lVar6 + 0x60) == 0)) {
        iVar3 = FUN_001580f0(iVar7 + iVar4 * 0x10,lVar6);
        iVar4 = iVar4 + iVar3;
      }
      puVar5 = (uint *)(iVar7 + iVar4 * 0x10);
      lVar6 = FUN_0014af80(param_1,param_2,puVar5 + 4,lVar6);
      if (lVar6 != 0) {
        uVar2 = (uint)lVar6;
        *puVar5 = uVar2 | 0x10000000;
        puVar5[1] = 0;
        puVar5[2] = 0x13000000;
        iVar4 = iVar4 + uVar2 + 1;
        puVar5[3] = uVar2 | 0x50000000;
      }
    }
    param_2 = param_2 + 0xc4;
  }
  if (iVar4 != 0) {
    FUN_001456c0(param_1,iVar4);
  }
  return;
}

// 0x0014b850  size 0x8
void FUN_0014b850(undefined4 param_1)

{
  uGpffff89c4 = param_1;
  return;
}

// 0x0014b860  size 0x8
void FUN_0014b860(undefined4 param_1)

{
  uGpffff89c0 = param_1;
  return;
}

// 0x0014b870  size 0x8
undefined4 FUN_0014b870(void)

{
  return uGpffff89a0;
}

// 0x0014b880  size 0x10
void FUN_0014b880(undefined4 param_1)

{
  uGpffff89a0 = param_1;
  uGpffff89bc = 1;
  return;
}

// 0x0014b890  size 0xc
void FUN_0014b890(void)

{
  uGpffff89b8 = 1;
  return;
}

// 0x0014b8a0  size 0xc
undefined4 FUN_0014b8a0(undefined4 param_1)

{
  uGpffff89a8 = param_1;
  return uGpffff89a4;
}

// 0x0014b8b0  size 0x8
undefined4 FUN_0014b8b0(void)

{
  return uGpffff89a4;
}

// 0x0014b8c0  size 0x1f4
undefined4 FUN_0014b8c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  if (cGpffff8060 == '\x04') {
    if (pcGpffff89c4 == (code *)0x0) {
      uVar7 = 1;
    }
    else {
      lVar3 = (*pcGpffff89c4)();
      if (lVar3 != 0) {
        uVar7 = 1;
      }
    }
  }
  else if (cGpffff8060 == '\x03') {
    iVar2 = *piGpffff89b4;
    if (iVar2 != 0) {
      iVar5 = 0;
      do {
        FUN_00131f30(**(undefined4 **)(iVar2 + 0x14));
        iVar5 = iVar5 + 4;
        iVar2 = *(int *)((int)piGpffff89b4 + iVar5);
      } while (iVar2 != 0);
    }
    FUN_0014bb00();
    cGpffff8060 = '\x04';
  }
  else if (cGpffff8060 == '\x02') {
    if (pcGpffff89c0 == (code *)0x0) {
      cGpffff8060 = '\x03';
    }
    else {
      lVar3 = (*pcGpffff89c0)();
      if (lVar3 != 0) {
        cGpffff8060 = '\x03';
      }
    }
  }
  else if (cGpffff8060 == '\x01') {
    piVar4 = *(int **)(iGpffff89b0 + uGpffff89a4 * 4);
    while (((undefined4 *)*piVar4 != (undefined4 *)0x0 && (iGpffff89b8 == 0))) {
      FUN_00131fb0(*(undefined4 *)*piVar4);
      piVar4 = piVar4 + 2;
    }
    if (uGpffff89a8 != uGpffff89a4) {
      puVar6 = *(undefined4 **)(iGpffff89b0 + uGpffff89a4 * 4);
      puVar1 = (undefined4 *)*puVar6;
      while (puVar1 != (undefined4 *)0x0) {
        if ((puVar6[1] & 1 << (uGpffff89a8 & 0x1f)) != 0) {
          FUN_00131f30(*puVar1);
        }
        puVar6 = puVar6 + 2;
        puVar1 = (undefined4 *)*puVar6;
      }
      uGpffff89a4 = uGpffff89a8;
    }
    if (iGpffff89bc != 0) {
      cGpffff8060 = '\x02';
    }
    iGpffff89b8 = 0;
    iGpffff89bc = 0;
  }
  else {
    if (cGpffff8060 != '\0') {
      return 0;
    }
    FUN_0014bc60(piGpffff89b4);
    cGpffff8060 = '\x01';
  }
  return uVar7;
}

// 0x0014bac0  size 0x38
void FUN_0014bac0(int param_1)

{
  uGpffff8060 = 0;
  uGpffff89a0 = 0;
  uGpffff89a4 = *(undefined4 *)(param_1 + 4);
  uGpffff89a8 = *(undefined4 *)(param_1 + 4);
  uGpffff89ac = *(undefined4 *)(param_1 + 8);
  uGpffff89b0 = *(undefined4 *)(param_1 + 0xc);
  uGpffff89b4 = *(undefined4 *)(param_1 + 0x10);
  uGpffff89b8 = 0;
  uGpffff89bc = 0;
  return;
}

// 0x0014bb00  size 0xe0
void FUN_0014bb00(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (piRam0036f0a4 != (int *)0x0) {
    iVar4 = *piRam0036f0a4;
    if (iVar4 != 0) {
      iVar5 = 0;
      do {
        piVar1 = (int *)**(int **)(iVar4 + 0x14);
        piVar2 = (int *)piVar1[3];
        while (piVar3 = piVar2, piVar3 != (int *)0x0) {
          piVar2 = (int *)piVar3[1];
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3,1);
          }
        }
        FUN_001322a0(piVar1);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1,1);
        }
        iVar5 = iVar5 + 4;
        iVar4 = *(int *)((int)piRam0036f0a4 + iVar5);
      } while (iVar4 != 0);
    }
    if (iRam0036f08c != 0) {
      FUN_00100290();
    }
    piRam0036f0a4 = (int *)0x0;
    uRam0036f088 = 0;
    iRam0036f08c = 0;
  }
  return;
}

// 0x0014bbe0  size 0x40
long FUN_0014bbe0(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e168;
    FUN_00132030(param_1,0);
  }
  return param_1;
}

// 0x0014bc20  size 0x40
long FUN_0014bc20(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e158;
    FUN_001320d0(param_1,0);
  }
  return param_1;
}

// 0x0014bc60  size 0x1a8
void FUN_0014bc60(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  iVar5 = 0;
  iVar4 = 0;
  iGpffff8998 = 0;
  piVar6 = (int *)*param_1;
  if (piVar6 != (int *)0x0) {
    piVar3 = param_1;
    do {
      iVar2 = *piVar6;
      iVar5 = iVar5 + 1;
      piVar1 = piVar6 + 1;
      iVar4 = iVar4 + *piVar1;
      piVar3 = piVar3 + 1;
      piVar6 = (int *)*piVar3;
      iGpffff8998 = iGpffff8998 + *piVar1 * (iVar2 + 0xfU & 0xfffffff0);
    } while (piVar6 != (int *)0x0);
  }
  uVar8 = iVar5 * 0x14 + 0xfU & 0xfffffff0;
  uVar10 = iVar4 * 0x24 + 0xfU & 0xfffffff0;
  iGpffff8998 = iGpffff8998 + uVar8 + uVar10;
  puGpffff899c = (undefined4 *)FUN_00100680(iGpffff8998,uGpffff8994);
  puVar9 = (undefined4 *)((int)puGpffff899c + uVar8);
  iVar4 = (int)puVar9 + uVar10;
  piVar6 = (int *)*param_1;
  puVar7 = puGpffff899c;
  while (piVar6 != (int *)0x0) {
    if (puVar7 != (undefined4 *)0x0) {
      FUN_00132090(puVar7);
      *puVar7 = &DAT_0036e168;
    }
    *(undefined4 **)piVar6[5] = puVar7;
    uVar10 = 0;
    if (piVar6[1] != 0) {
      do {
        if (puVar9 != (undefined4 *)0x0) {
          FUN_00132130(puVar9,puVar7,iVar4,piVar6[2],piVar6[3],piVar6[4]);
          *puVar9 = &DAT_0036e158;
        }
        FUN_00132020(puVar7,puVar9);
        uVar10 = uVar10 + 1;
        puVar9 = puVar9 + 9;
        iVar4 = iVar4 + (*piVar6 + 0xfU & 0xfffffff0);
      } while (uVar10 < (uint)piVar6[1]);
    }
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 5;
    piVar6 = (int *)*param_1;
  }
  return;
}

// 0x0014be10  size 0x20
void FUN_0014be10(void)

{
  FUN_0014bb00();
  uGpffff8994 = 0;
  return;
}

// 0x0014be30  size 0x10
void FUN_0014be30(undefined4 param_1)

{
  uGpffff8994 = param_1;
  uGpffff8998 = 0;
  uGpffff899c = 0;
  return;
}

// 0x0014be40  size 0xb8
void FUN_0014be40(int param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  uint auStack_30 [2];
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)param_3;
  auStack_30[0] = 0x400c;
  iVar1 = iGpffff89d4 + param_1 * 0x14;
  if (param_3 != 0) {
    auStack_30[0] = 0x600c;
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    auStack_30[0] = auStack_30[0] | 0x100;
  }
  uStack_28 = 0;
  uStack_20 = 0;
  iStack_24 = iGpffff89d0 + *(int *)(iVar1 + 0x10);
  if ((auStack_30[0] & 0x100) == 0) {
    uStack_1c = *(undefined4 *)(iVar1 + 0x14);
    uStack_18 = 0;
  }
  else {
    uStack_1c = *(undefined4 *)(iVar1 + 0x20);
    uStack_18 = *(undefined4 *)(iVar1 + 0x14);
  }
  uStack_14 = 0;
  uStack_10 = param_2;
  uStack_c = param_4;
  FUN_00136a80(auStack_30);
  return;
}

// 0x0014bf00  size 0xd4
void FUN_0014bf00(int param_1,undefined4 param_2,long param_3,undefined4 param_4,long param_5,
                 int param_6)

{
  int iVar1;
  uint auStack_30 [2];
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_20 = (undefined4)param_5;
  uStack_8 = (undefined4)param_3;
  auStack_30[0] = 0x4824;
  iVar1 = iGpffff89d4 + param_1 * 0x14;
  if (param_3 != 0) {
    auStack_30[0] = 0x6824;
  }
  if (param_5 != 0) {
    auStack_30[0] = auStack_30[0] | 0x80;
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    auStack_30[0] = auStack_30[0] | 0x100;
  }
  uStack_28 = 0;
  iStack_24 = iGpffff89d0 + *(int *)(iVar1 + 0x10);
  if ((auStack_30[0] & 0x100) == 0) {
    if (param_6 == 0) {
      param_6 = *(int *)(iVar1 + 0x14);
    }
    uStack_18 = 0;
    iStack_1c = param_6;
  }
  else {
    iStack_1c = *(int *)(iVar1 + 0x20);
    uStack_18 = *(undefined4 *)(iVar1 + 0x14);
  }
  uStack_14 = 0;
  uStack_10 = param_2;
  uStack_c = param_4;
  FUN_00136a80(auStack_30);
  return;
}

// 0x0014bfe0  size 0x7c
uint FUN_0014bfe0(uint param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 <= param_2) {
    iVar4 = iGpffff89d4 + param_1 * 0x14;
    uVar1 = uVar3;
    do {
      uVar3 = *(uint *)(iVar4 + 0x20);
      if (uVar3 == 0) {
        uVar2 = *(uint *)(iVar4 + 0x14);
      }
      else {
        uVar2 = uVar3;
      }
      if (uVar1 < uVar2) {
        if (uVar3 == 0) {
          uVar3 = *(uint *)(iVar4 + 0x14);
        }
      }
      else {
        uVar3 = uVar1;
      }
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 0x14;
      uVar1 = uVar3;
    } while (param_1 <= param_2);
  }
  if ((uVar3 != 0) && (param_3 != 0)) {
    uVar3 = uVar3 + 0x7ff & 0xfffff800;
  }
  return uVar3;
}

