// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00240000 - 0x00244000
#include "ghidra_types.h"

// 0x00240130  size 0x58c
void FUN_00240130(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar1 = false;
  }
  iVar2 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_001f4890(0x285);
    iVar2 = FUN_001f48c0(0x100);
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
    uVar3 = FUN_001f4890(0x286);
    iVar2 = FUN_001f48c0(0x100);
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
    if (*(int *)(param_1 + 0x5b8) != 0) {
      uVar3 = FUN_001f4890(0x288);
      iVar2 = FUN_001f48c0(0xf9);
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
    }
  }
  if (*(int *)(param_1 + 0x5c8) != 0) {
    lVar4 = FUN_00201260(0x100,0);
    lVar5 = FUN_00201260(0x100,1);
    lVar6 = FUN_00201260(0xf9,0);
    if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
      FUN_00200fc0(0);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      bVar1 = false;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar2 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_001f4890(0x287);
      iVar2 = FUN_001f48c0(0x100);
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
      *(undefined4 *)(iVar2 + 0x348) = uVar3;
      *(undefined4 *)(iVar2 + 0x344) = 1;
      uVar3 = FUN_001f4890(0x2b5);
      iVar2 = FUN_001f48c0(0x100);
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
      *(undefined4 *)(iVar2 + 0x35c) = uVar3;
      *(undefined4 *)(iVar2 + 0x358) = 1;
      if (*(int *)(param_1 + 0x5c0) != 0) {
        uVar3 = FUN_001f4890(0x289);
        iVar2 = FUN_001f48c0(0xf9);
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
      }
      FUN_00200fc0(0);
    }
    lVar4 = FUN_00201260(0x100,2);
    lVar5 = FUN_00201260(0x100,3);
    lVar6 = FUN_00201260(0xf9,0);
    if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar1 = true;
    }
  }
  iVar2 = FUN_001f48c0(0x100);
  FUN_001eea30(*piRam0036f42c + iVar2 * 0x4f4 + 4,0x1f,0x16,
               *(undefined4 *)(&DAT_0032be10 + *(int *)(param_1 + 0x18) * 4));
  FUN_002011b0(0xf9,0x2d,0x1ed3);
  FUN_002011b0(0x100,0x22,0x1ee3);
  FUN_002011b0(0x100,0x23,0x1ee4);
  FUN_002011b0(0xf8,0x1b,*(undefined4 *)(&DAT_0036ead0 + *(int *)(param_1 + 0x18) * 4));
  if (!bVar1) {
    FUN_00200d70(0x100,*(undefined4 *)(&DAT_0032be00 + *(int *)(param_1 + 0x18) * 4),1,0);
  }
  iVar2 = FUN_001f48c0(0xf9);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x100);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x002406c0  size 0x654
void FUN_002406c0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar1 = false;
  }
  iVar4 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x14);
  }
  else {
    uVar5 = FUN_001f4890(0x277);
    iVar4 = FUN_001f48c0(0xfa);
    iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
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
    uVar5 = FUN_001f4890(0x28a);
    iVar4 = FUN_001f48c0(0x101);
    iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
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
    *(undefined4 *)(param_1 + 0x6c) = 0x101;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    uVar2 = DAT_0032bde4;
    uVar5 = DAT_0032bde0;
    *(undefined4 *)(param_1 + 0x78) = 0x101;
    *(undefined4 *)(param_1 + 0x7c) = uVar5;
    uVar3 = DAT_0032bdec;
    uVar5 = DAT_0032bde8;
    *(undefined4 *)(param_1 + 0x80) = uVar2;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0x101;
    *(undefined4 *)(param_1 + 0x90) = uVar5;
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    FUN_00242800(param_1 + 0x140,0x101,0x32bdf0,0x32bdf8);
    iVar4 = *(int *)(param_1 + 0x14);
  }
  FUN_002425c0(param_1 + 0x140,*(undefined4 *)(param_1 + 0x5c),iVar4 == 2);
  if (*(int *)(param_1 + 0x5c8) != 0) {
    lVar6 = FUN_00201260(0xfa,0);
    lVar7 = FUN_00201260(0x101,0);
    if (lVar6 == 0 && lVar7 == 0) {
      FUN_00200fc0(0);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      bVar1 = false;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar4 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar4 != 0) {
      uVar5 = FUN_001f4890(0x278);
      iVar4 = FUN_001f48c0(0xfa);
      iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
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
      uVar5 = FUN_001f4890(0x28b);
      iVar4 = FUN_001f48c0(0x101);
      iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
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
    }
    lVar6 = FUN_00201260(0xfa,1);
    lVar7 = FUN_00201260(0x101,1);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar1 = true;
    }
  }
  FUN_002011b0(0xfa,1,0x1ed2);
  FUN_002011b0(0x101,0x2c,0x1ee1);
  FUN_002011b0(0x101,0x2d,0x1ee2);
  FUN_002011b0(0x101,0x2e,0x1ef9);
  FUN_002011b0(0x101,0x2f,0x1ed0);
  FUN_002010a0(0x101,0x30,0x3a,*(undefined4 *)(param_1 + 0x54));
  FUN_002010a0(0x101,0x31,0x3a,*(undefined4 *)(param_1 + 0x58));
  FUN_002011b0(0x101,0x32,0x1efb);
  FUN_002011b0(0x101,0x33,0x1efa);
  iVar4 = FUN_001f48c0(0x101);
  iVar4 = *piRam0036f42c + iVar4 * 0x4f4 + 4;
  FUN_001eea30(iVar4,0xe,9,*(undefined4 *)(param_1 + 0x54));
  FUN_001eea30(iVar4,0x15,9,*(undefined4 *)(param_1 + 0x58));
  FUN_001eea30(iVar4,0xd,9,*(undefined4 *)(param_1 + 0x54));
  FUN_001eea30(iVar4,0x14,9,*(undefined4 *)(param_1 + 0x58));
  uVar8 = 7;
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar8 = 6;
  }
  FUN_001eea30(iVar4,0x2a,0x16,uVar8);
  uVar8 = 7;
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar8 = 6;
  }
  FUN_001eea30(iVar4,0x2b,0x16,uVar8);
  FUN_002011b0(0xf8,0x1b,*(undefined4 *)(&DAT_0032bdd0 + *(int *)(param_1 + 0x14) * 4));
  if (bVar1) {
    FUN_002425c0(param_1 + 0x140,*(undefined4 *)(param_1 + 0x5c),0);
    iVar4 = *(int *)(param_1 + 0x14);
  }
  else {
    FUN_00242b40(param_1 + 0x6c,*(undefined4 *)(&DAT_0032bdc0 + *(int *)(param_1 + 0x14) * 4));
    iVar4 = *(int *)(param_1 + 0x14);
  }
  if (iVar4 == 0 && !bVar1) {
    if (*(int *)(param_1 + 0x54) == 0) {
      uVar8 = 3;
    }
    else if (*(int *)(param_1 + 0x54) == 0xf) {
      uVar8 = 2;
    }
    else {
      uVar8 = 1;
    }
  }
  else {
    uVar8 = 0;
  }
  FUN_00242290(param_1 + 0x78,uVar8);
  if (*(int *)(param_1 + 0x14) == 1 && !bVar1) {
    if (*(int *)(param_1 + 0x58) == 0) {
      uVar8 = 3;
    }
    else if (*(int *)(param_1 + 0x58) == 0xf) {
      uVar8 = 2;
    }
    else {
      uVar8 = 1;
    }
  }
  else {
    uVar8 = 0;
  }
  FUN_00242290(param_1 + 0x8c,uVar8);
  iVar4 = FUN_001f48c0(0xfa);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar4 * 0x4f4 + 4);
  iVar4 = FUN_001f48c0(0x101);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar4 * 0x4f4 + 4);
  return;
}

