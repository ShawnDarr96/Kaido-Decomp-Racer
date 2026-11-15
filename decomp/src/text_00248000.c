// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00248000 - 0x0024c000
#include "ghidra_types.h"

// 0x00248970  size 0x9bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_GoBattle_8970(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 auStack_300 [96];
  undefined4 auStack_180 [11];
  byte bStack_154;
  
  UiMgr_FindLayout(0x84);
  UiMgr_FindLayout(0x85);
  iVar5 = UiMgr_FindLayout(7);
  iVar14 = *_g_UiMgr;
  UiMgr_FindLayout(0x86);
  UiMgr_FindLayout(0x7b);
  iVar6 = UiMgr_FindLayout(0x7a);
  iVar13 = (int)param_1;
  iVar7 = *(int *)(iVar13 + 0x65c);
  iVar2 = *_g_UiMgr;
  *(undefined4 *)(iVar13 + 0x65c) = 0;
  if (iVar7 != 0) {
    uVar8 = UiRes_GetLayoutData(0x6c);
    iVar7 = UiMgr_FindLayout(0x7a);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar7 + 800) = 0;
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x318) = 0;
    *(undefined4 *)(iVar7 + 800) = uVar8;
    *(undefined4 *)(iVar7 + 0x31c) = 1;
    uVar8 = UiRes_GetLayoutData(0x6d);
    iVar7 = UiMgr_FindLayout(0x7a);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x334) = 0;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x32c) = 0;
    *(undefined4 *)(iVar7 + 0x334) = uVar8;
    *(undefined4 *)(iVar7 + 0x330) = 1;
    Menu_ClearSlot(0);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar9 = UiLayout_UpdateAnimById(0x7a,0);
  if (lVar9 == 0) {
    *(undefined4 *)(iVar13 + 0x658) = 0;
  }
  if ((*(int *)(iVar13 + 0x660) != 0) && (lVar9 = UiLayout_UpdateAnimById(0x7a), lVar9 == 0)) {
    if ((*(int *)(iVar13 + 0x650) == 0x10) || (*(int *)(iVar13 + 0x650) == 0x12)) {
      UiElem_SetPropFloat(0,iVar14 + iVar5 * 0x4f4 + 4,0x25,8);
    }
    Menu_BlockInput(_g_MenuMgr + 0x654);
    *(undefined4 *)(iVar13 + 0x660) = 0;
  }
  if (((*(int *)(_g_MenuMgr + 0x24) == 0xf) && (*(int *)(iVar13 + 0x680) == 1)) &&
     (*(int *)(_g_MenuMgr + 0x20) != 0xf)) {
    if (*(int *)(iVar13 + 0xe4) != -1) {
      iVar14 = 0;
      puVar12 = &DAT_0032c890;
      do {
        iVar7 = UiMgr_FindLayout(0x87);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,*puVar12,8);
        iVar14 = iVar14 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar14 < 6);
    }
    iVar14 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar14 * 0x4f4 + 4,uRam0036eba0,8);
    iVar14 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar14 * 0x4f4 + 4,uRam0036eba4,8);
    iVar14 = UiMgr_FindLayout(0x84);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar14 * 0x4f4 + 4,0xe,8);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
    uVar8 = *(undefined4 *)(iVar13 + 0x6a8);
    if (*(uint *)(_g_MenuMgr + 0x34) < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(*(uint *)(_g_MenuMgr + 0x34)) {
      case 1:
        *(undefined4 *)(_g_MenuMgr + 0x598) = uVar8;
        break;
      case 2:
        *(undefined4 *)(_g_MenuMgr + 0x5dc) = uVar8;
        break;
      case 3:
        *(undefined4 *)(_g_MenuMgr + 0x5fc) = uVar8;
        break;
      case 4:
        *(undefined4 *)(_g_MenuMgr + 0x618) = uVar8;
      }
    }
    Menu_ShowDialog(_g_MenuMgr + 0x654,0x124,0);
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    *(undefined4 *)(iVar13 + 0x680) = 0;
    uVar8 = UiRes_GetLayoutData(0x8e);
    iVar14 = UiMgr_FindLayout(0x87);
    iVar14 = *_g_UiMgr + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar14 + 800) = 0;
    *(undefined4 *)(iVar14 + 0x310) = 0;
    if (*(int *)(iVar14 + 800) == 0) {
      *(undefined4 *)(iVar14 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x310) = 0;
    if (*(int *)(iVar14 + 800) == 0) {
      *(undefined4 *)(iVar14 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x318) = 1;
    *(undefined4 *)(iVar14 + 800) = uVar8;
    *(undefined4 *)(iVar14 + 0x31c) = 1;
    uVar8 = UiRes_GetLayoutData(0x26b);
    iVar14 = UiMgr_FindLayout(0x87);
    iVar14 = *_g_UiMgr + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x334) = 0;
    *(undefined4 *)(iVar14 + 0x324) = 0;
    if (*(int *)(iVar14 + 0x334) == 0) {
      *(undefined4 *)(iVar14 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x330) = 1;
    }
    *(undefined4 *)(iVar14 + 0x324) = 0;
    if (*(int *)(iVar14 + 0x334) == 0) {
      *(undefined4 *)(iVar14 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x330) = 1;
    }
    *(undefined4 *)(iVar14 + 0x32c) = 1;
    *(undefined4 *)(iVar14 + 0x334) = uVar8;
    *(undefined4 *)(iVar14 + 0x330) = 1;
    uVar8 = UiRes_GetLayoutData(0x26c);
    iVar14 = UiMgr_FindLayout(0x87);
    iVar14 = *_g_UiMgr + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x348) = 0;
    *(undefined4 *)(iVar14 + 0x338) = 0;
    if (*(int *)(iVar14 + 0x348) == 0) {
      *(undefined4 *)(iVar14 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x344) = 1;
    }
    *(undefined4 *)(iVar14 + 0x338) = 0;
    if (*(int *)(iVar14 + 0x348) == 0) {
      *(undefined4 *)(iVar14 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x344) = 1;
    }
    *(undefined4 *)(iVar14 + 0x340) = 1;
    *(undefined4 *)(iVar14 + 0x348) = uVar8;
    *(undefined4 *)(iVar14 + 0x344) = 1;
    uVar8 = UiRes_GetLayoutData(0x26d);
    iVar14 = UiMgr_FindLayout(0x87);
    iVar14 = *_g_UiMgr + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x35c) = 0;
    *(undefined4 *)(iVar14 + 0x34c) = 0;
    if (*(int *)(iVar14 + 0x35c) == 0) {
      *(undefined4 *)(iVar14 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x358) = 1;
    }
    *(undefined4 *)(iVar14 + 0x34c) = 0;
    if (*(int *)(iVar14 + 0x35c) == 0) {
      *(undefined4 *)(iVar14 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x358) = 1;
    }
    *(undefined4 *)(iVar14 + 0x354) = 1;
    *(undefined4 *)(iVar14 + 0x35c) = uVar8;
    *(undefined4 *)(iVar14 + 0x358) = 1;
    uVar8 = UiRes_GetLayoutData(0x26e);
    iVar14 = UiMgr_FindLayout(0x87);
    iVar14 = *_g_UiMgr + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x370) = 0;
    *(undefined4 *)(iVar14 + 0x360) = 0;
    if (*(int *)(iVar14 + 0x370) == 0) {
      *(undefined4 *)(iVar14 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x360) = 0;
    if (*(int *)(iVar14 + 0x370) == 0) {
      *(undefined4 *)(iVar14 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x368) = 1;
    *(undefined4 *)(iVar14 + 0x370) = uVar8;
    *(undefined4 *)(iVar14 + 0x36c) = 1;
    uVar8 = UiRes_GetLayoutData(0x26f);
    iVar14 = UiMgr_FindLayout(0x87);
    iVar14 = *_g_UiMgr + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar14 + 900) = 0;
    *(undefined4 *)(iVar14 + 0x374) = 0;
    if (*(int *)(iVar14 + 900) == 0) {
      *(undefined4 *)(iVar14 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x380) = 1;
    }
    *(undefined4 *)(iVar14 + 0x374) = 0;
    if (*(int *)(iVar14 + 900) == 0) {
      *(undefined4 *)(iVar14 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x380) = 1;
    }
    *(undefined4 *)(iVar14 + 0x37c) = 1;
    *(undefined4 *)(iVar14 + 900) = uVar8;
    *(undefined4 *)(iVar14 + 0x380) = 1;
    uVar8 = UiRes_GetLayoutData(0x8c);
    iVar14 = UiMgr_FindLayout(0x84);
    iVar14 = *_g_UiMgr + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar14 + 800) = 0;
    *(undefined4 *)(iVar14 + 0x310) = 0;
    if (*(int *)(iVar14 + 800) == 0) {
      *(undefined4 *)(iVar14 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x310) = 0;
    if (*(int *)(iVar14 + 800) == 0) {
      *(undefined4 *)(iVar14 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar14 + 0x318) = 0;
    *(undefined4 *)(iVar14 + 800) = uVar8;
    *(undefined4 *)(iVar14 + 0x31c) = 1;
    uVar8 = UiRes_GetLayoutData(0x8d);
    iVar14 = UiMgr_FindLayout(0x84);
    iVar14 = *_g_UiMgr + iVar14 * 0x4f4;
    *(undefined4 *)(iVar14 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x334) = 0;
    *(undefined4 *)(iVar14 + 0x324) = 0;
    if (*(int *)(iVar14 + 0x334) == 0) {
      *(undefined4 *)(iVar14 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x330) = 1;
    }
    *(undefined4 *)(iVar14 + 0x324) = 0;
    if (*(int *)(iVar14 + 0x334) == 0) {
      *(undefined4 *)(iVar14 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x330) = 1;
    }
    *(undefined4 *)(iVar14 + 0x32c) = 0;
    *(undefined4 *)(iVar14 + 0x334) = uVar8;
    *(undefined4 *)(iVar14 + 0x330) = 1;
  }
  MenuWnd_DrawText(0x7a,0x1a,0x362);
  MenuWnd_DrawText(0x7a,0x19,0x363);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(iVar13 + 0x62c) * 4 + 0x36eb98));
  iVar14 = RivalDb_Get(*(undefined2 *)(iVar13 + 0x24));
  uVar10 = RaceCtx_Get_10();
  cVar4 = Race_IsTimeTrialMode(uVar10,0);
  if (cVar4 == '\0') {
    if (*(short *)(iVar14 + 0x3a) < *(short *)(iVar14 + 0x38)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else if (*(short *)(iVar14 + 0x3a) < *(short *)(iVar14 + 0x38)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    MenuWnd_DrawText(0x7a,0x1b,0x4a);
    uVar1 = *(undefined2 *)(iVar13 + 0x24);
  }
  else {
    MenuWnd_DrawText(0x7a,0x1b,0x49);
    uVar1 = *(undefined2 *)(iVar13 + 0x24);
  }
  RivalDb_Copy(auStack_300,uVar1);
  puVar11 = auStack_300;
  puVar12 = auStack_180;
  iVar14 = 0x5f;
  do {
    iVar14 = iVar14 + -1;
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar14);
  UiElem_SetPropInt(iVar2 + iVar6 * 0x4f4 + 4,0x18,0x16,
                    *(undefined4 *)(&DAT_0032c870 + (uint)bStack_154 * 4));
  ScrCareer_Draw_MasterLord(param_1);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x7a,*(undefined4 *)(*(int *)(iVar13 + 0x62c) * 4 + 0x36eba0),1,0);
  }
  iVar14 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar14 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  return;
}

