// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0010c000 - 0x00110000
#include "ghidra_types.h"

// 0x0010c068  size 0x26c
undefined2 maybe_Mpeg_GetVLC(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined2 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = 0;
  uVar6 = REG_IPU_CTRL;
  if ((uVar6 & 0x80004000) == 0x80000000) {
    iVar1 = *(int *)(param_1 + 0x10a0);
    while (iVar1 == 0) {
      bVar2 = 5000 < iVar7;
      iVar7 = iVar7 + 1;
      if (bVar2) {
        maybe_Mpeg_CallbackBackground(*(undefined4 *)(param_1 + 0x870));
        iVar7 = 0;
      }
      uVar6 = REG_IPU_CTRL;
      if ((uVar6 & 0x80004000) != 0x80000000) break;
      iVar1 = *(int *)(param_1 + 0x10a0);
    }
  }
  uVar6 = param_2 << 0x1a | 0x30000000;
  REG_IPU_CMD = uVar6;
  lVar5 = REG_IPU_CMD;
  *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(&DAT_003068b0 + ((int)uVar6 >> 0x1c) * 4);
  if (lVar5 < 0) {
    iVar7 = *(int *)(param_1 + 0x10a0);
    while (iVar7 == 0) {
      bVar2 = 5000 < iVar8;
      iVar8 = iVar8 + 1;
      if (bVar2) {
        maybe_Mpeg_CallbackBackground(*(undefined4 *)(param_1 + 0x870));
        iVar8 = 0;
      }
      lVar5 = REG_IPU_CMD;
      if (-1 < lVar5) goto LAB_0010c24c;
      iVar7 = *(int *)(param_1 + 0x10a0);
    }
    lVar5 = DIntr();
    uVar6 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar6 | 0x10000;
    REG_DMAC_4_IPU_TO_CHCR = 0;
    REG_DMAC_3_IPU_FROM_CHCR = 0;
    uVar6 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar6 & 0xfffeffff;
    if (lVar5 != 0) {
      EIntr();
    }
    REG_DMAC_3_IPU_FROM_QWC = 0;
    REG_DMAC_4_IPU_TO_QWC = 0;
    uVar4 = 0;
    REG_IPU_CTRL = 0x40000000;
  }
  else {
LAB_0010c24c:
    lVar3 = REG_IPU_TOP;
    uVar6 = REG_IPU_BP;
    *(int *)(param_1 + 0x850) = (int)lVar3;
    if (lVar3 < 0) {
      uVar6 = -(uVar6 & 0x1f) & 0x1f;
    }
    else {
      uVar6 = 0x20;
    }
    *(uint *)(param_1 + 0x854) = uVar6;
    uVar4 = (undefined2)lVar5;
    *(uint *)(param_1 + 0x134) = (uint)((int)lVar5 == 0);
  }
  return uVar4;
}

// 0x0010c2d8  size 0x11c
uint maybe_Mpeg_ShowBits(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  if ((*(int *)(iVar6 + 0x830) == 0) && (param_2 <= *(int *)(iVar6 + 0x854))) {
    uVar4 = *(uint *)(iVar6 + 0x850);
  }
  else {
    uVar4 = REG_IPU_CTRL;
    iVar5 = 0;
    if ((uVar4 & 0x80004000) == 0x80000000) {
      iVar1 = *(int *)(iVar6 + 0x10a0);
      while (iVar1 == 0) {
        bVar2 = 5000 < iVar5;
        iVar5 = iVar5 + 1;
        if (bVar2) {
          maybe_Mpeg_CallbackBackground(*(undefined4 *)(iVar6 + 0x870));
          iVar5 = 0;
        }
        uVar4 = REG_IPU_CTRL;
        if ((uVar4 & 0x80004000) != 0x80000000) break;
        iVar1 = *(int *)(iVar6 + 0x10a0);
      }
    }
    REG_IPU_CMD = 0x40000000;
    *(undefined4 *)(iVar6 + 0x830) = DAT_003068c0;
    uVar3 = maybe_Ipu_SyncData(param_1);
    *(undefined4 *)(iVar6 + 0x850) = uVar3;
    *(undefined4 *)(iVar6 + 0x854) = 0x20;
    uVar4 = *(uint *)(iVar6 + 0x850);
  }
  return uVar4 >> (-param_2 & 0x1fU);
}

// 0x0010c3f8  size 0x10c
void maybe_Mpeg_FlushBits(undefined8 param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  uVar3 = REG_IPU_CTRL;
  iVar6 = (int)param_1;
  if ((uVar3 & 0x80004000) == 0x80000000) {
    iVar1 = *(int *)(iVar6 + 0x10a0);
    while (iVar1 == 0) {
      bVar2 = 5000 < iVar5;
      iVar5 = iVar5 + 1;
      if (bVar2) {
        maybe_Mpeg_CallbackBackground(*(undefined4 *)(iVar6 + 0x870));
        iVar5 = 0;
      }
      uVar3 = REG_IPU_CTRL;
      if ((uVar3 & 0x80004000) != 0x80000000) break;
      iVar1 = *(int *)(iVar6 + 0x10a0);
    }
  }
  REG_IPU_CMD = param_2 | 0x40000000;
  *(undefined4 *)(iVar6 + 0x830) =
       *(undefined4 *)(&DAT_003068b0 + ((param_2 | 0x40000000) >> 0x1c) * 4);
  uVar4 = maybe_Ipu_SyncData(param_1);
  *(undefined4 *)(iVar6 + 0x854) = 0x20;
  *(undefined4 *)(iVar6 + 0x850) = uVar4;
  return;
}

// 0x0010c508  size 0x16c
uint maybe_Mpeg_GetBits(undefined8 param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  uVar1 = REG_IPU_CTRL;
  iVar5 = (int)param_1;
  if ((uVar1 & 0x80004000) == 0x80000000) {
    if (*(int *)(iVar5 + 0x10a0) == 0) {
      do {
        bVar2 = 5000 < iVar4;
        iVar4 = iVar4 + 1;
        if (bVar2) {
          maybe_Mpeg_CallbackBackground(*(undefined4 *)(iVar5 + 0x870));
          iVar4 = 0;
        }
        uVar1 = REG_IPU_CTRL;
        if ((uVar1 & 0x80004000) != 0x80000000) {
          iVar4 = *(int *)(iVar5 + 0x830);
          goto LAB_0010c5bc;
        }
      } while (*(int *)(iVar5 + 0x10a0) == 0);
      iVar4 = *(int *)(iVar5 + 0x830);
    }
    else {
      iVar4 = *(int *)(iVar5 + 0x830);
    }
  }
  else {
    iVar4 = *(int *)(iVar5 + 0x830);
  }
LAB_0010c5bc:
  if ((iVar4 != 0) || (*(int *)(iVar5 + 0x854) < (int)param_2)) {
    REG_IPU_CMD = 0x40000000;
    *(undefined4 *)(iVar5 + 0x830) = DAT_003068c0;
    uVar3 = maybe_Ipu_SyncData(param_1);
    *(undefined4 *)(iVar5 + 0x850) = uVar3;
  }
  *(undefined4 *)(iVar5 + 0x854) = 0x20;
  uVar1 = *(uint *)(iVar5 + 0x850);
  REG_IPU_CMD = param_2 | 0x40000000;
  *(undefined4 *)(iVar5 + 0x830) =
       *(undefined4 *)(&DAT_003068b0 + ((param_2 | 0x40000000) >> 0x1c) * 4);
  uVar3 = maybe_Ipu_SyncData(param_1);
  *(undefined4 *)(iVar5 + 0x850) = uVar3;
  return uVar1 >> (0x20 - param_2 & 0x1f);
}

// 0x0010c678  size 0x80
void maybe_Mpeg_ByteAlign(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  
  maybe_Ipu_Sync();
  uVar1 = REG_IPU_BP;
  if ((-(uVar1 & 7) & 7) != 0) {
    maybe_Mpeg_FlushBits(param_1);
  }
  while ((lVar2 = maybe_Mpeg_ShowBits(param_1,0x18), lVar2 != 1 &&
         (*(int *)((int)param_1 + 0x10a0) == 0))) {
    maybe_Mpeg_FlushBits(param_1,8);
  }
  return;
}

// 0x0010c6f8  size 0x64
undefined8 maybe_Mpeg_PictureCodingExtension(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = maybe_Mpeg_GetBits(param_1,5);
  *(undefined4 *)((int)param_1 + 0x1cc) = uVar1;
  lVar2 = maybe_Mpeg_GetBits(param_1,1);
  if (lVar2 != 0) {
    maybe_Mpeg_GetBits(param_1,1);
    maybe_Mpeg_FlushBits(param_1,7);
    maybe_Mpeg_ExtraBitInformation(param_1);
  }
  return 0;
}

// 0x0010c760  size 0x11c
undefined4 maybe_Mpeg_GetHeader(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x10a0);
  while( true ) {
    while( true ) {
      while( true ) {
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        maybe_Mpeg_ByteAlign(param_1);
        uVar2 = maybe_Mpeg_GetBits(param_1,0x20);
        if (uVar2 != 0x1b3) break;
        maybe_Mpeg_SequenceHeader(param_1);
        iVar1 = *(int *)(iVar3 + 0x10a0);
      }
      if (uVar2 < 0x1b4) break;
      if (uVar2 == 0x1b7) {
        return 0;
      }
      if (uVar2 == 0x1b8) {
        maybe_Mpeg_GopHeader(param_1);
        iVar1 = *(int *)(iVar3 + 0x10a0);
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x10a0);
      }
    }
    if (uVar2 == 0x100) break;
    iVar1 = *(int *)(iVar3 + 0x10a0);
  }
  maybe_Mpeg_PictureHeader(param_1);
  auStack_a0[0] = 5;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  maybe_Mpeg_DispatchCallback(*(undefined4 *)(iVar3 + 0x870),auStack_a0);
  *(undefined8 *)(iVar3 + 0x848) = uStack_90;
  *(undefined8 *)(iVar3 + 0x840) = uStack_98;
  return *(undefined4 *)(iVar3 + 0x168);
}

