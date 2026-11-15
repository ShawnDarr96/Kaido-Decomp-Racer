// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002f4000 - 0x002f8000
#include "ghidra_types.h"

// 0x002f4190  size 0x2a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x342dbc */

void ScrDraw_TestCourse_Enter(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  lVar3 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar3 != 0) {
    iVar1 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x55,9,0);
    Composer_ShowPanel(0);
  }
  lVar3 = Nameentry_Draw_Rokko(7,0xffffffffffffffff);
  if (lVar3 == 1) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  lVar4 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar4 != 0) {
    if (lVar3 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar3 == 3) {
      Composer_ConsumeRedraw(param_1 + 0xc44);
    }
  }
  maybe_ComposerUi_ScrollView(param_1);
  iVar7 = 0;
  puVar6 = &DAT_00343350;
  puVar5 = &DAT_00343370;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0xd08) == 0) {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar6,8);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0x3ecccccd,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar6,8);
    }
    if (*(int *)(iVar1 + 0xd28) == 0) {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar5,8);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar5,8);
    }
    iVar7 = iVar7 + 1;
    iVar1 = iVar1 + 4;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar7 < 8);
  iVar1 = UiMgr_FindLayout(0xc);
  UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x69,9,*(undefined4 *)(param_1 + 0xcc0));
  maybe_ComposerUi_DrawPlayhead(param_1);
  maybe_ComposerUi_DrawNotes(param_1,1);
  maybe_ComposerUi_DrawCursor(param_1,1);
  maybe_ComposerUi_DrawGrid(param_1,0);
  iVar1 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f4440  size 0xdf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Akagi(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 auStack_40 [64];
  
  lVar7 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar7 != 0) {
    uVar4 = UiRes_GetLayoutData(0x3f);
    iVar5 = UiMgr_FindLayout(0x13);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar5 + 800) = 0;
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x318) = 0;
    *(undefined4 *)(iVar5 + 800) = uVar4;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(0x40);
    iVar5 = UiMgr_FindLayout(0x13);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x334) = 0;
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x32c) = 0;
    *(undefined4 *)(iVar5 + 0x334) = uVar4;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar4 = UiRes_GetLayoutData(0x19);
    iVar5 = UiMgr_FindLayout(0xf);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar5 + 800) = 0;
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x318) = 0;
    *(undefined4 *)(iVar5 + 800) = uVar4;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(0x1a);
    iVar5 = UiMgr_FindLayout(0xf);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x334) = 0;
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x32c) = 0;
    *(undefined4 *)(iVar5 + 0x334) = uVar4;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar4 = UiRes_GetLayoutData(0x21);
    iVar5 = UiMgr_FindLayout(0xb);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar5 + 800) = 0;
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x318) = 0;
    *(undefined4 *)(iVar5 + 800) = uVar4;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(0x22);
    iVar5 = UiMgr_FindLayout(0xb);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x334) = 0;
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x32c) = 0;
    *(undefined4 *)(iVar5 + 0x334) = uVar4;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar4 = UiRes_GetLayoutData(0x23);
    iVar5 = UiMgr_FindLayout(0xb);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x348) = 0;
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    *(undefined4 *)(iVar5 + 0x340) = 0;
    *(undefined4 *)(iVar5 + 0x348) = uVar4;
    *(undefined4 *)(iVar5 + 0x344) = 1;
    uVar4 = UiRes_GetLayoutData(0x24);
    iVar5 = UiMgr_FindLayout(0xb);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x35c) = 0;
    *(undefined4 *)(iVar5 + 0x34c) = 0;
    if (*(int *)(iVar5 + 0x35c) == 0) {
      *(undefined4 *)(iVar5 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x358) = 1;
    }
    *(undefined4 *)(iVar5 + 0x34c) = 0;
    if (*(int *)(iVar5 + 0x35c) == 0) {
      *(undefined4 *)(iVar5 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x358) = 1;
    }
    *(undefined4 *)(iVar5 + 0x354) = 0;
    *(undefined4 *)(iVar5 + 0x35c) = uVar4;
    *(undefined4 *)(iVar5 + 0x358) = 1;
    iVar5 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x9e,8);
    iVar5 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x9f,8);
    iVar6 = UiMgr_FindLayout(0xb);
    iVar5 = *_g_UiMgr;
    uVar11 = UiRes_GetLayoutData(0x42);
    UiLayout_IsAnimDone(iVar5 + iVar6 * 0x4f4 + 4,5,0x9e,uVar11,1);
    iVar6 = UiMgr_FindLayout(0xb);
    iVar5 = *_g_UiMgr;
    uVar11 = UiRes_GetLayoutData(0x43);
    UiLayout_IsAnimDone(iVar5 + iVar6 * 0x4f4 + 4,6,0x9f,uVar11,1);
    iVar5 = UiMgr_FindLayout(0x13);
    UiElem_SetPropInt(*_g_UiMgr + iVar5 * 0x4f4 + 4,0xc,0x16,7);
  }
  lVar7 = UiLayout_UpdateAnimById(0xf,0);
  lVar8 = UiLayout_UpdateAnimById(0xb,0);
  lVar9 = UiLayout_UpdateAnimById(0x13,0);
  if (lVar9 == 0 && (lVar7 == 0 && lVar8 == 0)) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  lVar7 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar7 != 0) {
    lVar7 = UiLayout_UpdateAnimById(0xf,1);
    lVar8 = UiLayout_UpdateAnimById(0xb,1);
    lVar9 = UiLayout_UpdateAnimById(0x13,1);
    if (lVar9 == 0 && (lVar7 == 0 && lVar8 == 0)) {
      Composer_ConsumeRedraw(param_1 + 0xc44);
      iVar5 = UiMgr_FindLayout(0x13);
      UiElem_SetPropInt(*_g_UiMgr + iVar5 * 0x4f4 + 4,0xc,0x16,6);
    }
    iVar5 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x9e,8);
    iVar5 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x9f,8);
  }
  UiLayout_UpdateAnimById(0xb,5);
  UiLayout_UpdateAnimById(0xb,6);
  lVar7 = Nameentry_GetField_14(param_1 + 0xc44);
  if ((lVar7 == 0) && (lVar7 = Nameentry_GetField_18(param_1 + 0xc44), lVar7 == 0)) {
    if (*(int *)(param_1 + 0xd7c) == 0) {
      lVar7 = Nameentry_GetField_14(param_1 + 0xc44);
      if ((lVar7 == 0) && (lVar7 = Nameentry_GetField_18(param_1 + 0xc44), lVar7 == 0)) {
        ComposerInput_SetMode(1);
        MenuWnd_SetItemState
                  (0xb,*(undefined4 *)
                        (*(int *)(param_1 + 0x123c) * 0x10 +
                        ((*(int *)(param_1 + 0x1234) +
                         (*(int *)(param_1 + 0x1238) - *(int *)(param_1 + 0x1240))) %
                        *(int *)(param_1 + 0x1234)) * 0x30 + 0x343064),0,0);
      }
      goto LAB_002f45e8;
    }
    ComposerInput_SetMode(0);
    if (*(int *)(param_1 + 0xd7c) != 1) {
      lVar7 = UiLayout_UpdateAnimById(0xb,3);
      if (lVar7 == 0) {
        *(undefined4 *)(param_1 + 0xd7c) = 0;
        iVar5 = UiMgr_FindLayout(0xb);
        iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
        *(undefined4 *)(iVar5 + 0x34c) = 0;
        if (*(int *)(iVar5 + 0x35c) == 0) {
          *(undefined4 *)(iVar5 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar5 + 0x358) = 1;
        }
        Menu_ClearSlot(0);
      }
      goto LAB_002f45e8;
    }
    lVar7 = UiLayout_UpdateAnimById(0xb,2);
    if (lVar7 != 0) goto LAB_002f45e8;
    *(undefined4 *)(param_1 + 0xd7c) = 0;
    iVar5 = UiMgr_FindLayout(0xb);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    Menu_ClearSlot(0);
    iVar5 = *(int *)(param_1 + 0x1238);
  }
  else {
LAB_002f45e8:
    iVar5 = *(int *)(param_1 + 0x1238);
  }
  iVar5 = *(int *)(param_1 + 0x123c) + iVar5 * 3;
  if (iVar5 < 0x10d) {
    iVar5 = *(int *)(iVar5 * 4 + param_1 + 0xdfc);
  }
  else {
    iVar5 = 0x10d;
  }
  MenuWnd_DrawText(0xf,0x24,0x37);
  iVar6 = UiMgr_FindLayout(0xf);
  UiElem_GetRect(*_g_UiMgr + iVar6 * 0x4f4 + 4,auStack_40,0x25);
  uVar11 = Script_FieldPtr_89f6(*(undefined4 *)(param_1 + 0xca4));
  UiText_DrawPlayerName(auStack_40,uVar11,0);
  MenuWnd_DrawTextId(0xf,0x18,1,0x38);
  if ((iVar5 == 0) || (0x10c < iVar5)) {
    MenuWnd_DrawText(0xf,0x19,6);
  }
  else {
    iVar6 = SeqGen_GetPatternEntry(iVar5);
    if (*(int *)(iVar6 + 4) == 0) {
      MenuWnd_DrawText(0xf,0x19,0x3e);
    }
    else {
      MenuWnd_DrawTextId(0xf,0x19,4,0x3d);
    }
  }
  MenuWnd_DrawTextId(0xf,0x1a,1,0x39);
  if ((iVar5 == 0) || (0x10c < iVar5)) {
    MenuWnd_DrawText(0xf,0x1b,6);
  }
  else {
    iVar6 = SeqGen_GetPatternEntry(iVar5);
    if (*(char *)(iVar6 + 10) == '\0') {
      MenuWnd_DrawText(0xf,0x1b,0x51);
    }
    else {
      iVar6 = SeqGen_GetPatternEntry(iVar5);
      if (*(char *)(iVar6 + 9) == '\0') {
        iVar6 = SeqGen_GetPatternEntry(iVar5);
        MenuWnd_DrawLabel(0xf,0x1b,0x4f,*(undefined1 *)(iVar6 + 10));
        iVar6 = *(int *)(param_1 + 0x1230);
        goto LAB_002f4770;
      }
      iVar6 = SeqGen_GetPatternEntry(iVar5);
      uVar1 = *(undefined1 *)(iVar6 + 9);
      iVar6 = SeqGen_GetPatternEntry(iVar5);
      MenuWnd_DrawLabel(0xf,0x1b,0x50,uVar1,*(undefined1 *)(iVar6 + 10));
    }
  }
  iVar6 = *(int *)(param_1 + 0x1230);
