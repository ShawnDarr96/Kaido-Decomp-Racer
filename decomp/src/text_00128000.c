// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00128000 - 0x0012c000
#include "ghidra_types.h"

// 0x001280b8  size 0x34
uint maybe__mbtowc_r(undefined8 param_1,uint *param_2,long param_3,long param_4)

{
  uint uVar1;
  uint *puVar2;
  uint auStack_10 [4];
  
  uVar1 = 0;
  puVar2 = auStack_10;
  if (param_2 != (uint *)0x0) {
    puVar2 = param_2;
  }
  if ((param_3 != 0) && (uVar1 = 0xffffffff, param_4 != 0)) {
    *puVar2 = (uint)*(byte *)param_3;
    uVar1 = (uint)(*(byte *)param_3 != 0);
  }
  return uVar1;
}

// 0x001280f0  size 0xe0
undefined8 memchr(ulong param_1,ulong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined8 in_v1_udw;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 in_a0_udw;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_t2_udw;
  undefined1 auVar7 [16];
  
  iVar3 = (int)(param_1 >> 0x20);
  pauVar4 = (undefined1 (*) [16])param_1;
  if ((0xf < param_3) && ((param_1 & 0xf) == 0)) {
    auVar5._8_8_ = in_t2_udw;
    auVar5._0_8_ = (param_2 & 0xff) * 0x101;
    auVar6._8_8_ = in_v1_udw;
    auVar6._0_8_ = 0x8080808080808080;
    auVar5 = _pcpyh(auVar5);
    auVar5 = _pcpyld(auVar5,auVar5);
    auVar6 = _pcpyld(auVar6,auVar6);
    do {
      pauVar4 = (undefined1 (*) [16])param_1;
      auVar1 = _pxor(*pauVar4,auVar5);
      auVar7._8_8_ = in_a0_udw;
      auVar7._0_8_ = 0x101010101010101;
      auVar2._8_8_ = in_a0_udw;
      auVar2._0_8_ = 0x101010101010101;
      auVar7 = _pcpyld(auVar7,auVar2);
      auVar7 = _psubb(auVar1,auVar7);
      auVar7 = _pand(auVar7,~auVar1);
      auVar7 = _pand(auVar7,auVar6);
      auVar2 = _pcpyud(auVar7,auVar5);
      if (auVar7._0_8_ != 0 || auVar2._0_8_ != 0) {
        iVar3 = (int)(param_1 >> 0x20);
        goto joined_r0x0012819c;
      }
      param_3 = param_3 - 0x10;
      pauVar4 = pauVar4 + 1;
      param_1 = (ulong)(int)pauVar4;
    } while (0xf < param_3);
    iVar3 = (int)pauVar4 >> 0x1f;
  }
joined_r0x0012819c:
  while( true ) {
    param_3 = param_3 - 1;
    if (param_3 == 0xffffffff) {
      return 0;
    }
    if ((ulong)(byte)(*pauVar4)[0] == (param_2 & 0xff)) break;
    pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
    iVar3 = (int)pauVar4 >> 0x1f;
  }
  return CONCAT44(iVar3,pauVar4);
}

// 0x001281d0  size 0x94
int memcmp(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  undefined8 in_a3_udw;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((0xf < param_3) && ((((uint)param_1 | (uint)param_2) & 0xf) == 0)) {
    do {
      uVar3 = CONCAT71(0,param_3 < 0x20);
      pauVar2 = param_1 + 1;
      auVar4 = _pxor(*param_2,*param_1);
      pauVar1 = param_2 + 1;
      auVar5._8_8_ = in_a3_udw;
      auVar5._0_8_ = uVar3;
      auVar5 = _pcpyud(auVar4,auVar5);
      if (auVar5._0_8_ != 0 || auVar4._0_8_ != 0) break;
      param_3 = param_3 - 0x10;
      param_1 = pauVar2;
      param_2 = pauVar1;
    } while (uVar3 == 0);
  }
  while( true ) {
    param_3 = param_3 - 1;
    if (param_3 == 0xffffffff) {
      return 0;
    }
    if ((uint)(byte)(*param_1)[0] != (uint)(byte)(*param_2)[0]) break;
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
  }
  return (uint)(byte)(*param_1)[0] - (uint)(byte)(*param_2)[0];
}

// 0x00128268  size 0xb0
/* 60 callers */

undefined8 * memcpy(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = param_1;
  if ((0x1f < param_3) && ((((uint)param_2 | (uint)param_1) & 0xf) == 0)) {
    do {
      uVar3 = *(undefined4 *)((int)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((int)param_2 + 0xc);
      param_3 = param_3 - 0x20;
      puVar6 = param_2 + 2;
      *(undefined4 *)puVar7 = *(undefined4 *)param_2;
      *(undefined4 *)((int)puVar7 + 4) = uVar3;
      *(undefined4 *)(puVar7 + 1) = uVar4;
      *(undefined4 *)((int)puVar7 + 0xc) = uVar5;
      uVar3 = *(undefined4 *)((int)param_2 + 0x14);
      uVar4 = *(undefined4 *)(param_2 + 3);
      uVar5 = *(undefined4 *)((int)param_2 + 0x1c);
      param_2 = param_2 + 4;
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)puVar6;
      *(undefined4 *)((int)puVar7 + 0x14) = uVar3;
      *(undefined4 *)(puVar7 + 3) = uVar4;
      *(undefined4 *)((int)puVar7 + 0x1c) = uVar5;
      puVar7 = puVar7 + 4;
    } while (0x1f < param_3);
    for (; 7 < param_3; param_3 = param_3 - 8) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *puVar7 = uVar2;
      puVar7 = puVar7 + 1;
    }
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 1);
    *(undefined1 *)puVar7 = uVar1;
    puVar7 = (undefined8 *)((int)puVar7 + 1);
  }
  return param_1;
}

// 0x00128318  size 0x104
undefined8 * memmove(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  
  if ((param_2 < param_1) && (puVar9 = (undefined8 *)((int)param_2 + param_3), param_1 < puVar9)) {
    puVar2 = (undefined1 *)((int)param_1 + param_3);
    iVar8 = param_3 - 1;
    if (iVar8 != -1) {
      do {
        puVar9 = (undefined8 *)((int)puVar9 + -1);
        puVar2 = puVar2 + -1;
        iVar8 = iVar8 + -1;
        *puVar2 = *(undefined1 *)puVar9;
      } while (iVar8 != -1);
      return param_1;
    }
  }
  else {
    puVar9 = param_1;
    if (param_3 < 0x20) {
      iVar8 = param_3 - 1;
    }
    else if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
      do {
        uVar4 = *(undefined4 *)((int)param_2 + 4);
        uVar5 = *(undefined4 *)(param_2 + 1);
        uVar6 = *(undefined4 *)((int)param_2 + 0xc);
        param_3 = param_3 - 0x20;
        puVar7 = param_2 + 2;
        *(undefined4 *)puVar9 = *(undefined4 *)param_2;
        *(undefined4 *)((int)puVar9 + 4) = uVar4;
        *(undefined4 *)(puVar9 + 1) = uVar5;
        *(undefined4 *)((int)puVar9 + 0xc) = uVar6;
        uVar4 = *(undefined4 *)((int)param_2 + 0x14);
        uVar5 = *(undefined4 *)(param_2 + 3);
        uVar6 = *(undefined4 *)((int)param_2 + 0x1c);
        param_2 = param_2 + 4;
        *(undefined4 *)(puVar9 + 2) = *(undefined4 *)puVar7;
        *(undefined4 *)((int)puVar9 + 0x14) = uVar4;
        *(undefined4 *)(puVar9 + 3) = uVar5;
        *(undefined4 *)((int)puVar9 + 0x1c) = uVar6;
        puVar9 = puVar9 + 4;
      } while (0x1f < param_3);
      if (7 < param_3) {
        do {
          uVar3 = *param_2;
          param_3 = param_3 - 8;
          param_2 = param_2 + 1;
          *puVar9 = uVar3;
          puVar9 = puVar9 + 1;
        } while (7 < param_3);
      }
      iVar8 = param_3 - 1;
    }
    else {
      iVar8 = param_3 - 1;
    }
    for (; iVar8 != -1; iVar8 = iVar8 + -1) {
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 1);
      *(undefined1 *)puVar9 = uVar1;
      puVar9 = (undefined8 *)((int)puVar9 + 1);
    }
  }
  return param_1;
}

// 0x00128420  size 0xc0
undefined8 * memset(undefined8 *param_1,undefined1 param_2,uint param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 in_t0_udw;
  undefined1 auVar4 [16];
  
  puVar3 = param_1;
  if ((7 < param_3) && (((uint)param_1 & 0xf) == 0)) {
    auVar2[1] = param_2;
    auVar2[0] = param_2;
    auVar2._2_6_ = 0;
    auVar2._8_8_ = in_t0_udw;
    auVar2 = _pcpyh(auVar2);
    bVar1 = param_3 < 8;
    if (0x1f < param_3) {
      auVar4 = _pcpyld(auVar2,auVar2);
      do {
        *(int *)puVar3 = auVar4._0_4_;
        *(int *)((int)puVar3 + 4) = auVar4._4_4_;
        *(int *)(puVar3 + 1) = auVar4._8_4_;
        *(int *)((int)puVar3 + 0xc) = auVar4._12_4_;
        param_3 = param_3 - 0x20;
        *(int *)(puVar3 + 2) = auVar4._0_4_;
        *(int *)((int)puVar3 + 0x14) = auVar4._4_4_;
        *(int *)(puVar3 + 3) = auVar4._8_4_;
        *(int *)((int)puVar3 + 0x1c) = auVar4._12_4_;
        puVar3 = puVar3 + 4;
      } while (0x1f < param_3);
      bVar1 = param_3 < 8;
    }
    while (!bVar1) {
      *puVar3 = auVar2._0_8_;
      param_3 = param_3 - 8;
      puVar3 = puVar3 + 1;
      bVar1 = param_3 < 8;
    }
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    *(undefined1 *)puVar3 = param_2;
    puVar3 = (undefined8 *)((int)puVar3 + 1);
  }
  return param_1;
}

// 0x001284e0  size 0x7c
void __malloc_lock(void)

{
  int iVar1;
  
  iVar1 = GetThreadId();
  if (DAT_0030a4f8 == iVar1) {
  }
  else {
    WaitSema(DAT_00307210);
    DAT_0030a4f8 = iVar1;
  }
  DAT_0030a4fc = DAT_0030a4fc + 1;
  return;
}

// 0x00128560  size 0x4c
void __malloc_unlock(void)

{
  DAT_0030a4fc = DAT_0030a4fc + -1;
  if (DAT_0030a4fc == 0) {
    DAT_0030a4f8 = 0xffffffff;
    SignalSema(DAT_00307210);
    return;
  }
  return;
}

// 0x001285b0  size 0xa4
int _Balloc(undefined8 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x4c);
  if (iVar1 == 0) {
    iVar1 = maybe__calloc_r(param_1,4,0x10);
    *(int *)((int)param_1 + 0x4c) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  piVar3 = (int *)(param_2 * 4 + iVar1);
  piVar2 = (int *)*piVar3;
  if (piVar2 == (int *)0x0) {
    iVar1 = 1 << (param_2 & 0x1f);
    piVar2 = (int *)maybe__calloc_r(param_1,1,iVar1 * 4 + 0x14);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    *(uint *)((int)piVar2 + 4) = param_2;
    *(int *)((int)piVar2 + 8) = iVar1;
  }
  else {
    *piVar3 = *piVar2;
  }
  *(undefined4 *)((int)piVar2 + 0x10) = 0;
  *(undefined4 *)((int)piVar2 + 0xc) = 0;
  return (int)piVar2;
}

// 0x00128658  size 0x2c
void _Bfree(int param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_2;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(puVar2[1] * 4 + *(int *)(param_1 + 0x4c));
    *puVar2 = *puVar1;
    *puVar1 = puVar2;
  }
  return;
}

// 0x00128688  size 0x108
undefined8 __multadd(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_2;
  puVar5 = (uint *)(iVar7 + 0x14);
  iVar6 = 0;
  iVar1 = *(int *)(iVar7 + 0x10);
  do {
    iVar6 = iVar6 + 1;
    uVar4 = (*puVar5 & 0xffff) * param_3 + param_4;
    uVar3 = (*puVar5 >> 0x10) * param_3 + (uVar4 >> 0x10);
    param_4 = uVar3 >> 0x10;
    *puVar5 = uVar3 * 0x10000 + (uVar4 & 0xffff);
    puVar5 = puVar5 + 1;
  } while (iVar6 < iVar1);
  if (param_4 != 0) {
    if (*(int *)(iVar7 + 8) <= iVar1) {
      uVar2 = _Balloc(param_1,*(int *)(iVar7 + 4) + 1);
      memcpy((int)uVar2 + 0xc,iVar7 + 0xc,*(int *)(iVar7 + 0x10) * 4 + 8);
      _Bfree(param_1,param_2);
      param_2 = uVar2;
    }
    *(uint *)(iVar1 * 4 + (int)param_2 + 0x14) = param_4;
    *(int *)((int)param_2 + 0x10) = iVar1 + 1;
  }
  return param_2;
}

// 0x00128790  size 0x130
/* WARNING: Removing unreachable block (ram,0x001287cc) */

undefined8 maybe___s2b(undefined8 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  iVar4 = 1;
  iVar6 = (param_4 + 8) / 9;
  iVar3 = 0;
  if (1 < iVar6) {
    do {
      iVar4 = iVar4 << 1;
      iVar3 = iVar3 + 1;
    } while (iVar4 < iVar6);
  }
  uVar2 = _Balloc(param_1,iVar3);
  *(undefined4 *)((int)uVar2 + 0x14) = param_5;
  iVar6 = 9;
  *(undefined4 *)((int)uVar2 + 0x10) = 1;
  if (param_3 < 10) {
    pcVar5 = (char *)(param_2 + 10);
  }
  else {
    cVar1 = *(char *)(param_2 + 9);
    pcVar5 = (char *)(param_2 + 9);
    while( true ) {
      iVar6 = iVar6 + 1;
      uVar2 = __multadd(param_1,uVar2,10,cVar1 + -0x30);
      if (param_3 <= iVar6) break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
    pcVar5 = pcVar5 + 2;
  }
  if (iVar6 < param_4) {
    param_4 = param_4 - iVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      param_4 = param_4 + -1;
      uVar2 = __multadd(param_1,uVar2,10,cVar1 + -0x30);
    } while (param_4 != 0);
  }
  return uVar2;
}

// 0x001288c0  size 0x80
int __hi0bits(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1 & 0xffff0000) == 0) {
    iVar2 = 0x10;
    param_1 = param_1 << 0x10;
  }
  if ((param_1 & 0xff000000) == 0) {
    iVar2 = iVar2 + 8;
    param_1 = param_1 << 8;
  }
  if ((param_1 & 0xf0000000) == 0) {
    iVar2 = iVar2 + 4;
    param_1 = param_1 << 4;
  }
  if ((param_1 & 0xc0000000) == 0) {
    iVar2 = iVar2 + 2;
    param_1 = param_1 << 2;
  }
  iVar1 = iVar2;
  if (-1 < (int)param_1) {
    iVar1 = 0x20;
    if ((param_1 & 0x40000000) != 0) {
      iVar1 = iVar2 + 1;
    }
  }
  return iVar1;
}

// 0x00128940  size 0xbc
int __lo0bits(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 7) == 0) {
    iVar1 = 0;
    if ((uVar2 & 0xffff) == 0) {
      iVar1 = 0x10;
      uVar2 = uVar2 >> 0x10;
    }
    if ((uVar2 & 0xff) == 0) {
      iVar1 = iVar1 + 8;
      uVar2 = uVar2 >> 8;
    }
    if ((uVar2 & 0xf) == 0) {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 >> 4;
    }
    if ((uVar2 & 3) == 0) {
      iVar1 = iVar1 + 2;
      uVar2 = uVar2 >> 2;
    }
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
      if (uVar2 >> 1 == 0) {
        return 0x20;
      }
      *param_1 = uVar2 >> 1;
    }
    else {
      *param_1 = uVar2;
    }
  }
  else {
    iVar1 = 0;
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 2) == 0) {
        *param_1 = uVar2 >> 2;
        return 2;
      }
      *param_1 = uVar2 >> 1;
      return 1;
    }
  }
  return iVar1;
}

