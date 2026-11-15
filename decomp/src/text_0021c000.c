// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0021c000 - 0x00220000
#include "ghidra_types.h"

// 0x0021c160  size 0x14
/* menu page 4 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageNaFesta_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0021c180  size 0xc0
/* menu page 4 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageNaFesta_Update(undefined8 param_1)

{
  long lVar1;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_maybe_PageNaFesta_State0_Entry_0032a290)[*(int *)((int)param_1 + 0x4c)])(param_1);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar1 = Menu_IsInputIdle((int)param_1 + 0x48), lVar1 == 1))
  {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x0021c240  size 0x8
/* menu page 4 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageNaFesta_Enter(void)

{
  return;
}

// 0x0021c250  size 0xc
/* entry 4 of state table 0x32a370 used by MenuPage05_Update */

void MenuPage05_State4(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 0x0021c260  size 0x4c0
void ScrCareer_Draw_WouldYouLike(undefined4 *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  UiLayout *pUVar7;
  UiLayout *pUVar8;
  
  iVar2 = UiMgr_FindLayout(0xac);
  pUVar7 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xad);
  iVar2 = param_1[7];
  pUVar1 = g_UiMgr->slots;
  param_1[7] = 0;
  pUVar8 = &pUVar1[iVar3].layout;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(pUVar7,0x1e,8,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar7,0x1f,8,extraout_a3_lo_00);
  }
  lVar4 = MenuWnd_DrawFooter(0xffffffffffffffff,*param_1,0x36e968);
  MenuWnd_DrawText(5,0x1c,0x43d);
  if (param_1[8] != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar4 == 3) {
      param_1[8] = 0;
    }
  }
  if (lVar4 == 2) {
    param_1[6] = 0;
  }
  MenuWnd_DrawText(0xaa,1,0x433);
  MenuWnd_DrawText(0xac,0x20,*(undefined4 *)(&DAT_0032a700 + param_1[10] * 4));
  MenuWnd_DrawText(0xac,0x1b,0x451);
  MenuWnd_DrawLabel(0xac,0x1a,0x447,param_1[param_1[10] + 0xb] + 1,param_1[param_1[10] + 0x1d]);
  iVar2 = param_1[10];
  MenuWnd_DrawText(0xad,10,param_1[iVar2 * 200 + param_1[iVar2 + 0xb] + 0x26] +
                           *(int *)(&DAT_0032a790 + iVar2 * 4));
  iVar2 = param_1[10];
  iVar6 = iVar2 * 4;
  iVar3 = param_1[iVar2 + 0xb];
  if (param_1[iVar2 * 200 + iVar3 + 0xe36] == 0) {
    MenuWnd_DrawLabel(0xad,0xb,0x445,
                      param_1[iVar2 * 200 + iVar3 + 0x26] + *(int *)(&DAT_0032a730 + iVar6),0,
                      param_1[iVar2 * 200 + iVar3 + 0x26] + *(int *)(&DAT_0032a760 + iVar6));
    iVar2 = param_1[10];
  }
  else {
    MenuWnd_DrawLabel(0xad,0xb,0x445,
                      param_1[iVar2 * 200 + iVar3 + 0x26] + *(int *)(&DAT_0032a730 + iVar6),0,
                      0xfffffffffffffffe);
    iVar2 = param_1[10];
  }
  uVar5 = Career_GetLevel(param_1[0x153e] + iVar2 * 0x644 +
                          param_1[iVar2 * 200 + param_1[iVar2 + 0xb] + 0x26] * 8 + 0x531c);
  iVar2 = Career_GetLevel(param_1[0x153e] + iVar2 * 0x644 +
                          param_1[iVar2 * 200 + param_1[iVar2 + 0xb] + 0x26] * 8 + 0x531c);
  MenuWnd_DrawLabel(0xad,0xc,0x444,uVar5,iVar2 % 7 + 0x44a);
  iVar2 = param_1[10];
  lVar4 = Career_IsTeamDefeated
                    (param_1[0x153e],iVar2,param_1[iVar2 * 200 + param_1[iVar2 + 0xb] + 0x26]);
  if (lVar4 == 0) {
    UiElem_SetPropFloat(pUVar8,3,8,extraout_a3_lo_01);
    UiElem_SetPropFloat(pUVar8,2,8,extraout_a3_lo_03);
  }
  else {
    UiElem_SetPropFloat(pUVar8,3,8,extraout_a3_lo_01);
    UiElem_SetPropFloat(pUVar8,2,8,extraout_a3_lo_02);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xac);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xad);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x0021c720  size 0xa7c
