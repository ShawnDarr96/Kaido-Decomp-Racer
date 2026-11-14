// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002f4000 - 0x002f8000
#include "ghidra_types.h"

// 0x002f4190  size 0x2a4
void FUN_002f4190(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  lVar3 = FUN_002f81d0(param_1 + 0xc44);
  if (lVar3 != 0) {
    iVar1 = FUN_001f48c0(0xc);
    FUN_001eea30(*piRam0036f42c + iVar1 * 0x4f4 + 4,0x55,9,0);
    FUN_002f6d80(0);
  }
  lVar3 = FUN_002f6c40(7,0xffffffffffffffff);
  if (lVar3 == 1) {
    FUN_002f81a0(param_1 + 0xc44);
  }
  lVar4 = FUN_002f81b0(param_1 + 0xc44);
  if (lVar4 != 0) {
    if (lVar3 == 1) {
      FUN_002f6c30();
    }
    if (lVar3 == 3) {
      FUN_002f8170(param_1 + 0xc44);
    }
  }
  FUN_002ef5f0(param_1);
  iVar7 = 0;
  puVar6 = &DAT_00343350;
  puVar5 = &DAT_00343370;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0xd08) == 0) {
      iVar2 = FUN_001f48c0(0xc);
      FUN_001eeb00(0,*piRam0036f42c + iVar2 * 0x4f4 + 4,*puVar6,8);
    }
    else {
      iVar2 = FUN_001f48c0(0xc);
      FUN_001eeb00(0x3ecccccd,*piRam0036f42c + iVar2 * 0x4f4 + 4,*puVar6,8);
    }
    if (*(int *)(iVar1 + 0xd28) == 0) {
      iVar2 = FUN_001f48c0(0xc);
      FUN_001eeb00(0,*piRam0036f42c + iVar2 * 0x4f4 + 4,*puVar5,8);
    }
    else {
      iVar2 = FUN_001f48c0(0xc);
      FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4,*puVar5,8);
    }
    iVar7 = iVar7 + 1;
    iVar1 = iVar1 + 4;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar7 < 8);
  iVar1 = FUN_001f48c0(0xc);
  FUN_001eea30(*piRam0036f42c + iVar1 * 0x4f4 + 4,0x69,9,*(undefined4 *)(param_1 + 0xcc0));
  FUN_002ef1c0(param_1);
  FUN_002ee830(param_1,1);
  FUN_002ee670(param_1,1);
  FUN_002ed390(param_1,0);
  iVar1 = FUN_001f48c0(0xc);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f4440  size 0xdf0
void FUN_002f4440(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 auStack_40 [64];
  
  lVar7 = FUN_002f81d0(param_1 + 0xc44);
  if (lVar7 != 0) {
    uVar4 = FUN_001f4890(0x3f);
    iVar5 = FUN_001f48c0(0x13);
    iVar5 = *piRam0036f42c + iVar5 * 0x4f4;
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
    uVar4 = FUN_001f4890(0x40);
    iVar5 = FUN_001f48c0(0x13);
    iVar5 = *piRam0036f42c + iVar5 * 0x4f4;
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
    uVar4 = FUN_001f4890(0x19);
    iVar5 = FUN_001f48c0(0xf);
    iVar5 = *piRam0036f42c + iVar5 * 0x4f4;
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
    uVar4 = FUN_001f4890(0x1a);
    iVar5 = FUN_001f48c0(0xf);
    iVar5 = *piRam0036f42c + iVar5 * 0x4f4;
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
    uVar4 = FUN_001f4890(0x21);
    iVar5 = FUN_001f48c0(0xb);
    iVar5 = *piRam0036f42c + iVar5 * 0x4f4;
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
    uVar4 = FUN_001f4890(0x22);
    iVar5 = FUN_001f48c0(0xb);
    iVar5 = *piRam0036f42c + iVar5 * 0x4f4;
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
    uVar4 = FUN_001f4890(0x23);
    iVar5 = FUN_001f48c0(0xb);
    iVar5 = *piRam0036f42c + iVar5 * 0x4f4;
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
    uVar4 = FUN_001f4890(0x24);
    iVar5 = FUN_001f48c0(0xb);
    iVar5 = *piRam0036f42c + iVar5 * 0x4f4;
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
    iVar5 = FUN_001f48c0(0xb);
    FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4,0x9e,8);
    iVar5 = FUN_001f48c0(0xb);
    FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4,0x9f,8);
    iVar6 = FUN_001f48c0(0xb);
    iVar5 = *piRam0036f42c;
    uVar11 = FUN_001f4890(0x42);
    FUN_001ed2c0(iVar5 + iVar6 * 0x4f4 + 4,5,0x9e,uVar11,1);
    iVar6 = FUN_001f48c0(0xb);
    iVar5 = *piRam0036f42c;
    uVar11 = FUN_001f4890(0x43);
    FUN_001ed2c0(iVar5 + iVar6 * 0x4f4 + 4,6,0x9f,uVar11,1);
    iVar5 = FUN_001f48c0(0x13);
    FUN_001eea30(*piRam0036f42c + iVar5 * 0x4f4 + 4,0xc,0x16,7);
  }
  lVar7 = FUN_00201260(0xf,0);
  lVar8 = FUN_00201260(0xb,0);
  lVar9 = FUN_00201260(0x13,0);
  if (lVar9 == 0 && (lVar7 == 0 && lVar8 == 0)) {
    FUN_002f81a0(param_1 + 0xc44);
  }
  lVar7 = FUN_002f81b0(param_1 + 0xc44);
  if (lVar7 != 0) {
    lVar7 = FUN_00201260(0xf,1);
    lVar8 = FUN_00201260(0xb,1);
    lVar9 = FUN_00201260(0x13,1);
    if (lVar9 == 0 && (lVar7 == 0 && lVar8 == 0)) {
      FUN_002f8170(param_1 + 0xc44);
      iVar5 = FUN_001f48c0(0x13);
      FUN_001eea30(*piRam0036f42c + iVar5 * 0x4f4 + 4,0xc,0x16,6);
    }
    iVar5 = FUN_001f48c0(0xb);
    FUN_001eeb00(0,*piRam0036f42c + iVar5 * 0x4f4 + 4,0x9e,8);
    iVar5 = FUN_001f48c0(0xb);
    FUN_001eeb00(0,*piRam0036f42c + iVar5 * 0x4f4 + 4,0x9f,8);
  }
  FUN_00201260(0xb,5);
  FUN_00201260(0xb,6);
  lVar7 = FUN_002f81c0(param_1 + 0xc44);
  if ((lVar7 == 0) && (lVar7 = FUN_002f81b0(param_1 + 0xc44), lVar7 == 0)) {
    if (*(int *)(param_1 + 0xd7c) == 0) {
      lVar7 = FUN_002f81c0(param_1 + 0xc44);
      if ((lVar7 == 0) && (lVar7 = FUN_002f81b0(param_1 + 0xc44), lVar7 == 0)) {
        FUN_002f8ad0(1);
        FUN_00200d70(0xb,*(undefined4 *)
                          (*(int *)(param_1 + 0x123c) * 0x10 +
                          ((*(int *)(param_1 + 0x1234) +
                           (*(int *)(param_1 + 0x1238) - *(int *)(param_1 + 0x1240))) %
                          *(int *)(param_1 + 0x1234)) * 0x30 + 0x343064),0,0);
      }
      goto LAB_002f45e8;
    }
    FUN_002f8ad0(0);
    if (*(int *)(param_1 + 0xd7c) != 1) {
      lVar7 = FUN_00201260(0xb,3);
      if (lVar7 == 0) {
        *(undefined4 *)(param_1 + 0xd7c) = 0;
        iVar5 = FUN_001f48c0(0xb);
        iVar5 = *piRam0036f42c + iVar5 * 0x4f4;
        *(undefined4 *)(iVar5 + 0x34c) = 0;
        if (*(int *)(iVar5 + 0x35c) == 0) {
          *(undefined4 *)(iVar5 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar5 + 0x358) = 1;
        }
        FUN_00200fc0(0);
      }
      goto LAB_002f45e8;
    }
    lVar7 = FUN_00201260(0xb,2);
    if (lVar7 != 0) goto LAB_002f45e8;
    *(undefined4 *)(param_1 + 0xd7c) = 0;
    iVar5 = FUN_001f48c0(0xb);
    iVar5 = *piRam0036f42c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    FUN_00200fc0(0);
    iVar5 = *(int *)(param_1 + 0x1238);
  }
  else {
LAB_002f45e8:
    iVar5 = *(int *)(param_1 + 0x1238);
  }
  iVar5 = *(int *)(param_1 + 0x123c) + iVar5 * 3;
  if (iVar5 < 0x10d) {
    iVar5 = *(int *)(iVar5 * 4 + param_1 + 0xdfc);
  }
  else {
    iVar5 = 0x10d;
  }
  FUN_002011b0(0xf,0x24,0x37);
  iVar6 = FUN_001f48c0(0xf);
  FUN_001ede20(*piRam0036f42c + iVar6 * 0x4f4 + 4,auStack_40,0x25);
  uVar11 = FUN_002b8ed0(*(undefined4 *)(param_1 + 0xca4));
  FUN_001f12c0(auStack_40,uVar11,0);
  FUN_00201140(0xf,0x18,1,0x38);
  if ((iVar5 == 0) || (0x10c < iVar5)) {
    FUN_002011b0(0xf,0x19,6);
  }
  else {
    iVar6 = FUN_002bc130(iVar5);
    if (*(int *)(iVar6 + 4) == 0) {
      FUN_002011b0(0xf,0x19,0x3e);
    }
    else {
      FUN_00201140(0xf,0x19,4,0x3d);
    }
  }
  FUN_00201140(0xf,0x1a,1,0x39);
  if ((iVar5 == 0) || (0x10c < iVar5)) {
    FUN_002011b0(0xf,0x1b,6);
  }
  else {
    iVar6 = FUN_002bc130(iVar5);
    if (*(char *)(iVar6 + 10) == '\0') {
      FUN_002011b0(0xf,0x1b,0x51);
    }
    else {
      iVar6 = FUN_002bc130(iVar5);
      if (*(char *)(iVar6 + 9) == '\0') {
        iVar6 = FUN_002bc130(iVar5);
        FUN_002010a0(0xf,0x1b,0x4f,*(undefined1 *)(iVar6 + 10));
        iVar6 = *(int *)(param_1 + 0x1230);
        goto LAB_002f4770;
      }
      iVar6 = FUN_002bc130(iVar5);
      uVar1 = *(undefined1 *)(iVar6 + 9);
      iVar6 = FUN_002bc130(iVar5);
      FUN_002010a0(0xf,0x1b,0x50,uVar1,*(undefined1 *)(iVar6 + 10));
    }
  }
  iVar6 = *(int *)(param_1 + 0x1230);