// 0x00128a00  size 0x38
void __i2b(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _Balloc(param_1,1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}

// 0x00128a38  size 0x20c
undefined8 __multiply(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  iVar13 = *(int *)(param_3 + 0x10);
  if (*(int *)(param_2 + 0x10) < iVar13) {
    iVar14 = *(int *)(param_2 + 0x10);
    iVar18 = *(int *)(param_3 + 8);
    iVar16 = iVar13;
    iVar13 = param_3;
  }
  else {
    iVar18 = *(int *)(param_2 + 8);
    iVar16 = *(int *)(param_2 + 0x10);
    iVar14 = iVar13;
    iVar13 = param_2;
    param_2 = param_3;
  }
  iVar17 = iVar16 + iVar14;
  uVar5 = _Balloc(param_1,*(int *)(iVar13 + 4) + (uint)(iVar18 < iVar17));
  iVar18 = (int)uVar5;
  puVar12 = (uint *)(iVar18 + 0x14);
  if (puVar12 < puVar12 + iVar17) {
    *puVar12 = 0;
    puVar8 = puVar12;
    while (puVar8 = puVar8 + 1, puVar8 < puVar12 + iVar17) {
      *puVar8 = 0;
    }
  }
  puVar10 = (uint *)(param_2 + 0x14);
  puVar15 = puVar10 + iVar14;
  puVar11 = (uint *)(iVar13 + 0x14);
  puVar8 = puVar12;
  for (; puVar10 < puVar15; puVar10 = puVar10 + 1) {
    uVar2 = *puVar10;
    uVar4 = uVar2 & 0xffff;
    if (uVar4 != 0) {
      uVar2 = 0;
      puVar7 = puVar8;
      puVar9 = puVar11;
      do {
        uVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar3 = *puVar7;
        uVar2 = (uVar6 & 0xffff) * uVar4 + (uVar3 & 0xffff) + uVar2;
        *(short *)puVar7 = (short)uVar2;
        uVar2 = (uVar6 >> 0x10) * uVar4 + (uVar3 >> 0x10) + (uVar2 >> 0x10);
        *(short *)((int)puVar7 + 2) = (short)uVar2;
        puVar7 = puVar7 + 1;
        uVar2 = uVar2 >> 0x10;
      } while (puVar9 < puVar11 + iVar16);
      *puVar7 = uVar2;
      uVar2 = *puVar10;
    }
    uVar2 = uVar2 >> 0x10;
    if (uVar2 != 0) {
      uVar4 = *puVar8;
      uVar3 = 0;
      puVar7 = puVar8;
      puVar9 = puVar11;
      uVar6 = uVar4;
      do {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        *(short *)puVar7 = (short)uVar4;
        uVar3 = (uVar1 & 0xffff) * uVar2 + (uVar6 >> 0x10) + uVar3;
        *(short *)((int)puVar7 + 2) = (short)uVar3;
        puVar7 = puVar7 + 1;
        uVar6 = *puVar7;
        uVar4 = (uVar1 >> 0x10) * uVar2 + (uVar6 & 0xffff) + (uVar3 >> 0x10);
        uVar3 = uVar4 >> 0x10;
      } while (puVar9 < puVar11 + iVar16);
      *puVar7 = uVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar12 = puVar12 + iVar17;
  while( true ) {
    if (iVar17 < 1) {
      *(int *)(iVar18 + 0x10) = iVar17;
      return uVar5;
    }
    puVar12 = puVar12 + -1;
    if (*puVar12 != 0) break;
    iVar17 = iVar17 + -1;
  }
  *(int *)(iVar18 + 0x10) = iVar17;
  return uVar5;
}

// 0x00128c48  size 0xf8
undefined8 __pow5mult(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if ((param_3 & 3) != 0) {
    param_2 = __multadd(param_1,param_2,*(undefined4 *)(&DAT_003602a4 + (param_3 & 3) * 4),0);
  }
  param_3 = (int)param_3 >> 2;
  if (param_3 != 0) {
    puVar2 = *(undefined4 **)((int)param_1 + 0x48);
    uVar4 = param_2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)__i2b(param_1,0x271);
      *(undefined4 **)((int)param_1 + 0x48) = puVar2;
      *puVar2 = 0;
    }
    while( true ) {
      puVar3 = puVar2;
      uVar1 = param_3 & 1;
      param_3 = (int)param_3 >> 1;
      param_2 = uVar4;
      if (uVar1 != 0) {
        param_2 = __multiply(param_1,uVar4,puVar3);
        _Bfree(param_1,uVar4);
      }
      if (param_3 == 0) break;
      uVar4 = param_2;
      puVar2 = (undefined4 *)*puVar3;
      if ((undefined4 *)*puVar3 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)__multiply(param_1,puVar3,puVar3);
        *puVar3 = puVar2;
        *puVar2 = 0;
      }
    }
  }
  return param_2;
}

// 0x00128d48  size 0x158
undefined8 __lshift(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar9 = (int)param_3 >> 5;
  iVar11 = (int)param_2;
  iVar2 = iVar9 + *(int *)(iVar11 + 0x10);
  iVar10 = iVar2 + 1;
  iVar5 = *(int *)(iVar11 + 4);
  for (iVar6 = *(int *)(iVar11 + 8); iVar6 < iVar10; iVar6 = iVar6 << 1) {
    iVar5 = iVar5 + 1;
  }
  uVar1 = _Balloc(param_1,iVar5);
  puVar8 = (uint *)((int)uVar1 + 0x14);
  if (0 < iVar9) {
    do {
      iVar9 = iVar9 + -1;
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    } while (iVar9 != 0);
  }
  puVar4 = (uint *)(iVar11 + 0x14);
  param_3 = param_3 & 0x1f;
  puVar7 = puVar4 + *(int *)(iVar11 + 0x10);
  if (param_3 == 0) {
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar8 = uVar3;
      puVar8 = puVar8 + 1;
    } while (puVar4 < puVar7);
  }
  else {
    uVar3 = 0;
    do {
      *puVar8 = *puVar4 << param_3 | uVar3;
      puVar8 = puVar8 + 1;
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 >> (0x20 - param_3 & 0x1f);
    } while (puVar4 < puVar7);
    *puVar8 = uVar3;
    if (uVar3 != 0) {
      iVar10 = iVar2 + 2;
    }
  }
  *(int *)((int)uVar1 + 0x10) = iVar10 + -1;
  _Bfree(param_1,param_2);
  return uVar1;
}

// 0x00128ea0  size 0x68
int __mcmp(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = *(int *)(param_2 + 0x10);
  iVar1 = *(int *)(param_1 + 0x10) - iVar2;
  if (iVar1 == 0) {
    puVar3 = (uint *)(param_1 + 0x14) + iVar2;
    puVar4 = (uint *)(param_2 + 0x14 + iVar2 * 4);
    do {
      puVar3 = puVar3 + -1;
      puVar4 = puVar4 + -1;
      iVar2 = -1;
      if (*puVar4 <= *puVar3) {
        iVar2 = 1;
      }
      if (*puVar3 != *puVar4) {
        return iVar2;
      }
    } while ((uint *)(param_1 + 0x14) < puVar3);
    iVar1 = 0;
  }
  return iVar1;
}

// 0x00128f08  size 0x190
undefined8 __mdiff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  
  lVar5 = __mcmp(param_2,param_3);
  if (lVar5 == 0) {
    uVar6 = _Balloc(param_1,0);
    *(undefined4 *)((int)uVar6 + 0x10) = 1;
    *(undefined4 *)((int)uVar6 + 0x14) = 0;
  }
  else {
    uVar6 = param_2;
    if (lVar5 < 0) {
      uVar6 = param_3;
      param_3 = param_2;
    }
    iVar13 = (int)uVar6;
    uVar6 = _Balloc(param_1,*(undefined4 *)(iVar13 + 4));
    puVar10 = (uint *)(iVar13 + 0x14);
    puVar11 = (uint *)((int)param_3 + 0x14);
    iVar12 = (int)uVar6;
    *(uint *)(iVar12 + 0xc) = (uint)(lVar5 < 0);
    iVar7 = 0;
    iVar13 = *(int *)(iVar13 + 0x10);
    puVar14 = puVar10 + iVar13;
    puVar8 = puVar11 + *(int *)((int)param_3 + 0x10);
    piVar4 = (int *)(iVar12 + 0x14);
    do {
      piVar9 = piVar4;
      uVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      uVar2 = *puVar11;
      puVar11 = puVar11 + 1;
      iVar7 = ((uVar1 & 0xffff) - (uVar2 & 0xffff)) + iVar7;
      *(short *)piVar9 = (short)iVar7;
      iVar7 = ((uVar1 >> 0x10) - (uVar2 >> 0x10)) + (iVar7 >> 0x10);
      *(short *)((int)piVar9 + 2) = (short)iVar7;
      iVar7 = iVar7 >> 0x10;
      piVar4 = piVar9 + 1;
    } while (puVar11 < puVar8);
    for (; piVar3 = piVar4, puVar10 < puVar14; puVar10 = puVar10 + 1) {
      uVar1 = *puVar10;
      iVar7 = (uVar1 & 0xffff) + iVar7;
      *(short *)piVar3 = (short)iVar7;
      iVar7 = (uVar1 >> 0x10) + (iVar7 >> 0x10);
      *(short *)((int)piVar3 + 2) = (short)iVar7;
      iVar7 = iVar7 >> 0x10;
      piVar4 = piVar3 + 1;
      piVar9 = piVar3;
    }
    if (*piVar9 == 0) {
      do {
        piVar9 = piVar9 + -1;
        iVar13 = iVar13 + -1;
      } while (*piVar9 == 0);
      *(int *)(iVar12 + 0x10) = iVar13;
    }
    else {
      *(int *)(iVar12 + 0x10) = iVar13;
    }
  }
  return uVar6;
}

// 0x00129168  size 0x198
ulong maybe___b2d(int param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  
  puVar10 = (uint *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x10);
  puVar8 = puVar10 + iVar1 + -1;
  uVar9 = *puVar8;
  lVar2 = __hi0bits((long)(int)uVar9);
  iVar6 = (int)lVar2;
  *param_2 = 0x20 - iVar6;
  if (lVar2 < 0xb) {
    uVar5 = 0;
    uVar3 = ((long)(int)(uVar9 >> (0xbU - iVar6 & 0x1f)) | 0x3ff00000U) << 0x20;
    if (puVar10 < puVar8) {
      uVar5 = puVar10[iVar1 + -2];
    }
    uVar4 = (ulong)(uVar9 << (iVar6 + 0x15U & 0x1f) | uVar5 >> (0xbU - iVar6 & 0x1f));
  }
  else {
    if (puVar10 < puVar8) {
      puVar8 = puVar10 + iVar1 + -2;
      uVar5 = *puVar8;
    }
    else {
      uVar5 = 0;
    }
    uVar7 = iVar6 - 0xb;
    if (uVar7 == 0) {
      uVar3 = ((long)(int)uVar9 | 0x3ff00000U) << 0x20;
      uVar4 = (ulong)uVar5;
    }
    else {
      uVar3 = ((long)(int)(uVar9 << (uVar7 & 0x1f) | uVar5 >> (-uVar7 & 0x1f)) | 0x3ff00000U) <<
              0x20;
      uVar9 = 0;
      if (puVar10 < puVar8) {
        uVar9 = puVar8[-1];
      }
      uVar4 = (ulong)(uVar5 << (uVar7 & 0x1f) | uVar9 >> (-uVar7 & 0x1f));
    }
  }
  return uVar3 | uVar4;
}

// 0x00129300  size 0x17c
undefined8 maybe___d2b(undefined8 param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  uint uStack_50;
  uint auStack_4c [3];
  
  uVar4 = _Balloc(param_1,1);
  uVar5 = param_2 >> 0x20 & 0x7fffffff;
  auStack_4c[0] = (uint)((ulong)param_2 >> 0x20) & 0xfffff;
  uVar8 = uVar5 >> 0x14;
  iVar6 = (int)uVar4;
  puVar7 = (uint *)(iVar6 + 0x14);
  if (uVar8 != 0) {
    auStack_4c[0] = auStack_4c[0] | 0x100000;
  }
  if ((uint)param_2 == 0) {
    iVar2 = 1;
    iVar3 = __lo0bits(auStack_4c);
    uVar1 = iVar3 + 0x20;
    *puVar7 = auStack_4c[0];
    *(undefined4 *)(iVar6 + 0x10) = 1;
  }
  else {
    uStack_50 = (uint)param_2;
    uVar1 = __lo0bits(&uStack_50);
    if (uVar1 == 0) {
      *puVar7 = uStack_50;
    }
    else {
      *puVar7 = uStack_50 | auStack_4c[0] << (-uVar1 & 0x1f);
      auStack_4c[0] = auStack_4c[0] >> (uVar1 & 0x1f);
    }
    iVar2 = 2;
    if (auStack_4c[0] == 0) {
      iVar2 = 1;
    }
    *(uint *)(iVar6 + 0x18) = auStack_4c[0];
    *(int *)(iVar6 + 0x10) = iVar2;
  }
  if (uVar8 == 0) {
    *param_3 = uVar1 - 0x432;
    iVar6 = __hi0bits(puVar7[iVar2 + -1]);
    iVar6 = iVar2 * 0x20 - iVar6;
  }
  else {
    iVar6 = 0x35 - uVar1;
    *param_3 = ((uint)uVar5 >> 0x14) + uVar1 + -0x433;
  }
  *param_4 = iVar6;
  return uVar4;
}

// 0x00129488  size 0xc8
void maybe___ratio(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iStack_30;
  int aiStack_2c [3];
  
  uVar2 = maybe___b2d(param_1,&iStack_30);
  uVar3 = maybe___b2d(param_2,aiStack_2c);
  iVar1 = (iStack_30 - aiStack_2c[0]) +
          (*(int *)((int)param_1 + 0x10) - *(int *)((int)param_2 + 0x10)) * 0x20;
  if (iVar1 < 1) {
    uVar3 = uVar3 & 0xffffffff | (long)((int)(uVar3 >> 0x20) + iVar1 * -0x100000) << 0x20;
  }
  else {
    uVar2 = uVar2 & 0xffffffff | (long)((int)(uVar2 >> 0x20) + iVar1 * 0x100000) << 0x20;
  }
  __divdf3(uVar2,uVar3);
  return;
}

// 0x00129558  size 0x70
undefined8 maybe__mprec_log10(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (param_1 < 0x18) {
    uVar1 = *(undefined8 *)(&DAT_003602b8 + param_1 * 8);
  }
  else {
    for (; 0 < param_1; param_1 = param_1 + -1) {
      uVar1 = __muldf3(uVar1,0x4024000000000000);
    }
  }
  return uVar1;
}

// 0x001295c8  size 0x5c
void maybe_fprintf(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  _vfprintf_r(param_1,*(undefined4 *)(param_1 + 8),param_2,&uStack_30);
  return;
}

// 0x00129628  size 0x70
/* 32 callers -> vfprintf */

void printf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puVar1 = PTR_DAT_0030a090;
  *(undefined **)(*(int *)(PTR_DAT_0030a090 + 8) + 0x54) = PTR_DAT_0030a090;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  vfprintf(*(undefined4 *)(puVar1 + 8),param_1,&uStack_38);
  return;
}

// 0x00129698  size 0x9a8
/* recursive */

