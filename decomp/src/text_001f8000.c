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
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
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
        g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        *param_1 = 2;
      }
      else {
        *param_2 = 0;
      }
    }
  }
  return;
}

// 0x001f8420  size 0x44
undefined4 Menu_ClampIndex(ulong param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x2c) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_1) {
    case 0:
      goto override_jmp_001f8440_case_0;
    default:
      uVar1 = 1;
      break;
    case 5:
      uVar1 = 0;
    }
  }
  else {
override_jmp_001f8440_case_0:
    uVar1 = 0;
  }
  return uVar1;
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
  bool bVar2;
  int iVar3;
  
  UiLayout_UpdateAnimById((UiLayout *)0x127,1);
  iVar3 = *param_1;
  if (iVar3 != 4) {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        bVar1 = true;
        if (iVar3 == 1) {
          if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
            switch(g_MenuMgr->bgMode) {
            case 0:
              break;
            case 1:
              bVar1 = g_MenuMgr->unk_0534 == 1;
              break;
            case 2:
              bVar1 = g_MenuMgr->unk_05b0 == 1;
              break;
            case 3:
              bVar1 = g_MenuMgr->unk_0600 == 1;
              break;
            case 4:
              bVar1 = g_MenuMgr->unk_0630 == 1;
            }
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            *param_1 = 3;
          }
        }
        else {
          if (iVar3 != 0) {
            iVar3 = *param_1;
            goto LAB_001f8a58;
          }
          bVar1 = UiLayout_UpdateAnimById((UiLayout *)0x127,0);
          if (!bVar1) {
            if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
              switch(g_MenuMgr->bgMode) {
              case 0:
                bVar1 = true;
                break;
              case 1:
                bVar1 = g_MenuMgr->unk_0534 == 1;
                break;
              case 2:
                bVar1 = g_MenuMgr->unk_05b0 == 1;
                break;
              case 3:
                bVar1 = g_MenuMgr->unk_0600 == 1;
                break;
              case 4:
                bVar1 = g_MenuMgr->unk_0630 == 1;
              }
            }
            else {
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
    bVar1 = UiLayout_UpdateAnimById((UiLayout *)param_1[1],0);
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x127,2);
    if (!bVar2 && !bVar1) {
      *param_1 = 4;
      *(uint *)(_g_MenuInput + 0x10) = *(uint *)(_g_MenuInput + 0x10) | 0x10;
      *(uint *)(_g_MenuInput + 0x10) = *(uint *)(_g_MenuInput + 0x10) | 0x80;
    }
  }
LAB_001f8a54:
  iVar3 = *param_1;
LAB_001f8a58:
  if (iVar3 != 4) {
    iVar3 = UiMgr_FindLayout(param_1[1]);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
    iVar3 = UiMgr_FindLayout(0x127);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  }
  return;
}

// 0x001f8ae0  size 0x1bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 44 callers */

void Menu_SetCursorAlpha(int *param_1,long param_2)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  byte extraout_a3_lo;
  
  if ((*param_1 == 2) || (*param_1 == 4)) {
    *param_1 = 0;
    iVar2 = UiMgr_FindLayout(param_1[1]);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)param_1[2],8,extraout_a3_lo);
    iVar2 = UiMgr_FindLayout(param_1[1]);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar2].layout.unk_30c = 0;
    if (pUVar1[iVar2].layout.unk_31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    iVar2 = UiMgr_FindLayout(0x127);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar2].layout.unk_30c = 0;
    if (pUVar1[iVar2].layout.unk_31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    iVar2 = UiMgr_FindLayout(0x127);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    iVar2 = UiMgr_FindLayout(0x127);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    if (param_2 == 1) {
      *(uint *)(_g_MenuInput + 0x10) = *(uint *)(_g_MenuInput + 0x10) & 0xffffffef;
      *(uint *)(_g_MenuInput + 0x10) = *(uint *)(_g_MenuInput + 0x10) & 0xffffff7f;
    }
  }
  return;
}

// 0x001f8ca0  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 23 callers */

void Menu_BlockInput(void)

{
  *(uint *)(_g_MenuInput + 0x10) = *(uint *)(_g_MenuInput + 0x10) | 0x10;
  *(uint *)(_g_MenuInput + 0x10) = *(uint *)(_g_MenuInput + 0x10) | 0x80;
  return;
}

// 0x001f8cd0  size 0x3f0
/* 30 callers */

void Menu_ShowDialog(undefined4 *param_1,long param_2,undefined4 param_3)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  *param_1 = 4;
  param_1[1] = (int)param_2;
  param_1[2] = param_3;
  uVar2 = UiRes_GetLayoutData(0x3f3);
  iVar3 = UiMgr_FindLayout(0x127);
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
  uVar4 = UiRes_GetLayoutData(0x3f5);
  iVar3 = UiMgr_FindLayout(0x127);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x328 = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar4;
  pUVar1[iVar3].layout.animState = 1;
  uVar4 = UiRes_GetLayoutData(0x3f4);
  iVar3 = UiMgr_FindLayout(0x127);
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
  iVar3 = UiMgr_FindLayout(param_1[1]);
  pUVar1 = g_UiMgr->slots;
  iVar5 = UiRes_GetLayoutData(0x3f2);
  UiLayout_IsAnimDone(&pUVar1[iVar3].layout,0,param_1[2],iVar5,0);
  if (param_2 == 0x124) {
    iVar3 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,0,10,9);
    iVar3 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,1,10,9);
    iVar3 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,2,10,9);
    iVar3 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,3,10,9);
    iVar3 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,4,10,9);
  }
  else {
    iVar3 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,0,10,0x17);
    iVar3 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,1,10,0x17);
    iVar3 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,2,10,0x17);
    iVar3 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,3,10,0x17);
    iVar3 = UiMgr_FindLayout(0x127);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,4,10,0x17);
  }
  return;
}

