// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002d0000 - 0x002d4000
#include "ghidra_types.h"

// 0x002d00e0  size 0x214
void maybe_RaceHud_FormatRecord(byte *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*param_1 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(*param_1) {
    case 1:
      bVar1 = RaceCtx_Get_8();
      if (bVar1 < 0xb) {
        uVar3 = GameState_Get_390();
        *(undefined4 *)(param_1 + 0x26c) = uVar3;
      }
      else {
        cVar2 = RaceCtx_Get_8();
        if (cVar2 == '\x10') {
          uVar3 = GameState_Get_390();
          *(undefined4 *)(param_1 + 0x26c) = uVar3;
        }
        else {
          puVar4 = (undefined1 *)GameState_Elem_f0_xcc(0);
          uVar8 = maybe_RaceTbl_GetCount();
          uVar6 = Race_GetDirection();
          uVar7 = Race_GetCourseVariant();
          iVar5 = RaceTbl_GetCourseEntry(uVar8,*puVar4,uVar6,uVar7);
          *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(iVar5 + 0x10);
        }
      }
      break;
    case 2:
      bVar1 = RaceCtx_Get_8();
      if (bVar1 < 0xb) {
        uVar8 = GameState_Get_364();
        Time_SplitHms(1,uVar8,param_1 + 0x270,param_1 + 0x274,param_1 + 0x278);
      }
      else {
        cVar2 = RaceCtx_Get_8();
        if (cVar2 == '\x10') {
          uVar8 = GameState_Get_364();
          Time_SplitHms(1,uVar8,param_1 + 0x270,param_1 + 0x274,param_1 + 0x278);
        }
        else {
          puVar4 = (undefined1 *)GameState_Elem_f0_xcc(0);
          uVar8 = RaceTbl_Ptr_5fa0();
          uVar6 = Race_GetDirection();
          uVar7 = Race_GetCourseVariant();
          iVar5 = RaceTbl_GetCourseEntryB(uVar8,*puVar4,uVar6,uVar7);
          if (*(int *)(iVar5 + 0xc) == 0) {
            Time_SplitHms(1,0,param_1 + 0x270,param_1 + 0x274,param_1 + 0x278);
          }
          else {
            Time_SplitHms(1,*(int *)(iVar5 + 0xc),param_1 + 0x270,param_1 + 0x274,param_1 + 0x278);
          }
        }
      }
      break;
    case 3:
      uVar8 = GameState_Get_364();
      Time_SplitHms(1,uVar8,param_1 + 0x270,param_1 + 0x274,param_1 + 0x278);
    }
  }
  return;
}

// 0x002d0300  size 0x550
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_RaceHud_AnimateLapInfo(int param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = 0;
  bVar1 = (*(uint *)(param_1 + 0x27c) & 1) == 0;
  iVar7 = param_1;
  do {
    if ((*(int *)(iVar7 + 0xfb8) == 0) && (*(int *)(iVar7 + 0xfbc) != -1)) {
      iVar4 = UiMgr_FindLayout();
      *(int *)(iVar7 + 0xfb8) = *_g_UiMgr + iVar4 * 0x4f4 + 4;
      RaceHud_ClearSlot(param_1,uVar8 & 0xff);
    }
    uVar8 = uVar8 + 1;
    iVar7 = iVar7 + 0x14;
  } while (uVar8 < 0x10);
  if (*(int *)(param_1 + 0x10f8) == 0) {
    iVar7 = UiMgr_FindLayout(0x10);
    *(int *)(param_1 + 0x10f8) = *_g_UiMgr + iVar7 * 0x4f4 + 4;
  }
  if (bVar1) {
    cVar2 = GameState_Get_354_7050();
    cVar3 = (&DAT_0032f535)[(uint)bRam0036f810 * 6];
    if (cVar2 == '\x01') {
      if ((cVar3 == '\x03') || (cVar3 == '\x05')) {
        UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),4,0x16,1);
      }
      else {
        cVar3 = RaceCtx_Get_8();
        if (cVar3 == '\x10') {
          lVar5 = GameState_Get_390();
          if (lVar5 == 0) {
            UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),4,0x16,1);
          }
          else {
            UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),4,0x16,2);
          }
        }
        else {
          UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),4,0x16,2);
        }
      }
    }
    else if (cVar2 == '\x02') {
      if (*(int *)(param_1 + 0x288) == 0) {
        if (cVar3 == '\x03') {
          UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),7,0x16);
        }
        else {
          cVar2 = RaceCtx_Get_8();
          if (cVar2 == '\x10') {
            lVar5 = GameState_Get_364();
            if (lVar5 == 0) {
              UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),7,0x16,1);
            }
            else {
              UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),7,0x16,0);
            }
          }
          else if (cVar3 != '\x05') {
            UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),7,0x16,0);
          }
        }
      }
      else {
        iVar7 = UiMgr_FindLayout(0x10);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0,8);
        iVar7 = UiMgr_FindLayout(0x10);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,1,8);
        iVar7 = UiMgr_FindLayout(0x10);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,7,8);
        iVar7 = UiMgr_FindLayout(0x11);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,1,8);
        iVar7 = UiMgr_FindLayout(0x12);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,1,8);
      }
    }
    else if (cVar2 == '\x03') {
      if (cVar3 == '\x03') {
        UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),5,0x16,4);
        UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),7,0x16,3);
      }
      else {
        cVar3 = RaceCtx_Get_8();
        if (cVar3 == '\x10') {
          UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),5,0x16,4);
          UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),7,0x16,3);
        }
        else {
          UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),5,0x16,1);
          UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10f8),7,0x16,2);
        }
      }
    }
  }
  if (bVar1) {
    iVar7 = UiMgr_FindLayout(0x11);
    *(int *)(param_1 + 0x10fc) = *_g_UiMgr + iVar7 * 0x4f4 + 4;
    uVar6 = 7;
    if (*(int *)(param_1 + 0x70) == 0) {
      uVar6 = 3;
    }
    UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10fc),4,0x16,uVar6);
    iVar7 = UiMgr_FindLayout(0x12);
    *(int *)(param_1 + 0x10fc) = *_g_UiMgr + iVar7 * 0x4f4 + 4;
    uVar6 = 1;
    if (*(int *)(param_1 + 0x70) == 0) {
      uVar6 = 7;
    }
    UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10fc),7,0x16,uVar6);
  }
  else {
    iVar7 = UiMgr_FindLayout(0x11);
    *(int *)(param_1 + 0x10fc) = *_g_UiMgr + iVar7 * 0x4f4 + 4;
    uVar6 = 2;
    if (*(int *)(param_1 + 0x70) == 0) {
      uVar6 = 5;
    }
    UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10fc),10,0x16,uVar6);
    uVar6 = 2;
    if (*(int *)(param_1 + 0x13c) == 0) {
      uVar6 = 5;
    }
    UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x10fc),4,0x16,uVar6);
  }
  return;
}

// 0x002d0860  size 0x268
void maybe_RaceHud_LoadWeatherAssets(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  cVar1 = Race_GetWeather();
  iVar8 = 0;
  iVar7 = 0;
  if (cVar1 != '\0') {
    iVar8 = 0x12;
  }
  lVar5 = GameState_GetPlayerCount();
  if (0 < lVar5) {
    iVar9 = 0;
    do {
      iVar2 = maybe_GameState_GetFlag();
      cVar1 = *(char *)(iVar2 + iVar9 + 0x7b0);
      iVar6 = 0;
      if (cVar1 == '\x04') {
        iVar6 = 6;
      }
      else if (cVar1 == '\x03') {
        iVar6 = 5;
      }
      else if (cVar1 == '\x02') {
        iVar6 = 4;
      }
      else if (cVar1 == '\x01') {
        iVar6 = 3;
      }
      iVar6 = iVar6 + iVar8;
      uVar4 = g_ArcToc->entries[iVar6 + 0xa00].unpackedSize;
      if (uVar4 == 0) {
        uVar4 = g_ArcToc->entries[iVar6 + 0xa00].sectorCount;
      }
      else {
        uVar4 = uVar4 + 0x7ff >> 0xb;
      }
      uVar3 = Mem_AllocAligned(uVar4 << 0xb,0x40,*(undefined4 *)(param_1 + 0x1108));
      *(undefined4 *)(param_1 + 0x110c) = uVar3;
      uVar3 = Arc_LoadFileEx(iVar6 + 0xa00,*(undefined4 *)(param_1 + 0x110c),0x2c55e0,
                             param_1 + 0x1108,0,0);
      *(undefined4 *)(param_1 + 0x1140) = uVar3;
      *(undefined4 *)(param_1 + 0x113c) = 0;
      *(undefined4 *)(param_1 + 0x1138) = 1;
      iVar2 = (uint)*(byte *)(iVar2 + iVar9 + 0x7b1) + iVar8;
      uVar4 = g_ArcToc->entries[iVar2 + 0xa03].unpackedSize;
      if (uVar4 == 0) {
        uVar4 = g_ArcToc->entries[iVar2 + 0xa03].sectorCount;
      }
      else {
        uVar4 = uVar4 + 0x7ff >> 0xb;
      }
      uVar3 = Mem_AllocAligned(uVar4 << 0xb,0x40,*(undefined4 *)(param_1 + 0x1144));
      *(undefined4 *)(param_1 + 0x1148) = uVar3;
      uVar3 = Arc_LoadFileEx(iVar2 + 0xa03,*(undefined4 *)(param_1 + 0x1148),0x2c55e0,
                             param_1 + 0x1144,0,0);
      *(undefined4 *)(param_1 + 0x117c) = uVar3;
      *(undefined4 *)(param_1 + 0x1178) = 0;
      *(undefined4 *)(param_1 + 0x1174) = 1;
      uVar4 = g_ArcToc->entries[iVar8 + 0xa14].unpackedSize;
      if (uVar4 == 0) {
        uVar4 = g_ArcToc->entries[iVar8 + 0xa14].sectorCount;
      }
      else {
        uVar4 = uVar4 + 0x7ff >> 0xb;
      }
      uVar3 = Mem_AllocAligned(uVar4 << 0xb,0x40,*(undefined4 *)(param_1 + 0x1180));
      *(undefined4 *)(param_1 + 0x1184) = uVar3;
      uVar3 = Arc_LoadFileEx(iVar8 + 0xa14,*(undefined4 *)(param_1 + 0x1184),0x2c55e0,
                             param_1 + 0x1180,0,0);
      *(undefined4 *)(param_1 + 0x11b8) = uVar3;
      iVar9 = iVar9 + 0x540;
      *(undefined4 *)(param_1 + 0x11b4) = 0;
      *(undefined4 *)(param_1 + 0x11b0) = 1;
      iVar7 = iVar7 + 1;
      param_1 = param_1 + 0xb4;
      iVar2 = GameState_GetPlayerCount();
    } while (iVar7 < iVar2);
  }
  return;
}

