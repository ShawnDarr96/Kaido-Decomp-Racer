// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00108000 - 0x0010c000
#include "ghidra_types.h"

// 0x00108140  size 0x94
uint sceGsSyncV(void)

{
  ulong uVar1;
  short *psVar2;
  uint uVar3;
  long lVar4;
  
  psVar2 = (short *)sceGsGetGParam();
  if (*(int *)(psVar2 + 4) == 0) {
    maybe_sceGsVSyncHandlerClear();
    uVar3 = 1;
    if (*psVar2 == 1) {
      uVar1 = REG_GS_CSR;
      uVar3 = (uint)(uVar1 >> 0xd) & 1;
    }
  }
  else {
    lVar4 = maybe_sceGsWaitVSync();
    uVar3 = 1;
    if (*psVar2 == 1) {
      uVar3 = (uint)(lVar4 >> 0xd) & 1;
    }
  }
  return uVar3;
}

// 0x001081d8  size 0x314
uint sceGsSyncPath(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 in_vc13;
  
  uVar6 = 0;
  if (param_1 == 0) {
    uVar4 = REG_DMAC_1_VIF1_CHCR;
    while ((uVar4 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        uVar5 = 0x35e830;
        goto LAB_0010836c;
      }
      uVar4 = REG_DMAC_1_VIF1_CHCR;
    }
    uVar4 = REG_DMAC_2_GIF_CHCR;
    while ((uVar4 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        uVar5 = 0x35e910;
        goto LAB_0010836c;
      }
      uVar4 = REG_DMAC_2_GIF_CHCR;
    }
    uVar4 = REG_VIF1_STAT;
    while ((uVar4 & 0x1f000003) != 0) {
      bVar1 = 0x1000000 < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        uVar5 = 0x35e940;
        goto LAB_0010836c;
      }
      uVar4 = REG_VIF1_STAT;
    }
    uVar7 = _cfc2(in_vc13);
    while ((uVar7 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        uVar5 = 0x35e970;
        goto LAB_0010836c;
      }
      uVar7 = _cfc2(in_vc13);
    }
    uVar4 = REG_GIF_STAT;
    while ((uVar4 & 0xc00) != 0) {
      bVar1 = 0x1000000 < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        uVar5 = 0x35e998;
LAB_0010836c:
        maybe_scePrintf(uVar5);
        uVar2 = REG_DMAC_1_VIF1_CHCR;
        maybe_scePrintf(0x35e860,uVar2);
        uVar2 = REG_DMAC_1_VIF1_TADR;
        maybe_scePrintf(0x35e870,uVar2);
        uVar2 = REG_DMAC_1_VIF1_MADR;
        maybe_scePrintf(0x35e880,uVar2);
        uVar2 = REG_DMAC_1_VIF1_QWC;
        maybe_scePrintf(0x35e890,uVar2);
        uVar2 = REG_DMAC_2_GIF_CHCR;
        maybe_scePrintf(0x35e8a0,uVar2);
        uVar2 = REG_DMAC_2_GIF_TADR;
        maybe_scePrintf(0x35e8b0,uVar2);
        uVar2 = REG_DMAC_2_GIF_MADR;
        maybe_scePrintf(0x35e8c0,uVar2);
        uVar2 = REG_DMAC_2_GIF_QWC;
        maybe_scePrintf(0x35e8d0,uVar2);
        uVar2 = REG_VIF1_STAT;
        maybe_scePrintf(0x35e8e0,uVar2);
        uVar2 = REG_GIF_STAT;
        maybe_scePrintf(0x35e8f8,uVar2);
        return 0xffffffff;
      }
      uVar4 = REG_GIF_STAT;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = REG_DMAC_1_VIF1_CHCR;
    uVar3 = REG_DMAC_2_GIF_CHCR;
    uVar6 = REG_VIF1_STAT;
    uVar4 = (uint)((uVar4 & 0x100) != 0);
    if ((uVar3 & 0x100) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((uVar6 & 0x1f000003) != 0) {
      uVar4 = uVar4 | 4;
    }
    uVar7 = _cfc2(in_vc13);
    uVar6 = REG_GIF_STAT;
    if ((uVar7 & 0x100) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((uVar6 & 0xc00) != 0) {
      uVar4 = uVar4 | 0x10;
    }
  }
  return uVar4;
}

// 0x001084f0  size 0x140
undefined4
sceGsSetDefStoreImage
          (undefined4 *param_1,short param_2,int param_3,short param_4,short param_5,int param_6,
          short param_7,short param_8)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = 0x6008000;
  *(undefined8 *)(param_1 + 0x1a) = 0x53;
  param_1[2] = 0x13000000;
  param_1[3] = 0x50000006;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffff8000 | 0x1000000000008005;
  *(ulong *)(param_1 + 6) = *(ulong *)(param_1 + 6) & 0xfffffffffffffff0 | 0xe;
  *(long *)(param_1 + 8) =
       (long)(param_3 << 0x10) | (long)param_2 | ((long)(int)param_4 << 0x30) >> 0x18;
  *(undefined8 *)(param_1 + 10) = 0x50;
  *(long *)(param_1 + 0xc) = (long)(param_6 << 0x10) | (long)param_5;
  *(undefined8 *)(param_1 + 0xe) = 0x51;
  *(long *)(param_1 + 0x10) = (long)param_7 | ((long)(int)param_8 << 0x30) >> 0x10;
  *(undefined8 *)(param_1 + 0x12) = 0x52;
  *(undefined8 *)(param_1 + 0x16) = 0x61;
  *(undefined8 *)(param_1 + 0x18) = 1;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  SYNC(0);
  return 7;
}

// 0x00108630  size 0x68c
undefined4 sceGsExecStoreImage(uint param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar6 = 0;
  uVar17 = 0;
  uVar22 = 0;
  uVar11 = 0;
  uVar21 = 0;
  uVar7 = (uint)*(undefined8 *)(param_1 + 0x40);
  uVar20 = uVar7 & 0xfff;
  uVar13 = (uint)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x18) & 0x3f;
  uVar19 = (uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) & 0xfff;
  uVar15 = 0;
  if (0x3a < uVar13) goto switchD_001086c4_caseD_3;
                    /* WARNING: Switch is manually overridden */
  switch(uVar13) {
  case 0:
    uVar17 = uVar20 * uVar19 * 4;
    uVar11 = (int)uVar17 >> 4;
    uVar17 = uVar17 & 0xf;
    uVar22 = uVar11 & 0xfffffff8;
    uVar11 = uVar11 & 7;
    if (uVar17 != 0) {
      uVar15 = uVar19 + 3 & 0x1ffc;
      iVar6 = (int)(uVar20 * uVar15) >> 2;
LAB_00108800:
      iVar6 = ((iVar6 - uVar22) - uVar11) + -1;
      goto switchD_001086c4_caseD_3;
    }
    break;
  case 1:
    uVar17 = uVar20 * uVar19 * 3;
    uVar11 = (int)uVar17 >> 4;
    uVar17 = uVar17 & 0xf;
    uVar22 = uVar11 & 0xfffffff8;
    uVar11 = uVar11 & 7;
    if (uVar17 != 0) {
      uVar15 = uVar19 + 0xf & 0x1ff0;
      iVar6 = ((((int)(uVar20 * uVar15 * 3) >> 4) - uVar22) - uVar11) + -1;
      goto switchD_001086c4_caseD_3;
    }
    break;
  case 2:
  case 10:
    uVar17 = uVar20 * uVar19 * 2;
    uVar11 = (int)uVar17 >> 4;
    uVar17 = uVar17 & 0xf;
    uVar22 = uVar11 & 0xfffffff8;
    uVar11 = uVar11 & 7;
    if (uVar17 != 0) {
      uVar15 = uVar19 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar20 * uVar15) >> 3;
      goto LAB_00108800;
    }
    break;
  default:
    goto switchD_001086c4_caseD_3;
  case 0x13:
    uVar11 = (int)(uVar20 * uVar19) >> 4;
    uVar17 = uVar20 * uVar19 & 0xf;
    uVar22 = uVar11 & 0xfffffff8;
    uVar11 = uVar11 & 7;
    if (uVar17 != 0) {
      uVar15 = uVar19 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar20 * uVar15) >> 4;
      goto LAB_00108800;
    }
    break;
  case 0x14:
    uVar11 = (int)(uVar20 * uVar19) >> 5;
    uVar17 = (int)(uVar20 * uVar19) >> 1 & 0xf;
    uVar22 = uVar11 & 0xfffffff8;
    uVar11 = uVar11 & 7;
    if (uVar17 != 0) {
      uVar15 = uVar19 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar20 * uVar15) >> 5;
      goto LAB_00108800;
    }
  }
  iVar6 = 0;
  uVar15 = uVar19;
switchD_001086c4_caseD_3:
  if (uVar17 != 0) {
    *(ulong *)(param_1 + 0x40 | 0x20000000) = (long)(int)(uVar7 & 0xfff) | (ulong)uVar15 << 0x20;
  }
  uVar7 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar7 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar21;
    uVar21 = uVar21 + 1;
    if (bVar1) goto LAB_001089d8;
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  }
  uVar9 = GsGetIMR();
  uVar10 = GsPutIMR(uVar9 | 0x200);
  REG_GS_CSR = 2;
  REG_DMAC_1_VIF1_QWC = 7;
  if ((param_1 & 0x70000000) == 0x70000000) {
    param_1 = param_1 & 0xfffffff | 0x80000000;
  }
  else {
    param_1 = param_1 & 0xfffffff;
  }
  REG_DMAC_1_VIF1_MADR = param_1;
  REG_DMAC_1_VIF1_CHCR = 0x101;
  uVar7 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar7 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar21;
    uVar21 = uVar21 + 1;
    if (bVar1) {
LAB_001089d8:
      maybe_scePrintf(0x35e9c0);
      return 0xffffffff;
    }
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  }
  uVar9 = REG_GS_CSR;
  while ((uVar9 & 2) == 0) {
    bVar1 = 0x1000000 < uVar21;
    uVar21 = uVar21 + 1;
    if (bVar1) {
      maybe_scePrintf(0x35e9f8);
      REG_VIF1_FIFO = DAT_00306860;
      DAT_10005004 = DAT_00306864;
      DAT_10005008 = DAT_00306868;
      DAT_1000500c = DAT_0030686c;
      return 0xffffffff;
    }
    uVar9 = REG_GS_CSR;
  }
  REG_VIF1_STAT = 0x800000;
  REG_GS_BUSDIR = 1;
  if (uVar22 != 0) {
    REG_DMAC_1_VIF1_QWC = uVar22;
    if ((param_2 & 0x70000000) == 0x70000000) {
      uVar7 = param_2 & 0xfffffff | 0x80000000;
    }
    else {
      uVar7 = param_2 & 0xfffffff;
    }
    REG_DMAC_1_VIF1_MADR = uVar7;
    REG_DMAC_1_VIF1_CHCR = 0x100;
    uVar7 = REG_DMAC_1_VIF1_CHCR;
    while ((uVar7 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar21;
      uVar21 = uVar21 + 1;
      if (bVar1) {
        pcVar14 = s_sceGsExecStoreImage__DMA_Ch_1__G_0035ea28;
        goto LAB_00108a30;
      }
      uVar7 = REG_DMAC_1_VIF1_CHCR;
    }
  }
  iVar16 = 0;
  if (uVar11 != 0) {
    puVar18 = (undefined4 *)(uVar22 * 0x10 + param_2);
    do {
      uVar7 = REG_VIF1_STAT;
      while ((uVar7 & 0x1f000000) == 0) {
        bVar1 = 0x1000000 < uVar21;
        uVar21 = uVar21 + 1;
        if (bVar1) goto LAB_00108a28;
        uVar7 = REG_VIF1_STAT;
      }
      uVar2 = REG_VIF1_FIFO;
      uVar3 = DAT_10005004;
      uVar4 = DAT_10005008;
      uVar5 = DAT_1000500c;
      iVar16 = iVar16 + 1;
      *puVar18 = uVar2;
      puVar18[1] = uVar3;
      puVar18[2] = uVar4;
      puVar18[3] = uVar5;
      puVar18 = puVar18 + 4;
    } while (iVar16 < (int)uVar11);
  }
  if (uVar17 != 0) {
    uVar7 = REG_VIF1_STAT;
    while ((uVar7 & 0x1f000000) == 0) {
      bVar1 = 0x1000000 < uVar21;
      uVar21 = uVar21 + 1;
      if (bVar1) {
LAB_00108a28:
        pcVar14 = s_sceGsExecStoreImage__Enough_data_0035ea68;
LAB_00108a30:
        maybe_scePrintf(pcVar14);
        REG_GS_CSR = 0x100;
        REG_GS_BUSDIR = 0;
        REG_GIF_CTRL = 1;
        REG_VIF1_FBRST = 1;
        return 0xffffffff;
      }
      uVar7 = REG_VIF1_STAT;
    }
    iVar16 = 0;
    uStack_90 = REG_VIF1_FIFO;
    uStack_8c = DAT_10005004;
    uStack_88 = DAT_10005008;
    uStack_84 = DAT_1000500c;
    if (uVar17 != 0) {
      do {
        puVar8 = (undefined1 *)((int)&uStack_90 + iVar16);
        puVar12 = (undefined1 *)((uVar22 + uVar11) * 0x10 + param_2 + iVar16);
        iVar16 = iVar16 + 1;
        *puVar12 = *puVar8;
      } while (iVar16 < (int)uVar17);
    }
    iVar16 = 0;
    if (0 < iVar6) {
      do {
        uVar7 = REG_VIF1_STAT;
        while ((uVar7 & 0x1f000000) == 0) {
          bVar1 = 0x1000000 < uVar21;
          uVar21 = uVar21 + 1;
          if (bVar1) goto LAB_00108a28;
          uVar7 = REG_VIF1_STAT;
        }
        uStack_90 = REG_VIF1_FIFO;
        uStack_8c = DAT_10005004;
        uStack_88 = DAT_10005008;
        uStack_84 = DAT_1000500c;
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar6);
    }
  }
  REG_VIF1_STAT = 0;
  REG_GS_BUSDIR = 0;
  GsPutIMR(uVar10);
  REG_GS_CSR = 2;
  REG_VIF1_FIFO = DAT_00306860;
  DAT_10005004 = DAT_00306864;
  DAT_10005008 = DAT_00306868;
  DAT_1000500c = DAT_0030686c;
  return 0;
}

