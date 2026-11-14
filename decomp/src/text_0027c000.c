// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0027c000 - 0x00280000
#include "ghidra_types.h"

// 0x0027cb10  size 0x258
void FUN_0027cb10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x11f);
    iVar1 = FUN_001f48c0(0x5e);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar1 + 800) = 0;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x318) = 0;
    *(undefined4 *)(iVar1 + 800) = uVar2;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar2 = FUN_001f4890(0x120);
    iVar1 = FUN_001f48c0(0x5e);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x32c) = 0;
    *(undefined4 *)(iVar1 + 0x334) = uVar2;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    FUN_00200fc0(0);
  }
  lVar3 = FUN_00201260(0x5e,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if ((*(int *)(param_1 + 0xa18) != 0) && (lVar3 = FUN_00201260(0x5e), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0xa18) = 0;
  }
  FUN_002011b0(0x5d,0x26,0x44);
  FUN_0025a940(*(undefined4 *)(param_1 + 8),0);
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x5e,*(undefined4 *)(&DAT_0032dc00 + *(int *)(param_1 + 8) * 4),1,0);
  }
  iVar1 = FUN_001f48c0(0x5d);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x5e);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,*(undefined4 *)(&DAT_0032dc20 + *(int *)(param_1 + 8) * 4));
  return;
}

