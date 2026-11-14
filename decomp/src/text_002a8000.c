// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002a8000 - 0x002ac000
#include "ghidra_types.h"

// 0x002a81c0  size 0xe0
void FUN_002a81c0(uint *param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = param_1[0x48];
  param_1[0x48] = 0;
  if (uVar2 != 0) {
    lVar1 = FUN_00183480();
    *param_1 = (uint)(lVar1 != 0);
    param_1[0x4e] = 0xfffffffd;
    param_1[0x4d] = 1;
  }
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if ((uVar2 == 2) || (uVar2 == 1)) {
    FUN_001fb290(7);
    *param_1 = *param_1 != 0 ^ 1;
  }
  return;
}

// 0x002a82b0  size 0xf4
void FUN_002a82b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001b5610(*(undefined2 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x138) = 1;
    *(undefined4 *)(param_1 + 0x134) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
    FUN_001fabb0(iRam0036f458 + 0x534);
    iVar1 = iRam0036f458;
    *(undefined4 *)(iRam0036f458 + 0x538) = 1;
    *(undefined4 *)(iVar1 + 0x53c) = uVar2;
    switch(*(undefined4 *)(iRam0036f458 + 0x34)) {
    case 0:
    case 5:
    case 6:
      break;
    case 1:
      *(undefined4 *)(iRam0036f458 + 0x598) = 0;
      break;
    case 2:
      *(undefined4 *)(iRam0036f458 + 0x5dc) = 0;
      break;
    case 3:
      *(undefined4 *)(iRam0036f458 + 0x5fc) = 0;
      break;
    case 4:
      *(undefined4 *)(iRam0036f458 + 0x618) = 0;
      break;
    default:
      goto switchD_002a8368_default;
    }
  }
switchD_002a8368_default:
  return;
}

// 0x002a83b0  size 0x220
void FUN_002a83b0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar3 != 0) {
    uVar2 = FUN_001b5b80(*(undefined2 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
    FUN_001fabb0(iRam0036f458 + 0x534);
    iVar3 = iRam0036f458;
    *(undefined4 *)(iRam0036f458 + 0x538) = 1;
    *(undefined4 *)(iVar3 + 0x53c) = uVar2;
    switch(*(undefined4 *)(iRam0036f458 + 0x34)) {
    case 1:
      *(undefined4 *)(iRam0036f458 + 0x598) = 0xf;
      break;
    case 2:
      *(undefined4 *)(iRam0036f458 + 0x5dc) = 0xf;
      break;
    case 3:
      *(undefined4 *)(iRam0036f458 + 0x5fc) = 0xf;
      break;
    case 4:
      *(undefined4 *)(iRam0036f458 + 0x618) = 0xf;
    }
  }
  uVar1 = FUN_001f5cb0(*(undefined4 *)(param_1 + 8));
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    FUN_001f8640(param_1 + 0x10,0,2,2,1,0);
    iVar3 = *(int *)(param_1 + 0x10);
    break;
  default:
    FUN_001f8640(param_1 + 0x10,0,2,1,1,0);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  if (iVar3 == 2) {
    *(undefined4 *)(param_1 + 0x138) = 2;
  }
  else if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x138) = 0xfffffffe;
  }
  else if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x138) = 3;
  }
  uVar4 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar4 = 0x100000;
  }
  if (uVar4 == 0x1000) {
    FUN_001fb290(5);
    *(undefined4 *)(param_1 + 0x11c) = 10;
  }
  return;
}

// 0x002a85e0  size 0x290
void FUN_002a85e0(int param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x108) = 2;
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 0;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 0;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 0;
    *(undefined4 *)(iRam0036f458 + 0x634) = 0;
    *(undefined4 *)(iRam0036f458 + 0x644) = 0;
  }
  uVar2 = FUN_001c1890(0);
  uVar2 = FUN_001bc3f0(uVar2);
  uVar1 = FUN_001d20f0(uVar2);
  FUN_001f8640(param_1 + 0xc,0,8,*(int *)(param_1 + 0x104) + -1,1,0);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + param_1 + 0x14);
  if (*(int *)(*(int *)(param_1 + 0xc) * 4 + param_1 + 0x8c) == 0) {
    uVar2 = FUN_001c1890(0);
    lVar3 = FUN_001b8990(uVar2);
    if (lVar3 < 0xf) {
      lVar3 = FUN_001bb4c0(uVar1,*(undefined4 *)(param_1 + 8),0);
      if (lVar3 == 0) {
        *(undefined4 *)(param_1 + 0x138) = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0x138) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x138) = 8;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x138) = 6;
  }
  uVar5 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar5) == 0) {
    uVar5 = 0x100000;
  }
  else if (uVar5 == 0x80000) {
    uVar5 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar5 = 0x100000;
  }
  if (uVar5 == 8) {
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
    iVar4 = *(int *)(param_1 + 0x104) + -1;
    if (2 < iVar4) {
      iVar4 = 2;
    }
    if (iVar4 < *(int *)(param_1 + 0x10c)) {
      if (*(int *)(param_1 + 0x104) < 4) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x108) = 0;
        *(undefined4 *)(param_1 + 0x10c) = 2;
      }
    }
  }
  else if ((uVar5 == 4) &&
          (*(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1, *(int *)(param_1 + 0x10c) < 0
          )) {
    if (*(int *)(param_1 + 0x104) < 4) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x104) + -1;
    }
    else {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x400000;
      *(undefined4 *)(param_1 + 0x108) = 1;
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
  }
  return;
}

// 0x002a88a0  size 0x19c
void FUN_002a88a0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  lVar3 = FUN_001fb170(iVar7 + 0x114);
  if (lVar3 != 0) {
    (*(code *)(&PTR_FUN_0032ee50)[*(int *)(iVar7 + 0x118)])(param_1);
    uVar5 = piGpffff8d78[2];
    if ((piGpffff8d78[4] & uVar5) == 0) {
      uVar5 = 0x100000;
    }
    else if (uVar5 == 0x80000) {
      uVar5 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar5 = 0x100000;
    }
    if (uVar5 == 0x10) {
      FUN_001fb290(5);
      if (*(int *)(iVar7 + 0x138) == 7) {
        uVar4 = FUN_001c1890(0);
        FUN_001b8730(uVar4,*(undefined1 *)(iVar7 + 8));
        *(undefined4 *)(iVar7 + 0x104) = 0;
        iVar6 = 0;
        do {
          iVar2 = FUN_001c1890(0);
          cVar1 = FUN_001b3110(iVar2 + 0xd82c,iVar6);
          if (cVar1 != '\0') {
            *(int *)(iVar7 + *(int *)(iVar7 + 0x104) * 4 + 0x14) = iVar6;
            *(uint *)(iVar7 + *(int *)(iVar7 + 0x104) * 4 + 0x8c) = (uint)(cVar1 == '\x02');
            *(int *)(iVar7 + 0x104) = *(int *)(iVar7 + 0x104) + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x1e);
      }
      FUN_002a79e0(param_1,*(undefined4 *)(iVar7 + 0x138));
    }
    else if (uVar5 == 0x20) {
      FUN_001fb290(6);
      FUN_002a79e0(param_1,*(undefined4 *)(iVar7 + 0x134));
    }
    FUN_001fb240(iVar7 + 0x114);
  }
  return;
}

