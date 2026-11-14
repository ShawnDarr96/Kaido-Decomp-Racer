// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00268000 - 0x0026c000
#include "ghidra_types.h"

// 0x00268000  size 0x9c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_step_sub_00268000(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Msg_Get(0x3e);
  iVar2 = UiMgr_FindLayout(0x12);
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
  return;
}

// 0x002680c0  size 0x1d8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_draw_sub_002680c0(int param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = UiLayout_UpdateAnimById(0xb9,0);
  lVar4 = UiLayout_UpdateAnimById(0xb9,1);
  if (lVar3 == 0 && lVar4 == 0) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(_g_MenuMgr + 0x28);
  if ((((uVar1 & 4) == 0) && (lVar3 == 0 && lVar4 == 0)) && ((uVar1 & 1) == 0)) {
    *(uint *)(_g_MenuMgr + 0x28) = uVar1 | 0x800;
  }
  MenuWnd_DrawText(0xb9,0x32,0x1e80);
  MenuWnd_DrawText(0xb9,0x31,0x1e81);
  MenuWnd_DrawText(0xb9,0x30,0x1e82);
  MenuWnd_DrawText(0xb8,0x1b,*(undefined4 *)(&DAT_0032d760 + *(int *)(param_1 + 0x20) * 4));
  MenuWnd_SetItemState(0xb9,*(undefined4 *)(&DAT_0032d750 + *(int *)(param_1 + 0x20) * 4),1,0);
  UiLayout_UpdateAnimById(0xb4,0);
  iVar2 = UiMgr_FindLayout(0xb4);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0xb8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0xb9);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x002682a0  size 0x1b4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_step_sub_002682a0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Msg_Get(0x226);
  iVar2 = UiMgr_FindLayout(0xb4);
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
  uVar1 = Msg_Get(0x21f);
  iVar2 = UiMgr_FindLayout(0xb9);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  uVar1 = Msg_Get(0x220);
  iVar2 = UiMgr_FindLayout(0xb9);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 0x334) == 0) {
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
  }
  Menu_ClearSlot(0);
  return;
}

// 0x00268460  size 0x60c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_draw_sub_00268460(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined1 auStack_8 [3];
  undefined1 uStack_5;
  undefined1 uStack_4;
  undefined1 uStack_3;
  
  MenuWnd_DrawLabel(0xe,0x96,0x3b,*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 0x20));
  MenuWnd_DrawText(0xe,0x97,0xfe);
  iVar17 = 0;
  puVar14 = &DAT_0032d7e0;
  iVar16 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x18);
  do {
    if (iVar17 == 7) {
      iVar16 = *(int *)(param_1 + 0x24);
    }
    if (iVar16 < 0) {
      return;
    }
    if (*(int *)(param_1 + 0x20) <= iVar16) {
      return;
    }
    iVar7 = Profile_Get(*(undefined4 *)(param_1 + 0x10));
    uVar1 = *(undefined2 *)(iVar7 + iVar16 * 2 + 0x13ee);
    uVar12 = Profile_Get(*(undefined4 *)(param_1 + 0x10));
    uVar12 = Profile_GetCarRecordB(uVar12,uVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = MenuText_CarNameOrMaker(iVar16,uVar2);
    uVar9 = MenuText_CarGrade(iVar16,uVar2);
    uVar10 = MenuText_CarShortName(iVar16,uVar2);
    puVar15 = (undefined2 *)uVar12;
    fVar18 = *(float *)(puVar15 + 8);
    uVar3 = *(undefined4 *)(puVar15 + 6);
    uVar1 = *puVar15;
    iVar7 = CarDb_GetModel(uVar1);
    uVar13 = *(uint *)(iVar7 + 0x84);
    bVar4 = *(int *)(param_1 + 4) == iVar16;
    cVar5 = MenuText_CarName(iVar16,uVar2);
    sVar6 = CarRec_GetVariant(uVar12);
    iVar16 = iVar16 + 1;
    MenuWnd_DrawText(0xe,*puVar14,uVar8);
    MenuWnd_DrawText(0xe,puVar14[1],uVar9);
    MenuWnd_DrawText(0xe,puVar14[2],uVar10);
    MenuWnd_DrawLabel(0xe,puVar14[3],0x47,uVar3,(int)fVar18 / 100);
    MenuWnd_DrawNumber(0xe,puVar14[4],uVar13 / 1000);
    if (bVar4) {
      if ((*(int *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x38) == 0)) {
        iVar7 = UiMgr_FindLayout(0xe);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[5],8);
      }
    }
    else {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[5],8);
    }
    if (cVar5 == '\x04') {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropInt(*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[6],0x16,7);
    }
    else if (cVar5 == '\x03') {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropInt(*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[6],0x16,3);
    }
    else if (cVar5 == '\x02') {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropInt(*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[6],0x16,6);
    }
    else if (cVar5 == '\x01') {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropInt(*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[6],0x16,5);
    }
    else if (cVar5 == '\0') {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropInt(*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[6],0x16,4);
    }
    if (sVar6 == -1) {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[8],8);
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[7],8);
    }
    else {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[8],8);
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[7],8);
      if ((-1 < sVar6) && (sVar6 < 0x1e)) {
        CarDb_GetPartEntry(auStack_8,uVar1,sVar6,0);
      }
      if ((sVar6 < 0x1e) || (0x2bd < sVar6)) {
        if ((0x2bd < sVar6) && (sVar6 < 0x55e)) {
          iVar7 = (int)sVar6;
          uVar13 = iVar7 - 0x2beU & 0xf;
          if (((int)(iVar7 - 0x2beU) < 0) && (uVar13 != 0)) {
            uVar13 = uVar13 - 0x10;
          }
          iVar11 = iVar7 + -0x2be;
          if (iVar11 < 0) {
            iVar11 = iVar7 + -0x2af;
          }
          CarPreview_GetPaletteColor(auStack_8,uVar13,iVar11 >> 4);
        }
      }
      else {
        iVar7 = (int)sVar6;
        uVar13 = iVar7 - 0x1eU & 0xf;
        if (((int)(iVar7 - 0x1eU) < 0) && (uVar13 != 0)) {
          uVar13 = uVar13 - 0x10;
        }
        iVar11 = iVar7 + -0x1e;
        if (iVar11 < 0) {
          iVar11 = iVar7 + -0xf;
        }
        CarPreview_GetColor(auStack_8,uVar13,iVar11 >> 4);
      }
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_Get(*_g_UiMgr + iVar7 * 0x4f4 + 4,puVar14[7],uStack_5,uStack_4,uStack_3);
    }
    iVar17 = iVar17 + 1;
    puVar14 = puVar14 + 9;
  } while (iVar17 < 8);
  return;
}

