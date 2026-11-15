// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00238000 - 0x0023c000
#include "ghidra_types.h"

// 0x002380d0  size 0x510
/* state of ScrRace_Draw_RivalInfo; on-screen text/callee hint "CareerDrawNoDat" (was
   ScrScrCareerDrawNoData6ac0_Enter) */

void ScrRace_Draw_RivalInfo_Draw3_CareerDrawNoDat(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  UiLayout *pUVar11;
  
  iVar7 = (int)param_1;
  iVar10 = *(int *)(iVar7 + 0x828);
  *(undefined4 *)(iVar7 + 0x828) = 0;
  if (iVar10 == 0) {
    iVar10 = *(int *)(iVar7 + 0x814);
  }
  else {
    uVar8 = UiRes_GetLayoutData(0x249);
    iVar10 = UiMgr_FindLayout(200);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar10].layout.unk_310 = 0xffffffff;
    pUVar1[iVar10].layout.unk_31c = 0;
    pUVar1[iVar10].layout.unk_30c = 0;
    if (pUVar1[iVar10].layout.unk_31c == 0) {
      pUVar1[iVar10].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar10].layout.unk_318 = 1;
    }
    pUVar1[iVar10].layout.unk_30c = 0;
    if (pUVar1[iVar10].layout.unk_31c == 0) {
      pUVar1[iVar10].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar10].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar10].layout.field_0x314 = 0;
    pUVar1[iVar10].layout.unk_31c = uVar8;
    pUVar1[iVar10].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(0x24a);
    iVar10 = UiMgr_FindLayout(200);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar10].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar10].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar10].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar10].layout.field_0x330 == 0) {
      pUVar1[iVar10].layout.animState = 0;
    }
    else {
      pUVar1[iVar10].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar10].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar10].layout.field_0x330 == 0) {
      pUVar1[iVar10].layout.animState = 0;
    }
    else {
      pUVar1[iVar10].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar10].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar10].layout.field_0x330 = uVar9;
    pUVar1[iVar10].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x242);
    iVar10 = UiMgr_FindLayout(199);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar10].layout.unk_310 = 0xffffffff;
    pUVar1[iVar10].layout.unk_31c = 0;
    pUVar1[iVar10].layout.unk_30c = 0;
    if (pUVar1[iVar10].layout.unk_31c == 0) {
      pUVar1[iVar10].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar10].layout.unk_318 = 1;
    }
    pUVar1[iVar10].layout.unk_30c = 0;
    if (pUVar1[iVar10].layout.unk_31c == 0) {
      pUVar1[iVar10].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar10].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar10].layout.field_0x314 = 0;
    pUVar1[iVar10].layout.unk_31c = uVar8;
    pUVar1[iVar10].layout.unk_318 = 1;
    MenuWnd_DrawDialogText(200,0x36ea70,2,0);
    iVar10 = *(int *)(iVar7 + 0x814);
  }
  if (iVar10 == 4) {
    *(undefined4 *)(iVar7 + 0x824) = 0;
  }
  else if (iVar10 == 5) {
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0xc8,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xc7,0);
    if (!bVar5 && !bVar4) {
      *(undefined4 *)(iVar7 + 0x824) = 0;
    }
  }
  else {
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0xc8,0);
    if (!bVar5) {
      *(undefined4 *)(iVar7 + 0x824) = 0;
    }
  }
  if (*(int *)(iVar7 + 0x82c) == 0) {
    MenuWnd_DrawCursor(1);
    if (*(int *)(iVar7 + 0x30) == 0) {
      iVar10 = UiMgr_FindLayout(200);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar10].layout,0x3b,8,extraout_a3_lo_03);
      iVar10 = *(int *)(iVar7 + 0x30);
    }
    else {
      iVar10 = *(int *)(iVar7 + 0x30);
    }
    if (iVar10 == *(int *)(iVar7 + 0x34)) {
      iVar10 = UiMgr_FindLayout(200);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar10].layout,0x3c,8,extraout_a3_lo_02);
    }
  }
  else {
    if (*(int *)(iVar7 + 0x81c) == 4) {
      *(undefined4 *)(iVar7 + 0x82c) = 0;
    }
    else {
      bVar5 = UiLayout_UpdateAnimById((UiLayout *)0xc8,1);
      if (!bVar5) {
        *(undefined4 *)(iVar7 + 0x82c) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  iVar10 = UiMgr_FindLayout(199);
  pUVar1 = g_UiMgr->slots;
  piVar6 = (int *)UiRes_GetLayoutData(0x245);
  UiLayout_PlayAnim(&pUVar1[iVar10].layout,piVar6);
  ScrCareer_Draw_NoData_6ac0(param_1);
  iVar3 = DAT_0036ea7c;
  iVar2 = DAT_0036ea78;
  iVar10 = *(int *)(iVar7 + 0x34);
  iVar7 = UiMgr_FindLayout(200);
  pUVar11 = &g_UiMgr->slots[iVar7].layout;
  iVar7 = UiMgr_FindLayout(200);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)iVar3,8,extraout_a3_lo);
  if (iVar10 + 5 < 6) {
    UiElem_SetPropFloat(pUVar11,(long)iVar2,2,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar11,(long)iVar2,6,extraout_a3_lo_04);
  }
  else {
    UiElem_SetPropFloat(pUVar11,(long)iVar2,2,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar11,(long)iVar2,6,extraout_a3_lo_01);
  }
  iVar10 = UiMgr_FindLayout(199);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar10].layout);
  iVar10 = UiMgr_FindLayout(200);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar10].layout);
  iVar10 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar10].layout);
  return;
}

