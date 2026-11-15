// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00264000 - 0x00268000
#include "ghidra_types.h"

// 0x002644c0  size 0x418
void MenuScr_Draw_NormalCar_44c0(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  
  bVar2 = true;
  iVar3 = (int)param_1;
  if ((*(int *)(iVar3 + 0x898) == 0) && (*(int *)(iVar3 + 0x890) == 0)) {
    bVar2 = false;
  }
  iVar5 = *(int *)(iVar3 + 0x894);
  *(undefined4 *)(iVar3 + 0x894) = 0;
  if (iVar5 != 0) {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    uVar4 = UiRes_GetLayoutData(0x368);
    iVar5 = UiMgr_FindLayout(0x108);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar4;
    pUVar1[iVar5].layout.unk_318 = 1;
    if (*(int *)(iVar3 + 0x880) == -1) {
      maybe_GhostData_AnimateLayout(param_1);
      iVar5 = *(int *)(iVar3 + 0x890);
      goto LAB_0026451c;
    }
  }
  iVar5 = *(int *)(iVar3 + 0x890);
LAB_0026451c:
  if ((iVar5 != 0) && (lVar7 = UiLayout_UpdateAnimById(0x108,0), lVar7 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar3 + 0x890) = 0;
    bVar2 = false;
  }
  if (*(int *)(iVar3 + 0x898) != 0) {
    iVar5 = *(int *)(iVar3 + 0x89c);
    *(undefined4 *)(iVar3 + 0x89c) = 0;
    if (iVar5 != 0) {
      uVar4 = UiRes_GetLayoutData(0x369);
      iVar5 = UiMgr_FindLayout(0x108);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar4;
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    lVar7 = UiLayout_UpdateAnimById(0x108,0);
    if (lVar7 == 0) {
      *(undefined4 *)(iVar3 + 0x898) = 0;
      bVar2 = true;
    }
  }
  if (!bVar2) {
    MenuWnd_SetItemState(0x108,*(undefined4 *)(&DAT_0036ecc0 + *(int *)(iVar3 + 0x24) * 4),1,0);
  }
  uVar6 = MsgId_ForSlot(*(undefined4 *)(iVar3 + 0x10),1);
  MenuWnd_DrawText(0x103,(&DAT_0032d3b0)[*(int *)(iVar3 + 0x758)],uVar6);
  uVar6 = 0x66;
  if (*(int *)(iVar3 + 8) != 0) {
    uVar6 = 0x65;
  }
  MenuWnd_DrawText(0x103,0x42,uVar6);
  if (*(uint *)(iVar3 + 0x78) == 0 || (*(uint *)(iVar3 + 0x78) & 1) != 0) {
    MenuWnd_DrawText(0x108,0xf,0x418);
    uVar8 = *(uint *)(iVar3 + 0x78);
  }
  else {
    MenuWnd_DrawTextId(0x108,0xf,3,0x418);
    uVar8 = *(uint *)(iVar3 + 0x78);
  }
  if (uVar8 == 0 || (uVar8 & 2) != 0) {
    MenuWnd_DrawText(0x108,0x10,0x419);
    iVar3 = *(int *)(iVar3 + 0x24);
  }
  else {
    MenuWnd_DrawTextId(0x108,0x10,3,0x419);
    iVar3 = *(int *)(iVar3 + 0x24);
  }
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_0036ecc8 + iVar3 * 4));
  iVar3 = UiMgr_FindLayout(0x108);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x103);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x002648e0  size 0x478