// 0x00108cc0  size 0xa0
/* INTC 2 (vblank start) handler swap */

int sceGsSyncVCallback(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = sceGsGetGParam();
  iVar1 = *(int *)(iVar2 + 8);
  if (param_1 == 0) {
    DisableIntc(2);
    RemoveIntcHandler(2,*(undefined4 *)(iVar2 + 0xc));
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  else {
    if (iVar1 == 0) {
      *(int *)(iVar2 + 8) = (int)param_1;
    }
    else {
      DisableIntc(2);
      RemoveIntcHandler(2,*(undefined4 *)(iVar2 + 0xc));
      *(int *)(iVar2 + 8) = (int)param_1;
    }
    uVar3 = AddIntcHandler(2,param_1,0xffffffffffffffff);
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
    EnableIntc(2);
  }
  return iVar1;
}

// 0x00108d60  size 0x250
undefined4
maybe_Mpeg_MotionCompensation
          (undefined8 param_1,int param_2,int param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar3 = *(int *)(iVar5 + 0x144);
  iVar1 = param_2 / iVar3;
  param_2 = param_2 % iVar3;
  if (iVar3 == 0) {
    trap(7);
  }
  if ((param_4 & 1) == 0) {
    if (2 < (int)param_5 - 1U) {
      maybe_Mpeg_Errorf(param_1,0x35eb90,param_5);
      *(undefined4 *)(iVar5 + 0x134) = 1;
      return 0;
    }
    maybe_Mpeg_FormPredictions(param_1,param_2 << 4,iVar1 << 4,param_4);
    do {
      uVar2 = REG_DMAC_9_SPR_TO_CHCR;
    } while ((uVar2 >> 8 & 1) != 0);
    maybe_Mpeg_KickMotionComp(param_1);
    *(undefined4 *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6e0) = 1;
  }
  else {
    do {
      uVar2 = REG_DMAC_9_SPR_TO_CHCR;
    } while ((uVar2 >> 8 & 1) != 0);
    *(undefined4 *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6e0) = 0;
  }
  if (param_3 == 1) {
    if ((param_4 & 2) != 0) {
      *(undefined4 *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6dc) = 1;
      goto LAB_00108ee4;
    }
    iVar3 = *(int *)(iVar5 + 0x828);
  }
  else {
    iVar3 = *(int *)(iVar5 + 0x828);
  }
  *(undefined4 *)(iVar3 * 0x140 + iVar5 + 0x6dc) = 0;
LAB_00108ee4:
  *(uint *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6d8) = (uint)param_4 & 1;
  if (*(int *)(iVar5 + 0x18c) == 3) {
    *(int *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6d0) =
         **(int **)(iVar5 + 0x1d8) + (param_2 * (*(int **)(iVar5 + 0x1d8))[4] + iVar1) * 0x180;
  }
  else {
    if (*(int *)(iVar5 + 0x18c) == 2) {
      piVar4 = *(int **)(iVar5 + 0x1f8);
    }
    else {
      piVar4 = *(int **)(iVar5 + 0x1e8);
    }
    *(int *)(*(int *)(iVar5 + 0x828) * 0x140 + iVar5 + 0x6d0) =
         *piVar4 + (param_2 * piVar4[4] + iVar1) * 0x180;
  }
  return 1;
}

// 0x00108fb0  size 0x704
/* "invalid motion_type" */

void maybe_Mpeg_FormPredictions
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5,
               undefined4 *param_6,uint *param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_d0 [16];
  undefined4 auStack_c0 [4];
  uint uStack_b0;
  
  iVar9 = (int)param_1;
  uStack_b0 = param_4;
  param_4 = param_4 & 8;
  *(undefined4 *)(*(int *)(iVar9 + 0x828) * 0x140 + iVar9 + 0x6d4) = 0;
  if ((param_4 == 0) && (*(int *)(iVar9 + 0x168) != 2)) goto LAB_00109498;
  if (*(int *)(iVar9 + 0x18c) == 3) {
    if ((param_5 == 2) || (param_4 == 0)) {
      uVar5 = *(undefined4 *)(iVar9 + 0x1d0);
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0x10;
    }
    else {
      if (param_5 == 1) {
        maybe_Mpeg_FormPrediction
                  (param_1,*(undefined4 *)(iVar9 + 0x1d0),*param_7,0,0,8,param_2,param_3);
        maybe_Mpeg_FormPrediction
                  (param_1,*(undefined4 *)(iVar9 + 0x1d0),param_7[2],1,0,8,param_2,param_3);
        goto LAB_00109498;
      }
      if (param_5 != 3) {
        maybe_Mpeg_Errorf(param_1,0x35ebb8,param_5);
        goto LAB_00109498;
      }
      maybe_Mpeg_MotionVectors(param_1,auStack_d0,param_8,*param_6,(int)param_6[1] >> 1);
      maybe_Mpeg_FormPrediction(param_1,*(undefined4 *)(iVar9 + 0x1d0),0,0,0,8,param_2,param_3);
      maybe_Mpeg_FormPrediction(param_1,*(undefined4 *)(iVar9 + 0x1d0),1,0,0,8,param_2,param_3);
      maybe_Mpeg_FormPrediction(param_1,*(undefined4 *)(iVar9 + 0x1d0),1,1,0,8,param_2,param_3);
      uVar5 = *(undefined4 *)(iVar9 + 0x1d0);
      uVar6 = 1;
      uVar7 = 0;
      uVar8 = 8;
    }
  }
  else {
    uVar10 = (uint)(*(int *)(iVar9 + 0x18c) == 2);
    uVar3 = 0;
    auStack_c0[0] = *(undefined4 *)(iVar9 + 0x1e0);
    auStack_c0[1] = *(undefined4 *)(iVar9 + 0x1f0);
    auStack_c0[2] = *(undefined4 *)(iVar9 + 0x1e4);
    auStack_c0[3] = *(undefined4 *)(iVar9 + 500);
    uVar1 = 0;
    if (*(int *)(iVar9 + 0x168) == 2) {
      if (*(int *)(iVar9 + 0x138) != 0) {
        uVar1 = (uint)(uVar10 != *param_7);
        goto LAB_00109290;
      }
    }
    else {
LAB_00109290:
      uVar3 = uVar1;
    }
    if (param_5 == 1) {
      uVar1 = *param_7;
LAB_001092a8:
      uVar5 = auStack_c0[uVar3 * 2 + uVar1];
    }
    else {
      if (param_4 == 0) {
        uVar1 = *param_7;
        goto LAB_001092a8;
      }
      if (param_5 == 2) {
        maybe_Mpeg_FormPrediction(param_1,auStack_c0[uVar3 * 2 + *param_7],0,0,0,8,param_2,param_3);
        uVar1 = 0;
        if (*(int *)(iVar9 + 0x168) == 2) {
          uVar3 = param_7[2];
          if (*(int *)(iVar9 + 0x138) != 0) {
            uVar1 = (uint)(uVar10 != uVar3);
          }
        }
        else {
          uVar3 = param_7[2];
        }
        uVar6 = 0;
        uVar5 = auStack_c0[uVar1 * 2 + uVar3];
        uVar7 = 8;
        uVar8 = 8;
        goto LAB_00109470;
      }
      if (param_5 != 3) {
        maybe_Mpeg_Errorf(param_1,0x35ebd8,param_5);
        goto LAB_00109498;
      }
      iVar2 = *(int *)(iVar9 + 0x138);
      maybe_Mpeg_MotionVectors(param_1,auStack_d0,param_8,*param_6,param_6[1]);
      maybe_Mpeg_FormPrediction(param_1,auStack_c0[uVar10],0,0,0,0x10,param_2,param_3);
      iVar4 = (uint)(iVar2 != 0) * 8;
      iVar2 = iVar4 + 4;
      if (uVar10 != 0) {
        iVar2 = iVar4;
      }
      uVar5 = *(undefined4 *)((int)auStack_c0 + iVar2);
    }
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0x10;
  }
LAB_00109470:
  maybe_Mpeg_FormPrediction(param_1,uVar5,0,uVar6,uVar7,uVar8,param_2,param_3);
LAB_00109498:
  if ((uStack_b0 & 4) != 0) {
    if (*(int *)(iVar9 + 0x18c) == 3) {
      if (param_5 != 2) {
        maybe_Mpeg_FormPrediction
                  (param_1,*(undefined4 *)(iVar9 + 0x1d4),param_7[1],0,0,8,param_2,param_3);
        uVar6 = 8;
        uVar1 = param_7[3];
      }
      else {
        uVar1 = 0;
        uVar6 = 0x10;
      }
      maybe_Mpeg_FormPrediction
                (param_1,*(undefined4 *)(iVar9 + 0x1d4),uVar1,param_5 != 2,0,uVar6,param_2,param_3);
    }
    else if (param_5 == 1) {
      if (param_7[1] == 0) {
        uVar5 = *(undefined4 *)(iVar9 + 0x1e4);
      }
      else {
        uVar5 = *(undefined4 *)(iVar9 + 500);
      }
      maybe_Mpeg_FormPrediction(param_1,uVar5,0,0,0,0x10,param_2,param_3);
    }
    else if (param_5 == 2) {
      if (param_7[1] == 0) {
        uVar5 = *(undefined4 *)(iVar9 + 0x1e4);
      }
      else {
        uVar5 = *(undefined4 *)(iVar9 + 500);
      }
      maybe_Mpeg_FormPrediction(param_1,uVar5,0,0,0,8,param_2,param_3);
      if (param_7[3] == 0) {
        uVar5 = *(undefined4 *)(iVar9 + 0x1e4);
      }
      else {
        uVar5 = *(undefined4 *)(iVar9 + 500);
      }
      maybe_Mpeg_FormPrediction(param_1,uVar5,0,0,8,8,param_2,param_3);
    }
    else {
      maybe_Mpeg_Errorf(param_1,0x35ebf8,param_5);
    }
  }
  return;
}

// 0x001096b8  size 0x41c
void maybe_Mpeg_FormPrediction
               (int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7
               ,int param_8,uint param_9,uint param_10,uint param_11,int param_12)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  iVar4 = *(int *)(param_1 + 0x834);
  iVar3 = *(int *)(param_1 + 0x828) * 0x140;
  iVar8 = ((int)param_9 >> 1) + param_7;
  iVar1 = *(int *)(param_1 + 0x6d4 + iVar3);
  iVar3 = param_1 + iVar3 + 0x5a8;
  piVar11 = (int *)(iVar3 + iVar1 * 0x1c + 0xb8);
  piVar10 = (int *)(iVar3 + iVar1 * 0x1c + 0x48);
  iVar3 = (int)param_10 >> 1;
  if (param_11 != 0) {
    iVar3 = iVar3 << 1;
  }
  iVar5 = iVar3 + param_8 + param_5 + param_3;
  iVar3 = param_2[4];
  iVar13 = iVar8 >> 4;
  iVar14 = iVar5 >> 4;
  piVar10[1] = iVar8 + iVar13 * -0x10;
  iVar3 = iVar13 * iVar3 + iVar14;
  iVar5 = iVar5 + iVar14 * -0x10;
  *piVar10 = iVar4 + (param_4 + param_5) * 0x20;
  if ((param_10 & 1) == 0) {
    if (iVar5 + (param_6 << (param_11 & 0x1f)) < 0x11) {
      piVar10[2] = param_6;
      goto LAB_0010983c;
    }
    iVar8 = (0x10 >> (param_11 & 0x1f)) - (iVar5 >> (param_11 & 0x1f));
    piVar10[2] = iVar8;
    piVar10[3] = param_6 - iVar8;
  }
  else if (iVar5 + (param_6 << (param_11 & 0x1f)) < 0x10) {
    piVar10[2] = param_6;
LAB_0010983c:
    piVar10[3] = 0;
  }
  else {
    iVar8 = ((0x10 >> (param_11 & 0x1f)) - (iVar5 >> (param_11 & 0x1f))) + -1;
    piVar10[2] = iVar8;
    piVar10[3] = param_6 - iVar8;
  }
  iVar12 = *(int *)(*(int *)(param_1 + 0x828) * 0x140 + param_1 + 0x5a8) + iVar1 * 0x600;
  param_5 = param_5 >> 1;
  piVar10[5] = iVar12 + iVar5 * 0x10;
  piVar10[4] = 0x10 << (param_11 & 0x1f);
  iVar9 = ((int)(param_9 - ((int)param_9 >> 0x1f)) >> 2) + (param_7 >> 1);
  piVar10[6] = iVar12 + iVar5 * 0x10 + 0x300;
  param_6 = param_6 >> 1;
  iVar8 = (int)(param_10 - ((int)param_10 >> 0x1f)) >> 2;
  if (param_11 == 0) {
    iVar8 = iVar8 + (param_8 >> 1) + param_5 + param_3;
  }
  else {
    iVar8 = iVar8 * 2 + (param_8 >> 1) + param_5 + param_3;
  }
  iVar6 = iVar9 >> 3;
  iVar5 = iVar8 + (iVar8 >> 3) * -8;
  uVar15 = (int)param_10 / 2 & 1;
  piVar11[1] = iVar9 + iVar6 * -8;
  *piVar11 = iVar4 + (param_4 + param_5) * 0x10 + 0x200;
  if (uVar15 == 0) {
    if (8 < iVar5 + (param_6 << (param_11 & 0x1f))) {
      iVar4 = (8 >> (param_11 & 0x1f)) - (iVar5 >> (param_11 & 0x1f));
      piVar11[2] = iVar4;
      piVar11[3] = param_6 - iVar4;
      goto LAB_001099bc;
    }
    piVar11[2] = param_6;
  }
  else {
    if (7 < iVar5 + (param_6 << (param_11 & 0x1f))) {
      iVar4 = ((8 >> (param_11 & 0x1f)) - (iVar5 >> (param_11 & 0x1f))) + -1;
      piVar11[2] = iVar4;
      piVar11[3] = param_6 - iVar4;
      goto LAB_001099bc;
    }
    piVar11[2] = param_6;
  }
  piVar11[3] = 0;
