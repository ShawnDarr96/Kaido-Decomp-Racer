// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0027c000 - 0x00280000
#include "ghidra_types.h"

// 0x0027cb10  size 0x258
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_Equipment(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x11f);
    iVar2 = UiMgr_FindLayout(0x5e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar3;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0x120);
    iVar2 = UiMgr_FindLayout(0x5e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x5e,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if ((*(int *)(param_1 + 0xa18) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x5e), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0xa18) = 0;
  }
  MenuWnd_DrawText(0x5d,0x26,0x44);
  ScrCareer_Draw_Power(*(undefined4 *)(param_1 + 8),0);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x5e,*(undefined4 *)(&DAT_0032dc00 + *(int *)(param_1 + 8) * 4),1,0);
  }
  iVar2 = UiMgr_FindLayout(0x5d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x5e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032dc20 + *(int *)(param_1 + 8) * 4));
  return;
}

// 0x0027cd70  size 0x464
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_InspectCarParts_cd70(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 0xa08) != 0)) {
    uVar6 = 4;
  }
  else {
    uVar6 = 2;
  }
  iVar2 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x11a);
    iVar2 = UiMgr_FindLayout(0x5d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar3;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0x11b);
    iVar2 = UiMgr_FindLayout(0x5d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0x11c);
    iVar2 = UiMgr_FindLayout(0x5d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x11d);
    iVar2 = UiMgr_FindLayout(0x5d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x11e);
    iVar2 = UiMgr_FindLayout(0x5d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    Menu_ClearSlot(0);
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x11c,2);
  }
  lVar4 = UiLayout_UpdateAnimById(0x5d,0);
  lVar5 = UiLayout_UpdateAnimById(0x5d,1);
  if (lVar4 == 0 && lVar5 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) != 0) {
    lVar4 = UiLayout_UpdateAnimById(0x5d,3);
    lVar5 = UiLayout_UpdateAnimById(0x5d,uVar6);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x5d,*(undefined4 *)(&DAT_0032dbd8 + *(int *)(param_1 + 4) * 4),1,0);
  }
  lVar4 = MenuText_CarFullName(0xffffffffffffffff,0);
  uVar6 = 0;
  if (lVar4 == 0x11) {
    uVar6 = 3;
  }
  MenuWnd_DrawTextId(0x5d,0x26,uVar6,0x44);
  MenuWnd_DrawText(0x5d,0x27,0x1df);
  MenuWnd_DrawText(0x5d,0x28,0x1e0);
  iVar2 = UiMgr_FindLayout(0x5d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032dbe8 + *(int *)(param_1 + 4) * 4));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0027d1e0  size 0x2ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_TuneUp_d1e0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar2 = param_1[0x285];
  param_1[0x285] = 0;
  if (iVar2 != 0) {
    iVar2 = UiMgr_FindLayout(0x5c);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    iVar2 = UiMgr_FindLayout(0x5c);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    Menu_ClearSlot(0);
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x116,3);
    if (param_1[0x280] != -1) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,0);
    }
  }
  lVar3 = UiLayout_UpdateAnimById(0x5c,0);
  if (lVar3 == 0) {
    param_1[0x284] = 0;
  }
  if ((param_1[0x286] != 0) && (lVar3 = UiLayout_UpdateAnimById(0x5c), lVar3 == 0)) {
    param_1[0x286] = 0;
    Menu_BlockInput(&g_MenuMgr->field_0x654);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x5c,*(undefined4 *)(*param_1 * 4 + 0x36ed60),1,0);
  }
  MenuWnd_DrawText(0x2d,0x39,0xec);
  MenuWnd_DrawText(0x35,0x14,0xf5);
  MenuWnd_DrawText(0x5c,0xd,0xf7);
  if (param_1[0x181] == 0) {
    MenuWnd_DrawTextId(0x5c,0xe,3,0xf8);
  }
  else {
    MenuWnd_DrawText(0x5c,0xe,0xf8);
  }
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetMoney(uVar4);
  MenuWnd_DrawNumber(0x2d,0x38,uVar4);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar2 = UiMgr_FindLayout(0x35);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x2d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x5c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(*param_1 * 4 + 0x36ed68));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0027d4d0  size 0x14
/* page identified from its states' on-screen text (N154) */

void maybe_PageWheels_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0027d4f0  size 0x128
/* page identified from its states' on-screen text (N154) */

void maybe_PageWheels_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_ScrCareer_Draw_TuneUp_d1e0_0032db60)[*(int *)((int)param_1 + 0xa04)])(param_1);
  if (*(int *)((int)param_1 + 0xa04) != 0) {
    iVar1 = UiMgr_FindLayout(0x5b);
    UiLayout_UpdateAnim(&g_UiMgr->slots[iVar1].layout,0);
    iVar1 = UiMgr_FindLayout(0x5b);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  }
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = UiLayout_UpdateAnimById(0x5c,1), lVar2 == 0)) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x0027d620  size 0x194
/* page identified from its states' on-screen text (N154) */