void MenuScr_Draw_LoadGhostData(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  
  bVar2 = true;
  iVar3 = (int)param_1;
  if ((*(int *)(iVar3 + 0x898) == 0) && (*(int *)(iVar3 + 0x890) == 0)) {
    bVar2 = false;
  }
  iVar5 = *(int *)(iVar3 + 0x894);
  *(undefined4 *)(iVar3 + 0x894) = 0;
  if (iVar5 != 0) {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    uVar4 = UiRes_GetLayoutData(0x377);
    iVar5 = UiMgr_FindLayout(0x10a);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar4;
    pUVar1[iVar5].layout.unk_318 = 1;
    if (*(int *)(iVar3 + 0x880) == -1) {
      maybe_GhostData_AnimateLayout(param_1);
      iVar5 = *(int *)(iVar3 + 0x890);
      goto LAB_0026493c;
    }
  }
  iVar5 = *(int *)(iVar3 + 0x890);
LAB_0026493c:
  if ((iVar5 != 0) && (lVar7 = UiLayout_UpdateAnimById(0x10a,0), lVar7 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar3 + 0x890) = 0;
    bVar2 = false;
  }
  if (*(int *)(iVar3 + 0x898) != 0) {
    iVar5 = *(int *)(iVar3 + 0x89c);
    *(undefined4 *)(iVar3 + 0x89c) = 0;
    if (iVar5 != 0) {
      uVar4 = UiRes_GetLayoutData(0x378);
      iVar5 = UiMgr_FindLayout(0x10a);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar4;
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    lVar7 = UiLayout_UpdateAnimById(0x10a,0);
    if (lVar7 == 0) {
      *(undefined4 *)(iVar3 + 0x898) = 0;
      bVar2 = true;
    }
  }
  if (!bVar2) {
    MenuWnd_SetItemState(0x10a,*(undefined4 *)(&DAT_0032d600 + *(int *)(iVar3 + 0x28) * 4),1,0);
  }
  uVar6 = MsgId_ForSlot(*(undefined4 *)(iVar3 + 0x10),1);
  MenuWnd_DrawText(0x103,(&DAT_0032d3b0)[*(int *)(iVar3 + 0x758)],uVar6);
  uVar6 = 0x66;
  if (*(int *)(iVar3 + 8) != 0) {
    uVar6 = 0x65;
  }
  MenuWnd_DrawText(0x103,0x42,uVar6);
  Subtitle_Draw();
  if (*(uint *)(iVar3 + 0x70) == 0 || (*(uint *)(iVar3 + 0x70) & 1) != 0) {
    MenuWnd_DrawText(0x10a,0x16,0x1f38);
    uVar8 = *(uint *)(iVar3 + 0x70);
  }
  else {
    MenuWnd_DrawTextId(0x10a,0x16,3,0x1f38);
    uVar8 = *(uint *)(iVar3 + 0x70);
  }
  if (uVar8 == 0 || (uVar8 & 2) != 0) {
    MenuWnd_DrawText(0x10a,0x17,0x1f39);
    uVar8 = *(uint *)(iVar3 + 0x70);
  }
  else {
    MenuWnd_DrawTextId(0x10a,0x17,3,0x1f39);
    uVar8 = *(uint *)(iVar3 + 0x70);
  }
  if (uVar8 == 0 || (uVar8 & 4) != 0) {
    MenuWnd_DrawText(0x10a,0x18,0x1f3a);
    iVar3 = *(int *)(iVar3 + 0x28);
  }
  else {
    MenuWnd_DrawTextId(0x10a,0x18,3,0x1f3a);
    iVar3 = *(int *)(iVar3 + 0x28);
  }
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_0032d610 + iVar3 * 4));
  iVar3 = UiMgr_FindLayout(0x10a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x103);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
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
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  UiLayout *pUVar10;
  undefined *puVar11;
  uint uVar12;
  
  bVar4 = true;
  if ((*(int *)(param_1 + 0x898) == 0) && (*(int *)(param_1 + 0x890) == 0)) {
    bVar4 = false;
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = uVar7;
    uVar12 = 0;
    pUVar1[iVar6].layout.unk_318 = 1;
    puVar11 = &DAT_0032d5a0;
    iVar6 = param_1;
    do {
      maybe_MenuOpt_InitB(iVar6 + 0x76c,0x109,puVar11);
      uVar12 = uVar12 + 1;
      puVar11 = puVar11 + 8;
      iVar6 = iVar6 + 0x10;
    } while (uVar12 < 8);
    iVar6 = UiMgr_FindLayout(0x103);
    pUVar10 = &g_UiMgr->slots[iVar6].layout;
    UiElem_SetPropFloat(0,pUVar10,0x52,8);
    UiElem_SetPropFloat(0,pUVar10,0x53,8);
    iVar6 = *(int *)(param_1 + 0x18);
  }
  bVar2 = *(int *)(param_1 + 0x14) == 0;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x76c,iVar6 == 0,iVar6 == 0 && bVar2);
  bVar3 = *(int *)(param_1 + 0x18) == 1;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x77c,bVar3,bVar3 && bVar2);
  bVar2 = *(int *)(param_1 + 0x1c) == 0;
  bVar3 = *(int *)(param_1 + 0x14) == 1;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x78c,bVar2,bVar2 && bVar3);
  bVar2 = *(int *)(param_1 + 0x1c) == 1;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x79c,bVar2,bVar2 && bVar3);
  bVar2 = *(int *)(param_1 + 0x1c) == 2;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x7ac,bVar2,bVar2 && bVar3);
  bVar2 = *(int *)(param_1 + 0x1c) == 3;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x7bc,bVar2,bVar2 && bVar3);
  bVar2 = *(int *)(param_1 + 0x20) == 0;
  bVar3 = *(int *)(param_1 + 0x14) == 2;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x7cc,bVar2,bVar2 && bVar3);
  bVar2 = *(int *)(param_1 + 0x20) == 1;
  maybe_MenuOpt_SetSelectedB(param_1 + 0x7dc,bVar2,bVar2 && bVar3);
  if ((*(int *)(param_1 + 0x890) != 0) && (lVar9 = UiLayout_UpdateAnimById(0x109,0), lVar9 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x890) = 0;
    bVar4 = false;
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar6 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar6 != 0) {
      uVar7 = UiRes_GetLayoutData(0x36e);
      iVar6 = UiMgr_FindLayout(0x109);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
        pUVar1[iVar6].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar6].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
        pUVar1[iVar6].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar6].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = uVar7;
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    lVar9 = UiLayout_UpdateAnimById(0x109,0);
    if (lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
      bVar4 = true;
    }
  }
  if (bVar4) {
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
  cVar5 = maybe_CourseSel_IsUnlocked(param_1);
  if ((cVar5 == '\x04') || (cVar5 = maybe_CourseSel_IsUnlocked(param_1), cVar5 == '\a')) {
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x103);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002654b0  size 0x6ac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SelectCourseTo(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iStack_4;
  
  iVar4 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x890);
  }
  else {
    iVar4 = UiMgr_FindLayout(0x103);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x35,0x16,
                      *(undefined4 *)(*(int *)(param_1 + 8) * 4 + 0x36eca0));
    uVar3 = UiRes_GetLayoutData(0x370);
    iVar4 = UiMgr_FindLayout(0x103);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar3;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0x36f);
    iVar4 = UiMgr_FindLayout(0x103);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    uVar3 = UiRes_GetLayoutData(0x376);
    iVar4 = UiMgr_FindLayout(0x103);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a8 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x103,0x36ecb8,2,0);
    iVar4 = *(int *)(param_1 + 0x890);
  }
  if ((iVar4 != 0) && (lVar6 = UiLayout_UpdateAnimById(0x103,0), lVar6 == 0)) {
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  if (*(int *)(param_1 + 0x898) == 0) {
    MenuWnd_DrawCursor(3 < *(int *)(param_1 + 0x754));
  }
  else {
    iVar4 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x888) == 2) {
        uVar3 = UiRes_GetLayoutData(0x371);
        iVar4 = UiMgr_FindLayout(0x103);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x310 = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = 0;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
          pUVar1[iVar4].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar4].layout.unk_318 = 1;
        }
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
          pUVar1[iVar4].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar4].layout.unk_318 = 1;
        }
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar3;
        pUVar1[iVar4].layout.unk_318 = 1;
      }
      else {
        uVar3 = UiRes_GetLayoutData(*(undefined4 *)(*(int *)(param_1 + 0x758) * 4 + 0x32d390));
        iVar4 = UiMgr_FindLayout(0x103);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x310 = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = 0;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
          pUVar1[iVar4].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar4].layout.unk_318 = 1;
        }
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
          pUVar1[iVar4].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar4].layout.unk_318 = 1;
        }
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar3;
        pUVar1[iVar4].layout.unk_318 = 1;
      }
    }
    lVar6 = UiLayout_UpdateAnimById(0x103,0);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x103,*(undefined4 *)(&DAT_0032d410 + *(int *)(param_1 + 0x758) * 4),1,0);
  }
  MenuWnd_Update(param_1 + 0x764,0x103,6,7);
  iVar9 = *(int *)(param_1 + 0x754) + 1;
  MenuWnd_Clear(&iStack_4,*(undefined4 *)(param_1 + 0x764),*(undefined4 *)(param_1 + 0x758),
                *(undefined4 *)(param_1 + 0x10),iVar9,4);
  iVar4 = (*(int *)(param_1 + 0x10) + iVar9) - *(int *)(param_1 + 0x758);
  iVar8 = 0;
  puVar7 = &DAT_0032d3b0;
  puVar10 = &DAT_0032d3d0;
  while( true ) {
    iVar2 = iVar9;
    if (4 < iVar9) {
      iVar2 = 5;
    }
    if ((iVar2 <= iVar8) ||
       ((iVar4 = iVar4 % iVar9, iVar8 == 4 && (iVar4 = iStack_4, iStack_4 == -1)))) break;
    uVar5 = MsgId_ForSlot(iVar4,1);
    MenuWnd_DrawText(0x103,*puVar7,uVar5);
    iVar2 = UiMgr_FindLayout(0x103);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,*puVar10,0x16,
                      *(undefined4 *)(&DAT_0032d430 + iVar4 * 4));
    iVar4 = iVar4 + 1;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
    iVar8 = iVar8 + 1;
  }
  if ((iVar9 < 4) && (iVar9 < 4)) {
    puVar10 = (undefined4 *)(&DAT_0032d3f0 + iVar9 * 4);
    puVar7 = &DAT_0032d3d0 + iVar9;
    do {
      iVar4 = UiMgr_FindLayout(0x103);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,*puVar10,8);
      iVar4 = UiMgr_FindLayout(0x103);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,*puVar7,8);
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar9 < 4);
  }
  uVar5 = 0x66;
  if (*(int *)(param_1 + 8) != 0) {
    uVar5 = 0x65;
  }
  MenuWnd_DrawText(0x103,0x42,uVar5);
  MenuWnd_DrawText(0x102,0x1b,0x1f2a);
  iVar4 = UiMgr_FindLayout(0x103);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  Subtitle_Draw();
  return;
}