// 0x002a8a40  size 0x228
void FUN_002a8a40(int param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  do {
    iVar2 = FUN_001c1890(0);
    cVar1 = FUN_001b3110(iVar2 + 0xd82c,iVar5);
    if (cVar1 != '\0') {
      *(int *)(param_1 + *(int *)(param_1 + 0x104) * 4 + 0x14) = iVar5;
      *(uint *)(param_1 + *(int *)(param_1 + 0x104) * 4 + 0x8c) = (uint)(cVar1 == '\x02');
      *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1e);
  if (*(int *)(iGpffff8d68 + 0x24) == 0xf) {
    uVar6 = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    cVar1 = FUN_0017e890();
    if (cVar1 == '\x04') {
      FUN_0017e880(0x13);
      cVar1 = FUN_00180140();
      *(int *)(param_1 + 8) = (int)cVar1;
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x104)) {
        iVar2 = param_1;
        do {
          if (*(int *)(iVar2 + 0x14) == *(int *)(param_1 + 8)) {
            *(int *)(param_1 + 0xc) = iVar5;
            break;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar5 < *(int *)(param_1 + 0x104));
      }
      uVar3 = FUN_00176fa0();
      if ((uVar3 & 1) == 0) {
        uVar6 = 5;
      }
      else {
        uVar6 = 4;
        uVar4 = FUN_001c1890(0);
        FUN_001b8900(uVar4,*(undefined1 *)(param_1 + 8));
        *(undefined4 *)(param_1 + 0x104) = 0;
        iVar5 = 0;
        do {
          iVar2 = FUN_001c1890(0);
          cVar1 = FUN_001b3110(iVar2 + 0xd82c,iVar5);
          if (cVar1 != '\0') {
            *(int *)(param_1 + *(int *)(param_1 + 0x104) * 4 + 0x14) = iVar5;
            *(uint *)(param_1 + *(int *)(param_1 + 0x104) * 4 + 0x8c) = (uint)(cVar1 == '\x02');
            *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x1e);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + param_1 + 0x14);
    }
  }
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = uVar6;
  *(undefined4 *)(param_1 + 0x11c) = uVar6;
  *(undefined4 *)(param_1 + 0x124) = 1;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(undefined4 *)(param_1 + 0x120) = 1;
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}

// 0x002a8c70  size 0xc4
void FUN_002a8c70(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  iVar2 = FUN_001c1890(0);
  iVar3 = FUN_002d3ba0(0);
  iVar4 = 0;
  sVar1 = *(short *)(iVar2 + iVar3 * 2 + 0x13ee);
  *(undefined4 *)(iGpffff8d68 + 0x538) = 2;
  *(int *)(iGpffff8d68 + 0x53c) = (int)sVar1;
  *(undefined4 *)(iGpffff8d68 + 0x544) = 0xfffffffe;
  *(undefined4 *)(iGpffff8d68 + 0x594) = 0;
  iVar2 = iGpffff8d68 + 0x534;
  do {
    *(undefined2 *)(iVar2 + 0x14) = 0x162;
    iVar4 = iVar4 + 7;
    *(undefined2 *)(iVar2 + 0x16) = 0x162;
    *(undefined2 *)(iVar2 + 0x18) = 0x162;
    *(undefined2 *)(iVar2 + 0x1a) = 0x162;
    *(undefined2 *)(iVar2 + 0x1c) = 0x162;
    *(undefined2 *)(iVar2 + 0x1e) = 0x162;
    *(undefined2 *)(iVar2 + 0x20) = 0x162;
    iVar2 = iVar2 + 0xe;
  } while (iVar4 < 0x15);
  return;
}

// 0x002a8d40  size 0x158
void FUN_002a8d40(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = FUN_001f7ee0(0xffffffffffffffff,0);
  if (lVar1 == 0x11) {
    FUN_001f8640(param_1,0,2,2,1,6);
  }
  else {
    FUN_001f8640(param_1,0,2,2,1,0);
  }
  uVar2 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 0x10) {
    FUN_001fb290(5);
    if (*(int *)param_1 == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    }
    FUN_001fd070(*(undefined4 *)(*(int *)param_1 * 4 + 0x32ee80));
  }
  else if (uVar2 == 0x20) {
    FUN_001fb290(6);
    FUN_001fd070(0xb);
  }
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  return;
}

// 0x002a8ea0  size 0x148
void FUN_002a8ea0(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(iGpffff8d68 + 0x24) == 0x26) {
    *param_1 = 2;
  }
  else if (*(int *)(iGpffff8d68 + 0x24) == 0x29) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
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
  iVar2 = FUN_001c1890(0);
  iVar3 = FUN_002d3ba0(0);
  iVar4 = 0;
  sVar1 = *(short *)(iVar2 + iVar3 * 2 + 0x13ee);
  *(undefined4 *)(iGpffff8d68 + 0x538) = 2;
  *(int *)(iGpffff8d68 + 0x53c) = (int)sVar1;
  *(undefined4 *)(iGpffff8d68 + 0x544) = 0xfffffffe;
  *(undefined4 *)(iGpffff8d68 + 0x594) = 0;
  iVar2 = iGpffff8d68 + 0x534;
  do {
    *(undefined2 *)(iVar2 + 0x14) = 0x162;
    iVar4 = iVar4 + 7;
    *(undefined2 *)(iVar2 + 0x16) = 0x162;
    *(undefined2 *)(iVar2 + 0x18) = 0x162;
    *(undefined2 *)(iVar2 + 0x1a) = 0x162;
    *(undefined2 *)(iVar2 + 0x1c) = 0x162;
    *(undefined2 *)(iVar2 + 0x1e) = 0x162;
    *(undefined2 *)(iVar2 + 0x20) = 0x162;
    iVar2 = iVar2 + 0xe;
  } while (iVar4 < 0x15);
  return;
}

// 0x002a8ff0  size 0x208
void FUN_002a8ff0(undefined8 param_1,long param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0xa04) - 5U < 2) {
    FUN_001f8ca0(iGpffff8d68 + 0x654);
  }
  if (param_2 < 0) {
    if (param_2 != -2) {
      FUN_001fd070(*(undefined4 *)(iGpffff8d68 + 0x24));
    }
  }
  else {
    if ((int)param_2 - 0xcU < 3) {
      FUN_001f8ae0(iGpffff8d68 + 0x654,0);
      FUN_002a92f0(param_1);
    }
    if (param_2 == 0x14) {
      uVar3 = FUN_001c1890(0);
      FUN_001bb190(uVar3,*(undefined2 *)(*(int *)(iVar5 + 0xc) * 2 + iVar5 + 0x70c));
    }
    if (param_2 == 0x18) {
      FUN_002a9200(param_1);
    }
    if (((param_2 == 0x19) && (*(int *)(iVar5 + 0xa04) == 0x1d)) && (*(int *)(iVar5 + 0x9d8) == 0))
    {
      FUN_001b8610(&uStack_60,*(undefined1 *)(*(int *)(iVar5 + 0x60) * 4 + iVar5 + 0x608));
      uStack_28 = uStack_58;
      uStack_24 = uStack_54;
      uStack_20 = uStack_50;
      uStack_1c = uStack_4c;
      uStack_30 = uStack_60;
      uVar2 = uStack_30;
      uStack_30._0_2_ = (undefined2)uStack_60;
      uVar1 = (undefined2)uStack_30;
      uStack_2c = uStack_5c;
      uStack_18 = uStack_48;
      uStack_14 = uStack_44;
      uStack_10 = uStack_40;
      uStack_c = uStack_3c;
      uStack_30 = uVar2;
      uVar3 = FUN_001d3da0(uVar1);
      uVar4 = FUN_001c1890(0);
      FUN_001bb950(uVar4,uVar3);
      uVar4 = FUN_001c1890(0);
      FUN_001bb350(uVar4,uVar3,*(undefined4 *)(*(int *)(iVar5 + 0x60) * 4 + iVar5 + 0x608),0);
    }
    if ((param_2 == 0) || (*(int *)(iVar5 + 0xa04) == 0)) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    }
    *(int *)(iVar5 + 0xa08) = (int)param_2;
  }
  return;
}

