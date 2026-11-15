// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00110000 - 0x00114000
#include "ghidra_types.h"

// 0x00110158  size 0x68
undefined4 maybe_Mpeg_FlushOutput(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = 0;
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(iVar1 + 8) != 0)) {
    maybe_Mpeg_FlushSecondField(iVar1);
    uVar2 = 1;
    *(int *)(param_1 + 8) = *(int *)(iVar1 + 0x130) - *(int *)(iVar1 + 0xc4);
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return uVar2;
}

// 0x001101c0  size 0xc
void maybe_Ipu_EnableBusy(int param_1)

{
  *(undefined4 *)(param_1 + 0x860) = 0;
  maybe_Ipu_SetCtrlBit23(1);
  return;
}

// 0x001101d0  size 0x7c
/* "the second field is missing" */

void maybe_Mpeg_FlushSecondField(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x138) == 0) {
    if (*(int *)(iVar1 + 0x18c) == 3) {
      maybe_Mpeg_OutputFrame(param_1,*(undefined4 *)(iVar1 + 0x1d4),*(int *)(iVar1 + 0x130) + -1);
      *(undefined4 *)(iVar1 + 0x138) = 0;
    }
    else {
      maybe_Mpeg_OutputField
                (param_1,*(undefined4 *)(iVar1 + 0x1e4),*(undefined4 *)(iVar1 + 500),
                 *(int *)(iVar1 + 0x130) + -1);
      *(undefined4 *)(iVar1 + 0x138) = 0;
    }
  }
  else {
    maybe_Mpeg_Error(param_1,0x35efb8);
    *(undefined4 *)(iVar1 + 0x138) = 0;
  }
  return;
}

// 0x00110250  size 0x60
/* 0x70000000 SPR */

void maybe_Mpeg_InitScratchpad(int param_1)

{
  maybe_Ipu_SetCtrlBit23(1);
  *(undefined4 *)(param_1 + 0x5a8) = 0x70000000;
  *(undefined **)(param_1 + 0x5ac) = &DAT_70001800;
  *(undefined **)(param_1 + 0x6e8) = &DAT_70001b00;
  *(undefined **)(param_1 + 0x6ec) = &DAT_70003300;
  *(undefined4 *)(param_1 + 0x828) = 0;
  return;
}

// 0x001102b0  size 0xc8
void maybe_Mpeg_ResetDecoder(int param_1)

{
  uint uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x830) = 1;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  lVar2 = DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = 0;
  REG_DMAC_4_IPU_TO_CHCR = 0;
  REG_DMAC_9_SPR_TO_CHCR = 0;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 != 0) {
    EIntr();
  }
  REG_DMAC_3_IPU_FROM_QWC = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_9_SPR_TO_QWC = 0;
  REG_IPU_CTRL = 0x40000000;
  maybe_Ipu_WaitIdle(0,0);
  return;
}

// 0x00110378  size 0x10
/* "[MPEG ERROR]%s" */

void maybe_Mpeg_ErrMessage(undefined8 param_1)

{
  maybe_scePrintf(0x35efd8,param_1);
  return;
}

// 0x00110388  size 0x34
void maybe_Mpeg_Errorf(undefined8 param_1)

{
  undefined1 auStack_120 [256];
  
  sprintf(auStack_120);
  maybe_Mpeg_Error(param_1,auStack_120);
  return;
}

// 0x001103c0  size 0x54
void maybe_Mpeg_Error(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)((int)param_1 + 0x870);
  if (((iVar1 == 0) || (param_1 == 0)) || (*(int *)((int)param_1 + 0xc) == 0)) {
    maybe_Mpeg_ErrMessage(param_2);
  }
  else {
    uStack_1c = (undefined4)param_2;
    uStack_20 = 0;
    maybe_Mpeg_DispatchCallback(iVar1,&uStack_20);
  }
  return;
}

// 0x00110418  size 0x100
void maybe_Mpeg_SetQuantMatrices(int param_1,uint param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  
  puVar4 = (ulong *)(param_1 + 0x88fU & 0xfffffff0);
  if (0 < param_3) {
    do {
      iVar3 = 0xfff40;
      if (param_3 < 0xfff41) {
        iVar3 = param_3;
      }
      param_3 = param_3 - iVar3;
      iVar1 = iVar3 + 0x1e;
      if (-1 < iVar3 + 0xf) {
        iVar1 = iVar3 + 0xf;
      }
      lVar2 = 0;
      if (param_3 != 0) {
        lVar2 = 3;
      }
      *puVar4 = (ulong)(param_2 & 0xfffffff) << 0x20 | lVar2 << 0x1c | (ulong)(uint)(iVar1 >> 4);
      SYNC(0);
      param_2 = param_2 + iVar3;
      puVar4 = puVar4 + 2;
    } while (0 < param_3);
  }
  FlushCache(0);
  lVar2 = DIntr();
  REG_DMAC_4_IPU_TO_TADR = param_1 + 0x88fU & 0xffffff0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_4_IPU_TO_CHCR = 0x105;
  if (lVar2 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x00110518  size 0x20
undefined4 maybe_Mpeg_SetPictureSize(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0xc) = param_2 >> 4;
  *(int *)(param_1 + 0x10) = param_3 >> 4;
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  return 1;
}

// 0x00110538  size 0x3cc
/* "vertical size > 2800" */

void maybe_Mpeg_SequenceHeader(undefined8 param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0xec) = 0;
  uVar2 = maybe_Mpeg_GetBits(param_1,0x20);
  uVar3 = uVar2 >> 8 & 0xfff;
  *(uint *)(iVar7 + 0x13c) = uVar2 >> 0x14;
  *(uint *)(iVar7 + 0x140) = uVar3;
  if (0xaf0 < uVar3) {
    maybe_Mpeg_Error(param_1,0x35efe8);
  }
  uVar2 = maybe_Mpeg_GetBits(param_1,0x1e);
  *(uint *)(iVar7 + 0x14c) = uVar2 >> 0xc;
  *(uint *)(iVar7 + 0x150) = uVar2 >> 1 & 0x3ff;
  lVar6 = maybe_Mpeg_GetBits(param_1,1);
  *(int *)(iVar7 + 0x858) = (int)lVar6;
  if (lVar6 == 0) {
    maybe_Mpeg_DecodeIntraSlice(param_1,0x50000000,0x3069c0);
  }
  else {
    maybe_Ipu_Sync(param_1);
    maybe_Ipu_Command(param_1,0x50000000);
    maybe_Ipu_Sync(param_1);
  }
  lVar6 = maybe_Mpeg_GetBits(param_1,1);
  *(int *)(iVar7 + 0x85c) = (int)lVar6;
  if (lVar6 == 0) {
    maybe_Mpeg_DecodeIntraSlice(param_1,0x58000000,0x306a00);
  }
  else {
    maybe_Ipu_Sync(param_1);
    maybe_Ipu_Command(param_1,0x58000000);
    maybe_Ipu_Sync(param_1);
  }
  maybe_Mpeg_ExtensionAndUserData(param_1);
  piVar1 = *(int **)(iVar7 + 0x870);
  iVar7 = piVar1[0x10];
  if (*(int *)(iVar7 + 0x860) == 0) {
    *(undefined4 *)(iVar7 + 0x18c) = 3;
    *(undefined4 *)(iVar7 + 0x194) = 1;
    *(undefined4 *)(iVar7 + 0x15c) = 5;
    *(undefined4 *)(iVar7 + 0x154) = 1;
    *(undefined4 *)(iVar7 + 0x158) = 1;
    *(undefined4 *)(iVar7 + 0x1a0) = 1;
    iVar4 = *(int *)(iVar7 + 0x13c);
  }
  else {
    iVar4 = *(int *)(iVar7 + 0x13c);
  }
  *(int *)(iVar7 + 0x144) = iVar4 + 0xf >> 4;
  if (*(int *)(iVar7 + 0x860) == 0) {
    iVar4 = *(int *)(iVar7 + 0x140);
  }
  else {
    iVar4 = *(int *)(iVar7 + 0x140);
    if (*(int *)(iVar7 + 0x154) == 0) {
      iVar4 = (iVar4 + 0x1f >> 5) << 1;
      goto LAB_00110700;
    }
  }
  iVar4 = iVar4 + 0xf >> 4;
LAB_00110700:
  *(int *)(iVar7 + 0x148) = iVar4;
  iVar10 = iVar4 * 0x10;
  iVar11 = *(int *)(iVar7 + 0x144) * 0x10;
  if ((iVar11 == *piVar1) && (iVar10 == piVar1[1])) {
    return;
  }
  piVar1[1] = iVar10;
  *piVar1 = iVar11;
  iVar8 = iVar7 + 0x120;
  iVar9 = iVar10 >> 1;
  uVar2 = (uint)(iVar11 * iVar4 * 0x1800) >> 8;
  maybe_Ringbuf_Commit(iVar8);
  uVar5 = maybe_Mpeg_WorkAlloc(iVar7,iVar8,uVar2,0x40);
  *(undefined4 *)(iVar7 + 0x114) = uVar5;
  uVar5 = maybe_Mpeg_WorkAlloc(iVar7,iVar8,uVar2,0x40);
  *(undefined4 *)(iVar7 + 0x118) = uVar5;
  uVar5 = maybe_Mpeg_WorkAlloc(iVar7,iVar8,uVar2,0x40);
  *(undefined4 *)(iVar7 + 0x11c) = uVar5;
  maybe_Mpeg_ComputeMbAddresses
            (iVar7 + 0x200,iVar7 + 0x268,iVar7 + 0x2d0,iVar7 + 0x338,iVar7 + 0x3a0,iVar7 + 0x408,
             iVar7 + 0x470,iVar7 + 0x4d8);
  maybe_Mpeg_SetPictureSize(iVar7 + 0x200,iVar11,iVar10);
  maybe_Mpeg_SetPictureSize(iVar7 + 0x268,iVar11,iVar10);
  maybe_Mpeg_SetPictureSize(iVar7 + 0x2d0,iVar11,iVar10);
  maybe_Mpeg_SetPictureSize(iVar7 + 0x338,iVar11,iVar9);
  maybe_Mpeg_SetPictureSize(iVar7 + 0x3a0,iVar11,iVar9);
  maybe_Mpeg_SetPictureSize(iVar7 + 0x408,iVar11,iVar9);
  maybe_Mpeg_SetPictureSize(iVar7 + 0x470,iVar11,iVar9);
  maybe_Mpeg_SetPictureSize(iVar7 + 0x4d8,iVar11,iVar9);
  maybe_Mpeg_SetPictureSize(iVar7 + 0x540,iVar11,iVar9);
  return;
}

