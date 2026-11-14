// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00258000 - 0x0025c000
#include "ghidra_types.h"

// 0x00258370  size 0xb28
void FUN_00258370(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  
  uVar9 = FUN_002a1600(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  iVar7 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar7 != 0) {
    if (*(int *)(param_1 + 0x4c) == 3) {
      uVar6 = FUN_001f4890(0x167);
      iVar7 = FUN_001f48c0(0x51);
      iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
      *(undefined4 *)(iVar7 + 800) = uVar6;
      *(undefined4 *)(iVar7 + 0x31c) = 1;
      uVar6 = FUN_001f4890(0x169);
      iVar7 = FUN_001f48c0(0x51);
      iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
      *(undefined4 *)(iVar7 + 0x33c) = 0xffffffff;
      *(undefined4 *)(iVar7 + 0x348) = 0;
      *(undefined4 *)(iVar7 + 0x338) = 0;
      if (*(int *)(iVar7 + 0x348) == 0) {
        *(undefined4 *)(iVar7 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x344) = 1;
      }
      *(undefined4 *)(iVar7 + 0x338) = 0;
      if (*(int *)(iVar7 + 0x348) == 0) {
        *(undefined4 *)(iVar7 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x344) = 1;
      }
      *(undefined4 *)(iVar7 + 0x340) = 0;
      *(undefined4 *)(iVar7 + 0x348) = uVar6;
      *(undefined4 *)(iVar7 + 0x344) = 1;
    }
    iVar7 = *(int *)(param_1 + 0x48);
    if ((((iVar7 == 9) || (iVar7 == 8)) || (iVar7 == 2)) || (iVar7 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar6 = FUN_001f4890(0x168);
      iVar7 = FUN_001f48c0(0x51);
      iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
      *(undefined4 *)(iVar7 + 0x334) = uVar6;
      *(undefined4 *)(iVar7 + 0x330) = 1;
      uVar6 = FUN_001f4890(0x16a);
      iVar7 = FUN_001f48c0(0x51);
      iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
      *(undefined4 *)(iVar7 + 0x350) = 0xffffffff;
      *(undefined4 *)(iVar7 + 0x35c) = 0;
      *(undefined4 *)(iVar7 + 0x34c) = 0;
      if (*(int *)(iVar7 + 0x35c) == 0) {
        *(undefined4 *)(iVar7 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x358) = 1;
      }
      *(undefined4 *)(iVar7 + 0x34c) = 0;
      if (*(int *)(iVar7 + 0x35c) == 0) {
        *(undefined4 *)(iVar7 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x358) = 1;
      }
      *(undefined4 *)(iVar7 + 0x354) = 0;
      *(undefined4 *)(iVar7 + 0x35c) = uVar6;
      *(undefined4 *)(iVar7 + 0x358) = 1;
      uVar6 = FUN_001f4890(0x196);
      iVar7 = FUN_001f48c0(100);
      iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
      *(undefined4 *)(iVar7 + 800) = uVar6;
      *(undefined4 *)(iVar7 + 0x31c) = 1;
      uVar6 = FUN_001f4890(0x197);
      iVar7 = FUN_001f48c0(100);
      iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
      *(undefined4 *)(iVar7 + 0x334) = uVar6;
      *(undefined4 *)(iVar7 + 0x330) = 1;
      uVar6 = FUN_001f4890(0x408);
      iVar7 = FUN_001f48c0(0x4e);
      iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
      *(undefined4 *)(iVar7 + 800) = uVar6;
      *(undefined4 *)(iVar7 + 0x31c) = 1;
      uVar6 = FUN_001f4890(0x409);
      iVar7 = FUN_001f48c0(0x4e);
      iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
      *(undefined4 *)(iVar7 + 0x334) = uVar6;
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    FUN_00200ef0(0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    lVar10 = FUN_00201260(0x51,0);
    lVar11 = FUN_00201260(0x51,1);
    lVar12 = FUN_00201260(100,0);
    lVar13 = FUN_00201260(0x4e,0);
    if (lVar13 == 0 && (lVar12 == 0 && (lVar10 == 0 && lVar11 == 0))) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar7 = *(int *)(param_1 + 0x50);
      if (((iVar7 == 9) || (iVar7 == 8)) || ((iVar7 == 2 || (iVar7 == 1)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        lVar10 = FUN_00201260(0x51,2);
        lVar11 = FUN_00201260(0x51,3);
        lVar12 = FUN_00201260(100,1);
        lVar13 = FUN_00201260(0x4e,1);
        if (lVar13 == 0 && (lVar12 == 0 && (lVar10 == 0 && lVar11 == 0))) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        lVar10 = FUN_00201260(0x51,2);
        if (lVar10 == 0) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
    }
    if (*piRam0036f468 == 1) {
      FUN_00200d70(0x51,*(undefined4 *)(&DAT_0032cfb8 + *(int *)(param_1 + 0x10) * 0x10),1,0);
    }
  }
  lVar10 = FUN_0029f130(*(undefined4 *)(param_1 + 4));
  if (lVar10 == 1) {
    iVar7 = *(int *)(param_1 + 0x4c);
    if (((iVar7 == 7) || (iVar7 == 10)) || (iVar7 == 0xb)) {
      uVar6 = *(undefined4 *)(param_1 + 4);
    }
    else {
      if (iVar7 != 0x11) goto LAB_00258ccc;
      uVar6 = *(undefined4 *)(param_1 + 4);
    }
    uVar2 = FUN_002a1600(uVar6,*(undefined4 *)(param_1 + 0x10));
    FUN_001ffdc0(0xffffffffffffffff,0,uVar2,*(undefined4 *)(param_1 + 0x14));
  }
  else {
LAB_00258ccc:
    FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  }
  uVar14 = FUN_001ba290(uVar9,0);
  FUN_001fe620(0x4e,5,uVar14);
  uVar14 = FUN_001c1890(0);
  uVar14 = FUN_001bcb00(uVar14);
  FUN_001fe620(0x4e,4,uVar14);
  uVar14 = FUN_001c1890(0);
  sVar3 = FUN_001bbaa0(uVar14,0xf);
  uVar14 = FUN_001c1890(0);
  sVar4 = FUN_001bbaa0(uVar14,0x10);
  iVar7 = FUN_001f48c0(0x51);
  FUN_001eeb00(0,*piRam0036f42c + iVar7 * 0x4f4 + 4,DAT_0032d010,8);
  iVar7 = FUN_001f48c0(0x51);
  FUN_001eeb00(0,*piRam0036f42c + iVar7 * 0x4f4 + 4,DAT_0032d014,8);
  iVar7 = 0;
  puVar18 = &DAT_0032cfc0;
  do {
    sVar5 = FUN_002a1600(*(undefined4 *)(param_1 + 4),iVar7 + 1);
    if ((sVar3 != sVar5) &&
       (sVar5 = FUN_002a1600(*(undefined4 *)(param_1 + 4),iVar7 + 1), sVar4 != sVar5)) {
      iVar8 = FUN_001f48c0(0x51);
      FUN_001eeb00(0,*piRam0036f42c + iVar8 * 0x4f4 + 4,*puVar18,8);
    }
    if (*(int *)(param_1 + 0x4c) != 3) {
      iVar8 = FUN_001f48c0(0x51);
      FUN_001eeb00(0,*piRam0036f42c + iVar8 * 0x4f4 + 4,*puVar18,8);
    }
    if (*(int *)(param_1 + 0x40) + -2 < iVar7) {
      iVar8 = FUN_001f48c0(0x51);
      FUN_001eeb00(0,*piRam0036f42c + iVar8 * 0x4f4 + 4,puVar18[1],8);
    }
    iVar7 = iVar7 + 1;
    puVar18 = puVar18 + 4;
  } while (iVar7 < 5);
  iVar7 = FUN_001c1890(0);
  uVar2 = *(undefined2 *)(iVar7 + (short)uVar9 * 2 + 0x1420);
  uVar9 = FUN_001c1890(0);
  uVar9 = FUN_001bbaa0(uVar9,0xf);
  uVar9 = FUN_001f6460(uVar9);
  uVar14 = FUN_001c1890(0);
  uVar14 = FUN_001bbaa0(uVar14,0x10);
  uVar14 = FUN_001f6460(uVar14);
  uVar15 = FUN_001c1890(0);
  uVar15 = FUN_001bbaa0(uVar15,0xf);
  uVar15 = FUN_001d3970(uVar15);
  uVar15 = FUN_001f6540(uVar15);
  uVar16 = FUN_001c1890(0);
  uVar16 = FUN_001bbaa0(uVar16,0x10);
  uVar16 = FUN_001d3970(uVar16);
  uVar16 = FUN_001f6540(uVar16);
  FUN_002011b0(0x4e,6,0x2e9);
  FUN_002010a0(0x4e,7,0x3f,uVar2);
  uVar17 = FUN_002a17d0(*(undefined4 *)(param_1 + 4));
  uVar17 = FUN_001f6540(uVar17);
  FUN_002011b0(0x51,0x30,uVar17);
  FUN_00201140(0x51,0x2f,4,0x44);
  FUN_002010a0(0x51,0x34,0x45,uVar15,uVar9);
  FUN_002010a0(0x51,0x35,0x45,uVar16,uVar14);
  iVar7 = 1;
  if (1 < *(int *)(param_1 + 0x40)) {
    iVar8 = 0x32cfd0;
    do {
      uVar9 = FUN_002a1600(*(undefined4 *)(param_1 + 4),iVar7);
      uVar9 = FUN_001f6460(uVar9);
      FUN_002011b0(0x51,*(undefined4 *)(iVar8 + -4),uVar9);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < *(int *)(param_1 + 0x40));
  }
  iVar8 = FUN_001f48c0(100);
  iVar7 = *piRam0036f42c;
  uVar9 = FUN_002a14f0(*(undefined4 *)(param_1 + 4),0xffffffffffffffff);
  uVar9 = FUN_001f61d0(uVar9);
  FUN_001eea30(iVar7 + iVar8 * 0x4f4 + 4,5,0x16,uVar9);
  iVar7 = FUN_001f48c0(0x51);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar7 * 0x4f4 + 4);
  iVar7 = FUN_001f48c0(100);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar7 * 0x4f4 + 4);
  iVar7 = FUN_001f48c0(0x4e);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar7 * 0x4f4 + 4);
  return;
}

// 0x00258ea0  size 0xab4
void FUN_00258ea0(int param_1)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  
  uVar8 = FUN_002a14f0(*(undefined4 *)(param_1 + 4),0xffffffffffffffff);
  uVar9 = FUN_001c1890(0);
  uVar9 = FUN_001bc3f0(uVar9);
  uVar9 = FUN_001d34d0(uVar9);
  iVar4 = FUN_001d23a0(uVar9,uVar8);
  if (*(char *)(iVar4 + 2) == '\x1f') {
    iVar4 = 0;
    puVar15 = &DAT_0032cf40;
    do {
      iVar5 = FUN_001f48c0(0x57);
      FUN_001eea30(*piGpffff8d3c + iVar5 * 0x4f4 + 4,*puVar15,0x16,0);
      iVar4 = iVar4 + 1;
      puVar15 = puVar15 + 4;
    } while (iVar4 < 8);
  }
  uVar8 = FUN_002a1600(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  uVar9 = FUN_001c1890(0);
  uVar10 = FUN_002a14f0(*(undefined4 *)(param_1 + 4),0xffffffffffffffff);
  uVar9 = FUN_001bbaa0(uVar9,uVar10);
  iVar5 = FUN_001d3540(uVar9);
  iVar4 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x48);
    if ((((iVar4 == 9) || (iVar4 == 8)) || (iVar4 == 2)) || (iVar4 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar6 = FUN_001f4890(0x199);
      iVar4 = FUN_001f48c0(0x57);
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
      *(undefined4 *)(iVar4 + 800) = uVar6;
      *(undefined4 *)(iVar4 + 0x31c) = 1;
      uVar6 = FUN_001f4890(0x19a);
      iVar4 = FUN_001f48c0(0x57);
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
      *(undefined4 *)(iVar4 + 0x334) = uVar6;
      *(undefined4 *)(iVar4 + 0x330) = 1;
      uVar6 = FUN_001f4890(0x19b);
      iVar4 = FUN_001f48c0(0x57);
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
      *(undefined4 *)(iVar4 + 0x340) = 0;
      *(undefined4 *)(iVar4 + 0x348) = uVar6;
      *(undefined4 *)(iVar4 + 0x344) = 1;
      uVar6 = FUN_001f4890(0x19c);
      iVar4 = FUN_001f48c0(0x57);
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
      *(undefined4 *)(iVar4 + 0x35c) = uVar6;
      *(undefined4 *)(iVar4 + 0x358) = 1;
      uVar6 = FUN_001f4890(0x196);
      iVar4 = FUN_001f48c0(100);
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
      *(undefined4 *)(iVar4 + 800) = uVar6;
      *(undefined4 *)(iVar4 + 0x31c) = 1;
      uVar6 = FUN_001f4890(0x197);
      iVar4 = FUN_001f48c0(100);
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
      *(undefined4 *)(iVar4 + 0x334) = uVar6;
      *(undefined4 *)(iVar4 + 0x330) = 1;
      uVar6 = FUN_001f4890(0x15f);
      iVar4 = FUN_001f48c0(0x4e);
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
      *(undefined4 *)(iVar4 + 800) = uVar6;
      *(undefined4 *)(iVar4 + 0x31c) = 1;
      uVar6 = FUN_001f4890(0x160);
      iVar4 = FUN_001f48c0(0x4e);
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
      *(undefined4 *)(iVar4 + 0x334) = uVar6;
      *(undefined4 *)(iVar4 + 0x330) = 1;
      if (0 < iVar5) {
        iVar7 = FUN_001f48c0(0x57);
        iVar4 = *piGpffff8d3c;
        uVar9 = FUN_001f4890(0x118);
        FUN_001ed2c0(iVar4 + iVar7 * 0x4f4 + 4,9,*(undefined4 *)(&DAT_0032cf30 + iVar5 * 0x10),uVar9
                     ,1);
      }
    }
    FUN_00200ef0(0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    lVar11 = FUN_00201260(0x57,0);
    lVar12 = FUN_00201260(0x57,1);
    lVar13 = FUN_00201260(100,0);
    lVar14 = FUN_00201260(0x4e,0);
    if (lVar14 == 0 && (lVar13 == 0 && (lVar11 == 0 && lVar12 == 0))) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*piGpffff8d78 == 1) {
      FUN_00200d70(0x57,*(undefined4 *)(&DAT_0032cf38 + *(int *)(param_1 + 0x10) * 0x10),1,0);
      iVar4 = *(int *)(param_1 + 0x60);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x60);
    }
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0x50);
      if (((iVar4 == 9) || (iVar4 == 8)) || ((iVar4 == 2 || (iVar4 == 1)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        lVar11 = FUN_00201260(0x57,2);
        lVar12 = FUN_00201260(0x57,3);
        lVar13 = FUN_00201260(100,1);
        lVar14 = FUN_00201260(0x4e,1);
        if (lVar14 == 0 && (lVar13 == 0 && (lVar11 == 0 && lVar12 == 0))) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
  }
  iVar4 = 0;
  puVar15 = &DAT_0032cf40;
  do {
    iVar7 = FUN_001f48c0(0x57);
    FUN_001eeb00(0,*piGpffff8d3c + iVar7 * 0x4f4 + 4,*puVar15,8);
    if (*(int *)(param_1 + 0x40) + -2 < iVar4) {
      iVar7 = FUN_001f48c0(0x57);
      FUN_001eeb00(0,*piGpffff8d3c + iVar7 * 0x4f4 + 4,puVar15[1],8);
    }
    iVar4 = iVar4 + 1;
    puVar15 = puVar15 + 4;
  } while (iVar4 < 8);
  if ((0 < iVar5) && (lVar11 = FUN_0029f130(*(undefined4 *)(param_1 + 4)), lVar11 == 1)) {
    if (*(int *)(param_1 + 4) == 0xd) {
      uVar9 = FUN_001c1890(0);
      uVar9 = FUN_001bbaa0(uVar9,7);
      sVar2 = FUN_001d3970(uVar9);
      if (sVar2 != 0x67) goto LAB_00259794;
      iVar4 = *(int *)(param_1 + 4);
    }
    else {
      iVar4 = *(int *)(param_1 + 4);
    }
    if (iVar4 == 0xe) {
      uVar9 = FUN_001c1890(0);
      uVar9 = FUN_001bbaa0(uVar9,7);
      sVar2 = FUN_001d3970(uVar9);
      if (sVar2 != 0x6b) goto LAB_00259794;
      iVar4 = *(int *)(param_1 + 4);
    }
    else {
      iVar4 = *(int *)(param_1 + 4);
    }
    if (iVar4 == 0xf) {
      uVar9 = FUN_001c1890(0);
      uVar9 = FUN_001bbaa0(uVar9,7);
      sVar2 = FUN_001d3970(uVar9);
      if (sVar2 != 0x6e) goto LAB_00259794;
    }
    if (iVar5 < *(int *)(param_1 + 0x40)) {
      iVar4 = FUN_001f48c0(0x57);
      FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,
                   *(undefined4 *)(&DAT_0032cf30 + iVar5 * 0x10),8);
    }
  }
LAB_00259794:
  uVar9 = FUN_001ba290(uVar8,0);
  FUN_001fe620(0x4e,5,uVar9);
  uVar9 = FUN_001c1890(0);
  uVar9 = FUN_001bcb00(uVar9);
  FUN_001fe620(0x4e,4,uVar9);
  iVar4 = FUN_001c1890(0);
  uVar3 = *(undefined2 *)(iVar4 + (short)uVar8 * 2 + 0x1420);
  FUN_002011b0(0x4e,6,0x2e9);
  FUN_002010a0(0x4e,7,0x3f,uVar3);
  uVar8 = FUN_002a17d0(*(undefined4 *)(param_1 + 4));
  uVar8 = FUN_001f6540(uVar8);
  FUN_002011b0(0x57,0x42,uVar8);
  iVar4 = 1;
  if (1 < *(int *)(param_1 + 0x40)) {
    puVar15 = &DAT_0032cf50;
    do {
      uVar8 = FUN_002a1600(*(undefined4 *)(param_1 + 4),iVar4);
      uVar8 = FUN_001f6460(uVar8);
      FUN_002011b0(0x57,puVar15[-1],uVar8);
      iVar4 = iVar4 + 1;
      puVar15 = puVar15 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x40));
  }
  lVar11 = FUN_0029f130(*(undefined4 *)(param_1 + 4));
  if (lVar11 == 1) {
    uVar3 = FUN_002a1600(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    FUN_001ffdc0(0xffffffffffffffff,0,uVar3,0);
  }
  else {
    FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  }
  FUN_00201260(0x57,9);
  iVar4 = FUN_001f48c0(0x57);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
  iVar4 = FUN_001f48c0(0x4e);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
  return;
}

// 0x00259960  size 0xe00
void FUN_00259960(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x48);
    if ((((iVar3 == 9) || (iVar3 == 8)) || (iVar3 == 2)) || (iVar3 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar2 = FUN_001f4890(0x429);
      iVar3 = FUN_001f48c0(0x5a);
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
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
      uVar2 = FUN_001f4890(0x42a);
      iVar3 = FUN_001f48c0(0x5a);
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
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
      uVar2 = FUN_001f4890(0x12e);
      iVar3 = FUN_001f48c0(99);
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
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
      uVar2 = FUN_001f4890(0x12f);
      iVar3 = FUN_001f48c0(99);
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
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
      uVar2 = FUN_001f4890(0x173);
      iVar3 = FUN_001f48c0(0x55);
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
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
      uVar2 = FUN_001f4890(0x174);
      iVar3 = FUN_001f48c0(0x55);
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
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    FUN_00200ef0(0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    lVar4 = FUN_00201260(99,0);
    lVar5 = FUN_00201260(0x5a,0);
    lVar6 = FUN_00201260(0x55,0);
    if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar3 = *(int *)(param_1 + 0x50);
      if (((iVar3 == 9) || (iVar3 == 8)) || ((iVar3 == 2 || (iVar3 == 1)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        lVar4 = FUN_00201260(99,1);
        lVar5 = FUN_00201260(0x5a,1);
        lVar6 = FUN_00201260(0x55,1);
        if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    if (*piGpffff8d78 == 1) {
      FUN_00200d70(99,*(undefined4 *)
                       ((int)register0x000001c0 + *(int *)(param_1 + 0x10) * 4 + -0x7aa8),1,0);
    }
  }
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x31,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x32,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x33,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x34,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x35,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x36,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x37,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x38,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x29,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x2a,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x2b,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x2c,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x2d,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x2e,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x2f,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x3a,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x3b,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x3c,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x3d,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x3e,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x3f,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x40,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x42,8);
  iVar3 = FUN_001f48c0(99);
  FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x43,8);
  FUN_002011b0(99,0x39,0x98f);
  FUN_002011b0(99,0x44,0x98f);
  uVar7 = FUN_001ba290(0xffffffffffffffff,1);
  FUN_001fe620(0x55,3,uVar7);
  uVar7 = FUN_001c1890(0);
  uVar7 = FUN_001bcb00(uVar7);
  FUN_001fe620(0x55,4,uVar7);
  iVar3 = FUN_001f8040(0xffffffffffffffff,0);
  uVar2 = FUN_002055b0(iVar3 + 1);
  switch(uVar2) {
  case 3:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,0xe);
    break;
  case 4:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,10);
    break;
  case 5:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,1);
    break;
  case 6:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,4);
    break;
  case 7:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,3);
    break;
  case 8:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,2);
    break;
  case 9:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,6);
    break;
  case 10:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,5);
    break;
  case 0xb:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,0xd);
    break;
  case 0xc:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,0xc);
    break;
  case 0xd:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,7);
    break;
  case 0xe:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,0xf);
    break;
  case 0xf:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,8);
    break;
  case 0x10:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,9);
    break;
  case 0x11:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,0xb);
    break;
  case 0x12:
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,1,0x16,0x10);
  }
  iVar3 = FUN_001f8040(0xffffffffffffffff,0);
  lVar4 = FUN_002055b0(iVar3 + 1);
  if (lVar4 != 2) {
    iVar3 = FUN_001f48c0(0x5a);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  }
  iVar3 = FUN_001f48c0(99);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0x55);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