LAB_002f4770:
  FUN_002010a0(0xf,0x1c,8,iVar6 + -1,0x10c);
  FUN_00201140(0xf,0x1d,1,0x3a);
  FUN_002010a0(0xf,0x1e,5,0,*(int *)(param_1 + 0xcc0) + 1);
  FUN_00201140(0xf,0x1f,1,0x3b);
  if ((iVar5 == 0) || (0x10c < iVar5)) {
    FUN_002011b0(0xf,0x20,6);
  }
  else {
    iVar5 = FUN_002bc130(iVar5);
    FUN_002010a0(0xf,0x20,5,0,*(undefined1 *)(iVar5 + 8));
  }
  uVar10 = FUN_002f8aa0();
  if ((uVar10 & 0x2000) == 0) {
    FUN_00201140(0xf,0x21,1,0x3c);
    iVar5 = FUN_001f48c0(0xf);
    FUN_001eeb00(0,*piRam0036f42c + iVar5 * 0x4f4 + 4,7,8);
    uVar1 = *(undefined1 *)(param_1 + 0x1245);
  }
  else {
    FUN_00201140(0xf,0x21,0,0x3c);
    iVar5 = FUN_001f48c0(0xf);
    FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4,7,8);
    uVar1 = *(undefined1 *)(param_1 + 0x1245);
  }
  FUN_002010a0(0xf,0x22,5,1,uVar1);
  FUN_002011b0(0x13,0xd,0x4e);
  iVar5 = 0;
  puVar15 = &DAT_00343060;
  do {
    iVar6 = 0;
    puVar14 = puVar15;
    do {
      if ((*(int *)(param_1 + 0xd7c) == 1) && (iVar5 == 6)) {
        iVar12 = (*(int *)(param_1 + 0x1240) + -1 + *(int *)(param_1 + 0x1234)) %
                 *(int *)(param_1 + 0x1234);
      }
      else {
        iVar12 = (*(int *)(param_1 + 0x1240) + iVar5) % *(int *)(param_1 + 0x1234);
      }
      iVar12 = iVar6 + iVar12 * 3;
      if (iVar12 < *(int *)(param_1 + 0x1230)) {
        iVar12 = param_1 + iVar12 * 4;
        puVar13 = (undefined4 *)(iVar12 + 0xdfc);
        FUN_002010a0(0xb,puVar14[2],0xb,0,*(undefined4 *)(iVar12 + 0xdfc));
        iVar2 = FUN_001f48c0(0xb);
        iVar12 = *piRam0036f42c;
        iVar3 = FUN_002bc130(*puVar13);
        FUN_002e96a0(iVar12 + iVar2 * 0x4f4 + 4,*puVar14,9,*(undefined1 *)(iVar3 + 0xb));
        uVar11 = FUN_002f5e60(*puVar13);
        FUN_002011b0(0xb,puVar14[3],uVar11);
      }
      else {
        iVar12 = FUN_001f48c0(0xb);
        FUN_001eea30(*piRam0036f42c + iVar12 * 0x4f4 + 4,*puVar14,9,0);
        FUN_002011b0(0xb,puVar14[2],6);
      }
      iVar6 = iVar6 + 1;
      puVar14 = puVar14 + 4;
    } while (iVar6 < 3);
    iVar5 = iVar5 + 1;
    puVar15 = puVar15 + 0xc;
  } while (iVar5 < 7);
  FUN_002010a0(0xb,0x9c,0x35,5,0);
  FUN_002010a0(0xb,0xa0,0x36,5,0);
  iVar5 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4);
  iVar5 = FUN_001f48c0(0xe);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4);
  iVar5 = FUN_001f48c0(0xf);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4);
  FUN_002f5e70(0xb,3,4,200,*(undefined4 *)(param_1 + 0x1234),6,*(undefined4 *)(param_1 + 0x1240));
  iVar5 = FUN_001f48c0(0xb);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4);
  return;
}