// 0x00240d20  size 0x6c4
void FUN_00240d20(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar1 = false;
  }
  iVar2 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    uVar3 = FUN_001f4890(0x277);
    iVar2 = FUN_001f48c0(0xfa);
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
    uVar3 = FUN_001f4890(0x27e);
    iVar2 = FUN_001f48c0(0xfb);
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
    *(undefined4 *)(param_1 + 0x6c) = 0xfb;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x78) = 0xfb;
    *(undefined4 *)(param_1 + 0x7c) = uGpffff83d8;
    *(undefined4 *)(param_1 + 0x80) = uGpffff83dc;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_00242800(param_1 + 0x140,0xfb,0x32bd70,0x32bd78);
    FUN_00242800(param_1 + 0x160,0xfb,0x32bd80,0x32bd88);
    FUN_00242800(param_1 + 0x180,0xfb,0x32bd90,0x32bd98);
    FUN_00242800(param_1 + 0x1a0,0xfb,0x32bda0,0x32bda8);
    FUN_00242800(param_1 + 0x1c0,0xfb,0x32bdb0,0x32bdb8);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  FUN_002425c0(param_1 + 0x140,*(undefined4 *)(param_1 + 0x3c),iVar2 == 1);
  FUN_002425c0(param_1 + 0x160,*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x10) == 2);
  FUN_002425c0(param_1 + 0x180,*(undefined4 *)(param_1 + 0x44),*(int *)(param_1 + 0x10) == 3);
  FUN_002425c0(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x48),*(int *)(param_1 + 0x10) == 4);
  FUN_002425c0(param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x10) == 5);
  if (*(int *)(param_1 + 0x5c8) != 0) {
    lVar5 = FUN_00201260(0xfa,0);
    lVar6 = FUN_00201260(0xfb,0);
    if (lVar5 == 0 && lVar6 == 0) {
      FUN_00200fc0(0);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      bVar1 = false;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar2 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_001f4890(0x278);
      iVar2 = FUN_001f48c0(0xfa);
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
      uVar3 = FUN_001f4890(0x27f);
      iVar2 = FUN_001f48c0(0xfb);
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
    }
    lVar5 = FUN_00201260(0xfa,1);
    lVar6 = FUN_00201260(0xfb,1);
    if (lVar5 == 0 && lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar1 = true;
    }
  }
  FUN_002011b0(0xfa,1,0x1ed1);
  FUN_002011b0(0xfb,0x3b,0x1ed8);
  FUN_002011b0(0xfb,0x3c,0x1ed9);
  FUN_002011b0(0xfb,0x3d,0x1eda);
  FUN_002011b0(0xfb,0x3e,0x1edb);
  FUN_002011b0(0xfb,0x3f,0x1edc);
  FUN_002011b0(0xfb,0x40,0x1edd);
  FUN_002011b0(0xfb,0x41,0x1ed0);
  FUN_002011b0(0xfb,0x42,0x32);
  FUN_002011b0(0xfb,0x43,0x33);
  FUN_002011b0(0xfb,0x44,0x32);
  FUN_002011b0(0xfb,0x48,0x33);
  FUN_002011b0(0xfb,0x45,0x32);
  FUN_002011b0(0xfb,0x49,0x33);
  FUN_002011b0(0xfb,0x46,0x32);
  FUN_002011b0(0xfb,0x4a,0x33);
  FUN_002011b0(0xfb,0x47,0x1ef8);
  FUN_002011b0(0xfb,0x4b,0x1ef7);
  FUN_002011b0(0xfb,0x4c,*(undefined4 *)(&DAT_0032bd20 + *(int *)(param_1 + 0x38) * 4));
  FUN_002011b0(0xf8,0x1b,*(undefined4 *)(&DAT_0032bd50 + *(int *)(param_1 + 0x10) * 4));
  if (bVar1) {
    FUN_002425c0(param_1 + 0x140,*(undefined4 *)(param_1 + 0x3c),0);
    FUN_002425c0(param_1 + 0x160,*(undefined4 *)(param_1 + 0x40),0);
    FUN_002425c0(param_1 + 0x180,*(undefined4 *)(param_1 + 0x44),0);
    FUN_002425c0(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x48),0);
    FUN_002425c0(param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x4c),0);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    FUN_00242b40(param_1 + 0x6c,*(undefined4 *)(&DAT_0032bd30 + *(int *)(param_1 + 0x10) * 4));
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if ((iVar2 != 0) || (bVar1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  FUN_00242290(param_1 + 0x78,uVar4);
  iVar2 = FUN_001f48c0(0xfa);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0xfb);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x002413f0  size 0x4e4
void FUN_002413f0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar1 = false;
  }
  iVar3 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar3 != 0) {
    uVar2 = FUN_001f4890(0x292);
    iVar3 = FUN_001f48c0(0xf9);
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
    if (*(int *)(param_1 + 0x5b8) != 3) {
      uVar2 = FUN_001f4890(0x288);
      iVar3 = FUN_001f48c0(0xf9);
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
  }
  if (*(int *)(param_1 + 0x5c8) != 0) {
    lVar4 = FUN_00201260(0xf9,0);
    lVar5 = FUN_00201260(0xf9,1);
    if (lVar4 == 0 && lVar5 == 0) {
      FUN_00200fc0(0);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      bVar1 = false;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar3 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x5c0) == -1) {
        FUN_00200ef0(0);
      }
      else if (*(int *)(param_1 + 0xc) == 2) {
        uVar2 = FUN_001f4890(0x294);
        iVar3 = FUN_001f48c0(0xf9);
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
        *(undefined4 *)(iVar3 + 0x348) = uVar2;
        *(undefined4 *)(iVar3 + 0x344) = 1;
      }
      else {
        uVar2 = FUN_001f4890(0x293);
        iVar3 = FUN_001f48c0(0xf9);
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
        *(undefined4 *)(iVar3 + 0x348) = uVar2;
        *(undefined4 *)(iVar3 + 0x344) = 1;
        uVar2 = FUN_001f4890(0x289);
        iVar3 = FUN_001f48c0(0xf9);
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
        *(undefined4 *)(iVar3 + 0x35c) = uVar2;
        *(undefined4 *)(iVar3 + 0x358) = 1;
      }
    }
    lVar4 = FUN_00201260(0xf9,2);
    lVar5 = FUN_00201260(0xf9,3);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar1 = true;
    }
  }
  FUN_002011b0(0xf9,0x2b,0x1ed1);
  FUN_002011b0(0xf9,0x2c,0x1ed2);
  FUN_002011b0(0xf9,0x2d,0x1ed3);
  FUN_002011b0(0xf9,0x2e,0x1ed4);
  FUN_002011b0(0xf9,0x2f,0x1ed5);
  FUN_002011b0(0xf9,0x30,0x1ed6);
  FUN_002011b0(0xf9,0x31,0x1ed7);
  FUN_002011b0(0xf8,0x1b,*(undefined4 *)(&DAT_0032bd00 + *(int *)(param_1 + 0xc) * 4));
  if ((!bVar1) && ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0)) {
    FUN_00200d70(0xf9,*(undefined4 *)(&DAT_0032bce0 + *(int *)(param_1 + 0xc) * 4),1,0);
  }
  iVar3 = FUN_001f48c0(0xf9);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

