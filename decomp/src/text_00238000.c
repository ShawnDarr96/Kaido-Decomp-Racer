// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00238000 - 0x0023c000
#include "ghidra_types.h"

// 0x002380d0  size 0x510
void FUN_002380d0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  
  iVar3 = (int)param_1;
  iVar5 = *(int *)(iVar3 + 0x828);
  *(undefined4 *)(iVar3 + 0x828) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar3 + 0x814);
  }
  else {
    uVar4 = FUN_001f4890(0x249);
    iVar5 = FUN_001f48c0(200);
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
    uVar4 = FUN_001f4890(0x24a);
    iVar5 = FUN_001f48c0(200);
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
    uVar4 = FUN_001f4890(0x242);
    iVar5 = FUN_001f48c0(199);
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
    FUN_00200a10(200,0x36ea70,2,0);
    iVar5 = *(int *)(iVar3 + 0x814);
  }
  if (iVar5 == 4) {
    *(undefined4 *)(iVar3 + 0x824) = 0;
  }
  else if (iVar5 == 5) {
    lVar8 = FUN_00201260(200,0);
    lVar6 = FUN_00201260(199,0);
    if (lVar8 == 0 && lVar6 == 0) {
      *(undefined4 *)(iVar3 + 0x824) = 0;
    }
  }
  else {
    lVar8 = FUN_00201260(200,0);
    if (lVar8 == 0) {
      *(undefined4 *)(iVar3 + 0x824) = 0;
    }
  }
  if (*(int *)(iVar3 + 0x82c) == 0) {
    FUN_002008b0(1);
    if (*(int *)(iVar3 + 0x30) == 0) {
      iVar5 = FUN_001f48c0(200);
      FUN_001eeb00(0,*piRam0036f42c + iVar5 * 0x4f4 + 4,0x3b,8);
      iVar5 = *(int *)(iVar3 + 0x30);
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x30);
    }
    if (iVar5 == *(int *)(iVar3 + 0x34)) {
      iVar5 = FUN_001f48c0(200);
      FUN_001eeb00(0,*piRam0036f42c + iVar5 * 0x4f4 + 4,0x3c,8);
    }
  }
  else {
    if (*(int *)(iVar3 + 0x81c) == 4) {
      *(undefined4 *)(iVar3 + 0x82c) = 0;
    }
    else {
      lVar8 = FUN_00201260(200);
      if (lVar8 == 0) {
        *(undefined4 *)(iVar3 + 0x82c) = 0;
      }
    }
    FUN_002008b0(0);
  }
  iVar2 = FUN_001f48c0(199);
  iVar5 = *piRam0036f42c;
  uVar7 = FUN_001f4890(0x245);
  FUN_001ed190(iVar5 + iVar2 * 0x4f4 + 4,uVar7);
  FUN_00236ac0(param_1);
  uVar1 = DAT_0036ea7c;
  uVar4 = DAT_0036ea78;
  iVar9 = *(int *)(iVar3 + 0x34) + 5;
  iVar2 = FUN_001f48c0(200);
  iVar5 = *(int *)(iVar3 + 0x30);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4 + 4;
  iVar3 = FUN_001f48c0(200);
  FUN_001eeb00(0,*piRam0036f42c + iVar3 * 0x4f4 + 4,uVar1,8);
  if (iVar9 < 6) {
    FUN_001eeb00(0x41800000,iVar2,uVar4,2);
    FUN_001eeb00(0x40c00000,iVar2,uVar4,6);
  }
  else {
    FUN_001eeb00((float)iVar5 * (96.0 / (float)iVar9) + 16.0,iVar2,uVar4,2);
    FUN_001eeb00((5.0 / (float)iVar9) * 6.0,iVar2,uVar4,6);
  }
  iVar5 = FUN_001f48c0(199);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4);
  iVar5 = FUN_001f48c0(200);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4);
  iVar5 = FUN_001f48c0(0xc6);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar5 * 0x4f4 + 4);
  return;
}

