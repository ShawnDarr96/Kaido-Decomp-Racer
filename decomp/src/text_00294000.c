// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00294000 - 0x00298000
#include "ghidra_types.h"

// 0x002941d0  size 0x94
void FUN_002941d0(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = param_1[0x171];
  param_1[0x171] = 0;
  if (iVar2 != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    uVar1 = FUN_001831b0();
    FUN_00183320(uVar1);
    iVar2 = FUN_001831b0();
    FUN_00183300(iVar2 + 0x1c);
    iVar2 = FUN_001831b0();
    FUN_001831c0(iVar2 + 0x28);
    iVar2 = FUN_001831b0();
    FUN_001831c0(iVar2 + 0x110);
    iVar2 = FUN_001831b0();
    FUN_001833f0(*(undefined1 *)(iVar2 + 0x1c));
    iVar2 = FUN_001831b0();
    FUN_00183380(*(undefined1 *)(iVar2 + 0x20));
  }
  return;
}

// 0x00294270  size 0xf0
void FUN_00294270(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  iVar1 = param_1[0x171];
  param_1[0x171] = 0;
  if (iVar1 != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[10] = 0;
  }
  lVar2 = FUN_001fd830(0,2);
  if (lVar2 != 0) {
    FUN_001fb290(7);
    param_1[10] = param_1[10] != 0 ^ 1;
  }
  uVar3 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar3 = 0x100000;
  }
  if ((uVar3 == 0x10) && (param_1[10] != 0)) {
    param_1[1] = 0xd;
  }
  return;
}