// 0x00110908  size 0xe0
void maybe_Mpeg_ComputeMbAddresses
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
               uint *param_7,uint *param_8,uint *param_9,uint param_10,uint param_11,uint param_12,
               int param_13,int param_14)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_13 = param_13 * param_14;
  iVar1 = param_13 + 0x1ff;
  if (-1 < param_13) {
    iVar1 = param_13;
  }
  iVar1 = iVar1 >> 9;
  uVar4 = param_10 & 0xfffffff | 0x20000000;
  *param_1 = uVar4;
  uVar3 = param_11 & 0xfffffff | 0x20000000;
  *param_2 = uVar3;
  uVar2 = param_12 & 0xfffffff | 0x20000000;
  *param_3 = uVar2;
  *param_4 = uVar4;
  *param_5 = uVar3;
  *param_6 = uVar2;
  *param_7 = iVar1 * 0x180 + param_10 & 0xfffffff | 0x20000000;
  *param_8 = iVar1 * 0x180 + param_11 & 0xfffffff | 0x20000000;
  *param_9 = iVar1 * 0x180 + param_12 & 0xfffffff | 0x20000000;
  return;
}

// 0x001109e8  size 0xe0
void maybe_Mpeg_DecodeIntraSlice(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined4 auStack_60 [8];
  
  auStack_60[0] = 2;
  maybe_Mpeg_DispatchCallback(*(undefined4 *)((int)param_1 + 0x870),auStack_60);
  maybe_Ipu_Sync(param_1);
  REG_IPU_CMD = 0;
  maybe_Ipu_Sync(param_1);
  lVar1 = DIntr();
  REG_DMAC_4_IPU_TO_MADR = param_3 & 0xfffffff;
  REG_DMAC_4_IPU_TO_QWC = 4;
  REG_DMAC_4_IPU_TO_CHCR = 0x101;
  if (lVar1 != 0) {
    EIntr();
  }
  maybe_Ipu_Command(param_1,param_2);
  maybe_Ipu_Sync(param_1);
  auStack_60[0] = 3;
  maybe_Mpeg_DispatchCallback(*(undefined4 *)((int)param_1 + 0x870),auStack_60);
  return;
}

// 0x00110ac8  size 0x130
/* "Unsupported profile/level" */

void maybe_Mpeg_SequenceExtension(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x860) = 1;
  maybe_Ipu_SetCtrlBit23(0);
  uVar1 = maybe_Mpeg_GetBits(param_1,0x1c);
  uVar2 = uVar1 >> 0x11 & 3;
  *(uint *)(iVar4 + 0x158) = uVar2;
  if (uVar2 != 1) {
    maybe_Mpeg_Error(param_1,0x35f000);
  }
  *(uint *)(iVar4 + 0x154) = uVar1 >> 0x13 & 1;
  uVar3 = uVar1 >> 0x14;
  uVar2 = maybe_Mpeg_GetBits(param_1,0x10);
  if (((uVar3 != 0x48) && (uVar3 != 0x58)) && (uVar3 != 0x44)) {
    maybe_Mpeg_Error(param_1,0x35f028);
  }
  *(uint *)(iVar4 + 0x150) = *(int *)(iVar4 + 0x150) + (uVar2 >> 8) * 0x400;
  *(uint *)(iVar4 + 0x13c) = (uVar1 >> 0xf & 3) << 0xc | *(uint *)(iVar4 + 0x13c) & 0xfff;
  *(uint *)(iVar4 + 0x140) = (uVar1 >> 0xd & 3) << 0xc | *(uint *)(iVar4 + 0x140) & 0xfff;
  *(uint *)(iVar4 + 0x14c) = *(int *)(iVar4 + 0x14c) + (uVar1 >> 1 & 0xfff) * 0x40000;
  return;
}

// 0x00110bf8  size 0x8c
void maybe_Mpeg_QuantMatrixExt(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  
  maybe_Mpeg_GetBits(param_1,3);
  lVar1 = maybe_Mpeg_GetBits(param_1,1);
  iVar3 = (int)param_1;
  if (lVar1 != 0) {
    maybe_Mpeg_GetBits(param_1,8);
    maybe_Mpeg_GetBits(param_1,8);
    uVar2 = maybe_Mpeg_GetBits(param_1,8);
    *(undefined4 *)(iVar3 + 0x15c) = uVar2;
  }
  uVar2 = maybe_Mpeg_GetBits(param_1,0xe);
  *(undefined4 *)(iVar3 + 0x160) = uVar2;
  maybe_Mpeg_GetBits(param_1,1);
  uVar2 = maybe_Mpeg_GetBits(param_1,0xe);
  *(undefined4 *)(iVar3 + 0x164) = uVar2;
  return;
}

// 0x00110c88  size 0xc
/* screen record 0x35ed6c */

void ScrMpeg_QuantMatrixExtension_Exit(undefined8 param_1)

{
  maybe_Mpeg_Error(param_1,0x35f048);
  return;
}

// 0x00110c98  size 0xc
/* screen record 0x35ed78 */

void ScrMpeg_PictureDisplayExtension_Enter(undefined8 param_1)

{
  maybe_Mpeg_Error(param_1,0x35f078);
  return;
}

// 0x00110ca8  size 0xc
void maybe_Mpeg_Error_Wrap(undefined8 param_1)

{
  maybe_Mpeg_Error(param_1,0x35f090);
  return;
}

// 0x00110cb8  size 0xc
void maybe_Mpeg_Error_Wrap2(undefined8 param_1)

{
  maybe_Mpeg_Error(param_1,0x35f0c8);
  return;
}

// 0x00110cf0  size 0x24
undefined4 maybe_sceMpegResume(int param_1)

{
  maybe_sceMpegRestoreIpuState(*(int *)(param_1 + 0x40) + 0x68);
  return 1;
}