// 0x0025a760  size 0x1dc
void FUN_0025a760(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  iVar2 = piVar5[1];
  if (iVar2 == 0x19) {
    iVar2 = piVar5[2];
    if ((iVar2 == 3) || (iVar2 == 2)) {
      FUN_002562c0(param_1);
    }
    else if (iVar2 == 1) {
      FUN_002568c0();
    }
    else if (iVar2 == 0) {
      FUN_00256e70();
    }
  }
  else if (iVar2 == 0x1a) {
    FUN_00259960();
  }
  else if (iVar2 == 0x21) {
    FUN_002574b0();
  }
  else if (((iVar2 < 4) || (7 < iVar2)) || (lVar3 = FUN_0029f130(iVar2), lVar3 != 1)) {
    if ((*piVar5 == 5) && (lVar3 = FUN_0029f130(piVar5[1]), lVar3 == 1)) {
      FUN_00258ea0(param_1);
    }
    else if (*piVar5 == 3) {
      FUN_00258370(param_1);
    }
    else {
      FUN_00258ea0(param_1);
      iVar1 = FUN_001f48c0(100);
      iVar2 = *piRam0036f42c;
      uVar4 = FUN_002a14f0(piVar5[1],0xffffffffffffffff);
      uVar4 = FUN_001f61d0(uVar4);
      FUN_001eea30(iVar2 + iVar1 * 0x4f4 + 4,5,0x16,uVar4);
      iVar2 = FUN_001f48c0(100);
      FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
    }
  }
  else {
    FUN_00258ea0(param_1);
  }
  return;
}