// 0x002d0ad0  size 0x658
void maybe_RaceHud_LoadRecordAssets(byte *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  byte bVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar10 = PTR_Result_Nop_0032f8a0;
  uVar9 = DAT_0032f89c;
  puVar8 = PTR_RaceUi_TaskSplits_0032f890;
  uVar7 = DAT_0032f88c;
  puVar6 = PTR_RaceUi_DrawRivalBanner_0032f880;
  uVar5 = DAT_0032f87c;
  puVar4 = PTR_RaceUi_TaskSpeedometer_0032f870;
  uVar3 = DAT_0032f86c;
  puVar2 = PTR_RaceUi_TaskGapMeter_0032f860;
  uVar13 = DAT_0032f85c;
  bVar1 = (*(uint *)(param_1 + 0x27c) & 1) == 0;
  if (*param_1 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(*param_1) {
    case 0:
      uVar12 = g_ArcToc->entries[0xa00].unpackedSize;
      if (uVar12 == 0) {
        uVar12 = g_ArcToc->entries[0xa00].sectorCount;
      }
      else {
        uVar12 = uVar12 + 0x7ff >> 0xb;
      }
      uVar13 = Mem_AllocAligned(uVar12 << 0xb,0x40,*(undefined4 *)(param_1 + 0x26f0));
      *(undefined4 *)(param_1 + 0x26f4) = uVar13;
      uVar13 = Arc_LoadFileEx(0xa00,*(undefined4 *)(param_1 + 0x26f4),0x2c55e0,param_1 + 0x26f0,0,0)
      ;
      *(undefined4 *)(param_1 + 0x2728) = uVar13;
      param_1[0x2724] = 0;
      param_1[0x2725] = 0;
      param_1[0x2726] = 0;
      param_1[0x2727] = 0;
      param_1[0x2720] = 1;
      puVar4 = PTR_RaceUi_DrawResultBanner_0032f810;
      uVar3 = DAT_0032f80c;
      puVar2 = PTR_RaceUi_TaskGearIndicator_0032f800;
      uVar13 = DAT_0032f7fc;
      param_1[0x2721] = 0;
      param_1[0x2722] = 0;
      param_1[0x2723] = 0;
      if (bVar1) {
        *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f808;
        *(undefined4 *)(param_1 + 0xfac) = uVar3;
        *(undefined **)(param_1 + 0xfb0) = puVar4;
      }
      else {
        *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f7f8;
        *(undefined4 *)(param_1 + 0xfac) = uVar13;
        *(undefined **)(param_1 + 0xfb0) = puVar2;
      }
      break;
    case 1:
      uVar12 = g_ArcToc->entries[0xa01].unpackedSize;
      if (uVar12 == 0) {
        uVar12 = g_ArcToc->entries[0xa01].sectorCount;
      }
      else {
        uVar12 = uVar12 + 0x7ff >> 0xb;
      }
      uVar13 = Mem_AllocAligned(uVar12 << 0xb,0x40,*(undefined4 *)(param_1 + 0x26f0));
      *(undefined4 *)(param_1 + 0x26f4) = uVar13;
      uVar13 = Arc_LoadFileEx(0xa01,*(undefined4 *)(param_1 + 0x26f4),0x2c55e0,param_1 + 0x26f0,0,0)
      ;
      *(undefined4 *)(param_1 + 0x2728) = uVar13;
      param_1[0x2724] = 0;
      param_1[0x2725] = 0;
      param_1[0x2726] = 0;
      param_1[0x2727] = 0;
      param_1[0x2720] = 1;
      puVar4 = PTR_RaceUi_TaskLapCounter_0032f830;
      uVar3 = DAT_0032f82c;
      puVar2 = PTR_RaceUi_TaskCountdown_0032f820;
      uVar13 = DAT_0032f81c;
      param_1[0x2721] = 0;
      param_1[0x2722] = 0;
      param_1[0x2723] = 0;
      if (bVar1) {
        *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f828;
        *(undefined4 *)(param_1 + 0xfac) = uVar3;
        *(undefined **)(param_1 + 0xfb0) = puVar4;
        bVar11 = RaceCtx_Get_8();
        if (bVar11 < 0xb) {
          uVar13 = GameState_Get_390();
          *(undefined4 *)(param_1 + 0x26c) = uVar13;
        }
        else {
          puVar14 = (undefined1 *)GameState_Elem_f0_xcc(0);
          uVar16 = maybe_RaceTbl_GetCount();
          uVar17 = Race_GetDirection();
          uVar18 = Race_GetCourseVariant();
          iVar15 = RaceTbl_GetCourseEntry(uVar16,*puVar14,uVar17,uVar18);
          *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(iVar15 + 0x10);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f818;
        *(undefined4 *)(param_1 + 0xfac) = uVar13;
        *(undefined **)(param_1 + 0xfb0) = puVar2;
      }
      break;
    case 2:
      goto switchD_002d0b18_caseD_2;
    case 3:
      *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f858;
      *(undefined4 *)(param_1 + 0xfac) = uVar13;
      *(undefined **)(param_1 + 0xfb0) = puVar2;
      uVar12 = g_ArcToc->entries[0xa01].unpackedSize;
      if (uVar12 == 0) {
        uVar12 = g_ArcToc->entries[0xa01].sectorCount;
      }
      else {
        uVar12 = uVar12 + 0x7ff >> 0xb;
      }
      uVar13 = Mem_AllocAligned(uVar12 << 0xb,0x40,*(undefined4 *)(param_1 + 0x26f0));
      *(undefined4 *)(param_1 + 0x26f4) = uVar13;
      uVar13 = Arc_LoadFileEx(0xa01,*(undefined4 *)(param_1 + 0x26f4),0x2c55e0,param_1 + 0x26f0,0,0)
      ;
      *(undefined4 *)(param_1 + 0x2728) = uVar13;
      param_1[0x2724] = 0;
      param_1[0x2725] = 0;
      param_1[0x2726] = 0;
      param_1[0x2727] = 0;
      param_1[0x2720] = 1;
      param_1[0x2721] = 0;
      param_1[0x2722] = 0;
      param_1[0x2723] = 0;
      uVar16 = GameState_Get_364();
      Time_SplitHms(1,uVar16,param_1 + 0x270,param_1 + 0x274,param_1 + 0x278);
      uVar13 = GameState_Get_390();
      *(undefined4 *)(param_1 + 0x26c) = uVar13;
      break;
    default:
      *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f868;
      *(undefined4 *)(param_1 + 0xfac) = uVar3;
      *(undefined **)(param_1 + 0xfb0) = puVar4;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f878;
      *(undefined4 *)(param_1 + 0xfac) = uVar5;
      *(undefined **)(param_1 + 0xfb0) = puVar6;
      uVar12 = g_ArcToc->entries[0xa00].unpackedSize;
      if (uVar12 == 0) {
        uVar12 = g_ArcToc->entries[0xa00].sectorCount;
      }
      else {
        uVar12 = uVar12 + 0x7ff >> 0xb;
      }
      uVar13 = Mem_AllocAligned(uVar12 << 0xb,0x40,*(undefined4 *)(param_1 + 0x26f0));
      *(undefined4 *)(param_1 + 0x26f4) = uVar13;
      uVar13 = Arc_LoadFileEx(0xa00,*(undefined4 *)(param_1 + 0x26f4),0x2c55e0,param_1 + 0x26f0,0,0)
      ;
      *(undefined4 *)(param_1 + 0x2728) = uVar13;
      param_1[0x2724] = 0;
      param_1[0x2725] = 0;
      param_1[0x2726] = 0;
      param_1[0x2727] = 0;
      param_1[0x2720] = 1;
      param_1[0x2721] = 0;
      param_1[0x2722] = 0;
      param_1[0x2723] = 0;
      uVar16 = GameState_Get_364();
      Time_SplitHms(1,uVar16,param_1 + 0x270,param_1 + 0x274,param_1 + 0x278);
      break;
    case 7:
      *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f888;
      *(undefined4 *)(param_1 + 0xfac) = uVar7;
      *(undefined **)(param_1 + 0xfb0) = puVar8;
      uVar12 = g_ArcToc->entries[0xa01].unpackedSize;
      if (uVar12 == 0) {
        uVar12 = g_ArcToc->entries[0xa01].sectorCount;
      }
      else {
        uVar12 = uVar12 + 0x7ff >> 0xb;
      }
      uVar13 = Mem_AllocAligned(uVar12 << 0xb,0x40,*(undefined4 *)(param_1 + 0x26f0));
      *(undefined4 *)(param_1 + 0x26f4) = uVar13;
      uVar13 = Arc_LoadFileEx(0xa01,*(undefined4 *)(param_1 + 0x26f4),0x2c55e0,param_1 + 0x26f0,0,0)
      ;
      *(undefined4 *)(param_1 + 0x2728) = uVar13;
      param_1[0x2724] = 0;
      param_1[0x2725] = 0;
      param_1[0x2726] = 0;
      param_1[0x2727] = 0;
      param_1[0x2720] = 1;
      param_1[0x2721] = 0;
      param_1[0x2722] = 0;
      param_1[0x2723] = 0;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f898;
      *(undefined4 *)(param_1 + 0xfac) = uVar9;
      *(undefined **)(param_1 + 0xfb0) = puVar10;
    }
  }
  else {
switchD_002d0b18_caseD_2:
    uVar12 = g_ArcToc->entries[0xa01].unpackedSize;
    if (uVar12 == 0) {
      uVar12 = g_ArcToc->entries[0xa01].sectorCount;
    }
    else {
      uVar12 = uVar12 + 0x7ff >> 0xb;
    }
    uVar13 = Mem_AllocAligned(uVar12 << 0xb,0x40,*(undefined4 *)(param_1 + 0x26f0));
    *(undefined4 *)(param_1 + 0x26f4) = uVar13;
    uVar13 = Arc_LoadFileEx(0xa01,*(undefined4 *)(param_1 + 0x26f4),0x2c55e0,param_1 + 0x26f0,0,0);
    *(undefined4 *)(param_1 + 0x2728) = uVar13;
    param_1[0x2724] = 0;
    param_1[0x2725] = 0;
    param_1[0x2726] = 0;
    param_1[0x2727] = 0;
    param_1[0x2720] = 1;
    puVar4 = PTR_RaceUi_DrawIntroCard_0032f850;
    uVar3 = DAT_0032f84c;
    puVar2 = PTR_RaceUi_TaskWarning_0032f840;
    uVar13 = DAT_0032f83c;
    param_1[0x2721] = 0;
    param_1[0x2722] = 0;
    param_1[0x2723] = 0;
    if (bVar1) {
      *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f848;
      *(undefined4 *)(param_1 + 0xfac) = uVar3;
      *(undefined **)(param_1 + 0xfb0) = puVar4;
      bVar11 = RaceCtx_Get_8();
      if (bVar11 < 0xb) {
        uVar16 = GameState_Get_364();
        Time_SplitHms(1,uVar16,param_1 + 0x270,param_1 + 0x274,param_1 + 0x278);
      }
      else {
        puVar14 = (undefined1 *)GameState_Elem_f0_xcc(0);
        uVar16 = RaceTbl_Ptr_5fa0();
        uVar17 = Race_GetDirection();
        uVar18 = Race_GetCourseVariant();
        iVar15 = RaceTbl_GetCourseEntryB(uVar16,*puVar14,uVar17,uVar18);
        if (*(int *)(iVar15 + 0xc) == 0) {
          Time_SplitHms(1,0,param_1 + 0x270,param_1 + 0x274,param_1 + 0x278);
        }
        else {
          Time_SplitHms(1,*(int *)(iVar15 + 0xc),param_1 + 0x270,param_1 + 0x274,param_1 + 0x278);
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xfa8) = DAT_0032f838;
      *(undefined4 *)(param_1 + 0xfac) = uVar13;
      *(undefined **)(param_1 + 0xfb0) = puVar2;
    }
  }
  return;
}

// 0x002d1130  size 0x694
void RaceHud_Load(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  bVar3 = RaceCtx_Get_8();
  puRam0036f804 = (undefined1 *)Mem_Alloc16(0x3b78,param_1);
  iVar13 = 0;
  lVar8 = GameState_GetTotalCarCount();
  if (0 < lVar8) {
    iVar11 = 0;
    do {
      RaceUi_SetupCarIcons(puRam0036f804 + iVar11 + 4,iVar13);
      iVar11 = iVar11 + 0xcc;
      iVar13 = iVar13 + 1;
      iVar7 = GameState_GetTotalCarCount();
    } while (iVar13 < iVar7);
  }
  uVar9 = 0;
  iVar13 = 0;
  do {
    puVar1 = puRam0036f804;
    uVar9 = uVar9 + 8;
    *(undefined4 *)(puRam0036f804 + iVar13 + 0xfb8) = 0;
    *(undefined4 *)(puVar1 + iVar13 + 0xfbc) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0xfc0) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0xfc4) = 0;
    puVar1[iVar13 + 0xfc8] = 0;
    puVar1 = puRam0036f804;
    *(undefined4 *)(puRam0036f804 + iVar13 + 0xfcc) = 0;
    *(undefined4 *)(puVar1 + iVar13 + 0xfd0) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0xfd4) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0xfd8) = 0;
    puVar1[iVar13 + 0xfdc] = 0;
    puVar1 = puRam0036f804;
    *(undefined4 *)(puRam0036f804 + iVar13 + 0xfe0) = 0;
    *(undefined4 *)(puVar1 + iVar13 + 0xfe4) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0xfe8) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0xfec) = 0;
    puVar1[iVar13 + 0xff0] = 0;
    puVar1 = puRam0036f804;
    *(undefined4 *)(puRam0036f804 + iVar13 + 0xff4) = 0;
    *(undefined4 *)(puVar1 + iVar13 + 0xff8) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0xffc) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0x1000) = 0;
    puVar1[iVar13 + 0x1004] = 0;
    puVar1 = puRam0036f804;
    *(undefined4 *)(puRam0036f804 + iVar13 + 0x1008) = 0;
    *(undefined4 *)(puVar1 + iVar13 + 0x100c) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0x1010) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0x1014) = 0;
    puVar1[iVar13 + 0x1018] = 0;
    puVar1 = puRam0036f804;
    *(undefined4 *)(puRam0036f804 + iVar13 + 0x101c) = 0;
    *(undefined4 *)(puVar1 + iVar13 + 0x1020) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0x1024) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0x1028) = 0;
    puVar1[iVar13 + 0x102c] = 0;
    puVar1 = puRam0036f804;
    *(undefined4 *)(puRam0036f804 + iVar13 + 0x1030) = 0;
    *(undefined4 *)(puVar1 + iVar13 + 0x1034) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0x1038) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0x103c) = 0;
    puVar1[iVar13 + 0x1040] = 0;
    puVar1 = puRam0036f804;
    *(undefined4 *)(puRam0036f804 + iVar13 + 0x1044) = 0;
    *(undefined4 *)(puVar1 + iVar13 + 0x1048) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0x104c) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar13 + 0x1050) = 0;
    puVar1[iVar13 + 0x1054] = 0;
    iVar13 = iVar13 + 0xa0;
  } while (uVar9 < 0x10);
  uVar6 = 1;
  puRam0036f804[0xfb4] = 0;
  *(undefined4 *)(puRam0036f804 + 0x10f8) = 0;
  *(undefined4 *)(puRam0036f804 + 0x10fc) = 0;
  if ((bVar3 != 9) && (bVar3 != 10)) {
    uVar6 = 0;
  }
  *(undefined4 *)(puRam0036f804 + 0x288) = uVar6;
  *(undefined4 *)(puRam0036f804 + 0x28c) = 0;
  *(undefined4 *)(puRam0036f804 + 0x1100) = 0;
  *(undefined4 *)(puRam0036f804 + 0x1104) = 0;
  *(undefined4 *)(puRam0036f804 + 0x29c) = 0;
  *(undefined4 *)(puRam0036f804 + 0x3b70) = 0;
  uVar4 = GameState_Get_354_7050();
  *puRam0036f804 = uVar4;
  *(undefined4 *)(puRam0036f804 + 0x268) = 0;
  *(undefined4 *)(puRam0036f804 + 0x26c) = 0;
  *(undefined4 *)(puRam0036f804 + 0x270) = 0;
  *(undefined4 *)(puRam0036f804 + 0x274) = 0;
  *(undefined4 *)(puRam0036f804 + 0x278) = 0;
  *(undefined4 *)(puRam0036f804 + 0x290) = 0;
  *(undefined4 *)(puRam0036f804 + 0x294) = 0;
  *(undefined4 *)(puRam0036f804 + 0x280) = 0;
  *(undefined4 *)(puRam0036f804 + 0x284) = 0;
  *(undefined4 *)(puRam0036f804 + 0x27c) = 0;
  *(uint *)(puRam0036f804 + 0x27c) = *(uint *)(puRam0036f804 + 0x27c) | 2;
  if (bVar3 == 0xd) {
    *(uint *)(puRam0036f804 + 0x27c) = *(uint *)(puRam0036f804 + 0x27c) | 1;
  }
  else {
    *(uint *)(puRam0036f804 + 0x27c) = *(uint *)(puRam0036f804 + 0x27c) & 0xfffffffe;
  }
  uVar9 = 0;
  iVar13 = 0;
  do {
    uVar12 = 0;
    iVar11 = 0;
    do {
      uVar2 = uRam0036f80c;
      uVar6 = uRam0036f808;
      puVar1 = puRam0036f804;
      iVar7 = iVar11 + iVar13;
      *(int *)(puRam0036f804 + iVar7 + 0x1108) = (int)param_1;
      *(undefined4 *)(puVar1 + iVar7 + 0x110c) = 0;
      *(undefined4 *)(puVar1 + iVar7 + 0x1110) = 1;
      *(undefined4 *)(puVar1 + iVar7 + 0x1114) = 0;
      *(undefined4 *)(puVar1 + iVar7 + 0x1128) = uVar6;
      *(undefined4 *)(puVar1 + iVar7 + 0x112c) = uVar2;
      *(undefined4 *)(puVar1 + iVar7 + 0x1130) = 0x50010;
      *(undefined4 *)(puVar1 + iVar7 + 0x1138) = 0;
      *(undefined4 *)(puVar1 + iVar7 + 0x113c) = 0;
      *(undefined4 *)(puVar1 + iVar7 + 0x1140) = 0;
      DmaBuf_SetUncached(puVar1 + iVar7 + 0x1118,0,0);
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 0x3c;
    } while (uVar12 < 3);
    uVar9 = uVar9 + 1;
    iVar13 = iVar13 + 0xb4;
  } while (uVar9 < 2);
  RaceUi_InitSprites(puRam0036f804 + 0x1270,param_1,1,uRam0036f808,uRam0036f80c,0x50010);
  RaceUi_InitSprites(puRam0036f804 + 0x26f0,param_1,1,uRam0036f808,uRam0036f80c,0x50010);
  puVar1 = puRam0036f804;
  uVar9 = g_ArcToc->entries[0xa02].unpackedSize;
  puVar10 = (undefined4 *)(puRam0036f804 + 0x1270);
  if (uVar9 == 0) {
    uVar9 = g_ArcToc->entries[0xa02].sectorCount;
  }
  else {
    uVar9 = uVar9 + 0x7ff >> 0xb;
  }
  uVar6 = Mem_AllocAligned(uVar9 << 0xb,0x40,*puVar10);
  *(undefined4 *)(puVar1 + 0x1274) = uVar6;
  uVar6 = Arc_LoadFileEx(0xa02,*(undefined4 *)(puVar1 + 0x1274),0x2c55e0,puVar10,0,0);
  *(undefined4 *)(puVar1 + 0x12a8) = uVar6;
  *(undefined4 *)(puVar1 + 0x12a4) = 0;
  *(undefined4 *)(puVar1 + 0x12a0) = 1;
  bVar5 = GameState_Get_354_7050();
  if (*(int *)(puRam0036f804 + 0x288) == 0) {
    if (bVar3 == 0) {
      if (bVar5 == 3) {
        uRam0036f810 = 2;
      }
      else if (bVar5 == 2) {
        uRam0036f810 = 1;
      }
      else if (bVar5 == 1) {
        uRam0036f810 = 0;
      }
    }
    else if (bVar3 < 3) {
      if (bVar5 < 6) {
                    /* WARNING: Switch is manually overridden */
        switch(bVar5) {
        case 0:
          uRam0036f810 = 6;
          break;
        case 1:
          uRam0036f810 = 7;
          break;
        case 2:
          uRam0036f810 = 8;
          break;
        case 3:
          uRam0036f810 = 9;
          break;
        case 4:
          uRam0036f810 = 10;
        }
      }
    }
    else if (bVar3 < 5) {
      if (bVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(bVar5) {
        case 0:
          uRam0036f810 = 0xb;
          break;
        case 1:
          uRam0036f810 = 0xc;
          break;
        case 2:
          uRam0036f810 = 0xd;
          break;
        case 3:
          uRam0036f810 = 0xe;
          break;
        default:
          uRam0036f810 = 0xf;
          break;
        case 6:
          uRam0036f810 = 0x10;
          break;
        case 7:
          uRam0036f810 = 0x11;
        }
      }
    }
    else if (bVar3 < 6) {
      if (bVar5 == 3) {
        uRam0036f810 = 5;
      }
      else if (bVar5 == 2) {
        uRam0036f810 = 4;
      }
      else if (bVar5 == 1) {
        uRam0036f810 = 3;
      }
    }
    else if (bVar3 == 6) {
      uRam0036f810 = 0x17;
    }
    else if (bVar3 < 0xd) {
      if (bVar5 == 2) {
        uRam0036f810 = 0x13;
      }
      else if (bVar5 == 1) {
        uRam0036f810 = 0x12;
      }
    }
    else if (bVar3 == 0xd) {
      if (bVar5 == 2) {
        uRam0036f810 = 0x14;
      }
      else if (bVar5 == 1) {
        uRam0036f810 = 0x16;
      }
      else if (bVar5 == 0) {
        uRam0036f810 = 0x15;
      }
    }
    else if (bVar3 == 0x10) {
      uRam0036f810 = 0x17;
    }
  }
  else {
    uRam0036f810 = 0x18;
  }
  RaceUi_Alloc(puRam0036f804 + 0x2a0,param_1);
  RaceMenu_Init(puRam0036f804 + 0x3b8);
  ReplayUi_Load(param_1);
  maybe_RaceHud_LoadRecordAssets(puRam0036f804);
  maybe_RaceHud_LoadWeatherAssets(puRam0036f804);
  RaceHud_LoadLayouts(puRam0036f804,param_1);
  return;
}