// 0x00268a70  size 0x118
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_draw_sub_00268a70(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0x3c);
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x161,0xffffffffffffffff,0);
  if (*(int *)(iVar5 + 0x40) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    lVar3 = UiLayout_UpdateAnimById(0xf,2);
    lVar4 = UiLayout_UpdateAnimById(0xf,3);
    if ((lVar3 == 0 && lVar4 == 0) && (lVar2 == 3)) {
      *(undefined4 *)(iVar5 + 0x40) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar5 + 0x38) = 0;
  }
  scrgarage_draw_sub_00268460(param_1);
  UiLayout_UpdateAnimById(0xe,6);
  iVar1 = UiMgr_FindLayout(0xe);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00268b90  size 0xf8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_draw_sub_00268b90(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  iVar1 = puVar3[0xf];
  puVar3[0xf] = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*puVar3,0x36ed18);
  MenuWnd_DrawLabel(5,0x1c,0x160);
  if (puVar3[0x10] != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      puVar3[0x10] = 0;
    }
  }
  if (lVar2 == 2) {
    puVar3[0xe] = 0;
  }
  scrgarage_draw_sub_00268460(param_1);
  UiLayout_UpdateAnimById(0xe,6);
  iVar1 = UiMgr_FindLayout(0xe);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00268c90  size 0x2a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_draw_sub_00268c90(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x3c);
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  if (iVar1 != 0) {
    uVar2 = Msg_Get(0x25d);
    iVar1 = UiMgr_FindLayout(0xf);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar1 + 800) = 0;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x318) = 0;
    *(undefined4 *)(iVar1 + 800) = uVar2;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar2 = Msg_Get(0x25e);
    iVar1 = UiMgr_FindLayout(0xf);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x32c) = 0;
    *(undefined4 *)(iVar1 + 0x334) = uVar2;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    Menu_ClearSlot(0);
  }
  lVar3 = UiLayout_UpdateAnimById(0xf,0);
  if (lVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x38) = 0;
  }
  if ((*(int *)(iVar4 + 0x40) != 0) && (lVar3 = UiLayout_UpdateAnimById(0xf), lVar3 == 0)) {
    *(undefined4 *)(iVar4 + 0x40) = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0xf,*(undefined4 *)(&DAT_0032d7c0 + *(int *)(iVar4 + 8) * 4),1,0);
  }
  MenuWnd_DrawText(0xf,0x36,0x163);
  MenuWnd_DrawText(0xf,0x37,0x164);
  MenuWnd_DrawText(0xf,0x38,0x165);
  MenuWnd_DrawText(0xf,0x39,0x166);
  MenuWnd_DrawText(0xf,0x3a,0x167);
  MenuWnd_DrawText(0xf,0x3b,0x168);
  MenuWnd_DrawText(0xf,0x3c,0x169);
  scrgarage_draw_sub_00268460(param_1);
  UiLayout_UpdateAnimById(0xe,6);
  iVar1 = UiMgr_FindLayout(0xe);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xf);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00268f40  size 0x790
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_draw_sub_00268f40(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  
  iVar2 = (int)param_1;
  iVar4 = *(int *)(iVar2 + 0x3c);
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar2 + 0x20);
  }
  else {
    uVar3 = Msg_Get(600);
    iVar4 = UiMgr_FindLayout(0xe);
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
    uVar3 = Msg_Get(0x259);
    iVar4 = UiMgr_FindLayout(0xe);
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
    *(undefined4 *)(iVar4 + 0x35c) = uVar3;
    *(undefined4 *)(iVar4 + 0x358) = 1;
    uVar3 = Msg_Get(0x25a);
    iVar4 = UiMgr_FindLayout(0xe);
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
    *(undefined4 *)(iVar4 + 0x368) = 0;
    *(undefined4 *)(iVar4 + 0x370) = uVar3;
    *(undefined4 *)(iVar4 + 0x36c) = 1;
    uVar3 = Msg_Get(0x25b);
    iVar4 = UiMgr_FindLayout(0xe);
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
    *(undefined4 *)(iVar4 + 0x37c) = 0;
    *(undefined4 *)(iVar4 + 900) = uVar3;
    *(undefined4 *)(iVar4 + 0x380) = 1;
    uVar3 = Msg_Get(0x25c);
    iVar4 = UiMgr_FindLayout(0xe);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x398) = 0;
    *(undefined4 *)(iVar4 + 0x388) = 0;
    if (*(int *)(iVar4 + 0x398) == 0) {
      *(undefined4 *)(iVar4 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x394) = 1;
    }
    *(undefined4 *)(iVar4 + 0x388) = 0;
    if (*(int *)(iVar4 + 0x398) == 0) {
      *(undefined4 *)(iVar4 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x394) = 1;
    }
    *(undefined4 *)(iVar4 + 0x390) = 1;
    *(undefined4 *)(iVar4 + 0x398) = uVar3;
    *(undefined4 *)(iVar4 + 0x394) = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xe,0x36ed10,2,0);
    iVar4 = *(int *)(iVar2 + 0x20);
  }
  MenuWnd_DrawCursor(7 < iVar4);
  lVar5 = UiLayout_UpdateAnimById(0xe,0);
  lVar6 = UiLayout_UpdateAnimById(0xe,1);
  if (lVar5 == 0 && lVar6 == 0) {
    *(undefined4 *)(iVar2 + 0x38) = 0;
  }
  if (*(int *)(iVar2 + 0x40) != 0) {
    MenuWnd_DrawCursor(0);
    MenuWnd_SetItemVisible(0);
    if (*(int *)(_g_MenuMgr + 0x1c) == *(int *)(_g_MenuMgr + 0x20)) {
      *(undefined4 *)(iVar2 + 0x40) = 0;
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0xe,2);
      lVar6 = UiLayout_UpdateAnimById(0xe,3);
      if (lVar5 == 0 && lVar6 == 0) {
        *(undefined4 *)(iVar2 + 0x40) = 0;
      }
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0xe,*(undefined4 *)(&DAT_0032d780 + *(int *)(iVar2 + 0x18) * 4),1,0);
    iVar4 = *(int *)(iVar2 + 0x1c);
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x1c);
  }
  if (iVar4 == 2) {
    Menu_ClearSlot(0);
    lVar5 = UiLayout_UpdateAnimById(0xe,5);
    if (lVar5 == 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      iVar4 = UiMgr_FindLayout(0xe);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x374) = 0;
      if (*(int *)(iVar4 + 900) == 0) {
        *(undefined4 *)(iVar4 + 0x380) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x380) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      *(int *)(iVar2 + 0x24) =
           (*(int *)(iVar2 + 0x20) + (*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 0x18)) + 7) %
           *(int *)(iVar2 + 0x20);
    }
  }
  else if (iVar4 == 1) {
    lVar5 = UiLayout_UpdateAnimById(0xe,4);
    if (lVar5 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      iVar4 = UiMgr_FindLayout(0xe);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x360) = 0;
      if (*(int *)(iVar4 + 0x370) == 0) {
        *(undefined4 *)(iVar4 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x36c) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      *(int *)(iVar2 + 0x24) =
           (*(int *)(iVar2 + 0x20) + (*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 0x18)) + -1) %
           *(int *)(iVar2 + 0x20);
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x24) = 0xffffffff;
  }
  if (*(int *)(iVar2 + 0x20) == (*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 0x18)) + 7) {
    iVar4 = UiMgr_FindLayout(0xe);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0xcb,8);
    iVar4 = *(int *)(iVar2 + 0xc);
  }
  else {
    iVar4 = *(int *)(iVar2 + 0xc);
  }
  if (iVar4 == *(int *)(iVar2 + 0x18)) {
    iVar4 = UiMgr_FindLayout(0xe);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0xca,8);
  }
  scrgarage_draw_sub_00268460(param_1);
  iVar1 = UiMgr_FindLayout(0xe);
  iVar4 = *(int *)(iVar2 + 0x20);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  if (iVar4 < 8) {
    UiElem_SetPropFloat(0x41800000,iVar1,3,2);
    UiElem_SetPropFloat(0x41880000,iVar1,3,6);
  }
  else {
    UiElem_SetPropFloat((float)(*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 0x18)) *
                        (272.0 / (float)iVar4) + 16.0,iVar1,3,2);
    UiElem_SetPropFloat((7.0 / (float)iVar4) * 17.0,iVar1,3,6);
  }
  iVar4 = UiMgr_FindLayout(0xe);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,4,8);
  iVar4 = *(int *)(iVar2 + 0x20);
  if (iVar4 < 7) {
    puVar7 = (undefined4 *)(&DAT_0032d7a0 + iVar4 * 4);
    do {
      iVar2 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar7,8);
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar4 < 7);
  }
  UiLayout_UpdateAnimById(0xe,6);
  iVar4 = UiMgr_FindLayout(0xe);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  return;
}