// 0x002385e0  size 0xe78
void FUN_002385e0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  iVar1 = param_1[0x20a];
  param_1[0x20a] = 0;
  if (iVar1 == 0) {
LAB_00238610:
    iVar1 = param_1[0x205];
  }
  else {
    uVar5 = FUN_001f4890(0x24b);
    iVar1 = FUN_001f48c0(0xc9);
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
    *(undefined4 *)(iVar1 + 800) = uVar5;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar5 = FUN_001f4890(0x24c);
    iVar1 = FUN_001f48c0(0xc9);
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
    *(undefined4 *)(iVar1 + 0x334) = uVar5;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar5 = FUN_001f4890(0x24d);
    iVar1 = FUN_001f48c0(0xc9);
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
    *(undefined4 *)(iVar1 + 0x340) = 1;
    *(undefined4 *)(iVar1 + 0x348) = uVar5;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar5 = FUN_001f4890(0x242);
    iVar1 = FUN_001f48c0(199);
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
    *(undefined4 *)(iVar1 + 800) = uVar5;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar5 = FUN_001f4890(0x243);
    iVar1 = FUN_001f48c0(199);
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
    *(undefined4 *)(iVar1 + 0x334) = uVar5;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar5 = FUN_001f4890(0x244);
    iVar1 = FUN_001f48c0(199);
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
    *(undefined4 *)(iVar1 + 0x348) = uVar5;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar5 = FUN_001f4890(0x245);
    iVar1 = FUN_001f48c0(199);
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
    *(undefined4 *)(iVar1 + 0x35c) = uVar5;
    *(undefined4 *)(iVar1 + 0x358) = 1;
    uVar5 = FUN_001f4890(0x246);
    iVar1 = FUN_001f48c0(199);
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
    *(undefined4 *)(iVar1 + 0x368) = 0;
    *(undefined4 *)(iVar1 + 0x370) = uVar5;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
    uVar5 = FUN_001f4890(0x247);
    iVar1 = FUN_001f48c0(199);
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
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar5;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar5 = FUN_001f4890(0x248);
    iVar1 = FUN_001f48c0(199);
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
    *(undefined4 *)(iVar1 + 0x398) = uVar5;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    FUN_00200a10(199,0x36ea68,2);
    if (*param_1 == 1) {
      FUN_001f8cd0(iRam0036f458 + 0x654,0x11f,2);
      iVar1 = param_1[0x205];
    }
    else {
      FUN_001f8cd0(iRam0036f458 + 0x654,0x11a,0);
      iVar1 = param_1[0x205];
    }
    if (iVar1 != 0) goto LAB_00238610;
    FUN_001f8ae0(iRam0036f458 + 0x654,1);
    iVar1 = param_1[0x205];
  }
  if (iVar1 == 0) {
    lVar6 = FUN_00201260(199,0);
    if (lVar6 == 0) {
      param_1[0x209] = 0;
    }
  }
  else {
    lVar6 = FUN_00201260(199,1);
    if (lVar6 == 0) {
      param_1[0x209] = 0;
    }
  }
  if (param_1[0x20b] == 0) {
    FUN_002008b0(0 < param_1[4]);
    iVar1 = param_1[0xb];
  }
  else {
    if (param_1[0x207] == 0) {
      lVar6 = FUN_00201260(199,2);
      lVar8 = FUN_00201260(0xc9,1);
      if (lVar6 == 0 && lVar8 == 0) {
        param_1[0x20b] = 0;
        FUN_001f8ca0(iRam0036f458 + 0x654);
      }
    }
    else {
      lVar6 = FUN_00201260(199,3);
      if (lVar6 == 0) {
        param_1[0x20b] = 0;
        FUN_001f8ca0(iRam0036f458 + 0x654);
      }
    }
    FUN_002008b0(0);
    iVar1 = param_1[0xb];
  }
  iVar4 = -1;
  if (iVar1 == 1) {
    lVar6 = FUN_00201260(199,5);
    iVar1 = FUN_001c1890(0);
    if ((*(int *)(iVar1 + param_1[8] * 4 + 0x37b0) == 1) ||
       (lVar8 = FUN_00201260(0xc9,1), lVar8 != 1)) {
      if (lVar6 == 0) {
        FUN_00200fc0(0);
        param_1[0xb] = 2;
        iVar1 = FUN_001f48c0(199);
        iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x374) = 0;
        if (*(int *)(iVar1 + 900) == 0) {
          *(undefined4 *)(iVar1 + 0x380) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x380) = 1;
        }
        iVar1 = FUN_001f48c0(0xc9);
        iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x324) = 0;
        if (*(int *)(iVar1 + 0x334) == 0) {
          *(undefined4 *)(iVar1 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x330) = 1;
        }
        iVar1 = FUN_001f48c0(0xc9);
        iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x310) = 0;
        if (*(int *)(iVar1 + 800) == 0) {
          *(undefined4 *)(iVar1 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x31c) = 1;
        }
        *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffbfffff;
        param_1[8] = param_1[param_1[7] + 0xe];
      }
      else {
        iVar4 = (param_1[7] + param_1[4] + 1) % param_1[4];
      }
    }
    else {
      iVar4 = (param_1[7] + param_1[4] + 1) % param_1[4];
    }
  }
  else if (iVar1 == 0) {
    lVar6 = FUN_00201260(199,4);
    iVar1 = FUN_001c1890(0);
    if ((*(int *)(iVar1 + param_1[8] * 4 + 0x37b0) == 1) ||
       (lVar8 = FUN_00201260(0xc9,1), lVar8 != 1)) {
      if (lVar6 == 0) {
        FUN_00200fc0(0);
        param_1[0xb] = 2;
        iVar1 = FUN_001f48c0(199);
        iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x360) = 0;
        if (*(int *)(iVar1 + 0x370) == 0) {
          *(undefined4 *)(iVar1 + 0x36c) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x36c) = 1;
        }
        iVar1 = FUN_001f48c0(0xc9);
        iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x324) = 0;
        if (*(int *)(iVar1 + 0x334) == 0) {
          *(undefined4 *)(iVar1 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x330) = 1;
        }
        iVar1 = FUN_001f48c0(0xc9);
        iVar1 = *piRam0036f42c + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x310) = 0;
        if (*(int *)(iVar1 + 800) == 0) {
          *(undefined4 *)(iVar1 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x31c) = 1;
        }
        *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffbfffff;
        param_1[8] = param_1[param_1[7] + 0xe];
      }
      else {
        iVar4 = (param_1[7] + param_1[4] + -1) % param_1[4];
      }
    }
    else {
      iVar4 = (param_1[7] + param_1[4] + -1) % param_1[4];
    }
  }
  else if (iVar1 != 2) {
    iVar1 = param_1[7];
    goto LAB_002387d8;
  }
  iVar1 = param_1[7];
LAB_002387d8:
  iVar1 = param_1[iVar1 + 0xe];
  uVar7 = FUN_001b55a0((short)iVar1);
  uVar2 = FUN_001b4920(uVar7);
  FUN_002010a0(199,0x14,0x3c,param_1[7] + 1,param_1[4]);
  iVar3 = FUN_001c1890(0);
  if (*(int *)(iVar3 + iVar1 * 4 + 0x37b0) == 1) {
    uVar7 = FUN_001f6ee0(iVar1);
    FUN_002011b0(199,0x17,uVar7);
    uVar7 = FUN_001f6ef0(iVar1);
    FUN_002011b0(199,0x19,uVar7);
    FUN_002011b0(199,0x1a,(uVar2 & 0xff) + 0x67);
  }
  else {
    FUN_002011b0(199,0x17,0x5c);
    FUN_002011b0(199,0x19,0x5c);
    FUN_002011b0(199,0x1a,0x5b);
  }
  iVar3 = FUN_001c1890(0);
  if (*(short *)(iVar3 + iVar1 * 2 + 0x3fc4) < 1) {
    iVar1 = FUN_001f48c0(199);
    FUN_001eeb00(0,*piRam0036f42c + iVar1 * 0x4f4 + 4,4,8);
  }
  else {
    iVar1 = FUN_001f48c0(199);
    FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4,4,8);
  }
  if (iVar4 != -1) {
    iVar1 = param_1[iVar4 + 0xe];
    uVar7 = FUN_001b55a0((short)iVar1);
    uVar2 = FUN_001b4920(uVar7);
    FUN_002010a0(199,0x1b,0x3a,iVar1);
    iVar4 = FUN_001c1890(0);
    if (*(int *)(iVar4 + iVar1 * 4 + 0x37b0) == 1) {
      uVar7 = FUN_001f6ee0(iVar1);
      FUN_002011b0(199,0x1c,uVar7);
      uVar7 = FUN_001f6ef0(iVar1);
      FUN_002011b0(199,0x1d,uVar7);
      FUN_002011b0(199,0x1e,(uVar2 & 0xff) + 0x67);
    }
    else {
      FUN_002011b0(199,0x1c,0x5c);
      FUN_002011b0(199,0x1d,0x5c);
      FUN_002011b0(199,0x1e,0x5b);
    }
    iVar4 = FUN_001c1890(0);
    if (*(short *)(iVar4 + iVar1 * 2 + 0x3fc4) < 1) {
      iVar1 = FUN_001f48c0(199);
      FUN_001eeb00(0,*piRam0036f42c + iVar1 * 0x4f4 + 4,0xd,8);
    }
    else {
      iVar1 = FUN_001f48c0(199);
      FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4,0xd,8);
    }
  }
  iVar1 = FUN_001c1890(0);
  if (*(short *)(iVar1 + param_1[8] * 2 + 0x3fc4) < 1) {
    iVar1 = FUN_001c1890(0);
    if (*(int *)(iVar1 + param_1[8] * 4 + 0x37b0) == 1) {
      iVar1 = FUN_001f48c0(199);
      FUN_001eea30(*piRam0036f42c + iVar1 * 0x4f4 + 4,0x13,9,7);
    }
    else {
      iVar1 = FUN_001f48c0(199);
      FUN_001eea30(*piRam0036f42c + iVar1 * 0x4f4 + 4,0x13,9,7);
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x400000;
      FUN_00201260(0xc9,2);
      if ((param_1[8] == param_1[param_1[7] + 0xe]) && (lVar6 = FUN_00201260(0xc9,0), lVar6 == 0)) {
        *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffbfffff;
      }
    }
  }
  else {
    FUN_00201260(199,6);
  }
  FUN_001f8860(iRam0036f458 + 0x654);
  iVar1 = FUN_001c1890(0);
  if (*(int *)(iVar1 + param_1[8] * 4 + 0x37b0) != 1) {
    FUN_002011b0(0xc9,0x10,0x29c);
    iVar1 = FUN_001f48c0(0xc9);
    FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  }
  iVar1 = FUN_001f48c0(199);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xc6);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00239460  size 0x330
