// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002d8000 - 0x002dc000
#include "ghidra_types.h"

// 0x002d8150  size 0x4c8
void showroom_step_sub_002d8150(int param_1,undefined1 *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [192];
  undefined1 auStack_190 [400];
  
  iVar6 = ((uint)(byte)param_2[4] * 0x18 - (uint)(byte)param_2[4]) * 0x40;
  uVar2 = Model_GetTexture(*(undefined4 *)(param_1 + 0x40),0);
  uVar3 = Model_GetTexture(*(undefined4 *)(param_1 + 0x34),0);
  uVar4 = Model_GetTexture(*(undefined4 *)(param_1 + 0x44),0);
  uVar5 = Model_GetTexture(*(undefined4 *)(param_1 + 0x48),0);
  if (*(int *)(iVar6 + 0x431684) != 0) {
    Cam_SetupViewport(&g_Views + iVar6,0,*param_2);
    Light_UpdateMatrices(0x436180);
    Layer_Reset(auStack_250,&g_Views + iVar6,0x436180,*(undefined4 *)(param_2 + 8),
                *(undefined4 *)(param_2 + 0xc));
    uVar7 = *(uint *)(param_1 + 0x70);
    uVar8 = 0;
    if (((int)uVar7 < 0) || (uVar10 = *(uint *)(param_1 + 0x74), (int)uVar10 < 0)) {
      uVar8 = 0xffffffff;
    }
    else {
      if ((int)uVar10 < (int)uVar7) {
        uVar11 = uVar10;
      }
      else {
        uVar11 = uVar7;
      }
      if ((int)uVar10 <= (int)uVar7) {
        uVar10 = uVar7;
      }
      for (; (int)uVar11 < (int)uVar10; uVar11 = uVar11 + 1) {
        uVar8 = uVar8 | 1 << (uVar11 & 0x1f);
      }
    }
    uVar7 = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar7 = uVar8;
    }
    if ((*(uint *)uVar3 & 0x10) == 0) {
      puVar9 = (uint *)0x0;
    }
    else {
      puVar9 = (uint *)uVar3 + 0x14;
    }
    if (puVar9 == (uint *)0x0) {
      uVar10 = 0;
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = puVar9 + 0xc;
      uVar10 = puVar9[3];
    }
    if (uVar10 != 0) {
      uVar10 = uVar10 - 1;
      puVar1 = puVar1 + (puVar1[0x1e] + 1) * 4 + 0x28;
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar11 = 1 << ((uVar10 + 1 >> 1) - 1 & 0x1f);
      if ((uVar10 & 1) == 0) {
        if ((uVar7 & uVar11) == 0) {
          if ((uVar8 & uVar11) == 0) {
            uVar11 = 0x3e800000;
            uVar13 = 0x3e800000;
            uVar12 = 0x3e800000;
          }
          else {
            uVar11 = 0x3f800000;
            uVar13 = 0x3f800000;
            uVar12 = 0x3f800000;
          }
        }
        else {
          uVar11 = 0;
          uVar13 = 0x3eca3d71;
          uVar12 = 0x3f4a3d71;
        }
      }
      else if ((uVar8 & uVar11) == 0) {
        uVar11 = 0x3e800000;
        uVar13 = 0x3e800000;
        uVar12 = 0x3e800000;
      }
      else {
        uVar11 = 0x3f800000;
        uVar13 = 0x3f800000;
        uVar12 = 0x3f800000;
      }
      puVar1[8] = uVar11;
      puVar1[9] = uVar13;
      puVar1[10] = uVar12;
      puVar1 = puVar1 + (puVar1[0x1e] + 1) * 4 + 0x28;
    }
    Layer_Open(auStack_250,0);
    Layer_Open(auStack_250,1);
    maybe_Vu0_UnitMatrix(auStack_190);
    maybe_Vu0_RotMatrixZ(*(undefined4 *)(param_1 + 0x50),auStack_190,auStack_190);
    maybe_Vu0_RotMatrixY(*(undefined4 *)(param_1 + 0x54),auStack_190,auStack_190);
    maybe_Vu0_RotMatrixX(*(undefined4 *)(param_1 + 0x58),auStack_190,auStack_190);
    sceVu0TransMatrix(auStack_190,auStack_190,param_1 + 0x60);
    Model_UpdateNodeMatrix(auStack_250,uVar2);
    Model_UpdateNodeMatrix(auStack_250,uVar3);
    if (*(int *)(param_1 + 0x70) < 0) {
      iVar6 = *(int *)(param_1 + 0x74);
    }
    else {
      sceVu0CopyVector(auStack_260,
                       *(int **)(param_1 + 0x3c) +
                       **(int **)(param_1 + 0x3c) * 4 + *(int *)(param_1 + 0x70) * 8 + 4);
      maybe_Vu0_UnitMatrix(auStack_190);
      maybe_Vu0_RotMatrixZ(*(undefined4 *)(param_1 + 0x50),auStack_190,auStack_190);
      maybe_Vu0_RotMatrixY(*(undefined4 *)(param_1 + 0x54),auStack_190,auStack_190);
      maybe_Vu0_RotMatrixX(*(undefined4 *)(param_1 + 0x58),auStack_190,auStack_190);
      sceVu0TransMatrix(auStack_190,auStack_190,auStack_260);
      Model_UpdateNodeMatrix(auStack_250,uVar4);
      iVar6 = *(int *)(param_1 + 0x74);
    }
    if (-1 < iVar6) {
      sceVu0CopyVector(auStack_270,
                       *(int **)(param_1 + 0x3c) + **(int **)(param_1 + 0x3c) * 4 + iVar6 * 8 + 4);
      maybe_Vu0_UnitMatrix(auStack_190);
      maybe_Vu0_RotMatrixZ(*(undefined4 *)(param_1 + 0x50),auStack_190,auStack_190);
      maybe_Vu0_RotMatrixY(*(undefined4 *)(param_1 + 0x54),auStack_190,auStack_190);
      maybe_Vu0_RotMatrixX(*(undefined4 *)(param_1 + 0x58),auStack_190,auStack_190);
      sceVu0TransMatrix(auStack_190,auStack_190,auStack_270);
      Model_UpdateNodeMatrix(auStack_250,uVar5);
    }
    Layer_Close(auStack_250,0);
    Layer_Close(auStack_250,1);
  }
  return;
}

// 0x002d8630  size 0x64
void showroom_step_sub_002d8630(int param_1)

{
  course_leaf_sub_001a5a00();
  Chunk_Init(param_1 + 0x28,0x80);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}

// 0x002d86a0  size 0xe8
void showroom_step_sub_002d86a0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  course_leaf_sub_001a5a70(param_4);
  Arena_Alloc(param_4,param_3);
  uVar1 = Gut_PackGetEntry(param_2,0,0);
  iVar2 = (int)param_4;
  *(undefined4 *)(iVar2 + 0x34) = uVar1;
  Model_Relocate(*(undefined4 *)(iVar2 + 0x34));
  uVar1 = Gut_PackGetEntry(param_2,1,0);
  *(undefined4 *)(iVar2 + 0x38) = uVar1;
  uVar1 = Gut_PackGetEntry(param_2,2,0);
  *(undefined4 *)(iVar2 + 0x3c) = uVar1;
  uVar1 = Gut_PackGetEntry(param_2,3,0);
  *(undefined4 *)(iVar2 + 0x40) = uVar1;
  Model_Relocate(*(undefined4 *)(iVar2 + 0x40));
  uVar1 = Gut_PackGetEntry(param_2,4,0);
  *(undefined4 *)(iVar2 + 0x44) = uVar1;
  Model_Relocate(*(undefined4 *)(iVar2 + 0x44));
  uVar1 = Gut_PackGetEntry(param_2,5,0);
  *(undefined4 *)(iVar2 + 0x48) = uVar1;
  Model_Relocate(*(undefined4 *)(iVar2 + 0x48));
  *(undefined4 *)(iVar2 + 8) = 0;
  return;
}

// 0x002d8790  size 0x38
void showroom_leaf_sub_002d8790(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3f800000;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0;
  return;
}

// 0x002d87d0  size 0xac
void showroom_step_sub_002d87d0(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = iRam0036f834;
  iVar5 = iRam0036f834 + 0x90;
  iVar4 = 0;
  if (0 < *(int *)(iRam0036f834 + 0x98)) {
    do {
      uVar3 = showroom_leaf_sub_002d5370(iVar5,iVar4);
      cVar2 = showroom_step_sub_002d5e40(uVar3);
      if (cVar2 == '\x04') {
        AsyncRes_Poll(*(int *)((int)uVar3 + 0x10) + 0x28,0xc);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x98));
  }
  showroom_step_sub_002d7c80();
  return;
}

// 0x002d8880  size 0x24
void showroom_step_sub_002d8880(void)

{
  showroom_exit_sub_002d48e0(7);
  showroom_exit_sub_002d7dd0();
  return;
}