void maybe_PageWheels_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x2c);
  iVar3 = UiMgr_FindLayout(0x5c);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
  pUVar1[iVar3].layout.unk_318 = 1;
  uVar2 = UiRes_GetLayoutData(0x2d);
  iVar3 = UiMgr_FindLayout(0x5c);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x324 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
    pUVar1[iVar3].layout.animState = 0;
  }
  else {
    pUVar1[iVar3].layout.animState = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
    pUVar1[iVar3].layout.animState = 0;
  }
  else {
    pUVar1[iVar3].layout.animState = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x328 = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
  pUVar1[iVar3].layout.animState = 1;
  uVar2 = UiRes_GetLayoutData(0x198);
  iVar3 = UiMgr_FindLayout(0x5b);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
  pUVar1[iVar3].layout.unk_318 = 1;
  return;
}

// 0x0027d7c0  size 0x400
void maybe_Setting_AnimateGauge
               (float param_1,float param_2,float *param_3,int param_4,long param_5,int param_6)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float *pfVar5;
  UiLayout *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_5 == 0) {
    iVar2 = 0;
    if (0 < param_4) {
      fVar10 = param_2 - param_1;
      pfVar5 = param_3;
      do {
        iVar3 = UiMgr_FindLayout(pfVar5[6]);
        pUVar6 = &g_UiMgr->slots[iVar3].layout;
        UiElem_SetPropFloat(0,pUVar6,pfVar5[7],8);
        UiElem_SetPropFloat(0,pUVar6,pfVar5[9],8);
        UiElem_SetPropInt(pUVar6,pfVar5[8],9,0);
        fVar7 = pfVar5[1];
        fVar11 = pfVar5[3];
        fVar8 = fVar10 / (*pfVar5 - fVar7);
        fVar9 = (fVar8 * (pfVar5[2] - fVar7) - 352.0) + param_1;
        UiElem_SetPropFloat(fVar9,pUVar6,pfVar5[7],0x19);
        UiElem_SetPropFloat(fVar9,pUVar6,pfVar5[7],0x1a);
        fVar8 = (fVar8 * (fVar11 - fVar7) - 352.0) + param_1;
        UiElem_SetPropFloat(fVar8,pUVar6,pfVar5[7],0x1b);
        UiElem_SetPropFloat(fVar8,pUVar6,pfVar5[7],0x1c);
        iVar2 = iVar2 + 1;
        pfVar5 = pfVar5 + 10;
      } while (iVar2 < param_4);
    }
    if (param_6 < param_4) {
      iVar2 = UiMgr_FindLayout(param_3[param_6 * 10 + 6]);
      pUVar1 = g_UiMgr->slots;
      uVar4 = UiRes_GetLayoutData(0x21);
      UiLayout_IsAnimDone(&pUVar1[iVar2].layout,9,param_3[param_6 * 10 + 8],uVar4,1);
    }
  }
  else if (param_6 < param_4) {
    iVar2 = UiMgr_FindLayout(param_3[param_6 * 10 + 6]);
    pUVar1 = g_UiMgr->slots;
    iVar3 = UiMgr_FindLayout(param_3[param_6 * 10 + 6]);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,param_3[param_6 * 10 + 7],8);
    iVar3 = UiMgr_FindLayout(param_3[param_6 * 10 + 6]);
    UiElem_SetPropFloat(0x3f333333,&g_UiMgr->slots[iVar3].layout,param_3[param_6 * 10 + 9],8);
    UiLayout_UpdateAnim(&pUVar1[iVar2].layout,9);
  }
  iVar2 = 0;
  if (0 < param_4) {
    do {
      iVar3 = UiMgr_FindLayout(param_3[6]);
      fVar10 = param_3[4];
      pUVar6 = &g_UiMgr->slots[iVar3].layout;
      if ((*param_3 < fVar10) || (fVar10 < param_3[1])) {
        iVar3 = UiMgr_FindLayout(param_3[6]);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,param_3[8],8);
      }
      else {
        iVar3 = UiMgr_FindLayout(param_3[6]);
        UiElem_SetPropFloat(0x3f333333,&g_UiMgr->slots[iVar3].layout,param_3[8],8);
        fVar8 = param_3[1];
        fVar11 = (param_2 - param_1) / (*param_3 - fVar8);
        UiElem_SetPropFloat(fVar11 * (param_3[5] - fVar8) + param_1 + 0.0,pUVar6,param_3[9],1);
        UiElem_SetPropFloat(fVar11 * (fVar10 - fVar8) + param_1 + 0.0,pUVar6,param_3[8],1);
      }
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 10;
    } while (iVar2 < param_4);
  }
  return;
}

