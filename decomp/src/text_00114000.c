// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00114000 - 0x00118000
#include "ghidra_types.h"

// 0x00114008  size 0x148
undefined8 maybe_sceSifCmdIntrHandler(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  code *pcVar9;
  undefined4 auStack_a0 [2];
  uint uStack_98;
  
  pbVar8 = pbRam00371058;
  puVar6 = auStack_a0;
  if (*pbRam00371058 == 0) {
    return 0;
  }
  iVar7 = (int)(*pbRam00371058 + 0xf) >> 4;
  *pbRam00371058 = 0;
  if (iVar7 != 0) {
    do {
      uVar1 = *(undefined4 *)pbVar8;
      uVar3 = *(undefined4 *)(pbVar8 + 4);
      uVar4 = *(undefined4 *)(pbVar8 + 8);
      uVar5 = *(undefined4 *)(pbVar8 + 0xc);
      iVar7 = iVar7 + -1;
      pbVar8 = pbVar8 + 0x10;
      *puVar6 = uVar1;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar6 = puVar6 + 4;
    } while (iVar7 != 0);
  }
  isceSifSetDChain();
  if ((int)uStack_98 < 0) {
    if (iRam00371068 <= (int)(uStack_98 & 0x7fffffff)) goto LAB_00114130;
    iVar7 = (uStack_98 & 0x7fffffff) * 0xc;
    pcVar9 = *(code **)(iVar7 + iRam00371064);
    if (pcVar9 == (code *)0x0) goto LAB_00114130;
    iVar2 = iRam00371064;
  }
  else {
    if (iRam00371070 <= (int)uStack_98) goto LAB_00114130;
    iVar7 = uStack_98 * 0xc;
    pcVar9 = *(code **)(iVar7 + iRam0037106c);
    if (pcVar9 == (code *)0x0) goto LAB_00114130;
    iVar2 = iRam0037106c;
  }
  (*pcVar9)(auStack_a0,*(undefined4 *)(iVar7 + iVar2 + 4));
LAB_00114130:
  SYNC(0);
  EI();
  return 0;
}

// 0x00114150  size 0xac
/* WARNING: Instruction at (ram,0x001141a4) overlaps instruction at (ram,0x001141a0)
    */

void sceSifWriteBackDCache(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (0 < param_2) {
    uVar1 = param_1 & 0xffffffc0;
    uVar3 = (((param_1 + (int)param_2) - 1 & 0xffffffc0) - uVar1 >> 6) + 1;
    uVar2 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    if (uVar2 != 0) {
      do {
        SYNC(0);
        cacheOp(0x18,uVar1);
        SYNC(0);
        uVar2 = uVar2 - 1;
        uVar1 = uVar1 + 0x40;
      } while (0 < (int)uVar2);
    }
    if (uVar3 != 0) {
      do {
        uVar3 = uVar3 - 1;
        SYNC(0);
        cacheOp(0x18,uVar1);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x40);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x80);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0xc0);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x100);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x140);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x180);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x1c0);
        SYNC(0);
        uVar1 = uVar1 + 0x200;
      } while (0 < (int)uVar3);
    }
  }
  return;
}

// 0x00114200  size 0x19c
void sceSifInitRpc(void)

{
  long lVar1;
  
  DIntr();
  if (DAT_00306af0 != 0) {
    EIntr();
    return;
  }
  DAT_00306af0 = 1;
  EIntr();
  sceSifInitCmd();
  DIntr();
  uRam00372aa0 = 0x20;
  uRam00372a80 = 1;
  puRam00372a94 = &DAT_20371a80;
  puRam00372a84 = &DAT_20371280;
  puRam00372a9c = &DAT_20372280;
  uRam00372a88 = 0x20;
  uRam00372a8c = 0;
  uRam00372a90 = 0;
  uRam00372a98 = 0x20;
  uRam00372aa4 = 0;
  libkernl_sub_00113d88(0xffffffff80000008,0x114500,0x372a80);
  libkernl_sub_00113d88(0xffffffff80000009,0x1148c8,0x372a80);
  libkernl_sub_00113d88(0xffffffff8000000a,0x114ad8,0x372a80);
  libkernl_sub_00113d88(0xffffffff8000000c,0x114610,0x372a80);
  EIntr();
  lVar1 = sceSifGetReg(0xffffffff80000002);
  if (lVar1 != 0) {
    return;
  }
  uRam003712cc = 1;
  sceSifSendCmd(0xffffffff80000002,0x3712c0,0x10,0,0,0);
  do {
    lVar1 = libkernl_sub_00113a58(0);
  } while (lVar1 == 0);
  sceSifSetReg(0xffffffff80000002,1);
  return;
}

// 0x001143a0  size 0x24
void sceSifExitRpc(void)

{
  sceSifExitCmd();
  DAT_00306af0 = 0;
  return;
}

// 0x001143c8  size 0xa8
int libkernl_sub_001143c8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DIntr();
  iVar1 = 0;
  iVar3 = param_1[1];
  if (0 < param_1[2]) {
    do {
      if ((*(uint *)(iVar3 + 0x10) & 1) == 0) {
        *(uint *)(iVar3 + 0x10) = iVar1 << 0x10 | 5;
        iVar1 = *param_1;
        iVar2 = iVar1 + 1;
        *param_1 = iVar2;
        if (iVar2 == 1) {
          iVar2 = 1;
          *param_1 = iVar1 + 2;
        }
        *(int *)(iVar3 + 0x14) = iVar3;
        *(int *)(iVar3 + 0x18) = iVar2;
        EIntr();
        return iVar3;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar1 < param_1[2]);
  }
  EIntr();
  return 0;
}

// 0x00114470  size 0x1c
void libkernl_sub_00114470(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}

// 0x00114490  size 0x30
int libkernl_sub_00114490(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24) % *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) == 0) {
    trap(7);
  }
  *(int *)(param_1 + 0x24) = iVar1 + 1;
  return *(int *)(param_1 + 0x14) + iVar1 * 0x40;
}

// 0x001144c0  size 0x40
int libkernl_sub_001144c0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x20) <= param_2)) {
    iVar1 = libkernl_sub_00114490();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 0x40;
  }
  return iVar1;
}

// 0x00114500  size 0xcc
void libkernl_sub_00114500(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0x8000000a) {
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar3[7] == 0) {
      iVar2 = puVar3[2];
      goto LAB_00114598;
    }
    (*(code *)puVar3[7])(puVar3[8]);
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
    if (uVar1 < 0x8000000b) {
      if (uVar1 != 0x80000009) {
        iVar2 = puVar3[2];
        goto LAB_00114598;
      }
      puVar3[9] = *(undefined4 *)(param_1 + 0x24);
      puVar3[5] = *(undefined4 *)(param_1 + 0x28);
    }
  }
  iVar2 = puVar3[2];
LAB_00114598:
  if (-1 < iVar2) {
    iSignalSema();
  }
  libkernl_sub_00114470(*puVar3);
  *puVar3 = 0;
  return;
}

// 0x001145d0  size 0x40
undefined4 libkernl_sub_001145d0(void)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 in_a3;
  
  iVar3 = (int)in_a3;
  lVar1 = isceSifSendCmd(0xffffffff80000008,in_a3,0x40,*(undefined4 *)(iVar3 + 0x24),
                         *(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x2c));
  uVar2 = 0x800;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

// 0x00114610  size 0xd0
void libkernl_sub_00114610(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x10) & 4) == 0) {
    uVar2 = libkernl_sub_00114490(param_2);
  }
  else {
    uVar2 = libkernl_sub_001144c0(param_2,*(uint *)(param_1 + 0x10) >> 0x10);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar4 = (int)uVar2;
  *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar4 + 0x1c) = uVar1;
  *(undefined4 *)(iVar4 + 0x20) = 0x8000000c;
  *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  lVar3 = isceSifSendCmd(0xffffffff80000008,uVar2,0x40,*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  if (lVar3 == 0) {
    libkernl_sub_0011c588(0x800,0x1145d0,uVar2);
    return;
  }
  return;
}

