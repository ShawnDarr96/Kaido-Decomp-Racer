// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00248000 - 0x0024c000
#include "ghidra_types.h"

// 0x00248970  size 0x9bc
void FUN_00248970(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 auStack_300 [96];
  undefined4 auStack_180 [11];
  byte bStack_154;
  
  FUN_001f48c0(0x84);
  FUN_001f48c0(0x85);
  iVar5 = FUN_001f48c0(7);
  iVar14 = *piGpffff8d3c;
  FUN_001f48c0(0x86);
  FUN_001f48c0(0x7b);
  iVar6 = FUN_001f48c0(0x7a);
  iVar13 = (int)param_1;
  iVar7 = *(int *)(iVar13 + 0x65c);
  iVar2 = *piGpffff8d3c;
  *(undefined4 *)(iVar13 + 0x65c) = 0;
  if (iVar7 != 0) {
    uVar8 = FUN_001f4890(0x6c);
    iVar7 = FUN_001f48c0(0x7a);
    iVar7 = *piGpffff8d3c + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar7 + 800) = 0;
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x318) = 0;
    *(undefined4 *)(iVar7 + 800) = uVar8;
    *(undefined4 *)(iVar7 + 0x31c) = 1;
    uVar8 = FUN_001f4890(0x6d);
    iVar7 = FUN_001f48c0(0x7a);
    iVar7 = *piGpffff8d3c + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x334) = 0;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x32c) = 0;
    *(undefined4 *)(iVar7 + 0x334) = uVar8;
    *(undefined4 *)(iVar7 + 0x330) = 1;
    FUN_00200fc0(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  lVar9 = FUN_00201260(0x7a,0);
  if (lVar9 == 0) {
    *(undefined4 *)(iVar13 + 0x658) = 0;
  }
  if ((*(int *)(iVar13 + 0x660) != 0) && (lVar9 = FUN_00201260(0x7a), lVar9 == 0)) {
    if ((*(int *)(iVar13 + 0x650) == 0x10) || (*(int *)(iVar13 + 0x650) == 0x12)) {
      FUN_001eeb00(0,iVar14 + iVar5 * 0x4f4 + 4,0x25,8);
    }
    FUN_001f8ca0(iGpffff8d68 + 0x654);
    *(undefined4 *)(iVar13 + 0x660) = 0;
  }
  if (((*(int *)(iGpffff8d68 + 0x24) == 0xf) && (*(int *)(iVar13 + 0x680) == 1)) &&
     (*(int *)(iGpffff8d68 + 0x20) != 0xf)) {
    if (*(int *)(iVar13 + 0xe4) != -1) {
      iVar14 = 0;
      puVar12 = &DAT_0032c890;
      do {
        iVar7 = FUN_001f48c0(0x87);
        FUN_001eeb00(0,*piGpffff8d3c + iVar7 * 0x4f4 + 4,*puVar12,8);
        iVar14 = iVar14 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar14 < 6);
    }
    iVar14 = FUN_001f48c0(0x7a);
    FUN_001eeb00(0,*piGpffff8d3c + iVar14 * 0x4f4 + 4,uGpffff84b0,8);
    iVar14 = FUN_001f48c0(0x7a);
    FUN_001eeb00(0,*piGpffff8d3c + iVar14 * 0x4f4 + 4,uGpffff84b4,8);
    iVar14 = FUN_001f48c0(0x84);
    FUN_001eeb00(0,*piGpffff8d3c + iVar14 * 0x4f4 + 4,0xe,8);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    uVar8 = *(undefined4 *)(iVar13 + 0x6a8);
    switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
    case 1:
      *(undefined4 *)(iGpffff8d68 + 0x598) = uVar8;
      break;
    case 2:
      *(undefined4 *)(iGpffff8d68 + 0x5dc) = uVar8;
      break;
    case 3:
      *(undefined4 *)(iGpffff8d68 + 0x5fc) = uVar8;
      break;
    case 4:
      *(undefined4 *)(iGpffff8d68 + 0x618) = uVar8;
    }
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x124,0);
    FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    *(undefined4 *)(iVar13 + 0x680) = 0;
    uVar8 = FUN_001f4890(0x8e);
    iVar14 = FUN_001f48c0(0x87);
    iVar14 = *piGpffff8d3c + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar14 + 800) = 0;
    *(undefined4 *)(iVar14 + 0x310) = 0;
    if (*(int *)(iVar14 + 800) == 0) {
      *(undefined4 *)(iVar14 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x310) = 0;
    if (*(int *)(iVar14 + 800) == 0) {
      *(undefined4 *)(iVar14 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x318) = 1;
    *(undefined4 *)(iVar14 + 800) = uVar8;
    *(undefined4 *)(iVar14 + 0x31c) = 1;
    uVar8 = FUN_001f4890(0x26b);
    iVar14 = FUN_001f48c0(0x87);
    iVar14 = *piGpffff8d3c + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x334) = 0;
    *(undefined4 *)(iVar14 + 0x324) = 0;
    if (*(int *)(iVar14 + 0x334) == 0) {
      *(undefined4 *)(iVar14 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x330) = 1;
    }
    *(undefined4 *)(iVar14 + 0x324) = 0;
    if (*(int *)(iVar14 + 0x334) == 0) {
      *(undefined4 *)(iVar14 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x330) = 1;
    }
    *(undefined4 *)(iVar14 + 0x32c) = 1;
    *(undefined4 *)(iVar14 + 0x334) = uVar8;
    *(undefined4 *)(iVar14 + 0x330) = 1;
    uVar8 = FUN_001f4890(0x26c);
    iVar14 = FUN_001f48c0(0x87);
    iVar14 = *piGpffff8d3c + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x348) = 0;
    *(undefined4 *)(iVar14 + 0x338) = 0;
    if (*(int *)(iVar14 + 0x348) == 0) {
      *(undefined4 *)(iVar14 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x344) = 1;
    }
    *(undefined4 *)(iVar14 + 0x338) = 0;
    if (*(int *)(iVar14 + 0x348) == 0) {
      *(undefined4 *)(iVar14 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x344) = 1;
    }
    *(undefined4 *)(iVar14 + 0x340) = 1;
    *(undefined4 *)(iVar14 + 0x348) = uVar8;
    *(undefined4 *)(iVar14 + 0x344) = 1;
    uVar8 = FUN_001f4890(0x26d);
    iVar14 = FUN_001f48c0(0x87);
    iVar14 = *piGpffff8d3c + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x35c) = 0;
    *(undefined4 *)(iVar14 + 0x34c) = 0;
    if (*(int *)(iVar14 + 0x35c) == 0) {
      *(undefined4 *)(iVar14 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x358) = 1;
    }
    *(undefined4 *)(iVar14 + 0x34c) = 0;
    if (*(int *)(iVar14 + 0x35c) == 0) {
      *(undefined4 *)(iVar14 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x358) = 1;
    }
    *(undefined4 *)(iVar14 + 0x354) = 1;
    *(undefined4 *)(iVar14 + 0x35c) = uVar8;
    *(undefined4 *)(iVar14 + 0x358) = 1;
    uVar8 = FUN_001f4890(0x26e);
    iVar14 = FUN_001f48c0(0x87);
    iVar14 = *piGpffff8d3c + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x370) = 0;
    *(undefined4 *)(iVar14 + 0x360) = 0;
    if (*(int *)(iVar14 + 0x370) == 0) {
      *(undefined4 *)(iVar14 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x360) = 0;
    if (*(int *)(iVar14 + 0x370) == 0) {
      *(undefined4 *)(iVar14 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x368) = 1;
    *(undefined4 *)(iVar14 + 0x370) = uVar8;
    *(undefined4 *)(iVar14 + 0x36c) = 1;
    uVar8 = FUN_001f4890(0x26f);
    iVar14 = FUN_001f48c0(0x87);
    iVar14 = *piGpffff8d3c + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar14 + 900) = 0;
    *(undefined4 *)(iVar14 + 0x374) = 0;
    if (*(int *)(iVar14 + 900) == 0) {
      *(undefined4 *)(iVar14 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x380) = 1;
    }
    *(undefined4 *)(iVar14 + 0x374) = 0;
    if (*(int *)(iVar14 + 900) == 0) {
      *(undefined4 *)(iVar14 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x380) = 1;
    }
    *(undefined4 *)(iVar14 + 0x37c) = 1;
    *(undefined4 *)(iVar14 + 900) = uVar8;
    *(undefined4 *)(iVar14 + 0x380) = 1;
    uVar8 = FUN_001f4890(0x8c);
    iVar14 = FUN_001f48c0(0x84);
    iVar14 = *piGpffff8d3c + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar14 + 800) = 0;
    *(undefined4 *)(iVar14 + 0x310) = 0;
    if (*(int *)(iVar14 + 800) == 0) {
      *(undefined4 *)(iVar14 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x310) = 0;
    if (*(int *)(iVar14 + 800) == 0) {
      *(undefined4 *)(iVar14 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x318) = 0;
    *(undefined4 *)(iVar14 + 800) = uVar8;
    *(undefined4 *)(iVar14 + 0x31c) = 1;
    uVar8 = FUN_001f4890(0x8d);
    iVar14 = FUN_001f48c0(0x84);
    iVar14 = *piGpffff8d3c + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x334) = 0;
    *(undefined4 *)(iVar14 + 0x324) = 0;
    if (*(int *)(iVar14 + 0x334) == 0) {
      *(undefined4 *)(iVar14 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x330) = 1;
    }
    *(undefined4 *)(iVar14 + 0x324) = 0;
    if (*(int *)(iVar14 + 0x334) == 0) {
      *(undefined4 *)(iVar14 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x330) = 1;
    }
    *(undefined4 *)(iVar14 + 0x32c) = 0;
    *(undefined4 *)(iVar14 + 0x334) = uVar8;
    *(undefined4 *)(iVar14 + 0x330) = 1;
  }
  FUN_002011b0(0x7a,0x1a,0x362);
  FUN_002011b0(0x7a,0x19,0x363);
  FUN_002011b0(7,0x2e,*(undefined4 *)
                       ((int)register0x000001c0 + *(int *)(iVar13 + 0x62c) * 4 + -0x7b58));
  iVar14 = FUN_001b55a0(*(undefined2 *)(iVar13 + 0x24));
  uVar10 = FUN_0017e850();
  cVar4 = FUN_00182c40(uVar10,0);
  if (cVar4 == '\0') {
    if (*(short *)(iVar14 + 0x3a) < *(short *)(iVar14 + 0x38)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else if (*(short *)(iVar14 + 0x3a) < *(short *)(iVar14 + 0x38)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_002011b0(0x7a,0x1b,0x4a);
    uVar1 = *(undefined2 *)(iVar13 + 0x24);
  }
  else {
    FUN_002011b0(0x7a,0x1b,0x49);
    uVar1 = *(undefined2 *)(iVar13 + 0x24);
  }
  FUN_001b55b0(auStack_300,uVar1);
  puVar11 = auStack_300;
  puVar12 = auStack_180;
  iVar14 = 0x5f;
  do {
    iVar14 = iVar14 + -1;
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar14);
  FUN_001eea30(iVar2 + iVar6 * 0x4f4 + 4,0x18,0x16,
               *(undefined4 *)(&DAT_0032c870 + (uint)bStack_154 * 4));
  FUN_00244b90(param_1);
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x7a,*(undefined4 *)
                       ((int)register0x000001c0 + *(int *)(iVar13 + 0x62c) * 4 + -0x7b50),1,0);
  }
  iVar14 = FUN_001f48c0(0x7a);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar14 * 0x4f4 + 4);
  FUN_001f8860(iGpffff8d68 + 0x654);
  return;
}