// 0x002385e0  size 0xe78
void ScrCareer_Draw_NoData_85e0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  
  iVar4 = param_1[0x20a];
  param_1[0x20a] = 0;
  if (iVar4 == 0) {
LAB_00238610:
    iVar4 = param_1[0x205];
  }
  else {
    uVar5 = UiRes_GetLayoutData(0x24b);
    iVar4 = UiMgr_FindLayout(0xc9);
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
    uVar8 = UiRes_GetLayoutData(0x24c);
    iVar4 = UiMgr_FindLayout(0xc9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar8;
    pUVar1[iVar4].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x24d);
    iVar4 = UiMgr_FindLayout(0xc9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0x242);
    iVar4 = UiMgr_FindLayout(199);
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
    uVar8 = UiRes_GetLayoutData(0x243);
    iVar4 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar8;
    pUVar1[iVar4].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x244);
    iVar4 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0x245);
    iVar4 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    uVar8 = UiRes_GetLayoutData(0x246);
    iVar4 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    uVar8 = UiRes_GetLayoutData(0x247);
    iVar4 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    uVar8 = UiRes_GetLayoutData(0x248);
    iVar4 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    MenuWnd_DrawDialogText(199,0x36ea68,2);
    if (*param_1 == 1) {
      Menu_ShowDialog(&g_MenuMgr->field_0x654,0x11f,2);
      iVar4 = param_1[0x205];
    }
    else {
      Menu_ShowDialog(&g_MenuMgr->field_0x654,0x11a,0);
      iVar4 = param_1[0x205];
    }
    if (iVar4 != 0) goto LAB_00238610;
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    iVar4 = param_1[0x205];
  }
  if (iVar4 == 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xc7,0);
    if (!bVar2) {
      param_1[0x209] = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xc7,1);
    if (!bVar2) {
      param_1[0x209] = 0;
    }
  }
  if (param_1[0x20b] == 0) {
    MenuWnd_DrawCursor(0 < param_1[4]);
    iVar4 = param_1[0xb];
  }
  else {
    if (param_1[0x207] == 0) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xc7,2);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xc9,1);
      if (!bVar2 && !bVar3) {
        param_1[0x20b] = 0;
        Menu_BlockInput(&g_MenuMgr->field_0x654);
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xc7,3);
      if (!bVar2) {
        param_1[0x20b] = 0;
        Menu_BlockInput(&g_MenuMgr->field_0x654);
      }
    }
    MenuWnd_DrawCursor(0);
    iVar4 = param_1[0xb];
  }
  iVar7 = -1;
  if (iVar4 == 1) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xc7,5);
    iVar4 = Profile_Get(0);
    if ((*(int *)(iVar4 + param_1[8] * 4 + 0x37b0) == 1) ||
       (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xc9,1), !bVar3)) {
      if (bVar2) {
        iVar7 = (param_1[7] + param_1[4] + 1) % param_1[4];
      }
      else {
        Menu_ClearSlot(0);
        param_1[0xb] = 2;
        iVar4 = UiMgr_FindLayout(199);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x370 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x380 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
        }
        iVar4 = UiMgr_FindLayout(0xc9);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
          pUVar1[iVar4].layout.animState = 0;
        }
        else {
          pUVar1[iVar4].layout.animState = 1;
        }
        iVar4 = UiMgr_FindLayout(0xc9);
        pUVar1 = g_UiMgr->slots;
        pUVar1[iVar4].layout.unk_30c = 0;
        if (pUVar1[iVar4].layout.unk_31c == 0) {
          pUVar1[iVar4].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar4].layout.unk_318 = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        param_1[8] = param_1[param_1[7] + 0xe];
      }
    }
    else {
      iVar7 = (param_1[7] + param_1[4] + 1) % param_1[4];
    }
  }
  else if (iVar4 == 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xc7,4);
    iVar4 = Profile_Get(0);
    if ((*(int *)(iVar4 + param_1[8] * 4 + 0x37b0) == 1) ||
       (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xc9,1), !bVar3)) {
      if (bVar2) {
        iVar7 = (param_1[7] + param_1[4] + -1) % param_1[4];
      }
      else {
        Menu_ClearSlot(0);
        param_1[0xb] = 2;
        iVar4 = UiMgr_FindLayout(199);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
        }
        iVar4 = UiMgr_FindLayout(0xc9);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
          pUVar1[iVar4].layout.animState = 0;
        }
        else {
          pUVar1[iVar4].layout.animState = 1;
        }
        iVar4 = UiMgr_FindLayout(0xc9);
        pUVar1 = g_UiMgr->slots;
        pUVar1[iVar4].layout.unk_30c = 0;
        if (pUVar1[iVar4].layout.unk_31c == 0) {
          pUVar1[iVar4].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar4].layout.unk_318 = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        param_1[8] = param_1[param_1[7] + 0xe];
      }
    }
    else {
      iVar7 = (param_1[7] + param_1[4] + -1) % param_1[4];
    }
  }
  else if (iVar4 != 2) {
    iVar4 = param_1[7];
    goto LAB_002387d8;
  }
  iVar4 = param_1[7];
