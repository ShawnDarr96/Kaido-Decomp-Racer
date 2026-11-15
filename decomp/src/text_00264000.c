// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00264000 - 0x00268000
#include "ghidra_types.h"

// 0x002644c0  size 0x418
void MenuScr_Draw_NormalCar_44c0(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  bVar2 = true;
  iVar4 = (int)param_1;
  if ((*(int *)(iVar4 + 0x898) == 0) && (*(int *)(iVar4 + 0x890) == 0)) {
    bVar2 = false;
  }
  iVar6 = *(int *)(iVar4 + 0x894);
  *(undefined4 *)(iVar4 + 0x894) = 0;
  if (iVar6 != 0) {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    uVar5 = UiRes_GetLayoutData(0x368);
    iVar6 = UiMgr_FindLayout(0x108);
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
    pUVar1[iVar6].layout.unk_31c = uVar5;
    pUVar1[iVar6].layout.unk_318 = 1;
    if (*(int *)(iVar4 + 0x880) == -1) {
      maybe_GhostData_AnimateLayout(param_1);
      iVar6 = *(int *)(iVar4 + 0x890);
      goto LAB_0026451c;
    }
  }
  iVar6 = *(int *)(iVar4 + 0x890);
LAB_0026451c:
  if ((iVar6 != 0) && (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x108,0), !bVar3)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar4 + 0x890) = 0;
    bVar2 = false;
  }
  if (*(int *)(iVar4 + 0x898) != 0) {
    iVar6 = *(int *)(iVar4 + 0x89c);
    *(undefined4 *)(iVar4 + 0x89c) = 0;
    if (iVar6 != 0) {
      uVar5 = UiRes_GetLayoutData(0x369);
      iVar6 = UiMgr_FindLayout(0x108);
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
      pUVar1[iVar6].layout.unk_31c = uVar5;
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x108,0);
    if (!bVar3) {
      *(undefined4 *)(iVar4 + 0x898) = 0;
      bVar2 = true;
    }
  }
  if (!bVar2) {
    MenuWnd_SetItemState(0x108,*(undefined4 *)(&DAT_0036ecc0 + *(int *)(iVar4 + 0x24) * 4),1,0);
  }
  uVar7 = MsgId_ForSlot(*(undefined4 *)(iVar4 + 0x10),1);
  MenuWnd_DrawText(0x103,(&DAT_0032d3b0)[*(int *)(iVar4 + 0x758)],uVar7);
  uVar7 = 0x66;
  if (*(int *)(iVar4 + 8) != 0) {
    uVar7 = 0x65;
  }
  MenuWnd_DrawText(0x103,0x42,uVar7);
  if (*(uint *)(iVar4 + 0x78) == 0 || (*(uint *)(iVar4 + 0x78) & 1) != 0) {
    MenuWnd_DrawText(0x108,0xf,0x418);
    uVar5 = *(uint *)(iVar4 + 0x78);
  }
  else {
    MenuWnd_DrawTextId(0x108,0xf,3,0x418);
    uVar5 = *(uint *)(iVar4 + 0x78);
  }
  if (uVar5 == 0 || (uVar5 & 2) != 0) {
    MenuWnd_DrawText(0x108,0x10,0x419);
    iVar4 = *(int *)(iVar4 + 0x24);
  }
  else {
    MenuWnd_DrawTextId(0x108,0x10,3,0x419);
    iVar4 = *(int *)(iVar4 + 0x24);
  }
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_0036ecc8 + iVar4 * 4));
  iVar4 = UiMgr_FindLayout(0x108);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x103);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002648e0  size 0x478
