// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0024c000 - 0x00250000
#include "ghidra_types.h"

// 0x0024d4a0  size 0x1d4
void scrgarage_sub_0024d4a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = UiMgr_FindLayout(7);
  iVar5 = *(int *)(param_1 + 0x65c);
  iVar1 = *piGpffff8d3c;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x644);
  }
  else {
    Menu_ClearSlot(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    MenuWnd_DrawHelp();
    iVar5 = *(int *)(param_1 + 0x644);
  }
  if (1 < iVar5 - 1U) goto LAB_0024d574;
  iVar5 = *(int *)(param_1 + 0x670);
  if (iVar5 < 0xb) {
LAB_0024d54c:
    iVar5 = *(int *)(param_1 + 0x69c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x62c);
    iVar3 = *(int *)(param_1 + 0x69c);
    if (iVar2 + 1 != iVar3) {
      if (iVar2 == (iVar3 + 10) % iVar5) {
        *(int *)(param_1 + 0x69c) = (iVar3 + 1) % iVar5;
        MenuMgr_LockInput(1);
      }
      goto LAB_0024d54c;
    }
    *(int *)(param_1 + 0x69c) = iVar2;
    MenuMgr_LockInput(0);
    iVar5 = *(int *)(param_1 + 0x69c);
  }
  iVar2 = *(int *)(param_1 + 0x670);
  iGpffff8efc = MenuWnd_DrawHeader(param_1 + 0x118,iVar2,iVar5,
                                   (iVar2 + (*(int *)(param_1 + 0x62c) - iVar5)) % iVar2);
LAB_0024d574:
  if (iGpffff8efc == 2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    if (iGpffff8efc == 2) {
      MenuWnd_RequestClose();
    }
    if (iGpffff8efc == 3) {
      if (*(int *)(param_1 + 0x650) - 0x22U < 2) {
        UiElem_SetPropFloat(0x3f800000,iVar1 + iVar4 * 0x4f4 + 4,0x25,8);
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
  }
  return;
}

// 0x0024d680  size 0x2d4
void scrcareer_sub_0024d680(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 auStack_300 [96];
  undefined4 auStack_180 [11];
  byte bStack_154;
  
  iVar2 = UiMgr_FindLayout(0x7a);
  iVar5 = *(int *)(param_1 + 0x65c);
  iVar1 = *piGpffff8d3c;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar5 != 0) {
    uVar3 = Msg_Get(0x7a);
    iVar5 = UiMgr_FindLayout(0x80);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
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
    *(undefined4 *)(iVar5 + 800) = uVar3;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar3 = Msg_Get(0x7b);
    iVar5 = UiMgr_FindLayout(0x80);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
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
    *(undefined4 *)(iVar5 + 0x334) = uVar3;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    Menu_ClearSlot(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  lVar4 = UiLayout_UpdateAnimById(0x80,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x80), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawText(0x7a,0x1a,0x362);
  MenuWnd_DrawText(0x7a,0x19,0x363);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)
                           ((int)register0x000001c0 + *(int *)(param_1 + 0x62c) * 4 + -0x7bb8));
  RivalDb_Copy(auStack_300,*(undefined2 *)(param_1 + 0x24));
  puVar7 = auStack_300;
  puVar6 = auStack_180;
  iVar5 = 0x5f;
  do {
    iVar5 = iVar5 + -1;
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (0 < iVar5);
  UiElem_SetPropInt(iVar1 + iVar2 * 0x4f4 + 4,0x18,0x16,
                    *(undefined4 *)(&DAT_0032c5b0 + (uint)bStack_154 * 4));
  if (*piGpffff8d78 == 1) {
    MenuWnd_SetItemState
              (0x7a,*(undefined4 *)
                     ((int)register0x000001c0 + *(int *)(param_1 + 0x62c) * 4 + -0x7bb0),1,0);
  }
  iVar5 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  return;
}

// 0x0024d960  size 0x62c
void scrcareer_sub_0024d960(undefined8 param_1)

{
  int iVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 auStack_3c0 [20];
  undefined2 uStack_370;
  undefined2 uStack_36e;
  undefined1 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  char cStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined2 uStack_338;
  undefined2 uStack_336;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 auStack_32c [23];
  undefined4 auStack_2d0 [23];
  undefined4 auStack_274 [16];
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined2 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_1ec;
  undefined4 uStack_1e8;
  char cStack_1e0;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined1 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  char cStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 auStack_15c [23];
  undefined4 auStack_100 [23];
  undefined4 auStack_a4 [16];
  undefined4 uStack_64;
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
  undefined2 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  UiMgr_FindLayout(0x84);
  UiMgr_FindLayout(0x85);
  iVar4 = UiMgr_FindLayout(7);
  iVar11 = *piGpffff8d3c;
  UiMgr_FindLayout(0x86);
  iVar5 = UiMgr_FindLayout(0x7b);
  iVar14 = (int)param_1;
  iVar7 = *(int *)(iVar14 + 0x65c);
  iVar1 = *piGpffff8d3c;
  *(undefined4 *)(iVar14 + 0x65c) = 0;
  if (iVar7 != 0) {
    uVar6 = Msg_Get(0x72);
    iVar7 = UiMgr_FindLayout(0x7b);
    iVar7 = *piGpffff8d3c + iVar7 * 0x4f4;
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
    uVar6 = Msg_Get(0x73);
    iVar7 = UiMgr_FindLayout(0x7b);
    iVar7 = *piGpffff8d3c + iVar7 * 0x4f4;
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
    Menu_ClearSlot(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  lVar8 = UiLayout_UpdateAnimById(0x7b,0);
  if (lVar8 == 0) {
    *(undefined4 *)(iVar14 + 0x658) = 0;
  }
  if ((((*(int *)(iVar14 + 0x660) != 0) && (lVar8 = UiLayout_UpdateAnimById(0x7b), lVar8 == 0)) &&
      (*(undefined4 *)(iVar14 + 0x660) = 0, *(char *)(iVar14 + 0x474) == '\x03')) &&
     (*(int *)(iVar14 + 0x650) != 4)) {
    UiElem_SetPropFloat(0x3f800000,iVar11 + iVar4 * 0x4f4 + 4,0x25,8);
  }
  if (*piGpffff8d78 == 1) {
    MenuWnd_SetItemState
              (0x7b,*(undefined4 *)
                     ((int)register0x000001c0 + *(int *)(iVar14 + 0x62c) * 4 + -0x7bc0),1,0);
  }
  RivalDb_Copy(&uStack_370,*(undefined2 *)(iVar14 + 0x24));
  puVar13 = auStack_32c;
  puVar12 = auStack_15c;
  iVar11 = 0x17;
  uStack_190 = uStack_360;
  uStack_188 = uStack_358;
  uStack_184 = uStack_354;
  uStack_19c = uStack_36c;
  uStack_198 = uStack_368;
  uStack_194 = uStack_364;
  uStack_178 = uStack_348;
  uStack_1a0 = uStack_370;
  uStack_19e = uStack_36e;
  uStack_18c = uStack_35c;
  uStack_180 = uStack_350;
  uStack_17c = uStack_34c;
  uStack_164 = uStack_334;
  cStack_174 = cStack_344;
  uStack_170 = uStack_340;
  uStack_16c = uStack_33c;
  uStack_168 = uStack_338;
  uStack_166 = uStack_336;
  uStack_160 = uStack_330;
  do {
    iVar11 = iVar11 + -1;
    *puVar12 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar11);
  puVar13 = auStack_2d0;
  puVar12 = auStack_100;
  iVar11 = 0x17;
  do {
    iVar11 = iVar11 + -1;
    *puVar12 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar11);
  puVar13 = auStack_274;
  puVar12 = auStack_a4;
  iVar11 = 8;
  do {
    iVar11 = iVar11 + -1;
    uVar6 = puVar13[1];
    *puVar12 = *puVar13;
    puVar12[1] = uVar6;
    puVar13 = puVar13 + 2;
    puVar12 = puVar12 + 2;
  } while (0 < iVar11);
  uStack_64 = uStack_234;
  uStack_60 = uStack_230;
  uStack_5c = uStack_22c;
  uStack_58 = uStack_228;
  uStack_34 = uStack_204;
  uStack_54 = uStack_224;
  uStack_30 = uStack_200;
  uStack_50 = uStack_220;
  uStack_2c = uStack_1fc;
  uStack_38 = uStack_208;
  uStack_4c = uStack_21c;
  uStack_48 = uStack_218;
  uStack_44 = uStack_214;
  uStack_40 = uStack_210;
  uStack_28 = uStack_1f8;
  uStack_3c = uStack_20c;
  RaceResult_BuildMessage(&uStack_20,*(undefined2 *)(iVar14 + 0x24));
  uVar15 = (uint)cStack_174;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  uStack_8 = uStack_18;
  lVar8 = RivalRec_IsValid(&uStack_1a0);
  if (lVar8 != 0) {
    uVar2 = RivalRec_GetId(&uStack_1a0);
    uVar9 = Profile_Get(0);
    sVar3 = profile_sub_001c0850(uVar9,uVar2);
    if (sVar3 == 0) {
      Rival_GetTeamRecord(auStack_3c0,uVar2);
      puVar13 = auStack_3c0;
      puVar12 = &uStack_1f0;
      iVar11 = 0x11;
      do {
        iVar11 = iVar11 + -1;
        *puVar12 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar12 = puVar12 + 1;
      } while (0 < iVar11);
      uVar15 = (uint)cStack_1e0;
      uStack_10 = CONCAT31(uStack_10._1_3_,uStack_1ec);
      uStack_c = uStack_1e8;
    }
  }
  UiElem_SetPropInt(iVar1 + iVar5 * 0x4f4 + 4,0x18,0x16,
                    *(undefined4 *)(&DAT_0032c590 + (uVar15 & 0xff) * 4));
  uVar9 = Profile_Get(0);
  uVar9 = garage_sub_001bcb00(uVar9);
  MenuWnd_DrawNumber(0x7b,0x21,uVar9);
  MenuWnd_DrawNumber(0x7b,0x20,*(undefined4 *)(iVar14 + 0x48c));
  if ((*(uint *)(iVar14 + 0x494) & 10) == 0) {
    MenuWnd_DrawText(0x7b,0x1c,0x366);
    uVar15 = *(uint *)(iVar14 + 0x494);
  }
  else {
    MenuWnd_DrawTextId(0x7b,0x1c,3,0x366);
    uVar15 = *(uint *)(iVar14 + 0x494);
  }
  if ((uVar15 & 1) == 0) {
    MenuWnd_DrawText(0x7b,0x1d,0x367);
    uVar2 = (undefined2)uStack_c;
  }
  else {
    MenuWnd_DrawTextId(0x7b,0x1d,3,0x367);
    uVar2 = (undefined2)uStack_c;
  }
  uVar9 = Msg_PartInfo(uVar2);
  uVar10 = Msg_MakerName(uVar2);
  MenuWnd_DrawLabel(0x7b,0x1f,0x368,uVar9,uVar10);
  MenuWnd_DrawText(0x7b,0x1e,0x369);
  scrcareer_sub_00244b90(param_1);
  iVar11 = UiMgr_FindLayout(0x7b);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar11 * 0x4f4 + 4);
  return;
}

// 0x0024df90  size 0x8c
void menuscr_sub_0024df90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    Menu_ClearSlot(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  return;
}

// 0x0024e020  size 0x46c
void scrcareer_sub_0024e020(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = UiMgr_FindLayout(0x87);
  iVar7 = *piRam0036f42c;
  iVar3 = UiMgr_FindLayout(0x81);
  iVar8 = (int)param_1;
  iVar4 = *(int *)(iVar8 + 0x65c);
  iVar1 = *piRam0036f42c;
  *(undefined4 *)(iVar8 + 0x65c) = 0;
  if (iVar4 != 0) {
    uVar5 = Msg_Get(0x8e);
    iVar4 = UiMgr_FindLayout(0x87);
    iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
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
    *(undefined4 *)(iVar4 + 800) = uVar5;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar5 = Msg_Get(0x26b);
    iVar4 = UiMgr_FindLayout(0x87);
    iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
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
    *(undefined4 *)(iVar4 + 0x32c) = 1;
    *(undefined4 *)(iVar4 + 0x334) = uVar5;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    uVar5 = Msg_Get(0x26c);
    iVar4 = UiMgr_FindLayout(0x87);
    iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
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
    *(undefined4 *)(iVar4 + 0x340) = 1;
    *(undefined4 *)(iVar4 + 0x348) = uVar5;
    *(undefined4 *)(iVar4 + 0x344) = 1;
    uVar5 = Msg_Get(0x26d);
    iVar4 = UiMgr_FindLayout(0x87);
    iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
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
    *(undefined4 *)(iVar4 + 0x354) = 1;
    *(undefined4 *)(iVar4 + 0x35c) = uVar5;
    *(undefined4 *)(iVar4 + 0x358) = 1;
    uVar5 = Msg_Get(0x26e);
    iVar4 = UiMgr_FindLayout(0x87);
    iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
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
    *(undefined4 *)(iVar4 + 0x370) = uVar5;
    *(undefined4 *)(iVar4 + 0x36c) = 1;
    uVar5 = Msg_Get(0x26f);
    iVar4 = UiMgr_FindLayout(0x87);
    iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
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
    *(undefined4 *)(iVar4 + 900) = uVar5;
    *(undefined4 *)(iVar4 + 0x380) = 1;
    Menu_ClearSlot(0);
    iVar4 = 0;
    puVar6 = &DAT_0032c570;
    do {
      UiElem_SetPropFloat(0,iVar7 + iVar2 * 0x4f4 + 4,*puVar6,8);
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 < 6);
    UiElem_SetPropFloat(0,iVar1 + iVar3 * 0x4f4 + 4,0xe,8);
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
  }
  *(undefined4 *)(iVar8 + 0x658) = 0;
  if (*(int *)(iVar8 + 0x660) != 0) {
    iVar7 = 0;
    puVar6 = &DAT_0032c570;
    do {
      iVar4 = UiMgr_FindLayout(0x87);
      UiElem_SetPropFloat(0,*piRam0036f42c + iVar4 * 0x4f4 + 4,*puVar6,8);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < 6);
    *(undefined4 *)(iVar8 + 0x660) = 0;
  }
  scrcareer_sub_00244b90(param_1);
  return;
}

// 0x0024e490  size 0x1dc
void scrcareer_sub_0024e490(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar3 = *(int *)(iVar4 + 0x65c);
  *(undefined4 *)(iVar4 + 0x65c) = 0;
  if (iVar3 != 0) {
    MenuWnd_SetHelpText(0);
    Menu_ClearSlot(0);
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  uVar1 = *(uint *)(iVar4 + 0x494);
  if (((uVar1 & 8) == 0) || ((uVar1 & 1) == 0)) {
    if (((uVar1 & 2) == 0) || ((uVar1 & 1) == 0)) {
      if ((uVar1 & 0x10) == 0) {
        if ((uVar1 & 1) == 0) {
          if ((uVar1 & 4) == 0) {
            if ((uVar1 & 0x20) == 0) {
              MenuWnd_DrawText(5,0x1c,900);
            }
            else {
              MenuWnd_DrawText(5,0x1c,299);
            }
          }
          else {
            MenuWnd_DrawText(5,0x1c,0x380);
          }
        }
        else {
          MenuWnd_DrawText(5,0x1c,900);
        }
      }
      else {
        MenuWnd_DrawText(5,0x1c,0x382);
      }
    }
    else {
      menuscr_sub_00242ee0(5,0x1c,*(undefined4 *)(iVar4 + 0x48c));
    }
    iVar3 = *(int *)(iVar4 + 0x660);
  }
  else {
    menuscr_sub_00242cf0(5,0x1c,*(undefined4 *)(iVar4 + 0x48c));
    iVar3 = *(int *)(iVar4 + 0x660);
  }
  if (iVar3 != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar4 + 0x660) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar4 + 0x658) = 0;
  }
  scrcareer_sub_00244b90(param_1);
  return;
}

// 0x0024e670  size 0x160
void scrcareer_sub_0024e670(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  UiMgr_FindLayout(0x84);
  UiMgr_FindLayout(0x85);
  UiMgr_FindLayout(7);
  UiMgr_FindLayout(0x86);
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 0x65c);
  *(undefined4 *)(iVar3 + 0x65c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
    iRam0036f5e8 = 2;
    Menu_ClearSlot(0);
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
  }
  iRam0036f5e8 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  cVar1 = *(char *)(iVar3 + 0x480);
  if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
    MenuWnd_DrawText(5,0x1c,0x37f);
  }
  else {
    if (cVar1 != '\0') {
      iVar2 = *(int *)(iVar3 + 0x660);
      goto LAB_0024e71c;
    }
    MenuWnd_DrawText(5,0x1c,0x37e);
  }
  iVar2 = *(int *)(iVar3 + 0x660);
LAB_0024e71c:
  if (iVar2 != 0) {
    if (iRam0036f5e8 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (iRam0036f5e8 == 3) {
      *(undefined4 *)(iVar3 + 0x660) = 0;
    }
  }
  if (iRam0036f5e8 == 2) {
    *(undefined4 *)(iVar3 + 0x658) = 0;
  }
  scrcareer_sub_00244b90(param_1);
  return;
}

// 0x0024e7d0  size 0x3a4
void scrrace_sub_0024e7d0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar2 = UiMgr_FindLayout(0x78);
  iVar3 = *(int *)(param_1 + 0x65c);
  iVar6 = *piRam0036f42c;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  iVar6 = iVar6 + iVar2 * 0x4f4 + 4;
  if (iVar3 != 0) {
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x79), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  uVar5 = Race_GetCourseVariant();
  iVar3 = MsgId_ForOption(uVar5);
  UiElem_SetPropInt(iVar6,0x3d,0x16,*(undefined4 *)(&DAT_0032c550 + iVar3 * 4));
  uVar5 = Race_GetCourseVariant();
  iVar3 = MsgId_ForOption(uVar5);
  UiElem_SetPropInt(iVar6,0x3e,0x16,*(undefined4 *)(&DAT_0032c550 + iVar3 * 4));
  uVar5 = Race_GetCourseVariant();
  iVar3 = MsgId_ForOption(uVar5);
  UiElem_SetPropInt(iVar6,0x3f,0x16,*(undefined4 *)(&DAT_0032c550 + iVar3 * 4));
  uVar5 = Race_GetCourseVariant();
  iVar3 = MsgId_ForOption(uVar5);
  UiElem_SetPropInt(iVar6,0x40,0x16,*(undefined4 *)(&DAT_0032c550 + iVar3 * 4));
  uVar5 = Race_GetCourseVariant();
  uVar5 = MsgId_ForOption(uVar5);
  uVar5 = MsgId_ForSlot(uVar5,1);
  MenuWnd_DrawText(0x78,0x42,uVar5);
  uVar5 = Race_GetCourseVariant();
  uVar5 = MsgId_ForOption(uVar5);
  uVar5 = MsgId_ForSlot(uVar5,1);
  MenuWnd_DrawText(0x78,0x43,uVar5);
  uVar5 = Race_GetCourseVariant();
  uVar5 = MsgId_ForOption(uVar5);
  uVar5 = MsgId_ForSlot(uVar5,1);
  MenuWnd_DrawText(0x78,0x44,uVar5);
  uVar5 = Race_GetCourseVariant();
  uVar5 = MsgId_ForOption(uVar5);
  uVar5 = MsgId_ForSlot(uVar5,1);
  MenuWnd_DrawText(0x78,0x45,uVar5);
  uVar5 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar5);
  if (cVar1 == '\0') {
    MenuWnd_DrawText(0x79,0x18,0xe0);
  }
  else {
    MenuWnd_DrawTextId(0x79,0x18,3,0xe0);
  }
  MenuWnd_DrawText(0x79,0x19,0x355);
  MenuWnd_DrawText(0x79,0x1a,0x356);
  MenuWnd_DrawText(0x79,0x1b,0x357);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032c540 + *(int *)(param_1 + 0x62c) * 4));
  UiElem_SetPropFloat(0,iVar6,1,8);
  UiElem_SetPropFloat(0,iVar6,0xb,8);
  UiElem_SetPropFloat(0,iVar6,0x15,8);
  UiElem_SetPropFloat(0,iVar6,0x1f,8);
  iVar3 = UiMgr_FindLayout(0x77);
  UiLayout_Draw(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x78);
  UiLayout_Draw(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x79);
  UiLayout_Draw(0x3f800000,*piRam0036f42c + iVar3 * 0x4f4 + 4);
  return;
}

