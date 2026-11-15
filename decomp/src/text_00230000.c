// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00230000 - 0x00234000
#include "ghidra_types.h"

// 0x00230340  size 0x3a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_HillClimb(int param_1)

{
  int iVar1;
  int iVar2;
  UiLayoutSlot *pUVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  iVar5 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar5 != 0) {
    uVar6 = UiRes_GetLayoutData(0x398);
    iVar5 = UiMgr_FindLayout(0xf0);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar5].layout.unk_310 = 0xffffffff;
    pUVar3[iVar5].layout.unk_31c = 0;
    pUVar3[iVar5].layout.unk_30c = 0;
    if (pUVar3[iVar5].layout.unk_31c == 0) {
      pUVar3[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar5].layout.unk_318 = 1;
    }
    pUVar3[iVar5].layout.unk_30c = 0;
    if (pUVar3[iVar5].layout.unk_31c == 0) {
      pUVar3[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x314 = 0;
    pUVar3[iVar5].layout.unk_31c = uVar6;
    pUVar3[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x399);
    iVar5 = UiMgr_FindLayout(0xf0);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x330 == 0) {
      pUVar3[iVar5].layout.animState = 0;
    }
    else {
      pUVar3[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x330 == 0) {
      pUVar3[iVar5].layout.animState = 0;
    }
    else {
      pUVar3[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = uVar7;
    pUVar3[iVar5].layout.animState = 1;
    Menu_ClearSlot(0);
    iVar5 = UiMgr_FindLayout(0xef);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x43,8,extraout_a3_lo);
    iVar5 = UiMgr_FindLayout(0xef);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x44,8,extraout_a3_lo_00);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = 9;
        break;
      case 2:
        g_MenuMgr->unk_05dc = 9;
        break;
      case 3:
        g_MenuMgr->unk_05fc = 9;
        break;
      case 4:
        g_MenuMgr->unk_0618 = 9;
      }
    }
  }
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xf0,0);
  if (!bVar4) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xf0,1), !bVar4)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0xf0,*(undefined4 *)(&DAT_0036ea00 + *(int *)(param_1 + 0x30) * 4),1,0);
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar8 = MsgId_ForSlot(iVar5,1);
  MenuWnd_DrawText(0xef,(&DAT_0032b150)[(iVar2 + (iVar5 - iVar1)) % iVar2],uVar8);
  MenuWnd_DrawText(0xf0,0xc,0x4a);
  MenuWnd_DrawText(0xf0,0xd,0x49);
  iVar5 = UiMgr_FindLayout(0xee);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0xef);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0xf0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  MenuWnd_SetTitle(3,0x291);
  Subtitle_Draw();
  return;
}

// 0x002306e0  size 0xaa4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage15; on-screen text/callee hint "HillClimb" (was ScrHillClimb_Enter) */

void maybe_PageHillClimb_State0_HillClimb(int *param_1)

{
  char cVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  
  iVar7 = param_1[5];
  param_1[5] = 0;
  if (iVar7 == 0) {
    iVar7 = *param_1;
  }
  else {
    uVar5 = UiRes_GetLayoutData(0x38e);
    iVar7 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
    pUVar2[iVar7].layout.unk_31c = uVar5;
    pUVar2[iVar7].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x38f);
    iVar7 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar6;
    pUVar2[iVar7].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x390);
    iVar7 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x391);
    iVar7 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x392);
    iVar7 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x393);
    iVar7 = UiMgr_FindLayout(0xef);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x37c = 1;
    uVar6 = UiRes_GetLayoutData(0x394);
    iVar7 = UiMgr_FindLayout(0xef);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x394 = uVar6;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x390 = 1;
    uVar6 = UiRes_GetLayoutData(0x395);
    iVar7 = UiMgr_FindLayout(0xef);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3a8 = uVar6;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3a4 = 1;
    uVar6 = UiRes_GetLayoutData(0x396);
    iVar7 = UiMgr_FindLayout(0xef);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3ac = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3ac = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3bc = uVar6;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3b8 = 1;
    uVar6 = UiRes_GetLayoutData(0x397);
    iVar7 = UiMgr_FindLayout(0xef);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3c8 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3d0 = uVar6;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x3cc = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xef,0x36e9f8,2,0);
    iVar7 = *param_1;
  }
  if (iVar7 == 1) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xef,0);
    if (!bVar3) {
      param_1[4] = 0;
    }
  }
  else {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xef,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xef,1);
    if (!bVar3 && !bVar4) {
      param_1[4] = 0;
    }
  }
  if (param_1[6] != 0) {
    if (param_1[2] == 1) {
      bVar3 = UiLayout_UpdateAnimById
                        ((UiLayout *)0xef,
                         (long)((param_1[9] + (param_1[0xb] - param_1[10])) % param_1[9] + 2));
      if (!bVar3) {
        param_1[6] = 0;
      }
    }
    else {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xef,6);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xef,7);
      if (!bVar3 && !bVar4) {
        param_1[6] = 0;
      }
    }
  }
  if (((param_1[4] == 0) && (param_1[6] == 0)) && (lVar10 = MenuMgr_Goto(), lVar10 == 0)) {
    MenuWnd_DrawCursor(1);
    if (param_1[9] < 5) {
      iVar7 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x43,8,extraout_a3_lo);
      iVar7 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x44,8,extraout_a3_lo_00);
      cVar1 = (char)param_1[8];
      goto LAB_00230db8;
    }
  }
  else {
    MenuWnd_DrawCursor(0);
  }
  cVar1 = (char)param_1[8];
