// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00228000 - 0x0022c000
#include "ghidra_types.h"

// 0x0022a070  size 0x24
/* follows ScrCareer_Draw_Mail_7e70; no call, branch, pointer or constant reference (exception
   landing pad or dead code) */

void ScrCareer_Draw_Mail_7e70_Orphan2(void)

{
  int iVar1;
  byte in_a3_lo;
  UiLayout *unaff_s8_lo;
  
  UiElem_SetPropFloat(unaff_s8_lo,1,6,in_a3_lo);
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar1 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x0022a094  size 0x24
/* follows ScrCareer_Draw_Mail_7e70; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void ScrCareer_Draw_Mail_7e70_Orphan1(void)

{
  return;
}

// 0x0022a0c0  size 0x1304
void ScrCareer_Draw_Mail_a0c0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
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
  UiLayout *pUVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  int iVar17;
  UiLayout *pUVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  int aiStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar5 = UiMgr_FindLayout(0xaf);
  pUVar18 = &g_UiMgr->slots[iVar5].layout;
  iVar5 = UiMgr_FindLayout(0xb0);
  pUVar13 = &g_UiMgr->slots[iVar5].layout;
  UiMgr_FindLayout(0xb1);
  iVar5 = param_1[8];
  param_1[8] = 0;
  if (iVar5 != 0) {
    uVar6 = UiRes_GetLayoutData(0xf0);
    iVar5 = UiMgr_FindLayout(0xae);
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
    pUVar1[iVar5].layout.unk_31c = uVar6;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0xf5);
    iVar5 = UiMgr_FindLayout(0xae);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar7;
    pUVar1[iVar5].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0xf2);
    iVar5 = UiMgr_FindLayout(0xaf);
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
    pUVar1[iVar5].layout.unk_31c = uVar6;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0xf3);
    iVar5 = UiMgr_FindLayout(0xaf);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar7;
    pUVar1[iVar5].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0xf6);
    iVar5 = UiMgr_FindLayout(0xb0);
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
    pUVar1[iVar5].layout.unk_31c = uVar6;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0xf8);
    iVar5 = UiMgr_FindLayout(0xb0);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar7;
    pUVar1[iVar5].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0xf4);
    iVar5 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0xf1);
    iVar5 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
    param_1[0x1a1] = 2;
    MenuWnd_DrawDialogText(0xaf,0x36e988,2,0);
    aiStack_30[1] = DAT_0032a884;
    aiStack_30[0] = DAT_0032a880;
    aiStack_30[3] = DAT_0032a88c;
    aiStack_30[2] = DAT_0032a888;
    uStack_1c = DAT_0032a894;
    uStack_20 = DAT_0032a890;
    uStack_14 = DAT_0032a89c;
    uStack_18 = DAT_0032a898;
    uStack_10 = DAT_0032a8a0;
    uStack_c = DAT_0032a8a4;
    uStack_8 = DAT_0032a8a8;
    UiElem_SetPropFloat(pUVar18,0x3f,8,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar18,0x41,8,extraout_a3_lo_01);
    UiElem_SetPropFloat(pUVar13,0x1c,8,extraout_a3_lo_02);
    UiElem_SetPropFloat(pUVar13,0x1d,8,extraout_a3_lo_03);
    iVar5 = 0;
    piVar15 = aiStack_30;
    do {
      iVar17 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar17].layout,(long)*piVar15,8,extraout_a3_lo_04);
      iVar5 = iVar5 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar5 < 0xb);
    UiElem_SetPropFloat(pUVar13,0x17,8,extraout_a3_lo_05);
    if ((param_1[3] == 8) || (param_1[3] == 10)) {
      iVar5 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,5,8,extraout_a3_lo_06);
      iVar5 = param_1[9];
      goto LAB_0022a14c;
    }
  }
  iVar5 = param_1[9];
LAB_0022a14c:
  if (iVar5 == 0) {
    MenuWnd_DrawCursor(1);
    iVar5 = param_1[3];
  }
  else {
    iVar5 = param_1[3];
  }
  if (((iVar5 == 1) || (iVar5 == 8)) || (iVar5 == 10)) {
    param_1[7] = 0;
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xae,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xaf,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xb0,0);
    if (!bVar4 && (!bVar2 && !bVar3)) {
      param_1[7] = 0;
    }
  }
  if (param_1[9] != 0) {
    if (param_1[5] == 1) {
      param_1[9] = 0;
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xae,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xaf,1);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xb0,1);
      if (!bVar4 && (!bVar2 && !bVar3)) {
        param_1[9] = 0;
      }
    }
    MenuWnd_SetItemVisible(0);
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0xaf,*(undefined4 *)(&DAT_0036e990 + *param_1 * 4),0,0);
  }
  MenuWnd_DrawText(0xae,1,0x434);
  MenuWnd_DrawText(0xaf,0x43,0x441);
  MenuWnd_DrawText(0xaf,0x44,0x440);
  if (param_1[param_1[0x19d] + 0xb] < 1) {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,0);
  }
  else {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,param_1[param_1[0x19d] + 0x19e] + 1);
  }
  MenuWnd_DrawText(0xb0,0x1a,0x449);
  iVar5 = param_1[0x19d];
  uVar9 = extraout_a3;
  if (param_1[iVar5 + 0xb] < 0xb) {
    iVar17 = 0;
    if (0 < param_1[iVar5 + 0xb]) {
      iVar10 = 0;
      puVar16 = (undefined4 *)0x32a910;
      puVar14 = (undefined4 *)0x32a8b0;
      puVar19 = (undefined4 *)0x32a8e0;
      do {
        uVar20 = 0;
        if (iVar5 == 1) {
          if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar10 + 0x354) * 0x28 + 0x999c) ==
              '\x01') {
            uVar20 = 5;
          }
          iVar5 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar10 + 0x354) * 0x28 + 0x9998)
          ;
          MenuWnd_DrawLabel(0xaf,*puVar16,0x444,iVar5,iVar5 % 7 + 0x44a);
          iVar11 = param_1[0x1a0] +
                   *(int *)((int)param_1 + iVar10 + param_1[0x19d] * 800 + 0x34) * 0x28;
          iVar5 = *(int *)(iVar11 + 0x99a0);
          if (iVar5 == -1) {
            MenuWnd_DrawText(0xaf,*puVar14,*(int *)(iVar11 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar14,iVar5 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar19,uVar20,
                             *(int *)(param_1[0x1a0] +
                                      *(int *)((int)param_1 + iVar10 + param_1[0x19d] * 800 + 0x34)
                                      * 0x28 + 0x9994) + 0x1a28);
          uVar9 = extraout_a3_05;
        }
        else if (iVar5 == 0) {
          if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar10 + 0x34) * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar20 = 5;
          }
          iVar5 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar10 + 0x34) * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar16,0x444,iVar5,iVar5 % 7 + 0x44a);
          iVar11 = param_1[0x1a0] +
                   *(int *)((int)param_1 + iVar10 + param_1[0x19d] * 800 + 0x34) * 0x28;
          iVar5 = *(int *)(iVar11 + 0xb8e0);
          if (iVar5 == -1) {
            MenuWnd_DrawText(0xaf,*puVar14,*(int *)(iVar11 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar14,iVar5 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar19,uVar20,
                             *(int *)(param_1[0x1a0] +
                                      *(int *)((int)param_1 + iVar10 + param_1[0x19d] * 800 + 0x34)
                                      * 0x28 + 0xb8d4) + 0x1a28);
          uVar9 = extraout_a3_04;
        }
        iVar5 = param_1[0x19d];
        iVar17 = iVar17 + 1;
        iVar10 = iVar10 + 4;
        puVar16 = puVar16 + 1;
        puVar14 = puVar14 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar17 < param_1[iVar5 + 0xb]);
    }
  }
  else {
    iVar5 = 0;
    puVar16 = (undefined4 *)0x32a910;
    puVar14 = (undefined4 *)0x32a8b0;
    puVar19 = (undefined4 *)0x32a8e0;
    do {
      uVar20 = 0;
      if (param_1[0x19d] == 1) {
        if (*(char *)(param_1[0x1a0] + param_1[iVar5 + (param_1[0x19f] - param_1[2]) + 0xd5] * 0x28
                     + 0x999c) == '\x01') {
          uVar20 = 5;
        }
        iVar17 = *(int *)(param_1[0x1a0] +
                          param_1[iVar5 + (param_1[0x19f] - param_1[2]) + 0xd5] * 0x28 + 0x9998);
        MenuWnd_DrawLabel(0xaf,*puVar16,0x444,iVar17,iVar17 % 7 + 0x44a);
        iVar17 = param_1[0x19d];
        iVar10 = param_1[0x1a0] +
                 param_1[iVar17 * 200 +
                         iVar5 + (param_1[iVar17 + 0x19e] - param_1[iVar17 + 1]) + 0xd] * 0x28;
        iVar17 = *(int *)(iVar10 + 0x99a0);
        if (iVar17 == -1) {
          MenuWnd_DrawText(0xaf,*puVar14,*(int *)(iVar10 + 0x9994) + 0x1b9a);
        }
        else {
          MenuWnd_DrawText(0xaf,*puVar14,iVar17 + 0xa8c);
        }
        iVar17 = param_1[0x19d];
        MenuWnd_DrawTextId(0xaf,*puVar19,uVar20,
                           *(int *)(param_1[0x1a0] +
                                    param_1[iVar17 * 200 +
                                            iVar5 + (param_1[iVar17 + 0x19e] - param_1[iVar17 + 1])
                                            + 0xd] * 0x28 + 0x9994) + 0x1a28);
        uVar9 = extraout_a3_01;
      }
      else if (param_1[0x19d] == 0) {
        if (*(char *)(param_1[0x1a0] + param_1[iVar5 + (param_1[0x19e] - param_1[1]) + 0xd] * 0x28 +
                     0xb8dc) == '\x01') {
          uVar20 = 5;
        }
        iVar17 = *(int *)(param_1[0x1a0] +
                          param_1[iVar5 + (param_1[0x19e] - param_1[1]) + 0xd] * 0x28 + 0xb8d8);
        MenuWnd_DrawLabel(0xaf,*puVar16,0x444,iVar17,iVar17 % 7 + 0x44a);
        iVar17 = param_1[0x19d];
        iVar10 = param_1[0x1a0] +
                 param_1[iVar17 * 200 +
                         iVar5 + (param_1[iVar17 + 0x19e] - param_1[iVar17 + 1]) + 0xd] * 0x28;
        iVar17 = *(int *)(iVar10 + 0xb8e0);
        if (iVar17 == -1) {
          MenuWnd_DrawText(0xaf,*puVar14,*(int *)(iVar10 + 0xb8d4) + 0x1b9a);
        }
        else {
          MenuWnd_DrawText(0xaf,*puVar14,iVar17 + 0xa8c);
        }
        iVar17 = param_1[0x19d];
        MenuWnd_DrawTextId(0xaf,*puVar19,uVar20,
                           *(int *)(param_1[0x1a0] +
                                    param_1[iVar17 * 200 +
                                            iVar5 + (param_1[iVar17 + 0x19e] - param_1[iVar17 + 1])
                                            + 0xd] * 0x28 + 0xb8d4) + 0x1a28);
        uVar9 = extraout_a3_00;
      }
      iVar5 = iVar5 + 1;
      puVar16 = puVar16 + 1;
      puVar14 = puVar14 + 1;
      puVar19 = puVar19 + 1;
    } while (iVar5 < 10);
  }
  if (param_1[7] == 0) {
    if (param_1[param_1[0x19d] + 0xb] < 0xb) {
      iVar17 = 0;
      iVar5 = 0;
      piVar15 = &DAT_0032a940;
      do {
        bVar12 = (byte)uVar9;
        iVar10 = param_1[0x19d];
        if ((iVar17 < param_1[iVar10 + 0xb]) &&
           (lVar8 = Career_GetRivalIndex
                              (param_1[0x1a0],iVar10 == 0,
                               *(undefined4 *)((int)param_1 + iVar5 + iVar10 * 800 + 0x34)),
           bVar12 = extraout_a3_lo, lVar8 != -1)) {
          UiElem_SetPropFloat(pUVar18,(long)*piVar15,8,extraout_a3_lo);
          uVar9 = extraout_a3_02;
        }
        else {
          UiElem_SetPropFloat(pUVar18,(long)*piVar15,8,bVar12);
          uVar9 = extraout_a3_08;
        }
        iVar17 = iVar17 + 1;
        iVar5 = iVar5 + 4;
        piVar15 = piVar15 + 1;
      } while (iVar17 < 0xb);
    }
    else {
      iVar5 = 0;
      piVar15 = &DAT_0032a940;
      do {
        iVar17 = param_1[0x19d];
        lVar8 = Career_GetRivalIndex
                          (param_1[0x1a0],iVar17 == 0,
                           param_1[iVar17 * 200 +
                                   iVar5 + (param_1[iVar17 + 0x19e] - param_1[iVar17 + 1]) + 0xd]);
        if (lVar8 == -1) {
          UiElem_SetPropFloat(pUVar18,(long)*piVar15,8,extraout_a3_lo_07);
          uVar9 = extraout_a3_07;
        }
        else {
          UiElem_SetPropFloat(pUVar18,(long)*piVar15,8,extraout_a3_lo_07);
          uVar9 = extraout_a3_06;
        }
        iVar5 = iVar5 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar5 < 10);
    }
  }
  else {
    iVar5 = 0;
    piVar15 = &DAT_0032a940;
    do {
      UiElem_SetPropFloat(pUVar18,(long)*piVar15,8,(byte)uVar9);
      iVar5 = iVar5 + 1;
      piVar15 = piVar15 + 1;
      uVar9 = extraout_a3_09;
    } while (iVar5 < 0xb);
  }
  if (g_MenuMgr->nextScreen == 8) {
    iVar5 = 0;
    piVar15 = &DAT_0032a940;
    do {
      UiElem_SetPropFloat(pUVar18,(long)*piVar15,8,(byte)uVar9);
      iVar5 = iVar5 + 1;
      piVar15 = piVar15 + 1;
      uVar9 = extraout_a3_03;
    } while (iVar5 < 0xb);
  }
  uVar9 = maybe_Mail_CountMessages(param_1[0x19d]);
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar9);
  if (param_1[param_1[0x19d] + 0xb] < 1) {
    DAT_0032a850 = 1;
  }
  else {
    DAT_0032a850 = 3;
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar5 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x0022b3dc  size 0x18
/* follows ScrCareer_Draw_Mail_a0c0; no call, branch, pointer or constant reference (exception
   landing pad or dead code) */

void ScrCareer_Draw_Mail_a0c0_Orphan2(void)

{
  int iVar1;
  int in_v0_lo;
  undefined4 in_v1_lo;
  
  *(undefined4 *)(in_v0_lo + -0x57b0) = in_v1_lo;
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar1 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x0022b3f4  size 0x18
/* follows ScrCareer_Draw_Mail_a0c0; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void ScrCareer_Draw_Mail_a0c0_Orphan1(void)

{
  return;
}

// 0x0022b410  size 0x14
/* page identified from its states' on-screen text (N154) */

void maybe_PageMail_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0022b430  size 0xe0
/* page identified from its states' on-screen text (N154) */

void maybe_PageMail_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar2 = (int)param_1;
  MenuWnd_SetTitle((&DAT_0032a850)[*(int *)(iVar2 + 0x10)],0xffffffffffffffff);
  (*(code *)(&PTR_ScrCareer_Draw_Mail_a0c0_0032a820)[*(int *)(iVar2 + 0x10)])(param_1);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar1 = Menu_IsInputIdle(iVar2 + 0xc), lVar1 == 1)) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x0022b510  size 0x8