// 0x0010c880  size 0xc4
void maybe_Mpeg_PictureHeader(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = maybe_Mpeg_GetBits(param_1,10);
  uVar1 = maybe_Mpeg_GetBits(param_1,3);
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x168) = uVar1;
  maybe_Mpeg_GetBits(param_1,0x10);
  iVar3 = *(int *)(iVar4 + 0x168);
  if (iVar3 - 2U < 2) {
    uVar1 = maybe_Mpeg_GetBits(param_1,1);
    *(undefined4 *)(iVar4 + 0x16c) = uVar1;
    uVar1 = maybe_Mpeg_GetBits(param_1,3);
    *(undefined4 *)(iVar4 + 0x170) = uVar1;
    iVar3 = *(int *)(iVar4 + 0x168);
  }
  if (iVar3 == 3) {
    uVar1 = maybe_Mpeg_GetBits(param_1,1);
    *(undefined4 *)(iVar4 + 0x174) = uVar1;
    uVar1 = maybe_Mpeg_GetBits(param_1,3);
    *(undefined4 *)(iVar4 + 0x178) = uVar1;
  }
  maybe_Mpeg_ExtraBitInformation(param_1);
  maybe_Mpeg_ExtensionAndUserData(param_1);
  maybe_Mpeg_IsFrameComplete(param_1,uVar2);
  return;
}

// 0x0010c948  size 0x124
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Mpeg_ExtensionAndUserData(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uStack_80 = _PTR_LAB_0035ed60;
  uStack_78 = _PTR_maybe_Mpeg_QuantMatrixExt_0035ed68;
  uStack_70 = _PTR_maybe_Mpeg_SequenceDisplayExtension_0035ed70;
  uStack_68 = _PTR_LAB_0035ed78;
  uStack_60 = _PTR_maybe_Mpeg_PictureCodingExt2_0035ed80;
  puStack_58 = PTR_LAB_0035ed88;
  maybe_Mpeg_ByteAlign();
  while( true ) {
    while (lVar2 = maybe_Mpeg_ShowBits(param_1,0x20), lVar2 == 0x1b5) {
      maybe_Mpeg_FlushBits(param_1,0x20);
      uVar1 = maybe_Mpeg_GetBits(param_1,4);
      if (10 < uVar1) {
        uVar1 = 0;
      }
      (**(code **)((int)&uStack_80 + (int)uVar1 * 4))(param_1);
      maybe_Mpeg_ByteAlign(param_1);
    }
    if (lVar2 != 0x1b2) break;
    maybe_Mpeg_FlushBits(param_1,0x20);
    maybe_Mpeg_ByteAlign(param_1);
  }
  return;
}

// 0x0010ca70  size 0x1f0
void maybe_Mpeg_PictureCodingExt2(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = maybe_Mpeg_GetBits(param_1,4);
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0x17c) = uVar2;
  uVar2 = maybe_Mpeg_GetBits(param_1,4);
  *(undefined4 *)(iVar5 + 0x180) = uVar2;
  uVar2 = maybe_Mpeg_GetBits(param_1,4);
  *(undefined4 *)(iVar5 + 0x184) = uVar2;
  uVar2 = maybe_Mpeg_GetBits(param_1,4);
  *(undefined4 *)(iVar5 + 0x188) = uVar2;
  iVar3 = maybe_Mpeg_GetBits(param_1,2);
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xfffcffff | iVar3 << 0x10;
  uVar2 = maybe_Mpeg_GetBits(param_1,2);
  *(undefined4 *)(iVar5 + 0x18c) = uVar2;
  if (*(int *)(iVar5 + 0xec) == 0) {
    *(undefined4 *)(iVar5 + 0xec) = uVar2;
  }
  uVar2 = maybe_Mpeg_GetBits(param_1,1);
  *(undefined4 *)(iVar5 + 400) = uVar2;
  uVar2 = maybe_Mpeg_GetBits(param_1,1);
  *(undefined4 *)(iVar5 + 0x194) = uVar2;
  uVar2 = maybe_Mpeg_GetBits(param_1,1);
  *(undefined4 *)(iVar5 + 0x198) = uVar2;
  iVar3 = maybe_Mpeg_GetBits(param_1,1);
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xffbfffff | iVar3 << 0x16;
  iVar3 = maybe_Mpeg_GetBits(param_1,1);
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xffdfffff | iVar3 << 0x15;
  iVar3 = maybe_Mpeg_GetBits(param_1,1);
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xffefffff | iVar3 << 0x14;
  uVar2 = maybe_Mpeg_GetBits(param_1,1);
  *(undefined4 *)(iVar5 + 0x19c) = uVar2;
  maybe_Mpeg_GetBits(param_1,1);
  uVar2 = maybe_Mpeg_GetBits(param_1,1);
  *(undefined4 *)(iVar5 + 0x1a0) = uVar2;
  lVar4 = maybe_Mpeg_GetBits(param_1,1);
  if (lVar4 == 0) {
    return;
  }
  maybe_Mpeg_GetBits(param_1,1);
  maybe_Mpeg_GetBits(param_1,3);
  maybe_Mpeg_GetBits(param_1,1);
  maybe_Mpeg_GetBits(param_1,7);
  maybe_Mpeg_GetBits(param_1,8);
  return;
}

// 0x0010cc60  size 0x44
void maybe_Mpeg_ExtraBitInformation(undefined8 param_1)

{
  long lVar1;
  
  while (lVar1 = maybe_Mpeg_GetBits(param_1,1), lVar1 != 0) {
    maybe_Mpeg_FlushBits(param_1,8);
  }
  return;
}

// 0x0010cca8  size 0x74
void maybe_Mpeg_IsFrameComplete(int param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = false;
  lVar3 = 0;
  if (*(int *)(param_1 + 0x168) == 3) {
LAB_0010cce0:
    iVar2 = *(int *)(param_1 + 0x864);
  }
  else {
    if (param_2 != 0) {
      if (param_2 < 0) {
        bVar1 = *(int *)(param_1 + 0x86c) == 0;
        *(undefined4 *)(param_1 + 0x86c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x86c) = 0;
      }
      lVar3 = param_2;
      goto LAB_0010cce0;
    }
    iVar2 = *(int *)(param_1 + 0x864);
  }
  iVar2 = iVar2 + (int)param_2;
  *(int *)(param_1 + 0x1c4) = iVar2;
  if (bVar1) {
    if (lVar3 < param_2) {
      iVar2 = *(int *)(param_1 + 0x868);
      goto LAB_0010cd08;
    }
    *(int *)(param_1 + 0x1c4) = iVar2 + 0x400;
  }
  iVar2 = *(int *)(param_1 + 0x868);
LAB_0010cd08:
  if (iVar2 < *(int *)(param_1 + 0x1c4)) {
    iVar2 = *(int *)(param_1 + 0x1c4);
  }
  *(int *)(param_1 + 0x868) = iVar2;
  return;
}

// 0x0010cd20  size 0xa0
void maybe_Mpeg_GopHeader(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x100) = 0;
  *(undefined4 *)(iVar2 + 0x86c) = 1;
  *(int *)(iVar2 + 0x864) = *(int *)(iVar2 + 0x868) + 1;
  maybe_Mpeg_GetBits(param_1,1);
  maybe_Mpeg_GetBits(param_1,5);
  maybe_Mpeg_GetBits(param_1,6);
  maybe_Mpeg_GetBits(param_1,1);
  maybe_Mpeg_GetBits(param_1,6);
  maybe_Mpeg_GetBits(param_1,6);
  uVar1 = maybe_Mpeg_GetBits(param_1,1);
  *(undefined4 *)(iVar2 + 0x1bc) = uVar1;
  uVar1 = maybe_Mpeg_GetBits(param_1,1);
  *(undefined4 *)(iVar2 + 0x1c0) = uVar1;
  maybe_Mpeg_ExtensionAndUserData(param_1);
  return;
}

// 0x0010cdc0  size 0xc4
/* "load_chroma_intra_quantizer_matrix" */

void maybe_Mpeg_QuantMatrixExtension(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = maybe_Mpeg_GetBits(param_1,1);
  *(int *)((int)param_1 + 0x858) = (int)lVar1;
  if (lVar1 != 0) {
    maybe_Ipu_Sync(param_1);
    maybe_Ipu_Command(param_1,0x50000000);
    maybe_Ipu_Sync(param_1);
  }
  lVar1 = maybe_Mpeg_GetBits(param_1,1);
  *(int *)((int)param_1 + 0x85c) = (int)lVar1;
  if (lVar1 != 0) {
    maybe_Ipu_Sync(param_1);
    maybe_Ipu_Command(param_1,0x58000000);
    maybe_Ipu_Sync(param_1);
  }
  lVar1 = maybe_Mpeg_GetBits(param_1,1);
  if (lVar1 != 0) {
    maybe_Mpeg_Error(param_1,0x35ed90);
  }
  lVar1 = maybe_Mpeg_GetBits(param_1,1);
  if (lVar1 == 0) {
    return;
  }
  maybe_Mpeg_Error(param_1,0x35edb8);
  return;
}

// 0x0010ce88  size 0xf4
void maybe_Mpeg_PictureDisplayExtension(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x154) == 0) {
    if (*(int *)(iVar3 + 0x18c) == 3) {
      iVar5 = 2;
      if (*(int *)(iVar3 + 0x19c) != 0) {
        iVar5 = 3;
      }
      goto LAB_0010cef0;
    }
  }
  else {
    iVar5 = 2;
    if (*(int *)(iVar3 + 0x19c) != 0) {
      if (*(int *)(iVar3 + 400) != 0) {
        iVar5 = 3;
      }
      goto LAB_0010cef0;
    }
  }
  iVar5 = 1;
LAB_0010cef0:
  iVar4 = 0;
  if (iVar5 != 0) {
    do {
      uVar1 = maybe_Mpeg_GetBits(param_1,0x10);
      iVar2 = iVar4 * 4;
      *(undefined4 *)(iVar3 + 0x1a4 + iVar2) = uVar1;
      maybe_Mpeg_GetBits(param_1,1);
      iVar4 = iVar4 + 1;
      uVar1 = maybe_Mpeg_GetBits(param_1,0x10);
      *(undefined4 *)(iVar3 + 0x1b0 + iVar2) = uVar1;
      maybe_Mpeg_GetBits(param_1,1);
    } while (iVar4 < iVar5);
  }
  return;
}

// 0x0010cf80  size 0x90
void maybe_Mpeg_SequenceDisplayExtension(undefined8 param_1)

{
  maybe_Mpeg_GetBits(param_1,1);
  maybe_Mpeg_GetBits(param_1,8);
  maybe_Mpeg_GetBits(param_1,1);
  maybe_Mpeg_GetBits(param_1,7);
  maybe_Mpeg_GetBits(param_1,1);
  maybe_Mpeg_GetBits(param_1,0x14);
  maybe_Mpeg_GetBits(param_1,1);
  maybe_Mpeg_GetBits(param_1,0x16);
  maybe_Mpeg_GetBits(param_1,1);
  maybe_Mpeg_GetBits(param_1,0x16);
  return;
}

