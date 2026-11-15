// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00220000 - 0x00224000
#include "ghidra_types.h"

// 0x00220130  size 0xbb4
void ScrCareer_Draw_SelectBbsThread(int *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  UiLayout *pUVar7;
  undefined4 *puVar8;
  UiLayout *pUVar9;
  undefined4 *puVar10;
  
  iVar2 = UiMgr_FindLayout(0xa9);
  pUVar9 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xab);
  iVar2 = param_1[7];
  pUVar1 = g_UiMgr->slots;
  param_1[7] = 0;
  pUVar7 = &pUVar1[iVar3].layout;
  if (iVar2 == 0) {
    iVar2 = param_1[2];
  }
  else {
    uVar4 = UiRes_GetLayoutData(0xdc);
    iVar2 = UiMgr_FindLayout(0xa9);
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
    uVar4 = UiRes_GetLayoutData(0xdd);
    iVar2 = UiMgr_FindLayout(0xa9);
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
    uVar4 = UiRes_GetLayoutData(0xde);
    iVar2 = UiMgr_FindLayout(0xa9);
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
    uVar4 = UiRes_GetLayoutData(0xda);
    iVar2 = UiMgr_FindLayout(0xa9);
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
    uVar4 = UiRes_GetLayoutData(0xdb);
    iVar2 = UiMgr_FindLayout(0xa9);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar4 = UiRes_GetLayoutData(0x179);
    iVar2 = UiMgr_FindLayout(0xa9);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    uVar4 = UiRes_GetLayoutData(0x17a);
    iVar2 = UiMgr_FindLayout(0xa9);
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
    uVar4 = UiRes_GetLayoutData(0x17b);
    iVar2 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a0 = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    uVar4 = UiRes_GetLayoutData(0x17c);
    iVar2 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b4 = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    uVar4 = UiRes_GetLayoutData(0x17d);
    iVar2 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3c8 = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3d0 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 1;
    uVar4 = UiRes_GetLayoutData(0x17e);
    iVar2 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3d8 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3e4 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3d4 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3e4 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3e0 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3e0 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3d4 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3e4 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3e0 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3e0 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3dc = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3e4 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3e0 = 1;
    uVar4 = UiRes_GetLayoutData(0x17f);
    iVar2 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ec = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3f8 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3e8 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3f8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3f4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3f4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3e8 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3f8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3f4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3f4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3f0 = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3f8 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3f4 = 1;
    uVar4 = UiRes_GetLayoutData(0x180);
    iVar2 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x400 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x40c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3fc = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x40c == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x408 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x408 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3fc = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x40c == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x408 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x408 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x404 = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x40c = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x408 = 1;
    uVar4 = UiRes_GetLayoutData(0xd8);
    iVar2 = UiMgr_FindLayout(0xaa);
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
    uVar4 = UiRes_GetLayoutData(0xd9);
    iVar2 = UiMgr_FindLayout(0xaa);
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
    iVar3 = 0;
    pUVar1[iVar2].layout.animState = 1;
    puVar8 = &DAT_0032a470;
    do {
      UiElem_SetPropFloat(0,pUVar7,*puVar8,8);
      iVar3 = iVar3 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar3 < 7);
    UiElem_SetPropFloat(0,pUVar7,DAT_0032a48c,8);
    Menu_ClearSlot(0);
    iVar2 = param_1[2];
  }
  if (iVar2 == 1) {
    lVar5 = UiLayout_UpdateAnimById(0xa9,0);
    if (lVar5 == 0) {
      param_1[6] = 0;
    }
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0xa9,0);
    lVar6 = UiLayout_UpdateAnimById(0xaa,0);
    if (lVar5 == 0 && lVar6 == 0) {
      param_1[6] = 0;
    }
  }
  if (param_1[8] != 0) {
    if (param_1[4] == 1) {
      lVar5 = UiLayout_UpdateAnimById(0xa9);
      if (lVar5 == 0) {
        param_1[8] = 0;
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0xa9);
      lVar6 = UiLayout_UpdateAnimById(0xaa,1);
      if (lVar5 == 0 && lVar6 == 0) {
        param_1[8] = 0;
      }
    }
    MenuWnd_SetItemVisible(0);
  }
  MenuWnd_SetItemState(0xa9,*(undefined4 *)(&DAT_0032a3b0 + *param_1 * 4),0,0);
  iVar3 = 0;
  iVar2 = Msg_ProfileStat(1);
  if (0 < iVar2 + 2) {
    puVar10 = &DAT_0032a410;
    puVar8 = &DAT_0032a3e0;
    do {
      MenuWnd_DrawText(0xa9,*puVar8,*puVar10);
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
      iVar3 = iVar3 + 1;
      iVar2 = Msg_ProfileStat(1);
    } while (iVar3 < iVar2 + 2);
  }
  iVar2 = Msg_ProfileStat(1);
  iVar2 = iVar2 + 2;
  if (iVar2 < 9) {
    puVar10 = &DAT_0032a410 + iVar2;
    puVar8 = &DAT_0032a3e0 + iVar2;
    do {
      MenuWnd_DrawTextId(0xa9,*puVar8,3,*puVar10);
      iVar2 = iVar2 + 1;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar2 < 9);
  }
  MenuWnd_DrawText(0xaa,1,0x433);
  MenuWnd_DrawText(7,0x2e,0x43b);
  if ((param_1[4] == param_1[3]) && (g_MenuMgr->curScreen == g_MenuMgr->nextScreen)) {
    iVar3 = 0;
    iVar2 = Msg_ProfileStat(1);
    if (0 < iVar2 + 2) {
      puVar8 = &DAT_0032a440;
      do {
        UiLayout_UpdateAnimById(0xa9,iVar3 + 4);
        lVar5 = Career_SetAllFlags(param_1[0x153e],iVar3);
        if (lVar5 == 0) {
          UiElem_SetPropFloat(0,pUVar9,*puVar8,8);
        }
        else {
          MenuWnd_DrawLabel(0xa9,*puVar8,0x438,5);
        }
        puVar8 = puVar8 + 1;
        iVar3 = iVar3 + 1;
        iVar2 = Msg_ProfileStat(1);
      } while (iVar3 < iVar2 + 2);
    }
    iVar2 = Msg_ProfileStat(1);
    iVar2 = iVar2 + 2;
    if (iVar2 < 9) {
      puVar8 = &DAT_0032a440 + iVar2;
      do {
        UiElem_SetPropFloat(0,pUVar9,*puVar8,8);
        iVar2 = iVar2 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar2 < 9);
    }
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xa9);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x00220cf0  size 0x14
/* menu page 5 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage05_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00220d10  size 0x260
/* menu page 5 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage05_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar3 = (int)param_1;
  MenuWnd_SetTitle(*(undefined4 *)(&DAT_0032a390 + *(int *)(iVar3 + 0xc) * 4),0xffffffffffffffff);
  (*(code *)(&PTR_ScrCareer_Draw_SelectBbsThread_0032a370)[*(int *)(iVar3 + 0xc)])(param_1);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x23,8);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x24,8);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x25,8);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x26,8);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x27,8);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x29,8);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x28,8);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x22,8);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = Menu_IsInputIdle(iVar3 + 8), lVar2 == 1)) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x00220f70  size 0x8
/* menu page 5 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage05_Enter(void)

{
  return;
}

// 0x00220f80  size 0xeb4
void MenuScr_Draw_Information(int *param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  UiLayout *pUVar10;
  undefined1 uStack_9b;
  undefined1 uStack_94;
  undefined1 uStack_8d;
  undefined1 uStack_86;
  undefined2 uStack_80;
  undefined1 uStack_73;
  undefined1 uStack_6c;
  undefined1 uStack_65;
  undefined1 uStack_5e;
  undefined2 uStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_44;
  undefined1 uStack_3d;
  undefined1 uStack_36;
  undefined1 uStack_23;
  undefined1 uStack_1c;
  undefined1 uStack_15;
  undefined1 uStack_e;
  
  iVar3 = UiMgr_FindLayout(0xa8);
  iVar9 = param_1[6];
  pUVar2 = g_UiMgr->slots;
  param_1[6] = 0;
  pUVar10 = &pUVar2[iVar3].layout;
  if (iVar9 == 0) {
    iVar9 = param_1[0x15];
  }
  else {
    uVar4 = UiRes_GetLayoutData(0x90);
    iVar9 = UiMgr_FindLayout(0xa6);
    pUVar2 = g_UiMgr->slots;
    if (*(int *)&pUVar2[iVar9].layout.field_0x31c == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar9].layout.field_0x31c == 0) {
        pUVar2[iVar9].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar9].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar9].layout.field_0x31c == 0) {
        pUVar2[iVar9].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar9].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x314 = 1;
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x31c = uVar4;
      pUVar2[iVar9].layout.unk_318 = 1;
    }
    uVar4 = UiRes_GetLayoutData(0xe9);
    iVar9 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x31c == 0) {
      pUVar2[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar9].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x31c == 0) {
      pUVar2[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar9].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x31c = uVar4;
    pUVar2[iVar9].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0xea);
    iVar9 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x330 == 0) {
      pUVar2[iVar9].layout.animState = 0;
    }
    else {
      pUVar2[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x330 == 0) {
      pUVar2[iVar9].layout.animState = 0;
    }
    else {
      pUVar2[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x330 = uVar4;
    pUVar2[iVar9].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0xeb);
    iVar9 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0xe7);
    iVar9 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0xe8);
    iVar9 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x368 = 1;
    uVar4 = UiRes_GetLayoutData(0x191);
    iVar9 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x380 = uVar4;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x37c = 1;
    uVar4 = UiRes_GetLayoutData(0x192);
    iVar9 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x38c = 1;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x394 = uVar4;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x390 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xa8,0x36e978,2,1);
    UiElem_SetPropFloat(0,pUVar10,0x1d,8);
    UiElem_SetPropFloat(0,pUVar10,0x1f,8);
    iVar9 = param_1[0x15];
  }
  if (iVar9 < 3) {
    MenuWnd_DrawCursor(0);
  }
  else {
    MenuWnd_DrawCursor(1);
    if (*param_1 < 1) {
      UiElem_SetPropFloat(0,pUVar10,0x1d,8);
      iVar9 = param_1[0x15];
    }
    else {
      UiElem_SetPropFloat(0x3f800000,pUVar10,0x1d,8);
      iVar9 = param_1[0x15];
    }
    if (*param_1 < iVar9 + -3) {
      UiElem_SetPropFloat(0x3f800000,pUVar10,0x1f,8);
    }
    else {
      UiElem_SetPropFloat(0,pUVar10,0x1f,8);
    }
  }
  lVar5 = UiLayout_UpdateAnimById(0xa8,0);
  if (lVar5 == 0) {
    param_1[5] = 0;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
  }
  if ((param_1[7] != 0) && (lVar5 = UiLayout_UpdateAnimById(0xa8), lVar5 == 0)) {
    param_1[7] = 0;
  }
  MenuWnd_DrawText(0xa8,0x20,0x432);
  if (param_1[0x15] < 3) {
    iVar9 = 0;
    if (0 < param_1[0x15]) {
      puVar8 = &DAT_0032a7c0;
      puVar7 = &DAT_0032a7d0;
      puVar6 = &DAT_0032a7e0;
      do {
        MenuWnd_DrawText(0xa8,*puVar8,param_1[*param_1 + iVar9 + 0x16] + 0xded);
        MenuWnd_DrawLabel(0xa8,*puVar7,0x442,(param_1[0x15] - *param_1) - iVar9);
        iVar3 = param_1[0xde] + param_1[*param_1 + iVar9 + 0x16] * 0xc;
        uStack_e = (undefined1)*(undefined2 *)(iVar3 + 0x8b88);
        uStack_15 = (undefined1)((ushort)*(undefined2 *)(iVar3 + 0x8b88) >> 8);
        uStack_1c = (undefined1)*(undefined2 *)(iVar3 + 0x8b8a);
        uStack_23 = (undefined1)((ushort)*(undefined2 *)(iVar3 + 0x8b8a) >> 8);
        MenuWnd_DrawLabel(0xa8,*puVar6,0x443,*(undefined2 *)(iVar3 + 0x8b86),uStack_e,uStack_15,
                          uStack_1c,uStack_23);
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar9 < param_1[0x15]);
    }
  }
  else {
    iVar9 = 0;
    puVar8 = &DAT_0032a7c0;
    puVar7 = &DAT_0032a7d0;
    puVar6 = &DAT_0032a7e0;
    do {
      MenuWnd_DrawText(0xa8,*puVar8,param_1[*param_1 + iVar9 + 0x16] + 0xded);
      MenuWnd_DrawLabel(0xa8,*puVar7,0x442,(param_1[0x15] - *param_1) - iVar9);
      iVar3 = param_1[0xde] + param_1[*param_1 + iVar9 + 0x16] * 0xc;
      uStack_36 = (undefined1)*(undefined2 *)(iVar3 + 0x8b88);
      uStack_3d = (undefined1)((ushort)*(undefined2 *)(iVar3 + 0x8b88) >> 8);
      uStack_44 = (undefined1)*(undefined2 *)(iVar3 + 0x8b8a);
      uStack_4b = (undefined1)((ushort)*(undefined2 *)(iVar3 + 0x8b8a) >> 8);
      MenuWnd_DrawLabel(0xa8,*puVar6,0x443,*(undefined2 *)(iVar3 + 0x8b86),uStack_36,uStack_3d,
                        uStack_44,uStack_4b);
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar9 < 3);
  }
  if (param_1[0xdf] == 2) {
    MenuWnd_DrawText(0xa8,DAT_0032a7cc,param_1[*param_1 + 0x19] + 0xded);
    MenuWnd_DrawLabel(0xa8,DAT_0032a7dc,0x442,(param_1[0x15] - *param_1) + -3);
    iVar9 = param_1[0xde] + param_1[*param_1 + 0x19] * 0xc;
    uVar4 = *(undefined4 *)(iVar9 + 0x8b86);
    uVar1 = *(undefined2 *)(iVar9 + 0x8b8a);
    uStack_65 = (undefined1)((uint)uVar4 >> 0x18);
    uStack_5e = (undefined1)((uint)uVar4 >> 0x10);
    uStack_58 = (undefined2)uVar4;
    uStack_6c = (undefined1)uVar1;
    uStack_73 = (undefined1)((ushort)uVar1 >> 8);
    MenuWnd_DrawLabel(0xa8,DAT_0032a7ec,0x443,uStack_58,uStack_5e,uStack_65,uStack_6c,uStack_73);
    iVar9 = param_1[0xdf];
  }
  else {
    iVar9 = param_1[0xdf];
  }
  if (iVar9 == 1) {
    MenuWnd_DrawText(0xa8,DAT_0032a7cc,param_1[*param_1 + 0x15] + 0xded);
    MenuWnd_DrawLabel(0xa8,DAT_0032a7dc,0x442,(param_1[0x15] - *param_1) + 1);
    iVar9 = param_1[0xde] + param_1[*param_1 + 0x15] * 0xc;
    uVar4 = *(undefined4 *)(iVar9 + 0x8b86);
    uVar1 = *(undefined2 *)(iVar9 + 0x8b8a);
    uStack_8d = (undefined1)((uint)uVar4 >> 0x18);
    uStack_86 = (undefined1)((uint)uVar4 >> 0x10);
    uStack_80 = (undefined2)uVar4;
    uStack_94 = (undefined1)uVar1;
    uStack_9b = (undefined1)((ushort)uVar1 >> 8);
    MenuWnd_DrawLabel(0xa8,DAT_0032a7ec,0x443,uStack_80,uStack_86,uStack_8d,uStack_94,uStack_9b);
    iVar9 = param_1[0xdf];
  }
  else {
    iVar9 = param_1[0xdf];
  }
  if ((iVar9 == 1) && (lVar5 = UiLayout_UpdateAnimById(0xa8,2), lVar5 == 0)) {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    param_1[0xdf] = 0;
    uVar4 = UiRes_GetLayoutData(0xeb);
    iVar9 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 1;
  }
  if ((param_1[0xdf] == 2) && (lVar5 = UiLayout_UpdateAnimById(0xa8,3), lVar5 == 0)) {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    param_1[0xdf] = 0;
    uVar4 = UiRes_GetLayoutData(0xe7);
    iVar9 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 1;
  }
  if (param_1[0x15] < 3) {
    UiElem_SetPropFloat(0x41700000,pUVar10,3,6);
  }
  else {
    UiElem_SetPropFloat((3.0 / (float)param_1[0x15]) * 15.0,pUVar10,3,6);
    UiElem_SetPropFloat((240.0 / (float)param_1[0x15]) * (float)*param_1 + 15.0,pUVar10,3,2);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  if (((param_1[0xdf] == 0) && (param_1[7] == 0)) && (param_1[5] == 0)) {
    UiLayout_UpdateAnimById(0xa8,4);
    UiLayout_UpdateAnimById(0xa8,5);
    UiLayout_UpdateAnimById(0xa8,6);
    iVar9 = *(int *)(param_1[*param_1 + 0x16] * 0xc + param_1[0xde] + 0x8b80);
    iVar3 = Profile_GetDay();
    if (iVar3 - iVar9 < 1) {
      iVar9 = param_1[0x15];
    }
    else {
      iVar9 = UiMgr_FindLayout(0xa8);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar9].layout,0x1c,8);
      iVar9 = param_1[0x15];
    }
    if ((*param_1 < iVar9 + -1) &&
       (iVar9 = *(int *)(param_1[*param_1 + 0x17] * 0xc + param_1[0xde] + 0x8b80),
       iVar3 = Profile_GetDay(), 0 < iVar3 - iVar9)) {
      iVar9 = UiMgr_FindLayout(0xa8);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar9].layout,0x1b,8);
      iVar9 = param_1[0x15];
    }
    else {
      iVar9 = param_1[0x15];
    }
    if ((*param_1 < iVar9 + -2) &&
       (iVar9 = *(int *)(param_1[*param_1 + 0x18] * 0xc + param_1[0xde] + 0x8b80),
       iVar3 = Profile_GetDay(), 0 < iVar3 - iVar9)) {
      iVar9 = UiMgr_FindLayout(0xa8);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar9].layout,0x1a,8);
    }
  }
  iVar9 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0xa8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar9].layout);
  return;
}

// 0x00221e40  size 0x14
/* menu page 6 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage06_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00221e60  size 0x168
/* menu page 6 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage06_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar3 = (int)param_1;
  MenuWnd_SetTitle(*(undefined4 *)(*(int *)(iVar3 + 8) * 4 + 0x36e974),0xffffffffffffffff);
  (**(code **)(*(int *)(iVar3 + 8) * 4 + 0x36e970))(param_1);
  if ((g_MenuMgr->flags & 4) == 0) {
    iVar1 = UiMgr_FindLayout(0xa8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x1c,8);
    iVar1 = UiMgr_FindLayout(0xa8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x1b,8);
    iVar1 = UiMgr_FindLayout(0xa8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x1a,8);
    lVar2 = Menu_IsInputIdle(iVar3 + 4);
    if (lVar2 == 1) {
      if ((g_MenuMgr->flags & 1) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
      }
    }
  }
  return;
}

// 0x00221fd0  size 0x8
/* menu page 6 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage06_Enter(int param_1)

{
  *(undefined4 *)(param_1 + 0x37c) = 0;
  return;
}

// 0x00221fe0  size 0x65c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Information(int *param_1)

{
  UiLayoutSlot *pUVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  
  iVar3 = UiMgr_FindLayout(0xa7);
  iVar4 = param_1[6];
  pUVar1 = g_UiMgr->slots;
  param_1[6] = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x91);
    iVar4 = UiMgr_FindLayout(0xa7);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar5;
    pUVar2[iVar4].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x92);
    iVar4 = UiMgr_FindLayout(0xa7);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar5;
    pUVar2[iVar4].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x93);
    iVar4 = UiMgr_FindLayout(0xa7);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0x94);
    iVar4 = UiMgr_FindLayout(0xa7);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
    uVar5 = UiRes_GetLayoutData(0x95);
    iVar4 = UiMgr_FindLayout(0xa7);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 1;
    uVar5 = UiRes_GetLayoutData(0x107);
    iVar4 = UiMgr_FindLayout(0xa7);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x380 = uVar5;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 1;
    uVar5 = UiRes_GetLayoutData(0x108);
    iVar4 = UiMgr_FindLayout(0xa7);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x38c = 1;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x394 = uVar5;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 1;
    Menu_ClearSlot(0);
    iVar4 = 0;
    puVar9 = &DAT_0032a7f0;
    do {
      UiElem_SetPropFloat(0,&pUVar1[iVar3].layout,*puVar9,8);
      iVar4 = iVar4 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar4 < 3);
  }
  lVar6 = UiLayout_UpdateAnimById(0xa7,0);
  lVar7 = UiLayout_UpdateAnimById(0xa7,1);
  if (lVar6 == 0 && lVar7 == 0) {
    param_1[5] = 0;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
  }
  if (param_1[7] != 0) {
    lVar6 = UiLayout_UpdateAnimById(0xa7,2);
    lVar7 = UiLayout_UpdateAnimById(0xa7,3);
    if (lVar6 == 0 && lVar7 == 0) {
      param_1[7] = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0xa7,*(undefined4 *)(&DAT_0032a800 + *param_1 * 4),1,0);
  }
  MenuWnd_DrawText(0xa7,0x26,0x432);
  MenuWnd_DrawText(0xa7,0x27,0x433);
  MenuWnd_DrawText(0xa7,0x28,0x434);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032a810 + *param_1 * 4));
  UiLayout_UpdateAnimById(0xa6,0);
  uVar8 = Profile_Get(0);
  if (g_MenuMgr->curScreen == g_MenuMgr->nextScreen) {
    lVar6 = Career_CountFlags(uVar8);
    if (lVar6 != 0) {
      UiLayout_UpdateAnimById(0xa7,4);
      MenuWnd_DrawLabel(0xa7,0x29,0x438,5);
    }
    lVar6 = Career_SetAllFlags(uVar8,0xffffffffffffffff);
    if (lVar6 != 0) {
      UiLayout_UpdateAnimById(0xa7,5);
      MenuWnd_DrawLabel(0xa7,0x2a,0x438,5);
    }
    lVar6 = Career_CountDefeatedTeams(uVar8);
    if (lVar6 != 0) {
      UiLayout_UpdateAnimById(0xa7,6);
      MenuWnd_DrawLabel(0xa7,0x2b,0x438,5);
    }
  }
  iVar4 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xa7);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x00222640  size 0x14
/* menu page 8 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage08_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00222660  size 0xd8
/* menu page 8 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage08_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar2 = (int)param_1;
  MenuWnd_SetTitle(*(undefined4 *)(&DAT_0036e984 + *(int *)(iVar2 + 8) * 4),0xffffffffffffffff);
  (*(code *)(&PTR_ScrCareer_Draw_Information_0036e980)[*(int *)(iVar2 + 8)])(param_1);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar1 = Menu_IsInputIdle(iVar2 + 4), lVar1 == 1)) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x00222740  size 0x408
/* menu page 8 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage08_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x90);
  iVar3 = UiMgr_FindLayout(0xa6);
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
  uVar2 = UiRes_GetLayoutData(0x91);
  iVar3 = UiMgr_FindLayout(0xa7);
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
  uVar2 = UiRes_GetLayoutData(0x92);
  iVar3 = UiMgr_FindLayout(0xa7);
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
  uVar2 = UiRes_GetLayoutData(0x93);
  iVar3 = UiMgr_FindLayout(0xa7);
  pUVar1 = g_UiMgr->slots;
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
  uVar2 = UiRes_GetLayoutData(0x94);
  iVar3 = UiMgr_FindLayout(0xa7);
  pUVar1 = g_UiMgr->slots;
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
  uVar2 = UiRes_GetLayoutData(0x95);
  iVar3 = UiMgr_FindLayout(0xa7);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  uVar2 = UiRes_GetLayoutData(0x107);
  iVar3 = UiMgr_FindLayout(0xa7);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x374 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x378 = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = uVar2;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
  uVar2 = UiRes_GetLayoutData(0x108);
  iVar3 = UiMgr_FindLayout(0xa7);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x388 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x38c = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = uVar2;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
  return;
}

// 0x00222b50  size 0x14c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_MenuWnd_DrawMailList(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar2 = (int *)&s_MenuWnd_DrawMailList_1;
  piVar3 = param_1;
  do {
    if ((uint)piVar3[4] < 0xb) {
                    /* WARNING: Switch is manually overridden */
      switch(piVar3[4]) {
      case 0:
        *piVar2 = -2;
        break;
      case 1:
        *piVar2 = -3;
        break;
      case 2:
        *piVar2 = piVar3[5] + 0xa8c;
        break;
      case 3:
        *piVar2 = piVar3[5] + 0x6ec;
        break;
      default:
        *piVar2 = piVar3[5];
        break;
      case 10:
        goto switchD_00222b94_caseD_a;
      }
    }
    else {
switchD_00222b94_caseD_a:
      *piVar2 = -3;
    }
    piVar3 = piVar3 + 2;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (2 < iVar1) {
      if (_s_MenuWnd_DrawMailList_1 == -3) {
        MenuWnd_DrawText(0xb1,7,*param_1 + 0x1d0c);
      }
      else if (_s_MenuWnd_DrawMailList_2 == -3) {
        MenuWnd_DrawLabel(0xb1,7,*param_1 + 0x1d0c);
      }
      else if (_s_MenuWnd_DrawMailList_3 == -3) {
        MenuWnd_DrawLabel(0xb1,7,*param_1 + 0x1d0c);
      }
      else {
        MenuWnd_DrawLabel(0xb1,7,*param_1 + 0x1d0c);
      }
      return;
    }
  } while( true );
}