// 0x002d17d0  size 0x710
void maybe_ReplayCam_RenderFrame(void)

{
  float *pfVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_395f0 [16];
  undefined1 auStack_395e0 [16];
  float afStack_395d0 [3600];
  undefined2 uStack_35d90;
  undefined1 uStack_35d8e;
  undefined1 auStack_35ce0 [352];
  undefined1 auStack_35b80 [20];
  undefined *puStack_35b6c;
  undefined1 auStack_35b40 [128];
  undefined1 auStack_35ac0 [128];
  undefined1 auStack_35a40 [128];
  uint auStack_359c0 [54880];
  undefined1 auStack_40 [20];
  undefined *puStack_2c;
  
  Pad_GetPort(0,0);
  maybe_ReplayCam_DrawModel(0x431100,0x431100);
  maybe_ReplayCam_DrawLensFlare(3);
  Pkt_Init(auStack_35b80,1,2,0);
  puStack_35b6c = &g_Views;
  Pkt_SubmitToChain(auStack_35b80,10);
  Pkt_Flush(auStack_35b80,0x46a0c8);
  Pkt_Submit(auStack_35b80,0);
  Pkt_Init(auStack_40,1,2,0);
  puStack_2c = &g_Views;
  Pkt_SubmitToChain(auStack_40,10);
  Pkt_End(auStack_40);
  Gfx_SetupRenderTargetEx(0x431100,auStack_35b40,uRam0046a0dc,0);
  TexSlot_Set(0,1,auStack_35b40);
  iVar2 = 0;
  puVar4 = auStack_359c0;
  do {
    puVar3 = puVar4;
    Obj_Reset(puVar3,4,0xffffffffffffffff);
    fVar7 = (float)iVar2 * 64.0;
    puVar3[0xbc] = (uint)fVar7;
    puVar3[0xbd] = 0;
    Obj_SetVisible(puVar3,1,0,0);
    *puVar3 = *puVar3 | 2;
    puVar3[0xac] = 0x48;
    puVar3[0xad] = 0;
    puVar3[0xb0] = 0;
    puVar3[0xb1] = 0;
    puVar3[0xb2] = 0;
    puVar3[0xb3] = 0x80;
    puVar3[0xc0] = 0x42800000;
    puVar3[0xc1] = 0x43e00000;
    *puVar3 = *puVar3 | 0x100;
    *puVar3 = *puVar3 | 0x10;
    if (fVar7 < 2.1474836e+09) {
      uVar5 = (uint)fVar7;
      puVar3[0x84] = uVar5;
    }
    else {
      uVar5 = (int)(fVar7 - 2.1474836e+09) | 0x80000000;
      puVar3[0x84] = uVar5;
    }
    puVar3[0x85] = 0;
    iVar2 = iVar2 + 1;
    *puVar3 = *puVar3 | 0x10;
    puVar3[0x8a] = uVar5 + 0x40;
    puVar3[0x8b] = 0x1c0;
    puVar3[0xaa] = 0x31001;
    puVar3[0xab] = 0;
    puVar4 = puVar3 + 0xc4;
  } while (iVar2 < 10);
  Pkt_AddPrimitives(auStack_40,auStack_359c0,((int)puVar4 - (int)auStack_359c0) / 0x310);
  Pkt_Submit(auStack_40,0);
  Pkt_Init(auStack_40,1,2,0);
  puStack_2c = (undefined *)0x435600;
  Pkt_SubmitToChain(auStack_40,10);
  Pkt_End(auStack_40);
  Gfx_SetupRenderTargetEx(0x431100,auStack_35a40,0,0);
  TexSlot_Set(0,1,auStack_35a40);
  Obj_Reset(puVar4,4,0xffffffffffffffff);
  puVar3[0x180] = 0x3f800000;
  puVar3[0x181] = 0;
  Obj_SetVisible(puVar4,1,0,0);
  *puVar4 = *puVar4 & 0xfffffffd;
  puVar3[0x174] = 0x80;
  puVar3[0x175] = 0x80;
  puVar3[0x176] = 0x80;
  puVar3[0x177] = 0x80;
  puVar3[0x184] = 0x435c0000;
  puVar3[0x185] = 0x43520000;
  *puVar4 = *puVar4 | 0x100;
  *puVar4 = *puVar4 | 0x10;
  puVar3[0x148] = 0;
  puVar3[0x149] = 0;
  *puVar4 = *puVar4 | 0x10;
  puVar3[0x14e] = 0x280;
  puVar3[0x14f] = 0x1c0;
  puVar3[0x16e] = 0x30000;
  puVar3[0x16f] = 0;
  Obj_Reset(puVar3 + 0x188,4,0xffffffffffffffff);
  puVar3[0x244] = 0xbf800000;
  puVar3[0x245] = 0x3f4ccccd;
  Obj_SetVisible(puVar3 + 0x188,1,0,0);
  puVar3[0x188] = puVar3[0x188] | 2;
  puVar3[0x234] = 100;
  puVar3[0x235] = 0x40;
  puVar3[0x238] = 0x80;
  puVar3[0x239] = 0x80;
  puVar3[0x23a] = 0x80;
  puVar3[0x23b] = 0x80;
  puVar3[0x248] = 0x435c0000;
  puVar3[0x249] = 0x43520000;
  puVar3[0x188] = puVar3[0x188] | 0x100;
  puVar3[0x188] = puVar3[0x188] | 0x10;
  puVar3[0x20c] = 0;
  puVar3[0x20d] = 0;
  puVar3[0x188] = puVar3[0x188] | 0x10;
  puVar3[0x212] = 0x280;
  puVar3[0x213] = 0x1c0;
  puVar3[0x232] = 0x30000;
  puVar3[0x233] = 0;
  Obj_Reset(puVar3 + 0x24c,4,0xffffffffffffffff);
  puVar3[0x308] = 0;
  puVar3[0x309] = 0xbf800000;
  Obj_SetVisible(puVar3 + 0x24c,1,0,0);
  puVar3[0x24c] = puVar3[0x24c] | 2;
  puVar3[0x2f8] = 100;
  puVar3[0x2f9] = 0x40;
  puVar3[0x2fc] = 0x80;
  puVar3[0x2fd] = 0x80;
  puVar3[0x2fe] = 0x80;
  puVar3[0x2ff] = 0x80;
  puVar3[0x30c] = 0x435c0000;
  puVar3[0x30d] = 0x43520000;
  puVar3[0x24c] = puVar3[0x24c] | 0x100;
  puVar3[0x24c] = puVar3[0x24c] | 0x10;
  puVar3[0x2d0] = 0;
  puVar3[0x2d1] = 0;
  puVar3[0x24c] = puVar3[0x24c] | 0x10;
  puVar3[0x2d6] = 0x280;
  puVar3[0x2d7] = 0x1c0;
  puVar3[0x2f6] = 0x30000;
  puVar3[0x2f7] = 0;
  Pkt_AddPrimitives(auStack_40,puVar4,3);
  Pkt_Submit(auStack_40,0);
  maybe_Pkt_InitLayers(auStack_35ce0,0x431100,0x436180,10,10);
  sceVu0CopyVector(auStack_395e0,0x431110);
  sceVu0CopyVector(auStack_395f0,0x431110);
  Obj_Init(&uStack_35d90);
  uStack_35d90 = 0x200;
  uStack_35d8e = 0x80;
  Gfx_SetupRenderTargetEx(0x435600,auStack_35ac0,0,0);
  TexSlot_Set(0,1,auStack_35ac0);
  Obj_SetBlend(&uStack_35d90,0,0,0);
  iVar2 = 0;
  pfVar1 = afStack_395d0;
  do {
    *pfVar1 = ((float)iVar2 * 64.0 + 2048.0) - 320.0;
    pfVar1[1] = 1824.0;
    pfVar1[2] = 64.0;
    pfVar1[3] = 448.0;
    if (iVar2 == 0) {
      fVar7 = 0.0;
      fVar6 = 21.7;
    }
    else {
      fVar7 = (float)iVar2 * 22.0 - 0.3;
      fVar6 = 22.0;
    }
    iVar2 = iVar2 + 1;
    pfVar1[8] = fVar7 / 512.0;
    pfVar1[9] = 0.00078125;
    pfVar1[10] = fVar6 / 512.0;
    pfVar1[0xb] = 0.81953126;
    pfVar1[7] = 128.0;
    pfVar1[6] = 128.0;
    pfVar1[5] = 128.0;
    pfVar1[4] = 128.0;
    pfVar1 = pfVar1 + 0xc;
  } while (iVar2 < 10);
  Obj_SetTexture(&uStack_35d90,((int)pfVar1 - (int)afStack_395d0) / 0x30,afStack_395d0,auStack_395f0
                );
  Model_Draw(auStack_35ce0,&uStack_35d90);
  return;
}