LAB_001099bc:
  piVar11[4] = 8 << (param_11 & 0x1f);
  iVar9 = *(int *)(param_1 + 0x828) * 0x140;
  iVar4 = param_2[4];
  iVar7 = iVar1 * 4 + iVar9;
  iVar12 = ((iVar6 - iVar13) * 2 + ((iVar8 >> 3) - iVar14)) * 0x180 + iVar12;
  *(undefined **)(param_1 + iVar7 + 0x5d0) =
       (&PTR_Mpeg_AddBlocks_Orphan16_00306870)[param_12 << 2 | (param_9 & 1) << 1 | param_10 & 1];
  piVar10 = (int *)(param_1 + 0x6d4 + iVar9);
  iVar1 = *param_2;
  piVar11[5] = iVar12 + iVar5 * 8 + 0x100;
  piVar11[6] = iVar12 + iVar5 * 8 + 0x400;
  param_1 = param_1 + iVar7;
  iVar8 = *piVar10;
  puVar2 = (&PTR_LAB_00306890)[param_12 << 2 | ((int)param_9 / 2 & 1U) << 1 | uVar15];
  *(int *)(param_1 + 0x5b0) = iVar1 + iVar3 * 0x180;
  *(undefined **)(param_1 + 0x5e0) = puVar2;
  *(int *)(param_1 + 0x5c0) = (iVar3 + iVar4) * 0x180 + iVar1;
  *piVar10 = iVar8 + 1;
  return;
}

// 0x00109ad8  size 0x21c
/* "intra && skip MB" */

void maybe_Mpeg_AddBlocks(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 in_zero_qw [16];
  int *piVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iStack_a8;
  
  iVar10 = (int)param_1;
  if ((*(int *)(iVar10 + param_2 * 0x140 + 0x6e0) != 0) &&
     (iVar13 = 0, 0 < *(int *)(iVar10 + 0x6d4 + param_2 * 0x140))) {
    do {
      iVar11 = iVar13 * 4;
      iVar1 = param_2 * 0x140;
      iVar2 = iVar13 * 0x1c;
      iVar13 = iVar13 + 1;
      iVar11 = iVar11 + iVar1;
      iVar12 = iVar10 + iVar1 + 0x5a8;
      (**(code **)(iVar10 + 0x5d0 + iVar11))(iVar12 + iVar2 + 0x48);
      (**(code **)(iVar10 + 0x5e0 + iVar11))(iVar12 + iVar2 + 0xb8);
    } while (iVar13 < *(int *)(iVar10 + 0x6d4 + iVar1));
  }
  iStack_a8 = iVar10 + 0x6d8;
  if ((*(int *)(iStack_a8 + param_2 * 0x140) != 0) &&
     (*(int *)(iVar10 + param_2 * 0x140 + 0x6e4) != 0)) {
    maybe_Mpeg_Error(param_1,0x35ec18);
  }
  auVar3 = auRam0010aa90;
  param_2 = param_2 * 0x140;
  if (*(int *)(iStack_a8 + param_2) == 0) {
    piVar4 = (int *)(iVar10 + 0x6d0 + param_2);
    if (*(int *)(iVar10 + param_2 + 0x6e4) == 0) {
      pauVar6 = *(undefined1 (**) [16])(iVar10 + 0x834);
      pauVar7 = *(undefined1 (**) [16])(iVar10 + param_2 + 0x5ac);
      iVar10 = 0x18;
      puVar5 = (undefined4 *)*piVar4;
      do {
        iVar10 = iVar10 + -1;
        auVar8 = _paddh(*pauVar7,*pauVar6);
        auVar8 = _pminh(auVar8,auVar3);
        auVar9 = _paddh(pauVar7[1],pauVar6[1]);
        auVar8 = _pmaxh(auVar8,in_zero_qw);
        auVar9 = _pminh(auVar9,auVar3);
        pauVar6 = pauVar6 + 2;
        auVar9 = _pmaxh(auVar9,in_zero_qw);
        pauVar7 = pauVar7 + 2;
        auVar8 = _ppacb(auVar9,auVar8);
        *puVar5 = auVar8._0_4_;
        puVar5[1] = auVar8._4_4_;
        puVar5[2] = auVar8._8_4_;
        puVar5[3] = auVar8._12_4_;
        puVar5 = puVar5 + 4;
      } while (iVar10 != 0);
      return;
    }
    pauVar6 = *(undefined1 (**) [16])(iVar10 + 0x834);
    puVar5 = (undefined4 *)*piVar4;
  }
  else {
    puVar5 = *(undefined4 **)(iVar10 + 0x6d0 + param_2);
    pauVar6 = *(undefined1 (**) [16])(iVar10 + param_2 + 0x5ac);
  }
  iVar10 = 0x18;
  do {
    iVar10 = iVar10 + -1;
    auVar8 = _pminh(*pauVar6,auVar3);
    auVar8 = _pmaxh(auVar8,in_zero_qw);
    auVar9 = _pminh(pauVar6[1],auVar3);
    pauVar6 = pauVar6 + 2;
    auVar9 = _pmaxh(auVar9,in_zero_qw);
    auVar8 = _ppacb(auVar9,auVar8);
    *puVar5 = auVar8._0_4_;
    puVar5[1] = auVar8._4_4_;
    puVar5[2] = auVar8._8_4_;
    puVar5[3] = auVar8._12_4_;
    puVar5 = puVar5 + 4;
  } while (iVar10 != 0);
  return;
}

// 0x00109cf8  size 0x74
/* follows Mpeg_AddBlocks; no call, branch, pointer or constant reference (exception landing pad or
   dead code) */

void Mpeg_AddBlocks_Orphan16(undefined4 *param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [16];
  undefined4 *puVar8;
  uint uVar9;
  
  pauVar2 = (undefined1 (*) [16])param_1[5];
  pauVar3 = (undefined1 (*) [16])param_1[6];
  uVar4 = param_1[2];
  puVar8 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar9 = 0xffffffff;
  do {
    do {
      auVar5 = *pauVar2;
      uVar4 = uVar4 - 1;
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + iVar1);
      auVar7 = _qfsrv(*pauVar3,auVar5);
      auVar5 = _pextlb(0,auVar7._0_8_);
      auVar7 = _pextub(in_zero_qw,auVar7);
      *puVar8 = auVar5._0_4_;
      puVar8[1] = auVar5._4_4_;
      puVar8[2] = auVar5._8_4_;
      puVar8[3] = auVar5._12_4_;
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + iVar1);
      puVar8[4] = auVar7._0_4_;
      puVar8[5] = auVar7._4_4_;
      puVar8[6] = auVar7._8_4_;
      puVar8[7] = auVar7._12_4_;
      puVar8 = (undefined4 *)((int)puVar8 + iVar1 * 2);
    } while (0 < (int)uVar4);
    pauVar2 = pauVar2 + 8;
    pauVar3 = pauVar3 + 8;
    uVar4 = param_1[3];
    uVar6 = uVar9 & uVar4;
    uVar9 = 0;
  } while (uVar6 != 0);
  return;
}

// 0x00109db0  size 0x74
/* follows Mpeg_AddBlocks; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

void Mpeg_AddBlocks_Orphan1(int *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 in_t0_qw [16];
  undefined1 auVar3 [16];
  undefined1 in_t1_qw [16];
  uint uVar4;
  int in_t3_lo;
  int in_t4_lo;
  undefined4 *in_t6_lo;
  uint in_t7_lo;
  long in_t8;
  
  do {
    param_4 = param_4 - 1;
    param_2 = (undefined8 *)((int)param_2 + in_t4_lo);
    in_t6_lo = (undefined4 *)((int)in_t6_lo + in_t3_lo);
    param_3 = (undefined8 *)((int)param_3 + in_t4_lo);
    if ((int)param_4 < 1) {
      param_2 = param_2 + 0x28;
      param_3 = param_3 + 0x28;
      param_4 = param_1[3];
      uVar4 = in_t7_lo & param_4;
      in_t7_lo = 0;
      if (uVar4 == 0) {
        param_2 = (undefined8 *)(param_1[5] + 0x40);
        param_3 = (undefined8 *)(param_1[6] + 0x40);
        in_t6_lo = (undefined4 *)(*param_1 + 0x80);
        bVar1 = in_t8 == 0;
        in_t8 = 0;
        if (bVar1) {
          return;
        }
        param_4 = param_1[2];
        in_t7_lo = 0xffffffff;
      }
    }
    auVar2._8_8_ = in_t0_qw._8_8_;
    auVar2._0_8_ = *param_2;
    auVar3._8_8_ = in_t1_qw._8_8_;
    auVar3._0_8_ = *param_3;
    auVar2 = _pcpyld(auVar3,auVar2);
    in_t1_qw = _qfsrv(auVar2,auVar2);
    in_t0_qw = _pextlb(0,in_t1_qw._0_8_);
    *in_t6_lo = in_t0_qw._0_4_;
    in_t6_lo[1] = in_t0_qw._4_4_;
    in_t6_lo[2] = in_t0_qw._8_4_;
    in_t6_lo[3] = in_t0_qw._12_4_;
  } while( true );
}

// 0x00109e08  size 0xb4
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_00109db0_Orphan1) */

void Mpeg_AddBlocks_Orphan2(undefined4 *param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar3 = (undefined1 (*) [16])param_1[5];
  pauVar4 = (undefined1 (*) [16])param_1[6];
  uVar5 = param_1[2];
  puVar11 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  auVar8 = _qfsrv(*pauVar4,*pauVar3);
  auVar6 = _pextlb(0,auVar8._0_8_);
  uVar10 = 0xffffffff;
  auVar8 = _pextub(in_zero_qw,auVar8);
  if (uVar5 == 0) goto LAB_00109e9c;
  do {
    do {
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + iVar1);
      pauVar4 = (undefined1 (*) [16])(*pauVar4 + iVar1);
      auVar2 = _qfsrv(*pauVar4,*pauVar3);
      auVar9 = _pextlb(0,auVar2._0_8_);
      uVar5 = uVar5 - 1;
      auVar2 = _pextub(in_zero_qw,auVar2);
      auVar6 = _paddh(auVar9,auVar6);
      auVar8 = _paddh(auVar2,auVar8);
      auVar6 = _paddh(auVar12,auVar6);
      auVar8 = _paddh(auVar12,auVar8);
      auVar6 = _psrlh(auVar6,1);
      auVar8 = _psrlh(auVar8,1);
      *puVar11 = auVar6._0_4_;
      puVar11[1] = auVar6._4_4_;
      puVar11[2] = auVar6._8_4_;
      puVar11[3] = auVar6._12_4_;
      puVar11[4] = auVar8._0_4_;
      puVar11[5] = auVar8._4_4_;
      puVar11[6] = auVar8._8_4_;
      puVar11[7] = auVar8._12_4_;
      puVar11 = (undefined4 *)((int)puVar11 + iVar1 * 2);
      auVar6 = auVar9;
      auVar8 = auVar2;
    } while (0 < (int)uVar5);
LAB_00109e9c:
    pauVar3 = pauVar3 + 8;
    pauVar4 = pauVar4 + 8;
    uVar5 = param_1[3];
    uVar7 = uVar10 & uVar5;
    uVar10 = 0;
  } while (uVar7 != 0);
  return;
}

// 0x00109ec0  size 0xcc
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_00109e08_Orphan1) */

