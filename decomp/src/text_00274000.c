// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00274000 - 0x00278000
#include "ghidra_types.h"

// 0x002740f0  size 0x30
/* screen record 0x3278c0 */

void PageTuneUp_Exit(void)

{
  Menu_BlockInput(&g_MenuMgr->field_0x654);
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00274120  size 0x114
/* screen record 0x3278c0 */

void PageTuneUp_Update(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = UiLayout_UpdateAnimById(0x35,0);
  if (lVar2 != 1) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  ScrCareer_Draw_TuneUp(param_1);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  if ((g_MenuMgr->flags & 4) == 0) {
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
      if ((g_MenuMgr->flags & 1) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
      }
    }
  }
  return;
}

// 0x00274240  size 0x22c
/* screen record 0x3278c0 */

void PageTuneUp_Enter(void)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = UiMgr_FindLayout(0x2d);
  pUVar1 = g_UiMgr->slots;
  uVar4 = UiRes_GetLayoutData(0x26);
  UiLayout_PlayAnim(&pUVar1[iVar2].layout,uVar4);
  uVar3 = UiRes_GetLayoutData(0x29);
  iVar2 = UiMgr_FindLayout(0x35);
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
  uVar3 = UiRes_GetLayoutData(0x2a);
  iVar2 = UiMgr_FindLayout(0x35);
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
  uVar3 = UiRes_GetLayoutData(0x2b);
  iVar2 = UiMgr_FindLayout(0x35);
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
  Menu_ClearSlot(0);
  if ((g_MenuMgr->prevScreen != 0xb) && (g_MenuMgr->prevScreen != 0x29)) {
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x116,3);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,0);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00274d20  size 0x388
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
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,*puVar7,8);
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
            UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,0x1c,8);
          }
          iVar4 = UiMgr_FindLayout(0x68);
          UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x1c,0x16,2);
        }
      }
      else {
        if (param_4 == 0) {
          iVar4 = UiMgr_FindLayout(0x68);
          UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,0x1c,8);
        }
        iVar4 = UiMgr_FindLayout(0x68);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x1c,0x16,1);
      }
    }
    else {
      if (param_4 == 0) {
        iVar4 = UiMgr_FindLayout(0x68);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,0x1c,8);
      }
      iVar4 = UiMgr_FindLayout(0x68);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x1c,0x16,0);
    }
  }
  else {
    iVar4 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x1c,8);
  }
  if (param_3 == 0) {
    iVar4 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x1c,8);
  }
  UiLayout_UpdateAnimById(0x68,4);
  iVar4 = UiMgr_FindLayout(0x68);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002750b0  size 0x3f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Wheel_DrawDetails(int param_1)

{
  UiLayoutSlot *pUVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iStack_8;
  int iStack_4;
  
  iStack_4 = _s_Wheel_DrawDetails_2;
  iVar5 = *(int *)(param_1 + 0x68);
  iStack_8 = _s_Wheel_DrawDetails_1;
  if (iVar5 == 0) {
    uVar4 = Profile_Get(0);
    sVar2 = Profile_GetCurrentPartSlot(uVar4,0xf);
    iStack_8 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar5 = param_1;
      do {
        if ((long)*(int *)(iVar5 + 0x7c) == (long)sVar2) goto LAB_002751b4;
        iStack_8 = iStack_8 + 1;
        iVar5 = iVar5 + 4;
      } while (iStack_8 < *(int *)(param_1 + 0x78));
    }
    iStack_8 = -1;
  }
  else if (iVar5 == 1) {
    uVar4 = Profile_Get(0);
    sVar2 = Profile_GetCurrentPartSlot(uVar4,0x10);
    iStack_8 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar5 = param_1;
      do {
        if ((long)*(int *)(iVar5 + 0x7c) == (long)sVar2) goto LAB_002751b4;
        iStack_8 = iStack_8 + 1;
        iVar5 = iVar5 + 4;
      } while (iStack_8 < *(int *)(param_1 + 0x78));
    }
    iStack_8 = -1;
  }
  else if (iVar5 == 2) {
    uVar4 = Profile_Get(0);
    sVar2 = Profile_GetCurrentPartSlot(uVar4,0xf);
    iStack_8 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar5 = param_1;
      do {
        if ((long)*(int *)(iVar5 + 0x7c) == (long)sVar2) goto LAB_00275158;
        iStack_8 = iStack_8 + 1;
        iVar5 = iVar5 + 4;
      } while (iStack_8 < *(int *)(param_1 + 0x78));
    }
    iStack_8 = -1;