// 0x00249330  size 0x9d4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_GoBattle_9330(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 auStack_300 [96];
  undefined4 auStack_180 [11];
  byte bStack_154;
  
  UiMgr_FindLayout(0x84);
  UiMgr_FindLayout(0x85);
  iVar5 = UiMgr_FindLayout(7);
  iVar13 = *_g_UiMgr + iVar5 * 0x4f4 + 4;
  UiMgr_FindLayout(0x86);
  UiMgr_FindLayout(0x7b);
  iVar6 = UiMgr_FindLayout(0x7a);
  iVar14 = (int)param_1;
  iVar5 = *(int *)(iVar14 + 0x65c);
  iVar2 = *_g_UiMgr;
  *(undefined4 *)(iVar14 + 0x65c) = 0;
  if (iVar5 != 0) {
    uVar8 = UiRes_GetLayoutData(0x6c);
    iVar5 = UiMgr_FindLayout(0x7a);
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
    *(undefined4 *)(iVar5 + 800) = uVar8;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar8 = UiRes_GetLayoutData(0x6d);
    iVar5 = UiMgr_FindLayout(0x7a);
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
    *(undefined4 *)(iVar5 + 0x334) = uVar8;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    Menu_ClearSlot(0);
    if (*(int *)(iVar14 + 0x648) == 0xe) {
      UiElem_SetPropFloat(0x3f800000,iVar13,0x25,8);
    }
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar9 = UiLayout_UpdateAnimById(0x7a,0);
  if (lVar9 == 0) {
    *(undefined4 *)(iVar14 + 0x658) = 0;
  }
  if (((*(int *)(_g_MenuMgr + 0x24) == 0xf) && (*(int *)(iVar14 + 0x680) == 1)) &&
     (*(int *)(_g_MenuMgr + 0x20) != 0xf)) {
    if (*(int *)(iVar14 + 0xe4) != -1) {
      iVar5 = 0;
      puVar12 = &DAT_0032c850;
      do {
        iVar7 = UiMgr_FindLayout(0x87);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,*puVar12,8);
        iVar5 = iVar5 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar5 < 6);
    }
    iVar5 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,uRam0036eb90,8);
    iVar5 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,uRam0036eb94,8);
    iVar5 = UiMgr_FindLayout(0x84);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0xe,8);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
    uVar8 = *(undefined4 *)(iVar14 + 0x6a8);
    if (*(uint *)(_g_MenuMgr + 0x34) < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(*(uint *)(_g_MenuMgr + 0x34)) {
      case 1:
        *(undefined4 *)(_g_MenuMgr + 0x598) = uVar8;
        break;
      case 2:
        *(undefined4 *)(_g_MenuMgr + 0x5dc) = uVar8;
        break;
      case 3:
        *(undefined4 *)(_g_MenuMgr + 0x5fc) = uVar8;
        break;
      case 4:
        *(undefined4 *)(_g_MenuMgr + 0x618) = uVar8;
      }
    }
    Menu_ShowDialog(_g_MenuMgr + 0x654,0x124,0);
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    *(undefined4 *)(iVar14 + 0x680) = 0;
    uVar8 = UiRes_GetLayoutData(0x8e);
    iVar5 = UiMgr_FindLayout(0x87);
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
    *(undefined4 *)(iVar5 + 0x318) = 1;
    *(undefined4 *)(iVar5 + 800) = uVar8;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar8 = UiRes_GetLayoutData(0x26b);
    iVar5 = UiMgr_FindLayout(0x87);
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
    *(undefined4 *)(iVar5 + 0x32c) = 1;
    *(undefined4 *)(iVar5 + 0x334) = uVar8;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar8 = UiRes_GetLayoutData(0x26c);
    iVar5 = UiMgr_FindLayout(0x87);
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
    *(undefined4 *)(iVar5 + 0x340) = 1;
    *(undefined4 *)(iVar5 + 0x348) = uVar8;
    *(undefined4 *)(iVar5 + 0x344) = 1;
    uVar8 = UiRes_GetLayoutData(0x26d);
    iVar5 = UiMgr_FindLayout(0x87);
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
    *(undefined4 *)(iVar5 + 0x354) = 1;
    *(undefined4 *)(iVar5 + 0x35c) = uVar8;
    *(undefined4 *)(iVar5 + 0x358) = 1;
    uVar8 = UiRes_GetLayoutData(0x26e);
    iVar5 = UiMgr_FindLayout(0x87);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x370) = 0;
    *(undefined4 *)(iVar5 + 0x360) = 0;
    if (*(int *)(iVar5 + 0x370) == 0) {
      *(undefined4 *)(iVar5 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x360) = 0;
    if (*(int *)(iVar5 + 0x370) == 0) {
      *(undefined4 *)(iVar5 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x368) = 1;
    *(undefined4 *)(iVar5 + 0x370) = uVar8;
    *(undefined4 *)(iVar5 + 0x36c) = 1;
    uVar8 = UiRes_GetLayoutData(0x26f);
    iVar5 = UiMgr_FindLayout(0x87);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar5 + 900) = 0;
    *(undefined4 *)(iVar5 + 0x374) = 0;
    if (*(int *)(iVar5 + 900) == 0) {
      *(undefined4 *)(iVar5 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x380) = 1;
    }
    *(undefined4 *)(iVar5 + 0x374) = 0;
    if (*(int *)(iVar5 + 900) == 0) {
      *(undefined4 *)(iVar5 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x380) = 1;
    }
    *(undefined4 *)(iVar5 + 0x37c) = 1;
    *(undefined4 *)(iVar5 + 900) = uVar8;
    *(undefined4 *)(iVar5 + 0x380) = 1;
    uVar8 = UiRes_GetLayoutData(0x8c);
    iVar5 = UiMgr_FindLayout(0x84);
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
    *(undefined4 *)(iVar5 + 800) = uVar8;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar8 = UiRes_GetLayoutData(0x8d);
    iVar5 = UiMgr_FindLayout(0x84);
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
    *(undefined4 *)(iVar5 + 0x334) = uVar8;
    *(undefined4 *)(iVar5 + 0x330) = 1;
  }
  if ((*(int *)(iVar14 + 0x660) != 0) && (lVar9 = UiLayout_UpdateAnimById(0x7a), lVar9 == 0)) {
    if (*(int *)(iVar14 + 0x650) == 0xe) {
      UiElem_SetPropFloat(0,iVar13,0x25,8);
      *(undefined4 *)(iVar14 + 0x660) = 0;
    }
    else {
      *(undefined4 *)(iVar14 + 0x660) = 0;
    }
  }
  MenuWnd_DrawText(0x7a,0x1a,0x362);
  MenuWnd_DrawText(0x7a,0x19,0x363);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(iVar14 + 0x62c) * 4 + 0x36eb88));
  iVar5 = RivalDb_Get(*(undefined2 *)(iVar14 + 0x24));
  uVar10 = RaceCtx_Get_10();
  cVar4 = Race_IsTimeTrialMode(uVar10,0);
  if (cVar4 == '\0') {
    if (*(short *)(iVar5 + 0x3a) < *(short *)(iVar5 + 0x38)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else if (*(short *)(iVar5 + 0x3a) < *(short *)(iVar5 + 0x38)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    MenuWnd_DrawText(0x7a,0x1b,0x4a);
    uVar1 = *(undefined2 *)(iVar14 + 0x24);
  }
  else {
    MenuWnd_DrawText(0x7a,0x1b,0x49);
    uVar1 = *(undefined2 *)(iVar14 + 0x24);
  }
  RivalDb_Copy(auStack_300,uVar1);
  puVar11 = auStack_300;
  puVar12 = auStack_180;
  iVar5 = 0x5f;
  do {
    iVar5 = iVar5 + -1;
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar5);
  UiElem_SetPropInt(iVar2 + iVar6 * 0x4f4 + 4,0x18,0x16,
                    *(undefined4 *)(&DAT_0032c830 + (uint)bStack_154 * 4));
  ScrCareer_Draw_MasterLord(param_1);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x7a,*(undefined4 *)(*(int *)(iVar14 + 0x62c) * 4 + 0x36eb90),1,0);
  }
  iVar5 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  return;
}

