// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00218000 - 0x0021c000
#include "ghidra_types.h"

// 0x00218770  size 0x394
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Shop(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar3 != 0) {
    iVar3 = UiMgr_FindLayout(0x12);
    pUVar1 = g_UiMgr->slots;
    piVar4 = (int *)UiRes_GetLayoutData(0x3d);
    UiLayout_PlayAnim(&pUVar1[iVar3].layout,piVar4);
    iVar3 = UiMgr_FindLayout(0x12);
    pUVar1 = g_UiMgr->slots;
    piVar4 = (int *)UiRes_GetLayoutData(0x49);
    UiLayout_PlayAnim(&pUVar1[iVar3].layout,piVar4);
    iVar3 = UiMgr_FindLayout(0x18);
    pUVar1 = g_UiMgr->slots;
    piVar4 = (int *)UiRes_GetLayoutData(0xb3);
    UiLayout_PlayAnim(&pUVar1[iVar3].layout,piVar4);
    uVar5 = UiRes_GetLayoutData(0x9e);
    iVar3 = UiMgr_FindLayout(0x1c);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    pUVar1[iVar3].layout.unk_31c = uVar5;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x9f);
    iVar3 = UiMgr_FindLayout(0x1c);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar6;
    pUVar1[iVar3].layout.animState = 1;
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x1c,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x1c,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x1c,*(undefined4 *)(&DAT_0036e8e0 + *(int *)(param_1 + 0x4c) * 4),1,0);
  }
  MenuWnd_DrawText(0x12,0x40,0x102);
  MenuWnd_DrawText(0x18,0x1a,0xfc);
  MenuWnd_DrawText(0x1c,0xd,0x16f);
  MenuWnd_DrawText(0x1c,0xe,0x170);
  ScrGarage_Draw_ThereIsNew();
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0036e8e8 + *(int *)(param_1 + 0x4c) * 4));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  UiLayout_UpdateAnimById((UiLayout *)0x13,0);
  iVar3 = UiMgr_FindLayout(0x1c);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x18);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x00218b10  size 0x14
/* page identified from its states' on-screen text (N154) */

void maybe_PagePartShop_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00218b30  size 0xc0
/* page identified from its states' on-screen text (N154) */

void maybe_PagePartShop_Update(undefined8 param_1)

{
  long lVar1;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_ScrCareer_Draw_Shop_0032a190)[*(int *)((int)param_1 + 0x5c)])(param_1);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar1 = Menu_IsInputIdle((int)param_1 + 0x58), lVar1 == 1))
  {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x00218bf0  size 0x3b4
/* page identified from its states' on-screen text (N154) */

void maybe_PagePartShop_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = UiRes_GetLayoutData(0x3c);
  iVar3 = UiMgr_FindLayout(0x12);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    pUVar1[iVar3].layout.unk_31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  uVar4 = UiRes_GetLayoutData(0x3d);
  iVar3 = UiMgr_FindLayout(0x12);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar4;
    pUVar1[iVar3].layout.animState = 1;
  }
  uVar4 = UiRes_GetLayoutData(0x3e);
  iVar3 = UiMgr_FindLayout(0x12);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
  }
  uVar4 = UiRes_GetLayoutData(0x3f);
  iVar3 = UiMgr_FindLayout(0x12);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
  }
  uVar4 = UiRes_GetLayoutData(0x40);
  iVar3 = UiMgr_FindLayout(0x12);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  }
  uVar2 = UiRes_GetLayoutData(0x41);
  iVar3 = UiMgr_FindLayout(0x13);
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
  uVar4 = UiRes_GetLayoutData(0xaa);
  iVar3 = UiMgr_FindLayout(0x20);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x360 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  return;
}

// 0x00218fb0  size 0xa3c
void ScrRace_Draw_NaFesta(uint *param_1)