void ScrCareer_Draw_Subject(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
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
  byte extraout_a3_lo_09;
  byte extraout_a3_lo_10;
  byte extraout_a3_lo_11;
  byte extraout_a3_lo_12;
  byte extraout_a3_lo_13;
  byte bVar11;
  byte extraout_a3_lo_14;
  byte extraout_a3_lo_15;
  int iVar12;
  int iVar13;
  UiLayout *pUVar14;
  UiLayout *pUVar15;
  
  iVar3 = UiMgr_FindLayout(0xac);
  pUVar15 = &g_UiMgr->slots[iVar3].layout;
  iVar4 = UiMgr_FindLayout(0xad);
  iVar3 = *(int *)(param_1 + 0x1c);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  pUVar14 = &pUVar1[iVar4].layout;
  if (iVar3 != 0) {
    uVar6 = UiRes_GetLayoutData(0xd5);
    iVar3 = UiMgr_FindLayout(0xad);
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
    uVar7 = UiRes_GetLayoutData(0xd6);
    iVar3 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar7;
    pUVar1[iVar3].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0xd7);
    iVar3 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0xd4);
    iVar3 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(pUVar15,0x1e,8,extraout_a3_lo_03);
    UiElem_SetPropFloat(pUVar15,0x1f,8,extraout_a3_lo_04);
    iVar3 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,3,8,extraout_a3_lo_05);
    iVar3 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x18,8,extraout_a3_lo_06);
    MenuWnd_DrawDialogText(0xac,0x36e960,2,1);
  }
  MenuWnd_DrawCursor(1);
  iVar3 = *(int *)(param_1 + 0x28);
  piVar5 = (int *)Rival_IsDefeated(iVar3,*(undefined4 *)(iVar3 * 800 + param_1 + 0x98));
  iVar4 = *piVar5;
  piVar5 = (int *)Rival_IsDefeated(iVar3,*(undefined4 *)
                                          (*(int *)(iVar3 * 4 + param_1 + 0x2c) * 4 +
                                           iVar3 * 800 + param_1 + 0x98));
  if (iVar4 == *piVar5) {
    UiElem_SetPropFloat(pUVar15,0x1e,8,extraout_a3_lo);
    iVar3 = *(int *)(param_1 + 0x28);
  }
  else {
    MenuWnd_DrawLabel(0xad,0x12,0x454,5,0);
    iVar3 = *(int *)(param_1 + 0x28);
  }
  piVar5 = (int *)Rival_IsDefeated(iVar3,*(undefined4 *)
                                          (*(int *)(iVar3 * 4 + param_1 + 0x74) * 4 +
                                           iVar3 * 800 + param_1 + 0x94));
  iVar4 = *piVar5;
  piVar5 = (int *)Rival_IsDefeated(iVar3,*(undefined4 *)
                                          (*(int *)(iVar3 * 4 + param_1 + 0x2c) * 4 +
                                           iVar3 * 800 + param_1 + 0x98));
  if (iVar4 == *piVar5) {
    UiElem_SetPropFloat(pUVar15,0x1f,8,extraout_a3_lo_00);
    iVar3 = *(int *)(param_1 + 8);
    bVar11 = extraout_a3_lo_01;
  }
  else {
    MenuWnd_DrawLabel(0xad,0x13,0x455,5,0);
    iVar3 = *(int *)(param_1 + 8);
    bVar11 = extraout_a3_lo_02;
  }
  if (iVar3 == 3) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xad,0);
    bVar11 = extraout_a3_lo_07;
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x10) == 3) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xad,1);
      bVar11 = extraout_a3_lo_08;
      if (!bVar2) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(iVar3 * 4 + param_1 + 0x2c);
  if (iVar4 < 1) {
LAB_0021d0f0:
    UiElem_SetPropFloat(pUVar14,0x11,8,bVar11);
    iVar3 = *(int *)(param_1 + 0x28);
    bVar11 = extraout_a3_lo_14;
  }
  else {
    piVar5 = (int *)Rival_IsDefeated(iVar3,*(undefined4 *)(iVar4 * 4 + iVar3 * 800 + param_1 + 0x98)
                                    );
    iVar8 = *piVar5;
    piVar5 = (int *)Rival_IsDefeated(iVar3,*(undefined4 *)(iVar4 * 4 + iVar3 * 800 + param_1 + 0x94)
                                    );
    bVar11 = extraout_a3_lo_09;
    if (iVar8 != *piVar5) goto LAB_0021d0f0;
    UiElem_SetPropFloat(pUVar14,0x11,8,extraout_a3_lo_09);
    iVar3 = *(int *)(param_1 + 0x28);
    bVar11 = extraout_a3_lo_10;
  }
  iVar8 = iVar3 * 4 + param_1;
  iVar4 = *(int *)(iVar8 + 0x2c);
  if (iVar4 < *(int *)(iVar8 + 0x74) + -1) {
    piVar5 = (int *)Rival_IsDefeated(iVar3,*(undefined4 *)(iVar4 * 4 + iVar3 * 800 + param_1 + 0x98)
                                    );
    iVar8 = *piVar5;
    piVar5 = (int *)Rival_IsDefeated(iVar3,*(undefined4 *)(iVar4 * 4 + iVar3 * 800 + param_1 + 0x9c)
                                    );
    bVar11 = extraout_a3_lo_11;
    if (iVar8 == *piVar5) {
      UiElem_SetPropFloat(pUVar14,0x10,8,extraout_a3_lo_11);
      goto LAB_0021cd28;
    }
  }
  UiElem_SetPropFloat(pUVar14,0x10,8,bVar11);
LAB_0021cd28:
  MenuWnd_DrawText(0xaa,1,0x433);
  MenuWnd_DrawText(0xac,0x20,*(undefined4 *)(&DAT_0032a640 + *(int *)(param_1 + 0x28) * 4));
  MenuWnd_DrawText(0xac,0x1b,0x451);
  iVar3 = *(int *)(param_1 + 0x28) * 4 + param_1;
  MenuWnd_DrawLabel(0xac,0x1a,0x447,*(int *)(iVar3 + 0x2c) + 1,*(undefined4 *)(iVar3 + 0x74));
  iVar3 = *(int *)(param_1 + 0x28) * 4;
  MenuWnd_DrawText(0xad,10,*(int *)(*(int *)(iVar3 + param_1 + 0x2c) * 4 +
                                    *(int *)(param_1 + 0x28) * 800 + param_1 + 0x98) +
                           *(int *)(&DAT_0032a6d0 + iVar3));
  iVar4 = *(int *)(param_1 + 0x28) * 4;
  iVar3 = *(int *)(iVar4 + param_1 + 0x2c) * 4 + *(int *)(param_1 + 0x28) * 800 + param_1;
  if (*(int *)(iVar3 + 0x38d8) == 0) {
    MenuWnd_DrawLabel(0xad,0xb,0x445,*(int *)(iVar3 + 0x98) + *(int *)(&DAT_0032a670 + iVar4),0,
                      *(int *)(iVar3 + 0x98) + *(int *)(&DAT_0032a6a0 + iVar4));
    iVar3 = *(int *)(param_1 + 0x28);
  }
  else {
    MenuWnd_DrawLabel(0xad,0xb,0x445,*(int *)(iVar3 + 0x98) + *(int *)(&DAT_0032a670 + iVar4),0,
                      0xfffffffffffffffe);
    iVar3 = *(int *)(param_1 + 0x28);
  }
  uVar9 = Career_GetLevel(*(int *)(param_1 + 0x54f8) + iVar3 * 0x644 +
                          *(int *)(*(int *)(iVar3 * 4 + param_1 + 0x2c) * 4 + iVar3 * 800 + param_1
                                  + 0x98) * 8 + 0x531c);
  iVar3 = Career_GetLevel(*(int *)(param_1 + 0x54f8) + iVar3 * 0x644 +
                          *(int *)(*(int *)(iVar3 * 4 + param_1 + 0x2c) * 4 + iVar3 * 800 + param_1
                                  + 0x98) * 8 + 0x531c);
  MenuWnd_DrawLabel(0xad,0xc,0x444,uVar9,iVar3 % 7 + 0x44a);
  iVar3 = *(int *)(param_1 + 0x28);
  iVar12 = 0;
  iVar4 = *(int *)(iVar3 * 4 + param_1 + 0x74);
  iVar8 = 0;
  if (0 < iVar4) {
    iVar13 = param_1 + iVar3 * 800;
    do {
      if (*(char *)(*(int *)(param_1 + 0x54f8) + iVar3 * 0x644 + *(int *)(iVar13 + 0x98) * 8 +
                   0x5320) == '\x01') {
        iVar12 = iVar12 + 1;
      }
      iVar8 = iVar8 + 1;
      iVar13 = iVar13 + 4;
    } while (iVar8 < iVar4);
  }
  MenuWnd_DrawLabel(7,0x2e,0x456,iVar12);
  iVar3 = *(int *)(param_1 + 0x28);
  lVar10 = Career_IsTeamDefeated
                     (*(undefined4 *)(param_1 + 0x54f8),iVar3,
                      *(undefined4 *)
                       (*(int *)(iVar3 * 4 + param_1 + 0x2c) * 4 + iVar3 * 800 + param_1 + 0x98));
  if (lVar10 == 0) {
    UiElem_SetPropFloat(pUVar14,3,8,extraout_a3_lo_15);
    UiElem_SetPropFloat(pUVar14,2,8,extraout_a3_lo_13);
  }
  else {
    UiElem_SetPropFloat(pUVar14,3,8,extraout_a3_lo_15);
    UiElem_SetPropFloat(pUVar14,2,8,extraout_a3_lo_12);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar3 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xac);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xad);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x0021d1a0  size 0x2f64
