// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002cc000 - 0x002d0000
#include "ghidra_types.h"

// 0x002cc1d0  size 0x8c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceHud_DrawMeters(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = UiMgr_FindLayout(0x11);
  *(int *)((int)param_1 + 0x10fc) = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  RaceUi_DrawSpGauge(param_1);
  RaceUi_AnimateSpGauge(param_1);
  lVar2 = RaceScene_IsPaused();
  if (lVar2 == 0) {
    RaceUi_AnimateWarning(param_1);
    lVar2 = RaceScene_IsFlag10();
    if (lVar2 == 0) {
      RaceUi_DrawRivalMarkers(param_1);
    }
  }
  RaceUi_DrawTachometer(param_1);
  return;
}

// 0x002cc260  size 0x110
void RaceHud_UpdateFinishFlag(int param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((*(uint *)(param_1 + 0x27c) & 1) == 0) {
    if (*(int *)(param_1 + 0x28c) == 0) {
      *(undefined4 *)(param_1 + 0x28c) = 1;
      if ((*(uint *)(param_1 + 8) & 0x400) == 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800;
      }
    }
    uVar1 = *(uint *)(param_1 + 8);
    if ((uVar1 & 0x400) == 0) {
      if ((uVar1 & 0x800) != 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffff7ff;
        *(undefined1 *)(param_1 + 0xfdc) = 1;
      }
    }
    else {
      *(uint *)(param_1 + 8) = uVar1 & 0xfffffbff;
      *(undefined1 *)(param_1 + 0x102c) = 1;
    }
  }
  else if ((*(int *)(param_1 + 0x28c) == 0) && (uVar2 = maybe_RaceProg_GetEntry(), uVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x28c) = 1;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 1) == 0) {
        param_1 = param_1 + 0xff4;
      }
      else {
        param_1 = param_1 + 0xfe0;
      }
    }
    else {
      param_1 = param_1 + 0xfcc;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}

// 0x002cc370  size 0x314
void RaceHud_AnimateLapTimes(int param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 unaff_s0;
  int unaff_s1_lo;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  
  puVar4 = (undefined4 *)(param_1 + 0xfb8);
  if ((byte)(&DAT_0032f531)[(uint)bRam0036f810 * 6] < 7) {
                    /* WARNING: Switch is manually overridden */
    switch((&DAT_0032f531)[(uint)bRam0036f810 * 6]) {
    case 0:
      unaff_s1_lo = 0x18;
      unaff_s0 = 0xf;
      break;
    case 1:
      unaff_s1_lo = 0xc;
      unaff_s0 = 0xf;
      break;
    case 2:
      unaff_s1_lo = 0xc;
      unaff_s0 = 0xf;
      break;
    case 3:
      unaff_s1_lo = 0xc;
      unaff_s0 = 0xf;
      break;
    case 4:
      unaff_s1_lo = 0xc;
      unaff_s0 = 0xf;
      break;
    case 5:
      unaff_s1_lo = 0xc;
      unaff_s0 = 0xf;
      break;
    case 6:
      unaff_s1_lo = 9;
      unaff_s0 = 0xf;
    }
  }
  if (*(int *)(param_1 + 0x280) == 0x3c) {
    *(undefined1 *)(param_1 + 0xfc8) = 1;
  }
  uVar2 = 300 - *(int *)(param_1 + 0x280);
  iVar3 = (int)unaff_s0;
  if (uVar2 < 0xb5) {
    if (uVar2 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (float)(uint)((int)uVar2 % 0x3c);
      UiElem_SetPropFloat(0x3f800000,*puVar4,unaff_s0,8);
      UiElem_SetPropFloat(0x3f800000,*puVar4,iVar3 + 1,8);
      UiElem_SetPropFloat(0x3f800000,*puVar4,iVar3 + 2,8);
    }
  }
  else {
    fVar6 = 0.0;
    UiElem_SetPropFloat(0,*puVar4,unaff_s0,8);
    UiElem_SetPropFloat(0,*puVar4,iVar3 + 1,8);
    UiElem_SetPropFloat(0,*puVar4,iVar3 + 2,8);
  }
  iVar5 = (int)(fVar6 * 0.16667);
  UiElem_SetPropInt(*puVar4,unaff_s0,0x16,unaff_s1_lo + iVar5);
  fVar6 = (fVar6 * 0.16667 - (float)iVar5) * 10.0;
  iVar5 = (int)fVar6;
  UiElem_SetPropInt(*puVar4,iVar3 + 1,0x16,unaff_s1_lo + iVar5);
  UiElem_SetPropInt(*puVar4,iVar3 + 2,0x16,unaff_s1_lo + (int)((fVar6 - (float)iVar5) * 10.0));
  *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
  fVar6 = *(float *)(param_1 + 0x3b70) + 0.016666668;
  *(float *)(param_1 + 0x3b70) = fVar6;
  if (1.0 < fVar6) {
    *(undefined4 *)(param_1 + 0x3b70) = 0x3f800000;
  }
  lVar1 = RaceProg_Get_c();
  if (lVar1 == 0) {
    Se_PlayMenuVol(2,0x60);
  }
  else if (((lVar1 == 0x3c) || (lVar1 == 0x78)) || (lVar1 == 0xb4)) {
    Se_PlayMenuVol(1,0x60);
  }
  return;
}

// 0x002cc690  size 0x340
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceHud_Draw(int param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x27c);
  if (*(int *)(param_1 + 0x1100) == 0) {
    maybe_RaceHud_AnimateLapInfo();
    *(undefined4 *)(param_1 + 0x1100) = 1;
  }
  if ((*(uint *)(param_1 + 0x27c) & 10) != 0) {
    lVar3 = RaceScene_IsFlag10();
    if (lVar3 == 0) {
      cVar2 = RaceProg_Get();
      if (cVar2 == '\x02') {
        RaceHud_AnimateLapTimes(param_1);
      }
      else {
        cVar2 = RaceProg_Get();
        if (cVar2 == '\x04') {
          RaceHud_UpdateFinishFlag(param_1);
        }
      }
    }
    uVar7 = 0;
    iVar5 = param_1;
    do {
      piVar6 = (int *)(iVar5 + 0xfb8);
      if (*(char *)(iVar5 + 0xfc8) == '\x01') {
        if (*(int *)(*piVar6 + *(int *)(iVar5 + 0xfc0) * 0x14 + 0x318) == 0) {
          RaceHud_ClearSlot(param_1,uVar7 & 0xff);
        }
        else {
          lVar3 = RaceScene_IsPaused();
          if (lVar3 == 0) {
            UiLayout_UpdateAnim(*piVar6,*(undefined4 *)(iVar5 + 0xfc0));
          }
          UiLayout_Draw(0x3f800000,*piVar6);
        }
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 0x14;
    } while (uVar7 < 0x10);
    UiLayout_Draw(*(undefined4 *)(param_1 + 0x3b70),*(undefined4 *)(param_1 + 0x10f8));
    if ((uVar1 & 1) == 0) {
      if (*(int *)(param_1 + 0x74) == 0) {
        iVar5 = UiMgr_FindLayout(0x11);
        *(int *)(param_1 + 0x10fc) = *_g_UiMgr + iVar5 * 0x4f4 + 4;
      }
      else {
        iVar5 = UiMgr_FindLayout(0x12);
        *(int *)(param_1 + 0x10fc) = *_g_UiMgr + iVar5 * 0x4f4 + 4;
      }
      RaceUi_DrawPositionList(param_1);
      RaceUi_AnimateBoost(param_1);
      lVar3 = RaceScene_IsPaused();
      if (lVar3 == 0) {
        uVar4 = 7;
        if (*(int *)(param_1 + 0x74) != 0) {
          uVar4 = 6;
        }
        if (*(int *)(param_1 + 0x78) < 1) {
          UiElem_SetPropFloat(0,*(undefined4 *)(param_1 + 0x10fc),uVar4,8);
        }
        else {
          lVar3 = RaceScene_IsFlag10();
          if ((lVar3 == 0) && (*(int *)(param_1 + 0x78) == 1)) {
            Se_PlayMenuVol(3,0x60);
          }
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) % 0x1e;
          UiElem_SetPropFloat((float)((*(int *)(param_1 + 0x78) / 5) % 6) / 5.0,
                              *(undefined4 *)(param_1 + 0x10fc),uVar4,8);
        }
        lVar3 = RaceScene_IsFlag10();
        if (lVar3 == 0) {
          RaceUi_DrawRivalMarkersAlt(param_1);
        }
      }
      RaceUi_DrawSpeedometer(param_1);
    }
    else {
      RaceHud_DrawMeters(param_1);
    }
    lVar3 = __ptmf_test(param_1 + 0xfa8);
    if (lVar3 != 0) {
      __ptmf_scall(param_1);
    }
    RaceUi_DrawSprites(param_1 + 0x1270);
    RaceUi_DrawSprites(param_1 + 0x26f0);
  }
  return;
}

