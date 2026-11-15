// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002d8000 - 0x002dc000
#include "ghidra_types.h"

// 0x002d8150  size 0x4c8
void maybe_ShowroomBg_DrawObject(int param_1,undefined1 *param_2)

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
  if (*(int *)(&s_Course_Render_2 + iVar6) != 0) {
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
void maybe_ShowroomBg_ResetObject(int param_1)

{
  maybe_Course_GetItemA();
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
void maybe_ShowroomBg_OnLoaded
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  Course_ClearCount(param_4);
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
void Quat_IdentityB(undefined4 *param_1)

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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_ShowroomBg_Draw(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = _g_MenuObj;
  iVar5 = _g_MenuObj + 0x90;
  iVar4 = 0;
  if (0 < *(int *)(_g_MenuObj + 0x98)) {
    do {
      uVar3 = MenuObjSet_GetEntry(iVar5,iVar4);
      cVar2 = MenuObj_IsReady(uVar3);
      if (cVar2 == '\x04') {
        AsyncRes_Poll(*(int *)((int)uVar3 + 0x10) + 0x28,0xc);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x98));
  }
  maybe_ShowroomBg_DrawObjects();
  return;
}

// 0x002d8880  size 0x24
void ShowroomBg_Unload(void)

{
  MenuObjSet_Free(7);
  ShowroomBg_Free();
  return;
}

// 0x002d88b0  size 0x40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ShowroomBg_Load(undefined8 param_1,undefined8 param_2)

{
  ShowroomBg_Alloc(*_g_MenuObj,param_1,param_2);
  MenuObjSet_Alloc(7,param_1);
  return;
}

// 0x002d88f0  size 0x14
/* menu page 0 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PagePasswordEntry_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x002d8910  size 0x200
/* menu page 0 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PagePasswordEntry_Update(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x578) = 0;
  *(undefined4 *)(iVar4 + 0x580) = 0;
  uVar1 = g_MenuMgr->flags;
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    g_MenuMgr->flags = uVar1 | 0x800;
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
    UiLayout_UpdateAnimById((UiLayout *)0xb3,0);
    uVar3 = PwInput_IsSpecialKey(param_1,*(undefined4 *)(iVar4 + 0x770));
    *(undefined4 *)(iVar4 + 0x76c) = uVar3;
    PwInput_Animate(iVar4 + 0x588);
    PwInput_Update(iVar4 + 0x588);
    iVar4 = UiMgr_FindLayout(0xb3);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
    iVar4 = UiMgr_FindLayout(0xb7);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x15,9,2);
    iVar4 = UiMgr_FindLayout(0xb7);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  }
  return;
}

// 0x002d8b10  size 0xac
/* menu page 0 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PagePasswordEntry_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0xfc);
  iVar3 = UiMgr_FindLayout(0xb3);
  pUVar1 = g_UiMgr->slots;
  if (pUVar1[iVar3].layout.unk_31c == 0) {
    pUVar1[iVar3].layout.unk_310 = 0xffffffff;
    pUVar1[iVar3].layout.unk_31c = 0;
    pUVar1[iVar3].layout.unk_30c = 0;
    if (pUVar1[iVar3].layout.unk_31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    pUVar1[iVar3].layout.unk_30c = 0;
    if (pUVar1[iVar3].layout.unk_31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 1;
    pUVar1[iVar3].layout.unk_31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  Menu_ClearSlot(0);
  return;
}

// 0x002d8bd0  size 0x114
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 0 (table 0x3274b0) */

void maybe_ScrMemCard_Update(undefined8 param_1)

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
    _g_CareerShared1 = g_RaceCtx->language + 1;
    MenuMgr_RequestScreen(0xfffffffffffffffb);
  }
  Save_IsBusy();
  Menu_RequestTransition(iVar5 + 0x568);
  return;
}

// 0x002d8cf0  size 0xa0
/* menu screen 0 (table 0x3274b0) */

void maybe_ScrMemCard_Enter(undefined8 param_1)

{
  int iVar1;
  
  Save_AllocSlots();
  SaveMgr_LoadIcon(param_1);
  Subtitle_SetPending(0,0,0);
  SaveUi_SetParams(0x293f50,0x293f40,0x293f30);
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
/* menu page 23 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageNameEntry_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x002d8db0  size 0x78
/* menu page 23 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageNameEntry_Update(void)

{
  uint uVar1;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  uVar1 = g_MenuMgr->flags;
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    g_MenuMgr->flags = uVar1 | 0x800;
  }
  maybe_NameEntry_Update();
  return;
}

// 0x002d8e40  size 0xa0
/* menu screen 23 (table 0x3274b0) */

void maybe_ScrNewGameMemCard_Update(int param_1)

{
  long lVar1;
  
  lVar1 = maybe_NameEntry_StepSave();
  if (lVar1 != 1) {
    if (lVar1 == 2) {
      *(undefined4 *)(param_1 + 0x7e4) = 1;
      *(undefined4 *)(param_1 + 0x7e8) = 1;
      if (g_MenuMgr->prevScreen == 0x20) {
        MenuMgr_RequestScreen();
      }
      else {
        Game_StartNewCareer();
        MenuMgr_RequestScreen(0xfffffffffffffffe);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x7e4) = 0;
      *(undefined4 *)(param_1 + 0x7e8) = 1;
      RaceCtx_SetMode(9);
      MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
    }
  }
  Save_IsBusy();
  return;
}

// 0x002d8ef0  size 0x60
/* menu screen 23 (table 0x3274b0) */

void maybe_ScrNewGameMemCard_Enter(undefined8 param_1)

{
  Save_AllocSlots();
  NameEntry_SetMode(param_1,1,*(undefined1 *)((int)param_1 + 0x779));
  SaveUi_SetParams(0x293f50,0x293f40,0x293f30);
  maybe_NameEntry_Animate(param_1);
  maybe_NameEntry_Reset(param_1);
  return;
}

// 0x002d8f50  size 0x10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SaveUi_SetParams(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _g_PwInputShared1 = param_2;
  _g_NameEntryShared1 = param_1;
  _g_NameEntryShared2 = param_3;
  return;
}