void ScrCareer_Draw_Subject_d1a0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
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
  byte extraout_a3_lo_09;
  byte extraout_a3_lo_10;
  byte extraout_a3_lo_11;
  byte extraout_a3_lo_12;
  byte extraout_a3_lo_13;
  byte extraout_a3_lo_14;
  byte extraout_a3_lo_15;
  byte extraout_a3_lo_16;
  byte bVar10;
  byte extraout_a3_lo_17;
  byte extraout_a3_lo_18;
  byte extraout_a3_lo_19;
  byte extraout_a3_lo_20;
  byte extraout_a3_lo_21;
  byte extraout_a3_lo_22;
  byte extraout_a3_lo_23;
  byte extraout_a3_lo_24;
  byte extraout_a3_lo_25;
  byte extraout_a3_lo_26;
  byte extraout_a3_lo_27;
  byte extraout_a3_lo_28;
  byte extraout_a3_lo_29;
  byte extraout_a3_lo_30;
  byte extraout_a3_lo_31;
  byte extraout_a3_lo_32;
  byte extraout_a3_lo_33;
  byte extraout_a3_lo_34;
  byte extraout_a3_lo_35;
  byte extraout_a3_lo_36;
  byte extraout_a3_lo_37;
  byte extraout_a3_lo_38;
  byte extraout_a3_lo_39;
  byte extraout_a3_lo_40;
  byte extraout_a3_lo_41;
  byte extraout_a3_lo_42;
  byte extraout_a3_lo_43;
  byte extraout_a3_lo_44;
  byte extraout_a3_lo_45;
  byte extraout_a3_lo_46;
  byte extraout_a3_lo_47;
  byte extraout_a3_lo_48;
  byte extraout_a3_lo_49;
  byte extraout_a3_lo_50;
  byte extraout_a3_lo_51;
  byte extraout_a3_lo_52;
  byte extraout_a3_lo_53;
  byte extraout_a3_lo_54;
  byte extraout_a3_lo_55;
  byte extraout_a3_lo_56;
  byte extraout_a3_lo_57;
  byte extraout_a3_lo_58;
  byte extraout_a3_lo_59;
  byte extraout_a3_lo_60;
  byte extraout_a3_lo_61;
  byte extraout_a3_lo_62;
  byte extraout_a3_lo_63;
  byte extraout_a3_lo_64;
  byte extraout_a3_lo_65;
  byte extraout_a3_lo_66;
  byte extraout_a3_lo_67;
  byte extraout_a3_lo_68;
  byte extraout_a3_lo_69;
  byte extraout_a3_lo_70;
  byte extraout_a3_lo_71;
  byte extraout_a3_lo_72;
  byte extraout_a3_lo_73;
  byte extraout_a3_lo_74;
  byte extraout_a3_lo_75;
  byte extraout_a3_lo_76;
  byte extraout_a3_lo_77;
  byte extraout_a3_lo_78;
  byte extraout_a3_lo_79;
  byte extraout_a3_lo_80;
  byte extraout_a3_lo_81;
  byte extraout_a3_lo_82;
  byte extraout_a3_lo_83;
  byte extraout_a3_lo_84;
  byte extraout_a3_lo_85;
  byte extraout_a3_lo_86;
  byte extraout_a3_lo_87;
  byte extraout_a3_lo_88;
  byte extraout_a3_lo_89;
  byte extraout_a3_lo_90;
  byte extraout_a3_lo_91;
  byte extraout_a3_lo_92;
  byte extraout_a3_lo_93;
  byte extraout_a3_lo_94;
  byte extraout_a3_lo_95;
  byte extraout_a3_lo_96;
  byte extraout_a3_lo_97;
  byte extraout_a3_lo_98;
  byte extraout_a3_lo_99;
  byte extraout_a3_lo_x00100;
  byte extraout_a3_lo_x00101;
  byte extraout_a3_lo_x00102;
  byte extraout_a3_lo_x00103;
  byte extraout_a3_lo_x00104;
  byte extraout_a3_lo_x00105;
  byte extraout_a3_lo_x00106;
  int iVar11;
  undefined8 extraout_a3;
  undefined8 extraout_a3_00;
  undefined8 extraout_a3_01;
  undefined8 extraout_a3_02;
  undefined8 extraout_a3_03;
  undefined8 extraout_a3_04;
  undefined8 extraout_a3_05;
  undefined8 extraout_a3_06;
  undefined8 extraout_a3_07;
  undefined8 extraout_a3_08;
  undefined8 extraout_a3_09;
  undefined8 extraout_a3_10;
  undefined8 extraout_a3_11;
  undefined8 extraout_a3_12;
  undefined8 extraout_a3_13;
  undefined8 extraout_a3_14;
  undefined8 extraout_a3_15;
  undefined8 extraout_a3_16;
  undefined8 extraout_a3_17;
  undefined8 extraout_a3_18;
  undefined8 extraout_a3_19;
  undefined8 extraout_a3_20;
  undefined8 extraout_a3_21;
  undefined8 extraout_a3_22;
  undefined8 extraout_a3_23;
  undefined8 extraout_a3_24;
  undefined8 extraout_a3_25;
  undefined8 extraout_a3_26;
  undefined8 extraout_a3_27;
  undefined8 extraout_a3_28;
  undefined8 extraout_a3_29;
  undefined8 extraout_a3_30;
  undefined8 extraout_a3_31;
  undefined8 extraout_a3_32;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  UiLayout *pUVar15;
  int *piVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 *puVar19;
  int *piVar20;
  UiLayout *pUVar21;
  undefined4 auStack_20 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auStack_20[0] = DAT_0032a4c0;
  auStack_20[1] = DAT_0032a4c4;
  auStack_20[2] = DAT_0032a4c8;
  auStack_20[3] = DAT_0032a4cc;
  uStack_10 = DAT_0032a4d0;
  uStack_c = DAT_0032a4d4;
  uStack_8 = DAT_0032a4d8;
  iVar4 = UiMgr_FindLayout(0xab);
  pUVar15 = &g_UiMgr->slots[iVar4].layout;
  iVar5 = UiMgr_FindLayout(0xac);
  iVar4 = param_1[7];
  pUVar1 = g_UiMgr->slots;
  param_1[7] = 0;
  pUVar21 = &pUVar1[iVar5].layout;
  if (iVar4 != 0) {
    uVar6 = UiRes_GetLayoutData(0xe4);
    iVar4 = UiMgr_FindLayout(0xab);
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
    uVar7 = UiRes_GetLayoutData(0xe5);
    iVar4 = UiMgr_FindLayout(0xab);
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
    uVar7 = UiRes_GetLayoutData(0xe6);
    iVar4 = UiMgr_FindLayout(0xab);
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
    uVar7 = UiRes_GetLayoutData(0xe3);
    iVar4 = UiMgr_FindLayout(0xab);
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
    uVar6 = UiRes_GetLayoutData(0xdf);
    iVar4 = UiMgr_FindLayout(0xac);
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
    uVar7 = UiRes_GetLayoutData(0xe1);
    iVar4 = UiMgr_FindLayout(0xac);
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
    uVar7 = UiRes_GetLayoutData(0xe0);
    iVar4 = UiMgr_FindLayout(0xac);
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
    uVar7 = UiRes_GetLayoutData(0xe2);
    iVar4 = UiMgr_FindLayout(0xac);
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
    MenuWnd_DrawDialogText(0xac,0x36e958,2);
    UiElem_SetPropFloat(pUVar21,0x1e,8,extraout_a3_lo_80);
    UiElem_SetPropFloat(pUVar21,0x1f,8,extraout_a3_lo_81);
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
    if (param_1[2] == 0) {
      iVar4 = 0;
      piVar13 = &DAT_0032a5a0;
      piVar12 = &DAT_0032a5c0;
      piVar16 = &DAT_0032a600;
      piVar18 = &DAT_0032a620;
      piVar20 = &DAT_0032a5e0;
      uVar8 = extraout_a3_25;
      do {
        UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,(byte)uVar8);
        UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_90);
        UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_91);
        UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_92);
        UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,extraout_a3_lo_93);
        iVar4 = iVar4 + 1;
        piVar13 = piVar13 + 1;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + 1;
        piVar18 = piVar18 + 1;
        piVar20 = piVar20 + 1;
        uVar8 = extraout_a3_28;
      } while (iVar4 < 7);
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,(byte)extraout_a3_28);
      iVar4 = param_1[2];
    }
    else {
      iVar4 = param_1[2];
    }
    if ((iVar4 - 2U < 2) && (param_1[0x1540] == 1)) {
      iVar4 = 0;
      piVar12 = &DAT_0032a560;
      do {
        iVar5 = UiMgr_FindLayout(0xab);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)*piVar12,8,extraout_a3_lo_82);
        iVar4 = iVar4 + 1;
        piVar12 = piVar12 + 1;
      } while (iVar4 < 6);
      iVar4 = 0;
      piVar13 = &DAT_0032a5a0;
      piVar12 = &DAT_0032a5c0;
      piVar16 = &DAT_0032a600;
      piVar18 = &DAT_0032a620;
      piVar20 = &DAT_0032a5e0;
      uVar8 = extraout_a3_26;
      do {
        UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,(byte)uVar8);
        UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_83);
        UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_84);
        UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_85);
        UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,extraout_a3_lo_86);
        iVar4 = iVar4 + 1;
        piVar13 = piVar13 + 1;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + 1;
        piVar18 = piVar18 + 1;
        piVar20 = piVar20 + 1;
        uVar8 = extraout_a3_27;
      } while (iVar4 < 7);
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,(byte)extraout_a3_27);
      param_1[0x1540] = 0;
    }
    iVar4 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,3,8,extraout_a3_lo_87);
    iVar4 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x18,8,extraout_a3_lo_88);
    if ((param_1[2] - 2U < 2) && (param_1[0x1541] == 1)) {
      iVar4 = UiMgr_FindLayout(0xab);
      pUVar1 = g_UiMgr->slots;
      piVar12 = (int *)UiRes_GetLayoutData(0xe3);
      UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar12);
      if ((0 < param_1[param_1[10] + 0xb] - *param_1) &&
         (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] != 0)) {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,extraout_a3_lo_89);
        goto LAB_0021fb58;
      }
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,extraout_a3_lo_89);
      iVar4 = *param_1;
    }
    else {
LAB_0021fb58:
      iVar4 = *param_1;
    }
    param_1[1] = iVar4;
  }
  if (param_1[param_1[10] + 0x1d] < 7) {
LAB_0021d294:
    iVar4 = param_1[2];
  }
  else {
    MenuWnd_DrawCursor(1);
    if (param_1[param_1[10] + 0xb] == *param_1) {
      UiElem_SetPropFloat(pUVar21,0x1e,8,extraout_a3_lo_94);
      iVar4 = param_1[10];
      bVar10 = extraout_a3_lo_95;
    }
    else {
      MenuWnd_DrawLabel(0xab,0x4d,0x452,5,0);
      iVar4 = param_1[10];
      bVar10 = extraout_a3_lo_96;
    }
    if (param_1[iVar4 + 0x1d] != (param_1[iVar4 + 0xb] - *param_1) + 6) {
      MenuWnd_DrawLabel(0xab,0x4e,0x453,5,0);
      goto LAB_0021d294;
    }
    UiElem_SetPropFloat(pUVar21,0x1f,8,bVar10);
    iVar4 = param_1[2];
  }
  if (iVar4 - 2U < 2) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xac,2);
    if (!bVar2) {
      param_1[6] = 0;
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      param_1[0x1541] = 0;
    }
    uVar8 = extraout_a3;
    if ((param_1[6] == 0) || (param_1[0x1541] != 1)) goto LAB_0021d4ac;
    iVar4 = 0;
    piVar13 = &DAT_0032a5a0;
    piVar12 = &DAT_0032a5c0;
    piVar16 = &DAT_0032a600;
    piVar18 = &DAT_0032a620;
    piVar20 = &DAT_0032a5e0;
    do {
      UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,(byte)uVar8);
      UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo);
      UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_00);
      UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_01);
      UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,extraout_a3_lo_02);
      iVar4 = iVar4 + 1;
      piVar13 = piVar13 + 1;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
      piVar18 = piVar18 + 1;
      piVar20 = piVar20 + 1;
      uVar8 = extraout_a3_00;
    } while (iVar4 < 7);
    UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,(byte)extraout_a3_00);
    iVar4 = param_1[8];
    uVar8 = extraout_a3_01;
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xab,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xac,0);
    uVar8 = extraout_a3_02;
    if (!bVar2 && !bVar3) {
      iVar4 = 0;
      piVar13 = &DAT_0032a5a0;
      piVar12 = &DAT_0032a5c0;
      piVar16 = &DAT_0032a600;
      piVar18 = &DAT_0032a620;
      piVar20 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,(byte)uVar8);
        UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_03);
        UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_04);
        UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_05);
        UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,extraout_a3_lo_06);
        iVar4 = iVar4 + 1;
        piVar13 = piVar13 + 1;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + 1;
        piVar18 = piVar18 + 1;
        piVar20 = piVar20 + 1;
        uVar8 = extraout_a3_03;
      } while (iVar4 < 7);
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,(byte)extraout_a3_03);
      param_1[6] = 0;
      uVar8 = extraout_a3_04;
    }