// 0x0027dbc0  size 0x5c4
void ScrGarage_Draw_InitialTorque(int param_1,long param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 unaff_s2;
  
  cVar1 = *(char *)(param_1 + 200);
  cVar2 = *(char *)(param_1 + 0xc9);
  if (param_2 == 0) {
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,7);
    sVar3 = PartDb_GetInfo(uVar6);
    if (sVar3 == 0x6e) {
      unaff_s2 = 0x9ce;
    }
    else if (sVar3 == 0x6b) {
      unaff_s2 = 0x9cd;
    }
    else if (sVar3 == 0x67) {
      unaff_s2 = 0x9cc;
    }
    MenuWnd_DrawText(0x3a,0x30,unaff_s2);
    MenuWnd_DrawText(0x3a,0x23,0x1a1);
    MenuWnd_DrawTextId(0x3a,0x28,1,0x2f);
    MenuWnd_DrawTextId(0x3a,0x29,1,0x30);
    MenuWnd_DrawText(0x3a,0x21,0x1a2);
    MenuWnd_DrawText(0x3a,0x22,0x1a3);
    if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
      iVar4 = UiMgr_FindLayout(0x3a);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0xc,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    else {
      maybe_Setting_DrawValueLabel(cVar1 * 10,0x3a,0x2a,0x1d3,0x1d4,0x1d5,0);
      iVar4 = UiMgr_FindLayout(0x3a);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,DAT_0032e650,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar5 & 2) == 0) {
      iVar4 = UiMgr_FindLayout(0x3a);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x19,8);
    }
    else {
      maybe_Setting_DrawValueLabel(cVar2 * 10,0x3a,0x2b,0x1d3,0x1d4,0x1d5,0);
      iVar4 = UiMgr_FindLayout(0x3a);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,DAT_0032e654,8);
    }
  }
  else {
    MenuWnd_DrawText(0x41,0x4c,0x21e);
    MenuWnd_DrawText(0x41,0x4d,0x21f);
    MenuWnd_DrawTextId(0x41,0x67,4,0x220);
    MenuWnd_DrawTextId(0x41,0x58,1,0x2f);
    MenuWnd_DrawTextId(0x41,0x59,1,0x30);
    MenuWnd_DrawTextId(0x41,0x5d,1,0x2f);
    MenuWnd_DrawTextId(0x41,0x5e,1,0x30);
    MenuWnd_DrawText(0x41,0x4a,0x1a2);
    MenuWnd_DrawText(0x41,0x4b,0x1a3);
    MenuWnd_DrawText(0x41,0x4e,0x1a2);
    MenuWnd_DrawText(0x41,0x4f,0x1a3);
    MenuWnd_DrawText(0x41,0x5a,0x2c);
    MenuWnd_DrawText(0x41,0x5b,0x2d);
    MenuWnd_DrawText(0x41,0x5c,0x2e);
    if ((*(uint *)(param_1 + 0x30) & 4) == 0) {
      iVar4 = UiMgr_FindLayout(0x41);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0xc,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    else {
      MenuWnd_DrawLabel(0x41,0x5f,0x3a,*(char *)(param_1 + 0xd8) * 10 + 0x32);
      iVar4 = UiMgr_FindLayout(0x41);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,DAT_0032e658,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar5 & 8) == 0) {
      iVar4 = UiMgr_FindLayout(0x41);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x19,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    else {
      MenuWnd_DrawLabel(0x41,0x60,0x3a,*(char *)(param_1 + 0xda) * 10 + 0x32);
      iVar4 = UiMgr_FindLayout(0x41);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,DAT_0032e65c,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar5 & 0x10) == 0) {
      iVar4 = UiMgr_FindLayout(0x41);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x37,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    else {
      MenuWnd_DrawLabel(0x41,0x61,0x3a,*(char *)(param_1 + 0xd9) * 10 + 0x32);
      iVar4 = UiMgr_FindLayout(0x41);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,DAT_0032e660,8);
      uVar5 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar5 & 0x20) == 0) {
      iVar4 = UiMgr_FindLayout(0x41);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x44,8);
    }
    else {
      MenuWnd_DrawLabel(0x41,0x62,0x3a,*(char *)(param_1 + 0xdb) * 10 + 0x32);
      iVar4 = UiMgr_FindLayout(0x41);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,DAT_0032e664,8);
    }
  }
  return;
}

// 0x0027e190  size 0x314
void MenuScr_Draw_SpringRate(int param_1,long param_2)