// 0x0024eb80  size 0x54
void menuscr_sub_0024eb80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  *(undefined4 *)(param_1 + 0x660) = 0;
  return;
}

// 0x0024ebe0  size 0x11c
void scrrace_sub_0024ebe0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x65c);
  *(undefined4 *)(iVar3 + 0x65c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x62c),
                             (int)register0x000001c0 + -0x7bd0);
  MenuWnd_DrawText(5,0x1c,0x378);
  if (*(int *)(iVar3 + 0x660) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x660) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x658) = 0;
  }
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)
                           ((int)register0x000001c0 + *(int *)(iVar3 + 0x62c) * 4 + -0x7bc8));
  scrrace_sub_00243bd0(param_1);
  Subtitle_Draw();
  return;
}

// 0x0024ed00  size 0x78
void menuscr_sub_0024ed00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    Menu_ClearSlot(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  return;
}

// 0x0024ed80  size 0x4f0
void scrgarage_sub_0024ed80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_s1;
  
  iVar5 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar5 != 0) {
    uVar3 = Msg_Get(0x29d);
    iVar5 = UiMgr_FindLayout(0xa5);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
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
    *(undefined4 *)(iVar5 + 800) = uVar3;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar3 = Msg_Get(0x29e);
    iVar5 = UiMgr_FindLayout(0xa5);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
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
    *(undefined4 *)(iVar5 + 0x334) = uVar3;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawHelp();
    MenuWnd_SetHelpText(0);
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  if (1 < *(int *)(param_1 + 0x644) - 1U) goto LAB_0024ee20;
  iVar5 = *(int *)(param_1 + 0x628);
  if (iVar5 < 0xb) {
LAB_0024f024:
    iVar5 = *(int *)(param_1 + 0x698);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x62c);
    iVar2 = *(int *)(param_1 + 0x698);
    if (iVar2 == (iVar1 + 1) % iVar5) {
      *(int *)(param_1 + 0x698) = iVar1;
      MenuMgr_LockInput(0);
      goto LAB_0024f024;
    }
    if (iVar1 != (iVar2 + 10) % iVar5) goto LAB_0024f024;
    *(int *)(param_1 + 0x698) = (iVar2 + 1) % iVar5;
    MenuMgr_LockInput(1);
    iVar5 = *(int *)(param_1 + 0x698);
  }
  iVar1 = *(int *)(param_1 + 0x628);
  unaff_s1 = MenuWnd_DrawHeader(param_1 + 0x5fc,iVar1,iVar5,
                                (iVar1 + (*(int *)(param_1 + 0x62c) - iVar5)) % iVar1);
