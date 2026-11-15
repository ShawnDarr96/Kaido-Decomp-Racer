// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0019c000 - 0x001a0000
#include "ghidra_types.h"

// 0x0019c2e0  size 0x494
void CarModel_RenderOpaque(undefined8 param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 auStack_510 [8];
  int iStack_508;
  undefined1 auStack_500 [68];
  undefined1 auStack_4bc [64];
  int iStack_47c;
  undefined1 *puStack_2bc;
  undefined4 uStack_130;
  uint uStack_a8;
  
  CarModel_SetupLighting(param_1,auStack_500,0);
  uVar8 = 0;
  puVar7 = &DAT_00312800;
  do {
    bVar1 = puVar7[2];
    iVar6 = ((uint)bVar1 * 0x18 - (uint)bVar1) * 0x40;
    puStack_2bc = &g_Views + iVar6;
    puVar9 = (uint *)param_1;
    if (((*(int *)(iVar6 + 0x431684) != 0) && ((bVar1 != 1 || ((*puVar9 & 4) != 0)))) &&
       ((bVar1 != 2 || ((*puVar9 & 8) != 0)))) {
      Layer_Reset(auStack_500,puStack_2bc,uStack_130,0,*(undefined4 *)(puVar7 + 4));
      Cam_SetupViewport(puStack_2bc,*puVar7,puVar7[1]);
      Light_UpdateMatrices(uStack_130);
      uVar4 = puVar9[0x44];
      if ((uVar4 & 0x200) == 0) {
        cVar2 = puVar7[2];
        if (cVar2 == '\x06') {
          uStack_a8 = 3;
LAB_0019c6c8:
          bVar1 = (byte)puVar9[0x138];
        }
        else {
          if (((cVar2 == '\x02') || (cVar2 == '\x01')) || (cVar2 == '\0')) {
            if ((uVar4 & 0x400) == 0) {
              uStack_a8 = CarModel_ComputeLod(*(undefined4 *)(puVar9[0x141] + 0xcb0),param_1,
                                              puStack_2bc,puVar9 + 0x48,5,0x312820);
            }
            else {
              uStack_a8 = CarModel_ComputeLod(*(undefined4 *)(puVar9[0x141] + 0xcb0),param_1,
                                              puStack_2bc,puVar9 + 0x48,5,0x312860);
            }
            goto LAB_0019c6c8;
          }
          bVar1 = (byte)puVar9[0x138];
        }
        if (bVar1 < 5) {
          uStack_a8 = (uint)bVar1;
        }
        uStack_a8 = CarAsset_GetPartVariant(puVar9[0x141],uStack_a8);
      }
      else {
        if ((uVar4 & 0x400) == 0) {
          uStack_a8 = CarModel_ComputeLod(*(undefined4 *)(puVar9[0x141] + 0xcb0),param_1,puStack_2bc
                                          ,puVar9 + 0x48,5,0x312840);
        }
        else {
          uStack_a8 = CarModel_ComputeLod(*(undefined4 *)(puVar9[0x141] + 0xcb0),param_1,puStack_2bc
                                          ,puVar9 + 0x48,5,0x312880);
        }
        uStack_a8 = CarAsset_GetPartVariant(puVar9[0x141],uStack_a8);
      }
      Layer_Open(auStack_500,0);
      Layer_Open(auStack_500,1);
      if (puVar9[0x13a] == 0) {
        uVar4 = puVar9[0x44];
      }
      else {
        Pkt_SetFrame(auStack_500,puVar9[0x13b],puVar9[0x13c],0);
        Pkt_SetFrame(auStack_4bc,puVar9[0x13b],puVar9[0x13c],0);
        Pkt_SetFrame(auStack_500,puVar9[0x13b],puVar9[0x13c],1);
        Pkt_SetFrame(auStack_4bc,puVar9[0x13b],puVar9[0x13c],1);
        uVar4 = puVar9[0x44];
      }
      if (((uVar4 & 0x800) != 0) && (puVar7[2] == '\0')) {
        Pkt_SetTexFlush(auStack_500,3);
        Pkt_SetTexFlush(auStack_4bc,3);
      }
      lVar5 = CarModel_DrawWheels(param_1,auStack_500);
      if (lVar5 != 0) {
        CarModel_DrawParts(param_1,auStack_500);
      }
      CarModel_DrawBody(param_1,auStack_500);
      Camera_GetViewMatrix(puStack_2bc,auStack_510,puVar9 + 0x48);
      bVar3 = true;
      if ((-1 < iStack_508) && (iStack_508 < 0xffffff)) {
        bVar3 = false;
      }
      if (bVar3) {
        iStack_508 = 0xfffff0;
      }
      iStack_47c = iStack_508;
      if (((puVar9[0x44] & 0x800) != 0) && (puVar7[2] == '\0')) {
        Pkt_SetTexFlush(auStack_500,0);
        Pkt_SetTexFlush(auStack_4bc,0);
      }
      if (puVar9[0x13a] != 0) {
        Pkt_SetFrame(auStack_500,0,0,0);
        Pkt_SetFrame(auStack_4bc,0,0,0);
        Pkt_SetFrame(auStack_500,0,0,1);
        Pkt_SetFrame(auStack_4bc,0,0,1);
      }
      Layer_Close(auStack_500,0);
      Layer_Close(auStack_500,1);
    }
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 8;
    if (3 < uVar8) {
      if (cRam00430460 == '\x02') {
        if ((iRam004301b0 == 0) || (uRam004301ac <= puVar9[0xff])) {
          iVar6 = 0;
        }
        else {
          iVar6 = iRam004301b0 + puVar9[0xff] * 0xb900;
        }
        if (iVar6 != 0) {
          Car_DrawShadowAndBlur(iVar6,param_1);
        }
      }
      return;
    }
  } while( true );
}

// 0x0019c780  size 0x5f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CarModel_RenderTranslucent(undefined8 param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_7b0 [8];
  int iStack_7a8;
  undefined1 auStack_7a0 [20];
  undefined4 uStack_78c;
  undefined1 auStack_760 [16];
  undefined1 auStack_750 [16];
  undefined1 auStack_740 [32];
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [4];
  undefined4 uStack_70c;
  undefined1 auStack_700 [32];
  undefined1 auStack_6e0 [20];
  undefined4 uStack_6cc;
  undefined1 auStack_6a0 [16];
  undefined1 auStack_690 [16];
  undefined1 auStack_680 [16];
  undefined1 auStack_670 [16];
  undefined1 auStack_660 [64];
  undefined1 auStack_620 [64];
  undefined1 auStack_5e0 [20];
  undefined4 uStack_5cc;
  undefined1 auStack_5a0 [16];
  undefined1 auStack_590 [16];
  undefined1 auStack_580 [32];
  undefined1 auStack_560 [16];
  undefined1 auStack_550 [16];
  undefined1 auStack_540 [16];
  undefined1 auStack_530 [16];
  undefined1 auStack_520 [16];
  undefined1 auStack_510 [12];
  undefined4 uStack_504;
  undefined1 auStack_500 [68];
  undefined1 auStack_4bc [64];
  int iStack_47c;
  undefined1 auStack_440 [388];
  undefined1 *puStack_2bc;
  int iStack_130;
  uint uStack_a8;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x4f4) != 0) {
    CarModel_SetupLighting(param_1,auStack_500,1);
    if (cRam00430460 == '\0') {
      *(undefined4 *)(*(int *)(_g_Loading + 0x14) + 0x104) =
           *(undefined4 *)(*(int *)(_g_Loading + 0x14) + 0xa4);
      puStack_2bc = &g_Views;
    }
    else {
      puStack_2bc = (undefined1 *)0x432240;
    }
    if (*(int *)(puStack_2bc + 0x584) != 0) {
      Layer_Reset(auStack_500,puStack_2bc,iStack_130,0,4);
      if (cRam00430460 == '\x02') {
        sceVu0SubVector(auStack_520,iVar4 + 400,iVar4 + 0x170);
        sceVu0SubVector(auStack_530,iVar4 + 0x180,iVar4 + 400);
        sceVu0SubVector(auStack_540,iVar4 + 0x1a0,iVar4 + 0x180);
        sceVu0OuterProduct(auStack_550,auStack_520,auStack_530);
        sceVu0Normalize(auStack_550,auStack_550);
        sceVu0OuterProduct(auStack_560,auStack_540,auStack_530);
        sceVu0Normalize(auStack_560,auStack_560);
        sceVu0AddVector(auStack_520,auStack_550,auStack_560);
        sceVu0Normalize(auStack_510,auStack_520);
        uStack_504 = 0;
        maybe_Vu0_UnitMatrix(auStack_5a0);
        maybe_Vu0_UnitMatrix(auStack_620);
        sceVu0SubVector(auStack_670,iVar4 + 0x150,iVar4 + 0x170);
        uVar5 = sceVu0InnerProduct(auStack_670,auStack_510);
        sceVu0ScaleVector(uVar5,auStack_680,auStack_510);
        sceVu0SubVector(auStack_680,iVar4 + 0x150,auStack_680);
        sceVu0ScaleVector(0xbf800000,auStack_690,auStack_680);
        sceVu0OuterProduct(auStack_6a0,iVar4 + 0x120,auStack_510);
        sceVu0Normalize(auStack_580,auStack_6a0);
        sceVu0CopyVector(auStack_590,auStack_510);
        sceVu0OuterProduct(auStack_5a0,auStack_590,auStack_580);
        sceVu0InversMatrix(auStack_660,auStack_5a0);
        maybe_Vu0_UnitMatrix(auStack_620);
        sceVu0TransMatrix(auStack_620,auStack_620,auStack_690);
        sceVu0MulMatrix(auStack_620,auStack_620,iVar4 + 0x120);
        sceVu0MulMatrix(auStack_660,auStack_660,auStack_620);
        maybe_Vu0_UnitMatrix(auStack_5e0);
        uStack_5cc = 0xbf800000;
        sceVu0MulMatrix(auStack_5e0,auStack_5e0,auStack_660);
        sceVu0MulMatrix(auStack_5e0,auStack_5a0,auStack_5e0);
        maybe_Vu0_UnitMatrix(auStack_620);
        sceVu0TransMatrix(auStack_620,auStack_620,auStack_680);
        sceVu0MulMatrix(auStack_440,auStack_620,auStack_5e0);
      }
      else {
        maybe_Vu0_UnitMatrix(auStack_6e0);
        uStack_6cc = 0xbf800000;
        sceVu0MulMatrix(auStack_440,auStack_6e0,iVar4 + 0x120);
      }
      maybe_Vu0_UnitMatrix(auStack_720);
      uStack_70c = 0xbf800000;
      maybe_Vu0_UnitMatrix(auStack_760);
      sceVu0CopyVector(auStack_760,iStack_130 + 0x50);
      sceVu0CopyVector(auStack_750,iStack_130 + 0x60);
      sceVu0CopyVector(auStack_740,iStack_130 + 0x70);
      sceVu0MulMatrix(auStack_720,auStack_720,auStack_760);
      sceVu0CopyVector(iStack_130 + 0x50,auStack_720);
      sceVu0CopyVector(iStack_130 + 0x60,auStack_710);
      sceVu0CopyVector(iStack_130 + 0x70,auStack_700);
      Cam_SetupViewport(puStack_2bc,0,1);
      Light_UpdateMatrices(iStack_130);
      if (*(byte *)(iVar4 + 0x4e3) < 5) {
        uStack_a8 = (uint)*(byte *)(iVar4 + 0x4e3);
      }
      else {
        uStack_a8 = 4;
      }
      uStack_a8 = CarAsset_GetPartVariant(*(undefined4 *)(iVar4 + 0x504),uStack_a8);
      Layer_Open(auStack_500,0);
      Layer_Open(auStack_500,1);
      if (*(int *)(iVar4 + 0x4e8) != 0) {
        Pkt_SetFrame(auStack_500,*(undefined4 *)(iVar4 + 0x4ec),*(undefined4 *)(iVar4 + 0x4f0),0);
        Pkt_SetFrame(auStack_4bc,*(undefined4 *)(iVar4 + 0x4ec),*(undefined4 *)(iVar4 + 0x4f0),0);
        Pkt_SetFrame(auStack_500,*(undefined4 *)(iVar4 + 0x4ec),*(undefined4 *)(iVar4 + 0x4f0),1);
        Pkt_SetFrame(auStack_4bc,*(undefined4 *)(iVar4 + 0x4ec),*(undefined4 *)(iVar4 + 0x4f0),1);
      }
      if (cRam00430460 == '\x02') {
        puVar2 = (undefined8 *)Pkt_AllocVif(auStack_500,1,0x13000000);
        *puVar2 = 1;
        puVar2[1] = 0x4a;
        puVar2 = (undefined8 *)Pkt_AllocVif(auStack_4bc,1,0x13000000);
        *puVar2 = 1;
        puVar2[1] = 0x4a;
      }
      lVar3 = CarModel_DrawWheels(param_1,auStack_500);
      if (cRam00430460 != '\x02') {
        maybe_Vu0_UnitMatrix(auStack_7a0);
        uStack_78c = 0xbf800000;
        sceVu0MulMatrix(auStack_440,auStack_7a0,iVar4 + 0x120);
      }
      if ((lVar3 != 0) && (cRam00430460 == '\0')) {
        CarModel_DrawParts(param_1,auStack_500);
      }
      CarModel_DrawBody(param_1,auStack_500);
      Camera_GetViewMatrix(puStack_2bc,auStack_7b0,auStack_440);
      bVar1 = true;
      if ((-1 < iStack_7a8) && (iStack_7a8 < 0xffffff)) {
        bVar1 = false;
      }
      if (bVar1) {
        iStack_7a8 = 0xfffff0;
      }
      iStack_47c = iStack_7a8;
      if (cRam00430460 == '\x02') {
        puVar2 = (undefined8 *)Pkt_AllocVif(auStack_500,1,0x13000000);
        *puVar2 = 0;
        puVar2[1] = 0x4a;
        puVar2 = (undefined8 *)Pkt_AllocVif(auStack_4bc,1,0x13000000);
        *puVar2 = 0;
        puVar2[1] = 0x4a;
      }
      if (*(int *)(iVar4 + 0x4e8) != 0) {
        Pkt_SetFrame(auStack_500,0,0,0);
        Pkt_SetFrame(auStack_4bc,0,0,0);
        Pkt_SetFrame(auStack_500,0,0,1);
        Pkt_SetFrame(auStack_4bc,0,0,1);
      }
      Layer_Close(auStack_500,0);
      Layer_Close(auStack_500,1);
    }
  }
  return;
}

