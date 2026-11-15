// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00254000 - 0x00258000
#include "ghidra_types.h"

// 0x00254100  size 0x10a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectSectionTo(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte bVar14;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  UiLayout *pUVar15;
  UiLayout *pUVar16;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  iVar7 = UiMgr_FindLayout(0x83);
  pUVar16 = &g_UiMgr->slots[iVar7].layout;
  iVar8 = UiMgr_FindLayout(7);
  iVar7 = *(int *)(param_1 + 0x65c);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  pUVar15 = &pUVar1[iVar8].layout;
  if (iVar7 != 0) {
    uVar9 = UiRes_GetLayoutData(0x82);
    iVar7 = UiMgr_FindLayout(0x81);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 1;
    pUVar1[iVar7].layout.unk_31c = uVar9;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(0x82);
    iVar7 = UiMgr_FindLayout(0x82);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 1;
    pUVar1[iVar7].layout.unk_31c = uVar9;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(0x85);
    iVar7 = UiMgr_FindLayout(0x83);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    pUVar1[iVar7].layout.unk_31c = uVar9;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x86);
    iVar7 = UiMgr_FindLayout(0x83);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar10;
    pUVar1[iVar7].layout.animState = 1;
    uVar10 = UiRes_GetLayoutData(0x88);
    iVar7 = UiMgr_FindLayout(0x83);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar10;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    uVar10 = UiRes_GetLayoutData(0x87);
    iVar7 = UiMgr_FindLayout(0x83);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar10;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    uVar10 = UiRes_GetLayoutData(0x83);
    iVar7 = UiMgr_FindLayout(0x83);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x36c = uVar10;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    uVar10 = UiRes_GetLayoutData(0x84);
    iVar7 = UiMgr_FindLayout(0x83);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x380 = uVar10;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x648) == 4) {
      UiElem_SetPropFloat(pUVar15,0x25,8,extraout_a3_lo_02);
      UiElem_SetPropFloat(pUVar15,0x24,8,extraout_a3_lo_03);
    }
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x83,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x83,1);
  if (!bVar2 && !bVar3) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x83,2);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x83,3);
    if (!bVar2 && !bVar3) {
      *(undefined4 *)(param_1 + 0x660) = 0;
    }
  }
  uVar11 = Race_GetCourseVariant();
  iVar7 = MsgId_ForOption(uVar11);
  UiElem_SetPropInt(pUVar16,0x5f,0x16,*(int *)(&DAT_0032c010 + iVar7 * 4));
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x83,*(undefined4 *)(&DAT_0032bff0 + *(int *)(param_1 + 0x62c) * 4),1,0);
  }
  UiElem_SetPropInt(pUVar16,0x1a,9,*(int *)(param_1 + 0x62c));
  UiElem_SetPropInt(pUVar16,0x1d,9,*(int *)(param_1 + 0x62c));
  _s_SectionSelA = 0;
  do {
    _s_SectionSelB = 0;
    do {
      lVar12 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
      if (lVar12 == -1) {
        UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                  _s_SectionSelA * 0x18 + 0x32c030),8,
                            (byte)_s_SectionSelA);
        UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                  _s_SectionSelA * 0x18 + 0x32c0b0),8,
                            (byte)_s_SectionSelA);
      }
      else {
        uVar5 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
        uVar11 = RivalDb_Get(uVar5);
        cVar4 = RivalRec_GetTeam(uVar11);
        if ((cVar4 == '\x06') || (cVar4 == '\x05')) {
          uVar5 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
          uVar11 = RivalDb_Get(uVar5);
          uVar9 = RivalRec_GetTeam(uVar11);
          UiElem_SetPropInt(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                  _s_SectionSelA * 0x18 + 0x32c030),9,
                            *(int *)(&DAT_0032c130 + (uVar9 & 0xff) * 4));
          UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c030),8,
                              (char)_s_SectionSelA * '\x03');
          UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c0b0),8,
                              (char)_s_SectionSelA * '\x03');
        }
        else if (cVar4 == '\x01') {
          uVar5 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
          uVar11 = RivalDb_Get(uVar5);
          sVar6 = RivalRec_GetId(uVar11);
          iVar7 = Profile_Get(0);
          if (*(short *)(iVar7 + sVar6 * 2 + 0x4b7c) < 1) {
            uVar5 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
            uVar11 = RivalDb_Get(uVar5);
            uVar9 = RivalRec_GetTeam(uVar11);
            UiElem_SetPropInt(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c030),9,
                              *(int *)(&DAT_0032c130 + (uVar9 & 0xff) * 4));
            UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                      _s_SectionSelA * 0x18 + 0x32c030),8,
                                (char)_s_SectionSelA * '\x03');
          }
          else {
            UiElem_SetPropInt(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c030),9,0);
            UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                      _s_SectionSelA * 0x18 + 0x32c030),8,
                                (char)_s_SectionSelA * '\x03');
          }
          UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c0b0),8,
                              (char)_s_SectionSelA * '\x03');
        }
        else if (cVar4 == '\0') {
          uVar5 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
          uVar11 = RivalDb_Get(uVar5);
          sVar6 = RivalRec_GetId(uVar11);
          iVar7 = Profile_Get(0);
          if (*(short *)(iVar7 + sVar6 * 2 + 0x4b7c) < 1) {
            uVar5 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
            uVar11 = RivalDb_Get(uVar5);
            lVar12 = RivalRec_IsValid(uVar11);
            if (lVar12 == 0) goto LAB_00254538;
            UiElem_SetPropInt(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c030),9,1);
            UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                      _s_SectionSelA * 0x18 + 0x32c030),8,
                                (char)_s_SectionSelA * '\x03');
          }
          else {
LAB_00254538:
            uVar5 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
            uVar11 = RivalDb_Get(uVar5);
            uVar9 = RivalRec_GetTeam(uVar11);
            UiElem_SetPropInt(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c030),9,
                              *(int *)(&DAT_0032c130 + (uVar9 & 0xff) * 4));
            uVar11 = Profile_Get(0);
            uVar13 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
            sVar6 = Profile_GetRivalBattleCount(uVar11,uVar13);
            if (sVar6 < 1) {
              UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                        _s_SectionSelA * 0x18 + 0x32c030),8,
                                  (char)_s_SectionSelA * '\x03');
            }
            else {
              UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                        _s_SectionSelA * 0x18 + 0x32c030),8,
                                  (char)_s_SectionSelA * '\x03');
            }
          }
          UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c0b0),8,
                              (char)_s_SectionSelA * '\x03');
        }
        else if (cVar4 == '\r') {
          UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c030),8,
                              (byte)_s_SectionSelA);
          UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c0b0),8,
                              (byte)_s_SectionSelA);
        }
        else {
          uVar5 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
          uVar11 = RivalDb_Get(uVar5);
          uVar9 = RivalRec_GetTeam(uVar11);
          UiElem_SetPropInt(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                  _s_SectionSelA * 0x18 + 0x32c030),9,
                            *(int *)(&DAT_0032c130 + (uVar9 & 0xff) * 4));
          uVar11 = Profile_Get(0);
          uVar13 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
          sVar6 = Profile_GetRivalBattleCount(uVar11,uVar13);
          if (sVar6 < 1) {
            UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                      _s_SectionSelA * 0x18 + 0x32c030),8,
                                (char)_s_SectionSelA * '\x03');
          }
          else {
            UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                      _s_SectionSelA * 0x18 + 0x32c030),8,
                                (char)_s_SectionSelA * '\x03');
          }
          UiElem_SetPropFloat(pUVar16,(long)*(int *)(_s_SectionSelB * 4 +
                                                    _s_SectionSelA * 0x18 + 0x32c0b0),8,
                              (char)_s_SectionSelA * '\x03');
        }
      }
      _s_SectionSelB = _s_SectionSelB + 1;
    } while (_s_SectionSelB < 6);
    _s_SectionSelA = _s_SectionSelA + 1;
    if (4 < _s_SectionSelA) {
      _s_ScrCareer_Draw_SelectSectionTo_1 = 0;
      do {
        MenuWnd_DrawText(0x83,*(undefined4 *)
                               (&DAT_0032c190 + _s_ScrCareer_Draw_SelectSectionTo_1 * 4),
                         *(undefined4 *)(&DAT_0032c170 + _s_ScrCareer_Draw_SelectSectionTo_1 * 4));
        _s_ScrCareer_Draw_SelectSectionTo_1 = _s_ScrCareer_Draw_SelectSectionTo_1 + 1;
      } while (_s_ScrCareer_Draw_SelectSectionTo_1 < 5);
      MenuWnd_DrawLabel(0x83,0x61,0x361,5,
                        *(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + param_1 + 0xec),0);
      MenuWnd_DrawText(7,0x2e,0x360);
      uVar11 = Profile_Get(0);
      cVar4 = Profile_GetChapter(uVar11);
      if (cVar4 == '\0') {
        UiLayout_UpdateAnimById((UiLayout *)0x81,0);
        iVar7 = UiMgr_FindLayout(0x81);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        iVar7 = UiMgr_FindLayout(0x83);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,0x5d,9,1);
        iVar7 = *(int *)(param_1 + 0x64c);
        bVar14 = extraout_a3_lo;
      }
      else {
        UiLayout_UpdateAnimById((UiLayout *)0x82,0);
        iVar7 = UiMgr_FindLayout(0x82);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        iVar7 = UiMgr_FindLayout(0x83);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,0x5d,9,0);
        iVar7 = *(int *)(param_1 + 0x64c);
        bVar14 = extraout_a3_lo_00;
      }
      if (iVar7 == *(int *)(param_1 + 0x650)) {
        UiLayout_UpdateAnimById((UiLayout *)0x83,4);
        UiLayout_UpdateAnimById((UiLayout *)0x83,5);
      }
      else {
        UiElem_SetPropFloat(pUVar16,0x1a,8,bVar14);
        UiElem_SetPropFloat(pUVar16,0x1d,8,extraout_a3_lo_01);
      }
      iVar7 = UiMgr_FindLayout(0x83);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
      return;
    }
  } while( true );
}