// 0x002d88b0  size 0x40
void showroom_step_sub_002d88b0(undefined8 param_1,undefined8 param_2)

{
  showroom_load_sub_002d7e30(*puRam0036f834,param_1,param_2);
  showroom_load_sub_002d4940(7,param_1);
  return;
}

// 0x002d88f0  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3276e0 */

void screc3276e0_exit_sub_002d88f0(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x002d8910  size 0x200
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3276e0 */

void screc3276e0_update_sub_002d8910(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x578) = 0;
  *(undefined4 *)(iVar4 + 0x580) = 0;
  uVar1 = *(uint *)(_g_MenuMgr + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(_g_MenuMgr + 0x28) = uVar1 | 0x800;
  }
  if (*(int *)(iVar4 + 0x770) != *(int *)(iVar4 + 0x774)) {
    uVar6 = PwInput_GetKeyLabel();
    uVar7 = PwInput_GetKeyLabel(*(undefined4 *)(iVar4 + 0x770));
    PwInput_Init(iVar4 + 0x588,uVar7,*(undefined4 *)(iVar4 + 0x770));
    if ((uVar6 & 0xff) == (uVar7 & 0xff)) {
      uVar3 = *(undefined4 *)(iVar4 + 0x770);
    }
    else {
      PwInput_Open(iVar4 + 0x588);
      uVar3 = *(undefined4 *)(iVar4 + 0x770);
    }
    *(undefined4 *)(iVar4 + 0x774) = uVar3;
    if (*(int *)(iVar4 + 0x770) == 0) {
      *(undefined1 *)(iVar4 + 0x769) = 0;
    }
    else {
      if (*(int *)(iVar4 + 0x770) != 0x12) {
        iVar2 = *(int *)(iVar4 + 0x778);
        goto LAB_002d8994;
      }
      *(undefined1 *)(iVar4 + 0x769) = 1;
    }
  }
  iVar2 = *(int *)(iVar4 + 0x778);
LAB_002d8994:
  if (((iVar2 == 0) || (lVar5 = Menu_IsInputIdle(iVar4 + 0x568), lVar5 == 0)) ||
     (lVar5 = PwInput_IsOpen(iVar4 + 0x588), lVar5 != 0)) {
    UiLayout_UpdateAnimById(0xb3,0);
    uVar3 = PwInput_IsSpecialKey(param_1,*(undefined4 *)(iVar4 + 0x770));
    *(undefined4 *)(iVar4 + 0x76c) = uVar3;
    PwInput_Animate(iVar4 + 0x588);
    PwInput_Update(iVar4 + 0x588);
    iVar4 = UiMgr_FindLayout(0xb3);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    iVar4 = UiMgr_FindLayout(0xb7);
    UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0x15,9,2);
    iVar4 = UiMgr_FindLayout(0xb7);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  }
  return;
}

// 0x002d8b10  size 0xac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3276e0 */

void screc3276e0_enter_sub_002d8b10(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0xfc);
  iVar2 = UiMgr_FindLayout(0xb3);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
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
  Menu_ClearSlot(0);
  return;
}

// 0x002d8bd0  size 0x114
void showroom_select_sub_002d8bd0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  lVar3 = Menu_IsInputIdle(iVar5 + 0x568);
  if (*(int *)(iVar5 + 0x778) == 0) {
    lVar4 = PwInput_IsOpen(iVar5 + 0x588);
    if (lVar4 == 0) {
      uVar2 = SaveUi_Task(param_1,lVar3,1,1);
      *(uint *)(iVar5 + 0x770) = uVar2 & 0xff;
      iVar1 = *(int *)(iVar5 + 0x770);
      if (iVar1 == 3) {
        SaveMgr_Close(param_1);
      }
      else if (iVar1 == 1) {
        SaveMgr_Close(param_1);
        *(undefined4 *)(iVar5 + 0x778) = 1;
      }
      else if (iVar1 == 0) {
        SaveMgr_Open(param_1,0,0,0,0,0,0);
      }
    }
  }
  else if (lVar3 != 0) {
    iRam0036f2b4 = *(byte *)(iRam0036f1d4 + 0x15) + 1;
    MenuMgr_GetScreenParam(0xfffffffffffffffb);
  }
  Save_IsBusy();
  Menu_RequestTransition(iVar5 + 0x568);
  return;
}

// 0x002d8cf0  size 0xa0
void showroom_step_sub_002d8cf0(undefined8 param_1)

{
  int iVar1;
  
  Save_AllocSlots();
  SaveMgr_LoadIcon(param_1);
  showroom_leaf_sub_002d8f60(0,0,0);
  showroom_leaf_sub_002d8f50(0x293f50,0x293f40,0x293f30);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x568) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x56c) = 0;
  *(undefined4 *)(iVar1 + 0x570) = 0;
  *(undefined4 *)(iVar1 + 0x578) = 1;
  *(undefined4 *)(iVar1 + 0x584) = 0;
  *(undefined4 *)(iVar1 + 0x57c) = 1;
  *(undefined4 *)(iVar1 + 0x574) = 1;
  *(undefined4 *)(iVar1 + 0x580) = 0;
  PwInput_Clear(iVar1 + 0x588,0,0);
  *(undefined4 *)(iVar1 + 0x778) = 0;
  *(undefined4 *)(iVar1 + 0x770) = 0;
  *(undefined4 *)(iVar1 + 0x774) = 1;
  return;
}

// 0x002d8d90  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void showroom_leaf_sub_002d8d90(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x002d8db0  size 0x78
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void showroom_step_sub_002d8db0(void)

{
  uint uVar1;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  uVar1 = *(uint *)(_g_MenuMgr + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(_g_MenuMgr + 0x28) = uVar1 | 0x800;
  }
  replayui_anim_sub_002db730();
  return;
}

// 0x002d8e40  size 0xa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void showroom_step_sub_002d8e40(int param_1)

{
  long lVar1;
  
  lVar1 = replayui_step_sub_002db3e0();
  if (lVar1 != 1) {
    if (lVar1 == 2) {
      *(undefined4 *)(param_1 + 0x7e4) = 1;
      *(undefined4 *)(param_1 + 0x7e8) = 1;
      if (*(int *)(_g_MenuMgr + 0x24) == 0x20) {
        MenuMgr_GetScreenParam();
      }
      else {
        Game_StartNewCareer();
        MenuMgr_GetScreenParam(0xfffffffffffffffe);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x7e4) = 0;
      *(undefined4 *)(param_1 + 0x7e8) = 1;
      RaceCtx_SetMode(9);
      MenuMgr_GetScreenParam(*(undefined4 *)(_g_MenuMgr + 0x24));
    }
  }
  Save_IsBusy();
  return;
}

// 0x002d8ef0  size 0x60
void showroom_step_sub_002d8ef0(undefined8 param_1)

{
  Save_AllocSlots();
  replayui_leaf_sub_002dbf20(param_1,1,*(undefined1 *)((int)param_1 + 0x779));
  showroom_leaf_sub_002d8f50(0x293f50,0x293f40,0x293f30);
  replayui_anim_sub_002dbc70(param_1);
  replayui_step_sub_002dbb80(param_1);
  return;
}

// 0x002d8f50  size 0x10
void showroom_leaf_sub_002d8f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uRam0036f8a8 = param_2;
  uRam0036f8ac = param_1;
  uRam0036f8b0 = param_3;
  return;
}

// 0x002d8f60  size 0x10
void showroom_leaf_sub_002d8f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uRam0036f898 = param_1;
  uRam0036f89c = param_2;
  uRam0036f8a0 = param_3;
  return;
}

// 0x002d9590  size 0x1f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int replayui_step_sub_002d9590(undefined4 param_1)

{
  int iVar1;
  
  switch(param_1) {
  case 0xb6:
    iVar1 = UiMgr_FindLayout(0x1b);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  case 0xb7:
    iVar1 = UiMgr_FindLayout(0x24);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  default:
    iVar1 = 0;
    break;
  case 0xba:
    iVar1 = UiMgr_FindLayout(0x26);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  case 0xbb:
    iVar1 = UiMgr_FindLayout(0x1c);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  case 0xbc:
    iVar1 = UiMgr_FindLayout(0x1d);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  case 0xbd:
    iVar1 = UiMgr_FindLayout(0x1e);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  case 0xbe:
    iVar1 = UiMgr_FindLayout(0x1f);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  case 0xbf:
    iVar1 = UiMgr_FindLayout(0x20);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  case 0xc0:
    iVar1 = UiMgr_FindLayout(0x21);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  case 0xc2:
    iVar1 = UiMgr_FindLayout(0x22);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  case 0xc3:
    iVar1 = UiMgr_FindLayout(0x23);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
    break;
  case 0xc4:
    iVar1 = UiMgr_FindLayout(0x25);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  }
  return iVar1;
}