{
  bool bVar1;
  short sVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_f0 [16];
  int iStack_e0;
  int iStack_dc;
  undefined1 auStack_b0 [8];
  int iStack_a8;
  int iStack_a4;
  undefined1 auStack_90 [12];
  char cStack_84;
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  int aiStack_30 [4];
  int iStack_20;
  undefined4 auStack_18 [3];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  bVar3 = param_1[7] == param_1[2] + 1;
  uVar11 = Menu_MapCursorToItem(param_1[5]);
  piVar7 = (int *)0x14;
  piVar14 = aiStack_30;
  piVar4 = piVar14;
  while (piVar4 != (int *)0x0) {
    *(undefined1 *)piVar14 = 0;
    piVar14 = (int *)((int)piVar14 + 1);
    piVar7 = (int *)((int)piVar7 + -1);
    piVar4 = piVar7;
  }
  puVar8 = (undefined4 *)0x14;
  puVar15 = auStack_50;
  puVar5 = puVar15;
  while (puVar5 != (undefined4 *)0x0) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + -1);
    puVar5 = puVar8;
  }
  MenuWnd_DrawTextId(0x26,0x3d,1,0x2fb);
  MenuWnd_DrawTextId(0x26,0x40,1,0x2fc);
  MenuWnd_DrawTextId(0x26,0x41,1,0x2fd);
  MenuWnd_DrawTextId(0x26,0x42,1,0x2fe);
  MenuWnd_DrawTextId(0x26,0x43,1,0x2ff);
  if (bVar3) {
    uVar13 = 0;
    if ((param_1[1] & 1) == 0) {
      uVar13 = 3;
    }
    uVar12 = Menu_MapCursorToItem(param_1[5]);
    uVar12 = MsgId_ForModeShort(uVar12,0);
    MenuWnd_DrawTextId(0x26,0x66,uVar13,uVar12);
    uVar13 = 0;
    if ((param_1[1] & 2) == 0) {
      uVar13 = 3;
    }
    uVar12 = Menu_MapCursorToItem(param_1[5]);
    uVar12 = MsgId_ForModeShort(uVar12,1);
    MenuWnd_DrawTextId(0x26,0x67,uVar13,uVar12);
    uVar13 = 0;
    if ((param_1[1] & 4) == 0) {
      uVar13 = 3;
    }
    uVar12 = Menu_MapCursorToItem(param_1[5]);
    uVar12 = MsgId_ForModeShort(uVar12,2);
    MenuWnd_DrawTextId(0x26,0x68,uVar13,uVar12);
  }
  else {
    uVar13 = 0;
    if ((*param_1 & 1) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x66,uVar13,0x301);
    uVar13 = 0;
    if ((*param_1 & 2) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x67,uVar13,0x302);
    uVar13 = 0;
    if ((*param_1 & 4) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x68,uVar13,0x303);
    uVar13 = 0;
    if ((*param_1 & 8) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x69,uVar13,0x304);
    uVar13 = 0;
    if ((*param_1 & 0x10) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x6a,uVar13,0x305);
    uVar13 = 0;
    if ((*param_1 & 0x20) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x6b,uVar13,0x306);
    uVar13 = 0;
    if ((*param_1 & 0x40) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x6c,uVar13,0x307);
    uVar13 = 0;
    if ((*param_1 & 0x80) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x6d,uVar13,0x308);
  }
  if (bVar3) {
    Course_GetVariantInfo(auStack_90,uVar11,param_1[8]);
    bVar1 = cStack_84 == '\x01';
    iVar17 = 0;
    piVar14 = aiStack_30;
    puVar15 = auStack_50;
    do {
      if (bVar1) {
        uVar13 = Race_GetTimeOfDay();
        iVar9 = Password_EncodeCourseB(uVar11,param_1[8],uVar13,iVar17);
        *piVar14 = iVar9;
      }
      else {
        uVar13 = Race_GetTimeOfDay();
        iVar9 = Password_EncodeCourseA(uVar11,param_1[8],uVar13,iVar17);
        *piVar14 = iVar9;
      }
      uVar10 = Password_GetKeyTable(iVar17);
      *puVar15 = uVar10;
      iVar17 = iVar17 + 1;
      piVar14 = piVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar17 < 5);
  }
  else {
    iVar17 = 0;
    piVar14 = aiStack_30;
    puVar15 = auStack_50;
    do {
      uVar13 = Race_GetTimeOfDay();
      iVar9 = Password_EncodeSections(uVar11,param_1[7],param_1[8],uVar13,iVar17);
      uVar16 = param_1[7];
      *piVar14 = iVar9;
      uVar10 = Password_BuildString(uVar16,iVar17);
      *puVar15 = uVar10;
      iVar17 = iVar17 + 1;
      piVar14 = piVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar17 < 5);
    bVar1 = true;
  }
  uVar16 = (uint)uVar11 & 0xff;
  iVar17 = Profile_Get(0);
  sVar2 = *(short *)(iVar17 + uVar16 * 2 + 0xd85c);
  if (bVar3) {
    iVar17 = *(int *)(&DAT_00342340 + uVar16 * 4);
  }
  else {
    iVar17 = *(int *)(&DAT_00342310 + param_1[7] * 4);
  }
  uVar13 = MsgId_ForSlot(param_1[5],0);
  MenuWnd_DrawLabel(0x26,0x4e,0x34e,uVar13);
  MenuWnd_DrawLabel(0x26,0x4f,0x322);
  MenuWnd_DrawLabel(0x26,0x52,0x34f,5,(int)sVar2 / iVar17,5);
  MenuWnd_DrawRivalLabel(0x26,0x50,5,0x3a,sVar2);
  MenuWnd_DrawRivalLabel(0x26,0x51,5,0x3a,iVar17);
  if (bVar3) {
    Course_GetVariantInfo(auStack_f0,uVar11,param_1[8]);
    uVar13 = MsgId_OnOff(iStack_e0 <= iStack_dc);
    MenuWnd_DrawText(0x26,0x3e,uVar13);
    cVar6 = Race_IsTimeTrialMode(uVar11,0);
    if (cVar6 == '\0') {
      maybe_Ui_LeafF6720(auStack_18,uVar11,9 - iStack_e0,9 - iStack_dc);
    }
    else {
      maybe_Ui_LeafF6720(auStack_18,uVar11,iStack_e0,iStack_dc);
    }
    maybe_Ui_LeafF6720(auStack_18,uVar11,iStack_e0,iStack_dc);
  }
  else {
    Course_FindSection(auStack_b0,uVar11,param_1[7],param_1[8]);
    uVar13 = MsgId_OnOff(iStack_a8 <= iStack_a4);
    MenuWnd_DrawText(0x26,0x3e,uVar13);
    cVar6 = Race_IsTimeTrialMode(uVar11,0);
    if (cVar6 == '\0') {
      maybe_Ui_LeafF6720(auStack_18,uVar11,9 - iStack_a8,9 - iStack_a4);
    }
    else {
      maybe_Ui_LeafF6720(auStack_18,uVar11,iStack_a8,iStack_a4);
    }
  }
  uVar11 = maybe___sf_to_df(auStack_18[0]);
  MenuWnd_DrawRivalLabel(0x26,0x3f,4,0x15,uVar11);
  if (bVar1) {
    if (aiStack_30[0] < 1000) {
      MenuWnd_DrawRivalLabel(0x26,0x44,5,0x34d);
    }
    else {
      MenuWnd_DrawRivalLabel(0x26,0x44,5,0x323,aiStack_30[0] / 1000,aiStack_30[0] % 1000);
    }
    if (aiStack_30[1] < 1000) {
      MenuWnd_DrawRivalLabel(0x26,0x45,5,0x34d,aiStack_30[1]);
    }
    else {
      MenuWnd_DrawRivalLabel(0x26,0x45,5,0x323,aiStack_30[1] / 1000,aiStack_30[1] % 1000);
    }
    if (aiStack_30[2] < 1000) {
      MenuWnd_DrawRivalLabel(0x26,0x46,5,0x34d,aiStack_30[2]);
    }
    else {
      MenuWnd_DrawRivalLabel(0x26,0x46,5,0x323,aiStack_30[2] / 1000,aiStack_30[2] % 1000);
    }
    if (aiStack_30[3] < 1000) {
      MenuWnd_DrawRivalLabel(0x26,0x47,5,0x34d,aiStack_30[3]);
    }
    else {
      MenuWnd_DrawRivalLabel(0x26,0x47,5,0x323,aiStack_30[3] / 1000,aiStack_30[3] % 1000);
    }
    if (iStack_20 < 1000) {
      MenuWnd_DrawRivalLabel(0x26,0x48,5,0x34d,iStack_20);
    }
    else {
      MenuWnd_DrawRivalLabel(0x26,0x48,5,0x323,iStack_20 / 1000,iStack_20 % 1000);
    }
  }
  else {
    Time_SplitHms(0,aiStack_30[0],&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawRivalLabel(0x26,0x44,5,0x331,uStack_4,uStack_8,uStack_c);
    Time_SplitHms(0,aiStack_30[1],&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawRivalLabel(0x26,0x45,5,0x331,uStack_4,uStack_8,uStack_c);
    Time_SplitHms(0,aiStack_30[2],&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawRivalLabel(0x26,0x46,5,0x331,uStack_4,uStack_8,uStack_c);
    Time_SplitHms(0,aiStack_30[3],&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawRivalLabel(0x26,0x47,5,0x331,uStack_4,uStack_8,uStack_c);
    Time_SplitHms(0,iStack_20,&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawRivalLabel(0x26,0x48,5,0x331,uStack_4,uStack_8,uStack_c);
  }
  MenuWnd_DrawNumber(0x26,0x49,auStack_50[0]);
  MenuWnd_DrawNumber(0x26,0x4a,auStack_50[1]);
  MenuWnd_DrawNumber(0x26,0x4b,auStack_50[2]);
  MenuWnd_DrawNumber(0x26,0x4c,auStack_50[3]);
  MenuWnd_DrawNumber(0x26,0x4d,uStack_40);
  if (bVar3) {
    MenuWnd_DrawRivalLabel(0x26,0x55,1,0x34b);
  }
  else {
    MenuWnd_DrawRivalLabel(0x26,0x55,1,0x321,param_1[7] + 1);
  }
  return;
}

// 0x002199f0  size 0x14c
/* entry 7 of state table 0x32a290 used by maybe_PageNaFesta_Update */

void maybe_PageNaFesta_State7(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x4c) == 6) {
    uVar4 = 0x324;
  }
  else {
    uVar4 = 0x34a;
  }
  iVar1 = *(int *)(iVar2 + 0x5c);
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar3 = MenuWnd_DrawFooter(uVar4,0xffffffffffffffff,0);
  if (*(int *)(iVar2 + 0x60) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(iVar2 + 0x60) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(iVar2 + 0x58) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  ScrRace_Draw_NaFesta(param_1);
  UiLayout_UpdateAnimById((UiLayout *)0x26,7);
  iVar2 = UiMgr_FindLayout(0x24);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x26);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x00219b40  size 0x1c0
void ScrRace_Draw_Days(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  byte extraout_a3_lo;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    iVar1 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x25,8,extraout_a3_lo);
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x11d,0);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  MenuWnd_DrawLabel(0x2a,0xd,0x3a,*(int *)(param_1 + 0x30) + 1);
  uVar2 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x14),1);
  MenuWnd_DrawText(0x2a,0xe,uVar2);
  uVar2 = MsgId_MedalName(*(undefined4 *)(param_1 + 0x30));
  MenuWnd_DrawText(0x2a,0xf,uVar2);
  uVar2 = Profile_Get(0);
  uVar2 = Profile_GetDayClamped(uVar2);
  MenuWnd_DrawLabel(0x2a,0x10,0x48,uVar2);
  uVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
  uVar2 = MsgId_ForModeShort(uVar2,*(undefined4 *)(param_1 + 0x20));
  MenuWnd_DrawText(0x2a,0x11,uVar2);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar1 = UiMgr_FindLayout(0x2a);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x2b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00219d00  size 0x7f0