void FUN_00239460(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x828);
  *(undefined4 *)(iVar4 + 0x828) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x24e);
    iVar1 = FUN_001f48c0(0xca);
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
    uVar2 = FUN_001f4890(0x24f);
    iVar1 = FUN_001f48c0(0xca);
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
    uVar2 = FUN_001f4890(0x250);
    iVar1 = FUN_001f48c0(0xca);
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
    uVar2 = FUN_001f4890(0x251);
    iVar1 = FUN_001f48c0(0xca);
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
    FUN_00200ef0(0);
    FUN_00200a10(0xca,(int)register0x000001c0 + -0x7c90,2,0);
  }
  lVar3 = FUN_00201260(0xca,0);
  if (lVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x824) = 0;
  }
  if (*(int *)(iVar4 + 0x82c) == 0) {
    FUN_002008b0(1);
  }
  else {
    lVar3 = FUN_00201260(0xca);
    if (lVar3 == 0) {
      *(undefined4 *)(iVar4 + 0x82c) = 0;
    }
    FUN_002008b0(0);
  }
  FUN_001fac40(iVar4 + 0x834,0x32b670,0x32b630);
  FUN_00237210(param_1,0xffffffffffffffff);
  iVar1 = FUN_001f48c0(0xca);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_00201260(0xc6,6);
  iVar1 = FUN_001f48c0(0xc6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00239790  size 0xb78
void FUN_00239790(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  
  uVar1 = *(uint *)(iGpffff8d68 + 0x28);
  iVar14 = (int)param_1;
  iVar13 = *(int *)(iVar14 + 0x828);
  *(undefined4 *)(iVar14 + 0x828) = 0;
  if (iVar13 == 0) {
    iVar13 = *(int *)(iVar14 + 0x814);
  }
  else {
    uVar7 = FUN_001f4890(0x23b);
    iVar13 = FUN_001f48c0(0xc6);
    iVar13 = *piGpffff8d3c + iVar13 * 0x4f4;
    *(undefined4 *)(iVar13 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar13 + 800) = 0;
    *(undefined4 *)(iVar13 + 0x310) = 0;
    if (*(int *)(iVar13 + 800) == 0) {
      *(undefined4 *)(iVar13 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar13 + 0x310) = 0;
    if (*(int *)(iVar13 + 800) == 0) {
      *(undefined4 *)(iVar13 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar13 + 0x318) = 0;
    *(undefined4 *)(iVar13 + 800) = uVar7;
    *(undefined4 *)(iVar13 + 0x31c) = 1;
    uVar7 = FUN_001f4890(0x23d);
    iVar13 = FUN_001f48c0(0xc6);
    iVar13 = *piGpffff8d3c + iVar13 * 0x4f4;
    *(undefined4 *)(iVar13 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x348) = 0;
    *(undefined4 *)(iVar13 + 0x338) = 0;
    if (*(int *)(iVar13 + 0x348) == 0) {
      *(undefined4 *)(iVar13 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x344) = 1;
    }
    *(undefined4 *)(iVar13 + 0x338) = 0;
    if (*(int *)(iVar13 + 0x348) == 0) {
      *(undefined4 *)(iVar13 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x344) = 1;
    }
    *(undefined4 *)(iVar13 + 0x340) = 0;
    *(undefined4 *)(iVar13 + 0x348) = uVar7;
    *(undefined4 *)(iVar13 + 0x344) = 1;
    uVar7 = FUN_001f4890(0x23c);
    iVar13 = FUN_001f48c0(0xc6);
    iVar13 = *piGpffff8d3c + iVar13 * 0x4f4;
    *(undefined4 *)(iVar13 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x334) = 0;
    *(undefined4 *)(iVar13 + 0x324) = 0;
    if (*(int *)(iVar13 + 0x334) == 0) {
      *(undefined4 *)(iVar13 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x330) = 1;
    }
    *(undefined4 *)(iVar13 + 0x324) = 0;
    if (*(int *)(iVar13 + 0x334) == 0) {
      *(undefined4 *)(iVar13 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x330) = 1;
    }
    *(undefined4 *)(iVar13 + 0x32c) = 0;
    *(undefined4 *)(iVar13 + 0x334) = uVar7;
    *(undefined4 *)(iVar13 + 0x330) = 1;
    uVar7 = FUN_001f4890(0x23e);
    iVar13 = FUN_001f48c0(0xc6);
    iVar13 = *piGpffff8d3c + iVar13 * 0x4f4;
    *(undefined4 *)(iVar13 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x35c) = 0;
    *(undefined4 *)(iVar13 + 0x34c) = 0;
    if (*(int *)(iVar13 + 0x35c) == 0) {
      *(undefined4 *)(iVar13 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x358) = 1;
    }
    *(undefined4 *)(iVar13 + 0x34c) = 0;
    if (*(int *)(iVar13 + 0x35c) == 0) {
      *(undefined4 *)(iVar13 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x358) = 1;
    }
    *(undefined4 *)(iVar13 + 0x354) = 0;
    *(undefined4 *)(iVar13 + 0x35c) = uVar7;
    *(undefined4 *)(iVar13 + 0x358) = 1;
    uVar7 = FUN_001f4890(0x240);
    iVar13 = FUN_001f48c0(0xc6);
    iVar13 = *piGpffff8d3c + iVar13 * 0x4f4;
    *(undefined4 *)(iVar13 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x370) = 0;
    *(undefined4 *)(iVar13 + 0x360) = 0;
    if (*(int *)(iVar13 + 0x370) == 0) {
      *(undefined4 *)(iVar13 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar13 + 0x360) = 0;
    if (*(int *)(iVar13 + 0x370) == 0) {
      *(undefined4 *)(iVar13 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar13 + 0x368) = 0;
    *(undefined4 *)(iVar13 + 0x370) = uVar7;
    *(undefined4 *)(iVar13 + 0x36c) = 1;
    uVar7 = FUN_001f4890(0x23f);
    iVar13 = FUN_001f48c0(0xc6);
    iVar13 = *piGpffff8d3c + iVar13 * 0x4f4;
    *(undefined4 *)(iVar13 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar13 + 900) = 0;
    *(undefined4 *)(iVar13 + 0x374) = 0;
    if (*(int *)(iVar13 + 900) == 0) {
      *(undefined4 *)(iVar13 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x380) = 1;
    }
    *(undefined4 *)(iVar13 + 0x374) = 0;
    if (*(int *)(iVar13 + 900) == 0) {
      *(undefined4 *)(iVar13 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x380) = 1;
    }
    *(undefined4 *)(iVar13 + 0x37c) = 0;
    *(undefined4 *)(iVar13 + 900) = uVar7;
    *(undefined4 *)(iVar13 + 0x380) = 1;
    uVar7 = FUN_001f4890(0x29f);
    iVar13 = FUN_001f48c0(0xc6);
    iVar13 = *piGpffff8d3c + iVar13 * 0x4f4;
    *(undefined4 *)(iVar13 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x3ac) = 0;
    *(undefined4 *)(iVar13 + 0x39c) = 0;
    if (*(int *)(iVar13 + 0x3ac) == 0) {
      *(undefined4 *)(iVar13 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar13 + 0x39c) = 0;
    if (*(int *)(iVar13 + 0x3ac) == 0) {
      *(undefined4 *)(iVar13 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar13 + 0x3a4) = 0;
    *(undefined4 *)(iVar13 + 0x3ac) = uVar7;
    *(undefined4 *)(iVar13 + 0x3a8) = 1;
    uVar7 = FUN_001f4890(0x2e0);
    iVar13 = FUN_001f48c0(0xc6);
    iVar13 = *piGpffff8d3c + iVar13 * 0x4f4;
    *(undefined4 *)(iVar13 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x3c0) = 0;
    *(undefined4 *)(iVar13 + 0x3b0) = 0;
    if (*(int *)(iVar13 + 0x3c0) == 0) {
      *(undefined4 *)(iVar13 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar13 + 0x3b0) = 0;
    if (*(int *)(iVar13 + 0x3c0) == 0) {
      *(undefined4 *)(iVar13 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar13 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar13 + 0x3b8) = 0;
    *(undefined4 *)(iVar13 + 0x3c0) = uVar7;
    *(undefined4 *)(iVar13 + 0x3bc) = 1;
    uVar7 = FUN_001f4890(0x241);
    iVar13 = FUN_001f48c0(0xc6);
    iVar13 = *piGpffff8d3c + iVar13 * 0x4f4;
    if (*(int *)(iVar13 + 0x398) == 0) {
      *(undefined4 *)(iVar13 + 0x38c) = 0xffffffff;
      *(undefined4 *)(iVar13 + 0x398) = 0;
      *(undefined4 *)(iVar13 + 0x388) = 0;
      if (*(int *)(iVar13 + 0x398) == 0) {
        *(undefined4 *)(iVar13 + 0x394) = 0;
      }
      else {
        *(undefined4 *)(iVar13 + 0x394) = 1;
      }
      *(undefined4 *)(iVar13 + 0x388) = 0;
      if (*(int *)(iVar13 + 0x398) == 0) {
        *(undefined4 *)(iVar13 + 0x394) = 0;
      }
      else {
        *(undefined4 *)(iVar13 + 0x394) = 1;
      }
      *(undefined4 *)(iVar13 + 0x390) = 1;
      *(undefined4 *)(iVar13 + 0x398) = uVar7;
      *(undefined4 *)(iVar13 + 0x394) = 1;
    }
    FUN_00200fc0(0);
    iVar13 = *(int *)(iVar14 + 0x814);
  }
  if (iVar13 == 1) {
    if (*(int *)(iVar14 + 0x24) == 1) {
      lVar10 = FUN_00201260(0xc6,0);
      if (lVar10 == 0) {
        *(undefined4 *)(iVar14 + 0x824) = 0;
      }
    }
    else {
      lVar10 = FUN_00201260(0xc6,8);
      if (lVar10 == 0) {
        *(undefined4 *)(iVar14 + 0x824) = 0;
      }
    }
  }
  else if (iVar13 == 2) {
    lVar10 = FUN_00201260(0xc6,0);
    if (lVar10 == 0) {
      *(undefined4 *)(iVar14 + 0x824) = 0;
    }
  }
  else {
    lVar10 = FUN_00201260(0xc6,0);
    lVar11 = FUN_00201260(0xc6,2);
    if (lVar10 == 0 && lVar11 == 0) {
      *(undefined4 *)(iVar14 + 0x824) = 0;
    }
  }
  bVar5 = true;
  bVar4 = (uVar1 & 1) != 0;
  if (*(int *)(iVar14 + 0x82c) != 0) {
    bVar4 = bVar5;
    if (*(int *)(iVar14 + 0x81c) == 1) {
      lVar10 = FUN_00201260(0xc6,7);
      if (lVar10 == 0) {
        *(undefined4 *)(iVar14 + 0x82c) = 0;
      }
    }
    else if ((*(int *)(iGpffff8d68 + 0x20) == 0xb) || (*(int *)(iGpffff8d68 + 0x20) == 0x15)) {
      lVar10 = FUN_00201260(0xc6,1);
      lVar11 = FUN_00201260(0xc6,3);
      if (lVar10 == 0 && lVar11 == 0) {
        *(undefined4 *)(iVar14 + 0x82c) = 0;
      }
    }
    else {
      lVar10 = FUN_00201260(0xc6);
      if (lVar10 == 0) {
        *(undefined4 *)(iVar14 + 0x82c) = 0;
      }
    }
  }
  iVar13 = -1;
  if (*(int *)(iVar14 + 0x2c) == 1) {
    FUN_00200fc0(0);
    lVar10 = FUN_00201260(0xc6,5);
    if (lVar10 == 0) {
      *(undefined4 *)(iVar14 + 0x2c) = 2;
      iVar9 = FUN_001f48c0(0xc6);
      iVar9 = *piGpffff8d3c + iVar9 * 0x4f4;
      *(undefined4 *)(iVar9 + 0x374) = 0;
      if (*(int *)(iVar9 + 900) == 0) {
        *(undefined4 *)(iVar9 + 0x380) = 0;
      }
      else {
        *(undefined4 *)(iVar9 + 0x380) = 1;
      }
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    }
    else {
      iVar13 = (*(int *)(iVar14 + 0x10) + (*(int *)(iVar14 + 0x1c) - *(int *)(iVar14 + 0x28)) + 9) %
               *(int *)(iVar14 + 0x10);
    }
  }
  else if (*(int *)(iVar14 + 0x2c) == 0) {
    lVar10 = FUN_00201260(0xc6,4);
    if (lVar10 == 0) {
      FUN_00200fc0(0);
      *(undefined4 *)(iVar14 + 0x2c) = 2;
      iVar9 = FUN_001f48c0(0xc6);
      iVar9 = *piGpffff8d3c + iVar9 * 0x4f4;
      *(undefined4 *)(iVar9 + 0x360) = 0;
      if (*(int *)(iVar9 + 0x370) == 0) {
        *(undefined4 *)(iVar9 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar9 + 0x36c) = 1;
      }
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    }
    else {
      iVar13 = (*(int *)(iVar14 + 0x10) + (*(int *)(iVar14 + 0x1c) - *(int *)(iVar14 + 0x28)) + -1)
               % *(int *)(iVar14 + 0x10);
    }
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0xc6,*(undefined4 *)(&DAT_0032b600 + *(int *)(iVar14 + 0x28) * 4),0,0);
  }
  else {
    FUN_00200ef0(0);
  }
  uVar6 = uGpffff836c;
  uVar7 = uGpffff8368;
  iVar2 = *(int *)(iVar14 + 0x10);
  iVar9 = *(int *)(iVar14 + 0x1c);
  iVar3 = *(int *)(iVar14 + 0x28);
  iVar8 = FUN_001f48c0(0xc6);
  iVar8 = *piGpffff8d3c + iVar8 * 0x4f4 + 4;
  iVar9 = (iVar2 + (iVar9 - iVar3)) % iVar2;
  if (iVar2 < 10) {
    FUN_001eeb00(0x41800000,iVar8,uVar7,2);
    FUN_001eeb00(0x41780000,iVar8,uVar7,6);
    iVar9 = FUN_001f48c0(0xc6);
    FUN_001eeb00(0,*piGpffff8d3c + iVar9 * 0x4f4 + 4,uVar6,8);
  }
  else if (iVar2 < iVar9 + 9) {
    fVar15 = (float)((iVar9 + 9) - iVar2);
    FUN_001eeb00((float)iVar9 * (248.0 / (float)iVar2) + 16.0,iVar8,uVar7,2);
    FUN_001eeb00(((9.0 - fVar15) / (float)iVar2) * 15.5,iVar8,uVar7,6);
    FUN_001eeb00(0x41800000,iVar8,uVar6,2);
    FUN_001eeb00((fVar15 / (float)iVar2) * 15.5,iVar8,uVar6,6);
    iVar9 = FUN_001f48c0(0xc6);
    FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar9 * 0x4f4 + 4,uVar6,8);
  }
  else {
    FUN_001eeb00((float)iVar9 * (248.0 / (float)iVar2) + 16.0,iVar8,uVar7,2);
    FUN_001eeb00((9.0 / (float)iVar2) * 15.5,iVar8,uVar7,6);
    iVar9 = FUN_001f48c0(0xc6);
    FUN_001eeb00(0,*piGpffff8d3c + iVar9 * 0x4f4 + 4,uVar6,8);
  }
  FUN_00237210(param_1,iVar13);
  iVar13 = 0;
  puVar12 = &DAT_0032b510;
  do {
    if (iVar13 < *(int *)(iVar14 + 0x10)) {
      if (!bVar4) {
        iVar9 = FUN_001f48c0(0xc6);
        FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar9 * 0x4f4 + 4,puVar12[5],8);
      }
    }
    else {
      iVar9 = FUN_001f48c0(0xc6);
      FUN_001eeb00(0,*piGpffff8d3c + iVar9 * 0x4f4 + 4,puVar12[5],8);
    }
    iVar13 = iVar13 + 1;
    puVar12 = puVar12 + 6;
  } while (iVar13 < 9);
  FUN_00201260(0xc6,6);
  iVar13 = FUN_001f48c0(0xc6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar13 * 0x4f4 + 4);
  return;
}

// 0x0023a310  size 0x58
void FUN_0023a310(void)

{
  int iVar1;
  
  iVar1 = FUN_001f48c0(7);
  FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4,0x25,8);
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 4;
  return;
}

// 0x0023a370  size 0x200
void FUN_0023a370(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((*(uint *)(iRam0036f458 + 0x28) & 2) == 0) {
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1000;
  }
  piVar4 = (int *)param_1;
  (*(code *)(&PTR_FUN_0032b4f0)[piVar4[0x206]])(param_1);
  if (*piVar4 == 1) {
    iVar1 = FUN_001f48c0(0xcb);
    FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
    iVar1 = FUN_001f48c0(0xcc);
    FUN_001ecd80(*piRam0036f42c + iVar1 * 0x4f4 + 4,0);
    iVar1 = FUN_001f48c0(0xcc);
    FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  }
  else {
    FUN_00201260(0xc5,0);
    iVar1 = FUN_001f48c0(0xc5);
    FUN_001eda40(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  }
  FUN_002011b0(0xc6,0x6d,0xef);
  iVar1 = FUN_001f48c0(7);
  FUN_001eeb00(0,*piRam0036f42c + iVar1 * 0x4f4 + 4,0x25,8);
  uVar3 = 0;
  if (piVar4[0x21a] != -3) {
    uVar3 = 2;
  }
  if (piVar4[0x219] != -3) {
    uVar3 = uVar3 | 1;
  }
  FUN_001ff790(uVar3,0xffffffffffffffff);
  if (((*(uint *)(iRam0036f458 + 0x28) & 4) == 0) &&
     (lVar2 = FUN_001fb170(piVar4 + 0x205), lVar2 == 1)) {
    if ((*(uint *)(iRam0036f458 + 0x28) & 1) == 0) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x0023a570  size 0x9c
void FUN_0023a570(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_001f4890(0x23a);
  iVar2 = FUN_001f48c0(0xc5);
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
  *(undefined4 *)(iVar2 + 0x318) = 1;
  *(undefined4 *)(iVar2 + 800) = uVar1;
  *(undefined4 *)(iVar2 + 0x31c) = 1;
  return;
}

// 0x0023a610  size 0x320
void FUN_0023a610(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
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
      FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4,param_3,8);
      iVar3 = FUN_001f48c0(param_1);
      FUN_001f5380(*piRam0036f42c + iVar3 * 0x4f4 + 4,param_3,2,0x10);
      iVar3 = FUN_001f48c0(param_1);
      FUN_001eeb00((fVar4 - (float)(param_4 + 0x10)) / 16.0,*piRam0036f42c + iVar3 * 0x4f4 + 4,
                   param_3,6);
      fVar5 = (float)(param_4 + 0x10) - fVar2;
    }
    else {
      iVar3 = FUN_001f48c0(param_1);
      FUN_001eeb00(0,*piRam0036f42c + iVar3 * 0x4f4 + 4,param_3,8);
    }
  }
  else {
    fVar2 = 16.0;
    fVar5 = (float)param_4;
  }
  iVar3 = FUN_001f48c0(param_1);
  FUN_001eeb00(fVar2,*piRam0036f42c + iVar3 * 0x4f4 + 4,param_2,2);
  iVar3 = FUN_001f48c0(param_1);
  FUN_001eeb00(fVar5 / 16.0,*piRam0036f42c + iVar3 * 0x4f4 + 4,param_2,6);
  return;
}

// 0x0023a930  size 0x160
void FUN_0023a930(int param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x124) < 1) {
    FUN_002011b0(0xd5,0x32,0x289);
  }
  else {
    uVar2 = FUN_001c1890(0);
    for (iVar4 = 0; (iVar4 < 6 && (iVar4 < *(int *)(param_1 + 0x124))); iVar4 = iVar4 + 1) {
      puVar1 = (undefined2 *)
               FUN_001bc600(uVar2,*(undefined4 *)
                                   (param_1 + ((*(int *)(param_1 + 0x34) + iVar4) %
                                              *(int *)(param_1 + 0x124)) * 4 + 0xc0));
      uVar3 = FUN_001f7e90(*puVar1,0xffffffffffffffff);
      FUN_002011b0(0xd5,iVar4 + 0x17,uVar3);
      uVar3 = FUN_001f81a0(*puVar1,0xffffffffffffffff);
      FUN_002011b0(0xd5,iVar4 + 0x1e,uVar3);
      uVar3 = FUN_001f8170(*puVar1,0xffffffffffffffff);
      FUN_00201140(0xd5,iVar4 + 0x25,4,uVar3);
    }
  }
  FUN_0023a610(0xd5,0xd,0xe,0x70,*(undefined4 *)(param_1 + 0x124),6,*(undefined4 *)(param_1 + 0x34))
  ;
  iVar4 = FUN_001f48c0(0xd5);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4);
  return;
}

// 0x0023aaa0  size 0x350
void FUN_0023aaa0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar3 = FUN_001c1890(0);
  FUN_002011b0(0xd4,0x4b,0x283);
  uVar3 = FUN_001b8990(uVar3);
  FUN_002010a0(0xd4,0x4c,0x3d,uVar3,0xf);
  uVar3 = FUN_00292700(param_1);
  uVar3 = FUN_001f5df0(uVar3);
  FUN_002011b0(0xd4,0x4f,uVar3);
  iVar6 = 0;
  do {
    iVar7 = (int)param_1;
    if (iVar6 < 3) {
      uVar8 = *(undefined4 *)
               (iVar7 + ((*(int *)(iVar7 + 0x28) + iVar6) % *(int *)(iVar7 + 0xb4)) * 4 + 0x3c);
    }
    else if (*(char *)(iVar7 + 0x30) == -1) {
      uVar8 = *(undefined4 *)
               (iVar7 + ((*(int *)(iVar7 + 0x28) + -1) % *(int *)(iVar7 + 0xb4)) * 4 + 0x3c);
    }
    else {
      uVar8 = *(undefined4 *)
               (iVar7 + ((*(int *)(iVar7 + 0x28) + iVar6) % *(int *)(iVar7 + 0xb4)) * 4 + 0x3c);
    }
    iVar1 = FUN_001f48c0(0xd4);
    iVar2 = *piGpffff8d3c;
    uVar3 = FUN_001f5de0(uVar8);
    FUN_001eea30(iVar2 + iVar1 * 0x4f4 + 4,iVar6 + 0x55,0x16,uVar3);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  uVar3 = FUN_00292700(param_1);
  uVar3 = FUN_001f5d60(uVar3);
  uVar4 = FUN_001f6630(uVar3);
  uVar3 = FUN_001f6460(uVar3);
  FUN_002010a0(0xd4,0x4e,0x45,uVar4,uVar3);
  FUN_002011b0(0xd4,0x4d,0x284);
  uVar3 = FUN_00292700(param_1);
  uVar3 = FUN_001f5c80(uVar3);
  FUN_001fe620(0xd4,0x4a,uVar3);
  lVar5 = FUN_00292690(param_1);
  if (lVar5 == 0) {
    iVar6 = FUN_001f48c0(0xd4);
    FUN_001eeb00(0,*piGpffff8d3c + iVar6 * 0x4f4 + 4,0x3f,8);
  }
  else {
    iVar6 = FUN_001f48c0(0xd4);
    FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar6 * 0x4f4 + 4,0x3f,8);
  }
  uVar3 = FUN_00292700(param_1);
  uVar3 = FUN_001f5d20(uVar3);
  FUN_002011b0(0xd4,0x50,uVar3);
  if ((*(int *)(iVar7 + 0xb4) < 3) && (iVar6 = 0, 0 < 3 - *(int *)(iVar7 + 0xb4))) {
    do {
      iVar2 = FUN_001f48c0(0xd4);
      FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x57 - iVar6,8);
      iVar2 = FUN_001f48c0(0xd4);
      FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x53 - iVar6,8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3 - *(int *)(iVar7 + 0xb4));
  }
  iVar6 = FUN_001f48c0(0xd4);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar6 * 0x4f4 + 4);
  return;
}