// 0x0019cd80  size 0x5c
void CarModel_SetBrakeLight(int param_1,int param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    param_1 = param_2 * 4 + param_1;
    if (*(int *)(param_1 + 0x520) != 0) {
      *(int *)(param_1 + 0x510) = *(int *)(param_1 + 0x520);
    }
    *(undefined4 *)(param_1 + 0x520) = 0;
  }
  else {
    iVar1 = param_2 * 4 + param_1;
    if (*(int *)(iVar1 + 0x520) == 0) {
      *(undefined4 *)(iVar1 + 0x520) = *(undefined4 *)(iVar1 + 0x510);
    }
    *(int *)(param_2 * 4 + param_1 + 0x510) = (int)param_3;
  }
  return;
}

// 0x0019cde0  size 0x5c
void CarModel_SetHeadLight(int param_1,int param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    param_1 = param_2 * 4 + param_1;
    if (*(int *)(param_1 + 0x518) != 0) {
      *(int *)(param_1 + 0x508) = *(int *)(param_1 + 0x518);
    }
    *(undefined4 *)(param_1 + 0x518) = 0;
  }
  else {
    iVar1 = param_2 * 4 + param_1;
    if (*(int *)(iVar1 + 0x518) == 0) {
      *(undefined4 *)(iVar1 + 0x518) = *(undefined4 *)(iVar1 + 0x508);
    }
    *(int *)(param_2 * 4 + param_1 + 0x508) = (int)param_3;
  }
  return;
}

// 0x0019ce40  size 0xe4
void CarModel_SwapParts(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x518) != 0) {
    *(int *)(iVar1 + 0x508) = *(int *)(iVar1 + 0x518);
  }
  *(undefined4 *)(iVar1 + 0x518) = 0;
  if (*(int *)(iVar1 + 0x51c) != 0) {
    *(int *)(iVar1 + 0x50c) = *(int *)(iVar1 + 0x51c);
  }
  *(undefined4 *)(iVar1 + 0x51c) = 0;
  if (*(int *)(iVar1 + 0x520) != 0) {
    *(int *)(iVar1 + 0x510) = *(int *)(iVar1 + 0x520);
  }
  *(undefined4 *)(iVar1 + 0x520) = 0;
  if (*(int *)(iVar1 + 0x524) != 0) {
    *(int *)(iVar1 + 0x514) = *(int *)(iVar1 + 0x524);
  }
  *(undefined4 *)(iVar1 + 0x524) = 0;
  maybe_Course_GetItemA(*(undefined4 *)(iVar1 + 0x500));
  maybe_Course_GetItemA(*(undefined4 *)(iVar1 + 0x528));
  maybe_Course_GetItemA(*(undefined4 *)(iVar1 + 0x508));
  maybe_Course_GetItemA(*(undefined4 *)(iVar1 + 0x50c));
  maybe_Course_GetItemA(*(undefined4 *)(iVar1 + 0x510));
  maybe_Course_GetItemA(*(undefined4 *)(iVar1 + 0x514));
  maybe_Course_GetItemA(*(undefined4 *)(iVar1 + 0x504));
  Chunk_Init(param_1,0x530);
  *(undefined4 *)(iVar1 + 0x500) = 0;
  *(undefined4 *)(iVar1 + 0x504) = 0;
  *(undefined4 *)(iVar1 + 0x508) = 0;
  *(undefined4 *)(iVar1 + 0x50c) = 0;
  *(undefined4 *)(iVar1 + 0x518) = 0;
  *(undefined4 *)(iVar1 + 0x51c) = 0;
  *(undefined4 *)(iVar1 + 0x510) = 0;
  *(undefined4 *)(iVar1 + 0x514) = 0;
  *(undefined4 *)(iVar1 + 0x520) = 0;
  *(undefined4 *)(iVar1 + 0x524) = 0;
  *(undefined4 *)(iVar1 + 0x528) = 0;
  CarModel_ResetState(iVar1 + 0x110);
  return;
}

// 0x0019cf30  size 0x154
void CarModel_ResetState(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  *param_1 = 0;
  maybe_Vu0_UnitMatrix(param_1 + 4);
  uVar6 = 0;
  puVar1 = param_1;
  puVar2 = param_1;
  do {
    uVar5 = 0;
    puVar3 = puVar1;
    puVar4 = puVar2;
    do {
      maybe_Vu0_UnitMatrix(puVar4 + 0x28);
      maybe_Vu0_UnitMatrix(puVar4 + 0x68);
      uVar5 = uVar5 + 1;
      puVar3[0xb0] = 0;
      puVar4 = puVar4 + 0x10;
      puVar3 = puVar3 + 1;
    } while (uVar5 < 2);
    uVar6 = uVar6 + 1;
    puVar2 = puVar2 + 0x20;
    puVar1 = puVar1 + 2;
  } while (uVar6 < 2);
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  uVar6 = 0;
  param_1[0xba] = 1;
  param_1[0xbb] = 0;
  puVar1 = param_1;
  puVar2 = param_1;
  do {
    puVar2[0xbc] = 1;
    uVar6 = uVar6 + 1;
    *(undefined1 *)(puVar1 + 0xc0) = 0;
    puVar2[0xbd] = 1;
    *(undefined1 *)((int)puVar1 + 0x301) = 0;
    puVar2 = puVar2 + 2;
    puVar1 = (undefined4 *)((int)puVar1 + 2);
  } while (uVar6 < 2);
  param_1[0xb8] = 0x3f800000;
  param_1[0xb9] = 0x3f800000;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined1 *)(param_1 + 0xf4) = 5;
  *(undefined1 *)((int)param_1 + 0x3d1) = 4;
  *(undefined1 *)((int)param_1 + 0x3d2) = 4;
  *(undefined1 *)((int)param_1 + 0x3d3) = 5;
  *(undefined1 *)(param_1 + 0xf5) = 4;
  *(undefined1 *)((int)param_1 + 0x3d5) = 4;
  param_1[0xf6] = 0;
  param_1[0xf9] = 1;
  return;
}

// 0x0019d090  size 0x84
void CourseStream_InitBlock(int param_1)

{
  int iVar1;
  
  Mem_Set16(param_1,0,0x100);
  *(undefined4 *)(param_1 + 4) = 0;
  DriverAsset_ClearFlag(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  DriverAsset_Clear(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x60) = 0;
  CarAsset_Clear(param_1 + 100);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x70) = 0;
    WheelAsset_ClearParams(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x94) = 0;
    WheelAsset_Clear(param_1 + 0x98);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x48;
  } while (iVar1 < 2);
  return;
}