// 0x00249330  size 0x9d4
void FUN_00249330(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 auStack_300 [96];
  undefined4 auStack_180 [11];
  byte bStack_154;
  
  FUN_001f48c0(0x84);
  FUN_001f48c0(0x85);
  iVar5 = FUN_001f48c0(7);
  iVar13 = *piGpffff8d3c + iVar5 * 0x4f4 + 4;
  FUN_001f48c0(0x86);
  FUN_001f48c0(0x7b);
  iVar6 = FUN_001f48c0(0x7a);
  iVar14 = (int)param_1;
  iVar5 = *(int *)(iVar14 + 0x65c);
  iVar2 = *piGpffff8d3c;
  *(undefined4 *)(iVar14 + 0x65c) = 0;
  if (iVar5 != 0) {
    uVar8 = FUN_001f4890(0x6c);
    iVar5 = FUN_001f48c0(0x7a);
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
    *(undefined4 *)(iVar5 + 800) = uVar8;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar8 = FUN_001f4890(0x6d);
    iVar5 = FUN_001f48c0(0x7a);
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
    *(undefined4 *)(iVar5 + 0x334) = uVar8;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    FUN_00200fc0(0);
    if (*(int *)(iVar14 + 0x648) == 0xe) {
      FUN_001eeb00(0x3f800000,iVar13,0x25,8);
    }
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  lVar9 = FUN_00201260(0x7a,0);
  if (lVar9 == 0) {
    *(undefined4 *)(iVar14 + 0x658) = 0;
  }
  if (((*(int *)(iGpffff8d68 + 0x24) == 0xf) && (*(int *)(iVar14 + 0x680) == 1)) &&
     (*(int *)(iGpffff8d68 + 0x20) != 0xf)) {
    if (*(int *)(iVar14 + 0xe4) != -1) {
      iVar5 = 0;
      puVar12 = &DAT_0032c850;
      do {
        iVar7 = FUN_001f48c0(0x87);
        FUN_001eeb00(0,*piGpffff8d3c + iVar7 * 0x4f4 + 4,*puVar12,8);
        iVar5 = iVar5 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar5 < 6);
    }
    iVar5 = FUN_001f48c0(0x7a);
    FUN_001eeb00(0,*piGpffff8d3c + iVar5 * 0x4f4 + 4,uGpffff84a0,8);
    iVar5 = FUN_001f48c0(0x7a);
    FUN_001eeb00(0,*piGpffff8d3c + iVar5 * 0x4f4 + 4,uGpffff84a4,8);
    iVar5 = FUN_001f48c0(0x84);
    FUN_001eeb00(0,*piGpffff8d3c + iVar5 * 0x4f4 + 4,0xe,8);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    uVar8 = *(undefined4 *)(iVar14 + 0x6a8);
    switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
    case 1:
      *(undefined4 *)(iGpffff8d68 + 0x598) = uVar8;
      break;
    case 2:
      *(undefined4 *)(iGpffff8d68 + 0x5dc) = uVar8;
      break;
    case 3:
      *(undefined4 *)(iGpffff8d68 + 0x5fc) = uVar8;
      break;
    case 4:
      *(undefined4 *)(iGpffff8d68 + 0x618) = uVar8;
    }
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x124,0);
    FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    *(undefined4 *)(iVar14 + 0x680) = 0;
    uVar8 = FUN_001f4890(0x8e);
    iVar5 = FUN_001f48c0(0x87);
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
    *(undefined4 *)(iVar5 + 0x318) = 1;
    *(undefined4 *)(iVar5 + 800) = uVar8;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar8 = FUN_001f4890(0x26b);
    iVar5 = FUN_001f48c0(0x87);
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
    *(undefined4 *)(iVar5 + 0x32c) = 1;
    *(undefined4 *)(iVar5 + 0x334) = uVar8;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar8 = FUN_001f4890(0x26c);
    iVar5 = FUN_001f48c0(0x87);
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
    *(undefined4 *)(iVar5 + 0x340) = 1;
    *(undefined4 *)(iVar5 + 0x348) = uVar8;
    *(undefined4 *)(iVar5 + 0x344) = 1;
    uVar8 = FUN_001f4890(0x26d);
    iVar5 = FUN_001f48c0(0x87);
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
    *(undefined4 *)(iVar5 + 0x354) = 1;
    *(undefined4 *)(iVar5 + 0x35c) = uVar8;
    *(undefined4 *)(iVar5 + 0x358) = 1;
    uVar8 = FUN_001f4890(0x26e);
    iVar5 = FUN_001f48c0(0x87);
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
    *(undefined4 *)(iVar5 + 0x368) = 1;
    *(undefined4 *)(iVar5 + 0x370) = uVar8;
    *(undefined4 *)(iVar5 + 0x36c) = 1;
    uVar8 = FUN_001f4890(0x26f);
    iVar5 = FUN_001f48c0(0x87);
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
    *(undefined4 *)(iVar5 + 0x37c) = 1;
    *(undefined4 *)(iVar5 + 900) = uVar8;
    *(undefined4 *)(iVar5 + 0x380) = 1;
    uVar8 = FUN_001f4890(0x8c);
    iVar5 = FUN_001f48c0(0x84);
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
    *(undefined4 *)(iVar5 + 800) = uVar8;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar8 = FUN_001f4890(0x8d);
    iVar5 = FUN_001f48c0(0x84);
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
    *(undefined4 *)(iVar5 + 0x334) = uVar8;
    *(undefined4 *)(iVar5 + 0x330) = 1;
  }
  if ((*(int *)(iVar14 + 0x660) != 0) && (lVar9 = FUN_00201260(0x7a), lVar9 == 0)) {
    if (*(int *)(iVar14 + 0x650) == 0xe) {
      FUN_001eeb00(0,iVar13,0x25,8);
      *(undefined4 *)(iVar14 + 0x660) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x660) = 0;
    }
  }
  FUN_002011b0(0x7a,0x1a,0x362);
  FUN_002011b0(0x7a,0x19,0x363);
  FUN_002011b0(7,0x2e,*(undefined4 *)
                       ((int)register0x000001c0 + *(int *)(iVar14 + 0x62c) * 4 + -0x7b68));
  iVar5 = FUN_001b55a0(*(undefined2 *)(iVar14 + 0x24));
  uVar10 = FUN_0017e850();
  cVar4 = FUN_00182c40(uVar10,0);
  if (cVar4 == '\0') {
    if (*(short *)(iVar5 + 0x3a) < *(short *)(iVar5 + 0x38)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else if (*(short *)(iVar5 + 0x3a) < *(short *)(iVar5 + 0x38)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_002011b0(0x7a,0x1b,0x4a);
    uVar1 = *(undefined2 *)(iVar14 + 0x24);
  }
  else {
    FUN_002011b0(0x7a,0x1b,0x49);
    uVar1 = *(undefined2 *)(iVar14 + 0x24);
  }
  FUN_001b55b0(auStack_300,uVar1);
  puVar11 = auStack_300;
  puVar12 = auStack_180;
  iVar5 = 0x5f;
  do {
    iVar5 = iVar5 + -1;
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar5);
  FUN_001eea30(iVar2 + iVar6 * 0x4f4 + 4,0x18,0x16,
               *(undefined4 *)(&DAT_0032c830 + (uint)bStack_154 * 4));
  FUN_00244b90(param_1);
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x7a,*(undefined4 *)
                       ((int)register0x000001c0 + *(int *)(iVar14 + 0x62c) * 4 + -0x7b60),1,0);
  }
  iVar5 = FUN_001f48c0(0x7a);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  FUN_001f8860(iGpffff8d68 + 0x654);
  return;
}