LAB_0024ee20:
  if (*(int *)(param_1 + 0x684) == 1) {
    uVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
    *(undefined4 *)(param_1 + 0x694) = uVar3;
    uVar7 = Msg_PartInfo(*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
    uVar8 = Msg_MakerInfo(*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
    MenuWnd_DrawLabel(5,0x1c,0x3a8,*(undefined4 *)(&DAT_0032c528 + *(int *)(param_1 + 0x20) * 4),
                      uVar7,uVar8);
  }
  lVar6 = UiLayout_UpdateAnimById(0xa5,0);
  if ((lVar6 == 0) && (unaff_s1 == 2)) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    if (unaff_s1 == 2) {
      MenuWnd_RequestClose();
      iVar5 = *(int *)(param_1 + 0x684);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x684);
    }
    if ((iVar5 == 1) && (*(int *)(param_1 + 0x694) == 2)) {
      MenuWnd_RequestRedraw();
    }
    lVar6 = UiLayout_UpdateAnimById(0xa5,1);
    if ((lVar6 == 0) && (unaff_s1 == 3)) {
      if (*(int *)(param_1 + 0x684) == 1) {
        if (*(int *)(param_1 + 0x694) == 3) {
          *(undefined4 *)(param_1 + 0x660) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
  }
  MenuWnd_DrawText(0xa5,6,0x357);
  MenuWnd_DrawText(0xa5,9,*(undefined4 *)(&DAT_0032c528 + *(int *)(param_1 + 0x20) * 4));
  MenuWnd_DrawTextId(0xa5,5,4,0x44);
  uVar7 = Profile_Get(0);
  uVar7 = garage_sub_001bc3f0(uVar7);
  puVar4 = (undefined2 *)CarRec_GetPartSlotB(uVar7,0xf);
  uVar7 = Msg_PartInfo(*puVar4);
  uVar8 = Profile_Get(0);
  uVar8 = garage_sub_001bc3f0(uVar8);
  puVar4 = (undefined2 *)CarRec_GetPartSlotB(uVar8,0xf);
  uVar8 = Msg_MakerInfo(*puVar4);
  MenuWnd_DrawLabel(0xa5,7,0x45,uVar7,uVar8);
  uVar7 = Profile_Get(0);
  uVar7 = garage_sub_001bc3f0(uVar7);
  puVar4 = (undefined2 *)CarRec_GetPartSlotB(uVar7,0x10);
  uVar7 = Msg_PartInfo(*puVar4);
  uVar8 = Profile_Get(0);
  uVar8 = garage_sub_001bc3f0(uVar8);
  puVar4 = (undefined2 *)CarRec_GetPartSlotB(uVar8,0x10);
  uVar8 = Msg_MakerInfo(*puVar4);
  MenuWnd_DrawLabel(0xa5,8,0x45,uVar7,uVar8);
  MenuWnd_DrawText(7,0x2e,0x3a7);
  UiLayout_UpdateAnimById(0xa2,0);
  iVar5 = UiMgr_FindLayout(0xa2);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0xa5);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  return;
}

// 0x0024f270  size 0x4ac
void scrrace_sub_0024f270(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  UiMgr_FindLayout(0xa0);
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 0x65c);
  *(undefined4 *)(iVar6 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar2 = Msg_Get(0x1d7);
    iVar3 = UiMgr_FindLayout(0xa0);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
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
    uVar2 = Msg_Get(0x1d8);
    iVar3 = UiMgr_FindLayout(0xa0);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
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
    uVar2 = Msg_Get(0x297);
    iVar3 = UiMgr_FindLayout(0xa0);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
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
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar6 + 0x680) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  if (*(int *)(iGpffff8d68 + 0x24) == 0xf) {
    iVar1 = UiMgr_FindLayout(0x9f);
    iVar3 = *piGpffff8d3c;
    uVar4 = Msg_Get(0x28c);
    UiLayout_PlayAnim(iVar3 + iVar1 * 0x4f4 + 4,uVar4);
    iVar1 = UiMgr_FindLayout(0x9f);
    iVar3 = *piGpffff8d3c;
    uVar4 = Msg_Get(0x28e);
    UiLayout_PlayAnim(iVar3 + iVar1 * 0x4f4 + 4,uVar4);
    iVar1 = UiMgr_FindLayout(0xa1);
    iVar3 = *piGpffff8d3c;
    uVar4 = Msg_Get(0x295);
    UiLayout_PlayAnim(iVar3 + iVar1 * 0x4f4 + 4,uVar4);
    if ((*(int *)(iVar6 + 0x680) == 1) && (*(int *)(iGpffff8d68 + 0x20) != 0xf)) {
      uVar2 = Msg_Get(0x1d8);
      iVar3 = UiMgr_FindLayout(0xa0);
      iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
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
      iVar3 = UiMgr_FindLayout(0xa0);
      UiElem_SetPropFloat(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,uGpffff8428,8);
      iVar3 = UiMgr_FindLayout(0xa0);
      UiElem_SetPropFloat(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,uGpffff842c,8);
      *(undefined4 *)(iVar6 + 0x680) = 0;
    }
    *(undefined4 *)(iVar6 + 0x658) = 0;
  }
  lVar5 = UiLayout_UpdateAnimById(0xa0,0);
  if (lVar5 == 0) {
    *(undefined4 *)(iVar6 + 0x658) = 0;
  }
  if ((*(int *)(iVar6 + 0x660) != 0) && (lVar5 = UiLayout_UpdateAnimById(0xa0), lVar5 == 0)) {
    *(undefined4 *)(iVar6 + 0x660) = 0;
  }
  MenuWnd_DrawText(0xa0,0x1c,0x39c);
  MenuWnd_DrawText(0xa0,0x1b,0x39d);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)
                           ((int)register0x000001c0 + *(int *)(iVar6 + 0x62c) * 4 + -0x7be0));
  if (*piGpffff8d78 == 1) {
    MenuWnd_SetItemState
              (0xa0,*(undefined4 *)((int)register0x000001c0 + *(int *)(iVar6 + 0x62c) * 4 + -0x7bd8)
               ,1,0);
  }
  UiLayout_UpdateAnimById(0xa0,2);
  iVar3 = UiMgr_FindLayout(0xa0);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  scrrace_sub_00243bd0(param_1);
  Subtitle_Draw();
  return;
}

// 0x0024f720  size 0x6a8
void scrrace_sub_0024f720(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1c000;
  UiMgr_FindLayout(0x79);
  iVar1 = UiMgr_FindLayout(0x9f);
  iVar6 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
  UiMgr_FindLayout(0xa1);
  iVar7 = (int)param_1;
  iVar1 = *(int *)(iVar7 + 0x65c);
  *(undefined4 *)(iVar7 + 0x65c) = 0;
  if (iVar1 != 0) {
    uVar2 = Msg_Get(0x28c);
    iVar1 = UiMgr_FindLayout(0x9f);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = Msg_Get(0x28d);
    iVar1 = UiMgr_FindLayout(0x9f);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = Msg_Get(0x28e);
    iVar1 = UiMgr_FindLayout(0x9f);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = Msg_Get(0x28f);
    iVar1 = UiMgr_FindLayout(0x9f);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = Msg_Get(0x3f9);
    iVar1 = UiMgr_FindLayout(0x9f);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x368) = 1;
    *(undefined4 *)(iVar1 + 0x370) = uVar2;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
    uVar2 = Msg_Get(0x3fa);
    iVar1 = UiMgr_FindLayout(0x9f);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x37c) = 1;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar2 = Msg_Get(0x295);
    iVar1 = UiMgr_FindLayout(0xa1);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = Msg_Get(0x296);
    iVar1 = UiMgr_FindLayout(0xa1);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  if (*(int *)(iVar7 + 0x648) == 2) {
    lVar3 = UiLayout_UpdateAnimById(0x9f,0);
    lVar4 = UiLayout_UpdateAnimById(0x9f,2);
    lVar5 = UiLayout_UpdateAnimById(0xa1,0);
    if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
      *(undefined4 *)(iVar7 + 0x658) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar7 + 0x658) = 0;
  }
  if (*(int *)(iVar7 + 0x660) != 0) {
    if (*(int *)(iVar7 + 0x650) != 2) {
      *(undefined4 *)(iVar7 + 0x660) = 0;
    }
    lVar3 = UiLayout_UpdateAnimById(0x9f,1);
    lVar4 = UiLayout_UpdateAnimById(0x9f,3);
    lVar5 = UiLayout_UpdateAnimById(0xa1,1);
    if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
      *(undefined4 *)(iVar7 + 0x660) = 0;
    }
  }
  if (*piGpffff8d78 == 1) {
    if (*(int *)(iVar7 + 0xc) == -1) {
      MenuWnd_SetItemState(0x9f,*(undefined4 *)(&DAT_0032c4d0 + *(int *)(iVar7 + 0x62c) * 4),0,0);
      iVar1 = *(int *)(iVar7 + 0xc);
      goto LAB_0024f8a0;
    }
    MenuWnd_SetItemState(0x9f,*(undefined4 *)(&DAT_0032c500 + *(int *)(iVar7 + 0x62c) * 4),0,0);
  }
  iVar1 = *(int *)(iVar7 + 0xc);
LAB_0024f8a0:
  if (iVar1 == -1) {
    MenuWnd_DrawText(7,0x2e,0x398);
  }
  else {
    MenuWnd_DrawText(7,0x2e,0x399);
  }
  scrrace_sub_00243bd0(param_1);
  if (*(int *)(iVar7 + 0xc) == -1) {
    UiElem_SetPropFloat(0x3ecccccd,iVar6,0x7e,8);
    UiLayout_UpdateAnimById(0x9f,4);
  }
  else {
    UiElem_SetPropFloat(0x3ecccccd,iVar6,0x7d,8);
    UiLayout_UpdateAnimById(0x9f,5);
  }
  Subtitle_Draw();
  return;
}

