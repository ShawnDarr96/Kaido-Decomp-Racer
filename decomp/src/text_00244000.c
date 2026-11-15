// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00244000 - 0x00248000
#include "ghidra_types.h"

// 0x00244b5c  size 0x28
/* follows ScrRace_Draw_Interval; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void ScrRace_Draw_Interval_Orphan1(void)

{
  int iVar1;
  
  iVar1 = UiMgr_FindLayout(0x77);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x9f);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xa1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00244b90  size 0xf48
void ScrCareer_Draw_MasterLord(int param_1)

{
  UiLayoutSlot *pUVar1;
  UiLayoutSlot *pUVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 *puVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte bVar12;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  byte extraout_a3_lo_08;
  byte extraout_a3_lo_09;
  byte extraout_a3_lo_10;
  byte extraout_a3_lo_11;
  byte extraout_a3_lo_12;
  byte extraout_a3_lo_13;
  byte extraout_a3_lo_14;
  undefined8 extraout_a3;
  undefined8 extraout_a3_00;
  undefined8 extraout_a3_01;
  undefined8 extraout_a3_02;
  undefined8 extraout_a3_03;
  undefined8 extraout_a3_04;
  undefined8 extraout_a3_05;
  undefined8 extraout_a3_06;
  undefined8 extraout_a3_07;
  undefined4 *puVar13;
  int *piVar14;
  UiLayout *pUVar15;
  UiLayout *pUVar16;
  int *piVar17;
  long lVar18;
  int aiStack_7d0 [20];
  undefined2 uStack_780;
  undefined2 uStack_77e;
  byte bStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined1 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined1 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined2 uStack_748;
  undefined2 uStack_746;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 auStack_73c [23];
  undefined4 auStack_6e0 [23];
  undefined4 auStack_684 [16];
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined2 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined2 uStack_600;
  undefined2 uStack_5fe;
  byte bStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined1 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined1 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined2 uStack_5c8;
  undefined2 uStack_5c6;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 auStack_5bc [23];
  undefined4 auStack_560 [23];
  undefined4 auStack_504 [16];
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined2 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined1 auStack_480 [4];
  char cStack_47c;
  undefined1 auStack_300 [4];
  char cStack_2fc;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  byte bStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 auStack_13c [23];
  undefined4 auStack_e0 [23];
  undefined4 auStack_84 [16];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar5 = UiMgr_FindLayout(0x84);
  pUVar16 = &g_UiMgr->slots[iVar5].layout;
  iVar5 = UiMgr_FindLayout(0x85);
  pUVar1 = g_UiMgr->slots;
  UiMgr_FindLayout(7);
  iVar6 = UiMgr_FindLayout(0x86);
  pUVar15 = &g_UiMgr->slots[iVar6].layout;
  UiMgr_FindLayout(0x7b);
  iVar6 = UiMgr_FindLayout(0x91);
  pUVar2 = g_UiMgr->slots;
  if (*(int *)(param_1 + 0x64c) == 0xe) {
    UiElem_SetPropFloat(pUVar16,0xe,8,extraout_a3_lo);
    iVar7 = *(int *)(param_1 + 0x64c);
  }
  else {
    UiElem_SetPropFloat(pUVar16,0xf,8,extraout_a3_lo);
    iVar7 = *(int *)(param_1 + 0x64c);
  }
  if (iVar7 == 0xe) {
    ScrCareer_Draw_Prize(param_1,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + param_1 + 0x5e4),0)
    ;
    iVar7 = *(int *)(param_1 + 0x64c);
  }
  else {
    ScrCareer_Draw_Prize(param_1,*(undefined4 *)(param_1 + 0x24),0);
    iVar7 = *(int *)(param_1 + 0x64c);
  }
  if ((iVar7 == 0xe) || (iVar7 == 0x16)) {
    uVar9 = Race_GetCourseVariant();
    uVar9 = MsgId_ForOption(uVar9);
    uVar9 = MsgId_ForSlot(uVar9,1);
    MenuWnd_DrawLabel(0x85,3,0x37d,1,uVar9);
  }
  uVar9 = Profile_Get(0);
  sVar4 = Profile_GetRivalBattleCount(uVar9,*(undefined4 *)(param_1 + 0x24));
  if (sVar4 < 1) {
    UiElem_SetPropFloat(pUVar16,1,8,extraout_a3_lo_00);
    bVar12 = extraout_a3_lo_11;
  }
  else {
    RivalDb_Copy(auStack_300,*(undefined2 *)(param_1 + 0x24));
    bVar12 = extraout_a3_lo_01;
    if ((cStack_2fc == '\x05') ||
       (RivalDb_Copy(auStack_480,*(undefined2 *)(param_1 + 0x24)), bVar12 = extraout_a3_lo_02,
       cStack_47c == '\x06')) {
      UiElem_SetPropFloat(pUVar16,1,8,bVar12);
      bVar12 = extraout_a3_lo_10;
    }
    else {
      UiElem_SetPropFloat(pUVar16,1,8,extraout_a3_lo_02);
      bVar12 = extraout_a3_lo_03;
    }
  }
  UiElem_SetPropFloat(pUVar16,3,8,bVar12);
  if (*(int *)(param_1 + 0x24) < 0) {
    UiElem_SetPropFloat(pUVar16,0,8,extraout_a3_lo_04);
    bVar12 = extraout_a3_lo_06;
  }
  else {
    UiElem_SetPropFloat(pUVar16,0,8,extraout_a3_lo_04);
    bVar12 = extraout_a3_lo_05;
  }
  UiElem_SetPropFloat(pUVar16,2,8,bVar12);
  UiElem_SetPropInt(&pUVar1[iVar5].layout,1,9,*(int *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x64c) != 0xe) {
    UiLayout_UpdateAnimById((UiLayout *)0x84,2);
  }
  UiLayout_UpdateAnimById((UiLayout *)0x85,0);
  iVar5 = UiMgr_FindLayout(0x84);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  if ((*(int *)(param_1 + 0x64c) == 0xe) || (*(int *)(param_1 + 0x64c) == 0x16)) {
    iVar5 = UiMgr_FindLayout(0x85);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
    iVar5 = *(int *)(param_1 + 0x64c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x64c);
  }
  if ((iVar5 == 0xe) && (*(int *)(param_1 + 0x644) == 1)) {
    RivalDb_Copy(&uStack_600,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 4 + param_1 + 0x5e4));
    puVar11 = auStack_5bc;
    puVar13 = auStack_13c;
    iVar5 = 0x17;
    uStack_170 = uStack_5f0;
    uStack_168 = uStack_5e8;
    uStack_164 = uStack_5e4;
    uStack_178 = uStack_5f8;
    bStack_17c = bStack_5fc;
    uStack_174 = uStack_5f4;
    uStack_158 = uStack_5d8;
    uStack_180 = uStack_600;
    uStack_17e = uStack_5fe;
    uStack_16c = uStack_5ec;
    uStack_160 = uStack_5e0;
    uStack_15c = uStack_5dc;
    uStack_144 = uStack_5c4;
    uStack_154 = uStack_5d4;
    uStack_150 = uStack_5d0;
    uStack_14c = uStack_5cc;
    uStack_148 = uStack_5c8;
    uStack_146 = uStack_5c6;
    uStack_140 = uStack_5c0;
    do {
      iVar5 = iVar5 + -1;
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (0 < iVar5);
    puVar11 = auStack_560;
    puVar13 = auStack_e0;
    iVar5 = 0x17;
    do {
      iVar5 = iVar5 + -1;
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (0 < iVar5);
    puVar11 = auStack_504;
    puVar13 = auStack_84;
    iVar5 = 8;
    do {
      iVar5 = iVar5 + -1;
      uVar3 = puVar11[1];
      *puVar13 = *puVar11;
      puVar13[1] = uVar3;
      puVar11 = puVar11 + 2;
      puVar13 = puVar13 + 2;
    } while (0 < iVar5);
    uStack_44 = uStack_4c4;
    uStack_40 = uStack_4c0;
    uStack_3c = uStack_4bc;
    uStack_38 = uStack_4b8;
    uStack_14 = uStack_494;
    uStack_34 = uStack_4b4;
    uStack_10 = uStack_490;
    uStack_30 = uStack_4b0;
    uStack_c = uStack_48c;
    uStack_18 = uStack_498;
    uStack_2c = uStack_4ac;
    uStack_28 = uStack_4a8;
    uStack_24 = uStack_4a4;
    uStack_20 = uStack_4a0;
    uStack_8 = uStack_488;
    uStack_1c = uStack_49c;
  }
  else {
    RivalDb_Copy(&uStack_780,*(undefined2 *)(param_1 + 0x24));
    puVar11 = auStack_73c;
    puVar13 = auStack_13c;
    iVar5 = 0x17;
    uStack_170 = uStack_770;
    uStack_168 = uStack_768;
    uStack_164 = uStack_764;
    uStack_178 = uStack_778;
    bStack_17c = bStack_77c;
    uStack_174 = uStack_774;
    uStack_158 = uStack_758;
    uStack_180 = uStack_780;
    uStack_17e = uStack_77e;
    uStack_16c = uStack_76c;
    uStack_160 = uStack_760;
    uStack_15c = uStack_75c;
    uStack_144 = uStack_744;
    uStack_154 = uStack_754;
    uStack_150 = uStack_750;
    uStack_14c = uStack_74c;
    uStack_148 = uStack_748;
    uStack_146 = uStack_746;
    uStack_140 = uStack_740;
    do {
      iVar5 = iVar5 + -1;
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (0 < iVar5);
    puVar11 = auStack_6e0;
    puVar13 = auStack_e0;
    iVar5 = 0x17;
    do {
      iVar5 = iVar5 + -1;
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (0 < iVar5);
    puVar11 = auStack_684;
    puVar13 = auStack_84;
    iVar5 = 8;
    do {
      iVar5 = iVar5 + -1;
      uVar3 = puVar11[1];
      *puVar13 = *puVar11;
      puVar13[1] = uVar3;
      puVar11 = puVar11 + 2;
      puVar13 = puVar13 + 2;
    } while (0 < iVar5);
    uStack_44 = uStack_644;
    uStack_40 = uStack_640;
    uStack_3c = uStack_63c;
    uStack_38 = uStack_638;
    uStack_14 = uStack_614;
    uStack_34 = uStack_634;
    uStack_10 = uStack_610;
    uStack_30 = uStack_630;
    uStack_c = uStack_60c;
    uStack_18 = uStack_618;
    uStack_2c = uStack_62c;
    uStack_28 = uStack_628;
    uStack_24 = uStack_624;
    uStack_20 = uStack_620;
    uStack_8 = uStack_608;
    uStack_1c = uStack_61c;
  }
  if (bStack_17c < 0xd) {
                    /* WARNING: Switch is manually overridden */
    switch(bStack_17c) {
    case 0:
      RivalRec_IsValid(&uStack_180);
      iVar5 = *(int *)(param_1 + 0xe4);
      goto LAB_00245414;
    case 2:
      UiElem_SetPropInt(pUVar15,1,0x16,0x44);
      iVar5 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      break;
    case 3:
      UiElem_SetPropInt(pUVar15,1,0x16,0x41);
      iVar5 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      break;
    case 4:
      UiElem_SetPropInt(pUVar15,1,0x16,0x3f);
      iVar5 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      break;
    case 5:
      UiElem_SetPropInt(pUVar15,1,0x16,0x40);
      iVar5 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      break;
    case 6:
      UiElem_SetPropInt(pUVar15,1,0x16,0x40);
      iVar5 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      MenuWnd_DrawText(0x86,2,0xa4);
      break;
    case 7:
      iVar5 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x24);
        Rival_GetRecord(aiStack_7d0,iVar5);
        if (iVar6 == aiStack_7d0[0]) {
          UiElem_SetPropInt(pUVar15,1,0x16,*(int *)(&DAT_0032c9c0 + iVar5 * 4));
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x14);
      iVar5 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      break;
    case 8:
      UiElem_SetPropInt(pUVar15,1,0x16,0x43);
      iVar5 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      break;
    case 9:
      UiElem_SetPropInt(pUVar15,1,0x16,0x42);
      iVar5 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      break;
    case 10:
      UiElem_SetPropInt(pUVar15,1,0x16,0x3e);
      iVar5 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      break;
    case 0xb:
      sVar4 = RivalRec_GetCourse(&uStack_180);
      UiElem_SetPropInt(&pUVar2[iVar6].layout,2,0x16,*(int *)(&DAT_0032ca10 + sVar4 * 4));
      iVar5 = UiMgr_FindLayout(0x91);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      if (*(int *)(param_1 + 0x64c) == 0x16) {
        iVar5 = UiMgr_FindLayout(0x91);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0xc,8,extraout_a3_lo_07);
      }
      else {
        iVar5 = UiMgr_FindLayout(0x91);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0xc,8,extraout_a3_lo_08);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0xe4);
