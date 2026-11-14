// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00254000 - 0x00258000
#include "ghidra_types.h"

// 0x00254100  size 0x10a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectSectionTo(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  iVar4 = UiMgr_FindLayout(0x83);
  iVar13 = *_g_UiMgr + iVar4 * 0x4f4 + 4;
  iVar5 = UiMgr_FindLayout(7);
  iVar4 = *(int *)(param_1 + 0x65c);
  iVar12 = *_g_UiMgr;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  iVar12 = iVar12 + iVar5 * 0x4f4 + 4;
  if (iVar4 != 0) {
    uVar7 = UiRes_GetLayoutData(0x82);
    iVar4 = UiMgr_FindLayout(0x81);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar4 + 800) = 0;
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x318) = 1;
    *(undefined4 *)(iVar4 + 800) = uVar7;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar7 = UiRes_GetLayoutData(0x82);
    iVar4 = UiMgr_FindLayout(0x82);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar4 + 800) = 0;
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x318) = 1;
    *(undefined4 *)(iVar4 + 800) = uVar7;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar7 = UiRes_GetLayoutData(0x85);
    iVar4 = UiMgr_FindLayout(0x83);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar4 + 800) = 0;
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x318) = 0;
    *(undefined4 *)(iVar4 + 800) = uVar7;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar7 = UiRes_GetLayoutData(0x86);
    iVar4 = UiMgr_FindLayout(0x83);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x334) = 0;
    *(undefined4 *)(iVar4 + 0x324) = 0;
    if (*(int *)(iVar4 + 0x334) == 0) {
      *(undefined4 *)(iVar4 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x330) = 1;
    }
    *(undefined4 *)(iVar4 + 0x324) = 0;
    if (*(int *)(iVar4 + 0x334) == 0) {
      *(undefined4 *)(iVar4 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x330) = 1;
    }
    *(undefined4 *)(iVar4 + 0x32c) = 0;
    *(undefined4 *)(iVar4 + 0x334) = uVar7;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    uVar7 = UiRes_GetLayoutData(0x88);
    iVar4 = UiMgr_FindLayout(0x83);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x348) = 0;
    *(undefined4 *)(iVar4 + 0x338) = 0;
    if (*(int *)(iVar4 + 0x348) == 0) {
      *(undefined4 *)(iVar4 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x344) = 1;
    }
    *(undefined4 *)(iVar4 + 0x338) = 0;
    if (*(int *)(iVar4 + 0x348) == 0) {
      *(undefined4 *)(iVar4 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x344) = 1;
    }
    *(undefined4 *)(iVar4 + 0x340) = 0;
    *(undefined4 *)(iVar4 + 0x348) = uVar7;
    *(undefined4 *)(iVar4 + 0x344) = 1;
    uVar7 = UiRes_GetLayoutData(0x87);
    iVar4 = UiMgr_FindLayout(0x83);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x35c) = 0;
    *(undefined4 *)(iVar4 + 0x34c) = 0;
    if (*(int *)(iVar4 + 0x35c) == 0) {
      *(undefined4 *)(iVar4 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x358) = 1;
    }
    *(undefined4 *)(iVar4 + 0x34c) = 0;
    if (*(int *)(iVar4 + 0x35c) == 0) {
      *(undefined4 *)(iVar4 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x358) = 1;
    }
    *(undefined4 *)(iVar4 + 0x354) = 0;
    *(undefined4 *)(iVar4 + 0x35c) = uVar7;
    *(undefined4 *)(iVar4 + 0x358) = 1;
    uVar7 = UiRes_GetLayoutData(0x83);
    iVar4 = UiMgr_FindLayout(0x83);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x370) = 0;
    *(undefined4 *)(iVar4 + 0x360) = 0;
    if (*(int *)(iVar4 + 0x370) == 0) {
      *(undefined4 *)(iVar4 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x360) = 0;
    if (*(int *)(iVar4 + 0x370) == 0) {
      *(undefined4 *)(iVar4 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x368) = 1;
    *(undefined4 *)(iVar4 + 0x370) = uVar7;
    *(undefined4 *)(iVar4 + 0x36c) = 1;
    uVar7 = UiRes_GetLayoutData(0x84);
    iVar4 = UiMgr_FindLayout(0x83);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar4 + 900) = 0;
    *(undefined4 *)(iVar4 + 0x374) = 0;
    if (*(int *)(iVar4 + 900) == 0) {
      *(undefined4 *)(iVar4 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x380) = 1;
    }
    *(undefined4 *)(iVar4 + 0x374) = 0;
    if (*(int *)(iVar4 + 900) == 0) {
      *(undefined4 *)(iVar4 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x380) = 1;
    }
    *(undefined4 *)(iVar4 + 0x37c) = 1;
    *(undefined4 *)(iVar4 + 900) = uVar7;
    *(undefined4 *)(iVar4 + 0x380) = 1;
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x648) == 4) {
      UiElem_SetPropFloat(0x3f800000,iVar12,0x25,8);
      UiElem_SetPropFloat(0x3f800000,iVar12,0x24,8);
    }
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  lVar8 = UiLayout_UpdateAnimById(0x83,0);
  lVar9 = UiLayout_UpdateAnimById(0x83,1);
  if (lVar8 == 0 && lVar9 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    lVar8 = UiLayout_UpdateAnimById(0x83,2);
    lVar9 = UiLayout_UpdateAnimById(0x83,3);
    if (lVar8 == 0 && lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x660) = 0;
    }
  }
  uVar10 = Race_GetCourseVariant();
  iVar4 = MsgId_ForOption(uVar10);
  UiElem_SetPropInt(iVar13,0x5f,0x16,*(undefined4 *)(&DAT_0032c010 + iVar4 * 4));
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x83,*(undefined4 *)(&DAT_0032bff0 + *(int *)(param_1 + 0x62c) * 4),1,0);
  }
  UiElem_SetPropInt(iVar13,0x1a,9,*(undefined4 *)(param_1 + 0x62c));
  UiElem_SetPropInt(iVar13,0x1d,9,*(undefined4 *)(param_1 + 0x62c));
  iRam0036f5dc = 0;
  do {
    iRam0036f5e0 = 0;
    do {
      lVar8 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
      if (lVar8 == -1) {
        UiElem_SetPropFloat(0,iVar13,*(undefined4 *)
                                      (iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),8);
        UiElem_SetPropFloat(0,iVar13,*(undefined4 *)
                                      (iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c0b0),8);
      }
      else {
        uVar2 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
        uVar10 = RivalDb_Get(uVar2);
        cVar1 = RivalRec_GetTeam(uVar10);
        if ((cVar1 == '\x06') || (cVar1 == '\x05')) {
          uVar2 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
          uVar10 = RivalDb_Get(uVar2);
          uVar6 = RivalRec_GetTeam(uVar10);
          UiElem_SetPropInt(iVar13,*(undefined4 *)
                                    (iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),9,
                            *(undefined4 *)(&DAT_0032c130 + (uVar6 & 0xff) * 4));
          UiElem_SetPropFloat(0x3f666666,iVar13,
                              *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),8);
          UiElem_SetPropFloat(0x3f800000,iVar13,
                              *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c0b0),8);
        }
        else if (cVar1 == '\x01') {
          uVar2 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
          uVar10 = RivalDb_Get(uVar2);
          sVar3 = RivalRec_GetId(uVar10);
          iVar4 = Profile_Get(0);
          if (*(short *)(iVar4 + sVar3 * 2 + 0x4b7c) < 1) {
            uVar2 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
            uVar10 = RivalDb_Get(uVar2);
            uVar6 = RivalRec_GetTeam(uVar10);
            UiElem_SetPropInt(iVar13,*(undefined4 *)
                                      (iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),9,
                              *(undefined4 *)(&DAT_0032c130 + (uVar6 & 0xff) * 4));
            UiElem_SetPropFloat(0x3f666666,iVar13,
                                *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),8
                               );
          }
          else {
            UiElem_SetPropInt(iVar13,*(undefined4 *)
                                      (iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),9,0);
            UiElem_SetPropFloat(0x3ecccccd,iVar13,
                                *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),8
                               );
          }
          UiElem_SetPropFloat(0x3f800000,iVar13,
                              *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c0b0),8);
        }
        else if (cVar1 == '\0') {
          uVar2 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
          uVar10 = RivalDb_Get(uVar2);
          sVar3 = RivalRec_GetId(uVar10);
          iVar4 = Profile_Get(0);
          if (*(short *)(iVar4 + sVar3 * 2 + 0x4b7c) < 1) {
            uVar2 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
            uVar10 = RivalDb_Get(uVar2);
            lVar8 = RivalRec_IsValid(uVar10);
            if (lVar8 == 0) goto LAB_00254538;
            UiElem_SetPropInt(iVar13,*(undefined4 *)
                                      (iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),9,1);
            UiElem_SetPropFloat(0x3f666666,iVar13,
                                *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),8
                               );
          }
          else {
LAB_00254538:
            uVar2 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
            uVar10 = RivalDb_Get(uVar2);
            uVar6 = RivalRec_GetTeam(uVar10);
            UiElem_SetPropInt(iVar13,*(undefined4 *)
                                      (iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),9,
                              *(undefined4 *)(&DAT_0032c130 + (uVar6 & 0xff) * 4));
            uVar10 = Profile_Get(0);
            uVar11 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
            sVar3 = Profile_GetRivalBattleCount(uVar10,uVar11);
            if (sVar3 < 1) {
              UiElem_SetPropFloat(0x3f666666,iVar13,
                                  *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030)
                                  ,8);
            }
            else {
              UiElem_SetPropFloat(0x3ecccccd,iVar13,
                                  *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030)
                                  ,8);
            }
          }
          UiElem_SetPropFloat(0x3f800000,iVar13,
                              *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c0b0),8);
        }
        else if (cVar1 == '\r') {
          UiElem_SetPropFloat(0,iVar13,*(undefined4 *)
                                        (iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),8);
          UiElem_SetPropFloat(0,iVar13,*(undefined4 *)
                                        (iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c0b0),8);
        }
        else {
          uVar2 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
          uVar10 = RivalDb_Get(uVar2);
          uVar6 = RivalRec_GetTeam(uVar10);
          UiElem_SetPropInt(iVar13,*(undefined4 *)
                                    (iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),9,
                            *(undefined4 *)(&DAT_0032c130 + (uVar6 & 0xff) * 4));
          uVar10 = Profile_Get(0);
          uVar11 = RivalSchedule_Get(iRam0036f5dc,iRam0036f5e0);
          sVar3 = Profile_GetRivalBattleCount(uVar10,uVar11);
          if (sVar3 < 1) {
            UiElem_SetPropFloat(0x3f666666,iVar13,
                                *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),8
                               );
          }
          else {
            UiElem_SetPropFloat(0x3ecccccd,iVar13,
                                *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c030),8
                               );
          }
          UiElem_SetPropFloat(0x3f800000,iVar13,
                              *(undefined4 *)(iRam0036f5e0 * 4 + iRam0036f5dc * 0x18 + 0x32c0b0),8);
        }
      }
      iRam0036f5e0 = iRam0036f5e0 + 1;
    } while (iRam0036f5e0 < 6);
    iRam0036f5dc = iRam0036f5dc + 1;
    if (4 < iRam0036f5dc) {
      iRam0036f5e4 = 0;
      do {
        MenuWnd_DrawText(0x83,*(undefined4 *)(&DAT_0032c190 + iRam0036f5e4 * 4),
                         *(undefined4 *)(&DAT_0032c170 + iRam0036f5e4 * 4));
        iRam0036f5e4 = iRam0036f5e4 + 1;
      } while (iRam0036f5e4 < 5);
      MenuWnd_DrawLabel(0x83,0x61,0x361,5,
                        *(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + param_1 + 0xec),0);
      MenuWnd_DrawText(7,0x2e,0x360);
      uVar10 = Profile_Get(0);
      cVar1 = Profile_GetChapter(uVar10);
      if (cVar1 == '\0') {
        UiLayout_UpdateAnimById(0x81,0);
        iVar4 = UiMgr_FindLayout(0x81);
        UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
        iVar4 = UiMgr_FindLayout(0x83);
        UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0x5d,9,1);
        iVar4 = *(int *)(param_1 + 0x64c);
      }
      else {
        UiLayout_UpdateAnimById(0x82,0);
        iVar4 = UiMgr_FindLayout(0x82);
        UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
        iVar4 = UiMgr_FindLayout(0x83);
        UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0x5d,9,0);
        iVar4 = *(int *)(param_1 + 0x64c);
      }
      if (iVar4 == *(int *)(param_1 + 0x650)) {
        UiLayout_UpdateAnimById(0x83,4);
        UiLayout_UpdateAnimById(0x83,5);
      }
      else {
        UiElem_SetPropFloat(0,iVar13,0x1a,8);
        UiElem_SetPropFloat(0,iVar13,0x1d,8);
      }
      iVar4 = UiMgr_FindLayout(0x83);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
      return;
    }
  } while( true );
}

