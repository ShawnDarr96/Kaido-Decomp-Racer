// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00234000 - 0x00238000
#include "ghidra_types.h"

// 0x00234060  size 0x50
void FUN_00234060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_001c1890(param_3);
  uVar1 = FUN_001c15d0(iVar2 + 0x272c);
  FUN_002010a0(param_1,param_2,0x26b,uVar1);
  return;
}

// 0x002340b0  size 0x50
void FUN_002340b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_001c1890(param_3);
  uVar1 = FUN_001c1590(iVar2 + 0x272c);
  FUN_002010a0(param_1,param_2,0x26a,uVar1);
  return;
}

// 0x00234100  size 0x50
void FUN_00234100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001c1890(param_3);
  uVar1 = FUN_001c0ef0(uVar1);
  FUN_002010a0(param_1,param_2,0x26a,uVar1);
  return;
}

// 0x00234150  size 0x54
void FUN_00234150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_001c1890(param_3);
  uVar1 = FUN_001b8eb0(uVar2);
  FUN_002010a0(param_1,param_2,0x269,uVar1);
  return;
}

// 0x002341b0  size 0x50
void FUN_002341b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001c1890(param_3);
  uVar1 = FUN_001b89d0(uVar1);
  FUN_002010a0(param_1,param_2,0x269,uVar1);
  return;
}

// 0x00234200  size 0x9c
void FUN_00234200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iStack_8 = 0;
  FUN_001c1830(param_3,&uStack_4,&iStack_8);
  FUN_002010a0(param_1,param_2,0x268,uStack_4,iStack_8 / 0xe10);
  return;
}

// 0x002342a0  size 0x54
void FUN_002342a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_001c1890(param_3);
  FUN_002010a0(param_1,param_2,0x47,*(undefined4 *)(iVar1 + 0x2bf4),(int)*(float *)(iVar1 + 0x2bf8))
  ;
  return;
}

// 0x00234300  size 0x44
void FUN_00234300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_001c1890(param_3);
  FUN_001fe620(param_1,param_2,*(undefined4 *)(iVar1 + 0x2be8));
  return;
}

// 0x00234350  size 0x44
void FUN_00234350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_001c1890(param_3);
  FUN_001fe620(param_1,param_2,*(undefined4 *)(iVar1 + 0x2be4));
  return;
}

// 0x002343a0  size 0x4c
void FUN_002343a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001c1890(param_3);
  uVar1 = FUN_001bcb00(uVar1);
  FUN_001fe620(param_1,param_2,uVar1);
  return;
}

// 0x002343f0  size 0x48
void FUN_002343f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_001c1890(param_3);
  FUN_002010a0(param_1,param_2,0x267,*(undefined4 *)(iVar1 + 0x2bd0));
  return;
}

// 0x00234440  size 0x50
void FUN_00234440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_001c1890(param_3);
  FUN_002010a0(param_1,param_2,0x266,(int)*(float *)(iVar1 + 0x2bb8));
  return;
}

// 0x00234490  size 0xb8
void FUN_00234490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = FUN_001c1890(param_3);
  iVar4 = 0;
  sVar1 = FUN_001c0ea0(uVar3);
  if (0 < sVar1) {
    sVar1 = FUN_001c0ec0(uVar3);
    sVar2 = FUN_001c0ea0(uVar3);
    iVar4 = (sVar1 * 100) / (int)sVar2;
  }
  FUN_002010a0(param_1,param_2,0x29,iVar4);
  return;
}

// 0x00234550  size 0x74
void FUN_00234550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_001c1890(param_3);
  uVar1 = FUN_001c0ec0(uVar3);
  uVar2 = FUN_001c0eb0(uVar3);
  FUN_002010a0(param_1,param_2,0x265,uVar1,uVar2);
  return;
}

// 0x002345d0  size 0x6c
void FUN_002345d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001c1890(param_3);
  uVar2 = FUN_001c1760(uVar1);
  uVar1 = FUN_001c17b0(uVar1);
  FUN_002010a0(param_1,param_2,0x264,uVar2,uVar1);
  return;
}

// 0x00234640  size 0x84
void FUN_00234640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_001c1890(param_3);
  uVar1 = FUN_001c16c0(uVar2);
  uVar3 = FUN_001f6f10(uVar1);
  uVar1 = FUN_001c16b0(uVar2);
  uVar2 = FUN_001f6f00(uVar1);
  FUN_002010a0(param_1,param_2,0x43,uVar3,uVar2);
  return;
}

// 0x002346d0  size 0x7c
void FUN_002346d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [64];
  
  uVar2 = FUN_001c1890(param_3);
  iVar1 = FUN_001f48c0(param_1);
  FUN_001ede20(*piRam0036f42c + iVar1 * 0x4f4 + 4,auStack_40,param_2);
  uVar2 = FUN_001b2e60(uVar2);
  FUN_001f12c0(auStack_40,uVar2,1);
  return;
}

