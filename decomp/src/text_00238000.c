// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00238000 - 0x0023c000
#include "ghidra_types.h"

// 0x002380d0  size 0x510
/* state of ScrRace_Draw_RivalInfo; on-screen text/callee hint "CareerDrawNoDat" (was
   ScrScrCareerDrawNoData6ac0_Enter) */

void ScrRace_Draw_RivalInfo_Draw3_CareerDrawNoDat(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  UiLayout *pUVar11;
  
  iVar4 = (int)param_1;
  iVar6 = *(int *)(iVar4 + 0x828);
  *(undefined4 *)(iVar4 + 0x828) = 0;
  if (iVar6 == 0) {
    iVar6 = *(int *)(iVar4 + 0x814);
  }
  else {
    uVar5 = UiRes_GetLayoutData(0x249);
    iVar6 = UiMgr_FindLayout(200);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = uVar5;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x24a);
    iVar6 = UiMgr_FindLayout(200);
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
    uVar5 = UiRes_GetLayoutData(0x242);
    iVar6 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = uVar5;
    pUVar1[iVar6].layout.unk_318 = 1;
    MenuWnd_DrawDialogText(200,0x36ea70,2,0);
    iVar6 = *(int *)(iVar4 + 0x814);
  }
  if (iVar6 == 4) {
    *(undefined4 *)(iVar4 + 0x824) = 0;
  }
  else if (iVar6 == 5) {
    lVar9 = UiLayout_UpdateAnimById(200,0);
    lVar7 = UiLayout_UpdateAnimById(199,0);
    if (lVar9 == 0 && lVar7 == 0) {
      *(undefined4 *)(iVar4 + 0x824) = 0;
    }
  }
  else {
    lVar9 = UiLayout_UpdateAnimById(200,0);
    if (lVar9 == 0) {
      *(undefined4 *)(iVar4 + 0x824) = 0;
    }
  }
  if (*(int *)(iVar4 + 0x82c) == 0) {
    MenuWnd_DrawCursor(1);
    if (*(int *)(iVar4 + 0x30) == 0) {
      iVar6 = UiMgr_FindLayout(200);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,0x3b,8);
      iVar6 = *(int *)(iVar4 + 0x30);
    }
    else {
      iVar6 = *(int *)(iVar4 + 0x30);
    }
    if (iVar6 == *(int *)(iVar4 + 0x34)) {
      iVar6 = UiMgr_FindLayout(200);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,0x3c,8);
    }
  }
  else {
    if (*(int *)(iVar4 + 0x81c) == 4) {
      *(undefined4 *)(iVar4 + 0x82c) = 0;
    }
    else {
      lVar9 = UiLayout_UpdateAnimById(200);
      if (lVar9 == 0) {
        *(undefined4 *)(iVar4 + 0x82c) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  iVar6 = UiMgr_FindLayout(199);
  pUVar1 = g_UiMgr->slots;
  uVar8 = UiRes_GetLayoutData(0x245);
  UiLayout_PlayAnim(&pUVar1[iVar6].layout,uVar8);
  ScrCareer_Draw_NoData_6ac0(param_1);
  uVar2 = DAT_0036ea7c;
  uVar5 = DAT_0036ea78;
  iVar10 = *(int *)(iVar4 + 0x34) + 5;
  iVar3 = UiMgr_FindLayout(200);
  iVar6 = *(int *)(iVar4 + 0x30);
  pUVar11 = &g_UiMgr->slots[iVar3].layout;
  iVar4 = UiMgr_FindLayout(200);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,uVar2,8);
  if (iVar10 < 6) {
    UiElem_SetPropFloat(0x41800000,pUVar11,uVar5,2);
    UiElem_SetPropFloat(0x40c00000,pUVar11,uVar5,6);
  }
  else {
    UiElem_SetPropFloat((float)iVar6 * (96.0 / (float)iVar10) + 16.0,pUVar11,uVar5,2);
    UiElem_SetPropFloat((5.0 / (float)iVar10) * 6.0,pUVar11,uVar5,6);
  }
  iVar6 = UiMgr_FindLayout(199);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(200);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002385e0  size 0xe78
void ScrCareer_Draw_NoData_85e0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  iVar2 = param_1[0x20a];
  param_1[0x20a] = 0;
  if (iVar2 == 0) {
LAB_00238610:
    iVar2 = param_1[0x205];
  }
  else {
    uVar6 = UiRes_GetLayoutData(0x24b);
    iVar2 = UiMgr_FindLayout(0xc9);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar6;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x24c);
    iVar2 = UiMgr_FindLayout(0xc9);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar6;
    pUVar1[iVar2].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x24d);
    iVar2 = UiMgr_FindLayout(0xc9);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x242);
    iVar2 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar6;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x243);
    iVar2 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar6;
    pUVar1[iVar2].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x244);
    iVar2 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x245);
    iVar2 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x246);
    iVar2 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x247);
    iVar2 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    uVar6 = UiRes_GetLayoutData(0x248);
    iVar2 = UiMgr_FindLayout(199);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = uVar6;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    MenuWnd_DrawDialogText(199,0x36ea68,2);
    if (*param_1 == 1) {
      Menu_ShowDialog(&g_MenuMgr->field_0x654,0x11f,2);
      iVar2 = param_1[0x205];
    }
    else {
      Menu_ShowDialog(&g_MenuMgr->field_0x654,0x11a,0);
      iVar2 = param_1[0x205];
    }
    if (iVar2 != 0) goto LAB_00238610;
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    iVar2 = param_1[0x205];
  }
  if (iVar2 == 0) {
    lVar7 = UiLayout_UpdateAnimById(199,0);
    if (lVar7 == 0) {
      param_1[0x209] = 0;
    }
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(199,1);
    if (lVar7 == 0) {
      param_1[0x209] = 0;
    }
  }
  if (param_1[0x20b] == 0) {
    MenuWnd_DrawCursor(0 < param_1[4]);
    iVar2 = param_1[0xb];
  }
  else {
    if (param_1[0x207] == 0) {
      lVar7 = UiLayout_UpdateAnimById(199,2);
      lVar9 = UiLayout_UpdateAnimById(0xc9,1);
      if (lVar7 == 0 && lVar9 == 0) {
        param_1[0x20b] = 0;
        Menu_BlockInput(&g_MenuMgr->field_0x654);
      }
    }
    else {
      lVar7 = UiLayout_UpdateAnimById(199,3);
      if (lVar7 == 0) {
        param_1[0x20b] = 0;
        Menu_BlockInput(&g_MenuMgr->field_0x654);
      }
    }
    MenuWnd_DrawCursor(0);
    iVar2 = param_1[0xb];
  }
  iVar5 = -1;
  if (iVar2 == 1) {
    lVar7 = UiLayout_UpdateAnimById(199,5);
    iVar2 = Profile_Get(0);
    if ((*(int *)(iVar2 + param_1[8] * 4 + 0x37b0) == 1) ||
       (lVar9 = UiLayout_UpdateAnimById(0xc9,1), lVar9 != 1)) {
      if (lVar7 == 0) {
        Menu_ClearSlot(0);
        param_1[0xb] = 2;
        iVar2 = UiMgr_FindLayout(199);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
        }
        iVar2 = UiMgr_FindLayout(0xc9);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
          pUVar1[iVar2].layout.animState = 0;
        }
        else {
          pUVar1[iVar2].layout.animState = 1;
        }
        iVar2 = UiMgr_FindLayout(0xc9);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
          pUVar1[iVar2].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar2].layout.unk_318 = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        param_1[8] = param_1[param_1[7] + 0xe];
      }
      else {
        iVar5 = (param_1[7] + param_1[4] + 1) % param_1[4];
      }
    }
    else {
      iVar5 = (param_1[7] + param_1[4] + 1) % param_1[4];
    }
  }
  else if (iVar2 == 0) {
    lVar7 = UiLayout_UpdateAnimById(199,4);
    iVar2 = Profile_Get(0);
    if ((*(int *)(iVar2 + param_1[8] * 4 + 0x37b0) == 1) ||
       (lVar9 = UiLayout_UpdateAnimById(0xc9,1), lVar9 != 1)) {
      if (lVar7 == 0) {
        Menu_ClearSlot(0);
        param_1[0xb] = 2;
        iVar2 = UiMgr_FindLayout(199);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x35c = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x36c == 0) {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
        }
        iVar2 = UiMgr_FindLayout(0xc9);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
          pUVar1[iVar2].layout.animState = 0;
        }
        else {
          pUVar1[iVar2].layout.animState = 1;
        }
        iVar2 = UiMgr_FindLayout(0xc9);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
          pUVar1[iVar2].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar2].layout.unk_318 = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        param_1[8] = param_1[param_1[7] + 0xe];
      }
      else {
        iVar5 = (param_1[7] + param_1[4] + -1) % param_1[4];
      }
    }
    else {
      iVar5 = (param_1[7] + param_1[4] + -1) % param_1[4];
    }
  }
  else if (iVar2 != 2) {
    iVar2 = param_1[7];
    goto LAB_002387d8;
  }
  iVar2 = param_1[7];