void maybe_qsort(undefined8 *param_1,uint param_2,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  code *pcVar21;
  uint uStack_c0;
  int iStack_a8;
  
  uStack_c0 = param_2;
  while( true ) {
    bVar5 = 2;
    if (((uint)param_1 & 7) == 0) {
      if ((param_3 & 7) == 0) {
        bVar5 = param_3 != 8;
      }
      else {
        bVar5 = 2;
      }
    }
    bVar4 = false;
    uVar19 = (uint)param_3;
    pcVar21 = (code *)param_4;
    if (uStack_c0 < 7) break;
    puVar7 = (undefined8 *)((uStack_c0 >> 1) * uVar19 + (int)param_1);
    if (7 < uStack_c0) {
      puVar20 = (undefined8 *)((uStack_c0 - 1) * uVar19 + (int)param_1);
      puVar18 = param_1;
      if (0x28 < uStack_c0) {
        iVar11 = (uStack_c0 >> 3) * uVar19;
        puVar18 = (undefined8 *)((int)param_1 + iVar11);
        puVar17 = (undefined8 *)(iVar11 * 2 + (int)param_1);
        lVar6 = (*pcVar21)(param_1,puVar18);
        if (lVar6 < 0) {
          lVar6 = (*pcVar21)(puVar18,puVar17);
          if ((-1 < lVar6) && (lVar6 = (*pcVar21)(param_1,puVar17), puVar18 = puVar17, -1 < lVar6))
          {
            puVar18 = param_1;
          }
        }
        else {
          lVar6 = (*pcVar21)(puVar18,puVar17);
          if ((lVar6 < 1) && (lVar6 = (*pcVar21)(param_1,puVar17), puVar18 = param_1, -1 < lVar6)) {
            puVar18 = puVar17;
          }
        }
        puVar9 = (undefined8 *)((int)puVar7 - iVar11);
        puVar17 = (undefined8 *)((int)puVar7 + iVar11);
        lVar6 = (*pcVar21)(puVar9,puVar7);
        if (lVar6 < 0) {
          lVar6 = (*pcVar21)(puVar7,puVar17);
          if ((-1 < lVar6) && (lVar6 = (*pcVar21)(puVar9,puVar17), puVar7 = puVar17, -1 < lVar6)) {
            puVar7 = puVar9;
          }
        }
        else {
          lVar6 = (*pcVar21)(puVar7,puVar17);
          if ((lVar6 < 1) && (lVar6 = (*pcVar21)(puVar9,puVar17), puVar7 = puVar9, -1 < lVar6)) {
            puVar7 = puVar17;
          }
        }
        puVar17 = (undefined8 *)((int)puVar20 - iVar11);
        puVar9 = (undefined8 *)((int)puVar20 + iVar11 * -2);
        lVar6 = (*pcVar21)(puVar9,puVar17);
        if (lVar6 < 0) {
          lVar6 = (*pcVar21)(puVar17,puVar20);
          if ((-1 < lVar6) && (lVar6 = (*pcVar21)(puVar9,puVar20), puVar17 = puVar20, -1 < lVar6)) {
            puVar17 = puVar9;
          }
        }
        else {
          lVar6 = (*pcVar21)(puVar17,puVar20);
          if ((lVar6 < 1) && (lVar6 = (*pcVar21)(puVar9,puVar20), puVar17 = puVar9, -1 < lVar6)) {
            puVar17 = puVar20;
          }
        }
        puVar20 = puVar17;
      }
      lVar6 = (*pcVar21)(puVar18,puVar7);
      if (lVar6 < 0) {
        lVar6 = (*pcVar21)(puVar7,puVar20);
        if ((-1 < lVar6) && (lVar6 = (*pcVar21)(puVar18,puVar20), puVar7 = puVar20, -1 < lVar6)) {
          puVar7 = puVar18;
        }
      }
      else {
        lVar6 = (*pcVar21)(puVar7,puVar20);
        if ((lVar6 < 1) && (lVar6 = (*pcVar21)(puVar18,puVar20), puVar7 = puVar18, -1 < lVar6)) {
          puVar7 = puVar20;
        }
      }
    }
    iStack_a8 = uStack_c0 - 1;
    if (bVar5 == 0) {
      uVar8 = *param_1;
      *param_1 = *puVar7;
      *puVar7 = uVar8;
    }
    else if (bVar5 < 2) {
      lVar6 = (long)(int)(uVar19 >> 3);
      puVar18 = param_1;
      do {
        uVar8 = *puVar18;
        lVar6 = lVar6 + -1;
        *puVar18 = *puVar7;
        puVar18 = puVar18 + 1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (0 < lVar6);
    }
    else {
      uVar12 = param_3 & 0xffffffff;
      puVar18 = param_1;
      do {
        uVar1 = *(undefined1 *)puVar18;
        uVar12 = uVar12 - 1;
        *(undefined1 *)puVar18 = *(undefined1 *)puVar7;
        puVar18 = (undefined8 *)((int)puVar18 + 1);
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined8 *)((int)puVar7 + 1);
      } while (0 < (long)uVar12);
    }
    puVar7 = (undefined8 *)((int)param_1 + uVar19);
    puVar9 = (undefined8 *)(iStack_a8 * uVar19 + (int)param_1);
    puVar18 = puVar7;
    puVar20 = puVar7;
    puVar17 = puVar9;
LAB_00129bd8:
    while ((bVar2 = puVar9 < puVar18, !bVar2 && (lVar6 = (*pcVar21)(puVar18,param_1), lVar6 < 1))) {
      if (lVar6 == 0) {
        bVar4 = true;
        if (bVar5 == 0) {
          uVar8 = *puVar20;
          *puVar20 = *puVar18;
          *puVar18 = uVar8;
        }
        else {
          uVar12 = (ulong)(uVar19 >> 3);
          if (bVar5 < 2) {
            puVar14 = puVar20;
            puVar10 = puVar18;
            do {
              uVar8 = *puVar14;
              uVar12 = uVar12 - 1;
              *puVar14 = *puVar10;
              puVar14 = puVar14 + 1;
              *puVar10 = uVar8;
              puVar10 = puVar10 + 1;
            } while (0 < (long)uVar12);
          }
          else {
            uVar12 = param_3 & 0xffffffff;
            puVar14 = puVar20;
            puVar10 = puVar18;
            do {
              uVar1 = *(undefined1 *)puVar14;
              uVar12 = uVar12 - 1;
              *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
              puVar14 = (undefined8 *)((int)puVar14 + 1);
              *(undefined1 *)puVar10 = uVar1;
              puVar10 = (undefined8 *)((int)puVar10 + 1);
            } while (0 < (long)uVar12);
          }
        }
        puVar20 = (undefined8 *)((int)puVar20 + uVar19);
        puVar18 = (undefined8 *)((int)puVar18 + uVar19);
      }
      else {
        puVar18 = (undefined8 *)((int)puVar18 + uVar19);
      }
    }
    while (!bVar2) {
      lVar6 = (*pcVar21)(puVar9,param_1);
      if (lVar6 < 0) goto code_r0x00129d10;
      if (lVar6 == 0) {
        bVar4 = true;
        if (bVar5 == 0) {
          uVar8 = *puVar9;
          *puVar9 = *puVar17;
          *puVar17 = uVar8;
        }
        else {
          uVar12 = (ulong)(uVar19 >> 3);
          if (bVar5 < 2) {
            puVar14 = puVar9;
            puVar10 = puVar17;
            do {
              uVar8 = *puVar14;
              uVar12 = uVar12 - 1;
              *puVar14 = *puVar10;
              puVar14 = puVar14 + 1;
              *puVar10 = uVar8;
              puVar10 = puVar10 + 1;
            } while (0 < (long)uVar12);
          }
          else {
            uVar12 = param_3 & 0xffffffff;
            puVar14 = puVar9;
            puVar10 = puVar17;
            do {
              uVar1 = *(undefined1 *)puVar14;
              uVar12 = uVar12 - 1;
              *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
              puVar14 = (undefined8 *)((int)puVar14 + 1);
              *(undefined1 *)puVar10 = uVar1;
              puVar10 = (undefined8 *)((int)puVar10 + 1);
            } while (0 < (long)uVar12);
          }
        }
        puVar17 = (undefined8 *)((int)puVar17 - uVar19);
      }
      puVar9 = (undefined8 *)((int)puVar9 - uVar19);
      bVar2 = puVar9 < puVar18;
    }
    iVar11 = (int)puVar18 - (int)puVar20;
    uVar12 = (ulong)iVar11;
    if (!bVar4) {
      puVar18 = (undefined8 *)(uStack_c0 * uVar19 + (int)param_1);
      if (puVar18 <= puVar7) {
        return;
      }
      puVar20 = puVar7;
      goto LAB_00129e7c;
    }
    uVar13 = uVar12;
    if ((long)((int)puVar20 - (int)param_1) < (long)uVar12) {
      uVar13 = (long)((int)puVar20 - (int)param_1);
    }
    iVar3 = uStack_c0 * uVar19;
    if (0 < (long)uVar13) {
      puVar7 = (undefined8 *)((int)puVar18 - (uint)uVar13);
      if (bVar5 < 2) {
        lVar6 = (long)(int)((uint)uVar13 >> 3);
        puVar20 = param_1;
        do {
          uVar8 = *puVar20;
          lVar6 = lVar6 + -1;
          *puVar20 = *puVar7;
          puVar20 = puVar20 + 1;
          *puVar7 = uVar8;
          puVar7 = puVar7 + 1;
        } while (0 < lVar6);
      }
      else {
        uVar13 = uVar13 & 0xffffffff;
        puVar20 = param_1;
        do {
          uVar1 = *(undefined1 *)puVar20;
          uVar13 = uVar13 - 1;
          *(undefined1 *)puVar20 = *(undefined1 *)puVar7;
          puVar20 = (undefined8 *)((int)puVar20 + 1);
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined8 *)((int)puVar7 + 1);
        } while (0 < (long)uVar13);
      }
    }
    iVar15 = (int)puVar17 - (int)puVar9;
    uVar16 = (ulong)iVar15;
    uVar13 = (ulong)(int)((int)param_1 + ((iVar3 - (int)puVar17) - uVar19));
    if (uVar16 < uVar13) {
      uVar13 = uVar16;
    }
    if (0 < (long)uVar13) {
      puVar7 = (undefined8 *)((int)param_1 + (iVar3 - (uint)uVar13));
      if (bVar5 < 2) {
        lVar6 = (long)(int)((uint)uVar13 >> 3);
        do {
          uVar8 = *puVar18;
          lVar6 = lVar6 + -1;
          *puVar18 = *puVar7;
          puVar18 = puVar18 + 1;
          *puVar7 = uVar8;
          puVar7 = puVar7 + 1;
        } while (0 < lVar6);
      }
      else {
        uVar13 = uVar13 & 0xffffffff;
        do {
          uVar1 = *(undefined1 *)puVar18;
          uVar13 = uVar13 - 1;
          *(undefined1 *)puVar18 = *(undefined1 *)puVar7;
          puVar18 = (undefined8 *)((int)puVar18 + 1);
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined8 *)((int)puVar7 + 1);
        } while (0 < (long)uVar13);
      }
    }
    if (param_3 < uVar12) {
      if (param_3 == 0) {
        trap(7);
      }
      maybe_qsort(param_1,iVar11 / (int)uVar19,param_3,param_4);
    }
    if (uVar16 <= param_3) {
      return;
    }
    uStack_c0 = iVar15 / (int)uVar19;
    if (param_3 == 0) {
      trap(7);
    }
    param_1 = (undefined8 *)((int)param_1 + (iVar3 - iVar15));
  }
  puVar18 = (undefined8 *)((int)param_1 + uVar19);
  puVar7 = (undefined8 *)(uStack_c0 * uVar19 + (int)param_1);
  if (puVar7 <= puVar18) {
    return;
  }
  puVar20 = puVar18;
LAB_001297c4:
  do {
    if (param_1 < puVar20) {
      puVar17 = (undefined8 *)((int)puVar20 - uVar19);
      lVar6 = (*pcVar21)(puVar17,puVar20);
      if (0 < lVar6) {
        if (bVar5 == 0) {
          uVar8 = *puVar20;
          *puVar20 = *puVar17;
          *puVar17 = uVar8;
          puVar20 = puVar17;
        }
        else if (bVar5 < 2) {
          lVar6 = (long)(int)(uVar19 >> 3);
          puVar9 = puVar20;
          puVar14 = puVar17;
          do {
            uVar8 = *puVar9;
            lVar6 = lVar6 + -1;
            *puVar9 = *puVar14;
            puVar9 = puVar9 + 1;
            *puVar14 = uVar8;
            puVar14 = puVar14 + 1;
            puVar20 = puVar17;
          } while (0 < lVar6);
        }
        else {
          uVar12 = param_3 & 0xffffffff;
          puVar9 = puVar20;
          puVar14 = puVar17;
          do {
            uVar1 = *(undefined1 *)puVar9;
            uVar12 = uVar12 - 1;
            *(undefined1 *)puVar9 = *(undefined1 *)puVar14;
            puVar9 = (undefined8 *)((int)puVar9 + 1);
            *(undefined1 *)puVar14 = uVar1;
            puVar14 = (undefined8 *)((int)puVar14 + 1);
            puVar20 = puVar17;
          } while (0 < (long)uVar12);
        }
        goto LAB_001297c4;
      }
    }
    puVar18 = (undefined8 *)((int)puVar18 + uVar19);
    puVar20 = puVar18;
    if (puVar7 <= puVar18) {
      return;
    }
  } while( true );
code_r0x00129d10:
  if (bVar5 == 0) {
    uVar8 = *puVar18;
    *puVar18 = *puVar9;
    *puVar9 = uVar8;
  }
  else {
    uVar12 = (ulong)(uVar19 >> 3);
    if (bVar5 < 2) {
      puVar14 = puVar18;
      puVar10 = puVar9;
      do {
        uVar8 = *puVar14;
        uVar12 = uVar12 - 1;
        *puVar14 = *puVar10;
        puVar14 = puVar14 + 1;
        *puVar10 = uVar8;
        puVar10 = puVar10 + 1;
      } while (0 < (long)uVar12);
    }
    else {
      uVar12 = param_3 & 0xffffffff;
      puVar14 = puVar18;
      puVar10 = puVar9;
      do {
        uVar1 = *(undefined1 *)puVar14;
        uVar12 = uVar12 - 1;
        *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
        puVar14 = (undefined8 *)((int)puVar14 + 1);
        *(undefined1 *)puVar10 = uVar1;
        puVar10 = (undefined8 *)((int)puVar10 + 1);
      } while (0 < (long)uVar12);
    }
  }
  puVar18 = (undefined8 *)((int)puVar18 + uVar19);
  bVar4 = true;
  puVar9 = (undefined8 *)((int)puVar9 - uVar19);
  goto LAB_00129bd8;
LAB_00129e7c:
  if (param_1 < puVar7) {
    puVar17 = (undefined8 *)((int)puVar7 - uVar19);
    lVar6 = (*pcVar21)(puVar17,puVar7);
    if (0 < lVar6) {
      if (bVar5 == 0) {
        uVar8 = *puVar7;
        *puVar7 = *puVar17;
        *puVar17 = uVar8;
        puVar7 = puVar17;
      }
      else if (bVar5 < 2) {
        lVar6 = (long)(int)(uVar19 >> 3);
        puVar9 = puVar7;
        puVar14 = puVar17;
        do {
          uVar8 = *puVar9;
          lVar6 = lVar6 + -1;
          *puVar9 = *puVar14;
          puVar9 = puVar9 + 1;
          *puVar14 = uVar8;
          puVar14 = puVar14 + 1;
          puVar7 = puVar17;
        } while (0 < lVar6);
      }
      else {
        uVar12 = param_3 & 0xffffffff;
        puVar9 = puVar7;
        puVar14 = puVar17;
        do {
          uVar1 = *(undefined1 *)puVar9;
          uVar12 = uVar12 - 1;
          *(undefined1 *)puVar9 = *(undefined1 *)puVar14;
          puVar9 = (undefined8 *)((int)puVar9 + 1);
          *(undefined1 *)puVar14 = uVar1;
          puVar14 = (undefined8 *)((int)puVar14 + 1);
          puVar7 = puVar17;
        } while (0 < (long)uVar12);
      }
      goto LAB_00129e7c;
    }
  }
  puVar7 = (undefined8 *)((int)puVar20 + uVar19);
  puVar20 = puVar7;
  if (puVar18 <= puVar7) {
    return;
  }
  goto LAB_00129e7c;
}

// 0x0012a0a0  size 0x64
uint maybe_rand(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0030a090;
  lVar2 = maybe___muldi3(*(undefined8 *)(PTR_DAT_0030a090 + 0xa8),0x5851f42d4c957f2d);
  *(long *)(puVar1 + 0xa8) = lVar2 + 1;
  return (uint)((ulong)(lVar2 + 1) >> 0x20) & 0x7fffffff;
}

// 0x0012a108  size 0x60
long maybe__read_r(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  iRam0046a5dc = 0;
  lVar1 = _read(param_2,param_3,param_4);
  if ((lVar1 == -1) && (iRam0046a5dc != 0)) {
    *param_1 = iRam0046a5dc;
  }
  return lVar1;
}