LAB_00245414:
  if (iVar5 != -1) {
    iVar5 = UiMgr_FindLayout(0x87);
    pUVar15 = &g_UiMgr->slots[iVar5].layout;
    UiMgr_FindLayout(0x81);
    uVar9 = MsgId_TeamName(*(undefined4 *)(param_1 + 0xe4));
    MenuWnd_DrawText(0x87,0x2f,uVar9);
    iVar6 = 0;
    puVar13 = (undefined4 *)0x32cab0;
    iVar5 = param_1;
    do {
      if (*(int *)(iVar5 + 0x5e4) != -1) {
        uVar9 = MsgId_RivalName();
        MenuWnd_DrawText(0x87,*puVar13,uVar9);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      puVar13 = puVar13 + 1;
    } while (iVar6 < 6);
    UiElem_SetPropInt(pUVar15,0x28,0x16,*(int *)(&DAT_0032cb50 + *(int *)(param_1 + 0xe4) * 4));
    iVar6 = 0;
    piVar14 = &DAT_0032caf0;
    piVar17 = &DAT_0032cb10;
    uVar9 = extraout_a3;
    iVar5 = param_1;
    do {
      bVar12 = (byte)uVar9;
      iVar7 = *(int *)(iVar5 + 0x5e4);
      if (iVar7 == -1) {
LAB_002458b0:
        UiElem_SetPropFloat(pUVar15,(long)*piVar14,8,bVar12);
        uVar9 = extraout_a3_03;
      }
      else {
        uVar9 = Profile_Get(0);
        sVar4 = Profile_GetRivalBattleCount(uVar9,iVar7);
        bVar12 = extraout_a3_lo_09;
        if (sVar4 < 1) goto LAB_002458b0;
        UiElem_SetPropFloat(pUVar15,(long)*piVar14,8,extraout_a3_lo_09);
        UiElem_Get(pUVar15,*piVar17,0x69,0x67,0x62);
        uVar9 = extraout_a3_00;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      piVar14 = piVar14 + 1;
      piVar17 = piVar17 + 1;
    } while (iVar6 < 6);
    iVar6 = 0;
    piVar14 = &DAT_0032cb10;
    iVar5 = param_1;
    do {
      if (*(int *)(iVar5 + 0x5e4) == -1) {
        UiElem_SetPropFloat(pUVar15,(long)*piVar14,8,(byte)uVar9);
        uVar9 = extraout_a3_02;
      }
      else {
        UiElem_SetPropFloat(pUVar15,(long)*piVar14,8,(byte)uVar9);
        uVar9 = extraout_a3_01;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      piVar14 = piVar14 + 1;
    } while (iVar6 < 6);
    lVar18 = 0;
    piVar17 = &DAT_0032cad0;
    piVar14 = &DAT_0032cb30;
    iVar5 = param_1;
    iVar6 = param_1;
    do {
      iVar7 = *(int *)(iVar5 + 0x5e4);
      if ((iVar7 == -1) ||
         ((iVar10 = param_1 + *(int *)(param_1 + 0x5e0) * 0x14, *(int *)(iVar10 + 0x568) != iVar7 &&
          (*(int *)(iVar10 + 0x56c) != iVar7)))) {
        UiElem_SetPropFloat(pUVar15,(long)*piVar17,8,(byte)uVar9);
        uVar9 = extraout_a3_06;
      }
      else {
        UiElem_SetPropFloat(pUVar15,(long)*piVar17,8,(byte)uVar9);
        UiLayout_UpdateAnimById((UiLayout *)0x87,lVar18);
        uVar9 = extraout_a3_04;
      }
      if ((*(int *)(iVar5 + 0x5e4) != -1) && (lVar18 < 5)) {
        iVar10 = 0;
        iVar7 = param_1;
        do {
          if ((((*(int *)(iVar6 + 0x568) != -1) &&
               (*(int *)(iVar6 + 0x568) == *(int *)(iVar7 + 0x5e4))) &&
              (*(int *)(iVar6 + 0x56c) != -1)) &&
             (*(int *)(iVar6 + 0x56c) == *(int *)(iVar7 + 0x5e8))) {
            iVar7 = UiMgr_FindLayout(0x87);
            UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)*piVar14,8,extraout_a3_lo_12);
            uVar9 = extraout_a3_05;
            break;
          }
          iVar8 = UiMgr_FindLayout(0x87);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar14,8,extraout_a3_lo_14);
          iVar10 = iVar10 + 1;
          iVar7 = iVar7 + 4;
          uVar9 = extraout_a3_07;
        } while (iVar10 < 5);
      }
      lVar18 = (long)((int)lVar18 + 1);
      iVar5 = iVar5 + 4;
      piVar17 = piVar17 + 1;
      iVar6 = iVar6 + 0x14;
      piVar14 = piVar14 + 1;
    } while (lVar18 < 6);
    if ((*(int *)(param_1 + 0x64c) == 0xe) && (*g_MenuInput == 1)) {
      MenuWnd_SetItemState(0x87,*(undefined4 *)(&DAT_0032ca90 + *(int *)(param_1 + 0x62c) * 4),1,0);
    }
    iVar5 = UiMgr_FindLayout(0x87);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0,8,extraout_a3_lo_13);
    iVar5 = UiMgr_FindLayout(0x87);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  return;
}