// 0x002cc9d0  size 0x118
void RaceHud_FadeOut(int param_1)

{
  ulong uVar1;
  int aiStack_50 [8];
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_30 = 1;
  uStack_20 = 0;
  uStack_28 = 0x44;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  if (iRam0036f814 < 0x15) {
    aiStack_50[0] = (iRam0036f814 << 7) / 0x14;
    if (aiStack_50[0] < 0) {
      aiStack_50[0] = 0;
    }
    else if (0x80 < aiStack_50[0]) {
      aiStack_50[0] = 0x80;
    }
    aiStack_50[0] = aiStack_50[0] << 0x18;
    Gfx_SetFade(2,9,1,aiStack_50);
    if ((iRam0036f814 == 0x14) && (uVar1 = RaceScene_GetState(), (uVar1 & 0x40000) == 0)) {
      RaceScene_SetFlags();
    }
    iRam0036f814 = iRam0036f814 + 1;
  }
  else {
    Gfx_SetFade(2,9,0,0);
    *(undefined4 *)(param_1 + 0x3b70) = 0;
    RaceScene_SetFlags(4);
    iRam0036f814 = 0;
  }
  return;
}

// 0x002ccaf0  size 0xd4
void RaceHud_FadeOutAndFree(void)

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
  
  uStack_30 = 1;
  uStack_20 = 0;
  uStack_28 = 0x44;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  if (iRam0036ee58 < 1) {
    Gfx_SetFade(2,9,0,0);
    RaceHud_SetState(3);
    iRam0036ee58 = 0x14;
  }
  else {
    aiStack_50[0] = (iRam0036ee58 << 7) / 0x14;
    if (aiStack_50[0] < 0) {
      aiStack_50[0] = 0;
    }
    else if (0x80 < aiStack_50[0]) {
      aiStack_50[0] = 0x80;
    }
    aiStack_50[0] = aiStack_50[0] << 0x18;
    Gfx_SetFade(2,9,1,aiStack_50);
    iRam0036ee58 = iRam0036ee58 + -1;
  }
  return;
}

// 0x002ccbd0  size 0xe8
void RaceHud_ResetSlots(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(iRam0036f804 + 0x28c) = 0;
  *(undefined4 *)(iRam0036f804 + 0x1104) = 0;
  *(undefined4 *)(iRam0036f804 + 0x280) = 0;
  RaceHud_ClearSlots(iRam0036f804);
  iVar4 = 0;
  *(undefined4 *)(iRam0036f804 + 0x2a0) = 0;
  lVar2 = GameState_GetTotalCarCount();
  if (0 < lVar2) {
    iVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iRam0036f804 + iVar3 + 0xa8) = 0;
      *(undefined4 *)(iRam0036f804 + iVar3 + 0xac) = 0;
      *(undefined4 *)(iRam0036f804 + iVar3 + 0xbc) = 0;
      *(undefined4 *)(iRam0036f804 + iVar3 + 8) = 0;
      *(undefined4 *)(iRam0036f804 + iVar3 + 0x9c) = 0xffffffff;
      *(undefined4 *)(iRam0036f804 + iVar3 + 0xa0) = 0xffffffff;
      *(undefined4 *)(iRam0036f804 + iVar3 + 0xa4) = 0xffffffff;
      *(undefined4 *)(iRam0036f804 + iVar3 + 0x98) = 0;
      iVar3 = iVar3 + 0xcc;
      iVar1 = GameState_GetTotalCarCount();
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x002cccc0  size 0x48
void RaceHud_ClearSlots(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    RaceHud_ClearSlot(param_1,uVar1 & 0xff);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

// 0x002ccd10  size 0xcc
void RaceHud_ClearSlot(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  param_1 = param_1 + (param_2 & 0xff) * 0x14;
  if ((*(int *)(param_1 + 0xfb8) != 0) && (*(int *)(param_1 + 0xfc4) != 0)) {
    *(undefined1 *)(param_1 + 0xfc8) = 0;
    iVar1 = *(int *)(param_1 + 0xfc4);
    iVar2 = *(int *)(param_1 + 0xfb8);
    iVar4 = *(int *)(param_1 + 0xfc0) * 0x14;
    iVar3 = iVar4 + iVar2;
    *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x31c) = 0;
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *(undefined4 *)(iVar3 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x318) = 1;
    }
    puVar5 = (undefined4 *)(iVar3 + 0x318);
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
    }
    *(undefined4 *)(iVar4 + iVar2 + 0x314) = 0;
    *(int *)(iVar3 + 0x31c) = iVar1;
    *puVar5 = 1;
  }
  return;
}