LAB_002387d8:
  iVar4 = param_1[iVar4 + 0xe];
  uVar9 = RivalDb_Get((short)iVar4);
  uVar5 = RivalRec_GetType(uVar9);
  MenuWnd_DrawLabel(199,0x14,0x3c,param_1[7] + 1,param_1[4]);
  iVar6 = Profile_Get(0);
  if (*(int *)(iVar6 + iVar4 * 4 + 0x37b0) == 1) {
    uVar9 = MsgId_RivalNickname(iVar4);
    MenuWnd_DrawText(199,0x17,uVar9);
    uVar9 = MsgId_RivalName(iVar4);
    MenuWnd_DrawText(199,0x19,uVar9);
    MenuWnd_DrawText(199,0x1a,(uVar5 & 0xff) + 0x67);
  }
  else {
    MenuWnd_DrawText(199,0x17,0x5c);
    MenuWnd_DrawText(199,0x19,0x5c);
    MenuWnd_DrawText(199,0x1a,0x5b);
  }
  iVar6 = Profile_Get(0);
  if (*(short *)(iVar6 + iVar4 * 2 + 0x3fc4) < 1) {
    iVar4 = UiMgr_FindLayout(199);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,4,8,extraout_a3_lo_00);
  }
  else {
    iVar4 = UiMgr_FindLayout(199);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,4,8,extraout_a3_lo);
  }
  if (iVar7 != -1) {
    iVar4 = param_1[iVar7 + 0xe];
    uVar9 = RivalDb_Get((short)iVar4);
    uVar5 = RivalRec_GetType(uVar9);
    MenuWnd_DrawLabel(199,0x1b,0x3a,iVar4);
    iVar7 = Profile_Get(0);
    if (*(int *)(iVar7 + iVar4 * 4 + 0x37b0) == 1) {
      uVar9 = MsgId_RivalNickname(iVar4);
      MenuWnd_DrawText(199,0x1c,uVar9);
      uVar9 = MsgId_RivalName(iVar4);
      MenuWnd_DrawText(199,0x1d,uVar9);
      MenuWnd_DrawText(199,0x1e,(uVar5 & 0xff) + 0x67);
    }
    else {
      MenuWnd_DrawText(199,0x1c,0x5c);
      MenuWnd_DrawText(199,0x1d,0x5c);
      MenuWnd_DrawText(199,0x1e,0x5b);
    }
    iVar7 = Profile_Get(0);
    if (*(short *)(iVar7 + iVar4 * 2 + 0x3fc4) < 1) {
      iVar4 = UiMgr_FindLayout(199);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0xd,8,extraout_a3_lo_02);
    }
    else {
      iVar4 = UiMgr_FindLayout(199);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0xd,8,extraout_a3_lo_01);
    }
  }
  iVar4 = Profile_Get(0);
  if (*(short *)(iVar4 + param_1[8] * 2 + 0x3fc4) < 1) {
    iVar4 = Profile_Get(0);
    if (*(int *)(iVar4 + param_1[8] * 4 + 0x37b0) == 1) {
      iVar4 = UiMgr_FindLayout(199);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x13,9,7);
    }
    else {
      iVar4 = UiMgr_FindLayout(199);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x13,9,7);
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      UiLayout_UpdateAnimById((UiLayout *)0xc9,2);
      if ((param_1[8] == param_1[param_1[7] + 0xe]) &&
         (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xc9,0), !bVar2)) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
    }
  }
  else {
    UiLayout_UpdateAnimById((UiLayout *)0xc7,6);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar4 = Profile_Get(0);
  if (*(int *)(iVar4 + param_1[8] * 4 + 0x37b0) != 1) {
    MenuWnd_DrawText(0xc9,0x10,0x29c);
    iVar4 = UiMgr_FindLayout(0xc9);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  }
  iVar4 = UiMgr_FindLayout(199);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x00239460  size 0x330
/* state of ScrRace_Draw_RivalInfo; on-screen text/callee hint "NoData" (was ScrNoData_Update) */

void ScrRace_Draw_RivalInfo_Draw1_NoData(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 0x828);
  *(undefined4 *)(iVar6 + 0x828) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x24e);
    iVar3 = UiMgr_FindLayout(0xca);
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
    uVar5 = UiRes_GetLayoutData(0x24f);
    iVar3 = UiMgr_FindLayout(0xca);
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
    uVar5 = UiRes_GetLayoutData(0x250);
    iVar3 = UiMgr_FindLayout(0xca);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0x251);
    iVar3 = UiMgr_FindLayout(0xca);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    MenuWnd_SetItemVisible(0);
    MenuWnd_DrawDialogText(0xca,0x36ea60,2,0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xca,0);
  if (!bVar2) {
    *(undefined4 *)(iVar6 + 0x824) = 0;
  }
  if (*(int *)(iVar6 + 0x82c) == 0) {
    MenuWnd_DrawCursor(1);
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xca,1);
    if (!bVar2) {
      *(undefined4 *)(iVar6 + 0x82c) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  MenuList_Update(iVar6 + 0x834,0x32b670,0x32b630);
  ScrCareer_Draw_NoData_7210(param_1,0xffffffffffffffff);
  iVar3 = UiMgr_FindLayout(0xca);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  UiLayout_UpdateAnimById((UiLayout *)0xc6,6);
  iVar3 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x00239790  size 0xb78
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of ScrRace_Draw_RivalInfo; on-screen text/callee hint "NoData" (was ScrNoData_Enter) */

void ScrRace_Draw_RivalInfo_Draw0_NoData(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  UiLayoutSlot *pUVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  byte extraout_a3_lo_08;
  undefined4 *puVar14;
  long lVar15;
  int iVar16;
  UiLayout *pUVar17;
  int iVar18;
  
  uVar1 = g_MenuMgr->flags;
  iVar18 = (int)param_1;
  iVar16 = *(int *)(iVar18 + 0x828);
  *(undefined4 *)(iVar18 + 0x828) = 0;
  if (iVar16 == 0) {
    iVar16 = *(int *)(iVar18 + 0x814);
  }
  else {
    uVar10 = UiRes_GetLayoutData(0x23b);
    iVar16 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    pUVar4[iVar16].layout.unk_310 = 0xffffffff;
    pUVar4[iVar16].layout.unk_31c = 0;
    pUVar4[iVar16].layout.unk_30c = 0;
    if (pUVar4[iVar16].layout.unk_31c == 0) {
      pUVar4[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar4[iVar16].layout.unk_318 = 1;
    }
    pUVar4[iVar16].layout.unk_30c = 0;
    if (pUVar4[iVar16].layout.unk_31c == 0) {
      pUVar4[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar4[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x314 = 0;
    pUVar4[iVar16].layout.unk_31c = uVar10;
    pUVar4[iVar16].layout.unk_318 = 1;
    uVar11 = UiRes_GetLayoutData(0x23d);
    iVar16 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x334 = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x334 = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x344 = uVar11;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x340 = 1;
    uVar11 = UiRes_GetLayoutData(0x23c);
    iVar16 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x320 = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x330 == 0) {
      pUVar4[iVar16].layout.animState = 0;
    }
    else {
      pUVar4[iVar16].layout.animState = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x320 = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x330 == 0) {
      pUVar4[iVar16].layout.animState = 0;
    }
    else {
      pUVar4[iVar16].layout.animState = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x330 = uVar11;
    pUVar4[iVar16].layout.animState = 1;
    uVar11 = UiRes_GetLayoutData(0x23e);
    iVar16 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x348 = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x348 = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x358 = uVar11;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x354 = 1;
    uVar11 = UiRes_GetLayoutData(0x240);
    iVar16 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x35c = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x35c = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x36c = uVar11;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x368 = 1;
    uVar11 = UiRes_GetLayoutData(0x23f);
    iVar16 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x370 = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x370 = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x380 = uVar11;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x37c = 1;
    uVar11 = UiRes_GetLayoutData(0x29f);
    iVar16 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x398 = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x398 = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3a8 = uVar11;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3a4 = 1;
    uVar11 = UiRes_GetLayoutData(0x2e0);
    iVar16 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3ac = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3ac = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3bc = uVar11;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x3b8 = 1;
    uVar11 = UiRes_GetLayoutData(0x241);
    iVar16 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    if (*(int *)&pUVar4[iVar16].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x388 = 0xffffffff;
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x394 = 0;
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x384 = 0;
      if (*(int *)&pUVar4[iVar16].layout.field_0x394 == 0) {
        *(undefined4 *)&pUVar4[iVar16].layout.field_0x390 = 0;
      }
      else {
        *(undefined4 *)&pUVar4[iVar16].layout.field_0x390 = 1;
      }
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x384 = 0;
      if (*(int *)&pUVar4[iVar16].layout.field_0x394 == 0) {
        *(undefined4 *)&pUVar4[iVar16].layout.field_0x390 = 0;
      }
      else {
        *(undefined4 *)&pUVar4[iVar16].layout.field_0x390 = 1;
      }
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x38c = 1;
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x394 = uVar11;
      *(undefined4 *)&pUVar4[iVar16].layout.field_0x390 = 1;
    }
    Menu_ClearSlot(0);
    iVar16 = *(int *)(iVar18 + 0x814);
  }
  if (iVar16 == 1) {
    if (*(int *)(iVar18 + 0x24) == 1) {
      bVar8 = UiLayout_UpdateAnimById((UiLayout *)0xc6,0);
      if (!bVar8) {
        *(undefined4 *)(iVar18 + 0x824) = 0;
      }
    }
    else {
      bVar8 = UiLayout_UpdateAnimById((UiLayout *)0xc6,8);
      if (!bVar8) {
        *(undefined4 *)(iVar18 + 0x824) = 0;
      }
    }
  }
  else if (iVar16 == 2) {
    bVar8 = UiLayout_UpdateAnimById((UiLayout *)0xc6,0);
    if (!bVar8) {
      *(undefined4 *)(iVar18 + 0x824) = 0;
    }
  }
  else {
    bVar8 = UiLayout_UpdateAnimById((UiLayout *)0xc6,0);
    bVar7 = UiLayout_UpdateAnimById((UiLayout *)0xc6,2);
    if (!bVar8 && !bVar7) {
      *(undefined4 *)(iVar18 + 0x824) = 0;
    }
  }
  bVar7 = true;
  bVar8 = (uVar1 & 1) != 0;
  if (*(int *)(iVar18 + 0x82c) != 0) {
    bVar8 = bVar7;
    if (*(int *)(iVar18 + 0x81c) == 1) {
      bVar7 = UiLayout_UpdateAnimById((UiLayout *)0xc6,7);
      if (!bVar7) {
        *(undefined4 *)(iVar18 + 0x82c) = 0;
      }
    }
    else if ((g_MenuMgr->nextScreen == 0xb) || (g_MenuMgr->nextScreen == 0x15)) {
      bVar7 = UiLayout_UpdateAnimById((UiLayout *)0xc6,1);
      bVar9 = UiLayout_UpdateAnimById((UiLayout *)0xc6,3);
      if (!bVar7 && !bVar9) {
        *(undefined4 *)(iVar18 + 0x82c) = 0;
      }
    }
    else {
      bVar7 = UiLayout_UpdateAnimById((UiLayout *)0xc6,1);
      if (!bVar7) {
        *(undefined4 *)(iVar18 + 0x82c) = 0;
      }
    }
  }
  iVar16 = -1;
  if (*(int *)(iVar18 + 0x2c) == 1) {
    Menu_ClearSlot(0);
    bVar7 = UiLayout_UpdateAnimById((UiLayout *)0xc6,5);
    if (bVar7) {
      iVar16 = (*(int *)(iVar18 + 0x10) + (*(int *)(iVar18 + 0x1c) - *(int *)(iVar18 + 0x28)) + 9) %
               *(int *)(iVar18 + 0x10);
    }
    else {
      *(undefined4 *)(iVar18 + 0x2c) = 2;
      iVar13 = UiMgr_FindLayout(0xc6);
      pUVar4 = g_UiMgr->slots;
      *(undefined4 *)&pUVar4[iVar13].layout.field_0x370 = 0;
      if (*(int *)&pUVar4[iVar13].layout.field_0x380 == 0) {
        *(undefined4 *)&pUVar4[iVar13].layout.field_0x37c = 0;
      }
      else {
        *(undefined4 *)&pUVar4[iVar13].layout.field_0x37c = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  else if (*(int *)(iVar18 + 0x2c) == 0) {
    bVar7 = UiLayout_UpdateAnimById((UiLayout *)0xc6,4);
    if (bVar7) {
      iVar16 = (*(int *)(iVar18 + 0x10) + (*(int *)(iVar18 + 0x1c) - *(int *)(iVar18 + 0x28)) + -1)
               % *(int *)(iVar18 + 0x10);
    }
    else {
      Menu_ClearSlot(0);
      *(undefined4 *)(iVar18 + 0x2c) = 2;
      iVar13 = UiMgr_FindLayout(0xc6);
      pUVar4 = g_UiMgr->slots;
      *(undefined4 *)&pUVar4[iVar13].layout.field_0x35c = 0;
      if (*(int *)&pUVar4[iVar13].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar4[iVar13].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar4[iVar13].layout.field_0x368 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0xc6,*(undefined4 *)(&DAT_0032b600 + *(int *)(iVar18 + 0x28) * 4),0,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  iVar6 = _s_ScrRace_Draw_RivalInfo_Draw0_NoData_2;
  iVar5 = _s_ScrRace_Draw_RivalInfo_Draw0_NoData_1;
  iVar13 = *(int *)(iVar18 + 0x10);
  iVar2 = *(int *)(iVar18 + 0x1c);
  iVar3 = *(int *)(iVar18 + 0x28);
  iVar12 = UiMgr_FindLayout(0xc6);
  pUVar17 = &g_UiMgr->slots[iVar12].layout;
  if (iVar13 < 10) {
    UiElem_SetPropFloat(pUVar17,(long)iVar5,2,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar17,(long)iVar5,6,extraout_a3_lo_06);
    iVar13 = UiMgr_FindLayout(0xc6);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,(long)iVar6,8,extraout_a3_lo_07);
  }
  else if (iVar13 < (iVar13 + (iVar2 - iVar3)) % iVar13 + 9) {
    UiElem_SetPropFloat(pUVar17,(long)iVar5,2,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar17,(long)iVar5,6,extraout_a3_lo_02);
    lVar15 = (long)iVar6;
    UiElem_SetPropFloat(pUVar17,lVar15,2,extraout_a3_lo_03);
    UiElem_SetPropFloat(pUVar17,lVar15,6,extraout_a3_lo_04);
    iVar13 = UiMgr_FindLayout(0xc6);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,lVar15,8,(byte)g_UiMgr);
  }
  else {
    UiElem_SetPropFloat(pUVar17,(long)iVar5,2,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar17,(long)iVar5,6,extraout_a3_lo_00);
    iVar13 = UiMgr_FindLayout(0xc6);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,(long)iVar6,8,extraout_a3_lo_01);
  }
  ScrCareer_Draw_NoData_7210(param_1,iVar16);
  iVar16 = 0;
  puVar14 = &DAT_0032b510;
  do {
    if (iVar16 < *(int *)(iVar18 + 0x10)) {
      if (!bVar8) {
        iVar13 = UiMgr_FindLayout(0xc6);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,(long)(int)puVar14[5],8,extraout_a3_lo_05
                           );
      }
    }
    else {
      iVar13 = UiMgr_FindLayout(0xc6);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,(long)(int)puVar14[5],8,extraout_a3_lo_08);
    }
    iVar16 = iVar16 + 1;
    puVar14 = puVar14 + 6;
  } while (iVar16 < 9);
  UiLayout_UpdateAnimById((UiLayout *)0xc6,6);
  iVar16 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar16].layout);
  return;
}

// 0x0023a310  size 0x58
/* screen record 0x3277c4 */

void ScrRivalInfo_Exit(void)

{
  int iVar1;
  byte extraout_a3_lo;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x25,8,extraout_a3_lo);
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0023a370  size 0x200
void ScrRace_Draw_RivalInfo(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  byte extraout_a3_lo;
  int *piVar4;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  piVar4 = (int *)param_1;
  (*(code *)(&PTR_ScrRace_Draw_RivalInfo_Draw0_NoData_0032b4f0)[piVar4[0x206]])(param_1);
  if (*piVar4 == 1) {
    iVar1 = UiMgr_FindLayout(0xcb);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
    iVar1 = UiMgr_FindLayout(0xcc);
    UiLayout_UpdateAnim(&g_UiMgr->slots[iVar1].layout,0);
    iVar1 = UiMgr_FindLayout(0xcc);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  }
  else {
    UiLayout_UpdateAnimById((UiLayout *)0xc5,0);
    iVar1 = UiMgr_FindLayout(0xc5);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  }
  MenuWnd_DrawText(0xc6,0x6d,0xef);
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x25,8,extraout_a3_lo);
  uVar3 = 0;
  if (piVar4[0x21a] != -3) {
    uVar3 = 2;
  }
  if (piVar4[0x219] != -3) {
    uVar3 = uVar3 | 1;
  }
  MenuWnd_SetTitle(uVar3,0xffffffffffffffff);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = Menu_IsInputIdle(piVar4 + 0x205), lVar2 == 1)) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x0023a570  size 0x9c
/* screen record 0x3277c4 */

void ScrRivalInfo_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x23a);
  iVar3 = UiMgr_FindLayout(0xc5);
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

// 0x0023a610  size 0x320
void MenuNum_CountUp_NoCar
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

// 0x0023a930  size 0x160
void ScrGarage_Draw_NoCarIs(int param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x124) < 1) {
    MenuWnd_DrawText(0xd5,0x32,0x289);
  }
  else {
    uVar2 = Profile_Get(0);
    for (iVar4 = 0; (iVar4 < 6 && (iVar4 < *(int *)(param_1 + 0x124))); iVar4 = iVar4 + 1) {
      puVar1 = (undefined2 *)
               Profile_GetCarRecordB
                         (uVar2,*(undefined4 *)
                                 (param_1 + ((*(int *)(param_1 + 0x34) + iVar4) %
                                            *(int *)(param_1 + 0x124)) * 4 + 0xc0));
      uVar3 = MenuText_CarNameOrMaker(*puVar1,0xffffffffffffffff);
      MenuWnd_DrawText(0xd5,iVar4 + 0x17,uVar3);
      uVar3 = MenuText_CarShortName(*puVar1,0xffffffffffffffff);
      MenuWnd_DrawText(0xd5,iVar4 + 0x1e,uVar3);
      uVar3 = MenuText_CarGrade(*puVar1,0xffffffffffffffff);
      MenuWnd_DrawTextId(0xd5,iVar4 + 0x25,4,uVar3);
    }
  }
  MenuNum_CountUp_NoCar
            (0xd5,0xd,0xe,0x70,*(undefined4 *)(param_1 + 0x124),6,*(undefined4 *)(param_1 + 0x34));
  iVar4 = UiMgr_FindLayout(0xd5);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x0023aaa0  size 0x348