// 0x00245ae4  size 0xc
/* follows ScrCareer_Draw_MasterLord; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void ScrCareer_Draw_MasterLord_Orphan1(void)

{
  return;
}

// 0x00245af0  size 0x674
void ScrCareer_Draw_Prize(int param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 auStack_3c0 [20];
  undefined2 uStack_370;
  undefined2 uStack_36e;
  byte bStack_36c;
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
  undefined4 uStack_1e4;
  char cStack_1e0;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  byte bStack_19c;
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
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 == -1) {
    return;
  }
  RivalDb_Copy(&uStack_370,(short)param_2);
  puVar9 = auStack_32c;
  puVar8 = auStack_15c;
  uStack_190 = uStack_360;
  iVar7 = 0x17;
  uStack_188 = uStack_358;
  uStack_198 = uStack_368;
  uStack_184 = uStack_354;
  bStack_19c = bStack_36c;
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
    iVar7 = iVar7 + -1;
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (0 < iVar7);
  puVar9 = auStack_2d0;
  puVar8 = auStack_100;
  iVar7 = 0x17;
  do {
    iVar7 = iVar7 + -1;
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (0 < iVar7);
  puVar9 = auStack_274;
  puVar8 = auStack_a4;
  iVar7 = 8;
  do {
    iVar7 = iVar7 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar7);
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
  sVar2 = RivalRec_GetCourse(&uStack_1a0);
  if (sVar2 == -1) {
    uVar4 = MsgId_RivalNickname(param_2);
    MenuWnd_DrawText(0x84,*(undefined4 *)(param_3 * 4 + 0x36ebd0),uVar4);
    uVar4 = MsgId_RivalName(param_2);
    MenuWnd_DrawText(0x84,*(undefined4 *)(param_3 * 4 + 0x36ebd8),uVar4);
  }
  else {
    uVar3 = RivalRec_GetCourse(&uStack_1a0);
    uVar4 = Msg_RivalNickname(uVar3);
    MenuWnd_DrawText(0x84,*(undefined4 *)(param_3 * 4 + 0x36ebd8),uVar4);
    uVar3 = RivalRec_GetCourse(&uStack_1a0);
    uVar4 = Msg_TeamName(uVar3);
    MenuScr_Draw_ContractMoney(0x84,*(undefined4 *)(param_3 * 4 + 0x36ebd0),uVar4);
  }
  param_3 = param_3 * 4;
  RaceResult_BuildMessage(&uStack_20,(short)param_2);
  uVar10 = (uint)cStack_174;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  uStack_8 = uStack_18;
  lVar5 = RivalRec_IsValid(&uStack_1a0);
  if (lVar5 != 0) {
    uVar3 = RivalRec_GetId(&uStack_1a0);
    uVar4 = Profile_Get(0);
    sVar2 = Profile_GetRivalWins(uVar4,uVar3);
    if (sVar2 == 0) {
      Rival_GetTeamRecord(auStack_3c0,uVar3);
      puVar9 = auStack_3c0;
      puVar8 = &uStack_1f0;
      iVar7 = 0x11;
      do {
        iVar7 = iVar7 + -1;
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      } while (0 < iVar7);
      uVar10 = (uint)cStack_1e0;
      uStack_10 = CONCAT31(uStack_10._1_3_,uStack_1ec);
      uStack_c = uStack_1e8;
      uStack_8 = uStack_1e4;
    }
  }
  MenuWnd_DrawRivalLabel(0x84,*(undefined4 *)(param_3 + 0x36ebe0),1,0x36f,(uVar10 & 0xff) + 0x370);
  sVar2 = RivalRec_GetCourse(&uStack_1a0);
  if ((sVar2 == -1) && ((byte)uStack_10 < 10)) {
                    /* WARNING: Switch is manually overridden */
    switch(uStack_10 & 0xff) {
    case 0:
      uVar3 = (undefined2)uStack_c;
      uVar4 = Msg_PartInfo(uVar3);
      uVar6 = Msg_MakerName(uVar3);
      MenuWnd_DrawLabel(0x84,*(undefined4 *)(param_3 + 0x36ebe8),0x45,uVar4,uVar6);
      iVar7 = *(int *)(param_1 + 0x668);
      goto LAB_00245fb0;
    case 1:
      uVar4 = MenuText_CarShortName(uStack_c);
      MenuWnd_DrawText(0x84,*(undefined4 *)(param_3 + 0x36ebe8),uVar4);
      break;
    case 2:
      uVar4 = MenuText_CarShortName(uStack_c,0xfffffffffffffffe);
      MenuWnd_DrawText(0x84,*(undefined4 *)(param_3 + 0x36ebe8),uVar4);
      break;
    default:
      MenuWnd_DrawNumber(0x84,*(undefined4 *)(param_3 + 0x36ebe8),uStack_8);
      break;
    case 5:
      MenuWnd_DrawText(0x84,*(undefined4 *)(param_3 + 0x36ebe8),0x2f9);
      break;
    case 6:
      MenuWnd_DrawText(0x84,*(undefined4 *)(param_3 + 0x36ebe8),0x3af);
      break;
    case 7:
      break;
    }
  }
  iVar7 = *(int *)(param_1 + 0x668);