LAB_0021d4ac:
    iVar4 = param_1[8];
  }
  if (iVar4 != 0) {
    if (param_1[4] == 2) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xac,3);
      if (!bVar2) {
        param_1[8] = 0;
      }
    }
    else {
      iVar4 = 0;
      piVar13 = &DAT_0032a5a0;
      piVar12 = &DAT_0032a5c0;
      piVar16 = &DAT_0032a600;
      piVar18 = &DAT_0032a620;
      piVar20 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,(byte)uVar8);
        UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_07);
        UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_08);
        UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_09);
        UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,extraout_a3_lo_10);
        iVar4 = iVar4 + 1;
        piVar13 = piVar13 + 1;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + 1;
        piVar18 = piVar18 + 1;
        piVar20 = piVar20 + 1;
        uVar8 = extraout_a3_05;
      } while (iVar4 < 7);
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,(byte)extraout_a3_05);
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xab,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xac,1);
      if (!bVar2 && !bVar3) {
        param_1[8] = 0;
      }
    }
    MenuWnd_SetItemVisible(0);
  }
  if ((*g_MenuInput == 1) && (param_1[0x153f] == 0)) {
    MenuWnd_SetItemState(0xab,(&DAT_0032a560)[*param_1],0,0);
  }
  MenuWnd_DrawText(0xaa,1,0x433);
  MenuWnd_DrawText(0xac,0x20,*(undefined4 *)(&DAT_0032a490 + param_1[10] * 4));
  MenuWnd_DrawText(0xac,0x1b,0x451);
  iVar4 = param_1[10];
  iVar11 = 0;
  iVar5 = 0;
  if (0 < param_1[iVar4 + 0x1d]) {
    piVar12 = param_1 + iVar4 * 200;
    do {
      if (*(char *)(param_1[0x153e] + iVar4 * 0x644 + piVar12[0x26] * 8 + 0x5320) == '\x01') {
        iVar11 = iVar11 + 1;
      }
      iVar5 = iVar5 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar5 < param_1[iVar4 + 0x1d]);
  }
  MenuWnd_DrawLabel(7,0x2e,0x456,iVar11);
  MenuWnd_DrawLabel(0xac,0x1a,0x447,param_1[param_1[10] + 0xb] + 1,param_1[param_1[10] + 0x1d]);
  iVar4 = 0;
  puVar14 = &DAT_0032a510;
  puVar17 = auStack_20;
  puVar19 = &DAT_0032a580;
  uVar8 = extraout_a3_06;
  do {
    iVar5 = param_1[10];
    iVar11 = iVar4 + (param_1[iVar5 + 0xb] - *param_1);
    if (iVar11 < param_1[iVar5 + 0x1d]) {
      if (param_1[iVar5 * 200 + iVar11 + 0xe36] == 0) {
        if (*(char *)(param_1[0x153e] + iVar5 * 0x644 + param_1[iVar5 * 200 + iVar11 + 0x26] * 8 +
                     0x5320) == '\x01') {
          iVar5 = Rival_IsDefeated();
          if (*(int *)(iVar5 + 4) == 0) {
            uVar7 = *puVar17;
          }
          else {
            uVar7 = *puVar14;
          }
          iVar5 = param_1[10];
          MenuWnd_DrawRivalLabel
                    (0xab,uVar7,5,0x445,
                     param_1[iVar5 * 200 + iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26] +
                     *(int *)(&DAT_0032a4e0 + iVar5 * 4),0,
                     param_1[iVar5 * 200 + iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26] +
                     *(int *)(&DAT_0032a530 + iVar5 * 4));
        }
        else {
          iVar5 = Rival_IsDefeated();
          if (*(int *)(iVar5 + 4) == 0) {
            uVar7 = *puVar17;
          }
          else {
            uVar7 = *puVar14;
          }
          iVar5 = param_1[10];
          MenuWnd_DrawLabel(0xab,uVar7,0x445,
                            param_1[iVar5 * 200 + iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26]
                            + *(int *)(&DAT_0032a4e0 + iVar5 * 4),0,
                            param_1[iVar5 * 200 + iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26]
                            + *(int *)(&DAT_0032a530 + iVar5 * 4));
        }
LAB_0021da2c:
        iVar5 = param_1[10];
      }
      else {
        if (*(char *)(param_1[0x153e] + iVar5 * 0x644 + param_1[iVar5 * 200 + iVar11 + 0x26] * 8 +
                     0x5320) != '\x01') {
          iVar5 = Rival_IsDefeated();
          if (*(int *)(iVar5 + 4) == 0) {
            uVar7 = *puVar17;
          }
          else {
            uVar7 = *puVar14;
          }
          iVar5 = param_1[10];
          MenuWnd_DrawLabel(0xab,uVar7,0x445,
                            param_1[iVar5 * 200 + iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26]
                            + *(int *)(&DAT_0032a4e0 + iVar5 * 4),0,0xfffffffffffffffe);
          goto LAB_0021da2c;
        }
        iVar5 = Rival_IsDefeated();
        if (*(int *)(iVar5 + 4) == 0) {
          uVar7 = *puVar17;
        }
        else {
          uVar7 = *puVar14;
        }
        iVar5 = param_1[10];
        MenuWnd_DrawRivalLabel
                  (0xab,uVar7,5,0x445,
                   param_1[iVar5 * 200 + iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26] +
                   *(int *)(&DAT_0032a4e0 + iVar5 * 4),0,0xfffffffffffffffe);
        iVar5 = param_1[10];
      }
      uVar8 = Career_GetLevel(param_1[0x153e] + iVar5 * 0x644 +
                              param_1[iVar5 * 200 + iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26
                                     ] * 8 + 0x531c);
      iVar5 = Career_GetLevel(param_1[0x153e] + iVar5 * 0x644 +
                              param_1[iVar5 * 200 + iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26
                                     ] * 8 + 0x531c);
      MenuWnd_DrawLabel(0xab,*puVar19,0x444,uVar8,iVar5 % 7 + 0x44a);
      uVar8 = extraout_a3_07;
    }
    bVar10 = (byte)uVar8;
    iVar4 = iVar4 + 1;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
    puVar19 = puVar19 + 1;
  } while (iVar4 < 6);
  if (param_1[0x153f] == 1) {
    iVar4 = param_1[10];
    iVar5 = param_1[iVar4 + 0xb] - *param_1;
    if (param_1[iVar4 * 200 + iVar5 + 0xe35] == 0) {
      if (*(char *)(param_1[iVar4 * 200 + iVar5 + 0x25] * 8 + iVar4 * 0x644 + param_1[0x153e] +
                   0x5320) == '\x01') {
        iVar4 = Rival_IsDefeated();
        if (*(int *)(iVar4 + 4) == 0) {
          uVar7 = uStack_8;
        }
        else {
          uVar7 = DAT_0032a528;
        }
        iVar4 = param_1[10];
        MenuWnd_DrawRivalLabel
                  (0xab,uVar7,5,0x445,
                   param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25] +
                   *(int *)(&DAT_0032a4e0 + iVar4 * 4),0,
                   param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25] +
                   *(int *)(&DAT_0032a530 + iVar4 * 4));
      }
      else {
        iVar4 = Rival_IsDefeated();
        if (*(int *)(iVar4 + 4) == 0) {
          uVar7 = uStack_8;
        }
        else {
          uVar7 = DAT_0032a528;
        }
        iVar4 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar7,0x445,
                          param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25] +
                          *(int *)(&DAT_0032a4e0 + iVar4 * 4),0,
                          param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25] +
                          *(int *)(&DAT_0032a530 + iVar4 * 4));
      }