void ScrGarage_Draw_Sponsors(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar4 = Profile_Get(0);
  MenuWnd_DrawText(0xd4,0x4b,0x283);
  uVar4 = Garage_FindFreeSlot(uVar4);
  MenuWnd_DrawLabel(0xd4,0x4c,0x3d,uVar4,0xf);
  uVar4 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar4 = Msg_RivalNickname(uVar4);
  MenuWnd_DrawText(0xd4,0x4f,uVar4);
  iVar7 = 0;
  do {
    iVar8 = (int)param_1;
    if (iVar7 < 3) {
      uVar9 = *(undefined4 *)
               (iVar8 + ((*(int *)(iVar8 + 0x28) + iVar7) % *(int *)(iVar8 + 0xb4)) * 4 + 0x3c);
    }
    else if (*(char *)(iVar8 + 0x30) == -1) {
      uVar9 = *(undefined4 *)
               (iVar8 + ((*(int *)(iVar8 + 0x28) + -1) % *(int *)(iVar8 + 0xb4)) * 4 + 0x3c);
    }
    else {
      uVar9 = *(undefined4 *)
               (iVar8 + ((*(int *)(iVar8 + 0x28) + iVar7) % *(int *)(iVar8 + 0xb4)) * 4 + 0x3c);
    }
    iVar2 = UiMgr_FindLayout(0xd4);
    pUVar1 = g_UiMgr->slots;
    iVar3 = MsgId_Symbol(uVar9);
    UiElem_SetPropInt(&pUVar1[iVar2].layout,(long)(iVar7 + 0x55),0x16,iVar3);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  uVar4 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar4 = Msg_TeamInfo(uVar4);
  uVar5 = Msg_MakerCountry(uVar4);
  uVar4 = Msg_MakerInfo(uVar4);
  MenuWnd_DrawLabel(0xd4,0x4e,0x45,uVar5,uVar4);
  MenuWnd_DrawText(0xd4,0x4d,0x284);
  uVar4 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar4 = Msg_TeamName(uVar4);
  MenuWnd_DrawNumber(0xd4,0x4a,uVar4);
  lVar6 = maybe_Sponsor_IsUnlocked(param_1);
  if (lVar6 == 0) {
    iVar7 = UiMgr_FindLayout(0xd4);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x3f,8,extraout_a3_lo_00);
  }
  else {
    iVar7 = UiMgr_FindLayout(0xd4);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x3f,8,extraout_a3_lo);
  }
  uVar4 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar4 = MsgId_PartDescription(uVar4);
  MenuWnd_DrawText(0xd4,0x50,uVar4);
  if ((*(int *)(iVar8 + 0xb4) < 3) && (iVar7 = 0, 0 < 3 - *(int *)(iVar8 + 0xb4))) {
    do {
      iVar2 = UiMgr_FindLayout(0xd4);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)(0x57 - iVar7),8,extraout_a3_lo_01);
      iVar2 = UiMgr_FindLayout(0xd4);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)(0x53 - iVar7),8,extraout_a3_lo_02);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3 - *(int *)(iVar8 + 0xb4));
  }
  iVar7 = UiMgr_FindLayout(0xd4);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x0023adf0  size 0x8