// 0x002d9780  size 0x42c
undefined4 replayui_leaf_sub_002d9780(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x1925) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0xac);
  }
  else if (param_1 == 0x1924) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0xa8);
  }
  else if (param_1 == 0x1923) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0xa4);
  }
  else if (param_1 == 0x1922) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0xa0);
  }
  else if (param_1 == 0x1921) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x9c);
  }
  else if (param_1 == 0x1920) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x98);
  }
  else if (param_1 == 0x191f) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x94);
  }
  else if (param_1 == 0x191e) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x90);
  }
  else if (param_1 == 0x69) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x8c);
  }
  else if (param_1 == 0x6b) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x88);
  }
  else if (param_1 == 0x6a) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x84);
  }
  else if (param_1 == 0x68) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x80);
  }
  else if (param_1 == 0x225) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x7c);
  }
  else if (param_1 == 0x224) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x78);
  }
  else if (param_1 == 0x21e) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x74);
  }
  else if (param_1 == 0x21d) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x70);
  }
  else if (param_1 == 0x21c) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x6c);
  }
  else if (param_1 == 0x21b) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x68);
  }
  else if (param_1 == 0x3eb) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 100);
  }
  else if (param_1 == 0x228) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x60);
  }
  else if (param_1 == 0x227) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x5c);
  }
  else if (param_1 == 0x3ea) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x58);
  }
  else if (param_1 == 0x21a) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x54);
  }
  else if (param_1 == 0x219) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x50);
  }
  else if (param_1 == 0x3e9) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x4c);
  }
  else if (param_1 == 0x218) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x48);
  }
  else if (param_1 == 0x217) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x44);
  }
  else if (param_1 == 1000) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x40);
  }
  else if (param_1 == 0x216) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x3c);
  }
  else if (param_1 == 0x215) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x38);
  }
  else if (param_1 == 0x419) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x34);
  }
  else if (param_1 == 0x418) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x30);
  }
  else if (param_1 == 0x41a) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x2c);
  }
  else if (param_1 == 0x106) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x28);
  }
  else if (param_1 == 0x105) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x24);
  }
  else if (param_1 == 0x104) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x20);
  }
  else if (param_1 == 0x103) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x1c);
  }
  else if (param_1 == 0x102) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x18);
  }
  else if (param_1 == 0x101) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x14);
  }
  else if (param_1 == 0x100) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0x10);
  }
  else if (param_1 == 0xff) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 0xc);
  }
  else if (param_1 == 0xfe) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 8);
  }
  else if (param_1 == 0xfd) {
    uVar1 = *(undefined4 *)(*(int *)(iRam0036f8b4 + 0xb4) + 4);
  }
  else if (param_1 == 0x417) {
    uVar1 = **(undefined4 **)(iRam0036f8b4 + 0xb4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002d9bb0  size 0x6c
void replayui_exit_sub_002d9bb0(void)

{
  if (*(int *)(iRam0036f8b4 + 0xb4) != 0) {
    Mem_Free();
    *(undefined4 *)(iRam0036f8b4 + 0xb4) = 0;
  }
  if (*(int *)(iRam0036f8b4 + 0xb0) != 0) {
    Mem_Free();
    *(undefined4 *)(iRam0036f8b4 + 0xb0) = 0;
  }
  if (iRam0036f8b4 != 0) {
    Mem_Free();
    iRam0036f8b4 = 0;
  }
  return;
}

// 0x002d9ca0  size 0x190
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void replayui_load_sub_002d9ca0(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = 0;
  iRam0036f8b4 = Mem_AllocAligned(0xb8,0x40,param_1);
  iVar6 = 0;
  piVar8 = &DAT_00342260;
  iVar5 = 0;
  do {
    iVar3 = *piVar8;
    *(int *)(iRam0036f8b4 + iVar5) = iVar3;
    iVar4 = _g_ArcToc + iVar3 * 0x14;
    iVar3 = *(int *)(iVar4 + 0x20);
    if (iVar3 == 0) {
      uVar2 = *(uint *)(iVar4 + 0x18);
    }
    else {
      uVar2 = iVar3 + 0x7ffU >> 0xb;
    }
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + uVar2 * 0x800;
    piVar8 = piVar8 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar6 < 0x2c);
  uVar1 = Mem_AllocAligned(0xb0,0x40,param_1);
  *(undefined4 *)(iRam0036f8b4 + 0xb4) = uVar1;
  uVar1 = Mem_AllocAligned(iVar7,0x40,param_1);
  iVar6 = 0;
  piVar8 = &DAT_00342260;
  *(undefined4 *)(iRam0036f8b4 + 0xb0) = uVar1;
  iVar5 = *(int *)(iRam0036f8b4 + 0xb0);
  do {
    Arc_LoadFileEx(*piVar8,iVar5,0,0,0,0);
    iVar3 = _g_ArcToc + *piVar8 * 0x14;
    iVar7 = *(int *)(iVar3 + 0x20);
    if (iVar7 == 0) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    else {
      uVar2 = iVar7 + 0x7ffU >> 0xb;
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + uVar2 * 0x800;
    piVar8 = piVar8 + 1;
  } while (iVar6 < 0x2b);
  Arc_LoadFileEx((&DAT_00342260)[iVar6],iVar5,0x2d9c20,0,0,0);
  return;
}

// 0x002d9e30  size 0xaf0
void replayui_draw_sub_002d9e30(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  int iStack_7c0;
  int iStack_7b0;
  undefined1 auStack_7a0 [64];
  undefined1 auStack_760 [64];
  undefined1 auStack_720 [64];
  undefined1 auStack_6e0 [64];
  undefined1 auStack_6a0 [64];
  undefined1 auStack_660 [64];
  undefined1 auStack_620 [64];
  undefined1 auStack_5e0 [64];
  undefined1 auStack_5a0 [64];
  undefined1 auStack_560 [64];
  undefined1 auStack_520 [64];
  undefined1 auStack_4e0 [64];
  undefined1 auStack_4a0 [64];
  undefined1 auStack_460 [64];
  undefined1 auStack_420 [64];
  undefined1 auStack_3e0 [64];
  undefined1 auStack_3a0 [64];
  undefined1 auStack_360 [64];
  undefined1 auStack_320 [64];
  undefined1 auStack_2e0 [64];
  undefined1 auStack_2a0 [64];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [64];
  undefined1 auStack_1e0 [64];
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 auStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pcVar6 = pcRam0036f8b0;
  pcVar5 = pcRam0036f8ac;
  uVar10 = (*pcRam0036f8b0)(0x1e9d);
  uVar11 = (*pcVar5)(0xbf);
  UiElem_GetRect(uVar11,auStack_a0,0x4a);
  UiText_DrawById(auStack_a0,uVar10);
  bVar4 = false;
  if (*(char *)(param_1 + 0x778) == '\x02') {
    bVar4 = *(char *)(param_1 + 0x779) != '\0';
  }
  bVar2 = false;
  if (bVar4) {
    bVar2 = *(int *)(param_1 + 0x7a4) == 0;
  }
  bVar3 = false;
  if (bVar2) {
    bVar3 = *(int *)(param_1 + 0x79c) == 0;
  }
  if (*(char *)(param_1 + 0x7ac) == '\x03') {
    uVar10 = (*pcVar6)(0x59);
    uVar11 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar11,auStack_e0,0x47);
    UiText_DrawById(auStack_e0,uVar10);
    uVar10 = (*pcVar6)(0x59);
    uVar11 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar11,auStack_120,0x48);
    UiText_DrawById(auStack_120,uVar10);
    uVar10 = (*pcVar6)(0x59);
    uVar11 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar11,auStack_160,0x49);
    UiText_DrawById(auStack_160,uVar10);
    uVar10 = (*pcVar6)(0x59);
    uVar11 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar11,auStack_1a0,0x4d);
    UiText_DrawById(auStack_1a0,uVar10);
    uVar10 = (*pcVar6)(0x59);
    uVar11 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar11,auStack_1e0,0x46);
    UiText_DrawById(auStack_1e0,uVar10);
    uVar10 = (*pcVar6)(0x59);
    uVar11 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar11,auStack_220,0x4b);
    UiText_DrawById(auStack_220,uVar10);
    uVar10 = (*pcVar6)(0x59);
    uVar11 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar11,auStack_260,0x4c);
    UiText_DrawById(auStack_260,uVar10);
  }
  else {
    if (bVar4) {
      if (bVar3) {
        iVar8 = Replay_GetHeader();
        iVar9 = *(int *)(iVar8 + 0x18) + 0x4de;
        iStack_7b0 = *(int *)(iVar8 + 0x18) + 0x5c0;
        iStack_7c0 = *(int *)(iVar8 + 0x14) + 0x6a3;
        uVar10 = MsgId_ForOption(*(undefined1 *)(iVar8 + 0x28));
        uStack_7c4 = MsgId_ForSlot(uVar10,0);
        uStack_7c8 = MsgId_OnOff(*(undefined1 *)(iVar8 + 0x29));
        uVar10 = MsgId_ForResult(*(undefined1 *)(iVar8 + 0x2a));
        uVar11 = MsgId_YesNo(*(undefined1 *)(iVar8 + 0x2b));
      }
      else {
        iVar9 = *(int *)(param_1 + 0x7c8) + 0x4de;
        iStack_7b0 = *(int *)(param_1 + 0x7c8) + 0x5c0;
        iStack_7c0 = *(int *)(param_1 + 0x7cc) + 0x6a3;
        uVar10 = MsgId_ForOption(*(undefined1 *)(param_1 + 0x7ad));
        uStack_7c4 = MsgId_ForSlot(uVar10,0);
        uStack_7c8 = MsgId_OnOff(*(undefined1 *)(param_1 + 0x7ae));
        uVar10 = MsgId_ForResult(*(undefined1 *)(param_1 + 0x7af));
        uVar11 = MsgId_YesNo(*(undefined1 *)(param_1 + 0x7b0));
      }
    }
    else {
      iVar9 = MenuText_CarShortName(*(undefined4 *)(param_1 + 0x7c4),0xffffffffffffffff);
      iStack_7b0 = MenuText_CarGrade(*(undefined4 *)(param_1 + 0x7c4),0xffffffffffffffff);
      iStack_7c0 = MenuText_CarNameOrMaker(*(undefined4 *)(param_1 + 0x7c4),0xffffffffffffffff);
      uVar10 = MsgId_ForOption(*(undefined1 *)(param_1 + 0x7ad));
      uStack_7c4 = MsgId_ForSlot(uVar10,0);
      uStack_7c8 = MsgId_OnOff(*(undefined1 *)(param_1 + 0x7ae));
      uVar10 = MsgId_ForResult(*(undefined1 *)(param_1 + 0x7af));
      uVar11 = MsgId_YesNo(*(undefined1 *)(param_1 + 0x7b0));
    }
    uVar7 = (*pcVar6)(iStack_7c0);
    uVar12 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar12,auStack_2a0,0x47);
    UiText_DrawById(auStack_2a0,uVar7);
    uVar7 = (*pcVar6)(iStack_7b0);
    uVar12 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar12,auStack_2e0,0x48);
    UiText_DrawById(auStack_2e0,uVar7);
    uVar12 = (*pcVar6)(iVar9);
    uVar13 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar13,auStack_320,0x49);
    UiText_DrawById(auStack_320,uVar12);
    uVar12 = (*pcVar6)(uStack_7c4);
    uVar13 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar13,auStack_360,0x4d);
    UiText_DrawById(auStack_360,uVar12);
    uVar12 = (*pcVar6)(uStack_7c8);
    uVar13 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar13,auStack_3a0,0x46);
    UiText_DrawById(auStack_3a0,uVar12);
    uVar10 = (*pcVar6)(uVar10);
    uVar12 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar12,auStack_3e0,0x4b);
    UiText_DrawById(auStack_3e0,uVar10);
    uVar10 = (*pcVar6)(uVar11);
    uVar11 = (*pcVar5)(0xbf);
    UiElem_GetRect(uVar11,auStack_420,0x4c);
    UiText_DrawById(auStack_420,uVar10);
    cVar1 = *(char *)(param_1 + 0x779);
    if ((cVar1 == '\x05') || (cVar1 == '\x03')) {
      if ((bVar4) && (bVar3)) {
        iVar8 = Replay_GetHeader();
        uVar7 = *(undefined4 *)(iVar8 + 8);
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x7c0);
      }
      uVar10 = (*pcVar6)(0x1ea0);
      uVar11 = (*pcVar5)(0xc2);
      UiElem_GetRect(uVar11,auStack_7a0,0x11);
      UiText_DrawById(auStack_7a0,uVar10);
      uVar10 = (*pcVar5)(0xc2);
      uVar11 = (*pcVar6)(0x3a);
      PwInput_DrawName(uVar10,0x12,uVar11,uVar7);
    }
    else if ((cVar1 == '\x04') || (cVar1 == '\x02')) {
      if ((bVar4) && (bVar3)) {
        iVar8 = Replay_GetHeader();
        Time_SplitHms(1,*(undefined4 *)(iVar8 + 4),&uStack_4,&uStack_8,&uStack_c);
      }
      else {
        Time_SplitHms(1,*(undefined4 *)(param_1 + 0x7bc),&uStack_4,&uStack_8,&uStack_c);
      }
      uVar10 = (*pcVar6)(0x1e9f);
      uVar11 = (*pcVar5)(0xc2);
      UiElem_GetRect(uVar11,auStack_760,0x11);
      UiText_DrawById(auStack_760,uVar10);
      uVar10 = (*pcVar5)(0xc2);
      uVar11 = (*pcVar6)(0x1e7e);
      PwInput_DrawName(uVar10,0x12,uVar11,uStack_4,uStack_8,uStack_c);
    }
    else if (cVar1 == '\x01') {
      auStack_30[1] = DAT_00342204;
      auStack_30[0] = DAT_00342200;
      auStack_30[3] = DAT_0034220c;
      auStack_30[2] = DAT_00342208;
      uStack_1c = DAT_00342214;
      uStack_20 = DAT_00342210;
      uStack_14 = DAT_0034221c;
      uStack_18 = DAT_00342218;
      uStack_10 = DAT_00342220;
      auStack_60[0] = DAT_00342230;
      auStack_60[2] = DAT_00342238;
      auStack_60[1] = DAT_00342234;
      uStack_4c = DAT_00342244;
      auStack_60[3] = DAT_0034223c;
      uStack_50 = DAT_00342240;
      uStack_48 = DAT_00342248;
      uStack_44 = DAT_0034224c;
      uStack_40 = DAT_00342250;
      if ((bVar4) && (bVar3)) {
        iVar8 = Replay_GetHeader();
        uVar10 = (*pcVar5)(0xc0);
        uVar11 = (*pcVar6)(0x1e9e);
        PwInput_DrawName(uVar10,0x1c,uVar11);
        uVar10 = (*pcVar5)(0xc0);
        uVar11 = (*pcVar6)(0x3a);
        PwInput_DrawName(uVar10,0x20,uVar11,*(undefined4 *)(iVar8 + 0x24));
        if (*(char *)(iVar8 + 0xd) == '\x05') {
          uVar10 = (*pcVar6)(0x356);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_4e0,0x1d);
          UiText_DrawById(auStack_4e0,uVar10);
          uVar10 = (*pcVar6)(auStack_60[*(byte *)(iVar8 + 0x37c)]);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_520,0x1e);
          UiText_DrawById(auStack_520,uVar10);
        }
        else if (*(char *)(iVar8 + 0xd) == '\0') {
          uVar10 = (*pcVar6)(0xe0);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_460,0x1d);
          UiText_DrawById(auStack_460,uVar10);
          uVar10 = (*pcVar6)(auStack_60[*(byte *)(iVar8 + 0x37c)]);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_4a0,0x1e);
          UiText_DrawById(auStack_4a0,uVar10);
        }
        else {
          uVar10 = MsgId_RivalNickname(*(undefined4 *)(iVar8 + 0x1c));
          uVar10 = (*pcVar6)(uVar10);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_560,0x1f);
          UiText_DrawById(auStack_560,uVar10);
          uVar10 = (*pcVar6)(auStack_30[*(byte *)(iVar8 + 0x37c)]);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_5a0,0x1d);
          UiText_DrawById(auStack_5a0,uVar10);
        }
      }
      else {
        uVar10 = (*pcVar5)(0xc0);
        uVar11 = (*pcVar6)(0x1e9e);
        PwInput_DrawName(uVar10,0x1c,uVar11);
        uVar10 = (*pcVar5)(0xc0);
        uVar11 = (*pcVar6)(0x3a);
        PwInput_DrawName(uVar10,0x20,uVar11,*(undefined4 *)(param_1 + 0x7d8));
        if (*(int *)(param_1 + 0x7b4) == 5) {
          uVar10 = (*pcVar6)(0x356);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_660,0x1d);
          UiText_DrawById(auStack_660,uVar10);
          uVar10 = (*pcVar6)(auStack_60[*(int *)(param_1 + 0x7b8)]);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_6a0,0x1e);
          UiText_DrawById(auStack_6a0,uVar10);
        }
        else if (*(int *)(param_1 + 0x7b4) == 0) {
          uVar10 = (*pcVar6)(0xe0);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_5e0,0x1d);
          UiText_DrawById(auStack_5e0,uVar10);
          uVar10 = (*pcVar6)(auStack_60[*(int *)(param_1 + 0x7b8)]);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_620,0x1e);
          UiText_DrawById(auStack_620,uVar10);
        }
        else {
          uVar10 = MsgId_RivalNickname(*(undefined4 *)(param_1 + 2000));
          uVar10 = (*pcVar6)(uVar10);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_6e0,0x1f);
          UiText_DrawById(auStack_6e0,uVar10);
          uVar10 = (*pcVar6)(auStack_30[*(int *)(param_1 + 0x7b8)]);
          uVar11 = (*pcVar5)(0xc0);
          UiElem_GetRect(uVar11,auStack_720,0x1d);
          UiText_DrawById(auStack_720,uVar10);
        }
      }
    }
  }
  return;
}

