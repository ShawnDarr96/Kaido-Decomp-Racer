// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00274000 - 0x00278000
#include "ghidra_types.h"

// 0x002740f0  size 0x30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3278c0 */

void ScrScrCareerDrawTuneUp_Exit(void)

{
  Menu_BlockInput(_g_MenuMgr + 0x654);
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x00274120  size 0x114
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3278c0 */

void ScrScrCareerDrawTuneUp_Update(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = UiLayout_UpdateAnimById(0x35,0);
  if (lVar2 != 1) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
    }
  }
  ScrCareer_Draw_TuneUp(param_1);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  if ((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) {
    bVar1 = false;
    if (*(int *)param_1 == 1) {
      lVar2 = UiLayout_UpdateAnimById(0x35,2);
      if (lVar2 == 1) {
        bVar1 = true;
      }
    }
    else {
      lVar2 = UiLayout_UpdateAnimById(0x35);
      if (lVar2 == 1) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
      }
    }
  }
  return;
}

// 0x00274240  size 0x22c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3278c0 */

void ScrScrCareerDrawTuneUp_Enter(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = UiMgr_FindLayout(0x2d);
  iVar3 = *_g_UiMgr;
  uVar4 = UiRes_GetLayoutData(0x26);
  UiLayout_PlayAnim(iVar3 + iVar1 * 0x4f4 + 4,uVar4);
  uVar2 = UiRes_GetLayoutData(0x29);
  iVar3 = UiMgr_FindLayout(0x35);
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
  uVar2 = UiRes_GetLayoutData(0x2a);
  iVar3 = UiMgr_FindLayout(0x35);
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
  uVar2 = UiRes_GetLayoutData(0x2b);
  iVar3 = UiMgr_FindLayout(0x35);
  iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
  *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x348) = 0;
  *(undefined4 *)(iVar3 + 0x338) = 0;
  if (*(int *)(iVar3 + 0x348) == 0) {
    *(undefined4 *)(iVar3 + 0x344) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x344) = 1;
  }
  *(undefined4 *)(iVar3 + 0x338) = 0;
  if (*(int *)(iVar3 + 0x348) == 0) {
    *(undefined4 *)(iVar3 + 0x344) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x344) = 1;
  }
  *(undefined4 *)(iVar3 + 0x340) = 0;
  *(undefined4 *)(iVar3 + 0x348) = uVar2;
  *(undefined4 *)(iVar3 + 0x344) = 1;
  Menu_ClearSlot(0);
  if ((*(int *)(_g_MenuMgr + 0x24) != 0xb) && (*(int *)(_g_MenuMgr + 0x24) != 0x29)) {
    Menu_ShowDialog(_g_MenuMgr + 0x654,0x116,3);
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,0);
  }
  return;
}

// 0x00274470  size 0x19c
void maybe_TakeOffCar_DrawPartStatus(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  Profile_Get(0);
  iVar3 = *(int *)(param_1 + 0x68) * 8 + param_1;
  sVar2 = *(short *)(iVar3 + 0x64c);
  iVar3 = *(int *)(iVar3 + 0x648);
  uVar5 = 0;
  if (sVar2 == -1) {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  }
  else {
    if (*(int *)(param_1 + 0x644) + -1 == *(int *)(param_1 + 0x68)) {
      sVar2 = -4;
    }
    else if (iVar3 == 0x13) {
      sVar2 = -3;
    }
    else if ((iVar3 == 0x11) || (iVar3 == 0xe)) {
      uVar1 = MenuText_CarModelId(0xffffffffffffffff,0);
      uVar5 = Maker_GetInfo(sVar2);
      sVar2 = CarDb_FindDefaultPart(uVar1,uVar5,0xffffffffffffffff);
      uVar5 = 2;
    }
    else if ((iVar3 == 0x10) || (iVar3 == 0xd)) {
      uVar1 = MenuText_CarModelId(0xffffffffffffffff,0);
      uVar5 = Maker_GetInfo(sVar2);
      sVar2 = CarDb_FindDefaultPart(uVar1,uVar5,0xffffffffffffffff);
      uVar5 = 1;
    }
    else {
      uVar1 = MenuText_CarModelId(0xffffffffffffffff,0);
      uVar4 = Maker_GetInfo(sVar2);
      sVar2 = CarDb_FindDefaultPart(uVar1,uVar4,0xffffffffffffffff);
    }
    if (sVar2 == -1) {
      MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
    }
    else {
      MenuWnd_DrawStatus(0xffffffffffffffff,0,sVar2,uVar5);
    }
  }
  return;
}

// 0x00274610  size 0x1f4
undefined4 maybe_Tune_GetPartGroupB(short param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (8 < param_1)) {
    if ((param_1 < 9) || (0x11 < param_1)) {
      if ((param_1 < 0x12) || (0x1a < param_1)) {
        if ((param_1 < 0x1b) || (0x23 < param_1)) {
          if ((param_1 < 0x2a) || (0x32 < param_1)) {
            if ((param_1 < 0x33) || (0x3b < param_1)) {
              if ((param_1 < 0x3c) || (0x44 < param_1)) {
                if ((param_1 < 0x45) || (0x4d < param_1)) {
                  if ((param_1 < 0x67) || (0x6a < param_1)) {
                    if ((param_1 < 0x6b) || (0x6d < param_1)) {
                      if ((param_1 < 0x6e) || (0x70 < param_1)) {
                        if ((param_1 < 0x8d) || (0x92 < param_1)) {
                          if ((param_1 < 0x93) || (0x97 < param_1)) {
                            if ((param_1 < 0x98) || (0x9c < param_1)) {
                              if ((param_1 < 0x9d) || (0xa1 < param_1)) {
                                uVar1 = 0xffffffff;
                              }
                              else {
                                uVar1 = 0x9d6;
                              }
                            }
                            else {
                              uVar1 = 0x9d5;
                            }
                          }
                          else {
                            uVar1 = 0x9d4;
                          }
                        }
                        else {
                          uVar1 = 0x9d3;
                        }
                      }
                      else {
                        uVar1 = 0x9ce;
                      }
                    }
                    else {
                      uVar1 = 0x9cd;
                    }
                  }
                  else {
                    uVar1 = 0x9cc;
                  }
                }
                else {
                  uVar1 = 0x9d2;
                }
              }
              else {
                uVar1 = 0x9d1;
              }
            }
            else {
              uVar1 = 0x9d0;
            }
          }
          else {
            uVar1 = 0x9cf;
          }
        }
        else {
          uVar1 = 0x9d2;
        }
      }
      else {
        uVar1 = 0x9d1;
      }
    }
    else {
      uVar1 = 0x9d0;
    }
  }
  else {
    uVar1 = 0x9cf;
  }
  return uVar1;
}

