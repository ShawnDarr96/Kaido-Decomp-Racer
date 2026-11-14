// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00204000 - 0x00208000
#include "ghidra_types.h"

// 0x00204020  size 0x2f0
undefined8
CarPreview_SetupWheels
          (undefined4 *param_1,long param_2,long param_3,undefined8 param_4,long param_5,int param_6
          ,undefined8 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_3;
  if (param_2 == 0) {
    if (param_5 == 0) {
      iVar3 = *(int *)(iRam0036f494 + 0x34) +
              *(int *)(*(int *)(iRam0036f494 + 0x5c) + iVar3 * 8) * 0x6e4;
    }
    else if (param_5 == 1) {
      iVar3 = *(int *)(iRam0036f494 + 0x34) +
              *(int *)(*(int *)(iRam0036f494 + 0x5c) + iVar3 * 8) * 0x6e4 + param_6 * 0x54 + 0x54;
    }
    else {
      iVar3 = *(int *)(iRam0036f494 + 0x34) +
              *(int *)(*(int *)(iRam0036f494 + 0x5c) + iVar3 * 8) * 0x6e4 +
              ((int)param_5 + -1) * 0x1a4 + param_6 * 0x54 + 0x54;
    }
  }
  else if (param_5 == 0) {
    iVar3 = *(int *)(iRam0036f494 + 0x38) +
            *(int *)(*(int *)(iRam0036f494 + 0x5c) + iVar3 * 8) * 0x6e4;
  }
  else if (param_5 == 1) {
    iVar3 = *(int *)(iRam0036f494 + 0x38) +
            *(int *)(*(int *)(iRam0036f494 + 0x5c) + iVar3 * 8) * 0x6e4 + param_6 * 0x54 + 0x54;
  }
  else {
    iVar3 = *(int *)(iRam0036f494 + 0x38) +
            *(int *)(*(int *)(iRam0036f494 + 0x5c) + iVar3 * 8) * 0x6e4 +
            ((int)param_5 + -1) * 0x1a4 + param_6 * 0x54 + 0x54;
  }
  WheelAsset_Clear(param_1);
  iVar2 = 0;
  *param_1 = *(undefined4 *)(iVar3 + 0x48);
  param_1[1] = *(undefined4 *)(iVar3 + 0x28);
  param_1[2] = *(undefined4 *)(iVar3 + 0x50);
  param_1[3] = *(undefined4 *)(iVar3 + 0x4c);
  puVar1 = param_1;
  do {
    CarPreview_ApplyPaint(puVar1 + 4,0,param_4,param_7,iVar2);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 2);
  if ((param_3 == 0xec) && (param_2 == 1)) {
    *(undefined1 *)((int)param_1 + 0x13) = 0x62;
    *(undefined1 *)(param_1 + 5) = 0x62;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  return param_4;
}

// 0x00204310  size 0x2a0
void CarPreview_SetupWheelsAlt
               (undefined4 *param_1,long param_2,int param_3,undefined8 param_4,long param_5,
               int param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (param_5 == 0) {
      iVar2 = *(int *)(iRam0036f494 + 0x34) +
              *(int *)(*(int *)(iRam0036f494 + 0x5c) + param_3 * 8) * 0x6e4;
    }
    else if (param_5 == 1) {
      iVar2 = *(int *)(iRam0036f494 + 0x34) +
              *(int *)(*(int *)(iRam0036f494 + 0x5c) + param_3 * 8) * 0x6e4 + param_6 * 0x54 + 0x54;
    }
    else {
      iVar2 = *(int *)(iRam0036f494 + 0x34) +
              *(int *)(*(int *)(iRam0036f494 + 0x5c) + param_3 * 8) * 0x6e4 +
              ((int)param_5 + -1) * 0x1a4 + param_6 * 0x54 + 0x54;
    }
  }
  else if (param_5 == 0) {
    iVar2 = *(int *)(iRam0036f494 + 0x38) +
            *(int *)(*(int *)(iRam0036f494 + 0x5c) + param_3 * 8) * 0x6e4;
  }
  else if (param_5 == 1) {
    iVar2 = *(int *)(iRam0036f494 + 0x38) +
            *(int *)(*(int *)(iRam0036f494 + 0x5c) + param_3 * 8) * 0x6e4 + param_6 * 0x54 + 0x54;
  }
  else {
    iVar2 = *(int *)(iRam0036f494 + 0x38) +
            *(int *)(*(int *)(iRam0036f494 + 0x5c) + param_3 * 8) * 0x6e4 +
            ((int)param_5 + -1) * 0x1a4 + param_6 * 0x54 + 0x54;
  }
  WheelAsset_ClearParams(param_1);
  iVar1 = 0;
  *param_1 = *(undefined4 *)(iVar2 + 0x48);
  param_1[1] = *(undefined4 *)(iVar2 + 0x28);
  param_1[2] = *(undefined4 *)(iVar2 + 0x50);
  param_1[3] = *(undefined4 *)(iVar2 + 0x4c);
  do {
    CarPreview_ApplyPaint(0,param_1 + 4,param_4,param_7,iVar1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 2;
  } while (iVar1 < 2);
  return;
}

// 0x002045b0  size 0x8
undefined4 menu_sub_002045b0(void)

{
  return 0x2a0;
}

// 0x002045c0  size 0x68
void CarPreview_GetPaletteColor(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  iVar1 = (param_2 + param_3 * 0x10 + 0x2a0) * 3;
  puVar3 = (undefined1 *)(*(int *)(iRam0036f494 + 0x44) + iVar1);
  puVar2 = (undefined1 *)(*(int *)(iRam0036f494 + 0x48) + iVar1);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = *puVar2;
  param_1[4] = puVar2[1];
  param_1[5] = puVar2[2];
  param_1[6] = 0xff;
  param_1[7] = 0xff;
  return;
}

// 0x00204630  size 0x8
undefined4 menu_sub_00204630(void)

{
  return 0x2a0;
}

// 0x00204640  size 0x64
void CarPreview_GetColor(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  iVar1 = (param_2 + param_3 * 0x10) * 3;
  puVar3 = (undefined1 *)(*(int *)(iRam0036f494 + 0x44) + iVar1);
  puVar2 = (undefined1 *)(*(int *)(iRam0036f494 + 0x48) + iVar1);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = *puVar2;
  param_1[4] = puVar2[1];
  param_1[5] = puVar2[2];
  param_1[6] = 0xff;
  param_1[7] = 0xff;
  return;
}

// 0x002046b0  size 0x12c
undefined4 CarPreview_ApplyPaint(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  
  puVar7 = (undefined1 *)param_2;
  if (param_3 < 0x120) {
    iVar8 = *(int *)(*(int *)(iRam0036f494 + 0x5c) + (int)param_3 * 8);
  }
  else {
    iVar8 = (int)param_3 - (0x120 - *(int *)(iRam0036f494 + 0x24));
  }
  iVar4 = *(int *)(iRam0036f494 + 0x58) + iVar8 * 0xb4;
  iVar8 = iVar4 + param_4 * 0x18;
  piVar5 = (int *)(iVar8 + param_5 * 4);
  uVar1 = *(undefined1 *)(iVar8 + 0x14);
  uVar2 = *(undefined1 *)(iVar8 + 8);
  iVar8 = *piVar5 * 3;
  puVar11 = (undefined1 *)(*(int *)(iRam0036f494 + 0x44) + iVar8);
  iVar3 = piVar5[3] * 3;
  puVar9 = (undefined1 *)(*(int *)(iRam0036f494 + 0x48) + iVar8);
  puVar12 = (undefined1 *)(*(int *)(iRam0036f494 + 0x44) + iVar3);
  puVar10 = (undefined1 *)(*(int *)(iRam0036f494 + 0x48) + iVar3);
  if (param_1 != 0) {
    puVar6 = (undefined1 *)param_1;
    *puVar6 = *puVar11;
    puVar6[1] = puVar11[1];
    puVar6[2] = puVar11[2];
    puVar6[3] = *puVar9;
    puVar6[4] = puVar9[1];
    puVar6[5] = puVar9[2];
    puVar6[6] = uVar2;
    puVar6[7] = 0xff;
  }
  if (param_2 != 0) {
    *puVar7 = *puVar12;
    puVar7[1] = puVar12[1];
    puVar7[2] = puVar12[2];
    puVar7[3] = *puVar10;
    puVar7[4] = puVar10[1];
    puVar7[5] = puVar10[2];
    puVar7[6] = uVar1;
    puVar7[7] = 0xff;
  }
  return *(undefined4 *)(iVar4 + 0xac);
}

// 0x002047e0  size 0x2c4
bool CarPreview_ApplyDecal(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  if (param_4 == 4) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[7] = 0xff;
    param_1[6] = 0xff;
  }
  else if (param_4 == 5) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0xff;
    param_1[7] = 0x1e;
  }
  else if (param_3 == -1) {
    *param_1 = 0;
    param_1[1] = 0x18;
    param_1[2] = 0xe;
    param_1[3] = 0x18;
    param_1[4] = 0;
    param_1[5] = 10;
    param_1[6] = 0xff;
    param_1[7] = 0xff;
  }
  else if ((param_3 < 0) || (0x1d < param_3)) {
    if ((param_3 < 0x1e) || (0x2bd < param_3)) {
      if ((0x2bd < param_3) && (param_3 < 0x55e)) {
        iVar1 = param_3 + -0x2be;
        if (iVar1 < 0) {
          iVar1 = param_3 + -0x2af;
        }
        uVar4 = param_3 - 0x2beU & 0xf;
        if (((int)(param_3 - 0x2beU) < 0) && (uVar4 != 0)) {
          uVar4 = uVar4 - 0x10;
        }
        iVar1 = (uVar4 + (iVar1 >> 4) * 0x10 + 0x2a0) * 3;
        puVar3 = (undefined1 *)(*(int *)(iRam0036f494 + 0x44) + iVar1);
        puVar2 = (undefined1 *)(*(int *)(iRam0036f494 + 0x48) + iVar1);
        *param_1 = *puVar3;
        param_1[1] = puVar3[1];
        param_1[2] = puVar3[2];
        param_1[3] = *puVar2;
        param_1[4] = puVar2[1];
        param_1[5] = puVar2[2];
        param_1[6] = 0xff;
        param_1[7] = 0xff;
      }
    }
    else {
      uVar4 = param_3 - 0x1eU & 0xf;
      if (((int)(param_3 - 0x1eU) < 0) && (uVar4 != 0)) {
        uVar4 = uVar4 - 0x10;
      }
      iVar1 = param_3 + -0x1e;
      if (iVar1 < 0) {
        iVar1 = param_3 + -0xf;
      }
      iVar1 = (uVar4 + (iVar1 >> 4) * 0x10) * 3;
      puVar3 = (undefined1 *)(*(int *)(iRam0036f494 + 0x44) + iVar1);
      puVar2 = (undefined1 *)(*(int *)(iRam0036f494 + 0x48) + iVar1);
      *param_1 = *puVar3;
      param_1[1] = puVar3[1];
      param_1[2] = puVar3[2];
      param_1[3] = *puVar2;
      param_1[4] = puVar2[1];
      param_1[5] = puVar2[2];
      param_1[6] = 0xff;
      param_1[7] = 0xff;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(iRam0036f494 + 0x54) +
                     *(int *)(*(int *)(iRam0036f494 + 0x5c) + param_2 * 8) * 0xc4 + param_3 * 0x10 +
                    param_4 * 4) * 3;
    puVar3 = (undefined1 *)(*(int *)(iRam0036f494 + 0x44) + iVar1);
    puVar2 = (undefined1 *)(*(int *)(iRam0036f494 + 0x48) + iVar1);
    *param_1 = *puVar3;
    param_1[1] = puVar3[1];
    param_1[2] = puVar3[2];
    param_1[3] = *puVar2;
    param_1[4] = puVar2[1];
    param_1[5] = puVar2[2];
    param_1[6] = 0xff;
    param_1[7] = 0xff;
  }
  return param_3 == -1;
}