// 0x002a9200  size 0xf0
void FUN_002a9200(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_001c1890(0);
  if (*(int *)(param_1 + 0x644) + -1 == *(int *)(param_1 + 0x68)) {
    FUN_001bbc70(uVar2,*(undefined2 *)((int)uVar2 + 0x13ec));
    FUN_001baf70(uVar2);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x68) * 8 + param_1 + 0x648);
    if (iVar1 == 0x13) {
      FUN_001baf70(uVar2);
    }
    else if (iVar1 == 0x11) {
      FUN_001bb950(uVar2,0xd);
      FUN_001bb950(uVar2,0xe);
    }
    else if (iVar1 == 0xe) {
      FUN_001bb950(uVar2,0xf);
      FUN_001bb950(uVar2,0x10);
    }
    else {
      uVar3 = FUN_002a9410();
      FUN_001bb950(uVar2,uVar3);
    }
  }
  return;
}

// 0x002a92f0  size 0x120
void FUN_002a92f0(int param_1)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x10) * 4 + param_1 + 0x7c);
  if ((*(int *)(param_1 + 8) - 3U < 2) && (*(int *)(param_1 + 0x68) == 2)) {
    uVar2 = FUN_002a14f0(*(undefined4 *)(param_1 + 0xc),0);
    uVar3 = FUN_002a14f0(*(undefined4 *)(param_1 + 0xc),1);
    uVar4 = FUN_001c1890(0);
    FUN_001bc010(uVar4,uVar2,sVar1);
    uVar2 = FUN_001c1890(0);
    FUN_001bc010(uVar2,uVar3,sVar1);
  }
  else if (sVar1 == -1) {
    uVar2 = FUN_002a14f0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x68));
    uVar3 = FUN_001c1890(0);
    FUN_001bb950(uVar3,uVar2);
  }
  else {
    uVar2 = FUN_002a14f0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x68));
    uVar3 = FUN_001c1890(0);
    FUN_001bc010(uVar3,uVar2,sVar1);
  }
  return;
}