// 0x00274810  size 0xb4
undefined4 maybe_Rival_HasCarClass(ulong param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x10) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_1) {
    case 0:
      uVar1 = 1;
      break;
    case 1:
      uVar1 = 0;
      break;
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 6;
      break;
    case 4:
      uVar1 = 7;
      break;
    case 5:
      uVar1 = 8;
      break;
    case 6:
      uVar1 = 0xb;
      break;
    case 7:
      uVar1 = 0xc;
      break;
    case 8:
      uVar1 = 0xd;
      break;
    case 9:
      uVar1 = 9;
      break;
    case 10:
      uVar1 = 10;
      break;
    case 0xb:
      uVar1 = 0xe;
      break;
    case 0xc:
      uVar1 = 0xf;
      break;
    case 0xd:
      uVar1 = 3;
      break;
    case 0xe:
      uVar1 = 4;
      break;
    case 0xf:
      uVar1 = 5;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x002748d0  size 0xb4
undefined4 maybe_PartSlot_IsAvailable(ulong param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x10) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_1) {
    case 0:
      uVar1 = 1;
      break;
    case 1:
      uVar1 = 0;
      break;
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 0xd;
      break;
    case 4:
      uVar1 = 0xe;
      break;
    case 5:
      uVar1 = 0xf;
      break;
    case 6:
      uVar1 = 3;
      break;
    case 7:
      uVar1 = 4;
      break;
    case 8:
      uVar1 = 5;
      break;
    case 9:
      uVar1 = 9;
      break;
    case 10:
      uVar1 = 10;
      break;
    case 0xb:
      uVar1 = 6;
      break;
    case 0xc:
      uVar1 = 7;
      break;
    case 0xd:
      uVar1 = 8;
      break;
    case 0xe:
      uVar1 = 0xb;
      break;
    case 0xf:
      uVar1 = 0xc;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x00274990  size 0x1c0
void ScrGarage_Draw_Sponsors_4990(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetCurrentCar(uVar3);
  uVar2 = CarRec_GetModelId(uVar3);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x60) * 4 + param_1 + 0x608);
  uVar3 = Msg_TeamInfo(uVar1);
  uVar4 = Profile_Get(0);
  uVar4 = Garage_FindFreeSlot(uVar4);
  MenuWnd_DrawText(0x6b,0x45,0x128);
  MenuWnd_DrawLabel(0x6b,0x46,0x3d,uVar4,0xf);
  uVar4 = Msg_RivalNickname(uVar1);
  MenuWnd_DrawText(0x6b,0x47,uVar4);
  uVar4 = Msg_MakerCountry(uVar3);
  uVar5 = Msg_MakerName(uVar3);
  MenuWnd_DrawLabel(0x6b,0x40,0x45,uVar4,uVar5);
  MenuWnd_DrawTextId(0x6b,0x49,4,0x44);
  uVar4 = Maker_GetInfo(uVar3);
  uVar5 = Profile_Get(0);
  uVar4 = Profile_GetCurrentPartSlot(uVar5,uVar4);
  uVar5 = Msg_PartInfo(uVar4);
  uVar4 = Msg_MakerName(uVar4);
  MenuWnd_DrawLabel(0x6b,0x48,0x45,uVar5,uVar4);
  uVar4 = MsgId_PartDescription(uVar1);
  MenuWnd_DrawText(0x6b,0x4a,uVar4);
  lVar6 = Profile_BuildCarFromTeam(uVar2,uVar1,0);
  if (lVar6 == 1) {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,(short)uVar3,0);
  }
  else {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  }
  return;
}

// 0x00274b50  size 0x1c8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Front_4b50(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = Profile_Get(0);
  uVar2 = Profile_GetCurrentPartSlot(uVar2,0xf);
  uVar2 = Msg_MakerInfo(uVar2);
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetCurrentPartSlot(uVar3,0x10);
  uVar3 = Msg_MakerInfo(uVar3);
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetCurrentPartSlot(uVar4,0xf);
  uVar4 = PartDb_GetInfo(uVar4);
  uVar4 = Msg_PartInfo(uVar4);
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetCurrentPartSlot(uVar5,0x10);
  uVar5 = PartDb_GetInfo(uVar5);
  uVar5 = Msg_PartInfo(uVar5);
  MenuWnd_DrawTextId(0x65,0x17,4,0x44);
  uVar6 = maybe_CarModel_GetClassC(param_1);
  uVar6 = Msg_PartInfo(uVar6);
  MenuWnd_DrawText(0x65,0x18,uVar6);
  MenuWnd_DrawLabel(0x65,0x1c,0x45,uVar4,uVar2);
  MenuWnd_DrawLabel(0x65,0x1d,0x45,uVar5,uVar3);
  MenuWnd_DrawText(0x65,0x19,0x2f);
  MenuWnd_DrawText(0x65,0x1a,0x30);
  if (param_2 == 0) {
    MenuWnd_DrawText(0x65,0x1b,0x31);
  }
  else {
    MenuWnd_DrawTextId(0x65,0x1b,3,0x31);
  }
  UiLayout_UpdateAnimById(0x65,6);
  iVar1 = UiMgr_FindLayout(0x65);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00274d20  size 0x388
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Wheel_DrawList(long param_1,int param_2,long param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  if (param_2 < 9) {
    puVar7 = (undefined4 *)(&DAT_0032df50 + param_2 * 4);
    do {
      iVar4 = UiMgr_FindLayout(0x68);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,*puVar7,8);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 1;
    } while (param_2 < 9);
  }
  uVar5 = Msg_MakerInfo((short)param_1);
  MenuWnd_DrawText(0x68,0x1e,uVar5);
  lVar6 = Rival_IsBossId((short)param_1);
  if (lVar6 == 0) {
    iVar4 = Profile_Get(0);
    MenuWnd_DrawLabel(0x68,0x1f,0x3f,*(undefined2 *)(iVar4 + (int)param_1 * 2 + 0x1420));
  }
  uVar5 = Profile_Get(0);
  sVar3 = Profile_GetCurrentPartSlot(uVar5,0xd);
  bVar1 = param_1 == sVar3;
  uVar5 = Profile_Get(0);
  sVar3 = Profile_GetCurrentPartSlot(uVar5,0xe);
  bVar2 = param_1 == sVar3;
  if ((bVar1) || (bVar2)) {
    if ((!bVar1) || (bVar2)) {
      if ((bVar1) || (!bVar2)) {
        if ((bVar1) && (bVar2)) {
          if (param_4 == 0) {
            iVar4 = UiMgr_FindLayout(0x68);
            UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x1c,8);
          }
          iVar4 = UiMgr_FindLayout(0x68);
          UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0x1c,0x16,2);
        }
      }
      else {
        if (param_4 == 0) {
          iVar4 = UiMgr_FindLayout(0x68);
          UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x1c,8);
        }
        iVar4 = UiMgr_FindLayout(0x68);
        UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0x1c,0x16,1);
      }
    }
    else {
      if (param_4 == 0) {
        iVar4 = UiMgr_FindLayout(0x68);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x1c,8);
      }
      iVar4 = UiMgr_FindLayout(0x68);
      UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0x1c,0x16,0);
    }
  }
  else {
    iVar4 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x1c,8);
  }
  if (param_3 == 0) {
    iVar4 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x1c,8);
  }
  UiLayout_UpdateAnimById(0x68,4);
  iVar4 = UiMgr_FindLayout(0x68);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  return;
}

