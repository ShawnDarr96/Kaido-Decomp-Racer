// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002f8000 - 0x002fc000
#include "ghidra_types.h"

// 0x002f8000  size 0x18
void nameentry_sub_002f8000(int param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// 0x002f8020  size 0x60
void nameentry_sub_002f8020(undefined4 *param_1)

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
void nameentry_sub_002f8080(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 0x002f80a0  size 0xcc
undefined4 nameentry_sub_002f80a0(int *param_1)

{
  undefined4 uVar1;
  
  nameentry_sub_002f8ad0(0);
  if ((param_1[5] == 0) && (param_1[6] == 0)) {
    if ((param_1[1] != param_1[2]) || (*(int *)(iRam0036f934 + 4) != *(int *)(iRam0036f934 + 0xc)))
    {
      if ((param_1[7] == 0) || (*(int *)(iRam0036f934 + 0x10) != 0)) {
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
    nameentry_sub_002f8ad0(1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002f8170  size 0x28
void nameentry_sub_002f8170(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}

// 0x002f81a0  size 0x8
void nameentry_sub_002f81a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 0x002f81b0  size 0x8
undefined4 nameentry_sub_002f81b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// 0x002f81c0  size 0x8
undefined4 nameentry_sub_002f81c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 0x002f81d0  size 0xc
undefined4 nameentry_sub_002f81d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return uVar1;
}

// 0x002f81e0  size 0xc
undefined4 nameentry_sub_002f81e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar1;
}

// 0x002f81f0  size 0x8
undefined4 nameentry_sub_002f81f0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0x002f8200  size 0x8
undefined4 nameentry_sub_002f8200(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0x002f8210  size 0x8
undefined4 nameentry_sub_002f8210(undefined4 *param_1)

{
  return *param_1;
}

// 0x002f8220  size 0x8
void nameentry_sub_002f8220(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 0x002f8230  size 0x2c
void nameentry_sub_002f8230(undefined4 *param_1,undefined4 param_2)

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
void nameentry_sub_002f8260(long param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_1) {
    MenuWnd_DrawText(1,0x1b);
  }
  iVar1 = UiMgr_FindLayout(1);
  UiElem_SetPropInt(*piRam0036f42c + iVar1 * 0x4f4 + 4,0x1a,9,
                    *(undefined4 *)(&DAT_00343550 + param_2 * 4));
  iVar1 = UiMgr_FindLayout(1);
  UiLayout_Draw(0x3f800000,*piRam0036f42c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f8310  size 0xc
undefined4 nameentry_sub_002f8310(void)

{
  return *(undefined4 *)(iRam0036f934 + 0x18);
}

// 0x002f8320  size 0xc
void nameentry_sub_002f8320(undefined4 param_1)

{
  *(undefined4 *)(iRam0036f934 + 0x18) = param_1;
  return;
}

// 0x002f8330  size 0x8
undefined4 nameentry_sub_002f8330(void)

{
  return uRam0036f93c;
}

// 0x002f8340  size 0x8
undefined4 nameentry_sub_002f8340(void)

{
  return uRam0036f938;
}

// 0x002f8350  size 0x1f0
void nameentry_sub_002f8350(void)

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
  if (*(int *)(iRam0036f934 + 0x10) == 1) {
    if (*(int *)(iRam0036f934 + 0x14) < 0) {
      *(undefined4 *)(iRam0036f934 + 0x14) = 0x14;
    }
    if (*(int *)(iRam0036f934 + 0x14) < 1) {
      Gfx_SetFade(2,9,0,0);
      *(undefined4 *)(iRam0036f934 + 0x10) = 0;
    }
    else {
      aiStack_50[0] = (*(int *)(iRam0036f934 + 0x14) << 7) / 0x14;
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
    *(int *)(iRam0036f934 + 0x14) = *(int *)(iRam0036f934 + 0x14) + -1;
  }
  else if (*(int *)(iRam0036f934 + 0x10) == 2) {
    if (*(int *)(iRam0036f934 + 0x14) < 0) {
      *(undefined4 *)(iRam0036f934 + 0x14) = 0x28;
    }
    if (*(int *)(iRam0036f934 + 0x14) < 1) {
      *(undefined4 *)(iRam0036f934 + 0x10) = 3;
    }
    else {
      aiStack_50[0] = ((0x28 - *(int *)(iRam0036f934 + 0x14)) * 0x80) / 0x28;
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
    *(int *)(iRam0036f934 + 0x14) = *(int *)(iRam0036f934 + 0x14) + -1;
  }
  return;
}

// 0x002f8540  size 0xc
void nameentry_sub_002f8540(undefined4 param_1)

{
  *(undefined4 *)(iRam0036f934 + 0x10) = param_1;
  return;
}

// 0x002f8550  size 0xc
undefined4 nameentry_sub_002f8550(void)

{
  return *(undefined4 *)(iRam0036f934 + 0x10);
}

// 0x002f8560  size 0xc
undefined4 nameentry_sub_002f8560(void)

{
  return *(undefined4 *)(iRam0036f934 + 8);
}

// 0x002f8570  size 0xc
undefined4 nameentry_sub_002f8570(void)

{
  return *(undefined4 *)(iRam0036f934 + 4);
}

// 0x002f8580  size 0x30
void nameentry_sub_002f8580(int param_1)

{
  if (*(int *)(iRam0036f934 + 4) != param_1) {
    *(int *)(iRam0036f934 + 0xc) = param_1;
    *(undefined4 *)(iRam0036f934 + 0x10) = 2;
  }
  return;
}

// 0x002f85b0  size 0x60
int nameentry_sub_002f85b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *piRam0036f934;
  iVar1 = piRam0036f934[1];
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
void nameentry_sub_002f8620(void)

{
  int iVar1;
  
  iVar1 = *(int *)(iRam0036f934 + 0xc);
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
    *(undefined4 *)(iRam0036f934 + 8) = *(undefined4 *)(iRam0036f934 + 4);
    *(undefined4 *)(iRam0036f934 + 4) = *(undefined4 *)(iRam0036f934 + 0xc);
    *(undefined4 *)(iRam0036f934 + 0x10) = 1;
  }
  return;
}

// 0x002f86e0  size 0x18
bool nameentry_sub_002f86e0(void)

{
  return *(int *)(iRam0036f934 + 4) != *(int *)(iRam0036f934 + 0xc);
}

// 0x002f8700  size 0x54
void nameentry_sub_002f8700(void)

{
  if (*piRam0036f934 != 0) {
    Mem_Free();
    *piRam0036f934 = 0;
  }
  if (piRam0036f934 != (int *)0x0) {
    Mem_Free();
    piRam0036f934 = (int *)0x0;
  }
  UiMgr_Free();
  return;
}

// 0x002f8760  size 0x17c
void nameentry_sub_002f8760(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  puRam0036f934 = (undefined4 *)Mem_Alloc16(0x1c,param_1);
  uVar4 = Mem_Alloc16(0x17f0,param_1);
  iVar9 = 0;
  iVar6 = 0;
  piVar5 = &DAT_00343410;
  *puRam0036f934 = uVar4;
  puRam0036f934[1] = param_2;
  puRam0036f934[2] = 0xffffffff;
  puRam0036f934[3] = puRam0036f934[1];
  puRam0036f934[4] = 1;
  puRam0036f934[5] = 0xffffffff;
  do {
    piVar1 = piVar5 + 2;
    iVar8 = iRam0036f0c4 + *piVar5 * 0x14;
    iVar3 = *(int *)(iVar8 + 0x20);
    if (iVar3 == 0) {
      uVar7 = *(uint *)(iVar8 + 0x18);
    }
    else {
      uVar7 = iVar3 + 0x7ffU >> 0xb;
    }
    piVar2 = piVar5 + 1;
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 3;
    iVar9 = iVar9 + ((*piVar1 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                    uVar7 * 0x800 + *piVar2 * 0x80;
  } while (iVar6 < 0x14);
  UiMgr_SetActive(uRam0036f2c0,uRam0036f2c0);
  UiMgr_Alloc(0x430750,0x14,iVar9,0,0,0x186f);
  iVar6 = 0;
  puVar10 = &DAT_00343410;
  do {
    UiMgr_LoadLayout(iVar6,puVar10,0);
    iVar6 = iVar6 + 1;
    puVar10 = puVar10 + 3;
  } while (iVar6 < 0x14);
  return;
}

// 0x002f88e0  size 0x1ac
undefined4 nameentry_sub_002f88e0(char *param_1)

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
        iVar1 = maybe_Options_GetLanguage();
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
undefined4 nameentry_sub_002f8a90(void)

{
  return *(undefined4 *)(iGpffff9260 + 0x20);
}

// 0x002f8aa0  size 0xc
undefined4 nameentry_sub_002f8aa0(void)

{
  return *(undefined4 *)(iGpffff9260 + 0x1c);
}

// 0x002f8ab0  size 0xc
undefined4 nameentry_sub_002f8ab0(void)

{
  return *(undefined4 *)(iGpffff9260 + 0x18);
}

// 0x002f8ac0  size 0x10
void nameentry_sub_002f8ac0(void)

{
  *(undefined4 *)(iGpffff9260 + 0x14) = 1;
  return;
}

// 0x002f8ad0  size 0xc
void nameentry_sub_002f8ad0(undefined4 param_1)

{
  *(undefined4 *)(iGpffff9260 + 0xc) = param_1;
  return;
}

// 0x002f8ae0  size 0x2c
void nameentry_sub_002f8ae0(void)

{
  if (iGpffff9260 != 0) {
    Mem_Free();
    iGpffff9260 = 0;
  }
  return;
}

// 0x002f8b10  size 0xa4
void nameentry_sub_002f8b10(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  if (puGpffff9260 != (undefined1 *)0x0) {
    Mem_Free();
    puGpffff9260 = (undefined1 *)0x0;
  }
  lVar1 = Mem_Alloc16(0x24,param_1);
  puGpffff9260 = (undefined1 *)lVar1;
  if (lVar1 != 0) {
    *puGpffff9260 = 0;
    puGpffff9260[1] = 0;
    *(undefined4 *)(puGpffff9260 + 4) = param_2;
    *(undefined4 *)(puGpffff9260 + 8) = 0;
    *(undefined4 *)(puGpffff9260 + 0xc) = 1;
    *(undefined4 *)(puGpffff9260 + 0x10) = 1;
    *(undefined4 *)(puGpffff9260 + 0x14) = 0;
    *(undefined4 *)(puGpffff9260 + 0x18) = 0;
    *(undefined4 *)(puGpffff9260 + 0x1c) = 0;
    *(undefined4 *)(puGpffff9260 + 0x20) = 0;
  }
  return;
}

// 0x002f8bc0  size 0xf8
void nameentry_sub_002f8bc0(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (puRam0036f950 != (undefined1 *)0x0) {
    *(undefined4 *)(puRam0036f950 + 0x18) = 0;
    *(undefined4 *)(puRam0036f950 + 0x1c) = 0;
    *(undefined4 *)(puRam0036f950 + 0x20) = 0;
    if (*(int *)(puRam0036f950 + 0xc) != 0) {
      if (*(int *)(puRam0036f950 + 0x14) != 0) {
        *(undefined4 *)(puRam0036f950 + 0x14) = 0;
        nameentry_sub_002f88e0(puRam0036f950);
      }
      puVar1 = puRam0036f950;
      uVar3 = Pad_GetPort(*puRam0036f950,puRam0036f950[1]);
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

// 0x002f8ce0  size 0x240
undefined4 nameentry_sub_002f8ce0(int param_1,undefined1 param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  switch(param_2) {
  default:
    return 6;
  case 1:
    lVar3 = script_sub_002bc1a0(*(undefined4 *)(param_1 + 0x60));
    if (lVar3 == 0) {
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
    lVar3 = script_sub_002bc1a0();
    if (lVar3 == 0) {
      return 5;
    }
    if (*(int *)(*(int *)(param_1 + 0x60) * 4 + param_1 + 0x7c) != 0) {
      return 1;
    }
    break;
  case 5:
    lVar3 = script_sub_002bc1a0(*(undefined4 *)(param_1 + 0x60));
    if (lVar3 == 0) {
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
    lVar3 = script_sub_002bc1a0();
    if (lVar3 != 0) {
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
    lVar3 = script_sub_002bc1a0();
    if (lVar3 == 0) {
      return 5;
    }
    if (*(int *)(*(int *)(param_1 + 0x60) * 4 + param_1 + 0x7c) != 0) {
      return 1;
    }
  }
  return 0;
}

// 0x002f8f20  size 0x170
void nameentry_sub_002f8f20(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = nameentry_sub_002f81e0();
  iVar4 = (int)param_1;
  if (lVar2 == 0) {
    cVar1 = *(char *)(iVar4 + 0x4c);
  }
  else {
    *(undefined4 *)(iVar4 + 0x74) = 0xfffffffe;
    *(undefined4 *)(iVar4 + 0x78) = 0xfffffffe;
    *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined1 *)(iVar4 + 0x4c) = 1;
    nameentry_sub_002f7f80(iVar4 + 0x24);
    script_sub_002b97c0(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x60));
    cVar1 = *(char *)(iVar4 + 0x4c);
  }
  if (cVar1 == '\x05') {
    lVar2 = nameentry_sub_002f7d80(iVar4 + 0x24,0,0xffffffffffffffff,0xffffffffffffffff);
    if (lVar2 != 0) {
      *(undefined1 *)(iVar4 + 0x4c) = 6;
      uVar3 = nameentry_sub_002f8210(param_1);
      nameentry_sub_002f8220(param_1,uVar3);
    }
  }
  else if (cVar1 == '\x04') {
    lVar2 = script_sub_002b9290(*(undefined4 *)(iVar4 + 0x20));
    if (lVar2 == 0) {
      *(undefined1 *)(iVar4 + 0x4c) = 0;
      uVar3 = nameentry_sub_002f8210(param_1);
      nameentry_sub_002f8220(param_1,uVar3);
    }
    else {
      lVar2 = nameentry_sub_002f64e0(iVar4 + 0x24);
      if (lVar2 != 0) {
        *(undefined1 *)(iVar4 + 0x4c) = 5;
      }
    }
  }
  else if (cVar1 == '\x02') {
    lVar2 = script_sub_002bb460(*(undefined4 *)(iVar4 + 0x20));
    if (lVar2 != 0) {
      *(undefined1 *)(iVar4 + 0x4c) = 4;
    }
  }
  else if ((cVar1 == '\x01') &&
          (lVar2 = script_sub_002b9080(*(undefined4 *)(iVar4 + 0x20),0xffffffffffffffff), lVar2 == 0
          )) {
    script_sub_002bb4c0(*(undefined4 *)(iVar4 + 0x20));
    *(undefined1 *)(iVar4 + 0x4c) = 2;
  }
  return;
}

// 0x002f9090  size 0x4c
void nameentry_sub_002f9090(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = nameentry_sub_002f81e0();
  if (lVar1 != 0) {
    uVar2 = nameentry_sub_002f8210(param_1);
    *(undefined4 *)((int)param_1 + 0x74) = uVar2;
    uVar2 = nameentry_sub_002f8210(param_1);
    *(undefined4 *)((int)param_1 + 0x78) = uVar2;
  }
  return;
}

// 0x002f90e0  size 0x134
void nameentry_sub_002f90e0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = nameentry_sub_002f81e0();
  iVar4 = (int)param_1;
  if (lVar1 != 0) {
    *(undefined4 *)(iVar4 + 0x78) = 7;
    *(undefined4 *)(iVar4 + 0x6c) = 1;
  }
  nameentry_sub_002f6190(iVar4 + 0x6c,0,1,1,0);
  uVar2 = nameentry_sub_002f8ab0();
  if ((uVar2 & 0x800) != 0) {
    lVar1 = script_sub_002bc1a0(*(undefined4 *)(iVar4 + 0x60));
    if (lVar1 == 0) {
      Se_PlayMenuVol(8,0x60);
    }
    else {
      if (*(int *)(iVar4 + 0x60) != *(int *)(iVar4 + 0x70)) {
        nameentry_sub_002f8220(param_1,10);
        iVar3 = *(int *)(iVar4 + 0x6c);
        goto LAB_002f912c;
      }
      nameentry_sub_002f7f80(iVar4 + 0x24);
      *(undefined4 *)(iVar4 + 0x70) = 0xffffffff;
      *(undefined1 *)(iVar4 + 0x4c) = 0;
    }
  }
  iVar3 = *(int *)(iVar4 + 0x6c);
LAB_002f912c:
  if (iVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x74) = 7;
    uVar2 = nameentry_sub_002f8ab0();
    if ((uVar2 & 0x180) != 0) {
      if (*(int *)(iVar4 + 0x60) == *(int *)(iVar4 + 0x70)) {
        nameentry_sub_002f7f80(iVar4 + 0x24);
        *(undefined4 *)(iVar4 + 0x70) = 0xffffffff;
        *(undefined1 *)(iVar4 + 0x4c) = 0;
      }
      script_sub_002bc150(*(undefined4 *)(iVar4 + 0x60));
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x74) = 7;
  }
  return;
}

// 0x002f9220  size 0x18c
void nameentry_sub_002f9220(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  lVar5 = nameentry_sub_002f81e0();
  iVar7 = (int)param_1;
  if (lVar5 != 0) {
    *(undefined4 *)(iVar7 + 0x78) = 0;
    *(undefined1 *)(iVar7 + 100) = 7;
  }
  nameentry_sub_002f6190(iVar7 + 0x60,0,0x1d,1,0);
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
  uVar6 = nameentry_sub_002f8ab0();
  if ((uVar6 & 0x800) != 0) {
    lVar5 = script_sub_002bc1a0(*(undefined4 *)(iVar7 + 0x60));
    if (lVar5 == 0) {
      Se_PlayMenuVol(8,0x60);
      uVar1 = *(undefined1 *)(iVar7 + 100);
      goto LAB_002f92e4;
    }
    if (*(int *)(iVar7 + 0x60) == *(int *)(iVar7 + 0x70)) {
      nameentry_sub_002f7f80(iVar7 + 0x24);
      *(undefined4 *)(iVar7 + 0x70) = 0xffffffff;
      *(undefined1 *)(iVar7 + 0x4c) = 0;
    }
    else {
      nameentry_sub_002f8220(param_1,10);
    }
  }
  uVar1 = *(undefined1 *)(iVar7 + 100);
LAB_002f92e4:
  cVar4 = nameentry_sub_002f8ce0(param_1,uVar1);
  if (cVar4 == '\x05') {
    *(undefined4 *)(iVar7 + 0x74) = 0xfffffffe;
    uVar6 = nameentry_sub_002f8ab0();
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
void nameentry_sub_002f93b0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  
  lVar4 = nameentry_sub_002f81e0();
  iVar8 = (int)param_1;
  if (((lVar4 != 0) && (lVar4 = nameentry_sub_002f8210(param_1), lVar4 != 9)) &&
     (lVar4 = nameentry_sub_002f8210(param_1), lVar4 != 10)) {
    *(undefined4 *)(iVar8 + 0x54) = 0xffffffff;
  }
  nameentry_sub_002f6190(iVar8 + 0x60,0,0x1d,1,0);
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
  uVar5 = nameentry_sub_002f8ab0();
  if ((uVar5 & 0x800) != 0) {
    lVar4 = script_sub_002bc1a0(*(undefined4 *)(iVar8 + 0x60));
    if (lVar4 == 0) {
      Se_PlayMenuVol(8,0x60);
    }
    else {
      if (*(int *)(iVar8 + 0x60) != *(int *)(iVar8 + 0x70)) {
        nameentry_sub_002f8220(param_1,10);
        iVar6 = *(int *)(iVar8 + 0x54);
        goto LAB_002f947c;
      }
      nameentry_sub_002f7f80(iVar8 + 0x24);
      *(undefined4 *)(iVar8 + 0x70) = 0xffffffff;
      *(undefined1 *)(iVar8 + 0x4c) = 0;
    }
  }
  iVar6 = *(int *)(iVar8 + 0x54);
LAB_002f947c:
  if (iVar6 == -1) {
    *(undefined1 *)(iVar8 + 100) = 5;
    cVar1 = nameentry_sub_002f8ce0(param_1,*(undefined1 *)(iVar8 + 100));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar8 + 0x74) = 0xfffffffe;
      *(undefined4 *)(iVar8 + 0x78) = 0;
      uVar5 = nameentry_sub_002f8ab0();
      if ((uVar5 & 0x180) != 0) {
        *(undefined4 *)(iVar8 + 0x54) = *(undefined4 *)(iVar8 + 0x60);
        *(undefined4 *)(iVar8 + 0x5c) = 0xffffffff;
        Se_PlayMenuVol(5,0x60);
      }
    }
    else {
      *(undefined4 *)(iVar8 + 0x74) = 0xfffffffe;
      *(undefined4 *)(iVar8 + 0x78) = 0;
      uVar5 = nameentry_sub_002f8ab0();
      if ((uVar5 & 0x180) != 0) {
        Se_PlayMenuVol(8,0x60);
      }
    }
  }
  else {
    *(undefined1 *)(iVar8 + 100) = 6;
    cVar1 = nameentry_sub_002f8ce0(param_1,*(undefined1 *)(iVar8 + 100));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar8 + 0x74) = 6;
      *(undefined4 *)(iVar8 + 0x78) = 0xfffffffe;
      uVar5 = nameentry_sub_002f8ab0();
      if ((uVar5 & 0x180) != 0) {
        iVar2 = maybe_Race_GetMode();
        iVar6 = *(int *)(iVar8 + 0x60);
        bVar7 = false;
        if ((-1 < *(int *)(iVar8 + 0x54)) && (*(int *)(iVar8 + 0x54) < 0xc)) {
          bVar7 = true;
        }
        if (bVar7) {
          iVar3 = script_sub_002b9420(*(undefined4 *)(iVar8 + 0x20));
        }
        else {
          iVar3 = maybe_Race_GetMode();
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
    uVar5 = nameentry_sub_002f8ab0();
    if ((uVar5 & 0x240) != 0) {
      *(undefined4 *)(iVar8 + 0x54) = 0xffffffff;
      Se_PlayMenuVol(6,0x60);
    }
  }
  return;
}

// 0x002f96c0  size 0xc0
void nameentry_sub_002f96c0(int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = nameentry_sub_002f81e0();
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x78) = 4;
    *(undefined4 *)(param_1 + 0x6c) = 1;
  }
  nameentry_sub_002f6190(param_1 + 0x6c,0,1,1,0);
  if (*(int *)(param_1 + 0x6c) == 0) {
    *(undefined4 *)(param_1 + 0x74) = 3;
    uVar3 = nameentry_sub_002f8ab0();
    if ((uVar3 & 0x180) != 0) {
      iVar1 = maybe_Race_GetMode();
      maybe_strncpy(iVar1 + (*(int *)(param_1 + 0x60) + -0xc) * 0x858 + 0x876,param_1 + 0x3c,0x10);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = 4;
  }
  return;
}

// 0x002f9780  size 0x194
void nameentry_sub_002f9780(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = nameentry_sub_002f81e0();
  iVar4 = (int)param_1;
  if (lVar1 != 0) {
    *(undefined4 *)(iVar4 + 0x74) = 0xfffffffe;
    *(undefined4 *)(iVar4 + 0x78) = 0xfffffffe;
    lVar1 = nameentry_sub_002f8210(param_1);
    if (lVar1 != 5) {
      uVar3 = script_sub_002b8e60(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x60));
      nameentry_sub_002f7430(iVar4 + 0x30,uVar3);
    }
  }
  lVar1 = nameentry_sub_002f7190(iVar4 + 0x30);
  if (lVar1 == 2) {
    *(undefined4 *)(iVar4 + 0x74) = 3;
    *(undefined4 *)(iVar4 + 0x78) = 3;
  }
  else if (lVar1 == 1) {
    iVar5 = 0;
    do {
      if ((iVar5 != *(int *)(iVar4 + 0x60)) && (lVar1 = script_sub_002bc1a0(iVar5), lVar1 != 0)) {
        uVar3 = script_sub_002b8e60(*(undefined4 *)(iVar4 + 0x20),iVar5);
        lVar1 = newlib_sub_0012b0d8(iVar4 + 0x3c,uVar3);
        if (lVar1 == 0) {
          *(undefined4 *)(iVar4 + 0x74) = 5;
          return;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1e);
    iVar5 = maybe_Race_GetMode();
    maybe_strncpy(iVar5 + (*(int *)(iVar4 + 0x60) + -0xc) * 0x858 + 0x876,iVar4 + 0x3c,0x10);
    *(undefined4 *)(iVar4 + 0x74) = 3;
  }
  else {
    uVar2 = nameentry_sub_002f8ab0();
    if ((uVar2 & 0x180) == 0) {
      uVar2 = nameentry_sub_002f8ab0();
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
void nameentry_sub_002f9920(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  lVar5 = nameentry_sub_002f81e0();
  iVar7 = (int)param_1;
  if (lVar5 != 0) {
    *(undefined4 *)(iVar7 + 0x74) = 4;
    *(undefined4 *)(iVar7 + 0x78) = 0;
    *(undefined1 *)(iVar7 + 100) = 4;
  }
  nameentry_sub_002f6190(iVar7 + 0x60,0,0x1d,1,0);
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
  uVar6 = nameentry_sub_002f8ab0();
  if ((uVar6 & 0x800) != 0) {
    lVar5 = script_sub_002bc1a0(*(undefined4 *)(iVar7 + 0x60));
    if (lVar5 == 0) {
      Se_PlayMenuVol(8,0x60);
      uVar1 = *(undefined1 *)(iVar7 + 100);
      goto LAB_002f99e4;
    }
    if (*(int *)(iVar7 + 0x60) == *(int *)(iVar7 + 0x70)) {
      nameentry_sub_002f7f80(iVar7 + 0x24);
      *(undefined4 *)(iVar7 + 0x70) = 0xffffffff;
      *(undefined1 *)(iVar7 + 0x4c) = 0;
    }
    else {
      nameentry_sub_002f8220(param_1,10);
    }
  }
  uVar1 = *(undefined1 *)(iVar7 + 100);
LAB_002f99e4:
  cVar4 = nameentry_sub_002f8ce0(param_1,uVar1);
  if (cVar4 == '\x05') {
    *(undefined4 *)(iVar7 + 0x74) = 0xfffffffe;
    uVar6 = nameentry_sub_002f8ab0();
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
void nameentry_sub_002f9ac0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_860 [2144];
  
  lVar3 = nameentry_sub_002f81e0();
  iVar6 = (int)param_1;
  if (((lVar3 != 0) && (lVar3 = nameentry_sub_002f8210(param_1), lVar3 != 9)) &&
     (lVar3 = nameentry_sub_002f8210(param_1), lVar3 != 10)) {
    *(undefined4 *)(iVar6 + 0x54) = 0xffffffff;
  }
  nameentry_sub_002f6190(iVar6 + 0x60,0,0x1d,1,0);
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
  uVar4 = nameentry_sub_002f8ab0();
  if ((uVar4 & 0x800) != 0) {
    lVar3 = script_sub_002bc1a0(*(undefined4 *)(iVar6 + 0x60));
    if (lVar3 == 0) {
      Se_PlayMenuVol(8,0x60);
    }
    else {
      if (*(int *)(iVar6 + 0x60) != *(int *)(iVar6 + 0x70)) {
        nameentry_sub_002f8220(param_1,10);
        iVar2 = *(int *)(iVar6 + 0x54);
        goto LAB_002f9b90;
      }
      nameentry_sub_002f7f80(iVar6 + 0x24);
      *(undefined4 *)(iVar6 + 0x70) = 0xffffffff;
      *(undefined1 *)(iVar6 + 0x4c) = 0;
    }
  }
  iVar2 = *(int *)(iVar6 + 0x54);
LAB_002f9b90:
  if (iVar2 == -1) {
    *(undefined1 *)(iVar6 + 100) = 2;
    cVar1 = nameentry_sub_002f8ce0(param_1,*(undefined1 *)(iVar6 + 100));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar6 + 0x74) = 0xfffffffe;
      *(undefined4 *)(iVar6 + 0x78) = 0;
      uVar4 = nameentry_sub_002f8ab0();
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
    cVar1 = nameentry_sub_002f8ce0(param_1,*(undefined1 *)(iVar6 + 100));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar6 + 0x74) = 2;
      *(undefined4 *)(iVar6 + 0x78) = 0xfffffffe;
      uVar4 = nameentry_sub_002f8ab0();
      if ((uVar4 & 0x180) != 0) {
        iVar2 = maybe_Race_GetMode();
        iVar5 = iVar2 + (*(int *)(iVar6 + 0x54) + -0xc) * 0x858 + 0x30;
        iVar2 = maybe_Race_GetMode();
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
    uVar4 = nameentry_sub_002f8ab0();
    if ((uVar4 & 0x240) != 0) {
      *(undefined4 *)(iVar6 + 0x54) = 0xffffffff;
      Se_PlayMenuVol(6,0x60);
    }
  }
  return;
}

// 0x002f9dc0  size 0x134
void nameentry_sub_002f9dc0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  lVar4 = nameentry_sub_002f81e0();
  iVar6 = (int)param_1;
  if (lVar4 != 0) {
    *(undefined4 *)(iVar6 + 0x74) = 0xfffffffe;
    *(undefined4 *)(iVar6 + 0x78) = 0;
    *(undefined1 *)(iVar6 + 100) = 1;
  }
  nameentry_sub_002f6190(iVar6 + 0x60,0,0x1d,1,0);
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
  uVar5 = nameentry_sub_002f8ab0();
  if ((uVar5 & 0x980) != 0) {
    cVar3 = nameentry_sub_002f8ce0(param_1,*(undefined1 *)(iVar6 + 100));
    if (cVar3 == '\0') {
      if (*(int *)(iVar6 + 0x60) == *(int *)(iVar6 + 0x70)) {
        nameentry_sub_002f7f80(iVar6 + 0x24);
        *(undefined4 *)(iVar6 + 0x70) = 0xffffffff;
        *(undefined1 *)(iVar6 + 0x4c) = 0;
      }
      else {
        nameentry_sub_002f8220(param_1,10);
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
void nameentry_sub_002f9f00(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = nameentry_sub_002f81e0();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0xfffffffe;
    *(undefined1 *)(param_1 + 100) = 0;
  }
  nameentry_sub_002f6190(param_1 + 0x50,0,5,1,0);
  switch(*(undefined4 *)(param_1 + 0x50)) {
  case 0:
    uVar2 = nameentry_sub_002f7c60(param_1 + 0x24);
    if ((uVar2 & 0x80) == 0) {
      *(undefined4 *)(param_1 + 0x74) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x74) = 0;
      uVar2 = nameentry_sub_002f8ab0();
      if ((uVar2 & 0x180) != 0) {
        nameentry_sub_002f7f80(param_1 + 0x24);
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
  uVar2 = nameentry_sub_002f8ab0();
  if ((uVar2 & 0x800) != 0) {
    nameentry_sub_002f7f80(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  uVar2 = nameentry_sub_002f8ab0();
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
void attract_sub_002fa080(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = nameentry_sub_002f80a0();
  if (lVar3 != 0) {
    iVar2 = nameentry_sub_002f8200(param_1);
    (*(code *)(&PTR_nameentry_sub_002f9f00_00343580)[iVar2])(param_1);
    uVar4 = nameentry_sub_002f8ab0();
    iVar2 = (int)param_1;
    if ((uVar4 & 0x240) == 0) {
      uVar4 = nameentry_sub_002f8ab0();
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
            nameentry_sub_002f7f80(iVar2 + 0x24);
            *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
            *(undefined1 *)(iVar2 + 0x4c) = 0;
            nameentry_sub_002f8580(0);
          }
        }
        else {
          nameentry_sub_002f8220(param_1);
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
          nameentry_sub_002f7f80(iVar2 + 0x24);
          *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
          *(undefined1 *)(iVar2 + 0x4c) = 0;
          nameentry_sub_002f8580(0);
        }
      }
      else {
        nameentry_sub_002f8220(param_1);
      }
    }
  }
  return;
}

// 0x002fa2c0  size 0xd8
void attract_sub_002fa2c0(undefined8 param_1,long param_2)

{
  if (param_2 < 0) {
    switch((int)param_2) {
    case -8:
      break;
    case -7:
      nameentry_sub_002f8580(0xfffffffffffffffd);
      break;
    case -6:
      nameentry_sub_002f8580(0xfffffffffffffffe);
      break;
    case -5:
      nameentry_sub_002f8580(0xffffffffffffffff);
      break;
    case -4:
      nameentry_sub_002f8580(1);
      break;
    case -3:
      nameentry_sub_002f8580(2);
      break;
    case -2:
      nameentry_sub_002f8320(0);
      nameentry_sub_002f8580(3);
      break;
    case -1:
      nameentry_sub_002f8320(1);
      nameentry_sub_002f8580(3);
      break;
    default:
      goto switchD_002fa2f4_default;
    }
  }
  else {
    nameentry_sub_002f8220();
  }
switchD_002fa2f4_default:
  return;
}

// 0x002fa3a0  size 0x70
void attract_sub_002fa3a0(int param_1)

{
  long lVar1;
  
  lVar1 = nameentry_sub_002f81e0();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  nameentry_sub_002f6190(param_1 + 0x24,0,1,1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffffa;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffff9;
  }
  return;
}

// 0x002fa410  size 0x68
void attract_sub_002fa410(int param_1)

{
  long lVar1;
  
  lVar1 = nameentry_sub_002f81e0();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  nameentry_sub_002f6190(param_1 + 0x24,0,1,1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

// 0x002fa480  size 0x6c
void attract_sub_002fa480(int param_1)

{
  long lVar1;
  
  lVar1 = nameentry_sub_002f81e0();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  nameentry_sub_002f6190(param_1 + 0x24,0,1,1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  return;
}

// 0x002fa4f0  size 0xfc
void attract_sub_002fa4f0(int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = nameentry_sub_002f81e0();
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0xfffffff8;
  }
  nameentry_sub_002f6190(param_1 + 0x20,0,4,1,0);
  uVar3 = nameentry_sub_002f8ab0();
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
void attract_sub_002fa5f0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = nameentry_sub_002f80a0();
  if (lVar2 != 0) {
    nameentry_sub_002f8ac0();
    iVar1 = nameentry_sub_002f8200(param_1);
    (*(code *)(&PTR_attract_sub_002fa4f0_003435b0)[iVar1])(param_1);
    uVar3 = nameentry_sub_002f8ab0();
    iVar1 = (int)param_1;
    if ((uVar3 & 0x180) == 0) {
      uVar3 = nameentry_sub_002f8ab0();
      if ((uVar3 & 0x240) != 0) {
        if (*(int *)(iVar1 + 0x2c) != -8) {
          Se_PlayMenuVol(6,0x60);
        }
        attract_sub_002fa2c0(param_1,*(undefined4 *)(iVar1 + 0x2c));
      }
    }
    else {
      if (*(int *)(iVar1 + 0x28) != -8) {
        Se_PlayMenuVol(5,0x60);
      }
      attract_sub_002fa2c0(param_1,*(undefined4 *)(iVar1 + 0x28));
    }
  }
  return;
}

// 0x002fa6e0  size 0x44
void attract_sub_002fa6e0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  nameentry_sub_002f8230(param_1,0);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  lVar1 = nameentry_sub_002f8560();
  if (lVar1 < 0) {
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  return;
}

// 0x002fa730  size 0x1e8
void attract_sub_002fa730(int param_1)

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
  fVar1 = (float)cosf((float)(uint)((iRam0036f0cc << 1) % 0xb4) * 0.017453292);
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
void attract_sub_002fa920(void)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_d0 [208];
  
  cVar2 = *(char *)((int)register0x000001c0 + uGpffff9280 + -0x77e0);
  if ((cVar2 == '\a') || (cVar2 == '\x04')) {
    uVar3 = *(undefined1 *)((int)register0x000001c0 + (int)uGpffff88a4 % 7 + -0x77d8);
  }
  else {
    uVar3 = *(undefined1 *)((int)register0x000001c0 + (int)uGpffff88a4 % 7 + -0x77d0);
  }
  uGpffff9280 = uGpffff9280 + 1 & 7;
  iVar6 = 0;
  uVar4 = uGpffff88a4 / 7;
  uVar7 = uGpffff88a4;
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
  } while ((long)iGpffff9284 == (long)(&DAT_00318080)[iVar1]);
  iGpffff9284 = (int)(&DAT_00318080)[iVar1];
  CarRec_ResetColors(auStack_d0);
  iVar6 = CarDb_GetModelEntry(iGpffff9284);
  CarRec_Build(auStack_d0,(undefined2)iGpffff9284,(short)((int)uVar7 % iVar6),1,0);
  RaceCtx_SetMode(6);
  RaceSetup_FromQuickRace(0xf,1,cVar2,uVar3,uVar4 & 1,1,auStack_d0,0);
  return;
}

// 0x002faab0  size 0x4e4
void attract_sub_002faab0(int param_1)

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
  uVar11 = piGpffff8d78[2];
  bVar3 = false;
  if ((piGpffff8d78[4] & uVar11) == 0) {
    uVar11 = 0;
  }
  else if (uVar11 == 0x80000) {
    uVar11 = 0;
  }
  else if (*piGpffff8d78 != 1) {
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
    Sema_Wait((int)register0x000001c0 + -0x7730);
    iVar8 = iRam00386628;
    Sema_Signal((int)register0x000001c0 + -0x7730,0);
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
      attract_sub_002fa920();
      uVar6 = uRam004305f4;
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
    attract_sub_002fa730(piVar2);
  }
  if (bVar3) {
    Scene_RequestExit();
  }
  if (bVar5) {
    uGpffff8bc4 = 0xd;
    Scene_SetParam(0);
  }
  return;
}

// 0x002fafa0  size 0x40
void attract_sub_002fafa0(int param_1)

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
void attract_sub_002fafe0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  MenuWnd_Alloc(0x430750,1);
  *puVar1 = 0;
  puVar1[3] = 0;
  Scene_RequestExit();
  *(code **)(param_1 + 0x1c) = attract_sub_002faab0;
  return;
}

// 0x002fb040  size 0x338
void attract_sub_002fb040(int *param_1)

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
  
  piVar1 = *(int **)(iGpffff8b0c + 0x14);
  if (iRam0046a594 == 0) {
    Scene_SetParam(0);
    uRam0046a590 = 0;
    RaceScene_SetFlags(0x80000);
    RaceScene_SetFlags(2);
    race_sub_001e90d0();
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
    uVar4 = piGpffff8d78[2];
    if ((piGpffff8d78[4] & uVar4) == 0) {
      uVar4 = 0x100000;
    }
    else if (uVar4 == 0x80000) {
      uVar4 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
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
    attract_sub_002fb8e0(&uStack_20);
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    uStack_8 = uStack_18;
    lVar2 = misc_sub_002fd0c0();
    if (lVar2 == 4) {
      attract_sub_002fb410(uStack_c,piVar1[4],0x1920,0x1921);
    }
    else {
      lVar2 = misc_sub_002fd0c0();
      if (lVar2 == 5) {
        attract_sub_002fb410(uStack_10,piVar1[4],0x1922,0x1923);
        attract_sub_002fb410(uStack_c,piVar1[4],0x191e,0x191f);
        attract_sub_002fb410(uStack_8,piVar1[4],0x1924,0x1925);
      }
      else {
        attract_sub_002fb410(uStack_10,piVar1[4],0x1922,0x1923);
        attract_sub_002fb410(uStack_c,piVar1[4],0x191e,0x191f);
      }
    }
  }
  return;
}

// 0x002fb3a0  size 0x6c
void attract_sub_002fb3a0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  uRam0046a598 = 1;
  uRam0046a59c = 0;
  uRam0046a590 = misc_sub_002fd0c0();
  uRam0046a594 = 1;
  RaceScene_SetFlags(0x100);
  *(undefined1 **)(param_1 + 0x1c) = &LAB_002fb380;
  return;
}

// 0x002fb410  size 0x18c
void attract_sub_002fb410(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = (int)param_1;
    if (param_2 == 0x2fc) {
      uVar1 = replayui_sub_002d9780(param_3);
      *(undefined4 *)(iVar2 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x31c) = 0;
      *(undefined4 *)(iVar2 + 0x30c) = 0;
      if (*(int *)(iVar2 + 0x31c) == 0) {
        *(undefined4 *)(iVar2 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x318) = 1;
      }
      *(undefined4 *)(iVar2 + 0x30c) = 0;
      if (*(int *)(iVar2 + 0x31c) == 0) {
        *(undefined4 *)(iVar2 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x318) = 1;
      }
      *(undefined4 *)(iVar2 + 0x314) = 0;
      *(undefined4 *)(iVar2 + 0x31c) = uVar1;
      *(undefined4 *)(iVar2 + 0x318) = 1;
      *(undefined4 *)(iVar2 + 0x30c) = 0;
      if (*(int *)(iVar2 + 0x31c) == 0) {
        *(undefined4 *)(iVar2 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x318) = 1;
      }
    }
    if (param_2 == 0x3c4) {
      uVar1 = replayui_sub_002d9780(param_4);
      *(undefined4 *)(iVar2 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x31c) = 0;
      *(undefined4 *)(iVar2 + 0x30c) = 0;
      if (*(int *)(iVar2 + 0x31c) == 0) {
        *(undefined4 *)(iVar2 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x318) = 1;
      }
      *(undefined4 *)(iVar2 + 0x30c) = 0;
      if (*(int *)(iVar2 + 0x31c) == 0) {
        *(undefined4 *)(iVar2 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x318) = 1;
      }
      *(undefined4 *)(iVar2 + 0x314) = 0;
      *(undefined4 *)(iVar2 + 0x31c) = uVar1;
      *(undefined4 *)(iVar2 + 0x318) = 1;
      *(undefined4 *)(iVar2 + 0x30c) = 0;
      if (*(int *)(iVar2 + 0x31c) == 0) {
        *(undefined4 *)(iVar2 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x318) = 1;
      }
    }
    if (*(int *)(iVar2 + 0x318) != 0) {
      UiLayout_UpdateAnim(param_1,0);
    }
    UiLayout_Draw(0x3f800000,param_1);
  }
  return;
}

// 0x002fb5a0  size 0x33c
undefined ** attract_sub_002fb5a0(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 auStack_190 [80];
  undefined1 auStack_140 [80];
  undefined1 auStack_f0 [80];
  undefined1 auStack_a0 [80];
  undefined1 auStack_50 [80];
  
  ppuVar2 = (undefined **)0x0;
  uVar1 = misc_sub_002fd0c0();
  switch(uVar1) {
  case 1:
    GameState_LoadHeader(auStack_a0);
    switch(auStack_a0[0]) {
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
    break;
  case 2:
  case 3:
  case 6:
    GameState_LoadHeader(auStack_140);
    switch(auStack_140[0]) {
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
    break;
  case 4:
    GameState_LoadHeader(auStack_50);
    switch(auStack_50[0]) {
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
    break;
  case 5:
    GameState_LoadHeader(auStack_f0);
    switch(auStack_f0[0]) {
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
    break;
  case 7:
    GameState_LoadHeader(auStack_190);
    switch(auStack_190[0]) {
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
    break;
  case 8:
    ppuVar2 = &PTR_DAT_0035d210;
  }
  return ppuVar2;
}

// 0x002fb8e0  size 0x130
void attract_sub_002fb8e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  piVar2 = (int *)0xc;
  piVar5 = &iStack_10;
  piVar1 = piVar5;
  while (piVar1 != (int *)0x0) {
    *(undefined1 *)piVar5 = 0;
    piVar5 = (int *)((int)piVar5 + 1);
    piVar2 = (int *)((int)piVar2 + -1);
    piVar1 = piVar2;
  }
  lVar4 = misc_sub_002fd0c0();
  if (lVar4 == 0) {
    *param_1 = iStack_10;
    param_1[1] = iStack_c;
    param_1[2] = iStack_8;
  }
  else {
    iVar3 = UiMgr_FindLayout(0x28);
    iStack_c = *piGpffff8d3c + iVar3 * 0x4f4 + 4;
    lVar4 = misc_sub_002fd0c0();
    if (lVar4 == 4) {
      iStack_10 = 0;
    }
    else {
      iVar3 = UiMgr_FindLayout(0x27);
      iStack_10 = *piGpffff8d3c + iVar3 * 0x4f4 + 4;
    }
    lVar4 = misc_sub_002fd0c0();
    if (lVar4 == 5) {
      iVar3 = UiMgr_FindLayout(0x29);
      iStack_8 = *piGpffff8d3c + iVar3 * 0x4f4 + 4;
    }
    else {
      iStack_8 = 0;
    }
    *param_1 = iStack_10;
    param_1[1] = iStack_c;
    param_1[2] = iStack_8;
  }
  return;
}

// 0x002fba10  size 0x1670
void attract_sub_002fba10(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  
  uVar1 = misc_sub_002fd0c0();
  switch(uVar1) {
  default:
    puStack_c = (undefined *)0x0;
    break;
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
  lVar2 = misc_sub_002fd0c0();
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

