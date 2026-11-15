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
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x398);
    iVar4 = UiMgr_FindLayout(0xf0);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar4].layout.field_0x31c == 0) {
      pUVar3[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar4].layout.field_0x31c == 0) {
      pUVar3[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x31c = uVar5;
    pUVar3[iVar4].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x399);
    iVar4 = UiMgr_FindLayout(0xf0);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar4].layout.field_0x330 == 0) {
      pUVar3[iVar4].layout.animState = 0;
    }
    else {
      pUVar3[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar4].layout.field_0x330 == 0) {
      pUVar3[iVar4].layout.animState = 0;
    }
    else {
      pUVar3[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar4].layout.field_0x330 = uVar5;
    pUVar3[iVar4].layout.animState = 1;
    Menu_ClearSlot(0);
    iVar4 = UiMgr_FindLayout(0xef);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x43,8);
    iVar4 = UiMgr_FindLayout(0xef);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x44,8);
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
  lVar6 = UiLayout_UpdateAnimById(0xf0,0);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (lVar6 = UiLayout_UpdateAnimById(0xf0), lVar6 == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0xf0,*(undefined4 *)(&DAT_0036ea00 + *(int *)(param_1 + 0x30) * 4),1,0);
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar7 = MsgId_ForSlot(iVar4,1);
  MenuWnd_DrawText(0xef,(&DAT_0032b150)[(iVar2 + (iVar4 - iVar1)) % iVar2],uVar7);
  MenuWnd_DrawText(0xf0,0xc,0x4a);
  MenuWnd_DrawText(0xf0,0xd,0x49);
  iVar4 = UiMgr_FindLayout(0xee);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xef);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xf0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
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
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar4 = param_1[5];
  param_1[5] = 0;
  if (iVar4 == 0) {
    iVar4 = *param_1;
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x38e);
    iVar4 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar3;
    pUVar2[iVar4].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0x38f);
    iVar4 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar3;
    pUVar2[iVar4].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0x390);
    iVar4 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x391);
    iVar4 = UiMgr_FindLayout(0xef);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x392);
    iVar4 = UiMgr_FindLayout(0xef);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 1;
    uVar3 = UiRes_GetLayoutData(0x393);
    iVar4 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 1;
    uVar3 = UiRes_GetLayoutData(0x394);
    iVar4 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x394 = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 1;
    uVar3 = UiRes_GetLayoutData(0x395);
    iVar4 = UiMgr_FindLayout(0xef);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a8 = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a4 = 1;
    uVar3 = UiRes_GetLayoutData(0x396);
    iVar4 = UiMgr_FindLayout(0xef);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3ac = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3ac = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3bc = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b8 = 1;
    uVar3 = UiRes_GetLayoutData(0x397);
    iVar4 = UiMgr_FindLayout(0xef);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3c8 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3d0 = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3cc = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xef,0x36e9f8,2,0);
    iVar4 = *param_1;
  }
  if (iVar4 == 1) {
    lVar7 = UiLayout_UpdateAnimById(0xef,0);
    if (lVar7 == 0) {
      param_1[4] = 0;
    }
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(0xef,0);
    lVar8 = UiLayout_UpdateAnimById(0xef,1);
    if (lVar7 == 0 && lVar8 == 0) {
      param_1[4] = 0;
    }
  }
  if (param_1[6] != 0) {
    if (param_1[2] == 1) {
      lVar7 = UiLayout_UpdateAnimById
                        (0xef,(param_1[9] + (param_1[0xb] - param_1[10])) % param_1[9] + 2);
      if (lVar7 == 0) {
        param_1[6] = 0;
      }
    }
    else {
      lVar7 = UiLayout_UpdateAnimById(0xef,6);
      lVar8 = UiLayout_UpdateAnimById(0xef,7);
      if (lVar7 == 0 && lVar8 == 0) {
        param_1[6] = 0;
      }
    }
  }
  if (((param_1[4] == 0) && (param_1[6] == 0)) && (lVar7 = MenuMgr_Goto(), lVar7 == 0)) {
    MenuWnd_DrawCursor(1);
    if (param_1[9] < 5) {
      iVar4 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x43,8);
      iVar4 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x44,8);
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
      lVar7 = UiLayout_UpdateAnimById(0xef,9);
      if (lVar7 == 0) {
        *(undefined1 *)(param_1 + 8) = 0;
        iVar4 = UiMgr_FindLayout(0xef);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x3c0 = 0;
        if (*(int *)&pUVar2[iVar4].layout.field_0x3d0 == 0) {
          *(undefined4 *)&pUVar2[iVar4].layout.field_0x3cc = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar4].layout.field_0x3cc = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      lVar7 = UiLayout_UpdateAnimById(0xef,8);
      if (lVar7 == 0) {
        *(undefined1 *)(param_1 + 8) = 0;
        iVar4 = UiMgr_FindLayout(0xef);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x3ac = 0;
        if (*(int *)&pUVar2[iVar4].layout.field_0x3bc == 0) {
          *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b8 = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar4].layout.field_0x3b8 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  iVar4 = 0;
  puVar11 = &DAT_0032b150;
  puVar10 = &DAT_0032b190;
  while( true ) {
    iVar5 = param_1[9];
    if (iVar5 < 5) {
      iVar6 = iVar5;
    }
    else {
      iVar6 = 4;
    }
    if (iVar6 <= iVar4) break;
    iVar5 = (param_1[10] + iVar4) % iVar5;
    uVar9 = MsgId_ForSlot(iVar5,1);
    MenuWnd_DrawText(0xef,*puVar11,uVar9);
    iVar6 = UiMgr_FindLayout(0xef);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,*puVar10,0x16,
                      *(undefined4 *)(&DAT_0032b1d0 + iVar5 * 4));
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
    iVar4 = iVar4 + 1;
  }
  if ((char)param_1[8] == '\x01') {
    iVar4 = param_1[10] + -1 + iVar5;
  }
  else {
    iVar4 = param_1[10] + 4;
  }
  uVar9 = MsgId_ForSlot(iVar4 % iVar5,1);
  MenuWnd_DrawText(0xef,DAT_0032b160,uVar9);
  iVar6 = UiMgr_FindLayout(0xef);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,DAT_0032b1a0,0x16,
                    *(undefined4 *)(&DAT_0032b1d0 + (iVar4 % iVar5) * 4));
  iVar4 = 4;
  if (param_1[9] < 5) {
    puVar11 = &DAT_0032b1a0;
    puVar10 = &DAT_0032b1c0;
    do {
      iVar5 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,*puVar11,8);
      iVar5 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,*puVar10,8);
      iVar4 = iVar4 + -1;
      puVar11 = puVar11 + -1;
      puVar10 = puVar10 + -1;
    } while (param_1[9] <= iVar4);
  }
  iVar4 = UiMgr_FindLayout(0xee);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xef);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_SetTitle(3,0x290);
  Subtitle_Draw();
  return;
}