// 0x001146e0  size 0x158
undefined4
libkernl_sub_001146e0
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,ulong param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  lVar3 = libkernl_sub_001143c8(0x372a80);
  uVar2 = 0xffffffff;
  if (lVar3 != 0) {
    iVar5 = (int)lVar3;
    iVar1 = *(int *)(iVar5 + 0x18);
    *param_1 = iVar5;
    param_1[1] = iVar1;
    *(undefined4 *)(iVar5 + 0x20) = param_2;
    *(undefined4 *)(iVar5 + 0x24) = param_3;
    *(undefined4 *)(iVar5 + 0x28) = param_4;
    *(int *)(iVar5 + 0x14) = iVar5;
    *(int **)(iVar5 + 0x1c) = param_1;
    if ((param_5 & 1) == 0) {
      uStack_88 = 0;
      uStack_8c = 1;
      lVar4 = CreateSema(auStack_90);
      param_1[2] = (int)lVar4;
      if (lVar4 < 0) {
        libkernl_sub_00114470(lVar3);
        uVar2 = 0xfffffffd;
      }
      else {
        lVar4 = sceSifSendCmd(0xffffffff8000000c,lVar3,0x40,0,0,0);
        if (lVar4 == 0) {
          libkernl_sub_00114470(lVar3);
          DeleteSema(param_1[2]);
          uVar2 = 0xfffffffe;
        }
        else {
          WaitSema(param_1[2]);
          DeleteSema(param_1[2]);
          uVar2 = 0;
        }
      }
    }
    else {
      param_1[2] = -1;
      lVar4 = sceSifSendCmd(0xffffffff8000000c,lVar3,0x40,0,0,0);
      uVar2 = 0;
      if (lVar4 == 0) {
        libkernl_sub_00114470(lVar3);
        uVar2 = 0xfffffffe;
      }
    }
  }
  return uVar2;
}

// 0x00114838  size 0x4c
int * libkernl_sub_00114838(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    piVar2 = *(int **)(iVar3 + 8);
    while( true ) {
      if (piVar2 == (int *)0x0) {
        iVar3 = *(int *)(iVar3 + 0x14);
      }
      else {
        iVar1 = *piVar2;
        while( true ) {
          if (iVar1 == param_1) {
            return piVar2;
          }
          piVar2 = (int *)piVar2[0xe];
          if (piVar2 == (int *)0x0) break;
          iVar1 = *piVar2;
        }
        iVar3 = *(int *)(iVar3 + 0x14);
      }
      if (iVar3 == 0) break;
      piVar2 = *(int **)(iVar3 + 8);
    }
  }
  return (int *)0x0;
}

// 0x00114888  size 0x40
undefined4 libkernl_sub_00114888(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 in_a3;
  
  lVar1 = isceSifSendCmd(0xffffffff80000008,in_a3,0x40,0,0,0);
  uVar2 = 0x800;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

// 0x001148c8  size 0xcc
void libkernl_sub_001148c8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = libkernl_sub_00114490(param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = (int)uVar2;
  *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar4 + 0x14) = uVar1;
  *(undefined4 *)(iVar4 + 0x20) = 0x80000009;
  lVar3 = libkernl_sub_00114838(*(undefined4 *)(param_1 + 0x20),param_2);
  if (lVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x24) = 0;
    *(undefined4 *)(iVar4 + 0x28) = 0;
  }
  else {
    *(int *)(iVar4 + 0x24) = (int)lVar3;
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)((int)lVar3 + 8);
  }
  lVar3 = isceSifSendCmd(0xffffffff80000008,uVar2,0x40,0,0,0);
  if (lVar3 == 0) {
    libkernl_sub_0011c588(0x800,0x114888,uVar2);
    return;
  }
  return;
}

// 0x00114998  size 0x140
undefined4 sceSifBindRpc(int *param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  param_1[4] = 0;
  param_1[9] = 0;
  lVar3 = libkernl_sub_001143c8(0x372a80);
  uVar2 = 0xffffffff;
  if (lVar3 != 0) {
    iVar5 = (int)lVar3;
    iVar1 = *(int *)(iVar5 + 0x18);
    *param_1 = iVar5;
    param_1[1] = iVar1;
    *(undefined4 *)(iVar5 + 0x20) = param_2;
    *(int *)(iVar5 + 0x14) = iVar5;
    *(int **)(iVar5 + 0x1c) = param_1;
    if ((param_3 & 1) == 0) {
      uStack_68 = 0;
      uStack_6c = 1;
      lVar4 = CreateSema(auStack_70);
      param_1[2] = (int)lVar4;
      if (lVar4 < 0) {
        libkernl_sub_00114470(lVar3);
        uVar2 = 0xfffffffd;
      }
      else {
        lVar4 = sceSifSendCmd(0xffffffff80000009,lVar3,0x40,0,0,0);
        if (lVar4 == 0) {
          libkernl_sub_00114470(lVar3);
          DeleteSema(param_1[2]);
          uVar2 = 0xfffffffe;
        }
        else {
          WaitSema(param_1[2]);
          DeleteSema(param_1[2]);
          uVar2 = 0;
        }
      }
    }
    else {
      param_1[2] = -1;
      lVar4 = sceSifSendCmd(0xffffffff80000009,lVar3,0x40,0,0,0);
      uVar2 = 0;
      if (lVar4 == 0) {
        libkernl_sub_00114470(lVar3);
        uVar2 = 0xfffffffe;
      }
    }
  }
  return uVar2;
}

// 0x00114b68  size 0x1f4
/* 113 callers */

undefined4
sceSifCallRpc(int *param_1,undefined4 param_2,ulong param_3,long param_4,long param_5,long param_6,
             long param_7,long param_8,int param_9)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  
  lVar2 = libkernl_sub_001143c8(0x372a80);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  iVar4 = (int)lVar2;
  iVar1 = *(int *)(iVar4 + 0x18);
  param_1[8] = param_9;
  param_1[1] = iVar1;
  *param_1 = iVar4;
  param_1[7] = (int)param_8;
  param_1[6] = (int)&_mips_gp0_value;
  *(undefined4 *)(iVar4 + 0x20) = param_2;
  *(int *)(iVar4 + 0x24) = (int)param_5;
  *(int *)(iVar4 + 0x28) = (int)param_6;
  *(int *)(iVar4 + 0x2c) = (int)param_7;
  *(int *)(iVar4 + 0x14) = iVar4;
  iVar1 = param_1[9];
  *(int **)(iVar4 + 0x1c) = param_1;
  *(int *)(iVar4 + 0x34) = iVar1;
  if ((param_3 & 2) == 0) {
    if (param_4 == param_6) {
      if (param_7 <= param_5) {
        param_7 = param_5;
      }
      sceSifWriteBackDCache(param_4,param_7);
    }
    else {
      if (0 < param_5) {
        sceSifWriteBackDCache(param_4,param_5);
      }
      if (0 < param_7) {
        sceSifWriteBackDCache(param_6,param_7);
      }
    }
  }
  if ((param_3 & 1) == 0) {
    uStack_b8 = 0;
    uStack_bc = 1;
    lVar3 = CreateSema(auStack_c0);
    param_1[2] = (int)lVar3;
    if (lVar3 < 0) {
      libkernl_sub_00114470(lVar2);
      return 0xfffffffd;
    }
    *(undefined4 *)(iVar4 + 0x30) = 1;
    lVar3 = sceSifSendCmd(0xffffffff8000000a,lVar2,0x40,param_4,param_1[5],param_5);
    if (lVar3 != 0) {
      WaitSema(param_1[2]);
      DeleteSema(param_1[2]);
      return 0;
    }
    DeleteSema(param_1[2]);
  }
  else {
    if (param_8 == 0) {
      *(undefined4 *)(iVar4 + 0x30) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x30) = 1;
    }
    param_1[2] = -1;
    lVar3 = sceSifSendCmd(0xffffffff8000000a,lVar2,0x40,param_4,param_1[5],param_5);
    if (lVar3 != 0) {
      return 0;
    }
  }
  libkernl_sub_00114470(lVar2);
  return 0xfffffffe;
}

// 0x00114d60  size 0x3c
undefined4 sceSifCheckStatRpc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 == 0) || (param_1[1] != *(int *)(iVar1 + 0x18))) ||
     ((*(uint *)(iVar1 + 0x10) & 1) == 0)) {
    return 0;
  }
  return 1;
}

// 0x00114da0  size 0x94
void sceSifSetRpcQueue(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  DIntr();
  *param_1 = param_2;
  param_1[1] = 0;
  puVar2 = puRam00372aa8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puRam00372aa8 = param_1;
  }
  else {
    iVar1 = puVar2[5];
    if (puVar2[5] == 0) {
      puVar2[5] = param_1;
    }
    else {
      do {
        iVar3 = iVar1;
        iVar1 = *(int *)(iVar3 + 0x14);
      } while (iVar1 != 0);
      *(undefined4 **)(iVar3 + 0x14) = param_1;
    }
  }
  EIntr();
  return;
}

