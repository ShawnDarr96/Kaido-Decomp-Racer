// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00248000 - 0x0024c000
#include "ghidra_types.h"

// 0x00248970  size 0x9bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_GoBattle_8970(undefined8 param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  UiLayoutSlot *pUVar3;
  UiLayoutSlot *pUVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  undefined4 auStack_300 [96];
  undefined4 auStack_180 [11];
  byte bStack_154;
  
  UiMgr_FindLayout(0x84);
  UiMgr_FindLayout(0x85);
  iVar8 = UiMgr_FindLayout(7);
  pUVar2 = g_UiMgr->slots;
  UiMgr_FindLayout(0x86);
  UiMgr_FindLayout(0x7b);
  iVar9 = UiMgr_FindLayout(0x7a);
  iVar15 = (int)param_1;
  iVar16 = *(int *)(iVar15 + 0x65c);
  pUVar3 = g_UiMgr->slots;
  *(undefined4 *)(iVar15 + 0x65c) = 0;
  if (iVar16 != 0) {
    uVar10 = UiRes_GetLayoutData(0x6c);
    iVar16 = UiMgr_FindLayout(0x7a);
    pUVar4 = g_UiMgr->slots;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x30c = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x31c == 0) {
      pUVar4[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar4[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x30c = 0;
    if (*(int *)&pUVar4[iVar16].layout.field_0x31c == 0) {
      pUVar4[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar4[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x31c = uVar10;
    pUVar4[iVar16].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x6d);
    iVar16 = UiMgr_FindLayout(0x7a);
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
    *(undefined4 *)&pUVar4[iVar16].layout.field_0x330 = uVar10;
    pUVar4[iVar16].layout.animState = 1;
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  lVar11 = UiLayout_UpdateAnimById(0x7a,0);
  if (lVar11 == 0) {
    *(undefined4 *)(iVar15 + 0x658) = 0;
  }
  if ((*(int *)(iVar15 + 0x660) != 0) && (lVar11 = UiLayout_UpdateAnimById(0x7a), lVar11 == 0)) {
    if ((*(int *)(iVar15 + 0x650) == 0x10) || (*(int *)(iVar15 + 0x650) == 0x12)) {
      UiElem_SetPropFloat(0,&pUVar2[iVar8].layout,0x25,8);
    }
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    *(undefined4 *)(iVar15 + 0x660) = 0;
  }
  if (((g_MenuMgr->prevScreen == 0xf) && (*(int *)(iVar15 + 0x680) == 1)) &&
     (g_MenuMgr->nextScreen != 0xf)) {
    if (*(int *)(iVar15 + 0xe4) != -1) {
      iVar16 = 0;
      puVar14 = &DAT_0032c890;
      do {
        iVar8 = UiMgr_FindLayout(0x87);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,*puVar14,8);
        iVar16 = iVar16 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar16 < 6);
    }
    iVar16 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar16].layout,_s_ScrCareer_Draw_GoBattle_8970_1,8);
    iVar16 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar16].layout,_s_ScrCareer_Draw_GoBattle_8970_2,8);
    iVar16 = UiMgr_FindLayout(0x84);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar16].layout,0xe,8);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    uVar5 = *(uint *)(iVar15 + 0x6a8);
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = uVar5;
        break;
      case 2:
        g_MenuMgr->unk_05dc = uVar5;
        break;
      case 3:
        g_MenuMgr->unk_05fc = uVar5;
        break;
      case 4:
        g_MenuMgr->unk_0618 = uVar5;
      }
    }
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x124,0);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    *(undefined4 *)(iVar15 + 0x680) = 0;
    uVar10 = UiRes_GetLayoutData(0x8e);
    iVar16 = UiMgr_FindLayout(0x87);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x31c == 0) {
      pUVar2[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x31c == 0) {
      pUVar2[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x314 = 1;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x31c = uVar10;
    pUVar2[iVar16].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x26b);
    iVar16 = UiMgr_FindLayout(0x87);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x330 == 0) {
      pUVar2[iVar16].layout.animState = 0;
    }
    else {
      pUVar2[iVar16].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x330 == 0) {
      pUVar2[iVar16].layout.animState = 0;
    }
    else {
      pUVar2[iVar16].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x328 = 1;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x330 = uVar10;
    pUVar2[iVar16].layout.animState = 1;
    uVar10 = UiRes_GetLayoutData(0x26c);
    iVar16 = UiMgr_FindLayout(0x87);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x344 = uVar10;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 1;
    uVar10 = UiRes_GetLayoutData(0x26d);
    iVar16 = UiMgr_FindLayout(0x87);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x350 = 1;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x358 = uVar10;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 1;
    uVar10 = UiRes_GetLayoutData(0x26e);
    iVar16 = UiMgr_FindLayout(0x87);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x36c = uVar10;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x368 = 1;
    uVar10 = UiRes_GetLayoutData(0x26f);
    iVar16 = UiMgr_FindLayout(0x87);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x380 = uVar10;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x37c = 1;
    uVar10 = UiRes_GetLayoutData(0x8c);
    iVar16 = UiMgr_FindLayout(0x84);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x31c == 0) {
      pUVar2[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x31c == 0) {
      pUVar2[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x31c = uVar10;
    pUVar2[iVar16].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x8d);
    iVar16 = UiMgr_FindLayout(0x84);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x330 == 0) {
      pUVar2[iVar16].layout.animState = 0;
    }
    else {
      pUVar2[iVar16].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x330 == 0) {
      pUVar2[iVar16].layout.animState = 0;
    }
    else {
      pUVar2[iVar16].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x330 = uVar10;
    pUVar2[iVar16].layout.animState = 1;
  }
  MenuWnd_DrawText(0x7a,0x1a,0x362);
  MenuWnd_DrawText(0x7a,0x19,0x363);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(iVar15 + 0x62c) * 4 + 0x36eb98));
  iVar16 = RivalDb_Get(*(undefined2 *)(iVar15 + 0x24));
  uVar12 = RaceCtx_Get_10();
  cVar7 = Race_IsTimeTrialMode(uVar12,0);
  if (cVar7 == '\0') {
    if (*(short *)(iVar16 + 0x3a) < *(short *)(iVar16 + 0x38)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
  }
  else if (*(short *)(iVar16 + 0x3a) < *(short *)(iVar16 + 0x38)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    MenuWnd_DrawText(0x7a,0x1b,0x4a);
    uVar1 = *(undefined2 *)(iVar15 + 0x24);
  }
  else {
    MenuWnd_DrawText(0x7a,0x1b,0x49);
    uVar1 = *(undefined2 *)(iVar15 + 0x24);
  }
  RivalDb_Copy(auStack_300,uVar1);
  puVar13 = auStack_300;
  puVar14 = auStack_180;
  iVar16 = 0x5f;
  do {
    iVar16 = iVar16 + -1;
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  } while (0 < iVar16);
  UiElem_SetPropInt(&pUVar3[iVar9].layout,0x18,0x16,
                    *(undefined4 *)(&DAT_0032c870 + (uint)bStack_154 * 4));
  ScrCareer_Draw_MasterLord(param_1);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState
              (0x7a,*(undefined4 *)
                     (&s_ScrCareer_Draw_GoBattle_8970_1 + *(int *)(iVar15 + 0x62c) * 4),1,0);
  }
  iVar16 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar16].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  return;
}