// 0x0025a940  size 0x280
void FUN_0025a940(int param_1,long param_2)

{
  int iVar1;
  
  FUN_002011b0(0x5e,0x26,0x9bc);
  FUN_002011b0(0x5e,0x27,0x9bd);
  FUN_002011b0(0x5e,0x28,0x9be);
  FUN_002011b0(0x5e,0x29,0x9bf);
  FUN_002011b0(0x5e,0x2a,0x9c0);
  FUN_002011b0(0x5e,0x2b,0x9c1);
  if (param_1 == 5) {
    if (param_2 == 0) {
      FUN_002010a0(0x5e,0x1e,0x42,0x98d,0x991,0x992,0x993,0x994);
    }
    else {
      FUN_002010a0(0x5e,0x1e,0x42,0x98d,0x98e,0x98f,0x991,0x992);
    }
  }
  else if (param_1 == 3) {
    FUN_002010a0(0x5e,0x1e,0x42,0x99e,0x99f,0x9a0,0x9a1);
  }
  else if (param_1 == 2) {
    FUN_002010a0(0x5e,0x1e,0x42,0x98a,0x98b,0x41,0x41,0x41);
  }
  else if (param_1 == 1) {
    if (param_2 == 0) {
      FUN_002010a0(0x5e,0x1e,0x42,0x985,0x986,0x987,0x988,0x989);
    }
    else {
      FUN_002010a0(0x5e,0x1e,0x42,0x985,0x986,0x9a2,0x9a3,0x9a4);
    }
  }
  else if (param_1 == 0) {
    iVar1 = FUN_0029f470(0xffffffffffffffff,0);
    if (param_2 != 0) {
      iVar1 = 4;
    }
    FUN_002010a0(0x5e,0x1e,0x42,*(undefined4 *)(&DAT_0032cd70 + iVar1 * 4),(&DAT_0032cd90)[iVar1],
                 0x982,0x983,0x984);
  }
  return;
}

