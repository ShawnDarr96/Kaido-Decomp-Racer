// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00220000 - 0x00224000
#include "ghidra_types.h"

// 0x00220130  size 0xbb4
void FUN_00220130(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar1 = FUN_001f48c0(0xa9);
  iVar8 = *piRam0036f42c + iVar1 * 0x4f4 + 4;
  iVar2 = FUN_001f48c0(0xab);
  iVar1 = param_1[7];
  iVar6 = *piRam0036f42c;
  param_1[7] = 0;
  iVar6 = iVar6 + iVar2 * 0x4f4 + 4;
  if (iVar1 == 0) {
    iVar1 = param_1[2];
  }
  else {
    uVar3 = FUN_001f4890(0xdc);
    iVar1 = FUN_001f48c0(0xa9);
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
    *(undefined4 *)(iVar1 + 800) = uVar3;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0xdd);
    iVar1 = FUN_001f48c0(0xa9);
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
    *(undefined4 *)(iVar1 + 0x334) = uVar3;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar3 = FUN_001f4890(0xde);
    iVar1 = FUN_001f48c0(0xa9);
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
    *(undefined4 *)(iVar1 + 0x348) = uVar3;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar3 = FUN_001f4890(0xda);
    iVar1 = FUN_001f48c0(0xa9);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x35c) = uVar3;
    *(undefined4 *)(iVar1 + 0x358) = 1;
    uVar3 = FUN_001f4890(0xdb);
    iVar1 = FUN_001f48c0(0xa9);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x368) = 1;
    *(undefined4 *)(iVar1 + 0x370) = uVar3;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
    uVar3 = FUN_001f4890(0x179);
    iVar1 = FUN_001f48c0(0xa9);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 1;
    *(undefined4 *)(iVar1 + 900) = uVar3;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar3 = FUN_001f4890(0x17a);
    iVar1 = FUN_001f48c0(0xa9);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x398) = 0;
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x390) = 1;
    *(undefined4 *)(iVar1 + 0x398) = uVar3;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    uVar3 = FUN_001f4890(0x17b);
    iVar1 = FUN_001f48c0(0xa9);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3ac) = 0;
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3a4) = 1;
    *(undefined4 *)(iVar1 + 0x3ac) = uVar3;
    *(undefined4 *)(iVar1 + 0x3a8) = 1;
    uVar3 = FUN_001f4890(0x17c);
    iVar1 = FUN_001f48c0(0xa9);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b8) = 1;
    *(undefined4 *)(iVar1 + 0x3c0) = uVar3;
    *(undefined4 *)(iVar1 + 0x3bc) = 1;
    uVar3 = FUN_001f4890(0x17d);
    iVar1 = FUN_001f48c0(0xa9);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3c8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3d4) = 0;
    *(undefined4 *)(iVar1 + 0x3c4) = 0;
    if (*(int *)(iVar1 + 0x3d4) == 0) {
      *(undefined4 *)(iVar1 + 0x3d0) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3d0) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3c4) = 0;
    if (*(int *)(iVar1 + 0x3d4) == 0) {
      *(undefined4 *)(iVar1 + 0x3d0) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3d0) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3cc) = 1;
    *(undefined4 *)(iVar1 + 0x3d4) = uVar3;
    *(undefined4 *)(iVar1 + 0x3d0) = 1;
    uVar3 = FUN_001f4890(0x17e);
    iVar1 = FUN_001f48c0(0xa9);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3dc) = 0xffffffff;
    *(undefined4 *)(iVar1 + 1000) = 0;
    *(undefined4 *)(iVar1 + 0x3d8) = 0;
    if (*(int *)(iVar1 + 1000) == 0) {
      *(undefined4 *)(iVar1 + 0x3e4) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3e4) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3d8) = 0;
    if (*(int *)(iVar1 + 1000) == 0) {
      *(undefined4 *)(iVar1 + 0x3e4) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3e4) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3e0) = 1;
    *(undefined4 *)(iVar1 + 1000) = uVar3;
    *(undefined4 *)(iVar1 + 0x3e4) = 1;
    uVar3 = FUN_001f4890(0x17f);
    iVar1 = FUN_001f48c0(0xa9);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3f0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3fc) = 0;
    *(undefined4 *)(iVar1 + 0x3ec) = 0;
    if (*(int *)(iVar1 + 0x3fc) == 0) {
      *(undefined4 *)(iVar1 + 0x3f8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3f8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3ec) = 0;
    if (*(int *)(iVar1 + 0x3fc) == 0) {
      *(undefined4 *)(iVar1 + 0x3f8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3f8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3f4) = 1;
    *(undefined4 *)(iVar1 + 0x3fc) = uVar3;
    *(undefined4 *)(iVar1 + 0x3f8) = 1;
    uVar3 = FUN_001f4890(0x180);
    iVar1 = FUN_001f48c0(0xa9);
    iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x404) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x410) = 0;
    *(undefined4 *)(iVar1 + 0x400) = 0;
    if (*(int *)(iVar1 + 0x410) == 0) {
      *(undefined4 *)(iVar1 + 0x40c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x40c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x400) = 0;
    if (*(int *)(iVar1 + 0x410) == 0) {
      *(undefined4 *)(iVar1 + 0x40c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x40c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x408) = 1;
    *(undefined4 *)(iVar1 + 0x410) = uVar3;
    *(undefined4 *)(iVar1 + 0x40c) = 1;
    uVar3 = FUN_001f4890(0xd8);
    iVar1 = FUN_001f48c0(0xaa);
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
    *(undefined4 *)(iVar1 + 800) = uVar3;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0xd9);
    iVar1 = FUN_001f48c0(0xaa);
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
    *(undefined4 *)(iVar1 + 0x334) = uVar3;
    iVar2 = 0;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    puVar7 = &DAT_0032a470;
    do {
      FUN_001eeb00(0,iVar6,*puVar7,8);
      iVar2 = iVar2 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar2 < 7);
    FUN_001eeb00(0,iVar6,DAT_0032a48c,8);
    FUN_00200fc0(0);
    iVar1 = param_1[2];
  }
  if (iVar1 == 1) {
    lVar4 = FUN_00201260(0xa9,0);
    if (lVar4 == 0) {
      param_1[6] = 0;
    }
  }
  else {
    lVar4 = FUN_00201260(0xa9,0);
    lVar5 = FUN_00201260(0xaa,0);
    if (lVar4 == 0 && lVar5 == 0) {
      param_1[6] = 0;
    }
  }
  if (param_1[8] != 0) {
    if (param_1[4] == 1) {
      lVar4 = FUN_00201260(0xa9);
      if (lVar4 == 0) {
        param_1[8] = 0;
      }
    }
    else {
      lVar4 = FUN_00201260(0xa9);
      lVar5 = FUN_00201260(0xaa,1);
      if (lVar4 == 0 && lVar5 == 0) {
        param_1[8] = 0;
      }
    }
    FUN_00200ef0(0);
  }
  FUN_00200d70(0xa9,*(undefined4 *)(&DAT_0032a3b0 + *param_1 * 4),0,0);
  iVar6 = 0;
  iVar1 = FUN_001f68b0(1);
  if (0 < iVar1 + 2) {
    puVar9 = &DAT_0032a410;
    puVar7 = &DAT_0032a3e0;
    do {
      FUN_002011b0(0xa9,*puVar7,*puVar9);
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + 1;
      iVar1 = FUN_001f68b0(1);
    } while (iVar6 < iVar1 + 2);
  }
  iVar1 = FUN_001f68b0(1);
  iVar1 = iVar1 + 2;
  if (iVar1 < 9) {
    puVar9 = &DAT_0032a410 + iVar1;
    puVar7 = &DAT_0032a3e0 + iVar1;
    do {
      FUN_00201140(0xa9,*puVar7,3,*puVar9);
      iVar1 = iVar1 + 1;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar1 < 9);
  }
  FUN_002011b0(0xaa,1,0x433);
  FUN_002011b0(7,0x2e,0x43b);
  if ((param_1[4] == param_1[3]) && (*(int *)(iRam0036f458 + 0x1c) == *(int *)(iRam0036f458 + 0x20))
     ) {
    iVar6 = 0;
    iVar1 = FUN_001f68b0(1);
    if (0 < iVar1 + 2) {
      puVar7 = &DAT_0032a440;
      do {
        FUN_00201260(0xa9,iVar6 + 4);
        lVar4 = FUN_001b3b80(param_1[0x153e],iVar6);
        if (lVar4 == 0) {
          FUN_001eeb00(0,iVar8,*puVar7,8);
        }
        else {
          FUN_002010a0(0xa9,*puVar7,0x438,5);
        }
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + 1;
        iVar1 = FUN_001f68b0(1);
      } while (iVar6 < iVar1 + 2);
    }
    iVar1 = FUN_001f68b0(1);
    iVar1 = iVar1 + 2;
    if (iVar1 < 9) {
      puVar7 = &DAT_0032a440 + iVar1;
      do {
        FUN_001eeb00(0,iVar8,*puVar7,8);
        iVar1 = iVar1 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar1 < 9);
    }
  }
  FUN_00201260(0xa6,0);
  iVar1 = FUN_001f48c0(0xa6);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xa9);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xaa);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00220d10  size 0x260