LAB_00245fb0:
  if ((iVar7 == 0) && (bStack_19c < 0xc)) {
                    /* WARNING: Switch is manually overridden */
    switch(bStack_19c) {
    case 2:
      MenuWnd_DrawText(0x86,2,0x75);
      return;
    case 3:
      MenuWnd_DrawText(0x86,2,0x76);
      break;
    case 4:
      MenuWnd_DrawText(0x86,2,0x77);
      break;
    case 5:
      MenuWnd_DrawText(0x86,2,0xa3);
      break;
    case 7:
      MenuWnd_DrawText(0x86,2,0x78);
      break;
    case 8:
      MenuWnd_DrawText(0x86,2,0x79);
      break;
    case 9:
      MenuWnd_DrawText(0x86,2,0x7a);
      break;
    case 10:
      MenuWnd_DrawText(0x86,2,0x7c);
      break;
    case 0xb:
      if (*(int *)(param_1 + 0x64c) != 0x16) {
        uVar3 = RivalRec_GetCourse(&uStack_1a0);
        uVar4 = MsgId_PartDescription(uVar3);
        MenuWnd_DrawText(0x91,0x14,uVar4);
      }
      uVar3 = RivalRec_GetCourse(&uStack_1a0);
      uVar4 = Msg_TeamInfo(uVar3);
      uVar4 = Msg_MakerCountry(uVar4);
      uVar3 = RivalRec_GetCourse(&uStack_1a0);
      uVar6 = Msg_TeamInfo(uVar3);
      uVar6 = Msg_MakerName(uVar6);
      MenuWnd_DrawLabel(0x84,*(undefined4 *)(param_3 + 0x36ebe8),0x45,uVar4,uVar6);
      MenuWnd_DrawText(0x91,0x15,0x43a);
    }
  }
  return;
}

// 0x00246180  size 0x8
/* state of maybe_PageBetCar; on-screen text/callee hint "IsTakenAway" (was ScrIsTakenAway_Exit) */

void maybe_PageBetCar_State45_IsTakenAway(void)

{
  return;
}

// 0x00246190  size 0x384
void ScrCareer_Draw_ThisIsYour(int param_1)

{
  UiLayoutSlot *pUVar1;
  MenuMgr *pMVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte extraout_a3_lo;
  undefined1 *puVar10;
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  iVar6 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar6 != 0) {
    uVar7 = UiRes_GetLayoutData(0x10c);
    iVar6 = UiMgr_FindLayout(0x89);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar6].layout.unk_310 = 0xffffffff;
    pUVar1[iVar6].layout.unk_31c = 0;
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    pUVar1[iVar6].layout.unk_31c = uVar7;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x195);
    pMVar2 = g_MenuMgr;
    g_MenuMgr->unk_0350 = 0xffffffff;
    *(undefined4 *)&pMVar2->field_0x35c = 0;
    *(undefined4 *)&pMVar2->field_0x34c = 0;
    if (*(int *)&pMVar2->field_0x35c == 0) {
      *(undefined4 *)&pMVar2->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar2->field_0x34c = 0;
    if (*(int *)&pMVar2->field_0x35c == 0) {
      *(undefined4 *)&pMVar2->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar2->field_0x354 = 0;
    *(undefined4 *)&pMVar2->field_0x35c = uVar8;
    *(undefined4 *)&pMVar2->field_0x358 = 1;
    Menu_ClearSlot(0);
    pMVar2 = g_MenuMgr;
    uVar8 = *(undefined4 *)(param_1 + 0x24);
    g_MenuMgr->unk_0538 = 1;
    *(undefined4 *)&pMVar2->field_0x53c = uVar8;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    if (*(int *)(param_1 + 0x648) == 0x18) {
      Menu_ShowDialog(&g_MenuMgr->field_0x654,0x125,2);
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
      iVar6 = *(int *)(param_1 + 0x648);
      goto LAB_002461d4;
    }
  }
  iVar6 = *(int *)(param_1 + 0x648);
LAB_002461d4:
  if (iVar6 == 0x2c) {
    puVar10 = &g_MenuMgr->field_0x40;
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x89,0);
    bVar5 = UiLayout_UpdateAnimIfActive((UiLayout *)puVar10,0);
    if (!bVar4 && !bVar5) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawText(7,0x2e,0x134);
  iVar6 = UiMgr_FindLayout(0x89);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x27,8,extraout_a3_lo);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x24),0xfffffffffffffffd,0xffffffffffffffff,0);
  uVar9 = Profile_Get(0);
  cVar3 = Profile_GetChapter(uVar9);
  if (cVar3 == '\0') {
    UiLayout_UpdateAnimById((UiLayout *)0x81,0);
    iVar6 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  }
  else {
    UiLayout_UpdateAnimById((UiLayout *)0x82,0);
    iVar6 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  }
  iVar6 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  puVar10 = &g_MenuMgr->field_0x40;
  RivalDb_Copy(auStack_180,*(undefined2 *)(param_1 + 0x24));
  iVar6 = MenuText_RivalCar(uStack_178,0xffffffffffffffff);
  UiElem_SetPropInt((UiLayout *)puVar10,0,0x16,iVar6);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00246520  size 0x2dc