void MenuScr_Draw_LoadGhostData(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  bVar2 = true;
  iVar4 = (int)param_1;
  if ((*(int *)(iVar4 + 0x898) == 0) && (*(int *)(iVar4 + 0x890) == 0)) {
    bVar2 = false;
  }
  iVar6 = *(int *)(iVar4 + 0x894);
  *(undefined4 *)(iVar4 + 0x894) = 0;
  if (iVar6 != 0) {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    uVar5 = UiRes_GetLayoutData(0x377);
    iVar6 = UiMgr_FindLayout(0x10a);
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
    pUVar1[iVar6].layout.unk_31c = uVar5;
    pUVar1[iVar6].layout.unk_318 = 1;
    if (*(int *)(iVar4 + 0x880) == -1) {
      maybe_GhostData_AnimateLayout(param_1);
      iVar6 = *(int *)(iVar4 + 0x890);
      goto LAB_0026493c;
    }
  }
  iVar6 = *(int *)(iVar4 + 0x890);
LAB_0026493c:
  if ((iVar6 != 0) && (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x10a,0), !bVar3)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar4 + 0x890) = 0;
    bVar2 = false;
  }
  if (*(int *)(iVar4 + 0x898) != 0) {
    iVar6 = *(int *)(iVar4 + 0x89c);
    *(undefined4 *)(iVar4 + 0x89c) = 0;
    if (iVar6 != 0) {
      uVar5 = UiRes_GetLayoutData(0x378);
      iVar6 = UiMgr_FindLayout(0x10a);
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
      pUVar1[iVar6].layout.unk_31c = uVar5;
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x10a,0);
    if (!bVar3) {
      *(undefined4 *)(iVar4 + 0x898) = 0;
      bVar2 = true;
    }
  }
  if (!bVar2) {
    MenuWnd_SetItemState(0x10a,*(undefined4 *)(&DAT_0032d600 + *(int *)(iVar4 + 0x28) * 4),1,0);
  }
  uVar7 = MsgId_ForSlot(*(undefined4 *)(iVar4 + 0x10),1);
  MenuWnd_DrawText(0x103,(&DAT_0032d3b0)[*(int *)(iVar4 + 0x758)],uVar7);
  uVar7 = 0x66;
  if (*(int *)(iVar4 + 8) != 0) {
    uVar7 = 0x65;
  }
  MenuWnd_DrawText(0x103,0x42,uVar7);
  Subtitle_Draw();
  if (*(uint *)(iVar4 + 0x70) == 0 || (*(uint *)(iVar4 + 0x70) & 1) != 0) {
    MenuWnd_DrawText(0x10a,0x16,0x1f38);
    uVar5 = *(uint *)(iVar4 + 0x70);
  }
  else {
    MenuWnd_DrawTextId(0x10a,0x16,3,0x1f38);
    uVar5 = *(uint *)(iVar4 + 0x70);
  }
  if (uVar5 == 0 || (uVar5 & 2) != 0) {
    MenuWnd_DrawText(0x10a,0x17,0x1f39);
    uVar5 = *(uint *)(iVar4 + 0x70);
  }
  else {
    MenuWnd_DrawTextId(0x10a,0x17,3,0x1f39);
    uVar5 = *(uint *)(iVar4 + 0x70);
  }
  if (uVar5 == 0 || (uVar5 & 4) != 0) {
    MenuWnd_DrawText(0x10a,0x18,0x1f3a);
    iVar4 = *(int *)(iVar4 + 0x28);
  }
  else {
    MenuWnd_DrawTextId(0x10a,0x18,3,0x1f3a);
    iVar4 = *(int *)(iVar4 + 0x28);
  }
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_0032d610 + iVar4 * 4));
  iVar4 = UiMgr_FindLayout(0x10a);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x103);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x00264d60  size 0x744
/* state of MenuPage32; on-screen text/callee hint "DrawSelectCourseTo" (was
   ScrDraw_SelectCourseTo_Update) */

