// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00220000 - 0x00224000
#include "ghidra_types.h"

// 0x00220118  size 0x14
/* follows ScrCareer_Draw_Subject_d1a0; no call, branch, pointer or constant references it
   (exception landing pad or dead code) */

void ScrCareer_Draw_Subject_d1a0_Orphan1(void)

{
  return;
}

// 0x00220130  size 0xbb4
void ScrCareer_Draw_SelectBbsThread(int *param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  byte extraout_a3_lo;
  undefined8 extraout_a3;
  undefined8 uVar9;
  undefined8 extraout_a3_00;
  undefined8 extraout_a3_01;
  undefined8 extraout_a3_02;
  UiLayout *pUVar10;
  undefined4 *puVar11;
  int *piVar12;
  UiLayout *pUVar13;
  undefined4 *puVar14;
  
  iVar4 = UiMgr_FindLayout(0xa9);
  pUVar13 = &g_UiMgr->slots[iVar4].layout;
  iVar5 = UiMgr_FindLayout(0xab);
  iVar4 = param_1[7];
  pUVar1 = g_UiMgr->slots;
  param_1[7] = 0;
  pUVar10 = &pUVar1[iVar5].layout;
  if (iVar4 == 0) {
    iVar4 = param_1[2];
  }
  else {
    uVar6 = UiRes_GetLayoutData(0xdc);
    iVar4 = UiMgr_FindLayout(0xa9);
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
    pUVar1[iVar4].layout.unk_31c = uVar6;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0xdd);
    iVar4 = UiMgr_FindLayout(0xa9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar7;
    pUVar1[iVar4].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0xde);
    iVar4 = UiMgr_FindLayout(0xa9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0xda);
    iVar4 = UiMgr_FindLayout(0xa9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    uVar7 = UiRes_GetLayoutData(0xdb);
    iVar4 = UiMgr_FindLayout(0xa9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    uVar7 = UiRes_GetLayoutData(0x179);
    iVar4 = UiMgr_FindLayout(0xa9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    uVar7 = UiRes_GetLayoutData(0x17a);
    iVar4 = UiMgr_FindLayout(0xa9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    uVar7 = UiRes_GetLayoutData(0x17b);
    iVar4 = UiMgr_FindLayout(0xa9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a0 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a8 = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
    uVar7 = UiRes_GetLayoutData(0x17c);
    iVar4 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b4 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3bc = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 1;
    uVar7 = UiRes_GetLayoutData(0x17d);
    iVar4 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3c8 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3d0 = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3cc = 1;
    uVar7 = UiRes_GetLayoutData(0x17e);
    iVar4 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3d8 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3e4 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3d4 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3e4 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3e0 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3e0 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3d4 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3e4 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3e0 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3e0 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3dc = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3e4 = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3e0 = 1;
    uVar7 = UiRes_GetLayoutData(0x17f);
    iVar4 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3ec = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3f8 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3e8 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3f8 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3f4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3f4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3e8 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3f8 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3f4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3f4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3f0 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3f8 = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3f4 = 1;
    uVar7 = UiRes_GetLayoutData(0x180);
    iVar4 = UiMgr_FindLayout(0xa9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x400 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x40c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3fc = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x40c == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x408 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x408 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3fc = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x40c == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x408 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x408 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x404 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x40c = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x408 = 1;
    uVar6 = UiRes_GetLayoutData(0xd8);
    iVar4 = UiMgr_FindLayout(0xaa);
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
    pUVar1[iVar4].layout.unk_31c = uVar6;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0xd9);
    iVar4 = UiMgr_FindLayout(0xaa);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar7;
    iVar5 = 0;
    pUVar1[iVar4].layout.animState = 1;
    piVar12 = &DAT_0032a470;
    uVar9 = extraout_a3;
    do {
      UiElem_SetPropFloat(pUVar10,(long)*piVar12,8,(byte)uVar9);
      iVar5 = iVar5 + 1;
      piVar12 = piVar12 + 1;
      uVar9 = extraout_a3_00;
    } while (iVar5 < 7);
    UiElem_SetPropFloat(pUVar10,(long)DAT_0032a48c,8,(byte)extraout_a3_00);
    Menu_ClearSlot(0);
    iVar4 = param_1[2];
  }
  if (iVar4 == 1) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa9,0);
    if (!bVar2) {
      param_1[6] = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa9,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xaa,0);
    if (!bVar2 && !bVar3) {
      param_1[6] = 0;
    }
  }
  if (param_1[8] != 0) {
    if (param_1[4] == 1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa9,1);
      if (!bVar2) {
        param_1[8] = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa9,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xaa,1);
      if (!bVar2 && !bVar3) {
        param_1[8] = 0;
      }
    }
    MenuWnd_SetItemVisible(0);
  }
  MenuWnd_SetItemState(0xa9,*(undefined4 *)(&DAT_0032a3b0 + *param_1 * 4),0,0);
  iVar5 = 0;
  iVar4 = Msg_ProfileStat(1);
  if (0 < iVar4 + 2) {
    puVar14 = &DAT_0032a410;
    puVar11 = &DAT_0032a3e0;
    do {
      MenuWnd_DrawText(0xa9,*puVar11,*puVar14);
      puVar14 = puVar14 + 1;
      puVar11 = puVar11 + 1;
      iVar5 = iVar5 + 1;
      iVar4 = Msg_ProfileStat(1);
    } while (iVar5 < iVar4 + 2);
  }
  iVar4 = Msg_ProfileStat(1);
  iVar4 = iVar4 + 2;
  if (iVar4 < 9) {
    puVar14 = &DAT_0032a410 + iVar4;
    puVar11 = &DAT_0032a3e0 + iVar4;
    do {
      MenuWnd_DrawTextId(0xa9,*puVar11,3,*puVar14);
      iVar4 = iVar4 + 1;
      puVar14 = puVar14 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar4 < 9);
  }
  MenuWnd_DrawText(0xaa,1,0x433);
  MenuWnd_DrawText(7,0x2e,0x43b);
  if ((param_1[4] == param_1[3]) && (g_MenuMgr->curScreen == g_MenuMgr->nextScreen)) {
    iVar5 = 0;
    iVar4 = Msg_ProfileStat(1);
    if (0 < iVar4 + 2) {
      piVar12 = &DAT_0032a440;
      do {
        UiLayout_UpdateAnimById((UiLayout *)0xa9,(long)(iVar5 + 4));
        lVar8 = Career_SetAllFlags(param_1[0x153e],iVar5);
        if (lVar8 == 0) {
          UiElem_SetPropFloat(pUVar13,(long)*piVar12,8,extraout_a3_lo);
        }
        else {
          MenuWnd_DrawLabel(0xa9,*piVar12,0x438,5);
        }
        piVar12 = piVar12 + 1;
        iVar5 = iVar5 + 1;
        iVar4 = Msg_ProfileStat(1);
      } while (iVar5 < iVar4 + 2);
    }
    iVar4 = Msg_ProfileStat(1);
    iVar4 = iVar4 + 2;
    if (iVar4 < 9) {
      piVar12 = &DAT_0032a440 + iVar4;
      uVar9 = extraout_a3_01;
      do {
        UiElem_SetPropFloat(pUVar13,(long)*piVar12,8,(byte)uVar9);
        iVar4 = iVar4 + 1;
        piVar12 = piVar12 + 1;
        uVar9 = extraout_a3_02;
      } while (iVar4 < 9);
    }
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar4 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xa9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
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
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  int iVar3;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar3 = (int)param_1;
  MenuWnd_SetTitle(*(undefined4 *)(&DAT_0032a390 + *(int *)(iVar3 + 0xc) * 4),0xffffffffffffffff);
  (*(code *)(&PTR_ScrCareer_Draw_SelectBbsThread_0032a370)[*(int *)(iVar3 + 0xc)])(param_1);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x23,8,extraout_a3_lo);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x24,8,extraout_a3_lo_00);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x25,8,extraout_a3_lo_01);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x26,8,extraout_a3_lo_02);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x27,8,extraout_a3_lo_03);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x29,8,extraout_a3_lo_04);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x28,8,extraout_a3_lo_05);
  iVar1 = UiMgr_FindLayout(0xab);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x22,8,extraout_a3_lo_06);
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
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte bVar7;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  byte extraout_a3_lo_08;
  byte extraout_a3_lo_09;
  byte extraout_a3_lo_10;
  byte extraout_a3_lo_11;
  byte extraout_a3_lo_12;
  byte extraout_a3_lo_13;
  byte extraout_a3_lo_14;
  byte extraout_a3_lo_15;
  byte extraout_a3_lo_16;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  UiLayout *pUVar12;
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
  
  iVar4 = UiMgr_FindLayout(0xa8);
  iVar11 = param_1[6];
  pUVar2 = g_UiMgr->slots;
  param_1[6] = 0;
  pUVar12 = &pUVar2[iVar4].layout;
  if (iVar11 == 0) {
    iVar11 = param_1[0x15];
  }
  else {
    uVar5 = UiRes_GetLayoutData(0x90);
    iVar11 = UiMgr_FindLayout(0xa6);
    pUVar2 = g_UiMgr->slots;
    if (pUVar2[iVar11].layout.unk_31c == 0) {
      pUVar2[iVar11].layout.unk_310 = 0xffffffff;
      pUVar2[iVar11].layout.unk_31c = 0;
      pUVar2[iVar11].layout.unk_30c = 0;
      if (pUVar2[iVar11].layout.unk_31c == 0) {
        pUVar2[iVar11].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar11].layout.unk_318 = 1;
      }
      pUVar2[iVar11].layout.unk_30c = 0;
      if (pUVar2[iVar11].layout.unk_31c == 0) {
        pUVar2[iVar11].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar11].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x314 = 1;
      pUVar2[iVar11].layout.unk_31c = uVar5;
      pUVar2[iVar11].layout.unk_318 = 1;
    }
    uVar5 = UiRes_GetLayoutData(0xe9);
    iVar11 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar11].layout.unk_310 = 0xffffffff;
    pUVar2[iVar11].layout.unk_31c = 0;
    pUVar2[iVar11].layout.unk_30c = 0;
    if (pUVar2[iVar11].layout.unk_31c == 0) {
      pUVar2[iVar11].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar11].layout.unk_318 = 1;
    }
    pUVar2[iVar11].layout.unk_30c = 0;
    if (pUVar2[iVar11].layout.unk_31c == 0) {
      pUVar2[iVar11].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar11].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x314 = 0;
    pUVar2[iVar11].layout.unk_31c = uVar5;
    pUVar2[iVar11].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0xea);
    iVar11 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x330 == 0) {
      pUVar2[iVar11].layout.animState = 0;
    }
    else {
      pUVar2[iVar11].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x330 == 0) {
      pUVar2[iVar11].layout.animState = 0;
    }
    else {
      pUVar2[iVar11].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x330 = uVar6;
    pUVar2[iVar11].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0xeb);
    iVar11 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0xe7);
    iVar11 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0xe8);
    iVar11 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x191);
    iVar11 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x37c = 1;
    uVar6 = UiRes_GetLayoutData(0x192);
    iVar11 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x38c = 1;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x394 = uVar6;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x390 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xa8,0x36e978,2,1);
    UiElem_SetPropFloat(pUVar12,0x1d,8,extraout_a3_lo_05);
    UiElem_SetPropFloat(pUVar12,0x1f,8,extraout_a3_lo_06);
    iVar11 = param_1[0x15];
  }
  if (iVar11 < 3) {
    MenuWnd_DrawCursor(0);
  }
  else {
    MenuWnd_DrawCursor(1);
    if (*param_1 < 1) {
      UiElem_SetPropFloat(pUVar12,0x1d,8,extraout_a3_lo);
      iVar11 = param_1[0x15];
      bVar7 = extraout_a3_lo_07;
    }
    else {
      UiElem_SetPropFloat(pUVar12,0x1d,8,extraout_a3_lo);
      iVar11 = param_1[0x15];
      bVar7 = extraout_a3_lo_00;
    }
    if (*param_1 < iVar11 + -3) {
      UiElem_SetPropFloat(pUVar12,0x1f,8,bVar7);
    }
    else {
      UiElem_SetPropFloat(pUVar12,0x1f,8,bVar7);
    }
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xa8,0);
  if (!bVar3) {
    param_1[5] = 0;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
  }
  if ((param_1[7] != 0) && (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xa8,1), !bVar3)) {
    param_1[7] = 0;
  }
  MenuWnd_DrawText(0xa8,0x20,0x432);
  if (param_1[0x15] < 3) {
    iVar11 = 0;
    bVar7 = extraout_a3_lo_01;
    if (0 < param_1[0x15]) {
      puVar10 = &DAT_0032a7c0;
      puVar9 = &DAT_0032a7d0;
      puVar8 = &DAT_0032a7e0;
      do {
        MenuWnd_DrawText(0xa8,*puVar10,param_1[*param_1 + iVar11 + 0x16] + 0xded);
        MenuWnd_DrawLabel(0xa8,*puVar9,0x442,(param_1[0x15] - *param_1) - iVar11);
        iVar4 = param_1[0xde] + param_1[*param_1 + iVar11 + 0x16] * 0xc;
        uStack_e = (undefined1)*(undefined2 *)(iVar4 + 0x8b88);
        uStack_15 = (undefined1)((ushort)*(undefined2 *)(iVar4 + 0x8b88) >> 8);
        uStack_1c = (undefined1)*(undefined2 *)(iVar4 + 0x8b8a);
        uStack_23 = (undefined1)((ushort)*(undefined2 *)(iVar4 + 0x8b8a) >> 8);
        MenuWnd_DrawLabel(0xa8,*puVar8,0x443,*(undefined2 *)(iVar4 + 0x8b86),uStack_e,uStack_15,
                          uStack_1c,uStack_23);
        iVar11 = iVar11 + 1;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
        bVar7 = extraout_a3_lo_02;
      } while (iVar11 < param_1[0x15]);
    }
  }
  else {
    iVar11 = 0;
    puVar10 = &DAT_0032a7c0;
    puVar9 = &DAT_0032a7d0;
    puVar8 = &DAT_0032a7e0;
    do {
      MenuWnd_DrawText(0xa8,*puVar10,param_1[*param_1 + iVar11 + 0x16] + 0xded);
      MenuWnd_DrawLabel(0xa8,*puVar9,0x442,(param_1[0x15] - *param_1) - iVar11);
      iVar4 = param_1[0xde] + param_1[*param_1 + iVar11 + 0x16] * 0xc;
      uStack_36 = (undefined1)*(undefined2 *)(iVar4 + 0x8b88);
      uStack_3d = (undefined1)((ushort)*(undefined2 *)(iVar4 + 0x8b88) >> 8);
      uStack_44 = (undefined1)*(undefined2 *)(iVar4 + 0x8b8a);
      uStack_4b = (undefined1)((ushort)*(undefined2 *)(iVar4 + 0x8b8a) >> 8);
      MenuWnd_DrawLabel(0xa8,*puVar8,0x443,*(undefined2 *)(iVar4 + 0x8b86),uStack_36,uStack_3d,
                        uStack_44,uStack_4b);
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      bVar7 = extraout_a3_lo_08;
    } while (iVar11 < 3);
  }
  if (param_1[0xdf] == 2) {
    MenuWnd_DrawText(0xa8,DAT_0032a7cc,param_1[*param_1 + 0x19] + 0xded);
    MenuWnd_DrawLabel(0xa8,DAT_0032a7dc,0x442,(param_1[0x15] - *param_1) + -3);
    iVar11 = param_1[0xde] + param_1[*param_1 + 0x19] * 0xc;
    uVar6 = *(undefined4 *)(iVar11 + 0x8b86);
    uVar1 = *(undefined2 *)(iVar11 + 0x8b8a);
    uStack_65 = (undefined1)((uint)uVar6 >> 0x18);
    uStack_5e = (undefined1)((uint)uVar6 >> 0x10);
    uStack_58 = (undefined2)uVar6;
    uStack_6c = (undefined1)uVar1;
    uStack_73 = (undefined1)((ushort)uVar1 >> 8);
    MenuWnd_DrawLabel(0xa8,DAT_0032a7ec,0x443,uStack_58,uStack_5e,uStack_65,uStack_6c,uStack_73);
    iVar11 = param_1[0xdf];
    bVar7 = extraout_a3_lo_09;
  }
  else {
    iVar11 = param_1[0xdf];
  }
  if (iVar11 == 1) {
    MenuWnd_DrawText(0xa8,DAT_0032a7cc,param_1[*param_1 + 0x15] + 0xded);
    MenuWnd_DrawLabel(0xa8,DAT_0032a7dc,0x442,(param_1[0x15] - *param_1) + 1);
    iVar11 = param_1[0xde] + param_1[*param_1 + 0x15] * 0xc;
    uVar6 = *(undefined4 *)(iVar11 + 0x8b86);
    uVar1 = *(undefined2 *)(iVar11 + 0x8b8a);
    uStack_8d = (undefined1)((uint)uVar6 >> 0x18);
    uStack_86 = (undefined1)((uint)uVar6 >> 0x10);
    uStack_80 = (undefined2)uVar6;
    uStack_94 = (undefined1)uVar1;
    uStack_9b = (undefined1)((ushort)uVar1 >> 8);
    MenuWnd_DrawLabel(0xa8,DAT_0032a7ec,0x443,uStack_80,uStack_86,uStack_8d,uStack_94,uStack_9b);
    iVar11 = param_1[0xdf];
    bVar7 = extraout_a3_lo_10;
  }
  else {
    iVar11 = param_1[0xdf];
  }
  if ((iVar11 == 1) &&
     (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xa8,2), bVar7 = extraout_a3_lo_11, !bVar3)) {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    param_1[0xdf] = 0;
    uVar6 = UiRes_GetLayoutData(0xeb);
    iVar11 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x340 = 1;
    bVar7 = extraout_a3_lo_12;
  }
  if ((param_1[0xdf] == 2) &&
     (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xa8,3), bVar7 = extraout_a3_lo_13, !bVar3)) {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    param_1[0xdf] = 0;
    uVar6 = UiRes_GetLayoutData(0xe7);
    iVar11 = UiMgr_FindLayout(0xa8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar11].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar11].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar2[iVar11].layout.field_0x354 = 1;
    bVar7 = extraout_a3_lo_14;
  }
  if (param_1[0x15] < 3) {
    UiElem_SetPropFloat(pUVar12,3,6,bVar7);
  }
  else {
    UiElem_SetPropFloat(pUVar12,3,6,bVar7);
    UiElem_SetPropFloat(pUVar12,3,2,extraout_a3_lo_03);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  if (((param_1[0xdf] == 0) && (param_1[7] == 0)) && (param_1[5] == 0)) {
    UiLayout_UpdateAnimById((UiLayout *)0xa8,4);
    UiLayout_UpdateAnimById((UiLayout *)0xa8,5);
    UiLayout_UpdateAnimById((UiLayout *)0xa8,6);
    iVar11 = *(int *)(param_1[*param_1 + 0x16] * 0xc + param_1[0xde] + 0x8b80);
    iVar4 = Profile_GetDay();
    if (iVar4 - iVar11 < 1) {
      iVar11 = param_1[0x15];
    }
    else {
      iVar11 = UiMgr_FindLayout(0xa8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar11].layout,0x1c,8,extraout_a3_lo_15);
      iVar11 = param_1[0x15];
    }
    if ((*param_1 < iVar11 + -1) &&
       (iVar11 = *(int *)(param_1[*param_1 + 0x17] * 0xc + param_1[0xde] + 0x8b80),
       iVar4 = Profile_GetDay(), 0 < iVar4 - iVar11)) {
      iVar11 = UiMgr_FindLayout(0xa8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar11].layout,0x1b,8,extraout_a3_lo_16);
      iVar11 = param_1[0x15];
    }
    else {
      iVar11 = param_1[0x15];
    }
    if ((*param_1 < iVar11 + -2) &&
       (iVar11 = *(int *)(param_1[*param_1 + 0x18] * 0xc + param_1[0xde] + 0x8b80),
       iVar4 = Profile_GetDay(), 0 < iVar4 - iVar11)) {
      iVar11 = UiMgr_FindLayout(0xa8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar11].layout,0x1a,8,extraout_a3_lo_04);
    }
  }
  iVar11 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar11].layout);
  iVar11 = UiMgr_FindLayout(0xa8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar11].layout);
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
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  int iVar3;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar3 = (int)param_1;
  MenuWnd_SetTitle(*(undefined4 *)(*(int *)(iVar3 + 8) * 4 + 0x36e974),0xffffffffffffffff);
  (**(code **)(*(int *)(iVar3 + 8) * 4 + 0x36e970))(param_1);
  if ((g_MenuMgr->flags & 4) == 0) {
    iVar1 = UiMgr_FindLayout(0xa8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x1c,8,extraout_a3_lo);
    iVar1 = UiMgr_FindLayout(0xa8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x1b,8,extraout_a3_lo_00);
    iVar1 = UiMgr_FindLayout(0xa8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x1a,8,extraout_a3_lo_01);
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
void ScrCareer_Draw_Information(int *param_1)

{
  UiLayoutSlot *pUVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 extraout_a3;
  undefined8 extraout_a3_00;
  int *piVar11;
  
  iVar5 = UiMgr_FindLayout(0xa7);
  iVar6 = param_1[6];
  pUVar1 = g_UiMgr->slots;
  param_1[6] = 0;
  if (iVar6 != 0) {
    uVar7 = UiRes_GetLayoutData(0x91);
    iVar6 = UiMgr_FindLayout(0xa7);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar6].layout.unk_310 = 0xffffffff;
    pUVar2[iVar6].layout.unk_31c = 0;
    pUVar2[iVar6].layout.unk_30c = 0;
    if (pUVar2[iVar6].layout.unk_31c == 0) {
      pUVar2[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar6].layout.unk_318 = 1;
    }
    pUVar2[iVar6].layout.unk_30c = 0;
    if (pUVar2[iVar6].layout.unk_31c == 0) {
      pUVar2[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x314 = 0;
    pUVar2[iVar6].layout.unk_31c = uVar7;
    pUVar2[iVar6].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x92);
    iVar6 = UiMgr_FindLayout(0xa7);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x330 == 0) {
      pUVar2[iVar6].layout.animState = 0;
    }
    else {
      pUVar2[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x330 == 0) {
      pUVar2[iVar6].layout.animState = 0;
    }
    else {
      pUVar2[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x330 = uVar8;
    pUVar2[iVar6].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x93);
    iVar6 = UiMgr_FindLayout(0xa7);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0x94);
    iVar6 = UiMgr_FindLayout(0xa7);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x358 = uVar8;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x354 = 1;
    uVar8 = UiRes_GetLayoutData(0x95);
    iVar6 = UiMgr_FindLayout(0xa7);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x36c = uVar8;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x368 = 1;
    uVar8 = UiRes_GetLayoutData(0x107);
    iVar6 = UiMgr_FindLayout(0xa7);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x380 = uVar8;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x37c = 1;
    uVar8 = UiRes_GetLayoutData(0x108);
    iVar6 = UiMgr_FindLayout(0xa7);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x38c = 1;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x394 = uVar8;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x390 = 1;
    Menu_ClearSlot(0);
    iVar6 = 0;
    piVar11 = &DAT_0032a7f0;
    uVar9 = extraout_a3;
    do {
      UiElem_SetPropFloat(&pUVar1[iVar5].layout,(long)*piVar11,8,(byte)uVar9);
      iVar6 = iVar6 + 1;
      piVar11 = piVar11 + 1;
      uVar9 = extraout_a3_00;
    } while (iVar6 < 3);
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xa7,0);
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xa7,1);
  if (!bVar3 && !bVar4) {
    param_1[5] = 0;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
  }
  if (param_1[7] != 0) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xa7,2);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xa7,3);
    if (!bVar3 && !bVar4) {
      param_1[7] = 0;
    }
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0xa7,*(undefined4 *)(&DAT_0032a800 + *param_1 * 4),1,0);
  }
  MenuWnd_DrawText(0xa7,0x26,0x432);
  MenuWnd_DrawText(0xa7,0x27,0x433);
  MenuWnd_DrawText(0xa7,0x28,0x434);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032a810 + *param_1 * 4));
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  uVar9 = Profile_Get(0);
  if (g_MenuMgr->curScreen == g_MenuMgr->nextScreen) {
    lVar10 = Career_CountFlags(uVar9);
    if (lVar10 != 0) {
      UiLayout_UpdateAnimById((UiLayout *)0xa7,4);
      MenuWnd_DrawLabel(0xa7,0x29,0x438,5);
    }
    lVar10 = Career_SetAllFlags(uVar9,0xffffffffffffffff);
    if (lVar10 != 0) {
      UiLayout_UpdateAnimById((UiLayout *)0xa7,5);
      MenuWnd_DrawLabel(0xa7,0x2a,0x438,5);
    }
    lVar10 = Career_CountDefeatedTeams(uVar9);
    if (lVar10 != 0) {
      UiLayout_UpdateAnimById((UiLayout *)0xa7,6);
      MenuWnd_DrawLabel(0xa7,0x2b,0x438,5);
    }
  }
  iVar6 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0xa7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
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
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = UiRes_GetLayoutData(0x90);
  iVar3 = UiMgr_FindLayout(0xa6);
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
  uVar2 = UiRes_GetLayoutData(0x91);
  iVar3 = UiMgr_FindLayout(0xa7);
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
  pUVar1[iVar3].layout.unk_31c = uVar2;
  pUVar1[iVar3].layout.unk_318 = 1;
  uVar4 = UiRes_GetLayoutData(0x92);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar4;
  pUVar1[iVar3].layout.animState = 1;
  uVar4 = UiRes_GetLayoutData(0x93);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
  uVar4 = UiRes_GetLayoutData(0x94);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
  uVar4 = UiRes_GetLayoutData(0x95);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  uVar4 = UiRes_GetLayoutData(0x107);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
  uVar4 = UiRes_GetLayoutData(0x108);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
  return;
}