LAB_002f4770:
  MenuWnd_DrawLabel(0xf,0x1c,8,iVar6 + -1,0x10c);
  MenuWnd_DrawTextId(0xf,0x1d,1,0x3a);
  MenuWnd_DrawLabel(0xf,0x1e,5,0,*(int *)(param_1 + 0xcc0) + 1);
  MenuWnd_DrawTextId(0xf,0x1f,1,0x3b);
  if ((iVar5 == 0) || (0x10c < iVar5)) {
    MenuWnd_DrawText(0xf,0x20,6);
  }
  else {
    iVar5 = SeqGen_GetPatternEntry(iVar5);
    MenuWnd_DrawLabel(0xf,0x20,5,0,*(undefined1 *)(iVar5 + 8));
  }
  uVar10 = ComposerInput_GetHeld();
  if ((uVar10 & 0x2000) == 0) {
    MenuWnd_DrawTextId(0xf,0x21,1,0x3c);
    iVar5 = UiMgr_FindLayout(0xf);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,7,8);
    uVar1 = *(undefined1 *)(param_1 + 0x1245);
  }
  else {
    MenuWnd_DrawTextId(0xf,0x21,0,0x3c);
    iVar5 = UiMgr_FindLayout(0xf);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4,7,8);
    uVar1 = *(undefined1 *)(param_1 + 0x1245);
  }
  MenuWnd_DrawLabel(0xf,0x22,5,1,uVar1);
  MenuWnd_DrawText(0x13,0xd,0x4e);
  iVar5 = 0;
  puVar15 = &DAT_00343060;
  do {
    iVar6 = 0;
    puVar14 = puVar15;
    do {
      if ((*(int *)(param_1 + 0xd7c) == 1) && (iVar5 == 6)) {
        iVar12 = (*(int *)(param_1 + 0x1240) + -1 + *(int *)(param_1 + 0x1234)) %
                 *(int *)(param_1 + 0x1234);
      }
      else {
        iVar12 = (*(int *)(param_1 + 0x1240) + iVar5) % *(int *)(param_1 + 0x1234);
      }
      iVar12 = iVar6 + iVar12 * 3;
      if (iVar12 < *(int *)(param_1 + 0x1230)) {
        iVar12 = param_1 + iVar12 * 4;
        puVar13 = (undefined4 *)(iVar12 + 0xdfc);
        MenuWnd_DrawLabel(0xb,puVar14[2],0xb,0,*(undefined4 *)(iVar12 + 0xdfc));
        iVar2 = UiMgr_FindLayout(0xb);
        iVar12 = *_g_UiMgr;
        iVar3 = SeqGen_GetPatternEntry(*puVar13);
        maybe_ComposerUi_SetGridCell
                  (iVar12 + iVar2 * 0x4f4 + 4,*puVar14,9,*(undefined1 *)(iVar3 + 0xb));
        uVar11 = Menuscr_FieldPtr_52(*puVar13);
        MenuWnd_DrawText(0xb,puVar14[3],uVar11);
      }
      else {
        iVar12 = UiMgr_FindLayout(0xb);
        UiElem_SetPropInt(*_g_UiMgr + iVar12 * 0x4f4 + 4,*puVar14,9,0);
        MenuWnd_DrawText(0xb,puVar14[2],6);
      }
      iVar6 = iVar6 + 1;
      puVar14 = puVar14 + 4;
    } while (iVar6 < 3);
    iVar5 = iVar5 + 1;
    puVar15 = puVar15 + 0xc;
  } while (iVar5 < 7);
  MenuWnd_DrawLabel(0xb,0x9c,0x35,5,0);
  MenuWnd_DrawLabel(0xb,0xa0,0x36,5,0);
  iVar5 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0xe);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0xf);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  MenuNum_CountUp_Event
            (0xb,3,4,200,*(undefined4 *)(param_1 + 0x1234),6,*(undefined4 *)(param_1 + 0x1240));
  iVar5 = UiMgr_FindLayout(0xb);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  return;
}