LAB_00275158:
    uVar4 = Profile_Get(0);
    sVar2 = Profile_GetCurrentPartSlot(uVar4,0x10);
    iStack_4 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar5 = param_1;
      do {
        if ((long)*(int *)(iVar5 + 0x7c) == (long)sVar2) goto LAB_002751b4;
        iStack_4 = iStack_4 + 1;
        iVar5 = iVar5 + 4;
      } while (iStack_4 < *(int *)(param_1 + 0x78));
    }
    iStack_4 = -1;
  }
LAB_002751b4:
  iVar5 = 0;
  puVar6 = &DAT_0032df30;
  do {
    if ((iStack_8 == iVar5) || (iStack_4 == iVar5)) {
      if (*(int *)(param_1 + 0x9d4) == 0) {
        iVar3 = UiMgr_FindLayout(0x66);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,*puVar6,8);
      }
    }
    else {
      iVar3 = UiMgr_FindLayout(0x66);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar6,8);
    }
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 < 6);
  iVar5 = *(int *)(param_1 + 0x78);
  if (iVar5 < 6) {
    puVar6 = (undefined4 *)(&DAT_0032def0 + iVar5 * 4);
    do {
      iVar3 = UiMgr_FindLayout(0x66);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar6,8);
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < 6);
    iVar5 = *(int *)(param_1 + 0x78);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x78);
  }
  iVar3 = 0;
  if (0 < iVar5) {
    puVar6 = &DAT_0032df10;
    iVar5 = param_1;
    do {
      uVar4 = Msg_MakerInfo(*(undefined2 *)(iVar5 + 0x7c));
      MenuWnd_DrawText(0x66,*puVar6,uVar4);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
      puVar6 = puVar6 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x78));
  }
  iVar5 = UiMgr_FindLayout(100);
  pUVar1 = g_UiMgr->slots;
  uVar4 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 0xc),0xffffffffffffffff);
  uVar4 = MsgId_ForGrade(uVar4);
  UiElem_SetPropInt(&pUVar1[iVar5].layout,5,0x16,uVar4);
  iVar5 = UiMgr_FindLayout(0x66);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(100);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x002754a0  size 0x3ec
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
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar9,8);
      iVar3 = UiMgr_FindLayout(99);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar8,8);
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
      UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,*puVar8,0x16,0);
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
        UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
        lVar7 = maybe_CarSlot_IsSpecial(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8))
        ;
        if (lVar7 == 1) {
          Menu_DrawFrame(&g_MenuMgr->field_0x654);
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
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,*puVar8,8);
      }
      iVar3 = *(int *)(param_1 + 0x78);
    }
    else {
      iVar3 = UiMgr_FindLayout(99);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar8,8);
      iVar3 = *(int *)(param_1 + 0x78);
    }
    iVar4 = (iVar4 + 1) % iVar3;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    iVar10 = iVar10 + 1;
  } while( true );
}

// 0x00275890  size 0x1b4
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00275a50  size 0x85c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage41; on-screen text/callee hint "TakeOffCar" (was ScrTakeOffCar_Exit) */