// 0x00249d10  size 0x3d4
void FUN_00249d10(int param_1)

{
  undefined2 *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_001f4890(0x195);
    *(undefined4 *)(iGpffff8d68 + 0x350) = 0xffffffff;
    *(undefined4 *)(iGpffff8d68 + 0x35c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x34c) = 0;
    if (*(int *)(iGpffff8d68 + 0x35c) == 0) {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    }
    *(undefined4 *)(iGpffff8d68 + 0x34c) = 0;
    if (*(int *)(iGpffff8d68 + 0x35c) == 0) {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    }
    *(undefined4 *)(iGpffff8d68 + 0x354) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x35c) = uVar4;
    *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    FUN_00200fc0(0);
    iVar3 = FUN_001f48c0(0x97);
    FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0,8);
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x126,3);
    FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    sVar2 = *(short *)(param_1 + 0x498);
    uVar8 = 0;
    *(undefined4 *)(iGpffff8d68 + 0x538) = 0;
    *(int *)(iGpffff8d68 + 0x53c) = (int)sVar2;
    *(int *)(iGpffff8d68 + 0x544) = (int)*(short *)(param_1 + 0x49a);
    iVar3 = param_1;
    do {
      uVar14 = uVar8 + 1;
      uVar9 = uVar8 + 2;
      uVar15 = uVar8 + 3;
      uVar10 = uVar8 + 4;
      *(undefined2 *)(iGpffff8d68 + (uVar8 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x508);
      uVar11 = uVar8 + 5;
      uVar12 = uVar8 + 6;
      uVar8 = uVar8 + 7;
      *(undefined2 *)(iGpffff8d68 + (uVar14 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x50c);
      *(undefined2 *)(iGpffff8d68 + (uVar9 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x510);
      *(undefined2 *)(iGpffff8d68 + (uVar15 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x514);
      *(undefined2 *)(iGpffff8d68 + (uVar10 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x518);
      *(undefined2 *)(iGpffff8d68 + (uVar11 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x51c);
      puVar1 = (undefined2 *)(iVar3 + 0x520);
      iVar3 = iVar3 + 0x1c;
      *(undefined2 *)((uVar12 & 0xff) * 2 + iGpffff8d68 + 0x548) = *puVar1;
    } while ((int)uVar8 < 0x15);
    iVar13 = 0;
    iVar5 = 0;
    iVar3 = param_1;
    do {
      iVar13 = iVar13 + 8;
      *(undefined2 *)(iGpffff8d68 + iVar5 + 0x572) = *(undefined2 *)(iVar3 + 0x4e8);
      *(undefined2 *)(iGpffff8d68 + iVar5 + 0x574) = *(undefined2 *)(iVar3 + 0x4ea);
      *(undefined2 *)(iGpffff8d68 + iVar5 + 0x576) = *(undefined2 *)(iVar3 + 0x4ec);
      *(undefined2 *)(iGpffff8d68 + iVar5 + 0x578) = *(undefined2 *)(iVar3 + 0x4ee);
      *(undefined2 *)(iGpffff8d68 + iVar5 + 0x57a) = *(undefined2 *)(iVar3 + 0x4f0);
      *(undefined2 *)(iGpffff8d68 + iVar5 + 0x57c) = *(undefined2 *)(iVar3 + 0x4f2);
      *(undefined2 *)(iGpffff8d68 + iVar5 + 0x57e) = *(undefined2 *)(iVar3 + 0x4f4);
      puVar1 = (undefined2 *)(iVar3 + 0x4f6);
      iVar3 = iVar3 + 0x10;
      *(undefined2 *)(iVar5 + iGpffff8d68 + 0x580) = *puVar1;
      iVar5 = iVar5 + 0x10;
    } while (iVar13 < 0x10);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  lVar6 = FUN_00201210(iGpffff8d68 + 0x40,0);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  *(undefined4 *)(param_1 + 0x660) = 0;
  FUN_001ffdc0(*(undefined2 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar3 = FUN_001f48c0(0x94);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0x97);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  FUN_001f8860(iGpffff8d68 + 0x654);
  iVar3 = iGpffff8d68 + 0x40;
  uVar7 = FUN_001f6ff0(*(undefined2 *)(param_1 + 0x498),0xffffffffffffffff);
  FUN_001eea30(iVar3,0,0x16,uVar7);
  FUN_001eda40(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x0024a0f0  size 0x24c
void FUN_0024a0f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x648) != 0x2a) {
      uVar1 = FUN_001f4890(0x116);
      iVar2 = FUN_001f48c0(0x98);
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
    }
    FUN_00200fc0(0);
    if (*(int *)(param_1 + 0x648) != 0x2a) {
      *(undefined4 *)(iRam0036f458 + 0x5f0) =
           *(undefined4 *)(&DAT_0032c790 + *(int *)(param_1 + 0x484) * 4);
      FUN_001f9610(iRam0036f458 + 0x5f0,1);
      FUN_001f8cd0(iRam0036f458 + 0x654,0x126,3);
      FUN_001f8ae0(iRam0036f458 + 0x654,1);
    }
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
  }
  if (*(int *)(param_1 + 0x648) == 0x2a) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    lVar3 = FUN_00201260(0x98,0);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  FUN_002010a0(0x98,0xf,0x3a,*(int *)(param_1 + 0x484) + 1);
  FUN_002011b0(0x98,0x11,*(int *)(param_1 + 0x484) + 0x89f);
  FUN_002011b0(0x98,0x10,0x2f8);
  iVar2 = FUN_001f48c0(0x94);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x98);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  FUN_001f8860(iRam0036f458 + 0x654);
  return;
}

// 0x0024a340  size 0x25c
void FUN_0024a340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_600 [8];
  undefined4 uStack_5f8;
  undefined1 auStack_480 [8];
  undefined4 uStack_478;
  undefined1 auStack_300 [12];
  undefined4 uStack_2f4;
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x648) != 0x29) {
      uVar2 = FUN_001f4890(0x195);
      iVar1 = iRam0036f458;
      *(undefined4 *)(iRam0036f458 + 0x350) = 0xffffffff;
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
    }
    FUN_00200fc0(0);
    if (*(int *)(param_1 + 0x648) != 0x29) {
      FUN_001b55b0(auStack_180,*(undefined2 *)(param_1 + 0x484));
      iVar1 = iRam0036f458;
      *(undefined4 *)(iRam0036f458 + 0x538) = 0;
      *(undefined4 *)(iVar1 + 0x53c) = uStack_178;
      FUN_001b55b0(auStack_300,*(undefined2 *)(param_1 + 0x484));
      *(undefined4 *)(iRam0036f458 + 0x544) = uStack_2f4;
      FUN_001f8cd0(iRam0036f458 + 0x654,0x126,3);
      FUN_001f8ae0(iRam0036f458 + 0x654,1);
    }
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
  }
  if (*(int *)(param_1 + 0x648) == 0x29) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    lVar4 = FUN_00201210(iRam0036f458 + 0x40,0);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  FUN_001b55b0(auStack_480,*(undefined2 *)(param_1 + 0x484));
  FUN_001ffdc0(uStack_478,0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = FUN_001f48c0(0x94);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x97);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  FUN_001f8860(iRam0036f458 + 0x654);
  iVar1 = iRam0036f458 + 0x40;
  FUN_001b55b0(auStack_600,*(undefined2 *)(param_1 + 0x484));
  uVar3 = FUN_001f6ff0(uStack_5f8,0xffffffffffffffff);
  FUN_001eea30(iVar1,0,0x16,uVar3);
  FUN_001eda40(0x3f800000,iRam0036f458 + 0x40);
  return;
}