// 0x0025abc0  size 0xc4
void FUN_0025abc0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar1 != 0) {
    FUN_00200ef0(0);
    FUN_001ff610(0);
  }
  lVar2 = FUN_001ff320(0x2d6,0xffffffffffffffff,0);
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  FUN_0025a760(param_1);
  return;
}

// 0x0025ac90  size 0x128
void FUN_0025ac90(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar2 != 0) {
    FUN_00200ef0(0);
    if (*(int *)(iVar3 + 4) == 0x19) {
      FUN_001ff610(0);
      iVar2 = *(int *)(iVar3 + 4);
      goto LAB_0025acec;
    }
    FUN_001ff610(2);
  }
  iVar2 = *(int *)(iVar3 + 4);
LAB_0025acec:
  if (iVar2 == 0x19) {
    lVar1 = FUN_001ff320(0x2ec,0xffffffffffffffff,0);
  }
  else {
    lVar1 = FUN_001ff320(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x24),
                         (int)register0x000001c0 + -0x7ab0);
  }
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar1 == 2) {
      FUN_001ff600();
    }
    else if (lVar1 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar1 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  if (*(int *)(iVar3 + 4) != 0x19) {
    FUN_002010a0(5,0x1c,0x2c5);
  }
  FUN_0025a760(param_1);
  return;
}