// 0x002d1ee0  size 0x4a0
void maybe_ReplayCam_DrawOverlay(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 in_zero_qw [16];
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  float fVar15;
  uint auStack_1090 [980];
  undefined1 auStack_140 [128];
  undefined1 auStack_c0 [128];
  undefined1 auStack_40 [20];
  undefined *puStack_2c;
  
  uVar7 = uRam004343d0;
  uVar6 = uRam004343c0;
  uVar5 = uRam004343b0;
  uVar4 = uRam004343a0;
  iVar3 = iRam00431174;
  uRam00434380 = 0;
  uRam004343a0 = uRam004343a0 & 0xc0ffffff | 0x3fff02000000;
  auVar8._8_4_ = in_v0_udw;
  auVar8._0_8_ = 0xfffffffeffffffff;
  auVar8._12_4_ = in_register_0000002c;
  auVar8 = _pcpyld(in_zero_qw,auVar8);
  uRam004343b0 = uRam004343b0 & auVar8._0_8_ | 0x100000000;
  auVar1._8_4_ = in_v0_udw;
  auVar1._0_8_ = 0xffffffffffffffff;
  auVar1._12_4_ = in_register_0000002c;
  auVar8 = _pcpyld(in_zero_qw,auVar1);
  uRam004343c0 = uRam004343c0 & auVar8._0_8_ | 0x7e0000007e00;
  uRam00434388 = 0x3f;
  uRam00431164 = 2;
  uRam004343d0 = uRam004343d0 & auVar8._0_8_ | 0x7f0000003f0000;
  iRam00431174 = iRam00431174 << 1;
  Pkt_Init(auStack_40,1,2,0);
  puStack_2c = (undefined *)0x433f00;
  Pkt_SubmitToChain(auStack_40,8);
  Pkt_End(auStack_40);
  Gfx_SetupRenderTargetEx(0x431100,auStack_c0,0,1);
  Gfx_SetupRenderTargetEx(0x433f00,auStack_140,uRam0046a0c4,0);
  TexSlot_Set(0,1,auStack_c0);
  uVar10 = (int)param_2 * 0x80;
  uVar12 = 0;
  uVar11 = (int)param_1 << 6;
  puVar14 = auStack_1090;
  do {
    puVar13 = puVar14;
    Obj_Reset(puVar13,4,0xffffffffffffffff);
    *puVar13 = *puVar13 & 0xfffffffd;
    Obj_SetVisible(puVar13,1,0,0);
    uVar2 = (ulong)uVar12;
    uVar12 = uVar12 + 1;
    uVar9 = uVar11 + 8;
    puVar13[0xbc] = (uint)((float)uVar2 * 16.0 + 8.0);
    puVar13[0xbd] = 0;
    puVar13[0xc0] = 0x41000000;
    puVar13[0xc1] = 0x43000000;
    *puVar13 = *puVar13 | 0x100;
    *puVar13 = *puVar13 | 0x10;
    puVar13[0x84] = uVar11;
    puVar13[0x85] = uVar10;
    uVar11 = uVar11 + 0x10;
    *puVar13 = *puVar13 | 0x10;
    puVar13[0x8a] = uVar9;
    puVar13[0x8b] = uVar10 + 0x80;
    puVar13[0xaa] = 0x30000;
    puVar13[0xab] = 0;
    puVar14 = puVar13 + 0xc4;
  } while (uVar12 < 4);
  Pkt_AddPrimitives(auStack_40,auStack_1090,((int)puVar14 - (int)auStack_1090) / 0x310);
  Pkt_Submit(auStack_40,0);
  uRam00431164 = 0;
  puStack_2c = &g_Views;
  iRam00431174 = iVar3;
  uRam004343a0 = uVar4;
  uRam004343b0 = uVar5;
  uRam004343c0 = uVar6;
  uRam004343d0 = uVar7;
  Pkt_SubmitToChain(auStack_40,8);
  Pkt_End(auStack_40);
  TexSlot_Set(0,1,auStack_140);
  Obj_Reset(puVar14,4,0xffffffffffffffff);
  if ((long)param_1 < 0) {
    fVar15 = (float)(param_1 & 0xffffffff);
  }
  else {
    fVar15 = (float)(int)param_1;
  }
  puVar13[0x180] = (uint)(fVar15 * 64.0);
  if ((long)param_2 < 0) {
    fVar15 = (float)(param_2 & 0xffffffff);
  }
  else {
    fVar15 = (float)(int)param_2;
  }
  puVar13[0x181] = (uint)(fVar15 * 64.0);
  Obj_SetVisible(puVar14,1,0,0);
  *puVar14 = *puVar14 | 2;
  puVar13[0x170] = 0x44;
  puVar13[0x171] = 0;
  puVar13[0x174] = 0xff;
  puVar13[0x175] = 0xff;
  puVar13[0x176] = 0xff;
  puVar13[0x177] = 0x80;
  puVar13[0x16a] = 0xfffff0;
  puVar13[0x184] = 0x42800000;
  puVar13[0x185] = 0x42800000;
  *puVar14 = *puVar14 | 0x100;
  *puVar14 = *puVar14 | 0x10;
  puVar13[0x148] = 0;
  puVar13[0x149] = 0;
  *puVar14 = *puVar14 | 0x10;
  puVar13[0x14e] = 0x40;
  puVar13[0x14f] = 0x40;
  puVar13[0x16e] = 0x30000;
  puVar13[0x16f] = 0;
  Pkt_AddPrimitives(auStack_40,puVar14,1);
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x002d2380  size 0x134
void maybe_ReplayCam_Draw(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_40 [20];
  undefined *puStack_2c;
  
  if ((uRam0046a028 & 4) != 0) {
    fVar1 = fRam0046a0ec;
    if (2.1474836e+09 <= fRam0046a0ec) {
      fVar1 = fRam0046a0ec - 2.1474836e+09;
    }
    if (0x80 < ((int)fVar1 & 0xffU)) {
      fRam0046a0ec = 128.0;
    }
    maybe_ReplayCam_DrawLensFlare(2);
    Pkt_Init(auStack_40,1,2,0);
    puStack_2c = &g_Views;
    Pkt_SubmitToChain(auStack_40,8);
    Pkt_Flush(auStack_40,0x46a0b0);
    Pkt_Submit(auStack_40,0);
    uVar3 = 0;
    do {
      uVar2 = 0;
      do {
        maybe_ReplayCam_DrawOverlay(uVar3,uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 7);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 10);
  }
  return;
}

// 0x002d24c0  size 0x228
void maybe_ReplayCam_DrawModel(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  undefined1 auStack_2f0 [32];
  undefined2 auStack_2d0 [88];
  undefined1 auStack_220 [352];
  undefined1 auStack_c0 [128];
  undefined1 auStack_40 [20];
  int iStack_2c;
  
  iVar4 = (int)param_2;
  uVar8 = *(ulong *)(iVar4 + 0x4a0);
  auVar3._8_8_ = in_v0_udw;
  auVar3._0_8_ = 0xfffffffeffffffff;
  auVar5 = _pcpyld(in_zero_qw,auVar3);
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 0xffffffffffffffff;
  auVar3 = _pcpyld(in_zero_qw,auVar2);
  iVar9 = (int)param_1;
  *(ulong *)(iVar4 + 0x4a0) = uVar8 & 0xc0ffffff;
  *(ulong *)(iVar4 + 0x4a0) = *(ulong *)(iVar4 + 0x4a0) | 0x3fff02000000;
  uVar7 = *(ulong *)(iVar4 + 0x4b0);
  *(ulong *)(iVar4 + 0x4b0) = uVar7 & auVar5._0_8_;
  *(ulong *)(iVar4 + 0x4b0) = *(ulong *)(iVar4 + 0x4b0) | 0x100000000;
  uVar6 = *(ulong *)(iVar4 + 0x4c0);
  *(ulong *)(iVar4 + 0x4c0) = uVar6 & auVar3._0_8_;
  *(ulong *)(iVar4 + 0x4c0) = *(ulong *)(iVar4 + 0x4c0) | 0x720000006c00;
  uVar10 = *(ulong *)(iVar4 + 0x4d0);
  *(ulong *)(iVar4 + 0x4d0) = uVar10 & auVar3._0_8_;
  *(ulong *)(iVar4 + 0x4d0) = *(ulong *)(iVar4 + 0x4d0) | 0x37f0000027f0000;
  *(undefined8 *)(iVar4 + 0x480) = 0;
  *(undefined8 *)(iVar4 + 0x488) = 0x3f;
  iVar1 = *(int *)(iVar9 + 0x74);
  *(int *)(iVar9 + 0x74) = iVar1 << 1;
  Pkt_Init(auStack_40,1,2,0);
  iStack_2c = iVar4;
  Pkt_SubmitToChain(auStack_40,8);
  Pkt_End(auStack_40);
  Pkt_Submit(auStack_40,0);
  maybe_Pkt_InitLayers(auStack_220,param_2,0x436180,8,9);
  Obj_Init(auStack_2d0);
  auStack_2d0[0] = 2;
  Gfx_SetupRenderTarget(param_1,auStack_c0,1);
  TexSlot_Set(0,1,auStack_c0);
  Obj_SetBlend(auStack_2d0,0,0,0);
  Obj_SetTexture(auStack_2d0,1,0x46a100,auStack_2f0);
  Model_Draw(auStack_220,auStack_2d0);
  *(ulong *)(iVar4 + 0x4a0) = uVar8;
  *(ulong *)(iVar4 + 0x4b0) = uVar7;
  *(ulong *)(iVar4 + 0x4c0) = uVar6;
  *(ulong *)(iVar4 + 0x4d0) = uVar10;
  *(int *)(iVar9 + 0x74) = iVar1;
  return;
}

// 0x002d26f0  size 0xd34
/* WARNING: Removing unreachable block (ram,0x002d2b2c) */
/* WARNING: Removing unreachable block (ram,0x002d2d80) */
/* WARNING: Removing unreachable block (ram,0x002d2c18) */
/* WARNING: Removing unreachable block (ram,0x002d2c8c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff68 : 0x002d2b4c */
/* WARNING: Removing unreachable block (ram,0x002d2d00) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void maybe_ReplayCam_DrawLensFlare(char param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s1_lo;
  uint uVar5;
  int unaff_s3_lo;
  int unaff_s4_lo;
  uint *unaff_s5_lo;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_f21;
  undefined1 uStack_110;
  undefined1 uStack_100;
  byte bStack_f0;
  int iStack_e0;
  int iStack_d0;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [8];
  int iStack_18;
  undefined1 auStack_10 [16];
  
  if (param_1 == '\x03') {
    unaff_s5_lo = (uint *)Tex_GetMipLevel(uRam0046a0d8,0);
    sceVu0SubVector(auStack_30,0x431110,0x431100);
    fVar8 = (float)sceVu0InnerProduct(auStack_30,auStack_30);
    fVar8 = SQRT(fVar8);
    fVar10 = fVar8 * 0.003;
    if (0.0 < 0.25 - fVar10) {
      in_f21 = (fVar8 * fVar10) / (0.25 - fVar10);
    }
    else {
      in_f21 = -1.0;
    }
    sceVu0ScaleVector(1.0 / fVar8,auStack_30,auStack_30);
    sceVu0CopyVector(auStack_80,0x431110);
    uStack_74 = 0x3f800000;
    fVar8 = -((fVar8 * fVar10) / (fVar10 + 0.25));
    sceVu0ScaleVector(fVar8 * 0.25,auStack_40,auStack_30);
    sceVu0AddVector(auStack_40,auStack_40,auStack_80);
    sceVu0ScaleVector(fVar8,auStack_50,auStack_30);
    sceVu0AddVector(auStack_50,auStack_50,auStack_80);
    if (0.0 < in_f21) {
      sceVu0ScaleVector(in_f21 * 0.25,auStack_60,auStack_30);
      sceVu0AddVector(auStack_60,auStack_60,auStack_80);
      sceVu0ScaleVector(in_f21,auStack_70,auStack_30);
      sceVu0AddVector(auStack_70,auStack_70,auStack_80);
    }
    sceVu0ApplyMatrix(auStack_10,0x431280,auStack_80);
    sceVu0RotTransPersN(auStack_20,0x4312c0,auStack_10,1);
    sceVu0ApplyMatrix(auStack_10,0x431280,auStack_40);
    sceVu0RotTransPersN(auStack_20,0x4312c0,auStack_10,1);
    unaff_s4_lo = iStack_18;
    if (0xfffe < iStack_18) {
      unaff_s4_lo = 0xfffe;
    }
    if (unaff_s4_lo < 0) {
      unaff_s4_lo = 0xfffe;
    }
    sceVu0ApplyMatrix(auStack_10,0x431280,auStack_50);
    sceVu0RotTransPersN(auStack_20,0x4312c0,auStack_10,1);
    unaff_s3_lo = iStack_18;
    if (0xffff < iStack_18) {
      unaff_s3_lo = 0xffff;
    }
    if (unaff_s3_lo < 0) {
      unaff_s3_lo = 0xffff;
    }
    if (0.0 < in_f21) {
      sceVu0ApplyMatrix(auStack_10,0x431280,auStack_60);
      sceVu0RotTransPersN(auStack_20,0x4312c0,auStack_10,1);
      iStack_d0 = iStack_18;
      if (iStack_18 < 0) {
        iStack_d0 = 0;
      }
      sceVu0ApplyMatrix(auStack_10,0x431280,auStack_70);
      sceVu0RotTransPersN(auStack_20,0x4312c0,auStack_10,1);
      iStack_e0 = iStack_18;
      if (iStack_18 < 0) {
        iStack_e0 = 0;
      }
    }
  }
  else if (param_1 == '\x02') {
    unaff_s5_lo = (uint *)Tex_GetMipLevel(uRam0046a0c0,0);
  }
  else if (param_1 == '\x01') {
    unaff_s5_lo = (uint *)Tex_GetMipLevel(uRam0046a0a8,0);
  }
  else if (param_1 == '\0') {
    unaff_s5_lo = (uint *)Tex_GetMipLevel(uRam0046a090,0);
  }
  fVar1 = fRam004312f8;
  fVar10 = fRam004312ec;
  fVar8 = fRam004312e8;
  uVar5 = 0;
  fVar9 = fRam0046a030 + fRam0046a034;
  uVar6 = uRam004311cc & 0xff;
  uVar4 = uRam004311cc >> 8;
  uVar2 = uRam004311cc >> 0x10;
  do {
    uVar3 = uVar5 & 0x1f;
    if ((uVar3 < 8) || (0xf < uVar3)) {
      if ((uVar3 < 0x10) || (0x17 < uVar3)) {
        uVar3 = uVar5;
      }
      else {
        uVar3 = uVar5 - 8;
      }
    }
    else {
      uVar3 = uVar5 + 8;
    }
    if (param_1 == '\x03') {
      fVar11 = (float)((uVar3 & 0xff) << 8);
      if (fVar11 <= (float)unaff_s3_lo) {
        if ((float)unaff_s4_lo < fVar11) {
          fVar11 = (((float)unaff_s4_lo - fVar11) / (float)(unaff_s4_lo - unaff_s3_lo)) * 0.7 + 0.3;
        }
        else if (0.0 < in_f21) {
          if (fVar11 <= (float)iStack_d0) {
            if ((float)iStack_e0 < fVar11) {
              fVar11 = ((fVar11 - (float)iStack_d0) / (float)(iStack_e0 - iStack_d0)) * 0.7 + 0.3;
            }
            else {
              fVar11 = 1.0;
            }
          }
          else {
            fVar11 = 0.3;
          }
        }
        else {
          fVar11 = 0.3;
        }
      }
      else {
        fVar11 = 1.0;
      }
      fVar7 = 1.2;
      if (fVar11 + fRam0046a054 <= 1.2) {
        fVar7 = fVar11 + fRam0046a054;
      }
      fVar7 = fVar7 * 100.0;
      if (2.1474836e+09 <= fVar7) {
        fVar7 = fVar7 - 2.1474836e+09;
      }
      bStack_f0 = (byte)(int)fVar7;
      unaff_s1_lo = 0;
      uStack_110 = 0;
      uStack_100 = 0;
    }
    else if (param_1 == '\x02') {
      fVar11 = fRam0046a0ec;
      if (2.1474836e+09 <= fRam0046a0ec) {
        fVar11 = fRam0046a0ec - 2.1474836e+09;
      }
      bStack_f0 = (byte)(int)fVar11;
      fVar11 = fRam0046a0e0;
      if (2.1474836e+09 <= fRam0046a0e0) {
        fVar11 = fRam0046a0e0 - 2.1474836e+09;
      }
      fVar11 = (float)(int)uVar3 * ((float)((int)fVar11 & 0xff) / 255.0);
      if (2.1474836e+09 <= fVar11) {
        fVar11 = fVar11 - 2.1474836e+09;
      }
      uStack_100 = (undefined1)(int)fVar11;
      fVar11 = fRam0046a0e4;
      if (2.1474836e+09 <= fRam0046a0e4) {
        fVar11 = fRam0046a0e4 - 2.1474836e+09;
      }
      fVar11 = (float)(int)uVar3 * ((float)((int)fVar11 & 0xff) / 255.0);
      if (2.1474836e+09 <= fVar11) {
        fVar11 = fVar11 - 2.1474836e+09;
      }
      uStack_110 = (undefined1)(int)fVar11;
      fVar11 = fRam0046a0e8;
      if (2.1474836e+09 <= fRam0046a0e8) {
        fVar11 = fRam0046a0e8 - 2.1474836e+09;
      }
      fVar11 = (float)(int)uVar3 * ((float)((int)fVar11 & 0xff) / 255.0);
      if (2.1474836e+09 <= fVar11) {
        fVar11 = fVar11 - 2.1474836e+09;
      }
      unaff_s1_lo = (int)fVar11 & 0xff;
    }
    else if (param_1 == '\x01') {
      fVar11 = (float)maybe_fmodf(((fVar1 / fVar10) /
                                  ((float)((uVar3 & 0xff) << 8) - fVar8 / fVar10)) * -fVar9);
      fVar11 = (0.1 - fVar11) * 1280.0;
      if (fVar11 < 0.0) {
        fVar11 = 0.0;
      }
      if (128.0 < fVar11) {
        fVar11 = 128.0;
      }
      if (2.1474836e+09 <= fVar11) {
        fVar11 = fVar11 - 2.1474836e+09;
      }
      bStack_f0 = (byte)(int)fVar11;
      unaff_s1_lo = 0xff;
      uStack_110 = 0xff;
      uStack_100 = 0xff;
    }
    else if (param_1 == '\0') {
      fVar11 = (float)maybe_fmodf(((fVar1 / fVar10) /
                                  ((float)((uVar3 & 0xff) << 8) - fVar8 / fVar10)) * -fVar9);
      fVar11 = fVar11 * 128.0;
      if (fVar11 < 20.0) {
        fVar11 = 20.0;
      }
      if (128.0 < fVar11) {
        fVar11 = 128.0;
      }
      if (2.1474836e+09 <= fVar11) {
        fVar11 = fVar11 - 2.1474836e+09;
      }
      bStack_f0 = (byte)(int)fVar11;
      fVar11 = (float)uVar6;
      if (2.1474836e+09 <= fVar11) {
        fVar11 = fVar11 - 2.1474836e+09;
      }
      uStack_100 = (undefined1)(int)fVar11;
      fVar11 = (float)(uVar4 & 0xff);
      if (2.1474836e+09 <= fVar11) {
        fVar11 = fVar11 - 2.1474836e+09;
      }
      uStack_110 = (undefined1)(int)fVar11;
      fVar11 = (float)(uVar2 & 0xff);
      if (2.1474836e+09 <= fVar11) {
        fVar11 = fVar11 - 2.1474836e+09;
      }
      unaff_s1_lo = (int)fVar11 & 0xff;
    }
    uVar5 = uVar5 + 1;
    *unaff_s5_lo = (uint)bStack_f0 << 0x18 |
                   (unaff_s1_lo & 0xff) << 0x10 | (uint)CONCAT11(uStack_110,uStack_100);
    unaff_s5_lo = unaff_s5_lo + 1;
  } while (uVar5 < 0x100);
  return;
}

// 0x002d3430  size 0x118
void maybe_ReplayCam_Update(void)

{
  long lVar1;
  float fVar2;
  
  lVar1 = RaceScene_IsReplay();
  if (lVar1 == 0) {
    if ((uRam0046a028 & 8) != 0) {
      fVar2 = fRam0043118c - fRam0046a074;
      fRam0046a074 = fRam0043118c;
      if ((20.0 < fVar2) || (fVar2 < -20.0)) {
        fRam0046a050 = 0.033333335;
        fRam0046a054 = 1.0;
      }
      fRam0046a054 = fRam0046a054 - fRam0046a050;
      if (fRam0046a054 <= 0.0) {
        fRam0046a054 = 0.0;
      }
      maybe_ReplayCam_RenderFrame();
    }
    if ((uRam0046a028 & 4) != 0) {
      maybe_ReplayCam_Draw();
    }
    uRam0046a028 = 0;
  }
  return;
}

// 0x002d3550  size 0x164
void maybe_ReplayCam_Free(void)

{
  if (iRam0046a0f0 != 0) {
    Mem_Free();
    iRam0046a0f0 = 0;
  }
  DmaBuf_Free(0x46a080);
  DmaBuf_Free(0x46a098);
  DmaBuf_Free(0x46a0b0);
  DmaBuf_Free(0x46a0c8);
  if (iRam0046a094 != 0) {
    Mem_Free();
    iRam0046a094 = 0;
  }
  if (iRam0046a0ac != 0) {
    Mem_Free();
    iRam0046a0ac = 0;
  }
  if (iRam0046a0c4 != 0) {
    Mem_Free();
    iRam0046a0c4 = 0;
  }
  if (iRam0046a0dc != 0) {
    Mem_Free();
    iRam0046a0dc = 0;
  }
  if (iRam0046a090 != 0) {
    Mem_Free();
    iRam0046a090 = 0;
  }
  if (iRam0046a0a8 != 0) {
    Mem_Free();
    iRam0046a0a8 = 0;
  }
  if (iRam0046a0c0 != 0) {
    Mem_Free();
    iRam0046a0c0 = 0;
  }
  if (iRam0046a0d8 != 0) {
    Mem_Free();
    iRam0046a0d8 = 0;
  }
  return;
}

// 0x002d36c0  size 0x2c0
void maybe_ReplayCam_Load(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 unaff_s1;
  int iVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uRam0046a034 = 0x3e4ccccd;
  uRam0046a030 = 0x3e4ccccd;
  uStack_10 = DAT_0032fca0;
  uStack_c = DAT_0032fca4;
  uStack_8 = DAT_0032fca8;
  uRam0046a028 = 2;
  uStack_4 = DAT_0032fcac;
  uRam0046a038 = 0x3f266666;
  sceVu0CopyVector(0x46a040,&uStack_10);
  uRam0046a03c = 0x3e333333;
  uRam0046a0e0 = 0x437f0000;
  uRam0046a0e4 = 0x437f0000;
  uRam0046a0e8 = 0x437f0000;
  uRam0046a0ec = 0x43000000;
  uStack_20 = DAT_0032fcb0;
  uStack_1c = DAT_0032fcb4;
  uStack_18 = DAT_0032fcb8;
  uStack_14 = DAT_0032fcbc;
  sceVu0CopyVector(0x46a060,&uStack_20);
  uRam0046a028 = 8;
  uRam0046a070 = 0x40800000;
  iVar5 = 0;
  uRam0046a050 = 0;
  uRam0046a054 = 0;
  uRam0046a074 = 0;
  cVar3 = '\0';
  while( true ) {
    if (cVar3 == '\x03') {
      unaff_s1 = 0x46a0c8;
    }
    else if (cVar3 == '\x02') {
      unaff_s1 = 0x46a0b0;
    }
    else if (cVar3 == '\x01') {
      unaff_s1 = 0x46a098;
    }
    else if (cVar3 == '\0') {
      unaff_s1 = 0x46a080;
    }
    iVar4 = (int)unaff_s1;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    lVar2 = 0;
    do {
      if (lVar2 != 0) {
        uVar1 = Mem_AllocAligned(lVar2,0x80,param_1);
        *(undefined4 *)(iVar4 + 0x10) = uVar1;
      }
      lVar2 = Tex_BuildUploadPacket(5,0,0,0,3,1,0x80,*(undefined4 *)(iVar4 + 0x10));
    } while (*(int *)(iVar4 + 0x10) == 0);
    uVar1 = Mem_Alloc16(0x80,param_1);
    *(undefined4 *)(iVar4 + 0x14) = uVar1;
    DmaBuf_Alloc(unaff_s1,param_1,0x30);
    Pkt_AddTextureUpload
              (unaff_s1,*(undefined4 *)(iVar4 + 0x10),iRam0046a020 + iVar5,iRam0046a024 + iVar5);
    TexSlot_BindSimple(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x10),0,
                       iRam0046a020 + iVar5,iRam0046a024 + iVar5,0x11110,0,0);
    cVar3 = cVar3 + '\x01';
    if (cVar3 == '\x04') break;
    iVar5 = iVar5 + 4;
  }
  uRam0046a0f0 = Mem_AllocAligned(24000,0x10,0x430750);
  return;
}

// 0x002d3990  size 0x204
void Garage_BuildSortedCarList(int *param_1,ulong param_2,undefined8 param_3)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  short *psVar8;
  
  uRam0036f828 = (undefined4)param_3;
  iVar3 = Profile_Get(param_3);
  psVar8 = (short *)(iVar3 + 0x13ee);
  uVar2 = Profile_Get(uRam0036f828);
  iVar3 = Garage_FindCar(uVar2);
  iVar4 = Profile_Get(uRam0036f828);
  sVar1 = *(short *)(iVar4 + 0x13ec);
  iVar7 = 0;
  iVar4 = Profile_Get(uRam0036f828);
  psVar6 = (short *)(iVar4 + 0x13ee);
  iVar4 = 0;
  psVar5 = psVar6;
  do {
    if (*psVar6 != -1) {
      if (iVar7 != iVar4) {
        *psVar5 = *psVar6;
        *psVar6 = -1;
      }
      psVar5 = psVar5 + 1;
      iVar7 = iVar7 + 1;
    }
    iVar4 = iVar4 + 1;
    psVar6 = psVar6 + 1;
  } while (iVar4 < 0x19);
  if (param_2 < 7) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_2) {
    case 0:
      maybe_qsort(psVar8,iVar3,2,0x2d46e0);
      break;
    case 1:
      maybe_qsort(psVar8,iVar3,2,0x2d44e0);
      break;
    case 2:
      maybe_qsort(psVar8,iVar3,2,0x2d42e0);
      break;
    case 3:
      maybe_qsort(psVar8,iVar3,2,0x2d40e0);
      break;
    case 4:
      maybe_qsort(psVar8,iVar3,2,0x2d3ee0);
      break;
    case 5:
      maybe_qsort(psVar8,iVar3,2,0x2d3d20);
      break;
    case 6:
      maybe_qsort(psVar8,iVar3,2,0x2d3bd0);
    }
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      if (sVar1 == *psVar8) {
        *param_1 = iVar4;
        return;
      }
      iVar4 = iVar4 + 1;
      psVar8 = psVar8 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

// 0x002d3ba0  size 0x28
undefined4 Garage_GetSortedCarCount(undefined8 param_1)

{
  undefined4 uStack_4;
  
  Garage_BuildSortedCarList(&uStack_4,8,param_1);
  return uStack_4;
}

// 0x002d3bd0  size 0x14c
int maybe_GarageSort_ByModel(short *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  
  sVar4 = *param_1;
  sVar5 = *param_2;
  iVar6 = Profile_Get(uRam0036f828);
  uVar3 = CarRec_GetModelId(iVar6 + sVar5 * 0xcc);
  iVar6 = CarDb_GetModel(uVar3);
  cVar1 = *(char *)(iVar6 + 0x28);
  iVar6 = Profile_Get(uRam0036f828);
  uVar3 = CarRec_GetModelId(iVar6 + sVar4 * 0xcc);
  iVar6 = CarDb_GetModel(uVar3);
  iVar6 = (int)*(char *)(iVar6 + 0x28) - (int)cVar1;
  if (iVar6 == 0) {
    uVar8 = Profile_Get(uRam0036f828);
    psVar7 = (short *)Profile_GetCarRecordB(uVar8,sVar4);
    sVar2 = *psVar7;
    uVar8 = Profile_Get(uRam0036f828);
    psVar7 = (short *)Profile_GetCarRecordB(uVar8,sVar5);
    iVar6 = (int)sVar2 - (int)*psVar7;
    if (iVar6 == 0) {
      uVar8 = Profile_Get(uRam0036f828);
      uVar8 = Profile_GetCarRecordB(uVar8,sVar4);
      sVar4 = CarRec_GetVariant(uVar8);
      uVar8 = Profile_Get(uRam0036f828);
      uVar8 = Profile_GetCarRecordB(uVar8,sVar5);
      sVar5 = CarRec_GetVariant(uVar8);
      iVar6 = (int)sVar4 - (int)sVar5;
    }
  }
  return iVar6;
}

// 0x002d3d20  size 0x1c0
int maybe_GarageSort_ByVariant(short *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  undefined8 uVar10;
  
  sVar4 = *param_1;
  sVar5 = *param_2;
  uVar10 = Profile_Get(uRam0036f828);
  puVar6 = (undefined2 *)Profile_GetCarRecordB(uVar10,sVar4);
  iVar7 = CarDb_GetModel(*puVar6);
  iVar7 = *(int *)(iVar7 + 0x84);
  uVar10 = Profile_Get(uRam0036f828);
  puVar6 = (undefined2 *)Profile_GetCarRecordB(uVar10,sVar5);
  iVar8 = CarDb_GetModel(*puVar6);
  iVar7 = iVar7 - *(int *)(iVar8 + 0x84);
  if (iVar7 == 0) {
    sVar4 = *param_1;
    sVar5 = *param_2;
    iVar7 = Profile_Get(uRam0036f828);
    uVar3 = CarRec_GetModelId(iVar7 + sVar5 * 0xcc);
    iVar7 = CarDb_GetModel(uVar3);
    cVar1 = *(char *)(iVar7 + 0x28);
    iVar7 = Profile_Get(uRam0036f828);
    uVar3 = CarRec_GetModelId(iVar7 + sVar4 * 0xcc);
    iVar7 = CarDb_GetModel(uVar3);
    iVar7 = (int)*(char *)(iVar7 + 0x28) - (int)cVar1;
    if (iVar7 == 0) {
      uVar10 = Profile_Get(uRam0036f828);
      psVar9 = (short *)Profile_GetCarRecordB(uVar10,sVar4);
      sVar2 = *psVar9;
      uVar10 = Profile_Get(uRam0036f828);
      psVar9 = (short *)Profile_GetCarRecordB(uVar10,sVar5);
      iVar7 = (int)sVar2 - (int)*psVar9;
      if (iVar7 == 0) {
        uVar10 = Profile_Get(uRam0036f828);
        uVar10 = Profile_GetCarRecordB(uVar10,sVar4);
        sVar4 = CarRec_GetVariant(uVar10);
        uVar10 = Profile_Get(uRam0036f828);
        uVar10 = Profile_GetCarRecordB(uVar10,sVar5);
        sVar5 = CarRec_GetVariant(uVar10);
        iVar7 = (int)sVar4 - (int)sVar5;
      }
    }
  }
  return iVar7;
}

// 0x002d3ee0  size 0x1fc
int maybe_GarageSort_ByPower(short *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  undefined8 uVar9;
  float fVar10;
  
  sVar4 = *param_1;
  sVar5 = *param_2;
  uVar9 = Profile_Get(uRam0036f828);
  iVar6 = Profile_GetCarRecordB(uVar9,sVar4);
  iVar6 = *(int *)(iVar6 + 0xc);
  uVar9 = Profile_Get(uRam0036f828);
  iVar7 = Profile_GetCarRecordB(uVar9,sVar5);
  iVar6 = iVar6 - *(int *)(iVar7 + 0xc);
  if (iVar6 == 0) {
    uVar9 = Profile_Get(uRam0036f828);
    iVar6 = Profile_GetCarRecordB(uVar9,sVar4);
    fVar10 = *(float *)(iVar6 + 0x10);
    uVar9 = Profile_Get(uRam0036f828);
    iVar6 = Profile_GetCarRecordB(uVar9,sVar5);
    iVar6 = (int)(fVar10 - *(float *)(iVar6 + 0x10));
  }
  if (iVar6 == 0) {
    sVar4 = *param_1;
    sVar5 = *param_2;
    iVar6 = Profile_Get(uRam0036f828);
    uVar3 = CarRec_GetModelId(iVar6 + sVar5 * 0xcc);
    iVar6 = CarDb_GetModel(uVar3);
    cVar1 = *(char *)(iVar6 + 0x28);
    iVar6 = Profile_Get(uRam0036f828);
    uVar3 = CarRec_GetModelId(iVar6 + sVar4 * 0xcc);
    iVar6 = CarDb_GetModel(uVar3);
    iVar6 = (int)*(char *)(iVar6 + 0x28) - (int)cVar1;
    if (iVar6 == 0) {
      uVar9 = Profile_Get(uRam0036f828);
      psVar8 = (short *)Profile_GetCarRecordB(uVar9,sVar4);
      sVar2 = *psVar8;
      uVar9 = Profile_Get(uRam0036f828);
      psVar8 = (short *)Profile_GetCarRecordB(uVar9,sVar5);
      iVar6 = (int)sVar2 - (int)*psVar8;
      if (iVar6 == 0) {
        uVar9 = Profile_Get(uRam0036f828);
        uVar9 = Profile_GetCarRecordB(uVar9,sVar4);
        sVar4 = CarRec_GetVariant(uVar9);
        uVar9 = Profile_Get(uRam0036f828);
        uVar9 = Profile_GetCarRecordB(uVar9,sVar5);
        sVar5 = CarRec_GetVariant(uVar9);
        iVar6 = (int)sVar4 - (int)sVar5;
      }
    }
  }
  return iVar6;
}