// 0x00110d18  size 0x74
void maybe_Dmac_SuspendCh4(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = param_1;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x00110d90  size 0x74
void maybe_Dmac_SuspendCh3(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_4_IPU_TO_CHCR = param_1;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x00110e08  size 0xe4
void maybe_sceMpegSaveIpuState(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  maybe_Dmac_SuspendCh3(1);
  uVar2 = REG_DMAC_4_IPU_TO_MADR;
  *param_1 = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_TADR;
  param_1[1] = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_QWC;
  param_1[2] = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_CHCR;
  param_1[3] = uVar2;
  do {
    uVar1 = REG_IPU_CTRL;
  } while ((uVar1 & 0xf0) != 0);
  maybe_Dmac_SuspendCh4(0);
  uVar2 = REG_DMAC_3_IPU_FROM_MADR;
  param_1[4] = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_QWC;
  param_1[5] = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_CHCR;
  param_1[6] = uVar2;
  uVar2 = REG_IPU_BP;
  param_1[7] = uVar2;
  uVar2 = REG_IPU_CTRL;
  param_1[8] = uVar2;
  return;
}

// 0x00110ef0  size 0x150
void maybe_sceMpegRestoreIpuState(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1[7];
  iVar3 = (uVar1 >> 0x10 & 3) + (uVar1 >> 8 & 0xf);
  iVar4 = param_1[2] + iVar3;
  iVar3 = *param_1 + iVar3 * -0x10;
  if ((param_1[4] != 0) && (param_1[5] != 0)) {
    REG_DMAC_3_IPU_FROM_MADR = param_1[4];
    REG_DMAC_3_IPU_FROM_QWC = param_1[5];
    maybe_Dmac_SuspendCh4(param_1[6] | 0x100);
  }
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  REG_IPU_CMD = uVar1 & 0x7f;
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  if ((iVar3 == 0) || (iVar4 == 0)) {
    return;
  }
  REG_DMAC_4_IPU_TO_MADR = iVar3;
  REG_DMAC_4_IPU_TO_TADR = param_1[1];
  REG_DMAC_4_IPU_TO_QWC = iVar4;
  maybe_Dmac_SuspendCh3(param_1[3] | 0x100);
  return;
}

// 0x00111040  size 0x68
uint maybe_Ipu_WaitIdle(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    do {
      iVar1 = REG_IPU_CTRL;
    } while (iVar1 < 0);
    uVar2 = 0;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    uVar2 = REG_IPU_CTRL;
    uVar2 = uVar2 >> 0x1f;
  }
  return uVar2;
}

// 0x001110a8  size 0x74
void maybe_Dmac_SuspendCh3B(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_4_IPU_TO_CHCR = param_1;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x00111120  size 0x238
void maybe_Ipu_Reset(void)

{
  int iVar1;
  
  maybe_Dmac_SuspendCh3B(1);
  REG_IPU_CTRL = 0x40000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_IN_FIFO = DAT_00306a50;
  DAT_10007014 = DAT_00306a54;
  DAT_10007018 = DAT_00306a58;
  DAT_1000701c = DAT_00306a5c;
  REG_IPU_IN_FIFO = DAT_00306a60;
  DAT_10007014 = DAT_00306a64;
  DAT_10007018 = PTR_DAT_00306a68;
  DAT_1000701c = PTR_DAT_00306a6c;
  REG_IPU_IN_FIFO = DAT_00306a70;
  DAT_10007014 = PTR_DAT_00306a74;
  DAT_10007018 = DAT_00306a78;
  DAT_1000701c = DAT_00306a7c;
  REG_IPU_IN_FIFO = DAT_00306a80;
  DAT_10007014 = PTR_DAT_00306a84;
  DAT_10007018 = DAT_00306a88;
  DAT_1000701c = DAT_00306a8c;
  REG_IPU_IN_FIFO = DAT_00306a90;
  DAT_10007014 = DAT_00306a94;
  DAT_10007018 = DAT_00306a98;
  DAT_1000701c = DAT_00306a9c;
  REG_IPU_IN_FIFO = DAT_00306a90;
  DAT_10007014 = DAT_00306a94;
  DAT_10007018 = DAT_00306a98;
  DAT_1000701c = DAT_00306a9c;
  REG_IPU_IN_FIFO = DAT_00306a90;
  DAT_10007014 = DAT_00306a94;
  DAT_10007018 = DAT_00306a98;
  DAT_1000701c = DAT_00306a9c;
  REG_IPU_IN_FIFO = DAT_00306a90;
  DAT_10007014 = DAT_00306a94;
  DAT_10007018 = DAT_00306a98;
  DAT_1000701c = DAT_00306a9c;
  REG_IPU_CMD = 0x50000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0x58000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_IN_FIFO = DAT_00306aa0;
  DAT_10007014 = DAT_00306aa4;
  DAT_10007018 = DAT_00306aa8;
  DAT_1000701c = PTR_DAT_00306aac;
  REG_IPU_IN_FIFO = DAT_00306ab0;
  DAT_10007014 = DAT_00306ab4;
  DAT_10007018 = DAT_00306ab8;
  DAT_1000701c = DAT_00306abc;
  REG_IPU_CMD = 0x60000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0x90000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CTRL = 0x40000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  return;
}

// 0x001113a0  size 0x10
void SetGsCrt(void)

{
  syscall(2);
  return;
}

// 0x001113c0  size 0x10
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _Exit(int __status)

{
  syscall(4);
  return;
}

// 0x001113e0  size 0x10
void _LoadExecPS2(void)

{
  syscall(6);
  return;
}

// 0x00111450  size 0x10
void SetVTLBRefillHandler(void)

{
  syscall(0xd);
  return;
}

// 0x00111480  size 0x10
void AddIntcHandler(void)

{
  syscall(0x10);
  return;
}

// 0x00111490  size 0x10
void AddIntcHandler(void)

{
  syscall(0x10);
  return;
}

// 0x001114a0  size 0x10
void RemoveIntcHandler(void)

{
  syscall(0x11);
  return;
}

// 0x001114b0  size 0x10
void AddDmacHandler(void)

{
  syscall(0x12);
  return;
}

// 0x001114c0  size 0x10
void AddDmacHandler(void)

{
  syscall(0x12);
  return;
}

// 0x001114d0  size 0x10
void RemoveDmacHandler(void)

{
  syscall(0x13);
  return;
}

// 0x001114e0  size 0x10
void _EnableIntc(void)

{
  syscall(0x14);
  return;
}

// 0x001114f0  size 0x10
void _DisableIntc(void)

{
  syscall(0x15);
  return;
}

// 0x00111500  size 0x10
void _EnableDmac(void)

{
  syscall(0x16);
  return;
}

// 0x00111510  size 0x10
void _DisableDmac(void)

{
  syscall(0x17);
  return;
}

// 0x00111540  size 0x10
void _iEnableIntc(void)

{
  syscall(0xffffffffffffffe6);
  return;
}

// 0x00111550  size 0x10
void _iDisableIntc(void)

{
  syscall(0xffffffffffffffe5);
  return;
}

// 0x00111560  size 0x10
void _iEnableDmac(void)

{
  syscall(0xffffffffffffffe4);
  return;
}

// 0x00111570  size 0x10
void _iDisableDmac(void)

{
  syscall(0xffffffffffffffe3);
  return;
}

// 0x001115a0  size 0x10
void CreateThread(void)

{
  syscall(0x20);
  return;
}

// 0x001115b0  size 0x10
void DeleteThread(void)

{
  syscall(0x21);
  return;
}

// 0x001115c0  size 0x10
void _StartThread(void)

{
  syscall(0x22);
  return;
}

// 0x001115d0  size 0x10
void ExitThread(void)

{
  syscall(0x23);
  return;
}

// 0x001115e0  size 0x10
void ExitDeleteThread(void)

{
  syscall(0x24);
  return;
}

// 0x001115f0  size 0x10
void TerminateThread(void)

{
  syscall(0x25);
  return;
}

// 0x00111630  size 0x10
void ChangeThreadPriority(void)

{
  syscall(0x29);
  return;
}

// 0x00111650  size 0x10
void RotateThreadReadyQueue(void)

{
  syscall(0x2b);
  return;
}

// 0x00111690  size 0x10
void GetThreadId(void)

{
  syscall(0x2f);
  return;
}

// 0x001116a0  size 0x10
void ReferThreadStatus(void)

{
  syscall(0x30);
  return;
}

// 0x001116b0  size 0x10
void iReferThreadStatus(void)

{
  syscall(0xffffffffffffffcf);
  return;
}

// 0x001116c0  size 0x10
void SleepThread(void)

{
  syscall(0x32);
  return;
}

// 0x001116d0  size 0x10
void WakeupThread(void)

{
  syscall(0x33);
  return;
}

// 0x001116e0  size 0x10
void _iWakeupThread(void)

{
  syscall(0xffffffffffffffcc);
  return;
}

// 0x00111710  size 0x10
void SuspendThread(void)

{
  syscall(0x37);
  return;
}

// 0x00111720  size 0x10
void _iSuspendThread(void)

{
  syscall(0xffffffffffffffc8);
  return;
}

// 0x00111780  size 0x10
void EndOfHeap(void)

{
  syscall(0x3e);
  return;
}

// 0x001117a0  size 0x10
void CreateSema(void)

{
  syscall(0x40);
  return;
}

// 0x001117b0  size 0x10
void DeleteSema(void)

{
  syscall(0x41);
  return;
}

// 0x001117c0  size 0x10
void SignalSema(void)

{
  syscall(0x42);
  return;
}

// 0x001117d0  size 0x10
void iSignalSema(void)

{
  syscall(0xffffffffffffffbd);
  return;
}

// 0x001117e0  size 0x10
void WaitSema(void)

{
  syscall(0x44);
  return;
}

// 0x001117f0  size 0x10
void PollSema(void)

{
  syscall(0x45);
  return;
}

// 0x00111810  size 0x10
void ReferSemaStatus(void)

{
  syscall(0x47);
  return;
}

// 0x00111820  size 0x10
void iReferSemaStatus(void)

{
  syscall(0xffffffffffffffb8);
  return;
}

// 0x00111840  size 0x10
void SetOsdConfigParam(void)

{
  syscall(0x4a);
  return;
}

// 0x00111850  size 0x10
void GetOsdConfigParam(void)

{
  syscall(0x4b);
  return;
}

// 0x00111a20  size 0x10
void FlushCache(void)

{
  syscall(100);
  return;
}

// 0x00111a70  size 0x10
void sceSifStopDma(void)

{
  syscall(0x6b);
  return;
}

// 0x00111ac0  size 0x10
void GsGetIMR(void)

{
  syscall(0x70);
  return;
}

// 0x00111ae0  size 0x10
void GsPutIMR(void)

{
  syscall(0x71);
  return;
}

// 0x00111b10  size 0x10
void SetVSyncFlag(void)

{
  syscall(0x73);
  return;
}

// 0x00111b40  size 0x10
void sceSifDmaStat(void)

{
  syscall(0x76);
  return;
}

// 0x00111b60  size 0x10
void sceSifSetDma(void)

{
  syscall(0x77);
  return;
}

// 0x00111b70  size 0x10
void isceSifSetDma(void)

{
  syscall(0xffffffffffffff89);
  return;
}

// 0x00111b80  size 0x10
void sceSifSetDChain(void)

{
  syscall(0x78);
  return;
}

// 0x00111b90  size 0x10
void isceSifSetDChain(void)

{
  syscall(0xffffffffffffff88);
  return;
}

// 0x00111ba0  size 0x10
void sceSifSetReg(void)

{
  syscall(0x79);
  return;
}

// 0x00111bb0  size 0x10
void sceSifGetReg(void)

{
  syscall(0x7a);
  return;
}

// 0x00111bc0  size 0x10
void _ExecOSD(void)

{
  syscall(0x7b);
  return;
}

// 0x00111bd0  size 0x10
void Deci2Call(void)

{
  syscall(0x7c);
  return;
}

// 0x00111c00  size 0x10
void GetMemorySize(void)

{
  syscall(0x7f);
  return;
}

// 0x00111c10  size 0x10
void _InitTLB(void)

{
  syscall(0x82);
  return;
}

// 0x00111c20  size 0xc
void maybe__kernl_ResetTtyFlag(void)

{
  DAT_00306ad0 = 0;
  return;
}

// 0x00111c30  size 0x90
/* INTC_STAT = 4 (VBLANK_START) */

void maybe_sceGsVSyncHandlerClear(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 != 0) {
    EIntr();
  }
  do {
    uVar1 = REG_INTC_STAT;
  } while ((uVar1 & 4) == 0);
  lVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x00111cc0  size 0xa4
undefined8 maybe_sceGsWaitVSync(void)

{
  uint uVar1;
  long lVar2;
  int aiStack_20 [2];
  undefined8 uStack_18;
  
  aiStack_20[0] = 0;
  SetVSyncFlag(aiStack_20,(uint)aiStack_20 | 8);
  lVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 != 0) {
    EIntr();
  }
  do {
    uVar1 = REG_INTC_STAT;
    if ((uVar1 & 4) != 0) break;
  } while (aiStack_20[0] == 0);
  lVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 != 0) {
    EIntr();
  }
  return uStack_18;
}