/* follows ScrGarage_Draw_Sponsors; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void ScrGarage_Draw_Sponsors_Orphan1(void)

{
  return;
}

// 0x0023ae00  size 0xec
/* state of MenuPage20; on-screen text/callee hint "ContractMoney" (was ScrContractMoney_Exit) */

void maybe_PageSponsors_State5_ContractMoney(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x288,0xffffffffffffffff,0);
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  UiLayout_UpdateAnimById((UiLayout *)0xd3,0);
  iVar1 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0023aef0  size 0x434
void ScrCareer_Draw_ContractMoney(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar5 = (int)param_1;
  iVar4 = *(int *)(iVar5 + 0x14);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  if (iVar4 != 0) {
    uVar6 = UiRes_GetLayoutData(399);
    iVar4 = UiMgr_FindLayout(0xd6);
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
    uVar7 = UiRes_GetLayoutData(400);
    iVar4 = UiMgr_FindLayout(0xd6);
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
    iVar4 = UiMgr_FindLayout(0xd6);
    pUVar1 = g_UiMgr->slots;
    piVar8 = (int *)UiRes_GetLayoutData(400);
    UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar8);
    uVar7 = UiRes_GetLayoutData(0x18a);
    iVar4 = UiMgr_FindLayout(0xd4);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3bc = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 1;
    uVar7 = UiRes_GetLayoutData(0x18e);
    iVar4 = UiMgr_FindLayout(0xd5);
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
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd4,8);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd5,1);
  if ((!bVar2 && !bVar3) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd6,0), !bVar2)) {
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  if ((*(int *)(iVar5 + 0x18) != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd6,1), !bVar2)
     ) {
    *(undefined4 *)(iVar5 + 0x18) = 0;
  }
  uVar9 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar9 = Msg_RivalNickname(uVar9);
  MenuWnd_DrawLabel(0xd6,0x28,0x286,uVar9);
  uVar9 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar9 = Msg_TeamInfo(uVar9);
  uVar10 = Msg_MakerCountry(uVar9);
  uVar9 = Msg_MakerInfo(uVar9);
  MenuWnd_DrawLabel(0xd6,0x27,0x45,uVar10,uVar9);
  MenuWnd_DrawText(0xd6,0x26,0x284);
  uVar9 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar9 = Msg_TeamName(uVar9);
  MenuWnd_DrawNumber(0xd6,0x29,uVar9);
  iVar4 = UiMgr_FindLayout(0xd6);
  pUVar1 = g_UiMgr->slots;
  uVar9 = maybe_Sponsor_GetCycledEntry(param_1);
  iVar5 = MsgId_Symbol(uVar9);
  UiElem_SetPropInt(&pUVar1[iVar4].layout,0x24,0x16,iVar5);
  UiLayout_UpdateAnimById((UiLayout *)0xd3,0);
  iVar4 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  ScrGarage_Draw_Sponsors(param_1);
  ScrGarage_Draw_NoCarIs(param_1);
  iVar4 = UiMgr_FindLayout(0xd6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_SetTitle(2,0xffffffffffffffff);
  return;
}