// 0x00249d10  size 0x3d4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32beac */

void ScrDraw_GetPrize_Exit(int param_1)

{
  undefined2 *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x18000;
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x195);
    iVar3 = _g_MenuMgr;
    *(undefined4 *)(_g_MenuMgr + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x35c) = 0;
    *(undefined4 *)(iVar3 + 0x34c) = 0;
    if (*(int *)(iVar3 + 0x35c) == 0) {
      *(undefined4 *)(iVar3 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    *(undefined4 *)(iVar3 + 0x34c) = 0;
    if (*(int *)(iVar3 + 0x35c) == 0) {
      *(undefined4 *)(iVar3 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    *(undefined4 *)(iVar3 + 0x354) = 0;
    *(undefined4 *)(iVar3 + 0x35c) = uVar4;
    *(undefined4 *)(iVar3 + 0x358) = 1;
    Menu_ClearSlot(0);
    iVar3 = UiMgr_FindLayout(0x97);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0,8);
    Menu_ShowDialog(_g_MenuMgr + 0x654,0x126,3);
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    iVar3 = _g_MenuMgr;
    sVar2 = *(short *)(param_1 + 0x498);
    uVar8 = 0;
    *(undefined4 *)(_g_MenuMgr + 0x538) = 0;
    *(int *)(iVar3 + 0x53c) = (int)sVar2;
    *(int *)(_g_MenuMgr + 0x544) = (int)*(short *)(param_1 + 0x49a);
    iVar3 = param_1;
    do {
      uVar14 = uVar8 + 1;
      uVar9 = uVar8 + 2;
      uVar15 = uVar8 + 3;
      uVar10 = uVar8 + 4;
      *(undefined2 *)(_g_MenuMgr + (uVar8 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x508);
      uVar11 = uVar8 + 5;
      uVar12 = uVar8 + 6;
      uVar8 = uVar8 + 7;
      *(undefined2 *)(_g_MenuMgr + (uVar14 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x50c);
      *(undefined2 *)(_g_MenuMgr + (uVar9 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x510);
      *(undefined2 *)(_g_MenuMgr + (uVar15 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x514);
      *(undefined2 *)(_g_MenuMgr + (uVar10 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x518);
      *(undefined2 *)(_g_MenuMgr + (uVar11 & 0xff) * 2 + 0x548) = *(undefined2 *)(iVar3 + 0x51c);
      puVar1 = (undefined2 *)(iVar3 + 0x520);
      iVar3 = iVar3 + 0x1c;
      *(undefined2 *)((uVar12 & 0xff) * 2 + _g_MenuMgr + 0x548) = *puVar1;
    } while ((int)uVar8 < 0x15);
    iVar13 = 0;
    iVar5 = 0;
    iVar3 = param_1;
    do {
      iVar13 = iVar13 + 8;
      *(undefined2 *)(_g_MenuMgr + iVar5 + 0x572) = *(undefined2 *)(iVar3 + 0x4e8);
      *(undefined2 *)(_g_MenuMgr + iVar5 + 0x574) = *(undefined2 *)(iVar3 + 0x4ea);
      *(undefined2 *)(_g_MenuMgr + iVar5 + 0x576) = *(undefined2 *)(iVar3 + 0x4ec);
      *(undefined2 *)(_g_MenuMgr + iVar5 + 0x578) = *(undefined2 *)(iVar3 + 0x4ee);
      *(undefined2 *)(_g_MenuMgr + iVar5 + 0x57a) = *(undefined2 *)(iVar3 + 0x4f0);
      *(undefined2 *)(_g_MenuMgr + iVar5 + 0x57c) = *(undefined2 *)(iVar3 + 0x4f2);
      *(undefined2 *)(_g_MenuMgr + iVar5 + 0x57e) = *(undefined2 *)(iVar3 + 0x4f4);
      puVar1 = (undefined2 *)(iVar3 + 0x4f6);
      iVar3 = iVar3 + 0x10;
      *(undefined2 *)(iVar5 + _g_MenuMgr + 0x580) = *puVar1;
      iVar5 = iVar5 + 0x10;
    } while (iVar13 < 0x10);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar6 = UiLayout_UpdateAnimIfActive(_g_MenuMgr + 0x40,0);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  *(undefined4 *)(param_1 + 0x660) = 0;
  MenuWnd_DrawStatus(*(undefined2 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar3 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x97);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  iVar3 = _g_MenuMgr + 0x40;
  uVar7 = MenuText_RivalCar(*(undefined2 *)(param_1 + 0x498),0xffffffffffffffff);
  UiElem_SetPropInt(iVar3,0,0x16,uVar7);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x0024a0f0  size 0x24c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_GetPrize_a0f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x648) != 0x2a) {
      uVar1 = UiRes_GetLayoutData(0x116);
      iVar2 = UiMgr_FindLayout(0x98);
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
    }
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x648) != 0x2a) {
      *(undefined4 *)(_g_MenuMgr + 0x5f0) =
           *(undefined4 *)(&DAT_0032c790 + *(int *)(param_1 + 0x484) * 4);
      Menu_SetField_8_9610(_g_MenuMgr + 0x5f0,1);
      Menu_ShowDialog(_g_MenuMgr + 0x654,0x126,3);
      Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    }
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  if (*(int *)(param_1 + 0x648) == 0x2a) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    lVar3 = UiLayout_UpdateAnimById(0x98,0);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawLabel(0x98,0xf,0x3a,*(int *)(param_1 + 0x484) + 1);
  MenuWnd_DrawText(0x98,0x11,*(int *)(param_1 + 0x484) + 0x89f);
  MenuWnd_DrawText(0x98,0x10,0x2f8);
  iVar2 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x98);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  return;
}

// 0x0024a340  size 0x25c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32beac */

void ScrDraw_GetPrize_Enter(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_600 [8];
  undefined4 uStack_5f8;
  undefined1 auStack_480 [8];
  undefined4 uStack_478;
  undefined1 auStack_300 [12];
  undefined4 uStack_2f4;
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x648) != 0x29) {
      uVar2 = UiRes_GetLayoutData(0x195);
      iVar1 = _g_MenuMgr;
      *(undefined4 *)(_g_MenuMgr + 0x350) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x35c) = 0;
      *(undefined4 *)(iVar1 + 0x34c) = 0;
      if (*(int *)(iVar1 + 0x35c) == 0) {
        *(undefined4 *)(iVar1 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x358) = 1;
      }
      *(undefined4 *)(iVar1 + 0x34c) = 0;
      if (*(int *)(iVar1 + 0x35c) == 0) {
        *(undefined4 *)(iVar1 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x358) = 1;
      }
      *(undefined4 *)(iVar1 + 0x354) = 0;
      *(undefined4 *)(iVar1 + 0x35c) = uVar2;
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x648) != 0x29) {
      RivalDb_Copy(auStack_180,*(undefined2 *)(param_1 + 0x484));
      iVar1 = _g_MenuMgr;
      *(undefined4 *)(_g_MenuMgr + 0x538) = 0;
      *(undefined4 *)(iVar1 + 0x53c) = uStack_178;
      RivalDb_Copy(auStack_300,*(undefined2 *)(param_1 + 0x484));
      *(undefined4 *)(_g_MenuMgr + 0x544) = uStack_2f4;
      Menu_ShowDialog(_g_MenuMgr + 0x654,0x126,3);
      Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    }
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  if (*(int *)(param_1 + 0x648) == 0x29) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    lVar4 = UiLayout_UpdateAnimIfActive(_g_MenuMgr + 0x40,0);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  RivalDb_Copy(auStack_480,*(undefined2 *)(param_1 + 0x484));
  MenuWnd_DrawStatus(uStack_478,0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x97);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  iVar1 = _g_MenuMgr + 0x40;
  RivalDb_Copy(auStack_600,*(undefined2 *)(param_1 + 0x484));
  uVar3 = MenuText_RivalCar(uStack_5f8,0xffffffffffffffff);
  UiElem_SetPropInt(iVar1,0,0x16,uVar3);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x0024a5a0  size 0x2c4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_EnableAutomaticGear(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
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
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar2 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  }
  iVar2 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  cVar1 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448));
  if ((cVar1 == '\x06') || (cVar1 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar1 == '\a')
     ) {
    iVar2 = _g_MenuMgr + 0x40;
    uVar4 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0xbc),0xffffffffffffffff);
    UiElem_SetPropInt(iVar2,0,0x16,uVar4);
  }
  else {
    iVar2 = _g_MenuMgr + 0x40;
    RivalDb_Copy(auStack_180,*(undefined2 *)(param_1 + 0x24));
    uVar4 = MenuText_RivalCar(uStack_178,0xffffffffffffffff);
    UiElem_SetPropInt(iVar2,0,0x16,uVar4);
  }
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x0024a870  size 0x314
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_EnableAutomaticGear_a870(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
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
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
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
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  uVar4 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar4);
  if (cVar1 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar2 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
    iVar2 = *(int *)(param_1 + 0x688);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar2 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
    iVar2 = *(int *)(param_1 + 0x688);
  }
  if (iVar2 == 0) {
    iVar2 = _g_MenuMgr + 0x40;
    uVar4 = Profile_Get(0);
    Profile_CopyCarRecord
              (auStack_1c0,uVar4,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0));
    uVar4 = MenuText_RivalCar(auStack_1c0[0],0xffffffffffffffff);
    UiElem_SetPropInt(iVar2,0,0x16,uVar4);
  }
  else {
    iVar2 = _g_MenuMgr + 0x40;
    RaceResult_BuildMessage(auStack_20,*(undefined2 *)(param_1 + 0x24));
    uVar4 = MenuText_RivalCar(uStack_1c,0xffffffffffffffff);
    UiElem_SetPropInt(iVar2,0,0x16,uVar4);
  }
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x0024ab90  size 0x118
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SponsorBattle(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_180 [384];
  
  iVar9 = (int)param_1;
  iVar2 = *(int *)(iVar9 + 0x65c);
  *(undefined4 *)(iVar9 + 0x65c) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x3f6);
    iVar2 = UiMgr_FindLayout(0x8b);
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
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0x3f7);
    iVar2 = UiMgr_FindLayout(0x8b);
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
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar3 = UiRes_GetLayoutData(0x3f8);
    iVar2 = UiMgr_FindLayout(0x8b);
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
    *(undefined4 *)(iVar2 + 0x348) = uVar3;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    Menu_ClearSlot(0);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar4 = UiLayout_UpdateAnimById(0x8b,0);
  if (lVar4 == 0) {
    *(undefined4 *)(iVar9 + 0x658) = 0;
  }
  if ((*(int *)(iVar9 + 0x660) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x8b), lVar4 == 0)) {
    *(undefined4 *)(iVar9 + 0x660) = 0;
  }
  ScrCareer_Draw_MasterLord(param_1);
  RivalDb_Copy(auStack_180,*(undefined2 *)(iVar9 + 0x24));
  uVar1 = RivalRec_GetCourse(auStack_180);
  MenuWnd_DrawLabel(0x8b,0x16,0x3b2);
  uVar5 = Msg_RivalNickname(uVar1);
  uVar6 = Msg_TeamInfo(uVar1);
  uVar6 = Msg_MakerCountry(uVar6);
  uVar7 = Msg_TeamInfo(uVar1);
  uVar7 = Msg_MakerInfo(uVar7);
  uVar8 = MsgId_PartDescription(uVar1);
  MenuWnd_DrawLabel(0x8b,0x15,0x3b3,uVar5,uVar6,uVar7,uVar8);
  UiLayout_UpdateAnimById(0x8b,2);
  iVar2 = UiMgr_FindLayout(0x8b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0024b0d0  size 0x2bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_YouDidNot(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x2d0);
    iVar3 = UiMgr_FindLayout(0x76);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar4;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(0x2d1);
    iVar3 = UiMgr_FindLayout(0x76);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar4;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    Menu_ClearSlot(0);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  lVar5 = UiLayout_UpdateAnimById(0x76,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x76), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  iVar2 = UiMgr_FindLayout(0x76);
  iVar3 = *_g_UiMgr;
  uVar6 = MsgId_Symbol(*(undefined4 *)(param_1 + 0x448));
  UiElem_SetPropInt(iVar3 + iVar2 * 0x4f4 + 4,0x19,0x16,uVar6);
  uVar6 = Msg_RivalNickname(*(undefined4 *)(param_1 + 0x448));
  MenuWnd_DrawLabel(0x76,0x1a,0x137,uVar6);
  iVar3 = UiMgr_FindLayout(0x76);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  uVar6 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar6);
  if (cVar1 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar3 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar3 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  }
  return;
}