// 0x00222b50  size 0x14c
void maybe_MenuWnd_DrawMailList(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar2 = &s_MenuWnd_DrawMailList_1;
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
      if (s_MenuWnd_DrawMailList_1 == -3) {
        MenuWnd_DrawText(0xb1,7,*param_1 + 0x1d0c);
      }
      else if (s_MenuWnd_DrawMailList_2 == -3) {
        MenuWnd_DrawLabel(0xb1,7,*param_1 + 0x1d0c);
      }
      else if (s_MenuWnd_DrawMailList_3 == -3) {
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
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  UiLayout *pUVar8;
  UiLayout *pUVar9;
  UiLayout *pUVar10;
  
  iVar3 = UiMgr_FindLayout(0xb2);
  pUVar10 = &g_UiMgr->slots[iVar3].layout;
  iVar3 = UiMgr_FindLayout(0xb0);
  pUVar9 = &g_UiMgr->slots[iVar3].layout;
  iVar4 = UiMgr_FindLayout(0xb1);
  iVar3 = *(int *)(param_1 + 0x20);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pUVar8 = &pUVar1[iVar4].layout;
  if (iVar3 != 0) {
    uVar5 = UiRes_GetLayoutData(0xf7);
    iVar3 = UiMgr_FindLayout(0xb0);
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
    uVar6 = UiRes_GetLayoutData(0xf9);
    iVar3 = UiMgr_FindLayout(0xb0);
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
    pUVar1[iVar3].layout.unk_31c = uVar6;
    pUVar1[iVar3].layout.unk_318 = 1;
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(pUVar9,0x1c,8,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar9,0x1d,8,extraout_a3_lo_01);
    UiElem_SetPropFloat(pUVar8,8,8,extraout_a3_lo_02);
    UiElem_SetPropFloat(pUVar8,9,8,extraout_a3_lo_03);
    UiElem_SetPropFloat(pUVar9,0x17,8,extraout_a3_lo_04);
    UiElem_SetPropFloat(pUVar10,9,9,extraout_a3_lo_05);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb2,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb2,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  MenuWnd_DrawText(0xae,1,0x434);
  if (*(int *)(param_1 + 0x674) == 1) {
    maybe_MenuWnd_DrawMailList
              (*(int *)(param_1 + 0x680) +
               *(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 + 0x9994);
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                     *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
            *(int *)(param_1 + 0x680);
    iVar3 = *(int *)(iVar4 + 0x99a0);
    if (iVar3 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar4 + 0x9994) + 0x1b9a);
      iVar3 = *(int *)(param_1 + 0x674);
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar3 + 0xa8c);
      iVar3 = *(int *)(param_1 + 0x674);
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(*(int *)(*(int *)(iVar3 * 4 + param_1 + 0x678) * 4 +
                                              iVar3 * 800 + param_1 + 0x34) * 0x28 +
                                     *(int *)(param_1 + 0x680) + 0x9994) + 0x1a28);
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                              *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                     *(int *)(param_1 + 0x680) + 0x9998);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar3,iVar3 % 7 + 0x44a);
  }
  else {
    if (*(int *)(param_1 + 0x674) != 0) {
      iVar3 = *(int *)(param_1 + 0x674);
      goto LAB_002230cc;
    }
    maybe_MenuWnd_DrawMailList
              (*(int *)(param_1 + 0x680) +
               *(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) * 0x28 + 0xb8d4);
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                     *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
            *(int *)(param_1 + 0x680);
    iVar3 = *(int *)(iVar4 + 0xb8e0);
    if (iVar3 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar4 + 0xb8d4) + 0x1b9a);
      iVar3 = *(int *)(param_1 + 0x674);
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar3 + 0xa8c);
      iVar3 = *(int *)(param_1 + 0x674);
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(*(int *)(*(int *)(iVar3 * 4 + param_1 + 0x678) * 4 +
                                              iVar3 * 800 + param_1 + 0x34) * 0x28 +
                                     *(int *)(param_1 + 0x680) + 0xb8d4) + 0x1a28);
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                              *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                     *(int *)(param_1 + 0x680) + 0xb8d8);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar3,iVar3 % 7 + 0x44a);
  }
  iVar3 = *(int *)(param_1 + 0x674);
