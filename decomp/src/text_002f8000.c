// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002f8000 - 0x002fc000
#include "ghidra_types.h"

// 0x002f8000  size 0x18
void PreviewSnd_MarkStopped(int param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// 0x002f8020  size 0x60
void PreviewSnd_StopAndClear(undefined4 *param_1)

{
  long lVar1;
  
  if (((param_1[1] & 0x80) != 0) && (lVar1 = Snd_QueueCmd1(*param_1), lVar1 != 0)) {
    param_1[1] = param_1[1] & 0xffffff7f;
  }
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 0x002f8080  size 0x14
void PreviewSnd_Init(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 0x002f80a0  size 0xcc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Composer_UpdateInput(int *param_1)

{
  undefined4 uVar1;
  
  ComposerInput_SetMode(0);
  if ((param_1[5] == 0) && (param_1[6] == 0)) {
    if ((param_1[1] != param_1[2]) ||
       (*(int *)(_g_ComposerScene + 4) != *(int *)(_g_ComposerScene + 0xc))) {
      if ((param_1[7] == 0) || (*(int *)(_g_ComposerScene + 0x10) != 0)) {
        param_1[6] = 1;
        return 0;
      }
      *param_1 = param_1[1];
      param_1[1] = param_1[2];
      param_1[5] = 1;
      param_1[3] = 1;
      param_1[4] = 1;
      param_1[7] = 0;
    }
    ComposerInput_SetMode(1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002f8170  size 0x28
/* 32 callers */

void Composer_ConsumeRedraw(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}

// 0x002f81a0  size 0x8
/* 32 callers */

void Composer_ClearDirty(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 0x002f81b0  size 0x8
undefined4 Nameentry_GetField_18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// 0x002f81c0  size 0x8
undefined4 Nameentry_GetField_14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 0x002f81d0  size 0xc
/* 32 callers */

undefined4 Composer_ConsumeConfirm(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return uVar1;
}

// 0x002f81e0  size 0xc
/* 30 callers */

undefined4 Composer_ConsumeCancel(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar1;
}

// 0x002f81f0  size 0x8
undefined4 Nameentry_GetField_8_81f0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0x002f8200  size 0x8
undefined4 Nameentry_GetField_4_8200(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0x002f8210  size 0x8
undefined4 Nameentry_Nop_2(undefined4 *param_1)

{
  return *param_1;
}

// 0x002f8220  size 0x8
void Nameentry_SetField_8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 0x002f8230  size 0x2c
void Composer_InitPanel(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0xffffffff;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = 1;
  param_1[4] = 1;
  param_1[5] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 0x002f8260  size 0xa4
/* 26 callers */

void Composer_DrawLabel(long param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_1) {
    MenuWnd_DrawText(1,0x1b);
  }
  iVar1 = UiMgr_FindLayout(1);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar1].layout,0x1a,9,*(int *)(&DAT_00343550 + param_2 * 4));
  iVar1 = UiMgr_FindLayout(1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x002f8310  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ComposerScene_GetMode(void)

{
  return *(undefined4 *)(_g_ComposerScene + 0x18);
}

// 0x002f8320  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerScene_SetMode(undefined4 param_1)

{
  *(undefined4 *)(_g_ComposerScene + 0x18) = param_1;
  return;
}

// 0x002f8330  size 0x8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Nameentry_Nop_3(void)

{
  return _s_Nameentry_Nop_3_1;
}

// 0x002f8340  size 0x8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Nameentry_Nop_4(void)

{
  return _s_Nameentry_Nop_4_1;
}

// 0x002f8350  size 0x1f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerScene_FadeIn(void)

{
  int aiStack_50 [8];
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_30 = 1;
  uStack_28 = 0x44;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  if (*(int *)(_g_ComposerScene + 0x10) == 1) {
    if (*(int *)(_g_ComposerScene + 0x14) < 0) {
      *(undefined4 *)(_g_ComposerScene + 0x14) = 0x14;
    }
    if (*(int *)(_g_ComposerScene + 0x14) < 1) {
      Gfx_SetFade(2,9,0,0);
      *(undefined4 *)(_g_ComposerScene + 0x10) = 0;
    }
    else {
      aiStack_50[0] = (*(int *)(_g_ComposerScene + 0x14) << 7) / 0x14;
      if (aiStack_50[0] < 0) {
        aiStack_50[0] = 0;
      }
      else {
        if (0x80 < aiStack_50[0]) {
          aiStack_50[0] = 0x80;
        }
        aiStack_50[0] = aiStack_50[0] << 0x18;
      }
      Gfx_SetFade(2,9,1,aiStack_50);
    }
    *(int *)(_g_ComposerScene + 0x14) = *(int *)(_g_ComposerScene + 0x14) + -1;
  }
  else if (*(int *)(_g_ComposerScene + 0x10) == 2) {
    if (*(int *)(_g_ComposerScene + 0x14) < 0) {
      *(undefined4 *)(_g_ComposerScene + 0x14) = 0x28;
    }
    if (*(int *)(_g_ComposerScene + 0x14) < 1) {
      *(undefined4 *)(_g_ComposerScene + 0x10) = 3;
    }
    else {
      aiStack_50[0] = ((0x28 - *(int *)(_g_ComposerScene + 0x14)) * 0x80) / 0x28;
      if (aiStack_50[0] < 0) {
        aiStack_50[0] = 0;
      }
      else {
        if (0x80 < aiStack_50[0]) {
          aiStack_50[0] = 0x80;
        }
        aiStack_50[0] = aiStack_50[0] << 0x18;
      }
      Gfx_SetFade(2,9,1,aiStack_50);
    }
    *(int *)(_g_ComposerScene + 0x14) = *(int *)(_g_ComposerScene + 0x14) + -1;
  }
  return;
}

// 0x002f8540  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerScene_SetPage(undefined4 param_1)

{
  *(undefined4 *)(_g_ComposerScene + 0x10) = param_1;
  return;
}

// 0x002f8550  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ComposerScene_GetPage(void)

{
  return *(undefined4 *)(_g_ComposerScene + 0x10);
}

// 0x002f8560  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ComposerScene_GetPrevState(void)

{
  return *(undefined4 *)(_g_ComposerScene + 8);
}

// 0x002f8570  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ComposerScene_GetState(void)

{
  return *(undefined4 *)(_g_ComposerScene + 4);
}

// 0x002f8580  size 0x30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 7 callers */

void ComposerScene_RequestState(int param_1)

{
  if (*(int *)(_g_ComposerScene + 4) != param_1) {
    *(int *)(_g_ComposerScene + 0xc) = param_1;
    *(undefined4 *)(_g_ComposerScene + 0x10) = 2;
  }
  return;
}

// 0x002f85b0  size 0x60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ComposerScene_ApplyState(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *_g_ComposerScene;
  iVar1 = _g_ComposerScene[1];
  if (iVar1 == 3) {
    iVar2 = iVar2 + 0x5a8;
  }
  else if (iVar1 == 2) {
    iVar2 = iVar2 + 0x124;
  }
  else if (iVar1 == 1) {
    iVar2 = iVar2 + 0x30;
  }
  else if (iVar1 != 0) {
    iVar2 = 0;
  }
  return iVar2;
}

// 0x002f8620  size 0xc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerScene_Exit(void)

{
  int iVar1;
  
  iVar1 = *(int *)(_g_ComposerScene + 0xc);
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      RaceCtx_Set_4(2);
      Scene_RequestChange(3);
    }
    else if (iVar1 == -2) {
      RaceCtx_Set_4(1);
      Scene_RequestChange(3);
    }
    else if (iVar1 == -3) {
      RaceCtx_Set_4(0);
      Scene_RequestChange(3);
    }
  }
  else {
    *(undefined4 *)(_g_ComposerScene + 8) = *(undefined4 *)(_g_ComposerScene + 4);
    *(undefined4 *)(_g_ComposerScene + 4) = *(undefined4 *)(_g_ComposerScene + 0xc);
    *(undefined4 *)(_g_ComposerScene + 0x10) = 1;
  }
  return;
}

// 0x002f86e0  size 0x18
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 14 callers */

bool ComposerScene_IsChanging(void)

{
  return *(int *)(_g_ComposerScene + 4) != *(int *)(_g_ComposerScene + 0xc);
}

// 0x002f8700  size 0x54
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerScene_Free(void)

{
  if (*_g_ComposerScene != 0) {
    Mem_Free();
    *_g_ComposerScene = 0;
  }
  if (_g_ComposerScene != (int *)0x0) {
    Mem_Free();
    _g_ComposerScene = (int *)0x0;
  }
  UiMgr_Free();
  return;
}

// 0x002f8760  size 0x17c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerScene_Alloc(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  _g_ComposerScene = (undefined4 *)Mem_Alloc16(0x1c,param_1);
  uVar3 = Mem_Alloc16(0x17f0,param_1);
  iVar7 = 0;
  iVar5 = 0;
  piVar4 = &DAT_00343410;
  *_g_ComposerScene = uVar3;
  _g_ComposerScene[1] = param_2;
  _g_ComposerScene[2] = 0xffffffff;
  _g_ComposerScene[3] = _g_ComposerScene[1];
  _g_ComposerScene[4] = 1;
  _g_ComposerScene[5] = 0xffffffff;
  do {
    piVar1 = piVar4 + 2;
    uVar6 = g_ArcToc->entries[*piVar4].unpackedSize;
    if (uVar6 == 0) {
      uVar6 = g_ArcToc->entries[*piVar4].sectorCount;
    }
    else {
      uVar6 = uVar6 + 0x7ff >> 0xb;
    }
    piVar2 = piVar4 + 1;
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 3;
    iVar7 = iVar7 + ((*piVar1 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                    uVar6 * 0x800 + *piVar2 * 0x80;
  } while (iVar5 < 0x14);
  UiMgr_SetActive(_g_RaceIntroShared1,_g_RaceIntroShared1);
  UiMgr_Alloc(0x430750,0x14,iVar7,0,0,0x186f);
  iVar5 = 0;
  puVar8 = &DAT_00343410;
  do {
    UiMgr_LoadLayout(iVar5,puVar8,0);
    iVar5 = iVar5 + 1;
    puVar8 = puVar8 + 3;
  } while (iVar5 < 0x14);
  return;
}

// 0x002f88e0  size 0x1ac
undefined4 ComposerInput_SetupDevices(char *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = DAT_0036ef08;
  auStack_8[1] = DAT_0036ef0c;
  lVar2 = Wheel_GetDeviceName(auStack_8[*param_1]);
  if (lVar2 != 0) {
    iVar7 = (int)lVar2;
    lVar3 = (**(code **)(*(int *)(iVar7 + 4) + 8))(lVar2);
    if (lVar3 != 0) {
      lVar3 = Wheel_IsActive(lVar2);
      if (lVar3 != 0) {
        if (*(int *)(param_1 + 4) != 0) {
          param_1[8] = '\0';
          param_1[9] = '\0';
          param_1[10] = '\0';
          param_1[0xb] = '\0';
        }
        return 1;
      }
      if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) != 0)) {
        iVar1 = *(int *)(param_1 + 0x10);
      }
      else {
        param_1[8] = '\x01';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        iVar1 = Options_GetInstance();
        Controls_SetDefaults(iVar1 + (*param_1 * 0x1c + (int)*param_1) * 8 + 0x28,lVar2);
        iVar1 = *(int *)(param_1 + 0x10);
      }
      uVar5 = *(uint *)(iVar7 + 0xc);
      uVar4 = *(uint *)(iVar7 + 0x1c);
      uVar6 = *(uint *)(iVar7 + 0x14);
      if (iVar1 != 0) {
        uVar6 = uVar6 & 0xff3fffff;
        uVar5 = uVar5 & 0xff3fffff;
        uVar4 = uVar4 & 0xff3fffff;
      }
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | uVar6;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar5;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | uVar4;
      if ((((-0.2 <= *(float *)(iVar7 + 0x370)) && (*(float *)(iVar7 + 0x370) <= 0.2)) &&
          (-0.2 <= *(float *)(iVar7 + 0x380))) && (*(float *)(iVar7 + 0x380) <= 0.2)) {
        param_1[0x10] = '\x01';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
      }
      return 1;
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
  }
  return 0;
}

// 0x002f8a90  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ComposerInput_GetRepeat(void)

{
  return *(undefined4 *)(_s_ComposerInputVar1 + 0x20);
}

// 0x002f8aa0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ComposerInput_GetHeld(void)

{
  return *(undefined4 *)(_s_ComposerInputVar1 + 0x1c);
}

// 0x002f8ab0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 29 callers */

undefined4 ComposerInput_GetPressed(void)

{
  return *(undefined4 *)(_s_ComposerInputVar1 + 0x18);
}

// 0x002f8ac0  size 0x10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerInput_Lock(void)

{
  *(undefined4 *)(_s_ComposerInputVar1 + 0x14) = 1;
  return;
}

// 0x002f8ad0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerInput_SetMode(undefined4 param_1)

{
  *(undefined4 *)(_s_ComposerInputVar1 + 0xc) = param_1;
  return;
}

// 0x002f8ae0  size 0x2c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerInput_Free(void)

{
  if (_s_ComposerInputVar1 != 0) {
    Mem_Free();
    _s_ComposerInputVar1 = 0;
  }
  return;
}

// 0x002f8b10  size 0xa4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerInput_Alloc(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  if (_s_ComposerInputVar1 != (undefined1 *)0x0) {
    Mem_Free();
    _s_ComposerInputVar1 = (undefined1 *)0x0;
  }
  lVar1 = Mem_Alloc16(0x24,param_1);
  _s_ComposerInputVar1 = (undefined1 *)lVar1;
  if (lVar1 != 0) {
    *_s_ComposerInputVar1 = 0;
    _s_ComposerInputVar1[1] = 0;
    *(undefined4 *)(_s_ComposerInputVar1 + 4) = param_2;
    *(undefined4 *)(_s_ComposerInputVar1 + 8) = 0;
    *(undefined4 *)(_s_ComposerInputVar1 + 0xc) = 1;
    *(undefined4 *)(_s_ComposerInputVar1 + 0x10) = 1;
    *(undefined4 *)(_s_ComposerInputVar1 + 0x14) = 0;
    *(undefined4 *)(_s_ComposerInputVar1 + 0x18) = 0;
    *(undefined4 *)(_s_ComposerInputVar1 + 0x1c) = 0;
    *(undefined4 *)(_s_ComposerInputVar1 + 0x20) = 0;
  }
  return;
}

// 0x002f8bc0  size 0xf8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComposerInput_Task(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (_s_ComposerInputVar1 != (undefined1 *)0x0) {
    *(undefined4 *)(_s_ComposerInputVar1 + 0x18) = 0;
    *(undefined4 *)(_s_ComposerInputVar1 + 0x1c) = 0;
    *(undefined4 *)(_s_ComposerInputVar1 + 0x20) = 0;
    if (*(int *)(_s_ComposerInputVar1 + 0xc) != 0) {
      if (*(int *)(_s_ComposerInputVar1 + 0x14) != 0) {
        *(undefined4 *)(_s_ComposerInputVar1 + 0x14) = 0;
        ComposerInput_SetupDevices(_s_ComposerInputVar1);
      }
      puVar1 = _s_ComposerInputVar1;
      uVar3 = Pad_GetPort(*_s_ComposerInputVar1,_s_ComposerInputVar1[1]);
      iVar2 = (int)uVar3;
      lVar4 = (**(code **)(*(int *)(iVar2 + 4) + 8))(uVar3);
      if ((lVar4 != 0) &&
         (lVar4 = (**(code **)(*(int *)(iVar2 + 4) + 0xc))(uVar3,0xffffffffffffffff), lVar4 != 0)) {
        *(uint *)(puVar1 + 0x20) = *(uint *)(puVar1 + 0x20) | *(uint *)(iVar2 + 0x1c);
        *(uint *)(puVar1 + 0x1c) = *(uint *)(puVar1 + 0x1c) | *(uint *)(iVar2 + 0xc);
        *(uint *)(puVar1 + 0x18) = *(uint *)(puVar1 + 0x18) | *(uint *)(iVar2 + 0x14);
      }
    }
  }
  return;
}