// 0x00241900  size 0xf4
void FUN_00241900(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_FUN_0032b820)[*(int *)(param_1 + 0x5bc)])();
  uVar1 = *(uint *)(iGpffff8d68 + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(iGpffff8d68 + 0x28) = uVar1 | 0x800;
  }
  FUN_00201260(0xf7,0);
  iVar2 = FUN_001f48c0(0xf7);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0xf8);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00241a00  size 0xac
void FUN_00241a00(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_001f4890(0x290);
  iVar2 = FUN_001f48c0(0xf7);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
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
  FUN_00200fc0(0);
  return;
}

// 0x00241ab0  size 0x364
void FUN_00241ab0(uint *param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = FUN_001f48c0(0xfd);
  iVar5 = 0;
  puVar6 = (undefined4 *)(param_1[1] * 200 + 0x32bb50);
  iVar1 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
  puVar4 = param_1;
  puVar2 = puVar6;
  do {
    FUN_002011b0(0xfd,*puVar2,*(undefined4 *)(&DAT_0032bb30 + puVar4[0xf] * 4));
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 5;
  } while (iVar5 < 9);
  uVar3 = piGpffff8d78[param_1[1] + 2];
  if ((piGpffff8d78[param_1[1] + 4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 0x80000) {
    if (param_2 == 0) {
      iVar5 = 0;
      do {
        FUN_001eeb00(0,iVar1,puVar6[3],8);
        FUN_001eeb00(0x3f800000,iVar1,puVar6[4],8);
        FUN_001eeb00(0x3f800000,iVar1,puVar6[1],8);
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 5;
      } while (iVar5 < 9);
    }
    else {
      iVar5 = 0;
      do {
        puVar2 = (undefined4 *)FUN_001ee140(iVar1,puVar6[1],8);
        uVar8 = *puVar2;
        FUN_001eeb00(0,iVar1,puVar6[3],8);
        FUN_001eeb00(0,iVar1,puVar6[2],8);
        FUN_001eeb00(uVar8,iVar1,puVar6[4],8);
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 5;
      } while (iVar5 < 9);
    }
    uVar3 = 0;
    do {
      FUN_00242290(param_1 + 0x4a,0);
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 5;
    } while (uVar3 < 9);
  }
  else if (param_2 == 0) {
    iVar5 = 0;
    puVar4 = param_1;
    puVar2 = puVar6;
    do {
      if ((param_1[0xe] & 1 << (puVar4[0xf] & 0x1f)) == 0) {
        uVar7 = 0;
        uVar8 = puVar2[3];
      }
      else {
        uVar7 = 0x3f800000;
        uVar8 = puVar2[3];
      }
      FUN_001eeb00(uVar7,iVar1,uVar8,8);
      FUN_001eeb00(0,iVar1,puVar2[4],8);
      FUN_001eeb00(0x3f800000,iVar1,puVar2[1],8);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 5;
    } while (iVar5 < 9);
    uVar3 = 0;
    puVar4 = param_1;
    do {
      FUN_00242290(puVar4 + 0x4a,uVar3 == *param_1);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 5;
    } while (uVar3 < 9);
    FUN_00200d70(0xfd,puVar6[*param_1 * 5 + 2],1,param_1[1]);
  }
  else {
    uVar3 = 0;
    do {
      FUN_00242290(param_1 + 0x4a,0);
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 5;
    } while (uVar3 < 9);
  }
  return;
}

// 0x00241e20  size 0x460
void FUN_00241e20(uint *param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar1 = FUN_001f48c0(0xfc);
  uVar4 = param_1[1];
  uVar3 = piGpffff8d78[uVar4 + 2];
  puVar7 = (undefined4 *)(&DAT_0032b920 + uVar4 * 0x108);
  iVar1 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
  if ((piGpffff8d78[uVar4 + 4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 0x80000) {
    if (param_2 == 0) {
      iVar6 = 0;
      puVar5 = param_1;
      do {
        uVar4 = puVar5[4];
        FUN_001eea30(iVar1,*puVar7,0x16,*(undefined4 *)(&DAT_0032b860 + uVar4 * 4));
        FUN_001eea30(iVar1,puVar7[1],0x16,*(undefined4 *)(&LAB_0032b8c0 + uVar4 * 4));
        FUN_001eeb00(0x3f800000,iVar1,puVar7[5],8);
        FUN_001eeb00(0x3f800000,iVar1,puVar7[2],8);
        FUN_001eeb00(0,iVar1,puVar7[4],8);
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 6;
      } while (iVar6 < 10);
    }
    else {
      iVar6 = 0;
      puVar5 = param_1;
      do {
        puVar2 = (undefined4 *)FUN_001ee140(iVar1,puVar7[2],8);
        uVar10 = *puVar2;
        uVar4 = puVar5[4];
        FUN_001eea30(iVar1,*puVar7,0x16,*(undefined4 *)(&DAT_0032b860 + uVar4 * 4));
        FUN_001eea30(iVar1,puVar7[1],0x16,*(undefined4 *)(&LAB_0032b8c0 + uVar4 * 4));
        FUN_001eeb00(0,iVar1,puVar7[4],8);
        FUN_001eeb00(0,iVar1,puVar7[3],8);
        FUN_001eeb00(uVar10,iVar1,puVar7[5],8);
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 6;
        puVar5 = puVar5 + 1;
      } while (iVar6 < 10);
    }
    uVar4 = 0;
    do {
      FUN_00242290(param_1 + 0x18,0);
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 5;
    } while (uVar4 < 10);
  }
  else if (param_2 == 0) {
    iVar6 = 0;
    puVar5 = param_1;
    puVar2 = puVar7;
    do {
      uVar4 = puVar5[4];
      iVar8 = uVar4 * 4;
      FUN_001eea30(iVar1,*puVar2,0x16,*(undefined4 *)(&DAT_0032b860 + iVar8));
      FUN_001eea30(iVar1,puVar2[1],0x16,*(undefined4 *)(&LAB_0032b8c0 + iVar8));
      if ((param_1[3] & 1 << (uVar4 & 0x1f)) == 0) {
        uVar9 = 0;
        uVar10 = puVar2[4];
      }
      else {
        uVar9 = 0x3f800000;
        uVar10 = puVar2[4];
      }
      FUN_001eeb00(uVar9,iVar1,uVar10,8);
      FUN_001eeb00(0,iVar1,puVar2[5],8);
      FUN_001eeb00(0x3f800000,iVar1,puVar2[2],8);
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 6;
    } while (iVar6 < 10);
    uVar4 = 0;
    puVar5 = param_1;
    do {
      FUN_00242290(puVar5 + 0x18,uVar4 == *param_1);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 5;
    } while (uVar4 < 10);
    FUN_00200d70(0xfc,puVar7[*param_1 * 6 + 3],1,param_1[1]);
  }
  else {
    uVar4 = 0;
    puVar5 = param_1;
    do {
      FUN_00242290(puVar5 + 0x18,0);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 5;
    } while (uVar4 < 10);
    iVar6 = 0;
    do {
      uVar4 = param_1[4];
      FUN_001eea30(iVar1,*puVar7,0x16,*(undefined4 *)(&DAT_0032b860 + uVar4 * 4));
      FUN_001eea30(iVar1,puVar7[1],0x16,*(undefined4 *)(&LAB_0032b8c0 + uVar4 * 4));
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 1;
      puVar7 = puVar7 + 6;
    } while (iVar6 < 10);
  }
  return;
}

// 0x00242290  size 0x310
void FUN_00242290(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_001f48c0(*param_1);
  iVar1 = *piRam0036f42c + iVar1 * 0x4f4 + 4;
  if (param_2 == 0) {
    iVar1 = FUN_001f48c0(*param_1);
    FUN_001eeb00(0,*piRam0036f42c + iVar1 * 0x4f4 + 4,param_1[1],8);
    iVar1 = FUN_001f48c0(*param_1);
    FUN_001eeb00(0,*piRam0036f42c + iVar1 * 0x4f4 + 4,param_1[2],8);
  }
  else {
    iVar2 = param_1[4];
    if (param_2 != iVar2) {
      if (iVar2 == 0) {
        iVar2 = FUN_001f48c0(*param_1);
        FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4,param_1[1],8);
        iVar2 = FUN_001f48c0(*param_1);
        FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4,param_1[2],8);
      }
      else if (iVar2 == 2) {
        iVar2 = FUN_001f48c0(*param_1);
        FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4,param_1[2],8);
      }
      else if (iVar2 == 3) {
        iVar2 = FUN_001f48c0(*param_1);
        FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4,param_1[1],8);
      }
    }
    if (param_2 - 1U < 2) {
      if (param_2 == 2) {
        iVar2 = FUN_001f48c0(*param_1);
        FUN_001eeb00(0,*piRam0036f42c + iVar2 * 0x4f4 + 4,param_1[2],8);
      }
      FUN_001eea30(iVar1,param_1[1],9,(int)param_1[3] / 10);
    }
    if ((param_2 == 3) || (param_2 == 1)) {
      if (param_2 == 3) {
        iVar2 = FUN_001f48c0(*param_1);
        FUN_001eeb00(0,*piRam0036f42c + iVar2 * 0x4f4 + 4,param_1[1],8);
      }
      FUN_001eea30(iVar1,param_1[2],9,(int)param_1[3] / 10);
    }
    iVar1 = param_1[3] + 1;
    if (iVar1 < 0) {
      iVar1 = 0x3c;
    }
    else if (0x3c < iVar1) {
      iVar1 = 0;
    }
    param_1[3] = iVar1;
  }
  param_1[4] = param_2;
  return;
}