// 0x00231190  size 0x80
/* page identified from its states' on-screen text (N154) */

void maybe_PageHillClimb_Exit(void)

{
  int iVar1;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar1].layout,0x25,8);
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
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (param_6 < param_5) {
    fVar2 = (float)((int)(param_7 * param_4) / (int)param_5 + 0x10);
    uVar1 = (int)(param_4 * (int)param_6) / (int)param_5;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    fVar5 = (float)uVar1;
    fVar4 = fVar2 + fVar5;
    if ((float)(param_4 + 0x10) < fVar4) {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,param_3,8);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetNumber(&g_UiMgr->slots[iVar3].layout,param_3,2,0x10);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat((fVar4 - (float)(param_4 + 0x10)) / 16.0,&g_UiMgr->slots[iVar3].layout,
                          param_3,6);
      fVar5 = (float)(param_4 + 0x10) - fVar2;
    }
    else {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,param_3,8);
    }
  }
  else {
    fVar2 = 16.0;
    fVar5 = (float)param_4;
    iVar3 = UiMgr_FindLayout(param_1);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,param_3,8);
  }
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar2,&g_UiMgr->slots[iVar3].layout,param_2,2);
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar5 / 16.0,&g_UiMgr->slots[iVar3].layout,param_2,6);
  return;
}

