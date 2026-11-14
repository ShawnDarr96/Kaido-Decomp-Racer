// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001f8000 - 0x001fc000
#include "ghidra_types.h"

// 0x001f8040  size 0x130
long MenuText_CarModelId(long param_1,long param_2)

{
  short sVar1;
  undefined8 uVar2;
  int aiStack_40 [16];
  
  if (param_2 == -3) {
    uVar2 = RivalDb_Get((short)param_1);
    param_1 = RivalRec_GetCarId(uVar2);
  }
  else if (param_2 == -4) {
    uVar2 = Msg_FormatRivalName();
    param_1 = MenuText_CarModelId(uVar2,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(aiStack_40,param_1);
    param_1 = (long)aiStack_40[0];
  }
  else if (param_2 != -1) {
    uVar2 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar2 = Profile_GetCurrentCar(uVar2);
      sVar1 = CarRec_GetModelId(uVar2);
      param_1 = (long)sVar1;
    }
    else {
      sVar1 = CarRec_GetModelId((int)uVar2 +
                                *(short *)((int)param_1 * 2 + (int)uVar2 + 0x13ee) * 0xcc);
      param_1 = (long)sVar1;
    }
  }
  return param_1;
}

// 0x001f8170  size 0x28
int MenuText_CarGrade(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = MenuText_CarModelId();
  iVar1 = CarDb_GetModelIndex(uVar2);
  return iVar1 + 0x5c0;
}

// 0x001f81a0  size 0x160
/* 21 callers */

int MenuText_CarShortName(long param_1,long param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 == -3) {
    uVar3 = RivalDb_Get((short)param_1);
    uVar3 = RivalRec_GetCarId(uVar3);
    iVar2 = MenuText_CarShortName(uVar3,0xffffffffffffffff);
  }
  else if (param_2 == -4) {
    uVar3 = Msg_FormatRivalName();
    iVar2 = MenuText_CarShortName(uVar3,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(&uStack_40,param_1);
    uStack_c = uStack_2c;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uStack_18 = uStack_38;
    uStack_14 = uStack_34;
    uStack_10 = uStack_30;
    uStack_8 = uStack_28;
    iVar2 = CarDb_GetModelIndex(uStack_40);
    iVar2 = iVar2 + 0x4de;
  }
  else if (param_2 == -1) {
    iVar2 = CarDb_GetModelIndex();
    iVar2 = iVar2 + 0x4de;
  }
  else {
    uVar3 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar3 = Profile_GetCurrentCar(uVar3);
      uVar1 = CarRec_GetModelId(uVar3);
    }
    else {
      uVar1 = CarRec_GetModelId((int)uVar3 +
                                *(short *)((int)param_1 * 2 + (int)uVar3 + 0x13ee) * 0xcc);
    }
    iVar2 = CarDb_GetModelIndex(uVar1);
    iVar2 = iVar2 + 0x4de;
  }
  return iVar2;
}

// 0x001f8300  size 0x120
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Menu_HandleList(undefined4 *param_1,int *param_2,long param_3,long param_4,undefined8 param_5,
                    undefined8 param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = Menu_GetInput(param_5,param_6);
  if ((lVar1 < 0) && (*param_2 = *param_2 + -1, *param_2 < 0)) {
    if (param_4 < param_3) {
      *param_2 = 0;
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
      *param_1 = 1;
    }
    else {
      *param_2 = (int)param_3 + -1;
    }
  }
  if (0 < lVar1) {
    iVar3 = (int)param_3 + -1;
    iVar2 = (int)param_4 + -1;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
    *param_2 = *param_2 + 1;
    if (iVar2 < *param_2) {
      if (param_4 < param_3) {
        *param_2 = (int)param_4 + -1;
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
        *param_1 = 2;
      }
      else {
        *param_2 = 0;
      }
    }
  }
  return;
}

// 0x001f8420  size 0x34
undefined8 Menu_ClampIndex(ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x2c) {
                    /* WARNING: Could not recover jumptable at 0x001f8440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_003655c0)[(int)param_1])();
    return uVar1;
  }
  return 0;
}

// 0x001f8470  size 0xf4
bool Menu_HandleSlider(float param_1,float param_2,float param_3,float *param_4,undefined8 param_5,
                      undefined8 param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = Menu_GetInput(param_5,param_6);
  fVar3 = *param_4;
  fVar2 = (float)iVar1 * param_1 + fVar3 + 0.0;
  *param_4 = fVar2;
  if (param_2 <= fVar2) {
    if (param_3 < fVar2) {
      fVar2 = param_3;
    }
    *param_4 = fVar2;
  }
  else {
    *param_4 = param_2;
  }
  if ((float)iVar1 != 0.0) {
    if (*param_4 != fVar3) {
      Se_PlayMenuVol(7,0x60);
      fVar2 = *param_4;
      goto LAB_001f8530;
    }
    Se_PlayMenuVol(8,0x60);
  }
  fVar2 = *param_4;
LAB_001f8530:
  return fVar2 != fVar3;
}

// 0x001f8570  size 0xd0
bool Menu_HandleToggle(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                      int param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = Menu_GetInput(param_2,param_3);
  iVar1 = *param_1;
  *param_1 = iVar1 + (int)lVar3 * param_4;
  iVar2 = *param_1;
  if (iVar2 < param_5) {
    *param_1 = param_5;
  }
  else {
    if (param_6 < iVar2) {
      iVar2 = param_6;
    }
    *param_1 = iVar2;
  }
  if (lVar3 != 0) {
    if (*param_1 != iVar1) {
      Se_PlayMenuVol(7,0x60);
      iVar2 = *param_1;
      goto LAB_001f8618;
    }
    Se_PlayMenuVol(8,0x60);
  }
  iVar2 = *param_1;
LAB_001f8618:
  return iVar2 != iVar1;
}

// 0x001f8640  size 0x220
/* 139 callers */

bool Menu_HandleCursor(uint *param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5
                      ,uint param_6)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  lVar4 = Menu_GetInput(param_2,param_3);
  uVar1 = *param_1;
  bVar2 = false;
  bVar3 = false;
  if (lVar4 == 0) {
    if ((param_6 == 0) || (lVar4 = 1, (param_6 & 1 << (uVar1 & 0x1f)) != 0)) {
      return false;
    }
  }
  else {
    bVar3 = true;
  }
  iVar7 = 0;
  if (0 < (int)(param_4 + 1)) {
    do {
      *param_1 = *param_1 + (int)lVar4;
      if (param_5 == 1) {
        uVar6 = *param_1;
        uVar5 = param_4;
        if ((-1 < (int)uVar6) && (uVar5 = uVar6, (int)param_4 < (int)uVar6)) {
          uVar5 = 0;
        }
        *param_1 = uVar5;
      }
      else {
        uVar6 = *param_1;
        if ((int)uVar6 < 0) {
          *param_1 = 0;
        }
        else {
          if ((int)param_4 < (int)uVar6) {
            uVar6 = param_4;
          }
          *param_1 = uVar6;
        }
      }
      if ((param_6 == 0) || ((param_6 & 1 << (*param_1 & 0x1f)) != 0)) {
        bVar2 = true;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(param_4 + 1));
  }
  if ((!bVar2) && (param_5 == 0)) {
    iVar7 = 0;
    if (0 < (int)(param_4 + 1)) {
      do {
        *param_1 = *param_1 - (int)lVar4;
        uVar6 = *param_1;
        if ((int)uVar6 < 0) {
          *param_1 = 0;
        }
        else {
          if ((int)param_4 < (int)uVar6) {
            uVar6 = param_4;
          }
          *param_1 = uVar6;
        }
        if ((param_6 == 0) || ((param_6 & 1 << (*param_1 & 0x1f)) != 0)) {
          bVar2 = true;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(param_4 + 1));
    }
  }
  if (!bVar2) {
    *param_1 = uVar1;
  }
  uVar6 = *param_1;
  if (bVar3) {
    if (uVar6 != uVar1) {
      Se_PlayMenuVol(7,0x60);
    }
    else {
      Se_PlayMenuVol(8,0x60);
    }
  }
  return uVar6 != uVar1;
}

// 0x001f8860  size 0x27c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 43 callers */

void Menu_DrawFrame(int *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  UiLayout_UpdateAnimById(0x127,1);
  iVar2 = *param_1;
  if (iVar2 != 4) {
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        bVar1 = true;
        if (iVar2 == 1) {
          switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
          case 0:
          case 5:
          case 6:
            break;
          case 1:
            bVar1 = *(int *)(_g_MenuMgr + 0x534) == 1;
            break;
          case 2:
            bVar1 = *(int *)(_g_MenuMgr + 0x5b0) == 1;
            break;
          case 3:
            bVar1 = *(int *)(_g_MenuMgr + 0x600) == 1;
            break;
          case 4:
            bVar1 = *(int *)(_g_MenuMgr + 0x630) == 1;
            break;
          default:
            bVar1 = true;
          }
          if (bVar1) {
            *param_1 = 3;
          }
        }
        else {
          if (iVar2 != 0) {
            iVar2 = *param_1;
            goto LAB_001f8a58;
          }
          lVar3 = UiLayout_UpdateAnimById(0x127,0);
          if (lVar3 == 0) {
            switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
            case 0:
            case 5:
            case 6:
              bVar1 = true;
              break;
            case 1:
              bVar1 = *(int *)(_g_MenuMgr + 0x534) == 1;
              break;
            case 2:
              bVar1 = *(int *)(_g_MenuMgr + 0x5b0) == 1;
              break;
            case 3:
              bVar1 = *(int *)(_g_MenuMgr + 0x600) == 1;
              break;
            case 4:
              bVar1 = *(int *)(_g_MenuMgr + 0x630) == 1;
              break;
            default:
              bVar1 = true;
            }
            if (bVar1) {
              *param_1 = 2;
            }
            else {
              *param_1 = 1;
            }
          }
        }
        goto LAB_001f8a54;
      }
      *param_1 = 2;
    }
    lVar3 = UiLayout_UpdateAnimById(param_1[1],0);
    lVar4 = UiLayout_UpdateAnimById(0x127,2);
    if (lVar4 == 0 && lVar3 == 0) {
      *param_1 = 4;
      *(uint *)(iRam0036f468 + 0x10) = *(uint *)(iRam0036f468 + 0x10) | 0x10;
      *(uint *)(iRam0036f468 + 0x10) = *(uint *)(iRam0036f468 + 0x10) | 0x80;
    }
  }