LAB_00230db8:
  if (cVar1 == '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState
                (0xef,*(undefined4 *)
                       (&DAT_0032b170 +
                       ((param_1[9] + (param_1[0xb] - param_1[10])) % param_1[9]) * 4),1,0);
    }
  }
  else {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    if ((char)param_1[8] == '\x01') {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xef,9);
      if (!bVar3) {
        *(undefined1 *)(param_1 + 8) = 0;
        iVar7 = UiMgr_FindLayout(0xef);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x3c0 = 0;
        if (*(int *)&pUVar2[iVar7].layout.field_0x3d0 == 0) {
          *(undefined4 *)&pUVar2[iVar7].layout.field_0x3cc = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar7].layout.field_0x3cc = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xef,8);
      if (!bVar3) {
        *(undefined1 *)(param_1 + 8) = 0;
        iVar7 = UiMgr_FindLayout(0xef);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x3ac = 0;
        if (*(int *)&pUVar2[iVar7].layout.field_0x3bc == 0) {
          *(undefined4 *)&pUVar2[iVar7].layout.field_0x3b8 = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar7].layout.field_0x3b8 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  iVar7 = 0;
  puVar13 = &DAT_0032b150;
  piVar12 = &DAT_0032b190;
  while( true ) {
    iVar8 = param_1[9];
    if (iVar8 < 5) {
      iVar9 = iVar8;
    }
    else {
      iVar9 = 4;
    }
    if (iVar9 <= iVar7) break;
    iVar8 = (param_1[10] + iVar7) % iVar8;
    uVar11 = MsgId_ForSlot(iVar8,1);
    MenuWnd_DrawText(0xef,*puVar13,uVar11);
    iVar9 = UiMgr_FindLayout(0xef);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar9].layout,(long)*piVar12,0x16,
                      *(int *)(&DAT_0032b1d0 + iVar8 * 4));
    puVar13 = puVar13 + 1;
    piVar12 = piVar12 + 1;
    iVar7 = iVar7 + 1;
  }
  if ((char)param_1[8] == '\x01') {
    iVar7 = param_1[10] + -1 + iVar8;
  }
  else {
    iVar7 = param_1[10] + 4;
  }
  uVar11 = MsgId_ForSlot(iVar7 % iVar8,1);
  MenuWnd_DrawText(0xef,DAT_0032b160,uVar11);
  iVar9 = UiMgr_FindLayout(0xef);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar9].layout,(long)DAT_0032b1a0,0x16,
                    *(int *)(&DAT_0032b1d0 + (iVar7 % iVar8) * 4));
  iVar7 = 4;
  if (param_1[9] < 5) {
    piVar14 = &DAT_0032b1a0;
    piVar12 = &DAT_0032b1c0;
    do {
      iVar8 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar14,8,extraout_a3_lo_01);
      iVar8 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar12,8,extraout_a3_lo_02);
      iVar7 = iVar7 + -1;
      piVar14 = piVar14 + -1;
      piVar12 = piVar12 + -1;
    } while (param_1[9] <= iVar7);
  }
  iVar7 = UiMgr_FindLayout(0xee);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0xef);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  MenuWnd_SetTitle(3,0x290);
  Subtitle_Draw();
  return;
}

// 0x00231190  size 0x80
/* page identified from its states' on-screen text (N154) */

void maybe_PageHillClimb_Exit(void)

{
  int iVar1;
  byte extraout_a3_lo;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x25,8,extraout_a3_lo);
  g_MenuMgr->unk_05a0 = 0;
  g_MenuMgr->unk_05e8 = 0;
  g_MenuMgr->unk_060c = 0;
  g_MenuMgr->unk_0634 = 0;
  g_MenuMgr->unk_0644 = 0;
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00231210  size 0x98
/* page identified from its states' on-screen text (N154) */

void maybe_PageHillClimb_Update(int param_1)

{
  uint uVar1;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_maybe_PageHillClimb_State0_HillClimb_0032b140)[*(int *)(param_1 + 4)])();
  uVar1 = g_MenuMgr->flags;
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    g_MenuMgr->flags = uVar1 | 0x800;
  }
  return;
}

// 0x002312b0  size 0x8
/* page identified from its states' on-screen text (N154) */

void maybe_PageHillClimb_Enter(void)

{
  return;
}