// 0x002f8cc0  size 0x8
void Frontend_Nop(void)

{
  return;
}

// 0x002f8cd0  size 0x10
void ComposerInput_InstallTask(int param_1)

{
  *(code **)(param_1 + 0x1c) = ComposerInput_Task;
  return;
}

// 0x002f8ce0  size 0x240
undefined4 Composer_GetSlotLabel(int param_1,byte param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (param_2 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(param_2) {
    case 0:
      goto switchD_002f8d10_caseD_0;
    case 1:
      lVar4 = SeqGen_IsUserSong(*(undefined4 *)(param_1 + 0x60));
      if (lVar4 == 0) {
        return 5;
      }
      break;
    case 2:
      iVar1 = *(int *)(param_1 + 0x60);
      bVar2 = false;
      if ((-1 < iVar1) && (iVar1 < 0xc)) {
        bVar2 = true;
      }
      if (bVar2) {
        return 2;
      }
      if (*(int *)(iVar1 * 4 + param_1 + 0x7c) != 0) {
        return 1;
      }
      break;
    case 3:
      iVar1 = *(int *)(param_1 + 0x60);
      bVar2 = false;
      if ((-1 < iVar1) && (iVar1 < 0xc)) {
        bVar2 = true;
      }
      if (bVar2) {
        return 2;
      }
      if (iVar1 == *(int *)(param_1 + 0x54)) {
        return 3;
      }
      if (*(int *)(iVar1 * 4 + param_1 + 0x7c) != 0) {
        return 1;
      }
      break;
    case 4:
      bVar2 = false;
      if ((-1 < *(int *)(param_1 + 0x60)) && (*(int *)(param_1 + 0x60) < 0xc)) {
        bVar2 = true;
      }
      if (bVar2) {
        return 2;
      }
      lVar4 = SeqGen_IsUserSong();
      if (lVar4 == 0) {
        return 5;
      }
      if (*(int *)(*(int *)(param_1 + 0x60) * 4 + param_1 + 0x7c) != 0) {
        return 1;
      }
      break;
    case 5:
      lVar4 = SeqGen_IsUserSong(*(undefined4 *)(param_1 + 0x60));
      if (lVar4 == 0) {
        return 5;
      }
      break;
    case 6:
      iVar1 = *(int *)(param_1 + 0x60);
      bVar2 = false;
      if ((-1 < iVar1) && (iVar1 < 0xc)) {
        bVar2 = true;
      }
      if (bVar2) {
        return 2;
      }
      if (iVar1 == *(int *)(param_1 + 0x54)) {
        return 3;
      }
      lVar4 = SeqGen_IsUserSong();
      if (lVar4 != 0) {
        return 4;
      }
      break;
    case 7:
      bVar2 = false;
      if ((-1 < *(int *)(param_1 + 0x60)) && (*(int *)(param_1 + 0x60) < 0xc)) {
        bVar2 = true;
      }
      if (bVar2) {
        return 2;
      }
      lVar4 = SeqGen_IsUserSong();
      if (lVar4 == 0) {
        return 5;
      }
      if (*(int *)(*(int *)(param_1 + 0x60) * 4 + param_1 + 0x7c) != 0) {
        return 1;
      }
    }
    uVar3 = 0;
  }
  else {
switchD_002f8d10_caseD_0:
    uVar3 = 6;
  }
  return uVar3;
}

// 0x002f8f20  size 0x170
void Composer_StatePlay(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = Composer_ConsumeCancel();
  iVar4 = (int)param_1;
  if (lVar2 == 0) {
    cVar1 = *(char *)(iVar4 + 0x4c);
  }
  else {
    *(undefined4 *)(iVar4 + 0x74) = 0xfffffffe;
    *(undefined4 *)(iVar4 + 0x78) = 0xfffffffe;
    *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined1 *)(iVar4 + 0x4c) = 1;
    PreviewSnd_StopIfPlaying(iVar4 + 0x24);
    SeqGen_SelectSong(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x60));
    cVar1 = *(char *)(iVar4 + 0x4c);
  }
  if (cVar1 == '\x05') {
    lVar2 = PreviewSnd_Play(iVar4 + 0x24,0,0xffffffffffffffff,0xffffffffffffffff);
    if (lVar2 != 0) {
      *(undefined1 *)(iVar4 + 0x4c) = 6;
      uVar3 = Nameentry_Nop_2(param_1);
      Nameentry_SetField_8(param_1,uVar3);
    }
  }
  else if (cVar1 == '\x04') {
    lVar2 = SeqGen_IsReady(*(undefined4 *)(iVar4 + 0x20));
    if (lVar2 == 0) {
      *(undefined1 *)(iVar4 + 0x4c) = 0;
      uVar3 = Nameentry_Nop_2(param_1);
      Nameentry_SetField_8(param_1,uVar3);
    }
    else {
      lVar2 = Composer_PreviewLoop(iVar4 + 0x24);
      if (lVar2 != 0) {
        *(undefined1 *)(iVar4 + 0x4c) = 5;
      }
    }
  }
  else if (cVar1 == '\x02') {
    lVar2 = SeqGen_StopThread(*(undefined4 *)(iVar4 + 0x20));
    if (lVar2 != 0) {
      *(undefined1 *)(iVar4 + 0x4c) = 4;
    }
  }
  else if ((cVar1 == '\x01') &&
          (lVar2 = SeqGen_GetPosition(*(undefined4 *)(iVar4 + 0x20),0xffffffffffffffff), lVar2 == 0)
          ) {
    SeqGen_StartThread(*(undefined4 *)(iVar4 + 0x20));
    *(undefined1 *)(iVar4 + 0x4c) = 2;
  }
  return;
}

// 0x002f9090  size 0x4c
void Composer_StateIdle(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = Composer_ConsumeCancel();
  if (lVar1 != 0) {
    uVar2 = Nameentry_Nop_2(param_1);
    *(undefined4 *)((int)param_1 + 0x74) = uVar2;
    uVar2 = Nameentry_Nop_2(param_1);
    *(undefined4 *)((int)param_1 + 0x78) = uVar2;
  }
  return;
}

// 0x002f90e0  size 0x134
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Exitf90e0) */

void maybe_ComposerTask_State4_State8_NameentrySetField8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = Composer_ConsumeCancel();
  iVar4 = (int)param_1;
  if (lVar1 != 0) {
    *(undefined4 *)(iVar4 + 0x78) = 7;
    *(undefined4 *)(iVar4 + 0x6c) = 1;
  }
  Composer_MoveCursor(iVar4 + 0x6c,0,1,1,0);
  uVar2 = ComposerInput_GetPressed();
  if ((uVar2 & 0x800) != 0) {
    lVar1 = SeqGen_IsUserSong(*(undefined4 *)(iVar4 + 0x60));
    if (lVar1 == 0) {
      Se_PlayMenuVol(8,0x60);
    }
    else {
      if (*(int *)(iVar4 + 0x60) != *(int *)(iVar4 + 0x70)) {
        Nameentry_SetField_8(param_1,10);
        iVar3 = *(int *)(iVar4 + 0x6c);
        goto LAB_002f912c;
      }
      PreviewSnd_StopIfPlaying(iVar4 + 0x24);
      *(undefined4 *)(iVar4 + 0x70) = 0xffffffff;
      *(undefined1 *)(iVar4 + 0x4c) = 0;
    }
  }
  iVar3 = *(int *)(iVar4 + 0x6c);
