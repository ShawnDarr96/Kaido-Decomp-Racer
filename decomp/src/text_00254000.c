// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00254000 - 0x00258000
#include "ghidra_types.h"

// 0x00254100  size 0x10a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectSectionTo(int param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  UiLayout *pUVar13;
  UiLayout *pUVar14;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  iVar5 = UiMgr_FindLayout(0x83);
  pUVar14 = &g_UiMgr->slots[iVar5].layout;
  iVar6 = UiMgr_FindLayout(7);
  iVar5 = *(int *)(param_1 + 0x65c);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  pUVar13 = &pUVar1[iVar6].layout;
  if (iVar5 != 0) {
    uVar8 = UiRes_GetLayoutData(0x82);
    iVar5 = UiMgr_FindLayout(0x81);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar8;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x82);
    iVar5 = UiMgr_FindLayout(0x82);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar8;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x85);
    iVar5 = UiMgr_FindLayout(0x83);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar8;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x86);
    iVar5 = UiMgr_FindLayout(0x83);
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
    uVar8 = UiRes_GetLayoutData(0x88);
    iVar5 = UiMgr_FindLayout(0x83);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0x87);
    iVar5 = UiMgr_FindLayout(0x83);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = uVar8;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    uVar8 = UiRes_GetLayoutData(0x83);
    iVar5 = UiMgr_FindLayout(0x83);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x36c = uVar8;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    uVar8 = UiRes_GetLayoutData(0x84);
    iVar5 = UiMgr_FindLayout(0x83);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x380 = uVar8;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x648) == 4) {
      UiElem_SetPropFloat(0x3f800000,pUVar13,0x25,8);
      UiElem_SetPropFloat(0x3f800000,pUVar13,0x24,8);
    }
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  lVar9 = UiLayout_UpdateAnimById(0x83,0);
  lVar10 = UiLayout_UpdateAnimById(0x83,1);
  if (lVar9 == 0 && lVar10 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    lVar9 = UiLayout_UpdateAnimById(0x83,2);
    lVar10 = UiLayout_UpdateAnimById(0x83,3);
    if (lVar9 == 0 && lVar10 == 0) {
      *(undefined4 *)(param_1 + 0x660) = 0;
    }
  }
  uVar11 = Race_GetCourseVariant();
  iVar5 = MsgId_ForOption(uVar11);
  UiElem_SetPropInt(pUVar14,0x5f,0x16,*(undefined4 *)(&DAT_0032c010 + iVar5 * 4));
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x83,*(undefined4 *)(&DAT_0032bff0 + *(int *)(param_1 + 0x62c) * 4),1,0);
  }
  UiElem_SetPropInt(pUVar14,0x1a,9,*(undefined4 *)(param_1 + 0x62c));
  UiElem_SetPropInt(pUVar14,0x1d,9,*(undefined4 *)(param_1 + 0x62c));
  _s_SectionSelA = 0;
  do {
    _s_SectionSelB = 0;
    do {
      lVar9 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
      if (lVar9 == -1) {
        UiElem_SetPropFloat(0,pUVar14,
                            *(undefined4 *)(_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),8
                           );
        UiElem_SetPropFloat(0,pUVar14,
                            *(undefined4 *)(_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c0b0),8
                           );
      }
      else {
        uVar3 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
        uVar11 = RivalDb_Get(uVar3);
        cVar2 = RivalRec_GetTeam(uVar11);
        if ((cVar2 == '\x06') || (cVar2 == '\x05')) {
          uVar3 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
          uVar11 = RivalDb_Get(uVar3);
          uVar7 = RivalRec_GetTeam(uVar11);
          UiElem_SetPropInt(pUVar14,*(undefined4 *)
                                     (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),9,
                            *(undefined4 *)(&DAT_0032c130 + (uVar7 & 0xff) * 4));
          UiElem_SetPropFloat(0x3f666666,pUVar14,
                              *(undefined4 *)(_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030)
                              ,8);
          UiElem_SetPropFloat(0x3f800000,pUVar14,
                              *(undefined4 *)(_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c0b0)
                              ,8);
        }
        else if (cVar2 == '\x01') {
          uVar3 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
          uVar11 = RivalDb_Get(uVar3);
          sVar4 = RivalRec_GetId(uVar11);
          iVar5 = Profile_Get(0);
          if (*(short *)(iVar5 + sVar4 * 2 + 0x4b7c) < 1) {
            uVar3 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
            uVar11 = RivalDb_Get(uVar3);
            uVar7 = RivalRec_GetTeam(uVar11);
            UiElem_SetPropInt(pUVar14,*(undefined4 *)
                                       (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),9,
                              *(undefined4 *)(&DAT_0032c130 + (uVar7 & 0xff) * 4));
            UiElem_SetPropFloat(0x3f666666,pUVar14,
                                *(undefined4 *)
                                 (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),8);
          }
          else {
            UiElem_SetPropInt(pUVar14,*(undefined4 *)
                                       (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),9,0);
            UiElem_SetPropFloat(0x3ecccccd,pUVar14,
                                *(undefined4 *)
                                 (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),8);
          }
          UiElem_SetPropFloat(0x3f800000,pUVar14,
                              *(undefined4 *)(_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c0b0)
                              ,8);
        }
        else if (cVar2 == '\0') {
          uVar3 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
          uVar11 = RivalDb_Get(uVar3);
          sVar4 = RivalRec_GetId(uVar11);
          iVar5 = Profile_Get(0);
          if (*(short *)(iVar5 + sVar4 * 2 + 0x4b7c) < 1) {
            uVar3 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
            uVar11 = RivalDb_Get(uVar3);
            lVar9 = RivalRec_IsValid(uVar11);
            if (lVar9 == 0) goto LAB_00254538;
            UiElem_SetPropInt(pUVar14,*(undefined4 *)
                                       (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),9,1);
            UiElem_SetPropFloat(0x3f666666,pUVar14,
                                *(undefined4 *)
                                 (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),8);
          }
          else {
LAB_00254538:
            uVar3 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
            uVar11 = RivalDb_Get(uVar3);
            uVar7 = RivalRec_GetTeam(uVar11);
            UiElem_SetPropInt(pUVar14,*(undefined4 *)
                                       (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),9,
                              *(undefined4 *)(&DAT_0032c130 + (uVar7 & 0xff) * 4));
            uVar11 = Profile_Get(0);
            uVar12 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
            sVar4 = Profile_GetRivalBattleCount(uVar11,uVar12);
            if (sVar4 < 1) {
              UiElem_SetPropFloat(0x3f666666,pUVar14,
                                  *(undefined4 *)
                                   (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),8);
            }
            else {
              UiElem_SetPropFloat(0x3ecccccd,pUVar14,
                                  *(undefined4 *)
                                   (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),8);
            }
          }
          UiElem_SetPropFloat(0x3f800000,pUVar14,
                              *(undefined4 *)(_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c0b0)
                              ,8);
        }
        else if (cVar2 == '\r') {
          UiElem_SetPropFloat(0,pUVar14,
                              *(undefined4 *)(_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030)
                              ,8);
          UiElem_SetPropFloat(0,pUVar14,
                              *(undefined4 *)(_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c0b0)
                              ,8);
        }
        else {
          uVar3 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
          uVar11 = RivalDb_Get(uVar3);
          uVar7 = RivalRec_GetTeam(uVar11);
          UiElem_SetPropInt(pUVar14,*(undefined4 *)
                                     (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),9,
                            *(undefined4 *)(&DAT_0032c130 + (uVar7 & 0xff) * 4));
          uVar11 = Profile_Get(0);
          uVar12 = RivalSchedule_Get(_s_SectionSelA,_s_SectionSelB);
          sVar4 = Profile_GetRivalBattleCount(uVar11,uVar12);
          if (sVar4 < 1) {
            UiElem_SetPropFloat(0x3f666666,pUVar14,
                                *(undefined4 *)
                                 (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),8);
          }
          else {
            UiElem_SetPropFloat(0x3ecccccd,pUVar14,
                                *(undefined4 *)
                                 (_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c030),8);
          }
          UiElem_SetPropFloat(0x3f800000,pUVar14,
                              *(undefined4 *)(_s_SectionSelB * 4 + _s_SectionSelA * 0x18 + 0x32c0b0)
                              ,8);
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
      cVar2 = Profile_GetChapter(uVar11);
      if (cVar2 == '\0') {
        UiLayout_UpdateAnimById(0x81,0);
        iVar5 = UiMgr_FindLayout(0x81);
        UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
        iVar5 = UiMgr_FindLayout(0x83);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,0x5d,9,1);
        iVar5 = *(int *)(param_1 + 0x64c);
      }
      else {
        UiLayout_UpdateAnimById(0x82,0);
        iVar5 = UiMgr_FindLayout(0x82);
        UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
        iVar5 = UiMgr_FindLayout(0x83);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,0x5d,9,0);
        iVar5 = *(int *)(param_1 + 0x64c);
      }
      if (iVar5 == *(int *)(param_1 + 0x650)) {
        UiLayout_UpdateAnimById(0x83,4);
        UiLayout_UpdateAnimById(0x83,5);
      }
      else {
        UiElem_SetPropFloat(0,pUVar14,0x1a,8);
        UiElem_SetPropFloat(0,pUVar14,0x1d,8);
      }
      iVar5 = UiMgr_FindLayout(0x83);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
      return;
    }
  } while( true );
}