void maybe_PageSelectCourse_State4_DrawSelectCourseTo(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  UiLayout *pUVar9;
  undefined *puVar10;
  
  bVar3 = true;
  if ((*(int *)(param_1 + 0x898) == 0) && (*(int *)(param_1 + 0x890) == 0)) {
    bVar3 = false;
  }
  iVar6 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x18);
  }
  else {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    MenuOpt_InitIndex(param_1 + 0x84c,0x109);
    uVar7 = UiRes_GetLayoutData(0x36d);
    iVar6 = UiMgr_FindLayout(0x109);
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
    pUVar1[iVar6].layout.unk_31c = uVar7;
    uVar7 = 0;
    pUVar1[iVar6].layout.unk_318 = 1;
    puVar10 = &DAT_0032d5a0;
    iVar6 = param_1;
    do {
      maybe_MenuOpt_InitB(iVar6 + 0x76c,0x109,puVar10);
      uVar7 = uVar7 + 1;
      puVar10 = puVar10 + 8;
      iVar6 = iVar6 + 0x10;
    } while (uVar7 < 8);
    iVar6 = UiMgr_FindLayout(0x103);
    pUVar9 = &g_UiMgr->slots[iVar6].layout;
    UiElem_SetPropFloat(pUVar9,0x52,8,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar9,0x53,8,extraout_a3_lo_00);
    iVar6 = *(int *)(param_1 + 0x18);
  }
  bVar5 = *(int *)(param_1 + 0x14) == 0;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x76c,iVar6 == 0,iVar6 == 0 && bVar5);
  bVar2 = *(int *)(param_1 + 0x18) == 1;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x77c,bVar2,bVar2 && bVar5);
  bVar5 = *(int *)(param_1 + 0x1c) == 0;
  bVar2 = *(int *)(param_1 + 0x14) == 1;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x78c,bVar5,bVar5 && bVar2);
  bVar5 = *(int *)(param_1 + 0x1c) == 1;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x79c,bVar5,bVar5 && bVar2);
  bVar5 = *(int *)(param_1 + 0x1c) == 2;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x7ac,bVar5,bVar5 && bVar2);
  bVar5 = *(int *)(param_1 + 0x1c) == 3;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x7bc,bVar5,bVar5 && bVar2);
  bVar5 = *(int *)(param_1 + 0x20) == 0;
  bVar2 = *(int *)(param_1 + 0x14) == 2;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x7cc,bVar5,bVar5 && bVar2);
  bVar5 = *(int *)(param_1 + 0x20) == 1;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x7dc,bVar5,bVar5 && bVar2);
  if ((*(int *)(param_1 + 0x890) != 0) &&
     (bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x109,0), !bVar5)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x890) = 0;
    bVar3 = false;
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar6 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar6 != 0) {
      uVar7 = UiRes_GetLayoutData(0x36e);
      iVar6 = UiMgr_FindLayout(0x109);
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
      pUVar1[iVar6].layout.unk_31c = uVar7;
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x109,0);
    if (!bVar5) {
      *(undefined4 *)(param_1 + 0x898) = 0;
      bVar3 = true;
    }
  }
  if (bVar3) {
    maybe_MenuOpt_SetSelectedB(param_1 + 0x76c,*(int *)(param_1 + 0x18) == 0,0);
    maybe_MenuOpt_SetSelectedB(param_1 + 0x77c,*(int *)(param_1 + 0x18) == 1,0);
    maybe_MenuOpt_SetSelectedB(param_1 + 0x78c,*(int *)(param_1 + 0x1c) == 0,0);
    maybe_MenuOpt_SetSelectedB(param_1 + 0x79c,*(int *)(param_1 + 0x1c) == 1,0);
    maybe_MenuOpt_SetSelectedB(param_1 + 0x7ac,*(int *)(param_1 + 0x1c) == 2,0);
    maybe_MenuOpt_SetSelectedB(param_1 + 0x7bc,*(int *)(param_1 + 0x1c) == 3,0);
    maybe_MenuOpt_SetSelectedB(param_1 + 0x7cc,*(int *)(param_1 + 0x20) == 0,0);
    maybe_MenuOpt_SetSelectedB(param_1 + 0x7dc,*(int *)(param_1 + 0x20) == 1,0);
  }
  else {
    maybe_MenuOpt_SetValue
              (param_1 + 0x84c,*(undefined4 *)(&DAT_0032d5e0 + *(int *)(param_1 + 0x14) * 4));
  }
  Subtitle_Draw();
  uVar8 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x10),1);
  MenuWnd_DrawText(0x103,(&DAT_0032d3b0)[*(int *)(param_1 + 0x758)],uVar8);
  uVar8 = 0x66;
  if (*(int *)(param_1 + 8) != 0) {
    uVar8 = 0x65;
  }
  MenuWnd_DrawText(0x103,0x42,uVar8);
  uVar8 = MsgId_OnOff(1);
  MenuWnd_DrawText(0x109,0x2c,uVar8);
  uVar8 = MsgId_OnOff(0);
  MenuWnd_DrawText(0x109,0x2d,uVar8);
  uVar8 = MsgId_ForResult(0);
  MenuWnd_DrawText(0x109,0x2e,uVar8);
  uVar8 = MsgId_ForResult(3);
  MenuWnd_DrawText(0x109,0x2f,uVar8);
  cVar4 = maybe_QuickRace_MapRowToItem(param_1);
  if ((cVar4 == '\x04') || (cVar4 = maybe_QuickRace_MapRowToItem(param_1), cVar4 == '\a')) {
    uVar8 = MsgId_ForResult(2);
    MenuWnd_DrawText(0x109,0x30,uVar8);
    uVar8 = MsgId_ForResult(5);
    MenuWnd_DrawText(0x109,0x31,uVar8);
  }
  else {
    uVar8 = MsgId_ForResult(1);
    MenuWnd_DrawText(0x109,0x30,uVar8);
    uVar8 = MsgId_ForResult(4);
    MenuWnd_DrawText(0x109,0x31,uVar8);
  }
  uVar8 = MsgId_YesNo(0);
  MenuWnd_DrawText(0x109,0x32,uVar8);
  uVar8 = MsgId_YesNo(1);
  MenuWnd_DrawText(0x109,0x33,uVar8);
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_0032d5f0 + *(int *)(param_1 + 0x14) * 4));
  iVar6 = UiMgr_FindLayout(0x109);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x103);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002654b0  size 0x6ac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SelectCourseTo(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iStack_4;
  
  iVar6 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x890);
  }
  else {
    iVar6 = UiMgr_FindLayout(0x103);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,0x35,0x16,
                      *(int *)(*(int *)(param_1 + 8) * 4 + 0x36eca0));
    uVar5 = UiRes_GetLayoutData(0x370);
    iVar6 = UiMgr_FindLayout(0x103);
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
    pUVar1[iVar6].layout.unk_31c = uVar5;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x36f);
    iVar6 = UiMgr_FindLayout(0x103);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x394 = uVar4;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x390 = 1;
    uVar4 = UiRes_GetLayoutData(0x376);
    iVar6 = UiMgr_FindLayout(0x103);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3a8 = uVar4;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3a4 = 1;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x103,0x36ecb8,2,0);
    iVar6 = *(int *)(param_1 + 0x890);
  }
  if ((iVar6 != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x103,0), !bVar2)) {
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  if (*(int *)(param_1 + 0x898) == 0) {
    MenuWnd_DrawCursor(3 < *(int *)(param_1 + 0x754));
  }
  else {
    iVar6 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar6 != 0) {
      if (*(int *)(param_1 + 0x888) == 2) {
        uVar5 = UiRes_GetLayoutData(0x371);
        iVar6 = UiMgr_FindLayout(0x103);
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
        pUVar1[iVar6].layout.unk_31c = uVar5;
        pUVar1[iVar6].layout.unk_318 = 1;
      }
      else {
        uVar5 = UiRes_GetLayoutData(*(undefined4 *)(*(int *)(param_1 + 0x758) * 4 + 0x32d390));
        iVar6 = UiMgr_FindLayout(0x103);
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
        pUVar1[iVar6].layout.unk_31c = uVar5;
        pUVar1[iVar6].layout.unk_318 = 1;
      }
    }
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x103,0);
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x103,*(undefined4 *)(&DAT_0032d410 + *(int *)(param_1 + 0x758) * 4),1,0);
  }
  MenuWnd_Update(param_1 + 0x764,0x103,6,7);
  iVar11 = *(int *)(param_1 + 0x754) + 1;
  MenuWnd_Clear(&iStack_4,*(undefined4 *)(param_1 + 0x764),*(undefined4 *)(param_1 + 0x758),
                *(undefined4 *)(param_1 + 0x10),iVar11,4);
  iVar6 = (*(int *)(param_1 + 0x10) + iVar11) - *(int *)(param_1 + 0x758);
  iVar9 = 0;
  puVar8 = &DAT_0032d3b0;
  piVar12 = &DAT_0032d3d0;
  while( true ) {
    iVar3 = iVar11;
    if (4 < iVar11) {
      iVar3 = 5;
    }
    if ((iVar3 <= iVar9) ||
       ((iVar6 = iVar6 % iVar11, iVar9 == 4 && (iVar6 = iStack_4, iStack_4 == -1)))) break;
    uVar7 = MsgId_ForSlot(iVar6,1);
    MenuWnd_DrawText(0x103,*puVar8,uVar7);
    iVar3 = UiMgr_FindLayout(0x103);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,(long)*piVar12,0x16,
                      *(int *)(&DAT_0032d430 + iVar6 * 4));
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 1;
    piVar12 = piVar12 + 1;
    iVar9 = iVar9 + 1;
  }
  if ((iVar11 < 4) && (iVar11 < 4)) {
    piVar10 = (int *)(&DAT_0032d3f0 + iVar11 * 4);
    piVar12 = &DAT_0032d3d0 + iVar11;
    do {
      iVar6 = UiMgr_FindLayout(0x103);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,(long)*piVar10,8,extraout_a3_lo);
      iVar6 = UiMgr_FindLayout(0x103);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,(long)*piVar12,8,extraout_a3_lo_00);
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar11 < 4);
  }
  uVar7 = 0x66;
  if (*(int *)(param_1 + 8) != 0) {
    uVar7 = 0x65;
  }
  MenuWnd_DrawText(0x103,0x42,uVar7);
  MenuWnd_DrawText(0x102,0x1b,0x1f2a);
  iVar6 = UiMgr_FindLayout(0x103);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  Subtitle_Draw();
  return;
}