// 0x00294380  size 0x138
void FUN_00294380(undefined4 *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  
  bVar1 = true;
  if ((param_1[0x174] == 0) && (param_1[0x172] == 0)) {
    bVar1 = false;
  }
  iVar5 = param_1[0x171];
  param_1[0x171] = 0;
  if (iVar5 == 0) {
    if (!bVar1) {
      bVar1 = true;
      iVar5 = 0;
      puVar4 = param_1;
      do {
        uVar2 = FUN_00141400(iVar5);
        lVar3 = (**(code **)(*(int *)((int)uVar2 + 4) + 8))(uVar2);
        if (lVar3 != 0) {
          if (puVar4[0xb] == 0) {
            lVar3 = FUN_00141a00(uVar2);
            if (lVar3 != 0) {
              bVar1 = false;
              puVar4[0xb] = 1;
            }
          }
          else {
            lVar3 = FUN_001419f0(uVar2);
            if (lVar3 != 0) {
              bVar1 = false;
            }
          }
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar5 < 2);
      if (bVar1) {
        param_1[0x170] = 6;
      }
    }
  }
  else {
    param_1[1] = 8;
    *param_1 = 8;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  return;
}

// 0x002944c0  size 0x2f0
void FUN_002944c0(undefined8 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  puVar2 = (undefined4 *)param_1;
  iVar5 = puVar2[0x171];
  puVar2[0x171] = 0;
  if (iVar5 != 0) {
    puVar2[0x81] = 0;
    puVar6 = puVar2 + 0x80;
    uVar7 = 0;
    puVar2[0x80] = 0;
    iVar5 = 0;
    puVar4 = puVar6;
    do {
      iVar3 = iVar5 + puVar2[0x81] * 0x50 + 0x32eb70;
      FUN_002425a0(puVar4 + 0x18,0xfc,iVar3,iVar3 + 4);
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 8;
      puVar4 = puVar4 + 5;
    } while (uVar7 < 10);
    uVar7 = 0;
    iVar5 = 0;
    do {
      iVar3 = iVar5 + puVar2[0x81] * 0x48 + 0x32ec10;
      FUN_002425a0(puVar6 + 0x4a,0xfd,iVar3,iVar3 + 4);
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 8;
      puVar6 = puVar6 + 5;
    } while (uVar7 < 9);
    iVar5 = FUN_001831b0();
    FUN_002964c0(puVar2 + 0x82,iVar5 + puVar2[0x81] * 0xe8 + 0x28);
    iVar5 = FUN_001831b0();
    FUN_002963b0(puVar2 + 0x8e,iVar5 + puVar2[0x81] * 0xe8 + 0x88);
    puVar6 = puVar2 + 0xf7;
    puVar2[0xf8] = 1;
    uVar7 = 0;
    iVar5 = 0;
    puVar2[0xf7] = 0;
    puVar4 = puVar6;
    do {
      iVar3 = iVar5 + puVar2[0xf8] * 0x50 + 0x32eb70;
      FUN_002425a0(puVar4 + 0x18,0xfc,iVar3,iVar3 + 4);
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 8;
      puVar4 = puVar4 + 5;
    } while (uVar7 < 10);
    uVar7 = 0;
    iVar5 = 0;
    do {
      iVar3 = iVar5 + puVar2[0xf8] * 0x48 + 0x32ec10;
      FUN_002425a0(puVar6 + 0x4a,0xfd,iVar3,iVar3 + 4);
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 8;
      puVar6 = puVar6 + 5;
    } while (uVar7 < 9);
    iVar5 = FUN_001831b0();
    FUN_002964c0(puVar2 + 0xf9,iVar5 + puVar2[0xf8] * 0xe8 + 0x28);
    iVar5 = FUN_001831b0();
    FUN_002963b0(puVar2 + 0x105,iVar5 + puVar2[0xf8] * 0xe8 + 0x88);
  }
  puVar2[1] = 6;
  *puVar2 = 6;
  FUN_00295db0(puVar2 + 0x80,param_1);
  FUN_00295db0(puVar2 + 0xf7,param_1);
  bVar1 = puVar2[0x83] != 0;
  if (!bVar1) {
    bVar1 = puVar2[0x8e] != 0;
  }
  if (!bVar1) {
    bVar1 = puVar2[0xfa] != 0;
    if (!bVar1) {
      bVar1 = puVar2[0x105] != 0;
    }
    if (!bVar1) {
      return;
    }
  }
  puVar2[1] = 7;
  return;
}

// 0x002947b0  size 0xf4
void FUN_002947b0(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = param_1[0x171];
  param_1[0x171] = 0;
  if (iVar3 != 0) {
    *param_1 = 3;
  }
  param_1[0xd] = 3;
  iVar3 = 0;
  param_1[0xd] = param_1[0xd] & 0xfffffffd;
  do {
    uVar1 = FUN_00141400(iVar3);
    lVar2 = (**(code **)(*(int *)((int)uVar1 + 4) + 8))(uVar1);
    if (lVar2 != 0) {
      param_1[0xd] = param_1[0xd] | 2;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  FUN_001f8640(param_1 + 8,0,2,1,1,param_1[0xd]);
  if (param_1[8] == 1) {
    param_1[1] = 8;
  }
  else if (param_1[8] == 0) {
    param_1[1] = 7;
  }
  return;
}

// 0x002948b0  size 0x524
void FUN_002948b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar7 = param_1[0x171];
  param_1[0x171] = 0;
  if (iVar7 != 0) {
    param_1[0x81] = 0;
    puVar8 = param_1 + 0x80;
    uVar12 = 0;
    param_1[0x80] = 0;
    iVar7 = 0;
    puVar9 = puVar8;
    do {
      iVar10 = iVar7 + param_1[0x81] * 0x50 + 0x32eb70;
      FUN_002425a0(puVar9 + 0x18,0xfc,iVar10,iVar10 + 4);
      uVar12 = uVar12 + 1;
      iVar7 = iVar7 + 8;
      puVar9 = puVar9 + 5;
    } while (uVar12 < 10);
    uVar12 = 0;
    iVar7 = 0;
    do {
      iVar10 = iVar7 + param_1[0x81] * 0x48 + 0x32ec10;
      FUN_002425a0(puVar8 + 0x4a,0xfd,iVar10,iVar10 + 4);
      uVar12 = uVar12 + 1;
      iVar7 = iVar7 + 8;
      puVar8 = puVar8 + 5;
    } while (uVar12 < 9);
    iVar7 = FUN_001831b0();
    FUN_002964c0(param_1 + 0x82,iVar7 + param_1[0x81] * 0xe8 + 0x28);
    iVar7 = FUN_001831b0();
    FUN_002963b0(param_1 + 0x8e,iVar7 + param_1[0x81] * 0xe8 + 0x88);
    puVar8 = param_1 + 0xf7;
    param_1[0xf8] = 1;
    uVar12 = 0;
    iVar7 = 0;
    param_1[0xf7] = 0;
    puVar9 = puVar8;
    do {
      iVar10 = iVar7 + param_1[0xf8] * 0x50 + 0x32eb70;
      FUN_002425a0(puVar9 + 0x18,0xfc,iVar10,iVar10 + 4);
      uVar12 = uVar12 + 1;
      iVar7 = iVar7 + 8;
      puVar9 = puVar9 + 5;
    } while (uVar12 < 10);
    uVar12 = 0;
    iVar7 = 0;
    do {
      iVar10 = iVar7 + param_1[0xf8] * 0x48 + 0x32ec10;
      FUN_002425a0(puVar8 + 0x4a,0xfd,iVar10,iVar10 + 4);
      uVar12 = uVar12 + 1;
      iVar7 = iVar7 + 8;
      puVar8 = puVar8 + 5;
    } while (uVar12 < 9);
    iVar7 = FUN_001831b0();
    FUN_002964c0(param_1 + 0xf9,iVar7 + param_1[0xf8] * 0xe8 + 0x28);
    iVar7 = FUN_001831b0();
    FUN_002963b0(param_1 + 0x105,iVar7 + param_1[0xf8] * 0xe8 + 0x88);
  }
  *param_1 = 4;
  param_1[1] = 4;
  FUN_00296030(param_1 + 0x80,param_1);
  FUN_00296030(param_1 + 0xf7,param_1);
  bVar6 = param_1[0x83] != 0;
  if (!bVar6) {
    bVar6 = param_1[0x8e] != 0;
  }
  if (!bVar6) {
    bVar6 = param_1[0xfa] != 0;
    if (!bVar6) {
      bVar6 = param_1[0x105] != 0;
    }
    if (!bVar6) {
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
      if (uVar12 != 0x10) {
        uVar12 = piGpffff8d78[3];
        if ((piGpffff8d78[5] & uVar12) == 0) {
          uVar12 = 0x100000;
        }
        else if (uVar12 == 0x80000) {
          uVar12 = 0x80000;
        }
        else if (*piGpffff8d78 != 1) {
          uVar12 = 0x100000;
        }
        if (uVar12 != 0x10) {
          return;
        }
      }
      iVar7 = FUN_001831b0();
      iVar11 = iVar7 + 0x28;
      FUN_001325d0(iVar11,0,0x60);
      *(undefined4 *)(iVar7 + 0x38) = 0x10;
      *(undefined4 *)(iVar7 + 0x3c) = 0x20;
      iVar10 = 0;
      *(undefined4 *)(iVar7 + 0x70) = 0x10;
      *(undefined4 *)(iVar7 + 0x74) = 0x20;
      puVar8 = &DAT_0032eb10;
      *(undefined4 *)(iVar7 + 0x2c) = 0x80000000;
      puVar9 = param_1;
      do {
        iVar10 = iVar10 + 5;
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        uVar5 = puVar8[4];
        *(undefined4 *)(iVar11 + puVar9[0x84] * 4) = *puVar8;
        puVar8 = puVar8 + 5;
        *(undefined4 *)(iVar11 + puVar9[0x85] * 4) = uVar2;
        *(undefined4 *)(iVar11 + puVar9[0x86] * 4) = uVar3;
        *(undefined4 *)(iVar11 + puVar9[0x87] * 4) = uVar4;
        piVar1 = puVar9 + 0x88;
        puVar9 = puVar9 + 5;
        *(undefined4 *)(iVar11 + *piVar1 * 4) = uVar5;
      } while (iVar10 < 10);
      iVar7 = FUN_001831b0();
      iVar11 = iVar7 + 0x110;
      FUN_001325d0(iVar11,0,0x60);
      *(undefined4 *)(iVar7 + 0x120) = 0x10;
      *(undefined4 *)(iVar7 + 0x124) = 0x20;
      iVar10 = 0;
      *(undefined4 *)(iVar7 + 0x158) = 0x10;
      *(undefined4 *)(iVar7 + 0x15c) = 0x20;
      puVar9 = &DAT_0032eb10;
      *(undefined4 *)(iVar7 + 0x114) = 0x80000000;
      do {
        iVar10 = iVar10 + 5;
        uVar2 = puVar9[1];
        uVar3 = puVar9[2];
        uVar4 = puVar9[3];
        uVar5 = puVar9[4];
        *(undefined4 *)(iVar11 + param_1[0xfb] * 4) = *puVar9;
        puVar9 = puVar9 + 5;
        *(undefined4 *)(iVar11 + param_1[0xfc] * 4) = uVar2;
        *(undefined4 *)(iVar11 + param_1[0xfd] * 4) = uVar3;
        *(undefined4 *)(iVar11 + param_1[0xfe] * 4) = uVar4;
        piVar1 = param_1 + 0xff;
        param_1 = param_1 + 5;
        *(undefined4 *)(iVar11 + *piVar1 * 4) = uVar5;
      } while (iVar10 < 10);
      return;
    }
  }
  param_1[1] = 5;
  return;
}

// 0x00294de0  size 0x1bc
void FUN_00294de0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  
  iVar1 = param_1[0x171];
  param_1[0x171] = 0;
  if (iVar1 != 0) {
    *param_1 = 3;
  }
  FUN_001f8640(param_1 + 7,0,2,1,1,0);
  if (param_1[7] == 1) {
    param_1[1] = 3;
    lVar3 = FUN_001fd830(0,8);
    if (lVar3 != 0) {
      FUN_001fb290(7);
      param_1[0x14] = param_1[0x14] != 0 ^ 1;
    }
  }
  else if (param_1[7] == 0) {
    param_1[1] = 5;
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
  if (uVar4 == 0x10) {
    puVar2 = (undefined4 *)FUN_001831b0();
    *puVar2 = param_1[0xe];
    puVar2[1] = param_1[0xf];
    puVar2[2] = param_1[0x10];
    puVar2[3] = param_1[0x11];
    puVar2[4] = param_1[0x12];
    puVar2[5] = param_1[0x13];
    puVar2[6] = param_1[0x14];
  }
  else if (uVar4 == 0x20) {
    puVar2 = (undefined4 *)FUN_001831b0();
    param_1[0xe] = *puVar2;
    param_1[0xf] = puVar2[1];
    param_1[0x10] = puVar2[2];
    param_1[0x11] = puVar2[3];
    param_1[0x12] = puVar2[4];
    param_1[0x13] = puVar2[5];
    param_1[0x14] = puVar2[6];
  }
  return;
}

// 0x00294fa0  size 0xc0
void FUN_00294fa0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[0x171];
  param_1[0x171] = 0;
  if (iVar1 != 0) {
    *param_1 = 0;
    puVar2 = (undefined4 *)FUN_001831b0();
    param_1[0xe] = *puVar2;
    param_1[0xf] = puVar2[1];
    param_1[0x10] = puVar2[2];
    param_1[0x11] = puVar2[3];
    param_1[0x12] = puVar2[4];
    param_1[0x13] = puVar2[5];
    param_1[0x14] = puVar2[6];
  }
  FUN_001f8640(param_1 + 6,0,2,1,1,0);
  if (param_1[6] == 1) {
    param_1[1] = 6;
  }
  else if (param_1[6] == 0) {
    param_1[1] = 4;
  }
  return;
}

// 0x00295060  size 0x2b0
void FUN_00295060(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[0x171];
  puVar4 = param_1 + 0x15;
  param_1[0x171] = 0;
  if (iVar1 != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    iVar1 = FUN_001831b0();
    param_1[0x15] = *(undefined4 *)(iVar1 + 0x1c);
    param_1[0x16] = *(undefined4 *)(iVar1 + 0x20);
    param_1[0x17] = *(undefined4 *)(iVar1 + 0x24);
    iVar1 = FUN_001831b0();
    param_1[0x18] = *(undefined4 *)(iVar1 + 0x1c);
    param_1[0x19] = *(undefined4 *)(iVar1 + 0x20);
    param_1[0x1a] = *(undefined4 *)(iVar1 + 0x24);
  }
  FUN_001f8640(param_1 + 5,0,2,3,1,0);
  iVar1 = param_1[5];
  if (iVar1 == 2) {
    lVar2 = FUN_001fd830(0,8);
    if (lVar2 != 0) {
      FUN_001fb290(7);
      param_1[0x17] = param_1[0x17] != 0 ^ 1;
    }
  }
  else if (iVar1 == 1) {
    lVar2 = FUN_001f8640(param_1 + 0x16,0,8,0xf,0,0);
    if (lVar2 != 0) {
      FUN_00183380(*(undefined1 *)(param_1 + 0x16));
    }
  }
  else if ((iVar1 == 0) && (lVar2 = FUN_001f8640(puVar4,0,8,0xf,0,0), lVar2 != 0)) {
    FUN_001833f0(*(undefined1 *)puVar4);
  }
  uVar3 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 0x10) {
    if (param_1[5] == 3) {
      iVar1 = FUN_001831b0();
      FUN_00183300(iVar1 + 0x1c);
      iVar1 = FUN_001831b0();
      FUN_001833f0(*(undefined1 *)(iVar1 + 0x1c));
      iVar1 = FUN_001831b0();
      FUN_00183380(*(undefined1 *)(iVar1 + 0x20));
      iVar1 = FUN_001831b0();
      param_1[0x15] = *(undefined4 *)(iVar1 + 0x1c);
      param_1[0x16] = *(undefined4 *)(iVar1 + 0x20);
      param_1[0x17] = *(undefined4 *)(iVar1 + 0x24);
      iVar1 = FUN_001831b0();
      param_1[0x18] = *(undefined4 *)(iVar1 + 0x1c);
      param_1[0x19] = *(undefined4 *)(iVar1 + 0x20);
      param_1[0x1a] = *(undefined4 *)(iVar1 + 0x24);
    }
    else {
      iVar1 = FUN_001831b0();
      *(undefined4 *)(iVar1 + 0x1c) = param_1[0x15];
      *(undefined4 *)(iVar1 + 0x20) = param_1[0x16];
      *(undefined4 *)(iVar1 + 0x24) = param_1[0x17];
      param_1[0x18] = param_1[0x15];
      param_1[0x19] = param_1[0x16];
      param_1[0x1a] = param_1[0x17];
      FUN_001833f0(*(undefined1 *)puVar4);
      FUN_00183380(*(undefined1 *)(param_1 + 0x16));
    }
  }
  else if (uVar3 == 0x20) {
    FUN_001833f0(*(undefined1 *)(param_1 + 0x18));
    FUN_00183380(*(undefined1 *)(param_1 + 0x19));
  }
  return;
}

// 0x00295320  size 0x348
void FUN_00295320(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar1 = param_1[0x171];
  param_1[0x171] = 0;
  if (iVar1 != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    puVar2 = (undefined4 *)FUN_001831b0();
    param_1[0xe] = *puVar2;
    param_1[0xf] = puVar2[1];
    param_1[0x10] = puVar2[2];
    param_1[0x11] = puVar2[3];
    param_1[0x12] = puVar2[4];
    param_1[0x13] = puVar2[5];
    param_1[0x14] = puVar2[6];
  }
  FUN_001f8640(param_1 + 4,0,2,6,1,0);
  switch(param_1[4]) {
  case 0:
    FUN_001f8640(param_1 + 0xe,0,8,2,1,0);
    goto LAB_002954b8;
  case 1:
    lVar3 = FUN_001fd830(0,8);
    if (lVar3 != 0) {
      FUN_001fb290(7);
      param_1[0xf] = param_1[0xf] != 0 ^ 1;
    }
    break;
  case 2:
    lVar3 = FUN_001fd830(0,8);
    if (lVar3 != 0) {
      FUN_001fb290(7);
      param_1[0x10] = param_1[0x10] != 0 ^ 1;
    }
    break;
  case 3:
    lVar3 = FUN_001fd830(0,8);
    if (lVar3 != 0) {
      FUN_001fb290(7);
      param_1[0x11] = param_1[0x11] != 0 ^ 1;
    }
    break;
  case 4:
    lVar3 = FUN_001fd830(0,8);
    if (lVar3 != 0) {
      FUN_001fb290(7);
      param_1[0x12] = param_1[0x12] != 0 ^ 1;
    }
    break;
  case 5:
    lVar3 = FUN_001fd830(0,8);
    if (lVar3 != 0) {
      FUN_001fb290(7);
      param_1[0x13] = param_1[0x13] != 0 ^ 1;
    }
  }
LAB_002954b8:
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
    if (param_1[4] == 6) {
      uVar4 = FUN_001831b0();
      FUN_00183320(uVar4);
      puVar2 = (undefined4 *)FUN_001831b0();
      param_1[0xe] = *puVar2;
      param_1[0xf] = puVar2[1];
      param_1[0x10] = puVar2[2];
      param_1[0x11] = puVar2[3];
      param_1[0x12] = puVar2[4];
      param_1[0x13] = puVar2[5];
      param_1[0x14] = puVar2[6];
    }
    else {
      puVar2 = (undefined4 *)FUN_001831b0();
      *puVar2 = param_1[0xe];
      puVar2[1] = param_1[0xf];
      puVar2[2] = param_1[0x10];
      puVar2[3] = param_1[0x11];
      puVar2[4] = param_1[0x12];
      puVar2[5] = param_1[0x13];
      puVar2[6] = param_1[0x14];
    }
  }
  else if (uVar5 == 0x20) {
    puVar2 = (undefined4 *)FUN_001831b0();
    param_1[0xe] = *puVar2;
    param_1[0xf] = puVar2[1];
    param_1[0x10] = puVar2[2];
    param_1[0x11] = puVar2[3];
    param_1[0x12] = puVar2[4];
    param_1[0x13] = puVar2[5];
    param_1[0x14] = puVar2[6];
  }
  return;
}