LAB_002f912c:
  if (iVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x74) = 7;
    uVar2 = ComposerInput_GetPressed();
    if ((uVar2 & 0x180) != 0) {
      if (*(int *)(iVar4 + 0x60) == *(int *)(iVar4 + 0x70)) {
        PreviewSnd_StopIfPlaying(iVar4 + 0x24);
        *(undefined4 *)(iVar4 + 0x70) = 0xffffffff;
        *(undefined1 *)(iVar4 + 0x4c) = 0;
      }
      SeqGen_GetModeSongIndex(*(undefined4 *)(iVar4 + 0x60));
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x74) = 7;
  }
  return;
}

// 0x002f9220  size 0x18c
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Updatef9220) */

void maybe_ComposerTask_State4_State7_NameentrySetField8(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  lVar5 = Composer_ConsumeCancel();
  iVar7 = (int)param_1;
  if (lVar5 != 0) {
    *(undefined4 *)(iVar7 + 0x78) = 0;
    *(undefined1 *)(iVar7 + 100) = 7;
  }
  Composer_MoveCursor(iVar7 + 0x60,0,0x1d,1,0);
  iVar2 = *(int *)(iVar7 + 0x60);
  iVar3 = *(int *)(iVar7 + 0x58);
  if ((iVar2 + 1) % 0x1e == iVar3) {
    *(int *)(iVar7 + 0x58) = iVar2;
    *(undefined4 *)(iVar7 + 0x68) = 2;
  }
  else if ((iVar3 + 0xc) % 0x1e == iVar2) {
    *(int *)(iVar7 + 0x58) = (iVar3 + 1) % 0x1e;
    *(undefined4 *)(iVar7 + 0x68) = 1;
  }
  uVar6 = ComposerInput_GetPressed();
  if ((uVar6 & 0x800) != 0) {
    lVar5 = SeqGen_IsUserSong(*(undefined4 *)(iVar7 + 0x60));
    if (lVar5 == 0) {
      Se_PlayMenuVol(8,0x60);
      uVar1 = *(undefined1 *)(iVar7 + 100);
      goto LAB_002f92e4;
    }
    if (*(int *)(iVar7 + 0x60) == *(int *)(iVar7 + 0x70)) {
      PreviewSnd_StopIfPlaying(iVar7 + 0x24);
      *(undefined4 *)(iVar7 + 0x70) = 0xffffffff;
      *(undefined1 *)(iVar7 + 0x4c) = 0;
    }
    else {
      Nameentry_SetField_8(param_1,10);
    }
  }
  uVar1 = *(undefined1 *)(iVar7 + 100);
LAB_002f92e4:
  cVar4 = Composer_GetSlotLabel(param_1,uVar1);
  if (cVar4 == '\x05') {
    *(undefined4 *)(iVar7 + 0x74) = 0xfffffffe;
    uVar6 = ComposerInput_GetPressed();
    if ((uVar6 & 0x980) != 0) {
      Se_PlayMenuVol(8,0x60);
    }
  }
  else if (cVar4 == '\0') {
    *(undefined4 *)(iVar7 + 0x74) = 8;
  }
  else {
    *(undefined4 *)(iVar7 + 0x74) = 9;
  }
  return;
}

// 0x002f93b0  size 0x304
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Enterf93b0) */

void maybe_ComposerTask_State4_State6_NameentrySetField8(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  
  lVar4 = Composer_ConsumeCancel();
  iVar8 = (int)param_1;
  if (((lVar4 != 0) && (lVar4 = Nameentry_Nop_2(param_1), lVar4 != 9)) &&
     (lVar4 = Nameentry_Nop_2(param_1), lVar4 != 10)) {
    *(undefined4 *)(iVar8 + 0x54) = 0xffffffff;
  }
  Composer_MoveCursor(iVar8 + 0x60,0,0x1d,1,0);
  iVar6 = *(int *)(iVar8 + 0x60);
  iVar2 = *(int *)(iVar8 + 0x58);
  if ((iVar6 + 1) % 0x1e == iVar2) {
    *(int *)(iVar8 + 0x58) = iVar6;
    *(undefined4 *)(iVar8 + 0x68) = 2;
  }
  else if ((iVar2 + 0xc) % 0x1e == iVar6) {
    *(int *)(iVar8 + 0x58) = (iVar2 + 1) % 0x1e;
    *(undefined4 *)(iVar8 + 0x68) = 1;
  }
  uVar5 = ComposerInput_GetPressed();
  if ((uVar5 & 0x800) != 0) {
    lVar4 = SeqGen_IsUserSong(*(undefined4 *)(iVar8 + 0x60));
    if (lVar4 == 0) {
      Se_PlayMenuVol(8,0x60);
    }
    else {
      if (*(int *)(iVar8 + 0x60) != *(int *)(iVar8 + 0x70)) {
        Nameentry_SetField_8(param_1,10);
        iVar6 = *(int *)(iVar8 + 0x54);
        goto LAB_002f947c;
      }
      PreviewSnd_StopIfPlaying(iVar8 + 0x24);
      *(undefined4 *)(iVar8 + 0x70) = 0xffffffff;
      *(undefined1 *)(iVar8 + 0x4c) = 0;
    }
  }
  iVar6 = *(int *)(iVar8 + 0x54);
LAB_002f947c:
  if (iVar6 == -1) {
    *(undefined1 *)(iVar8 + 100) = 5;
    cVar1 = Composer_GetSlotLabel(param_1,*(undefined1 *)(iVar8 + 100));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar8 + 0x74) = 0xfffffffe;
      *(undefined4 *)(iVar8 + 0x78) = 0;
      uVar5 = ComposerInput_GetPressed();
      if ((uVar5 & 0x180) != 0) {
        *(undefined4 *)(iVar8 + 0x54) = *(undefined4 *)(iVar8 + 0x60);
        *(undefined4 *)(iVar8 + 0x5c) = 0xffffffff;
        Se_PlayMenuVol(5,0x60);
      }
    }
    else {
      *(undefined4 *)(iVar8 + 0x74) = 0xfffffffe;
      *(undefined4 *)(iVar8 + 0x78) = 0;
      uVar5 = ComposerInput_GetPressed();
      if ((uVar5 & 0x180) != 0) {
        Se_PlayMenuVol(8,0x60);
      }
    }
  }
  else {
    *(undefined1 *)(iVar8 + 100) = 6;
    cVar1 = Composer_GetSlotLabel(param_1,*(undefined1 *)(iVar8 + 100));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar8 + 0x74) = 6;
      *(undefined4 *)(iVar8 + 0x78) = 0xfffffffe;
      uVar5 = ComposerInput_GetPressed();
      if ((uVar5 & 0x180) != 0) {
        iVar2 = RaceSlotTbl_Get();
        iVar6 = *(int *)(iVar8 + 0x60);
        bVar7 = false;
        if ((-1 < *(int *)(iVar8 + 0x54)) && (*(int *)(iVar8 + 0x54) < 0xc)) {
          bVar7 = true;
        }
        if (bVar7) {
          iVar3 = Script_GetElem_3c_x18(*(undefined4 *)(iVar8 + 0x20));
        }
        else {
          iVar3 = RaceSlotTbl_Get();
          iVar3 = iVar3 + (*(int *)(iVar8 + 0x54) + -0xc) * 0x858 + 0x30;
        }
        maybe_Mem_CopyQwords(iVar2 + (iVar6 + -0xc) * 0x858 + 0x30,iVar3,0x858);
        *(undefined4 *)(iVar8 + 0x54) = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)(iVar8 + 0x74) = 9;
      *(undefined4 *)(iVar8 + 0x78) = 0xfffffffe;
    }
    uVar5 = ComposerInput_GetPressed();
    if ((uVar5 & 0x240) != 0) {
      *(undefined4 *)(iVar8 + 0x54) = 0xffffffff;
      Se_PlayMenuVol(6,0x60);
    }
  }
  return;
}

// 0x002f96c0  size 0xc0
/* state of maybe_ComposerTask; on-screen text/callee hint "strcmp" (was Scrstrcmp_Exit) */

void maybe_ComposerTask_State4_State5_strcmp(int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = Composer_ConsumeCancel();
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x78) = 4;
    *(undefined4 *)(param_1 + 0x6c) = 1;
  }
  Composer_MoveCursor(param_1 + 0x6c,0,1,1,0);
  if (*(int *)(param_1 + 0x6c) == 0) {
    *(undefined4 *)(param_1 + 0x74) = 3;
    uVar3 = ComposerInput_GetPressed();
    if ((uVar3 & 0x180) != 0) {
      iVar1 = RaceSlotTbl_Get();
      maybe_strncpy(iVar1 + (*(int *)(param_1 + 0x60) + -0xc) * 0x858 + 0x876,param_1 + 0x3c,0x10);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = 4;
  }
  return;
}

// 0x002f9780  size 0x194
/* state of maybe_ComposerTask; on-screen text/callee hint "strcmp" (was Scrstrcmp_Update) */

void maybe_ComposerTask_State4_State4_strcmp(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = Composer_ConsumeCancel();
  iVar4 = (int)param_1;
  if (lVar1 != 0) {
    *(undefined4 *)(iVar4 + 0x74) = 0xfffffffe;
    *(undefined4 *)(iVar4 + 0x78) = 0xfffffffe;
    lVar1 = Nameentry_Nop_2(param_1);
    if (lVar1 != 5) {
      uVar3 = SeqGen_GetPartTextId(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x60));
      Keyboard_Init(iVar4 + 0x30,uVar3);
    }
  }
  lVar1 = Keyboard_Update(iVar4 + 0x30);
  if (lVar1 == 2) {
    *(undefined4 *)(iVar4 + 0x74) = 3;
    *(undefined4 *)(iVar4 + 0x78) = 3;
  }
  else if (lVar1 == 1) {
    iVar5 = 0;
    do {
      if ((iVar5 != *(int *)(iVar4 + 0x60)) && (lVar1 = SeqGen_IsUserSong(iVar5), lVar1 != 0)) {
        uVar3 = SeqGen_GetPartTextId(*(undefined4 *)(iVar4 + 0x20),iVar5);
        lVar1 = strcmp(iVar4 + 0x3c,uVar3);
        if (lVar1 == 0) {
          *(undefined4 *)(iVar4 + 0x74) = 5;
          return;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1e);
    iVar5 = RaceSlotTbl_Get();
    maybe_strncpy(iVar5 + (*(int *)(iVar4 + 0x60) + -0xc) * 0x858 + 0x876,iVar4 + 0x3c,0x10);
    *(undefined4 *)(iVar4 + 0x74) = 3;
  }
  else {
    uVar2 = ComposerInput_GetPressed();
    if ((uVar2 & 0x180) == 0) {
      uVar2 = ComposerInput_GetPressed();
      if ((uVar2 & 0x240) != 0) {
        Se_PlayMenuVol(6,0x60);
      }
    }
    else {
      Se_PlayMenuVol(5,0x60);
    }
  }
  return;
}

// 0x002f9920  size 0x190
/* state of maybe_ComposerTask; on-screen text/callee hint "strcmp" (was Scrstrcmp_Enter) */

void maybe_ComposerTask_State4_State3_strcmp(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  lVar5 = Composer_ConsumeCancel();
  iVar7 = (int)param_1;
  if (lVar5 != 0) {
    *(undefined4 *)(iVar7 + 0x74) = 4;
    *(undefined4 *)(iVar7 + 0x78) = 0;
    *(undefined1 *)(iVar7 + 100) = 4;
  }
  Composer_MoveCursor(iVar7 + 0x60,0,0x1d,1,0);
  iVar2 = *(int *)(iVar7 + 0x60);
  iVar3 = *(int *)(iVar7 + 0x58);
  if ((iVar2 + 1) % 0x1e == iVar3) {
    *(int *)(iVar7 + 0x58) = iVar2;
    *(undefined4 *)(iVar7 + 0x68) = 2;
  }
  else if ((iVar3 + 0xc) % 0x1e == iVar2) {
    *(int *)(iVar7 + 0x58) = (iVar3 + 1) % 0x1e;
    *(undefined4 *)(iVar7 + 0x68) = 1;
  }
  uVar6 = ComposerInput_GetPressed();
  if ((uVar6 & 0x800) != 0) {
    lVar5 = SeqGen_IsUserSong(*(undefined4 *)(iVar7 + 0x60));
    if (lVar5 == 0) {
      Se_PlayMenuVol(8,0x60);
      uVar1 = *(undefined1 *)(iVar7 + 100);
      goto LAB_002f99e4;
    }
    if (*(int *)(iVar7 + 0x60) == *(int *)(iVar7 + 0x70)) {
      PreviewSnd_StopIfPlaying(iVar7 + 0x24);
      *(undefined4 *)(iVar7 + 0x70) = 0xffffffff;
      *(undefined1 *)(iVar7 + 0x4c) = 0;
    }
    else {
      Nameentry_SetField_8(param_1,10);
    }
  }
  uVar1 = *(undefined1 *)(iVar7 + 100);
LAB_002f99e4:
  cVar4 = Composer_GetSlotLabel(param_1,uVar1);
  if (cVar4 == '\x05') {
    *(undefined4 *)(iVar7 + 0x74) = 0xfffffffe;
    uVar6 = ComposerInput_GetPressed();
    if ((uVar6 & 0x980) != 0) {
      Se_PlayMenuVol(8,0x60);
    }
  }
  else if (cVar4 == '\0') {
    *(undefined4 *)(iVar7 + 0x74) = 4;
  }
  else {
    *(undefined4 *)(iVar7 + 0x74) = 9;
  }
  return;
}

// 0x002f9ac0  size 0x2f4
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Exitf9ac0) */