// 0x0019d120  size 0x360
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CourseStream_RequestBlock
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               uint param_5,uint param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_40 [16];
  float afStack_30 [4];
  undefined1 auStack_20 [16];
  float afStack_10 [4];
  
  iVar10 = iRam004305e0;
  iVar9 = *(int *)((param_5 & 0xff) * 4 + _g_Loading + 0x14);
  sceVu0CopyVector(auStack_20,iVar9 + 0x70);
  afStack_10[0] = *(float *)(iVar9 + 0x80) - *(float *)(iVar9 + 0x70);
  afStack_10[1] = 0.0;
  afStack_10[2] = *(float *)(iVar9 + 0x88) - *(float *)(iVar9 + 0x78);
  iVar9 = *(int *)((param_6 & 0xff) * 4 + _g_Loading + 0x14);
  sceVu0CopyVector(auStack_40,iVar9 + 0x70);
  afStack_30[0] = *(float *)(iVar9 + 0x80) - *(float *)(iVar9 + 0x70);
  afStack_30[1] = 0.0;
  afStack_30[2] = *(float *)(iVar9 + 0x88) - *(float *)(iVar9 + 0x78);
  uVar3 = CourseStream_UpdateVisibility
                    (param_1,param_2,param_3,param_4,auStack_20,afStack_10,auStack_40,afStack_30);
  uVar11 = 0;
  uRam004305dc = uVar3;
  if (uVar3 != 0) {
    do {
      lVar6 = BlockPool_FindB(uRam004305c8,uRam004305c4,*(undefined2 *)(iVar10 + 4));
      if (lVar6 != 0) {
        lVar6 = BlockPool_Find(iRam004305d0,uRam004305cc,*(undefined4 *)(iVar10 + 4));
        if (lVar6 == 0) {
          lVar6 = BlockPool_FindFree(iRam004305d0,uRam004305cc);
          if (lVar6 != 0) {
            uVar5 = *(uint *)(iVar10 + 4);
            Sema_Wait(0x36efc0);
            uVar2 = uRam00386628;
            Sema_Signal(0x36efc0,0);
            puVar8 = (uint *)lVar6;
            if (uVar2 < 0x100) {
              puVar8[2] = uVar5;
              uVar1 = *(ushort *)((int)puVar8 + 10);
              iVar9 = *(int *)(iRam004305b8 + (uint)(ushort)puVar8[2] * 0xc + 0x48);
              iVar4 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),
                                       (uint)(ushort)puVar8[2] * 2 + 0xc,0);
              iVar4 = *(int *)(iVar4 + (uint)uVar1 * 4);
              if (iVar4 < 0) {
                bVar7 = false;
              }
              else {
                *puVar8 = *puVar8 & 0xfffffffb;
                *puVar8 = *puVar8 | 1;
                uVar5 = Arc_LoadFileEx(iVar9 + iVar4,puVar8[3],0x19e660,lVar6,0,0);
                puVar8[4] = uVar5;
                bVar7 = true;
              }
            }
            else {
              bVar7 = false;
            }
            if (bVar7) {
              *puVar8 = *puVar8 | 0x10;
            }
          }
        }
        else {
          *(uint *)lVar6 = *(uint *)lVar6 | 0x10;
        }
      }
      uVar11 = uVar11 + 1;
      iVar10 = iVar10 + 8;
    } while (uVar11 < uVar3);
  }
  uVar3 = 0;
  if (uRam004305cc != 0) {
    iVar9 = 0;
    do {
      puVar8 = (uint *)(iRam004305d0 + iVar9);
      bVar7 = false;
      if (((*puVar8 & 0x10) == 0) && ((*puVar8 & 1) != 0)) {
        bVar7 = true;
      }
      if ((bVar7) && (lVar6 = File_CancelRequest(puVar8[4]), lVar6 != 0)) {
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined2 *)(puVar8 + 2) = 0xffff;
        *(undefined2 *)((int)puVar8 + 10) = 0xffff;
      }
      uVar3 = uVar3 + 1;
      iVar9 = iVar9 + 0x50;
    } while (uVar3 < uRam004305cc);
  }
  return;
}

// 0x0019d490  size 0x8a4
uint CourseStream_UpdateVisibility
               (float param_1,undefined4 param_2,float param_3,undefined4 param_4,float *param_5,
               undefined8 param_6,float *param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iStack_130;
  int iStack_110;
  float *pfStack_100;
  int iStack_e0;
  undefined1 auStack_90 [4];
  float fStack_8c;
  undefined1 auStack_80 [4];
  float fStack_7c;
  undefined1 auStack_70 [8];
  float fStack_68;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  float afStack_50 [2];
  float fStack_48;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  float afStack_30 [4];
  float fStack_20;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
  iVar4 = iRam004305e0;
  uVar3 = uRam004305cc;
  iVar2 = iRam004305b8;
  uVar15 = 0;
  sceVu0CopyVector(auStack_40);
  uStack_3c = 0;
  sceVu0Normalize(auStack_40,auStack_40);
  sceVu0ScaleVector(param_2,afStack_50,auStack_40);
  sceVu0AddVector(afStack_30,afStack_50,param_5);
  fStack_10 = afStack_30[0] - fStack_48;
  fStack_20 = afStack_30[0] + fStack_48;
  fStack_8 = afStack_30[2] + afStack_50[0];
  fStack_18 = afStack_30[2] - afStack_50[0];
  sceVu0CopyVector(afStack_30,param_5);
  uVar14 = 0;
  if (*(int *)(iVar2 + 0x40) != 0) {
    iStack_110 = 0xb;
    iVar13 = iVar4;
    do {
      bVar1 = false;
      uVar11 = 0;
      pfVar8 = pfRam004305d8;
      if (uRam004305c4 != 0) {
        do {
          if ((0.0 <= *pfVar8) && (uVar14 == *(ushort *)(pfVar8 + 1))) {
            bVar1 = true;
            break;
          }
          uVar11 = uVar11 + 1;
          pfVar8 = pfVar8 + 2;
        } while (uVar11 < uRam004305c4);
      }
      if (bVar1) {
        iVar5 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),iStack_110,0);
        uVar11 = 0;
        if (*(int *)(iVar5 + 8) != 1) {
          iStack_130 = 0;
          do {
            iVar17 = iVar5 + iStack_130 + 0x50;
            fVar19 = *(float *)(iVar17 + 0x18) - *(float *)(iVar17 + 0x28);
            fVar18 = *(float *)(iVar17 + 0x10) - *(float *)(iVar17 + 0x20);
            fVar21 = *(float *)(iVar17 + 0x10) - *param_5;
            fVar20 = *(float *)(iVar17 + 0x18) - param_5[2];
            fVar20 = SQRT(fVar21 * fVar21 + fVar20 * fVar20);
            if (param_1 + SQRT(fVar18 * fVar18 + fVar19 * fVar19) < fVar20) {
              if ((fVar20 <= *(float *)(iVar13 + -8)) || (uVar15 != uVar3)) {
                iVar6 = 0;
                pfVar8 = afStack_30;
                do {
                  maybe_sceVu0InterVectorXYZ
                            (auStack_80,pfVar8,afStack_30 + ((iVar6 + 1) % 3) * 4,iVar17 + 0x10);
                  if (0.0 < fStack_7c) {
                    bVar1 = false;
                    goto LAB_0019d8f8;
                  }
                  iVar6 = iVar6 + 1;
                  pfVar8 = pfVar8 + 4;
                } while (iVar6 < 3);
                bVar1 = true;
LAB_0019d8f8:
                if (bVar1) goto LAB_0019d900;
              }
            }
            else {
LAB_0019d900:
              lVar7 = Course_GetGroundHeight(param_5,iVar17 + 0x10);
              if (lVar7 != 0) {
                uVar12 = uVar15;
                if (uVar15 != 0) {
                  iVar17 = iVar4 + uVar15 * 8;
                  do {
                    if (*(float *)(iVar17 + -8) < fVar20) break;
                    uVar12 = uVar12 - 1;
                    iVar17 = iVar17 + -8;
                  } while (uVar12 != 0);
                }
                if (uVar12 < uVar3) {
                  if ((int)uVar12 < (int)uVar15) {
                    puVar9 = (undefined4 *)(iVar4 + uVar15 * 8);
                    uVar10 = uVar15;
                    do {
                      if (uVar10 != uVar3) {
                        *puVar9 = puVar9[-2];
                        puVar9[1] = puVar9[-1];
                      }
                      uVar10 = uVar10 - 1;
                      puVar9 = puVar9 + -2;
                    } while ((int)uVar12 < (int)uVar10);
                  }
                  pfVar8 = (float *)(iVar4 + uVar12 * 8);
                  *pfVar8 = fVar20;
                  *(short *)(pfVar8 + 1) = (short)uVar14;
                  *(short *)((int)pfVar8 + 6) = (short)uVar11;
                }
                if (uVar15 < uVar3) {
                  iVar13 = iVar13 + 8;
                  uVar15 = uVar15 + 1;
                }
              }
            }
            uVar11 = uVar11 + 1;
            iStack_130 = iStack_130 + 0x50;
          } while (uVar11 < *(int *)(iVar5 + 8) - 1U);
        }
      }
      uVar14 = uVar14 + 1;
      iStack_110 = iStack_110 + 2;
    } while (uVar14 < *(uint *)(iVar2 + 0x40));
  }
  sceVu0CopyVector(auStack_60,param_8);
  uStack_5c = 0;
  sceVu0Normalize(auStack_60,auStack_60);
  sceVu0ScaleVector(param_4,auStack_70,auStack_60);
  sceVu0AddVector(afStack_30,auStack_70,param_7);
  fStack_10 = afStack_30[0] - fStack_68;
  fStack_20 = afStack_30[0] + fStack_68;
  sceVu0CopyVector(afStack_30,param_7);
  uVar14 = 0;
  if (*(int *)(iVar2 + 0x40) != 0) {
    iVar13 = 0xb;
    iStack_e0 = iVar4 + uVar15 * 8;
    do {
      bVar1 = false;
      uVar11 = 0;
      pfVar8 = pfRam004305d8;
      if (uRam004305c4 != 0) {
        do {
          if ((0.0 <= *pfVar8) && (uVar14 == *(ushort *)(pfVar8 + 1))) {
            bVar1 = true;
            break;
          }
          uVar11 = uVar11 + 1;
          pfVar8 = pfVar8 + 2;
        } while (uVar11 < uRam004305c4);
      }
      if (bVar1) {
        iVar5 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),iVar13,0);
        uVar11 = 0;
        if (*(int *)(iVar5 + 8) != 1) {
          iVar17 = 0;
          do {
            bVar1 = false;
            uVar12 = 0;
            if (uVar15 != 0) {
              iVar6 = iVar4;
              do {
                if ((uVar14 == *(ushort *)(iVar6 + 4)) && (uVar11 == *(ushort *)(iVar6 + 6))) {
                  pfVar8 = (float *)(iVar4 + uVar12 * 8);
                  iVar6 = iVar5 + iVar17 + 0x50;
                  fVar19 = *(float *)(iVar6 + 0x10) - *param_7;
                  fVar18 = *(float *)(iVar6 + 0x18) - param_7[2];
                  fVar18 = SQRT(fVar19 * fVar19 + fVar18 * fVar18);
                  if (fVar18 < *pfVar8) {
                    *pfVar8 = fVar18;
                  }
                  bVar1 = true;
                  break;
                }
                uVar12 = uVar12 + 1;
                iVar6 = iVar6 + 8;
              } while (uVar12 < uVar15);
            }
            if (!bVar1) {
              iVar6 = iVar5 + iVar17 + 0x50;
              fVar19 = *(float *)(iVar6 + 0x18) - *(float *)(iVar6 + 0x28);
              fVar18 = *(float *)(iVar6 + 0x10) - *(float *)(iVar6 + 0x20);
              fVar21 = *(float *)(iVar6 + 0x10) - *param_7;
              fVar20 = *(float *)(iVar6 + 0x18) - param_7[2];
              fVar20 = SQRT(fVar21 * fVar21 + fVar20 * fVar20);
              if (param_3 + SQRT(fVar18 * fVar18 + fVar19 * fVar19) < fVar20) {
                if ((fVar20 <= *(float *)(iStack_e0 + -8)) || (uVar15 != uVar3)) {
                  pfStack_100 = afStack_30;
                  iVar16 = 0;
                  do {
                    maybe_sceVu0InterVectorXYZ
                              (auStack_90,pfStack_100,afStack_30 + ((iVar16 + 1) % 3) * 4,
                               iVar6 + 0x10);
                    if (0.0 < fStack_8c) {
                      bVar1 = false;
                      goto LAB_0019dc30;
                    }
                    iVar16 = iVar16 + 1;
                    pfStack_100 = pfStack_100 + 4;
                  } while (iVar16 < 3);
                  bVar1 = true;
LAB_0019dc30:
                  if (bVar1) goto LAB_0019dc38;
                }
              }
              else {
LAB_0019dc38:
                lVar7 = Course_GetGroundHeight(param_7,iVar6 + 0x10);
                if (lVar7 != 0) {
                  uVar12 = uVar15;
                  if (uVar15 != 0) {
                    iVar6 = iVar4 + uVar15 * 8;
                    do {
                      if (*(float *)(iVar6 + -8) < fVar20) break;
                      uVar12 = uVar12 - 1;
                      iVar6 = iVar6 + -8;
                    } while (uVar12 != 0);
                  }
                  if (uVar12 < uVar3) {
                    if ((int)uVar12 < (int)uVar15) {
                      puVar9 = (undefined4 *)(iVar4 + uVar15 * 8);
                      uVar10 = uVar15;
                      do {
                        if (uVar10 != uVar3) {
                          *puVar9 = puVar9[-2];
                          puVar9[1] = puVar9[-1];
                        }
                        uVar10 = uVar10 - 1;
                        puVar9 = puVar9 + -2;
                      } while ((int)uVar12 < (int)uVar10);
                    }
                    pfVar8 = (float *)(iVar4 + uVar12 * 8);
                    *pfVar8 = fVar20;
                    *(short *)(pfVar8 + 1) = (short)uVar14;
                    *(short *)((int)pfVar8 + 6) = (short)uVar11;
                  }
                  if (uVar15 < uVar3) {
                    uVar15 = uVar15 + 1;
                    iStack_e0 = iStack_e0 + 8;
                  }
                }
              }
            }
            uVar11 = uVar11 + 1;
            iVar17 = iVar17 + 0x50;
          } while (uVar11 < *(int *)(iVar5 + 8) - 1U);
        }
      }
      uVar14 = uVar14 + 1;
      iVar13 = iVar13 + 2;
    } while (uVar14 < *(uint *)(iVar2 + 0x40));
  }
  return uVar15;
}