// 0x00222cb0  size 0xa80
void ScrCareer_Draw_Mail(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  UiLayout *pUVar6;
  UiLayout *pUVar7;
  UiLayout *pUVar8;
  
  iVar2 = UiMgr_FindLayout(0xb2);
  pUVar8 = &g_UiMgr->slots[iVar2].layout;
  iVar2 = UiMgr_FindLayout(0xb0);
  pUVar7 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xb1);
  iVar2 = *(int *)(param_1 + 0x20);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pUVar6 = &pUVar1[iVar3].layout;
  if (iVar2 != 0) {
    uVar4 = UiRes_GetLayoutData(0xf7);
    iVar2 = UiMgr_FindLayout(0xb0);
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
    uVar4 = UiRes_GetLayoutData(0xf9);
    iVar2 = UiMgr_FindLayout(0xb0);
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
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,pUVar7,0x1c,8);
    UiElem_SetPropFloat(0,pUVar7,0x1d,8);
    UiElem_SetPropFloat(0,pUVar6,8,8);
    UiElem_SetPropFloat(0,pUVar6,9,8);
    UiElem_SetPropFloat(0,pUVar7,0x17,8);
    UiElem_SetPropFloat(0,pUVar8,9,9);
  }
  lVar5 = UiLayout_UpdateAnimById(0xb2,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if ((*(int *)(param_1 + 0x24) != 0) && (lVar5 = UiLayout_UpdateAnimById(0xb2), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  MenuWnd_DrawText(0xae,1,0x434);
  if (*(int *)(param_1 + 0x674) == 1) {
    maybe_MenuWnd_DrawMailList
              (*(int *)(param_1 + 0x680) +
               *(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 + 0x9994);
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                     *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
            *(int *)(param_1 + 0x680);
    iVar2 = *(int *)(iVar3 + 0x99a0);
    if (iVar2 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar3 + 0x9994) + 0x1b9a);
      iVar2 = *(int *)(param_1 + 0x674);
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar2 + 0xa8c);
      iVar2 = *(int *)(param_1 + 0x674);
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(*(int *)(*(int *)(iVar2 * 4 + param_1 + 0x678) * 4 +
                                              iVar2 * 800 + param_1 + 0x34) * 0x28 +
                                     *(int *)(param_1 + 0x680) + 0x9994) + 0x1a28);
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                              *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                     *(int *)(param_1 + 0x680) + 0x9998);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar2,iVar2 % 7 + 0x44a);
  }
  else {
    if (*(int *)(param_1 + 0x674) != 0) {
      iVar2 = *(int *)(param_1 + 0x674);
      goto LAB_002230cc;
    }
    maybe_MenuWnd_DrawMailList
              (*(int *)(param_1 + 0x680) +
               *(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) * 0x28 + 0xb8d4);
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                     *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
            *(int *)(param_1 + 0x680);
    iVar2 = *(int *)(iVar3 + 0xb8e0);
    if (iVar2 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar3 + 0xb8d4) + 0x1b9a);
      iVar2 = *(int *)(param_1 + 0x674);
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar2 + 0xa8c);
      iVar2 = *(int *)(param_1 + 0x674);
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(*(int *)(*(int *)(iVar2 * 4 + param_1 + 0x678) * 4 +
                                              iVar2 * 800 + param_1 + 0x34) * 0x28 +
                                     *(int *)(param_1 + 0x680) + 0xb8d4) + 0x1a28);
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                              *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                     *(int *)(param_1 + 0x680) + 0xb8d8);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar2,iVar2 % 7 + 0x44a);
  }
  iVar2 = *(int *)(param_1 + 0x674);
