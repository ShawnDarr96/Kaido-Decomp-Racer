// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0022c000 - 0x00230000
#include "ghidra_types.h"

// 0x0022c1f0  size 0x310
void FUN_0022c1f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (iVar1 == 0) {
    iVar1 = param_1[0xc];
  }
  else {
    uVar2 = FUN_001f4890(0x5d);
    iVar1 = FUN_001f48c0(2);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x5e);
    iVar1 = FUN_001f48c0(2);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x1d0);
    iVar1 = FUN_001f48c0(0x33);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
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
    FUN_00200fc0(0);
    iVar1 = param_1[0xc];
  }
  if ((iVar1 != 0) && (lVar3 = FUN_00201260(2), lVar3 == 0)) {
    param_1[0xc] = 0;
  }
  lVar3 = FUN_00201260(2,0);
  if (lVar3 == 0) {
    param_1[10] = 0;
  }
  if (*piRam0036f468 == 1) {
    FUN_00200d70(2,*(undefined4 *)(&DAT_0036e9c8 + *param_1 * 4),1,0);
  }
  uVar4 = FUN_001c1890(0);
  lVar3 = FUN_001c1820(uVar4);
  if (lVar3 == 0) {
    FUN_00201140(2,0xc,3,0xf9);
  }
  else {
    FUN_002011b0(2,0xc,0xf9);
  }
  FUN_002011b0(2,0xd,0xfa);
  iVar1 = FUN_001f48c0(1);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(2);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x0022c520  size 0xc0
void FUN_0022c520(undefined8 param_1)

{
  long lVar1;
  
  if ((*(uint *)(iRam0036f458 + 0x28) & 2) == 0) {
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_FUN_0032ad80)[*(int *)((int)param_1 + 0x1c)])(param_1);
  if (((*(uint *)(iRam0036f458 + 0x28) & 4) == 0) &&
     (lVar1 = FUN_001fb170((int)param_1 + 0x18), lVar1 == 1)) {
    if ((*(uint *)(iRam0036f458 + 0x28) & 1) == 0) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x0022c5e0  size 0x118
void FUN_0022c5e0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_001f4890(0x5d);
  iVar2 = FUN_001f48c0(2);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
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
  uVar1 = FUN_001f4890(0x5e);
  iVar2 = FUN_001f48c0(2);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
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
  return;
}

// 0x0022c720  size 0x194
void FUN_0022c720(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(uint *)(iRam0036f458 + 0x28) & 2) == 0) {
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1000;
  }
  iVar1 = param_1[6];
  uVar3 = 0x14c;
  if (param_1[2] != 0) {
    uVar3 = 0x14d;
  }
  param_1[6] = 0;
  if (iVar1 != 0) {
    FUN_001ff610(2);
  }
  lVar2 = FUN_001ff320(uVar3,*param_1,0x36e9d8);
  if (param_1[7] != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      param_1[7] = 0;
    }
  }
  if (lVar2 == 2) {
    param_1[5] = 0;
  }
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  FUN_001ff790(3,0xffffffffffffffff);
  FUN_00201260(0x13,0);
  iVar1 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  if (((*(uint *)(iRam0036f458 + 0x28) & 4) == 0) && (lVar2 = FUN_001fb170(param_1 + 1), lVar2 == 1)
     ) {
    if ((*(uint *)(iRam0036f458 + 0x28) & 1) == 0) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x0022c8c0  size 0xb4
void FUN_0022c8c0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(iGpffff8d68 + 0x24) == 0x19) {
    uVar1 = FUN_001f4890(0x41);
    iVar2 = FUN_001f48c0(0x13);
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
  }
  return;
}

// 0x0022c980  size 0x19c
void FUN_0022c980(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_002011b0(0x2d,0x37,0xeb);
  FUN_002011b0(0x2d,0x39,0xec);
  FUN_002011b0(0x2d,0x3a,0xed);
  FUN_002011b0(0x2d,0x3b,0xee);
  FUN_002011b0(0x2d,0x3c,0xef);
  FUN_002011b0(0x2d,0x3d,0xf0);
  FUN_002011b0(0x2d,0x3e,0xf1);
  FUN_002011b0(0x2d,0x3f,0xf2);
  FUN_002011b0(0x2d,0x40,0xf3);
  uVar2 = FUN_001c1890(0);
  uVar2 = FUN_001bcb00(uVar2);
  FUN_001fe620(0x2d,0x38,uVar2);
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x2d,*(undefined4 *)(&DAT_0032af00 + *param_1 * 4),1,0);
  }
  iVar1 = FUN_001f48c0(0x2c);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x2d);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,*(undefined4 *)(&DAT_0032af30 + *param_1 * 4));
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0022cb20  size 0x30
void FUN_0022cb20(void)

{
  FUN_001f8ca0(iGpffff8d68 + 0x654);
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 4;
  return;
}

// 0x0022cb50  size 0x188
void FUN_0022cb50(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_001f8420(*(undefined4 *)(iGpffff8d68 + 0x24));
  bVar1 = false;
  if (lVar2 == 0) {
    lVar2 = FUN_00201260(0x2d,3);
    if (lVar2 == 1) {
      bVar1 = true;
    }
  }
  lVar2 = FUN_00201260(0x2d,0);
  if (lVar2 == 1) {
    bVar1 = true;
  }
  if (!bVar1) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
    }
  }
  FUN_0022c980(param_1);
  FUN_001f8860(iGpffff8d68 + 0x654);
  if ((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) {
    lVar2 = FUN_001f8420(*(undefined4 *)((int)param_1 + 4));
    bVar1 = false;
    if (lVar2 == 0) {
      lVar2 = FUN_00201260(0x2d,5);
      if (lVar2 == 1) {
        bVar1 = true;
      }
    }
    if (*(int *)(iGpffff8d68 + 0x20) == 0x28) {
      lVar2 = FUN_00201260(0x2d,2);
      if (lVar2 == 1) {
        bVar1 = true;
      }
    }
    else {
      lVar2 = FUN_00201260(0x2d,1);
      if (lVar2 == 1) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
      }
    }
  }
  return;
}