// 0x0012a168  size 0x580
int * _realloc_r(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  
  if (param_2 == (int *)0x0) {
    piVar1 = (int *)_malloc_r(param_1,param_3);
    return piVar1;
  }
  piVar1 = param_2 + -2;
  __malloc_lock();
  uVar2 = param_2[-1];
  uVar6 = (int)param_3 + 0x13;
  uVar8 = uVar2 & 0xfffffffc;
  if (uVar6 < 0x1f) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = uVar6 & 0xfffffff0;
  }
  if (uVar8 < uVar6) {
    puVar9 = (undefined *)((int)piVar1 + uVar8);
    if (puVar9 == PTR_DAT_0030a0a8) {
      uVar13 = *(uint *)(puVar9 + 4);
LAB_0012a268:
      uVar13 = uVar13 & 0xfffffffc;
      if (puVar9 == PTR_DAT_0030a0a8) {
        if (uVar6 + 0x10 <= uVar13 + uVar8) {
          PTR_DAT_0030a0a8 = (undefined *)((int)piVar1 + uVar6);
          *(uint *)(PTR_DAT_0030a0a8 + 4) = (uVar13 + uVar8) - uVar6 | 1;
          param_2[-1] = param_2[-1] & 1U | uVar6;
          __malloc_unlock(param_1);
          return param_2;
        }
        uVar2 = param_2[-1];
      }
      else {
        uVar5 = uVar13 + uVar8;
        if (uVar6 <= uVar5) {
          iVar3 = *(int *)(puVar9 + 8);
          iVar7 = *(int *)(puVar9 + 0xc);
          *(int *)(iVar3 + 0xc) = iVar7;
          *(int *)(iVar7 + 8) = iVar3;
          goto LAB_0012a668;
        }
        uVar2 = param_2[-1];
      }
    }
    else {
      uVar13 = *(uint *)(puVar9 + 4);
      if ((*(uint *)(puVar9 + (uVar13 & 0xfffffffe) + 4) & 1) == 0) goto LAB_0012a268;
      puVar9 = (undefined *)0x0;
      uVar13 = 0;
      uVar2 = param_2[-1];
    }
    if ((uVar2 & 1) == 0) {
      piVar12 = (int *)((int)piVar1 - *piVar1);
      uVar2 = piVar12[1] & 0xfffffffc;
      if (puVar9 == (undefined *)0x0) {
LAB_0012a468:
        uVar5 = uVar2 + uVar8;
        if ((piVar12 == (int *)0x0) || (uVar5 < uVar6)) goto LAB_0012a54c;
        iVar3 = piVar12[3];
        iVar7 = piVar12[2];
      }
      else {
        if (puVar9 == PTR_DAT_0030a0a8) {
          uVar13 = uVar13 + uVar2 + uVar8;
          if (uVar6 + 0x10 <= uVar13) {
            iVar3 = piVar12[3];
            iVar7 = piVar12[2];
            *(int *)(iVar7 + 0xc) = iVar3;
            *(int *)(iVar3 + 8) = iVar7;
            uVar8 = uVar8 - 4;
            piVar4 = piVar12 + 2;
            if (uVar8 < 0x25) {
              piVar1 = piVar4;
              piVar10 = param_2;
              if (0x13 < uVar8) {
                piVar10 = param_2 + 2;
                piVar1 = piVar12 + 4;
                *piVar4 = *param_2;
                piVar12[3] = param_2[1];
                if (0x1b < uVar8) {
                  iVar3 = *piVar10;
                  piVar10 = param_2 + 4;
                  *piVar1 = iVar3;
                  piVar1 = piVar12 + 6;
                  piVar12[5] = param_2[3];
                  if (0x23 < uVar8) {
                    iVar3 = *piVar10;
                    piVar10 = param_2 + 6;
                    *piVar1 = iVar3;
                    piVar1 = piVar12 + 8;
                    piVar12[7] = param_2[5];
                  }
                }
              }
              *piVar1 = *piVar10;
              piVar1[1] = piVar10[1];
              piVar1[2] = piVar10[2];
            }
            else {
              memcpy(piVar4,param_2);
            }
            PTR_DAT_0030a0a8 = (undefined *)((int)piVar12 + uVar6);
            *(uint *)(PTR_DAT_0030a0a8 + 4) = uVar13 - uVar6 | 1;
            piVar12[1] = piVar12[1] & 1U | uVar6;
            goto LAB_0012a6cc;
          }
          goto LAB_0012a468;
        }
        uVar5 = uVar13 + uVar2 + uVar8;
        if (uVar5 < uVar6) goto LAB_0012a468;
        iVar3 = *(int *)(puVar9 + 8);
        iVar7 = *(int *)(puVar9 + 0xc);
        *(int *)(iVar3 + 0xc) = iVar7;
        *(int *)(iVar7 + 8) = iVar3;
        iVar3 = piVar12[3];
        iVar7 = piVar12[2];
      }
      piVar4 = piVar12 + 2;
      *(int *)(iVar7 + 0xc) = iVar3;
      *(int *)(iVar3 + 8) = iVar7;
      uVar8 = uVar8 - 4;
      piVar1 = piVar12;
      if (uVar8 < 0x25) {
        piVar10 = piVar4;
        piVar11 = param_2;
        if (0x13 < uVar8) {
          piVar11 = param_2 + 2;
          piVar10 = piVar12 + 4;
          *piVar4 = *param_2;
          piVar12[3] = param_2[1];
          if (0x1b < uVar8) {
            iVar3 = *piVar11;
            piVar11 = param_2 + 4;
            *piVar10 = iVar3;
            piVar10 = piVar12 + 6;
            piVar12[5] = param_2[3];
            if (0x23 < uVar8) {
              iVar3 = *piVar11;
              piVar11 = param_2 + 6;
              *piVar10 = iVar3;
              piVar10 = piVar12 + 8;
              piVar12[7] = param_2[5];
            }
          }
        }
        *piVar10 = *piVar11;
        piVar10[1] = piVar11[1];
        piVar10[2] = piVar11[2];
        uVar2 = piVar12[1];
        param_2 = piVar4;
      }
      else {
        memcpy(piVar4,param_2);
        uVar2 = piVar12[1];
        param_2 = piVar4;
      }
    }
    else {
LAB_0012a54c:
      piVar4 = (int *)_malloc_r(param_1,param_3);
      if (piVar4 == (int *)0x0) {
        __malloc_unlock(param_1);
        return (int *)0x0;
      }
      uVar2 = param_2[-1];
      uVar13 = uVar8 - 4;
      if (piVar4 + -2 != (int *)((int)piVar1 + (uVar2 & 0xfffffffe))) {
        if (uVar13 < 0x25) {
          piVar1 = param_2;
          piVar12 = piVar4;
          if (0x13 < uVar13) {
            piVar1 = param_2 + 2;
            piVar12 = piVar4 + 2;
            *piVar4 = *param_2;
            piVar4[1] = param_2[1];
            if (0x1b < uVar13) {
              iVar3 = *piVar1;
              piVar1 = param_2 + 4;
              *piVar12 = iVar3;
              piVar12 = piVar4 + 4;
              piVar4[3] = param_2[3];
              if (0x23 < uVar13) {
                iVar3 = *piVar1;
                piVar1 = param_2 + 6;
                *piVar12 = iVar3;
                piVar12 = piVar4 + 6;
                piVar4[5] = param_2[5];
              }
            }
          }
          *piVar12 = *piVar1;
          piVar12[1] = piVar1[1];
          piVar12[2] = piVar1[2];
        }
        else {
          memcpy(piVar4,param_2);
        }
        _free_r(param_1,param_2);
        goto LAB_0012a6cc;
      }
      uVar5 = uVar8 + (piVar4[-1] & 0xfffffffcU);
    }
  }
  else {
    uVar5 = uVar8;
  }
LAB_0012a668:
  uVar8 = uVar5 - uVar6;
  piVar4 = param_2;
  if (uVar8 < 0x10) {
    piVar1[1] = uVar2 & 1 | uVar5;
    *(uint *)((int)piVar1 + uVar5 + 4) = *(uint *)((int)piVar1 + uVar5 + 4) | 1;
  }
  else {
    piVar1[1] = uVar2 & 1 | uVar6;
    *(uint *)((int)piVar1 + uVar6 + 4) = uVar8 | 1;
    *(uint *)((int)piVar1 + uVar8 + uVar6 + 4) = *(uint *)((int)piVar1 + uVar8 + uVar6 + 4) | 1;
    _free_r(param_1,(int)piVar1 + uVar6 + 8);
  }
LAB_0012a6cc:
  __malloc_unlock(param_1);
  return piVar4;
}

// 0x0012a708  size 0x30
undefined8 maybe___fflush_line(int param_1)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_1 + 0xc) & 9) == 9) {
    uVar1 = maybe__fflush_r();
    return uVar1;
  }
  return 0;
}

// 0x0012a740  size 0x174
undefined4 maybe___srefill_r(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  
  puVar6 = PTR_DAT_0030a090;
  puVar7 = (undefined4 *)param_1;
  puVar1 = (undefined *)puVar7[0x15];
  if (puVar1 == (undefined *)0x0) {
    puVar7[0x15] = PTR_DAT_0030a090;
    iVar2 = *(int *)(puVar6 + 0x38);
  }
  else {
    iVar2 = *(int *)(puVar1 + 0x38);
    puVar6 = puVar1;
  }
  if (iVar2 == 0) {
    __sinit(puVar6);
    uVar5 = *(ushort *)(puVar7 + 3);
  }
  else {
    uVar5 = *(ushort *)(puVar7 + 3);
  }
  uVar3 = 0xffffffff;
  puVar7[1] = 0;
  if ((uVar5 & 0x20) == 0) {
    if ((uVar5 & 4) == 0) {
      if ((uVar5 & 0x10) == 0) {
        return 0xffffffff;
      }
      if ((uVar5 & 8) != 0) {
        lVar4 = maybe__fflush_r(param_1);
        if (lVar4 != 0) {
          return 0xffffffff;
        }
        puVar7[2] = 0;
        uVar5 = *(ushort *)(puVar7 + 3) & 0xfff7;
        puVar7[6] = 0;
        *(ushort *)(puVar7 + 3) = uVar5;
      }
      *(ushort *)(puVar7 + 3) = uVar5 | 4;
    }
    else if ((undefined4 *)puVar7[0xc] != (undefined4 *)0x0) {
      if ((undefined4 *)puVar7[0xc] == puVar7 + 0x10) {
        iVar2 = puVar7[0xf];
      }
      else {
        _free_r(puVar7[0x15]);
        iVar2 = puVar7[0xf];
      }
      puVar7[0xc] = 0;
      puVar7[1] = iVar2;
      if (iVar2 != 0) {
        *puVar7 = puVar7[0xe];
        return 0;
      }
    }
    if (puVar7[4] == 0) {
      maybe___smakebuf(param_1);
      uVar5 = *(ushort *)(puVar7 + 3);
    }
    else {
      uVar5 = *(ushort *)(puVar7 + 3);
    }
    if ((uVar5 & 3) != 0) {
      maybe__fwalk(puVar7[0x15],0x12a708);
    }
    *puVar7 = puVar7[4];
    lVar4 = (*(code *)puVar7[8])(puVar7[7],puVar7[4],puVar7[5]);
    uVar3 = 0;
    uVar5 = *(ushort *)(puVar7 + 3) & 0xdfff;
    puVar7[1] = (int)lVar4;
    *(ushort *)(puVar7 + 3) = uVar5;
    if (lVar4 < 1) {
      if (lVar4 == 0) {
        uVar5 = uVar5 | 0x20;
      }
      else {
        uVar5 = uVar5 | 0x40;
        puVar7[1] = 0;
      }
      *(ushort *)(puVar7 + 3) = uVar5;
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

// 0x0012a8c0  size 0x48
uint __srget(undefined4 *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = maybe___srefill_r();
  if (lVar2 == 0) {
    param_1[1] = param_1[1] + -1;
    uVar1 = (uint)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x0012a908  size 0x58
void maybe__sbrk_r(int *param_1,undefined8 param_2)

{
  long lVar1;
  
  iRam0046a5dc = 0;
  lVar1 = _sbrk(param_2);
  if ((lVar1 == -1) && (iRam0046a5dc != 0)) {
    *param_1 = iRam0046a5dc;
  }
  return;
}

// 0x0012a960  size 0x70
undefined4 maybe__init_signal_r(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  
  if (*(int *)((int)param_1 + 0x1d4) == 0) {
    lVar3 = _malloc_r(param_1,0x80);
    uVar1 = 0xffffffff;
    *(int *)((int)param_1 + 0x1d4) = (int)lVar3;
    if (lVar3 != 0) {
      puVar2 = (undefined4 *)((int)lVar3 + 0x7c);
      iVar4 = 0x1f;
      do {
        iVar4 = iVar4 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + -1;
      } while (-1 < iVar4);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x0012a9d0  size 0x80
undefined4 maybe__signal_r(undefined4 *param_1,ulong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if (param_2 < 0x20) {
    iVar2 = param_1[0x75];
    if (iVar2 == 0) {
      lVar3 = maybe__init_signal_r();
      if (lVar3 != 0) {
        return 0xffffffff;
      }
      iVar2 = param_1[0x75];
    }
    puVar4 = (undefined4 *)((int)param_2 * 4 + iVar2);
    uVar1 = *puVar4;
    *puVar4 = param_3;
  }
  else {
    uVar1 = 0xffffffff;
    *param_1 = 0x16;
  }
  return uVar1;
}

// 0x0012aa50  size 0xd0
undefined8 _raise_r(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)param_1;
  if (param_2 < 0x20) {
    iVar4 = puVar6[0x75];
    if (iVar4 == 0) {
      lVar3 = maybe__init_signal_r();
      if (lVar3 != 0) {
        return 0xffffffffffffffff;
      }
      iVar4 = puVar6[0x75];
    }
    puVar5 = (undefined4 *)((int)param_2 * 4 + iVar4);
    pcVar1 = (code *)*puVar5;
    if (pcVar1 == (code *)0x0) {
      uVar2 = maybe__getpid_r(param_1);
      uVar2 = maybe__kill_r(param_1,uVar2,param_2);
      return uVar2;
    }
    uVar2 = 0;
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0xffffffff) {
        uVar2 = 1;
        *puVar6 = 0x16;
      }
      else {
        *puVar5 = 0;
        (*pcVar1)(param_2);
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
    *puVar6 = 0x16;
  }
  return uVar2;
}

// 0x0012ab28  size 0x98
undefined4 maybe___sigtramp_r(int param_1,ulong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = 0xffffffff;
  if (param_2 < 0x20) {
    iVar5 = *(int *)(param_1 + 0x1d4);
    if (iVar5 == 0) {
      lVar3 = maybe__init_signal_r();
      if (lVar3 != 0) {
        return 0xffffffff;
      }
      iVar5 = *(int *)(param_1 + 0x1d4);
    }
    puVar4 = (undefined4 *)((int)param_2 * 4 + iVar5);
    pcVar1 = (code *)*puVar4;
    uVar2 = 1;
    if (((pcVar1 != (code *)0x0) && (uVar2 = 2, pcVar1 != (code *)0xffffffff)) &&
       (uVar2 = 3, pcVar1 != (code *)0x1)) {
      *puVar4 = 0;
      (*pcVar1)(param_2);
      uVar2 = 0;
    }
  }
  return uVar2;
}

// 0x0012abc0  size 0x20
void raise(undefined8 param_1)

{
  _raise_r(PTR_DAT_0030a090,param_1);
  return;
}

// 0x0012abe0  size 0x24
void signal(undefined8 param_1,undefined8 param_2)

{
  maybe__signal_r(PTR_DAT_0030a090,param_1,param_2);
  return;
}

// 0x0012ac48  size 0x5c
void maybe__kill_r(int *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  iRam0046a5dc = 0;
  lVar1 = maybe__exit_hook(param_2,param_3);
  if ((lVar1 == -1) && (iRam0046a5dc != 0)) {
    *param_1 = iRam0046a5dc;
  }
  return;
}

// 0x0012aca8  size 0x1c
undefined4 maybe__getpid_r(void)

{
  return 1;
}

// 0x0012ad48  size 0x90
void sprintf(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *apuStack_c0 [2];
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  undefined *puStack_6c;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_ac = 0x7fffffff;
  uStack_b8 = 0x7fffffff;
  uStack_b4 = 0x208;
  puStack_6c = PTR_DAT_0030a090;
  apuStack_c0[0] = param_1;
  puStack_b0 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  vfprintf(apuStack_c0,param_2,&uStack_30);
  *apuStack_c0[0] = 0;
  return;
}

// 0x0012add8  size 0x60
int __sread(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = maybe__read_r(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),param_2,
                        param_3);
  if (iVar1 < 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xefff;
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  }
  return iVar1;
}

// 0x0012ae40  size 0x80
undefined4 __swrite(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0xc) & 0x100) != 0) {
    maybe__lseek_r(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),0,2);
  }
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xefff;
  uVar1 = maybe__write_r(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),param_2,
                         param_3);
  return uVar1;
}

// 0x0012aec0  size 0x60
void __sseek(int param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ushort uVar2;
  
  lVar1 = maybe__lseek_r(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),param_2,
                         param_3);
  if (lVar1 == -1) {
    uVar2 = *(ushort *)(param_1 + 0xc) & 0xefff;
  }
  else {
    *(int *)(param_1 + 0x50) = (int)lVar1;
    uVar2 = *(ushort *)(param_1 + 0xc) | 0x1000;
  }
  *(ushort *)(param_1 + 0xc) = uVar2;
  return;
}