// 0x002f5230  size 0x27c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x342db0 */

void ScrDraw_Akagi_Update(int param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  Composer_ConsumeConfirm(param_1 + 0xc44);
  Composer_ClearDirty(param_1 + 0xc44);
  lVar2 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar2 != 0) {
    Composer_ConsumeRedraw(param_1 + 0xc44);
  }
  maybe_ComposerUi_ScrollView(param_1);
  iVar7 = 0;
  puVar5 = &DAT_00343350;
  puVar4 = &DAT_00343370;
  iVar6 = param_1;
  do {
    if (*(int *)(iVar6 + 0xd08) == 0) {
      iVar1 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar5,8);
    }
    else {
      iVar1 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0x3ecccccd,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar5,8);
    }
    if (*(int *)(iVar6 + 0xd28) == 0) {
      iVar1 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar4,8);
    }
    else {
      iVar1 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar4,8);
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 4;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar7 < 8);
  iVar6 = UiMgr_FindLayout(0xc);
  UiElem_SetPropInt(*_g_UiMgr + iVar6 * 0x4f4 + 4,0x69,9,*(undefined4 *)(param_1 + 0xcc0));
  maybe_ComposerUi_DrawPlayhead(param_1);
  maybe_ComposerUi_DrawNotes(param_1,0);
  maybe_ComposerUi_DrawCursor(param_1,0);
  maybe_ComposerUi_DrawGrid(param_1,1);
  iVar6 = UiMgr_FindLayout(0xc);
  uVar8 = (uint)(*(float *)(param_1 + 0xcb8) + 16.0);
  uVar3 = uVar8 & 0xf;
  if (((int)uVar8 < 0) && (uVar3 != 0)) {
    uVar3 = uVar3 - 0x10;
  }
  UiElem_SetPropInt(*_g_UiMgr + iVar6 * 0x4f4 + 4,0x55,9,uVar3);
  iVar6 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  return;
}

// 0x002f54b0  size 0x254
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x342db0 */

void ScrDraw_Akagi_Enter(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  lVar3 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar3 != 0) {
    iVar1 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x55,9,0);
  }
  Composer_ClearDirty(param_1 + 0xc44);
  lVar3 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar3 != 0) {
    Composer_ConsumeRedraw(param_1 + 0xc44);
  }
  maybe_ComposerUi_ScrollView(param_1);
  iVar6 = 0;
  puVar5 = &DAT_00343350;
  puVar4 = &DAT_00343370;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0xd08) == 0) {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar5,8);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0x3ecccccd,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar5,8);
    }
    if (*(int *)(iVar1 + 0xd28) == 0) {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar4,8);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar4,8);
    }
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + 4;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar6 < 8);
  iVar1 = UiMgr_FindLayout(0xc);
  UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x69,9,*(undefined4 *)(param_1 + 0xcc0));
  maybe_ComposerUi_DrawPlayhead(param_1);
  maybe_ComposerUi_DrawNotes(param_1,1);
  maybe_ComposerUi_DrawCursor(param_1,1);
  maybe_ComposerUi_DrawGrid(param_1,1);
  iVar1 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f5710  size 0x54
/* screen record 0x343404 */

void ScrNameentryGetField48200_Updatef5710(undefined8 param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x30) == 0) {
    iVar1 = Nameentry_GetField_4_8200((int)param_1 + 0xc44);
    (*(code *)(&PTR_ScrDraw_Akagi_Enter_00342db0)[iVar1])(param_1);
    ComposerTex_Draw(param_1);
  }
  return;
}

// 0x002f5770  size 0x40
/* screen record 0x343404 */

void ScrNameentryGetField48200_Exitf5770(undefined8 param_1)

{
  if (*(int *)((int)param_1 + 0xc40) != 0) {
    Mem_Free();
    *(undefined4 *)((int)param_1 + 0xc40) = 0;
  }
  ComposerTex_Free(param_1);
  return;
}

// 0x002f57b0  size 0x2f8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x343404 */

void ScrNameentryGetField48200_Enterf57b0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar4 = Nameentry_Nop_4();
  uVar5 = Nameentry_Nop_3();
  ComposerTex_Init(param_1,0x430750,1,uVar4,uVar5,0x50010);
  ComposerTex_Load(param_1,0x17fe,0);
  uVar4 = Profile_Get(0);
  uVar6 = Profile_GetFlags(uVar4);
  if ((uVar6 & 0x200000) == 0) {
    iVar1 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x44,8);
    iVar1 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x45,8);
  }
  else {
    iVar1 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x44,8);
    iVar1 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x45,8);
  }
  uVar2 = UiRes_GetLayoutData(0);
  iVar1 = UiMgr_FindLayout(0);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar1 + 800) = 0;
  *(undefined4 *)(iVar1 + 0x310) = 0;
  if (*(int *)(iVar1 + 800) == 0) {
    *(undefined4 *)(iVar1 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x310) = 0;
  if (*(int *)(iVar1 + 800) == 0) {
    *(undefined4 *)(iVar1 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x318) = 1;
  *(undefined4 *)(iVar1 + 800) = uVar2;
  *(undefined4 *)(iVar1 + 0x31c) = 1;
  iVar3 = UiMgr_FindLayout(8);
  iVar1 = *_g_UiMgr;
  uVar4 = UiRes_GetLayoutData(0x42);
  UiLayout_IsAnimDone(iVar1 + iVar3 * 0x4f4 + 4,5,0x8f,uVar4,1);
  iVar3 = UiMgr_FindLayout(8);
  iVar1 = *_g_UiMgr;
  uVar4 = UiRes_GetLayoutData(0x43);
  UiLayout_IsAnimDone(iVar1 + iVar3 * 0x4f4 + 4,6,0x90,uVar4,1);
  iVar1 = UiMgr_FindLayout(0xd);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x24,8);
  uVar8 = 0;
  puVar7 = &DAT_00342ef0;
  do {
    iVar1 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,puVar7[6],8);
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 7;
  } while (uVar8 < 0xd);
  uVar2 = Mem_Alloc16(0x1cb600,0x430750);
  *(undefined4 *)((int)param_1 + 0xc40) = uVar2;
  return;
}