void ScrRace_Draw_CaAttack(int param_1)

{
  uint uVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_40 [12];
  char cStack_34;
  
  GameState_Get_35c_Wrap();
  iVar7 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    uVar4 = UiRes_GetLayoutData(0x1c0);
    iVar7 = UiMgr_FindLayout(0x28);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar7].layout.unk_310 = 0xffffffff;
    pUVar2[iVar7].layout.unk_31c = 0;
    pUVar2[iVar7].layout.unk_30c = 0;
    if (pUVar2[iVar7].layout.unk_31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    pUVar2[iVar7].layout.unk_30c = 0;
    if (pUVar2[iVar7].layout.unk_31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 1;
    pUVar2[iVar7].layout.unk_31c = uVar4;
    pUVar2[iVar7].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x1c1);
    iVar7 = UiMgr_FindLayout(0x29);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar7].layout.unk_310 = 0xffffffff;
    pUVar2[iVar7].layout.unk_31c = 0;
    pUVar2[iVar7].layout.unk_30c = 0;
    if (pUVar2[iVar7].layout.unk_31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    pUVar2[iVar7].layout.unk_30c = 0;
    if (pUVar2[iVar7].layout.unk_31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 1;
    pUVar2[iVar7].layout.unk_31c = uVar4;
    pUVar2[iVar7].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x42e);
    iVar7 = UiMgr_FindLayout(0x29);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x330 == 0) {
      pUVar2[iVar7].layout.animState = 0;
    }
    else {
      pUVar2[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x330 == 0) {
      pUVar2[iVar7].layout.animState = 0;
    }
    else {
      pUVar2[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar5;
    pUVar2[iVar7].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x42f);
    iVar7 = UiMgr_FindLayout(0x29);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0x430);
    iVar7 = UiMgr_FindLayout(0x29);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 1;
    uVar5 = UiRes_GetLayoutData(0x431);
    iVar7 = UiMgr_FindLayout(0x29);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x368 = 1;
    UiLayout_UpdateAnimById((UiLayout *)0x29,1);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (((g_MenuMgr->flags & 2) == 0) && (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x29,1), !bVar3)
     ) {
    if (*(int *)(param_1 + 0x40) == 0) {
      Se_PlayMenu(0x14);
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x29,2);
    if (!bVar3) {
      if (*(int *)(param_1 + 0x40) == 1) {
        Se_PlayMenu(0x14);
        *(undefined4 *)(param_1 + 0x40) = 2;
      }
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x29,3);
      if (!bVar3) {
        if (*(int *)(param_1 + 0x40) == 2) {
          Se_PlayMenu(0x14);
          *(undefined4 *)(param_1 + 0x40) = 3;
        }
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x29,4);
        if ((!bVar3) && (*(int *)(param_1 + 0x40) == 3)) {
          Se_PlayMenu(0xc);
          *(undefined4 *)(param_1 + 0x40) = 4;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x40) == 4) {
    iVar7 = 0;
    do {
      do {
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x29,(long)(iVar7 + 1));
      } while (bVar3);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
  }
  uVar6 = GameState_Get_1();
  uVar6 = MsgId_OnOff(uVar6);
  MenuWnd_DrawText(0x29,0x3c,uVar6);
  uVar6 = RaceCtx_Get_13();
  uVar6 = MsgId_YesNo(uVar6);
  MenuWnd_DrawText(0x29,0x3f,uVar6);
  uVar6 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
  uVar6 = Race_GetCourseId(uVar6);
  uVar6 = MsgId_ForResult(uVar6);
  MenuWnd_DrawText(0x29,0x3e,uVar6);
  uVar6 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x14),1);
  MenuWnd_DrawText(0x29,0x3d,uVar6);
  MenuWnd_DrawNumber(0x29,0x43,*(undefined4 *)(param_1 + 0x38));
  iVar7 = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x3c);
  if (iVar7 == 0) {
    MenuWnd_DrawNumber(0x29,0x45,0);
    iVar7 = *(int *)(param_1 + 0x2c);
  }
  else {
    if (iVar7 / 1000 < 1) {
      MenuWnd_DrawLabel(0x29,0x45,0x353,*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x3c),iVar7);
    }
    else {
      MenuWnd_DrawLabel(0x29,0x45,0x352);
    }
    iVar7 = *(int *)(param_1 + 0x2c);
  }
  MenuWnd_DrawNumber(0x29,0x48,*(int *)(param_1 + 0x38) + iVar7 * *(int *)(param_1 + 0x3c));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetMoney(uVar6);
  MenuWnd_DrawNumber(0x29,0x49,uVar6);
  MenuWnd_DrawTextId(0x29,0x41,1,0x2f9);
  MenuWnd_DrawTextId(0x29,0x44,1,0x34c);
  MenuWnd_DrawTextId(0x29,0x46,1,0x350);
  MenuWnd_DrawTextId(0x29,0x47,0,0x351);
  bVar3 = true;
  uVar4 = g_GameState->unk_03a4;
  uVar1 = g_GameState->unk_03a8;
  if (uVar4 == 1) {
    uVar6 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
    Course_GetVariantInfo(auStack_40,uVar6,*(undefined4 *)(param_1 + 0x20));
    if (cStack_34 == '\x02') {
      bVar3 = false;
    }
  }
  if (bVar3) {
    MenuWnd_DrawText(0x29,0x40,0x65);
  }
  else {
    MenuWnd_DrawText(0x29,0x40,0x66);
  }
  if (uVar4 == 1) {
    uVar6 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
    uVar6 = MsgId_ForModeShort(uVar6,*(undefined4 *)(param_1 + 0x20));
    MenuWnd_DrawText(0x29,0x42,uVar6);
    MenuWnd_DrawRivalLabel(0x29,0x3b,1,0x34b);
  }
  else {
    MenuWnd_DrawText(0x29,0x42,*(int *)(param_1 + 0x20) + 0x301);
    MenuWnd_DrawRivalLabel(0x29,0x3b,1,0x321,uVar1 + 1);
  }
  iVar7 = UiMgr_FindLayout(0x29);
  UiElem_SetNumber(&g_UiMgr->slots[iVar7].layout,0x39,0x16,
                   (long)*(int *)(&DAT_0032a350 + *(int *)(param_1 + 0x34) * 4));
  UiLayout_UpdateAnimById((UiLayout *)0x28,0);
  if (*(int *)(param_1 + 0x34) == 0) {
    UiLayout_UpdateAnimById((UiLayout *)0x29,0);
  }
  iVar7 = UiMgr_FindLayout(0x28);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x29);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0021a4f0  size 0x180