// 0x002f5230  size 0x27c
void FUN_002f5230(int param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  FUN_002f81d0(param_1 + 0xc44);
  FUN_002f81a0(param_1 + 0xc44);
  lVar2 = FUN_002f81b0(param_1 + 0xc44);
  if (lVar2 != 0) {
    FUN_002f8170(param_1 + 0xc44);
  }
  FUN_002ef5f0(param_1);
  iVar7 = 0;
  puVar5 = &DAT_00343350;
  puVar4 = &DAT_00343370;
  iVar6 = param_1;
  do {
    if (*(int *)(iVar6 + 0xd08) == 0) {
      iVar1 = FUN_001f48c0(0xc);
      FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*puVar5,8);
    }
    else {
      iVar1 = FUN_001f48c0(0xc);
      FUN_001eeb00(0x3ecccccd,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*puVar5,8);
    }
    if (*(int *)(iVar6 + 0xd28) == 0) {
      iVar1 = FUN_001f48c0(0xc);
      FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*puVar4,8);
    }
    else {
      iVar1 = FUN_001f48c0(0xc);
      FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*puVar4,8);
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 4;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar7 < 8);
  iVar6 = FUN_001f48c0(0xc);
  FUN_001eea30(*piGpffff8d3c + iVar6 * 0x4f4 + 4,0x69,9,*(undefined4 *)(param_1 + 0xcc0));
  FUN_002ef1c0(param_1);
  FUN_002ee830(param_1,0);
  FUN_002ee670(param_1,0);
  FUN_002ed390(param_1,1);
  iVar6 = FUN_001f48c0(0xc);
  uVar8 = (uint)(*(float *)(param_1 + 0xcb8) + 16.0);
  uVar3 = uVar8 & 0xf;
  if (((int)uVar8 < 0) && (uVar3 != 0)) {
    uVar3 = uVar3 - 0x10;
  }
  FUN_001eea30(*piGpffff8d3c + iVar6 * 0x4f4 + 4,0x55,9,uVar3);
  iVar6 = FUN_001f48c0(0xc);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar6 * 0x4f4 + 4);
  return;
}

// 0x002f54b0  size 0x254
void FUN_002f54b0(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  lVar3 = FUN_002f81d0(param_1 + 0xc44);
  if (lVar3 != 0) {
    iVar1 = FUN_001f48c0(0xc);
    FUN_001eea30(*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x55,9,0);
  }
  FUN_002f81a0(param_1 + 0xc44);
  lVar3 = FUN_002f81b0(param_1 + 0xc44);
  if (lVar3 != 0) {
    FUN_002f8170(param_1 + 0xc44);
  }
  FUN_002ef5f0(param_1);
  iVar6 = 0;
  puVar5 = &DAT_00343350;
  puVar4 = &DAT_00343370;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0xd08) == 0) {
      iVar2 = FUN_001f48c0(0xc);
      FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,*puVar5,8);
    }
    else {
      iVar2 = FUN_001f48c0(0xc);
      FUN_001eeb00(0x3ecccccd,*piGpffff8d3c + iVar2 * 0x4f4 + 4,*puVar5,8);
    }
    if (*(int *)(iVar1 + 0xd28) == 0) {
      iVar2 = FUN_001f48c0(0xc);
      FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,*puVar4,8);
    }
    else {
      iVar2 = FUN_001f48c0(0xc);
      FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4,*puVar4,8);
    }
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + 4;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar6 < 8);
  iVar1 = FUN_001f48c0(0xc);
  FUN_001eea30(*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x69,9,*(undefined4 *)(param_1 + 0xcc0));
  FUN_002ef1c0(param_1);
  FUN_002ee830(param_1,1);
  FUN_002ee670(param_1,1);
  FUN_002ed390(param_1,1);
  iVar1 = FUN_001f48c0(0xc);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f5710  size 0x54
void FUN_002f5710(undefined8 param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x30) == 0) {
    iVar1 = FUN_002f8200((int)param_1 + 0xc44);
    (*(code *)(&PTR_FUN_00342db0)[iVar1])(param_1);
    FUN_002f7650(param_1);
  }
  return;
}

// 0x002f5770  size 0x40
void FUN_002f5770(undefined8 param_1)

{
  if (*(int *)((int)param_1 + 0xc40) != 0) {
    FUN_00100290();
    *(undefined4 *)((int)param_1 + 0xc40) = 0;
  }
  FUN_002f7b50(param_1);
  return;
}

// 0x002f57b0  size 0x2f8
void FUN_002f57b0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar4 = FUN_002f8340();
  uVar5 = FUN_002f8330();
  FUN_002f7a60(param_1,0x430750,1,uVar4,uVar5,0x50010);
  FUN_002f7bb0(param_1,0x17fe,0);
  uVar4 = FUN_001c1890(0);
  uVar6 = FUN_001bdd00(uVar4);
  if ((uVar6 & 0x200000) == 0) {
    iVar1 = FUN_001f48c0(0xc);
    FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x44,8);
    iVar1 = FUN_001f48c0(0xc);
    FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x45,8);
  }
  else {
    iVar1 = FUN_001f48c0(0xc);
    FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x44,8);
    iVar1 = FUN_001f48c0(0xc);
    FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x45,8);
  }
  uVar2 = FUN_001f4890(0);
  iVar1 = FUN_001f48c0(0);
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
  *(undefined4 *)(iVar1 + 0x318) = 1;
  *(undefined4 *)(iVar1 + 800) = uVar2;
  *(undefined4 *)(iVar1 + 0x31c) = 1;
  iVar3 = FUN_001f48c0(8);
  iVar1 = *piGpffff8d3c;
  uVar4 = FUN_001f4890(0x42);
  FUN_001ed2c0(iVar1 + iVar3 * 0x4f4 + 4,5,0x8f,uVar4,1);
  iVar3 = FUN_001f48c0(8);
  iVar1 = *piGpffff8d3c;
  uVar4 = FUN_001f4890(0x43);
  FUN_001ed2c0(iVar1 + iVar3 * 0x4f4 + 4,6,0x90,uVar4,1);
  iVar1 = FUN_001f48c0(0xd);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x24,8);
  uVar8 = 0;
  puVar7 = &DAT_00342ef0;
  do {
    iVar1 = FUN_001f48c0(8);
    FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,puVar7[6],8);
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 7;
  } while (uVar8 < 0xd);
  uVar2 = FUN_00100680(0x1cb600,0x430750);
  *(undefined4 *)((int)param_1 + 0xc40) = uVar2;
  return;
}