// 0x00231610  size 0x1d0
void ScrCareer_Draw_NoData(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  MenuWnd_DrawLabel(0xea,0x18,0x3a,*(int *)(param_1 + 0x24) + 1);
  iVar3 = *(int *)(param_1 + 0x24) * 0xc + param_1;
  if (*(int *)(iVar3 + 0x44) == -1) {
    iVar3 = UiMgr_FindLayout(0xea);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,4,8);
    MenuWnd_DrawText(0xea,0x17,0x5c);
    MenuWnd_DrawText(0xea,0x19,0x5c);
    MenuWnd_DrawText(0xea,0x1a,0x5b);
  }
  else {
    if (*(int *)(iVar3 + 0x48) == 0) {
      iVar3 = UiMgr_FindLayout(0xea);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,4,8);
      iVar3 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xea);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,4,8);
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
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,puVar5[3],8);
      MenuWnd_DrawText(0xe9,puVar5[1],0x5c);
      MenuWnd_DrawText(0xe9,puVar5[2],0x5b);
    }
    else {
      if (*(int *)(iVar4 + 0x48) == 0) {
        iVar2 = UiMgr_FindLayout(0xe9);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,puVar5[3],8);
      }
      else {
        iVar2 = UiMgr_FindLayout(0xe9);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar2].layout,puVar5[3],8);
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
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,(&DAT_0032b25c)[iVar3 * 4],8);
    MenuWnd_DrawText(0xe9,(&DAT_0032b254)[iVar3 * 4],0x5c);
    MenuWnd_DrawText(0xe9,(&DAT_0032b258)[iVar3 * 4],0x5b);
  }
  else {
    if (*(int *)(iVar2 + 0x48) == 0) {
      iVar2 = UiMgr_FindLayout(0xe9);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,(&DAT_0032b25c)[iVar3 * 4],8);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xe9);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar2].layout,(&DAT_0032b25c)[iVar3 * 4],8);
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
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  iVar12 = (int)param_1;
  iVar8 = *(int *)(iVar12 + 0x14);
  *(undefined4 *)(iVar12 + 0x14) = 0;
  if (iVar8 == 0) {
    iVar8 = *(int *)(iVar12 + 0x10);
  }
  else {
    uVar7 = UiRes_GetLayoutData(0x2b0);
    iVar8 = UiMgr_FindLayout(0xec);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x31c == 0) {
      pUVar3[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x31c == 0) {
      pUVar3[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x31c = uVar7;
    pUVar3[iVar8].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x2b1);
    iVar8 = UiMgr_FindLayout(0xec);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x330 == 0) {
      pUVar3[iVar8].layout.animState = 0;
    }
    else {
      pUVar3[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x330 == 0) {
      pUVar3[iVar8].layout.animState = 0;
    }
    else {
      pUVar3[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x330 = uVar7;
    pUVar3[iVar8].layout.animState = 1;
    MenuWnd_DrawDialogText(0xec,0x36ea28,2,0);
    iVar8 = UiMgr_FindLayout(0xec);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,0x3b,8);
    iVar8 = *(int *)(iVar12 + 0x10);
  }
  if ((iVar8 == 0) && (*(int *)(iVar12 + 0x18) == 0)) {
    MenuWnd_DrawCursor(1);
    if (*(int *)(iVar12 + 0x30) == 0) {
      iVar8 = UiMgr_FindLayout(0xec);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,0x3c,8);
      iVar8 = *(int *)(iVar12 + 0x34);
    }
    else {
      iVar8 = *(int *)(iVar12 + 0x34);
    }
    if ((iVar8 == 0) || (*(int *)(iVar12 + 0x30) == iVar8)) {
      iVar8 = UiMgr_FindLayout(0xec);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,0x3d,8);
    }
  }
  else {
    MenuWnd_DrawCursor(0);
  }
  lVar9 = UiLayout_UpdateAnimById(0xec,0);
  if (lVar9 == 0) {
    *(undefined4 *)(iVar12 + 0x10) = 0;
  }
  if ((*(int *)(iVar12 + 0x18) != 0) && (lVar9 = UiLayout_UpdateAnimById(0xec), lVar9 == 0)) {
    *(undefined4 *)(iVar12 + 0x18) = 0;
  }
  ScrCareer_Draw_NoData(param_1);
  iVar8 = *(int *)(*(int *)(iVar12 + 0x24) * 0xc + iVar12 + 0x40);
  uVar10 = MenuText_CarNameOrMaker(iVar8,0xfffffffffffffffd);
  MenuWnd_DrawText(0xec,0x27,uVar10);
  uVar10 = MenuText_CarGrade(iVar8,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x28,4,uVar10);
  uVar10 = MenuText_CarShortName(iVar8,0xfffffffffffffffd);
  MenuWnd_DrawText(0xec,0x29,uVar10);
  iVar5 = Profile_Get(0);
  uVar1 = *(undefined2 *)(iVar5 + iVar8 * 2 + 0x3fc4);
  iVar5 = Profile_Get(0);
  uVar2 = *(undefined2 *)(iVar5 + iVar8 * 2 + 0x43ac);
  MenuWnd_DrawTextId(0xec,0x26,4,0x292);
  MenuWnd_DrawLabel(0xec,0x32,0x293,uVar1,uVar2);
  uVar6 = MenuText_CarName(iVar8,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2a,4,0x294);
  MenuWnd_DrawLabel(0xec,0x33,(uVar6 & 0xff) + 0x5d);
  lVar9 = MenuText_OpponentSpec(iVar8,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2b,4,0x297);
  if (lVar9 < 1) {
    MenuWnd_DrawLabel(0xec,0x34,0x26,0);
  }
  else {
    cVar4 = MenuText_RivalCarSpec(iVar8,0xfffffffffffffffd);
    if (cVar4 == '\a') {
      MenuWnd_DrawLabel(0xec,0x34,0x18,lVar9,0);
    }
    else {
      MenuWnd_DrawLabel(0xec,0x34,0x17,lVar9,0);
    }
  }
  lVar9 = MenuText_OpponentTitle(iVar8,0xfffffffffffffffd);
  uVar10 = MenuText_OpponentCar(iVar8,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2c,4,0x295);
  if (lVar9 < 1) {
    MenuWnd_DrawLabel(0xec,0x35,0x27,0,0,0);
  }
  else {
    MenuWnd_DrawLabel(0xec,0x35,0x19,lVar9,0,0,uVar10,0);
  }
  lVar9 = MenuText_OpponentTeam(iVar8,0xfffffffffffffffd);
  uVar10 = MenuText_OpponentName(iVar8,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2d,4,0x296);
  if (lVar9 < 1) {
    MenuWnd_DrawLabel(0xec,0x36,0x28,0,0,0);
  }
  else {
    MenuWnd_DrawLabel(0xec,0x36,0x1a,(int)lVar9 / 10,(int)lVar9 % 10,0,0,uVar10);
  }
  lVar9 = MenuText_OpponentComment(iVar8,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2e,4,0x298);
  if (lVar9 < 1) {
    MenuWnd_DrawLabel(0xec,0x37,0x25,0);
    iVar5 = *(int *)(iVar12 + 0x24);
  }
  else {
    MenuWnd_DrawLabel(0xec,0x37,0x16,lVar9,0);
    iVar5 = *(int *)(iVar12 + 0x24);
  }
  uVar10 = RivalDb_Get(*(undefined2 *)(iVar5 * 0xc + iVar12 + 0x40));
  lVar9 = RivalRec_IsValid(uVar10);
  if (lVar9 != 0) {
    MenuWnd_DrawTextId(0xec,0x2f,4,0x299);
    uVar11 = MsgId_TeamName(*(undefined2 *)uVar10);
    MenuWnd_DrawLabel(0xec,0x38,uVar11);
  }
  uVar11 = Race_GetLapCountForMode(*(undefined4 *)((undefined2 *)uVar10 + 10));
  MenuWnd_DrawTextId(0xec,0x30,4,0x29a);
  uVar11 = MsgId_ForOption(uVar11);
  uVar11 = MsgId_ForSlot(uVar11,0);
  MenuWnd_DrawLabel(0xec,0x39,uVar11);
  MenuWnd_DrawTextId(0xec,0x31,4,0x29b);
  lVar9 = RivalRec_IsBelowMax(uVar10);
  uVar10 = 0x4b;
  if (lVar9 == 0) {
    uVar10 = 0x4c;
  }
  MenuWnd_DrawLabel(0xec,0x3a,uVar10);
  iVar5 = UiMgr_FindLayout(0xec);
  UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_40,0x3e);
  iStack_34 = iStack_34 + *(int *)(iVar12 + 0x30) * -0x16;
  uVar10 = MsgId_RivalProfile(iVar8);
  UiText_DrawById(auStack_40,uVar10);
  iVar8 = UiMgr_FindLayout(0xec);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar8].layout,0x10,0x16,*(int *)(iVar12 + 0x24) + 0x45);
  MenuNum_CountUp_LoversInfo
            (0xec,0x1e,0x1f,0x60,*(int *)(iVar12 + 0x34) + 5,5,*(undefined4 *)(iVar12 + 0x30));
  iVar8 = UiMgr_FindLayout(0xec);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0xea);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar8 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  MenuWnd_SetTitle(1,0xffffffffffffffff);
  return;
}

