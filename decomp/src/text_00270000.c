// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00270000 - 0x00274000
#include "ghidra_types.h"

// 0x002700c0  size 0xb44
void FUN_002700c0(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 0x3c);
  *(undefined4 *)(iVar6 + 0x3c) = 0;
  if (iVar3 != 0) {
    if (*(int *)(iVar6 + 4) == 0) {
      uVar2 = FUN_001f4890(0x2bf);
      iVar3 = FUN_001f48c0(0x6f);
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
      uVar2 = FUN_001f4890(0x2c0);
      iVar3 = FUN_001f48c0(0x6f);
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
      uVar2 = FUN_001f4890(0x2c1);
      iVar3 = FUN_001f48c0(0x6f);
      iVar3 = *piRam0036f42c + iVar3 * 0x4f4;
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
      *(undefined4 *)(iVar3 + 0x348) = uVar2;
      *(undefined4 *)(iVar3 + 0x344) = 1;
      uVar2 = FUN_001f4890(0x2c2);
      iVar3 = FUN_001f48c0(0x6f);
      iVar3 = *piRam0036f42c + iVar3 * 0x4f4;
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
      *(undefined4 *)(iVar3 + 0x354) = 1;
      *(undefined4 *)(iVar3 + 0x35c) = uVar2;
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    else {
      uVar2 = FUN_001f4890(0x2d5);
      iVar3 = FUN_001f48c0(0x70);
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
      uVar2 = FUN_001f4890(0x2d6);
      iVar3 = FUN_001f48c0(0x70);
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
      uVar2 = FUN_001f4890(0x2d7);
      iVar3 = FUN_001f48c0(0x70);
      iVar3 = *piRam0036f42c + iVar3 * 0x4f4;
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
      *(undefined4 *)(iVar3 + 0x348) = uVar2;
      *(undefined4 *)(iVar3 + 0x344) = 1;
      uVar2 = FUN_001f4890(0x2d8);
      iVar3 = FUN_001f48c0(0x70);
      iVar3 = *piRam0036f42c + iVar3 * 0x4f4;
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
      *(undefined4 *)(iVar3 + 0x354) = 1;
      *(undefined4 *)(iVar3 + 0x35c) = uVar2;
      *(undefined4 *)(iVar3 + 0x358) = 1;
      uVar2 = FUN_001f4890(0x2d9);
      iVar3 = FUN_001f48c0(0x70);
      iVar3 = *piRam0036f42c + iVar3 * 0x4f4;
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
      *(undefined4 *)(iVar3 + 0x370) = uVar2;
      *(undefined4 *)(iVar3 + 0x36c) = 1;
    }
    FUN_00200fc0(0);
  }
  bVar1 = *(int *)(iVar6 + 4) == 0;
  if (bVar1) {
    uVar9 = 0x6f;
    iVar3 = FUN_001f48c0(0x6f);
    FUN_001eeb00(0x3ecccccd,*piRam0036f42c + iVar3 * 0x4f4 + 4,0x25,8);
    iVar3 = FUN_001f48c0(0x6f);
    FUN_001eeb00(0x3ecccccd,*piRam0036f42c + iVar3 * 0x4f4 + 4,0x24,8);
  }
  else {
    uVar9 = 0x70;
    iVar3 = FUN_001f48c0(0x70);
    FUN_001eeb00(0x3ecccccd,*piRam0036f42c + iVar3 * 0x4f4 + 4,0x20,8);
    iVar3 = FUN_001f48c0(0x70);
    FUN_001eeb00(0x3ecccccd,*piRam0036f42c + iVar3 * 0x4f4 + 4,0x21,8);
    iVar3 = FUN_001f48c0(0x70);
    FUN_001eeb00(0x3ecccccd,*piRam0036f42c + iVar3 * 0x4f4 + 4,0x22,8);
  }
  uVar8 = (uint)!bVar1;
  lVar5 = FUN_00201260(uVar9,0);
  if (lVar5 == 0) {
    *(undefined4 *)(iVar6 + 0x38) = 0;
  }
  if ((*(int *)(iVar6 + 0x40) != 0) && (lVar5 = FUN_00201260(uVar9), lVar5 == 0)) {
    *(undefined4 *)(iVar6 + 0x40) = 0;
  }
  FUN_0026fde0(param_1);
  if (*(int *)(iVar6 + 4) == 0) {
    iVar3 = FUN_001f48c0(0x6f);
    FUN_001eeb00(0,*piRam0036f42c + iVar3 * 0x4f4 + 4,3,8);
    iVar3 = FUN_001f48c0(0x6f);
    FUN_001eeb00(0,*piRam0036f42c + iVar3 * 0x4f4 + 4,7,8);
    iVar3 = FUN_001f48c0(0x6f);
    FUN_001eeb00(0,*piRam0036f42c + iVar3 * 0x4f4 + 4,0xb,8);
    iVar3 = FUN_001f48c0(0x6f);
    FUN_001eeb00(0,*piRam0036f42c + iVar3 * 0x4f4 + 4,0xf,8);
    iVar3 = FUN_001f48c0(0x6f);
    FUN_001eeb00(0,*piRam0036f42c + iVar3 * 0x4f4 + 4,0x13,8);
    iVar3 = FUN_001f48c0(0x6f);
    FUN_001eeb00(0,*piRam0036f42c + iVar3 * 0x4f4 + 4,0x17,8);
    if (*(int *)(iVar6 + 0x14) == 0) {
      iVar3 = FUN_001f48c0(0x6f);
      FUN_001eea30(*piRam0036f42c + iVar3 * 0x4f4 + 4,0x23,0x16,3);
      iVar3 = FUN_001f48c0(0x6f);
      FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4,3,8);
    }
    else {
      iVar3 = FUN_001f48c0(0x6f);
      FUN_001eea30(*piRam0036f42c + iVar3 * 0x4f4 + 4,0x23,0x16,2);
      iVar3 = FUN_001f48c0(0x6f);
      FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4,7,8);
    }
    iVar3 = FUN_001f48c0(0x6f);
    FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4,
                 *(undefined4 *)(&DAT_0032da40 + *(int *)(iVar6 + 0x18) * 4),8);
  }
  else {
    iVar3 = 0;
    puVar7 = &DAT_0032da50;
    do {
      iVar4 = FUN_001f48c0(0x70);
      FUN_001eeb00(0,*piRam0036f42c + iVar4 * 0x4f4 + 4,*puVar7,8);
      iVar3 = iVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar3 < 8);
    iVar3 = FUN_001f48c0(0x70);
    FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4,
                 (&DAT_0032da50)[*(int *)(iVar6 + 0x14)],8);
    iVar3 = FUN_001f48c0(0x70);
    FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4,
                 *(undefined4 *)(&DAT_0032da58 + *(int *)(iVar6 + 0x18) * 4),8);
    iVar3 = FUN_001f48c0(0x70);
    FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4,
                 *(undefined4 *)(&DAT_0032da68 + *(int *)(iVar6 + 0x1c) * 4),8);
  }
  if (*piRam0036f468 == 1) {
    iVar3 = *(int *)(iVar6 + 0x20);
    if (iVar3 == 2) {
      FUN_00200d70(uVar9,*(undefined4 *)(uVar8 * 4 + *(int *)(iVar6 + 0x1c) * 8 + 0x32daa0),0,0);
    }
    else if (iVar3 == 1) {
      FUN_00200d70(uVar9,*(undefined4 *)(uVar8 * 4 + *(int *)(iVar6 + 0x18) * 8 + 0x32da80),0,0);
    }
    else {
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar6 + 0x20);
        goto LAB_002708ac;
      }
      FUN_00200d70(uVar9,*(undefined4 *)(uVar8 * 4 + *(int *)(iVar6 + 0x14) * 8 + 0x32da70),0,0);
    }
  }
  else {
    FUN_00200ef0(0);
  }
  iVar3 = *(int *)(iVar6 + 0x20);