// 0x0024fdd0  size 0x37e8
void scrcareer_sub_0024fdd0(undefined8 param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_4db0 [384];
  int aiStack_4c30 [20];
  undefined2 uStack_4be0;
  undefined2 uStack_4bde;
  undefined1 uStack_4bdc;
  undefined4 uStack_4bd8;
  undefined4 uStack_4bd4;
  undefined4 uStack_4bd0;
  undefined4 uStack_4bcc;
  undefined4 uStack_4bc8;
  undefined4 uStack_4bc4;
  undefined1 uStack_4bc0;
  undefined4 uStack_4bbc;
  undefined4 uStack_4bb8;
  undefined1 uStack_4bb4;
  undefined4 uStack_4bb0;
  undefined4 uStack_4bac;
  undefined2 uStack_4ba8;
  undefined2 uStack_4ba6;
  undefined4 uStack_4ba4;
  undefined4 uStack_4ba0;
  undefined4 auStack_4b9c [23];
  undefined4 auStack_4b40 [23];
  undefined4 auStack_4ae4 [16];
  undefined4 uStack_4aa4;
  undefined4 uStack_4aa0;
  undefined4 uStack_4a9c;
  undefined4 uStack_4a98;
  undefined4 uStack_4a94;
  undefined4 uStack_4a90;
  undefined4 uStack_4a8c;
  undefined4 uStack_4a88;
  undefined4 uStack_4a84;
  undefined4 uStack_4a80;
  undefined4 uStack_4a7c;
  undefined2 uStack_4a78;
  undefined4 uStack_4a74;
  undefined4 uStack_4a70;
  undefined4 uStack_4a6c;
  undefined4 uStack_4a68;
  undefined1 auStack_4a60 [384];
  undefined1 auStack_48e0 [384];
  undefined1 auStack_4760 [384];
  undefined1 auStack_45e0 [384];
  undefined1 auStack_4460 [384];
  undefined1 auStack_42e0 [384];
  undefined1 auStack_4160 [384];
  undefined1 auStack_3fe0 [384];
  undefined1 auStack_3e60 [384];
  undefined1 auStack_3ce0 [384];
  undefined1 auStack_3b60 [384];
  undefined1 auStack_39e0 [384];
  undefined1 auStack_3860 [384];
  undefined1 auStack_36e0 [384];
  int aiStack_3560 [20];
  undefined2 uStack_3510;
  undefined2 uStack_350e;
  undefined1 uStack_350c;
  undefined4 uStack_3508;
  undefined4 uStack_3504;
  undefined4 uStack_3500;
  undefined4 uStack_34fc;
  undefined4 uStack_34f8;
  undefined4 uStack_34f4;
  undefined1 uStack_34f0;
  undefined4 uStack_34ec;
  undefined4 uStack_34e8;
  undefined1 uStack_34e4;
  undefined4 uStack_34e0;
  undefined4 uStack_34dc;
  undefined2 uStack_34d8;
  undefined2 uStack_34d6;
  undefined4 uStack_34d4;
  undefined4 uStack_34d0;
  undefined4 auStack_34cc [23];
  undefined4 auStack_3470 [23];
  undefined4 auStack_3414 [16];
  undefined4 uStack_33d4;
  undefined4 uStack_33d0;
  undefined4 uStack_33cc;
  undefined4 uStack_33c8;
  undefined4 uStack_33c4;
  undefined4 uStack_33c0;
  undefined4 uStack_33bc;
  undefined4 uStack_33b8;
  undefined4 uStack_33b4;
  undefined4 uStack_33b0;
  undefined4 uStack_33ac;
  undefined2 uStack_33a8;
  undefined4 uStack_33a4;
  undefined4 uStack_33a0;
  undefined4 uStack_339c;
  undefined4 uStack_3398;
  undefined1 auStack_3390 [384];
  undefined1 auStack_3210 [384];
  undefined1 auStack_3090 [384];
  undefined1 auStack_2f10 [384];
  undefined1 auStack_2d90 [384];
  undefined1 auStack_2c10 [384];
  undefined1 auStack_2a90 [384];
  undefined1 auStack_2910 [384];
  undefined1 auStack_2790 [384];
  undefined1 auStack_2610 [384];
  undefined1 auStack_2490 [384];
  undefined1 auStack_2310 [384];
  undefined1 auStack_2190 [384];
  undefined1 auStack_2010 [384];
  int aiStack_1e90 [20];
  undefined2 uStack_1e40;
  undefined2 uStack_1e3e;
  undefined1 uStack_1e3c;
  undefined4 uStack_1e38;
  undefined4 uStack_1e34;
  undefined4 uStack_1e30;
  undefined4 uStack_1e2c;
  undefined4 uStack_1e28;
  undefined4 uStack_1e24;
  undefined1 uStack_1e20;
  undefined4 uStack_1e1c;
  undefined4 uStack_1e18;
  undefined1 uStack_1e14;
  undefined4 uStack_1e10;
  undefined4 uStack_1e0c;
  undefined2 uStack_1e08;
  undefined2 uStack_1e06;
  undefined4 uStack_1e04;
  undefined4 uStack_1e00;
  undefined4 auStack_1dfc [23];
  undefined4 auStack_1da0 [23];
  undefined4 auStack_1d44 [16];
  undefined4 uStack_1d04;
  undefined4 uStack_1d00;
  undefined4 uStack_1cfc;
  undefined4 uStack_1cf8;
  undefined4 uStack_1cf4;
  undefined4 uStack_1cf0;
  undefined4 uStack_1cec;
  undefined4 uStack_1ce8;
  undefined4 uStack_1ce4;
  undefined4 uStack_1ce0;
  undefined4 uStack_1cdc;
  undefined2 uStack_1cd8;
  undefined4 uStack_1cd4;
  undefined4 uStack_1cd0;
  undefined4 uStack_1ccc;
  undefined4 uStack_1cc8;
  undefined1 auStack_1cc0 [4];
  char cStack_1cbc;
  undefined1 auStack_1b40 [4];
  char cStack_1b3c;
  undefined1 auStack_19c0 [4];
  char cStack_19bc;
  undefined1 auStack_1840 [4];
  char cStack_183c;
  undefined1 auStack_16c0 [4];
  char cStack_16bc;
  undefined1 auStack_1540 [4];
  char cStack_153c;
  undefined1 auStack_13c0 [4];
  char cStack_13bc;
  undefined1 auStack_1240 [4];
  char cStack_123c;
  undefined1 auStack_10c0 [4];
  char cStack_10bc;
  undefined1 auStack_f40 [4];
  char cStack_f3c;
  undefined1 auStack_dc0 [4];
  char cStack_dbc;
  undefined1 auStack_c40 [4];
  char cStack_c3c;
  undefined1 auStack_ac0 [384];
  undefined1 auStack_940 [384];
  undefined1 auStack_7c0 [384];
  undefined1 auStack_640 [384];
  undefined2 uStack_4c0;
  undefined2 uStack_4be;
  undefined1 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined1 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined1 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined2 uStack_488;
  undefined2 uStack_486;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 auStack_47c [23];
  undefined4 auStack_420 [23];
  undefined4 auStack_3c4 [16];
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined2 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined2 uStack_340;
  undefined2 uStack_33e;
  undefined1 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined1 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined2 uStack_308;
  undefined2 uStack_306;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 auStack_2fc [23];
  undefined4 auStack_2a0 [23];
  undefined4 auStack_244 [16];
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1be;
  undefined1 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 auStack_17c [23];
  undefined4 auStack_120 [23];
  undefined4 auStack_c4 [16];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_20 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  iVar3 = UiMgr_FindLayout(0x84);
  iVar17 = *piGpffff8d3c + iVar3 * 0x4f4 + 4;
  iVar4 = UiMgr_FindLayout(0x85);
  iVar3 = *piGpffff8d3c;
  iVar5 = UiMgr_FindLayout(7);
  iVar15 = *piGpffff8d3c + iVar5 * 0x4f4 + 4;
  iVar5 = UiMgr_FindLayout(0x86);
  iVar14 = *piGpffff8d3c + iVar5 * 0x4f4 + 4;
  iVar6 = UiMgr_FindLayout(0x91);
  iVar18 = (int)param_1;
  iVar5 = *(int *)(iVar18 + 0x65c);
  iVar19 = *piGpffff8d3c;
  *(undefined4 *)(iVar18 + 0x65c) = 0;
  iVar19 = iVar19 + iVar6 * 0x4f4 + 4;
  if (iVar5 != 0) {
    uVar7 = Msg_Get(0x8b);
    iVar5 = UiMgr_FindLayout(0x84);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    menuscr_sub_002535f0(iVar5 + 4,2);
    menuscr_sub_002535c0(iVar5 + 4,2);
    *(undefined4 *)(iVar5 + 0x340) = 1;
    *(undefined4 *)(iVar5 + 0x348) = uVar7;
    *(undefined4 *)(iVar5 + 0x344) = 1;
    if (*(int *)(iVar18 + 0x648) == 1) {
      uVar7 = Msg_Get(0x8c);
      iVar5 = UiMgr_FindLayout(0x84);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,0);
      menuscr_sub_002535c0(iVar5 + 4,0);
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar7;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
      uVar7 = Msg_Get(0x8d);
      iVar5 = UiMgr_FindLayout(0x84);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,1);
      menuscr_sub_002535c0(iVar5 + 4,1);
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar7;
      *(undefined4 *)(iVar5 + 0x330) = 1;
      uVar7 = Msg_Get(0x8a);
      iVar5 = UiMgr_FindLayout(0x86);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,1);
      menuscr_sub_002535c0(iVar5 + 4,1);
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar7;
      *(undefined4 *)(iVar5 + 0x330) = 1;
      uVar7 = Msg_Get(0x89);
      iVar5 = UiMgr_FindLayout(0x86);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,0);
      menuscr_sub_002535c0(iVar5 + 4,0);
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar7;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
      uVar7 = Msg_Get(0x40d);
      iVar5 = UiMgr_FindLayout(0x91);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,0);
      menuscr_sub_002535c0(iVar5 + 4,0);
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar7;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
      uVar7 = Msg_Get(0x40e);
      iVar5 = UiMgr_FindLayout(0x91);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,1);
      menuscr_sub_002535c0(iVar5 + 4,1);
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar7;
      *(undefined4 *)(iVar5 + 0x330) = 1;
      uVar7 = Msg_Get(0x424);
      iVar5 = UiMgr_FindLayout(0x9d);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,0);
      menuscr_sub_002535c0(iVar5 + 4,0);
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar7;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
      uVar7 = Msg_Get(0x425);
      iVar5 = UiMgr_FindLayout(0x9d);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,1);
      menuscr_sub_002535c0(iVar5 + 4,1);
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar7;
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    iVar6 = UiMgr_FindLayout(0x86);
    iVar5 = *piGpffff8d3c;
    uVar10 = Msg_Get(0x89);
    UiLayout_PlayAnim(iVar5 + iVar6 * 0x4f4 + 4,uVar10);
    iVar6 = UiMgr_FindLayout(0x91);
    iVar5 = *piGpffff8d3c;
    uVar10 = Msg_Get(0x40d);
    UiLayout_PlayAnim(iVar5 + iVar6 * 0x4f4 + 4,uVar10);
    uVar7 = Msg_Get(0x8a);
    iVar5 = UiMgr_FindLayout(0x86);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    menuscr_sub_002535f0(iVar5 + 4,1);
    menuscr_sub_002535c0(iVar5 + 4,1);
    *(undefined4 *)(iVar5 + 0x32c) = 0;
    *(undefined4 *)(iVar5 + 0x334) = uVar7;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar7 = Msg_Get(0x40e);
    iVar5 = UiMgr_FindLayout(0x91);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    menuscr_sub_002535f0(iVar5 + 4,1);
    menuscr_sub_002535c0(iVar5 + 4,1);
    *(undefined4 *)(iVar5 + 0x32c) = 0;
    *(undefined4 *)(iVar5 + 0x334) = uVar7;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar7 = Msg_Get(0x41b);
    iVar5 = UiMgr_FindLayout(0x9c);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    menuscr_sub_002535f0(iVar5 + 4,0);
    menuscr_sub_002535c0(iVar5 + 4,0);
    *(undefined4 *)(iVar5 + 0x318) = 0;
    *(undefined4 *)(iVar5 + 800) = uVar7;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar7 = Msg_Get(0x41c);
    iVar5 = UiMgr_FindLayout(0x9c);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    menuscr_sub_002535f0(iVar5 + 4,1);
    menuscr_sub_002535c0(iVar5 + 4,1);
    *(undefined4 *)(iVar5 + 0x32c) = 0;
    *(undefined4 *)(iVar5 + 0x334) = uVar7;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar7 = Msg_Get(0x426);
    iVar5 = UiMgr_FindLayout(0x9d);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    menuscr_sub_002535f0(iVar5 + 4,2);
    menuscr_sub_002535c0(iVar5 + 4,2);
    *(undefined4 *)(iVar5 + 0x340) = 1;
    *(undefined4 *)(iVar5 + 0x348) = uVar7;
    *(undefined4 *)(iVar5 + 0x344) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    iVar5 = *(int *)(iVar18 + 0x648);
    if ((((iVar5 == 1) || (iVar5 == 0x26)) || (iVar5 == 0x18)) || (iVar5 == 0x27)) {
      Menu_ShowDialog(iGpffff8d68 + 0x654,0x124,0);
      Menu_SetCursorAlpha(iGpffff8d68 + 0x654,1);
    }
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,iVar15,0x25,8);
  }
  UiElem_SetPropFloat(0,iVar15,0x25,8);
  iVar5 = *(int *)(iVar18 + 0x648);
  if (((iVar5 == 0x16) || (iVar5 == 0x10)) ||
     ((iVar5 == 0xd || ((iVar5 == 0x22 || (iVar5 - 0x17U < 2)))))) {
    iVar6 = UiMgr_FindLayout(0x9d);
    iVar5 = *piGpffff8d3c;
    uVar10 = Msg_Get(0x424);
    UiLayout_PlayAnim(iVar5 + iVar6 * 0x4f4 + 4,uVar10);
    lVar8 = UiLayout_UpdateAnimById(0x86,0);
    if (lVar8 == 0) {
      *(undefined4 *)(iVar18 + 0x658) = 0;
    }
  }
  else {
    lVar8 = UiLayout_UpdateAnimById(0x86,0);
    if (lVar8 == 0) {
      *(undefined4 *)(iVar18 + 0x658) = 0;
    }
  }
  if (*(int *)(iVar18 + 0x660) != 0) {
    iVar5 = *(int *)(iVar18 + 0x650);
    if ((((iVar5 == 0xc) || (iVar5 == 0xd)) || (iVar5 == 0x22)) || (iVar5 == 0x17)) {
      UiElem_SetPropFloat(0x3f800000,iVar15,0x25,8);
      UiElem_SetPropFloat(0x3f800000,iVar15,0x24,8);
      *(undefined4 *)(iVar18 + 0x660) = 0;
    }
    else {
      if (iVar5 == 1) {
        UiLayout_UpdateAnimById(0x9c);
      }
      UiLayout_UpdateAnimById(0x86,1);
      *(undefined4 *)(iVar18 + 0x660) = 0;
    }
  }
  if ((*(int *)(iVar18 + 0x644) == 0) ||
     (*(int *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100) == -1)) {
    if (*(int *)(iVar18 + 0x668) == 1) {
      lVar8 = UiLayout_UpdateAnimById(0x84,0);
      if (lVar8 == 0) {
        *(undefined4 *)(iVar18 + 0x668) = 0;
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
        uVar7 = Msg_Get(0x8c);
        iVar5 = UiMgr_FindLayout(0x84);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,0);
        menuscr_sub_002535c0(iVar5 + 4,0);
        *(undefined4 *)(iVar5 + 0x318) = 0;
        *(undefined4 *)(iVar5 + 800) = uVar7;
        *(undefined4 *)(iVar5 + 0x31c) = 1;
        uVar7 = Msg_Get(0x89);
        iVar5 = UiMgr_FindLayout(0x86);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,0);
        menuscr_sub_002535c0(iVar5 + 4,0);
        *(undefined4 *)(iVar5 + 0x318) = 0;
        *(undefined4 *)(iVar5 + 800) = uVar7;
        *(undefined4 *)(iVar5 + 0x31c) = 1;
        uVar7 = Msg_Get(0x8a);
        iVar5 = UiMgr_FindLayout(0x86);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,1);
        menuscr_sub_002535c0(iVar5 + 4,1);
        *(undefined4 *)(iVar5 + 0x32c) = 0;
        *(undefined4 *)(iVar5 + 0x334) = uVar7;
        *(undefined4 *)(iVar5 + 0x330) = 1;
        uVar7 = Msg_Get(0x40d);
        iVar5 = UiMgr_FindLayout(0x91);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,0);
        menuscr_sub_002535c0(iVar5 + 4,0);
        *(undefined4 *)(iVar5 + 0x318) = 0;
        *(undefined4 *)(iVar5 + 800) = uVar7;
        *(undefined4 *)(iVar5 + 0x31c) = 1;
        uVar7 = Msg_Get(0x40e);
        iVar5 = UiMgr_FindLayout(0x91);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,1);
        menuscr_sub_002535c0(iVar5 + 4,1);
        *(undefined4 *)(iVar5 + 0x32c) = 0;
        *(undefined4 *)(iVar5 + 0x334) = uVar7;
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
    }
    else if ((*(int *)(iVar18 + 0x668) == 2) && (lVar8 = UiLayout_UpdateAnimById(0x84), lVar8 == 0))
    {
      *(undefined4 *)(iVar18 + 0x668) = 0;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
      uVar7 = Msg_Get(0x8d);
      iVar5 = UiMgr_FindLayout(0x84);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,1);
      menuscr_sub_002535c0(iVar5 + 4,1);
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar7;
      *(undefined4 *)(iVar5 + 0x330) = 1;
      uVar7 = Msg_Get(0x89);
      iVar5 = UiMgr_FindLayout(0x86);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,0);
      menuscr_sub_002535c0(iVar5 + 4,0);
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar7;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
      uVar7 = Msg_Get(0x8a);
      iVar5 = UiMgr_FindLayout(0x86);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,1);
      menuscr_sub_002535c0(iVar5 + 4,1);
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar7;
      *(undefined4 *)(iVar5 + 0x330) = 1;
      uVar7 = Msg_Get(0x40d);
      iVar5 = UiMgr_FindLayout(0x91);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,0);
      menuscr_sub_002535c0(iVar5 + 4,0);
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar7;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
      uVar7 = Msg_Get(0x40e);
      iVar5 = UiMgr_FindLayout(0x91);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      menuscr_sub_002535f0(iVar5 + 4,1);
      menuscr_sub_002535c0(iVar5 + 4,1);
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar7;
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
LAB_00250bc4:
    iVar5 = *(int *)(iVar18 + 0x668);
  }
  else {
    auStack_20[1] = DAT_0032c224;
    auStack_20[0] = DAT_0032c220;
    auStack_20[3] = DAT_0032c22c;
    auStack_20[2] = DAT_0032c228;
    uStack_c = DAT_0032c234;
    uStack_10 = DAT_0032c230;
    auStack_40[1] = DAT_0032c244;
    auStack_40[0] = DAT_0032c240;
    auStack_40[2] = DAT_0032c248;
    auStack_40[3] = DAT_0032c24c;
    uStack_30 = DAT_0032c250;
    uStack_2c = DAT_0032c254;
    iVar5 = UiMgr_FindLayout(0x9d);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4 + 4;
    UiElem_SetPropFloat(auStack_20[*(int *)(iVar18 + 0x62c)],iVar5,4,1);
    UiElem_SetPropFloat(auStack_40[*(int *)(iVar18 + 0x62c)],iVar5,4,2);
    if (*(int *)(iVar18 + 0x668) == 1) {
      RivalDb_Copy(auStack_640,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
      sVar1 = RivalRec_GetCourse(auStack_640);
      if (sVar1 == -1) {
        lVar8 = UiLayout_UpdateAnimById(0x84,0);
        lVar9 = UiLayout_UpdateAnimById(0x86,1);
        if (lVar8 != 0 || lVar9 != 0) goto LAB_00250cec;
        lVar8 = UiLayout_UpdateAnimById(0x86,0);
        if (lVar8 != 0) {
          iVar5 = *(int *)(iVar18 + 0x62c);
          goto LAB_00250cf0;
        }
LAB_00250d68:
        *(undefined4 *)(iVar18 + 0x668) = 0;
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
        uVar7 = Msg_Get(0x8c);
        iVar5 = UiMgr_FindLayout(0x84);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,0);
        menuscr_sub_002535c0(iVar5 + 4,0);
        *(undefined4 *)(iVar5 + 0x318) = 0;
        *(undefined4 *)(iVar5 + 800) = uVar7;
        *(undefined4 *)(iVar5 + 0x31c) = 1;
        uVar7 = Msg_Get(0x89);
        iVar5 = UiMgr_FindLayout(0x86);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,0);
        menuscr_sub_002535c0(iVar5 + 4,0);
        *(undefined4 *)(iVar5 + 0x318) = 0;
        *(undefined4 *)(iVar5 + 800) = uVar7;
        *(undefined4 *)(iVar5 + 0x31c) = 1;
        uVar7 = Msg_Get(0x8a);
        iVar5 = UiMgr_FindLayout(0x86);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,1);
        menuscr_sub_002535c0(iVar5 + 4,1);
        *(undefined4 *)(iVar5 + 0x32c) = 0;
        *(undefined4 *)(iVar5 + 0x334) = uVar7;
        *(undefined4 *)(iVar5 + 0x330) = 1;
        uVar7 = Msg_Get(0x40d);
        iVar5 = UiMgr_FindLayout(0x91);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,0);
        menuscr_sub_002535c0(iVar5 + 4,0);
        *(undefined4 *)(iVar5 + 0x318) = 0;
        *(undefined4 *)(iVar5 + 800) = uVar7;
        *(undefined4 *)(iVar5 + 0x31c) = 1;
        uVar7 = Msg_Get(0x40e);
        iVar5 = UiMgr_FindLayout(0x91);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,1);
        menuscr_sub_002535c0(iVar5 + 4,1);
        *(undefined4 *)(iVar5 + 0x32c) = 0;
        *(undefined4 *)(iVar5 + 0x334) = uVar7;
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
      else {
LAB_00250cec:
        iVar5 = *(int *)(iVar18 + 0x62c);
LAB_00250cf0:
        RivalDb_Copy(auStack_7c0,*(undefined2 *)(iVar5 * 4 + iVar18 + 0x100));
        sVar1 = RivalRec_GetCourse(auStack_7c0);
        if (sVar1 != -1) {
          lVar8 = UiLayout_UpdateAnimById(0x84,0);
          lVar9 = UiLayout_UpdateAnimById(0x91,1);
          if ((lVar8 == 0 && lVar9 == 0) && (lVar8 = UiLayout_UpdateAnimById(0x91,0), lVar8 == 0))
          goto LAB_00250d68;
        }
      }
      UiLayout_UpdateAnimById(0x9d,0);