/* page identified from its states' on-screen text (N154) */

void maybe_PageMail_Enter(void)

{
  return;
}

// 0x0022b520  size 0x3c8
void MenuScr_Draw_AreYouSure(int *param_1)

{
  UiLayoutSlot *pUVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 auStack_40 [15];
  undefined1 auStack_4 [4];
  
  iVar5 = param_1[0xb];
  param_1[0xb] = 0;
  if (iVar5 != 0) {
    uVar7 = UiRes_GetLayoutData(0x1d5);
    iVar5 = UiMgr_FindLayout(0x34);
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
    pUVar1[iVar5].layout.unk_31c = uVar7;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x1d6);
    iVar5 = UiMgr_FindLayout(0x34);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar8;
    pUVar1[iVar5].layout.animState = 1;
    Menu_ClearSlot(0);
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x34,0);
  if (!bVar3) {
    param_1[10] = 0;
  }
  if (param_1[0xc] != 0) {
    if (param_1[8] == 1) {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x34,1);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x33,7);
      if (!bVar3 && !bVar4) {
        param_1[0xc] = 0;
      }
    }
    else {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x34,1);
      if (!bVar3) {
        param_1[0xc] = 0;
      }
    }
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0x34,*(undefined4 *)(*param_1 * 4 + 0x36e9d0),1,0);
  }
  MenuWnd_DrawText(0x34,0x1b,1);
  MenuWnd_DrawText(0x34,0x1d,2);
  MenuWnd_DrawText(0x34,0x1c,0x15b);
  MenuWnd_DrawTextId(0x33,0x5a,4,0x58);
  iVar5 = UiMgr_FindLayout(0x33);
  iVar12 = 0;
  iVar11 = 0;
  pUVar1 = g_UiMgr->slots;
  if (0 < param_1[3]) {
    do {
      puVar6 = (undefined1 *)0x2;
      puVar9 = auStack_4;
      puVar2 = puVar9;
      while (puVar2 != (undefined1 *)0x0) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + -1;
        puVar2 = puVar6;
      }
      iVar10 = iVar12 * 4;
      auStack_4[0] = *(undefined1 *)((int)param_1 + iVar11 + 0x38);
      iVar12 = iVar12 + 1;
      UiElem_GetRect(&pUVar1[iVar5].layout,auStack_40,(long)*(int *)(&DAT_0032ad90 + iVar10));
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_1[3]);
  }
  UiLayout_UpdateAnimById((UiLayout *)0x32,0);
  iVar5 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x32);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x33);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x34);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x0022b8f0  size 0x8f4