// 0x00114e38  size 0xd0
void sceSifRegisterRpc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  DIntr();
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *param_1 = param_2;
  iVar2 = *(int *)(param_7 + 8);
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[0x10] = param_7;
  if (iVar2 == 0) {
    *(undefined4 **)(param_7 + 8) = param_1;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x38);
    if (*(int *)(iVar2 + 0x38) == 0) {
      *(undefined4 **)(iVar2 + 0x38) = param_1;
    }
    else {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 0x38);
      } while (iVar1 != 0);
      *(undefined4 **)(iVar2 + 0x38) = param_1;
    }
  }
  EIntr();
  return;
}

// 0x00114f08  size 0x94
int maybe_sceSifRemoveRpc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  DIntr();
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 == param_1) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar3 + 0x38);
  }
  else if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x38);
    if (*(int *)(iVar3 + 0x38) == param_1) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
    }
    else {
      do {
        iVar3 = iVar1;
        if (iVar3 == 0) goto LAB_00114f78;
        iVar1 = *(int *)(iVar3 + 0x38);
      } while (*(int *)(iVar3 + 0x38) != param_1);
      uVar2 = *(undefined4 *)(param_1 + 0x38);
    }
    *(undefined4 *)(iVar3 + 0x38) = uVar2;
  }
LAB_00114f78:
  EIntr();
  return iVar3;
}

// 0x00114fa0  size 0x90
int maybe_sceSifRemoveRpcQueue(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  DIntr();
  iVar3 = iRam00372aa8;
  if (iRam00372aa8 == param_1) {
    iRam00372aa8 = *(int *)(iRam00372aa8 + 0x14);
  }
  else if (iRam00372aa8 != 0) {
    iVar1 = *(int *)(iRam00372aa8 + 0x14);
    if (*(int *)(iRam00372aa8 + 0x14) == param_1) {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
    }
    else {
      do {
        iVar3 = iVar1;
        if (iVar3 == 0) goto LAB_00115010;
        iVar1 = *(int *)(iVar3 + 0x14);
      } while (*(int *)(iVar3 + 0x14) != param_1);
      uVar2 = *(undefined4 *)(param_1 + 0x14);
    }
    *(undefined4 *)(iVar3 + 0x14) = uVar2;
  }
LAB_00115010:
  EIntr();
  return iVar3;
}

// 0x00115030  size 0x58
int sceSifGetNextRequest(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  DIntr();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  EIntr();
  return iVar1;
}

// 0x00115088  size 0x1c4
/* WARNING: Removing unreachable block (ram,0x0011522c) */

