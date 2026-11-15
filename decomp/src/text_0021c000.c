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
    UiElem_SetPropFloat(0,pUVar7,0x1e,8);
    UiElem_SetPropFloat(0,pUVar7,0x1f,8);
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
    UiElem_SetPropFloat(0,pUVar8,3,8);
    UiElem_SetPropFloat(0x3f800000,pUVar8,2,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,pUVar8,3,8);
    UiElem_SetPropFloat(0,pUVar8,2,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xac);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xad);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x0021c720  size 0xa7c
void ScrCareer_Draw_Subject(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  UiLayout *pUVar11;
  UiLayout *pUVar12;
  
  iVar2 = UiMgr_FindLayout(0xac);
  pUVar12 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xad);
  iVar2 = *(int *)(param_1 + 0x1c);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  pUVar11 = &pUVar1[iVar3].layout;
  if (iVar2 != 0) {
    uVar5 = UiRes_GetLayoutData(0xd5);
    iVar2 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar5;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0xd6);
    iVar2 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar5;
    pUVar1[iVar2].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0xd7);
    iVar2 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0xd4);
    iVar2 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,pUVar12,0x1e,8);
    UiElem_SetPropFloat(0,pUVar12,0x1f,8);
    iVar2 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,3,8);
    iVar2 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x18,8);
    MenuWnd_DrawDialogText(0xac,0x36e960,2,1);
  }
  MenuWnd_DrawCursor(1);
  iVar2 = *(int *)(param_1 + 0x28);
  piVar4 = (int *)Rival_IsDefeated(iVar2,*(undefined4 *)(iVar2 * 800 + param_1 + 0x98));
  iVar3 = *piVar4;
  piVar4 = (int *)Rival_IsDefeated(iVar2,*(undefined4 *)
                                          (*(int *)(iVar2 * 4 + param_1 + 0x2c) * 4 +
                                           iVar2 * 800 + param_1 + 0x98));
  if (iVar3 == *piVar4) {
    UiElem_SetPropFloat(0,pUVar12,0x1e,8);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    MenuWnd_DrawLabel(0xad,0x12,0x454,5,0);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  piVar4 = (int *)Rival_IsDefeated(iVar2,*(undefined4 *)
                                          (*(int *)(iVar2 * 4 + param_1 + 0x74) * 4 +
                                           iVar2 * 800 + param_1 + 0x94));
  iVar3 = *piVar4;
  piVar4 = (int *)Rival_IsDefeated(iVar2,*(undefined4 *)
                                          (*(int *)(iVar2 * 4 + param_1 + 0x2c) * 4 +
                                           iVar2 * 800 + param_1 + 0x98));
  if (iVar3 == *piVar4) {
    UiElem_SetPropFloat(0,pUVar12,0x1f,8);
    iVar2 = *(int *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawLabel(0xad,0x13,0x455,5,0);
    iVar2 = *(int *)(param_1 + 8);
  }
  if (iVar2 == 3) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(0xad,0);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x10) == 3) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else {
      lVar7 = UiLayout_UpdateAnimById(0xad);
      if (lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(iVar2 * 4 + param_1 + 0x2c);
  if (iVar3 < 1) {
LAB_0021d0f0:
    UiElem_SetPropFloat(0,pUVar11,0x11,8);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    piVar4 = (int *)Rival_IsDefeated(iVar2,*(undefined4 *)(iVar3 * 4 + iVar2 * 800 + param_1 + 0x98)
                                    );
    iVar6 = *piVar4;
    piVar4 = (int *)Rival_IsDefeated(iVar2,*(undefined4 *)(iVar3 * 4 + iVar2 * 800 + param_1 + 0x94)
                                    );
    if (iVar6 != *piVar4) goto LAB_0021d0f0;
    UiElem_SetPropFloat(0x3f800000,pUVar11,0x11,8);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  iVar6 = iVar2 * 4 + param_1;
  iVar3 = *(int *)(iVar6 + 0x2c);
  if (iVar3 < *(int *)(iVar6 + 0x74) + -1) {
    piVar4 = (int *)Rival_IsDefeated(iVar2,*(undefined4 *)(iVar3 * 4 + iVar2 * 800 + param_1 + 0x98)
                                    );
    iVar6 = *piVar4;
    piVar4 = (int *)Rival_IsDefeated(iVar2,*(undefined4 *)(iVar3 * 4 + iVar2 * 800 + param_1 + 0x9c)
                                    );
    if (iVar6 == *piVar4) {
      UiElem_SetPropFloat(0x3f800000,pUVar11,0x10,8);
      goto LAB_0021cd28;
    }
  }
  UiElem_SetPropFloat(0,pUVar11,0x10,8);
LAB_0021cd28:
  MenuWnd_DrawText(0xaa,1,0x433);
  MenuWnd_DrawText(0xac,0x20,*(undefined4 *)(&DAT_0032a640 + *(int *)(param_1 + 0x28) * 4));
  MenuWnd_DrawText(0xac,0x1b,0x451);
  iVar2 = *(int *)(param_1 + 0x28) * 4 + param_1;
  MenuWnd_DrawLabel(0xac,0x1a,0x447,*(int *)(iVar2 + 0x2c) + 1,*(undefined4 *)(iVar2 + 0x74));
  iVar2 = *(int *)(param_1 + 0x28) * 4;
  MenuWnd_DrawText(0xad,10,*(int *)(*(int *)(iVar2 + param_1 + 0x2c) * 4 +
                                    *(int *)(param_1 + 0x28) * 800 + param_1 + 0x98) +
                           *(int *)(&DAT_0032a6d0 + iVar2));
  iVar3 = *(int *)(param_1 + 0x28) * 4;
  iVar2 = *(int *)(iVar3 + param_1 + 0x2c) * 4 + *(int *)(param_1 + 0x28) * 800 + param_1;
  if (*(int *)(iVar2 + 0x38d8) == 0) {
    MenuWnd_DrawLabel(0xad,0xb,0x445,*(int *)(iVar2 + 0x98) + *(int *)(&DAT_0032a670 + iVar3),0,
                      *(int *)(iVar2 + 0x98) + *(int *)(&DAT_0032a6a0 + iVar3));
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    MenuWnd_DrawLabel(0xad,0xb,0x445,*(int *)(iVar2 + 0x98) + *(int *)(&DAT_0032a670 + iVar3),0,
                      0xfffffffffffffffe);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  uVar8 = Career_GetLevel(*(int *)(param_1 + 0x54f8) + iVar2 * 0x644 +
                          *(int *)(*(int *)(iVar2 * 4 + param_1 + 0x2c) * 4 + iVar2 * 800 + param_1
                                  + 0x98) * 8 + 0x531c);
  iVar2 = Career_GetLevel(*(int *)(param_1 + 0x54f8) + iVar2 * 0x644 +
                          *(int *)(*(int *)(iVar2 * 4 + param_1 + 0x2c) * 4 + iVar2 * 800 + param_1
                                  + 0x98) * 8 + 0x531c);
  MenuWnd_DrawLabel(0xad,0xc,0x444,uVar8,iVar2 % 7 + 0x44a);
  iVar2 = *(int *)(param_1 + 0x28);
  iVar9 = 0;
  iVar3 = *(int *)(iVar2 * 4 + param_1 + 0x74);
  iVar6 = 0;
  if (0 < iVar3) {
    iVar10 = param_1 + iVar2 * 800;
    do {
      if (*(char *)(*(int *)(param_1 + 0x54f8) + iVar2 * 0x644 + *(int *)(iVar10 + 0x98) * 8 +
                   0x5320) == '\x01') {
        iVar9 = iVar9 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar6 < iVar3);
  }
  MenuWnd_DrawLabel(7,0x2e,0x456,iVar9);
  iVar2 = *(int *)(param_1 + 0x28);
  lVar7 = Career_IsTeamDefeated
                    (*(undefined4 *)(param_1 + 0x54f8),iVar2,
                     *(undefined4 *)
                      (*(int *)(iVar2 * 4 + param_1 + 0x2c) * 4 + iVar2 * 800 + param_1 + 0x98));
  if (lVar7 == 0) {
    UiElem_SetPropFloat(0,pUVar11,3,8);
    UiElem_SetPropFloat(0x3f800000,pUVar11,2,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,pUVar11,3,8);
    UiElem_SetPropFloat(0,pUVar11,2,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xac);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xad);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x0021d1a0  size 0x2f78
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Subject_d1a0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  UiLayout *pUVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  UiLayout *pUVar17;
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
  iVar2 = UiMgr_FindLayout(0xab);
  pUVar13 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xac);
  iVar2 = param_1[7];
  pUVar1 = g_UiMgr->slots;
  param_1[7] = 0;
  pUVar17 = &pUVar1[iVar3].layout;
  if (iVar2 != 0) {
    uVar4 = UiRes_GetLayoutData(0xe4);
    iVar2 = UiMgr_FindLayout(0xab);
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
    uVar4 = UiRes_GetLayoutData(0xe5);
    iVar2 = UiMgr_FindLayout(0xab);
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
    uVar4 = UiRes_GetLayoutData(0xe6);
    iVar2 = UiMgr_FindLayout(0xab);
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
    uVar4 = UiRes_GetLayoutData(0xe3);
    iVar2 = UiMgr_FindLayout(0xab);
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
    uVar4 = UiRes_GetLayoutData(0xdf);
    iVar2 = UiMgr_FindLayout(0xac);
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
    uVar4 = UiRes_GetLayoutData(0xe1);
    iVar2 = UiMgr_FindLayout(0xac);
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
    uVar4 = UiRes_GetLayoutData(0xe0);
    iVar2 = UiMgr_FindLayout(0xac);
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
    uVar4 = UiRes_GetLayoutData(0xe2);
    iVar2 = UiMgr_FindLayout(0xac);
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
    MenuWnd_DrawDialogText(0xac,0x36e958,2);
    UiElem_SetPropFloat(0,pUVar17,0x1e,8);
    UiElem_SetPropFloat(0,pUVar17,0x1f,8);
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
    if (param_1[2] == 0) {
      iVar2 = 0;
      puVar12 = &DAT_0032a5a0;
      puVar11 = &DAT_0032a5c0;
      puVar14 = &DAT_0032a600;
      puVar15 = &DAT_0032a620;
      puVar16 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar16,8);
        iVar2 = iVar2 + 1;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar2 < 7);
      UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
      iVar2 = param_1[2];
    }
    else {
      iVar2 = param_1[2];
    }
    if ((iVar2 - 2U < 2) && (param_1[0x1540] == 1)) {
      iVar2 = 0;
      puVar11 = &DAT_0032a560;
      do {
        iVar3 = UiMgr_FindLayout(0xab);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar11,8);
        iVar2 = iVar2 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar2 < 6);
      iVar2 = 0;
      puVar12 = &DAT_0032a5a0;
      puVar11 = &DAT_0032a5c0;
      puVar14 = &DAT_0032a600;
      puVar15 = &DAT_0032a620;
      puVar16 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar16,8);
        iVar2 = iVar2 + 1;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar2 < 7);
      UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
      param_1[0x1540] = 0;
    }
    iVar2 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar2].layout,3,8);
    iVar2 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar2].layout,0x18,8);
    if ((param_1[2] - 2U < 2) && (param_1[0x1541] == 1)) {
      iVar2 = UiMgr_FindLayout(0xab);
      pUVar1 = g_UiMgr->slots;
      uVar7 = UiRes_GetLayoutData(0xe3);
      UiLayout_PlayAnim(&pUVar1[iVar2].layout,uVar7);
      if ((0 < param_1[param_1[10] + 0xb] - *param_1) &&
         (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] != 0)) {
        UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5fc,8);
        goto LAB_0021fb58;
      }
      UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
      iVar2 = *param_1;
    }
    else {
LAB_0021fb58:
      iVar2 = *param_1;
    }
    param_1[1] = iVar2;
  }
  if (param_1[param_1[10] + 0x1d] < 7) {
LAB_0021d294:
    iVar2 = param_1[2];
  }
  else {
    MenuWnd_DrawCursor(1);
    if (param_1[param_1[10] + 0xb] == *param_1) {
      UiElem_SetPropFloat(0,pUVar17,0x1e,8);
      iVar2 = param_1[10];
    }
    else {
      MenuWnd_DrawLabel(0xab,0x4d,0x452,5,0);
      iVar2 = param_1[10];
    }
    if (param_1[iVar2 + 0x1d] != (param_1[iVar2 + 0xb] - *param_1) + 6) {
      MenuWnd_DrawLabel(0xab,0x4e,0x453,5,0);
      goto LAB_0021d294;
    }
    UiElem_SetPropFloat(0,pUVar17,0x1f,8);
    iVar2 = param_1[2];
  }
  if (iVar2 - 2U < 2) {
    lVar5 = UiLayout_UpdateAnimById(0xac,2);
    if (lVar5 == 0) {
      param_1[6] = 0;
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      param_1[0x1541] = 0;
    }
    if ((param_1[6] == 0) || (param_1[0x1541] != 1)) goto LAB_0021d4ac;
    iVar2 = 0;
    puVar12 = &DAT_0032a5a0;
    puVar11 = &DAT_0032a5c0;
    puVar14 = &DAT_0032a600;
    puVar15 = &DAT_0032a620;
    puVar16 = &DAT_0032a5e0;
    do {
      UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar16,8);
      iVar2 = iVar2 + 1;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar2 < 7);
    UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
    iVar2 = param_1[8];
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0xab,0);
    lVar6 = UiLayout_UpdateAnimById(0xac,0);
    if (lVar5 == 0 && lVar6 == 0) {
      iVar2 = 0;
      puVar12 = &DAT_0032a5a0;
      puVar11 = &DAT_0032a5c0;
      puVar14 = &DAT_0032a600;
      puVar15 = &DAT_0032a620;
      puVar16 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar16,8);
        iVar2 = iVar2 + 1;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar2 < 7);
      UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
      param_1[6] = 0;
    }