// 0x0022cce0  size 0x328
void FUN_0022cce0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_001f4890(0x24);
  iVar2 = FUN_001f48c0(0x2d);
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
  uVar1 = FUN_001f4890(0x25);
  iVar2 = FUN_001f48c0(0x2d);
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
  uVar1 = FUN_001f4890(0x26);
  iVar2 = FUN_001f48c0(0x2d);
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
  *(undefined4 *)(iVar2 + 0x340) = 0;
  *(undefined4 *)(iVar2 + 0x348) = uVar1;
  *(undefined4 *)(iVar2 + 0x344) = 1;
  uVar1 = FUN_001f4890(0x27);
  iVar2 = FUN_001f48c0(0x2d);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x35c) = 0;
  *(undefined4 *)(iVar2 + 0x34c) = 0;
  if (*(int *)(iVar2 + 0x35c) == 0) {
    *(undefined4 *)(iVar2 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x358) = 1;
  }
  *(undefined4 *)(iVar2 + 0x34c) = 0;
  if (*(int *)(iVar2 + 0x35c) == 0) {
    *(undefined4 *)(iVar2 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x358) = 1;
  }
  *(undefined4 *)(iVar2 + 0x354) = 0;
  *(undefined4 *)(iVar2 + 0x35c) = uVar1;
  *(undefined4 *)(iVar2 + 0x358) = 1;
  uVar1 = FUN_001f4890(0x28);
  iVar2 = FUN_001f48c0(0x2d);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x370) = 0;
  *(undefined4 *)(iVar2 + 0x360) = 0;
  if (*(int *)(iVar2 + 0x370) == 0) {
    *(undefined4 *)(iVar2 + 0x36c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x36c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x360) = 0;
  if (*(int *)(iVar2 + 0x370) == 0) {
    *(undefined4 *)(iVar2 + 0x36c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x36c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x368) = 0;
  *(undefined4 *)(iVar2 + 0x370) = uVar1;
  *(undefined4 *)(iVar2 + 0x36c) = 1;
  FUN_00200fc0(0);
  if (*(int *)(iGpffff8d68 + 0x24) == 0x1f) {
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x116,3);
    FUN_001f8ae0(iGpffff8d68 + 0x654,0);
  }
  else if (*(int *)(iGpffff8d68 + 0x24) != 0x28) {
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x116,3);
    FUN_001f8ae0(iGpffff8d68 + 0x654,0);
  }
  return;
}

// 0x0022d010  size 0x2f0
void FUN_0022d010(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  int iVar8;
  int iStack_4;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
    iVar1 = FUN_001f68b0(1);
    FUN_002008b0(4 < iVar1 + 1);
  }
  else {
    FUN_002008b0(0);
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x78,*(undefined4 *)(&DAT_0032af60 + param_1[1] * 4),1,0);
  }
  FUN_001fe3d0(param_1 + 3,0x78,7,6);
  iVar2 = FUN_001f68b0(1);
  iVar2 = iVar2 + 1;
  FUN_001fe370(&iStack_4,param_1[3],param_1[1],*param_1,iVar2,4);
  iVar1 = (*param_1 + iVar2) - param_1[1];
  iVar8 = 0;
  puVar6 = &DAT_0032af90;
  puVar5 = &DAT_0032afc0;
  while( true ) {
    iVar3 = iVar2;
    if (4 < iVar2) {
      iVar3 = 5;
    }
    if ((iVar3 <= iVar8) ||
       ((iVar1 = iVar1 % iVar2, iVar8 == 4 && (iVar1 = iStack_4, iStack_4 == -1)))) break;
    uVar4 = FUN_001f69b0(iVar1,1);
    FUN_002011b0(0x78,*puVar6,uVar4);
    iVar3 = FUN_001f48c0(0x78);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,*puVar5,0x16,
                 *(undefined4 *)(&DAT_0032af70 + iVar1 * 4));
    iVar1 = iVar1 + 1;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    iVar8 = iVar8 + 1;
  }
  if ((iVar2 < 4) && (iVar2 < 4)) {
    puVar7 = &DAT_0032afa8 + iVar2 * 4;
    puVar5 = &DAT_0032afc0 + iVar2;
    do {
      iVar1 = FUN_001f48c0(0x78);
      FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*(undefined4 *)(puVar7 + -4),8);
      iVar1 = FUN_001f48c0(0x78);
      FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*puVar5,8);
      iVar2 = iVar2 + 1;
      puVar7 = puVar7 + 4;
      puVar5 = puVar5 + 1;
    } while (iVar2 < 4);
  }
  FUN_002011b0(7,0x2e,0x354);
  iVar1 = FUN_001f48c0(0x78);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x77);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_0020eb50();
  return;
}