// 0x002d8f60  size 0x10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Subtitle_SetPending(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _g_ScrSaveShared1 = param_1;
  _g_ScrSaveShared2 = param_2;
  _g_ScrSaveShared3 = param_3;
  return;
}

// 0x002d9590  size 0x1f0
UiLayout * maybe_ReplayUi_GetLayoutForMsg(int param_1)

{
  int iVar1;
  UiLayout *pUVar2;
  
  if (param_1 - 0xb6U < 0xf) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1 - 0xb6U) {
    case 0:
      iVar1 = UiMgr_FindLayout(0x1b);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    case 1:
      iVar1 = UiMgr_FindLayout(0x24);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    default:
      goto switchD_002d95b8_caseD_b8;
    case 4:
      iVar1 = UiMgr_FindLayout(0x26);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    case 5:
      iVar1 = UiMgr_FindLayout(0x1c);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    case 6:
      iVar1 = UiMgr_FindLayout(0x1d);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    case 7:
      iVar1 = UiMgr_FindLayout(0x1e);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    case 8:
      iVar1 = UiMgr_FindLayout(0x1f);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    case 9:
      iVar1 = UiMgr_FindLayout(0x20);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    case 10:
      iVar1 = UiMgr_FindLayout(0x21);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    case 0xc:
      iVar1 = UiMgr_FindLayout(0x22);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    case 0xd:
      iVar1 = UiMgr_FindLayout(0x23);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
      break;
    case 0xe:
      iVar1 = UiMgr_FindLayout(0x25);
      pUVar2 = &g_UiMgr->slots[iVar1].layout;
    }
  }
  else {
switchD_002d95b8_caseD_b8:
    pUVar2 = (UiLayout *)0x0;
  }
  return pUVar2;
}