// 0x002551c0  size 0x8dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_CategoryRace_51c0(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte bVar9;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  UiLayout *pUVar10;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  iVar4 = UiMgr_FindLayout(0x78);
  pUVar10 = &g_UiMgr->slots[iVar4].layout;
  UiElem_SetPropFloat(pUVar10,0x47,8,extraout_a3_lo);
  UiElem_SetPropFloat(pUVar10,0x48,8,extraout_a3_lo_00);
  iVar4 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x3a);
    iVar4 = UiMgr_FindLayout(0x79);
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
    uVar6 = UiRes_GetLayoutData(0x432);
    iVar4 = UiMgr_FindLayout(0x79);
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
    uVar6 = UiRes_GetLayoutData(0x3b);
    iVar4 = UiMgr_FindLayout(0x79);
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
    uVar6 = UiRes_GetLayoutData(0x291);
    iVar4 = UiMgr_FindLayout(0x79);
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
    iVar4 = *(int *)(param_1 + 0x648);
    if (((((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) ||
        (((iVar4 == 0x14 || (iVar4 == 0x15)) ||
         ((iVar4 == 0x29 || ((iVar4 == 0x2a || (iVar4 == 0x2b)))))))) ||
       ((iVar4 == 0x20 ||
        ((((iVar4 == 0x1f || (iVar4 == 0x21)) || (iVar4 == 0x2b)) ||
         (g_MenuMgr->prevScreen == 0xfffffffe)))))) {
      iVar4 = UiMgr_FindLayout(0x78);
      pUVar1 = g_UiMgr->slots;
      piVar7 = (int *)UiRes_GetLayoutData(*(int *)(param_1 + 0x6b0) + 0x34);
      UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar7);
    }
    else {
      iVar4 = UiMgr_FindLayout(0x78);
      if (*(int *)&g_UiMgr->slots[iVar4].layout.field_0x340 == 0) {
        *(undefined4 *)(param_1 + 0x6b0) = 0;
      }
      else {
        iVar4 = UiMgr_FindLayout(0x78);
        if (*(int *)&g_UiMgr->slots[iVar4].layout.field_0x354 == 0) {
          *(undefined4 *)(param_1 + 0x6b0) = 1;
        }
        else {
          iVar4 = UiMgr_FindLayout(0x78);
          if (*(int *)&g_UiMgr->slots[iVar4].layout.field_0x368 == 0) {
            *(undefined4 *)(param_1 + 0x6b0) = 2;
          }
          else {
            iVar4 = UiMgr_FindLayout(0x78);
            if (*(int *)&g_UiMgr->slots[iVar4].layout.field_0x37c == 0) {
              *(undefined4 *)(param_1 + 0x6b0) = 3;
            }
            else {
              *(undefined4 *)(param_1 + 0x6b0) = 0;
            }
          }
        }
      }
      iVar4 = UiMgr_FindLayout(0x78);
      pUVar1 = g_UiMgr->slots;
      piVar7 = (int *)UiRes_GetLayoutData(*(int *)(param_1 + 0x6b0) + 0x34);
      UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar7);
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  if (*(int *)(param_1 + 0x648) == 2) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x79,3);
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x79,0);
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x79,*(undefined4 *)(&DAT_0032bfe0 + *(int *)(param_1 + 0x62c) * 4),1,0);
    iVar4 = *(int *)(param_1 + 0x660);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x660);
  }
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x640) == 0xb) {
      *(undefined4 *)(param_1 + 0x660) = 0;
      g_MenuMgr->unk_05a0 = 1;
      g_MenuMgr->unk_05e8 = 1;
      g_MenuMgr->unk_060c = 1;
      g_MenuMgr->unk_0634 = 1;
      g_MenuMgr->unk_0644 = 1;
    }
    else if (*(int *)(param_1 + 0x650) == 2) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x79,2);
      if (!bVar2) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x79,1);
      if (!bVar2) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
  }
  uVar8 = Race_GetCourseVariant();
  iVar4 = MsgId_ForOption(uVar8);
  UiElem_SetPropInt(pUVar10,0x3d,0x16,*(int *)(&DAT_0032bfc0 + iVar4 * 4));
  uVar8 = Race_GetCourseVariant();
  iVar4 = MsgId_ForOption(uVar8);
  UiElem_SetPropInt(pUVar10,0x3e,0x16,*(int *)(&DAT_0032bfc0 + iVar4 * 4));
  uVar8 = Race_GetCourseVariant();
  iVar4 = MsgId_ForOption(uVar8);
  UiElem_SetPropInt(pUVar10,0x3f,0x16,*(int *)(&DAT_0032bfc0 + iVar4 * 4));
  uVar8 = Race_GetCourseVariant();
  iVar4 = MsgId_ForOption(uVar8);
  UiElem_SetPropInt(pUVar10,0x40,0x16,*(int *)(&DAT_0032bfc0 + iVar4 * 4));
  uVar8 = Race_GetCourseVariant();
  uVar8 = MsgId_ForOption(uVar8);
  uVar8 = MsgId_ForSlot(uVar8,1);
  MenuWnd_DrawText(0x78,0x42,uVar8);
  uVar8 = Race_GetCourseVariant();
  uVar8 = MsgId_ForOption(uVar8);
  uVar8 = MsgId_ForSlot(uVar8,1);
  MenuWnd_DrawText(0x78,0x43,uVar8);
  uVar8 = Race_GetCourseVariant();
  uVar8 = MsgId_ForOption(uVar8);
  uVar8 = MsgId_ForSlot(uVar8,1);
  MenuWnd_DrawText(0x78,0x44,uVar8);
  uVar8 = Race_GetCourseVariant();
  uVar8 = MsgId_ForOption(uVar8);
  uVar8 = MsgId_ForSlot(uVar8,1);
  MenuWnd_DrawText(0x78,0x45,uVar8);
  uVar8 = Profile_Get(0);
  cVar3 = Profile_GetChapter(uVar8);
  if (cVar3 == '\0') {
    MenuWnd_DrawText(0x79,0x18,0xe0);
  }
  else {
    MenuWnd_DrawTextId(0x79,0x18,3,0xe0);
  }
  MenuWnd_DrawText(0x79,0x19,0x355);
  MenuWnd_DrawText(0x79,0x1a,0x356);
  MenuWnd_DrawText(0x79,0x1b,0x357);
  bVar9 = extraout_a3_lo_01;
  if (*(int *)(param_1 + 0x644) != 0) {
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032bfb0 + *(int *)(param_1 + 0x62c) * 4));
    bVar9 = extraout_a3_lo_02;
  }
  UiElem_SetPropFloat(pUVar10,1,8,bVar9);
  UiElem_SetPropFloat(pUVar10,0xb,8,extraout_a3_lo_03);
  UiElem_SetPropFloat(pUVar10,0x15,8,extraout_a3_lo_04);
  UiElem_SetPropFloat(pUVar10,0x1f,8,extraout_a3_lo_05);
  iVar4 = UiMgr_FindLayout(0x77);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x78);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x79);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  if (g_MenuMgr->prevScreen == 0xc) {
    Subtitle_Draw();
  }
  return;
}