// 0x0022d380  size 0x114
void FUN_0022d380(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00201260(0x78,0);
  lVar3 = FUN_00201260(0x78,1);
  if (lVar2 == 0 && lVar3 == 0) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
    }
  }
  FUN_0022d010(param_1);
  FUN_001ff790(0,0xffffffffffffffff);
  if ((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) {
    bVar1 = false;
    if (*(int *)(iGpffff8d68 + 0x20) == 0x1b) {
      lVar2 = FUN_00201260(0x78,*(int *)((int)param_1 + 4) + 2);
      if (lVar2 == 1) {
        bVar1 = true;
      }
    }
    else {
      FUN_00200ef0(0);
    }
    if (!bVar1) {
      if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
      }
    }
  }
  return;
}

// 0x0022d4a0  size 0x468
void FUN_0022d4a0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  if (*(int *)(iGpffff8d68 + 0x24) == 0xd) {
    uVar1 = FUN_001f4890(0x33);
    iVar2 = FUN_001f48c0(0x78);
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
  }
  uVar1 = FUN_001f4890(0x32);
  iVar2 = FUN_001f48c0(0x78);
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
  uVar1 = FUN_001f4890(0x34);
  iVar2 = FUN_001f48c0(0x78);
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
  *(undefined4 *)(iVar2 + 0x340) = 0;
  *(undefined4 *)(iVar2 + 0x348) = uVar1;
  *(undefined4 *)(iVar2 + 0x344) = 1;
  uVar1 = FUN_001f4890(0x35);
  iVar2 = FUN_001f48c0(0x78);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x35c) = 0;
  *(undefined4 *)(iVar2 + 0x34c) = 0;
  if (*(int *)(iVar2 + 0x35c) == 0) {
    *(undefined4 *)(iVar2 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x358) = 1;
  }
  *(undefined4 *)(iVar2 + 0x34c) = 0;
  if (*(int *)(iVar2 + 0x35c) == 0) {
    *(undefined4 *)(iVar2 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x358) = 1;
  }
  *(undefined4 *)(iVar2 + 0x354) = 0;
  *(undefined4 *)(iVar2 + 0x35c) = uVar1;
  *(undefined4 *)(iVar2 + 0x358) = 1;
  uVar1 = FUN_001f4890(0x36);
  iVar2 = FUN_001f48c0(0x78);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x370) = 0;
  *(undefined4 *)(iVar2 + 0x360) = 0;
  if (*(int *)(iVar2 + 0x370) == 0) {
    *(undefined4 *)(iVar2 + 0x36c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x36c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x360) = 0;
  if (*(int *)(iVar2 + 0x370) == 0) {
    *(undefined4 *)(iVar2 + 0x36c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x36c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x368) = 0;
  *(undefined4 *)(iVar2 + 0x370) = uVar1;
  *(undefined4 *)(iVar2 + 0x36c) = 1;
  uVar1 = FUN_001f4890(0x37);
  iVar2 = FUN_001f48c0(0x78);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x378) = 0xffffffff;
  *(undefined4 *)(iVar2 + 900) = 0;
  *(undefined4 *)(iVar2 + 0x374) = 0;
  if (*(int *)(iVar2 + 900) == 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x380) = 1;
  }
  *(undefined4 *)(iVar2 + 0x374) = 0;
  if (*(int *)(iVar2 + 900) == 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x380) = 1;
  }
  *(undefined4 *)(iVar2 + 0x37c) = 0;
  *(undefined4 *)(iVar2 + 900) = uVar1;
  *(undefined4 *)(iVar2 + 0x380) = 1;
  uVar1 = FUN_001f4890(0x38);
  iVar2 = FUN_001f48c0(0x78);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x38c) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x398) = 0;
  *(undefined4 *)(iVar2 + 0x388) = 0;
  if (*(int *)(iVar2 + 0x398) == 0) {
    *(undefined4 *)(iVar2 + 0x394) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x394) = 1;
  }
  *(undefined4 *)(iVar2 + 0x388) = 0;
  if (*(int *)(iVar2 + 0x398) == 0) {
    *(undefined4 *)(iVar2 + 0x394) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x394) = 1;
  }
  *(undefined4 *)(iVar2 + 0x390) = 0;
  *(undefined4 *)(iVar2 + 0x398) = uVar1;
  *(undefined4 *)(iVar2 + 0x394) = 1;
  uVar1 = FUN_001f4890(0x39);
  iVar2 = FUN_001f48c0(0x78);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x3a0) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x3ac) = 0;
  *(undefined4 *)(iVar2 + 0x39c) = 0;
  if (*(int *)(iVar2 + 0x3ac) == 0) {
    *(undefined4 *)(iVar2 + 0x3a8) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x3a8) = 1;
  }
  *(undefined4 *)(iVar2 + 0x39c) = 0;
  if (*(int *)(iVar2 + 0x3ac) == 0) {
    *(undefined4 *)(iVar2 + 0x3a8) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x3a8) = 1;
  }
  *(undefined4 *)(iVar2 + 0x3a4) = 0;
  *(undefined4 *)(iVar2 + 0x3ac) = uVar1;
  *(undefined4 *)(iVar2 + 0x3a8) = 1;
  FUN_00200fc0(0);
  FUN_00200a10(0x78,(int)register0x000001c0 + -0x7d10,2,0);
  FUN_00200fc0(0);
  return;
}

