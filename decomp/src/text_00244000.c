// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00244000 - 0x00248000
#include "ghidra_types.h"

// 0x00244b90  size 0xf54
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_MasterLord(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
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
  
  iVar3 = UiMgr_FindLayout(0x84);
  iVar11 = *_g_UiMgr + iVar3 * 0x4f4 + 4;
  iVar4 = UiMgr_FindLayout(0x85);
  iVar3 = *_g_UiMgr;
  UiMgr_FindLayout(7);
  iVar5 = UiMgr_FindLayout(0x86);
  iVar10 = *_g_UiMgr + iVar5 * 0x4f4 + 4;
  UiMgr_FindLayout(0x7b);
  iVar6 = UiMgr_FindLayout(0x91);
  iVar5 = *_g_UiMgr;
  if (*(int *)(param_1 + 0x64c) == 0xe) {
    UiElem_SetPropFloat(0,iVar11,0xe,8);
    iVar7 = *(int *)(param_1 + 0x64c);
  }
  else {
    UiElem_SetPropFloat(0,iVar11,0xf,8);
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
    uVar8 = Race_GetCourseVariant();
    uVar8 = MsgId_ForOption(uVar8);
    uVar8 = MsgId_ForSlot(uVar8,1);
    MenuWnd_DrawLabel(0x85,3,0x37d,1,uVar8);
  }
  uVar8 = Profile_Get(0);
  sVar2 = Profile_GetRivalBattleCount(uVar8,*(undefined4 *)(param_1 + 0x24));
  if (sVar2 < 1) {
    UiElem_SetPropFloat(0,iVar11,1,8);
  }
  else {
    RivalDb_Copy(auStack_300,*(undefined2 *)(param_1 + 0x24));
    if ((cStack_2fc == '\x05') ||
       (RivalDb_Copy(auStack_480,*(undefined2 *)(param_1 + 0x24)), cStack_47c == '\x06')) {
      UiElem_SetPropFloat(0,iVar11,1,8);
    }
    else {
      UiElem_SetPropFloat(0x3f800000,iVar11,1,8);
    }
  }
  UiElem_SetPropFloat(0,iVar11,3,8);
  if (*(int *)(param_1 + 0x24) < 0) {
    UiElem_SetPropFloat(0,iVar11,0,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,iVar11,0,8);
  }
  UiElem_SetPropFloat(0,iVar11,2,8);
  UiElem_SetPropInt(iVar3 + iVar4 * 0x4f4 + 4,1,9,*(undefined4 *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x64c) != 0xe) {
    UiLayout_UpdateAnimById(0x84,2);
  }
  UiLayout_UpdateAnimById(0x85,0);
  iVar3 = UiMgr_FindLayout(0x84);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  if ((*(int *)(param_1 + 0x64c) == 0xe) || (*(int *)(param_1 + 0x64c) == 0x16)) {
    iVar3 = UiMgr_FindLayout(0x85);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
    iVar3 = *(int *)(param_1 + 0x64c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x64c);
  }
  if ((iVar3 == 0xe) && (*(int *)(param_1 + 0x644) == 1)) {
    RivalDb_Copy(&uStack_600,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 4 + param_1 + 0x5e4));
    puVar12 = auStack_5bc;
    puVar9 = auStack_13c;
    iVar3 = 0x17;
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
      iVar3 = iVar3 + -1;
      *puVar9 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar9 = puVar9 + 1;
    } while (0 < iVar3);
    puVar12 = auStack_560;
    puVar9 = auStack_e0;
    iVar3 = 0x17;
    do {
      iVar3 = iVar3 + -1;
      *puVar9 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar9 = puVar9 + 1;
    } while (0 < iVar3);
    puVar12 = auStack_504;
    puVar9 = auStack_84;
    iVar3 = 8;
    do {
      iVar3 = iVar3 + -1;
      uVar1 = puVar12[1];
      *puVar9 = *puVar12;
      puVar9[1] = uVar1;
      puVar12 = puVar12 + 2;
      puVar9 = puVar9 + 2;
    } while (0 < iVar3);
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
    puVar12 = auStack_73c;
    puVar9 = auStack_13c;
    iVar3 = 0x17;
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
      iVar3 = iVar3 + -1;
      *puVar9 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar9 = puVar9 + 1;
    } while (0 < iVar3);
    puVar12 = auStack_6e0;
    puVar9 = auStack_e0;
    iVar3 = 0x17;
    do {
      iVar3 = iVar3 + -1;
      *puVar9 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar9 = puVar9 + 1;
    } while (0 < iVar3);
    puVar12 = auStack_684;
    puVar9 = auStack_84;
    iVar3 = 8;
    do {
      iVar3 = iVar3 + -1;
      uVar1 = puVar12[1];
      *puVar9 = *puVar12;
      puVar9[1] = uVar1;
      puVar12 = puVar12 + 2;
      puVar9 = puVar9 + 2;
    } while (0 < iVar3);
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
      iVar3 = *(int *)(param_1 + 0xe4);
      goto LAB_00245414;
    case 2:
      UiElem_SetPropInt(iVar10,1,0x16,0x44);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
      break;
    case 3:
      UiElem_SetPropInt(iVar10,1,0x16,0x41);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
      break;
    case 4:
      UiElem_SetPropInt(iVar10,1,0x16,0x3f);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
      break;
    case 5:
      UiElem_SetPropInt(iVar10,1,0x16,0x40);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
      break;
    case 6:
      UiElem_SetPropInt(iVar10,1,0x16,0x40);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
      MenuWnd_DrawText(0x86,2,0xa4);
      break;
    case 7:
      iVar3 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x24);
        Rival_GetRecord(aiStack_7d0,iVar3);
        if (iVar5 == aiStack_7d0[0]) {
          UiElem_SetPropInt(iVar10,1,0x16,*(undefined4 *)(&DAT_0032c9c0 + iVar3 * 4));
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x14);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
      break;
    case 8:
      UiElem_SetPropInt(iVar10,1,0x16,0x43);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
      break;
    case 9:
      UiElem_SetPropInt(iVar10,1,0x16,0x42);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
      break;
    case 10:
      UiElem_SetPropInt(iVar10,1,0x16,0x3e);
      iVar3 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
      break;
    case 0xb:
      sVar2 = RivalRec_GetCourse(&uStack_180);
      UiElem_SetPropInt(iVar5 + iVar6 * 0x4f4 + 4,2,0x16,*(undefined4 *)(&DAT_0032ca10 + sVar2 * 4))
      ;
      iVar3 = UiMgr_FindLayout(0x91);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
      if (*(int *)(param_1 + 0x64c) == 0x16) {
        iVar3 = UiMgr_FindLayout(0x91);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0xc,8);
      }
      else {
        iVar3 = UiMgr_FindLayout(0x91);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0xc,8);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0xe4);