void sceSifExecRequest(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int aiStack_80 [8];
  
  iVar5 = 0;
  lVar2 = (**(code **)(param_1 + 4))
                    (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
  if (lVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  if (0 < *(int *)(param_1 + 0xc)) {
    sceSifWriteBackDCache(*(undefined4 *)(param_1 + 8));
  }
  if (0 < iVar5) {
    sceSifWriteBackDCache(lVar2,iVar5);
  }
  DIntr();
  if ((*(uint *)(param_1 + 0x34) & 4) == 0) {
    uVar3 = libkernl_sub_00114490(0x372a80,*(uint *)(param_1 + 0x34) >> 0x10);
  }
  else {
    uVar3 = libkernl_sub_001144c0(0x372a80);
  }
  EIntr();
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar6 = (int)uVar3;
  *(undefined4 *)(iVar6 + 0x20) = 0x8000000a;
  *(undefined4 *)(iVar6 + 0x1c) = uVar1;
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(iVar6 + 0x18) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 0;
    if (0 < iVar5) {
      aiStack_80[1] = *(undefined4 *)(param_1 + 0x28);
      aiStack_80[0] = (int)lVar2;
      aiStack_80[3] = 0;
      aiStack_80[2] = iVar5;
    }
    uVar7 = (uint)(0 < iVar5);
    iVar5 = *(int *)(param_1 + 0x20);
    aiStack_80[uVar7 * 4] = iVar6;
    aiStack_80[uVar7 * 4 + 1] = iVar5;
    aiStack_80[uVar7 * 4 + 2] = 0x40;
    aiStack_80[uVar7 * 4 + 3] = 0;
    while (lVar2 = sceSifSetDma(aiStack_80,uVar7 + 1), lVar2 == 0) {
      iVar5 = 0x100000;
      do {
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
  }
  else {
    do {
      lVar4 = sceSifSendCmd(0xffffffff80000008,uVar3,0x40,lVar2,*(undefined4 *)(param_1 + 0x28),
                            iVar5);
    } while (lVar4 == 0);
  }
  return;
}

// 0x00115250  size 0x3c
void sceSifRpcLoop(undefined8 param_1)

{
  long lVar1;
  
  do {
    while (lVar1 = sceSifGetNextRequest(param_1), lVar1 == 0) {
      SleepThread();
    }
    sceSifExecRequest(lVar1);
  } while( true );
}

// 0x00115290  size 0x5c
void libkernl_sub_00115290(void)

{
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  
  if (DAT_00306b88 == -1) {
    uStack_2c = 0;
    uStack_3c = 1;
    uStack_38 = 1;
    DAT_00306b88 = CreateSema(auStack_40);
    DAT_00306b8c = CreateSema(auStack_40);
  }
  return;
}

// 0x001152f0  size 0x88
uint libkernl_sub_001152f0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  libkernl_sub_00115290();
  WaitSema(DAT_00306b88);
  uVar1 = DAT_00306b88;
  uVar3 = 0x374000;
  iVar2 = iRam00374004;
  while( true ) {
    if (iVar2 == 0) {
      *(undefined4 *)(uVar3 + 4) = 0x10000000;
      SignalSema(uVar1);
      return uVar3;
    }
    if (0x3741ff < uVar3 + 0x10) break;
    iVar2 = *(int *)(uVar3 + 0x14);
    uVar3 = uVar3 + 0x10;
  }
  SignalSema(DAT_00306b88);
  return 0;
}

// 0x00115378  size 0x6c
int libkernl_sub_00115378(ulong param_1)

{
  int iVar1;
  
  libkernl_sub_00115290();
  WaitSema(DAT_00306b88);
  if (param_1 < 0x20) {
    iVar1 = (int)param_1 * 0x10 + 0x374000;
    SignalSema(DAT_00306b88);
  }
  else {
    SignalSema(DAT_00306b88);
    iVar1 = 0;
  }
  return iVar1;
}

// 0x001153e8  size 0x3b0
void libkernl_sub_001153e8(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  int *piVar13;
  
  DAT_00306b78 = 0;
  if (DAT_00306b80 != 0) {
    DAT_00306b78 = *(int *)(param_1 + 0xc);
  }
  piVar13 = (int *)(DAT_00306b78 * 0x440 + 0x373780U | 0x20000000);
  iVar1 = *piVar13;
  iVar11 = piVar13[1];
  piVar4 = (int *)piVar13[2];
  if (-1 < iVar1) {
    memcpy(piVar4,piVar13 + 4,piVar13[3]);
  }
  switch(iVar11) {
  case 2:
    if (0 < piVar13[5]) {
      uVar10 = piVar13[7];
      iVar11 = 0;
      if (0 < piVar13[5]) {
        piVar4 = piVar13 + 9;
        do {
          puVar8 = (undefined1 *)((uVar10 | 0x20000000) + iVar11);
          iVar3 = *piVar4;
          puVar5 = (undefined1 *)(uVar10 + iVar11);
          iVar11 = iVar11 + 1;
          *puVar8 = (char)iVar3;
          *puVar5 = (char)iVar3;
          piVar4 = (int *)((int)(piVar13 + 9) + iVar11);
        } while (iVar11 < piVar13[5]);
      }
    }
    if (0 < piVar13[6]) {
      uVar10 = piVar13[8];
      iVar11 = 0;
      if (0 < piVar13[6]) {
        piVar4 = piVar13 + 0x19;
        do {
          puVar8 = (undefined1 *)((uVar10 | 0x20000000) + iVar11);
          iVar3 = *piVar4;
          puVar5 = (undefined1 *)(uVar10 + iVar11);
          iVar11 = iVar11 + 1;
          *puVar8 = (char)iVar3;
          *puVar5 = (char)iVar3;
          piVar4 = (int *)((int)(piVar13 + 0x19) + iVar11);
        } while (iVar11 < piVar13[6]);
        goto LAB_0011571c;
      }
    }
    break;
  case 0xb:
    if (*piVar4 < 1) goto LAB_0011571c;
    piVar4 = (int *)piVar13[5];
    piVar6 = piVar13 + 6;
    if (((uint)piVar4 & 7) == 0) {
      do {
        uVar7 = *(undefined8 *)(piVar6 + 2);
        uVar9 = *(undefined8 *)(piVar6 + 4);
        uVar12 = *(undefined8 *)(piVar6 + 6);
        *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
        *(undefined8 *)(piVar4 + 2) = uVar7;
        *(undefined8 *)(piVar4 + 4) = uVar9;
        *(undefined8 *)(piVar4 + 6) = uVar12;
        piVar6 = piVar6 + 8;
        piVar4 = piVar4 + 8;
      } while (piVar6 != piVar13 + 0x56);
    }
    else {
      do {
        uVar7 = *(undefined8 *)(piVar6 + 2);
        uVar9 = *(undefined8 *)(piVar6 + 4);
        uVar12 = *(undefined8 *)(piVar6 + 6);
        *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
        *(undefined8 *)(piVar4 + 2) = uVar7;
        *(undefined8 *)(piVar4 + 4) = uVar9;
        *(undefined8 *)(piVar4 + 6) = uVar12;
        piVar6 = piVar6 + 8;
        piVar4 = piVar4 + 8;
      } while (piVar6 != piVar13 + 0x56);
    }
    *piVar4 = *piVar6;
    break;
  case 0xc:
    puVar2 = (undefined8 *)piVar13[5];
    uVar7 = *(undefined8 *)(piVar13 + 8);
    uVar9 = *(undefined8 *)(piVar13 + 10);
    uVar12 = *(undefined8 *)(piVar13 + 0xc);
    *puVar2 = *(undefined8 *)(piVar13 + 6);
    puVar2[1] = uVar7;
    puVar2[2] = uVar9;
    puVar2[3] = uVar12;
    uVar7 = *(undefined8 *)(piVar13 + 0x10);
    uVar9 = *(undefined8 *)(piVar13 + 0x12);
    uVar12 = *(undefined8 *)(piVar13 + 0x14);
    puVar2[4] = *(undefined8 *)(piVar13 + 0xe);
    puVar2[5] = uVar7;
    puVar2[6] = uVar9;
    puVar2[7] = uVar12;
    goto LAB_0011571c;
  case 0x17:
  case 0x19:
  case 0x1a:
    uVar10 = piVar13[6];
    if (0x400 < uVar10) {
      uVar10 = 0x400;
    }
    memcpy(piVar13[5],piVar13 + 7,uVar10);
  }
LAB_0011571c:
  if (iVar1 < 0) {
    if (DAT_00306af8 == -iVar1) {
      DAT_00306af8 = -1;
    }
    else {
      iVar11 = 1;
      do {
        if (0x1f < iVar11) {
          return;
        }
        piVar4 = &DAT_00306af8 + iVar11;
        iVar11 = iVar11 + 1;
      } while (*piVar4 != -iVar1);
      *piVar4 = -1;
    }
  }
  else {
    iSignalSema();
  }
  return;
}

// 0x001157a0  size 0x4c
void libkernl_sub_001157a0(void)

{
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  
  if (DAT_00306b84 == -1) {
    uStack_2c = 0;
    uStack_3c = 1;
    uStack_38 = 1;
    DAT_00306b84 = CreateSema(auStack_40);
  }
  return;
}

// 0x001157f0  size 0x2c
undefined8 maybe_Fio_Lock(void)

{
  libkernl_sub_001157a0();
  WaitSema(DAT_00306b84);
  return 0;
}

// 0x00115820  size 0xc
void maybe_Fio_Unlock(void)

{
  SignalSema(DAT_00306b84);
  return;
}

// 0x001158d8  size 0x44
void libkernl_sub_001158d8(undefined8 param_1,undefined4 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(param_2[1]);
  }
  SYNC(0);
  EI();
  return;
}

// 0x00115920  size 0x204
/* WARNING: Removing unreachable block (ram,0x00115a4c) */

undefined4 maybe_Fio_Bind(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  sceSifInitRpc(0);
  uRam00374280 = 0;
  uRam00374284 = 0;
  lVar3 = DIntr();
  libkernl_sub_00113d88(0xffffffff80000011,0x1153e8,0x374240);
  libkernl_sub_00113d88(0xffffffff80000013,0x1158d8,0x374280);
  if (lVar3 != 0) {
    EIntr();
  }
  while( true ) {
    lVar3 = sceSifBindRpc(0x374200,0xffffffff80000001,0);
    if (lVar3 < 0) {
      return 0xffffffff;
    }
    iVar1 = 0x100000;
    if (iRam00374224 != 0) break;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  libkernl_sub_00115290();
  WaitSema(DAT_00306b88);
  uVar4 = 0x374000;
  do {
    *(undefined4 *)(uVar4 + 4) = 0;
    uVar4 = uVar4 + 0x10;
  } while (uVar4 < 0x374200);
  SignalSema(DAT_00306b88);
  uRam00372ac0 = 0x373780;
  uRam00372ac4 = 0x373bc0;
  lVar3 = sceSifCallRpc(0x374200,0xff,0,0x372ac0,8,0x373740,8,0);
  if (lVar3 < 0) {
    uVar2 = 0xfffeffff;
  }
  else {
    uRam00374228 = DAT_20373740;
    DAT_00306b7c = 1;
    uVar2 = 0;
    DAT_00306b80 = (uint)(DAT_20373744 == 2);
  }
                    /* WARNING: Read-only address (ram,0x20373740) is written */
                    /* WARNING: Read-only address (ram,0x20373744) is written */
  return uVar2;
}

// 0x00115b28  size 0x8c
bool libkernl_sub_00115b28(void)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  lVar1 = memcmp(0x374228,0x306acc,4);
  if (lVar1 != 0) {
    lVar1 = memcmp(0x374228,PTR_DAT_00306b90,4);
    if (lVar1 != 0) {
      lVar1 = memcmp(0x306acc,PTR_DAT_00306b90,4);
      bVar2 = lVar1 != 0;
    }
  }
  return bVar2;
}

// 0x00115bb8  size 0x34
undefined8 libkernl_sub_00115bb8(void)

{
  DAT_00306b7c = 0;
  memset(0x374228,0,4);
  return 0;
}

// 0x00115bf0  size 0x284
/* fileio cmd 0 */

int sceOpen(char *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_140 [4];
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_12c;
  int aiStack_120 [4];
  
  maybe_Fio_Lock(0);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
  }
  lVar4 = libkernl_sub_00115b28();
  if (lVar4 == 0) {
    lVar4 = libkernl_sub_001152f0();
    if (lVar4 == 0) {
      maybe_Fio_Unlock();
      iVar6 = -0x13;
    }
    else {
      cRam00372b14 = *param_1;
      iVar6 = 0;
      if (cRam00372b14 != '\0') {
        for (iVar6 = 1;
            (iVar6 < 0x400 &&
            (cVar1 = param_1[iVar6], *(char *)(iVar6 + 0x372b14) = cVar1, cVar1 != '\0'));
            iVar6 = iVar6 + 1) {
        }
      }
      if (iVar6 == 0x400) {
        uRam00372f13 = 0;
      }
      piVar7 = (int *)lVar4;
      iVar6 = (int)(piVar7 + -0xdd000) >> 4;
      uRam00372b0c = param_2 & 0x7fffffff;
      uStack_13c = 1;
      uStack_138 = 0;
      uStack_12c = 0;
      uRam00372b10 = param_3;
      iRam00372f14 = iVar6;
      uVar5 = CreateSema(auStack_140);
      uRam00372b00 = (undefined4)uVar5;
      uRam00372b08 = 4;
      piRam00372b04 = aiStack_120;
      lVar4 = sceSifCallRpc(0x374200,0,0,0x372b00,0x418,0x373740,4,0);
      iVar3 = DAT_20373740;
      if (lVar4 < 0) {
        DeleteSema(uVar5);
        maybe_Fio_Unlock();
        iVar6 = -0xb;
      }
      else {
        maybe_Fio_Unlock();
        if (iVar3 == 0) {
          DeleteSema(uVar5);
          iVar6 = -0xb;
        }
        else {
          WaitSema(uVar5);
          DeleteSema(uVar5);
          if (aiStack_120[0] < 0) {
            WaitSema(DAT_00306b88);
            piVar7[1] = 0;
            SignalSema(DAT_00306b88);
            iVar6 = aiStack_120[0];
          }
          else {
            WaitSema(DAT_00306b88);
            uVar2 = DAT_00306b88;
            piVar7[1] = piVar7[1] | param_2;
            *piVar7 = aiStack_120[0];
            SignalSema(uVar2);
          }
        }
      }
    }
  }
  else {
    maybe_Fio_Unlock();
    iVar6 = -0x10004;
  }
  return iVar6;
}

// 0x00115e78  size 0x17c
/* 1 */