// 0x002da920  size 0x67c
void replayui_draw_sub_002da920(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  pcVar6 = pcRam0036f8ac;
  piVar12 = (int *)(param_1 + 0x784);
  uVar8 = (*pcRam0036f8ac)(0xc4);
  bVar5 = false;
  if (*(char *)(param_1 + 0x778) == '\x02') {
    bVar5 = *(char *)(param_1 + 0x779) != '\0';
  }
  iVar13 = (int)uVar8;
  if (*(int *)(iVar13 + 0x354) == 1) {
    UiLayout_UpdateAnim(uVar8,3);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x7dc);
    iVar3 = *(int *)(param_1 + 0x7a4);
    if (iVar3 == iVar2) {
      *(undefined4 *)(param_1 + 0x7e0) = 0;
    }
    else {
      if (iVar2 < iVar3) {
        uVar7 = (*pcRam0036f8a8)(0x21e);
        *(undefined4 *)(iVar13 + 0x34c) = 0xffffffff;
        *(undefined4 *)(iVar13 + 0x358) = 0;
        *(undefined4 *)(iVar13 + 0x348) = 0;
        if (*(int *)(iVar13 + 0x358) == 0) {
          *(undefined4 *)(iVar13 + 0x354) = 0;
        }
        else {
          *(undefined4 *)(iVar13 + 0x354) = 1;
        }
        *(undefined4 *)(iVar13 + 0x348) = 0;
        if (*(int *)(iVar13 + 0x358) == 0) {
          *(undefined4 *)(iVar13 + 0x354) = 0;
        }
        else {
          *(undefined4 *)(iVar13 + 0x354) = 1;
        }
        *(undefined4 *)(iVar13 + 0x350) = 0;
        *(undefined4 *)(iVar13 + 0x358) = uVar7;
        *(undefined4 *)(iVar13 + 0x354) = 1;
        *(undefined4 *)(param_1 + 0x7e0) = 1;
      }
      else if (iVar3 < iVar2) {
        uVar7 = (*pcRam0036f8a8)(0x21b);
        *(undefined4 *)(iVar13 + 0x34c) = 0xffffffff;
        *(undefined4 *)(iVar13 + 0x358) = 0;
        *(undefined4 *)(iVar13 + 0x348) = 0;
        if (*(int *)(iVar13 + 0x358) == 0) {
          *(undefined4 *)(iVar13 + 0x354) = 0;
        }
        else {
          *(undefined4 *)(iVar13 + 0x354) = 1;
        }
        *(undefined4 *)(iVar13 + 0x348) = 0;
        if (*(int *)(iVar13 + 0x358) == 0) {
          *(undefined4 *)(iVar13 + 0x354) = 0;
        }
        else {
          *(undefined4 *)(iVar13 + 0x354) = 1;
        }
        *(undefined4 *)(iVar13 + 0x350) = 0;
        *(undefined4 *)(iVar13 + 0x358) = uVar7;
        *(undefined4 *)(iVar13 + 0x354) = 1;
        *(undefined4 *)(param_1 + 0x7e0) = 2;
      }
      *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(param_1 + 0x7a4);
      uVar9 = (*pcVar6)(0xc4);
      PwInput_SetKeyState(uVar9,0x3d,1,0);
      if (*(int *)(iVar13 + 0x354) == 1) {
        UiLayout_UpdateAnim(uVar8,3);
      }
    }
  }
  if (*(int *)(param_1 + 0x7e0) == 1) {
    iVar13 = 2;
    if (!bVar5) {
      iVar13 = 1;
    }
    cVar1 = *(char *)(param_1 + 0x779);
    iVar13 = *(int *)(param_1 + 0x7a4) - iVar13;
    uVar9 = (*pcRam0036f8ac)(0xc4);
    pcVar6 = pcRam0036f8b0;
    if (((cVar1 == '\x03') || (cVar1 == '\x02')) || (cVar1 == '\x01')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar10 = (*pcRam0036f8b0)(0x1e97);
    }
    else {
      uVar10 = (*pcRam0036f8b0)(0x1e98);
    }
    if (iVar13 == -1) {
      uVar10 = (*pcVar6)(0x1e7f);
      UiElem_GetRect(uVar9,auStack_40,DAT_003421b8);
      UiText_DrawById(auStack_40,uVar10);
    }
    else {
      PwInput_DrawName(uVar9,DAT_003421b8,uVar10,iVar13 + 1);
    }
  }
  else if (*(int *)(param_1 + 0x7e0) == 2) {
    cVar1 = *(char *)(param_1 + 0x779);
    iVar13 = (*(int *)(param_1 + 0x7a4) + 6) - (uint)bVar5;
    uVar9 = (*pcRam0036f8ac)(0xc4);
    pcVar6 = pcRam0036f8b0;
    if (((cVar1 == '\x03') || (cVar1 == '\x02')) || (cVar1 == '\x01')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar10 = (*pcRam0036f8b0)(0x1e97);
    }
    else {
      uVar10 = (*pcRam0036f8b0)(0x1e98);
    }
    if (iVar13 == -1) {
      uVar10 = (*pcVar6)(0x1e7f);
      UiElem_GetRect(uVar9,auStack_80,DAT_003421b8);
      UiText_DrawById(auStack_80,uVar10);
    }
    else {
      PwInput_DrawName(uVar9,DAT_003421b8,uVar10,iVar13 + 1);
    }
  }
  else {
    uVar9 = (*pcVar6)(0xc4);
    PwInput_SetKeyState(uVar9,*(undefined4 *)(&DAT_003421c0 + *(int *)(param_1 + 0x79c) * 4),1,0);
  }
  iVar13 = 0;
  puVar14 = &DAT_003421e0;
  puVar11 = &DAT_003421a0;
  while( true ) {
    if (*(int *)(param_1 + 0x7a0) < 7) {
      bVar4 = iVar13 < *(int *)(param_1 + 0x7a0);
    }
    else {
      bVar4 = iVar13 < 6;
    }
    if (!bVar4) break;
    UiElem_SetPropFloat(0x3f800000,uVar8,*puVar14,8);
    iVar2 = *piVar12;
    cVar1 = *(char *)(param_1 + 0x779);
    uVar7 = (*pcRam0036f8ac)(0xc4);
    pcVar6 = pcRam0036f8b0;
    if (((cVar1 == '\x03') || (cVar1 == '\x02')) || (cVar1 == '\x01')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar9 = (*pcRam0036f8b0)(0x1e97);
    }
    else {
      uVar9 = (*pcRam0036f8b0)(0x1e98);
    }
    if (iVar2 == -1) {
      uVar9 = (*pcVar6)(0x1e7f);
      UiElem_GetRect(uVar7,auStack_c0,*puVar11);
      UiText_DrawById(auStack_c0,uVar9);
    }
    else {
      PwInput_DrawName(uVar7,*puVar11,uVar9,iVar2 + 1);
    }
    puVar14 = puVar14 + 1;
    piVar12 = piVar12 + 1;
    puVar11 = puVar11 + 1;
    iVar13 = iVar13 + 1;
  }
  if (iVar13 < 6) {
    puVar11 = &DAT_003421e0 + iVar13;
    do {
      UiElem_SetPropFloat(0,uVar8,*puVar11,8);
      iVar13 = iVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar13 < 6);
    cVar1 = *(char *)(param_1 + 0x768);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x768);
  }
  if (cVar1 == -1) {
    PwInput_AnimateCursor(1);
    if (*(int *)(param_1 + 0x7a8) < 7) {
      UiElem_SetPropFloat(0,uVar8,0x42,8);
      UiElem_SetPropFloat(0,uVar8,0x43,8);
    }
    else if (*(int *)(param_1 + 0x7a4) == 0) {
      UiElem_SetPropFloat(0,uVar8,0x42,8);
    }
    else if (*(int *)(param_1 + 0x7a8) ==
             (*(int *)(param_1 + 0x7a4) + *(int *)(param_1 + 0x7a0)) - (uint)bVar5) {
      UiElem_SetPropFloat(0,uVar8,0x43,8);
    }
  }
  else {
    UiElem_SetPropFloat(0,uVar8,0x42,8);
    UiElem_SetPropFloat(0,uVar8,0x43,8);
  }
  return;
}