// 0x002696d0  size 0x58
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_anim_sub_002696d0(void)

{
  int iVar1;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x25,8);
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x00269730  size 0x120
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_draw_sub_00269730(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_scrgarage_draw_sub_00268f40_0032d770)[*(int *)((int)param_1 + 0x2c)])(param_1);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_UpdateAnim(*_g_UiMgr + iVar1 * 0x4f4 + 4,2);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  if (((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) &&
     (lVar2 = Menu_IsInputIdle((int)param_1 + 0x28), lVar2 == 1)) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
    }
  }
  return;
}

// 0x00269850  size 0x200
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_anim_sub_00269850(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = UiMgr_FindLayout(8);
  iVar3 = *_g_UiMgr;
  uVar4 = Msg_Get(0x7c);
  UiLayout_PlayAnim(iVar3 + iVar1 * 0x4f4 + 4,uVar4);
  uVar2 = Msg_Get(0x7e);
  iVar3 = UiMgr_FindLayout(8);
  iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
  if (*(int *)(iVar3 + 0x348) == 0) {
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
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
  }
  iVar3 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x25,8);
  uVar2 = Msg_Get(0x256);
  iVar3 = UiMgr_FindLayout(0xe);
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
  uVar2 = Msg_Get(599);
  iVar3 = UiMgr_FindLayout(0xe);
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
  return;
}