LAB_0021de10:
      iVar4 = param_1[10];
    }
    else {
      if (*(char *)(param_1[iVar4 * 200 + iVar5 + 0x25] * 8 + iVar4 * 0x644 + param_1[0x153e] +
                   0x5320) != '\x01') {
        iVar4 = Rival_IsDefeated();
        if (*(int *)(iVar4 + 4) == 0) {
          uVar7 = uStack_8;
        }
        else {
          uVar7 = DAT_0032a528;
        }
        iVar4 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar7,0x445,
                          param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25] +
                          *(int *)(&DAT_0032a4e0 + iVar4 * 4),0,0xfffffffffffffffe);
        goto LAB_0021de10;
      }
      iVar4 = Rival_IsDefeated();
      if (*(int *)(iVar4 + 4) == 0) {
        uVar7 = uStack_8;
      }
      else {
        uVar7 = DAT_0032a528;
      }
      iVar4 = param_1[10];
      MenuWnd_DrawRivalLabel
                (0xab,uVar7,5,0x445,
                 param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25] +
                 *(int *)(&DAT_0032a4e0 + iVar4 * 4),0,0xfffffffffffffffe);
      iVar4 = param_1[10];
    }
    uVar8 = Career_GetLevel(param_1[0x153e] + iVar4 * 0x644 +
                            param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25] * 8 +
                            0x531c);
    iVar4 = Career_GetLevel(param_1[0x153e] + iVar4 * 0x644 +
                            param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25] * 8 +
                            0x531c);
    MenuWnd_DrawLabel(0xab,DAT_0032a598,0x444,uVar8,iVar4 % 7 + 0x44a);
    bVar10 = extraout_a3_lo_11;
  }
  if (param_1[0x153f] == 2) {
    iVar4 = param_1[10];
    iVar5 = param_1[iVar4 + 0xb] - *param_1;
    if (param_1[iVar4 * 200 + iVar5 + 0xe3c] == 0) {
      if (*(char *)(param_1[iVar4 * 200 + iVar5 + 0x2c] * 8 + iVar4 * 0x644 + param_1[0x153e] +
                   0x5320) == '\x01') {
        iVar4 = Rival_IsDefeated();
        if (*(int *)(iVar4 + 4) == 0) {
          uVar7 = uStack_8;
        }
        else {
          uVar7 = DAT_0032a528;
        }
        iVar4 = param_1[10];
        MenuWnd_DrawRivalLabel
                  (0xab,uVar7,5,0x445,
                   param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c] +
                   *(int *)(&DAT_0032a4e0 + iVar4 * 4),0,
                   param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c] +
                   *(int *)(&DAT_0032a530 + iVar4 * 4));
      }
      else {
        iVar4 = Rival_IsDefeated();
        if (*(int *)(iVar4 + 4) == 0) {
          uVar7 = uStack_8;
        }
        else {
          uVar7 = DAT_0032a528;
        }
        iVar4 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar7,0x445,
                          param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c] +
                          *(int *)(&DAT_0032a4e0 + iVar4 * 4),0,
                          param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c] +
                          *(int *)(&DAT_0032a530 + iVar4 * 4));
      }