// 0x002323a0  size 0x5ac
void ScrCareer_Draw_Comment(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 0x14);
  *(undefined4 *)(iVar6 + 0x14) = 0;
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar6 + 0x10);
  }
  else {
    uVar2 = UiRes_GetLayoutData(0x2ae);
    iVar3 = UiMgr_FindLayout(0xeb);
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
    uVar2 = UiRes_GetLayoutData(0x2af);
    iVar3 = UiMgr_FindLayout(0xeb);
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
    MenuWnd_DrawDialogText(0xeb,0x36ea20,2,0);
    iVar3 = UiMgr_FindLayout(0xeb);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x38,8);
    iVar3 = *(int *)(iVar6 + 0x10);
  }
  if ((iVar3 == 0) && (*(int *)(iVar6 + 0x18) == 0)) {
    MenuWnd_DrawCursor(1);
    if (*(int *)(iVar6 + 0x30) == 0) {
      iVar3 = UiMgr_FindLayout(0xeb);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x36,8);
      iVar3 = *(int *)(iVar6 + 0x34);
    }
    else {
      iVar3 = *(int *)(iVar6 + 0x34);
    }
    if ((iVar3 == 0) || (*(int *)(iVar6 + 0x30) == iVar3)) {
      iVar3 = UiMgr_FindLayout(0xeb);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x37,8);
    }
  }
  else {
    MenuWnd_DrawCursor(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0xeb,0);
  if (lVar4 == 0) {
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  if ((*(int *)(iVar6 + 0x18) != 0) && (lVar4 = UiLayout_UpdateAnimById(0xeb), lVar4 == 0)) {
    *(undefined4 *)(iVar6 + 0x18) = 0;
  }
  ScrCareer_Draw_NoData(param_1);
  MenuWnd_DrawTextId(0xeb,0x28,4,0x274);
  uVar5 = MsgId_RivalName(*(undefined4 *)(*(int *)(iVar6 + 0x24) * 0xc + iVar6 + 0x40));
  MenuWnd_DrawText(0xeb,0x2e,uVar5);
  iVar3 = GameDb_GetRivalCar(*(undefined4 *)(iVar6 + 0x24));
  iVar3 = *(int *)(iVar3 + 0x4c);
  MenuWnd_DrawTextId(0xeb,0x29,4,0x275);
  if (iVar3 < 1) {
    MenuWnd_DrawText(0xeb,0x2f,0x27f);
  }
  else {
    MenuWnd_DrawLabel(0xeb,0x2f,0x27b,iVar3);
  }
  MenuWnd_DrawTextId(0xeb,0x2a,4,0x276);
  uVar5 = MsgId_RivalNickname(*(undefined4 *)(*(int *)(iVar6 + 0x24) * 0xc + iVar6 + 0x40));
  MenuWnd_DrawText(0xeb,0x30,uVar5);
  MenuWnd_DrawTextId(0xeb,0x2b,4,0x277);
  uVar5 = MsgId_GirlfriendJob(*(undefined4 *)(iVar6 + 0x24));
  MenuWnd_DrawText(0xeb,0x31,uVar5);
  MenuWnd_DrawTextId(0xeb,0x2c,4,0x278);
  uVar5 = MsgId_GirlfriendHobby(*(undefined4 *)(iVar6 + 0x24));
  MenuWnd_DrawText(0xeb,0x32,uVar5);
  MenuWnd_DrawTextId(0xeb,0x2d,4,0x279);
  MenuWnd_DrawLabel(0xeb,0x33,0x27c,*(undefined4 *)(*(int *)(iVar6 + 0x24) * 0xc + iVar6 + 0x44));
  uVar5 = Profile_Get(0);
  MenuWnd_DrawTextId(0xeb,0x34,4,0x27a);
  uVar5 = Profile_GetCourseRecordB(uVar5,*(undefined4 *)(iVar6 + 0x24));
  MenuWnd_DrawLabel(0xeb,0x35,0x27d,uVar5);
  MenuWnd_DrawText(0xeb,0x27,0x27e);
  iVar3 = UiMgr_FindLayout(0xeb);
  UiElem_GetRect(&g_UiMgr->slots[iVar3].layout,auStack_40,0x39);
  iStack_34 = iStack_34 + *(int *)(iVar6 + 0x30) * -0x16;
  uVar5 = MsgId_GirlfriendLine(*(undefined4 *)(iVar6 + 0x24));
  UiText_DrawById(auStack_40,uVar5);
  iVar3 = UiMgr_FindLayout(0xeb);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,0x11,0x16,*(int *)(iVar6 + 0x24) + 0x45);
  MenuNum_CountUp_LoversInfo
            (0xeb,0x1e,0x1f,0x60,*(int *)(iVar6 + 0x34) + 5,5,*(undefined4 *)(iVar6 + 0x30));
  iVar3 = UiMgr_FindLayout(0xeb);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xea);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar3 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00232950  size 0xbe4