// 0x00295670  size 0xdc
void FUN_00295670(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x171];
  param_1[0x171] = 0;
  if (iVar1 != 0) {
    *param_1 = 0xffffffff;
  }
  FUN_001f8640(param_1 + 3,0,2,6,1,0);
  switch(param_1[3]) {
  case 0:
    param_1[1] = 1;
    break;
  case 1:
    param_1[1] = 2;
    break;
  case 2:
    param_1[1] = 3;
    break;
  case 3:
    param_1[1] = 0xfffffffe;
    break;
  case 4:
    param_1[1] = 0xfffffffd;
    break;
  case 5:
    param_1[1] = 0xfffffffc;
    break;
  case 6:
    param_1[1] = 0xc;
  }
  return;
}

// 0x00295750  size 0x184
void FUN_00295750(undefined8 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar1 = 0x100000;
  }
  puVar2 = (undefined4 *)param_1;
  if (uVar1 == 0x10) {
    FUN_001fb290(5);
    FUN_002958e0(param_1,puVar2[1]);
  }
  else if (uVar1 == 0x20) {
    FUN_001fb290(6);
    FUN_002958e0(param_1,*puVar2);
  }
  else if ((puVar2[0x16f] == 5) || (puVar2[0x16f] == 7)) {
    uVar1 = piGpffff8d78[3];
    if ((piGpffff8d78[5] & uVar1) == 0) {
      uVar1 = 0x100000;
    }
    else if (uVar1 == 0x80000) {
      uVar1 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar1 = 0x100000;
    }
    if (uVar1 == 0x10) {
      FUN_001fb290(5);
      FUN_002958e0(param_1,puVar2[1]);
    }
    else if (uVar1 == 0x20) {
      FUN_001fb290(6);
      FUN_002958e0(param_1,*puVar2);
    }
  }
  return;
}

// 0x002958e0  size 0xcc
void FUN_002958e0(int param_1,long param_2)

{
  *(int *)(param_1 + 0x5c0) = (int)param_2;
  if (param_2 < 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    if (param_2 == -4) {
      FUN_001fd070(0x2c);
    }
    else if (param_2 == -2) {
      FUN_002d8f60(0,0,0);
      FUN_001fd070(0x18);
    }
    else if (param_2 == -3) {
      FUN_001fd070(0x19);
    }
    else if (param_2 == -1) {
      if ((*(uint *)(iGpffff8d68 + 0x28) & 0x2000) == 0) {
        FUN_001fd070(0x16);
      }
      else {
        FUN_001fb2a0();
      }
    }
  }
  return;
}

// 0x002959b0  size 0x44
void FUN_002959b0(void)

{
  if ((*(uint *)(iGpffff8d68 + 0x28) & 0x2000) != 0) {
    FUN_001c1a10();
  }
  return;
}

// 0x00295a00  size 0x60
void FUN_00295a00(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_001fb170(iVar2 + 0x5b8);
  if (lVar1 != 0) {
    (*(code *)(&PTR_FUN_0032ead0)[*(int *)(iVar2 + 0x5bc)])(param_1);
    FUN_00295750(param_1);
    FUN_001fb240(iVar2 + 0x5b8);
  }
  return;
}

// 0x00295a60  size 0x344
void FUN_00295a60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar1 = (undefined4 *)FUN_001831b0();
  param_1[0xe] = *puVar1;
  param_1[0xf] = puVar1[1];
  param_1[0x10] = puVar1[2];
  param_1[0x11] = puVar1[3];
  param_1[0x12] = puVar1[4];
  param_1[0x13] = puVar1[5];
  param_1[0x14] = puVar1[6];
  iVar2 = FUN_001831b0();
  puVar4 = param_1 + 0x80;
  uVar5 = 0;
  iVar3 = 0;
  param_1[0x15] = *(undefined4 *)(iVar2 + 0x1c);
  param_1[0x16] = *(undefined4 *)(iVar2 + 0x20);
  param_1[0x17] = *(undefined4 *)(iVar2 + 0x24);
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  puVar1 = puVar4;
  do {
    iVar2 = iVar3 + param_1[0x81] * 0x50 + 0x32eb70;
    FUN_002425a0(puVar1 + 0x18,0xfc,iVar2,iVar2 + 4);
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + 8;
    puVar1 = puVar1 + 5;
  } while (uVar5 < 10);
  uVar5 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + param_1[0x81] * 0x48 + 0x32ec10;
    FUN_002425a0(puVar4 + 0x4a,0xfd,iVar3,iVar3 + 4);
    uVar5 = uVar5 + 1;
    iVar2 = iVar2 + 8;
    puVar4 = puVar4 + 5;
  } while (uVar5 < 9);
  iVar2 = FUN_001831b0();
  FUN_002964c0(param_1 + 0x82,iVar2 + param_1[0x81] * 0xe8 + 0x28);
  iVar2 = FUN_001831b0();
  FUN_002963b0(param_1 + 0x8e,iVar2 + param_1[0x81] * 0xe8 + 0x88);
  puVar4 = param_1 + 0xf7;
  param_1[0xf8] = 1;
  uVar5 = 0;
  iVar2 = 0;
  param_1[0xf7] = 0;
  puVar1 = puVar4;
  do {
    iVar3 = iVar2 + param_1[0xf8] * 0x50 + 0x32eb70;
    FUN_002425a0(puVar1 + 0x18,0xfc,iVar3,iVar3 + 4);
    uVar5 = uVar5 + 1;
    iVar2 = iVar2 + 8;
    puVar1 = puVar1 + 5;
  } while (uVar5 < 10);
  uVar5 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + param_1[0xf8] * 0x48 + 0x32ec10;
    FUN_002425a0(puVar4 + 0x4a,0xfd,iVar3,iVar3 + 4);
    uVar5 = uVar5 + 1;
    iVar2 = iVar2 + 8;
    puVar4 = puVar4 + 5;
  } while (uVar5 < 9);
  iVar2 = FUN_001831b0();
  FUN_002964c0(param_1 + 0xf9,iVar2 + param_1[0xf8] * 0xe8 + 0x28);
  iVar2 = FUN_001831b0();
  FUN_002963b0(param_1 + 0x105,iVar2 + param_1[0xf8] * 0xe8 + 0x88);
  param_1[0x16e] = 0xffffffff;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x172] = 1;
  param_1[0x175] = 0;
  param_1[0x173] = 1;
  param_1[0x171] = 1;
  param_1[0x174] = 0;
  FUN_001fabb0(iGpffff8d68 + 0x534);
  if ((*(uint *)(iGpffff8d68 + 0x28) & 0x2000) != 0) {
    FUN_001c1980();
  }
  return;
}