// 0x0010d010  size 0xcc
/* "odd number of field pictures" */

long maybe_Mpeg_DecodePicture(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 0x18c);
  if ((iVar2 == 3) && (*(int *)(iVar3 + 0x138) != 0)) {
    maybe_Mpeg_Error(param_1,0x35ede8);
    *(undefined4 *)(iVar3 + 0x138) = 0;
    iVar2 = *(int *)(iVar3 + 0x18c);
  }
  if (iVar2 == 2) {
    iVar2 = *(int *)(iVar3 + 0x1f8);
  }
  else {
    if (iVar2 < 3) {
      if (iVar2 == 1) {
        iVar2 = *(int *)(iVar3 + 0x1e8);
        goto LAB_0010d0ac;
      }
      iVar2 = *(int *)(iVar3 + 0x1d8);
    }
    else {
      if (iVar2 == 3) {
        iVar2 = *(int *)(iVar3 + 0x1d8);
        goto LAB_0010d0ac;
      }
      iVar2 = *(int *)(iVar3 + 0x1d8);
    }
    maybe_Mpeg_Error(param_1,0x35ee08);
  }
LAB_0010d0ac:
  lVar1 = maybe_Mpeg_DecodePictureData(param_1);
  if (lVar1 != 0) {
    *(undefined4 *)(iVar2 + 0x28) = 1;
  }
  return lVar1;
}

// 0x0010d0e0  size 0x90
void maybe_Mpeg_OutputPicture(undefined8 param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (param_3 != 0) {
    if (*(int *)(iVar4 + 0x18c) == 3) {
      if (*(int *)(iVar4 + 0x168) == 3) {
        uVar1 = *(undefined4 *)(iVar4 + 0x1dc);
      }
      else {
        uVar1 = *(undefined4 *)(iVar4 + 0x1d0);
      }
      maybe_Mpeg_OutputFrame(param_1,uVar1,param_2 + -1);
      iVar3 = *(int *)(iVar4 + 0x110);
      goto LAB_0010d150;
    }
    if (*(int *)(iVar4 + 0x168) == 3) {
      uVar1 = *(undefined4 *)(iVar4 + 0x1ec);
      uVar2 = *(undefined4 *)(iVar4 + 0x1fc);
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0x1e0);
      uVar2 = *(undefined4 *)(iVar4 + 0x1f0);
    }
    maybe_Mpeg_OutputField(param_1,uVar1,uVar2,param_2 + -1);
  }
  iVar3 = *(int *)(iVar4 + 0x110);
LAB_0010d150:
  if (iVar3 == 1) {
    *(undefined4 *)(iVar4 + 0x110) = 2;
  }
  return;
}

// 0x0010d170  size 0x2b4
bool maybe_Mpeg_ReorderFrames(int param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 4;
  iVar6 = *(int *)(param_1 + 0x18c);
  iVar3 = *(int *)(param_1 + 0x168);
  iVar5 = 0;
  bVar8 = false;
  if (iVar6 == 3) {
    iVar7 = 2;
  }
  if (iVar3 == 3) {
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1dc);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1ec);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x1fc);
    if (iVar7 <= *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xbc)) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      *(undefined4 *)(param_1 + 0x1bc) = 0;
    }
    if (*(int *)(param_1 + 0x100) == 0) {
      if (*(int *)(param_1 + 0x1c0) != 0) {
        iVar3 = *(int *)(param_1 + 0x1bc);
        goto LAB_0010d1f0;
      }
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1bc);
LAB_0010d1f0:
      if (iVar3 == 0) {
        iVar6 = *(int *)(param_1 + 0x1e0);
        *(undefined4 *)(*(int *)(param_1 + 0x1d0) + 0x28) = 0;
        iVar3 = *(int *)(param_1 + 0x1f0);
        *(undefined4 *)(iVar6 + 0x28) = 0;
        *(undefined4 *)(iVar3 + 0x28) = 0;
        iVar6 = *(int *)(param_1 + 0x18c);
        *(undefined4 *)(param_1 + 0x100) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x100) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    if (iVar6 == 3) {
      if (*(int *)(*(int *)(param_1 + 0x1d0) + 0x28) == 1) {
        iVar3 = *(int *)(param_1 + 0x1d4);
      }
      else {
        if (*(int *)(param_1 + 0x1bc) == 0) goto LAB_0010d360;
        iVar3 = *(int *)(param_1 + 0x1d4);
      }
    }
    else {
      if (*(int *)(*(int *)(param_1 + 0x1e0) + 0x28) == 1) {
        if (*(int *)(*(int *)(param_1 + 0x1f0) + 0x28) != 1) {
          iVar3 = *(int *)(param_1 + 0x1bc);
          goto LAB_0010d274;
        }
        iVar3 = *(int *)(param_1 + 0x1e4);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x1bc);
LAB_0010d274:
        if (iVar3 == 0) goto LAB_0010d360;
        iVar3 = *(int *)(param_1 + 0x1e4);
      }
      if (*(int *)(iVar3 + 0x28) != 1) goto LAB_0010d360;
      iVar3 = *(int *)(param_1 + 500);
    }
    bVar8 = *(int *)(iVar3 + 0x28) == 1;
  }
  else {
    if (param_2 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x1d4);
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1d0);
      uVar1 = *(undefined4 *)(param_1 + 0x1e4);
      *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1e0);
      uVar2 = *(undefined4 *)(param_1 + 0x1f0);
      *(undefined4 *)(param_1 + 0x1d0) = uVar4;
      *(undefined4 *)(param_1 + 0x1e0) = uVar1;
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 500);
      *(undefined4 *)(param_1 + 500) = uVar2;
      uVar4 = *(undefined4 *)(param_1 + 0x1d4);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x1d4);
    }
    *(undefined4 *)(param_1 + 0x1d8) = uVar4;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e4);
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 500);
    if (iVar6 == 3) {
      if (iVar3 == 2) {
        iVar3 = *(int *)(param_1 + 0x1d0);
LAB_0010d34c:
        if (*(int *)(iVar3 + 0x28) == 1) goto LAB_0010d358;
      }
      else {
        bVar8 = true;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 500);
      if (iVar6 != 1) {
        iVar7 = *(int *)(param_1 + 0x1e4);
      }
      if (iVar3 == 2) {
        if (param_2 == 0) {
          iVar3 = *(int *)(param_1 + 0x1e0);
        }
        else {
          if (*(int *)(iVar7 + 0x28) == 1) {
            bVar8 = true;
            goto LAB_0010d360;
          }
          iVar3 = *(int *)(param_1 + 0x1e0);
        }
        if (*(int *)(iVar3 + 0x28) == 1) {
          iVar3 = *(int *)(param_1 + 0x1f0);
          goto LAB_0010d34c;
        }
      }
      else {
LAB_0010d358:
        bVar8 = true;
      }
    }
  }
LAB_0010d360:
  if (iVar6 == 2) {
    iVar5 = *(int *)(param_1 + 0x1f8);
  }
  else if (iVar6 < 3) {
    if (iVar6 != 1) {
      uRam00000028 = 0;
      goto LAB_0010d39c;
    }
    iVar5 = *(int *)(param_1 + 0x1e8);
  }
  else {
    if (iVar6 != 3) {
      uRam00000028 = 0;
      goto LAB_0010d39c;
    }
    iVar5 = *(int *)(param_1 + 0x1d8);
  }
  *(undefined4 *)(iVar5 + 0x28) = 0;
LAB_0010d39c:
  uVar4 = *(undefined4 *)(param_1 + 0x168);
  *(undefined8 *)(iVar5 + 0x18) = *(undefined8 *)(param_1 + 0x840);
  *(undefined4 *)(iVar5 + 0x2c) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x18c);
  *(undefined8 *)(iVar5 + 0x20) = *(undefined8 *)(param_1 + 0x848);
  *(undefined4 *)(iVar5 + 0x30) = uVar4;
  *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(param_1 + 0x164);
  return bVar8;
}

// 0x0010d428  size 0xa0
/* "Too small buffer size for %dx%d picture" */

bool maybe_Mpeg_CheckBufferSize(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_130 [256];
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xf8) == 0) {
    bVar2 = *(int *)(param_2 + 0xc) * *(int *)(param_2 + 0x10) <= *(int *)(iVar1 + 0xfc);
  }
  else {
    bVar2 = false;
    if (*(int *)(param_2 + 4) <= *(int *)(iVar1 + 0xf4)) {
      bVar2 = *(int *)(param_2 + 8) <= *(int *)(iVar1 + 0xf8);
    }
  }
  if (bVar2 == false) {
    sprintf(auStack_130,0x35ee28,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    maybe_Mpeg_Error(param_1,auStack_130);
  }
  return bVar2;
}