// 0x002d9780  size 0x42c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_ReplayUi_GetValue(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x1925) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0xac);
  }
  else if (param_1 == 0x1924) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0xa8);
  }
  else if (param_1 == 0x1923) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0xa4);
  }
  else if (param_1 == 0x1922) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0xa0);
  }
  else if (param_1 == 0x1921) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x9c);
  }
  else if (param_1 == 0x1920) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x98);
  }
  else if (param_1 == 0x191f) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x94);
  }
  else if (param_1 == 0x191e) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x90);
  }
  else if (param_1 == 0x69) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x8c);
  }
  else if (param_1 == 0x6b) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x88);
  }
  else if (param_1 == 0x6a) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x84);
  }
  else if (param_1 == 0x68) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x80);
  }
  else if (param_1 == 0x225) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x7c);
  }
  else if (param_1 == 0x224) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x78);
  }
  else if (param_1 == 0x21e) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x74);
  }
  else if (param_1 == 0x21d) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x70);
  }
  else if (param_1 == 0x21c) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x6c);
  }
  else if (param_1 == 0x21b) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x68);
  }
  else if (param_1 == 0x3eb) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 100);
  }
  else if (param_1 == 0x228) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x60);
  }
  else if (param_1 == 0x227) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x5c);
  }
  else if (param_1 == 0x3ea) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x58);
  }
  else if (param_1 == 0x21a) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x54);
  }
  else if (param_1 == 0x219) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x50);
  }
  else if (param_1 == 0x3e9) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x4c);
  }
  else if (param_1 == 0x218) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x48);
  }
  else if (param_1 == 0x217) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x44);
  }
  else if (param_1 == 1000) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x40);
  }
  else if (param_1 == 0x216) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x3c);
  }
  else if (param_1 == 0x215) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x38);
  }
  else if (param_1 == 0x419) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x34);
  }
  else if (param_1 == 0x418) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x30);
  }
  else if (param_1 == 0x41a) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x2c);
  }
  else if (param_1 == 0x106) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x28);
  }
  else if (param_1 == 0x105) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x24);
  }
  else if (param_1 == 0x104) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x20);
  }
  else if (param_1 == 0x103) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x1c);
  }
  else if (param_1 == 0x102) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x18);
  }
  else if (param_1 == 0x101) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x14);
  }
  else if (param_1 == 0x100) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0x10);
  }
  else if (param_1 == 0xff) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 0xc);
  }
  else if (param_1 == 0xfe) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 8);
  }
  else if (param_1 == 0xfd) {
    uVar1 = *(undefined4 *)(*(int *)(_g_ReplayUi + 0xb4) + 4);
  }
  else if (param_1 == 0x417) {
    uVar1 = **(undefined4 **)(_g_ReplayUi + 0xb4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002d9bb0  size 0x6c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ReplayUi_Free(void)

{
  if (*(int *)(_g_ReplayUi + 0xb4) != 0) {
    Mem_Free();
    *(undefined4 *)(_g_ReplayUi + 0xb4) = 0;
  }
  if (*(int *)(_g_ReplayUi + 0xb0) != 0) {
    Mem_Free();
    *(undefined4 *)(_g_ReplayUi + 0xb0) = 0;
  }
  if (_g_ReplayUi != 0) {
    Mem_Free();
    _g_ReplayUi = 0;
  }
  return;
}

// 0x002d9ca0  size 0x190
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ReplayUi_Load(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = 0;
  _g_ReplayUi = Mem_AllocAligned(0xb8,0x40,param_1);
  iVar5 = 0;
  piVar7 = &DAT_00342260;
  iVar4 = 0;
  do {
    iVar1 = *piVar7;
    *(int *)(_g_ReplayUi + iVar4) = iVar1;
    uVar3 = g_ArcToc->entries[iVar1].unpackedSize;
    if (uVar3 == 0) {
      uVar3 = g_ArcToc->entries[iVar1].sectorCount;
    }
    else {
      uVar3 = uVar3 + 0x7ff >> 0xb;
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + uVar3 * 0x800;
    piVar7 = piVar7 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 0x2c);
  uVar2 = Mem_AllocAligned(0xb0,0x40,param_1);
  *(undefined4 *)(_g_ReplayUi + 0xb4) = uVar2;
  uVar2 = Mem_AllocAligned(iVar6,0x40,param_1);
  iVar5 = 0;
  piVar7 = &DAT_00342260;
  *(undefined4 *)(_g_ReplayUi + 0xb0) = uVar2;
  iVar4 = *(int *)(_g_ReplayUi + 0xb0);
  do {
    Arc_LoadFileEx(*piVar7,iVar4,0,0,0,0);
    uVar3 = g_ArcToc->entries[*piVar7].unpackedSize;
    if (uVar3 == 0) {
      uVar3 = g_ArcToc->entries[*piVar7].sectorCount;
    }
    else {
      uVar3 = uVar3 + 0x7ff >> 0xb;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + uVar3 * 0x800;
    piVar7 = piVar7 + 1;
  } while (iVar5 < 0x2b);
  Arc_LoadFileEx((&DAT_00342260)[iVar5],iVar4,0x2d9c20,0,0,0);
  return;
}

// 0x002d9e30  size 0xaf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_NameEntry_DrawInfo(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  code *pcVar6;
  UiLayout *pUVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  int iStack_7c0;
  int iStack_7b0;
  undefined4 auStack_7a0 [16];
  undefined4 auStack_760 [16];
  undefined4 auStack_720 [16];
  undefined4 auStack_6e0 [16];
  undefined4 auStack_6a0 [16];
  undefined4 auStack_660 [16];
  undefined4 auStack_620 [16];
  undefined4 auStack_5e0 [16];
  undefined4 auStack_5a0 [16];
  undefined4 auStack_560 [16];
  undefined4 auStack_520 [16];
  undefined4 auStack_4e0 [16];
  undefined4 auStack_4a0 [16];
  undefined4 auStack_460 [16];
  undefined4 auStack_420 [16];
  undefined4 auStack_3e0 [16];
  undefined4 auStack_3a0 [16];
  undefined4 auStack_360 [16];
  undefined4 auStack_320 [16];
  undefined4 auStack_2e0 [16];
  undefined4 auStack_2a0 [16];
  undefined4 auStack_260 [16];
  undefined4 auStack_220 [16];
  undefined4 auStack_1e0 [16];
  undefined4 auStack_1a0 [16];
  undefined4 auStack_160 [16];
  undefined4 auStack_120 [16];
  undefined4 auStack_e0 [16];
  undefined4 auStack_a0 [16];
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
  
  pcVar6 = _g_NameEntryShared2;
  pcVar5 = _g_NameEntryShared1;
  uVar11 = (*_g_NameEntryShared2)(0x1e9d);
  pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
  UiElem_GetRect(pUVar7,auStack_a0,0x4a);
  UiText_DrawById(auStack_a0,uVar11);
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
    uVar11 = (*pcVar6)(0x59);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_e0,0x47);
    UiText_DrawById(auStack_e0,uVar11);
    uVar11 = (*pcVar6)(0x59);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_120,0x48);
    UiText_DrawById(auStack_120,uVar11);
    uVar11 = (*pcVar6)(0x59);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_160,0x49);
    UiText_DrawById(auStack_160,uVar11);
    uVar11 = (*pcVar6)(0x59);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_1a0,0x4d);
    UiText_DrawById(auStack_1a0,uVar11);
    uVar11 = (*pcVar6)(0x59);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_1e0,0x46);
    UiText_DrawById(auStack_1e0,uVar11);
    uVar11 = (*pcVar6)(0x59);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_220,0x4b);
    UiText_DrawById(auStack_220,uVar11);
    uVar11 = (*pcVar6)(0x59);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_260,0x4c);
    UiText_DrawById(auStack_260,uVar11);
  }
  else {
    if (bVar4) {
      if (bVar3) {
        iVar9 = Replay_GetHeader();
        iVar10 = *(int *)(iVar9 + 0x18) + 0x4de;
        iStack_7b0 = *(int *)(iVar9 + 0x18) + 0x5c0;
        iStack_7c0 = *(int *)(iVar9 + 0x14) + 0x6a3;
        uVar11 = MsgId_ForOption(*(undefined1 *)(iVar9 + 0x28));
        uStack_7c4 = MsgId_ForSlot(uVar11,0);
        uStack_7c8 = MsgId_OnOff(*(undefined1 *)(iVar9 + 0x29));
        uVar11 = MsgId_ForResult(*(undefined1 *)(iVar9 + 0x2a));
        uVar13 = MsgId_YesNo(*(undefined1 *)(iVar9 + 0x2b));
      }
      else {
        iVar10 = *(int *)(param_1 + 0x7c8) + 0x4de;
        iStack_7b0 = *(int *)(param_1 + 0x7c8) + 0x5c0;
        iStack_7c0 = *(int *)(param_1 + 0x7cc) + 0x6a3;
        uVar11 = MsgId_ForOption(*(undefined1 *)(param_1 + 0x7ad));
        uStack_7c4 = MsgId_ForSlot(uVar11,0);
        uStack_7c8 = MsgId_OnOff(*(undefined1 *)(param_1 + 0x7ae));
        uVar11 = MsgId_ForResult(*(undefined1 *)(param_1 + 0x7af));
        uVar13 = MsgId_YesNo(*(undefined1 *)(param_1 + 0x7b0));
      }
    }
    else {
      iVar10 = MenuText_CarShortName(*(undefined4 *)(param_1 + 0x7c4),0xffffffffffffffff);
      iStack_7b0 = MenuText_CarGrade(*(undefined4 *)(param_1 + 0x7c4),0xffffffffffffffff);
      iStack_7c0 = MenuText_CarNameOrMaker(*(undefined4 *)(param_1 + 0x7c4),0xffffffffffffffff);
      uVar11 = MsgId_ForOption(*(undefined1 *)(param_1 + 0x7ad));
      uStack_7c4 = MsgId_ForSlot(uVar11,0);
      uStack_7c8 = MsgId_OnOff(*(undefined1 *)(param_1 + 0x7ae));
      uVar11 = MsgId_ForResult(*(undefined1 *)(param_1 + 0x7af));
      uVar13 = MsgId_YesNo(*(undefined1 *)(param_1 + 0x7b0));
    }
    uVar8 = (*pcVar6)(iStack_7c0);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_2a0,0x47);
    UiText_DrawById(auStack_2a0,uVar8);
    uVar8 = (*pcVar6)(iStack_7b0);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_2e0,0x48);
    UiText_DrawById(auStack_2e0,uVar8);
    uVar12 = (*pcVar6)(iVar10);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_320,0x49);
    UiText_DrawById(auStack_320,uVar12);
    uVar12 = (*pcVar6)(uStack_7c4);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_360,0x4d);
    UiText_DrawById(auStack_360,uVar12);
    uVar12 = (*pcVar6)(uStack_7c8);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_3a0,0x46);
    UiText_DrawById(auStack_3a0,uVar12);
    uVar11 = (*pcVar6)(uVar11);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_3e0,0x4b);
    UiText_DrawById(auStack_3e0,uVar11);
    uVar11 = (*pcVar6)(uVar13);
    pUVar7 = (UiLayout *)(*pcVar5)(0xbf);
    UiElem_GetRect(pUVar7,auStack_420,0x4c);
    UiText_DrawById(auStack_420,uVar11);
    cVar1 = *(char *)(param_1 + 0x779);
    if ((cVar1 == '\x05') || (cVar1 == '\x03')) {
      if ((bVar4) && (bVar3)) {
        iVar9 = Replay_GetHeader();
        uVar8 = *(undefined4 *)(iVar9 + 8);
      }
      else {
        uVar8 = *(undefined4 *)(param_1 + 0x7c0);
      }
      uVar11 = (*pcVar6)(0x1ea0);
      pUVar7 = (UiLayout *)(*pcVar5)(0xc2);
      UiElem_GetRect(pUVar7,auStack_7a0,0x11);
      UiText_DrawById(auStack_7a0,uVar11);
      uVar11 = (*pcVar5)(0xc2);
      uVar13 = (*pcVar6)(0x3a);
      PwInput_DrawName(uVar11,0x12,uVar13,uVar8);
    }
    else if ((cVar1 == '\x04') || (cVar1 == '\x02')) {
      if ((bVar4) && (bVar3)) {
        iVar9 = Replay_GetHeader();
        Time_SplitHms(1,*(undefined4 *)(iVar9 + 4),&uStack_4,&uStack_8,&uStack_c);
      }
      else {
        Time_SplitHms(1,*(undefined4 *)(param_1 + 0x7bc),&uStack_4,&uStack_8,&uStack_c);
      }
      uVar11 = (*pcVar6)(0x1e9f);
      pUVar7 = (UiLayout *)(*pcVar5)(0xc2);
      UiElem_GetRect(pUVar7,auStack_760,0x11);
      UiText_DrawById(auStack_760,uVar11);
      uVar11 = (*pcVar5)(0xc2);
      uVar13 = (*pcVar6)(0x1e7e);
      PwInput_DrawName(uVar11,0x12,uVar13,uStack_4,uStack_8,uStack_c);
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
        iVar9 = Replay_GetHeader();
        uVar11 = (*pcVar5)(0xc0);
        uVar13 = (*pcVar6)(0x1e9e);
        PwInput_DrawName(uVar11,0x1c,uVar13);
        uVar11 = (*pcVar5)(0xc0);
        uVar13 = (*pcVar6)(0x3a);
        PwInput_DrawName(uVar11,0x20,uVar13,*(undefined4 *)(iVar9 + 0x24));
        if (*(char *)(iVar9 + 0xd) == '\x05') {
          uVar11 = (*pcVar6)(0x356);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_4e0,0x1d);
          UiText_DrawById(auStack_4e0,uVar11);
          uVar11 = (*pcVar6)(auStack_60[*(byte *)(iVar9 + 0x37c)]);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_520,0x1e);
          UiText_DrawById(auStack_520,uVar11);
        }
        else if (*(char *)(iVar9 + 0xd) == '\0') {
          uVar11 = (*pcVar6)(0xe0);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_460,0x1d);
          UiText_DrawById(auStack_460,uVar11);
          uVar11 = (*pcVar6)(auStack_60[*(byte *)(iVar9 + 0x37c)]);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_4a0,0x1e);
          UiText_DrawById(auStack_4a0,uVar11);
        }
        else {
          uVar11 = MsgId_RivalNickname(*(undefined4 *)(iVar9 + 0x1c));
          uVar11 = (*pcVar6)(uVar11);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_560,0x1f);
          UiText_DrawById(auStack_560,uVar11);
          uVar11 = (*pcVar6)(auStack_30[*(byte *)(iVar9 + 0x37c)]);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_5a0,0x1d);
          UiText_DrawById(auStack_5a0,uVar11);
        }
      }
      else {
        uVar11 = (*pcVar5)(0xc0);
        uVar13 = (*pcVar6)(0x1e9e);
        PwInput_DrawName(uVar11,0x1c,uVar13);
        uVar11 = (*pcVar5)(0xc0);
        uVar13 = (*pcVar6)(0x3a);
        PwInput_DrawName(uVar11,0x20,uVar13,*(undefined4 *)(param_1 + 0x7d8));
        if (*(int *)(param_1 + 0x7b4) == 5) {
          uVar11 = (*pcVar6)(0x356);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_660,0x1d);
          UiText_DrawById(auStack_660,uVar11);
          uVar11 = (*pcVar6)(auStack_60[*(int *)(param_1 + 0x7b8)]);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_6a0,0x1e);
          UiText_DrawById(auStack_6a0,uVar11);
        }
        else if (*(int *)(param_1 + 0x7b4) == 0) {
          uVar11 = (*pcVar6)(0xe0);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_5e0,0x1d);
          UiText_DrawById(auStack_5e0,uVar11);
          uVar11 = (*pcVar6)(auStack_60[*(int *)(param_1 + 0x7b8)]);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_620,0x1e);
          UiText_DrawById(auStack_620,uVar11);
        }
        else {
          uVar11 = MsgId_RivalNickname(*(undefined4 *)(param_1 + 2000));
          uVar11 = (*pcVar6)(uVar11);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_6e0,0x1f);
          UiText_DrawById(auStack_6e0,uVar11);
          uVar11 = (*pcVar6)(auStack_30[*(int *)(param_1 + 0x7b8)]);
          pUVar7 = (UiLayout *)(*pcVar5)(0xc0);
          UiElem_GetRect(pUVar7,auStack_720,0x1d);
          UiText_DrawById(auStack_720,uVar11);
        }
      }
    }
  }
  return;
}