// 0x0024b390  size 0x324
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_ContractMoney_b390(int param_1)

{
  char cVar1;
  int iVar2;
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
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar4;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(0x2cf);
    iVar3 = UiMgr_FindLayout(0x75);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar4;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    Menu_ClearSlot(0);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  lVar5 = UiLayout_UpdateAnimById(0x75,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x75), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  uVar6 = Msg_TeamInfo(*(undefined4 *)(param_1 + 0x448));
  iVar2 = UiMgr_FindLayout(0x75);
  iVar3 = *_g_UiMgr;
  uVar7 = MsgId_Symbol(*(undefined4 *)(param_1 + 0x448));
  UiElem_SetPropInt(iVar3 + iVar2 * 0x4f4 + 4,0x25,0x16,uVar7);
  uVar7 = Msg_RivalNickname(*(undefined4 *)(param_1 + 0x448));
  MenuWnd_DrawLabel(0x75,0x28,0x136,uVar7);
  uVar7 = Msg_MakerCountry(uVar6);
  uVar6 = Msg_MakerName(uVar6);
  MenuWnd_DrawLabel(0x75,0x27,0x45,uVar7,uVar6);
  MenuWnd_DrawText(0x75,0x26,0x129);
  uVar6 = Msg_TeamName(*(undefined4 *)(param_1 + 0x448));
  MenuWnd_DrawNumber(0x75,0x29,uVar6);
  iVar3 = UiMgr_FindLayout(0x75);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  uVar6 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar6);
  if (cVar1 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar3 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar3 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  }
  return;
}