LAB_002230cc:
  lVar5 = Career_GetRivalIndex
                    (*(undefined4 *)(param_1 + 0x680),iVar2 == 0,
                     *(undefined4 *)
                      (*(int *)(iVar2 * 4 + param_1 + 0x678) * 4 + iVar2 * 800 + param_1 + 0x34));
  if (lVar5 == -1) {
    UiElem_SetPropFloat(0,pUVar6,3,8);
    iVar2 = *(int *)(param_1 + 0x674);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,pUVar6,3,8);
    iVar2 = *(int *)(param_1 + 0x674);
  }
  if (iVar2 == 1) {
    iVar2 = Rival_IsUnlocked(*(undefined4 *)
                              (*(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 +
                               *(int *)(param_1 + 0x680) + 0x9994));
    if (*(int *)(iVar2 + 0x2c) != -1) {
      iVar2 = Rival_IsUnlocked(*(undefined4 *)
                                (*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678)
                                          * 4 + *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) *
                                 0x28 + *(int *)(param_1 + 0x680) + 0x9994));
      UiElem_SetPropInt(pUVar8,10,0x16,*(undefined4 *)(&DAT_0032ad30 + *(int *)(iVar2 + 0x2c) * 4));
    }
  }
  else if ((iVar2 == 0) &&
          (iVar2 = Rival_IsUnlocked(*(undefined4 *)
                                     (*(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) *
                                      0x28 + *(int *)(param_1 + 0x680) + 0xb8d4)),
          *(int *)(iVar2 + 0x2c) != -1)) {
    iVar2 = Rival_IsUnlocked(*(undefined4 *)
                              (*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) *
                                        4 + *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28
                               + *(int *)(param_1 + 0x680) + 0xb8d4));
    UiElem_SetPropInt(pUVar8,10,0x16,*(undefined4 *)(&DAT_0032ad30 + *(int *)(iVar2 + 0x2c) * 4));
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  if (*(int *)(param_1 + 0x674) == 1) {
    iVar2 = Rival_IsUnlocked(*(undefined4 *)
                              (*(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 +
                               *(int *)(param_1 + 0x680) + 0x9994));
    if (*(int *)(iVar2 + 0x2c) != -1) {
      iVar2 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
    }
  }
  else if ((*(int *)(param_1 + 0x674) == 0) &&
          (iVar2 = Rival_IsUnlocked(*(undefined4 *)
                                     (*(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) *
                                      0x28 + *(int *)(param_1 + 0x680) + 0xb8d4)),
          *(int *)(iVar2 + 0x2c) != -1)) {
    iVar2 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  }
  return;
}