// 0x002dafb0  size 0x42c
void replayui_draw_sub_002dafb0(int param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  pcVar3 = pcRam0036f8b0;
  if (*(char *)(param_1 + 0x778) == '\x02') {
    uVar4 = (*pcRam0036f8ac)(0xb6);
    if (*(int *)((int)uVar4 + 0x318) == 1) {
      UiLayout_UpdateAnim(uVar4,0);
    }
    uVar4 = (*pcRam0036f8ac)(0xb6);
    UiLayout_Draw(0x3f800000,uVar4);
  }
  else if (*(byte *)(param_1 + 0x779) - 4 < 2) {
    uVar4 = (*pcRam0036f8ac)(0xb5);
    if (*(int *)((int)uVar4 + 0x318) == 1) {
      UiLayout_UpdateAnim(uVar4,0);
    }
    uVar4 = (*pcRam0036f8ac)(0xb5);
    UiLayout_Draw(0x3f800000,uVar4);
  }
  else {
    uVar4 = (*pcRam0036f8ac)(0xb4);
    if (*(int *)((int)uVar4 + 0x318) == 1) {
      UiLayout_UpdateAnim(uVar4,0);
    }
    uVar4 = (*pcRam0036f8ac)(0xb4);
    UiLayout_Draw(0x3f800000,uVar4);
  }
  if (param_2 == 0) {
    uVar4 = (*pcRam0036f8ac)(0xb7);
    UiElem_SetPropInt(uVar4,0x15,9,0);
  }
  else {
    uVar4 = (*pcRam0036f8ac)(0xb7);
    UiElem_SetPropInt(uVar4,0x15,9,2);
  }
  uVar4 = (*pcRam0036f8ac)(0xb7);
  UiLayout_Draw(0x3f800000,uVar4);
  uVar4 = (*pcRam0036f8ac)(0xba);
  UiLayout_Draw(0x3f800000,uVar4);
  cVar1 = *(char *)(param_1 + 0x779);
  if ((cVar1 == '\x05') || (cVar1 == '\x03')) {
    uVar4 = (*pcVar3)(0x1e9b);
    uVar5 = (*pcRam0036f8ac)(0xba);
    UiElem_GetRect(uVar5,auStack_c0,0xc);
    UiText_DrawById(auStack_c0,uVar4);
  }
  else if ((cVar1 == '\x04') || (cVar1 == '\x02')) {
    uVar4 = (*pcVar3)(0x1e9a);
    uVar5 = (*pcRam0036f8ac)(0xba);
    UiElem_GetRect(uVar5,auStack_80,0xc);
    UiText_DrawById(auStack_80,uVar4);
  }
  else {
    if (cVar1 != '\x01') {
      iVar7 = *(int *)(param_1 + 0x770);
      goto LAB_002db20c;
    }
    uVar4 = (*pcVar3)(0x1e99);
    uVar5 = (*pcRam0036f8ac)(0xba);
    UiElem_GetRect(uVar5,auStack_40,0xc);
    UiText_DrawById(auStack_40,uVar4);
  }
  iVar7 = *(int *)(param_1 + 0x770);
LAB_002db20c:
  if ((((((iVar7 == 0x22) || (iVar7 == 0x21)) || (iVar7 == 0x20)) ||
       ((iVar7 == 0x1f || (iVar7 == 0x11)))) ||
      ((iVar7 == 0x10 || ((iVar7 == 0xf || (iVar7 == 0xe)))))) || (iVar7 == 0xd)) {
    uVar6 = (uint)*(byte *)(param_1 + 0x34);
  }
  else if (iVar7 == 4) {
    uVar6 = (uint)*(byte *)(param_1 + 0x38);
  }
  else {
    uVar6 = 1;
  }
  *(uint *)(param_1 + 0x76c) = 1 - uVar6;
  cVar1 = *(char *)(param_1 + 0x768);
  if (cVar1 == -1) {
    uVar2 = *(undefined4 *)(param_1 + 0x76c);
  }
  else {
    if (cVar1 == '\0') {
      uVar6 = 0;
      iVar7 = param_1 + 0x588;
      do {
        PwInput_Draw(iVar7,0xffffffffffffffff);
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 0x4c;
      } while (uVar6 < 3);
      replayui_draw_sub_002dbf30
                (param_1 + 0x588,*(undefined1 *)(param_1 + 0x769),*(undefined1 *)(param_1 + 0x76a));
      return;
    }
    if (cVar1 == '\x01') {
      uVar6 = 0;
      iVar7 = param_1 + 0x678;
      do {
        PwInput_Draw(iVar7,0xffffffffffffffff);
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 0x4c;
      } while (uVar6 < 3);
      replayui_draw_sub_002dbf30
                (param_1 + 0x678,*(undefined1 *)(param_1 + 0x769),*(undefined1 *)(param_1 + 0x76a));
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x76c);
  }
  uVar6 = 0;
  iVar7 = param_1 + 0x588;
  do {
    PwInput_Draw(iVar7,uVar2);
    uVar6 = uVar6 + 1;
    iVar7 = iVar7 + 0x4c;
  } while (uVar6 < 3);
  replayui_draw_sub_002dbf30
            (param_1 + 0x588,*(undefined1 *)(param_1 + 0x769),*(undefined1 *)(param_1 + 0x76a));
  return;
}