// 0x0024b6c0  size 0x3e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_CarToUse(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x18000;
  iVar6 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar6 != 0) {
    uVar2 = UiRes_GetLayoutData(0x10c);
    iVar6 = UiMgr_FindLayout(0x89);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar6 + 800) = 0;
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x318) = 0;
    *(undefined4 *)(iVar6 + 800) = uVar2;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x195);
    iVar6 = _g_MenuMgr;
    *(undefined4 *)(_g_MenuMgr + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x35c) = 0;
    *(undefined4 *)(iVar6 + 0x34c) = 0;
    if (*(int *)(iVar6 + 0x35c) == 0) {
      *(undefined4 *)(iVar6 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x358) = 1;
    }
    *(undefined4 *)(iVar6 + 0x34c) = 0;
    if (*(int *)(iVar6 + 0x35c) == 0) {
      *(undefined4 *)(iVar6 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x358) = 1;
    }
    *(undefined4 *)(iVar6 + 0x354) = 0;
    *(undefined4 *)(iVar6 + 0x35c) = uVar2;
    *(undefined4 *)(iVar6 + 0x358) = 1;
    Menu_ClearSlot(0);
    if ((*(int *)(param_1 + 0x648) != 0x25) ||
       ((cVar1 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar1 != '\x06' &&
        (cVar1 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar1 != '\a')))) {
      iVar6 = _g_MenuMgr;
      uVar2 = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(_g_MenuMgr + 0x538) = 0;
      *(undefined4 *)(iVar6 + 0x53c) = uVar2;
      Menu_ShowDialog(_g_MenuMgr + 0x654,0x125,2);
      Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    }
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  if ((*(int *)(param_1 + 0x648) == 0x25) &&
     ((cVar1 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar1 == '\x06' ||
      (cVar1 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar1 == '\a')))) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    iVar6 = _g_MenuMgr + 0x40;
    lVar4 = UiLayout_UpdateAnimById(0x89,0);
    lVar5 = UiLayout_UpdateAnimIfActive(iVar6,0);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawText(7,0x2e,0x3bc);
  iVar6 = UiMgr_FindLayout(0x89);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,0x27,8);
  uVar3 = RivalDb_FindByName(*(undefined2 *)(param_1 + 0x448));
  MenuWnd_DrawStatus(uVar3,0xfffffffffffffffd,0xffffffffffffffff,0);
  uVar3 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar3);
  if (cVar1 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar6 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar6 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  }
  iVar6 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  iVar6 = _g_MenuMgr + 0x40;
  uVar3 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0xbc),0xffffffffffffffff);
  UiElem_SetPropInt(iVar6,0,0x16,uVar3);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x0024baa0  size 0x1078
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_WinLoss(int param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
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
  
  iVar4 = UiMgr_FindLayout(0x84);
  iVar14 = *_g_UiMgr + iVar4 * 0x4f4 + 4;
  iVar5 = UiMgr_FindLayout(0x85);
  iVar4 = *_g_UiMgr;
  UiMgr_FindLayout(7);
  iVar6 = UiMgr_FindLayout(0x86);
  iVar12 = *_g_UiMgr + iVar6 * 0x4f4 + 4;
  iVar7 = UiMgr_FindLayout(0x87);
  iVar6 = *(int *)(param_1 + 0x65c);
  iVar15 = *_g_UiMgr;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  iVar15 = iVar15 + iVar7 * 0x4f4 + 4;
  if (iVar6 != 0) {
    uVar8 = UiRes_GetLayoutData(0x255);
    iVar6 = UiMgr_FindLayout(0x93);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar6 + 800) = 0;
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x318) = 0;
    *(undefined4 *)(iVar6 + 800) = uVar8;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar8 = UiRes_GetLayoutData(0x254);
    iVar6 = UiMgr_FindLayout(0x93);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x334) = 0;
    *(undefined4 *)(iVar6 + 0x324) = 0;
    if (*(int *)(iVar6 + 0x334) == 0) {
      *(undefined4 *)(iVar6 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x330) = 1;
    }
    *(undefined4 *)(iVar6 + 0x324) = 0;
    if (*(int *)(iVar6 + 0x334) == 0) {
      *(undefined4 *)(iVar6 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x330) = 1;
    }
    *(undefined4 *)(iVar6 + 0x32c) = 0;
    *(undefined4 *)(iVar6 + 0x334) = uVar8;
    *(undefined4 *)(iVar6 + 0x330) = 1;
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0x3f800000,iVar14,0xe,8);
  }
  lVar10 = UiLayout_UpdateAnimById(0x93,0);
  if (lVar10 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar10 = UiLayout_UpdateAnimById(0x93), lVar10 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  ScrCareer_Draw_Prize(param_1,*(undefined4 *)(param_1 + 0x28),0);
  uVar11 = Race_GetCourseVariant();
  uVar11 = MsgId_ForOption(uVar11);
  uVar11 = MsgId_ForSlot(uVar11,1);
  MenuWnd_DrawLabel(0x85,3,0x37d,1,uVar11);
  if (*(int *)(param_1 + 0x644) == 1) {
    uVar11 = MenuText_CarNameOrMaker(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    MenuWnd_DrawText(0x93,0xd,uVar11);
    uVar11 = MenuText_CarShortName(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    MenuWnd_DrawText(0x93,0xf,uVar11);
    uVar11 = MenuText_CarGrade(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    MenuWnd_DrawText(0x93,0xe,uVar11);
    MenuWnd_DrawText(0x93,0xc,0x386);
    RivalDb_Copy(auStack_300,*(undefined2 *)(param_1 + 0x28));
    if ((cStack_2fc != '\x05') &&
       (RivalDb_Copy(auStack_480,*(undefined2 *)(param_1 + 0x28)), cStack_47c != '\x06')) {
      MenuWnd_DrawLabel(0x93,0x15,0x38c,*(undefined4 *)(param_1 + 0x7c),
                        *(undefined4 *)(param_1 + 0x80));
    }
    MenuWnd_DrawText(0x93,0x10,0x387);
    uVar9 = MenuText_CarName(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    MenuWnd_DrawText(0x93,0x16,(uVar9 & 0xff) + 0x38d);
    MenuWnd_DrawText(0x93,0x11,0x38a);
    cVar2 = MenuText_RivalCarSpec(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    if (cVar2 == '\a') {
      lVar10 = MenuText_OpponentSpec(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
      if (lVar10 < 1) {
        MenuWnd_DrawLabel(0x93,0x17,0x26,4);
      }
      else {
        uVar11 = MenuText_OpponentSpec(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
        MenuWnd_DrawLabel(0x93,0x17,0x18,uVar11,4);
      }
    }
    else {
      lVar10 = MenuText_OpponentSpec(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
      if (lVar10 < 1) {
        MenuWnd_DrawLabel(0x93,0x17,0x26,4);
      }
      else {
        uVar11 = MenuText_OpponentSpec(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
        MenuWnd_DrawLabel(0x93,0x17,0x17,uVar11,4);
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
    lVar10 = MenuText_OpponentComment(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
    if (lVar10 < 1) {
      MenuWnd_DrawLabel(0x93,0x1a,0x25,4);
    }
    else {
      uVar11 = MenuText_OpponentComment(*(undefined4 *)(param_1 + 0x60),0xffffffffffffffff);
      MenuWnd_DrawLabel(0x93,0x1a,0x16,uVar11,4);
    }
    iVar6 = RivalDb_Get(*(undefined2 *)(param_1 + 0x28));
    uVar11 = RaceCtx_Get_10();
    cVar2 = Race_IsTimeTrialMode(uVar11,0);
    if (cVar2 == '\0') {
      if (*(short *)(iVar6 + 0x3a) < *(short *)(iVar6 + 0x38)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else if (*(short *)(iVar6 + 0x3a) < *(short *)(iVar6 + 0x38)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      MenuWnd_DrawText(0x93,0x1b,0x4a);
    }
    else {
      MenuWnd_DrawText(0x93,0x1b,0x49);
    }
  }
  uVar11 = Profile_Get(0);
  sVar3 = Profile_GetRivalBattleCount(uVar11,*(undefined4 *)(param_1 + 0x28));
  if (sVar3 < 1) {
    UiElem_SetPropFloat(0,iVar14,1,8);
  }
  else {
    RivalDb_Copy(auStack_600,*(undefined2 *)(param_1 + 0x28));
    if ((cStack_5fc == '\x05') ||
       (RivalDb_Copy(auStack_780,*(undefined2 *)(param_1 + 0x28)), cStack_77c == '\x06')) {
      UiElem_SetPropFloat(0,iVar14,1,8);
    }
    else {
      UiElem_SetPropFloat(0x3f800000,iVar14,1,8);
    }
  }
  UiElem_SetPropFloat(0,iVar14,3,8);
  if (*(int *)(param_1 + 0x28) < 0) {
    UiElem_SetPropFloat(0,iVar14,0,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,iVar14,0,8);
  }
  UiElem_SetPropFloat(0,iVar14,2,8);
  UiElem_SetPropInt(iVar4 + iVar5 * 0x4f4 + 4,1,9,*(undefined4 *)(param_1 + 0x1c));
  UiLayout_UpdateAnimById(0x84,2);
  UiLayout_UpdateAnimById(0x85,0);
  iVar4 = UiMgr_FindLayout(0x84);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x85);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x93);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  RivalDb_Copy(&uStack_900,*(undefined2 *)(param_1 + 0x28));
  puVar16 = auStack_8bc;
  puVar13 = auStack_13c;
  iVar4 = 0x17;
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
    iVar4 = iVar4 + -1;
    *puVar13 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar13 = puVar13 + 1;
  } while (0 < iVar4);
  puVar16 = auStack_860;
  puVar13 = auStack_e0;
  iVar4 = 0x17;
  do {
    iVar4 = iVar4 + -1;
    *puVar13 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar13 = puVar13 + 1;
  } while (0 < iVar4);
  puVar16 = auStack_804;
  puVar13 = auStack_84;
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    uVar8 = puVar16[1];
    *puVar13 = *puVar16;
    puVar13[1] = uVar8;
    puVar16 = puVar16 + 2;
    puVar13 = puVar13 + 2;
  } while (0 < iVar4);
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
    iVar4 = *(int *)(param_1 + 0x648);
    goto LAB_0024c5a4;
  case 2:
    UiElem_SetPropInt(iVar12,1,0x16,0x44);
    iVar4 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    break;
  case 3:
    UiElem_SetPropInt(iVar12,1,0x16,0x41);
    iVar4 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    break;
  case 4:
    UiElem_SetPropInt(iVar12,1,0x16,0x3f);
    iVar4 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    break;
  case 5:
    UiElem_SetPropInt(iVar12,1,0x16,0x40);
    iVar4 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    break;
  case 6:
    UiElem_SetPropInt(iVar12,1,0x16,0x40);
    iVar4 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    MenuWnd_DrawText(0x86,2,0xa4);
    break;
  case 7:
    iVar4 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x24);
      Rival_GetRecord(aiStack_950,iVar4);
      if (iVar6 == aiStack_950[0]) {
        UiElem_SetPropInt(iVar12,1,0x16,*(undefined4 *)(&DAT_0032c660 + iVar4 * 4));
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x14);
    iVar4 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    break;
  case 8:
    UiElem_SetPropInt(iVar12,1,0x16,0x43);
    iVar4 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    break;
  case 9:
    UiElem_SetPropInt(iVar12,1,0x16,0x42);
    iVar4 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    break;
  case 10:
    UiElem_SetPropInt(iVar12,1,0x16,0x3e);
    iVar4 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    break;
  case 0xb:
    iVar4 = UiMgr_FindLayout(0x91);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0xc,8);
    iVar4 = UiMgr_FindLayout(0x91);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x11,8);
    iVar4 = UiMgr_FindLayout(0x91);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  }
  iVar4 = *(int *)(param_1 + 0x648);
LAB_0024c5a4:
  if (iVar4 == 0xe) {
    uVar11 = MsgId_TeamName(*(undefined4 *)(param_1 + 0xe4));
    MenuWnd_DrawText(0x87,0x2f,uVar11);
    iVar6 = 0;
    puVar13 = (undefined4 *)0x32c6b0;
    iVar4 = param_1;
    do {
      if (*(int *)(iVar4 + 0x5e4) != -1) {
        uVar11 = MsgId_RivalName();
        MenuWnd_DrawText(0x87,*puVar13,uVar11);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      puVar13 = puVar13 + 1;
    } while (iVar6 < 6);
    UiElem_SetPropInt(iVar15,0x28,0x16,*(undefined4 *)(&DAT_0032c730 + *(int *)(param_1 + 0xe4) * 4)
                     );
    iVar6 = 0;
    puVar13 = &DAT_0032c6f0;
    puVar16 = &DAT_0032c710;
    iVar4 = param_1;
    do {
      iVar5 = *(int *)(iVar4 + 0x5e4);
      if (iVar5 == -1) {
LAB_0024ca58:
        UiElem_SetPropFloat(0,iVar15,*puVar13,8);
      }
      else {
        uVar11 = Profile_Get(0);
        sVar3 = Profile_GetRivalBattleCount(uVar11,iVar5);
        if (sVar3 < 1) goto LAB_0024ca58;
        UiElem_SetPropFloat(0x3f800000,iVar15,*puVar13,8);
        UiElem_Get(iVar15,*puVar16,0x69,0x67,0x62);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar6 < 6);
    iVar6 = 0;
    puVar13 = &DAT_0032c710;
    iVar4 = param_1;
    do {
      if (*(int *)(iVar4 + 0x5e4) == -1) {
        UiElem_SetPropFloat(0,iVar15,*puVar13,8);
      }
      else {
        UiElem_SetPropFloat(0x3f800000,iVar15,*puVar13,8);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      puVar13 = puVar13 + 1;
    } while (iVar6 < 6);
    iVar6 = 0;
    puVar13 = &DAT_0032c6d0;
    iVar4 = param_1;
    do {
      iVar5 = *(int *)(iVar4 + 0x5e4);
      if ((iVar5 == -1) ||
         ((iVar7 = param_1 + *(int *)(param_1 + 0x5e0) * 0x14, *(int *)(iVar7 + 0x568) != iVar5 &&
          (*(int *)(iVar7 + 0x56c) != iVar5)))) {
        UiElem_SetPropFloat(0,iVar15,*puVar13,8);
      }
      else {
        UiElem_SetPropFloat(0,iVar15,*puVar13,8);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      puVar13 = puVar13 + 1;
    } while (iVar6 < 6);
    iVar4 = UiMgr_FindLayout(0x87);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
    iVar4 = *(int *)(param_1 + 0x64c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x64c);
  }
  if (iVar4 == 0x16) {
    uVar11 = Profile_Get(0);
    uVar11 = Profile_GetMoney(uVar11);
    MenuWnd_DrawNumber(0x9c,1,uVar11);
    iVar4 = UiMgr_FindLayout(0x9c);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  }
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  return;
}