// 0x0027cd70  size 0x464
void FUN_0027cd70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 0xa08) != 0)) {
    uVar5 = 4;
  }
  else {
    uVar5 = 2;
  }
  iVar1 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x11a);
    iVar1 = FUN_001f48c0(0x5d);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar1 + 800) = 0;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x318) = 0;
    *(undefined4 *)(iVar1 + 800) = uVar2;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar2 = FUN_001f4890(0x11b);
    iVar1 = FUN_001f48c0(0x5d);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x32c) = 0;
    *(undefined4 *)(iVar1 + 0x334) = uVar2;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar2 = FUN_001f4890(0x11c);
    iVar1 = FUN_001f48c0(0x5d);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x348) = 0;
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = FUN_001f4890(0x11d);
    iVar1 = FUN_001f48c0(0x5d);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x35c) = 0;
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x354) = 0;
    *(undefined4 *)(iVar1 + 0x35c) = uVar2;
    *(undefined4 *)(iVar1 + 0x358) = 1;
    uVar2 = FUN_001f4890(0x11e);
    iVar1 = FUN_001f48c0(0x5d);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x370) = 0;
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x368) = 0;
    *(undefined4 *)(iVar1 + 0x370) = uVar2;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
    FUN_00200fc0(0);
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x11c,2);
  }
  lVar3 = FUN_00201260(0x5d,0);
  lVar4 = FUN_00201260(0x5d,1);
  if (lVar3 == 0 && lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) != 0) {
    lVar3 = FUN_00201260(0x5d,3);
    lVar4 = FUN_00201260(0x5d,uVar5);
    if (lVar3 == 0 && lVar4 == 0) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x5d,*(undefined4 *)(&DAT_0032dbd8 + *(int *)(param_1 + 4) * 4),1,0);
  }
  lVar3 = FUN_001f7ee0(0xffffffffffffffff,0);
  uVar5 = 0;
  if (lVar3 == 0x11) {
    uVar5 = 3;
  }
  FUN_00201140(0x5d,0x26,uVar5,0x44);
  FUN_002011b0(0x5d,0x27,0x1df);
  FUN_002011b0(0x5d,0x28,0x1e0);
  iVar1 = FUN_001f48c0(0x5d);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,*(undefined4 *)(&DAT_0032dbe8 + *(int *)(param_1 + 4) * 4));
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0027d1e0  size 0x2ec
void FUN_0027d1e0(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = param_1[0x285];
  param_1[0x285] = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_001f48c0(0x5c);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    iVar1 = FUN_001f48c0(0x5c);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    FUN_00200fc0(0);
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x116,3);
    if (param_1[0x280] != -1) {
      FUN_001f8ae0(iGpffff8d68 + 0x654,0);
    }
  }
  lVar2 = FUN_00201260(0x5c,0);
  if (lVar2 == 0) {
    param_1[0x284] = 0;
  }
  if ((param_1[0x286] != 0) && (lVar2 = FUN_00201260(0x5c), lVar2 == 0)) {
    param_1[0x286] = 0;
    FUN_001f8ca0(iGpffff8d68 + 0x654);
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x5c,*(undefined4 *)((int)register0x000001c0 + *param_1 * 4 + -0x7990),1,0);
  }
  FUN_002011b0(0x2d,0x39,0xec);
  FUN_002011b0(0x35,0x14,0xf5);
  FUN_002011b0(0x5c,0xd,0xf7);
  if (param_1[0x181] == 0) {
    FUN_00201140(0x5c,0xe,3,0xf8);
  }
  else {
    FUN_002011b0(0x5c,0xe,0xf8);
  }
  uVar3 = FUN_001c1890(0);
  uVar3 = FUN_001bcb00(uVar3);
  FUN_001fe620(0x2d,0x38,uVar3);
  FUN_001f8860(iGpffff8d68 + 0x654);
  iVar1 = FUN_001f48c0(0x35);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x2c);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x2d);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x5c);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,*(undefined4 *)((int)register0x000001c0 + *param_1 * 4 + -0x7988));
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0027d4f0  size 0x128
void FUN_0027d4f0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_FUN_0032db60)[*(int *)((int)param_1 + 0xa04)])(param_1);
  if (*(int *)((int)param_1 + 0xa04) != 0) {
    iVar1 = FUN_001f48c0(0x5b);
    FUN_001ecd80(*piGpffff8d3c + iVar1 * 0x4f4 + 4,0);
    iVar1 = FUN_001f48c0(0x5b);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  }
  if (((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) && (lVar2 = FUN_00201260(0x5c,1), lVar2 == 0)) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x0027d620  size 0x194
void FUN_0027d620(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_001f4890(0x2c);
  iVar2 = FUN_001f48c0(0x5c);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar2 + 800) = 0;
  *(undefined4 *)(iVar2 + 0x310) = 0;
  if (*(int *)(iVar2 + 800) == 0) {
    *(undefined4 *)(iVar2 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x310) = 0;
  if (*(int *)(iVar2 + 800) == 0) {
    *(undefined4 *)(iVar2 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x318) = 0;
  *(undefined4 *)(iVar2 + 800) = uVar1;
  *(undefined4 *)(iVar2 + 0x31c) = 1;
  uVar1 = FUN_001f4890(0x2d);
  iVar2 = FUN_001f48c0(0x5c);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x334) = 0;
  *(undefined4 *)(iVar2 + 0x324) = 0;
  if (*(int *)(iVar2 + 0x334) == 0) {
    *(undefined4 *)(iVar2 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x330) = 1;
  }
  *(undefined4 *)(iVar2 + 0x324) = 0;
  if (*(int *)(iVar2 + 0x334) == 0) {
    *(undefined4 *)(iVar2 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x330) = 1;
  }
  *(undefined4 *)(iVar2 + 0x32c) = 0;
  *(undefined4 *)(iVar2 + 0x334) = uVar1;
  *(undefined4 *)(iVar2 + 0x330) = 1;
  uVar1 = FUN_001f4890(0x198);
  iVar2 = FUN_001f48c0(0x5b);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar2 + 800) = 0;
  *(undefined4 *)(iVar2 + 0x310) = 0;
  if (*(int *)(iVar2 + 800) == 0) {
    *(undefined4 *)(iVar2 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x310) = 0;
  if (*(int *)(iVar2 + 800) == 0) {
    *(undefined4 *)(iVar2 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x318) = 1;
  *(undefined4 *)(iVar2 + 800) = uVar1;
  *(undefined4 *)(iVar2 + 0x31c) = 1;
  return;
}

// 0x0027d7c0  size 0x400
void FUN_0027d7c0(float param_1,float param_2,float *param_3,int param_4,long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_5 == 0) {
    iVar5 = 0;
    if (0 < param_4) {
      fVar9 = param_2 - param_1;
      pfVar4 = param_3;
      do {
        iVar1 = FUN_001f48c0(pfVar4[6]);
        iVar1 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
        FUN_001eeb00(0,iVar1,pfVar4[7],8);
        FUN_001eeb00(0,iVar1,pfVar4[9],8);
        FUN_001eea30(iVar1,pfVar4[8],9,0);
        fVar6 = pfVar4[1];
        fVar10 = pfVar4[3];
        fVar7 = fVar9 / (*pfVar4 - fVar6);
        fVar8 = (fVar7 * (pfVar4[2] - fVar6) - 352.0) + param_1;
        FUN_001eeb00(fVar8,iVar1,pfVar4[7],0x19);
        FUN_001eeb00(fVar8,iVar1,pfVar4[7],0x1a);
        fVar7 = (fVar7 * (fVar10 - fVar6) - 352.0) + param_1;
        FUN_001eeb00(fVar7,iVar1,pfVar4[7],0x1b);
        FUN_001eeb00(fVar7,iVar1,pfVar4[7],0x1c);
        iVar5 = iVar5 + 1;
        pfVar4 = pfVar4 + 10;
      } while (iVar5 < param_4);
    }
    if (param_6 < param_4) {
      iVar1 = FUN_001f48c0(param_3[param_6 * 10 + 6]);
      iVar5 = *piGpffff8d3c;
      uVar3 = FUN_001f4890(0x21);
      FUN_001ed2c0(iVar5 + iVar1 * 0x4f4 + 4,9,param_3[param_6 * 10 + 8],uVar3,1);
    }
  }
  else if (param_6 < param_4) {
    iVar1 = FUN_001f48c0(param_3[param_6 * 10 + 6]);
    iVar5 = *piGpffff8d3c;
    iVar2 = FUN_001f48c0(param_3[param_6 * 10 + 6]);
    FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4,param_3[param_6 * 10 + 7],8);
    iVar2 = FUN_001f48c0(param_3[param_6 * 10 + 6]);
    FUN_001eeb00(0x3f333333,*piGpffff8d3c + iVar2 * 0x4f4 + 4,param_3[param_6 * 10 + 9],8);
    FUN_001ecd80(iVar5 + iVar1 * 0x4f4 + 4,9);
  }
  iVar5 = 0;
  if (0 < param_4) {
    do {
      iVar1 = FUN_001f48c0(param_3[6]);
      fVar9 = param_3[4];
      iVar1 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
      if ((*param_3 < fVar9) || (fVar9 < param_3[1])) {
        iVar1 = FUN_001f48c0(param_3[6]);
        FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,param_3[8],8);
      }
      else {
        iVar2 = FUN_001f48c0(param_3[6]);
        FUN_001eeb00(0x3f333333,*piGpffff8d3c + iVar2 * 0x4f4 + 4,param_3[8],8);
        fVar7 = param_3[1];
        fVar10 = (param_2 - param_1) / (*param_3 - fVar7);
        FUN_001eeb00(fVar10 * (param_3[5] - fVar7) + param_1 + 0.0,iVar1,param_3[9],1);
        FUN_001eeb00(fVar10 * (fVar9 - fVar7) + param_1 + 0.0,iVar1,param_3[8],1);
      }
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 10;
    } while (iVar5 < param_4);
  }
  return;
}