// 0x0025adc0  size 0xd4
void FUN_0025adc0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar1 != 0) {
    FUN_00200ef0(0);
    FUN_001ff610(2);
  }
  lVar2 = FUN_001ff320(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x24),
                       (int)register0x000001c0 + -0x7ab8);
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  FUN_002010a0(5,0x1c,0x2c1);
  FUN_0025a760(param_1);
  return;
}

// 0x0025aea0  size 0xd4
void FUN_0025aea0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar1 != 0) {
    FUN_00200ef0(0);
    FUN_001ff610(2);
  }
  lVar2 = FUN_001ff320(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x24),
                       (int)register0x000001c0 + -0x7ac0);
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  FUN_002010a0(5,0x1c,0x2c4);
  FUN_0025a760(param_1);
  return;
}

// 0x0025af80  size 0xc4
void FUN_0025af80(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar1 != 0) {
    FUN_00200ef0(0);
    FUN_001ff610(0);
  }
  lVar2 = FUN_001ff320(0x2c0,0xffffffffffffffff,0);
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  FUN_0025a760(param_1);
  return;
}

// 0x0025b050  size 0xc4
void FUN_0025b050(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar1 != 0) {
    FUN_00200ef0(0);
    FUN_001ff610(0);
  }
  lVar2 = FUN_001ff320(0x2bf,0xffffffffffffffff,0);
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  FUN_001ff790(3,0xffffffffffffffff);
  FUN_0025a760(param_1);
  return;
}