// 0x002750b0  size 0x3f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Wheel_DrawDetails(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack_8;
  int iStack_4;
  
  iStack_4 = iRam0036edcc;
  iVar4 = *(int *)(param_1 + 0x68);
  iStack_8 = iRam0036edc8;
  if (iVar4 == 0) {
    uVar3 = Profile_Get(0);
    sVar1 = Profile_GetCurrentPartSlot(uVar3,0xf);
    iStack_8 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar4 = param_1;
      do {
        if ((long)*(int *)(iVar4 + 0x7c) == (long)sVar1) goto LAB_002751b4;
        iStack_8 = iStack_8 + 1;
        iVar4 = iVar4 + 4;
      } while (iStack_8 < *(int *)(param_1 + 0x78));
    }
    iStack_8 = -1;
  }
  else if (iVar4 == 1) {
    uVar3 = Profile_Get(0);
    sVar1 = Profile_GetCurrentPartSlot(uVar3,0x10);
    iStack_8 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar4 = param_1;
      do {
        if ((long)*(int *)(iVar4 + 0x7c) == (long)sVar1) goto LAB_002751b4;
        iStack_8 = iStack_8 + 1;
        iVar4 = iVar4 + 4;
      } while (iStack_8 < *(int *)(param_1 + 0x78));
    }
    iStack_8 = -1;
  }
  else if (iVar4 == 2) {
    uVar3 = Profile_Get(0);
    sVar1 = Profile_GetCurrentPartSlot(uVar3,0xf);
    iStack_8 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar4 = param_1;
      do {
        if ((long)*(int *)(iVar4 + 0x7c) == (long)sVar1) goto LAB_00275158;
        iStack_8 = iStack_8 + 1;
        iVar4 = iVar4 + 4;
      } while (iStack_8 < *(int *)(param_1 + 0x78));
    }
    iStack_8 = -1;
LAB_00275158:
    uVar3 = Profile_Get(0);
    sVar1 = Profile_GetCurrentPartSlot(uVar3,0x10);
    iStack_4 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar4 = param_1;
      do {
        if ((long)*(int *)(iVar4 + 0x7c) == (long)sVar1) goto LAB_002751b4;
        iStack_4 = iStack_4 + 1;
        iVar4 = iVar4 + 4;
      } while (iStack_4 < *(int *)(param_1 + 0x78));
    }
    iStack_4 = -1;
  }
LAB_002751b4:
  iVar4 = 0;
  puVar5 = &DAT_0032df30;
  do {
    if ((iStack_8 == iVar4) || (iStack_4 == iVar4)) {
      if (*(int *)(param_1 + 0x9d4) == 0) {
        iVar2 = UiMgr_FindLayout(0x66);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar5,8);
      }
    }
    else {
      iVar2 = UiMgr_FindLayout(0x66);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar5,8);
    }
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 6);
  iVar4 = *(int *)(param_1 + 0x78);
  if (iVar4 < 6) {
    puVar5 = (undefined4 *)(&DAT_0032def0 + iVar4 * 4);
    do {
      iVar2 = UiMgr_FindLayout(0x66);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar5,8);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 6);
    iVar4 = *(int *)(param_1 + 0x78);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x78);
  }
  iVar2 = 0;
  if (0 < iVar4) {
    puVar5 = &DAT_0032df10;
    iVar4 = param_1;
    do {
      uVar3 = Msg_MakerInfo(*(undefined2 *)(iVar4 + 0x7c));
      MenuWnd_DrawText(0x66,*puVar5,uVar3);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
      puVar5 = puVar5 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x78));
  }
  iVar2 = UiMgr_FindLayout(100);
  iVar4 = *_g_UiMgr;
  uVar3 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 0xc),0xffffffffffffffff);
  uVar3 = MsgId_ForGrade(uVar3);
  UiElem_SetPropInt(iVar4 + iVar2 * 0x4f4 + 4,5,0x16,uVar3);
  iVar4 = UiMgr_FindLayout(0x66);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(100);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  return;
}

// 0x002754a0  size 0x3ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Wheel_DrawCarInfo(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar2 = -1;
  iVar10 = *(int *)(param_1 + 0x78);
  iVar4 = (iVar10 + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x9fc))) % iVar10;
  if (*(int *)(param_1 + 0x9e0) == 1) {
    iVar2 = iVar4 + iVar10 + -1;
  }
  else {
    if (*(int *)(param_1 + 0x9e0) != 2) goto LAB_00275530;
    iVar2 = iVar4 + 7;
  }
  iVar2 = iVar2 % iVar10;
LAB_00275530:
  if (iVar10 < 7) {
    puVar9 = (undefined4 *)(&DAT_0032de90 + iVar10 * 4);
    puVar8 = &DAT_0032ded0 + iVar10;
    do {
      iVar3 = UiMgr_FindLayout(99);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,*puVar9,8);
      iVar3 = UiMgr_FindLayout(99);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,*puVar8,8);
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar10 < 7);
  }
  uVar5 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 0xc),0xffffffffffffffff);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCurrentCar(uVar6);
  uVar6 = CarRec_GetName(uVar6);
  iVar10 = CarRec_GetOptionSlot(uVar6,uVar5);
  if (*(char *)(iVar10 + 2) == '\x1f') {
    iVar10 = 0;
    puVar8 = &DAT_0032ded0;
    do {
      iVar3 = UiMgr_FindLayout(99);
      UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,*puVar8,0x16,0);
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar10 < 7);
    iVar10 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar10 = *(int *)(param_1 + 0xc);
  }
  if ((iVar10 < 0) || (7 < iVar10)) {
    uVar5 = maybe_CarModel_GetClassA(iVar10,0xffffffffffffffff);
    uVar5 = MsgId_ForGradeShort(uVar5);
    MenuWnd_DrawText(99,0x44,uVar5);
  }
  else {
    uVar5 = maybe_CarModel_GetClassC();
    uVar5 = Msg_PartInfo(uVar5);
    MenuWnd_DrawText(99,0x44,uVar5);
  }
  iVar10 = 0;
  puVar9 = &DAT_0032deb0;
  puVar8 = &DAT_0032ded0;
  do {
    iVar3 = *(int *)(param_1 + 0x78);
    if (7 < iVar3) {
      iVar3 = 8;
    }
    if (iVar3 <= iVar10) goto LAB_00275754;
    if (iVar10 == 7) {
      if (iVar2 == -1) {
LAB_00275754:
        iVar4 = UiMgr_FindLayout(99);
        UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
        lVar7 = maybe_CarSlot_IsSpecial(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8))
        ;
        if (lVar7 == 1) {
          Menu_DrawFrame(_g_MenuMgr + 0x654);
        }
        return;
      }
      iVar4 = iVar2;
    }
    iVar3 = param_1 + iVar4 * 4;
    uVar5 = Msg_PartMaker(*(undefined2 *)(iVar3 + 0x7c));
    MenuWnd_DrawText(99,*puVar9,uVar5);
    uVar5 = Profile_Get(0);
    uVar6 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 0xc),0xffffffffffffffff);
    sVar1 = Profile_GetCurrentPartSlot(uVar5,uVar6);
    if ((long)*(int *)(iVar3 + 0x7c) == (long)sVar1) {
      if (*(int *)(param_1 + 0x9d4) == 0) {
        iVar3 = UiMgr_FindLayout(99);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,*puVar8,8);
      }
      iVar3 = *(int *)(param_1 + 0x78);
    }
    else {
      iVar3 = UiMgr_FindLayout(99);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,*puVar8,8);
      iVar3 = *(int *)(param_1 + 0x78);
    }
    iVar4 = (iVar4 + 1) % iVar3;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    iVar10 = iVar10 + 1;
  } while( true );
}