void maybe_ComposerTask_State4_State2_NameentrySetField8(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_860 [2144];
  
  lVar3 = Composer_ConsumeCancel();
  iVar6 = (int)param_1;
  if (((lVar3 != 0) && (lVar3 = Nameentry_Nop_2(param_1), lVar3 != 9)) &&
     (lVar3 = Nameentry_Nop_2(param_1), lVar3 != 10)) {
    *(undefined4 *)(iVar6 + 0x54) = 0xffffffff;
  }
  Composer_MoveCursor(iVar6 + 0x60,0,0x1d,1,0);
  iVar2 = *(int *)(iVar6 + 0x60);
  iVar5 = *(int *)(iVar6 + 0x58);
  if ((iVar2 + 1) % 0x1e == iVar5) {
    *(int *)(iVar6 + 0x58) = iVar2;
    *(undefined4 *)(iVar6 + 0x68) = 2;
  }
  else if ((iVar5 + 0xc) % 0x1e == iVar2) {
    *(int *)(iVar6 + 0x58) = (iVar5 + 1) % 0x1e;
    *(undefined4 *)(iVar6 + 0x68) = 1;
  }
  uVar4 = ComposerInput_GetPressed();
  if ((uVar4 & 0x800) != 0) {
    lVar3 = SeqGen_IsUserSong(*(undefined4 *)(iVar6 + 0x60));
    if (lVar3 == 0) {
      Se_PlayMenuVol(8,0x60);
    }
    else {
      if (*(int *)(iVar6 + 0x60) != *(int *)(iVar6 + 0x70)) {
        Nameentry_SetField_8(param_1,10);
        iVar2 = *(int *)(iVar6 + 0x54);
        goto LAB_002f9b90;
      }
      PreviewSnd_StopIfPlaying(iVar6 + 0x24);
      *(undefined4 *)(iVar6 + 0x70) = 0xffffffff;
      *(undefined1 *)(iVar6 + 0x4c) = 0;
    }
  }
  iVar2 = *(int *)(iVar6 + 0x54);
LAB_002f9b90:
  if (iVar2 == -1) {
    *(undefined1 *)(iVar6 + 100) = 2;
    cVar1 = Composer_GetSlotLabel(param_1,*(undefined1 *)(iVar6 + 100));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar6 + 0x74) = 0xfffffffe;
      *(undefined4 *)(iVar6 + 0x78) = 0;
      uVar4 = ComposerInput_GetPressed();
      if ((uVar4 & 0x180) != 0) {
        *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(iVar6 + 0x60);
        *(undefined4 *)(iVar6 + 0x5c) = 0xffffffff;
        Se_PlayMenuVol(5,0x60);
      }
    }
    else {
      *(undefined4 *)(iVar6 + 0x74) = 9;
      *(undefined4 *)(iVar6 + 0x78) = 0;
    }
  }
  else {
    *(undefined1 *)(iVar6 + 100) = 3;
    cVar1 = Composer_GetSlotLabel(param_1,*(undefined1 *)(iVar6 + 100));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar6 + 0x74) = 2;
      *(undefined4 *)(iVar6 + 0x78) = 0xfffffffe;
      uVar4 = ComposerInput_GetPressed();
      if ((uVar4 & 0x180) != 0) {
        iVar2 = RaceSlotTbl_Get();
        iVar5 = iVar2 + (*(int *)(iVar6 + 0x54) + -0xc) * 0x858 + 0x30;
        iVar2 = RaceSlotTbl_Get();
        iVar2 = iVar2 + (*(int *)(iVar6 + 0x60) + -0xc) * 0x858 + 0x30;
        maybe_Mem_CopyQwords(auStack_860,iVar2);
        maybe_Mem_CopyQwords(iVar2,iVar5,0x858);
        maybe_Mem_CopyQwords(iVar5,auStack_860,0x858);
        if (*(int *)(iVar6 + 0x54) == *(int *)(iVar6 + 0x70)) {
          *(undefined4 *)(iVar6 + 0x70) = *(undefined4 *)(iVar6 + 0x60);
        }
        else if (*(int *)(iVar6 + 0x60) == *(int *)(iVar6 + 0x70)) {
          *(int *)(iVar6 + 0x70) = *(int *)(iVar6 + 0x54);
        }
        *(undefined4 *)(iVar6 + 0x54) = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)(iVar6 + 0x74) = 9;
      *(undefined4 *)(iVar6 + 0x78) = 0xfffffffe;
    }
    uVar4 = ComposerInput_GetPressed();
    if ((uVar4 & 0x240) != 0) {
      *(undefined4 *)(iVar6 + 0x54) = 0xffffffff;
      Se_PlayMenuVol(6,0x60);
    }
  }
  return;
}

// 0x002f9dc0  size 0x134
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Updatef9dc0) */

void maybe_ComposerTask_State4_State1_NameentrySetField8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  lVar4 = Composer_ConsumeCancel();
  iVar6 = (int)param_1;
  if (lVar4 != 0) {
    *(undefined4 *)(iVar6 + 0x74) = 0xfffffffe;
    *(undefined4 *)(iVar6 + 0x78) = 0;
    *(undefined1 *)(iVar6 + 100) = 1;
  }
  Composer_MoveCursor(iVar6 + 0x60,0,0x1d,1,0);
  iVar1 = *(int *)(iVar6 + 0x60);
  iVar2 = *(int *)(iVar6 + 0x58);
  if ((iVar1 + 1) % 0x1e == iVar2) {
    *(int *)(iVar6 + 0x58) = iVar1;
    *(undefined4 *)(iVar6 + 0x68) = 2;
  }
  else if ((iVar2 + 0xc) % 0x1e == iVar1) {
    *(int *)(iVar6 + 0x58) = (iVar2 + 1) % 0x1e;
    *(undefined4 *)(iVar6 + 0x68) = 1;
  }
  uVar5 = ComposerInput_GetPressed();
  if ((uVar5 & 0x980) != 0) {
    cVar3 = Composer_GetSlotLabel(param_1,*(undefined1 *)(iVar6 + 100));
    if (cVar3 == '\0') {
      if (*(int *)(iVar6 + 0x60) == *(int *)(iVar6 + 0x70)) {
        PreviewSnd_StopIfPlaying(iVar6 + 0x24);
        *(undefined4 *)(iVar6 + 0x70) = 0xffffffff;
        *(undefined1 *)(iVar6 + 0x4c) = 0;
      }
      else {
        Nameentry_SetField_8(param_1,10);
      }
      Se_PlayMenuVol(5,0x60);
    }
    else {
      Se_PlayMenuVol(8,0x60);
    }
  }
  return;
}

// 0x002f9f00  size 0x174
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Enterf9f00) */

void maybe_ComposerTask_State4_State0_NameentrySetField8(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = Composer_ConsumeCancel();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0xfffffffe;
    *(undefined1 *)(param_1 + 100) = 0;
  }
  Composer_MoveCursor(param_1 + 0x50,0,5,1,0);
  if (*(uint *)(param_1 + 0x50) < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(param_1 + 0x50)) {
    case 0:
      uVar2 = Nameentry_GetField_4(param_1 + 0x24);
      if ((uVar2 & 0x80) == 0) {
        *(undefined4 *)(param_1 + 0x74) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x74) = 0;
        uVar2 = ComposerInput_GetPressed();
        if ((uVar2 & 0x180) != 0) {
          PreviewSnd_StopIfPlaying(param_1 + 0x24);
          *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x4c) = 0;
        }
      }
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x74) = 2;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x74) = 3;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x74) = 6;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x74) = 7;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
    }
  }
  uVar2 = ComposerInput_GetPressed();
  if ((uVar2 & 0x800) != 0) {
    PreviewSnd_StopIfPlaying(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  uVar2 = ComposerInput_GetPressed();
  if ((uVar2 & 0x240) != 0) {
    if (*(int *)(param_1 + 0x50) == 5) {
      Se_PlayMenuVol(8,0x60);
    }
    else {
      Se_PlayMenuVol(6,0x60);
      *(undefined4 *)(param_1 + 0x50) = 5;
    }
  }
  return;
}

// 0x002fa080  size 0x188
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Updatefa080) */

void maybe_ComposerTask_State4_NameentryGetField(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = Composer_UpdateInput();
  if (lVar3 != 0) {
    iVar2 = Nameentry_GetField_4_8200(param_1);
    (*(code *)(&PTR_maybe_ComposerTask_State4_State0_NameentrySetField8_00343580)[iVar2])(param_1);
    uVar4 = ComposerInput_GetPressed();
    iVar2 = (int)param_1;
    if ((uVar4 & 0x240) == 0) {
      uVar4 = ComposerInput_GetPressed();
      if ((uVar4 & 0x180) != 0) {
        if (*(int *)(iVar2 + 0x74) == -2) {
          iVar1 = *(int *)(iVar2 + 0x74);
        }
        else {
          Se_PlayMenuVol(5,0x60);
          iVar1 = *(int *)(iVar2 + 0x74);
        }
        if (iVar1 < 0) {
          if (iVar1 == -1) {
            PreviewSnd_StopIfPlaying(iVar2 + 0x24);
            *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
            *(undefined1 *)(iVar2 + 0x4c) = 0;
            ComposerScene_RequestState(0);
          }
        }
        else {
          Nameentry_SetField_8(param_1);
        }
      }
    }
    else {
      if (*(int *)(iVar2 + 0x78) == -2) {
        iVar1 = *(int *)(iVar2 + 0x78);
      }
      else {
        Se_PlayMenuVol(6,0x60);
        iVar1 = *(int *)(iVar2 + 0x78);
      }
      if (iVar1 < 0) {
        if (iVar1 == -1) {
          PreviewSnd_StopIfPlaying(iVar2 + 0x24);
          *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
          *(undefined1 *)(iVar2 + 0x4c) = 0;
          ComposerScene_RequestState(0);
        }
      }
      else {
        Nameentry_SetField_8(param_1);
      }
    }
  }
  return;
}

// 0x002fa210  size 0x8
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Exitfa210) */

void maybe_ComposerTask_State5_NameentryGetField(int param_1)

{
  PreviewSnd_StopAndClear(param_1 + 0x24);
  return;
}

// 0x002fa220  size 0x9c
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Enterfa220) */