// 0x002db3e0  size 0x34c
undefined4 replayui_step_sub_002db3e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(char *)(param_1 + 0x768) == -1) && (*(int *)(param_1 + 0x7e0) == 0)) {
    if (*(int *)(param_1 + 0x770) == 1) {
      uVar3 = 2;
      if (*(int *)(param_1 + 0x24) == 0) {
        uVar3 = 3;
      }
    }
    else {
      uVar1 = SaveUi_Task(param_1,1,0,1);
      *(uint *)(param_1 + 0x770) = uVar1 & 0xff;
      if (*(int *)(param_1 + 0x770) != *(int *)(param_1 + 0x56c)) {
        *(int *)(param_1 + 0x570) = *(int *)(param_1 + 0x770);
      }
      iVar4 = *(int *)(param_1 + 0x770);
      if (iVar4 == 3) {
        SaveMgr_Close(param_1);
      }
      else if (iVar4 == 1) {
        SaveMgr_Close(param_1);
      }
      else if (iVar4 == 0xc) {
        iVar4 = *(int *)(param_1 + 0x40);
        iVar5 = *(int *)(param_1 + 0x44);
        uVar3 = *(undefined4 *)(param_1 + 0x48);
        iVar2 = SaveUi_GetResultMessage(param_1,*(undefined4 *)(param_1 + 0x4c));
        *(int *)(param_1 + 0x7a0) = (iVar5 - iVar4) + 1;
        *(undefined4 *)(param_1 + 0x79c) = uVar3;
        *(int *)(param_1 + 0x7a4) = iVar4;
        *(undefined4 *)(param_1 + 0x7a8) = 0;
        if (iVar5 < iVar4) {
          iVar4 = *(int *)(param_1 + 4);
        }
        else {
          iVar6 = param_1;
          do {
            uVar3 = SaveUi_GetResultMessage(param_1,iVar4);
            iVar4 = iVar4 + 1;
            *(undefined4 *)(iVar6 + 0x784) = uVar3;
            iVar6 = iVar6 + 4;
          } while (iVar4 <= iVar5);
          iVar4 = *(int *)(param_1 + 4);
        }
        iVar5 = 0;
        if (0 < *(int *)(iVar4 + 4)) {
          iVar4 = 0;
          do {
            if (*(char *)(*(int *)(param_1 + 0x430) + iVar4 + 0x10) == '\x04') {
              *(int *)(param_1 + 0x7a8) = *(int *)(param_1 + 0x7a8) + 1;
            }
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + 0x2c;
          } while (iVar5 < *(int *)(*(int *)(param_1 + 4) + 4));
        }
        iVar5 = iVar2 * 0x2c + *(int *)(param_1 + 0x430);
        iVar4 = *(int *)(iVar5 + 0x28);
        *(undefined1 *)(param_1 + 0x7ac) = *(undefined1 *)(iVar5 + 0x10);
        *(undefined1 *)(param_1 + 0x7ad) = *(undefined1 *)(iVar4 + 0x28);
        *(undefined1 *)(param_1 + 0x7ae) = *(undefined1 *)(iVar4 + 0x29);
        *(undefined1 *)(param_1 + 0x7af) = *(undefined1 *)(iVar4 + 0x2a);
        *(undefined1 *)(param_1 + 0x7b0) = *(undefined1 *)(iVar4 + 0x2b);
        *(uint *)(param_1 + 0x7b4) = (uint)*(byte *)(iVar4 + 0xd);
        *(uint *)(param_1 + 0x7b8) = (uint)*(byte *)(iVar4 + 0x37c);
        *(undefined4 *)(param_1 + 0x7bc) = *(undefined4 *)(iVar4 + 4);
        *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(iVar4 + 0x18);
        *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(iVar4 + 0x14);
        *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(iVar4 + 0x1c);
        *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(iVar4 + 0x24);
      }
      else if (iVar4 == 7) {
        if ((*(int *)(param_1 + 0x77c) != 0) && (iVar4 = 0, 0 < *(int *)(*(int *)(param_1 + 4) + 4))
           ) {
          iVar5 = 0;
          do {
            iVar2 = *(int *)(param_1 + 0x430) + iVar5;
            if (*(char *)(iVar2 + 0x10) == '\x04') {
              iVar6 = *(int *)(iVar2 + 0x28);
              if ((((*(char *)(param_1 + 0x780) != *(char *)(iVar6 + 0x28)) ||
                   (*(char *)(param_1 + 0x781) != *(char *)(iVar6 + 0x29))) ||
                  (*(char *)(param_1 + 0x782) != *(char *)(iVar6 + 0x2a))) ||
                 (*(char *)(param_1 + 0x783) != *(char *)(iVar6 + 0x2b))) {
                *(undefined4 *)(iVar2 + 0x20) = 1;
              }
            }
            else if (*(char *)(iVar2 + 0x10) == '\x03') {
              *(undefined4 *)(iVar2 + 0x20) = 1;
            }
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 0x2c;
          } while (iVar4 < *(int *)(*(int *)(param_1 + 4) + 4));
        }
      }
      else if (iVar4 == 0) {
        SaveMgr_Open(param_1,*(undefined1 *)(param_1 + 0x778),*(undefined1 *)(param_1 + 0x779),0,0,0
                     ,6);
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

// 0x002db730  size 0x450
void replayui_anim_sub_002db730(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 0x770);
  if (iVar3 != *(int *)(iVar6 + 0x774)) {
    switch(*(int *)(iVar6 + 0x774)) {
    default:
      uVar11 = 0;
      break;
    case 1:
      uVar11 = 0xe;
      break;
    case 4:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
      uVar11 = 3;
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x25:
      uVar11 = 1;
      break;
    case 0xc:
      uVar11 = 4;
    }
    switch(iVar3) {
    default:
      uVar10 = 0;
      break;
    case 1:
      uVar10 = 0xe;
      break;
    case 4:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
      uVar10 = 3;
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x25:
      uVar10 = 1;
      break;
    case 0xc:
      uVar10 = 4;
    }
    if (uVar10 == 4) {
      cVar2 = *(char *)(iVar6 + 0x779);
      if ((((cVar2 == '\x05') || (cVar2 == '\x03')) || (cVar2 == '\x04')) || (cVar2 == '\x02')) {
        puVar8 = (undefined4 *)(iVar6 + 0x588);
        puVar7 = (undefined4 *)(iVar6 + 0x678);
        iVar5 = 0x39;
        do {
          iVar5 = iVar5 + -1;
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar5);
        *(undefined4 *)(iVar6 + 0x75c) = *(undefined4 *)(iVar6 + 0x66c);
        *(undefined4 *)(iVar6 + 0x760) = *(undefined4 *)(iVar6 + 0x670);
        *(undefined4 *)(iVar6 + 0x764) = *(undefined4 *)(iVar6 + 0x674);
        PwInput_SetupGrid(iVar6 + 0x588,7,iVar3);
      }
      else if (cVar2 == '\x01') {
        puVar8 = (undefined4 *)(iVar6 + 0x588);
        puVar7 = (undefined4 *)(iVar6 + 0x678);
        iVar5 = 0x39;
        do {
          iVar5 = iVar5 + -1;
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar5);
        *(undefined4 *)(iVar6 + 0x75c) = *(undefined4 *)(iVar6 + 0x66c);
        *(undefined4 *)(iVar6 + 0x760) = *(undefined4 *)(iVar6 + 0x670);
        *(undefined4 *)(iVar6 + 0x764) = *(undefined4 *)(iVar6 + 0x674);
        PwInput_SetupGrid(iVar6 + 0x588,5,iVar3);
      }
      else {
        puVar8 = (undefined4 *)(iVar6 + 0x588);
        puVar7 = (undefined4 *)(iVar6 + 0x678);
        iVar5 = 0x39;
        do {
          iVar5 = iVar5 + -1;
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar5);
        *(undefined4 *)(iVar6 + 0x75c) = *(undefined4 *)(iVar6 + 0x66c);
        *(undefined4 *)(iVar6 + 0x760) = *(undefined4 *)(iVar6 + 0x670);
        *(undefined4 *)(iVar6 + 0x764) = *(undefined4 *)(iVar6 + 0x674);
        PwInput_SetupGrid(iVar6 + 0x588,6,iVar3);
      }
    }
    else {
      puVar8 = (undefined4 *)(iVar6 + 0x588);
      puVar7 = (undefined4 *)(iVar6 + 0x678);
      iVar5 = 0x39;
      do {
        iVar5 = iVar5 + -1;
        *puVar7 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
      } while (0 < iVar5);
      *(undefined4 *)(iVar6 + 0x75c) = *(undefined4 *)(iVar6 + 0x66c);
      *(undefined4 *)(iVar6 + 0x760) = *(undefined4 *)(iVar6 + 0x670);
      *(undefined4 *)(iVar6 + 0x764) = *(undefined4 *)(iVar6 + 0x674);
      if ((uVar10 < 4) || (0xd < uVar10)) {
        uVar1 = *(undefined1 *)(iVar6 + 0x769);
        uVar9 = 0;
        iVar5 = iVar6 + 0x588;
        do {
          PwInput_ResetBuffer(iVar5);
          uVar9 = uVar9 + 1;
          iVar5 = iVar5 + 0x4c;
        } while (uVar9 < 3);
        *(int *)(iVar6 + 0x66c) = iVar3;
        if (uVar10 == 3) {
          *(undefined4 *)(iVar6 + 0x670) = 0x1c;
          *(undefined4 *)(iVar6 + 0x674) = 0x1e;
        }
        else if (uVar10 == 1) {
          *(undefined4 *)(iVar6 + 0x670) = 0x16;
          *(undefined4 *)(iVar6 + 0x674) = 0x17;
        }
        else if (uVar10 == 0) {
          *(undefined4 *)(iVar6 + 0x670) = 0x13;
          *(undefined4 *)(iVar6 + 0x674) = 0x14;
        }
        PwInput_GetCharForKey(iVar6 + 0x588,uVar10,uVar1);
      }
      else {
        PwInput_SetupGrid(iVar6 + 0x588,uVar10,iVar3);
      }
    }
    if (uVar11 != uVar10) {
      PwInput_Open(iVar6 + 0x588);
    }
    *(undefined4 *)(iVar6 + 0x774) = *(undefined4 *)(iVar6 + 0x770);
    uVar4 = (*pcRam0036f8ac)(0xc4);
    UiElem_SetPropFloat(0x3f800000,uVar4,0x42,8);
    uVar4 = (*pcRam0036f8ac)(0xc4);
    UiElem_SetPropFloat(0x3f800000,uVar4,0x43,8);
  }
  PwInput_Animate(iVar6 + 0x588);
  if ((((*(int *)(iVar6 + 0x66c) == 0xc) && (*(char *)(iVar6 + 0x768) == '\0')) ||
      ((*(int *)(iVar6 + 0x75c) == 0xc && (*(char *)(iVar6 + 0x768) == '\x01')))) ||
     ((*(int *)(iVar6 + 0x66c) == 0xc && (*(char *)(iVar6 + 0x768) == -1)))) {
    replayui_draw_sub_002da920(param_1);
    replayui_draw_sub_002d9e30(param_1);
    replayui_draw_sub_002dafb0(param_1,0);
  }
  else {
    replayui_draw_sub_002dafb0(param_1,1);
  }
  return;
}

// 0x002dbb80  size 0xe8
void replayui_step_sub_002dbb80(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  
  SaveMgr_LoadIcon();
  *(undefined4 *)(param_1 + 0x568) = 0xffffffff;
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x56c) = 0;
  iVar3 = param_1 + 0x588;
  *(undefined4 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x578) = 1;
  *(undefined4 *)(param_1 + 0x584) = 0;
  *(undefined4 *)(param_1 + 0x57c) = 1;
  *(undefined4 *)(param_1 + 0x574) = 1;
  *(undefined4 *)(param_1 + 0x580) = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  uVar1 = *(undefined1 *)(param_1 + 0x779);
  uVar2 = *(undefined1 *)(param_1 + 0x778);
  do {
    PwInput_ResetBuffer(iVar3);
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x4c;
  } while (uVar4 < 3);
  uVar4 = 0;
  iVar3 = param_1 + 0x678;
  do {
    PwInput_ResetBuffer(iVar3);
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x4c;
  } while (uVar4 < 3);
  *(undefined1 *)(param_1 + 0x768) = 0xff;
  *(undefined1 *)(param_1 + 0x769) = uVar2;
  *(undefined1 *)(param_1 + 0x76a) = uVar1;
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  *(undefined4 *)(param_1 + 0x770) = 0;
  *(undefined4 *)(param_1 + 0x774) = 1;
  return;
}

// 0x002dbc70  size 0x2a8
void replayui_anim_sub_002dbc70(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pcVar2 = pcRam0036f8ac;
  if (*(char *)(param_1 + 0x778) != '\x02') {
    if (*(byte *)(param_1 + 0x779) - 4 < 2) {
      uVar3 = (*pcRam0036f8a8)(0x239);
      iVar4 = (*pcVar2)(0xb5);
      *(undefined4 *)(iVar4 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x31c) = 0;
      *(undefined4 *)(iVar4 + 0x30c) = 0;
      if (*(int *)(iVar4 + 0x31c) == 0) {
        *(undefined4 *)(iVar4 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x318) = 1;
      }
      *(undefined4 *)(iVar4 + 0x30c) = 0;
      if (*(int *)(iVar4 + 0x31c) == 0) {
        *(undefined4 *)(iVar4 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x318) = 1;
      }
      *(undefined4 *)(iVar4 + 0x314) = 1;
      *(undefined4 *)(iVar4 + 0x31c) = uVar3;
      *(undefined4 *)(iVar4 + 0x318) = 1;
    }
    else {
      uVar3 = (*pcRam0036f8a8)(0x226);
      iVar4 = (*pcVar2)(0xb4);
      *(undefined4 *)(iVar4 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x31c) = 0;
      *(undefined4 *)(iVar4 + 0x30c) = 0;
      if (*(int *)(iVar4 + 0x31c) == 0) {
        *(undefined4 *)(iVar4 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x318) = 1;
      }
      *(undefined4 *)(iVar4 + 0x30c) = 0;
      if (*(int *)(iVar4 + 0x31c) == 0) {
        *(undefined4 *)(iVar4 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x318) = 1;
      }
      *(undefined4 *)(iVar4 + 0x314) = 1;
      *(undefined4 *)(iVar4 + 0x31c) = uVar3;
      *(undefined4 *)(iVar4 + 0x318) = 1;
    }
  }
  cVar1 = *(char *)(param_1 + 0x779);
  if ((cVar1 == '\x05') || (cVar1 == '\x03')) {
    uVar5 = (*pcVar2)(0xba);
    UiElem_SetPropInt(uVar5,0xb,0x16,6);
  }
  else if ((cVar1 == '\x04') || (cVar1 == '\x02')) {
    uVar5 = (*pcVar2)(0xba);
    UiElem_SetPropInt(uVar5,0xb,0x16,5);
  }
  else if (cVar1 == '\x01') {
    uVar5 = (*pcVar2)(0xba);
    UiElem_SetPropInt(uVar5,0xb,0x16,8);
  }
  uVar5 = (*pcVar2)(0xc4);
  pcVar2 = pcRam0036f8a8;
  uVar3 = uRam0036eea8;
  iVar4 = iRam0036eea0 * 0x18;
  *(int *)(&DAT_00342100 + iVar4) = (int)uVar5;
  *(undefined4 *)(&DAT_00342104 + iVar4) = 2;
  *(undefined4 *)(iVar4 + 0x342108) = uVar3;
  uVar6 = (*pcVar2)(0x68);
  UiLayout_IsAnimDone(uVar5,0x13,uRam0036eea8,uVar6,1);
  pcVar2 = pcRam0036f8a8;
  *(undefined4 *)(iRam0036eea0 * 0x18 + 0x34210c) = uRam0036eeac;
  uVar6 = (*pcVar2)(0x6a);
  UiLayout_IsAnimDone(uVar5,0x12,uRam0036eeac,uVar6,1);
  DAT_003420f0 = 0;
  DAT_003420f4 = 0xffffffff;
  return;
}

// 0x002dbf20  size 0xc
void replayui_leaf_sub_002dbf20(int param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x778) = param_2;
  *(undefined1 *)(param_1 + 0x779) = param_3;
  return;
}