// 0x00249330  size 0x9d4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_GoBattle_9330(undefined8 param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  UiLayoutSlot *pUVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  UiLayout *pUVar15;
  int iVar16;
  undefined4 auStack_300 [96];
  undefined4 auStack_180 [11];
  byte bStack_154;
  
  UiMgr_FindLayout(0x84);
  UiMgr_FindLayout(0x85);
  iVar7 = UiMgr_FindLayout(7);
  pUVar15 = &g_UiMgr->slots[iVar7].layout;
  UiMgr_FindLayout(0x86);
  UiMgr_FindLayout(0x7b);
  iVar8 = UiMgr_FindLayout(0x7a);
  iVar16 = (int)param_1;
  iVar7 = *(int *)(iVar16 + 0x65c);
  pUVar2 = g_UiMgr->slots;
  *(undefined4 *)(iVar16 + 0x65c) = 0;
  if (iVar7 != 0) {
    uVar10 = UiRes_GetLayoutData(0x6c);
    iVar7 = UiMgr_FindLayout(0x7a);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x31c == 0) {
      pUVar3[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x31c == 0) {
      pUVar3[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x31c = uVar10;
    pUVar3[iVar7].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x6d);
    iVar7 = UiMgr_FindLayout(0x7a);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x330 == 0) {
      pUVar3[iVar7].layout.animState = 0;
    }
    else {
      pUVar3[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x330 == 0) {
      pUVar3[iVar7].layout.animState = 0;
    }
    else {
      pUVar3[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x330 = uVar10;
    pUVar3[iVar7].layout.animState = 1;
    Menu_ClearSlot(0);
    if (*(int *)(iVar16 + 0x648) == 0xe) {
      UiElem_SetPropFloat(0x3f800000,pUVar15,0x25,8);
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  lVar11 = UiLayout_UpdateAnimById(0x7a,0);
  if (lVar11 == 0) {
    *(undefined4 *)(iVar16 + 0x658) = 0;
  }
  if (((g_MenuMgr->prevScreen == 0xf) && (*(int *)(iVar16 + 0x680) == 1)) &&
     (g_MenuMgr->nextScreen != 0xf)) {
    if (*(int *)(iVar16 + 0xe4) != -1) {
      iVar7 = 0;
      puVar14 = &DAT_0032c850;
      do {
        iVar9 = UiMgr_FindLayout(0x87);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar9].layout,*puVar14,8);
        iVar7 = iVar7 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar7 < 6);
    }
    iVar7 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,_s_ScrCareer_Draw_GoBattle_9330_1,8);
    iVar7 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,_s_ScrCareer_Draw_GoBattle_9330_2,8);
    iVar7 = UiMgr_FindLayout(0x84);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,0xe,8);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    uVar4 = *(uint *)(iVar16 + 0x6a8);
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = uVar4;
        break;
      case 2:
        g_MenuMgr->unk_05dc = uVar4;
        break;
      case 3:
        g_MenuMgr->unk_05fc = uVar4;
        break;
      case 4:
        g_MenuMgr->unk_0618 = uVar4;
      }
    }
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x124,0);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    *(undefined4 *)(iVar16 + 0x680) = 0;
    uVar10 = UiRes_GetLayoutData(0x8e);
    iVar7 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x31c == 0) {
      pUVar3[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x31c == 0) {
      pUVar3[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x314 = 1;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x31c = uVar10;
    pUVar3[iVar7].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x26b);
    iVar7 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x330 == 0) {
      pUVar3[iVar7].layout.animState = 0;
    }
    else {
      pUVar3[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x330 == 0) {
      pUVar3[iVar7].layout.animState = 0;
    }
    else {
      pUVar3[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x328 = 1;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x330 = uVar10;
    pUVar3[iVar7].layout.animState = 1;
    uVar10 = UiRes_GetLayoutData(0x26c);
    iVar7 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x344 = uVar10;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 1;
    uVar10 = UiRes_GetLayoutData(0x26d);
    iVar7 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x350 = 1;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x358 = uVar10;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 1;
    uVar10 = UiRes_GetLayoutData(0x26e);
    iVar7 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x36c = uVar10;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x368 = 1;
    uVar10 = UiRes_GetLayoutData(0x26f);
    iVar7 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x380 = uVar10;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x37c = 1;
    uVar10 = UiRes_GetLayoutData(0x8c);
    iVar7 = UiMgr_FindLayout(0x84);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x31c == 0) {
      pUVar3[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x31c == 0) {
      pUVar3[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x31c = uVar10;
    pUVar3[iVar7].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x8d);
    iVar7 = UiMgr_FindLayout(0x84);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x330 == 0) {
      pUVar3[iVar7].layout.animState = 0;
    }
    else {
      pUVar3[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x330 == 0) {
      pUVar3[iVar7].layout.animState = 0;
    }
    else {
      pUVar3[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x330 = uVar10;
    pUVar3[iVar7].layout.animState = 1;
  }
  if ((*(int *)(iVar16 + 0x660) != 0) && (lVar11 = UiLayout_UpdateAnimById(0x7a), lVar11 == 0)) {
    if (*(int *)(iVar16 + 0x650) == 0xe) {
      UiElem_SetPropFloat(0,pUVar15,0x25,8);
      *(undefined4 *)(iVar16 + 0x660) = 0;
    }
    else {
      *(undefined4 *)(iVar16 + 0x660) = 0;
    }
  }
  MenuWnd_DrawText(0x7a,0x1a,0x362);
  MenuWnd_DrawText(0x7a,0x19,0x363);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(iVar16 + 0x62c) * 4 + 0x36eb88));
  iVar7 = RivalDb_Get(*(undefined2 *)(iVar16 + 0x24));
  uVar12 = RaceCtx_Get_10();
  cVar6 = Race_IsTimeTrialMode(uVar12,0);
  if (cVar6 == '\0') {
    if (*(short *)(iVar7 + 0x3a) < *(short *)(iVar7 + 0x38)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  else if (*(short *)(iVar7 + 0x3a) < *(short *)(iVar7 + 0x38)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    MenuWnd_DrawText(0x7a,0x1b,0x4a);
    uVar1 = *(undefined2 *)(iVar16 + 0x24);
  }
  else {
    MenuWnd_DrawText(0x7a,0x1b,0x49);
    uVar1 = *(undefined2 *)(iVar16 + 0x24);
  }
  RivalDb_Copy(auStack_300,uVar1);
  puVar13 = auStack_300;
  puVar14 = auStack_180;
  iVar7 = 0x5f;
  do {
    iVar7 = iVar7 + -1;
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  } while (0 < iVar7);
  UiElem_SetPropInt(&pUVar2[iVar8].layout,0x18,0x16,
                    *(undefined4 *)(&DAT_0032c830 + (uint)bStack_154 * 4));
  ScrCareer_Draw_MasterLord(param_1);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState
              (0x7a,*(undefined4 *)
                     (&s_ScrCareer_Draw_GoBattle_9330_1 + *(int *)(iVar16 + 0x62c) * 4),1,0);
  }
  iVar7 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  return;
}

// 0x00249d10  size 0x3d4
/* state of maybe_PageBetCar; on-screen text/callee hint "DrawGetPrize" (was ScrDraw_GetPrize_Exit)
    */

void maybe_PageBetCar_State33_DrawGetPrize(int param_1)

{
  undefined2 *puVar1;
  short sVar2;
  MenuMgr *pMVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  iVar4 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x195);
    pMVar3 = g_MenuMgr;
    g_MenuMgr->unk_0350 = 0xffffffff;
    *(undefined4 *)&pMVar3->field_0x35c = 0;
    *(undefined4 *)&pMVar3->field_0x34c = 0;
    if (*(int *)&pMVar3->field_0x35c == 0) {
      *(undefined4 *)&pMVar3->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar3->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar3->field_0x34c = 0;
    if (*(int *)&pMVar3->field_0x35c == 0) {
      *(undefined4 *)&pMVar3->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar3->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar3->field_0x354 = 0;
    *(undefined4 *)&pMVar3->field_0x35c = uVar5;
    *(undefined4 *)&pMVar3->field_0x358 = 1;
    Menu_ClearSlot(0);
    iVar4 = UiMgr_FindLayout(0x97);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0,8);
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x126,3);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    pMVar3 = g_MenuMgr;
    sVar2 = *(short *)(param_1 + 0x498);
    uVar9 = 0;
    g_MenuMgr->unk_0538 = 0;
    *(int *)&pMVar3->field_0x53c = (int)sVar2;
    g_MenuMgr->unk_0544 = (int)*(short *)(param_1 + 0x49a);
    iVar4 = param_1;
    do {
      uVar15 = uVar9 + 1;
      uVar10 = uVar9 + 2;
      uVar16 = uVar9 + 3;
      uVar11 = uVar9 + 4;
      *(undefined2 *)(&g_MenuMgr->field_0x548 + (uVar9 & 0xff) * 2) = *(undefined2 *)(iVar4 + 0x508)
      ;
      uVar12 = uVar9 + 5;
      uVar13 = uVar9 + 6;
      uVar9 = uVar9 + 7;
      *(undefined2 *)(&g_MenuMgr->field_0x548 + (uVar15 & 0xff) * 2) =
           *(undefined2 *)(iVar4 + 0x50c);
      *(undefined2 *)(&g_MenuMgr->field_0x548 + (uVar10 & 0xff) * 2) =
           *(undefined2 *)(iVar4 + 0x510);
      *(undefined2 *)(&g_MenuMgr->field_0x548 + (uVar16 & 0xff) * 2) =
           *(undefined2 *)(iVar4 + 0x514);
      *(undefined2 *)(&g_MenuMgr->field_0x548 + (uVar11 & 0xff) * 2) =
           *(undefined2 *)(iVar4 + 0x518);
      *(undefined2 *)(&g_MenuMgr->field_0x548 + (uVar12 & 0xff) * 2) =
           *(undefined2 *)(iVar4 + 0x51c);
      puVar1 = (undefined2 *)(iVar4 + 0x520);
      iVar4 = iVar4 + 0x1c;
      *(undefined2 *)(&g_MenuMgr->field_0x548 + (uVar13 & 0xff) * 2) = *puVar1;
    } while ((int)uVar9 < 0x15);
    iVar14 = 0;
    iVar6 = 0;
    iVar4 = param_1;
    do {
      iVar14 = iVar14 + 8;
      *(undefined2 *)(&g_MenuMgr->field_0x572 + iVar6) = *(undefined2 *)(iVar4 + 0x4e8);
      *(undefined2 *)(&g_MenuMgr->field_0x574 + iVar6) = *(undefined2 *)(iVar4 + 0x4ea);
      *(undefined2 *)(&g_MenuMgr->field_0x576 + iVar6) = *(undefined2 *)(iVar4 + 0x4ec);
      *(undefined2 *)(&g_MenuMgr->field_0x578 + iVar6) = *(undefined2 *)(iVar4 + 0x4ee);
      *(undefined2 *)(&g_MenuMgr->field_0x57a + iVar6) = *(undefined2 *)(iVar4 + 0x4f0);
      *(undefined2 *)(&g_MenuMgr->field_0x57c + iVar6) = *(undefined2 *)(iVar4 + 0x4f2);
      *(undefined2 *)(&g_MenuMgr->field_0x57e + iVar6) = *(undefined2 *)(iVar4 + 0x4f4);
      puVar1 = (undefined2 *)(iVar4 + 0x4f6);
      iVar4 = iVar4 + 0x10;
      *(undefined2 *)(&g_MenuMgr->field_0x580 + iVar6) = *puVar1;
      iVar6 = iVar6 + 0x10;
    } while (iVar14 < 0x10);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  lVar7 = UiLayout_UpdateAnimIfActive(&g_MenuMgr->field_0x40,0);
  if (lVar7 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  *(undefined4 *)(param_1 + 0x660) = 0;
  MenuWnd_DrawStatus(*(undefined2 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar4 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x97);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  puVar17 = &g_MenuMgr->field_0x40;
  uVar8 = MenuText_RivalCar(*(undefined2 *)(param_1 + 0x498),0xffffffffffffffff);
  UiElem_SetPropInt(puVar17,0,0x16,uVar8);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x0024a0f0  size 0x24c
void MenuScr_Draw_GetPrize_a0f0(int param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x648) != 0x2a) {
      uVar2 = UiRes_GetLayoutData(0x116);
      iVar3 = UiMgr_FindLayout(0x98);
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
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x648) != 0x2a) {
      g_MenuMgr->unk_05f0 = *(uint *)(&DAT_0032c790 + *(int *)(param_1 + 0x484) * 4);
      Menu_SetField_8_9610(&g_MenuMgr->unk_05f0,1);
      Menu_ShowDialog(&g_MenuMgr->field_0x654,0x126,3);
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  if (*(int *)(param_1 + 0x648) == 0x2a) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0x98,0);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawLabel(0x98,0xf,0x3a,*(int *)(param_1 + 0x484) + 1);
  MenuWnd_DrawText(0x98,0x11,*(int *)(param_1 + 0x484) + 0x89f);
  MenuWnd_DrawText(0x98,0x10,0x2f8);
  iVar3 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x98);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  return;
}

// 0x0024a340  size 0x25c
/* state of maybe_PageBetCar; on-screen text/callee hint "DrawGetPrize" (was ScrDraw_GetPrize_Enter)
    */

void maybe_PageBetCar_State31_DrawGetPrize(int param_1)

{
  MenuMgr *pMVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_600 [8];
  undefined4 uStack_5f8;
  undefined1 auStack_480 [8];
  undefined4 uStack_478;
  undefined1 auStack_300 [12];
  uint uStack_2f4;
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x648) != 0x29) {
      uVar3 = UiRes_GetLayoutData(0x195);
      pMVar1 = g_MenuMgr;
      g_MenuMgr->unk_0350 = 0xffffffff;
      *(undefined4 *)&pMVar1->field_0x35c = 0;
      *(undefined4 *)&pMVar1->field_0x34c = 0;
      if (*(int *)&pMVar1->field_0x35c == 0) {
        *(undefined4 *)&pMVar1->field_0x358 = 0;
      }
      else {
        *(undefined4 *)&pMVar1->field_0x358 = 1;
      }
      *(undefined4 *)&pMVar1->field_0x34c = 0;
      if (*(int *)&pMVar1->field_0x35c == 0) {
        *(undefined4 *)&pMVar1->field_0x358 = 0;
      }
      else {
        *(undefined4 *)&pMVar1->field_0x358 = 1;
      }
      *(undefined4 *)&pMVar1->field_0x354 = 0;
      *(undefined4 *)&pMVar1->field_0x35c = uVar3;
      *(undefined4 *)&pMVar1->field_0x358 = 1;
    }
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x648) != 0x29) {
      RivalDb_Copy(auStack_180,*(undefined2 *)(param_1 + 0x484));
      pMVar1 = g_MenuMgr;
      g_MenuMgr->unk_0538 = 0;
      *(undefined4 *)&pMVar1->field_0x53c = uStack_178;
      RivalDb_Copy(auStack_300,*(undefined2 *)(param_1 + 0x484));
      g_MenuMgr->unk_0544 = uStack_2f4;
      Menu_ShowDialog(&g_MenuMgr->field_0x654,0x126,3);
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  if (*(int *)(param_1 + 0x648) == 0x29) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    lVar5 = UiLayout_UpdateAnimIfActive(&g_MenuMgr->field_0x40,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  RivalDb_Copy(auStack_480,*(undefined2 *)(param_1 + 0x484));
  MenuWnd_DrawStatus(uStack_478,0xffffffffffffffff,0xffffffffffffffff,0);
  iVar2 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x97);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  puVar6 = &g_MenuMgr->field_0x40;
  RivalDb_Copy(auStack_600,*(undefined2 *)(param_1 + 0x484));
  uVar4 = MenuText_RivalCar(uStack_5f8,0xffffffffffffffff);
  UiElem_SetPropInt(puVar6,0,0x16,uVar4);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x0024a5a0  size 0x2c4
void ScrCareer_Draw_EnableAutomaticGear(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x62c),0x36eb78);
  MenuWnd_DrawText(5,0x1c,0x378);
  if (*(int *)(param_1 + 0x660) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0x660) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0036eb80 + *(int *)(param_1 + 0x62c) * 4));
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x24),0xfffffffffffffffd,0xffffffffffffffff,0);
  uVar4 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar4);
  if (cVar1 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar2 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar2 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  }
  iVar2 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  cVar1 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448));
  if ((cVar1 == '\x06') || (cVar1 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar1 == '\a')
     ) {
    puVar5 = &g_MenuMgr->field_0x40;
    uVar4 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0xbc),0xffffffffffffffff);
    UiElem_SetPropInt(puVar5,0,0x16,uVar4);
  }
  else {
    puVar5 = &g_MenuMgr->field_0x40;
    RivalDb_Copy(auStack_180,*(undefined2 *)(param_1 + 0x24));
    uVar4 = MenuText_RivalCar(uStack_178,0xffffffffffffffff);
    UiElem_SetPropInt(puVar5,0,0x16,uVar4);
  }
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x0024a870  size 0x314
void ScrCareer_Draw_EnableAutomaticGear_a870(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined2 auStack_1c0 [104];
  undefined2 auStack_f0 [104];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x62c),0x36eb68);
  MenuWnd_DrawText(5,0x1c,0x378);
  if (*(int *)(param_1 + 0x660) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0x660) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x688) == 0) {
    MenuWnd_DrawLabel(0x8a,0x3b,0x3b,*(int *)(param_1 + 0x6a0) + 1,*(undefined4 *)(param_1 + 0x444))
    ;
    iVar2 = *(int *)(param_1 + 0x62c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x62c);
  }
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(iVar2 * 4 + 0x36eb70));
  if (*(int *)(param_1 + 0x688) == 0) {
    uVar4 = Profile_Get(0);
    Profile_CopyCarRecord
              (auStack_f0,uVar4,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0));
    MenuWnd_DrawStatus(auStack_f0[0],0xffffffffffffffff,0xffffffffffffffff,0);
  }
  else {
    RaceResult_BuildMessage(auStack_10,*(undefined2 *)(param_1 + 0x24));
    MenuWnd_DrawStatus(uStack_c,0xffffffffffffffff,0xffffffffffffffff,0);
  }
  iVar2 = UiMgr_FindLayout(0x8a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  uVar4 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar4);
  if (cVar1 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar2 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
    iVar2 = *(int *)(param_1 + 0x688);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar2 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
    iVar2 = *(int *)(param_1 + 0x688);
  }
  if (iVar2 == 0) {
    puVar5 = &g_MenuMgr->field_0x40;
    uVar4 = Profile_Get(0);
    Profile_CopyCarRecord
              (auStack_1c0,uVar4,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0));
    uVar4 = MenuText_RivalCar(auStack_1c0[0],0xffffffffffffffff);
    UiElem_SetPropInt(puVar5,0,0x16,uVar4);
  }
  else {
    puVar5 = &g_MenuMgr->field_0x40;
    RaceResult_BuildMessage(auStack_20,*(undefined2 *)(param_1 + 0x24));
    uVar4 = MenuText_RivalCar(uStack_1c,0xffffffffffffffff);
    UiElem_SetPropInt(puVar5,0,0x16,uVar4);
  }
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x0024ab90  size 0x118
void ScrCareer_Draw_EnableAutomaticGear_ab90(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x65c);
  *(undefined4 *)(iVar3 + 0x65c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x62c),0x36eb58);
  MenuWnd_DrawText(5,0x1c,0x378);
  if (*(int *)(iVar3 + 0x660) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x660) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x658) = 0;
  }
  ScrCareer_Draw_MasterLord(param_1);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(iVar3 + 0x62c) * 4 + 0x36eb60));
  return;
}

