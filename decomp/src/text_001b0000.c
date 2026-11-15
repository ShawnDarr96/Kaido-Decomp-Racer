// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001b0000 - 0x001b4000
#include "ghidra_types.h"

// 0x001b0480  size 0x2cc
/* WARNING: Removing unreachable block (ram,0x001b0534) */
/* WARNING: Removing unreachable block (ram,0x001b0624) */

void Rival_RandomizeBehaviour(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int aiStack_640 [400];
  
  iVar4 = 0;
  iVar2 = 0;
  piVar3 = aiStack_640;
  do {
    *piVar3 = 0;
    iVar2 = iVar2 + 8;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
    piVar3 = piVar3 + 8;
  } while (iVar2 < 400);
  iVar2 = 0;
  if (0 < param_2) {
    if (8 < param_2) {
      bVar1 = false;
      if ((-1 < param_2) && (param_2 < 0x7fffffff)) {
        bVar1 = true;
      }
      if (bVar1) {
        piVar3 = param_3;
        do {
          *piVar3 = -1;
          iVar2 = iVar2 + 8;
          piVar3[1] = -1;
          piVar3[2] = -1;
          piVar3[3] = -1;
          piVar3[4] = -1;
          piVar3[5] = -1;
          piVar3[6] = -1;
          piVar3[7] = -1;
          piVar3 = piVar3 + 8;
        } while (iVar2 < param_2 + -8);
      }
    }
    if (iVar2 < param_2) {
      piVar3 = param_3 + iVar2;
      do {
        iVar2 = iVar2 + 1;
        *piVar3 = -1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < param_2);
    }
  }
  if (param_2 < param_1) {
    do {
      do {
        iVar2 = maybe_Rand_Float();
      } while (aiStack_640[iVar2 % param_1] != 0);
      *param_3 = iVar2 % param_1;
      aiStack_640[iVar2 % param_1] = 1;
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 1;
    } while (iVar4 < param_2);
  }
  else {
    iVar2 = 0;
    if (0 < param_1) {
      if (8 < param_1) {
        bVar1 = false;
        if ((-1 < param_1) && (param_1 < 0x7fffffff)) {
          bVar1 = true;
        }
        if (bVar1) {
          piVar3 = param_3;
          do {
            *piVar3 = iVar2;
            piVar3[1] = iVar2 + 1;
            piVar3[2] = iVar2 + 2;
            piVar3[3] = iVar2 + 3;
            piVar3[4] = iVar2 + 4;
            piVar3[5] = iVar2 + 5;
            piVar3[6] = iVar2 + 6;
            piVar3[7] = iVar2 + 7;
            iVar2 = iVar2 + 8;
            piVar3 = piVar3 + 8;
          } while (iVar2 < param_1 + -8);
        }
      }
      if (iVar2 < param_1) {
        param_3 = param_3 + iVar2;
        do {
          *param_3 = iVar2;
          iVar2 = iVar2 + 1;
          param_3 = param_3 + 1;
        } while (iVar2 < param_1);
      }
    }
  }
  return;
}

// 0x001b0750  size 0xbc
undefined4 Rival_HasCar(int param_1,undefined2 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar1 = menuscr_leaf_sub_00274810(param_2);
  if (uVar1 < 2) {
    uVar3 = *(undefined4 *)(param_1 + 0x20);
  }
  else if (uVar1 == 2) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
  }
  else if (uVar1 == 3) {
    uVar3 = *(undefined4 *)(param_1 + 0x14);
  }
  else if ((int)(short)uVar1 - 4U < 2) {
    uVar3 = *(undefined4 *)(param_1 + 0x24);
  }
  else if ((int)(short)uVar1 - 6U < 3) {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    iVar2 = (int)(short)uVar1;
    if (iVar2 - 9U < 2) {
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
    }
    else if (iVar2 - 0xbU < 3) {
      uVar3 = *(undefined4 *)(param_1 + 0x18);
    }
    else if (iVar2 - 0xeU < 2) {
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
    }
  }
  return uVar3;
}

// 0x001b0810  size 0x60
undefined8 Rival_IsDefeated(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = GameDb_GetTeamMemberCount();
  if (param_2 < lVar1) {
    uVar2 = GameDb_GetTeamMember(param_1,param_2);
  }
  return uVar2;
}

// 0x001b0870  size 0x54
undefined8 Rival_IsUnlocked(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = GameDb_GetTeamCount();
  if (param_1 < lVar1) {
    uVar2 = GameDb_GetTeamRecord(param_1);
  }
  return uVar2;
}

// 0x001b08d0  size 0x60
/* 0x50-byte record copy */

void Rival_GetRecord(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_50 [20];
  
  uVar2 = GameDb_GetRivalCar(param_2);
  memcpy(auStack_50,uVar2,0x50);
  puVar4 = auStack_50;
  iVar3 = 10;
  do {
    iVar3 = iVar3 + -1;
    uVar1 = puVar4[1];
    *param_1 = *puVar4;
    puVar4 = puVar4 + 2;
    param_1[1] = uVar1;
    param_1 = param_1 + 2;
  } while (0 < iVar3);
  return;
}