// 0x0019dd50  size 0x340
/* WARNING: Removing unreachable block (ram,0x0019de0c) */

int CourseStream_FindBlock(int param_1,int param_2,float *param_3,int param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  int iStack_20;
  
  lVar4 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),10,1);
  iStack_20 = 0;
  iVar6 = 0;
  if (0 < param_2) {
    if (8 < param_2) {
      bVar1 = false;
      if ((-1 < param_2) && (param_2 < 0x7fffffff)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = param_1;
        do {
          *(undefined4 *)(iVar5 + 0xc) = 0x7f7fffff;
          iVar6 = iVar6 + 8;
          *(undefined4 *)(iVar5 + 0x1c) = 0x7f7fffff;
          *(undefined4 *)(iVar5 + 0x2c) = 0x7f7fffff;
          *(undefined4 *)(iVar5 + 0x3c) = 0x7f7fffff;
          *(undefined4 *)(iVar5 + 0x4c) = 0x7f7fffff;
          *(undefined4 *)(iVar5 + 0x5c) = 0x7f7fffff;
          *(undefined4 *)(iVar5 + 0x6c) = 0x7f7fffff;
          *(undefined4 *)(iVar5 + 0x7c) = 0x7f7fffff;
          iVar5 = iVar5 + 0x80;
        } while (iVar6 < param_2 + -8);
      }
    }
    if (iVar6 < param_2) {
      iVar5 = param_1 + iVar6 * 0x10;
      do {
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar5 + 0xc) = 0x7f7fffff;
        iVar5 = iVar5 + 0x10;
      } while (iVar6 < param_2);
    }
  }
  if (lVar4 != 0) {
    piVar10 = (int *)lVar4;
    uVar9 = 0;
    if (piVar10[2] != 0) {
      piVar2 = piVar10;
      do {
        iVar6 = piVar2[4];
        if ((iVar6 <= param_4 + param_5) && (param_4 - param_5 <= iVar6)) {
          iVar6 = 0;
          fVar11 = SQRT(((float)piVar2[5] - *param_3) * ((float)piVar2[5] - *param_3) +
                        ((float)piVar2[7] - param_3[2]) * ((float)piVar2[7] - param_3[2]));
          if (0 < param_2) {
            iVar5 = param_1;
LAB_0019df40:
            if (*(float *)(iVar5 + 0xc) <= fVar11) goto LAB_0019df98;
            iVar5 = param_2 + -1;
            if (iVar6 < iVar5) {
              iVar8 = iVar5 * 0x10;
              iVar7 = param_1 + iVar8;
              do {
                sceVu0CopyVector(iVar7,param_1 + iVar8 + -0x10);
                iVar5 = iVar5 + -1;
                iVar8 = iVar8 + -0x10;
                iVar7 = iVar7 + -0x10;
              } while (iVar6 < iVar5);
            }
            piVar3 = (int *)(param_1 + iVar6 * 0x10);
            *piVar3 = piVar2[5];
            piVar3[1] = piVar2[6];
            piVar3[2] = piVar2[7];
            piVar3[3] = (int)fVar11;
          }
        }
LAB_0019dfa8:
        uVar9 = uVar9 + 1;
        piVar2 = piVar2 + 4;
      } while (uVar9 < (uint)piVar10[2]);
    }
  }
  iVar6 = 0;
  if (0 < param_2) {
    do {
      if (*(float *)(param_1 + 0xc) != 3.4028235e+38) {
        *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
        iStack_20 = iStack_20 + 1;
      }
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 0x10;
    } while (iVar6 < param_2);
  }
  return iStack_20;
LAB_0019df98:
  iVar6 = iVar6 + 1;
  iVar5 = iVar5 + 0x10;
  if (param_2 <= iVar6) goto LAB_0019dfa8;
  goto LAB_0019df40;
}