// 0x00269a50  size 0xbc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_anim_sub_00269a50(void)

{
  int iVar1;
  
  Menu_ClearSlot(0);
  iVar1 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,10,10,0x13);
  iVar1 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0xb,10,0x13);
  iVar1 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0xc,10,0x13);
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x00269b10  size 0x328
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_draw_sub_00269b10(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = UiLayout_UpdateAnimById(9,0);
  lVar3 = UiLayout_UpdateAnimById(10,0);
  if (lVar2 == 0 && lVar3 == 0) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
    }
    if (*param_1 == 1) {
      *param_1 = 0;
      Menu_ClearSlot(0);
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(9,*(undefined4 *)(&DAT_0032d900 + param_1[2] * 4),1,0);
  }
  if ((*(uint *)(_g_MenuMgr + 0x28) & 0x10000) == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  MenuWnd_DrawTextId(9,0x13,uVar4,0xee);
  if ((*(uint *)(_g_MenuMgr + 0x28) & 0x8000) == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  MenuWnd_DrawTextId(9,0x14,uVar4,0xfd);
  if ((*(uint *)(_g_MenuMgr + 0x28) & 0x4000) == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  MenuWnd_DrawTextId(9,0x15,uVar4,0xfe);
  MenuWnd_DrawText(9,0x16,0x101);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_UpdateAnim(*_g_UiMgr + iVar1 * 0x4f4 + 4,2);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(9);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(10);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetMoney(uVar4);
  MenuWnd_DrawNumber(10,1,uVar4);
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x25,8);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  if ((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) {
    lVar2 = UiLayout_UpdateAnimById(9,1);
    lVar3 = UiLayout_UpdateAnimById(10,1);
    if (lVar2 == 0 && lVar3 == 0) {
      if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
      }
    }
  }
  return;
}

// 0x00269e40  size 0x4a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_anim_sub_00269e40(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = 1;
  iVar1 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,10,10,3);
  iVar1 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0xb,10,3);
  iVar1 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0xc,10,3);
  uVar2 = Msg_Get(0x7c);
  iVar1 = UiMgr_FindLayout(8);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar1 + 800) = 0;
  *(undefined4 *)(iVar1 + 0x310) = 0;
  if (*(int *)(iVar1 + 800) == 0) {
    *(undefined4 *)(iVar1 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x310) = 0;
  if (*(int *)(iVar1 + 800) == 0) {
    *(undefined4 *)(iVar1 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x318) = 0;
  *(undefined4 *)(iVar1 + 800) = uVar2;
  *(undefined4 *)(iVar1 + 0x31c) = 1;
  uVar2 = Msg_Get(0x7d);
  iVar1 = UiMgr_FindLayout(8);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x334) = 0;
  *(undefined4 *)(iVar1 + 0x324) = 0;
  if (*(int *)(iVar1 + 0x334) == 0) {
    *(undefined4 *)(iVar1 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x330) = 1;
  }
  *(undefined4 *)(iVar1 + 0x324) = 0;
  if (*(int *)(iVar1 + 0x334) == 0) {
    *(undefined4 *)(iVar1 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x330) = 1;
  }
  *(undefined4 *)(iVar1 + 0x32c) = 0;
  *(undefined4 *)(iVar1 + 0x334) = uVar2;
  *(undefined4 *)(iVar1 + 0x330) = 1;
  uVar2 = Msg_Get(0x7e);
  iVar1 = UiMgr_FindLayout(8);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  if (*(int *)(iVar1 + 0x348) == 0) {
    *(undefined4 *)(iVar1 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x348) = 0;
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x340) = 1;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
  }
  uVar2 = Msg_Get(0x7f);
  iVar1 = UiMgr_FindLayout(9);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar1 + 800) = 0;
  *(undefined4 *)(iVar1 + 0x310) = 0;
  if (*(int *)(iVar1 + 800) == 0) {
    *(undefined4 *)(iVar1 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x310) = 0;
  if (*(int *)(iVar1 + 800) == 0) {
    *(undefined4 *)(iVar1 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x318) = 0;
  *(undefined4 *)(iVar1 + 800) = uVar2;
  *(undefined4 *)(iVar1 + 0x31c) = 1;
  uVar2 = Msg_Get(0x80);
  iVar1 = UiMgr_FindLayout(9);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x334) = 0;
  *(undefined4 *)(iVar1 + 0x324) = 0;
  if (*(int *)(iVar1 + 0x334) == 0) {
    *(undefined4 *)(iVar1 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x330) = 1;
  }
  *(undefined4 *)(iVar1 + 0x324) = 0;
  if (*(int *)(iVar1 + 0x334) == 0) {
    *(undefined4 *)(iVar1 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x330) = 1;
  }
  *(undefined4 *)(iVar1 + 0x32c) = 0;
  *(undefined4 *)(iVar1 + 0x334) = uVar2;
  *(undefined4 *)(iVar1 + 0x330) = 1;
  uVar2 = Msg_Get(0x81);
  iVar1 = UiMgr_FindLayout(9);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x33c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x348) = 0;
  *(undefined4 *)(iVar1 + 0x338) = 0;
  if (*(int *)(iVar1 + 0x348) == 0) {
    *(undefined4 *)(iVar1 + 0x344) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x344) = 1;
  }
  *(undefined4 *)(iVar1 + 0x338) = 0;
  if (*(int *)(iVar1 + 0x348) == 0) {
    *(undefined4 *)(iVar1 + 0x344) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x344) = 1;
  }
  *(undefined4 *)(iVar1 + 0x340) = 0;
  *(undefined4 *)(iVar1 + 0x348) = uVar2;
  *(undefined4 *)(iVar1 + 0x344) = 1;
  uVar2 = Msg_Get(0x42b);
  iVar1 = UiMgr_FindLayout(10);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar1 + 800) = 0;
  *(undefined4 *)(iVar1 + 0x310) = 0;
  if (*(int *)(iVar1 + 800) == 0) {
    *(undefined4 *)(iVar1 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x310) = 0;
  if (*(int *)(iVar1 + 800) == 0) {
    *(undefined4 *)(iVar1 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x318) = 0;
  *(undefined4 *)(iVar1 + 800) = uVar2;
  *(undefined4 *)(iVar1 + 0x31c) = 1;
  uVar2 = Msg_Get(0x42c);
  iVar1 = UiMgr_FindLayout(10);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x334) = 0;
  *(undefined4 *)(iVar1 + 0x324) = 0;
  if (*(int *)(iVar1 + 0x334) == 0) {
    *(undefined4 *)(iVar1 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x330) = 1;
  }
  *(undefined4 *)(iVar1 + 0x324) = 0;
  if (*(int *)(iVar1 + 0x334) == 0) {
    *(undefined4 *)(iVar1 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x330) = 1;
  }
  *(undefined4 *)(iVar1 + 0x32c) = 0;
  *(undefined4 *)(iVar1 + 0x334) = uVar2;
  *(undefined4 *)(iVar1 + 0x330) = 1;
  return;
}