// 0x00265b60  size 0x3b8
void MenuScr_Draw_TimeAttack(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  bVar2 = true;
  if ((*(int *)(param_1 + 0x898) == 0) && (*(int *)(param_1 + 0x890) == 0)) {
    bVar2 = false;
  }
  iVar3 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar3 != 0) {
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    uVar4 = UiRes_GetLayoutData(0x379);
    iVar3 = UiMgr_FindLayout(0x104);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar4;
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  if ((*(int *)(param_1 + 0x890) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x104,0), lVar5 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x890) = 0;
    bVar2 = false;
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar3 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar3 != 0) {
      uVar4 = UiRes_GetLayoutData(0x37a);
      iVar3 = UiMgr_FindLayout(0x104);
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
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar4;
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    lVar5 = UiLayout_UpdateAnimById(0x104,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
      bVar2 = true;
    }
  }
  if (!bVar2) {
    MenuWnd_SetItemState(0x104,*(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + 0x36ecb0),1,0);
  }
  UiLayout_UpdateAnimById(0x10b,0);
  MenuWnd_DrawText(0x10d,0x25,0x66);
  MenuWnd_DrawText(0x10d,0x26,0x65);
  MenuWnd_DrawText(0x10d,0x27,0x107);
  MenuWnd_DrawText(0x104,0xd,0x1f36);
  if (*(uint *)(param_1 + 0x58) == 0 || (*(uint *)(param_1 + 0x58) & 2) != 0) {
    MenuWnd_DrawText(0x104,0xe,0x1f37);
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawTextId(0x104,0xe,3,0x1f37);
    iVar3 = *(int *)(param_1 + 8);
  }
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + iVar3 * 8 + 0x32d590));
  iVar3 = UiMgr_FindLayout(0x104);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x10d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x10b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x10b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00266030  size 0x5c8