// 0x0024acb0  size 0x118
void ScrCareer_Draw_EnableAutomaticGear_acb0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x65c);
  *(undefined4 *)(iVar3 + 0x65c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x62c),0x36eb48);
  MenuWnd_DrawText(5,0x1c,0x378);
  if (*(int *)(iVar3 + 0x660) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x660) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x658) = 0;
  }
  ScrCareer_Draw_MasterLord(param_1);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(iVar3 + 0x62c) * 4 + 0x36eb50));
  return;
}

// 0x0024add0  size 0x2f8
void ScrCareer_Draw_SponsorBattle(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auStack_180 [384];
  
  iVar10 = (int)param_1;
  iVar3 = *(int *)(iVar10 + 0x65c);
  *(undefined4 *)(iVar10 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x3f6);
    iVar3 = UiMgr_FindLayout(0x8b);
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
    uVar4 = UiRes_GetLayoutData(0x3f7);
    iVar3 = UiMgr_FindLayout(0x8b);
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
    uVar4 = UiRes_GetLayoutData(0x3f8);
    iVar3 = UiMgr_FindLayout(0x8b);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  lVar5 = UiLayout_UpdateAnimById(0x8b,0);
  if (lVar5 == 0) {
    *(undefined4 *)(iVar10 + 0x658) = 0;
  }
  if ((*(int *)(iVar10 + 0x660) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x8b), lVar5 == 0)) {
    *(undefined4 *)(iVar10 + 0x660) = 0;
  }
  ScrCareer_Draw_MasterLord(param_1);
  RivalDb_Copy(auStack_180,*(undefined2 *)(iVar10 + 0x24));
  uVar2 = RivalRec_GetCourse(auStack_180);
  MenuWnd_DrawLabel(0x8b,0x16,0x3b2);
  uVar6 = Msg_RivalNickname(uVar2);
  uVar7 = Msg_TeamInfo(uVar2);
  uVar7 = Msg_MakerCountry(uVar7);
  uVar8 = Msg_TeamInfo(uVar2);
  uVar8 = Msg_MakerInfo(uVar8);
  uVar9 = MsgId_PartDescription(uVar2);
  MenuWnd_DrawLabel(0x8b,0x15,0x3b3,uVar6,uVar7,uVar8,uVar9);
  UiLayout_UpdateAnimById(0x8b,2);
  iVar3 = UiMgr_FindLayout(0x8b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x0024b0d0  size 0x2bc
void ScrCareer_Draw_YouDidNot(int param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x2d0);
    iVar3 = UiMgr_FindLayout(0x76);
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
    uVar4 = UiRes_GetLayoutData(0x2d1);
    iVar3 = UiMgr_FindLayout(0x76);
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
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  lVar5 = UiLayout_UpdateAnimById(0x76,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x76), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  iVar3 = UiMgr_FindLayout(0x76);
  pUVar1 = g_UiMgr->slots;
  uVar6 = MsgId_Symbol(*(undefined4 *)(param_1 + 0x448));
  UiElem_SetPropInt(&pUVar1[iVar3].layout,0x19,0x16,uVar6);
  uVar6 = Msg_RivalNickname(*(undefined4 *)(param_1 + 0x448));
  MenuWnd_DrawLabel(0x76,0x1a,0x137,uVar6);
  iVar3 = UiMgr_FindLayout(0x76);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  uVar6 = Profile_Get(0);
  cVar2 = Profile_GetChapter(uVar6);
  if (cVar2 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar3 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar3 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  }
  return;
}