// 0x0010d4c8  size 0x290
void maybe_Mpeg_SetupCscDma(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 in_hi;
  ulong uVar11;
  int iStack_ac;
  uint uStack_a8;
  
  uVar8 = *param_2 & 0xfffffff;
  uStack_a8 = *(uint *)(param_1 + 0xf0) & 0xfffffff;
  if (*(int *)(param_1 + 0x18c) == 3) {
    iVar5 = *(int *)(param_1 + 0xf8);
    uVar3 = param_2[4];
  }
  else {
    if (*(int *)(param_1 + 0xf8) != 0) {
      iVar5 = (*(int *)(param_1 + 0xf8) >> 4) * 0xc0;
      iVar9 = ((int)param_2[4] >> 1) * 0x180;
      iStack_ac = 2;
      goto LAB_0010d59c;
    }
    uVar3 = param_2[4];
    iVar5 = 0;
  }
  iVar9 = uVar3 * 0x180;
  if (iVar5 == 0) {
    iVar5 = iVar9;
  }
  else {
    iVar5 = (iVar5 >> 4) * 0x180;
  }
  iStack_ac = 1;
LAB_0010d59c:
  uVar11 = CONCAT44((int)((ulong)in_hi >> 0x20),iVar5 >> 0x1f);
  iVar10 = 0;
  if (iStack_ac != 0) {
    uVar3 = param_2[3];
    do {
      iVar6 = 0;
      uVar7 = uStack_a8;
      if (0 < (int)uVar3) {
        do {
          lVar4 = DIntr();
          REG_DMAC_9_SPR_TO_SADR = 0;
          REG_DMAC_9_SPR_TO_MADR = uVar8;
          REG_DMAC_9_SPR_TO_QWC = iVar9 >> 4;
          REG_DMAC_9_SPR_TO_CHCR = 0x101;
          if (lVar4 != 0) {
            EIntr();
          }
          uVar8 = uVar8 + iVar9;
          iVar6 = iVar6 + 1;
          do {
            uVar3 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar3 & 0x100) != 0);
          lVar4 = DIntr();
          REG_DMAC_8_SPR_FROM_SADR = 0;
          REG_DMAC_8_SPR_FROM_MADR = uVar7;
          REG_DMAC_8_SPR_FROM_QWC = iVar9 >> 4;
          REG_DMAC_8_SPR_FROM_CHCR = 0x100;
          if (lVar4 != 0) {
            EIntr();
          }
          uVar3 = param_2[3];
          do {
            uVar1 = REG_DMAC_8_SPR_FROM_CHCR;
          } while ((uVar1 & 0x100) != 0);
          do {
            iVar2 = REG_DMAC_8_SPR_FROM_QWC;
          } while (iVar2 != 0);
          uVar7 = uVar7 + iVar5;
        } while (iVar6 < (int)uVar3);
      }
      iVar10 = iVar10 + 1;
      lVar4 = ((long)(int)uStack_a8 | uVar11) + (long)(*(int *)(param_1 + 0xfc) * 0xc0);
      uStack_a8 = (uint)lVar4;
      uVar11 = (ulong)(int)((ulong)lVar4 >> 0x20);
    } while (iVar10 < iStack_ac);
  }
  return;
}

// 0x0010d780  size 0x174
void maybe_Mpeg_ComputeTimestamp
               (int param_1,int param_2,long *param_3,undefined8 *param_4,ulong *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    *param_3 = *(long *)(param_2 + 0x18);
  }
  else {
    lVar7 = *(long *)(param_2 + 0x18);
    if (lVar7 < 0) {
      iVar2 = *(int *)(param_1 + 0x98);
      if (iVar2 < 0) {
        *param_3 = lVar7;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0xa8);
        uVar9 = (ulong)(int)*(undefined8 *)(param_1 + 0xa0);
        uVar8 = *(undefined8 *)(param_1 + 0x90);
        uVar10 = uVar9 & 1;
        lVar7 = maybe___muldi3(uVar8,uVar9);
        *param_3 = (long)(int)(iVar2 + (int)((ulong)(lVar7 << 0x1f) >> 0x20) +
                                       ((uint)uVar10 & uVar1 & 1 & (uint)uVar8 & 1));
        if ((uVar10 & *(ulong *)(param_1 + 0x90)) != 0) {
          *(uint *)(param_1 + 0xa8) = uVar1 + 1;
        }
      }
    }
    else {
      *param_3 = lVar7;
    }
  }
  if (*(int *)(param_1 + 0x110) == 2) {
    if (*(long *)(param_1 + 0x108) < 0) {
      lVar7 = (long)*(int *)(param_2 + 0x40);
    }
    else {
      *param_3 = *(long *)(param_1 + 0x108);
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
      lVar7 = (long)*(int *)(param_2 + 0x40);
    }
  }
  else {
    lVar7 = (long)*(int *)(param_2 + 0x40);
  }
  iVar2 = *(int *)(param_2 + 0x3c);
  iVar3 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x30);
  iVar5 = *(int *)(param_2 + 0x2c);
  iVar6 = *(int *)(param_2 + 0x38);
  *param_4 = *(undefined8 *)(param_2 + 0x20);
  *param_5 = (long)iVar3 << 8 | (long)iVar5 | lVar7 << 5 | (long)iVar2 << 6 |
             (long)iVar6 << 7 | (long)iVar4 << 3;
  return;
}

// 0x0010d8f8  size 0x138
void maybe_Mpeg_OutputFrame(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar4 = *(int *)(iVar3 + 0x870);
  maybe_Mpeg_ComputeTimestamp(param_1,param_2,iVar4 + 0x10,iVar4 + 0x18,iVar4 + 0x20);
  lVar2 = *(long *)(*(int *)(iVar3 + 0x870) + 0x20);
  *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(*(int *)(iVar3 + 0x870) + 0x10);
  iVar4 = (int)param_2;
  uVar1 = *(uint *)(&DAT_003068d8 + ((uint)((ulong)(lVar2 << 0x1b) >> 0x20) & 0xf) * 4);
  *(undefined4 *)(iVar3 + 0xe4) = *(undefined4 *)(iVar4 + 0x5c);
  *(ulong *)(iVar3 + 0xa0) = (ulong)uVar1;
  *(undefined4 *)(iVar3 + 0xe8) = *(undefined4 *)(iVar4 + 0x60);
  *(undefined4 *)(iVar3 + 0xcc) = *(undefined4 *)(iVar4 + 0x44);
  *(undefined4 *)(iVar3 + 0xd0) = *(undefined4 *)(iVar4 + 0x48);
  *(undefined4 *)(iVar3 + 0xd4) = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar4 + 0x58);
  lVar2 = maybe_Mpeg_CheckBufferSize(param_1,param_2);
  if ((lVar2 == 0) || (*(int *)(iVar4 + 0x28) != 1)) {
    return;
  }
  if (*(int *)(iVar3 + 200) == 0) {
    maybe_Mpeg_SetupCscDma(param_1,param_2);
  }
  else {
    maybe_Ipu_ConvertPicture(param_1);
  }
  if (*(int *)(iVar3 + 8) != 2) {
    *(undefined4 *)(iVar3 + 8) = 2;
    *(undefined4 *)(iVar3 + 0xc4) = *(undefined4 *)(iVar3 + 0x130);
  }
  *(undefined4 *)(iVar3 + 0x838) = 1;
  return;
}

// 0x0010da08  size 0x1b8
void maybe_Mpeg_OutputField(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar10 = 0;
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x18c) == 2) {
    uVar10 = 0x40;
    uVar8 = param_2;
    uVar9 = param_3;
  }
  else {
    uVar8 = param_3;
    uVar9 = param_2;
  }
  iVar6 = *(int *)(iVar5 + 0x870);
  maybe_Mpeg_ComputeTimestamp(param_1,uVar8,iVar6 + 0x10,iVar6 + 0x18,iVar6 + 0x20);
  iVar6 = *(int *)(iVar5 + 0x870);
  uVar1 = *(undefined4 *)(iVar6 + 0x10);
  *(undefined8 *)(iVar5 + 0xa0) = 1;
  *(undefined4 *)(iVar5 + 0x98) = uVar1;
  maybe_Mpeg_ComputeTimestamp(param_1,uVar9,iVar6 + 0x28,iVar6 + 0x30,iVar6 + 0x38);
  iVar6 = *(int *)(iVar5 + 0x870);
  uVar1 = *(undefined4 *)(iVar6 + 0x28);
  *(undefined8 *)(iVar5 + 0xa0) = 1;
  *(undefined4 *)(iVar5 + 0x98) = uVar1;
  uVar2 = *(ulong *)(iVar6 + 0x20);
  iVar7 = (int)uVar8;
  uVar4 = *(ulong *)(iVar6 + 0x38);
  *(undefined4 *)(iVar5 + 0xe4) = *(undefined4 *)(iVar7 + 0x5c);
  *(ulong *)(iVar6 + 0x20) = uVar2 | uVar10;
  uVar1 = *(undefined4 *)(iVar7 + 0x60);
  *(ulong *)(iVar6 + 0x38) = uVar4 | uVar10;
  *(undefined4 *)(iVar5 + 0xe8) = uVar1;
  *(undefined4 *)(iVar5 + 0xcc) = *(undefined4 *)(iVar7 + 0x44);
  *(undefined4 *)(iVar5 + 0xd0) = *(undefined4 *)((int)uVar9 + 0x48);
  *(undefined4 *)(iVar5 + 0xd8) = *(undefined4 *)(iVar7 + 0x50);
  *(undefined4 *)(iVar5 + 0xdc) = *(undefined4 *)((int)uVar9 + 0x54);
  lVar3 = maybe_Mpeg_CheckBufferSize(param_1,param_2);
  if (((lVar3 == 0) || (iVar6 = (int)param_2, *(int *)(iVar6 + 0x28) != 1)) ||
     (*(int *)((int)param_3 + 0x28) != 1)) {
    return;
  }
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) << 1;
  if (*(int *)(iVar5 + 200) == 0) {
    maybe_Mpeg_SetupCscDma(param_1,param_2);
    iVar7 = *(int *)(iVar6 + 0x10);
  }
  else {
    maybe_Ipu_ConvertPicture(param_1,param_2);
    iVar7 = *(int *)(iVar6 + 0x10);
  }
  *(int *)(iVar6 + 0x10) = iVar7 >> 1;
  if (*(int *)(iVar5 + 8) != 2) {
    *(undefined4 *)(iVar5 + 8) = 2;
    *(undefined4 *)(iVar5 + 0xc4) = *(undefined4 *)(iVar5 + 0x130);
  }
  *(undefined4 *)(iVar5 + 0x838) = 1;
  return;
}