// 0x002f5ab0  size 0x214
void FUN_002f5ab0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  pcVar1 = *(char **)(param_1 + 0x14);
  uVar3 = FUN_002bc1f0();
  lVar4 = FUN_002bc0b0(uVar3);
  if ((lVar4 != 0) && (lVar4 = FUN_001f4ac0(), lVar4 == 0)) {
    FUN_002f8350();
    if (*pcVar1 == '\0') {
      uVar3 = FUN_002f85b0();
      iVar2 = FUN_002f8570();
      (*(code *)(&PTR_FUN_003433b0)[iVar2 * 3])(uVar3);
      uVar3 = FUN_002f85b0();
      iVar2 = FUN_002f8570();
      (*(code *)(&PTR_FUN_003433e0)[iVar2 * 3])(uVar3);
      *pcVar1 = '\x01';
    }
    if (*pcVar1 == '\x01') {
      uVar3 = FUN_002f85b0();
      iVar2 = FUN_002f8570();
      (*(code *)(&PTR_FUN_003433b4)[iVar2 * 3])(uVar3);
      uVar3 = FUN_002f85b0();
      iVar2 = FUN_002f8570();
      (*(code *)(&PTR_FUN_003433e4)[iVar2 * 3])(uVar3);
      lVar4 = FUN_002f86e0();
      if ((lVar4 != 0) && (lVar4 = FUN_002f8550(), lVar4 == 3)) {
        FUN_002f8540(0);
        *pcVar1 = '\x02';
      }
    }
    else if (*pcVar1 == '\x02') {
      uVar3 = FUN_002f85b0();
      iVar2 = FUN_002f8570();
      (*(code *)(&PTR_LAB_003433e8)[iVar2 * 3])(uVar3);
      uVar3 = FUN_002f85b0();
      iVar2 = FUN_002f8570();
      (*(code *)(&PTR_LAB_003433b8)[iVar2 * 3])(uVar3);
      FUN_002f8620();
      *pcVar1 = '\0';
    }
  }
  return;
}

// 0x002f5cd0  size 0x3c
void FUN_002f5cd0(void)

{
  FUN_002f8ae0();
  FUN_002f8700();
  FUN_002bc200();
  FUN_00201300();
  FUN_001f05b0();
  return;
}

// 0x002f5d10  size 0x148
void FUN_002f5d10(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar1 = *(undefined1 **)(param_1 + 0x14);
  FUN_0017e8c0(8);
  FUN_001f0760(0x430750,0x187c,0x160);
  FUN_00201330(0x430750);
  FUN_00154760(0xfff);
  FUN_00154d50(8,0x100);
  FUN_00154d50(9,0x100);
  FUN_00154d50(1,0x100);
  lVar3 = FUN_002bc1f0();
  if (lVar3 == 0) {
    FUN_002bc3f0(0x430750,1,0xffff);
  }
  FUN_002f8760(0x430750,0);
  FUN_002f8b10(0x430750,0);
  uVar4 = FUN_001c1890(0);
  iVar2 = FUN_0017bf40();
  iVar5 = 0;
  do {
    lVar3 = FUN_001c0f00(uVar4,iVar5);
    if (lVar3 != 0) {
      *(undefined4 *)(iVar2 + 0x9660) = 1;
    }
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar5 < 0xb9);
  *puVar1 = 0;
  *(code **)(param_1 + 0x1c) = FUN_002f5ab0;
  return;
}

// 0x002f5e60  size 0x8
int FUN_002f5e60(int param_1)

{
  return param_1 + 0x52;
}

// 0x002f5e70  size 0x320
void FUN_002f5e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 ulong param_5,ulong param_6,int param_7)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (param_6 < param_5) {
    fVar2 = (float)((int)(param_7 * param_4) / (int)param_5 + 0x10);
    uVar1 = (int)(param_4 * (int)param_6) / (int)param_5;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    fVar5 = (float)uVar1;
    fVar4 = fVar2 + fVar5;
    if ((float)(param_4 + 0x10) < fVar4) {
      iVar3 = FUN_001f48c0(param_1);
      FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4,param_3,8);
      iVar3 = FUN_001f48c0(param_1);
      FUN_001f5380(*piGpffff8d3c + iVar3 * 0x4f4 + 4,param_3,2,0x10);
      iVar3 = FUN_001f48c0(param_1);
      FUN_001eeb00((fVar4 - (float)(param_4 + 0x10)) / 16.0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,
                   param_3,6);
      fVar5 = (float)(param_4 + 0x10) - fVar2;
    }
    else {
      iVar3 = FUN_001f48c0(param_1);
      FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,param_3,8);
    }
  }
  else {
    fVar2 = 16.0;
    fVar5 = (float)param_4;
  }
  iVar3 = FUN_001f48c0(param_1);
  FUN_001eeb00(fVar2,*piGpffff8d3c + iVar3 * 0x4f4 + 4,param_2,2);
  iVar3 = FUN_001f48c0(param_1);
  FUN_001eeb00(fVar5 / 16.0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,param_2,6);
  return;
}