// 0x0012af28  size 0x1c
void __sclose(int param_1)

{
  maybe__close_r(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe));
  return;
}

// 0x0012af48  size 0x190
undefined1 (*) [16] maybe_strchr(undefined1 (*param_1) [16],ulong param_2)

{
  byte bVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 in_a1_udw;
  ulong uVar6;
  undefined8 in_a2_udw;
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 in_a3_udw;
  undefined8 in_t0_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  param_2 = param_2 & 0xff;
  if (((uint)param_1 & 7) != 0) goto LAB_0012b0b8;
  uVar8 = param_2 * 0x1010101 + (param_2 * 0x1010101 << 0x20);
  if (((uint)param_1 & 0xf) == 0) {
    while( true ) {
      auVar7._8_8_ = in_a2_udw;
      auVar7._0_8_ = 0x101010101010101;
      auVar9._8_8_ = in_t0_udw;
      auVar9._0_8_ = 0x8080808080808080;
      auVar10 = _pcpyld(auVar7,auVar7);
      auVar3 = _psubb(*param_1,auVar10);
      auVar7 = _pcpyld(auVar9,auVar9);
      auVar4 = _pand(auVar3,~*param_1);
      auVar3._8_8_ = in_a3_udw;
      auVar3._0_8_ = uVar8;
      auVar5._8_8_ = in_a3_udw;
      auVar5._0_8_ = uVar8;
      auVar9 = _pcpyld(auVar3,auVar5);
      auVar3 = _pand(auVar4,auVar7);
      auVar4._8_8_ = in_a3_udw;
      auVar4._0_8_ = uVar8;
      auVar5 = _pcpyud(auVar3,auVar4);
      if (auVar3._0_8_ != 0 || auVar5._0_8_ != 0) break;
      auVar3 = _pxor(*param_1,auVar9);
      auVar5 = _psubb(auVar3,auVar10);
      in_t0_udw = auVar9._8_8_;
      auVar3 = _pand(auVar5,~auVar3);
      auVar5 = _pand(auVar3,auVar7);
      in_a2_udw = auVar7._8_8_;
      auVar10._8_8_ = in_a1_udw;
      auVar10._0_8_ = param_2;
      auVar3 = _pcpyud(auVar5,auVar10);
      if (auVar3._0_8_ != 0 || auVar5._0_8_ != 0) {
        uVar8 = (ulong)(byte)(*param_1)[0];
        goto LAB_0012b0bc;
      }
      param_1 = param_1 + 1;
    }
    uVar8 = (ulong)(byte)(*param_1)[0];
  }
  else {
    uVar6 = *(ulong *)*param_1;
    if ((uVar6 + 0xfefefefefefefeff & ~uVar6 & 0x8080808080808080) == 0) {
      if (((uVar6 ^ uVar8) + 0xfefefefefefefeff & ~(uVar6 ^ uVar8) & 0x8080808080808080) == 0) {
        do {
          param_1 = (undefined1 (*) [16])(*param_1 + 8);
          uVar6 = *(ulong *)*param_1;
          if ((uVar6 + 0xfefefefefefefeff & ~uVar6 & 0x8080808080808080) != 0) goto LAB_0012b0b8;
        } while (((uVar6 ^ uVar8) + 0xfefefefefefefeff & ~(uVar6 ^ uVar8) & 0x8080808080808080) == 0
                );
        uVar8 = (ulong)(byte)(*param_1)[0];
      }
      else {
        uVar8 = (ulong)(byte)(*param_1)[0];
      }
    }
    else {
      uVar8 = (ulong)(byte)(*param_1)[0];
    }
  }
LAB_0012b0bc:
  do {
    if (uVar8 == 0) {
      bVar1 = (*param_1)[0];
LAB_0012b0c8:
      pauVar2 = (undefined1 (*) [16])0x0;
      if (bVar1 == param_2) {
        pauVar2 = param_1;
      }
      return pauVar2;
    }
    if (uVar8 == param_2) {
      bVar1 = (*param_1)[0];
      goto LAB_0012b0c8;
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
LAB_0012b0b8:
    uVar8 = (ulong)(byte)(*param_1)[0];
  } while( true );
}

// 0x0012b0d8  size 0x144
int strcmp(undefined8 param_1,undefined1 (*param_2) [16])

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  undefined8 in_a0_udw;
  undefined8 in_a2_udw;
  undefined1 auVar8 [16];
  undefined8 in_a3_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar7 = (int)((ulong)param_1 >> 0x20);
  pauVar6 = (undefined1 (*) [16])param_1;
  if ((((uint)pauVar6 | (uint)param_2) & 7) == 0) {
    auVar9._8_8_ = in_a3_udw;
    auVar9._0_8_ = 0x101010101010101;
    auVar8._8_8_ = in_a2_udw;
    auVar8._0_8_ = 0x8080808080808080;
    if ((((uint)pauVar6 | (uint)param_2) & 0xf) == 0) {
      auVar11 = _pcpyld(auVar9,auVar9);
      auVar12 = _pcpyld(auVar8,auVar8);
      auVar9 = _psubw(*param_2,*pauVar6);
      auVar10._8_8_ = in_a0_udw;
      auVar10._0_8_ = param_1;
      auVar8 = _pcpyud(auVar9,auVar10);
      if (auVar8._0_8_ == 0 && auVar9._0_8_ == 0) {
        auVar8 = *pauVar6;
        do {
          auVar9 = _psubb(auVar8,auVar11);
          auVar8 = _pand(auVar9,~auVar8);
          auVar8 = _pand(auVar8,auVar12);
          auVar2._4_4_ = iVar7;
          auVar2._0_4_ = pauVar6;
          auVar2._8_8_ = in_a0_udw;
          auVar9 = _pcpyud(auVar8,auVar2);
          pauVar6 = pauVar6 + 1;
          iVar7 = (int)pauVar6 >> 0x1f;
          if (auVar9._0_8_ != 0 || auVar8._0_8_ != 0) {
            return 0;
          }
          param_2 = param_2 + 1;
          auVar8 = *pauVar6;
          auVar10 = _psubw(auVar8,*param_2);
          auVar3._8_8_ = in_a0_udw;
          auVar3._0_8_ = (long)(int)pauVar6;
          auVar9 = _pcpyud(auVar10,auVar3);
        } while (auVar9._0_8_ == 0 && auVar10._0_8_ == 0);
        cVar4 = (*pauVar6)[0];
      }
      else {
        cVar4 = (*pauVar6)[0];
      }
    }
    else if (*(long *)*pauVar6 == *(long *)*param_2) {
      uVar5 = *(ulong *)*pauVar6;
      do {
        pauVar6 = (undefined1 (*) [16])(*pauVar6 + 8);
        if ((uVar5 + 0xfefefefefefefeff & ~uVar5 & 0x8080808080808080) != 0) {
          return 0;
        }
        param_2 = (undefined1 (*) [16])(*param_2 + 8);
        uVar5 = *(ulong *)*pauVar6;
      } while (*(ulong *)*param_2 == uVar5);
      cVar4 = (*pauVar6)[0];
    }
    else {
      cVar4 = (*pauVar6)[0];
    }
  }
  else {
    cVar4 = (*pauVar6)[0];
  }
  do {
    bVar1 = (*pauVar6)[0];
    if (cVar4 == '\0') {
LAB_0012b210:
      return (uint)bVar1 - (uint)(byte)(*param_2)[0];
    }
    if ((long)(int)(char)bVar1 != (long)(char)(*param_2)[0]) {
      bVar1 = (*pauVar6)[0];
      goto LAB_0012b210;
    }
    pauVar6 = (undefined1 (*) [16])(*pauVar6 + 1);
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    cVar4 = (*pauVar6)[0];
  } while( true );
}

// 0x0012b220  size 0x114
void maybe_strcpy(ulong *param_1,undefined1 (*param_2) [16])

{
  char cVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 in_a0_udw;
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_t1_udw;
  undefined4 uVar9;
  undefined4 in_register_0000009c;
  undefined4 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  if ((((uint)param_2 | (uint)param_1) & 7) == 0) {
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 0x8080808080808080;
    if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
      auVar4._8_4_ = in_t1_udw;
      auVar4._0_8_ = 0x101010101010101;
      auVar4._12_4_ = in_register_0000009c;
      auVar6._8_4_ = in_t1_udw;
      auVar6._0_8_ = 0x101010101010101;
      auVar6._12_4_ = in_register_0000009c;
      auVar12 = _pcpyld(auVar4,auVar6);
      uVar7 = *(undefined4 *)*param_2;
      uVar8 = *(undefined4 *)(*param_2 + 4);
      uVar9 = *(undefined4 *)(*param_2 + 8);
      uVar10 = *(undefined4 *)(*param_2 + 0xc);
      auVar6 = _pcpyld(auVar3,auVar3);
      auVar3 = _psubb(*param_2,auVar12);
      auVar3 = _pand(auVar3,~*param_2);
      auVar3 = _pand(auVar3,auVar6);
      auVar4 = _pcpyud(auVar3,*param_2);
      pauVar5 = param_2;
      if (auVar3._0_8_ == 0 && auVar4._0_8_ == 0) {
        do {
          *(undefined4 *)param_1 = uVar7;
          *(undefined4 *)((int)param_1 + 4) = uVar8;
          *(undefined4 *)(param_1 + 1) = uVar9;
          *(undefined4 *)((int)param_1 + 0xc) = uVar10;
          param_2 = pauVar5 + 1;
          uVar7 = *(undefined4 *)*param_2;
          uVar8 = *(undefined4 *)(pauVar5[1] + 4);
          uVar9 = *(undefined4 *)(pauVar5[1] + 8);
          uVar10 = *(undefined4 *)(pauVar5[1] + 0xc);
          auVar3 = _psubb(*param_2,auVar12);
          auVar3 = _pand(auVar3,~*param_2);
          auVar3 = _pand(auVar3,auVar6);
          auVar4 = _pcpyud(auVar3,*param_2);
          param_1 = param_1 + 2;
          pauVar5 = param_2;
        } while (auVar3._0_8_ == 0 && auVar4._0_8_ == 0);
      }
    }
    else {
      uVar11 = *(ulong *)*param_2;
      uVar2 = uVar11 + 0xfefefefefefefeff & ~uVar11;
      while ((uVar2 & 0x8080808080808080) == 0) {
        *param_1 = uVar11;
        param_2 = (undefined1 (*) [16])(*param_2 + 8);
        uVar11 = *(ulong *)*param_2;
        param_1 = param_1 + 1;
        uVar2 = uVar11 + 0xfefefefefefefeff & ~uVar11;
      }
    }
  }
  do {
    cVar1 = (*param_2)[0];
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    *(char *)param_1 = cVar1;
    param_1 = (ulong *)((int)param_1 + 1);
  } while (cVar1 != '\0');
  return;
}

// 0x0012b338  size 0x138
int strlen(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 in_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  undefined8 in_a0_udw;
  ulong in_a2_udw;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pauVar4 = param_1;
  if (((uint)param_1 & 7) == 0) {
    auVar2._8_8_ = in_v0_udw;
    auVar2._0_8_ = 0x101010101010101;
    if (((uint)param_1 & 0xf) == 0) {
      auVar5 = _pcpyld(auVar2,auVar2);
      auVar3._8_8_ = in_a0_udw;
      auVar3._0_8_ = 0x8080808080808080;
      auVar2 = _psubb(*param_1,auVar5);
      auVar6 = _pcpyld(auVar3,auVar3);
      auVar2 = _pand(auVar2,~*param_1);
      auVar2 = _pand(auVar2,auVar6);
      auVar3 = _pcpyud(auVar2,auVar5);
      if (auVar3._0_8_ == 0 && auVar2._0_8_ == 0) {
        do {
          pauVar4 = pauVar4 + 1;
          auVar2 = _psubb(*pauVar4,auVar5);
          auVar2 = _pand(auVar2,~*pauVar4);
          auVar3 = _pand(auVar2,auVar6);
          auVar1._8_8_ = 0;
          auVar1._0_8_ = in_a2_udw;
          auVar2 = _pcpyud(auVar3,auVar1 << 0x40);
        } while (auVar2._0_8_ == 0 && auVar3._0_8_ == 0);
      }
    }
    else if ((*(ulong *)*param_1 + 0xfefefefefefefeff & ~*(ulong *)*param_1 & 0x8080808080808080) ==
             0) {
      do {
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + 8);
      } while ((*(ulong *)*pauVar4 + 0xfefefefefefefeff & ~*(ulong *)*pauVar4 & 0x8080808080808080)
               == 0);
    }
  }
  for (; (*pauVar4)[0] != '\0'; pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1)) {
  }
  return (int)pauVar4 - (int)param_1;
}

// 0x0012b470  size 0x1bc
undefined8 maybe_strncpy(undefined8 param_1,undefined1 (*param_2) [16],uint param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 in_a0_udw;
  uint uVar15;
  char *pcVar16;
  undefined8 in_a3_udw;
  undefined8 in_t1_udw;
  undefined1 auVar17 [16];
  undefined8 in_t2_udw;
  undefined1 auVar18 [16];
  
  pcVar16 = (char *)param_1;
  uVar15 = (uint)param_2 | (uint)pcVar16;
  if ((uVar15 & 7) != 0) goto LAB_0012b5d8;
  uVar6 = 8;
  if ((uVar15 & 0xf) == 0) {
    uVar6 = 0x10;
  }
  if ((uVar15 & 0xf) == 0) {
    if (param_3 < uVar6) goto LAB_0012b5d8;
    auVar13._8_8_ = in_a3_udw;
    auVar13._0_8_ = 0x101010101010101;
    auVar3._8_8_ = in_a3_udw;
    auVar3._0_8_ = 0x101010101010101;
    auVar17 = _pcpyld(auVar13,auVar3);
    auVar12 = _psubb(~*param_2,auVar17);
    auVar4._8_8_ = in_a3_udw;
    auVar4._0_8_ = 0x8080808080808080;
    auVar5._8_8_ = in_a3_udw;
    auVar5._0_8_ = 0x8080808080808080;
    auVar18 = _pcpyld(auVar4,auVar5);
    auVar12 = _pand(auVar12,~*param_2);
    auVar13 = _pand(auVar12,auVar18);
    auVar12._8_8_ = in_a0_udw;
    auVar12._0_8_ = param_1;
    auVar12 = _pcpyud(auVar13,auVar12);
    if (auVar13._0_8_ == 0 && auVar12._0_8_ == 0) {
      puVar11 = *param_2;
      uVar7 = *(undefined4 *)(*param_2 + 4);
      uVar8 = *(undefined4 *)(*param_2 + 8);
      uVar9 = *(undefined4 *)(*param_2 + 0xc);
      param_3 = param_3 - 0x10;
      param_2 = param_2 + 1;
      *(undefined4 *)pcVar16 = *(undefined4 *)puVar11;
      *(undefined4 *)(pcVar16 + 4) = uVar7;
      *(undefined4 *)(pcVar16 + 8) = uVar8;
      *(undefined4 *)(pcVar16 + 0xc) = uVar9;
      pcVar16 = pcVar16 + 0x10;
      if (0xf < param_3) {
        auVar12 = _psubb(*param_2,auVar17);
        auVar12 = _pand(auVar12,~*param_2);
        auVar12 = _pand(auVar12,auVar18);
        auVar2._8_8_ = in_a0_udw;
        auVar2._0_8_ = param_1;
        auVar13 = _pcpyud(auVar12,auVar2);
        if (auVar12._0_8_ != 0 || auVar13._0_8_ != 0) {
          goto LAB_0012b5d8;
        }
        uVar14 = *(undefined8 *)*param_2;
        goto LAB_0012b5a0;
      }
    }
  }
  else {
    if (param_3 < uVar6) goto LAB_0012b5d8;
    auVar17._8_8_ = in_t1_udw;
    auVar17._0_8_ = 0x101010101010101;
    auVar18._8_8_ = in_t2_udw;
    auVar18._0_8_ = 0x8080808080808080;
    if ((*(ulong *)*param_2 + 0xfefefefefefefeff & ~*(ulong *)*param_2 & 0x8080808080808080) == 0) {
      uVar14 = *(undefined8 *)*param_2;
LAB_0012b5a0:
      while( true ) {
        param_3 = param_3 - 8;
        param_2 = (undefined1 (*) [16])(*param_2 + 8);
        *(undefined8 *)pcVar16 = uVar14;
        pcVar16 = pcVar16 + 8;
        if ((param_3 < 8) ||
           ((*(ulong *)*param_2 - auVar17._0_8_ & ~*(ulong *)*param_2 & auVar18._0_8_) != 0)) break;
        uVar14 = *(undefined8 *)*param_2;
      }
    }
  }
LAB_0012b5d8:
  do {
    uVar15 = param_3;
    if (uVar15 == 0) {
      return param_1;
    }
    cVar1 = (*param_2)[0];
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    *pcVar16 = cVar1;
    pcVar16 = pcVar16 + 1;
    param_3 = uVar15 - 1;
  } while (cVar1 != '\0');
  uVar6 = uVar15 - 2;
  uVar15 = uVar15 - 1;
  while (uVar10 = uVar6, uVar15 != 0) {
    *pcVar16 = '\0';
    pcVar16 = pcVar16 + 1;
    uVar6 = uVar10 - 1;
    uVar15 = uVar10;
  }
  return param_1;
}