LAB_0021d4ac:
    iVar2 = param_1[8];
  }
  if (iVar2 != 0) {
    if (param_1[4] == 2) {
      lVar5 = UiLayout_UpdateAnimById(0xac,3);
      if (lVar5 == 0) {
        param_1[8] = 0;
      }
    }
    else {
      iVar2 = 0;
      puVar12 = &DAT_0032a5a0;
      puVar11 = &DAT_0032a5c0;
      puVar14 = &DAT_0032a600;
      puVar15 = &DAT_0032a620;
      puVar16 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar16,8);
        iVar2 = iVar2 + 1;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar2 < 7);
      UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
      lVar5 = UiLayout_UpdateAnimById(0xab,1);
      lVar6 = UiLayout_UpdateAnimById(0xac,1);
      if (lVar5 == 0 && lVar6 == 0) {
        param_1[8] = 0;
      }
    }
    MenuWnd_SetItemVisible(0);
  }
  if ((*_g_MenuInput == 1) && (param_1[0x153f] == 0)) {
    MenuWnd_SetItemState(0xab,(&DAT_0032a560)[*param_1],0,0);
  }
  MenuWnd_DrawText(0xaa,1,0x433);
  MenuWnd_DrawText(0xac,0x20,*(undefined4 *)(&DAT_0032a490 + param_1[10] * 4));
  MenuWnd_DrawText(0xac,0x1b,0x451);
  iVar2 = param_1[10];
  iVar9 = 0;
  iVar3 = 0;
  if (0 < param_1[iVar2 + 0x1d]) {
    piVar10 = param_1 + iVar2 * 200;
    do {
      if (*(char *)(param_1[0x153e] + iVar2 * 0x644 + piVar10[0x26] * 8 + 0x5320) == '\x01') {
        iVar9 = iVar9 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar3 < param_1[iVar2 + 0x1d]);
  }
  MenuWnd_DrawLabel(7,0x2e,0x456,iVar9);
  MenuWnd_DrawLabel(0xac,0x1a,0x447,param_1[param_1[10] + 0xb] + 1,param_1[param_1[10] + 0x1d]);
  iVar2 = 0;
  puVar11 = &DAT_0032a510;
  puVar12 = auStack_20;
  puVar14 = &DAT_0032a580;
  do {
    iVar3 = param_1[10];
    iVar9 = iVar2 + (param_1[iVar3 + 0xb] - *param_1);
    if (iVar9 < param_1[iVar3 + 0x1d]) {
      if (param_1[iVar3 * 200 + iVar9 + 0xe36] == 0) {
        if (*(char *)(param_1[0x153e] + iVar3 * 0x644 + param_1[iVar3 * 200 + iVar9 + 0x26] * 8 +
                     0x5320) == '\x01') {
          iVar3 = Rival_IsDefeated();
          if (*(int *)(iVar3 + 4) == 0) {
            uVar4 = *puVar12;
          }
          else {
            uVar4 = *puVar11;
          }
          iVar3 = param_1[10];
          MenuWnd_DrawRivalLabel
                    (0xab,uVar4,5,0x445,
                     param_1[iVar3 * 200 + iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26] +
                     *(int *)(&DAT_0032a4e0 + iVar3 * 4),0,
                     param_1[iVar3 * 200 + iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26] +
                     *(int *)(&DAT_0032a530 + iVar3 * 4));
        }
        else {
          iVar3 = Rival_IsDefeated();
          if (*(int *)(iVar3 + 4) == 0) {
            uVar4 = *puVar12;
          }
          else {
            uVar4 = *puVar11;
          }
          iVar3 = param_1[10];
          MenuWnd_DrawLabel(0xab,uVar4,0x445,
                            param_1[iVar3 * 200 + iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26]
                            + *(int *)(&DAT_0032a4e0 + iVar3 * 4),0,
                            param_1[iVar3 * 200 + iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26]
                            + *(int *)(&DAT_0032a530 + iVar3 * 4));
        }
LAB_0021da2c:
        iVar3 = param_1[10];
      }
      else {
        if (*(char *)(param_1[0x153e] + iVar3 * 0x644 + param_1[iVar3 * 200 + iVar9 + 0x26] * 8 +
                     0x5320) != '\x01') {
          iVar3 = Rival_IsDefeated();
          if (*(int *)(iVar3 + 4) == 0) {
            uVar4 = *puVar12;
          }
          else {
            uVar4 = *puVar11;
          }
          iVar3 = param_1[10];
          MenuWnd_DrawLabel(0xab,uVar4,0x445,
                            param_1[iVar3 * 200 + iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26]
                            + *(int *)(&DAT_0032a4e0 + iVar3 * 4),0,0xfffffffffffffffe);
          goto LAB_0021da2c;
        }
        iVar3 = Rival_IsDefeated();
        if (*(int *)(iVar3 + 4) == 0) {
          uVar4 = *puVar12;
        }
        else {
          uVar4 = *puVar11;
        }
        iVar3 = param_1[10];
        MenuWnd_DrawRivalLabel
                  (0xab,uVar4,5,0x445,
                   param_1[iVar3 * 200 + iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26] +
                   *(int *)(&DAT_0032a4e0 + iVar3 * 4),0,0xfffffffffffffffe);
        iVar3 = param_1[10];
      }
      uVar7 = Career_GetLevel(param_1[0x153e] + iVar3 * 0x644 +
                              param_1[iVar3 * 200 + iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26
                                     ] * 8 + 0x531c);
      iVar3 = Career_GetLevel(param_1[0x153e] + iVar3 * 0x644 +
                              param_1[iVar3 * 200 + iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26
                                     ] * 8 + 0x531c);
      MenuWnd_DrawLabel(0xab,*puVar14,0x444,uVar7,iVar3 % 7 + 0x44a);
    }
    iVar2 = iVar2 + 1;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  } while (iVar2 < 6);
  if (param_1[0x153f] == 1) {
    iVar2 = param_1[10];
    iVar3 = param_1[iVar2 + 0xb] - *param_1;
    if (param_1[iVar2 * 200 + iVar3 + 0xe35] == 0) {
      if (*(char *)(param_1[iVar2 * 200 + iVar3 + 0x25] * 8 + iVar2 * 0x644 + param_1[0x153e] +
                   0x5320) == '\x01') {
        iVar2 = Rival_IsDefeated();
        if (*(int *)(iVar2 + 4) == 0) {
          uVar4 = uStack_8;
        }
        else {
          uVar4 = DAT_0032a528;
        }
        iVar2 = param_1[10];
        MenuWnd_DrawRivalLabel
                  (0xab,uVar4,5,0x445,
                   param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25] +
                   *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,
                   param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25] +
                   *(int *)(&DAT_0032a530 + iVar2 * 4));
      }
      else {
        iVar2 = Rival_IsDefeated();
        if (*(int *)(iVar2 + 4) == 0) {
          uVar4 = uStack_8;
        }
        else {
          uVar4 = DAT_0032a528;
        }
        iVar2 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar4,0x445,
                          param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25] +
                          *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,
                          param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25] +
                          *(int *)(&DAT_0032a530 + iVar2 * 4));
      }