// 0x0010dbc0  size 0x16c
void maybe_Mpeg_KickMotionComp(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar1 = *(int *)(param_1 + 0x828);
  iVar2 = *(int *)(iVar1 * 0x140 + param_1 + 0x6d4);
  puVar6 = &DAT_20370100;
  if (0 < iVar2) {
    do {
      lVar5 = 3;
      if (iVar7 == iVar2 + -1) {
        lVar5 = 0;
      }
      iVar4 = iVar7 * 4 + iVar1 * 0x140;
      iVar7 = iVar7 + 1;
      iVar3 = *(int *)(param_1 + 0x5c0 + iVar4);
      *puVar6 = ((long)*(int *)(param_1 + 0x5b0 + iVar4) & 0xfffffffU) << 0x20 | 0x30000030;
      puVar6[2] = ((long)iVar3 & 0xfffffffU) << 0x20 | lVar5 << 0x1c | 0x30;
      puVar6 = puVar6 + 4;
    } while (iVar7 < iVar2);
  }
  lVar5 = DIntr();
  SYNC(0);
  REG_DMAC_9_SPR_TO_SADR = *(undefined4 *)(*(int *)(param_1 + 0x828) * 0x140 + param_1 + 0x5a8);
  REG_DMAC_9_SPR_TO_TADR = 0x370100;
  REG_DMAC_9_SPR_TO_QWC = 0;
  REG_DMAC_9_SPR_TO_CHCR = 0x105;
  if (lVar5 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x0010dd30  size 0x84
void maybe_Ipu_DmaFromStart(uint param_1,int param_2)

{
  long lVar1;
  
  lVar1 = DIntr();
  REG_DMAC_3_IPU_FROM_MADR = param_1 & 0xfffffff | 0x80000000;
  REG_DMAC_3_IPU_FROM_QWC = param_2 >> 4;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  if (lVar1 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x0010ddb8  size 0x128
void maybe_Ipu_CscLoop(undefined8 param_1,uint param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 auStack_70 [8];
  
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  lVar3 = DIntr();
  REG_DMAC_3_IPU_FROM_MADR = param_2 & 0xfffffff;
  REG_DMAC_3_IPU_FROM_QWC = (int)param_3 << 6;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  if (lVar3 != 0) {
    EIntr();
  }
  maybe_Ipu_Command(param_1,param_3 | 0x70000000);
  auStack_70[0] = 4;
  maybe_Mpeg_DispatchCallback(*(undefined4 *)((int)param_1 + 0x870),auStack_70);
  do {
    uVar2 = REG_DMAC_3_IPU_FROM_CHCR;
  } while ((uVar2 >> 8 & 1) != 0);
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  return;
}

// 0x0010e028  size 0x1c0
/* WARNING: Removing unreachable block (ram,0x0010e060) */
/* "CSC handler error" */

void maybe_Ipu_CscWithHandler(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 auStack_80 [8];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  uint uStack_54;
  int iStack_50;
  
  uStack_54 = param_2 + 0xffc00 & 0xfffffff;
  iStack_5c = 0;
  iStack_60 = 0;
  iStack_50 = param_3 / 0x3ff + 1;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  iStack_58 = param_3;
  uVar2 = AddDmacHandler(3,0x10dee0,0,&iStack_60);
  REG_DMAC_STAT = 8;
  EnableDmac(3);
  lVar3 = DIntr();
  REG_DMAC_3_IPU_FROM_MADR = param_2 & 0xfffffff;
  REG_DMAC_3_IPU_FROM_QWC = 0xffc0;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  if (lVar3 != 0) {
    EIntr();
  }
  REG_IPU_CMD = 0x700003ff;
  auStack_80[0] = 4;
  maybe_Mpeg_DispatchCallback(*(undefined4 *)((int)param_1 + 0x870),auStack_80);
  do {
  } while (iStack_60 < iStack_50);
  if (iStack_5c != 0) {
    maybe_Mpeg_Error(param_1,0x35ee58);
  }
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  DisableDmac(3);
  RemoveDmacHandler(3,uVar2);
  return;
}

// 0x0010e2c0  size 0x288
void maybe_Ipu_ConvertPicture(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 auStack_a0 [8];
  uint uStack_80;
  uint uStack_7c;
  
  iVar7 = (int)param_1;
  iVar1 = param_2[3] * param_2[4];
  auStack_a0[0] = 2;
  maybe_Mpeg_DispatchCallback(*(undefined4 *)(iVar7 + 0x870),auStack_a0);
  uVar2 = REG_IPU_CTRL;
  if ((uVar2 & 0x4000) != 0) {
    REG_IPU_CTRL = 0x40000000;
  }
  do {
    iVar3 = REG_IPU_CTRL;
  } while (iVar3 < 0);
  maybe_Ipu_Command(param_1,0);
  do {
    iVar3 = REG_IPU_CTRL;
  } while (iVar3 < 0);
  uStack_80 = iVar1 * 0x18;
  uStack_7c = *param_2 & 0xfffffff;
  if (uStack_80 < 0x10000) {
    lVar5 = DIntr();
    REG_DMAC_4_IPU_TO_MADR = *param_2 & 0xfffffff;
    REG_DMAC_4_IPU_TO_QWC = uStack_80;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    if (lVar5 != 0) {
      EIntr();
    }
    uStack_80 = 0;
    if (0x3ff < iVar1) {
      maybe_Ipu_CscWithHandler(param_1,*(undefined4 *)(iVar7 + 0xf0),iVar1);
      uVar6 = *(undefined4 *)(iVar7 + 0x870);
    }
    else {
      maybe_Ipu_CscLoop(param_1,*(undefined4 *)(iVar7 + 0xf0),iVar1);
      uVar6 = *(undefined4 *)(iVar7 + 0x870);
    }
  }
  else {
    uVar4 = AddDmacHandler(4,0x10e1e8,0,&uStack_80);
    REG_DMAC_STAT = 0x10;
    EnableDmac(4);
    lVar5 = DIntr();
    REG_DMAC_4_IPU_TO_MADR = uStack_7c;
    REG_DMAC_4_IPU_TO_QWC = 0xffff;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    if (lVar5 != 0) {
      EIntr();
    }
    uStack_7c = uStack_7c + 0xffff0 & 0xfffffff;
    uStack_80 = uStack_80 - 0xffff;
    if (0x3ff < iVar1) {
      maybe_Ipu_CscWithHandler(param_1,*(undefined4 *)(iVar7 + 0xf0),iVar1);
    }
    else {
      maybe_Ipu_CscLoop(param_1,*(undefined4 *)(iVar7 + 0xf0),iVar1);
    }
    DisableDmac(4);
    RemoveDmacHandler(4,uVar4);
    uVar6 = *(undefined4 *)(iVar7 + 0x870);
  }
  auStack_a0[0] = 3;
  maybe_Mpeg_DispatchCallback(uVar6,auStack_a0);
  return;
}

// 0x0010e548  size 0x34
void maybe_Bs_Init(undefined8 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1;
  *(undefined4 *)((int)puVar1 + 0xc) = param_2;
  *(int *)((int)puVar1 + 0x24) = param_3 + param_4;
  *(int *)(puVar1 + 5) = param_4;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  *(int *)(puVar1 + 4) = param_3;
  maybe_Bs_Skip(param_1,0);
  return;
}

// 0x0010e580  size 0x1c
undefined4 maybe_Bs_ShowBits(ulong *param_1,int param_2)

{
  return (int)(*param_1 >> (long)(0x40 - param_2));
}

// 0x0010e5a0  size 0x98
void maybe_Bs_Skip(ulong *param_1,long param_2)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  
  uVar1 = (int)param_1[2] - (int)param_2;
  *param_1 = *param_1 << param_2;
  *(uint *)(param_1 + 2) = uVar1;
  if (uVar1 < 0x39) {
    uVar3 = param_1[3];
    do {
      pbVar2 = *(byte **)((int)param_1 + 0xc) + 1;
      *param_1 = *param_1 | (ulong)**(byte **)((int)param_1 + 0xc) << (long)(0x38 - (int)param_1[2])
      ;
      *(byte **)((int)param_1 + 0xc) = pbVar2;
      if (*(byte **)((int)param_1 + 0x24) <= pbVar2) {
        *(int *)((int)param_1 + 0xc) = (int)param_1[4];
      }
      uVar1 = (int)param_1[2] + 8;
      *(uint *)(param_1 + 2) = uVar1;
    } while (uVar1 < 0x39);
  }
  else {
    uVar3 = param_1[3];
  }
  param_1[3] = uVar3 + param_2;
  return;
}

// 0x0010e638  size 0x4c
undefined8 maybe_Bs_GetBits(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = maybe_Bs_ShowBits();
  maybe_Bs_Skip(param_1,param_2);
  return uVar1;
}

// 0x0010e688  size 0x44
undefined8 maybe_Bs_GetBit(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = maybe_Bs_ShowBits(param_1,1);
  maybe_Bs_Skip(param_1,1);
  return uVar1;
}

// 0x0010e6d0  size 0x54
void maybe_Bs_Seek(undefined8 param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1;
  lVar1 = (long)(param_2 << 3) + puVar3[3];
  *puVar3 = 0;
  uVar2 = *(int *)(puVar3 + 1) + (int)((ulong)(lVar1 * 0x20000000) >> 0x20);
  *(undefined4 *)(puVar3 + 2) = 0;
  puVar3[3] = lVar1;
  *(uint *)((int)puVar3 + 0xc) = uVar2;
  if (*(uint *)((int)puVar3 + 0x24) <= uVar2) {
    *(uint *)((int)puVar3 + 0xc) = uVar2 - *(int *)(puVar3 + 5);
  }
  maybe_Bs_Skip(param_1,0);
  return;
}

// 0x0010e728  size 0x2c
uint maybe_Bs_WrapOffset(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) + (param_2 >> 3);
  if (*(uint *)(param_1 + 0x24) <= uVar1) {
    uVar1 = uVar1 - *(int *)(param_1 + 0x28);
  }
  return uVar1;
}

// 0x0010e758  size 0x88
ulong maybe_Demux_GetStreamType(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (9 < param_1) {
    return 0;
  }
  uVar1 = (&DAT_00306920)[(int)param_1 * 2];
  if (uVar1 == 0xffff000000) {
    lVar2 = 0x18;
  }
  else if (uVar1 < 0xffff000001) {
    if (uVar1 != 0xff00000000) goto LAB_0010e7c8;
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0;
  }
  param_2 = param_2 << lVar2;
LAB_0010e7c8:
  return *(ulong *)(&DAT_00306918 + (int)param_1 * 0x10) | param_2;
}

// 0x0010e7e0  size 0x1fc
int maybe_sceMpegDemuxPssRing(uint *param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar5 = 0;
  uVar4 = DAT_00306920;
  puVar2 = (ulong *)&DAT_00306918;
  do {
    if (uVar4 == 0xffff000000) {
      uVar4 = *puVar2;
      if (uVar4 == 0xbd88000000) {
LAB_0010e930:
        uVar3 = param_3 & 0xfff8000000;
        uVar1 = 7;
      }
      else if (uVar4 < 0xbd88000001) {
        uVar3 = param_3 & 0xffe0000000;
        if (uVar4 == 0xbd20000000) {
          uVar1 = 0x1f;
        }
        else {
          uVar3 = param_3 & 0xffff000000;
          if (uVar4 == 0xbd80000000) goto LAB_0010e930;
          uVar1 = 0;
        }
      }
      else {
        if ((uVar4 == 0xbd90000000) || (uVar3 = param_3 & 0xffff000000, uVar4 == 0xbda0000000))
        goto LAB_0010e930;
        uVar1 = 0;
      }
      if (uVar3 == uVar4) {
        uVar1 = (uint)(param_3 >> 0x18) & uVar1;
LAB_0010e984:
        *param_1 = uVar5;
        *param_2 = uVar1;
LAB_0010e998:
        iVar6 = 1;
      }
    }
    else if (uVar4 < 0xffff000001) {
      if (uVar4 == 0xff00000000) {
        uVar4 = *puVar2;
        if (uVar4 == 0xe000000000) {
          uVar3 = param_3 & 0xf000000000;
          uVar1 = 0xf;
        }
        else {
          uVar3 = param_3 & 0xff00000000;
          if (uVar4 == 0xc000000000) {
            uVar3 = param_3 & 0xe000000000;
            uVar1 = 0x1f;
          }
          else {
            uVar1 = 0;
          }
        }
        if (uVar3 == uVar4) {
          uVar1 = (uint)(param_3 >> 0x20) & uVar1;
          goto LAB_0010e984;
        }
      }
    }
    else if ((uVar4 == 0xffffffffff) && ((param_3 & 0xffffff0000) == *puVar2)) {
      *param_1 = uVar5;
      *param_2 = (uint)param_3 & 0xffff;
      goto LAB_0010e998;
    }
    uVar5 = uVar5 + 1;
    if ((9 < uVar5) || (iVar6 != 0)) {
      return iVar6;
    }
    uVar4 = puVar2[3];
    puVar2 = puVar2 + 2;
  } while( true );
}

// 0x0010e9e0  size 0x30c
undefined4
maybe_Mpeg_DemuxPss(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_160 [24];
  ulong uStack_148;
  undefined1 auStack_130 [24];
  ulong auStack_118 [2];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  
  lVar8 = 1;
  iVar6 = 0;
  iVar1 = *(int *)((int)param_1 + 0x40);
  iStack_b8 = *(int *)(iVar1 + 0x60);
  pcStack_c0 = (code *)0x0;
  maybe_Bs_Init(auStack_160,param_2,param_4,param_5);
  uStack_bc = 0;
  uStack_b4 = 0;
  if (*(int *)(iVar1 + 100) < 1) {
    uVar9 = (ulong)(param_3 << 3);
  }
  else {
    uVar9 = (ulong)(param_3 << 3);
    do {
      plVar3 = (long *)(iVar6 * 0x20 + iStack_b8);
      if (*plVar3 == 0xbdff000000) {
        uStack_b0 = (undefined4)plVar3[3];
        pcStack_c0 = *(code **)(plVar3 + 2);
        uStack_bc = *(undefined4 *)((int)plVar3 + 0x14);
      }
      iVar6 = iVar6 + 1;
    } while ((pcStack_c0 == (code *)0x0) && (iVar6 < *(int *)(iVar1 + 100)));
  }
  do {
    lVar4 = maybe_Bs_ShowBits(auStack_160,0x20);
    if (lVar4 == 0x1ba) {
      maybe_Demux_PesHeader(auStack_160,auStack_130);
    }
    while (((lVar4 = maybe_Bs_ShowBits(auStack_160,0x18), lVar4 == 1 &&
            (lVar4 = maybe_Bs_ShowBits(auStack_160,0x20), lVar4 != 0x1ba)) &&
           (lVar4 = maybe_Bs_ShowBits(auStack_160,0x20), lVar4 != 0x1b9))) {
      bVar2 = uVar9 < uStack_148;
      if ((uVar9 <= uStack_148) || (lVar8 == 0)) goto LAB_0010ec9c;
      maybe_Mpeg_PackHeader(iVar1,auStack_160,auStack_118);
      if (uStack_148 <= uVar9) {
        iVar6 = *(int *)(iVar1 + 100);
        iVar7 = 0;
        if (0 < iVar6) {
          do {
            puVar5 = (ulong *)(iVar7 * 0x20 + iStack_b8);
            if (*puVar5 == (auStack_118[0] & puVar5[1])) {
              uStack_e0 = 6;
              uStack_dc = maybe_Bs_WrapOffset(auStack_160,uStack_f0);
              uStack_d8 = maybe_Bs_WrapOffset(auStack_160,uStack_f8);
              uStack_d0 = uStack_108;
              uStack_d4 = uStack_f4;
              uStack_c8 = uStack_100;
              lVar8 = (**(code **)(puVar5 + 2))
                                (param_1,&uStack_e0,*(undefined4 *)((int)puVar5 + 0x14));
              iVar6 = *(int *)(iVar1 + 100);
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar6);
        }
        if ((iVar7 == iVar6) && (pcStack_c0 != (code *)0x0)) {
          uStack_e0 = 6;
          uStack_dc = maybe_Bs_WrapOffset(auStack_160,uStack_f0);
          uStack_d8 = maybe_Bs_WrapOffset(auStack_160,uStack_f8);
          uStack_d0 = uStack_108;
          uStack_d4 = uStack_f4;
          uStack_c8 = uStack_100;
          lVar8 = (*pcStack_c0)(param_1,&uStack_e0,uStack_bc);
        }
        if (lVar8 != 0) {
          uStack_b4 = (undefined4)((uStack_148 << 0x1d) >> 0x20);
        }
      }
    }
    bVar2 = uVar9 < uStack_148;
LAB_0010ec9c:
    if ((bVar2) || (lVar4 = maybe_Bs_ShowBits(auStack_160,0x20), lVar4 != 0x1ba)) {
      return uStack_b4;
    }
  } while( true );
}

// 0x0010ecf0  size 0x20
void maybe_sceMpegDemuxPss(void)

{
  maybe_Mpeg_DemuxPss();
  return;
}

// 0x0010ed10  size 0xf8
undefined4
maybe_Demux_DeliverPacket
          (int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  plVar3 = *(long **)(iVar1 + 0x60);
  lVar2 = maybe_Demux_GetStreamType(param_2,param_3);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 100)) {
    if (lVar2 == *plVar3) {
      uVar5 = (undefined4)plVar3[2];
    }
    else {
      for (iVar4 = 1; iVar4 < *(int *)(iVar1 + 100); iVar4 = iVar4 + 1) {
        if (lVar2 == plVar3[iVar4 * 4]) {
          uVar5 = (undefined4)(plVar3 + iVar4 * 4)[2];
          break;
        }
      }
    }
  }
  if (iVar4 < 0x40) {
    plVar3 = plVar3 + iVar4 * 4;
    *plVar3 = lVar2;
    *(undefined4 *)(plVar3 + 2) = param_4;
    lVar2 = (&DAT_00306920)[(int)param_2 * 2];
    *(undefined4 *)((int)plVar3 + 0x14) = param_5;
    plVar3[1] = lVar2;
    iVar4 = *(int *)(iVar1 + 100);
    *(undefined1 **)(plVar3 + 3) = &_mips_gp0_value;
    *(int *)(iVar1 + 100) = iVar4 + 1;
  }
  return uVar5;
}

// 0x0010ee08  size 0x150
undefined4 maybe_Demux_PesHeader(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar7 = 0;
  maybe_Bs_GetBits(param_1,0x22);
  uVar1 = maybe_Bs_GetBits(param_1,3);
  maybe_Bs_GetBit(param_1);
  iVar2 = maybe_Bs_GetBits(param_1,0xf);
  maybe_Bs_GetBit(param_1);
  uVar3 = maybe_Bs_GetBits(param_1,0xf);
  maybe_Bs_GetBit(param_1);
  uVar4 = maybe_Bs_GetBits(param_1,9);
  puVar8 = (undefined4 *)param_2;
  *puVar8 = uVar4;
  maybe_Bs_GetBits(param_1,0x1e);
  uVar5 = maybe_Bs_GetBits(param_1,3);
  puVar8[2] = uVar1 >> 2 & 1;
  puVar8[1] = uVar1 << 0x1e | iVar2 << 0xf | uVar3;
  if (uVar5 != 0) {
    do {
      maybe_Bs_GetBits(param_1,8);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  lVar6 = maybe_Bs_ShowBits(param_1,0x20);
  if (lVar6 == 0x1bb) {
    puVar8[3] = 1;
    maybe_Demux_SystemHeader(param_1,param_2);
  }
  else {
    puVar8[3] = 0;
  }
  return 1;
}

// 0x0010ef58  size 0x68
undefined4 maybe_Demux_SystemHeader(undefined8 param_1)

{
  long lVar1;
  
  maybe_Bs_GetBits(param_1,0x38);
  maybe_Bs_GetBits(param_1,0x28);
  while (lVar1 = maybe_Bs_ShowBits(param_1,1), lVar1 == 1) {
    maybe_Bs_GetBits(param_1,0x18);
  }
  return 1;
}

// 0x0010efc8  size 0x5b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "pack_header_field_flag needs to be '0' in PS" */

undefined4 maybe_Mpeg_PackHeader(undefined4 param_1,undefined8 param_2,ulong *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  iVar14 = (int)param_2;
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(iVar14 + 0x18);
  uStack_c0 = DAT_0035ee70;
  uStack_b8 = _PTR_DAT_0035ee78;
  uStack_b0 = param_1;
  maybe_Bs_GetBits(param_2,0x18);
  lVar4 = maybe_Bs_GetBits(param_2,8);
  *param_3 = lVar4 << 0x20;
  uVar1 = maybe_Bs_GetBits(param_2,0x10);
  uVar11 = *param_3;
  *(undefined4 *)(param_3 + 1) = uVar1;
  param_3[2] = 0xffffffffffffffff;
  param_3[3] = 0xffffffffffffffff;
  if (uVar11 == 0xbc00000000) {
LAB_0010f4d8:
    iVar14 = (int)param_3[1];
    if (uVar11 == 0xbf00000000) {
      uVar11 = maybe_Bs_GetBits(param_2,0x20);
      iVar14 = iVar14 + -4;
      *param_3 = *param_3 | uVar11 & 0xffffffff;
    }
    if (iVar14 != 0) {
      maybe_Bs_Seek(param_2,iVar14);
    }
    return 1;
  }
  if ((((uVar11 == 0xbe00000000) || (uVar11 == 0xbf00000000)) || (uVar11 == 0xf000000000)) ||
     (((uVar11 == 0xf100000000 || (uVar11 == 0xff00000000)) ||
      ((uVar11 == 0xf200000000 || (uVar11 == 0xf800000000)))))) {
    if ((((uVar11 != 0xbc00000000) && (uVar11 != 0xbf00000000)) &&
        ((uVar11 != 0xf000000000 &&
         (((uVar11 != 0xf100000000 && (uVar11 != 0xff00000000)) && (uVar11 != 0xf200000000)))))) &&
       (uVar11 != 0xf800000000)) {
      if (uVar11 != 0xbe00000000) {
        return 1;
      }
      if ((int)param_3[1] == 0) {
        return 1;
      }
      maybe_Bs_Seek(param_2);
      return 1;
    }
    goto LAB_0010f4d8;
  }
  maybe_Bs_GetBits(param_2,2);
  uVar1 = maybe_Bs_GetBits(param_2,2);
  *(undefined4 *)((int)param_3 + 0xc) = uVar1;
  maybe_Bs_GetBits(param_2,4);
  uVar11 = maybe_Bs_GetBits(param_2,2);
  iStack_ac = maybe_Bs_GetBits(param_2,1);
  lVar4 = maybe_Bs_GetBits(param_2,4);
  lVar5 = maybe_Bs_GetBits(param_2,1);
  iStack_a8 = maybe_Bs_GetBits(param_2,8);
  uVar6 = *(undefined8 *)(iVar14 + 0x18);
  if ((uVar11 & 2) != 0) {
    maybe_Bs_GetBits(param_2,4);
    uVar2 = maybe_Bs_GetBits(param_2,3);
    maybe_Bs_GetBit(param_2);
    iVar3 = maybe_Bs_GetBits(param_2,0xf);
    maybe_Bs_GetBit(param_2);
    uVar7 = maybe_Bs_GetBits(param_2,0xf);
    maybe_Bs_GetBit(param_2);
    param_3[2] = ((long)(int)(uVar2 >> 2) & 1U) << 0x20 |
                 ((long)(int)(uVar2 << 0x1e | iVar3 << 0xf) | uVar7) & 0xffffffff;
  }
  if (uVar11 == 3) {
    maybe_Bs_GetBits(param_2,4);
    uVar2 = maybe_Bs_GetBits(param_2,3);
    maybe_Bs_GetBit(param_2);
    iVar3 = maybe_Bs_GetBits(param_2,0xf);
    maybe_Bs_GetBit(param_2);
    uVar11 = maybe_Bs_GetBits(param_2,0xf);
    maybe_Bs_GetBit(param_2);
    param_3[3] = ((long)(int)(uVar2 >> 2) & 1U) << 0x20 |
                 ((long)(int)(uVar2 << 0x1e | iVar3 << 0xf) | uVar11) & 0xffffffff;
  }
  if (iStack_ac == 1) {
    maybe_Bs_GetBits(param_2,0x30);
  }
  if (lVar4 != 0) {
    maybe_Bs_GetBits(param_2,*(undefined1 *)((int)&uStack_c0 + (int)lVar4));
  }
  if (lVar5 == 1) {
    lVar4 = maybe_Bs_GetBits(param_2,1);
    lVar5 = maybe_Bs_GetBits(param_2,1);
    lVar8 = maybe_Bs_GetBits(param_2,1);
    lVar9 = maybe_Bs_GetBits(param_2,1);
    maybe_Bs_GetBits(param_2,3);
    lVar10 = maybe_Bs_GetBits(param_2,1);
    if (lVar4 == 1) {
      maybe_Bs_GetBits(param_2,0x30);
      maybe_Bs_GetBits(param_2,0x30);
      maybe_Bs_GetBits(param_2,0x20);
    }
    if (lVar5 == 1) {
      maybe_Mpeg_Error(uStack_b0,0x35ee80);
      return 0;
    }
    if (lVar8 == 1) {
      maybe_Bs_GetBits(param_2,0x10);
    }
    if (lVar9 == 1) {
      maybe_Bs_GetBits(param_2,0x10);
    }
    if (lVar10 == 1) {
      uVar12 = 0;
      maybe_Bs_GetBit(param_2);
      uVar2 = maybe_Bs_GetBits(param_2,7);
      if (uVar2 != 0) {
        do {
          maybe_Bs_GetBits(param_2,8);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar2);
        lVar4 = *(long *)(iVar14 + 0x18);
        goto LAB_0010f3d4;
      }
    }
  }
  lVar4 = *(long *)(iVar14 + 0x18);
LAB_0010f3d4:
  if (iStack_a8 != (int)((ulong)((lVar4 - (int)uVar6) * 0x20000000) >> 0x20)) {
    maybe_Bs_Seek(param_2);
  }
  iVar13 = (int)param_3[1] - iStack_a8;
  iVar3 = iVar13 + -3;
  *(int *)((int)param_3 + 0x24) = iVar3;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(iVar14 + 0x18);
  if (*param_3 == 0xbd00000000) {
    uVar11 = maybe_Bs_GetBits(param_2,0x20);
    iVar3 = iVar13 + -7;
    *param_3 = *param_3 | uVar11 & 0xffffffff;
  }
  if (iVar3 == 0) {
    return 1;
  }
  maybe_Bs_Seek(param_2);
  return 1;
}

// 0x0010f578  size 0xb0
undefined4 maybe_sceMpegInit(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  uVar1 = REG_DMAC_3_IPU_FROM_CHCR;
  REG_DMAC_3_IPU_FROM_CHCR = uVar1 & 0xfffffeff;
  uVar1 = REG_DMAC_4_IPU_TO_CHCR;
  REG_DMAC_4_IPU_TO_CHCR = uVar1 & 0xfffffeff;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  if (lVar2 != 0) {
    EIntr();
  }
  REG_DMAC_3_IPU_FROM_QWC = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  maybe_Ipu_Reset();
  return 1;
}

// 0x0010f628  size 0x20c
/* "The size of work area is too small" */

bool sceMpegCreate(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  memset(param_2,0);
  uVar4 = (int)param_2 + 3U & 0xfffffffc;
  uVar2 = param_3 - (uVar4 - (int)param_2);
  if (0x10bf < uVar2) {
    iVar3 = uVar4 + 0x120;
    puVar5 = (undefined4 *)param_1;
    puVar5[0x10] = uVar4;
    maybe_Ringbuf_Init(iVar3,uVar4 + 0x10c0,uVar2 - 0x10c0);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined8 *)(puVar5 + 4) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0xe) = 0;
    *(undefined4 *)(uVar4 + 0xcc) = 0;
    *(undefined4 *)(uVar4 + 0xd0) = 0;
    *(undefined4 *)(uVar4 + 0xd4) = 0;
    *(undefined4 *)(uVar4 + 0xd8) = 0;
    *(undefined4 *)(uVar4 + 0xdc) = 0;
    *(undefined4 *)(uVar4 + 0xe0) = 0;
    *(undefined4 *)(uVar4 + 0xe4) = 0;
    *(undefined4 *)(uVar4 + 0xe8) = 0;
    *(undefined4 *)(uVar4 + 0xec) = 0;
    *(undefined4 *)(uVar4 + 0xf0) = 0;
    *(undefined4 *)(uVar4 + 0xf4) = 0;
    *(undefined4 *)(uVar4 + 0xf8) = 0;
    *(undefined4 *)(uVar4 + 0xfc) = 0;
    *(undefined4 *)(uVar4 + 0x100) = 0;
    *(undefined4 *)(uVar4 + 0x110) = 0;
    *(undefined4 *)(uVar4 + 0xc) = 0;
    *(undefined4 *)(uVar4 + 0x18) = 0;
    *(undefined4 *)(uVar4 + 0x3c) = 0;
    *(undefined4 *)(uVar4 + 0x48) = 0;
    *(undefined4 *)(uVar4 + 0x54) = 0;
    *(undefined8 *)(uVar4 + 0x108) = 0xffffffffffffffff;
    *(undefined1 **)(uVar4 + 0x24) = &LAB_00110cc8;
    *(code **)(uVar4 + 0x30) = maybe_sceMpegResume;
    uVar1 = maybe_Mpeg_WorkAlloc(uVar4,iVar3,0x800,8);
    *(undefined4 *)(uVar4 + 100) = 0;
    *(undefined4 *)(uVar4 + 0x114) = 0;
    *(undefined4 *)(uVar4 + 0x118) = 0;
    *(undefined4 *)(uVar4 + 0x11c) = 0;
    *(undefined4 *)(uVar4 + 0x8c) = 0;
    *(undefined8 *)(uVar4 + 0x90) = 0;
    *(undefined4 *)(uVar4 + 0x98) = 0xffffffff;
    *(undefined8 *)(uVar4 + 0xa0) = 0;
    *(undefined4 *)(uVar4 + 0xa8) = 0;
    *(undefined4 *)(uVar4 + 0xc4) = 0;
    *(undefined4 *)(uVar4 + 0xac) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0xb0) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0xb4) = 0xffffffff;
    *(undefined4 **)(uVar4 + 0x870) = puVar5;
    *(undefined4 *)(uVar4 + 0x60) = uVar1;
    *(undefined4 *)(uVar4 + 200) = 1;
    maybe_Mpeg_InitScratchpad(uVar4);
    maybe_sceMpegReset(param_1);
    maybe_Mpeg_ResetCallbacks(param_1);
    *(uint *)(uVar4 + 0x1d0) = uVar4 + 0x200;
    *(uint *)(uVar4 + 0x1d4) = uVar4 + 0x268;
    *(uint *)(uVar4 + 0x1dc) = uVar4 + 0x2d0;
    *(uint *)(uVar4 + 0x1e0) = uVar4 + 0x338;
    *(uint *)(uVar4 + 0x1e4) = uVar4 + 0x3a0;
    *(uint *)(uVar4 + 0x1ec) = uVar4 + 0x408;
    *(uint *)(uVar4 + 0x1f0) = uVar4 + 0x470;
    *(uint *)(uVar4 + 500) = uVar4 + 0x4d8;
    *(uint *)(uVar4 + 0x1fc) = uVar4 + 0x540;
    maybe_Ringbuf_Rewind(iVar3);
    *(undefined4 *)(uVar4 + 0x868) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0x86c) = 0;
    *(undefined **)(uVar4 + 0x834) = &DAT_70003600;
    *(undefined4 *)(uVar4 + 0x864) = 0;
  }
  else {
    maybe_Mpeg_Error(uVar4,0x35eeb0);
  }
  return 0x10bf < uVar2;
}