LAB_002230cc:
  lVar7 = Career_GetRivalIndex
                    (*(undefined4 *)(param_1 + 0x680),iVar3 == 0,
                     *(undefined4 *)
                      (*(int *)(iVar3 * 4 + param_1 + 0x678) * 4 + iVar3 * 800 + param_1 + 0x34));
  if (lVar7 == -1) {
    UiElem_SetPropFloat(pUVar8,3,8,extraout_a3_lo);
    iVar3 = *(int *)(param_1 + 0x674);
  }
  else {
    UiElem_SetPropFloat(pUVar8,3,8,extraout_a3_lo);
    iVar3 = *(int *)(param_1 + 0x674);
  }
  if (iVar3 == 1) {
    iVar3 = Rival_IsUnlocked(*(undefined4 *)
                              (*(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 +
                               *(int *)(param_1 + 0x680) + 0x9994));
    if (*(int *)(iVar3 + 0x2c) != -1) {
      iVar3 = Rival_IsUnlocked(*(undefined4 *)
                                (*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678)
                                          * 4 + *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) *
                                 0x28 + *(int *)(param_1 + 0x680) + 0x9994));
      UiElem_SetPropInt(pUVar10,10,0x16,*(int *)(&DAT_0032ad30 + *(int *)(iVar3 + 0x2c) * 4));
    }
  }
  else if ((iVar3 == 0) &&
          (iVar3 = Rival_IsUnlocked(*(undefined4 *)
                                     (*(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) *
                                      0x28 + *(int *)(param_1 + 0x680) + 0xb8d4)),
          *(int *)(iVar3 + 0x2c) != -1)) {
    iVar3 = Rival_IsUnlocked(*(undefined4 *)
                              (*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) *
                                        4 + *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28
                               + *(int *)(param_1 + 0x680) + 0xb8d4));
    UiElem_SetPropInt(pUVar10,10,0x16,*(int *)(&DAT_0032ad30 + *(int *)(iVar3 + 0x2c) * 4));
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar3 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  if (*(int *)(param_1 + 0x674) == 1) {
    iVar3 = Rival_IsUnlocked(*(undefined4 *)
                              (*(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 +
                               *(int *)(param_1 + 0x680) + 0x9994));
    if (*(int *)(iVar3 + 0x2c) != -1) {
      iVar3 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
    }
  }
  else if ((*(int *)(param_1 + 0x674) == 0) &&
          (iVar3 = Rival_IsUnlocked(*(undefined4 *)
                                     (*(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) *
                                      0x28 + *(int *)(param_1 + 0x680) + 0xb8d4)),
          *(int *)(iVar3 + 0x2c) != -1)) {
    iVar3 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  }
  return;
}