void maybe_ComposerTask_State3_NameentryGetField(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  Composer_InitPanel(param_1,0);
  PreviewSnd_Init(param_1 + 0x24,8);
  uVar1 = Script_Nop();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  iVar2 = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  do {
    uVar1 = Composer_GetModeSongs(iVar2);
    iVar2 = iVar2 + 1;
    *(undefined4 *)(param_1 + 0x7c) = uVar1;
    param_1 = param_1 + 4;
  } while (iVar2 < 0x1e);
  return;
}

// 0x002fa2c0  size 0xd8
void maybe_Composer_OnMenuResult(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    uVar1 = (int)param_2 + 8;
    if (7 < uVar1) {
      return;
    }
                    /* WARNING: Switch is manually overridden */
    switch(uVar1) {
    case 1:
      ComposerScene_RequestState(0xfffffffffffffffd);
      break;
    case 2:
      ComposerScene_RequestState(0xfffffffffffffffe);
      break;
    case 3:
      ComposerScene_RequestState(0xffffffffffffffff);
      break;
    case 4:
      ComposerScene_RequestState(1);
      break;
    case 5:
      ComposerScene_RequestState(2);
      break;
    case 6:
      ComposerScene_SetMode(0);
      ComposerScene_RequestState(3);
      break;
    case 7:
      ComposerScene_SetMode(1);
      ComposerScene_RequestState(3);
    }
  }
  else {
    Nameentry_SetField_8();
  }
  return;
}

// 0x002fa3a0  size 0x70
/* entry 3 of state table 0x3435b0 used by ScrNameentryGetField48200_Update */

void maybe_ComposerTask_State1_Sub3(int param_1)

{
  long lVar1;
  
  lVar1 = Composer_ConsumeCancel();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  Composer_MoveCursor(param_1 + 0x24,0,1,1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffffa;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffff9;
  }
  return;
}

// 0x002fa410  size 0x68
/* entry 2 of state table 0x3435b0 used by ScrNameentryGetField48200_Update */

void maybe_ComposerTask_State1_Sub2(int param_1)

{
  long lVar1;
  
  lVar1 = Composer_ConsumeCancel();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  Composer_MoveCursor(param_1 + 0x24,0,1,1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

// 0x002fa480  size 0x6c
/* entry 1 of state table 0x3435b0 used by ScrNameentryGetField48200_Update */

void maybe_ComposerTask_State1_Sub1(int param_1)

{
  long lVar1;
  
  lVar1 = Composer_ConsumeCancel();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  Composer_MoveCursor(param_1 + 0x24,0,1,1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  return;
}

// 0x002fa4f0  size 0xfc
/* entry 0 of state table 0x3435b0 used by ScrNameentryGetField48200_Update */

void maybe_ComposerTask_State1_Sub0(int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = Composer_ConsumeCancel();
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0xfffffff8;
  }
  Composer_MoveCursor(param_1 + 0x20,0,4,1,0);
  uVar3 = ComposerInput_GetPressed();
  if ((uVar3 & 0x240) != 0) {
    if (*(int *)(param_1 + 0x20) == 4) {
      Se_PlayMenuVol(8,0x60);
    }
    else {
      Se_PlayMenuVol(6,0x60);
      *(undefined4 *)(param_1 + 0x20) = 4;
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffffd;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffffc;
  }
  else if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffffb;
  }
  return;
}

// 0x002fa5f0  size 0xe0
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Update) */

void maybe_ComposerTask_State1_NameentryGetField(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = Composer_UpdateInput();
  if (lVar2 != 0) {
    ComposerInput_Lock();
    iVar1 = Nameentry_GetField_4_8200(param_1);
    (*(code *)(&PTR_maybe_ComposerTask_State1_Sub0_003435b0)[iVar1])(param_1);
    uVar3 = ComposerInput_GetPressed();
    iVar1 = (int)param_1;
    if ((uVar3 & 0x180) == 0) {
      uVar3 = ComposerInput_GetPressed();
      if ((uVar3 & 0x240) != 0) {
        if (*(int *)(iVar1 + 0x2c) != -8) {
          Se_PlayMenuVol(6,0x60);
        }
        maybe_Composer_OnMenuResult(param_1,*(undefined4 *)(iVar1 + 0x2c));
      }
    }
    else {
      if (*(int *)(iVar1 + 0x28) != -8) {
        Se_PlayMenuVol(5,0x60);
      }
      maybe_Composer_OnMenuResult(param_1,*(undefined4 *)(iVar1 + 0x28));
    }
  }
  return;
}

// 0x002fa6d0  size 0x8
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Exit) */

void maybe_ComposerTask_State2_NameentryGetField(void)

{
  return;
}

// 0x002fa6e0  size 0x44
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Enter) */