// 0x002425a0  size 0x20
void FUN_002425a0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  param_1[2] = *param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 0x002425c0  size 0x23c
void FUN_002425c0(undefined4 *param_1,int param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != param_1[3]) {
    if (param_2 == 0) {
      param_1[3] = 0;
    }
    else {
      iVar2 = FUN_001f48c0(param_1[2]);
      FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4,*param_1,8);
      param_1[3] = param_2;
    }
  }
  if (param_3 == 0 || param_2 == 0) {
    iVar2 = FUN_001f48c0(param_1[2]);
    FUN_001eeb00(0,*piRam0036f42c + iVar2 * 0x4f4 + 4,param_1[1],8);
  }
  else {
    FUN_00200d70(param_1[2],param_1[1],0,1);
  }
  if (param_2 == 0) {
    iVar2 = FUN_001f48c0(param_1[2]);
    FUN_001eeb00(0,*piRam0036f42c + iVar2 * 0x4f4 + 4,*param_1,8);
    uVar1 = param_1[7];
  }
  else {
    uVar1 = param_1[7];
  }
  uVar3 = param_2 != 0 ^ 1;
  if (uVar3 != uVar1) {
    if (uVar3 == 0) {
      param_1[7] = 0;
    }
    else {
      iVar2 = FUN_001f48c0(param_1[6]);
      FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4,param_1[4],8);
      param_1[7] = uVar3;
    }
  }
  if (param_3 == 0 || uVar3 == 0) {
    iVar2 = FUN_001f48c0(param_1[6]);
    FUN_001eeb00(0,*piRam0036f42c + iVar2 * 0x4f4 + 4,param_1[5],8);
  }
  else {
    FUN_00200d70(param_1[6],param_1[5],0,1);
  }
  if (uVar3 == 0) {
    iVar2 = FUN_001f48c0(param_1[6]);
    FUN_001eeb00(0,*piRam0036f42c + iVar2 * 0x4f4 + 4,param_1[4],8);
  }
  return;
}