// 0x00265b60  size 0x3b8
void MenuScr_Draw_TimeAttack(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  bVar2 = true;
  if ((*(int *)(param_1 + 0x898) == 0) && (*(int *)(param_1 + 0x890) == 0)) {
    bVar2 = false;
  }
  iVar4 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar4 != 0) {
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    uVar5 = UiRes_GetLayoutData(0x379);
    iVar4 = UiMgr_FindLayout(0x104);
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
    pUVar1[iVar4].layout.unk_31c = uVar5;
    pUVar1[iVar4].layout.unk_318 = 1;
  }
  if ((*(int *)(param_1 + 0x890) != 0) &&
     (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x104,0), !bVar3)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x890) = 0;
    bVar2 = false;
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar4 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar4 != 0) {
      uVar5 = UiRes_GetLayoutData(0x37a);
      iVar4 = UiMgr_FindLayout(0x104);
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
      pUVar1[iVar4].layout.unk_31c = uVar5;
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x104,0);
    if (!bVar3) {
      *(undefined4 *)(param_1 + 0x898) = 0;
      bVar2 = true;
    }
  }
  if (!bVar2) {
    MenuWnd_SetItemState(0x104,*(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + 0x36ecb0),1,0);
  }
  UiLayout_UpdateAnimById((UiLayout *)0x10b,0);
  MenuWnd_DrawText(0x10d,0x25,0x66);
  MenuWnd_DrawText(0x10d,0x26,0x65);
  MenuWnd_DrawText(0x10d,0x27,0x107);
  MenuWnd_DrawText(0x104,0xd,0x1f36);
  if (*(uint *)(param_1 + 0x58) == 0 || (*(uint *)(param_1 + 0x58) & 2) != 0) {
    MenuWnd_DrawText(0x104,0xe,0x1f37);
    iVar4 = *(int *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawTextId(0x104,0xe,3,0x1f37);
    iVar4 = *(int *)(param_1 + 8);
  }
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + iVar4 * 8 + 0x32d590));
  iVar4 = UiMgr_FindLayout(0x104);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x10d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x10b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x00265f20  size 0x10c