// 0x0027dbc0  size 0x5c4
void FUN_0027dbc0(int param_1,long param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 unaff_s2;
  
  cVar1 = *(char *)(param_1 + 200);
  cVar2 = *(char *)(param_1 + 0xc9);
  if (param_2 == 0) {
    uVar6 = FUN_001c1890(0);
    uVar6 = FUN_001bbaa0(uVar6,7);
    sVar3 = FUN_001d3970(uVar6);
    if (sVar3 == 0x6e) {
      unaff_s2 = 0x9ce;
    }
    else if (sVar3 == 0x6b) {
      unaff_s2 = 0x9cd;
    }
    else if (sVar3 == 0x67) {
      unaff_s2 = 0x9cc;
    }
    FUN_002011b0(0x3a,0x30,unaff_s2);
    FUN_002011b0(0x3a,0x23,0x1a1);
    FUN_00201140(0x3a,0x28,1,0x2f);
    FUN_00201140(0x3a,0x29,1,0x30);
    FUN_002011b0(0x3a,0x21,0x1a2);
    FUN_002011b0(0x3a,0x22,0x1a3);
    if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
      iVar4 = FUN_001f48c0(0x3a);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,0xc,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    else {
      FUN_0027e4b0(cVar1 * 10,0x3a,0x2a,0x1d3,0x1d4,0x1d5,0);
      iVar4 = FUN_001f48c0(0x3a);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,DAT_0032e650,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar5 & 2) == 0) {
      iVar4 = FUN_001f48c0(0x3a);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,0x19,8);
    }
    else {
      FUN_0027e4b0(cVar2 * 10,0x3a,0x2b,0x1d3,0x1d4,0x1d5,0);
      iVar4 = FUN_001f48c0(0x3a);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,DAT_0032e654,8);
    }
  }
  else {
    FUN_002011b0(0x41,0x4c,0x21e);
    FUN_002011b0(0x41,0x4d,0x21f);
    FUN_00201140(0x41,0x67,4,0x220);
    FUN_00201140(0x41,0x58,1,0x2f);
    FUN_00201140(0x41,0x59,1,0x30);
    FUN_00201140(0x41,0x5d,1,0x2f);
    FUN_00201140(0x41,0x5e,1,0x30);
    FUN_002011b0(0x41,0x4a,0x1a2);
    FUN_002011b0(0x41,0x4b,0x1a3);
    FUN_002011b0(0x41,0x4e,0x1a2);
    FUN_002011b0(0x41,0x4f,0x1a3);
    FUN_002011b0(0x41,0x5a,0x2c);
    FUN_002011b0(0x41,0x5b,0x2d);
    FUN_002011b0(0x41,0x5c,0x2e);
    if ((*(uint *)(param_1 + 0x30) & 4) == 0) {
      iVar4 = FUN_001f48c0(0x41);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,0xc,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    else {
      FUN_002010a0(0x41,0x5f,0x3a,*(char *)(param_1 + 0xd8) * 10 + 0x32);
      iVar4 = FUN_001f48c0(0x41);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,DAT_0032e658,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar5 & 8) == 0) {
      iVar4 = FUN_001f48c0(0x41);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,0x19,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    else {
      FUN_002010a0(0x41,0x60,0x3a,*(char *)(param_1 + 0xda) * 10 + 0x32);
      iVar4 = FUN_001f48c0(0x41);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,DAT_0032e65c,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar5 & 0x10) == 0) {
      iVar4 = FUN_001f48c0(0x41);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,0x37,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    else {
      FUN_002010a0(0x41,0x61,0x3a,*(char *)(param_1 + 0xd9) * 10 + 0x32);
      iVar4 = FUN_001f48c0(0x41);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,DAT_0032e660,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar5 & 0x20) == 0) {
      iVar4 = FUN_001f48c0(0x41);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,0x44,8);
    }
    else {
      FUN_002010a0(0x41,0x62,0x3a,*(char *)(param_1 + 0xdb) * 10 + 0x32);
      iVar4 = FUN_001f48c0(0x41);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,DAT_0032e664,8);
    }
  }
  return;
}

// 0x0027e190  size 0x314
void FUN_0027e190(int param_1,long param_2)