// 0x0026a2e0  size 0x1f4
undefined4 menuscr_leaf_sub_0026a2e0(short param_1)

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
                  if ((param_1 < 0x68) || (0x6a < param_1)) {
                    if ((param_1 < 0x6b) || (0x6d < param_1)) {
                      if ((param_1 < 0x6e) || (0x70 < param_1)) {
                        if ((param_1 < 0x8e) || (0x92 < param_1)) {
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

// 0x0026a4e0  size 0x150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_anim_sub_0026a4e0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_0032d940 != -1) {
    piVar2 = &DAT_0032d940;
    do {
      *piVar2 = (int)param_1;
      piVar2 = piVar2 + 10;
    } while (*piVar2 != -1);
  }
  iVar1 = UiMgr_FindLayout(0xda);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,param_1,8);
  iVar1 = UiMgr_FindLayout(0xda);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x3c8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x3d4) = 0;
  *(undefined4 *)(iVar1 + 0x3c4) = 0;
  if (*(int *)(iVar1 + 0x3d4) == 0) {
    *(undefined4 *)(iVar1 + 0x3d0) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3d0) = 1;
  }
  iVar1 = UiMgr_FindLayout(0xda);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x3c8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x3d4) = 0;
  *(undefined4 *)(iVar1 + 0x3c4) = 0;
  if (*(int *)(iVar1 + 0x3d4) == 0) {
    *(undefined4 *)(iVar1 + 0x3d0) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3d0) = 1;
  }
  *(undefined4 *)(iVar1 + 0x3c4) = 0;
  if (*(int *)(iVar1 + 0x3d4) == 0) {
    *(undefined4 *)(iVar1 + 0x3d0) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3d0) = 1;
  }
  *(undefined4 *)(iVar1 + 0x3cc) = 1;
  *(int **)(iVar1 + 0x3d4) = &DAT_0032d940;
  *(undefined4 *)(iVar1 + 0x3d0) = 1;
  return;
}