// 0x0012b630  size 0x50
char * maybe_strrchr(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (cVar1 == param_2) {
      pcVar2 = param_1;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (param_2 != '\0') {
    param_1 = pcVar2;
  }
  return param_1;
}

// 0x0012b680  size 0x230
ulong _strtol_r(undefined4 *param_1,char *param_2,long param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  
  bVar3 = false;
  pcVar12 = param_2;
  do {
    pcVar11 = pcVar12;
    lVar10 = (long)*pcVar11;
    pcVar12 = pcVar11 + 1;
  } while ((*(byte *)((int)&PTR_DAT_003600f1 + (int)*pcVar11) & 8) != 0);
  if (lVar10 == 0x2d) {
    lVar10 = (long)*pcVar12;
    pcVar12 = pcVar11 + 2;
    bVar3 = true;
  }
  else if (lVar10 == 0x2b) {
    lVar10 = (long)*pcVar12;
    pcVar12 = pcVar11 + 2;
  }
  if ((((param_4 == 0) || (param_4 == 0x10)) && (lVar10 == 0x30)) &&
     ((*pcVar12 == 'x' || (*pcVar12 == 'X')))) {
    lVar10 = (long)pcVar12[1];
    pcVar12 = pcVar12 + 2;
    param_4 = 0x10;
  }
  if ((param_4 == 0) && (param_4 = 8, lVar10 != 0x30)) {
    param_4 = 10;
  }
  uVar13 = 0x8000000000000000;
  if (!bVar3) {
    uVar13 = 0x7fffffffffffffff;
  }
  iVar4 = maybe___umoddi3(uVar13,param_4);
  uVar5 = maybe___udivdi3(uVar13,param_4);
  lVar8 = 0;
  uVar7 = 0;
  do {
    iVar9 = (int)lVar10;
    bVar1 = *(byte *)((int)&PTR_DAT_003600f1 + iVar9);
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 3) == 0) {
LAB_0012b840:
        if (lVar8 < 0) {
          uVar7 = 0x8000000000000000;
          if (!bVar3) {
            uVar7 = 0x7fffffffffffffff;
          }
          *param_1 = 0x22;
        }
        else if (bVar3) {
          uVar7 = -uVar7;
        }
        if (param_3 != 0) {
          if (lVar8 != 0) {
            param_2 = pcVar12 + -1;
          }
          *(undefined4 *)param_3 = param_2;
        }
        return uVar7;
      }
      iVar2 = iVar9 + -0x37;
      if ((bVar1 & 1) == 0) {
        iVar2 = iVar9 + -0x57;
      }
    }
    else {
      iVar2 = iVar9 + -0x30;
    }
    lVar10 = (long)iVar2;
    if (param_4 <= lVar10) goto LAB_0012b840;
    if (lVar8 < 0) {
LAB_0012b7e0:
      lVar8 = -1;
    }
    else if (uVar5 < uVar7) {
      lVar8 = -1;
    }
    else {
      if ((uVar7 == uVar5) && (iVar4 < lVar10)) goto LAB_0012b7e0;
      lVar6 = maybe___muldi3(uVar7,param_4);
      lVar8 = 1;
      uVar7 = lVar10 + lVar6;
    }
    lVar10 = (long)*pcVar12;
    pcVar12 = pcVar12 + 1;
  } while( true );
}

// 0x0012b8b8  size 0x2c
void strtol(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _strtol_r(PTR_DAT_0030a090,param_1,param_2,param_3);
  return;
}

// 0x0012b8e8  size 0xe8
undefined4 maybe___submore(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if ((int *)param_1[0xc] == param_1 + 0x10) {
    lVar4 = _malloc_r(param_1[0x15],0x400);
    uVar2 = 0xffffffff;
    if (lVar4 != 0) {
      param_1[0xc] = (int)lVar4;
      param_1[0xd] = 0x400;
      iVar6 = 2;
      iVar7 = (int)lVar4 + 0x3fd;
      puVar5 = (undefined1 *)((int)param_1 + 0x42);
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + -1;
        puVar3 = (undefined1 *)(iVar7 + iVar6);
        iVar6 = iVar6 + -1;
        *puVar3 = uVar1;
      } while (-1 < iVar6);
      *param_1 = iVar7;
      uVar2 = 0;
    }
  }
  else {
    iVar7 = param_1[0xd];
    lVar4 = _realloc_r(param_1[0x15],(int *)param_1[0xc],iVar7 << 1);
    uVar2 = 0xffffffff;
    if (lVar4 != 0) {
      iVar6 = (int)lVar4 + iVar7;
      memcpy(iVar6,lVar4,iVar7);
      *param_1 = iVar6;
      param_1[0xd] = iVar7 << 1;
      uVar2 = 0;
      param_1[0xc] = (int)lVar4;
    }
  }
  return uVar2;
}

// 0x0012b9d0  size 0x180
uint maybe__ungetc_r(uint param_1,undefined8 param_2)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar5 = PTR_DAT_0030a090;
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  puVar8 = (uint *)param_2;
  puVar1 = (undefined *)puVar8[0x15];
  if (puVar1 == (undefined *)0x0) {
    puVar8[0x15] = (uint)PTR_DAT_0030a090;
    iVar3 = *(int *)(puVar5 + 0x38);
  }
  else {
    iVar3 = *(int *)(puVar1 + 0x38);
    puVar5 = puVar1;
  }
  if (iVar3 == 0) {
    __sinit(puVar5);
    uVar2 = (ushort)puVar8[3];
  }
  else {
    uVar2 = (ushort)puVar8[3];
  }
  *(ushort *)(puVar8 + 3) = uVar2 & 0xffdf;
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 0x10) == 0) {
      return 0xffffffff;
    }
    if ((uVar2 & 8) == 0) {
      uVar2 = (ushort)puVar8[3];
    }
    else {
      lVar4 = maybe__fflush_r(param_2);
      if (lVar4 != 0) {
        return 0xffffffff;
      }
      puVar8[2] = 0;
      puVar8[6] = 0;
      *(ushort *)(puVar8 + 3) = (ushort)puVar8[3] & 0xfff7;
      uVar2 = (ushort)puVar8[3];
    }
    *(ushort *)(puVar8 + 3) = uVar2 | 4;
  }
  if (puVar8[0xc] == 0) {
    uVar7 = *puVar8;
    if (puVar8[4] == 0) {
      uVar6 = puVar8[1];
    }
    else {
      uVar6 = puVar8[1];
      if ((puVar8[4] < uVar7) && ((uint)*(byte *)(uVar7 - 1) == (param_1 & 0xff))) {
        *puVar8 = uVar7 - 1;
        goto LAB_0012bb00;
      }
    }
    puVar8[0xf] = uVar6;
    puVar8[0xe] = uVar7;
    puVar8[0xc] = (uint)(puVar8 + 0x10);
    puVar8[0xd] = 3;
    *puVar8 = (int)puVar8 + 0x42;
    *(char *)((int)puVar8 + 0x42) = (char)param_1;
    puVar8[1] = 1;
  }
  else {
    if ((int)puVar8[1] < (int)puVar8[0xd]) {
      uVar7 = *puVar8;
    }
    else {
      lVar4 = maybe___submore(param_2);
      if (lVar4 != 0) {
        return 0xffffffff;
      }
      uVar7 = *puVar8;
    }
    *puVar8 = uVar7 - 1;
    *(char *)(uVar7 - 1) = (char)param_1;
    uVar6 = puVar8[1];
LAB_0012bb00:
    puVar8[1] = uVar6 + 1;
  }
  return param_1 & 0xff;
}

// 0x0012bb58  size 0x44
undefined8 maybe___sprint(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 8) == 0) {
    *(undefined4 *)(param_2 + 4) = 0;
  }
  else {
    uVar1 = maybe___sfvwrite();
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return uVar1;
}

// 0x0012bba0  size 0xb4
long maybe___sbprintf(int param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *apuStack_480 [2];
  undefined4 uStack_478;
  ushort uStack_474;
  undefined2 uStack_472;
  undefined1 *puStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_45c;
  undefined4 uStack_42c;
  undefined1 auStack_420 [1024];
  
  apuStack_480[0] = auStack_420;
  uStack_472 = *(undefined2 *)(param_1 + 0xe);
  uStack_42c = *(undefined4 *)(param_1 + 0x54);
  uStack_474 = *(ushort *)(param_1 + 0xc) & 0xfffd;
  uStack_464 = *(undefined4 *)(param_1 + 0x1c);
  uStack_45c = *(undefined4 *)(param_1 + 0x24);
  uStack_46c = 0x400;
  uStack_478 = 0x400;
  uStack_468 = 0;
  puStack_470 = apuStack_480[0];
  lVar1 = vfprintf(apuStack_480);
  if (-1 < lVar1) {
    lVar2 = maybe__fflush_r(apuStack_480);
    if (lVar2 != 0) {
      lVar1 = -1;
    }
  }
  if ((uStack_474 & 0x40) != 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x40;
  }
  return lVar1;
}

// 0x0012bc58  size 0x74
void vfprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0030a090;
  iVar3 = (int)param_1;
  puVar2 = *(undefined **)(iVar3 + 0x54);
  if (*(undefined **)(iVar3 + 0x54) == (undefined *)0x0) {
    *(undefined **)(iVar3 + 0x54) = PTR_DAT_0030a090;
    puVar2 = puVar1;
  }
  if (*(int *)(puVar2 + 0x38) == 0) {
    __sinit(puVar2,param_1);
    puVar2 = *(undefined **)(iVar3 + 0x54);
  }
  _vfprintf_r(puVar2,param_1,param_2,param_3);
  return;
}

// 0x0012bcd0  size 0x1614
/* WARNING: Type propagation algorithm not settling */
/* "bug in vfprintf: bad base" */

int _vfprintf_r(undefined4 param_1,int param_2,char *param_3,ulong *param_4)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  ulong *puVar17;
  ulong *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_290 [16];
  int *piStack_280;
  int iStack_27c;
  int iStack_278;
  int aiStack_270 [16];
  char acStack_230 [348];
  char acStack_d4 [4];
  char cStack_d0;
  undefined1 uStack_cf;
  char cStack_c0;
  char acStack_bf [3];
  int aiStack_bc [2];
  undefined1 *puStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined1 *puStack_a0;
  int iStack_9c;
  ulong uStack_98;
  int iStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  char *pcStack_84;
  uint uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uStack_ac = param_1;
  iStack_a8 = param_2;
  piVar4 = (int *)maybe_localeconv();
  iStack_9c = *piVar4;
  uVar1 = *(ushort *)(iStack_a8 + 0xc);
  aiStack_bc[1] = 0;
  if (((uVar1 & 8) == 0) || (*(int *)(iStack_a8 + 0x10) == 0)) {
    lVar8 = maybe___swsetup(iStack_a8);
    if (lVar8 != 0) {
      return -1;
    }
    uVar1 = *(ushort *)(iStack_a8 + 0xc);
  }
  piStack_280 = aiStack_270;
  if (((uVar1 & 0x1a) == 10) && (-1 < *(short *)(iStack_a8 + 0xe))) {
    iVar5 = maybe___sbprintf(iStack_a8,param_3,param_4);
    return iVar5;
  }
  iStack_278 = 0;
  iStack_27c = 0;
  iStack_a4 = 0;
  piVar4 = piStack_280;
  pcVar14 = param_3;
LAB_0012bda8:
  lVar8 = maybe__mbtowc_r(PTR_DAT_0030a090,aiStack_bc,param_3,DAT_0030a098,aiStack_bc + 1);
  if (0 < lVar8) goto code_r0x0012bdd4;
  iVar5 = (int)param_3 - (int)pcVar14;
  goto LAB_0012bde8;