LAB_0021de10:
      iVar2 = param_1[10];
    }
    else {
      if (*(char *)(param_1[iVar2 * 200 + iVar3 + 0x25] * 8 + iVar2 * 0x644 + param_1[0x153e] +
                   0x5320) != '\x01') {
        iVar2 = Rival_IsDefeated();
        if (*(int *)(iVar2 + 4) == 0) {
          uVar4 = uStack_8;
        }
        else {
          uVar4 = DAT_0032a528;
        }
        iVar2 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar4,0x445,
                          param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25] +
                          *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,0xfffffffffffffffe);
        goto LAB_0021de10;
      }
      iVar2 = Rival_IsDefeated();
      if (*(int *)(iVar2 + 4) == 0) {
        uVar4 = uStack_8;
      }
      else {
        uVar4 = DAT_0032a528;
      }
      iVar2 = param_1[10];
      MenuWnd_DrawRivalLabel
                (0xab,uVar4,5,0x445,
                 param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25] +
                 *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,0xfffffffffffffffe);
      iVar2 = param_1[10];
    }
    uVar7 = Career_GetLevel(param_1[0x153e] + iVar2 * 0x644 +
                            param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25] * 8 +
                            0x531c);
    iVar2 = Career_GetLevel(param_1[0x153e] + iVar2 * 0x644 +
                            param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25] * 8 +
                            0x531c);
    MenuWnd_DrawLabel(0xab,DAT_0032a598,0x444,uVar7,iVar2 % 7 + 0x44a);
  }
  if (param_1[0x153f] == 2) {
    iVar2 = param_1[10];
    iVar3 = param_1[iVar2 + 0xb] - *param_1;
    if (param_1[iVar2 * 200 + iVar3 + 0xe3c] == 0) {
      if (*(char *)(param_1[iVar2 * 200 + iVar3 + 0x2c] * 8 + iVar2 * 0x644 + param_1[0x153e] +
                   0x5320) == '\x01') {
        iVar2 = Rival_IsDefeated();
        if (*(int *)(iVar2 + 4) == 0) {
          uVar4 = uStack_8;
        }
        else {
          uVar4 = DAT_0032a528;
        }
        iVar2 = param_1[10];
        MenuWnd_DrawRivalLabel
                  (0xab,uVar4,5,0x445,
                   param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c] +
                   *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,
                   param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c] +
                   *(int *)(&DAT_0032a530 + iVar2 * 4));
      }
      else {
        iVar2 = Rival_IsDefeated();
        if (*(int *)(iVar2 + 4) == 0) {
          uVar4 = uStack_8;
        }
        else {
          uVar4 = DAT_0032a528;
        }
        iVar2 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar4,0x445,
                          param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c] +
                          *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,
                          param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c] +
                          *(int *)(&DAT_0032a530 + iVar2 * 4));
      }