void FUN_00220d10(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
  }
  iVar3 = (int)param_1;
  FUN_001ff790(*(undefined4 *)(&DAT_0032a390 + *(int *)(iVar3 + 0xc) * 4),0xffffffffffffffff);
  (*(code *)(&PTR_FUN_0032a370)[*(int *)(iVar3 + 0xc)])(param_1);
  iVar1 = FUN_001f48c0(0xab);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x23,8);
  iVar1 = FUN_001f48c0(0xab);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x24,8);
  iVar1 = FUN_001f48c0(0xab);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x25,8);
  iVar1 = FUN_001f48c0(0xab);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x26,8);
  iVar1 = FUN_001f48c0(0xab);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x27,8);
  iVar1 = FUN_001f48c0(0xab);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x29,8);
  iVar1 = FUN_001f48c0(0xab);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x28,8);
  iVar1 = FUN_001f48c0(0xab);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x22,8);
  if (((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) && (lVar2 = FUN_001fb170(iVar3 + 8), lVar2 == 1)) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x00220f80  size 0xeb4
void FUN_00220f80(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 uStack_9b;
  undefined1 uStack_94;
  undefined1 uStack_8d;
  undefined1 uStack_86;
  undefined2 uStack_80;
  undefined1 uStack_73;
  undefined1 uStack_6c;
  undefined1 uStack_65;
  undefined1 uStack_5e;
  undefined2 uStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_44;
  undefined1 uStack_3d;
  undefined1 uStack_36;
  undefined1 uStack_23;
  undefined1 uStack_1c;
  undefined1 uStack_15;
  undefined1 uStack_e;
  
  iVar2 = FUN_001f48c0(0xa8);
  iVar8 = param_1[6];
  iVar9 = *piGpffff8d3c;
  param_1[6] = 0;
  iVar9 = iVar9 + iVar2 * 0x4f4 + 4;
  if (iVar8 == 0) {
    iVar8 = param_1[0x15];
  }
  else {
    uVar3 = FUN_001f4890(0x90);
    iVar8 = FUN_001f48c0(0xa6);
    iVar8 = *piGpffff8d3c + iVar8 * 0x4f4;
    if (*(int *)(iVar8 + 800) == 0) {
      *(undefined4 *)(iVar8 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar8 + 800) = 0;
      *(undefined4 *)(iVar8 + 0x310) = 0;
      if (*(int *)(iVar8 + 800) == 0) {
        *(undefined4 *)(iVar8 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar8 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar8 + 0x310) = 0;
      if (*(int *)(iVar8 + 800) == 0) {
        *(undefined4 *)(iVar8 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar8 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar8 + 0x318) = 1;
      *(undefined4 *)(iVar8 + 800) = uVar3;
      *(undefined4 *)(iVar8 + 0x31c) = 1;
    }
    uVar3 = FUN_001f4890(0xe9);
    iVar8 = FUN_001f48c0(0xa8);
    iVar8 = *piGpffff8d3c + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar8 + 800) = 0;
    *(undefined4 *)(iVar8 + 0x310) = 0;
    if (*(int *)(iVar8 + 800) == 0) {
      *(undefined4 *)(iVar8 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar8 + 0x310) = 0;
    if (*(int *)(iVar8 + 800) == 0) {
      *(undefined4 *)(iVar8 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar8 + 0x318) = 0;
    *(undefined4 *)(iVar8 + 800) = uVar3;
    *(undefined4 *)(iVar8 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0xea);
    iVar8 = FUN_001f48c0(0xa8);
    iVar8 = *piGpffff8d3c + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x334) = 0;
    *(undefined4 *)(iVar8 + 0x324) = 0;
    if (*(int *)(iVar8 + 0x334) == 0) {
      *(undefined4 *)(iVar8 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x330) = 1;
    }
    *(undefined4 *)(iVar8 + 0x324) = 0;
    if (*(int *)(iVar8 + 0x334) == 0) {
      *(undefined4 *)(iVar8 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x330) = 1;
    }
    *(undefined4 *)(iVar8 + 0x32c) = 0;
    *(undefined4 *)(iVar8 + 0x334) = uVar3;
    *(undefined4 *)(iVar8 + 0x330) = 1;
    uVar3 = FUN_001f4890(0xeb);
    iVar8 = FUN_001f48c0(0xa8);
    iVar8 = *piGpffff8d3c + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x348) = 0;
    *(undefined4 *)(iVar8 + 0x338) = 0;
    if (*(int *)(iVar8 + 0x348) == 0) {
      *(undefined4 *)(iVar8 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x344) = 1;
    }
    *(undefined4 *)(iVar8 + 0x338) = 0;
    if (*(int *)(iVar8 + 0x348) == 0) {
      *(undefined4 *)(iVar8 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x344) = 1;
    }
    *(undefined4 *)(iVar8 + 0x340) = 0;
    *(undefined4 *)(iVar8 + 0x348) = uVar3;
    *(undefined4 *)(iVar8 + 0x344) = 1;
    uVar3 = FUN_001f4890(0xe7);
    iVar8 = FUN_001f48c0(0xa8);
    iVar8 = *piGpffff8d3c + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x35c) = 0;
    *(undefined4 *)(iVar8 + 0x34c) = 0;
    if (*(int *)(iVar8 + 0x35c) == 0) {
      *(undefined4 *)(iVar8 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x358) = 1;
    }
    *(undefined4 *)(iVar8 + 0x34c) = 0;
    if (*(int *)(iVar8 + 0x35c) == 0) {
      *(undefined4 *)(iVar8 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x358) = 1;
    }
    *(undefined4 *)(iVar8 + 0x354) = 0;
    *(undefined4 *)(iVar8 + 0x35c) = uVar3;
    *(undefined4 *)(iVar8 + 0x358) = 1;
    uVar3 = FUN_001f4890(0xe8);
    iVar8 = FUN_001f48c0(0xa8);
    iVar8 = *piGpffff8d3c + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x370) = 0;
    *(undefined4 *)(iVar8 + 0x360) = 0;
    if (*(int *)(iVar8 + 0x370) == 0) {
      *(undefined4 *)(iVar8 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar8 + 0x360) = 0;
    if (*(int *)(iVar8 + 0x370) == 0) {
      *(undefined4 *)(iVar8 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar8 + 0x368) = 1;
    *(undefined4 *)(iVar8 + 0x370) = uVar3;
    *(undefined4 *)(iVar8 + 0x36c) = 1;
    uVar3 = FUN_001f4890(0x191);
    iVar8 = FUN_001f48c0(0xa8);
    iVar8 = *piGpffff8d3c + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar8 + 900) = 0;
    *(undefined4 *)(iVar8 + 0x374) = 0;
    if (*(int *)(iVar8 + 900) == 0) {
      *(undefined4 *)(iVar8 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x380) = 1;
    }
    *(undefined4 *)(iVar8 + 0x374) = 0;
    if (*(int *)(iVar8 + 900) == 0) {
      *(undefined4 *)(iVar8 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x380) = 1;
    }
    *(undefined4 *)(iVar8 + 0x37c) = 1;
    *(undefined4 *)(iVar8 + 900) = uVar3;
    *(undefined4 *)(iVar8 + 0x380) = 1;
    uVar3 = FUN_001f4890(0x192);
    iVar8 = FUN_001f48c0(0xa8);
    iVar8 = *piGpffff8d3c + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x398) = 0;
    *(undefined4 *)(iVar8 + 0x388) = 0;
    if (*(int *)(iVar8 + 0x398) == 0) {
      *(undefined4 *)(iVar8 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x394) = 1;
    }
    *(undefined4 *)(iVar8 + 0x388) = 0;
    if (*(int *)(iVar8 + 0x398) == 0) {
      *(undefined4 *)(iVar8 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x394) = 1;
    }
    *(undefined4 *)(iVar8 + 0x390) = 1;
    *(undefined4 *)(iVar8 + 0x398) = uVar3;
    *(undefined4 *)(iVar8 + 0x394) = 1;
    FUN_00200fc0(0);
    FUN_00200a10(0xa8,(int)register0x000001c0 + -0x7d78,2,1);
    FUN_001eeb00(0,iVar9,0x1d,8);
    FUN_001eeb00(0,iVar9,0x1f,8);
    iVar8 = param_1[0x15];
  }
  if (iVar8 < 3) {
    FUN_002008b0(0);
  }
  else {
    FUN_002008b0(1);
    if (*param_1 < 1) {
      FUN_001eeb00(0,iVar9,0x1d,8);
      iVar8 = param_1[0x15];
    }
    else {
      FUN_001eeb00(0x3f800000,iVar9,0x1d,8);
      iVar8 = param_1[0x15];
    }
    if (*param_1 < iVar8 + -3) {
      FUN_001eeb00(0x3f800000,iVar9,0x1f,8);
    }
    else {
      FUN_001eeb00(0,iVar9,0x1f,8);
    }
  }
  lVar4 = FUN_00201260(0xa8,0);
  if (lVar4 == 0) {
    param_1[5] = 0;
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
  }
  if ((param_1[7] != 0) && (lVar4 = FUN_00201260(0xa8), lVar4 == 0)) {
    param_1[7] = 0;
  }
  FUN_002011b0(0xa8,0x20,0x432);
  if (param_1[0x15] < 3) {
    iVar8 = 0;
    if (0 < param_1[0x15]) {
      puVar7 = &DAT_0032a7c0;
      puVar6 = &DAT_0032a7d0;
      puVar5 = &DAT_0032a7e0;
      do {
        FUN_002011b0(0xa8,*puVar7,param_1[*param_1 + iVar8 + 0x16] + 0xded);
        FUN_002010a0(0xa8,*puVar6,0x442,(param_1[0x15] - *param_1) - iVar8);
        iVar2 = param_1[0xde] + param_1[*param_1 + iVar8 + 0x16] * 0xc;
        uStack_e = (undefined1)*(undefined2 *)(iVar2 + 0x8b88);
        uStack_15 = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0x8b88) >> 8);
        uStack_1c = (undefined1)*(undefined2 *)(iVar2 + 0x8b8a);
        uStack_23 = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0x8b8a) >> 8);
        FUN_002010a0(0xa8,*puVar5,0x443,*(undefined2 *)(iVar2 + 0x8b86),uStack_e,uStack_15,uStack_1c
                     ,uStack_23);
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar8 < param_1[0x15]);
    }
  }
  else {
    iVar8 = 0;
    puVar7 = &DAT_0032a7c0;
    puVar6 = &DAT_0032a7d0;
    puVar5 = &DAT_0032a7e0;
    do {
      FUN_002011b0(0xa8,*puVar7,param_1[*param_1 + iVar8 + 0x16] + 0xded);
      FUN_002010a0(0xa8,*puVar6,0x442,(param_1[0x15] - *param_1) - iVar8);
      iVar2 = param_1[0xde] + param_1[*param_1 + iVar8 + 0x16] * 0xc;
      uStack_36 = (undefined1)*(undefined2 *)(iVar2 + 0x8b88);
      uStack_3d = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0x8b88) >> 8);
      uStack_44 = (undefined1)*(undefined2 *)(iVar2 + 0x8b8a);
      uStack_4b = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0x8b8a) >> 8);
      FUN_002010a0(0xa8,*puVar5,0x443,*(undefined2 *)(iVar2 + 0x8b86),uStack_36,uStack_3d,uStack_44,
                   uStack_4b);
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar8 < 3);
  }
  if (param_1[0xdf] == 2) {
    FUN_002011b0(0xa8,DAT_0032a7cc,param_1[*param_1 + 0x19] + 0xded);
    FUN_002010a0(0xa8,DAT_0032a7dc,0x442,(param_1[0x15] - *param_1) + -3);
    iVar8 = param_1[0xde] + param_1[*param_1 + 0x19] * 0xc;
    uVar3 = *(undefined4 *)(iVar8 + 0x8b86);
    uVar1 = *(undefined2 *)(iVar8 + 0x8b8a);
    uStack_65 = (undefined1)((uint)uVar3 >> 0x18);
    uStack_5e = (undefined1)((uint)uVar3 >> 0x10);
    uStack_58 = (undefined2)uVar3;
    uStack_6c = (undefined1)uVar1;
    uStack_73 = (undefined1)((ushort)uVar1 >> 8);
    FUN_002010a0(0xa8,DAT_0032a7ec,0x443,uStack_58,uStack_5e,uStack_65,uStack_6c,uStack_73);
    iVar8 = param_1[0xdf];
  }
  else {
    iVar8 = param_1[0xdf];
  }
  if (iVar8 == 1) {
    FUN_002011b0(0xa8,DAT_0032a7cc,param_1[*param_1 + 0x15] + 0xded);
    FUN_002010a0(0xa8,DAT_0032a7dc,0x442,(param_1[0x15] - *param_1) + 1);
    iVar8 = param_1[0xde] + param_1[*param_1 + 0x15] * 0xc;
    uVar3 = *(undefined4 *)(iVar8 + 0x8b86);
    uVar1 = *(undefined2 *)(iVar8 + 0x8b8a);
    uStack_8d = (undefined1)((uint)uVar3 >> 0x18);
    uStack_86 = (undefined1)((uint)uVar3 >> 0x10);
    uStack_80 = (undefined2)uVar3;
    uStack_94 = (undefined1)uVar1;
    uStack_9b = (undefined1)((ushort)uVar1 >> 8);
    FUN_002010a0(0xa8,DAT_0032a7ec,0x443,uStack_80,uStack_86,uStack_8d,uStack_94,uStack_9b);
    iVar8 = param_1[0xdf];
  }
  else {
    iVar8 = param_1[0xdf];
  }
  if ((iVar8 == 1) && (lVar4 = FUN_00201260(0xa8,2), lVar4 == 0)) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    param_1[0xdf] = 0;
    uVar3 = FUN_001f4890(0xeb);
    iVar8 = FUN_001f48c0(0xa8);
    iVar8 = *piGpffff8d3c + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x348) = 0;
    *(undefined4 *)(iVar8 + 0x338) = 0;
    if (*(int *)(iVar8 + 0x348) == 0) {
      *(undefined4 *)(iVar8 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x344) = 1;
    }
    *(undefined4 *)(iVar8 + 0x338) = 0;
    if (*(int *)(iVar8 + 0x348) == 0) {
      *(undefined4 *)(iVar8 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x344) = 1;
    }
    *(undefined4 *)(iVar8 + 0x340) = 0;
    *(undefined4 *)(iVar8 + 0x348) = uVar3;
    *(undefined4 *)(iVar8 + 0x344) = 1;
  }
  if ((param_1[0xdf] == 2) && (lVar4 = FUN_00201260(0xa8,3), lVar4 == 0)) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    param_1[0xdf] = 0;
    uVar3 = FUN_001f4890(0xe7);
    iVar8 = FUN_001f48c0(0xa8);
    iVar8 = *piGpffff8d3c + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x35c) = 0;
    *(undefined4 *)(iVar8 + 0x34c) = 0;
    if (*(int *)(iVar8 + 0x35c) == 0) {
      *(undefined4 *)(iVar8 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x358) = 1;
    }
    *(undefined4 *)(iVar8 + 0x34c) = 0;
    if (*(int *)(iVar8 + 0x35c) == 0) {
      *(undefined4 *)(iVar8 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x358) = 1;
    }
    *(undefined4 *)(iVar8 + 0x354) = 0;
    *(undefined4 *)(iVar8 + 0x35c) = uVar3;
    *(undefined4 *)(iVar8 + 0x358) = 1;
  }
  if (param_1[0x15] < 3) {
    FUN_001eeb00(0x41700000,iVar9,3,6);
  }
  else {
    FUN_001eeb00((3.0 / (float)param_1[0x15]) * 15.0,iVar9,3,6);
    FUN_001eeb00((240.0 / (float)param_1[0x15]) * (float)*param_1 + 15.0,iVar9,3,2);
  }
  FUN_00201260(0xa6,0);
  if (((param_1[0xdf] == 0) && (param_1[7] == 0)) && (param_1[5] == 0)) {
    FUN_00201260(0xa8,4);
    FUN_00201260(0xa8,5);
    FUN_00201260(0xa8,6);
    iVar8 = *(int *)(param_1[*param_1 + 0x16] * 0xc + param_1[0xde] + 0x8b80);
    iVar9 = FUN_001c1820();
    if (iVar9 - iVar8 < 1) {
      iVar8 = param_1[0x15];
    }
    else {
      iVar8 = FUN_001f48c0(0xa8);
      FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar8 * 0x4f4 + 4,0x1c,8);
      iVar8 = param_1[0x15];
    }
    if ((*param_1 < iVar8 + -1) &&
       (iVar8 = *(int *)(param_1[*param_1 + 0x17] * 0xc + param_1[0xde] + 0x8b80),
       iVar9 = FUN_001c1820(), 0 < iVar9 - iVar8)) {
      iVar8 = FUN_001f48c0(0xa8);
      FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar8 * 0x4f4 + 4,0x1b,8);
      iVar8 = param_1[0x15];
    }
    else {
      iVar8 = param_1[0x15];
    }
    if ((*param_1 < iVar8 + -2) &&
       (iVar8 = *(int *)(param_1[*param_1 + 0x18] * 0xc + param_1[0xde] + 0x8b80),
       iVar9 = FUN_001c1820(), 0 < iVar9 - iVar8)) {
      iVar8 = FUN_001f48c0(0xa8);
      FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar8 * 0x4f4 + 4,0x1a,8);
    }
  }
  iVar8 = FUN_001f48c0(0xa6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar8 * 0x4f4 + 4);
  iVar8 = FUN_001f48c0(0xa8);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar8 * 0x4f4 + 4);
  return;
}