// 0x0026a630  size 0x350
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_anim_sub_0026a630
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,ulong param_5,
               ulong param_6,int param_7)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (param_6 < param_5) {
    fVar2 = (float)((int)(param_7 * param_4) / (int)param_5 + 0x10);
    uVar1 = (int)(param_4 * (int)param_6) / (int)param_5;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    fVar5 = (float)uVar1;
    fVar4 = fVar2 + fVar5;
    if ((float)(param_4 + 0x10) < fVar4) {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,8);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetNumber(*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,2,0x10);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat((fVar4 - (float)(param_4 + 0x10)) / 16.0,*_g_UiMgr + iVar3 * 0x4f4 + 4,
                          param_3,6);
      fVar5 = (float)(param_4 + 0x10) - fVar2;
    }
    else {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,8);
    }
  }
  else {
    fVar2 = 16.0;
    fVar5 = (float)param_4;
    iVar3 = UiMgr_FindLayout(param_1);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,8);
  }
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar2,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_2,2);
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar5 / 16.0,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_2,6);
  return;
}

// 0x0026a980  size 0x3fc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_draw_sub_0026a980(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar2 = Profile_Get(0);
  MenuWnd_DrawTextId(0xdf,0x2c,1,0x243);
  MenuWnd_DrawTextId(0xdf,0x20,4,0x98d);
  uVar3 = Profile_Get(0);
  uVar4 = Profile_GetCarPartSlot(uVar3,*(undefined4 *)(param_1 + 0x24),0xc);
  uVar3 = Profile_GetCarRecordB(uVar3,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar3,0xc);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = 0x24d;
  }
  uVar4 = menuscr_leaf_sub_0026a2e0(uVar4);
  uVar5 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdf,0x26,0x24e,uVar4,uVar5,uVar3);
  MenuWnd_DrawTextId(0xdf,0x21,4,0x98f);
  uVar2 = Profile_GetCarRecord(uVar2,*(undefined4 *)(param_1 + 0x24));
  lVar6 = CarRec_GetGrade(uVar2);
  if (lVar6 == 0) {
    MenuWnd_DrawText(0xdf,0x27,0x9b2);
  }
  else {
    MenuWnd_DrawText(0xdf,0x27,0x98f);
  }
  MenuWnd_DrawTextId(0xdf,0x22,4,0x991);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0x12);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0x12);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdf,0x28,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdf,0x23,4,0x992);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0x11);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0x11);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdf,0x29,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdf,0x24,4,0x993);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0x13);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0x13);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdf,0x2a,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdf,0x25,4,0x994);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0x14);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0x14);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdf,0x2b,0x24e,uVar3,uVar4,uVar2);
  iVar1 = UiMgr_FindLayout(0xdf);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x0026ad80  size 0x464
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_draw_sub_0026ad80(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  Profile_Get(0);
  MenuWnd_DrawTextId(0xde,0x33,1,0x240);
  MenuWnd_DrawTextId(0xde,0x27,4,0x98a);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),10);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,10);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x2d,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xde,0x28,4,0x98b);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0xb);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0xb);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x2e,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xde,0x34,1,0x241);
  MenuWnd_DrawTextId(0xde,0x29,4,0x247);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0xf);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0xf);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x2f,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xde,0x2a,4,0x248);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0x10);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0x10);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x30,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xde,0x35,1,0x242);
  MenuWnd_DrawTextId(0xde,0x2b,4,0x247);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0xd);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0xd);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x31,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xde,0x2c,4,0x248);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0xe);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0xe);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x32,0x24e,uVar3,uVar4,uVar2);
  iVar1 = UiMgr_FindLayout(0xde);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x0026b1f0  size 0x6d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_draw_sub_0026b1f0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  Profile_Get(0);
  MenuWnd_DrawTextId(0xdd,0x36,1,0x23e);
  MenuWnd_DrawTextId(0xdd,0x24,4,0x980);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x2c,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x25,4,0x981);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),2);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,2);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x2d,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x26,4,0x982);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),1);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,1);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x2e,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x27,4,0x983);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),3);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,3);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x2f,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x28,4,0x984);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),4);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,4);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x30,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x37,1,0x23f);
  MenuWnd_DrawTextId(0xdd,0x29,4,0x985);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),5);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,5);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x31,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x2a,4,0x986);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),6);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,6);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x32,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x2b,4,0x987);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),7);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,7);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x33,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x34,4,0x988);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),8);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,8);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x35,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x38,4,0x989);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),9);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,9);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = menuscr_leaf_sub_0026a2e0(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x39,0x24e,uVar3,uVar4,uVar2);
  iVar1 = UiMgr_FindLayout(0xdd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x0026b8c0  size 0x464
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_select_sub_0026b8c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_UpdateAnim(*_g_UiMgr + iVar2 * 0x4f4 + 4,2);
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  MenuWnd_DrawText(0xd9,1,0xfd);
  iVar2 = UiMgr_FindLayout(0xd9);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = 0;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    uVar4 = *(uint *)(param_1 + 8);
    goto LAB_0026b9ac;
  case 1:
  case 2:
  case 3:
  case 4:
    iVar2 = 1;
    break;
  case 5:
    iVar2 = 2;
  }
  uVar4 = *(uint *)(param_1 + 8);