LAB_0021e1e0:
      iVar2 = param_1[10];
    }
    else {
      if (*(char *)(param_1[iVar2 * 200 + iVar3 + 0x2c] * 8 + iVar2 * 0x644 + param_1[0x153e] +
                   0x5320) != '\x01') {
        iVar2 = Rival_IsDefeated();
        if (*(int *)(iVar2 + 4) == 0) {
          uVar4 = uStack_8;
        }
        else {
          uVar4 = DAT_0032a528;
        }
        iVar2 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar4,0x445,
                          param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c] +
                          *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,0xfffffffffffffffe);
        goto LAB_0021e1e0;
      }
      iVar2 = Rival_IsDefeated();
      if (*(int *)(iVar2 + 4) == 0) {
        uVar4 = uStack_8;
      }
      else {
        uVar4 = DAT_0032a528;
      }
      iVar2 = param_1[10];
      MenuWnd_DrawRivalLabel
                (0xab,uVar4,5,0x445,
                 param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c] +
                 *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,0xfffffffffffffffe);
      iVar2 = param_1[10];
    }
    uVar7 = Career_GetLevel(param_1[0x153e] + iVar2 * 0x644 +
                            param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c] * 8 +
                            0x531c);
    iVar2 = Career_GetLevel(param_1[0x153e] + iVar2 * 0x644 +
                            param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c] * 8 +
                            0x531c);
    MenuWnd_DrawLabel(0xab,DAT_0032a598,0x444,uVar7,iVar2 % 7 + 0x44a);
  }
  if ((param_1[4] == 2) || ((param_1[8] == 0 && (param_1[6] == 0)))) {
    iVar2 = 0;
    puVar12 = &DAT_0032a5a0;
    puVar11 = &DAT_0032a600;
    puVar14 = &DAT_0032a5c0;
    puVar15 = &DAT_0032a620;
    puVar16 = &DAT_0032a5e0;
    do {
      iVar3 = param_1[10];
      if (iVar2 + (param_1[iVar3 + 0xb] - *param_1) < param_1[iVar3 + 0x1d]) {
        iVar3 = Rival_IsDefeated(iVar3,param_1[iVar3 * 200 +
                                               iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26]);
        if (*(int *)(iVar3 + 4) == 0) {
          if (iVar2 + (param_1[param_1[10] + 0xb] - *param_1) < param_1[param_1[10] + 0x1d]) {
            UiElem_SetPropFloat(0x3f800000,pUVar13,*puVar12,8);
          }
          else {
            UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
          }
          iVar3 = param_1[10];
          lVar5 = Career_IsTeamDefeated
                            (param_1[0x153e],iVar3,
                             param_1[iVar3 * 200 + iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26]
                            );
          if (lVar5 == 0) {
            UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
          }
          else {
            UiElem_SetPropFloat(0x3f800000,pUVar13,*puVar11,8);
          }
          UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
          UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
        }
        else {
          if (iVar2 + (param_1[param_1[10] + 0xb] - *param_1) < param_1[param_1[10] + 0x1d]) {
            UiElem_SetPropFloat(0x3f800000,pUVar13,*puVar14,8);
          }
          else {
            UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
          }
          iVar3 = param_1[10];
          lVar5 = Career_IsTeamDefeated
                            (param_1[0x153e],iVar3,
                             param_1[iVar3 * 200 + iVar2 + (param_1[iVar3 + 0xb] - *param_1) + 0x26]
                            );
          if (lVar5 == 0) {
            UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
          }
          else {
            UiElem_SetPropFloat(0x3f800000,pUVar13,*puVar15,8);
          }
          UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
          UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
        }
        if (param_1[param_1[10] * 200 + iVar2 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72e] ==
            0) {
          UiElem_SetPropFloat(0,pUVar13,*puVar16,8);
        }
        else {
          UiElem_SetPropFloat(0x3f800000,pUVar13,*puVar16,8);
        }
      }
      else {
        UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar16,8);
      }
      iVar2 = iVar2 + 1;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar2 < 6);
    if (param_1[0x153f] == 1) {
      if (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0) {
        UiElem_SetPropFloat(0,pUVar13,DAT_0032a5f8,8);
        iVar2 = param_1[10];
      }
      else {
        UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5f8,8);
        iVar2 = param_1[10];
      }
      if ((param_1[iVar2 + 0xb] - *param_1 < 1) ||
         (param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x72d] == 0)) {
        UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
        iVar2 = param_1[10];
      }
      else {
        UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5fc,8);
        iVar2 = param_1[10];
      }
      iVar2 = Rival_IsDefeated(iVar2,param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25]
                              );
      if (*(int *)(iVar2 + 4) != 0) {
        iVar2 = param_1[10];
        lVar5 = Career_IsTeamDefeated
                          (param_1[0x153e],iVar2,
                           param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25]);
        if (lVar5 == 0) {
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a618,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a638,8);
        }
        else {
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a618,8);
          UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a638,8);
        }
        goto LAB_0021e9c8;
      }
      iVar2 = param_1[10];
      lVar5 = Career_IsTeamDefeated
                        (param_1[0x153e],iVar2,
                         param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x25]);
      if (lVar5 == 0) {
        UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5b8,8);
        UiElem_SetPropFloat(0,pUVar13,DAT_0032a5d8,8);
        UiElem_SetPropFloat(0,pUVar13,DAT_0032a618,8);
        UiElem_SetPropFloat(0,pUVar13,DAT_0032a638,8);
        goto LAB_0021e9c8;
      }
      UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5b8,8);
      UiElem_SetPropFloat(0,pUVar13,DAT_0032a5d8,8);
      UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a618,8);
      UiElem_SetPropFloat(0,pUVar13,DAT_0032a638,8);
      iVar2 = param_1[0x153f];
    }
    else {
LAB_0021e9c8:
      iVar2 = param_1[0x153f];
    }
    if (iVar2 == 2) {
      if (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x734] == 0) {
        UiElem_SetPropFloat(0,pUVar13,DAT_0032a5f8,8);
        iVar2 = param_1[10];
      }
      else {
        UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5f8,8);
        iVar2 = param_1[10];
      }
      if ((param_1[iVar2 + 0xb] < 1) ||
         (param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x72d] == 0)) {
        UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
        iVar2 = param_1[10];
      }
      else {
        UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5fc,8);
        iVar2 = param_1[10];
      }
      iVar2 = Rival_IsDefeated(iVar2,param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c]
                              );
      if (*(int *)(iVar2 + 4) == 0) {
        iVar2 = param_1[10];
        lVar5 = Career_IsTeamDefeated
                          (param_1[0x153e],iVar2,
                           param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c]);
        if (lVar5 == 0) {
          UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a618,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a638,8);
        }
        else {
          UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a618,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a638,8);
        }
      }
      else {
        iVar2 = param_1[10];
        lVar5 = Career_IsTeamDefeated
                          (param_1[0x153e],iVar2,
                           param_1[iVar2 * 200 + (param_1[iVar2 + 0xb] - *param_1) + 0x2c]);
        if (lVar5 == 0) {
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a618,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a638,8);
        }
        else {
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a618,8);
          UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a638,8);
        }
      }
    }
    uVar8 = _g_MenuInput[2];
    if ((_g_MenuInput[4] & uVar8) == 0) {
      uVar8 = 0x100000;
    }
    else if (uVar8 == 0x80000) {
      uVar8 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar8 = 0x100000;
    }
    if (uVar8 == 0x1000) {
      iVar2 = UiMgr_FindLayout(0xab);
      pUVar1 = g_UiMgr->slots;
      uVar7 = UiRes_GetLayoutData(0xe3);
      UiLayout_PlayAnim(&pUVar1[iVar2].layout,uVar7);
      if ((param_1[param_1[10] + 0xb] - *param_1 < 1) ||
         (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0)) {
        UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
      }
      else {
        UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5fc,8);
      }
