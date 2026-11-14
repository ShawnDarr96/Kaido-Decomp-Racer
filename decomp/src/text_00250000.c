// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00250000 - 0x00254000
#include "ghidra_types.h"

// 0x002535c0  size 0x30
void FUN_002535c0(int param_1,int param_2)

{
  param_1 = param_2 * 0x14 + param_1;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  if (*(int *)(param_1 + 0x31c) == 0) {
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x318) = 1;
  }
  return;
}

// 0x002535f0  size 0x3c
void FUN_002535f0(int param_1,int param_2)

{
  param_1 = param_2 * 0x14 + param_1;
  *(undefined4 *)(param_1 + 0x310) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  if (*(int *)(param_1 + 0x31c) == 0) {
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x318) = 1;
  }
  return;
}

// 0x00253630  size 0x60c
void FUN_00253630(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_s0;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      unaff_s0 = FUN_001ff320(0x3a9,0xffffffffffffffff,0);
    }
  }
  else {
    uVar1 = FUN_001f4890(0x298);
    iVar3 = FUN_001f48c0(0xa2);
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
    *(undefined4 *)(iVar3 + 0x318) = 1;
    *(undefined4 *)(iVar3 + 800) = uVar1;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar1 = FUN_001f4890(0x299);
    iVar3 = FUN_001f48c0(0xa3);
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
    uVar1 = FUN_001f4890(0x29b);
    iVar3 = FUN_001f48c0(0xa3);
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
    uVar1 = FUN_001f4890(0x29a);
    iVar3 = FUN_001f48c0(0xa4);
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
    uVar1 = FUN_001f4890(0x29c);
    iVar3 = FUN_001f48c0(0xa4);
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
    FUN_00200fc0(0);
    FUN_001ff610(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  lVar4 = FUN_00201260(0xa3,0);
  lVar5 = FUN_00201260(0xa4,0);
  if (lVar4 == 0 && lVar5 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      if (unaff_s0 == 2) {
        *(undefined4 *)(param_1 + 0x658) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      if (unaff_s0 == 2) {
        FUN_001ff600();
      }
      lVar4 = FUN_00201260(0xa3,1);
      lVar5 = FUN_00201260(0xa4,1);
      if (unaff_s0 == 3 && (lVar4 == 0 && lVar5 == 0)) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
    else {
      lVar4 = FUN_00201260(0xa3);
      lVar5 = FUN_00201260(0xa4,1);
      if (lVar4 == 0 && lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
  }
  FUN_002011b0(0xa3,0x17,0x357);
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    FUN_00201140(0xa4,0x12,3,0x3a3);
    uVar2 = *(uint *)(param_1 + 8);
  }
  else {
    FUN_002011b0(0xa4,0x12,0x3a3);
    uVar2 = *(uint *)(param_1 + 8);
  }
  if ((uVar2 & 2) == 0) {
    FUN_00201140(0xa4,0x13,3,0x3a4);
    uVar2 = *(uint *)(param_1 + 8);
  }
  else {
    FUN_002011b0(0xa4,0x13,0x3a4);
    uVar2 = *(uint *)(param_1 + 8);
  }
  if ((uVar2 & 4) == 0) {
    FUN_00201140(0xa4,0x14,3,0x3a5);
  }
  else {
    FUN_002011b0(0xa4,0x14,0x3a5);
  }
  FUN_002011b0(7,0x2e,0x3a6);
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  if ((*piGpffff8d78 == 1) && (*(int *)(param_1 + 8) != 0)) {
    FUN_00200d70(0xa4,*(undefined4 *)(&DAT_0032c208 + *(int *)(param_1 + 0x62c) * 4),1,0);
  }
  if (*(int *)(param_1 + 8) == 0) {
    DAT_0032befc = 3;
  }
  else {
    DAT_0032befc = 3;
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  }
  FUN_00201260(0xa2,0);
  iVar3 = FUN_001f48c0(0xa2);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0xa3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0xa4);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

// 0x00253c40  size 0x4b8
void FUN_00253c40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1c000;
  FUN_001f48c0(0x9e);
  FUN_001f48c0(0x78);
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x1d9);
    iVar1 = FUN_001f48c0(0x9e);
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
    uVar2 = FUN_001f4890(0x1da);
    iVar1 = FUN_001f48c0(0x9e);
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
    iVar3 = FUN_001f48c0(0x78);
    iVar1 = *piGpffff8d3c;
    uVar6 = FUN_001f4890(*(int *)(param_1 + 0x6b0) + 0x34);
    FUN_001ed190(iVar1 + iVar3 * 0x4f4 + 4,uVar6);
    iVar3 = FUN_001f48c0(0x79);
    iVar1 = *piGpffff8d3c;
    uVar6 = FUN_001f4890(0x291);
    FUN_001ed190(iVar1 + iVar3 * 0x4f4 + 4,uVar6);
    iVar3 = FUN_001f48c0(0x78);
    iVar1 = *piGpffff8d3c;
    uVar6 = FUN_001c1890(0);
    uVar6 = FUN_001c1700(uVar6);
    iVar4 = FUN_001f69f0(uVar6);
    FUN_001eea30(iVar1 + iVar3 * 0x4f4 + 4,
                 *(undefined4 *)(&DAT_0032c1d0 + *(int *)(param_1 + 0x6b0) * 4),0x16,
                 *(undefined4 *)(&DAT_0032c1b0 + iVar4 * 4));
    FUN_00200fc0(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  lVar5 = FUN_00201260(0x9e,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar5 = FUN_00201260(0x9e), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x9e,*(undefined4 *)(&DAT_0032c1e8 + *(int *)(param_1 + 0x62c) * 4),1,0);
  }
  FUN_002011b0(0x9e,0x17,0x392);
  FUN_002011b0(0x9e,0x18,0x393);
  FUN_002011b0(0x9e,0x19,0x394);
  FUN_002011b0(0x79,0x1a,0x356);
  FUN_002011b0(7,0x2e,*(undefined4 *)(&DAT_0032c1f8 + *(int *)(param_1 + 0x62c) * 4));
  uVar6 = Race_GetCourseVariant();
  uVar6 = FUN_001f69f0(uVar6);
  uVar6 = FUN_001f69b0(uVar6,1);
  FUN_002011b0(0x78,0x42,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = FUN_001f69f0(uVar6);
  uVar6 = FUN_001f69b0(uVar6,1);
  FUN_002011b0(0x78,0x43,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = FUN_001f69f0(uVar6);
  uVar6 = FUN_001f69b0(uVar6,1);
  FUN_002011b0(0x78,0x44,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = FUN_001f69f0(uVar6);
  uVar6 = FUN_001f69b0(uVar6,1);
  FUN_002011b0(0x78,0x45,uVar6);
  iVar1 = FUN_001f48c0(0x77);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x78);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x79);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x9e);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return;
}