// 0x002551c0  size 0x8dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_CategoryRace_51c0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  iVar2 = UiMgr_FindLayout(0x78);
  iVar7 = *_g_UiMgr + iVar2 * 0x4f4 + 4;
  UiElem_SetPropFloat(0,iVar7,0x47,8);
  UiElem_SetPropFloat(0,iVar7,0x48,8);
  iVar2 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x3a);
    iVar2 = UiMgr_FindLayout(0x79);
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
    uVar3 = UiRes_GetLayoutData(0x432);
    iVar2 = UiMgr_FindLayout(0x79);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar3;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar3 = UiRes_GetLayoutData(0x3b);
    iVar2 = UiMgr_FindLayout(0x79);
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
    uVar3 = UiRes_GetLayoutData(0x291);
    iVar2 = UiMgr_FindLayout(0x79);
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
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar3;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    iVar2 = *(int *)(param_1 + 0x648);
    if (((((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) ||
        (((iVar2 == 0x14 || (iVar2 == 0x15)) ||
         ((iVar2 == 0x29 || ((iVar2 == 0x2a || (iVar2 == 0x2b)))))))) ||
       ((iVar2 == 0x20 ||
        ((((iVar2 == 0x1f || (iVar2 == 0x21)) || (iVar2 == 0x2b)) ||
         (*(int *)(_g_MenuMgr + 0x24) == -2)))))) {
      iVar4 = UiMgr_FindLayout(0x78);
      iVar2 = *_g_UiMgr;
      uVar6 = UiRes_GetLayoutData(*(int *)(param_1 + 0x6b0) + 0x34);
      UiLayout_PlayAnim(iVar2 + iVar4 * 0x4f4 + 4,uVar6);
    }
    else {
      iVar2 = UiMgr_FindLayout(0x78);
      if (*(int *)(*_g_UiMgr + iVar2 * 0x4f4 + 0x344) == 0) {
        *(undefined4 *)(param_1 + 0x6b0) = 0;
      }
      else {
        iVar2 = UiMgr_FindLayout(0x78);
        if (*(int *)(*_g_UiMgr + iVar2 * 0x4f4 + 0x358) == 0) {
          *(undefined4 *)(param_1 + 0x6b0) = 1;
        }
        else {
          iVar2 = UiMgr_FindLayout(0x78);
          if (*(int *)(*_g_UiMgr + iVar2 * 0x4f4 + 0x36c) == 0) {
            *(undefined4 *)(param_1 + 0x6b0) = 2;
          }
          else {
            iVar2 = UiMgr_FindLayout(0x78);
            if (*(int *)(*_g_UiMgr + iVar2 * 0x4f4 + 0x380) == 0) {
              *(undefined4 *)(param_1 + 0x6b0) = 3;
            }
            else {
              *(undefined4 *)(param_1 + 0x6b0) = 0;
            }
          }
        }
      }
      iVar4 = UiMgr_FindLayout(0x78);
      iVar2 = *_g_UiMgr;
      uVar6 = UiRes_GetLayoutData(*(int *)(param_1 + 0x6b0) + 0x34);
      UiLayout_PlayAnim(iVar2 + iVar4 * 0x4f4 + 4,uVar6);
    }
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
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
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x79,*(undefined4 *)(&DAT_0032bfe0 + *(int *)(param_1 + 0x62c) * 4),1,0);
    iVar2 = *(int *)(param_1 + 0x660);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x660);
  }
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x640) == 0xb) {
      *(undefined4 *)(param_1 + 0x660) = 0;
      *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
      *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
      *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
      *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
      *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
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
  iVar2 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(iVar7,0x3d,0x16,*(undefined4 *)(&DAT_0032bfc0 + iVar2 * 4));
  uVar6 = Race_GetCourseVariant();
  iVar2 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(iVar7,0x3e,0x16,*(undefined4 *)(&DAT_0032bfc0 + iVar2 * 4));
  uVar6 = Race_GetCourseVariant();
  iVar2 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(iVar7,0x3f,0x16,*(undefined4 *)(&DAT_0032bfc0 + iVar2 * 4));
  uVar6 = Race_GetCourseVariant();
  iVar2 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(iVar7,0x40,0x16,*(undefined4 *)(&DAT_0032bfc0 + iVar2 * 4));
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
  cVar1 = Profile_GetChapter(uVar6);
  if (cVar1 == '\0') {
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
  UiElem_SetPropFloat(0,iVar7,1,8);
  UiElem_SetPropFloat(0,iVar7,0xb,8);
  UiElem_SetPropFloat(0,iVar7,0x15,8);
  UiElem_SetPropFloat(0,iVar7,0x1f,8);
  iVar2 = UiMgr_FindLayout(0x77);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x78);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x79);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  if (*(int *)(_g_MenuMgr + 0x24) == 0xc) {
    Subtitle_Draw();
  }
  return;
}