void Mpeg_AddBlocks_Orphan3(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 in_zero_qw [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 in_t0_qw [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_t1_qw [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined8 in_t3_udw;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  puVar4 = (undefined8 *)param_1[5];
  puVar5 = (undefined8 *)param_1[6];
  puVar11 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar10 = 1;
  do {
    uVar6 = (ulong)param_1[2];
    auVar7._8_8_ = in_t0_qw._8_8_;
    auVar7._0_8_ = *puVar4;
    in_t1_qw._0_8_ = *puVar5;
    auVar7 = _pcpyld(in_t1_qw,auVar7);
    in_t0_qw = _qfsrv(auVar7,auVar7);
    uVar10 = uVar10 | 0x8000;
    auVar7 = _pextlb(0,in_t0_qw._0_8_);
    if (uVar6 == 0) goto LAB_00109f44;
    do {
      do {
        puVar4 = (undefined8 *)((int)puVar4 + iVar1);
        puVar5 = (undefined8 *)((int)puVar5 + iVar1);
        auVar8._8_8_ = in_t0_qw._8_8_;
        auVar8._0_8_ = *puVar4;
        auVar9._8_8_ = in_t1_qw._8_8_;
        auVar9._0_8_ = *puVar5;
        auVar8 = _pcpyld(auVar9,auVar8);
        in_t0_qw = _qfsrv(auVar8,auVar8);
        auVar8 = _pextlb(0,in_t0_qw._0_8_);
        uVar6 = (ulong)((int)uVar6 + -1);
        in_t1_qw = _paddh(auVar7,auVar8);
        auVar7 = _paddh(auVar12,in_t1_qw);
        auVar7 = _psrlh(auVar7,1);
        *puVar11 = auVar7._0_4_;
        puVar11[1] = auVar7._4_4_;
        puVar11[2] = auVar7._8_4_;
        puVar11[3] = auVar7._12_4_;
        puVar11 = (undefined4 *)((int)puVar11 + iVar1 * 2);
        auVar7 = auVar8;
      } while (0 < (long)uVar6);
LAB_00109f44:
      auVar2._4_4_ = 0;
      auVar2._0_4_ = uVar10;
      auVar2._8_8_ = in_t3_udw;
      auVar8 = _psrah(auVar2,0xf);
      puVar4 = puVar4 + 0x28;
      uVar6 = (ulong)param_1[3];
      puVar5 = puVar5 + 0x28;
      uVar3 = uVar10 & 0x7fff;
      uVar10 = uVar10 & 0x7fff;
    } while ((auVar8._0_8_ & uVar6) != 0);
    puVar4 = (undefined8 *)(param_1[5] + 0x40);
    puVar5 = (undefined8 *)(param_1[6] + 0x40);
    puVar11 = (undefined4 *)(*param_1 + 0x80);
    uVar10 = 0;
  } while (uVar3 != 0);
  return;
}

// 0x00109f90  size 0xac
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_00109ec0_Orphan1) */

void Mpeg_AddBlocks_Orphan4(undefined4 *param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  uint uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar4 = (undefined1 (*) [16])param_1[5];
  pauVar5 = (undefined1 (*) [16])param_1[6];
  uVar6 = param_1[2];
  puVar10 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar8 = 0xffffffff;
  do {
    do {
      auVar2 = _qfsrv(*pauVar5,*pauVar4);
      auVar3 = _qfsrv(*pauVar4,*pauVar5);
      auVar7 = _pextlb(0,auVar2._0_8_);
      uVar6 = uVar6 - 1;
      auVar11 = _pextub(in_zero_qw,auVar2);
      auVar3 = _qfsrv(auVar3,auVar2);
      auVar2 = _pextlb(0,auVar3._0_8_);
      auVar3 = _pextub(in_zero_qw,auVar3);
      auVar2 = _paddh(auVar2,auVar7);
      auVar3 = _paddh(auVar3,auVar11);
      auVar2 = _paddh(auVar12,auVar2);
      auVar3 = _paddh(auVar12,auVar3);
      auVar2 = _psrlh(auVar2,1);
      auVar3 = _psrlh(auVar3,1);
      *puVar10 = auVar2._0_4_;
      puVar10[1] = auVar2._4_4_;
      puVar10[2] = auVar2._8_4_;
      puVar10[3] = auVar2._12_4_;
      puVar10[4] = auVar3._0_4_;
      puVar10[5] = auVar3._4_4_;
      puVar10[6] = auVar3._8_4_;
      puVar10[7] = auVar3._12_4_;
      pauVar4 = (undefined1 (*) [16])(*pauVar4 + iVar1);
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + iVar1);
      puVar10 = (undefined4 *)((int)puVar10 + iVar1 * 2);
    } while (0 < (int)uVar6);
    pauVar4 = pauVar4 + 8;
    pauVar5 = pauVar5 + 8;
    uVar6 = param_1[3];
    uVar9 = uVar8 & uVar6;
    uVar8 = 0;
  } while (uVar9 != 0);
  return;
}

// 0x0010a040  size 0xb8
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_00109f90_Orphan1) */

void Mpeg_AddBlocks_Orphan5(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 in_zero_qw [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 in_t0_qw [16];
  undefined1 auVar6 [16];
  undefined1 in_t1_qw [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  puVar3 = (undefined8 *)param_1[5];
  puVar4 = (undefined8 *)param_1[6];
  puVar11 = (undefined4 *)*param_1;
  iVar10 = -1;
  iVar2 = param_1[4];
  do {
    uVar5 = param_1[2];
    uVar9 = 0xffffffff;
    do {
      do {
        auVar6._8_8_ = in_t0_qw._8_8_;
        auVar6._0_8_ = *puVar3;
        auVar7._8_8_ = in_t1_qw._8_8_;
        auVar7._0_8_ = *puVar4;
        auVar6 = _pcpyld(auVar7,auVar6);
        auVar6 = _qfsrv(auVar6,auVar6);
        in_t1_qw = _pextlb(0,auVar6._0_8_);
        uVar5 = uVar5 - 1;
        puVar3 = (undefined8 *)((int)puVar3 + iVar2);
        puVar4 = (undefined8 *)((int)puVar4 + iVar2);
        auVar6 = _qfsrv(in_zero_qw,auVar6);
        in_t0_qw = _pextlb(0,auVar6._0_8_);
        auVar6 = _paddh(in_t0_qw,in_t1_qw);
        auVar6 = _paddh(auVar12,auVar6);
        auVar6 = _psrlh(auVar6,1);
        *puVar11 = auVar6._0_4_;
        puVar11[1] = auVar6._4_4_;
        puVar11[2] = auVar6._8_4_;
        puVar11[3] = auVar6._12_4_;
        puVar11 = (undefined4 *)((int)puVar11 + iVar2 * 2);
      } while (0 < (int)uVar5);
      puVar3 = puVar3 + 0x28;
      puVar4 = puVar4 + 0x28;
      uVar5 = param_1[3];
      uVar8 = uVar9 & uVar5;
      uVar9 = 0;
    } while (uVar8 != 0);
    puVar3 = (undefined8 *)(param_1[5] + 0x40);
    puVar4 = (undefined8 *)(param_1[6] + 0x40);
    puVar11 = (undefined4 *)(*param_1 + 0x80);
    bVar1 = iVar10 != 0;
    iVar10 = 0;
  } while (bVar1);
  return;
}

// 0x0010a0f8  size 0xf8
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_0010a040_Orphan1) */

void Mpeg_AddBlocks_Orphan6(undefined4 *param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  undefined4 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  auVar14 = _psllh(auVar13,1);
  pauVar2 = (undefined1 (*) [16])param_1[5];
  pauVar3 = (undefined1 (*) [16])param_1[6];
  uVar4 = param_1[2];
  puVar10 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  auVar7 = _qfsrv(*pauVar3,*pauVar2);
  auVar11 = _qfsrv(*pauVar2,*pauVar3);
  auVar13 = _pextlb(0,auVar7._0_8_);
  auVar5 = _pextub(in_zero_qw,auVar7);
  uVar9 = 0xffffffff;
  auVar11 = _qfsrv(auVar11,auVar7);
  auVar7 = _pextlb(0,auVar11._0_8_);
  auVar11 = _pextub(in_zero_qw,auVar11);
  auVar13 = _paddh(auVar7,auVar13);
  auVar5 = _paddh(auVar11,auVar5);
  if (uVar4 == 0) goto LAB_0010a1d0;
  do {
    do {
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + iVar1);
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + iVar1);
      auVar7 = _qfsrv(*pauVar3,*pauVar2);
      auVar11 = _qfsrv(*pauVar2,*pauVar3);
      auVar8 = _pextlb(0,auVar7._0_8_);
      uVar4 = uVar4 - 1;
      auVar12 = _pextub(in_zero_qw,auVar7);
      auVar11 = _qfsrv(auVar11,auVar7);
      auVar7 = _pextlb(0,auVar11._0_8_);
      auVar11 = _pextub(in_zero_qw,auVar11);
      auVar7 = _paddh(auVar7,auVar8);
      auVar11 = _paddh(auVar11,auVar12);
      auVar13 = _paddh(auVar7,auVar13);
      auVar5 = _paddh(auVar11,auVar5);
      auVar13 = _paddh(auVar14,auVar13);
      auVar5 = _paddh(auVar14,auVar5);
      auVar13 = _psrlh(auVar13,2);
      auVar5 = _psrlh(auVar5,2);
      *puVar10 = auVar13._0_4_;
      puVar10[1] = auVar13._4_4_;
      puVar10[2] = auVar13._8_4_;
      puVar10[3] = auVar13._12_4_;
      puVar10[4] = auVar5._0_4_;
      puVar10[5] = auVar5._4_4_;
      puVar10[6] = auVar5._8_4_;
      puVar10[7] = auVar5._12_4_;
      puVar10 = (undefined4 *)((int)puVar10 + iVar1 * 2);
      auVar13 = auVar7;
      auVar5 = auVar11;
    } while (0 < (int)uVar4);
LAB_0010a1d0:
    pauVar2 = pauVar2 + 8;
    pauVar3 = pauVar3 + 8;
    uVar4 = param_1[3];
    uVar6 = uVar9 & uVar4;
    uVar9 = 0;
  } while (uVar6 != 0);
  return;
}

// 0x0010a1f0  size 0xfc
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_0010a0f8_Orphan1) */

void Mpeg_AddBlocks_Orphan7(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 in_zero_qw [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 in_t0_qw [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_t1_qw [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 in_t3_udw;
  undefined4 *puVar12;
  undefined1 auVar13 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  auVar13 = _psllh(auVar13,1);
  puVar4 = (undefined8 *)param_1[5];
  puVar5 = (undefined8 *)param_1[6];
  puVar12 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar11 = 1;
  do {
    uVar6 = (ulong)param_1[2];
    auVar7._8_8_ = in_t0_qw._8_8_;
    auVar7._0_8_ = *puVar4;
    auVar8._8_8_ = in_t1_qw._8_8_;
    auVar8._0_8_ = *puVar5;
    auVar7 = _pcpyld(auVar8,auVar7);
    auVar7 = _qfsrv(auVar7,auVar7);
    in_t1_qw = _pextlb(0,auVar7._0_8_);
    puVar4 = (undefined8 *)((int)puVar4 + iVar1);
    uVar11 = uVar11 | 0x8000;
    auVar7 = _qfsrv(in_zero_qw,auVar7);
    in_t0_qw = _pextlb(0,auVar7._0_8_);
    auVar7 = _paddh(in_t0_qw,in_t1_qw);
    if (uVar6 == 0) goto LAB_0010a2a4;
    do {
      do {
        puVar5 = (undefined8 *)((int)puVar5 + iVar1);
        auVar10._8_8_ = in_t0_qw._8_8_;
        auVar10._0_8_ = *puVar4;
        auVar9._8_8_ = in_t1_qw._8_8_;
        auVar9._0_8_ = *puVar5;
        auVar8 = _pcpyld(auVar9,auVar10);
        auVar8 = _qfsrv(auVar8,auVar8);
        auVar10 = _pextlb(0,auVar8._0_8_);
        uVar6 = (ulong)((int)uVar6 + -1);
        puVar4 = (undefined8 *)((int)puVar4 + iVar1);
        auVar8 = _qfsrv(in_zero_qw,auVar8);
        auVar8 = _pextlb(0,auVar8._0_8_);
        auVar10 = _paddh(auVar8,auVar10);
        in_t1_qw = _paddh(auVar7,auVar10);
        auVar7 = _paddh(auVar13,in_t1_qw);
        in_t0_qw._8_8_ = auVar8._8_8_;
        in_t0_qw._0_8_ = (long)(iVar1 * 2);
        auVar7 = _psrlh(auVar7,2);
        *puVar12 = auVar7._0_4_;
        puVar12[1] = auVar7._4_4_;
        puVar12[2] = auVar7._8_4_;
        puVar12[3] = auVar7._12_4_;
        puVar12 = (undefined4 *)((int)puVar12 + iVar1 * 2);
        auVar7 = auVar10;
      } while (0 < (long)uVar6);
LAB_0010a2a4:
      auVar2._4_4_ = 0;
      auVar2._0_4_ = uVar11;
      auVar2._8_8_ = in_t3_udw;
      auVar8 = _psrah(auVar2,0xf);
      puVar4 = puVar4 + 0x28;
      uVar6 = (ulong)param_1[3];
      puVar5 = puVar5 + 0x28;
      uVar3 = uVar11 & 0x7fff;
      uVar11 = uVar11 & 0x7fff;
    } while ((auVar8._0_8_ & uVar6) != 0);
    puVar4 = (undefined8 *)(param_1[5] + 0x40);
    puVar5 = (undefined8 *)(param_1[6] + 0x40);
    puVar12 = (undefined4 *)(*param_1 + 0x80);
    uVar11 = 0;
  } while (uVar3 != 0);
  return;
}

// 0x0010a2f0  size 0x9c
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_0010a1f0_Orphan1) */

void Mpeg_AddBlocks_Orphan8(undefined4 *param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  
  pauVar3 = (undefined1 (*) [16])param_1[5];
  pauVar4 = (undefined1 (*) [16])param_1[6];
  uVar5 = param_1[2];
  pauVar9 = (undefined1 (*) [16])*param_1;
  iVar1 = param_1[4];
  uVar7 = 0xffffffff;
  do {
    do {
      auVar2 = _qfsrv(*pauVar4,*pauVar3);
      auVar6 = _pextlb(0,auVar2._0_8_);
      auVar10 = _pextub(in_zero_qw,auVar2);
      auVar2 = _paddh(auVar6,*pauVar9);
      auVar6 = _paddh(auVar10,pauVar9[1]);
      auVar10 = _psrlh(~in_zero_qw,0xf);
      auVar2 = _paddh(auVar10,auVar2);
      auVar2 = _psrlh(auVar2,1);
      auVar6 = _paddh(auVar10,auVar6);
      auVar6 = _psrlh(auVar6,1);
      *(int *)*pauVar9 = auVar2._0_4_;
      *(int *)(*pauVar9 + 4) = auVar2._4_4_;
      *(int *)(*pauVar9 + 8) = auVar2._8_4_;
      *(int *)(*pauVar9 + 0xc) = auVar2._12_4_;
      *(int *)pauVar9[1] = auVar6._0_4_;
      *(int *)(pauVar9[1] + 4) = auVar6._4_4_;
      *(int *)(pauVar9[1] + 8) = auVar6._8_4_;
      *(int *)(pauVar9[1] + 0xc) = auVar6._12_4_;
      uVar5 = uVar5 - 1;
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + iVar1);
      pauVar9 = (undefined1 (*) [16])(*pauVar9 + iVar1 * 2);
      pauVar4 = (undefined1 (*) [16])(*pauVar4 + iVar1);
    } while (0 < (int)uVar5);
    pauVar3 = pauVar3 + 8;
    pauVar4 = pauVar4 + 8;
    uVar5 = param_1[3];
    uVar8 = uVar7 & uVar5;
    uVar7 = 0;
  } while (uVar8 != 0);
  return;
}

// 0x0010a390  size 0xac
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_0010a2f0_Orphan1) */