// 0x0024b390  size 0x324
void ScrCareer_Draw_ContractMoney_b390(int param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x2ce);
    iVar3 = UiMgr_FindLayout(0x75);
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
    uVar4 = UiRes_GetLayoutData(0x2cf);
    iVar3 = UiMgr_FindLayout(0x75);
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
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  lVar5 = UiLayout_UpdateAnimById(0x75,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x75), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  uVar6 = Msg_TeamInfo(*(undefined4 *)(param_1 + 0x448));
  iVar3 = UiMgr_FindLayout(0x75);
  pUVar1 = g_UiMgr->slots;
  uVar7 = MsgId_Symbol(*(undefined4 *)(param_1 + 0x448));
  UiElem_SetPropInt(&pUVar1[iVar3].layout,0x25,0x16,uVar7);
  uVar7 = Msg_RivalNickname(*(undefined4 *)(param_1 + 0x448));
  MenuWnd_DrawLabel(0x75,0x28,0x136,uVar7);
  uVar7 = Msg_MakerCountry(uVar6);
  uVar6 = Msg_MakerName(uVar6);
  MenuWnd_DrawLabel(0x75,0x27,0x45,uVar7,uVar6);
  MenuWnd_DrawText(0x75,0x26,0x129);
  uVar6 = Msg_TeamName(*(undefined4 *)(param_1 + 0x448));
  MenuWnd_DrawNumber(0x75,0x29,uVar6);
  iVar3 = UiMgr_FindLayout(0x75);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  uVar6 = Profile_Get(0);
  cVar2 = Profile_GetChapter(uVar6);
  if (cVar2 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar3 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar3 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  }
  return;
}