void maybe_PageWheels_State25_TakeOffCar(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  
  iVar4 = -1;
  iVar10 = (int)param_1;
  iVar6 = *(int *)(iVar10 + 0xa14);
  *(undefined4 *)(iVar10 + 0xa14) = 0;
  if (iVar6 == 0) {
    iVar6 = *(int *)(iVar10 + 0xa00);
  }
  else {
    uVar5 = UiRes_GetLayoutData(0x3b3);
    iVar6 = UiMgr_FindLayout(0x6b);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = uVar5;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x3b4);
    iVar6 = UiMgr_FindLayout(0x6b);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar5;
    pUVar1[iVar6].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x3b5);
    iVar6 = UiMgr_FindLayout(0x6b);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0x3b6);
    iVar6 = UiMgr_FindLayout(0x6b);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    uVar5 = UiRes_GetLayoutData(0x427);
    iVar6 = UiMgr_FindLayout(0x6b);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    uVar5 = UiRes_GetLayoutData(0x428);
    iVar6 = UiMgr_FindLayout(0x6b);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x380 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x6b,0x36edc0,2,0);
    iVar6 = *(int *)(iVar10 + 0xa00);
  }
  bVar2 = true;
  if (iVar6 - 0x1aU < 4) {
    *(undefined4 *)(iVar10 + 0xa10) = 0;
    bVar2 = false;
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(0x6b,0);
    lVar9 = UiLayout_UpdateAnimById(0x6b,4);
    if (lVar7 == 0 && lVar9 == 0) {
      *(undefined4 *)(iVar10 + 0xa10) = 0;
    }
    else {
      bVar2 = false;
    }
  }
  if (*(int *)(iVar10 + 0xa18) == 0) {
    MenuWnd_DrawCursor(3 < *(int *)(iVar10 + 0x604));
    bVar2 = false;
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
  if (((g_MenuMgr->flags & 1) != 0) || ((g_MenuMgr->flags & 2) != 0)) {
    bVar2 = true;
  }
  if (*(int *)(iVar10 + 0xa24) == 0x1b) {
    if (!bVar2) {
      iVar6 = UiMgr_FindLayout(0x6b);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar6].layout,0x3e,8);
    }
  }
  else {
    iVar6 = UiMgr_FindLayout(0x6b);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,0x3e,8);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x6b,*(undefined4 *)(&DAT_0032de70 + *(int *)(iVar10 + 0x9f0) * 4),0,0);
    iVar6 = *(int *)(iVar10 + 0x604);
  }
  else {
    iVar6 = *(int *)(iVar10 + 0x604);
  }
  if (iVar6 < 3) {
    puVar13 = (undefined4 *)(&DAT_0032de80 + iVar6 * 4);
    puVar11 = &DAT_0032de60 + iVar6;
    do {
      iVar3 = UiMgr_FindLayout(0x6b);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar13,8);
      iVar3 = UiMgr_FindLayout(0x6b);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar11,8);
      iVar6 = iVar6 + 1;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar6 < 3);
    iVar6 = *(int *)(iVar10 + 0x9e0);
  }
  else {
    iVar6 = *(int *)(iVar10 + 0x9e0);
  }
  if (iVar6 == 1) {
    Menu_ClearSlot(0);
    lVar7 = UiLayout_UpdateAnimById(0x6b,2);
    if (lVar7 == 0) {
      *(undefined4 *)(iVar10 + 0x9e0) = 0;
      iVar6 = UiMgr_FindLayout(0x6b);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar4 = (*(int *)(iVar10 + 0x604) + (*(int *)(iVar10 + 0x60) - *(int *)(iVar10 + 0x9f0)) + -1)
              % *(int *)(iVar10 + 0x604);
    }
  }
  else {
    if (iVar6 != 2) {
      iVar6 = *(int *)(iVar10 + 0x60);
      goto LAB_00275c18;
    }
    lVar7 = UiLayout_UpdateAnimById(0x6b,3);
    if (lVar7 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(iVar10 + 0x9e0) = 0;
      iVar6 = UiMgr_FindLayout(0x6b);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar4 = (*(int *)(iVar10 + 0x604) + (*(int *)(iVar10 + 0x60) - *(int *)(iVar10 + 0x9f0)) + 3)
              % *(int *)(iVar10 + 0x604);
    }
  }
  iVar6 = *(int *)(iVar10 + 0x60);