// 0x002a9410  size 0x34
undefined8 FUN_002a9410(ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x18) {
                    /* WARNING: Could not recover jumptable at 0x002a9430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_00367560)[(int)param_1])();
    return uVar1;
  }
  return 0x16;
}

// 0x002a9510  size 0x24c
void FUN_002a9510(int param_1,int *param_2,long param_3,short param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  *param_2 = 0;
  iVar3 = FUN_0029f470(0xffffffffffffffff,0);
  if (param_3 == 0xd) {
    lVar10 = 0x67;
    lVar9 = 0x70;
  }
  else if ((param_3 == 4) || (param_3 == 0)) {
    iVar3 = (int)param_3 + iVar3;
    sVar2 = FUN_002a17d0(iVar3);
    lVar10 = (long)sVar2;
    sVar2 = FUN_002a1690(iVar3);
    lVar9 = (long)sVar2;
  }
  else {
    sVar2 = FUN_002a17d0(param_3);
    lVar10 = (long)sVar2;
    sVar2 = FUN_002a1690(param_3);
    lVar9 = (long)sVar2;
  }
  lVar6 = FUN_001f60a0((short)lVar10);
  if ((((lVar6 == 0) && (param_3 != 0x14)) && (param_3 != 0x16)) &&
     ((param_3 != 0x17 && (param_3 != 0x15)))) {
    *(undefined4 *)(param_1 + *param_2 * 4) = 0xffffffff;
    *param_2 = *param_2 + 1;
  }
  if (lVar10 <= lVar9) {
    iVar3 = (int)lVar10 << 1;
    do {
      if (lVar10 == 0x6b) {
        param_3 = 0xe;
      }
      else if (lVar10 == 0x6e) {
        param_3 = 0xf;
      }
      lVar6 = FUN_001f60a0((short)lVar10);
      if ((lVar6 == 1) || (iVar4 = FUN_001c1890(0), param_4 <= *(short *)(iVar4 + iVar3 + 0x1420)))
      {
LAB_002a96f0:
        lVar6 = FUN_0029f130(param_3);
        if (lVar6 == 1) {
          *(int *)(param_1 + *param_2 * 4) = (int)lVar10;
          *param_2 = *param_2 + 1;
        }
      }
      else {
        uVar8 = 0;
        do {
          uVar7 = FUN_001c1890(0);
          uVar7 = FUN_001bc3f0(uVar7);
          uVar7 = FUN_001d34d0(uVar7);
          psVar5 = (short *)FUN_001d23a0(uVar7,uVar8 & 0xff);
          if (lVar10 == *psVar5) {
            bVar1 = true;
            goto LAB_002a96e8;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 0x15);
        bVar1 = false;
LAB_002a96e8:
        if (bVar1) goto LAB_002a96f0;
      }
      lVar10 = (long)((int)lVar10 + 1);
      iVar3 = iVar3 + 2;
    } while (lVar10 <= lVar9);
  }
  return;
}

// 0x002a97e0  size 0x36c
void FUN_002a97e0(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  short *psVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar8 = FUN_001c1890(0);
  uVar8 = FUN_001bc3f0(uVar8);
  uVar5 = FUN_001d20f0(uVar8);
  iVar11 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar11 != 0) {
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 0;
    *(undefined4 *)(param_1 + 0xa24) = 0;
  }
  if (*(int *)(param_1 + 0x604) < 1) goto LAB_002a9a98;
  FUN_001f8640(param_1 + 0x60,0,8,*(int *)(param_1 + 0x604) + -1,1,0);
  uVar12 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar12) == 0) {
    uVar12 = 0x100000;
  }
  else if (uVar12 == 0x80000) {
    uVar12 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar12 = 0x100000;
  }
  if (uVar12 == 8) {
    *(int *)(param_1 + 0x9f0) = *(int *)(param_1 + 0x9f0) + 1;
    iVar11 = *(int *)(param_1 + 0x604) + -1;
    if (2 < iVar11) {
      iVar11 = 2;
    }
    if (iVar11 < *(int *)(param_1 + 0x9f0)) {
      if (*(int *)(param_1 + 0x604) < 4) {
        *(undefined4 *)(param_1 + 0x9f0) = 0;
      }
      else {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x9e0) = 1;
        *(undefined4 *)(param_1 + 0x9f0) = 2;
      }
    }
LAB_002a995c:
    iVar11 = *(int *)(param_1 + 0x60);
  }
  else {
    if (uVar12 == 4) {
      *(int *)(param_1 + 0x9f0) = *(int *)(param_1 + 0x9f0) + -1;
      if (*(int *)(param_1 + 0x9f0) < 0) {
        if (*(int *)(param_1 + 0x604) < 4) {
          *(int *)(param_1 + 0x9f0) = *(int *)(param_1 + 0x604) + -1;
        }
        else {
          *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 2;
          *(undefined4 *)(param_1 + 0x9f0) = 0;
        }
      }
      goto LAB_002a995c;
    }
    iVar11 = *(int *)(param_1 + 0x60);
  }
  iVar11 = *(int *)(iVar11 * 4 + param_1 + 0x608);
  FUN_001b8610(&uStack_60,(char)iVar11);
  uStack_28 = uStack_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  uStack_30 = uStack_60;
  uVar4 = uStack_30;
  uStack_30._0_2_ = (undefined2)uStack_60;
  uVar3 = (undefined2)uStack_30;
  uStack_2c = uStack_5c;
  uStack_18 = uStack_48;
  uStack_14 = uStack_44;
  uStack_10 = uStack_40;
  uStack_c = uStack_3c;
  uStack_30 = uVar4;
  uVar8 = FUN_001d3da0(uVar3);
  uVar9 = FUN_001c1890(0);
  uVar9 = FUN_001bc3f0(uVar9);
  uVar9 = FUN_001d34d0(uVar9);
  psVar6 = (short *)FUN_001d23a0(uVar9,uVar8);
  sVar1 = *psVar6;
  sVar2 = psVar6[1];
  iVar7 = FUN_001c1890(0);
  sVar13 = *(short *)(iVar7 + sVar1 * 2 + 0x1420);
  lVar10 = FUN_001f60a0(sVar1);
  if ((lVar10 == 1) || ((char)sVar2 != '\x1f')) {
    sVar13 = 0;
  }
  lVar10 = FUN_001bb4c0(uVar5,(long)iVar11,0);
  if (lVar10 == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0x1c;
  }
  else if ((long)(char)sVar2 == (long)iVar11) {
    *(undefined4 *)(param_1 + 0xa24) = 0x1b;
  }
  else if (sVar13 == 99) {
    *(undefined4 *)(param_1 + 0xa24) = 0x1a;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = 0x1d;
  }
LAB_002a9a98:
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1c000;
  return;
}

// 0x002a9bd0  size 0x80
void FUN_002a9bd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 0x15;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
  }
  FUN_001f8640(param_1 + 0x9d8,0,2,1,1,0);
  if (*(int *)(param_1 + 0x9d8) == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  return;
}

// 0x002a9c50  size 0x488
void FUN_002a9c50(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar7 != 0) {
    if (*(int *)(param_1 + 0xa00) == 0x18) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    *(undefined4 *)(param_1 + 0x644) = 0;
    do {
      if (iVar7 == 0x13) {
        uVar3 = FUN_001c1890(0);
        iVar2 = FUN_001bc3f0(uVar3);
        if (*(char *)(iVar2 + 0xc4) == '\x01') {
          *(undefined4 *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x648) = 0x13;
          *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
        }
      }
      else if (iVar7 == 0x11) {
        uVar3 = FUN_001c1890(0);
        uVar3 = FUN_001bbaa0(uVar3,0xd);
        uVar4 = FUN_001c1890(0);
        sVar1 = FUN_001bbaa0(uVar4,0xe);
        if (((short)uVar3 == sVar1) && (lVar5 = FUN_001f60a0(uVar3), lVar5 == 0)) {
          *(undefined4 *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x648) = 0x11;
          *(short *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x64c) = (short)uVar3;
          *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
        }
      }
      else if (iVar7 == 0xe) {
        uVar3 = FUN_001c1890(0);
        uVar3 = FUN_001bbaa0(uVar3,0xf);
        uVar4 = FUN_001c1890(0);
        sVar1 = FUN_001bbaa0(uVar4,0x10);
        if (((short)uVar3 == sVar1) && (lVar5 = FUN_001f60a0(uVar3), lVar5 == 0)) {
          *(undefined4 *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x648) = 0xe;
          *(short *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x64c) = (short)uVar3;
          *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
        }
      }
      else {
        uVar3 = FUN_002a9410(iVar7);
        uVar4 = FUN_001c1890(0);
        uVar3 = FUN_001bbaa0(uVar4,uVar3);
        lVar5 = FUN_001f60a0(uVar3);
        if ((lVar5 == 0) && ((short)uVar3 != -1)) {
          *(int *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x648) = iVar7;
          *(short *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x64c) = (short)uVar3;
          *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x18);
    if (*(int *)(param_1 + 0x644) == 0) {
      *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
    }
    else {
      *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
    }
  }
  iVar7 = *(int *)(param_1 + 0x644);
  if (iVar7 < 1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar7 == 2) {
    FUN_001f8640(param_1 + 0x68,0,2,0,0,0);
  }
  else {
    FUN_001f8640(param_1 + 0x68,0,2,iVar7 + -1,0,0);
  }
  uVar6 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar6) == 0) {
    uVar6 = 0x100000;
  }
  else if (uVar6 == 0x80000) {
    uVar6 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar6 = 0x100000;
  }
  if (uVar6 == 2) {
    if (iVar2 != *(int *)(param_1 + 0x68)) {
      *(int *)(param_1 + 0x9f8) = *(int *)(param_1 + 0x9f8) + 1;
      iVar7 = *(int *)(param_1 + 0x644) + -1;
      if (6 < iVar7) {
        iVar7 = 6;
      }
      if (iVar7 < *(int *)(param_1 + 0x9f8)) {
        if (*(int *)(param_1 + 0x644) < 8) {
          *(undefined4 *)(param_1 + 0x9f8) = 0;
        }
        else {
          *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 1;
          *(undefined4 *)(param_1 + 0x9f8) = 6;
        }
      }
    }
LAB_002a9eb4:
    iVar7 = *(int *)(param_1 + 0x644);
  }
  else {
    if (uVar6 == 1) {
      if ((iVar2 != *(int *)(param_1 + 0x68)) &&
         (*(int *)(param_1 + 0x9f8) = *(int *)(param_1 + 0x9f8) + -1, *(int *)(param_1 + 0x9f8) < 0)
         ) {
        if (*(int *)(param_1 + 0x644) < 8) {
          *(int *)(param_1 + 0x9f8) = *(int *)(param_1 + 0x644) + -1;
        }
        else {
          *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 2;
          *(undefined4 *)(param_1 + 0x9f8) = 0;
        }
      }
      goto LAB_002a9eb4;
    }
    iVar7 = *(int *)(param_1 + 0x644);
  }
  if (iVar7 + -1 == *(int *)(param_1 + 0x68)) {
    uVar3 = FUN_001c1890(0);
    iVar7 = FUN_001bc3f0(uVar3);
    if (*(char *)(iVar7 + 0xc4) == '\x01') goto LAB_002a9ef0;
    iVar7 = *(int *)(param_1 + 0x68);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x68);
  }
  if (*(int *)(iVar7 * 8 + param_1 + 0x648) != 0x13) {
    *(undefined4 *)(param_1 + 0xa24) = 0x16;
    return;
  }
LAB_002a9ef0:
  *(undefined4 *)(param_1 + 0xa24) = 0x17;
  return;
}

// 0x002aa120  size 0x7c
void FUN_002aa120(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 0x12;
  }
  FUN_001f8640(param_1 + 0x9d8,0,2,1,1,0);
  if (*(int *)(param_1 + 0x9d8) == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0x14;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  return;
}

// 0x002aa1a0  size 0x88
void FUN_002aa1a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x708);
  }
  else {
    *(undefined4 *)(param_1 + 0xa20) = 1;
    FUN_002a1e50(param_1 + 0x70c,0,param_1 + 0x708);
    iVar1 = *(int *)(param_1 + 0x708);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  else {
    FUN_001f8640(param_1 + 0xc,0,2,iVar1 + -1,1,0);
    *(undefined4 *)(param_1 + 0xa24) = 0x13;
  }
  return;
}

// 0x002aa230  size 0x3b0
void FUN_002aa230(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 0x10;
    *(undefined4 *)(param_1 + 0xa24) = 0x10;
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x604);
    }
    else {
      *(undefined4 *)(param_1 + 0x74) = 0xc;
    }
    iVar5 = FUN_002748d0(*(undefined4 *)(param_1 + 0x18));
    if (*(int *)(iVar5 * 4 + param_1 + 0x20) != -1) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  FUN_001f8640(param_1 + 0x1c,0,8,*(int *)(param_1 + 0x74) + -1,0,0);
  if (*(int *)(param_1 + 0x14) == 0) {
    if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x604)) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) * 4 + param_1 + 0x608);
    }
  }
  else if (*(int *)(param_1 + 0x1c) == 0xc) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c) + 0x1e;
  }
  uVar4 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar4 = 0x100000;
  }
  if (uVar4 == 0x10) {
    iVar3 = FUN_002748d0(*(undefined4 *)(param_1 + 0x18));
    *(int *)(iVar3 * 4 + param_1 + 0x20) = iVar2;
  }
  uVar4 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar4 = 0x100000;
  }
  if (uVar4 == 0x20) {
    iVar2 = FUN_002748d0(*(undefined4 *)(param_1 + 0x18));
    uVar1 = *(undefined2 *)(iVar2 * 4 + param_1 + 0x20);
    iVar2 = FUN_002748d0(*(undefined4 *)(param_1 + 0x18));
    *(undefined2 *)(iVar2 * 2 + iRam0036f458 + 0x572) = uVar1;
  }
  else {
    iVar3 = FUN_002748d0(*(undefined4 *)(param_1 + 0x18));
    *(short *)(iVar3 * 2 + iRam0036f458 + 0x572) = (short)iVar2;
  }
  if (iVar5 != *(int *)(param_1 + 0x1c)) {
    uVar4 = piRam0036f468[2];
    if ((piRam0036f468[4] & uVar4) == 0) {
      uVar6 = 0x100000;
    }
    else {
      uVar6 = 0x80000;
      if (uVar4 != 0x80000) {
        if (*piRam0036f468 == 1) {
          uVar6 = uVar4;
        }
        else {
          uVar6 = 0x100000;
        }
      }
    }
    if (uVar6 == 4) {
      *(int *)(param_1 + 0x9f4) = *(int *)(param_1 + 0x9f4) + -1;
      if (*(int *)(param_1 + 0x9f4) < 0) {
        if (*(int *)(param_1 + 0x74) < 4) {
          *(int *)(param_1 + 0x9f4) = *(int *)(param_1 + 0x74) + -1;
        }
        else {
          *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 2;
          *(undefined4 *)(param_1 + 0x9f4) = 0;
        }
      }
    }
    else {
      if ((piRam0036f468[4] & uVar4) == 0) {
        uVar4 = 0x100000;
      }
      else if (uVar4 == 0x80000) {
        uVar4 = 0x80000;
      }
      else if (*piRam0036f468 != 1) {
        uVar4 = 0x100000;
      }
      if (uVar4 == 8) {
        *(int *)(param_1 + 0x9f4) = *(int *)(param_1 + 0x9f4) + 1;
        iVar5 = *(int *)(param_1 + 0x74) + -1;
        if (2 < iVar5) {
          iVar5 = 2;
        }
        if (iVar5 < *(int *)(param_1 + 0x9f4)) {
          if (*(int *)(param_1 + 0x74) < 4) {
            *(undefined4 *)(param_1 + 0x9f4) = 0;
          }
          else {
            *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x400000;
            *(undefined4 *)(param_1 + 0x9e0) = 1;
            *(undefined4 *)(param_1 + 0x9f4) = 2;
          }
        }
      }
    }
  }
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x18000;
  return;
}

// 0x002aa5e0  size 0x404
void FUN_002aa5e0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar5 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0x11;
    *(undefined4 *)(param_1 + 0xa20) = 0xf;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x9f4) = 0;
    *(undefined4 *)(param_1 + 0x9e0) = 0;
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
    iVar2 = FUN_001c1890(0);
    iVar3 = FUN_002d3ba0(0);
    iVar5 = iRam0036f458;
    iVar7 = 0;
    sVar1 = *(short *)(iVar2 + iVar3 * 2 + 0x13ee);
    *(undefined4 *)(iRam0036f458 + 0x538) = 2;
    *(int *)(iVar5 + 0x53c) = (int)sVar1;
    iVar5 = iRam0036f458 + 0x534;
    do {
      *(undefined2 *)(iVar5 + 0x14) = 0x162;
      iVar7 = iVar7 + 7;
      *(undefined2 *)(iVar5 + 0x16) = 0x162;
      *(undefined2 *)(iVar5 + 0x18) = 0x162;
      *(undefined2 *)(iVar5 + 0x1a) = 0x162;
      *(undefined2 *)(iVar5 + 0x1c) = 0x162;
      *(undefined2 *)(iVar5 + 0x1e) = 0x162;
      *(undefined2 *)(iVar5 + 0x20) = 0x162;
      iVar5 = iVar5 + 0xe;
    } while (iVar7 < 0x15);
    *(undefined4 *)(iRam0036f458 + 0x594) = 0;
    *(undefined4 *)(iRam0036f458 + 0x544) = 0xfffffffe;
  }
  FUN_001f8640(param_1 + 0x18,0,2,0xf,1,0);
  uVar6 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar6) == 0) {
    uVar8 = 0x100000;
  }
  else {
    uVar8 = 0x80000;
    if ((uVar6 != 0x80000) && (uVar8 = uVar6, *piRam0036f468 != 1)) {
      uVar8 = 0x100000;
    }
  }
  if (uVar8 == 1) {
    *(int *)(param_1 + 0x9ec) = *(int *)(param_1 + 0x9ec) + -1;
    if (*(int *)(param_1 + 0x9ec) < 0) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x400000;
      *(undefined4 *)(param_1 + 0x9e0) = 2;
      *(undefined4 *)(param_1 + 0x9ec) = 0;
    }
  }
  else {
    if ((piRam0036f468[4] & uVar6) == 0) {
      uVar6 = 0x100000;
    }
    else if (uVar6 == 0x80000) {
      uVar6 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar6 = 0x100000;
    }
    if ((uVar6 == 2) &&
       (*(int *)(param_1 + 0x9ec) = *(int *)(param_1 + 0x9ec) + 1, 4 < *(int *)(param_1 + 0x9ec))) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x400000;
      *(undefined4 *)(param_1 + 0x9e0) = 1;
      *(undefined4 *)(param_1 + 0x9ec) = 4;
    }
  }
  uVar4 = FUN_002748d0(*(undefined4 *)(param_1 + 0x18));
  switch(uVar4) {
  case 0:
  case 1:
  case 2:
    switch(*(undefined4 *)(iRam0036f458 + 0x34)) {
    case 1:
      *(undefined4 *)(iRam0036f458 + 0x598) = 0xb;
      break;
    case 2:
      *(undefined4 *)(iRam0036f458 + 0x5dc) = 0xb;
      break;
    case 3:
      *(undefined4 *)(iRam0036f458 + 0x5fc) = 0xb;
      break;
    case 4:
      *(undefined4 *)(iRam0036f458 + 0x618) = 0xb;
    }
    break;
  case 3:
  case 4:
  case 5:
  case 9:
  case 10:
    switch(*(undefined4 *)(iRam0036f458 + 0x34)) {
    case 1:
      *(undefined4 *)(iRam0036f458 + 0x598) = 0xd;
      break;
    case 2:
      *(undefined4 *)(iRam0036f458 + 0x5dc) = 0xd;
      break;
    case 3:
      *(undefined4 *)(iRam0036f458 + 0x5fc) = 0xd;
      break;
    case 4:
      *(undefined4 *)(iRam0036f458 + 0x618) = 0xd;
    }
    break;
  case 6:
  case 7:
  case 8:
  case 0xb:
  case 0xc:
    switch(*(undefined4 *)(iRam0036f458 + 0x34)) {
    case 1:
      *(undefined4 *)(iRam0036f458 + 0x598) = 0xe;
      break;
    case 2:
      *(undefined4 *)(iRam0036f458 + 0x5dc) = 0xe;
      break;
    case 3:
      *(undefined4 *)(iRam0036f458 + 0x5fc) = 0xe;
      break;
    case 4:
      *(undefined4 *)(iRam0036f458 + 0x618) = 0xe;
    }
    break;
  case 0xd:
  case 0xe:
  case 0xf:
    switch(*(undefined4 *)(iRam0036f458 + 0x34)) {
    case 1:
      *(undefined4 *)(iRam0036f458 + 0x598) = 0xc;
      break;
    case 2:
      *(undefined4 *)(iRam0036f458 + 0x5dc) = 0xc;
      break;
    case 3:
      *(undefined4 *)(iRam0036f458 + 0x5fc) = 0xc;
      break;
    case 4:
      *(undefined4 *)(iRam0036f458 + 0x618) = 0xc;
    }
  }
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x18000;
  return;
}

// 0x002aa9f0  size 0x224
void FUN_002aa9f0(int param_1)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x604);
  }
  else {
    *(undefined4 *)(param_1 + 0xa20) = 3;
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0xa24) = 0x10;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x9ec) = 0;
    iVar5 = iGpffff8d68 + 0x534;
    do {
      *(undefined2 *)(iVar5 + 0x3e) = 0xfffe;
      iVar3 = iVar3 + 8;
      *(undefined2 *)(iVar5 + 0x40) = 0xfffe;
      *(undefined2 *)(iVar5 + 0x42) = 0xfffe;
      *(undefined2 *)(iVar5 + 0x44) = 0xfffe;
      *(undefined2 *)(iVar5 + 0x46) = 0xfffe;
      *(undefined2 *)(iVar5 + 0x48) = 0xfffe;
      *(undefined2 *)(iVar5 + 0x4a) = 0xfffe;
      *(undefined2 *)(iVar5 + 0x4c) = 0xfffe;
      iVar5 = iVar5 + 0x10;
    } while (iVar3 < 0x10);
    iVar3 = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
    iVar5 = param_1;
    do {
      uVar4 = FUN_001c1890(0);
      uVar4 = FUN_001bc3f0(uVar4);
      psVar1 = (short *)FUN_001d34e0(uVar4,iVar3);
      iVar3 = iVar3 + 1;
      *(int *)(iVar5 + 0x20) = (int)*psVar1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < 0x10);
    iVar5 = *(int *)(param_1 + 0x604);
  }
  uVar4 = 2;
  if (0 < iVar5) {
    uVar4 = 3;
  }
  FUN_001f8640(param_1 + 0x14,0,2,1,1,uVar4);
  uVar2 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar2 = 0x100000;
  }
  if ((uVar2 == 0x10) || (uVar2 == 0x20)) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x20);
      if ((iVar3 == -1) || (iVar3 == -1)) {
        uVar4 = FUN_001c1890(0);
        FUN_001b7d60(uVar4,iVar5);
      }
      else {
        uVar4 = FUN_001c1890(0);
        FUN_001b7da0(uVar4,iVar5,0,(short)iVar3);
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 4;
    } while (iVar5 < 0x10);
  }
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  return;
}

// 0x002aace0  size 0x80
void FUN_002aace0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 8;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
  }
  FUN_001f8640(param_1 + 0x9d8,0,2,1,1,0);
  if (*(int *)(param_1 + 0x9d8) == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0xe;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  return;
}

// 0x002aad60  size 0x80
void FUN_002aad60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 7;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
  }
  FUN_001f8640(param_1 + 0x9d8,0,2,1,1,0);
  if (*(int *)(param_1 + 0x9d8) == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0xd;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  return;
}

// 0x002aade0  size 0x80
void FUN_002aade0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 6;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
  }
  FUN_001f8640(param_1 + 0x9d8,0,2,1,1,0);
  if (*(int *)(param_1 + 0x9d8) == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0xc;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  return;
}

// 0x002aae60  size 0x590
void FUN_002aae60(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x9e0) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 5;
    *(undefined4 *)(param_1 + 0xa24) = 0xb;
    *(undefined4 *)(param_1 + 0xc) = 0x21;
    if (*(int *)(param_1 + 0x68) == 2) {
      FUN_002a9510(param_1 + 0x7c,param_1 + 0x78,*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x9d0) = 0;
    }
    else {
      FUN_002a9510(param_1 + 0x7c,param_1 + 0x78,*(undefined4 *)(param_1 + 0xc),1);
      *(undefined4 *)(param_1 + 0x9d0) = 0;
    }
    switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
    case 1:
      *(undefined4 *)(iGpffff8d68 + 0x598) = 2;
      break;
    case 2:
      *(undefined4 *)(iGpffff8d68 + 0x5dc) = 2;
      break;
    case 3:
      *(undefined4 *)(iGpffff8d68 + 0x5fc) = 2;
      break;
    case 4:
      *(undefined4 *)(iGpffff8d68 + 0x618) = 2;
    }
  }
  FUN_001f8640(param_1 + 0x10,0,8,*(int *)(param_1 + 0x78) + -1,1,0);
  uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x10) * 4 + param_1 + 0x7c);
  if (*(int *)(param_1 + 0x68) == 2) {
    *(undefined2 *)(iGpffff8d68 + 0x562) = uVar1;
    *(undefined2 *)(iGpffff8d68 + 0x564) = uVar1;
  }
  else if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined2 *)(iGpffff8d68 + 0x562) = uVar1;
    *(undefined2 *)(iGpffff8d68 + 0x564) = 0x162;
  }
  else {
    *(undefined2 *)(iGpffff8d68 + 0x562) = 0x162;
    *(undefined2 *)(iGpffff8d68 + 0x564) = uVar1;
  }
  uVar4 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar4) == 0) {
    uVar5 = 0x100000;
  }
  else {
    uVar5 = 0x80000;
    if ((uVar4 != 0x80000) && (uVar5 = uVar4, *piGpffff8d78 != 1)) {
      uVar5 = 0x100000;
    }
  }
  if (uVar5 == 4) {
    *(int *)(param_1 + 0x9dc) = *(int *)(param_1 + 0x9dc) + -1;
    if (*(int *)(param_1 + 0x9dc) < 0) {
      if (*(int *)(param_1 + 0x78) < 10) {
        *(int *)(param_1 + 0x9dc) = *(int *)(param_1 + 0x78) + -1;
      }
      else {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x9e0) = 2;
        *(undefined4 *)(param_1 + 0x9dc) = 0;
      }
    }
  }
  else {
    if ((piGpffff8d78[4] & uVar4) == 0) {
      uVar4 = 0x100000;
    }
    else if (uVar4 == 0x80000) {
      uVar4 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar4 = 0x100000;
    }
    if (uVar4 == 8) {
      *(int *)(param_1 + 0x9dc) = *(int *)(param_1 + 0x9dc) + 1;
      iVar2 = *(int *)(param_1 + 0x78) + -1;
      iVar3 = 8;
      if (iVar2 < 9) {
        iVar3 = iVar2;
      }
      if (iVar3 < *(int *)(param_1 + 0x9dc)) {
        if (*(int *)(param_1 + 0x78) < 10) {
          *(undefined4 *)(param_1 + 0x9dc) = 0;
        }
        else {
          *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 1;
          *(undefined4 *)(param_1 + 0x9dc) = 8;
        }
      }
    }
  }
  uVar4 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar4 = 0x100000;
  }
  if (uVar4 == 0x1000) {
    FUN_001fb290(7);
    *(int *)(param_1 + 0x9d0) = (*(int *)(param_1 + 0x9d0) + 1) % 3;
    iVar3 = *(int *)(param_1 + 0x9d0);
    if (iVar3 == 2) {
      switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
      case 1:
        *(undefined4 *)(iGpffff8d68 + 0x598) = 4;
        break;
      case 2:
        *(undefined4 *)(iGpffff8d68 + 0x5dc) = 4;
        break;
      case 3:
        *(undefined4 *)(iGpffff8d68 + 0x5fc) = 4;
        break;
      case 4:
        *(undefined4 *)(iGpffff8d68 + 0x618) = 4;
      }
      goto switchD_002ab308_caseD_0;
    }
    if (iVar3 == 1) {
      switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
      case 1:
        *(undefined4 *)(iGpffff8d68 + 0x598) = 3;
        break;
      case 2:
        *(undefined4 *)(iGpffff8d68 + 0x5dc) = 3;
        break;
      case 3:
        *(undefined4 *)(iGpffff8d68 + 0x5fc) = 3;
        break;
      case 4:
        *(undefined4 *)(iGpffff8d68 + 0x618) = 3;
      }
      goto switchD_002ab308_caseD_0;
    }
    if (iVar3 == 0) {
      switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
      case 1:
        *(undefined4 *)(iGpffff8d68 + 0x598) = 2;
        break;
      case 2:
        *(undefined4 *)(iGpffff8d68 + 0x5dc) = 2;
        break;
      case 3:
        *(undefined4 *)(iGpffff8d68 + 0x5fc) = 2;
        break;
      case 4:
        *(undefined4 *)(iGpffff8d68 + 0x618) = 2;
      }
      goto switchD_002ab308_caseD_0;
    }
  }
  else {
switchD_002ab308_caseD_0:
  }
  uVar4 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar4) == 0) {
    uVar5 = 0x100000;
  }
  else {
    uVar5 = 0x80000;
    if (uVar4 != 0x80000) {
      if (*piGpffff8d78 == 1) {
        uVar5 = uVar4;
      }
      else {
        uVar5 = 0x100000;
      }
    }
  }
  if (uVar5 != 0x10) {
    if ((piGpffff8d78[4] & uVar4) == 0) {
      uVar4 = 0x100000;
    }
    else if (uVar4 == 0x80000) {
      uVar4 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar4 = 0x100000;
    }
    if (uVar4 != 0x20) goto switchD_002ab114_caseD_0;
  }
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
  case 1:
    *(undefined4 *)(iGpffff8d68 + 0x598) = 2;
    break;
  case 2:
    *(undefined4 *)(iGpffff8d68 + 0x5dc) = 2;
    break;
  case 3:
    *(undefined4 *)(iGpffff8d68 + 0x5fc) = 2;
    break;
  case 4:
    *(undefined4 *)(iGpffff8d68 + 0x618) = 2;
  }
switchD_002ab114_caseD_0:
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  return;
}

// 0x002ab3f0  size 0xb4
void FUN_002ab3f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 4;
    *(undefined4 *)(param_1 + 0xa24) = 10;
    if (*(int *)(param_1 + 0x68) == 2) {
      FUN_002a9510(param_1 + 0x7c,param_1 + 0x78,*(undefined4 *)(param_1 + 0xc));
      iVar1 = *(int *)(param_1 + 0x78);
      goto LAB_002ab460;
    }
    FUN_002a9510(param_1 + 0x7c,param_1 + 0x78,*(undefined4 *)(param_1 + 0xc),1);
  }
  iVar1 = *(int *)(param_1 + 0x78);
LAB_002ab460:
  FUN_001f8640(param_1 + 0x10,0,2,iVar1 + -1,1,0);
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  return;
}

// 0x002ab4b0  size 0x818
void FUN_002ab4b0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar9 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar9 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 3;
    FUN_002a9510(param_1 + 0x7c,param_1 + 0x78,*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x9e0) = 0;
    iVar10 = 0;
    iVar9 = iGpffff8d68 + 0x534;
    do {
      *(undefined2 *)(iVar9 + 0x14) = 0x162;
      iVar10 = iVar10 + 7;
      *(undefined2 *)(iVar9 + 0x16) = 0x162;
      *(undefined2 *)(iVar9 + 0x18) = 0x162;
      *(undefined2 *)(iVar9 + 0x1a) = 0x162;
      *(undefined2 *)(iVar9 + 0x1c) = 0x162;
      *(undefined2 *)(iVar9 + 0x1e) = 0x162;
      *(undefined2 *)(iVar9 + 0x20) = 0x162;
      iVar9 = iVar9 + 0xe;
    } while (iVar10 < 0x15);
    *(undefined4 *)(iGpffff8d68 + 0x544) = 0xfffffffe;
    iVar9 = FUN_001c1890(0);
    iVar10 = FUN_002d3ba0(0);
    sVar1 = *(short *)(iVar9 + iVar10 * 2 + 0x13ee);
    *(undefined4 *)(iGpffff8d68 + 0x538) = 2;
    *(int *)(iGpffff8d68 + 0x53c) = (int)sVar1;
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
    lVar8 = FUN_0029f130(*(undefined4 *)(param_1 + 0xc));
    if (lVar8 == 1) {
      iVar9 = *(int *)(param_1 + 0xc);
      if ((((iVar9 == 7) || (iVar9 == 6)) || (iVar9 == 5)) || (iVar9 == 4)) {
        if (*(int *)(param_1 + 0xa00) == 3) {
          FUN_001f8ae0(iGpffff8d68 + 0x654,1);
        }
        *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
        switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
        case 1:
          *(undefined4 *)(iGpffff8d68 + 0x598) = 1;
          break;
        case 2:
          *(undefined4 *)(iGpffff8d68 + 0x5dc) = 1;
          break;
        case 3:
          *(undefined4 *)(iGpffff8d68 + 0x5fc) = 1;
          break;
        case 4:
          *(undefined4 *)(iGpffff8d68 + 0x618) = 1;
        }
      }
      else if (iVar9 == 0x1e) {
        if (*(int *)(param_1 + 0xa00) == 3) {
          FUN_001f8ae0(iGpffff8d68 + 0x654);
        }
        *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
        switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
        case 1:
          *(undefined4 *)(iGpffff8d68 + 0x598) = 10;
          break;
        case 2:
          *(undefined4 *)(iGpffff8d68 + 0x5dc) = 10;
          break;
        case 3:
          *(undefined4 *)(iGpffff8d68 + 0x5fc) = 10;
          break;
        case 4:
          *(undefined4 *)(iGpffff8d68 + 0x618) = 10;
        }
      }
      else if (iVar9 == 0x1d) {
        if (*(int *)(param_1 + 0xa00) == 3) {
          FUN_001f8ae0(iGpffff8d68 + 0x654);
        }
        *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
        switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
        case 1:
          *(undefined4 *)(iGpffff8d68 + 0x598) = 9;
          break;
        case 2:
          *(undefined4 *)(iGpffff8d68 + 0x5dc) = 9;
          break;
        case 3:
          *(undefined4 *)(iGpffff8d68 + 0x5fc) = 9;
          break;
        case 4:
          *(undefined4 *)(iGpffff8d68 + 0x618) = 9;
        }
      }
      else if (iVar9 == 0x1c) {
        if (*(int *)(param_1 + 0xa00) == 3) {
          FUN_001f8ae0(iGpffff8d68 + 0x654);
        }
        *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
        switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
        case 1:
          *(undefined4 *)(iGpffff8d68 + 0x598) = 8;
          break;
        case 2:
          *(undefined4 *)(iGpffff8d68 + 0x5dc) = 8;
          break;
        case 3:
          *(undefined4 *)(iGpffff8d68 + 0x5fc) = 8;
          break;
        case 4:
          *(undefined4 *)(iGpffff8d68 + 0x618) = 8;
        }
      }
      else if (iVar9 == 0x1b) {
        if (*(int *)(param_1 + 0xa00) == 3) {
          FUN_001f8ae0(iGpffff8d68 + 0x654);
        }
        *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
        switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
        case 1:
          *(undefined4 *)(iGpffff8d68 + 0x598) = 6;
          break;
        case 2:
          *(undefined4 *)(iGpffff8d68 + 0x5dc) = 6;
          break;
        case 3:
          *(undefined4 *)(iGpffff8d68 + 0x5fc) = 6;
          break;
        case 4:
          *(undefined4 *)(iGpffff8d68 + 0x618) = 6;
        }
      }
      else {
        if (iVar9 != 0x18) {
          iVar9 = *(int *)(param_1 + 0x78);
          goto LAB_002ab4e0;
        }
        if (*(int *)(param_1 + 0xa00) == 3) {
          FUN_001f8ae0(iGpffff8d68 + 0x654);
        }
        *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
        *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
        switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
        case 1:
          *(undefined4 *)(iGpffff8d68 + 0x598) = 5;
          break;
        case 2:
          *(undefined4 *)(iGpffff8d68 + 0x5dc) = 5;
          break;
        case 3:
          *(undefined4 *)(iGpffff8d68 + 0x5fc) = 5;
          break;
        case 4:
          *(undefined4 *)(iGpffff8d68 + 0x618) = 5;
        }
      }
    }
  }
  iVar9 = *(int *)(param_1 + 0x78);
LAB_002ab4e0:
  FUN_001f8640(param_1 + 0x10,0,2,iVar9 + -1,1,0);
  uVar4 = FUN_002a14f0(*(undefined4 *)(param_1 + 0xc),0);
  *(short *)((uVar4 & 0xff) * 2 + iGpffff8d68 + 0x548) =
       (short)*(undefined4 *)(*(int *)(param_1 + 0x10) * 4 + param_1 + 0x7c);
  uVar4 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar4) == 0) {
    uVar11 = 0x100000;
  }
  else {
    uVar11 = 0x80000;
    if ((uVar4 != 0x80000) && (uVar11 = uVar4, *piGpffff8d78 != 1)) {
      uVar11 = 0x100000;
    }
  }
  if (uVar11 == 1) {
    *(int *)(param_1 + 0x9fc) = *(int *)(param_1 + 0x9fc) + -1;
    if (*(int *)(param_1 + 0x9fc) < 0) {
      if (*(int *)(param_1 + 0x78) < 8) {
        *(int *)(param_1 + 0x9fc) = *(int *)(param_1 + 0x78) + -1;
      }
      else {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x9e0) = 2;
        *(undefined4 *)(param_1 + 0x9fc) = 0;
      }
    }
  }
  else {
    if ((piGpffff8d78[4] & uVar4) == 0) {
      uVar4 = 0x100000;
    }
    else if (uVar4 == 0x80000) {
      uVar4 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar4 = 0x100000;
    }
    if (uVar4 == 2) {
      *(int *)(param_1 + 0x9fc) = *(int *)(param_1 + 0x9fc) + 1;
      iVar9 = *(int *)(param_1 + 0x78) + -1;
      if (6 < iVar9) {
        iVar9 = 6;
      }
      if (iVar9 < *(int *)(param_1 + 0x9fc)) {
        if (*(int *)(param_1 + 0x78) < 8) {
          *(undefined4 *)(param_1 + 0x9fc) = 0;
        }
        else {
          *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 1;
          *(undefined4 *)(param_1 + 0x9fc) = 6;
        }
      }
    }
  }
  sVar1 = *(short *)(*(int *)(param_1 + 0x10) * 4 + param_1 + 0x7c);
  uVar6 = FUN_002a14f0(*(undefined4 *)(param_1 + 0xc),0xffffffffffffffff);
  uVar7 = FUN_001c1890(0);
  uVar7 = FUN_001bc3f0(uVar7);
  uVar7 = FUN_001d34d0(uVar7);
  psVar5 = (short *)FUN_001d23a0(uVar7,uVar6);
  sVar3 = psVar5[1];
  sVar2 = *psVar5;
  *(undefined4 *)(param_1 + 0xa24) = 9;
  if (sVar2 == sVar1) {
    if (((char)sVar3 == '\x1f') || (sVar2 == -1)) {
      *(undefined4 *)(param_1 + 0xa24) = 0xfffffffe;
    }
    else {
      iVar9 = FUN_001c1890(0);
      if (*(short *)(iVar9 + sVar2 * 2 + 0x1420) < 1) {
        *(undefined4 *)(param_1 + 0xa24) = 0xfffffffe;
      }
    }
  }
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  return;
}

// 0x002abcd0  size 0x23c
void FUN_002abcd0(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x9d0) = 0;
    *(undefined4 *)(param_1 + 0x9dc) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 2;
    *(undefined4 *)(param_1 + 0xa24) = 8;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x9fc) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 3;
    sVar1 = FUN_002a17d0(*(undefined4 *)(param_1 + 0xc));
    lVar6 = (long)sVar1;
    sVar2 = FUN_002a1690(*(undefined4 *)(param_1 + 0xc));
    if (lVar6 <= sVar2) {
      iVar5 = (int)sVar1 << 1;
      do {
        lVar4 = FUN_001f60a0((short)lVar6);
        if ((lVar4 == 1) || (iVar3 = FUN_001c1890(0), 1 < *(short *)(iVar3 + iVar5 + 0x1420))) {
          *(undefined4 *)(param_1 + 0x6c) = 0;
          break;
        }
        lVar6 = (long)((int)lVar6 + 1);
        iVar5 = iVar5 + 2;
      } while (lVar6 <= sVar2);
    }
    iVar3 = 0;
    iVar5 = iGpffff8d68 + 0x534;
    do {
      *(undefined2 *)(iVar5 + 0x14) = 0x162;
      iVar3 = iVar3 + 7;
      *(undefined2 *)(iVar5 + 0x16) = 0x162;
      *(undefined2 *)(iVar5 + 0x18) = 0x162;
      *(undefined2 *)(iVar5 + 0x1a) = 0x162;
      *(undefined2 *)(iVar5 + 0x1c) = 0x162;
      *(undefined2 *)(iVar5 + 0x1e) = 0x162;
      *(undefined2 *)(iVar5 + 0x20) = 0x162;
      iVar5 = iVar5 + 0xe;
    } while (iVar3 < 0x15);
    *(undefined4 *)(iGpffff8d68 + 0x544) = 0xfffffffe;
    if (*(int *)(param_1 + 0xa00) == 2) {
      FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    }
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    iVar5 = FUN_001c1890(0);
    iVar3 = FUN_002d3ba0(0);
    sVar1 = *(short *)(iVar5 + iVar3 * 2 + 0x13ee);
    *(undefined4 *)(iGpffff8d68 + 0x538) = 2;
    *(int *)(iGpffff8d68 + 0x53c) = (int)sVar1;
    switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
    case 1:
      *(undefined4 *)(iGpffff8d68 + 0x598) = 2;
      break;
    case 2:
      *(undefined4 *)(iGpffff8d68 + 0x5dc) = 2;
      break;
    case 3:
      *(undefined4 *)(iGpffff8d68 + 0x5fc) = 2;
      break;
    case 4:
      *(undefined4 *)(iGpffff8d68 + 0x618) = 2;
    }
  }
  FUN_001f8640(param_1 + 0x68,0,2,2,1,*(undefined4 *)(param_1 + 0x6c));
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  return;
}

// 0x002abf10  size 0x120
void FUN_002abf10(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  iVar6 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0x9dc) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 3;
    *(undefined4 *)(param_1 + 0xa24) = 7;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x9fc) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 3;
    sVar2 = FUN_002a17d0(*(undefined4 *)(param_1 + 0xc));
    lVar7 = (long)sVar2;
    sVar3 = FUN_002a1690(*(undefined4 *)(param_1 + 0xc));
    if (lVar7 <= sVar3) {
      iVar6 = (int)sVar2 << 1;
      do {
        lVar5 = FUN_001f60a0((short)lVar7);
        if ((lVar5 == 1) || (iVar4 = FUN_001c1890(0), 1 < *(short *)(iVar4 + iVar6 + 0x1420))) {
          *(undefined4 *)(param_1 + 0x6c) = 0;
          goto LAB_002abfe0;
        }
        lVar7 = (long)((int)lVar7 + 1);
        iVar6 = iVar6 + 2;
      } while (lVar7 <= sVar3);
      uVar1 = *(undefined4 *)(param_1 + 0x6c);
      goto LAB_002abfe4;
    }
  }
LAB_002abfe0:
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
LAB_002abfe4:
  FUN_001f8640(param_1 + 0x68,0,2,2,1,uVar1);
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  return;
}