// 0x0025b120  size 0x2cc
void FUN_0025b120(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar2 = *(int *)(iVar7 + 0x5c);
  *(undefined4 *)(iVar7 + 0x5c) = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_001f4890(0x16d);
    iVar2 = FUN_001f48c0(0x53);
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
    uVar3 = FUN_001f4890(0x16e);
    iVar2 = FUN_001f48c0(0x53);
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
    iVar4 = FUN_001f48c0(0x53);
    iVar2 = *piGpffff8d3c;
    uVar6 = FUN_001f4890(0x117);
    FUN_001ed2c0(iVar2 + iVar4 * 0x4f4 + 4,2,0x18,uVar6,1);
    FUN_00200fc0(0);
    FUN_00200ef0(0);
  }
  lVar5 = FUN_00201260(0x53,0);
  bVar1 = lVar5 == 0;
  if (bVar1) {
    *(undefined4 *)(iVar7 + 0x58) = 0;
  }
  if (*(int *)(iVar7 + 0x60) != 0) {
    lVar5 = FUN_00201260(0x53);
    if (lVar5 == 0) {
      *(undefined4 *)(iVar7 + 0x60) = 0;
    }
    bVar1 = false;
  }
  if (bVar1) {
    FUN_00201260(0x53,2);
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x53,*(undefined4 *)
                       ((int)register0x000001c0 + *(int *)(iVar7 + 0x24) * 4 + -0x7ac8),1,0);
  }
  FUN_001ff790(3,0xffffffffffffffff);
  uVar6 = FUN_002a1600(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 0x10));
  iVar2 = FUN_001ba290(uVar6,0);
  FUN_002010a0(0x53,0x1f,0x2d7);
  FUN_002011b0(0x53,0x1e,1);
  FUN_002011b0(0x53,0x20,2);
  FUN_001fe620(0x53,0x1d,iVar2 << 1);
  iVar2 = FUN_001f48c0(0x53);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_0025a760(param_1);
  return;
}