// 0x002312c0  size 0x350
void MenuNum_CountUp_LoversInfo
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,ulong param_5,
               ulong param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  
  if (param_6 < param_5) {
    uVar1 = (int)(param_4 * (int)param_6) / (int)param_5;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    if ((float)(param_4 + 0x10) <
        (float)((int)(param_7 * param_4) / (int)param_5 + 0x10) + (float)uVar1) {
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo);
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetNumber(&g_UiMgr->slots[iVar2].layout,param_3,2,0x10);
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,6,0);
    }
    else {
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo_02);
    }
  }
  else {
    iVar2 = UiMgr_FindLayout(param_1);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo_01);
  }
  iVar2 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_2,2,extraout_a3_lo_00);
  iVar2 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_2,6,(byte)g_UiMgr);
  return;
}

// 0x00231610  size 0x1d0
void ScrCareer_Draw_NoData(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  
  MenuWnd_DrawLabel(0xea,0x18,0x3a,*(int *)(param_1 + 0x24) + 1);
  iVar3 = *(int *)(param_1 + 0x24) * 0xc + param_1;
  if (*(int *)(iVar3 + 0x44) == -1) {
    iVar3 = UiMgr_FindLayout(0xea);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,4,8,extraout_a3_lo_01);
    MenuWnd_DrawText(0xea,0x17,0x5c);
    MenuWnd_DrawText(0xea,0x19,0x5c);
    MenuWnd_DrawText(0xea,0x1a,0x5b);
  }
  else {
    if (*(int *)(iVar3 + 0x48) == 0) {
      iVar3 = UiMgr_FindLayout(0xea);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,4,8,extraout_a3_lo_00);
      iVar3 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xea);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,4,8,extraout_a3_lo);
      iVar3 = *(int *)(param_1 + 0x24);
    }
    uVar2 = MsgId_RivalNickname(*(undefined4 *)(iVar3 * 0xc + param_1 + 0x40));
    MenuWnd_DrawText(0xea,0x17,uVar2);
    uVar2 = MsgId_RivalName(*(undefined4 *)(*(int *)(param_1 + 0x24) * 0xc + param_1 + 0x40));
    MenuWnd_DrawText(0xea,0x19,uVar2);
    uVar2 = RivalDb_Get(*(undefined2 *)(*(int *)(param_1 + 0x24) * 0xc + param_1 + 0x40));
    uVar1 = RivalRec_GetType(uVar2);
    MenuWnd_DrawText(0xea,0x1a,(uVar1 & 0xff) + 0x67);
  }
  return;
}

// 0x002317e0  size 0x3b0
void ScrCareer_Draw_NoData_17e0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_0032b250;
  iVar3 = 0;
  do {
    iVar4 = (*(int *)(param_1 + 0x20) + iVar3) % 0x14;
    MenuWnd_DrawLabel(0xe9,*puVar5,0x3a,iVar4 + 1);
    iVar4 = param_1 + iVar4 * 0xc;
    if (*(int *)(iVar4 + 0x44) == -1) {
      iVar4 = UiMgr_FindLayout(0xe9);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)(int)puVar5[3],8,extraout_a3_lo_02);
      MenuWnd_DrawText(0xe9,puVar5[1],0x5c);
      MenuWnd_DrawText(0xe9,puVar5[2],0x5b);
    }
    else {
      if (*(int *)(iVar4 + 0x48) == 0) {
        iVar2 = UiMgr_FindLayout(0xe9);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)(int)puVar5[3],8,extraout_a3_lo_00);
      }
      else {
        iVar2 = UiMgr_FindLayout(0xe9);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)(int)puVar5[3],8,extraout_a3_lo);
      }
      uVar1 = MsgId_RivalNickname(*(undefined4 *)(iVar4 + 0x40));
      MenuWnd_DrawText(0xe9,puVar5[1],uVar1);
      uVar1 = RivalDb_Get(*(undefined2 *)(iVar4 + 0x40));
      uVar1 = RivalRec_GetCarId(uVar1);
      uVar1 = MenuText_CarShortName(uVar1,0xffffffffffffffff);
      MenuWnd_DrawText(0xe9,puVar5[2],uVar1);
    }
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 4;
  } while (iVar3 < 9);
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x20) + 0x13;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x20) + 9;
  }
  MenuWnd_DrawLabel(0xe9,(&DAT_0032b250)[iVar3 * 4],0x3a,iVar4 % 0x14 + 1);
  iVar4 = (iVar4 % 0x14) * 0xc;
  iVar2 = iVar4 + param_1;
  if (*(int *)(iVar2 + 0x44) == -1) {
    iVar4 = UiMgr_FindLayout(0xe9);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)(int)(&DAT_0032b25c)[iVar3 * 4],8,
                        extraout_a3_lo_03);
    MenuWnd_DrawText(0xe9,(&DAT_0032b254)[iVar3 * 4],0x5c);
    MenuWnd_DrawText(0xe9,(&DAT_0032b258)[iVar3 * 4],0x5b);
  }
  else {
    if (*(int *)(iVar2 + 0x48) == 0) {
      iVar2 = UiMgr_FindLayout(0xe9);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)(int)(&DAT_0032b25c)[iVar3 * 4],8,
                          extraout_a3_lo_01);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xe9);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)(int)(&DAT_0032b25c)[iVar3 * 4],8,
                          (byte)g_UiMgr);
    }
    iVar4 = iVar4 + param_1;
    uVar1 = MsgId_RivalNickname(*(undefined4 *)(iVar4 + 0x40));
    MenuWnd_DrawText(0xe9,(&DAT_0032b254)[iVar3 * 4],uVar1);
    uVar1 = RivalDb_Get(*(undefined2 *)(iVar4 + 0x40));
    uVar1 = RivalRec_GetCarId(uVar1);
    uVar1 = MenuText_CarShortName(uVar1,0xffffffffffffffff);
    MenuWnd_DrawText(0xe9,(&DAT_0032b258)[iVar3 * 4],uVar1);
  }
  return;
}