// 0x00295db0  size 0x27c
void FUN_00295db0(int *param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined **ppuVar8;
  uint uVar9;
  int iVar10;
  
  iVar5 = param_1[1];
  uVar9 = piGpffff8d78[iVar5 + 2];
  if ((piGpffff8d78[iVar5 + 4] & uVar9) == 0) {
    uVar9 = 0x100000;
  }
  else if (uVar9 == 0x80000) {
    uVar9 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar9 = 0x100000;
  }
  FUN_001f8640(param_1,iVar5,2,9,1,0);
  if (*param_1 == 9) {
    if (uVar9 == 0x10) {
      iVar5 = FUN_001831b0();
      FUN_001830d0(iVar5 + param_1[1] * 0xe8 + 0x88);
      iVar5 = FUN_001831b0();
      FUN_002963b0(param_1 + 0xe,iVar5 + param_1[1] * 0xe8 + 0x88);
      *(undefined4 *)(param_2 + 4) = 7;
    }
  }
  else {
    if (uVar9 == 0x10) {
      bVar4 = param_1[3] != 0;
      if (!bVar4) {
        bVar4 = param_1[0xe] != 0;
      }
      if (!bVar4) {
        iVar5 = FUN_001831b0();
        iVar10 = iVar5 + param_1[1] * 0xe8 + 0x88;
        FUN_001325d0(iVar10,0,0x18);
        iVar5 = 0;
        ppuVar8 = &PTR_DAT_0032eb40;
        piVar7 = param_1;
        do {
          iVar5 = iVar5 + 3;
          puVar2 = ppuVar8[1];
          puVar3 = ppuVar8[2];
          *(undefined **)(iVar10 + piVar7[0xf] * 4) = *ppuVar8;
          ppuVar8 = ppuVar8 + 3;
          *(undefined **)(iVar10 + piVar7[0x10] * 4) = puVar2;
          piVar1 = piVar7 + 0x11;
          piVar7 = piVar7 + 3;
          *(undefined **)(iVar10 + *piVar1 * 4) = puVar3;
        } while (iVar5 < 9);
        goto LAB_00295f88;
      }
    }
    FUN_001f8640(param_1 + *param_1 + 0xf,param_1[1],8,6,1,0);
  }
LAB_00295f88:
  param_1[0xe] = 0;
  uVar9 = 0;
  iVar5 = 0;
  piVar7 = param_1;
  do {
    if (piVar7[0xf] != 6) {
      uVar6 = 1 << (piVar7[0xf] & 0x1fU);
      if ((uVar9 & uVar6) == 0) {
        uVar9 = uVar9 | uVar6;
      }
      else {
        param_1[0xe] = param_1[0xe] | uVar6;
      }
    }
    iVar5 = iVar5 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar5 < 9);
  return;
}

// 0x00296030  size 0x378
void FUN_00296030(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  
  iVar1 = param_1[1];
  uVar6 = piGpffff8d78[iVar1 + 2];
  if ((piGpffff8d78[iVar1 + 4] & uVar6) == 0) {
    uVar6 = 0x100000;
  }
  else if (uVar6 == 0x80000) {
    uVar6 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar6 = 0x100000;
  }
  FUN_001f8640(param_1,iVar1,2,10,1,0);
  iVar1 = *param_1;
  if (iVar1 == 10) {
    if (uVar6 == 0x10) {
      iVar1 = FUN_001831b0();
      FUN_00183110(iVar1 + param_1[1] * 0xe8 + 0x28);
      *param_1 = 0;
      uVar6 = 0;
      iVar1 = 0;
      piVar5 = param_1;
      do {
        iVar3 = iVar1 + param_1[1] * 0x50 + 0x32eb70;
        FUN_002425a0(piVar5 + 0x18,0xfc,iVar3,iVar3 + 4);
        uVar6 = uVar6 + 1;
        iVar1 = iVar1 + 8;
        piVar5 = piVar5 + 5;
      } while (uVar6 < 10);
      uVar6 = 0;
      iVar1 = 0;
      piVar5 = param_1;
      do {
        iVar3 = iVar1 + param_1[1] * 0x48 + 0x32ec10;
        FUN_002425a0(piVar5 + 0x4a,0xfd,iVar3,iVar3 + 4);
        uVar6 = uVar6 + 1;
        iVar1 = iVar1 + 8;
        piVar5 = piVar5 + 5;
      } while (uVar6 < 9);
      iVar1 = FUN_001831b0();
      FUN_002964c0(param_1 + 2,iVar1 + param_1[1] * 0xe8 + 0x28);
      iVar1 = FUN_001831b0();
      FUN_002963b0(param_1 + 0xe,iVar1 + param_1[1] * 0xe8 + 0x88);
      *param_1 = 10;
      *(undefined4 *)(param_2 + 4) = 5;
    }
  }
  else {
    if (uVar6 == 4) {
      uVar6 = *(uint *)(&DAT_0032eaa0 + iVar1 * 4);
      puVar4 = (uint *)(param_1 + iVar1 + 4);
      do {
        *puVar4 = *puVar4 + 1;
        uVar2 = *puVar4;
        if ((int)uVar2 < 0) {
          uVar2 = 0x1b;
        }
        else if (0x1b < (int)uVar2) {
          uVar2 = 0;
        }
        *puVar4 = uVar2;
      } while ((1 << (*puVar4 & 0x1f) & uVar6) == 0);
      FUN_001fb290(7);
      param_1[3] = 0;
      goto LAB_002962b0;
    }
    if (uVar6 == 8) {
      uVar6 = *(uint *)(&DAT_0032eaa0 + iVar1 * 4);
      puVar4 = (uint *)(param_1 + iVar1 + 4);
      do {
        *puVar4 = *puVar4 - 1;
        uVar2 = *puVar4;
        if ((int)uVar2 < 0) {
          uVar2 = 0x1b;
        }
        else if (0x1b < (int)uVar2) {
          uVar2 = 0;
        }
        *puVar4 = uVar2;
      } while ((1 << (*puVar4 & 0x1f) & uVar6) == 0);
      FUN_001fb290(7);
    }
  }
  param_1[3] = 0;
LAB_002962b0:
  uVar6 = 0;
  iVar1 = 0;
  piVar5 = param_1;
  do {
    uVar2 = 1 << (piVar5[4] & 0x1fU);
    if ((uVar6 & uVar2) == 0) {
      uVar6 = uVar6 | uVar2;
    }
    else {
      param_1[3] = param_1[3] | uVar2;
    }
    iVar1 = iVar1 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar1 < 10);
  return;
}

// 0x002963b0  size 0x104
void FUN_002963b0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  param_1[1] = 6;
  param_1[2] = 6;
  param_1[3] = 6;
  param_1[4] = 6;
  param_1[5] = 6;
  param_1[6] = 6;
  param_1[7] = 6;
  param_1[8] = 6;
  param_1[9] = 6;
  do {
    iVar1 = *param_2;
    if (iVar1 == -0x80000000) {
      param_1[9] = iVar2;
    }
    else if (iVar1 == 0x20000000) {
      param_1[1] = iVar2;
    }
    else if (iVar1 == 0x800000) {
      param_1[8] = iVar2;
    }
    else if (iVar1 == 0x200) {
      param_1[4] = iVar2;
    }
    else if (iVar1 == 0x100) {
      param_1[7] = iVar2;
    }
    else if (iVar1 == 0x80) {
      param_1[6] = iVar2;
    }
    else if (iVar1 == 0x40) {
      param_1[5] = iVar2;
    }
    else if (iVar1 == 2) {
      param_1[3] = iVar2;
    }
    else if (iVar1 == 1) {
      param_1[2] = iVar2;
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  } while (iVar2 < 6);
  *param_1 = 0;
  return;
}