LAB_0021eedc:
      iVar2 = param_1[4];
    }
    else {
      if (uVar8 == 0x200) {
        iVar2 = UiMgr_FindLayout(0xab);
        pUVar1 = g_UiMgr->slots;
        uVar7 = UiRes_GetLayoutData(0xe3);
        UiLayout_PlayAnim(&pUVar1[iVar2].layout,uVar7);
        if ((param_1[param_1[10] + 0xb] - *param_1 < 1) ||
           (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0)) {
          UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
        }
        else {
          UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5fc,8);
        }
        goto LAB_0021eedc;
      }
      iVar2 = param_1[4];
    }
    if (iVar2 == 0) {
      iVar2 = 0;
      puVar12 = &DAT_0032a5a0;
      puVar11 = &DAT_0032a5c0;
      puVar14 = &DAT_0032a600;
      puVar15 = &DAT_0032a620;
      puVar16 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
        UiElem_SetPropFloat(0,pUVar13,*puVar16,8);
        iVar2 = iVar2 + 1;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar2 < 7);
      UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
    }
  }
  if ((param_1[0x153f] == 0) && (param_1[6] == 0)) {
    if ((param_1[param_1[10] + 0xb] - *param_1 < 1) ||
       (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0)) {
      UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
      iVar2 = param_1[0x153f];
      goto LAB_0021f034;
    }
    UiElem_SetPropFloat(0x3f800000,pUVar13,DAT_0032a5fc,8);
  }
  iVar2 = param_1[0x153f];