// 0x00111d68  size 0x7c
/* fd 1/2 -> TTY */

undefined8 _write(int param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 - 1U < 2) {
    if (DAT_00306ad0 == 0) {
      lVar1 = maybe_Tty_Init(param_2);
      if (lVar1 == 0) goto LAB_00111dc8;
      DAT_00306ad0 = 1;
    }
    uVar2 = maybe_Tty_Write(param_2,param_3);
  }
  else {
LAB_00111dc8:
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

// 0x00111de8  size 0x74
/* fd 0 -> TTY */

undefined8 _read(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    if (DAT_00306ad0 == 0) {
      lVar1 = maybe_Tty_Init(param_2);
      if (lVar1 == 0) goto LAB_00111e40;
      DAT_00306ad0 = 1;
    }
    uVar2 = maybe_Tty_Read(param_2,param_3);
  }
  else {
LAB_00111e40:
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

// 0x00111e60  size 0x28
/* sets errno EIO */

undefined4 _close(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  *puVar1 = 5;
  return 0xffffffff;
}

// 0x00111e88  size 0x8
undefined4 maybe__getpid(void)

{
  return 0xffffffff;
}

// 0x00111e98  size 0x8
undefined4 maybe__kill(void)

{
  return 0xffffffff;
}

// 0x00111ea0  size 0xac
/* EndOfHeap */

uint _sbrk(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  uVar3 = DAT_00306ad4 + param_1;
  uVar1 = EndOfHeap();
  if (uVar1 < uVar3) {
    puVar2 = (undefined4 *)__errno();
    *puVar2 = 0xc;
    if (uVar4 != 0) {
      EI();
    }
    uVar1 = 0xffffffff;
    uVar3 = DAT_00306ad4;
  }
  else {
    uVar1 = DAT_00306ad4;
    if (uVar4 != 0) {
      EI();
    }
  }
  DAT_00306ad4 = uVar3;
  return uVar1;
}

// 0x00111f50  size 0x8
undefined4 maybe__isatty(void)

{
  return 1;
}

// 0x00111f58  size 0x14
/* st_mode = S_IFCHR */

undefined8 _fstat(undefined8 param_1,int param_2)

{
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}

// 0x00111f78  size 0x28
undefined8 maybe__exit_hook(int param_1,undefined8 param_2)

{
  if (param_1 == 1) {
    Exit(param_2);
  }
  return 0;
}

// 0x00111fa0  size 0x28
/* EIO */

undefined4 _lseek(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  *puVar1 = 5;
  return 0xffffffff;
}

// 0x00111fc8  size 0x28
/* EIO */

undefined4 _open(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  *puVar1 = 5;
  return 0xffffffff;
}

// 0x00111ff0  size 0xa4
void maybe__SyncDCacheLines(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    SYNC(0);
    cacheOp(0x10,iVar2);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x14,iVar2);
      SYNC(0);
    }
    SYNC(0);
    cacheOp(0x10,iVar2 + 1);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x14,iVar2 + 1);
      SYNC(0);
    }
    SYNC(0);
    iVar2 = iVar2 + 0x40;
  } while (iVar2 < 0x1000);
  return;
}

// 0x00112098  size 0x7c
/* (start, end) */

void SyncDCache(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  if (uVar1 != 0) {
    DIntr();
  }
  maybe__SyncDCacheLines(param_1 & 0xffffffffffffffc0,param_2 & 0xffffffffffffffc0);
  if (uVar1 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x00112130  size 0xa4
void maybe__InvalidDCacheLines(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    SYNC(0);
    cacheOp(0x10,iVar2);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x16,iVar2);
      SYNC(0);
    }
    SYNC(0);
    cacheOp(0x10,iVar2 + 1);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x16,iVar2 + 1);
      SYNC(0);
    }
    SYNC(0);
    iVar2 = iVar2 + 0x40;
  } while (iVar2 < 0x1000);
  return;
}