// 0x002ccde0  size 0x2a40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceHud_LoadLayouts(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int unaff_s1_lo;
  int *piVar32;
  int iVar33;
  undefined4 uStack_1e0;
  undefined1 uStack_1d0;
  int aiStack_180 [4];
  undefined4 auStack_170 [4];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int aiStack_140 [4];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  
  bVar5 = false;
  bVar4 = (*(uint *)(param_1 + 0x27c) & 1) != 0;
  maybe_RaceHud_SetupRecordLayout(&piStack_20);
  iVar30 = (uint)bRam0036f810 * 6;
  piStack_10 = piStack_20;
  bVar1 = (&DAT_0032f531)[iVar30];
  piStack_8 = piStack_18;
  aiStack_140[0] = DAT_0032fc10;
  aiStack_140[1] = DAT_0032fc14;
  piStack_c = piStack_1c;
  iVar33 = (byte)(&DAT_0032f530)[iVar30] + 0x24;
  aiStack_140[2] = DAT_0032fc18;
  aiStack_140[3] = DAT_0032fc1c;
  uStack_130 = DAT_0032fc20;
  uStack_12c = DAT_0032fc24;
  auStack_170[2] = DAT_0032fc38;
  uStack_128 = DAT_0032fc28;
  auStack_170[0] = DAT_0032fc30;
  auStack_170[1] = DAT_0032fc34;
  uStack_15c = DAT_0032fc44;
  auStack_170[3] = DAT_0032fc3c;
  uStack_14c = DAT_0032fc54;
  uStack_160 = DAT_0032fc40;
  bVar2 = (&DAT_0032f533)[iVar30];
  uStack_158 = DAT_0032fc48;
  aiStack_180[2] = DAT_0032fc68;
  uStack_154 = DAT_0032fc4c;
  uStack_150 = DAT_0032fc50;
  uStack_148 = DAT_0032fc58;
  aiStack_180[0] = DAT_0032fc60;
  aiStack_180[1] = DAT_0032fc64;
  aiStack_180[3] = DAT_0032fc6c;
  iVar3 = aiStack_140[bVar1];
  iVar9 = (byte)(&DAT_0032f532)[iVar30] + 0x28;
  uVar12 = auStack_170[(byte)(&DAT_0032f532)[iVar30]];
  iVar30 = aiStack_180[(byte)(&DAT_0032f534)[iVar30]];
  bVar8 = GameState_Get_354_7050();
  piVar7 = piStack_8;
  piVar6 = piStack_c;
  if (bVar8 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar8) {
    case 0:
      if (bVar4) {
        unaff_s1_lo = 0x20;
      }
      else {
        unaff_s1_lo = 0x16;
      }
      break;
    case 1:
      if (bVar4) {
        unaff_s1_lo = 0x1e;
      }
      else {
        unaff_s1_lo = 0x17;
      }
      bVar5 = true;
      break;
    case 2:
      if (bVar4) {
        unaff_s1_lo = 0x1f;
      }
      else if ((&DAT_0032f535)[(uint)bRam0036f810 * 6] == '\x05') {
        unaff_s1_lo = 0x1d;
      }
      else {
        unaff_s1_lo = 0x18;
      }
      break;
    case 3:
      unaff_s1_lo = 0x19;
      bVar5 = true;
      break;
    default:
      unaff_s1_lo = 0x1a;
      break;
    case 6:
      unaff_s1_lo = 0x1b;
      break;
    case 7:
      unaff_s1_lo = 0x1c;
      bVar5 = true;
    }
  }
  iVar13 = unaff_s1_lo * 0xc;
  iVar28 = *(int *)(&DAT_0032f8b0 + iVar13) * 0x14;
  iVar10 = _g_ArcToc + 0x20;
  iVar31 = *(int *)(iVar10 + iVar28);
  if (iVar31 == 0) {
    uVar25 = *(uint *)(iVar28 + _g_ArcToc + 0x18);
  }
  else {
    uVar25 = iVar31 + 0x7ffU >> 0xb;
  }
  iVar31 = ((*(int *)(&DAT_0032f8b8 + iVar13) * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar25 * 0x800 + *(int *)(&DAT_0032f8b4 + iVar13) * 0x80;
  if (bVar4) {
    iVar28 = *(int *)(iVar10 + DAT_0032fa54 * 0x14);
    if (iVar28 == 0) {
      uVar25 = *(uint *)(DAT_0032fa54 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar25 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar14 = (uint)bVar1 * 0xc;
    piVar32 = (int *)(&DAT_0032f8b0 + iVar14);
    iVar28 = *(int *)(iVar10 + *piVar32 * 0x14);
    if (iVar28 == 0) {
      uVar22 = *(uint *)(*piVar32 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar22 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar28 = *(int *)(iVar10 + DAT_0032f910 * 0x14);
    if (iVar28 == 0) {
      uVar23 = *(uint *)(DAT_0032f910 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar23 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar28 = *(int *)(iVar10 + DAT_0032f91c * 0x14);
    if (iVar28 == 0) {
      uVar15 = *(uint *)(DAT_0032f91c * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar15 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar28 = *(int *)(iVar10 + DAT_0032f904 * 0x14);
    if (iVar28 == 0) {
      uVar26 = *(uint *)(DAT_0032f904 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar26 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar31 = iVar31 + ((DAT_0032fa5c * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                      uVar25 * 0x800 + DAT_0032fa58 * 0x80 +
             ((*(int *)(&DAT_0032f8b8 + iVar14) * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar22 * 0x800 + *(int *)(&DAT_0032f8b4 + iVar14) * 0x80 +
             ((DAT_0032f918 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar23 * 0x800 + DAT_0032f914 * 0x80 +
             ((DAT_0032f924 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar15 * 0x800 + DAT_0032f920 * 0x80 +
             ((DAT_0032f90c * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar26 * 0x800 + DAT_0032f908 * 0x80;
  }
  else {
    iVar28 = *(int *)(iVar10 + DAT_0032fa3c * 0x14);
    if (iVar28 == 0) {
      uVar25 = *(uint *)(DAT_0032fa3c * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar25 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar28 = *(int *)(iVar10 + DAT_0032fa48 * 0x14);
    if (iVar28 == 0) {
      uVar22 = *(uint *)(DAT_0032fa48 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar22 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar14 = ((uint)bVar1 * 2 + (uint)bVar1) * 4;
    piVar32 = (int *)(&DAT_0032f8b0 + iVar14);
    iVar28 = *(int *)(iVar10 + *piVar32 * 0x14);
    if (iVar28 == 0) {
      uVar23 = *(uint *)(*piVar32 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar23 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar28 = *(int *)(iVar10 + DAT_0032f904 * 0x14);
    if (iVar28 == 0) {
      uVar15 = *(uint *)(DAT_0032f904 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar15 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar31 = iVar31 + ((DAT_0032fa44 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                      uVar25 * 0x800 + DAT_0032fa40 * 0x80 +
             ((DAT_0032fa50 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar22 * 0x800 + DAT_0032fa4c * 0x80 +
             ((*(int *)(&DAT_0032f8b8 + iVar14) * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar23 * 0x800 + *(int *)(&DAT_0032f8b4 + iVar14) * 0x80 +
             ((DAT_0032f90c * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar15 * 0x800 + DAT_0032f908 * 0x80;
  }
  iVar14 = iVar33 * 0xc;
  iVar29 = *(int *)(&DAT_0032f8b0 + iVar14) * 0x14;
  iVar28 = *(int *)(iVar10 + iVar29);
  if (iVar28 == 0) {
    uVar25 = *(uint *)(iVar29 + _g_ArcToc + 0x18);
  }
  else {
    uVar25 = iVar28 + 0x7ffU >> 0xb;
  }
  iVar28 = *(int *)(iVar10 + DAT_0032fa78 * 0x14);
  if (iVar28 == 0) {
    uVar22 = *(uint *)(DAT_0032fa78 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar22 = iVar28 + 0x7ffU >> 0xb;
  }
  iVar28 = *(int *)(iVar10 + DAT_0032fa84 * 0x14);
  if (iVar28 == 0) {
    uVar23 = *(uint *)(DAT_0032fa84 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar23 = iVar28 + 0x7ffU >> 0xb;
  }
  iVar28 = 8;
  iVar31 = iVar31 + ((*(int *)(&DAT_0032f8b8 + iVar14) * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                    uVar25 * 0x800 + *(int *)(&DAT_0032f8b4 + iVar14) * 0x80 +
           ((DAT_0032fa80 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar22 * 0x800 + DAT_0032fa7c * 0x80 +
           ((DAT_0032fa8c * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar23 * 0x800 + DAT_0032fa88 * 0x80;
  if (*(int *)(param_1 + 0x288) == 0) {
    iVar29 = iVar9 * 0xc;
    iVar28 = *(int *)(iVar10 + *(int *)(&DAT_0032f8b0 + iVar29) * 0x14);
    if (iVar28 == 0) {
      uVar25 = *(uint *)(*(int *)(&DAT_0032f8b0 + iVar29) * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar25 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar28 = *(int *)(iVar10 + DAT_0032fb14 * 0x14);
    if (iVar28 == 0) {
      uVar22 = *(uint *)(DAT_0032fb14 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar22 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar28 = *(int *)(iVar10 + DAT_0032fb74 * 0x14);
    if (iVar28 == 0) {
      uVar23 = *(uint *)(DAT_0032fb74 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar23 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar24 = (bVar2 + 0x34) * 0xc;
    iVar28 = *(int *)(iVar10 + *(int *)(&DAT_0032f8b0 + iVar24) * 0x14);
    if (iVar28 == 0) {
      uVar15 = *(uint *)(*(int *)(&DAT_0032f8b0 + iVar24) * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar15 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar28 = 0xe;
    iVar31 = iVar31 + ((*(int *)(&DAT_0032f8b8 + iVar29) * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                      uVar25 * 0x800 + *(int *)(&DAT_0032f8b4 + iVar29) * 0x80 +
             ((DAT_0032fb1c * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar22 * 0x800 + DAT_0032fb18 * 0x80 +
             ((DAT_0032fb7c * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar23 * 0x800 + DAT_0032fb78 * 0x80 +
             ((*(int *)(&DAT_0032f8b8 + iVar24) * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar15 * 0x800 + *(int *)(&DAT_0032f8b4 + iVar24) * 0x80;
  }
  if (bVar5) {
    iVar29 = *(int *)(iVar10 + DAT_0032f928 * 0x14);
    if (iVar29 == 0) {
      uVar25 = *(uint *)(DAT_0032f928 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar25 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f934 * 0x14);
    if (iVar29 == 0) {
      uVar22 = *(uint *)(DAT_0032f934 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar22 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f940 * 0x14);
    if (iVar29 == 0) {
      uVar23 = *(uint *)(DAT_0032f940 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar23 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f94c * 0x14);
    if (iVar29 == 0) {
      uVar15 = *(uint *)(DAT_0032f94c * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar15 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f958 * 0x14);
    if (iVar29 == 0) {
      uVar26 = *(uint *)(DAT_0032f958 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar26 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f964 * 0x14);
    if (iVar29 == 0) {
      uVar16 = *(uint *)(DAT_0032f964 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar16 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f970 * 0x14);
    if (iVar29 == 0) {
      uVar17 = *(uint *)(DAT_0032f970 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar17 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f97c * 0x14);
    if (iVar29 == 0) {
      uVar18 = *(uint *)(DAT_0032f97c * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar18 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f988 * 0x14);
    if (iVar29 == 0) {
      uVar19 = *(uint *)(DAT_0032f988 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar19 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f994 * 0x14);
    if (iVar29 == 0) {
      uVar20 = *(uint *)(DAT_0032f994 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar20 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f9a0 * 0x14);
    if (iVar29 == 0) {
      uVar21 = *(uint *)(DAT_0032f9a0 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar21 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = *(int *)(iVar10 + DAT_0032f9ac * 0x14);
    if (iVar29 == 0) {
      uVar27 = *(uint *)(DAT_0032f9ac * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar27 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar28 = iVar28 + 0xc;
    iVar31 = iVar31 + ((DAT_0032f930 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                      uVar25 * 0x800 + DAT_0032f92c * 0x80 +
             ((DAT_0032f93c * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar22 * 0x800 + DAT_0032f938 * 0x80 +
             ((DAT_0032f948 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar23 * 0x800 + DAT_0032f944 * 0x80 +
             ((DAT_0032f954 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar15 * 0x800 + DAT_0032f950 * 0x80 +
             ((DAT_0032f960 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar26 * 0x800 + DAT_0032f95c * 0x80 +
             ((DAT_0032f96c * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar16 * 0x800 + DAT_0032f968 * 0x80 +
             ((DAT_0032f978 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar17 * 0x800 + DAT_0032f974 * 0x80 +
             ((DAT_0032f984 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar18 * 0x800 + DAT_0032f980 * 0x80 +
             ((DAT_0032f990 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar19 * 0x800 + DAT_0032f98c * 0x80 +
             ((DAT_0032f99c * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar20 * 0x800 + DAT_0032f998 * 0x80 +
             ((DAT_0032f9a8 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar21 * 0x800 + DAT_0032f9a4 * 0x80 +
             ((DAT_0032f9b4 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
             uVar27 * 0x800 + DAT_0032f9b0 * 0x80;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fb80 * 0x14);
  if (iVar29 == 0) {
    uVar25 = *(uint *)(DAT_0032fb80 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar25 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fb8c * 0x14);
  if (iVar29 == 0) {
    uVar22 = *(uint *)(DAT_0032fb8c * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar22 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fb98 * 0x14);
  if (iVar29 == 0) {
    uVar23 = *(uint *)(DAT_0032fb98 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar23 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fba4 * 0x14);
  if (iVar29 == 0) {
    uVar15 = *(uint *)(DAT_0032fba4 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar15 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fbb0 * 0x14);
  if (iVar29 == 0) {
    uVar26 = *(uint *)(DAT_0032fbb0 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar26 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fbbc * 0x14);
  if (iVar29 == 0) {
    uVar16 = *(uint *)(DAT_0032fbbc * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar16 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fbc8 * 0x14);
  if (iVar29 == 0) {
    uVar17 = *(uint *)(DAT_0032fbc8 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar17 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fbd4 * 0x14);
  if (iVar29 == 0) {
    uVar18 = *(uint *)(DAT_0032fbd4 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar18 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fbe0 * 0x14);
  if (iVar29 == 0) {
    uVar19 = *(uint *)(DAT_0032fbe0 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar19 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fbec * 0x14);
  if (iVar29 == 0) {
    uVar20 = *(uint *)(DAT_0032fbec * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar20 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fbf8 * 0x14);
  if (iVar29 == 0) {
    uVar21 = *(uint *)(DAT_0032fbf8 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar21 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = *(int *)(iVar10 + DAT_0032fc04 * 0x14);
  if (iVar29 == 0) {
    uVar27 = *(uint *)(DAT_0032fc04 * 0x14 + _g_ArcToc + 0x18);
  }
  else {
    uVar27 = iVar29 + 0x7ffU >> 0xb;
  }
  iVar29 = iVar28 + 0xc;
  iVar31 = iVar31 + ((DAT_0032fb88 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                    uVar25 * 0x800 + DAT_0032fb84 * 0x80 +
           ((DAT_0032fb94 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar22 * 0x800 + DAT_0032fb90 * 0x80 +
           ((DAT_0032fba0 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar23 * 0x800 + DAT_0032fb9c * 0x80 +
           ((DAT_0032fbac * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar15 * 0x800 + DAT_0032fba8 * 0x80 +
           ((DAT_0032fbb8 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar26 * 0x800 + DAT_0032fbb4 * 0x80 +
           ((DAT_0032fbc4 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar16 * 0x800 + DAT_0032fbc0 * 0x80 +
           ((DAT_0032fbd0 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar17 * 0x800 + DAT_0032fbcc * 0x80 +
           ((DAT_0032fbdc * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar18 * 0x800 + DAT_0032fbd8 * 0x80 +
           ((DAT_0032fbe8 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar19 * 0x800 + DAT_0032fbe4 * 0x80 +
           ((DAT_0032fbf4 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar20 * 0x800 + DAT_0032fbf0 * 0x80 +
           ((DAT_0032fc00 * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar21 * 0x800 + DAT_0032fbfc * 0x80 +
           ((DAT_0032fc0c * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
           uVar27 * 0x800 + DAT_0032fc08 * 0x80;
  if (piStack_10 != (int *)0x0) {
    iVar29 = *(int *)(iVar10 + *piStack_10 * 0x14);
    if (iVar29 == 0) {
      uVar25 = *(uint *)(*piStack_10 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar25 = iVar29 + 0x7ffU >> 0xb;
    }
    iVar29 = iVar28 + 0xd;
    iVar31 = iVar31 + ((piStack_10[2] * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                      uVar25 * 0x800 + piStack_10[1] * 0x80;
  }
  if (piStack_c != (int *)0x0) {
    iVar28 = *(int *)(iVar10 + *piStack_c * 0x14);
    if (iVar28 == 0) {
      uVar25 = *(uint *)(*piStack_c * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar25 = iVar28 + 0x7ffU >> 0xb;
    }
    iVar29 = iVar29 + 1;
    iVar31 = iVar31 + ((piStack_c[2] * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                      uVar25 * 0x800 + piStack_c[1] * 0x80;
  }
  if (piStack_8 != (int *)0x0) {
    iVar10 = *(int *)(iVar10 + *piStack_8 * 0x14);
    if (iVar10 == 0) {
      uVar25 = *(uint *)(*piStack_8 * 0x14 + _g_ArcToc + 0x18);
    }
    else {
      uVar25 = iVar10 + 0x7ffU >> 0xb;
    }
    iVar29 = iVar29 + 1;
    iVar31 = iVar31 + ((piStack_8[2] * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                      uVar25 * 0x800 + piStack_8[1] * 0x80;
  }
  if ((*(uint *)(param_1 + 0x27c) & 0x10) == 0) {
    *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) | 0x10;
  }
  else {
    UiMgr_Free();
  }
  UiMgr_Alloc(param_2,iVar29,iVar31,0,0,0xffffffffffffffff);
  iStack_30 = *piVar32;
  iStack_2c = piVar32[1];
  iStack_28 = piVar32[2];
  *(undefined4 *)(param_1 + 0xfbc) = 0;
  *(undefined4 *)(param_1 + 0xfc0) = 0;
  UiMgr_LoadLayout(0,&iStack_30,0);
  if (-1 < iVar3) {
    iVar10 = iVar3 * 0x14 + _g_ArcToc;
    iVar31 = *(int *)(iVar10 + 0x20);
    if (iVar31 == 0) {
      uVar25 = *(uint *)(iVar10 + 0x18);
    }
    else {
      uVar25 = iVar31 + 0x7ffU >> 0xb;
    }
    uVar11 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0xfc4) = uVar11;
    Arc_LoadFileEx(iVar3,*(undefined4 *)(param_1 + 0xfc4),0,0,0,0);
  }
  if (bVar4) {
    iStack_40 = DAT_0032f910;
    iStack_3c = DAT_0032f914;
    iStack_38 = DAT_0032f918;
    *(undefined4 *)(param_1 + 0xfe4) = 2;
    *(undefined4 *)(param_1 + 0xfe8) = 1;
    UiMgr_LoadLayout(2,&iStack_40,0);
    if (*(int *)(_g_ArcToc + 0x1e368) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e360);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e368) + 0x7ffU >> 0xb;
    }
    uVar11 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0xfec) = uVar11;
    Arc_LoadFileEx(0x182a,*(undefined4 *)(param_1 + 0xfec),0,0,0,0);
    iStack_50 = DAT_0032f91c;
    iStack_4c = DAT_0032f920;
    iStack_48 = DAT_0032f924;
    *(undefined4 *)(param_1 + 0xff8) = 3;
    *(undefined4 *)(param_1 + 0xffc) = 1;
    UiMgr_LoadLayout(3,&iStack_50,0);
    if (*(int *)(_g_ArcToc + 0x1e368) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e360);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e368) + 0x7ffU >> 0xb;
    }
    uVar11 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x1000) = uVar11;
    Arc_LoadFileEx(0x182a,*(undefined4 *)(param_1 + 0x1000),0,0,0,0);
  }
  iStack_60 = DAT_0032f904;
  iStack_5c = DAT_0032f908;
  iStack_58 = DAT_0032f90c;
  *(undefined4 *)(param_1 + 0xfd0) = 1;
  *(undefined4 *)(param_1 + 0xfd4) = 1;
  UiMgr_LoadLayout(1,&iStack_60,0);
  if (*(int *)(_g_ArcToc + 0x1e1ec) == 0) {
    uVar25 = *(uint *)(_g_ArcToc + 0x1e1e4);
  }
  else {
    uVar25 = *(int *)(_g_ArcToc + 0x1e1ec) + 0x7ffU >> 0xb;
  }
  uVar11 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0xfd8) = uVar11;
  Arc_LoadFileEx(0x1817,*(undefined4 *)(param_1 + 0xfd8),0,0,0,0);
  UiMgr_LoadLayout(0x10,&DAT_0032f8b0 + iVar13,0);
  if (bVar4) {
    UiMgr_LoadLayout(0x11,0x32fa54,0);
  }
  else {
    UiMgr_LoadLayout(0x11,0x32fa3c,0);
    UiMgr_LoadLayout(0x12,0x32fa48,0);
  }
  if (iVar33 == 0x25) {
    uStack_1d0 = 1;
    uStack_1e0 = 0x14;
  }
  else if (iVar33 == 0x24) {
    uStack_1d0 = 0;
    uStack_1e0 = 0x13;
  }
  RaceMenu_LoadLayouts
            (param_1 + 0x2a0,uStack_1d0,uStack_1e0,0x15,0x16,&DAT_0032f8b0 + iVar14,0x32fa78,
             0x32fa84);
  if (*(int *)(param_1 + 0x288) == 0) {
    Result_LoadPageA(param_1 + 0x3b8,0,0x17,&DAT_0032f8b0 + iVar9 * 0xc,2,uVar12);
    Result_LoadPageB(param_1 + 0x3b8,1,0x19,0x32fb14,3,4,iVar30,iVar30 + 1);
    Result_LoadLayouts(param_1 + 0x3b8,2,0x1a,0x32fb74,0xffffffffffffffff,0xffffffffffffffff,
                       0xffffffffffffffff,0xffffffffffffffff);
    Result_LoadPageA(param_1 + 0x3b8,3,0x18,&DAT_0032f8b0 + (bVar2 + 0x34) * 0xc,5,0x180c);
  }
  if (bVar5) {
    iStack_70 = DAT_0032f928;
    iStack_6c = DAT_0032f92c;
    iStack_68 = DAT_0032f930;
    *(undefined4 *)(param_1 + 0x100c) = 4;
    *(undefined4 *)(param_1 + 0x1010) = 2;
    UiMgr_LoadLayout(4,&iStack_70,0);
    if (*(int *)(_g_ArcToc + 0x1e200) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e1f8);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e200) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x1014) = uVar12;
    Arc_LoadFileEx(0x1818,*(undefined4 *)(param_1 + 0x1014),0,0,0,0);
    iStack_80 = DAT_0032f934;
    iStack_7c = DAT_0032f938;
    iStack_78 = DAT_0032f93c;
    *(undefined4 *)(param_1 + 0x1020) = 5;
    *(undefined4 *)(param_1 + 0x1024) = 1;
    UiMgr_LoadLayout(5,&iStack_80,0);
    if (*(int *)(_g_ArcToc + 0x1e1ec) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e1e4);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e1ec) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x1028) = uVar12;
    Arc_LoadFileEx(0x1817,*(undefined4 *)(param_1 + 0x1028),0,0,0,0);
    iStack_90 = DAT_0032f940;
    iStack_8c = DAT_0032f944;
    iStack_88 = DAT_0032f948;
    *(undefined4 *)(param_1 + 0x1034) = 6;
    *(undefined4 *)(param_1 + 0x1038) = 3;
    UiMgr_LoadLayout(6,&iStack_90,0);
    if (*(int *)(_g_ArcToc + 0x1e2a0) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e298);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e2a0) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x103c) = uVar12;
    Arc_LoadFileEx(0x1820,*(undefined4 *)(param_1 + 0x103c),0,0,0,0);
    iStack_a0 = DAT_0032f94c;
    iStack_9c = DAT_0032f950;
    iStack_98 = DAT_0032f954;
    *(undefined4 *)(param_1 + 0x1048) = 7;
    *(undefined4 *)(param_1 + 0x104c) = 4;
    UiMgr_LoadLayout(7,&iStack_a0,0);
    if (*(int *)(_g_ArcToc + 0x1e2b4) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e2ac);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e2b4) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x1050) = uVar12;
    Arc_LoadFileEx(0x1821,*(undefined4 *)(param_1 + 0x1050),0,0,0,0);
    iStack_b0 = DAT_0032f958;
    iStack_ac = DAT_0032f95c;
    iStack_a8 = DAT_0032f960;
    *(undefined4 *)(param_1 + 0x105c) = 8;
    *(undefined4 *)(param_1 + 0x1060) = 4;
    UiMgr_LoadLayout(8,&iStack_b0,0);
    if (*(int *)(_g_ArcToc + 0x1e2c8) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e2c0);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e2c8) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x1064) = uVar12;
    Arc_LoadFileEx(0x1822,*(undefined4 *)(param_1 + 0x1064),0,0,0,0);
    iStack_c0 = DAT_0032f964;
    iStack_bc = DAT_0032f968;
    iStack_b8 = DAT_0032f96c;
    *(undefined4 *)(param_1 + 0x1070) = 9;
    *(undefined4 *)(param_1 + 0x1074) = 4;
    UiMgr_LoadLayout(9,&iStack_c0,0);
    if (*(int *)(_g_ArcToc + 0x1e354) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e34c);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e354) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x1078) = uVar12;
    Arc_LoadFileEx(0x1829,*(undefined4 *)(param_1 + 0x1078),0,0,0,0);
    iStack_d0 = DAT_0032f970;
    iStack_cc = DAT_0032f974;
    iStack_c8 = DAT_0032f978;
    *(undefined4 *)(param_1 + 0x1084) = 10;
    *(undefined4 *)(param_1 + 0x1088) = 4;
    UiMgr_LoadLayout(10,&iStack_d0,0);
    if (*(int *)(_g_ArcToc + 0x1e340) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e338);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e340) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x108c) = uVar12;
    Arc_LoadFileEx(0x1828,*(undefined4 *)(param_1 + 0x108c),0,0,0,0);
    iStack_e0 = DAT_0032f97c;
    iStack_dc = DAT_0032f980;
    iStack_d8 = DAT_0032f984;
    *(undefined4 *)(param_1 + 0x1098) = 0xb;
    *(undefined4 *)(param_1 + 0x109c) = 5;
    UiMgr_LoadLayout(0xb,&iStack_e0,0);
    if (*(int *)(_g_ArcToc + 0x1e2dc) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e2d4);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e2dc) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x10a0) = uVar12;
    Arc_LoadFileEx(0x1823,*(undefined4 *)(param_1 + 0x10a0),0,0,0,0);
    iStack_f0 = DAT_0032f988;
    iStack_ec = DAT_0032f98c;
    iStack_e8 = DAT_0032f990;
    *(undefined4 *)(param_1 + 0x10ac) = 0xc;
    *(undefined4 *)(param_1 + 0x10b0) = 5;
    UiMgr_LoadLayout(0xc,&iStack_f0,0);
    if (*(int *)(_g_ArcToc + 0x1e2f0) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e2e8);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e2f0) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x10b4) = uVar12;
    Arc_LoadFileEx(0x1824,*(undefined4 *)(param_1 + 0x10b4),0,0,0,0);
    iStack_100 = DAT_0032f994;
    iStack_fc = DAT_0032f998;
    iStack_f8 = DAT_0032f99c;
    *(undefined4 *)(param_1 + 0x10c0) = 0xd;
    *(undefined4 *)(param_1 + 0x10c4) = 5;
    UiMgr_LoadLayout(0xd,&iStack_100,0);
    if (*(int *)(_g_ArcToc + 0x1e304) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e2fc);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e304) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x10c8) = uVar12;
    Arc_LoadFileEx(0x1825,*(undefined4 *)(param_1 + 0x10c8),0,0,0,0);
    iStack_110 = DAT_0032f9a0;
    iStack_10c = DAT_0032f9a4;
    iStack_108 = DAT_0032f9a8;
    *(undefined4 *)(param_1 + 0x10d4) = 0xe;
    *(undefined4 *)(param_1 + 0x10d8) = 5;
    UiMgr_LoadLayout(0xe,&iStack_110,0);
    if (*(int *)(_g_ArcToc + 0x1e318) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e310);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e318) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x10dc) = uVar12;
    Arc_LoadFileEx(0x1826,*(undefined4 *)(param_1 + 0x10dc),0,0,0,0);
    iStack_120 = DAT_0032f9ac;
    iStack_11c = DAT_0032f9b0;
    iStack_118 = DAT_0032f9b4;
    *(undefined4 *)(param_1 + 0x10e8) = 0xf;
    *(undefined4 *)(param_1 + 0x10ec) = 5;
    UiMgr_LoadLayout(0xf,&iStack_120,0);
    if (*(int *)(_g_ArcToc + 0x1e32c) == 0) {
      uVar25 = *(uint *)(_g_ArcToc + 0x1e324);
    }
    else {
      uVar25 = *(int *)(_g_ArcToc + 0x1e32c) + 0x7ffU >> 0xb;
    }
    uVar12 = Mem_AllocAligned(uVar25 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x10f0) = uVar12;
    Arc_LoadFileEx(0x1827,*(undefined4 *)(param_1 + 0x10f0),0,0,0,0);
  }
  UiMgr_LoadLayout(0x1b,0x32fb80,0);
  UiMgr_LoadLayout(0x1c,0x32fb8c,0);
  UiMgr_LoadLayout(0x1d,0x32fb98,0);
  UiMgr_LoadLayout(0x1e,0x32fba4,0);
  UiMgr_LoadLayout(0x1f,0x32fbb0,0);
  UiMgr_LoadLayout(0x20,0x32fbbc,0);
  UiMgr_LoadLayout(0x21,0x32fbc8,0);
  UiMgr_LoadLayout(0x22,0x32fbd4,0);
  UiMgr_LoadLayout(0x23,0x32fbe0,0);
  UiMgr_LoadLayout(0x24,0x32fbec,0);
  UiMgr_LoadLayout(0x25,0x32fbf8,0);
  UiMgr_LoadLayout(0x26,0x32fc04,0);
  if (piStack_10 != (int *)0x0) {
    UiMgr_LoadLayout(0x27,piStack_10,0);
  }
  if (piVar6 != (int *)0x0) {
    UiMgr_LoadLayout(0x28,piVar6,0);
  }
  if (piVar7 != (int *)0x0) {
    UiMgr_LoadLayout(0x29,piVar7,0);
  }
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) | 0x20;
  return;
}

// 0x002cf820  size 0x18c
void RaceHud_Task(void)

{
  char cVar1;
  long lVar2;
  
  if (*(int *)(iRam0036f804 + 0x1104) == 0) {
    maybe_RaceHud_FormatRecord();
    *(undefined4 *)(iRam0036f804 + 0x1104) = 1;
    Result_StoreRecordAlt(iRam0036f804 + 0x3b8,0);
  }
  cVar1 = *(char *)(iRam0036f804 + 0xfb4);
  if (cVar1 == '\x02') {
    RaceHud_FadeOut();
    RaceHud_Draw(iRam0036f804);
    if (*(int *)(iRam0036f804 + 0x390) == 0xb) {
      *(uint *)(iRam0036f804 + 0x27c) = *(uint *)(iRam0036f804 + 0x27c) & 0xfffffffd;
    }
    else {
      RaceMenu_Draw(iRam0036f804 + 0x2a0);
    }
  }
  else if (cVar1 == '\x04') {
    Result_Init(iRam0036f804 + 0x3b8);
  }
  else if (cVar1 == '\x05') {
    RaceHud_Draw();
    RaceMenu_Draw(iRam0036f804 + 0x2a0);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x01') goto LAB_002cf918;
      RaceHud_FadeOutAndFree();
    }
    RaceHud_Draw(iRam0036f804);
    if (*(int *)(iRam0036f804 + 0x390) != 0xb) {
      RaceMenu_Draw(iRam0036f804 + 0x2a0);
    }
  }
LAB_002cf918:
  lVar2 = RaceScene_IsPaused();
  if (lVar2 == 0) {
    *(int *)(iRam0036f804 + 0x284) = *(int *)(iRam0036f804 + 0x284) + 1;
  }
  if (*(int *)(iRam0036f804 + 0x29c) != 0) {
    RaceHud_ResetSlots();
  }
  *(undefined4 *)(iRam0036f804 + 0x29c) = 0;
  return;
}

// 0x002cf9b0  size 0xf8
undefined4 maybe_RaceHud_IsBusy(void)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (iRam0036f804 == 0) {
    uVar2 = 0;
  }
  else {
    if (((*(uint *)(iRam0036f804 + 0x27c) & 0x20) != 0) &&
       (lVar3 = UiMgr_FindFreeSlot(), lVar3 == 0)) {
      *(uint *)(iRam0036f804 + 0x27c) = *(uint *)(iRam0036f804 + 0x27c) & 0xffffffdf;
    }
    if ((*(uint *)(iRam0036f804 + 0x27c) & 0x20) == 0) {
      bVar1 = *(int *)(iRam0036f804 + 0x12a0) != 0;
      if (!bVar1) {
        bVar1 = *(int *)(iRam0036f804 + 0x2720) != 0;
      }
      if (!bVar1) {
        uVar7 = 0;
        iVar5 = iRam0036f804;
        do {
          uVar6 = 0;
          iVar4 = iVar5;
          do {
            if (*(int *)(iVar4 + 0x1138) != 0) {
              bVar1 = true;
              break;
            }
            uVar6 = uVar6 + 1;
            iVar4 = iVar4 + 0x3c;
          } while (uVar6 < 3);
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 0xb4;
        } while (uVar7 < 2);
      }
      if (!bVar1) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

// 0x002cfab0  size 0xc
void RaceHud_SetField268(undefined4 param_1)

{
  *(undefined4 *)(iRam0036f804 + 0x268) = param_1;
  return;
}

// 0x002cfac0  size 0xc
void RaceHud_SetField26c(undefined4 param_1)

{
  *(undefined4 *)(iRam0036f804 + 0x26c) = param_1;
  return;
}

// 0x002cfad0  size 0xc
undefined4 RaceHud_GetFlags(void)

{
  return *(undefined4 *)(iRam0036f804 + 0x27c);
}

// 0x002cfae0  size 0x14
void RaceHud_ToggleFlags(uint param_1)

{
  *(uint *)(iRam0036f804 + 0x27c) = *(uint *)(iRam0036f804 + 0x27c) ^ param_1;
  return;
}

// 0x002cfb00  size 0x14
void RaceHud_SetFlags(uint param_1)

{
  *(uint *)(iRam0036f804 + 0x27c) = *(uint *)(iRam0036f804 + 0x27c) | param_1;
  return;
}

// 0x002cfb20  size 0xc
undefined * RaceHud_GetMeterTable(void)

{
  return &DAT_0032f7b0;
}

// 0x002cfb30  size 0x24
int RaceHud_GetRacerPanel(int param_1)

{
  return iRam0036f804 + param_1 * 0xcc + 4;
}

// 0x002cfb60  size 0xc
undefined1 RaceHud_GetState(void)

{
  return *(undefined1 *)(iRam0036f804 + 0xfb4);
}

// 0x002cfb70  size 0x188
void RaceHud_SetState(byte param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 < 10) {
    *(byte *)(iRam0036f804 + 0xfb4) = param_1;
    cVar1 = *(char *)(iRam0036f804 + 0xfb4);
    if (cVar1 != '\x02') {
      if (cVar1 == '\x04') {
        *(undefined4 *)(iRam0036f804 + 0x280) = 0;
        RaceHud_ClearSlots(iRam0036f804);
        puVar4 = (undefined1 *)(iRam0036f804 + 0x3b8);
        if (((*(char *)(iRam0036f804 + 0x3b8) != '\x05') && (*(int *)(iRam0036f804 + 0x6d8) != 0))
           && (*(char *)(iRam0036f804 + 0x400) == '\0')) {
          *(undefined1 *)(iRam0036f804 + 0x400) = 2;
        }
        *puVar4 = 1;
        lVar3 = RaceScene_IsFlag10();
        if (lVar3 == 0) {
          *(undefined4 *)(iRam0036f804 + 0x450) = 0;
        }
      }
      else if (cVar1 == '\x05') {
        RaceMenu_Task(iRam0036f804 + 0x2a0);
      }
      else if (cVar1 == '\x01') {
        lVar3 = RaceScene_IsFlag10();
        if (lVar3 == 0) {
          *(undefined4 *)(iRam0036f804 + 0x3b70) = 0;
          *(uint *)(iRam0036f804 + 0x27c) = *(uint *)(iRam0036f804 + 0x27c) & 0xfffffff3;
          *(uint *)(iRam0036f804 + 0x27c) = *(uint *)(iRam0036f804 + 0x27c) | 2;
        }
        else {
          *(undefined4 *)(iRam0036f804 + 0x3b70) = 0;
          *(uint *)(iRam0036f804 + 0x27c) = *(uint *)(iRam0036f804 + 0x27c) & 0xfffffffd;
        }
        iVar6 = 0;
        lVar3 = GameState_GetTotalCarCount();
        if (0 < lVar3) {
          iVar5 = 0;
          do {
            RaceUi_SetupCarIcons(iRam0036f804 + iVar5 + 4,iVar6);
            iVar5 = iVar5 + 0xcc;
            iVar6 = iVar6 + 1;
            iVar2 = GameState_GetTotalCarCount();
          } while (iVar6 < iVar2);
        }
      }
    }
  }
  return;
}

// 0x002cfd00  size 0x208
void maybe_RaceHud_UploadTextures(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uRam0036f808 = param_1;
  uRam0036f80c = param_2;
  if (iRam0036f804 != 0) {
    uVar6 = 0;
    iVar4 = 0;
    do {
      uVar5 = 0;
      iVar3 = 0;
      do {
        uVar1 = uRam0036f80c;
        iVar2 = iRam0036f804 + iVar4 + iVar3;
        *(undefined4 *)(iVar2 + 0x1128) = uRam0036f808;
        *(undefined4 *)(iVar2 + 0x112c) = uVar1;
        if (((*(int *)(iVar2 + 0x1110) != 0) && (*(int *)(iVar2 + 0x110c) != 0)) &&
           (*(int *)(iVar2 + 0x1138) == 0)) {
          *(undefined4 *)(iVar2 + 0x1120) = 0;
          Pkt_AddTextureUploadAll
                    (iVar2 + 0x1118,*(undefined4 *)(iVar2 + 0x110c),*(undefined4 *)(iVar2 + 0x1128),
                     *(undefined4 *)(iVar2 + 0x112c));
        }
        TexSlot_Bind(*(undefined4 *)(iVar2 + 0x1114),*(undefined4 *)(iVar2 + 0x110c),
                     *(undefined4 *)(iVar2 + 0x1110),*(undefined4 *)(iVar2 + 0x1128),
                     *(undefined4 *)(iVar2 + 0x112c),*(undefined4 *)(iVar2 + 0x1130),0,0);
        uVar1 = uRam0036f80c;
        iVar2 = iRam0036f804;
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0x3c;
      } while (uVar5 < 3);
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0xb4;
    } while (uVar6 < 2);
    *(undefined4 *)(iRam0036f804 + 0x1290) = uRam0036f808;
    *(undefined4 *)(iVar2 + 0x1294) = uVar1;
    if (((*(int *)(iVar2 + 0x1278) != 0) && (*(int *)(iVar2 + 0x1274) != 0)) &&
       (*(int *)(iVar2 + 0x12a0) == 0)) {
      *(undefined4 *)(iVar2 + 0x1288) = 0;
      Pkt_AddTextureUploadAll
                (iVar2 + 0x1280,*(undefined4 *)(iVar2 + 0x1274),*(undefined4 *)(iVar2 + 0x1290),
                 *(undefined4 *)(iVar2 + 0x1294));
    }
    TexSlot_Bind(*(undefined4 *)(iVar2 + 0x127c),*(undefined4 *)(iVar2 + 0x1274),
                 *(undefined4 *)(iVar2 + 0x1278),*(undefined4 *)(iVar2 + 0x1290),
                 *(undefined4 *)(iVar2 + 0x1294),*(undefined4 *)(iVar2 + 0x1298),0,0);
    uVar1 = uRam0036f80c;
    iVar4 = iRam0036f804;
    *(undefined4 *)(iRam0036f804 + 10000) = uRam0036f808;
    *(undefined4 *)(iVar4 + 0x2714) = uVar1;
    if (((*(int *)(iVar4 + 0x26f8) != 0) && (*(int *)(iVar4 + 0x26f4) != 0)) &&
       (*(int *)(iVar4 + 0x2720) == 0)) {
      *(undefined4 *)(iVar4 + 0x2708) = 0;
      Pkt_AddTextureUploadAll
                (iVar4 + 0x2700,*(undefined4 *)(iVar4 + 0x26f4),*(undefined4 *)(iVar4 + 10000),
                 *(undefined4 *)(iVar4 + 0x2714));
    }
    TexSlot_Bind(*(undefined4 *)(iVar4 + 0x26fc),*(undefined4 *)(iVar4 + 0x26f4),
                 *(undefined4 *)(iVar4 + 0x26f8),*(undefined4 *)(iVar4 + 10000),
                 *(undefined4 *)(iVar4 + 0x2714),*(undefined4 *)(iVar4 + 0x2718),0,0);
  }
  return;
}

// 0x002cff10  size 0x1c4
void RaceHud_Free(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (iRam0036f804 != 0) {
    uVar4 = 0;
    iVar2 = 0;
    do {
      if (*(int *)(iRam0036f804 + iVar2 + 0xfc4) != 0) {
        Mem_Free();
        *(undefined4 *)(iRam0036f804 + iVar2 + 0xfc4) = 0;
      }
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x14;
    } while (uVar4 < 0x10);
    RaceUi_Free(iRam0036f804 + 0x2a0);
    Result_Free(iRam0036f804 + 0x3b8);
    iVar2 = iRam0036f804;
    if (*(int *)(iRam0036f804 + 0x1274) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar2 + 0x1274) = 0;
    }
    if (*(int *)(iVar2 + 0x127c) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar2 + 0x127c) = 0;
    }
    DmaBuf_Free(iVar2 + 0x1280);
    *(undefined4 *)(iVar2 + 0x12a0) = 0;
    iVar2 = iRam0036f804;
    if (*(int *)(iRam0036f804 + 0x26f4) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar2 + 0x26f4) = 0;
    }
    if (*(int *)(iVar2 + 0x26fc) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar2 + 0x26fc) = 0;
    }
    DmaBuf_Free(iVar2 + 0x2700);
    *(undefined4 *)(iVar2 + 0x2720) = 0;
    uVar4 = 0;
    iVar2 = 0;
    do {
      uVar5 = 0;
      iVar3 = 0;
      do {
        iVar1 = iRam0036f804 + iVar2 + iVar3;
        if (*(int *)(iVar1 + 0x110c) != 0) {
          Mem_Free();
          *(undefined4 *)(iVar1 + 0x110c) = 0;
        }
        if (*(int *)(iVar1 + 0x1114) != 0) {
          Mem_Free();
          *(undefined4 *)(iVar1 + 0x1114) = 0;
        }
        DmaBuf_Free(iVar1 + 0x1118);
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar1 + 0x1138) = 0;
        iVar3 = iVar3 + 0x3c;
      } while (uVar5 < 3);
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0xb4;
    } while (uVar4 < 2);
    if (iRam0036f804 != 0) {
      Mem_Free();
      iRam0036f804 = 0;
    }
  }
  ReplayUi_Free();
  UiMgr_Free();
  return;
}