// 0x00255aa0  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327824 */

void screc327824_exit_sub_00255aa0(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x00255ac0  size 0x130
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327824 */

void screc327824_update_sub_00255ac0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x6b8) == 1) && (*(int *)(_g_MenuMgr + 0x20) == -3)) {
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  else {
    (*(code *)(&PTR_ScrRace_Draw_CategoryRace_51c0_0032be30)[*(int *)(iVar2 + 0x638)])(param_1);
    MenuWnd_SetTitle(*(undefined4 *)(&DAT_0032bef0 + *(int *)(iVar2 + 0x638) * 4),0xffffffffffffffff
                    );
  }
  if (((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) &&
     (lVar1 = UiLayout_UpdateAnimById(0x79,1), lVar1 == 0)) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
    }
  }
  return;
}

// 0x00255bf0  size 0x3c
/* screen record 0x327824 */

void screc327824_enter_sub_00255bf0(void)

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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327830 */

void ScrSell_Exit(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x00255c50  size 0x220
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_Sell(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = UiLayout_UpdateAnimById(0x43,0);
  lVar3 = UiLayout_UpdateAnimById(0x43,1);
  if (lVar2 == 0 && lVar3 == 0) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
    }
  }
  MenuWnd_DrawText(0x43,0x1a,0x2a1);
  MenuWnd_DrawText(0x43,0x1b,0x2a2);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x43,*(undefined4 *)(*param_1 * 4 + 0x36ec00),1,0);
  }
  UiLayout_UpdateAnimById(0x42,0);
  iVar1 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x43);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,*(undefined4 *)(*param_1 * 4 + 0x36ec08));
  if ((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) {
    iVar1 = *(int *)(_g_MenuMgr + 0x20);
    if (iVar1 == 0x1e) {
      uVar4 = 5;
    }
    else if (iVar1 == 0x1d) {
      uVar4 = 4;
    }
    else if (iVar1 == 0xd) {
      uVar4 = 3;
    }
    else {
      uVar4 = 3;
    }
    lVar2 = UiLayout_UpdateAnimById(0x43,uVar4);
    lVar3 = UiLayout_UpdateAnimById(0x43,2);
    if (lVar2 == 0 && lVar3 == 0) {
      if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
      }
    }
  }
  return;
}