// 0x0022d910  size 0xa4
int FUN_0022d910(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_001c1890(0);
  iVar1 = iVar1 + 0x531c;
  iVar3 = 0;
  iVar2 = iVar1;
  do {
    if (*(int *)(iVar2 + 0x4678) == -1) break;
    if (*(char *)(iVar2 + 0x4680) == '\x01') {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x28;
  } while (iVar3 < 200);
  iVar2 = 0;
  do {
    if (*(int *)(iVar1 + 0x65b8) == -1) {
      return iVar4;
    }
    if (*(char *)(iVar1 + 0x65c0) == '\x01') {
      iVar4 = iVar4 + 1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x28;
  } while (iVar2 < 200);
  return iVar4;
}

// 0x0022d9c0  size 0x32c
void FUN_0022d9c0(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  int unaff_s2_lo;
  int iVar11;
  
  uVar6 = FUN_001c1890(0);
  iVar3 = FUN_001f48c0(0x12);
  iVar4 = *piGpffff8d3c;
  uVar7 = FUN_001c1890(0);
  uVar7 = FUN_001bcb00(uVar7);
  FUN_001fe620(0x12,0x36,uVar7);
  cVar1 = FUN_001c16e0(uVar6);
  uVar2 = FUN_001c16d0(uVar6);
  switch(uVar2) {
  case 0:
    unaff_s2_lo = 0;
    break;
  case 1:
  case 2:
    unaff_s2_lo = 1;
    break;
  case 3:
    unaff_s2_lo = 2;
    break;
  case 4:
  case 5:
    unaff_s2_lo = 3;
  }
  FUN_001eea30(iVar4 + iVar3 * 0x4f4 + 4,0x35,0x16,
               *(undefined4 *)((uint)(cVar1 != '\0') * 4 + unaff_s2_lo * 8 + 0x32b040));
  uVar2 = FUN_001c16c0(uVar6);
  uVar7 = FUN_001f6f10(uVar2);
  uVar2 = FUN_001c16b0(uVar6);
  uVar8 = FUN_001f6f00(uVar2);
  FUN_002010a0(0x12,0x2f,0x43,uVar7,uVar8);
  uVar6 = FUN_001c0ef0(uVar6);
  FUN_002010a0(0x12,0x30,0x3a,uVar6);
  uVar6 = FUN_001c1890(0);
  lVar9 = FUN_001b89d0(uVar6);
  if (0 < lVar9) {
    iVar11 = 0;
    iVar4 = FUN_001c1890(0);
    iVar4 = iVar4 + 0x531c;
    iVar3 = 0;
    do {
      if ((*(char *)(iVar4 + 0x3868) != '\0') && (*(char *)(iVar4 + 0x3868) != '\x04')) {
        uVar6 = FUN_001c1890(0);
        iVar5 = FUN_001c1820(uVar6);
        if (iVar5 - *(int *)(iVar4 + 0x3864) < 1) {
          iVar11 = iVar11 + 1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < 200);
    if (iVar11 < 2) {
      if (iVar11 == 1) {
        FUN_002010a0(0x12,0x31,0x16c,1);
      }
    }
    else {
      FUN_002010a0(0x12,0x31,0x149,iVar11);
    }
    lVar9 = FUN_0022d910();
    if (lVar9 < 2) {
      if (lVar9 == 1) {
        FUN_002010a0(0x12,0x32,0x16d,1);
      }
    }
    else {
      FUN_002010a0(0x12,0x32,0x14a,lVar9);
    }
    iVar11 = 0;
    iVar4 = FUN_001c1890(0);
    iVar4 = iVar4 + 0x531c;
    iVar3 = 0;
    do {
      iVar10 = 0;
      iVar5 = iVar4;
      do {
        if (*(char *)(iVar5 + 4) == '\x01') {
          iVar11 = iVar11 + 1;
        }
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 8;
      } while (iVar10 < 200);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x644;
    } while (iVar3 < 9);
    if (iVar11 < 2) {
      if (iVar11 == 1) {
        FUN_002010a0(0x12,0x33,0x16e,1);
      }
    }
    else {
      FUN_002010a0(0x12,0x33,0x14b,iVar11);
    }
  }
  return;
}

// 0x0022dcf0  size 0x288
void FUN_0022dcf0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [32];
  undefined4 uStack_20;
  
  iVar2 = -1;
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 1:
    iVar2 = *(int *)(param_1 + 0x18) + 0xb3;
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x18) + 0xb6;
    break;
  case 3:
    iVar2 = *(int *)(param_1 + 0x18) + 0xbf;
    break;
  case 4:
    iVar2 = 0x14f;
    break;
  case 5:
    iVar2 = 0x14e;
    break;
  case 6:
    iVar2 = 0x150;
    break;
  case 7:
    iVar1 = *(int *)(param_1 + 0x24);
    uVar3 = FUN_001f69b0(*(undefined4 *)(param_1 + 0x20),0);
    FUN_002010a0(5,0x1c,0x16b,uVar3,iVar1 / 1000,iVar1 % 1000);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(0);
  }
  if (iVar2 == 0xb3) {
    iVar2 = FUN_001f48c0(5);
    FUN_001ede20(*piGpffff8d3c + iVar2 * 0x4f4 + 4,auStack_40,0x1c);
    uStack_20 = 0x22;
    FUN_001f1350(auStack_40,0xb3);
    iVar2 = -1;
  }
  lVar4 = FUN_001ff320(iVar2,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x40) != 0) {
    if (lVar4 == 2) {
      FUN_001ff600();
      iVar2 = *(int *)(param_1 + 0x14);
      goto LAB_0022de28;
    }
    if (lVar4 == 3) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x14);
LAB_0022de28:
  if (iVar2 != *(int *)(param_1 + 0x18)) {
    if (lVar4 == 2) {
      FUN_001ff600();
    }
    else if (lVar4 == 3) {
      FUN_001ff610(0);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
    }
  }
  if (lVar4 == 2) {
    if ((*(int *)(param_1 + 0x2c) == 4) && (*(int *)(param_1 + 0x38) != 0)) {
      FUN_00206280(5);
      FUN_001fb290(0xf);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_00201260(0x13,0);
  iVar2 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0022df80  size 0x3a8
void FUN_0022df80(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar3 != 0) {
    FUN_00200fc0(0);
  }
  lVar4 = FUN_00201260(0x12,0);
  lVar5 = FUN_00201260(0x12,1);
  lVar6 = FUN_00201260(0x12,2);
  if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_00200ef0(0);
    if (*(int *)(param_1 + 0xc) == 1) {
      lVar4 = FUN_00201260(0x12,5);
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  FUN_00201260(0x13,0);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 1) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x3f,uVar7,0xdf);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 2) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x40,uVar7,0x102);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 4) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x41,uVar7,0xe5);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 8) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x42,uVar7,0xe3);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x10) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x43,uVar7,0xe6);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x20) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x44,uVar7,0xe7);
  FUN_0022d9c0();
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  iVar3 = *(int *)(param_1 + 0xc);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x40) == 0)) {
    bVar1 = false;
  }
  iVar2 = 0;
  if (!bVar1) {
    iVar2 = 3;
  }
  if (iVar2 == 0) {
    FUN_002011b0(0x12,0x45,0xe9);
    FUN_002011b0(0x12,0x46,0xe8);
  }
  else {
    FUN_002011b0(0x12,0x45,0xe8);
    iVar2 = FUN_001f48c0(0x12);
    FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x37,8);
    if (iVar3 == 7) {
      iVar3 = 6;
    }
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x12,*(undefined4 *)(&DAT_0032b020 + iVar3 * 4),1,0);
  }
  iVar3 = FUN_001f48c0(0x12);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  FUN_001ff790(3,*(undefined4 *)(&DAT_0032b000 + *(int *)(param_1 + 0xc) * 4));
  return;
}