{
  if (param_2 == 0) {
    MenuWnd_DrawText(0x3d,0x3d,0x1a6);
    MenuWnd_DrawText(0x3d,0x3e,0x1a7);
    MenuWnd_DrawTextId(0x3d,0x46,1,0x2f);
    MenuWnd_DrawTextId(0x3d,0x47,1,0x30);
    MenuWnd_DrawTextId(0x3d,0x4c,1,0x2f);
    MenuWnd_DrawTextId(0x3d,0x4d,1,0x30);
    MenuWnd_DrawText(0x3d,0x3b,0x1a4);
    MenuWnd_DrawText(0x3d,0x3c,0x1a5);
    MenuWnd_DrawText(0x3d,0x3f,0x1a4);
    MenuWnd_DrawText(0x3d,0x40,0x1a5);
    maybe_Setting_DrawValueLabel(*(char *)(param_1 + 0xce) * 10,0x3d,0x48,0x1d0,0x1d1,0x1d2,0);
    maybe_Setting_DrawValueLabel(*(char *)(param_1 + 0xcf) * 10,0x3d,0x49,0x1d0,0x1d1,0x1d2,0);
    maybe_Setting_DrawValueLabel(*(char *)(param_1 + 0xd0) * 10,0x3d,0x4a,0x1d0,0x1d1,0x1d2,0);
    maybe_Setting_DrawValueLabel(*(char *)(param_1 + 0xd1) * 10,0x3d,0x4b,0x1d0,0x1d1,0x1d2,0);
  }
  else {
    MenuWnd_DrawText(0x3e,0x4b,0x1a8);
    MenuWnd_DrawText(0x3e,0x4c,0x1a9);
    MenuWnd_DrawText(0x3e,0x49,0x1a4);
    MenuWnd_DrawText(0x3e,0x4a,0x1a5);
    MenuWnd_DrawText(0x3e,0x4d,0x227);
    MenuWnd_DrawText(0x3e,0x4e,0x228);
    MenuWnd_DrawTextId(0x3e,0x57,1,0x2f);
    MenuWnd_DrawTextId(0x3e,0x58,1,0x30);
    MenuWnd_DrawTextId(0x3e,0x5c,1,0x2f);
    MenuWnd_DrawTextId(0x3e,0x5d,1,0x30);
    MenuWnd_DrawText(0x3e,0x59,0x2c);
    MenuWnd_DrawText(0x3e,0x5a,0x2d);
    MenuWnd_DrawText(0x3e,0x5b,0x2e);
    maybe_Setting_DrawValueLabel(*(char *)(param_1 + 0xd2) * 10,0x3e,0x5e,0x1d0,0x1d1,0x1d2,0);
    maybe_Setting_DrawValueLabel(*(char *)(param_1 + 0xd3) * 10,0x3e,0x5f,0x1d0,0x1d1,0x1d2,0);
    maybe_Setting_DrawValueLabel(*(char *)(param_1 + 0xd4) * 5,0x3e,0x60,0x1d6,0x1d7,0x1d8,0);
    maybe_Setting_DrawValueLabel(*(char *)(param_1 + 0xd5) * 5,0x3e,0x61,0x1d6,0x1d7,0x1d8,0);
  }
  return;
}

// 0x0027e4b0  size 0x13c
void maybe_Setting_DrawValueLabel
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (param_7 == 1) {
    if (param_1 < 1) {
      if (param_1 < 0) {
        MenuWnd_DrawLabel(param_2,param_3,param_5,-iVar1 / 0x3c,-iVar1 % 0x3c);
      }
      else {
        MenuWnd_DrawLabel(param_2,param_3,param_6,0,0);
      }
    }
    else {
      MenuWnd_DrawLabel(param_2,param_3,param_4,iVar1 / 0x3c,iVar1 % 0x3c);
    }
  }
  else if (param_1 < 1) {
    if (param_1 < 0) {
      MenuWnd_DrawLabel(param_2,param_3,param_5,-iVar1);
    }
    else {
      MenuWnd_DrawLabel(param_2,param_3,param_6,0);
    }
  }
  else {
    MenuWnd_DrawLabel(param_2,param_3,param_4,param_1);
  }
  return;
}

// 0x0027e5f0  size 0x380
void maybe_PartInfo_Draw(int *param_1)

{
  UiLayoutSlot *pUVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 unaff_s1_lo;
  undefined4 unaff_s2_lo;
  
  iVar5 = param_1[0xf];
  if (iVar5 == 4) {
LAB_0027e75c:
    lVar6 = UiLayout_UpdateAnimById(0x10,1);
    if (lVar6 == 0) {
      param_1[0xf] = 5;
    }
  }
  else {
    if (iVar5 == 3) {
      param_1[0xf] = 4;
      goto LAB_0027e75c;
    }
    if (iVar5 != 2) {
      if (iVar5 != 1) {
        if (iVar5 != 0) {
          uVar4 = param_1[3];
          goto LAB_0027e77c;
        }
        uVar3 = UiRes_GetLayoutData(0x411);
        iVar5 = UiMgr_FindLayout(0x10);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x310 = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = 0;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
        if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
          pUVar1[iVar5].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar5].layout.unk_318 = 1;
        }
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
        if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
          pUVar1[iVar5].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar5].layout.unk_318 = 1;
        }
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar3;
        pUVar1[iVar5].layout.unk_318 = 1;
        uVar3 = UiRes_GetLayoutData(0x412);
        iVar5 = UiMgr_FindLayout(0x10);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x324 = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = 0;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
          pUVar1[iVar5].layout.animState = 0;
        }
        else {
          pUVar1[iVar5].layout.animState = 1;
        }
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
          pUVar1[iVar5].layout.animState = 0;
        }
        else {
          pUVar1[iVar5].layout.animState = 1;
        }
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x328 = 0;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar3;
        pUVar1[iVar5].layout.animState = 1;
        param_1[0xf] = 1;
      }
      lVar6 = UiLayout_UpdateAnimById(0x10,0);
      if (lVar6 == 0) {
        param_1[0xf] = 2;
      }
    }
  }
  uVar4 = param_1[3];