// 0x00234750  size 0x650
void FUN_00234750(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar3 != 0) {
    uVar2 = FUN_001f4890(0x1e5);
    iVar3 = FUN_001f48c0(0xd7);
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
    uVar2 = FUN_001f4890(0x1e6);
    iVar3 = FUN_001f48c0(0xd7);
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
    uVar2 = FUN_001f4890(0x1e7);
    iVar3 = FUN_001f48c0(0xd8);
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
    uVar2 = FUN_001f4890(0x1e8);
    iVar3 = FUN_001f48c0(0xd8);
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
    uVar2 = FUN_001f4890(0x1e9);
    iVar3 = FUN_001f48c0(0xd8);
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
    *(undefined4 *)(iVar3 + 0x340) = 0;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    uVar2 = FUN_001f4890(0x1ea);
    iVar3 = FUN_001f48c0(0xd8);
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
    *(undefined4 *)(iVar3 + 0x354) = 0;
    *(undefined4 *)(iVar3 + 0x35c) = uVar2;
    *(undefined4 *)(iVar3 + 0x358) = 1;
    FUN_00200a10(0xd8,0x36ea30,2,0);
  }
  lVar4 = FUN_00201260(0xd7,0);
  lVar5 = FUN_00201260(0xd8,0);
  if (lVar4 == 0 && lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar4 = FUN_00201260(0xd7);
    lVar5 = FUN_00201260(0xd8,1);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (lVar4 = FUN_001fd2d0(), lVar4 == 0)) {
    FUN_002008b0(1);
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar3 = FUN_001f48c0(0xd8);
      FUN_001eeb00(0,*piRam0036f42c + iVar3 * 0x4f4 + 4,0x17,8);
      iVar3 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x20);
    }
    if (iVar3 == 5) {
      iVar3 = FUN_001f48c0(0xd8);
      FUN_001eeb00(0,*piRam0036f42c + iVar3 * 0x4f4 + 4,0x1a,8);
    }
  }
  else {
    FUN_002008b0(0);
  }
  FUN_002011b0(0xd7,1,0xee);
  iVar3 = 0;
  puVar6 = &DAT_0032b340;
  do {
    iVar1 = (*(int *)(param_1 + 0x20) + iVar3) % 0x11;
    FUN_00201140(0xd8,*puVar6,4,iVar1 + 0x253);
    (*(code *)(&PTR_FUN_0032b2f0)[iVar1])(0xd8,puVar6[1],0);
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 2;
  } while (iVar3 < 0xc);
  if (*(char *)(param_1 + 0x24) == -1) {
    iVar3 = (*(int *)(param_1 + 0x20) + 0x10) % 0x11;
    FUN_00201140(0xd8,DAT_0032b3a0,4,iVar3 + 0x253);
    (*(code *)(&PTR_FUN_0032b2f0)[iVar3])(0xd8,DAT_0032b3a4,0);
  }
  else {
    iVar3 = (*(int *)(param_1 + 0x20) + 0xc) % 0x11;
    FUN_00201140(0xd8,DAT_0032b3a0,4,iVar3 + 0x253);
    (*(code *)(&PTR_FUN_0032b2f0)[iVar3])(0xd8,DAT_0032b3a4,0);
  }
  iVar3 = FUN_001f48c0(0xd7);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4);
  FUN_00233d40(0xd8,0xc,0xd,0x100,0x11,0xc,*(undefined4 *)(param_1 + 0x20));
  iVar3 = FUN_001f48c0(0xd8);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x00234dc0  size 0x1f8
void FUN_00234dc0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
  }
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x24) == '\0') {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
  }
  else {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
    if (*(char *)(iVar2 + 0x24) == -1) {
      lVar3 = FUN_00201260(0xd8,2);
      if (lVar3 == 0) {
        *(undefined1 *)(iVar2 + 0x24) = 0;
        iVar2 = FUN_001f48c0(0xd8);
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
      lVar3 = FUN_00201260(0xd8,3);
      if (lVar3 == 0) {
        *(undefined1 *)(iVar2 + 0x24) = 0;
        iVar2 = FUN_001f48c0(0xd8);
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
  iVar2 = FUN_001f48c0(8);
  FUN_001ecd80(*piGpffff8d3c + iVar2 * 0x4f4 + 4,2);
  iVar2 = FUN_001f48c0(8);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_00234750(param_1);
  uVar1 = *(uint *)(iGpffff8d68 + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(iGpffff8d68 + 0x28) = uVar1 | 0x800;
  }
  return;
}

// 0x00234fc0  size 0x188
void FUN_00234fc0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_001f48c0(8);
  iVar3 = *piGpffff8d3c;
  uVar4 = FUN_001f4890(0x7c);
  FUN_001ed190(iVar3 + iVar1 * 0x4f4 + 4,uVar4);
  if (*(int *)(iGpffff8d68 + 0x24) == 0x24) {
    uVar2 = FUN_001f4890(0x7e);
    iVar3 = FUN_001f48c0(8);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    if (*(int *)(iVar3 + 0x348) == 0) {
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
    }
  }
  else {
    uVar2 = FUN_001f4890(0x7e);
    iVar3 = FUN_001f48c0(8);
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
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
  }
  return;
}

// 0x00235150  size 0x350
void FUN_00235150(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
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
    iVar3 = FUN_001f48c0(param_1);
    FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,param_3,8);
  }
  iVar3 = FUN_001f48c0(param_1);
  FUN_001eeb00(fVar2,*piGpffff8d3c + iVar3 * 0x4f4 + 4,param_2,2);
  iVar3 = FUN_001f48c0(param_1);
  FUN_001eeb00(fVar5 / 16.0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,param_2,6);
  return;
}