// 0x0024a5a0  size 0x2c4
void FUN_0024a5a0(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar2 != 0) {
    FUN_001ff610(2);
    FUN_00200fc0(0);
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
  }
  lVar3 = FUN_001ff320(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x62c),0x36eb78);
  FUN_002011b0(5,0x1c,0x378);
  if (*(int *)(param_1 + 0x660) != 0) {
    if (lVar3 == 2) {
      FUN_001ff600();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0x660) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  FUN_002011b0(7,0x2e,*(undefined4 *)(&DAT_0036eb80 + *(int *)(param_1 + 0x62c) * 4));
  FUN_001ffdc0(*(undefined4 *)(param_1 + 0x24),0xfffffffffffffffd,0xffffffffffffffff,0);
  uVar4 = FUN_001c1890(0);
  cVar1 = FUN_001c16e0(uVar4);
  if (cVar1 == '\0') {
    FUN_00201260(0x81,0);
    iVar2 = FUN_001f48c0(0x81);
    FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  }
  else {
    FUN_00201260(0x82,0);
    iVar2 = FUN_001f48c0(0x82);
    FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  }
  iVar2 = FUN_001f48c0(0x89);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x7a);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  cVar1 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448));
  if ((cVar1 == '\x06') || (cVar1 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448)), cVar1 == '\a'))
  {
    iVar2 = iRam0036f458 + 0x40;
    uVar4 = FUN_001f6ff0(*(undefined4 *)(param_1 + 0xbc),0xffffffffffffffff);
    FUN_001eea30(iVar2,0,0x16,uVar4);
  }
  else {
    iVar2 = iRam0036f458 + 0x40;
    FUN_001b55b0(auStack_180,*(undefined2 *)(param_1 + 0x24));
    uVar4 = FUN_001f6ff0(uStack_178,0xffffffffffffffff);
    FUN_001eea30(iVar2,0,0x16,uVar4);
  }
  FUN_001eda40(0x3f800000,iRam0036f458 + 0x40);
  return;
}