LAB_002387d8:
  iVar2 = param_1[iVar2 + 0xe];
  uVar8 = RivalDb_Get((short)iVar2);
  uVar3 = RivalRec_GetType(uVar8);
  MenuWnd_DrawLabel(199,0x14,0x3c,param_1[7] + 1,param_1[4]);
  iVar4 = Profile_Get(0);
  if (*(int *)(iVar4 + iVar2 * 4 + 0x37b0) == 1) {
    uVar8 = MsgId_RivalNickname(iVar2);
    MenuWnd_DrawText(199,0x17,uVar8);
    uVar8 = MsgId_RivalName(iVar2);
    MenuWnd_DrawText(199,0x19,uVar8);
    MenuWnd_DrawText(199,0x1a,(uVar3 & 0xff) + 0x67);
  }
  else {
    MenuWnd_DrawText(199,0x17,0x5c);
    MenuWnd_DrawText(199,0x19,0x5c);
    MenuWnd_DrawText(199,0x1a,0x5b);
  }
  iVar4 = Profile_Get(0);
  if (*(short *)(iVar4 + iVar2 * 2 + 0x3fc4) < 1) {
    iVar2 = UiMgr_FindLayout(199);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,4,8);
  }
  else {
    iVar2 = UiMgr_FindLayout(199);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar2].layout,4,8);
  }
  if (iVar5 != -1) {
    iVar2 = param_1[iVar5 + 0xe];
    uVar8 = RivalDb_Get((short)iVar2);
    uVar3 = RivalRec_GetType(uVar8);
    MenuWnd_DrawLabel(199,0x1b,0x3a,iVar2);
    iVar5 = Profile_Get(0);
    if (*(int *)(iVar5 + iVar2 * 4 + 0x37b0) == 1) {
      uVar8 = MsgId_RivalNickname(iVar2);
      MenuWnd_DrawText(199,0x1c,uVar8);
      uVar8 = MsgId_RivalName(iVar2);
      MenuWnd_DrawText(199,0x1d,uVar8);
      MenuWnd_DrawText(199,0x1e,(uVar3 & 0xff) + 0x67);
    }
    else {
      MenuWnd_DrawText(199,0x1c,0x5c);
      MenuWnd_DrawText(199,0x1d,0x5c);
      MenuWnd_DrawText(199,0x1e,0x5b);
    }
    iVar5 = Profile_Get(0);
    if (*(short *)(iVar5 + iVar2 * 2 + 0x3fc4) < 1) {
      iVar2 = UiMgr_FindLayout(199);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0xd,8);
    }
    else {
      iVar2 = UiMgr_FindLayout(199);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar2].layout,0xd,8);
    }
  }
  iVar2 = Profile_Get(0);
  if (*(short *)(iVar2 + param_1[8] * 2 + 0x3fc4) < 1) {
    iVar2 = Profile_Get(0);
    if (*(int *)(iVar2 + param_1[8] * 4 + 0x37b0) == 1) {
      iVar2 = UiMgr_FindLayout(199);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x13,9,7);
    }
    else {
      iVar2 = UiMgr_FindLayout(199);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x13,9,7);
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      UiLayout_UpdateAnimById(0xc9,2);
      if ((param_1[8] == param_1[param_1[7] + 0xe]) &&
         (lVar7 = UiLayout_UpdateAnimById(0xc9,0), lVar7 == 0)) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
    }
  }
  else {
    UiLayout_UpdateAnimById(199,6);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar2 = Profile_Get(0);
  if (*(int *)(iVar2 + param_1[8] * 4 + 0x37b0) != 1) {
    MenuWnd_DrawText(0xc9,0x10,0x29c);
    iVar2 = UiMgr_FindLayout(0xc9);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  }
  iVar2 = UiMgr_FindLayout(199);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x00239460  size 0x330
/* state of ScrRace_Draw_RivalInfo; on-screen text/callee hint "NoData" (was ScrNoData_Update) */

void ScrRace_Draw_RivalInfo_Draw1_NoData(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar2 = *(int *)(iVar5 + 0x828);
  *(undefined4 *)(iVar5 + 0x828) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x24e);
    iVar2 = UiMgr_FindLayout(0xca);
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
    uVar3 = UiRes_GetLayoutData(0x24f);
    iVar2 = UiMgr_FindLayout(0xca);
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
    uVar3 = UiRes_GetLayoutData(0x250);
    iVar2 = UiMgr_FindLayout(0xca);
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
    uVar3 = UiRes_GetLayoutData(0x251);
    iVar2 = UiMgr_FindLayout(0xca);
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
    MenuWnd_SetItemVisible(0);
    MenuWnd_DrawDialogText(0xca,0x36ea60,2,0);
  }
  lVar4 = UiLayout_UpdateAnimById(0xca,0);
  if (lVar4 == 0) {
    *(undefined4 *)(iVar5 + 0x824) = 0;
  }
  if (*(int *)(iVar5 + 0x82c) == 0) {
    MenuWnd_DrawCursor(1);
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xca);
    if (lVar4 == 0) {
      *(undefined4 *)(iVar5 + 0x82c) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  MenuList_Update(iVar5 + 0x834,0x32b670,0x32b630);
  ScrCareer_Draw_NoData_7210(param_1,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0xca);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_UpdateAnimById(0xc6,6);
  iVar2 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
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
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  int iVar14;
  UiLayout *pUVar15;
  int iVar16;
  float fVar17;
  
  uVar1 = g_MenuMgr->flags;
  iVar16 = (int)param_1;
  iVar14 = *(int *)(iVar16 + 0x828);
  *(undefined4 *)(iVar16 + 0x828) = 0;
  if (iVar14 == 0) {
    iVar14 = *(int *)(iVar16 + 0x814);
  }
  else {
    uVar8 = UiRes_GetLayoutData(0x23b);
    iVar14 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x30c = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x31c == 0) {
      pUVar4[iVar14].layout.unk_318 = 0;
    }
    else {
      pUVar4[iVar14].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x30c = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x31c == 0) {
      pUVar4[iVar14].layout.unk_318 = 0;
    }
    else {
      pUVar4[iVar14].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x31c = uVar8;
    pUVar4[iVar14].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x23d);
    iVar14 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x334 = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x334 = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0x23c);
    iVar14 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x320 = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x330 == 0) {
      pUVar4[iVar14].layout.animState = 0;
    }
    else {
      pUVar4[iVar14].layout.animState = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x320 = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x330 == 0) {
      pUVar4[iVar14].layout.animState = 0;
    }
    else {
      pUVar4[iVar14].layout.animState = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x330 = uVar8;
    pUVar4[iVar14].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x23e);
    iVar14 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x348 = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x348 = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x358 = uVar8;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x354 = 1;
    uVar8 = UiRes_GetLayoutData(0x240);
    iVar14 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x35c = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x35c = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x36c = uVar8;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x368 = 1;
    uVar8 = UiRes_GetLayoutData(0x23f);
    iVar14 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x370 = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x370 = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x380 = uVar8;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x37c = 1;
    uVar8 = UiRes_GetLayoutData(0x29f);
    iVar14 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x398 = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x398 = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3a8 = uVar8;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3a4 = 1;
    uVar8 = UiRes_GetLayoutData(0x2e0);
    iVar14 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3ac = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3ac = 0;
    if (*(int *)&pUVar4[iVar14].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3bc = uVar8;
    *(undefined4 *)&pUVar4[iVar14].layout.field_0x3b8 = 1;
    uVar8 = UiRes_GetLayoutData(0x241);
    iVar14 = UiMgr_FindLayout(0xc6);
    pUVar4 = g_UiMgr->slots;
    if (*(int *)&pUVar4[iVar14].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x388 = 0xffffffff;
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x394 = 0;
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x384 = 0;
      if (*(int *)&pUVar4[iVar14].layout.field_0x394 == 0) {
        *(undefined4 *)&pUVar4[iVar14].layout.field_0x390 = 0;
      }
      else {
        *(undefined4 *)&pUVar4[iVar14].layout.field_0x390 = 1;
      }
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x384 = 0;
      if (*(int *)&pUVar4[iVar14].layout.field_0x394 == 0) {
        *(undefined4 *)&pUVar4[iVar14].layout.field_0x390 = 0;
      }
      else {
        *(undefined4 *)&pUVar4[iVar14].layout.field_0x390 = 1;
      }
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x38c = 1;
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x394 = uVar8;
      *(undefined4 *)&pUVar4[iVar14].layout.field_0x390 = 1;
    }
    Menu_ClearSlot(0);
    iVar14 = *(int *)(iVar16 + 0x814);
  }
  if (iVar14 == 1) {
    if (*(int *)(iVar16 + 0x24) == 1) {
      lVar11 = UiLayout_UpdateAnimById(0xc6,0);
      if (lVar11 == 0) {
        *(undefined4 *)(iVar16 + 0x824) = 0;
      }
    }
    else {
      lVar11 = UiLayout_UpdateAnimById(0xc6,8);
      if (lVar11 == 0) {
        *(undefined4 *)(iVar16 + 0x824) = 0;
      }
    }
  }
  else if (iVar14 == 2) {
    lVar11 = UiLayout_UpdateAnimById(0xc6,0);
    if (lVar11 == 0) {
      *(undefined4 *)(iVar16 + 0x824) = 0;
    }
  }
  else {
    lVar11 = UiLayout_UpdateAnimById(0xc6,0);
    lVar12 = UiLayout_UpdateAnimById(0xc6,2);
    if (lVar11 == 0 && lVar12 == 0) {
      *(undefined4 *)(iVar16 + 0x824) = 0;
    }
  }
  bVar6 = true;
  bVar5 = (uVar1 & 1) != 0;
  if (*(int *)(iVar16 + 0x82c) != 0) {
    bVar5 = bVar6;
    if (*(int *)(iVar16 + 0x81c) == 1) {
      lVar11 = UiLayout_UpdateAnimById(0xc6,7);
      if (lVar11 == 0) {
        *(undefined4 *)(iVar16 + 0x82c) = 0;
      }
    }
    else if ((g_MenuMgr->nextScreen == 0xb) || (g_MenuMgr->nextScreen == 0x15)) {
      lVar11 = UiLayout_UpdateAnimById(0xc6,1);
      lVar12 = UiLayout_UpdateAnimById(0xc6,3);
      if (lVar11 == 0 && lVar12 == 0) {
        *(undefined4 *)(iVar16 + 0x82c) = 0;
      }
    }
    else {
      lVar11 = UiLayout_UpdateAnimById(0xc6);
      if (lVar11 == 0) {
        *(undefined4 *)(iVar16 + 0x82c) = 0;
      }
    }
  }
  iVar14 = -1;
  if (*(int *)(iVar16 + 0x2c) == 1) {
    Menu_ClearSlot(0);
    lVar11 = UiLayout_UpdateAnimById(0xc6,5);
    if (lVar11 == 0) {
      *(undefined4 *)(iVar16 + 0x2c) = 2;
      iVar10 = UiMgr_FindLayout(0xc6);
      pUVar4 = g_UiMgr->slots;
      *(undefined4 *)&pUVar4[iVar10].layout.field_0x370 = 0;
      if (*(int *)&pUVar4[iVar10].layout.field_0x380 == 0) {
        *(undefined4 *)&pUVar4[iVar10].layout.field_0x37c = 0;
      }
      else {
        *(undefined4 *)&pUVar4[iVar10].layout.field_0x37c = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar14 = (*(int *)(iVar16 + 0x10) + (*(int *)(iVar16 + 0x1c) - *(int *)(iVar16 + 0x28)) + 9) %
               *(int *)(iVar16 + 0x10);
    }
  }
  else if (*(int *)(iVar16 + 0x2c) == 0) {
    lVar11 = UiLayout_UpdateAnimById(0xc6,4);
    if (lVar11 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(iVar16 + 0x2c) = 2;
      iVar10 = UiMgr_FindLayout(0xc6);
      pUVar4 = g_UiMgr->slots;
      *(undefined4 *)&pUVar4[iVar10].layout.field_0x35c = 0;
      if (*(int *)&pUVar4[iVar10].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar4[iVar10].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar4[iVar10].layout.field_0x368 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar14 = (*(int *)(iVar16 + 0x10) + (*(int *)(iVar16 + 0x1c) - *(int *)(iVar16 + 0x28)) + -1)
               % *(int *)(iVar16 + 0x10);
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0xc6,*(undefined4 *)(&DAT_0032b600 + *(int *)(iVar16 + 0x28) * 4),0,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  uVar7 = uRam0036ea5c;
  uVar8 = uRam0036ea58;
  iVar2 = *(int *)(iVar16 + 0x10);
  iVar10 = *(int *)(iVar16 + 0x1c);
  iVar3 = *(int *)(iVar16 + 0x28);
  iVar9 = UiMgr_FindLayout(0xc6);
  pUVar15 = &g_UiMgr->slots[iVar9].layout;
  iVar10 = (iVar2 + (iVar10 - iVar3)) % iVar2;
  if (iVar2 < 10) {
    UiElem_SetPropFloat(0x41800000,pUVar15,uVar8,2);
    UiElem_SetPropFloat(0x41780000,pUVar15,uVar8,6);
    iVar10 = UiMgr_FindLayout(0xc6);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar10].layout,uVar7,8);
  }
  else if (iVar2 < iVar10 + 9) {
    fVar17 = (float)((iVar10 + 9) - iVar2);
    UiElem_SetPropFloat((float)iVar10 * (248.0 / (float)iVar2) + 16.0,pUVar15,uVar8,2);
    UiElem_SetPropFloat(((9.0 - fVar17) / (float)iVar2) * 15.5,pUVar15,uVar8,6);
    UiElem_SetPropFloat(0x41800000,pUVar15,uVar7,2);
    UiElem_SetPropFloat((fVar17 / (float)iVar2) * 15.5,pUVar15,uVar7,6);
    iVar10 = UiMgr_FindLayout(0xc6);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar10].layout,uVar7,8);
  }
  else {
    UiElem_SetPropFloat((float)iVar10 * (248.0 / (float)iVar2) + 16.0,pUVar15,uVar8,2);
    UiElem_SetPropFloat((9.0 / (float)iVar2) * 15.5,pUVar15,uVar8,6);
    iVar10 = UiMgr_FindLayout(0xc6);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar10].layout,uVar7,8);
  }
  ScrCareer_Draw_NoData_7210(param_1,iVar14);
  iVar14 = 0;
  puVar13 = &DAT_0032b510;
  do {
    if (iVar14 < *(int *)(iVar16 + 0x10)) {
      if (!bVar5) {
        iVar10 = UiMgr_FindLayout(0xc6);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar10].layout,puVar13[5],8);
      }
    }
    else {
      iVar10 = UiMgr_FindLayout(0xc6);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar10].layout,puVar13[5],8);
    }
    iVar14 = iVar14 + 1;
    puVar13 = puVar13 + 6;
  } while (iVar14 < 9);
  UiLayout_UpdateAnimById(0xc6,6);
  iVar14 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar14].layout);
  return;
}