// 0x00231ba0  size 0x7f8
void ScrCareer_Draw_LoversInformation(undefined8 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  UiLayoutSlot *pUVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  undefined4 auStack_40 [3];
  int iStack_34;
  
  iVar13 = (int)param_1;
  iVar9 = *(int *)(iVar13 + 0x14);
  *(undefined4 *)(iVar13 + 0x14) = 0;
  if (iVar9 == 0) {
    iVar9 = *(int *)(iVar13 + 0x10);
  }
  else {
    uVar7 = UiRes_GetLayoutData(0x2b0);
    iVar9 = UiMgr_FindLayout(0xec);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar9].layout.unk_310 = 0xffffffff;
    pUVar3[iVar9].layout.unk_31c = 0;
    pUVar3[iVar9].layout.unk_30c = 0;
    if (pUVar3[iVar9].layout.unk_31c == 0) {
      pUVar3[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar9].layout.unk_318 = 1;
    }
    pUVar3[iVar9].layout.unk_30c = 0;
    if (pUVar3[iVar9].layout.unk_31c == 0) {
      pUVar3[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar9].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar9].layout.field_0x314 = 0;
    pUVar3[iVar9].layout.unk_31c = uVar7;
    pUVar3[iVar9].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x2b1);
    iVar9 = UiMgr_FindLayout(0xec);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar9].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar9].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar9].layout.field_0x330 == 0) {
      pUVar3[iVar9].layout.animState = 0;
    }
    else {
      pUVar3[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar9].layout.field_0x330 == 0) {
      pUVar3[iVar9].layout.animState = 0;
    }
    else {
      pUVar3[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar9].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar9].layout.field_0x330 = uVar8;
    pUVar3[iVar9].layout.animState = 1;
    MenuWnd_DrawDialogText(0xec,0x36ea28,2,0);
    iVar9 = UiMgr_FindLayout(0xec);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x3b,8,extraout_a3_lo);
    iVar9 = *(int *)(iVar13 + 0x10);
  }
  if ((iVar9 == 0) && (*(int *)(iVar13 + 0x18) == 0)) {
    MenuWnd_DrawCursor(1);
    if (*(int *)(iVar13 + 0x30) == 0) {
      iVar9 = UiMgr_FindLayout(0xec);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x3c,8,extraout_a3_lo_00);
      iVar9 = *(int *)(iVar13 + 0x34);
    }
    else {
      iVar9 = *(int *)(iVar13 + 0x34);
    }
    if ((iVar9 == 0) || (*(int *)(iVar13 + 0x30) == iVar9)) {
      iVar9 = UiMgr_FindLayout(0xec);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x3d,8,extraout_a3_lo_01);
    }
  }
  else {
    MenuWnd_DrawCursor(0);
  }
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xec,0);
  if (!bVar4) {
    *(undefined4 *)(iVar13 + 0x10) = 0;
  }
  if ((*(int *)(iVar13 + 0x18) != 0) &&
     (bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xec,1), !bVar4)) {
    *(undefined4 *)(iVar13 + 0x18) = 0;
  }
  ScrCareer_Draw_NoData(param_1);
  iVar9 = *(int *)(*(int *)(iVar13 + 0x24) * 0xc + iVar13 + 0x40);
  uVar10 = MenuText_CarNameOrMaker(iVar9,0xfffffffffffffffd);
  MenuWnd_DrawText(0xec,0x27,uVar10);
  uVar10 = MenuText_CarGrade(iVar9,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x28,4,uVar10);
  uVar10 = MenuText_CarShortName(iVar9,0xfffffffffffffffd);
  MenuWnd_DrawText(0xec,0x29,uVar10);
  iVar6 = Profile_Get(0);
  uVar1 = *(undefined2 *)(iVar6 + iVar9 * 2 + 0x3fc4);
  iVar6 = Profile_Get(0);
  uVar2 = *(undefined2 *)(iVar6 + iVar9 * 2 + 0x43ac);
  MenuWnd_DrawTextId(0xec,0x26,4,0x292);
  MenuWnd_DrawLabel(0xec,0x32,0x293,uVar1,uVar2);
  uVar7 = MenuText_CarName(iVar9,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2a,4,0x294);
  MenuWnd_DrawLabel(0xec,0x33,(uVar7 & 0xff) + 0x5d);
  lVar11 = MenuText_OpponentSpec(iVar9,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2b,4,0x297);
  if (lVar11 < 1) {
    MenuWnd_DrawLabel(0xec,0x34,0x26,0);
  }
  else {
    cVar5 = MenuText_RivalCarSpec(iVar9,0xfffffffffffffffd);
    if (cVar5 == '\a') {
      MenuWnd_DrawLabel(0xec,0x34,0x18,lVar11,0);
    }
    else {
      MenuWnd_DrawLabel(0xec,0x34,0x17,lVar11,0);
    }
  }
  lVar11 = MenuText_OpponentTitle(iVar9,0xfffffffffffffffd);
  uVar10 = MenuText_OpponentCar(iVar9,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2c,4,0x295);
  if (lVar11 < 1) {
    MenuWnd_DrawLabel(0xec,0x35,0x27,0,0,0);
  }
  else {
    MenuWnd_DrawLabel(0xec,0x35,0x19,lVar11,0,0,uVar10,0);
  }
  lVar11 = MenuText_OpponentTeam(iVar9,0xfffffffffffffffd);
  uVar10 = MenuText_OpponentName(iVar9,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2d,4,0x296);
  if (lVar11 < 1) {
    MenuWnd_DrawLabel(0xec,0x36,0x28,0,0,0);
  }
  else {
    MenuWnd_DrawLabel(0xec,0x36,0x1a,(int)lVar11 / 10,(int)lVar11 % 10,0,0,uVar10);
  }
  lVar11 = MenuText_OpponentComment(iVar9,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2e,4,0x298);
  if (lVar11 < 1) {
    MenuWnd_DrawLabel(0xec,0x37,0x25,0);
    iVar6 = *(int *)(iVar13 + 0x24);
  }
  else {
    MenuWnd_DrawLabel(0xec,0x37,0x16,lVar11,0);
    iVar6 = *(int *)(iVar13 + 0x24);
  }
  uVar10 = RivalDb_Get(*(undefined2 *)(iVar6 * 0xc + iVar13 + 0x40));
  lVar11 = RivalRec_IsValid(uVar10);
  if (lVar11 != 0) {
    MenuWnd_DrawTextId(0xec,0x2f,4,0x299);
    uVar12 = MsgId_TeamName(*(undefined2 *)uVar10);
    MenuWnd_DrawLabel(0xec,0x38,uVar12);
  }
  uVar12 = Race_GetLapCountForMode(*(undefined4 *)((undefined2 *)uVar10 + 10));
  MenuWnd_DrawTextId(0xec,0x30,4,0x29a);
  uVar12 = MsgId_ForOption(uVar12);
  uVar12 = MsgId_ForSlot(uVar12,0);
  MenuWnd_DrawLabel(0xec,0x39,uVar12);
  MenuWnd_DrawTextId(0xec,0x31,4,0x29b);
  lVar11 = RivalRec_IsBelowMax(uVar10);
  uVar10 = 0x4b;
  if (lVar11 == 0) {
    uVar10 = 0x4c;
  }
  MenuWnd_DrawLabel(0xec,0x3a,uVar10);
  iVar6 = UiMgr_FindLayout(0xec);
  UiElem_GetRect(&g_UiMgr->slots[iVar6].layout,auStack_40,0x3e);
  iStack_34 = iStack_34 + *(int *)(iVar13 + 0x30) * -0x16;
  uVar10 = MsgId_RivalProfile(iVar9);
  UiText_DrawById(auStack_40,uVar10);
  iVar9 = UiMgr_FindLayout(0xec);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar9].layout,0x10,0x16,*(int *)(iVar13 + 0x24) + 0x45);
  MenuNum_CountUp_LoversInfo
            (0xec,0x1e,0x1f,0x60,*(int *)(iVar13 + 0x34) + 5,5,*(undefined4 *)(iVar13 + 0x30));
  iVar9 = UiMgr_FindLayout(0xec);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0xea);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar9 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  MenuWnd_SetTitle(1,0xffffffffffffffff);
  return;
}