int sceClose(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_7c;
  int aiStack_70 [4];
  
  lVar2 = libkernl_sub_00115378();
  maybe_Fio_Lock(1);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Unlock();
    aiStack_70[0] = -1;
  }
  else if ((lVar2 == 0) || (puVar4 = (undefined4 *)lVar2, puVar4[1] == 0)) {
    maybe_Fio_Unlock();
    aiStack_70[0] = -9;
  }
  else {
    uRam00372b0c = *puVar4;
    uStack_8c = 1;
    iRam00372b10 = (int)(puVar4 + -0xdd000) >> 4;
    uStack_88 = 0;
    uStack_7c = 0;
    uVar3 = CreateSema(auStack_90);
    piRam00372b04 = aiStack_70;
    uRam00372b00 = (undefined4)uVar3;
    uRam00372b08 = 4;
    lVar2 = sceSifCallRpc(0x374200,1,0,0x372b00,0x14,0x373740,4,0);
    if (lVar2 < 0) {
      DeleteSema(uVar3);
      maybe_Fio_Unlock();
      aiStack_70[0] = -0xb;
    }
    else {
      puVar4[1] = 0;
      iVar1 = DAT_20373740;
      maybe_Fio_Unlock();
      if (iVar1 == 0) {
        DeleteSema(uVar3);
        aiStack_70[0] = -0xb;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
        if (-1 < aiStack_70[0]) {
          aiStack_70[0] = 0;
        }
      }
    }
  }
  return aiStack_70[0];
}

// 0x00115ff8  size 0x234
/* 4 */

undefined4 sceLseek(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  undefined4 auStack_90 [4];
  
  lVar3 = libkernl_sub_00115378();
  maybe_Fio_Lock(4);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Unlock();
    uVar2 = 0xffffffff;
  }
  else {
    if (lVar3 != 0) {
      puVar7 = (undefined4 *)lVar3;
      uVar1 = puVar7[1];
      if (uVar1 != 0) {
        uRam00372b0c = *puVar7;
        iRam00372b18 = (int)(puVar7 + -0xdd000) >> 4;
        uStack_ac = 1;
        uStack_a8 = 0;
        uStack_9c = 0;
        uRam00372b10 = param_2;
        uRam00372b14 = param_3;
        uVar4 = CreateSema(auStack_b0);
        puRam00372b04 = auStack_90;
        uRam00372b08 = 4;
        iRam00372b00 = (int)uVar4;
        if ((uVar1 & 0x8000) != 0) {
          WaitSema(DAT_00306b8c);
          if (DAT_00306af8 == -1) {
            DAT_00306af8 = iRam00372b00;
            iRam00372b00 = -iRam00372b00;
          }
          else {
            iVar6 = 1;
            do {
              if (0x1f < iVar6) goto LAB_00116154;
              piVar5 = &DAT_00306af8 + iVar6;
              iVar6 = iVar6 + 1;
            } while (*piVar5 != -1);
            *piVar5 = iRam00372b00;
            iRam00372b00 = -iRam00372b00;
          }
LAB_00116154:
          SignalSema(DAT_00306b8c);
        }
        lVar3 = sceSifCallRpc(0x374200,4,0,0x372b00,0x1c,0x373740,4,0);
        iVar6 = DAT_20373740;
        if (lVar3 < 0) {
          DeleteSema(uVar4);
          maybe_Fio_Unlock();
          return 0xfffffff5;
        }
        maybe_Fio_Unlock();
        if (iVar6 == 0) {
          DeleteSema(uVar4);
          return 0xfffffff5;
        }
        if ((uVar1 & 0x8000) == 0) {
          WaitSema(uVar4);
          DeleteSema(uVar4);
          return auStack_90[0];
        }
        DeleteSema(uVar4);
        return 0;
      }
    }
    maybe_Fio_Unlock();
    uVar2 = 0xfffffff7;
  }
                    /* WARNING: Read-only address (ram,0x20373740) is written */
  return uVar2;
}

// 0x00116230  size 0x260
/* 2 */

undefined4 sceRead(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_bc;
  undefined4 auStack_b0 [4];
  
  lVar3 = libkernl_sub_00115378();
  maybe_Fio_Lock(2);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Unlock();
    uVar2 = 0xffffffff;
  }
  else {
    if (lVar3 != 0) {
      puVar7 = (undefined4 *)lVar3;
      uVar1 = puVar7[1];
      if (uVar1 != 0) {
        uRam00372b0c = *puVar7;
        uStack_cc = 1;
        iRam00372b1c = (int)(puVar7 + -0xdd000) >> 4;
        uRam00372b10 = (undefined4)param_2;
        uRam00372b14 = (undefined4)param_3;
        uStack_c8 = 0;
        uStack_bc = 0;
        uVar4 = CreateSema(auStack_d0);
        puRam00372b04 = auStack_b0;
        uRam00372b08 = 4;
        iRam00372b00 = (int)uVar4;
        if ((uVar1 & 0x8000) != 0) {
          WaitSema(DAT_00306b8c);
          if (DAT_00306af8 == -1) {
            DAT_00306af8 = iRam00372b00;
            iRam00372b00 = -iRam00372b00;
          }
          else {
            iVar6 = 1;
            do {
              if (0x1f < iVar6) goto LAB_00116388;
              piVar5 = &DAT_00306af8 + iVar6;
              iVar6 = iVar6 + 1;
            } while (*piVar5 != -1);
            *piVar5 = iRam00372b00;
            iRam00372b00 = -iRam00372b00;
          }
LAB_00116388:
          SignalSema(DAT_00306b8c);
        }
        if ((uVar1 & 0x20000000) == 0) {
          sceSifWriteBackDCache(param_2,param_3);
        }
        sceSifWriteBackDCache(0x372b00,0x20);
        lVar3 = sceSifCallRpc(0x374200,2,0,0x372b00,0x20,0x373740,4,0);
        iVar6 = DAT_20373740;
        if (lVar3 < 0) {
          DeleteSema(uVar4);
          maybe_Fio_Unlock();
          return 0xfffffff5;
        }
        maybe_Fio_Unlock();
        if (iVar6 == 0) {
          DeleteSema(uVar4);
          return 0xfffffff5;
        }
        if ((uVar1 & 0x8000) == 0) {
          WaitSema(uVar4);
          DeleteSema(uVar4);
          return auStack_b0[0];
        }
        DeleteSema(uVar4);
        return 0;
      }
    }
    maybe_Fio_Unlock();
    uVar2 = 0xfffffff7;
  }
                    /* WARNING: Read-only address (ram,0x20373740) is written */
  return uVar2;
}

// 0x00116490  size 0x2bc
/* 3 */

undefined4 sceWrite(undefined8 param_1,ulong param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_bc;
  undefined4 auStack_b0 [4];
  
  lVar4 = libkernl_sub_00115378();
  maybe_Fio_Lock(3);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Unlock();
    uVar2 = 0xffffffff;
  }
  else {
    if (lVar4 != 0) {
      puVar9 = (undefined4 *)lVar4;
      uVar1 = puVar9[1];
      if (uVar1 != 0) {
        uRam00372b0c = *puVar9;
        uStack_cc = 1;
        iRam00372b2c = (int)(puVar9 + -0xdd000) >> 4;
        uVar11 = (uint)param_2;
        uStack_c8 = 0;
        uStack_bc = 0;
        uRam00372b10 = uVar11;
        iRam00372b14 = param_3;
        uVar5 = CreateSema(auStack_d0);
        puRam00372b04 = auStack_b0;
        uRam00372b08 = 4;
        iRam00372b00 = (int)uVar5;
        if ((uVar1 & 0x8000) != 0) {
          WaitSema(DAT_00306b8c);
          if (DAT_00306af8 == -1) {
            DAT_00306af8 = iRam00372b00;
            iRam00372b00 = -iRam00372b00;
          }
          else {
            iVar10 = 1;
            do {
              if (0x1f < iVar10) goto LAB_001165f4;
              piVar7 = &DAT_00306af8 + iVar10;
              iVar10 = iVar10 + 1;
            } while (*piVar7 != -1);
            *piVar7 = iRam00372b00;
            iRam00372b00 = -iRam00372b00;
          }
LAB_001165f4:
          SignalSema(DAT_00306b8c);
        }
        if ((param_2 & 0xf) == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = (uVar11 & 0xfffffff0) - (uVar11 - 0x10);
        }
        if (param_3 < iVar10) {
          iVar10 = param_3;
        }
        if ((uVar1 & 0x20000000) == 0) {
          sceSifWriteBackDCache(param_2,param_3);
        }
        iVar8 = 0;
        iRam00372b18 = iVar10;
        if (0 < iVar10) {
          do {
            puVar3 = (undefined1 *)((uVar11 | 0x20000000) + iVar8);
            puVar6 = (undefined1 *)(iVar8 + 0x372b1c);
            iVar8 = iVar8 + 1;
            *puVar6 = *puVar3;
          } while (iVar8 < iVar10);
        }
        lVar4 = sceSifCallRpc(0x374200,3,0,0x372b00,0x30,0x373740,4,0);
        iVar10 = DAT_20373740;
        if (lVar4 < 0) {
          DeleteSema(uVar5);
          maybe_Fio_Unlock();
          return 0xfffffff5;
        }
        maybe_Fio_Unlock();
        if (iVar10 == 0) {
          DeleteSema(uVar5);
          return 0xfffffff5;
        }
        if ((uVar1 & 0x8000) == 0) {
          WaitSema(uVar5);
          DeleteSema(uVar5);
          return auStack_b0[0];
        }
        DeleteSema(uVar5);
        return 0;
      }
    }
    maybe_Fio_Unlock();
    uVar2 = 0xfffffff7;
  }
                    /* WARNING: Read-only address (ram,0x20373740) is written */
  return uVar2;
}