/* state of maybe_PageNaFesta; on-screen text/callee hint "CaAttack" (was ScrCaAttack_Enter) */

void maybe_PageNaFesta_State3_CaAttack(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar2 = *(int *)(iVar4 + 0x5c);
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  bVar1 = *(int *)(iVar4 + 0x24) != 1;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar3 = MenuWnd_DrawFooter(0x57,bVar1,0x36e948);
  if (*(int *)(iVar4 + 0x60) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(iVar4 + 0x60) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(iVar4 + 0x58) = 0;
  }
  ScrRace_Draw_NaFesta(param_1);
  UiLayout_UpdateAnimById((UiLayout *)0x26,7);
  iVar2 = UiMgr_FindLayout(0x24);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x26);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x27);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0036e950 + (uint)bVar1 * 4));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0021a670  size 0x57c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Entry(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  
  iVar11 = (int)param_1;
  iVar4 = *(int *)(iVar11 + 0x5c);
  *(undefined4 *)(iVar11 + 0x5c) = 0;
  if (iVar4 != 0) {
    iVar4 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x6e,8,extraout_a3_lo);
    iVar4 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x6f,8,extraout_a3_lo_00);
    iVar4 = UiMgr_FindLayout(0x26);
    pUVar1 = g_UiMgr->slots;
    piVar5 = (int *)UiRes_GetLayoutData(*(int *)(iVar11 + 0x20) + 0x1b4);
    UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar5);
    iVar4 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    piVar5 = (int *)UiRes_GetLayoutData(0x1c2);
    UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar5);
    iVar4 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    piVar5 = (int *)UiRes_GetLayoutData(0x1c3);
    UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar5);
    iVar4 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    piVar5 = (int *)UiRes_GetLayoutData(0x1c4);
    UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar5);
    uVar6 = UiRes_GetLayoutData(0x42d);
    iVar4 = UiMgr_FindLayout(0x26);
    pUVar1 = g_UiMgr->slots;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x39c = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a8 = 0;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x398 = 0;
      if (*(int *)&pUVar1[iVar4].layout.field_0x3a8 == 0) {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
      }
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x398 = 0;
      if (*(int *)&pUVar1[iVar4].layout.field_0x3a8 == 0) {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
      }
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a0 = 1;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a8 = uVar6;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
    }
    uVar7 = UiRes_GetLayoutData(0x1be);
    iVar4 = UiMgr_FindLayout(0x27);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar4].layout.unk_310 = 0xffffffff;
    pUVar1[iVar4].layout.unk_31c = 0;
    pUVar1[iVar4].layout.unk_30c = 0;
    if (pUVar1[iVar4].layout.unk_31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    pUVar1[iVar4].layout.unk_30c = 0;
    if (pUVar1[iVar4].layout.unk_31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
    pUVar1[iVar4].layout.unk_31c = uVar7;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x1bf);
    iVar4 = UiMgr_FindLayout(0x27);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
      pUVar1[iVar4].layout.animState = 0;
    }
    else {
      pUVar1[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
      pUVar1[iVar4].layout.animState = 0;
    }
    else {
      pUVar1[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar6;
    pUVar1[iVar4].layout.animState = 1;
    iVar4 = UiMgr_FindLayout(0x25);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x49,8,extraout_a3_lo_01);
    iVar4 = UiMgr_FindLayout(0x25);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x4a,8,extraout_a3_lo_02);
    Menu_ClearSlot(0);
    iVar4 = *(int *)(iVar11 + 8);
    iVar2 = *(int *)(iVar11 + 0x1c);
    uVar8 = Menu_MapCursorToItem(*(undefined4 *)(iVar11 + 0x14));
    if (iVar2 == iVar4 + 1) {
      uVar9 = Profile_Get(0);
      lVar10 = Password_GetRecordFlag(uVar9,1,0,uVar8,*(undefined4 *)(iVar11 + 0x20));
    }
    else {
      uVar9 = Profile_Get(0);
      lVar10 = Password_GetRecordFlag
                         (uVar9,0,*(undefined4 *)(iVar11 + 0x20),uVar8,
                          *(undefined4 *)(iVar11 + 0x1c));
    }
    if (lVar10 != 0) {
      iVar4 = UiMgr_FindLayout(0x26);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,
                          (long)*(int *)(&DAT_0032a2b0 + *(int *)(iVar11 + 0x20) * 4),8,
                          (char)iVar4 * -0xc);
    }
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x27,0);
  if (!bVar3) {
    *(undefined4 *)(iVar11 + 0x58) = 0;
  }
  if ((*(int *)(iVar11 + 0x60) != 0) &&
     (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x27,1), !bVar3)) {
    *(undefined4 *)(iVar11 + 0x60) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x27,*(undefined4 *)(&DAT_0036e938 + *(int *)(iVar11 + 0xc) * 4),1,0);
  }
  MenuWnd_DrawText(0x27,0xe,0x2f6);
  MenuWnd_DrawText(0x27,0xf,0x2f7);
  ScrRace_Draw_NaFesta(param_1);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0036e940 + *(int *)(iVar11 + 0xc) * 4));
  UiLayout_UpdateAnimById((UiLayout *)0x26,7);
  iVar4 = UiMgr_FindLayout(0x24);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x26);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x27);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0021abf0  size 0xb90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_PageNaFesta; on-screen text/callee hint "Entry" (was ScrEntry_Update) */