LAB_0027e77c:
  if (uVar4 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar4) {
    case 2:
      iVar5 = *param_1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = (iVar5 >> 1) * 4;
      unaff_s1_lo = *(undefined4 *)(&DAT_0032e640 + iVar5);
      unaff_s2_lo = *(undefined4 *)(&DAT_0032e630 + iVar5);
      break;
    case 3:
      if (*param_1 < 2) {
        unaff_s2_lo = 0xd4;
        unaff_s1_lo = 0x1ac;
      }
      else {
        unaff_s2_lo = 0xd5;
        unaff_s1_lo = 0x1ad;
      }
      break;
    case 4:
      if (*param_1 == 0) {
        unaff_s2_lo = 0xd6;
        unaff_s1_lo = 0x1b2;
      }
      else if (*param_1 == 1) {
        unaff_s2_lo = 0xd7;
        unaff_s1_lo = 0x224;
      }
      else {
        unaff_s2_lo = 0xd8;
        unaff_s1_lo = 0x1b3;
      }
      break;
    case 5:
      unaff_s2_lo = 200;
      unaff_s1_lo = 0x196;
      break;
    case 6:
      if (*param_1 < 2) {
        uVar7 = Profile_Get(0);
        uVar7 = Profile_GetCurrentPartSlot(uVar7,7);
        sVar2 = PartDb_GetInfo(uVar7);
        if (sVar2 == 0x6e) {
          unaff_s2_lo = 0xcb;
        }
        else if (sVar2 == 0x6b) {
          unaff_s2_lo = 0xca;
        }
        else if (sVar2 == 0x67) {
          unaff_s2_lo = 0xc9;
        }
        unaff_s1_lo = 0x1a1;
      }
      else if (*param_1 < 4) {
        unaff_s2_lo = 0xcc;
        unaff_s1_lo = 0x21e;
      }
      else {
        unaff_s2_lo = 0xcd;
        unaff_s1_lo = 0x21f;
      }
      break;
    case 7:
      unaff_s2_lo = 0xce;
      unaff_s1_lo = 0x198;
      break;
    case 8:
      unaff_s2_lo = 0xcf;
      unaff_s1_lo = 0x199;
    }
  }
  MenuWnd_DrawTextId(0x10,0xf,4,unaff_s1_lo);
  MenuWnd_DrawText(0x10,0x10,unaff_s2_lo);
  iVar5 = UiMgr_FindLayout(0x10);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
  return;
}

// 0x0027e970  size 0x5c8
void MenuScr_Draw_Cancel(undefined8 param_1)