// 0x00242800  size 0x160
void FUN_00242800(undefined8 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  puVar2[2] = param_2;
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  puVar2[3] = 1;
  if (puVar2[3] != 0) {
    puVar2[3] = 0;
  }
  iVar1 = FUN_001f48c0(puVar2[2]);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,puVar2[1],8);
  iVar1 = FUN_001f48c0(puVar2[2]);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*puVar2,8);
  puVar2[6] = param_2;
  puVar2[4] = *param_4;
  puVar2[5] = param_4[1];
  puVar2[7] = 1;
  if (puVar2[7] != 0) {
    puVar2[7] = 0;
  }
  iVar1 = FUN_001f48c0(puVar2[6]);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,puVar2[5],8);
  iVar1 = FUN_001f48c0(puVar2[6]);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,puVar2[4],8);
  FUN_002425c0(param_1,0,0);
  return;
}

// 0x00242960  size 0x128
void FUN_00242960(undefined4 *param_1,int param_2,long param_3)

{
  int iVar1;
  
  if (param_2 != param_1[3]) {
    if (param_2 != 0) {
      iVar1 = FUN_001f48c0(param_1[2]);
      FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*param_1,8);
    }
    param_1[3] = param_2;
  }
  if (param_3 == 0) {
    iVar1 = FUN_001f48c0(param_1[2]);
    FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,param_1[1],8);
  }
  else {
    FUN_00200d70(param_1[2],param_1[1],0,1);
  }
  if (param_2 == 0) {
    iVar1 = FUN_001f48c0(param_1[2]);
    FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*param_1,8);
  }
  return;
}

// 0x00242a90  size 0xb0
void FUN_00242a90(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  param_1[2] = param_2;
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[3] = 1;
  if (param_1[3] != 0) {
    param_1[3] = 0;
  }
  iVar1 = FUN_001f48c0(param_1[2]);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,param_1[1],8);
  iVar1 = FUN_001f48c0(param_1[2]);
  FUN_001eeb00(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*param_1,8);
  return;
}

// 0x00242b40  size 0x1a0
void FUN_00242b40(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = FUN_001f48c0(*param_1);
  iVar2 = *piGpffff8d3c + iVar2 * 0x4f4 + 4;
  if (param_1[1] != param_2) {
    param_1[2] = 0;
    if (0 < (int)param_1[1]) {
      FUN_001eeb00(0x3ecccccd,iVar2,param_1[1],8);
    }
    param_1[1] = param_2;
  }
  if (0 < (int)param_1[1]) {
    iVar1 = param_1[2];
    if (iVar1 < 0x1e) {
      fVar3 = (float)iVar1 * 0.4 + (float)(0x1e - iVar1) * 0.7;
    }
    else {
      fVar3 = (float)(0x3c - iVar1) * 0.4 + (float)(iVar1 + -0x1e) * 0.7;
    }
    FUN_001eeb00(fVar3 / 30.0,iVar2,param_1[1],8);
    iVar2 = param_1[2] + 1;
    if (iVar2 < 0) {
      iVar2 = 0x3c;
    }
    else if (0x3c < iVar2) {
      iVar2 = 0;
    }
    param_1[2] = iVar2;
  }
  return;
}

// 0x00242ce0  size 0x10
void FUN_00242ce0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  return;
}