LAB_002708ac:
  FUN_001ff790(3,*(undefined4 *)(&DAT_0032dab0 + iVar3 * 4));
  FUN_00201260(uVar9,*(int *)(iVar6 + 0x20) + 2);
  iVar3 = FUN_001f48c0(0x6e);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(uVar9);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4);
  return;
}

// 0x00270c10  size 0xa34
void FUN_00270c10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  
  iVar1 = FUN_001f68b0(1);
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar1 = iVar1 + 2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar2 != 0) {
    uVar4 = FUN_001f4890(0x2b6);
    iVar2 = FUN_001f48c0(0x6e);
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
    *(undefined4 *)(iVar2 + 800) = uVar4;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar4 = FUN_001f4890(0x2b7);
    iVar2 = FUN_001f48c0(0x6e);
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
    *(undefined4 *)(iVar2 + 0x334) = uVar4;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar4 = FUN_001f4890(0x2d4);
    iVar2 = FUN_001f48c0(0x6e);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3c8) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3d4) = 0;
    *(undefined4 *)(iVar2 + 0x3c4) = 0;
    if (*(int *)(iVar2 + 0x3d4) == 0) {
      *(undefined4 *)(iVar2 + 0x3d0) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3d0) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3c4) = 0;
    if (*(int *)(iVar2 + 0x3d4) == 0) {
      *(undefined4 *)(iVar2 + 0x3d0) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3d0) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3cc) = 0;
    *(undefined4 *)(iVar2 + 0x3d4) = uVar4;
    *(undefined4 *)(iVar2 + 0x3d0) = 1;
    uVar4 = FUN_001f4890(0x2b8);
    iVar2 = FUN_001f48c0(0x6e);
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
    *(undefined4 *)(iVar2 + 0x348) = uVar4;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar4 = FUN_001f4890(0x2b9);
    iVar2 = FUN_001f48c0(0x6e);
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
    *(undefined4 *)(iVar2 + 0x35c) = uVar4;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar4 = FUN_001f4890(0x2ba);
    iVar2 = FUN_001f48c0(0x6e);
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
    *(undefined4 *)(iVar2 + 0x370) = uVar4;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    uVar4 = FUN_001f4890(699);
    iVar2 = FUN_001f48c0(0x6e);
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
    *(undefined4 *)(iVar2 + 900) = uVar4;
    *(undefined4 *)(iVar2 + 0x380) = 1;
    uVar4 = FUN_001f4890(700);
    iVar2 = FUN_001f48c0(0x6e);
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
    *(undefined4 *)(iVar2 + 0x398) = uVar4;
    *(undefined4 *)(iVar2 + 0x394) = 1;
    uVar4 = FUN_001f4890(0x2bd);
    iVar2 = FUN_001f48c0(0x6e);
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
    *(undefined4 *)(iVar2 + 0x3ac) = uVar4;
    *(undefined4 *)(iVar2 + 0x3a8) = 1;
    uVar4 = FUN_001f4890(0x2be);
    iVar2 = FUN_001f48c0(0x6e);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3c0) = 0;
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
    if (*(int *)(iVar2 + 0x3c0) == 0) {
      *(undefined4 *)(iVar2 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
    if (*(int *)(iVar2 + 0x3c0) == 0) {
      *(undefined4 *)(iVar2 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3b8) = 0;
    *(undefined4 *)(iVar2 + 0x3c0) = uVar4;
    *(undefined4 *)(iVar2 + 0x3bc) = 1;
    FUN_00200fc0(0);
    FUN_00200a10(0x6e,(int)register0x000001c0 + -0x79d0,2,0);
  }
  iVar2 = FUN_001f68b0(1);
  FUN_002008b0(3 < iVar2 + 1);
  if (*(int *)(param_1 + 0x28) == 1) {
    lVar6 = FUN_00201260(0x6e,0);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  else {
    lVar6 = FUN_00201260(0x6e,0);
    lVar7 = FUN_00201260(0x6e,1);
    lVar8 = FUN_00201260(0x6e,9);
    if (lVar8 == 0 && (lVar6 == 0 && lVar7 == 0)) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x30) == 1) {
      lVar6 = FUN_00201260(0x6e,*(int *)(param_1 + 8) + 4);
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    else {
      lVar6 = FUN_00201260(0x6e,8);
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    FUN_002008b0(0);
    FUN_00200ef0(0);
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x6e,*(undefined4 *)(&DAT_0032da10 + *(int *)(param_1 + 8) * 4),1,0);
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  if (iVar2 == 2) {
    FUN_00200fc0(0);
    lVar6 = FUN_00201260(0x6e,3);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      iVar2 = FUN_001f48c0(0x6e);
      iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x34c) = 0;
      if (*(int *)(iVar2 + 0x35c) == 0) {
        *(undefined4 *)(iVar2 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x358) = 1;
      }
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    }
    else {
      iVar2 = (iVar1 + (*(int *)(param_1 + 4) - *(int *)(param_1 + 8)) + 4) % iVar1;
      uVar9 = FUN_001f69b0(iVar2 + -1,1);
      FUN_002011b0(0x6e,0x4a,uVar9);
      iVar3 = FUN_001f48c0(0x6e);
      FUN_001f5380(*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x44,0x16,
                   *(undefined4 *)(&DAT_0032d9e0 + iVar2 * 4));
    }
  }
  else if (iVar2 == 1) {
    lVar6 = FUN_00201260(0x6e);
    if (lVar6 == 0) {
      FUN_00200fc0(0);
      *(undefined4 *)(param_1 + 0xc) = 0;
      iVar2 = FUN_001f48c0(0x6e);
      iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x338) = 0;
      if (*(int *)(iVar2 + 0x348) == 0) {
        *(undefined4 *)(iVar2 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x344) = 1;
      }
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    }
    else {
      iVar2 = (iVar1 + (*(int *)(param_1 + 4) - *(int *)(param_1 + 8)) + -1) % iVar1;
      uVar9 = FUN_001f69b0(iVar2 + -1,1);
      FUN_002011b0(0x6e,0x4a,uVar9);
      iVar3 = FUN_001f48c0(0x6e);
      FUN_001f5380(*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x44,0x16,
                   *(undefined4 *)(&DAT_0032d9e0 + iVar2 * 4));
    }
  }
  iVar2 = 0;
  puVar11 = &DAT_0032d9d0;
  puVar10 = &DAT_0032da30;
  while( true ) {
    if (iVar1 < 4) {
      iVar3 = iVar1;
    }
    else {
      iVar3 = 4;
    }
    if (iVar3 <= iVar2) break;
    iVar3 = (iVar1 + iVar2 + (*(int *)(param_1 + 4) - *(int *)(param_1 + 8))) % iVar1;
    uVar9 = FUN_001f69b0(iVar3 + -1,1);
    FUN_002011b0(0x6e,*puVar11,uVar9);
    iVar5 = FUN_001f48c0(0x6e);
    FUN_001f5380(*piGpffff8d3c + iVar5 * 0x4f4 + 4,*puVar10,0x16,
                 *(undefined4 *)(&DAT_0032d9e0 + iVar3 * 4));
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
    iVar2 = iVar2 + 1;
  }
  if ((iVar1 < 4) && (iVar1 < 4)) {
    puVar12 = &DAT_0032da20 + iVar1 * 4;
    puVar10 = &DAT_0032da30 + iVar1;
    do {
      iVar2 = FUN_001f48c0(0x6e);
      FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,*(undefined4 *)(puVar12 + -4),8);
      iVar2 = FUN_001f48c0(0x6e);
      FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,*puVar10,8);
      iVar1 = iVar1 + 1;
      puVar12 = puVar12 + 4;
      puVar10 = puVar10 + 1;
    } while (iVar1 < 4);
  }
  FUN_001ff790(3,0x127);
  iVar2 = FUN_001f48c0(0x6e);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00271670  size 0x138