void MenuScr_Draw_DoYouWant(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x3c),0x36eca8);
  MenuWnd_DrawText(5,0x1c,0x14d);
  if (*(int *)(param_1 + 0x898) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  iVar1 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x10b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00266030  size 0x5c8
void MenuScr_Select_TimeAttack(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  
  bVar2 = true;
  if ((*(int *)(param_1 + 0x898) == 0) && (*(int *)(param_1 + 0x890) == 0)) {
    bVar2 = false;
  }
  iVar7 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar7 != 0) {
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    if (*(int *)(param_1 + 0x880) != 2) {
      uVar6 = UiRes_GetLayoutData(899);
      iVar7 = UiMgr_FindLayout(0x10d);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
        pUVar1[iVar7].layout.animState = 0;
      }
      else {
        pUVar1[iVar7].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
        pUVar1[iVar7].layout.animState = 0;
      }
      else {
        pUVar1[iVar7].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar6;
      pUVar1[iVar7].layout.animState = 1;
    }
    uVar8 = UiRes_GetLayoutData(0x382);
    iVar7 = UiMgr_FindLayout(0x10d);
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
    pUVar1[iVar7].layout.unk_31c = uVar8;
    pUVar1[iVar7].layout.unk_318 = 1;
  }
  if (*(int *)(param_1 + 0x890) != 0) {
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x10d,0);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x10d,1);
    if (!bVar4 && !bVar5) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x890) = 0;
      bVar2 = false;
    }
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar7 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar7 != 0) {
      lVar9 = MenuMgr_Goto();
      if ((lVar9 == 0) && (iVar7 = *(int *)(param_1 + 8), iVar7 != 2)) {
        if (iVar7 == 0) {
          uVar6 = UiRes_GetLayoutData(DAT_0032d3a8);
          iVar7 = UiMgr_FindLayout(0x10d);
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
        }
        else if (iVar7 == 1) {
          uVar6 = UiRes_GetLayoutData(DAT_0032d3ac);
          iVar7 = UiMgr_FindLayout(0x10d);
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
        }
      }
      else {
        uVar6 = UiRes_GetLayoutData(DAT_0032d3a0);
        iVar7 = UiMgr_FindLayout(0x10d);
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
        uVar6 = UiRes_GetLayoutData(DAT_0032d3a4);
        iVar7 = UiMgr_FindLayout(0x10d);
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
      }
    }
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x10d,2);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x10d,3);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x10d,4);
    if (!bVar3 && (!bVar4 && !bVar5)) {
      *(undefined4 *)(param_1 + 0x898) = 0;
      bVar2 = true;
    }
  }
  if (!bVar2) {
    MenuWnd_SetItemState(0x10d,*(undefined4 *)(&DAT_0032d568 + *(int *)(param_1 + 8) * 4),1,0);
  }
  UiLayout_UpdateAnimById((UiLayout *)0x10b,0);
  MenuWnd_DrawText(0x10d,0x25,0x66);
  MenuWnd_DrawText(0x10d,0x26,0x65);
  MenuWnd_DrawText(0x10d,0x27,0x107);
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_0032d578 + *(int *)(param_1 + 8) * 4));
  iVar7 = UiMgr_FindLayout(0x10d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x10b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x00266600  size 0x3c
/* page identified from its states' on-screen text (N154) */

void maybe_PageSelectCourse_Exit(void)

{
  g_MenuMgr->unk_05a0 = 0;
  g_MenuMgr->unk_05e8 = 0;
  g_MenuMgr->unk_060c = 0;
  g_MenuMgr->unk_0634 = 0;
  g_MenuMgr->unk_0644 = 0;
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00266640  size 0x98
/* page identified from its states' on-screen text (N154) */

void maybe_PageSelectCourse_Update(int param_1)

{
  uint uVar1;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_MenuScr_Select_TimeAttack_0032d360)[*(int *)(param_1 + 0x884)])();
  uVar1 = g_MenuMgr->flags;
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    g_MenuMgr->flags = uVar1 | 0x800;
  }
  return;
}

// 0x002666e0  size 0x1f8
/* page identified from its states' on-screen text (N154) */

void maybe_PageSelectCourse_Enter(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = UiRes_GetLayoutData(0x381);
  iVar4 = UiMgr_FindLayout(0x10b);
  pUVar1 = g_UiMgr->slots;
  if (pUVar1[iVar4].layout.unk_31c == 0) {
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 1;
    pUVar1[iVar4].layout.unk_31c = uVar3;
    pUVar1[iVar4].layout.unk_318 = 1;
  }
  if (*(int *)(param_1 + 0x884) == 2) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar5 = UiRes_GetLayoutData(DAT_0032d3a8);
      iVar4 = UiMgr_FindLayout(0x10d);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x360 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = 0;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
      if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
      }
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
      if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
      }
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x364 = 0;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar5;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    }
    else if (*(int *)(param_1 + 8) == 1) {
      uVar5 = UiRes_GetLayoutData(DAT_0032d3ac);
      iVar4 = UiMgr_FindLayout(0x10d);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x360 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = 0;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
      if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
      }
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
      if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
      }
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x364 = 0;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar5;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    }
    do {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x10d,4);
    } while (bVar2);
  }
  return;
}