// 0x0019e0a0  size 0x518
undefined4 Course_GetGroundHeight(float *param_1,float *param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 in_vf0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float afStack_d0 [4];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [4];
  float fStack_8c;
  undefined1 auStack_80 [4];
  float fStack_7c;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  float afStack_20 [3];
  undefined4 uStack_14;
  float afStack_10 [3];
  undefined4 uStack_4;
  
  uVar5 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),8,0);
  afStack_10[0] = *param_1;
  afStack_10[1] = 0.0;
  afStack_10[2] = param_1[2];
  uStack_4 = 0x3f800000;
  afStack_20[0] = *param_2;
  afStack_20[1] = 0.0;
  afStack_20[2] = param_2[2];
  uStack_14 = 0x3f800000;
  if (afStack_10[0] < afStack_20[0]) {
    fVar14 = afStack_20[0];
  }
  else {
    fVar14 = afStack_10[0];
  }
  fVar12 = afStack_20[0];
  if (afStack_10[0] <= afStack_20[0]) {
    fVar12 = afStack_10[0];
  }
  if (afStack_10[2] < afStack_20[2]) {
    fVar13 = afStack_20[2];
  }
  else {
    fVar13 = afStack_10[2];
  }
  fVar11 = afStack_20[2];
  if (afStack_10[2] <= afStack_20[2]) {
    fVar11 = afStack_10[2];
  }
  maybe_sceVu0InterVectorDist(auStack_30,afStack_20,afStack_10);
  uVar8 = 0;
  if (*(uint *)uVar5 != 0) {
    fVar3 = -1.0;
    do {
      iVar4 = Gut_PackGetEntry(uVar5,uVar8,0);
      iVar7 = iVar4 + 0x30;
      if ((((*(float *)(iVar4 + 0x10) <= fVar14) && (fVar12 <= *(float *)(iVar4 + 0x20))) &&
          (*(float *)(iVar4 + 0x18) <= fVar13)) && (fVar11 <= *(float *)(iVar4 + 0x28))) {
        fStack_40 = *(float *)(iVar4 + 0x10) - afStack_10[0];
        fStack_50 = *(float *)(iVar4 + 0x20) - afStack_10[0];
        fStack_38 = *(float *)(iVar4 + 0x18) - afStack_10[2];
        fStack_48 = *(float *)(iVar4 + 0x28) - afStack_10[2];
        auVar15 = _lqc2(auStack_30);
        auVar16._4_4_ = uStack_3c;
        auVar16._0_4_ = fStack_40;
        auVar16._8_4_ = fStack_38;
        auVar16._12_4_ = uStack_34;
        auVar16 = _lqc2(auVar16);
        _vmul(in_vf0,in_vf0);
        auVar17 = _vmul(auVar15,auVar16);
        auVar17 = _vaddbc(auVar17,auVar17);
        auVar15 = _vmulbc(auVar15,auVar17);
        auVar15 = _vsub(auVar15,auVar16);
        auStack_60 = _sqc2(auVar15);
        auVar16 = _lqc2(auStack_30);
        auVar15._4_4_ = uStack_4c;
        auVar15._0_4_ = fStack_50;
        auVar15._8_4_ = fStack_48;
        auVar15._12_4_ = uStack_44;
        auVar15 = _lqc2(auVar15);
        _vmul(in_vf0,in_vf0);
        auVar17 = _vmul(auVar16,auVar15);
        auVar17 = _vaddbc(auVar17,auVar17);
        auVar16 = _vmulbc(auVar16,auVar17);
        auVar15 = _vsub(auVar16,auVar15);
        auStack_70 = _sqc2(auVar15);
        fVar9 = (float)sceVu0InnerProduct();
        if (0.0 < fVar9) {
          fStack_38 = fStack_48;
          auVar15 = _lqc2(auStack_30);
          auVar17._4_4_ = uStack_3c;
          auVar17._0_4_ = fStack_40;
          auVar17._8_4_ = fStack_48;
          auVar17._12_4_ = uStack_34;
          auVar16 = _lqc2(auVar17);
          _vmul(in_vf0,in_vf0);
          auVar17 = _vmul(auVar15,auVar16);
          auVar17 = _vaddbc(auVar17,auVar17);
          auVar15 = _vmulbc(auVar15,auVar17);
          auVar15 = _vsub(auVar15,auVar16);
          auStack_70 = _sqc2(auVar15);
          fVar9 = (float)sceVu0InnerProduct(auStack_70,auStack_60);
          if (0.0 < fVar9) {
            fStack_48 = *(float *)(iVar4 + 0x18) - afStack_10[2];
            auVar15 = _lqc2(auStack_30);
            auVar2._4_4_ = uStack_4c;
            auVar2._0_4_ = fStack_50;
            auVar2._8_4_ = fStack_48;
            auVar2._12_4_ = uStack_44;
            auVar16 = _lqc2(auVar2);
            _vmul(in_vf0,in_vf0);
            auVar17 = _vmul(auVar15,auVar16);
            auVar17 = _vaddbc(auVar17,auVar17);
            auVar15 = _vmulbc(auVar15,auVar17);
            auVar15 = _vsub(auVar15,auVar16);
            auStack_70 = _sqc2(auVar15);
            fVar9 = (float)sceVu0InnerProduct(auStack_70,auStack_60);
            if (0.0 < fVar9) goto LAB_0019e558;
          }
        }
        uVar6 = 0;
        fVar9 = fVar3;
        if (*(int *)(iVar4 + 8) != 0) {
          do {
            maybe_sceVu0InterVectorXYZ(auStack_80,iVar7,afStack_10,afStack_20);
            if (0.0 < fStack_7c) {
              bVar1 = false;
            }
            else {
              maybe_sceVu0InterVectorXYZ(auStack_90,iVar7 + 0x10,afStack_10,afStack_20);
              if (0.0 <= fStack_7c * fStack_8c) {
                bVar1 = false;
              }
              else {
                maybe_sceVu0InterVectorXYZ(auStack_80,afStack_10,iVar7,iVar7 + 0x10);
                if (fStack_7c < 0.0) {
                  bVar1 = false;
                }
                else {
                  maybe_sceVu0InterVectorXYZ(auStack_90,afStack_20,iVar7,iVar7 + 0x10);
                  if (0.0 <= fStack_7c * fStack_8c) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                }
              }
            }
            fVar3 = fVar9;
            if (bVar1) {
              sceVu0SubVector(afStack_d0,iVar7 + 0x10,iVar7);
              afStack_d0[1] = 0.0;
              sceVu0Normalize(auStack_c0,afStack_d0);
              sceVu0SubVector(auStack_b0,afStack_10,iVar7);
              uStack_ac = 0;
              fVar10 = (float)sceVu0InnerProduct(auStack_c0,auStack_b0);
              sceVu0ScaleVector(fVar10,auStack_a0,auStack_c0);
              fVar3 = fVar9;
              if ((0.0 <= fVar10) &&
                 (fVar10 * fVar10 <= afStack_d0[0] * afStack_d0[0] + afStack_d0[2] * afStack_d0[2]))
              {
                fVar9 = (float)Vu0_Vec3Distance(auStack_c0,auStack_b0,auStack_a0);
              }
              if ((fVar9 <= 0.0) || (6.0 <= fVar9)) {
                return 0;
              }
            }
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 0x20;
            fVar9 = fVar3;
          } while (uVar6 < *(uint *)(iVar4 + 8));
        }
      }
LAB_0019e558:
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)uVar5);
  }
  return 1;
}

// 0x0019e5d0  size 0x3c
void CourseStream_FreeAll(void)

{
  BlockPool_ResetB(uRam004305c8,uRam004305c4);
  BlockPool_ResetA(uRam004305d0,uRam004305cc);
  return;
}

// 0x0019e610  size 0x50
void CourseStream_Update(undefined8 param_1)

{
  BlockPool_TouchB(uRam004305c8,uRam004305c4,param_1);
  BlockPool_TouchA(uRam004305d0,uRam004305cc,param_1);
  return;
}

// 0x0019e660  size 0x284
void CourseStream_OnModelLoaded(void)