// 0x0022e350  size 0xc8
void FUN_0022e350(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00201260(0x13,1);
  if (lVar1 == 0) {
    if ((*(uint *)(iRam0036f458 + 0x28) & 2) == 0) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1000;
    }
  }
  (*(code *)(&PTR_FUN_0032afe0)[*(int *)((int)param_1 + 0x2c)])(param_1);
  if (((*(uint *)(iRam0036f458 + 0x28) & 4) == 0) &&
     (lVar1 = FUN_001fb170((int)param_1 + 0x28), lVar1 == 1)) {
    if ((*(uint *)(iRam0036f458 + 0x28) & 1) == 0) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x0022e420  size 0x44c
void FUN_0022e420(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(iRam0036f458 + 0x24) == 0xe) {
    uVar1 = FUN_001f4890(0x42);
    iVar2 = FUN_001f48c0(0x13);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
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
  }
  uVar1 = FUN_001f4890(0x3c);
  iVar2 = FUN_001f48c0(0x12);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 800) == 0) {
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
  }
  uVar1 = FUN_001f4890(0x3d);
  iVar2 = FUN_001f48c0(0x12);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
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
  if (*(int *)(iRam0036f458 + 0x24) != 1) {
    uVar1 = FUN_001f4890(0x3e);
    iVar2 = FUN_001f48c0(0x12);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
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
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
  }
  uVar1 = FUN_001f4890(0x3f);
  iVar2 = FUN_001f48c0(0x12);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 0x35c) == 0) {
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar1;
    *(undefined4 *)(iVar2 + 0x358) = 1;
  }
  uVar1 = FUN_001f4890(0x40);
  iVar2 = FUN_001f48c0(0x12);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 0x370) == 0) {
    *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x368) = 0;
    *(undefined4 *)(iVar2 + 0x370) = uVar1;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
  }
  uVar1 = FUN_001f4890(0x41);
  iVar2 = FUN_001f48c0(0x13);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 800) == 0) {
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
  }
  uVar1 = FUN_001f4890(0x49);
  iVar2 = FUN_001f48c0(0x12);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x378) = 0xffffffff;
  *(undefined4 *)(iVar2 + 900) = 0;
  *(undefined4 *)(iVar2 + 0x374) = 0;
  if (*(int *)(iVar2 + 900) == 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x380) = 1;
  }
  *(undefined4 *)(iVar2 + 0x374) = 0;
  if (*(int *)(iVar2 + 900) == 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x380) = 1;
  }
  *(undefined4 *)(iVar2 + 0x37c) = 0;
  *(undefined4 *)(iVar2 + 900) = uVar1;
  *(undefined4 *)(iVar2 + 0x380) = 1;
  return;
}