// 0x002964c0  size 0x140
void FUN_002964c0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 8) = 9;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0xc) = 7;
  *(undefined4 *)(param_1 + 0x10) = 0xe;
  *(undefined4 *)(param_1 + 0x14) = 0xd;
  *(undefined4 *)(param_1 + 0x18) = 10;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  *(undefined4 *)(param_1 + 0x20) = 6;
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined4 *)(param_1 + 0x28) = 0xb;
  *(undefined4 *)(param_1 + 0x2c) = 0xc;
  *(undefined4 *)(param_1 + 0x30) = 8;
  do {
    iVar1 = *param_2;
    if (iVar1 == 0x20000000) {
      *(int *)(param_1 + 0x10) = iVar2;
    }
    else if (iVar1 == 0x800000) {
      *(int *)(param_1 + 0x2c) = iVar2;
    }
    else if (iVar1 == 0x200) {
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    else if (iVar1 == 0x100) {
      *(int *)(param_1 + 0x28) = iVar2;
    }
    else if (iVar1 == 0x80) {
      *(int *)(param_1 + 0x24) = iVar2;
    }
    else if (iVar1 == 0x40) {
      *(int *)(param_1 + 0x20) = iVar2;
    }
    else if (iVar1 == 8) {
      *(int *)(param_1 + 0xc) = iVar2;
    }
    else if (iVar1 == 4) {
      *(int *)(param_1 + 8) = iVar2;
    }
    else if (iVar1 == 2) {
      *(int *)(param_1 + 0x18) = iVar2;
    }
    else if (iVar1 == 1) {
      *(int *)(param_1 + 0x14) = iVar2;
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  } while (iVar2 < 0x18);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 0x00296600  size 0x240
int FUN_00296600(void)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = FUN_001c1890(0);
  uVar2 = FUN_001bdd00(uVar1);
  if ((uVar2 & 4) == 0) {
    uVar2 = FUN_001bdd00(uVar1);
    if ((uVar2 & 8) == 0) {
      uVar2 = FUN_001bdd00(uVar1);
      if ((uVar2 & 0x10) == 0) {
        uVar2 = FUN_001bdd00(uVar1);
        if ((uVar2 & 0x20) == 0) {
          uVar2 = FUN_001bdd00(uVar1);
          if ((uVar2 & 0x40) == 0) {
            uVar2 = FUN_001bdd00(uVar1);
            if ((uVar2 & 0x80) == 0) {
              uVar2 = FUN_001bdd00(uVar1);
              if ((uVar2 & 0x100) == 0) {
                uVar2 = FUN_001bdd00(uVar1);
                if ((uVar2 & 0x200) == 0) {
                  uVar2 = FUN_001bdd00(uVar1);
                  if ((uVar2 & 2) != 0) {
                    FUN_001bdce0(uVar1,2);
                    FUN_001bdd10(uVar1,0x200000);
                    FUN_001bdd10(uVar1,0x1000);
                    uRam0036f2b4 = 0xe;
                    FUN_0017e860(4);
                    iVar3 = 1;
                  }
                }
                else {
                  FUN_001bdce0(uVar1,0x200);
                  uRam0036f2b4 = 0x1e;
                  FUN_0017e860(3);
                  iVar3 = 1;
                }
              }
              else {
                FUN_001bdce0(uVar1,0x100);
                uRam0036f2b4 = 0x1f;
                FUN_0017e860(3);
                iVar3 = 1;
              }
            }
            else {
              FUN_001bdce0(uVar1,0x80);
              uRam0036f2b4 = 0x1c;
              FUN_0017e860(3);
              iVar3 = 1;
            }
          }
          else {
            FUN_001bdce0(uVar1,0x40);
            uRam0036f2b4 = 0x1b;
            FUN_0017e860(3);
            iVar3 = 1;
          }
        }
        else {
          FUN_001bdce0(uVar1,0x20);
          uRam0036f2b4 = 0x1a;
          FUN_0017e860(3);
          iVar3 = 1;
        }
      }
      else {
        FUN_001bdce0(uVar1,0x10);
        uRam0036f2b4 = 0x1d;
        FUN_0017e860(3);
        iVar3 = 1;
      }
    }
    else {
      FUN_001bdce0(uVar1,8);
      uRam0036f2b4 = 0x19;
      FUN_0017e860(3);
      iVar3 = 1;
    }
  }
  else {
    FUN_001bdce0(uVar1,4);
    uRam0036f2b4 = 0x18;
    FUN_0017e860(3);
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    FUN_001fd070(0xfffffffffffffffd);
  }
  return iVar3;
}

// 0x00296840  size 0xe4
void FUN_00296840(int param_1)

{
  uint uVar1;
  
  uVar1 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 0x10) {
    *(undefined4 *)(param_1 + 0x640) = 0;
    *(undefined4 *)(param_1 + 0x644) = 2;
    FUN_001fb290(5);
  }
  else if (uVar1 == 0x20) {
    if (*(int *)(param_1 + 0x63c) - 0x1fU < 2) {
      *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x63c);
      *(undefined4 *)(param_1 + 0x644) = 2;
      FUN_001fb290(6);
    }
    else {
      *(undefined4 *)(param_1 + 0x640) = 0;
      *(undefined4 *)(param_1 + 0x644) = 2;
      FUN_001fb290(5);
    }
  }
  return;
}

// 0x00296930  size 0x150
void FUN_00296930(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x644);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x644) = 0;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
    *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
  }
  else if (iVar1 == 1) {
    uVar3 = piGpffff8d78[2];
    if ((piGpffff8d78[4] & uVar3) == 0) {
      uVar3 = 0x100000;
    }
    else if (uVar3 == 0x80000) {
      uVar3 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar3 = 0x100000;
    }
    if (uVar3 == 0x10) {
      if (*(byte *)(param_1 + 0x480) - 1 < 2) {
        *(undefined4 *)(param_1 + 0x640) = 0x27;
      }
      else {
        *(undefined4 *)(param_1 + 0x640) = 0x10;
      }
      *(undefined4 *)(param_1 + 0x644) = 2;
      FUN_001fb290(5);
    }
    else if (uVar3 == 0x20) {
      *(undefined4 *)(param_1 + 0x640) = 4;
      *(undefined4 *)(param_1 + 0x644) = 2;
      FUN_001fb290(6);
    }
  }
  else {
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x640);
      goto LAB_00296a58;
    }
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(undefined4 *)(param_1 + 0x644) = 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x640);
LAB_00296a58:
  *(undefined4 *)(param_1 + 0x650) = uVar2;
  FUN_001fb240(param_1 + 0x648);
  return;
}

// 0x00296a90  size 0x370
void FUN_00296a90(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c0 [25];
  undefined1 auStack_a7 [27];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [25];
  undefined1 auStack_47 [27];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(param_1 + 0x644);
  if (iVar4 == 2) {
    *(undefined4 *)(param_1 + 0x644) = 0;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
    *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
  }
  else if (iVar4 == 1) {
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
      cVar2 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448));
      if ((cVar2 == '\x06') ||
         (cVar2 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448)), cVar2 == '\a')) {
        *(undefined4 *)(param_1 + 0x640) = 0x25;
      }
      else {
        *(undefined4 *)(param_1 + 0x640) = 0x2c;
      }
      *(undefined4 *)(param_1 + 0x644) = 2;
      FUN_001fb290(5);
    }
    else if (uVar5 == 0x20) {
      *(undefined4 *)(param_1 + 0x640) = 4;
      *(undefined4 *)(param_1 + 0x644) = 2;
      FUN_001fb290(6);
    }
  }
  else {
    if (iVar4 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x640);
      goto LAB_00296bfc;
    }
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(undefined4 *)(param_1 + 0x644) = 1;
    if (*(int *)(param_1 + 0x648) == 0x25) {
      cVar2 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448));
      if ((cVar2 == '\x06') ||
         (cVar2 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448)), cVar2 == '\a')) goto LAB_00296bf8;
      uVar1 = *(undefined2 *)(param_1 + 0x24);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0x24);
    }
    FUN_001b6510(auStack_60,uVar1);
    puVar7 = auStack_60;
    puVar6 = (undefined1 *)(param_1 + 0x2c);
    iVar4 = 0x19;
    do {
      iVar4 = iVar4 + -1;
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (0 < iVar4);
    puVar7 = auStack_47;
    puVar6 = (undefined1 *)(param_1 + 0x45);
    iVar4 = 0x19;
    do {
      iVar4 = iVar4 + -1;
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (0 < iVar4);
    *(undefined4 *)(param_1 + 0x60) = uStack_2c;
    *(undefined4 *)(param_1 + 100) = uStack_28;
    *(undefined4 *)(param_1 + 0x68) = uStack_24;
    *(undefined4 *)(param_1 + 0x6c) = uStack_20;
    *(undefined4 *)(param_1 + 0x70) = uStack_1c;
    *(undefined4 *)(param_1 + 0x74) = uStack_18;
    *(undefined4 *)(param_1 + 0x78) = uStack_14;
    *(undefined4 *)(param_1 + 0x7c) = uStack_10;
    *(undefined4 *)(param_1 + 0x80) = uStack_c;
    *(undefined4 *)(param_1 + 0x84) = uStack_8;
    FUN_001b6100(auStack_c0,*(undefined2 *)(param_1 + 0x448));
    puVar7 = auStack_c0;
    puVar6 = (undefined1 *)(param_1 + 0x88);
    iVar4 = 0x19;
    do {
      iVar4 = iVar4 + -1;
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (0 < iVar4);
    puVar7 = auStack_a7;
    puVar6 = (undefined1 *)(param_1 + 0xa1);
    iVar4 = 0x19;
    do {
      iVar4 = iVar4 + -1;
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (0 < iVar4);
    *(undefined4 *)(param_1 + 0xbc) = uStack_8c;
    *(undefined4 *)(param_1 + 0xc0) = uStack_88;
    *(undefined4 *)(param_1 + 0xc4) = uStack_84;
    *(undefined4 *)(param_1 + 200) = uStack_80;
    *(undefined4 *)(param_1 + 0xcc) = uStack_7c;
    *(undefined4 *)(param_1 + 0xd0) = uStack_78;
    *(undefined4 *)(param_1 + 0xd4) = uStack_74;
    *(undefined4 *)(param_1 + 0xd8) = uStack_70;
    *(undefined4 *)(param_1 + 0xdc) = uStack_6c;
    *(undefined4 *)(param_1 + 0xe0) = uStack_68;
    FUN_001b8610(&uStack_f0,*(undefined1 *)(param_1 + 0x448));
    *(undefined4 *)(param_1 + 0x44c) = uStack_f0;
    *(undefined4 *)(param_1 + 0x450) = uStack_ec;
    *(undefined4 *)(param_1 + 0x454) = uStack_e8;
    *(undefined4 *)(param_1 + 0x458) = uStack_e4;
    *(undefined4 *)(param_1 + 0x45c) = uStack_e0;
    *(undefined4 *)(param_1 + 0x460) = uStack_dc;
    *(undefined4 *)(param_1 + 0x464) = uStack_d8;
    *(undefined4 *)(param_1 + 0x468) = uStack_d4;
    *(undefined4 *)(param_1 + 0x46c) = uStack_d0;
    *(undefined4 *)(param_1 + 0x470) = uStack_cc;
  }
LAB_00296bf8:
  uVar3 = *(undefined4 *)(param_1 + 0x640);
LAB_00296bfc:
  *(undefined4 *)(param_1 + 0x650) = uVar3;
  FUN_001fb240(param_1 + 0x648);
  return;
}

// 0x00296e10  size 0x1cc
void FUN_00296e10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [25];
  undefined1 auStack_47 [27];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x644);
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x644) = 0;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
    *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
  }
  else if (iVar2 == 1) {
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
    if ((uVar4 == 0x1000) || (uVar4 == 0x20)) {
      if (*(int *)(param_1 + 0xe4) == -1) {
        *(undefined4 *)(param_1 + 0x640) = 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x640) = 0xe;
      }
      *(undefined4 *)(param_1 + 0x644) = 2;
      FUN_001fb290(6);
    }
  }
  else {
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x640);
      goto LAB_00296fb4;
    }
    *(undefined4 *)(param_1 + 0x644) = 1;
    FUN_001b6510(auStack_60,*(undefined2 *)(param_1 + 0x28));
    puVar5 = auStack_60;
    puVar3 = (undefined1 *)(param_1 + 0x2c);
    iVar2 = 0x19;
    do {
      iVar2 = iVar2 + -1;
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (0 < iVar2);
    puVar5 = auStack_47;
    puVar3 = (undefined1 *)(param_1 + 0x45);
    iVar2 = 0x19;
    do {
      iVar2 = iVar2 + -1;
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (0 < iVar2);
    *(undefined4 *)(param_1 + 0x60) = uStack_2c;
    *(undefined4 *)(param_1 + 100) = uStack_28;
    *(undefined4 *)(param_1 + 0x68) = uStack_24;
    *(undefined4 *)(param_1 + 0x6c) = uStack_20;
    *(undefined4 *)(param_1 + 0x70) = uStack_1c;
    *(undefined4 *)(param_1 + 0x74) = uStack_18;
    *(undefined4 *)(param_1 + 0x78) = uStack_14;
    *(undefined4 *)(param_1 + 0x7c) = uStack_10;
    *(undefined4 *)(param_1 + 0x80) = uStack_c;
    *(undefined4 *)(param_1 + 0x84) = uStack_8;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x640);
LAB_00296fb4:
  *(undefined4 *)(param_1 + 0x650) = uVar1;
  FUN_001fb240(param_1 + 0x648);
  return;
}