// 0x00223730  size 0x11ac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_MessageDeleted(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  UiLayout *pUVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  UiLayout *pUVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  
  iVar2 = UiMgr_FindLayout(0xaf);
  pUVar13 = &g_UiMgr->slots[iVar2].layout;
  iVar2 = UiMgr_FindLayout(0xb0);
  pUVar9 = &g_UiMgr->slots[iVar2].layout;
  UiMgr_FindLayout(0xb1);
  iVar2 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0xee);
    iVar2 = UiMgr_FindLayout(0xb0);
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
    uVar3 = UiRes_GetLayoutData(0xef);
    iVar2 = UiMgr_FindLayout(0xb0);
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
    uVar3 = UiRes_GetLayoutData(0xf2);
    iVar2 = UiMgr_FindLayout(0xaf);
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
    uVar3 = UiRes_GetLayoutData(0xf3);
    iVar2 = UiMgr_FindLayout(0xaf);
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
    uVar3 = UiRes_GetLayoutData(0xf7);
    iVar2 = UiMgr_FindLayout(0xb0);
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
    uVar3 = UiRes_GetLayoutData(0xf9);
    iVar2 = UiMgr_FindLayout(0xb0);
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
    uVar3 = UiRes_GetLayoutData(0xf4);
    iVar2 = UiMgr_FindLayout(0xaf);
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
    uVar3 = UiRes_GetLayoutData(0xf1);
    iVar2 = UiMgr_FindLayout(0xaf);
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
    Menu_ClearSlot(0);
    MenuWnd_SetHelpText(0);
    MenuWnd_DrawDialogText(0xb0,0x36e9c0,2,1);
    UiElem_SetPropFloat(0,pUVar13,0x3f,8);
    UiElem_SetPropFloat(0,pUVar13,0x41,8);
    UiElem_SetPropFloat(0,pUVar9,0x1c,8);
    UiElem_SetPropFloat(0,pUVar9,0x1d,8);
    UiElem_SetPropFloat(0,pUVar9,0x17,8);
    _s_ScrCareer_Draw_MessageDeleted_1 = 0;
    do {
      UiElem_SetPropFloat(0,pUVar13,
                          *(undefined4 *)(&DAT_0032ac40 + _s_ScrCareer_Draw_MessageDeleted_1 * 4),8)
      ;
      _s_ScrCareer_Draw_MessageDeleted_1 = _s_ScrCareer_Draw_MessageDeleted_1 + 1;
    } while (_s_ScrCareer_Draw_MessageDeleted_1 < 0xb);
  }
  lVar5 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  MenuWnd_DrawText(5,0x1c,0x43f);
  if (*(int *)(param_1 + 0x24) != 0) {
    if (lVar5 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (*(int *)(param_1 + 0x14) == 0) {
      if (lVar5 == 3) {
        lVar7 = UiLayout_UpdateAnimById(0xb2);
        lVar6 = UiLayout_UpdateAnimById(0xb0,1);
        if (lVar7 == 0 && lVar6 == 0) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
    }
    else if ((lVar5 == 3) && (lVar7 = UiLayout_UpdateAnimById(0xb2), lVar7 == 0)) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  if (lVar5 == 2) {
    if (*(int *)(param_1 + 0x674) == 1) {
      lVar5 = UiLayout_UpdateAnimById(0xb0);
      lVar7 = UiLayout_UpdateAnimById(0xaf,0);
      if (lVar5 == 0 && lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0xb0);
      lVar7 = UiLayout_UpdateAnimById(0xaf,0);
      if (lVar5 == 0 && lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
  }
  MenuWnd_DrawText(0xae,1,0x434);
  MenuWnd_DrawText(0xaf,0x43,0x441);
  MenuWnd_DrawText(0xaf,0x44,0x440);
  iVar2 = *(int *)(param_1 + 0x674) * 4 + param_1;
  if (*(int *)(iVar2 + 0x2c) < 1) {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,0);
  }
  else {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,*(int *)(iVar2 + 0x678) + 1);
  }
  MenuWnd_DrawText(0xb0,0x1a,0x449);
  iVar2 = *(int *)(param_1 + 0x674);
  iVar12 = *(int *)(iVar2 * 4 + param_1 + 0x2c);
  if (0 < iVar12) {
    if (iVar12 < 0xb) {
      iVar4 = 0;
      if (0 < iVar12) {
        iVar12 = 0;
        puVar11 = (undefined4 *)0x32acd0;
        puVar10 = (undefined4 *)0x32ac70;
        puVar14 = (undefined4 *)0x32aca0;
        do {
          uVar15 = 0;
          if (iVar2 == 1) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar12 + 0x354) * 0x28 +
                         0x999c) == '\x01') {
              uVar15 = 5;
            }
            iVar2 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar12 + 0x354) * 0x28 +
                            0x9998);
            MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar2,iVar2 % 7 + 0x44a);
            iVar8 = *(int *)(param_1 + 0x680) +
                    *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar12 + 0x34) * 0x28;
            iVar2 = *(int *)(iVar8 + 0x99a0);
            if (iVar2 == -1) {
              MenuWnd_DrawText(0xaf,*puVar10,*(int *)(iVar8 + 0x9994) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar10,iVar2 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                               *(int *)(*(int *)(param_1 + 0x680) +
                                        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar12
                                                + 0x34) * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar2 == 0) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar12 + 0x34) * 0x28 +
                         0xb8dc) == '\x01') {
              uVar15 = 5;
            }
            iVar2 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar12 + 0x34) * 0x28 +
                            0xb8d8);
            MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar2,iVar2 % 7 + 0x44a);
            iVar8 = *(int *)(param_1 + 0x680) +
                    *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar12 + 0x34) * 0x28;
            iVar2 = *(int *)(iVar8 + 0xb8e0);
            if (iVar2 == -1) {
              MenuWnd_DrawText(0xaf,*puVar10,*(int *)(iVar8 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar10,iVar2 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                               *(int *)(*(int *)(param_1 + 0x680) +
                                        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar12
                                                + 0x34) * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar2 = *(int *)(param_1 + 0x674);
          iVar4 = iVar4 + 1;
          iVar12 = iVar12 + 4;
          puVar11 = puVar11 + 1;
          puVar10 = puVar10 + 1;
          puVar14 = puVar14 + 1;
        } while (iVar4 < *(int *)(param_1 + iVar2 * 4 + 0x2c));
      }
    }
    else {
      iVar2 = 0;
      puVar11 = (undefined4 *)0x32acd0;
      puVar10 = (undefined4 *)0x32ac70;
      puVar14 = (undefined4 *)0x32aca0;
      do {
        uVar15 = 0;
        if (*(int *)(param_1 + 0x674) == 1) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar2) -
                                           *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x999c) ==
              '\x01') {
            uVar15 = 5;
          }
          iVar12 = *(int *)(*(int *)(param_1 + 0x680) +
                            *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar2) -
                                               *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar12,iVar12 % 7 + 0x44a);
          iVar12 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar4 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar12 + 0x678) + iVar2) - *(int *)(iVar12 + 4)) * 4 + 0x34) *
                  0x28;
          iVar12 = *(int *)(iVar4 + 0x99a0);
          if (iVar12 == -1) {
            MenuWnd_DrawText(0xaf,*puVar10,*(int *)(iVar4 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar10,iVar12 + 0xa8c);
          }
          iVar12 = param_1 + *(int *)(param_1 + 0x674) * 4;
          MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                             *(int *)(*(int *)(param_1 + 0x680) +
                                      *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                               ((*(int *)(iVar12 + 0x678) + iVar2) -
                                               *(int *)(iVar12 + 4)) * 4 + 0x34) * 0x28 + 0x9994) +
                             0x1a28);
        }
        else if (*(int *)(param_1 + 0x674) == 0) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar2) -
                                           *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar15 = 5;
          }
          iVar12 = *(int *)(*(int *)(param_1 + 0x680) +
                            *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar2) -
                                               *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar12,iVar12 % 7 + 0x44a);
          iVar12 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar4 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar12 + 0x678) + iVar2) - *(int *)(iVar12 + 4)) * 4 + 0x34) *
                  0x28;
          iVar12 = *(int *)(iVar4 + 0xb8e0);
          if (iVar12 == -1) {
            MenuWnd_DrawText(0xaf,*puVar10,*(int *)(iVar4 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar10,iVar12 + 0xa8c);
          }
          iVar12 = param_1 + *(int *)(param_1 + 0x674) * 4;
          MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                             *(int *)(*(int *)(param_1 + 0x680) +
                                      *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                               ((*(int *)(iVar12 + 0x678) + iVar2) -
                                               *(int *)(iVar12 + 4)) * 4 + 0x34) * 0x28 + 0xb8d4) +
                             0x1a28);
        }
        iVar2 = iVar2 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar2 < 10);
    }
  }
  uVar15 = maybe_Mail_CountMessages(*(undefined4 *)(param_1 + 0x674));
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar15);
  if (*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x2c) < 0xb) {
    iVar12 = 0;
    iVar2 = 0;
    puVar10 = &DAT_0032ad00;
    do {
      iVar4 = *(int *)(param_1 + 0x674);
      if ((iVar12 < *(int *)(param_1 + iVar4 * 4 + 0x2c)) &&
         (lVar5 = Career_GetRivalIndex
                            (*(undefined4 *)(param_1 + 0x680),iVar4 == 0,
                             *(undefined4 *)(param_1 + iVar4 * 800 + iVar2 + 0x34)), lVar5 != -1)) {
        UiElem_SetPropFloat(0x3f800000,pUVar13,*puVar10,8);
      }
      else {
        UiElem_SetPropFloat(0,pUVar13,*puVar10,8);
      }
      iVar12 = iVar12 + 1;
      iVar2 = iVar2 + 4;
      puVar10 = puVar10 + 1;
    } while (iVar12 < 0xb);
  }
  else {
    iVar2 = 0;
    puVar10 = &DAT_0032ad00;
    do {
      iVar12 = *(int *)(param_1 + 0x674);
      iVar4 = param_1 + iVar12 * 4;
      iVar8 = iVar2 + (*(int *)(iVar4 + 0x678) - *(int *)(iVar4 + 4));
      if ((iVar8 < *(int *)(iVar4 + 0x2c)) &&
         (lVar5 = Career_GetRivalIndex
                            (*(undefined4 *)(param_1 + 0x680),iVar12 == 0,
                             *(undefined4 *)(param_1 + iVar12 * 800 + iVar8 * 4 + 0x34)),
         lVar5 != -1)) {
        UiElem_SetPropFloat(0x3f800000,pUVar13,*puVar10,8);
      }
      else {
        UiElem_SetPropFloat(0,pUVar13,*puVar10,8);
      }
      iVar2 = iVar2 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar2 < 0xb);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