// 0x0022e870  size 0xa18
void FUN_0022e870(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int aiStack_d40 [404];
  undefined4 auStack_6f0 [36];
  int aiStack_660 [401];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar5 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar5 != 0) {
    uVar4 = FUN_001f4890(0x3b9);
    iVar5 = FUN_001f48c0(0x14);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar5 + 800) = 0;
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x318) = 0;
    *(undefined4 *)(iVar5 + 800) = uVar4;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar4 = FUN_001f4890(0x3ba);
    iVar5 = FUN_001f48c0(0x14);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x334) = 0;
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x32c) = 0;
    *(undefined4 *)(iVar5 + 0x334) = uVar4;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar4 = FUN_001f4890(0x3bb);
    iVar5 = FUN_001f48c0(0x14);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x348) = 0;
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    *(undefined4 *)(iVar5 + 0x340) = 0;
    *(undefined4 *)(iVar5 + 0x348) = uVar4;
    *(undefined4 *)(iVar5 + 0x344) = 1;
    uVar4 = FUN_001f4890(0x3bc);
    iVar5 = FUN_001f48c0(0x14);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x35c) = 0;
    *(undefined4 *)(iVar5 + 0x34c) = 0;
    if (*(int *)(iVar5 + 0x35c) == 0) {
      *(undefined4 *)(iVar5 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x358) = 1;
    }
    *(undefined4 *)(iVar5 + 0x34c) = 0;
    if (*(int *)(iVar5 + 0x35c) == 0) {
      *(undefined4 *)(iVar5 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x358) = 1;
    }
    *(undefined4 *)(iVar5 + 0x354) = 0;
    *(undefined4 *)(iVar5 + 0x35c) = uVar4;
    *(undefined4 *)(iVar5 + 0x358) = 1;
    uVar4 = FUN_001f4890(0x3bd);
    iVar5 = FUN_001f48c0(0x15);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar5 + 800) = 0;
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x318) = 0;
    *(undefined4 *)(iVar5 + 800) = uVar4;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar4 = FUN_001f4890(0x3be);
    iVar5 = FUN_001f48c0(0x15);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x334) = 0;
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x32c) = 0;
    *(undefined4 *)(iVar5 + 0x334) = uVar4;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    FUN_00200fc0(0);
    FUN_00200a10(0x14,(int)register0x000001c0 + -0x7d08,2,0);
  }
  lVar6 = FUN_00201260(0x14,0);
  lVar7 = FUN_00201260(0x15,0);
  if (lVar6 == 0 && lVar7 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_002008b0(1);
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar5 = FUN_001f48c0(0x14);
      FUN_001eeb00(0,*piGpffff8d3c + iVar5 * 0x4f4 + 4,0x39,8);
      iVar5 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x20);
    }
    if (iVar5 == *(int *)(param_1 + 0x1c)) {
      iVar5 = FUN_001f48c0(0x14);
      FUN_001eeb00(0,*piGpffff8d3c + iVar5 * 0x4f4 + 4,0x3a,8);
    }
    iVar5 = *(int *)(param_1 + 0x24);
  }
  else {
    lVar6 = FUN_00201260(0x14);
    lVar7 = FUN_00201260(0x15,1);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    FUN_002008b0(0);
    iVar5 = *(int *)(param_1 + 0x24);
  }
  iVar17 = -1;
  if (iVar5 == 2) {
    lVar6 = FUN_00201260(0x14);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      iVar5 = FUN_001f48c0(0x14);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x338) = 0;
      if (*(int *)(iVar5 + 0x348) == 0) {
        *(undefined4 *)(iVar5 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x344) = 1;
      }
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    }
    iVar17 = *(int *)(param_1 + 0x20) + 6;
  }
  else if (iVar5 == 1) {
    lVar6 = FUN_00201260(0x14,3);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      iVar5 = FUN_001f48c0(0x14);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x34c) = 0;
      if (*(int *)(iVar5 + 0x35c) == 0) {
        *(undefined4 *)(iVar5 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x358) = 1;
      }
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    }
    iVar17 = *(int *)(param_1 + 0x20) + -1;
  }
  uVar8 = FUN_001c1890(0);
  FUN_001bea90(aiStack_d40,uVar8);
  piVar14 = aiStack_d40;
  piVar12 = aiStack_660;
  iVar5 = 0xca;
  do {
    iVar5 = iVar5 + -1;
    iVar15 = piVar14[1];
    *piVar12 = *piVar14;
    piVar12[1] = iVar15;
    piVar14 = piVar14 + 2;
    piVar12 = piVar12 + 2;
  } while (0 < iVar5);
  puVar11 = auStack_6f0;
  puVar13 = &DAT_0032b0b0;
  iVar5 = 0x23;
  do {
    iVar5 = iVar5 + -1;
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  } while (0 < iVar5);
  iVar5 = *(int *)(param_1 + 0x20);
  iVar15 = 0;
  puVar11 = auStack_6f0;
  do {
    if (iVar15 == 6) {
      if (iVar17 == -1) break;
      iVar5 = iVar17;
    }
    iVar16 = aiStack_660[iVar5 * 2 + 1];
    if (iVar16 == -1) break;
    uVar9 = FUN_001f6ee0(iVar16);
    FUN_002011b0(0x14,*puVar11,uVar9);
    FUN_00201140(0x14,puVar11[1],5,0x7d);
    iVar3 = FUN_001c1890(0);
    FUN_002010a0(0x14,puVar11[2],0x3a,*(undefined2 *)(iVar3 + iVar16 * 2 + 0x3fc4));
    FUN_00201140(0x14,puVar11[3],4,0x7e);
    iVar3 = FUN_001c1890(0);
    FUN_002010a0(0x14,puVar11[4],0x3a,*(undefined2 *)(iVar3 + iVar16 * 2 + 0x43ac));
    iVar15 = iVar15 + 1;
    iVar5 = iVar5 + 1;
    puVar11 = puVar11 + 5;
  } while (iVar15 < 7);
  FUN_002011b0(0x15,0x1c,0x108);
  FUN_002011b0(0x15,0x20,0x7f);
  uVar2 = FUN_001c16c0(uVar8);
  uVar9 = FUN_001f6f10(uVar2);
  uVar2 = FUN_001c16b0(uVar8);
  uVar10 = FUN_001f6f00(uVar2);
  FUN_002010a0(0x15,0x21,0x43,uVar9,uVar10);
  FUN_00201140(0x15,0x22,5,0x82);
  FUN_00201140(0x15,0x23,4,0x83);
  FUN_00201140(0x15,0x26,5,0x80);
  FUN_00201140(0x15,0x27,4,0x81);
  FUN_00201140(0x15,0x28,0,0x84);
  FUN_002010a0(0x15,0x24,0x3a,uStack_1c);
  FUN_002010a0(0x15,0x25,0x3a,uStack_1a);
  iVar5 = (int)uVar8;
  FUN_002010a0(0x15,0x29,0x3a,*(undefined2 *)(iVar5 + 0x5312));
  FUN_002010a0(0x15,0x2a,0x3a,*(undefined2 *)(iVar5 + 0x5314));
  sVar1 = *(short *)(iVar5 + 0x5312);
  if (sVar1 == 0) {
    FUN_002010a0(0x15,0x2b,0x29,0);
  }
  else {
    FUN_002010a0(0x15,0x2b,0x29,(sVar1 * 100) / ((int)sVar1 + (int)*(short *)(iVar5 + 0x5314)));
  }
  uStack_8 = uGpffff8300;
  iVar15 = *(int *)(param_1 + 0x1c) + 6;
  uStack_4 = uGpffff8304;
  iVar17 = FUN_001f48c0(0x14);
  iVar5 = *(int *)(param_1 + 0x20);
  iVar16 = *piGpffff8d3c + iVar17 * 0x4f4 + 4;
  iVar17 = FUN_001f48c0(0x14);
  FUN_001eeb00(0,*piGpffff8d3c + iVar17 * 0x4f4 + 4,uStack_4,8);
  if (iVar15 < 7) {
    FUN_001eeb00(0x41800000,iVar16,uStack_8,2);
    FUN_001eeb00(0x40e00000,iVar16,uStack_8,6);
  }
  else {
    FUN_001eeb00((float)iVar5 * (112.0 / (float)iVar15) + 16.0,iVar16,uStack_8,2);
    FUN_001eeb00((6.0 / (float)iVar15) * 7.0,iVar16,uStack_8,6);
  }
  FUN_00201260(0x13,0);
  iVar5 = FUN_001f48c0(0x14);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  iVar5 = FUN_001f48c0(0x15);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  iVar5 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0022f290  size 0x138