LAB_001f8a54:
  iVar2 = *param_1;
LAB_001f8a58:
  if (iVar2 != 4) {
    iVar2 = UiMgr_FindLayout(param_1[1]);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
    iVar2 = UiMgr_FindLayout(0x127);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  }
  return;
}

// 0x001f8ae0  size 0x1bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 44 callers */

void Menu_SetCursorAlpha(int *param_1,long param_2)

{
  int iVar1;
  
  if ((*param_1 == 2) || (*param_1 == 4)) {
    *param_1 = 0;
    iVar1 = UiMgr_FindLayout(param_1[1]);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,param_1[2],8);
    iVar1 = UiMgr_FindLayout(param_1[1]);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    iVar1 = UiMgr_FindLayout(0x127);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    iVar1 = UiMgr_FindLayout(0x127);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    iVar1 = UiMgr_FindLayout(0x127);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    if (param_2 == 1) {
      *(uint *)(iRam0036f468 + 0x10) = *(uint *)(iRam0036f468 + 0x10) & 0xffffffef;
      *(uint *)(iRam0036f468 + 0x10) = *(uint *)(iRam0036f468 + 0x10) & 0xffffff7f;
    }
  }
  return;
}

// 0x001f8ca0  size 0x24
/* 23 callers */

void Menu_BlockInput(void)

{
  *(uint *)(iRam0036f468 + 0x10) = *(uint *)(iRam0036f468 + 0x10) | 0x10;
  *(uint *)(iRam0036f468 + 0x10) = *(uint *)(iRam0036f468 + 0x10) | 0x80;
  return;
}

// 0x001f8cd0  size 0x3f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 30 callers */

void Menu_ShowDialog(undefined4 *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  *param_1 = 4;
  param_1[1] = (int)param_2;
  param_1[2] = param_3;
  uVar1 = UiRes_GetLayoutData(0x3f3);
  iVar2 = UiMgr_FindLayout(0x127);
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
  uVar1 = UiRes_GetLayoutData(0x3f5);
  iVar2 = UiMgr_FindLayout(0x127);
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
  *(undefined4 *)(iVar2 + 0x32c) = 1;
  *(undefined4 *)(iVar2 + 0x334) = uVar1;
  *(undefined4 *)(iVar2 + 0x330) = 1;
  uVar1 = UiRes_GetLayoutData(0x3f4);
  iVar2 = UiMgr_FindLayout(0x127);
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
  iVar3 = UiMgr_FindLayout(param_1[1]);
  iVar2 = *_g_UiMgr;
  uVar4 = UiRes_GetLayoutData(0x3f2);
  UiLayout_IsAnimDone(iVar2 + iVar3 * 0x4f4 + 4,0,param_1[2],uVar4,0);
  if (param_2 == 0x124) {
    iVar2 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,0,10,9);
    iVar2 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,1,10,9);
    iVar2 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,2,10,9);
    iVar2 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,3,10,9);
    iVar2 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,4,10,9);
  }
  else {
    iVar2 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,0,10,0x17);
    iVar2 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,1,10,0x17);
    iVar2 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,2,10,0x17);
    iVar2 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,3,10,0x17);
    iVar2 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,4,10,0x17);
  }
  return;
}

// 0x001f90c0  size 0x208
void MenuCar_Draw(int *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_520 [16];
  undefined1 auStack_510 [16];
  undefined1 auStack_500 [32];
  int iStack_4e0;
  int iStack_4dc;
  int iStack_4d8;
  uint uStack_110;
  undefined1 auStack_10c [268];
  
  lVar4 = 0;
  showroom_step_sub_002d4ae0(8);
  if (*(char *)((int)param_1 + 0xd) != (char)param_1[3]) {
    *(char *)((int)param_1 + 0xd) = (char)param_1[3];
    param_1[10] = 0x1e;
  }
  uStack_110 = (uint)*(byte *)(param_1 + 3);
  showroom_step_sub_002d5210(7,1,&uStack_110);
  lVar2 = showroom_step_sub_002d4fa0(7,uStack_110,auStack_10c);
  bVar1 = showroom_step_sub_002d4f20(7,lVar2);
  if (2 < bVar1) {
    lVar4 = showroom_step_sub_002d49f0(7,lVar2);
  }
  if ((lVar4 == 0) || (lVar2 < 0)) {
    param_1[7] = 0;
  }
  else if (param_1[10] == 0) {
    param_1[7] = 1;
  }
  else {
    param_1[10] = param_1[10] + -1;
    param_1[7] = 0;
  }
  if (*param_1 == -1) {
    TitleCam_StartPath(iRam0036f4dc + 0x10,2);
    TitleCam_StartPathB(iRam0036f4dc + 0x110,0);
  }
  if ((lVar4 != 0) && (*param_1 != param_1[1])) {
    iVar3 = iRam0036f4dc + 0x10;
    showroom_step_sub_002d7fd0(0x42c80000,lVar4,auStack_510,auStack_520,param_1[1],param_1[2],5);
    TitleCam_SetKey(iVar3,auStack_510,auStack_520,0xf,7);
    *param_1 = param_1[1];
  }
  if ((param_1[7] != 0) && (param_1[8] != 0)) {
    showroom_leaf_sub_002d8790(auStack_500);
    iStack_4e0 = param_1[4];
    iStack_4dc = param_1[5];
    iStack_4d8 = param_1[6];
    showroom_step_sub_002d4d40(7,lVar2,1,auStack_500);
    showroom_step_sub_002d87d0();
  }
  return;
}