// 0x00275890  size 0x1b4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_AreCurrentlyEquipped(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0xa14);
  *(undefined4 *)(iVar5 + 0xa14) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = *(int *)(iVar5 + 0xa04);
  if (iVar1 == 0x1b) {
    uVar3 = Msg_TeamInfo(*(undefined4 *)(*(int *)(iVar5 + 0x60) * 4 + iVar5 + 0x608));
    uVar4 = Msg_MakerCountry(uVar3);
    uVar3 = Msg_MakerName(uVar3);
    MenuWnd_DrawLabel(5,0x1c,0x214,uVar4,uVar3);
  }
  else if (iVar1 == 0x1c) {
    uVar3 = MsgId_PartDescription();
    MenuWnd_DrawLabel(5,0x1c,0x215,uVar3);
  }
  else {
    if (iVar1 == 0x1a) {
      uVar3 = MsgId_PartDescription();
      MenuWnd_DrawLabel(5,0x1c,0x1eb,uVar3);
      iVar1 = *(int *)(iVar5 + 0xa18);
      goto LAB_0027593c;
    }
    MenuWnd_DrawLabel(5,0x1c,0x1fc);
  }
  iVar1 = *(int *)(iVar5 + 0xa18);
LAB_0027593c:
  if (iVar1 != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar5 + 0xa18) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar5 + 0xa10) = 0;
  }
  ScrGarage_Draw_Sponsors_4990(param_1);
  iVar1 = UiMgr_FindLayout(0x6b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00275a50  size 0x85c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32dbbc */

void ScrTakeOffCar_Exit(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  
  iVar3 = -1;
  iVar10 = (int)param_1;
  iVar5 = *(int *)(iVar10 + 0xa14);
  *(undefined4 *)(iVar10 + 0xa14) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar10 + 0xa00);
  }
  else {
    uVar4 = UiRes_GetLayoutData(0x3b3);
    iVar5 = UiMgr_FindLayout(0x6b);
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
    uVar4 = UiRes_GetLayoutData(0x3b4);
    iVar5 = UiMgr_FindLayout(0x6b);
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
    uVar4 = UiRes_GetLayoutData(0x3b5);
    iVar5 = UiMgr_FindLayout(0x6b);
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
    uVar4 = UiRes_GetLayoutData(0x3b6);
    iVar5 = UiMgr_FindLayout(0x6b);
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
    uVar4 = UiRes_GetLayoutData(0x427);
    iVar5 = UiMgr_FindLayout(0x6b);
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
    *(undefined4 *)(iVar5 + 0x368) = 0;
    *(undefined4 *)(iVar5 + 0x370) = uVar4;
    *(undefined4 *)(iVar5 + 0x36c) = 1;
    uVar4 = UiRes_GetLayoutData(0x428);
    iVar5 = UiMgr_FindLayout(0x6b);
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
    *(undefined4 *)(iVar5 + 0x37c) = 0;
    *(undefined4 *)(iVar5 + 900) = uVar4;
    *(undefined4 *)(iVar5 + 0x380) = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x6b,0x36edc0,2,0);
    iVar5 = *(int *)(iVar10 + 0xa00);
  }
  bVar1 = true;
  if (iVar5 - 0x1aU < 4) {
    *(undefined4 *)(iVar10 + 0xa10) = 0;
    bVar1 = false;
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(0x6b,0);
    lVar9 = UiLayout_UpdateAnimById(0x6b,4);
    if (lVar7 == 0 && lVar9 == 0) {
      *(undefined4 *)(iVar10 + 0xa10) = 0;
    }
    else {
      bVar1 = false;
    }
  }
  if (*(int *)(iVar10 + 0xa18) == 0) {
    MenuWnd_DrawCursor(3 < *(int *)(iVar10 + 0x604));
    bVar1 = false;
  }
  else {
    MenuWnd_DrawCursor(0);
    if (*(int *)(iVar10 + 0xa08) - 0x1aU < 4) {
      MenuWnd_SetItemVisible(0);
      *(undefined4 *)(iVar10 + 0xa18) = 0;
    }
    else {
      lVar7 = UiLayout_UpdateAnimById(0x6b,1);
      lVar9 = UiLayout_UpdateAnimById(0x6b,5);
      if (lVar7 == 0 && lVar9 == 0) {
        *(undefined4 *)(iVar10 + 0xa18) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  if (((*(uint *)(_g_MenuMgr + 0x28) & 1) != 0) || ((*(uint *)(_g_MenuMgr + 0x28) & 2) != 0)) {
    bVar1 = true;
  }
  if (*(int *)(iVar10 + 0xa24) == 0x1b) {
    if (!bVar1) {
      iVar5 = UiMgr_FindLayout(0x6b);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x3e,8);
    }
  }
  else {
    iVar5 = UiMgr_FindLayout(0x6b);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x3e,8);
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x6b,*(undefined4 *)(&DAT_0032de70 + *(int *)(iVar10 + 0x9f0) * 4),0,0);
    iVar5 = *(int *)(iVar10 + 0x604);
  }
  else {
    iVar5 = *(int *)(iVar10 + 0x604);
  }
  if (iVar5 < 3) {
    puVar13 = (undefined4 *)(&DAT_0032de80 + iVar5 * 4);
    puVar11 = &DAT_0032de60 + iVar5;
    do {
      iVar6 = UiMgr_FindLayout(0x6b);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*puVar13,8);
      iVar6 = UiMgr_FindLayout(0x6b);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*puVar11,8);
      iVar5 = iVar5 + 1;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar5 < 3);
    iVar5 = *(int *)(iVar10 + 0x9e0);
  }
  else {
    iVar5 = *(int *)(iVar10 + 0x9e0);
  }
  if (iVar5 == 1) {
    Menu_ClearSlot(0);
    lVar7 = UiLayout_UpdateAnimById(0x6b,2);
    if (lVar7 == 0) {
      *(undefined4 *)(iVar10 + 0x9e0) = 0;
      iVar5 = UiMgr_FindLayout(0x6b);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x338) = 0;
      if (*(int *)(iVar5 + 0x348) == 0) {
        *(undefined4 *)(iVar5 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x344) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar3 = (*(int *)(iVar10 + 0x604) + (*(int *)(iVar10 + 0x60) - *(int *)(iVar10 + 0x9f0)) + -1)
              % *(int *)(iVar10 + 0x604);
    }
  }
  else {
    if (iVar5 != 2) {
      iVar5 = *(int *)(iVar10 + 0x60);
      goto LAB_00275c18;
    }
    lVar7 = UiLayout_UpdateAnimById(0x6b,3);
    if (lVar7 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(iVar10 + 0x9e0) = 0;
      iVar5 = UiMgr_FindLayout(0x6b);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x34c) = 0;
      if (*(int *)(iVar5 + 0x35c) == 0) {
        *(undefined4 *)(iVar5 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x358) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar3 = (*(int *)(iVar10 + 0x604) + (*(int *)(iVar10 + 0x60) - *(int *)(iVar10 + 0x9f0)) + 3)
              % *(int *)(iVar10 + 0x604);
    }
  }
  iVar5 = *(int *)(iVar10 + 0x60);