// 0x00223730  size 0x1194
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_MessageDeleted(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte bVar11;
  byte extraout_a3_lo_04;
  undefined8 extraout_a3;
  undefined8 extraout_a3_00;
  long extraout_a3_01;
  undefined8 extraout_a3_02;
  undefined8 extraout_a3_03;
  undefined8 extraout_a3_04;
  UiLayout *pUVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  UiLayout *pUVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  
  iVar4 = UiMgr_FindLayout(0xaf);
  pUVar17 = &g_UiMgr->slots[iVar4].layout;
  iVar4 = UiMgr_FindLayout(0xb0);
  pUVar12 = &g_UiMgr->slots[iVar4].layout;
  UiMgr_FindLayout(0xb1);
  iVar4 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0xee);
    iVar4 = UiMgr_FindLayout(0xb0);
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
    uVar6 = UiRes_GetLayoutData(0xef);
    iVar4 = UiMgr_FindLayout(0xb0);
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
    uVar5 = UiRes_GetLayoutData(0xf2);
    iVar4 = UiMgr_FindLayout(0xaf);
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
    uVar6 = UiRes_GetLayoutData(0xf3);
    iVar4 = UiMgr_FindLayout(0xaf);
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
    uVar6 = UiRes_GetLayoutData(0xf7);
    iVar4 = UiMgr_FindLayout(0xb0);
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
    uVar6 = UiRes_GetLayoutData(0xf9);
    iVar4 = UiMgr_FindLayout(0xb0);
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
    uVar6 = UiRes_GetLayoutData(0xf4);
    iVar4 = UiMgr_FindLayout(0xaf);
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
    uVar6 = UiRes_GetLayoutData(0xf1);
    iVar4 = UiMgr_FindLayout(0xaf);
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
    Menu_ClearSlot(0);
    MenuWnd_SetHelpText(0);
    MenuWnd_DrawDialogText(0xb0,0x36e9c0,2,1);
    UiElem_SetPropFloat(pUVar17,0x3f,8,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar17,0x41,8,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar12,0x1c,8,extraout_a3_lo_01);
    UiElem_SetPropFloat(pUVar12,0x1d,8,extraout_a3_lo_02);
    UiElem_SetPropFloat(pUVar12,0x17,8,extraout_a3_lo_03);
    _s_ScrCareer_Draw_MessageDeleted_1 = 0;
    uVar19 = extraout_a3;
    do {
      UiElem_SetPropFloat(pUVar17,(long)*(int *)(&DAT_0032ac40 +
                                                _s_ScrCareer_Draw_MessageDeleted_1 * 4),8,
                          (byte)uVar19);
      _s_ScrCareer_Draw_MessageDeleted_1 = _s_ScrCareer_Draw_MessageDeleted_1 + 1;
      uVar19 = extraout_a3_00;
    } while (_s_ScrCareer_Draw_MessageDeleted_1 < 0xb);
  }
  lVar8 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  MenuWnd_DrawText(5,0x1c,0x43f);
  if (*(int *)(param_1 + 0x24) != 0) {
    if (lVar8 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (*(int *)(param_1 + 0x14) == 0) {
      if (lVar8 == 3) {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb2,1);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xb0,1);
        if (!bVar2 && !bVar3) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
    }
    else if ((lVar8 == 3) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb2,1), !bVar2)) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  if (lVar8 == 2) {
    if (*(int *)(param_1 + 0x674) == 1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,2);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xaf,0);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,2);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xaf,0);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
  }
  MenuWnd_DrawText(0xae,1,0x434);
  MenuWnd_DrawText(0xaf,0x43,0x441);
  MenuWnd_DrawText(0xaf,0x44,0x440);
  iVar4 = *(int *)(param_1 + 0x674) * 4 + param_1;
  if (*(int *)(iVar4 + 0x2c) < 1) {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,0);
  }
  else {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,*(int *)(iVar4 + 0x678) + 1);
  }
  MenuWnd_DrawText(0xb0,0x1a,0x449);
  iVar4 = *(int *)(param_1 + 0x674);
  iVar16 = *(int *)(iVar4 * 4 + param_1 + 0x2c);
  if (0 < iVar16) {
    if (iVar16 < 0xb) {
      iVar7 = 0;
      if (0 < iVar16) {
        iVar16 = 0;
        puVar15 = (undefined4 *)0x32acd0;
        puVar13 = (undefined4 *)0x32ac70;
        puVar18 = (undefined4 *)0x32aca0;
        do {
          uVar19 = 0;
          if (iVar4 == 1) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar16 + 0x354) * 0x28 +
                         0x999c) == '\x01') {
              uVar19 = 5;
            }
            iVar4 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar16 + 0x354) * 0x28 +
                            0x9998);
            MenuWnd_DrawLabel(0xaf,*puVar15,0x444,iVar4,iVar4 % 7 + 0x44a);
            iVar10 = *(int *)(param_1 + 0x680) +
                     *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar16 + 0x34) * 0x28;
            iVar4 = *(int *)(iVar10 + 0x99a0);
            if (iVar4 == -1) {
              MenuWnd_DrawText(0xaf,*puVar13,*(int *)(iVar10 + 0x9994) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar13,iVar4 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar18,uVar19,
                               *(int *)(*(int *)(param_1 + 0x680) +
                                        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar16
                                                + 0x34) * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar4 == 0) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar16 + 0x34) * 0x28 +
                         0xb8dc) == '\x01') {
              uVar19 = 5;
            }
            iVar4 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar16 + 0x34) * 0x28 +
                            0xb8d8);
            MenuWnd_DrawLabel(0xaf,*puVar15,0x444,iVar4,iVar4 % 7 + 0x44a);
            iVar10 = *(int *)(param_1 + 0x680) +
                     *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar16 + 0x34) * 0x28;
            iVar4 = *(int *)(iVar10 + 0xb8e0);
            if (iVar4 == -1) {
              MenuWnd_DrawText(0xaf,*puVar13,*(int *)(iVar10 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar13,iVar4 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar18,uVar19,
                               *(int *)(*(int *)(param_1 + 0x680) +
                                        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar16
                                                + 0x34) * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar4 = *(int *)(param_1 + 0x674);
          iVar7 = iVar7 + 1;
          iVar16 = iVar16 + 4;
          puVar15 = puVar15 + 1;
          puVar13 = puVar13 + 1;
          puVar18 = puVar18 + 1;
        } while (iVar7 < *(int *)(param_1 + iVar4 * 4 + 0x2c));
      }
    }
    else {
      iVar4 = 0;
      puVar15 = (undefined4 *)0x32acd0;
      puVar13 = (undefined4 *)0x32ac70;
      puVar18 = (undefined4 *)0x32aca0;
      do {
        uVar19 = 0;
        if (*(int *)(param_1 + 0x674) == 1) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar4) -
                                           *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x999c) ==
              '\x01') {
            uVar19 = 5;
          }
          iVar16 = *(int *)(*(int *)(param_1 + 0x680) +
                            *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar4) -
                                               *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar15,0x444,iVar16,iVar16 % 7 + 0x44a);
          iVar16 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar7 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar16 + 0x678) + iVar4) - *(int *)(iVar16 + 4)) * 4 + 0x34) *
                  0x28;
          iVar16 = *(int *)(iVar7 + 0x99a0);
          if (iVar16 == -1) {
            MenuWnd_DrawText(0xaf,*puVar13,*(int *)(iVar7 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar13,iVar16 + 0xa8c);
          }
          iVar16 = param_1 + *(int *)(param_1 + 0x674) * 4;
          MenuWnd_DrawTextId(0xaf,*puVar18,uVar19,
                             *(int *)(*(int *)(param_1 + 0x680) +
                                      *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                               ((*(int *)(iVar16 + 0x678) + iVar4) -
                                               *(int *)(iVar16 + 4)) * 4 + 0x34) * 0x28 + 0x9994) +
                             0x1a28);
        }
        else if (*(int *)(param_1 + 0x674) == 0) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar4) -
                                           *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar19 = 5;
          }
          iVar16 = *(int *)(*(int *)(param_1 + 0x680) +
                            *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar4) -
                                               *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar15,0x444,iVar16,iVar16 % 7 + 0x44a);
          iVar16 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar7 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar16 + 0x678) + iVar4) - *(int *)(iVar16 + 4)) * 4 + 0x34) *
                  0x28;
          iVar16 = *(int *)(iVar7 + 0xb8e0);
          if (iVar16 == -1) {
            MenuWnd_DrawText(0xaf,*puVar13,*(int *)(iVar7 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar13,iVar16 + 0xa8c);
          }
          iVar16 = param_1 + *(int *)(param_1 + 0x674) * 4;
          MenuWnd_DrawTextId(0xaf,*puVar18,uVar19,
                             *(int *)(*(int *)(param_1 + 0x680) +
                                      *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                               ((*(int *)(iVar16 + 0x678) + iVar4) -
                                               *(int *)(iVar16 + 4)) * 4 + 0x34) * 0x28 + 0xb8d4) +
                             0x1a28);
        }
        iVar4 = iVar4 + 1;
        puVar15 = puVar15 + 1;
        puVar13 = puVar13 + 1;
        puVar18 = puVar18 + 1;
      } while (iVar4 < 10);
    }
  }
  uVar19 = maybe_Mail_CountMessages(*(undefined4 *)(param_1 + 0x674));
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar19);
  if (*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x2c) < 0xb) {
    iVar16 = 0;
    iVar4 = 0;
    piVar14 = &DAT_0032ad00;
    uVar19 = extraout_a3_03;
    do {
      bVar11 = (byte)uVar19;
      iVar7 = *(int *)(param_1 + 0x674);
      if ((iVar16 < *(int *)(param_1 + iVar7 * 4 + 0x2c)) &&
         (lVar8 = Career_GetRivalIndex
                            (*(undefined4 *)(param_1 + 0x680),iVar7 == 0,
                             *(undefined4 *)(param_1 + iVar7 * 800 + iVar4 + 0x34)),
         bVar11 = extraout_a3_lo_04, lVar8 != -1)) {
        UiElem_SetPropFloat(pUVar17,(long)*piVar14,8,extraout_a3_lo_04);
        uVar19 = extraout_a3_02;
      }
      else {
        UiElem_SetPropFloat(pUVar17,(long)*piVar14,8,bVar11);
        uVar19 = extraout_a3_04;
      }
      iVar16 = iVar16 + 1;
      iVar4 = iVar4 + 4;
      piVar14 = piVar14 + 1;
    } while (iVar16 < 0xb);
  }
  else {
    iVar4 = 0;
    piVar14 = &DAT_0032ad00;
    do {
      iVar16 = *(int *)(param_1 + 0x674);
      lVar8 = (long)iVar16;
      iVar7 = param_1 + iVar16 * 4;
      iVar10 = iVar4 + (*(int *)(iVar7 + 0x678) - *(int *)(iVar7 + 4));
      if ((iVar10 < *(int *)(iVar7 + 0x2c)) &&
         (lVar9 = Career_GetRivalIndex
                            (*(undefined4 *)(param_1 + 0x680),lVar8 == 0,
                             *(undefined4 *)(param_1 + iVar16 * 800 + iVar10 * 4 + 0x34)),
         lVar8 = extraout_a3_01, lVar9 != -1)) {
        UiElem_SetPropFloat(pUVar17,(long)*piVar14,8,(byte)extraout_a3_01);
      }
      else {
        UiElem_SetPropFloat(pUVar17,(long)*piVar14,8,(byte)lVar8);
      }
      iVar4 = iVar4 + 1;
      piVar14 = piVar14 + 1;
    } while (iVar4 < 0xb);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar4 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