LAB_0021e1e0:
      iVar4 = param_1[10];
    }
    else {
      if (*(char *)(param_1[iVar4 * 200 + iVar5 + 0x2c] * 8 + iVar4 * 0x644 + param_1[0x153e] +
                   0x5320) != '\x01') {
        iVar4 = Rival_IsDefeated();
        if (*(int *)(iVar4 + 4) == 0) {
          uVar7 = uStack_8;
        }
        else {
          uVar7 = DAT_0032a528;
        }
        iVar4 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar7,0x445,
                          param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c] +
                          *(int *)(&DAT_0032a4e0 + iVar4 * 4),0,0xfffffffffffffffe);
        goto LAB_0021e1e0;
      }
      iVar4 = Rival_IsDefeated();
      if (*(int *)(iVar4 + 4) == 0) {
        uVar7 = uStack_8;
      }
      else {
        uVar7 = DAT_0032a528;
      }
      iVar4 = param_1[10];
      MenuWnd_DrawRivalLabel
                (0xab,uVar7,5,0x445,
                 param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c] +
                 *(int *)(&DAT_0032a4e0 + iVar4 * 4),0,0xfffffffffffffffe);
      iVar4 = param_1[10];
    }
    uVar8 = Career_GetLevel(param_1[0x153e] + iVar4 * 0x644 +
                            param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c] * 8 +
                            0x531c);
    iVar4 = Career_GetLevel(param_1[0x153e] + iVar4 * 0x644 +
                            param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c] * 8 +
                            0x531c);
    MenuWnd_DrawLabel(0xab,DAT_0032a598,0x444,uVar8,iVar4 % 7 + 0x44a);
    bVar10 = extraout_a3_lo_12;
  }
  if ((param_1[4] == 2) || ((param_1[8] == 0 && (param_1[6] == 0)))) {
    iVar4 = 0;
    piVar13 = &DAT_0032a5a0;
    piVar12 = &DAT_0032a600;
    piVar16 = &DAT_0032a5c0;
    piVar18 = &DAT_0032a620;
    piVar20 = &DAT_0032a5e0;
    do {
      iVar5 = param_1[10];
      if (iVar4 + (param_1[iVar5 + 0xb] - *param_1) < param_1[iVar5 + 0x1d]) {
        iVar5 = Rival_IsDefeated(iVar5,param_1[iVar5 * 200 +
                                               iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26]);
        if (*(int *)(iVar5 + 4) == 0) {
          if (iVar4 + (param_1[param_1[10] + 0xb] - *param_1) < param_1[param_1[10] + 0x1d]) {
            UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,extraout_a3_lo_13);
          }
          else {
            UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,extraout_a3_lo_13);
          }
          iVar5 = param_1[10];
          lVar9 = Career_IsTeamDefeated
                            (param_1[0x153e],iVar5,
                             param_1[iVar5 * 200 + iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26]
                            );
          if (lVar9 == 0) {
            UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_14);
            bVar10 = extraout_a3_lo_16;
          }
          else {
            UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_14);
            bVar10 = extraout_a3_lo_15;
          }
          UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,bVar10);
          UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_17);
          bVar10 = extraout_a3_lo_18;
        }
        else {
          if (iVar4 + (param_1[param_1[10] + 0xb] - *param_1) < param_1[param_1[10] + 0x1d]) {
            UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_13);
          }
          else {
            UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_13);
          }
          iVar5 = param_1[10];
          lVar9 = Career_IsTeamDefeated
                            (param_1[0x153e],iVar5,
                             param_1[iVar5 * 200 + iVar4 + (param_1[iVar5 + 0xb] - *param_1) + 0x26]
                            );
          if (lVar9 == 0) {
            UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_19);
            bVar10 = extraout_a3_lo_21;
          }
          else {
            UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_19);
            bVar10 = extraout_a3_lo_20;
          }
          UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,bVar10);
          UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_22);
          bVar10 = extraout_a3_lo_23;
        }
        if (param_1[param_1[10] * 200 + iVar4 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72e] ==
            0) {
          UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,bVar10);
          uVar8 = extraout_a3_09;
        }
        else {
          UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,bVar10);
          uVar8 = extraout_a3_08;
        }
      }
      else {
        UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,(char)iVar5 * '\x04');
        UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_97);
        UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_98);
        UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_99);
        UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,extraout_a3_lo_x00100);
        uVar8 = extraout_a3_29;
      }
      iVar4 = iVar4 + 1;
      piVar13 = piVar13 + 1;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
      piVar18 = piVar18 + 1;
      piVar20 = piVar20 + 1;
    } while (iVar4 < 6);
    if (param_1[0x153f] == 1) {
      if (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0) {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5f8,8,(byte)uVar8);
        iVar4 = param_1[10];
        bVar10 = extraout_a3_lo_25;
      }
      else {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5f8,8,(byte)uVar8);
        iVar4 = param_1[10];
        bVar10 = extraout_a3_lo_24;
      }
      if ((param_1[iVar4 + 0xb] - *param_1 < 1) ||
         (param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x72d] == 0)) {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,bVar10);
        iVar4 = param_1[10];
      }
      else {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,bVar10);
        iVar4 = param_1[10];
      }
      iVar4 = Rival_IsDefeated(iVar4,param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25]
                              );
      if (*(int *)(iVar4 + 4) != 0) {
        iVar4 = param_1[10];
        lVar9 = Career_IsTeamDefeated
                          (param_1[0x153e],iVar4,
                           param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25]);
        if (lVar9 == 0) {
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5b8,8,extraout_a3_lo_33);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5d8,8,extraout_a3_lo_37);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a618,8,extraout_a3_lo_38);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a638,8,extraout_a3_lo_39);
          uVar8 = extraout_a3_13;
        }
        else {
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5b8,8,extraout_a3_lo_33);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5d8,8,extraout_a3_lo_34);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a618,8,extraout_a3_lo_35);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a638,8,extraout_a3_lo_36);
          uVar8 = extraout_a3_12;
        }
        goto LAB_0021e9c8;
      }
      iVar4 = param_1[10];
      lVar9 = Career_IsTeamDefeated
                        (param_1[0x153e],iVar4,
                         param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x25]);
      if (lVar9 == 0) {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5b8,8,extraout_a3_lo_26);
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5d8,8,extraout_a3_lo_30);
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a618,8,extraout_a3_lo_31);
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a638,8,extraout_a3_lo_32);
        uVar8 = extraout_a3_11;
        goto LAB_0021e9c8;
      }
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5b8,8,extraout_a3_lo_26);
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5d8,8,extraout_a3_lo_27);
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a618,8,extraout_a3_lo_28);
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a638,8,extraout_a3_lo_29);
      iVar4 = param_1[0x153f];
      uVar8 = extraout_a3_10;
    }
    else {
LAB_0021e9c8:
      iVar4 = param_1[0x153f];
    }
    if (iVar4 == 2) {
      if (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x734] == 0) {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5f8,8,(byte)uVar8);
        iVar4 = param_1[10];
        bVar10 = extraout_a3_lo_41;
      }
      else {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5f8,8,(byte)uVar8);
        iVar4 = param_1[10];
        bVar10 = extraout_a3_lo_40;
      }
      if ((param_1[iVar4 + 0xb] < 1) ||
         (param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x72d] == 0)) {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,bVar10);
        iVar4 = param_1[10];
      }
      else {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,bVar10);
        iVar4 = param_1[10];
      }
      iVar4 = Rival_IsDefeated(iVar4,param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c]
                              );
      if (*(int *)(iVar4 + 4) == 0) {
        iVar4 = param_1[10];
        lVar9 = Career_IsTeamDefeated
                          (param_1[0x153e],iVar4,
                           param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c]);
        if (lVar9 == 0) {
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5b8,8,extraout_a3_lo_42);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5d8,8,extraout_a3_lo_46);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a618,8,extraout_a3_lo_47);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a638,8,extraout_a3_lo_48);
          uVar8 = extraout_a3_15;
        }
        else {
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5b8,8,extraout_a3_lo_42);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5d8,8,extraout_a3_lo_43);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a618,8,extraout_a3_lo_44);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a638,8,extraout_a3_lo_45);
          uVar8 = extraout_a3_14;
        }
      }
      else {
        iVar4 = param_1[10];
        lVar9 = Career_IsTeamDefeated
                          (param_1[0x153e],iVar4,
                           param_1[iVar4 * 200 + (param_1[iVar4 + 0xb] - *param_1) + 0x2c]);
        if (lVar9 == 0) {
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5b8,8,extraout_a3_lo_49);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5d8,8,extraout_a3_lo_53);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a618,8,extraout_a3_lo_54);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a638,8,extraout_a3_lo_55);
          uVar8 = extraout_a3_17;
        }
        else {
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5b8,8,extraout_a3_lo_49);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5d8,8,extraout_a3_lo_50);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a618,8,extraout_a3_lo_51);
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a638,8,extraout_a3_lo_52);
          uVar8 = extraout_a3_16;
        }
      }
    }
    uVar6 = g_MenuInput[2];
    if ((g_MenuInput[4] & uVar6) == 0) {
      uVar6 = 0x100000;
    }
    else if (uVar6 == 0x80000) {
      uVar6 = 0x80000;
    }
    else if (*g_MenuInput != 1) {
      uVar6 = 0x100000;
    }
    if (uVar6 == 0x1000) {
      iVar4 = UiMgr_FindLayout(0xab);
      pUVar1 = g_UiMgr->slots;
      piVar12 = (int *)UiRes_GetLayoutData(0xe3);
      UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar12);
      if ((param_1[param_1[10] + 0xb] - *param_1 < 1) ||
         (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0)) {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,extraout_a3_lo_57);
        uVar8 = extraout_a3_31;
      }
      else {
        UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,extraout_a3_lo_57);
        uVar8 = extraout_a3_19;
      }