LAB_00250994:
      iVar5 = *(int *)(iVar18 + 0x644);
    }
    else {
      if (*(int *)(iVar18 + 0x668) != 2) {
        UiLayout_UpdateAnimById(0x9d);
        goto LAB_00250994;
      }
      RivalDb_Copy(auStack_940,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
      sVar1 = RivalRec_GetCourse(auStack_940);
      if (sVar1 == -1) {
        lVar8 = UiLayout_UpdateAnimById(0x84,1);
        lVar9 = UiLayout_UpdateAnimById(0x86,1);
        if (lVar8 != 0 || lVar9 != 0) goto LAB_0025073c;
        lVar8 = UiLayout_UpdateAnimById(0x86,0);
        if (lVar8 != 0) {
          iVar5 = *(int *)(iVar18 + 0x62c);
          goto LAB_00250740;
        }
LAB_002507b8:
        *(undefined4 *)(iVar18 + 0x668) = 0;
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
        uVar7 = Msg_Get(0x8d);
        iVar5 = UiMgr_FindLayout(0x84);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,1);
        menuscr_sub_002535c0(iVar5 + 4,1);
        *(undefined4 *)(iVar5 + 0x32c) = 0;
        *(undefined4 *)(iVar5 + 0x334) = uVar7;
        *(undefined4 *)(iVar5 + 0x330) = 1;
        uVar7 = Msg_Get(0x89);
        iVar5 = UiMgr_FindLayout(0x86);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,0);
        menuscr_sub_002535c0(iVar5 + 4,0);
        *(undefined4 *)(iVar5 + 0x318) = 0;
        *(undefined4 *)(iVar5 + 800) = uVar7;
        *(undefined4 *)(iVar5 + 0x31c) = 1;
        uVar7 = Msg_Get(0x8a);
        iVar5 = UiMgr_FindLayout(0x86);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,1);
        menuscr_sub_002535c0(iVar5 + 4,1);
        *(undefined4 *)(iVar5 + 0x32c) = 0;
        *(undefined4 *)(iVar5 + 0x334) = uVar7;
        *(undefined4 *)(iVar5 + 0x330) = 1;
        uVar7 = Msg_Get(0x40d);
        iVar5 = UiMgr_FindLayout(0x91);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,0);
        menuscr_sub_002535c0(iVar5 + 4,0);
        *(undefined4 *)(iVar5 + 0x318) = 0;
        *(undefined4 *)(iVar5 + 800) = uVar7;
        *(undefined4 *)(iVar5 + 0x31c) = 1;
        uVar7 = Msg_Get(0x40e);
        iVar5 = UiMgr_FindLayout(0x91);
        iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
        menuscr_sub_002535f0(iVar5 + 4,1);
        menuscr_sub_002535c0(iVar5 + 4,1);
        *(undefined4 *)(iVar5 + 0x32c) = 0;
        *(undefined4 *)(iVar5 + 0x334) = uVar7;
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
      else {
LAB_0025073c:
        iVar5 = *(int *)(iVar18 + 0x62c);
LAB_00250740:
        RivalDb_Copy(auStack_ac0,*(undefined2 *)(iVar5 * 4 + iVar18 + 0x100));
        sVar1 = RivalRec_GetCourse(auStack_ac0);
        if (sVar1 != -1) {
          lVar8 = UiLayout_UpdateAnimById(0x84,1);
          lVar9 = UiLayout_UpdateAnimById(0x91,1);
          if ((lVar8 == 0 && lVar9 == 0) && (lVar8 = UiLayout_UpdateAnimById(0x91,0), lVar8 == 0))
          goto LAB_002507b8;
        }
      }
      UiLayout_UpdateAnimById(0x9d,0);
      iVar5 = *(int *)(iVar18 + 0x644);
    }
    if (iVar5 != 1) goto LAB_00250bc4;
    iVar5 = UiMgr_FindLayout(0x9d);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
    iVar5 = *(int *)(iVar18 + 0x668);
  }
  if (iVar5 == 0) {
    uVar7 = Msg_Get(0x424);
    iVar5 = UiMgr_FindLayout(0x9d);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    menuscr_sub_002535f0(iVar5 + 4,0);
    menuscr_sub_002535c0(iVar5 + 4,0);
    *(undefined4 *)(iVar5 + 0x318) = 0;
    *(undefined4 *)(iVar5 + 800) = uVar7;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
  }
  if (*(int *)(iVar18 + 0x644) != 0) {
    if (*(int *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100) == -1) {
      UiElem_SetPropFloat(0,iVar17,0xf,8);
    }
    else {
      UiElem_SetPropFloat(0x3f800000,iVar17,0xf,8);
    }
    UiElem_SetPropFloat(0,iVar17,0xe,8);
  }
  if (*(int *)(iVar18 + 0x668) == 1) {
    scrcareer_sub_00245af0(param_1,*(undefined4 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100),0)
    ;
    scrcareer_sub_00245af0(param_1,*(undefined4 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0xfc),1);
    iVar5 = *(int *)(iVar18 + 0x668);
  }
  else {
    iVar5 = *(int *)(iVar18 + 0x668);
  }
  if (iVar5 == 2) {
    scrcareer_sub_00245af0(param_1,*(undefined4 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100),0)
    ;
    scrcareer_sub_00245af0(param_1,*(undefined4 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x104),1)
    ;
    iVar5 = *(int *)(iVar18 + 0x668);
  }
  else {
    iVar5 = *(int *)(iVar18 + 0x668);
  }
  if (iVar5 == 0) {
    if ((*(int *)(iVar18 + 0x648) == 1) || (*(int *)(iVar18 + 0x62c) == *(int *)(iVar18 + 0x6a4))) {
      scrcareer_sub_00245af0
                (param_1,*(undefined4 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100),0);
    }
    else {
      scrcareer_sub_00245af0
                (param_1,*(undefined4 *)(*(int *)(iVar18 + 0x6a4) * 4 + iVar18 + 0x100),0);
    }
  }
  uVar10 = Race_GetCourseVariant();
  uVar10 = MsgId_ForOption(uVar10);
  uVar10 = MsgId_ForSlot(uVar10,1);
  MenuWnd_DrawLabel(0x85,3,0x37d,1,uVar10);
  if (*(int *)(iVar18 + 0x644) == 0) {
LAB_0025188c:
    iVar5 = *(int *)(iVar18 + 0x644);
  }
  else {
    if (*(int *)(iVar18 + 0x668) == 0) {
      if ((*(int *)(iVar18 + 0x62c) < 0) ||
         (iVar5 = *(int *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100), iVar5 < 0)) {
LAB_00251538:
        iVar5 = *(int *)(iVar18 + 0x6a4);
        if ((((-1 < iVar5) && (iVar6 = *(int *)(iVar5 * 4 + iVar18 + 0x100), -1 < iVar6)) &&
            (*(int *)(iVar18 + 0x648) != 1)) && (*(int *)(iVar18 + 0x62c) != iVar5)) {
          uVar10 = Profile_Get(0);
          sVar1 = profile_sub_001c0890(uVar10,iVar6);
          if (0 < sVar1) {
            RivalDb_Copy(auStack_f40,*(undefined2 *)(*(int *)(iVar18 + 0x6a4) * 4 + iVar18 + 0x100))
            ;
            if ((cStack_f3c == '\x05') ||
               (RivalDb_Copy(auStack_10c0,
                             *(undefined2 *)(*(int *)(iVar18 + 0x6a4) * 4 + iVar18 + 0x100)),
               cStack_10bc == '\x06')) {
              UiElem_SetPropFloat(0,iVar17,1,8);
            }
            else {
              UiElem_SetPropFloat(0x3f800000,iVar17,1,8);
            }
            goto LAB_00251398;
          }
        }
        UiElem_SetPropFloat(0,iVar17,1,8);
      }
      else {
        uVar10 = Profile_Get(0);
        sVar1 = profile_sub_001c0890(uVar10,iVar5);
        if (sVar1 < 1) goto LAB_00251538;
        RivalDb_Copy(auStack_c40,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
        if ((cStack_c3c == '\x05') ||
           (RivalDb_Copy(auStack_dc0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100))
           , cStack_dbc == '\x06')) {
          UiElem_SetPropFloat(0,iVar17,1,8);
        }
        else {
          UiElem_SetPropFloat(0x3f800000,iVar17,1,8);
        }
      }
LAB_00251398:
      UiElem_SetPropFloat(0,iVar17,3,8);
    }
    if (*(int *)(iVar18 + 0x668) == 1) {
      iVar5 = *(int *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100);
      if (iVar5 < 0) {
LAB_00251668:
        UiElem_SetPropFloat(0,iVar17,1,8);
LAB_00251468:
        iVar5 = *(int *)(iVar18 + 0x62c);
      }
      else {
        uVar10 = Profile_Get(0);
        sVar1 = profile_sub_001c0890(uVar10,iVar5);
        if (sVar1 < 1) goto LAB_00251668;
        RivalDb_Copy(auStack_1240,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
        if ((cStack_123c != '\x05') &&
           (RivalDb_Copy(auStack_13c0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100)
                        ), cStack_13bc != '\x06')) {
          UiElem_SetPropFloat(0x3f800000,iVar17,1,8);
          goto LAB_00251468;
        }
        UiElem_SetPropFloat(0,iVar17,1,8);
        iVar5 = *(int *)(iVar18 + 0x62c);
      }
      iVar5 = *(int *)(iVar5 * 4 + iVar18 + 0xfc);
      if (iVar5 < 0) {
LAB_002516a0:
        UiElem_SetPropFloat(0,iVar17,3,8);
        goto LAB_002516b4;
      }
      uVar10 = Profile_Get(0);
      sVar1 = profile_sub_001c0890(uVar10,iVar5);
      if (sVar1 < 1) goto LAB_002516a0;
      RivalDb_Copy(auStack_1540,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0xfc));
      if ((cStack_153c == '\x05') ||
         (RivalDb_Copy(auStack_16c0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0xfc)),
         cStack_16bc == '\x06')) {
        UiElem_SetPropFloat(0,iVar17,3,8);
        goto LAB_002516b4;
      }
      UiElem_SetPropFloat(0x3f800000,iVar17,3,8);
      iVar5 = *(int *)(iVar18 + 0x668);
    }
    else {
LAB_002516b4:
      iVar5 = *(int *)(iVar18 + 0x668);
    }
    if (iVar5 != 2) goto LAB_0025188c;
    iVar5 = *(int *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100);
    if (iVar5 < 0) {
LAB_00251840:
      UiElem_SetPropFloat(0,iVar17,1,8);
LAB_00251770:
      iVar5 = *(int *)(iVar18 + 0x62c);
    }
    else {
      uVar10 = Profile_Get(0);
      sVar1 = profile_sub_001c0890(uVar10,iVar5);
      if (sVar1 < 1) goto LAB_00251840;
      RivalDb_Copy(auStack_1840,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
      if ((cStack_183c != '\x05') &&
         (RivalDb_Copy(auStack_19c0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100)),
         cStack_19bc != '\x06')) {
        UiElem_SetPropFloat(0x3f800000,iVar17,1,8);
        goto LAB_00251770;
      }
      UiElem_SetPropFloat(0,iVar17,1,8);
      iVar5 = *(int *)(iVar18 + 0x62c);
    }
    iVar5 = *(int *)(iVar5 * 4 + iVar18 + 0x104);
    if (iVar5 < 0) {
LAB_00251878:
      UiElem_SetPropFloat(0,iVar17,3,8);
      goto LAB_0025188c;
    }
    uVar10 = Profile_Get(0);
    sVar1 = profile_sub_001c0890(uVar10,iVar5);
    if (sVar1 < 1) goto LAB_00251878;
    RivalDb_Copy(auStack_1b40,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x104));
    if ((cStack_1b3c == '\x05') ||
       (RivalDb_Copy(auStack_1cc0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x104)),
       cStack_1cbc == '\x06')) {
      UiElem_SetPropFloat(0,iVar17,1,8);
      goto LAB_0025188c;
    }
    UiElem_SetPropFloat(0x3f800000,iVar17,3,8);
    iVar5 = *(int *)(iVar18 + 0x644);
  }
  if (iVar5 == 0) {
LAB_00251a68:
    uVar7 = *(undefined4 *)(iVar18 + 0x1c);
  }
  else {
    if (*(int *)(iVar18 + 0x668) == 0) {
      if (*(int *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100) < 0) {
        if ((*(int *)(iVar18 + 0x648) == 1) ||
           (*(int *)(iVar18 + 0x62c) == *(int *)(iVar18 + 0x6a4))) {
          UiElem_SetPropFloat(0,iVar17,0,8);
        }
        else {
          UiElem_SetPropFloat(0x3f800000,iVar17,0,8);
        }
      }
      else {
        UiElem_SetPropFloat(0x3f800000,iVar17,0,8);
      }
      UiElem_SetPropFloat(0,iVar17,2,8);
    }
    if (*(int *)(iVar18 + 0x668) == 1) {
      if (*(int *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100) < 0) {
        UiElem_SetPropFloat(0,iVar17,0,8);
        iVar5 = *(int *)(iVar18 + 0x62c);
      }
      else {
        UiElem_SetPropFloat(0x3f800000,iVar17,0,8);
        iVar5 = *(int *)(iVar18 + 0x62c);
      }
      if (*(int *)(iVar5 * 4 + iVar18 + 0xfc) < 0) {
        UiElem_SetPropFloat(0,iVar17,2,8);
        goto LAB_002519b8;
      }
      UiElem_SetPropFloat(0x3f800000,iVar17,2,8);
      iVar5 = *(int *)(iVar18 + 0x668);
    }
    else {
LAB_002519b8:
      iVar5 = *(int *)(iVar18 + 0x668);
    }
    if (iVar5 != 2) goto LAB_00251a68;
    if (*(int *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100) < 0) {
      UiElem_SetPropFloat(0,iVar17,0,8);
      iVar5 = *(int *)(iVar18 + 0x62c);
    }
    else {
      UiElem_SetPropFloat(0x3f800000,iVar17,0,8);
      iVar5 = *(int *)(iVar18 + 0x62c);
    }
    if (*(int *)(iVar5 * 4 + iVar18 + 0x104) < 0) {
      UiElem_SetPropFloat(0,iVar17,2,8);
      goto LAB_00251a68;
    }
    UiElem_SetPropFloat(0x3f800000,iVar17,2,8);
    uVar7 = *(undefined4 *)(iVar18 + 0x1c);
  }
  UiElem_SetPropInt(iVar3 + iVar4 * 0x4f4 + 4,1,9,uVar7);
  UiLayout_UpdateAnimById(0x85,0);
  iVar3 = UiMgr_FindLayout(0x84);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x85);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  if (*(int *)(iVar18 + 0x668) == 1) {
    iVar3 = UiMgr_FindLayout(0x91);
    iVar3 = *(int *)(*piGpffff8d3c + iVar3 * 0x4f4 + 0x330);
    iVar5 = UiMgr_FindLayout(0x86);
    if (*(int *)(*piGpffff8d3c + iVar5 * 0x4f4 + 0x330) != 1 || iVar3 != 1) goto LAB_00251af0;
    iVar3 = *(int *)(iVar18 + 0x62c) + -1;
  }
  else {
LAB_00251af0:
    if (*(int *)(iVar18 + 0x668) == 2) {
      iVar3 = UiMgr_FindLayout(0x91);
      iVar3 = *(int *)(*piGpffff8d3c + iVar3 * 0x4f4 + 0x330);
      iVar5 = UiMgr_FindLayout(0x86);
      if (*(int *)(*piGpffff8d3c + iVar5 * 0x4f4 + 0x330) == 1 && iVar3 == 1) {
        iVar3 = *(int *)(iVar18 + 0x62c) + 1;
        goto LAB_00251b04;
      }
    }
    iVar3 = -1;
  }