void ScrCareer_Draw_IsTakenAway(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte extraout_a3_lo;
  undefined1 *puVar7;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x112);
    iVar3 = UiMgr_FindLayout(0x95);
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
    pUVar1[iVar3].layout.unk_31c = uVar4;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x113);
    iVar3 = UiMgr_FindLayout(0x95);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar5;
    pUVar1[iVar3].layout.animState = 1;
    Menu_ClearSlot(0);
    iVar3 = UiMgr_FindLayout(0x97);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0,8,extraout_a3_lo);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x95,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x95,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  uVar6 = MenuText_CarShortName(*(undefined2 *)(param_1 + 0x498),0xffffffffffffffff);
  MenuWnd_DrawText(0x95,0x14,uVar6);
  MenuWnd_DrawTextId(0x95,0x13,1,0x3ad);
  MenuWnd_DrawText(0x95,0x11,0x3ab);
  iVar3 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x95);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x97);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  puVar7 = &g_MenuMgr->field_0x40;
  iVar3 = MenuText_RivalCar(*(undefined2 *)(param_1 + 0x498),0xffffffffffffffff);
  UiElem_SetPropInt((UiLayout *)puVar7,0,0x16,iVar3);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00246800  size 0x2a4
void MenuScr_Draw_GetPrize(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x112);
    iVar3 = UiMgr_FindLayout(0x95);
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
    pUVar1[iVar3].layout.unk_31c = uVar4;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x113);
    iVar3 = UiMgr_FindLayout(0x95);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar5;
    pUVar1[iVar3].layout.animState = 1;
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x95,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x95,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawLabel(0x98,0xf,0x3a,*(int *)(param_1 + 0x484) + 1);
  MenuWnd_DrawText(0x98,0x11,*(int *)(param_1 + 0x484) + 0x89f);
  MenuWnd_DrawText(0x98,0x10,0x2f8);
  MenuWnd_DrawTextId(0x95,0x13,1,0x2f9);
  MenuWnd_DrawText(0x95,0x14,*(int *)(param_1 + 0x484) + 0x89f);
  MenuWnd_DrawText(0x95,0x11,0x3aa);
  iVar3 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x95);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x98);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x00246ab0  size 0x2e4
void ScrCareer_Draw_Received(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_480 [8];
  undefined4 uStack_478;
  undefined1 auStack_300 [8];
  undefined4 uStack_2f8;
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x112);
    iVar3 = UiMgr_FindLayout(0x95);
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
    pUVar1[iVar3].layout.unk_31c = uVar4;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x113);
    iVar3 = UiMgr_FindLayout(0x95);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar5;
    pUVar1[iVar3].layout.animState = 1;
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x95,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x95,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawTextId(0x95,0x13,1,0x3ae);
  RivalDb_Copy(auStack_180,*(undefined2 *)(param_1 + 0x484));
  uVar6 = MenuText_CarShortName(uStack_178,0xffffffffffffffff);
  MenuWnd_DrawText(0x95,0x14,uVar6);
  MenuWnd_DrawText(0x95,0x11,0x3aa);
  RivalDb_Copy(auStack_300,*(undefined2 *)(param_1 + 0x484));
  MenuWnd_DrawStatus(uStack_2f8,0xffffffffffffffff,0xffffffffffffffff,0);
  iVar3 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x95);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x97);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  puVar7 = &g_MenuMgr->field_0x40;
  RivalDb_Copy(auStack_480,*(undefined2 *)(param_1 + 0x484));
  iVar3 = MenuText_RivalCar(uStack_478,0xffffffffffffffff);
  UiElem_SetPropInt((UiLayout *)puVar7,0,0x16,iVar3);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00246da0  size 0x78
/* state of maybe_PageBetCar; on-screen text/callee hint "Received" (was ScrReceived_Enter) */

void maybe_PageBetCar_State40_Received(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  return;
}