// 0x002f5ab0  size 0x214
void maybe_ComposerTask_Update(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  pcVar1 = *(char **)(param_1 + 0x14);
  uVar3 = Script_Nop();
  lVar4 = SeqGen_FindPatternIndex(uVar3);
  if ((lVar4 != 0) && (lVar4 = UiMgr_FindFreeSlot(), lVar4 == 0)) {
    ComposerScene_FadeIn();
    if (*pcVar1 == '\0') {
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_ScrNameentryGetField48200_Enter_003433b0)[iVar2 * 3])(uVar3);
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_ScrNameentryGetField48200_Entere8410_003433e0)[iVar2 * 3])(uVar3);
      *pcVar1 = '\x01';
    }
    if (*pcVar1 == '\x01') {
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_ScrNameentryGetField48200_Update_003433b4)[iVar2 * 3])(uVar3);
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_ScrNameentryGetField48200_Updatee8380_003433e4)[iVar2 * 3])(uVar3);
      lVar4 = ComposerScene_IsChanging();
      if ((lVar4 != 0) && (lVar4 = ComposerScene_GetPage(), lVar4 == 3)) {
        ComposerScene_SetPage(0);
        *pcVar1 = '\x02';
      }
    }
    else if (*pcVar1 == '\x02') {
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_ScrNameentryGetField48200_Exite8400_003433e8)[iVar2 * 3])(uVar3);
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_ScrNameentryGetField48200_Exit_003433b8)[iVar2 * 3])(uVar3);
      ComposerScene_Exit();
      *pcVar1 = '\0';
    }
  }
  return;
}

// 0x002f5cd0  size 0x3c
void ComposerTask_Exit(void)

{
  ComposerInput_Free();
  ComposerScene_Free();
  SeqGen_Shutdown();
  MenuWnd_FreeSystem();
  UiRes_FreeFonts();
  return;
}

// 0x002f5d10  size 0x148
void ComposerTask_Init(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar1 = *(undefined1 **)(param_1 + 0x14);
  RaceCtx_SetMode(8);
  UiRes_LoadLocalizedAlloc(0x430750,0x187c,0x160);
  MenuWnd_AllocSystem(0x430750);
  Snd_StopAllVoices(0xfff);
  Snd_QueueCmd2d(8,0x100);
  Snd_QueueCmd2d(9,0x100);
  Snd_QueueCmd2d(1,0x100);
  lVar3 = Script_Nop();
  if (lVar3 == 0) {
    SeqGen_Init(0x430750,1,0xffff);
  }
  ComposerScene_Alloc(0x430750,0);
  ComposerInput_Alloc(0x430750,0);
  uVar4 = Profile_Get(0);
  iVar2 = maybe_Race_GetMode();
  iVar5 = 0;
  do {
    lVar3 = Profile_IsEventSeen(uVar4,iVar5);
    if (lVar3 != 0) {
      *(undefined4 *)(iVar2 + 0x9660) = 1;
    }
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar5 < 0xb9);
  *puVar1 = 0;
  *(code **)(param_1 + 0x1c) = maybe_ComposerTask_Update;
  return;
}

// 0x002f5e60  size 0x8
int Menuscr_FieldPtr_52(int param_1)

{
  return param_1 + 0x52;
}

// 0x002f5e70  size 0x320
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuNum_CountUp_Event
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
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,8);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetNumber(*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,2,0x10);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat((fVar4 - (float)(param_4 + 0x10)) / 16.0,*_g_UiMgr + iVar3 * 0x4f4 + 4,
                          param_3,6);
      fVar5 = (float)(param_4 + 0x10) - fVar2;
    }
    else {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,8);
    }
  }
  else {
    fVar2 = 16.0;
    fVar5 = (float)param_4;
  }
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar2,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_2,2);
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar5 / 16.0,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_2,6);
  return;
}

// 0x002f6190  size 0x260
/* 24 callers */