{
  if (param_2 == 0) {
    FUN_002011b0(0x3d,0x3d,0x1a6);
    FUN_002011b0(0x3d,0x3e,0x1a7);
    FUN_00201140(0x3d,0x46,1,0x2f);
    FUN_00201140(0x3d,0x47,1,0x30);
    FUN_00201140(0x3d,0x4c,1,0x2f);
    FUN_00201140(0x3d,0x4d,1,0x30);
    FUN_002011b0(0x3d,0x3b,0x1a4);
    FUN_002011b0(0x3d,0x3c,0x1a5);
    FUN_002011b0(0x3d,0x3f,0x1a4);
    FUN_002011b0(0x3d,0x40,0x1a5);
    FUN_0027e4b0(*(char *)(param_1 + 0xce) * 10,0x3d,0x48,0x1d0,0x1d1,0x1d2,0);
    FUN_0027e4b0(*(char *)(param_1 + 0xcf) * 10,0x3d,0x49,0x1d0,0x1d1,0x1d2,0);
    FUN_0027e4b0(*(char *)(param_1 + 0xd0) * 10,0x3d,0x4a,0x1d0,0x1d1,0x1d2,0);
    FUN_0027e4b0(*(char *)(param_1 + 0xd1) * 10,0x3d,0x4b,0x1d0,0x1d1,0x1d2,0);
  }
  else {
    FUN_002011b0(0x3e,0x4b,0x1a8);
    FUN_002011b0(0x3e,0x4c,0x1a9);
    FUN_002011b0(0x3e,0x49,0x1a4);
    FUN_002011b0(0x3e,0x4a,0x1a5);
    FUN_002011b0(0x3e,0x4d,0x227);
    FUN_002011b0(0x3e,0x4e,0x228);
    FUN_00201140(0x3e,0x57,1,0x2f);
    FUN_00201140(0x3e,0x58,1,0x30);
    FUN_00201140(0x3e,0x5c,1,0x2f);
    FUN_00201140(0x3e,0x5d,1,0x30);
    FUN_002011b0(0x3e,0x59,0x2c);
    FUN_002011b0(0x3e,0x5a,0x2d);
    FUN_002011b0(0x3e,0x5b,0x2e);
    FUN_0027e4b0(*(char *)(param_1 + 0xd2) * 10,0x3e,0x5e,0x1d0,0x1d1,0x1d2,0);
    FUN_0027e4b0(*(char *)(param_1 + 0xd3) * 10,0x3e,0x5f,0x1d0,0x1d1,0x1d2,0);
    FUN_0027e4b0(*(char *)(param_1 + 0xd4) * 5,0x3e,0x60,0x1d6,0x1d7,0x1d8,0);
    FUN_0027e4b0(*(char *)(param_1 + 0xd5) * 5,0x3e,0x61,0x1d6,0x1d7,0x1d8,0);
  }
  return;
}

// 0x0027e4b0  size 0x13c
void FUN_0027e4b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (param_7 == 1) {
    if (param_1 < 1) {
      if (param_1 < 0) {
        FUN_002010a0(param_2,param_3,param_5,-iVar1 / 0x3c,-iVar1 % 0x3c);
      }
      else {
        FUN_002010a0(param_2,param_3,param_6,0,0);
      }
    }
    else {
      FUN_002010a0(param_2,param_3,param_4,iVar1 / 0x3c,iVar1 % 0x3c);
    }
  }
  else if (param_1 < 1) {
    if (param_1 < 0) {
      FUN_002010a0(param_2,param_3,param_5,-iVar1);
    }
    else {
      FUN_002010a0(param_2,param_3,param_6,0);
    }
  }
  else {
    FUN_002010a0(param_2,param_3,param_4,param_1);
  }
  return;
}