// 0x002668e0  size 0x154
void maybe_MenuWnd_DrawRivalLabels(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char acStack_10 [16];
  
  uVar3 = 0;
  pcVar2 = acStack_10;
  do {
    *pcVar2 = *param_3;
    cVar1 = *pcVar2;
    param_3 = param_3 + 1;
    if (cVar1 == '-') {
      *pcVar2 = ' ';
    }
    else if (cVar1 < 'A') {
      *pcVar2 = *pcVar2 + -0x32;
    }
    else if (cVar1 < 'J') {
      *pcVar2 = *pcVar2 + -0x39;
    }
    else if (cVar1 < 'P') {
      *pcVar2 = *pcVar2 + -0x3a;
    }
    else {
      *pcVar2 = *pcVar2 + -0x3b;
    }
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (uVar3 < 0xd);
  MenuWnd_DrawRivalLabel
            (param_1,param_2,0,0x1f42,acStack_10[0] + 0x1f43,acStack_10[1] + 0x1f43,
             acStack_10[2] + 0x1f43,acStack_10[3] + 0x1f43);
  return;
}

// 0x00266a40  size 0x2a0
void maybe_GhostData_AnimateLayout(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  UiLayout *pUVar6;
  
  iVar3 = UiMgr_FindLayout(0x103);
  pUVar6 = &g_UiMgr->slots[iVar3].layout;
  UiElem_SetPropInt(pUVar6,0x35,0x16,*(int *)(*(int *)(param_1 + 8) * 4 + 0x36eca0));
  UiElem_SetPropFloat(pUVar6,0x52,8,extraout_a3_lo);
  UiElem_SetPropFloat(pUVar6,0x53,8,extraout_a3_lo_00);
  iVar3 = *(int *)(param_1 + 0x758);
  UiElem_SetPropInt(pUVar6,0x48,0x16,*(int *)(&DAT_0032d430 + *(int *)(param_1 + 0x10) * 4));
  uVar4 = UiRes_GetLayoutData(*(undefined4 *)(iVar3 * 4 + 0x32d390));
  iVar3 = UiMgr_FindLayout(0x103);
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
  if (*(int *)(param_1 + 8) == 0) {
    uVar5 = UiRes_GetLayoutData(DAT_0032d3a8);
    iVar3 = UiMgr_FindLayout(0x10d);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    uVar5 = UiRes_GetLayoutData(DAT_0032d3ac);
    iVar3 = UiMgr_FindLayout(0x10d);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  }
  do {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x103,0);
  } while (bVar2);
  do {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x10d,4);
  } while (bVar2);
  return;
}

// 0x00266ce0  size 0x3e0
void ScrGarage_Draw_NoData(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  
  iVar10 = 0;
  piVar8 = &DAT_0032d4b0;
  do {
    iVar6 = (*(int *)(param_1 + 0x4c) + iVar10) * 4;
    piVar7 = (int *)(param_2 + iVar6);
    piVar9 = (int *)*piVar7;
    uVar1 = *(undefined1 *)((int)piVar9 + 5);
    iVar2 = piVar9[1];
    iVar5 = *piVar9;
    iVar3 = UiMgr_FindLayout(0x10e);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,(long)*piVar8,0x16,
                      *(int *)(&DAT_0032d540 + iVar6));
    if (iVar5 < 0) {
      MenuWnd_DrawText(0x10e,piVar8[6],0x5b);
      MenuWnd_DrawText(0x10e,piVar8[5],0x5b);
      MenuWnd_DrawText(0x10e,piVar8[2],0x5b);
      MenuWnd_DrawText(0x10e,piVar8[1],0x5b);
    }
    else {
      uVar4 = MsgId_ForResult((char)iVar2);
      MenuWnd_DrawText(0x10e,piVar8[6],uVar4);
      uVar4 = MsgId_YesNo(uVar1);
      MenuWnd_DrawText(0x10e,piVar8[5],uVar4);
      uVar4 = MenuText_CarNameOrMaker(iVar5,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,piVar8[2],uVar4);
      uVar4 = MenuText_CarGrade(iVar5,0xffffffffffffffff);
      MenuWnd_DrawRivalLabel(0x10e,piVar8[3],4,uVar4);
      uVar4 = MenuText_CarShortName(iVar5,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,piVar8[1],uVar4);
    }
    MenuWnd_DrawLabel(0x10e,piVar8[4],0x3a,*(undefined4 *)(*piVar7 + 0x10));
    iVar10 = iVar10 + 1;
    piVar8 = piVar8 + 7;
  } while (iVar10 < 4);
  if (*(int *)(param_1 + 0x54) - 1U < 2) {
    if (*(int *)(param_1 + 0x54) == 1) {
      iVar5 = -1;
    }
    else {
      iVar5 = 4;
    }
    iVar6 = (*(int *)(param_1 + 0x4c) + iVar5) * 4;
    piVar9 = (int *)(param_2 + iVar6);
    piVar8 = (int *)*piVar9;
    uVar1 = *(undefined1 *)((int)piVar8 + 5);
    iVar2 = piVar8[1];
    iVar5 = *piVar8;
    iVar3 = UiMgr_FindLayout(0x10e);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,(long)(int)(&DAT_0032d4b0)[iVar10 * 7],0x16,
                      *(int *)(&DAT_0032d540 + iVar6));
    if (iVar5 < 0) {
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c8)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c4)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b8)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b4)[iVar10 * 7],0x5b);
      iVar5 = *piVar9;
    }
    else {
      uVar4 = MsgId_ForResult((char)iVar2);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c8)[iVar10 * 7],uVar4);
      uVar4 = MsgId_YesNo(uVar1);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c4)[iVar10 * 7],uVar4);
      uVar4 = MenuText_CarNameOrMaker(iVar5,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b8)[iVar10 * 7],uVar4);
      uVar4 = MenuText_CarGrade(iVar5,0xffffffffffffffff);
      MenuWnd_DrawRivalLabel(0x10e,(&DAT_0032d4bc)[iVar10 * 7],4,uVar4);
      uVar4 = MenuText_CarShortName(iVar5,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b4)[iVar10 * 7],uVar4);
      iVar5 = *piVar9;
    }
    MenuWnd_DrawLabel(0x10e,(&DAT_0032d4c0)[iVar10 * 7],0x3a,*(undefined4 *)(iVar5 + 0x10));
  }
  return;
}