void FUN_0022f290(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(0);
  }
  lVar2 = FUN_001ff320(*(int *)(param_1 + 0x18) + 0xba,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x40) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
      iVar1 = *(int *)(param_1 + 0xc);
      goto LAB_0022f30c;
    }
    if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
LAB_0022f30c:
  if (iVar1 != *(int *)(param_1 + 0x18)) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      FUN_001ff610(0);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_00201260(0x13,0);
  iVar1 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0022f3d0  size 0x388
void FUN_0022f3d0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar3 != 0) {
    FUN_00200fc0(0);
  }
  lVar4 = FUN_00201260(0x12,0);
  lVar5 = FUN_00201260(0x12,1);
  lVar6 = FUN_00201260(0x12,2);
  if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_00200ef0(0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  FUN_00201260(0x13,0);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 1) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x3f,uVar7,0xdf);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 2) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x40,uVar7,0x102);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 4) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x41,uVar7,0xe5);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 8) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x42,uVar7,0xe3);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x10) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x43,uVar7,0xea);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x20) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  FUN_00201140(0x12,0x44,uVar7,0xe7);
  FUN_0022d9c0();
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  iVar3 = *(int *)(param_1 + 8);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x40) == 0)) {
    bVar1 = false;
  }
  iVar2 = 0;
  if (!bVar1) {
    iVar2 = 3;
  }
  if (iVar2 == 0) {
    FUN_002011b0(0x12,0x45,0xe9);
    FUN_002011b0(0x12,0x46,0xe8);
  }
  else {
    FUN_002011b0(0x12,0x45,0xe8);
    iVar2 = FUN_001f48c0(0x12);
    FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x37,8);
    if (iVar3 == 7) {
      iVar3 = 6;
    }
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x12,*(undefined4 *)(&DAT_0032b090 + iVar3 * 4),1,0);
  }
  iVar3 = FUN_001f48c0(0x12);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  FUN_001ff790(3,*(undefined4 *)(&DAT_0032b070 + *(int *)(param_1 + 8) * 4));
  return;
}

// 0x0022f780  size 0xc8
void FUN_0022f780(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00201260(0x13,1);
  if (lVar1 == 0) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
    }
  }
  (*(code *)(&PTR_FUN_0032b060)[*(int *)((int)param_1 + 0x2c)])(param_1);
  if (((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) &&
     (lVar1 = FUN_001fb170((int)param_1 + 0x28), lVar1 == 1)) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x0022f850  size 0x428
void FUN_0022f850(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_001f4890(0x43);
  iVar2 = FUN_001f48c0(0x13);
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
  if (*(int *)(iGpffff8d68 + 0x24) != 0xd) {
    iVar2 = FUN_001f48c0(0x13);
    for (iVar2 = *(int *)(*piGpffff8d3c + iVar2 * 0x4f4 + 0x330); iVar2 == 1;
        iVar2 = *(int *)(*piGpffff8d3c + iVar2 * 0x4f4 + 0x330)) {
      iVar2 = FUN_001f48c0(0x13);
      FUN_001ecd80(*piGpffff8d3c + iVar2 * 0x4f4 + 4,1);
      iVar2 = FUN_001f48c0(0x13);
    }
    uVar1 = FUN_001f4890(0x3f);
    iVar2 = FUN_001f48c0(0x12);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar1;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar1 = FUN_001f4890(0x40);
    iVar2 = FUN_001f48c0(0x12);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x368) = 0;
    *(undefined4 *)(iVar2 + 0x370) = uVar1;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    uVar1 = FUN_001f4890(0x41);
    iVar2 = FUN_001f48c0(0x13);
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
  }
  uVar1 = FUN_001f4890(0x3c);
  iVar2 = FUN_001f48c0(0x12);
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
  uVar1 = FUN_001f4890(0x3d);
  iVar2 = FUN_001f48c0(0x12);
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
  uVar1 = FUN_001f4890(0x3e);
  iVar2 = FUN_001f48c0(0x12);
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
  *(undefined4 *)(iVar2 + 0x340) = 0;
  *(undefined4 *)(iVar2 + 0x348) = uVar1;
  *(undefined4 *)(iVar2 + 0x344) = 1;
  return;
}