void Mpeg_AddBlocks_Orphan9(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 in_zero_qw [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 in_t0_qw [16];
  undefined1 auVar6 [16];
  undefined1 in_t1_qw [16];
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  
  puVar3 = (undefined8 *)param_1[5];
  puVar4 = (undefined8 *)param_1[6];
  pauVar11 = (undefined1 (*) [16])*param_1;
  iVar10 = -1;
  iVar2 = param_1[4];
  do {
    uVar5 = param_1[2];
    uVar9 = 0xffffffff;
    do {
      do {
        auVar6._8_8_ = in_t0_qw._8_8_;
        auVar6._0_8_ = *puVar3;
        auVar8._8_8_ = in_t1_qw._8_8_;
        auVar8._0_8_ = *puVar4;
        auVar6 = _pcpyld(auVar8,auVar6);
        auVar6 = _qfsrv(auVar6,auVar6);
        auVar6 = _pextlb(0,auVar6._0_8_);
        uVar5 = uVar5 - 1;
        puVar3 = (undefined8 *)((int)puVar3 + iVar2);
        puVar4 = (undefined8 *)((int)puVar4 + iVar2);
        in_t0_qw = *pauVar11;
        auVar8 = _paddh(in_t0_qw,auVar6);
        auVar6 = _pcgth(auVar8,in_zero_qw);
        in_t1_qw = _psrlh(auVar6,0xf);
        auVar6 = _paddh(in_t1_qw,auVar8);
        auVar6 = _psrlh(auVar6,1);
        *(int *)*pauVar11 = auVar6._0_4_;
        *(int *)(*pauVar11 + 4) = auVar6._4_4_;
        *(int *)(*pauVar11 + 8) = auVar6._8_4_;
        *(int *)(*pauVar11 + 0xc) = auVar6._12_4_;
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + iVar2 * 2);
      } while (0 < (int)uVar5);
      puVar3 = puVar3 + 0x28;
      puVar4 = puVar4 + 0x28;
      uVar5 = param_1[3];
      uVar7 = uVar9 & uVar5;
      uVar9 = 0;
    } while (uVar7 != 0);
    puVar3 = (undefined8 *)(param_1[5] + 0x40);
    puVar4 = (undefined8 *)(param_1[6] + 0x40);
    pauVar11 = (undefined1 (*) [16])(*param_1 + 0x80);
    bVar1 = iVar10 != 0;
    iVar10 = 0;
  } while (bVar1);
  return;
}

// 0x0010a440  size 0xdc
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_0010a390_Orphan1) */

void Mpeg_AddBlocks_Orphan10(undefined4 *param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  pauVar3 = (undefined1 (*) [16])param_1[5];
  pauVar4 = (undefined1 (*) [16])param_1[6];
  uVar5 = param_1[2];
  pauVar11 = (undefined1 (*) [16])*param_1;
  iVar1 = param_1[4];
  auVar8 = _qfsrv(*pauVar4,*pauVar3);
  auVar6 = _pextlb(0,auVar8._0_8_);
  uVar10 = 0xffffffff;
  auVar8 = _pextub(in_zero_qw,auVar8);
  if (uVar5 == 0) goto LAB_0010a4fc;
  do {
    do {
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + iVar1);
      pauVar4 = (undefined1 (*) [16])(*pauVar4 + iVar1);
      auVar2 = _qfsrv(*pauVar4,*pauVar3);
      auVar9 = _pextlb(0,auVar2._0_8_);
      uVar5 = uVar5 - 1;
      auVar12 = _pextub(in_zero_qw,auVar2);
      auVar6 = _paddh(auVar9,auVar6);
      auVar8 = _paddh(auVar12,auVar8);
      auVar6 = _paddh(auVar13,auVar6);
      auVar8 = _paddh(auVar13,auVar8);
      auVar6 = _psrlh(auVar6,1);
      auVar8 = _psrlh(auVar8,1);
      auVar6 = _paddh(*pauVar11,auVar6);
      auVar8 = _paddh(pauVar11[1],auVar8);
      auVar6 = _paddh(auVar13,auVar6);
      auVar6 = _psrlh(auVar6,1);
      auVar2 = _pcgth(auVar8,in_zero_qw);
      auVar2 = _psrlh(auVar2,0xf);
      auVar8 = _paddh(auVar2,auVar8);
      auVar8 = _psrlh(auVar8,1);
      *(int *)*pauVar11 = auVar6._0_4_;
      *(int *)(*pauVar11 + 4) = auVar6._4_4_;
      *(int *)(*pauVar11 + 8) = auVar6._8_4_;
      *(int *)(*pauVar11 + 0xc) = auVar6._12_4_;
      *(int *)pauVar11[1] = auVar8._0_4_;
      *(int *)(pauVar11[1] + 4) = auVar8._4_4_;
      *(int *)(pauVar11[1] + 8) = auVar8._8_4_;
      *(int *)(pauVar11[1] + 0xc) = auVar8._12_4_;
      pauVar11 = (undefined1 (*) [16])(*pauVar11 + iVar1 * 2);
      auVar6 = auVar9;
      auVar8 = auVar12;
    } while (0 < (int)uVar5);
LAB_0010a4fc:
    pauVar3 = pauVar3 + 8;
    pauVar4 = pauVar4 + 8;
    uVar5 = param_1[3];
    uVar7 = uVar10 & uVar5;
    uVar10 = 0;
  } while (uVar7 != 0);
  return;
}

// 0x0010a520  size 0xe4
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_0010a440_Orphan1) */

void Mpeg_AddBlocks_Orphan11(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 in_zero_qw [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 in_t0_qw [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_t1_qw [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined8 in_t3_udw;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  puVar4 = (undefined8 *)param_1[5];
  puVar5 = (undefined8 *)param_1[6];
  pauVar11 = (undefined1 (*) [16])*param_1;
  iVar1 = param_1[4];
  uVar10 = 1;
  do {
    uVar6 = (ulong)param_1[2];
    auVar7._8_8_ = in_t0_qw._8_8_;
    auVar7._0_8_ = *puVar4;
    in_t1_qw._0_8_ = *puVar5;
    auVar7 = _pcpyld(in_t1_qw,auVar7);
    in_t0_qw = _qfsrv(auVar7,auVar7);
    uVar10 = uVar10 | 0x8000;
    auVar7 = _pextlb(0,in_t0_qw._0_8_);
    if (uVar6 == 0) goto LAB_0010a5bc;
    do {
      do {
        puVar4 = (undefined8 *)((int)puVar4 + iVar1);
        puVar5 = (undefined8 *)((int)puVar5 + iVar1);
        auVar8._8_8_ = in_t0_qw._8_8_;
        auVar8._0_8_ = *puVar4;
        auVar9._8_8_ = in_t1_qw._8_8_;
        auVar9._0_8_ = *puVar5;
        auVar8 = _pcpyld(auVar9,auVar8);
        auVar8 = _qfsrv(auVar8,auVar8);
        auVar8 = _pextlb(0,auVar8._0_8_);
        uVar6 = (ulong)((int)uVar6 + -1);
        auVar7 = _paddh(auVar7,auVar8);
        auVar7 = _paddh(auVar12,auVar7);
        auVar7 = _psrlh(auVar7,1);
        in_t0_qw = *pauVar11;
        auVar9 = _paddh(in_t0_qw,auVar7);
        auVar7 = _pcgth(auVar9,in_zero_qw);
        in_t1_qw = _psrlh(auVar7,0xf);
        auVar7 = _paddh(in_t1_qw,auVar9);
        auVar7 = _psrlh(auVar7,1);
        *(int *)*pauVar11 = auVar7._0_4_;
        *(int *)(*pauVar11 + 4) = auVar7._4_4_;
        *(int *)(*pauVar11 + 8) = auVar7._8_4_;
        *(int *)(*pauVar11 + 0xc) = auVar7._12_4_;
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + iVar1 * 2);
        auVar7 = auVar8;
      } while (0 < (long)uVar6);
LAB_0010a5bc:
      auVar2._4_4_ = 0;
      auVar2._0_4_ = uVar10;
      auVar2._8_8_ = in_t3_udw;
      auVar8 = _psrah(auVar2,0xf);
      puVar4 = puVar4 + 0x28;
      uVar6 = (ulong)param_1[3];
      puVar5 = puVar5 + 0x28;
      uVar3 = uVar10 & 0x7fff;
      uVar10 = uVar10 & 0x7fff;
    } while ((auVar8._0_8_ & uVar6) != 0);
    puVar4 = (undefined8 *)(param_1[5] + 0x40);
    puVar5 = (undefined8 *)(param_1[6] + 0x40);
    pauVar11 = (undefined1 (*) [16])(*param_1 + 0x80);
    uVar10 = 0;
  } while (uVar3 != 0);
  return;
}

// 0x0010a608  size 0xd4
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_0010a520_Orphan1) */

void Mpeg_AddBlocks_Orphan12(undefined4 *param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  uint uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar4 = (undefined1 (*) [16])param_1[5];
  pauVar5 = (undefined1 (*) [16])param_1[6];
  uVar6 = param_1[2];
  pauVar10 = (undefined1 (*) [16])*param_1;
  iVar1 = param_1[4];
  uVar8 = 0xffffffff;
  do {
    do {
      auVar2 = _qfsrv(*pauVar5,*pauVar4);
      auVar3 = _qfsrv(*pauVar4,*pauVar5);
      auVar7 = _pextlb(0,auVar2._0_8_);
      uVar6 = uVar6 - 1;
      auVar11 = _pextub(in_zero_qw,auVar2);
      auVar3 = _qfsrv(auVar3,auVar2);
      auVar2 = _pextlb(0,auVar3._0_8_);
      auVar3 = _pextub(in_zero_qw,auVar3);
      auVar2 = _paddh(auVar2,auVar7);
      auVar3 = _paddh(auVar3,auVar11);
      auVar2 = _paddh(auVar12,auVar2);
      auVar3 = _paddh(auVar12,auVar3);
      auVar2 = _psrlh(auVar2,1);
      auVar3 = _psrlh(auVar3,1);
      auVar2 = _paddh(*pauVar10,auVar2);
      auVar3 = _paddh(pauVar10[1],auVar3);
      auVar2 = _paddh(auVar12,auVar2);
      auVar2 = _psrlh(auVar2,1);
      auVar7 = _pcgth(auVar3,in_zero_qw);
      auVar7 = _psrlh(auVar7,0xf);
      auVar3 = _paddh(auVar7,auVar3);
      auVar3 = _psrlh(auVar3,1);
      *(int *)*pauVar10 = auVar2._0_4_;
      *(int *)(*pauVar10 + 4) = auVar2._4_4_;
      *(int *)(*pauVar10 + 8) = auVar2._8_4_;
      *(int *)(*pauVar10 + 0xc) = auVar2._12_4_;
      *(int *)pauVar10[1] = auVar3._0_4_;
      *(int *)(pauVar10[1] + 4) = auVar3._4_4_;
      *(int *)(pauVar10[1] + 8) = auVar3._8_4_;
      *(int *)(pauVar10[1] + 0xc) = auVar3._12_4_;
      pauVar4 = (undefined1 (*) [16])(*pauVar4 + iVar1);
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + iVar1);
      pauVar10 = (undefined1 (*) [16])(*pauVar10 + iVar1 * 2);
    } while (0 < (int)uVar6);
    pauVar4 = pauVar4 + 8;
    pauVar5 = pauVar5 + 8;
    uVar6 = param_1[3];
    uVar9 = uVar8 & uVar6;
    uVar8 = 0;
  } while (uVar9 != 0);
  return;
}