// 0x00116750  size 0x374
/* 5 */

undefined4 sceIoctl(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  undefined4 auStack_90 [4];
  
  lVar2 = libkernl_sub_00115378();
  maybe_Fio_Lock(5);
  puRam00372ac8 = param_3;
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
  }
  if ((lVar2 == 0) || (puVar9 = (undefined4 *)lVar2, puVar9[1] == 0)) {
    maybe_Fio_Unlock();
    return 0xfffffff7;
  }
  uRam00372f14 = 0;
  uRam00372f18 = 0;
  if (param_2 == 2) {
    *(undefined4 *)param_3 = *(undefined4 *)(DAT_00306b78 * 0x440 + 0x373790U | 0x20000000);
  }
  else if (param_2 < 3) {
    if (param_2 != 1) {
      uRam00372b0c = *puVar9;
LAB_001168f0:
      uRam00372b10 = (undefined4)param_2;
      if (param_3 == (undefined8 *)0x0) {
        uRam00372f1c = 0;
      }
      else {
        puVar6 = (undefined8 *)0x372b14;
        uRam00372f1c = 0x400;
        if ((((uint)param_3 | 0x372b14) & 7) == 0) {
          puVar1 = param_3 + 0x80;
          do {
            uVar3 = param_3[1];
            uVar7 = param_3[2];
            uVar8 = param_3[3];
            *puVar6 = *param_3;
            puVar6[1] = uVar3;
            puVar6[2] = uVar7;
            puVar6[3] = uVar8;
            param_3 = param_3 + 4;
            puVar6 = puVar6 + 4;
          } while (param_3 != puVar1);
        }
        else {
          puVar1 = param_3 + 0x80;
          do {
            uVar3 = param_3[1];
            uVar7 = param_3[2];
            uVar8 = param_3[3];
            *puVar6 = *param_3;
            puVar6[1] = uVar3;
            puVar6[2] = uVar7;
            puVar6[3] = uVar8;
            param_3 = param_3 + 4;
            puVar6 = puVar6 + 4;
          } while (param_3 != puVar1);
        }
      }
      uStack_a8 = 0;
      uStack_ac = 1;
      uStack_9c = 0;
      uVar3 = CreateSema(auStack_b0);
      uRam00372b08 = 4;
      uRam00372b00 = (undefined4)uVar3;
      puRam00372b04 = auStack_90;
      sceSifWriteBackDCache(0x372b00,0x420);
      lVar2 = sceSifCallRpc(0x374200,5,0,0x372b00,0x420,0x373740,4,0);
      iVar5 = DAT_20373740;
      if (lVar2 < 0) {
        DeleteSema(uVar3);
        maybe_Fio_Unlock();
        return 0xfffffff5;
      }
      maybe_Fio_Unlock();
      if (iVar5 == 0) {
        DeleteSema(uVar3);
        return 0xfffffff5;
      }
      WaitSema(uVar3);
      DeleteSema(uVar3);
      return auStack_90[0];
    }
    WaitSema(DAT_00306b8c);
    iVar5 = 0;
    if (DAT_00306af8 == -1) {
      piVar4 = &DAT_00306af8;
      iVar5 = 1;
      while ((piVar4 = piVar4 + 1, iVar5 < 0x20 && (*piVar4 == -1))) {
        iVar5 = iVar5 + 1;
      }
    }
    if (iVar5 == 0x20) {
      *(undefined4 *)puRam00372ac8 = 0;
    }
    else {
      *(undefined4 *)puRam00372ac8 = 1;
    }
    SignalSema(DAT_00306b8c);
  }
  else {
    if (param_2 != 3) {
      uRam00372b0c = *puVar9;
      goto LAB_001168f0;
    }
    *param_3 = *(undefined8 *)(DAT_00306b78 * 0x440 + 0x373790U | 0x20000000);
  }
  maybe_Fio_Unlock();
                    /* WARNING: Read-only address (ram,0x20373740) is written */
  return 0;
}

// 0x00116ac8  size 0x1dc
undefined4
libkernl_sub_00116ac8
          (undefined8 param_1,undefined4 param_2,long param_3,ulong param_4,undefined4 param_5,
          ulong param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_ac;
  undefined4 auStack_a0 [4];
  
  lVar2 = libkernl_sub_00115378();
  maybe_Fio_Lock(0x1a);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
  }
  if (lVar2 != 0) {
    if (((undefined4 *)lVar2)[1] != 0) {
      if ((0x400 < param_4) || (0x400 < param_6)) {
        maybe_Fio_Unlock();
        return 0xffffffea;
      }
      if (param_3 != 0) {
        memcpy(0x372b14,param_3,param_4);
      }
      uRam00372b0c = *(undefined4 *)lVar2;
      uRam00372f1c = (undefined4)param_4;
      uStack_bc = 1;
      uStack_b8 = 0;
      uStack_ac = 0;
      uRam00372b10 = param_2;
      uVar3 = CreateSema(auStack_c0);
      puRam00372b04 = auStack_a0;
      uRam00372f18 = (undefined4)param_6;
      uRam00372b08 = 4;
      uRam00372b00 = (undefined4)uVar3;
      uRam00372f14 = param_5;
      sceSifWriteBackDCache(0x372b00,0x420);
      lVar2 = sceSifCallRpc(0x374200,0x1a,0,0x372b00,0x420,0x373740,4,0);
      iVar1 = DAT_20373740;
      if (lVar2 < 0) {
        DeleteSema(uVar3);
        maybe_Fio_Unlock();
        return 0xfffffff5;
      }
      maybe_Fio_Unlock();
      if (iVar1 == 0) {
        DeleteSema(uVar3);
        return 0xfffffff5;
      }
      WaitSema(uVar3);
      DeleteSema(uVar3);
      return auStack_a0[0];
    }
  }
  maybe_Fio_Unlock();
                    /* WARNING: Read-only address (ram,0x20373740) is written */
  return 0xfffffff7;
}