// 0x00242cf0  size 0x1e8
void FUN_00242cf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (((int)param_3 % 1000) * 1000) % 1000;
  iVar2 = (int)param_3 - iVar1 / 1000;
  if (param_3 == 0) {
    FUN_002010a0(param_1,param_2,0x3c3);
  }
  else if (param_3 < 1) {
    FUN_002010a0(param_1,param_2,0x3c4,iVar1);
  }
  else if (param_3 < 1000) {
    FUN_002010a0(param_1,param_2,0x3c5,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000) {
    FUN_002010a0(param_1,param_2,0x3c6,(iVar2 / 1000) % 1000,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000000) {
    FUN_002010a0(param_1,param_2,0x3c7,((iVar2 / 1000) / 1000) % 1000,(iVar2 / 1000) % 1000,
                 iVar2 % 1000,iVar1);
  }
  else {
    iVar1 = (iVar2 / 1000) / 1000;
    FUN_002010a0(param_1,param_2,0x3c8,(iVar1 / 1000) % 1000,iVar1 % 1000,(iVar2 / 1000) % 1000,
                 iVar2 % 1000);
  }
  return;
}

// 0x00242ee0  size 0x1e8
void FUN_00242ee0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (((int)param_3 % 1000) * 1000) % 1000;
  iVar2 = (int)param_3 - iVar1 / 1000;
  if (param_3 == 0) {
    FUN_002010a0(param_1,param_2,0x3bd);
  }
  else if (param_3 < 1) {
    FUN_002010a0(param_1,param_2,0x3be,iVar1);
  }
  else if (param_3 < 1000) {
    FUN_002010a0(param_1,param_2,0x3bf,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000) {
    FUN_002010a0(param_1,param_2,0x3c0,(iVar2 / 1000) % 1000,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000000) {
    FUN_002010a0(param_1,param_2,0x3c1,((iVar2 / 1000) / 1000) % 1000,(iVar2 / 1000) % 1000,
                 iVar2 % 1000,iVar1);
  }
  else {
    iVar1 = (iVar2 / 1000) / 1000;
    FUN_002010a0(param_1,param_2,0x3c2,(iVar1 / 1000) % 1000,iVar1 % 1000,(iVar2 / 1000) % 1000,
                 iVar2 % 1000);
  }
  return;
}

// 0x002430d0  size 0x1e8
void FUN_002430d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (((int)param_3 % 1000) * 1000) % 1000;
  iVar2 = (int)param_3 - iVar1 / 1000;
  if (param_3 == 0) {
    FUN_002010a0(param_1,param_2,0x3b4);
  }
  else if (param_3 < 1) {
    FUN_002010a0(param_1,param_2,0x3b5,iVar1);
  }
  else if (param_3 < 1000) {
    FUN_002010a0(param_1,param_2,0x3b6,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000) {
    FUN_002010a0(param_1,param_2,0x3b7,(iVar2 / 1000) % 1000,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000000) {
    FUN_002010a0(param_1,param_2,0x3b8,((iVar2 / 1000) / 1000) % 1000,(iVar2 / 1000) % 1000,
                 iVar2 % 1000,iVar1);
  }
  else {
    iVar1 = (iVar2 / 1000) / 1000;
    FUN_002010a0(param_1,param_2,0x3b9,(iVar1 / 1000) % 1000,iVar1 % 1000,(iVar2 / 1000) % 1000,
                 iVar2 % 1000);
  }
  return;
}

// 0x002432c0  size 0x904
void FUN_002432c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  char acStack_80 [16];
  char acStack_70 [4];
  undefined2 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  char acStack_40 [4];
  undefined2 uStack_3c;
  undefined4 uStack_38;
  char acStack_30 [16];
  char acStack_20 [16];
  char cStack_10;
  
  FUN_001f48c0(0x99);
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_001f4890(0x112);
    iVar3 = FUN_001f48c0(0x95);
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
    uVar4 = FUN_001f4890(0x113);
    iVar3 = FUN_001f48c0(0x95);
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
    uVar4 = FUN_001f4890(0x114);
    iVar3 = FUN_001f48c0(0x96);
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
    uVar4 = FUN_001f4890(0x115);
    iVar3 = FUN_001f48c0(0x96);
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
    iVar3 = FUN_001f48c0(0x99);
    FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x22,8);
    iVar3 = FUN_001f48c0(0x99);
    FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x21,8);
    iVar3 = FUN_001f48c0(0x99);
    FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x1d,8);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  FUN_00176e90(acStack_20);
  if ((acStack_20[0] == '\x06') || (*(int *)(param_1 + 0x64c) == 0x2e)) {
    lVar5 = FUN_00201260(0x96,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  else {
    lVar5 = FUN_00201260(0x95,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  FUN_00176e90(acStack_30);
  if ((acStack_30[0] == '\x06') || (*(int *)(param_1 + 0x64c) == 0x2e)) {
    if ((*(int *)(param_1 + 0x660) != 0) && (lVar5 = FUN_00201260(0x96), lVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x660) = 0;
    }
  }
  else if ((*(int *)(param_1 + 0x660) != 0) && (lVar5 = FUN_00201260(0x95), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  uVar6 = FUN_001777b0();
  uVar6 = FUN_001f69f0(uVar6);
  uVar6 = FUN_001f69b0(uVar6,1);
  FUN_002011b0(0x99,0x24,uVar6);
  uVar1 = FUN_00177040();
  FUN_002010a0(0x99,0x29,0x36f,(uVar1 & 0xff) + 0x370);
  uVar1 = FUN_001777a0();
  FUN_002010a0(0x99,0x23,*(undefined4 *)((int)register0x000001c0 + (uVar1 & 0xff) * 4 + -0x7b00));
  uVar1 = FUN_00177790();
  FUN_002010a0(0x99,0x25,*(undefined4 *)(&DAT_0032cce0 + (uVar1 & 0xff) * 4));
  uVar1 = FUN_00177780();
  FUN_002010a0(0x99,0x26,*(undefined4 *)((int)register0x000001c0 + (uVar1 & 0xff) * 4 + -0x7af8));
  uVar7 = FUN_00176fa0();
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_00176fa0();
    if ((uVar7 & 2) != 0) {
      FUN_00176ef0(acStack_70);
      cStack_10 = acStack_70[0];
      if (acStack_70[0] == '\0') {
        FUN_00201140(0x95,0x13,1,0x3ad);
        uVar6 = FUN_001f6540(uStack_6c);
        uVar8 = FUN_001f6460(uStack_6c);
        FUN_002010a0(0x95,0x14,0x45,uVar6,uVar8);
        FUN_002011b0(0x95,0x11,0x3ab);
      }
      else if ((acStack_70[0] == '\x03') || (acStack_70[0] == '\x04')) {
        FUN_00201140(0x95,0x13,1,0x3ad);
        FUN_001fe620(0x95,0x12,uStack_68);
        FUN_002011b0(0x95,0x11,0x3ab);
      }
    }
  }
  else {
    FUN_00176e90(acStack_40);
    cStack_10 = acStack_40[0];
    if (acStack_40[0] == '\x06') {
      FUN_00201140(0x96,0x25,1,0x3af);
      iVar10 = 0;
      iVar3 = 0;
      puVar9 = &DAT_0032cd08;
      do {
        FUN_00176e90(auStack_60);
        iVar2 = FUN_00209240(uStack_5c);
        if (-1 < *(int *)(iVar2 + iVar3)) {
          FUN_002011b0(0x96,*puVar9,*(int *)(iVar2 + iVar3) + 0x8c7);
        }
        iVar10 = iVar10 + 1;
        iVar3 = iVar3 + 4;
        puVar9 = puVar9 + 1;
      } while (iVar10 < 3);
      FUN_002011b0(0x96,0x23,0x3aa);
    }
    else if (acStack_40[0] == '\b') {
      FUN_00201140(0x95,0x13,1,0x78);
      iVar3 = FUN_00177a50();
      uVar6 = FUN_001f6ef0(*(undefined4 *)(iVar3 + 0x80));
      FUN_002011b0(0x95,0x14,uVar6);
      FUN_002011b0(0x95,0x11,0x3ac);
    }
    else if (acStack_40[0] == '\0') {
      FUN_00201140(0x95,0x13,1,0x3ae);
      uVar6 = FUN_001f6540(uStack_3c);
      uVar8 = FUN_001f6460(uStack_3c);
      FUN_002010a0(0x95,0x14,0x45,uVar6,uVar8);
      FUN_002011b0(0x95,0x11,0x3aa);
    }
    else if ((acStack_40[0] == '\x03') || (acStack_40[0] == '\x04')) {
      if (*(int *)(param_1 + 0x64c) == 0x2e) {
        FUN_00201140(0x96,0x25,1,0x3af);
        iVar10 = 0;
        iVar3 = 0;
        puVar9 = &DAT_0032ccf8;
        do {
          FUN_00176e90(auStack_50);
          iVar2 = FUN_00209240(uStack_4c);
          if (-1 < *(int *)(iVar2 + iVar3)) {
            FUN_002011b0(0x96,*puVar9,*(int *)(iVar2 + iVar3) + 0x8c7);
          }
          iVar10 = iVar10 + 1;
          iVar3 = iVar3 + 4;
          puVar9 = puVar9 + 1;
        } while (iVar10 < 3);
        FUN_002011b0(0x96,0x23,0x3aa);
      }
      else {
        FUN_00201140(0x95,0x13,1,0x3ae);
        FUN_001fe620(0x95,0x12,uStack_38);
        FUN_002011b0(0x95,0x11,0x3aa);
      }
    }
  }
  iVar3 = FUN_001f48c0(0x94);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  uVar7 = FUN_00176fa0();
  if ((uVar7 & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x64c);
LAB_002437b4:
    if (iVar3 != 0x2e) {
      iVar3 = FUN_001f48c0(0x95);
      FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
      goto LAB_00243824;
    }
  }
  else {
    FUN_00176e90(acStack_80);
    if (acStack_80[0] != '\x06') {
      iVar3 = *(int *)(param_1 + 0x64c);
      goto LAB_002437b4;
    }
  }
  iVar3 = FUN_001f48c0(0x96);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
LAB_00243824:
  iVar3 = FUN_001f48c0(0x99);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

// 0x00243bd0  size 0xf8c
void FUN_00243bd0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  
  FUN_001f48c0(0x79);
  FUN_001f48c0(0x9f);
  iVar3 = FUN_001f48c0(0xa1);
  iVar3 = *piGpffff8d3c + iVar3 * 0x4f4 + 4;
  if (*(int *)(param_1 + 0xc) == -1) {
    iVar7 = 0;
    puVar6 = &DAT_0032cbb0;
    do {
      if (*(int *)(param_1 + 0x62c) == iVar7) {
        iVar4 = FUN_001f48c0(0x9f);
        FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      }
      else {
        iVar4 = FUN_001f48c0(0x9f);
        FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < 10);
  }
  else {
    iVar7 = 0;
    puVar6 = &DAT_0032cbb0;
    do {
      if (*(int *)(param_1 + 0xc) == iVar7) {
        iVar4 = FUN_001f48c0(0x9f);
        FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      }
      else {
        iVar4 = FUN_001f48c0(0x9f);
        FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < 10);
  }
  if (*(int *)(param_1 + 0x10) == -1) {
    iVar7 = 0;
    puVar6 = &DAT_0032cbe0;
    do {
      if ((*(int *)(param_1 + 0x62c) == iVar7) && (*(int *)(param_1 + 0xc) != -1)) {
        iVar4 = FUN_001f48c0(0x9f);
        FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      }
      else {
        iVar4 = FUN_001f48c0(0x9f);
        FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < 10);
  }
  else {
    iVar7 = 0;
    puVar6 = &DAT_0032cbe0;
    do {
      if (*(int *)(param_1 + 0x10) == iVar7) {
        iVar4 = FUN_001f48c0(0x9f);
        FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      }
      else {
        iVar4 = FUN_001f48c0(0x9f);
        FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < 10);
  }
  if (*(int *)(param_1 + 0x10) == -1) {
    iVar7 = 0;
    puVar8 = &DAT_0032cc10;
    puVar6 = &DAT_0032cc40;
    do {
      iVar4 = FUN_001f48c0(0x9f);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar8,8);
      if (iVar7 == *(int *)(param_1 + 0xc)) {
        iVar4 = FUN_001f48c0(0x9f);
        FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      }
      else {
        iVar4 = FUN_001f48c0(0x9f);
        FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < 10);
  }
  else {
    iVar7 = 0;
    puVar8 = &DAT_0032cc10;
    puVar6 = &DAT_0032cc40;
    do {
      iVar4 = FUN_001f48c0(0x9f);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar8,8);
      iVar4 = FUN_001f48c0(0x9f);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < 10);
  }
  if (*(int *)(param_1 + 0xc) != -1) {
    if (*(int *)(param_1 + 0x10) == -1) {
      uVar5 = FUN_0017e720();
      cVar2 = FUN_00182c40(uVar5,0);
      if (cVar2 == '\0') {
        uVar5 = FUN_0017e720();
        FUN_001f6720(0x469830,uVar5,9 - *(int *)(param_1 + 0xc),9 - *(int *)(param_1 + 0x62c));
      }
      else {
        uVar5 = FUN_0017e720();
        FUN_001f6720(0x469830,uVar5,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x62c))
        ;
      }
    }
    else {
      uVar5 = FUN_0017e720();
      cVar2 = FUN_00182c40(uVar5,0);
      if (cVar2 == '\0') {
        uVar5 = FUN_0017e720();
        FUN_001f6720(0x469830,uVar5,9 - *(int *)(param_1 + 0xc),9 - *(int *)(param_1 + 0x10));
      }
      else {
        uVar5 = FUN_0017e720();
        FUN_001f6720(0x469830,uVar5,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      }
    }
    uVar5 = FUN_0012f600(fRam00469838 - fRam00469834);
    uVar5 = FUN_00120158(uVar5);
    fVar9 = (float)FUN_001301b8(uVar5);
    FUN_002010a0(0x9f,0xb4,0x3a2,(int)(fVar9 * 1000.0),4);
    FUN_002010a0(0x9f,0xb5,0x3a2,(int)(fRam00469830 * 1000.0),4);
  }
  uVar5 = FUN_0017e720();
  uVar5 = FUN_001f69f0(uVar5);
  uVar5 = FUN_001f69b0(uVar5,1);
  FUN_002011b0(0x9f,0xaf,uVar5);
  FUN_002011b0(0x9f,0xae,0x39e);
  FUN_002011b0(0x9f,0xb3,0x39f);
  FUN_00201140(0x9f,0xac,1,0x39e);
  FUN_00201140(0x9f,0xad,1,0x39f);
  FUN_002011b0(0x9f,0xb1,0x3a0);
  FUN_002011b0(0x9f,0xb2,0x3a1);
  FUN_002011b0(0x9f,0xb0,0x356);
  uVar5 = FUN_0017e720();
  iVar7 = FUN_001f69f0(uVar5);
  FUN_001eea30(iVar3,10,0x16,*(undefined4 *)(&DAT_0032cc90 + iVar7 * 4));
  uVar5 = FUN_0017e720();
  iVar7 = FUN_001f69f0(uVar5);
  FUN_001eea30(iVar3,0xb,0x16,*(undefined4 *)(&DAT_0032cc70 + iVar7 * 4));
  if (*(int *)(param_1 + 0xc) == -1) {
    iVar3 = 0;
    puVar6 = &DAT_0032ccb0;
    do {
      iVar7 = FUN_001f48c0(0xa1);
      FUN_001eeb00(0,*piGpffff8d3c + iVar7 * 0x4f4 + 4,*puVar6,8);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 9);
  }
  else if (*(int *)(param_1 + 0x10) == -1) {
    iVar7 = 0;
    puVar6 = &DAT_0032ccb0;
    do {
      iVar4 = *(int *)(param_1 + 0xc);
      iVar1 = *(int *)(param_1 + 0x62c);
      if (iVar4 < iVar1) {
        if ((iVar7 < iVar4) || (iVar1 <= iVar7)) {
          uVar5 = FUN_0017e720();
          cVar2 = FUN_00182c40(uVar5,0);
          if (cVar2 == '\0') {
            iVar4 = FUN_001f48c0(0xa1);
            FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,(&DAT_0032ccb0)[8 - iVar7]);
          }
          else {
            iVar4 = FUN_001f48c0(0xa1);
            FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
          }
        }
        else {
          uVar5 = FUN_0017e720();
          cVar2 = FUN_00182c40(uVar5,0);
          if (cVar2 == '\0') {
            iVar4 = FUN_001f48c0(0xa1);
            FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,(&DAT_0032ccb0)[8 - iVar7]);
            uVar5 = FUN_0017e720();
            iVar4 = FUN_001f69f0(uVar5);
            FUN_001eea30(iVar3,(&DAT_0032ccb0)[8 - iVar7],0x16,
                         *(undefined4 *)(&DAT_0032cc70 + iVar4 * 4));
          }
          else {
            iVar4 = FUN_001f48c0(0xa1);
            FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
            uVar5 = FUN_0017e720();
            iVar4 = FUN_001f69f0(uVar5);
            FUN_001eea30(iVar3,*puVar6,0x16,*(undefined4 *)(&DAT_0032cc70 + iVar4 * 4));
          }
        }
      }
      else if ((iVar7 < iVar1) || (iVar4 <= iVar7)) {
        uVar5 = FUN_0017e720();
        cVar2 = FUN_00182c40(uVar5,0);
        if (cVar2 == '\0') {
          iVar4 = FUN_001f48c0(0xa1);
          FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,(&DAT_0032ccb0)[8 - iVar7]);
        }
        else {
          iVar4 = FUN_001f48c0(0xa1);
          FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
        }
      }
      else {
        uVar5 = FUN_0017e720();
        cVar2 = FUN_00182c40(uVar5,0);
        if (cVar2 == '\0') {
          iVar4 = FUN_001f48c0(0xa1);
          FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,(&DAT_0032ccb0)[8 - iVar7]);
          uVar5 = FUN_0017e720();
          iVar4 = FUN_001f69f0(uVar5);
          FUN_001eea30(iVar3,(&DAT_0032ccb0)[8 - iVar7],0x16,
                       *(undefined4 *)(&DAT_0032cc70 + iVar4 * 4));
        }
        else {
          iVar4 = FUN_001f48c0(0xa1);
          FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
          uVar5 = FUN_0017e720();
          iVar4 = FUN_001f69f0(uVar5);
          FUN_001eea30(iVar3,*puVar6,0x16,*(undefined4 *)(&DAT_0032cc70 + iVar4 * 4));
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < 9);
  }
  else {
    iVar7 = 0;
    puVar6 = &DAT_0032ccb0;
    do {
      iVar4 = *(int *)(param_1 + 0xc);
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar4 < iVar1) {
        if ((iVar7 < iVar4) || (iVar1 <= iVar7)) {
          uVar5 = FUN_0017e720();
          cVar2 = FUN_00182c40(uVar5,0);
          if (cVar2 == '\0') {
            iVar4 = FUN_001f48c0(0xa1);
            FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,(&DAT_0032ccb0)[8 - iVar7]);
          }
          else {
            iVar4 = FUN_001f48c0(0xa1);
            FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
          }
        }
        else {
          uVar5 = FUN_0017e720();
          cVar2 = FUN_00182c40(uVar5,0);
          if (cVar2 == '\0') {
            iVar4 = FUN_001f48c0(0xa1);
            FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,(&DAT_0032ccb0)[8 - iVar7]);
            uVar5 = FUN_0017e720();
            iVar4 = FUN_001f69f0(uVar5);
            FUN_001eea30(iVar3,(&DAT_0032ccb0)[8 - iVar7],0x16,
                         *(undefined4 *)(&DAT_0032cc70 + iVar4 * 4));
          }
          else {
            iVar4 = FUN_001f48c0(0xa1);
            FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
            uVar5 = FUN_0017e720();
            iVar4 = FUN_001f69f0(uVar5);
            FUN_001eea30(iVar3,*puVar6,0x16,*(undefined4 *)(&DAT_0032cc70 + iVar4 * 4));
          }
        }
      }
      else if ((iVar7 < iVar1) || (iVar4 <= iVar7)) {
        uVar5 = FUN_0017e720();
        cVar2 = FUN_00182c40(uVar5,0);
        if (cVar2 == '\0') {
          iVar4 = FUN_001f48c0(0xa1);
          FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,(&DAT_0032ccb0)[8 - iVar7]);
        }
        else {
          iVar4 = FUN_001f48c0(0xa1);
          FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
        }
      }
      else {
        uVar5 = FUN_0017e720();
        cVar2 = FUN_00182c40(uVar5,0);
        if (cVar2 == '\0') {
          iVar4 = FUN_001f48c0(0xa1);
          FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,(&DAT_0032ccb0)[8 - iVar7]);
          uVar5 = FUN_0017e720();
          iVar4 = FUN_001f69f0(uVar5);
          FUN_001eea30(iVar3,(&DAT_0032ccb0)[8 - iVar7],0x16,
                       *(undefined4 *)(&DAT_0032cc70 + iVar4 * 4));
        }
        else {
          iVar4 = FUN_001f48c0(0xa1);
          FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar6,8);
          uVar5 = FUN_0017e720();
          iVar4 = FUN_001f69f0(uVar5);
          FUN_001eea30(iVar3,*puVar6,0x16,*(undefined4 *)(&DAT_0032cc70 + iVar4 * 4));
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < 9);
  }
  iVar3 = FUN_001f48c0(0x77);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0x9f);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0xa1);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

