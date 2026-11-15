// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00250000 - 0x00254000
#include "ghidra_types.h"

// 0x002535c0  size 0x30
void maybe_Trickster_ResetSlot(int param_1,int param_2)

{
  param_1 = param_2 * 0x14 + param_1;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  if (*(int *)(param_1 + 0x31c) == 0) {
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x318) = 1;
  }
  return;
}

// 0x002535f0  size 0x3c
void maybe_Trickster_ClearSlot(int param_1,int param_2)

{
  param_1 = param_2 * 0x14 + param_1;
  *(undefined4 *)(param_1 + 0x310) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  if (*(int *)(param_1 + 0x31c) == 0) {
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x318) = 1;
  }
  return;
}

// 0x00253630  size 0x60c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_ChangeTyres(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long unaff_s0;
  
  iVar6 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      unaff_s0 = MenuWnd_DrawFooter(0x3a9,0xffffffffffffffff,0);
    }
  }
  else {
    uVar4 = UiRes_GetLayoutData(0x298);
    iVar6 = UiMgr_FindLayout(0xa2);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar6].layout.unk_310 = 0xffffffff;
    pUVar1[iVar6].layout.unk_31c = 0;
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 1;
    pUVar1[iVar6].layout.unk_31c = uVar4;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x299);
    iVar6 = UiMgr_FindLayout(0xa3);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar6].layout.unk_310 = 0xffffffff;
    pUVar1[iVar6].layout.unk_31c = 0;
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    pUVar1[iVar6].layout.unk_31c = uVar4;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x29b);
    iVar6 = UiMgr_FindLayout(0xa3);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar5;
    pUVar1[iVar6].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x29a);
    iVar6 = UiMgr_FindLayout(0xa4);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar6].layout.unk_310 = 0xffffffff;
    pUVar1[iVar6].layout.unk_31c = 0;
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    pUVar1[iVar6].layout.unk_31c = uVar4;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x29c);
    iVar6 = UiMgr_FindLayout(0xa4);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar5;
    pUVar1[iVar6].layout.animState = 1;
    Menu_ClearSlot(0);
    MenuWnd_SetHelpText(0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa3,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xa4,0);
  if (!bVar2 && !bVar3) {
    if (*(int *)(param_1 + 8) == 0) {
      if (unaff_s0 == 2) {
        *(undefined4 *)(param_1 + 0x658) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      if (unaff_s0 == 2) {
        MenuWnd_RequestRedraw();
      }
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa3,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xa4,1);
      if (unaff_s0 == 3 && (!bVar2 && !bVar3)) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa3,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xa4,1);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
  }
  MenuWnd_DrawText(0xa3,0x17,0x357);
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    MenuWnd_DrawTextId(0xa4,0x12,3,0x3a3);
    uVar4 = *(uint *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawText(0xa4,0x12,0x3a3);
    uVar4 = *(uint *)(param_1 + 8);
  }
  if ((uVar4 & 2) == 0) {
    MenuWnd_DrawTextId(0xa4,0x13,3,0x3a4);
    uVar4 = *(uint *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawText(0xa4,0x13,0x3a4);
    uVar4 = *(uint *)(param_1 + 8);
  }
  if ((uVar4 & 4) == 0) {
    MenuWnd_DrawTextId(0xa4,0x14,3,0x3a5);
  }
  else {
    MenuWnd_DrawText(0xa4,0x14,0x3a5);
  }
  MenuWnd_DrawText(7,0x2e,0x3a6);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  if ((*_g_MenuInput == 1) && (*(int *)(param_1 + 8) != 0)) {
    MenuWnd_SetItemState(0xa4,*(undefined4 *)(&DAT_0032c208 + *(int *)(param_1 + 0x62c) * 4),1,0);
  }
  if (*(int *)(param_1 + 8) == 0) {
    DAT_0032befc = 3;
  }
  else {
    DAT_0032befc = 3;
    g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa2,0);
  iVar6 = UiMgr_FindLayout(0xa2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0xa3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0xa4);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x00253c40  size 0x4b8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_TaAttack(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  UiMgr_FindLayout(0x9e);
  UiMgr_FindLayout(0x78);
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x1d9);
    iVar3 = UiMgr_FindLayout(0x9e);
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
    pUVar1[iVar3].layout.unk_31c = uVar4;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x1da);
    iVar3 = UiMgr_FindLayout(0x9e);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar5;
    pUVar1[iVar3].layout.animState = 1;
    iVar3 = UiMgr_FindLayout(0x78);
    pUVar1 = g_UiMgr->slots;
    piVar6 = (int *)UiRes_GetLayoutData(*(int *)(param_1 + 0x6b0) + 0x34);
    UiLayout_PlayAnim(&pUVar1[iVar3].layout,piVar6);
    iVar3 = UiMgr_FindLayout(0x79);
    pUVar1 = g_UiMgr->slots;
    piVar6 = (int *)UiRes_GetLayoutData(0x291);
    UiLayout_PlayAnim(&pUVar1[iVar3].layout,piVar6);
    iVar3 = UiMgr_FindLayout(0x78);
    pUVar1 = g_UiMgr->slots;
    uVar8 = Profile_Get(0);
    uVar8 = Profile_GetSelection2733(uVar8);
    iVar7 = MsgId_ForOption(uVar8);
    UiElem_SetPropInt(&pUVar1[iVar3].layout,
                      (long)*(int *)(&DAT_0032c1d0 + *(int *)(param_1 + 0x6b0) * 4),0x16,
                      *(int *)(&DAT_0032c1b0 + iVar7 * 4));
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x9e,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x9e,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x9e,*(undefined4 *)(&DAT_0032c1e8 + *(int *)(param_1 + 0x62c) * 4),1,0);
  }
  MenuWnd_DrawText(0x9e,0x17,0x392);
  MenuWnd_DrawText(0x9e,0x18,0x393);
  MenuWnd_DrawText(0x9e,0x19,0x394);
  MenuWnd_DrawText(0x79,0x1a,0x356);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032c1f8 + *(int *)(param_1 + 0x62c) * 4));
  uVar8 = Race_GetCourseVariant();
  uVar8 = MsgId_ForOption(uVar8);
  uVar8 = MsgId_ForSlot(uVar8,1);
  MenuWnd_DrawText(0x78,0x42,uVar8);
  uVar8 = Race_GetCourseVariant();
  uVar8 = MsgId_ForOption(uVar8);
  uVar8 = MsgId_ForSlot(uVar8,1);
  MenuWnd_DrawText(0x78,0x43,uVar8);
  uVar8 = Race_GetCourseVariant();
  uVar8 = MsgId_ForOption(uVar8);
  uVar8 = MsgId_ForSlot(uVar8,1);
  MenuWnd_DrawText(0x78,0x44,uVar8);
  uVar8 = Race_GetCourseVariant();
  uVar8 = MsgId_ForOption(uVar8);
  uVar8 = MsgId_ForSlot(uVar8,1);
  MenuWnd_DrawText(0x78,0x45,uVar8);
  iVar3 = UiMgr_FindLayout(0x77);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x78);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x79);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x9e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