// 0x0025b3f0  size 0x3c
void FUN_0025b3f0(int *param_1)

{
  if (*param_1 == 3) {
    FUN_0025b810();
  }
  else {
    FUN_0025b430();
  }
  return;
}

// 0x0025b430  size 0x3e0
void FUN_0025b430(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar1 = *(int *)(iVar6 + 0x5c);
  *(undefined4 *)(iVar6 + 0x5c) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x13c);
    iVar1 = FUN_001f48c0(0x67);
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
    uVar2 = FUN_001f4890(0x13d);
    iVar1 = FUN_001f48c0(0x67);
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
    uVar2 = FUN_001f4890(0x13e);
    iVar1 = FUN_001f48c0(0x67);
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
    uVar2 = FUN_001f4890(0x13f);
    iVar1 = FUN_001f48c0(0x67);
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
    FUN_00200ef0(0);
  }
  lVar3 = FUN_00201260(0x67,0);
  lVar4 = FUN_00201260(0x67,1);
  if (lVar3 == 0 && lVar4 == 0) {
    *(undefined4 *)(iVar6 + 0x58) = 0;
  }
  if (*(int *)(iVar6 + 0x60) != 0) {
    lVar3 = FUN_00201260(0x67,2);
    lVar4 = FUN_00201260(0x67,3);
    if (lVar3 == 0 && lVar4 == 0) {
      *(undefined4 *)(iVar6 + 0x60) = 0;
    }
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x67,*(undefined4 *)(&DAT_0032cf30 + *(int *)(iVar6 + 0x14) * 4),1,0);
  }
  FUN_002011b0(0x67,0x1b,0x2f);
  FUN_002011b0(0x67,0x1c,0x30);
  FUN_002011b0(0x67,0x1d,0x31);
  uVar5 = FUN_001c1890(0);
  uVar5 = FUN_001bbaa0(uVar5,0xd);
  uVar5 = FUN_001f6460(uVar5);
  FUN_002011b0(0x67,0x14,uVar5);
  uVar5 = FUN_001c1890(0);
  uVar5 = FUN_001bbaa0(uVar5,0xe);
  uVar5 = FUN_001f6460(uVar5);
  FUN_002011b0(0x67,0x15,uVar5);
  FUN_002011b0(0x67,0x17,0x9c0);
  iVar1 = FUN_001f48c0(0x67);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,0x2d5);
  FUN_0025a760(param_1);
  return;
}

// 0x0025b810  size 0x240
void FUN_0025b810(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x5c);
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x16b);
    iVar1 = FUN_001f48c0(0x52);
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
    uVar2 = FUN_001f4890(0x16c);
    iVar1 = FUN_001f48c0(0x52);
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
    FUN_00200ef0(0);
  }
  lVar3 = FUN_00201260(0x52,0);
  if (lVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x58) = 0;
  }
  if ((*(int *)(iVar4 + 0x60) != 0) && (lVar3 = FUN_00201260(0x52), lVar3 == 0)) {
    *(undefined4 *)(iVar4 + 0x60) = 0;
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x52,*(undefined4 *)(&DAT_0032cf20 + *(int *)(iVar4 + 0x14) * 4),1,0);
  }
  FUN_002011b0(0x52,0x12,0x2f);
  FUN_002011b0(0x52,0x13,0x30);
  FUN_002011b0(0x52,0x14,0x31);
  iVar1 = FUN_001f48c0(0x52);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,0x2d5);
  FUN_0025a760(param_1);
  return;
}