LAB_00275c18:
  iVar6 = *(int *)(iVar10 + 0x604);
  iVar5 = (iVar6 + (iVar5 - *(int *)(iVar10 + 0x9f0))) % iVar6;
  iVar12 = 0;
  puVar11 = &DAT_0032de60;
  do {
    if (3 < iVar6) {
      iVar6 = 4;
    }
    if (iVar6 <= iVar12) goto LAB_00275cd8;
    if (iVar12 == 3) {
      if (iVar3 == -1) {
LAB_00275cd8:
        ScrGarage_Draw_Sponsors_4990(param_1);
        iVar3 = UiMgr_FindLayout(0x6b);
        UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
        MenuWnd_SetTitle(3,0xffffffffffffffff);
        return;
      }
      iVar5 = iVar3;
    }
    uVar4 = *(undefined4 *)(iVar10 + iVar5 * 4 + 0x608);
    iVar2 = UiMgr_FindLayout(0x6b);
    iVar6 = *_g_UiMgr;
    uVar8 = MsgId_Symbol(uVar4);
    UiElem_SetPropInt(iVar6 + iVar2 * 0x4f4 + 4,*puVar11,0x16,uVar8);
    iVar6 = *(int *)(iVar10 + 0x604);
    iVar5 = (iVar5 + 1) % iVar6;
    puVar11 = puVar11 + 1;
    iVar12 = iVar12 + 1;
  } while( true );
}