// 0x002dbf30  size 0x7a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void replayui_draw_sub_002dbf30(int *param_1,byte param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  pcVar4 = pcRam0036f8b0;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  if (param_1[0x3a] < 0) {
    return;
  }
  param_3 = param_3 & 0xff;
  uVar10 = 0x96;
  if (param_3 != 0) {
    uVar10 = 0x1b3;
  }
  iVar14 = iRam0036f89c + 1;
  uVar6 = (*pcRam0036f8b0)(*(undefined4 *)(&DAT_00342170 + param_3 * 4));
  bVar2 = false;
  uVar13 = 0;
  piVar12 = param_1;
  do {
    iVar11 = *piVar12;
    uVar13 = uVar13 + 1;
    piVar12 = piVar12 + 0x13;
    bVar2 = (bool)(bVar2 | iVar11 != 0);
  } while (uVar13 < 3);
  if (!bVar2) {
    return;
  }
  if (param_2 == 0) {
    uVar5 = (*pcVar4)(0x1e8e);
    uVar3 = _DAT_00342188;
    UiElem_GetRect(iVar1,auStack_40,param_1[0x3b]);
    uStack_2c = uVar3;
    UiText_DrawById(auStack_40,uVar5);
LAB_002dc0cc:
    iVar11 = param_1[0x39];
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      uVar7 = (*pcVar4)(0x1e8d);
      uVar8 = (*pcVar4)(*(undefined4 *)((uint)param_2 * 4 + 0x342130));
      uVar9 = (*pcVar4)(*(undefined4 *)(param_3 * 4 + 0x342150));
      PwInput_DrawNameShort
                (iVar1,param_1[0x3b],*(undefined4 *)(&DAT_00342188 + (uint)param_2 * 4),uVar7,uVar8,
                 uVar9);
      goto LAB_002dc0cc;
    }
    iVar11 = param_1[0x39];
  }
  switch(iVar11) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
    uVar10 = (*pcVar4)(0x1ea4);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 4:
    if (param_2 == 1) {
      uVar10 = (*pcVar4)(0x1ea2);
      UiElem_GetRect(iVar1,auStack_c0,param_1[0x3a]);
      UiText_DrawById(auStack_c0,uVar10);
    }
    else if (param_2 == 2) {
      uVar10 = (*pcVar4)(0x1ea3);
      UiElem_GetRect(iVar1,auStack_80,param_1[0x3a]);
      UiText_DrawById(auStack_80,uVar10);
    }
    break;
  case 8:
    uVar10 = (*pcVar4)(0x1ea5);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 9:
    uVar10 = (*pcVar4)(0x1ea6);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,iVar14);
    break;
  case 10:
    if ((param_2 == 1) && (param_3 - 4 < 2)) {
      uVar10 = (*pcVar4)(0x1ea8);
      PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    }
    else if ((param_2 == 1) && (param_3 != 0)) {
      uVar10 = (*pcVar4)(0x1ea9);
      PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,
                       *(undefined4 *)(&DAT_00342140 + (param_3 - 1) * 4),iVar14);
    }
    else {
      uVar10 = (*pcVar4)(0x1ea7);
      PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    }
    break;
  case 0xb:
    uVar10 = (*pcVar4)(0x1eaa);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,iVar14);
    break;
  case 0xc:
    break;
  case 0xd:
    uVar10 = (*pcVar4)(0x1eab);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0xe:
    uVar10 = (*pcVar4)(0x1ead);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,iVar14,uVar6);
    break;
  case 0xf:
    uVar10 = (*pcVar4)(0x1eae);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x10:
    uVar10 = (*pcVar4)(0x1eb0);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x11:
    uVar10 = (*pcVar4)(0x1eb2);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x12:
    uVar10 = (*pcVar4)(0x1eb4);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x13:
    uVar10 = (*pcVar4)(0x1eb6);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x14:
    uVar10 = (*pcVar4)(0x1eb8);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x15:
    uVar10 = (*pcVar4)(0x1eba);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,iVar14);
    break;
  case 0x16:
    uVar10 = (*pcVar4)(0x1ebb);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,iVar14);
    break;
  case 0x17:
    uVar10 = (*pcVar4)(0x1ebc);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x18:
    uVar10 = (*pcVar4)(0x1ebe);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x19:
    uVar10 = (*pcVar4)(0x1ec1);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x1a:
    uVar10 = (*pcVar4)(0x1ec3);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x1b:
    uVar10 = (*pcVar4)(0x1ec5);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14,uVar6);
    break;
  case 0x1c:
    uVar10 = (*pcVar4)(0x1ec7);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,0x14,uVar6);
    break;
  case 0x1d:
  case 0x1e:
    uVar7 = (*pcVar4)(0x1ec8);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar7,iVar14,uVar10,uVar6);
    break;
  case 0x1f:
    uVar7 = (*pcVar4)(0x1ec9);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar7,iVar14,uVar10,uVar6,uVar6);
    break;
  case 0x20:
    uVar7 = (*pcVar4)(0x1eca);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar7,iVar14,uVar10,uVar6,uVar6);
    break;
  case 0x21:
    uVar10 = (*pcVar4)(0x1ecb);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14,uVar6);
    break;
  case 0x22:
    uVar10 = (*pcVar4)(0x1ecc);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14,uVar6);
    break;
  case 0x23:
    uVar10 = (*pcVar4)(0x1ece);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,iVar14);
    break;
  case 0x24:
    uVar10 = (*pcVar4)(0x1ecf);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,uVar6,iVar14);
    break;
  case 0x25:
    uVar10 = (*pcVar4)(0x1ecd);
    PwInput_DrawName(iVar1,param_1[0x3a],uVar10,iVar14);
    break;
  default:
    goto switchD_002dc0f0_default;
  }
switchD_002dc0f0_default:
  return;
}