LAB_00251b04:
  if (iVar3 < 0) {
LAB_00252314:
    if (((iVar3 == -1) && (-1 < *(int *)(iVar18 + 0x62c))) &&
       (iVar3 = *(int *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100), -1 < iVar3)) {
      RivalDb_Copy(&uStack_3510,(short)iVar3);
      puVar13 = auStack_34cc;
      puVar12 = auStack_2fc;
      iVar3 = 0x17;
      uStack_330 = uStack_3500;
      uStack_328 = uStack_34f8;
      uStack_324 = uStack_34f4;
      uStack_338 = uStack_3508;
      uStack_33c = uStack_350c;
      uStack_334 = uStack_3504;
      uStack_318 = uStack_34e8;
      uStack_340 = uStack_3510;
      uStack_33e = uStack_350e;
      uStack_32c = uStack_34fc;
      uStack_320 = uStack_34f0;
      uStack_31c = uStack_34ec;
      uStack_304 = uStack_34d4;
      uStack_314 = uStack_34e4;
      uStack_310 = uStack_34e0;
      uStack_30c = uStack_34dc;
      uStack_308 = uStack_34d8;
      uStack_306 = uStack_34d6;
      uStack_300 = uStack_34d0;
      do {
        iVar3 = iVar3 + -1;
        *puVar12 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar12 = puVar12 + 1;
      } while (0 < iVar3);
      puVar13 = auStack_3470;
      puVar12 = auStack_2a0;
      iVar3 = 0x17;
      do {
        iVar3 = iVar3 + -1;
        *puVar12 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar12 = puVar12 + 1;
      } while (0 < iVar3);
      puVar13 = auStack_3414;
      puVar12 = auStack_244;
      iVar3 = 8;
      do {
        iVar3 = iVar3 + -1;
        uVar7 = puVar13[1];
        *puVar12 = *puVar13;
        puVar12[1] = uVar7;
        puVar13 = puVar13 + 2;
        puVar12 = puVar12 + 2;
      } while (0 < iVar3);
      uStack_204 = uStack_33d4;
      uStack_200 = uStack_33d0;
      uStack_1fc = uStack_33cc;
      uStack_1f8 = uStack_33c8;
      uStack_1f4 = uStack_33c4;
      uStack_1d4 = uStack_33a4;
      uStack_1f0 = uStack_33c0;
      uStack_1d0 = uStack_33a0;
      uStack_1cc = uStack_339c;
      uStack_1d8 = uStack_33a8;
      uStack_1ec = uStack_33bc;
      uStack_1e8 = uStack_33b8;
      uStack_1e4 = uStack_33b4;
      uStack_1e0 = uStack_33b0;
      uStack_1c8 = uStack_3398;
      uStack_1dc = uStack_33ac;
      switch(uStack_350c) {
      case 0:
        RivalRec_IsValid(&uStack_340);
        break;
      case 2:
        UiElem_SetPropInt(iVar14,1,0x16,0x44);
        iVar3 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
        MenuWnd_DrawText(0x86,2,0x75);
        break;
      case 3:
        UiElem_SetPropInt(iVar14,1,0x16,0x41);
        iVar3 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
        MenuWnd_DrawText(0x86,2,0x76);
        break;
      case 4:
        UiElem_SetPropInt(iVar14,1,0x16,0x3f);
        iVar3 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
        MenuWnd_DrawText(0x86,2,0x77);
        break;
      case 5:
        UiElem_SetPropInt(iVar14,1,0x16,0x40);
        iVar3 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
        MenuWnd_DrawText(0x86,2,0xa3);
        break;
      case 6:
        UiElem_SetPropInt(iVar14,1,0x16,0x40);
        iVar3 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
        MenuWnd_DrawText(0x86,2,0xa4);
        break;
      case 7:
        iVar3 = 0;
        do {
          iVar5 = *(int *)(iVar18 + *(int *)(iVar18 + 0x62c) * 4 + 0x100);
          Rival_GetRecord(aiStack_3560,iVar3);
          if (iVar5 == aiStack_3560[0]) {
            UiElem_SetPropInt(iVar14,1,0x16,*(undefined4 *)(&DAT_0032c330 + iVar3 * 4));
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x14);
        iVar3 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
        MenuWnd_DrawText(0x86,2,0x78);
        break;
      case 8:
        UiElem_SetPropInt(iVar14,1,0x16,0x43);
        iVar3 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
        MenuWnd_DrawText(0x86,2,0x79);
        break;
      case 9:
        UiElem_SetPropInt(iVar14,1,0x16,0x42);
        iVar3 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
        MenuWnd_DrawText(0x86,2,0x7a);
        break;
      case 10:
        UiElem_SetPropInt(iVar14,1,0x16,0x3e);
        iVar3 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
        MenuWnd_DrawText(0x86,2,0x7c);
        break;
      case 0xb:
        iVar3 = UiMgr_FindLayout(0x91);
        UiElem_SetPropFloat(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0xc,8);
        iVar3 = UiMgr_FindLayout(0x91);
        UiElem_SetPropFloat(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x11,8);
        RivalDb_Copy(auStack_36e0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
        sVar1 = RivalRec_GetCourse(auStack_36e0);
        UiElem_SetPropInt(iVar19,2,0x16,*(undefined4 *)(&DAT_0032c380 + sVar1 * 4));
        iVar3 = UiMgr_FindLayout(0x91);
        UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
        RivalDb_Copy(auStack_3860,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
        uVar2 = RivalRec_GetCourse(auStack_3860);
        uVar10 = MsgId_CourseName(uVar2);
        MenuWnd_DrawText(0x91,0x14,uVar10);
        if (*(int *)(iVar18 + 0x668) == 1) {
          RivalDb_Copy(auStack_39e0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
          sVar1 = RivalRec_GetCourse(auStack_39e0);
          if (sVar1 != -1) {
            RivalDb_Copy(auStack_3b60,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100)
                        );
            uVar2 = RivalRec_GetCourse(auStack_3b60);
            uVar10 = Msg_TeamInfo(uVar2);
            uVar10 = Msg_MakerCountry(uVar10);
            RivalDb_Copy(auStack_3ce0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100)
                        );
            uVar2 = RivalRec_GetCourse(auStack_3ce0);
            uVar11 = Msg_TeamInfo(uVar2);
            uVar11 = Msg_MakerName(uVar11);
            MenuWnd_DrawLabel(0x84,uGpffff8418,0x45,uVar10,uVar11);
          }
          RivalDb_Copy(auStack_3e60,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0xfc));
          sVar1 = RivalRec_GetCourse(auStack_3e60);
          if (sVar1 != -1) {
            RivalDb_Copy(auStack_3fe0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0xfc))
            ;
            uVar2 = RivalRec_GetCourse(auStack_3fe0);
            uVar10 = Msg_TeamInfo(uVar2);
            uVar10 = Msg_MakerCountry(uVar10);
            RivalDb_Copy(auStack_4160,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100)
                        );
            uVar2 = RivalRec_GetCourse(auStack_4160);
            uVar11 = Msg_TeamInfo(uVar2);
            uVar11 = Msg_MakerName(uVar11);
            MenuWnd_DrawLabel(0x84,uGpffff841c,0x45,uVar10,uVar11);
          }
        }
        else if (*(int *)(iVar18 + 0x668) == 2) {
          RivalDb_Copy(auStack_42e0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
          sVar1 = RivalRec_GetCourse(auStack_42e0);
          if (sVar1 != -1) {
            RivalDb_Copy(auStack_4460,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100)
                        );
            uVar2 = RivalRec_GetCourse(auStack_4460);
            uVar10 = Msg_TeamInfo(uVar2);
            uVar10 = Msg_MakerCountry(uVar10);
            RivalDb_Copy(auStack_45e0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100)
                        );
            uVar2 = RivalRec_GetCourse(auStack_45e0);
            uVar11 = Msg_TeamInfo(uVar2);
            uVar11 = Msg_MakerName(uVar11);
            MenuWnd_DrawLabel(0x84,uGpffff8418,0x45,uVar10,uVar11);
          }
          RivalDb_Copy(auStack_4760,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x104));
          sVar1 = RivalRec_GetCourse(auStack_4760);
          if (sVar1 != -1) {
            RivalDb_Copy(auStack_48e0,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x104)
                        );
            uVar2 = RivalRec_GetCourse(auStack_48e0);
            uVar10 = Msg_TeamInfo(uVar2);
            uVar10 = Msg_MakerCountry(uVar10);
            RivalDb_Copy(auStack_4a60,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x104)
                        );
            uVar2 = RivalRec_GetCourse(auStack_4a60);
            uVar11 = Msg_TeamInfo(uVar2);
            uVar11 = Msg_MakerName(uVar11);
            MenuWnd_DrawLabel(0x84,uGpffff841c,0x45,uVar10,uVar11);
          }
        }
        MenuWnd_DrawText(0x91,0x15,0x43a);
      }
    }
    goto switchD_00251cf4_caseD_1;
  }
  iVar5 = iVar3 * 4 + iVar18;
  piVar16 = (int *)(iVar5 + 0x100);
  iVar5 = *(int *)(iVar5 + 0x100);
  if (iVar5 < 0) goto LAB_00252314;
  RivalDb_Copy(&uStack_1e40,(short)iVar5);
  puVar13 = auStack_1dfc;
  puVar12 = auStack_17c;
  iVar3 = 0x17;
  uStack_1b0 = uStack_1e30;
  uStack_1a8 = uStack_1e28;
  uStack_1a4 = uStack_1e24;
  uStack_1b8 = uStack_1e38;
  uStack_1bc = uStack_1e3c;
  uStack_1b4 = uStack_1e34;
  uStack_198 = uStack_1e18;
  uStack_1c0 = uStack_1e40;
  uStack_1be = uStack_1e3e;
  uStack_1ac = uStack_1e2c;
  uStack_1a0 = uStack_1e20;
  uStack_19c = uStack_1e1c;
  uStack_184 = uStack_1e04;
  uStack_194 = uStack_1e14;
  uStack_190 = uStack_1e10;
  uStack_18c = uStack_1e0c;
  uStack_188 = uStack_1e08;
  uStack_186 = uStack_1e06;
  uStack_180 = uStack_1e00;
  do {
    iVar3 = iVar3 + -1;
    *puVar12 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar3);
  puVar13 = auStack_1da0;
  puVar12 = auStack_120;
  iVar3 = 0x17;
  do {
    iVar3 = iVar3 + -1;
    *puVar12 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar3);
  puVar13 = auStack_1d44;
  puVar12 = auStack_c4;
  iVar3 = 8;
  do {
    iVar3 = iVar3 + -1;
    uVar7 = puVar13[1];
    *puVar12 = *puVar13;
    puVar12[1] = uVar7;
    puVar13 = puVar13 + 2;
    puVar12 = puVar12 + 2;
  } while (0 < iVar3);
  uStack_84 = uStack_1d04;
  uStack_80 = uStack_1d00;
  uStack_7c = uStack_1cfc;
  uStack_78 = uStack_1cf8;
  uStack_74 = uStack_1cf4;
  uStack_54 = uStack_1cd4;
  uStack_70 = uStack_1cf0;
  uStack_50 = uStack_1cd0;
  uStack_4c = uStack_1ccc;
  uStack_58 = uStack_1cd8;
  uStack_6c = uStack_1cec;
  uStack_68 = uStack_1ce8;
  uStack_64 = uStack_1ce4;
  uStack_60 = uStack_1ce0;
  uStack_48 = uStack_1cc8;
  uStack_5c = uStack_1cdc;
  switch(uStack_1e3c) {
  case 0:
    RivalRec_IsValid(&uStack_1c0);
    iVar3 = *(int *)(iVar18 + 0x648);
    goto LAB_00252b50;
  case 2:
    UiElem_SetPropInt(iVar14,1,0x16,0x44);
    iVar3 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    MenuWnd_DrawText(0x86,2,0x75);
    break;
  case 3:
    UiElem_SetPropInt(iVar14,1,0x16,0x41);
    iVar3 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    MenuWnd_DrawText(0x86,2,0x76);
    break;
  case 4:
    UiElem_SetPropInt(iVar14,1,0x16,0x3f);
    iVar3 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    MenuWnd_DrawText(0x86,2,0x77);
    break;
  case 5:
    UiElem_SetPropInt(iVar14,1,0x16,0x40);
    iVar3 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    MenuWnd_DrawText(0x86,2,0xa3);
    break;
  case 6:
    UiElem_SetPropInt(iVar14,1,0x16,0x40);
    iVar3 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    MenuWnd_DrawText(0x86,2,0xa4);
    break;
  case 7:
    iVar3 = 0;
    do {
      iVar5 = *piVar16;
      Rival_GetRecord(aiStack_1e90,iVar3);
      if (iVar5 == aiStack_1e90[0]) {
        UiElem_SetPropInt(iVar14,1,0x16,*(undefined4 *)(&DAT_0032c260 + iVar3 * 4));
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
    iVar3 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    MenuWnd_DrawText(0x86,2,0x78);
    break;
  case 8:
    UiElem_SetPropInt(iVar14,1,0x16,0x43);
    iVar3 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    MenuWnd_DrawText(0x86,2,0x79);
    break;
  case 9:
    UiElem_SetPropInt(iVar14,1,0x16,0x42);
    iVar3 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    MenuWnd_DrawText(0x86,2,0x7a);
    break;
  case 10:
    UiElem_SetPropInt(iVar14,1,0x16,0x3e);
    iVar3 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    MenuWnd_DrawText(0x86,2,0x7c);
    break;
  case 0xb:
    iVar3 = UiMgr_FindLayout(0x91);
    UiElem_SetPropFloat(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0xc,8);
    iVar3 = UiMgr_FindLayout(0x91);
    UiElem_SetPropFloat(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x11,8);
    RivalDb_Copy(auStack_2010,*(undefined2 *)piVar16);
    sVar1 = RivalRec_GetCourse(auStack_2010);
    UiElem_SetPropInt(iVar19,2,0x16,*(undefined4 *)(&DAT_0032c2b0 + sVar1 * 4));
    iVar3 = UiMgr_FindLayout(0x91);
    UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    RivalDb_Copy(auStack_2190,*(undefined2 *)piVar16);
    uVar2 = RivalRec_GetCourse(auStack_2190);
    uVar10 = MsgId_CourseName(uVar2);
    MenuWnd_DrawText(0x91,0x14,uVar10);
    if (*(int *)(iVar18 + 0x668) == 1) {
      RivalDb_Copy(auStack_2310,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
      sVar1 = RivalRec_GetCourse(auStack_2310);
      if (sVar1 != -1) {
        RivalDb_Copy(auStack_2490,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
        uVar2 = RivalRec_GetCourse(auStack_2490);
        uVar10 = Msg_TeamInfo(uVar2);
        uVar10 = Msg_MakerCountry(uVar10);
        RivalDb_Copy(auStack_2610,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
        uVar2 = RivalRec_GetCourse(auStack_2610);
        uVar11 = Msg_TeamInfo(uVar2);
        uVar11 = Msg_MakerName(uVar11);
        MenuWnd_DrawLabel(0x84,uGpffff8410,0x45,uVar10,uVar11);
      }
      RivalDb_Copy(auStack_2790,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0xfc));
      sVar1 = RivalRec_GetCourse(auStack_2790);
      if (sVar1 != -1) {
        RivalDb_Copy(auStack_2910,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0xfc));
        uVar2 = RivalRec_GetCourse(auStack_2910);
        uVar10 = Msg_TeamInfo(uVar2);
        uVar10 = Msg_MakerCountry(uVar10);
        RivalDb_Copy(auStack_2a90,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
        uVar2 = RivalRec_GetCourse(auStack_2a90);
        uVar11 = Msg_TeamInfo(uVar2);
        uVar11 = Msg_MakerName(uVar11);
        MenuWnd_DrawLabel(0x84,uGpffff8414,0x45,uVar10,uVar11);
      }
    }
    else if (*(int *)(iVar18 + 0x668) == 2) {
      RivalDb_Copy(auStack_2c10,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
      sVar1 = RivalRec_GetCourse(auStack_2c10);
      if (sVar1 != -1) {
        RivalDb_Copy(auStack_2d90,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
        uVar2 = RivalRec_GetCourse(auStack_2d90);
        uVar10 = Msg_TeamInfo(uVar2);
        uVar10 = Msg_MakerCountry(uVar10);
        RivalDb_Copy(auStack_2f10,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x100));
        uVar2 = RivalRec_GetCourse(auStack_2f10);
        uVar11 = Msg_TeamInfo(uVar2);
        uVar11 = Msg_MakerName(uVar11);
        MenuWnd_DrawLabel(0x84,uGpffff8410,0x45,uVar10,uVar11);
      }
      RivalDb_Copy(auStack_3090,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x104));
      sVar1 = RivalRec_GetCourse(auStack_3090);
      if (sVar1 != -1) {
        RivalDb_Copy(auStack_3210,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x104));
        uVar2 = RivalRec_GetCourse(auStack_3210);
        uVar10 = Msg_TeamInfo(uVar2);
        uVar10 = Msg_MakerCountry(uVar10);
        RivalDb_Copy(auStack_3390,*(undefined2 *)(*(int *)(iVar18 + 0x62c) * 4 + iVar18 + 0x104));
        uVar2 = RivalRec_GetCourse(auStack_3390);
        uVar11 = Msg_TeamInfo(uVar2);
        uVar11 = Msg_MakerName(uVar11);
        MenuWnd_DrawLabel(0x84,uGpffff8414,0x45,uVar10,uVar11);
      }
    }
    MenuWnd_DrawText(0x91,0x15,0x43a);
  }
switchD_00251cf4_caseD_1:
  iVar3 = *(int *)(iVar18 + 0x648);
LAB_00252b50:
  if ((iVar3 != 1) && (*(int *)(iVar18 + 0x62c) != *(int *)(iVar18 + 0x6a4))) {
    RivalDb_Copy(&uStack_4be0,*(undefined2 *)(*(int *)(iVar18 + 0x6a4) * 4 + iVar18 + 0x100));
    puVar13 = auStack_4b9c;
    puVar12 = auStack_47c;
    iVar3 = 0x17;
    uStack_4b0 = uStack_4bd0;
    uStack_4a8 = uStack_4bc8;
    uStack_4a4 = uStack_4bc4;
    uStack_4b8 = uStack_4bd8;
    uStack_4bc = uStack_4bdc;
    uStack_4b4 = uStack_4bd4;
    uStack_498 = uStack_4bb8;
    uStack_4c0 = uStack_4be0;
    uStack_4be = uStack_4bde;
    uStack_4ac = uStack_4bcc;
    uStack_4a0 = uStack_4bc0;
    uStack_49c = uStack_4bbc;
    uStack_484 = uStack_4ba4;
    uStack_494 = uStack_4bb4;
    uStack_490 = uStack_4bb0;
    uStack_48c = uStack_4bac;
    uStack_488 = uStack_4ba8;
    uStack_486 = uStack_4ba6;
    uStack_480 = uStack_4ba0;
    do {
      iVar3 = iVar3 + -1;
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    } while (0 < iVar3);
    puVar13 = auStack_4b40;
    puVar12 = auStack_420;
    iVar3 = 0x17;
    do {
      iVar3 = iVar3 + -1;
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    } while (0 < iVar3);
    puVar13 = auStack_4ae4;
    puVar12 = auStack_3c4;
    iVar3 = 8;
    do {
      iVar3 = iVar3 + -1;
      uVar7 = puVar13[1];
      *puVar12 = *puVar13;
      puVar12[1] = uVar7;
      puVar13 = puVar13 + 2;
      puVar12 = puVar12 + 2;
    } while (0 < iVar3);
    uStack_384 = uStack_4aa4;
    uStack_380 = uStack_4aa0;
    uStack_37c = uStack_4a9c;
    uStack_378 = uStack_4a98;
    uStack_374 = uStack_4a94;
    uStack_354 = uStack_4a74;
    uStack_370 = uStack_4a90;
    uStack_350 = uStack_4a70;
    uStack_34c = uStack_4a6c;
    uStack_358 = uStack_4a78;
    uStack_36c = uStack_4a8c;
    uStack_368 = uStack_4a88;
    uStack_364 = uStack_4a84;
    uStack_360 = uStack_4a80;
    uStack_348 = uStack_4a68;
    uStack_35c = uStack_4a7c;
    switch(uStack_4bdc) {
    case 0:
      RivalRec_IsValid(&uStack_4c0);
      goto LAB_00253138;
    case 2:
      UiElem_SetPropInt(iVar14,1,0x16,0x44);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
      MenuWnd_DrawText(0x86,2,0x75);
      break;
    case 3:
      UiElem_SetPropInt(iVar14,1,0x16,0x41);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
      MenuWnd_DrawText(0x86,2,0x76);
      break;
    case 4:
      UiElem_SetPropInt(iVar14,1,0x16,0x3f);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
      MenuWnd_DrawText(0x86,2,0x77);
      break;
    case 5:
      UiElem_SetPropInt(iVar14,1,0x16,0x40);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
      MenuWnd_DrawText(0x86,2,0xa3);
      break;
    case 6:
      UiElem_SetPropInt(iVar14,1,0x16,0x40);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
      MenuWnd_DrawText(0x86,2,0xa4);
      break;
    case 7:
      iVar3 = 0;
      do {
        iVar5 = *(int *)(iVar18 + *(int *)(iVar18 + 0x6a4) * 4 + 0x100);
        Rival_GetRecord(aiStack_4c30,iVar3);
        if (iVar5 == aiStack_4c30[0]) {
          UiElem_SetPropInt(iVar14,1,0x16,*(undefined4 *)(&DAT_0032c400 + iVar3 * 4));
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x14);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
      MenuWnd_DrawText(0x86,2,0x78);
      break;
    case 8:
      UiElem_SetPropInt(iVar14,1,0x16,0x43);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
      MenuWnd_DrawText(0x86,2,0x79);
      break;
    case 9:
      UiElem_SetPropInt(iVar14,1,0x16,0x42);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
      MenuWnd_DrawText(0x86,2,0x7a);
      break;
    case 10:
      UiElem_SetPropInt(iVar14,1,0x16,0x3e);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
      MenuWnd_DrawText(0x86,2,0x7c);
      break;
    case 0xb:
      RivalDb_Copy(auStack_4db0,*(undefined2 *)(*(int *)(iVar18 + 0x6a4) * 4 + iVar18 + 0x100));
      sVar1 = RivalRec_GetCourse(auStack_4db0);
      UiElem_SetPropInt(iVar19,2,0x16,*(undefined4 *)(&DAT_0032c450 + sVar1 * 4));
      iVar3 = UiMgr_FindLayout(0x91);
      UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
    }
  }
LAB_00253138:
  DAT_0032bf00 = 3;
  Menu_DrawFrame(iGpffff8d68 + 0x654);
  uVar10 = Profile_Get(0);
  uVar10 = garage_sub_001bcb00(uVar10);
  MenuWnd_DrawNumber(0x9c,1,uVar10);
  iVar3 = UiMgr_FindLayout(0x9c);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