// 0x00255aa0  size 0x14
/* menu page 27 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageBetCar_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00255ac0  size 0x130
/* menu page 27 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageBetCar_Update(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x6b8) == 1) && (g_MenuMgr->nextScreen == 0xfffffffd)) {
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  else {
    (*(code *)(&PTR_ScrRace_Draw_CategoryRace_51c0_0032be30)[*(int *)(iVar2 + 0x638)])(param_1);
    MenuWnd_SetTitle(*(undefined4 *)(&DAT_0032bef0 + *(int *)(iVar2 + 0x638) * 4),0xffffffffffffffff
                    );
  }
  if (((g_MenuMgr->flags & 4) == 0) && (bVar1 = UiLayout_UpdateAnimById((UiLayout *)0x79,1), !bVar1)
     ) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x00255bf0  size 0x3c
/* menu page 27 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageBetCar_Enter(void)

{
  char cVar1;
  
  cVar1 = RaceCtx_Get_8();
  if (cVar1 == '\x02') {
    GameState_Get_35c();
  }
  Menu_ClearSlot(0);
  return;
}

// 0x00255c30  size 0x14
/* screen record 0x327830 */

void ScrSell_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00255c50  size 0x220
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_Sell(int *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x43,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x43,1);
  if (!bVar2 && !bVar3) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  MenuWnd_DrawText(0x43,0x1a,0x2a1);
  MenuWnd_DrawText(0x43,0x1b,0x2a2);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x43,*(undefined4 *)(*param_1 * 4 + 0x36ec00),1,0);
  }
  UiLayout_UpdateAnimById((UiLayout *)0x42,0);
  iVar4 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x43);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(*param_1 * 4 + 0x36ec08));
  if ((g_MenuMgr->flags & 4) == 0) {
    uVar1 = g_MenuMgr->nextScreen;
    if (uVar1 == 0x1e) {
      uVar5 = 5;
    }
    else if (uVar1 == 0x1d) {
      uVar5 = 4;
    }
    else if (uVar1 == 0xd) {
      uVar5 = 3;
    }
    else {
      uVar5 = 3;
    }
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x43,uVar5);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x43,2);
    if (!bVar2 && !bVar3) {
      if ((g_MenuMgr->flags & 1) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
      }
    }
  }
  return;
}