// 0x002670c0  size 0x420
void ScrRecord_Draw_NoData(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar10 = 0;
  piVar8 = &DAT_0032d4b0;
  do {
    iVar6 = (*(int *)(param_1 + 0x4c) + iVar10) * 4;
    piVar7 = (int *)(param_2 + iVar6);
    piVar9 = (int *)*piVar7;
    uVar1 = *(undefined1 *)((int)piVar9 + 5);
    iVar2 = piVar9[1];
    iVar5 = *piVar9;
    iVar3 = UiMgr_FindLayout(0x10e);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,(long)*piVar8,0x16,
                      *(int *)(&DAT_0032d540 + iVar6));
    if (iVar5 < 0) {
      MenuWnd_DrawText(0x10e,piVar8[6],0x5b);
      MenuWnd_DrawText(0x10e,piVar8[5],0x5b);
      MenuWnd_DrawText(0x10e,piVar8[2],0x5b);
      MenuWnd_DrawText(0x10e,piVar8[1],0x5b);
    }
    else {
      uVar4 = MsgId_ForResult((char)iVar2);
      MenuWnd_DrawText(0x10e,piVar8[6],uVar4);
      uVar4 = MsgId_YesNo(uVar1);
      MenuWnd_DrawText(0x10e,piVar8[5],uVar4);
      uVar4 = MenuText_CarNameOrMaker(iVar5,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,piVar8[2],uVar4);
      uVar4 = MenuText_CarGrade(iVar5,0xffffffffffffffff);
      MenuWnd_DrawRivalLabel(0x10e,piVar8[3],4,uVar4);
      uVar4 = MenuText_CarShortName(iVar5,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,piVar8[1],uVar4);
    }
    Time_SplitHms(1,*(undefined4 *)(*piVar7 + 0xc),&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawLabel(0x10e,piVar8[4],0x331,uStack_4,uStack_8,uStack_c);
    iVar10 = iVar10 + 1;
    piVar8 = piVar8 + 7;
  } while (iVar10 < 4);
  if (*(int *)(param_1 + 0x54) - 1U < 2) {
    if (*(int *)(param_1 + 0x54) == 1) {
      iVar5 = -1;
    }
    else {
      iVar5 = 4;
    }
    iVar6 = (*(int *)(param_1 + 0x4c) + iVar5) * 4;
    piVar9 = (int *)(param_2 + iVar6);
    piVar8 = (int *)*piVar9;
    uVar1 = *(undefined1 *)((int)piVar8 + 5);
    iVar2 = piVar8[1];
    iVar5 = *piVar8;
    iVar3 = UiMgr_FindLayout(0x10e);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,(long)(int)(&DAT_0032d4b0)[iVar10 * 7],0x16,
                      *(int *)(&DAT_0032d540 + iVar6));
    if (iVar5 < 0) {
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c8)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c4)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b8)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b4)[iVar10 * 7],0x5b);
      iVar5 = *piVar9;
    }
    else {
      uVar4 = MsgId_ForResult((char)iVar2);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c8)[iVar10 * 7],uVar4);
      uVar4 = MsgId_YesNo(uVar1);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c4)[iVar10 * 7],uVar4);
      uVar4 = MenuText_CarNameOrMaker(iVar5,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b8)[iVar10 * 7],uVar4);
      uVar4 = MenuText_CarGrade(iVar5,0xffffffffffffffff);
      MenuWnd_DrawRivalLabel(0x10e,(&DAT_0032d4bc)[iVar10 * 7],4,uVar4);
      uVar4 = MenuText_CarShortName(iVar5,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b4)[iVar10 * 7],uVar4);
      iVar5 = *piVar9;
    }
    Time_SplitHms(1,*(undefined4 *)(iVar5 + 0xc),&uStack_10,&uStack_14,&uStack_18);
    MenuWnd_DrawLabel(0x10e,(&DAT_0032d4c0)[iVar10 * 7],0x331,uStack_10,uStack_14,uStack_18);
  }
  return;
}