// 0x001f92d0  size 0x8
undefined4 Menu_GetField_14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 0x001f92e0  size 0x8
undefined4 Menu_GetField_10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// 0x001f92f0  size 0x8
void Menu_SetField_18(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

// 0x001f9300  size 0x8
void Menu_SetField_8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 0x001f9310  size 0x2fc
void MenuCar_DrawSpin(int *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_660 [16];
  undefined1 auStack_650 [32];
  undefined4 uStack_630;
  undefined1 auStack_620 [112];
  undefined1 auStack_5b0 [112];
  undefined1 auStack_540 [64];
  undefined1 auStack_500 [4];
  int iStack_4fc;
  int iStack_110;
  undefined1 auStack_10c [268];
  
  lVar5 = 0;
  showroom_step_sub_002d4ae0(8);
  if ((param_1[1] != *param_1) && (param_1[2] == 0)) {
    param_1[6] = 0x1e;
  }
  iStack_110 = *param_1;
  showroom_step_sub_002d5210(6,1,&iStack_110);
  lVar2 = showroom_step_sub_002d4fa0(6,iStack_110,auStack_10c);
  bVar1 = showroom_step_sub_002d4f20(6,lVar2);
  if (2 < bVar1) {
    lVar5 = showroom_step_sub_002d49f0(6,lVar2);
  }
  if ((lVar5 == 0) || (lVar2 < 0)) {
    param_1[8] = 0;
    param_1[4] = 0;
  }
  else {
    param_1[4] = 1;
  }
  if (param_1[1] == -1) {
    iVar4 = iRam0036f4dc + 0x10;
    showroom_leaf_sub_002d66b0(auStack_540,*param_1);
    TitleCam_Advance(iVar4,auStack_540);
    iVar4 = param_1[1];
  }
  else {
    iVar4 = param_1[1];
  }
  if (iVar4 == -1) {
    iVar4 = iRam0036f4dc + 0x110;
    showroom_leaf_sub_002d6610(auStack_5b0,*param_1);
    TitleCam_CopyPosition(iVar4,auStack_5b0);
    iVar4 = param_1[7];
  }
  else {
    iVar4 = param_1[7];
  }
  if (((iVar4 != 0) && (param_1[4] == 1)) && (param_1[1] != *param_1)) {
    if (param_1[2] != 0) {
      iVar4 = iRam0036f4dc + 0x10;
      uVar3 = showroom_leaf_sub_002d6750();
      TitleCam_SetSpeed(iVar4,uVar3,0xffffffffffffffff,0xffffffffffffffff);
      param_1[6] = 0;
    }
    iVar4 = iRam0036f4dc + 0x110;
    showroom_leaf_sub_002d6610(auStack_620,*param_1);
    TitleCam_CopyPosition(iVar4,auStack_620);
    param_1[4] = 0;
    param_1[1] = *param_1;
  }
  if (param_1[6] != 0) {
    if (param_1[6] == 1) {
      iVar4 = iRam0036f4dc + 0x10;
      showroom_leaf_sub_002d66b0(auStack_660,*param_1);
      TitleCam_SetTarget(uStack_630,iVar4,auStack_660,auStack_650,0xf,7);
      iVar4 = param_1[6];
    }
    else {
      iVar4 = param_1[6];
    }
    param_1[6] = iVar4 + -1;
  }
  if (param_1[4] != 0) {
    if (param_1[7] == 0) {
      param_1[8] = 0;
    }
    else {
      showroom_leaf_sub_002d65e0(auStack_500);
      if (param_1[2] == 0) {
        fVar6 = (float)param_1[8];
        param_1[8] = (int)(fVar6 - 0.008726646);
        if (fVar6 - 0.008726646 < -3.1415927) {
          param_1[8] = (int)((float)param_1[8] + 6.2831855);
        }
        iStack_4fc = param_1[8];
      }
      showroom_step_sub_002d4d40(6,lVar2,1,auStack_500);
      showroom_step_sub_002d6770();
    }
  }
  return;
}

// 0x001f9610  size 0x8
void Menu_SetField_8_9610(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 0x001f9620  size 0x5f0
void MenuCar_Setup(byte *param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined2 *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int *piVar17;
  int *piStack_1100;
  byte *pbStack_10f0;
  undefined4 *puStack_10e0;
  undefined2 *puStack_10d0;
  undefined1 *puStack_10c0;
  int iStack_10a4;
  undefined1 auStack_1090 [4];
  undefined4 uStack_108c;
  undefined1 auStack_1080 [16];
  undefined1 auStack_1070 [16];
  undefined1 auStack_1060 [48];
  undefined1 auStack_1030 [48];
  undefined1 auStack_1000 [16];
  undefined1 auStack_ff0 [16];
  int iStack_fe0;
  undefined1 auStack_fdc [268];
  undefined4 auStack_ed0 [8];
  int aiStack_eb0 [8];
  undefined4 auStack_e90 [392];
  undefined1 auStack_870 [1104];
  undefined2 auStack_420 [24];
  uint auStack_3f0 [4];
  undefined1 auStack_3e0 [20];
  int iStack_3cc;
  undefined1 auStack_3a0 [804];
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_64;
  
  iVar16 = 0;
  bVar2 = true;
  iStack_10a4 = 0;
  showroom_step_sub_002d4ae0(8);
  puStack_10c0 = auStack_870;
  puVar14 = auStack_e90;
  piVar17 = aiStack_eb0;
  puStack_10d0 = auStack_420;
  iVar11 = 0;
  puVar6 = puVar14;
  puVar15 = puStack_10c0;
  puVar8 = puStack_10d0;
  piStack_1100 = piVar17;
  pbStack_10f0 = param_1;
  do {
    if (-1 < *(int *)(pbStack_10f0 + 0x10)) {
      MenuCar_BuildRivalPreview(puVar8,puVar15,2,0);
      MenuCar_ApplyPartPreview(puVar6 + 1,*puVar8,puVar8[1],puVar15,0);
      puVar15 = puVar15 + 0xb8;
      uVar4 = puVar6[4];
      puVar8 = puVar8 + 4;
      iVar16 = iVar16 + 1;
      *piStack_1100 = iVar11;
      *puVar6 = uVar4;
      piStack_1100 = piStack_1100 + 1;
      puVar6[1] = iVar11;
      puVar6 = puVar6 + 0x41;
    }
    iVar11 = iVar11 + 1;
    pbStack_10f0 = pbStack_10f0 + 4;
  } while (iVar11 < 6);
  showroom_step_sub_002d5210(0,iVar16,auStack_e90);
  iVar11 = 0;
  if (iVar16 < 1) {
    iVar11 = *(int *)(param_1 + 8);
  }
  else {
    puVar6 = auStack_ed0;
    do {
      uVar4 = showroom_step_sub_002d4fa0(0,*puVar14,puVar14 + 1);
      *puVar6 = uVar4;
      bVar3 = showroom_step_sub_002d4f20(0,*puVar6);
      if (bVar3 < 3) {
        bVar2 = false;
      }
      iVar11 = iVar11 + 1;
      puVar14 = puVar14 + 0x41;
      puVar6 = puVar6 + 1;
    } while (iVar11 < iVar16);
    iVar11 = *(int *)(param_1 + 8);
  }
  if (iVar11 != *(int *)(param_1 + 0xc)) {
    param_1[0x34] = 0x1e;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x2c] = 0xff;
    param_1[0x2d] = 0xff;
    param_1[0x2e] = 0xff;
    param_1[0x2f] = 0xff;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
  }
  iStack_fe0 = (uint)*param_1 * 4;
  if (param_1[0x28] != 0) {
    iStack_fe0 = iStack_fe0 + 2;
  }
  if (param_1[0x29] != 0) {
    iStack_fe0 = iStack_fe0 + 1;
  }
  showroom_step_sub_002d5210(5,1,&iStack_fe0);
  uVar5 = showroom_step_sub_002d4fa0(5,iStack_fe0,auStack_fdc);
  bVar3 = showroom_step_sub_002d4f20(5,uVar5);
  bVar1 = 2 < bVar3;
  if (bVar1) {
    iStack_10a4 = showroom_step_sub_002d49f0(5,(int)uVar5);
  }
  if ((bVar2) && (bVar1)) {
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if ((*(int *)(param_1 + 4) == 1) && (*(int *)(param_1 + 0x34) != 0)) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    TitleCam_StartPath(iRam0036f4dc + 0x10,1);
  }
  if ((bVar1) && (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30))) {
    iVar9 = iRam0036f4dc + 0x10;
    iVar11 = iRam0036f4dc + 0x110;
    Asset_GetPointLight(*(undefined4 *)(iStack_10a4 + 0x44),auStack_ff0,auStack_1000,
                        *(int *)(param_1 + 0x30) + (*(uint *)(param_1 + 0xc) & 1) * 6);
    TitleCam_SetKey(iVar9,auStack_ff0,auStack_1000,0xf,7);
    Asset_FindNearestLight
              (*(undefined4 *)(iStack_10a4 + 0x44),auStack_1070,auStack_1060,auStack_1030);
    TitleCam_CopyPosition(iVar11,auStack_1070);
    TitleCam_ApplyLight(iVar11);
    if (*(int *)(param_1 + 0x2c) == -1) {
      Garage3d_DrawLit();
      uVar4 = *(undefined4 *)(param_1 + 0x30);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x30);
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
  }
  if (*(int *)(param_1 + 4) != 0) {
    if (((*(int *)(param_1 + 0x3c) != 0) && (bVar2)) && (bVar1)) {
      iVar11 = 0;
      if (0 < iVar16) {
        puStack_10e0 = auStack_ed0;
        do {
          CarModel_ResetState(auStack_3f0);
          MenuCar_ComputeTurntable(auStack_3f0,*puStack_10d0,puStack_10c0,0);
          Asset_GetSpotLight(*(undefined4 *)(iStack_10a4 + 0x44),auStack_1080,auStack_1090,
                             (*(uint *)(param_1 + 0xc) & 1) * 6 + *piVar17);
          maybe_Vu0_RotMatrixY(uStack_108c,auStack_3e0,auStack_3e0);
          sceVu0TransMatrix(auStack_3e0,auStack_3e0,auStack_1080);
          uVar13 = 0;
          puVar10 = auStack_3f0;
          do {
            uVar12 = 0;
            puVar7 = puVar10;
            do {
              sceVu0AddVector(puVar7 + 0x18,puVar7 + 0x18,auStack_1080);
              uVar12 = uVar12 + 1;
              puVar7 = puVar7 + 4;
            } while (uVar12 < 2);
            uVar13 = uVar13 + 1;
            puVar10 = puVar10 + 8;
          } while (uVar13 < 2);
          uStack_64 = 1;
          Asset_GetLightColor(*(undefined4 *)(iStack_10a4 + 0x44),auStack_3a0,
                              (*(uint *)(param_1 + 0xc) & 1) * 6 + *piVar17);
          if (param_1[0x28] != 0) {
            uStack_7c = 0x3f800000;
            uStack_70 = 1;
            auStack_3f0[0] = auStack_3f0[0] | 4;
          }
          showroom_step_sub_002d4d40(0,*puStack_10e0,1,auStack_3f0);
          iVar11 = iVar11 + 1;
          puStack_10c0 = puStack_10c0 + 0xb8;
          puStack_10d0 = puStack_10d0 + 4;
          puStack_10e0 = puStack_10e0 + 1;
          piVar17 = piVar17 + 1;
        } while (iVar11 < iVar16);
      }
      CarModel_Clear(auStack_3f0);
      iStack_3cc = *(int *)(param_1 + 0xc);
      if (iStack_3cc < 0) {
        iStack_3cc = iStack_3cc + 1;
      }
      iStack_3cc = iStack_3cc >> 1;
      showroom_step_sub_002d4d40(5,(int)uVar5,1,auStack_3f0);
    }
    if (((*(int *)(param_1 + 0x3c) != 0) && (bVar2)) && (bVar1)) {
      Garage3d_SetMode(DAT_00327058);
      Garage3d_Draw();
      RaceScene_UpdateAmbient(param_1 + 0x40);
      RaceScene_Draw();
    }
  }
  return;
}