void FUN_00271670(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
  }
  piVar3 = (int *)param_1;
  (*(code *)(&PTR_FUN_0032d9b8)[piVar3[0xb]])(param_1);
  iVar1 = FUN_001f48c0(0x6d);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_0020eb50();
  if (*piVar3 == 3) {
    FUN_001ffdc0(*(undefined4 *)(iGpffff8d68 + 0x2c),0xfffffffffffffffe,0xffffffffffffffff,0);
  }
  else {
    FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  }
  if (((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) && (lVar2 = FUN_001fb170(piVar3 + 10), lVar2 == 1))
  {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x002717c0  size 0x244
void FUN_002717c0(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_001f4890(0x411);
    iVar3 = FUN_001f48c0(0x10);
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
    uVar4 = FUN_001f4890(0x412);
    iVar3 = FUN_001f48c0(0x10);
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
  }
  lVar5 = FUN_00201260(0x10,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if ((*(int *)(param_1 + 300) != 0) && (lVar5 = FUN_00201260(0x10), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  uVar2 = FUN_001f5cb0(*(undefined4 *)(param_1 + 8));
  FUN_00201140(0x10,0xf,4,(uVar2 & 0xff) + 0x67);
  uVar1 = FUN_001f5cb0(*(undefined4 *)(param_1 + 8));
  switch(uVar1) {
  case 0:
    uVar6 = 0xc2;
    break;
  default:
    uVar6 = 0xffffffffffffffff;
    break;
  case 3:
    uVar6 = 0xc3;
    break;
  case 4:
    uVar6 = 0xc6;
    break;
  case 5:
    uVar6 = 199;
    break;
  case 6:
    uVar6 = 0xc4;
    break;
  case 7:
    uVar6 = 0xc5;
  }
  FUN_002011b0(0x10,0x10,uVar6);
  iVar3 = FUN_001f48c0(0x10);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

// 0x00271a10  size 0x200
void FUN_00271a10(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(2);
  }
  lVar2 = FUN_001ff320(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x10),
                       (int)register0x000001c0 + -0x7998);
  uVar3 = FUN_001f5d20(*(undefined4 *)(param_1 + 8));
  FUN_002010a0(5,0x1c,0x12f,uVar3);
  if (*(int *)(param_1 + 300) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  uVar3 = FUN_001f5d60(*(undefined4 *)(param_1 + 8));
  uVar4 = FUN_001c1890(0);
  uVar4 = FUN_001b8990(uVar4);
  FUN_002011b0(0x72,0x4a,0x128);
  FUN_002010a0(0x72,0x4b,0x3d,uVar4,0xf);
  uVar4 = FUN_001f5df0(*(undefined4 *)(param_1 + 8));
  FUN_002011b0(0x72,0x4e,uVar4);
  uVar4 = FUN_001f6630(uVar3);
  uVar3 = FUN_001f6400(uVar3);
  FUN_002010a0(0x72,0x4d,0x45,uVar4,uVar3);
  FUN_002011b0(0x72,0x4c,0x129);
  uVar3 = FUN_001f5c80(*(undefined4 *)(param_1 + 8));
  FUN_001fe620(0x72,0x49,uVar3);
  FUN_002011b0(0x72,0x4f,0x12a);
  uVar3 = FUN_001c1890(0);
  uVar3 = FUN_001bcb00(uVar3);
  FUN_001fe620(0x72,0x50,uVar3);
  uVar3 = FUN_001f5d20(*(undefined4 *)(param_1 + 8));
  FUN_002011b0(0x72,0x51,uVar3);
  iVar1 = FUN_001f48c0(0x72);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00271c10  size 0x1e4
void FUN_00271c10(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(0);
  }
  lVar2 = FUN_001ff320(299,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 300) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  uVar3 = FUN_001f5d60(*(undefined4 *)(param_1 + 8));
  uVar4 = FUN_001c1890(0);
  uVar4 = FUN_001b8990(uVar4);
  FUN_002011b0(0x72,0x4a,0x128);
  FUN_002010a0(0x72,0x4b,0x3d,uVar4,0xf);
  uVar4 = FUN_001f5df0(*(undefined4 *)(param_1 + 8));
  FUN_002011b0(0x72,0x4e,uVar4);
  uVar4 = FUN_001f6630(uVar3);
  uVar3 = FUN_001f6400(uVar3);
  FUN_002010a0(0x72,0x4d,0x45,uVar4,uVar3);
  FUN_002011b0(0x72,0x4c,0x129);
  uVar3 = FUN_001f5c80(*(undefined4 *)(param_1 + 8));
  FUN_001fe620(0x72,0x49,uVar3);
  FUN_002011b0(0x72,0x4f,0x12a);
  uVar3 = FUN_001c1890(0);
  uVar3 = FUN_001bcb00(uVar3);
  FUN_001fe620(0x72,0x50,uVar3);
  uVar3 = FUN_001f5d20(*(undefined4 *)(param_1 + 8));
  FUN_002011b0(0x72,0x51,uVar3);
  FUN_001ff790(3,0xffffffffffffffff);
  iVar1 = FUN_001f48c0(0x72);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00271e00  size 0x240
void FUN_00271e00(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(0);
  }
  lVar2 = FUN_001ff320(0xffffffffffffffff,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x110) == 1) {
    uVar3 = FUN_001f5d60(*(undefined4 *)(param_1 + 8));
    uVar4 = FUN_001f6630(uVar3);
    uVar3 = FUN_001f6400(uVar3);
    FUN_002010a0(5,0x1c,0x13c,uVar4,uVar3);
    iVar1 = *(int *)(param_1 + 300);
  }
  else {
    FUN_002010a0(5,0x1c,0x135);
    iVar1 = *(int *)(param_1 + 300);
  }
  if (iVar1 != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  uVar3 = FUN_001f5d60(*(undefined4 *)(param_1 + 8));
  uVar4 = FUN_001c1890(0);
  uVar4 = FUN_001b8990(uVar4);
  FUN_002011b0(0x72,0x4a,0x128);
  FUN_002010a0(0x72,0x4b,0x3d,uVar4,0xf);
  uVar4 = FUN_001f5df0(*(undefined4 *)(param_1 + 8));
  FUN_002011b0(0x72,0x4e,uVar4);
  uVar4 = FUN_001f6630(uVar3);
  uVar3 = FUN_001f6400(uVar3);
  FUN_002010a0(0x72,0x4d,0x45,uVar4,uVar3);
  FUN_002011b0(0x72,0x4c,0x129);
  uVar3 = FUN_001f5c80(*(undefined4 *)(param_1 + 8));
  FUN_001fe620(0x72,0x49,uVar3);
  FUN_002011b0(0x72,0x4f,0x12a);
  uVar3 = FUN_001c1890(0);
  uVar3 = FUN_001bcb00(uVar3);
  FUN_001fe620(0x72,0x50,uVar3);
  uVar3 = FUN_001f5d20(*(undefined4 *)(param_1 + 8));
  FUN_002011b0(0x72,0x51,uVar3);
  iVar1 = FUN_001f48c0(0x72);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00272040  size 0x1fc
void FUN_00272040(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x110);
  }
  else {
    FUN_001ff610(2);
    iVar1 = *(int *)(param_1 + 0x110);
  }
  if (iVar1 == 1) {
    uVar4 = 0x13b;
  }
  else {
    uVar4 = 300;
  }
  lVar2 = FUN_001ff320(uVar4,*(undefined4 *)(param_1 + 0x10),0x36ed50);
  if (*(int *)(param_1 + 300) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  uVar4 = FUN_001f5d60(*(undefined4 *)(param_1 + 8));
  uVar3 = FUN_001c1890(0);
  uVar3 = FUN_001b8990(uVar3);
  FUN_002011b0(0x72,0x4a,0x128);
  FUN_002010a0(0x72,0x4b,0x3d,uVar3,0xf);
  uVar3 = FUN_001f5df0(*(undefined4 *)(param_1 + 8));
  FUN_002011b0(0x72,0x4e,uVar3);
  uVar3 = FUN_001f6630(uVar4);
  uVar4 = FUN_001f6400(uVar4);
  FUN_002010a0(0x72,0x4d,0x45,uVar3,uVar4);
  FUN_002011b0(0x72,0x4c,0x129);
  uVar4 = FUN_001f5c80(*(undefined4 *)(param_1 + 8));
  FUN_001fe620(0x72,0x49,uVar4);
  FUN_002011b0(0x72,0x4f,0x12a);
  uVar4 = FUN_001c1890(0);
  uVar4 = FUN_001bcb00(uVar4);
  FUN_001fe620(0x72,0x50,uVar4);
  uVar4 = FUN_001f5d20(*(undefined4 *)(param_1 + 8));
  FUN_002011b0(0x72,0x51,uVar4);
  iVar1 = FUN_001f48c0(0x72);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00272240  size 0x208
void FUN_00272240(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_001f4890(0x2d0);
    iVar2 = FUN_001f48c0(0x76);
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
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0x2d1);
    iVar2 = FUN_001f48c0(0x76);
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
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
  }
  lVar4 = FUN_00201260(0x76,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if ((*(int *)(param_1 + 300) != 0) && (lVar4 = FUN_00201260(0x76), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  iVar1 = FUN_001f48c0(0x76);
  iVar2 = *piRam0036f42c;
  uVar5 = FUN_001f5de0(*(undefined4 *)(param_1 + 8));
  FUN_001eea30(iVar2 + iVar1 * 0x4f4 + 4,0x19,0x16,uVar5);
  uVar5 = FUN_001f5df0(*(undefined4 *)(param_1 + 8));
  FUN_002010a0(0x76,0x1a,0x137,uVar5);
  iVar2 = FUN_001f48c0(0x76);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00272450  size 0x270
void FUN_00272450(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_001f4890(0x2ce);
    iVar2 = FUN_001f48c0(0x75);
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
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0x2cf);
    iVar2 = FUN_001f48c0(0x75);
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
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
  }
  lVar4 = FUN_00201260(0x75,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if ((*(int *)(param_1 + 300) != 0) && (lVar4 = FUN_00201260(0x75), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  uVar5 = FUN_001f5d60(*(undefined4 *)(param_1 + 8));
  iVar1 = FUN_001f48c0(0x75);
  iVar2 = *piRam0036f42c;
  uVar6 = FUN_001f5de0(*(undefined4 *)(param_1 + 8));
  FUN_001eea30(iVar2 + iVar1 * 0x4f4 + 4,0x25,0x16,uVar6);
  uVar6 = FUN_001f5df0(*(undefined4 *)(param_1 + 8));
  FUN_002010a0(0x75,0x28,0x136,uVar6);
  uVar6 = FUN_001f6630(uVar5);
  uVar5 = FUN_001f6400(uVar5);
  FUN_002010a0(0x75,0x27,0x45,uVar6,uVar5);
  FUN_002011b0(0x75,0x26,0x129);
  uVar5 = FUN_001f5c80(*(undefined4 *)(param_1 + 8));
  FUN_001fe620(0x75,0x29,uVar5);
  iVar2 = FUN_001f48c0(0x75);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x002726c0  size 0x2a4
void FUN_002726c0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar5 = *param_1;
  iVar1 = param_1[0x4a];
  param_1[0x4a] = 0;
  if (iVar1 != 0) {
    FUN_001ff610(2);
  }
  lVar6 = FUN_001ff320(0x57,iVar5 != 1,0x36ed40);
  if (param_1[0x4b] != 0) {
    if (lVar6 == 2) {
      FUN_001ff600();
    }
    lVar7 = FUN_00201260(0x74,1);
    if ((lVar7 == 0) && (lVar6 == 3)) {
      param_1[0x4b] = 0;
    }
  }
  if (lVar6 == 2) {
    param_1[0x49] = 0;
  }
  FUN_001ff790(3,*(undefined4 *)(&DAT_0036ed48 + (uint)(iVar5 != 1) * 4));
  uVar8 = FUN_001f5d30(param_1[2]);
  uVar8 = FUN_001f69f0(uVar8);
  cVar2 = FUN_001f5ce0(param_1[2]);
  if (cVar2 == '\x01') {
    uVar9 = 0x4d;
  }
  else {
    uVar9 = 0x4e;
  }
  uVar8 = FUN_001f69b0(uVar8,0);
  FUN_002010a0(0x73,0x14,0x46,uVar8,uVar9);
  uVar3 = FUN_001f5cb0(param_1[2]);
  switch(uVar3) {
  case 0:
    uVar8 = 0x6f;
    break;
  default:
    uVar8 = 0xffffffffffffffff;
    break;
  case 3:
    uVar8 = 0x70;
    break;
  case 4:
    uVar8 = 0x73;
    break;
  case 5:
    uVar8 = 0x74;
    break;
  case 6:
    uVar8 = 0x71;
    break;
  case 7:
    uVar8 = 0x72;
  }
  FUN_002011b0(0x73,0x15,uVar8);
  uVar4 = FUN_001f5cb0(param_1[2]);
  FUN_002011b0(0x73,0x16,(uVar4 & 0xff) + 0x67);
  uVar3 = FUN_001f5cb0(param_1[2]);
  switch(uVar3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    FUN_002011b0(0x73,0x1d,0x13a);
    break;
  default:
    FUN_00201140(0x73,0x1d,3,0x13a);
  }
  FUN_002011b0(0x73,0x1b,0x138);
  FUN_002011b0(0x73,0x1c,0x139);
  FUN_002011b0(0x73,0x17,0x12d);
  uVar8 = FUN_001b5b80((short)param_1[2]);
  FUN_001ffdc0(uVar8,0xfffffffffffffffd,0xffffffffffffffff,0);
  FUN_00201260(0x73,2);
  iVar5 = FUN_001f48c0(0x73);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4);
  return;
}

// 0x00272970  size 0x298
void FUN_00272970(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x2cb);
    iVar1 = FUN_001f48c0(0x74);
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
    uVar2 = FUN_001f4890(0x2cc);
    iVar1 = FUN_001f48c0(0x74);
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
    uVar2 = FUN_001f4890(0x2cd);
    iVar1 = FUN_001f48c0(0x74);
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
    *(undefined4 *)(iVar1 + 0x340) = 1;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x11e,2);
    FUN_001f8ae0(iGpffff8d68 + 0x654,0);
  }
  lVar3 = FUN_00201260(0x74,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if ((*(int *)(param_1 + 300) != 0) && (lVar3 = FUN_00201260(0x74), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  FUN_001ff790(3,0x134);
  FUN_002011b0(0x74,2,0x12e);
  uVar4 = FUN_001b5610(*(undefined2 *)(param_1 + 8));
  FUN_001ffdc0(uVar4,0xfffffffffffffffd,0xffffffffffffffff,0);
  FUN_001f8860(iGpffff8d68 + 0x654);
  FUN_00201260(0x74,2);
  iVar1 = FUN_001f48c0(0x74);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00272c10  size 0x69c
void FUN_00272c10(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  iVar4 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_001f4890(0x2c9);
    iVar4 = FUN_001f48c0(0x73);
    iVar4 = *piGpffff8d3c + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar4 + 800) = 0;
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x318) = 0;
    *(undefined4 *)(iVar4 + 800) = uVar5;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar5 = FUN_001f4890(0x2ca);
    iVar4 = FUN_001f48c0(0x73);
    iVar4 = *piGpffff8d3c + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x334) = 0;
    *(undefined4 *)(iVar4 + 0x324) = 0;
    if (*(int *)(iVar4 + 0x334) == 0) {
      *(undefined4 *)(iVar4 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x330) = 1;
    }
    *(undefined4 *)(iVar4 + 0x324) = 0;
    if (*(int *)(iVar4 + 0x334) == 0) {
      *(undefined4 *)(iVar4 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x330) = 1;
    }
    *(undefined4 *)(iVar4 + 0x32c) = 0;
    *(undefined4 *)(iVar4 + 0x334) = uVar5;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    uVar5 = FUN_001f4890(0x2d3);
    iVar4 = FUN_001f48c0(0x73);
    iVar4 = *piGpffff8d3c + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x348) = 0;
    *(undefined4 *)(iVar4 + 0x338) = 0;
    if (*(int *)(iVar4 + 0x348) == 0) {
      *(undefined4 *)(iVar4 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x344) = 1;
    }
    *(undefined4 *)(iVar4 + 0x338) = 0;
    if (*(int *)(iVar4 + 0x348) == 0) {
      *(undefined4 *)(iVar4 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x344) = 1;
    }
    *(undefined4 *)(iVar4 + 0x340) = 1;
    *(undefined4 *)(iVar4 + 0x348) = uVar5;
    *(undefined4 *)(iVar4 + 0x344) = 1;
    uVar5 = FUN_001f4890(0x421);
    iVar4 = FUN_001f48c0(0x73);
    iVar4 = *piGpffff8d3c + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x35c) = 0;
    *(undefined4 *)(iVar4 + 0x34c) = 0;
    if (*(int *)(iVar4 + 0x35c) == 0) {
      *(undefined4 *)(iVar4 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x358) = 1;
    }
    *(undefined4 *)(iVar4 + 0x34c) = 0;
    if (*(int *)(iVar4 + 0x35c) == 0) {
      *(undefined4 *)(iVar4 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x358) = 1;
    }
    *(undefined4 *)(iVar4 + 0x354) = 0;
    *(undefined4 *)(iVar4 + 0x35c) = uVar5;
    *(undefined4 *)(iVar4 + 0x358) = 1;
    uVar5 = FUN_001f4890(0x422);
    iVar4 = FUN_001f48c0(0x73);
    iVar4 = *piGpffff8d3c + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x370) = 0;
    *(undefined4 *)(iVar4 + 0x360) = 0;
    if (*(int *)(iVar4 + 0x370) == 0) {
      *(undefined4 *)(iVar4 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x360) = 0;
    if (*(int *)(iVar4 + 0x370) == 0) {
      *(undefined4 *)(iVar4 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x368) = 0;
    *(undefined4 *)(iVar4 + 0x370) = uVar5;
    *(undefined4 *)(iVar4 + 0x36c) = 1;
    uVar5 = FUN_001f4890(0x423);
    iVar4 = FUN_001f48c0(0x73);
    iVar4 = *piGpffff8d3c + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar4 + 900) = 0;
    *(undefined4 *)(iVar4 + 0x374) = 0;
    if (*(int *)(iVar4 + 900) == 0) {
      *(undefined4 *)(iVar4 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x380) = 1;
    }
    *(undefined4 *)(iVar4 + 0x374) = 0;
    if (*(int *)(iVar4 + 900) == 0) {
      *(undefined4 *)(iVar4 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x380) = 1;
    }
    *(undefined4 *)(iVar4 + 0x37c) = 1;
    *(undefined4 *)(iVar4 + 900) = uVar5;
    *(undefined4 *)(iVar4 + 0x380) = 1;
    FUN_00200fc0(0);
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x11e,2);
    if (*(int *)(param_1 + 0x114) != 3) {
      FUN_001f8ae0(iGpffff8d68 + 0x654,1);
      iVar4 = *(int *)(param_1 + 0x114);
      goto LAB_00272c40;
    }
  }
  iVar4 = *(int *)(param_1 + 0x114);
LAB_00272c40:
  if (iVar4 == 3) {
    lVar6 = FUN_00201260(0x73);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  else {
    lVar6 = FUN_00201260(0x73,0);
    lVar8 = FUN_00201260(0x73,3);
    if (lVar6 == 0 && lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  if (*(int *)(param_1 + 300) != 0) {
    FUN_001f8ca0(iGpffff8d68 + 0x654);
    FUN_00200ef0(0);
    if (*(int *)(param_1 + 0x11c) == 3) {
      lVar6 = FUN_00201260(0x73,4);
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 300) = 0;
      }
    }
    else {
      lVar6 = FUN_00201260(0x73,1);
      lVar8 = FUN_00201260(0x73,4);
      if (lVar6 == 0 && lVar8 == 0) {
        *(undefined4 *)(param_1 + 300) = 0;
      }
    }
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x73,*(undefined4 *)(&DAT_0032db20 + *(int *)(param_1 + 0x10) * 4),1,0);
  }
  FUN_001ff790(3,*(undefined4 *)(&DAT_0032db30 + *(int *)(param_1 + 0x10) * 4));
  uVar7 = FUN_001f5d30(*(undefined4 *)(param_1 + 8));
  uVar7 = FUN_001f69f0(uVar7);
  cVar1 = FUN_001f5ce0(*(undefined4 *)(param_1 + 8));
  if (cVar1 == '\x01') {
    uVar9 = 0x4d;
  }
  else {
    uVar9 = 0x4e;
  }
  uVar7 = FUN_001f69b0(uVar7,0);
  FUN_002010a0(0x73,0x14,0x46,uVar7,uVar9);
  uVar2 = FUN_001f5cb0(*(undefined4 *)(param_1 + 8));
  switch(uVar2) {
  case 0:
    uVar7 = 0x6f;
    break;
  default:
    uVar7 = 0xffffffffffffffff;
    break;
  case 3:
    uVar7 = 0x70;
    break;
  case 4:
    uVar7 = 0x73;
    break;
  case 5:
    uVar7 = 0x74;
    break;
  case 6:
    uVar7 = 0x71;
    break;
  case 7:
    uVar7 = 0x72;
  }
  FUN_002011b0(0x73,0x15,uVar7);
  uVar3 = FUN_001f5cb0(*(undefined4 *)(param_1 + 8));
  FUN_002011b0(0x73,0x16,(uVar3 & 0xff) + 0x67);
  uVar2 = FUN_001f5cb0(*(undefined4 *)(param_1 + 8));
  switch(uVar2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    FUN_002011b0(0x73,0x1d,0x13a);
    break;
  default:
    FUN_00201140(0x73,0x1d,3,0x13a);
  }
  FUN_002011b0(0x73,0x1b,0x138);
  FUN_002011b0(0x73,0x1c,0x139);
  FUN_002011b0(0x73,0x17,0x12d);
  uVar7 = FUN_001b5b80(*(undefined2 *)(param_1 + 8));
  FUN_001ffdc0(uVar7,0xfffffffffffffffd,0xffffffffffffffff,0);
  FUN_001f8860(iGpffff8d68 + 0x654);
  FUN_00201260(0x73,2);
  FUN_00201260(0x73,5);
  iVar4 = FUN_001f48c0(0x73);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
  return;
}

// 0x002732b0  size 0xab0
void FUN_002732b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  iVar2 = -1;
  iVar5 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x104);
  }
  else {
    uVar3 = FUN_001f4890(0x2c4);
    iVar5 = FUN_001f48c0(0x72);
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
    *(undefined4 *)(iVar5 + 800) = uVar3;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0x2c5);
    iVar5 = FUN_001f48c0(0x72);
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
    *(undefined4 *)(iVar5 + 0x334) = uVar3;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar3 = FUN_001f4890(0x2c6);
    iVar5 = FUN_001f48c0(0x72);
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
    *(undefined4 *)(iVar5 + 0x348) = uVar3;
    *(undefined4 *)(iVar5 + 0x344) = 1;
    uVar3 = FUN_001f4890(0x2d2);
    iVar5 = FUN_001f48c0(0x72);
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
    *(undefined4 *)(iVar5 + 0x35c) = uVar3;
    *(undefined4 *)(iVar5 + 0x358) = 1;
    uVar3 = FUN_001f4890(0x413);
    iVar5 = FUN_001f48c0(0x72);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x398) = 0;
    *(undefined4 *)(iVar5 + 0x388) = 0;
    if (*(int *)(iVar5 + 0x398) == 0) {
      *(undefined4 *)(iVar5 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x394) = 1;
    }
    *(undefined4 *)(iVar5 + 0x388) = 0;
    if (*(int *)(iVar5 + 0x398) == 0) {
      *(undefined4 *)(iVar5 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x394) = 1;
    }
    *(undefined4 *)(iVar5 + 0x390) = 0;
    *(undefined4 *)(iVar5 + 0x398) = uVar3;
    *(undefined4 *)(iVar5 + 0x394) = 1;
    uVar3 = FUN_001f4890(0x414);
    iVar5 = FUN_001f48c0(0x72);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x3ac) = 0;
    *(undefined4 *)(iVar5 + 0x39c) = 0;
    if (*(int *)(iVar5 + 0x3ac) == 0) {
      *(undefined4 *)(iVar5 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar5 + 0x39c) = 0;
    if (*(int *)(iVar5 + 0x3ac) == 0) {
      *(undefined4 *)(iVar5 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar5 + 0x3a4) = 0;
    *(undefined4 *)(iVar5 + 0x3ac) = uVar3;
    *(undefined4 *)(iVar5 + 0x3a8) = 1;
    uVar3 = FUN_001f4890(0x2c7);
    iVar5 = FUN_001f48c0(0x72);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x370) = 0;
    *(undefined4 *)(iVar5 + 0x360) = 0;
    if (*(int *)(iVar5 + 0x370) == 0) {
      *(undefined4 *)(iVar5 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x360) = 0;
    if (*(int *)(iVar5 + 0x370) == 0) {
      *(undefined4 *)(iVar5 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x368) = 0;
    *(undefined4 *)(iVar5 + 0x370) = uVar3;
    *(undefined4 *)(iVar5 + 0x36c) = 1;
    uVar3 = FUN_001f4890(0x2c8);
    iVar5 = FUN_001f48c0(0x72);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar5 + 900) = 0;
    *(undefined4 *)(iVar5 + 0x374) = 0;
    if (*(int *)(iVar5 + 900) == 0) {
      *(undefined4 *)(iVar5 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x380) = 1;
    }
    *(undefined4 *)(iVar5 + 0x374) = 0;
    if (*(int *)(iVar5 + 900) == 0) {
      *(undefined4 *)(iVar5 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x380) = 1;
    }
    *(undefined4 *)(iVar5 + 0x37c) = 0;
    *(undefined4 *)(iVar5 + 900) = uVar3;
    *(undefined4 *)(iVar5 + 0x380) = 1;
    FUN_00200fc0(0);
    FUN_00200a10(0x72,(int)register0x000001c0 + -0x79b8,2,0);
    iVar5 = *(int *)(param_1 + 0x104);
  }
  FUN_002008b0(3 < iVar5);
  if (*(int *)(param_1 + 0x114) - 6U < 4) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  else {
    lVar8 = FUN_00201260(0x72,0);
    lVar9 = FUN_00201260(0x72,6);
    if (lVar8 == 0 && lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  if (*(int *)(param_1 + 300) != 0) {
    FUN_002008b0(0);
    if (*(int *)(param_1 + 0x11c) - 6U < 4) {
      FUN_00200ef0(0);
      *(undefined4 *)(param_1 + 300) = 0;
    }
    else {
      lVar8 = FUN_00201260(0x72,1);
      lVar9 = FUN_00201260(0x72,7);
      if (lVar8 == 0 && lVar9 == 0) {
        *(undefined4 *)(param_1 + 300) = 0;
      }
    }
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x72,*(undefined4 *)(&DAT_0032db00 + *(int *)(param_1 + 0x10c) * 4),0,0);
    iVar5 = *(int *)(param_1 + 0x104);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x104);
  }
  if (iVar5 < 3) {
    puVar12 = (undefined4 *)(&DAT_0032db10 + iVar5 * 4);
    puVar10 = &DAT_0032daf0 + iVar5;
    do {
      iVar4 = FUN_001f48c0(0x72);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar12,8);
      iVar4 = FUN_001f48c0(0x72);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar10,8);
      iVar5 = iVar5 + 1;
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar5 < 3);
    iVar5 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x108);
  }
  if (iVar5 == 1) {
    FUN_00200fc0(0);
    lVar8 = FUN_00201260(0x72,3);
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x108) = 2;
      iVar5 = FUN_001f48c0(0x72);
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
    else {
      iVar2 = (*(int *)(param_1 + 0x104) + (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10c)) + 3
              ) % *(int *)(param_1 + 0x104);
    }
  }
  else {
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0xc);
      goto LAB_002733f0;
    }
    lVar8 = FUN_00201260(0x72,2);
    if (lVar8 == 0) {
      FUN_00200fc0(0);
      *(undefined4 *)(param_1 + 0x108) = 2;
      iVar5 = FUN_001f48c0(0x72);
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
    else {
      iVar2 = (*(int *)(param_1 + 0x104) + (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10c)) +
              -1) % *(int *)(param_1 + 0x104);
    }
  }
  iVar5 = *(int *)(param_1 + 0xc);