{
  bool bVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  uint *in_a3_lo;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  
  bVar1 = false;
  uVar8 = 0;
  pfVar9 = (float *)(in_a3_lo + 0xd);
  pfVar6 = (float *)(in_a3_lo + 9);
  pfVar5 = (float *)(in_a3_lo + 10);
  pfVar10 = (float *)(in_a3_lo + 0xe);
  do {
    lVar3 = Gut_PackGetEntry(in_a3_lo[3],uVar8 & 0xff,1);
    if (lVar3 != 0) {
      Model_Relocate(lVar3);
      uVar7 = 0;
      if (*(int *)((int)lVar3 + 0x24) != 0) {
        do {
          puVar2 = (uint *)Model_GetTexture(lVar3,uVar7);
          if ((*puVar2 & 0x10) == 0) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = puVar2 + 0x14;
          }
          if (puVar4 != (uint *)0x0) {
            if (bVar1) {
              fVar11 = (float)puVar2[8] + (float)puVar4[4];
              if ((float)in_a3_lo[8] <= (float)puVar2[8] + (float)puVar4[4]) {
                fVar11 = (float)in_a3_lo[8];
              }
              in_a3_lo[8] = (uint)fVar11;
              if ((float)puVar2[9] + (float)puVar4[5] < *pfVar6) {
                *pfVar6 = (float)puVar2[9] + (float)puVar4[5];
              }
              else {
                *pfVar6 = *pfVar6;
              }
              if ((float)puVar2[10] + (float)puVar4[6] < *pfVar5) {
                *pfVar5 = (float)puVar2[10] + (float)puVar4[6];
              }
              else {
                *pfVar5 = *pfVar5;
              }
              fVar11 = (float)puVar2[8] + (float)puVar4[8];
              if ((float)puVar2[8] + (float)puVar4[8] <= (float)in_a3_lo[0xc]) {
                fVar11 = (float)in_a3_lo[0xc];
              }
              in_a3_lo[0xc] = (uint)fVar11;
              fVar11 = (float)puVar2[9] + (float)puVar4[9];
              if ((float)puVar2[9] + (float)puVar4[9] <= *pfVar9) {
                fVar11 = *pfVar9;
              }
              *pfVar9 = fVar11;
              fVar11 = (float)puVar2[10] + (float)puVar4[10];
              if ((float)puVar2[10] + (float)puVar4[10] <= *pfVar10) {
                fVar11 = *pfVar10;
              }
              *pfVar10 = fVar11;
            }
            else {
              bVar1 = true;
              in_a3_lo[8] = (uint)((float)puVar2[8] + (float)puVar4[4]);
              *pfVar6 = (float)puVar2[9] + (float)puVar4[5];
              *pfVar5 = (float)puVar2[10] + (float)puVar4[6];
              in_a3_lo[0xb] = puVar2[0xb];
              in_a3_lo[0xc] = (uint)((float)puVar2[8] + (float)puVar4[8]);
              *pfVar9 = (float)puVar2[9] + (float)puVar4[9];
              *pfVar10 = (float)puVar2[10] + (float)puVar4[10];
              in_a3_lo[0xf] = puVar2[0xb];
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)((int)lVar3 + 0x24));
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  *in_a3_lo = *in_a3_lo & 0xfffffffe;
  *in_a3_lo = *in_a3_lo | 6;
  return;
}

// 0x0019e8f0  size 0x21c
void CourseStream_OnTextureLoaded(void)

{
  long lVar1;
  uint *in_a3_lo;
  
  lVar1 = Gut_PackGetEntry(in_a3_lo[3],3,1);
  if (lVar1 == 0) {
    in_a3_lo[6] = 0;
    in_a3_lo[10] = 0;
  }
  else {
    Tex_Relocate(lVar1);
    in_a3_lo[6] = (uint)*(ushort *)((int)lVar1 + 6);
    in_a3_lo[10] = 0;
    if (in_a3_lo[9] != 0) {
      Pkt_AddTextureUploadAll(in_a3_lo + 8,lVar1,in_a3_lo[7],in_a3_lo[7]);
    }
    TexSlot_Bind(in_a3_lo[0xc],lVar1,0,in_a3_lo[7],in_a3_lo[7],0x51010,0,0);
  }
  lVar1 = Gut_PackGetEntry(in_a3_lo[3],4,1);
  if (lVar1 == 0) {
    in_a3_lo[0xe] = 0;
    in_a3_lo[0x12] = 0;
  }
  else {
    Tex_Relocate(lVar1);
    in_a3_lo[0xe] = (uint)*(ushort *)((int)lVar1 + 6);
    in_a3_lo[0x12] = 0;
    if (in_a3_lo[0x11] != 0) {
      Pkt_AddTextureUploadAll(in_a3_lo + 0x10,lVar1,in_a3_lo[0xf],in_a3_lo[0xf]);
    }
    TexSlot_Bind(in_a3_lo[0x14],lVar1,1,in_a3_lo[0xf],in_a3_lo[0xf],0x51010,0,0);
  }
  lVar1 = Gut_PackGetEntry(in_a3_lo[3],5,1);
  if (lVar1 == 0) {
    in_a3_lo[0x16] = 0;
    in_a3_lo[0x1a] = 0;
  }
  else {
    Tex_Relocate(lVar1);
    in_a3_lo[0x16] = (uint)*(ushort *)((int)lVar1 + 6);
    in_a3_lo[0x1a] = 0;
    if (in_a3_lo[0x19] != 0) {
      Pkt_AddTextureUploadAll(in_a3_lo + 0x18,lVar1,in_a3_lo[0x17],in_a3_lo[0x17]);
    }
    TexSlot_Bind(in_a3_lo[0x1c],lVar1,1,in_a3_lo[0x17],in_a3_lo[0x17],0x51010,0,0);
  }
  *in_a3_lo = *in_a3_lo & 0xfffffffe;
  *in_a3_lo = *in_a3_lo | 6;
  return;
}

// 0x0019eb10  size 0xbc
void CourseStream_OnTextureReady(void)

{
  int iVar1;
  int in_a3_lo;
  
  iVar1 = *(int *)(in_a3_lo + 0xc);
  if (iVar1 == 0) {
    *(undefined4 *)(in_a3_lo + 0x1c) = 0;
    *(undefined4 *)(in_a3_lo + 0x2c) = 0;
  }
  else {
    Tex_Relocate(iVar1);
    *(uint *)(in_a3_lo + 0x1c) = (uint)*(ushort *)(iVar1 + 6);
    *(undefined4 *)(in_a3_lo + 0x2c) = 0;
    if (*(int *)(in_a3_lo + 0x28) != 0) {
      Pkt_AddTextureUploadAll
                (in_a3_lo + 0x24,iVar1,*(undefined4 *)(in_a3_lo + 0x20),
                 *(undefined4 *)(in_a3_lo + 0x20));
    }
    TexSlot_Bind(*(undefined4 *)(in_a3_lo + 0x34),iVar1,1,*(undefined4 *)(in_a3_lo + 0x20),
                 *(undefined4 *)(in_a3_lo + 0x20),0x51010,0,0);
  }
  return;
}

// 0x0019ebd0  size 0x668
void CourseStream_OnBlockLoaded(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_a3_lo;
  uint uVar6;
  uint uVar7;
  
  lVar3 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),0,0);
  if (lVar3 == 0) {
    *(undefined4 *)(in_a3_lo + 0x18) = 0;
    *(undefined4 *)(in_a3_lo + 0x28) = 0;
  }
  else {
    Tex_Relocate(lVar3);
    *(uint *)(in_a3_lo + 0x18) = (uint)*(ushort *)((int)lVar3 + 6);
    *(undefined4 *)(in_a3_lo + 0x28) = 0;
    if (*(int *)(in_a3_lo + 0x24) != 0) {
      Pkt_AddTextureUploadAll
                (in_a3_lo + 0x20,lVar3,*(undefined4 *)(in_a3_lo + 0x1c),
                 *(undefined4 *)(in_a3_lo + 0x1c));
    }
    TexSlot_Bind(*(undefined4 *)(in_a3_lo + 0x30),lVar3,1,*(undefined4 *)(in_a3_lo + 0x1c),
                 *(undefined4 *)(in_a3_lo + 0x1c),0x51010,0,0);
  }
  lVar3 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),1,0);
  if (lVar3 == 0) {
    *(undefined4 *)(in_a3_lo + 0x38) = 0;
    *(undefined4 *)(in_a3_lo + 0x48) = 0;
  }
  else {
    Tex_Relocate(lVar3);
    *(uint *)(in_a3_lo + 0x38) = (uint)*(ushort *)((int)lVar3 + 6);
    *(undefined4 *)(in_a3_lo + 0x48) = 0;
    if (*(int *)(in_a3_lo + 0x44) != 0) {
      Pkt_AddTextureUploadAll
                (in_a3_lo + 0x40,lVar3,*(undefined4 *)(in_a3_lo + 0x3c),
                 *(undefined4 *)(in_a3_lo + 0x3c));
    }
    TexSlot_Bind(*(undefined4 *)(in_a3_lo + 0x50),lVar3,0,*(undefined4 *)(in_a3_lo + 0x3c),
                 *(undefined4 *)(in_a3_lo + 0x3c),0x51010,0,0);
  }
  lVar3 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),2,0);
  if (lVar3 == 0) {
    *(undefined4 *)(in_a3_lo + 0x58) = 0;
    *(undefined4 *)(in_a3_lo + 0x68) = 0;
  }
  else {
    Tex_Relocate(lVar3);
    *(uint *)(in_a3_lo + 0x58) = (uint)*(ushort *)((int)lVar3 + 6);
    *(undefined4 *)(in_a3_lo + 0x68) = 0;
    if (*(int *)(in_a3_lo + 100) != 0) {
      Pkt_AddTextureUploadAll
                (in_a3_lo + 0x60,lVar3,*(undefined4 *)(in_a3_lo + 0x5c),
                 *(undefined4 *)(in_a3_lo + 0x5c));
    }
    TexSlot_Bind(*(undefined4 *)(in_a3_lo + 0x70),lVar3,0,*(undefined4 *)(in_a3_lo + 0x5c),
                 *(undefined4 *)(in_a3_lo + 0x5c),0x51010,0,0);
  }
  lVar3 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),3,0);
  if (lVar3 != 0) {
    uVar4 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),3,0);
    uVar6 = 0;
    if (*(uint *)uVar4 == 0) {
      uVar1 = *(undefined4 *)(in_a3_lo + 0xc);
    }
    else {
      do {
        uVar5 = Gut_PackGetEntry(uVar4,uVar6,0);
        Model_Relocate(uVar5);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)uVar4);
      uVar1 = *(undefined4 *)(in_a3_lo + 0xc);
    }
    uVar4 = Gut_PackGetEntry(uVar1,3,0);
    uVar6 = 0;
    if (*(uint *)uVar4 != 0) {
      do {
        uVar5 = Gut_PackGetEntry(uVar4,uVar6,0);
        uVar7 = 0;
        if (*(int *)((int)uVar5 + 0x24) != 0) {
          do {
            iVar2 = Model_GetTexture(uVar5,uVar7);
            uVar7 = uVar7 + 1;
            *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 2;
          } while (uVar7 < *(uint *)((int)uVar5 + 0x24));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)uVar4);
    }
  }
  lVar3 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),4,0);
  if (lVar3 != 0) {
    uVar4 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),4,0);
    uVar6 = 0;
    if (*(uint *)uVar4 != 0) {
      do {
        uVar5 = Gut_PackGetEntry(uVar4,uVar6,0);
        Model_Relocate(uVar5);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)uVar4);
    }
    uVar4 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),4,0);
    uVar6 = 0;
    if (*(uint *)uVar4 != 0) {
      do {
        uVar5 = Gut_PackGetEntry(uVar4,uVar6,0);
        uVar7 = 0;
        if (*(int *)((int)uVar5 + 0x24) != 0) {
          do {
            iVar2 = Model_GetTexture(uVar5,uVar7);
            uVar7 = uVar7 + 1;
            *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 2;
          } while (uVar7 < *(uint *)((int)uVar5 + 0x24));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)uVar4);
    }
  }
  lVar3 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),5,0);
  if (lVar3 != 0) {
    uVar4 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),5,0);
    uVar6 = 0;
    if (*(uint *)uVar4 != 0) {
      do {
        uVar5 = Gut_PackGetEntry(uVar4,uVar6,0);
        Model_Relocate(uVar5);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)uVar4);
    }
    uVar4 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),5,0);
    uVar6 = 0;
    if (*(uint *)uVar4 != 0) {
      do {
        uVar5 = Gut_PackGetEntry(uVar4,uVar6,0);
        uVar7 = 0;
        if (*(int *)((int)uVar5 + 0x24) != 0) {
          do {
            Model_GetTexture(uVar5,uVar7);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)((int)uVar5 + 0x24));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)uVar4);
    }
  }
  lVar3 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),6,0);
  if (lVar3 != 0) {
    uVar4 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),6,0);
    uVar6 = 0;
    if (*(uint *)uVar4 != 0) {
      do {
        uVar5 = Gut_PackGetEntry(uVar4,uVar6,0);
        Model_Relocate(uVar5);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)uVar4);
    }
    uVar4 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),6,0);
    uVar6 = 0;
    if (*(uint *)uVar4 != 0) {
      do {
        uVar5 = Gut_PackGetEntry(uVar4,uVar6,0);
        uVar7 = 0;
        if (*(int *)((int)uVar5 + 0x24) != 0) {
          do {
            Model_GetTexture(uVar5,uVar7);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)((int)uVar5 + 0x24));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)uVar4);
    }
  }
  if (pcRam00430604 != (code *)0x0) {
    uVar4 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),7,0);
    uVar5 = Gut_PackGetEntry(*(undefined4 *)(in_a3_lo + 0xc),5,0);
    (*pcRam00430604)(uVar5,uVar4,uRam00430608);
  }
  return;
}

// 0x0019f250  size 0x334
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CourseStream_RequestLod
               (undefined4 param_1,undefined4 param_2,byte param_3,undefined8 param_4,long param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  undefined1 *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  float afStack_10 [4];
  
  iVar12 = iRam004305e0;
  iVar10 = *(int *)((uint)param_3 * 4 + _g_Loading + 0x14);
  afStack_10[0] = *(float *)(iVar10 + 0x80) - *(float *)(iVar10 + 0x70);
  afStack_10[1] = 0.0;
  afStack_10[2] = *(float *)(iVar10 + 0x88) - *(float *)(iVar10 + 0x78);
  sceVu0CopyVector(auStack_20);
  uStack_1c = 0;
  if (param_5 == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    sceVu0CopyVector(auStack_30,param_5);
    uStack_2c = 0;
    puVar8 = auStack_30;
  }
  uVar3 = CourseStream_UpdateLod(param_1,param_2,auStack_20,afStack_10,puVar8);
  uVar11 = 0;
  uRam004305dc = uVar3;
  if (uVar3 != 0) {
    do {
      lVar6 = BlockPool_FindB(uRam004305c8,uRam004305c4,*(undefined2 *)(iVar12 + 4));
      if (lVar6 != 0) {
        lVar6 = BlockPool_Find(iRam004305d0,uRam004305cc,*(undefined4 *)(iVar12 + 4));
        if (lVar6 == 0) {
          lVar6 = BlockPool_FindFree(iRam004305d0,uRam004305cc);
          if (lVar6 != 0) {
            uVar5 = *(uint *)(iVar12 + 4);
            Sema_Wait(0x36efc0);
            uVar2 = uRam00386628;
            Sema_Signal(0x36efc0,0);
            puVar9 = (uint *)lVar6;
            if (uVar2 < 0x100) {
              puVar9[2] = uVar5;
              uVar1 = *(ushort *)((int)puVar9 + 10);
              iVar10 = *(int *)(iRam004305b8 + (uint)(ushort)puVar9[2] * 0xc + 0x48);
              iVar4 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),
                                       (uint)(ushort)puVar9[2] * 2 + 0xc,0);
              iVar4 = *(int *)(iVar4 + (uint)uVar1 * 4);
              if (iVar4 < 0) {
                bVar7 = false;
              }
              else {
                *puVar9 = *puVar9 & 0xfffffffb;
                *puVar9 = *puVar9 | 1;
                uVar5 = Arc_LoadFileEx(iVar10 + iVar4,puVar9[3],0x19e660,lVar6,0,0);
                puVar9[4] = uVar5;
                bVar7 = true;
              }
            }
            else {
              bVar7 = false;
            }
            if (bVar7) {
              *puVar9 = *puVar9 | 0x10;
            }
          }
        }
        else {
          *(uint *)lVar6 = *(uint *)lVar6 | 0x10;
        }
      }
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 8;
    } while (uVar11 < uVar3);
  }
  if (((iRam004305b0 == 0) || (param_3 == 1)) && (uVar3 = 0, uRam004305cc != 0)) {
    iVar10 = 0;
    do {
      puVar9 = (uint *)(iRam004305d0 + iVar10);
      bVar7 = false;
      if (((*puVar9 & 0x10) == 0) && ((*puVar9 & 1) != 0)) {
        bVar7 = true;
      }
      if ((bVar7) && (lVar6 = File_CancelRequest(puVar9[4]), lVar6 != 0)) {
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined2 *)(puVar9 + 2) = 0xffff;
        *(undefined2 *)((int)puVar9 + 10) = 0xffff;
      }
      uVar3 = uVar3 + 1;
      iVar10 = iVar10 + 0x50;
    } while (uVar3 < uRam004305cc);
  }
  return;
}