// 0x001f9c10  size 0xf94
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuCar_Render(undefined4 *param_1)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  ushort uVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  int iVar25;
  int *piVar26;
  long lVar27;
  undefined1 *puVar28;
  int *piVar29;
  undefined4 *puVar30;
  int *piVar31;
  int *piVar32;
  float fVar33;
  uint uStack_16b0;
  undefined1 auStack_1690 [64];
  uint auStack_1650 [172];
  undefined8 uStack_13a0;
  undefined4 uStack_1384;
  undefined4 uStack_1380;
  undefined4 uStack_137c;
  undefined4 uStack_1360;
  undefined4 uStack_135c;
  undefined4 uStack_1350;
  undefined4 uStack_134c;
  float fStack_1340;
  float fStack_133c;
  float fStack_1338;
  float fStack_1330;
  float fStack_132c;
  float fStack_1328;
  int aiStack_1300 [252];
  int aiStack_f10 [252];
  undefined4 auStack_b20 [132];
  undefined4 auStack_910 [132];
  undefined4 uStack_700;
  undefined1 auStack_6fc [12];
  undefined4 uStack_6f0;
  undefined1 auStack_5f0 [60];
  ushort auStack_5b4 [46];
  undefined2 auStack_558 [20];
  undefined4 uStack_530;
  undefined1 auStack_52c [268];
  ulong uStack_420;
  undefined4 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_30 [8];
  int aiStack_28 [4];
  undefined2 uStack_18;
  short sStack_16;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  lVar27 = 0;
  uStack_16b0 = 0;
  showroom_step_sub_002d4ae0(8);
  uStack_530 = 0;
  showroom_step_sub_002d5210(4,1,&uStack_530);
  uVar14 = showroom_step_sub_002d4fa0(4,uStack_530,auStack_52c);
  SceneObj_SetDefaultColor(&uStack_420);
  uStack_420 = DAT_00327028;
  uStack_418 = DAT_00327030;
  uStack_410 = DAT_00327038;
  uStack_408 = DAT_00327040;
  uStack_400 = DAT_00327048;
  uStack_3f8 = DAT_00327050;
  showroom_step_sub_002d4d40(4,uVar14,1,&uStack_420);
  iVar11 = param_1[1];
  if (iVar11 == 3) {
    MenuCar_BuildRivalPreview(&uStack_18,auStack_5f0,3,param_1[3],param_1[2]);
  }
  else if (iVar11 == 2) {
    MenuCar_BuildRivalPreview(&uStack_18,auStack_5f0,1,param_1[3],param_1[2]);
  }
  else if (iVar11 == 1) {
    MenuCar_BuildRivalPreview(&uStack_18,auStack_5f0,2,param_1[3],param_1[2]);
  }
  else if (iVar11 == 0) {
    MenuCar_BuildRivalPreview(&uStack_18,auStack_5f0,0,param_1[3],param_1[2]);
  }
  MenuCar_ApplyPartPreview(auStack_6fc,uStack_18,sStack_16,auStack_5f0,param_1[0x18]);
  uStack_700 = uStack_6f0;
  showroom_step_sub_002d5210(0,1,&uStack_700);
  uVar14 = showroom_step_sub_002d4fa0(0,uStack_700,auStack_6fc);
  iVar11 = (int)uVar14;
  bVar8 = showroom_step_sub_002d4f20(0,uVar14);
  if (2 < bVar8) {
    lVar27 = showroom_step_sub_002d49f0(0,iVar11);
  }
  iVar13 = (int)lVar27;
  if ((lVar27 != 0) && ((param_1[1] == 0 || (param_1[1] == 2)))) {
    if (*(short *)((int)param_1 + 0x36) == 0x162) {
      lVar19 = CarRec_GetOptionData(auStack_5f0,0x11);
    }
    else {
      lVar19 = PartDb_Get(*(undefined2 *)((int)param_1 + 0x36));
    }
    if (*(short *)(param_1 + 0xb) == 0x162) {
      uVar14 = CarRec_GetOptionData(auStack_5f0,0xc);
      sVar2 = *(short *)(param_1 + 6);
    }
    else {
      uVar14 = PartDb_Get(*(undefined2 *)(param_1 + 0xb));
      sVar2 = *(short *)(param_1 + 6);
    }
    if (sVar2 == 0x162) {
      uVar15 = CarRec_GetOptionData(auStack_5f0,2);
      sVar2 = *(short *)(param_1 + 0xe);
    }
    else {
      uVar15 = PartDb_Get(*(undefined2 *)(param_1 + 6));
      sVar2 = *(short *)(param_1 + 0xe);
    }
    if (sVar2 == 0x162) {
      uVar16 = CarRec_GetOptionData(auStack_5f0,0x12);
      sVar2 = *(short *)((int)param_1 + 0x3a);
    }
    else {
      uVar16 = PartDb_Get(*(undefined2 *)(param_1 + 0xe));
      sVar2 = *(short *)((int)param_1 + 0x3a);
    }
    if (sVar2 == 0x162) {
      uVar17 = CarRec_GetOptionData(auStack_5f0,0x13);
      sVar2 = *(short *)(param_1 + 0xf);
    }
    else {
      uVar17 = PartDb_Get(*(undefined2 *)((int)param_1 + 0x3a));
      sVar2 = *(short *)(param_1 + 0xf);
    }
    if (sVar2 == 0x162) {
      uVar18 = CarRec_GetOptionData(auStack_5f0,0x14);
    }
    else {
      uVar18 = PartDb_Get(*(undefined2 *)(param_1 + 0xf));
    }
    CarAsset_SetUserData(*(undefined4 *)(iVar13 + 0x504),lVar19 != 0);
    DriverAsset_SetFace(*(undefined4 *)(iVar13 + 0x500),uVar14);
    CarAsset_SetWheelType(*(undefined4 *)(iVar13 + 0x504),uVar15);
    CarAsset_SetBodyKit(*(undefined4 *)(iVar13 + 0x504),uVar16);
    CarAsset_SetSpoiler(*(undefined4 *)(iVar13 + 0x504),uVar17);
    CarAsset_SetAero(*(undefined4 *)(iVar13 + 0x504),uVar18);
    lVar19 = (long)(int)param_1[4];
    if (lVar19 == -2) {
      lVar19 = (long)sStack_16;
    }
    bVar1 = lVar19 == -1;
    if (bVar1) {
      lVar19 = (long)sStack_16;
    }
    uVar22 = 0;
    do {
      CarPreview_ApplyDecal(auStack_30,uStack_18,lVar19,uVar22);
      CarAsset_RelocatePart(*(undefined4 *)(iVar13 + 0x504),uVar22 & 0xff,auStack_30);
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < 6);
    CarAsset_SelectLod(*(undefined4 *)(iVar13 + 0x504),bVar1);
    uVar22 = 0;
    puVar28 = auStack_5f0;
    puVar30 = param_1;
    do {
      uVar20 = *(ushort *)((int)puVar30 + 0x3e);
      if (uVar20 == 0xffff) {
        uVar20 = 0xff;
      }
      else if (uVar20 == 0xfffe) {
        uVar20 = *(ushort *)(puVar28 + 0x3c);
      }
      CarAsset_SetPaintColor(*(undefined4 *)(iVar13 + 0x504),uVar22 & 0xff,uVar20 & 0xff);
      uVar22 = uVar22 + 1;
      puVar30 = (undefined4 *)((int)puVar30 + 2);
      puVar28 = puVar28 + 2;
    } while ((int)uVar22 < 0x10);
  }
  if ((lVar27 != 0) && (param_1[1] == 2)) {
    iVar25 = 0;
    puVar28 = auStack_5f0;
    puVar24 = auStack_910;
    puVar21 = auStack_b20;
    puVar30 = param_1;
    do {
      sVar2 = *(short *)((int)puVar30 + 0x2e);
      uVar3 = *(undefined2 *)(puVar28 + 0x98);
      *puVar24 = 0xffffffff;
      *puVar21 = 0xffffffff;
      if (sVar2 != 0x162) {
        MenuCar_GetPartModel(uVar3,&uStack_4,&uStack_8);
        MenuCar_GetSpecialPaint(sVar2,uStack_6f0,&uStack_c,&uStack_10);
        uVar9 = CarPreview_SetupWheelsAlt
                          (puVar24 + 1,iVar25,uStack_6f0,uStack_c,uStack_4,uStack_8,uStack_10);
        uVar7 = uStack_4;
        uVar6 = uStack_8;
        uVar5 = uStack_c;
        uVar4 = uStack_10;
        uVar10 = uStack_6f0;
        *puVar24 = uVar9;
        uVar10 = CarPreview_SetupWheels(puVar21 + 1,iVar25,uVar10,uVar5,uVar7,uVar6,uVar4);
        uVar22 = 1;
        if (iVar25 != 0) {
          uVar22 = 2;
        }
        *puVar21 = uVar10;
        uStack_16b0 = uStack_16b0 | uVar22;
      }
      iVar25 = iVar25 + 1;
      puVar28 = puVar28 + 4;
      puVar30 = (undefined4 *)((int)puVar30 + 2);
      puVar24 = puVar24 + 0x41;
      puVar21 = puVar21 + 0x41;
    } while (iVar25 < 2);
  }
  uVar22 = uStack_16b0;
  if (uStack_16b0 != 0) {
    showroom_step_sub_002d5210(1,2,auStack_910);
    showroom_step_sub_002d5210(2,2,auStack_b20);
    piVar26 = aiStack_28 + 2;
    piVar29 = aiStack_28;
    iVar25 = 0;
    puVar21 = auStack_910;
    puVar30 = auStack_b20;
    piVar31 = piVar26;
    piVar32 = piVar29;
    do {
      iVar12 = showroom_step_sub_002d4fa0(1,*puVar21,puVar21 + 1);
      uVar10 = *puVar30;
      *piVar31 = iVar12;
      iVar12 = showroom_step_sub_002d4fa0(2,uVar10,puVar30 + 1);
      iVar25 = iVar25 + 1;
      *piVar32 = iVar12;
      puVar21 = puVar21 + 0x41;
      piVar31 = piVar31 + 1;
      puVar30 = puVar30 + 0x41;
      piVar32 = piVar32 + 1;
    } while (iVar25 < 2);
    uVar23 = 0;
    do {
      if (((uStack_16b0 & 1 << (uVar23 & 0x1f)) != 0) &&
         ((bVar8 = showroom_step_sub_002d4f20(1,*piVar26), bVar8 < 3 ||
          (bVar8 = showroom_step_sub_002d4f20(2,*piVar29), bVar8 < 3)))) {
        uStack_16b0 = 0;
        break;
      }
      uVar23 = uVar23 + 1;
      piVar26 = piVar26 + 1;
      piVar29 = piVar29 + 1;
    } while ((int)uVar23 < 2);
  }
  if ((lVar27 != 0) && (uStack_16b0 != 0)) {
    aiStack_f10[0] = iVar11;
    if (aiStack_28[2] == aiStack_28[3]) {
      aiStack_f10[1] = 3;
      showroom_step_sub_002d4d40(1,aiStack_28[2],1,aiStack_f10);
    }
    else {
      aiStack_f10[1] = 1;
      showroom_step_sub_002d4d40(1,aiStack_28[2],1,aiStack_f10);
      aiStack_f10[1] = 2;
      aiStack_f10[0] = iVar11;
      showroom_step_sub_002d4d40(1,aiStack_28[3],1,aiStack_f10);
    }
    aiStack_1300[0] = iVar11;
    if (aiStack_28[0] == aiStack_28[1]) {
      aiStack_1300[1] = 3;
      showroom_step_sub_002d4d40(2,aiStack_28[0],1,aiStack_1300);
      iVar25 = param_1[0x1a];
      goto LAB_001fa01c;
    }
    aiStack_1300[1] = 1;
    showroom_step_sub_002d4d40(2,aiStack_28[0],1,aiStack_1300);
    aiStack_1300[1] = 2;
    aiStack_1300[0] = iVar11;
    showroom_step_sub_002d4d40(2,aiStack_28[1],1,aiStack_1300);
  }
  iVar25 = param_1[0x1a];