void MenuScr_Draw_PleaseEnterAn(int param_1)

{
  char cVar1;
  UiLayoutSlot *pUVar2;
  char *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined1 *puVar14;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  int *piVar15;
  int iVar16;
  int iVar17;
  UiLayout *pUVar18;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  char acStack_8 [4];
  undefined1 auStack_4 [4];
  
  iVar8 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (iVar8 != 0) {
    uVar7 = UiRes_GetLayoutData(0x1cd);
    iVar8 = UiMgr_FindLayout(0x32);
    pUVar2 = g_UiMgr->slots;
    if (pUVar2[iVar8].layout.unk_31c == 0) {
      pUVar2[iVar8].layout.unk_310 = 0xffffffff;
      pUVar2[iVar8].layout.unk_31c = 0;
      pUVar2[iVar8].layout.unk_30c = 0;
      if (pUVar2[iVar8].layout.unk_31c == 0) {
        pUVar2[iVar8].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar8].layout.unk_318 = 1;
      }
      pUVar2[iVar8].layout.unk_30c = 0;
      if (pUVar2[iVar8].layout.unk_31c == 0) {
        pUVar2[iVar8].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar8].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x314 = 1;
      pUVar2[iVar8].layout.unk_31c = uVar7;
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    uVar7 = UiRes_GetLayoutData(0x1ce);
    iVar8 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar8].layout.unk_310 = 0xffffffff;
    pUVar2[iVar8].layout.unk_31c = 0;
    pUVar2[iVar8].layout.unk_30c = 0;
    if (pUVar2[iVar8].layout.unk_31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    pUVar2[iVar8].layout.unk_30c = 0;
    if (pUVar2[iVar8].layout.unk_31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x314 = 0;
    pUVar2[iVar8].layout.unk_31c = uVar7;
    pUVar2[iVar8].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(0x1cf);
    iVar8 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x330 == 0) {
      pUVar2[iVar8].layout.animState = 0;
    }
    else {
      pUVar2[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x330 == 0) {
      pUVar2[iVar8].layout.animState = 0;
    }
    else {
      pUVar2[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x330 = uVar9;
    pUVar2[iVar8].layout.animState = 1;
    uVar9 = UiRes_GetLayoutData(0x1d1);
    iVar8 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x358 = uVar9;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 1;
    uVar9 = UiRes_GetLayoutData(0x1d2);
    iVar8 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x36c = uVar9;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x368 = 1;
    uVar9 = UiRes_GetLayoutData(0x1d3);
    iVar8 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x380 = uVar9;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x37c = 1;
    uVar9 = UiRes_GetLayoutData(0x1d4);
    iVar8 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x38c = 1;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x394 = uVar9;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x390 = 1;
    uVar9 = UiRes_GetLayoutData(0x1db);
    iVar8 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x3a8 = uVar9;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x3a4 = 1;
  }
  bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x33,0);
  bVar6 = UiLayout_UpdateAnimById((UiLayout *)0x33,2);
  if (!bVar5 && !bVar6) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x33,1);
      bVar6 = UiLayout_UpdateAnimById((UiLayout *)0x33,3);
      if (!bVar5 && !bVar6) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    else {
      bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x33,1);
      if ((!bVar5) && (bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x33,4), !bVar5)) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
  }
  if (*g_MenuInput == 1) {
    UiLayout_UpdateAnimById((UiLayout *)0x33,5);
    UiLayout_UpdateAnimById((UiLayout *)0x33,6);
  }
  else {
    iVar8 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x37c = 1;
    }
    iVar8 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x390 = 1;
    }
  }
  iVar8 = 0;
  if (DAT_0032adf0 != -1) {
    piVar15 = &DAT_0032adf0;
    do {
      if ((iVar8 == *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0xd) && (*g_MenuInput == 1)) {
        iVar10 = UiMgr_FindLayout(0x33);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar10].layout,(long)*piVar15,8,extraout_a3_lo);
      }
      else if (*piVar15 != 0) {
        iVar10 = UiMgr_FindLayout(0x33);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar10].layout,(long)*piVar15,8,extraout_a3_lo_00);
      }
      piVar15 = piVar15 + 1;
      iVar8 = iVar8 + 1;
    } while (*piVar15 != -1);
  }
  MenuWnd_DrawText(0xd,0x1b,0x15c);
  MenuWnd_DrawTextId(0x33,0x5a,4,0x58);
  iVar10 = UiMgr_FindLayout(0x33);
  iVar8 = *(int *)(param_1 + 0xc);
  iVar17 = 0;
  iVar16 = 0;
  pUVar18 = &g_UiMgr->slots[iVar10].layout;
  if (0 < iVar8) {
    do {
      puVar12 = (undefined1 *)0x2;
      puVar14 = auStack_4;
      puVar4 = puVar14;
      while (puVar4 != (undefined1 *)0x0) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
        puVar12 = puVar12 + -1;
        puVar4 = puVar12;
      }
      iVar8 = iVar17 * 4;
      auStack_4[0] = *(undefined1 *)(param_1 + iVar16 + 0x38);
      iVar17 = iVar17 + 1;
      UiElem_GetRect(pUVar18,auStack_40,(long)*(int *)(&DAT_0032ad90 + iVar8));
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar8 = *(int *)(param_1 + 0xc);
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar8);
  }
  if (iVar8 < 10) {
    cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_0032e7b0
            [*(int *)(param_1 + 8) * 0xd + *(int *)(param_1 + 4)];
    pcVar11 = (char *)0x2;
    pcVar13 = acStack_8;
    pcVar3 = pcVar13;
    while (pcVar3 != (char *)0x0) {
      *pcVar13 = '\0';
      pcVar13 = pcVar13 + 1;
      pcVar11 = pcVar11 + -1;
      pcVar3 = pcVar11;
    }
    if ((cVar1 != '<') && (cVar1 != '>')) {
      acStack_8[0] = cVar1;
    }
    UiElem_GetRect(pUVar18,auStack_40,(long)*(int *)(&DAT_0032ad90 + *(int *)(param_1 + 0xc) * 4));
    UiText_DrawPlayerName(auStack_40,acStack_8,0);
    if (*g_MenuInput == 1) {
      UiElem_GetRect(pUVar18,auStack_40,(long)*(int *)(&DAT_0032adc0 + *(int *)(param_1 + 0xc) * 4))
      ;
      uStack_2c = 2;
      UiText_DrawPlayerName(auStack_40,acStack_8,0);
    }
  }
  UiLayout_UpdateAnimById((UiLayout *)0x32,0);
  iVar8 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x32);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x33);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  return;
}