// 0x0010a6e0  size 0xd0
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_0010a608_Orphan1) */

void Mpeg_AddBlocks_Orphan13(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 in_zero_qw [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 in_t0_qw [16];
  undefined1 auVar6 [16];
  undefined1 in_t1_qw [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  puVar3 = (undefined8 *)param_1[5];
  puVar4 = (undefined8 *)param_1[6];
  pauVar11 = (undefined1 (*) [16])*param_1;
  iVar10 = -1;
  iVar2 = param_1[4];
  do {
    uVar5 = param_1[2];
    uVar9 = 0xffffffff;
    do {
      do {
        auVar6._8_8_ = in_t0_qw._8_8_;
        auVar6._0_8_ = *puVar3;
        auVar7._8_8_ = in_t1_qw._8_8_;
        auVar7._0_8_ = *puVar4;
        auVar6 = _pcpyld(auVar7,auVar6);
        auVar6 = _qfsrv(auVar6,auVar6);
        auVar7 = _pextlb(0,auVar6._0_8_);
        uVar5 = uVar5 - 1;
        puVar3 = (undefined8 *)((int)puVar3 + iVar2);
        puVar4 = (undefined8 *)((int)puVar4 + iVar2);
        auVar6 = _qfsrv(in_zero_qw,auVar6);
        auVar6 = _pextlb(0,auVar6._0_8_);
        auVar6 = _paddh(auVar6,auVar7);
        auVar6 = _paddh(auVar12,auVar6);
        auVar6 = _psrlh(auVar6,1);
        in_t0_qw = *pauVar11;
        auVar7 = _paddh(in_t0_qw,auVar6);
        auVar6 = _pcgth(auVar7,in_zero_qw);
        in_t1_qw = _psrlh(auVar6,0xf);
        auVar6 = _paddh(in_t1_qw,auVar7);
        auVar6 = _psrlh(auVar6,1);
        *(int *)*pauVar11 = auVar6._0_4_;
        *(int *)(*pauVar11 + 4) = auVar6._4_4_;
        *(int *)(*pauVar11 + 8) = auVar6._8_4_;
        *(int *)(*pauVar11 + 0xc) = auVar6._12_4_;
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + iVar2 * 2);
      } while (0 < (int)uVar5);
      puVar3 = puVar3 + 0x28;
      puVar4 = puVar4 + 0x28;
      uVar5 = param_1[3];
      uVar8 = uVar9 & uVar5;
      uVar9 = 0;
    } while (uVar8 != 0);
    puVar3 = (undefined8 *)(param_1[5] + 0x40);
    puVar4 = (undefined8 *)(param_1[6] + 0x40);
    pauVar11 = (undefined1 (*) [16])(*param_1 + 0x80);
    bVar1 = iVar10 != 0;
    iVar10 = 0;
  } while (bVar1);
  return;
}

// 0x0010a7b0  size 0x120
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_0010a6e0_Orphan1) */

void Mpeg_AddBlocks_Orphan14(undefined4 *param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  auVar14 = _psllh(auVar13,1);
  pauVar2 = (undefined1 (*) [16])param_1[5];
  pauVar3 = (undefined1 (*) [16])param_1[6];
  uVar4 = param_1[2];
  pauVar10 = (undefined1 (*) [16])*param_1;
  iVar1 = param_1[4];
  auVar7 = _qfsrv(*pauVar3,*pauVar2);
  auVar11 = _qfsrv(*pauVar2,*pauVar3);
  auVar13 = _pextlb(0,auVar7._0_8_);
  auVar5 = _pextub(in_zero_qw,auVar7);
  uVar9 = 0xffffffff;
  auVar11 = _qfsrv(auVar11,auVar7);
  auVar7 = _pextlb(0,auVar11._0_8_);
  auVar11 = _pextub(in_zero_qw,auVar11);
  auVar13 = _paddh(auVar7,auVar13);
  auVar5 = _paddh(auVar11,auVar5);
  if (uVar4 == 0) goto LAB_0010a8b0;
  do {
    do {
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + iVar1);
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + iVar1);
      auVar7 = _qfsrv(*pauVar3,*pauVar2);
      auVar11 = _qfsrv(*pauVar2,*pauVar3);
      auVar8 = _pextlb(0,auVar7._0_8_);
      uVar4 = uVar4 - 1;
      auVar12 = _pextub(in_zero_qw,auVar7);
      auVar11 = _qfsrv(auVar11,auVar7);
      auVar7 = _pextlb(0,auVar11._0_8_);
      auVar11 = _pextub(in_zero_qw,auVar11);
      auVar7 = _paddh(auVar7,auVar8);
      auVar11 = _paddh(auVar11,auVar12);
      auVar13 = _paddh(auVar7,auVar13);
      auVar5 = _paddh(auVar11,auVar5);
      auVar13 = _paddh(auVar14,auVar13);
      auVar5 = _paddh(auVar14,auVar5);
      auVar13 = _psrlh(auVar13,2);
      auVar5 = _psrlh(auVar5,2);
      auVar13 = _paddh(*pauVar10,auVar13);
      auVar5 = _paddh(pauVar10[1],auVar5);
      auVar14 = _psrlh(~in_zero_qw,0xf);
      auVar13 = _paddh(auVar14,auVar13);
      auVar13 = _psrlh(auVar13,1);
      auVar5 = _paddh(auVar14,auVar5);
      auVar5 = _psrlh(auVar5,1);
      *(int *)*pauVar10 = auVar13._0_4_;
      *(int *)(*pauVar10 + 4) = auVar13._4_4_;
      *(int *)(*pauVar10 + 8) = auVar13._8_4_;
      *(int *)(*pauVar10 + 0xc) = auVar13._12_4_;
      *(int *)pauVar10[1] = auVar5._0_4_;
      *(int *)(pauVar10[1] + 4) = auVar5._4_4_;
      *(int *)(pauVar10[1] + 8) = auVar5._8_4_;
      *(int *)(pauVar10[1] + 0xc) = auVar5._12_4_;
      pauVar10 = (undefined1 (*) [16])(*pauVar10 + iVar1 * 2);
      auVar13 = auVar7;
      auVar5 = auVar11;
    } while (0 < (int)uVar4);
LAB_0010a8b0:
    pauVar2 = pauVar2 + 8;
    pauVar3 = pauVar3 + 8;
    uVar4 = param_1[3];
    uVar6 = uVar9 & uVar4;
    uVar9 = 0;
  } while (uVar6 != 0);
  return;
}

// 0x0010a8d0  size 0x114
/* follows Mpeg_AddBlocks_Orphan1; unreferenced except as noted (was FUN_0010a7b0_Orphan1) */