// 0x0024b6c0  size 0x3e0
void ScrCareer_Draw_CarToUse(int param_1)

{
  UiLayoutSlot *pUVar1;
  MenuMgr *pMVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  iVar4 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x10c);
    iVar4 = UiMgr_FindLayout(0x89);
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
    uVar5 = UiRes_GetLayoutData(0x195);
    pMVar2 = g_MenuMgr;
    g_MenuMgr->unk_0350 = 0xffffffff;
    *(undefined4 *)&pMVar2->field_0x35c = 0;
    *(undefined4 *)&pMVar2->field_0x34c = 0;
    if (*(int *)&pMVar2->field_0x35c == 0) {
      *(undefined4 *)&pMVar2->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar2->field_0x34c = 0;
    if (*(int *)&pMVar2->field_0x35c == 0) {
      *(undefined4 *)&pMVar2->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar2->field_0x354 = 0;
    *(undefined4 *)&pMVar2->field_0x35c = uVar5;
    *(undefined4 *)&pMVar2->field_0x358 = 1;
    Menu_ClearSlot(0);
    if ((*(int *)(param_1 + 0x648) != 0x25) ||
       ((cVar3 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar3 != '\x06' &&
        (cVar3 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar3 != '\a')))) {
      pMVar2 = g_MenuMgr;
      uVar5 = *(undefined4 *)(param_1 + 0xbc);
      g_MenuMgr->unk_0538 = 0;
      *(undefined4 *)&pMVar2->field_0x53c = uVar5;
      Menu_ShowDialog(&g_MenuMgr->field_0x654,0x125,2);
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  if ((*(int *)(param_1 + 0x648) == 0x25) &&
     ((cVar3 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar3 == '\x06' ||
      (cVar3 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar3 == '\a')))) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    puVar9 = &g_MenuMgr->field_0x40;
    lVar7 = UiLayout_UpdateAnimById(0x89,0);
    lVar8 = UiLayout_UpdateAnimIfActive(puVar9,0);
    if (lVar7 == 0 && lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawText(7,0x2e,0x3bc);
  iVar4 = UiMgr_FindLayout(0x89);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x27,8);
  uVar6 = RivalDb_FindByName(*(undefined2 *)(param_1 + 0x448));
  MenuWnd_DrawStatus(uVar6,0xfffffffffffffffd,0xffffffffffffffff,0);
  uVar6 = Profile_Get(0);
  cVar3 = Profile_GetChapter(uVar6);
  if (cVar3 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar4 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar4 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  }
  iVar4 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  puVar9 = &g_MenuMgr->field_0x40;
  uVar6 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0xbc),0xffffffffffffffff);
  UiElem_SetPropInt(puVar9,0,0x16,uVar6);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x0024baa0  size 0x1078
void ScrCareer_Draw_WinLoss(int param_1)

{
  UiLayoutSlot *pUVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  UiLayout *pUVar14;
  undefined4 *puVar15;
  UiLayout *pUVar16;
  UiLayout *pUVar17;
  undefined4 *puVar18;
  int aiStack_950 [20];
  undefined2 uStack_900;
  undefined2 uStack_8fe;
  undefined1 uStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined1 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined1 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined2 uStack_8c8;
  undefined2 uStack_8c6;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 auStack_8bc [23];
  undefined4 auStack_860 [23];
  undefined4 auStack_804 [16];
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined2 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined1 auStack_780 [4];
  char cStack_77c;
  undefined1 auStack_600 [4];
  char cStack_5fc;
  undefined1 auStack_480 [4];
  char cStack_47c;
  undefined1 auStack_300 [4];
  char cStack_2fc;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  undefined1 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 auStack_13c [23];
  undefined4 auStack_e0 [23];
  undefined4 auStack_84 [16];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar6 = UiMgr_FindLayout(0x84);
  pUVar16 = &g_UiMgr->slots[iVar6].layout;
  iVar7 = UiMgr_FindLayout(0x85);
  pUVar1 = g_UiMgr->slots;
  UiMgr_FindLayout(7);
  iVar6 = UiMgr_FindLayout(0x86);
  pUVar14 = &g_UiMgr->slots[iVar6].layout;
  iVar8 = UiMgr_FindLayout(0x87);
  iVar6 = *(int *)(param_1 + 0x65c);
  pUVar2 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  pUVar17 = &pUVar2[iVar8].layout;
  if (iVar6 != 0) {
    uVar9 = UiRes_GetLayoutData(0x255);
    iVar6 = UiMgr_FindLayout(0x93);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x31c == 0) {
      pUVar2[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x31c == 0) {
      pUVar2[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x31c = uVar9;
    pUVar2[iVar6].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(0x254);
    iVar6 = UiMgr_FindLayout(0x93);
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
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x330 = uVar9;
    pUVar2[iVar6].layout.animState = 1;
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0x3f800000,pUVar16,0xe,8);
  }
  lVar11 = UiLayout_UpdateAnimById(0x93,0);
  if (lVar11 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar11 = UiLayout_UpdateAnimById(0x93), lVar11 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  ScrCareer_Draw_Prize(param_1,*(undefined4 *)(param_1 + 0x28),0);
  uVar12 = Race_GetCourseVariant();
  uVar12 = MsgId_ForOption(uVar12);
  uVar12 = MsgId_ForSlot(uVar12,1);
  MenuWnd_DrawLabel(0x85,3,0x37d,1,uVar12);
  if (*(int *)(param_1 + 0x644) == 1) {
    uVar12 = MenuText_CarNameOrMaker(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    MenuWnd_DrawText(0x93,0xd,uVar12);
    uVar12 = MenuText_CarShortName(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    MenuWnd_DrawText(0x93,0xf,uVar12);
    uVar12 = MenuText_CarGrade(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    MenuWnd_DrawText(0x93,0xe,uVar12);
    MenuWnd_DrawText(0x93,0xc,0x386);
    RivalDb_Copy(auStack_300,*(undefined2 *)(param_1 + 0x28));
    if ((cStack_2fc != '\x05') &&
       (RivalDb_Copy(auStack_480,*(undefined2 *)(param_1 + 0x28)), cStack_47c != '\x06')) {
      MenuWnd_DrawLabel(0x93,0x15,0x38c,*(undefined4 *)(param_1 + 0x7c),
                        *(undefined4 *)(param_1 + 0x80));
    }
    MenuWnd_DrawText(0x93,0x10,0x387);
    uVar10 = MenuText_CarName(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    MenuWnd_DrawText(0x93,0x16,(uVar10 & 0xff) + 0x38d);
    MenuWnd_DrawText(0x93,0x11,0x38a);
    cVar4 = MenuText_RivalCarSpec(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    if (cVar4 == '\a') {
      lVar11 = MenuText_OpponentSpec(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
      if (lVar11 < 1) {
        MenuWnd_DrawLabel(0x93,0x17,0x26,4);
      }
      else {
        uVar12 = MenuText_OpponentSpec(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
        MenuWnd_DrawLabel(0x93,0x17,0x18,uVar12,4);
      }
    }
    else {
      lVar11 = MenuText_OpponentSpec(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
      if (lVar11 < 1) {
        MenuWnd_DrawLabel(0x93,0x17,0x26,4);
      }
      else {
        uVar12 = MenuText_OpponentSpec(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
        MenuWnd_DrawLabel(0x93,0x17,0x17,uVar12,4);
      }
    }
    MenuWnd_DrawText(0x93,0x12,0x388);
    if ((int)*(float *)(param_1 + 100) < 1) {
      MenuWnd_DrawLabel(0x93,0x18,0x27,4,0,4);
    }
    else {
      MenuWnd_DrawLabel(0x93,0x18,0x19,(int)*(float *)(param_1 + 100),4,0,
                        (int)*(float *)(param_1 + 0x68),4);
    }
    MenuWnd_DrawText(0x93,0x13,0x389);
    iVar6 = (int)*(float *)(param_1 + 0x6c);
    if (iVar6 == 0) {
      MenuWnd_DrawLabel(0x93,0x19,0x28,4,0,4);
    }
    else {
      MenuWnd_DrawLabel(0x93,0x19,0x1a,iVar6,
                        (int)((*(float *)(param_1 + 0x6c) - (float)iVar6) * 10.0),4,0,
                        (int)*(float *)(param_1 + 0x70));
    }
    MenuWnd_DrawText(0x93,0x14,0x38b);
    lVar11 = MenuText_OpponentComment(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    if (lVar11 < 1) {
      MenuWnd_DrawLabel(0x93,0x1a,0x25,4);
    }
    else {
      uVar12 = MenuText_OpponentComment(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
      MenuWnd_DrawLabel(0x93,0x1a,0x16,uVar12,4);
    }
    iVar6 = RivalDb_Get(*(undefined2 *)(param_1 + 0x28));
    uVar12 = RaceCtx_Get_10();
    cVar4 = Race_IsTimeTrialMode(uVar12,0);
    if (cVar4 == '\0') {
      if (*(short *)(iVar6 + 0x3a) < *(short *)(iVar6 + 0x38)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
    }
    else if (*(short *)(iVar6 + 0x3a) < *(short *)(iVar6 + 0x38)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      MenuWnd_DrawText(0x93,0x1b,0x4a);
    }
    else {
      MenuWnd_DrawText(0x93,0x1b,0x49);
    }
  }
  uVar12 = Profile_Get(0);
  sVar5 = Profile_GetRivalBattleCount(uVar12,*(undefined4 *)(param_1 + 0x28));
  if (sVar5 < 1) {
    UiElem_SetPropFloat(0,pUVar16,1,8);
  }
  else {
    RivalDb_Copy(auStack_600,*(undefined2 *)(param_1 + 0x28));
    if ((cStack_5fc == '\x05') ||
       (RivalDb_Copy(auStack_780,*(undefined2 *)(param_1 + 0x28)), cStack_77c == '\x06')) {
      UiElem_SetPropFloat(0,pUVar16,1,8);
    }
    else {
      UiElem_SetPropFloat(0x3f800000,pUVar16,1,8);
    }
  }
  UiElem_SetPropFloat(0,pUVar16,3,8);
  if (*(int *)(param_1 + 0x28) < 0) {
    UiElem_SetPropFloat(0,pUVar16,0,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,pUVar16,0,8);
  }
  UiElem_SetPropFloat(0,pUVar16,2,8);
  UiElem_SetPropInt(&pUVar1[iVar7].layout,1,9,*(undefined4 *)(param_1 + 0x1c));
  UiLayout_UpdateAnimById(0x84,2);
  UiLayout_UpdateAnimById(0x85,0);
  iVar6 = UiMgr_FindLayout(0x84);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x85);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x93);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  RivalDb_Copy(&uStack_900,*(undefined2 *)(param_1 + 0x28));
  puVar18 = auStack_8bc;
  puVar15 = auStack_13c;
  iVar6 = 0x17;
  uStack_170 = uStack_8f0;
  uStack_168 = uStack_8e8;
  uStack_164 = uStack_8e4;
  uStack_178 = uStack_8f8;
  uStack_17c = uStack_8fc;
  uStack_174 = uStack_8f4;
  uStack_158 = uStack_8d8;
  uStack_180 = uStack_900;
  uStack_17e = uStack_8fe;
  uStack_16c = uStack_8ec;
  uStack_160 = uStack_8e0;
  uStack_15c = uStack_8dc;
  uStack_144 = uStack_8c4;
  uStack_154 = uStack_8d4;
  uStack_150 = uStack_8d0;
  uStack_14c = uStack_8cc;
  uStack_148 = uStack_8c8;
  uStack_146 = uStack_8c6;
  uStack_140 = uStack_8c0;
  do {
    iVar6 = iVar6 + -1;
    *puVar15 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar15 = puVar15 + 1;
  } while (0 < iVar6);
  puVar18 = auStack_860;
  puVar15 = auStack_e0;
  iVar6 = 0x17;
  do {
    iVar6 = iVar6 + -1;
    *puVar15 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar15 = puVar15 + 1;
  } while (0 < iVar6);
  puVar18 = auStack_804;
  puVar15 = auStack_84;
  iVar6 = 8;
  do {
    iVar6 = iVar6 + -1;
    uVar9 = puVar18[1];
    *puVar15 = *puVar18;
    puVar15[1] = uVar9;
    puVar18 = puVar18 + 2;
    puVar15 = puVar15 + 2;
  } while (0 < iVar6);
  uStack_44 = uStack_7c4;
  uStack_40 = uStack_7c0;
  uStack_3c = uStack_7bc;
  uStack_38 = uStack_7b8;
  uStack_34 = uStack_7b4;
  uStack_14 = uStack_794;
  uStack_30 = uStack_7b0;
  uStack_10 = uStack_790;
  uStack_c = uStack_78c;
  uStack_18 = uStack_798;
  uStack_2c = uStack_7ac;
  uStack_28 = uStack_7a8;
  uStack_24 = uStack_7a4;
  uStack_20 = uStack_7a0;
  uStack_8 = uStack_788;
  uStack_1c = uStack_79c;
  switch(uStack_8fc) {
  case 0:
    RivalRec_IsValid(&uStack_180);
    iVar6 = *(int *)(param_1 + 0x648);
    goto LAB_0024c5a4;
  case 2:
    UiElem_SetPropInt(pUVar14,1,0x16,0x44);
    iVar6 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
    break;
  case 3:
    UiElem_SetPropInt(pUVar14,1,0x16,0x41);
    iVar6 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
    break;
  case 4:
    UiElem_SetPropInt(pUVar14,1,0x16,0x3f);
    iVar6 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
    break;
  case 5:
    UiElem_SetPropInt(pUVar14,1,0x16,0x40);
    iVar6 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
    break;
  case 6:
    UiElem_SetPropInt(pUVar14,1,0x16,0x40);
    iVar6 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
    MenuWnd_DrawText(0x86,2,0xa4);
    break;
  case 7:
    iVar6 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x24);
      Rival_GetRecord(aiStack_950,iVar6);
      if (iVar7 == aiStack_950[0]) {
        UiElem_SetPropInt(pUVar14,1,0x16,*(undefined4 *)(&DAT_0032c660 + iVar6 * 4));
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x14);
    iVar6 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
    break;
  case 8:
    UiElem_SetPropInt(pUVar14,1,0x16,0x43);
    iVar6 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
    break;
  case 9:
    UiElem_SetPropInt(pUVar14,1,0x16,0x42);
    iVar6 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
    break;
  case 10:
    UiElem_SetPropInt(pUVar14,1,0x16,0x3e);
    iVar6 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
    break;
  case 0xb:
    iVar6 = UiMgr_FindLayout(0x91);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,0xc,8);
    iVar6 = UiMgr_FindLayout(0x91);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,0x11,8);
    iVar6 = UiMgr_FindLayout(0x91);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  }
  iVar6 = *(int *)(param_1 + 0x648);
LAB_0024c5a4:
  if (iVar6 == 0xe) {
    uVar12 = MsgId_TeamName(*(undefined4 *)(param_1 + 0xe4));
    MenuWnd_DrawText(0x87,0x2f,uVar12);
    iVar7 = 0;
    puVar15 = (undefined4 *)0x32c6b0;
    iVar6 = param_1;
    do {
      if (*(int *)(iVar6 + 0x5e4) != -1) {
        uVar12 = MsgId_RivalName();
        MenuWnd_DrawText(0x87,*puVar15,uVar12);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      puVar15 = puVar15 + 1;
    } while (iVar7 < 6);
    UiElem_SetPropInt(pUVar17,0x28,0x16,
                      *(undefined4 *)(&DAT_0032c730 + *(int *)(param_1 + 0xe4) * 4));
    iVar7 = 0;
    puVar15 = &DAT_0032c6f0;
    puVar18 = &DAT_0032c710;
    iVar6 = param_1;
    do {
      iVar8 = *(int *)(iVar6 + 0x5e4);
      if (iVar8 == -1) {
LAB_0024ca58:
        UiElem_SetPropFloat(0,pUVar17,*puVar15,8);
      }
      else {
        uVar12 = Profile_Get(0);
        sVar5 = Profile_GetRivalBattleCount(uVar12,iVar8);
        if (sVar5 < 1) goto LAB_0024ca58;
        UiElem_SetPropFloat(0x3f800000,pUVar17,*puVar15,8);
        UiElem_Get(pUVar17,*puVar18,0x69,0x67,0x62);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      puVar15 = puVar15 + 1;
      puVar18 = puVar18 + 1;
    } while (iVar7 < 6);
    iVar7 = 0;
    puVar15 = &DAT_0032c710;
    iVar6 = param_1;
    do {
      if (*(int *)(iVar6 + 0x5e4) == -1) {
        UiElem_SetPropFloat(0,pUVar17,*puVar15,8);
      }
      else {
        UiElem_SetPropFloat(0x3f800000,pUVar17,*puVar15,8);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      puVar15 = puVar15 + 1;
    } while (iVar7 < 6);
    iVar7 = 0;
    puVar15 = &DAT_0032c6d0;
    iVar6 = param_1;
    do {
      iVar8 = *(int *)(iVar6 + 0x5e4);
      if ((iVar8 == -1) ||
         ((iVar13 = param_1 + *(int *)(param_1 + 0x5e0) * 0x14, *(int *)(iVar13 + 0x568) != iVar8 &&
          (*(int *)(iVar13 + 0x56c) != iVar8)))) {
        UiElem_SetPropFloat(0,pUVar17,*puVar15,8);
      }
      else {
        UiElem_SetPropFloat(0,pUVar17,*puVar15,8);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      puVar15 = puVar15 + 1;
    } while (iVar7 < 6);
    iVar6 = UiMgr_FindLayout(0x87);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
    iVar6 = *(int *)(param_1 + 0x64c);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x64c);
  }
  if (iVar6 == 0x16) {
    uVar12 = Profile_Get(0);
    uVar12 = Profile_GetMoney(uVar12);
    MenuWnd_DrawNumber(0x9c,1,uVar12);
    iVar6 = UiMgr_FindLayout(0x9c);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  return;
}