void ScrCareer_Select_NoData(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  
  piVar8 = (int *)param_1;
  iVar2 = piVar8[5];
  piVar8[5] = 0;
  if (iVar2 == 0) {
    iVar2 = piVar8[4];
  }
  else {
    uVar4 = UiRes_GetLayoutData(0x2a7);
    iVar2 = UiMgr_FindLayout(0xea);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar4;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x2a8);
    iVar2 = UiMgr_FindLayout(0xea);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar4;
    pUVar1[iVar2].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x2a9);
    iVar2 = UiMgr_FindLayout(0xea);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x2aa);
    iVar2 = UiMgr_FindLayout(0xea);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0x2ab);
    iVar2 = UiMgr_FindLayout(0xea);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar4 = UiRes_GetLayoutData(0x2ac);
    iVar2 = UiMgr_FindLayout(0xea);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    uVar4 = UiRes_GetLayoutData(0x2ad);
    iVar2 = UiMgr_FindLayout(0xea);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x38c = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    uVar4 = UiRes_GetLayoutData(0x2b2);
    iVar2 = UiMgr_FindLayout(0xed);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar4;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x2b3);
    iVar2 = UiMgr_FindLayout(0xed);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar4;
    pUVar1[iVar2].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x2b4);
    iVar2 = UiMgr_FindLayout(0xed);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    MenuWnd_DrawDialogText(0xea,0x36ea18,2);
    iVar2 = piVar8[4];
  }
  if (((iVar2 == 0) && (piVar8[6] == 0)) && (lVar5 = MenuMgr_Goto(), lVar5 == 0)) {
    MenuWnd_DrawCursor(1);
    iVar2 = *piVar8;
  }
  else {
    MenuWnd_DrawCursor(0);
    iVar2 = *piVar8;
  }
  if (iVar2 == 0) {
    lVar5 = UiLayout_UpdateAnimById(0xea,0);
    if (lVar5 == 0) {
      piVar8[4] = 0;
    }
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0xea,1);
    if (lVar5 == 0) {
      piVar8[4] = 0;
    }
  }
  if (piVar8[6] != 0) {
    if (piVar8[2] == 0) {
      lVar5 = UiLayout_UpdateAnimById(0xea,2);
      lVar6 = UiLayout_UpdateAnimById(0xed,1);
      if (lVar5 == 0 && lVar6 == 0) {
        piVar8[6] = 0;
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0xea,3);
      if (lVar5 == 0) {
        piVar8[6] = 0;
      }
    }
  }
  if ((char)piVar8[0xb] != '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    lVar5 = 0;
    if (piVar8[piVar8[10] * 3 + 0x11] == -1) {
      lVar5 = UiLayout_UpdateAnimById(0xed,1);
    }
    if ((char)piVar8[0xb] == '\x03') {
      lVar6 = UiLayout_UpdateAnimById(0xea,4);
      if (lVar6 == 0 && lVar5 == 0) {
        piVar8[10] = piVar8[9];
        *(undefined1 *)(piVar8 + 0xb) = 0;
        iVar2 = UiMgr_FindLayout(0xea);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x35c = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x36c == 0) {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
        }
        iVar2 = UiMgr_FindLayout(0xed);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
          pUVar1[iVar2].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar2].layout.unk_318 = 1;
        }
        iVar2 = UiMgr_FindLayout(0xed);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
          pUVar1[iVar2].layout.animState = 0;
        }
        else {
          pUVar1[iVar2].layout.animState = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0xea,5);
      if (lVar6 == 0 && lVar5 == 0) {
        piVar8[10] = piVar8[9];
        *(undefined1 *)(piVar8 + 0xb) = 0;
        iVar2 = UiMgr_FindLayout(0xea);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
        }
        iVar2 = UiMgr_FindLayout(0xed);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
          pUVar1[iVar2].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar2].layout.unk_318 = 1;
        }
        iVar2 = UiMgr_FindLayout(0xed);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
          pUVar1[iVar2].layout.animState = 0;
        }
        else {
          pUVar1[iVar2].layout.animState = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
    }
  }
  MenuWnd_DrawLabel(0xea,0x14,0x3c,piVar8[9] + 1,0x14);
  ScrCareer_Draw_NoData(param_1);
  iVar2 = piVar8[10];
  if (piVar8[9] != iVar2) {
    if (piVar8[iVar2 * 3 + 0x11] != -1) {
      if (piVar8[iVar2 * 3 + 0x12] == 0) {
        iVar2 = UiMgr_FindLayout(0xea);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0xd,8);
        iVar2 = piVar8[10];
      }
      else {
        iVar2 = UiMgr_FindLayout(0xea);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar2].layout,0xd,8);
        iVar2 = piVar8[10];
      }
      uVar7 = MsgId_RivalNickname(piVar8[iVar2 * 3 + 0x10]);
      MenuWnd_DrawText(0xea,0x1c,uVar7);
      uVar7 = MsgId_RivalName(piVar8[piVar8[10] * 3 + 0x10]);
      MenuWnd_DrawText(0xea,0x1d,uVar7);
      uVar7 = RivalDb_Get((short)piVar8[piVar8[10] * 3 + 0x10]);
      uVar3 = RivalRec_GetType(uVar7);
      MenuWnd_DrawText(0xea,0x1e,(uVar3 & 0xff) + 0x67);
      iVar2 = piVar8[10];
      goto LAB_00233374;
    }
    iVar2 = UiMgr_FindLayout(0xea);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0xd,8);
    MenuWnd_DrawText(0xea,0x1c,0x5c);
    MenuWnd_DrawText(0xea,0x1d,0x5c);
    MenuWnd_DrawText(0xea,0x1e,0x5b);
  }
  iVar2 = piVar8[10];