// 0x0027e5f0  size 0x380
void FUN_0027e5f0(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 unaff_s1_lo;
  undefined4 unaff_s2_lo;
  
  iVar3 = param_1[0xf];
  if (iVar3 == 4) {
LAB_0027e75c:
    lVar4 = FUN_00201260(0x10,1);
    if (lVar4 == 0) {
      param_1[0xf] = 5;
    }
  }
  else {
    if (iVar3 == 3) {
      param_1[0xf] = 4;
      goto LAB_0027e75c;
    }
    if (iVar3 != 2) {
      if (iVar3 != 1) {
        if (iVar3 != 0) {
          iVar3 = param_1[3];
          goto LAB_0027e77c;
        }
        uVar2 = FUN_001f4890(0x411);
        iVar3 = FUN_001f48c0(0x10);
        iVar3 = *piRam0036f42c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
        *(undefined4 *)(iVar3 + 800) = 0;
        *(undefined4 *)(iVar3 + 0x310) = 0;
        if (*(int *)(iVar3 + 800) == 0) {
          *(undefined4 *)(iVar3 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x31c) = 1;
        }
        *(undefined4 *)(iVar3 + 0x310) = 0;
        if (*(int *)(iVar3 + 800) == 0) {
          *(undefined4 *)(iVar3 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x31c) = 1;
        }
        *(undefined4 *)(iVar3 + 0x318) = 0;
        *(undefined4 *)(iVar3 + 800) = uVar2;
        *(undefined4 *)(iVar3 + 0x31c) = 1;
        uVar2 = FUN_001f4890(0x412);
        iVar3 = FUN_001f48c0(0x10);
        iVar3 = *piRam0036f42c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
        *(undefined4 *)(iVar3 + 0x334) = 0;
        *(undefined4 *)(iVar3 + 0x324) = 0;
        if (*(int *)(iVar3 + 0x334) == 0) {
          *(undefined4 *)(iVar3 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x330) = 1;
        }
        *(undefined4 *)(iVar3 + 0x324) = 0;
        if (*(int *)(iVar3 + 0x334) == 0) {
          *(undefined4 *)(iVar3 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x330) = 1;
        }
        *(undefined4 *)(iVar3 + 0x32c) = 0;
        *(undefined4 *)(iVar3 + 0x334) = uVar2;
        *(undefined4 *)(iVar3 + 0x330) = 1;
        param_1[0xf] = 1;
      }
      lVar4 = FUN_00201260(0x10,0);
      if (lVar4 == 0) {
        param_1[0xf] = 2;
      }
    }
  }
  iVar3 = param_1[3];
LAB_0027e77c:
  switch(iVar3) {
  case 2:
    iVar3 = *param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    iVar3 = (iVar3 >> 1) * 4;
    unaff_s1_lo = *(undefined4 *)(&DAT_0032e640 + iVar3);
    unaff_s2_lo = *(undefined4 *)(&DAT_0032e630 + iVar3);
    break;
  case 3:
    if (*param_1 < 2) {
      unaff_s2_lo = 0xd4;
      unaff_s1_lo = 0x1ac;
    }
    else {
      unaff_s2_lo = 0xd5;
      unaff_s1_lo = 0x1ad;
    }
    break;
  case 4:
    if (*param_1 == 0) {
      unaff_s2_lo = 0xd6;
      unaff_s1_lo = 0x1b2;
    }
    else if (*param_1 == 1) {
      unaff_s2_lo = 0xd7;
      unaff_s1_lo = 0x224;
    }
    else {
      unaff_s2_lo = 0xd8;
      unaff_s1_lo = 0x1b3;
    }
    break;
  case 5:
    unaff_s2_lo = 200;
    unaff_s1_lo = 0x196;
    break;
  case 6:
    if (*param_1 < 2) {
      uVar5 = FUN_001c1890(0);
      uVar5 = FUN_001bbaa0(uVar5,7);
      sVar1 = FUN_001d3970(uVar5);
      if (sVar1 == 0x6e) {
        unaff_s2_lo = 0xcb;
      }
      else if (sVar1 == 0x6b) {
        unaff_s2_lo = 0xca;
      }
      else if (sVar1 == 0x67) {
        unaff_s2_lo = 0xc9;
      }
      unaff_s1_lo = 0x1a1;
    }
    else if (*param_1 < 4) {
      unaff_s2_lo = 0xcc;
      unaff_s1_lo = 0x21e;
    }
    else {
      unaff_s2_lo = 0xcd;
      unaff_s1_lo = 0x21f;
    }
    break;
  case 7:
    unaff_s2_lo = 0xce;
    unaff_s1_lo = 0x198;
    break;
  case 8:
    unaff_s2_lo = 0xcf;
    unaff_s1_lo = 0x199;
  }
  FUN_00201140(0x10,0xf,4,unaff_s1_lo);
  FUN_002011b0(0x10,0x10,unaff_s2_lo);
  iVar3 = FUN_001f48c0(0x10);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4);
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffbfffff;
  return;
}

// 0x0027e970  size 0x5c8
void FUN_0027e970(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  
  piVar7 = (int *)param_1;
  cVar1 = *(char *)((int)piVar7 + 0xde);
  iVar2 = piVar7[7];
  piVar7[7] = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_001f4890(0x13);
    iVar2 = FUN_001f48c0(0x3c);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0x14);
    iVar2 = FUN_001f48c0(0x3c);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar3 = FUN_001f4890(0x276);
    iVar2 = FUN_001f48c0(0x3c);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 1;
    *(undefined4 *)(iVar2 + 0x348) = uVar3;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    iVar4 = FUN_001f48c0(0x3c);
    iVar2 = *piGpffff8d3c;
    uVar6 = FUN_001f4890(0x20);
    FUN_001ed2c0(iVar2 + iVar4 * 0x4f4 + 4,8,0x24,uVar6,1);
    FUN_00200fc0(0);
  }
  lVar5 = FUN_00201260(0x3c,0);
  if (lVar5 == 0) {
    piVar7[6] = 0;
    uVar8 = (uint)(cVar1 != '\0');
    if (*piVar7 == 1) {
      FUN_00200d70(0x3c,*(undefined4 *)(&DAT_0032e620 + piVar7[0xb] * 4),1,0);
      if (piVar7[8] == 0) {
        iVar2 = FUN_001f48c0(0x3c);
        FUN_001eeb00(0x3f333333,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x16,8);
      }
      iVar2 = FUN_001f48c0(0x3c);
      iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x338) = 0;
      if (*(int *)(iVar2 + 0x348) == 0) {
        *(undefined4 *)(iVar2 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x344) = 1;
      }
      iVar2 = piVar7[8];
    }
    else {
      FUN_00200d70(0x3c,*(undefined4 *)((int)register0x000001c0 + uVar8 * 4 + -0x7900),0,0);
      FUN_00201260(0x3c,2);
      iVar2 = piVar7[8];
    }
    if (iVar2 == 0) {
      iVar2 = FUN_001f48c0(0x3c);
      FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4,
                   *(undefined4 *)((int)register0x000001c0 + uVar8 * 4 + -0x78f8),8);
    }
  }
  if ((piVar7[8] != 0) && (lVar5 = FUN_00201260(0x3c), lVar5 == 0)) {
    piVar7[8] = 0;
  }
  FUN_002011b0(0x3c,0x25,0x199);
  FUN_002011b0(0x3c,0x22,0x32);
  FUN_002011b0(0x3c,0x23,0x33);
  FUN_002011b0(0x3c,0x21,0x199);
  FUN_002011b0(0x3c,0x1e,0x2c);
  FUN_002011b0(0x3c,0x1f,0x2d);
  FUN_002011b0(0x3c,0x20,0x2e);
  iVar2 = piVar7[0xb];
  if ((iVar2 == 0) && (piVar7[10] == *piVar7)) {
    FUN_002011b0(7,0x2e,0x1b9);
  }
  else if (iVar2 == 1) {
    FUN_002011b0(7,0x2e,0x1ba);
  }
  else if (iVar2 == 2) {
    FUN_002011b0(7,0x2e,0x1bb);
  }
  else {
    FUN_002011b0(7,0x2e,*(undefined4 *)((int)register0x000001c0 + *piVar7 * 4 + -0x78f0));
  }
  lVar5 = FUN_002aca40(param_1);
  if (lVar5 == 1) {
    iVar2 = FUN_001f48c0(0x3c);
    FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x24,8);
  }
  else {
    iVar2 = FUN_001f48c0(0x3c);
    FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x24,8);
    iVar2 = FUN_001f48c0(0x3c);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
    if (*(int *)(iVar2 + 0x3c0) == 0) {
      *(undefined4 *)(iVar2 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3bc) = 1;
    }
  }
  FUN_00201260(0x3c,8);
  iVar2 = FUN_001f48c0(0x3c);
  FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,
               *(undefined4 *)((int)register0x000001c0 + (uint)(cVar1 == '\0') * 4 + -0x78e8),8);
  iVar2 = FUN_001f48c0(0x3c);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0027ef40  size 0x4f4