// 0x0023b330  size 0xe8
/* state of MenuPage20; on-screen text/callee hint "ContractMoney" (was ScrContractMoney_Enter) */

void maybe_PageSponsors_State3_ContractMoney(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x14);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0x285,*(undefined4 *)(iVar3 + 0x38),0x36eaa0);
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  if (*(int *)(iVar3 + 0x18) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
  }
  UiLayout_UpdateAnimById((UiLayout *)0xd3,0);
  iVar1 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  ScrGarage_Draw_Sponsors(param_1);
  ScrGarage_Draw_NoCarIs(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0023b420  size 0x2a8
/* state of MenuPage20; on-screen text/callee hint "GarageDrawSponsors" (was
   ScrScrGarageDrawSponsors_Exit) */

void maybe_PageSponsors_State2_GarageDrawSponsors(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  piVar6 = (int *)param_1;
  iVar5 = piVar6[5];
  piVar6[5] = 0;
  if (iVar5 == 0) {
    iVar5 = piVar6[0x49];
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x18d);
    iVar5 = UiMgr_FindLayout(0xd5);
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
    uVar4 = UiRes_GetLayoutData(0x18e);
    iVar5 = UiMgr_FindLayout(0xd5);
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
    MenuWnd_DrawDialogText(0xd5,0x36ea98,2,0);
    iVar5 = piVar6[0x49];
  }
  MenuWnd_DrawCursor(6 < iVar5);
  if (piVar6[0xd] == 0) {
    iVar5 = UiMgr_FindLayout(0xd5);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x2c,8,extraout_a3_lo_00);
    iVar5 = *piVar6;
  }
  else {
    if (piVar6[0x49] + -6 == piVar6[0xd]) {
      iVar5 = UiMgr_FindLayout(0xd5);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x2d,8,extraout_a3_lo);
    }
    iVar5 = *piVar6;
  }
  if (iVar5 == 3) {
    piVar6[4] = 0;
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd5,0);
    if (!bVar2) {
      piVar6[4] = 0;
    }
  }
  if ((piVar6[6] != 0) &&
     ((MenuWnd_DrawCursor(0), piVar6[2] != 0 ||
      (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd5,1), !bVar2)))) {
    piVar6[6] = 0;
  }
  UiLayout_UpdateAnimById((UiLayout *)0xd3,0);
  iVar5 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  ScrGarage_Draw_Sponsors(param_1);
  ScrGarage_Draw_NoCarIs(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0023b6d0  size 0xfc
/* state of MenuPage20; on-screen text/callee hint "GarageDrawSponsors" (was
   ScrScrGarageDrawSponsors_Update) */

void maybe_PageSponsors_State1_GarageDrawSponsors(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x14);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x287,0xffffffffffffffff,0);
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  if (*(int *)(iVar3 + 0x18) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
  }
  UiLayout_UpdateAnimById((UiLayout *)0xd3,0);
  iVar1 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  ScrGarage_Draw_Sponsors(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0023b7d0  size 0xa00
/* state of MenuPage20; on-screen text/callee hint "GarageDrawSponsors" (was
   ScrScrGarageDrawSponsors_Enter) */

void maybe_PageSponsors_State0_GarageDrawSponsors(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  
  piVar9 = (int *)param_1;
  iVar6 = piVar9[5];
  piVar9[5] = 0;
  if (iVar6 != 0) {
    if (*piVar9 == 2) {
      iVar6 = piVar9[0xb];
      if (iVar6 == 2) {
        uVar5 = UiRes_GetLayoutData(0x185);
        iVar6 = UiMgr_FindLayout(0xd4);
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
      else if (iVar6 == 1) {
        uVar5 = UiRes_GetLayoutData(0x184);
        iVar6 = UiMgr_FindLayout(0xd4);
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
      else if (iVar6 == 0) {
        uVar5 = UiRes_GetLayoutData(0x183);
        iVar6 = UiMgr_FindLayout(0xd4);
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
    else {
      if (*piVar9 == 4) {
        iVar6 = UiMgr_FindLayout(0xd4);
        pUVar1 = g_UiMgr->slots;
        piVar7 = (int *)UiRes_GetLayoutData(0x183);
        UiLayout_PlayAnim(&pUVar1[iVar6].layout,piVar7);
        iVar6 = *piVar9;
      }
      else {
        iVar6 = *piVar9;
      }
      if (iVar6 == 1) {
        iVar6 = UiMgr_FindLayout(0xd4);
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
      }
      else {
        uVar5 = UiRes_GetLayoutData(0x182);
        iVar6 = UiMgr_FindLayout(0xd4);
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
    uVar4 = UiRes_GetLayoutData(0x40f);
    iVar6 = UiMgr_FindLayout(0xd4);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar4;
    pUVar1[iVar6].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x410);
    iVar6 = UiMgr_FindLayout(0xd4);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x186);
    iVar6 = UiMgr_FindLayout(0xd4);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    uVar4 = UiRes_GetLayoutData(0x187);
    iVar6 = UiMgr_FindLayout(0xd4);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x380 = uVar4;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    uVar4 = UiRes_GetLayoutData(0x188);
    iVar6 = UiMgr_FindLayout(0xd4);
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
    uVar4 = UiRes_GetLayoutData(0x189);
    iVar6 = UiMgr_FindLayout(0xd4);
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
    uVar4 = UiRes_GetLayoutData(0x18b);
    iVar6 = UiMgr_FindLayout(0xd4);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3c8 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3d0 = uVar4;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3cc = 1;
    uVar4 = UiRes_GetLayoutData(0x18c);
    iVar6 = UiMgr_FindLayout(0xd4);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3d8 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3e4 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3d4 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x3e4 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3e0 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3e0 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3d4 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x3e4 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3e0 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x3e0 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3dc = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3e4 = uVar4;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x3e0 = 1;
    MenuWnd_DrawDialogText(0xd4,0x36ea90,2,0);
    Menu_ClearSlot(0);
  }
  if ((((piVar9[4] == 0) && (piVar9[6] == 0)) && (lVar8 = MenuMgr_Goto(), lVar8 == 0)) &&
     (3 < piVar9[0x2d])) {
    MenuWnd_DrawCursor(1);
    iVar6 = *piVar9;
  }
  else {
    MenuWnd_DrawCursor(0);
    iVar6 = *piVar9;
  }
  if (iVar6 == 1) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd4,0);
    if (!bVar2) {
      piVar9[4] = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd4,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd4,1);
    if (!bVar2 && !bVar3) {
      piVar9[4] = 0;
    }
  }
  if (piVar9[6] != 0) {
    if (piVar9[2] == 2) {
      lVar8 = (long)(piVar9[0xb] + 5);
    }
    else if (piVar9[2] == 1) {
      lVar8 = -1;
    }
    else {
      lVar8 = 4;
    }
    if (lVar8 != -1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd4,lVar8);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd4,2);
      if (bVar2 || bVar3) goto LAB_0023bff8;
    }
    piVar9[6] = 0;
  }
LAB_0023bff8:
  if ((char)piVar9[0xc] == '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    if (((*g_MenuInput == 1) && (piVar9[4] == 0)) && (piVar9[6] == 0)) {
      MenuWnd_SetItemState(0xd4,*(undefined4 *)(&DAT_0032b728 + piVar9[0xb] * 4),0,0);
    }
  }
  else {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    if ((char)piVar9[0xc] == -1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd4,9);
      if (!bVar2) {
        *(undefined1 *)(piVar9 + 0xc) = 0;
        iVar6 = UiMgr_FindLayout(0xd4);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x3c0 = 0;
        if (*(int *)&pUVar1[iVar6].layout.field_0x3d0 == 0) {
          *(undefined4 *)&pUVar1[iVar6].layout.field_0x3cc = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar6].layout.field_0x3cc = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd4,10);
      if (!bVar2) {
        *(undefined1 *)(piVar9 + 0xc) = 0;
        iVar6 = UiMgr_FindLayout(0xd4);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x3d4 = 0;
        if (*(int *)&pUVar1[iVar6].layout.field_0x3e4 == 0) {
          *(undefined4 *)&pUVar1[iVar6].layout.field_0x3e0 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar6].layout.field_0x3e0 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  UiLayout_UpdateAnimById((UiLayout *)0xd3,0);
  iVar6 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  ScrGarage_Draw_Sponsors(param_1);
  lVar8 = maybe_Sponsor_IsUnlocked(param_1);
  uVar10 = 0x281;
  if (lVar8 == 0) {
    uVar10 = 0x282;
  }
  MenuWnd_SetTitle(3,uVar10);
  return;
}