LAB_00245414:
  if (iVar3 != -1) {
    iVar3 = UiMgr_FindLayout(0x87);
    iVar4 = *_g_UiMgr + iVar3 * 0x4f4 + 4;
    UiMgr_FindLayout(0x81);
    uVar8 = MsgId_TeamName(*(undefined4 *)(param_1 + 0xe4));
    MenuWnd_DrawText(0x87,0x2f,uVar8);
    iVar5 = 0;
    puVar9 = (undefined4 *)0x32cab0;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 0x5e4) != -1) {
        uVar8 = MsgId_RivalName();
        MenuWnd_DrawText(0x87,*puVar9,uVar8);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 4;
      puVar9 = puVar9 + 1;
    } while (iVar5 < 6);
    UiElem_SetPropInt(iVar4,0x28,0x16,*(undefined4 *)(&DAT_0032cb50 + *(int *)(param_1 + 0xe4) * 4))
    ;
    iVar5 = 0;
    puVar9 = &DAT_0032caf0;
    puVar12 = &DAT_0032cb10;
    iVar3 = param_1;
    do {
      iVar6 = *(int *)(iVar3 + 0x5e4);
      if (iVar6 == -1) {
LAB_002458b0:
        UiElem_SetPropFloat(0,iVar4,*puVar9,8);
      }
      else {
        uVar8 = Profile_Get(0);
        sVar2 = Profile_GetRivalBattleCount(uVar8,iVar6);
        if (sVar2 < 1) goto LAB_002458b0;
        UiElem_SetPropFloat(0x3f800000,iVar4,*puVar9,8);
        UiElem_Get(iVar4,*puVar12,0x69,0x67,0x62);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 4;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar5 < 6);
    iVar5 = 0;
    puVar9 = &DAT_0032cb10;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 0x5e4) == -1) {
        UiElem_SetPropFloat(0,iVar4,*puVar9,8);
      }
      else {
        UiElem_SetPropFloat(0x3f800000,iVar4,*puVar9,8);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 4;
      puVar9 = puVar9 + 1;
    } while (iVar5 < 6);
    iVar6 = 0;
    puVar12 = &DAT_0032cad0;
    puVar9 = &DAT_0032cb30;
    iVar3 = param_1;
    iVar5 = param_1;
    do {
      iVar10 = *(int *)(iVar3 + 0x5e4);
      if ((iVar10 == -1) ||
         ((iVar11 = param_1 + *(int *)(param_1 + 0x5e0) * 0x14, *(int *)(iVar11 + 0x568) != iVar10
          && (*(int *)(iVar11 + 0x56c) != iVar10)))) {
        UiElem_SetPropFloat(0,iVar4,*puVar12,8);
      }
      else {
        UiElem_SetPropFloat(0x3f800000,iVar4,*puVar12,8);
        UiLayout_UpdateAnimById(0x87,iVar6);
      }
      if ((*(int *)(iVar3 + 0x5e4) != -1) && (iVar6 < 5)) {
        iVar11 = 0;
        iVar10 = param_1;
        do {
          if ((((*(int *)(iVar5 + 0x568) != -1) &&
               (*(int *)(iVar5 + 0x568) == *(int *)(iVar10 + 0x5e4))) &&
              (*(int *)(iVar5 + 0x56c) != -1)) &&
             (*(int *)(iVar5 + 0x56c) == *(int *)(iVar10 + 0x5e8))) {
            iVar10 = UiMgr_FindLayout(0x87);
            UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar10 * 0x4f4 + 4,*puVar9,8);
            break;
          }
          iVar7 = UiMgr_FindLayout(0x87);
          UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,*puVar9,8);
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar11 < 5);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 4;
      puVar12 = puVar12 + 1;
      iVar5 = iVar5 + 0x14;
      puVar9 = puVar9 + 1;
    } while (iVar6 < 6);
    if ((*(int *)(param_1 + 0x64c) == 0xe) && (*piRam0036f468 == 1)) {
      MenuWnd_SetItemState(0x87,*(undefined4 *)(&DAT_0032ca90 + *(int *)(param_1 + 0x62c) * 4),1,0);
    }
    iVar3 = UiMgr_FindLayout(0x87);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0,8);
    iVar3 = UiMgr_FindLayout(0x87);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  }
  Menu_DrawFrame(_g_MenuMgr + 0x654);
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
/* screen record 0x32bedc */