void maybe_PageNaFesta_State1_Entry(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  int *piVar13;
  
  iVar12 = (int)param_1;
  iVar7 = *(int *)(iVar12 + 0x5c);
  *(undefined4 *)(iVar12 + 0x5c) = 0;
  bVar2 = *(int *)(iVar12 + 0x1c) == *(int *)(iVar12 + 8) + 1;
  if (iVar7 != 0) {
    uVar5 = UiRes_GetLayoutData(0x1b0);
    iVar7 = UiMgr_FindLayout(0x26);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    pUVar1[iVar7].layout.unk_31c = uVar5;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x1b0);
    iVar7 = UiMgr_FindLayout(0x26);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x394 = uVar6;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
    uVar6 = UiRes_GetLayoutData(0x1bc);
    iVar7 = UiMgr_FindLayout(0x26);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x1bd);
    iVar7 = UiMgr_FindLayout(0x26);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    uVar6 = UiRes_GetLayoutData(0x42d);
    iVar7 = UiMgr_FindLayout(0x26);
    pUVar1 = g_UiMgr->slots;
    if (*(int *)&pUVar1[iVar7].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x39c = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a8 = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x398 = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x3a8 == 0) {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x398 = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x3a8 == 0) {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a0 = 1;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a8 = uVar6;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 1;
    }
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x26,0x36e930,2,1);
    iVar7 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x25,8,extraout_a3_lo);
  }
  MenuWnd_DrawCursor(1);
  if (*(int *)(iVar12 + 0x48) - 6U < 2) {
    *(undefined4 *)(iVar12 + 0x58) = 0;
  }
  else {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x26,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x26,1);
    if (!bVar3 && !bVar4) {
      *(undefined4 *)(iVar12 + 0x58) = 0;
    }
  }
  if (*(int *)(iVar12 + 0x60) != 0) {
    MenuWnd_SetItemVisible(0);
    iVar7 = *(int *)(iVar12 + 100);
    *(undefined4 *)(iVar12 + 100) = 0;
    if (iVar7 != 0) {
      if (*(int *)(iVar12 + 0x50) == 0) {
        uVar6 = UiRes_GetLayoutData(0x1b3);
        iVar7 = UiMgr_FindLayout(0x26);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x34c = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = 0;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
        }
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
        }
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x350 = 0;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar6;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
        uVar6 = UiRes_GetLayoutData(0x1b2);
        iVar7 = UiMgr_FindLayout(0x26);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x338 = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = 0;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
        }
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
        }
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x33c = 0;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar6;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
      }
      else if (*(int *)(iVar12 + 0x50) == 2) {
        uVar6 = UiRes_GetLayoutData(*(int *)(iVar12 + 0x20) + 0x1b4);
        iVar7 = UiMgr_FindLayout(0x26);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x34c = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = 0;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
        }
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
        }
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x350 = 0;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar6;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
        iVar7 = UiMgr_FindLayout(0x26);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x338 = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = 0;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
        }
      }
      else {
        iVar7 = UiMgr_FindLayout(0x26);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x34c = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = 0;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
        }
        iVar7 = UiMgr_FindLayout(0x26);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x338 = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = 0;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
        }
      }
    }
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x26,2);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x26,3);
    if (!bVar3 && !bVar4) {
      *(undefined4 *)(iVar12 + 0x60) = 0;
      MenuWnd_DrawCursor(0);
    }
  }
  if (*(int *)(iVar12 + 0x28) == 1) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x26,5);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x26,6);
    if (bVar3 || bVar4) {
      MenuWnd_SetItemVisible(0);
      if (*(int *)(iVar12 + 0x18) == *(int *)(iVar12 + 8) + 1) {
        MenuWnd_DrawRivalLabel(0x26,0x56,1,0x34b);
      }
      else {
        MenuWnd_DrawRivalLabel(0x26,0x56,1,0x321,*(int *)(iVar12 + 0x18) + 1);
      }
    }
    else {
      *(undefined4 *)(iVar12 + 0x28) = 2;
      iVar7 = UiMgr_FindLayout(0x26);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x370 = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x380 == 0) {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
      }
      iVar7 = UiMgr_FindLayout(0x26);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x384 = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x394 == 0) {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  else if (*(int *)(iVar12 + 0x28) == 0) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x26,6);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x26,4);
    if (bVar3 || bVar4) {
      MenuWnd_SetItemVisible(0);
      if (*(int *)(iVar12 + 0x18) == *(int *)(iVar12 + 8) + 1) {
        MenuWnd_DrawRivalLabel(0x26,0x56,1,0x34b);
      }
      else {
        MenuWnd_DrawRivalLabel(0x26,0x56,1,0x321,*(int *)(iVar12 + 0x18) + 1);
      }
    }
    else {
      *(undefined4 *)(iVar12 + 0x28) = 2;
      iVar7 = UiMgr_FindLayout(0x26);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x35c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
      }
      iVar7 = UiMgr_FindLayout(0x26);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x384 = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x394 == 0) {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  if (bVar2) {
    iVar7 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x5a,8,extraout_a3_lo_00);
    iVar7 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x59,8,extraout_a3_lo_01);
    iVar7 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x58,8,extraout_a3_lo_02);
    iVar7 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x57,8,extraout_a3_lo_03);
    iVar7 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x37,8,extraout_a3_lo_04);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x26,*(undefined4 *)(&DAT_0032a330 + *(int *)(iVar12 + 0x20) * 4),1,0);
  }
  ScrRace_Draw_NaFesta(param_1);
  if (bVar2) {
    uVar9 = Menu_MapCursorToItem(*(undefined4 *)(iVar12 + 0x14));
    uVar9 = MsgId_ForMode(uVar9,*(undefined4 *)(iVar12 + 0x20));
    MenuWnd_SetTitle(3,uVar9);
    uVar6 = *(undefined4 *)(iVar12 + 0x14);
  }
  else {
    MenuWnd_SetTitle(3,*(int *)(iVar12 + 0x20) + 0x326);
    uVar6 = *(undefined4 *)(iVar12 + 0x14);
  }
  uVar9 = Menu_MapCursorToItem(uVar6);
  iVar7 = 0;
  piVar13 = (int *)&DAT_0032a2b0;
  do {
    if (bVar2) {
      if (iVar7 < 3) {
        uVar10 = Profile_Get(0);
        lVar11 = Password_GetRecordFlag(uVar10,1,0,uVar9,iVar7);
      }
      else {
        lVar11 = 7;
      }
    }
    else {
      uVar10 = Profile_Get(0);
      lVar11 = Password_GetRecordFlag(uVar10,0,iVar7,uVar9,*(undefined4 *)(iVar12 + 0x1c));
    }
    if (lVar11 != 0) {
      iVar8 = UiMgr_FindLayout(0x26);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar13,8,extraout_a3_lo_05);
    }
    iVar7 = iVar7 + 1;
    piVar13 = piVar13 + 1;
  } while (iVar7 < 8);
  UiLayout_UpdateAnimById((UiLayout *)0x26,7);
  iVar7 = UiMgr_FindLayout(0x24);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x26);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0021b780  size 0x9d8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_PageNaFesta; on-screen text/callee hint "Entry" (was ScrEntry_Enter) */