LAB_00275c18:
  iVar3 = *(int *)(iVar10 + 0x604);
  iVar6 = (iVar3 + (iVar6 - *(int *)(iVar10 + 0x9f0))) % iVar3;
  iVar12 = 0;
  puVar11 = &DAT_0032de60;
  do {
    if (3 < iVar3) {
      iVar3 = 4;
    }
    if (iVar3 <= iVar12) goto LAB_00275cd8;
    if (iVar12 == 3) {
      if (iVar4 == -1) {
LAB_00275cd8:
        ScrGarage_Draw_Sponsors_4990(param_1);
        iVar4 = UiMgr_FindLayout(0x6b);
        UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
        MenuWnd_SetTitle(3,0xffffffffffffffff);
        return;
      }
      iVar6 = iVar4;
    }
    uVar5 = *(undefined4 *)(iVar10 + iVar6 * 4 + 0x608);
    iVar3 = UiMgr_FindLayout(0x6b);
    pUVar1 = g_UiMgr->slots;
    uVar8 = MsgId_Symbol(uVar5);
    UiElem_SetPropInt(&pUVar1[iVar3].layout,*puVar11,0x16,uVar8);
    iVar3 = *(int *)(iVar10 + 0x604);
    iVar6 = (iVar6 + 1) % iVar3;
    puVar11 = puVar11 + 1;
    iVar12 = iVar12 + 1;
  } while( true );
}

// 0x002762b0  size 0x1bc
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x00276470  size 0xf8
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00276570  size 0x1b0
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  maybe_TakeOffCar_DrawPartStatus(param_1);
  return;
}