void Mpeg_AddBlocks_Orphan15(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 in_zero_qw [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 in_t0_qw [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_t1_qw [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 in_t3_udw;
  undefined1 (*pauVar12) [16];
  undefined1 auVar13 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  auVar13 = _psllh(auVar13,1);
  puVar4 = (undefined8 *)param_1[5];
  puVar5 = (undefined8 *)param_1[6];
  pauVar12 = (undefined1 (*) [16])*param_1;
  iVar1 = param_1[4];
  uVar11 = 1;
  do {
    uVar6 = (ulong)param_1[2];
    auVar7._8_8_ = in_t0_qw._8_8_;
    auVar7._0_8_ = *puVar4;
    auVar8._8_8_ = in_t1_qw._8_8_;
    auVar8._0_8_ = *puVar5;
    auVar7 = _pcpyld(auVar8,auVar7);
    auVar7 = _qfsrv(auVar7,auVar7);
    in_t1_qw = _pextlb(0,auVar7._0_8_);
    puVar4 = (undefined8 *)((int)puVar4 + iVar1);
    uVar11 = uVar11 | 0x8000;
    auVar7 = _qfsrv(in_zero_qw,auVar7);
    in_t0_qw = _pextlb(0,auVar7._0_8_);
    auVar7 = _paddh(in_t0_qw,in_t1_qw);
    if (uVar6 == 0) goto LAB_0010a99c;
    do {
      do {
        puVar5 = (undefined8 *)((int)puVar5 + iVar1);
        auVar10._8_8_ = in_t0_qw._8_8_;
        auVar10._0_8_ = *puVar4;
        auVar9._8_8_ = in_t1_qw._8_8_;
        auVar9._0_8_ = *puVar5;
        auVar8 = _pcpyld(auVar9,auVar10);
        auVar8 = _qfsrv(auVar8,auVar8);
        auVar10 = _pextlb(0,auVar8._0_8_);
        uVar6 = (ulong)((int)uVar6 + -1);
        puVar4 = (undefined8 *)((int)puVar4 + iVar1);
        auVar8 = _qfsrv(in_zero_qw,auVar8);
        auVar8 = _pextlb(0,auVar8._0_8_);
        auVar8 = _paddh(auVar8,auVar10);
        auVar7 = _paddh(auVar7,auVar8);
        auVar7 = _paddh(auVar13,auVar7);
        auVar7 = _psrlh(auVar7,2);
        auVar10 = _paddh(*pauVar12,auVar7);
        auVar7 = _pcgth(auVar10,in_zero_qw);
        in_t1_qw = _psrlh(auVar7,0xf);
        auVar7 = _paddh(in_t1_qw,auVar10);
        in_t0_qw._8_8_ = SUB168(*pauVar12,8);
        in_t0_qw._0_8_ = (long)(iVar1 * 2);
        auVar7 = _psrlh(auVar7,1);
        *(int *)*pauVar12 = auVar7._0_4_;
        *(int *)(*pauVar12 + 4) = auVar7._4_4_;
        *(int *)(*pauVar12 + 8) = auVar7._8_4_;
        *(int *)(*pauVar12 + 0xc) = auVar7._12_4_;
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + iVar1 * 2);
        auVar7 = auVar8;
      } while (0 < (long)uVar6);
LAB_0010a99c:
      auVar2._4_4_ = 0;
      auVar2._0_4_ = uVar11;
      auVar2._8_8_ = in_t3_udw;
      auVar8 = _psrah(auVar2,0xf);
      puVar4 = puVar4 + 0x28;
      uVar6 = (ulong)param_1[3];
      puVar5 = puVar5 + 0x28;
      uVar3 = uVar11 & 0x7fff;
      uVar11 = uVar11 & 0x7fff;
    } while ((auVar8._0_8_ & uVar6) != 0);
    puVar4 = (undefined8 *)(param_1[5] + 0x40);
    puVar5 = (undefined8 *)(param_1[6] + 0x40);
    pauVar12 = (undefined1 (*) [16])(*param_1 + 0x80);
    uVar11 = 0;
  } while (uVar3 != 0);
  return;
}

// 0x0010a9e8  size 0x5c
/* code jumped/branched into from Mpeg_AddBlocks; shared tail */

void Mpeg_AddBlocks_Tail1(undefined4 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  
  auVar1 = auRam0010aa90;
  iVar4 = 0x18;
  do {
    iVar4 = iVar4 + -1;
    auVar2 = _paddh(*param_3,*param_2);
    auVar2 = _pminh(auVar2,auVar1);
    auVar3 = _paddh(param_3[1],param_2[1]);
    auVar2 = _pmaxh(auVar2,in_zero_qw);
    auVar3 = _pminh(auVar3,auVar1);
    param_2 = param_2 + 2;
    auVar3 = _pmaxh(auVar3,in_zero_qw);
    param_3 = param_3 + 2;
    auVar2 = _ppacb(auVar3,auVar2);
    *param_1 = auVar2._0_4_;
    param_1[1] = auVar2._4_4_;
    param_1[2] = auVar2._8_4_;
    param_1[3] = auVar2._12_4_;
    param_1 = param_1 + 4;
  } while (iVar4 != 0);
  return;
}

// 0x0010aa48  size 0x60
/* code jumped/branched into from Mpeg_AddBlocks; shared tail */

void Mpeg_AddBlocks_Tail2(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  
  auVar1 = auRam0010aa90;
  iVar4 = 0x18;
  do {
    iVar4 = iVar4 + -1;
    auVar2 = _pminh(*param_2,auVar1);
    auVar2 = _pmaxh(auVar2,in_zero_qw);
    auVar3 = _pminh(param_2[1],auVar1);
    param_2 = param_2 + 2;
    auVar3 = _pmaxh(auVar3,in_zero_qw);
    auVar2 = _ppacb(auVar3,auVar2);
    *param_1 = auVar2._0_4_;
    param_1[1] = auVar2._4_4_;
    param_1[2] = auVar2._8_4_;
    param_1[3] = auVar2._12_4_;
    param_1 = param_1 + 4;
  } while (iVar4 != 0);
  return;
}

// 0x0010aaa8  size 0x28
/* N153 confirmed: REG_IPU_CTRL bit 23 */

void Ipu_SetCtrlBit23(int param_1)

{
  uint uVar1;
  
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xff7fffff | param_1 << 0x17;
  return;
}

// 0x0010aad0  size 0x294
/* "Error code detected(BDEC)" */

undefined4 maybe_Mpeg_DecodeBDEC(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined4 auStack_f0 [8];
  undefined4 auStack_d0 [8];
  undefined4 uStack_b0;
  
  uStack_b0 = 1;
  maybe_Ipu_Sync();
  iVar2 = REG_DMAC_3_IPU_FROM_QWC;
  iVar4 = (int)param_1;
  if (iVar2 != 0) {
    uVar1 = REG_IPU_CTRL;
    while ((uVar1 & 0x4000) == 0) {
      iVar2 = REG_DMAC_4_IPU_TO_QWC;
      if (iVar2 == 0) {
        uVar1 = REG_DMAC_4_IPU_TO_CHCR;
        if ((uVar1 & 0x100) == 0) {
          auStack_f0[0] = 1;
          maybe_Mpeg_DispatchCallback(*(undefined4 *)(iVar4 + 0x870),auStack_f0);
          iVar2 = *(int *)(iVar4 + 0x10a0);
        }
        else {
          iVar2 = *(int *)(iVar4 + 0x10a0);
        }
      }
      else {
        iVar2 = *(int *)(iVar4 + 0x10a0);
      }
      if (iVar2 != 0) {
        lVar3 = DIntr();
        uVar1 = REG_DMAC_ENABLER;
        REG_DMAC_ENABLEW = uVar1 | 0x10000;
        REG_DMAC_4_IPU_TO_CHCR = 0;
        REG_DMAC_3_IPU_FROM_CHCR = 0;
        uVar1 = REG_DMAC_ENABLER;
        REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
        if (lVar3 != 0) {
          EIntr();
        }
        REG_DMAC_3_IPU_FROM_QWC = 0;
        REG_DMAC_4_IPU_TO_QWC = 0;
        REG_IPU_CTRL = 0x40000000;
        return 0;
      }
      iVar2 = REG_DMAC_3_IPU_FROM_QWC;
      if (iVar2 == 0) break;
      uVar1 = REG_IPU_CTRL;
    }
  }
  lVar3 = REG_IPU_TOP;
  uVar1 = REG_IPU_BP;
  *(int *)(iVar4 + 0x850) = (int)lVar3;
  if (lVar3 < 0) {
    if ((uVar1 & 0x1f) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0x20 - (uVar1 & 0x1f);
    }
  }
  else {
    iVar2 = 0x20;
  }
  *(int *)(iVar4 + 0x854) = iVar2;
  uVar1 = REG_IPU_CTRL;
  if ((uVar1 & 0x4000) != 0) {
    maybe_Mpeg_Error(param_1,0x35ec30);
    auStack_d0[0] = 2;
    maybe_Mpeg_DispatchCallback(*(undefined4 *)(iVar4 + 0x870),auStack_d0);
    REG_IPU_CTRL = 0x40000000;
    auStack_d0[0] = 3;
    maybe_Mpeg_DispatchCallback(*(undefined4 *)(iVar4 + 0x870),auStack_d0);
    lVar3 = DIntr();
    uVar1 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar1 | 0x10000;
    REG_DMAC_3_IPU_FROM_CHCR = 0;
    uVar1 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
    if (lVar3 != 0) {
      EIntr();
    }
    uStack_b0 = 0;
    REG_DMAC_3_IPU_FROM_QWC = 0;
  }
  return uStack_b0;
}

// 0x0010ad68  size 0x1c
/* N153 confirmed */

void Mpeg_GetBits3(undefined8 param_1)

{
  maybe_Mpeg_GetVLC(param_1,3);
  return;
}

// 0x0010ad88  size 0x184
void maybe_Mpeg_MotionVectors(int param_1,int *param_2,int *param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_5;
  iVar1 = (int)param_4;
  iVar4 = iVar1 >> 1;
  iVar2 = iVar5 >> 1;
  if (*(int *)(param_1 + 0x18c) != 3) {
    if (0 < param_4) {
      iVar4 = iVar1 + 1 >> 1;
    }
    *param_2 = iVar4 + *param_3;
    if (0 < param_5) {
      iVar2 = iVar5 + 1 >> 1;
    }
    iVar2 = iVar2 + param_3[1];
    param_2[1] = iVar2;
    if (*(int *)(param_1 + 0x18c) == 1) {
      param_2[1] = iVar2 + -1;
      return;
    }
    param_2[1] = iVar2 + 1;
    return;
  }
  if (*(int *)(param_1 + 400) == 0) {
    iVar3 = iVar1 * 3;
    if (0 < param_4) {
      iVar3 = iVar3 + 1;
    }
    *param_2 = (iVar3 >> 1) + *param_3;
    iVar3 = iVar5 * 3;
    if (0 < param_5) {
      iVar3 = iVar3 + 1;
    }
    param_2[1] = (iVar3 >> 1) + param_3[1] + -1;
    if (0 < param_4) {
      iVar4 = iVar1 + 1 >> 1;
    }
    param_2[2] = iVar4 + *param_3;
    iVar1 = param_3[1];
    if (param_5 < 1) goto LAB_0010ae20;
    iVar5 = iVar5 + 1;
  }
  else {
    if (0 < param_4) {
      iVar4 = iVar1 + 1 >> 1;
    }
    *param_2 = iVar4 + *param_3;
    if (0 < param_5) {
      iVar2 = iVar5 + 1 >> 1;
    }
    param_2[1] = iVar2 + param_3[1] + -1;
    iVar1 = iVar1 * 3;
    if (0 < param_4) {
      iVar1 = iVar1 + 1;
    }
    param_2[2] = (iVar1 >> 1) + *param_3;
    iVar5 = iVar5 * 3;
    iVar1 = param_3[1];
    if (0 < param_5) {
      iVar5 = iVar5 + 1;
    }
  }
  iVar2 = iVar5 >> 1;
LAB_0010ae20:
  param_2[3] = iVar2 + iVar1 + 1;
  return;
}

// 0x0010af10  size 0x110
/* "Invalid macroblock_address_increment" */

int maybe_Mpeg_GetMBAddrInc(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar2 = maybe_Mpeg_GetVLC(param_1,0);
    if (uVar2 == 0x22) {
LAB_0010afc4:
      bVar1 = true;
    }
    else {
      if (uVar2 < 0x23) {
        if (uVar2 == 0) {
          lVar3 = maybe_Mpeg_ShowBits(param_1,0xb);
          if ((*(int *)((int)param_1 + 0x860) == 0) || (lVar3 != 0xf)) {
            maybe_Mpeg_Errorf(param_1,0x35ec50,0);
            *(undefined4 *)((int)param_1 + 0x134) = 1;
            return 1;
          }
          maybe_Mpeg_FlushBits(param_1,0xb);
          goto LAB_0010afc4;
        }
      }
      else if (uVar2 == 0x23) {
        bVar1 = true;
        iVar4 = iVar4 + 0x21;
        goto LAB_0010afe8;
      }
      iVar4 = iVar4 + (int)uVar2;
      bVar1 = false;
    }
LAB_0010afe8:
    if (!bVar1) {
      return iVar4;
    }
  } while( true );
}

// 0x0010b020  size 0x118
/* "= Skip to the next picture =" */

bool maybe_Mpeg_DecodePictureData(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0x828) = 0;
  iVar4 = *(int *)(iVar5 + 0x144) * *(int *)(iVar5 + 0x148);
  *(undefined4 *)(iVar5 + 0x82c) = 0;
  if (*(int *)(iVar5 + 0x18c) != 3) {
    iVar4 = iVar4 >> 1;
  }
  do {
    do {
      lVar2 = maybe_Mpeg_DecodeSlice(param_1,iVar4);
    } while (lVar2 == 1);
  } while (lVar2 == 3);
  maybe_Ipu_Sync(param_1);
  lVar3 = maybe_Mpeg_DecodeBDEC(param_1);
  if (lVar3 == 0) {
    if (*(int *)(iVar5 + 0x10a0) != 0) {
      return (bool)4;
    }
    lVar2 = 2;
  }
  do {
    uVar1 = REG_DMAC_9_SPR_TO_CHCR;
  } while ((uVar1 >> 8 & 1) != 0);
  if (lVar2 == 0) {
    maybe_Mpeg_AddBlocks(param_1,*(int *)(iVar5 + 0x828) == 0);
  }
  if ((int)lVar2 - 1U < 2) {
    maybe_Mpeg_Error(param_1,0x35ec88);
  }
  return lVar2 == 0;
}

// 0x0010b138  size 0x12c
/* "slice_start_code out of range" */

undefined4
maybe_Mpeg_SliceHeader
          (undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0x134) = 0;
  maybe_Mpeg_ByteAlign();
  uVar4 = maybe_Mpeg_ShowBits(param_1,0x20);
  if ((uint)uVar4 - 0x101 < 0xaf) {
    maybe_Mpeg_FlushBits(param_1,0x20);
    iVar2 = maybe_Mpeg_PictureCodingExtension(param_1);
    iVar3 = maybe_Mpeg_GetMBAddrInc(param_1);
    *param_4 = iVar3;
    if (*(int *)(iVar5 + 0x134) == 0) {
      uVar1 = 0;
      *param_3 = (iVar2 * 0x80 + ((uint)uVar4 & 0xff) + -1) * *(int *)(iVar5 + 0x144) + iVar3 + -1;
      *param_4 = 1;
      *(undefined4 *)(iVar5 + 0x1c8) = 1;
      param_5[2] = 0;
      param_5[5] = 0;
      param_5[4] = 0;
      param_5[1] = 0;
      *param_5 = 0;
      param_5[7] = 0;
      param_5[6] = 0;
      param_5[3] = 0;
    }
    else {
      maybe_Mpeg_Error(param_1,0x35ecd0);
      uVar1 = 1;
    }
  }
  else {
    maybe_Mpeg_Errorf(param_1,0x35eca8,uVar4);
    uVar1 = 2;
  }
  return uVar1;
}

// 0x0010b268  size 0x1fc
/* "Too many macroblocks in picture" */

long maybe_Mpeg_DecodeSlice(undefined8 param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  
  iStack_70 = 0;
  iStack_6c = 0;
  lVar2 = maybe_Mpeg_SliceHeader(param_1,param_2,&iStack_70,&iStack_6c,auStack_b0);
  if (lVar2 == 0) {
    iVar3 = (int)param_1;
    *(undefined4 *)(iVar3 + 0x134) = 0;
    for (; iStack_70 < param_2; iStack_70 = iStack_70 + 1) {
      *(undefined4 *)(*(int *)(iVar3 + 0x828) * 0x140 + iVar3 + 0x6e4) = 0;
      lVar2 = maybe_Mpeg_DecodeBDEC(param_1);
      if (lVar2 == 0) {
        if (*(int *)(iVar3 + 0x10a0) == 0) {
          return 2;
        }
        return 4;
      }
      if (iStack_6c == 0) {
        lVar2 = maybe_Mpeg_ShowBits(param_1,0x17);
        if (lVar2 == 0) {
          *(undefined4 *)(iVar3 + 0x134) = 0;
          return 3;
        }
        if (*(int *)(iVar3 + 0x134) != 0) {
          *(undefined4 *)(iVar3 + 0x134) = 0;
          return 3;
        }
        iStack_6c = maybe_Mpeg_GetMBAddrInc(param_1);
        if (*(int *)(iVar3 + 0x134) != 0) goto LAB_0010b3a4;
      }
      if (param_2 <= iStack_70) {
        maybe_Mpeg_Error(param_1,0x35ecf0);
        return 2;
      }
      if (iStack_6c == 1) {
        lVar2 = maybe_Mpeg_DecodeMacroblock
                          (param_1,&uStack_68,&uStack_64,auStack_60,auStack_b0,auStack_90,auStack_80
                          );
        if (lVar2 == 0) {
LAB_0010b3a4:
          *(undefined4 *)(iVar3 + 0x134) = 0;
          return 1;
        }
      }
      else {
        lVar2 = maybe_Mpeg_SkippedMacroblock(param_1,auStack_b0,&uStack_64,auStack_90,&uStack_68);
        if (lVar2 == 0) goto LAB_0010b3fc;
      }
      lVar2 = maybe_Mpeg_MotionCompensation
                        (param_1,iStack_70,iStack_6c,uStack_68,uStack_64,auStack_b0,auStack_90,
                         auStack_80);
      if (lVar2 == 0) {
LAB_0010b3fc:
        *(undefined4 *)(iVar3 + 0x134) = 0;
        return 2;
      }
      if (iStack_70 == 0) {
        uVar1 = *(uint *)(iVar3 + 0x828);
        iStack_70 = 0;
      }
      else {
        maybe_Mpeg_AddBlocks(param_1,*(uint *)(iVar3 + 0x828) ^ 1);
        uVar1 = *(uint *)(iVar3 + 0x828);
      }
      iStack_6c = iStack_6c + -1;
      *(uint *)(iVar3 + 0x828) = uVar1 ^ 1;
    }
    lVar2 = 0;
  }
  return lVar2;
}

// 0x0010b468  size 0xbc
bool maybe_Mpeg_SkippedMacroblock
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,
               uint *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(*(int *)(iVar4 + 0x828) * 0x140 + iVar4 + 0x6e4) = 1;
  *(undefined4 *)(iVar4 + 0x1c8) = 1;
  if (*(int *)(iVar4 + 0x168) == 2) {
    *param_2 = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    iVar3 = *(int *)(iVar4 + 0x18c);
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x18c);
  }
  if (iVar3 == 3) {
    *param_3 = 2;
  }
  else {
    *param_3 = 1;
    uVar2 = (uint)(*(int *)(iVar4 + 0x18c) == 2);
    *param_4 = uVar2;
    param_4[1] = uVar2;
  }
  bVar1 = *(int *)(iVar4 + 0x168) == 1;
  if (bVar1) {
    maybe_Mpeg_Error(param_1,0x35ed10);
    uVar2 = *param_5;
  }
  else {
    uVar2 = *param_5;
  }
  *param_5 = uVar2 & 0xfffffffe;
  return !bVar1;
}