void MenuScr_Select_TimeAttack(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
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
    if (*(int *)(param_1 + 0x880) != 2) {
      uVar3 = UiRes_GetLayoutData(899);
      iVar4 = UiMgr_FindLayout(0x10d);
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
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar3;
      pUVar1[iVar4].layout.animState = 1;
    }
    uVar3 = UiRes_GetLayoutData(0x382);
    iVar4 = UiMgr_FindLayout(0x10d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar3;
    pUVar1[iVar4].layout.unk_318 = 1;
  }
  if (*(int *)(param_1 + 0x890) != 0) {
    lVar6 = UiLayout_UpdateAnimById(0x10d,0);
    lVar7 = UiLayout_UpdateAnimById(0x10d,1);
    if (lVar6 == 0 && lVar7 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x890) = 0;
      bVar2 = false;
    }
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar4 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar4 != 0) {
      lVar6 = MenuMgr_Goto();
      if ((lVar6 == 0) && (iVar4 = *(int *)(param_1 + 8), iVar4 != 2)) {
        if (iVar4 == 0) {
          uVar3 = UiRes_GetLayoutData(DAT_0032d3a8);
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
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar3;
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
        }
        else if (iVar4 == 1) {
          uVar3 = UiRes_GetLayoutData(DAT_0032d3ac);
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
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar3;
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
        }
      }
      else {
        uVar3 = UiRes_GetLayoutData(DAT_0032d3a0);
        iVar4 = UiMgr_FindLayout(0x10d);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x338 = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = 0;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
        }
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
        }
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x33c = 0;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar3;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
        uVar3 = UiRes_GetLayoutData(DAT_0032d3a4);
        iVar4 = UiMgr_FindLayout(0x10d);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x34c = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = 0;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
        }
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
        }
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x350 = 0;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar3;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
      }
    }
    lVar6 = UiLayout_UpdateAnimById(0x10d,2);
    lVar7 = UiLayout_UpdateAnimById(0x10d,3);
    lVar5 = UiLayout_UpdateAnimById(0x10d,4);
    if (lVar5 == 0 && (lVar6 == 0 && lVar7 == 0)) {
      *(undefined4 *)(param_1 + 0x898) = 0;
      bVar2 = true;
    }
  }
  if (!bVar2) {
    MenuWnd_SetItemState(0x10d,*(undefined4 *)(&DAT_0032d568 + *(int *)(param_1 + 8) * 4),1,0);
  }
  UiLayout_UpdateAnimById(0x10b,0);
  MenuWnd_DrawText(0x10d,0x25,0x66);
  MenuWnd_DrawText(0x10d,0x26,0x65);
  MenuWnd_DrawText(0x10d,0x27,0x107);
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_0032d578 + *(int *)(param_1 + 8) * 4));
  iVar4 = UiMgr_FindLayout(0x10d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x10b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
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
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  uVar2 = UiRes_GetLayoutData(0x381);
  iVar3 = UiMgr_FindLayout(0x10b);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
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
  }
  if (*(int *)(param_1 + 0x884) == 2) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar2 = UiRes_GetLayoutData(DAT_0032d3a8);
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
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    }
    else if (*(int *)(param_1 + 8) == 1) {
      uVar2 = UiRes_GetLayoutData(DAT_0032d3ac);
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
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    }
    do {
      lVar4 = UiLayout_UpdateAnimById(0x10d,4);
    } while (lVar4 != 0);
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
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  UiLayout *pUVar5;
  
  iVar2 = UiMgr_FindLayout(0x103);
  pUVar5 = &g_UiMgr->slots[iVar2].layout;
  UiElem_SetPropInt(pUVar5,0x35,0x16,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + 0x36eca0));
  UiElem_SetPropFloat(0,pUVar5,0x52,8);
  UiElem_SetPropFloat(0,pUVar5,0x53,8);
  iVar2 = *(int *)(param_1 + 0x758);
  UiElem_SetPropInt(pUVar5,0x48,0x16,*(undefined4 *)(&DAT_0032d430 + *(int *)(param_1 + 0x10) * 4));
  uVar3 = UiRes_GetLayoutData(*(undefined4 *)(iVar2 * 4 + 0x32d390));
  iVar2 = UiMgr_FindLayout(0x103);
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
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = UiRes_GetLayoutData(DAT_0032d3a8);
    iVar2 = UiMgr_FindLayout(0x10d);
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
  }
  else if (*(int *)(param_1 + 8) == 1) {
    uVar3 = UiRes_GetLayoutData(DAT_0032d3ac);
    iVar2 = UiMgr_FindLayout(0x10d);
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
  }
  do {
    lVar4 = UiLayout_UpdateAnimById(0x103,0);
  } while (lVar4 != 0);
  do {
    lVar4 = UiLayout_UpdateAnimById(0x10d,4);
  } while (lVar4 != 0);
  return;
}