// 0x00276720  size 0xa94
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_TakeOffCar_6720(undefined8 param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  UiLayout *pUVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  
  iVar12 = (int)param_1;
  iVar5 = *(int *)(iVar12 + 0x644);
  if (iVar5 == 2) {
    iVar5 = 1;
  }
  iVar16 = *(int *)(iVar12 + 0xa14);
  iVar17 = *(int *)(iVar12 + 0x68) - *(int *)(iVar12 + 0x9f8);
  *(undefined4 *)(iVar12 + 0xa14) = 0;
  if (iVar16 != 0) {
    uVar6 = UiRes_GetLayoutData(0xd0);
    iVar16 = UiMgr_FindLayout(0xc);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x31c == 0) {
      pUVar2[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x31c == 0) {
      pUVar2[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x31c = uVar6;
    pUVar2[iVar16].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0xd1);
    iVar16 = UiMgr_FindLayout(0xc);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x330 == 0) {
      pUVar2[iVar16].layout.animState = 0;
    }
    else {
      pUVar2[iVar16].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x330 == 0) {
      pUVar2[iVar16].layout.animState = 0;
    }
    else {
      pUVar2[iVar16].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x330 = uVar6;
    pUVar2[iVar16].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0xd2);
    iVar16 = UiMgr_FindLayout(0xc);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0xd3);
    iVar16 = UiMgr_FindLayout(0xc);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x3b7);
    iVar16 = UiMgr_FindLayout(0x6c);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x31c == 0) {
      pUVar2[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x31c == 0) {
      pUVar2[iVar16].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar16].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x31c = uVar6;
    pUVar2[iVar16].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x3b8);
    iVar16 = UiMgr_FindLayout(0x6c);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x330 == 0) {
      pUVar2[iVar16].layout.animState = 0;
    }
    else {
      pUVar2[iVar16].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar16].layout.field_0x330 == 0) {
      pUVar2[iVar16].layout.animState = 0;
    }
    else {
      pUVar2[iVar16].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar16].layout.field_0x330 = uVar6;
    pUVar2[iVar16].layout.animState = 1;
    Menu_ClearSlot(0);
    Menu_ClearSlot(1);
    if (iVar5 == 0) {
      MenuWnd_SetHelpText(0);
    }
    MenuWnd_DrawDialogText(0xc,0x36edb0,2,0);
  }
  lVar15 = 2;
  if (iVar5 == 0) {
    lVar15 = MenuWnd_DrawFooter(0x223,0xffffffffffffffff,0);
  }
  if (*(int *)(iVar12 + 0xa00) == 1) {
    lVar7 = UiLayout_UpdateAnimById(0xc,0);
    lVar8 = UiLayout_UpdateAnimById(0x6c,0);
    if ((lVar7 == 0 && lVar8 == 0) && (lVar15 == 2)) {
      *(undefined4 *)(iVar12 + 0xa10) = 0;
    }
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(0xc,0);
    if ((lVar7 == 0) && (lVar15 == 2)) {
      *(undefined4 *)(iVar12 + 0xa10) = 0;
    }
  }
  if (*(int *)(iVar12 + 0xa18) == 0) {
    if (iVar5 != 0) {
      MenuWnd_DrawCursor(1);
    }
  }
  else {
    lVar7 = 0;
    if (*(int *)(iVar12 + 0xa00) == 1) {
      lVar7 = UiLayout_UpdateAnimById(0x6c);
    }
    if (iVar5 == 0) {
      if ((lVar15 == 2) && (lVar7 == 0)) {
        MenuWnd_RequestRedraw();
      }
      lVar8 = UiLayout_UpdateAnimById(0xc,1);
      if (((lVar8 == 0) && (lVar15 == 3)) && (lVar7 == 0)) {
        *(undefined4 *)(iVar12 + 0xa18) = 0;
      }
    }
    else {
      lVar15 = UiLayout_UpdateAnimById(0xc,1);
      if ((lVar15 == 0) && (lVar7 == 0)) {
        *(undefined4 *)(iVar12 + 0xa18) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  if ((*_g_MenuInput == 1) && (iVar5 != 0)) {
    MenuWnd_SetItemState(0xc,*(undefined4 *)(&DAT_0032de20 + *(int *)(iVar12 + 0x9f8) * 4),0,0);
  }
  if ((iVar5 != 0) && (iVar5 < 7)) {
    puVar13 = (undefined4 *)(iVar5 * 4 + 0x32de40);
    iVar16 = iVar5;
    do {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar13,8);
      iVar16 = iVar16 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar16 < 7);
  }
  iVar16 = UiMgr_FindLayout(0xc);
  pUVar14 = &g_UiMgr->slots[iVar16].layout;
  if (iVar5 < 8) {
    UiElem_SetPropFloat(0x41800000,pUVar14,8,2);
    UiElem_SetPropFloat(0x41380000,pUVar14,8,6);
    iVar16 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar16].layout,0x44,8);
    iVar16 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar16].layout,0x45,8);
    iVar16 = *(int *)(iVar12 + 0x9e0);
  }
  else {
    UiElem_SetPropFloat((float)iVar17 * (184.0 / (float)iVar5) + 16.0,pUVar14,8,2);
    UiElem_SetPropFloat((7.0 / (float)iVar5) * 11.5,pUVar14,8,6);
    if (iVar17 == 0) {
      iVar16 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar16].layout,0x44,8);
    }
    if (iVar5 == iVar17 + 7) {
      iVar16 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar16].layout,0x45,8);
    }
    iVar16 = *(int *)(iVar12 + 0x9e0);
  }
  iVar3 = -1;
  if (iVar16 == 1) {
    Menu_ClearSlot(0);
    lVar15 = UiLayout_UpdateAnimById(0xc,2);
    if (lVar15 == 0) {
      *(undefined4 *)(iVar12 + 0x9e0) = 0;
      iVar16 = UiMgr_FindLayout(0xc);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x334 = 0;
      if (*(int *)&pUVar2[iVar16].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar16].layout.field_0x340 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar3 = iVar17 + -1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
  }
  else if (iVar16 == 2) {
    lVar15 = UiLayout_UpdateAnimById(0xc,3);
    if (lVar15 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(iVar12 + 0x9e0) = 0;
      iVar16 = UiMgr_FindLayout(0xc);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar16].layout.field_0x348 = 0;
      if (*(int *)&pUVar2[iVar16].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar16].layout.field_0x354 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar3 = iVar17 + 7;
    }
  }
  iVar16 = 0;
  puVar13 = &DAT_0032dde0;
  do {
    if (iVar5 < 8) {
      iVar4 = iVar5;
    }
    else {
      iVar4 = 8;
    }
    if (iVar4 <= iVar16) goto LAB_00276b58;
    if (iVar16 == 7) {
      if (iVar3 == -1) {
LAB_00276b58:
        MenuWnd_SetTitle(3,0x218);
        if (iVar5 != 0) {
          iVar5 = UiMgr_FindLayout(0xc);
          UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
        }
        MenuWnd_DrawText(0x6c,1,0x1e0);
        iVar5 = UiMgr_FindLayout(0x6c);
        UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
        maybe_TakeOffCar_DrawPartStatus(param_1);
        return;
      }
      iVar17 = iVar3;
    }
    if (iVar17 == *(int *)(iVar12 + 0x644) + -1) {
      MenuWnd_DrawText(0xc,*puVar13,0x221);
    }
    else {
      iVar11 = iVar12 + iVar17 * 8;
      iVar4 = *(int *)(iVar11 + 0x648);
      uVar1 = *(undefined2 *)(iVar11 + 0x64c);
      if (iVar4 == 0x13) {
        MenuWnd_DrawText(0xc,*puVar13,0x98f);
      }
      else if (iVar4 == 0x11) {
        MenuWnd_DrawText(0xc,*puVar13,0x9c0);
        uVar9 = maybe_Tune_GetPartGroupB(uVar1);
        uVar10 = Msg_MakerInfo();
        MenuWnd_DrawLabel(0xc,puVar13[1],0x45,uVar9,uVar10);
      }
      else if (iVar4 == 0xe) {
        MenuWnd_DrawText(0xc,*puVar13,0x9bf);
        uVar9 = maybe_Tune_GetPartGroupB(uVar1);
        uVar10 = Msg_MakerInfo();
        MenuWnd_DrawLabel(0xc,puVar13[1],0x45,uVar9,uVar10);
      }
      else {
        uVar9 = maybe_PartSlot_GetCategory();
        uVar9 = MsgId_ForGradeShort(uVar9);
        MenuWnd_DrawText(0xc,*puVar13,uVar9);
        uVar9 = maybe_Tune_GetPartGroupB(uVar1);
        uVar10 = Msg_MakerInfo();
        MenuWnd_DrawLabel(0xc,puVar13[1],0x45,uVar9,uVar10);
      }
    }
    iVar17 = iVar17 + 1;
    puVar13 = puVar13 + 2;
    iVar16 = iVar16 + 1;
  } while( true );
}