// 0x0024a870  size 0x314
void FUN_0024a870(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 auStack_1c0 [104];
  undefined2 auStack_f0 [104];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar2 != 0) {
    FUN_001ff610(2);
    FUN_00200fc0(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  lVar3 = FUN_001ff320(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x62c),
                       (int)register0x000001c0 + -0x7b88);
  FUN_002011b0(5,0x1c,0x378);
  if (*(int *)(param_1 + 0x660) != 0) {
    if (lVar3 == 2) {
      FUN_001ff600();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0x660) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x688) == 0) {
    FUN_002010a0(0x8a,0x3b,0x3b,*(int *)(param_1 + 0x6a0) + 1,*(undefined4 *)(param_1 + 0x444));
    iVar2 = *(int *)(param_1 + 0x62c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x62c);
  }
  FUN_002011b0(7,0x2e,*(undefined4 *)((int)register0x000001c0 + iVar2 * 4 + -0x7b80));
  if (*(int *)(param_1 + 0x688) == 0) {
    uVar4 = FUN_001c1890(0);
    FUN_001bc3b0(auStack_f0,uVar4,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0));
    FUN_001ffdc0(auStack_f0[0],0xffffffffffffffff,0xffffffffffffffff,0);
  }
  else {
    FUN_0017fd70(auStack_10,*(undefined2 *)(param_1 + 0x24));
    FUN_001ffdc0(uStack_c,0xffffffffffffffff,0xffffffffffffffff,0);
  }
  iVar2 = FUN_001f48c0(0x8a);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  uVar4 = FUN_001c1890(0);
  cVar1 = FUN_001c16e0(uVar4);
  if (cVar1 == '\0') {
    FUN_00201260(0x81,0);
    iVar2 = FUN_001f48c0(0x81);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
    iVar2 = *(int *)(param_1 + 0x688);
  }
  else {
    FUN_00201260(0x82,0);
    iVar2 = FUN_001f48c0(0x82);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
    iVar2 = *(int *)(param_1 + 0x688);
  }
  if (iVar2 == 0) {
    iVar2 = iGpffff8d68 + 0x40;
    uVar4 = FUN_001c1890(0);
    FUN_001bc3b0(auStack_1c0,uVar4,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0))
    ;
    uVar4 = FUN_001f6ff0(auStack_1c0[0],0xffffffffffffffff);
    FUN_001eea30(iVar2,0,0x16,uVar4);
  }
  else {
    iVar2 = iGpffff8d68 + 0x40;
    FUN_0017fd70(auStack_20,*(undefined2 *)(param_1 + 0x24));
    uVar4 = FUN_001f6ff0(uStack_1c,0xffffffffffffffff);
    FUN_001eea30(iVar2,0,0x16,uVar4);
  }
  FUN_001eda40(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x0024ab90  size 0x118
void FUN_0024ab90(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x65c);
  *(undefined4 *)(iVar3 + 0x65c) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(2);
    FUN_00200fc0(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  lVar2 = FUN_001ff320(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x62c),
                       (int)register0x000001c0 + -0x7b98);
  FUN_002011b0(5,0x1c,0x378);
  if (*(int *)(iVar3 + 0x660) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x660) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x658) = 0;
  }
  FUN_00244b90(param_1);
  FUN_002011b0(7,0x2e,*(undefined4 *)
                       ((int)register0x000001c0 + *(int *)(iVar3 + 0x62c) * 4 + -0x7b90));
  return;
}

// 0x0024acb0  size 0x118
void FUN_0024acb0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x65c);
  *(undefined4 *)(iVar3 + 0x65c) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(2);
    FUN_00200fc0(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  lVar2 = FUN_001ff320(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x62c),
                       (int)register0x000001c0 + -0x7ba8);
  FUN_002011b0(5,0x1c,0x378);
  if (*(int *)(iVar3 + 0x660) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x660) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x658) = 0;
  }
  FUN_00244b90(param_1);
  FUN_002011b0(7,0x2e,*(undefined4 *)
                       ((int)register0x000001c0 + *(int *)(iVar3 + 0x62c) * 4 + -0x7ba0));
  return;
}