// 0x0010f838  size 0x8
undefined4 maybe_sceMpegDelete(void)

{
  return 1;
}

// 0x0010f880  size 0x48
void maybe_sceMpegGetPictureRAW8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 200) = 1;
  *(uint *)(iVar1 + 0xf0) = param_2 & 0xfffffff | 0x20000000;
  *(undefined4 *)(iVar1 + 0xfc) = param_3;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  sceMpegGetPicture();
  return;
}

// 0x0010f8c8  size 0x44
void maybe_sceMpegGetPictureRAW8xy(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0xfc) = param_3;
  *(uint *)(iVar1 + 0xf0) = param_2 & 0xfffffff | 0x20000000;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  sceMpegGetPicture();
  return;
}

// 0x0010f910  size 0x50
void maybe_sceMpegGetPictureRGB32(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(iVar1 + 0xf8) = param_4 << 4;
  *(uint *)(iVar1 + 0xf0) = param_2 & 0xfffffff | 0x20000000;
  *(int *)(iVar1 + 0xfc) = param_3 * param_4;
  *(int *)(iVar1 + 0xf4) = param_3 << 4;
  *(undefined4 *)(iVar1 + 200) = 0;
  sceMpegGetPicture();
  return;
}

// 0x0010f9a8  size 0xc
undefined4 maybe_sceMpegGetDecodeMode(int param_1)