// 0x001f90c0  size 0x208
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  maybe_MenuObjSet_UpdateAll(8);
  if (*(char *)((int)param_1 + 0xd) != (char)param_1[3]) {
    *(char *)((int)param_1 + 0xd) = (char)param_1[3];
    param_1[10] = 0x1e;
  }
  uStack_110 = (uint)*(byte *)(param_1 + 3);
  MenuObjSet_Step(7,1,&uStack_110);
  lVar2 = maybe_MenuObjSet_FindByName(7,uStack_110,auStack_10c);
  bVar1 = maybe_MenuObjSet_IsLoaded(7,lVar2);
  if (2 < bVar1) {
    lVar4 = maybe_MenuObjSet_GetObject(7,lVar2);
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
    TitleCam_StartPath(_g_TitleCamShared1 + 0x10,2);
    TitleCam_StartPathB(_g_TitleCamShared1 + 0x110,0);
  }
  if ((lVar4 != 0) && (*param_1 != param_1[1])) {
    iVar3 = _g_TitleCamShared1 + 0x10;
    maybe_MenuCar_ComputeSpin(0x42c80000,lVar4,auStack_510,auStack_520,param_1[1],param_1[2],5);
    TitleCam_SetKey(iVar3,auStack_510,auStack_520,0xf,7);
    *param_1 = param_1[1];
  }
  if ((param_1[7] != 0) && (param_1[8] != 0)) {
    Quat_IdentityB(auStack_500);
    iStack_4e0 = param_1[4];
    iStack_4dc = param_1[5];
    iStack_4d8 = param_1[6];
    maybe_MenuObjSet_SetLights(7,lVar2,1,auStack_500);
    maybe_ShowroomBg_Draw();
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  maybe_MenuObjSet_UpdateAll(8);
  if ((param_1[1] != *param_1) && (param_1[2] == 0)) {
    param_1[6] = 0x1e;
  }
  iStack_110 = *param_1;
  MenuObjSet_Step(6,1,&iStack_110);
  lVar2 = maybe_MenuObjSet_FindByName(6,iStack_110,auStack_10c);
  bVar1 = maybe_MenuObjSet_IsLoaded(6,lVar2);
  if (2 < bVar1) {
    lVar5 = maybe_MenuObjSet_GetObject(6,lVar2);
  }
  if ((lVar5 == 0) || (lVar2 < 0)) {
    param_1[8] = 0;
    param_1[4] = 0;
  }
  else {
    param_1[4] = 1;
  }
  if (param_1[1] == -1) {
    iVar4 = _g_TitleCamShared1 + 0x10;
    maybe_MenuCar_GetSpinOffset(auStack_540,*param_1);
    TitleCam_Advance(iVar4,auStack_540);
    iVar4 = param_1[1];
  }
  else {
    iVar4 = param_1[1];
  }
  if (iVar4 == -1) {
    iVar4 = _g_TitleCamShared1 + 0x110;
    maybe_MenuCar_GetSpinPose(auStack_5b0,*param_1);
    TitleCam_CopyPosition(iVar4,auStack_5b0);
    iVar4 = param_1[7];
  }
  else {
    iVar4 = param_1[7];
  }
  if (((iVar4 != 0) && (param_1[4] == 1)) && (param_1[1] != *param_1)) {
    if (param_1[2] != 0) {
      iVar4 = _g_TitleCamShared1 + 0x10;
      uVar3 = maybe_MenuCar_GetSpinTable();
      TitleCam_SetSpeed(iVar4,uVar3,0xffffffffffffffff,0xffffffffffffffff);
      param_1[6] = 0;
    }
    iVar4 = _g_TitleCamShared1 + 0x110;
    maybe_MenuCar_GetSpinPose(auStack_620,*param_1);
    TitleCam_CopyPosition(iVar4,auStack_620);
    param_1[4] = 0;
    param_1[1] = *param_1;
  }
  if (param_1[6] != 0) {
    if (param_1[6] == 1) {
      iVar4 = _g_TitleCamShared1 + 0x10;
      maybe_MenuCar_GetSpinOffset(auStack_660,*param_1);
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
      Quat_Identity(auStack_500);
      if (param_1[2] == 0) {
        fVar6 = (float)param_1[8];
        param_1[8] = (int)(fVar6 - 0.008726646);
        if (fVar6 - 0.008726646 < -3.1415927) {
          param_1[8] = (int)((float)param_1[8] + 6.2831855);
        }
        iStack_4fc = param_1[8];
      }
      maybe_MenuObjSet_SetLights(6,lVar2,1,auStack_500);
      maybe_GarageBg_Draw();
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  maybe_MenuObjSet_UpdateAll(8);
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
  MenuObjSet_Step(0,iVar16,auStack_e90);
  iVar11 = 0;
  if (iVar16 < 1) {
    iVar11 = *(int *)(param_1 + 8);
  }
  else {
    puVar6 = auStack_ed0;
    do {
      uVar4 = maybe_MenuObjSet_FindByName(0,*puVar14,puVar14 + 1);
      *puVar6 = uVar4;
      bVar3 = maybe_MenuObjSet_IsLoaded(0,*puVar6);
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
  MenuObjSet_Step(5,1,&iStack_fe0);
  uVar5 = maybe_MenuObjSet_FindByName(5,iStack_fe0,auStack_fdc);
  bVar3 = maybe_MenuObjSet_IsLoaded(5,uVar5);
  bVar1 = 2 < bVar3;
  if (bVar1) {
    iStack_10a4 = maybe_MenuObjSet_GetObject(5,(int)uVar5);
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
    TitleCam_StartPath(_g_TitleCamShared1 + 0x10,1);
  }
  if ((bVar1) && (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30))) {
    iVar9 = _g_TitleCamShared1 + 0x10;
    iVar11 = _g_TitleCamShared1 + 0x110;
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
          maybe_MenuObjSet_SetLights(0,*puStack_10e0,1,auStack_3f0);
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
      maybe_MenuObjSet_SetLights(5,(int)uVar5,1,auStack_3f0);
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
  UiLayoutSlot *pUVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  ushort uVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  int iVar26;
  int *piVar27;
  long lVar28;
  undefined1 *puVar29;
  int *piVar30;
  undefined4 *puVar31;
  int *piVar32;
  int *piVar33;
  float fVar34;
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
  
  lVar28 = 0;
  uStack_16b0 = 0;
  maybe_MenuObjSet_UpdateAll(8);
  uStack_530 = 0;
  MenuObjSet_Step(4,1,&uStack_530);
  uVar15 = maybe_MenuObjSet_FindByName(4,uStack_530,auStack_52c);
  SceneObj_SetDefaultColor(&uStack_420);
  uStack_420 = DAT_00327028;
  uStack_418 = DAT_00327030;
  uStack_410 = DAT_00327038;
  uStack_408 = DAT_00327040;
  uStack_400 = DAT_00327048;
  uStack_3f8 = DAT_00327050;
  maybe_MenuObjSet_SetLights(4,uVar15,1,&uStack_420);
  iVar12 = param_1[1];
  if (iVar12 == 3) {
    MenuCar_BuildRivalPreview(&uStack_18,auStack_5f0,3,param_1[3],param_1[2]);
  }
  else if (iVar12 == 2) {
    MenuCar_BuildRivalPreview(&uStack_18,auStack_5f0,1,param_1[3],param_1[2]);
  }
  else if (iVar12 == 1) {
    MenuCar_BuildRivalPreview(&uStack_18,auStack_5f0,2,param_1[3],param_1[2]);
  }
  else if (iVar12 == 0) {
    MenuCar_BuildRivalPreview(&uStack_18,auStack_5f0,0,param_1[3],param_1[2]);
  }
  MenuCar_ApplyPartPreview(auStack_6fc,uStack_18,sStack_16,auStack_5f0,param_1[0x18]);
  uStack_700 = uStack_6f0;
  MenuObjSet_Step(0,1,&uStack_700);
  uVar15 = maybe_MenuObjSet_FindByName(0,uStack_700,auStack_6fc);
  iVar12 = (int)uVar15;
  bVar9 = maybe_MenuObjSet_IsLoaded(0,uVar15);
  if (2 < bVar9) {
    lVar28 = maybe_MenuObjSet_GetObject(0,iVar12);
  }
  iVar14 = (int)lVar28;
  if ((lVar28 != 0) && ((param_1[1] == 0 || (param_1[1] == 2)))) {
    if (*(short *)((int)param_1 + 0x36) == 0x162) {
      lVar20 = CarRec_GetOptionData(auStack_5f0,0x11);
    }
    else {
      lVar20 = PartDb_Get(*(undefined2 *)((int)param_1 + 0x36));
    }
    if (*(short *)(param_1 + 0xb) == 0x162) {
      uVar15 = CarRec_GetOptionData(auStack_5f0,0xc);
      sVar2 = *(short *)(param_1 + 6);
    }
    else {
      uVar15 = PartDb_Get(*(undefined2 *)(param_1 + 0xb));
      sVar2 = *(short *)(param_1 + 6);
    }
    if (sVar2 == 0x162) {
      uVar16 = CarRec_GetOptionData(auStack_5f0,2);
      sVar2 = *(short *)(param_1 + 0xe);
    }
    else {
      uVar16 = PartDb_Get(*(undefined2 *)(param_1 + 6));
      sVar2 = *(short *)(param_1 + 0xe);
    }
    if (sVar2 == 0x162) {
      uVar17 = CarRec_GetOptionData(auStack_5f0,0x12);
      sVar2 = *(short *)((int)param_1 + 0x3a);
    }
    else {
      uVar17 = PartDb_Get(*(undefined2 *)(param_1 + 0xe));
      sVar2 = *(short *)((int)param_1 + 0x3a);
    }
    if (sVar2 == 0x162) {
      uVar18 = CarRec_GetOptionData(auStack_5f0,0x13);
      sVar2 = *(short *)(param_1 + 0xf);
    }
    else {
      uVar18 = PartDb_Get(*(undefined2 *)((int)param_1 + 0x3a));
      sVar2 = *(short *)(param_1 + 0xf);
    }
    if (sVar2 == 0x162) {
      uVar19 = CarRec_GetOptionData(auStack_5f0,0x14);
    }
    else {
      uVar19 = PartDb_Get(*(undefined2 *)(param_1 + 0xf));
    }
    CarAsset_SetUserData(*(undefined4 *)(iVar14 + 0x504),lVar20 != 0);
    DriverAsset_SetFace(*(undefined4 *)(iVar14 + 0x500),uVar15);
    CarAsset_SetWheelType(*(undefined4 *)(iVar14 + 0x504),uVar16);
    CarAsset_SetBodyKit(*(undefined4 *)(iVar14 + 0x504),uVar17);
    CarAsset_SetSpoiler(*(undefined4 *)(iVar14 + 0x504),uVar18);
    CarAsset_SetAero(*(undefined4 *)(iVar14 + 0x504),uVar19);
    lVar20 = (long)(int)param_1[4];
    if (lVar20 == -2) {
      lVar20 = (long)sStack_16;
    }
    bVar1 = lVar20 == -1;
    if (bVar1) {
      lVar20 = (long)sStack_16;
    }
    uVar23 = 0;
    do {
      CarPreview_ApplyDecal(auStack_30,uStack_18,lVar20,uVar23);
      CarAsset_RelocatePart(*(undefined4 *)(iVar14 + 0x504),uVar23 & 0xff,auStack_30);
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < 6);
    CarAsset_SelectLod(*(undefined4 *)(iVar14 + 0x504),bVar1);
    uVar23 = 0;
    puVar29 = auStack_5f0;
    puVar31 = param_1;
    do {
      uVar21 = *(ushort *)((int)puVar31 + 0x3e);
      if (uVar21 == 0xffff) {
        uVar21 = 0xff;
      }
      else if (uVar21 == 0xfffe) {
        uVar21 = *(ushort *)(puVar29 + 0x3c);
      }
      CarAsset_SetPaintColor(*(undefined4 *)(iVar14 + 0x504),uVar23 & 0xff,uVar21 & 0xff);
      uVar23 = uVar23 + 1;
      puVar31 = (undefined4 *)((int)puVar31 + 2);
      puVar29 = puVar29 + 2;
    } while ((int)uVar23 < 0x10);
  }
  if ((lVar28 != 0) && (param_1[1] == 2)) {
    iVar26 = 0;
    puVar29 = auStack_5f0;
    puVar25 = auStack_910;
    puVar22 = auStack_b20;
    puVar31 = param_1;
    do {
      sVar2 = *(short *)((int)puVar31 + 0x2e);
      uVar3 = *(undefined2 *)(puVar29 + 0x98);
      *puVar25 = 0xffffffff;
      *puVar22 = 0xffffffff;
      if (sVar2 != 0x162) {
        MenuCar_GetPartModel(uVar3,&uStack_4,&uStack_8);
        MenuCar_GetSpecialPaint(sVar2,uStack_6f0,&uStack_c,&uStack_10);
        uVar10 = CarPreview_SetupWheelsAlt
                           (puVar25 + 1,iVar26,uStack_6f0,uStack_c,uStack_4,uStack_8,uStack_10);
        uVar8 = uStack_4;
        uVar7 = uStack_8;
        uVar6 = uStack_c;
        uVar5 = uStack_10;
        uVar11 = uStack_6f0;
        *puVar25 = uVar10;
        uVar11 = CarPreview_SetupWheels(puVar22 + 1,iVar26,uVar11,uVar6,uVar8,uVar7,uVar5);
        uVar23 = 1;
        if (iVar26 != 0) {
          uVar23 = 2;
        }
        *puVar22 = uVar11;
        uStack_16b0 = uStack_16b0 | uVar23;
      }
      iVar26 = iVar26 + 1;
      puVar29 = puVar29 + 4;
      puVar31 = (undefined4 *)((int)puVar31 + 2);
      puVar25 = puVar25 + 0x41;
      puVar22 = puVar22 + 0x41;
    } while (iVar26 < 2);
  }
  uVar23 = uStack_16b0;
  if (uStack_16b0 != 0) {
    MenuObjSet_Step(1,2,auStack_910);
    MenuObjSet_Step(2,2,auStack_b20);
    piVar27 = aiStack_28 + 2;
    piVar30 = aiStack_28;
    iVar26 = 0;
    puVar22 = auStack_910;
    puVar31 = auStack_b20;
    piVar32 = piVar27;
    piVar33 = piVar30;
    do {
      iVar13 = maybe_MenuObjSet_FindByName(1,*puVar22,puVar22 + 1);
      uVar11 = *puVar31;
      *piVar32 = iVar13;
      iVar13 = maybe_MenuObjSet_FindByName(2,uVar11,puVar31 + 1);
      iVar26 = iVar26 + 1;
      *piVar33 = iVar13;
      puVar22 = puVar22 + 0x41;
      piVar32 = piVar32 + 1;
      puVar31 = puVar31 + 0x41;
      piVar33 = piVar33 + 1;
    } while (iVar26 < 2);
    uVar24 = 0;
    do {
      if (((uStack_16b0 & 1 << (uVar24 & 0x1f)) != 0) &&
         ((bVar9 = maybe_MenuObjSet_IsLoaded(1,*piVar27), bVar9 < 3 ||
          (bVar9 = maybe_MenuObjSet_IsLoaded(2,*piVar30), bVar9 < 3)))) {
        uStack_16b0 = 0;
        break;
      }
      uVar24 = uVar24 + 1;
      piVar27 = piVar27 + 1;
      piVar30 = piVar30 + 1;
    } while ((int)uVar24 < 2);
  }
  if ((lVar28 != 0) && (uStack_16b0 != 0)) {
    aiStack_f10[0] = iVar12;
    if (aiStack_28[2] == aiStack_28[3]) {
      aiStack_f10[1] = 3;
      maybe_MenuObjSet_SetLights(1,aiStack_28[2],1,aiStack_f10);
    }
    else {
      aiStack_f10[1] = 1;
      maybe_MenuObjSet_SetLights(1,aiStack_28[2],1,aiStack_f10);
      aiStack_f10[1] = 2;
      aiStack_f10[0] = iVar12;
      maybe_MenuObjSet_SetLights(1,aiStack_28[3],1,aiStack_f10);
    }
    aiStack_1300[0] = iVar12;
    if (aiStack_28[0] == aiStack_28[1]) {
      aiStack_1300[1] = 3;
      maybe_MenuObjSet_SetLights(2,aiStack_28[0],1,aiStack_1300);
      iVar26 = param_1[0x1a];
      goto LAB_001fa01c;
    }
    aiStack_1300[1] = 1;
    maybe_MenuObjSet_SetLights(2,aiStack_28[0],1,aiStack_1300);
    aiStack_1300[1] = 2;
    aiStack_1300[0] = iVar12;
    maybe_MenuObjSet_SetLights(2,aiStack_28[1],1,aiStack_1300);
  }
  iVar26 = param_1[0x1a];
LAB_001fa01c:
  if (iVar26 == -1) {
    TitleCam_Advance(_g_TitleCamShared1 + 0x10,0x327170);
    TitleCam_CopyPosition(_g_TitleCamShared1 + 0x110,0x327090);
  }
  if ((lVar28 == 0) || (iVar12 < 0)) {
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
        iVar26 = param_1[0x19];
        if (iVar26 == 2) {
          fVar34 = DAT_00327238;
          if (180.0 <= DAT_00327238) {
            fVar34 = DAT_00327238 - 360.0;
          }
          param_1[0x1d] = fVar34 * 0.017453292;
          bVar1 = true;
        }
        else if (iVar26 - 3U < 2) {
          iVar14 = CarDb_GetModelPhysics(uStack_18);
          if (param_1[0x19] == 3) {
            fStack_1340 = *(float *)(iVar14 + 8) / 2.0;
            fStack_1330 = *(float *)(iVar14 + 8) / 2.0;
          }
          else if (param_1[0x19] == 4) {
            fStack_1340 = -(*(float *)(iVar14 + 8) / 2.0);
            fStack_1330 = -(*(float *)(iVar14 + 8) / 2.0);
          }
          fStack_133c = fStack_133c + *(float *)(&DAT_003271b4 + param_1[0x19] * 0x30);
          fStack_132c = fStack_132c + *(float *)(&DAT_003271c4 + param_1[0x19] * 0x30);
          fStack_1338 = fStack_1338 + *(float *)(&DAT_003271b8 + param_1[0x19] * 0x30);
          fStack_1328 = fStack_1328 + *(float *)(&DAT_003271c8 + param_1[0x19] * 0x30);
          fVar34 = DAT_00327238;
          if (180.0 <= DAT_00327238) {
            fVar34 = DAT_00327238 - 360.0;
          }
          param_1[0x1d] = fVar34 * 0.017453292;
          bVar1 = true;
        }
        else if (iVar26 == 6) {
          sceVu0AddVector(&fStack_1340,0x3272d0,*(int *)(iVar14 + 0x504) + 0x590);
          sceVu0AddVector(&fStack_1330,param_1[0x19] * 0x30 + 0x3271c0,
                          *(int *)(iVar14 + 0x504) + 0x590);
          fVar34 = *(float *)(&DAT_003271d8 + param_1[0x19] * 0x30);
          if (180.0 <= fVar34) {
            fVar34 = fVar34 - 360.0;
          }
          param_1[0x1d] = fVar34 * 0.017453292;
        }
        else {
          sceVu0CopyVector(&fStack_1340,iVar26 * 0x30 + 0x3271b0);
          sceVu0CopyVector(&fStack_1330,param_1[0x19] * 0x30 + 0x3271c0);
          fVar34 = *(float *)(&DAT_003271d8 + param_1[0x19] * 0x30);
          if (180.0 <= fVar34) {
            fVar34 = fVar34 - 360.0;
          }
          param_1[0x1d] = fVar34 * 0.017453292;
        }
        if (bVar1) {
          TitleCam_SetKey(_g_TitleCamShared1 + 0x10,&fStack_1340,&fStack_1330,0x2d,7);
          iVar14 = param_1[0x19];
        }
        else {
          TitleCam_Advance(_g_TitleCamShared1 + 0x10,&fStack_1340);
          iVar14 = param_1[0x19];
        }
        if (iVar14 == 5) {
          TitleCam_CopyPosition(_g_TitleCamShared1 + 0x110,0x327100);
          uVar11 = param_1[0x19];
        }
        else {
          TitleCam_CopyPosition(_g_TitleCamShared1 + 0x110,0x327090);
          uVar11 = param_1[0x19];
        }
        param_1[0x1a] = uVar11;
      }
      uStack_48 = 1;
      iStack_44 = *(int *)(&DAT_003271d0 + param_1[0x19] * 0x30) << 4;
      iStack_40 = *(int *)(&DAT_003271d4 + param_1[0x19] * 0x30) << 4;
      iVar14 = param_1[0x19];
      if ((((iVar14 == 0) || (iVar14 == 7)) || (iVar14 == 0xf)) &&
         (fVar34 = (float)param_1[0x1d], param_1[0x1d] = fVar34 - 0.008726646,
         fVar34 - 0.008726646 < -3.1415927)) {
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
      if (uVar23 != uStack_16b0) {
        if ((uVar23 & 1) != 0) {
          uStack_130 = 0;
          uStack_12c = 0;
        }
        if ((uVar23 & 2) != 0) {
          uStack_128 = 0;
          uStack_124 = 0;
        }
      }
      maybe_Vu0_RotMatrixY(param_1[0x1d],&uStack_410,&uStack_410);
      maybe_MenuObjSet_SetLights(0,iVar12,1,&uStack_420);
    }
    *param_1 = 1;
  }
  if (param_1[0x1b] != 0) {
    uVar15 = 1;
    if ((uint)param_1[0x19] < 0xf) {
                    /* WARNING: Switch is manually overridden */
      switch(param_1[0x19]) {
      default:
        break;
      case 1:
        uVar15 = 4;
        break;
      case 2:
      case 3:
      case 4:
        uVar15 = 0;
        break;
      case 5:
        uVar15 = 2;
        break;
      case 8:
        uVar15 = 0;
        break;
      case 9:
        uVar15 = 5;
        break;
      case 10:
        uVar15 = 3;
        break;
      case 0xb:
        uVar15 = 7;
      }
    }
    iVar12 = UiMgr_FindLayout(4);
    pUVar4 = g_UiMgr->slots;
    TexSlot_Set(0,*(undefined2 *)(pUVar4[iVar12].layout.unk_2d0 + 6),pUVar4[iVar12].layout.unk_2d8);
    Pkt_Init(auStack_1690,1,2,0);
    Pkt_SubmitToChain(auStack_1690,7);
    Pkt_End(auStack_1690);
    if (pUVar4[iVar12].layout.unk_2d4 != 0) {
      Pkt_Flush(auStack_1690,&pUVar4[iVar12].layout.field_0x2dc);
    }
    Obj_Reset(auStack_1650,4,0xffffffffffffffff);
    Obj_SetVisible(auStack_1650,1,0,uVar15);
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
  UiLayoutSlot *pUVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *param_1;
  if (iVar7 == 2) {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState(param_1[1],*(undefined4 *)(param_2 + param_1[3] * 8),1,0);
    }
  }
  else if (iVar7 == 1) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)param_1[1],(long)param_1[8]);
    if (!bVar4) {
      *param_1 = 2;
      iVar7 = param_1[8];
      iVar5 = UiMgr_FindLayout(param_1[1]);
      pUVar2 = g_UiMgr->slots;
      (&pUVar2[iVar5].layout.unk_30c)[iVar7 * 5] = 0;
      if ((&pUVar2[iVar5].layout.unk_31c)[iVar7 * 5] == 0) {
        (&pUVar2[iVar5].layout.unk_318)[iVar7 * 5] = 0;
      }
      else {
        (&pUVar2[iVar5].layout.unk_318)[iVar7 * 5] = 1;
      }
      Menu_ClearSlot(0);
    }
  }
  else {
    if (iVar7 != 0) {
      iVar7 = param_1[4];
      goto LAB_001fadf0;
    }
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)param_1[1],(long)param_1[7]);
    if (!bVar4) {
      *param_1 = 2;
      iVar7 = param_1[7];
      iVar5 = UiMgr_FindLayout(param_1[1]);
      pUVar2 = g_UiMgr->slots;
      (&pUVar2[iVar5].layout.unk_30c)[iVar7 * 5] = 0;
      if ((&pUVar2[iVar5].layout.unk_31c)[iVar7 * 5] == 0) {
        (&pUVar2[iVar5].layout.unk_318)[iVar7 * 5] = 0;
      }
      else {
        (&pUVar2[iVar5].layout.unk_318)[iVar7 * 5] = 1;
      }
      Menu_ClearSlot(0);
    }
  }
  iVar7 = param_1[4];