// 0x002771c0  size 0x148
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x00277310  size 0x148
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x00277460  size 0x4c4
void ScrCareer_Draw_InspectCarParts(int param_1)

{
  int iVar1;
  int iVar2;
  UiLayoutSlot *pUVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_s0;
  
  iVar5 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x708);
  }
  else {
    uVar4 = UiRes_GetLayoutData(0xb7);
    iVar5 = UiMgr_FindLayout(0x45);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x330 == 0) {
      pUVar3[iVar5].layout.animState = 0;
    }
    else {
      pUVar3[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x330 == 0) {
      pUVar3[iVar5].layout.animState = 0;
    }
    else {
      pUVar3[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = uVar4;
    pUVar3[iVar5].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0xcf);
    iVar5 = UiMgr_FindLayout(0x46);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x3b7);
    iVar5 = UiMgr_FindLayout(0x6c);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x31c == 0) {
      pUVar3[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x31c == 0) {
      pUVar3[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x31c = uVar4;
    pUVar3[iVar5].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x3b8);
    iVar5 = UiMgr_FindLayout(0x6c);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x330 == 0) {
      pUVar3[iVar5].layout.animState = 0;
    }
    else {
      pUVar3[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x330 == 0) {
      pUVar3[iVar5].layout.animState = 0;
    }
    else {
      pUVar3[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = uVar4;
    pUVar3[iVar5].layout.animState = 1;
    if (*(int *)(param_1 + 0x708) == 0) {
      MenuWnd_SetHelpText(0);
    }
    MenuWnd_DrawHelp();
    iVar5 = *(int *)(param_1 + 0x708);
  }
  if (iVar5 == 0) {
    unaff_s0 = MenuWnd_DrawFooter(0x222,0xffffffffffffffff,0);
    lVar6 = MenuWnd_DrawHeader(0,0,0,0);
    goto LAB_00277734;
  }
  if (iVar5 < 0xb) {
LAB_002778c0:
    iVar5 = *(int *)(param_1 + 0x70);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 == (iVar1 + 1) % iVar5) {
      *(int *)(param_1 + 0x70) = iVar1;
      MenuMgr_LockInput(0);
      goto LAB_002778c0;
    }
    if (iVar1 != (iVar2 + 10) % iVar5) goto LAB_002778c0;
    *(int *)(param_1 + 0x70) = (iVar2 + 1) % iVar5;
    MenuMgr_LockInput(1);
    iVar5 = *(int *)(param_1 + 0x70);
  }
  iVar1 = *(int *)(param_1 + 0x708);
  lVar6 = MenuWnd_DrawHeader(param_1 + 0x70c,iVar1,iVar5,
                             (iVar1 + (*(int *)(param_1 + 0xc) - iVar5)) % iVar1);
LAB_00277734:
  if (*(int *)(param_1 + 0xa00) == 1) {
    UiLayout_UpdateAnimById(0x6c,0);
  }
  lVar7 = UiLayout_UpdateAnimById(0x45,0);
  lVar8 = UiLayout_UpdateAnimById(0x46,1);
  if ((lVar7 == 0 && lVar8 == 0) &&
     (((*(int *)(param_1 + 0x708) != 0 || (unaff_s0 == 2)) && (lVar6 == 2)))) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) != 0) {
    if (*(int *)(param_1 + 0xa08) == 1) {
      UiLayout_UpdateAnimById(0x6c);
    }
    if (lVar6 == 2) {
      MenuWnd_RequestClose();
      iVar5 = *(int *)(param_1 + 0x708);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x708);
    }
    if (iVar5 == 0) {
      if (unaff_s0 == 2) {
        MenuWnd_RequestRedraw();
      }
      lVar7 = UiLayout_UpdateAnimById(0x45,1);
      lVar8 = UiLayout_UpdateAnimById(0x46,2);
      if (((lVar7 == 0 && lVar8 == 0) && (unaff_s0 == 3)) && (lVar6 == 3)) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
    else if (lVar6 == 3) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  MenuWnd_DrawText(0x6c,1,0x1df);
  iVar5 = UiMgr_FindLayout(0x6c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x00277930  size 0xb48
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Front(int param_1)

{
  UiLayoutSlot *pUVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  UiLayout *pUVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
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
  
  iVar6 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar6 != 0) {
    uVar5 = UiRes_GetLayoutData(0x14e);
    iVar6 = UiMgr_FindLayout(0x6a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = uVar5;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x14f);
    iVar6 = UiMgr_FindLayout(0x6a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar5;
    pUVar1[iVar6].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x150);
    iVar6 = UiMgr_FindLayout(0x6a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0x151);
    iVar6 = UiMgr_FindLayout(0x6a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    uVar5 = UiRes_GetLayoutData(0x152);
    iVar6 = UiMgr_FindLayout(0x6a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    uVar5 = UiRes_GetLayoutData(0x153);
    iVar6 = UiMgr_FindLayout(0x6a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x380 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar6 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar6].layout,0x33,8);
    }
    else {
      iVar6 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,0x33,8);
    }
    MenuWnd_DrawDialogText(0x6a,0x36eda0,2,0);
  }
  lVar7 = UiLayout_UpdateAnimById(0x6a,0);
  lVar8 = UiLayout_UpdateAnimById(0x6a,1);
  if (lVar7 == 0 && lVar8 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) == 0) {
    MenuWnd_DrawCursor();
    if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x9f4)) {
      iVar6 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,0x3e,8);
      iVar6 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x1c);
    }
    if ((*(int *)(param_1 + 0x74) == (iVar6 - *(int *)(param_1 + 0x9f4)) + 3) ||
       (*(int *)(param_1 + 0x74) < 3)) {
      iVar6 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,0x3f,8);
    }
    iVar6 = *(int *)(param_1 + 0x9e0);
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(0x6a,2);
    lVar8 = UiLayout_UpdateAnimById(0x6a,3);
    if (lVar7 == 0 && lVar8 == 0) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
    MenuWnd_DrawCursor(0);
    iVar6 = *(int *)(param_1 + 0x9e0);
  }
  iVar14 = -1;
  if (iVar6 == 1) {
    Menu_ClearSlot(0);
    lVar7 = UiLayout_UpdateAnimById(0x6a,4);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar6 = UiMgr_FindLayout(0x6a);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x35c = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar14 = (*(int *)(param_1 + 0x74) + (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x9f4)) +
               -1) % *(int *)(param_1 + 0x74);
    }
  }
  else if (iVar6 == 2) {
    lVar7 = UiLayout_UpdateAnimById(0x6a,5);
    if (lVar7 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar6 = UiMgr_FindLayout(0x6a);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x370 = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x380 == 0) {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar14 = (*(int *)(param_1 + 0x74) + (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x9f4)) +
               3) % *(int *)(param_1 + 0x74);
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x6a,*(undefined4 *)(&DAT_0032dda8 + *(int *)(param_1 + 0x9f4) * 4),0,0);
  }
  iVar3 = UiMgr_FindLayout(0x6a);
  iVar6 = *(int *)(param_1 + 0x74);
  pUVar11 = &g_UiMgr->slots[iVar3].layout;
  if (iVar6 < 4) {
    UiElem_SetPropFloat(0x41800000,pUVar11,0x21,1);
    UiElem_SetPropFloat(0x41e80000,pUVar11,0x21,6);
    iVar6 = *(int *)(param_1 + 0x1c);
  }
  else {
    UiElem_SetPropFloat((float)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x9f4)) *
                        (464.0 / (float)iVar6) + 16.0,pUVar11,0x21,1);
    UiElem_SetPropFloat((3.0 / (float)iVar6) * 29.0,pUVar11,0x21,6);
    iVar6 = *(int *)(param_1 + 0x1c);
  }
  iVar3 = *(int *)(param_1 + 0x74);
  iVar6 = (iVar3 + (iVar6 - *(int *)(param_1 + 0x9f4))) % iVar3;
  iVar12 = 0;
  puVar13 = (undefined4 *)0x32ddd0;
  puVar10 = &DAT_0032ddc0;
  do {
    if (iVar12 == 3) {
      if (iVar14 == -1) break;
      iVar6 = iVar14;
    }
    if (iVar12 < iVar3) {
      if (*(int *)(param_1 + 0x14) == 0) {
        if (iVar6 == *(int *)(param_1 + 0x604)) {
          iVar3 = 0x1e;
        }
        else {
          iVar3 = *(int *)(param_1 + iVar6 * 4 + 0x608) + 0x1f;
        }
      }
      else if (iVar6 == 0xc) {
        iVar3 = 0x1e;
      }
      else {
        iVar3 = iVar6 + 0x71;
      }
      iVar4 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,*puVar10,0x16,iVar3);
    }
    else {
      iVar3 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar13,8);
      iVar3 = UiMgr_FindLayout(0x6a);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar10,8);
    }
    iVar3 = *(int *)(param_1 + 0x74);
    iVar6 = (iVar6 + 1) % iVar3;
    iVar12 = iVar12 + 1;
    puVar13 = puVar13 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar12 < 4);
  if (*(uint *)(param_1 + 0x18) < 0x10) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(param_1 + 0x18)) {
    case 0:
    case 1:
    case 2:
      MenuWnd_DrawText(0x69,0x3c,0x1e4);
      iVar6 = *(int *)(param_1 + 0x14);
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
  iVar6 = *(int *)(param_1 + 0x14);
LAB_00277ce8:
  if (iVar6 == 0) {
    iVar6 = UiMgr_FindLayout(0x6a);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar6].layout,0x33,8);
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
      uVar2 = maybe_PartSlot_IsAvailable(*(undefined4 *)(param_1 + 0x18));
      uVar9 = Rival_HasCar(&uStack_30,uVar2);
      MenuWnd_DrawNumber(0x6a,0x34,uVar9);
    }
  }
  else {
    iVar6 = UiMgr_FindLayout(0x6a);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,0x33,8);
  }
  UiLayout_UpdateAnimById(0x69,8);
  iVar6 = UiMgr_FindLayout(0x69);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x6a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