// 0x002354a0  size 0x4a0
void FUN_002354a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x232);
    iVar1 = FUN_001f48c0(0xe6);
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
    uVar2 = FUN_001f4890(0x233);
    iVar1 = FUN_001f48c0(0xe6);
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
    uVar2 = FUN_001f4890(0x236);
    iVar1 = FUN_001f48c0(0xe7);
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
    uVar2 = FUN_001f4890(0x237);
    iVar1 = FUN_001f48c0(0xe7);
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
    uVar2 = FUN_001f4890(0x238);
    iVar1 = FUN_001f48c0(0xe7);
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
    FUN_00200a10(0xe6,(int)register0x000001c0 + -0x7ca0,2,0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  FUN_002008b0(1);
  lVar3 = FUN_00201260(0xe6,0);
  lVar4 = FUN_00201260(0xe7,0);
  if (lVar3 == 0 && lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar3 = FUN_00201260(0xe6);
    lVar4 = FUN_00201260(0xe7,1);
    if (lVar3 == 0 && lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  FUN_002010a0(0xe6,0xe,0x3a,*(int *)(param_1 + 0x28) + 1);
  FUN_002011b0(0xe6,0xf,0x271);
  FUN_002011b0(0xe6,0x10,0x272);
  FUN_002011b0(0xe6,0x11,0x271);
  FUN_002011b0(0xe7,0x10,0x270);
  iVar1 = FUN_001f48c0(0xe2);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_002011b0(0xe3,1,0x26d);
  iVar1 = FUN_001f48c0(0xe3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_00201260(0xe7,2);
  iVar1 = FUN_001f48c0(0xe7);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xe6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x00235940  size 0x340
void FUN_00235940(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_001f4890(0x232);
    iVar2 = FUN_001f48c0(0xe6);
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
    uVar3 = FUN_001f4890(0x233);
    iVar2 = FUN_001f48c0(0xe6);
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
    FUN_00200a10(0xe6,(int)register0x000001c0 + -0x7ca8,2,0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5f0) =
         *(undefined4 *)(&DAT_0032b3d0 + *(int *)(param_1 + 0x28) * 4);
  }
  FUN_002008b0(1);
  lVar4 = FUN_00201260(0xe6,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (lVar4 = FUN_00201260(0xe6), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_002010a0(0xe6,0xe,0x3a,*(int *)(param_1 + 0x28) + 1);
  uVar5 = FUN_001f5c40(*(undefined4 *)(param_1 + 0x28));
  FUN_002011b0(0xe6,0xf,uVar5);
  FUN_002010a0(0xe6,0x10,0x26f,*(undefined4 *)(*(int *)(param_1 + 0x28) * 0xc + param_1 + 0x48));
  sVar1 = *(short *)(*(int *)(param_1 + 0x28) * 0xc + param_1 + 0x44);
  uVar5 = FUN_001f5bc0((int)sVar1 / 3 & 0xff,(int)sVar1 % 3);
  FUN_002011b0(0xe6,0x11,uVar5);
  iVar2 = FUN_001f48c0(0xe2);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_002011b0(0xe3,1,0x26d);
  iVar2 = FUN_001f48c0(0xe3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0xe6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_001f8860(iGpffff8d68 + 0x654);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x00235c80  size 0x33c
void FUN_00235c80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x230);
    iVar1 = FUN_001f48c0(0xe5);
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
    uVar2 = FUN_001f4890(0x231);
    iVar1 = FUN_001f48c0(0xe5);
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
    FUN_00200a10(0xe5,(int)register0x000001c0 + -0x7cb0,2,0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5f0) =
         *(undefined4 *)(&DAT_0032b3d0 + *(int *)(param_1 + 0x28) * 4);
  }
  FUN_002008b0(1);
  lVar3 = FUN_00201260(0xe5,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (lVar3 = FUN_00201260(0xe5), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_002010a0(0xe5,0xf,0x3a,*(int *)(param_1 + 0x28) + 1);
  uVar4 = FUN_001f5c40(*(undefined4 *)(param_1 + 0x28));
  FUN_002011b0(0xe5,0x10,uVar4);
  FUN_002010a0(0xe5,0x11,0x26f,*(undefined4 *)(*(int *)(param_1 + 0x28) * 0xc + param_1 + 0x48));
  uVar4 = FUN_001f6ee0(*(undefined2 *)(*(int *)(param_1 + 0x28) * 0xc + param_1 + 0x44));
  FUN_002011b0(0xe5,0x12,uVar4);
  uVar4 = FUN_001f6ef0(*(undefined2 *)(*(int *)(param_1 + 0x28) * 0xc + param_1 + 0x44));
  FUN_002011b0(0xe5,0x13,uVar4);
  iVar1 = FUN_001f48c0(0xe2);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_002011b0(0xe3,1,0x26d);
  iVar1 = FUN_001f48c0(0xe3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0xe5);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001f8860(iGpffff8d68 + 0x654);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x00235fc0  size 0x714
void FUN_00235fc0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_001f4890(0x229);
    iVar3 = FUN_001f48c0(0xe1);
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
    *(undefined4 *)(iVar3 + 800) = uVar4;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar4 = FUN_001f4890(0x22c);
    iVar3 = FUN_001f48c0(0xe4);
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
    uVar4 = FUN_001f4890(0x22d);
    iVar3 = FUN_001f48c0(0xe4);
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
    uVar4 = FUN_001f4890(0x22e);
    iVar3 = FUN_001f48c0(0xe4);
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
    uVar4 = FUN_001f4890(0x22f);
    iVar3 = FUN_001f48c0(0xe4);
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
    FUN_00200fc0(0);
    FUN_00200a10(0xe4,(int)register0x000001c0 + -0x7cb8,2,0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  lVar5 = FUN_00201260(0xe4,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (lVar5 = FUN_00201260(0xe4), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (lVar5 = FUN_001fd2d0(), lVar5 == 0)) {
    FUN_002008b0(1);
    cVar2 = *(char *)(param_1 + 0x2c);
  }
  else {
    FUN_002008b0(0);
    cVar2 = *(char *)(param_1 + 0x2c);
  }
  if (cVar2 == '\0') {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
    if (*piGpffff8d78 == 1) {
      FUN_00200d70(0xe4,*(undefined4 *)(&DAT_0032b470 + *(int *)(param_1 + 0x24) * 4),0,0);
    }
  }
  else {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
    if (*(char *)(param_1 + 0x2c) == -1) {
      lVar5 = FUN_00201260(0xe4,2);
      if (lVar5 == 0) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
        iVar3 = FUN_001f48c0(0xe4);
        iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x338) = 0;
        if (*(int *)(iVar3 + 0x348) == 0) {
          *(undefined4 *)(iVar3 + 0x344) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x344) = 1;
        }
        FUN_00200fc0(0);
      }
    }
    else {
      lVar5 = FUN_00201260(0xe4,3);
      if (lVar5 == 0) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
        iVar3 = FUN_001f48c0(0xe4);
        iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x34c) = 0;
        if (*(int *)(iVar3 + 0x35c) == 0) {
          *(undefined4 *)(iVar3 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x358) = 1;
        }
        FUN_00200fc0(0);
      }
    }
  }
  iVar3 = FUN_001c1890(0);
  FUN_002011b0(0xe3,1,0x26d);
  uVar6 = FUN_001c15d0(iVar3 + 0x272c);
  FUN_002010a0(0xe4,0x59,0x3d,uVar6,0x28);
  iVar3 = 0;
  puVar7 = &DAT_0032b4a0;
  do {
    iVar1 = (*(int *)(param_1 + 0x20) + iVar3) % 0x28;
    uVar4 = puVar7[1];
    FUN_002010a0(0xe4,*puVar7,0x3a,iVar1 + 1);
    if (*(int *)(param_1 + iVar1 * 0xc + 0x48) == -1) {
      FUN_002011b0(0xe4,uVar4,0x271);
    }
    else {
      uVar6 = FUN_001f5c40(iVar1);
      FUN_002010a0(0xe4,uVar4,uVar6);
    }
    uVar4 = DAT_0032b4ec;
    iVar3 = iVar3 + 1;
    puVar7 = puVar7 + 2;
  } while (iVar3 < 9);
  if (*(char *)(param_1 + 0x2c) == -1) {
    iVar3 = *(int *)(param_1 + 0x20) + 0x27;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x20) + 9;
  }
  iVar3 = iVar3 % 0x28;
  FUN_002010a0(0xe4,DAT_0032b4e8,0x3a,iVar3 + 1);
  if (*(int *)(iVar3 * 0xc + param_1 + 0x48) == -1) {
    FUN_002011b0(0xe4,uVar4,0x271);
  }
  else {
    uVar6 = FUN_001f5c40(iVar3);
    FUN_002010a0(0xe4,uVar4,uVar6);
  }
  FUN_00201260(0xe1,0);
  iVar3 = FUN_001f48c0(0xe1);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0xe3);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  FUN_00235150(0xe4,0x49,0x4a,0xf6,0x28,9,*(undefined4 *)(param_1 + 0x20));
  iVar3 = FUN_001f48c0(0xe4);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x002366e0  size 0x58
void FUN_002366e0(void)

{
  int iVar1;
  
  iVar1 = FUN_001f48c0(7);
  FUN_001eeb00(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4,0x25,8);
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 4;
  return;
}

// 0x00236740  size 0xf8
void FUN_00236740(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00201260(0xe3,0);
  if (lVar2 == 0) {
    if ((*(uint *)(iRam0036f458 + 0x28) & 2) == 0) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1000;
    }
  }
  iVar1 = FUN_001f48c0(7);
  FUN_001eeb00(0,*piRam0036f42c + iVar1 * 0x4f4 + 4,0x25,8);
  (*(code *)(&PTR_FUN_0032b3b0)[*(int *)((int)param_1 + 4)])(param_1);
  if (((*(uint *)(iRam0036f458 + 0x28) & 4) == 0) && (lVar2 = FUN_00201260(0xe3,1), lVar2 == 0)) {
    if ((*(uint *)(iRam0036f458 + 0x28) & 1) == 0) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x00236840  size 0x118
void FUN_00236840(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_001f4890(0x22a);
  iVar2 = FUN_001f48c0(0xe3);
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
  uVar1 = FUN_001f4890(0x22b);
  iVar2 = FUN_001f48c0(0xe3);
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
  return;
}

// 0x00236960  size 0x158
void FUN_00236960(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_001b55a0(*(undefined2 *)(param_1 + 0x20));
  uVar2 = Race_GetLapCountForMode(*(undefined4 *)(iVar1 + 0x14));
  uVar2 = FUN_001f69f0(uVar2);
  FUN_002011b0(0xd2,0x27,0x106);
  uVar3 = FUN_001f69b0(uVar2,1);
  FUN_002011b0(0xd2,0x25,uVar3);
  iVar1 = FUN_001f48c0(0xd2);
  FUN_001f5380(*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x24,0x16,
               *(undefined4 *)(&DAT_0032b6f0 + (int)uVar2 * 4));
  FUN_002011b0(0xd1,0x2e,0x49);
  FUN_002011b0(0xd1,0x2f,0x4a);
  FUN_002011b0(0xd1,0x30,0x4f);
  FUN_002011b0(0xd1,0x31,0x51);
  if ((int)uVar2 - 5U < 2) {
    FUN_002011b0(0xd1,0x32,0x53);
    FUN_002011b0(0xd1,0x33,0x54);
  }
  else {
    FUN_002011b0(0xd1,0x32,0x50);
    FUN_002011b0(0xd1,0x33,0x52);
  }
  FUN_002011b0(0xd1,0x34,0x55);
  FUN_002011b0(0xd1,0x35,0x56);
  return;
}

// 0x00236ac0  size 0x744
void FUN_00236ac0(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  short *psVar20;
  int aiStack_90 [20];
  undefined1 auStack_40 [12];
  int iStack_34;
  
  uVar13 = FUN_001b55a0(*(undefined2 *)(param_1 + 0x20));
  uVar7 = FUN_001b4920(uVar13);
  FUN_002010a0(199,0x14,0x3c,*(int *)(param_1 + 0x1c) + 1,*(undefined4 *)(param_1 + 0x10));
  iVar9 = *(int *)(param_1 + 0x20);
  iVar8 = FUN_001c1890(0);
  if (*(int *)(iVar8 + iVar9 * 4 + 0x37b0) == 1) {
    uVar13 = FUN_001f6ee0(iVar9);
    FUN_002011b0(199,0x17,uVar13);
    uVar13 = FUN_001f6ef0(*(undefined4 *)(param_1 + 0x20));
    FUN_002011b0(199,0x19,uVar13);
    FUN_002011b0(199,0x1a,(uVar7 & 0xff) + 0x67);
    uVar1 = *(undefined2 *)(param_1 + 0x20);
  }
  else {
    FUN_002011b0(199,0x17,0x5c);
    FUN_002011b0(199,0x19,0x5c);
    FUN_002011b0(199,0x1a,0x5b);
    uVar1 = *(undefined2 *)(param_1 + 0x20);
  }
  uVar13 = FUN_001b55a0(uVar1);
  lVar14 = FUN_001b4940(uVar13);
  iVar9 = *(int *)(param_1 + 0x20);
  iVar8 = FUN_001c1890(0);
  uVar1 = *(undefined2 *)(iVar8 + iVar9 * 2 + 0x3fc4);
  iVar8 = FUN_001c1890(0);
  uVar2 = *(undefined2 *)(iVar8 + iVar9 * 2 + 0x43ac);
  lVar15 = FUN_001f7a70(iVar9,0xfffffffffffffffd);
  iVar9 = FUN_001f7900(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  uVar10 = FUN_001f7790(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  lVar16 = FUN_001f75a0(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  uVar11 = FUN_001f7430(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  iVar8 = FUN_001f7bd0(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  psVar20 = (short *)uVar13;
  uVar5 = Race_GetLapCountForMode(*(undefined4 *)(psVar20 + 10));
  cVar6 = FUN_001b4930(uVar13);
  iVar19 = -1;
  if (cVar6 == '\n') {
    iVar12 = 0x7b;
    iVar19 = 0x3e;
  }
  else if (cVar6 == '\t') {
    iVar12 = 0x7a;
    iVar19 = 0x42;
  }
  else if (cVar6 == '\b') {
    iVar12 = 0x79;
    iVar19 = 0x43;
  }
  else if (cVar6 == '\a') {
    iVar12 = 0x78;
    iVar18 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x20);
      FUN_001b08d0(aiStack_90,iVar18);
      if (iVar3 == aiStack_90[0]) {
        iVar19 = iVar18 + 0x45;
        break;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < 0x14);
  }
  else if (cVar6 == '\x04') {
    iVar12 = 0x77;
    iVar19 = 0x3f;
  }
  else if (cVar6 == '\x03') {
    iVar12 = 0x76;
    iVar19 = 0x41;
  }
  else {
    iVar12 = iVar19;
    if (cVar6 == '\x02') {
      iVar12 = 0x75;
      iVar19 = 0x44;
    }
  }
  if (lVar14 == 1) {
    iVar19 = *psVar20 + 0x59;
  }
  if (iVar12 != -1) {
    FUN_00201140(200,0x25,2,iVar12);
  }
  if (iVar19 == -1) {
    iVar19 = FUN_001f48c0(200);
    FUN_001eeb00(0,*piGpffff8d3c + iVar19 * 0x4f4 + 4,0x10,8);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    iVar12 = FUN_001f48c0(200);
    FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar12 * 0x4f4 + 4,0x10,8);
    iVar12 = FUN_001f48c0(200);
    FUN_001eea30(*piGpffff8d3c + iVar12 * 0x4f4 + 4,0x10,0x16,iVar19);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
  }
  uVar17 = FUN_001f7e90(uVar4,0xfffffffffffffffd);
  FUN_002011b0(200,0x27,uVar17);
  uVar17 = FUN_001f8170(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  FUN_00201140(200,0x28,4,uVar17);
  uVar17 = FUN_001f81a0(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  FUN_002011b0(200,0x29,uVar17);
  FUN_00201140(200,0x26,4,0x292);
  FUN_00201140(200,0x2a,4,0x294);
  FUN_00201140(200,0x2b,4,0x297);
  FUN_00201140(200,0x2c,4,0x295);
  FUN_00201140(200,0x2d,4,0x296);
  FUN_00201140(200,0x2e,4,0x298);
  if (lVar14 == 1) {
    FUN_00201140(200,0x2f,4,0x299);
  }
  FUN_00201140(200,0x30,4,0x29a);
  FUN_00201140(200,0x31,4,0x29b);
  FUN_002010a0(200,0x32,0x293,uVar1,uVar2);
  uVar7 = FUN_001f7d30(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  FUN_002010a0(200,0x33,(uVar7 & 0xff) + 0x5d);
  if (lVar15 < 1) {
    FUN_002010a0(200,0x34,0x26,0);
  }
  else {
    cVar6 = FUN_001f7170(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
    if (cVar6 == '\a') {
      FUN_002010a0(200,0x34,0x18,lVar15,0);
    }
    else {
      FUN_002010a0(200,0x34,0x17,lVar15,0);
    }
  }
  if (iVar9 < 1) {
    FUN_002010a0(200,0x35,0x27,0,0,0);
  }
  else {
    FUN_002010a0(200,0x35,0x19,iVar9,0,0,uVar10,0);
  }
  if (lVar16 < 1) {
    FUN_002010a0(200,0x36,0x28,0,0,0);
  }
  else {
    FUN_002010a0(200,0x36,0x1a,(int)lVar16 / 10,(int)lVar16 % 10,0,0,uVar11);
  }
  if (iVar8 < 1) {
    FUN_002010a0(200,0x37,0x25,0);
  }
  else {
    FUN_002010a0(200,0x37,0x16,iVar8,0);
  }
  if (lVar14 == 1) {
    uVar17 = FUN_001f6ec0(*psVar20);
    FUN_002010a0(200,0x38,uVar17);
  }
  uVar17 = FUN_001f69f0(uVar5);
  uVar17 = FUN_001f69b0(uVar17,0);
  FUN_002010a0(200,0x39,uVar17);
  lVar14 = FUN_001b4910(uVar13);
  uVar13 = 0x4b;
  if (lVar14 == 0) {
    uVar13 = 0x4c;
  }
  FUN_002010a0(200,0x3a,uVar13);
  iVar9 = FUN_001f48c0(200);
  FUN_001ede20(*piGpffff8d3c + iVar9 * 0x4f4 + 4,auStack_40,0x3d);
  iStack_34 = iStack_34 + *(int *)(param_1 + 0x30) * -0x16;
  uVar13 = FUN_001f6ed0(*(undefined4 *)(param_1 + 0x20));
  FUN_001f1350(auStack_40,uVar13);
  return;
}

// 0x00237210  size 0x3bc
void FUN_00237210(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  FUN_002010a0(0xc6,0x6e,0x3c,*(int *)(param_1 + 0x1c) + 1,*(undefined4 *)(param_1 + 0x10));
  iVar5 = *(int *)(param_1 + 0x10);
  iVar8 = (iVar5 + (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x28))) % iVar5;
  iVar7 = 0;
  puVar6 = &DAT_0032b510;
  while( true ) {
    iVar5 = iVar5 + -1;
    if (8 < iVar5) {
      iVar5 = 9;
    }
    if (iVar5 < iVar7) {
      return;
    }
    if (iVar7 == 9) {
      iVar8 = param_2;
    }
    if (iVar8 == -1) break;
    iVar5 = *(int *)(param_1 + iVar8 * 4 + 0x38);
    FUN_002010a0(0xc6,*puVar6,0x3a,iVar5);
    iVar9 = iVar5 * 4;
    iVar2 = FUN_001c1890(0);
    if (*(int *)(iVar2 + iVar9 + 0x37b0) == 1) {
      uVar4 = FUN_001f6ee0(iVar5);
      FUN_002011b0(0xc6,puVar6[1],uVar4);
      uVar3 = *(undefined4 *)(param_1 + 8);
    }
    else {
      FUN_002011b0(0xc6,puVar6[1],0x5c);
      uVar3 = *(undefined4 *)(param_1 + 8);
    }
    uVar1 = (undefined2)iVar5;
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      iVar2 = FUN_001b55a0(uVar1);
      uVar4 = Race_GetLapCountForMode(*(undefined4 *)(iVar2 + 0x14));
      uVar4 = FUN_001f69f0(uVar4);
      uVar4 = FUN_001f69b0(uVar4,0);
      FUN_002011b0(0xc6,puVar6[2],uVar4);
      break;
    case 8:
    case 9:
      iVar2 = FUN_001c1890(0);
      if (*(short *)(iVar2 + iVar5 * 2 + 0x3fc4) < 1) {
        FUN_002011b0(0xc6,puVar6[3],0x5b);
      }
      else {
        FUN_002011b0(0xc6,puVar6[3],0xd9);
      }
      break;
    case 10:
    case 0xc:
      iVar2 = FUN_001c1890(0);
      if (*(int *)(iVar2 + iVar9 + 0x37b0) == 1) {
        uVar4 = FUN_001b55a0(uVar1);
        uVar4 = FUN_001b4960(uVar4);
        uVar4 = FUN_001f81a0(uVar4,0xffffffffffffffff);
        FUN_002011b0(0xc6,puVar6[3],uVar4);
      }
      else {
        FUN_002011b0(0xc6,puVar6[3],0x5b);
      }
      break;
    case 0xb:
      iVar2 = FUN_001c1890(0);
      if (*(int *)(iVar2 + iVar9 + 0x37b0) == 1) {
        uVar4 = FUN_001b55a0(uVar1);
        uVar1 = FUN_001b4900(uVar4);
        uVar4 = FUN_001f6ec0(uVar1);
        FUN_002011b0(0xc6,puVar6[2],uVar4);
      }
      else {
        FUN_002011b0(0xc6,puVar6[3],0x5b);
      }
    }
    iVar2 = FUN_001c1890(0);
    if (*(short *)(iVar2 + iVar5 * 2 + 0x3fc4) < 1) {
      iVar5 = FUN_001f48c0(0xc6);
      FUN_001eeb00(0,*piGpffff8d3c + iVar5 * 0x4f4 + 4,puVar6[4],8);
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      if ((*(int *)(param_1 + 0x82c) == 0) || (*(int *)(param_1 + 0x824) == 0)) {
        iVar5 = FUN_001f48c0(0xc6);
        FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4,puVar6[4],8);
      }
      iVar5 = *(int *)(param_1 + 0x10);
    }
    iVar8 = (iVar8 + 1) % iVar5;
    puVar6 = puVar6 + 6;
    iVar7 = iVar7 + 1;
  }
  return;
}

// 0x002375d0  size 0x170
void FUN_002375d0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar2 = *(int *)(iVar4 + 0x810);
  iVar1 = *(int *)(iVar4 + 0x828);
  *(undefined4 *)(iVar4 + 0x828) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(2);
  }
  lVar3 = FUN_001ff320(0x57,iVar2 != 1,(int)register0x000001c0 + -0x7c68);
  if (*(int *)(iVar4 + 0x82c) != 0) {
    if (lVar3 == 2) {
      FUN_001ff600();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(iVar4 + 0x82c) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(iVar4 + 0x824) = 0;
  }
  FUN_00236960(param_1);
  iVar2 = FUN_001f48c0(0xd1);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0xd2);
  FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x26,8);
  iVar2 = FUN_001f48c0(0xd2);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0xc6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00237740  size 0x7cc
void FUN_00237740(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  iVar8 = (int)param_1;
  iVar2 = 0;
  uVar5 = FUN_001b55a0(*(undefined2 *)(iVar8 + 0x20));
  bVar1 = false;
  if (*(int *)(iVar8 + 0x18) == 1) {
    iVar2 = *(int *)(iVar8 + 0x808) + 4;
  }
  else {
    if (*(int *)(iVar8 + 0x18) != 0) {
      iVar4 = *(int *)(iVar8 + 0x828);
      goto LAB_0023779c;
    }
    iVar2 = *(int *)(iVar8 + 0x80c);
  }
  iVar4 = *(int *)(iVar8 + 0x828);
LAB_0023779c:
  *(undefined4 *)(iVar8 + 0x828) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar8 + 0x814);
  }
  else {
    uVar3 = FUN_001f4890(0x3af);
    iVar4 = FUN_001f48c0(0xd1);
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
    *(undefined4 *)(iVar4 + 800) = uVar3;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0x3b0);
    iVar4 = FUN_001f48c0(0xd1);
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
    *(undefined4 *)(iVar4 + 0x334) = uVar3;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    uVar3 = FUN_001f4890(0x3db);
    iVar4 = FUN_001f48c0(0xd1);
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
    *(undefined4 *)(iVar4 + 0x348) = uVar3;
    *(undefined4 *)(iVar4 + 0x344) = 1;
    uVar3 = FUN_001f4890(0x3dc);
    iVar4 = FUN_001f48c0(0xd1);
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
    *(undefined4 *)(iVar4 + 0x354) = 1;
    *(undefined4 *)(iVar4 + 0x35c) = uVar3;
    *(undefined4 *)(iVar4 + 0x358) = 1;
    uVar3 = FUN_001f4890(0x3b1);
    iVar4 = FUN_001f48c0(0xd2);
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
    *(undefined4 *)(iVar4 + 800) = uVar3;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0x3b2);
    iVar4 = FUN_001f48c0(0xd2);
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
    *(undefined4 *)(iVar4 + 0x334) = uVar3;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    FUN_00200fc0(0);
    iVar4 = *(int *)(iVar8 + 0x814);
  }
  if (iVar4 == 4) {
    lVar6 = FUN_00201260(0xd1,0);
    lVar7 = FUN_00201260(0xd2,0);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(iVar8 + 0x824) = 0;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    *(undefined4 *)(iVar8 + 0x824) = 0;
  }
  if (*(int *)(iVar8 + 0x82c) != 0) {
    if (*(int *)(iVar8 + 0x81c) == 3) {
      lVar6 = FUN_00201260(0xd1);
      lVar7 = FUN_00201260(0xd2,1);
      if (lVar6 == 0 && lVar7 == 0) {
        *(undefined4 *)(iVar8 + 0x82c) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar8 + 0x82c) = 0;
    }
    bVar1 = true;
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0xd1,*(undefined4 *)(&DAT_0032b6b0 + iVar2 * 4),0,0);
    if (*(int *)(iVar8 + 0x18) == 0) {
      FUN_00201260(0xd1,2);
      iVar2 = FUN_001f48c0(0xd1);
      iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x34c) = 0;
      if (*(int *)(iVar2 + 0x35c) == 0) {
        *(undefined4 *)(iVar2 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x358) = 1;
      }
      iVar2 = FUN_001f48c0(0xd1);
      FUN_001eeb00(0x3ecccccd,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x25,8);
    }
    else {
      FUN_00201260(0xd1,3);
      iVar2 = FUN_001f48c0(0xd1);
      iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x338) = 0;
      if (*(int *)(iVar2 + 0x348) == 0) {
        *(undefined4 *)(iVar2 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x344) = 1;
      }
      iVar2 = FUN_001f48c0(0xd1);
      FUN_001eeb00(0x3ecccccd,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x24,8);
    }
  }
  else {
    FUN_00200ef0(0);
  }
  lVar6 = FUN_001b4910(uVar5);
  if (lVar6 == 0) {
    uVar9 = 2;
  }
  else {
    uVar9 = 1;
  }
  iVar2 = *(int *)(iVar8 + 0x80c);
  iVar8 = *(int *)(iVar8 + 0x808);
  uVar11 = 0;
  puVar10 = &DAT_0032b6d0;
  do {
    if (((uVar9 | 1 << (iVar2 + 2U & 0x1f) | 1 << (iVar8 + 6U & 0x1f)) & 1 << (uVar11 & 0x1f)) == 0)
    {
      iVar4 = FUN_001f48c0(0xd1);
      FUN_001eeb00(0,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar10,8);
    }
    else if (!bVar1) {
      iVar4 = FUN_001f48c0(0xd1);
      FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar10,8);
    }
    uVar11 = uVar11 + 1;
    puVar10 = puVar10 + 1;
  } while ((int)uVar11 < 8);
  FUN_00236960(param_1);
  iVar2 = FUN_001f48c0(0xd1);
  FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4,7,8);
  iVar2 = FUN_001f48c0(0xd1);
  FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4,2,8);
  iVar2 = FUN_001f48c0(0xd1);
  FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x23,8);
  iVar2 = FUN_001f48c0(0xd1);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0xd2);
  FUN_001eeb00(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x26,8);
  iVar2 = FUN_001f48c0(0xd2);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0xc6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00237f10  size 0x1b8