LAB_001fadf0:
  iVar5 = 0;
  if (0 < iVar7 + 1) {
    do {
      if (param_1[6] == 0) {
LAB_001fae88:
        if ((*param_1 == 0) && (iVar7 == iVar5)) {
          iVar7 = (((param_1[9] + param_1[5] * 2) - param_1[3]) + -1) % param_1[5];
        }
        else {
          iVar7 = (iVar5 + ((param_1[9] + param_1[5]) - param_1[3])) % param_1[5];
        }
        MenuWnd_DrawText(param_1[1],*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_3 + iVar7 * 4));
      }
      else {
        if ((*param_1 == 0) && (iVar7 == iVar5)) {
          iVar6 = param_1[5];
          iVar3 = param_1[9];
          iVar8 = param_1[3];
          uVar1 = (((iVar3 + iVar6 * 2) - iVar8) + -1) % iVar6;
        }
        else {
          iVar6 = param_1[5];
          iVar3 = param_1[9];
          iVar8 = param_1[3];
          uVar1 = (iVar5 + ((iVar3 + iVar6) - iVar8)) % iVar6;
        }
        if ((param_1[6] & 1 << (uVar1 & 0x1f)) != 0) goto LAB_001fae88;
        if ((*param_1 == 0) && (iVar7 == iVar5)) {
          iVar7 = ((iVar3 + iVar6 * 2) - iVar8) + -1;
        }
        else {
          iVar7 = iVar5 + ((iVar3 + iVar6) - iVar8);
        }
        MenuWnd_DrawTextId(param_1[1],*(undefined4 *)(param_2 + 4),3,
                           *(undefined4 *)(param_3 + (iVar7 % iVar6) * 4));
      }
      iVar7 = param_1[4];
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 8;
    } while (iVar5 < iVar7 + 1);
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
  *_g_MenuInput = 0;
  if (param_1[4] != 1) {
    if (param_1[1] == param_1[2]) {
      if ((g_MenuMgr->curScreen == g_MenuMgr->nextScreen) || (param_1[6] != 1)) {
        if ((g_MenuMgr->flags & 0x400000) == 0) {
          *_g_MenuInput = 1;
        }
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else if ((param_1[6] == 1) || ((g_MenuMgr->flags & 1) != 0)) {
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
     (g_MenuMgr->curScreen != g_MenuMgr->nextScreen)) {
    *_g_MenuInput = 0;
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
  cVar1 = Options_GetBgmVolume();
  (**(code **)(*(int *)uVar2 + 0x24))(uVar2,param_1,0,(cVar1 * 0x60) / 0xf & 0xff,0x3c,0x40,0);
  return;
}

// 0x001fb2a0  size 0x48
void Menu_GetChapterIndex(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar2);
  if (cVar1 == '\0') {
    g_MenuMgr->nextScreen = 0xd;
  }
  else {
    g_MenuMgr->nextScreen = 0xe;
  }
  return;
}

// 0x001fb2f0  size 0x104
void Menu_GetUnlockState(void)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  uchar unaff_s1_lo;
  
  if ((g_MenuMgr->nextScreen == 0x20) || (g_MenuMgr->nextScreen == 0x2b)) {
    unaff_s1_lo = '\0';
  }
  else {
    uVar3 = Profile_Get(0);
    bVar1 = Profile_GetDifficulty(uVar3);
    if (bVar1 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar1) {
      case 0:
        cVar2 = Profile_GetChapter(uVar3);
        if (cVar2 == '\0') {
          unaff_s1_lo = '\x01';
        }
        else {
          unaff_s1_lo = '\x05';
        }
        break;
      default:
        cVar2 = Profile_GetChapter(uVar3);
        if (cVar2 == '\0') {
          unaff_s1_lo = '\x03';
        }
        else {
          unaff_s1_lo = '\a';
        }
        break;
      case 3:
        cVar2 = Profile_GetChapter(uVar3);
        if (cVar2 == '\0') {
          unaff_s1_lo = '\x02';
        }
        else {
          unaff_s1_lo = '\x06';
        }
        break;
      case 4:
        cVar2 = Profile_GetChapter(uVar3);
        if (cVar2 == '\0') {
          unaff_s1_lo = '\x04';
        }
        else {
          unaff_s1_lo = '\b';
        }
      }
    }
  }
  g_MenuMgr->unk_0641 = unaff_s1_lo;
  return;
}