// 0x002762b0  size 0x1bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_TakeOffCar(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  uVar4 = MenuText_CarShortName(0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x644) + -1 == *(int *)(param_1 + 0x68)) {
    MenuWnd_DrawLabel(5,0x1c,0x21b,uVar4);
    iVar2 = *(int *)(param_1 + 0xa18);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x68) * 8 + param_1;
    if (*(int *)(iVar2 + 0x648) == 0x13) {
      MenuWnd_DrawLabel(5,0x1c,0x21d,0x98f,0xffffffffffffffff,uVar4);
    }
    else {
      uVar1 = *(undefined2 *)(iVar2 + 0x64c);
      uVar5 = Msg_PartInfo(uVar1);
      uVar6 = Msg_MakerName(uVar1);
      MenuWnd_DrawLabel(5,0x1c,0x21d,uVar5,uVar6,uVar4);
    }
    iVar2 = *(int *)(param_1 + 0xa18);
  }
  if (iVar2 != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  MenuWnd_DrawText(0x6c,1,0x1e0);
  iVar2 = UiMgr_FindLayout(0x6c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00276470  size 0xf8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_TakeOffCar_6470(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0xa14);
  *(undefined4 *)(iVar3 + 0xa14) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x219,0xffffffffffffffff,0);
  if (*(int *)(iVar3 + 0xa18) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0xa18) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0xa10) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  maybe_TakeOffCar_DrawPartStatus(param_1);
  MenuWnd_DrawText(0x6c,1,0x1e0);
  iVar1 = UiMgr_FindLayout(0x6c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00276570  size 0x1b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_TakeOffCar_6570(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar2 = *(int *)(iVar7 + 0xa14);
  *(undefined4 *)(iVar7 + 0xa14) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(iVar7 + 0x9d8),0x36edb8);
  uVar4 = MenuText_CarShortName(0xffffffffffffffff,0);
  if (*(int *)(iVar7 + 0x644) + -1 == *(int *)(iVar7 + 0x68)) {
    MenuWnd_DrawLabel(5,0x1c,0x21a,uVar4);
    iVar2 = *(int *)(iVar7 + 0xa18);
  }
  else {
    iVar2 = *(int *)(iVar7 + 0x68) * 8 + iVar7;
    if (*(int *)(iVar2 + 0x648) == 0x13) {
      MenuWnd_DrawLabel(5,0x1c,0x21c,0x98f,0xffffffffffffffff,uVar4);
    }
    else {
      uVar1 = *(undefined2 *)(iVar2 + 0x64c);
      uVar5 = Msg_PartInfo(uVar1);
      uVar6 = Msg_MakerName(uVar1);
      MenuWnd_DrawLabel(5,0x1c,0x21c,uVar5,uVar6,uVar4);
    }
    iVar2 = *(int *)(iVar7 + 0xa18);
  }
  if (iVar2 != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(iVar7 + 0xa18) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(iVar7 + 0xa10) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawText(0x6c,1,0x1e0);
  iVar2 = UiMgr_FindLayout(0x6c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  maybe_TakeOffCar_DrawPartStatus(param_1);
  return;
}

// 0x00276720  size 0xa94
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_TakeOffCar_6720(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  
  iVar11 = (int)param_1;
  iVar4 = *(int *)(iVar11 + 0x644);
  if (iVar4 == 2) {
    iVar4 = 1;
  }
  iVar14 = *(int *)(iVar11 + 0xa14);
  iVar15 = *(int *)(iVar11 + 0x68) - *(int *)(iVar11 + 0x9f8);
  *(undefined4 *)(iVar11 + 0xa14) = 0;
  if (iVar14 != 0) {
    uVar5 = UiRes_GetLayoutData(0xd0);
    iVar14 = UiMgr_FindLayout(0xc);
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
    *(undefined4 *)(iVar14 + 800) = uVar5;
    *(undefined4 *)(iVar14 + 0x31c) = 1;
    uVar5 = UiRes_GetLayoutData(0xd1);
    iVar14 = UiMgr_FindLayout(0xc);
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
    *(undefined4 *)(iVar14 + 0x334) = uVar5;
    *(undefined4 *)(iVar14 + 0x330) = 1;
    uVar5 = UiRes_GetLayoutData(0xd2);
    iVar14 = UiMgr_FindLayout(0xc);
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
    *(undefined4 *)(iVar14 + 0x340) = 0;
    *(undefined4 *)(iVar14 + 0x348) = uVar5;
    *(undefined4 *)(iVar14 + 0x344) = 1;
    uVar5 = UiRes_GetLayoutData(0xd3);
    iVar14 = UiMgr_FindLayout(0xc);
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
    *(undefined4 *)(iVar14 + 0x354) = 0;
    *(undefined4 *)(iVar14 + 0x35c) = uVar5;
    *(undefined4 *)(iVar14 + 0x358) = 1;
    uVar5 = UiRes_GetLayoutData(0x3b7);
    iVar14 = UiMgr_FindLayout(0x6c);
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
    *(undefined4 *)(iVar14 + 800) = uVar5;
    *(undefined4 *)(iVar14 + 0x31c) = 1;
    uVar5 = UiRes_GetLayoutData(0x3b8);
    iVar14 = UiMgr_FindLayout(0x6c);
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
    *(undefined4 *)(iVar14 + 0x334) = uVar5;
    *(undefined4 *)(iVar14 + 0x330) = 1;
    Menu_ClearSlot(0);
    Menu_ClearSlot(1);
    if (iVar4 == 0) {
      MenuWnd_SetHelpText(0);
    }
    MenuWnd_DrawDialogText(0xc,0x36edb0,2,0);
  }
  lVar13 = 2;
  if (iVar4 == 0) {
    lVar13 = MenuWnd_DrawFooter(0x223,0xffffffffffffffff,0);
  }
  if (*(int *)(iVar11 + 0xa00) == 1) {
    lVar6 = UiLayout_UpdateAnimById(0xc,0);
    lVar7 = UiLayout_UpdateAnimById(0x6c,0);
    if ((lVar6 == 0 && lVar7 == 0) && (lVar13 == 2)) {
      *(undefined4 *)(iVar11 + 0xa10) = 0;
    }
  }
  else {
    lVar6 = UiLayout_UpdateAnimById(0xc,0);
    if ((lVar6 == 0) && (lVar13 == 2)) {
      *(undefined4 *)(iVar11 + 0xa10) = 0;
    }
  }
  if (*(int *)(iVar11 + 0xa18) == 0) {
    if (iVar4 != 0) {
      MenuWnd_DrawCursor(1);
    }
  }
  else {
    lVar6 = 0;
    if (*(int *)(iVar11 + 0xa00) == 1) {
      lVar6 = UiLayout_UpdateAnimById(0x6c);
    }
    if (iVar4 == 0) {
      if ((lVar13 == 2) && (lVar6 == 0)) {
        MenuWnd_RequestRedraw();
      }
      lVar7 = UiLayout_UpdateAnimById(0xc,1);
      if (((lVar7 == 0) && (lVar13 == 3)) && (lVar6 == 0)) {
        *(undefined4 *)(iVar11 + 0xa18) = 0;
      }
    }
    else {
      lVar13 = UiLayout_UpdateAnimById(0xc,1);
      if ((lVar13 == 0) && (lVar6 == 0)) {
        *(undefined4 *)(iVar11 + 0xa18) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  if ((*piRam0036f468 == 1) && (iVar4 != 0)) {
    MenuWnd_SetItemState(0xc,*(undefined4 *)(&DAT_0032de20 + *(int *)(iVar11 + 0x9f8) * 4),0,0);
  }
  if ((iVar4 != 0) && (iVar4 < 7)) {
    puVar12 = (undefined4 *)(iVar4 * 4 + 0x32de40);
    iVar14 = iVar4;
    do {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar12,8);
      iVar14 = iVar14 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar14 < 7);
  }
  iVar14 = UiMgr_FindLayout(0xc);
  iVar14 = *_g_UiMgr + iVar14 * 0x4f4 + 4;
  if (iVar4 < 8) {
    UiElem_SetPropFloat(0x41800000,iVar14,8,2);
    UiElem_SetPropFloat(0x41380000,iVar14,8,6);
    iVar14 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar14 * 0x4f4 + 4,0x44,8);
    iVar14 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar14 * 0x4f4 + 4,0x45,8);
    iVar14 = *(int *)(iVar11 + 0x9e0);
  }
  else {
    UiElem_SetPropFloat((float)iVar15 * (184.0 / (float)iVar4) + 16.0,iVar14,8,2);
    UiElem_SetPropFloat((7.0 / (float)iVar4) * 11.5,iVar14,8,6);
    if (iVar15 == 0) {
      iVar14 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar14 * 0x4f4 + 4,0x44,8);
    }
    if (iVar4 == iVar15 + 7) {
      iVar14 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar14 * 0x4f4 + 4,0x45,8);
    }
    iVar14 = *(int *)(iVar11 + 0x9e0);
  }
  iVar2 = -1;
  if (iVar14 == 1) {
    Menu_ClearSlot(0);
    lVar13 = UiLayout_UpdateAnimById(0xc,2);
    if (lVar13 == 0) {
      *(undefined4 *)(iVar11 + 0x9e0) = 0;
      iVar14 = UiMgr_FindLayout(0xc);
      iVar14 = *_g_UiMgr + iVar14 * 0x4f4;
      *(undefined4 *)(iVar14 + 0x338) = 0;
      if (*(int *)(iVar14 + 0x348) == 0) {
        *(undefined4 *)(iVar14 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar14 + 0x344) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar2 = iVar15 + -1;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
    }
  }
  else if (iVar14 == 2) {
    lVar13 = UiLayout_UpdateAnimById(0xc,3);
    if (lVar13 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(iVar11 + 0x9e0) = 0;
      iVar14 = UiMgr_FindLayout(0xc);
      iVar14 = *_g_UiMgr + iVar14 * 0x4f4;
      *(undefined4 *)(iVar14 + 0x34c) = 0;
      if (*(int *)(iVar14 + 0x35c) == 0) {
        *(undefined4 *)(iVar14 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar14 + 0x358) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar2 = iVar15 + 7;
    }
  }
  iVar14 = 0;
  puVar12 = &DAT_0032dde0;
  do {
    if (iVar4 < 8) {
      iVar3 = iVar4;
    }
    else {
      iVar3 = 8;
    }
    if (iVar3 <= iVar14) goto LAB_00276b58;
    if (iVar14 == 7) {
      if (iVar2 == -1) {
LAB_00276b58:
        MenuWnd_SetTitle(3,0x218);
        if (iVar4 != 0) {
          iVar4 = UiMgr_FindLayout(0xc);
          UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
        }
        MenuWnd_DrawText(0x6c,1,0x1e0);
        iVar4 = UiMgr_FindLayout(0x6c);
        UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
        maybe_TakeOffCar_DrawPartStatus(param_1);
        return;
      }
      iVar15 = iVar2;
    }
    if (iVar15 == *(int *)(iVar11 + 0x644) + -1) {
      MenuWnd_DrawText(0xc,*puVar12,0x221);
    }
    else {
      iVar10 = iVar11 + iVar15 * 8;
      iVar3 = *(int *)(iVar10 + 0x648);
      uVar1 = *(undefined2 *)(iVar10 + 0x64c);
      if (iVar3 == 0x13) {
        MenuWnd_DrawText(0xc,*puVar12,0x98f);
      }
      else if (iVar3 == 0x11) {
        MenuWnd_DrawText(0xc,*puVar12,0x9c0);
        uVar8 = maybe_Tune_GetPartGroupB(uVar1);
        uVar9 = Msg_MakerInfo();
        MenuWnd_DrawLabel(0xc,puVar12[1],0x45,uVar8,uVar9);
      }
      else if (iVar3 == 0xe) {
        MenuWnd_DrawText(0xc,*puVar12,0x9bf);
        uVar8 = maybe_Tune_GetPartGroupB(uVar1);
        uVar9 = Msg_MakerInfo();
        MenuWnd_DrawLabel(0xc,puVar12[1],0x45,uVar8,uVar9);
      }
      else {
        uVar8 = maybe_PartSlot_GetCategory();
        uVar8 = MsgId_ForGradeShort(uVar8);
        MenuWnd_DrawText(0xc,*puVar12,uVar8);
        uVar8 = maybe_Tune_GetPartGroupB(uVar1);
        uVar9 = Msg_MakerInfo();
        MenuWnd_DrawLabel(0xc,puVar12[1],0x45,uVar8,uVar9);
      }
    }
    iVar15 = iVar15 + 1;
    puVar12 = puVar12 + 2;
    iVar14 = iVar14 + 1;
  } while( true );
}

// 0x002771c0  size 0x148
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_InspectCarParts(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  uVar1 = *(undefined2 *)(*(int *)(param_1 + 0xc) * 2 + param_1 + 0x70c);
  uVar4 = Msg_PartInfo(uVar1);
  uVar5 = Msg_MakerName(uVar1);
  MenuWnd_DrawLabel(5,0x1c,0x217,uVar4,uVar5);
  if (*(int *)(param_1 + 0xa18) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  MenuWnd_DrawText(0x6c,1,0x1df);
  iVar2 = UiMgr_FindLayout(0x6c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x00277310  size 0x148
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_InspectCarParts_7310(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x9d8),0x36eda8);
  uVar1 = *(undefined2 *)(*(int *)(param_1 + 0xc) * 2 + param_1 + 0x70c);
  uVar4 = Msg_PartInfo(uVar1);
  uVar5 = Msg_MakerName(uVar1);
  MenuWnd_DrawLabel(5,0x1c,0x216,uVar4,uVar5);
  if (*(int *)(param_1 + 0xa18) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  MenuWnd_DrawText(0x6c,1,0x1df);
  iVar2 = UiMgr_FindLayout(0x6c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x00277460  size 0x4c4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_InspectCarParts(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_s0;
  
  iVar4 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x708);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0xb7);
    iVar4 = UiMgr_FindLayout(0x45);
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
    *(undefined4 *)(iVar4 + 0x334) = uVar3;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    uVar3 = UiRes_GetLayoutData(0xcf);
    iVar4 = UiMgr_FindLayout(0x46);
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
    *(undefined4 *)(iVar4 + 0x348) = uVar3;
    *(undefined4 *)(iVar4 + 0x344) = 1;
    uVar3 = UiRes_GetLayoutData(0x3b7);
    iVar4 = UiMgr_FindLayout(0x6c);
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
    *(undefined4 *)(iVar4 + 800) = uVar3;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0x3b8);
    iVar4 = UiMgr_FindLayout(0x6c);
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
    *(undefined4 *)(iVar4 + 0x334) = uVar3;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    if (*(int *)(param_1 + 0x708) == 0) {
      MenuWnd_SetHelpText(0);
    }
    MenuWnd_DrawHelp();
    iVar4 = *(int *)(param_1 + 0x708);
  }
  if (iVar4 == 0) {
    unaff_s0 = MenuWnd_DrawFooter(0x222,0xffffffffffffffff,0);
    lVar5 = MenuWnd_DrawHeader(0,0,0,0);
    goto LAB_00277734;
  }
  if (iVar4 < 0xb) {
LAB_002778c0:
    iVar4 = *(int *)(param_1 + 0x70);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 == (iVar1 + 1) % iVar4) {
      *(int *)(param_1 + 0x70) = iVar1;
      MenuMgr_LockInput(0);
      goto LAB_002778c0;
    }
    if (iVar1 != (iVar2 + 10) % iVar4) goto LAB_002778c0;
    *(int *)(param_1 + 0x70) = (iVar2 + 1) % iVar4;
    MenuMgr_LockInput(1);
    iVar4 = *(int *)(param_1 + 0x70);
  }
  iVar1 = *(int *)(param_1 + 0x708);
  lVar5 = MenuWnd_DrawHeader(param_1 + 0x70c,iVar1,iVar4,
                             (iVar1 + (*(int *)(param_1 + 0xc) - iVar4)) % iVar1);
LAB_00277734:
  if (*(int *)(param_1 + 0xa00) == 1) {
    UiLayout_UpdateAnimById(0x6c,0);
  }
  lVar6 = UiLayout_UpdateAnimById(0x45,0);
  lVar7 = UiLayout_UpdateAnimById(0x46,1);
  if ((lVar6 == 0 && lVar7 == 0) &&
     (((*(int *)(param_1 + 0x708) != 0 || (unaff_s0 == 2)) && (lVar5 == 2)))) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) != 0) {
    if (*(int *)(param_1 + 0xa08) == 1) {
      UiLayout_UpdateAnimById(0x6c);
    }
    if (lVar5 == 2) {
      MenuWnd_RequestClose();
      iVar4 = *(int *)(param_1 + 0x708);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x708);
    }
    if (iVar4 == 0) {
      if (unaff_s0 == 2) {
        MenuWnd_RequestRedraw();
      }
      lVar6 = UiLayout_UpdateAnimById(0x45,1);
      lVar7 = UiLayout_UpdateAnimById(0x46,2);
      if (((lVar6 == 0 && lVar7 == 0) && (unaff_s0 == 3)) && (lVar5 == 3)) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
    else if (lVar5 == 3) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  MenuWnd_DrawText(0x6c,1,0x1df);
  iVar4 = UiMgr_FindLayout(0x6c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x00277930  size 0xb48
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Front(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar5 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar5 != 0) {
    uVar4 = UiRes_GetLayoutData(0x14e);
    iVar5 = UiMgr_FindLayout(0x6a);
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
    uVar4 = UiRes_GetLayoutData(0x14f);
    iVar5 = UiMgr_FindLayout(0x6a);
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
    uVar4 = UiRes_GetLayoutData(0x150);
    iVar5 = UiMgr_FindLayout(0x6a);
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
    uVar4 = UiRes_GetLayoutData(0x151);
    iVar5 = UiMgr_FindLayout(0x6a);
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
    uVar4 = UiRes_GetLayoutData(0x152);
    iVar5 = UiMgr_FindLayout(0x6a);
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
    *(undefined4 *)(iVar5 + 0x368) = 0;
    *(undefined4 *)(iVar5 + 0x370) = uVar4;
    *(undefined4 *)(iVar5 + 0x36c) = 1;
    uVar4 = UiRes_GetLayoutData(0x153);
    iVar5 = UiMgr_FindLayout(0x6a);
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
    *(undefined4 *)(iVar5 + 0x37c) = 0;
    *(undefined4 *)(iVar5 + 900) = uVar4;
    *(undefined4 *)(iVar5 + 0x380) = 1;
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar5 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x33,8);
    }
    else {
      iVar5 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x33,8);
    }
    MenuWnd_DrawDialogText(0x6a,0x36eda0,2,0);
  }
  lVar6 = UiLayout_UpdateAnimById(0x6a,0);
  lVar7 = UiLayout_UpdateAnimById(0x6a,1);
  if (lVar6 == 0 && lVar7 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) == 0) {
    MenuWnd_DrawCursor();
    if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x9f4)) {
      iVar5 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x3e,8);
      iVar5 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x1c);
    }
    if ((*(int *)(param_1 + 0x74) == (iVar5 - *(int *)(param_1 + 0x9f4)) + 3) ||
       (*(int *)(param_1 + 0x74) < 3)) {
      iVar5 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x3f,8);
    }
    iVar5 = *(int *)(param_1 + 0x9e0);
  }
  else {
    lVar6 = UiLayout_UpdateAnimById(0x6a,2);
    lVar7 = UiLayout_UpdateAnimById(0x6a,3);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
    MenuWnd_DrawCursor(0);
    iVar5 = *(int *)(param_1 + 0x9e0);
  }
  iVar12 = -1;
  if (iVar5 == 1) {
    Menu_ClearSlot(0);
    lVar6 = UiLayout_UpdateAnimById(0x6a,4);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar5 = UiMgr_FindLayout(0x6a);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x360) = 0;
      if (*(int *)(iVar5 + 0x370) == 0) {
        *(undefined4 *)(iVar5 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x36c) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar12 = (*(int *)(param_1 + 0x74) + (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x9f4)) +
               -1) % *(int *)(param_1 + 0x74);
    }
  }
  else if (iVar5 == 2) {
    lVar6 = UiLayout_UpdateAnimById(0x6a,5);
    if (lVar6 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar5 = UiMgr_FindLayout(0x6a);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x374) = 0;
      if (*(int *)(iVar5 + 900) == 0) {
        *(undefined4 *)(iVar5 + 0x380) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x380) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar12 = (*(int *)(param_1 + 0x74) + (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x9f4)) +
               3) % *(int *)(param_1 + 0x74);
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x6a,*(undefined4 *)(&DAT_0032dda8 + *(int *)(param_1 + 0x9f4) * 4),0,0);
  }
  iVar2 = UiMgr_FindLayout(0x6a);
  iVar5 = *(int *)(param_1 + 0x74);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4 + 4;
  if (iVar5 < 4) {
    UiElem_SetPropFloat(0x41800000,iVar2,0x21,1);
    UiElem_SetPropFloat(0x41e80000,iVar2,0x21,6);
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  else {
    UiElem_SetPropFloat((float)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x9f4)) *
                        (464.0 / (float)iVar5) + 16.0,iVar2,0x21,1);
    UiElem_SetPropFloat((3.0 / (float)iVar5) * 29.0,iVar2,0x21,6);
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  iVar2 = *(int *)(param_1 + 0x74);
  iVar5 = (iVar2 + (iVar5 - *(int *)(param_1 + 0x9f4))) % iVar2;
  iVar10 = 0;
  puVar11 = (undefined4 *)0x32ddd0;
  puVar9 = &DAT_0032ddc0;
  do {
    if (iVar10 == 3) {
      if (iVar12 == -1) break;
      iVar5 = iVar12;
    }
    if (iVar10 < iVar2) {
      if (*(int *)(param_1 + 0x14) == 0) {
        if (iVar5 == *(int *)(param_1 + 0x604)) {
          iVar2 = 0x1e;
        }
        else {
          iVar2 = *(int *)(param_1 + iVar5 * 4 + 0x608) + 0x1f;
        }
      }
      else if (iVar5 == 0xc) {
        iVar2 = 0x1e;
      }
      else {
        iVar2 = iVar5 + 0x71;
      }
      iVar3 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,*puVar9,0x16,iVar2);
    }
    else {
      iVar2 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar11,8);
      iVar2 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar9,8);
    }
    iVar2 = *(int *)(param_1 + 0x74);
    iVar5 = (iVar5 + 1) % iVar2;
    iVar10 = iVar10 + 1;
    puVar11 = puVar11 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar10 < 4);
  if (*(uint *)(param_1 + 0x18) < 0x10) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(param_1 + 0x18)) {
    case 0:
    case 1:
    case 2:
      MenuWnd_DrawText(0x69,0x3c,0x1e4);
      iVar5 = *(int *)(param_1 + 0x14);
      goto LAB_00277ce8;
    case 3:
    case 4:
    case 5:
      MenuWnd_DrawText(0x69,0x3c,0x1e5);
      break;
    default:
      MenuWnd_DrawText(0x69,0x3c,0x1e6);
      break;
    case 0xb:
      MenuWnd_DrawText(0x69,0x3c,0x1e7);
    }
  }
  iVar5 = *(int *)(param_1 + 0x14);