LAB_0026b9ac:
  lVar6 = 0;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
  case 4:
    lVar6 = 1;
    break;
  case 5:
    lVar6 = 2;
  }
  lVar5 = 0;
  switch(uVar4 & 0xff) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
  case 4:
    lVar5 = 1;
    break;
  case 5:
    lVar5 = 2;
  }
  if (lVar6 == lVar5) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0x2fc) != iVar2) {
        uVar1 = *(undefined4 *)(&DAT_0032d928 + *(int *)(param_1 + 0x2fc) * 4);
        iVar3 = UiMgr_FindLayout(0xda);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,uVar1,8);
        menuscr_anim_sub_0026a4e0(*(undefined4 *)(&DAT_0032d928 + iVar2 * 4));
        *(int *)(param_1 + 0x2fc) = iVar2;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar3 = UiMgr_FindLayout(0xda);
        UiLayout_UpdateAnim(*_g_UiMgr + iVar3 * 0x4f4 + 4,9);
      }
    }
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_0032d928 + iVar2 * 4);
    iVar3 = UiMgr_FindLayout(0xda);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,uVar1,8);
  }
  lVar6 = MenuMgr_Goto();
  if (lVar6 == 0) {
    if (iVar2 == 0) {
      iVar3 = UiMgr_FindLayout(0xda);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,7,8);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xda);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,7,8);
    }
    if (iVar2 == 2) {
      iVar2 = UiMgr_FindLayout(0xda);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,8,8);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xda);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,8,8);
    }
  }
  else {
    iVar2 = UiMgr_FindLayout(0xda);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,7,8);
    iVar2 = UiMgr_FindLayout(0xda);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,8,8);
  }
  UiLayout_UpdateAnimById(0xda,2);
  UiLayout_UpdateAnimById(0xda,3);
  MenuWnd_DrawText(0xda,9,0x23b);
  MenuWnd_DrawText(0xda,10,0x23c);
  MenuWnd_DrawText(0xda,0xb,0x23d);
  iVar2 = UiMgr_FindLayout(0xda);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0026bd30  size 0x138