LAB_002733f0:
  if (*(int *)(iVar5 * 4 + param_1 + 0x8c) == 1) {
    if (*(int *)(param_1 + 4) == 0) {
      lVar8 = FUN_00201260(0x72,4);
      if (lVar8 == 0) {
        *(undefined4 *)(param_1 + 4) = 1;
        iVar5 = FUN_001f48c0(0x72);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        *(undefined4 *)(iVar5 + 0x360) = 0;
        if (*(int *)(iVar5 + 0x370) == 0) {
          *(undefined4 *)(iVar5 + 0x36c) = 0;
        }
        else {
          *(undefined4 *)(iVar5 + 0x36c) = 1;
        }
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
      }
      else {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
      }
    }
  }
  else if (*(int *)(param_1 + 4) == 1) {
    lVar8 = FUN_00201260(0x72,5);
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      iVar5 = FUN_001f48c0(0x72);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x374) = 0;
      if (*(int *)(iVar5 + 900) == 0) {
        *(undefined4 *)(iVar5 + 0x380) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x380) = 1;
      }
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    }
    else {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
    }
  }
  iVar4 = *(int *)(param_1 + 0x104);
  iVar5 = (iVar4 + (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10c))) % iVar4;
  iVar11 = 0;
  puVar10 = &DAT_0032daf0;
  do {
    if (3 < iVar4) {
      iVar4 = 4;
    }
    if (iVar4 <= iVar11) goto LAB_00273534;
    if (iVar11 == 3) {
      if (iVar2 == -1) {
LAB_00273534:
        FUN_001ff790(3,0x130);
        uVar6 = FUN_001f5d60(*(undefined4 *)(param_1 + 8));
        uVar7 = FUN_001c1890(0);
        uVar7 = FUN_001b8990(uVar7);
        FUN_002011b0(0x72,0x4a,0x128);
        FUN_002010a0(0x72,0x4b,0x3d,uVar7,0xf);
        uVar7 = FUN_001f5df0(*(undefined4 *)(param_1 + 8));
        FUN_002011b0(0x72,0x4e,uVar7);
        uVar7 = FUN_001f6630(uVar6);
        uVar6 = FUN_001f6400(uVar6);
        FUN_002010a0(0x72,0x4d,0x45,uVar7,uVar6);
        FUN_002011b0(0x72,0x4c,0x129);
        uVar6 = FUN_001f5c80(*(undefined4 *)(param_1 + 8));
        FUN_001fe620(0x72,0x49,uVar6);
        FUN_002011b0(0x72,0x4f,0x12a);
        uVar6 = FUN_001c1890(0);
        uVar6 = FUN_001bcb00(uVar6);
        FUN_001fe620(0x72,0x50,uVar6);
        uVar6 = FUN_001f5d20(*(undefined4 *)(param_1 + 8));
        FUN_002011b0(0x72,0x51,uVar6);
        iVar2 = FUN_001f48c0(0x72);
        FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
        return;
      }
      iVar5 = iVar2;
    }
    uVar3 = *(undefined4 *)(param_1 + iVar5 * 4 + 0x14);
    iVar1 = FUN_001f48c0(0x72);
    iVar4 = *piGpffff8d3c;
    uVar6 = FUN_001f5de0(uVar3);
    FUN_001eea30(iVar4 + iVar1 * 0x4f4 + 4,*puVar10,0x16,uVar6);
    iVar4 = *(int *)(param_1 + 0x104);
    iVar5 = (iVar5 + 1) % iVar4;
    puVar10 = puVar10 + 1;
    iVar11 = iVar11 + 1;
  } while( true );
}