// 0x00116ca8  size 0x1a4
undefined4 maybe_Fio_PathCmd(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_ac;
  undefined4 auStack_a0 [4];
  
  maybe_Fio_Lock(param_2);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b0c = *param_1;
  }
  else {
    cRam00372b0c = *param_1;
  }
  iVar4 = 0;
  if (cRam00372b0c != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_1[iVar4], *(char *)(iVar4 + 0x372b0c) = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    uRam00372f0b = 0;
    iVar4 = 0x3ff;
  }
  uStack_b8 = 0;
  uStack_bc = 1;
  uStack_ac = 0;
  uVar2 = CreateSema(auStack_c0);
  uRam00372b00 = (undefined4)uVar2;
  uRam00372b08 = 4;
  puRam00372b04 = auStack_a0;
  lVar3 = sceSifCallRpc(0x374200,param_2,0,0x372b00,iVar4 + 0xd,0x373740,4,0);
  iVar4 = DAT_20373740;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    maybe_Fio_Unlock();
    auStack_a0[0] = 0xfffffff5;
  }
  else {
    maybe_Fio_Unlock();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      auStack_a0[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return auStack_a0[0];
}

// 0x00116e50  size 0x1c
/* 6 */

void sceRemove(undefined8 param_1)

{
  maybe_Fio_PathCmd(param_1,6);
  return;
}

// 0x00116e70  size 0x1ac
/* 7 */

undefined4 sceMkdir(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_ac;
  undefined4 auStack_a0 [4];
  
  maybe_Fio_Lock(7);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b10 = *param_1;
  }
  else {
    cRam00372b10 = *param_1;
  }
  iVar4 = 0;
  if (cRam00372b10 != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_1[iVar4], *(char *)(iVar4 + 0x372b10) = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    uRam00372f0f = 0;
    iVar4 = 0x3ff;
  }
  uStack_bc = 1;
  uStack_b8 = 0;
  uStack_ac = 0;
  uRam00372b0c = param_2;
  uVar2 = CreateSema(auStack_c0);
  uRam00372b00 = (undefined4)uVar2;
  uRam00372b08 = 4;
  puRam00372b04 = auStack_a0;
  lVar3 = sceSifCallRpc(0x374200,7,0,0x372b00,iVar4 + 0x11,0x373740,4,0);
  iVar4 = DAT_20373740;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    maybe_Fio_Unlock();
    auStack_a0[0] = 0xfffffff5;
  }
  else {
    maybe_Fio_Unlock();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      auStack_a0[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return auStack_a0[0];
}

// 0x00117020  size 0x1c
/* 8 */

void sceRmdir(undefined8 param_1)

{
  maybe_Fio_PathCmd(param_1,8);
  return;
}

// 0x00117040  size 0x26c
/* 0xe */

undefined4 maybe_sceFormat(char *param_1,long param_2,int param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_ac;
  undefined4 auStack_a0 [4];
  
  maybe_Fio_Lock(0xe);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b0c = *param_1;
  }
  else {
    cRam00372b0c = *param_1;
  }
  iVar6 = 0;
  if (cRam00372b0c != '\0') {
    for (iVar6 = 1;
        (iVar6 < 0x400 &&
        (cVar1 = param_1[iVar6], *(char *)(iVar6 + 0x372b0c) = cVar1, cVar1 != '\0'));
        iVar6 = iVar6 + 1) {
    }
  }
  if (iVar6 == 0x400) {
    uRam00372f0b = 0;
  }
  if (param_2 == 0) {
    cRam00372f0c = '\0';
  }
  else {
    cRam00372f0c = *(char *)param_2;
    iVar6 = 0;
    if (cRam00372f0c != '\0') {
      for (iVar6 = 1;
          (iVar6 < 0x400 &&
          (cVar1 = ((char *)param_2)[iVar6], *(char *)(iVar6 + 0x372f0c) = cVar1, cVar1 != '\0'));
          iVar6 = iVar6 + 1) {
      }
    }
    if (iVar6 == 0x400) {
      uRam0037330b = 0;
    }
  }
  if (param_4 < 0x401) {
    iVar6 = 0;
    if (0 < param_4) {
      do {
        puVar2 = (undefined1 *)(param_3 + iVar6);
        puVar5 = (undefined1 *)(iVar6 + 0x37330c);
        iVar6 = iVar6 + 1;
        *puVar5 = *puVar2;
      } while (iVar6 < param_4);
    }
    uStack_bc = 1;
    uStack_b8 = 0;
    uStack_ac = 0;
    iRam0037370c = param_4;
    uVar3 = CreateSema(auStack_c0);
    uRam00372b08 = 4;
    uRam00372b00 = (undefined4)uVar3;
    puRam00372b04 = auStack_a0;
    sceSifWriteBackDCache(0x372b00,0xc10);
    lVar4 = sceSifCallRpc(0x374200,0xe,0,0x372b00,0xc10,0x373740,4,0);
    iVar6 = DAT_20373740;
    if (lVar4 < 0) {
      DeleteSema(uVar3);
      maybe_Fio_Unlock();
      auStack_a0[0] = 0xfffffff5;
    }
    else {
      maybe_Fio_Unlock();
      if (iVar6 == 0) {
        DeleteSema(uVar3);
        auStack_a0[0] = 0xfffffff5;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
      }
    }
  }
  else {
    maybe_Fio_Unlock();
    auStack_a0[0] = 0xfffffff9;
  }
  return auStack_a0[0];
}

// 0x001172b0  size 0x120
undefined4 libkernl_sub_001172b0(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined4 auStack_60 [4];
  
  maybe_Fio_Lock(0xf);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
  }
  uStack_7c = 1;
  uStack_78 = 0;
  uStack_6c = 0;
  uRam00372b0c = param_1;
  uVar2 = CreateSema(auStack_80);
  puRam00372b04 = auStack_60;
  uRam00372b00 = (undefined4)uVar2;
  uRam00372b08 = 4;
  lVar3 = sceSifCallRpc(0x374200,0xf,0,0x372b00,0x10,0x373740,4,0);
  iVar1 = DAT_20373740;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    maybe_Fio_Unlock();
    auStack_60[0] = 0xffffffff;
  }
  else {
    maybe_Fio_Unlock();
    if (iVar1 == 0) {
      DeleteSema(uVar2);
      auStack_60[0] = 0xffffffff;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return auStack_60[0];
}

// 0x001173d0  size 0x1c
void libkernl_sub_001173d0(undefined8 param_1)

{
  maybe_Fio_PathCmd(param_1,0x10);
  return;
}

// 0x001173f0  size 0xc8
/* 9 */

int sceDopen(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  maybe_Fio_Lock(9);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
  }
  maybe_Fio_Unlock();
  lVar2 = libkernl_sub_001152f0();
  if (lVar2 == 0) {
    iVar1 = -0x13;
  }
  else {
    iVar1 = maybe_Fio_PathCmd(param_1,9);
    piVar3 = (int *)lVar2;
    if (iVar1 < 0) {
      WaitSema(DAT_00306b88);
      piVar3[1] = 0;
    }
    else {
      WaitSema(DAT_00306b88);
      *piVar3 = iVar1;
      iVar1 = (int)(piVar3 + -0xdd000) >> 4;
    }
    SignalSema(DAT_00306b88);
  }
  return iVar1;
}

// 0x001174b8  size 0x168
/* 10 */

int sceDclose(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_7c;
  int aiStack_70 [4];
  
  lVar2 = libkernl_sub_00115378();
  maybe_Fio_Lock(10);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Unlock();
    aiStack_70[0] = -1;
  }
  else if ((lVar2 == 0) || (puVar4 = (undefined4 *)lVar2, puVar4[1] == 0)) {
    maybe_Fio_Unlock();
    aiStack_70[0] = -9;
  }
  else {
    uRam00372b0c = *puVar4;
    uStack_8c = 1;
    uStack_88 = 0;
    uStack_7c = 0;
    uVar3 = CreateSema(auStack_90);
    piRam00372b04 = aiStack_70;
    uRam00372b00 = (undefined4)uVar3;
    uRam00372b08 = 4;
    lVar2 = sceSifCallRpc(0x374200,10,0,0x372b00,0x14,0x373740,4,0);
    if (lVar2 < 0) {
      DeleteSema(uVar3);
      maybe_Fio_Unlock();
      aiStack_70[0] = -0xb;
    }
    else {
      puVar4[1] = 0;
      iVar1 = DAT_20373740;
      maybe_Fio_Unlock();
      if (iVar1 == 0) {
        DeleteSema(uVar3);
        aiStack_70[0] = -0xb;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
        if (-1 < aiStack_70[0]) {
          aiStack_70[0] = 0;
        }
      }
    }
  }
  return aiStack_70[0];
}

// 0x00117620  size 0x158
/* 11 */

undefined4 sceDread(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined4 auStack_60 [4];
  
  lVar2 = libkernl_sub_00115378();
  maybe_Fio_Lock(0xb);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Unlock();
    auStack_60[0] = 0xffffffff;
  }
  else if ((lVar2 == 0) || (((undefined4 *)lVar2)[1] == 0)) {
    maybe_Fio_Unlock();
    auStack_60[0] = 0xfffffff7;
  }
  else {
    uRam00372b0c = *(undefined4 *)lVar2;
    uStack_7c = 1;
    uStack_78 = 0;
    uStack_6c = 0;
    uRam00372b10 = param_2;
    uVar3 = CreateSema(auStack_80);
    puRam00372b04 = auStack_60;
    uRam00372b00 = (undefined4)uVar3;
    uRam00372b08 = 4;
    lVar2 = sceSifCallRpc(0x374200,0xb,0,0x372b00,0x20,0x373740,4,0);
    iVar1 = DAT_20373740;
    if (lVar2 < 0) {
      WaitSema(uVar3);
      maybe_Fio_Unlock();
      auStack_60[0] = 0xfffffff5;
    }
    else {
      maybe_Fio_Unlock();
      if (iVar1 == 0) {
        DeleteSema(uVar3);
        auStack_60[0] = 0xfffffff5;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
      }
    }
  }
  return auStack_60[0];
}

// 0x00117778  size 0x1a0
/* 12 */