undefined4 Composer_MoveCursor(uint *param_1,long param_2,uint param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *param_1;
  iVar9 = 0;
  if (param_2 == 0) {
    uVar4 = ComposerInput_GetRepeat();
    if ((uVar4 & 0x400004) == 0) {
      uVar4 = ComposerInput_GetRepeat();
      if ((uVar4 & 0x800008) != 0) {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = -1;
    }
  }
  else if (param_2 == 1) {
    uVar4 = ComposerInput_GetRepeat();
    if ((uVar4 & 0x100010) == 0) {
      uVar4 = ComposerInput_GetRepeat();
      if ((uVar4 & 0x200020) != 0) {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = -1;
    }
  }
  iVar7 = param_3 + 1;
  uVar2 = 0;
  if (0 < iVar7) {
    do {
      if (param_4 == 0) {
        uVar6 = *param_1 + iVar9;
        if ((int)uVar6 < 0) {
          *param_1 = 0;
        }
        else {
          if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          *param_1 = uVar6;
        }
      }
      else {
        uVar5 = *param_1 + iVar9;
        uVar6 = param_3;
        if ((-1 < (int)uVar5) && (uVar6 = uVar5, (int)param_3 < (int)uVar5)) {
          uVar6 = 0;
        }
        *param_1 = uVar6;
      }
      if ((param_5 == 0) || ((param_5 & 1 << (*param_1 & 0x1f)) != 0)) break;
      if ((uVar2 == param_3) && ((param_4 == 0 && (iVar8 = 0, 0 < iVar7)))) {
        do {
          uVar6 = *param_1 - iVar9;
          if ((int)uVar6 < 0) {
            *param_1 = 0;
          }
          else {
            if ((int)param_3 < (int)uVar6) {
              uVar6 = param_3;
            }
            *param_1 = uVar6;
          }
          if ((param_5 == 0) || ((param_5 & 1 << (*param_1 & 0x1f)) != 0)) break;
          if (uVar2 == param_3) {
            *param_1 = uVar1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar7);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar7);
  }
  if (uVar1 == *param_1) {
    if (iVar9 != 0) {
      Se_PlayMenuVol(8,0x60);
    }
    uVar3 = 0;
  }
  else {
    Se_PlayMenuVol(7,0x60);
    uVar3 = 1;
  }
  return uVar3;
}

// 0x002f63f0  size 0x44
bool Composer_GetSelectedPart(char param_1)

{
  uint uVar1;
  
  if (param_1 < '\0') {
    uVar1 = *puRam0042d874;
  }
  else {
    uVar1 = (int)*puRam0042d874 >> ((int)param_1 & 0x1fU) & 1;
  }
  return uVar1 == 0;
}

// 0x002f6440  size 0xa0
bool Composer_GetPartEntry(char param_1)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = iRam0042d874 + 4;
  if ((long)param_1 < 0) {
    bVar2 = *(int *)(iRam0042d874 + 8) == 0;
  }
  else {
    iVar6 = 0;
    do {
      iVar5 = 0;
      do {
        bVar1 = *(byte *)(iVar4 + iVar5 + 8);
        if ((bVar1 & 0x80) == 0) {
          uVar3 = 0xffffffffffffffff;
        }
        else {
          uVar3 = (ulong)bVar1 & 0x70;
        }
        if (uVar3 != 0) {
          if ((bVar1 & 0x80) == 0) {
            uVar3 = 0xffffffffffffffff;
          }
          else {
            uVar3 = (ulong)bVar1 & 0xf;
          }
          if ((long)param_1 == uVar3) {
            return false;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x18);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar6 < 2);
    bVar2 = true;
  }
  return bVar2;
}

// 0x002f64e0  size 0x210
/* WARNING: Removing unreachable block (ram,0x002f6538) */
/* WARNING: Removing unreachable block (ram,0x002f6548) */

undefined4 Composer_PreviewLoop(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar3 = Script_Nop();
  if ((param_1[1] & 0x80) == 0) {
    param_1[1] = 0;
    param_1[2] = 0xffffffff;
    lVar4 = SeqGen_IsReady(uVar3);
    if (lVar4 == 0) {
      uVar1 = 1;
      param_1[1] = param_1[1] | 1;
      param_1[2] = 0xffffffff;
    }
    else {
      SeqGen_GetLoopRangeC(uVar3,&uStack_4,&uStack_8);
      SeqGen_GetLoopRangeB(uVar3,&uStack_c,&uStack_10);
      SeqGen_GetLoopRangeA(uVar3,&uStack_14,&uStack_18);
      cVar5 = (char)*param_1;
      if (cVar5 < '\0') {
        uVar2 = *puRam0042d874;
      }
      else {
        uVar2 = (int)*puRam0042d874 >> ((int)cVar5 & 0x1fU) & 1;
      }
      if ((((uVar2 == 0) && (lVar4 = Composer_GetPartEntry(cVar5), lVar4 != 0)) &&
          (cVar5 = Snd_IsBusy(*param_1), cVar5 == '\0')) &&
         (lVar4 = Snd_PlayStream(*param_1,uStack_4,uStack_8,uStack_c,uStack_10,uStack_14,uStack_18),
         lVar4 != 0)) {
        uVar1 = 1;
        param_1[1] = param_1[1] | 2;
        param_1[2] = 0;
      }
      else {
        uVar1 = 0;
        param_1[1] = param_1[1] & 0xfffffffd;
        param_1[2] = 0xffffffff;
      }
    }
  }
  else {
    if (((param_1[1] & 0x80) != 0) && (lVar4 = Snd_QueueCmd1(*param_1), lVar4 != 0)) {
      param_1[1] = param_1[1] & 0xffffff7f;
    }
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002f66f0  size 0x2a0
/* WARNING: Removing unreachable block (ram,0x002f679c) */
/* WARNING: Removing unreachable block (ram,0x002f67ac) */

undefined4 Composer_PreviewTrack(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  char cVar9;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar7 = Script_Nop();
  iVar1 = param_1[2];
  iVar3 = Script_GetElem_2f0_xda8(uVar7,param_2);
  if (iVar3 == iVar1) {
    bVar2 = true;
    if (((param_1[1] & 2) == 0) && ((param_1[1] & 1) == 0)) {
      bVar2 = false;
    }
    if (bVar2) {
      return 1;
    }
  }
  if ((param_1[1] & 0x80) == 0) {
    param_1[1] = 0;
    param_1[2] = 0xffffffff;
    lVar8 = Script_GetElem_2f0_xda8(uVar7,param_2);
    if (lVar8 < 1) {
      uVar6 = 1;
      param_1[1] = param_1[1] | 1;
      param_1[2] = 0xffffffff;
    }
    else {
      lVar8 = SeqGen_ComputeDuration(uVar7,param_2);
      if (lVar8 == 0) {
        uVar6 = 0;
      }
      else {
        SeqGen_GetTrackRangeC(uVar7,param_2,&uStack_4,&uStack_8);
        SeqGen_GetTrackRangeB(uVar7,param_2,&uStack_c,&uStack_10);
        SeqGen_GetTrackRangeA(uVar7,param_2,&uStack_14,&uStack_18);
        uVar4 = Script_GetElem_2f0_xda8(uVar7,param_2);
        cVar9 = (char)*param_1;
        if (cVar9 < '\0') {
          uVar5 = *puRam0042d874;
        }
        else {
          uVar5 = (int)*puRam0042d874 >> ((int)cVar9 & 0x1fU) & 1;
        }
        if ((((uVar5 == 0) && (lVar8 = Composer_GetPartEntry(cVar9), lVar8 != 0)) &&
            (cVar9 = Snd_IsBusy(*param_1), cVar9 == '\0')) &&
           (lVar8 = Snd_PlayStream(*param_1,uStack_4,uStack_8,uStack_c,uStack_10,uStack_14,uStack_18
                                  ), lVar8 != 0)) {
          uVar6 = 1;
          param_1[1] = param_1[1] | 2;
          param_1[2] = uVar4;
        }
        else {
          uVar6 = 0;
          param_1[1] = param_1[1] & 0xfffffffd;
          param_1[2] = 0xffffffff;
        }
      }
    }
  }
  else {
    if (((param_1[1] & 0x80) != 0) && (lVar8 = Snd_QueueCmd1(*param_1), lVar8 != 0)) {
      param_1[1] = param_1[1] & 0xffffff7f;
    }
    uVar6 = 0;
  }
  return uVar6;
}

// 0x002f6990  size 0x24c
/* WARNING: Removing unreachable block (ram,0x002f6a40) */
/* WARNING: Removing unreachable block (ram,0x002f6a50) */

undefined4 Composer_PreviewInstrument(undefined4 *param_1,long param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar6 = Script_Nop();
  if ((param_2 < 0) || (0x10c < param_2)) {
    uVar5 = 0;
  }
  else {
    uVar4 = param_1[2];
    uVar3 = SeqGen_GetPatternId(param_2);
    if ((uVar3 & 0xffff) == uVar4) {
      bVar1 = true;
      if (((param_1[1] & 2) == 0) && ((param_1[1] & 1) == 0)) {
        bVar1 = false;
      }
      if (bVar1) {
        return 1;
      }
    }
    if ((param_1[1] & 0x80) == 0) {
      param_1[1] = 0;
      param_1[2] = 0xffffffff;
      sVar2 = SeqGen_GetPatternId(param_2);
      if (sVar2 == 0) {
        uVar5 = 1;
        param_1[1] = param_1[1] | 1;
        param_1[2] = 0xffffffff;
      }
      else {
        SeqGen_GetInstrumentIds(uVar6,param_2,&uStack_4,&uStack_8,&uStack_c);
        uVar4 = SeqGen_GetPatternId(param_2);
        cVar8 = (char)*param_1;
        if (cVar8 < '\0') {
          uVar3 = *puRam0042d874;
        }
        else {
          uVar3 = (int)*puRam0042d874 >> ((int)cVar8 & 0x1fU) & 1;
        }
        if ((((uVar3 == 0) && (lVar7 = Composer_GetPartEntry(cVar8), lVar7 != 0)) &&
            (cVar8 = Snd_IsBusy(*param_1), cVar8 == '\0')) &&
           (lVar7 = Snd_PlayStreamEx(*param_1,uStack_4,uStack_8,uStack_c,0), lVar7 != 0)) {
          uVar5 = 1;
          param_1[1] = param_1[1] | 2;
          param_1[2] = uVar4 & 0xffff;
        }
        else {
          uVar5 = 0;
          param_1[1] = param_1[1] & 0xfffffffd;
          param_1[2] = 0xffffffff;
        }
      }
    }
    else {
      if (((param_1[1] & 0x80) != 0) && (lVar7 = Snd_QueueCmd1(*param_1), lVar7 != 0)) {
        param_1[1] = param_1[1] & 0xffffff7f;
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}

// 0x002f6be0  size 0x4c
undefined4 Composer_GetModeSongs(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)maybe_Race_GetMode();
  iVar2 = 0;
  do {
    if (param_1 == *piVar1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0xc);
  return 0;
}

// 0x002f6c30  size 0xc
void Composer_RequestRedraw(void)

{
  uRam0036eefc = 2;
  return;
}

// 0x002f6c40  size 0x138
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Nameentry_Draw_Rokko(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (iRam0036eefc == 2) {
    lVar2 = UiLayout_UpdateAnimById(uRam0036eef4,1);
    if (lVar2 == 0) {
      iRam0036eefc = 3;
    }
  }
  else if ((iRam0036eefc == 0) && (lVar2 = UiLayout_UpdateAnimById(uRam0036eef4,0), lVar2 == 0)) {
    iRam0036eefc = 1;
  }
  MenuWnd_DrawText(uRam0036eef4,uRam0036eef8,param_1);
  if (iRam0036f940 == 1) {
    MenuWnd_DrawText(4,0x1b,9);
    MenuWnd_DrawText(4,0x1d,10);
    if (iRam0036eefc == 1) {
      MenuWnd_SetItemState(4,*(undefined4 *)(param_2 * 4 + 0x36ef00),1,0);
    }
    else {
      MenuWnd_SetItemVisible(0);
    }
  }
  UiLayout_UpdateAnimById(uRam0036eef4,2);
  iVar1 = UiMgr_FindLayout(uRam0036eef4);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return iRam0036eefc;
}

// 0x002f6d80  size 0x34c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Composer_ShowPanel(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uRam0036f940 = param_1 & 0xff;
  if (uRam0036f940 == 0) {
    uVar1 = UiRes_GetLayoutData(0x27);
    iVar2 = UiMgr_FindLayout(3);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x28);
    iVar2 = UiMgr_FindLayout(3);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar1;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar1 = UiRes_GetLayoutData(0x29);
    iVar2 = UiMgr_FindLayout(3);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 1;
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uRam0036eef4 = 3;
    uRam0036eef8 = 0xf;
  }
  else {
    uVar1 = UiRes_GetLayoutData(0x34);
    iVar2 = UiMgr_FindLayout(4);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x35);
    iVar2 = UiMgr_FindLayout(4);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar1;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar1 = UiRes_GetLayoutData(0x36);
    iVar2 = UiMgr_FindLayout(4);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 1;
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
    uRam0036eef4 = 4;
    uRam0036eef8 = 0x1c;
  }
  uRam0036eefc = 0;
  return;
}

// 0x002f70d0  size 0x30
/* 13-column character grid */

char Keyboard_GetChar(int *param_1)

{
  return s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500[*param_1 + param_1[1] * 0xd];
}

// 0x002f7100  size 0x68
undefined8 Keyboard_IsCharAllowed(int *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500[*param_1 + param_1[1] * 0xd];
  bVar2 = false;
  if ((cVar1 != '<') && (cVar1 != '>')) {
    bVar2 = true;
  }
  if ((bVar2) && (cVar1 != '\0')) {
    uVar3 = 1;
  }
  return uVar3;
}

// 0x002f7170  size 0x20
int Keyboard_GetIndex(int *param_1)

{
  return *param_1 + param_1[1] * 0xd;
}

// 0x002f7190  size 0x2a0
/* "ABCDEF...0123456789-_" */

undefined4 Keyboard_Update(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  piVar5 = (int *)param_1;
  uVar9 = 0;
  uVar7 = 0;
  pcVar6 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500 + *piVar5;
  do {
    if (*pcVar6 != '\0') {
      uVar9 = uVar9 | 1 << (uVar7 & 0x1f);
    }
    uVar7 = uVar7 + 1;
    pcVar6 = pcVar6 + 0xd;
  } while ((int)uVar7 < 6);
  uVar7 = 0;
  pcVar6 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500 + piVar5[1] * 0xd;
  do {
    if (*pcVar6 != '\0') {
      uVar8 = uVar8 | 1 << (uVar7 & 0x1f);
    }
    uVar7 = uVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while ((int)uVar7 < 0xd);
  Composer_MoveCursor(param_1,1,0xc,1,uVar8);
  Composer_MoveCursor(piVar5 + 1,0,5,1,uVar9);
  lVar4 = ComposerInput_GetPressed();
  if ((lVar4 == 0x100) || (lVar4 == 0x80)) {
    cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500[*piVar5 + piVar5[1] * 0xd];
    if (cVar1 == '>') {
      cVar1 = (char)piVar5[3];
      bVar2 = true;
      iVar3 = 0;
      do {
        if (cVar1 == '\0') {
LAB_002f7388:
          if (bVar2) {
            maybe_strncpy(piVar5 + 3,uRam0036eef0,0x10);
            iVar3 = strlen(piVar5 + 3);
            piVar5[2] = iVar3;
          }
          return 1;
        }
        if (*(char *)((int)piVar5 + iVar3 + 0xc) != ' ') {
          bVar2 = false;
          goto LAB_002f7388;
        }
        cVar1 = *(char *)((int)piVar5 + iVar3 + 0xd);
        iVar3 = iVar3 + 1;
      } while( true );
    }
    if (cVar1 == '<') {
      iVar3 = piVar5[2];
      if (0 < iVar3) {
        piVar5[2] = iVar3 + -1;
        *(undefined1 *)((int)piVar5 + iVar3 + 0xb) = 0;
      }
    }
    else {
      if (0xd < piVar5[2]) {
        *(char *)((int)piVar5 + 0x1a) = cVar1;
        *(undefined1 *)((int)piVar5 + 0x1b) = 0;
        iVar3 = strlen(piVar5 + 3);
        piVar5[2] = iVar3;
        *piVar5 = 1;
        piVar5[1] = 5;
        return 1;
      }
      iVar3 = piVar5[2];
      piVar5[2] = iVar3 + 1;
      *(char *)((int)piVar5 + iVar3 + 0xc) = cVar1;
      *(undefined1 *)((int)piVar5 + piVar5[2] + 0xc) = 0;
    }
  }
  else if ((lVar4 == 0x200) || (lVar4 == 0x40)) {
    iVar3 = piVar5[2];
    if (iVar3 == 0) {
      return 2;
    }
    piVar5[2] = iVar3 + -1;
    *(undefined1 *)((int)piVar5 + iVar3 + 0xb) = 0;
  }
  else if (lVar4 == 2) {
    *piVar5 = 1;
    piVar5[1] = 5;
    Se_PlayMenuVol(5,0x60);
  }
  return 0;
}

// 0x002f7430  size 0x50
void Keyboard_Init(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  maybe_strncpy(param_1 + 3,param_2,0xf);
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  uVar1 = strlen(param_1 + 3);
  param_1[2] = uVar1;
  *(undefined1 *)((int)param_1 + param_1[2] + 0xc) = 0;
  return;
}

// 0x002f7480  size 0x19c
void Composer_OnTextureLoaded(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_1 == param_4[0xe]) {
    Tex_Relocate(param_4[1]);
    uVar1 = *(ushort *)(param_4[1] + 6);
    iVar2 = Tex_UploadAll(param_4[1],0x412,0,0,0);
    if ((param_4[0xd] != 0) && (uVar6 = 0, uVar1 != 0)) {
      do {
        iVar3 = Tex_GetEntry(param_4[1],uVar6);
        *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xc000;
        if (*(int *)(iVar3 + 4) != 0) {
          uVar5 = Tex_GetPageCount(((ulong)*(ushort *)(iVar3 + 0x1a) & 0x3ff) >> 4,
                                   *(undefined2 *)(iVar3 + 0x14),*(undefined2 *)(iVar3 + 0x16));
          *(ulong *)(iVar3 + 0x18) =
               *(ulong *)(iVar3 + 0x18) & 0xfff8001fffffffff | (uVar5 & 0x3fff) << 0x25;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    if (param_4[2] != 0) {
      DmaBuf_Alloc(param_4 + 4,*param_4,iVar2 + 1);
      Pkt_AddTextureUploadAll(param_4 + 4,param_4[1],param_4[8],param_4[9]);
    }
    uVar4 = Mem_Alloc16((uint)uVar1 << 7,*param_4);
    param_4[3] = uVar4;
    TexSlot_Bind(param_4[3],param_4[1],param_4[2],param_4[8],param_4[9],param_4[10],0,0);
    param_4[0xc] = 0;
  }
  return;
}

// 0x002f7620  size 0x30
void ComposerTex_Clear(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0;
  return;
}

// 0x002f7650  size 0x2fc
void ComposerTex_Draw(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint auStack_c440 [12544];
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_1 + 4) != 0) {
    TexSlot_Set(0,*(undefined2 *)(*(int *)(param_1 + 4) + 6),*(undefined4 *)(param_1 + 0xc));
    iVar6 = 0;
    iVar2 = param_1;
    do {
      if (0 < *(int *)(iVar2 + 0x93c)) {
        iVar4 = 0;
        puVar5 = auStack_c440;
        Pkt_Init(auStack_40,2,2,0);
        Pkt_SubmitToChain(auStack_40,iVar6);
        if (*(int *)(param_1 + 8) != 0) {
          Pkt_Flush(auStack_40,param_1 + 0x10);
        }
        iVar3 = 0;
        iVar1 = param_1;
        do {
          if (iVar6 == *(int *)(iVar1 + 0x3c)) {
            Obj_Reset(puVar5,4,0xffffffffffffffff);
            Obj_SetVisible(puVar5,1,0,*(undefined4 *)(iVar1 + 0x48));
            puVar5[0xa7] = *(uint *)(iVar1 + 0x4c);
            *puVar5 = *puVar5 | 2;
            fVar7 = *(float *)(iVar1 + 0x50) * 128.0;
            if (2.1474836e+09 <= fVar7) {
              fVar7 = fVar7 - 2.1474836e+09;
            }
            puVar5[0xb3] = (int)fVar7 & 0xff;
            puVar5[0xb4] = 0;
            puVar5[0xb5] = 0;
            uVar8 = *(uint *)(iVar1 + 0x44);
            puVar5[0xbc] = *(uint *)(iVar1 + 0x40);
            puVar5[0xbd] = uVar8;
            uVar8 = *(uint *)(iVar1 + 0x58);
            uVar9 = *(uint *)(iVar1 + 0x54);
            *puVar5 = *puVar5 | 4;
            puVar5[0xb8] = uVar9;
            puVar5[0xb9] = uVar8;
            if (*(int *)(iVar1 + 0x5c) == 0) {
              *puVar5 = *puVar5 & 0xfffffdff;
            }
            else {
              *puVar5 = *puVar5 | 0x200;
            }
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 0xc4;
            if (*(int *)(iVar2 + 0x93c) <= iVar4) break;
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0x24;
        } while (iVar3 < 0x40);
        if (*(int *)(iVar2 + 0x950) != 0) {
          Pkt_SetScissor(auStack_40,*(undefined4 *)(iVar2 + 0x940),*(undefined4 *)(iVar2 + 0x944),
                         *(undefined4 *)(iVar2 + 0x948),*(undefined4 *)(iVar2 + 0x94c),0);
        }
        Pkt_AddPrimitives(auStack_40,auStack_c440,((int)puVar5 - (int)auStack_c440) / 0x310);
        if (*(int *)(iVar2 + 0x950) != 0) {
          Pkt_SetScissor(auStack_40,0,0,0,0,0);
        }
        Pkt_Submit(auStack_40,0);
        *(undefined4 *)(iVar2 + 0x93c) = 0;
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar6 < 0x20);
    *(undefined4 *)(param_1 + 0xc3c) = 0;
  }
  return;
}

// 0x002f7960  size 0xbc
void ComposerTex_Animate(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((float)param_2[5] != 0.0) {
    iVar1 = param_1 + *(int *)(param_1 + 0xc3c) * 0x24;
    *(undefined4 *)(iVar1 + 0x3c) = *param_2;
    *(undefined4 *)(iVar1 + 0x40) = param_2[1];
    *(undefined4 *)(iVar1 + 0x44) = param_2[2];
    *(undefined4 *)(iVar1 + 0x48) = param_2[3];
    *(undefined4 *)(iVar1 + 0x4c) = param_2[4];
    *(undefined4 *)(iVar1 + 0x50) = param_2[5];
    *(undefined4 *)(iVar1 + 0x54) = param_2[6];
    *(undefined4 *)(iVar1 + 0x58) = param_2[7];
    *(undefined4 *)(iVar1 + 0x5c) = param_2[8];
    iVar1 = *(int *)(*(int *)(param_1 + 0xc3c) * 0x24 + param_1 + 0x3c) * 0x18 + param_1;
    *(int *)(iVar1 + 0x93c) = *(int *)(iVar1 + 0x93c) + 1;
    *(int *)(param_1 + 0xc3c) = *(int *)(param_1 + 0xc3c) + 1;
  }
  return;
}

// 0x002f7a20  size 0x38
void ComposerTex_SetRect(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6
                        )

{
  param_1 = param_2 * 0x18 + param_1;
  *(int *)(param_1 + 0x940) = (int)param_3;
  *(int *)(param_1 + 0x944) = (int)param_4;
  *(int *)(param_1 + 0x948) = (int)param_5;
  *(int *)(param_1 + 0x94c) = (int)param_6;
  *(uint *)(param_1 + 0x950) =
       (uint)(param_6 != 0 || (param_5 != 0 || (param_3 != 0 || param_4 != 0)));
  return;
}

// 0x002f7a60  size 0xec
void ComposerTex_Init(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0xf] = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0x3f800000;
    puVar1[0x15] = 0x3f800000;
    puVar1[0x16] = 0x3f800000;
    puVar1[0x17] = 0;
    puVar1 = puVar1 + 9;
  } while (iVar2 < 0x40);
  Mem_Set16(param_1 + 0x24f,0,0x300);
  param_1[0x30f] = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  DmaBuf_SetUncached(param_1 + 4,0,0);
  return;
}

// 0x002f7b50  size 0x5c
void ComposerTex_Free(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    Mem_Free();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    Mem_Free();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  DmaBuf_Free(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

// 0x002f7bb0  size 0xb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerTex_Load(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = (int)param_2 * 0x14 + _g_ArcToc;
  iVar1 = *(int *)(iVar4 + 0x20);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(iVar4 + 0x18);
  }
  else {
    uVar2 = iVar1 + 0x7ffU >> 0xb;
  }
  puVar5 = (undefined4 *)param_1;
  uVar3 = Mem_AllocAligned(uVar2 << 0xb,0x40,*puVar5);
  puVar5[1] = uVar3;
  uVar3 = Arc_LoadFileEx(param_2,puVar5[1],0x2f7480,param_1,0,0);
  puVar5[0xe] = uVar3;
  puVar5[0xd] = param_3;
  puVar5[0xc] = 1;
  return;
}

// 0x002f7c60  size 0x8
undefined4 Nameentry_GetField_4(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0x002f7c70  size 0x8
undefined4 Nameentry_GetField_8(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0x002f7c80  size 0x8
undefined4 Nameentry_Nop(undefined4 *param_1)

{
  return *param_1;
}

// 0x002f7c90  size 0x58
undefined4 PreviewSnd_Update(undefined4 *param_1)

{
  char cVar1;
  
  if ((param_1[1] & 2) == 0) {
    if ((param_1[1] & 1) != 0) {
      return 1;
    }
  }
  else {
    cVar1 = Snd_IsBusy(*param_1);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

// 0x002f7cf0  size 0x28
undefined8 PreviewSnd_IsIdle(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((*(uint *)(param_1 + 4) & 2) == 0) && ((*(uint *)(param_1 + 4) & 1) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002f7d20  size 0x60
void PreviewSnd_Stop(undefined4 *param_1)

{
  long lVar1;
  
  if (((param_1[1] & 0x80) != 0) && (lVar1 = Snd_QueueCmd1(*param_1), lVar1 != 0)) {
    param_1[1] = param_1[1] & 0xffffff7f;
  }
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 0x002f7d80  size 0x1f8
undefined4 PreviewSnd_Play(undefined4 *param_1,undefined8 param_2,short param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((param_1[1] & 1) != 0) goto LAB_002f7ea4;
  if ((param_1[1] & 2) == 0) {
    if ((param_1[1] & 1) == 0) goto LAB_002f7dd8;
    bVar1 = true;
  }
  else {
    cVar2 = Snd_IsBusy(*param_1);
    if (cVar2 == '\0') {
      bVar1 = true;
    }
    else {
LAB_002f7dd8:
      bVar1 = false;
    }
  }
  if (((((!bVar1) || ((param_1[1] & 0x80) != 0)) ||
       (lVar4 = Snd_QueueCmd3(*param_1,0,0), lVar4 == 0)) ||
      ((lVar4 = Snd_QueueCmd2b(*param_1,param_2), lVar4 == 0 || ((param_1[1] & 0x80) != 0)))) ||
     ((param_1[1] & 1) != 0)) goto LAB_002f7ea4;
  if ((param_1[1] & 2) == 0) {
    if ((param_1[1] & 1) == 0) goto LAB_002f7e68;
    bVar1 = true;
  }
  else {
    cVar2 = Snd_IsBusy(*param_1);
    if (cVar2 == '\0') {
      bVar1 = true;
    }
    else {
LAB_002f7e68:
      bVar1 = false;
    }
  }
  if (bVar1) {
    lVar4 = Snd_QueueCmd2(*param_1,0);
    if (lVar4 == 0) {
      param_1[1] = param_1[1] & 0xffffff7f;
    }
    else {
      param_1[1] = param_1[1] | 0x80;
    }
  }
LAB_002f7ea4:
  if ((param_1[1] & 0x80) == 0) {
    uVar3 = 0;
  }
  else {
    if ((0x13 < param_3) && (param_3 < 0x100)) {
      Snd_QueueCmd2c(*param_1);
    }
    if ((-1 < param_4) && (param_4 <= '\x7f')) {
      Snd_QueueCmd3c(*param_1,0,param_4);
      Snd_QueueCmd3c(*param_1,1,param_4);
    }
    uVar3 = 1;
  }
  return uVar3;
}

// 0x002f7f80  size 0x58
/* 13 callers */

undefined4 PreviewSnd_StopIfPlaying(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (((param_1[1] & 0x80) == 0) || (lVar2 = Snd_QueueCmd1(*param_1), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    param_1[1] = param_1[1] & 0xffffff7f;
  }
  return uVar1;
}

// 0x002f7fe0  size 0x8
bool PreviewSnd_QueueStop(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uStack_10;
  
  uVar1 = *param_1;
  bVar2 = iRam0042dafc < 0x30;
  if (bVar2) {
    iVar3 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar3 + 0x42db00) = 0x208;
    *(undefined4 *)(iVar3 + 0x42db04) = uVar1;
    *(undefined4 *)(iVar3 + 0x42db08) = param_2;
    *(undefined4 *)(iVar3 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar3 + 0x42db10) = uStack_10;
  }
  return bVar2;
}

// 0x002f7ff0  size 0x8
bool PreviewSnd_QueuePause(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uStack_10;
  
  uVar1 = *param_1;
  bVar2 = iRam0042dafc < 0x30;
  if (bVar2) {
    iVar3 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar3 + 0x42db00) = 0x209;
    *(undefined4 *)(iVar3 + 0x42db04) = uVar1;
    *(undefined4 *)(iVar3 + 0x42db08) = param_2;
    *(undefined4 *)(iVar3 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar3 + 0x42db10) = uStack_10;
  }
  return bVar2;
}