// 0x001fb400  size 0x25c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Menu_ExitToRace(void)

{
  MenuMgr *pMVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  pMVar1 = g_MenuMgr;
  uVar3 = 0;
  if (g_MenuMgr->nextBgMode < 7) {
                    /* WARNING: Switch is manually overridden */
    switch(g_MenuMgr->nextBgMode) {
    case 0:
      break;
    case 1:
      if (g_MenuMgr->unk_05a4 == 0) {
        Sema_Wait(0x36efc0);
        iVar2 = _g_FileShared2;
        Sema_Signal(0x36efc0,0);
        if (iVar2 == 0) {
          Garage3d_Free();
          return 0;
        }
      }
      if (pMVar1->unk_05a4 != 0) {
        pMVar1->unk_05a4 = pMVar1->unk_05a4 - 1;
      }
      uVar3 = 1;
      break;
    case 2:
      if (g_MenuMgr->unk_05e4 == 0) {
        Sema_Wait(0x36efc0);
        iVar2 = _g_FileShared2;
        Sema_Signal(0x36efc0,0);
        if (iVar2 == 0) {
          RaceScene_FreeProps();
          Garage3d_Free();
          return 0;
        }
      }
      if (pMVar1->unk_05e4 != 0) {
        pMVar1->unk_05e4 = pMVar1->unk_05e4 - 1;
      }
      uVar3 = 1;
      break;
    case 3:
      if (g_MenuMgr->unk_0604 == 0) {
        Sema_Wait(0x36efc0);
        iVar2 = _g_FileShared2;
        Sema_Signal(0x36efc0,0);
        if (iVar2 == 0) {
          GarageBg_Unload();
          return 0;
        }
      }
      if (pMVar1->unk_0604 != 0) {
        pMVar1->unk_0604 = pMVar1->unk_0604 - 1;
      }
      uVar3 = 1;
      break;
    case 4:
      if (g_MenuMgr->unk_0638 == 0) {
        Sema_Wait(0x36efc0);
        iVar2 = _g_FileShared2;
        Sema_Signal(0x36efc0,0);
        if (iVar2 == 0) {
          ShowroomBg_Unload();
          return 0;
        }
      }
      if (pMVar1->unk_0638 != 0) {
        pMVar1->unk_0638 = pMVar1->unk_0638 - 1;
      }
      uVar3 = 1;
      break;
    case 5:
      if ((g_MenuMgr->unk_0650 != 0) && (lVar4 = MenuMovie_Stop(), lVar4 != 0)) {
        pMVar1->unk_0650 = 0;
      }
      if ((pMVar1->unk_0650 == 0) && (lVar4 = MenuMovie_Reset(), lVar4 == 1)) {
        MenuMovie_Free();
        uVar3 = 0;
      }
      else {
        MenuMovie_Draw();
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

// 0x001fb660  size 0x130
void MenuMgr_PopScreen(void)

{
  MenuMgr *pMVar1;
  long lVar2;
  
  if (g_MenuMgr->nextBgMode < 7) {
                    /* WARNING: Switch is manually overridden */
    switch(g_MenuMgr->nextBgMode) {
    case 1:
      g_MenuMgr->flags = g_MenuMgr->flags | 0x8000000;
      pMVar1 = g_MenuMgr;
      maybe_MenuObjSet_UpdateAll(8);
      pMVar1->unk_05a4 = 3;
      break;
    case 2:
      g_MenuMgr->flags = g_MenuMgr->flags | 0x8000000;
      pMVar1 = g_MenuMgr;
      maybe_MenuObjSet_UpdateAll(8);
      pMVar1->unk_05e4 = 3;
      break;
    case 3:
      g_MenuMgr->flags = g_MenuMgr->flags | 0x8000000;
      pMVar1 = g_MenuMgr;
      maybe_MenuObjSet_UpdateAll(8);
      pMVar1->unk_0604 = 3;
      break;
    case 4:
      g_MenuMgr->flags = g_MenuMgr->flags | 0x8000000;
      pMVar1 = g_MenuMgr;
      maybe_MenuObjSet_UpdateAll(8);
      pMVar1->unk_0638 = 3;
      break;
    case 5:
      g_MenuMgr->flags = g_MenuMgr->flags | 0x8000000;
      pMVar1 = g_MenuMgr;
      lVar2 = MenuMovie_Stop();
      if (lVar2 == 0) {
        pMVar1->unk_0650 = 1;
      }
      MenuMovie_Draw();
    }
  }
  return;
}

// 0x001fb790  size 0x2ac
undefined8 MenuMgr_ChangeScreen(void)

{
  MenuMgr *pMVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  
  if ((g_MenuMgr->flags & 0x8000000) == 0) {
    return 0;
  }
  lVar2 = Menu_ExitToRace();
  if (lVar2 == 1) {
    return 1;
  }
  if (g_MenuMgr->nextBgMode == 2) {
    Subtitle_AllocBuffer(0x430750);
  }
  if (g_MenuMgr->bgMode == 2) {
    Subtitle_FreeBuffer();
  }
  if (((g_MenuMgr->nextBgMode - 5 < 2) && (g_MenuMgr->bgMode != 5)) && (g_MenuMgr->bgMode != 6)) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x100;
    UiLayout_Load((UiLayout *)&g_MenuMgr->field_0x40,(undefined4 *)&DAT_003294a8,0x430750);
  }
  if (((g_MenuMgr->bgMode - 5 < 2) && (g_MenuMgr->nextBgMode != 5)) && (g_MenuMgr->nextBgMode != 6))
  {
    UiLayout_Free((UiLayout *)&g_MenuMgr->field_0x40);
  }
  pMVar1 = g_MenuMgr;
  if (g_MenuMgr->nextBgMode < 7) {
                    /* WARNING: Switch is manually overridden */
    switch(g_MenuMgr->nextBgMode) {
    case 1:
      g_MenuMgr->unk_0534 = 0;
      puVar5 = &pMVar1->unk_0534;
      pMVar1->unk_0538 = 0;
      *(undefined4 *)&pMVar1->field_0x53c = 0;
      iVar4 = 0;
      pMVar1->unk_0540 = 0;
      pMVar1->unk_0594 = 0;
      pMVar1->unk_0598 = 0;
      *(uint *)&pMVar1->field_0x59c = pMVar1->unk_0598;
      pMVar1->unk_05a0 = 0;
      pMVar1->unk_0544 = 0xfffffffe;
      puVar3 = puVar5;
      do {
        *(undefined2 *)(puVar3 + 5) = 0x162;
        iVar4 = iVar4 + 7;
        *(undefined2 *)((int)puVar3 + 0x16) = 0x162;
        *(undefined2 *)(puVar3 + 6) = 0x162;
        *(undefined2 *)((int)puVar3 + 0x1a) = 0x162;
        *(undefined2 *)(puVar3 + 7) = 0x162;
        *(undefined2 *)((int)puVar3 + 0x1e) = 0x162;
        *(undefined2 *)(puVar3 + 8) = 0x162;
        puVar3 = (uint *)((int)puVar3 + 0xe);
      } while (iVar4 < 0x15);
      iVar4 = 0;
      do {
        *(undefined2 *)((int)puVar5 + 0x3e) = 0xfffe;
        iVar4 = iVar4 + 8;
        *(undefined2 *)(puVar5 + 0x10) = 0xfffe;
        *(undefined2 *)((int)puVar5 + 0x42) = 0xfffe;
        *(undefined2 *)(puVar5 + 0x11) = 0xfffe;
        *(undefined2 *)((int)puVar5 + 0x46) = 0xfffe;
        *(undefined2 *)(puVar5 + 0x12) = 0xfffe;
        *(undefined2 *)((int)puVar5 + 0x4a) = 0xfffe;
        *(undefined2 *)(puVar5 + 0x13) = 0xfffe;
        puVar5 = puVar5 + 4;
      } while (iVar4 < 0x10);
      goto LAB_001fb9f0;
    case 2:
      g_MenuMgr->unk_05ac = '\x01';
      pMVar1->unk_05b8 = 0;
      *(undefined4 *)&pMVar1->field_0x5b4 = 0xffffffff;
      pMVar1->unk_05e8 = 0;
      *(undefined4 *)&pMVar1->field_0x5d8 = 0xffffffff;
      pMVar1->unk_05dc = 0;
      break;
    case 3:
      g_MenuMgr->unk_05f0 = 0;
      pMVar1->unk_060c = 0;
      pMVar1->unk_05fc = 0;
      pMVar1->unk_0600 = 0;
      break;
    case 4:
      g_MenuMgr->unk_0620 = '\x01';
      pMVar1->unk_0624 = 0xffffffff;
      pMVar1->unk_0628 = 0xffffffff;
      pMVar1->unk_0634 = 0;
      *(undefined4 *)&pMVar1->field_0x62c = 0;
      *(undefined4 *)&pMVar1->field_0x614 = 0xffffffff;
      pMVar1->unk_0618 = 0;
      break;
    case 5:
      g_MenuMgr->unk_0644 = 0;
      pMVar1->unk_0640 = '\0';
      pMVar1->unk_0648 = 0xa0;
      pMVar1->unk_064c = 0x31;
      pMVar1->unk_0650 = 0;
    }
  }
LAB_001fb9f0:
  g_MenuMgr->flags = g_MenuMgr->flags & 0xf7ffffff;
  return 0;
}

// 0x001fba40  size 0xb8
void MenuMgr_DrawCar(void)

{
  if (((g_MenuMgr->flags & 0x200) == 0) && (g_MenuMgr->nextBgMode < 7)) {
                    /* WARNING: Switch is manually overridden */
    switch(g_MenuMgr->nextBgMode) {
    case 1:
      MenuCar_Render(&g_MenuMgr->unk_0534);
      return;
    case 2:
      MenuCar_Setup(&g_MenuMgr->unk_05ac);
      break;
    case 3:
      MenuCar_DrawSpin(&g_MenuMgr->unk_05f0);
      break;
    case 4:
      MenuCar_Draw(&g_MenuMgr->field_0x614);
      break;
    case 5:
      MenuMovie_SetParams(g_MenuMgr->unk_0644,g_MenuMgr->unk_0640,g_MenuMgr->unk_0648,
                          g_MenuMgr->unk_064c);
      MenuMovie_Draw();
    }
  }
  return;
}

// 0x001fbb00  size 0x1c8
void MenuMgr_Update(void)

{
  bool bVar1;
  long lVar2;
  
  if (g_MenuMgr->voiceParam != g_MenuMgr->unk_0038) {
    lVar2 = UiMgr_FindFreeSlot();
    bVar1 = true;
    if ((lVar2 != 1) && (g_MenuMgr->unk_0344 != 1)) {
      g_MenuMgr->flags = g_MenuMgr->flags & 0xfffffeff;
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
  if ((g_MenuMgr->voiceParam == g_MenuMgr->unk_0038) ||
     (g_MenuMgr->curScreen != g_MenuMgr->nextScreen)) {
    if (((g_MenuMgr->unk_0038 != 0xffffffff) &&
        (((0 < (int)g_MenuMgr->nextScreen && (lVar2 = MenuSnd_StopBgm(), lVar2 == 0)) &&
         (lVar2 = MenuSnd_PlayBgm(), lVar2 == 0)))) &&
       (g_MenuMgr->voiceParam == g_MenuMgr->unk_0038)) {
      MenuSnd_SetBgmVolume();
    }
  }
  else {
    lVar2 = MenuSnd_PlayBgm();
    if (lVar2 == 1) {
      MenuSnd_PlayVoice();
    }
    g_MenuMgr->unk_0038 = g_MenuMgr->voiceParam;
    if (g_MenuMgr->unk_0038 != 0xffffffff) {
      MenuSnd_PlaySe(g_MenuMgr->unk_0038,0);
    }
  }
  return;
}

// 0x001fbcd0  size 0x2ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool MenuMgr_EnterScreen(void)

{
  uint uVar1;
  MenuMgr *pMVar2;
  long lVar3;
  bool bVar4;
  uint *puVar5;
  uchar *puVar6;
  undefined1 *puVar7;
  
  if ((g_MenuMgr->flags & 0x200) == 0) {
    bVar4 = false;
  }
  else {
    uVar1 = g_MenuMgr->nextBgMode;
    bVar4 = false;
    if (uVar1 == g_MenuMgr->bgMode) {
      if (uVar1 < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar1) {
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
          lVar3 = maybe_MenuMovie_BindTexture();
          bVar4 = lVar3 != 1;
        }
      }
      if (bVar4 == false) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xfffffdff;
      }
    }
    else {
      bVar4 = true;
      lVar3 = MenuMgr_ChangeScreen();
      if (((lVar3 == 0) && ((g_MenuMgr->flags & 0x100) == 0)) &&
         (uVar1 = g_MenuMgr->bgMode, uVar1 < 7)) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar1) {
        case 0:
          g_MenuMgr->nextBgMode = uVar1;
          break;
        case 1:
          g_MenuMgr->nextBgMode = uVar1;
          pMVar2 = g_MenuMgr;
          puVar5 = &g_MenuMgr->unk_0534;
          Garage3d_Load(0,0xc20);
          Garage3d_DrawLit();
          *puVar5 = 0;
          *(undefined4 *)&pMVar2->field_0x5a8 = 0;
          pMVar2->unk_0598 = 0;
          *(undefined4 *)&pMVar2->field_0x59c = 0xffffffff;
          break;
        case 2:
          g_MenuMgr->nextBgMode = uVar1;
          pMVar2 = g_MenuMgr;
          puVar6 = &g_MenuMgr->unk_05ac;
          Garage3d_Load(1,0xc20);
          Garage3d_DrawLit();
          RaceScene_AllocProps(0x430750);
          RaceScene_SetPaused(*puVar6,pMVar2->unk_05d5,pMVar2->unk_05d4,1);
          *(undefined4 *)&pMVar2->field_0x5b4 = 0xffffffff;
          pMVar2->unk_05b0 = 0;
          *(undefined4 *)&pMVar2->field_0x5d8 = 0xffffffff;
          pMVar2->unk_05dc = 0;
          *(undefined4 *)&pMVar2->field_0x5ec = 0;
          break;
        case 3:
          g_MenuMgr->nextBgMode = uVar1;
          pMVar2 = g_MenuMgr;
          GarageBg_Load(1,0xc20);
          pMVar2->unk_0600 = 0;
          *(undefined4 *)&pMVar2->field_0x5f4 = 0xffffffff;
          *(undefined4 *)&pMVar2->field_0x5f8 = 0;
          *(undefined4 *)&pMVar2->field_0x608 = 0;
          break;
        case 4:
          g_MenuMgr->nextBgMode = uVar1;
          pMVar2 = g_MenuMgr;
          puVar7 = &g_MenuMgr->field_0x614;
          ShowroomBg_Load(1,0xc20);
          pMVar2->unk_0630 = 0;
          *(undefined4 *)puVar7 = 0xffffffff;
          pMVar2->unk_0618 = 0;
          *(undefined4 *)&pMVar2->field_0x61c = 0;
          pMVar2->field_0x621 = 9;
          *(undefined4 *)&pMVar2->field_0x63c = 0;
          break;
        case 5:
          if (g_MenuMgr->unk_0038 != g_MenuMgr->voiceParam) {
            MenuSnd_PlayVoice();
            g_MenuMgr->unk_0038 = g_MenuMgr->voiceParam;
            if (g_MenuMgr->unk_0038 != 0xffffffff) {
              MenuSnd_PlaySe(g_MenuMgr->unk_0038,0);
            }
          }
          if ((g_MenuMgr->unk_0038 == g_MenuMgr->voiceParam) &&
             ((g_MenuMgr->unk_0038 == 0xffffffff || (lVar3 = MenuSnd_StopBgm(), lVar3 == 0)))) {
            g_MenuMgr->nextBgMode = g_MenuMgr->bgMode;
            pMVar2 = g_MenuMgr;
            puVar6 = &g_MenuMgr->unk_0640;
            MenuMovie_Create(_g_RaceIntroShared1 + 0xc20,1,0,0,0x430750);
            MenuMovie_LoadFile(pMVar2->unk_0641,*puVar6);
            pMVar2->unk_0650 = 0;
          }
        }
      }
    }
  }
  return bVar4;
}

// 0x001fbfc0  size 0x304
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
  if ((g_MenuMgr->flags & 0x20) != 0) {
    psVar6 = (short *)(&PTR_DAT_00328f60)[g_MenuMgr->curScreen];
    if (psVar6 == (short *)0x0) {
      return 0;
    }
    if ((g_MenuMgr->prevScreen == 0xffffffff) ||
       ((short *)(&PTR_DAT_00328f60)[g_MenuMgr->prevScreen] == (short *)0x0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      for (iVar5 = 0;
          ((*psVar6 != -2 && (*(short *)((&PTR_DAT_00328f60)[g_MenuMgr->prevScreen] + iVar5) != -2))
          && (*(short *)((&PTR_DAT_00328f60)[g_MenuMgr->prevScreen] + iVar5) ==
              *(short *)((&PTR_DAT_00328f60)[g_MenuMgr->curScreen] + iVar5))); iVar5 = iVar5 + 2) {
        psVar6 = psVar6 + 1;
        iVar8 = iVar8 + 1;
      }
      iVar5 = 0;
      if (*(short *)(&PTR_DAT_00328f60)[g_MenuMgr->prevScreen] != -2) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 2;
          iVar5 = iVar5 + 1;
        } while (*(short *)((&PTR_DAT_00328f60)[g_MenuMgr->prevScreen] + iVar4) != -2);
      }
      iVar5 = iVar5 + -1;
      if ((iVar8 + -1 < iVar5) && (iVar8 + -1 < iVar5)) {
        iVar4 = iVar5 * 2;
        do {
          iVar3 = UiMgr_FindLayout(*(undefined2 *)
                                    ((&PTR_DAT_00328f60)[g_MenuMgr->prevScreen] + iVar4));
          g_UiMgr->unk_50c = g_UiMgr->unk_50c - 1;
          UiLayout_Free(&g_UiMgr->slots[iVar3].layout);
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + -2;
          g_UiMgr->slots[iVar3].id = 0xffffffff;
        } while (iVar8 + -1 < iVar5);
      }
    }
    iVar8 = iVar8 * 2;
    puVar2 = (&PTR_DAT_00328f60)[g_MenuMgr->curScreen];
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
        g_MenuMgr->flags = g_MenuMgr->flags | 0x100;
        puVar2 = (&PTR_DAT_00328f60)[g_MenuMgr->curScreen];
        sVar1 = *(short *)(puVar2 + iVar8);
      }
    }
  }
  return uVar7;
}