void FUN_0027ef40(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_2c = DAT_0032e5e4;
  uStack_30 = DAT_0032e5e0;
  uStack_24 = DAT_0032e5ec;
  uStack_28 = DAT_0032e5e8;
  uStack_18 = DAT_0032e5f8;
  uStack_14 = DAT_0032e5fc;
  uStack_10 = DAT_0032e600;
  uStack_c = DAT_0032e604;
  piVar6 = (int *)param_1;
  fStack_20 = (float)(int)(char)piVar6[0x37];
  fStack_1c = (float)(int)(char)piVar6[0x28];
  iVar3 = piVar6[7];
  piVar6[7] = 0;
  if (iVar3 != 0) {
    uVar1 = FUN_001f4890(0x11);
    iVar3 = FUN_001f48c0(0x3b);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar1;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar1 = FUN_001f4890(0x12);
    iVar3 = FUN_001f48c0(0x3b);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar1;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    iVar2 = FUN_001f48c0(0x3b);
    iVar3 = *piGpffff8d3c;
    uVar5 = FUN_001f4890(0x20);
    FUN_001ed2c0(iVar3 + iVar2 * 0x4f4 + 4,8,0x29,uVar5,1);
    FUN_00200fc0(0);
  }
  lVar4 = FUN_00201260(0x3b,0);
  if (lVar4 == 0) {
    piVar6[6] = 0;
  }
  if ((piVar6[8] != 0) && (lVar4 = FUN_00201260(0x3b), lVar4 == 0)) {
    piVar6[8] = 0;
  }
  if ((*piGpffff8d78 == 1) && (piVar6[0xe] == 0)) {
    FUN_00200d70(0x3b,*(undefined4 *)(&DAT_0032e610 + (*piVar6 + piVar6[0xb]) * 4),1,0);
  }
  else {
    FUN_00200ef0(0);
  }
  lVar4 = FUN_002aca40(param_1);
  if (lVar4 == 1) {
    iVar3 = FUN_001f48c0(0x3b);
    FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x29,8);
  }
  else {
    iVar3 = FUN_001f48c0(0x3b);
    FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x29,8);
    iVar3 = FUN_001f48c0(0x3b);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
    if (*(int *)(iVar3 + 0x3c0) == 0) {
      *(undefined4 *)(iVar3 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3bc) = 1;
    }
  }
  FUN_0027d7c0(0x42d00000,0x44020000,&uStack_30,1,piVar6[0xe],*piVar6);
  FUN_002011b0(0x3b,0x2a,0x198);
  FUN_002010a0(0x3b,0x1e,0x29,0);
  FUN_002010a0(0x3b,0x1f,0x29,100);
  FUN_002010a0(0x3b,0x27,0x29,(char)piVar6[0x37] * 10);
  FUN_002011b0(0x3b,0x24,0x2c);
  FUN_002011b0(0x3b,0x25,0x2d);
  FUN_002011b0(0x3b,0x26,0x2e);
  iVar3 = piVar6[0xb];
  if ((iVar3 == 0) && (piVar6[10] == *piVar6)) {
    FUN_002011b0(7,0x2e,0x1b9);
  }
  else if (iVar3 == 1) {
    FUN_002011b0(7,0x2e,0x1ba);
  }
  else if (iVar3 == 2) {
    FUN_002011b0(7,0x2e,0x1bb);
  }
  else {
    FUN_002011b0(7,0x2e,*(undefined4 *)((int)register0x000001c0 + *piVar6 * 4 + -0x7908));
  }
  FUN_00201260(0x3b,8);
  iVar3 = FUN_001f48c0(0x3b);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

