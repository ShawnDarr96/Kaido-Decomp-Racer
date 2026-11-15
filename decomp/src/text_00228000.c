// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00228000 - 0x0022c000
#include "ghidra_types.h"

// 0x0022a0c0  size 0x1334
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Mail_a0c0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  UiLayout *pUVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  UiLayout *pUVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined4 auStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = UiMgr_FindLayout(0xaf);
  pUVar13 = &g_UiMgr->slots[iVar2].layout;
  iVar2 = UiMgr_FindLayout(0xb0);
  pUVar9 = &g_UiMgr->slots[iVar2].layout;
  UiMgr_FindLayout(0xb1);
  iVar2 = param_1[8];
  param_1[8] = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0xf0);
    iVar2 = UiMgr_FindLayout(0xae);
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
    uVar3 = UiRes_GetLayoutData(0xf5);
    iVar2 = UiMgr_FindLayout(0xae);
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
    uVar3 = UiRes_GetLayoutData(0xf6);
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
    uVar3 = UiRes_GetLayoutData(0xf8);
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
    param_1[0x1a1] = 2;
    MenuWnd_DrawDialogText(0xaf,0x36e988,2,0);
    auStack_30[1] = DAT_0032a884;
    auStack_30[0] = DAT_0032a880;
    auStack_30[3] = DAT_0032a88c;
    auStack_30[2] = DAT_0032a888;
    uStack_1c = DAT_0032a894;
    uStack_20 = DAT_0032a890;
    uStack_14 = DAT_0032a89c;
    uStack_18 = DAT_0032a898;
    uStack_10 = DAT_0032a8a0;
    uStack_c = DAT_0032a8a4;
    uStack_8 = DAT_0032a8a8;
    UiElem_SetPropFloat(0x3f800000,pUVar13,0x3f,8);
    UiElem_SetPropFloat(0x3f800000,pUVar13,0x41,8);
    UiElem_SetPropFloat(0,pUVar9,0x1c,8);
    UiElem_SetPropFloat(0,pUVar9,0x1d,8);
    iVar2 = 0;
    puVar10 = auStack_30;
    do {
      iVar12 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar12].layout,*puVar10,8);
      iVar2 = iVar2 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar2 < 0xb);
    UiElem_SetPropFloat(0,pUVar9,0x17,8);
    if ((param_1[3] == 8) || (param_1[3] == 10)) {
      iVar2 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,5,8);
      iVar2 = param_1[9];
      goto LAB_0022a14c;
    }
  }
  iVar2 = param_1[9];