code_r0x0012bdd4:
  param_3 = param_3 + (int)lVar8;
  if (aiStack_bc[0] == 0x25) {
    param_3 = param_3 + -1;
    iVar5 = (int)param_3 - (int)pcVar14;
LAB_0012bde8:
    if (iVar5 != 0) {
      piVar4[1] = iVar5;
      *piVar4 = (int)pcVar14;
      piVar4 = piVar4 + 2;
      iStack_27c = iStack_27c + 1;
      iStack_278 = iStack_278 + iVar5;
      if (7 < iStack_27c) {
        lVar9 = maybe___sprint(iStack_a8,&piStack_280);
        if (lVar9 != 0) goto LAB_0012d2fc;
        piVar4 = aiStack_270;
      }
      iStack_a4 = iStack_a4 + iVar5;
    }
    if (0 < lVar8) {
      acStack_bf[0] = '\0';
      param_3 = param_3 + 1;
      puStack_8c = (undefined1 *)0x0;
      uVar19 = 0;
      puStack_a0 = (undefined1 *)0x0;
      puVar6 = (undefined1 *)0xffffffff;
      puVar17 = param_4;
LAB_0012be64:
      cVar3 = *param_3;
LAB_0012be68:
      param_3 = param_3 + 1;
      lVar8 = (long)(int)cVar3;
LAB_0012be74:
      do {
        iVar5 = (int)lVar8;
LAB_0012be78:
        uVar20 = uVar19;
        pcVar14 = param_3;
        if (0x58 < iVar5 - 0x20U) {
switchD_0012be90_caseD_21:
          pcVar16 = acStack_230;
          if (lVar8 != 0) {
            puVar6 = (undefined1 *)0x1;
            acStack_230[0] = (char)lVar8;
            param_4 = puVar17;
            goto LAB_0012c558;
          }
          break;
        }
        puVar18 = puVar17;
                    /* WARNING: Switch is manually overridden */
        switch(iVar5 - 0x20U) {
        case 0:
          if (acStack_bf[0] != '\0') {
            cVar3 = *param_3;
            goto LAB_0012be68;
          }
          acStack_bf[0] = ' ';
LAB_0012bee4:
          cVar3 = *param_3;
          goto LAB_0012be68;
        default:
          goto switchD_0012be90_caseD_21;
        case 3:
          uVar19 = uVar19 | 1;
          goto LAB_0012be64;
        case 10:
          puVar18 = puVar17 + 1;
          puStack_a0 = *(undefined1 **)puVar17;
          puVar17 = puVar18;
          if ((int)puStack_a0 < 0) {
            puStack_a0 = (undefined1 *)-(int)puStack_a0;
            goto switchD_0012be90_caseD_2d;
          }
          goto LAB_0012be64;
        case 0xb:
          acStack_bf[0] = '+';
          goto LAB_0012bee4;
        case 0xd:
switchD_0012be90_caseD_2d:
          uVar19 = uVar19 | 4;
          puVar17 = puVar18;
          goto LAB_0012be64;
        case 0xe:
          cVar3 = *param_3;
          lVar8 = (long)cVar3;
          param_3 = param_3 + 1;
          if (lVar8 != 0x2a) goto LAB_0012bf20;
          puVar6 = *(undefined1 **)puVar17;
          puVar17 = puVar17 + 1;
          if ((int)puVar6 < -1) {
            puVar6 = (undefined1 *)0xffffffff;
          }
          goto LAB_0012be64;
        case 0x10:
          uVar19 = uVar19 | 0x80;
          goto LAB_0012be64;
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
          puStack_a0 = (undefined1 *)0x0;
          do {
            iVar5 = (int)lVar8;
            cVar3 = *param_3;
            lVar8 = (long)cVar3;
            puStack_a0 = (undefined1 *)(((int)puStack_a0 * 10 + iVar5) - 0x30);
            param_3 = param_3 + 1;
          } while ((int)cVar3 - 0x30U < 10);
          break;
        case 0x24:
          uVar19 = uVar19 | 0x10;
        case 0x44:
        case 0x49:
          if ((uVar19 & 0x10) == 0) {
            if ((uVar19 & 0x40) == 0) {
              uVar13 = (ulong)(int)(uint)*puVar17;
            }
            else {
              uVar13 = (ulong)(short)(ushort)*puVar17;
            }
          }
          else {
            uVar13 = *puVar17;
          }
          iVar5 = 1;
          if ((long)uVar13 < 0) {
            uVar13 = -uVar13;
            acStack_bf[0] = '-';
          }
LAB_0012c428:
          param_4 = puVar17 + 1;
          if (-1 < (int)puVar6) {
            uVar19 = uVar19 & 0xffffff7f;
          }
          pcVar16 = acStack_d4;
          puStack_8c = puVar6;
          uVar20 = uVar19;
          if ((uVar13 == 0) && (puVar7 = auStack_290 + -(int)pcVar16, puVar6 == (undefined1 *)0x0))
          goto LAB_0012c53c;
          if (iVar5 == 1) goto LAB_0012c4ec;
          if (iVar5 == 0) goto LAB_0012c480;
          if (iVar5 == 2) goto LAB_0012c510;
          pcVar16 = s_bug_in_vfprintf__bad_base_00360438;
          puVar7 = (undefined1 *)strlen(0x360438);
          goto LAB_0012c55c;
        case 0x25:
        case 0x27:
        case 0x45:
        case 0x46:
        case 0x47:
          if (puVar6 == (undefined1 *)0xffffffff) {
            puVar6 = (undefined1 *)0x6;
          }
          else if ((lVar8 == 0x67) || (lVar8 == 0x47)) {
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = (undefined1 *)0x1;
            }
          }
          uStack_98 = *puVar17;
          param_4 = puVar17 + 1;
          lVar9 = maybe_finite(uStack_98);
          if (lVar9 == 0) {
            lVar9 = maybe_isnan(uStack_98);
            if (lVar9 == 0) {
              uVar20 = uVar19 | 0x100;
              pcVar16 = (char *)maybe_cvt(uStack_ac,uStack_98,puVar6,uVar20,&cStack_c0,
                                          aiStack_bc + 2,lVar8,&iStack_b0);
              if ((lVar8 == 0x67) || (lVar8 == 0x47)) {
                if (((int)puStack_b4 < -3) || ((int)puVar6 < (int)puStack_b4)) {
                  bVar2 = lVar8 != 0x67;
                  lVar8 = 0x65;
                  if (bVar2) {
                    lVar8 = 0x45;
                  }
                }
                else {
                  lVar8 = 0x67;
                }
              }
              if (lVar8 < 0x66) {
                puStack_b4 = puStack_b4 + -1;
                iStack_90 = maybe__mbrtowc_r(auStack_290,puStack_b4,lVar8);
                if ((1 < iStack_b0) ||
                   (puVar7 = (undefined1 *)(iStack_90 + iStack_b0), (uVar19 & 1) != 0)) {
                  puVar7 = (undefined1 *)(iStack_90 + iStack_b0) + 1;
                }
              }
              else if (lVar8 == 0x66) {
                puVar7 = puVar6 + 2;
                if ((0 < (int)puStack_b4) &&
                   ((puVar6 != (undefined1 *)0x0 || (puVar7 = puStack_b4, (uVar19 & 1) != 0)))) {
                  puVar7 = puStack_b4 + (int)puVar6 + 1;
                }
              }
              else if ((int)puStack_b4 < iStack_b0) {
                if ((int)puStack_b4 < 1) {
                  puVar7 = (undefined1 *)((iStack_b0 - (int)puStack_b4) + 2);
                }
                else {
                  puVar7 = (undefined1 *)(iStack_b0 + 1);
                }
              }
              else {
                puVar7 = puStack_b4;
                if ((uVar19 & 1) != 0) {
                  puVar7 = puStack_b4 + 1;
                }
              }
              if (cStack_c0 != '\0') {
                acStack_bf[0] = '-';
              }
            }
            else {
              puVar7 = (undefined1 *)0x3;
              pcVar16 = (char *)0x3603f8;
            }
          }
          else {
            lVar9 = __cmpdf2(uStack_98,0);
            if (lVar9 < 0) {
              acStack_bf[0] = '-';
            }
            puVar7 = (undefined1 *)0x3;
            pcVar16 = s_0000000000000000Inf_003603cf + 0x21;
          }
          goto LAB_0012c55c;
        case 0x2c:
          uVar19 = uVar19 | 8;
          goto LAB_0012be64;
        case 0x2f:
          uVar19 = uVar19 | 0x10;
        case 0x4f:
          if ((uVar19 & 0x10) == 0) {
            if ((uVar19 & 0x40) == 0) {
              uVar13 = (ulong)(uint)*puVar17;
            }
            else {
              uVar13 = (ulong)(ushort)*puVar17;
            }
          }
          else {
            uVar13 = *puVar17;
          }
          iVar5 = 0;
LAB_0012c424:
          acStack_bf[0] = '\0';
          goto LAB_0012c428;
        case 0x35:
          uVar19 = uVar19 | 0x10;
        case 0x55:
          if ((uVar19 & 0x10) == 0) {
            if ((uVar19 & 0x40) == 0) {
              uVar13 = (ulong)(uint)*puVar17;
            }
            else {
              uVar13 = (ulong)(ushort)*puVar17;
            }
          }
          else {
            uVar13 = *puVar17;
          }
          iVar5 = 1;
          goto LAB_0012c424;
        case 0x38:
          pcStack_84 = s_0123456789ABCDEF_00360420;
          goto LAB_0012c3d0;
        case 0x43:
          param_4 = puVar17 + 1;
          acStack_230[0] = (char)*puVar17;
          pcVar16 = acStack_230;
          puVar6 = (undefined1 *)0x1;
          goto LAB_0012c558;
        case 0x48:
          uVar19 = uVar19 | 0x40;
          goto LAB_0012be64;
        case 0x4c:
          cVar3 = *param_3;
          if (*param_3 == 'l') {
            param_3 = param_3 + 1;
            goto switchD_0012be90_caseD_71;
          }
          uVar19 = uVar19 | 0x10;
          goto LAB_0012be68;
        case 0x4e:
          if ((uVar19 & 0x10) == 0) {
            if ((uVar19 & 0x40) == 0) {
              param_4 = puVar17 + 1;
              **(int **)puVar17 = iStack_a4;
            }
            else {
              param_4 = puVar17 + 1;
              **(undefined2 **)puVar17 = (short)iStack_a4;
            }
          }
          else {
            param_4 = puVar17 + 1;
            **(long **)puVar17 = (long)iStack_a4;
          }
          goto LAB_0012bda8;
        case 0x50:
          uVar13 = (ulong)(int)(uint)*puVar17;
          uVar19 = uVar19 | 2;
          pcStack_84 = s_0123456789abcdef_00360400;
          iVar5 = 2;
          lVar8 = 0x78;
          goto LAB_0012c424;
        case 0x51:
switchD_0012be90_caseD_71:
          uVar19 = uVar19 | 0x20;
          goto LAB_0012be64;
        case 0x53:
          pcVar16 = *(char **)puVar17;
          param_4 = puVar17 + 1;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = s__null__00360418;
          }
          if ((int)puVar6 < 0) {
            puVar6 = (undefined1 *)strlen(pcVar16,0);
          }
          else {
            lVar9 = memchr(pcVar16,0,puVar6);
            if ((lVar9 != 0) &&
               (puVar7 = (undefined1 *)((int)lVar9 - (int)pcVar16), (int)puVar7 <= (int)puVar6)) {
              acStack_bf[0] = '\0';
              goto LAB_0012c55c;
            }
          }
LAB_0012c558:
          acStack_bf[0] = '\0';
          puVar7 = puVar6;
          goto LAB_0012c55c;
        case 0x58:
          pcStack_84 = s_0123456789abcdef_00360400;
LAB_0012c3d0:
          if ((uVar19 & 0x10) == 0) {
            if ((uVar19 & 0x40) == 0) {
              uVar13 = (ulong)(uint)*puVar17;
            }
            else {
              uVar13 = (ulong)(ushort)*puVar17;
            }
          }
          else {
            uVar13 = *puVar17;
          }
          iVar5 = 2;
          if ((uVar19 & 1) != 0) {
            if (uVar13 != 0) {
              uVar19 = uVar19 | 2;
            }
          }
          goto LAB_0012c424;
        }
      } while( true );
    }
    if ((iStack_278 == 0) || (lVar8 = maybe___sprint(iStack_a8,&piStack_280), lVar8 == 0)) {
LAB_0012d2f8:
    }
LAB_0012d2fc:
    iVar5 = -1;
    if ((*(ushort *)(iStack_a8 + 0xc) & 0x40) == 0) {
      iVar5 = iStack_a4;
    }
    return iVar5;
  }
  goto LAB_0012bda8;
LAB_0012c4ec:
  for (; 9 < uVar13; uVar13 = maybe___udivdi3(uVar13,10)) {
    cVar3 = maybe___umoddi3(uVar13,10);
    pcVar16 = pcVar16 + -1;
    *pcVar16 = cVar3 + '0';
  }
  pcVar16 = pcVar16 + -1;
  *pcVar16 = (char)uVar13 + '0';
LAB_0012c538:
  puVar7 = auStack_290 + -(int)pcVar16;
LAB_0012c53c:
  puVar7 = puVar7 + 0x1bc;