// 0x0023ae00  size 0xec
void FUN_0023ae00(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(0);
  }
  lVar2 = FUN_001ff320(0x288,0xffffffffffffffff,0);
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  FUN_00201260(0xd3,0);
  iVar1 = FUN_001f48c0(0xd3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0023aef0  size 0x434
void FUN_0023aef0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = (int)param_1;
  iVar2 = *(int *)(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_001f4890(399);
    iVar2 = FUN_001f48c0(0xd6);
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
    uVar3 = FUN_001f4890(400);
    iVar2 = FUN_001f48c0(0xd6);
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
    iVar4 = FUN_001f48c0(0xd6);
    iVar2 = *piGpffff8d3c;
    uVar7 = FUN_001f4890(400);
    FUN_001ed190(iVar2 + iVar4 * 0x4f4 + 4,uVar7);
    uVar3 = FUN_001f4890(0x18a);
    iVar2 = FUN_001f48c0(0xd4);
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
    *(undefined4 *)(iVar2 + 0x3c0) = uVar3;
    *(undefined4 *)(iVar2 + 0x3bc) = 1;
    uVar3 = FUN_001f4890(0x18e);
    iVar2 = FUN_001f48c0(0xd5);
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
  lVar5 = FUN_00201260(0xd4,8);
  lVar6 = FUN_00201260(0xd5,1);
  if ((lVar5 == 0 && lVar6 == 0) && (lVar5 = FUN_00201260(0xd6,0), lVar5 == 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  if ((*(int *)(iVar1 + 0x18) != 0) && (lVar5 = FUN_00201260(0xd6), lVar5 == 0)) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  uVar7 = FUN_00292700(param_1);
  uVar7 = FUN_001f5df0(uVar7);
  FUN_002010a0(0xd6,0x28,0x286,uVar7);
  uVar7 = FUN_00292700(param_1);
  uVar7 = FUN_001f5d60(uVar7);
  uVar8 = FUN_001f6630(uVar7);
  uVar7 = FUN_001f6460(uVar7);
  FUN_002010a0(0xd6,0x27,0x45,uVar8,uVar7);
  FUN_002011b0(0xd6,0x26,0x284);
  uVar7 = FUN_00292700(param_1);
  uVar7 = FUN_001f5c80(uVar7);
  FUN_001fe620(0xd6,0x29,uVar7);
  iVar1 = FUN_001f48c0(0xd6);
  iVar2 = *piGpffff8d3c;
  uVar7 = FUN_00292700(param_1);
  uVar7 = FUN_001f5de0(uVar7);
  FUN_001eea30(iVar2 + iVar1 * 0x4f4 + 4,0x24,0x16,uVar7);
  FUN_00201260(0xd3,0);
  iVar2 = FUN_001f48c0(0xd3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_0023aaa0(param_1);
  FUN_0023a930(param_1);
  iVar2 = FUN_001f48c0(0xd6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_001ff790(2,0xffffffffffffffff);
  return;
}

// 0x0023b330  size 0xe8
void FUN_0023b330(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x14);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(2);
  }
  lVar2 = FUN_001ff320(0x285,*(undefined4 *)(iVar3 + 0x38),(int)register0x000001c0 + -0x7c50);
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  if (*(int *)(iVar3 + 0x18) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
  }
  FUN_00201260(0xd3,0);
  iVar1 = FUN_001f48c0(0xd3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_0023aaa0(param_1);
  FUN_0023a930(param_1);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0023b420  size 0x2a8
void FUN_0023b420(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  iVar2 = piVar4[5];
  piVar4[5] = 0;
  if (iVar2 == 0) {
    iVar2 = piVar4[0x49];
  }
  else {
    uVar1 = FUN_001f4890(0x18d);
    iVar2 = FUN_001f48c0(0xd5);
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
    uVar1 = FUN_001f4890(0x18e);
    iVar2 = FUN_001f48c0(0xd5);
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
    FUN_00200a10(0xd5,(int)register0x000001c0 + -0x7c58,2,0);
    iVar2 = piVar4[0x49];
  }
  FUN_002008b0(6 < iVar2);
  if (piVar4[0xd] == 0) {
    iVar2 = FUN_001f48c0(0xd5);
    FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x2c,8);
    iVar2 = *piVar4;
  }
  else {
    if (piVar4[0x49] + -6 == piVar4[0xd]) {
      iVar2 = FUN_001f48c0(0xd5);
      FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x2d,8);
    }
    iVar2 = *piVar4;
  }
  if (iVar2 == 3) {
    piVar4[4] = 0;
  }
  else {
    lVar3 = FUN_00201260(0xd5,0);
    if (lVar3 == 0) {
      piVar4[4] = 0;
    }
  }
  if ((piVar4[6] != 0) &&
     ((FUN_002008b0(0), piVar4[2] != 0 || (lVar3 = FUN_00201260(0xd5,1), lVar3 == 0)))) {
    piVar4[6] = 0;
  }
  FUN_00201260(0xd3,0);
  iVar2 = FUN_001f48c0(0xd3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_0023aaa0(param_1);
  FUN_0023a930(param_1);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0023b6d0  size 0xfc
void FUN_0023b6d0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x14);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  if (iVar1 != 0) {
    FUN_00200ef0(0);
    FUN_001ff610(0);
  }
  lVar2 = FUN_001ff320(0x287,0xffffffffffffffff,0);
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  if (*(int *)(iVar3 + 0x18) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
  }
  FUN_00201260(0xd3,0);
  iVar1 = FUN_001f48c0(0xd3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_0023aaa0(param_1);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0023b7d0  size 0xa00
void FUN_0023b7d0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar2 = piVar7[5];
  piVar7[5] = 0;
  if (iVar2 != 0) {
    if (*piVar7 == 2) {
      iVar2 = piVar7[0xb];
      if (iVar2 == 2) {
        uVar1 = FUN_001f4890(0x185);
        iVar2 = FUN_001f48c0(0xd4);
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
      }
      else if (iVar2 == 1) {
        uVar1 = FUN_001f4890(0x184);
        iVar2 = FUN_001f48c0(0xd4);
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
      }
      else if (iVar2 == 0) {
        uVar1 = FUN_001f4890(0x183);
        iVar2 = FUN_001f48c0(0xd4);
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
      }
    }
    else {
      if (*piVar7 == 4) {
        iVar3 = FUN_001f48c0(0xd4);
        iVar2 = *piGpffff8d3c;
        uVar6 = FUN_001f4890(0x183);
        FUN_001ed190(iVar2 + iVar3 * 0x4f4 + 4,uVar6);
        iVar2 = *piVar7;
      }
      else {
        iVar2 = *piVar7;
      }
      if (iVar2 == 1) {
        iVar2 = FUN_001f48c0(0xd4);
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
      }
      else {
        uVar1 = FUN_001f4890(0x182);
        iVar2 = FUN_001f48c0(0xd4);
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
      }
    }
    uVar1 = FUN_001f4890(0x40f);
    iVar2 = FUN_001f48c0(0xd4);
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
    uVar1 = FUN_001f4890(0x410);
    iVar2 = FUN_001f48c0(0xd4);
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
    uVar1 = FUN_001f4890(0x186);
    iVar2 = FUN_001f48c0(0xd4);
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
    uVar1 = FUN_001f4890(0x187);
    iVar2 = FUN_001f48c0(0xd4);
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
    uVar1 = FUN_001f4890(0x188);
    iVar2 = FUN_001f48c0(0xd4);
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
    uVar1 = FUN_001f4890(0x189);
    iVar2 = FUN_001f48c0(0xd4);
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
    uVar1 = FUN_001f4890(0x18b);
    iVar2 = FUN_001f48c0(0xd4);
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
    *(undefined4 *)(iVar2 + 0x3d4) = uVar1;
    *(undefined4 *)(iVar2 + 0x3d0) = 1;
    uVar1 = FUN_001f4890(0x18c);
    iVar2 = FUN_001f48c0(0xd4);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3dc) = 0xffffffff;
    *(undefined4 *)(iVar2 + 1000) = 0;
    *(undefined4 *)(iVar2 + 0x3d8) = 0;
    if (*(int *)(iVar2 + 1000) == 0) {
      *(undefined4 *)(iVar2 + 0x3e4) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3e4) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3d8) = 0;
    if (*(int *)(iVar2 + 1000) == 0) {
      *(undefined4 *)(iVar2 + 0x3e4) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3e4) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3e0) = 0;
    *(undefined4 *)(iVar2 + 1000) = uVar1;
    *(undefined4 *)(iVar2 + 0x3e4) = 1;
    FUN_00200a10(0xd4,(int)register0x000001c0 + -0x7c60,2,0);
    FUN_00200fc0(0);
  }
  if ((((piVar7[4] == 0) && (piVar7[6] == 0)) && (lVar4 = FUN_001fd2d0(), lVar4 == 0)) &&
     (3 < piVar7[0x2d])) {
    FUN_002008b0(1);
    iVar2 = *piVar7;
  }
  else {
    FUN_002008b0(0);
    iVar2 = *piVar7;
  }
  if (iVar2 == 1) {
    lVar4 = FUN_00201260(0xd4,0);
    if (lVar4 == 0) {
      piVar7[4] = 0;
    }
  }
  else {
    lVar4 = FUN_00201260(0xd4,0);
    lVar5 = FUN_00201260(0xd4,1);
    if (lVar4 == 0 && lVar5 == 0) {
      piVar7[4] = 0;
    }
  }
  if (piVar7[6] != 0) {
    if (piVar7[2] == 2) {
      iVar2 = piVar7[0xb] + 5;
    }
    else if (piVar7[2] == 1) {
      iVar2 = -1;
    }
    else {
      iVar2 = 4;
    }
    if (iVar2 != -1) {
      lVar4 = FUN_00201260(0xd4);
      lVar5 = FUN_00201260(0xd4,2);
      if (lVar4 != 0 || lVar5 != 0) goto LAB_0023bff8;
    }
    piVar7[6] = 0;
  }
LAB_0023bff8:
  if ((char)piVar7[0xc] == '\0') {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    if (((*piGpffff8d78 == 1) && (piVar7[4] == 0)) && (piVar7[6] == 0)) {
      FUN_00200d70(0xd4,*(undefined4 *)(&DAT_0032b728 + piVar7[0xb] * 4),0,0);
    }
  }
  else {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
    if ((char)piVar7[0xc] == -1) {
      lVar4 = FUN_00201260(0xd4,9);
      if (lVar4 == 0) {
        *(undefined1 *)(piVar7 + 0xc) = 0;
        iVar2 = FUN_001f48c0(0xd4);
        iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
        *(undefined4 *)(iVar2 + 0x3c4) = 0;
        if (*(int *)(iVar2 + 0x3d4) == 0) {
          *(undefined4 *)(iVar2 + 0x3d0) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x3d0) = 1;
        }
        FUN_00200fc0(0);
      }
    }
    else {
      lVar4 = FUN_00201260(0xd4,10);
      if (lVar4 == 0) {
        *(undefined1 *)(piVar7 + 0xc) = 0;
        iVar2 = FUN_001f48c0(0xd4);
        iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
        *(undefined4 *)(iVar2 + 0x3d8) = 0;
        if (*(int *)(iVar2 + 1000) == 0) {
          *(undefined4 *)(iVar2 + 0x3e4) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x3e4) = 1;
        }
        FUN_00200fc0(0);
      }
    }
  }
  FUN_00201260(0xd3,0);
  iVar2 = FUN_001f48c0(0xd3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_0023aaa0(param_1);
  lVar4 = FUN_00292690(param_1);
  uVar6 = 0x281;
  if (lVar4 == 0) {
    uVar6 = 0x282;
  }
  FUN_001ff790(3,uVar6);
  return;
}