LAB_0021eedc:
      iVar4 = param_1[4];
    }
    else {
      if (uVar6 == 0x200) {
        iVar4 = UiMgr_FindLayout(0xab);
        pUVar1 = g_UiMgr->slots;
        piVar12 = (int *)UiRes_GetLayoutData(0xe3);
        UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar12);
        if ((param_1[param_1[10] + 0xb] - *param_1 < 1) ||
           (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0)) {
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,extraout_a3_lo_56);
          uVar8 = extraout_a3_30;
        }
        else {
          UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,extraout_a3_lo_56);
          uVar8 = extraout_a3_18;
        }
        goto LAB_0021eedc;
      }
      iVar4 = param_1[4];
    }
    bVar10 = (byte)uVar8;
    if (iVar4 == 0) {
      iVar4 = 0;
      piVar13 = &DAT_0032a5a0;
      piVar12 = &DAT_0032a5c0;
      piVar16 = &DAT_0032a600;
      piVar18 = &DAT_0032a620;
      piVar20 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,(byte)uVar8);
        UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_58);
        UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_59);
        UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_60);
        UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,extraout_a3_lo_61);
        iVar4 = iVar4 + 1;
        piVar13 = piVar13 + 1;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + 1;
        piVar18 = piVar18 + 1;
        piVar20 = piVar20 + 1;
        uVar8 = extraout_a3_20;
      } while (iVar4 < 7);
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,(byte)extraout_a3_20);
      bVar10 = extraout_a3_lo_62;
    }
  }
  if ((param_1[0x153f] == 0) && (param_1[6] == 0)) {
    if ((param_1[param_1[10] + 0xb] - *param_1 < 1) ||
       (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0)) {
      UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,bVar10);
      iVar4 = param_1[0x153f];
      bVar10 = extraout_a3_lo_x00101;
      goto LAB_0021f034;
    }
    UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,bVar10);
    bVar10 = extraout_a3_lo_63;
  }
  iVar4 = param_1[0x153f];