void FUN_00237f10(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = (int)param_1;
  iVar2 = *(int *)(iVar1 + 0x828);
  *(undefined4 *)(iVar1 + 0x828) = 0;
  if (iVar2 != 0) {
    FUN_001ff610(2);
  }
  lVar3 = FUN_001ff320(0x2a0,*(undefined4 *)(iVar1 + 0x18),(int)register0x000001c0 + -0x7c70);
  if (*(int *)(iVar1 + 0x82c) != 0) {
    if (lVar3 == 2) {
      FUN_001ff600();
      iVar2 = *(int *)(iVar1 + 0x81c);
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x81c);
    }
    if (iVar2 == 3) {
      *(undefined4 *)(iVar1 + 0x82c) = 0;
    }
    else {
      lVar5 = FUN_00201260(200,1);
      lVar6 = FUN_00201260(199,2);
      if ((lVar5 == 0 && lVar6 == 0) && (lVar3 == 3)) {
        *(undefined4 *)(iVar1 + 0x82c) = 0;
      }
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(iVar1 + 0x824) = 0;
  }
  iVar1 = FUN_001f48c0(199);
  iVar2 = *piGpffff8d3c;
  uVar4 = FUN_001f4890(0x245);
  FUN_001ed190(iVar2 + iVar1 * 0x4f4 + 4,uVar4);
  FUN_00236ac0(param_1);
  iVar2 = FUN_001f48c0(199);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(200);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0xc6);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  return;
}