// 0x00246e20  size 0x4f8
void ScrCareer_Draw_BetCar(int param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  UiLayoutSlot *pUVar3;
  MenuMgr *pMVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  byte extraout_a3_lo;
  undefined1 *puVar12;
  undefined1 auStack_330 [44];
  byte bStack_304;
  undefined1 auStack_1b0 [12];
  uint uStack_1a4;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  iVar7 = UiMgr_FindLayout(0x7e);
  iVar8 = *(int *)(param_1 + 0x65c);
  pUVar2 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar8 != 0) {
    uVar9 = UiRes_GetLayoutData(0x76);
    iVar8 = UiMgr_FindLayout(0x7e);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar8].layout.unk_310 = 0xffffffff;
    pUVar3[iVar8].layout.unk_31c = 0;
    pUVar3[iVar8].layout.unk_30c = 0;
    if (pUVar3[iVar8].layout.unk_31c == 0) {
      pUVar3[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar8].layout.unk_318 = 1;
    }
    pUVar3[iVar8].layout.unk_30c = 0;
    if (pUVar3[iVar8].layout.unk_31c == 0) {
      pUVar3[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x314 = 0;
    pUVar3[iVar8].layout.unk_31c = uVar9;
    pUVar3[iVar8].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x77);
    iVar8 = UiMgr_FindLayout(0x7e);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x330 == 0) {
      pUVar3[iVar8].layout.animState = 0;
    }
    else {
      pUVar3[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x330 == 0) {
      pUVar3[iVar8].layout.animState = 0;
    }
    else {
      pUVar3[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x330 = uVar10;
    pUVar3[iVar8].layout.animState = 1;
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x648) == 0x13) {
      RaceResult_BuildMessage(auStack_10,*(undefined2 *)(param_1 + 0x24));
      pMVar4 = g_MenuMgr;
      g_MenuMgr->unk_0538 = 0;
      *(undefined4 *)&pMVar4->field_0x53c = uStack_c;
      RivalDb_Copy(auStack_1b0,*(undefined2 *)(param_1 + 0x24));
      g_MenuMgr->unk_0544 = uStack_1a4;
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x7e,0);
  if (!bVar5) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) &&
     (bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x7e,1), !bVar5)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0x7e,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + 0x36ebc8),1,0);
  }
  RivalDb_Copy(auStack_330,*(undefined2 *)(param_1 + 0x24));
  UiElem_SetPropInt(&pUVar2[iVar7].layout,0x19,0x16,*(int *)(&DAT_0032c9a0 + (uint)bStack_304 * 4));
  iVar8 = UiMgr_FindLayout(0x7e);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x14,8,extraout_a3_lo);
  uVar11 = Profile_Get(0);
  uVar11 = Profile_GetMoney(uVar11);
  MenuWnd_DrawNumber(0x7e,0x22,uVar11);
  MenuWnd_DrawNumber(0x7e,0x21,*(undefined4 *)(param_1 + 0x48c));
  if ((*(uint *)(param_1 + 0x494) & 10) == 0) {
    MenuWnd_DrawText(0x7e,0x1d,0x37c);
    uVar9 = *(uint *)(param_1 + 0x494);
  }
  else {
    MenuWnd_DrawTextId(0x7e,0x1d,3,0x37c);
    uVar9 = *(uint *)(param_1 + 0x494);
  }
  if ((uVar9 & 1) == 0) {
    MenuWnd_DrawText(0x7e,0x1e,0x367);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  else {
    MenuWnd_DrawTextId(0x7e,0x1e,3,0x367);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  RaceResult_BuildMessage(auStack_20,uVar1);
  uVar11 = MenuText_CarShortName(uStack_1c,0xffffffffffffffff);
  MenuWnd_DrawLabel(0x7e,0x20,0x379,uVar11);
  MenuWnd_DrawText(0x7e,0x1f,0x369);
  MenuWnd_DrawText(7,0x2e,0x37a);
  iVar8 = UiMgr_FindLayout(0x7e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  uVar11 = Profile_Get(0);
  cVar6 = Profile_GetChapter(uVar11);
  if (cVar6 == '\0') {
    UiLayout_UpdateAnimById((UiLayout *)0x81,0);
    iVar8 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  }
  else {
    UiLayout_UpdateAnimById((UiLayout *)0x82,0);
    iVar8 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  puVar12 = &g_MenuMgr->field_0x40;
  RaceResult_BuildMessage(auStack_30,*(undefined2 *)(param_1 + 0x24));
  iVar8 = MenuText_RivalCar(uStack_2c,0xffffffffffffffff);
  UiElem_SetPropInt((UiLayout *)puVar12,0,0x16,iVar8);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00247320  size 0x384
void ScrCareer_Draw_ThisIsThe(int param_1)

{
  UiLayoutSlot *pUVar1;
  MenuMgr *pMVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 auStack_1b0 [12];
  uint uStack_1a4;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  iVar6 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar6 != 0) {
    uVar7 = UiRes_GetLayoutData(0x10c);
    iVar6 = UiMgr_FindLayout(0x89);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar6].layout.unk_310 = 0xffffffff;
    pUVar1[iVar6].layout.unk_31c = 0;
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    pUVar1[iVar6].layout.unk_31c = uVar7;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x195);
    pMVar2 = g_MenuMgr;
    g_MenuMgr->unk_0350 = 0xffffffff;
    *(undefined4 *)&pMVar2->field_0x35c = 0;
    *(undefined4 *)&pMVar2->field_0x34c = 0;
    if (*(int *)&pMVar2->field_0x35c == 0) {
      *(undefined4 *)&pMVar2->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar2->field_0x34c = 0;
    if (*(int *)&pMVar2->field_0x35c == 0) {
      *(undefined4 *)&pMVar2->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar2->field_0x354 = 0;
    *(undefined4 *)&pMVar2->field_0x35c = uVar8;
    *(undefined4 *)&pMVar2->field_0x358 = 1;
    Menu_ClearSlot(0);
    RaceResult_BuildMessage(auStack_10,*(undefined2 *)(param_1 + 0x24));
    pMVar2 = g_MenuMgr;
    g_MenuMgr->unk_0538 = 0;
    *(undefined4 *)&pMVar2->field_0x53c = uStack_c;
    RivalDb_Copy(auStack_1b0,*(undefined2 *)(param_1 + 0x24));
    g_MenuMgr->unk_0544 = uStack_1a4;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    if (*(int *)(param_1 + 0x648) == 0xc) {
      Menu_ShowDialog(&g_MenuMgr->field_0x654,0x125,2);
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
      iVar6 = *(int *)(param_1 + 0x648);
      goto LAB_00247364;
    }
  }
  iVar6 = *(int *)(param_1 + 0x648);
LAB_00247364:
  if (iVar6 == 0xc) {
    puVar10 = &g_MenuMgr->field_0x40;
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x89,0);
    bVar5 = UiLayout_UpdateAnimIfActive((UiLayout *)puVar10,0);
    if (!bVar4 && !bVar5) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawText(7,0x2e,0x37a);
  RaceResult_BuildMessage(auStack_20,*(undefined2 *)(param_1 + 0x24));
  MenuWnd_DrawStatus(uStack_1c,0xffffffffffffffff,0xffffffffffffffff,0);
  uVar9 = Profile_Get(0);
  cVar3 = Profile_GetChapter(uVar9);
  if (cVar3 == '\0') {
    UiLayout_UpdateAnimById((UiLayout *)0x81,0);
    iVar6 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  }
  else {
    UiLayout_UpdateAnimById((UiLayout *)0x82,0);
    iVar6 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  }
  iVar6 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  puVar10 = &g_MenuMgr->field_0x40;
  RaceResult_BuildMessage(auStack_30,*(undefined2 *)(param_1 + 0x24));
  iVar6 = MenuText_RivalCar(uStack_2c,0xffffffffffffffff);
  UiElem_SetPropInt((UiLayout *)puVar10,0,0x16,iVar6);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x002476b0  size 0x784
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Challenge(int param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  UiLayoutSlot *pUVar3;
  MenuMgr *pMVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  undefined1 *puVar14;
  undefined1 auStack_480 [8];
  undefined4 uStack_478;
  undefined4 auStack_300 [96];
  undefined4 auStack_180 [11];
  byte bStack_154;
  
  iVar7 = UiMgr_FindLayout(0x7a);
  iVar8 = *(int *)(param_1 + 0x65c);
  pUVar2 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar8 != 0) {
    uVar9 = UiRes_GetLayoutData(0x6c);
    iVar8 = UiMgr_FindLayout(0x7a);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar8].layout.unk_310 = 0xffffffff;
    pUVar3[iVar8].layout.unk_31c = 0;
    pUVar3[iVar8].layout.unk_30c = 0;
    if (pUVar3[iVar8].layout.unk_31c == 0) {
      pUVar3[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar8].layout.unk_318 = 1;
    }
    pUVar3[iVar8].layout.unk_30c = 0;
    if (pUVar3[iVar8].layout.unk_31c == 0) {
      pUVar3[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x314 = 0;
    pUVar3[iVar8].layout.unk_31c = uVar9;
    pUVar3[iVar8].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x6d);
    iVar8 = UiMgr_FindLayout(0x7a);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x330 == 0) {
      pUVar3[iVar8].layout.animState = 0;
    }
    else {
      pUVar3[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x330 == 0) {
      pUVar3[iVar8].layout.animState = 0;
    }
    else {
      pUVar3[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x330 = uVar10;
    pUVar3[iVar8].layout.animState = 1;
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x7a,0);
  if (!bVar5) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) &&
     (bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x7a,1), !bVar5)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  g_MenuMgr->unk_05a0 = 1;
  g_MenuMgr->unk_05e8 = 1;
  g_MenuMgr->unk_060c = 1;
  g_MenuMgr->unk_0634 = 1;
  g_MenuMgr->unk_0644 = 1;
  if (((g_MenuMgr->prevScreen == 0xf) && (*(int *)(param_1 + 0x680) == 1)) &&
     (g_MenuMgr->nextScreen != 0xf)) {
    cVar6 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448));
    if ((cVar6 == '\x06') ||
       (cVar6 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), pMVar4 = g_MenuMgr, cVar6 == '\a')
       ) {
      pMVar4 = g_MenuMgr;
      uVar10 = *(undefined4 *)(param_1 + 0xbc);
      g_MenuMgr->unk_0538 = 0;
      *(undefined4 *)&pMVar4->field_0x53c = uVar10;
    }
    else {
      uVar10 = *(undefined4 *)(param_1 + 0x24);
      g_MenuMgr->unk_0538 = 1;
      *(undefined4 *)&pMVar4->field_0x53c = uVar10;
    }
    iVar8 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)_s_ScrCareer_Draw_Challenge_1,8,
                        extraout_a3_lo);
    iVar8 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)_s_ScrCareer_Draw_Challenge_2,8,
                        extraout_a3_lo_00);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x125,2);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    iVar8 = UiMgr_FindLayout(0x89);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x27,8,extraout_a3_lo_01);
    uVar9 = UiRes_GetLayoutData(0x8c);
    iVar8 = UiMgr_FindLayout(0x84);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar8].layout.unk_310 = 0xffffffff;
    pUVar3[iVar8].layout.unk_31c = 0;
    pUVar3[iVar8].layout.unk_30c = 0;
    if (pUVar3[iVar8].layout.unk_31c == 0) {
      pUVar3[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar8].layout.unk_318 = 1;
    }
    pUVar3[iVar8].layout.unk_30c = 0;
    if (pUVar3[iVar8].layout.unk_31c == 0) {
      pUVar3[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x314 = 0;
    pUVar3[iVar8].layout.unk_31c = uVar9;
    pUVar3[iVar8].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x8d);
    iVar8 = UiMgr_FindLayout(0x84);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x330 == 0) {
      pUVar3[iVar8].layout.animState = 0;
    }
    else {
      pUVar3[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x330 == 0) {
      pUVar3[iVar8].layout.animState = 0;
    }
    else {
      pUVar3[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x330 = uVar10;
    pUVar3[iVar8].layout.animState = 1;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  MenuWnd_DrawText(0x7a,0x1a,0x138);
  MenuWnd_DrawText(0x7a,0x19,0x363);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + 0x36ebb8));
  iVar8 = RivalDb_Get(*(undefined2 *)(param_1 + 0x24));
  uVar11 = RaceCtx_Get_10();
  cVar6 = Race_IsTimeTrialMode(uVar11,0);
  if (cVar6 == '\0') {
    if (*(short *)(iVar8 + 0x3a) < *(short *)(iVar8 + 0x38)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  else if (*(short *)(iVar8 + 0x3a) < *(short *)(iVar8 + 0x38)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    MenuWnd_DrawText(0x7a,0x1b,0x4a);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  else {
    MenuWnd_DrawText(0x7a,0x1b,0x49);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  RivalDb_Copy(auStack_300,uVar1);
  puVar13 = auStack_300;
  puVar12 = auStack_180;
  iVar8 = 0x5f;
  do {
    iVar8 = iVar8 + -1;
    *puVar12 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar8);
  UiElem_SetPropInt(&pUVar2[iVar7].layout,0x18,0x16,*(int *)(&DAT_0032c980 + (uint)bStack_154 * 4));
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState
              (0x7a,*(undefined4 *)(&s_ScrCareer_Draw_Challenge_1 + *(int *)(param_1 + 0x62c) * 4),1
               ,0);
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x24),0xfffffffffffffffd,0xffffffffffffffff,0);
  uVar11 = Profile_Get(0);
  cVar6 = Profile_GetChapter(uVar11);
  if (cVar6 == '\0') {
    UiLayout_UpdateAnimById((UiLayout *)0x81,0);
    iVar8 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  }
  else {
    UiLayout_UpdateAnimById((UiLayout *)0x82,0);
    iVar8 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  }
  iVar8 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  cVar6 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448));
  if ((cVar6 == '\x06') || (cVar6 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar6 == '\a')
     ) {
    puVar14 = &g_MenuMgr->field_0x40;
    iVar8 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0xbc),0xffffffffffffffff);
    UiElem_SetPropInt((UiLayout *)puVar14,0,0x16,iVar8);
  }
  else {
    puVar14 = &g_MenuMgr->field_0x40;
    RivalDb_Copy(auStack_480,*(undefined2 *)(param_1 + 0x24));
    iVar8 = MenuText_RivalCar(uStack_478,0xffffffffffffffff);
    UiElem_SetPropInt((UiLayout *)puVar14,0,0x16,iVar8);
  }
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00247e40  size 0xb24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_GoBattle(int param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  UiLayoutSlot *pUVar3;
  MenuMgr *pMVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  byte extraout_a3_lo_08;
  byte extraout_a3_lo_09;
  byte extraout_a3_lo_10;
  undefined1 *puVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  undefined2 auStack_720 [104];
  undefined2 auStack_650 [104];
  undefined4 auStack_580 [96];
  undefined1 auStack_400 [12];
  uint uStack_3f4;
  undefined2 auStack_280 [104];
  undefined4 auStack_1b0 [11];
  byte bStack_184;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  iVar7 = UiMgr_FindLayout(0x7a);
  iVar17 = *(int *)(param_1 + 0x65c);
  pUVar2 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar17 != 0) {
    uVar9 = UiRes_GetLayoutData(0x6c);
    iVar17 = UiMgr_FindLayout(0x7a);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar17].layout.unk_310 = 0xffffffff;
    pUVar3[iVar17].layout.unk_31c = 0;
    pUVar3[iVar17].layout.unk_30c = 0;
    if (pUVar3[iVar17].layout.unk_31c == 0) {
      pUVar3[iVar17].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar17].layout.unk_318 = 1;
    }
    pUVar3[iVar17].layout.unk_30c = 0;
    if (pUVar3[iVar17].layout.unk_31c == 0) {
      pUVar3[iVar17].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar17].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x314 = 0;
    pUVar3[iVar17].layout.unk_31c = uVar9;
    pUVar3[iVar17].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x6d);
    iVar17 = UiMgr_FindLayout(0x7a);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar17].layout.field_0x330 == 0) {
      pUVar3[iVar17].layout.animState = 0;
    }
    else {
      pUVar3[iVar17].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar17].layout.field_0x330 == 0) {
      pUVar3[iVar17].layout.animState = 0;
    }
    else {
      pUVar3[iVar17].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x330 = uVar10;
    pUVar3[iVar17].layout.animState = 1;
    Menu_ClearSlot(0);
    iVar17 = 0;
    piVar15 = &DAT_0032c8d0;
    do {
      iVar8 = UiMgr_FindLayout(0x8a);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar15,8,extraout_a3_lo_06);
      iVar17 = iVar17 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar17 < 4);
    if (*(int *)(param_1 + 0x688) == 1) {
      iVar17 = 0;
      piVar16 = &DAT_0032c8e0;
      piVar15 = &DAT_0032c920;
      do {
        iVar8 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar16,8,extraout_a3_lo_07);
        iVar8 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar15,8,extraout_a3_lo_08);
        iVar17 = iVar17 + 1;
        piVar16 = piVar16 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar17 < 0xd);
      iVar17 = UiMgr_FindLayout(0x8a);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar17].layout,0x37,8,extraout_a3_lo_09);
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x7a,0);
  if (!bVar5) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) &&
     (bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x7a,1), !bVar5)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  pMVar4 = g_MenuMgr;
  if (((g_MenuMgr->prevScreen == 0xf) && (*(int *)(param_1 + 0x680) == 1)) &&
     (g_MenuMgr->nextScreen != 0xf)) {
    if (*(int *)(param_1 + 0x688) == 0) {
      iVar17 = 0;
      piVar16 = &DAT_0032c8e0;
      piVar15 = &DAT_0032c920;
      uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0);
      g_MenuMgr->unk_0538 = 2;
      *(undefined4 *)&pMVar4->field_0x53c = uVar10;
      do {
        iVar8 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar16,8,extraout_a3_lo);
        if (*(int *)(param_1 + 0x444) <= iVar17) {
          iVar8 = UiMgr_FindLayout(0x8a);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar15,8,extraout_a3_lo_10);
        }
        iVar17 = iVar17 + 1;
        piVar16 = piVar16 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar17 < 0xd);
      puVar14 = &g_MenuMgr->field_0x40;
      uVar11 = Profile_Get(0);
      Profile_CopyCarRecord
                (auStack_280,uVar11,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0)
                );
      iVar17 = MenuText_RivalCar(auStack_280[0],0xffffffffffffffff);
      UiElem_SetPropInt((UiLayout *)puVar14,0,0x16,iVar17);
    }
    else {
      RaceResult_BuildMessage(auStack_10,*(undefined2 *)(param_1 + 0x24));
      pMVar4 = g_MenuMgr;
      g_MenuMgr->unk_0538 = 0;
      *(undefined4 *)&pMVar4->field_0x53c = uStack_c;
      RivalDb_Copy(auStack_400,*(undefined2 *)(param_1 + 0x24));
      iVar17 = 0;
      piVar16 = &DAT_0032c8e0;
      piVar15 = &DAT_0032c920;
      g_MenuMgr->unk_0544 = uStack_3f4;
      do {
        iVar8 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar16,8,extraout_a3_lo_00);
        iVar8 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar15,8,extraout_a3_lo_01);
        iVar17 = iVar17 + 1;
        piVar16 = piVar16 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar17 < 0xd);
      puVar14 = &g_MenuMgr->field_0x40;
      RaceResult_BuildMessage(auStack_20,*(undefined2 *)(param_1 + 0x24));
      iVar17 = MenuText_RivalCar(uStack_1c,0xffffffffffffffff);
      UiElem_SetPropInt((UiLayout *)puVar14,0,0x16,iVar17);
    }
    iVar17 = 0;
    piVar15 = &DAT_0032c8d0;
    do {
      iVar8 = UiMgr_FindLayout(0x8a);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar15,8,extraout_a3_lo_02);
      iVar17 = iVar17 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar17 < 4);
    if (*(int *)(param_1 + 0xe4) != -1) {
      iVar17 = 0;
      piVar15 = &DAT_0032c960;
      do {
        iVar8 = UiMgr_FindLayout(0x87);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar15,8,extraout_a3_lo_03);
        iVar17 = iVar17 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar17 < 6);
    }
    iVar17 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar17].layout,(long)_s_ScrCareer_Draw_GoBattle_1,8,
                        extraout_a3_lo_04);
    iVar17 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar17].layout,(long)_s_ScrCareer_Draw_GoBattle_2,8,
                        extraout_a3_lo_05);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x125,2);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    uVar9 = UiRes_GetLayoutData(0x8c);
    iVar17 = UiMgr_FindLayout(0x84);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar17].layout.unk_310 = 0xffffffff;
    pUVar3[iVar17].layout.unk_31c = 0;
    pUVar3[iVar17].layout.unk_30c = 0;
    if (pUVar3[iVar17].layout.unk_31c == 0) {
      pUVar3[iVar17].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar17].layout.unk_318 = 1;
    }
    pUVar3[iVar17].layout.unk_30c = 0;
    if (pUVar3[iVar17].layout.unk_31c == 0) {
      pUVar3[iVar17].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar17].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x314 = 0;
    pUVar3[iVar17].layout.unk_31c = uVar9;
    pUVar3[iVar17].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x8d);
    iVar17 = UiMgr_FindLayout(0x84);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar17].layout.field_0x330 == 0) {
      pUVar3[iVar17].layout.animState = 0;
    }
    else {
      pUVar3[iVar17].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar17].layout.field_0x330 == 0) {
      pUVar3[iVar17].layout.animState = 0;
    }
    else {
      pUVar3[iVar17].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar17].layout.field_0x330 = uVar10;
    pUVar3[iVar17].layout.animState = 1;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  MenuWnd_DrawText(0x7a,0x1a,0x362);
  MenuWnd_DrawText(0x7a,0x19,0x363);
  if (*(int *)(param_1 + 0x688) == 0) {
    MenuWnd_DrawLabel(0x8a,0x3b,0x3b,*(int *)(param_1 + 0x6a0) + 1,*(undefined4 *)(param_1 + 0x444))
    ;
    iVar17 = *(int *)(param_1 + 0x62c);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x62c);
  }
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(iVar17 * 4 + 0x36eba8));
  iVar17 = RivalDb_Get(*(undefined2 *)(param_1 + 0x24));
  uVar11 = RaceCtx_Get_10();
  cVar6 = Race_IsTimeTrialMode(uVar11,0);
  if (cVar6 == '\0') {
    if (*(short *)(iVar17 + 0x3a) < *(short *)(iVar17 + 0x38)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  else if (*(short *)(iVar17 + 0x3a) < *(short *)(iVar17 + 0x38)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    MenuWnd_DrawText(0x7a,0x1b,0x4a);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  else {
    MenuWnd_DrawText(0x7a,0x1b,0x49);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  RivalDb_Copy(auStack_580,uVar1);
  puVar13 = auStack_580;
  puVar12 = auStack_1b0;
  iVar17 = 0x5f;
  do {
    iVar17 = iVar17 + -1;
    *puVar12 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar17);
  UiElem_SetPropInt(&pUVar2[iVar7].layout,0x18,0x16,*(int *)(&DAT_0032c8b0 + (uint)bStack_184 * 4));
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState
              (0x7a,*(undefined4 *)(&s_ScrCareer_Draw_GoBattle_1 + *(int *)(param_1 + 0x62c) * 4),1,
               0);
    iVar17 = *(int *)(param_1 + 0x688);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x688);
  }
  if (iVar17 == 0) {
    uVar11 = Profile_Get(0);
    Profile_CopyCarRecord
              (auStack_650,uVar11,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0));
    MenuWnd_DrawStatus(auStack_650[0],0xffffffffffffffff,0xffffffffffffffff,0);
  }
  else {
    RaceResult_BuildMessage(auStack_30,*(undefined2 *)(param_1 + 0x24));
    MenuWnd_DrawStatus(uStack_2c,0xffffffffffffffff,0xffffffffffffffff,0);
  }
  iVar17 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar17].layout);
  iVar17 = UiMgr_FindLayout(0x8a);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar17].layout);
  uVar11 = Profile_Get(0);
  cVar6 = Profile_GetChapter(uVar11);
  if (cVar6 == '\0') {
    UiLayout_UpdateAnimById((UiLayout *)0x81,0);
    iVar17 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar17].layout);
  }
  else {
    UiLayout_UpdateAnimById((UiLayout *)0x82,0);
    iVar17 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar17].layout);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  if (*(int *)(param_1 + 0x688) == 0) {
    puVar14 = &g_MenuMgr->field_0x40;
    uVar11 = Profile_Get(0);
    Profile_CopyCarRecord
              (auStack_720,uVar11,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0));
    iVar17 = MenuText_RivalCar(auStack_720[0],0xffffffffffffffff);
    UiElem_SetPropInt((UiLayout *)puVar14,0,0x16,iVar17);
  }
  else {
    puVar14 = &g_MenuMgr->field_0x40;
    iVar17 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x484),0xffffffffffffffff);
    UiElem_SetPropInt((UiLayout *)puVar14,0,0x16,iVar17);
  }
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