// 0x00296fe0  size 0x138
void FUN_00296fe0(int param_1)

{
  uint uVar1;
  
  uVar1 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 0x10) {
    if (*(char *)(param_1 + 0x474) == '\x01') {
      *(undefined4 *)(param_1 + 0x640) = 0x2b;
    }
    else {
      *(undefined4 *)(param_1 + 0x640) = 0;
    }
    *(undefined4 *)(param_1 + 0x644) = 2;
    if (*(byte *)(param_1 + 0x474) - 3 < 2) {
      FUN_001fb290(0xc);
    }
    else {
      FUN_001fb290(5);
    }
  }
  else if (uVar1 == 0x20) {
    if (*(char *)(param_1 + 0x474) == '\x01') {
      FUN_001fb290(8);
    }
    else {
      *(undefined4 *)(param_1 + 0x640) = 0;
      *(undefined4 *)(param_1 + 0x644) = 2;
      if (*(byte *)(param_1 + 0x474) - 3 < 2) {
        FUN_001fb290(0xc);
      }
      else {
        FUN_001fb290(5);
      }
    }
  }
  return;
}

// 0x00297120  size 0x32c
void FUN_00297120(int param_1)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = piGpffff8d78[2];
  uVar2 = piGpffff8d78[4] & uVar7;
  if (uVar2 == 0) {
    uVar8 = 0x100000;
  }
  else {
    uVar8 = 0x80000;
    if ((uVar7 != 0x80000) && (uVar8 = uVar7, *piGpffff8d78 != 1)) {
      uVar8 = 0x100000;
    }
  }
  if (uVar8 != 0x80000) {
    if (uVar2 == 0) {
      uVar8 = 0x100000;
    }
    else {
      uVar8 = 0x80000;
      if ((uVar7 != 0x80000) && (uVar8 = uVar7, *piGpffff8d78 != 1)) {
        uVar8 = 0x100000;
      }
    }
    if (((uVar8 != 0x100000) && (*(int *)(param_1 + 0x64c) == 0x20)) &&
       (*(int *)(iGpffff8dec + 0xe8) != *(int *)(iGpffff8dec + 0xec))) {
      return;
    }
  }
  if (uVar2 == 0) {
    uVar7 = 0x100000;
  }
  else if (uVar7 == 0x80000) {
    uVar7 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar7 = 0x100000;
  }
  if (uVar7 == 0x10) {
    uVar5 = FUN_00176fa0();
    if ((uVar5 & 1) != 0) {
      bVar1 = *(byte *)(param_1 + 0x480);
      if (bVar1 - 1 < 2) {
        *(undefined4 *)(param_1 + 0x640) = 0x29;
        *(undefined4 *)(param_1 + 0x63c) = 0x29;
      }
      else if (bVar1 == 5) {
        *(undefined4 *)(param_1 + 0x640) = 0x2a;
        *(undefined4 *)(param_1 + 0x63c) = 0x2a;
      }
      else {
        if ((bVar1 == 3) && (*(int *)(param_1 + 0x484) != -1)) {
          uVar6 = FUN_001c1890(0);
          iVar4 = FUN_00177a50();
          sVar3 = FUN_001c0890(uVar6,*(undefined4 *)(iVar4 + 0x80));
          if (sVar3 < 2) {
            *(undefined4 *)(param_1 + 0x640) = 0x2e;
            *(undefined4 *)(param_1 + 0x63c) = 0x2e;
            goto LAB_002973ac;
          }
        }
        *(undefined4 *)(param_1 + 0x640) = 0;
      }
    }
LAB_002973ac:
    if (*(byte *)(param_1 + 0x480) - 3 < 2) {
      FUN_001fb290(0xc);
    }
    else {
      FUN_001fb290(5);
    }
    *(undefined4 *)(param_1 + 0x644) = 2;
    return;
  }
  if (uVar7 != 0x20) {
    return;
  }
  uVar5 = FUN_00176fa0();
  if ((uVar5 & 1) != 0) {
    bVar1 = *(byte *)(param_1 + 0x480);
    if (bVar1 - 1 < 2) {
      FUN_001fb290(8);
      return;
    }
    if (bVar1 == 5) {
      FUN_001fb290(8);
      return;
    }
    if ((bVar1 == 3) && (*(int *)(param_1 + 0x484) != -1)) {
      uVar6 = FUN_001c1890(0);
      iVar4 = FUN_00177a50();
      sVar3 = FUN_001c0890(uVar6,*(undefined4 *)(iVar4 + 0x80));
      if (sVar3 < 2) {
        *(undefined4 *)(param_1 + 0x640) = 0x2e;
        *(undefined4 *)(param_1 + 0x63c) = 0x2e;
        goto LAB_002972e8;
      }
    }
    *(undefined4 *)(param_1 + 0x640) = 0;
  }
LAB_002972e8:
  if (*(byte *)(param_1 + 0x480) - 3 < 2) {
    FUN_001fb290(0xc);
  }
  else {
    FUN_001fb290(5);
  }
  *(undefined4 *)(param_1 + 0x644) = 2;
  return;
}

// 0x00297450  size 0x18c
void FUN_00297450(int param_1)

{
  int iVar1;
  uint uVar2;
  
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
  if (uVar2 == 8) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
    FUN_001fb290(7);
    FUN_001f8ae0(iGpffff8d68 + 0x654,1);
  }
  else if (uVar2 == 4) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
    FUN_001fb290(7);
    FUN_001f8ae0(iGpffff8d68 + 0x654,1);
  }
  else if (uVar2 == 0x10) {
    *(undefined4 *)(param_1 + 0x640) = 0x24;
    *(undefined4 *)(param_1 + 0x644) = 2;
    *(undefined1 *)(param_1 + 0x474) = 1;
    *(undefined4 *)(param_1 + 0x478) =
         *(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + param_1 + 0x3e0);
    *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_1 + 0x62c);
    FUN_001fb290(5);
  }
  else {
    if (uVar2 != 0x20) {
      iVar1 = *(int *)(param_1 + 0x444);
      goto LAB_00297594;
    }
    *(undefined4 *)(param_1 + 0x640) = 0x27;
    *(undefined4 *)(param_1 + 0x644) = 2;
    FUN_001fb290(6);
  }
  iVar1 = *(int *)(param_1 + 0x444);