// 0x0010b528  size 0x4a8
/* "Invalid macroblock_type code" */

undefined4
maybe_Mpeg_DecodeMacroblock
          (undefined8 param_1,uint *param_2,int *param_3,int *param_4,undefined8 param_5,
          uint *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  iVar6 = (int)param_1;
  uVar5 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar5 & 0xf8ffffff | *(int *)(iVar6 + 0x168) << 0x18;
  uVar4 = maybe_Mpeg_GetVLC(param_1,1);
  *param_2 = (uint)uVar4;
  if (uVar4 == 0) {
    maybe_Mpeg_Error(param_1,0x35ed40);
    *(undefined4 *)(iVar6 + 0x134) = 1;
    return 0;
  }
  if ((uVar4 & 0xc) == 0) {
    if ((uVar4 & 1) != 0) {
      iVar2 = 1;
      if (*(int *)(iVar6 + 0x198) != 0) {
        if (*(int *)(iVar6 + 0x18c) == 3) {
          iVar2 = 2;
        }
        *param_3 = iVar2;
      }
      goto LAB_0010b638;
    }
    iVar2 = *(int *)(iVar6 + 0x18c);
  }
  else {
    if ((*(int *)(iVar6 + 0x18c) == 3) && (*(int *)(iVar6 + 0x194) != 0)) {
      *param_3 = 2;
    }
    else {
      iVar2 = maybe_Mpeg_GetBits(param_1,2);
      *param_3 = iVar2;
    }
LAB_0010b638:
    iVar2 = *(int *)(iVar6 + 0x18c);
  }
  iVar1 = *param_3;
  if (iVar2 == 3) {
    uVar8 = 1;
    if (iVar1 == 1) {
      uVar8 = 2;
    }
    bVar9 = iVar1 == 2;
  }
  else {
    bVar9 = false;
    uVar8 = 1;
    if (iVar1 == 2) {
      uVar8 = 2;
    }
  }
  if (((iVar2 == 3) && (*(int *)(iVar6 + 0x194) == 0)) && ((*param_2 & 3) != 0)) {
    iVar2 = maybe_Mpeg_GetBits(param_1,1);
  }
  else {
    iVar2 = 0;
  }
  *param_4 = iVar2;
  uVar5 = *param_2;
  if ((uVar5 & 0x10) != 0) {
    uVar3 = maybe_Mpeg_GetBits(param_1,5);
    *(undefined4 *)(iVar6 + 0x1cc) = uVar3;
    uVar5 = *param_2;
  }
  if ((uVar5 & 8) == 0) {
    if ((uVar5 & 1) == 0) {
      iVar2 = *(int *)(iVar6 + 0x134);
    }
    else {
      if (*(int *)(iVar6 + 0x198) != 0) {
        iVar2 = *(int *)(iVar6 + 0x860);
        goto LAB_0010b71c;
      }
      iVar2 = *(int *)(iVar6 + 0x134);
    }
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x860);
LAB_0010b71c:
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar6 + 0x170) + -1;
      maybe_Mpeg_MotionVector
                (param_1,param_5,param_7,iVar2,iVar2,0,0,*(undefined4 *)(iVar6 + 0x16c));
      iVar2 = *(int *)(iVar6 + 0x134);
    }
    else {
      maybe_Mpeg_MotionVectorPair
                (param_1,param_5,param_7,param_6,0,uVar8,bVar9,*(int *)(iVar6 + 0x17c) + -1);
      iVar2 = *(int *)(iVar6 + 0x134);
    }
  }
  if (iVar2 != 0) {
    return 0;
  }
  puVar7 = (undefined4 *)param_5;
  iVar2 = 0;
  if ((*param_2 & 4) != 0) {
    if (*(int *)(iVar6 + 0x860) == 0) {
      iVar2 = *(int *)(iVar6 + 0x178) + -1;
      maybe_Mpeg_MotionVector
                (param_1,puVar7 + 2,param_7,iVar2,iVar2,0,0,*(undefined4 *)(iVar6 + 0x174));
      iVar2 = *(int *)(iVar6 + 0x134);
    }
    else {
      maybe_Mpeg_MotionVectorPair
                (param_1,param_5,param_7,param_6,1,uVar8,bVar9,*(int *)(iVar6 + 0x184) + -1);
      iVar2 = *(int *)(iVar6 + 0x134);
    }
  }
  if (iVar2 != 0) {
    return 0;
  }
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) && (*(int *)(iVar6 + 0x198) != 0)) {
    maybe_Mpeg_FlushBits(param_1,1);
    uVar5 = *param_2;
  }
  if ((uVar5 & 3) == 0) {
    *(undefined4 *)(*(int *)(iVar6 + 0x828) * 0x140 + iVar6 + 0x6e4) = 1;
    iVar2 = *(int *)(iVar6 + 0x134);
  }
  else {
    maybe_Ipu_DmaFromStart(*(undefined4 *)(*(int *)(iVar6 + 0x828) * 0x140 + iVar6 + 0x5ac),0x300);
    maybe_Ipu_Sync(param_1);
    Ipu_Command(param_1,(*param_2 & 1) << 0x1b | *(int *)(iVar6 + 0x1cc) << 0x10 |
                        *(int *)(iVar6 + 0x1c8) << 0x1a | 0x20000000U | *param_4 << 0x19);
    iVar2 = *(int *)(iVar6 + 0x134);
  }
  *(undefined4 *)(iVar6 + 0x1c8) = 0;
  if (iVar2 != 0) {
    return 0;
  }
  if ((*param_2 & 1) == 0) {
    *(undefined4 *)(iVar6 + 0x1c8) = 1;
    if ((*param_2 & 1) == 0) {
      iVar2 = *(int *)(iVar6 + 0x168);
      goto LAB_0010b940;
    }
    iVar2 = *(int *)(iVar6 + 0x198);
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x198);
  }
  if (iVar2 == 0) {
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    iVar2 = *(int *)(iVar6 + 0x168);
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x168);
  }
LAB_0010b940:
  if ((iVar2 == 2) && ((*param_2 & 9) == 0)) {
    *puVar7 = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    if (*(int *)(iVar6 + 0x18c) == 3) {
      *param_3 = 2;
    }
    else {
      *param_3 = 1;
      *param_6 = (uint)(*(int *)(iVar6 + 0x18c) == 2);
    }
  }
  return 1;
}

// 0x0010b9d0  size 0x88
void maybe_Mpeg_DecodeMotionVector(int *param_1,uint param_2,long param_3,int param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10 << (param_2 & 0x1f);
  iVar2 = *param_1;
  if (param_5 != 0) {
    iVar2 = *param_1 >> 1;
  }
  if (param_3 < 1) {
    iVar1 = iVar2 << 1;
    if (-1 < param_3) goto LAB_0010ba4c;
    iVar2 = (iVar2 + -1) - ((~(uint)param_3 << (param_2 & 0x1f)) + param_4);
    if (iVar2 < -iVar3) {
      iVar2 = iVar2 + iVar3 * 2;
    }
  }
  else {
    iVar2 = iVar2 + 1 + ((uint)param_3 - 1 << (param_2 & 0x1f)) + param_4;
    iVar1 = iVar2 * 2;
    if (iVar2 < iVar3) goto LAB_0010ba4c;
    iVar2 = iVar2 + iVar3 * -2;
  }
  iVar1 = iVar2 << 1;
LAB_0010ba4c:
  if (param_5 == 0) {
    iVar1 = iVar2;
  }
  *param_1 = iVar1;
  return;
}

// 0x0010ba58  size 0x19c
void maybe_Mpeg_MotionVectorPair
               (undefined8 param_1,int param_2,undefined8 param_3,int param_4,int param_5,
               long param_6,long param_7,undefined8 param_8,undefined4 param_9,int param_10,
               undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_6 != 1) {
    uVar1 = maybe_Mpeg_GetBits(param_1,1);
    puVar2 = (undefined4 *)(param_5 * 4 + param_4);
    *puVar2 = uVar1;
    maybe_Mpeg_MotionVector
              (param_1,param_2 + param_5 * 8,param_3,param_8,param_9,param_10,param_11,0);
    uVar1 = maybe_Mpeg_GetBits(param_1,1);
    puVar2[2] = uVar1;
    maybe_Mpeg_MotionVector
              (param_1,param_2 + param_5 * 8 + 0x10,param_3,param_8,param_9,param_10,param_11,0);
    return;
  }
  if ((param_7 == 0) && (param_10 == 0)) {
    uVar1 = maybe_Mpeg_GetBits(param_1,1);
    puVar2 = (undefined4 *)(param_5 * 4 + param_4);
    puVar2[2] = uVar1;
    *puVar2 = uVar1;
  }
  puVar2 = (undefined4 *)(param_2 + param_5 * 8);
  maybe_Mpeg_MotionVector(param_1,puVar2,param_3,param_8,param_9,param_10,param_11,0);
  puVar2[4] = *puVar2;
  puVar2[5] = puVar2[1];
  return;
}

// 0x0010bbf8  size 0x14c
void maybe_Mpeg_MotionVector
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,long param_4,long param_5,
               long param_6,long param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = maybe_Mpeg_GetVLC(param_1,2);
  if ((param_4 == 0) || (lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = maybe_Mpeg_GetBits(param_1,param_4);
  }
  maybe_Mpeg_DecodeMotionVector(param_2,param_4,lVar2,uVar3,param_8);
  if (param_6 != 0) {
    uVar1 = Mpeg_GetBits3(param_1);
    *param_3 = uVar1;
  }
  lVar2 = maybe_Mpeg_GetVLC(param_1,2);
  if ((param_5 == 0) || (lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = maybe_Mpeg_GetBits(param_1,param_5);
  }
  iVar4 = (int)param_2;
  if (param_7 != 0) {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) >> 1;
  }
  maybe_Mpeg_DecodeMotionVector(iVar4 + 4,param_5,lVar2,uVar3,param_8);
  if (param_7 != 0) {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) << 1;
  }
  if (param_6 != 0) {
    uVar1 = Mpeg_GetBits3(param_1);
    param_3[1] = uVar1;
  }
  return;
}

// 0x0010bd48  size 0x2c
/* N153 confirmed: writes REG_IPU_CMD */

void Ipu_Command(int param_1,uint param_2)

{
  REG_IPU_CMD = param_2;
  *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(&DAT_003068b0 + (param_2 >> 0x1c) * 4);
  return;
}

// 0x0010bd78  size 0x168
void maybe_Ipu_Sync(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar2 = REG_IPU_CTRL;
  if ((uVar2 & 0x80004000) == 0x80000000) {
    iVar3 = *(int *)(param_1 + 0x10a0);
    while (iVar3 == 0) {
      bVar1 = 5000 < iVar5;
      iVar5 = iVar5 + 1;
      if (bVar1) {
        maybe_Mpeg_CallbackBackground(*(undefined4 *)(param_1 + 0x870));
        iVar5 = 0;
      }
      uVar2 = REG_IPU_CTRL;
      if ((uVar2 & 0x80004000) != 0x80000000) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x10a0);
    }
    lVar4 = DIntr();
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 | 0x10000;
    REG_DMAC_4_IPU_TO_CHCR = 0;
    REG_DMAC_3_IPU_FROM_CHCR = 0;
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 & 0xfffeffff;
    if (lVar4 != 0) {
      EIntr();
    }
    REG_DMAC_3_IPU_FROM_QWC = 0;
    REG_DMAC_4_IPU_TO_QWC = 0;
    REG_IPU_CTRL = 0x40000000;
  }
  return;
}

// 0x0010bee0  size 0x184
long maybe_Ipu_SyncData(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = 0;
  lVar5 = REG_IPU_CMD;
  if ((lVar5 < 0) && (uVar2 = REG_IPU_CTRL, (uVar2 & 0x4000) == 0)) {
    iVar3 = *(int *)(param_1 + 0x10a0);
    while (iVar3 == 0) {
      bVar1 = 5000 < iVar6;
      iVar6 = iVar6 + 1;
      if (bVar1) {
        maybe_Mpeg_CallbackBackground(*(undefined4 *)(param_1 + 0x870));
        iVar6 = 0;
      }
      lVar5 = REG_IPU_CMD;
      if (-1 < lVar5) {
        return lVar5;
      }
      uVar2 = REG_IPU_CTRL;
      if ((uVar2 & 0x4000) != 0) {
        return lVar5;
      }
      iVar3 = *(int *)(param_1 + 0x10a0);
    }
    lVar4 = DIntr();
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 | 0x10000;
    REG_DMAC_4_IPU_TO_CHCR = 0;
    REG_DMAC_3_IPU_FROM_CHCR = 0;
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 & 0xfffeffff;
    if (lVar4 != 0) {
      EIntr();
    }
    REG_DMAC_3_IPU_FROM_QWC = 0;
    REG_DMAC_4_IPU_TO_QWC = 0;
    REG_IPU_CTRL = 0x40000000;
  }
  return lVar5;
}