// 0x002674e0  size 0x380
void ScrCareer_Draw_YourGarageHas(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  iVar5 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar5 != 0) {
    uVar6 = UiRes_GetLayoutData(0x1df);
    iVar5 = UiMgr_FindLayout(0x31);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar5].layout.unk_310 = 0xffffffff;
    pUVar1[iVar5].layout.unk_31c = 0;
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    pUVar1[iVar5].layout.unk_31c = uVar6;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x1e0);
    iVar5 = UiMgr_FindLayout(0x31);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar7;
    pUVar1[iVar5].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x1e1);
    iVar5 = UiMgr_FindLayout(0x31);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x31,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x31,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  MenuWnd_DrawTextId(0x31,0x13,4,0x3cb);
  MenuWnd_DrawTextId(0x31,0x15,4,0x3cc);
  MenuWnd_DrawText(0x31,0x14,0x3cd);
  uVar8 = Profile_Get(0);
  cVar3 = Garage_HasAnyCar(uVar8);
  MenuWnd_DrawLabel(0x31,0x17,0x3a,cVar3 + -1);
  MenuWnd_DrawLabel(0x31,0x18,0x3a,*(undefined4 *)(param_1 + 0x2c));
  uVar8 = Profile_Get(0);
  uVar4 = Garage_HasAnyCar(uVar8);
  MenuWnd_DrawRivalLabel(0x31,0x16,5,0x3a,uVar4);
  uVar8 = Profile_Get(0);
  uVar4 = Garage_GetSelectedSlot(uVar8);
  MenuWnd_DrawRivalLabel(0x31,0x19,5,0x3a,uVar4);
  UiLayout_UpdateAnimById((UiLayout *)0x31,2);
  iVar5 = UiMgr_FindLayout(0x31);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x30);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  UiLayout_UpdateAnimById((UiLayout *)0x13,0);
  iVar5 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00267860  size 0x12c
/* state of maybe_PageMoney; on-screen text/callee hint "DoYouWant" (was ScrDoYouWant_Exit67860) */

void maybe_PageMoney_State2_DoYouWant(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x3c9,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  UiLayout_UpdateAnimById((UiLayout *)0x13,0);
  iVar1 = UiMgr_FindLayout(0x30);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00267990  size 0x12c
/* state of maybe_PageMoney; on-screen text/callee hint "DoYouWant" (was ScrDoYouWant_Update67990)
    */

void maybe_PageMoney_State1_DoYouWant(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x3ce,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  UiLayout_UpdateAnimById((UiLayout *)0x13,0);
  iVar1 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x30);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00267ac0  size 0x43c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_DoYouWant_7ac0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  iVar5 = param_1[6];
  param_1[6] = 0;
  if (iVar5 != 0) {
    uVar6 = UiRes_GetLayoutData(0x1dc);
    iVar5 = UiMgr_FindLayout(0x30);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar5].layout.unk_310 = 0xffffffff;
    pUVar1[iVar5].layout.unk_31c = 0;
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    pUVar1[iVar5].layout.unk_31c = uVar6;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x1dd);
    iVar5 = UiMgr_FindLayout(0x30);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar7;
    pUVar1[iVar5].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x1de);
    iVar5 = UiMgr_FindLayout(0x30);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x30,0);
  if (!bVar2) {
    param_1[5] = 0;
  }
  if ((param_1[7] != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x30,1), !bVar2)) {
    param_1[7] = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x30,*(undefined4 *)(*param_1 * 4 + 0x36ed08),1,0);
  }
  MenuWnd_DrawTextId(0x30,0x22,4,0x3cb);
  MenuWnd_DrawTextId(0x30,0x27,4,0x3cc);
  uVar8 = Profile_Get(0);
  uVar8 = Garage_CanBuy(uVar8);
  MenuWnd_DrawNumber(0x30,0x23,uVar8);
  MenuWnd_DrawText(0x30,0x25,0x3ca);
  uVar8 = Profile_Get(0);
  uVar3 = Garage_HasAnyCar(uVar8);
  MenuWnd_DrawLabel(0x30,0x29,0x3a,uVar3);
  uVar8 = Profile_Get(0);
  uVar3 = Garage_GetSelectedSlot(uVar8);
  MenuWnd_DrawLabel(0x30,0x2a,0x3a,uVar3);
  uVar8 = Profile_Get(0);
  lVar9 = Garage_CanBuy(uVar8);
  if (lVar9 == 0) {
    MenuWnd_DrawTextId(0x30,0x28,5,0x59);
    MenuWnd_DrawTextId(0x30,0x2b,5,0x59);
  }
  else {
    uVar8 = Profile_Get(0);
    cVar4 = Garage_HasAnyCar(uVar8);
    MenuWnd_DrawRivalLabel(0x30,0x28,5,0x3a,cVar4 + 1);
    uVar8 = Profile_Get(0);
    uVar3 = Garage_CountCars(uVar8);
    MenuWnd_DrawRivalLabel(0x30,0x2b,5,0x3a,uVar3);
  }
  MenuWnd_DrawText(0x30,0x24,1);
  MenuWnd_DrawText(0x30,0x26,2);
  UiLayout_UpdateAnimById((UiLayout *)0x30,2);
  iVar5 = UiMgr_FindLayout(0x30);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  UiLayout_UpdateAnimById((UiLayout *)0x13,0);
  iVar5 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00267f00  size 0x14
/* menu page 34 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageMoney_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00267f20  size 0xe0
/* menu page 34 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageMoney_Update(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_ScrGarage_Draw_DoYouWant_7ac0_0032d740)[*(int *)((int)param_1 + 8)])(param_1);
  uVar1 = Profile_Get(0);
  uVar1 = Profile_GetMoney(uVar1);
  MenuWnd_DrawNumber(0x12,0x36,uVar1);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = Menu_IsInputIdle((int)param_1 + 4), lVar2 == 1)) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