LAB_00233374:
  if (piVar8[iVar2 * 3 + 0x11] == -1) {
    iVar2 = UiMgr_FindLayout(0xea);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x13,9,7);
    if (piVar8[9] == piVar8[10]) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      lVar5 = UiLayout_UpdateAnimById(0xed,0);
      if (lVar5 == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
    }
    MenuWnd_DrawText(0xed,0x10,0x280);
    UiLayout_UpdateAnimById(0xed,2);
    iVar2 = UiMgr_FindLayout(0xed);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  }
  else {
    UiLayout_UpdateAnimById(0xea,6);
  }
  iVar2 = UiMgr_FindLayout(0xea);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar2 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  if (piVar8[piVar8[10] * 3 + 0x11] == -1) {
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
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar2 = *(int *)(iVar6 + 0x14);
  *(undefined4 *)(iVar6 + 0x14) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar6 + 8);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x2a1);
    iVar2 = UiMgr_FindLayout(0xe9);
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
    uVar3 = UiRes_GetLayoutData(0x2a2);
    iVar2 = UiMgr_FindLayout(0xe9);
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
    uVar3 = UiRes_GetLayoutData(0x2a3);
    iVar2 = UiMgr_FindLayout(0xe9);
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
    uVar3 = UiRes_GetLayoutData(0x2a4);
    iVar2 = UiMgr_FindLayout(0xe9);
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
    uVar3 = UiRes_GetLayoutData(0x2a5);
    iVar2 = UiMgr_FindLayout(0xe9);
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
    uVar3 = UiRes_GetLayoutData(0x2a6);
    iVar2 = UiMgr_FindLayout(0xe9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    Menu_ClearSlot(0);
    iVar2 = *(int *)(iVar6 + 8);
  }
  if (iVar2 == 1) {
    lVar4 = UiLayout_UpdateAnimById(0xe9,0);
    if (lVar4 == 0) {
      *(undefined4 *)(iVar6 + 0x10) = 0;
    }
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xe9,0);
    lVar5 = UiLayout_UpdateAnimById(0xe9,2);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(iVar6 + 0x10) = 0;
    }
  }
  if (*(int *)(iVar6 + 0x18) != 0) {
    if (*(int *)(iVar6 + 8) == 1) {
      lVar4 = UiLayout_UpdateAnimById(0xe9);
      if (lVar4 == 0) {
        *(undefined4 *)(iVar6 + 0x18) = 0;
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xe9);
      lVar5 = UiLayout_UpdateAnimById(0xe9,3);
      if (lVar4 == 0 && lVar5 == 0) {
        *(undefined4 *)(iVar6 + 0x18) = 0;
      }
    }
  }
  if (*(char *)(iVar6 + 0x2c) == '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState
                (0xe9,*(undefined4 *)
                       (&DAT_0032b220 +
                       (((*(int *)(iVar6 + 0x24) - *(int *)(iVar6 + 0x20)) + 0x14) % 0x14) * 4),0,0)
      ;
    }
  }
  else {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    if (*(char *)(iVar6 + 0x2c) == '\x01') {
      lVar4 = UiLayout_UpdateAnimById(0xe9,5);
      if (lVar4 == 0) {
        *(undefined1 *)(iVar6 + 0x2c) = 0;
        iVar2 = UiMgr_FindLayout(0xe9);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
        }
        Menu_ClearSlot(0);
        iVar2 = *(int *)(iVar6 + 0x24);
        goto LAB_0023371c;
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xe9,4);
      if (lVar4 == 0) {
        *(undefined1 *)(iVar6 + 0x2c) = 0;
        iVar2 = UiMgr_FindLayout(0xe9);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x35c = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x36c == 0) {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  iVar2 = *(int *)(iVar6 + 0x24);
LAB_0023371c:
  MenuWnd_DrawLabel(0xe9,0x6d,0x3c,iVar2 + 1,0x14);
  ScrCareer_Draw_NoData_17e0(param_1);
  MenuNum_CountUp_LoversInfo(0xe9,3,4,0xf8,0x14,9,*(undefined4 *)(iVar6 + 0x20));
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar2 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00233b30  size 0x58
/* menu page 16 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage16_Exit(void)

{
  int iVar1;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar1].layout,0x25,8);
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00233b90  size 0x10c
/* menu page 16 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage16_Update(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar2 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x25,8);
  UiLayout_UpdateAnimById(0xe8,0);
  iVar2 = UiMgr_FindLayout(0xe8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
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
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x2a0);
  iVar3 = UiMgr_FindLayout(0xe8);
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

// 0x00233d40  size 0x320
void MenuNum_CountUp_PlayerStatus
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,ulong param_5,
               ulong param_6,int param_7)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (param_6 < param_5) {
    fVar2 = (float)((int)(param_7 * param_4) / (int)param_5 + 0x10);
    uVar1 = (int)(param_4 * (int)param_6) / (int)param_5;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    fVar5 = (float)uVar1;
    fVar4 = fVar2 + fVar5;
    if ((float)(param_4 + 0x10) < fVar4) {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,param_3,8);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetNumber(&g_UiMgr->slots[iVar3].layout,param_3,2,0x10);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat((fVar4 - (float)(param_4 + 0x10)) / 16.0,&g_UiMgr->slots[iVar3].layout,
                          param_3,6);
      fVar5 = (float)(param_4 + 0x10) - fVar2;
    }
    else {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,param_3,8);
    }
  }
  else {
    fVar2 = 16.0;
    fVar5 = (float)param_4;
  }
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar2,&g_UiMgr->slots[iVar3].layout,param_2,2);
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar5 / 16.0,&g_UiMgr->slots[iVar3].layout,param_2,6);
  return;
}