// 0x00204ab0  size 0x9c
void CarDb_GetPartEntry(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  iVar1 = *(int *)(*(int *)(iGpffff8da4 + 0x54) +
                   *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2 * 8) * 0xc4 + param_3 * 0x10 +
                  param_4 * 4) * 3;
  puVar3 = (undefined1 *)(*(int *)(iGpffff8da4 + 0x44) + iVar1);
  puVar2 = (undefined1 *)(*(int *)(iGpffff8da4 + 0x48) + iVar1);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = *puVar2;
  param_1[4] = puVar2[1];
  param_1[5] = puVar2[2];
  param_1[6] = 0xff;
  param_1[7] = 0xff;
  return;
}

// 0x00204b50  size 0x38
/* 10 callers */

undefined4 CarDb_GetModelEntry(int param_1)

{
  return *(undefined4 *)
          (*(int *)(iGpffff8da4 + 0x54) +
           *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_1 * 8) * 0xc4 + 0xc0);
}

// 0x00204b90  size 0x998
void CarDb_BuildSpec(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6
                    ,int param_7)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  param_2 = param_2 * 8;
  iVar4 = 0xc;
  puVar2 = (undefined1 *)
           (*(int *)(iGpffff8da4 + 0x40) + *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2) * 0x98);
  puVar8 = puVar2;
  puVar5 = param_1;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = puVar8[1];
    *puVar5 = *puVar8;
    puVar8 = puVar8 + 2;
    puVar5[1] = uVar1;
    puVar5 = puVar5 + 2;
  } while (0 < iVar4);
  puVar5 = puVar2 + 0x18;
  puVar8 = param_1 + 0x18;
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = puVar5[1];
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar8[1] = uVar1;
    puVar8 = puVar8 + 2;
  } while (0 < iVar4);
  puVar9 = (undefined4 *)(puVar2 + 0x44);
  puVar6 = (undefined4 *)(param_1 + 0x44);
  iVar4 = 8;
  param_1[0x28] = puVar2[0x28];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(puVar2 + 0x2c);
  uVar10 = *(undefined4 *)(puVar2 + 0x34);
  uVar11 = *(undefined4 *)(puVar2 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)(param_1 + 0x38) = uVar11;
  param_1[0x3c] = puVar2[0x3c];
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar2 + 0x40);
  do {
    iVar4 = iVar4 + -1;
    uVar10 = puVar9[1];
    *puVar6 = *puVar9;
    puVar9 = puVar9 + 2;
    puVar6[1] = uVar10;
    puVar6 = puVar6 + 2;
  } while (0 < iVar4);
  puVar9 = (undefined4 *)(param_1 + 0x14c);
  iVar4 = 8;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(puVar2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(puVar2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(puVar2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(puVar2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(puVar2 + 0x94);
  puVar6 = (undefined4 *)
           (*(int *)(iGpffff8da4 + 0x2c) + *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2) * 0x270)
  ;
  puVar7 = puVar6 + 0x2b;
  *(undefined4 *)(param_1 + 0xa0) = *puVar6;
  *(undefined4 *)(param_1 + 0xa4) = puVar6[1];
  *(undefined4 *)(param_1 + 0xa8) = puVar6[2];
  *(undefined4 *)(param_1 + 0xac) = puVar6[3];
  *(undefined4 *)(param_1 + 0xb0) = puVar6[4];
  uVar10 = puVar6[9];
  uVar11 = puVar6[10];
  uVar3 = puVar6[0xb];
  *(undefined4 *)(param_1 + 0xc0) = puVar6[8];
  *(undefined4 *)(param_1 + 0xc4) = uVar10;
  *(undefined4 *)(param_1 + 200) = uVar11;
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  uVar10 = puVar6[0xd];
  uVar11 = puVar6[0xe];
  uVar3 = puVar6[0xf];
  *(undefined4 *)(param_1 + 0xd0) = puVar6[0xc];
  *(undefined4 *)(param_1 + 0xd4) = uVar10;
  *(undefined4 *)(param_1 + 0xd8) = uVar11;
  *(undefined4 *)(param_1 + 0xdc) = uVar3;
  uVar10 = puVar6[0x11];
  uVar11 = puVar6[0x12];
  uVar3 = puVar6[0x13];
  *(undefined4 *)(param_1 + 0xe0) = puVar6[0x10];
  *(undefined4 *)(param_1 + 0xe4) = uVar10;
  *(undefined4 *)(param_1 + 0xe8) = uVar11;
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  *(undefined4 *)(param_1 + 0xf0) = puVar6[0x14];
  *(undefined4 *)(param_1 + 0xf4) = puVar6[0x15];
  *(undefined4 *)(param_1 + 0xf8) = puVar6[0x16];
  *(undefined4 *)(param_1 + 0xfc) = puVar6[0x17];
  *(undefined4 *)(param_1 + 0x100) = puVar6[0x18];
  uVar10 = puVar6[0x1d];
  uVar11 = puVar6[0x1e];
  uVar3 = puVar6[0x1f];
  *(undefined4 *)(param_1 + 0x110) = puVar6[0x1c];
  *(undefined4 *)(param_1 + 0x114) = uVar10;
  *(undefined4 *)(param_1 + 0x118) = uVar11;
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
  uVar10 = puVar6[0x21];
  uVar11 = puVar6[0x22];
  uVar3 = puVar6[0x23];
  *(undefined4 *)(param_1 + 0x120) = puVar6[0x20];
  *(undefined4 *)(param_1 + 0x124) = uVar10;
  *(undefined4 *)(param_1 + 0x128) = uVar11;
  *(undefined4 *)(param_1 + 300) = uVar3;
  *(undefined4 *)(param_1 + 0x130) = puVar6[0x24];
  *(undefined4 *)(param_1 + 0x134) = puVar6[0x25];
  *(undefined4 *)(param_1 + 0x138) = puVar6[0x26];
  *(undefined4 *)(param_1 + 0x13c) = puVar6[0x27];
  *(undefined4 *)(param_1 + 0x140) = puVar6[0x28];
  *(undefined4 *)(param_1 + 0x144) = puVar6[0x29];
  *(undefined4 *)(param_1 + 0x148) = puVar6[0x2a];
  do {
    iVar4 = iVar4 + -1;
    uVar10 = puVar7[1];
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 2;
    puVar9[1] = uVar10;
    puVar9 = puVar9 + 2;
  } while (0 < iVar4);
  puVar7 = puVar6 + 0x3b;
  puVar9 = (undefined4 *)(param_1 + 0x18c);
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    uVar10 = puVar7[1];
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 2;
    puVar9[1] = uVar10;
    puVar9 = puVar9 + 2;
  } while (0 < iVar4);
  puVar9 = (undefined4 *)(param_1 + 0x324);
  iVar4 = 0x10;
  *(undefined4 *)(param_1 + 0x1cc) = puVar6[0x4b];
  *(undefined4 *)(param_1 + 0x1d0) = puVar6[0x4c];
  *(undefined4 *)(param_1 + 0x1d4) = puVar6[0x4d];
  *(undefined4 *)(param_1 + 0x1d8) = puVar6[0x4e];
  *(undefined4 *)(param_1 + 0x1dc) = puVar6[0x4f];
  *(undefined4 *)(param_1 + 0x1e0) = puVar6[0x50];
  *(undefined4 *)(param_1 + 0x1e4) = puVar6[0x51];
  *(undefined4 *)(param_1 + 0x1e8) = puVar6[0x52];
  *(undefined4 *)(param_1 + 0x1ec) = puVar6[0x53];
  *(undefined4 *)(param_1 + 0x1f0) = puVar6[0x54];
  *(undefined4 *)(param_1 + 500) = puVar6[0x55];
  *(undefined4 *)(param_1 + 0x1f8) = puVar6[0x56];
  *(undefined4 *)(param_1 + 0x1fc) = puVar6[0x57];
  *(undefined4 *)(param_1 + 0x200) = puVar6[0x58];
  *(undefined4 *)(param_1 + 0x204) = puVar6[0x59];
  *(undefined4 *)(param_1 + 0x208) = puVar6[0x5a];
  *(undefined4 *)(param_1 + 0x20c) = puVar6[0x5b];
  *(undefined4 *)(param_1 + 0x210) = puVar6[0x5c];
  *(undefined4 *)(param_1 + 0x214) = puVar6[0x5d];
  *(undefined4 *)(param_1 + 0x218) = puVar6[0x5e];
  *(undefined4 *)(param_1 + 0x21c) = puVar6[0x5f];
  *(undefined4 *)(param_1 + 0x220) = puVar6[0x60];
  *(undefined4 *)(param_1 + 0x224) = puVar6[0x61];
  *(undefined4 *)(param_1 + 0x228) = puVar6[0x62];
  uVar3 = puVar6[100];
  uVar10 = puVar6[0x65];
  uVar11 = puVar6[0x66];
  *(undefined4 *)(param_1 + 0x22c) = puVar6[99];
  *(undefined4 *)(param_1 + 0x230) = uVar3;
  *(undefined4 *)(param_1 + 0x234) = uVar10;
  *(undefined4 *)(param_1 + 0x238) = uVar11;
  uVar3 = puVar6[0x68];
  uVar10 = puVar6[0x69];
  uVar11 = puVar6[0x6a];
  *(undefined4 *)(param_1 + 0x23c) = puVar6[0x67];
  *(undefined4 *)(param_1 + 0x240) = uVar3;
  *(undefined4 *)(param_1 + 0x244) = uVar10;
  *(undefined4 *)(param_1 + 0x248) = uVar11;
  *(undefined4 *)(param_1 + 0x24c) = puVar6[0x6b];
  uVar3 = puVar6[0x6d];
  uVar10 = puVar6[0x6e];
  uVar11 = puVar6[0x6f];
  *(undefined4 *)(param_1 + 0x250) = puVar6[0x6c];
  *(undefined4 *)(param_1 + 0x254) = uVar3;
  *(undefined4 *)(param_1 + 600) = uVar10;
  *(undefined4 *)(param_1 + 0x25c) = uVar11;
  uVar3 = puVar6[0x71];
  uVar10 = puVar6[0x72];
  uVar11 = puVar6[0x73];
  *(undefined4 *)(param_1 + 0x260) = puVar6[0x70];
  *(undefined4 *)(param_1 + 0x264) = uVar3;
  *(undefined4 *)(param_1 + 0x268) = uVar10;
  *(undefined4 *)(param_1 + 0x26c) = uVar11;
  *(undefined4 *)(param_1 + 0x270) = puVar6[0x74];
  uVar3 = puVar6[0x76];
  uVar10 = puVar6[0x77];
  uVar11 = puVar6[0x78];
  *(undefined4 *)(param_1 + 0x274) = puVar6[0x75];
  *(undefined4 *)(param_1 + 0x278) = uVar3;
  *(undefined4 *)(param_1 + 0x27c) = uVar10;
  *(undefined4 *)(param_1 + 0x280) = uVar11;
  uVar3 = puVar6[0x7a];
  uVar10 = puVar6[0x7b];
  uVar11 = puVar6[0x7c];
  *(undefined4 *)(param_1 + 0x284) = puVar6[0x79];
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  *(undefined4 *)(param_1 + 0x28c) = uVar10;
  *(undefined4 *)(param_1 + 0x290) = uVar11;
  *(undefined4 *)(param_1 + 0x294) = puVar6[0x7d];
  uVar3 = puVar6[0x7f];
  uVar10 = puVar6[0x80];
  uVar11 = puVar6[0x81];
  *(undefined4 *)(param_1 + 0x298) = puVar6[0x7e];
  *(undefined4 *)(param_1 + 0x29c) = uVar3;
  *(undefined4 *)(param_1 + 0x2a0) = uVar10;
  *(undefined4 *)(param_1 + 0x2a4) = uVar11;
  uVar3 = puVar6[0x83];
  uVar10 = puVar6[0x84];
  uVar11 = puVar6[0x85];
  *(undefined4 *)(param_1 + 0x2a8) = puVar6[0x82];
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  *(undefined4 *)(param_1 + 0x2b0) = uVar10;
  *(undefined4 *)(param_1 + 0x2b4) = uVar11;
  *(undefined4 *)(param_1 + 0x2b8) = puVar6[0x86];
  uVar3 = puVar6[0x88];
  uVar10 = puVar6[0x89];
  uVar11 = puVar6[0x8a];
  *(undefined4 *)(param_1 + 700) = puVar6[0x87];
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  *(undefined4 *)(param_1 + 0x2c4) = uVar10;
  *(undefined4 *)(param_1 + 0x2c8) = uVar11;
  uVar3 = puVar6[0x8c];
  uVar10 = puVar6[0x8d];
  uVar11 = puVar6[0x8e];
  *(undefined4 *)(param_1 + 0x2cc) = puVar6[0x8b];
  *(undefined4 *)(param_1 + 0x2d0) = uVar3;
  *(undefined4 *)(param_1 + 0x2d4) = uVar10;
  *(undefined4 *)(param_1 + 0x2d8) = uVar11;
  *(undefined4 *)(param_1 + 0x2dc) = puVar6[0x8f];
  *(undefined4 *)(param_1 + 0x2e0) = puVar6[0x90];
  *(undefined4 *)(param_1 + 0x2e4) = puVar6[0x91];
  *(undefined4 *)(param_1 + 0x2e8) = puVar6[0x92];
  *(undefined4 *)(param_1 + 0x2ec) = puVar6[0x93];
  *(undefined4 *)(param_1 + 0x2f0) = puVar6[0x94];
  *(undefined4 *)(param_1 + 0x2f4) = puVar6[0x95];
  *(undefined4 *)(param_1 + 0x2f8) = puVar6[0x96];
  *(undefined4 *)(param_1 + 0x2fc) = puVar6[0x97];
  *(undefined4 *)(param_1 + 0x300) = puVar6[0x98];
  *(undefined4 *)(param_1 + 0x304) = puVar6[0x99];
  *(undefined4 *)(param_1 + 0x308) = puVar6[0x9a];
  *(undefined4 *)(param_1 + 0x30c) = puVar6[0x9b];
  puVar7 = (undefined4 *)
           (*(int *)(iGpffff8da4 + 0x3c) + *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2) * 0x6e4
           + param_3 * 0xc4);
  puVar6 = puVar7 + 5;
  *(undefined4 *)(param_1 + 0x310) = *puVar7;
  *(undefined4 *)(param_1 + 0x314) = puVar7[1];
  *(undefined4 *)(param_1 + 0x318) = puVar7[2];
  *(undefined4 *)(param_1 + 0x31c) = puVar7[3];
  *(undefined4 *)(param_1 + 800) = puVar7[4];
  do {
    iVar4 = iVar4 + -1;
    uVar10 = puVar6[1];
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 2;
    puVar9[1] = uVar10;
    puVar9 = puVar9 + 2;
  } while (0 < iVar4);
  *(undefined4 *)(param_1 + 0x3a4) = puVar7[0x25];
  *(undefined4 *)(param_1 + 0x3a8) = puVar7[0x26];
  *(undefined4 *)(param_1 + 0x3ac) = puVar7[0x27];
  *(undefined4 *)(param_1 + 0x3b0) = puVar7[0x28];
  *(undefined4 *)(param_1 + 0x3b4) = puVar7[0x29];
  *(undefined4 *)(param_1 + 0x3b8) = puVar7[0x2a];
  *(undefined4 *)(param_1 + 0x3bc) = puVar7[0x2b];
  *(undefined4 *)(param_1 + 0x3c0) = puVar7[0x2c];
  *(undefined4 *)(param_1 + 0x3c4) = puVar7[0x2d];
  *(undefined4 *)(param_1 + 0x3c8) = puVar7[0x2e];
  *(undefined4 *)(param_1 + 0x3cc) = puVar7[0x2f];
  param_1[0x3d0] = *(undefined1 *)(puVar7 + 0x30);
  param_1[0x3d1] = *(undefined1 *)((int)puVar7 + 0xc1);
  if (param_5 != 0) {
    param_5 = param_5 + -1;
  }
  if (param_7 != 0) {
    param_7 = param_7 + -1;
  }
  if (param_4 == 0) {
    puVar6 = (undefined4 *)
             (*(int *)(iGpffff8da4 + 0x34) +
             *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2) * 0x6e4);
  }
  else if (param_4 == 1) {
    puVar6 = (undefined4 *)
             (*(int *)(iGpffff8da4 + 0x34) +
              *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2) * 0x6e4 + param_5 * 0x54 + 0x54);
  }
  else {
    puVar6 = (undefined4 *)
             (*(int *)(iGpffff8da4 + 0x34) +
              *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2) * 0x6e4 + (param_4 + -1) * 0x1a4 +
              param_5 * 0x54 + 0x54);
  }
  *(undefined4 *)(param_1 + 0x3d4) = *puVar6;
  uVar3 = puVar6[2];
  uVar10 = puVar6[3];
  uVar11 = puVar6[4];
  *(undefined4 *)(param_1 + 0x3d8) = puVar6[1];
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  *(undefined4 *)(param_1 + 0x3e0) = uVar10;
  *(undefined4 *)(param_1 + 0x3e4) = uVar11;
  uVar3 = puVar6[6];
  uVar10 = puVar6[7];
  uVar11 = puVar6[8];
  *(undefined4 *)(param_1 + 1000) = puVar6[5];
  *(undefined4 *)(param_1 + 0x3ec) = uVar3;
  *(undefined4 *)(param_1 + 0x3f0) = uVar10;
  *(undefined4 *)(param_1 + 0x3f4) = uVar11;
  *(undefined4 *)(param_1 + 0x3f8) = puVar6[9];
  *(undefined4 *)(param_1 + 0x3fc) = puVar6[10];
  *(undefined4 *)(param_1 + 0x400) = puVar6[0xb];
  *(undefined4 *)(param_1 + 0x404) = puVar6[0xc];
  *(undefined4 *)(param_1 + 0x408) = puVar6[0xd];
  *(undefined4 *)(param_1 + 0x40c) = puVar6[0xe];
  *(undefined4 *)(param_1 + 0x410) = puVar6[0xf];
  *(undefined4 *)(param_1 + 0x414) = puVar6[0x10];
  *(undefined4 *)(param_1 + 0x418) = puVar6[0x11];
  *(undefined4 *)(param_1 + 0x41c) = puVar6[0x12];
  *(undefined4 *)(param_1 + 0x420) = puVar6[0x13];
  *(undefined4 *)(param_1 + 0x424) = puVar6[0x14];
  if (param_6 == 0) {
    puVar6 = (undefined4 *)
             (*(int *)(iGpffff8da4 + 0x38) +
             *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2) * 0x6e4);
  }
  else if (param_6 == 1) {
    puVar6 = (undefined4 *)
             (*(int *)(iGpffff8da4 + 0x38) +
              *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2) * 0x6e4 + param_7 * 0x54 + 0x54);
  }
  else {
    puVar6 = (undefined4 *)
             (*(int *)(iGpffff8da4 + 0x38) +
              *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2) * 0x6e4 + (param_6 + -1) * 0x1a4 +
              param_7 * 0x54 + 0x54);
  }
  puVar9 = (undefined4 *)(param_1 + 0x47c);
  iVar4 = 0xc;
  *(undefined4 *)(param_1 + 0x428) = *puVar6;
  uVar3 = puVar6[2];
  uVar10 = puVar6[3];
  uVar11 = puVar6[4];
  *(undefined4 *)(param_1 + 0x42c) = puVar6[1];
  *(undefined4 *)(param_1 + 0x430) = uVar3;
  *(undefined4 *)(param_1 + 0x434) = uVar10;
  *(undefined4 *)(param_1 + 0x438) = uVar11;
  uVar3 = puVar6[6];
  uVar10 = puVar6[7];
  uVar11 = puVar6[8];
  *(undefined4 *)(param_1 + 0x43c) = puVar6[5];
  *(undefined4 *)(param_1 + 0x440) = uVar3;
  *(undefined4 *)(param_1 + 0x444) = uVar10;
  *(undefined4 *)(param_1 + 0x448) = uVar11;
  *(undefined4 *)(param_1 + 0x44c) = puVar6[9];
  *(undefined4 *)(param_1 + 0x450) = puVar6[10];
  *(undefined4 *)(param_1 + 0x454) = puVar6[0xb];
  *(undefined4 *)(param_1 + 0x458) = puVar6[0xc];
  *(undefined4 *)(param_1 + 0x45c) = puVar6[0xd];
  *(undefined4 *)(param_1 + 0x460) = puVar6[0xe];
  *(undefined4 *)(param_1 + 0x464) = puVar6[0xf];
  *(undefined4 *)(param_1 + 0x468) = puVar6[0x10];
  *(undefined4 *)(param_1 + 0x46c) = puVar6[0x11];
  *(undefined4 *)(param_1 + 0x470) = puVar6[0x12];
  *(undefined4 *)(param_1 + 0x474) = puVar6[0x13];
  *(undefined4 *)(param_1 + 0x478) = puVar6[0x14];
  puVar7 = (undefined4 *)
           (*(int *)(iGpffff8da4 + 0x30) + *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2) * 0xc0);
  puVar6 = puVar7;
  do {
    iVar4 = iVar4 + -1;
    uVar10 = puVar6[1];
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 2;
    puVar9[1] = uVar10;
    puVar9 = puVar9 + 2;
  } while (0 < iVar4);
  puVar7 = puVar7 + 0x18;
  puVar6 = (undefined4 *)(param_1 + 0x4dc);
  iVar4 = 0xc;
  do {
    iVar4 = iVar4 + -1;
    uVar10 = puVar7[1];
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 2;
    puVar6[1] = uVar10;
    puVar6 = puVar6 + 2;
  } while (0 < iVar4);
  return;
}