// 0x002323a0  size 0x5ac
void ScrCareer_Draw_Comment(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  undefined4 auStack_40 [3];
  int iStack_34;
  
  iVar7 = (int)param_1;
  iVar5 = *(int *)(iVar7 + 0x14);
  *(undefined4 *)(iVar7 + 0x14) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar7 + 0x10);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x2ae);
    iVar5 = UiMgr_FindLayout(0xeb);
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
    pUVar1[iVar5].layout.unk_31c = uVar3;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x2af);
    iVar5 = UiMgr_FindLayout(0xeb);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar4;
    pUVar1[iVar5].layout.animState = 1;
    MenuWnd_DrawDialogText(0xeb,0x36ea20,2,0);
    iVar5 = UiMgr_FindLayout(0xeb);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x38,8,extraout_a3_lo);
    iVar5 = *(int *)(iVar7 + 0x10);
  }
  if ((iVar5 == 0) && (*(int *)(iVar7 + 0x18) == 0)) {
    MenuWnd_DrawCursor(1);
    if (*(int *)(iVar7 + 0x30) == 0) {
      iVar5 = UiMgr_FindLayout(0xeb);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x36,8,extraout_a3_lo_00);
      iVar5 = *(int *)(iVar7 + 0x34);
    }
    else {
      iVar5 = *(int *)(iVar7 + 0x34);
    }
    if ((iVar5 == 0) || (*(int *)(iVar7 + 0x30) == iVar5)) {
      iVar5 = UiMgr_FindLayout(0xeb);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x37,8,extraout_a3_lo_01);
    }
  }
  else {
    MenuWnd_DrawCursor(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xeb,0);
  if (!bVar2) {
    *(undefined4 *)(iVar7 + 0x10) = 0;
  }
  if ((*(int *)(iVar7 + 0x18) != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xeb,1), !bVar2)
     ) {
    *(undefined4 *)(iVar7 + 0x18) = 0;
  }
  ScrCareer_Draw_NoData(param_1);
  MenuWnd_DrawTextId(0xeb,0x28,4,0x274);
  uVar6 = MsgId_RivalName(*(undefined4 *)(*(int *)(iVar7 + 0x24) * 0xc + iVar7 + 0x40));
  MenuWnd_DrawText(0xeb,0x2e,uVar6);
  iVar5 = GameDb_GetRivalCar(*(undefined4 *)(iVar7 + 0x24));
  iVar5 = *(int *)(iVar5 + 0x4c);
  MenuWnd_DrawTextId(0xeb,0x29,4,0x275);
  if (iVar5 < 1) {
    MenuWnd_DrawText(0xeb,0x2f,0x27f);
  }
  else {
    MenuWnd_DrawLabel(0xeb,0x2f,0x27b,iVar5);
  }
  MenuWnd_DrawTextId(0xeb,0x2a,4,0x276);
  uVar6 = MsgId_RivalNickname(*(undefined4 *)(*(int *)(iVar7 + 0x24) * 0xc + iVar7 + 0x40));
  MenuWnd_DrawText(0xeb,0x30,uVar6);
  MenuWnd_DrawTextId(0xeb,0x2b,4,0x277);
  uVar6 = MsgId_GirlfriendJob(*(undefined4 *)(iVar7 + 0x24));
  MenuWnd_DrawText(0xeb,0x31,uVar6);
  MenuWnd_DrawTextId(0xeb,0x2c,4,0x278);
  uVar6 = MsgId_GirlfriendHobby(*(undefined4 *)(iVar7 + 0x24));
  MenuWnd_DrawText(0xeb,0x32,uVar6);
  MenuWnd_DrawTextId(0xeb,0x2d,4,0x279);
  MenuWnd_DrawLabel(0xeb,0x33,0x27c,*(undefined4 *)(*(int *)(iVar7 + 0x24) * 0xc + iVar7 + 0x44));
  uVar6 = Profile_Get(0);
  MenuWnd_DrawTextId(0xeb,0x34,4,0x27a);
  uVar6 = Profile_GetCourseRecordB(uVar6,*(undefined4 *)(iVar7 + 0x24));
  MenuWnd_DrawLabel(0xeb,0x35,0x27d,uVar6);
  MenuWnd_DrawText(0xeb,0x27,0x27e);
  iVar5 = UiMgr_FindLayout(0xeb);
  UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_40,0x39);
  iStack_34 = iStack_34 + *(int *)(iVar7 + 0x30) * -0x16;
  uVar6 = MsgId_GirlfriendLine(*(undefined4 *)(iVar7 + 0x24));
  UiText_DrawById(auStack_40,uVar6);
  iVar5 = UiMgr_FindLayout(0xeb);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,0x11,0x16,*(int *)(iVar7 + 0x24) + 0x45);
  MenuNum_CountUp_LoversInfo
            (0xeb,0x1e,0x1f,0x60,*(int *)(iVar7 + 0x34) + 5,5,*(undefined4 *)(iVar7 + 0x30));
  iVar5 = UiMgr_FindLayout(0xeb);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0xea);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar5 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00232950  size 0xbe4