LAB_00297594:
  if (iVar1 + -1 < *(int *)(param_1 + 0x62c)) {
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  else if (*(int *)(param_1 + 0x62c) < 0) {
    *(int *)(param_1 + 0x62c) = iVar1 + -1;
  }
  return;
}

// 0x002975e0  size 0x1cc
void FUN_002975e0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 2) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
    if (*(int *)(param_1 + 0x3dc) + -1 < *(int *)(param_1 + 0x62c)) {
      FUN_001fb290(8);
      iVar2 = *(int *)(param_1 + 0x62c);
    }
    else {
      FUN_001fb290(7);
      iVar2 = *(int *)(param_1 + 0x62c);
    }
    if (10 < iVar2 - *(int *)(param_1 + 0x69c)) {
      *(int *)(param_1 + 0x69c) = *(int *)(param_1 + 0x69c) + 1;
      *(undefined4 *)(param_1 + 0x668) = 1;
    }
  }
  else if (uVar3 == 1) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
    if (*(int *)(param_1 + 0x62c) < 0) {
      FUN_001fb290(8);
    }
    else {
      FUN_001fb290(7);
    }
  }
  else if (uVar3 == 0x10) {
    *(undefined4 *)(param_1 + 0x640) = 0x23;
    *(undefined4 *)(param_1 + 0x644) = 2;
    *(undefined1 *)(param_1 + 0x474) = 0;
    *(int *)(param_1 + 0x478) = (int)*(short *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x118);
    FUN_001fb290(5);
  }
  else {
    if (uVar3 != 0x20) {
      iVar2 = *(int *)(param_1 + 0x3dc);
      goto LAB_00297748;
    }
    *(undefined4 *)(param_1 + 0x640) = 0x10;
    *(undefined4 *)(param_1 + 0x644) = 2;
    FUN_001fb290(6);
  }
  iVar2 = *(int *)(param_1 + 0x3dc);
LAB_00297748:
  iVar1 = *(int *)(param_1 + 0x62c);
  if (iVar2 + -1 < iVar1) {
    *(int *)(param_1 + 0x62c) = iVar1 + -1;
  }
  else if (iVar1 < 0) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
  }
  return;
}

// 0x002977b0  size 0xd4
void FUN_002977b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((long)*(int *)(param_1 + 0x478) != -1) {
    iVar2 = 0;
    iVar1 = param_1;
    do {
      if ((long)*(short *)(iVar1 + 0x118) == -1) break;
      if ((long)*(int *)(param_1 + 0x478) == (long)*(short *)(iVar1 + 0x118)) {
        *(int *)(param_1 + 0x62c) = iVar2;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 2;
    } while (iVar2 < 0x162);
  }
  FUN_0017e7c0(param_1 + 0x474);
  *(undefined4 *)(param_1 + 0x670) = 0;
  *(undefined4 *)(param_1 + 0x674) = 0xffffffff;
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if ((*(int *)(param_1 + 0x674) == -1) && (*(short *)(iVar1 + 0x118) != -1)) {
      *(int *)(param_1 + 0x674) = iVar2;
    }
    if (*(short *)(iVar1 + 0x118) != -1) {
      *(int *)(param_1 + 0x670) = *(int *)(param_1 + 0x670) + 1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 2;
  } while (iVar2 < 0x162);
  *(undefined4 *)(param_1 + 0x69c) = 0;
  *(undefined4 *)(param_1 + 0x678) = 0;
  *(undefined4 *)(param_1 + 0x66c) = 0;
  return;
}

// 0x00297890  size 0x288
void FUN_00297890(int param_1)

{
  uint uVar1;
  
  uVar1 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 2) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
    if ((*(int *)(param_1 + 0x62c) == 0) && ((*(uint *)(param_1 + 0x494) & 1) != 0)) {
      FUN_001fb290(8);
    }
    else if ((*(int *)(param_1 + 0x62c) == 1) && ((*(uint *)(param_1 + 0x494) & 10) != 0)) {
      FUN_001fb290(8);
    }
    else {
      FUN_001fb290(7);
    }
  }
  else if (uVar1 == 1) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
    if ((*(int *)(param_1 + 0x62c) == 0) && ((*(uint *)(param_1 + 0x494) & 1) != 0)) {
      FUN_001fb290(8);
    }
    else if ((*(int *)(param_1 + 0x62c) == 1) && ((*(uint *)(param_1 + 0x494) & 10) != 0)) {
      FUN_001fb290(8);
    }
    else {
      FUN_001fb290(7);
    }
  }
  else if (uVar1 == 0x10) {
    if (*(int *)(param_1 + 0x62c) == 0) {
      if (*(char *)(param_1 + 0x480) == '\0') {
        *(undefined4 *)(param_1 + 0x640) = 0x12;
      }
      else {
        *(undefined4 *)(param_1 + 0x640) = 0x13;
        *(undefined4 *)(param_1 + 0x688) = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x480) == '\0') {
        *(undefined4 *)(param_1 + 0x640) = 0x23;
      }
      else {
        *(undefined4 *)(param_1 + 0x640) = 0x24;
        *(undefined4 *)(param_1 + 0x688) = 1;
      }
      *(undefined1 *)(param_1 + 0x474) = 3;
      *(undefined4 *)(param_1 + 0x478) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x48c);
    }
    *(undefined4 *)(param_1 + 0x644) = 2;
    FUN_001fb290(5);
  }
  else {
    if (uVar1 != 0x20) {
      uVar1 = *(uint *)(param_1 + 0x494);
      goto LAB_00297a44;
    }
    *(undefined4 *)(param_1 + 0x640) = 4;
    *(undefined4 *)(param_1 + 0x644) = 2;
    FUN_001fb290(6);
  }
  uVar1 = *(uint *)(param_1 + 0x494);
LAB_00297a44:
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 10) == 0) {
      if (*(int *)(param_1 + 0x62c) < 2) {
        if (*(int *)(param_1 + 0x62c) < 0) {
          *(undefined4 *)(param_1 + 0x62c) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x62c) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x62c) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  return;
}

// 0x00297b20  size 0x80
void FUN_00297b20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x63c);
  if ((iVar1 == 6) || (iVar1 - 0x22U < 4)) {
    *(undefined4 *)(param_1 + 0x62c) = 1;
  }
  else if (iVar1 - 0x12U < 2) {
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  else if ((*(uint *)(param_1 + 0x494) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x494) & 10) != 0) {
      *(undefined4 *)(param_1 + 0x62c) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  return;
}

// 0x00297ba0  size 0x150
void FUN_00297ba0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x644);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x644) = 0;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
    *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
  }
  else if (iVar1 == 1) {
    uVar3 = piGpffff8d78[2];
    if ((piGpffff8d78[4] & uVar3) == 0) {
      uVar3 = 0x100000;
    }
    else if (uVar3 == 0x80000) {
      uVar3 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar3 = 0x100000;
    }
    if (uVar3 == 0x10) {
      if (*(byte *)(param_1 + 0x480) - 1 < 2) {
        *(undefined4 *)(param_1 + 0x640) = 0x27;
      }
      else {
        *(undefined4 *)(param_1 + 0x640) = 0x10;
      }
      *(undefined4 *)(param_1 + 0x644) = 2;
      FUN_001fb290(5);
    }
    else if (uVar3 == 0x20) {
      *(undefined4 *)(param_1 + 0x640) = 4;
      *(undefined4 *)(param_1 + 0x644) = 2;
      FUN_001fb290(6);
    }
  }
  else {
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x640);
      goto LAB_00297cc8;
    }
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(undefined4 *)(param_1 + 0x644) = 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x640);
LAB_00297cc8:
  *(undefined4 *)(param_1 + 0x650) = uVar2;
  FUN_001fb240(param_1 + 0x648);
  return;
}

// 0x00297d00  size 0x10c
undefined4 FUN_00297d00(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_a0 [20];
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_001b0ea0(auStack_a0,*(undefined4 *)(param_1 + 0xe4));
  puVar5 = auStack_a0;
  puVar4 = &uStack_50;
  iVar3 = 0x11;
  do {
    iVar3 = iVar3 + -1;
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (0 < iVar3);
  FUN_0017e7c0(param_1 + 0x480);
  *(undefined1 *)(param_1 + 0x480) = uStack_4c;
  *(undefined4 *)(param_1 + 0x484) = uStack_48;
  *(undefined4 *)(param_1 + 0x488) = uStack_44;
  switch(*(undefined1 *)(param_1 + 0x480)) {
  case 0:
  case 1:
  case 2:
    uVar1 = 0xc;
    break;
  case 3:
  case 4:
  case 7:
    *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x488);
    uVar2 = FUN_001c1890(0);
    iVar3 = FUN_001bcb00(uVar2);
    if (iVar3 < *(int *)(param_1 + 0x48c)) {
      uVar1 = 0xd;
      *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 1;
    }
    else {
      uVar1 = 0x22;
      *(undefined1 *)(param_1 + 0x474) = 3;
      *(undefined4 *)(param_1 + 0x478) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x48c);
    }
    break;
  default:
    uVar1 = 0x22;
    break;
  case 9:
    uVar1 = 0x22;
  }
  return uVar1;
}