LAB_001fa01c:
  if (iVar25 == -1) {
    TitleCam_Advance(iRam0036f4dc + 0x10,0x327170);
    TitleCam_CopyPosition(iRam0036f4dc + 0x110,0x327090);
  }
  if ((lVar27 == 0) || (iVar11 < 0)) {
    *param_1 = 0;
    param_1[0x1a] = 0xffffffff;
    param_1[0x1d] = 0;
  }
  else {
    if (param_1[0x1b] == 0) {
      param_1[0x1a] = 0xffffffff;
      param_1[0x1d] = 0;
    }
    else {
      CarModel_ResetState(&uStack_420);
      uStack_9c = 1;
      MenuCar_ComputeTurntable(&uStack_420,uStack_18,auStack_5f0,param_1[0x18]);
      if (param_1[0x1a] != param_1[0x19]) {
        bVar1 = false;
        if (0xf < (uint)param_1[0x19]) {
          param_1[0x19] = 0;
        }
        maybe_Mem_CopyQwords(&fStack_1340,0x327170,0x40);
        iVar25 = param_1[0x19];
        if (iVar25 == 2) {
          fVar33 = DAT_00327238;
          if (180.0 <= DAT_00327238) {
            fVar33 = DAT_00327238 - 360.0;
          }
          param_1[0x1d] = fVar33 * 0.017453292;
          bVar1 = true;
        }
        else if (iVar25 - 3U < 2) {
          iVar13 = CarDb_GetModelPhysics(uStack_18);
          if (param_1[0x19] == 3) {
            fStack_1340 = *(float *)(iVar13 + 8) / 2.0;
            fStack_1330 = *(float *)(iVar13 + 8) / 2.0;
          }
          else if (param_1[0x19] == 4) {
            fStack_1340 = -(*(float *)(iVar13 + 8) / 2.0);
            fStack_1330 = -(*(float *)(iVar13 + 8) / 2.0);
          }
          fStack_133c = fStack_133c + *(float *)(&DAT_003271b4 + param_1[0x19] * 0x30);
          fStack_132c = fStack_132c + *(float *)(&DAT_003271c4 + param_1[0x19] * 0x30);
          fStack_1338 = fStack_1338 + *(float *)(&DAT_003271b8 + param_1[0x19] * 0x30);
          fStack_1328 = fStack_1328 + *(float *)(&DAT_003271c8 + param_1[0x19] * 0x30);
          fVar33 = DAT_00327238;
          if (180.0 <= DAT_00327238) {
            fVar33 = DAT_00327238 - 360.0;
          }
          param_1[0x1d] = fVar33 * 0.017453292;
          bVar1 = true;
        }
        else if (iVar25 == 6) {
          sceVu0AddVector(&fStack_1340,0x3272d0,*(int *)(iVar13 + 0x504) + 0x590);
          sceVu0AddVector(&fStack_1330,param_1[0x19] * 0x30 + 0x3271c0,
                          *(int *)(iVar13 + 0x504) + 0x590);
          fVar33 = *(float *)(&DAT_003271d8 + param_1[0x19] * 0x30);
          if (180.0 <= fVar33) {
            fVar33 = fVar33 - 360.0;
          }
          param_1[0x1d] = fVar33 * 0.017453292;
        }
        else {
          sceVu0CopyVector(&fStack_1340,iVar25 * 0x30 + 0x3271b0);
          sceVu0CopyVector(&fStack_1330,param_1[0x19] * 0x30 + 0x3271c0);
          fVar33 = *(float *)(&DAT_003271d8 + param_1[0x19] * 0x30);
          if (180.0 <= fVar33) {
            fVar33 = fVar33 - 360.0;
          }
          param_1[0x1d] = fVar33 * 0.017453292;
        }
        if (bVar1) {
          TitleCam_SetKey(iRam0036f4dc + 0x10,&fStack_1340,&fStack_1330,0x2d,7);
          iVar13 = param_1[0x19];
        }
        else {
          TitleCam_Advance(iRam0036f4dc + 0x10,&fStack_1340);
          iVar13 = param_1[0x19];
        }
        if (iVar13 == 5) {
          TitleCam_CopyPosition(iRam0036f4dc + 0x110,0x327100);
          uVar10 = param_1[0x19];
        }
        else {
          TitleCam_CopyPosition(iRam0036f4dc + 0x110,0x327090);
          uVar10 = param_1[0x19];
        }
        param_1[0x1a] = uVar10;
      }
      uStack_48 = 1;
      iStack_44 = *(int *)(&DAT_003271d0 + param_1[0x19] * 0x30) << 4;
      iStack_40 = *(int *)(&DAT_003271d4 + param_1[0x19] * 0x30) << 4;
      iVar13 = param_1[0x19];
      if ((((iVar13 == 0) || (iVar13 == 7)) || (iVar13 == 0xf)) &&
         (fVar33 = (float)param_1[0x1d], param_1[0x1d] = fVar33 - 0.008726646,
         fVar33 - 0.008726646 < -3.1415927)) {
        param_1[0x1d] = (float)param_1[0x1d] + 6.2831855;
      }
      if (param_1[0x19] == 5) {
        uStack_ac = 0x3f800000;
        uStack_a0 = 1;
        uStack_420 = uStack_420 | 0x1f;
      }
      if ((param_1[0x19] == 0) || (param_1[0x19] == 7)) {
        uStack_3c = 1;
      }
      else {
        uStack_3c = 0;
      }
      if (uVar22 != uStack_16b0) {
        if ((uVar22 & 1) != 0) {
          uStack_130 = 0;
          uStack_12c = 0;
        }
        if ((uVar22 & 2) != 0) {
          uStack_128 = 0;
          uStack_124 = 0;
        }
      }
      maybe_Vu0_RotMatrixY(param_1[0x1d],&uStack_410,&uStack_410);
      showroom_step_sub_002d4d40(0,iVar11,1,&uStack_420);
    }
    *param_1 = 1;
  }
  if (param_1[0x1b] != 0) {
    uVar14 = 1;
    switch(param_1[0x19]) {
    case 0:
    case 6:
    case 7:
      break;
    case 1:
      uVar14 = 4;
      break;
    case 2:
    case 3:
    case 4:
      uVar14 = 0;
      break;
    case 5:
      uVar14 = 2;
      break;
    case 8:
      uVar14 = 0;
      break;
    case 9:
      uVar14 = 5;
      break;
    case 10:
      uVar14 = 3;
      break;
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      uVar14 = 7;
    }
    iVar11 = UiMgr_FindLayout(4);
    iVar11 = *_g_UiMgr + iVar11 * 0x4f4;
    TexSlot_Set(0,*(undefined2 *)(*(int *)(iVar11 + 0x2d4) + 6),*(undefined4 *)(iVar11 + 0x2dc));
    Pkt_Init(auStack_1690,1,2,0);
    Pkt_SubmitToChain(auStack_1690,7);
    Pkt_End(auStack_1690);
    if (*(int *)(iVar11 + 0x2d8) != 0) {
      Pkt_Flush(auStack_1690,iVar11 + 0x2e0);
    }
    Obj_Reset(auStack_1650,4,0xffffffffffffffff);
    Obj_SetVisible(auStack_1650,1,0,uVar14);
    uStack_1384 = 0x40;
    uStack_13a0 = 0x48;
    uStack_1380 = 0;
    uStack_137c = 0;
    uStack_1350 = 0x44200000;
    uStack_134c = 0x43e00000;
    uStack_1360 = 0;
    uStack_135c = 0;
    auStack_1650[0] = auStack_1650[0] | 2;
    Pkt_AddPrimitives(auStack_1690,auStack_1650,1);
    Pkt_Submit(auStack_1690,0);
  }
  if (param_1[0x1b] != 0) {
    Garage3d_SetMode(DAT_00327020);
    Garage3d_Draw();
  }
  return;
}

// 0x001fabb0  size 0x90
void MenuList_Init(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffe;
  iVar1 = param_1;
  do {
    *(undefined2 *)(iVar1 + 0x14) = 0x162;
    iVar2 = iVar2 + 7;
    *(undefined2 *)(iVar1 + 0x16) = 0x162;
    *(undefined2 *)(iVar1 + 0x18) = 0x162;
    *(undefined2 *)(iVar1 + 0x1a) = 0x162;
    *(undefined2 *)(iVar1 + 0x1c) = 0x162;
    *(undefined2 *)(iVar1 + 0x1e) = 0x162;
    *(undefined2 *)(iVar1 + 0x20) = 0x162;
    iVar1 = iVar1 + 0xe;
  } while (iVar2 < 0x15);
  iVar1 = 0;
  do {
    *(undefined2 *)(param_1 + 0x3e) = 0xfffe;
    iVar1 = iVar1 + 8;
    *(undefined2 *)(param_1 + 0x40) = 0xfffe;
    *(undefined2 *)(param_1 + 0x42) = 0xfffe;
    *(undefined2 *)(param_1 + 0x44) = 0xfffe;
    *(undefined2 *)(param_1 + 0x46) = 0xfffe;
    *(undefined2 *)(param_1 + 0x48) = 0xfffe;
    *(undefined2 *)(param_1 + 0x4a) = 0xfffe;
    *(undefined2 *)(param_1 + 0x4c) = 0xfffe;
    param_1 = param_1 + 0x10;
  } while (iVar1 < 0x10);
  return;
}