// 0x002da920  size 0x67c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_NameEntry_DrawKeyboard(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  UiLayout *pUVar6;
  undefined4 uVar7;
  UiLayout *pUVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  undefined8 extraout_a3;
  undefined8 extraout_a3_00;
  undefined8 extraout_a3_01;
  undefined8 extraout_a3_02;
  undefined8 extraout_a3_03;
  undefined8 extraout_a3_04;
  undefined8 extraout_a3_05;
  undefined8 extraout_a3_06;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  undefined4 auStack_c0 [16];
  undefined4 auStack_80 [16];
  undefined4 auStack_40 [16];
  
  pcVar5 = _g_NameEntryShared1;
  piVar13 = (int *)(param_1 + 0x784);
  pUVar6 = (UiLayout *)(*_g_NameEntryShared1)(0xc4);
  bVar4 = false;
  if (*(char *)(param_1 + 0x778) == '\x02') {
    bVar4 = *(char *)(param_1 + 0x779) != '\0';
  }
  if (*(int *)&pUVar6->field_0x354 == 1) {
    UiLayout_UpdateAnim(pUVar6,3);
  }
  else {
    iVar14 = *(int *)(param_1 + 0x7dc);
    iVar2 = *(int *)(param_1 + 0x7a4);
    if (iVar2 == iVar14) {
      *(undefined4 *)(param_1 + 0x7e0) = 0;
    }
    else {
      if (iVar14 < iVar2) {
        uVar7 = (*_g_PwInputShared1)(0x21e);
        *(undefined4 *)&pUVar6->field_0x34c = 0xffffffff;
        *(undefined4 *)&pUVar6->field_0x358 = 0;
        *(undefined4 *)&pUVar6->field_0x348 = 0;
        if (*(int *)&pUVar6->field_0x358 == 0) {
          *(undefined4 *)&pUVar6->field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar6->field_0x354 = 1;
        }
        *(undefined4 *)&pUVar6->field_0x348 = 0;
        if (*(int *)&pUVar6->field_0x358 == 0) {
          *(undefined4 *)&pUVar6->field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar6->field_0x354 = 1;
        }
        *(undefined4 *)&pUVar6->field_0x350 = 0;
        *(undefined4 *)&pUVar6->field_0x358 = uVar7;
        *(undefined4 *)&pUVar6->field_0x354 = 1;
        *(undefined4 *)(param_1 + 0x7e0) = 1;
      }
      else if (iVar2 < iVar14) {
        uVar7 = (*_g_PwInputShared1)(0x21b);
        *(undefined4 *)&pUVar6->field_0x34c = 0xffffffff;
        *(undefined4 *)&pUVar6->field_0x358 = 0;
        *(undefined4 *)&pUVar6->field_0x348 = 0;
        if (*(int *)&pUVar6->field_0x358 == 0) {
          *(undefined4 *)&pUVar6->field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar6->field_0x354 = 1;
        }
        *(undefined4 *)&pUVar6->field_0x348 = 0;
        if (*(int *)&pUVar6->field_0x358 == 0) {
          *(undefined4 *)&pUVar6->field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar6->field_0x354 = 1;
        }
        *(undefined4 *)&pUVar6->field_0x350 = 0;
        *(undefined4 *)&pUVar6->field_0x358 = uVar7;
        *(undefined4 *)&pUVar6->field_0x354 = 1;
        *(undefined4 *)(param_1 + 0x7e0) = 2;
      }
      *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(param_1 + 0x7a4);
      uVar9 = (*pcVar5)(0xc4);
      PwInput_SetKeyState(uVar9,0x3d,1,0);
      if (*(int *)&pUVar6->field_0x354 == 1) {
        UiLayout_UpdateAnim(pUVar6,3);
      }
    }
  }
  if (*(int *)(param_1 + 0x7e0) == 1) {
    iVar14 = 2;
    if (!bVar4) {
      iVar14 = 1;
    }
    cVar1 = *(char *)(param_1 + 0x779);
    iVar14 = *(int *)(param_1 + 0x7a4) - iVar14;
    uVar9 = (*_g_NameEntryShared1)(0xc4);
    pcVar5 = _g_NameEntryShared2;
    if (((cVar1 == '\x03') || (cVar1 == '\x02')) || (cVar1 == '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar10 = (*_g_NameEntryShared2)(0x1e97);
    }
    else {
      uVar10 = (*_g_NameEntryShared2)(0x1e98);
    }
    if (iVar14 == -1) {
      uVar10 = (*pcVar5)(0x1e7f);
      UiElem_GetRect((UiLayout *)uVar9,auStack_40,(long)DAT_003421b8);
      UiText_DrawById(auStack_40,uVar10);
      uVar9 = extraout_a3_01;
    }
    else {
      PwInput_DrawName(uVar9,DAT_003421b8,uVar10,iVar14 + 1);
      uVar9 = extraout_a3_00;
    }
  }
  else if (*(int *)(param_1 + 0x7e0) == 2) {
    cVar1 = *(char *)(param_1 + 0x779);
    iVar14 = (*(int *)(param_1 + 0x7a4) + 6) - (uint)bVar4;
    uVar9 = (*_g_NameEntryShared1)(0xc4);
    pcVar5 = _g_NameEntryShared2;
    if (((cVar1 == '\x03') || (cVar1 == '\x02')) || (cVar1 == '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar10 = (*_g_NameEntryShared2)(0x1e97);
    }
    else {
      uVar10 = (*_g_NameEntryShared2)(0x1e98);
    }
    if (iVar14 == -1) {
      uVar10 = (*pcVar5)(0x1e7f);
      UiElem_GetRect((UiLayout *)uVar9,auStack_80,(long)DAT_003421b8);
      UiText_DrawById(auStack_80,uVar10);
      uVar9 = extraout_a3_02;
    }
    else {
      PwInput_DrawName(uVar9,DAT_003421b8,uVar10,iVar14 + 1);
      uVar9 = extraout_a3;
    }
  }
  else {
    uVar9 = (*pcVar5)(0xc4);
    PwInput_SetKeyState(uVar9,*(undefined4 *)(&DAT_003421c0 + *(int *)(param_1 + 0x79c) * 4),1,0);
    uVar9 = extraout_a3_03;
  }
  iVar14 = 0;
  piVar15 = &DAT_003421e0;
  piVar12 = &DAT_003421a0;
  while( true ) {
    bVar11 = (byte)uVar9;
    if (*(int *)(param_1 + 0x7a0) < 7) {
      bVar3 = iVar14 < *(int *)(param_1 + 0x7a0);
    }
    else {
      bVar3 = iVar14 < 6;
    }
    if (!bVar3) break;
    UiElem_SetPropFloat(pUVar6,(long)*piVar15,8,bVar11);
    iVar2 = *piVar13;
    cVar1 = *(char *)(param_1 + 0x779);
    pUVar8 = (UiLayout *)(*_g_NameEntryShared1)(0xc4);
    pcVar5 = _g_NameEntryShared2;
    if (((cVar1 == '\x03') || (cVar1 == '\x02')) || (cVar1 == '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar9 = (*_g_NameEntryShared2)(0x1e97);
    }
    else {
      uVar9 = (*_g_NameEntryShared2)(0x1e98);
    }
    if (iVar2 == -1) {
      uVar9 = (*pcVar5)(0x1e7f);
      UiElem_GetRect(pUVar8,auStack_c0,(long)*piVar12);
      UiText_DrawById(auStack_c0,uVar9);
      uVar9 = extraout_a3_05;
    }
    else {
      PwInput_DrawName(pUVar8,*piVar12,uVar9,iVar2 + 1);
      uVar9 = extraout_a3_04;
    }
    piVar15 = piVar15 + 1;
    piVar13 = piVar13 + 1;
    piVar12 = piVar12 + 1;
    iVar14 = iVar14 + 1;
  }
  if (iVar14 < 6) {
    piVar13 = &DAT_003421e0 + iVar14;
    do {
      UiElem_SetPropFloat(pUVar6,(long)*piVar13,8,(byte)uVar9);
      bVar11 = (byte)extraout_a3_06;
      iVar14 = iVar14 + 1;
      piVar13 = piVar13 + 1;
      uVar9 = extraout_a3_06;
    } while (iVar14 < 6);
    cVar1 = *(char *)(param_1 + 0x768);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x768);
  }
  if (cVar1 == -1) {
    PwInput_AnimateCursor(1);
    if (*(int *)(param_1 + 0x7a8) < 7) {
      UiElem_SetPropFloat(pUVar6,0x42,8,extraout_a3_lo);
      UiElem_SetPropFloat(pUVar6,0x43,8,extraout_a3_lo_00);
    }
    else if (*(int *)(param_1 + 0x7a4) == 0) {
      UiElem_SetPropFloat(pUVar6,0x42,8,extraout_a3_lo);
    }
    else if (*(int *)(param_1 + 0x7a8) ==
             (*(int *)(param_1 + 0x7a4) + *(int *)(param_1 + 0x7a0)) - (uint)bVar4) {
      UiElem_SetPropFloat(pUVar6,0x43,8,extraout_a3_lo);
    }
  }
  else {
    UiElem_SetPropFloat(pUVar6,0x42,8,bVar11);
    UiElem_SetPropFloat(pUVar6,0x43,8,extraout_a3_lo_01);
  }
  return;
}

// 0x002dafb0  size 0x42c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_NameEntry_DrawName(int param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  UiLayout *pUVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 auStack_c0 [16];
  undefined4 auStack_80 [16];
  undefined4 auStack_40 [16];
  
  pcVar3 = _g_NameEntryShared2;
  if (*(char *)(param_1 + 0x778) == '\x02') {
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xb6);
    if (pUVar4->unk_318 == 1) {
      UiLayout_UpdateAnim(pUVar4,0);
    }
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xb6);
    UiLayout_Draw(1.0,pUVar4);
  }
  else if (*(byte *)(param_1 + 0x779) - 4 < 2) {
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xb5);
    if (pUVar4->unk_318 == 1) {
      UiLayout_UpdateAnim(pUVar4,0);
    }
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xb5);
    UiLayout_Draw(1.0,pUVar4);
  }
  else {
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xb4);
    if (pUVar4->unk_318 == 1) {
      UiLayout_UpdateAnim(pUVar4,0);
    }
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xb4);
    UiLayout_Draw(1.0,pUVar4);
  }
  if (param_2 == 0) {
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xb7);
    UiElem_SetPropInt(pUVar4,0x15,9,0);
  }
  else {
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xb7);
    UiElem_SetPropInt(pUVar4,0x15,9,2);
  }
  pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xb7);
  UiLayout_Draw(1.0,pUVar4);
  pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xba);
  UiLayout_Draw(1.0,pUVar4);
  cVar1 = *(char *)(param_1 + 0x779);
  if ((cVar1 == '\x05') || (cVar1 == '\x03')) {
    uVar5 = (*pcVar3)(0x1e9b);
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xba);
    UiElem_GetRect(pUVar4,auStack_c0,0xc);
    UiText_DrawById(auStack_c0,uVar5);
  }
  else if ((cVar1 == '\x04') || (cVar1 == '\x02')) {
    uVar5 = (*pcVar3)(0x1e9a);
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xba);
    UiElem_GetRect(pUVar4,auStack_80,0xc);
    UiText_DrawById(auStack_80,uVar5);
  }
  else {
    if (cVar1 != '\x01') {
      iVar7 = *(int *)(param_1 + 0x770);
      goto LAB_002db20c;
    }
    uVar5 = (*pcVar3)(0x1e99);
    pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xba);
    UiElem_GetRect(pUVar4,auStack_40,0xc);
    UiText_DrawById(auStack_40,uVar5);
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
      maybe_NameEntry_DrawField
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
      maybe_NameEntry_DrawField
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
  maybe_NameEntry_DrawField
            (param_1 + 0x588,*(undefined1 *)(param_1 + 0x769),*(undefined1 *)(param_1 + 0x76a));
  return;
}