// 0x001121d8  size 0x7c
void InvalidDCache(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  if (uVar1 != 0) {
    DIntr();
  }
  maybe__InvalidDCacheLines(param_1 & 0xffffffffffffffc0,param_2 & 0xffffffffffffffc0);
  if (uVar1 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x00112280  size 0x68
undefined8 DisableIntc(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  uVar1 = _DisableIntc(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

// 0x001122e8  size 0x68
undefined8 EnableIntc(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  uVar1 = _EnableIntc(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

// 0x00112350  size 0x68
undefined8 DisableDmac(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  uVar1 = _DisableDmac(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

// 0x001123b8  size 0x68
undefined8 EnableDmac(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  uVar1 = _EnableDmac(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

// 0x00112420  size 0x20
void iEnableIntc(void)

{
  _iEnableIntc();
  SYNC(0);
  return;
}

// 0x00112440  size 0x20
void iDisableIntc(void)

{
  _iDisableIntc();
  SYNC(0);
  return;
}

// 0x00112460  size 0x20
void iEnableDmac(void)

{
  _iEnableDmac();
  SYNC(0);
  return;
}

// 0x00112480  size 0x20
void iDisableDmac(void)

{
  _iDisableDmac();
  SYNC(0);
  return;
}

// 0x001124a0  size 0xd8
/* "## internel error in libkernl.a!" */

void maybe_kernl_TopThreadLoop(uint *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  
  do {
    while( true ) {
      while( true ) {
        WaitSema(uRam00370700);
        iVar2 = (*param_1 & 0x1ff) * 2;
        *param_1 = (*param_1 & 0x1ff) + 1;
        puVar3 = (undefined1 *)((int)param_1 + iVar2 + 9);
        bVar1 = *(byte *)((int)param_1 + iVar2 + 8);
        if (bVar1 != 1) break;
        RotateThreadReadyQueue(*puVar3);
      }
      if (1 < bVar1) break;
      if (bVar1 == 0) {
        WakeupThread(*puVar3);
      }
      else {
LAB_00112568:
        maybe_kprintf(0x35f100);
      }
    }
    if (bVar1 != 2) goto LAB_00112568;
    SuspendThread(*(undefined1 *)((int)param_1 + iVar2 + 9));
  } while( true );
}

// 0x00112578  size 0xd4
int maybe_InitThreadExtension(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [4];
  code *pcStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if (DAT_00306ad8 < 1) {
    uStack_48 = 0;
    uStack_4c = 0xff;
    lVar1 = CreateSema(auStack_50);
    uRam00370700 = (undefined4)lVar1;
    if (-1 < lVar1) {
      pcStack_7c = maybe_kernl_TopThreadLoop;
      uStack_78 = 0x370300;
      uStack_74 = 0x400;
      puStack_70 = &_mips_gp0_value;
      uStack_6c = 0;
      lVar1 = CreateThread(auStack_80);
      DAT_00306ad8 = (int)lVar1;
      if (-1 < lVar1) {
        uRam00370708 = 0;
        uRam0037070c = 0;
        _StartThread(lVar1,0x370708);
        uVar2 = GetThreadId();
        ChangeThreadPriority(uVar2,1);
        return DAT_00306ad8;
      }
      DeleteSema(uRam00370700);
    }
  }
  return -1;
}

// 0x00112650  size 0x94
void maybe_iWakeupThreadEx(ulong param_1)

{
  undefined4 uVar1;
  ulong in_v0;
  int iVar2;
  
  uVar1 = uRam00370700;
  syscall(0xffffffffffffffd1);
  if (in_v0 == param_1) {
    if ((in_v0 < 0x100) && (DAT_00306ad8 != 0)) {
      iVar2 = (uRam0037070c & 0x1ff) * 2;
      uRam0037070c = (uRam0037070c & 0x1ff) + 1;
      *(undefined1 *)(iVar2 + 0x370710) = 0;
      *(char *)(iVar2 + 0x370711) = (char)in_v0;
      iSignalSema(uVar1);
    }
  }
  else {
    _iWakeupThread();
  }
  return;
}

// 0x001126e8  size 0x7c
uint maybe_iSignalSemaEx(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = uRam00370700;
  if ((param_1 < 0x80) && (DAT_00306ad8 != 0)) {
    iVar2 = (uRam0037070c & 0x1ff) * 2;
    uRam0037070c = (uRam0037070c & 0x1ff) + 1;
    *(undefined1 *)(iVar2 + 0x370710) = 1;
    *(char *)(iVar2 + 0x370711) = (char)param_1;
    iSignalSema(uVar1);
  }
  else {
    param_1 = 0xffffffff;
  }
  return param_1;
}

// 0x00112768  size 0x98
void maybe_iSuspendThreadEx(ulong param_1)

{
  undefined4 uVar1;
  ulong in_v0;
  int iVar2;
  
  uVar1 = uRam00370700;
  syscall(0xffffffffffffffd1);
  if (in_v0 == param_1) {
    if ((in_v0 < 0x100) && (DAT_00306ad8 != 0)) {
      iVar2 = (uRam0037070c & 0x1ff) * 2;
      uRam0037070c = (uRam0037070c & 0x1ff) + 1;
      *(undefined1 *)(iVar2 + 0x370710) = 2;
      *(char *)(iVar2 + 0x370711) = (char)in_v0;
      iSignalSema(uVar1);
    }
  }
  else {
    _iSuspendThread();
  }
  return;
}

// 0x00112800  size 0xc8
/* "DelayThread" */

long DelayThread(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char *pcStack_3c;
  
  if ((Status & 0x10000) == 0) {
    lVar2 = -0x7fff7ff8;
  }
  else {
    uStack_4c = 1;
    pcStack_3c = s_DelayThread_0035f128;
    uStack_48 = 0;
    lVar1 = CreateSema(auStack_50);
    if (lVar1 < 0) {
      lVar2 = -0x7fff7ffd;
    }
    else {
      uVar3 = maybe_TimerUSec2BusClock(0,param_1);
      lVar2 = maybe_SetTimerAlarm(uVar3,0x1128c8,lVar1);
      if (lVar2 < 0) {
        DeleteSema(lVar1);
      }
      else {
        WaitSema(lVar1);
        DeleteSema(lVar1);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}

// 0x001128c8  size 0x28
undefined8 maybe_Kernl_AlarmSignal(void)

{
  undefined8 in_a3;
  
  iSignalSema(in_a3);
  SYNC(0);
  EI();
  return 0;
}

// 0x001128f0  size 0x44
/* Deci2Call(1) */

void sceDeci2Open(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  
  uStack_20 = param_1 & 0xffff;
  puStack_14 = &DAT_20370b10;
  uStack_1c = param_2;
  uStack_18 = param_3;
  Deci2Call(1,&uStack_20);
  return;
}

// 0x00112938  size 0x24
/* Deci2Call(2) */

void sceDeci2Close(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  Deci2Call(2,auStack_20);
  return;
}

// 0x00112960  size 0x30
/* Deci2Call(3) */

void sceDeci2ReqSend(undefined4 param_1,char param_2)

{
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = (int)param_2;
  uStack_20 = param_1;
  Deci2Call(3,&uStack_20);
  return;
}

// 0x00112990  size 0x24
/* Deci2Call(4) */

void sceDeci2Poll(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  Deci2Call(4,auStack_20);
  return;
}

// 0x001129b8  size 0x30
void maybe_sceDeci2ExReqSend(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_30 = param_1 & 0xff;
  uStack_2c = param_2;
  uStack_28 = param_3;
  Deci2Call(0x20,&uStack_30);
  return;
}

// 0x001129e8  size 0x24
void maybe_sceDeci2ExLock(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  Deci2Call(0x21,auStack_20);
  return;
}

// 0x00112a10  size 0x34
void sceDeci2ExRecv(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  uStack_18 = param_3 & 0xffff;
  uStack_20 = param_1;
  uStack_1c = param_2;
  Deci2Call(0xfffffffffffffffb,&uStack_20);
  return;
}

// 0x00112a48  size 0x34
void sceDeci2ExSend(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  uStack_18 = param_3 & 0xffff;
  uStack_20 = param_1;
  uStack_1c = param_2;
  Deci2Call(0xfffffffffffffffa,&uStack_20);
  return;
}

// 0x00112ab0  size 0x24
void maybe_sceDeci2ExUnLock(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  Deci2Call(0xfffffffffffffff8,auStack_20);
  return;
}

// 0x00112ad8  size 0x24
void maybe_sceDeci2ExPoll(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  Deci2Call(0xfffffffffffffff7,auStack_20);
  return;
}

// 0x00112b00  size 0x24
/* Deci2Call(0x10) */

void maybe_sceDeci2kputs(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  Deci2Call(0x10,auStack_20);
  return;
}

// 0x00112b28  size 0x24
undefined4 maybe_Tty_SetBuffer(undefined4 param_1)

{
  uRam00370b40 = param_1;
  uRam00370b48 = 0x370b50;
  uRam00370b44 = 0;
  uRam00370b4c = 0x370b50;
  return 0x370b40;
}

// 0x00112b50  size 0x3c
void maybe_Tty_PushChar(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  param_1[1] = param_1[1] + 1;
  param_1[3] = iVar1 + 1;
  if (iVar1 + 1 == (int)param_1 + *param_1 + 0x10) {
    param_1[3] = (int)(param_1 + 4);
  }
  return;
}

// 0x00112b90  size 0x3c
void maybe_Tty_PopChar(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  param_1[1] = param_1[1] + -1;
  param_1[2] = iVar1 + 1;
  if (iVar1 + 1 == (int)param_1 + *param_1 + 0x10) {
    param_1[2] = (int)(param_1 + 4);
  }
  return;
}

// 0x00112bd0  size 0x190
/* "TTY: receive error" */

void maybe_Tty_Deci2Handler(int param_1,ulong param_2,undefined4 *param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 3) {
    lVar3 = sceDeci2ExSend(*param_3,param_3[4],param_3[1] & 0xffff);
    if (-1 < lVar3) {
      param_3[4] = param_3[4] + (int)lVar3;
      param_3[1] = param_3[1] - (int)lVar3;
      return;
    }
    maybe_kprintf(0x35f178);
  }
  else {
    if (param_1 < 4) {
      if (param_1 < 1) {
        return;
      }
      if (param_2 == 0) {
        puVar1 = (ushort *)param_3[5];
        iVar6 = 0xc;
        if (0xc < *puVar1) {
          iVar5 = param_3[6];
          puVar4 = puVar1;
          while( true ) {
            puVar2 = (undefined1 *)((int)puVar4 + iVar6);
            iVar6 = iVar6 + 1;
            **(undefined1 **)(iVar5 + 0xc) = *puVar2;
            maybe_Tty_PushChar(param_3[6]);
            if ((int)(uint)*puVar1 <= iVar6) break;
            puVar4 = (ushort *)param_3[5];
            iVar5 = param_3[6];
          }
        }
        param_3[2] = 0;
        return;
      }
      if (0x140 < (uint)(param_3[2] + (int)param_2)) {
        maybe_kprintf(0x35f138);
      }
      lVar3 = sceDeci2ExRecv(*param_3,param_3[5] + param_3[2],param_2 & 0xffff);
      if (lVar3 < 0) {
        maybe_kprintf(0x35f160);
      }
      param_3[2] = param_3[2] + (int)lVar3;
      return;
    }
    if (param_1 != 4) {
      return;
    }
    if (param_3[1] != 0) {
      maybe_kprintf(0x35f190,param_3[1]);
    }
  }
  param_3[3] = 0;
  return;
}

// 0x00112d68  size 0x174
int maybe_Tty_Write(char *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = -1;
  if (iRam00370c5c == 0) {
    lVar1 = DIntr();
    iRam00370c5c = 1;
    puRam00370c60 = &DAT_20370c80;
    pcVar4 = &DAT_20370c8c;
    iVar6 = 0;
    do {
      param_2 = param_2 + -1;
      if (param_2 == -1) break;
      cVar3 = *param_1;
      if (*param_1 == '\n') {
        *pcVar4 = '\r';
        iVar5 = iVar5 + 1;
        pcVar4 = pcVar4 + 1;
        if (0xff < iVar5) break;
        cVar3 = *param_1;
      }
      *pcVar4 = cVar3;
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
      pcVar4 = pcVar4 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 0x100);
    iRam00370c54 = iVar5 + 0xc;
    DAT_20370c80 = (undefined2)iRam00370c54;
                    /* WARNING: Read-only address (ram,0x20370c80) is written */
    lVar2 = sceDeci2ReqSend(uRam00370c50,DAT_20370c87);
    if (lVar2 < 0) {
      iRam00370c5c = 0;
      iVar6 = -1;
      if (lVar1 != 0) {
        EIntr();
        iVar6 = -1;
      }
    }
    else {
      while (iRam00370c5c != 0) {
                    /* WARNING: Read-only address (ram,0x20370c80) is written */
        sceDeci2Poll(uRam00370c50);
      }
                    /* WARNING: Read-only address (ram,0x20370c80) is written */
      if (lVar1 != 0) {
        EIntr();
      }
    }
  }
  return iVar6;
}

// 0x00112ee0  size 0xd0
int maybe_Tty_Read(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = iVar3;
  if (0 < param_2) {
    do {
      iVar3 = iVar2 + 1;
      do {
      } while (*(int *)(iRam00370c68 + 4) == 0);
      *(char *)(param_1 + iVar2) = **(char **)(iRam00370c68 + 8);
      maybe_Tty_PopChar(iRam00370c68);
      cVar1 = *(char *)(param_1 + iVar2);
      if ((cVar1 == '\n') || (cVar1 == '\r')) {
        return iVar3;
      }
      iVar2 = iVar3;
    } while (iVar3 < param_2);
  }
  return iVar3;
}

// 0x00112fb0  size 0xbc
bool maybe_Tty_Init(void)

{
  bool bVar1;
  
  FlushCache(0);
  iRam00370c50 = sceDeci2Open(0x210,0x370c50,0x112bd0);
  bVar1 = -1 < iRam00370c50;
  if (bVar1) {
    uRam00370c5c = 0;
    uRam00370c54 = 0;
    uRam00370c58 = 0;
    puRam00370c64 = &DAT_20370dc0;
    puRam00370c60 = &DAT_20370c80;
    DAT_20370c84 = 0x210;
    DAT_20370c86 = 0x45;
    DAT_20370c87 = 0x48;
    DAT_20370c88 = 0;
    DAT_20370c82 = 0;
    uRam00370c68 = maybe_Tty_SetBuffer(0x100);
  }
  return bVar1;
}

// 0x00113070  size 0x3c
/* polls SIO_ISR */

undefined8 maybe_Sio_PutRaw(undefined8 param_1)

{
  uint uVar1;
  
  do {
    uVar1 = REG_SIO_ISR;
  } while ((uVar1 & 0x8000) != 0);
  REG_SIO_TXFIFO = (char)param_1;
  return param_1;
}

// 0x001130b0  size 0xb0
void maybe_kputchar(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00306ae0;
  if (0x7d < DAT_00306ae0) {
    DAT_00306ae0 = 0;
    uRam00370f7f = 0;
    maybe_sceDeci2kputs(0x370f00);
    iVar1 = DAT_00306ae0;
  }
  if (param_1 == 10) {
    DAT_00306ae0 = 0;
    *(undefined1 *)(iVar1 + 0x370f00) = 10;
    *(undefined1 *)(iVar1 + 0x370f01) = 0;
    maybe_sceDeci2kputs();
    return;
  }
  DAT_00306ae0 = iVar1 + 1;
  *(char *)(iVar1 + 0x370f00) = (char)param_1;
  return;
}

// 0x00113160  size 0x34
/* '\n' -> "\r\n" */

void maybe_Sio_PutChar(long param_1)

{
  if (param_1 == 10) {
    maybe_Sio_PutRaw(0xd);
    maybe_Sio_PutRaw(10);
    return;
  }
  maybe_Sio_PutRaw();
  return;
}

// 0x00113198  size 0x94
int maybe_Kprintf_DoubleToInt(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = ((param_1 & 0x7fffffffffffffff) >> 0x34) - 0x433;
  if (lVar3 < -0x35) {
    return 0;
  }
  if (0xc < lVar3) {
    return 9999;
  }
  uVar2 = param_1 & 0xfffffffffffff | 0x10000000000000;
  if (lVar3 < 0) {
    uVar2 = uVar2 >> (long)(-2 - (int)lVar3);
    if ((uVar2 & 3) == 3) {
      iVar1 = (int)(uVar2 >> 2) + 1;
    }
    else {
      iVar1 = (int)(uVar2 >> 2);
    }
  }
  else {
    iVar1 = (int)(uVar2 << (long)(int)lVar3);
  }
  return iVar1;
}

// 0x00113230  size 0x160
void maybe_Kprintf_FormatDouble(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  lVar1 = __cmpdf2(param_1,0);
  if (lVar1 < 0) {
    param_1 = __subdf3(0,param_1);
    (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(0x2d);
  }
  lVar1 = __cmpdf2(param_1,DAT_0035f1c8);
  if (lVar1 < 0) {
    while (lVar1 = __cmpdf2(param_1,DAT_0035f1d0), lVar1 < 0) {
      iVar3 = iVar3 + -1;
      param_1 = __muldf3(param_1,0x4024000000000000);
    }
  }
  else {
    lVar1 = __cmpdf2(param_1,0x3ff0000000000000);
    if (-1 < lVar1) {
      while (lVar1 = __cmpdf2(param_1,0x3ff0000000000000), -1 < lVar1) {
        iVar3 = iVar3 + 1;
        param_1 = __divdf3(param_1,0x4024000000000000);
      }
    }
  }
  uVar2 = __muldf3(param_1,DAT_0035f1d8);
  uVar2 = maybe___fixdfdi(uVar2);
  uVar2 = maybe_Kprintf_DoubleToInt(uVar2);
  maybe_kprintf(0x35f1b0,uVar2);
  if (iVar3 < 0) {
    maybe_kprintf(0x35f1c0,iVar3);
    return;
  }
  maybe_kprintf(0x35f1b8,iVar3);
  return;
}

// 0x00113398  size 0x5f4
void maybe_Kprintf_Format(byte *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  ulong *puVar13;
  float fVar14;
  char acStack_d0 [80];
  
  lVar6 = DIntr();
  bVar1 = *param_1;
  bVar2 = *param_1;
  do {
    if (bVar1 == 0) {
      if (lVar6 != 0) {
        EIntr();
      }
      return;
    }
    pcVar11 = (char *)0x0;
    lVar9 = 0;
    if (bVar2 == 0x25) {
LAB_001133f8:
      pbVar3 = param_1;
      param_1 = pbVar3 + 1;
      uVar8 = (int)((*param_1 - 0x30) * 0x1000000) >> 0x18;
      if (0x48 < uVar8) goto LAB_00113944;
                    /* WARNING: Switch is manually overridden */
      switch(uVar8) {
      case 0:
        uVar8 = (int)(char)pbVar3[2] - 0x30;
        if ((uVar8 & 0xff) < 10) {
          if ((int)(char)pbVar3[3] - 0x30U < 10) {
            param_1 = pbVar3 + 3;
            uVar8 = uVar8 * 10 + -0x30 + (int)(char)pbVar3[3];
            if (0x1f < (int)uVar8) {
              uVar8 = 0x1f;
            }
          }
          else {
            param_1 = pbVar3 + 2;
          }
          pcVar11 = acStack_d0 + (0x4f - uVar8);
          for (; 0 < (int)uVar8; uVar8 = uVar8 - 1) {
            acStack_d0[0x4f - uVar8] = '0';
          }
        }
        goto LAB_001133f8;
      default:
        goto LAB_00113944;
      case 0x33:
        puVar13 = param_2 + 1;
        param_1 = pbVar3 + 2;
        (*(code *)PTR_maybe_Sio_PutChar_00306ae4)((char)*param_2);
        break;
      case 0x34:
        if (lVar9 == 0x6c) {
          uVar12 = *param_2;
        }
        else if (lVar9 == 0x68) {
          uVar12 = (ulong)(short)(ushort)*param_2;
        }
        else {
          uVar12 = (ulong)(int)(uint)*param_2;
        }
        param_2 = param_2 + 1;
        pcVar10 = acStack_d0 + 0x4f;
        acStack_d0[0x4f] = 0;
        if (uVar12 == 0) {
          pcVar10 = acStack_d0 + 0x4e;
          acStack_d0[0x4e] = 0x30;
        }
        else {
          if ((long)uVar12 < 0) {
            uVar12 = -uVar12;
            (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(0x2d);
          }
          if (uVar12 != 0) {
            do {
              cVar5 = maybe___moddi3(uVar12,10);
              pcVar10 = pcVar10 + -1;
              *pcVar10 = cVar5 + '0';
              uVar12 = maybe___divdi3(uVar12,10);
            } while (uVar12 != 0);
          }
        }
        param_1 = pbVar3 + 2;
        if ((pcVar11 != (char *)0x0) && (pcVar11 < pcVar10)) {
          pcVar10 = pcVar11;
        }
        cVar5 = *pcVar10;
        if (*pcVar10 != '\0') {
          do {
            pcVar10 = pcVar10 + 1;
            (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(cVar5);
            cVar5 = *pcVar10;
          } while (*pcVar10 != '\0');
          puVar13 = param_2;
          break;
        }
LAB_00113944:
        param_1 = pbVar3 + 2;
        puVar13 = param_2;
        break;
      case 0x35:
      case 0x36:
        fVar14 = (float)maybe___extendsfdf2(*param_2);
        puVar13 = param_2 + 1;
        if (fVar14 == 0.0) {
          param_1 = pbVar3 + 2;
          (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(0x30);
        }
        else {
          param_1 = pbVar3 + 2;
          uVar7 = maybe___sf_to_df();
          maybe_Kprintf_FormatDouble(uVar7);
        }
        break;
      case 0x38:
        lVar9 = 0x68;
        goto LAB_001133f8;
      case 0x3c:
        goto override_jmp_00113424_case_60;
      case 0x3f:
        if (lVar9 == 0x6c) {
          uVar12 = *param_2;
        }
        else if (lVar9 == 0x68) {
          uVar12 = (ulong)(ushort)*param_2;
        }
        else {
          uVar12 = (ulong)(uint)*param_2;
        }
        param_2 = param_2 + 1;
        pcVar10 = acStack_d0 + 0x4f;
        acStack_d0[0x4f] = 0;
        if (uVar12 == 0) {
          pcVar10 = acStack_d0 + 0x4e;
          acStack_d0[0x4e] = 0x30;
        }
        else {
          do {
            bVar1 = (byte)uVar12;
            pcVar10 = pcVar10 + -1;
            uVar12 = uVar12 >> 3;
            *pcVar10 = (bVar1 & 7) + 0x30;
          } while (uVar12 != 0);
        }
        param_1 = pbVar3 + 2;
        if ((pcVar11 != (char *)0x0) && (pcVar11 < pcVar10)) {
          pcVar10 = pcVar11;
        }
        cVar5 = *pcVar10;
        if (*pcVar10 == '\0') goto LAB_00113944;
        do {
          pcVar10 = pcVar10 + 1;
          (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(cVar5);
          cVar5 = *pcVar10;
        } while (*pcVar10 != '\0');
        puVar13 = param_2;
        break;
      case 0x43:
        pcVar11 = *(char **)param_2;
        cVar5 = *pcVar11;
        puVar13 = param_2 + 1;
        if (*pcVar11 == '\0') {
          param_1 = pbVar3 + 2;
          (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(0x28);
          (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(0x6e);
          (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(0x75);
          (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(0x6c);
          (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(0x6c);
          (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(0x29);
        }
        else {
          param_1 = pbVar3 + 2;
          do {
            pcVar11 = pcVar11 + 1;
            (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(cVar5);
            cVar5 = *pcVar11;
          } while (cVar5 != '\0');
        }
        break;
      case 0x45:
        if (lVar9 == 0x6c) {
          uVar12 = *param_2;
        }
        else if (lVar9 == 0x68) {
          uVar12 = (ulong)(ushort)*param_2;
        }
        else {
          uVar12 = (ulong)(uint)*param_2;
        }
        param_2 = param_2 + 1;
        pcVar10 = acStack_d0 + 0x4f;
        acStack_d0[0x4f] = 0;
        if (uVar12 == 0) {
          pcVar10 = acStack_d0 + 0x4e;
          acStack_d0[0x4e] = 0x30;
        }
        else {
          do {
            cVar5 = maybe___umoddi3(uVar12,10);
            pcVar10 = pcVar10 + -1;
            *pcVar10 = cVar5 + '0';
            uVar12 = maybe___udivdi3(uVar12,10);
          } while (uVar12 != 0);
        }
        param_1 = pbVar3 + 2;
        if ((pcVar11 != (char *)0x0) && (pcVar11 < pcVar10)) {
          pcVar10 = pcVar11;
        }
        cVar5 = *pcVar10;
        if (*pcVar10 == '\0') goto LAB_00113944;
        do {
          pcVar10 = pcVar10 + 1;
          (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(cVar5);
          cVar5 = *pcVar10;
        } while (*pcVar10 != '\0');
        puVar13 = param_2;
        break;
      case 0x48:
        if (lVar9 == 0x6c) {
          uVar12 = *param_2;
        }
        else if (lVar9 == 0x68) {
          uVar12 = (ulong)(ushort)*param_2;
        }
        else {
          uVar12 = (ulong)(uint)*param_2;
        }
        param_2 = param_2 + 1;
        pcVar10 = acStack_d0 + 0x4f;
        acStack_d0[0x4f] = 0;
        if (uVar12 == 0) {
          pcVar10 = acStack_d0 + 0x4e;
          acStack_d0[0x4e] = 0x30;
        }
        else {
          do {
            cVar5 = (char)(uVar12 & 0xf);
            cVar4 = cVar5 + '0';
            if (9 < (uVar12 & 0xf)) {
              cVar4 = cVar5 + 'W';
            }
            pcVar10 = pcVar10 + -1;
            uVar12 = uVar12 >> 4;
            *pcVar10 = cVar4;
          } while (uVar12 != 0);
        }
        param_1 = pbVar3 + 2;
        if ((pcVar11 != (char *)0x0) && (pcVar11 < pcVar10)) {
          pcVar10 = pcVar11;
        }
        cVar5 = *pcVar10;
        if (*pcVar10 == '\0') goto LAB_00113944;
        do {
          pcVar10 = pcVar10 + 1;
          (*(code *)PTR_maybe_Sio_PutChar_00306ae4)(cVar5);
          cVar5 = *pcVar10;
        } while (*pcVar10 != '\0');
        puVar13 = param_2;
      }
    }
    else {
      param_1 = param_1 + 1;
      (*(code *)PTR_maybe_Sio_PutChar_00306ae4)();
      puVar13 = param_2;
    }
    bVar1 = *param_1;
    bVar2 = *param_1;
    param_2 = puVar13;
  } while( true );
override_jmp_00113424_case_60:
  lVar9 = 0x6c;
  goto LAB_001133f8;
}

// 0x00113990  size 0x38
void maybe_kprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  maybe_Kprintf_Format(param_1,&uStack_38);
  return;
}

// 0x001139c8  size 0x60
/* 28 callers incl. libmpeg errors */

void maybe_scePrintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  puVar1 = PTR_maybe_Sio_PutChar_00306ae4;
  PTR_maybe_Sio_PutChar_00306ae4 = maybe_kputchar;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  maybe_Kprintf_Format(param_1,&uStack_38);
  PTR_maybe_Sio_PutChar_00306ae4 = puVar1;
  return;
}

// 0x00113a58  size 0x18
undefined4 maybe_sceSifGetSreg(int param_1)

{
  return *(undefined4 *)(param_1 * 4 + 0x371200);
}

// 0x00113aa0  size 0x280
void sceSifInitCmd(void)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  DIntr();
  if (DAT_00306ae8 != 0) {
    EIntr();
    return;
  }
  DAT_00306ae8 = 1;
  puVar2 = (undefined4 *)0x371080;
  puRam00371058 = &DAT_20370f80;
  uRam00371074 = 0x371200;
  puRam0037105c = &DAT_20371000;
  uRam00371068 = 0x20;
  uRam00371060 = 0;
  uRam00371064 = 0x371080;
  uRam0037106c = 0;
  uRam00371070 = 0;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 3;
  } while ((int)puVar2 < 0x371200);
  iVar6 = 0x1f;
  puVar2 = (undefined4 *)0x37127c;
  do {
    *puVar2 = 0;
    iVar6 = iVar6 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar6);
  puRam00371080 = &LAB_00113a48;
  puRam0037108c = &LAB_00113a28;
  uRam00371090 = 0x371058;
  uRam00371084 = 0x371058;
  EIntr();
  FlushCache(0);
  uVar1 = REG_DMAC_STAT;
  if ((uVar1 & 0x20) != 0) {
    REG_DMAC_STAT = 0x20;
  }
  uVar1 = REG_DMAC_5_SIF0_CHCR;
  if ((uVar1 & 0x100) == 0) {
    sceSifSetDChain();
  }
  uRam00371054 = AddDmacHandler(5,0x114008,0);
  EnableDmac(5);
  lVar3 = sceSifGetReg(0xffffffff80000000);
  uRam00371060 = (undefined4)lVar3;
  if (lVar3 != 0) {
    uRam00371050 = 0x370f80;
    sceSifSendCmd(0xffffffff80000000,0x371040,0x14,0,0,0);
    return;
  }
  uRam00371060 = 0;
  do {
    uVar4 = sceSifGetReg(4);
  } while ((uVar4 & 0x20000) == 0);
  uVar5 = sceSifGetReg(2);
  uRam00371060 = (undefined4)uVar5;
  sceSifSetReg(0xffffffff80000000,uVar5);
  sceSifSetReg(0xffffffff80000001,0x371058);
  uRam00371050 = 0x370f80;
  uRam0037104c = 0;
  sceSifSendCmd(0xffffffff80000002,0x371040,0x14,0,0,0);
  return;
}

// 0x00113d20  size 0x34
void sceSifExitCmd(void)

{
  DisableDmac(5);
  RemoveDmacHandler(5,uRam00371054);
  DAT_00306ae8 = 0;
  return;
}

// 0x00113d88  size 0x78
void maybe_sceSifGetCmdHandler(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < 0) {
    iVar3 = ((uint)param_1 & 0x7fffffff) * 0xc;
    puVar1 = (undefined4 *)(iVar3 + iRam00371064);
    puVar1[1] = param_3;
    *puVar1 = param_2;
    iVar2 = iRam00371064;
  }
  else {
    iVar3 = (uint)param_1 * 0xc;
    puVar1 = (undefined4 *)(iVar3 + iRam0037106c);
    puVar1[1] = param_3;
    *puVar1 = param_2;
    iVar2 = iRam0037106c;
  }
  *(undefined1 **)(iVar3 + iVar2 + 8) = &_mips_gp0_value;
  return;
}

// 0x00113e00  size 0x4c
void maybe_sceSifRemoveCmdHandler(long param_1)

{
  if (param_1 < 0) {
    *(undefined4 *)(((uint)param_1 & 0x7fffffff) * 0xc + iRam00371064) = 0;
    return;
  }
  *(undefined4 *)((uint)param_1 * 0xc + iRam0037106c) = 0;
  return;
}

// 0x00113e50  size 0x134
undefined8
maybe__sceSifSendCmd
          (uint param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5,
          uint param_6,long param_7)

{
  undefined8 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint auStack_80 [8];
  
  if (0x60 < (int)param_4 - 0x10U) {
    return 0;
  }
  iVar4 = 0;
  puVar3 = (uint *)param_3;
  if (param_7 < 1) {
    puVar3[1] = 0;
    *puVar3 = (uint)(byte)*puVar3;
  }
  else {
    auStack_80[2] = (uint)param_7;
    puVar3[1] = param_6;
    iVar4 = 1;
    *puVar3 = (uint)(byte)*puVar3 | auStack_80[2] << 8;
    auStack_80[3] = 0;
    auStack_80[0] = param_5;
    auStack_80[1] = param_6;
    if ((param_2 & 4) != 0) {
      sceSifWriteBackDCache();
      iVar2 = 0x10;
      goto LAB_00113ef0;
    }
  }
  iVar2 = iVar4 << 4;
LAB_00113ef0:
  *(uint **)((int)auStack_80 + iVar2) = puVar3;
  *(undefined4 *)((int)auStack_80 + iVar2 + 4) = uRam00371060;
  *(int *)((int)auStack_80 + iVar2 + 8) = (int)param_4;
  puVar3[2] = param_1;
  *(byte *)puVar3 = (byte)param_4;
  *(undefined4 *)((int)auStack_80 + iVar2 + 0xc) = 0x44;
  sceSifWriteBackDCache(param_3,param_4);
  if ((param_2 & 1) == 0) {
    uVar1 = sceSifSetDma(auStack_80,iVar4 + 1);
  }
  else {
    uVar1 = isceSifSetDma(auStack_80);
  }
  return uVar1;
}

// 0x00113f88  size 0x3c
void sceSifSendCmd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  maybe__sceSifSendCmd(param_1,0,param_2,param_3,param_4,param_5,param_6);
  return;
}

// 0x00113fc8  size 0x3c
void isceSifSendCmd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  maybe__sceSifSendCmd(param_1,1,param_2,param_3,param_4,param_5,param_6);
  return;
}