// 0x001fac40  size 0x36c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuList_Update(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *param_1;
  if (iVar6 == 2) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    if (*piRam0036f468 == 1) {
      MenuWnd_SetItemState(param_1[1],*(undefined4 *)(param_2 + param_1[3] * 8),1,0);
    }
  }
  else if (iVar6 == 1) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
    lVar5 = UiLayout_UpdateAnimById(param_1[1],param_1[8]);
    if (lVar5 == 0) {
      *param_1 = 2;
      iVar6 = param_1[8];
      iVar3 = UiMgr_FindLayout(param_1[1]);
      iVar6 = iVar6 * 0x14 + *_g_UiMgr + iVar3 * 0x4f4 + 4;
      *(undefined4 *)(iVar6 + 0x30c) = 0;
      if (*(int *)(iVar6 + 0x31c) == 0) {
        *(undefined4 *)(iVar6 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x318) = 1;
      }
      Menu_ClearSlot(0);
    }
  }
  else {
    if (iVar6 != 0) {
      iVar6 = param_1[4];
      goto LAB_001fadf0;
    }
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
    lVar5 = UiLayout_UpdateAnimById(param_1[1],param_1[7]);
    if (lVar5 == 0) {
      *param_1 = 2;
      iVar6 = param_1[7];
      iVar3 = UiMgr_FindLayout(param_1[1]);
      iVar6 = iVar6 * 0x14 + *_g_UiMgr + iVar3 * 0x4f4 + 4;
      *(undefined4 *)(iVar6 + 0x30c) = 0;
      if (*(int *)(iVar6 + 0x31c) == 0) {
        *(undefined4 *)(iVar6 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x318) = 1;
      }
      Menu_ClearSlot(0);
    }
  }
  iVar6 = param_1[4];
LAB_001fadf0:
  iVar3 = 0;
  if (0 < iVar6 + 1) {
    do {
      if (param_1[6] == 0) {
LAB_001fae88:
        if ((*param_1 == 0) && (iVar6 == iVar3)) {
          iVar6 = (((param_1[9] + param_1[5] * 2) - param_1[3]) + -1) % param_1[5];
        }
        else {
          iVar6 = (iVar3 + ((param_1[9] + param_1[5]) - param_1[3])) % param_1[5];
        }
        MenuWnd_DrawText(param_1[1],*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_3 + iVar6 * 4));
      }
      else {
        if ((*param_1 == 0) && (iVar6 == iVar3)) {
          iVar4 = param_1[5];
          iVar2 = param_1[9];
          iVar7 = param_1[3];
          uVar1 = (((iVar2 + iVar4 * 2) - iVar7) + -1) % iVar4;
        }
        else {
          iVar4 = param_1[5];
          iVar2 = param_1[9];
          iVar7 = param_1[3];
          uVar1 = (iVar3 + ((iVar2 + iVar4) - iVar7)) % iVar4;
        }
        if ((param_1[6] & 1 << (uVar1 & 0x1f)) != 0) goto LAB_001fae88;
        if ((*param_1 == 0) && (iVar6 == iVar3)) {
          iVar6 = ((iVar2 + iVar4 * 2) - iVar7) + -1;
        }
        else {
          iVar6 = iVar3 + ((iVar2 + iVar4) - iVar7);
        }
        MenuWnd_DrawTextId(param_1[1],*(undefined4 *)(param_2 + 4),3,
                           *(undefined4 *)(param_3 + (iVar6 % iVar4) * 4));
      }
      iVar6 = param_1[4];
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 8;
    } while (iVar3 < iVar6 + 1);
  }
  return;
}