void ScrCareer_Select_NoData(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  
  piVar9 = (int *)param_1;
  iVar4 = piVar9[5];
  piVar9[5] = 0;
  if (iVar4 == 0) {
    iVar4 = piVar9[4];
  }
  else {
    uVar5 = UiRes_GetLayoutData(0x2a7);
    iVar4 = UiMgr_FindLayout(0xea);
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
    uVar6 = UiRes_GetLayoutData(0x2a8);
    iVar4 = UiMgr_FindLayout(0xea);
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
    uVar6 = UiRes_GetLayoutData(0x2a9);
    iVar4 = UiMgr_FindLayout(0xea);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x2aa);
    iVar4 = UiMgr_FindLayout(0xea);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x2ab);
    iVar4 = UiMgr_FindLayout(0xea);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x2ac);
    iVar4 = UiMgr_FindLayout(0xea);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    uVar6 = UiRes_GetLayoutData(0x2ad);
    iVar4 = UiMgr_FindLayout(0xea);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x38c = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    uVar5 = UiRes_GetLayoutData(0x2b2);
    iVar4 = UiMgr_FindLayout(0xed);
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
    uVar6 = UiRes_GetLayoutData(0x2b3);
    iVar4 = UiMgr_FindLayout(0xed);
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
    uVar6 = UiRes_GetLayoutData(0x2b4);
    iVar4 = UiMgr_FindLayout(0xed);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    MenuWnd_DrawDialogText(0xea,0x36ea18,2);
    iVar4 = piVar9[4];
  }
  if (((iVar4 == 0) && (piVar9[6] == 0)) && (lVar7 = MenuMgr_Goto(), lVar7 == 0)) {
    MenuWnd_DrawCursor(1);
    iVar4 = *piVar9;
  }
  else {
    MenuWnd_DrawCursor(0);
    iVar4 = *piVar9;
  }
  if (iVar4 == 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xea,0);
    if (!bVar2) {
      piVar9[4] = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xea,1);
    if (!bVar2) {
      piVar9[4] = 0;
    }
  }
  if (piVar9[6] != 0) {
    if (piVar9[2] == 0) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xea,2);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xed,1);
      if (!bVar2 && !bVar3) {
        piVar9[6] = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xea,3);
      if (!bVar2) {
        piVar9[6] = 0;
      }
    }
  }
  if ((char)piVar9[0xb] != '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    bVar2 = false;
    if (piVar9[piVar9[10] * 3 + 0x11] == -1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xed,1);
    }
    if ((char)piVar9[0xb] == '\x03') {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xea,4);
      if (!bVar3) {
        bVar3 = bVar2 != false;
      }
      if (bVar3 == false) {
        piVar9[10] = piVar9[9];
        *(undefined1 *)(piVar9 + 0xb) = 0;
        iVar4 = UiMgr_FindLayout(0xea);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
        }
        iVar4 = UiMgr_FindLayout(0xed);
        pUVar1 = g_UiMgr->slots;
        pUVar1[iVar4].layout.unk_30c = 0;
        if (pUVar1[iVar4].layout.unk_31c == 0) {
          pUVar1[iVar4].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar4].layout.unk_318 = 1;
        }
        iVar4 = UiMgr_FindLayout(0xed);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
          pUVar1[iVar4].layout.animState = 0;
        }
        else {
          pUVar1[iVar4].layout.animState = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
    }
    else {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xea,5);
      if (!bVar3) {
        bVar3 = bVar2 != false;
      }
      if (bVar3 == false) {
        piVar9[10] = piVar9[9];
        *(undefined1 *)(piVar9 + 0xb) = 0;
        iVar4 = UiMgr_FindLayout(0xea);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x370 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x380 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
        }
        iVar4 = UiMgr_FindLayout(0xed);
        pUVar1 = g_UiMgr->slots;
        pUVar1[iVar4].layout.unk_30c = 0;
        if (pUVar1[iVar4].layout.unk_31c == 0) {
          pUVar1[iVar4].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar4].layout.unk_318 = 1;
        }
        iVar4 = UiMgr_FindLayout(0xed);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
          pUVar1[iVar4].layout.animState = 0;
        }
        else {
          pUVar1[iVar4].layout.animState = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
    }
  }
  MenuWnd_DrawLabel(0xea,0x14,0x3c,piVar9[9] + 1,0x14);
  ScrCareer_Draw_NoData(param_1);
  iVar4 = piVar9[10];
  if (piVar9[9] != iVar4) {
    if (piVar9[iVar4 * 3 + 0x11] != -1) {
      if (piVar9[iVar4 * 3 + 0x12] == 0) {
        iVar4 = UiMgr_FindLayout(0xea);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0xd,8,extraout_a3_lo_00);
        iVar4 = piVar9[10];
      }
      else {
        iVar4 = UiMgr_FindLayout(0xea);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0xd,8,extraout_a3_lo);
        iVar4 = piVar9[10];
      }
      uVar8 = MsgId_RivalNickname(piVar9[iVar4 * 3 + 0x10]);
      MenuWnd_DrawText(0xea,0x1c,uVar8);
      uVar8 = MsgId_RivalName(piVar9[piVar9[10] * 3 + 0x10]);
      MenuWnd_DrawText(0xea,0x1d,uVar8);
      uVar8 = RivalDb_Get((short)piVar9[piVar9[10] * 3 + 0x10]);
      uVar5 = RivalRec_GetType(uVar8);
      MenuWnd_DrawText(0xea,0x1e,(uVar5 & 0xff) + 0x67);
      iVar4 = piVar9[10];
      goto LAB_00233374;
    }
    iVar4 = UiMgr_FindLayout(0xea);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0xd,8,extraout_a3_lo_01);
    MenuWnd_DrawText(0xea,0x1c,0x5c);
    MenuWnd_DrawText(0xea,0x1d,0x5c);
    MenuWnd_DrawText(0xea,0x1e,0x5b);
  }
  iVar4 = piVar9[10];