// 0x00255e70  size 0x394
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327830 */

void ScrSell_Enter(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0x97);
  iVar2 = UiMgr_FindLayout(0x42);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 800) == 0) {
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
    *(undefined4 *)(iVar2 + 0x318) = 1;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  uVar1 = UiRes_GetLayoutData(0x98);
  iVar2 = UiMgr_FindLayout(0x43);
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
  uVar1 = UiRes_GetLayoutData(0x99);
  iVar2 = UiMgr_FindLayout(0x43);
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
  uVar1 = UiRes_GetLayoutData(0x9b);
  iVar2 = UiMgr_FindLayout(0x43);
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
  *(undefined4 *)(iVar2 + 0x340) = 0;
  *(undefined4 *)(iVar2 + 0x348) = uVar1;
  *(undefined4 *)(iVar2 + 0x344) = 1;
  uVar1 = UiRes_GetLayoutData(0x9a);
  iVar2 = UiMgr_FindLayout(0x43);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x35c) = 0;
  *(undefined4 *)(iVar2 + 0x34c) = 0;
  if (*(int *)(iVar2 + 0x35c) == 0) {
    *(undefined4 *)(iVar2 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x358) = 1;
  }
  *(undefined4 *)(iVar2 + 0x34c) = 0;
  if (*(int *)(iVar2 + 0x35c) == 0) {
    *(undefined4 *)(iVar2 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x358) = 1;
  }
  *(undefined4 *)(iVar2 + 0x354) = 0;
  *(undefined4 *)(iVar2 + 0x35c) = uVar1;
  *(undefined4 *)(iVar2 + 0x358) = 1;
  uVar1 = UiRes_GetLayoutData(0x9c);
  iVar2 = UiMgr_FindLayout(0x43);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x370) = 0;
  *(undefined4 *)(iVar2 + 0x360) = 0;
  if (*(int *)(iVar2 + 0x370) == 0) {
    *(undefined4 *)(iVar2 + 0x36c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x36c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x360) = 0;
  if (*(int *)(iVar2 + 0x370) == 0) {
    *(undefined4 *)(iVar2 + 0x36c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x36c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x368) = 0;
  *(undefined4 *)(iVar2 + 0x370) = uVar1;
  *(undefined4 *)(iVar2 + 0x36c) = 1;
  uVar1 = UiRes_GetLayoutData(0x9d);
  iVar2 = UiMgr_FindLayout(0x43);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x378) = 0xffffffff;
  *(undefined4 *)(iVar2 + 900) = 0;
  *(undefined4 *)(iVar2 + 0x374) = 0;
  if (*(int *)(iVar2 + 900) == 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x380) = 1;
  }
  *(undefined4 *)(iVar2 + 0x374) = 0;
  if (*(int *)(iVar2 + 900) == 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x380) = 1;
  }
  *(undefined4 *)(iVar2 + 0x37c) = 0;
  *(undefined4 *)(iVar2 + 900) = uVar1;
  *(undefined4 *)(iVar2 + 0x380) = 1;
  Menu_ClearSlot(0);
  return;
}