LAB_0012c55c:
  puStack_88 = puStack_8c;
  if ((int)puStack_8c <= (int)puVar7) {
    puStack_88 = puVar7;
  }
  if (acStack_bf[0] == '\0') {
    puStack_88 = puStack_88 + (uVar20 & 2);
  }
  else {
    puStack_88 = puStack_88 + 1;
  }
  uStack_80 = uVar20 & 0x84;
  if (uStack_80 == 0) {
    iVar5 = (int)puStack_a0 - (int)puStack_88;
    if (0 < iVar5) {
      uVar12 = 0x360000;
      if (iVar5 < 0x11) {
        piVar4[1] = iVar5;
      }
      else {
        uVar11 = 0x10;
        piVar4[1] = 0x10;
        while( true ) {
          *piVar4 = (int)(s_0000000000000000Inf_003603cf + 1);
          piVar4 = piVar4 + 2;
          iStack_27c = iStack_27c + 1;
          iStack_278 = iStack_278 + 0x10;
          if (7 < iStack_27c) {
            uStack_70 = (undefined4)uVar11;
            uStack_6c = (undefined4)((ulong)uVar11 >> 0x20);
            uStack_60 = (undefined4)uVar12;
            uStack_5c = (undefined4)((ulong)uVar12 >> 0x20);
            lVar9 = maybe___sprint(iStack_a8,&piStack_280);
            uVar11 = CONCAT44(uStack_6c,uStack_70);
            uVar12 = CONCAT44(uStack_5c,uStack_60);
            if (lVar9 != 0) goto LAB_0012d2f8;
            piVar4 = aiStack_270;
          }
          iVar5 = iVar5 + -0x10;
          if (iVar5 < 0x11) break;
          piVar4[1] = (int)uVar11;
        }
        piVar4[1] = iVar5;
      }
      *piVar4 = (int)uVar12 + 0x3d0;
      piVar4 = piVar4 + 2;
      iStack_27c = iStack_27c + 1;
      iStack_278 = iStack_278 + iVar5;
      if (7 < iStack_27c) {
        lVar9 = maybe___sprint(iStack_a8,&piStack_280);
        if (lVar9 != 0) goto LAB_0012d2fc;
        piVar4 = aiStack_270;
      }
    }
  }
  if (acStack_bf[0] == '\0') {
    if ((uVar20 & 2) != 0) {
      cStack_d0 = '0';
      uStack_cf = (undefined1)lVar8;
      piVar4[1] = 2;
      *piVar4 = (int)&cStack_d0;
      piVar4 = piVar4 + 2;
      iStack_27c = iStack_27c + 1;
      iStack_278 = iStack_278 + 2;
      if (7 < iStack_27c) {
        lVar9 = maybe___sprint(iStack_a8,&piStack_280);
        if (lVar9 != 0) goto LAB_0012d2fc;
        piVar4 = aiStack_270;
      }
    }
  }
  else {
    piVar4[1] = 1;
    *piVar4 = (int)acStack_bf;
    piVar4 = piVar4 + 2;
    iStack_27c = iStack_27c + 1;
    iStack_278 = iStack_278 + 1;
    if (7 < iStack_27c) {
      lVar9 = maybe___sprint(iStack_a8,&piStack_280);
      if (lVar9 != 0) goto LAB_0012d2fc;
      piVar4 = aiStack_270;
    }
  }
  if ((uStack_80 == 0x80) && (iVar5 = (int)puStack_a0 - (int)puStack_88, 0 < iVar5)) {
    uVar12 = 0x360000;
    if (iVar5 < 0x11) {
      piVar4[1] = iVar5;
    }
    else {
      uVar11 = 0x10;
      piVar4[1] = 0x10;
      while( true ) {
        *piVar4 = (int)(s_0000000000000000Inf_003603cf + 0x11);
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + 0x10;
        if (7 < iStack_27c) {
          uStack_70 = (undefined4)uVar11;
          uStack_6c = (undefined4)((ulong)uVar11 >> 0x20);
          uStack_60 = (undefined4)uVar12;
          uStack_5c = (undefined4)((ulong)uVar12 >> 0x20);
          lVar9 = maybe___sprint(iStack_a8,&piStack_280);
          uVar11 = CONCAT44(uStack_6c,uStack_70);
          uVar12 = CONCAT44(uStack_5c,uStack_60);
          if (lVar9 != 0) goto LAB_0012d2f8;
          piVar4 = aiStack_270;
        }
        iVar5 = iVar5 + -0x10;
        if (iVar5 < 0x11) break;
        piVar4[1] = (int)uVar11;
      }
      piVar4[1] = iVar5;
    }
    *piVar4 = (int)uVar12 + 0x3e0;
    piVar4 = piVar4 + 2;
    iStack_27c = iStack_27c + 1;
    iStack_278 = iStack_278 + iVar5;
    if (7 < iStack_27c) {
      lVar9 = maybe___sprint(iStack_a8,&piStack_280);
      if (lVar9 != 0) goto LAB_0012d2fc;
      piVar4 = aiStack_270;
    }
  }
  iVar5 = (int)puStack_8c - (int)puVar7;
  if (0 < iVar5) {
    uVar12 = 0x360000;
    if (iVar5 < 0x11) {
      piVar4[1] = iVar5;
    }
    else {
      uVar11 = 0x10;
      piVar4[1] = 0x10;
      while( true ) {
        *piVar4 = (int)(s_0000000000000000Inf_003603cf + 0x11);
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + 0x10;
        if (7 < iStack_27c) {
          uStack_70 = (undefined4)uVar11;
          uStack_6c = (undefined4)((ulong)uVar11 >> 0x20);
          uStack_60 = (undefined4)uVar12;
          uStack_5c = (undefined4)((ulong)uVar12 >> 0x20);
          lVar9 = maybe___sprint(iStack_a8,&piStack_280);
          uVar11 = CONCAT44(uStack_6c,uStack_70);
          uVar12 = CONCAT44(uStack_5c,uStack_60);
          if (lVar9 != 0) goto LAB_0012d2f8;
          piVar4 = aiStack_270;
        }
        iVar5 = iVar5 + -0x10;
        if (iVar5 < 0x11) break;
        piVar4[1] = (int)uVar11;
      }
      piVar4[1] = iVar5;
    }
    *piVar4 = (int)uVar12 + 0x3e0;
    piVar4 = piVar4 + 2;
    iStack_27c = iStack_27c + 1;
    iStack_278 = iStack_278 + iVar5;
    if (7 < iStack_27c) {
      lVar9 = maybe___sprint(iStack_a8,&piStack_280);
      if (lVar9 != 0) goto LAB_0012d2fc;
      piVar4 = aiStack_270;
    }
  }
  if ((uVar20 & 0x100) == 0) {
    piVar4[1] = (int)puVar7;
    *piVar4 = (int)pcVar16;
    iStack_278 = iStack_278 + (int)puVar7;
LAB_0012d180:
    iStack_27c = iStack_27c + 1;
    piVar4 = piVar4 + 2;
    bVar2 = iStack_27c < 8;
  }
  else {
    if (lVar8 < 0x66) {
      if (iStack_b0 < 2) {
        if ((uVar20 & 1) != 0) {
          cStack_d0 = *pcVar16;
          goto LAB_0012cf6c;
        }
        *piVar4 = (int)pcVar16;
        piVar4[1] = 1;
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + 1;
        if (7 < iStack_27c) {
          lVar8 = maybe___sprint(iStack_a8,&piStack_280);
          if (lVar8 != 0) goto LAB_0012d2fc;
          piVar4 = aiStack_270;
        }
      }
      else {
        cStack_d0 = *pcVar16;
LAB_0012cf6c:
        uStack_cf = 0x2e;
        piVar4[1] = 2;
        *piVar4 = (int)&cStack_d0;
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + 2;
        if (7 < iStack_27c) {
          lVar8 = maybe___sprint(iStack_a8,&piStack_280);
          if (lVar8 != 0) goto LAB_0012d2fc;
          piVar4 = aiStack_270;
        }
        lVar8 = __cmpdf2(uStack_98,0);
        if (lVar8 == 0) {
          iVar5 = iStack_b0 + -1;
          if (0 < iVar5) {
            uVar12 = 0x360000;
            if (iVar5 < 0x11) {
              piVar4[1] = iVar5;
            }
            else {
              piVar4[1] = 0x10;
              while( true ) {
                *piVar4 = (int)(s_0000000000000000Inf_003603cf + 0x11);
                piVar4 = piVar4 + 2;
                iStack_27c = iStack_27c + 1;
                iStack_278 = iStack_278 + 0x10;
                if (7 < iStack_27c) {
                  uStack_60 = (undefined4)uVar12;
                  uStack_5c = (undefined4)((ulong)uVar12 >> 0x20);
                  lVar8 = maybe___sprint(iStack_a8,&piStack_280);
                  uVar12 = CONCAT44(uStack_5c,uStack_60);
                  if (lVar8 != 0) goto LAB_0012d2f8;
                  piVar4 = aiStack_270;
                }
                iVar5 = iVar5 + -0x10;
                if (iVar5 < 0x11) break;
                piVar4[1] = 0x10;
              }
              piVar4[1] = iVar5;
            }
            *piVar4 = (int)uVar12 + 0x3e0;
            piVar4 = piVar4 + 2;
            iStack_27c = iStack_27c + 1;
            iStack_278 = iStack_278 + iVar5;
            if (7 < iStack_27c) {
              lVar8 = maybe___sprint(iStack_a8,&piStack_280);
              if (lVar8 != 0) goto LAB_0012d2fc;
              piVar4 = aiStack_270;
            }
          }
        }
        else {
          *piVar4 = (int)(pcVar16 + 1);
          piVar4[1] = iStack_b0 + -1;
          piVar4 = piVar4 + 2;
          iStack_27c = iStack_27c + 1;
          iStack_278 = iStack_278 + iStack_b0 + -1;
          if (7 < iStack_27c) {
            lVar8 = maybe___sprint(iStack_a8,&piStack_280);
            if (lVar8 != 0) goto LAB_0012d2fc;
            piVar4 = aiStack_270;
          }
        }
      }
      iVar5 = iStack_90;
      *piVar4 = (int)auStack_290;
      piVar4[1] = iVar5;
      iStack_278 = iStack_278 + iVar5;
      goto LAB_0012d180;
    }
    lVar8 = __cmpdf2(uStack_98,0);
    if (lVar8 == 0) {
      piVar4[1] = 1;
      *piVar4 = (int)&DAT_00360458;
      piVar4 = piVar4 + 2;
      iStack_27c = iStack_27c + 1;
      iStack_278 = iStack_278 + 1;
      if (7 < iStack_27c) {
        lVar8 = maybe___sprint(iStack_a8,&piStack_280);
        if (lVar8 != 0) goto LAB_0012d2fc;
        piVar4 = aiStack_270;
      }
      if ((int)puStack_b4 < iStack_b0) {
        piVar4[1] = 1;
      }
      else {
        if ((uVar20 & 1) == 0) goto LAB_0012d1b4;
        piVar4[1] = 1;
      }
      iStack_27c = iStack_27c + 1;
      *piVar4 = iStack_9c;
      piVar4 = piVar4 + 2;
      iStack_278 = iStack_278 + 1;
      if (7 < iStack_27c) {
        lVar8 = maybe___sprint(iStack_a8,&piStack_280);
        if (lVar8 != 0) goto LAB_0012d2fc;
        piVar4 = aiStack_270;
      }
      iVar5 = iStack_b0 + -1;
      if (iVar5 < 1) goto LAB_0012d1b4;
      uVar12 = 0x360000;
      if (iVar5 < 0x11) {
        piVar4[1] = iVar5;
      }
      else {
        piVar4[1] = 0x10;
        while( true ) {
          *piVar4 = (int)(s_0000000000000000Inf_003603cf + 0x11);
          piVar4 = piVar4 + 2;
          iStack_27c = iStack_27c + 1;
          iStack_278 = iStack_278 + 0x10;
          if (7 < iStack_27c) {
            uStack_60 = (undefined4)uVar12;
            uStack_5c = (undefined4)((ulong)uVar12 >> 0x20);
            lVar8 = maybe___sprint(iStack_a8,&piStack_280);
            uVar12 = CONCAT44(uStack_5c,uStack_60);
            if (lVar8 != 0) goto LAB_0012d2f8;
            piVar4 = aiStack_270;
          }
          iVar5 = iVar5 + -0x10;
          if (iVar5 < 0x11) break;
          piVar4[1] = 0x10;
        }
        piVar4[1] = iVar5;
      }
      *piVar4 = (int)uVar12 + 0x3e0;
      piVar4 = piVar4 + 2;
      iStack_27c = iStack_27c + 1;
      iStack_278 = iStack_278 + iVar5;
      bVar2 = iStack_27c < 8;
    }
    else {
      if ((int)puStack_b4 < 1) {
        piVar4[1] = 1;
        *piVar4 = (int)&DAT_00360458;
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + 1;
        if (7 < iStack_27c) {
          lVar8 = maybe___sprint(iStack_a8,&piStack_280);
          if (lVar8 != 0) goto LAB_0012d2fc;
          piVar4 = aiStack_270;
        }
        if (puStack_b4 == (undefined1 *)0x0) {
          if (iStack_b0 == 0) goto LAB_0012d1b4;
          piVar4[1] = 1;
        }
        else {
          piVar4[1] = 1;
        }
        iStack_27c = iStack_27c + 1;
        *piVar4 = iStack_9c;
        piVar4 = piVar4 + 2;
        iStack_278 = iStack_278 + 1;
        if (7 < iStack_27c) {
          lVar8 = maybe___sprint(iStack_a8,&piStack_280);
          if (lVar8 != 0) goto LAB_0012d2fc;
          piVar4 = aiStack_270;
        }
        iVar5 = -(int)puStack_b4;
        if (iVar5 < 1) {
          *piVar4 = (int)pcVar16;
        }
        else {
          uVar12 = 0x360000;
          if (iVar5 < 0x11) {
            piVar4[1] = iVar5;
          }
          else {
            piVar4[1] = 0x10;
            while( true ) {
              *piVar4 = (int)(s_0000000000000000Inf_003603cf + 0x11);
              piVar4 = piVar4 + 2;
              iStack_27c = iStack_27c + 1;
              iStack_278 = iStack_278 + 0x10;
              if (7 < iStack_27c) {
                uStack_60 = (undefined4)uVar12;
                uStack_5c = (undefined4)((ulong)uVar12 >> 0x20);
                lVar8 = maybe___sprint(iStack_a8,&piStack_280);
                uVar12 = CONCAT44(uStack_5c,uStack_60);
                if (lVar8 != 0) goto LAB_0012d2f8;
                piVar4 = aiStack_270;
              }
              iVar5 = iVar5 + -0x10;
              if (iVar5 < 0x11) break;
              piVar4[1] = 0x10;
            }
            piVar4[1] = iVar5;
          }
          *piVar4 = (int)uVar12 + 0x3e0;
          piVar4 = piVar4 + 2;
          iStack_27c = iStack_27c + 1;
          iStack_278 = iStack_278 + iVar5;
          if (7 < iStack_27c) {
            lVar8 = maybe___sprint(iStack_a8,&piStack_280);
            if (lVar8 != 0) goto LAB_0012d2fc;
            piVar4 = aiStack_270;
          }
          *piVar4 = (int)pcVar16;
        }
        piVar4[1] = iStack_b0;
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + iStack_b0;
        if (7 < iStack_27c) {
          lVar8 = maybe___sprint(iStack_a8,&piStack_280);
          if (lVar8 != 0) goto LAB_0012d2fc;
          piVar4 = aiStack_270;
        }
        goto LAB_0012d1b4;
      }
      bVar2 = (int)puStack_b4 < iStack_b0;
      *piVar4 = (int)pcVar16;
      if (bVar2) {
        piVar4[1] = (int)puStack_b4;
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + (int)puStack_b4;
        if (7 < iStack_27c) {
          lVar8 = maybe___sprint(iStack_a8,&piStack_280);
          if (lVar8 != 0) goto LAB_0012d2fc;
          piVar4 = aiStack_270;
        }
        puVar6 = puStack_b4;
        piVar4[1] = 1;
        *piVar4 = (int)&DAT_00360460;
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + 1;
        if (7 < iStack_27c) {
          lVar8 = maybe___sprint(iStack_a8,&piStack_280);
          if (lVar8 != 0) goto LAB_0012d2fc;
          piVar4 = aiStack_270;
        }
        *piVar4 = (int)(pcVar16 + (int)puVar6);
        piVar4[1] = iStack_b0 - (int)puStack_b4;
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + (iStack_b0 - (int)puStack_b4);
        if (7 < iStack_27c) {
          lVar8 = maybe___sprint(iStack_a8,&piStack_280);
          if (lVar8 != 0) goto LAB_0012d2fc;
          piVar4 = aiStack_270;
        }
        goto LAB_0012d1b4;
      }
      piVar4[1] = iStack_b0;
      piVar4 = piVar4 + 2;
      iStack_27c = iStack_27c + 1;
      iStack_278 = iStack_278 + iStack_b0;
      if (7 < iStack_27c) {
        lVar8 = maybe___sprint(iStack_a8,&piStack_280);
        if (lVar8 != 0) goto LAB_0012d2fc;
        piVar4 = aiStack_270;
      }
      iVar5 = (int)puStack_b4 - iStack_b0;
      if (0 < iVar5) {
        uVar12 = 0x360000;
        if (iVar5 < 0x11) {
          piVar4[1] = iVar5;
        }
        else {
          piVar4[1] = 0x10;
          while( true ) {
            *piVar4 = (int)(s_0000000000000000Inf_003603cf + 0x11);
            piVar4 = piVar4 + 2;
            iStack_27c = iStack_27c + 1;
            iStack_278 = iStack_278 + 0x10;
            if (7 < iStack_27c) {
              uStack_60 = (undefined4)uVar12;
              uStack_5c = (undefined4)((ulong)uVar12 >> 0x20);
              lVar8 = maybe___sprint(iStack_a8,&piStack_280);
              uVar12 = CONCAT44(uStack_5c,uStack_60);
              if (lVar8 != 0) goto LAB_0012d2f8;
              piVar4 = aiStack_270;
            }
            iVar5 = iVar5 + -0x10;
            if (iVar5 < 0x11) break;
            piVar4[1] = 0x10;
          }
          piVar4[1] = iVar5;
        }
        *piVar4 = (int)uVar12 + 0x3e0;
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + iVar5;
        if (7 < iStack_27c) {
          lVar8 = maybe___sprint(iStack_a8,&piStack_280);
          if (lVar8 != 0) goto LAB_0012d2fc;
          piVar4 = aiStack_270;
        }
      }
      if ((uVar20 & 1) == 0) goto LAB_0012d1b4;
      piVar4[1] = 1;
      *piVar4 = (int)&DAT_00360460;
      piVar4 = piVar4 + 2;
      iStack_27c = iStack_27c + 1;
      iStack_278 = iStack_278 + 1;
      bVar2 = iStack_27c < 8;
    }
  }
  if (!bVar2) {
    lVar8 = maybe___sprint(iStack_a8,&piStack_280);
    if (lVar8 != 0) goto LAB_0012d2fc;
    piVar4 = aiStack_270;
  }
LAB_0012d1b4:
  if (((uVar20 & 4) != 0) && (iVar5 = (int)puStack_a0 - (int)puStack_88, 0 < iVar5)) {
    uVar12 = 0x360000;
    if (iVar5 < 0x11) {
      piVar4[1] = iVar5;
    }
    else {
      piVar4[1] = 0x10;
      while( true ) {
        *piVar4 = (int)(s_0000000000000000Inf_003603cf + 1);
        piVar4 = piVar4 + 2;
        iStack_27c = iStack_27c + 1;
        iStack_278 = iStack_278 + 0x10;
        if (7 < iStack_27c) {
          uStack_60 = (undefined4)uVar12;
          uStack_5c = (undefined4)((ulong)uVar12 >> 0x20);
          lVar8 = maybe___sprint(iStack_a8,&piStack_280);
          uVar12 = CONCAT44(uStack_5c,uStack_60);
          if (lVar8 != 0) goto LAB_0012d2f8;
          piVar4 = aiStack_270;
        }
        iVar5 = iVar5 + -0x10;
        if (iVar5 < 0x11) break;
        piVar4[1] = 0x10;
      }
      piVar4[1] = iVar5;
    }
    *piVar4 = (int)uVar12 + 0x3d0;
    iStack_27c = iStack_27c + 1;
    iStack_278 = iStack_278 + iVar5;
    if ((7 < iStack_27c) && (lVar8 = maybe___sprint(iStack_a8,&piStack_280), lVar8 != 0))
    goto LAB_0012d2fc;
  }
  puVar6 = puStack_a0;
  if ((int)puStack_a0 <= (int)puStack_88) {
    puVar6 = puStack_88;
  }
  iStack_a4 = iStack_a4 + (int)puVar6;
  if ((iStack_278 != 0) && (lVar8 = maybe___sprint(iStack_a8,&piStack_280), lVar8 != 0))
  goto LAB_0012d2fc;
  piVar4 = aiStack_270;
  iStack_27c = 0;
  goto LAB_0012bda8;
LAB_0012c480:
  do {
    pcVar15 = pcVar16;
    uVar10 = uVar13 & 7;
    uVar13 = uVar13 >> 3;
    lVar9 = uVar10 + 0x30;
    pcVar16 = pcVar15 + -1;
    *pcVar16 = (char)lVar9;
  } while (uVar13 != 0);
  if ((uVar19 & 1) == 0) goto LAB_0012c538;
  if (lVar9 != 0x30) {
    pcVar16 = pcVar15 + -2;
    *pcVar16 = '0';
    goto LAB_0012c538;
  }
  puVar7 = auStack_290 + -(int)pcVar16;
  goto LAB_0012c53c;
LAB_0012c510:
  do {
    uVar19 = (uint)uVar13;
    pcVar16 = pcVar16 + -1;
    uVar13 = uVar13 >> 4;
    *pcVar16 = pcStack_84[uVar19 & 0xf];
  } while (uVar13 != 0);
  goto LAB_0012c538;
LAB_0012bf20:
  puVar6 = (undefined1 *)0x0;
  while (iVar5 = (int)lVar8, (int)cVar3 - 0x30U < 10) {
    cVar3 = *param_3;
    lVar8 = (long)cVar3;
    puVar6 = (undefined1 *)(((int)puVar6 * 10 + iVar5) - 0x30);
    param_3 = param_3 + 1;
  }
  if ((int)puVar6 < -1) goto code_r0x0012bf60;
  goto LAB_0012be78;
code_r0x0012bf60:
  puVar6 = (undefined1 *)0xffffffff;
  goto LAB_0012be74;
}