// 0x00221e60  size 0x168
void FUN_00221e60(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
  }
  iVar3 = (int)param_1;
  FUN_001ff790(*(undefined4 *)((int)register0x000001c0 + *(int *)(iVar3 + 8) * 4 + -0x7d7c),
               0xffffffffffffffff);
  (**(code **)((int)register0x000001c0 + *(int *)(iVar3 + 8) * 4 + -0x7d80))(param_1);
  if ((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) {
    iVar1 = FUN_001f48c0(0xa8);
    FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x1c,8);
    iVar1 = FUN_001f48c0(0xa8);
    FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x1b,8);
    iVar1 = FUN_001f48c0(0xa8);
    FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x1a,8);
    lVar2 = FUN_001fb170(iVar3 + 4);
    if (lVar2 == 1) {
      if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
      }
    }
  }
  return;
}

// 0x00221fe0  size 0x65c
void FUN_00221fe0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  
  iVar2 = FUN_001f48c0(0xa7);
  iVar3 = param_1[6];
  iVar1 = *piGpffff8d3c;
  param_1[6] = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_001f4890(0x91);
    iVar3 = FUN_001f48c0(0xa7);
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
    *(undefined4 *)(iVar3 + 800) = uVar4;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar4 = FUN_001f4890(0x92);
    iVar3 = FUN_001f48c0(0xa7);
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
    *(undefined4 *)(iVar3 + 0x334) = uVar4;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar4 = FUN_001f4890(0x93);
    iVar3 = FUN_001f48c0(0xa7);
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
    *(undefined4 *)(iVar3 + 0x348) = uVar4;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    uVar4 = FUN_001f4890(0x94);
    iVar3 = FUN_001f48c0(0xa7);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x35c) = 0;
    *(undefined4 *)(iVar3 + 0x34c) = 0;
    if (*(int *)(iVar3 + 0x35c) == 0) {
      *(undefined4 *)(iVar3 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    *(undefined4 *)(iVar3 + 0x34c) = 0;
    if (*(int *)(iVar3 + 0x35c) == 0) {
      *(undefined4 *)(iVar3 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    *(undefined4 *)(iVar3 + 0x354) = 0;
    *(undefined4 *)(iVar3 + 0x35c) = uVar4;
    *(undefined4 *)(iVar3 + 0x358) = 1;
    uVar4 = FUN_001f4890(0x95);
    iVar3 = FUN_001f48c0(0xa7);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x370) = 0;
    *(undefined4 *)(iVar3 + 0x360) = 0;
    if (*(int *)(iVar3 + 0x370) == 0) {
      *(undefined4 *)(iVar3 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x360) = 0;
    if (*(int *)(iVar3 + 0x370) == 0) {
      *(undefined4 *)(iVar3 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x368) = 1;
    *(undefined4 *)(iVar3 + 0x370) = uVar4;
    *(undefined4 *)(iVar3 + 0x36c) = 1;
    uVar4 = FUN_001f4890(0x107);
    iVar3 = FUN_001f48c0(0xa7);
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
    *(undefined4 *)(iVar3 + 0x37c) = 1;
    *(undefined4 *)(iVar3 + 900) = uVar4;
    *(undefined4 *)(iVar3 + 0x380) = 1;
    uVar4 = FUN_001f4890(0x108);
    iVar3 = FUN_001f48c0(0xa7);
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
    *(undefined4 *)(iVar3 + 0x390) = 1;
    *(undefined4 *)(iVar3 + 0x398) = uVar4;
    *(undefined4 *)(iVar3 + 0x394) = 1;
    FUN_00200fc0(0);
    iVar3 = 0;
    puVar8 = &DAT_0032a7f0;
    do {
      FUN_001eeb00(0,iVar1 + iVar2 * 0x4f4 + 4,*puVar8,8);
      iVar3 = iVar3 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar3 < 3);
  }
  lVar5 = FUN_00201260(0xa7,0);
  lVar6 = FUN_00201260(0xa7,1);
  if (lVar5 == 0 && lVar6 == 0) {
    param_1[5] = 0;
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
  }
  if (param_1[7] != 0) {
    lVar5 = FUN_00201260(0xa7,2);
    lVar6 = FUN_00201260(0xa7,3);
    if (lVar5 == 0 && lVar6 == 0) {
      param_1[7] = 0;
    }
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0xa7,*(undefined4 *)(&DAT_0032a800 + *param_1 * 4),1,0);
  }
  FUN_002011b0(0xa7,0x26,0x432);
  FUN_002011b0(0xa7,0x27,0x433);
  FUN_002011b0(0xa7,0x28,0x434);
  FUN_002011b0(7,0x2e,*(undefined4 *)(&DAT_0032a810 + *param_1 * 4));
  FUN_00201260(0xa6,0);
  uVar7 = FUN_001c1890(0);
  if (*(int *)(iGpffff8d68 + 0x1c) == *(int *)(iGpffff8d68 + 0x20)) {
    lVar5 = FUN_001b3c00(uVar7);
    if (lVar5 != 0) {
      FUN_00201260(0xa7,4);
      FUN_002010a0(0xa7,0x29,0x438,5);
    }
    lVar5 = FUN_001b3b80(uVar7,0xffffffffffffffff);
    if (lVar5 != 0) {
      FUN_00201260(0xa7,5);
      FUN_002010a0(0xa7,0x2a,0x438,5);
    }
    lVar5 = FUN_001b3d70(uVar7);
    if (lVar5 != 0) {
      FUN_00201260(0xa7,6);
      FUN_002010a0(0xa7,0x2b,0x438,5);
    }
  }
  iVar3 = FUN_001f48c0(0xa6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0xa7);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

// 0x00222660  size 0xd8
void FUN_00222660(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  if ((*(uint *)(iRam0036f458 + 0x28) & 2) == 0) {
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1000;
  }
  iVar2 = (int)param_1;
  FUN_001ff790(*(undefined4 *)(&DAT_0036e984 + *(int *)(iVar2 + 8) * 4),0xffffffffffffffff);
  (*(code *)(&PTR_FUN_0036e980)[*(int *)(iVar2 + 8)])(param_1);
  if (((*(uint *)(iRam0036f458 + 0x28) & 4) == 0) && (lVar1 = FUN_001fb170(iVar2 + 4), lVar1 == 1))
  {
    if ((*(uint *)(iRam0036f458 + 0x28) & 1) == 0) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x00222740  size 0x408
void FUN_00222740(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_001f4890(0x90);
  iVar2 = FUN_001f48c0(0xa6);
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
  uVar1 = FUN_001f4890(0x91);
  iVar2 = FUN_001f48c0(0xa7);
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
  uVar1 = FUN_001f4890(0x92);
  iVar2 = FUN_001f48c0(0xa7);
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
  uVar1 = FUN_001f4890(0x93);
  iVar2 = FUN_001f48c0(0xa7);
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
  uVar1 = FUN_001f4890(0x94);
  iVar2 = FUN_001f48c0(0xa7);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
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
  uVar1 = FUN_001f4890(0x95);
  iVar2 = FUN_001f48c0(0xa7);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
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
  *(undefined4 *)(iVar2 + 0x368) = 1;
  *(undefined4 *)(iVar2 + 0x370) = uVar1;
  *(undefined4 *)(iVar2 + 0x36c) = 1;
  uVar1 = FUN_001f4890(0x107);
  iVar2 = FUN_001f48c0(0xa7);
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
  *(undefined4 *)(iVar2 + 0x37c) = 1;
  *(undefined4 *)(iVar2 + 900) = uVar1;
  *(undefined4 *)(iVar2 + 0x380) = 1;
  uVar1 = FUN_001f4890(0x108);
  iVar2 = FUN_001f48c0(0xa7);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
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
  *(undefined4 *)(iVar2 + 0x390) = 1;
  *(undefined4 *)(iVar2 + 0x398) = uVar1;
  *(undefined4 *)(iVar2 + 0x394) = 1;
  return;
}

// 0x00222b50  size 0x14c
void FUN_00222b50(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar2 = (int *)0x4695e0;
  piVar3 = param_1;
  do {
    switch(piVar3[4]) {
    case 0:
      *piVar2 = -2;
      break;
    case 1:
      *piVar2 = -3;
      break;
    case 2:
      *piVar2 = piVar3[5] + 0xa8c;
      break;
    case 3:
      *piVar2 = piVar3[5] + 0x6ec;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      *piVar2 = piVar3[5];
      break;
    default:
      *piVar2 = -3;
    }
    piVar3 = piVar3 + 2;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 3);
  if (iRam004695e0 == -3) {
    FUN_002011b0(0xb1,7,*param_1 + 0x1d0c);
  }
  else if (iRam004695e4 == -3) {
    FUN_002010a0(0xb1,7,*param_1 + 0x1d0c);
  }
  else if (iRam004695e8 == -3) {
    FUN_002010a0(0xb1,7,*param_1 + 0x1d0c);
  }
  else {
    FUN_002010a0(0xb1,7,*param_1 + 0x1d0c);
  }
  return;
}

// 0x00222cb0  size 0xa80
void FUN_00222cb0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = FUN_001f48c0(0xb2);
  iVar7 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
  iVar1 = FUN_001f48c0(0xb0);
  iVar6 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
  iVar2 = FUN_001f48c0(0xb1);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar5 = *piGpffff8d3c;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar5 = iVar5 + iVar2 * 0x4f4 + 4;
  if (iVar1 != 0) {
    uVar3 = FUN_001f4890(0xf7);
    iVar1 = FUN_001f48c0(0xb0);
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
    *(undefined4 *)(iVar1 + 0x334) = uVar3;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar3 = FUN_001f4890(0xf9);
    iVar1 = FUN_001f48c0(0xb0);
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
    *(undefined4 *)(iVar1 + 800) = uVar3;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    FUN_00200fc0(0);
    FUN_001eeb00(0,iVar6,0x1c,8);
    FUN_001eeb00(0,iVar6,0x1d,8);
    FUN_001eeb00(0,iVar5,8,8);
    FUN_001eeb00(0,iVar5,9,8);
    FUN_001eeb00(0,iVar6,0x17,8);
    FUN_001eeb00(0,iVar7,9,9);
  }
  lVar4 = FUN_00201260(0xb2,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if ((*(int *)(param_1 + 0x24) != 0) && (lVar4 = FUN_00201260(0xb2), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN_002011b0(0xae,1,0x434);
  if (*(int *)(param_1 + 0x674) == 1) {
    FUN_00222b50(*(int *)(param_1 + 0x680) +
                 *(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 + 0x9994);
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                     *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
            *(int *)(param_1 + 0x680);
    iVar1 = *(int *)(iVar2 + 0x99a0);
    if (iVar1 == -1) {
      FUN_002011b0(0xb1,5,*(int *)(iVar2 + 0x9994) + 0x1b9a);
      iVar1 = *(int *)(param_1 + 0x674);
    }
    else {
      FUN_002011b0(0xb1,5,iVar1 + 0xa8c);
      iVar1 = *(int *)(param_1 + 0x674);
    }
    FUN_002011b0(0xb1,4,*(int *)(*(int *)(*(int *)(iVar1 * 4 + param_1 + 0x678) * 4 +
                                          iVar1 * 800 + param_1 + 0x34) * 0x28 +
                                 *(int *)(param_1 + 0x680) + 0x9994) + 0x1a28);
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                              *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                     *(int *)(param_1 + 0x680) + 0x9998);
    FUN_002010a0(0xb1,6,0x444,iVar1,iVar1 % 7 + 0x44a);
  }
  else {
    if (*(int *)(param_1 + 0x674) != 0) {
      iVar1 = *(int *)(param_1 + 0x674);
      goto LAB_002230cc;
    }
    FUN_00222b50(*(int *)(param_1 + 0x680) +
                 *(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) * 0x28 + 0xb8d4);
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                     *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
            *(int *)(param_1 + 0x680);
    iVar1 = *(int *)(iVar2 + 0xb8e0);
    if (iVar1 == -1) {
      FUN_002011b0(0xb1,5,*(int *)(iVar2 + 0xb8d4) + 0x1b9a);
      iVar1 = *(int *)(param_1 + 0x674);
    }
    else {
      FUN_002011b0(0xb1,5,iVar1 + 0xa8c);
      iVar1 = *(int *)(param_1 + 0x674);
    }
    FUN_002011b0(0xb1,4,*(int *)(*(int *)(*(int *)(iVar1 * 4 + param_1 + 0x678) * 4 +
                                          iVar1 * 800 + param_1 + 0x34) * 0x28 +
                                 *(int *)(param_1 + 0x680) + 0xb8d4) + 0x1a28);
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                              *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                     *(int *)(param_1 + 0x680) + 0xb8d8);
    FUN_002010a0(0xb1,6,0x444,iVar1,iVar1 % 7 + 0x44a);
  }
  iVar1 = *(int *)(param_1 + 0x674);
LAB_002230cc:
  lVar4 = FUN_001b3920(*(undefined4 *)(param_1 + 0x680),iVar1 == 0,
                       *(undefined4 *)
                        (*(int *)(iVar1 * 4 + param_1 + 0x678) * 4 + iVar1 * 800 + param_1 + 0x34));
  if (lVar4 == -1) {
    FUN_001eeb00(0,iVar5,3,8);
    iVar1 = *(int *)(param_1 + 0x674);
  }
  else {
    FUN_001eeb00(0x3f800000,iVar5,3,8);
    iVar1 = *(int *)(param_1 + 0x674);
  }
  if (iVar1 == 1) {
    iVar1 = FUN_001b0870(*(undefined4 *)
                          (*(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 +
                           *(int *)(param_1 + 0x680) + 0x9994));
    if (*(int *)(iVar1 + 0x2c) != -1) {
      iVar1 = FUN_001b0870(*(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4
                                      + *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                             *(int *)(param_1 + 0x680) + 0x9994));
      FUN_001eea30(iVar7,10,0x16,*(undefined4 *)(&DAT_0032ad30 + *(int *)(iVar1 + 0x2c) * 4));
    }
  }
  else if ((iVar1 == 0) &&
          (iVar1 = FUN_001b0870(*(undefined4 *)
                                 (*(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) * 0x28 +
                                  *(int *)(param_1 + 0x680) + 0xb8d4)), *(int *)(iVar1 + 0x2c) != -1
          )) {
    iVar1 = FUN_001b0870(*(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                                    *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                           *(int *)(param_1 + 0x680) + 0xb8d4));
    FUN_001eea30(iVar7,10,0x16,*(undefined4 *)(&DAT_0032ad30 + *(int *)(iVar1 + 0x2c) * 4));
  }
  FUN_00201260(0xa6,0);
  iVar1 = FUN_001f48c0(0xa6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xae);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xb0);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xb1);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  if (*(int *)(param_1 + 0x674) == 1) {
    iVar1 = FUN_001b0870(*(undefined4 *)
                          (*(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 +
                           *(int *)(param_1 + 0x680) + 0x9994));
    if (*(int *)(iVar1 + 0x2c) != -1) {
      iVar1 = FUN_001f48c0(0xb2);
      FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
    }
  }
  else if ((*(int *)(param_1 + 0x674) == 0) &&
          (iVar1 = FUN_001b0870(*(undefined4 *)
                                 (*(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) * 0x28 +
                                  *(int *)(param_1 + 0x680) + 0xb8d4)), *(int *)(iVar1 + 0x2c) != -1
          )) {
    iVar1 = FUN_001f48c0(0xb2);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  }
  return;
}

// 0x00223730  size 0x11ac
void FUN_00223730(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  
  iVar1 = FUN_001f48c0(0xaf);
  iVar11 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
  iVar1 = FUN_001f48c0(0xb0);
  iVar8 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
  FUN_001f48c0(0xb1);
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0xee);
    iVar1 = FUN_001f48c0(0xb0);
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
    uVar2 = FUN_001f4890(0xef);
    iVar1 = FUN_001f48c0(0xb0);
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
    uVar2 = FUN_001f4890(0xf2);
    iVar1 = FUN_001f48c0(0xaf);
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
    uVar2 = FUN_001f4890(0xf3);
    iVar1 = FUN_001f48c0(0xaf);
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
    uVar2 = FUN_001f4890(0xf7);
    iVar1 = FUN_001f48c0(0xb0);
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
    uVar2 = FUN_001f4890(0xf9);
    iVar1 = FUN_001f48c0(0xb0);
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
    uVar2 = FUN_001f4890(0xf4);
    iVar1 = FUN_001f48c0(0xaf);
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
    uVar2 = FUN_001f4890(0xf1);
    iVar1 = FUN_001f48c0(0xaf);
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
    FUN_00200fc0(0);
    FUN_001ff610(0);
    FUN_00200a10(0xb0,(int)register0x000001c0 + -0x7d30,2,1);
    FUN_001eeb00(0,iVar11,0x3f,8);
    FUN_001eeb00(0,iVar11,0x41,8);
    FUN_001eeb00(0,iVar8,0x1c,8);
    FUN_001eeb00(0,iVar8,0x1d,8);
    FUN_001eeb00(0,iVar8,0x17,8);
    uGpffff8e58 = 0;
    do {
      FUN_001eeb00(0,iVar11,*(undefined4 *)(&DAT_0032ac40 + uGpffff8e58 * 4),8);
      uGpffff8e58 = uGpffff8e58 + 1;
    } while (uGpffff8e58 < 0xb);
  }
  lVar4 = FUN_001ff320(0xffffffffffffffff,0xffffffffffffffff,0);
  FUN_002011b0(5,0x1c,0x43f);
  if (*(int *)(param_1 + 0x24) != 0) {
    if (lVar4 == 2) {
      FUN_001ff600();
    }
    else if (*(int *)(param_1 + 0x14) == 0) {
      if (lVar4 == 3) {
        lVar6 = FUN_00201260(0xb2);
        lVar5 = FUN_00201260(0xb0,1);
        if (lVar6 == 0 && lVar5 == 0) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
    }
    else if ((lVar4 == 3) && (lVar6 = FUN_00201260(0xb2), lVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  if (lVar4 == 2) {
    if (*(int *)(param_1 + 0x674) == 1) {
      lVar4 = FUN_00201260(0xb0);
      lVar6 = FUN_00201260(0xaf,0);
      if (lVar4 == 0 && lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    else {
      lVar4 = FUN_00201260(0xb0);
      lVar6 = FUN_00201260(0xaf,0);
      if (lVar4 == 0 && lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
  }
  FUN_002011b0(0xae,1,0x434);
  FUN_002011b0(0xaf,0x43,0x441);
  FUN_002011b0(0xaf,0x44,0x440);
  iVar1 = *(int *)(param_1 + 0x674) * 4 + param_1;
  if (*(int *)(iVar1 + 0x2c) < 1) {
    FUN_002010a0(0xb0,0x19,0x447,0);
  }
  else {
    FUN_002010a0(0xb0,0x19,0x447,*(int *)(iVar1 + 0x678) + 1);
  }
  FUN_002011b0(0xb0,0x1a,0x449);
  iVar1 = *(int *)(param_1 + 0x674);
  iVar8 = *(int *)(iVar1 * 4 + param_1 + 0x2c);
  if (0 < iVar8) {
    if (iVar8 < 0xb) {
      iVar3 = 0;
      if (0 < iVar8) {
        iVar8 = 0;
        puVar10 = (undefined4 *)0x32acd0;
        puVar9 = (undefined4 *)0x32ac70;
        puVar12 = (undefined4 *)0x32aca0;
        do {
          uVar13 = 0;
          if (iVar1 == 1) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar8 + 0x354) * 0x28 +
                         0x999c) == '\x01') {
              uVar13 = 5;
            }
            iVar1 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar8 + 0x354) * 0x28 +
                            0x9998);
            FUN_002010a0(0xaf,*puVar10,0x444,iVar1,iVar1 % 7 + 0x44a);
            iVar7 = *(int *)(param_1 + 0x680) +
                    *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar8 + 0x34) * 0x28;
            iVar1 = *(int *)(iVar7 + 0x99a0);
            if (iVar1 == -1) {
              FUN_002011b0(0xaf,*puVar9,*(int *)(iVar7 + 0x9994) + 0x1b9a);
            }
            else {
              FUN_002011b0(0xaf,*puVar9,iVar1 + 0xa8c);
            }
            FUN_00201140(0xaf,*puVar12,uVar13,
                         *(int *)(*(int *)(param_1 + 0x680) +
                                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar8 + 0x34)
                                  * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar1 == 0) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar8 + 0x34) * 0x28 +
                         0xb8dc) == '\x01') {
              uVar13 = 5;
            }
            iVar1 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar8 + 0x34) * 0x28 +
                            0xb8d8);
            FUN_002010a0(0xaf,*puVar10,0x444,iVar1,iVar1 % 7 + 0x44a);
            iVar7 = *(int *)(param_1 + 0x680) +
                    *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar8 + 0x34) * 0x28;
            iVar1 = *(int *)(iVar7 + 0xb8e0);
            if (iVar1 == -1) {
              FUN_002011b0(0xaf,*puVar9,*(int *)(iVar7 + 0xb8d4) + 0x1b9a);
            }
            else {
              FUN_002011b0(0xaf,*puVar9,iVar1 + 0xa8c);
            }
            FUN_00201140(0xaf,*puVar12,uVar13,
                         *(int *)(*(int *)(param_1 + 0x680) +
                                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar8 + 0x34)
                                  * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar1 = *(int *)(param_1 + 0x674);
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + 4;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        } while (iVar3 < *(int *)(param_1 + iVar1 * 4 + 0x2c));
      }
    }
    else {
      iVar1 = 0;
      puVar10 = (undefined4 *)0x32acd0;
      puVar9 = (undefined4 *)0x32ac70;
      puVar12 = (undefined4 *)0x32aca0;
      do {
        uVar13 = 0;
        if (*(int *)(param_1 + 0x674) == 1) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar1) -
                                           *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x999c) ==
              '\x01') {
            uVar13 = 5;
          }
          iVar8 = *(int *)(*(int *)(param_1 + 0x680) +
                           *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar1) -
                                              *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x9998);
          FUN_002010a0(0xaf,*puVar10,0x444,iVar8,iVar8 % 7 + 0x44a);
          iVar8 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar3 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar8 + 0x678) + iVar1) - *(int *)(iVar8 + 4)) * 4 + 0x34) *
                  0x28;
          iVar8 = *(int *)(iVar3 + 0x99a0);
          if (iVar8 == -1) {
            FUN_002011b0(0xaf,*puVar9,*(int *)(iVar3 + 0x9994) + 0x1b9a);
          }
          else {
            FUN_002011b0(0xaf,*puVar9,iVar8 + 0xa8c);
          }
          iVar8 = param_1 + *(int *)(param_1 + 0x674) * 4;
          FUN_00201140(0xaf,*puVar12,uVar13,
                       *(int *)(*(int *)(param_1 + 0x680) +
                                *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                         ((*(int *)(iVar8 + 0x678) + iVar1) - *(int *)(iVar8 + 4)) *
                                         4 + 0x34) * 0x28 + 0x9994) + 0x1a28);
        }
        else if (*(int *)(param_1 + 0x674) == 0) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar1) -
                                           *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar13 = 5;
          }
          iVar8 = *(int *)(*(int *)(param_1 + 0x680) +
                           *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar1) -
                                              *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8d8);
          FUN_002010a0(0xaf,*puVar10,0x444,iVar8,iVar8 % 7 + 0x44a);
          iVar8 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar3 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar8 + 0x678) + iVar1) - *(int *)(iVar8 + 4)) * 4 + 0x34) *
                  0x28;
          iVar8 = *(int *)(iVar3 + 0xb8e0);
          if (iVar8 == -1) {
            FUN_002011b0(0xaf,*puVar9,*(int *)(iVar3 + 0xb8d4) + 0x1b9a);
          }
          else {
            FUN_002011b0(0xaf,*puVar9,iVar8 + 0xa8c);
          }
          iVar8 = param_1 + *(int *)(param_1 + 0x674) * 4;
          FUN_00201140(0xaf,*puVar12,uVar13,
                       *(int *)(*(int *)(param_1 + 0x680) +
                                *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                         ((*(int *)(iVar8 + 0x678) + iVar1) - *(int *)(iVar8 + 4)) *
                                         4 + 0x34) * 0x28 + 0xb8d4) + 0x1a28);
        }
        iVar1 = iVar1 + 1;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar1 < 10);
    }
  }
  uVar13 = FUN_0028b580(*(undefined4 *)(param_1 + 0x674));
  FUN_002010a0(7,0x2e,0x446,uVar13);
  if (*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x2c) < 0xb) {
    iVar8 = 0;
    iVar1 = 0;
    puVar9 = &DAT_0032ad00;
    do {
      iVar3 = *(int *)(param_1 + 0x674);
      if ((iVar8 < *(int *)(param_1 + iVar3 * 4 + 0x2c)) &&
         (lVar4 = FUN_001b3920(*(undefined4 *)(param_1 + 0x680),iVar3 == 0,
                               *(undefined4 *)(param_1 + iVar3 * 800 + iVar1 + 0x34)), lVar4 != -1))
      {
        FUN_001eeb00(0x3f800000,iVar11,*puVar9,8);
      }
      else {
        FUN_001eeb00(0,iVar11,*puVar9,8);
      }
      iVar8 = iVar8 + 1;
      iVar1 = iVar1 + 4;
      puVar9 = puVar9 + 1;
    } while (iVar8 < 0xb);
  }
  else {
    iVar1 = 0;
    puVar9 = &DAT_0032ad00;
    do {
      iVar8 = *(int *)(param_1 + 0x674);
      iVar3 = param_1 + iVar8 * 4;
      iVar7 = iVar1 + (*(int *)(iVar3 + 0x678) - *(int *)(iVar3 + 4));
      if ((iVar7 < *(int *)(iVar3 + 0x2c)) &&
         (lVar4 = FUN_001b3920(*(undefined4 *)(param_1 + 0x680),iVar8 == 0,
                               *(undefined4 *)(param_1 + iVar8 * 800 + iVar7 * 4 + 0x34)),
         lVar4 != -1)) {
        FUN_001eeb00(0x3f800000,iVar11,*puVar9,8);
      }
      else {
        FUN_001eeb00(0,iVar11,*puVar9,8);
      }
      iVar1 = iVar1 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar1 < 0xb);
  }
  FUN_00201260(0xa6,0);
  iVar1 = FUN_001f48c0(0xa6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xae);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xaf);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xb0);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return;
}