// 0x002db3e0  size 0x34c
undefined4 maybe_NameEntry_StepSave(int param_1)

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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_NameEntry_Update(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  UiLayout *pUVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  iVar6 = (int)param_1;
  uVar9 = *(uint *)(iVar6 + 0x774);
  uVar3 = *(uint *)(iVar6 + 0x770);
  if (uVar3 == uVar9) goto LAB_002dbb08;
  if (uVar9 < 0x26) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar9) {
    default:
      goto switchD_002db788_caseD_0;
    case 1:
      uVar11 = 0xe;
      break;
    case 4:
      uVar11 = 3;
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
      uVar11 = 1;
      break;
    case 0xc:
      uVar11 = 4;
    }
  }
  else {
switchD_002db788_caseD_0:
    uVar11 = 0;
  }
  if (uVar3 < 0x26) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar3) {
    default:
      goto switchD_002db7d4_caseD_0;
    case 1:
      uVar10 = 0xe;
      break;
    case 4:
      uVar10 = 3;
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
      uVar10 = 1;
      break;
    case 0xc:
      uVar10 = 4;
    }
  }
  else {
switchD_002db7d4_caseD_0:
    uVar10 = 0;
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
      PwInput_SetupGrid(iVar6 + 0x588,7,uVar3);
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
      PwInput_SetupGrid(iVar6 + 0x588,5,uVar3);
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
      PwInput_SetupGrid(iVar6 + 0x588,6,uVar3);
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
      *(uint *)(iVar6 + 0x66c) = uVar3;
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
      PwInput_SetupGrid(iVar6 + 0x588,uVar10,uVar3);
    }
  }
  if (uVar11 != uVar10) {
    PwInput_Open(iVar6 + 0x588);
  }
  *(undefined4 *)(iVar6 + 0x774) = *(undefined4 *)(iVar6 + 0x770);
  pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xc4);
  UiElem_SetPropFloat(pUVar4,0x42,8,extraout_a3_lo);
  pUVar4 = (UiLayout *)(*_g_NameEntryShared1)(0xc4);
  UiElem_SetPropFloat(pUVar4,0x43,8,extraout_a3_lo_00);