LAB_00277ce8:
  if (iVar5 == 0) {
    iVar5 = UiMgr_FindLayout(0x6a);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x33,8);
    MenuWnd_DrawText(0x6a,0x35,0x1e8);
    if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x604)) {
      MenuWnd_DrawNumber(0x6a,0x34,0);
    }
    else {
      TeamDb_Copy(&uStack_60,*(undefined1 *)(*(int *)(param_1 + 0x1c) * 4 + param_1 + 0x608));
      uStack_28 = uStack_58;
      uStack_24 = uStack_54;
      uStack_20 = uStack_50;
      uStack_1c = uStack_4c;
      uStack_30 = uStack_60;
      uStack_2c = uStack_5c;
      uStack_18 = uStack_48;
      uStack_14 = uStack_44;
      uStack_10 = uStack_40;
      uStack_c = uStack_3c;
      uVar1 = maybe_PartSlot_IsAvailable(*(undefined4 *)(param_1 + 0x18));
      uVar8 = Rival_HasCar(&uStack_30,uVar1);
      MenuWnd_DrawNumber(0x6a,0x34,uVar8);
    }
  }
  else {
    iVar5 = UiMgr_FindLayout(0x6a);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x33,8);
  }
  UiLayout_UpdateAnimById(0x69,8);
  iVar5 = UiMgr_FindLayout(0x69);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0x6a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