// 0x00256210  size 0xa8
undefined8 scrcareer_step_sub_00256210(long param_1,long param_2)

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
    lVar2 = scrcareer_step_sub_0029f130();
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
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_10 [3];
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 auStack_8 [3];
  undefined1 uStack_5;
  undefined1 uStack_4;
  undefined1 uStack_3;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x48);
    if ((((iVar3 == 9) || (iVar3 == 8)) || (iVar3 == 2)) || (iVar3 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar2 = UiRes_GetLayoutData(0x173);
      iVar3 = UiMgr_FindLayout(0x55);
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
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
      uVar2 = UiRes_GetLayoutData(0x174);
      iVar3 = UiMgr_FindLayout(0x55);
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
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
      uVar2 = UiRes_GetLayoutData(0x175);
      iVar3 = UiMgr_FindLayout(0x56);
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
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
      uVar2 = UiRes_GetLayoutData(0x176);
      iVar3 = UiMgr_FindLayout(0x56);
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
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    MenuWnd_SetItemVisible(0);
    MenuWnd_DrawDialogText(0x56,0x36ec58,2,0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    lVar4 = UiLayout_UpdateAnimById(0x56,0);
    lVar5 = UiLayout_UpdateAnimById(0x55,0);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar3 = *(int *)(param_1 + 0x50);
      if (((iVar3 == 9) || (iVar3 == 8)) || ((iVar3 == 2 || (iVar3 == 1)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        lVar4 = UiLayout_UpdateAnimById(0x56,1);
        lVar5 = UiLayout_UpdateAnimById(0x55,1);
        if (lVar4 == 0 && lVar5 == 0) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    if (*piRam0036f468 == 1) {
      MenuWnd_SetItemState(0x56,*(undefined4 *)(&DAT_0032d120 + *(int *)(param_1 + 0x1c) * 4),0,0);
    }
    iVar3 = UiMgr_FindLayout(0x56);
    iVar8 = 0;
    puVar7 = &DAT_0032d160;
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4 + 4;
    do {
      if (*(int *)(param_1 + 8) == 3) {
        CarPreview_GetPaletteColor(auStack_8,iVar8,*(undefined4 *)(param_1 + 0x20));
      }
      else {
        CarPreview_GetColor(auStack_8,iVar8,*(undefined4 *)(param_1 + 0x20));
      }
      UiElem_Get(iVar3,*puVar7,uStack_5,uStack_4,uStack_3);
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < 0x10);
    iVar9 = -2;
    iVar8 = 0x32d198;
    do {
      if (*(int *)(param_1 + 8) == 3) {
        CarPreview_GetPaletteColor(auStack_10,*(undefined4 *)(param_1 + 0x1c));
      }
      else {
        CarPreview_GetColor(auStack_10,*(undefined4 *)(param_1 + 0x1c),
                            (*(int *)(param_1 + 0x20) + 0x2a + iVar9) % 0x2a);
      }
      UiElem_Get(iVar3,*(undefined4 *)(iVar8 + 8),uStack_d,uStack_c,uStack_b);
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar9 < 3);
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  MenuWnd_DrawCursor(iVar3 == 3);
  if (*(int *)(param_1 + 8) == 3) {
    MenuWnd_DrawText(0x55,6,0x2eb);
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawText(0x55,6,0x2ea);
    iVar3 = *(int *)(param_1 + 8);
  }
  if (iVar3 == 0) {
    uVar6 = 100;
  }
  else if (iVar3 == 1) {
    uVar6 = 200;
  }
  else {
    uVar6 = 0x96;
  }
  MenuWnd_DrawNumber(0x55,3,uVar6);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetMoney(uVar6);
  MenuWnd_DrawNumber(0x55,4,uVar6);
  iVar3 = UiMgr_FindLayout(0x56);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002568c0  size 0x5a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_MazioraColour(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar2 = UiMgr_FindLayout(0x5a);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,1,0x16,0);
    iVar2 = *(int *)(param_1 + 0x48);
    if ((((iVar2 == 9) || (iVar2 == 8)) || (iVar2 == 2)) || (iVar2 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar3 = UiRes_GetLayoutData(0x3b7);
      iVar2 = UiMgr_FindLayout(0x6c);
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
      uVar3 = UiRes_GetLayoutData(0x3b8);
      iVar2 = UiMgr_FindLayout(0x6c);
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
      uVar3 = UiRes_GetLayoutData(0x173);
      iVar2 = UiMgr_FindLayout(0x55);
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
      uVar3 = UiRes_GetLayoutData(0x174);
      iVar2 = UiMgr_FindLayout(0x55);
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
      uVar3 = UiRes_GetLayoutData(0x429);
      iVar2 = UiMgr_FindLayout(0x5a);
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
      uVar3 = UiRes_GetLayoutData(0x42a);
      iVar2 = UiMgr_FindLayout(0x5a);
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
    }
    MenuWnd_SetItemVisible(0);
    iVar2 = *(int *)(param_1 + 0x4c);
  }
  if (iVar2 == 3) {
    lVar4 = UiLayout_UpdateAnimById(0x6c,0);
    lVar5 = UiLayout_UpdateAnimById(0x5a,0);
    lVar6 = UiLayout_UpdateAnimById(0x55,0);
    if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar2 = *(int *)(param_1 + 0x50);
      if (((iVar2 == 9) || (iVar2 == 8)) || ((iVar2 == 2 || (iVar2 == 1)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        lVar4 = UiLayout_UpdateAnimById(0x6c,1);
        lVar5 = UiLayout_UpdateAnimById(0x55,1);
        lVar6 = UiLayout_UpdateAnimById(0x5a,1);
        if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
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
    uVar7 = 100;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    uVar7 = 200;
  }
  else {
    uVar7 = 0x96;
  }
  MenuWnd_DrawNumber(0x55,3,uVar7);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x55,4,uVar7);
  iVar2 = UiMgr_FindLayout(0x6c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x5a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00256e70  size 0x638
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_DealerColour(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
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
  uVar2 = CarRec_GetModelId(uVar8);
  iVar3 = CarDb_GetModelEntry(uVar2);
  iVar7 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar7 != 0) {
    iVar7 = *(int *)(param_1 + 0x48);
    if ((((iVar7 == 9) || (iVar7 == 8)) || (iVar7 == 2)) || (iVar7 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar6 = UiRes_GetLayoutData(0x16f);
      iVar7 = UiMgr_FindLayout(0x54);
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
      *(undefined4 *)(iVar7 + 800) = uVar6;
      *(undefined4 *)(iVar7 + 0x31c) = 1;
      uVar6 = UiRes_GetLayoutData(0x170);
      iVar7 = UiMgr_FindLayout(0x54);
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
      *(undefined4 *)(iVar7 + 0x334) = uVar6;
      *(undefined4 *)(iVar7 + 0x330) = 1;
      uVar6 = UiRes_GetLayoutData(0x173);
      iVar7 = UiMgr_FindLayout(0x55);
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
      *(undefined4 *)(iVar7 + 800) = uVar6;
      *(undefined4 *)(iVar7 + 0x31c) = 1;
      uVar6 = UiRes_GetLayoutData(0x174);
      iVar7 = UiMgr_FindLayout(0x55);
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
      *(undefined4 *)(iVar7 + 0x334) = uVar6;
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    MenuWnd_SetItemVisible(0);
    iVar7 = 0;
    if (0 < iVar3) {
      puVar11 = &DAT_0032d0b0;
      do {
        iVar4 = UiMgr_FindLayout(0x54);
        iVar5 = *_g_UiMgr;
        CarDb_GetPartEntry(auStack_8,uVar2,iVar7,0);
        UiElem_Get(iVar5 + iVar4 * 0x4f4 + 4,*puVar11,uStack_5,uStack_4,uStack_3);
        iVar7 = iVar7 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar7 < iVar3);
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
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
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
    if (*piRam0036f468 == 1) {
      MenuWnd_SetItemState(0x54,*(undefined4 *)(&DAT_0032d080 + *(int *)(param_1 + 0x18) * 4),0,0);
    }
  }
  iVar7 = UiMgr_FindLayout(0x54);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x34,8);
  iVar7 = UiMgr_FindLayout(0x54);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x36,8);
  iVar7 = 0;
  puVar11 = &DAT_0032d0e0;
  do {
    if (iVar7 < iVar3) {
      iVar5 = UiMgr_FindLayout(0x54);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4,*puVar11,8);
    }
    else {
      iVar5 = UiMgr_FindLayout(0x54);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,*puVar11,8);
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
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  iVar7 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  return;
}

// 0x002574b0  size 0xeb8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_draw_sub_002574b0(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  float fVar15;
  
  iVar4 = MsgId_ForMenu(*(int *)(param_1 + 0xc) + 1U & 0xff);
  iVar6 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar6 != 0) {
    if (*(int *)(param_1 + 0x4c) == 3) {
      uVar5 = UiRes_GetLayoutData(0x25f);
      iVar6 = UiMgr_FindLayout(0x4f);
      iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
      *(undefined4 *)(iVar6 + 0x33c) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x348) = 0;
      *(undefined4 *)(iVar6 + 0x338) = 0;
      if (*(int *)(iVar6 + 0x348) == 0) {
        *(undefined4 *)(iVar6 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x344) = 1;
      }
      *(undefined4 *)(iVar6 + 0x338) = 0;
      if (*(int *)(iVar6 + 0x348) == 0) {
        *(undefined4 *)(iVar6 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x344) = 1;
      }
      *(undefined4 *)(iVar6 + 0x340) = 0;
      *(undefined4 *)(iVar6 + 0x348) = uVar5;
      *(undefined4 *)(iVar6 + 0x344) = 1;
      uVar5 = UiRes_GetLayoutData(0x260);
      iVar6 = UiMgr_FindLayout(0x4f);
      iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
      *(undefined4 *)(iVar6 + 0x350) = 0xffffffff;
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
      *(undefined4 *)(iVar6 + 0x35c) = uVar5;
      *(undefined4 *)(iVar6 + 0x358) = 1;
      uVar5 = UiRes_GetLayoutData(0x140);
      iVar6 = UiMgr_FindLayout(0x68);
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
      *(undefined4 *)(iVar6 + 800) = uVar5;
      *(undefined4 *)(iVar6 + 0x31c) = 1;
      uVar5 = UiRes_GetLayoutData(0x141);
      iVar6 = UiMgr_FindLayout(0x68);
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
      *(undefined4 *)(iVar6 + 0x334) = uVar5;
      *(undefined4 *)(iVar6 + 0x330) = 1;
    }
    iVar6 = *(int *)(param_1 + 0x48);
    if ((((iVar6 == 9) || (iVar6 == 8)) || (iVar6 == 2)) || (iVar6 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar5 = UiRes_GetLayoutData(0x142);
      iVar6 = UiMgr_FindLayout(0x68);
      iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
      *(undefined4 *)(iVar6 + 0x33c) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x348) = 0;
      *(undefined4 *)(iVar6 + 0x338) = 0;
      if (*(int *)(iVar6 + 0x348) == 0) {
        *(undefined4 *)(iVar6 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x344) = 1;
      }
      *(undefined4 *)(iVar6 + 0x338) = 0;
      if (*(int *)(iVar6 + 0x348) == 0) {
        *(undefined4 *)(iVar6 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x344) = 1;
      }
      *(undefined4 *)(iVar6 + 0x340) = 0;
      *(undefined4 *)(iVar6 + 0x348) = uVar5;
      *(undefined4 *)(iVar6 + 0x344) = 1;
      uVar5 = UiRes_GetLayoutData(0x143);
      iVar6 = UiMgr_FindLayout(0x68);
      iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
      *(undefined4 *)(iVar6 + 0x350) = 0xffffffff;
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
      *(undefined4 *)(iVar6 + 0x35c) = uVar5;
      *(undefined4 *)(iVar6 + 0x358) = 1;
      uVar5 = UiRes_GetLayoutData(0x144);
      iVar6 = UiMgr_FindLayout(0x68);
      iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
      *(undefined4 *)(iVar6 + 0x364) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x370) = 0;
      *(undefined4 *)(iVar6 + 0x360) = 0;
      if (*(int *)(iVar6 + 0x370) == 0) {
        *(undefined4 *)(iVar6 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x36c) = 1;
      }
      *(undefined4 *)(iVar6 + 0x360) = 0;
      if (*(int *)(iVar6 + 0x370) == 0) {
        *(undefined4 *)(iVar6 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x36c) = 1;
      }
      *(undefined4 *)(iVar6 + 0x368) = 1;
      *(undefined4 *)(iVar6 + 0x370) = uVar5;
      *(undefined4 *)(iVar6 + 0x36c) = 1;
      uVar5 = UiRes_GetLayoutData(0x161);
      iVar6 = UiMgr_FindLayout(0x4f);
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
      *(undefined4 *)(iVar6 + 800) = uVar5;
      *(undefined4 *)(iVar6 + 0x31c) = 1;
      uVar5 = UiRes_GetLayoutData(0x162);
      iVar6 = UiMgr_FindLayout(0x4f);
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
      *(undefined4 *)(iVar6 + 0x334) = uVar5;
      *(undefined4 *)(iVar6 + 0x330) = 1;
      uVar5 = UiRes_GetLayoutData(0x40b);
      iVar6 = UiMgr_FindLayout(0x59);
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
      *(undefined4 *)(iVar6 + 800) = uVar5;
      *(undefined4 *)(iVar6 + 0x31c) = 1;
      uVar5 = UiRes_GetLayoutData(0x40c);
      iVar6 = UiMgr_FindLayout(0x59);
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
      *(undefined4 *)(iVar6 + 0x334) = uVar5;
      *(undefined4 *)(iVar6 + 0x330) = 1;
    }
    MenuWnd_SetItemVisible(0);
    MenuWnd_DrawDialogText(0x68,0x36ec50,2,0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    if (*(int *)(param_1 + 0x48) == 8) {
      lVar10 = UiLayout_UpdateAnimById(0x68,0);
      lVar11 = UiLayout_UpdateAnimById(0x4f,0);
      lVar12 = UiLayout_UpdateAnimById(0x59,0);
      if (lVar12 == 0 && (lVar10 == 0 && lVar11 == 0)) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
    }
    else {
      lVar10 = UiLayout_UpdateAnimById(0x68,0);
      lVar11 = UiLayout_UpdateAnimById(0x4f,3);
      if (lVar10 == 0 && lVar11 == 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar6 = *(int *)(param_1 + 0x50);
    if (((iVar6 == 9) || (iVar6 == 8)) || ((iVar6 == 2 || (iVar6 == 1)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      lVar10 = UiLayout_UpdateAnimById(0x68,1);
      lVar11 = UiLayout_UpdateAnimById(0x4f,1);
      lVar12 = UiLayout_UpdateAnimById(0x59,1);
      if (lVar12 == 0 && (lVar10 == 0 && lVar11 == 0)) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x4c) == 3) {
      lVar10 = UiLayout_UpdateAnimById(0x4f,2);
      lVar11 = UiLayout_UpdateAnimById(0x68,1);
      if (lVar10 == 0 && lVar11 == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    MenuWnd_DrawCursor(9 < iVar4);
    iVar6 = *(int *)(param_1 + 0x4c);
  }
  else {
    MenuWnd_DrawCursor(0);
    iVar6 = *(int *)(param_1 + 0x4c);
  }
  if (iVar6 == 3) {
    if (*piRam0036f468 == 1) {
      MenuWnd_SetItemState(0x68,*(undefined4 *)(&LAB_0032d050 + *(int *)(param_1 + 0x38) * 4),0,0);
    }
    iVar6 = MsgId_ForMenuHelp(*(int *)(param_1 + 0xc) + 1U & 0xff);
    iVar7 = iVar4 + (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x38));
    iVar9 = 0;
    puVar14 = &DAT_0032d020;
    while( true ) {
      iVar8 = iVar4;
      if (8 < iVar4) {
        iVar8 = 9;
      }
      if (iVar8 <= iVar9) break;
      sVar3 = scrcareer_step_sub_002a1600(*(undefined4 *)(param_1 + 4),iVar7 % iVar4 + iVar6);
      iVar8 = UiMgr_FindLayout(0x68);
      UiElem_SetPropInt(*_g_UiMgr + iVar8 * 0x4f4 + 4,*puVar14,0x16,sVar3 + -0xa8);
      iVar7 = iVar7 % iVar4 + 1;
      puVar14 = puVar14 + 1;
      iVar9 = iVar9 + 1;
    }
    iVar6 = UiMgr_FindLayout(0x68);
    iVar7 = *_g_UiMgr + iVar6 * 0x4f4 + 4;
    iVar6 = (iVar4 + (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x38))) % iVar4;
    if (iVar4 < 10) {
      UiElem_SetPropFloat(0x41800000,iVar7,4,1);
      UiElem_SetPropFloat(0x42060000,iVar7,4,6);
      iVar6 = UiMgr_FindLayout(0x68);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,3,8);
LAB_002580a4:
      iVar6 = *(int *)(param_1 + 0x2c);
    }
    else {
      if (iVar4 < iVar6 + 9) {
        fVar15 = (float)((iVar6 + 9) - iVar4);
        UiElem_SetPropFloat((float)iVar6 * (536.0 / (float)iVar4) + 16.0,iVar7,4,1);
        UiElem_SetPropFloat(((9.0 - fVar15) / (float)iVar4) * 33.5,iVar7,4,6);
        UiElem_SetPropFloat(0x41800000,iVar7,3,1);
        UiElem_SetPropFloat((fVar15 / (float)iVar4) * 33.5,iVar7,3,6);
        iVar6 = UiMgr_FindLayout(0x68);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4,3,8);
        goto LAB_002580a4;
      }
      UiElem_SetPropFloat((float)iVar6 * (536.0 / (float)iVar4) + 16.0,iVar7,4,1);
      UiElem_SetPropFloat((9.0 / (float)iVar4) * 33.5,iVar7,4,6);
      iVar6 = UiMgr_FindLayout(0x68);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,3,8);
      iVar6 = *(int *)(param_1 + 0x2c);
    }
    if (iVar6 == 3) {
      Menu_ClearSlot(0);
      lVar10 = UiLayout_UpdateAnimById(0x68,2);
      if (lVar10 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 4;
        iVar6 = UiMgr_FindLayout(0x68);
        iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
        *(undefined4 *)(iVar6 + 0x338) = 0;
        if (*(int *)(iVar6 + 0x348) == 0) {
          *(undefined4 *)(iVar6 + 0x344) = 0;
        }
        else {
          *(undefined4 *)(iVar6 + 0x344) = 1;
        }
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x28);
        iVar7 = *(int *)(param_1 + 0x38);
        iVar9 = MsgId_ForMenuHelp(*(int *)(param_1 + 0xc) + 1U & 0xff);
        sVar3 = scrcareer_step_sub_002a1600
                          (*(undefined4 *)(param_1 + 4),
                           (iVar4 + (iVar6 - iVar7) + -1) % iVar4 + iVar9);
        iVar6 = UiMgr_FindLayout(0x68);
        UiElem_SetPropInt(*_g_UiMgr + iVar6 * 0x4f4 + 4,DAT_0032d044,0x16,sVar3 + -0xa8);
      }
    }
    else {
      if (iVar6 != 2) {
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        goto LAB_00257d98;
      }
      lVar10 = UiLayout_UpdateAnimById(0x68);
      if (lVar10 == 0) {
        Menu_ClearSlot(0);
        *(undefined4 *)(param_1 + 0x2c) = 4;
        iVar6 = UiMgr_FindLayout(0x68);
        iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
        *(undefined4 *)(iVar6 + 0x34c) = 0;
        if (*(int *)(iVar6 + 0x35c) == 0) {
          *(undefined4 *)(iVar6 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar6 + 0x358) = 1;
        }
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x28);
        iVar7 = *(int *)(param_1 + 0x38);
        iVar9 = MsgId_ForMenuHelp(*(int *)(param_1 + 0xc) + 1U & 0xff);
        sVar3 = scrcareer_step_sub_002a1600
                          (*(undefined4 *)(param_1 + 4),
                           (iVar4 + (iVar6 - iVar7) + 9) % iVar4 + iVar9);
        iVar6 = UiMgr_FindLayout(0x68);
        UiElem_SetPropInt(*_g_UiMgr + iVar6 * 0x4f4 + 4,DAT_0032d044,0x16,sVar3 + -0xa8);
      }
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
LAB_00257d98:
  uVar13 = scrcareer_step_sub_002a1600(*(undefined4 *)(param_1 + 4),uVar5);
  uVar13 = Garage_ComputeCarStats(uVar13,0);
  MenuWnd_DrawNumber(0x4f,4,uVar13);
  uVar13 = Profile_Get(0);
  uVar13 = Profile_GetMoney(uVar13);
  MenuWnd_DrawNumber(0x4f,3,uVar13);
  uVar2 = scrcareer_step_sub_002a1600(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x4c) == 3) {
    scrgarage_draw_sub_00274d20(uVar2,iVar4,1,0);
  }
  else {
    scrgarage_draw_sub_00274d20(uVar2,iVar4,0,0);
  }
  iVar6 = UiMgr_FindLayout(0x4f);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  lVar10 = scrcareer_step_sub_0029f130(*(undefined4 *)(param_1 + 4));
  if (lVar10 == 0) {
    iVar6 = UiMgr_FindLayout(0x59);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  }
  return;
}