// 0x001fafc0  size 0x164
bool MenuList_HandleInput(int *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 2) {
    iVar2 = Menu_GetInput(param_2,param_1[0xb]);
    iVar3 = param_1[2];
    if (param_1[9] == iVar3) {
      Menu_HandleCursor(param_1 + 2,param_2,param_1[0xb],param_1[5] + -1,1,param_1[6]);
      param_1[10] = iVar2;
      bVar1 = iVar3 != param_1[2];
    }
    else {
      bVar1 = false;
    }
    iVar3 = param_1[9];
    if (iVar3 != param_1[2]) {
      if (param_1[10] == -1) {
        do {
          param_1[9] = (iVar3 + param_1[5] + -1) % param_1[5];
          iVar3 = param_1[3];
          param_1[3] = iVar3 + -1;
          if (iVar3 + -1 < 0) {
            param_1[3] = 0;
            *param_1 = 1;
            return bVar1;
          }
          iVar3 = param_1[9];
        } while (iVar3 != param_1[2]);
      }
      else {
        do {
          param_1[9] = (iVar3 + 1) % param_1[5];
          iVar3 = param_1[3];
          param_1[3] = iVar3 + 1;
          if (param_1[4] + -1 < iVar3 + 1) {
            param_1[3] = param_1[4] + -1;
            *param_1 = 0;
            return bVar1;
          }
          iVar3 = param_1[9];
        } while (iVar3 != param_1[2]);
      }
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// 0x001fb130  size 0x38
void MenuList_Reset(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *param_1 = 2;
  param_1[1] = param_2;
  param_1[2] = param_5;
  param_1[9] = param_5;
  param_1[3] = 0;
  param_1[5] = param_6;
  param_1[4] = param_7;
  param_1[6] = 0;
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[0xb] = 2;
  Menu_ClearSlot(0);
  return;
}

// 0x001fb170  size 0xd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 59 callers */

undefined4 Menu_IsInputIdle(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  *puRam0036f468 = 0;
  if (param_1[4] != 1) {
    if (param_1[1] == param_1[2]) {
      if ((*(int *)(_g_MenuMgr + 0x1c) == *(int *)(_g_MenuMgr + 0x20)) || (param_1[6] != 1)) {
        if ((*(uint *)(_g_MenuMgr + 0x28) & 0x400000) == 0) {
          *puRam0036f468 = 1;
        }
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else if ((param_1[6] == 1) || ((*(uint *)(_g_MenuMgr + 0x28) & 1) != 0)) {
      uVar1 = 0;
    }
    else {
      *param_1 = param_1[1];
      param_1[1] = param_1[2];
      param_1[5] = 1;
      param_1[3] = 1;
      param_1[4] = 1;
    }
  }
  return uVar1;
}

// 0x001fb240  size 0x4c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 44 callers */

void Menu_RequestTransition(int param_1)

{
  if ((*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) ||
     (*(int *)(_g_MenuMgr + 0x1c) != *(int *)(_g_MenuMgr + 0x20))) {
    *puRam0036f468 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}

// 0x001fb290  size 0x8
/* volume from Options +0x20; 109 callers */

void Se_PlayMenu(undefined1 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = SndMgr_GetInstance();
  uVar2 = SndMgr_GetChannelB(uVar2,0);
  cVar1 = Options_GetSeVolume();
  (**(code **)(*(int *)uVar2 + 0x24))(uVar2,param_1,0,(cVar1 * 0x60) / 0xf & 0xff,0x3c,0x40,0);
  return;
}

// 0x001fb2a0  size 0x48
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Menu_GetChapterIndex(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar2);
  if (cVar1 == '\0') {
    *(undefined4 *)(_g_MenuMgr + 0x20) = 0xd;
  }
  else {
    *(undefined4 *)(_g_MenuMgr + 0x20) = 0xe;
  }
  return;
}

// 0x001fb2f0  size 0x104
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Menu_GetUnlockState(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 unaff_s1_lo;
  
  if ((*(int *)(_g_MenuMgr + 0x20) == 0x20) || (*(int *)(_g_MenuMgr + 0x20) == 0x2b)) {
    unaff_s1_lo = 0;
  }
  else {
    uVar3 = Profile_Get(0);
    uVar1 = Profile_GetDifficulty(uVar3);
    switch(uVar1) {
    case 0:
      cVar2 = Profile_GetChapter(uVar3);
      if (cVar2 == '\0') {
        unaff_s1_lo = 1;
      }
      else {
        unaff_s1_lo = 5;
      }
      break;
    case 1:
    case 2:
      cVar2 = Profile_GetChapter(uVar3);
      if (cVar2 == '\0') {
        unaff_s1_lo = 3;
      }
      else {
        unaff_s1_lo = 7;
      }
      break;
    case 3:
      cVar2 = Profile_GetChapter(uVar3);
      if (cVar2 == '\0') {
        unaff_s1_lo = 2;
      }
      else {
        unaff_s1_lo = 6;
      }
      break;
    case 4:
    case 5:
      cVar2 = Profile_GetChapter(uVar3);
      if (cVar2 == '\0') {
        unaff_s1_lo = 4;
      }
      else {
        unaff_s1_lo = 8;
      }
    }
  }
  *(undefined1 *)(_g_MenuMgr + 0x641) = unaff_s1_lo;
  return;
}

// 0x001fb400  size 0x25c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Menu_ExitToRace(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar1 = _g_MenuMgr;
  uVar3 = 0;
  switch(*(undefined4 *)(_g_MenuMgr + 0x30)) {
  case 0:
    break;
  case 1:
    if (*(int *)(_g_MenuMgr + 0x5a4) == 0) {
      Sema_Wait(0x36efc0);
      iVar2 = iRam00386628;
      Sema_Signal(0x36efc0,0);
      if (iVar2 == 0) {
        Garage3d_Free();
        return 0;
      }
    }
    if (*(int *)(iVar1 + 0x5a4) != 0) {
      *(int *)(iVar1 + 0x5a4) = *(int *)(iVar1 + 0x5a4) + -1;
    }
    uVar3 = 1;
    break;
  case 2:
    if (*(int *)(_g_MenuMgr + 0x5e4) == 0) {
      Sema_Wait(0x36efc0);
      iVar2 = iRam00386628;
      Sema_Signal(0x36efc0,0);
      if (iVar2 == 0) {
        RaceScene_FreeProps();
        Garage3d_Free();
        return 0;
      }
    }
    if (*(int *)(iVar1 + 0x5e4) != 0) {
      *(int *)(iVar1 + 0x5e4) = *(int *)(iVar1 + 0x5e4) + -1;
    }
    uVar3 = 1;
    break;
  case 3:
    if (*(int *)(_g_MenuMgr + 0x604) == 0) {
      Sema_Wait(0x36efc0);
      iVar2 = iRam00386628;
      Sema_Signal(0x36efc0,0);
      if (iVar2 == 0) {
        showroom_step_sub_002d6820();
        return 0;
      }
    }
    if (*(int *)(iVar1 + 0x604) != 0) {
      *(int *)(iVar1 + 0x604) = *(int *)(iVar1 + 0x604) + -1;
    }
    uVar3 = 1;
    break;
  case 4:
    if (*(int *)(_g_MenuMgr + 0x638) == 0) {
      Sema_Wait(0x36efc0);
      iVar2 = iRam00386628;
      Sema_Signal(0x36efc0,0);
      if (iVar2 == 0) {
        showroom_step_sub_002d8880();
        return 0;
      }
    }
    if (*(int *)(iVar1 + 0x638) != 0) {
      *(int *)(iVar1 + 0x638) = *(int *)(iVar1 + 0x638) + -1;
    }
    uVar3 = 1;
    break;
  case 5:
  case 6:
    if ((*(int *)(_g_MenuMgr + 0x650) != 0) && (lVar4 = menuscr_step_sub_0020f950(), lVar4 != 0)) {
      *(undefined4 *)(iVar1 + 0x650) = 0;
    }
    if ((*(int *)(iVar1 + 0x650) == 0) && (lVar4 = menuscr_exit_sub_0020fa10(), lVar4 == 1)) {
      menuscr_exit_sub_0020fb60();
      uVar3 = 0;
    }
    else {
      menuscr_draw_sub_0020f570();
      uVar3 = 1;
    }
  }
  return uVar3;
}

// 0x001fb660  size 0x130
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuMgr_PopScreen(void)

{
  int iVar1;
  long lVar2;
  
  switch(*(undefined4 *)(_g_MenuMgr + 0x30)) {
  case 1:
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x8000000;
    iVar1 = _g_MenuMgr;
    showroom_step_sub_002d4ae0(8);
    *(undefined4 *)(iVar1 + 0x5a4) = 3;
    break;
  case 2:
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x8000000;
    iVar1 = _g_MenuMgr;
    showroom_step_sub_002d4ae0(8);
    *(undefined4 *)(iVar1 + 0x5e4) = 3;
    break;
  case 3:
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x8000000;
    iVar1 = _g_MenuMgr;
    showroom_step_sub_002d4ae0(8);
    *(undefined4 *)(iVar1 + 0x604) = 3;
    break;
  case 4:
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x8000000;
    iVar1 = _g_MenuMgr;
    showroom_step_sub_002d4ae0(8);
    *(undefined4 *)(iVar1 + 0x638) = 3;
    break;
  case 5:
  case 6:
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x8000000;
    iVar1 = _g_MenuMgr;
    lVar2 = menuscr_step_sub_0020f950();
    if (lVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x650) = 1;
    }
    menuscr_draw_sub_0020f570();
  }
  return;
}

// 0x001fb790  size 0x2ac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 MenuMgr_ChangeScreen(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 0x8000000) == 0) {
    return 0;
  }
  lVar1 = Menu_ExitToRace();
  if (lVar1 == 1) {
    return 1;
  }
  if (*(int *)(_g_MenuMgr + 0x30) == 2) {
    Subtitle_AllocBuffer(0x430750);
  }
  if (*(int *)(_g_MenuMgr + 0x34) == 2) {
    Subtitle_FreeBuffer();
  }
  if (((*(int *)(_g_MenuMgr + 0x30) - 5U < 2) && (*(int *)(_g_MenuMgr + 0x34) != 5)) &&
     (*(int *)(_g_MenuMgr + 0x34) != 6)) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x100;
    UiLayout_Load(_g_MenuMgr + 0x40,0x3294a8,0x430750);
  }
  if (((*(int *)(_g_MenuMgr + 0x34) - 5U < 2) && (*(int *)(_g_MenuMgr + 0x30) != 5)) &&
     (*(int *)(_g_MenuMgr + 0x30) != 6)) {
    UiLayout_Free(_g_MenuMgr + 0x40);
  }
  iVar2 = _g_MenuMgr;
  switch(*(undefined4 *)(_g_MenuMgr + 0x30)) {
  case 1:
    *(undefined4 *)(_g_MenuMgr + 0x534) = 0;
    iVar4 = iVar2 + 0x534;
    *(undefined4 *)(iVar2 + 0x538) = 0;
    *(undefined4 *)(iVar2 + 0x53c) = 0;
    iVar3 = 0;
    *(undefined4 *)(iVar2 + 0x540) = 0;
    *(undefined4 *)(iVar2 + 0x594) = 0;
    *(undefined4 *)(iVar2 + 0x598) = 0;
    *(undefined4 *)(iVar2 + 0x59c) = *(undefined4 *)(iVar2 + 0x598);
    *(undefined4 *)(iVar2 + 0x5a0) = 0;
    *(undefined4 *)(iVar2 + 0x544) = 0xfffffffe;
    iVar2 = iVar4;
    do {
      *(undefined2 *)(iVar2 + 0x14) = 0x162;
      iVar3 = iVar3 + 7;
      *(undefined2 *)(iVar2 + 0x16) = 0x162;
      *(undefined2 *)(iVar2 + 0x18) = 0x162;
      *(undefined2 *)(iVar2 + 0x1a) = 0x162;
      *(undefined2 *)(iVar2 + 0x1c) = 0x162;
      *(undefined2 *)(iVar2 + 0x1e) = 0x162;
      *(undefined2 *)(iVar2 + 0x20) = 0x162;
      iVar2 = iVar2 + 0xe;
    } while (iVar3 < 0x15);
    iVar2 = 0;
    do {
      *(undefined2 *)(iVar4 + 0x3e) = 0xfffe;
      iVar2 = iVar2 + 8;
      *(undefined2 *)(iVar4 + 0x40) = 0xfffe;
      *(undefined2 *)(iVar4 + 0x42) = 0xfffe;
      *(undefined2 *)(iVar4 + 0x44) = 0xfffe;
      *(undefined2 *)(iVar4 + 0x46) = 0xfffe;
      *(undefined2 *)(iVar4 + 0x48) = 0xfffe;
      *(undefined2 *)(iVar4 + 0x4a) = 0xfffe;
      *(undefined2 *)(iVar4 + 0x4c) = 0xfffe;
      iVar4 = iVar4 + 0x10;
    } while (iVar2 < 0x10);
    goto LAB_001fb9f0;
  case 2:
    *(undefined1 *)(_g_MenuMgr + 0x5ac) = 1;
    *(undefined4 *)(iVar2 + 0x5b8) = 0;
    *(undefined4 *)(iVar2 + 0x5b4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x5e8) = 0;
    *(undefined4 *)(iVar2 + 0x5d8) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x5dc) = 0;
    break;
  case 3:
    *(undefined4 *)(_g_MenuMgr + 0x5f0) = 0;
    *(undefined4 *)(iVar2 + 0x60c) = 0;
    *(undefined4 *)(iVar2 + 0x5fc) = 0;
    *(undefined4 *)(iVar2 + 0x600) = 0;
    break;
  case 4:
    *(undefined1 *)(_g_MenuMgr + 0x620) = 1;
    *(undefined4 *)(iVar2 + 0x624) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x628) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x634) = 0;
    *(undefined4 *)(iVar2 + 0x62c) = 0;
    *(undefined4 *)(iVar2 + 0x614) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x618) = 0;
    break;
  case 5:
  case 6:
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
    *(undefined1 *)(iVar2 + 0x640) = 0;
    *(undefined4 *)(iVar2 + 0x648) = 0xa0;
    *(undefined4 *)(iVar2 + 0x64c) = 0x31;
    *(undefined4 *)(iVar2 + 0x650) = 0;
  }
LAB_001fb9f0:
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xf7ffffff;
  return 0;
}

// 0x001fba40  size 0xb8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuMgr_DrawCar(void)

{
  if ((*(uint *)(_g_MenuMgr + 0x28) & 0x200) == 0) {
    switch(*(undefined4 *)(_g_MenuMgr + 0x30)) {
    case 1:
      MenuCar_Render(_g_MenuMgr + 0x534);
      return;
    case 2:
      MenuCar_Setup(_g_MenuMgr + 0x5ac);
      break;
    case 3:
      MenuCar_DrawSpin(_g_MenuMgr + 0x5f0);
      break;
    case 4:
      MenuCar_Draw(_g_MenuMgr + 0x614);
      break;
    case 5:
    case 6:
      menuscr_leaf_sub_0020f900
                (*(undefined4 *)(_g_MenuMgr + 0x644),*(undefined1 *)(_g_MenuMgr + 0x640),
                 *(undefined4 *)(_g_MenuMgr + 0x648),*(undefined4 *)(_g_MenuMgr + 0x64c));
      menuscr_draw_sub_0020f570();
    }
  }
  return;
}

// 0x001fbb00  size 0x1c8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuMgr_Update(void)