LAB_0021f034:
  if ((iVar4 != 1) ||
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xab,2), bVar10 = extraout_a3_lo_x00102, bVar2)) {
    iVar4 = param_1[0x153f];
  }
  else {
    param_1[0x153f] = 0;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    uVar7 = UiRes_GetLayoutData(0xe6);
    iVar4 = UiMgr_FindLayout(0xab);
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
    iVar4 = UiMgr_FindLayout(0xab);
    pUVar1 = g_UiMgr->slots;
    piVar12 = (int *)UiRes_GetLayoutData(0xe3);
    UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar12);
    Menu_ClearSlot(0);
    iVar4 = param_1[0x153f];
    bVar10 = extraout_a3_lo_x00103;
  }
  if ((iVar4 != 2) ||
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xab,3), bVar10 = extraout_a3_lo_x00104, bVar2)) {
    iVar4 = param_1[10];
  }
  else {
    param_1[0x153f] = 0;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    uVar7 = UiRes_GetLayoutData(0xe3);
    iVar4 = UiMgr_FindLayout(0xab);
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
    Menu_ClearSlot(0);
    iVar4 = param_1[10];
    bVar10 = extraout_a3_lo_x00105;
  }
  if (param_1[iVar4 + 0x1d] < 6) {
    UiElem_SetPropFloat(pUVar21,3,2,bVar10);
    UiElem_SetPropFloat(pUVar21,3,6,extraout_a3_lo_x00106);
    iVar4 = param_1[6];
    uVar8 = extraout_a3_32;
  }
  else {
    UiElem_SetPropFloat(pUVar21,3,6,bVar10);
    UiElem_SetPropFloat(pUVar21,3,2,(byte)param_1[10]);
    iVar4 = param_1[6];
    uVar8 = extraout_a3_21;
  }
  if ((iVar4 != 0) && (param_1[2] == 0)) {
    iVar4 = 0;
    piVar13 = &DAT_0032a5a0;
    piVar12 = &DAT_0032a5c0;
    piVar16 = &DAT_0032a600;
    piVar18 = &DAT_0032a620;
    piVar20 = &DAT_0032a5e0;
    do {
      UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,(byte)uVar8);
      UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_64);
      UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_65);
      UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_66);
      UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,extraout_a3_lo_67);
      iVar4 = iVar4 + 1;
      piVar13 = piVar13 + 1;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
      piVar18 = piVar18 + 1;
      piVar20 = piVar20 + 1;
      uVar8 = extraout_a3_22;
    } while (iVar4 < 7);
    UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,(byte)extraout_a3_22);
    uVar8 = extraout_a3_23;
  }
  if ((param_1[8] != 0) && (param_1[4] == 0)) {
    iVar4 = 0;
    piVar13 = &DAT_0032a5a0;
    piVar12 = &DAT_0032a5c0;
    piVar16 = &DAT_0032a600;
    piVar18 = &DAT_0032a620;
    piVar20 = &DAT_0032a5e0;
    do {
      UiElem_SetPropFloat(pUVar15,(long)*piVar13,8,(byte)uVar8);
      UiElem_SetPropFloat(pUVar15,(long)*piVar12,8,extraout_a3_lo_68);
      UiElem_SetPropFloat(pUVar15,(long)*piVar16,8,extraout_a3_lo_69);
      UiElem_SetPropFloat(pUVar15,(long)*piVar18,8,extraout_a3_lo_70);
      UiElem_SetPropFloat(pUVar15,(long)*piVar20,8,extraout_a3_lo_71);
      iVar4 = iVar4 + 1;
      piVar13 = piVar13 + 1;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
      piVar18 = piVar18 + 1;
      piVar20 = piVar20 + 1;
      uVar8 = extraout_a3_24;
    } while (iVar4 < 7);
    UiElem_SetPropFloat(pUVar15,(long)DAT_0032a5fc,8,(byte)extraout_a3_24);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  if (param_1[4] == 0) {
    iVar4 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x23,8,extraout_a3_lo_72);
    iVar4 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x24,8,extraout_a3_lo_73);
    iVar4 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x25,8,extraout_a3_lo_74);
    iVar4 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x26,8,extraout_a3_lo_75);
    iVar4 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x27,8,extraout_a3_lo_76);
    iVar4 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x29,8,extraout_a3_lo_77);
    iVar4 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x28,8,extraout_a3_lo_78);
    iVar4 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x22,8,extraout_a3_lo_79);
  }
  iVar4 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xab);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xac);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