// 0x0023a310  size 0x58
/* screen record 0x3277c4 */

void ScrRivalInfo_Exit(void)

{
  int iVar1;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar1].layout,0x25,8);
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0023a370  size 0x200
void ScrRace_Draw_RivalInfo(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  piVar4 = (int *)param_1;
  (*(code *)(&PTR_ScrRace_Draw_RivalInfo_Draw0_NoData_0032b4f0)[piVar4[0x206]])(param_1);
  if (*piVar4 == 1) {
    iVar1 = UiMgr_FindLayout(0xcb);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
    iVar1 = UiMgr_FindLayout(0xcc);
    UiLayout_UpdateAnim(&g_UiMgr->slots[iVar1].layout,0);
    iVar1 = UiMgr_FindLayout(0xcc);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  }
  else {
    UiLayout_UpdateAnimById(0xc5,0);
    iVar1 = UiMgr_FindLayout(0xc5);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  }
  MenuWnd_DrawText(0xc6,0x6d,0xef);
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,0x25,8);
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
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x23a);
  iVar3 = UiMgr_FindLayout(0xc5);
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

// 0x0023a610  size 0x320
void MenuNum_CountUp_NoCar
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x0023aaa0  size 0x350
void ScrGarage_Draw_Sponsors(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar3 = Profile_Get(0);
  MenuWnd_DrawText(0xd4,0x4b,0x283);
  uVar3 = Garage_FindFreeSlot(uVar3);
  MenuWnd_DrawLabel(0xd4,0x4c,0x3d,uVar3,0xf);
  uVar3 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar3 = Msg_RivalNickname(uVar3);
  MenuWnd_DrawText(0xd4,0x4f,uVar3);
  iVar6 = 0;
  do {
    iVar7 = (int)param_1;
    if (iVar6 < 3) {
      uVar8 = *(undefined4 *)
               (iVar7 + ((*(int *)(iVar7 + 0x28) + iVar6) % *(int *)(iVar7 + 0xb4)) * 4 + 0x3c);
    }
    else if (*(char *)(iVar7 + 0x30) == -1) {
      uVar8 = *(undefined4 *)
               (iVar7 + ((*(int *)(iVar7 + 0x28) + -1) % *(int *)(iVar7 + 0xb4)) * 4 + 0x3c);
    }
    else {
      uVar8 = *(undefined4 *)
               (iVar7 + ((*(int *)(iVar7 + 0x28) + iVar6) % *(int *)(iVar7 + 0xb4)) * 4 + 0x3c);
    }
    iVar2 = UiMgr_FindLayout(0xd4);
    pUVar1 = g_UiMgr->slots;
    uVar3 = MsgId_Symbol(uVar8);
    UiElem_SetPropInt(&pUVar1[iVar2].layout,iVar6 + 0x55,0x16,uVar3);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  uVar3 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar3 = Msg_TeamInfo(uVar3);
  uVar4 = Msg_MakerCountry(uVar3);
  uVar3 = Msg_MakerInfo(uVar3);
  MenuWnd_DrawLabel(0xd4,0x4e,0x45,uVar4,uVar3);
  MenuWnd_DrawText(0xd4,0x4d,0x284);
  uVar3 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar3 = Msg_TeamName(uVar3);
  MenuWnd_DrawNumber(0xd4,0x4a,uVar3);
  lVar5 = maybe_Sponsor_IsUnlocked(param_1);
  if (lVar5 == 0) {
    iVar6 = UiMgr_FindLayout(0xd4);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,0x3f,8);
  }
  else {
    iVar6 = UiMgr_FindLayout(0xd4);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar6].layout,0x3f,8);
  }
  uVar3 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar3 = MsgId_PartDescription(uVar3);
  MenuWnd_DrawText(0xd4,0x50,uVar3);
  if ((*(int *)(iVar7 + 0xb4) < 3) && (iVar6 = 0, 0 < 3 - *(int *)(iVar7 + 0xb4))) {
    do {
      iVar2 = UiMgr_FindLayout(0xd4);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x57 - iVar6,8);
      iVar2 = UiMgr_FindLayout(0xd4);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x53 - iVar6,8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3 - *(int *)(iVar7 + 0xb4));
  }
  iVar6 = UiMgr_FindLayout(0xd4);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
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
  UiLayout_UpdateAnimById(0xd3,0);
  iVar1 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0023aef0  size 0x434