void maybe_ComposerTask_State0_NameentryGetField(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  Composer_InitPanel(param_1,0);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  lVar1 = ComposerScene_GetPrevState();
  if (lVar1 < 0) {
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  return;
}

// 0x002fa730  size 0x1e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Attract_DrawLogo(int param_1)

{
  float fVar1;
  uint auStack_660 [172];
  undefined8 uStack_3b0;
  undefined4 uStack_394;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  uint auStack_350 [172];
  undefined8 uStack_a0;
  uint uStack_84;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_40 [64];
  
  TexSlot_Set(5,2,param_1 + 0x10);
  Obj_Reset(auStack_660,4,0xffffffffffffffff);
  uStack_3b0 = 0x44;
  uStack_394 = 0xb2;
  auStack_660[0] = auStack_660[0] | 2;
  Obj_SetVisible(auStack_660,1,5,0);
  uStack_370 = 0x41800000;
  uStack_36c = 0x43a80000;
  uStack_380 = 0x3f800000;
  uStack_37c = 0x3f800000;
  auStack_660[0] = auStack_660[0] | 4;
  Obj_Reset(auStack_350,4,0xffffffffffffffff);
  uStack_a0 = 0x44;
  auStack_350[0] = auStack_350[0] | 2;
  fVar1 = cosf((float)(uint)((_g_ProfileShared1 << 1) % 0xb4) * 0.017453292);
  fVar1 = fVar1 * 255.0;
  if (2.1474836e+09 <= fVar1) {
    fVar1 = fVar1 - 2.1474836e+09;
  }
  uStack_84 = (int)fVar1 & 0xff;
  Obj_SetVisible(auStack_350,1,5,1);
  uStack_70 = 0x3f800000;
  uStack_6c = 0x3f800000;
  uStack_60 = 0x43500000;
  uStack_5c = 0x43500000;
  auStack_350[0] = auStack_350[0] | 4;
  Pkt_Init(auStack_40,2,2,0);
  Pkt_SubmitToChain(auStack_40,0);
  Pkt_End(auStack_40);
  Pkt_AddPrimitives(auStack_40,auStack_660,2);
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x002fa920  size 0x18c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Attract_SetupDemoRace(void)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_d0 [208];
  
  cVar2 = *(char *)(_s_Attract_SetupDemoRace_1 + 0x36ef10);
  if ((cVar2 == '\a') || (cVar2 == '\x04')) {
    uVar3 = *(undefined1 *)((int)_g_PktShared2 % 7 + 0x36ef18);
  }
  else {
    uVar3 = *(undefined1 *)((int)_g_PktShared2 % 7 + 0x36ef20);
  }
  _s_Attract_SetupDemoRace_1 = _s_Attract_SetupDemoRace_1 + 1 & 7;
  iVar6 = 0;
  uVar4 = _g_PktShared2 / 7;
  uVar7 = _g_PktShared2;
  if (-1 < DAT_00318080) {
    psVar5 = &DAT_00318080;
    do {
      psVar5 = psVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (-1 < *psVar5);
  }
  do {
    iVar1 = (int)uVar7 % iVar6;
    uVar7 = uVar7 + 0x19;
  } while ((long)_s_Attract_SetupDemoRace_2 == (long)(&DAT_00318080)[iVar1]);
  _s_Attract_SetupDemoRace_2 = (int)(&DAT_00318080)[iVar1];
  CarRec_ResetColors(auStack_d0);
  iVar6 = CarDb_GetModelEntry(_s_Attract_SetupDemoRace_2);
  CarRec_Build(auStack_d0,_s_Attract_SetupDemoRace_2,(short)((int)uVar7 % iVar6),1,0);
  RaceCtx_SetMode(6);
  RaceSetup_FromQuickRace(0xf,1,cVar2,uVar3,uVar4 & 1,1,auStack_d0,0);
  return;
}

// 0x002faab0  size 0x4e4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_AttractTask_Load(int param_1)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  
  bVar5 = false;
  bVar1 = false;
  bVar4 = false;
  piVar2 = *(int **)(param_1 + 0x14);
  uVar11 = g_MenuInput[2];
  bVar3 = false;
  if ((g_MenuInput[4] & uVar11) == 0) {
    uVar11 = 0;
  }
  else if (uVar11 == 0x80000) {
    uVar11 = 0;
  }
  else if (*g_MenuInput != 1) {
    uVar11 = 0;
  }
  iVar8 = *piVar2;
  if (iVar8 == 4) {
    bVar3 = false;
    iVar8 = 0;
    do {
      cVar7 = Snd_IsBusy(iVar8);
      if (cVar7 != '\0') {
        bVar3 = true;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 10);
    iVar8 = 0;
    do {
      cVar7 = Snd_StreamGetState(iVar8);
      if (cVar7 != '\0') {
        bVar3 = true;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    Sema_Wait(0x36efc0);
    iVar8 = _g_FileShared2;
    Sema_Signal(0x36efc0,0);
    if (iVar8 != 0) {
      bVar3 = true;
    }
    if (bVar3) {
      bVar3 = true;
    }
    else if (piVar2[1] < 0xb4) {
      bVar3 = true;
      piVar2[1] = piVar2[1] + 1;
    }
    else {
      Gfx_SetDisplayParam(0,0,0,0,0);
      bVar3 = true;
      bVar5 = true;
    }
  }
  else if (iVar8 == 3) {
    iVar8 = piVar2[1];
    if ((0x3b < iVar8) && ((uVar11 & 0x50) != 0)) {
      if (iVar8 < 0xdd4) {
        iVar8 = 0xdd4;
      }
      piVar2[1] = iVar8;
    }
    iVar8 = piVar2[1];
    if (iVar8 < 0xe10) {
      if (iVar8 < 0x3c) {
        uVar11 = (iVar8 * 0xff) / 0x3c;
        if (0xfe < uVar11) {
          uVar11 = 0xff;
        }
        Gfx_SetDisplayParam(1,uVar11,0,0,0);
        iVar8 = piVar2[1];
      }
      else {
        if (iVar8 < 0xdd5) {
          Gfx_SetDisplayParam(0,0,0,0,0);
        }
        else {
          uVar11 = ((0xe10 - iVar8) * 0xff) / 0x3c;
          if (0xfe < uVar11) {
            uVar11 = 0xff;
          }
          Gfx_SetDisplayParam(1,uVar11,0,0,0);
        }
        iVar8 = piVar2[1];
      }
      bVar4 = true;
      piVar2[1] = iVar8 + 1;
    }
    else {
      piVar2[1] = 0;
      *piVar2 = 4;
      CarSnd_UpdateAll();
      SndMgr_PauseGlobal();
      RaceProg_Set_8(7);
    }
  }
  else if (iVar8 == 2) {
    if ((piVar2[1] == 0) || (lVar10 = RaceScene_IsRunning(), lVar10 == 0)) {
      bVar1 = piVar2[1] != 0;
      iVar8 = piVar2[1] + 1;
      if (0xe10 < iVar8) {
        iVar8 = 0xe10;
      }
      piVar2[1] = iVar8;
    }
    else {
      piVar2[1] = 0;
      *piVar2 = 3;
    }
  }
  else if (iVar8 == 1) {
    lVar10 = CarDb_IsLoading();
    if (lVar10 != 0) {
      maybe_Attract_SetupDemoRace();
      uVar6 = _g_CourseShared9;
      Tex_Relocate(piVar2[3]);
      TexSlot_Bind(piVar2 + 4,piVar2[3],0,uVar6,uVar6,0x11110,0,0);
      CarDb_Free();
      *piVar2 = 2;
    }
    piVar2[1] = 0;
    bVar3 = true;
  }
  else if (iVar8 == 0) {
    uVar9 = Arc_GetFileSize(5,5);
    iVar8 = Mem_AllocAligned(uVar9,0x40,0x430750);
    piVar2[3] = iVar8;
    iVar8 = Arc_LoadFileEx(5,piVar2[3],0,0,0,0);
    piVar2[2] = iVar8;
    CarDb_Alloc(0x430750);
    CarDb_Load();
    UiMgr_UpdateAll();
    bVar3 = true;
    *piVar2 = 1;
  }
  if (bVar1) {
    UiMgr_DrawAll(1);
  }
  if (bVar4) {
    maybe_Attract_DrawLogo(piVar2);
  }
  if (bVar3) {
    Scene_RequestExit();
  }
  if (bVar5) {
    _g_CareerShared1 = 0xd;
    Scene_SetParam(0);
  }
  return;
}

// 0x002fafa0  size 0x40
void AttractTask_Exit(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar1 + 0xc) != 0) {
    Mem_Free();
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  MenuWnd_Free();
  return;
}

// 0x002fafe0  size 0x54
void AttractTask_Init(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  MenuWnd_Alloc(0x430750,1);
  *puVar1 = 0;
  puVar1[3] = 0;
  Scene_RequestExit();
  *(code **)(param_1 + 0x1c) = maybe_AttractTask_Load;
  return;
}

// 0x002fb040  size 0x338
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_AttractTask_Update(int *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)g_Loading->workBufs[0];
  if (_g_DemoShared1 == 0) {
    Scene_SetParam(0);
    _g_RaceSndShared1 = 0;
    RaceScene_SetFlags(0x80000);
    RaceScene_SetFlags(2);
    RaceScene_ClearFlag1();
    return;
  }
  fVar5 = 0.0;
  if (piVar1[4] == 0) {
    lVar2 = RaceScene_IsRunning();
    if (lVar2 == 0) {
      Gfx_SetDisplayParam(1,0xff,0,0,0);
      iVar3 = *param_1;
      goto LAB_002fb138;
    }
    Gfx_SetDisplayParam(1,0,0,0,0);
  }
  else {
    if (*(int *)(*piVar1 + 0x10) == 0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = (float)Demo_InterpolateKeys((float)piVar1[4] / (float)*(int *)(*piVar1 + 0x1c));
    }
    uVar4 = g_MenuInput[2];
    if ((g_MenuInput[4] & uVar4) == 0) {
      uVar4 = 0x100000;
    }
    else if (uVar4 == 0x80000) {
      uVar4 = 0x80000;
    }
    else if (*g_MenuInput != 1) {
      uVar4 = 0x100000;
    }
    if ((uVar4 == 0x40) && (*param_1 == 0)) {
      *param_1 = 1;
      param_1[1] = 0x3c;
    }
  }
  iVar3 = *param_1;
LAB_002fb138:
  if (iVar3 != 0) {
    iVar3 = param_1[1];
    param_1[1] = iVar3 + -1;
    fVar5 = (fVar5 * 255.0 * (float)(iVar3 + -1)) / 60.0;
    if (fVar5 < 2.1474836e+09) {
      uVar4 = (uint)fVar5;
    }
    else {
      uVar4 = (int)(fVar5 - 2.1474836e+09) | 0x80000000;
    }
    Gfx_SetDisplayParam(1,uVar4,0,0,0);
    if (param_1[1] == 0) {
      piVar1[4] = *(int *)(*piVar1 + 0x1c) + -1;
    }
  }
  if (0x2fb < piVar1[4]) {
    maybe_Attract_StepLayout(&uStack_20);
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    uStack_8 = uStack_18;
    lVar2 = maybe_RaceResult_GetCategory();
    if (lVar2 == 4) {
      maybe_Attract_DrawLayout(uStack_c,piVar1[4],0x1920,0x1921);
    }
    else {
      lVar2 = maybe_RaceResult_GetCategory();
      if (lVar2 == 5) {
        maybe_Attract_DrawLayout(uStack_10,piVar1[4],0x1922,0x1923);
        maybe_Attract_DrawLayout(uStack_c,piVar1[4],0x191e,0x191f);
        maybe_Attract_DrawLayout(uStack_8,piVar1[4],0x1924,0x1925);
      }
      else {
        maybe_Attract_DrawLayout(uStack_10,piVar1[4],0x1922,0x1923);
        maybe_Attract_DrawLayout(uStack_c,piVar1[4],0x191e,0x191f);
      }
    }
  }
  return;
}

// 0x002fb380  size 0x8
/* follows AttractTask_Update; no call, branch, pointer or constant reference (exception landing pad
   or dead code) */

void AttractTask_Update_Orphan1(int param_1)

{
  maybe_AttractTask_Update(*(undefined4 *)(param_1 + 0x14));
  return;
}

// 0x002fb390  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* N153 confirmed: clears g_AttractShared1 */

void Attract_ClearActive(void)

{
  _g_AttractShared1 = 0;
  return;
}

// 0x002fb3a0  size 0x6c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_AttractTask_Start(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  _g_AttractShared1 = 1;
  _g_CourseShared118 = 0;
  _g_RaceSndShared1 = maybe_RaceResult_GetCategory();
  _g_DemoShared1 = 1;
  RaceScene_SetFlags(0x100);
  *(code **)(param_1 + 0x1c) = AttractTask_Update_Orphan1;
  return;
}

// 0x002fb410  size 0x18c
void maybe_Attract_DrawLayout(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  UiLayout *pUVar2;
  
  if (param_1 != 0) {
    pUVar2 = (UiLayout *)param_1;
    if (param_2 == 0x2fc) {
      uVar1 = maybe_ReplayUi_GetValue(param_3);
      pUVar2->unk_310 = 0xffffffff;
      pUVar2->unk_31c = 0;
      pUVar2->unk_30c = 0;
      if (pUVar2->unk_31c == 0) {
        pUVar2->unk_318 = 0;
      }
      else {
        pUVar2->unk_318 = 1;
      }
      pUVar2->unk_30c = 0;
      if (pUVar2->unk_31c == 0) {
        pUVar2->unk_318 = 0;
      }
      else {
        pUVar2->unk_318 = 1;
      }
      *(undefined4 *)&pUVar2->field_0x314 = 0;
      pUVar2->unk_31c = uVar1;
      pUVar2->unk_318 = 1;
      pUVar2->unk_30c = 0;
      if (pUVar2->unk_31c == 0) {
        pUVar2->unk_318 = 0;
      }
      else {
        pUVar2->unk_318 = 1;
      }
    }
    if (param_2 == 0x3c4) {
      uVar1 = maybe_ReplayUi_GetValue(param_4);
      pUVar2->unk_310 = 0xffffffff;
      pUVar2->unk_31c = 0;
      pUVar2->unk_30c = 0;
      if (pUVar2->unk_31c == 0) {
        pUVar2->unk_318 = 0;
      }
      else {
        pUVar2->unk_318 = 1;
      }
      pUVar2->unk_30c = 0;
      if (pUVar2->unk_31c == 0) {
        pUVar2->unk_318 = 0;
      }
      else {
        pUVar2->unk_318 = 1;
      }
      *(undefined4 *)&pUVar2->field_0x314 = 0;
      pUVar2->unk_31c = uVar1;
      pUVar2->unk_318 = 1;
      pUVar2->unk_30c = 0;
      if (pUVar2->unk_31c == 0) {
        pUVar2->unk_318 = 0;
      }
      else {
        pUVar2->unk_318 = 1;
      }
    }
    if (pUVar2->unk_318 != 0) {
      UiLayout_UpdateAnim(pUVar2,0);
    }
    UiLayout_Draw(1.0,pUVar2);
  }
  return;
}

// 0x002fb5a0  size 0x33c
undefined ** maybe_Attract_PickDemo(void)

{
  ulong uVar1;
  undefined **ppuVar2;
  byte abStack_190 [80];
  byte abStack_140 [80];
  byte abStack_f0 [80];
  byte abStack_a0 [80];
  byte abStack_50 [80];
  
  ppuVar2 = (undefined **)0x0;
  uVar1 = maybe_RaceResult_GetCategory();
  if (uVar1 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch((int)uVar1) {
    case 0:
      break;
    case 1:
      GameState_LoadHeader(abStack_a0);
      if (abStack_a0[0] < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(abStack_a0[0]) {
        case 0:
          ppuVar2 = &PTR_DAT_0035d3f0;
          break;
        case 1:
          ppuVar2 = &PTR_DAT_0035d350;
          break;
        case 2:
          ppuVar2 = &PTR_DAT_0035d530;
          break;
        case 3:
          ppuVar2 = &PTR_DAT_0035d490;
          break;
        case 4:
          ppuVar2 = &PTR_DAT_0035d5d0;
          break;
        case 5:
          ppuVar2 = &PTR_DAT_0035d1f0;
          break;
        case 6:
          ppuVar2 = &PTR_DAT_0035d2b0;
          break;
        case 7:
          ppuVar2 = &PTR_DAT_0035d6d0;
        }
      }
      break;
    default:
      GameState_LoadHeader(abStack_140);
      if (abStack_140[0] < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(abStack_140[0]) {
        case 0:
          ppuVar2 = &PTR_DAT_0035d3d0;
          break;
        case 1:
          ppuVar2 = &PTR_DAT_0035d330;
          break;
        case 2:
          ppuVar2 = &PTR_DAT_0035d510;
          break;
        case 3:
          ppuVar2 = &PTR_DAT_0035d470;
          break;
        case 4:
          ppuVar2 = &PTR_DAT_0035d5b0;
          break;
        case 5:
          ppuVar2 = &PTR_DAT_0035d1d0;
          break;
        case 6:
          ppuVar2 = &PTR_DAT_0035d290;
          break;
        case 7:
          ppuVar2 = &PTR_DAT_0035d6b0;
        }
      }
      break;
    case 4:
      GameState_LoadHeader(abStack_50);
      if (abStack_50[0] < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(abStack_50[0]) {
        case 0:
          ppuVar2 = &PTR_DAT_0035d390;
          break;
        case 1:
          ppuVar2 = &PTR_DAT_0035d2f0;
          break;
        case 2:
          ppuVar2 = &PTR_DAT_0035d4d0;
          break;
        case 3:
          ppuVar2 = &PTR_DAT_0035d430;
          break;
        case 4:
          ppuVar2 = &PTR_DAT_0035d570;
          break;
        case 5:
          ppuVar2 = &PTR_DAT_0035d190;
          break;
        case 6:
          ppuVar2 = &PTR_DAT_0035d250;
          break;
        case 7:
          ppuVar2 = &PTR_DAT_0035d670;
        }
      }
      break;
    case 5:
      GameState_LoadHeader(abStack_f0);
      if (abStack_f0[0] < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(abStack_f0[0]) {
        case 0:
          ppuVar2 = &PTR_DAT_0035d370;
          break;
        case 1:
          ppuVar2 = &PTR_DAT_0035d2d0;
          break;
        case 2:
          ppuVar2 = &PTR_DAT_0035d4b0;
          break;
        case 3:
          ppuVar2 = &PTR_DAT_0035d410;
          break;
        case 4:
          ppuVar2 = &PTR_DAT_0035d550;
          break;
        case 5:
          ppuVar2 = &PTR_DAT_0035d170;
          break;
        case 6:
          ppuVar2 = &PTR_DAT_0035d230;
          break;
        case 7:
          ppuVar2 = &PTR_DAT_0035d650;
        }
      }
      break;
    case 7:
      GameState_LoadHeader(abStack_190);
      if (abStack_190[0] < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(abStack_190[0]) {
        case 0:
          ppuVar2 = &PTR_DAT_0035d3b0;
          break;
        case 1:
          ppuVar2 = &PTR_DAT_0035d310;
          break;
        case 2:
          ppuVar2 = &PTR_DAT_0035d4f0;
          break;
        case 3:
          ppuVar2 = &PTR_DAT_0035d450;
          break;
        case 4:
          ppuVar2 = &PTR_DAT_0035d590;
          break;
        case 5:
          ppuVar2 = &PTR_DAT_0035d1b0;
          break;
        case 6:
          ppuVar2 = &PTR_DAT_0035d270;
          break;
        case 7:
          ppuVar2 = &PTR_DAT_0035d690;
        }
      }
      break;
    case 8:
      ppuVar2 = &PTR_DAT_0035d210;
    }
  }
  return ppuVar2;
}

// 0x002fb8e0  size 0x130
void maybe_Attract_StepLayout(undefined4 *param_1)

{
  UiLayout **ppUVar1;
  UiLayout **ppUVar2;
  int iVar3;
  long lVar4;
  UiLayout **ppUVar5;
  UiLayout *pUStack_10;
  UiLayout *pUStack_c;
  UiLayout *pUStack_8;
  
  ppUVar2 = (UiLayout **)0xc;
  ppUVar5 = &pUStack_10;
  ppUVar1 = ppUVar5;
  while (ppUVar1 != (UiLayout **)0x0) {
    *(undefined1 *)ppUVar5 = 0;
    ppUVar5 = (UiLayout **)((int)ppUVar5 + 1);
    ppUVar2 = (UiLayout **)((int)ppUVar2 + -1);
    ppUVar1 = ppUVar2;
  }
  lVar4 = maybe_RaceResult_GetCategory();
  if (lVar4 == 0) {
    *param_1 = pUStack_10;
    param_1[1] = pUStack_c;
    param_1[2] = pUStack_8;
  }
  else {
    iVar3 = UiMgr_FindLayout(0x28);
    pUStack_c = &g_UiMgr->slots[iVar3].layout;
    lVar4 = maybe_RaceResult_GetCategory();
    if (lVar4 == 4) {
      pUStack_10 = (UiLayout *)0x0;
    }
    else {
      iVar3 = UiMgr_FindLayout(0x27);
      pUStack_10 = &g_UiMgr->slots[iVar3].layout;
    }
    lVar4 = maybe_RaceResult_GetCategory();
    if (lVar4 == 5) {
      iVar3 = UiMgr_FindLayout(0x29);
      pUStack_8 = &g_UiMgr->slots[iVar3].layout;
    }
    else {
      pUStack_8 = (UiLayout *)0x0;
    }
    *param_1 = pUStack_10;
    param_1[1] = pUStack_c;
    param_1[2] = pUStack_8;
  }
  return;
}

// 0x002fba10  size 0x1670
void maybe_RaceHud_SetupRecordLayout(undefined4 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  
  uVar1 = maybe_RaceResult_GetCategory();
  if (uVar1 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch((int)uVar1) {
    case 0:
      goto switchD_002fba44_caseD_0;
    case 1:
      puStack_c = &DAT_0035d738;
      break;
    case 2:
      puStack_c = &DAT_0035d714;
      break;
    case 3:
      puStack_c = &DAT_0035d6fc;
      break;
    case 4:
      puStack_c = &DAT_0035d744;
      break;
    case 5:
      puStack_c = &DAT_0035d708;
      break;
    case 6:
      puStack_c = &DAT_0035d72c;
      break;
    case 7:
      puStack_c = &DAT_0035d720;
      break;
    case 8:
      puStack_c = &DAT_0035d6f0;
    }
  }
  else {
switchD_002fba44_caseD_0:
    puStack_c = (undefined *)0x0;
  }
  lVar2 = maybe_RaceResult_GetCategory();
  if (lVar2 == 5) {
    lVar2 = GameState_GetCurrentRecordValue();
    if (lVar2 == 0x14a) {
      puStack_8 = &DAT_0035d834;
    }
    else if (lVar2 == 0x149) {
      puStack_8 = &DAT_0035d828;
    }
    else if (lVar2 == 0x148) {
      puStack_8 = &DAT_0035d81c;
    }
    else if (lVar2 == 0x119) {
      puStack_8 = &DAT_0035d810;
    }
    else if (lVar2 == 0x118) {
      puStack_8 = &DAT_0035d804;
    }
    else if (lVar2 == 0x117) {
      puStack_8 = &DAT_0035d7f8;
    }
    else if (lVar2 == 0xe9) {
      puStack_8 = &DAT_0035d7ec;
    }
    else if (lVar2 == 0xe8) {
      puStack_8 = &DAT_0035d7e0;
    }
    else if (lVar2 == 0xbf) {
      puStack_8 = &DAT_0035d7d4;
    }
    else if (lVar2 == 0xbe) {
      puStack_8 = &DAT_0035d7c8;
    }
    else if (lVar2 == 0xbd) {
      puStack_8 = &DAT_0035d7bc;
    }
    else if (lVar2 == 0xbc) {
      puStack_8 = &DAT_0035d7b0;
    }
    else if (lVar2 == 0x93) {
      puStack_8 = &DAT_0035d7a4;
    }
    else if (lVar2 == 0x92) {
      puStack_8 = &DAT_0035d798;
    }
    else if (lVar2 == 0x91) {
      puStack_8 = &DAT_0035d78c;
    }
    else if (lVar2 == 0x68) {
      puStack_8 = &DAT_0035d780;
    }
    else if (lVar2 == 0x67) {
      puStack_8 = &DAT_0035d774;
    }
    else if (lVar2 == 0x42) {
      puStack_8 = &DAT_0035d768;
    }
    else if (lVar2 == 0xea) {
      puStack_8 = &DAT_0035d75c;
    }
    else if (lVar2 == 0x1f) {
      puStack_8 = &DAT_0035d750;
    }
  }
  else {
    puStack_8 = (undefined *)0x0;
  }
  lVar2 = GameState_GetCurrentRecordValue();
  if (lVar2 == 0x166) {
    puStack_10 = &DAT_0035e068;
  }
  else if (lVar2 == 0x165) {
    puStack_10 = &DAT_0035e05c;
  }
  else if (lVar2 == 0x164) {
    puStack_10 = &DAT_0035e050;
  }
  else if (lVar2 == 0x163) {
    puStack_10 = &DAT_0035e044;
  }
  else if (lVar2 == 0x162) {
    puStack_10 = &DAT_0035e038;
  }
  else if (lVar2 == 0x161) {
    puStack_10 = &DAT_0035e02c;
  }
  else if (lVar2 == 0x160) {
    puStack_10 = &DAT_0035e020;
  }
  else if (lVar2 == 0x15f) {
    puStack_10 = &DAT_0035e014;
  }
  else if (lVar2 == 0x15e) {
    puStack_10 = &DAT_0035e008;
  }
  else if (lVar2 == 0x15d) {
    puStack_10 = &DAT_0035dffc;
  }
  else if (lVar2 == 0x147) {
    puStack_10 = &DAT_0035dff0;
  }
  else if (lVar2 == 0x146) {
    puStack_10 = &DAT_0035dfe4;
  }
  else if (lVar2 == 0x145) {
    puStack_10 = &DAT_0035dfd8;
  }
  else if (lVar2 == 0x144) {
    puStack_10 = &DAT_0035dfcc;
  }
  else if (lVar2 == 0x143) {
    puStack_10 = &DAT_0035dfc0;
  }
  else if (lVar2 == 0x142) {
    puStack_10 = &DAT_0035dfb4;
  }
  else if (lVar2 == 0x141) {
    puStack_10 = &DAT_0035dfa8;
  }
  else if (lVar2 == 0x140) {
    puStack_10 = &DAT_0035df9c;
  }
  else if (lVar2 == 0x13f) {
    puStack_10 = &DAT_0035df90;
  }
  else if (lVar2 == 0x13e) {
    puStack_10 = &DAT_0035df84;
  }
  else if (lVar2 == 0x116) {
    puStack_10 = &DAT_0035df78;
  }
  else if (lVar2 == 0x115) {
    puStack_10 = &DAT_0035df6c;
  }
  else if (lVar2 == 0x114) {
    puStack_10 = &DAT_0035df60;
  }
  else if (lVar2 == 0x113) {
    puStack_10 = &DAT_0035df54;
  }
  else if (lVar2 == 0x112) {
    puStack_10 = &DAT_0035df48;
  }
  else if (lVar2 == 0x111) {
    puStack_10 = &DAT_0035df3c;
  }
  else if (lVar2 == 0x110) {
    puStack_10 = &DAT_0035df30;
  }
  else if (lVar2 == 0x10f) {
    puStack_10 = &DAT_0035df24;
  }
  else if (lVar2 == 0x10e) {
    puStack_10 = &DAT_0035df18;
  }
  else if (lVar2 == 0xe7) {
    puStack_10 = &DAT_0035df0c;
  }
  else if (lVar2 == 0xe6) {
    puStack_10 = &DAT_0035df00;
  }
  else if (lVar2 == 0xe5) {
    puStack_10 = &DAT_0035def4;
  }
  else if (lVar2 == 0xe4) {
    puStack_10 = &DAT_0035dee8;
  }
  else if (lVar2 == 0xe3) {
    puStack_10 = &DAT_0035dedc;
  }
  else if (lVar2 == 0xe2) {
    puStack_10 = &DAT_0035ded0;
  }
  else if (lVar2 == 0xe1) {
    puStack_10 = &DAT_0035dec4;
  }
  else if (lVar2 == 0xe0) {
    puStack_10 = &DAT_0035deb8;
  }
  else if (lVar2 == 0xc2) {
    puStack_10 = &DAT_0035deac;
  }
  else if (lVar2 == 0xbb) {
    puStack_10 = &DAT_0035dea0;
  }
  else if (lVar2 == 0xba) {
    puStack_10 = &DAT_0035de94;
  }
  else if (lVar2 == 0xb9) {
    puStack_10 = &DAT_0035de88;
  }
  else if (lVar2 == 0xb8) {
    puStack_10 = &DAT_0035de7c;
  }
  else if (lVar2 == 0xb7) {
    puStack_10 = &DAT_0035de70;
  }
  else if (lVar2 == 0xb6) {
    puStack_10 = &DAT_0035de64;
  }
  else if (lVar2 == 0xb5) {
    puStack_10 = &DAT_0035de58;
  }
  else if (lVar2 == 0xb4) {
    puStack_10 = &DAT_0035de4c;
  }
  else if (lVar2 == 0xb3) {
    puStack_10 = &DAT_0035de40;
  }
  else if (lVar2 == 0x98) {
    puStack_10 = &DAT_0035de34;
  }
  else if (lVar2 == 0x90) {
    puStack_10 = &DAT_0035de28;
  }
  else if (lVar2 == 0x8f) {
    puStack_10 = &DAT_0035de1c;
  }
  else if (lVar2 == 0x8e) {
    puStack_10 = &DAT_0035de10;
  }
  else if (lVar2 == 0x8d) {
    puStack_10 = &DAT_0035de04;
  }
  else if (lVar2 == 0x8c) {
    puStack_10 = &DAT_0035ddf8;
  }
  else if (lVar2 == 0x8b) {
    puStack_10 = &DAT_0035ddec;
  }
  else if (lVar2 == 0x8a) {
    puStack_10 = &DAT_0035dde0;
  }
  else if (lVar2 == 0x89) {
    puStack_10 = &DAT_0035ddd4;
  }
  else if (lVar2 == 0x88) {
    puStack_10 = &DAT_0035ddc8;
  }
  else if (lVar2 == 0x66) {
    puStack_10 = &DAT_0035ddbc;
  }
  else if (lVar2 == 0x65) {
    puStack_10 = &DAT_0035ddb0;
  }
  else if (lVar2 == 100) {
    puStack_10 = &DAT_0035dda4;
  }
  else if (lVar2 == 99) {
    puStack_10 = &DAT_0035dd98;
  }
  else if (lVar2 == 0x62) {
    puStack_10 = &DAT_0035dd8c;
  }
  else if (lVar2 == 0x61) {
    puStack_10 = &DAT_0035dd80;
  }
  else if (lVar2 == 0x60) {
    puStack_10 = &DAT_0035dd74;
  }
  else if (lVar2 == 0x41) {
    puStack_10 = &DAT_0035dd68;
  }
  else if (lVar2 == 0x40) {
    puStack_10 = &DAT_0035dd5c;
  }
  else if (lVar2 == 0x3f) {
    puStack_10 = &DAT_0035dd50;
  }
  else if (lVar2 == 0x3e) {
    puStack_10 = &DAT_0035dd44;
  }
  else if (lVar2 == 0x3d) {
    puStack_10 = &DAT_0035dd38;
  }
  else if (lVar2 == 0x3c) {
    puStack_10 = &DAT_0035dd2c;
  }
  else if (lVar2 == 0x3b) {
    puStack_10 = &DAT_0035dd20;
  }
  else if (lVar2 == 0x1c) {
    puStack_10 = &DAT_0035dd14;
  }
  else if (lVar2 == 0x1b) {
    puStack_10 = &DAT_0035dd08;
  }
  else if (lVar2 == 0x1a) {
    puStack_10 = &DAT_0035dcfc;
  }
  else if (lVar2 == 0x19) {
    puStack_10 = &DAT_0035dcf0;
  }
  else if (lVar2 == 0x18) {
    puStack_10 = &DAT_0035dce4;
  }
  else if (lVar2 == 0x17) {
    puStack_10 = &DAT_0035dcd8;
  }
  else if (lVar2 == 0x16) {
    puStack_10 = &DAT_0035dccc;
  }
  else if (lVar2 == 0x15) {
    puStack_10 = &DAT_0035dcc0;
  }
  else if (lVar2 == 0x14) {
    puStack_10 = &DAT_0035dcb4;
  }
  else if (lVar2 == 0x13) {
    puStack_10 = &DAT_0035dca8;
  }
  else if (lVar2 == 0x12) {
    puStack_10 = &DAT_0035dc9c;
  }
  else if (lVar2 == 0x11) {
    puStack_10 = &DAT_0035dc90;
  }
  else if (lVar2 == 0) {
    puStack_10 = &DAT_0035dc84;
  }
  else if (lVar2 == 0x13c) {
    puStack_10 = &DAT_0035dc78;
  }
  else if (lVar2 == 0x13b) {
    puStack_10 = &DAT_0035dc6c;
  }
  else if (lVar2 == 0x137) {
    puStack_10 = &DAT_0035dc60;
  }
  else if (lVar2 == 0x133) {
    puStack_10 = &DAT_0035dc54;
  }
  else if (lVar2 == 0x10c) {
    puStack_10 = &DAT_0035dc48;
  }
  else if (lVar2 == 0x10b) {
    puStack_10 = &DAT_0035dc3c;
  }
  else if (lVar2 == 0x10a) {
    puStack_10 = &DAT_0035dc30;
  }
  else if (lVar2 == 0x109) {
    puStack_10 = &DAT_0035dc24;
  }
  else if (lVar2 == 0xff) {
    puStack_10 = &DAT_0035dc18;
  }
  else if (lVar2 == 0xde) {
    puStack_10 = &DAT_0035dc0c;
  }
  else if (lVar2 == 0xdd) {
    puStack_10 = &DAT_0035dc00;
  }
  else if (lVar2 == 0xcb) {
    puStack_10 = &DAT_0035dbf4;
  }
  else if (lVar2 == 0xb0) {
    puStack_10 = &DAT_0035dbe8;
  }
  else if (lVar2 == 0xaf) {
    puStack_10 = &DAT_0035dbdc;
  }
  else if (lVar2 == 0xa2) {
    puStack_10 = &DAT_0035dbd0;
  }
  else if (lVar2 == 0x9c) {
    puStack_10 = &DAT_0035dbc4;
  }
  else if (lVar2 == 0x86) {
    puStack_10 = &DAT_0035dbb8;
  }
  else if (lVar2 == 0x85) {
    puStack_10 = &DAT_0035dbac;
  }
  else if (lVar2 == 0x84) {
    puStack_10 = &DAT_0035dba0;
  }
  else if (lVar2 == 0x5d) {
    puStack_10 = &DAT_0035db94;
  }
  else if (lVar2 == 0x5c) {
    puStack_10 = &DAT_0035db88;
  }
  else if (lVar2 == 0x54) {
    puStack_10 = &DAT_0035db7c;
  }
  else if (lVar2 == 0x49) {
    puStack_10 = &DAT_0035db70;
  }
  else if (lVar2 == 0x36) {
    puStack_10 = &DAT_0035db64;
  }
  else if (lVar2 == 0x2d) {
    puStack_10 = &DAT_0035db58;
  }
  else if (lVar2 == 0x23) {
    puStack_10 = &DAT_0035db4c;
  }
  else if (lVar2 == 0x22) {
    puStack_10 = &DAT_0035db40;
  }
  else if (lVar2 == 0xd) {
    puStack_10 = &DAT_0035db34;
  }
  else if (lVar2 == 0x10d) {
    puStack_10 = &DAT_0035db28;
  }
  else if (lVar2 == 0xdf) {
    puStack_10 = &DAT_0035db1c;
  }
  else if (lVar2 == 0xb2) {
    puStack_10 = &DAT_0035db10;
  }
  else if (lVar2 == 0x87) {
    puStack_10 = &DAT_0035db04;
  }
  else if (lVar2 == 0x5f) {
    puStack_10 = &DAT_0035daf8;
  }
  else if (lVar2 == 0x3a) {
    puStack_10 = &DAT_0035daec;
  }
  else if (lVar2 == 0x10) {
    puStack_10 = &DAT_0035dae0;
  }
  else if (lVar2 == 0x14f) {
    puStack_10 = &DAT_0035dad4;
  }
  else if (lVar2 == 0x14e) {
    puStack_10 = &DAT_0035dac8;
  }
  else if (lVar2 == 0x14d) {
    puStack_10 = &DAT_0035dabc;
  }
  else if (lVar2 == 0x14c) {
    puStack_10 = &DAT_0035dab0;
  }
  else if (lVar2 == 0x14b) {
    puStack_10 = &DAT_0035daa4;
  }
  else if (lVar2 == 0x120) {
    puStack_10 = &DAT_0035da98;
  }
  else if (lVar2 == 0x11f) {
    puStack_10 = &DAT_0035da8c;
  }
  else if (lVar2 == 0x11e) {
    puStack_10 = &DAT_0035da80;
  }
  else if (lVar2 == 0xef) {
    puStack_10 = &DAT_0035da74;
  }
  else if (lVar2 == 0xc4) {
    puStack_10 = &DAT_0035da68;
  }
  else if (lVar2 == 0x97) {
    puStack_10 = &DAT_0035da5c;
  }
  else if (lVar2 == 0x96) {
    puStack_10 = &DAT_0035da50;
  }
  else if (lVar2 == 0x6d) {
    puStack_10 = &DAT_0035da44;
  }
  else if (lVar2 == 0x6c) {
    puStack_10 = &DAT_0035da38;
  }
  else if (lVar2 == 0x44) {
    puStack_10 = &DAT_0035da2c;
  }
  else if (lVar2 == 0x20) {
    puStack_10 = &DAT_0035da20;
  }
  else if (lVar2 == 0x14a) {
    puStack_10 = &DAT_0035da14;
  }
  else if (lVar2 == 0x149) {
    puStack_10 = &DAT_0035da08;
  }
  else if (lVar2 == 0x148) {
    puStack_10 = &DAT_0035d9fc;
  }
  else if (lVar2 == 0x119) {
    puStack_10 = &DAT_0035d9f0;
  }
  else if (lVar2 == 0x118) {
    puStack_10 = &DAT_0035d9e4;
  }
  else if (lVar2 == 0x117) {
    puStack_10 = &DAT_0035d9d8;
  }
  else if (lVar2 == 0xea) {
    puStack_10 = &DAT_0035d9cc;
  }
  else if (lVar2 == 0xe9) {
    puStack_10 = &DAT_0035d9c0;
  }
  else if (lVar2 == 0xe8) {
    puStack_10 = &DAT_0035d9b4;
  }
  else if (lVar2 == 0xbf) {
    puStack_10 = &DAT_0035d9a8;
  }
  else if (lVar2 == 0xbe) {
    puStack_10 = &DAT_0035d99c;
  }
  else if (lVar2 == 0xbd) {
    puStack_10 = &DAT_0035d990;
  }
  else if (lVar2 == 0xbc) {
    puStack_10 = &DAT_0035d984;
  }
  else if (lVar2 == 0x93) {
    puStack_10 = &DAT_0035d978;
  }
  else if (lVar2 == 0x92) {
    puStack_10 = &DAT_0035d96c;
  }
  else if (lVar2 == 0x91) {
    puStack_10 = &DAT_0035d960;
  }
  else if (lVar2 == 0x68) {
    puStack_10 = &DAT_0035d954;
  }
  else if (lVar2 == 0x67) {
    puStack_10 = &DAT_0035d948;
  }
  else if (lVar2 == 0x42) {
    puStack_10 = &DAT_0035d93c;
  }
  else if (lVar2 == 0x1f) {
    puStack_10 = &DAT_0035d930;
  }
  else if (lVar2 == 0x11d) {
    puStack_10 = &DAT_0035d924;
  }
  else if (lVar2 == 0x11c) {
    puStack_10 = &DAT_0035d918;
  }
  else if (lVar2 == 0x11b) {
    puStack_10 = &DAT_0035d90c;
  }
  else if (lVar2 == 0x11a) {
    puStack_10 = &DAT_0035d900;
  }
  else if (lVar2 == 0xee) {
    puStack_10 = &DAT_0035d8f4;
  }
  else if (lVar2 == 0xed) {
    puStack_10 = &DAT_0035d8e8;
  }
  else if (lVar2 == 0xec) {
    puStack_10 = &DAT_0035d8dc;
  }
  else if (lVar2 == 0xeb) {
    puStack_10 = &DAT_0035d8d0;
  }
  else if (lVar2 == 0xc3) {
    puStack_10 = &DAT_0035d8c4;
  }
  else if (lVar2 == 0xc1) {
    puStack_10 = &DAT_0035d8b8;
  }
  else if (lVar2 == 0xc0) {
    puStack_10 = &DAT_0035d8ac;
  }
  else if (lVar2 == 0x95) {
    puStack_10 = &DAT_0035d8a0;
  }
  else if (lVar2 == 0x94) {
    puStack_10 = &DAT_0035d894;
  }
  else if (lVar2 == 0x6b) {
    puStack_10 = &DAT_0035d888;
  }
  else if (lVar2 == 0x6a) {
    puStack_10 = &DAT_0035d87c;
  }
  else if (lVar2 == 0x69) {
    puStack_10 = &DAT_0035d870;
  }
  else if (lVar2 == 0x43) {
    puStack_10 = &DAT_0035d864;
  }
  else if (lVar2 == 0x1e) {
    puStack_10 = &DAT_0035d858;
  }
  else if (lVar2 == 0x1d) {
    puStack_10 = &DAT_0035d84c;
  }
  else if (lVar2 == 0x13d) {
    puStack_10 = &DAT_0035d840;
  }
  else {
    puStack_10 = (undefined *)0x0;
  }
  *param_1 = puStack_10;
  param_1[1] = puStack_c;
  param_1[2] = puStack_8;
  return;
}