// 0x0024add0  size 0x2f8
void FUN_0024add0(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_180 [384];
  
  iVar9 = (int)param_1;
  iVar2 = *(int *)(iVar9 + 0x65c);
  *(undefined4 *)(iVar9 + 0x65c) = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_001f4890(0x3f6);
    iVar2 = FUN_001f48c0(0x8b);
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
    uVar3 = FUN_001f4890(0x3f7);
    iVar2 = FUN_001f48c0(0x8b);
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
    uVar3 = FUN_001f4890(0x3f8);
    iVar2 = FUN_001f48c0(0x8b);
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
    FUN_00200fc0(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  lVar4 = FUN_00201260(0x8b,0);
  if (lVar4 == 0) {
    *(undefined4 *)(iVar9 + 0x658) = 0;
  }
  if ((*(int *)(iVar9 + 0x660) != 0) && (lVar4 = FUN_00201260(0x8b), lVar4 == 0)) {
    *(undefined4 *)(iVar9 + 0x660) = 0;
  }
  FUN_00244b90(param_1);
  FUN_001b55b0(auStack_180,*(undefined2 *)(iVar9 + 0x24));
  uVar1 = FUN_001b4970(auStack_180);
  FUN_002010a0(0x8b,0x16,0x3b2);
  uVar5 = FUN_001f5df0(uVar1);
  uVar6 = FUN_001f5d60(uVar1);
  uVar6 = FUN_001f6630(uVar6);
  uVar7 = FUN_001f5d60(uVar1);
  uVar7 = FUN_001f6460(uVar7);
  uVar8 = FUN_001f5d20(uVar1);
  FUN_002010a0(0x8b,0x15,0x3b3,uVar5,uVar6,uVar7,uVar8);
  FUN_00201260(0x8b,2);
  iVar2 = FUN_001f48c0(0x8b);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0024b0d0  size 0x2bc
void FUN_0024b0d0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_001f4890(0x2d0);
    iVar3 = FUN_001f48c0(0x76);
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
    uVar4 = FUN_001f4890(0x2d1);
    iVar3 = FUN_001f48c0(0x76);
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
    FUN_00200fc0(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  lVar5 = FUN_00201260(0x76,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar5 = FUN_00201260(0x76), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  iVar2 = FUN_001f48c0(0x76);
  iVar3 = *piGpffff8d3c;
  uVar6 = FUN_001f5de0(*(undefined4 *)(param_1 + 0x448));
  FUN_001eea30(iVar3 + iVar2 * 0x4f4 + 4,0x19,0x16,uVar6);
  uVar6 = FUN_001f5df0(*(undefined4 *)(param_1 + 0x448));
  FUN_002010a0(0x76,0x1a,0x137,uVar6);
  iVar3 = FUN_001f48c0(0x76);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  uVar6 = FUN_001c1890(0);
  cVar1 = FUN_001c16e0(uVar6);
  if (cVar1 == '\0') {
    FUN_00201260(0x81,0);
    iVar3 = FUN_001f48c0(0x81);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  }
  else {
    FUN_00201260(0x82,0);
    iVar3 = FUN_001f48c0(0x82);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  }
  return;
}

// 0x0024b390  size 0x324
void FUN_0024b390(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_001f4890(0x2ce);
    iVar3 = FUN_001f48c0(0x75);
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
    uVar4 = FUN_001f4890(0x2cf);
    iVar3 = FUN_001f48c0(0x75);
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
    FUN_00200fc0(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  lVar5 = FUN_00201260(0x75,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar5 = FUN_00201260(0x75), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  uVar6 = FUN_001f5d60(*(undefined4 *)(param_1 + 0x448));
  iVar2 = FUN_001f48c0(0x75);
  iVar3 = *piGpffff8d3c;
  uVar7 = FUN_001f5de0(*(undefined4 *)(param_1 + 0x448));
  FUN_001eea30(iVar3 + iVar2 * 0x4f4 + 4,0x25,0x16,uVar7);
  uVar7 = FUN_001f5df0(*(undefined4 *)(param_1 + 0x448));
  FUN_002010a0(0x75,0x28,0x136,uVar7);
  uVar7 = FUN_001f6630(uVar6);
  uVar6 = FUN_001f6400(uVar6);
  FUN_002010a0(0x75,0x27,0x45,uVar7,uVar6);
  FUN_002011b0(0x75,0x26,0x129);
  uVar6 = FUN_001f5c80(*(undefined4 *)(param_1 + 0x448));
  FUN_001fe620(0x75,0x29,uVar6);
  iVar3 = FUN_001f48c0(0x75);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  uVar6 = FUN_001c1890(0);
  cVar1 = FUN_001c16e0(uVar6);
  if (cVar1 == '\0') {
    FUN_00201260(0x81,0);
    iVar3 = FUN_001f48c0(0x81);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  }
  else {
    FUN_00201260(0x82,0);
    iVar3 = FUN_001f48c0(0x82);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  }
  return;
}

// 0x0024b6c0  size 0x3e0
void FUN_0024b6c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  iVar6 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar6 != 0) {
    uVar2 = FUN_001f4890(0x10c);
    iVar6 = FUN_001f48c0(0x89);
    iVar6 = *piGpffff8d3c + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar6 + 800) = 0;
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x318) = 0;
    *(undefined4 *)(iVar6 + 800) = uVar2;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar2 = FUN_001f4890(0x195);
    *(undefined4 *)(iGpffff8d68 + 0x350) = 0xffffffff;
    *(undefined4 *)(iGpffff8d68 + 0x35c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x34c) = 0;
    if (*(int *)(iGpffff8d68 + 0x35c) == 0) {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    }
    *(undefined4 *)(iGpffff8d68 + 0x34c) = 0;
    if (*(int *)(iGpffff8d68 + 0x35c) == 0) {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    }
    *(undefined4 *)(iGpffff8d68 + 0x354) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x35c) = uVar2;
    *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    FUN_00200fc0(0);
    if ((*(int *)(param_1 + 0x648) != 0x25) ||
       ((cVar1 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448)), cVar1 != '\x06' &&
        (cVar1 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448)), cVar1 != '\a')))) {
      uVar2 = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(iGpffff8d68 + 0x538) = 0;
      *(undefined4 *)(iGpffff8d68 + 0x53c) = uVar2;
      FUN_001f8cd0(iGpffff8d68 + 0x654,0x125,2);
      FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    }
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  if ((*(int *)(param_1 + 0x648) == 0x25) &&
     ((cVar1 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448)), cVar1 == '\x06' ||
      (cVar1 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448)), cVar1 == '\a')))) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    iVar6 = iGpffff8d68 + 0x40;
    lVar4 = FUN_00201260(0x89,0);
    lVar5 = FUN_00201210(iVar6,0);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  FUN_002011b0(7,0x2e,0x3bc);
  iVar6 = FUN_001f48c0(0x89);
  FUN_001eeb00(0,*piGpffff8d3c + iVar6 * 0x4f4 + 4,0x27,8);
  uVar3 = FUN_001b5b80(*(undefined2 *)(param_1 + 0x448));
  FUN_001ffdc0(uVar3,0xfffffffffffffffd,0xffffffffffffffff,0);
  uVar3 = FUN_001c1890(0);
  cVar1 = FUN_001c16e0(uVar3);
  if (cVar1 == '\0') {
    FUN_00201260(0x81,0);
    iVar6 = FUN_001f48c0(0x81);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar6 * 0x4f4 + 4);
  }
  else {
    FUN_00201260(0x82,0);
    iVar6 = FUN_001f48c0(0x82);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar6 * 0x4f4 + 4);
  }
  iVar6 = FUN_001f48c0(0x89);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar6 * 0x4f4 + 4);
  FUN_001f8860(iGpffff8d68 + 0x654);
  iVar6 = iGpffff8d68 + 0x40;
  uVar3 = FUN_001f6ff0(*(undefined4 *)(param_1 + 0xbc),0xffffffffffffffff);
  FUN_001eea30(iVar6,0,0x16,uVar3);
  FUN_001eda40(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x0024baa0  size 0x1078
void FUN_0024baa0(int param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int aiStack_950 [20];
  undefined2 uStack_900;
  undefined2 uStack_8fe;
  undefined1 uStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined1 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined1 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined2 uStack_8c8;
  undefined2 uStack_8c6;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 auStack_8bc [23];
  undefined4 auStack_860 [23];
  undefined4 auStack_804 [16];
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined2 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined1 auStack_780 [4];
  char cStack_77c;
  undefined1 auStack_600 [4];
  char cStack_5fc;
  undefined1 auStack_480 [4];
  char cStack_47c;
  undefined1 auStack_300 [4];
  char cStack_2fc;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  undefined1 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 auStack_13c [23];
  undefined4 auStack_e0 [23];
  undefined4 auStack_84 [16];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar4 = FUN_001f48c0(0x84);
  iVar14 = *piGpffff8d3c + iVar4 * 0x4f4 + 4;
  iVar5 = FUN_001f48c0(0x85);
  iVar4 = *piGpffff8d3c;
  FUN_001f48c0(7);
  iVar6 = FUN_001f48c0(0x86);
  iVar12 = *piGpffff8d3c + iVar6 * 0x4f4 + 4;
  iVar7 = FUN_001f48c0(0x87);
  iVar6 = *(int *)(param_1 + 0x65c);
  iVar15 = *piGpffff8d3c;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  iVar15 = iVar15 + iVar7 * 0x4f4 + 4;
  if (iVar6 != 0) {
    uVar8 = FUN_001f4890(0x255);
    iVar6 = FUN_001f48c0(0x93);
    iVar6 = *piGpffff8d3c + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar6 + 800) = 0;
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x318) = 0;
    *(undefined4 *)(iVar6 + 800) = uVar8;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar8 = FUN_001f4890(0x254);
    iVar6 = FUN_001f48c0(0x93);
    iVar6 = *piGpffff8d3c + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x334) = 0;
    *(undefined4 *)(iVar6 + 0x324) = 0;
    if (*(int *)(iVar6 + 0x334) == 0) {
      *(undefined4 *)(iVar6 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x330) = 1;
    }
    *(undefined4 *)(iVar6 + 0x324) = 0;
    if (*(int *)(iVar6 + 0x334) == 0) {
      *(undefined4 *)(iVar6 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x330) = 1;
    }
    *(undefined4 *)(iVar6 + 0x32c) = 0;
    *(undefined4 *)(iVar6 + 0x334) = uVar8;
    *(undefined4 *)(iVar6 + 0x330) = 1;
    FUN_00200fc0(0);
    FUN_001eeb00(0x3f800000,iVar14,0xe,8);
  }
  lVar10 = FUN_00201260(0x93,0);
  if (lVar10 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar10 = FUN_00201260(0x93), lVar10 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  FUN_00245af0(param_1,*(undefined4 *)(param_1 + 0x28),0);
  uVar11 = FUN_0017e720();
  uVar11 = FUN_001f69f0(uVar11);
  uVar11 = FUN_001f69b0(uVar11,1);
  FUN_002010a0(0x85,3,0x37d,1,uVar11);
  if (*(int *)(param_1 + 0x644) == 1) {
    uVar11 = FUN_001f7e90(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    FUN_002011b0(0x93,0xd,uVar11);
    uVar11 = FUN_001f81a0(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    FUN_002011b0(0x93,0xf,uVar11);
    uVar11 = FUN_001f8170(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    FUN_002011b0(0x93,0xe,uVar11);
    FUN_002011b0(0x93,0xc,0x386);
    FUN_001b55b0(auStack_300,*(undefined2 *)(param_1 + 0x28));
    if ((cStack_2fc != '\x05') &&
       (FUN_001b55b0(auStack_480,*(undefined2 *)(param_1 + 0x28)), cStack_47c != '\x06')) {
      FUN_002010a0(0x93,0x15,0x38c,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
    }
    FUN_002011b0(0x93,0x10,0x387);
    uVar9 = FUN_001f7d30(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    FUN_002011b0(0x93,0x16,(uVar9 & 0xff) + 0x38d);
    FUN_002011b0(0x93,0x11,0x38a);
    cVar2 = FUN_001f7170(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    if (cVar2 == '\a') {
      lVar10 = FUN_001f7a70(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
      if (lVar10 < 1) {
        FUN_002010a0(0x93,0x17,0x26,4);
      }
      else {
        uVar11 = FUN_001f7a70(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
        FUN_002010a0(0x93,0x17,0x18,uVar11,4);
      }
    }
    else {
      lVar10 = FUN_001f7a70(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
      if (lVar10 < 1) {
        FUN_002010a0(0x93,0x17,0x26,4);
      }
      else {
        uVar11 = FUN_001f7a70(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
        FUN_002010a0(0x93,0x17,0x17,uVar11,4);
      }
    }
    FUN_002011b0(0x93,0x12,0x388);
    if ((int)*(float *)(param_1 + 100) < 1) {
      FUN_002010a0(0x93,0x18,0x27,4,0,4);
    }
    else {
      FUN_002010a0(0x93,0x18,0x19,(int)*(float *)(param_1 + 100),4,0,(int)*(float *)(param_1 + 0x68)
                   ,4);
    }
    FUN_002011b0(0x93,0x13,0x389);
    iVar6 = (int)*(float *)(param_1 + 0x6c);
    if (iVar6 == 0) {
      FUN_002010a0(0x93,0x19,0x28,4,0,4);
    }
    else {
      FUN_002010a0(0x93,0x19,0x1a,iVar6,(int)((*(float *)(param_1 + 0x6c) - (float)iVar6) * 10.0),4,
                   0,(int)*(float *)(param_1 + 0x70));
    }
    FUN_002011b0(0x93,0x14,0x38b);
    lVar10 = FUN_001f7bd0(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    if (lVar10 < 1) {
      FUN_002010a0(0x93,0x1a,0x25,4);
    }
    else {
      uVar11 = FUN_001f7bd0(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
      FUN_002010a0(0x93,0x1a,0x16,uVar11,4);
    }
    iVar6 = FUN_001b55a0(*(undefined2 *)(param_1 + 0x28));
    uVar11 = FUN_0017e850();
    cVar2 = FUN_00182c40(uVar11,0);
    if (cVar2 == '\0') {
      if (*(short *)(iVar6 + 0x3a) < *(short *)(iVar6 + 0x38)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else if (*(short *)(iVar6 + 0x3a) < *(short *)(iVar6 + 0x38)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_002011b0(0x93,0x1b,0x4a);
    }
    else {
      FUN_002011b0(0x93,0x1b,0x49);
    }
  }
  uVar11 = FUN_001c1890(0);
  sVar3 = FUN_001c0890(uVar11,*(undefined4 *)(param_1 + 0x28));
  if (sVar3 < 1) {
    FUN_001eeb00(0,iVar14,1,8);
  }
  else {
    FUN_001b55b0(auStack_600,*(undefined2 *)(param_1 + 0x28));
    if ((cStack_5fc == '\x05') ||
       (FUN_001b55b0(auStack_780,*(undefined2 *)(param_1 + 0x28)), cStack_77c == '\x06')) {
      FUN_001eeb00(0,iVar14,1,8);
    }
    else {
      FUN_001eeb00(0x3f800000,iVar14,1,8);
    }
  }
  FUN_001eeb00(0,iVar14,3,8);
  if (*(int *)(param_1 + 0x28) < 0) {
    FUN_001eeb00(0,iVar14,0,8);
  }
  else {
    FUN_001eeb00(0x3f800000,iVar14,0,8);
  }
  FUN_001eeb00(0,iVar14,2,8);
  FUN_001eea30(iVar4 + iVar5 * 0x4f4 + 4,1,9,*(undefined4 *)(param_1 + 0x1c));
  FUN_00201260(0x84,2);
  FUN_00201260(0x85,0);
  iVar4 = FUN_001f48c0(0x84);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
  iVar4 = FUN_001f48c0(0x85);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
  iVar4 = FUN_001f48c0(0x93);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
  FUN_001b55b0(&uStack_900,*(undefined2 *)(param_1 + 0x28));
  puVar16 = auStack_8bc;
  puVar13 = auStack_13c;
  iVar4 = 0x17;
  uStack_170 = uStack_8f0;
  uStack_168 = uStack_8e8;
  uStack_164 = uStack_8e4;
  uStack_178 = uStack_8f8;
  uStack_17c = uStack_8fc;
  uStack_174 = uStack_8f4;
  uStack_158 = uStack_8d8;
  uStack_180 = uStack_900;
  uStack_17e = uStack_8fe;
  uStack_16c = uStack_8ec;
  uStack_160 = uStack_8e0;
  uStack_15c = uStack_8dc;
  uStack_144 = uStack_8c4;
  uStack_154 = uStack_8d4;
  uStack_150 = uStack_8d0;
  uStack_14c = uStack_8cc;
  uStack_148 = uStack_8c8;
  uStack_146 = uStack_8c6;
  uStack_140 = uStack_8c0;
  do {
    iVar4 = iVar4 + -1;
    *puVar13 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar13 = puVar13 + 1;
  } while (0 < iVar4);
  puVar16 = auStack_860;
  puVar13 = auStack_e0;
  iVar4 = 0x17;
  do {
    iVar4 = iVar4 + -1;
    *puVar13 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar13 = puVar13 + 1;
  } while (0 < iVar4);
  puVar16 = auStack_804;
  puVar13 = auStack_84;
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    uVar8 = puVar16[1];
    *puVar13 = *puVar16;
    puVar13[1] = uVar8;
    puVar16 = puVar16 + 2;
    puVar13 = puVar13 + 2;
  } while (0 < iVar4);
  uStack_44 = uStack_7c4;
  uStack_40 = uStack_7c0;
  uStack_3c = uStack_7bc;
  uStack_38 = uStack_7b8;
  uStack_34 = uStack_7b4;
  uStack_14 = uStack_794;
  uStack_30 = uStack_7b0;
  uStack_10 = uStack_790;
  uStack_c = uStack_78c;
  uStack_18 = uStack_798;
  uStack_2c = uStack_7ac;
  uStack_28 = uStack_7a8;
  uStack_24 = uStack_7a4;
  uStack_20 = uStack_7a0;
  uStack_8 = uStack_788;
  uStack_1c = uStack_79c;
  switch(uStack_8fc) {
  case 0:
    FUN_001b4940(&uStack_180);
    iVar4 = *(int *)(param_1 + 0x648);
    goto LAB_0024c5a4;
  case 2:
    FUN_001eea30(iVar12,1,0x16,0x44);
    iVar4 = FUN_001f48c0(0x86);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
    break;
  case 3:
    FUN_001eea30(iVar12,1,0x16,0x41);
    iVar4 = FUN_001f48c0(0x86);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
    break;
  case 4:
    FUN_001eea30(iVar12,1,0x16,0x3f);
    iVar4 = FUN_001f48c0(0x86);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
    break;
  case 5:
    FUN_001eea30(iVar12,1,0x16,0x40);
    iVar4 = FUN_001f48c0(0x86);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
    break;
  case 6:
    FUN_001eea30(iVar12,1,0x16,0x40);
    iVar4 = FUN_001f48c0(0x86);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
    FUN_002011b0(0x86,2,0xa4);
    break;
  case 7:
    iVar4 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x24);
      FUN_001b08d0(aiStack_950,iVar4);
      if (iVar6 == aiStack_950[0]) {
        FUN_001eea30(iVar12,1,0x16,*(undefined4 *)(&DAT_0032c660 + iVar4 * 4));
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x14);
    iVar4 = FUN_001f48c0(0x86);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
    break;
  case 8:
    FUN_001eea30(iVar12,1,0x16,0x43);
    iVar4 = FUN_001f48c0(0x86);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
    break;
  case 9:
    FUN_001eea30(iVar12,1,0x16,0x42);
    iVar4 = FUN_001f48c0(0x86);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
    break;
  case 10:
    FUN_001eea30(iVar12,1,0x16,0x3e);
    iVar4 = FUN_001f48c0(0x86);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
    break;
  case 0xb:
    iVar4 = FUN_001f48c0(0x91);
    FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,0xc,8);
    iVar4 = FUN_001f48c0(0x91);
    FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,0x11,8);
    iVar4 = FUN_001f48c0(0x91);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
  }
  iVar4 = *(int *)(param_1 + 0x648);
LAB_0024c5a4:
  if (iVar4 == 0xe) {
    uVar11 = FUN_001f6ec0(*(undefined4 *)(param_1 + 0xe4));
    FUN_002011b0(0x87,0x2f,uVar11);
    iVar6 = 0;
    puVar13 = (undefined4 *)0x32c6b0;
    iVar4 = param_1;
    do {
      if (*(int *)(iVar4 + 0x5e4) != -1) {
        uVar11 = FUN_001f6ef0();
        FUN_002011b0(0x87,*puVar13,uVar11);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      puVar13 = puVar13 + 1;
    } while (iVar6 < 6);
    FUN_001eea30(iVar15,0x28,0x16,*(undefined4 *)(&DAT_0032c730 + *(int *)(param_1 + 0xe4) * 4));
    iVar6 = 0;
    puVar13 = &DAT_0032c6f0;
    puVar16 = &DAT_0032c710;
    iVar4 = param_1;
    do {
      iVar5 = *(int *)(iVar4 + 0x5e4);
      if (iVar5 == -1) {
LAB_0024ca58:
        FUN_001eeb00(0,iVar15,*puVar13,8);
      }
      else {
        uVar11 = FUN_001c1890(0);
        sVar3 = FUN_001c0890(uVar11,iVar5);
        if (sVar3 < 1) goto LAB_0024ca58;
        FUN_001eeb00(0x3f800000,iVar15,*puVar13,8);
        FUN_001ee0c0(iVar15,*puVar16,0x69,0x67,0x62);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar6 < 6);
    iVar6 = 0;
    puVar13 = &DAT_0032c710;
    iVar4 = param_1;
    do {
      if (*(int *)(iVar4 + 0x5e4) == -1) {
        FUN_001eeb00(0,iVar15,*puVar13,8);
      }
      else {
        FUN_001eeb00(0x3f800000,iVar15,*puVar13,8);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      puVar13 = puVar13 + 1;
    } while (iVar6 < 6);
    iVar6 = 0;
    puVar13 = &DAT_0032c6d0;
    iVar4 = param_1;
    do {
      iVar5 = *(int *)(iVar4 + 0x5e4);
      if ((iVar5 == -1) ||
         ((iVar7 = param_1 + *(int *)(param_1 + 0x5e0) * 0x14, *(int *)(iVar7 + 0x568) != iVar5 &&
          (*(int *)(iVar7 + 0x56c) != iVar5)))) {
        FUN_001eeb00(0,iVar15,*puVar13,8);
      }
      else {
        FUN_001eeb00(0,iVar15,*puVar13,8);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      puVar13 = puVar13 + 1;
    } while (iVar6 < 6);
    iVar4 = FUN_001f48c0(0x87);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
    iVar4 = *(int *)(param_1 + 0x64c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x64c);
  }
  if (iVar4 == 0x16) {
    uVar11 = FUN_001c1890(0);
    uVar11 = FUN_001bcb00(uVar11);
    FUN_001fe620(0x9c,1,uVar11);
    iVar4 = FUN_001f48c0(0x9c);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
  }
  FUN_001f8860(iGpffff8d68 + 0x654);
  return;
}