LAB_002dbb08:
  PwInput_Animate(iVar6 + 0x588);
  if ((((*(int *)(iVar6 + 0x66c) == 0xc) && (*(char *)(iVar6 + 0x768) == '\0')) ||
      ((*(int *)(iVar6 + 0x75c) == 0xc && (*(char *)(iVar6 + 0x768) == '\x01')))) ||
     ((*(int *)(iVar6 + 0x66c) == 0xc && (*(char *)(iVar6 + 0x768) == -1)))) {
    maybe_NameEntry_DrawKeyboard(param_1);
    maybe_NameEntry_DrawInfo(param_1);
    maybe_NameEntry_DrawName(param_1,0);
  }
  else {
    maybe_NameEntry_DrawName(param_1,1);
  }
  return;
}

// 0x002dbb80  size 0xe8
void maybe_NameEntry_Reset(int param_1)

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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_NameEntry_Animate(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  UiLayout *pUVar5;
  
  pcVar2 = _g_NameEntryShared1;
  if (*(char *)(param_1 + 0x778) != '\x02') {
    if (*(byte *)(param_1 + 0x779) - 4 < 2) {
      uVar3 = (*_g_PwInputShared1)(0x239);
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
      uVar3 = (*_g_PwInputShared1)(0x226);
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
    pUVar5 = (UiLayout *)(*pcVar2)(0xba);
    UiElem_SetPropInt(pUVar5,0xb,0x16,6);
  }
  else if ((cVar1 == '\x04') || (cVar1 == '\x02')) {
    pUVar5 = (UiLayout *)(*pcVar2)(0xba);
    UiElem_SetPropInt(pUVar5,0xb,0x16,5);
  }
  else if (cVar1 == '\x01') {
    pUVar5 = (UiLayout *)(*pcVar2)(0xba);
    UiElem_SetPropInt(pUVar5,0xb,0x16,8);
  }
  pUVar5 = (UiLayout *)(*pcVar2)(0xc4);
  pcVar2 = _g_PwInputShared1;
  uVar3 = _s_NameEntry_Animate_2;
  iVar4 = _s_NameEntry_Animate_1 * 0x18;
  *(UiLayout **)(&DAT_00342100 + iVar4) = pUVar5;
  *(undefined4 *)(&DAT_00342104 + iVar4) = 2;
  *(undefined4 *)(iVar4 + 0x342108) = uVar3;
  iVar4 = (*pcVar2)(0x68);
  UiLayout_IsAnimDone(pUVar5,0x13,_s_NameEntry_Animate_2,iVar4,1);
  pcVar2 = _g_PwInputShared1;
  *(undefined4 *)(_s_NameEntry_Animate_1 * 0x18 + 0x34210c) = _s_NameEntry_Animate_3;
  iVar4 = (*pcVar2)(0x6a);
  UiLayout_IsAnimDone(pUVar5,0x12,_s_NameEntry_Animate_3,iVar4,1);
  DAT_003420f0 = 0;
  DAT_003420f4 = 0xffffffff;
  return;
}

// 0x002dbf20  size 0xc
void NameEntry_SetMode(int param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x778) = param_2;
  *(undefined1 *)(param_1 + 0x779) = param_3;
  return;
}

