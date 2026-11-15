// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00304000 - 0x00308000
#include "ghidra_types.h"

// 0x00306d50  size 0x130
int maybe_KernelPatch_SetupTlb(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  
  if (((param_1 & 0xfff) == 0) && (0xffffe < param_1 - 1)) {
    iVar2 = func_0x00075158(0x70004000,auStack_30,(uint)auStack_30 | 4,(uint)auStack_30 | 8);
    if (iVar2 < 0) {
      if (param_1 == 0) {
        return 0;
      }
      SYNC(0x10);
      iVar1 = Wired + 1;
      Index = Wired;
    }
    else {
      iVar1 = Wired;
      Index = iVar2;
      if (param_1 == 0) {
        EntryHi = (iVar2 + -1) * 0x2000 + -0x1fff0000;
        SYNC(0x10);
        TLB_write_indexed_entry(iVar2,EntryHi,0,0,0);
        SYNC(0x10);
        EntryLo0 = 0;
        EntryLo1 = 0;
        PageMask = 0;
        Wired = Wired + -1;
        return 0;
      }
    }
    Wired = iVar1;
    EntryLo1 = (param_1 + 0x1000 & 0xfffff000) >> 6 | 0x1f;
    EntryLo0 = (param_1 & 0xfffff000) >> 6 | 0x1f;
    PageMask = 0;
    EntryHi = 0x70004000;
    SYNC(0x10);
    TLB_write_indexed_entry(Index,0x70004000,EntryLo0,EntryLo1,0);
    SYNC(0x10);
    iVar2 = Index;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

// 0x00306ea8  size 0x1
/* WARNING: Control flow encountered bad instruction data */
/* follows KernelPatch_SetupTlb; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void KernelPatch_SetupTlb_Orphan1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// 0x00306eac  size 0x4
/* WARNING: Control flow encountered bad instruction data */
/* follows KernelPatch_SetupTlb; no call, branch, pointer or constant reference (exception landing
   pad or dead code) */

void KernelPatch_SetupTlb_Orphan4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// 0x00307218  size 0x84
/* address loaded as a constant in InitOsdPatch */

uint InitOsdPatch_Callback1(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  func_0x000741e8(0xffffffff80074700,0x26);
  piVar1 = (int *)0x80074780;
  uVar2 = 0;
  do {
    if (param_1 == *piVar1) {
      if (param_1 == -0x3bfe) {
        return (uint)piVar1[1] >> 2 & 0x3ffffff | 0xc000000;
      }
      return piVar1[1];
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (uVar2 < 5);
  return 0;
}

// 0x003072a0  size 0xac
/* follows KernelPatch_SetupTlb_Orphan1; unreferenced except as noted (was FUN_00306ea8_Orphan1) */

void KernelPatch_SetupTlb_Orphan2(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  uVar2 = uRam800747a8 & 1;
  *param_1 = uVar1 & 0xfffffffe | uVar2;
  uVar3 = uRam800747a8 & 6;
  *param_1 = uVar1 & 0xfffffff8 | uVar2 | uVar3;
  uVar4 = uRam800747a8 & 8;
  *param_1 = uVar1 & 0xfffffff0 | uVar2 | uVar3 | uVar4;
  uVar5 = uRam800747a8 & 0x10;
  *param_1 = uVar1 & 0xffffffe0 | uVar2 | uVar3 | uVar4 | uVar5;
  uVar6 = uRam800747a8 & 0x1fe0;
  *param_1 = uVar1 & 0xffffe000 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6;
  *param_1 = uVar1 & 0xffff0000 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uRam800747a8 & 0xe000;
  *(undefined2 *)((int)param_1 + 2) = uRam800747a8._2_2_;
  return;
}

// 0x00307350  size 0xac
/* follows KernelPatch_SetupTlb_Orphan1; unreferenced except as noted (was FUN_003072a0_Tail1) */

void KernelPatch_SetupTlb_Orphan3(undefined4 *param_1)

{
  uRam800747a8 = CONCAT22(*(undefined2 *)((int)param_1 + 2),
                          (ushort)*param_1 & 1 | (ushort)*param_1 & 6 | (ushort)*param_1 & 8 |
                          (ushort)*param_1 & 0x10 | (ushort)*param_1 & 0x1fe0 |
                          (ushort)*param_1 & 0xe000);
  return;
}

// 0x00307400  size 0xc0
void maybe_KernelPatch_ScanTable(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  if (iRambc0003c0 != 0) {
    iVar4 = iRambc0003c0 + -0x43fffff1;
    iVar3 = 0;
    do {
      puVar1 = (undefined1 *)(iVar4 + iVar3);
      puVar2 = (undefined1 *)(iVar3 + -0x7ff8b900);
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar1;
    } while (iVar3 < 0x26);
  }
  if (((long)(uRam80074700 << 0x1a) >> 0x20 & 7U) == 0) {
    uRam80074700 = uRam80074700 & 0xffff02ffffffffff;
  }
  return;
}

// 0x003074c0  size 0xa4
/* follows KernelPatch_ScanTable; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

ulong KernelPatch_ScanTable_Orphan1(int param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  
  if (0x80 < param_2 + param_3) {
    if (param_3 < 0x80) {
      param_2 = 0x80 - param_3;
    }
    else {
      param_3 = 0x80;
      param_2 = 0;
    }
  }
  uVar2 = param_2 + param_3;
  iVar3 = 0;
  for (; param_3 < uVar2; param_3 = param_3 + 1) {
    puVar1 = (undefined1 *)(param_1 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar1 = *(undefined1 *)(param_3 + 0x800747b0);
  }
  if (((long)(uRam80074700 << 0x1a) >> 0x20 & 7U) == 0) {
    return 0;
  }
  return uRam80074700 >> 0x2c & 0xf;
}

// 0x00307568  size 0x74
/* follows KernelPatch_ScanTable_Orphan1; unreferenced except as noted (was FUN_00307558_Orphan1) */

void KernelPatch_ScanTable_Orphan2(int param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 + param_3;
  if (0x80 < uVar3) {
    if (param_3 < 0x80) {
      iVar2 = 0x80 - param_3;
    }
    else {
      param_3 = 0x80;
      iVar2 = 0;
    }
    uVar3 = iVar2 + param_3;
  }
  iVar2 = 0;
  for (; param_3 < uVar3; param_3 = param_3 + 1) {
    puVar1 = (undefined1 *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
    *(undefined1 *)(param_3 + 0x800747b0) = *puVar1;
  }
  return;
}

// 0x003075e0  size 0xd0
void maybe_KernelPatch_WaitIntc(void)

{
  uint uVar1;
  
  REG_INTC_STAT = 4;
  do {
    uVar1 = REG_INTC_STAT;
  } while ((uVar1 & 4) == 0);
  REG_INTC_STAT = 4;
  (*pcRam80074760)();
  (*pcRam80074764)(1,2,1);
  (*pcRam8007474c)(0xdffd);
  (*pcRam80074750)();
  (*pcRam8007475c)(0x7f);
  (*pcRam80074754)();
  (*pcRam80074758)();
  return;
}

// 0x003076b0  size 0x1e4
undefined8 maybe_KernelPatch_Dispatch(undefined8 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0x4c;
  iVar5 = 1;
  iVar4 = *piRam80074728;
  (*pcRam80074730)(iVar4);
  (*pcRam80074734)(iVar4,0);
  do {
    iVar1 = *(int *)(iVar6 + iRam80074748 + 8);
    if ((iVar1 != 0) && (iVar5 != iVar4)) {
      if (iVar1 == 0x10) {
        (*pcRam80074740)(iVar5);
      }
      else {
        (*pcRam80074744)(iVar5);
        (*pcRam80074740)(iVar5);
      }
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x4c;
  } while (iVar5 < 0x100);
  iVar5 = 0;
  (*pcRam8007473c)();
  (*pcRam80074738)();
  *puRam8007472c = 0;
  func_0x000743c8();
  if (0 < param_3) {
    uVar3 = uRam80074778;
    do {
      iVar6 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      uVar3 = (*pcRam80074770)(uVar3,*(undefined4 *)(iVar6 + param_4));
    } while (iVar5 < param_3);
  }
  pcVar2 = pcRam8007476c;
  iVar4 = iVar4 * 0x4c + iRam80074748;
  *(undefined4 *)(iVar4 + 0x38) = uRam80074778;
  *(int *)(iVar4 + 0x34) = param_3;
  *(int *)(iVar4 + 0xc) = (int)param_1;
  *(int *)(iVar4 + 0x30) = (int)param_1;
  *(undefined4 *)(iVar4 + 0x14) = param_2;
  *(undefined2 *)(iVar4 + 0x1a) = 0;
  *(undefined2 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(undefined4 *)(iVar4 + 0x20) = 0;
  (*pcVar2)();
  (*pcRam80074768)();
  return param_1;
}

// 0x00307918  size 0x80
/* WARNING: Control flow encountered bad instruction data */
/* follows KernelPatch_Dispatch; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void KernelPatch_Dispatch_Orphan1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// 0x00307998  size 0x1
/* WARNING: Control flow encountered bad instruction data */
/* follows KernelPatch_Dispatch; no call, branch, pointer or constant reference (exception landing
   pad or dead code) */

void KernelPatch_Dispatch_Orphan4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// 0x00307a04  size 0x28
/* follows KernelPatch_Dispatch_Orphan1; unreferenced except as noted (was FUN_00307918_Tail1) */

int KernelPatch_Dispatch_Orphan2(int param_1,uint param_2)

{
  int *in_v1_lo;
  int *piVar1;
  
  do {
    piVar1 = in_v1_lo;
    in_v1_lo = piVar1 + 2;
    if (5 < param_2) {
      return 0;
    }
    param_2 = param_2 + 1;
  } while (param_1 != *in_v1_lo);
  return piVar1[3];
}

// 0x00307a18  size 0x1c
/* follows KernelPatch_Dispatch_Orphan1; unreferenced except as noted (was FUN_00307a04_Orphan1) */

ulong KernelPatch_Dispatch_Orphan3(long param_1,ulong param_2)

{
  if ((long)param_2 < param_1) {
    return param_2 | 0x10000;
  }
  return param_2;
}

// 0x00307a38  size 0x104
int maybe_KernelPatch_FindHandler(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < iRam80076700) {
    do {
      lVar1 = func_0x00076038(param_1,*(undefined2 *)(iVar4 * 0x14 + -0x7ff898c0));
      if (param_2 < lVar1) {
        iVar3 = iRam80076700 + -1;
        if (iVar3 < iVar4) {
          return iVar4;
        }
        puVar2 = (undefined8 *)(iVar3 * 0x14 + -0x7ff898c0);
        do {
          *(undefined8 *)((int)puVar2 + 0x14) = *puVar2;
          *(undefined8 *)((int)puVar2 + 0x1c) = puVar2[1];
          *(undefined4 *)((int)puVar2 + 0x24) = *(undefined4 *)(puVar2 + 2);
          iVar3 = iVar3 + -1;
          puVar2 = (undefined8 *)((int)puVar2 + -0x14);
        } while (iVar4 <= iVar3);
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iRam80076700);
  }
  return iVar4;
}

// 0x00307b40  size 0x13c
long maybe_KernelPatch_AddHandler(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  iVar2 = iRamb0001800;
  iVar6 = (param_1 & 0xffff) + iRamb0001800;
  if (iRam80076700 < 0x40) {
    lVar4 = 0;
    uVar5 = uRam80076708;
    do {
      if ((uVar5 & 1) == 0) {
        uRam80076708 = uRam80076708 | 1L << lVar4;
        goto LAB_00307be0;
      }
      lVar4 = (long)((int)lVar4 + 1);
      uVar5 = uRam80076708 >> lVar4;
    } while (lVar4 < 0x40);
    lVar4 = -1;
LAB_00307be0:
    if (-1 < lVar4) {
      iVar3 = func_0x00076058(iRamb0001800,iVar6);
      iVar3 = iVar3 * 0x14;
      iRam80076700 = iRam80076700 + 1;
      *(short *)(iVar3 + -0x7ff898be) = (short)iVar2;
      *(short *)(iVar3 + -0x7ff898c0) = (short)iVar6;
      *(int *)(iVar3 + -0x7ff898bc) = (int)lVar4;
      *(undefined **)(iVar3 + -0x7ff898b0) = &_mips_gp0_value;
      uVar1 = uRam80076740;
      *(undefined4 *)(iVar3 + -0x7ff898b8) = param_2;
      *(undefined4 *)(iVar3 + -0x7ff898b4) = param_3;
      func_0x00076460(uVar1);
      lVar4 = (long)*(int *)(iVar3 + -0x7ff898bc);
    }
  }
  else {
    lVar4 = -1;
  }
  return lVar4;
}

// 0x00307c80  size 0x1a0
int maybe_KernelPatch_RemoveHandler(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar5 = iRam80076700;
  iVar6 = -1;
  if ((0 < iRam80076700) && (iVar9 = 0, 0 < iRam80076700)) {
    do {
      if (param_1 == *(int *)(iVar9 * 0x14 + -0x7ff898bc)) {
        if ((*(ushort *)(iVar9 * 0x14 + -0x7ff898c0) == uRamb0001820) &&
           (uVar4 = REG_INTC_STAT, (uVar4 & 0x1000) != 0)) {
          return -1;
        }
        uVar1 = *(ushort *)(iVar9 * 0x14 + -0x7ff898be);
        iVar6 = iVar9;
        if (iVar9 < iRam80076700 + -1) {
          do {
            iVar7 = iVar6 + 1;
            iVar3 = iVar7 * 0x14;
            iVar6 = iVar6 * 0x14;
            uVar8 = *(undefined8 *)(iVar3 + -0x7ff898b8);
            uVar2 = *(undefined4 *)(iVar3 + -0x7ff898b0);
            *(undefined8 *)(iVar6 + -0x7ff898c0) = *(undefined8 *)(iVar3 + -0x7ff898c0);
            *(undefined8 *)(iVar6 + -0x7ff898b8) = uVar8;
            *(undefined4 *)(iVar6 + -0x7ff898b0) = uVar2;
            iVar6 = iVar7;
          } while (iVar7 < iVar5 + -1);
        }
        iRam80076700 = iRam80076700 + -1;
        uRam80076708 = uRam80076708 & ~(1L << param_1);
        if (iVar9 == 0) {
          func_0x00076460(uRam80076740);
        }
        if (iRam80076700 == 0) {
          uRamb0001810 = 0x83;
        }
        iVar6 = func_0x00076038(uVar1,uRamb0001800);
        iVar6 = iVar6 - (uint)uVar1;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iRam80076700);
  }
  SYNC(0);
  return iVar6;
}

// 0x00307e20  size 0x20
/* N153 confirmed: calls the kernel routine then SYNC */

void KernelPatch_CallSync(undefined2 param_1)

{
  func_0x00076160(param_1);
  SYNC(0);
  return;
}

// 0x00307e40  size 0x24
/* follows KernelPatch_CallSync; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void KernelPatch_CallSync_Orphan1(undefined4 param_1)

{
  uRamb0001820 = param_1;
  SYNC(0);
  uRamb0001810 = 0x583;
  return;
}

// 0x00307e68  size 0x1e0
void maybe_KernelPatch_ScanHandlers(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long in_t1;
  long extraout_t1;
  long extraout_t1_00;
  undefined8 uVar8;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  iVar6 = 0;
  do {
    if (iRam80076700 <= iVar6) goto LAB_00307efc;
    sVar1 = *(short *)(iVar6 * 0x14 + -0x7ff898c0);
    iVar6 = iVar6 + 1;
  } while (sRam80076740 == sVar1);
  func_0x00076460(sVar1);
  in_t1 = extraout_t1;
LAB_00307efc:
  do {
    uVar4 = uRam80076750;
    uVar3 = uRam80076748;
    sVar1 = sRam80076740;
    lVar7 = 0;
    iRam80076700 = iRam80076700 + -1;
    iStack_ac = (int)((uint6)uRam80076742 >> 0x10);
    if (0 < iRam80076700) {
      in_t1 = (long)iRam80076700;
      do {
        iVar6 = (int)lVar7 * 0x14;
        iVar5 = (int)lVar7 + 1;
        lVar7 = (long)iVar5;
        iVar5 = iVar5 * 0x14;
        uVar8 = *(undefined8 *)(iVar5 + -0x7ff898b8);
        uVar2 = *(undefined4 *)(iVar5 + -0x7ff898b0);
        *(undefined8 *)(iVar6 + -0x7ff898c0) = *(undefined8 *)(iVar5 + -0x7ff898c0);
        *(undefined8 *)(iVar6 + -0x7ff898b8) = uVar8;
        *(undefined4 *)(iVar6 + -0x7ff898b0) = uVar2;
      } while (lVar7 < in_t1);
    }
    uRam80076708 = uRam80076708 & ~(1L << (long)iStack_ac);
    uStack_a8 = (undefined4)uVar3;
    uStack_a4 = (undefined4)((ulong)uVar3 >> 0x20);
    func_0x00076680(0x82000,uStack_a8,(long)iStack_ac,sVar1,uStack_a4,in_t1,uVar4);
  } while ((0 < iRam80076700) && (in_t1 = extraout_t1_00, sVar1 == sRam80076740));
  if (iRam80076700 < 1) {
    uRamb0001810 = 0x483;
  }
  else {
    func_0x00076460(sRam80076740);
  }
  SYNC(0);
  EI();
  return;
}