// 0x00266ce0  size 0x3e0
void ScrGarage_Draw_NoData(int param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar10 = 0;
  puVar9 = &DAT_0032d4b0;
  do {
    iVar7 = (*(int *)(param_1 + 0x4c) + iVar10) * 4;
    piVar8 = (int *)(param_2 + iVar7);
    piVar2 = (int *)*piVar8;
    uVar1 = *(undefined1 *)((int)piVar2 + 5);
    iVar3 = piVar2[1];
    iVar6 = *piVar2;
    iVar4 = UiMgr_FindLayout(0x10e);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,*puVar9,0x16,
                      *(undefined4 *)(&DAT_0032d540 + iVar7));
    if (iVar6 < 0) {
      MenuWnd_DrawText(0x10e,puVar9[6],0x5b);
      MenuWnd_DrawText(0x10e,puVar9[5],0x5b);
      MenuWnd_DrawText(0x10e,puVar9[2],0x5b);
      MenuWnd_DrawText(0x10e,puVar9[1],0x5b);
    }
    else {
      uVar5 = MsgId_ForResult((char)iVar3);
      MenuWnd_DrawText(0x10e,puVar9[6],uVar5);
      uVar5 = MsgId_YesNo(uVar1);
      MenuWnd_DrawText(0x10e,puVar9[5],uVar5);
      uVar5 = MenuText_CarNameOrMaker(iVar6,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,puVar9[2],uVar5);
      uVar5 = MenuText_CarGrade(iVar6,0xffffffffffffffff);
      MenuWnd_DrawRivalLabel(0x10e,puVar9[3],4,uVar5);
      uVar5 = MenuText_CarShortName(iVar6,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,puVar9[1],uVar5);
    }
    MenuWnd_DrawLabel(0x10e,puVar9[4],0x3a,*(undefined4 *)(*piVar8 + 0x10));
    iVar10 = iVar10 + 1;
    puVar9 = puVar9 + 7;
  } while (iVar10 < 4);
  if (*(int *)(param_1 + 0x54) - 1U < 2) {
    if (*(int *)(param_1 + 0x54) == 1) {
      iVar6 = -1;
    }
    else {
      iVar6 = 4;
    }
    iVar7 = (*(int *)(param_1 + 0x4c) + iVar6) * 4;
    piVar8 = (int *)(param_2 + iVar7);
    piVar2 = (int *)*piVar8;
    uVar1 = *(undefined1 *)((int)piVar2 + 5);
    iVar3 = piVar2[1];
    iVar6 = *piVar2;
    iVar4 = UiMgr_FindLayout(0x10e);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,(&DAT_0032d4b0)[iVar10 * 7],0x16,
                      *(undefined4 *)(&DAT_0032d540 + iVar7));
    if (iVar6 < 0) {
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c8)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c4)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b8)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b4)[iVar10 * 7],0x5b);
      iVar6 = *piVar8;
    }
    else {
      uVar5 = MsgId_ForResult((char)iVar3);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c8)[iVar10 * 7],uVar5);
      uVar5 = MsgId_YesNo(uVar1);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c4)[iVar10 * 7],uVar5);
      uVar5 = MenuText_CarNameOrMaker(iVar6,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b8)[iVar10 * 7],uVar5);
      uVar5 = MenuText_CarGrade(iVar6,0xffffffffffffffff);
      MenuWnd_DrawRivalLabel(0x10e,(&DAT_0032d4bc)[iVar10 * 7],4,uVar5);
      uVar5 = MenuText_CarShortName(iVar6,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b4)[iVar10 * 7],uVar5);
      iVar6 = *piVar8;
    }
    MenuWnd_DrawLabel(0x10e,(&DAT_0032d4c0)[iVar10 * 7],0x3a,*(undefined4 *)(iVar6 + 0x10));
  }
  return;
}