// 0x002f6190  size 0x260
undefined4 FUN_002f6190(uint *param_1,long param_2,uint param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *param_1;
  iVar9 = 0;
  if (param_2 == 0) {
    uVar4 = FUN_002f8a90();
    if ((uVar4 & 0x400004) == 0) {
      uVar4 = FUN_002f8a90();
      if ((uVar4 & 0x800008) != 0) {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = -1;
    }
  }
  else if (param_2 == 1) {
    uVar4 = FUN_002f8a90();
    if ((uVar4 & 0x100010) == 0) {
      uVar4 = FUN_002f8a90();
      if ((uVar4 & 0x200020) != 0) {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = -1;
    }
  }
  iVar7 = param_3 + 1;
  uVar2 = 0;
  if (0 < iVar7) {
    do {
      if (param_4 == 0) {
        uVar6 = *param_1 + iVar9;
        if ((int)uVar6 < 0) {
          *param_1 = 0;
        }
        else {
          if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          *param_1 = uVar6;
        }
      }
      else {
        uVar5 = *param_1 + iVar9;
        uVar6 = param_3;
        if ((-1 < (int)uVar5) && (uVar6 = uVar5, (int)param_3 < (int)uVar5)) {
          uVar6 = 0;
        }
        *param_1 = uVar6;
      }
      if ((param_5 == 0) || ((param_5 & 1 << (*param_1 & 0x1f)) != 0)) break;
      if ((uVar2 == param_3) && ((param_4 == 0 && (iVar8 = 0, 0 < iVar7)))) {
        do {
          uVar6 = *param_1 - iVar9;
          if ((int)uVar6 < 0) {
            *param_1 = 0;
          }
          else {
            if ((int)param_3 < (int)uVar6) {
              uVar6 = param_3;
            }
            *param_1 = uVar6;
          }
          if ((param_5 == 0) || ((param_5 & 1 << (*param_1 & 0x1f)) != 0)) break;
          if (uVar2 == param_3) {
            *param_1 = uVar1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar7);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar7);
  }
  if (uVar1 == *param_1) {
    if (iVar9 != 0) {
      FUN_002062d0(8,0x60);
    }
    uVar3 = 0;
  }
  else {
    FUN_002062d0(7,0x60);
    uVar3 = 1;
  }
  return uVar3;
}

// 0x002f63f0  size 0x44
bool FUN_002f63f0(char param_1)

{
  uint uVar1;
  
  if (param_1 < '\0') {
    uVar1 = *puRam0042d874;
  }
  else {
    uVar1 = (int)*puRam0042d874 >> ((int)param_1 & 0x1fU) & 1;
  }
  return uVar1 == 0;
}

// 0x002f6440  size 0xa0
bool FUN_002f6440(char param_1)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = iRam0042d874 + 4;
  if ((long)param_1 < 0) {
    bVar2 = *(int *)(iRam0042d874 + 8) == 0;
  }
  else {
    iVar6 = 0;
    do {
      iVar5 = 0;
      do {
        bVar1 = *(byte *)(iVar4 + iVar5 + 8);
        if ((bVar1 & 0x80) == 0) {
          uVar3 = 0xffffffffffffffff;
        }
        else {
          uVar3 = (ulong)bVar1 & 0x70;
        }
        if (uVar3 != 0) {
          if ((bVar1 & 0x80) == 0) {
            uVar3 = 0xffffffffffffffff;
          }
          else {
            uVar3 = (ulong)bVar1 & 0xf;
          }
          if ((long)param_1 == uVar3) {
            return false;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x18);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar6 < 2);
    bVar2 = true;
  }
  return bVar2;
}

// 0x002f64e0  size 0x210
/* WARNING: Removing unreachable block (ram,0x002f6538) */
/* WARNING: Removing unreachable block (ram,0x002f6548) */

undefined4 FUN_002f64e0(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar3 = FUN_002bc1f0();
  if ((param_1[1] & 0x80) == 0) {
    param_1[1] = 0;
    param_1[2] = 0xffffffff;
    lVar4 = FUN_002b9290(uVar3);
    if (lVar4 == 0) {
      uVar1 = 1;
      param_1[1] = param_1[1] | 1;
      param_1[2] = 0xffffffff;
    }
    else {
      FUN_002b8ca0(uVar3,&uStack_4,&uStack_8);
      FUN_002b8c30(uVar3,&uStack_c,&uStack_10);
      FUN_002b8bc0(uVar3,&uStack_14,&uStack_18);
      cVar5 = (char)*param_1;
      if (cVar5 < '\0') {
        uVar2 = *puRam0042d874;
      }
      else {
        uVar2 = (int)*puRam0042d874 >> ((int)cVar5 & 0x1fU) & 1;
      }
      if ((((uVar2 == 0) && (lVar4 = FUN_002f6440(cVar5), lVar4 != 0)) &&
          (cVar5 = FUN_00155be0(*param_1), cVar5 == '\0')) &&
         (lVar4 = FUN_001559d0(*param_1,uStack_4,uStack_8,uStack_c,uStack_10,uStack_14,uStack_18),
         lVar4 != 0)) {
        uVar1 = 1;
        param_1[1] = param_1[1] | 2;
        param_1[2] = 0;
      }
      else {
        uVar1 = 0;
        param_1[1] = param_1[1] & 0xfffffffd;
        param_1[2] = 0xffffffff;
      }
    }
  }
  else {
    if (((param_1[1] & 0x80) != 0) && (lVar4 = FUN_00154870(*param_1), lVar4 != 0)) {
      param_1[1] = param_1[1] & 0xffffff7f;
    }
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002f66f0  size 0x2a0
/* WARNING: Removing unreachable block (ram,0x002f679c) */
/* WARNING: Removing unreachable block (ram,0x002f67ac) */

undefined4 FUN_002f66f0(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  char cVar9;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar7 = FUN_002bc1f0();
  iVar1 = param_1[2];
  iVar3 = FUN_002b8e40(uVar7,param_2);
  if (iVar3 == iVar1) {
    bVar2 = true;
    if (((param_1[1] & 2) == 0) && ((param_1[1] & 1) == 0)) {
      bVar2 = false;
    }
    if (bVar2) {
      return 1;
    }
  }
  if ((param_1[1] & 0x80) == 0) {
    param_1[1] = 0;
    param_1[2] = 0xffffffff;
    lVar8 = FUN_002b8e40(uVar7,param_2);
    if (lVar8 < 1) {
      uVar6 = 1;
      param_1[1] = param_1[1] | 1;
      param_1[2] = 0xffffffff;
    }
    else {
      lVar8 = FUN_002b8fc0(uVar7,param_2);
      if (lVar8 == 0) {
        uVar6 = 0;
      }
      else {
        FUN_002b8d50(uVar7,param_2,&uStack_4,&uStack_8);
        FUN_002b8d30(uVar7,param_2,&uStack_c,&uStack_10);
        FUN_002b8d10(uVar7,param_2,&uStack_14,&uStack_18);
        uVar4 = FUN_002b8e40(uVar7,param_2);
        cVar9 = (char)*param_1;
        if (cVar9 < '\0') {
          uVar5 = *puRam0042d874;
        }
        else {
          uVar5 = (int)*puRam0042d874 >> ((int)cVar9 & 0x1fU) & 1;
        }
        if ((((uVar5 == 0) && (lVar8 = FUN_002f6440(cVar9), lVar8 != 0)) &&
            (cVar9 = FUN_00155be0(*param_1), cVar9 == '\0')) &&
           (lVar8 = FUN_001559d0(*param_1,uStack_4,uStack_8,uStack_c,uStack_10,uStack_14,uStack_18),
           lVar8 != 0)) {
          uVar6 = 1;
          param_1[1] = param_1[1] | 2;
          param_1[2] = uVar4;
        }
        else {
          uVar6 = 0;
          param_1[1] = param_1[1] & 0xfffffffd;
          param_1[2] = 0xffffffff;
        }
      }
    }
  }
  else {
    if (((param_1[1] & 0x80) != 0) && (lVar8 = FUN_00154870(*param_1), lVar8 != 0)) {
      param_1[1] = param_1[1] & 0xffffff7f;
    }
    uVar6 = 0;
  }
  return uVar6;
}

// 0x002f6990  size 0x24c
/* WARNING: Removing unreachable block (ram,0x002f6a40) */
/* WARNING: Removing unreachable block (ram,0x002f6a50) */

undefined4 FUN_002f6990(undefined4 *param_1,long param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar6 = FUN_002bc1f0();
  if ((param_2 < 0) || (0x10c < param_2)) {
    uVar5 = 0;
  }
  else {
    uVar4 = param_1[2];
    uVar3 = FUN_002bc110(param_2);
    if ((uVar3 & 0xffff) == uVar4) {
      bVar1 = true;
      if (((param_1[1] & 2) == 0) && ((param_1[1] & 1) == 0)) {
        bVar1 = false;
      }
      if (bVar1) {
        return 1;
      }
    }
    if ((param_1[1] & 0x80) == 0) {
      param_1[1] = 0;
      param_1[2] = 0xffffffff;
      sVar2 = FUN_002bc110(param_2);
      if (sVar2 == 0) {
        uVar5 = 1;
        param_1[1] = param_1[1] | 1;
        param_1[2] = 0xffffffff;
      }
      else {
        FUN_002b8d70(uVar6,param_2,&uStack_4,&uStack_8,&uStack_c);
        uVar4 = FUN_002bc110(param_2);
        cVar8 = (char)*param_1;
        if (cVar8 < '\0') {
          uVar3 = *puRam0042d874;
        }
        else {
          uVar3 = (int)*puRam0042d874 >> ((int)cVar8 & 0x1fU) & 1;
        }
        if ((((uVar3 == 0) && (lVar7 = FUN_002f6440(cVar8), lVar7 != 0)) &&
            (cVar8 = FUN_00155be0(*param_1), cVar8 == '\0')) &&
           (lVar7 = FUN_00155ac0(*param_1,uStack_4,uStack_8,uStack_c,0), lVar7 != 0)) {
          uVar5 = 1;
          param_1[1] = param_1[1] | 2;
          param_1[2] = uVar4 & 0xffff;
        }
        else {
          uVar5 = 0;
          param_1[1] = param_1[1] & 0xfffffffd;
          param_1[2] = 0xffffffff;
        }
      }
    }
    else {
      if (((param_1[1] & 0x80) != 0) && (lVar7 = FUN_00154870(*param_1), lVar7 != 0)) {
        param_1[1] = param_1[1] & 0xffffff7f;
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}

// 0x002f6be0  size 0x4c
undefined4 FUN_002f6be0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0017bf40();
  iVar2 = 0;
  do {
    if (param_1 == *piVar1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0xc);
  return 0;
}

// 0x002f6c30  size 0xc
void FUN_002f6c30(void)

{
  uGpffff880c = 2;
  return;
}

// 0x002f6c40  size 0x138
int FUN_002f6c40(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (iGpffff880c == 2) {
    lVar2 = FUN_00201260(uGpffff8804,1);
    if (lVar2 == 0) {
      iGpffff880c = 3;
    }
  }
  else if ((iGpffff880c == 0) && (lVar2 = FUN_00201260(uGpffff8804,0), lVar2 == 0)) {
    iGpffff880c = 1;
  }
  FUN_002011b0(uGpffff8804,uGpffff8808,param_1);
  if (iGpffff9250 == 1) {
    FUN_002011b0(4,0x1b,9);
    FUN_002011b0(4,0x1d,10);
    if (iGpffff880c == 1) {
      FUN_00200d70(4,*(undefined4 *)((int)register0x000001c0 + param_2 * 4 + -0x77f0),1,0);
    }
    else {
      FUN_00200ef0(0);
    }
  }
  FUN_00201260(uGpffff8804,2);
  iVar1 = FUN_001f48c0(uGpffff8804);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return iGpffff880c;
}

// 0x002f6d80  size 0x34c
void FUN_002f6d80(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uGpffff9250 = param_1 & 0xff;
  if (uGpffff9250 == 0) {
    uVar1 = FUN_001f4890(0x27);
    iVar2 = FUN_001f48c0(3);
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
    uVar1 = FUN_001f4890(0x28);
    iVar2 = FUN_001f48c0(3);
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
    uVar1 = FUN_001f4890(0x29);
    iVar2 = FUN_001f48c0(3);
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
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uGpffff8804 = 3;
    uGpffff8808 = 0xf;
  }
  else {
    uVar1 = FUN_001f4890(0x34);
    iVar2 = FUN_001f48c0(4);
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
    uVar1 = FUN_001f4890(0x35);
    iVar2 = FUN_001f48c0(4);
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
    uVar1 = FUN_001f4890(0x36);
    iVar2 = FUN_001f48c0(4);
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
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    FUN_00200ef0(0);
    FUN_00200fc0(0);
    uGpffff8804 = 4;
    uGpffff8808 = 0x1c;
  }
  uGpffff880c = 0;
  return;
}

// 0x002f70d0  size 0x30
char FUN_002f70d0(int *param_1)

{
  return s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500[*param_1 + param_1[1] * 0xd];
}

// 0x002f7100  size 0x68
undefined8 FUN_002f7100(int *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500[*param_1 + param_1[1] * 0xd];
  bVar2 = false;
  if ((cVar1 != '<') && (cVar1 != '>')) {
    bVar2 = true;
  }
  if ((bVar2) && (cVar1 != '\0')) {
    uVar3 = 1;
  }
  return uVar3;
}

// 0x002f7170  size 0x20
int FUN_002f7170(int *param_1)

{
  return *param_1 + param_1[1] * 0xd;
}

// 0x002f7190  size 0x2a0
undefined4 FUN_002f7190(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  piVar5 = (int *)param_1;
  uVar9 = 0;
  uVar7 = 0;
  pcVar6 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500 + *piVar5;
  do {
    if (*pcVar6 != '\0') {
      uVar9 = uVar9 | 1 << (uVar7 & 0x1f);
    }
    uVar7 = uVar7 + 1;
    pcVar6 = pcVar6 + 0xd;
  } while ((int)uVar7 < 6);
  uVar7 = 0;
  pcVar6 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500 + piVar5[1] * 0xd;
  do {
    if (*pcVar6 != '\0') {
      uVar8 = uVar8 | 1 << (uVar7 & 0x1f);
    }
    uVar7 = uVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while ((int)uVar7 < 0xd);
  FUN_002f6190(param_1,1,0xc,1,uVar8);
  FUN_002f6190(piVar5 + 1,0,5,1,uVar9);
  lVar4 = FUN_002f8ab0();
  if ((lVar4 == 0x100) || (lVar4 == 0x80)) {
    cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500[*piVar5 + piVar5[1] * 0xd];
    if (cVar1 == '>') {
      cVar1 = (char)piVar5[3];
      bVar2 = true;
      iVar3 = 0;
      do {
        if (cVar1 == '\0') {
LAB_002f7388:
          if (bVar2) {
            FUN_0012b470(piVar5 + 3,uGpffff8800,0x10);
            iVar3 = FUN_0012b338(piVar5 + 3);
            piVar5[2] = iVar3;
          }
          return 1;
        }
        if (*(char *)((int)piVar5 + iVar3 + 0xc) != ' ') {
          bVar2 = false;
          goto LAB_002f7388;
        }
        cVar1 = *(char *)((int)piVar5 + iVar3 + 0xd);
        iVar3 = iVar3 + 1;
      } while( true );
    }
    if (cVar1 == '<') {
      iVar3 = piVar5[2];
      if (0 < iVar3) {
        piVar5[2] = iVar3 + -1;
        *(undefined1 *)((int)piVar5 + iVar3 + 0xb) = 0;
      }
    }
    else {
      if (0xd < piVar5[2]) {
        *(char *)((int)piVar5 + 0x1a) = cVar1;
        *(undefined1 *)((int)piVar5 + 0x1b) = 0;
        iVar3 = FUN_0012b338(piVar5 + 3);
        piVar5[2] = iVar3;
        *piVar5 = 1;
        piVar5[1] = 5;
        return 1;
      }
      iVar3 = piVar5[2];
      piVar5[2] = iVar3 + 1;
      *(char *)((int)piVar5 + iVar3 + 0xc) = cVar1;
      *(undefined1 *)((int)piVar5 + piVar5[2] + 0xc) = 0;
    }
  }
  else if ((lVar4 == 0x200) || (lVar4 == 0x40)) {
    iVar3 = piVar5[2];
    if (iVar3 == 0) {
      return 2;
    }
    piVar5[2] = iVar3 + -1;
    *(undefined1 *)((int)piVar5 + iVar3 + 0xb) = 0;
  }
  else if (lVar4 == 2) {
    *piVar5 = 1;
    piVar5[1] = 5;
    FUN_002062d0(5,0x60);
  }
  return 0;
}

// 0x002f7430  size 0x50
void FUN_002f7430(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0012b470(param_1 + 3,param_2,0xf);
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  uVar1 = FUN_0012b338(param_1 + 3);
  param_1[2] = uVar1;
  *(undefined1 *)((int)param_1 + param_1[2] + 0xc) = 0;
  return;
}

// 0x002f7480  size 0x19c
void FUN_002f7480(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_1 == param_4[0xe]) {
    FUN_0013da70(param_4[1]);
    uVar1 = *(ushort *)(param_4[1] + 6);
    iVar2 = FUN_0013f270(param_4[1],0x412,0,0,0);
    if ((param_4[0xd] != 0) && (uVar6 = 0, uVar1 != 0)) {
      do {
        iVar3 = FUN_0013d9e0(param_4[1],uVar6);
        *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xc000;
        if (*(int *)(iVar3 + 4) != 0) {
          uVar5 = FUN_0013fe10(((ulong)*(ushort *)(iVar3 + 0x1a) & 0x3ff) >> 4,
                               *(undefined2 *)(iVar3 + 0x14),*(undefined2 *)(iVar3 + 0x16));
          *(ulong *)(iVar3 + 0x18) =
               *(ulong *)(iVar3 + 0x18) & 0xfff8001fffffffff | (uVar5 & 0x3fff) << 0x25;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    if (param_4[2] != 0) {
      FUN_00144b00(param_4 + 4,*param_4,iVar2 + 1);
      FUN_00158050(param_4 + 4,param_4[1],param_4[8],param_4[9]);
    }
    uVar4 = FUN_00100680((uint)uVar1 << 7,*param_4);
    param_4[3] = uVar4;
    FUN_00158160(param_4[3],param_4[1],param_4[2],param_4[8],param_4[9],param_4[10],0,0);
    param_4[0xc] = 0;
  }
  return;
}

// 0x002f7620  size 0x30
void FUN_002f7620(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0;
  return;
}

// 0x002f7650  size 0x2fc
void FUN_002f7650(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint auStack_c440 [12544];
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00158390(0,*(undefined2 *)(*(int *)(param_1 + 4) + 6),*(undefined4 *)(param_1 + 0xc));
    iVar6 = 0;
    iVar2 = param_1;
    do {
      if (0 < *(int *)(iVar2 + 0x93c)) {
        iVar4 = 0;
        puVar5 = auStack_c440;
        thunk_FUN_001466b0(auStack_40,2,2,0);
        FUN_001465c0(auStack_40,iVar6);
        if (*(int *)(param_1 + 8) != 0) {
          FUN_00145f10(auStack_40,param_1 + 0x10);
        }
        iVar3 = 0;
        iVar1 = param_1;
        do {
          if (iVar6 == *(int *)(iVar1 + 0x3c)) {
            FUN_0014f3b0(puVar5,4,0xffffffffffffffff);
            FUN_0014f2c0(puVar5,1,0,*(undefined4 *)(iVar1 + 0x48));
            puVar5[0xa7] = *(uint *)(iVar1 + 0x4c);
            *puVar5 = *puVar5 | 2;
            fVar7 = *(float *)(iVar1 + 0x50) * 128.0;
            if (2.1474836e+09 <= fVar7) {
              fVar7 = fVar7 - 2.1474836e+09;
            }
            puVar5[0xb3] = (int)fVar7 & 0xff;
            puVar5[0xb4] = 0;
            puVar5[0xb5] = 0;
            uVar8 = *(uint *)(iVar1 + 0x44);
            puVar5[0xbc] = *(uint *)(iVar1 + 0x40);
            puVar5[0xbd] = uVar8;
            uVar8 = *(uint *)(iVar1 + 0x58);
            uVar9 = *(uint *)(iVar1 + 0x54);
            *puVar5 = *puVar5 | 4;
            puVar5[0xb8] = uVar9;
            puVar5[0xb9] = uVar8;
            if (*(int *)(iVar1 + 0x5c) == 0) {
              *puVar5 = *puVar5 & 0xfffffdff;
            }
            else {
              *puVar5 = *puVar5 | 0x200;
            }
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 0xc4;
            if (*(int *)(iVar2 + 0x93c) <= iVar4) break;
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0x24;
        } while (iVar3 < 0x40);
        if (*(int *)(iVar2 + 0x950) != 0) {
          FUN_00145860(auStack_40,*(undefined4 *)(iVar2 + 0x940),*(undefined4 *)(iVar2 + 0x944),
                       *(undefined4 *)(iVar2 + 0x948),*(undefined4 *)(iVar2 + 0x94c),0);
        }
        FUN_0014b700(auStack_40,auStack_c440,((int)puVar5 - (int)auStack_c440) / 0x310);
        if (*(int *)(iVar2 + 0x950) != 0) {
          FUN_00145860(auStack_40,0,0,0,0,0);
        }
        FUN_00146570(auStack_40,0);
        *(undefined4 *)(iVar2 + 0x93c) = 0;
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar6 < 0x20);
    *(undefined4 *)(param_1 + 0xc3c) = 0;
  }
  return;
}

// 0x002f7960  size 0xbc
void FUN_002f7960(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((float)param_2[5] != 0.0) {
    iVar1 = param_1 + *(int *)(param_1 + 0xc3c) * 0x24;
    *(undefined4 *)(iVar1 + 0x3c) = *param_2;
    *(undefined4 *)(iVar1 + 0x40) = param_2[1];
    *(undefined4 *)(iVar1 + 0x44) = param_2[2];
    *(undefined4 *)(iVar1 + 0x48) = param_2[3];
    *(undefined4 *)(iVar1 + 0x4c) = param_2[4];
    *(undefined4 *)(iVar1 + 0x50) = param_2[5];
    *(undefined4 *)(iVar1 + 0x54) = param_2[6];
    *(undefined4 *)(iVar1 + 0x58) = param_2[7];
    *(undefined4 *)(iVar1 + 0x5c) = param_2[8];
    iVar1 = *(int *)(*(int *)(param_1 + 0xc3c) * 0x24 + param_1 + 0x3c) * 0x18 + param_1;
    *(int *)(iVar1 + 0x93c) = *(int *)(iVar1 + 0x93c) + 1;
    *(int *)(param_1 + 0xc3c) = *(int *)(param_1 + 0xc3c) + 1;
  }
  return;
}

// 0x002f7a20  size 0x38
void FUN_002f7a20(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6)

{
  param_1 = param_2 * 0x18 + param_1;
  *(int *)(param_1 + 0x940) = (int)param_3;
  *(int *)(param_1 + 0x944) = (int)param_4;
  *(int *)(param_1 + 0x948) = (int)param_5;
  *(int *)(param_1 + 0x94c) = (int)param_6;
  *(uint *)(param_1 + 0x950) =
       (uint)(param_6 != 0 || (param_5 != 0 || (param_3 != 0 || param_4 != 0)));
  return;
}

// 0x002f7a60  size 0xec
void FUN_002f7a60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0xf] = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0x3f800000;
    puVar1[0x15] = 0x3f800000;
    puVar1[0x16] = 0x3f800000;
    puVar1[0x17] = 0;
    puVar1 = puVar1 + 9;
  } while (iVar2 < 0x40);
  FUN_001325d0(param_1 + 0x24f,0,0x300);
  param_1[0x30f] = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_00144b80(param_1 + 4,0,0);
  return;
}

// 0x002f7b50  size 0x5c
void FUN_002f7b50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00100290();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00100290();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_00144aa0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

// 0x002f7bb0  size 0xb0
void FUN_002f7bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = (int)param_2 * 0x14 + iGpffff89d4;
  iVar1 = *(int *)(iVar4 + 0x20);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(iVar4 + 0x18);
  }
  else {
    uVar2 = iVar1 + 0x7ffU >> 0xb;
  }
  puVar5 = (undefined4 *)param_1;
  uVar3 = FUN_00100480(uVar2 << 0xb,0x40,*puVar5);
  puVar5[1] = uVar3;
  uVar3 = FUN_0014bf00(param_2,puVar5[1],0x2f7480,param_1,0,0);
  puVar5[0xe] = uVar3;
  puVar5[0xd] = param_3;
  puVar5[0xc] = 1;
  return;
}

// 0x002f7c60  size 0x8
undefined4 FUN_002f7c60(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0x002f7c70  size 0x8
undefined4 FUN_002f7c70(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0x002f7c80  size 0x8
undefined4 FUN_002f7c80(undefined4 *param_1)

{
  return *param_1;
}

// 0x002f7c90  size 0x58
undefined4 FUN_002f7c90(undefined4 *param_1)

{
  char cVar1;
  
  if ((param_1[1] & 2) == 0) {
    if ((param_1[1] & 1) != 0) {
      return 1;
    }
  }
  else {
    cVar1 = FUN_00155be0(*param_1);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

// 0x002f7cf0  size 0x28
undefined8 FUN_002f7cf0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((*(uint *)(param_1 + 4) & 2) == 0) && ((*(uint *)(param_1 + 4) & 1) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002f7d20  size 0x60
void FUN_002f7d20(undefined4 *param_1)

{
  long lVar1;
  
  if (((param_1[1] & 0x80) != 0) && (lVar1 = FUN_00154870(*param_1), lVar1 != 0)) {
    param_1[1] = param_1[1] & 0xffffff7f;
  }
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 0x002f7d80  size 0x1f8
undefined4 FUN_002f7d80(undefined4 *param_1,undefined8 param_2,short param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((param_1[1] & 1) != 0) goto LAB_002f7ea4;
  if ((param_1[1] & 2) == 0) {
    if ((param_1[1] & 1) == 0) goto LAB_002f7dd8;
    bVar1 = true;
  }
  else {
    cVar2 = FUN_00155be0(*param_1);
    if (cVar2 == '\0') {
      bVar1 = true;
    }
    else {
LAB_002f7dd8:
      bVar1 = false;
    }
  }
  if (((((!bVar1) || ((param_1[1] & 0x80) != 0)) || (lVar4 = FUN_00154a10(*param_1,0,0), lVar4 == 0)
       ) || ((lVar4 = FUN_00154980(*param_1,param_2), lVar4 == 0 || ((param_1[1] & 0x80) != 0)))) ||
     ((param_1[1] & 1) != 0)) goto LAB_002f7ea4;
  if ((param_1[1] & 2) == 0) {
    if ((param_1[1] & 1) == 0) goto LAB_002f7e68;
    bVar1 = true;
  }
  else {
    cVar2 = FUN_00155be0(*param_1);
    if (cVar2 == '\0') {
      bVar1 = true;
    }
    else {
LAB_002f7e68:
      bVar1 = false;
    }
  }
  if (bVar1) {
    lVar4 = FUN_001548f0(*param_1,0);
    if (lVar4 == 0) {
      param_1[1] = param_1[1] & 0xffffff7f;
    }
    else {
      param_1[1] = param_1[1] | 0x80;
    }
  }
LAB_002f7ea4:
  if ((param_1[1] & 0x80) == 0) {
    uVar3 = 0;
  }
  else {
    if ((0x13 < param_3) && (param_3 < 0x100)) {
      FUN_00154ba0(*param_1);
    }
    if ((-1 < param_4) && (param_4 <= '\x7f')) {
      FUN_00154cc0(*param_1,0,param_4);
      FUN_00154cc0(*param_1,1,param_4);
    }
    uVar3 = 1;
  }
  return uVar3;
}

// 0x002f7f80  size 0x58
undefined4 FUN_002f7f80(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (((param_1[1] & 0x80) == 0) || (lVar2 = FUN_00154870(*param_1), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    param_1[1] = param_1[1] & 0xffffff7f;
  }
  return uVar1;
}

// 0x002f7fe0  size 0x8
bool FUN_002f7fe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uStack_10;
  
  uVar1 = *param_1;
  bVar2 = iRam0042dafc < 0x30;
  if (bVar2) {
    iVar3 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar3 + 0x42db00) = 0x208;
    *(undefined4 *)(iVar3 + 0x42db04) = uVar1;
    *(undefined4 *)(iVar3 + 0x42db08) = param_2;
    *(undefined4 *)(iVar3 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar3 + 0x42db10) = uStack_10;
  }
  return bVar2;
}

// 0x002f7ff0  size 0x8
bool FUN_002f7ff0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uStack_10;
  
  uVar1 = *param_1;
  bVar2 = iRam0042dafc < 0x30;
  if (bVar2) {
    iVar3 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar3 + 0x42db00) = 0x209;
    *(undefined4 *)(iVar3 + 0x42db04) = uVar1;
    *(undefined4 *)(iVar3 + 0x42db08) = param_2;
    *(undefined4 *)(iVar3 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar3 + 0x42db10) = uStack_10;
  }
  return bVar2;
}