undefined4 sceGetstat(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_ac;
  undefined4 auStack_a0 [4];
  
  maybe_Fio_Lock(0xc);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b10 = *param_1;
  }
  else {
    cRam00372b10 = *param_1;
  }
  iVar2 = 0;
  cVar1 = cRam00372b10;
  while (iVar5 = iVar2, cVar1 != '\0') {
    iVar5 = iVar2 + 1;
    if (0x3ff < iVar5) break;
    cVar1 = param_1[iVar5];
    *(char *)(iVar2 + 0x372b11) = cVar1;
    iVar2 = iVar5;
  }
  if (iVar5 == 0x400) {
    uRam00372f0f = 0;
    iVar5 = 0x3ff;
  }
  uStack_bc = 1;
  uStack_b8 = 0;
  uStack_ac = 0;
  uRam00372b0c = param_2;
  uVar3 = CreateSema(auStack_c0);
  uRam00372b00 = (undefined4)uVar3;
  uRam00372b08 = 4;
  puRam00372b04 = auStack_a0;
  lVar4 = sceSifCallRpc(0x374200,0xc,0,0x372b00,iVar5 + 0x11,0x373740,4,0);
  iVar2 = DAT_20373740;
  if (lVar4 < 0) {
    DeleteSema(uVar3);
    maybe_Fio_Unlock();
    auStack_a0[0] = 0xfffffff5;
  }
  else {
    maybe_Fio_Unlock();
    if (iVar2 == 0) {
      DeleteSema(uVar3);
      auStack_a0[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return auStack_a0[0];
}

// 0x00117918  size 0x23c
/* 13 */

undefined4 sceChstat(char *param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_bc;
  undefined4 auStack_b0 [4];
  
  maybe_Fio_Lock(0xd);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b50 = *param_1;
  }
  else {
    cRam00372b50 = *param_1;
  }
  iVar2 = 0;
  cVar1 = cRam00372b50;
  while (iVar5 = iVar2, cVar1 != '\0') {
    iVar5 = iVar2 + 1;
    if (0x3ff < iVar5) break;
    cVar1 = param_1[iVar5];
    *(char *)(iVar2 + 0x372b51) = cVar1;
    iVar2 = iVar5;
  }
  if (iVar5 == 0x400) {
    uRam00372f4f = 0;
    iVar5 = 0x3ff;
  }
  uRam00372b10 = *param_2;
  uRam00372b18 = param_2[1];
  uRam00372b20 = param_2[2];
  uRam00372b28 = param_2[3];
  uRam00372b30 = param_2[4];
  uRam00372b38 = param_2[5];
  uRam00372b40 = param_2[6];
  uRam00372b48 = param_2[7];
  uStack_cc = 1;
  uStack_c8 = 0;
  uStack_bc = 0;
  uRam00372b0c = param_3;
  uVar3 = CreateSema(auStack_d0);
  uRam00372b08 = 4;
  uRam00372b00 = (undefined4)uVar3;
  puRam00372b04 = auStack_b0;
  sceSifWriteBackDCache(0x372b00,0x450);
  lVar4 = sceSifCallRpc(0x374200,0xd,0,0x372b00,iVar5 + 0x51,0x373740,4,0);
  iVar2 = DAT_20373740;
  if (lVar4 < 0) {
    DeleteSema(uVar3);
    maybe_Fio_Unlock();
    auStack_b0[0] = 0xfffffff5;
  }
  else {
    maybe_Fio_Unlock();
    if (iVar2 == 0) {
      DeleteSema(uVar3);
      auStack_b0[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return auStack_b0[0];
}

// 0x00117b58  size 0x1f0
/* 0x11 */

undefined4 maybe_sceRename(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  undefined4 auStack_90 [4];
  
  maybe_Fio_Lock(0x11);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b0c = *param_1;
  }
  else {
    cRam00372b0c = *param_1;
  }
  iVar4 = 0;
  if (cRam00372b0c != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_1[iVar4], *(char *)(iVar4 + 0x372b0c) = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    uRam00372f0b = 0;
  }
  cRam00372f0c = *param_2;
  iVar4 = 0;
  if (cRam00372f0c != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_2[iVar4], *(char *)(iVar4 + 0x372f0c) = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    uRam0037330b = 0;
  }
  uStack_a8 = 0;
  uStack_ac = 1;
  uStack_9c = 0;
  uVar2 = CreateSema(auStack_b0);
  uRam00372b08 = 4;
  uRam00372b00 = (undefined4)uVar2;
  puRam00372b04 = auStack_90;
  sceSifWriteBackDCache(0x372b00,0x80c);
  lVar3 = sceSifCallRpc(0x374200,0x11,0,0x372b00,0x80c,0x373740,4,0);
  iVar4 = DAT_20373740;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    maybe_Fio_Unlock();
    auStack_90[0] = 0xfffffff5;
  }
  else {
    maybe_Fio_Unlock();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      auStack_90[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return auStack_90[0];
}

// 0x00117d48  size 0x1c
/* 0x12 */

void maybe_sceChdir(undefined8 param_1)

{
  maybe_Fio_PathCmd(param_1,0x12);
  return;
}

// 0x00117d68  size 0x198
/* 0x13 */

undefined4 maybe_sceSync(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  undefined4 auStack_90 [4];
  
  maybe_Fio_Lock(0x13);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b14 = *param_1;
  }
  else {
    cRam00372b14 = *param_1;
  }
  iVar4 = 0;
  if (cRam00372b14 != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_1[iVar4], *(char *)(iVar4 + 0x372b14) = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    uRam00372f13 = 0;
  }
  uStack_ac = 1;
  uStack_a8 = 0;
  uStack_9c = 0;
  uRam00372b10 = param_2;
  uVar2 = CreateSema(auStack_b0);
  uRam00372b00 = (undefined4)uVar2;
  uRam00372b08 = 4;
  puRam00372b04 = auStack_90;
  lVar3 = sceSifCallRpc(0x374200,0x13,0,0x372b00,0x414,0x373740,4,0);
  iVar4 = DAT_20373740;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    maybe_Fio_Unlock();
    auStack_90[0] = 0xfffffff5;
  }
  else {
    maybe_Fio_Unlock();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      auStack_90[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return auStack_90[0];
}

// 0x00117f00  size 0x26c
/* 0x14 */

undefined4 maybe_sceMount(char *param_1,char *param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_bc;
  undefined4 auStack_b0 [4];
  
  maybe_Fio_Lock(0x14);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b0c = *param_1;
  }
  else {
    cRam00372b0c = *param_1;
  }
  iVar6 = 0;
  if (cRam00372b0c != '\0') {
    for (iVar6 = 1;
        (iVar6 < 0x400 &&
        (cVar1 = param_1[iVar6], *(char *)(iVar6 + 0x372b0c) = cVar1, cVar1 != '\0'));
        iVar6 = iVar6 + 1) {
    }
  }
  if (iVar6 == 0x400) {
    uRam00372f0b = 0;
  }
  cRam00372f0c = *param_2;
  iVar6 = 0;
  if (cRam00372f0c != '\0') {
    for (iVar6 = 1;
        (iVar6 < 0x400 &&
        (cVar1 = param_2[iVar6], *(char *)(iVar6 + 0x372f0c) = cVar1, cVar1 != '\0'));
        iVar6 = iVar6 + 1) {
    }
  }
  if (iVar6 == 0x400) {
    uRam0037330b = 0;
  }
  if (param_5 < 0x401) {
    iVar6 = 0;
    if (0 < param_5) {
      do {
        puVar2 = (undefined1 *)(param_4 + iVar6);
        puVar5 = (undefined1 *)(iVar6 + 0x37330c);
        iVar6 = iVar6 + 1;
        *puVar5 = *puVar2;
      } while (iVar6 < param_5);
    }
    uStack_cc = 1;
    uStack_c8 = 0;
    uStack_bc = 0;
    uRam0037370c = param_3;
    iRam00373710 = param_5;
    uVar3 = CreateSema(auStack_d0);
    uRam00372b08 = 4;
    uRam00372b00 = (undefined4)uVar3;
    puRam00372b04 = auStack_b0;
    sceSifWriteBackDCache(0x372b00,0xc14);
    lVar4 = sceSifCallRpc(0x374200,0x14,0,0x372b00,0xc14,0x373740,4,0);
    iVar6 = DAT_20373740;
    if (lVar4 < 0) {
      DeleteSema(uVar3);
      maybe_Fio_Unlock();
      auStack_b0[0] = 0xfffffff5;
    }
    else {
      maybe_Fio_Unlock();
      if (iVar6 == 0) {
        DeleteSema(uVar3);
        auStack_b0[0] = 0xfffffff5;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
      }
    }
  }
  else {
    maybe_Fio_Unlock();
    auStack_b0[0] = 0xfffffff9;
  }
  return auStack_b0[0];
}