// 0x00273d80  size 0x114
void FUN_00273d80(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_FUN_0032dac0)[*(int *)((int)param_1 + 0x118)])(param_1);
  iVar1 = FUN_001f48c0(0x71);
  FUN_001ecd80(*piGpffff8d3c + iVar1 * 0x4f4 + 4,0);
  iVar1 = FUN_001f48c0(0x71);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  if (((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) &&
     (lVar2 = FUN_001fb170((int)param_1 + 0x114), lVar2 == 1)) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x00273ea0  size 0x9c
void FUN_00273ea0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_001f4890(0x2c3);
  iVar2 = FUN_001f48c0(0x71);
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

// 0x00273f40  size 0x1a8
void FUN_00273f40(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_001f7ee0(0xffffffffffffffff,0);
  FUN_002011b0(0x2d,0x39,0xec);
  uVar3 = 0;
  if (lVar2 == 0x11) {
    uVar3 = 3;
  }
  FUN_00201140(0x35,0x13,uVar3,0xf4);
  FUN_00201140(0x35,0x14,0,0xf5);
  FUN_00201140(0x35,0x15,0,0xf6);
  uVar3 = FUN_001c1890(0);
  uVar3 = FUN_001bcb00(uVar3);
  FUN_001fe620(0x2d,0x38,uVar3);
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x35,*(undefined4 *)(&DAT_0032db40 + *param_1 * 4),1,0);
  }
  iVar1 = FUN_001f48c0(0x35);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x2c);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x2d);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,*(undefined4 *)(&DAT_0032db50 + *param_1 * 4));
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