{
  char cVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  
  piVar7 = (int *)param_1;
  cVar1 = *(char *)((int)piVar7 + 0xde);
  iVar3 = piVar7[7];
  piVar7[7] = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x13);
    iVar3 = UiMgr_FindLayout(0x3c);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x31c == 0) {
      pUVar2[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x31c == 0) {
      pUVar2[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x31c = uVar4;
    pUVar2[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(0x3c);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = uVar4;
    pUVar2[iVar3].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x276);
    iVar3 = UiMgr_FindLayout(0x3c);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    iVar3 = UiMgr_FindLayout(0x3c);
    pUVar2 = g_UiMgr->slots;
    uVar6 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(&pUVar2[iVar3].layout,8,0x24,uVar6,1);
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x3c,0);
  if (lVar5 == 0) {
    piVar7[6] = 0;
    uVar8 = (uint)(cVar1 != '\0');
    if (*piVar7 == 1) {
      MenuWnd_SetItemState(0x3c,*(undefined4 *)(&DAT_0032e620 + piVar7[0xb] * 4),1,0);
      if (piVar7[8] == 0) {
        iVar3 = UiMgr_FindLayout(0x3c);
        UiElem_SetPropFloat(0x3f333333,&g_UiMgr->slots[iVar3].layout,0x16,8);
      }
      iVar3 = UiMgr_FindLayout(0x3c);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
      if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
      }
      iVar3 = piVar7[8];
    }
    else {
      MenuWnd_SetItemState(0x3c,*(undefined4 *)(uVar8 * 4 + 0x36edf0),0,0);
      UiLayout_UpdateAnimById(0x3c,2);
      iVar3 = piVar7[8];
    }
    if (iVar3 == 0) {
      iVar3 = UiMgr_FindLayout(0x3c);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                          *(undefined4 *)(uVar8 * 4 + 0x36edf8),8);
    }
  }
  if ((piVar7[8] != 0) && (lVar5 = UiLayout_UpdateAnimById(0x3c), lVar5 == 0)) {
    piVar7[8] = 0;
  }
  MenuWnd_DrawText(0x3c,0x25,0x199);
  MenuWnd_DrawText(0x3c,0x22,0x32);
  MenuWnd_DrawText(0x3c,0x23,0x33);
  MenuWnd_DrawText(0x3c,0x21,0x199);
  MenuWnd_DrawText(0x3c,0x1e,0x2c);
  MenuWnd_DrawText(0x3c,0x1f,0x2d);
  MenuWnd_DrawText(0x3c,0x20,0x2e);
  iVar3 = piVar7[0xb];
  if ((iVar3 == 0) && (piVar7[10] == *piVar7)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar3 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else if (iVar3 == 2) {
    MenuWnd_DrawText(7,0x2e,0x1bb);
  }
  else {
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*piVar7 * 4 + 0x36ee00));
  }
  lVar5 = maybe_Setting_IsModified(param_1);
  if (lVar5 == 1) {
    iVar3 = UiMgr_FindLayout(0x3c);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,0x24,8);
  }
  else {
    iVar3 = UiMgr_FindLayout(0x3c);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x24,8);
    iVar3 = UiMgr_FindLayout(0x3c);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3ac = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 1;
    }
  }
  UiLayout_UpdateAnimById(0x3c,8);
  iVar3 = UiMgr_FindLayout(0x3c);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,
                      *(undefined4 *)((uint)(cVar1 == '\0') * 4 + 0x36ee08),8);
  iVar3 = UiMgr_FindLayout(0x3c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x0027ef40  size 0x4f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_TractionControl(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_2c = DAT_0032e5e4;
  uStack_30 = DAT_0032e5e0;
  uStack_24 = DAT_0032e5ec;
  uStack_28 = DAT_0032e5e8;
  uStack_18 = DAT_0032e5f8;
  uStack_14 = DAT_0032e5fc;
  uStack_10 = DAT_0032e600;
  uStack_c = DAT_0032e604;
  piVar6 = (int *)param_1;
  fStack_20 = (float)(int)(char)piVar6[0x37];
  fStack_1c = (float)(int)(char)piVar6[0x28];
  iVar3 = piVar6[7];
  piVar6[7] = 0;
  if (iVar3 != 0) {
    uVar2 = UiRes_GetLayoutData(0x11);
    iVar3 = UiMgr_FindLayout(0x3b);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x12);
    iVar3 = UiMgr_FindLayout(0x3b);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    iVar3 = UiMgr_FindLayout(0x3b);
    pUVar1 = g_UiMgr->slots;
    uVar5 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(&pUVar1[iVar3].layout,8,0x29,uVar5,1);
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x3b,0);
  if (lVar4 == 0) {
    piVar6[6] = 0;
  }
  if ((piVar6[8] != 0) && (lVar4 = UiLayout_UpdateAnimById(0x3b), lVar4 == 0)) {
    piVar6[8] = 0;
  }
  if ((*_g_MenuInput == 1) && (piVar6[0xe] == 0)) {
    MenuWnd_SetItemState(0x3b,*(undefined4 *)(&DAT_0032e610 + (*piVar6 + piVar6[0xb]) * 4),1,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  lVar4 = maybe_Setting_IsModified(param_1);
  if (lVar4 == 1) {
    iVar3 = UiMgr_FindLayout(0x3b);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,0x29,8);
  }
  else {
    iVar3 = UiMgr_FindLayout(0x3b);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x29,8);
    iVar3 = UiMgr_FindLayout(0x3b);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 1;
    }
  }
  maybe_Setting_AnimateGauge(0x42d00000,0x44020000,&uStack_30,1,piVar6[0xe],*piVar6);
  MenuWnd_DrawText(0x3b,0x2a,0x198);
  MenuWnd_DrawLabel(0x3b,0x1e,0x29,0);
  MenuWnd_DrawLabel(0x3b,0x1f,0x29,100);
  MenuWnd_DrawLabel(0x3b,0x27,0x29,(char)piVar6[0x37] * 10);
  MenuWnd_DrawText(0x3b,0x24,0x2c);
  MenuWnd_DrawText(0x3b,0x25,0x2d);
  MenuWnd_DrawText(0x3b,0x26,0x2e);
  iVar3 = piVar6[0xb];
  if ((iVar3 == 0) && (piVar6[10] == *piVar6)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar3 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else if (iVar3 == 2) {
    MenuWnd_DrawText(7,0x2e,0x1bb);
  }
  else {
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*piVar6 * 4 + 0x36ede8));
  }
  UiLayout_UpdateAnimById(0x3b,8);
  iVar3 = UiMgr_FindLayout(0x3b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x0027f440  size 0xcf4
void ScrGarage_Draw_SaveChangesAnd(undefined8 param_1)

{
  float fVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float afStack_f0 [5];
  float fStack_dc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar12 = 0;
  bVar3 = true;
  uVar13 = 0;
  uVar6 = Profile_Get(0);
  iVar4 = Profile_GetCurrentCar(uVar6);
  lVar7 = CarRec_GetOptionData(iVar4 + 0x14,7);
  if (lVar7 == 3) {
    uVar12 = 0xc0a00000;
    uVar13 = 0x40a00000;
  }
  else if (lVar7 == 2) {
    uVar12 = 0xc0400000;
    uVar13 = 0x40400000;
  }
  else if (lVar7 == 1) {
    uVar12 = 0xc0000000;
    uVar13 = 0x40000000;
  }
  pfVar9 = afStack_f0;
  pfVar10 = (float *)&DAT_0032e480;
  iVar4 = 0x1e;
  do {
    iVar4 = iVar4 + -1;
    fVar1 = pfVar10[1];
    *pfVar9 = *pfVar10;
    pfVar9[1] = fVar1;
    pfVar10 = pfVar10 + 2;
    pfVar9 = pfVar9 + 2;
  } while (0 < iVar4);
  piVar11 = (int *)param_1;
  afStack_f0[4] = (float)(int)(char)piVar11[0x32];
  fStack_dc = (float)(int)(char)piVar11[0x23];
  fStack_b8 = (float)(int)*(char *)((int)piVar11 + 0xc9);
  fStack_b4 = (float)(int)*(char *)((int)piVar11 + 0x8d);
  fStack_90 = (float)(int)(char)piVar11[0x36];
  fStack_8c = (float)(int)(char)piVar11[0x27];
  fStack_68 = (float)(int)*(char *)((int)piVar11 + 0xda);
  fStack_64 = (float)(int)*(char *)((int)piVar11 + 0x9e);
  fStack_40 = (float)(int)*(char *)((int)piVar11 + 0xd9);
  fStack_3c = (float)(int)*(char *)((int)piVar11 + 0x9d);
  fStack_18 = (float)(int)*(char *)((int)piVar11 + 0xdb);
  fStack_14 = (float)(int)*(char *)((int)piVar11 + 0x9f);
  iVar4 = piVar11[7];
  piVar11[7] = 0;
  afStack_f0[2] = (float)uVar13;
  afStack_f0[3] = (float)uVar12;
  uStack_c0 = uVar13;
  uStack_bc = uVar12;
  uStack_98 = uVar13;
  uStack_94 = uVar12;
  uStack_70 = uVar13;
  uStack_6c = uVar12;
  uStack_48 = uVar13;
  uStack_44 = uVar12;
  uStack_20 = uVar13;
  uStack_1c = uVar12;
  if (iVar4 != 0) {
    uVar5 = MenuText_CarName(0xffffffffffffffff,0);
    lVar7 = MenuText_CarModelId(0xffffffffffffffff,0);
    if (lVar7 == 0x11c) {
      iVar4 = UiMgr_FindLayout(0x3a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x1f,0x16,DAT_0032e5a4);
    }
    else {
      iVar4 = UiMgr_FindLayout(0x3a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x1f,0x16,
                        *(undefined4 *)(&DAT_0032e590 + (uVar5 & 0xff) * 4));
    }
    iVar4 = UiMgr_FindLayout(0x3a);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x20,0x16,
                      *(undefined4 *)(&DAT_0032e570 + (uVar5 & 0xff) * 4));
    uVar13 = UiRes_GetLayoutData(0xe);
    iVar4 = UiMgr_FindLayout(0x3a);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
      pUVar2[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
      pUVar2[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar13;
    pUVar2[iVar4].layout.unk_318 = 1;
    uVar13 = UiRes_GetLayoutData(0xf);
    iVar4 = UiMgr_FindLayout(0x3a);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
      pUVar2[iVar4].layout.animState = 0;
    }
    else {
      pUVar2[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
      pUVar2[iVar4].layout.animState = 0;
    }
    else {
      pUVar2[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar13;
    pUVar2[iVar4].layout.animState = 1;
    uVar13 = UiRes_GetLayoutData(0x10);
    iVar4 = UiMgr_FindLayout(0x3a);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = uVar13;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
    uVar13 = UiRes_GetLayoutData(0x270);
    iVar4 = UiMgr_FindLayout(0x3a);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x380 = uVar13;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 1;
    iVar4 = UiMgr_FindLayout(0x3a);
    pUVar2 = g_UiMgr->slots;
    uVar6 = UiRes_GetLayoutData(0x270);
    UiLayout_PlayAnim(&pUVar2[iVar4].layout,uVar6);
    uVar13 = UiRes_GetLayoutData(0x271);
    iVar4 = UiMgr_FindLayout(0x3a);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x394 = uVar13;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 1;
    uVar13 = UiRes_GetLayoutData(0x272);
    iVar4 = UiMgr_FindLayout(0x41);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
      pUVar2[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
      pUVar2[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar13;
    pUVar2[iVar4].layout.unk_318 = 1;
    uVar13 = UiRes_GetLayoutData(0x273);
    iVar4 = UiMgr_FindLayout(0x41);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
      pUVar2[iVar4].layout.animState = 0;
    }
    else {
      pUVar2[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
      pUVar2[iVar4].layout.animState = 0;
    }
    else {
      pUVar2[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar13;
    pUVar2[iVar4].layout.animState = 1;
    uVar13 = UiRes_GetLayoutData(0x274);
    iVar4 = UiMgr_FindLayout(0x41);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = uVar13;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
    iVar4 = UiMgr_FindLayout(0x3a);
    pUVar2 = g_UiMgr->slots;
    uVar6 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(&pUVar2[iVar4].layout,8,0x2e,uVar6,1);
    piVar11[0xd] = 0;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x3a,0x36eddc,1,1);
  }
  lVar7 = UiLayout_UpdateAnimById(0x3a,0);
  if (lVar7 == 0) {
    piVar11[6] = 0;
  }
  if (piVar11[8] != 0) {
    if (piVar11[0xd] == 0) {
      lVar7 = UiLayout_UpdateAnimById(0x3a);
      if (lVar7 == 0) {
        piVar11[8] = 0;
      }
    }
    else {
      lVar7 = UiLayout_UpdateAnimById(0x41);
      if (lVar7 == 0) {
        piVar11[8] = 0;
      }
    }
  }
  maybe_Setting_AnimateGauge(0x43300000,0x44020000,afStack_f0,6,piVar11[0xe],*piVar11);
  if (*piVar11 < 2) {
    if (piVar11[0xd] == 1) {
      MenuWnd_DrawCursor(0);
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      lVar7 = UiLayout_UpdateAnimById(0x3a,5);
      lVar8 = UiLayout_UpdateAnimById(0x41,2);
      if (lVar7 == 0 && lVar8 == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        piVar11[0xd] = 0;
        iVar4 = UiMgr_FindLayout(0x3a);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x370 = 0;
        if (*(int *)&pUVar2[iVar4].layout.field_0x380 == 0) {
          *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 1;
        }
        iVar4 = UiMgr_FindLayout(0x41);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
        if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
        }
        Menu_ClearSlot(0);
        MenuWnd_DrawDialogText(0x3a,0x36ede0,1,1);
      }
      else {
        bVar3 = false;
      }
      ScrGarage_Draw_InitialTorque(param_1,1);
      iVar4 = UiMgr_FindLayout(0x41);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
    }
    else {
      MenuWnd_DrawCursor();
    }
    ScrGarage_Draw_InitialTorque(param_1,0);
  }
  else {
    if (piVar11[0xd] == 0) {
      MenuWnd_DrawCursor(0);
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      lVar7 = UiLayout_UpdateAnimById(0x3a,6);
      lVar8 = UiLayout_UpdateAnimById(0x41,0);
      if (lVar7 == 0 && lVar8 == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        piVar11[0xd] = 1;
        iVar4 = UiMgr_FindLayout(0x3a);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x384 = 0;
        if (*(int *)&pUVar2[iVar4].layout.field_0x394 == 0) {
          *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 1;
        }
        iVar4 = UiMgr_FindLayout(0x41);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
        if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
          pUVar2[iVar4].layout.unk_318 = 0;
        }
        else {
          pUVar2[iVar4].layout.unk_318 = 1;
        }
        Menu_ClearSlot(0);
        MenuWnd_DrawDialogText(0x41,0x36ede4,1,1);
      }
      else {
        bVar3 = false;
      }
      ScrGarage_Draw_InitialTorque(param_1,0);
    }
    else {
      MenuWnd_DrawCursor(1);
    }
    ScrGarage_Draw_InitialTorque(param_1,1);
    iVar4 = UiMgr_FindLayout(0x41);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  }
  if ((bVar3) && (piVar11[0xe] == 0)) {
    if (piVar11[0xd] == 0) {
      MenuWnd_SetItemState(0x3a,*(undefined4 *)(&DAT_0032e5b0 + *piVar11 * 4),1,0);
    }
    else {
      MenuWnd_SetItemState(0x41,*(undefined4 *)(&DAT_0032e5b0 + (*piVar11 + piVar11[0xb]) * 4),1,0);
    }
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  lVar7 = maybe_Setting_IsModified(param_1);
  if (lVar7 == 1) {
    iVar4 = UiMgr_FindLayout(0x3a);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,0x2e,8);
  }
  else {
    iVar4 = UiMgr_FindLayout(0x3a);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x2e,8);
    iVar4 = UiMgr_FindLayout(0x3a);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3ac = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b8 = 1;
    }
  }
  MenuWnd_DrawText(0x3a,0x2f,0x197);
  iVar4 = piVar11[0xb];
  if ((iVar4 == 0) && (piVar11[10] == *piVar11)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar4 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else if (iVar4 == 2) {
    MenuWnd_DrawText(7,0x2e,0x1bb);
  }
  else {
    MenuWnd_DrawText(7,0x2e,0x1bc);
  }
  UiLayout_UpdateAnimById(0x3a,2);
  UiLayout_UpdateAnimById(0x3a,8);
  iVar4 = UiMgr_FindLayout(0x3a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