// 0x00255e70  size 0x394
/* screen record 0x327830 */

void ScrSell_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = UiRes_GetLayoutData(0x97);
  iVar3 = UiMgr_FindLayout(0x42);
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
  uVar2 = UiRes_GetLayoutData(0x98);
  iVar3 = UiMgr_FindLayout(0x43);
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
  uVar4 = UiRes_GetLayoutData(0x99);
  iVar3 = UiMgr_FindLayout(0x43);
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
  uVar4 = UiRes_GetLayoutData(0x9b);
  iVar3 = UiMgr_FindLayout(0x43);
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
  uVar4 = UiRes_GetLayoutData(0x9a);
  iVar3 = UiMgr_FindLayout(0x43);
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
  uVar4 = UiRes_GetLayoutData(0x9c);
  iVar3 = UiMgr_FindLayout(0x43);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  uVar4 = UiRes_GetLayoutData(0x9d);
  iVar3 = UiMgr_FindLayout(0x43);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
  Menu_ClearSlot(0);
  return;
}

// 0x00256210  size 0xa8
undefined8 maybe_CarSlot_IsSpecial(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0x19) {
    uVar1 = 1;
  }
  else if (param_1 == 0x1a) {
    uVar1 = 1;
  }
  else {
    lVar2 = maybe_MenuText_CurrentCarSpec();
    if (lVar2 == 1) {
      if (param_1 == 0x21) {
        return 1;
      }
      if ((3 < param_1) && (param_1 < 8)) {
        return 1;
      }
      if (param_2 == 5) {
        return 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002562c0  size 0x5f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_MetalColour(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  UiLayout *pUVar10;
  undefined1 auStack_10 [3];
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  undefined1 auStack_8 [3];
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  
  iVar5 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0x48);
    if ((((iVar5 == 9) || (iVar5 == 8)) || (iVar5 == 2)) || (iVar5 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar4 = UiRes_GetLayoutData(0x173);
      iVar5 = UiMgr_FindLayout(0x55);
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
      pUVar1[iVar5].layout.unk_31c = uVar4;
      pUVar1[iVar5].layout.unk_318 = 1;
      uVar6 = UiRes_GetLayoutData(0x174);
      iVar5 = UiMgr_FindLayout(0x55);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar6;
      pUVar1[iVar5].layout.animState = 1;
      uVar4 = UiRes_GetLayoutData(0x175);
      iVar5 = UiMgr_FindLayout(0x56);
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
      pUVar1[iVar5].layout.unk_31c = uVar4;
      pUVar1[iVar5].layout.unk_318 = 1;
      uVar6 = UiRes_GetLayoutData(0x176);
      iVar5 = UiMgr_FindLayout(0x56);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar6;
      pUVar1[iVar5].layout.animState = 1;
    }
    MenuWnd_SetItemVisible(0);
    MenuWnd_DrawDialogText(0x56,0x36ec58,2,0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x56,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x55,0);
    if (!bVar2 && !bVar3) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar5 = *(int *)(param_1 + 0x50);
      if (((iVar5 == 9) || (iVar5 == 8)) || ((iVar5 == 2 || (iVar5 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x56,1);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x55,1);
        if (!bVar2 && !bVar3) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState(0x56,*(undefined4 *)(&DAT_0032d120 + *(int *)(param_1 + 0x1c) * 4),0,0);
    }
    iVar5 = UiMgr_FindLayout(0x56);
    iVar9 = 0;
    piVar8 = &DAT_0032d160;
    pUVar10 = &g_UiMgr->slots[iVar5].layout;
    do {
      if (*(int *)(param_1 + 8) == 3) {
        CarPreview_GetPaletteColor(auStack_8,iVar9,*(undefined4 *)(param_1 + 0x20));
      }
      else {
        CarPreview_GetColor(auStack_8,iVar9,*(undefined4 *)(param_1 + 0x20));
      }
      UiElem_Get(pUVar10,*piVar8,(uint)bStack_5,(uint)bStack_4,(uint)bStack_3);
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar9 < 0x10);
    iVar9 = -2;
    iVar5 = 0x32d198;
    do {
      if (*(int *)(param_1 + 8) == 3) {
        CarPreview_GetPaletteColor(auStack_10,*(undefined4 *)(param_1 + 0x1c));
      }
      else {
        CarPreview_GetColor(auStack_10,*(undefined4 *)(param_1 + 0x1c),
                            (*(int *)(param_1 + 0x20) + 0x2a + iVar9) % 0x2a);
      }
      UiElem_Get(pUVar10,*(int *)(iVar5 + 8),(uint)bStack_d,(uint)bStack_c,(uint)bStack_b);
      iVar9 = iVar9 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar9 < 3);
    iVar5 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x4c);
  }
  MenuWnd_DrawCursor(iVar5 == 3);
  if (*(int *)(param_1 + 8) == 3) {
    MenuWnd_DrawText(0x55,6,0x2eb);
    iVar5 = *(int *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawText(0x55,6,0x2ea);
    iVar5 = *(int *)(param_1 + 8);
  }
  if (iVar5 == 0) {
    uVar7 = 100;
  }
  else if (iVar5 == 1) {
    uVar7 = 200;
  }
  else {
    uVar7 = 0x96;
  }
  MenuWnd_DrawNumber(0x55,3,uVar7);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x55,4,uVar7);
  iVar5 = UiMgr_FindLayout(0x56);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x002568c0  size 0x5a4
void MenuScr_Draw_MazioraColour(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  iVar5 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar5 = UiMgr_FindLayout(0x5a);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,1,0x16,0);
    iVar5 = *(int *)(param_1 + 0x48);
    if ((((iVar5 == 9) || (iVar5 == 8)) || (iVar5 == 2)) || (iVar5 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar6 = UiRes_GetLayoutData(0x3b7);
      iVar5 = UiMgr_FindLayout(0x6c);
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
      uVar7 = UiRes_GetLayoutData(0x3b8);
      iVar5 = UiMgr_FindLayout(0x6c);
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
      uVar6 = UiRes_GetLayoutData(0x173);
      iVar5 = UiMgr_FindLayout(0x55);
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
      uVar7 = UiRes_GetLayoutData(0x174);
      iVar5 = UiMgr_FindLayout(0x55);
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
      uVar6 = UiRes_GetLayoutData(0x429);
      iVar5 = UiMgr_FindLayout(0x5a);
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
      uVar7 = UiRes_GetLayoutData(0x42a);
      iVar5 = UiMgr_FindLayout(0x5a);
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
    }
    MenuWnd_SetItemVisible(0);
    iVar5 = *(int *)(param_1 + 0x4c);
  }
  if (iVar5 == 3) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x6c,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x5a,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x55,0);
    if (!bVar4 && (!bVar2 && !bVar3)) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar5 = *(int *)(param_1 + 0x50);
      if (((iVar5 == 9) || (iVar5 == 8)) || ((iVar5 == 2 || (iVar5 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x6c,1);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x55,1);
        bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x5a,1);
        if (!bVar4 && (!bVar2 && !bVar3)) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
  }
  MenuWnd_DrawText(0x6c,1,0x2e3);
  if (*(int *)(param_1 + 8) == 0) {
    uVar8 = 100;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    uVar8 = 200;
  }
  else {
    uVar8 = 0x96;
  }
  MenuWnd_DrawNumber(0x55,3,uVar8);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x55,4,uVar8);
  iVar5 = UiMgr_FindLayout(0x6c);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x5a);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x00256e70  size 0x638
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_DealerColour(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  int *piVar11;
  undefined1 auStack_8 [3];
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  
  uVar10 = Profile_Get(0);
  uVar10 = Profile_GetCurrentCar(uVar10);
  uVar4 = CarRec_GetModelId(uVar10);
  iVar5 = CarDb_GetModelEntry(uVar4);
  iVar8 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar8 != 0) {
    iVar8 = *(int *)(param_1 + 0x48);
    if ((((iVar8 == 9) || (iVar8 == 8)) || (iVar8 == 2)) || (iVar8 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar7 = UiRes_GetLayoutData(0x16f);
      iVar8 = UiMgr_FindLayout(0x54);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar8].layout.unk_310 = 0xffffffff;
      pUVar1[iVar8].layout.unk_31c = 0;
      pUVar1[iVar8].layout.unk_30c = 0;
      if (pUVar1[iVar8].layout.unk_31c == 0) {
        pUVar1[iVar8].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar8].layout.unk_318 = 1;
      }
      pUVar1[iVar8].layout.unk_30c = 0;
      if (pUVar1[iVar8].layout.unk_31c == 0) {
        pUVar1[iVar8].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar8].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x314 = 0;
      pUVar1[iVar8].layout.unk_31c = uVar7;
      pUVar1[iVar8].layout.unk_318 = 1;
      uVar9 = UiRes_GetLayoutData(0x170);
      iVar8 = UiMgr_FindLayout(0x54);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar8].layout.field_0x330 == 0) {
        pUVar1[iVar8].layout.animState = 0;
      }
      else {
        pUVar1[iVar8].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar8].layout.field_0x330 == 0) {
        pUVar1[iVar8].layout.animState = 0;
      }
      else {
        pUVar1[iVar8].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar9;
      pUVar1[iVar8].layout.animState = 1;
      uVar7 = UiRes_GetLayoutData(0x173);
      iVar8 = UiMgr_FindLayout(0x55);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar8].layout.unk_310 = 0xffffffff;
      pUVar1[iVar8].layout.unk_31c = 0;
      pUVar1[iVar8].layout.unk_30c = 0;
      if (pUVar1[iVar8].layout.unk_31c == 0) {
        pUVar1[iVar8].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar8].layout.unk_318 = 1;
      }
      pUVar1[iVar8].layout.unk_30c = 0;
      if (pUVar1[iVar8].layout.unk_31c == 0) {
        pUVar1[iVar8].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar8].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x314 = 0;
      pUVar1[iVar8].layout.unk_31c = uVar7;
      pUVar1[iVar8].layout.unk_318 = 1;
      uVar9 = UiRes_GetLayoutData(0x174);
      iVar8 = UiMgr_FindLayout(0x55);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar8].layout.field_0x330 == 0) {
        pUVar1[iVar8].layout.animState = 0;
      }
      else {
        pUVar1[iVar8].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar8].layout.field_0x330 == 0) {
        pUVar1[iVar8].layout.animState = 0;
      }
      else {
        pUVar1[iVar8].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar9;
      pUVar1[iVar8].layout.animState = 1;
    }
    MenuWnd_SetItemVisible(0);
    iVar8 = 0;
    if (0 < iVar5) {
      piVar11 = &DAT_0032d0b0;
      do {
        iVar6 = UiMgr_FindLayout(0x54);
        pUVar1 = g_UiMgr->slots;
        CarDb_GetPartEntry(auStack_8,uVar4,iVar8,0);
        UiElem_Get(&pUVar1[iVar6].layout,*piVar11,(uint)bStack_5,(uint)bStack_4,(uint)bStack_3);
        iVar8 = iVar8 + 1;
        piVar11 = piVar11 + 1;
      } while (iVar8 < iVar5);
    }
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x54,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x55,0);
    if (!bVar2 && !bVar3) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar8 = *(int *)(param_1 + 0x50);
      if (((iVar8 == 9) || (iVar8 == 8)) || ((iVar8 == 2 || (iVar8 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x54,1);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x55,1);
        if (!bVar2 && !bVar3) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState(0x54,*(undefined4 *)(&DAT_0032d080 + *(int *)(param_1 + 0x18) * 4),0,0);
    }
  }
  iVar8 = UiMgr_FindLayout(0x54);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x34,8,extraout_a3_lo);
  iVar8 = UiMgr_FindLayout(0x54);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x36,8,extraout_a3_lo_00);
  iVar8 = 0;
  piVar11 = &DAT_0032d0e0;
  do {
    if (iVar8 < iVar5) {
      iVar6 = UiMgr_FindLayout(0x54);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,(long)*piVar11,8,extraout_a3_lo_01);
    }
    else {
      iVar6 = UiMgr_FindLayout(0x54);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,(long)*piVar11,8,extraout_a3_lo_02);
    }
    iVar8 = iVar8 + 1;
    piVar11 = piVar11 + 1;
  } while (iVar8 < 0xc);
  MenuWnd_DrawText(0x55,6,0x2e2);
  if (*(int *)(param_1 + 8) == 0) {
    uVar10 = 100;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    uVar10 = 200;
  }
  else {
    uVar10 = 0x96;
  }
  MenuWnd_DrawNumber(0x55,3,uVar10);
  uVar10 = Profile_Get(0);
  uVar10 = Profile_GetMoney(uVar10);
  MenuWnd_DrawNumber(0x55,4,uVar10);
  iVar8 = UiMgr_FindLayout(0x54);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  return;
}