{
  return **(undefined4 **)(param_1 + 0x40);
}

// 0x0010f9b8  size 0x10
bool maybe_sceMpegIsEnd(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x40) + 4) == 0;
}

// 0x0010f9c8  size 0x5c
undefined4 maybe_sceMpegReset(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  puVar1[0x428] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1[0x31] = 0;
  puVar1[0x26] = 0xffffffff;
  maybe_Mpeg_ResetDecoder(puVar1);
  puVar1[0x4c] = 0;
  maybe_Ipu_EnableBusy(puVar1);
  return 1;
}

// 0x0010fa28  size 0x54
undefined4 maybe_Mpeg_ResetCallbacks(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(iVar1 + 0x1d0) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1d0) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1e0) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1e0) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1f0) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1f0) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1d4) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1d4) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1e4) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1e4) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 500) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 500) + 0x28) = 0;
  }
  return 1;
}

// 0x0010fa80  size 0x34
/* (mp, type, func, data) into 12-byte table */

undefined4 sceMpegAddCallback(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x40) + 0xc + param_2 * 0xc);
  iVar3 = *(int *)(param_1 + 0x40) + param_2 * 0xc;
  uVar1 = *puVar2;
  *puVar2 = param_3;
  *(undefined4 *)(iVar3 + 0x10) = param_4;
  *(undefined1 **)(iVar3 + 0x14) = &_mips_gp0_value;
  return uVar1;
}