// 0x0019f590  size 0x620
uint CourseStream_UpdateLod
               (float param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  int iStack_d0;
  int iStack_c0;
  int iStack_b0;
  undefined1 auStack_90 [4];
  float fStack_8c;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  float afStack_50 [2];
  float fStack_48;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  float afStack_30 [4];
  float fStack_20;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
  iVar4 = iRam004305e0;
  uVar3 = uRam004305cc;
  iVar2 = iRam004305b8;
  uVar15 = 0;
  sceVu0CopyVector(auStack_40);
  uStack_3c = 0;
  sceVu0Normalize(auStack_40,auStack_40);
  sceVu0ScaleVector(param_2,afStack_50,auStack_40);
  sceVu0AddVector(afStack_30,afStack_50,param_3);
  fStack_10 = afStack_30[0] - fStack_48;
  fStack_20 = afStack_30[0] + fStack_48;
  fStack_8 = afStack_30[2] + afStack_50[0];
  fStack_18 = afStack_30[2] - afStack_50[0];
  sceVu0CopyVector(afStack_30,param_3);
  uVar14 = 0;
  uVar11 = 0;
  if (*(int *)(iVar2 + 0x40) != 0) {
    iStack_c0 = 0xb;
    do {
      bVar1 = false;
      uVar11 = 0;
      pfVar6 = pfRam004305d8;
      if (uRam004305c4 != 0) {
        do {
          if ((0.0 <= *pfVar6) && (uVar14 == *(ushort *)(pfVar6 + 1))) {
            bVar1 = true;
            break;
          }
          uVar11 = uVar11 + 1;
          pfVar6 = pfVar6 + 2;
        } while (uVar11 < uRam004305c4);
      }
      if (bVar1) {
        iVar5 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),iStack_c0,0);
        uVar11 = 0;
        if (*(int *)(iVar5 + 8) != 1) {
          iStack_d0 = 0;
          do {
            iVar17 = iVar5 + iStack_d0 + 0x50;
            iVar7 = iVar17 + 0x10;
            fVar18 = (float)maybe_sceVu0InterVectorDist(auStack_60,iVar7,param_3);
            fVar19 = (float)maybe_sceVu0InterVectorDist(auStack_60,iVar7,iVar17 + 0x20);
            if (param_1 + fVar19 < fVar18) {
              iVar17 = 0;
              pfVar6 = afStack_30;
              do {
                maybe_sceVu0InterVectorXYZ
                          (auStack_90,pfVar6,afStack_30 + ((iVar17 + 1) % 3) * 4,iVar7);
                if (0.0 < fStack_8c) {
                  bVar1 = false;
                  goto LAB_0019f848;
                }
                iVar17 = iVar17 + 1;
                pfVar6 = pfVar6 + 4;
              } while (iVar17 < 3);
              bVar1 = true;
LAB_0019f848:
              if (bVar1) goto LAB_0019f850;
            }
            else {
LAB_0019f850:
              lVar8 = Course_GetGroundHeight(param_3,iVar7);
              if (lVar8 != 0) {
                uVar13 = uVar15;
                if (uVar15 != 0) {
                  iVar17 = iVar4 + uVar15 * 8;
                  do {
                    if (*(float *)(iVar17 + -8) < fVar18) break;
                    uVar13 = uVar13 - 1;
                    iVar17 = iVar17 + -8;
                  } while (uVar13 != 0);
                }
                if (uVar13 < uVar3) {
                  if ((int)uVar13 < (int)uVar15) {
                    puVar9 = (undefined4 *)(iVar4 + uVar15 * 8);
                    uVar12 = uVar15;
                    do {
                      if (uVar12 != uVar3) {
                        *puVar9 = puVar9[-2];
                        puVar9[1] = puVar9[-1];
                      }
                      uVar12 = uVar12 - 1;
                      puVar9 = puVar9 + -2;
                    } while ((int)uVar13 < (int)uVar12);
                  }
                  pfVar6 = (float *)(iVar4 + uVar13 * 8);
                  *pfVar6 = fVar18;
                  *(short *)(pfVar6 + 1) = (short)uVar14;
                  *(short *)((int)pfVar6 + 6) = (short)uVar11;
                }
                if (uVar15 < uVar3) {
                  uVar15 = uVar15 + 1;
                }
              }
            }
            uVar11 = uVar11 + 1;
            iStack_d0 = iStack_d0 + 0x50;
          } while (uVar11 < *(int *)(iVar5 + 8) - 1U);
        }
      }
      uVar14 = uVar14 + 1;
      iStack_c0 = iStack_c0 + 2;
      uVar11 = *(uint *)(iVar2 + 0x40);
    } while (uVar14 < uVar11);
  }
  if (param_5 != 0) {
    uVar13 = 0;
    uVar14 = uVar15;
    if (uVar11 != 0) {
      iStack_b0 = 0xb;
      do {
        iVar5 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),iStack_b0,0);
        uVar11 = 0;
        if (*(int *)(iVar5 + 8) != 1) {
          iVar17 = 0;
          do {
            bVar1 = false;
            uVar12 = 0;
            if (uVar14 != 0) {
              iVar7 = iVar4;
              do {
                if ((uVar13 == *(ushort *)(iVar7 + 4)) && (uVar11 == *(ushort *)(iVar7 + 6))) {
                  fVar18 = (float)maybe_sceVu0InterVectorDist
                                            (auStack_70,iVar5 + iVar17 + 0x60,param_5);
                  pfVar6 = (float *)(iVar4 + uVar12 * 8);
                  if (fVar18 < *pfVar6) {
                    *pfVar6 = fVar18;
                  }
                  bVar1 = true;
                  break;
                }
                uVar12 = uVar12 + 1;
                iVar7 = iVar7 + 8;
              } while (uVar12 < uVar14);
            }
            if (!bVar1) {
              iVar7 = iVar5 + iVar17 + 0x50;
              iVar16 = iVar7 + 0x10;
              fVar18 = (float)maybe_sceVu0InterVectorDist(auStack_80,iVar16,param_5);
              fVar19 = (float)maybe_sceVu0InterVectorDist(auStack_80,iVar16,iVar7 + 0x20);
              if ((fVar18 <= param_1 + fVar19) &&
                 (lVar8 = Course_GetGroundHeight(param_5,iVar16), lVar8 != 0)) {
                uVar12 = uVar14;
                if (uVar14 != uVar15) {
                  iVar7 = iVar4 + uVar14 * 8;
                  do {
                    if (*(float *)(iVar7 + -8) < fVar18) break;
                    uVar12 = uVar12 - 1;
                    iVar7 = iVar7 + -8;
                  } while (uVar12 != uVar15);
                }
                if (uVar12 < uVar3) {
                  if ((int)uVar12 < (int)uVar14) {
                    puVar9 = (undefined4 *)(iVar4 + uVar14 * 8);
                    uVar10 = uVar14;
                    do {
                      if (uVar10 != uVar3) {
                        *puVar9 = puVar9[-2];
                        puVar9[1] = puVar9[-1];
                      }
                      uVar10 = uVar10 - 1;
                      puVar9 = puVar9 + -2;
                    } while ((int)uVar12 < (int)uVar10);
                  }
                  pfVar6 = (float *)(iVar4 + uVar12 * 8);
                  *pfVar6 = fVar18;
                  *(short *)(pfVar6 + 1) = (short)uVar13;
                  *(short *)((int)pfVar6 + 6) = (short)uVar11;
                }
                if (uVar14 < uVar3) {
                  uVar14 = uVar14 + 1;
                }
              }
            }
            uVar11 = uVar11 + 1;
            iVar17 = iVar17 + 0x50;
          } while (uVar11 < *(int *)(iVar5 + 8) - 1U);
        }
        uVar13 = uVar13 + 1;
        iStack_b0 = iStack_b0 + 2;
      } while (uVar13 < *(uint *)(iVar2 + 0x40));
    }
    uVar15 = uVar14;
  }
  return uVar15;
}

// 0x0019fbd0  size 0x22c
void CourseStream_RequestTextures(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = iRam004305d8;
  if (param_3 == 0) {
    param_3 = 0;
  }
  uVar3 = CourseStream_UpdateTextures(param_2,param_3);
  uVar9 = 0;
  uRam004305d4 = uVar3;
  if (uVar3 != 0) {
    do {
      lVar5 = BlockPool_FindB(iRam004305c8,uRam004305c4,*(undefined4 *)(iVar8 + 4));
      if (lVar5 == 0) {
        lVar5 = BlockPool_FindFreeB(iRam004305c8,uRam004305c4);
        if (lVar5 != 0) {
          uVar4 = *(uint *)(iVar8 + 4);
          Sema_Wait(0x36efc0);
          uVar2 = uRam00386628;
          Sema_Signal(0x36efc0,0);
          puVar7 = (uint *)lVar5;
          if (uVar2 < 0x100) {
            puVar7[2] = uVar4;
            uVar1 = *(undefined4 *)(iRam004305b8 + puVar7[2] * 0xc + 0x44);
            *puVar7 = *puVar7 & 0xfffffffb;
            *puVar7 = *puVar7 | 1;
            uVar4 = Arc_LoadFileEx(uVar1,puVar7[3],0x19e8f0,lVar5,0,0);
            puVar7[4] = uVar4;
            *puVar7 = *puVar7 | 0x10;
          }
        }
      }
      else {
        *(uint *)lVar5 = *(uint *)lVar5 | 0x10;
      }
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 8;
    } while (uVar9 < uVar3);
  }
  uVar3 = 0;
  if (uRam004305c4 != 0) {
    iVar8 = 0;
    do {
      puVar7 = (uint *)(iRam004305c8 + iVar8);
      bVar6 = false;
      if (((*puVar7 & 0x10) == 0) && ((*puVar7 & 1) != 0)) {
        bVar6 = true;
      }
      if ((bVar6) && (lVar5 = File_CancelRequest(puVar7[4]), lVar5 != 0)) {
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined2 *)(puVar7 + 2) = 0xffff;
        *(undefined2 *)((int)puVar7 + 10) = 0xffff;
      }
      uVar3 = uVar3 + 1;
      iVar8 = iVar8 + 0x74;
    } while (uVar3 < uRam004305c4);
  }
  return;
}