// 0x002551c0  size 0x8dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_CategoryRace_51c0(int param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  UiLayout *pUVar7;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  iVar3 = UiMgr_FindLayout(0x78);
  pUVar7 = &g_UiMgr->slots[iVar3].layout;
  UiElem_SetPropFloat(0,pUVar7,0x47,8);
  UiElem_SetPropFloat(0,pUVar7,0x48,8);
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x3a);
    iVar3 = UiMgr_FindLayout(0x79);
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
    uVar4 = UiRes_GetLayoutData(0x432);
    iVar3 = UiMgr_FindLayout(0x79);
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
    uVar4 = UiRes_GetLayoutData(0x3b);
    iVar3 = UiMgr_FindLayout(0x79);
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
    uVar4 = UiRes_GetLayoutData(0x291);
    iVar3 = UiMgr_FindLayout(0x79);
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
    iVar3 = *(int *)(param_1 + 0x648);
    if (((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) ||
        (((iVar3 == 0x14 || (iVar3 == 0x15)) ||
         ((iVar3 == 0x29 || ((iVar3 == 0x2a || (iVar3 == 0x2b)))))))) ||
       ((iVar3 == 0x20 ||
        ((((iVar3 == 0x1f || (iVar3 == 0x21)) || (iVar3 == 0x2b)) ||
         (g_MenuMgr->prevScreen == 0xfffffffe)))))) {
      iVar3 = UiMgr_FindLayout(0x78);
      pUVar1 = g_UiMgr->slots;
      uVar6 = UiRes_GetLayoutData(*(int *)(param_1 + 0x6b0) + 0x34);
      UiLayout_PlayAnim(&pUVar1[iVar3].layout,uVar6);
    }
    else {
      iVar3 = UiMgr_FindLayout(0x78);
      if (*(int *)&g_UiMgr->slots[iVar3].layout.field_0x340 == 0) {
        *(undefined4 *)(param_1 + 0x6b0) = 0;
      }
      else {
        iVar3 = UiMgr_FindLayout(0x78);
        if (*(int *)&g_UiMgr->slots[iVar3].layout.field_0x354 == 0) {
          *(undefined4 *)(param_1 + 0x6b0) = 1;
        }
        else {
          iVar3 = UiMgr_FindLayout(0x78);
          if (*(int *)&g_UiMgr->slots[iVar3].layout.field_0x368 == 0) {
            *(undefined4 *)(param_1 + 0x6b0) = 2;
          }
          else {
            iVar3 = UiMgr_FindLayout(0x78);
            if (*(int *)&g_UiMgr->slots[iVar3].layout.field_0x37c == 0) {
              *(undefined4 *)(param_1 + 0x6b0) = 3;
            }
            else {
              *(undefined4 *)(param_1 + 0x6b0) = 0;
            }
          }
        }
      }
      iVar3 = UiMgr_FindLayout(0x78);
      pUVar1 = g_UiMgr->slots;
      uVar6 = UiRes_GetLayoutData(*(int *)(param_1 + 0x6b0) + 0x34);
      UiLayout_PlayAnim(&pUVar1[iVar3].layout,uVar6);
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  if (*(int *)(param_1 + 0x648) == 2) {
    lVar5 = UiLayout_UpdateAnimById(0x79,3);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0x79,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x79,*(undefined4 *)(&DAT_0032bfe0 + *(int *)(param_1 + 0x62c) * 4),1,0);
    iVar3 = *(int *)(param_1 + 0x660);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x660);
  }
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x640) == 0xb) {
      *(undefined4 *)(param_1 + 0x660) = 0;
      g_MenuMgr->unk_05a0 = 1;
      g_MenuMgr->unk_05e8 = 1;
      g_MenuMgr->unk_060c = 1;
      g_MenuMgr->unk_0634 = 1;
      g_MenuMgr->unk_0644 = 1;
    }
    else if (*(int *)(param_1 + 0x650) == 2) {
      lVar5 = UiLayout_UpdateAnimById(0x79);
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0x79,1);
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
  }
  uVar6 = Race_GetCourseVariant();
  iVar3 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(pUVar7,0x3d,0x16,*(undefined4 *)(&DAT_0032bfc0 + iVar3 * 4));
  uVar6 = Race_GetCourseVariant();
  iVar3 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(pUVar7,0x3e,0x16,*(undefined4 *)(&DAT_0032bfc0 + iVar3 * 4));
  uVar6 = Race_GetCourseVariant();
  iVar3 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(pUVar7,0x3f,0x16,*(undefined4 *)(&DAT_0032bfc0 + iVar3 * 4));
  uVar6 = Race_GetCourseVariant();
  iVar3 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(pUVar7,0x40,0x16,*(undefined4 *)(&DAT_0032bfc0 + iVar3 * 4));
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x42,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x43,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x44,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x45,uVar6);
  uVar6 = Profile_Get(0);
  cVar2 = Profile_GetChapter(uVar6);
  if (cVar2 == '\0') {
    MenuWnd_DrawText(0x79,0x18,0xe0);
  }
  else {
    MenuWnd_DrawTextId(0x79,0x18,3,0xe0);
  }
  MenuWnd_DrawText(0x79,0x19,0x355);
  MenuWnd_DrawText(0x79,0x1a,0x356);
  MenuWnd_DrawText(0x79,0x1b,0x357);
  if (*(int *)(param_1 + 0x644) != 0) {
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032bfb0 + *(int *)(param_1 + 0x62c) * 4));
  }
  UiElem_SetPropFloat(0,pUVar7,1,8);
  UiElem_SetPropFloat(0,pUVar7,0xb,8);
  UiElem_SetPropFloat(0,pUVar7,0x15,8);
  UiElem_SetPropFloat(0,pUVar7,0x1f,8);
  iVar3 = UiMgr_FindLayout(0x77);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x78);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x79);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
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
  long lVar1;
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
  if (((g_MenuMgr->flags & 4) == 0) && (lVar1 = UiLayout_UpdateAnimById(0x79,1), lVar1 == 0)) {
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
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = UiLayout_UpdateAnimById(0x43,0);
  lVar4 = UiLayout_UpdateAnimById(0x43,1);
  if (lVar3 == 0 && lVar4 == 0) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  MenuWnd_DrawText(0x43,0x1a,0x2a1);
  MenuWnd_DrawText(0x43,0x1b,0x2a2);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x43,*(undefined4 *)(*param_1 * 4 + 0x36ec00),1,0);
  }
  UiLayout_UpdateAnimById(0x42,0);
  iVar2 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x43);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
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
    lVar3 = UiLayout_UpdateAnimById(0x43,uVar5);
    lVar4 = UiLayout_UpdateAnimById(0x43,2);
    if (lVar3 == 0 && lVar4 == 0) {
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
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x97);
  iVar3 = UiMgr_FindLayout(0x42);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
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
  }
  uVar2 = UiRes_GetLayoutData(0x98);
  iVar3 = UiMgr_FindLayout(0x43);
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
  uVar2 = UiRes_GetLayoutData(0x99);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
  pUVar1[iVar3].layout.animState = 1;
  uVar2 = UiRes_GetLayoutData(0x9b);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
  uVar2 = UiRes_GetLayoutData(0x9a);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
  uVar2 = UiRes_GetLayoutData(0x9c);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  uVar2 = UiRes_GetLayoutData(0x9d);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = uVar2;
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
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  UiLayout *pUVar10;
  undefined1 auStack_10 [3];
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 auStack_8 [3];
  undefined1 uStack_5;
  undefined1 uStack_4;
  undefined1 uStack_3;
  
  iVar4 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x48);
    if ((((iVar4 == 9) || (iVar4 == 8)) || (iVar4 == 2)) || (iVar4 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar3 = UiRes_GetLayoutData(0x173);
      iVar4 = UiMgr_FindLayout(0x55);
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
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar3;
      pUVar1[iVar4].layout.unk_318 = 1;
      uVar3 = UiRes_GetLayoutData(0x174);
      iVar4 = UiMgr_FindLayout(0x55);
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
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar3;
      pUVar1[iVar4].layout.animState = 1;
      uVar3 = UiRes_GetLayoutData(0x175);
      iVar4 = UiMgr_FindLayout(0x56);
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
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar3;
      pUVar1[iVar4].layout.unk_318 = 1;
      uVar3 = UiRes_GetLayoutData(0x176);
      iVar4 = UiMgr_FindLayout(0x56);
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
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar3;
      pUVar1[iVar4].layout.animState = 1;
    }
    MenuWnd_SetItemVisible(0);
    MenuWnd_DrawDialogText(0x56,0x36ec58,2,0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    lVar5 = UiLayout_UpdateAnimById(0x56,0);
    lVar6 = UiLayout_UpdateAnimById(0x55,0);
    if (lVar5 == 0 && lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar4 = *(int *)(param_1 + 0x50);
      if (((iVar4 == 9) || (iVar4 == 8)) || ((iVar4 == 2 || (iVar4 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        lVar5 = UiLayout_UpdateAnimById(0x56,1);
        lVar6 = UiLayout_UpdateAnimById(0x55,1);
        if (lVar5 == 0 && lVar6 == 0) {
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
    iVar4 = UiMgr_FindLayout(0x56);
    iVar9 = 0;
    puVar8 = &DAT_0032d160;
    pUVar10 = &g_UiMgr->slots[iVar4].layout;
    do {
      if (*(int *)(param_1 + 8) == 3) {
        CarPreview_GetPaletteColor(auStack_8,iVar9,*(undefined4 *)(param_1 + 0x20));
      }
      else {
        CarPreview_GetColor(auStack_8,iVar9,*(undefined4 *)(param_1 + 0x20));
      }
      UiElem_Get(pUVar10,*puVar8,uStack_5,uStack_4,uStack_3);
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar9 < 0x10);
    iVar9 = -2;
    iVar4 = 0x32d198;
    do {
      if (*(int *)(param_1 + 8) == 3) {
        CarPreview_GetPaletteColor(auStack_10,*(undefined4 *)(param_1 + 0x1c));
      }
      else {
        CarPreview_GetColor(auStack_10,*(undefined4 *)(param_1 + 0x1c),
                            (*(int *)(param_1 + 0x20) + 0x2a + iVar9) % 0x2a);
      }
      UiElem_Get(pUVar10,*(undefined4 *)(iVar4 + 8),uStack_d,uStack_c,uStack_b);
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar9 < 3);
    iVar4 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4c);
  }
  MenuWnd_DrawCursor(iVar4 == 3);
  if (*(int *)(param_1 + 8) == 3) {
    MenuWnd_DrawText(0x55,6,0x2eb);
    iVar4 = *(int *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawText(0x55,6,0x2ea);
    iVar4 = *(int *)(param_1 + 8);
  }
  if (iVar4 == 0) {
    uVar7 = 100;
  }
  else if (iVar4 == 1) {
    uVar7 = 200;
  }
  else {
    uVar7 = 0x96;
  }
  MenuWnd_DrawNumber(0x55,3,uVar7);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x55,4,uVar7);
  iVar4 = UiMgr_FindLayout(0x56);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002568c0  size 0x5a4
void MenuScr_Draw_MazioraColour(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar3 = UiMgr_FindLayout(0x5a);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,1,0x16,0);
    iVar3 = *(int *)(param_1 + 0x48);
    if ((((iVar3 == 9) || (iVar3 == 8)) || (iVar3 == 2)) || (iVar3 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar4 = UiRes_GetLayoutData(0x3b7);
      iVar3 = UiMgr_FindLayout(0x6c);
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
      uVar4 = UiRes_GetLayoutData(0x3b8);
      iVar3 = UiMgr_FindLayout(0x6c);
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
      uVar4 = UiRes_GetLayoutData(0x173);
      iVar3 = UiMgr_FindLayout(0x55);
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
      uVar4 = UiRes_GetLayoutData(0x174);
      iVar3 = UiMgr_FindLayout(0x55);
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
      uVar4 = UiRes_GetLayoutData(0x429);
      iVar3 = UiMgr_FindLayout(0x5a);
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
      uVar4 = UiRes_GetLayoutData(0x42a);
      iVar3 = UiMgr_FindLayout(0x5a);
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
    }
    MenuWnd_SetItemVisible(0);
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  if (iVar3 == 3) {
    lVar5 = UiLayout_UpdateAnimById(0x6c,0);
    lVar6 = UiLayout_UpdateAnimById(0x5a,0);
    lVar7 = UiLayout_UpdateAnimById(0x55,0);
    if (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar3 = *(int *)(param_1 + 0x50);
      if (((iVar3 == 9) || (iVar3 == 8)) || ((iVar3 == 2 || (iVar3 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        lVar5 = UiLayout_UpdateAnimById(0x6c,1);
        lVar6 = UiLayout_UpdateAnimById(0x55,1);
        lVar7 = UiLayout_UpdateAnimById(0x5a,1);
        if (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)) {
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
  iVar3 = UiMgr_FindLayout(0x6c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x5a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x00256e70  size 0x638
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_DealerColour(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined1 auStack_8 [3];
  undefined1 uStack_5;
  undefined1 uStack_4;
  undefined1 uStack_3;
  
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCurrentCar(uVar8);
  uVar3 = CarRec_GetModelId(uVar8);
  iVar4 = CarDb_GetModelEntry(uVar3);
  iVar7 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar7 != 0) {
    iVar7 = *(int *)(param_1 + 0x48);
    if ((((iVar7 == 9) || (iVar7 == 8)) || (iVar7 == 2)) || (iVar7 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar6 = UiRes_GetLayoutData(0x16f);
      iVar7 = UiMgr_FindLayout(0x54);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = uVar6;
      pUVar1[iVar7].layout.unk_318 = 1;
      uVar6 = UiRes_GetLayoutData(0x170);
      iVar7 = UiMgr_FindLayout(0x54);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar6;
      pUVar1[iVar7].layout.animState = 1;
      uVar6 = UiRes_GetLayoutData(0x173);
      iVar7 = UiMgr_FindLayout(0x55);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = uVar6;
      pUVar1[iVar7].layout.unk_318 = 1;
      uVar6 = UiRes_GetLayoutData(0x174);
      iVar7 = UiMgr_FindLayout(0x55);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar6;
      pUVar1[iVar7].layout.animState = 1;
    }
    MenuWnd_SetItemVisible(0);
    iVar7 = 0;
    if (0 < iVar4) {
      puVar11 = &DAT_0032d0b0;
      do {
        iVar5 = UiMgr_FindLayout(0x54);
        pUVar1 = g_UiMgr->slots;
        CarDb_GetPartEntry(auStack_8,uVar3,iVar7,0);
        UiElem_Get(&pUVar1[iVar5].layout,*puVar11,uStack_5,uStack_4,uStack_3);
        iVar7 = iVar7 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar7 < iVar4);
    }
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    lVar9 = UiLayout_UpdateAnimById(0x54,0);
    lVar10 = UiLayout_UpdateAnimById(0x55,0);
    if (lVar9 == 0 && lVar10 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar7 = *(int *)(param_1 + 0x50);
      if (((iVar7 == 9) || (iVar7 == 8)) || ((iVar7 == 2 || (iVar7 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        lVar9 = UiLayout_UpdateAnimById(0x54,1);
        lVar10 = UiLayout_UpdateAnimById(0x55,1);
        if (lVar9 == 0 && lVar10 == 0) {
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
  iVar7 = UiMgr_FindLayout(0x54);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,0x34,8);
  iVar7 = UiMgr_FindLayout(0x54);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,0x36,8);
  iVar7 = 0;
  puVar11 = &DAT_0032d0e0;
  do {
    if (iVar7 < iVar4) {
      iVar5 = UiMgr_FindLayout(0x54);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar5].layout,*puVar11,8);
    }
    else {
      iVar5 = UiMgr_FindLayout(0x54);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,*puVar11,8);
    }
    iVar7 = iVar7 + 1;
    puVar11 = puVar11 + 1;
  } while (iVar7 < 0xc);
  MenuWnd_DrawText(0x55,6,0x2e2);
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
  iVar7 = UiMgr_FindLayout(0x54);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x002574b0  size 0xeb8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_PartShop_DrawDetails(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  UiLayout *pUVar16;
  float fVar17;
  
  iVar5 = MsgId_ForMenu(*(int *)(param_1 + 0xc) + 1U & 0xff);
  iVar7 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar7 != 0) {
    if (*(int *)(param_1 + 0x4c) == 3) {
      uVar6 = UiRes_GetLayoutData(0x25f);
      iVar7 = UiMgr_FindLayout(0x4f);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar6;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
      uVar6 = UiRes_GetLayoutData(0x260);
      iVar7 = UiMgr_FindLayout(0x4f);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar6;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
      uVar6 = UiRes_GetLayoutData(0x140);
      iVar7 = UiMgr_FindLayout(0x68);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = uVar6;
      pUVar1[iVar7].layout.unk_318 = 1;
      uVar6 = UiRes_GetLayoutData(0x141);
      iVar7 = UiMgr_FindLayout(0x68);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar6;
      pUVar1[iVar7].layout.animState = 1;
    }
    iVar7 = *(int *)(param_1 + 0x48);
    if ((((iVar7 == 9) || (iVar7 == 8)) || (iVar7 == 2)) || (iVar7 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar6 = UiRes_GetLayoutData(0x142);
      iVar7 = UiMgr_FindLayout(0x68);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar6;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
      uVar6 = UiRes_GetLayoutData(0x143);
      iVar7 = UiMgr_FindLayout(0x68);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar6;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
      uVar6 = UiRes_GetLayoutData(0x144);
      iVar7 = UiMgr_FindLayout(0x68);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x36c = uVar6;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
      uVar6 = UiRes_GetLayoutData(0x161);
      iVar7 = UiMgr_FindLayout(0x4f);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = uVar6;
      pUVar1[iVar7].layout.unk_318 = 1;
      uVar6 = UiRes_GetLayoutData(0x162);
      iVar7 = UiMgr_FindLayout(0x4f);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar6;
      pUVar1[iVar7].layout.animState = 1;
      uVar6 = UiRes_GetLayoutData(0x40b);
      iVar7 = UiMgr_FindLayout(0x59);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = uVar6;
      pUVar1[iVar7].layout.unk_318 = 1;
      uVar6 = UiRes_GetLayoutData(0x40c);
      iVar7 = UiMgr_FindLayout(0x59);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar6;
      pUVar1[iVar7].layout.animState = 1;
    }
    MenuWnd_SetItemVisible(0);
    MenuWnd_DrawDialogText(0x68,0x36ec50,2,0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    if (*(int *)(param_1 + 0x48) == 8) {
      lVar11 = UiLayout_UpdateAnimById(0x68,0);
      lVar12 = UiLayout_UpdateAnimById(0x4f,0);
      lVar13 = UiLayout_UpdateAnimById(0x59,0);
      if (lVar13 == 0 && (lVar11 == 0 && lVar12 == 0)) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
    }
    else {
      lVar11 = UiLayout_UpdateAnimById(0x68,0);
      lVar12 = UiLayout_UpdateAnimById(0x4f,3);
      if (lVar11 == 0 && lVar12 == 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar7 = *(int *)(param_1 + 0x50);
    if (((iVar7 == 9) || (iVar7 == 8)) || ((iVar7 == 2 || (iVar7 == 1)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      lVar11 = UiLayout_UpdateAnimById(0x68,1);
      lVar12 = UiLayout_UpdateAnimById(0x4f,1);
      lVar13 = UiLayout_UpdateAnimById(0x59,1);
      if (lVar13 == 0 && (lVar11 == 0 && lVar12 == 0)) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x4c) == 3) {
      lVar11 = UiLayout_UpdateAnimById(0x4f,2);
      lVar12 = UiLayout_UpdateAnimById(0x68,1);
      if (lVar11 == 0 && lVar12 == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    MenuWnd_DrawCursor(9 < iVar5);
    iVar7 = *(int *)(param_1 + 0x4c);
  }
  else {
    MenuWnd_DrawCursor(0);
    iVar7 = *(int *)(param_1 + 0x4c);
  }
  if (iVar7 == 3) {
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState(0x68,*(undefined4 *)(&LAB_0032d050 + *(int *)(param_1 + 0x38) * 4),0,0);
    }
    iVar7 = MsgId_ForMenuHelp(*(int *)(param_1 + 0xc) + 1U & 0xff);
    iVar8 = iVar5 + (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x38));
    iVar10 = 0;
    puVar15 = &DAT_0032d020;
    while( true ) {
      iVar9 = iVar5;
      if (8 < iVar5) {
        iVar9 = 9;
      }
      if (iVar9 <= iVar10) break;
      sVar4 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),iVar8 % iVar5 + iVar7);
      iVar9 = UiMgr_FindLayout(0x68);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar9].layout,*puVar15,0x16,sVar4 + -0xa8);
      iVar8 = iVar8 % iVar5 + 1;
      puVar15 = puVar15 + 1;
      iVar10 = iVar10 + 1;
    }
    iVar7 = UiMgr_FindLayout(0x68);
    pUVar16 = &g_UiMgr->slots[iVar7].layout;
    iVar7 = (iVar5 + (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x38))) % iVar5;
    if (iVar5 < 10) {
      UiElem_SetPropFloat(0x41800000,pUVar16,4,1);
      UiElem_SetPropFloat(0x42060000,pUVar16,4,6);
      iVar7 = UiMgr_FindLayout(0x68);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,3,8);
LAB_002580a4:
      iVar7 = *(int *)(param_1 + 0x2c);
    }
    else {
      if (iVar5 < iVar7 + 9) {
        fVar17 = (float)((iVar7 + 9) - iVar5);
        UiElem_SetPropFloat((float)iVar7 * (536.0 / (float)iVar5) + 16.0,pUVar16,4,1);
        UiElem_SetPropFloat(((9.0 - fVar17) / (float)iVar5) * 33.5,pUVar16,4,6);
        UiElem_SetPropFloat(0x41800000,pUVar16,3,1);
        UiElem_SetPropFloat((fVar17 / (float)iVar5) * 33.5,pUVar16,3,6);
        iVar7 = UiMgr_FindLayout(0x68);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar7].layout,3,8);
        goto LAB_002580a4;
      }
      UiElem_SetPropFloat((float)iVar7 * (536.0 / (float)iVar5) + 16.0,pUVar16,4,1);
      UiElem_SetPropFloat((9.0 / (float)iVar5) * 33.5,pUVar16,4,6);
      iVar7 = UiMgr_FindLayout(0x68);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,3,8);
      iVar7 = *(int *)(param_1 + 0x2c);
    }
    if (iVar7 == 3) {
      Menu_ClearSlot(0);
      lVar11 = UiLayout_UpdateAnimById(0x68,2);
      if (lVar11 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 4;
        iVar7 = UiMgr_FindLayout(0x68);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x28);
        iVar8 = *(int *)(param_1 + 0x38);
        iVar10 = MsgId_ForMenuHelp(*(int *)(param_1 + 0xc) + 1U & 0xff);
        sVar4 = maybe_CarModel_IsBossCar
                          (*(undefined4 *)(param_1 + 4),
                           (iVar5 + (iVar7 - iVar8) + -1) % iVar5 + iVar10);
        iVar7 = UiMgr_FindLayout(0x68);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,DAT_0032d044,0x16,sVar4 + -0xa8);
      }
    }
    else {
      if (iVar7 != 2) {
        uVar6 = *(undefined4 *)(param_1 + 0x10);
        goto LAB_00257d98;
      }
      lVar11 = UiLayout_UpdateAnimById(0x68);
      if (lVar11 == 0) {
        Menu_ClearSlot(0);
        *(undefined4 *)(param_1 + 0x2c) = 4;
        iVar7 = UiMgr_FindLayout(0x68);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x28);
        iVar8 = *(int *)(param_1 + 0x38);
        iVar10 = MsgId_ForMenuHelp(*(int *)(param_1 + 0xc) + 1U & 0xff);
        sVar4 = maybe_CarModel_IsBossCar
                          (*(undefined4 *)(param_1 + 4),
                           (iVar5 + (iVar7 - iVar8) + 9) % iVar5 + iVar10);
        iVar7 = UiMgr_FindLayout(0x68);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,DAT_0032d044,0x16,sVar4 + -0xa8);
      }
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x10);
LAB_00257d98:
  uVar14 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),uVar6);
  uVar14 = Garage_ComputeCarStats(uVar14,0);
  MenuWnd_DrawNumber(0x4f,4,uVar14);
  uVar14 = Profile_Get(0);
  uVar14 = Profile_GetMoney(uVar14);
  MenuWnd_DrawNumber(0x4f,3,uVar14);
  uVar3 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x4c) == 3) {
    maybe_Wheel_DrawList(uVar3,iVar5,1,0);
  }
  else {
    maybe_Wheel_DrawList(uVar3,iVar5,0,0);
  }
  iVar7 = UiMgr_FindLayout(0x4f);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  lVar11 = maybe_MenuText_CurrentCarSpec(*(undefined4 *)(param_1 + 4));
  if (lVar11 == 0) {
    iVar7 = UiMgr_FindLayout(0x59);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  }
  return;
}