void ScrIsTakenAway_Exit(void)

{
  return;
}

// 0x00246190  size 0x384
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_ThisIsYour(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x18000;
  iVar6 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar6 != 0) {
    uVar2 = UiRes_GetLayoutData(0x10c);
    iVar6 = UiMgr_FindLayout(0x89);
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
    *(undefined4 *)(iVar6 + 800) = uVar2;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x195);
    iVar6 = _g_MenuMgr;
    *(undefined4 *)(_g_MenuMgr + 0x350) = 0xffffffff;
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
    *(undefined4 *)(iVar6 + 0x35c) = uVar2;
    *(undefined4 *)(iVar6 + 0x358) = 1;
    Menu_ClearSlot(0);
    iVar6 = _g_MenuMgr;
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(_g_MenuMgr + 0x538) = 1;
    *(undefined4 *)(iVar6 + 0x53c) = uVar2;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
    if (*(int *)(param_1 + 0x648) == 0x18) {
      Menu_ShowDialog(_g_MenuMgr + 0x654,0x125,2);
      Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
      iVar6 = *(int *)(param_1 + 0x648);
      goto LAB_002461d4;
    }
  }
  iVar6 = *(int *)(param_1 + 0x648);
LAB_002461d4:
  if (iVar6 == 0x2c) {
    iVar6 = _g_MenuMgr + 0x40;
    lVar4 = UiLayout_UpdateAnimById(0x89,0);
    lVar5 = UiLayout_UpdateAnimIfActive(iVar6,0);
    if (lVar4 == 0 && lVar5 == 0) {
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
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,0x27,8);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x24),0xfffffffffffffffd,0xffffffffffffffff,0);
  uVar3 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar3);
  if (cVar1 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar6 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar6 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  }
  iVar6 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  iVar6 = _g_MenuMgr + 0x40;
  RivalDb_Copy(auStack_180,*(undefined2 *)(param_1 + 0x24));
  uVar3 = MenuText_RivalCar(uStack_178,0xffffffffffffffff);
  UiElem_SetPropInt(iVar6,0,0x16,uVar3);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00246520  size 0x2dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_IsTakenAway(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(0x112);
    iVar1 = UiMgr_FindLayout(0x95);
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
    uVar2 = UiRes_GetLayoutData(0x113);
    iVar1 = UiMgr_FindLayout(0x95);
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
    iVar1 = UiMgr_FindLayout(0x97);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0,8);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar3 = UiLayout_UpdateAnimById(0x95,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar3 = UiLayout_UpdateAnimById(0x95), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  uVar4 = MenuText_CarShortName(*(undefined2 *)(param_1 + 0x498),0xffffffffffffffff);
  MenuWnd_DrawText(0x95,0x14,uVar4);
  MenuWnd_DrawTextId(0x95,0x13,1,0x3ad);
  MenuWnd_DrawText(0x95,0x11,0x3ab);
  iVar1 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x95);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x97);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = _g_MenuMgr + 0x40;
  uVar4 = MenuText_RivalCar(*(undefined2 *)(param_1 + 0x498),0xffffffffffffffff);
  UiElem_SetPropInt(iVar1,0,0x16,uVar4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00246800  size 0x2a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_GetPrize(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(0x112);
    iVar1 = UiMgr_FindLayout(0x95);
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
    uVar2 = UiRes_GetLayoutData(0x113);
    iVar1 = UiMgr_FindLayout(0x95);
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
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar3 = UiLayout_UpdateAnimById(0x95,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar3 = UiLayout_UpdateAnimById(0x95), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawLabel(0x98,0xf,0x3a,*(int *)(param_1 + 0x484) + 1);
  MenuWnd_DrawText(0x98,0x11,*(int *)(param_1 + 0x484) + 0x89f);
  MenuWnd_DrawText(0x98,0x10,0x2f8);
  MenuWnd_DrawTextId(0x95,0x13,1,0x2f9);
  MenuWnd_DrawText(0x95,0x14,*(int *)(param_1 + 0x484) + 0x89f);
  MenuWnd_DrawText(0x95,0x11,0x3aa);
  iVar1 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x95);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x98);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00246ab0  size 0x2e4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Received(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_480 [8];
  undefined4 uStack_478;
  undefined1 auStack_300 [8];
  undefined4 uStack_2f8;
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(0x112);
    iVar1 = UiMgr_FindLayout(0x95);
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
    uVar2 = UiRes_GetLayoutData(0x113);
    iVar1 = UiMgr_FindLayout(0x95);
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
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar3 = UiLayout_UpdateAnimById(0x95,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar3 = UiLayout_UpdateAnimById(0x95), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawTextId(0x95,0x13,1,0x3ae);
  RivalDb_Copy(auStack_180,*(undefined2 *)(param_1 + 0x484));
  uVar4 = MenuText_CarShortName(uStack_178,0xffffffffffffffff);
  MenuWnd_DrawText(0x95,0x14,uVar4);
  MenuWnd_DrawText(0x95,0x11,0x3aa);
  RivalDb_Copy(auStack_300,*(undefined2 *)(param_1 + 0x484));
  MenuWnd_DrawStatus(uStack_2f8,0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x95);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x97);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = _g_MenuMgr + 0x40;
  RivalDb_Copy(auStack_480,*(undefined2 *)(param_1 + 0x484));
  uVar4 = MenuText_RivalCar(uStack_478,0xffffffffffffffff);
  UiElem_SetPropInt(iVar1,0,0x16,uVar4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00246da0  size 0x78
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32bed0 */

void ScrReceived_Enter(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    Menu_ClearSlot(0);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  return;
}

// 0x00246e20  size 0x4f8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_BetCar(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_330 [44];
  byte bStack_304;
  undefined1 auStack_1b0 [12];
  undefined4 uStack_1a4;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  iVar4 = UiMgr_FindLayout(0x7e);
  iVar5 = *(int *)(param_1 + 0x65c);
  iVar2 = *_g_UiMgr;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar5 != 0) {
    uVar7 = UiRes_GetLayoutData(0x76);
    iVar5 = UiMgr_FindLayout(0x7e);
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
    *(undefined4 *)(iVar5 + 800) = uVar7;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar7 = UiRes_GetLayoutData(0x77);
    iVar5 = UiMgr_FindLayout(0x7e);
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
    *(undefined4 *)(iVar5 + 0x334) = uVar7;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 0x648) == 0x13) {
      RaceResult_BuildMessage(auStack_10,*(undefined2 *)(param_1 + 0x24));
      iVar5 = _g_MenuMgr;
      *(undefined4 *)(_g_MenuMgr + 0x538) = 0;
      *(undefined4 *)(iVar5 + 0x53c) = uStack_c;
      RivalDb_Copy(auStack_1b0,*(undefined2 *)(param_1 + 0x24));
      *(undefined4 *)(_g_MenuMgr + 0x544) = uStack_1a4;
      Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    }
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar8 = UiLayout_UpdateAnimById(0x7e,0);
  if (lVar8 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar8 = UiLayout_UpdateAnimById(0x7e), lVar8 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x7e,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + 0x36ebc8),1,0);
  }
  RivalDb_Copy(auStack_330,*(undefined2 *)(param_1 + 0x24));
  UiElem_SetPropInt(iVar2 + iVar4 * 0x4f4 + 4,0x19,0x16,
                    *(undefined4 *)(&DAT_0032c9a0 + (uint)bStack_304 * 4));
  iVar5 = UiMgr_FindLayout(0x7e);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x14,8);
  uVar9 = Profile_Get(0);
  uVar9 = Profile_GetMoney(uVar9);
  MenuWnd_DrawNumber(0x7e,0x22,uVar9);
  MenuWnd_DrawNumber(0x7e,0x21,*(undefined4 *)(param_1 + 0x48c));
  if ((*(uint *)(param_1 + 0x494) & 10) == 0) {
    MenuWnd_DrawText(0x7e,0x1d,0x37c);
    uVar6 = *(uint *)(param_1 + 0x494);
  }
  else {
    MenuWnd_DrawTextId(0x7e,0x1d,3,0x37c);
    uVar6 = *(uint *)(param_1 + 0x494);
  }
  if ((uVar6 & 1) == 0) {
    MenuWnd_DrawText(0x7e,0x1e,0x367);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  else {
    MenuWnd_DrawTextId(0x7e,0x1e,3,0x367);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  RaceResult_BuildMessage(auStack_20,uVar1);
  uVar9 = MenuText_CarShortName(uStack_1c,0xffffffffffffffff);
  MenuWnd_DrawLabel(0x7e,0x20,0x379,uVar9);
  MenuWnd_DrawText(0x7e,0x1f,0x369);
  MenuWnd_DrawText(7,0x2e,0x37a);
  iVar5 = UiMgr_FindLayout(0x7e);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  uVar9 = Profile_Get(0);
  cVar3 = Profile_GetChapter(uVar9);
  if (cVar3 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar5 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar5 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  }
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  iVar5 = _g_MenuMgr + 0x40;
  RaceResult_BuildMessage(auStack_30,*(undefined2 *)(param_1 + 0x24));
  uVar9 = MenuText_RivalCar(uStack_2c,0xffffffffffffffff);
  UiElem_SetPropInt(iVar5,0,0x16,uVar9);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00247320  size 0x384
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_ThisIsThe(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_1b0 [12];
  undefined4 uStack_1a4;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x18000;
  iVar6 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar6 != 0) {
    uVar2 = UiRes_GetLayoutData(0x10c);
    iVar6 = UiMgr_FindLayout(0x89);
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
    *(undefined4 *)(iVar6 + 800) = uVar2;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x195);
    iVar6 = _g_MenuMgr;
    *(undefined4 *)(_g_MenuMgr + 0x350) = 0xffffffff;
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
    *(undefined4 *)(iVar6 + 0x35c) = uVar2;
    *(undefined4 *)(iVar6 + 0x358) = 1;
    Menu_ClearSlot(0);
    RaceResult_BuildMessage(auStack_10,*(undefined2 *)(param_1 + 0x24));
    iVar6 = _g_MenuMgr;
    *(undefined4 *)(_g_MenuMgr + 0x538) = 0;
    *(undefined4 *)(iVar6 + 0x53c) = uStack_c;
    RivalDb_Copy(auStack_1b0,*(undefined2 *)(param_1 + 0x24));
    *(undefined4 *)(_g_MenuMgr + 0x544) = uStack_1a4;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
    if (*(int *)(param_1 + 0x648) == 0xc) {
      Menu_ShowDialog(_g_MenuMgr + 0x654,0x125,2);
      Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
      iVar6 = *(int *)(param_1 + 0x648);
      goto LAB_00247364;
    }
  }
  iVar6 = *(int *)(param_1 + 0x648);
LAB_00247364:
  if (iVar6 == 0xc) {
    iVar6 = _g_MenuMgr + 0x40;
    lVar4 = UiLayout_UpdateAnimById(0x89,0);
    lVar5 = UiLayout_UpdateAnimIfActive(iVar6,0);
    if (lVar4 == 0 && lVar5 == 0) {
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
  uVar3 = Profile_Get(0);
  cVar1 = Profile_GetChapter(uVar3);
  if (cVar1 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar6 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar6 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  }
  iVar6 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  iVar6 = _g_MenuMgr + 0x40;
  RaceResult_BuildMessage(auStack_30,*(undefined2 *)(param_1 + 0x24));
  uVar3 = MenuText_RivalCar(uStack_2c,0xffffffffffffffff);
  UiElem_SetPropInt(iVar6,0,0x16,uVar3);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x002476b0  size 0x784
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Challenge(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_480 [8];
  undefined4 uStack_478;
  undefined4 auStack_300 [96];
  undefined4 auStack_180 [11];
  byte bStack_154;
  
  iVar5 = UiMgr_FindLayout(0x7a);
  iVar6 = *(int *)(param_1 + 0x65c);
  iVar2 = *_g_UiMgr;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar6 != 0) {
    uVar7 = UiRes_GetLayoutData(0x6c);
    iVar6 = UiMgr_FindLayout(0x7a);
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
    *(undefined4 *)(iVar6 + 800) = uVar7;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar7 = UiRes_GetLayoutData(0x6d);
    iVar6 = UiMgr_FindLayout(0x7a);
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
    *(undefined4 *)(iVar6 + 0x334) = uVar7;
    *(undefined4 *)(iVar6 + 0x330) = 1;
    Menu_ClearSlot(0);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar8 = UiLayout_UpdateAnimById(0x7a,0);
  if (lVar8 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar8 = UiLayout_UpdateAnimById(0x7a), lVar8 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
  *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
  *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
  *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
  *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  if (((*(int *)(_g_MenuMgr + 0x24) == 0xf) && (*(int *)(param_1 + 0x680) == 1)) &&
     (*(int *)(_g_MenuMgr + 0x20) != 0xf)) {
    cVar4 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448));
    if ((cVar4 == '\x06') ||
       (cVar4 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), iVar6 = _g_MenuMgr, cVar4 == '\a')
       ) {
      iVar6 = _g_MenuMgr;
      uVar7 = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(_g_MenuMgr + 0x538) = 0;
      *(undefined4 *)(iVar6 + 0x53c) = uVar7;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(_g_MenuMgr + 0x538) = 1;
      *(undefined4 *)(iVar6 + 0x53c) = uVar7;
    }
    iVar6 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,uRam0036ebc0,8);
    iVar6 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,uRam0036ebc4,8);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
    Menu_ShowDialog(_g_MenuMgr + 0x654,0x125,2);
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    iVar6 = UiMgr_FindLayout(0x89);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,0x27,8);
    uVar7 = UiRes_GetLayoutData(0x8c);
    iVar6 = UiMgr_FindLayout(0x84);
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
    *(undefined4 *)(iVar6 + 800) = uVar7;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar7 = UiRes_GetLayoutData(0x8d);
    iVar6 = UiMgr_FindLayout(0x84);
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
    *(undefined4 *)(iVar6 + 0x334) = uVar7;
    *(undefined4 *)(iVar6 + 0x330) = 1;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  MenuWnd_DrawText(0x7a,0x1a,0x138);
  MenuWnd_DrawText(0x7a,0x19,0x363);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + 0x36ebb8));
  iVar6 = RivalDb_Get(*(undefined2 *)(param_1 + 0x24));
  uVar9 = RaceCtx_Get_10();
  cVar4 = Race_IsTimeTrialMode(uVar9,0);
  if (cVar4 == '\0') {
    if (*(short *)(iVar6 + 0x3a) < *(short *)(iVar6 + 0x38)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else if (*(short *)(iVar6 + 0x3a) < *(short *)(iVar6 + 0x38)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    MenuWnd_DrawText(0x7a,0x1b,0x4a);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  else {
    MenuWnd_DrawText(0x7a,0x1b,0x49);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  RivalDb_Copy(auStack_300,uVar1);
  puVar11 = auStack_300;
  puVar10 = auStack_180;
  iVar6 = 0x5f;
  do {
    iVar6 = iVar6 + -1;
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  } while (0 < iVar6);
  UiElem_SetPropInt(iVar2 + iVar5 * 0x4f4 + 4,0x18,0x16,
                    *(undefined4 *)(&DAT_0032c980 + (uint)bStack_154 * 4));
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x7a,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + 0x36ebc0),1,0);
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x24),0xfffffffffffffffd,0xffffffffffffffff,0);
  uVar9 = Profile_Get(0);
  cVar4 = Profile_GetChapter(uVar9);
  if (cVar4 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar6 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar6 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  }
  iVar6 = UiMgr_FindLayout(0x89);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  iVar6 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  cVar4 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448));
  if ((cVar4 == '\x06') || (cVar4 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar4 == '\a')
     ) {
    iVar6 = _g_MenuMgr + 0x40;
    uVar9 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0xbc),0xffffffffffffffff);
    UiElem_SetPropInt(iVar6,0,0x16,uVar9);
  }
  else {
    iVar6 = _g_MenuMgr + 0x40;
    RivalDb_Copy(auStack_480,*(undefined2 *)(param_1 + 0x24));
    uVar9 = MenuText_RivalCar(uStack_478,0xffffffffffffffff);
    UiElem_SetPropInt(iVar6,0,0x16,uVar9);
  }
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00247e40  size 0xb24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_GoBattle(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined2 auStack_720 [104];
  undefined2 auStack_650 [104];
  undefined4 auStack_580 [96];
  undefined1 auStack_400 [12];
  undefined4 uStack_3f4;
  undefined2 auStack_280 [104];
  undefined4 auStack_1b0 [11];
  byte bStack_184;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  iVar5 = UiMgr_FindLayout(0x7a);
  iVar12 = *(int *)(param_1 + 0x65c);
  iVar2 = *_g_UiMgr;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar12 != 0) {
    uVar7 = UiRes_GetLayoutData(0x6c);
    iVar12 = UiMgr_FindLayout(0x7a);
    iVar12 = *_g_UiMgr + iVar12 * 0x4f4;
    *(undefined4 *)(iVar12 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar12 + 800) = 0;
    *(undefined4 *)(iVar12 + 0x310) = 0;
    if (*(int *)(iVar12 + 800) == 0) {
      *(undefined4 *)(iVar12 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar12 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar12 + 0x310) = 0;
    if (*(int *)(iVar12 + 800) == 0) {
      *(undefined4 *)(iVar12 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar12 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar12 + 0x318) = 0;
    *(undefined4 *)(iVar12 + 800) = uVar7;
    *(undefined4 *)(iVar12 + 0x31c) = 1;
    uVar7 = UiRes_GetLayoutData(0x6d);
    iVar12 = UiMgr_FindLayout(0x7a);
    iVar12 = *_g_UiMgr + iVar12 * 0x4f4;
    *(undefined4 *)(iVar12 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar12 + 0x334) = 0;
    *(undefined4 *)(iVar12 + 0x324) = 0;
    if (*(int *)(iVar12 + 0x334) == 0) {
      *(undefined4 *)(iVar12 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar12 + 0x330) = 1;
    }
    *(undefined4 *)(iVar12 + 0x324) = 0;
    if (*(int *)(iVar12 + 0x334) == 0) {
      *(undefined4 *)(iVar12 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar12 + 0x330) = 1;
    }
    *(undefined4 *)(iVar12 + 0x32c) = 0;
    *(undefined4 *)(iVar12 + 0x334) = uVar7;
    *(undefined4 *)(iVar12 + 0x330) = 1;
    Menu_ClearSlot(0);
    iVar12 = 0;
    puVar10 = &DAT_0032c8d0;
    do {
      iVar6 = UiMgr_FindLayout(0x8a);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*puVar10,8);
      iVar12 = iVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar12 < 4);
    if (*(int *)(param_1 + 0x688) == 1) {
      iVar12 = 0;
      puVar11 = &DAT_0032c8e0;
      puVar10 = &DAT_0032c920;
      do {
        iVar6 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*puVar11,8);
        iVar6 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*puVar10,8);
        iVar12 = iVar12 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar12 < 0xd);
      iVar12 = UiMgr_FindLayout(0x8a);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar12 * 0x4f4 + 4,0x37,8);
    }
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar8 = UiLayout_UpdateAnimById(0x7a,0);
  if (lVar8 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar8 = UiLayout_UpdateAnimById(0x7a), lVar8 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  iVar12 = _g_MenuMgr;
  if (((*(int *)(_g_MenuMgr + 0x24) == 0xf) && (*(int *)(param_1 + 0x680) == 1)) &&
     (*(int *)(_g_MenuMgr + 0x20) != 0xf)) {
    if (*(int *)(param_1 + 0x688) == 0) {
      iVar6 = 0;
      puVar11 = &DAT_0032c8e0;
      puVar10 = &DAT_0032c920;
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0);
      *(undefined4 *)(_g_MenuMgr + 0x538) = 2;
      *(undefined4 *)(iVar12 + 0x53c) = uVar7;
      do {
        iVar12 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar12 * 0x4f4 + 4,*puVar11,8);
        if (*(int *)(param_1 + 0x444) <= iVar6) {
          iVar12 = UiMgr_FindLayout(0x8a);
          UiElem_SetPropFloat(0,*_g_UiMgr + iVar12 * 0x4f4 + 4,*puVar10,8);
        }
        iVar6 = iVar6 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar6 < 0xd);
      iVar12 = _g_MenuMgr + 0x40;
      uVar9 = Profile_Get(0);
      Profile_CopyCarRecord
                (auStack_280,uVar9,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0))
      ;
      uVar9 = MenuText_RivalCar(auStack_280[0],0xffffffffffffffff);
      UiElem_SetPropInt(iVar12,0,0x16,uVar9);
    }
    else {
      RaceResult_BuildMessage(auStack_10,*(undefined2 *)(param_1 + 0x24));
      iVar12 = _g_MenuMgr;
      *(undefined4 *)(_g_MenuMgr + 0x538) = 0;
      *(undefined4 *)(iVar12 + 0x53c) = uStack_c;
      RivalDb_Copy(auStack_400,*(undefined2 *)(param_1 + 0x24));
      iVar12 = 0;
      puVar11 = &DAT_0032c8e0;
      puVar10 = &DAT_0032c920;
      *(undefined4 *)(_g_MenuMgr + 0x544) = uStack_3f4;
      do {
        iVar6 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*puVar11,8);
        iVar6 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*puVar10,8);
        iVar12 = iVar12 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar12 < 0xd);
      iVar12 = _g_MenuMgr + 0x40;
      RaceResult_BuildMessage(auStack_20,*(undefined2 *)(param_1 + 0x24));
      uVar9 = MenuText_RivalCar(uStack_1c,0xffffffffffffffff);
      UiElem_SetPropInt(iVar12,0,0x16,uVar9);
    }
    iVar12 = 0;
    puVar10 = &DAT_0032c8d0;
    do {
      iVar6 = UiMgr_FindLayout(0x8a);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*puVar10,8);
      iVar12 = iVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar12 < 4);
    if (*(int *)(param_1 + 0xe4) != -1) {
      iVar12 = 0;
      puVar10 = &DAT_0032c960;
      do {
        iVar6 = UiMgr_FindLayout(0x87);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*puVar10,8);
        iVar12 = iVar12 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar12 < 6);
    }
    iVar12 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar12 * 0x4f4 + 4,uRam0036ebb0,8);
    iVar12 = UiMgr_FindLayout(0x7a);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar12 * 0x4f4 + 4,uRam0036ebb4,8);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
    Menu_ShowDialog(_g_MenuMgr + 0x654,0x125,2);
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    uVar7 = UiRes_GetLayoutData(0x8c);
    iVar12 = UiMgr_FindLayout(0x84);
    iVar12 = *_g_UiMgr + iVar12 * 0x4f4;
    *(undefined4 *)(iVar12 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar12 + 800) = 0;
    *(undefined4 *)(iVar12 + 0x310) = 0;
    if (*(int *)(iVar12 + 800) == 0) {
      *(undefined4 *)(iVar12 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar12 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar12 + 0x310) = 0;
    if (*(int *)(iVar12 + 800) == 0) {
      *(undefined4 *)(iVar12 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar12 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar12 + 0x318) = 0;
    *(undefined4 *)(iVar12 + 800) = uVar7;
    *(undefined4 *)(iVar12 + 0x31c) = 1;
    uVar7 = UiRes_GetLayoutData(0x8d);
    iVar12 = UiMgr_FindLayout(0x84);
    iVar12 = *_g_UiMgr + iVar12 * 0x4f4;
    *(undefined4 *)(iVar12 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar12 + 0x334) = 0;
    *(undefined4 *)(iVar12 + 0x324) = 0;
    if (*(int *)(iVar12 + 0x334) == 0) {
      *(undefined4 *)(iVar12 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar12 + 0x330) = 1;
    }
    *(undefined4 *)(iVar12 + 0x324) = 0;
    if (*(int *)(iVar12 + 0x334) == 0) {
      *(undefined4 *)(iVar12 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar12 + 0x330) = 1;
    }
    *(undefined4 *)(iVar12 + 0x32c) = 0;
    *(undefined4 *)(iVar12 + 0x334) = uVar7;
    *(undefined4 *)(iVar12 + 0x330) = 1;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  MenuWnd_DrawText(0x7a,0x1a,0x362);
  MenuWnd_DrawText(0x7a,0x19,0x363);
  if (*(int *)(param_1 + 0x688) == 0) {
    MenuWnd_DrawLabel(0x8a,0x3b,0x3b,*(int *)(param_1 + 0x6a0) + 1,*(undefined4 *)(param_1 + 0x444))
    ;
    iVar12 = *(int *)(param_1 + 0x62c);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x62c);
  }
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(iVar12 * 4 + 0x36eba8));
  iVar12 = RivalDb_Get(*(undefined2 *)(param_1 + 0x24));
  uVar9 = RaceCtx_Get_10();
  cVar4 = Race_IsTimeTrialMode(uVar9,0);
  if (cVar4 == '\0') {
    if (*(short *)(iVar12 + 0x3a) < *(short *)(iVar12 + 0x38)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else if (*(short *)(iVar12 + 0x3a) < *(short *)(iVar12 + 0x38)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    MenuWnd_DrawText(0x7a,0x1b,0x4a);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  else {
    MenuWnd_DrawText(0x7a,0x1b,0x49);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
  }
  RivalDb_Copy(auStack_580,uVar1);
  puVar11 = auStack_580;
  puVar10 = auStack_1b0;
  iVar12 = 0x5f;
  do {
    iVar12 = iVar12 + -1;
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  } while (0 < iVar12);
  UiElem_SetPropInt(iVar2 + iVar5 * 0x4f4 + 4,0x18,0x16,
                    *(undefined4 *)(&DAT_0032c8b0 + (uint)bStack_184 * 4));
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x7a,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + 0x36ebb0),1,0);
    iVar12 = *(int *)(param_1 + 0x688);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x688);
  }
  if (iVar12 == 0) {
    uVar9 = Profile_Get(0);
    Profile_CopyCarRecord
              (auStack_650,uVar9,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0));
    MenuWnd_DrawStatus(auStack_650[0],0xffffffffffffffff,0xffffffffffffffff,0);
  }
  else {
    RaceResult_BuildMessage(auStack_30,*(undefined2 *)(param_1 + 0x24));
    MenuWnd_DrawStatus(uStack_2c,0xffffffffffffffff,0xffffffffffffffff,0);
  }
  iVar12 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar12 * 0x4f4 + 4);
  iVar12 = UiMgr_FindLayout(0x8a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar12 * 0x4f4 + 4);
  uVar9 = Profile_Get(0);
  cVar4 = Profile_GetChapter(uVar9);
  if (cVar4 == '\0') {
    UiLayout_UpdateAnimById(0x81,0);
    iVar12 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar12 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0x82,0);
    iVar12 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar12 * 0x4f4 + 4);
  }
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  if (*(int *)(param_1 + 0x688) == 0) {
    iVar12 = _g_MenuMgr + 0x40;
    uVar9 = Profile_Get(0);
    Profile_CopyCarRecord
              (auStack_720,uVar9,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0));
    uVar9 = MenuText_RivalCar(auStack_720[0],0xffffffffffffffff);
    UiElem_SetPropInt(iVar12,0,0x16,uVar9);
  }
  else {
    iVar12 = _g_MenuMgr + 0x40;
    uVar9 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x484),0xffffffffffffffff);
    UiElem_SetPropInt(iVar12,0,0x16,uVar9);
  }
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