// 0x002574b0  size 0xeb8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_PartShop_DrawDetails(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  int *piVar16;
  UiLayout *pUVar17;
  
  iVar7 = MsgId_ForMenu(*(int *)(param_1 + 0xc) + 1U & 0xff);
  iVar9 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar9 != 0) {
    if (*(int *)(param_1 + 0x4c) == 3) {
      uVar8 = UiRes_GetLayoutData(0x25f);
      iVar9 = UiMgr_FindLayout(0x4f);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x338 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x33c = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar8;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
      uVar8 = UiRes_GetLayoutData(0x260);
      iVar9 = UiMgr_FindLayout(0x4f);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x34c = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x350 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = uVar8;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
      uVar10 = UiRes_GetLayoutData(0x140);
      iVar9 = UiMgr_FindLayout(0x68);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar9].layout.unk_310 = 0xffffffff;
      pUVar1[iVar9].layout.unk_31c = 0;
      pUVar1[iVar9].layout.unk_30c = 0;
      if (pUVar1[iVar9].layout.unk_31c == 0) {
        pUVar1[iVar9].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar9].layout.unk_318 = 1;
      }
      pUVar1[iVar9].layout.unk_30c = 0;
      if (pUVar1[iVar9].layout.unk_31c == 0) {
        pUVar1[iVar9].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar9].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x314 = 0;
      pUVar1[iVar9].layout.unk_31c = uVar10;
      pUVar1[iVar9].layout.unk_318 = 1;
      uVar8 = UiRes_GetLayoutData(0x141);
      iVar9 = UiMgr_FindLayout(0x68);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
        pUVar1[iVar9].layout.animState = 0;
      }
      else {
        pUVar1[iVar9].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
        pUVar1[iVar9].layout.animState = 0;
      }
      else {
        pUVar1[iVar9].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar8;
      pUVar1[iVar9].layout.animState = 1;
    }
    iVar9 = *(int *)(param_1 + 0x48);
    if ((((iVar9 == 9) || (iVar9 == 8)) || (iVar9 == 2)) || (iVar9 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar8 = UiRes_GetLayoutData(0x142);
      iVar9 = UiMgr_FindLayout(0x68);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x338 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x33c = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar8;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
      uVar8 = UiRes_GetLayoutData(0x143);
      iVar9 = UiMgr_FindLayout(0x68);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x34c = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x350 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = uVar8;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
      uVar8 = UiRes_GetLayoutData(0x144);
      iVar9 = UiMgr_FindLayout(0x68);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x360 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x36c = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x35c = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x35c = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x364 = 1;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x36c = uVar8;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
      uVar10 = UiRes_GetLayoutData(0x161);
      iVar9 = UiMgr_FindLayout(0x4f);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar9].layout.unk_310 = 0xffffffff;
      pUVar1[iVar9].layout.unk_31c = 0;
      pUVar1[iVar9].layout.unk_30c = 0;
      if (pUVar1[iVar9].layout.unk_31c == 0) {
        pUVar1[iVar9].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar9].layout.unk_318 = 1;
      }
      pUVar1[iVar9].layout.unk_30c = 0;
      if (pUVar1[iVar9].layout.unk_31c == 0) {
        pUVar1[iVar9].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar9].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x314 = 0;
      pUVar1[iVar9].layout.unk_31c = uVar10;
      pUVar1[iVar9].layout.unk_318 = 1;
      uVar8 = UiRes_GetLayoutData(0x162);
      iVar9 = UiMgr_FindLayout(0x4f);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
        pUVar1[iVar9].layout.animState = 0;
      }
      else {
        pUVar1[iVar9].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
        pUVar1[iVar9].layout.animState = 0;
      }
      else {
        pUVar1[iVar9].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar8;
      pUVar1[iVar9].layout.animState = 1;
      uVar10 = UiRes_GetLayoutData(0x40b);
      iVar9 = UiMgr_FindLayout(0x59);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar9].layout.unk_310 = 0xffffffff;
      pUVar1[iVar9].layout.unk_31c = 0;
      pUVar1[iVar9].layout.unk_30c = 0;
      if (pUVar1[iVar9].layout.unk_31c == 0) {
        pUVar1[iVar9].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar9].layout.unk_318 = 1;
      }
      pUVar1[iVar9].layout.unk_30c = 0;
      if (pUVar1[iVar9].layout.unk_31c == 0) {
        pUVar1[iVar9].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar9].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x314 = 0;
      pUVar1[iVar9].layout.unk_31c = uVar10;
      pUVar1[iVar9].layout.unk_318 = 1;
      uVar8 = UiRes_GetLayoutData(0x40c);
      iVar9 = UiMgr_FindLayout(0x59);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
        pUVar1[iVar9].layout.animState = 0;
      }
      else {
        pUVar1[iVar9].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
        pUVar1[iVar9].layout.animState = 0;
      }
      else {
        pUVar1[iVar9].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar8;
      pUVar1[iVar9].layout.animState = 1;
    }
    MenuWnd_SetItemVisible(0);
    MenuWnd_DrawDialogText(0x68,0x36ec50,2,0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    if (*(int *)(param_1 + 0x48) == 8) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x68,0);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x4f,0);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x59,0);
      if (!bVar4 && (!bVar2 && !bVar3)) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x68,0);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x4f,3);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar9 = *(int *)(param_1 + 0x50);
    if (((iVar9 == 9) || (iVar9 == 8)) || ((iVar9 == 2 || (iVar9 == 1)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x68,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x4f,1);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x59,1);
      if (!bVar4 && (!bVar2 && !bVar3)) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x4c) == 3) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x4f,2);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x68,1);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    MenuWnd_DrawCursor(9 < iVar7);
    iVar9 = *(int *)(param_1 + 0x4c);
  }
  else {
    MenuWnd_DrawCursor(0);
    iVar9 = *(int *)(param_1 + 0x4c);
  }
  if (iVar9 == 3) {
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState(0x68,*(undefined4 *)(&LAB_0032d050 + *(int *)(param_1 + 0x38) * 4),0,0);
    }
    iVar9 = MsgId_ForMenuHelp(*(int *)(param_1 + 0xc) + 1U & 0xff);
    iVar11 = iVar7 + (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x38));
    iVar13 = 0;
    piVar16 = &DAT_0032d020;
    while( true ) {
      iVar12 = iVar7;
      if (8 < iVar7) {
        iVar12 = 9;
      }
      if (iVar12 <= iVar13) break;
      sVar6 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),iVar11 % iVar7 + iVar9);
      iVar12 = UiMgr_FindLayout(0x68);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar12].layout,(long)*piVar16,0x16,sVar6 + -0xa8);
      iVar11 = iVar11 % iVar7 + 1;
      piVar16 = piVar16 + 1;
      iVar13 = iVar13 + 1;
    }
    iVar9 = UiMgr_FindLayout(0x68);
    pUVar17 = &g_UiMgr->slots[iVar9].layout;
    if (iVar7 < 10) {
      UiElem_SetPropFloat(pUVar17,4,1,extraout_a3_lo);
      UiElem_SetPropFloat(pUVar17,4,6,extraout_a3_lo_06);
      iVar9 = UiMgr_FindLayout(0x68);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,3,8,extraout_a3_lo_07);