{
  bool bVar1;
  long lVar2;
  
  if (*(int *)(_g_MenuMgr + 0x3c) != *(int *)(_g_MenuMgr + 0x38)) {
    lVar2 = UiMgr_FindFreeSlot();
    bVar1 = true;
    if ((lVar2 != 1) && (*(int *)(_g_MenuMgr + 0x344) != 1)) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xfffffeff;
      bVar1 = false;
    }
    lVar2 = CarDb_IsLoading();
    if (lVar2 == 0) {
      bVar1 = true;
    }
    lVar2 = GameDb_IsLoading();
    if (lVar2 == 0) {
      bVar1 = true;
    }
    lVar2 = MenuMgr_EnterScreen();
    if (lVar2 == 1) {
      bVar1 = true;
    }
    if ((bVar1) || (lVar2 = MenuMgr_ChangeScreen(), lVar2 != 0)) {
      lVar2 = MenuSnd_PlayBgm();
      if (lVar2 == 1) {
        MenuSnd_PlayVoice();
        return;
      }
      return;
    }
  }
  if ((*(int *)(_g_MenuMgr + 0x3c) == *(int *)(_g_MenuMgr + 0x38)) ||
     (*(int *)(_g_MenuMgr + 0x1c) != *(int *)(_g_MenuMgr + 0x20))) {
    if (((*(int *)(_g_MenuMgr + 0x38) != -1) &&
        (((0 < *(int *)(_g_MenuMgr + 0x20) && (lVar2 = MenuSnd_StopBgm(), lVar2 == 0)) &&
         (lVar2 = MenuSnd_PlayBgm(), lVar2 == 0)))) &&
       (*(int *)(_g_MenuMgr + 0x3c) == *(int *)(_g_MenuMgr + 0x38))) {
      MenuSnd_SetBgmVolume();
    }
  }
  else {
    lVar2 = MenuSnd_PlayBgm();
    if (lVar2 == 1) {
      MenuSnd_PlayVoice();
    }
    *(undefined4 *)(_g_MenuMgr + 0x38) = *(undefined4 *)(_g_MenuMgr + 0x3c);
    if (*(int *)(_g_MenuMgr + 0x38) != -1) {
      MenuSnd_PlaySe(*(int *)(_g_MenuMgr + 0x38),0);
    }
  }
  return;
}

// 0x001fbcd0  size 0x2ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool MenuMgr_EnterScreen(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 0x200) == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    if (*(int *)(_g_MenuMgr + 0x30) == *(int *)(_g_MenuMgr + 0x34)) {
      switch(*(int *)(_g_MenuMgr + 0x30)) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
      case 6:
        lVar3 = menuscr_step_sub_0020f970();
        bVar4 = lVar3 != 1;
      }
      if (bVar4 == false) {
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xfffffdff;
      }
    }
    else {
      bVar4 = true;
      lVar3 = MenuMgr_ChangeScreen();
      if ((lVar3 == 0) && ((*(uint *)(_g_MenuMgr + 0x28) & 0x100) == 0)) {
        uVar1 = *(undefined4 *)(_g_MenuMgr + 0x34);
        switch(uVar1) {
        case 0:
          *(undefined4 *)(_g_MenuMgr + 0x30) = uVar1;
          break;
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x30) = uVar1;
          iVar2 = _g_MenuMgr;
          puVar5 = (undefined4 *)(_g_MenuMgr + 0x534);
          Garage3d_Load(0,0xc20);
          Garage3d_DrawLit();
          *puVar5 = 0;
          *(undefined4 *)(iVar2 + 0x5a8) = 0;
          *(undefined4 *)(iVar2 + 0x598) = 0;
          *(undefined4 *)(iVar2 + 0x59c) = 0xffffffff;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x30) = uVar1;
          iVar2 = _g_MenuMgr;
          puVar6 = (undefined1 *)(_g_MenuMgr + 0x5ac);
          Garage3d_Load(1,0xc20);
          Garage3d_DrawLit();
          RaceScene_AllocProps(0x430750);
          RaceScene_SetPaused(*puVar6,*(undefined1 *)(iVar2 + 0x5d5),*(undefined1 *)(iVar2 + 0x5d4),
                              1);
          *(undefined4 *)(iVar2 + 0x5b4) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x5b0) = 0;
          *(undefined4 *)(iVar2 + 0x5d8) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x5dc) = 0;
          *(undefined4 *)(iVar2 + 0x5ec) = 0;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x30) = uVar1;
          iVar2 = _g_MenuMgr;
          showroom_step_sub_002d6850(1,0xc20);
          *(undefined4 *)(iVar2 + 0x600) = 0;
          *(undefined4 *)(iVar2 + 0x5f4) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x5f8) = 0;
          *(undefined4 *)(iVar2 + 0x608) = 0;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x30) = uVar1;
          iVar2 = _g_MenuMgr;
          puVar5 = (undefined4 *)(_g_MenuMgr + 0x614);
          showroom_step_sub_002d88b0(1,0xc20);
          *(undefined4 *)(iVar2 + 0x630) = 0;
          *puVar5 = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x618) = 0;
          *(undefined4 *)(iVar2 + 0x61c) = 0;
          *(undefined1 *)(iVar2 + 0x621) = 9;
          *(undefined4 *)(iVar2 + 0x63c) = 0;
          break;
        case 5:
        case 6:
          if (*(int *)(_g_MenuMgr + 0x38) != *(int *)(_g_MenuMgr + 0x3c)) {
            MenuSnd_PlayVoice();
            *(undefined4 *)(_g_MenuMgr + 0x38) = *(undefined4 *)(_g_MenuMgr + 0x3c);
            if (*(int *)(_g_MenuMgr + 0x38) != -1) {
              MenuSnd_PlaySe(*(int *)(_g_MenuMgr + 0x38),0);
            }
          }
          if ((*(int *)(_g_MenuMgr + 0x38) == *(int *)(_g_MenuMgr + 0x3c)) &&
             ((*(int *)(_g_MenuMgr + 0x38) == -1 || (lVar3 = MenuSnd_StopBgm(), lVar3 == 0)))) {
            *(undefined4 *)(_g_MenuMgr + 0x30) = *(undefined4 *)(_g_MenuMgr + 0x34);
            iVar2 = _g_MenuMgr;
            puVar6 = (undefined1 *)(_g_MenuMgr + 0x640);
            menuscr_load_sub_0020fba0(iRam0036f2c0 + 0xc20,1,0,0,0x430750);
            menuscr_load_sub_0020fa90(*(undefined1 *)(iVar2 + 0x641),*puVar6);
            *(undefined4 *)(iVar2 + 0x650) = 0;
          }
        }
      }
    }
  }
  return bVar4;
}

// 0x001fbfc0  size 0x304
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 MenuMgr_LoadScreenLayouts(void)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined4 uVar7;
  int iVar8;
  
  uVar7 = 0;
  if ((*(uint *)(_g_MenuMgr + 0x28) & 0x20) != 0) {
    psVar6 = (short *)(&PTR_DAT_00328f60)[*(int *)(_g_MenuMgr + 0x1c)];
    if (psVar6 == (short *)0x0) {
      return 0;
    }
    if ((*(int *)(_g_MenuMgr + 0x24) == -1) ||
       ((short *)(&PTR_DAT_00328f60)[*(int *)(_g_MenuMgr + 0x24)] == (short *)0x0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      for (iVar5 = 0;
          ((*psVar6 != -2 &&
           (*(short *)((&PTR_DAT_00328f60)[*(int *)(_g_MenuMgr + 0x24)] + iVar5) != -2)) &&
          (*(short *)((&PTR_DAT_00328f60)[*(int *)(_g_MenuMgr + 0x24)] + iVar5) ==
           *(short *)((&PTR_DAT_00328f60)[*(int *)(_g_MenuMgr + 0x1c)] + iVar5))); iVar5 = iVar5 + 2
          ) {
        psVar6 = psVar6 + 1;
        iVar8 = iVar8 + 1;
      }
      iVar5 = 0;
      if (*(short *)(&PTR_DAT_00328f60)[*(int *)(_g_MenuMgr + 0x24)] != -2) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 2;
          iVar5 = iVar5 + 1;
        } while (*(short *)((&PTR_DAT_00328f60)[*(int *)(_g_MenuMgr + 0x24)] + iVar4) != -2);
      }
      iVar5 = iVar5 + -1;
      if ((iVar8 + -1 < iVar5) && (iVar8 + -1 < iVar5)) {
        iVar4 = iVar5 * 2;
        do {
          iVar3 = UiMgr_FindLayout(*(undefined2 *)
                                    ((&PTR_DAT_00328f60)[*(int *)(_g_MenuMgr + 0x24)] + iVar4));
          _g_UiMgr[0x143] = _g_UiMgr[0x143] + -1;
          UiLayout_Free(*_g_UiMgr + iVar3 * 0x4f4 + 4);
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + -2;
          *(undefined4 *)(*_g_UiMgr + iVar3 * 0x4f4) = 0xffffffff;
        } while (iVar8 + -1 < iVar5);
      }
    }
    iVar8 = iVar8 * 2;
    puVar2 = (&PTR_DAT_00328f60)[*(int *)(_g_MenuMgr + 0x1c)];
    sVar1 = *(short *)(puVar2 + iVar8);
    if (sVar1 != -2) {
      uVar7 = 1;
      while (sVar1 != -2) {
        sVar1 = *(short *)(puVar2 + iVar8);
        if ((sVar1 == 0x11) || (sVar1 == 0xce)) {
          UiMgr_LoadLayout(sVar1,sVar1 * 0xc + 0x327930,0);
        }
        else {
          UiMgr_LoadLayout(sVar1,sVar1 * 0xc + 0x327930,1);
        }
        iVar8 = iVar8 + 2;
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x100;
        puVar2 = (&PTR_DAT_00328f60)[*(int *)(_g_MenuMgr + 0x1c)];
        sVar1 = *(short *)(puVar2 + iVar8);
      }
    }
  }
  return uVar7;
}