// 0x0027f440  size 0xcf4
void FUN_0027f440(undefined8 param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float afStack_f0 [5];
  float fStack_dc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar12 = 0;
  bVar2 = true;
  uVar13 = 0;
  uVar6 = FUN_001c1890(0);
  iVar3 = FUN_001bc3f0(uVar6);
  lVar7 = FUN_001d23c0(iVar3 + 0x14,7);
  if (lVar7 == 3) {
    uVar12 = 0xc0a00000;
    uVar13 = 0x40a00000;
  }
  else if (lVar7 == 2) {
    uVar12 = 0xc0400000;
    uVar13 = 0x40400000;
  }
  else if (lVar7 == 1) {
    uVar12 = 0xc0000000;
    uVar13 = 0x40000000;
  }
  pfVar9 = afStack_f0;
  pfVar10 = (float *)&DAT_0032e480;
  iVar3 = 0x1e;
  do {
    iVar3 = iVar3 + -1;
    fVar1 = pfVar10[1];
    *pfVar9 = *pfVar10;
    pfVar9[1] = fVar1;
    pfVar10 = pfVar10 + 2;
    pfVar9 = pfVar9 + 2;
  } while (0 < iVar3);
  piVar11 = (int *)param_1;
  afStack_f0[4] = (float)(int)(char)piVar11[0x32];
  fStack_dc = (float)(int)(char)piVar11[0x23];
  fStack_b8 = (float)(int)*(char *)((int)piVar11 + 0xc9);
  fStack_b4 = (float)(int)*(char *)((int)piVar11 + 0x8d);
  fStack_90 = (float)(int)(char)piVar11[0x36];
  fStack_8c = (float)(int)(char)piVar11[0x27];
  fStack_68 = (float)(int)*(char *)((int)piVar11 + 0xda);
  fStack_64 = (float)(int)*(char *)((int)piVar11 + 0x9e);
  fStack_40 = (float)(int)*(char *)((int)piVar11 + 0xd9);
  fStack_3c = (float)(int)*(char *)((int)piVar11 + 0x9d);
  fStack_18 = (float)(int)*(char *)((int)piVar11 + 0xdb);
  fStack_14 = (float)(int)*(char *)((int)piVar11 + 0x9f);
  iVar3 = piVar11[7];
  piVar11[7] = 0;
  afStack_f0[2] = (float)uVar13;
  afStack_f0[3] = (float)uVar12;
  uStack_c0 = uVar13;
  uStack_bc = uVar12;
  uStack_98 = uVar13;
  uStack_94 = uVar12;
  uStack_70 = uVar13;
  uStack_6c = uVar12;
  uStack_48 = uVar13;
  uStack_44 = uVar12;
  uStack_20 = uVar13;
  uStack_1c = uVar12;
  if (iVar3 != 0) {
    uVar4 = FUN_001f7d30(0xffffffffffffffff,0);
    lVar7 = FUN_001f8040(0xffffffffffffffff,0);
    if (lVar7 == 0x11c) {
      iVar3 = FUN_001f48c0(0x3a);
      FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x1f,0x16,DAT_0032e5a4);
    }
    else {
      iVar3 = FUN_001f48c0(0x3a);
      FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x1f,0x16,
                   *(undefined4 *)(&DAT_0032e590 + (uVar4 & 0xff) * 4));
    }
    iVar3 = FUN_001f48c0(0x3a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x20,0x16,
                 *(undefined4 *)(&DAT_0032e570 + (uVar4 & 0xff) * 4));
    uVar13 = FUN_001f4890(0xe);
    iVar3 = FUN_001f48c0(0x3a);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar13;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar13 = FUN_001f4890(0xf);
    iVar3 = FUN_001f48c0(0x3a);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar13;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar13 = FUN_001f4890(0x10);
    iVar3 = FUN_001f48c0(0x3a);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar13;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    uVar13 = FUN_001f4890(0x270);
    iVar3 = FUN_001f48c0(0x3a);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar3 + 900) = 0;
    *(undefined4 *)(iVar3 + 0x374) = 0;
    if (*(int *)(iVar3 + 900) == 0) {
      *(undefined4 *)(iVar3 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x380) = 1;
    }
    *(undefined4 *)(iVar3 + 0x374) = 0;
    if (*(int *)(iVar3 + 900) == 0) {
      *(undefined4 *)(iVar3 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x380) = 1;
    }
    *(undefined4 *)(iVar3 + 0x37c) = 0;
    *(undefined4 *)(iVar3 + 900) = uVar13;
    *(undefined4 *)(iVar3 + 0x380) = 1;
    iVar5 = FUN_001f48c0(0x3a);
    iVar3 = *piGpffff8d3c;
    uVar6 = FUN_001f4890(0x270);
    FUN_001ed190(iVar3 + iVar5 * 0x4f4 + 4,uVar6);
    uVar13 = FUN_001f4890(0x271);
    iVar3 = FUN_001f48c0(0x3a);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x398) = 0;
    *(undefined4 *)(iVar3 + 0x388) = 0;
    if (*(int *)(iVar3 + 0x398) == 0) {
      *(undefined4 *)(iVar3 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x394) = 1;
    }
    *(undefined4 *)(iVar3 + 0x388) = 0;
    if (*(int *)(iVar3 + 0x398) == 0) {
      *(undefined4 *)(iVar3 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x394) = 1;
    }
    *(undefined4 *)(iVar3 + 0x390) = 0;
    *(undefined4 *)(iVar3 + 0x398) = uVar13;
    *(undefined4 *)(iVar3 + 0x394) = 1;
    uVar13 = FUN_001f4890(0x272);
    iVar3 = FUN_001f48c0(0x41);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar13;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar13 = FUN_001f4890(0x273);
    iVar3 = FUN_001f48c0(0x41);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar13;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar13 = FUN_001f4890(0x274);
    iVar3 = FUN_001f48c0(0x41);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 0;
    *(undefined4 *)(iVar3 + 0x348) = uVar13;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    iVar5 = FUN_001f48c0(0x3a);
    iVar3 = *piGpffff8d3c;
    uVar6 = FUN_001f4890(0x20);
    FUN_001ed2c0(iVar3 + iVar5 * 0x4f4 + 4,8,0x2e,uVar6,1);
    piVar11[0xd] = 0;
    FUN_00200fc0(0);
    FUN_00200a10(0x3a,(int)register0x000001c0 + -0x7914,1,1);
  }
  lVar7 = FUN_00201260(0x3a,0);
  if (lVar7 == 0) {
    piVar11[6] = 0;
  }
  if (piVar11[8] != 0) {
    if (piVar11[0xd] == 0) {
      lVar7 = FUN_00201260(0x3a);
      if (lVar7 == 0) {
        piVar11[8] = 0;
      }
    }
    else {
      lVar7 = FUN_00201260(0x41);
      if (lVar7 == 0) {
        piVar11[8] = 0;
      }
    }
  }
  FUN_0027d7c0(0x43300000,0x44020000,afStack_f0,6,piVar11[0xe],*piVar11);
  if (*piVar11 < 2) {
    if (piVar11[0xd] == 1) {
      FUN_002008b0(0);
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
      lVar7 = FUN_00201260(0x3a,5);
      lVar8 = FUN_00201260(0x41,2);
      if (lVar7 == 0 && lVar8 == 0) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
        piVar11[0xd] = 0;
        iVar3 = FUN_001f48c0(0x3a);
        iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x374) = 0;
        if (*(int *)(iVar3 + 900) == 0) {
          *(undefined4 *)(iVar3 + 0x380) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x380) = 1;
        }
        iVar3 = FUN_001f48c0(0x41);
        iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x338) = 0;
        if (*(int *)(iVar3 + 0x348) == 0) {
          *(undefined4 *)(iVar3 + 0x344) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x344) = 1;
        }
        FUN_00200fc0(0);
        FUN_00200a10(0x3a,(int)register0x000001c0 + -0x7910,1,1);
      }
      else {
        bVar2 = false;
      }
      FUN_0027dbc0(param_1,1);
      iVar3 = FUN_001f48c0(0x41);
      FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    }
    else {
      FUN_002008b0();
    }
    FUN_0027dbc0(param_1,0);
  }
  else {
    if (piVar11[0xd] == 0) {
      FUN_002008b0(0);
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
      lVar7 = FUN_00201260(0x3a,6);
      lVar8 = FUN_00201260(0x41,0);
      if (lVar7 == 0 && lVar8 == 0) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
        piVar11[0xd] = 1;
        iVar3 = FUN_001f48c0(0x3a);
        iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x388) = 0;
        if (*(int *)(iVar3 + 0x398) == 0) {
          *(undefined4 *)(iVar3 + 0x394) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x394) = 1;
        }
        iVar3 = FUN_001f48c0(0x41);
        iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x310) = 0;
        if (*(int *)(iVar3 + 800) == 0) {
          *(undefined4 *)(iVar3 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x31c) = 1;
        }
        FUN_00200fc0(0);
        FUN_00200a10(0x41,(int)register0x000001c0 + -0x790c,1,1);
      }
      else {
        bVar2 = false;
      }
      FUN_0027dbc0(param_1,0);
    }
    else {
      FUN_002008b0(1);
    }
    FUN_0027dbc0(param_1,1);
    iVar3 = FUN_001f48c0(0x41);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  }
  if ((bVar2) && (piVar11[0xe] == 0)) {
    if (piVar11[0xd] == 0) {
      FUN_00200d70(0x3a,*(undefined4 *)(&DAT_0032e5b0 + *piVar11 * 4),1,0);
    }
    else {
      FUN_00200d70(0x41,*(undefined4 *)(&DAT_0032e5b0 + (*piVar11 + piVar11[0xb]) * 4),1,0);
    }
  }
  else {
    FUN_00200ef0(0);
  }
  lVar7 = FUN_002aca40(param_1);
  if (lVar7 == 1) {
    iVar3 = FUN_001f48c0(0x3a);
    FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x2e,8);
  }
  else {
    iVar3 = FUN_001f48c0(0x3a);
    FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x2e,8);
    iVar3 = FUN_001f48c0(0x3a);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
    if (*(int *)(iVar3 + 0x3c0) == 0) {
      *(undefined4 *)(iVar3 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3bc) = 1;
    }
  }
  FUN_002011b0(0x3a,0x2f,0x197);
  iVar3 = piVar11[0xb];
  if ((iVar3 == 0) && (piVar11[10] == *piVar11)) {
    FUN_002011b0(7,0x2e,0x1b9);
  }
  else if (iVar3 == 1) {
    FUN_002011b0(7,0x2e,0x1ba);
  }
  else if (iVar3 == 2) {
    FUN_002011b0(7,0x2e,0x1bb);
  }
  else {
    FUN_002011b0(7,0x2e,0x1bc);
  }
  FUN_00201260(0x3a,2);
  FUN_00201260(0x3a,8);
  iVar3 = FUN_001f48c0(0x3a);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