void scrgarage_draw_sub_0026bd30(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar2 = *(int *)(iVar4 + 0x14);
  *(undefined4 *)(iVar4 + 0x14) = 0;
  if (iVar2 == 0) {
    cVar1 = *(char *)(iVar4 + 0x30);
  }
  else {
    MenuWnd_DrawHelp();
    cVar1 = *(char *)(iVar4 + 0x30);
  }
  if (cVar1 == '\x02') {
    MenuMgr_LockInput(0);
    *(undefined1 *)(iVar4 + 0x30) = 0;
  }
  else {
    if (cVar1 != '\x01') {
      iVar2 = *(int *)(iVar4 + 0x2f8);
      goto LAB_0026bd9c;
    }
    MenuMgr_LockInput();
    *(undefined1 *)(iVar4 + 0x30) = 0;
  }
  iVar2 = *(int *)(iVar4 + 0x2f8);
LAB_0026bd9c:
  if (iVar2 == 0) {
    lVar3 = MenuWnd_DrawHeader(0,0,0,0);
  }
  else {
    lVar3 = MenuWnd_DrawHeader(iVar4 + 0x32,iVar2,*(int *)(iVar4 + 0x28),
                               (iVar2 + (*(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x28))) % iVar2);
  }
  if (lVar3 == 2) {
    *(undefined4 *)(iVar4 + 0x10) = 0;
  }
  if (*(int *)(iVar4 + 0x18) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestClose();
    }
    if (lVar3 == 3) {
      *(undefined4 *)(iVar4 + 0x18) = 0;
    }
  }
  menuscr_select_sub_0026b8c0(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0026be70  size 0xca0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_select_sub_0026be70(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0x14);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  if (iVar1 != 0) {
    uVar2 = Msg_Get(0x1fa);
    iVar1 = UiMgr_FindLayout(0xdd);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar1 + 800) = 0;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x318) = 0;
    *(undefined4 *)(iVar1 + 800) = uVar2;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar2 = Msg_Get(0x1fb);
    iVar1 = UiMgr_FindLayout(0xdd);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x32c) = 0;
    *(undefined4 *)(iVar1 + 0x334) = uVar2;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar2 = Msg_Get(0x1fd);
    iVar1 = UiMgr_FindLayout(0xdd);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x348) = 0;
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = Msg_Get(0x1fe);
    iVar1 = UiMgr_FindLayout(0xdd);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x350) = 0xffffffff;
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
    uVar2 = Msg_Get(0x1ff);
    iVar1 = UiMgr_FindLayout(0xdd);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x370) = 0;
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x368) = 0;
    *(undefined4 *)(iVar1 + 0x370) = uVar2;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
    uVar2 = Msg_Get(0x200);
    iVar1 = UiMgr_FindLayout(0xdd);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar2 = Msg_Get(0x201);
    iVar1 = UiMgr_FindLayout(0xdd);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x398) = 0;
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x390) = 0;
    *(undefined4 *)(iVar1 + 0x398) = uVar2;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    uVar2 = Msg_Get(0x202);
    iVar1 = UiMgr_FindLayout(0xdd);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3ac) = 0;
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3a4) = 0;
    *(undefined4 *)(iVar1 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar1 + 0x3a8) = 1;
    uVar2 = Msg_Get(0x1fc);
    iVar1 = UiMgr_FindLayout(0xdd);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b8) = 0;
    *(undefined4 *)(iVar1 + 0x3c0) = uVar2;
    *(undefined4 *)(iVar1 + 0x3bc) = 1;
    uVar2 = Msg_Get(0x203);
    iVar1 = UiMgr_FindLayout(0xde);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x32c) = 0;
    *(undefined4 *)(iVar1 + 0x334) = uVar2;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar2 = Msg_Get(0x205);
    iVar1 = UiMgr_FindLayout(0xde);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x348) = 0;
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = Msg_Get(0x206);
    iVar1 = UiMgr_FindLayout(0xde);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x350) = 0xffffffff;
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
    uVar2 = Msg_Get(0x207);
    iVar1 = UiMgr_FindLayout(0xde);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x370) = 0;
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x368) = 0;
    *(undefined4 *)(iVar1 + 0x370) = uVar2;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
    uVar2 = Msg_Get(0x208);
    iVar1 = UiMgr_FindLayout(0xde);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar2 = Msg_Get(0x209);
    iVar1 = UiMgr_FindLayout(0xde);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x398) = 0;
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x390) = 0;
    *(undefined4 *)(iVar1 + 0x398) = uVar2;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    uVar2 = Msg_Get(0x20a);
    iVar1 = UiMgr_FindLayout(0xde);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3ac) = 0;
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3a4) = 0;
    *(undefined4 *)(iVar1 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar1 + 0x3a8) = 1;
    uVar2 = Msg_Get(0x204);
    iVar1 = UiMgr_FindLayout(0xde);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b8) = 0;
    *(undefined4 *)(iVar1 + 0x3c0) = uVar2;
    *(undefined4 *)(iVar1 + 0x3bc) = 1;
    uVar2 = Msg_Get(0x20b);
    iVar1 = UiMgr_FindLayout(0xdf);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x32c) = 0;
    *(undefined4 *)(iVar1 + 0x334) = uVar2;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar2 = Msg_Get(0x20c);
    iVar1 = UiMgr_FindLayout(0xdf);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x348) = 0;
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = Msg_Get(0x20d);
    iVar1 = UiMgr_FindLayout(0xdf);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x350) = 0xffffffff;
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
    uVar2 = Msg_Get(0x20e);
    iVar1 = UiMgr_FindLayout(0xdf);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x370) = 0;
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x368) = 0;
    *(undefined4 *)(iVar1 + 0x370) = uVar2;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
    uVar2 = Msg_Get(0x20f);
    iVar1 = UiMgr_FindLayout(0xdf);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
  }
  *(undefined4 *)(iVar5 + 0x10) = 0;
  if (*(int *)(iVar5 + 0x18) != 0) {
    lVar3 = 0;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
      break;
    case 1:
    case 2:
    case 3:
    case 4:
      lVar3 = 1;
      break;
    case 5:
      lVar3 = 2;
    }
    if ((lVar3 == 1) && (lVar3 = MenuMgr_Goto(), lVar3 == 0)) {
      if (*(int *)(iVar5 + 8) == 3) {
        scrgarage_draw_sub_0026ad80(param_1);
        lVar3 = UiLayout_UpdateAnimById(0xde,6);
        lVar4 = UiLayout_UpdateAnimById(0xdf,4);
        if (lVar3 == 0 && lVar4 == 0) {
          *(undefined4 *)(iVar5 + 0x18) = 0;
        }
      }
      else {
        scrgarage_draw_sub_0026b1f0(param_1);
        lVar3 = UiLayout_UpdateAnimById(0xdd,3);
        lVar4 = UiLayout_UpdateAnimById(0xdf,3);
        if (lVar3 == 0 && lVar4 == 0) {
          *(undefined4 *)(iVar5 + 0x18) = 0;
        }
      }
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(0xdc,1);
      lVar4 = UiLayout_UpdateAnimById(0xdf,1);
      if (lVar3 == 0 && lVar4 == 0) {
        *(undefined4 *)(iVar5 + 0x18) = 0;
      }
    }
  }
  menuscr_select_sub_0026b8c0(param_1);
  menuscr_anim_sub_0026a630(0xdc,3,4,0xf8,4,1,3);
  UiLayout_UpdateAnimById(0xdc,2);
  iVar1 = UiMgr_FindLayout(0xdc);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  scrgarage_draw_sub_0026a980(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