// 0x001b0930  size 0x564
int Rival_FindByTeam(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  short sStack_480;
  short sStack_47e;
  undefined1 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined1 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined1 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined2 uStack_448;
  undefined2 uStack_446;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 auStack_43c [23];
  undefined4 auStack_3e0 [23];
  undefined4 auStack_384 [16];
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined2 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  short sStack_300;
  short sStack_2fe;
  undefined1 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined2 uStack_2c8;
  undefined2 uStack_2c6;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 auStack_2bc [23];
  undefined4 auStack_260 [23];
  undefined4 auStack_204 [16];
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  short sStack_180;
  short sStack_17e;
  undefined1 uStack_17c;
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
  
  iVar7 = 0;
  iVar6 = 0;
  while( true ) {
    uVar3 = GameDb_GetRival((short)iVar6);
    memcpy(&sStack_480,uVar3,0x17c);
    puVar5 = auStack_43c;
    sStack_300 = sStack_480;
    uStack_2f8 = uStack_478;
    uStack_2e8 = uStack_468;
    puVar4 = auStack_2bc;
    uStack_2e4 = uStack_464;
    uStack_2f4 = uStack_474;
    uStack_2f0 = uStack_470;
    sStack_2fe = sStack_47e;
    uStack_2fc = uStack_47c;
    iVar2 = 0x17;
    uStack_2ec = uStack_46c;
    uStack_2e0 = uStack_460;
    uStack_2dc = uStack_45c;
    uStack_2d8 = uStack_458;
    uStack_2d4 = uStack_454;
    uStack_2d0 = uStack_450;
    uStack_2cc = uStack_44c;
    uStack_2c8 = uStack_448;
    uStack_2c6 = uStack_446;
    uStack_2c4 = uStack_444;
    uStack_2c0 = uStack_440;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 0x17;
    puVar5 = auStack_3e0;
    puVar4 = auStack_260;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 8;
    puVar5 = auStack_384;
    puVar4 = auStack_204;
    do {
      iVar2 = iVar2 + -1;
      uVar1 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (0 < iVar2);
    uStack_1b0 = uStack_330;
    uStack_1c0 = uStack_340;
    uStack_1bc = uStack_33c;
    uStack_1b8 = uStack_338;
    uStack_1b4 = uStack_334;
    uStack_1ac = uStack_32c;
    uStack_1a8 = uStack_328;
    uStack_1a4 = uStack_324;
    uStack_1a0 = uStack_320;
    uStack_19c = uStack_31c;
    uStack_1c4 = uStack_344;
    uStack_198 = uStack_318;
    uStack_194 = uStack_314;
    uStack_190 = uStack_310;
    uStack_18c = uStack_30c;
    sStack_180 = sStack_480;
    uStack_188 = uStack_308;
    sStack_17e = sStack_47e;
    uStack_17c = uStack_47c;
    uStack_178 = uStack_478;
    uStack_174 = uStack_474;
    uStack_168 = uStack_468;
    puVar5 = auStack_2bc;
    uStack_170 = uStack_470;
    uStack_164 = uStack_464;
    uStack_16c = uStack_46c;
    iVar2 = 0x17;
    uStack_160 = uStack_460;
    uStack_15c = uStack_45c;
    puVar4 = auStack_13c;
    uStack_158 = uStack_458;
    uStack_154 = uStack_454;
    uStack_150 = uStack_450;
    uStack_14c = uStack_44c;
    uStack_148 = uStack_448;
    uStack_146 = uStack_446;
    uStack_144 = uStack_444;
    uStack_140 = uStack_440;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 0x17;
    puVar5 = auStack_260;
    puVar4 = auStack_e0;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 8;
    puVar5 = auStack_204;
    puVar4 = auStack_84;
    do {
      iVar2 = iVar2 + -1;
      uVar1 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (0 < iVar2);
    uStack_38 = uStack_338;
    uStack_34 = uStack_334;
    uStack_30 = uStack_330;
    uStack_2c = uStack_32c;
    uStack_40 = uStack_340;
    uStack_3c = uStack_33c;
    uStack_28 = uStack_328;
    uStack_24 = uStack_324;
    uStack_20 = uStack_320;
    uStack_44 = uStack_344;
    uStack_18 = uStack_318;
    uStack_14 = uStack_314;
    uStack_10 = uStack_310;
    uStack_c = uStack_30c;
    uStack_8 = uStack_308;
    uStack_1c = uStack_31c;
    if (sStack_47e == -1) break;
    if (param_1 == sStack_480) {
      iVar7 = iVar7 + 1;
    }
    iVar6 = iVar6 + 1;
    if (499 < iVar6) {
      return iVar7;
    }
  }
  return iVar7;
}

// 0x001b0ea0  size 0x5c
/* 0x44-byte record copy */

void Rival_GetTeamRecord(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_50 [20];
  
  uVar1 = GameDb_GetTeam(param_2);
  memcpy(auStack_50,uVar1,0x44);
  puVar3 = auStack_50;
  iVar2 = 0x11;
  do {
    iVar2 = iVar2 + -1;
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar2);
  return;
}

// 0x001b0f00  size 0x1218
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Rival_SelectOpponents(int *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piStack_c60;
  int iStack_c50;
  int iStack_c40;
  int iStack_c30;
  undefined2 uStack_c10;
  short sStack_c0e;
  char cStack_c0c;
  undefined4 uStack_c08;
  undefined4 uStack_c04;
  undefined4 uStack_c00;
  uint uStack_bfc;
  undefined4 uStack_bf8;
  undefined4 uStack_bf4;
  undefined1 uStack_bf0;
  undefined4 uStack_bec;
  undefined4 uStack_be8;
  undefined1 uStack_be4;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  undefined2 uStack_bd8;
  undefined2 uStack_bd6;
  undefined4 uStack_bd4;
  undefined4 uStack_bd0;
  undefined4 auStack_bcc [23];
  undefined4 auStack_b70 [23];
  undefined4 auStack_b14 [16];
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  undefined4 uStack_ac8;
  undefined4 uStack_ac4;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined2 uStack_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined2 uStack_a90;
  short sStack_a8e;
  char cStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  uint uStack_a7c;
  undefined4 uStack_a78;
  undefined4 uStack_a74;
  undefined1 uStack_a70;
  undefined4 uStack_a6c;
  undefined4 uStack_a68;
  undefined1 uStack_a64;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined2 uStack_a58;
  undefined2 uStack_a56;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 auStack_a4c [23];
  undefined4 auStack_9f0 [23];
  undefined4 auStack_994 [16];
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined2 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined2 uStack_910;
  undefined2 uStack_90e;
  undefined1 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  uint uStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined1 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined1 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined2 uStack_8d8;
  undefined2 uStack_8d6;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 auStack_8cc [23];
  undefined4 auStack_870 [23];
  undefined4 auStack_814 [16];
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined2 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined2 uStack_790;
  short sStack_78e;
  char cStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  uint uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined1 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined1 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined2 uStack_758;
  undefined2 uStack_756;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 auStack_74c [23];
  undefined4 auStack_6f0 [23];
  undefined4 auStack_694 [16];
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined2 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined2 uStack_610;
  short sStack_60e;
  char cStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  uint uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined1 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined1 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined2 uStack_5d8;
  undefined2 uStack_5d6;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 auStack_5cc [23];
  undefined4 auStack_570 [23];
  undefined4 auStack_514 [16];
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined2 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined2 uStack_490;
  undefined2 uStack_48e;
  undefined1 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  uint uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined1 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined1 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined2 uStack_458;
  undefined2 uStack_456;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 auStack_44c [23];
  undefined4 auStack_3f0 [23];
  undefined4 auStack_394 [16];
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined2 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined2 uStack_310;
  undefined2 uStack_30e;
  undefined1 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined1 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined2 uStack_2d8;
  undefined2 uStack_2d6;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 auStack_2cc [23];
  undefined4 auStack_270 [23];
  undefined4 auStack_214 [16];
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined2 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined2 uStack_190;
  short sStack_18e;
  char cStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 auStack_14c [23];
  undefined4 auStack_f0 [23];
  undefined4 auStack_94 [16];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  char cStack_4;
  
  iStack_c30 = 1;
  iStack_c40 = -1;
  iStack_c50 = 0;
  if (0 < param_2) {
    piStack_c60 = param_1;
    while( true ) {
      cStack_4 = (char)piStack_c60[1];
      iVar1 = *piStack_c60;
      if (iVar1 == -1) break;
      if (cStack_4 == '\x03') {
        iVar4 = 0;
        iVar9 = 0;
        cStack_4 = 3;
        do {
          if (iVar4 != iVar1) {
            uVar6 = GameDb_GetRival((short)iVar4);
            memcpy(&uStack_c10,uVar6,0x17c);
            puVar8 = auStack_bcc;
            uStack_790 = uStack_c10;
            uStack_778 = uStack_bf8;
            puVar7 = auStack_74c;
            sStack_78e = sStack_c0e;
            uStack_774 = uStack_bf4;
            cStack_78c = cStack_c0c;
            iVar5 = 0x17;
            uStack_788 = uStack_c08;
            uStack_784 = uStack_c04;
            uStack_780 = uStack_c00;
            uStack_77c = uStack_bfc;
            uStack_770 = uStack_bf0;
            uStack_76c = uStack_bec;
            uStack_768 = uStack_be8;
            uStack_764 = uStack_be4;
            uStack_760 = uStack_be0;
            uStack_75c = uStack_bdc;
            uStack_758 = uStack_bd8;
            uStack_756 = uStack_bd6;
            uStack_754 = uStack_bd4;
            uStack_750 = uStack_bd0;
            do {
              iVar5 = iVar5 + -1;
              *puVar7 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (0 < iVar5);
            iVar5 = 0x17;
            puVar8 = auStack_b70;
            puVar7 = auStack_6f0;
            do {
              iVar5 = iVar5 + -1;
              *puVar7 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (0 < iVar5);
            iVar5 = 8;
            puVar8 = auStack_b14;
            puVar7 = auStack_694;
            do {
              iVar5 = iVar5 + -1;
              uVar2 = puVar8[1];
              *puVar7 = *puVar8;
              puVar7[1] = uVar2;
              puVar8 = puVar8 + 2;
              puVar7 = puVar7 + 2;
            } while (0 < iVar5);
            uStack_640 = uStack_ac0;
            uStack_650 = uStack_ad0;
            uStack_64c = uStack_acc;
            uStack_648 = uStack_ac8;
            uStack_644 = uStack_ac4;
            uStack_63c = uStack_abc;
            uStack_638 = uStack_ab8;
            uStack_634 = uStack_ab4;
            uStack_630 = uStack_ab0;
            uStack_62c = uStack_aac;
            uStack_654 = uStack_ad4;
            uStack_628 = uStack_aa8;
            uStack_624 = uStack_aa4;
            uStack_620 = uStack_aa0;
            uStack_190 = uStack_c10;
            uStack_61c = uStack_a9c;
            uStack_618 = uStack_a98;
            sStack_18e = sStack_c0e;
            cStack_18c = cStack_c0c;
            uStack_188 = uStack_c08;
            uStack_184 = uStack_c04;
            uStack_178 = uStack_bf8;
            puVar8 = auStack_74c;
            uStack_180 = uStack_c00;
            uStack_174 = uStack_bf4;
            uStack_17c = uStack_bfc;
            iVar5 = 0x17;
            uStack_170 = uStack_bf0;
            uStack_16c = uStack_bec;
            puVar7 = auStack_14c;
            uStack_168 = uStack_be8;
            uStack_164 = uStack_be4;
            uStack_160 = uStack_be0;
            uStack_15c = uStack_bdc;
            uStack_158 = uStack_bd8;
            uStack_156 = uStack_bd6;
            uStack_154 = uStack_bd4;
            uStack_150 = uStack_bd0;
            do {
              iVar5 = iVar5 + -1;
              *puVar7 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (0 < iVar5);
            iVar5 = 0x17;
            puVar8 = auStack_6f0;
            puVar7 = auStack_f0;
            do {
              iVar5 = iVar5 + -1;
              *puVar7 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (0 < iVar5);
            iVar5 = 8;
            puVar8 = auStack_694;
            puVar7 = auStack_94;
            do {
              iVar5 = iVar5 + -1;
              uVar2 = puVar8[1];
              *puVar7 = *puVar8;
              puVar7[1] = uVar2;
              puVar8 = puVar8 + 2;
              puVar7 = puVar7 + 2;
            } while (0 < iVar5);
            uStack_48 = uStack_ac8;
            uStack_44 = uStack_ac4;
            uStack_40 = uStack_ac0;
            uStack_3c = uStack_abc;
            uStack_50 = uStack_ad0;
            uStack_4c = uStack_acc;
            uStack_38 = uStack_ab8;
            uStack_34 = uStack_ab4;
            uStack_30 = uStack_ab0;
            uStack_54 = uStack_ad4;
            uStack_28 = uStack_aa8;
            uStack_24 = uStack_aa4;
            uStack_20 = uStack_aa0;
            uStack_1c = uStack_a9c;
            uStack_18 = uStack_a98;
            uStack_2c = uStack_aac;
            if (sStack_c0e == -1) break;
            if ((((cStack_c0c != '\v') && (cStack_c0c != '\f')) && (cStack_c0c != '\x05')) &&
               ((cStack_c0c != '\x06' && (*(short *)(*_g_Profiles + iVar9 + 0x3fc4) == 0)))) {
              iStack_c30 = 0;
              break;
            }
          }
          iVar4 = iVar4 + 1;
          iVar9 = iVar9 + 2;
        } while (iVar4 < 500);
      }
      else if (cStack_4 == '\x02') {
        uVar6 = GameDb_GetRival((short)iVar1);
        memcpy(&uStack_910,uVar6,0x17c);
        uVar3 = uStack_8fc;
        puVar8 = auStack_8cc;
        uStack_490 = uStack_910;
        uStack_478 = uStack_8f8;
        puVar7 = auStack_44c;
        uStack_48e = uStack_90e;
        uStack_474 = uStack_8f4;
        uStack_48c = uStack_90c;
        iVar4 = 0x17;
        uStack_488 = uStack_908;
        uStack_484 = uStack_904;
        uStack_480 = uStack_900;
        uStack_47c = uStack_8fc;
        uStack_470 = uStack_8f0;
        uStack_46c = uStack_8ec;
        uStack_468 = uStack_8e8;
        uStack_464 = uStack_8e4;
        uStack_460 = uStack_8e0;
        uStack_45c = uStack_8dc;
        uStack_458 = uStack_8d8;
        uStack_456 = uStack_8d6;
        uStack_454 = uStack_8d4;
        uStack_450 = uStack_8d0;
        do {
          iVar4 = iVar4 + -1;
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar4);
        iVar4 = 0x17;
        puVar8 = auStack_870;
        puVar7 = auStack_3f0;
        do {
          iVar4 = iVar4 + -1;
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar4);
        iVar4 = 8;
        puVar8 = auStack_814;
        puVar7 = auStack_394;
        do {
          iVar4 = iVar4 + -1;
          uVar2 = puVar8[1];
          *puVar7 = *puVar8;
          puVar7[1] = uVar2;
          puVar8 = puVar8 + 2;
          puVar7 = puVar7 + 2;
        } while (0 < iVar4);
        uStack_354 = uStack_7d4;
        uStack_350 = uStack_7d0;
        uStack_328 = uStack_7a8;
        uStack_34c = uStack_7cc;
        uStack_310 = uStack_910;
        uStack_324 = uStack_7a4;
        uStack_348 = uStack_7c8;
        uStack_320 = uStack_7a0;
        uStack_344 = uStack_7c4;
        uStack_31c = uStack_79c;
        uStack_340 = uStack_7c0;
        uStack_318 = uStack_798;
        uStack_33c = uStack_7bc;
        uStack_338 = uStack_7b8;
        uStack_30e = uStack_90e;
        uStack_334 = uStack_7b4;
        uStack_30c = uStack_90c;
        uStack_330 = uStack_7b0;
        uStack_308 = uStack_908;
        uStack_32c = uStack_7ac;
        uStack_304 = uStack_904;
        uStack_2f8 = uStack_8f8;
        puVar8 = auStack_44c;
        uStack_300 = uStack_900;
        uStack_2f4 = uStack_8f4;
        uStack_2fc = uStack_8fc;
        iVar4 = 0x17;
        uStack_2f0 = uStack_8f0;
        uStack_2ec = uStack_8ec;
        puVar7 = auStack_2cc;
        uStack_2e8 = uStack_8e8;
        uStack_2e4 = uStack_8e4;
        uStack_2e0 = uStack_8e0;
        uStack_2dc = uStack_8dc;
        uStack_2d8 = uStack_8d8;
        uStack_2d6 = uStack_8d6;
        uStack_2d4 = uStack_8d4;
        uStack_2d0 = uStack_8d0;
        do {
          iVar4 = iVar4 + -1;
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar4);
        iVar4 = 0x17;
        puVar8 = auStack_3f0;
        puVar7 = auStack_270;
        do {
          iVar4 = iVar4 + -1;
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar4);
        iVar4 = 8;
        puVar8 = auStack_394;
        puVar7 = auStack_214;
        do {
          iVar4 = iVar4 + -1;
          uVar2 = puVar8[1];
          *puVar7 = *puVar8;
          puVar7[1] = uVar2;
          puVar8 = puVar8 + 2;
          puVar7 = puVar7 + 2;
        } while (0 < iVar4);
        iVar4 = 0;
        iVar9 = 0;
        uStack_1d4 = uStack_7d4;
        uStack_1d0 = uStack_7d0;
        uStack_1a8 = uStack_7a8;
        uStack_1cc = uStack_7cc;
        uStack_1a4 = uStack_7a4;
        uStack_1c8 = uStack_7c8;
        uStack_1a0 = uStack_7a0;
        uStack_1c4 = uStack_7c4;
        uStack_19c = uStack_79c;
        uStack_1c0 = uStack_7c0;
        uStack_198 = uStack_798;
        uStack_1bc = uStack_7bc;
        uStack_1b8 = uStack_7b8;
        uStack_1b4 = uStack_7b4;
        uStack_1b0 = uStack_7b0;
        uStack_1ac = uStack_7ac;
        do {
          if (iVar4 != iVar1) {
            uVar6 = GameDb_GetRival((short)iVar4);
            memcpy(&uStack_a90,uVar6,0x17c);
            puVar8 = auStack_a4c;
            uStack_610 = uStack_a90;
            uStack_5f8 = uStack_a78;
            puVar7 = auStack_5cc;
            sStack_60e = sStack_a8e;
            uStack_5f4 = uStack_a74;
            cStack_60c = cStack_a8c;
            iVar5 = 0x17;
            uStack_608 = uStack_a88;
            uStack_604 = uStack_a84;
            uStack_600 = uStack_a80;
            uStack_5fc = uStack_a7c;
            uStack_5f0 = uStack_a70;
            uStack_5ec = uStack_a6c;
            uStack_5e8 = uStack_a68;
            uStack_5e4 = uStack_a64;
            uStack_5e0 = uStack_a60;
            uStack_5dc = uStack_a5c;
            uStack_5d8 = uStack_a58;
            uStack_5d6 = uStack_a56;
            uStack_5d4 = uStack_a54;
            uStack_5d0 = uStack_a50;
            do {
              iVar5 = iVar5 + -1;
              *puVar7 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (0 < iVar5);
            iVar5 = 0x17;
            puVar8 = auStack_9f0;
            puVar7 = auStack_570;
            do {
              iVar5 = iVar5 + -1;
              *puVar7 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (0 < iVar5);
            iVar5 = 8;
            puVar8 = auStack_994;
            puVar7 = auStack_514;
            do {
              iVar5 = iVar5 + -1;
              uVar2 = puVar8[1];
              *puVar7 = *puVar8;
              puVar7[1] = uVar2;
              puVar8 = puVar8 + 2;
              puVar7 = puVar7 + 2;
            } while (0 < iVar5);
            uStack_4c0 = uStack_940;
            uStack_4d0 = uStack_950;
            uStack_4cc = uStack_94c;
            uStack_4c8 = uStack_948;
            uStack_4c4 = uStack_944;
            uStack_4bc = uStack_93c;
            uStack_4b8 = uStack_938;
            uStack_4b4 = uStack_934;
            uStack_4b0 = uStack_930;
            uStack_4ac = uStack_92c;
            uStack_4d4 = uStack_954;
            uStack_4a8 = uStack_928;
            uStack_4a4 = uStack_924;
            uStack_4a0 = uStack_920;
            uStack_190 = uStack_a90;
            uStack_49c = uStack_91c;
            uStack_498 = uStack_918;
            sStack_18e = sStack_a8e;
            cStack_18c = cStack_a8c;
            uStack_188 = uStack_a88;
            uStack_184 = uStack_a84;
            uStack_178 = uStack_a78;
            puVar8 = auStack_5cc;
            uStack_180 = uStack_a80;
            uStack_174 = uStack_a74;
            uStack_17c = uStack_a7c;
            iVar5 = 0x17;
            uStack_170 = uStack_a70;
            uStack_16c = uStack_a6c;
            puVar7 = auStack_14c;
            uStack_168 = uStack_a68;
            uStack_164 = uStack_a64;
            uStack_160 = uStack_a60;
            uStack_15c = uStack_a5c;
            uStack_158 = uStack_a58;
            uStack_156 = uStack_a56;
            uStack_154 = uStack_a54;
            uStack_150 = uStack_a50;
            do {
              iVar5 = iVar5 + -1;
              *puVar7 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (0 < iVar5);
            iVar5 = 0x17;
            puVar8 = auStack_570;
            puVar7 = auStack_f0;
            do {
              iVar5 = iVar5 + -1;
              *puVar7 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (0 < iVar5);
            iVar5 = 8;
            puVar8 = auStack_514;
            puVar7 = auStack_94;
            do {
              iVar5 = iVar5 + -1;
              uVar2 = puVar8[1];
              *puVar7 = *puVar8;
              puVar7[1] = uVar2;
              puVar8 = puVar8 + 2;
              puVar7 = puVar7 + 2;
            } while (0 < iVar5);
            uStack_48 = uStack_948;
            uStack_44 = uStack_944;
            uStack_40 = uStack_940;
            uStack_3c = uStack_93c;
            uStack_50 = uStack_950;
            uStack_4c = uStack_94c;
            uStack_38 = uStack_938;
            uStack_34 = uStack_934;
            uStack_30 = uStack_930;
            uStack_54 = uStack_954;
            uStack_28 = uStack_928;
            uStack_24 = uStack_924;
            uStack_20 = uStack_920;
            uStack_1c = uStack_91c;
            uStack_18 = uStack_918;
            uStack_2c = uStack_92c;
            if (sStack_a8e == -1) break;
            if (((((uStack_a7c & 0x400) == 0) && (cStack_a8c != '\v')) &&
                ((cStack_a8c != '\f' &&
                 (((cStack_a8c != '\x05' && (cStack_a8c != '\x06')) &&
                  ((uStack_a7c & uVar3 & 0x1ff) != 0)))))) &&
               (*(short *)(*_g_Profiles + iVar9 + 0x3fc4) == 0)) {
              iStack_c30 = 0;
              break;
            }
          }
          iVar4 = iVar4 + 1;
          iVar9 = iVar9 + 2;
        } while (iVar4 < 500);
      }
      else if (cStack_4 == '\x01') {
        if (*(short *)(*_g_Profiles + iVar1 * 2 + 0x3fc4) < 1) {
          if (iStack_c40 == -1) {
            iStack_c40 = 0;
          }
        }
        else {
          iStack_c40 = 1;
        }
      }
      else if ((cStack_4 == '\0') && (*(short *)(*_g_Profiles + iVar1 * 2 + 0x3fc4) == 0)) {
        iStack_c30 = 0;
      }
      if ((iStack_c30 == 0) || (iStack_c40 == 1)) goto LAB_001b20e0;
      piStack_c60 = piStack_c60 + 2;
      iStack_c50 = iStack_c50 + 1;
      if ((int)param_2 <= iStack_c50) goto LAB_001b20e0;
    }
    if (iStack_c50 == 0) {
      iStack_c30 = 1;
    }
  }
LAB_001b20e0:
  if (iStack_c40 == 0) {
    iStack_c30 = 0;
  }
  return iStack_c30;
}

// 0x001b2130  size 0x468
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Rival_SetupBattle(int param_1,undefined8 param_2,char param_3)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  long lVar10;
  int iVar11;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint auStack_b0 [20];
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
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
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  lVar10 = 1;
  sVar9 = -1;
  psVar2 = (short *)GameDb_GetRival((short)param_1);
  uStack_10 = *(undefined4 *)(psVar2 + 0x10);
  uVar4 = *(uint *)(psVar2 + 10);
  iStack_c = *(int *)(psVar2 + 0x12);
  iVar6 = *(int *)(psVar2 + 0xb6);
  uStack_8 = *(undefined4 *)(psVar2 + 0x14);
  iVar11 = *(int *)(psVar2 + 0xb8);
  if ((param_3 == '\r') || (param_3 == (char)psVar2[2])) {
    if (*(byte *)(psVar2 + 2) < 0xd) {
                    /* WARNING: Switch is manually overridden */
      switch(*(byte *)(psVar2 + 2)) {
      case 1:
        sVar1 = *psVar2;
        if (*(short *)(sVar1 * 2 + *_g_Profiles + 0x4b7c) == 0) {
          iVar6 = 0;
          iVar11 = 0;
          uVar3 = GameDb_GetTeam();
          memcpy(auStack_b0,uVar3,0x44);
          uVar4 = auStack_b0[0];
          sVar9 = sVar1;
        }
        break;
      case 2:
        lVar10 = 1;
        break;
      case 3:
        if (*(int *)(iStack_c * 4 + *_g_Profiles + 0x2b14) != -1) {
          lVar10 = 0;
        }
        break;
      case 4:
        break;
      default:
        lVar10 = 1;
        break;
      case 7:
        if (((char)uStack_10 == '\b') && (*(int *)(iStack_c * 4 + *_g_Profiles + 0x2a74) != -1)) {
          lVar10 = 0;
        }
      case 0:
        if ((*psVar2 != -1) && (*(short *)(*psVar2 * 2 + *_g_Profiles + 0x4b7c) == 0)) {
          lVar10 = 0;
        }
        break;
      case 8:
        if (0 < *(short *)(param_1 * 2 + *_g_Profiles + 0x3fc4)) {
          lVar10 = 0;
        }
        break;
      case 9:
        if (0 < *(short *)(param_1 * 2 + *_g_Profiles + 0x3fc4)) {
          lVar10 = 0;
        }
        break;
      case 10:
        if (0 < *(short *)(param_1 * 2 + *_g_Profiles + 0x3fc4)) {
          lVar10 = 0;
        }
        break;
      case 0xb:
        if (*(char *)((int)psVar2[1] + *_g_Profiles + 0xd82c) != '\0') {
          lVar10 = 0;
        }
        break;
      case 0xc:
        lVar10 = 0;
      }
    }
  }
  else {
    lVar10 = 0;
  }
  if (lVar10 == 1) {
    if ((uVar4 & 0x200) == 0) {
      lVar10 = Rival_CheckAppearCondition(uVar4,param_2);
    }
    else if (*(int *)(param_1 * 4 + *_g_Profiles + 0x37b0) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = Rival_CheckAppearCondition(uVar4,param_2);
    }
    if (lVar10 == 1) {
      if (sVar9 == -1) {
        lVar10 = Rival_SelectOpponents(psVar2 + 0xa0,5);
      }
      else {
        uVar3 = GameDb_GetTeam(sVar9);
        memcpy(&uStack_100,uVar3,0x44);
        uStack_4c = uStack_ec;
        uStack_44 = uStack_e4;
        uStack_40 = uStack_e0;
        uStack_3c = uStack_dc;
        uStack_38 = uStack_d8;
        uStack_60 = uStack_100;
        uStack_34 = uStack_d4;
        uStack_5c = uStack_fc;
        uStack_58 = uStack_f8;
        uStack_54 = uStack_f4;
        uStack_50 = uStack_f0;
        uStack_48 = uStack_e8;
        uStack_30 = uStack_d0;
        uStack_2c = uStack_cc;
        uStack_28 = uStack_c8;
        uStack_24 = uStack_c4;
        uStack_20 = uStack_c0;
        lVar10 = Rival_SelectOpponents(&uStack_44,5);
      }
    }
  }
  if ((lVar10 == 1) && (iVar6 != 0)) {
    lVar10 = 0;
    iVar8 = 0;
    iVar7 = 0;
    iVar5 = *_g_Profiles;
    do {
      if (*(int *)(iVar5 + 0x2b14) != -1) {
        iVar8 = iVar8 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar7 < 0x28);
    if (iVar6 <= iVar8) {
      lVar10 = 1;
    }
  }
  if ((lVar10 == 1) && (iVar11 != 0)) {
    lVar10 = 0;
    iVar7 = 0;
    iVar5 = 0;
    iVar6 = *_g_Profiles;
    do {
      if (*(int *)(iVar6 + 0x2a74) != -1) {
        iVar7 = iVar7 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < 0x14);
    if (iVar11 <= iVar7) {
      lVar10 = 1;
    }
  }
  return lVar10;
}

// 0x001b25a0  size 0x158
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 Rival_IsAvailable(ulong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined1 uVar5;
  
  iVar1 = *_g_Profiles;
  if (param_1 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if (((param_1 & 2) != 0) && (*(int *)(iVar1 + 0x2708) != 0)) {
      bVar3 = true;
    }
    if (((param_1 & 4) != 0) && (*(int *)(iVar1 + 0x270c) != 0)) {
      bVar3 = true;
    }
    if (((param_1 & 8) != 0) && (*(int *)(iVar1 + 10000) != 0)) {
      bVar3 = true;
    }
    if (((param_1 & 0x10) != 0) && (*(int *)(iVar1 + 0x2714) != 0)) {
      bVar3 = true;
    }
    if (((param_1 & 0x20) != 0) && (*(int *)(iVar1 + 0x2718) != 0)) {
      bVar3 = true;
    }
    if (((param_1 & 0x40) != 0) && (*(int *)(iVar1 + 0x271c) != 0)) {
      bVar3 = true;
    }
    if (((param_1 & 0x100) != 0) && (*(int *)(iVar1 + 0x2724) != 0)) {
      bVar3 = true;
    }
    if (((param_1 & 0x80) != 0) && (*(int *)(iVar1 + 0x2720) != 0)) {
      bVar3 = true;
    }
  }
  bVar2 = false;
  if (bVar3) {
    lVar4 = Rival_SelectOpponents(param_3,param_4);
    bVar2 = lVar4 != 0;
  }
  uVar5 = 0;
  if (bVar2) {
    if (*(int *)(*_g_Profiles + 0x2734) < param_2) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}

// 0x001b2700  size 0x174
long Rival_CheckWeatherCondition(ulong param_1,byte param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_1 & 1) == 0) {
    if (param_2 < 8) {
                    /* WARNING: Switch is manually overridden */
      switch(param_2) {
      case 0:
        if ((param_1 & 2) != 0) {
          lVar2 = 1;
        }
        break;
      case 1:
        if ((param_1 & 4) != 0) {
          lVar2 = 1;
        }
        break;
      case 2:
        if ((param_1 & 8) != 0) {
          lVar2 = 1;
        }
        break;
      case 3:
        if ((param_1 & 0x10) != 0) {
          lVar2 = 1;
        }
        break;
      case 4:
        if ((param_1 & 0x20) != 0) {
          lVar2 = 1;
        }
        break;
      case 5:
        if ((param_1 & 0x40) != 0) {
          lVar2 = 1;
        }
        break;
      case 6:
        if ((param_1 & 0x80) != 0) {
          lVar2 = 1;
        }
        break;
      case 7:
        if ((param_1 & 0x100) != 0) {
          lVar2 = 1;
        }
      }
    }
  }
  else {
    lVar2 = 1;
  }
  if (lVar2 == 1) {
    lVar2 = 0;
    cVar1 = Race_GetWeather();
    if (cVar1 == '\x01') {
      if ((param_1 & 0x40000000) != 0) {
        lVar2 = 1;
      }
    }
    else if ((cVar1 == '\0') && ((param_1 & 0x20000000) != 0)) {
      lVar2 = 1;
    }
  }
  return lVar2;
}

// 0x001b2880  size 0x50c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Rival_CheckAppearCondition(ulong param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  bVar10 = false;
  iVar1 = *(int *)(*_g_Profiles + 0x2734);
  uVar9 = (iVar1 + -1) / 0x1c + 1;
  if (999 < (int)uVar9) {
    uVar9 = 999;
  }
  iVar5 = iVar1 % 0x1c;
  if (iVar5 == 0) {
    iVar5 = 0x1c;
  }
  iVar2 = iVar5 + -1 >> 0x1f;
  iVar5 = (iVar5 + -1) / 7 + iVar2;
  iVar8 = iVar5 - iVar2;
  if ((param_1 & 1) == 0) {
    if (param_2 < 8) {
                    /* WARNING: Switch is manually overridden */
      switch(param_2) {
      case 0:
        if ((param_1 & 2) != 0) {
          bVar10 = true;
        }
        break;
      case 1:
        if ((param_1 & 4) != 0) {
          bVar10 = true;
        }
        break;
      case 2:
        if ((param_1 & 8) != 0) {
          bVar10 = true;
        }
        break;
      case 3:
        if ((param_1 & 0x10) != 0) {
          bVar10 = true;
        }
        break;
      case 4:
        if ((param_1 & 0x20) != 0) {
          bVar10 = true;
        }
        break;
      case 5:
        if ((param_1 & 0x40) != 0) {
          bVar10 = true;
        }
        break;
      case 6:
        if ((param_1 & 0x80) != 0) {
          bVar10 = true;
        }
        break;
      case 7:
        if ((param_1 & 0x100) != 0) {
          bVar10 = true;
        }
      }
    }
  }
  else {
    bVar10 = true;
  }
  if (bVar10 == true) {
    bVar3 = Race_GetTimeOfDay();
    bVar10 = false;
    if (bVar3 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar3) {
      case 0:
        if ((param_1 & 0x8000000) != 0) {
          bVar10 = true;
        }
        break;
      default:
        if ((param_1 & 0x10000000) != 0) {
          bVar10 = true;
        }
        break;
      case 3:
        if ((param_1 & 0x2000000) != 0) {
          bVar10 = true;
        }
        break;
      case 4:
        if ((param_1 & 0x4000000) != 0) {
          bVar10 = true;
        }
      }
    }
  }
  if (bVar10 == true) {
    bVar10 = false;
    if ((param_1 & 0x1000000) == 0) {
      if ((param_1 & 0x800000) == 0) {
        if ((param_1 & 0x400000) == 0) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
          if (((param_1 & 0x40000) != 0) && (iVar5 == iVar2)) {
            bVar10 = true;
          }
          if (((param_1 & 0x80000) != 0) && (iVar8 == 1)) {
            bVar10 = true;
          }
          if (((param_1 & 0x100000) != 0) && (iVar8 == 2)) {
            bVar10 = true;
          }
          if (((param_1 & 0x200000) != 0) && (iVar8 == 3)) {
            bVar10 = true;
          }
        }
      }
      else {
        uVar6 = uVar9 & 1;
        if (((int)uVar9 < 0) && (uVar6 != 0)) {
          uVar6 = uVar6 - 2;
        }
        if (uVar6 == 0) {
          bVar10 = false;
          if (((param_1 & 0x40000) != 0) && (iVar5 == iVar2)) {
            bVar10 = true;
          }
          if (((param_1 & 0x80000) != 0) && (iVar8 == 1)) {
            bVar10 = true;
          }
          if (((param_1 & 0x100000) != 0) && (iVar8 == 2)) {
            bVar10 = true;
          }
          if (((param_1 & 0x200000) != 0) && (iVar8 == 3)) {
            bVar10 = true;
          }
        }
      }
    }
    else if ((int)uVar9 % 3 == 0) {
      bVar10 = false;
      if (((param_1 & 0x40000) != 0) && (iVar5 == iVar2)) {
        bVar10 = true;
      }
      if (((param_1 & 0x80000) != 0) && (iVar8 == 1)) {
        bVar10 = true;
      }
      if (((param_1 & 0x100000) != 0) && (iVar8 == 2)) {
        bVar10 = true;
      }
      if (((param_1 & 0x200000) != 0) && (iVar8 == 3)) {
        bVar10 = true;
      }
    }
  }
  if (bVar10 == true) {
    lVar7 = Rival_CheckTimeCondition(param_1,iVar1 % 7);
    bVar10 = lVar7 != 0;
  }
  if (bVar10 == true) {
    bVar10 = false;
    cVar4 = Race_GetWeather();
    if (cVar4 == '\x01') {
      if ((param_1 & 0x40000000) != 0) {
        bVar10 = true;
      }
    }
    else if ((cVar4 == '\0') && ((param_1 & 0x20000000) != 0)) {
      bVar10 = true;
    }
  }
  return bVar10;
}

// 0x001b2d90  size 0xd0
undefined8 Rival_CheckTimeCondition(ulong param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((param_1 & 0x20000) != 0) && (param_2 == 0)) {
    uVar1 = 1;
  }
  if (((param_1 & 0x800) != 0) && (param_2 == 1)) {
    uVar1 = 1;
  }
  if (((param_1 & 0x1000) != 0) && (param_2 == 2)) {
    uVar1 = 1;
  }
  if (((param_1 & 0x2000) != 0) && (param_2 == 3)) {
    uVar1 = 1;
  }
  if (((param_1 & 0x4000) != 0) && (param_2 == 4)) {
    uVar1 = 1;
  }
  if (((param_1 & 0x8000) != 0) && (param_2 == 5)) {
    uVar1 = 1;
  }
  if (((param_1 & 0x10000) != 0) && (param_2 == 6)) {
    uVar1 = 1;
  }
  return uVar1;
}

// 0x001b2e60  size 0x8
int Career_GetRivalTable(int param_1)

{
  return param_1 + 0x2bfc;
}

// 0x001b2e70  size 0x38
void Career_CopyFlags(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(char *)(param_1 + iVar1 + 0x2bfc) = *(char *)(param_2 + iVar1);
    if (*(char *)(param_2 + iVar1) == '\0') {
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xd);
  return;
}

// 0x001b2eb0  size 0x210
void Career_Reset(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  iVar2 = 0;
  *param_1 = 0;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  do {
    cVar1 = *(char *)((int)param_1 + iVar2 + 0x4d0);
    if (cVar1 == '\0') break;
    iVar3 = iVar3 + cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xd);
  iVar2 = 0;
  param_1[3] = (iVar3 % 5) * 100 + 0x708;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  *(undefined1 *)((int)param_1 + 0x13) = 5;
  *(undefined1 *)((int)param_1 + 0x12) = *(undefined1 *)((int)param_1 + 0x11);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)((int)param_1 + 0x13);
  param_1[6] = 0;
  *(undefined1 *)((int)param_1 + 7) = 1;
  puVar4 = param_1;
  do {
    puVar4[9] = 0;
    iVar2 = iVar2 + 8;
    puVar4[10] = 0xffffffff;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0xffffffff;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0xffffffff;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0xffffffff;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0xffffffff;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0xffffffff;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0xffffffff;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0xffffffff;
    puVar4 = puVar4 + 0x10;
  } while (iVar2 < 0x5c);
  param_1[iVar2 * 2 + 9] = 0;
  param_1[iVar2 * 2 + 10] = 0xffffffff;
  param_1[iVar2 * 2 + 0xb] = 0;
  param_1[iVar2 * 2 + 0xc] = 0xffffffff;
  param_1[iVar2 * 2 + 0xd] = 0;
  param_1[iVar2 * 2 + 0xe] = 0xffffffff;
  param_1[iVar2 * 2 + 0xf] = 0;
  param_1[iVar2 * 2 + 0x10] = 0xffffffff;
  param_1[0xd1] = 0;
  Career_ClearStats(param_1 + 0x122);
  param_1[8] = 0;
  iVar2 = 0;
  puVar4 = param_1;
  do {
    puVar4[0xd2] = 0xffffffff;
    iVar2 = iVar2 + 5;
    puVar4[0xe6] = 0;
    puVar4[0xd3] = 0xffffffff;
    puVar4[0xe7] = 0;
    puVar4[0xd4] = 0xffffffff;
    puVar4[0xe8] = 0;
    puVar4[0xd5] = 0xffffffff;
    puVar4[0xe9] = 0;
    puVar4[0xd6] = 0xffffffff;
    puVar4[0xea] = 0;
    puVar4 = puVar4 + 5;
  } while (iVar2 < 0x14);
  iVar2 = 0;
  puVar4 = param_1;
  do {
    puVar4[0xfa] = 0xffffffff;
    iVar2 = iVar2 + 8;
    puVar4[0xfb] = 0xffffffff;
    puVar4[0xfc] = 0xffffffff;
    puVar4[0xfd] = 0xffffffff;
    puVar4[0xfe] = 0xffffffff;
    puVar4[0xff] = 0xffffffff;
    puVar4[0x100] = 0xffffffff;
    puVar4[0x101] = 0xffffffff;
    puVar4 = puVar4 + 8;
  } while (iVar2 < 0x28);
  iVar2 = 0;
  puVar4 = param_1;
  do {
    iVar3 = iVar2;
    puVar4[0x138] = 0;
    iVar2 = iVar3 + 8;
    puVar4[0x139] = 0;
    puVar4[0x13a] = 0;
    puVar4[0x13b] = 0;
    puVar4[0x13c] = 0;
    puVar4[0x13d] = 0;
    puVar4[0x13e] = 0;
    puVar4[0x13f] = 0;
    puVar4 = puVar4 + 8;
  } while (iVar2 < 0xb1);
  param_1[iVar3 + 0x140] = 0;
  return;
}

// 0x001b30c0  size 0x4c
void Career_ClearStats(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

// 0x001b3110  size 0xc
undefined1 Career_GetFlag(int param_1,int param_2)

{
  return *(undefined1 *)(param_1 + param_2);
}

// 0x001b3120  size 0x300
void Career_UnlockCar(int param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iStack_8;
  int iStack_4;
  
  iStack_8 = (int)param_2;
  iStack_4 = (int)((ulong)param_2 >> 0x20);
  uVar9 = (ulong)iStack_4;
  if (iStack_8 == 3) {
    sVar6 = PartDb_GetInfo((short)((ulong)param_2 >> 0x20));
    lVar7 = (long)sVar6;
    if (lVar7 <= (long)uVar9) {
      iVar8 = iStack_4 - sVar6;
      if (8 < (int)(iVar8 + 1U)) {
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = false;
        bVar5 = false;
        if ((lVar7 <= (long)uVar9) && ((long)uVar9 < 0x7fffffff)) {
          bVar5 = true;
        }
        if ((bVar5) && (lVar7 < 0x7fffffff)) {
          bVar1 = true;
        }
        if ((bVar1) && (lVar7 != -0x80000000)) {
          bVar2 = true;
        }
        if (bVar2) {
          bVar1 = true;
          if (((uVar9 & 0xffffffff80000000) == ((long)-(int)sVar6 & 0xffffffff80000000U)) &&
             ((uVar9 & 0xffffffff80000000) != ((long)iVar8 & 0xffffffff80000000U))) {
            bVar1 = false;
          }
          if (bVar1) {
            bVar3 = true;
          }
        }
        if (bVar3) {
          bVar1 = true;
          if ((((long)iVar8 & 0xffffffff80000000U) == 0) && ((iVar8 + 1U & 0x80000000) != 0)) {
            bVar1 = false;
          }
          if (bVar1) {
            bVar4 = true;
          }
        }
        if (bVar4) {
          do {
            sVar6 = (short)lVar7;
            *(undefined4 *)(param_1 + sVar6 * 4 + 0x16e8) = 1;
            *(undefined4 *)(param_1 + (short)(sVar6 + 1) * 4 + 0x16e8) = 1;
            *(undefined4 *)(param_1 + (short)(sVar6 + 2) * 4 + 0x16e8) = 1;
            *(undefined4 *)(param_1 + (short)(sVar6 + 3) * 4 + 0x16e8) = 1;
            *(undefined4 *)(param_1 + (short)(sVar6 + 4) * 4 + 0x16e8) = 1;
            *(undefined4 *)(param_1 + (short)(sVar6 + 5) * 4 + 0x16e8) = 1;
            lVar7 = (long)((int)lVar7 + 8);
            *(undefined4 *)(param_1 + (short)(sVar6 + 6) * 4 + 0x16e8) = 1;
            *(undefined4 *)(param_1 + (short)(sVar6 + 7) * 4 + 0x16e8) = 1;
          } while (lVar7 <= iStack_4 + -8);
        }
      }
      for (; lVar7 <= (long)uVar9; lVar7 = (long)((int)lVar7 + 1)) {
        *(undefined4 *)(param_1 + (short)lVar7 * 4 + 0x16e8) = 1;
      }
    }
  }
  else if (iStack_8 == 2) {
    *(undefined1 *)(iStack_4 + param_1 + 0xd82c) = 1;
  }
  else if (iStack_8 == 1) {
    param_1 = iStack_4 * 4 + param_1;
    *(undefined4 *)(param_1 + 0x1c70) = 1;
    *(undefined4 *)(param_1 + 0x20f0) = 1;
  }
  else if (iStack_8 == 0) {
    *(undefined4 *)(iStack_4 * 4 + param_1 + 0x2708) = 1;
    if (*(int *)(param_1 + 0x2a70) < 100) {
      *(undefined4 *)(*(int *)(param_1 + 0x2a70) * 8 + param_1 + 0x2750) = 0x40;
      *(int *)(*(int *)(param_1 + 0x2a70) * 8 + param_1 + 0x2754) = iStack_4;
      *(int *)(param_1 + 0x2a70) = *(int *)(param_1 + 0x2a70) + 1;
    }
  }
  return;
}

// 0x001b3420  size 0xec
int Career_FindRival(int param_1,long param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = -1;
  if (param_2 == 0) {
    piVar5 = (int *)(param_1 + param_3 * 0x28 + 0x9994);
  }
  else {
    piVar5 = (int *)(param_1 + param_3 * 0x28 + 0xb8d4);
  }
  iVar2 = *piVar5;
  iVar4 = 0;
  iVar3 = GameDb_GetTeamCount();
  if (iVar2 < iVar3) {
    iVar4 = GameDb_GetTeamRecord(iVar2);
  }
  cVar1 = (char)piVar5[2];
  if ((((cVar1 != '\x03') && (cVar1 != '\x04')) && (cVar1 != '\x05')) &&
     ((*(undefined1 *)(piVar5 + 2) = 3, *(int *)(iVar4 + 0x24) != -1 &&
      (*(int *)(iVar4 + 0x28) != -1)))) {
    iVar6 = *(int *)(iVar4 + 0x28);
  }
  return iVar6;
}

// 0x001b3510  size 0x11c
/* < 199 rivals, 0x28 bytes each */

void Career_SetRivalResult(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 199) {
    iVar1 = param_1 + param_2 * 0x28;
    do {
      param_2 = param_2 + 1;
      *(undefined4 *)(iVar1 + 0x9994) = *(undefined4 *)(iVar1 + 0x99bc);
      *(undefined4 *)(iVar1 + 0x9998) = *(undefined4 *)(iVar1 + 0x99c0);
      *(undefined1 *)(iVar1 + 0x999c) = *(undefined1 *)(iVar1 + 0x99c4);
      *(undefined4 *)(iVar1 + 0x99a0) = *(undefined4 *)(iVar1 + 0x99c8);
      *(undefined4 *)(iVar1 + 0x99a4) = *(undefined4 *)(iVar1 + 0x99cc);
      *(undefined4 *)(iVar1 + 0x99a8) = *(undefined4 *)(iVar1 + 0x99d0);
      *(undefined4 *)(iVar1 + 0x99ac) = *(undefined4 *)(iVar1 + 0x99d4);
      *(undefined4 *)(iVar1 + 0x99b0) = *(undefined4 *)(iVar1 + 0x99d8);
      *(undefined4 *)(iVar1 + 0x99b4) = *(undefined4 *)(iVar1 + 0x99dc);
      *(undefined4 *)(iVar1 + 0x99b8) = *(undefined4 *)(iVar1 + 0x99e0);
      iVar1 = iVar1 + 0x28;
    } while (param_2 < 199);
  }
  *(undefined4 *)(param_1 + 0xb8ac) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb8b4) = 0;
  *(undefined4 *)(param_1 + 0xb8bc) = 10;
  *(undefined4 *)(param_1 + 0xb8c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8c4) = 10;
  *(undefined4 *)(param_1 + 0xb8c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8cc) = 10;
  *(undefined4 *)(param_1 + 0xb8d0) = 0xffffffff;
  return;
}

// 0x001b3630  size 0x70
void Career_MarkRivalSeen(int param_1,long param_2,int param_3)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = (char *)(param_3 * 0x28 + param_1 + 0x999c);
    if (*pcVar1 == '\x01') {
      *pcVar1 = '\x02';
    }
  }
  else {
    pcVar1 = (char *)(param_3 * 0x28 + param_1 + 0xb8dc);
    if (*pcVar1 == '\x01') {
      *pcVar1 = '\x02';
    }
  }
  return;
}

// 0x001b36a0  size 0x1c8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Career_FindTeam(int param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iStack_10;
  
  piVar7 = (int *)0x0;
  iStack_10 = -1;
  lVar8 = GameDb_GetTeamMemberCount(param_2);
  if (param_3 < lVar8) {
    piVar7 = (int *)GameDb_GetTeamMember(param_2,param_3);
  }
  iVar9 = (int)param_2 * 0x644;
  iVar4 = iVar9 + param_1 + 0x5320;
  pcVar5 = (char *)(iVar4 + (int)param_3 * 8);
  cVar1 = *pcVar5;
  if (((cVar1 != '\x03') && (cVar1 != '\x04')) && (cVar1 != '\x05')) {
    iVar2 = piVar7[4];
    if (iVar2 != -1) {
      iVar3 = *piVar7;
      iVar10 = 0;
      while( true ) {
        lVar8 = 0;
        iVar6 = GameDb_GetTeamMemberCount(param_2);
        if (iVar10 < iVar6) {
          lVar8 = GameDb_GetTeamMember(param_2,iVar10);
        }
        iVar6 = -1;
        if ((lVar8 == 0) ||
           ((*(int *)lVar8 == iVar3 && (iVar6 = iVar10, ((int *)lVar8)[1] == iVar2)))) break;
        iVar10 = iVar10 + 1;
      }
      iVar9 = iVar9 + param_1;
      *pcVar5 = '\x03';
      *(undefined1 *)(iVar4 + iVar6 * 8) = 2;
      *(int *)(iVar6 * 8 + iVar9 + 0x531c) =
           *(int *)(iVar9 + 0x595c) + *(int *)(*_g_Profiles + 0x2734) * 100;
      *(int *)(iVar9 + 0x595c) = *(int *)(iVar9 + 0x595c) + 1;
      if (piVar7[5] != -1) {
        iStack_10 = piVar7[5];
      }
    }
  }
  return iStack_10;
}

// 0x001b3870  size 0xac
void Career_SetTeamDefeated(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar1 = GameDb_GetTeamMemberCount(param_2);
  if (param_3 < lVar1) {
    lVar3 = GameDb_GetTeamMember(param_2,param_3);
  }
  if ((lVar3 != 0) &&
     (iVar2 = (int)param_3 * 8 + (int)param_2 * 0x644 + param_1, *(char *)(iVar2 + 0x5320) == '\x01'
     )) {
    *(undefined1 *)(iVar2 + 0x5320) = 2;
  }
  return;
}

// 0x001b3920  size 0x16c
/* 10 callers */

int Career_GetRivalIndex(int param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  byte bStack_28;
  
  iVar4 = -1;
  if (param_2 == 0) {
    param_1 = param_3 * 0x28 + param_1;
    iVar1 = *(int *)(param_1 + 0x9994);
    bStack_28 = *(byte *)(param_1 + 0x999c);
  }
  else {
    param_1 = param_3 * 0x28 + param_1;
    iVar1 = *(int *)(param_1 + 0xb8d4);
    bStack_28 = *(byte *)(param_1 + 0xb8dc);
  }
  lVar3 = 0;
  iVar2 = GameDb_GetTeamCount();
  if (iVar1 < iVar2) {
    lVar3 = GameDb_GetTeamRecord(iVar1);
  }
  if (((lVar3 != 0) && (bStack_28 - 1 < 2)) && (iVar1 = *(int *)((int)lVar3 + 0x24), iVar1 != -1)) {
    iVar4 = iVar1;
  }
  return iVar4;
}

// 0x001b3a90  size 0xc0
undefined4 Career_IsTeamDefeated(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  lVar2 = 0;
  lVar1 = GameDb_GetTeamMemberCount(param_2);
  if (param_3 < lVar1) {
    lVar2 = GameDb_GetTeamMember(param_2,param_3);
  }
  if (((lVar2 != 0) &&
      (*(byte *)((int)param_3 * 8 + (int)param_2 * 0x644 + param_1 + 0x5320) - 1 < 2)) &&
     (*(int *)((int)lVar2 + 0x10) != -1)) {
    uVar3 = 1;
  }
  return uVar3;
}

// 0x001b3b50  size 0x28
/* value / 100 */

int Career_GetLevel(int *param_1)

{
  return *param_1 / 100;
}

// 0x001b3b80  size 0x7c
void Career_SetAllFlags(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if (param_2 != -1) {
      iVar4 = param_2;
    }
    bVar1 = false;
    iVar3 = 0;
    iVar2 = param_1 + iVar4 * 0x644;
    do {
      if (*(char *)(iVar2 + 0x5320) == '\x01') {
        bVar1 = true;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < 200);
    if (((param_2 != -1) || (bVar1)) || (iVar4 = iVar4 + 1, 8 < iVar4)) {
      return;
    }
  } while( true );
}

// 0x001b3c00  size 0x74
undefined4 Career_CountFlags(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  while (((*(char *)(iVar1 + 0x8b84) == '\0' || (*(char *)(iVar1 + 0x8b84) == '\x04')) ||
         (0 < *(int *)(param_1 + 0x2734) - *(int *)(iVar1 + 0x8b80)))) {
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0xc;
    if (199 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 0x001b3c80  size 0xe8
int Career_CountDefeatedRivals(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if (*(int *)(iVar2 + 0x9994) == -1) break;
    if ((*(char *)(iVar2 + 0x999c) == '\x01') &&
       (*(int *)(iVar2 + 0x9998) == *(int *)(param_1 + 0x2734))) {
      iVar1 = 1;
      break;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x28;
  } while (iVar3 < 200);
  if (iVar1 == 0) {
    iVar3 = 0;
    iVar2 = param_1;
    do {
      if (*(int *)(iVar2 + 0xb8d4) == -1) {
        return 0;
      }
      if ((*(char *)(iVar2 + 0xb8dc) == '\x01') &&
         (*(int *)(iVar2 + 0xb8d8) == *(int *)(param_1 + 0x2734))) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < 200);
  }
  return iVar1;
}

// 0x001b3d70  size 0xa0
int Career_CountDefeatedTeams(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if (*(int *)(iVar2 + 0x9994) == -1) break;
    if (*(char *)(iVar2 + 0x999c) == '\x01') {
      iVar1 = 1;
      break;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x28;
  } while (iVar3 < 200);
  if (iVar1 == 0) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + 0xb8d4) == -1) {
        return 0;
      }
      if (*(char *)(param_1 + 0xb8dc) == '\x01') {
        return 1;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 0x28;
    } while (iVar2 < 200);
  }
  return iVar1;
}

// 0x001b3e10  size 0x1cc
void Career_UpdateRivalStatus(int param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uStack_28;
  
  uVar6 = *param_3;
  uVar8 = param_3[1];
  uVar4 = param_3[3];
  uVar10 = param_3[4];
  uVar11 = param_3[5];
  uVar7 = param_3[6];
  uVar9 = param_3[7];
  uVar3 = param_3[8];
  uVar5 = param_3[9];
  uStack_28 = (undefined1)param_3[2];
  if (param_2 == 0) {
    iVar2 = 199;
    iVar1 = param_1 + 0x1f18;
    do {
      iVar2 = iVar2 + -1;
      *(undefined4 *)(iVar1 + 0x4678) = *(undefined4 *)(iVar1 + 18000);
      *(undefined4 *)(iVar1 + 0x467c) = *(undefined4 *)(iVar1 + 0x4654);
      *(undefined1 *)(iVar1 + 0x4680) = *(undefined1 *)(iVar1 + 0x4658);
      *(undefined4 *)(iVar1 + 0x4684) = *(undefined4 *)(iVar1 + 0x465c);
      *(undefined4 *)(iVar1 + 0x4688) = *(undefined4 *)(iVar1 + 0x4660);
      *(undefined4 *)(iVar1 + 0x468c) = *(undefined4 *)(iVar1 + 0x4664);
      *(undefined4 *)(iVar1 + 0x4690) = *(undefined4 *)(iVar1 + 0x4668);
      *(undefined4 *)(iVar1 + 0x4694) = *(undefined4 *)(iVar1 + 0x466c);
      *(undefined4 *)(iVar1 + 0x4698) = *(undefined4 *)(iVar1 + 0x4670);
      *(undefined4 *)(iVar1 + 0x469c) = *(undefined4 *)(iVar1 + 0x4674);
      iVar1 = iVar1 + -0x28;
    } while (0 < iVar2);
    *(undefined4 *)(param_1 + 0x4678) = uVar6;
    *(undefined4 *)(param_1 + 0x467c) = uVar8;
    *(undefined1 *)(param_1 + 0x4680) = uStack_28;
    *(undefined4 *)(param_1 + 0x4684) = uVar4;
    *(undefined4 *)(param_1 + 0x4688) = uVar10;
    *(undefined4 *)(param_1 + 0x468c) = uVar11;
    *(undefined4 *)(param_1 + 0x4690) = uVar7;
    *(undefined4 *)(param_1 + 0x4694) = uVar9;
    *(undefined4 *)(param_1 + 0x4698) = uVar3;
    *(undefined4 *)(param_1 + 0x469c) = uVar5;
  }
  else {
    iVar2 = 199;
    iVar1 = param_1 + 0x1f18;
    do {
      iVar2 = iVar2 + -1;
      *(undefined4 *)(iVar1 + 0x65b8) = *(undefined4 *)(iVar1 + 26000);
      *(undefined4 *)(iVar1 + 0x65bc) = *(undefined4 *)(iVar1 + 0x6594);
      *(undefined1 *)(iVar1 + 0x65c0) = *(undefined1 *)(iVar1 + 0x6598);
      *(undefined4 *)(iVar1 + 0x65c4) = *(undefined4 *)(iVar1 + 0x659c);
      *(undefined4 *)(iVar1 + 0x65c8) = *(undefined4 *)(iVar1 + 0x65a0);
      *(undefined4 *)(iVar1 + 0x65cc) = *(undefined4 *)(iVar1 + 0x65a4);
      *(undefined4 *)(iVar1 + 0x65d0) = *(undefined4 *)(iVar1 + 0x65a8);
      *(undefined4 *)(iVar1 + 0x65d4) = *(undefined4 *)(iVar1 + 0x65ac);
      *(undefined4 *)(iVar1 + 0x65d8) = *(undefined4 *)(iVar1 + 0x65b0);
      *(undefined4 *)(iVar1 + 0x65dc) = *(undefined4 *)(iVar1 + 0x65b4);
      iVar1 = iVar1 + -0x28;
    } while (0 < iVar2);
    *(undefined4 *)(param_1 + 0x65b8) = uVar6;
    *(undefined4 *)(param_1 + 0x65bc) = uVar8;
    *(undefined1 *)(param_1 + 0x65c0) = uStack_28;
    *(undefined4 *)(param_1 + 0x65c4) = uVar4;
    *(undefined4 *)(param_1 + 0x65c8) = uVar10;
    *(undefined4 *)(param_1 + 0x65cc) = uVar11;
    *(undefined4 *)(param_1 + 0x65d0) = uVar7;
    *(undefined4 *)(param_1 + 0x65d4) = uVar9;
    *(undefined4 *)(param_1 + 0x65d8) = uVar3;
    *(undefined4 *)(param_1 + 0x65dc) = uVar5;
  }
  return;
}

// 0x001b3fe0  size 0x288
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* reads the real-time clock */

void Career_SpawnNightRivals(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  short sVar12;
  char acStack_8 [2];
  byte bStack_6;
  byte bStack_5;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  File_ReadClock(acStack_8);
  if (acStack_8[0] == '\0') {
    cVar5 = (bStack_2 & 0xf) + (char)((int)(uint)bStack_2 >> 4) * '\n';
    sVar12 = (bStack_1 & 0xf) + (short)((int)(uint)bStack_1 >> 4) * 10 + 2000;
    cVar10 = (bStack_5 & 0xf) + (char)((int)(uint)bStack_5 >> 4) * '\n';
    cVar9 = (bStack_6 & 0xf) + (char)((int)(uint)bStack_6 >> 4) * '\n';
    cVar11 = (bStack_3 & 0xf) + (char)((int)(uint)bStack_3 >> 4) * '\n';
  }
  else {
    cVar5 = '\x01';
    sVar12 = 0x7d4;
    cVar10 = '\0';
    cVar9 = '\0';
    cVar11 = cVar5;
  }
  iVar8 = 0;
  while( true ) {
    lVar7 = 0;
    iVar4 = GameDb_GetEventCount();
    if (iVar8 < iVar4) {
      lVar7 = GameDb_GetEvent(iVar8);
    }
    if (lVar7 == 0) break;
    if (*(char *)(param_1 + 0x3868) == '\0') {
      bVar2 = false;
      cVar3 = Rival_CountActive(lVar7);
      puVar6 = (undefined4 *)lVar7;
      bVar1 = bVar2;
      if (cVar3 == '\0') {
        if ((puVar6[4] != -1) &&
           (lVar7 = Rival_IsAvailable(*puVar6,puVar6[1],puVar6 + 4,6), lVar7 != 0)) {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
        if (((cVar3 != '\x01') && (bVar1 = bVar2, cVar3 == '\x02')) &&
           (lVar7 = Rival_IsAvailable(*puVar6,puVar6[1],puVar6 + 4,6), lVar7 != 0)) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        *(undefined1 *)(param_1 + 0x3868) = 1;
        *(undefined4 *)(param_1 + 0x3864) = *(undefined4 *)(*_g_Profiles + 0x2734);
        *(short *)(param_1 + 0x386a) = sVar12;
        *(char *)(param_1 + 0x386c) = cVar5;
        *(char *)(param_1 + 0x386d) = cVar11;
        *(char *)(param_1 + 0x386e) = cVar10;
        *(char *)(param_1 + 0x386f) = cVar9;
        Career_UnlockCar(*_g_Profiles,*(undefined8 *)(puVar6 + 2));
      }
    }
    param_1 = param_1 + 0xc;
    iVar8 = iVar8 + 1;
  }
  return;
}