void maybe_PageNaFesta_State0_Entry(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  int *piVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  
  iVar5 = Msg_ProfileStat(1);
  iVar5 = iVar5 + 1;
  Subtitle_Draw();
  iVar9 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar9 != 0) {
    uVar7 = UiRes_GetLayoutData(0x44);
    iVar9 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar9].layout.unk_310 = 0xffffffff;
    pUVar1[iVar9].layout.unk_31c = 0;
    pUVar1[iVar9].layout.unk_30c = 0;
    if (pUVar1[iVar9].layout.unk_31c == 0) {
      pUVar1[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar9].layout.unk_318 = 1;
    }
    pUVar1[iVar9].layout.unk_30c = 0;
    if (pUVar1[iVar9].layout.unk_31c == 0) {
      pUVar1[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar9].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x314 = 0;
    pUVar1[iVar9].layout.unk_31c = uVar7;
    pUVar1[iVar9].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x45);
    iVar9 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
      pUVar1[iVar9].layout.animState = 0;
    }
    else {
      pUVar1[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
      pUVar1[iVar9].layout.animState = 0;
    }
    else {
      pUVar1[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar8;
    pUVar1[iVar9].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x46);
    iVar9 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0x5a);
    iVar9 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = uVar8;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
    uVar8 = UiRes_GetLayoutData(0x5b);
    iVar9 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x36c = uVar8;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
    uVar8 = UiRes_GetLayoutData(0x1c2);
    iVar9 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x380 = uVar8;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 1;
    uVar8 = UiRes_GetLayoutData(0x1c3);
    iVar9 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x394 = uVar8;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 1;
    uVar8 = UiRes_GetLayoutData(0x1c4);
    iVar9 = UiMgr_FindLayout(0x25);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a8 = uVar8;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a4 = 1;
    uVar8 = UiRes_GetLayoutData(0x1b1);
    iVar9 = UiMgr_FindLayout(0x26);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
      pUVar1[iVar9].layout.animState = 0;
    }
    else {
      pUVar1[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
      pUVar1[iVar9].layout.animState = 0;
    }
    else {
      pUVar1[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar8;
    pUVar1[iVar9].layout.animState = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x25,0x36e928,2,0);
  }
  lVar11 = Msg_ProfileStat(1);
  MenuWnd_DrawCursor(3 < lVar11);
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x25,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x25,1);
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x25,2);
  if (!bVar4 && (!bVar2 && !bVar3)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x25,5);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x25,6);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x25,7);
    if (!bVar4 && (!bVar2 && !bVar3)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x25,*(undefined4 *)(&DAT_0032a2f0 + *(int *)(param_1 + 0x10) * 4),1,0);
    iVar9 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x28);
  }
  if (iVar9 == 1) {
    Menu_ClearSlot(0);
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x25,3);
    if (bVar2) {
      iVar9 = (iVar5 + (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) + 4) % iVar5;
      uVar12 = MsgId_ForSlot(iVar9,1);
      MenuWnd_DrawText(0x25,0x48,uVar12);
      iVar6 = UiMgr_FindLayout(0x25);
      UiElem_SetNumber(&g_UiMgr->slots[iVar6].layout,0x43,0x16,
                       (long)*(int *)(&DAT_0032a2d0 + iVar9 * 4));
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 2;
      iVar9 = UiMgr_FindLayout(0x25);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  else if (iVar9 == 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x25,4);
    if (bVar2) {
      iVar9 = (iVar5 + (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) + -1) % iVar5;
      uVar12 = MsgId_ForSlot(iVar9,1);
      MenuWnd_DrawText(0x25,0x48,uVar12);
      iVar6 = UiMgr_FindLayout(0x25);
      UiElem_SetNumber(&g_UiMgr->slots[iVar6].layout,0x43,0x16,
                       (long)*(int *)(&DAT_0032a2d0 + iVar9 * 4));
    }
    else {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x28) = 2;
      iVar9 = UiMgr_FindLayout(0x25);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x35c = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  iVar9 = 0;
  puVar14 = &DAT_0032a300;
  piVar13 = &DAT_0032a320;
  while( true ) {
    if (iVar5 < 4) {
      iVar6 = iVar5;
    }
    else {
      iVar6 = 4;
    }
    if (iVar6 <= iVar9) break;
    iVar6 = (iVar5 + iVar9 + (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))) % iVar5;
    uVar12 = MsgId_ForSlot(iVar6,1);
    MenuWnd_DrawText(0x25,*puVar14,uVar12);
    iVar10 = UiMgr_FindLayout(0x25);
    UiElem_SetNumber(&g_UiMgr->slots[iVar10].layout,(long)*piVar13,0x16,
                     (long)*(int *)(&DAT_0032a2d0 + iVar6 * 4));
    puVar14 = puVar14 + 1;
    piVar13 = piVar13 + 1;
    iVar9 = iVar9 + 1;
  }
  if ((iVar5 < 4) && (iVar5 < 4)) {
    puVar15 = &DAT_0032a310 + iVar5 * 4;
    piVar13 = &DAT_0032a320 + iVar5;
    do {
      iVar9 = UiMgr_FindLayout(0x25);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,(long)*(int *)(puVar15 + -4),8,
                          extraout_a3_lo);
      iVar9 = UiMgr_FindLayout(0x25);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,(long)*piVar13,8,extraout_a3_lo_00);
      iVar5 = iVar5 + 1;
      puVar15 = puVar15 + 4;
      piVar13 = piVar13 + 1;
    } while (iVar5 < 4);
  }
  MenuWnd_SetTitle(3,0x354);
  iVar9 = UiMgr_FindLayout(0x24);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0x25);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