// 0x00297e10  size 0x184
void FUN_00297e10(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar3 = 0x100000;
  }
  iVar4 = (int)param_1;
  if (uVar3 == 2) {
    *(int *)(iVar4 + 0x62c) = *(int *)(iVar4 + 0x62c) + 1;
    FUN_001fb290(7);
  }
  else if (uVar3 == 1) {
    *(int *)(iVar4 + 0x62c) = *(int *)(iVar4 + 0x62c) + -1;
    FUN_001fb290(7);
  }
  else if (uVar3 == 0x1000) {
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(*(int *)(iVar4 + 0x62c) * 4 + iVar4 + 0x5e4);
    *(undefined4 *)(iVar4 + 0x640) = 0x16;
    *(undefined4 *)(iVar4 + 0x644) = 2;
    FUN_001fb290(7);
  }
  else if (uVar3 == 0x10) {
    uVar1 = FUN_00297d00(param_1);
    *(undefined4 *)(iVar4 + 0x640) = uVar1;
    *(undefined4 *)(iVar4 + 0x644) = 2;
    FUN_001fb290(5);
  }
  else {
    if (uVar3 != 0x20) {
      iVar2 = *(int *)(iVar4 + 0x564);
      goto LAB_00297f4c;
    }
    *(undefined4 *)(iVar4 + 0x640) = 4;
    *(undefined4 *)(iVar4 + 0x644) = 2;
    FUN_001fb290(6);
  }
  iVar2 = *(int *)(iVar4 + 0x564);
LAB_00297f4c:
  if (iVar2 + -1 < *(int *)(iVar4 + 0x62c)) {
    *(undefined4 *)(iVar4 + 0x62c) = 0;
  }
  else if (*(int *)(iVar4 + 0x62c) < 0) {
    *(int *)(iVar4 + 0x62c) = iVar2 + -1;
  }
  return;
}

// 0x00297fa0  size 0x690
undefined4 FUN_00297fa0(int param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined2 uVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  uint uVar15;
  int iVar16;
  short sStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  short sStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  cVar2 = *(char *)(param_1 + 0x480);
  uVar4 = 0xffffffff;
  if (cVar2 == '\x02') {
    uVar4 = 0x26;
  }
  else if (cVar2 == '\x01') {
    uVar6 = FUN_001c1890(0);
    cVar2 = FUN_001b8eb0(uVar6);
    uVar6 = FUN_001c1890(0);
    iVar5 = FUN_001b89d0(uVar6);
    if (cVar2 - iVar5 < 1) {
      *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 0x10;
    }
    uVar6 = FUN_001c1890(0);
    lVar7 = FUN_001b89d0(uVar6);
    if (lVar7 < 2) {
      *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 8;
    }
    else {
      iVar5 = FUN_00205530(*(undefined4 *)(param_1 + 0x484));
      iVar16 = 0;
      bVar1 = *(int *)(iVar5 + 0x88) == 2;
      if (bVar1) {
        *(undefined4 *)(param_1 + 0x490) = 1;
      }
      lVar7 = 0;
      do {
        uVar6 = FUN_001c1890(0);
        sVar3 = FUN_001bc460(uVar6);
        iVar5 = (int)lVar7;
        if (lVar7 != sVar3) {
          uVar6 = FUN_001c1890(0);
          FUN_001bc3b0(&sStack_1a0,uVar6,lVar7);
          iVar9 = 0x17;
          puVar12 = auStack_18c;
          puVar10 = auStack_bc;
          sStack_d0 = sStack_1a0;
          uStack_c0 = uStack_190;
          uStack_ce = uStack_19e;
          uStack_cc = uStack_19c;
          uStack_c8 = uStack_198;
          uStack_c4 = uStack_194;
          do {
            iVar9 = iVar9 + -1;
            *puVar10 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar10 = puVar10 + 1;
          } while (0 < iVar9);
          iVar9 = 8;
          puVar14 = auStack_150;
          puVar13 = auStack_80;
          uStack_98 = uStack_168;
          uStack_94 = uStack_164;
          uStack_90 = uStack_160;
          uStack_a4 = uStack_174;
          uStack_a0 = uStack_170;
          uStack_9c = uStack_16c;
          uStack_8c = uStack_15c;
          uStack_88 = uStack_158;
          uStack_84 = uStack_154;
          do {
            iVar9 = iVar9 + -1;
            uVar11 = puVar14[1];
            *puVar13 = *puVar14;
            puVar13[1] = uVar11;
            puVar14 = puVar14 + 2;
            puVar13 = puVar13 + 2;
          } while (0 < iVar9);
          iVar9 = 0x15;
          puVar14 = auStack_130;
          puVar13 = auStack_60;
          do {
            iVar9 = iVar9 + -1;
            uVar11 = puVar14[1];
            *puVar13 = *puVar14;
            puVar13[1] = uVar11;
            puVar14 = puVar14 + 2;
            puVar13 = puVar13 + 2;
          } while (0 < iVar9);
          uStack_c = uStack_dc;
          uStack_8 = uStack_d8;
          if (sStack_1a0 != -1) {
            if (bVar1) {
              iVar9 = FUN_00205530();
              if (*(int *)(iVar9 + 0x88) == 2) {
                iVar9 = iVar16 * 4;
                iVar16 = iVar16 + 1;
                *(int *)(param_1 + iVar9 + 0x3e0) = iVar5;
              }
            }
            else {
              iVar9 = iVar16 * 4;
              iVar16 = iVar16 + 1;
              *(int *)(param_1 + iVar9 + 0x3e0) = iVar5;
            }
          }
        }
        lVar7 = (long)(iVar5 + 1);
      } while (lVar7 < 0x19);
      if (iVar16 == 0) {
        *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 8;
      }
      *(int *)(param_1 + 0x444) = iVar16;
    }
    iVar5 = FUN_00205530(*(undefined4 *)(param_1 + 0x484));
    uVar15 = (uint)(*(int *)(iVar5 + 0x84) * 0x8c) / 100000;
    *(uint *)(param_1 + 0x48c) = uVar15;
    uVar6 = FUN_001c1890(0);
    iVar5 = FUN_001bcb00(uVar6);
    if (iVar5 < (int)uVar15) {
      *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 1;
    }
    uVar15 = *(uint *)(param_1 + 0x494);
    if ((uVar15 & 0x10) == 0) {
      if (((uVar15 & 8) == 0) || ((uVar15 & 1) == 0)) {
        uVar4 = 0x26;
      }
      else {
        uVar4 = 0xd;
      }
    }
    else {
      uVar4 = 0xd;
    }
  }
  else if (cVar2 == '\0') {
    uVar6 = FUN_001c1890(0);
    sVar3 = FUN_001bc220(uVar6,*(undefined2 *)(param_1 + 0x484));
    if (0x62 < sVar3) {
      *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 4;
    }
    lVar7 = FUN_001d3540(*(undefined2 *)(param_1 + 0x484));
    iVar9 = 0;
    *(int *)(param_1 + 0x490) = (int)lVar7;
    iVar16 = 0;
    iVar5 = param_1;
    do {
      uVar6 = FUN_001c1890(0);
      uVar11 = (undefined2)iVar16;
      sVar3 = FUN_001bc220(uVar6,uVar11);
      if ((((((0 < sVar3) && (lVar8 = FUN_001d3540(uVar11), lVar7 <= lVar8)) &&
            (sVar3 = FUN_001d3970(uVar11), sVar3 != 0xad)) &&
           ((sVar3 = FUN_001d3970(uVar11), sVar3 != 0xaa &&
            (sVar3 = FUN_001d3970(uVar11), sVar3 != 0xa9)))) &&
          ((sVar3 = FUN_001d3970(uVar11), sVar3 != 0xa4 &&
           ((sVar3 = FUN_001d3970(uVar11), sVar3 != 0xa2 &&
            (sVar3 = FUN_001d3970(uVar11), sVar3 != 0x89)))))) &&
         ((sVar3 = FUN_001d3970(uVar11), sVar3 != 0x8d &&
          (((sVar3 = FUN_001d3970(uVar11), sVar3 != 0x93 &&
            (sVar3 = FUN_001d3970(uVar11), sVar3 != 0x98)) &&
           (sVar3 = FUN_001d3970(uVar11), sVar3 != 0x9d)))))) {
        *(undefined2 *)(iVar5 + 0x118) = uVar11;
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + 2;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 0x162);
    if (iVar9 == 0) {
      *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 2;
    }
    *(int *)(param_1 + 0x3dc) = iVar9;
    iVar5 = FUN_001ba290(*(undefined2 *)(param_1 + 0x484),0);
    iVar5 = (iVar5 * 100) / 100;
    *(int *)(param_1 + 0x48c) = iVar5;
    uVar6 = FUN_001c1890(0);
    iVar16 = FUN_001bcb00(uVar6);
    if (iVar16 < iVar5) {
      *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 1;
    }
    uVar15 = *(uint *)(param_1 + 0x494);
    if ((uVar15 & 4) == 0) {
      if (((uVar15 & 2) == 0) || ((uVar15 & 1) == 0)) {
        uVar4 = 0x10;
      }
      else {
        uVar4 = 0xd;
      }
    }
    else {
      uVar4 = 0xd;
    }
  }
  return uVar4;
}