// 0x00205530  size 0x34
/* 0x98-byte entries; 37 callers */

int CarDb_GetModel(int param_1)

{
  return *(int *)(iGpffff8da4 + 0x40) + *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_1 * 8) * 0x98;
}

// 0x00205570  size 0x34
/* 0x270-byte entries */

int CarDb_GetModelPhysics(int param_1)

{
  return *(int *)(iGpffff8da4 + 0x2c) + *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_1 * 8) * 0x270
  ;
}

// 0x002055b0  size 0x2c
int CarDb_GetVariantCount(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_1 * 8 + 4);
  if (iVar1 < 2) {
    iVar1 = 0;
  }
  return iVar1;
}

// 0x002055e0  size 0x2c
int CarDb_GetVariant(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_1 * 8 + 4);
  if (1 < iVar1) {
    iVar1 = 2;
  }
  return iVar1;
}

// 0x00205610  size 0x18
undefined4 CarDb_GetModelIndex(int param_1)

{
  return *(undefined4 *)(*(int *)(iGpffff8da4 + 0x5c) + param_1 * 8);
}

// 0x00205630  size 0xc
void CarDb_IsLoading(void)

{
  File_IsBusy(*(undefined4 *)(iGpffff8da4 + 0x20));
  return;
}

// 0x00205640  size 0x21c
void CarDb_Load(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(iGpffff89d4 + 0xbf74);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 49000);
  }
  *(uint *)(iGpffff8da4 + 0x24) = uVar2 / 0x270;
  uVar1 = Arc_LoadFileEx(0x991,*(undefined4 *)(iGpffff8da4 + 0x2c),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  uVar1 = Arc_LoadFileEx(0x992,*(undefined4 *)(iGpffff8da4 + 0x30),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  uVar1 = Arc_LoadFileEx(0x994,*(undefined4 *)(iGpffff8da4 + 0x34),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  uVar1 = Arc_LoadFileEx(0x995,*(undefined4 *)(iGpffff8da4 + 0x38),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  uVar1 = Arc_LoadFileEx(0x993,*(undefined4 *)(iGpffff8da4 + 0x3c),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  uVar1 = Arc_LoadFileEx(0x996,*(undefined4 *)(iGpffff8da4 + 0x40),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  uVar1 = Arc_LoadFileEx(0x98f,*(undefined4 *)(iGpffff8da4 + 0x44),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  uVar1 = Arc_LoadFileEx(0x990,*(undefined4 *)(iGpffff8da4 + 0x48),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  uVar1 = Arc_LoadFileEx(0x998,*(undefined4 *)(iGpffff8da4 + 0x54),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  uVar1 = Arc_LoadFileEx(0x997,*(undefined4 *)(iGpffff8da4 + 0x58),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  uVar1 = Arc_LoadFileEx(0x999,*(undefined4 *)(iGpffff8da4 + 0x5c),0,0,0,0);
  *(undefined4 *)(iGpffff8da4 + 0x20) = uVar1;
  return;
}

// 0x00205860  size 0x4c
void CarDb_Free(void)

{
  if (*(int *)(iGpffff8da4 + 0x28) != 0) {
    Mem_Free();
    *(undefined4 *)(iGpffff8da4 + 0x28) = 0;
  }
  if (iGpffff8da4 != 0) {
    Mem_Free();
    iGpffff8da4 = 0;
  }
  return;
}

// 0x002058b0  size 0x338
void CarDb_Alloc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = 0;
  iGpffff8da4 = Mem_Alloc16(0x60,param_1);
  *(undefined4 *)(iGpffff8da4 + 0x28) = 0;
  iVar6 = *(int *)(iGpffff8da4 + 0x28);
  while (iVar6 == 0) {
    if (iVar3 != 0) {
      uVar4 = Mem_AllocAligned(iVar3,0x40,param_1);
      *(undefined4 *)(iGpffff8da4 + 0x28) = uVar4;
    }
    iVar6 = *(int *)(iGpffff8da4 + 0x28);
    *(int *)(iGpffff8da4 + 0x2c) = iVar6;
    iVar1 = Arc_GetFileSize(0x991,0x991,1);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iGpffff8da4 + 0x28) + iVar1;
    }
    *(int *)(iGpffff8da4 + 0x30) = iVar6;
    iVar2 = Arc_GetFileSize(0x992,0x992,1);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iGpffff8da4 + 0x28) + iVar1 + iVar2;
    }
    *(int *)(iGpffff8da4 + 0x34) = iVar6;
    iVar3 = Arc_GetFileSize(0x994,0x994,1);
    iVar3 = iVar1 + iVar2 + iVar3;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iGpffff8da4 + 0x28) + iVar3;
    }
    *(int *)(iGpffff8da4 + 0x38) = iVar6;
    iVar1 = Arc_GetFileSize(0x995,0x995,1);
    iVar3 = iVar3 + iVar1;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iGpffff8da4 + 0x28) + iVar3;
    }
    *(int *)(iGpffff8da4 + 0x3c) = iVar6;
    iVar1 = Arc_GetFileSize(0x993,0x993,1);
    iVar3 = iVar3 + iVar1;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iGpffff8da4 + 0x28) + iVar3;
    }
    *(int *)(iGpffff8da4 + 0x40) = iVar6;
    iVar1 = Arc_GetFileSize(0x996,0x996,1);
    iVar3 = iVar3 + iVar1;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iGpffff8da4 + 0x28) + iVar3;
    }
    *(int *)(iGpffff8da4 + 0x44) = iVar6;
    iVar1 = Arc_GetFileSize(0x98f,0x98f,1);
    iVar3 = iVar3 + iVar1;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iGpffff8da4 + 0x28) + iVar3;
    }
    *(int *)(iGpffff8da4 + 0x48) = iVar6;
    iVar1 = Arc_GetFileSize(0x990,0x990,1);
    iVar3 = iVar3 + iVar1;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iGpffff8da4 + 0x28) + iVar3;
    }
    *(int *)(iGpffff8da4 + 0x54) = iVar6;
    iVar1 = Arc_GetFileSize(0x998,0x998,1);
    iVar3 = iVar3 + iVar1;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iGpffff8da4 + 0x28) + iVar3;
    }
    *(int *)(iGpffff8da4 + 0x58) = iVar6;
    iVar1 = Arc_GetFileSize(0x997,0x997,1);
    iVar3 = iVar3 + iVar1;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iGpffff8da4 + 0x28) + iVar3;
    }
    *(int *)(iGpffff8da4 + 0x5c) = iVar6;
    iVar6 = Arc_GetFileSize(0x999,0x999,1);
    iVar3 = iVar3 + iVar6;
    iVar6 = *(int *)(iGpffff8da4 + 0x28);
  }
  uVar5 = *(uint *)(iGpffff89d4 + 0xbf4c);
  if (uVar5 == 0) {
    uVar5 = *(uint *)(iGpffff89d4 + 0xbf40);
  }
  *(uint *)(iGpffff8da4 + 0x4c) = uVar5 / 3;
  uVar5 = *(uint *)(iGpffff89d4 + 0xbf60);
  if (uVar5 == 0) {
    uVar5 = *(uint *)(iGpffff89d4 + 0xbf54);
  }
  *(uint *)(iGpffff8da4 + 0x50) = uVar5 / 3;
  return;
}