// 0x0022fc80  size 0x6b4
void FUN_0022fc80(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_001f4890(0x39a);
    iVar2 = FUN_001f48c0(0xf1);
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
    uVar3 = FUN_001f4890(0x39b);
    iVar2 = FUN_001f48c0(0xf1);
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
    uVar3 = FUN_001f4890(0x39c);
    iVar2 = FUN_001f48c0(0xf1);
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
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar3;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar3 = FUN_001f4890(0x39d);
    iVar2 = FUN_001f48c0(0xf1);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar3;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    FUN_00200fc0(0);
    FUN_00200a10(0xf1,(int)register0x000001c0 + -0x7ce8,2,0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    FUN_001f92f0(iGpffff8d68 + 0x614);
    switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
    case 1:
      *(undefined4 *)(iGpffff8d68 + 0x598) = 0;
      break;
    case 2:
      *(undefined4 *)(iGpffff8d68 + 0x5dc) = 0;
      break;
    case 3:
      *(undefined4 *)(iGpffff8d68 + 0x5fc) = 0;
      break;
    case 4:
      *(undefined4 *)(iGpffff8d68 + 0x618) = 0;
    }
  }
  lVar4 = FUN_00201260(0xf1,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (lVar4 = FUN_00201260(0xf1), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (lVar4 = FUN_001fd2d0(), lVar4 == 0)) {
    FUN_002008b0(1);
    cVar1 = *(char *)(param_1 + 0x20);
  }
  else {
    FUN_002008b0(0);
    cVar1 = *(char *)(param_1 + 0x20);
  }
  if (cVar1 == '\0') {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    if (*piGpffff8d78 == 1) {
      FUN_00200d70(0xf1,uGpffff8320,0,0);
    }
  }
  else {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
    if (*(char *)(param_1 + 0x20) == '\x03') {
      lVar4 = FUN_00201260(0xf1,2);
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
        *(undefined1 *)(param_1 + 0x20) = 0;
        iVar2 = FUN_001f48c0(0xf1);
        iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
        *(undefined4 *)(iVar2 + 0x338) = 0;
        if (*(int *)(iVar2 + 0x348) == 0) {
          *(undefined4 *)(iVar2 + 0x344) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x344) = 1;
        }
        FUN_00200fc0(0);
      }
    }
    else {
      lVar4 = FUN_00201260(0xf1);
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
        *(undefined1 *)(param_1 + 0x20) = 0;
        iVar2 = FUN_001f48c0(0xf1);
        iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
        *(undefined4 *)(iVar2 + 0x34c) = 0;
        if (*(int *)(iVar2 + 0x35c) == 0) {
          *(undefined4 *)(iVar2 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x358) = 1;
        }
        FUN_00200fc0(0);
      }
    }
  }
  iVar2 = FUN_001f48c0(0xf1);
  FUN_001eea30(*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x10,0x16,
               *(undefined4 *)(&DAT_0032b1f0 + *(int *)(param_1 + 0x2c) * 4));
  uVar5 = FUN_001f69b0(*(undefined4 *)(param_1 + 0x2c),1);
  FUN_002011b0(0xf1,0x27,uVar5);
  uVar5 = 0x4a;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar5 = 0x49;
  }
  FUN_00201140(0xf1,0x28,1,uVar5);
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_002011b0(0xf1,0x2b,0x28a);
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    FUN_002010a0(0xf1,0x2b,0x28b);
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar2 == 0) {
    FUN_002011b0(0xf1,0x2c,0x28a);
  }
  else {
    FUN_002010a0(0xf1,0x2c,0x28b);
  }
  FUN_002011b0(0xf1,0x21,0x28c);
  FUN_002010a0(0xf1,0x24,0x28f,*(undefined4 *)(param_1 + 0x48));
  FUN_002011b0(0xf1,0x22,0x28d);
  FUN_002010a0(0xf1,0x25,0x28f,*(undefined4 *)(param_1 + 0x4c));
  FUN_002011b0(0xf1,0x23,0x28e);
  FUN_002010a0(0xf1,0x26,0x28f,*(undefined4 *)(param_1 + 0x50));
  iVar2 = FUN_001f48c0(0xf1);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_001f8860(iGpffff8d68 + 0x654);
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) < 1) {
    iVar2 = 10 - iVar2;
  }
  switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
  case 1:
    *(int *)(iGpffff8d68 + 0x598) = iVar2;
    break;
  case 2:
    *(int *)(iGpffff8d68 + 0x5dc) = iVar2;
    break;
  case 3:
    *(int *)(iGpffff8d68 + 0x5fc) = iVar2;
    break;
  case 4:
    *(int *)(iGpffff8d68 + 0x618) = iVar2;
  }
  FUN_001f9300(iGpffff8d68 + 0x614,*(undefined4 *)(param_1 + 0x44));
  return;
}