// 0x0025ba50  size 0x330
void FUN_0025ba50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar1 != 0) {
    uVar3 = FUN_001f4890(0x15d);
    iVar1 = FUN_001f48c0(0x4d);
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
    uVar3 = FUN_001f4890(0x15e);
    iVar1 = FUN_001f48c0(0x4d);
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
    FUN_00200fc0(0);
  }
  lVar4 = FUN_00201260(0x4d,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((*(int *)(param_1 + 0x60) != 0) && (lVar4 = FUN_00201260(0x4d), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x4d,*(undefined4 *)(&DAT_0032cf10 + *(int *)(param_1 + 8) * 4),1,0);
  }
  uVar5 = FUN_001c1890(0);
  uVar5 = FUN_001bc3f0(uVar5);
  FUN_001d20f0(uVar5);
  FUN_002011b0(0x4c,0x33,0x98e);
  FUN_002011b0(0x4c,0x39,0x9b2);
  FUN_002011b0(0x4d,0x1d,0x2e2);
  uVar5 = 0;
  iVar1 = FUN_001f7ee0(0xffffffffffffffff,0);
  if (iVar1 - 0xcU < 2) {
    uVar5 = 3;
  }
  FUN_00201140(0x4d,0x1e,uVar5,0x2e3);
  FUN_00201140(0x4d,0x1f,uVar5,0x2e4);
  FUN_00201140(0x4d,0x20,uVar5,0x2e5);
  FUN_002011b0(0x4c,0x37,0x9c1);
  iVar1 = 0;
  puVar6 = &DAT_0032cdb0;
  do {
    iVar2 = FUN_001f48c0(0x4d);
    FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,*puVar6,8);
    iVar1 = iVar1 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar1 < 4);
  iVar1 = FUN_001f48c0(0x4c);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x4d);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,0x2e1);
  return;
}

// 0x0025bd80  size 0x84c
void FUN_0025bd80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x261);
    iVar1 = FUN_001f48c0(0x58);
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
    uVar2 = FUN_001f4890(0x263);
    iVar1 = FUN_001f48c0(0x58);
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
    uVar2 = FUN_001f4890(0x264);
    iVar1 = FUN_001f48c0(0x58);
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
    uVar2 = FUN_001f4890(0x262);
    iVar1 = FUN_001f48c0(0x58);
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
    uVar2 = FUN_001f4890(0x265);
    iVar1 = FUN_001f48c0(0x58);
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
    uVar2 = FUN_001f4890(0x266);
    iVar1 = FUN_001f48c0(0x58);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar2 = FUN_001f4890(0x267);
    iVar1 = FUN_001f48c0(0x58);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x390) = 0;
    *(undefined4 *)(iVar1 + 0x398) = uVar2;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    uVar2 = FUN_001f4890(0x268);
    iVar1 = FUN_001f48c0(0x58);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x3a4) = 0;
    *(undefined4 *)(iVar1 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar1 + 0x3a8) = 1;
    uVar2 = FUN_001f4890(0x269);
    iVar1 = FUN_001f48c0(0x58);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x3b8) = 0;
    *(undefined4 *)(iVar1 + 0x3c0) = uVar2;
    *(undefined4 *)(iVar1 + 0x3bc) = 1;
    do {
      lVar3 = FUN_00201260(0x58,8);
    } while (lVar3 == 1);
    uVar2 = FUN_001f4890(0x26a);
    iVar1 = FUN_001f48c0(0x58);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x3cc) = 0;
    *(undefined4 *)(iVar1 + 0x3d4) = uVar2;
    *(undefined4 *)(iVar1 + 0x3d0) = 1;
    FUN_00200a10(0x58,(int)register0x000001c0 + -0x7ad0,2,0);
  }
  lVar3 = FUN_00201260(0x58,0);
  lVar4 = FUN_00201260(0x58,2);
  lVar5 = FUN_00201260(0x58,3);
  if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_002008b0(1);
  }
  else {
    lVar3 = FUN_00201260(0x58);
    lVar4 = FUN_00201260(0x58,4);
    lVar5 = FUN_00201260(0x58,5);
    if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    FUN_002008b0(0);
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x58,*(undefined4 *)(&DAT_0032cea0 + *(int *)(param_1 + 0x3c) * 4),1,0);
  }
  iVar1 = FUN_001f48c0(0x58);
  FUN_001eea30(*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x38,0x16,
               *(undefined4 *)(&DAT_0032cec0 + *(int *)(param_1 + 0x34) * 4));
  uVar6 = FUN_001c1890(0);
  uVar6 = FUN_001bcb00(uVar6);
  FUN_001fe620(0x58,0x37,uVar6);
  iVar1 = 0;
  iVar8 = 0;
  puVar7 = &DAT_0032cee0;
  do {
    if (iVar8 == 5) {
      iVar1 = -1;
    }
    if (iVar1 == -1) break;
    uVar6 = FUN_001f5fb0(iVar1 + 1U & 0xff);
    FUN_002011b0(0x58,*puVar7,uVar6);
    iVar1 = (iVar1 + 1) % 5;
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 < 6);
  FUN_001ff790(3,0x2d8);
  iVar1 = FUN_001f48c0(0x58);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x4b,8);
  iVar1 = FUN_001f48c0(0x58);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x4c,8);
  iVar1 = FUN_001f48c0(0x58);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x3c,8);
  iVar1 = FUN_001f48c0(0x58);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x3b,8);
  iVar1 = FUN_001f48c0(0x58);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x3a,8);
  iVar1 = FUN_001f48c0(0x58);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return;
}