LAB_0022a14c:
  if (iVar2 == 0) {
    MenuWnd_DrawCursor(1);
    iVar2 = param_1[3];
  }
  else {
    iVar2 = param_1[3];
  }
  if (((iVar2 == 1) || (iVar2 == 8)) || (iVar2 == 10)) {
    param_1[7] = 0;
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xae,0);
    lVar5 = UiLayout_UpdateAnimById(0xaf,0);
    lVar6 = UiLayout_UpdateAnimById(0xb0,0);
    if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
      param_1[7] = 0;
    }
  }
  if (param_1[9] != 0) {
    if (param_1[5] == 1) {
      param_1[9] = 0;
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xae);
      lVar5 = UiLayout_UpdateAnimById(0xaf,1);
      lVar6 = UiLayout_UpdateAnimById(0xb0,1);
      if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
        param_1[9] = 0;
      }
    }
    MenuWnd_SetItemVisible(0);
  }
  if (*_g_MenuInput == 1) {
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
  iVar2 = param_1[0x19d];
  if (param_1[iVar2 + 0xb] < 0xb) {
    iVar12 = 0;
    if (0 < param_1[iVar2 + 0xb]) {
      iVar7 = 0;
      puVar11 = (undefined4 *)0x32a910;
      puVar10 = (undefined4 *)0x32a8b0;
      puVar14 = (undefined4 *)0x32a8e0;
      do {
        uVar15 = 0;
        if (iVar2 == 1) {
          if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar7 + 0x354) * 0x28 + 0x999c) ==
              '\x01') {
            uVar15 = 5;
          }
          iVar2 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar7 + 0x354) * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar2,iVar2 % 7 + 0x44a);
          iVar8 = param_1[0x1a0] +
                  *(int *)((int)param_1 + iVar7 + param_1[0x19d] * 800 + 0x34) * 0x28;
          iVar2 = *(int *)(iVar8 + 0x99a0);
          if (iVar2 == -1) {
            MenuWnd_DrawText(0xaf,*puVar10,*(int *)(iVar8 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar10,iVar2 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                             *(int *)(param_1[0x1a0] +
                                      *(int *)((int)param_1 + iVar7 + param_1[0x19d] * 800 + 0x34) *
                                      0x28 + 0x9994) + 0x1a28);
        }
        else if (iVar2 == 0) {
          if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar7 + 0x34) * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar15 = 5;
          }
          iVar2 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar7 + 0x34) * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar2,iVar2 % 7 + 0x44a);
          iVar8 = param_1[0x1a0] +
                  *(int *)((int)param_1 + iVar7 + param_1[0x19d] * 800 + 0x34) * 0x28;
          iVar2 = *(int *)(iVar8 + 0xb8e0);
          if (iVar2 == -1) {
            MenuWnd_DrawText(0xaf,*puVar10,*(int *)(iVar8 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar10,iVar2 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                             *(int *)(param_1[0x1a0] +
                                      *(int *)((int)param_1 + iVar7 + param_1[0x19d] * 800 + 0x34) *
                                      0x28 + 0xb8d4) + 0x1a28);
        }
        iVar2 = param_1[0x19d];
        iVar12 = iVar12 + 1;
        iVar7 = iVar7 + 4;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar12 < param_1[iVar2 + 0xb]);
    }
  }
  else {
    iVar2 = 0;
    puVar11 = (undefined4 *)0x32a910;
    puVar10 = (undefined4 *)0x32a8b0;
    puVar14 = (undefined4 *)0x32a8e0;
    do {
      uVar15 = 0;
      if (param_1[0x19d] == 1) {
        if (*(char *)(param_1[0x1a0] + param_1[iVar2 + (param_1[0x19f] - param_1[2]) + 0xd5] * 0x28
                     + 0x999c) == '\x01') {
          uVar15 = 5;
        }
        iVar12 = *(int *)(param_1[0x1a0] +
                          param_1[iVar2 + (param_1[0x19f] - param_1[2]) + 0xd5] * 0x28 + 0x9998);
        MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar12,iVar12 % 7 + 0x44a);
        iVar12 = param_1[0x19d];
        iVar7 = param_1[0x1a0] +
                param_1[iVar12 * 200 + iVar2 + (param_1[iVar12 + 0x19e] - param_1[iVar12 + 1]) + 0xd
                       ] * 0x28;
        iVar12 = *(int *)(iVar7 + 0x99a0);
        if (iVar12 == -1) {
          MenuWnd_DrawText(0xaf,*puVar10,*(int *)(iVar7 + 0x9994) + 0x1b9a);
        }
        else {
          MenuWnd_DrawText(0xaf,*puVar10,iVar12 + 0xa8c);
        }
        iVar12 = param_1[0x19d];
        MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                           *(int *)(param_1[0x1a0] +
                                    param_1[iVar12 * 200 +
                                            iVar2 + (param_1[iVar12 + 0x19e] - param_1[iVar12 + 1])
                                            + 0xd] * 0x28 + 0x9994) + 0x1a28);
      }
      else if (param_1[0x19d] == 0) {
        if (*(char *)(param_1[0x1a0] + param_1[iVar2 + (param_1[0x19e] - param_1[1]) + 0xd] * 0x28 +
                     0xb8dc) == '\x01') {
          uVar15 = 5;
        }
        iVar12 = *(int *)(param_1[0x1a0] +
                          param_1[iVar2 + (param_1[0x19e] - param_1[1]) + 0xd] * 0x28 + 0xb8d8);
        MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar12,iVar12 % 7 + 0x44a);
        iVar12 = param_1[0x19d];
        iVar7 = param_1[0x1a0] +
                param_1[iVar12 * 200 + iVar2 + (param_1[iVar12 + 0x19e] - param_1[iVar12 + 1]) + 0xd
                       ] * 0x28;
        iVar12 = *(int *)(iVar7 + 0xb8e0);
        if (iVar12 == -1) {
          MenuWnd_DrawText(0xaf,*puVar10,*(int *)(iVar7 + 0xb8d4) + 0x1b9a);
        }
        else {
          MenuWnd_DrawText(0xaf,*puVar10,iVar12 + 0xa8c);
        }
        iVar12 = param_1[0x19d];
        MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                           *(int *)(param_1[0x1a0] +
                                    param_1[iVar12 * 200 +
                                            iVar2 + (param_1[iVar12 + 0x19e] - param_1[iVar12 + 1])
                                            + 0xd] * 0x28 + 0xb8d4) + 0x1a28);
      }
      iVar2 = iVar2 + 1;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar2 < 10);
  }
  if (param_1[7] == 0) {
    if (param_1[param_1[0x19d] + 0xb] < 0xb) {
      iVar12 = 0;
      iVar2 = 0;
      puVar10 = &DAT_0032a940;
      do {
        iVar7 = param_1[0x19d];
        if ((iVar12 < param_1[iVar7 + 0xb]) &&
           (lVar4 = Career_GetRivalIndex
                              (param_1[0x1a0],iVar7 == 0,
                               *(undefined4 *)((int)param_1 + iVar2 + iVar7 * 800 + 0x34)),
           lVar4 != -1)) {
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
      puVar10 = &DAT_0032a940;
      do {
        iVar12 = param_1[0x19d];
        lVar4 = Career_GetRivalIndex
                          (param_1[0x1a0],iVar12 == 0,
                           param_1[iVar12 * 200 +
                                   iVar2 + (param_1[iVar12 + 0x19e] - param_1[iVar12 + 1]) + 0xd]);
        if (lVar4 == -1) {
          UiElem_SetPropFloat(0,pUVar13,*puVar10,8);
        }
        else {
          UiElem_SetPropFloat(0x3f800000,pUVar13,*puVar10,8);
        }
        iVar2 = iVar2 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar2 < 10);
    }
  }
  else {
    iVar2 = 0;
    puVar10 = &DAT_0032a940;
    do {
      UiElem_SetPropFloat(0,pUVar13,*puVar10,8);
      iVar2 = iVar2 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar2 < 0xb);
  }
  if (g_MenuMgr->nextScreen == 8) {
    iVar2 = 0;
    puVar10 = &DAT_0032a940;
    do {
      UiElem_SetPropFloat(0,pUVar13,*puVar10,8);
      iVar2 = iVar2 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar2 < 0xb);
  }
  uVar15 = maybe_Mail_CountMessages(param_1[0x19d]);
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar15);
  if (param_1[param_1[0x19d] + 0xb] < 1) {
    DAT_0032a850 = 1;
  }
  else {
    DAT_0032a850 = 3;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_AreYouSure(int *param_1)

{
  UiLayoutSlot *pUVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_40 [60];
  undefined1 auStack_4 [4];
  
  iVar3 = param_1[0xb];
  param_1[0xb] = 0;
  if (iVar3 != 0) {
    uVar5 = UiRes_GetLayoutData(0x1d5);
    iVar3 = UiMgr_FindLayout(0x34);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar5;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x1d6);
    iVar3 = UiMgr_FindLayout(0x34);
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
    Menu_ClearSlot(0);
  }
  lVar6 = UiLayout_UpdateAnimById(0x34,0);
  if (lVar6 == 0) {
    param_1[10] = 0;
  }
  if (param_1[0xc] != 0) {
    if (param_1[8] == 1) {
      lVar6 = UiLayout_UpdateAnimById(0x34);
      lVar7 = UiLayout_UpdateAnimById(0x33,7);
      if (lVar6 == 0 && lVar7 == 0) {
        param_1[0xc] = 0;
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0x34);
      if (lVar6 == 0) {
        param_1[0xc] = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x34,*(undefined4 *)(*param_1 * 4 + 0x36e9d0),1,0);
  }
  MenuWnd_DrawText(0x34,0x1b,1);
  MenuWnd_DrawText(0x34,0x1d,2);
  MenuWnd_DrawText(0x34,0x1c,0x15b);
  MenuWnd_DrawTextId(0x33,0x5a,4,0x58);
  iVar3 = UiMgr_FindLayout(0x33);
  iVar11 = 0;
  iVar10 = 0;
  pUVar1 = g_UiMgr->slots;
  if (0 < param_1[3]) {
    do {
      puVar4 = (undefined1 *)0x2;
      puVar8 = auStack_4;
      puVar2 = puVar8;
      while (puVar2 != (undefined1 *)0x0) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
        puVar4 = puVar4 + -1;
        puVar2 = puVar4;
      }
      iVar9 = iVar11 * 4;
      auStack_4[0] = *(undefined1 *)((int)param_1 + iVar10 + 0x38);
      iVar11 = iVar11 + 1;
      UiElem_GetRect(&pUVar1[iVar3].layout,auStack_40,*(undefined4 *)(&DAT_0032ad90 + iVar9));
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_1[3]);
  }
  UiLayout_UpdateAnimById(0x32,0);
  iVar3 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x32);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x33);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x34);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x0022b8f0  size 0x8f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_PleaseEnterAn(int param_1)