// 0x002670c0  size 0x420
void ScrRecord_Draw_NoData(int param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar10 = 0;
  puVar9 = &DAT_0032d4b0;
  do {
    iVar7 = (*(int *)(param_1 + 0x4c) + iVar10) * 4;
    piVar8 = (int *)(param_2 + iVar7);
    piVar2 = (int *)*piVar8;
    uVar1 = *(undefined1 *)((int)piVar2 + 5);
    iVar3 = piVar2[1];
    iVar6 = *piVar2;
    iVar4 = UiMgr_FindLayout(0x10e);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,*puVar9,0x16,
                      *(undefined4 *)(&DAT_0032d540 + iVar7));
    if (iVar6 < 0) {
      MenuWnd_DrawText(0x10e,puVar9[6],0x5b);
      MenuWnd_DrawText(0x10e,puVar9[5],0x5b);
      MenuWnd_DrawText(0x10e,puVar9[2],0x5b);
      MenuWnd_DrawText(0x10e,puVar9[1],0x5b);
    }
    else {
      uVar5 = MsgId_ForResult((char)iVar3);
      MenuWnd_DrawText(0x10e,puVar9[6],uVar5);
      uVar5 = MsgId_YesNo(uVar1);
      MenuWnd_DrawText(0x10e,puVar9[5],uVar5);
      uVar5 = MenuText_CarNameOrMaker(iVar6,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,puVar9[2],uVar5);
      uVar5 = MenuText_CarGrade(iVar6,0xffffffffffffffff);
      MenuWnd_DrawRivalLabel(0x10e,puVar9[3],4,uVar5);
      uVar5 = MenuText_CarShortName(iVar6,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,puVar9[1],uVar5);
    }
    Time_SplitHms(1,*(undefined4 *)(*piVar8 + 0xc),&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawLabel(0x10e,puVar9[4],0x331,uStack_4,uStack_8,uStack_c);
    iVar10 = iVar10 + 1;
    puVar9 = puVar9 + 7;
  } while (iVar10 < 4);
  if (*(int *)(param_1 + 0x54) - 1U < 2) {
    if (*(int *)(param_1 + 0x54) == 1) {
      iVar6 = -1;
    }
    else {
      iVar6 = 4;
    }
    iVar7 = (*(int *)(param_1 + 0x4c) + iVar6) * 4;
    piVar8 = (int *)(param_2 + iVar7);
    piVar2 = (int *)*piVar8;
    uVar1 = *(undefined1 *)((int)piVar2 + 5);
    iVar3 = piVar2[1];
    iVar6 = *piVar2;
    iVar4 = UiMgr_FindLayout(0x10e);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,(&DAT_0032d4b0)[iVar10 * 7],0x16,
                      *(undefined4 *)(&DAT_0032d540 + iVar7));
    if (iVar6 < 0) {
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c8)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c4)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b8)[iVar10 * 7],0x5b);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b4)[iVar10 * 7],0x5b);
      iVar6 = *piVar8;
    }
    else {
      uVar5 = MsgId_ForResult((char)iVar3);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c8)[iVar10 * 7],uVar5);
      uVar5 = MsgId_YesNo(uVar1);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4c4)[iVar10 * 7],uVar5);
      uVar5 = MenuText_CarNameOrMaker(iVar6,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b8)[iVar10 * 7],uVar5);
      uVar5 = MenuText_CarGrade(iVar6,0xffffffffffffffff);
      MenuWnd_DrawRivalLabel(0x10e,(&DAT_0032d4bc)[iVar10 * 7],4,uVar5);
      uVar5 = MenuText_CarShortName(iVar6,0xffffffffffffffff);
      MenuWnd_DrawText(0x10e,(&DAT_0032d4b4)[iVar10 * 7],uVar5);
      iVar6 = *piVar8;
    }
    Time_SplitHms(1,*(undefined4 *)(iVar6 + 0xc),&uStack_10,&uStack_14,&uStack_18);
    MenuWnd_DrawLabel(0x10e,(&DAT_0032d4c0)[iVar10 * 7],0x331,uStack_10,uStack_14,uStack_18);
  }
  return;
}