// 0x00205bf0  size 0x4f0
void Garage3d_Draw(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  iVar1 = iGpffff9144;
  iVar7 = iGpffff9144 + 4;
  iVar8 = iGpffff9144 + 0x18;
  iVar9 = iGpffff9144 + 0x2c;
  iVar10 = iGpffff9144 + 0x54;
  iVar11 = iGpffff9144 + 0x68;
  iVar6 = 0;
  if (*(int *)(iGpffff9144 + 0x20) < 1) {
    iVar6 = *(int *)(iGpffff9144 + 0x34);
  }
  else {
    do {
      uVar3 = showroom_sub_002d5370(iVar8,iVar6);
      iVar5 = (int)uVar3;
      cVar2 = showroom_sub_002d5e40(uVar3);
      if (cVar2 == '\x04') {
        lVar4 = showroom_sub_002d5370(iVar7,*(undefined4 *)(iVar5 + 0x14));
        if ((lVar4 != 0) && ((*(uint *)(iVar5 + 0x18) & 1) != 0)) {
          CarModel_SetHeadLight(*(undefined4 *)((int)lVar4 + 0x10),0,*(undefined4 *)(iVar5 + 0x10));
        }
        if ((lVar4 != 0) && ((*(uint *)(iVar5 + 0x18) & 2) != 0)) {
          CarModel_SetHeadLight(*(undefined4 *)((int)lVar4 + 0x10),1,*(undefined4 *)(iVar5 + 0x10));
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar1 + 0x20));
    iVar6 = *(int *)(iVar1 + 0x34);
  }
  iVar8 = 0;
  if (iVar6 < 1) {
    iVar6 = *(int *)(iVar1 + 0xc);
  }
  else {
    do {
      uVar3 = showroom_sub_002d5370(iVar9,iVar8);
      iVar6 = (int)uVar3;
      cVar2 = showroom_sub_002d5e40(uVar3);
      if (cVar2 == '\x04') {
        lVar4 = showroom_sub_002d5370(iVar7,*(undefined4 *)(iVar6 + 0x14));
        if ((lVar4 != 0) && ((*(uint *)(iVar6 + 0x18) & 1) != 0)) {
          CarModel_SetBrakeLight(*(undefined4 *)((int)lVar4 + 0x10),0,*(undefined4 *)(iVar6 + 0x10))
          ;
        }
        if ((lVar4 != 0) && ((*(uint *)(iVar6 + 0x18) & 2) != 0)) {
          CarModel_SetBrakeLight(*(undefined4 *)((int)lVar4 + 0x10),1,*(undefined4 *)(iVar6 + 0x10))
          ;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(iVar1 + 0x34));
    iVar6 = *(int *)(iVar1 + 0xc);
  }
  iVar8 = 0;
  if (iVar6 < 1) {
    iVar6 = *(int *)(iVar1 + 0x5c);
  }
  else {
    do {
      uVar3 = showroom_sub_002d5370(iVar7,iVar8);
      cVar2 = showroom_sub_002d5e40(uVar3);
      if (cVar2 == '\x04') {
        AsyncRes_Poll(*(undefined4 *)((int)uVar3 + 0x10),0xc);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(iVar1 + 0xc));
    iVar6 = *(int *)(iVar1 + 0x5c);
  }
  iVar7 = 0;
  if (iVar6 < 1) {
    iVar6 = *(int *)(iVar1 + 0x70);
  }
  else {
    do {
      uVar3 = showroom_sub_002d5370(iVar10,iVar7);
      cVar2 = showroom_sub_002d5e40(uVar3);
      if (cVar2 == '\x04') {
        AsyncRes_Poll(*(undefined4 *)((int)uVar3 + 0x10),0xc);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar1 + 0x5c));
    iVar6 = *(int *)(iVar1 + 0x70);
  }
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      uVar3 = showroom_sub_002d5370(iVar11,iVar7);
      cVar2 = showroom_sub_002d5e40(uVar3);
      if (cVar2 == '\x04') {
        AsyncRes_Poll(*(undefined4 *)((int)uVar3 + 0x10),0xc);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar1 + 0x70));
  }
  SceneObj_ResetAll();
  if (*pcGpffff8db0 == '\0') {
    uRam0043058c = 1;
    SceneObj_DestroyList(0);
    SceneObj_DestroyList(0,2);
    View_DrawBackground(5,pcGpffff8db0[1],0);
    SceneObj_DestroyList(0,0);
    DmaChain_Kick(1,0,4);
    DmaChain_Kick(1,0,5);
    DmaChain_Kick(1,0,6);
    DmaChain_Kick(1,0,7);
    Pkt_Init(auStack_40,1,2,0);
    uStack_2c = 0x432dc0;
    Pkt_SubmitToChain(auStack_40,0);
    Pkt_End(auStack_40);
    Pkt_Begin(auStack_40);
    Pkt_Submit(auStack_40,0);
    SceneObj_DestroyList(1,1);
    SceneObj_DestroyList(1,2);
    View_DrawBackground(5,pcGpffff8db0[1],0);
    SceneObj_DestroyList(1,0);
  }
  else if (*pcGpffff8db0 == '\x01') {
    uRam0043058c = 0;
    SceneObj_DestroyList(0);
    SceneObj_DestroyList(0,0);
    DmaChain_Kick(1,0,4);
    DmaChain_Kick(1,0,5);
    DmaChain_Kick(1,0,6);
    DmaChain_Kick(1,0,7);
    SceneObj_DestroyList(1,1);
    SceneObj_DestroyList(1,2);
    View_DrawBackground(4,pcGpffff8db0[1],0);
    SceneObj_DestroyList(1,0);
  }
  SceneObj_DestroyAll();
  return;
}

// 0x002060f0  size 0xc
void Garage3d_SetMode(undefined1 param_1)

{
  *(undefined1 *)(iRam0036f4a0 + 1) = param_1;
  return;
}

// 0x00206100  size 0x8
void Garage3d_DrawLit(void)

{
  Course_DrawLitMeshes(0);
  return;
}

// 0x00206110  size 0x5c
void Garage3d_Free(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    showroom_sub_002d48e0(uVar1 & 0xff);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 8);
  Course_FreeModels();
  if (iRam0036f4a0 != 0) {
    Mem_Free();
    iRam0036f4a0 = 0;
  }
  return;
}

// 0x00206170  size 0x10c
void Garage3d_Load(char param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  undefined4 uStack_10;
  
  pcRam0036f4a0 = (char *)Mem_Alloc16(2,*puRam0036f834);
  *pcRam0036f4a0 = param_1;
  uVar1 = 0;
  pcRam0036f4a0[1] = '@';
  do {
    showroom_sub_002d4940(uVar1 & 0xff,6);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 8);
  SceneObj_SetGlobalFlags(param_2);
  if (param_1 == '\x01') {
    uStack_2c = 6;
    auStack_30[0] = 1;
    uStack_14 = 1;
    uStack_10 = 6;
    uStack_28 = 0xc;
    uStack_1c = 0;
    uStack_18 = 0;
  }
  else {
    if (param_1 != '\0') goto LAB_00206258;
    auStack_30[0] = 0;
    uStack_2c = 1;
    uStack_10 = 1;
    uStack_28 = 2;
    uStack_1c = 2;
    uStack_18 = 2;
    uStack_14 = 0;
  }
  uStack_20 = 1;
  uStack_24 = 1;
LAB_00206258:
  Course_LoadModels(*puRam0036f834,auStack_30);
  return;
}

// 0x00206280  size 0x4c
void MenuSnd_Stop(undefined1 param_1)

{
  undefined8 uVar1;
  
  uVar1 = SndMgr_GetInstance();
  uVar1 = SndMgr_GetChannelB(uVar1,0);
  (**(code **)(*(int *)uVar1 + 0x28))(uVar1,param_1,0,0x3c);
  return;
}

// 0x002062d0  size 0xa8
/* 51 callers */

void Se_PlayMenuVol(undefined1 param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = SndMgr_GetInstance();
  uVar2 = SndMgr_GetChannelB(uVar2,0);
  cVar1 = Options_GetSeVolume();
  (**(code **)(*(int *)uVar2 + 0x24))
            (uVar2,param_1,0,(int)((param_2 & 0xff) * (int)cVar1) / 0xf & 0xff,0x3c,0x40,0);
  return;
}

// 0x00206380  size 0xac
undefined8 MenuSnd_PlayBgm(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar1 = SndMgr_GetInstance();
  if (uRam0036f4a4 < 0x27) {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  uVar1 = SndMgr_GetSlot(uVar1,uVar3);
  lVar2 = (**(code **)(*(int *)uVar1 + 0x30))(uVar1);
  if (lVar2 != 0) {
    uVar1 = SndMgr_GetInstance();
    if (uRam0036f4a4 < 0x27) {
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
    uVar1 = SndMgr_GetSlot(uVar1,uVar3);
    lVar2 = (**(code **)(*(int *)uVar1 + 0x2c))(uVar1);
    if (lVar2 == 0) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

// 0x00206430  size 0x4c
void MenuSnd_StopBgm(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = SndMgr_GetInstance();
  if (uRam0036f4a4 < 0x27) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  uVar1 = SndMgr_GetSlot(uVar1,uVar2);
  (**(code **)(*(int *)uVar1 + 0x2c))(uVar1);
  return;
}

// 0x00206480  size 0x4c
void MenuSnd_PlayVoice(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = SndMgr_GetInstance();
  if (uRam0036f4a4 < 0x27) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  uVar1 = SndMgr_GetSlot(uVar1,uVar2);
  (**(code **)(*(int *)uVar1 + 0x1c))(uVar1);
  return;
}

// 0x002064d0  size 0x78
void MenuSnd_SetBgmVolume(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = SndMgr_GetInstance();
  if (uRam0036f4a4 < 0x27) {
    uVar4 = 0;
  }
  else {
    uVar4 = 2;
  }
  uVar3 = SndMgr_GetSlot(uVar3,uVar4);
  uVar1 = Options_Get_1c();
  uVar2 = Snd_VolumeToMidi(uVar1);
  (**(code **)(*(int *)uVar3 + 0x10))(uVar3,(undefined1)uRam0036f4a4,uVar2,0x3f,1);
  return;
}

// 0x00206550  size 0xa0
void MenuSnd_PlaySe(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uRam0036f4a4 = param_1;
  uVar2 = SndMgr_GetInstance();
  if (uRam0036f4a4 < 0x27) {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  uVar2 = SndMgr_GetSlot(uVar2,uVar3);
  iVar1 = (**(code **)(*(int *)uVar2 + 0xc))(uVar2);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  uVar2 = SndMgr_GetInstance();
  if (uRam0036f4a4 < 0x27) {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  uVar2 = SndMgr_GetSlot(uVar2,uVar3);
  (**(code **)(*(int *)uVar2 + 0x28))(uVar2,param_1 & 0xff);
  return;
}

// 0x00206600  size 0x5c
void MenuSnd_StopAll(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = SndMgr_GetInstance();
  uVar1 = SndMgr_GetSlot(uVar2,2);
  (**(code **)(*(int *)uVar1 + 0x1c))(uVar1);
  uVar2 = SndMgr_GetSlot(uVar2,1);
  (**(code **)(*(int *)uVar2 + 0x1c))(uVar2);
  return;
}

// 0x00206670  size 0x34
void Title_Update(void)

{
  undefined4 uVar1;
  
  uVar1 = uRam0036f4dc;
  Pad_GetPort(0,0);
  Title_DrawBackground(uVar1);
  return;
}

// 0x002066b0  size 0x24
void Title_Exit(void)

{
  TitleCam_Free();
  Loading_End();
  return;
}

// 0x002066e0  size 0x68
void Title_Enter(int param_1)

{
  int iVar1;
  
  Loading_Begin(0x430750);
  TitleCam_Alloc(0x430750);
  iVar1 = iRam0036f4dc;
  TitleCam_StartPath(iRam0036f4dc + 0x10,0);
  TitleCam_StartPathB(iVar1 + 0x110,0);
  *(code **)(param_1 + 0x1c) = Title_Update;
  return;
}

// 0x00206750  size 0x7a8
void Title_Draw(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint auStack_670 [172];
  undefined8 uStack_3c0;
  uint uStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  uint uStack_3a4;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  uint auStack_360 [172];
  undefined8 uStack_b0;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_50 [64];
  undefined1 auStack_10 [16];
  
  iVar11 = 0;
  piVar1 = *(int **)(param_1 + 0x14);
  uVar6 = piRam0036f468[2];
  lVar8 = -1;
  if ((piRam0036f468[4] & uVar6) == 0) {
    uVar6 = 0;
  }
  else if (uVar6 == 0x80000) {
    uVar6 = 0;
  }
  else if (*piRam0036f468 != 1) {
    uVar6 = 0;
  }
  iVar12 = piVar1[4];
  iVar9 = *(int *)(iRam0036f0c8 + 0x154);
  if (iVar12 != 0) {
    iVar9 = iVar12;
  }
  if ((iVar9 == 1) && ((iVar12 == 1 || (*(int *)(iRam0036f0c8 + 0x174) == 1)))) {
    bVar7 = true;
    if (cRam0036f2a8 == '\x01') {
      iVar12 = piVar1[3];
      if (((((iVar12 == 0xf) || (iVar12 == 6)) || (iVar12 == 5)) || ((iVar12 == 4 || (iVar12 == 3)))
          ) || ((iVar12 == 2 || (iVar12 == 1)))) {
        bVar7 = false;
      }
      if (!bVar7) goto LAB_00206864;
    }
    if (cRam0036f2a8 == '\x01') {
      if ((*piVar1 == 0) && ((uVar6 & 0x50) != 0)) {
        if (piVar1[3] == 0xd) {
          Se_PlayMenuVol(4,0x7f);
          FlushCache(0);
          IopSe_FlushDma();
        }
        *piVar1 = 1;
      }
    }
    else if ((*piVar1 == 0) && ((uVar6 & 0x40) != 0)) {
      *piVar1 = 1;
    }
  }
LAB_00206864:
  if (iVar9 == 4) {
    if (piVar1[4] == 0) {
      MoviePlayer_Close();
    }
    else {
      piVar1[4] = 0;
    }
    Gfx_SetDisplayParam(0,0,0,0,0);
    if (cRam0036f2a8 == '\x01') {
      iVar11 = piVar1[3];
      if ((iVar11 < 1) || (6 < iVar11)) {
        if (iVar11 == 0xf) {
          piVar1[3] = 0;
          *piVar1 = 0;
        }
        else if (iVar11 == 0) {
          piVar1[3] = 0xd;
          *piVar1 = 0;
          piVar1[1] = 1;
        }
        else if ((iVar11 == 0xd) && (*piVar1 == 0)) {
          if (piVar1[1] == 0) {
            piVar1[3] = 0;
            *piVar1 = 0;
          }
          else {
            lVar8 = 1;
            *piVar1 = 1;
          }
        }
      }
      else {
        piVar1[3] = 0xf;
        *piVar1 = 0;
      }
    }
    else {
      cVar2 = RaceCtx_Get_9();
      if (cVar2 == '\x05') {
        *piVar1 = 1;
      }
      else {
        iVar11 = piVar1[3];
        if (iVar11 == 0x1e) {
          piVar1[3] = 0xe;
          *piVar1 = 0;
        }
        else if ((iVar11 == 0x1c) || (iVar11 == 0x1f)) {
          uVar3 = Profile_Get(0);
          uVar4 = garage_sub_001bdd00(uVar3);
          if ((uVar4 & 0x400000) == 0) {
            uVar3 = Profile_Get(0);
            garage_sub_001bdd10(uVar3,0x400000);
            piVar1[3] = 0x20;
            *piVar1 = 0;
          }
          else {
            *piVar1 = 1;
          }
        }
        else {
          *piVar1 = 1;
        }
      }
    }
    iVar12 = *piVar1;
    goto LAB_002069a0;
  }
  iVar12 = iVar11;
  if ((iVar9 == 3) || (iVar9 == 2)) goto LAB_002069a0;
  if (iVar9 != 1) {
    if ((iVar9 == 0) && (iVar12 = *piVar1, *piVar1 == 0)) {
      if (piVar1[3] == 0xf) {
        piVar1[4] = 1;
        piVar1[0x46] = 0;
        piVar1[2] = 0x1e;
        iVar12 = iVar11;
      }
      else {
        Gfx_SetFade(5,0,0,0);
        Gfx_SetDisplayParam(0,0,0,0,0);
        Arc_GetEntryInfo(auStack_10,piVar1[3]);
        MoviePlayer_Open(auStack_10,0);
        piVar1[2] = 0x1e;
        iVar12 = iVar11;
      }
    }
    goto LAB_002069a0;
  }
  if (*piVar1 == 0) {
LAB_00206b44:
    iVar11 = piVar1[3];
  }
  else {
    if (piVar1[2] != 0) {
      Gfx_SetDisplayParam(1,(piVar1[2] * 0xff) / 0x1e,0,0,0);
      piVar1[2] = piVar1[2] + -1;
      goto LAB_00206b44;
    }
    if (piVar1[4] != 0) goto LAB_00206b44;
    MoviePlayer_IsFinished();
    iVar11 = piVar1[3];
  }
  if (iVar11 == 0xf) {
    uVar6 = 0x80808080;
    TexSlot_Set(5,2,piVar1 + 6);
    iVar11 = piVar1[0x46];
    if (iVar11 < 0x3c) {
      uVar6 = (iVar11 * 0x80) / 0x3c;
      if ((int)uVar6 < 0x80) {
        uVar5 = uVar6 * 0x1000000;
      }
      else {
        uVar6 = 0x80;
        uVar5 = 0x80000000;
      }
      uVar6 = uVar6 | uVar6 << 8 | uVar5 | uVar6 << 0x10;
    }
    else if (0x168 < iVar11) {
      uVar6 = 0x80 - ((iVar11 + -0x1e0) * 0x80) / 0x3c;
      if ((int)uVar6 < 0x81) {
        uVar6 = 0x80;
      }
      uVar6 = uVar6 | uVar6 << 8 | uVar6 << 0x18 | uVar6 << 0x10;
    }
    Obj_Reset(auStack_670,4,0xffffffffffffffff);
    uStack_3c0 = 10;
    uVar10 = uVar6 >> 0x10 & 0xff;
    uVar5 = uVar6 >> 8 & 0xff;
    auStack_670[0] = auStack_670[0] & 0xfffffffd;
    uStack_3b0 = uVar10;
    uStack_3ac = uVar5;
    uStack_3a8 = uVar6 & 0xff;
    uStack_3a4 = uVar6 >> 0x18;
    Obj_SetVisible(auStack_670,1,5,0);
    uStack_380 = 0;
    uStack_37c = 0;
    uStack_390 = 0x3f800000;
    uStack_38c = 0x3f800000;
    auStack_670[0] = auStack_670[0] | 4;
    Obj_Reset(auStack_360,4,0xffffffffffffffff);
    uStack_b0 = 10;
    auStack_360[0] = auStack_360[0] & 0xfffffffd;
    uStack_a0 = uVar10;
    uStack_9c = uVar5;
    uStack_98 = uVar6 & 0xff;
    uStack_94 = uVar6 >> 0x18;
    Obj_SetVisible(auStack_360,1,5,1);
    uStack_70 = 0x43a00000;
    uStack_80 = 0x3f800000;
    uStack_7c = 0x3f800000;
    uStack_6c = 0;
    auStack_360[0] = auStack_360[0] | 4;
    Pkt_Init(auStack_50,2,2,0);
    Pkt_SubmitToChain(auStack_50,0);
    Pkt_End(auStack_50);
    Pkt_AddPrimitives(auStack_50,auStack_670,2);
    Pkt_Submit(auStack_50,0);
    if ((0x1a3 < piVar1[0x46]) || ((*piVar1 != 0 && (piVar1[2] == 0)))) {
      piVar1[4] = 4;
    }
  }
  piVar1[0x46] = piVar1[0x46] + 1;
LAB_002069a0:
  MoviePlayer_Update(1,0,0);
  if (lVar8 < 0) {
    if (iVar12 != 0) {
      Snd_SetPause(0);
      Scene_RequestChange(3);
    }
  }
  else {
    Snd_SetPause(0);
    Scene_SetParam(lVar8);
  }
  return;
}

// 0x00206f00  size 0x54
void Opening_Exit(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  MoviePlayer_Free();
  if ((cGpffff8bb8 == '\x01') && (*(int *)(iVar1 + 0x14) != 0)) {
    Mem_Free();
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  MenuWnd_Free();
  return;
}

// 0x00206f60  size 0x1a4
/* loads movie + textures */

void Opening_Enter(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int aiStack_50 [11];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  MenuWnd_Alloc(0x430750,1);
  if (cGpffff8bb8 == '\x01') {
    uVar3 = Arc_GetFileSize(7,7);
    uVar2 = Mem_AllocAligned(uVar3,0x40,0x430750);
    puVar1[5] = uVar2;
    Arc_LoadFileEx(7,puVar1[5],0,0,0,0);
    File_AbortAll();
    uVar2 = uGpffff8bd0;
    Tex_Relocate(puVar1[5]);
    TexSlot_Bind(puVar1 + 6,puVar1[5],0,uVar2,uVar2,0x11110,0,0);
  }
  Snd_SetPause(1);
  aiStack_50[3] = 0x10000;
  aiStack_50[4] = 0xf;
  uStack_c = 0x4fff;
  aiStack_50[5] = 0x280;
  aiStack_50[6] = 0x1c0;
  aiStack_50[1] = 1;
  aiStack_50[7] = 0x200;
  aiStack_50[2] = 1;
  aiStack_50[8] = 0x100;
  uStack_1c = 1;
  aiStack_50[9] = 5;
  aiStack_50[0] = iGpffff8bb4 + 1;
  uStack_8 = 0x800;
  uStack_24 = 8;
  uStack_20 = 8;
  uStack_18 = 0;
  uStack_14 = 0;
  aiStack_50[10] = uGpffff8bd0;
  uStack_10 = 0;
  MoviePlayer_Create(aiStack_50,0x430750);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = uGpffff8bc4;
  puVar1[4] = 0;
  *(code **)(param_1 + 0x1c) = Title_Draw;
  return;
}

// 0x00207110  size 0xd8
void Title_DrawBackground(int param_1)

{
  TitleCam_Update(param_1 + 0x10);
  vu0math_sub_00132ae0(*(undefined4 *)(param_1 + 0x180),param_1 + 0x110);
  vu0math_sub_00132ae0(*(int *)(param_1 + 0x180) + 0x50,param_1 + 0x120);
  vu0math_sub_00132ae0(*(int *)(param_1 + 0x180) + 0x60,param_1 + 0x130);
  vu0math_sub_00132ae0(*(int *)(param_1 + 0x180) + 0x70,param_1 + 0x140);
  vu0math_sub_00132ae0(*(int *)(param_1 + 0x180) + 0x80,param_1 + 0x150);
  vu0math_sub_00132ae0(*(int *)(param_1 + 0x180) + 0x90,param_1 + 0x160);
  vu0math_sub_00132ae0(*(int *)(param_1 + 0x180) + 0xa0,param_1 + 0x170);
  Light_UpdateMatrices(*(undefined4 *)(param_1 + 0x180));
  View_Clear(0x432dc0);
  View_Clear(0x432240);
  View_Clear(0x432800);
  View_Clear(0x431100);
  return;
}

// 0x002071f0  size 0x2c
void TitleCam_Free(void)

{
  if (iGpffff8dec != 0) {
    Mem_Free();
    iGpffff8dec = 0;
  }
  return;
}

// 0x00207220  size 0x258
void TitleCam_Alloc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  
  uVar4 = Mem_Alloc16(400,param_1);
  puGpffff8dec = (uint *)uVar4;
  Mem_Set16(uVar4,0,400);
  *puGpffff8dec = *puGpffff8dec | 1;
  *puGpffff8dec = *puGpffff8dec | 8;
  *puGpffff8dec = *puGpffff8dec | 0x10;
  *puGpffff8dec = *puGpffff8dec | 0x20;
  TitleCam_SetFov(puGpffff8dec + 4,*(undefined4 *)(iGpffff8b0c + 0x14));
  puVar3 = puGpffff8dec;
  puVar2 = PTR_DAT_003298b0;
  puVar6 = puGpffff8dec + 4;
  puGpffff8dec[0x3a] = 0;
  puGpffff8dec[0x3b] = 0;
  puGpffff8dec[0x12] = *(uint *)(puVar2 + 0x30);
  uRam00431190 = *(undefined4 *)(puVar2 + 0x34);
  uRam00431194 = *(undefined4 *)(puVar2 + 0x38);
  uVar1 = (ulong)uRam00431170;
  uVar4 = newlib_sub_0012f600(((float)puGpffff8dec[0x12] / 57.29578) / 2.0);
  uVar4 = libm_sub_00120618(uVar4);
  uVar4 = __divdf3(0x3ff0000000000000,uVar4);
  uVar5 = newlib_sub_0012f600((float)uVar1 / 2.0);
  uVar4 = __muldf3(uVar5,uVar4);
  uVar7 = maybe___extendsfdf2(uVar4);
  Cam_SetPitch(uVar7,puVar3[0x38]);
  vu0math_sub_00132ae0(puVar6,puVar2);
  vu0math_sub_00132ae0(puVar3 + 8,puVar2 + 0x10);
  vu0math_sub_00132ae0(puVar3 + 0xc,puVar2 + 0x20);
  puVar3 = puGpffff8dec;
  Mem_Set16(puGpffff8dec + 0x44,0,0x80);
  puVar6 = puGpffff8dec;
  puVar3[0x60] = 0x436180;
  puVar2 = PTR_DAT_003298a0;
  vu0math_sub_00132ae0(puGpffff8dec + 0x44,PTR_DAT_003298a0);
  vu0math_sub_00132ae0(puVar6 + 0x48,puVar2 + 0x10);
  vu0math_sub_00132ae0(puVar6 + 0x4c,puVar2 + 0x20);
  vu0math_sub_00132ae0(puVar6 + 0x50,puVar2 + 0x30);
  vu0math_sub_00132ae0(puVar6 + 0x54,puVar2 + 0x40);
  vu0math_sub_00132ae0(puVar6 + 0x58,puVar2 + 0x50);
  vu0math_sub_00132ae0(puVar6 + 0x5c,puVar2 + 0x60);
  return;
}

// 0x00207480  size 0x460
void TitleCam_Update(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  pfVar4 = (float *)param_1;
  fVar5 = pfVar4[0x36];
  if (fVar5 != pfVar4[0x37]) {
    if (pfVar4[0x35] == 0.0) {
      pfVar4[0x36] = (float)((int)fVar5 + 1);
      fVar5 = (float)TitleCam_GetPathCount
                               ((float)(int)pfVar4[0x36] / (float)(int)pfVar4[0x37],pfVar4[0x25]);
      fVar7 = 1.0 - fVar5;
      pfVar4[0xe] = pfVar4[0x18] * fVar7 + pfVar4[0x24] * fVar5;
      vu0math_sub_00132b10(fVar7,auStack_10,pfVar4 + 0x10);
      vu0math_sub_00132b10(fVar5,auStack_20,pfVar4 + 0x1c);
      vu0math_sub_00132b70(param_1,auStack_10,auStack_20);
      vu0math_sub_00132b10(fVar7,auStack_10,pfVar4 + 0x14);
      vu0math_sub_00132b10(fVar5,auStack_20,pfVar4 + 0x20);
      vu0math_sub_00132b70(pfVar4 + 4,auStack_10,auStack_20);
    }
    else {
      if ((int)pfVar4[0x37] < (int)fVar5) {
        pfVar4[0x36] = (float)((int)pfVar4[0x36] + -1);
      }
      else {
        pfVar4[0x36] = (float)((int)pfVar4[0x36] + 1);
      }
      TitleCam_EvalSpline(param_1,pfVar4[0x36]);
    }
  }
  uVar1 = (ulong)uRam00431170;
  uVar2 = newlib_sub_0012f600((pfVar4[0xe] / 57.29578) / 2.0);
  uVar2 = libm_sub_00120618(uVar2);
  uVar2 = __divdf3(0x3ff0000000000000,uVar2);
  uVar3 = newlib_sub_0012f600((float)uVar1 / 2.0);
  uVar2 = __muldf3(uVar3,uVar2);
  uVar6 = maybe___extendsfdf2(uVar2);
  Cam_SetPitch(uVar6,pfVar4[0x34]);
  Cam_SetYaw(pfVar4[0xd],pfVar4[0x34]);
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_a0 = DAT_003298c0;
  uStack_9c = DAT_003298c4;
  uStack_98 = DAT_003298c8;
  uStack_94 = DAT_003298cc;
  uStack_b0 = DAT_003298d0;
  uStack_a4 = DAT_003298dc;
  uStack_ac = DAT_003298d4;
  uStack_a8 = DAT_003298d8;
  uStack_b8 = DAT_003298e8;
  uStack_c0 = DAT_003298e0;
  uStack_bc = DAT_003298e4;
  uStack_b4 = DAT_003298ec;
  uStack_74 = 0x3f800000;
  uStack_cc = DAT_003298f4;
  uStack_d0 = DAT_003298f0;
  uStack_c8 = DAT_003298f8;
  uStack_c4 = DAT_003298fc;
  fStack_70 = *pfVar4 - pfVar4[4];
  fStack_6c = pfVar4[1] - pfVar4[5];
  fStack_68 = pfVar4[2] - pfVar4[6];
  uStack_64 = 0x3f800000;
  maybe_Vu0_UnitMatrix(auStack_60);
  Demo_BuildRotation(pfVar4[0x3d],auStack_60,auStack_60,&uStack_c0);
  Demo_BuildRotation(pfVar4[0x3c],auStack_60,auStack_60,&uStack_b0);
  Demo_BuildRotation(pfVar4[0x3e],auStack_60,auStack_60,&uStack_d0);
  vu0math_sub_00132d20(auStack_60,auStack_60,pfVar4 + 0x38);
  vu0math_sub_00132d50(&uStack_80,auStack_60,&uStack_80);
  vu0math_sub_00132d50(&fStack_70,auStack_60,&fStack_70);
  vu0math_sub_00132cd0(auStack_60,auStack_60);
  vu0math_sub_00133020(auStack_60,auStack_60);
  vu0math_sub_00132d50(&uStack_a0,auStack_60,&uStack_a0);
  vu0math_sub_00132b70(&fStack_70,&fStack_70,pfVar4 + 4);
  vu0math_sub_00132b70(&uStack_80,&uStack_80,pfVar4 + 4);
  vu0math_sub_00132b50(auStack_90,&uStack_80,&fStack_70);
  vu0math_sub_001328b0(auStack_90,auStack_90);
  vu0math_sub_00132b10(pfVar4[0xc],auStack_90,auStack_90);
  vu0math_sub_00132b70(&fStack_70,auStack_90,&fStack_70);
  Cam_SetPositionAndTarget(pfVar4[0x34],&fStack_70,&uStack_80,&uStack_a0,&uStack_80);
  return;
}

// 0x002078e0  size 0x1064
void TitleCam_EvalSpline(float *param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = *(float **)((int)param_1[0x35] + 8);
  fVar5 = pfVar2[4];
  pfVar1 = pfVar2 + 4;
  if (fVar5 < (float)param_2) {
    do {
      pfVar1 = pfVar1 + 4;
      fVar5 = *pfVar1;
      pfVar2 = pfVar2 + 4;
    } while (fVar5 < (float)param_2);
  }
  fVar3 = (float)param_2 - *pfVar2;
  if (fVar3 < 2.1474836e+09) {
    uVar4 = (uint)fVar3;
  }
  else {
    uVar4 = (int)(fVar3 - 2.1474836e+09) | 0x80000000;
  }
  fVar3 = 1.0 / (fVar5 - *pfVar2);
  fVar6 = pfVar2[3];
  fVar5 = fVar3 * (pfVar2[1] - pfVar1[1]);
  param_1[0xe] = (float)uVar4 *
                 ((float)uVar4 *
                  (fVar3 * ((fVar5 * -3.0 - fVar6 * 2.0) - pfVar1[2]) +
                  fVar3 * fVar3 * (pfVar1[2] + fVar5 * 2.0 + fVar6 + 0.0) * (float)uVar4) +
                 fVar6 + 0.0) + pfVar2[1] + 0.0;
  pfVar2 = *(float **)((int)param_1[0x35] + 4);
  fVar5 = pfVar2[4];
  pfVar1 = pfVar2 + 4;
  if (fVar5 < (float)param_2) {
    do {
      pfVar1 = pfVar1 + 4;
      fVar5 = *pfVar1;
      pfVar2 = pfVar2 + 4;
    } while (fVar5 < (float)param_2);
  }
  fVar3 = (float)param_2 - *pfVar2;
  if (fVar3 < 2.1474836e+09) {
    uVar4 = (uint)fVar3;
  }
  else {
    uVar4 = (int)(fVar3 - 2.1474836e+09) | 0x80000000;
  }
  fVar3 = 1.0 / (fVar5 - *pfVar2);
  fVar6 = pfVar2[3];
  fVar5 = fVar3 * (pfVar2[1] - pfVar1[1]);
  param_1[0xd] = (float)uVar4 *
                 ((float)uVar4 *
                  (fVar3 * ((fVar5 * -3.0 - fVar6 * 2.0) - pfVar1[2]) +
                  fVar3 * fVar3 * (pfVar1[2] + fVar5 * 2.0 + fVar6 + 0.0) * (float)uVar4) +
                 fVar6 + 0.0) + pfVar2[1] + 0.0;
  pfVar2 = *(float **)((int)param_1[0x35] + 0xc);
  fVar5 = pfVar2[4];
  pfVar1 = pfVar2 + 4;
  if (fVar5 < (float)param_2) {
    do {
      pfVar1 = pfVar1 + 4;
      fVar5 = *pfVar1;
      pfVar2 = pfVar2 + 4;
    } while (fVar5 < (float)param_2);
  }
  fVar3 = (float)param_2 - *pfVar2;
  if (fVar3 < 2.1474836e+09) {
    uVar4 = (uint)fVar3;
  }
  else {
    uVar4 = (int)(fVar3 - 2.1474836e+09) | 0x80000000;
  }
  fVar3 = 1.0 / (fVar5 - *pfVar2);
  fVar6 = pfVar2[3];
  fVar5 = fVar3 * (pfVar2[1] - pfVar1[1]);
  *param_1 = (float)uVar4 *
             ((float)uVar4 *
              (fVar3 * ((fVar5 * -3.0 - fVar6 * 2.0) - pfVar1[2]) +
              fVar3 * fVar3 * (pfVar1[2] + fVar5 * 2.0 + fVar6 + 0.0) * (float)uVar4) + fVar6 + 0.0)
             + pfVar2[1] + 0.0;
  pfVar2 = *(float **)((int)param_1[0x35] + 0x10);
  fVar5 = pfVar2[4];
  pfVar1 = pfVar2 + 4;
  if (fVar5 < (float)param_2) {
    do {
      pfVar1 = pfVar1 + 4;
      fVar5 = *pfVar1;
      pfVar2 = pfVar2 + 4;
    } while (fVar5 < (float)param_2);
  }
  fVar3 = (float)param_2 - *pfVar2;
  if (fVar3 < 2.1474836e+09) {
    uVar4 = (uint)fVar3;
  }
  else {
    uVar4 = (int)(fVar3 - 2.1474836e+09) | 0x80000000;
  }
  fVar3 = 1.0 / (fVar5 - *pfVar2);
  fVar6 = pfVar2[3];
  fVar5 = fVar3 * (pfVar2[1] - pfVar1[1]);
  param_1[1] = (float)uVar4 *
               ((float)uVar4 *
                (fVar3 * ((fVar5 * -3.0 - fVar6 * 2.0) - pfVar1[2]) +
                fVar3 * fVar3 * (pfVar1[2] + fVar5 * 2.0 + fVar6 + 0.0) * (float)uVar4) +
               fVar6 + 0.0) + pfVar2[1] + 0.0;
  pfVar2 = *(float **)((int)param_1[0x35] + 0x14);
  fVar5 = pfVar2[4];
  pfVar1 = pfVar2 + 4;
  if (fVar5 < (float)param_2) {
    do {
      pfVar1 = pfVar1 + 4;
      fVar5 = *pfVar1;
      pfVar2 = pfVar2 + 4;
    } while (fVar5 < (float)param_2);
  }
  fVar3 = (float)param_2 - *pfVar2;
  if (fVar3 < 2.1474836e+09) {
    uVar4 = (uint)fVar3;
  }
  else {
    uVar4 = (int)(fVar3 - 2.1474836e+09) | 0x80000000;
  }
  fVar3 = 1.0 / (fVar5 - *pfVar2);
  fVar6 = pfVar2[3];
  fVar5 = fVar3 * (pfVar2[1] - pfVar1[1]);
  param_1[2] = (float)uVar4 *
               ((float)uVar4 *
                (fVar3 * ((fVar5 * -3.0 - fVar6 * 2.0) - pfVar1[2]) +
                fVar3 * fVar3 * (pfVar1[2] + fVar5 * 2.0 + fVar6 + 0.0) * (float)uVar4) +
               fVar6 + 0.0) + pfVar2[1] + 0.0;
  param_1[3] = 1.0;
  pfVar2 = *(float **)((int)param_1[0x35] + 0x18);
  fVar5 = pfVar2[4];
  pfVar1 = pfVar2 + 4;
  if (fVar5 < (float)param_2) {
    do {
      pfVar1 = pfVar1 + 4;
      fVar5 = *pfVar1;
      pfVar2 = pfVar2 + 4;
    } while (fVar5 < (float)param_2);
  }
  fVar3 = (float)param_2 - *pfVar2;
  if (fVar3 < 2.1474836e+09) {
    uVar4 = (uint)fVar3;
  }
  else {
    uVar4 = (int)(fVar3 - 2.1474836e+09) | 0x80000000;
  }
  fVar3 = 1.0 / (fVar5 - *pfVar2);
  fVar6 = pfVar2[3];
  fVar5 = fVar3 * (pfVar2[1] - pfVar1[1]);
  param_1[4] = (float)uVar4 *
               ((float)uVar4 *
                (fVar3 * ((fVar5 * -3.0 - fVar6 * 2.0) - pfVar1[2]) +
                fVar3 * fVar3 * (pfVar1[2] + fVar5 * 2.0 + fVar6 + 0.0) * (float)uVar4) +
               fVar6 + 0.0) + pfVar2[1] + 0.0;
  pfVar2 = *(float **)((int)param_1[0x35] + 0x1c);
  fVar5 = pfVar2[4];
  pfVar1 = pfVar2 + 4;
  if (fVar5 < (float)param_2) {
    do {
      pfVar1 = pfVar1 + 4;
      fVar5 = *pfVar1;
      pfVar2 = pfVar2 + 4;
    } while (fVar5 < (float)param_2);
  }
  fVar3 = (float)param_2 - *pfVar2;
  if (fVar3 < 2.1474836e+09) {
    uVar4 = (uint)fVar3;
  }
  else {
    uVar4 = (int)(fVar3 - 2.1474836e+09) | 0x80000000;
  }
  fVar3 = 1.0 / (fVar5 - *pfVar2);
  fVar6 = pfVar2[3];
  fVar5 = fVar3 * (pfVar2[1] - pfVar1[1]);
  param_1[5] = (float)uVar4 *
               ((float)uVar4 *
                (fVar3 * ((fVar5 * -3.0 - fVar6 * 2.0) - pfVar1[2]) +
                fVar3 * fVar3 * (pfVar1[2] + fVar5 * 2.0 + fVar6 + 0.0) * (float)uVar4) +
               fVar6 + 0.0) + pfVar2[1] + 0.0;
  pfVar2 = *(float **)((int)param_1[0x35] + 0x20);
  fVar5 = pfVar2[4];
  pfVar1 = pfVar2 + 4;
  if (fVar5 < (float)param_2) {
    do {
      pfVar1 = pfVar1 + 4;
      fVar5 = *pfVar1;
      pfVar2 = pfVar2 + 4;
    } while (fVar5 < (float)param_2);
  }
  fVar3 = (float)param_2 - *pfVar2;
  if (fVar3 < 2.1474836e+09) {
    uVar4 = (uint)fVar3;
  }
  else {
    uVar4 = (int)(fVar3 - 2.1474836e+09) | 0x80000000;
  }
  fVar3 = 1.0 / (fVar5 - *pfVar2);
  fVar6 = pfVar2[3];
  fVar5 = fVar3 * (pfVar2[1] - pfVar1[1]);
  param_1[6] = (float)uVar4 *
               ((float)uVar4 *
                (fVar3 * ((fVar5 * -3.0 - fVar6 * 2.0) - pfVar1[2]) +
                fVar3 * fVar3 * (pfVar1[2] + fVar5 * 2.0 + fVar6 + 0.0) * (float)uVar4) +
               fVar6 + 0.0) + pfVar2[1] + 0.0;
  param_1[7] = 1.0;
  param_1[8] = 0.0;
  param_1[9] = 1.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  return;
}