void ScrCareer_Draw_ContractMoney(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  iVar2 = *(int *)(iVar8 + 0x14);
  *(undefined4 *)(iVar8 + 0x14) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(399);
    iVar2 = UiMgr_FindLayout(0xd6);
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
    uVar3 = UiRes_GetLayoutData(400);
    iVar2 = UiMgr_FindLayout(0xd6);
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
    iVar2 = UiMgr_FindLayout(0xd6);
    pUVar1 = g_UiMgr->slots;
    uVar6 = UiRes_GetLayoutData(400);
    UiLayout_PlayAnim(&pUVar1[iVar2].layout,uVar6);
    uVar3 = UiRes_GetLayoutData(0x18a);
    iVar2 = UiMgr_FindLayout(0xd4);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    uVar3 = UiRes_GetLayoutData(0x18e);
    iVar2 = UiMgr_FindLayout(0xd5);
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
  }
  lVar4 = UiLayout_UpdateAnimById(0xd4,8);
  lVar5 = UiLayout_UpdateAnimById(0xd5,1);
  if ((lVar4 == 0 && lVar5 == 0) && (lVar4 = UiLayout_UpdateAnimById(0xd6,0), lVar4 == 0)) {
    *(undefined4 *)(iVar8 + 0x10) = 0;
  }
  if ((*(int *)(iVar8 + 0x18) != 0) && (lVar4 = UiLayout_UpdateAnimById(0xd6), lVar4 == 0)) {
    *(undefined4 *)(iVar8 + 0x18) = 0;
  }
  uVar6 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar6 = Msg_RivalNickname(uVar6);
  MenuWnd_DrawLabel(0xd6,0x28,0x286,uVar6);
  uVar6 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar6 = Msg_TeamInfo(uVar6);
  uVar7 = Msg_MakerCountry(uVar6);
  uVar6 = Msg_MakerInfo(uVar6);
  MenuWnd_DrawLabel(0xd6,0x27,0x45,uVar7,uVar6);
  MenuWnd_DrawText(0xd6,0x26,0x284);
  uVar6 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar6 = Msg_TeamName(uVar6);
  MenuWnd_DrawNumber(0xd6,0x29,uVar6);
  iVar2 = UiMgr_FindLayout(0xd6);
  pUVar1 = g_UiMgr->slots;
  uVar6 = maybe_Sponsor_GetCycledEntry(param_1);
  uVar6 = MsgId_Symbol(uVar6);
  UiElem_SetPropInt(&pUVar1[iVar2].layout,0x24,0x16,uVar6);
  UiLayout_UpdateAnimById(0xd3,0);
  iVar2 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  ScrGarage_Draw_Sponsors(param_1);
  ScrGarage_Draw_NoCarIs(param_1);
  iVar2 = UiMgr_FindLayout(0xd6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
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
  UiLayout_UpdateAnimById(0xd3,0);
  iVar1 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
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
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  iVar3 = piVar5[5];
  piVar5[5] = 0;
  if (iVar3 == 0) {
    iVar3 = piVar5[0x49];
  }
  else {
    uVar2 = UiRes_GetLayoutData(0x18d);
    iVar3 = UiMgr_FindLayout(0xd5);
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
    uVar2 = UiRes_GetLayoutData(0x18e);
    iVar3 = UiMgr_FindLayout(0xd5);
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
    MenuWnd_DrawDialogText(0xd5,0x36ea98,2,0);
    iVar3 = piVar5[0x49];
  }
  MenuWnd_DrawCursor(6 < iVar3);
  if (piVar5[0xd] == 0) {
    iVar3 = UiMgr_FindLayout(0xd5);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x2c,8);
    iVar3 = *piVar5;
  }
  else {
    if (piVar5[0x49] + -6 == piVar5[0xd]) {
      iVar3 = UiMgr_FindLayout(0xd5);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x2d,8);
    }
    iVar3 = *piVar5;
  }
  if (iVar3 == 3) {
    piVar5[4] = 0;
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xd5,0);
    if (lVar4 == 0) {
      piVar5[4] = 0;
    }
  }
  if ((piVar5[6] != 0) &&
     ((MenuWnd_DrawCursor(0), piVar5[2] != 0 ||
      (lVar4 = UiLayout_UpdateAnimById(0xd5,1), lVar4 == 0)))) {
    piVar5[6] = 0;
  }
  UiLayout_UpdateAnimById(0xd3,0);
  iVar3 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
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
  UiLayout_UpdateAnimById(0xd3,0);
  iVar1 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  ScrGarage_Draw_Sponsors(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0023b7d0  size 0xa00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage20; on-screen text/callee hint "GarageDrawSponsors" (was
   ScrScrGarageDrawSponsors_Enter) */

void maybe_PageSponsors_State0_GarageDrawSponsors(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar3 = piVar7[5];
  piVar7[5] = 0;
  if (iVar3 != 0) {
    if (*piVar7 == 2) {
      iVar3 = piVar7[0xb];
      if (iVar3 == 2) {
        uVar2 = UiRes_GetLayoutData(0x185);
        iVar3 = UiMgr_FindLayout(0xd4);
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
      }
      else if (iVar3 == 1) {
        uVar2 = UiRes_GetLayoutData(0x184);
        iVar3 = UiMgr_FindLayout(0xd4);
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
      }
      else if (iVar3 == 0) {
        uVar2 = UiRes_GetLayoutData(0x183);
        iVar3 = UiMgr_FindLayout(0xd4);
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
      }
    }
    else {
      if (*piVar7 == 4) {
        iVar3 = UiMgr_FindLayout(0xd4);
        pUVar1 = g_UiMgr->slots;
        uVar6 = UiRes_GetLayoutData(0x183);
        UiLayout_PlayAnim(&pUVar1[iVar3].layout,uVar6);
        iVar3 = *piVar7;
      }
      else {
        iVar3 = *piVar7;
      }
      if (iVar3 == 1) {
        iVar3 = UiMgr_FindLayout(0xd4);
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
      }
      else {
        uVar2 = UiRes_GetLayoutData(0x182);
        iVar3 = UiMgr_FindLayout(0xd4);
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
      }
    }
    uVar2 = UiRes_GetLayoutData(0x40f);
    iVar3 = UiMgr_FindLayout(0xd4);
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
    uVar2 = UiRes_GetLayoutData(0x410);
    iVar3 = UiMgr_FindLayout(0xd4);
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
    uVar2 = UiRes_GetLayoutData(0x186);
    iVar3 = UiMgr_FindLayout(0xd4);
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
    uVar2 = UiRes_GetLayoutData(0x187);
    iVar3 = UiMgr_FindLayout(0xd4);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    uVar2 = UiRes_GetLayoutData(0x188);
    iVar3 = UiMgr_FindLayout(0xd4);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    uVar2 = UiRes_GetLayoutData(0x189);
    iVar3 = UiMgr_FindLayout(0xd4);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    uVar2 = UiRes_GetLayoutData(0x18b);
    iVar3 = UiMgr_FindLayout(0xd4);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3c8 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3d0 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 1;
    uVar2 = UiRes_GetLayoutData(0x18c);
    iVar3 = UiMgr_FindLayout(0xd4);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3d8 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3e4 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3d4 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3e4 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3e0 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3e0 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3d4 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3e4 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3e0 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3e0 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3dc = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3e4 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3e0 = 1;
    MenuWnd_DrawDialogText(0xd4,0x36ea90,2,0);
    Menu_ClearSlot(0);
  }
  if ((((piVar7[4] == 0) && (piVar7[6] == 0)) && (lVar4 = MenuMgr_Goto(), lVar4 == 0)) &&
     (3 < piVar7[0x2d])) {
    MenuWnd_DrawCursor(1);
    iVar3 = *piVar7;
  }
  else {
    MenuWnd_DrawCursor(0);
    iVar3 = *piVar7;
  }
  if (iVar3 == 1) {
    lVar4 = UiLayout_UpdateAnimById(0xd4,0);
    if (lVar4 == 0) {
      piVar7[4] = 0;
    }
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xd4,0);
    lVar5 = UiLayout_UpdateAnimById(0xd4,1);
    if (lVar4 == 0 && lVar5 == 0) {
      piVar7[4] = 0;
    }
  }
  if (piVar7[6] != 0) {
    if (piVar7[2] == 2) {
      iVar3 = piVar7[0xb] + 5;
    }
    else if (piVar7[2] == 1) {
      iVar3 = -1;
    }
    else {
      iVar3 = 4;
    }
    if (iVar3 != -1) {
      lVar4 = UiLayout_UpdateAnimById(0xd4);
      lVar5 = UiLayout_UpdateAnimById(0xd4,2);
      if (lVar4 != 0 || lVar5 != 0) goto LAB_0023bff8;
    }
    piVar7[6] = 0;
  }
LAB_0023bff8:
  if ((char)piVar7[0xc] == '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    if (((*_g_MenuInput == 1) && (piVar7[4] == 0)) && (piVar7[6] == 0)) {
      MenuWnd_SetItemState(0xd4,*(undefined4 *)(&DAT_0032b728 + piVar7[0xb] * 4),0,0);
    }
  }
  else {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    if ((char)piVar7[0xc] == -1) {
      lVar4 = UiLayout_UpdateAnimById(0xd4,9);
      if (lVar4 == 0) {
        *(undefined1 *)(piVar7 + 0xc) = 0;
        iVar3 = UiMgr_FindLayout(0xd4);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar3].layout.field_0x3c0 = 0;
        if (*(int *)&pUVar1[iVar3].layout.field_0x3d0 == 0) {
          *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xd4,10);
      if (lVar4 == 0) {
        *(undefined1 *)(piVar7 + 0xc) = 0;
        iVar3 = UiMgr_FindLayout(0xd4);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar3].layout.field_0x3d4 = 0;
        if (*(int *)&pUVar1[iVar3].layout.field_0x3e4 == 0) {
          *(undefined4 *)&pUVar1[iVar3].layout.field_0x3e0 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar3].layout.field_0x3e0 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  UiLayout_UpdateAnimById(0xd3,0);
  iVar3 = UiMgr_FindLayout(0xd3);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  ScrGarage_Draw_Sponsors(param_1);
  lVar4 = maybe_Sponsor_IsUnlocked(param_1);
  uVar6 = 0x281;
  if (lVar4 == 0) {
    uVar6 = 0x282;
  }
  MenuWnd_SetTitle(3,uVar6);
  return;
}