// 0x002674e0  size 0x380
void ScrCareer_Draw_YourGarageHas(int param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar4 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x1df);
    iVar4 = UiMgr_FindLayout(0x31);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar5;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x1e0);
    iVar4 = UiMgr_FindLayout(0x31);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar5;
    pUVar1[iVar4].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x1e1);
    iVar4 = UiMgr_FindLayout(0x31);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
  }
  lVar6 = UiLayout_UpdateAnimById(0x31,0);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (lVar6 = UiLayout_UpdateAnimById(0x31), lVar6 == 0)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  MenuWnd_DrawTextId(0x31,0x13,4,0x3cb);
  MenuWnd_DrawTextId(0x31,0x15,4,0x3cc);
  MenuWnd_DrawText(0x31,0x14,0x3cd);
  uVar7 = Profile_Get(0);
  cVar2 = Garage_HasAnyCar(uVar7);
  MenuWnd_DrawLabel(0x31,0x17,0x3a,cVar2 + -1);
  MenuWnd_DrawLabel(0x31,0x18,0x3a,*(undefined4 *)(param_1 + 0x2c));
  uVar7 = Profile_Get(0);
  uVar3 = Garage_HasAnyCar(uVar7);
  MenuWnd_DrawRivalLabel(0x31,0x16,5,0x3a,uVar3);
  uVar7 = Profile_Get(0);
  uVar3 = Garage_GetSelectedSlot(uVar7);
  MenuWnd_DrawRivalLabel(0x31,0x19,5,0x3a,uVar3);
  UiLayout_UpdateAnimById(0x31,2);
  iVar4 = UiMgr_FindLayout(0x31);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x30);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  UiLayout_UpdateAnimById(0x13,0);
  iVar4 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
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
  UiLayout_UpdateAnimById(0x13,0);
  iVar1 = UiMgr_FindLayout(0x30);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
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
  UiLayout_UpdateAnimById(0x13,0);
  iVar1 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x30);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00267ac0  size 0x43c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_DoYouWant_7ac0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar4 = param_1[6];
  param_1[6] = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x1dc);
    iVar4 = UiMgr_FindLayout(0x30);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar5;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x1dd);
    iVar4 = UiMgr_FindLayout(0x30);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar5;
    pUVar1[iVar4].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x1de);
    iVar4 = UiMgr_FindLayout(0x30);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    Menu_ClearSlot(0);
  }
  lVar6 = UiLayout_UpdateAnimById(0x30,0);
  if (lVar6 == 0) {
    param_1[5] = 0;
  }
  if ((param_1[7] != 0) && (lVar6 = UiLayout_UpdateAnimById(0x30), lVar6 == 0)) {
    param_1[7] = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x30,*(undefined4 *)(*param_1 * 4 + 0x36ed08),1,0);
  }
  MenuWnd_DrawTextId(0x30,0x22,4,0x3cb);
  MenuWnd_DrawTextId(0x30,0x27,4,0x3cc);
  uVar7 = Profile_Get(0);
  uVar7 = Garage_CanBuy(uVar7);
  MenuWnd_DrawNumber(0x30,0x23,uVar7);
  MenuWnd_DrawText(0x30,0x25,0x3ca);
  uVar7 = Profile_Get(0);
  uVar2 = Garage_HasAnyCar(uVar7);
  MenuWnd_DrawLabel(0x30,0x29,0x3a,uVar2);
  uVar7 = Profile_Get(0);
  uVar2 = Garage_GetSelectedSlot(uVar7);
  MenuWnd_DrawLabel(0x30,0x2a,0x3a,uVar2);
  uVar7 = Profile_Get(0);
  lVar6 = Garage_CanBuy(uVar7);
  if (lVar6 == 0) {
    MenuWnd_DrawTextId(0x30,0x28,5,0x59);
    MenuWnd_DrawTextId(0x30,0x2b,5,0x59);
  }
  else {
    uVar7 = Profile_Get(0);
    cVar3 = Garage_HasAnyCar(uVar7);
    MenuWnd_DrawRivalLabel(0x30,0x28,5,0x3a,cVar3 + 1);
    uVar7 = Profile_Get(0);
    uVar2 = Garage_CountCars(uVar7);
    MenuWnd_DrawRivalLabel(0x30,0x2b,5,0x3a,uVar2);
  }
  MenuWnd_DrawText(0x30,0x24,1);
  MenuWnd_DrawText(0x30,0x26,2);
  UiLayout_UpdateAnimById(0x30,2);
  iVar4 = UiMgr_FindLayout(0x30);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  UiLayout_UpdateAnimById(0x13,0);
  iVar4 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
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