// 0x002dbf30  size 0x7a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_NameEntry_DrawField(int *param_1,byte param_2,uint param_3)

{
  UiLayout *pUVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined4 auStack_c0 [16];
  undefined4 auStack_80 [16];
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  
  pcVar5 = _g_NameEntryShared2;
  pUVar1 = (UiLayout *)*param_1;
  if (pUVar1 == (UiLayout *)0x0) {
    return;
  }
  if (param_1[0x3a] < 0) {
    return;
  }
  param_3 = param_3 & 0xff;
  uVar11 = 0x96;
  if (param_3 != 0) {
    uVar11 = 0x1b3;
  }
  iVar14 = _g_ScrSaveShared2 + 1;
  uVar7 = (*_g_NameEntryShared2)(*(undefined4 *)(&DAT_00342170 + param_3 * 4));
  bVar3 = false;
  uVar13 = 0;
  piVar12 = param_1;
  do {
    iVar2 = *piVar12;
    uVar13 = uVar13 + 1;
    piVar12 = piVar12 + 0x13;
    bVar3 = (bool)(bVar3 | iVar2 != 0);
  } while (uVar13 < 3);
  if (!bVar3) {
    return;
  }
  if (param_2 == 0) {
    uVar6 = (*pcVar5)(0x1e8e);
    uVar4 = _DAT_00342188;
    UiElem_GetRect(pUVar1,auStack_40,(long)param_1[0x3b]);
    uStack_2c = uVar4;
    UiText_DrawById(auStack_40,uVar6);
  }
  else {
    if ((param_2 != 1) && (param_2 != 2)) {
      uVar13 = param_1[0x39];
      goto LAB_002dc0d0;
    }
    uVar8 = (*pcVar5)(0x1e8d);
    uVar9 = (*pcVar5)(*(undefined4 *)((uint)param_2 * 4 + 0x342130));
    uVar10 = (*pcVar5)(*(undefined4 *)(param_3 * 4 + 0x342150));
    PwInput_DrawNameShort
              (pUVar1,param_1[0x3b],*(undefined4 *)(&DAT_00342188 + (uint)param_2 * 4),uVar8,uVar9,
               uVar10);
  }
  uVar13 = param_1[0x39];
LAB_002dc0d0:
  if (uVar13 < 0x26) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar13) {
    default:
      uVar11 = (*pcVar5)(0x1ea4);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 4:
      if (param_2 == 1) {
        uVar11 = (*pcVar5)(0x1ea2);
        UiElem_GetRect(pUVar1,auStack_c0,(long)param_1[0x3a]);
        UiText_DrawById(auStack_c0,uVar11);
      }
      else if (param_2 == 2) {
        uVar11 = (*pcVar5)(0x1ea3);
        UiElem_GetRect(pUVar1,auStack_80,(long)param_1[0x3a]);
        UiText_DrawById(auStack_80,uVar11);
      }
      break;
    case 8:
      uVar11 = (*pcVar5)(0x1ea5);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 9:
      uVar11 = (*pcVar5)(0x1ea6);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,iVar14);
      break;
    case 10:
      if ((param_2 == 1) && (param_3 - 4 < 2)) {
        uVar11 = (*pcVar5)(0x1ea8);
        PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      }
      else if ((param_2 == 1) && (param_3 != 0)) {
        uVar11 = (*pcVar5)(0x1ea9);
        PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,
                         *(undefined4 *)(&DAT_00342140 + (param_3 - 1) * 4),iVar14);
      }
      else {
        uVar11 = (*pcVar5)(0x1ea7);
        PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      }
      break;
    case 0xb:
      uVar11 = (*pcVar5)(0x1eaa);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,iVar14);
      break;
    case 0xc:
      break;
    case 0xd:
      uVar11 = (*pcVar5)(0x1eab);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0xe:
      uVar11 = (*pcVar5)(0x1ead);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,iVar14,uVar7);
      break;
    case 0xf:
      uVar11 = (*pcVar5)(0x1eae);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x10:
      uVar11 = (*pcVar5)(0x1eb0);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x11:
      uVar11 = (*pcVar5)(0x1eb2);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x12:
      uVar11 = (*pcVar5)(0x1eb4);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x13:
      uVar11 = (*pcVar5)(0x1eb6);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x14:
      uVar11 = (*pcVar5)(0x1eb8);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x15:
      uVar11 = (*pcVar5)(0x1eba);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,iVar14);
      break;
    case 0x16:
      uVar11 = (*pcVar5)(0x1ebb);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,iVar14);
      break;
    case 0x17:
      uVar11 = (*pcVar5)(0x1ebc);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x18:
      uVar11 = (*pcVar5)(0x1ebe);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x19:
      uVar11 = (*pcVar5)(0x1ec1);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x1a:
      uVar11 = (*pcVar5)(0x1ec3);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x1b:
      uVar11 = (*pcVar5)(0x1ec5);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14,uVar7);
      break;
    case 0x1c:
      uVar11 = (*pcVar5)(0x1ec7);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,0x14,uVar7);
      break;
    case 0x1d:
    case 0x1e:
      uVar8 = (*pcVar5)(0x1ec8);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar8,iVar14,uVar11,uVar7);
      break;
    case 0x1f:
      uVar8 = (*pcVar5)(0x1ec9);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar8,iVar14,uVar11,uVar7,uVar7);
      break;
    case 0x20:
      uVar8 = (*pcVar5)(0x1eca);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar8,iVar14,uVar11,uVar7,uVar7);
      break;
    case 0x21:
      uVar11 = (*pcVar5)(0x1ecb);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14,uVar7);
      break;
    case 0x22:
      uVar11 = (*pcVar5)(0x1ecc);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14,uVar7);
      break;
    case 0x23:
      uVar11 = (*pcVar5)(0x1ece);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,iVar14);
      break;
    case 0x24:
      uVar11 = (*pcVar5)(0x1ecf);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,uVar7,iVar14);
      break;
    case 0x25:
      uVar11 = (*pcVar5)(0x1ecd);
      PwInput_DrawName(pUVar1,param_1[0x3a],uVar11,iVar14);
    }
  }
  return;
}