LAB_00233374:
  if (piVar9[iVar4 * 3 + 0x11] == -1) {
    iVar4 = UiMgr_FindLayout(0xea);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x13,9,7);
    if (piVar9[9] == piVar9[10]) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xed,0);
      if (!bVar2) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
    }
    MenuWnd_DrawText(0xed,0x10,0x280);
    UiLayout_UpdateAnimById((UiLayout *)0xed,2);
    iVar4 = UiMgr_FindLayout(0xed);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  }
  else {
    UiLayout_UpdateAnimById((UiLayout *)0xea,6);
  }
  iVar4 = UiMgr_FindLayout(0xea);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar4 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  if (piVar9[piVar9[10] * 3 + 0x11] == -1) {
    MenuWnd_SetTitle(1);
  }
  else {
    MenuWnd_SetTitle(3);
  }
  return;
}

// 0x00233540  size 0x5ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_LoversInformation_3540(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar4 = *(int *)(iVar7 + 0x14);
  *(undefined4 *)(iVar7 + 0x14) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar7 + 8);
  }
  else {
    uVar5 = UiRes_GetLayoutData(0x2a1);
    iVar4 = UiMgr_FindLayout(0xe9);
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
    uVar6 = UiRes_GetLayoutData(0x2a2);
    iVar4 = UiMgr_FindLayout(0xe9);
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
    uVar6 = UiRes_GetLayoutData(0x2a3);
    iVar4 = UiMgr_FindLayout(0xe9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x2a4);
    iVar4 = UiMgr_FindLayout(0xe9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x2a5);
    iVar4 = UiMgr_FindLayout(0xe9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x2a6);
    iVar4 = UiMgr_FindLayout(0xe9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    Menu_ClearSlot(0);
    iVar4 = *(int *)(iVar7 + 8);
  }
  if (iVar4 == 1) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe9,0);
    if (!bVar2) {
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe9,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe9,2);
    if (!bVar2 && !bVar3) {
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
  }
  if (*(int *)(iVar7 + 0x18) != 0) {
    if (*(int *)(iVar7 + 8) == 1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe9,1);
      if (!bVar2) {
        *(undefined4 *)(iVar7 + 0x18) = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe9,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe9,3);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(iVar7 + 0x18) = 0;
      }
    }
  }
  if (*(char *)(iVar7 + 0x2c) == '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState
                (0xe9,*(undefined4 *)
                       (&DAT_0032b220 +
                       (((*(int *)(iVar7 + 0x24) - *(int *)(iVar7 + 0x20)) + 0x14) % 0x14) * 4),0,0)
      ;
    }
  }
  else {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    if (*(char *)(iVar7 + 0x2c) == '\x01') {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe9,5);
      if (!bVar2) {
        *(undefined1 *)(iVar7 + 0x2c) = 0;
        iVar4 = UiMgr_FindLayout(0xe9);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x370 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x380 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
        }
        Menu_ClearSlot(0);
        iVar4 = *(int *)(iVar7 + 0x24);
        goto LAB_0023371c;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe9,4);
      if (!bVar2) {
        *(undefined1 *)(iVar7 + 0x2c) = 0;
        iVar4 = UiMgr_FindLayout(0xe9);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  iVar4 = *(int *)(iVar7 + 0x24);
LAB_0023371c:
  MenuWnd_DrawLabel(0xe9,0x6d,0x3c,iVar4 + 1,0x14);
  ScrCareer_Draw_NoData_17e0(param_1);
  MenuNum_CountUp_LoversInfo(0xe9,3,4,0xf8,0x14,9,*(undefined4 *)(iVar7 + 0x20));
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar4 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00233b30  size 0x58
/* menu page 16 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage16_Exit(void)

{
  int iVar1;
  byte extraout_a3_lo;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x25,8,extraout_a3_lo);
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00233b90  size 0x10c
/* menu page 16 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage16_Update(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte extraout_a3_lo;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar2 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x25,8,extraout_a3_lo);
  UiLayout_UpdateAnimById((UiLayout *)0xe8,0);
  iVar2 = UiMgr_FindLayout(0xe8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  (*(code *)(&PTR_ScrCareer_Draw_LoversInformation_3540_0032b210)[*(int *)((int)param_1 + 4)])
            (param_1);
  uVar1 = g_MenuMgr->flags;
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    g_MenuMgr->flags = uVar1 | 0x800;
  }
  return;
}

// 0x00233ca0  size 0x9c
/* menu page 16 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage16_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x2a0);
  iVar3 = UiMgr_FindLayout(0xe8);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 1;
  pUVar1[iVar3].layout.unk_31c = uVar2;
  pUVar1[iVar3].layout.unk_318 = 1;
  return;
}

// 0x00233d40  size 0x320
void MenuNum_CountUp_PlayerStatus
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,ulong param_5,
               ulong param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  
  if (param_6 < param_5) {
    uVar1 = (int)(param_4 * (int)param_6) / (int)param_5;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    if ((float)(param_4 + 0x10) <
        (float)((int)(param_7 * param_4) / (int)param_5 + 0x10) + (float)uVar1) {
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo);
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetNumber(&g_UiMgr->slots[iVar2].layout,param_3,2,0x10);
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,6,0);
    }
    else {
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo_01);
    }
  }
  iVar2 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_2,2,extraout_a3_lo_00);
  iVar2 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_2,6,(byte)g_UiMgr);
  return;
}