// 0x0019fe00  size 0x860
uint CourseStream_UpdateTextures(float param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfStack_e0;
  int iStack_c0;
  float *pfStack_b0;
  int iStack_90;
  float afStack_80 [4];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined1 auStack_50 [16];
  float afStack_40 [4];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_10 [16];
  
  iVar5 = iRam004305d8;
  uVar4 = uRam004305c4;
  iVar3 = iRam004305b8;
  uVar16 = 0;
  uVar15 = 0;
  uVar13 = 0;
  if (*(int *)(iRam004305b8 + 0x40) != 0) {
    iStack_c0 = 0xb;
    pfVar17 = (float *)param_2;
    do {
      iVar6 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),iStack_c0,0);
      pfVar14 = (float *)(iVar6 + 0x20);
      bVar1 = true;
      iVar12 = 0;
      fVar18 = *(float *)(iVar6 + 0x10) - *pfVar17;
      fVar20 = pfVar17[2];
      fVar19 = *(float *)(iVar6 + 0x18) - fVar20;
      fVar18 = SQRT(fVar18 * fVar18 + fVar19 * fVar19);
      pfVar7 = pfVar14;
      do {
        if (0.0 < (pfVar14[(iVar12 + 1U & 3) * 4] - *pfVar7) * (pfVar7[2] - fVar20) -
                  ((pfVar14 + (iVar12 + 1U & 3) * 4)[2] - pfVar7[2]) * (*pfVar7 - *pfVar17)) {
          bVar1 = false;
          break;
        }
        iVar12 = iVar12 + 1;
        pfVar7 = pfVar7 + 4;
      } while (iVar12 < 4);
      if (bVar1) {
        fVar19 = 0.0;
      }
      else {
        uVar13 = 0;
        pfVar7 = pfVar14;
        do {
          fVar19 = pfVar7[2] - pfVar17[2];
          fVar19 = SQRT((*pfVar7 - *pfVar17) * (*pfVar7 - *pfVar17) + fVar19 * fVar19);
          if ((fVar19 <= param_1) && (bVar1 = true, fVar19 < fVar18)) {
            fVar18 = fVar19;
          }
          uVar13 = uVar13 + 1;
          pfVar7 = pfVar7 + 4;
        } while (uVar13 < 4);
        if (bVar1) {
          fVar19 = fVar18;
        }
      }
      iVar6 = 0;
      pfStack_e0 = pfVar14;
      do {
        sceVu0SubVector(afStack_40,pfVar14 + (iVar6 + 1U & 3) * 4,pfStack_e0);
        afStack_40[1] = 0.0;
        sceVu0Normalize(auStack_30,afStack_40);
        sceVu0SubVector(auStack_20,param_2,pfStack_e0);
        uStack_1c = 0;
        fVar18 = (float)sceVu0InnerProduct(auStack_30,auStack_20);
        sceVu0ScaleVector(fVar18,auStack_10,auStack_30);
        if (0.0 <= fVar18) {
          if (afStack_40[0] * afStack_40[0] + afStack_40[2] * afStack_40[2] + 0.0 < fVar18 * fVar18)
          {
            fVar18 = -1.0;
          }
          else {
            fVar18 = (float)Vu0_Vec3Distance(auStack_30,auStack_20,auStack_10);
          }
        }
        else {
          fVar18 = -1.0;
        }
        if (((0.0 < fVar18) && (fVar18 < param_1)) && (bVar1 = true, fVar18 < fVar19)) {
          fVar19 = fVar18;
        }
        iVar6 = iVar6 + 1;
        pfStack_e0 = pfStack_e0 + 4;
      } while (iVar6 < 4);
      if (bVar1) {
        uVar13 = uVar16;
        if (uVar16 != 0) {
          iVar6 = iVar5 + uVar16 * 8;
          do {
            if (*(float *)(iVar6 + -8) < fVar19) break;
            uVar13 = uVar13 - 1;
            iVar6 = iVar6 + -8;
          } while (uVar13 != 0);
        }
        if (uVar13 < uVar4) {
          if ((int)uVar13 < (int)uVar16) {
            puVar8 = (undefined4 *)(iVar5 + uVar16 * 8);
            uVar9 = uVar16;
            do {
              if (uVar9 != uVar4) {
                *puVar8 = puVar8[-2];
                puVar8[1] = puVar8[-1];
              }
              uVar9 = uVar9 - 1;
              puVar8 = puVar8 + -2;
            } while ((int)uVar13 < (int)uVar9);
          }
          pfVar7 = (float *)(iVar5 + uVar13 * 8);
          *pfVar7 = fVar19;
          *(short *)(pfVar7 + 1) = (short)uVar15;
          *(undefined2 *)((int)pfVar7 + 6) = 0;
        }
        if (uVar16 < uVar4) {
          uVar16 = uVar16 + 1;
        }
      }
      uVar15 = uVar15 + 1;
      iStack_c0 = iStack_c0 + 2;
      uVar13 = *(uint *)(iVar3 + 0x40);
    } while (uVar15 < uVar13);
  }
  if (((2 < uVar4) && (2 < uVar16)) && (param_3 != 0)) {
    uVar16 = 2;
  }
  if ((param_3 != 0) && (uVar16 != uVar4)) {
    uVar9 = 0;
    uVar15 = uVar16;
    if (uVar13 != 0) {
      iStack_90 = 0xb;
      pfVar7 = (float *)param_3;
      pfVar17 = pfVar7 + 2;
      do {
        iVar6 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),iStack_90,0);
        pfVar14 = (float *)(iVar6 + 0x20);
        bVar2 = true;
        bVar1 = false;
        uVar13 = 0;
        fVar19 = *(float *)(iVar6 + 0x10) - *pfVar7;
        fVar18 = *(float *)(iVar6 + 0x18) - *pfVar17;
        fVar18 = SQRT(fVar19 * fVar19 + fVar18 * fVar18);
        if (uVar15 != 0) {
          iVar6 = iVar5;
          do {
            if (uVar9 == *(ushort *)(iVar6 + 4)) {
              bVar1 = true;
              break;
            }
            uVar13 = uVar13 + 1;
            iVar6 = iVar6 + 8;
          } while (uVar13 < uVar15);
        }
        if (!bVar1) {
          iVar6 = 0;
          pfVar10 = pfVar14;
          do {
            if (0.0 < (pfVar14[(iVar6 + 1U & 3) * 4] - *pfVar10) * (pfVar10[2] - *pfVar17) -
                      ((pfVar14 + (iVar6 + 1U & 3) * 4)[2] - pfVar10[2]) * (*pfVar10 - *pfVar7)) {
              bVar2 = false;
              break;
            }
            iVar6 = iVar6 + 1;
            pfVar10 = pfVar10 + 4;
          } while (iVar6 < 4);
          if (bVar2) {
            fVar19 = 0.0;
          }
          else {
            uVar13 = 0;
            pfVar10 = pfVar14;
            do {
              fVar19 = SQRT((*pfVar10 - *pfVar7) * (*pfVar10 - *pfVar7) +
                            (pfVar10[2] - *pfVar17) * (pfVar10[2] - *pfVar17));
              if ((fVar19 <= param_1) && (bVar2 = true, fVar19 < fVar18)) {
                fVar18 = fVar19;
              }
              uVar13 = uVar13 + 1;
              pfVar10 = pfVar10 + 4;
            } while (uVar13 < 4);
            if (bVar2) {
              fVar19 = fVar18;
            }
          }
          iVar6 = 0;
          pfStack_b0 = pfVar14;
          do {
            sceVu0SubVector(afStack_80,pfVar14 + (iVar6 + 1U & 3) * 4,pfStack_b0);
            afStack_80[1] = 0.0;
            sceVu0Normalize(auStack_70,afStack_80);
            sceVu0SubVector(auStack_60,param_3,pfStack_b0);
            uStack_5c = 0;
            fVar18 = (float)sceVu0InnerProduct(auStack_70,auStack_60);
            sceVu0ScaleVector(fVar18,auStack_50,auStack_70);
            if (0.0 <= fVar18) {
              if (afStack_80[0] * afStack_80[0] + afStack_80[2] * afStack_80[2] + 0.0 <
                  fVar18 * fVar18) {
                fVar18 = -1.0;
              }
              else {
                fVar18 = (float)Vu0_Vec3Distance(auStack_70,auStack_60,auStack_50);
              }
            }
            else {
              fVar18 = -1.0;
            }
            if (((0.0 < fVar18) && (fVar18 < param_1)) && (bVar2 = true, fVar18 < fVar19)) {
              fVar19 = fVar18;
            }
            iVar6 = iVar6 + 1;
            pfStack_b0 = pfStack_b0 + 4;
          } while (iVar6 < 4);
          if (bVar2) {
            uVar13 = uVar15;
            if (uVar15 != uVar16) {
              iVar6 = iVar5 + uVar15 * 8;
              do {
                if (*(float *)(iVar6 + -8) < fVar19) break;
                uVar13 = uVar13 - 1;
                iVar6 = iVar6 + -8;
              } while (uVar13 != uVar16);
            }
            if (uVar13 < uVar4) {
              if ((int)uVar13 < (int)uVar15) {
                puVar8 = (undefined4 *)(iVar5 + uVar15 * 8);
                uVar11 = uVar15;
                do {
                  if (uVar11 != uVar4) {
                    *puVar8 = puVar8[-2];
                    puVar8[1] = puVar8[-1];
                  }
                  uVar11 = uVar11 - 1;
                  puVar8 = puVar8 + -2;
                } while ((int)uVar13 < (int)uVar11);
              }
              pfVar14 = (float *)(iVar5 + uVar13 * 8);
              *pfVar14 = fVar19;
              *(short *)(pfVar14 + 1) = (short)uVar9;
              *(undefined2 *)((int)pfVar14 + 6) = 0;
            }
            if (uVar15 < uVar4) {
              uVar15 = uVar15 + 1;
            }
          }
        }
        uVar9 = uVar9 + 1;
        iStack_90 = iStack_90 + 2;
      } while (uVar9 < *(uint *)(iVar3 + 0x40));
    }
    uVar16 = uVar15;
  }
  return uVar16;
}