LAB_002580a4:
      iVar9 = *(int *)(param_1 + 0x2c);
    }
    else {
      if (iVar7 < (iVar7 + (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x38))) % iVar7 + 9) {
        UiElem_SetPropFloat(pUVar17,4,1,extraout_a3_lo);
        UiElem_SetPropFloat(pUVar17,4,6,extraout_a3_lo_02);
        UiElem_SetPropFloat(pUVar17,3,1,extraout_a3_lo_03);
        UiElem_SetPropFloat(pUVar17,3,6,extraout_a3_lo_04);
        iVar9 = UiMgr_FindLayout(0x68);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,3,8,extraout_a3_lo_05);
        goto LAB_002580a4;
      }
      UiElem_SetPropFloat(pUVar17,4,1,extraout_a3_lo);
      UiElem_SetPropFloat(pUVar17,4,6,extraout_a3_lo_00);
      iVar9 = UiMgr_FindLayout(0x68);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,3,8,extraout_a3_lo_01);
      iVar9 = *(int *)(param_1 + 0x2c);
    }
    if (iVar9 == 3) {
      Menu_ClearSlot(0);
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x68,2);
      if (bVar2) {
        iVar9 = *(int *)(param_1 + 0x28);
        iVar11 = *(int *)(param_1 + 0x38);
        iVar13 = MsgId_ForMenuHelp(*(int *)(param_1 + 0xc) + 1U & 0xff);
        sVar6 = maybe_CarModel_IsBossCar
                          (*(undefined4 *)(param_1 + 4),
                           (iVar7 + (iVar9 - iVar11) + -1) % iVar7 + iVar13);
        iVar9 = UiMgr_FindLayout(0x68);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar9].layout,(long)DAT_0032d044,0x16,sVar6 + -0xa8);
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 4;
        iVar9 = UiMgr_FindLayout(0x68);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar9].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
    }
    else {
      if (iVar9 != 2) {
        uVar8 = *(undefined4 *)(param_1 + 0x10);
        goto LAB_00257d98;
      }
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x68,3);
      if (bVar2) {
        iVar9 = *(int *)(param_1 + 0x28);
        iVar11 = *(int *)(param_1 + 0x38);
        iVar13 = MsgId_ForMenuHelp(*(int *)(param_1 + 0xc) + 1U & 0xff);
        sVar6 = maybe_CarModel_IsBossCar
                          (*(undefined4 *)(param_1 + 4),
                           (iVar7 + (iVar9 - iVar11) + 9) % iVar7 + iVar13);
        iVar9 = UiMgr_FindLayout(0x68);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar9].layout,(long)DAT_0032d044,0x16,sVar6 + -0xa8);
      }
      else {
        Menu_ClearSlot(0);
        *(undefined4 *)(param_1 + 0x2c) = 4;
        iVar9 = UiMgr_FindLayout(0x68);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar9].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar9].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
    }
  }
  uVar8 = *(undefined4 *)(param_1 + 0x10);
LAB_00257d98:
  uVar14 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),uVar8);
  uVar14 = Garage_ComputeCarStats(uVar14,0);
  MenuWnd_DrawNumber(0x4f,4,uVar14);
  uVar14 = Profile_Get(0);
  uVar14 = Profile_GetMoney(uVar14);
  MenuWnd_DrawNumber(0x4f,3,uVar14);
  uVar5 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x4c) == 3) {
    maybe_Wheel_DrawList(uVar5,iVar7,1,0);
  }
  else {
    maybe_Wheel_DrawList(uVar5,iVar7,0,0);
  }
  iVar9 = UiMgr_FindLayout(0x4f);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  lVar15 = maybe_MenuText_CurrentCarSpec(*(undefined4 *)(param_1 + 4));
  if (lVar15 == 0) {
    iVar9 = UiMgr_FindLayout(0x59);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  }
  return;
}