{
  char cVar1;
  UiLayoutSlot *pUVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined1 *puVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  UiLayout *pUVar17;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  char acStack_8 [4];
  undefined1 auStack_4 [4];
  
  iVar6 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (iVar6 != 0) {
    uVar5 = UiRes_GetLayoutData(0x1cd);
    iVar6 = UiMgr_FindLayout(0x32);
    pUVar2 = g_UiMgr->slots;
    if (*(int *)&pUVar2[iVar6].layout.field_0x31c == 0) {
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
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x314 = 1;
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x31c = uVar5;
      pUVar2[iVar6].layout.unk_318 = 1;
    }
    uVar5 = UiRes_GetLayoutData(0x1ce);
    iVar6 = UiMgr_FindLayout(0x33);
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
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x31c = uVar5;
    pUVar2[iVar6].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x1cf);
    iVar6 = UiMgr_FindLayout(0x33);
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
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x330 = uVar5;
    pUVar2[iVar6].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x1d1);
    iVar6 = UiMgr_FindLayout(0x33);
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
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x354 = 1;
    uVar5 = UiRes_GetLayoutData(0x1d2);
    iVar6 = UiMgr_FindLayout(0x33);
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
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x368 = 1;
    uVar5 = UiRes_GetLayoutData(0x1d3);
    iVar6 = UiMgr_FindLayout(0x33);
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
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x380 = uVar5;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x37c = 1;
    uVar5 = UiRes_GetLayoutData(0x1d4);
    iVar6 = UiMgr_FindLayout(0x33);
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
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x394 = uVar5;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x390 = 1;
    uVar5 = UiRes_GetLayoutData(0x1db);
    iVar6 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x3a8 = uVar5;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x3a4 = 1;
  }
  lVar10 = UiLayout_UpdateAnimById(0x33,0);
  lVar11 = UiLayout_UpdateAnimById(0x33,2);
  if (lVar10 == 0 && lVar11 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      lVar10 = UiLayout_UpdateAnimById(0x33);
      lVar11 = UiLayout_UpdateAnimById(0x33,3);
      if (lVar10 == 0 && lVar11 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    else {
      lVar10 = UiLayout_UpdateAnimById(0x33);
      if ((lVar10 == 0) && (lVar10 = UiLayout_UpdateAnimById(0x33,4), lVar10 == 0)) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    UiLayout_UpdateAnimById(0x33,5);
    UiLayout_UpdateAnimById(0x33,6);
  }
  else {
    iVar6 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x37c = 1;
    }
    iVar6 = UiMgr_FindLayout(0x33);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar6].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar6].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar6].layout.field_0x390 = 1;
    }
  }
  iVar6 = 0;
  if (DAT_0032adf0 != -1) {
    piVar14 = &DAT_0032adf0;
    do {
      if ((iVar6 == *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0xd) && (*_g_MenuInput == 1)) {
        iVar7 = UiMgr_FindLayout(0x33);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar7].layout,*piVar14,8);
      }
      else if (*piVar14 != 0) {
        iVar7 = UiMgr_FindLayout(0x33);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,*piVar14,8);
      }
      piVar14 = piVar14 + 1;
      iVar6 = iVar6 + 1;
    } while (*piVar14 != -1);
  }
  MenuWnd_DrawText(0xd,0x1b,0x15c);
  MenuWnd_DrawTextId(0x33,0x5a,4,0x58);
  iVar7 = UiMgr_FindLayout(0x33);
  iVar6 = *(int *)(param_1 + 0xc);
  iVar16 = 0;
  iVar15 = 0;
  pUVar17 = &g_UiMgr->slots[iVar7].layout;
  if (0 < iVar6) {
    do {
      puVar9 = (undefined1 *)0x2;
      puVar13 = auStack_4;
      puVar4 = puVar13;
      while (puVar4 != (undefined1 *)0x0) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
        puVar9 = puVar9 + -1;
        puVar4 = puVar9;
      }
      iVar6 = iVar16 * 4;
      auStack_4[0] = *(undefined1 *)(param_1 + iVar15 + 0x38);
      iVar16 = iVar16 + 1;
      UiElem_GetRect(pUVar17,auStack_40,*(undefined4 *)(&DAT_0032ad90 + iVar6));
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar6 = *(int *)(param_1 + 0xc);
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar6);
  }
  if (iVar6 < 10) {
    cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_0032e7b0
            [*(int *)(param_1 + 8) * 0xd + *(int *)(param_1 + 4)];
    pcVar8 = (char *)0x2;
    pcVar12 = acStack_8;
    pcVar3 = pcVar12;
    while (pcVar3 != (char *)0x0) {
      *pcVar12 = '\0';
      pcVar12 = pcVar12 + 1;
      pcVar8 = pcVar8 + -1;
      pcVar3 = pcVar8;
    }
    if ((cVar1 != '<') && (cVar1 != '>')) {
      acStack_8[0] = cVar1;
    }
    UiElem_GetRect(pUVar17,auStack_40,*(undefined4 *)(&DAT_0032ad90 + *(int *)(param_1 + 0xc) * 4));
    UiText_DrawPlayerName(auStack_40,acStack_8,0);
    if (*_g_MenuInput == 1) {
      UiElem_GetRect(pUVar17,auStack_40,*(undefined4 *)(&DAT_0032adc0 + *(int *)(param_1 + 0xc) * 4)
                    );
      uStack_2c = 2;
      UiText_DrawPlayerName(auStack_40,acStack_8,0);
    }
  }
  UiLayout_UpdateAnimById(0x32,0);
  iVar6 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x32);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x33);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  return;
}