// 0x0010fab8  size 0x74
undefined8 maybe_Mpeg_DispatchCallback(long param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (((param_1 != 0) && (iVar1 = *(int *)((int)param_1 + 0x40), iVar1 != 0)) &&
     (pcVar2 = *(code **)(iVar1 + *param_2 * 0xc + 0xc), pcVar2 != (code *)0x0)) {
    uVar3 = (*pcVar2)((int)param_1,param_2,*(undefined4 *)(*param_2 * 0xc + iVar1 + 0x10));
  }
  return uVar3;
}

// 0x0010fb30  size 0x28
undefined4 maybe_Mpeg_CallbackBackground(undefined8 param_1)

{
  undefined4 auStack_30 [8];
  
  auStack_30[0] = 1;
  maybe_Mpeg_DispatchCallback(param_1,auStack_30);
  return 1;
}

// 0x0010fc00  size 0x14
void maybe_Ringbuf_Init(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = param_2;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = param_2;
  return;
}

// 0x0010fc18  size 0xc
void maybe_Ringbuf_Rewind(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}

// 0x0010fc28  size 0xc
void maybe_Ringbuf_Commit(int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  return;
}

// 0x0010fc38  size 0x6c
/* "work area size is too small" */

int maybe_Mpeg_WorkAlloc(undefined8 param_1,int *param_2,int param_3,long param_4)

{
  int iVar1;
  
  iVar1 = (int)param_4;
  if (param_4 == 0) {
    trap(7);
  }
  iVar1 = ((param_2[2] + iVar1 + -1) / iVar1) * iVar1;
  if ((uint)(*param_2 + param_2[1]) < (uint)(iVar1 + param_3)) {
    maybe_Mpeg_Error(param_1,0x35eed8);
    iVar1 = 0;
  }
  else {
    param_2[2] = iVar1 + param_3;
  }
  return iVar1;
}

// 0x0010fcc0  size 0x12c
/* "sceMpegGetPicture was aborted" */

undefined8 sceMpegGetPicture(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  piVar1 = *(int **)(param_1 + 0x40);
  *piVar1 = 0;
  if ((piVar1[0x3c] & 0x3fU) == 0) {
    if (piVar1[0x428] == 0) {
      piVar1[0x20e] = 0;
      do {
        do {
          uVar3 = maybe_Mpeg_GetHeader(piVar1);
          if ((long)uVar3 < 0) {
            return 0xffffffffffffffff;
          }
        } while (((uVar3 != 0) && (piVar1[99] != piVar1[0x3b])) && (piVar1[0x218] != 0));
        if (uVar3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0010fda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(&PTR_LAB_0035efa0)[(int)uVar3])();
          return uVar2;
        }
        if (piVar1[0x428] != 0) {
          maybe_scePrintf(0x35ef78);
          return 0xffffffffffffffff;
        }
        if (piVar1[0x20e] != 0) {
          return 1;
        }
      } while (*piVar1 == 0);
      uVar2 = 1;
    }
    else {
      maybe_scePrintf(0x35ef38);
      uVar2 = 0xffffffffffffffff;
    }
  }
  else {
    maybe_Mpeg_Errorf(piVar1,0x35eef8);
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

// 0x0010fe78  size 0x120
ulong maybe_Mpeg_GetPictureField(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  bVar2 = false;
  iVar7 = (int)param_1;
  iVar1 = *(int *)(iVar7 + 0x40);
  if ((param_3 == -1) || (param_2 < param_3)) {
    if (*(int *)(iVar1 + 8) == 0) {
      *(undefined4 *)(iVar7 + 8) = 0;
      *(undefined4 *)(iVar1 + 8) = 1;
    }
    lVar3 = maybe_Mpeg_ReorderFrames(iVar1,0);
    uVar6 = 0;
    if (lVar3 != 0) {
      lVar3 = maybe_Mpeg_DecodePicture(iVar1);
      uVar6 = (ulong)(lVar3 != 0);
    }
  }
  else {
    uVar6 = maybe_Mpeg_ReorderFrames(iVar1,0);
    bVar2 = true;
    maybe_Mpeg_CallbackBackground(param_1);
  }
  uVar4 = 0;
  if (*(int *)(iVar1 + 0x10a0) == 0) {
    maybe_Mpeg_OutputPicture(iVar1,*(undefined4 *)(iVar1 + 0x130),*(undefined4 *)(iVar1 + 4));
    if (*(int *)(iVar1 + 0x18c) == 3) {
      iVar5 = *(int *)(iVar1 + 0xc4);
    }
    else if (bVar2) {
      iVar5 = *(int *)(iVar1 + 0xc4);
    }
    else {
      *(uint *)(iVar1 + 0x138) = (uint)(*(int *)(iVar1 + 0x138) == 0);
      iVar5 = *(int *)(iVar1 + 0xc4);
    }
    *(int *)(iVar7 + 8) = *(int *)(iVar1 + 0x130) - iVar5;
    uVar4 = uVar6;
    if (*(int *)(iVar1 + 0x138) == 0) {
      *(int *)(iVar1 + 0x130) = *(int *)(iVar1 + 0x130) + 1;
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
  }
  return uVar4;
}

// 0x0010ff98  size 0x44
void maybe_Mpeg_GetPictureDispatch(undefined8 param_1)

{
  if (*(int *)(*(int *)((int)param_1 + 0x40) + 0x18c) == 3) {
    maybe_Mpeg_GetPictureField(param_1);
  }
  else {
    maybe_Mpeg_GetPictureFrame(param_1);
  }
  return;
}

// 0x0010ffe0  size 0x174
undefined4 maybe_Mpeg_GetPictureFrame(undefined8 param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  
  bVar2 = false;
  iVar6 = (int)param_1;
  puVar1 = *(undefined4 **)(iVar6 + 0x40);
  puVar1[0x4e] = 0;
  if ((param_3 == -1) || (param_2 < param_3)) {
    bVar2 = true;
    iVar3 = puVar1[2];
  }
  else {
    iVar3 = puVar1[2];
  }
  if (iVar3 == 0) {
    *(undefined4 *)(iVar6 + 8) = 0;
    puVar1[2] = 1;
  }
  lVar5 = maybe_Mpeg_ReorderFrames(puVar1,0);
  if (lVar5 == 0) {
    iVar3 = puVar1[0x428];
  }
  else if (bVar2) {
    maybe_Mpeg_DecodePicture(puVar1);
    iVar3 = puVar1[0x428];
  }
  else {
    iVar3 = puVar1[0x428];
  }
  if (iVar3 != 0) {
    return 0;
  }
  puVar1[0x4e] = 1;
  lVar5 = maybe_Mpeg_GetHeader(puVar1);
  if (lVar5 == 0) {
    maybe_Mpeg_FlushOutput(param_1);
    *puVar1 = 1;
    return 0;
  }
  iVar3 = 2;
  if (puVar1[0x3b] != 1) {
    iVar3 = 1;
  }
  if (puVar1[99] != iVar3) {
    return 0xffffffff;
  }
  lVar5 = maybe_Mpeg_ReorderFrames(puVar1,1);
  uVar7 = 0;
  if (lVar5 != 0) {
    if (!bVar2) {
      iVar3 = puVar1[0x428];
      goto LAB_001100e0;
    }
    lVar5 = maybe_Mpeg_DecodePicture(puVar1);
    if (lVar5 != 0) {
      uVar7 = 1;
    }
  }
  iVar3 = puVar1[0x428];
LAB_001100e0:
  uVar4 = 0;
  if (iVar3 == 0) {
    maybe_Mpeg_OutputPicture(puVar1,puVar1[0x4c],puVar1[1]);
    puVar1[0x4e] = 0;
    *(undefined4 *)(iVar6 + 8) = puVar1[0x4c] - puVar1[0x31];
    puVar1[0x4c] = puVar1[0x4c] + 1;
    puVar1[1] = puVar1[1] + 1;
    if (!bVar2) {
      maybe_Mpeg_CallbackBackground(param_1);
    }
    uVar4 = uVar7;
  }
  return uVar4;
}