LAB_0021f034:
  if ((iVar2 == 1) && (lVar5 = UiLayout_UpdateAnimById(0xab,2), lVar5 == 0)) {
    param_1[0x153f] = 0;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    uVar4 = UiRes_GetLayoutData(0xe6);
    iVar2 = UiMgr_FindLayout(0xab);
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
    iVar2 = UiMgr_FindLayout(0xab);
    pUVar1 = g_UiMgr->slots;
    uVar7 = UiRes_GetLayoutData(0xe3);
    UiLayout_PlayAnim(&pUVar1[iVar2].layout,uVar7);
    Menu_ClearSlot(0);
    iVar2 = param_1[0x153f];
  }
  else {
    iVar2 = param_1[0x153f];
  }
  if ((iVar2 == 2) && (lVar5 = UiLayout_UpdateAnimById(0xab,3), lVar5 == 0)) {
    param_1[0x153f] = 0;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    uVar4 = UiRes_GetLayoutData(0xe3);
    iVar2 = UiMgr_FindLayout(0xab);
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
    Menu_ClearSlot(0);
    iVar2 = param_1[10];
  }
  else {
    iVar2 = param_1[10];
  }
  if (param_1[iVar2 + 0x1d] < 6) {
    UiElem_SetPropFloat(0x41700000,pUVar17,3,2);
    UiElem_SetPropFloat(0x41700000,pUVar17,3,6);
    iVar2 = param_1[6];
  }
  else {
    UiElem_SetPropFloat((6.0 / (float)param_1[iVar2 + 0x1d]) * 15.0,pUVar17,3,6);
    UiElem_SetPropFloat((240.0 / (float)param_1[param_1[10] + 0x1d]) *
                        (float)(param_1[param_1[10] + 0xb] - *param_1) + 15.0,pUVar17,3,2);
    iVar2 = param_1[6];
  }
  if ((iVar2 != 0) && (param_1[2] == 0)) {
    iVar2 = 0;
    puVar12 = &DAT_0032a5a0;
    puVar11 = &DAT_0032a5c0;
    puVar14 = &DAT_0032a600;
    puVar15 = &DAT_0032a620;
    puVar16 = &DAT_0032a5e0;
    do {
      UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar16,8);
      iVar2 = iVar2 + 1;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar2 < 7);
    UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
  }
  if ((param_1[8] != 0) && (param_1[4] == 0)) {
    iVar2 = 0;
    puVar12 = &DAT_0032a5a0;
    puVar11 = &DAT_0032a5c0;
    puVar14 = &DAT_0032a600;
    puVar15 = &DAT_0032a620;
    puVar16 = &DAT_0032a5e0;
    do {
      UiElem_SetPropFloat(0,pUVar13,*puVar12,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar11,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar14,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar15,8);
      UiElem_SetPropFloat(0,pUVar13,*puVar16,8);
      iVar2 = iVar2 + 1;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar2 < 7);
    UiElem_SetPropFloat(0,pUVar13,DAT_0032a5fc,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  if (param_1[4] == 0) {
    iVar2 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x23,8);
    iVar2 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x24,8);
    iVar2 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x25,8);
    iVar2 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x26,8);
    iVar2 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x27,8);
    iVar2 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x29,8);
    iVar2 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x28,8);
    iVar2 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x22,8);
  }
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xab);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xac);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

