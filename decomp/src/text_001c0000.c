// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001c0000 - 0x001c4000
#include "ghidra_types.h"

// 0x001c0040  size 0x8c
int Profile_GetChapterRivalCount(ulong param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 7) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_1) {
    case 0:
      iVar1 = 7;
      break;
    default:
      iVar1 = 6;
      break;
    case 3:
      iVar1 = 6;
      break;
    case 4:
      iVar1 = 6;
      break;
    case 5:
      iVar1 = 8;
    }
  }
  if (param_2 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(param_2) {
    case 1:
    case 2:
      iVar1 = iVar1 + -1;
      break;
    case 4:
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}

// 0x001c00d0  size 0x1b8
void Opponent_SetupGrid(short *param_1,long param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  Opponent_Clear(param_3);
  *(undefined2 *)(param_3 + 2) = 0;
  *(short *)(param_3 + 0x168) = (short)(char)param_1[2];
  *(char *)(param_3 + 0x2c) = (char)param_1[6];
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 4);
  *(int *)(param_3 + 8) = (int)*param_1;
  *(int *)(param_3 + 0xc) = (int)param_1[1];
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_1 + 8);
  if (param_2 == 0) {
    *(undefined1 *)(param_3 + 4) = 5;
    *(undefined4 *)(param_3 + 0x10) = 0x2308;
  }
  else {
    *(undefined1 *)(param_3 + 4) = 6;
    *(undefined4 *)(param_3 + 0x10) = 0x2310;
  }
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined2 *)(param_3 + 0x38) = 9;
    *(undefined2 *)(param_3 + 0x3a) = 0;
  }
  else {
    *(undefined2 *)(param_3 + 0x38) = 0;
    *(undefined2 *)(param_3 + 0x3a) = 9;
  }
  psVar2 = param_1;
  iVar4 = 0;
  iVar1 = param_3;
  do {
    iVar3 = iVar4;
    iVar4 = iVar3 + 7;
    *(int *)(iVar1 + 0x44) = (int)psVar2[10];
    *(int *)(iVar1 + 0x48) = (int)psVar2[0xb];
    *(int *)(iVar1 + 0x4c) = (int)psVar2[0xc];
    *(int *)(iVar1 + 0x50) = (int)psVar2[0xd];
    *(int *)(iVar1 + 0x54) = (int)psVar2[0xe];
    *(int *)(iVar1 + 0x58) = (int)psVar2[0xf];
    *(int *)(iVar1 + 0x5c) = (int)psVar2[0x10];
    psVar2 = psVar2 + 7;
    iVar1 = iVar1 + 0x1c;
  } while (iVar4 < 0x10);
  iVar1 = 0;
  iVar4 = iVar4 * 4 + param_3;
  *(int *)(iVar4 + 0x44) = (int)param_1[iVar3 + 0x11];
  *(int *)(iVar4 + 0x48) = (int)param_1[iVar3 + 0x12];
  iVar4 = param_3;
  do {
    *(undefined4 *)(iVar4 + 0xfc) = 0xffffffff;
    iVar1 = iVar1 + 8;
    *(undefined4 *)(iVar4 + 0x100) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x104) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x108) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x10c) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x110) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x114) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x118) = 0xffffffff;
    iVar4 = iVar4 + 0x20;
  } while (iVar1 < 0x10);
  iVar1 = 0;
  iVar4 = param_3;
  do {
    *(undefined4 *)(iVar4 + 0xa0) = 0;
    iVar1 = iVar1 + 7;
    *(undefined4 *)(iVar4 + 0xa4) = 0;
    *(undefined4 *)(iVar4 + 0xa8) = 0;
    *(undefined4 *)(iVar4 + 0xac) = 0;
    *(undefined4 *)(iVar4 + 0xb0) = 0;
    *(undefined4 *)(iVar4 + 0xb4) = 0;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    iVar4 = iVar4 + 0x1c;
  } while (iVar1 < 0x10);
  param_3 = iVar1 * 4 + param_3;
  *(undefined4 *)(param_3 + 0xa0) = 0;
  *(undefined4 *)(param_3 + 0xa4) = 0;
  return;
}

// 0x001c0290  size 0x31c
void Opponent_RandomizeGrid(short *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  short sVar10;
  short *psVar11;
  undefined1 auStack_4 [4];
  
  uVar2 = maybe_Rand_Float();
  uVar9 = uVar2 & 1;
  if (((int)uVar2 < 0) && (uVar9 != 0)) {
    uVar9 = uVar9 - 2;
  }
  uVar2 = maybe_Rand_Float();
  uVar5 = uVar2 & 7;
  if (((int)uVar2 < 0) && (uVar5 != 0)) {
    uVar5 = uVar5 - 8;
  }
  maybe_Rand_Float();
  sVar10 = 0;
  auStack_4[0] = DAT_0036e844;
  auStack_4[1] = DAT_0036e845;
  auStack_4[2] = DAT_0036e846;
  auStack_4[3] = DAT_0036e847;
  uVar3 = maybe_Rand_Float();
  iVar6 = (int)(uVar3 & 3);
  if (((long)uVar3 < 0) && ((uVar3 & 3) != 0)) {
    iVar6 = iVar6 + -4;
  }
  *(undefined1 *)(param_1 + 6) = auStack_4[iVar6];
  uVar3 = maybe_Rand_Float();
  iVar6 = (int)(uVar3 & 1);
  if (((long)uVar3 < 0) && ((uVar3 & 1) != 0)) {
    iVar6 = iVar6 + -2;
  }
  *(int *)(param_1 + 8) = iVar6;
  if (*(int *)(param_1 + 8) == 0) {
    psVar11 = &DAT_003181a0;
  }
  else {
    psVar11 = &DAT_00318160;
  }
  for (psVar8 = psVar11; *psVar8 != -1; psVar8 = psVar8 + 1) {
    sVar10 = sVar10 + 1;
  }
  iVar6 = maybe_Rand_Float();
  *param_1 = psVar11[iVar6 % (int)sVar10];
  iVar6 = CarDb_GetModel(*param_1);
  lVar4 = CarDb_GetVariant(*param_1);
  if (lVar4 == 1) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  param_1[4] = -0x800;
  param_1[5] = 7;
  if (uVar9 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40000000;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000000;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1e000000;
  uVar2 = Race_GetOpponentCount(uVar5 & 0xff);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | uVar2;
  if (param_2 == 0) {
    uVar2 = 0;
    psVar11 = param_1;
    do {
      lVar4 = CarDb_CopyTable(uVar2 & 0xff);
      iVar7 = (int)lVar4;
      if (lVar4 < 0) {
        iVar7 = iVar7 + 1;
      }
      uVar2 = uVar2 + 1;
      psVar11[10] = (short)(iVar7 >> 1) + 1;
      psVar11 = psVar11 + 1;
    } while ((int)uVar2 < 0xf);
    param_1[1] = 0x2d;
  }
  else {
    uVar2 = 0;
    psVar11 = param_1;
    do {
      sVar10 = CarDb_CopyTable(uVar2 & 0xff);
      uVar2 = uVar2 + 1;
      psVar11[10] = sVar10;
      psVar11 = psVar11 + 1;
    } while ((int)uVar2 < 0xf);
    param_1[1] = 0x37;
  }
  param_1[0x17] = 5;
  param_1[0x18] = 5;
  if (*(char *)(iVar6 + 0x45) != '\0') {
    if (param_2 == 0) {
      param_1[0x20] = 3;
    }
    else {
      param_1[0x20] = 5;
    }
  }
  param_1[0x1b] = 0x3e;
  param_1[0x1a] = 0x3e;
  if (((((*(int *)(iVar6 + 0x88) == 2) || (cVar1 = *(char *)(iVar6 + 0x28), cVar1 == '\x11')) ||
       (cVar1 == '\x0f')) || ((cVar1 == '\v' || (cVar1 == '\f')))) || (cVar1 == '\r')) {
    param_1[0x1d] = -1;
  }
  else {
    uVar3 = maybe_Rand_Float();
    sVar10 = (short)(uVar3 & 3);
    if (((long)uVar3 < 0) && ((uVar3 & 3) != 0)) {
      sVar10 = sVar10 + -4;
    }
    param_1[0x1d] = sVar10;
  }
  param_1[0x1f] = -1;
  param_1[0x1e] = -1;
  param_1[0x1c] = -1;
  param_1[0x10] = -1;
  param_1[0x12] = -1;
  return;
}

// 0x001c05b0  size 0x294
void Profile_InitDefaults(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = param_1;
  do {
    *puVar2 = 0xffffffff;
    iVar3 = iVar3 + 6;
    puVar2[1] = 0;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0;
    puVar2[4] = 0xffffffff;
    puVar2[5] = 0;
    puVar2[6] = 0xffffffff;
    puVar2[7] = 0;
    puVar2[8] = 0xffffffff;
    puVar2[9] = 0;
    puVar2[10] = 0xffffffff;
    puVar2[0xb] = 0;
    puVar2 = puVar2 + 0xc;
  } while (iVar3 < 0x1e);
  puVar2 = param_1;
  iVar3 = 0;
  puVar1 = param_1;
  do {
    iVar4 = iVar3;
    *(undefined2 *)(puVar2 + 0x435) = 0;
    iVar3 = iVar4 + 8;
    *(undefined2 *)(puVar2 + 0x52f) = 0;
    *(undefined2 *)(puVar2 + 0x629) = 0;
    puVar1[0x3c] = 0;
    puVar1[0x230] = 0;
    *(undefined2 *)((int)puVar2 + 0x10d6) = 0;
    *(undefined2 *)((int)puVar2 + 0x14be) = 0;
    *(undefined2 *)((int)puVar2 + 0x18a6) = 0;
    puVar1[0x3d] = 0;
    puVar1[0x231] = 0;
    *(undefined2 *)(puVar2 + 0x436) = 0;
    *(undefined2 *)(puVar2 + 0x530) = 0;
    *(undefined2 *)(puVar2 + 0x62a) = 0;
    puVar1[0x3e] = 0;
    puVar1[0x232] = 0;
    *(undefined2 *)((int)puVar2 + 0x10da) = 0;
    *(undefined2 *)((int)puVar2 + 0x14c2) = 0;
    *(undefined2 *)((int)puVar2 + 0x18aa) = 0;
    puVar1[0x3f] = 0;
    puVar1[0x233] = 0;
    *(undefined2 *)(puVar2 + 0x437) = 0;
    *(undefined2 *)(puVar2 + 0x531) = 0;
    *(undefined2 *)(puVar2 + 0x62b) = 0;
    puVar1[0x40] = 0;
    puVar1[0x234] = 0;
    *(undefined2 *)((int)puVar2 + 0x10de) = 0;
    *(undefined2 *)((int)puVar2 + 0x14c6) = 0;
    *(undefined2 *)((int)puVar2 + 0x18ae) = 0;
    puVar1[0x41] = 0;
    puVar1[0x235] = 0;
    *(undefined2 *)(puVar2 + 0x438) = 0;
    *(undefined2 *)(puVar2 + 0x532) = 0;
    *(undefined2 *)(puVar2 + 0x62c) = 0;
    puVar1[0x42] = 0;
    puVar1[0x236] = 0;
    *(undefined2 *)((int)puVar2 + 0x10e2) = 0;
    *(undefined2 *)((int)puVar2 + 0x14ca) = 0;
    *(undefined2 *)((int)puVar2 + 0x18b2) = 0;
    puVar1[0x43] = 0;
    puVar2 = puVar2 + 4;
    puVar1[0x237] = 0;
    puVar1 = puVar1 + 8;
  } while (iVar3 < 0x1ec);
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x10d4) = 0;
  iVar5 = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x14bc) = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x18a4) = 0;
  param_1[iVar4 + 0x44] = 0;
  param_1[iVar4 + 0x238] = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x10d6) = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x14be) = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x18a6) = 0;
  param_1[iVar4 + 0x45] = 0;
  param_1[iVar4 + 0x239] = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x10d8) = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x14c0) = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x18a8) = 0;
  param_1[iVar4 + 0x46] = 0;
  param_1[iVar4 + 0x23a] = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x10da) = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x14c2) = 0;
  *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x18aa) = 0;
  param_1[iVar4 + 0x47] = 0;
  param_1[iVar4 + 0x23b] = 0;
  puVar2 = param_1;
  do {
    *(undefined2 *)(puVar2 + 0x723) = 0;
    iVar5 = iVar5 + 6;
    *(undefined2 *)(puVar2 + 0x732) = 0;
    *(undefined2 *)(puVar2 + 0x741) = 0;
    *(undefined2 *)(puVar2 + 0x424) = 0;
    *(undefined2 *)((int)puVar2 + 0x1c8e) = 0;
    *(undefined2 *)((int)puVar2 + 0x1cca) = 0;
    *(undefined2 *)((int)puVar2 + 0x1d06) = 0;
    *(undefined2 *)((int)puVar2 + 0x1092) = 0;
    *(undefined2 *)(puVar2 + 0x724) = 0;
    *(undefined2 *)(puVar2 + 0x733) = 0;
    *(undefined2 *)(puVar2 + 0x742) = 0;
    *(undefined2 *)(puVar2 + 0x425) = 0;
    *(undefined2 *)((int)puVar2 + 0x1c92) = 0;
    *(undefined2 *)((int)puVar2 + 0x1cce) = 0;
    *(undefined2 *)((int)puVar2 + 0x1d0a) = 0;
    *(undefined2 *)((int)puVar2 + 0x1096) = 0;
    *(undefined2 *)(puVar2 + 0x725) = 0;
    *(undefined2 *)(puVar2 + 0x734) = 0;
    *(undefined2 *)(puVar2 + 0x743) = 0;
    *(undefined2 *)(puVar2 + 0x426) = 0;
    *(undefined2 *)((int)puVar2 + 0x1c96) = 0;
    *(undefined2 *)((int)puVar2 + 0x1cd2) = 0;
    *(undefined2 *)((int)puVar2 + 0x1d0e) = 0;
    *(undefined2 *)((int)puVar2 + 0x109a) = 0;
    puVar2 = puVar2 + 3;
  } while (iVar5 < 0x1e);
  *(undefined1 *)(param_1 + 0x433) = 0;
  iVar3 = 0;
  *(undefined1 *)((int)param_1 + 0x10cd) = 0;
  *(undefined1 *)((int)param_1 + 0x10ce) = 0;
  *(undefined1 *)((int)param_1 + 0x10cf) = 0;
  *(undefined1 *)(param_1 + 0x434) = 0;
  *(undefined1 *)((int)param_1 + 0x10d1) = 0;
  *(undefined1 *)((int)param_1 + 0x10d2) = 0;
  *(undefined1 *)((int)param_1 + 0x10d3) = 0;
  *(undefined2 *)(param_1 + 0x8e4) = 0;
  *(undefined2 *)((int)param_1 + 0x2392) = 0;
  param_1[0x8e6] = 0;
  *(undefined2 *)(param_1 + 0x8f5) = 0;
  *(undefined2 *)((int)param_1 + 0x23d6) = 0;
  param_1[0x8f7] = 0;
  *(undefined2 *)(param_1 + 0x750) = 0;
  puVar2 = param_1;
  do {
    puVar2[0x751] = 0xffffffff;
    iVar3 = iVar3 + 8;
    puVar2[0x752] = 0;
    puVar2[0x753] = 0xffffffff;
    puVar2[0x754] = 0;
    puVar2[0x755] = 0xffffffff;
    puVar2[0x756] = 0;
    puVar2[0x757] = 0xffffffff;
    puVar2[0x758] = 0;
    puVar2[0x759] = 0xffffffff;
    puVar2[0x75a] = 0;
    puVar2[0x75b] = 0xffffffff;
    puVar2[0x75c] = 0;
    puVar2[0x75d] = 0xffffffff;
    puVar2[0x75e] = 0;
    puVar2[0x75f] = 0xffffffff;
    puVar2[0x760] = 0;
    puVar2 = puVar2 + 0x10;
  } while (iVar3 < 200);
  *(undefined2 *)(param_1 + 0x8e1) = 0;
  *(undefined2 *)((int)param_1 + 0x2386) = 0;
  *(undefined2 *)(param_1 + 0x8e2) = 0;
  *(undefined2 *)((int)param_1 + 0x238a) = 0;
  *(undefined2 *)(param_1 + 0x8e3) = 0;
  return;
}

// 0x001c0850  size 0x10
undefined2 Profile_GetRivalWins(int param_1,int param_2)

{
  return *(undefined2 *)(param_2 * 2 + param_1 + 0x4b7c);
}

// 0x001c0860  size 0x28
short Profile_GetRivalTotalRaces(int param_1,int param_2)

{
  param_1 = param_2 * 2 + param_1;
  return *(short *)(param_1 + 0x4794) + *(short *)(param_1 + 0x3fc4) + *(short *)(param_1 + 0x43ac);
}

// 0x001c0890  size 0x10
/* 8 callers */

undefined2 Profile_GetRivalBattleCount(int param_1,int param_2)

{
  return *(undefined2 *)(param_2 * 2 + param_1 + 0x3fc4);
}

// 0x001c08a0  size 0x30
undefined2 Profile_GetRivalBattleCountById(int param_1)

{
  int iVar1;
  
  iVar1 = Profile_FindRivalEntry();
  return *(undefined2 *)(iVar1 * 2 + param_1 + 0x3fc4);
}

// 0x001c08d0  size 0x554
int Profile_FindRivalEntry(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uStack_480;
  short sStack_47e;
  char cStack_47c;
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
  undefined2 uStack_300;
  short sStack_2fe;
  char cStack_2fc;
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
  undefined2 uStack_180;
  short sStack_17e;
  char cStack_17c;
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
  
  iVar6 = 0;
  while( true ) {
    uVar3 = GameDb_GetRival((short)iVar6);
    memcpy(&uStack_480,uVar3,0x17c);
    puVar5 = auStack_43c;
    uStack_300 = uStack_480;
    uStack_2e8 = uStack_468;
    uStack_2f8 = uStack_478;
    uStack_2f0 = uStack_470;
    uStack_2e4 = uStack_464;
    uStack_2f4 = uStack_474;
    puVar4 = auStack_2bc;
    sStack_2fe = sStack_47e;
    cStack_2fc = cStack_47c;
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
    uStack_188 = uStack_308;
    uStack_180 = uStack_480;
    sStack_17e = sStack_47e;
    cStack_17c = cStack_47c;
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
    if (cStack_47c == '\x05') {
      return iVar6;
    }
    iVar6 = iVar6 + 1;
  }
  return 0;
}

// 0x001c0e30  size 0x18
void Profile_MarkEventSeen(int param_1,int param_2)

{
  param_1 = param_2 * 4 + param_1;
  *(undefined4 *)(param_1 + 0x2fe0) = 1;
  *(undefined4 *)(param_1 + 0x37b0) = 1;
  return;
}

// 0x001c0e50  size 0x50
undefined4 Profile_CountEventsSeen(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0x2ef0) == -1) {
      param_1 = iVar2 * 8 + param_1;
      *(undefined4 *)(param_1 + 0x2ef0) = param_2;
      *(undefined4 *)(param_1 + 0x2ef4) = param_3;
      return 1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 8;
  } while (iVar2 < 0x1e);
  return 0;
}

// 0x001c0ea0  size 0x8
undefined2 Profile_GetPlayYear(int param_1)

{
  return *(undefined2 *)(param_1 + 0x5310);
}

// 0x001c0eb0  size 0x8
undefined2 Profile_GetPlayDay(int param_1)

{
  return *(undefined2 *)(param_1 + 0x5314);
}

// 0x001c0ec0  size 0x8
undefined2 Profile_GetPlayMonth(int param_1)

{
  return *(undefined2 *)(param_1 + 0x5312);
}

// 0x001c0ed0  size 0x14
undefined4 Profile_GetStat(int param_1,uint param_2)

{
  return *(undefined4 *)((param_2 & 0xff) * 4 + param_1 + 0x2708);
}

// 0x001c0ef0  size 0x8
undefined4 Profile_GetPoints(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2744);
}

// 0x001c0f00  size 0x10
undefined4 Profile_IsEventSeen(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + param_1 + 0x2c0c);
}

// 0x001c0f10  size 0x10
undefined4 Profile_GetCourseRecordB(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + param_1 + 0x2ac4);
}

// 0x001c0f20  size 0x10
undefined4 Profile_GetCourseRecord(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + param_1 + 0x2a74);
}

// 0x001c0f30  size 0x654
void Profile_BuildRivalList(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uStack_510;
  short sStack_50e;
  char cStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  char cStack_4f0;
  int iStack_4ec;
  undefined4 uStack_4e8;
  undefined1 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined2 uStack_4d8;
  undefined2 uStack_4d6;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 auStack_4cc [23];
  undefined4 auStack_470 [23];
  undefined4 auStack_414 [16];
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined2 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  int aiStack_390 [3];
  undefined1 uStack_384;
  undefined2 uStack_350;
  short sStack_34e;
  char cStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  char cStack_330;
  int iStack_32c;
  undefined4 uStack_328;
  undefined1 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined2 uStack_318;
  undefined2 uStack_316;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 auStack_30c [23];
  undefined4 auStack_2b0 [23];
  undefined4 auStack_254 [16];
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined2 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined1 uStack_1c4;
  undefined2 uStack_190;
  short sStack_18e;
  char cStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  char cStack_170;
  int iStack_16c;
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
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar6 = 0;
  iStack_c = CONCAT22(iStack_c._2_2_,0xffff);
  iStack_10 = 0;
  iStack_8 = -1;
  do {
    uVar2 = GameDb_GetRival((short)iVar6);
    memcpy(&uStack_510,uVar2,0x17c);
    puVar5 = auStack_4cc;
    uStack_350 = uStack_510;
    uStack_348 = uStack_508;
    uStack_338 = uStack_4f8;
    puVar4 = auStack_30c;
    sStack_34e = sStack_50e;
    uStack_334 = uStack_4f4;
    cStack_34c = cStack_50c;
    iVar3 = 0x17;
    uStack_344 = uStack_504;
    uStack_340 = uStack_500;
    uStack_33c = uStack_4fc;
    cStack_330 = cStack_4f0;
    iStack_32c = iStack_4ec;
    uStack_328 = uStack_4e8;
    uStack_324 = uStack_4e4;
    uStack_320 = uStack_4e0;
    uStack_31c = uStack_4dc;
    uStack_318 = uStack_4d8;
    uStack_316 = uStack_4d6;
    uStack_314 = uStack_4d4;
    uStack_310 = uStack_4d0;
    do {
      iVar3 = iVar3 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar3);
    iVar3 = 0x17;
    puVar5 = auStack_470;
    puVar4 = auStack_2b0;
    do {
      iVar3 = iVar3 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar3);
    iVar3 = 8;
    puVar5 = auStack_414;
    puVar4 = auStack_254;
    do {
      iVar3 = iVar3 + -1;
      uVar1 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (0 < iVar3);
    uStack_200 = uStack_3c0;
    uStack_210 = uStack_3d0;
    uStack_20c = uStack_3cc;
    uStack_208 = uStack_3c8;
    uStack_204 = uStack_3c4;
    uStack_1fc = uStack_3bc;
    uStack_1f8 = uStack_3b8;
    uStack_1f4 = uStack_3b4;
    uStack_1f0 = uStack_3b0;
    uStack_1ec = uStack_3ac;
    uStack_214 = uStack_3d4;
    uStack_1e8 = uStack_3a8;
    uStack_1e4 = uStack_3a4;
    uStack_1e0 = uStack_3a0;
    uStack_1dc = uStack_39c;
    uStack_190 = uStack_510;
    uStack_1d8 = uStack_398;
    sStack_18e = sStack_50e;
    cStack_18c = cStack_50c;
    uStack_188 = uStack_508;
    uStack_184 = uStack_504;
    uStack_178 = uStack_4f8;
    puVar5 = auStack_30c;
    uStack_180 = uStack_500;
    uStack_174 = uStack_4f4;
    uStack_17c = uStack_4fc;
    iVar3 = 0x17;
    cStack_170 = cStack_4f0;
    iStack_16c = iStack_4ec;
    puVar4 = auStack_14c;
    uStack_168 = uStack_4e8;
    uStack_164 = uStack_4e4;
    uStack_160 = uStack_4e0;
    uStack_15c = uStack_4dc;
    uStack_158 = uStack_4d8;
    uStack_156 = uStack_4d6;
    uStack_154 = uStack_4d4;
    uStack_150 = uStack_4d0;
    do {
      iVar3 = iVar3 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar3);
    iVar3 = 0x17;
    puVar5 = auStack_2b0;
    puVar4 = auStack_f0;
    do {
      iVar3 = iVar3 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar3);
    iVar3 = 8;
    puVar5 = auStack_254;
    puVar4 = auStack_94;
    do {
      iVar3 = iVar3 + -1;
      uVar1 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (0 < iVar3);
    uStack_48 = uStack_3c8;
    uStack_44 = uStack_3c4;
    uStack_40 = uStack_3c0;
    uStack_3c = uStack_3bc;
    uStack_50 = uStack_3d0;
    uStack_4c = uStack_3cc;
    uStack_38 = uStack_3b8;
    uStack_34 = uStack_3b4;
    uStack_30 = uStack_3b0;
    uStack_54 = uStack_3d4;
    uStack_28 = uStack_3a8;
    uStack_24 = uStack_3a4;
    uStack_20 = uStack_3a0;
    uStack_1c = uStack_39c;
    uStack_18 = uStack_398;
    uStack_2c = uStack_3ac;
    if (sStack_50e == -1) break;
    if (((cStack_50c == '\x03') && (cStack_4f0 == '\x05')) && (iStack_4ec == param_3)) {
      iStack_c = CONCAT22(iStack_c._2_2_,(short)iVar6);
      iStack_10 = 1;
      iStack_8 = *(int *)(param_3 * 4 + param_2 + 0x2b14);
      break;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 500);
  if (iStack_10 == 0) {
    iVar6 = 0;
    while( true ) {
      Course_GetSectionCount(aiStack_390,iVar6);
      uStack_1c4 = uStack_384;
      if (aiStack_390[0] == -1) break;
      if (param_3 == aiStack_390[0]) {
        iStack_c = CONCAT22(iStack_c._2_2_,(short)iVar6);
        iStack_10 = 0;
        iStack_8 = *(int *)(param_3 * 4 + param_2 + 0x2b14);
        break;
      }
      iVar6 = iVar6 + 1;
    }
  }
  *param_1 = iStack_10;
  param_1[1] = iStack_c;
  param_1[2] = iStack_8;
  return;
}

// 0x001c1590  size 0x38
int Profile_CountUnlockedCourses(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x348) != -1) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 0x14);
  return iVar1;
}

// 0x001c15d0  size 0x38
int Profile_CountClearedCourses(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 1000) != -1) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 0x28);
  return iVar1;
}

// 0x001c1610  size 0x10
undefined4 Profile_GetCourseBest(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + param_1 + 0x2b14);
}

// 0x001c1620  size 0x44
/* +0x2744 */

void Profile_AddPoints(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2744) = *(int *)(param_1 + 0x2744) + param_2;
  if (*(int *)(param_1 + 0x2744) < 0) {
    *(undefined4 *)(param_1 + 0x2744) = 0;
  }
  else if (9999 < *(int *)(param_1 + 0x2744)) {
    *(undefined4 *)(param_1 + 0x2744) = 9999;
  }
  return;
}

// 0x001c1670  size 0x14
void Profile_SetEventSeen(int param_1,int param_2)

{
  *(undefined4 *)(param_2 * 4 + param_1 + 0x2c0c) = 1;
  return;
}

// 0x001c1690  size 0x10
void Profile_SetCourseRecord(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 4 + param_1 + 0x2a74) = param_3;
  return;
}

// 0x001c16a0  size 0x10
void Profile_SetCourseBest(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 4 + param_1 + 0x2b14) = param_3;
  return;
}

// 0x001c16b0  size 0x8
undefined1 Profile_GetFlag273f(int param_1)

{
  return *(undefined1 *)(param_1 + 0x273f);
}

// 0x001c16c0  size 0x8
undefined1 Profile_GetFlag273d(int param_1)

{
  return *(undefined1 *)(param_1 + 0x273d);
}

// 0x001c16d0  size 0x8
undefined1 Profile_GetDifficulty(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2731);
}

// 0x001c16e0  size 0x8
/* +0x2730; 26 callers */

undefined1 Profile_GetChapter(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2730);
}

// 0x001c16f0  size 0x8
void Profile_SetSelection2733(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2733) = param_2;
  return;
}

// 0x001c1700  size 0x8
undefined1 Profile_GetSelection2733(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2733);
}

// 0x001c1710  size 0x18
/* day % 7 */

int Profile_GetWeekday(int param_1)

{
  return *(int *)(param_1 + 0x2734) % 7;
}

// 0x001c1730  size 0x24
/* day % 28, 1-based */

int Profile_GetDayOfMonth(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2734) % 0x1c;
  if (iVar1 == 0) {
    iVar1 = 0x1c;
  }
  return iVar1;
}

// 0x001c1760  size 0x48
int Profile_GetMonth(int param_1)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x2734) + -1) / 0x1c + 1;
  if (999 < iVar1) {
    iVar1 = 999;
  }
  return iVar1;
}

// 0x001c17b0  size 0x4c
int Profile_IsMonthStart(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2734) % 0x1c;
  if (iVar1 == 0) {
    iVar1 = 0x1c;
  }
  return (iVar1 + -1) / 7 + 1;
}

// 0x001c1800  size 0x1c
int Profile_GetDayClamped(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2734);
  if (9999 < iVar1) {
    iVar1 = 9999;
  }
  return iVar1;
}

// 0x001c1820  size 0x8
/* +0x2734; 25 callers */

undefined4 Profile_GetDay(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2734);
}

// 0x001c1830  size 0x5c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Profile_Validate(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(_g_Profiles + param_1 * 4);
  iVar2 = *(int *)(iVar1 + 0x2bec);
  for (uVar3 = (iRam0036f0cc - *(int *)(_g_Profiles + 8)) + *(int *)(iVar1 + 0x2bf0);
      0x34bbf < uVar3; uVar3 = uVar3 - 0x34bc0) {
    iVar2 = iVar2 + 1;
  }
  *param_2 = iVar2;
  *param_3 = uVar3;
  return;
}

// 0x001c1890  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* slot clamped to 0..1; 310 callers */

undefined4 Profile_Get(int param_1)

{
  if (1 < param_1) {
    param_1 = 1;
  }
  return *(undefined4 *)(_g_Profiles + param_1 * 4);
}

// 0x001c18c0  size 0x6c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Profile_FreeAll(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(_g_Profiles + iVar1) != 0) {
      Mem_Free();
      *(undefined4 *)(_g_Profiles + iVar1) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  Mem_Free(_g_Profiles);
  return;
}

// 0x001c1930  size 0x48
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Profile_Free(int param_1)

{
  if (*(int *)(_g_Profiles + param_1 * 4) != 0) {
    Mem_Free();
    *(undefined4 *)(_g_Profiles + param_1 * 4) = 0;
  }
  return;
}

// 0x001c1980  size 0x90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Profile_GetPlayTime(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = iRam0036f0cc - *(int *)(_g_Profiles + 8);
  if (iVar2 != 0) {
    iVar6 = 0;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(_g_Profiles + iVar3);
      if (iVar1 != 0) {
        iVar4 = *(int *)(iVar1 + 0x2bec);
        for (uVar5 = *(int *)(iVar1 + 0x2bf0) + iVar2; 0x34bbf < uVar5; uVar5 = uVar5 - 0x34bc0) {
          iVar4 = iVar4 + 1;
        }
        *(int *)(iVar1 + 0x2bec) = iVar4;
        *(uint *)(iVar1 + 0x2bf0) = uVar5;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 2);
  }
  *(int *)(_g_Profiles + 8) = iRam0036f0cc;
  return;
}

// 0x001c1a10  size 0x10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Profile_ResetPlayTimer(void)

{
  *(undefined4 *)(_g_Profiles + 8) = uRam0036f0cc;
  return;
}

// 0x001c1a20  size 0x110
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Profile_Create(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  param_1 = param_1 * 4;
  if (*(int *)(_g_Profiles + param_1) == 0) {
    uVar2 = Mem_Alloc16(0xdb5c);
    *(undefined4 *)(_g_Profiles + param_1) = uVar2;
    Profile_InitDefaults(*(int *)(_g_Profiles + param_1) + 0x2ef0);
    Profile_InitNewGame(*(undefined4 *)(_g_Profiles + param_1));
    iVar4 = 0;
    iVar1 = *(int *)(_g_Profiles + param_1);
    puVar3 = (undefined4 *)(iVar1 + 0x2708);
    do {
      *puVar3 = 0;
      iVar4 = iVar4 + 3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
    } while (iVar4 < 9);
    *(undefined4 *)(iVar1 + 0x270c) = 1;
    Career_Reset(*(int *)(_g_Profiles + param_1) + 0x272c);
    *(undefined4 *)(*(int *)(_g_Profiles + param_1) + 0x2734) = 0;
  }
  else {
    if (*(int *)(_g_Profiles + param_1) != 0) {
      Mem_Free();
      *(undefined4 *)(_g_Profiles + param_1) = 0;
    }
    uVar2 = Mem_Alloc16(0xdb5c,param_2);
    *(undefined4 *)(_g_Profiles + param_1) = uVar2;
  }
  return;
}

// 0x001c1b30  size 0x38
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Profile_InitTable(undefined8 param_1)

{
  _g_Profiles = (undefined4 *)Mem_Alloc16(0xc,param_1);
  *_g_Profiles = 0;
  _g_Profiles[1] = 0;
  _g_Profiles[2] = 0;
  return;
}

// 0x001c1b70  size 0x108
int RaceWorld_AddStaticBox
              (int *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
              undefined2 param_5,char param_6)

{
  int iVar1;
  char *pcVar2;
  float fVar3;
  
  iVar1 = *param_1;
  if ((iVar1 < 0x80) && (param_6 != '\0')) {
    pcVar2 = (char *)(param_1[1] + iVar1 * 0x40);
    *pcVar2 = param_6;
    sceVu0CopyVector(pcVar2 + 0x10);
    sceVu0CopyVector(pcVar2 + 0x20,param_3);
    sceVu0SubVector(pcVar2 + 0x30,param_3,param_2);
    fVar3 = (float)maybe_Vu0_SqrtQ(*(float *)(pcVar2 + 0x30) * *(float *)(pcVar2 + 0x30) +
                                   *(float *)(pcVar2 + 0x38) * *(float *)(pcVar2 + 0x38));
    pcVar2[1] = (char)(int)(fVar3 / 3.5);
    pcVar2[0x34] = '\0';
    pcVar2[0x35] = '\0';
    pcVar2[0x36] = '\0';
    pcVar2[0x37] = '\0';
    sceVu0Normalize(pcVar2 + 0x30,pcVar2 + 0x30);
    *(undefined2 *)(pcVar2 + 2) = param_4;
    *(undefined2 *)(pcVar2 + 4) = param_5;
    *param_1 = *param_1 + 1;
    iVar1 = *param_1 + -1;
  }
  return iVar1;
}

// 0x001c1c80  size 0x45c
int RaceWorld_ContactCallback(undefined4 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float afStack_d0 [4];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float afStack_90 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float afStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = PhysWorld_GetBodyList(0x42f3c0);
  param_1[0xc] = 0;
  piVar16 = (int *)param_2;
  iVar15 = 0;
  cVar1 = (**(code **)(*piVar16 + 0x18))(param_2);
  if (cVar1 == '\x02') {
    uVar13 = 0;
    afStack_90[0] = DAT_00318340;
    afStack_90[1] = (float)DAT_00318344;
    afStack_90[2] = (float)DAT_00318348;
    afStack_90[3] = (float)DAT_0031834c;
    iVar4 = PhysBox_GetEdge(param_2,DAT_00318340);
    iVar5 = (**(code **)(*piVar16 + 0x5c))(param_2,0);
    uVar3 = 1;
    pfVar14 = afStack_90;
    fVar17 = *(float *)(iVar4 + 4) - *(float *)(iVar5 + 0x14);
    do {
      pfVar14 = pfVar14 + 1;
      iVar4 = PhysBox_GetEdge(param_2,*pfVar14);
      iVar5 = (**(code **)(*piVar16 + 0x5c))(param_2,uVar3);
      fVar18 = *(float *)(iVar4 + 4) - *(float *)(iVar5 + 0x14);
      if (fVar18 < fVar17) {
        fVar17 = fVar18;
        uVar13 = uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    uStack_b4 = 0x3f800000;
    uStack_a4 = 0x3f800000;
    uVar8 = PhysBox_GetEdge(param_2,afStack_90[uVar13]);
    (**(code **)(*piVar16 + 0x5c))(param_2,uVar13);
    if (fVar17 < 0.0) {
      uVar9 = (**(code **)(*piVar16 + 0x5c))(param_2,uVar13);
      RaceWorld_GroundQuery(afStack_d0,uVar8,uVar9,2);
      if (0.0 < -afStack_d0[0]) {
        param_1[0xe] = 0;
        param_1[4] = uStack_c0;
        param_1[5] = uStack_bc;
        param_1[6] = uStack_b8;
        param_1[7] = uStack_b4;
        param_1[8] = uStack_b0;
        param_1[9] = uStack_ac;
        param_1[10] = uStack_a8;
        param_1[0xb] = uStack_a4;
        param_1[0xc] = -afStack_d0[0] + 0.01;
        puVar6 = (undefined4 *)uVar8;
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        uVar12 = puVar6[3];
        *param_1 = *puVar6;
        param_1[1] = uVar10;
        param_1[2] = uVar11;
        param_1[3] = uVar12;
        param_1[0xd] = uStack_a0;
        if (0 < iVar2) {
          iVar15 = 1;
        }
      }
    }
  }
  else if (cVar1 == '\x01') {
    uVar13 = 0;
    lVar7 = (**(code **)(*piVar16 + 0x34))(param_2);
    if (lVar7 != 0) {
      do {
        uStack_64 = 0x3f800000;
        uStack_54 = 0x3f800000;
        uVar8 = (**(code **)(*piVar16 + 0x38))(param_2,uVar13);
        uVar9 = (**(code **)(*piVar16 + 0x5c))(param_2,uVar13);
        RaceWorld_GroundQuery(afStack_90 + 4,uVar8,uVar9,2);
        if (0.0 < -afStack_90[4]) {
          param_1[0xe] = iVar15;
          param_1[4] = uStack_70;
          param_1[5] = uStack_6c;
          param_1[6] = uStack_68;
          param_1[7] = uStack_64;
          param_1[8] = uStack_60;
          param_1[9] = uStack_5c;
          param_1[10] = uStack_58;
          param_1[0xb] = uStack_54;
          param_1[0xc] = -afStack_90[4];
          puVar6 = (undefined4 *)(**(code **)(*piVar16 + 0x38))(param_2,uVar13);
          uVar10 = puVar6[1];
          uVar11 = puVar6[2];
          uVar12 = puVar6[3];
          *param_1 = *puVar6;
          param_1[1] = uVar10;
          param_1[2] = uVar11;
          param_1[3] = uVar12;
          param_1[0xc] = (float)param_1[0xc] + 0.01;
          param_1[0xd] = uStack_50;
          if (iVar15 < iVar2) {
            iVar15 = iVar15 + 1;
            param_1 = param_1 + 0x10;
          }
        }
        (**(code **)(*piVar16 + 0x58))(param_2,uVar13,uStack_4c);
        uVar13 = uVar13 + 1;
        uVar3 = (**(code **)(*piVar16 + 0x34))(param_2);
      } while (uVar13 < uVar3);
    }
  }
  else {
    uStack_24 = 0x3f800000;
    uStack_14 = 0x3f800000;
    uVar8 = PhysShape_GetCenter(param_2);
    RaceWorld_GroundQuery(afStack_40,uVar8,0,2);
    fVar17 = (float)PhysShape_GetType(param_2);
    if (0.0 < fVar17 - afStack_40[0]) {
      param_1[0xe] = 0;
      param_1[4] = uStack_30;
      param_1[5] = uStack_2c;
      param_1[6] = uStack_28;
      param_1[7] = uStack_24;
      param_1[8] = uStack_20;
      param_1[9] = uStack_1c;
      param_1[10] = uStack_18;
      param_1[0xb] = uStack_14;
      param_1[0xc] = (fVar17 - afStack_40[0]) + 0.01;
      puVar6 = (undefined4 *)PhysShape_GetCenter(param_2);
      uVar10 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      *param_1 = *puVar6;
      param_1[1] = uVar10;
      param_1[2] = uVar11;
      param_1[3] = uVar12;
      fVar17 = (float)PhysShape_GetType(param_2);
      param_1[2] = (float)param_1[2] - fVar17;
      param_1[0xd] = uStack_10;
      if (0 < iVar2) {
        iVar15 = 1;
      }
    }
  }
  return iVar15;
}

// 0x001c20e0  size 0x60
undefined4 RaceWorld_CameraContact(int param_1,undefined8 param_2)

{
  PhysContact_ComputeImpulse(param_2);
  DAT_70000000 = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x40000000;
  DAT_70000004 = 0x40000000;
  DAT_7000000c = (undefined4)param_2;
  DAT_70000008 = param_1;
  Cam_ResolveCollision(0x70000000,0x36f238);
  return DAT_70000000;
}

// 0x001c2140  size 0x4c
bool RaceWorld_CheckGrounded(int param_1)

{
  long lVar1;
  
  lVar1 = RaceWorld_GroundQuery();
  if (lVar1 != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80ffffff;
  }
  return lVar1 != 0;
}

// 0x001c2190  size 0x1ac
undefined4 RaceWorld_GroundQuery(float *param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined1 auStack_10 [4];
  float fStack_c;
  
  fVar5 = (float)param_3;
  pfVar6 = (float *)param_2;
  if (param_3 == 0) {
    param_1[0xd] = 0.0;
    fVar1 = DAT_0036257c;
    fVar4 = DAT_00362578;
    fVar5 = DAT_00362574;
    param_1[4] = DAT_00362570;
    param_1[5] = fVar5;
    param_1[6] = fVar4;
    param_1[7] = fVar1;
    fVar1 = DAT_0036257c;
    fVar4 = DAT_00362578;
    fVar5 = DAT_00362574;
    param_1[8] = DAT_00362570;
    param_1[9] = fVar5;
    param_1[10] = fVar4;
    param_1[0xb] = fVar1;
    *param_1 = pfVar6[1];
    param_1[0xc] = 1.5046328e-36;
  }
  else {
    sceVu0CopyVector(auStack_10);
    fStack_c = fStack_c + 0.5;
    param_1[0xd] = fVar5;
    if ((*pfVar6 == *(float *)((int)fVar5 + 0x10)) && (pfVar6[2] == *(float *)((int)fVar5 + 0x18)))
    {
      fStack_c = *(float *)((int)fVar5 + 0x14);
      fVar4 = *(float *)((int)fVar5 + 100);
    }
    else {
      fVar4 = (float)Road_RaycastGround(0x36f238,auStack_10,*(undefined4 *)((int)fVar5 + 2),0,
                                        (int)fVar5 + 0x30);
      fVar3 = DAT_0036257c;
      fVar2 = DAT_00362578;
      fVar1 = DAT_00362574;
      if (fVar4 == -NAN) {
        param_1[4] = DAT_00362570;
        param_1[5] = fVar1;
        param_1[6] = fVar2;
        param_1[7] = fVar3;
        fVar2 = DAT_0036257c;
        fVar1 = DAT_00362578;
        fVar4 = DAT_00362574;
        param_1[8] = DAT_00362570;
        param_1[9] = fVar4;
        param_1[10] = fVar1;
        param_1[0xb] = fVar2;
        param_1[0xc] = 1.5046328e-36;
        *param_1 = 0.0;
        sceVu0CopyVector((int)fVar5 + 0x10,param_2);
        return 1;
      }
      sceVu0CopyVector((int)fVar5 + 0x10,auStack_10);
      *(float *)((int)fVar5 + 100) = fVar4;
    }
    sceVu0CopyVector(param_1 + 4,(int)fVar5 + 0x30);
    sceVu0CopyVector(param_1 + 8,(int)fVar5 + 0x30);
    param_1[0xc] = fVar4;
    if (fVar4 == 5.60519e-45) {
      fStack_c = fStack_c + 0.005;
    }
    *param_1 = pfVar6[1] - fStack_c;
  }
  return 1;
}

// 0x001c2340  size 0x40
void RaceWorld_Shutdown(void)

{
  Phys_Shutdown();
  Mem_Free(*(undefined4 *)(iRam0036f308 + 4));
  Mem_Free(iRam0036f308);
  iRam0036f308 = 0;
  maybe_Heap_Release(0x436530);
  return;
}

// 0x001c2380  size 0x16c
/* physics heap 0x12488 */

void RaceWorld_Init(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  maybe_Heap_Create(0x436530,0x12488,0x430750);
  Phys_Init(0x32,1000,100,0x436530);
  Phys_SetParamB(0x1c20e0);
  Phys_SetParamA(0x1c1c80);
  Phys_SetCallback(0x1c2140);
  Phys_SetupPools(0x20);
  PhysMaterial_SetRestitution(0x3c23d70a,0x2000000);
  PhysMaterial_SetRestitution(0,0x1000000);
  PhysMaterial_SetRestitution(0,0x4000000);
  PhysMaterial_SetFriction(0x3f800000,0x2000000);
  PhysMaterial_SetFriction(0,0x1000000);
  PhysMaterial_SetFriction(0x3f800000,0x4000000);
  PhysMaterial_SetDamping(0x3dcccccd,0x2000000);
  PhysMaterial_SetDamping(0xbeb33333,0x1000000);
  PhysMaterial_SetDamping(0x3e800000,0x4000000);
  PhysMaterial_SetSoftness(0x3f800000,0x2000000);
  PhysMaterial_SetSoftness(0,0x1000000);
  PhysMaterial_SetSoftness(0,0x4000000);
  puVar1 = (undefined4 *)Mem_AllocAligned(8,0x10,0x436530);
  puRam0036f308 = puVar1;
  *puVar1 = 0;
  uVar2 = Mem_AllocAligned(0x40,0x10,0x430750);
  puVar1[1] = uVar2;
  return;
}

// 0x001c24f0  size 0x2c8
undefined8 RaceWorld_BuildColliders(ushort param_1,char param_2)

{
  ushort uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int iStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar6 = 0;
  if (*puRam0036f238 != 0) {
    iVar10 = 0;
    do {
      psVar2 = *(short **)(puRam0036f238[1] + iVar10);
      uVar8 = 0;
      if (*psVar2 != 0) {
        iStack_30 = 0;
        do {
          uVar9 = 0;
          iVar4 = iStack_30 + *(int *)(psVar2 + 0x22);
          puVar7 = (ushort *)
                   ((int)psVar2 +
                   (uint)*(ushort *)((int)psVar2 + iVar4 + 6) * 8 + *(int *)(psVar2 + 0x26));
          if (*(short *)((int)psVar2 + iVar4 + 4) != 0) {
            do {
              uVar1 = puVar7[2];
              if ((uVar1 == 0) ||
                 ((param_1 != 0x7fff &&
                  (((param_1 != 0x7ffe || (0xf < (uVar1 & 0x7fff))) && ((uVar1 & 0x7fff) != param_1)
                   ))))) {
LAB_001c25c8:
                uVar1 = *(ushort *)((int)psVar2 + iVar4 + 4);
              }
              else {
                if (param_2 == '\x03') {
                  puVar7[2] = puVar7[2] & 0x7fff;
                  goto LAB_001c25c8;
                }
                if (param_2 != '\x02') {
                  if (param_2 == '\x01') {
                    puVar7[2] = 0;
                  }
                  goto LAB_001c25c8;
                }
                puVar7[2] = puVar7[2] | 0x8000;
                if ((iRam0036f308 == 0) || ((puVar7[2] & 0x7fff) < 0x10)) goto LAB_001c25c8;
                uVar5 = 0;
                iVar3 = *(int *)(psVar2 + 0x20);
                if ((puVar7[3] & 0x1000) == 0) {
                  if ((puVar7[3] & 0x2000) != 0) {
                    uVar5 = 4;
                  }
                }
                else {
                  uVar5 = 3;
                }
                uStack_10 = *(undefined4 *)((int)psVar2 + (uint)*puVar7 * 0x10 + iVar3);
                uStack_c = *(undefined4 *)((int)psVar2 + (uint)*puVar7 * 0x10 + iVar3 + 4);
                uStack_8 = *(undefined4 *)((int)psVar2 + (uint)*puVar7 * 0x10 + iVar3 + 8);
                uStack_20 = *(undefined4 *)((int)psVar2 + (uint)puVar7[1] * 0x10 + iVar3);
                uStack_1c = *(undefined4 *)((int)psVar2 + (uint)puVar7[1] * 0x10 + iVar3 + 4);
                uStack_18 = *(undefined4 *)((int)psVar2 + (uint)puVar7[1] * 0x10 + iVar3 + 8);
                RaceWorld_AddStaticBox(iRam0036f308,&uStack_10,&uStack_20,(short)uVar6,0,uVar5);
                uVar1 = *(ushort *)((int)psVar2 + iVar4 + 4);
              }
              uVar9 = uVar9 + 1;
              puVar7 = puVar7 + 4;
            } while (uVar9 < uVar1);
          }
          uVar8 = (ulong)((int)uVar8 + 1);
          iStack_30 = iStack_30 + 0x1c;
        } while (uVar8 < (ulong)(long)*psVar2);
      }
      uVar6 = uVar6 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar6 < *puRam0036f238);
  }
  return 0;
}

// 0x001c27c0  size 0x220
void RaceWorld_Step(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  lVar5 = RaceScene_IsPaused();
  if ((lVar5 == 0) && (lVar5 = RaceScene_IsRunning(), lVar5 != 0)) {
    lVar5 = RaceScene_IsFlag400();
    if (((lVar5 == 0) && (lVar5 = RaceScene_IsFlag1000(), lVar5 == 0)) &&
       ((cVar1 = RaceCtx_GetMode(), cVar1 != '\x01' ||
        (((cVar1 = GameState_Get_354(), cVar1 != '\x01' &&
          (cVar1 = GameState_Get_354(), cVar1 != '\x02')) &&
         (cVar1 = GameState_Get_354(), cVar1 != '\x03')))))) {
      Phys_Step(0x42700000);
    }
    else {
      Phys_Step(0);
    }
    iVar10 = 0;
    lVar5 = GameState_GetTotalCarCount();
    if (0 < lVar5) {
      do {
        lVar5 = RaceCar_Get(iVar10);
        if (lVar5 != 0) {
          iVar2 = RaceCar_GetTracker(lVar5);
          *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) & 0xffffff8f;
          RaceCar_UpdateTracker(lVar5);
          for (iVar3 = *(int *)(*(int *)((int)lVar5 + 0x158) + 0xd4); iVar3 != 0;
              iVar3 = PhysWorld_FindBodyWithFlags(iVar3,0xffffffffffffffff)) {
            lVar6 = PhysHandle_GetValueIfValid(iVar3);
            if (lVar6 == 0) {
              uVar7 = PhysHandle_GetIndexIfValid(iVar3);
              if ((uVar7 & 1) == 0) {
                uVar9 = 0x20;
              }
              else {
                uVar9 = 0x40;
              }
              iVar8 = 0;
              *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) | uVar9;
              do {
                iVar4 = RaceCar_GetWheelFx(lVar5,iVar8);
                iVar8 = iVar8 + 1;
                *(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) | uVar9;
              } while (iVar8 < 4);
            }
            else {
              *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) | 0x10;
            }
          }
        }
        iVar10 = iVar10 + 1;
        iVar3 = GameState_GetTotalCarCount();
      } while (iVar10 < iVar3);
    }
  }
  return;
}

// 0x001c2a00  size 0xc
void maybe_RaceTask_ClearFlag(int param_1)

{
  **(undefined1 **)(param_1 + 0x14) = 0;
  return;
}

// 0x001c2a10  size 0x1c
void maybe_RaceTask_SetFlag(int param_1)

{
  **(undefined1 **)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0x1c29f0;
  return;
}

// 0x001c2a30  size 0x40
undefined8
Vu0_RaySphereTest(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined8 uVar1;
  undefined4 in_vc2;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar2 = _lqc2(*param_1);
  auVar3 = _lqc2(*param_2);
  auVar4 = _lqc2(*param_3);
  auVar2 = _vsub(auVar2,auVar3);
  auVar2 = _vmul(auVar2,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vclip(auVar2,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar1 = _cfc2(in_vc2);
  return uVar1;
}

// 0x001c2a70  size 0x144
void Prop_DrawModel(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined1 param_5,undefined2 param_6)

{
  undefined1 auStack_120 [64];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [64];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined1 auStack_10 [12];
  undefined4 uStack_4;
  
  uStack_e0 = DAT_003187c0;
  uStack_dc = DAT_003187c4;
  uStack_d8 = DAT_003187c8;
  uStack_d4 = DAT_003187cc;
  Obj_Init(&uStack_d0);
  sceVu0SubVector(auStack_20,param_1,&uStack_e0);
  sceVu0AddVector(auStack_10,param_1,&uStack_e0);
  uStack_4 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_d0 = param_6;
  maybe_Vu0_UnitMatrix(auStack_120);
  sceVu0CopyMatrix(auStack_c0,auStack_120);
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_74 = 0x3f800000;
  uStack_c4 = 1;
  uStack_70 = 0x3f800000;
  uStack_ce = param_5;
  Obj_SetBlend(&uStack_d0,5,0,0);
  Obj_SetTexture(&uStack_d0,param_4,param_3,auStack_20);
  Model_Draw(param_2,&uStack_d0);
  return;
}

// 0x001c2bc0  size 0xf4
void Prop_Draw(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_110 [64];
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [64];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  Obj_Init(&uStack_d0);
  uStack_18 = 0xff7fffff;
  uStack_1c = 0xff7fffff;
  uStack_20 = 0xff7fffff;
  uStack_d0 = 0x100;
  uStack_8 = 0x7f7fffff;
  uStack_c = 0x7f7fffff;
  uStack_10 = 0x7f7fffff;
  uStack_4 = 0x3f800000;
  uStack_14 = 0x3f800000;
  maybe_Vu0_UnitMatrix(auStack_110);
  sceVu0CopyMatrix(auStack_c0,auStack_110);
  uStack_c4 = 1;
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_74 = 0x3f800000;
  uStack_ce = 2;
  uStack_70 = 0x3f800000;
  Obj_SetBlend(&uStack_d0,5,0,0);
  Obj_SetTexture(&uStack_d0,param_3,param_2,&uStack_20);
  Model_Draw(param_1,&uStack_d0);
  return;
}

// 0x001c2cc0  size 0x150
void Prop_CollideWithCar(undefined8 param_1,undefined8 param_2,float *param_3)

{
  ulong uVar1;
  float *pfVar2;
  
  uVar1 = Vu0_RaySphereTest(param_2,param_1);
  if (uVar1 != 0) {
    pfVar2 = (float *)param_2;
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        *pfVar2 = *pfVar2 + 2.0 / *param_3;
      }
    }
    else {
      *pfVar2 = *pfVar2 - 2.0 / *param_3;
    }
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 8) != 0) {
        pfVar2[1] = pfVar2[1] + 2.0 / param_3[1];
      }
    }
    else {
      pfVar2[1] = pfVar2[1] - 2.0 / param_3[1];
    }
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x20) != 0) {
        pfVar2[2] = pfVar2[2] + 2.0 / param_3[2];
      }
    }
    else {
      pfVar2[2] = pfVar2[2] - 2.0 / param_3[2];
    }
  }
  return;
}

// 0x001c2e10  size 0xb8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Prop_DrawAll(void)

{
  undefined1 auStack_160 [352];
  
  if (_s_RaceIsReplayMode == 0) {
    maybe_Pkt_InitLayers(auStack_160,0x431100,0x436180,0,0);
    Prop_Draw(auStack_160,_g_Props,400);
  }
  else {
    maybe_Pkt_InitLayers(auStack_160,0x4316c0,0x436180,0,0);
    Prop_Draw(auStack_160,_g_Props,400);
    maybe_Pkt_InitLayers(auStack_160,0x431c80,0x436180,0,0);
    Prop_Draw(auStack_160,_g_Props,400);
  }
  return;
}

// 0x001c2ed0  size 0x324
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Prop_UpdateDebris(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 uVar8;
  
  iVar4 = 0;
  iVar3 = 0;
  pfVar5 = (float *)(_g_Props + 0x12c0);
  puVar6 = _g_Props;
  do {
    iVar4 = iVar4 + 1;
    iVar2 = (iVar4 % 0x42) * 0x10;
    fVar7 = (float)fabsf((float)puVar6[1] - *(float *)(&DAT_003183a4 + iVar2));
    if ((7.0 < fVar7) || (*param_1 == 0)) {
      *param_1 = 1;
      uVar8 = maybe_Rand_Next(*(float *)(&DAT_003183a0 + iVar2) -
                              *(float *)(&DAT_003183ac + iVar2) / 2.0,
                              *(float *)(&DAT_003183a0 + iVar2) +
                              *(float *)(&DAT_003183ac + iVar2) / 2.0);
      *puVar6 = uVar8;
      fVar7 = *(float *)(&DAT_003183ac + iVar2) / 2.0;
      uVar8 = maybe_Rand_Next(*(float *)(&DAT_003183a4 + iVar2) - fVar7,
                              *(float *)(&DAT_003183a4 + iVar2) + fVar7);
      puVar6[1] = uVar8;
      fVar7 = *(float *)(&DAT_003183ac + iVar2) / 2.0;
      uVar8 = maybe_Rand_Next(*(float *)(&DAT_003183a8 + iVar2) - fVar7,
                              *(float *)(&DAT_003183a8 + iVar2) + fVar7);
      puVar6[2] = uVar8;
      uVar8 = maybe_Rand_Next(0x3ca3d70a,0x3d23d70a);
      puVar6[3] = uVar8;
      puVar6[4] = 0x43000000;
      puVar6[5] = 0x43000000;
      puVar6[6] = 0x43000000;
      puVar6[7] = 0x43000000;
      uVar1 = maybe_rand();
      Math_SinCosTable(uVar1,puVar6 + 8,puVar6 + 9);
      uVar1 = maybe_rand();
      Math_SinCosTable(uVar1,puVar6 + 10,puVar6 + 0xb);
      *pfVar5 = 0.0;
      iVar2 = maybe_rand();
      pfVar5[1] = -(((float)iVar2 / 2.1474836e+09) * 0.016666668 + 0.016666668);
      pfVar5[2] = 0.0;
      pfVar5[3] = 0.0;
      iVar2 = maybe_rand();
      pfVar5[8] = (float)(iVar2 % 0x413 + 0x413);
      pfVar5[9] = 0.0;
      iVar2 = maybe_rand();
      pfVar5[10] = (float)(iVar2 % 0x413 + 0x413);
      pfVar5[0xb] = 0.0;
    }
    else {
      fVar7 = (float)maybe_Rand_Next(0xbc088889,0x3c088889);
      *pfVar5 = (*pfVar5 + fVar7) * 0.99;
      fVar7 = (float)maybe_Rand_Next(0xbc088889,0x3c088889);
      pfVar5[2] = (pfVar5[2] + fVar7) * 0.99;
      sceVu0AddVector(puVar6,puVar6,pfVar5);
      pfVar5[9] = (float)((int)pfVar5[9] + (int)pfVar5[8]);
      pfVar5[0xb] = (float)((int)pfVar5[0xb] + (int)pfVar5[10]);
      Math_SinCosTable(pfVar5[9],puVar6 + 8,puVar6 + 9);
      Math_SinCosTable(pfVar5[0xb],puVar6 + 10,puVar6 + 0xb);
    }
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 0xc;
    pfVar5 = pfVar5 + 0xc;
  } while (iVar3 < 400);
  return;
}

// 0x001c3200  size 0xd4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Prop_DrawDebris(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_160 [352];
  
  iVar1 = _g_Props;
  if (_s_RaceIsReplayMode == 0) {
    maybe_Pkt_InitLayers(auStack_160,0x431100,0x436180,0,0);
    Prop_Draw(auStack_160,iVar1,400);
  }
  else {
    iVar2 = _g_Props + 0x4b00;
    maybe_Pkt_InitLayers(auStack_160,0x4316c0,0x436180,0,0);
    Prop_Draw(auStack_160,iVar1,200);
    maybe_Pkt_InitLayers(auStack_160,0x431c80,0x436180,0,0);
    Prop_Draw(auStack_160,iVar2,200);
  }
  return;
}

// 0x001c32e0  size 0x1c8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Prop_UpdateSparks(int *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  iVar1 = _g_Props;
  if (_s_RaceIsReplayMode == 0) {
    iVar3 = _g_Props + 0x4b00;
    sceVu0CopyVector(auStack_10,*(int *)(_g_Loading + 0x14) + 0x70);
    if (*param_1 == 0) {
      *param_1 = 1;
      Prop_SpawnSmoke(iVar1,iVar3,auStack_10,400,param_3);
    }
    Prop_SpawnSpark(iVar1,iVar3,auStack_10,400,-(param_2 != 0 ^ 1),uRam00436570,param_3);
  }
  else {
    iVar3 = *(int *)(_g_Loading + 0x18);
    iVar5 = _g_Props + 0x2580;
    iVar4 = _g_Props + 0x4b00;
    iVar6 = _g_Props + 0x7080;
    sceVu0CopyVector(auStack_20,*(int *)(_g_Loading + 0x14) + 0x70);
    sceVu0CopyVector(auStack_30,iVar3 + 0x70);
    if (*param_1 == 0) {
      *param_1 = 1;
      Prop_SpawnSmoke(iVar1,iVar5,auStack_20,200,param_3);
      Prop_SpawnSmoke(iVar4,iVar6,auStack_30,200,param_3);
    }
    Prop_SpawnSpark(iVar1,iVar5,auStack_20,200,-(param_2 != 0 ^ 1),uRam00436570,param_3);
    uVar2 = 1;
    if (param_2 == 0) {
      uVar2 = 0xffffffffffffffff;
    }
    Prop_SpawnSpark(iVar4,iVar6,auStack_30,200,uVar2,uRam004365c0,param_3);
  }
  return;
}

// 0x001c34b0  size 0x3a0
void Prop_SpawnSpark(float *param_1,float *param_2,undefined4 *param_3,int param_4,long param_5,
                    int param_6,long param_7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_8;
  float fStack_4;
  
  uStack_20 = *param_3;
  uStack_1c = param_3[1];
  uStack_18 = param_3[2];
  uStack_14 = param_3[3];
  if (param_7 != 0) {
    if (6.2831855 < fRam0036e85c) {
      fRam0036e85c = fRam0036e85c - 6.2831855;
    }
    if (fRam0036e85c < 0.0) {
      fRam0036e85c = fRam0036e85c + 6.2831855;
    }
  }
  iVar2 = 0;
  uStack_30 = DAT_00318390;
  uStack_2c = DAT_00318394;
  uStack_28 = DAT_00318398;
  uStack_24 = DAT_0031839c;
  if (0 < param_4) {
    iVar1 = (int)param_5 * 0x50;
    do {
      if (param_7 == 0) {
        fVar3 = (float)maybe_Rand_Next(0xbc088889,0x3c088889);
        *param_2 = (*param_2 + fVar3) * 0.99;
        fVar3 = (float)maybe_Rand_Next(0xbc088889,0x3c088889);
        param_2[2] = (param_2[2] + fVar3 + 0.00066666666) * 0.99;
      }
      else {
        maybe_Math_AngleToIndex(fRam0036e85c,&fStack_8,&fStack_4);
        fVar3 = (float)maybe_Rand_Next(0x3f000000,0x40600000);
        *param_1 = fStack_4 * fVar3 * 0.33333334 + *param_1 + 0.0;
        fVar3 = (float)maybe_Rand_Next(0x3f000000,0x40600000);
        param_1[2] = fStack_8 * fVar3 * 0.33333334 + param_1[2] + 0.0;
      }
      sceVu0AddVector(param_1,param_1,param_2);
      param_2[9] = (float)((int)param_2[9] + (int)param_2[8]);
      param_2[0xb] = (float)((int)param_2[0xb] + (int)param_2[10]);
      Math_SinCosTable(param_2[9],param_1 + 8,param_1 + 9);
      Math_SinCosTable(param_2[0xb],param_1 + 10,param_1 + 0xb);
      Prop_CollideWithCar(&uStack_20,param_1,&uStack_30);
      if (-1 < param_5) {
        if (param_6 == 0) {
          param_1[6] = 0.0;
          param_1[5] = 0.0;
          param_1[4] = 0.0;
        }
        else {
          fVar3 = (float)Vu0_Vec3Distance(auStack_40,param_1,iVar1 + 0x4365b0);
          fVar3 = fVar3 / 10.0;
          if (fVar3 < 1.0) {
            fVar3 = 1.0;
          }
          fVar4 = (float)sceVu0InnerProduct(auStack_40,iVar1 + 0x436580);
          fVar3 = (fVar4 * fVar4 * fVar4) / (fVar3 * fVar3);
          if (fVar3 < 0.0) {
            fVar3 = 0.0;
          }
          fVar3 = fVar3 * 128.0;
          param_1[6] = fVar3;
          param_1[5] = fVar3;
          param_1[4] = fVar3;
        }
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 0xc;
      param_2 = param_2 + 0xc;
    } while (iVar2 < param_4);
  }
  return;
}

// 0x001c3860  size 0x294
void Prop_SpawnSmoke(undefined4 *param_1,undefined4 *param_2,float *param_3,int param_4,long param_5
                    )

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  
  iVar6 = 0;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  if (0 < param_4) {
    do {
      uVar7 = maybe_Rand_Next(fVar3 - 40.0,fVar3 + 40.0);
      *param_1 = uVar7;
      uVar7 = maybe_Rand_Next(fVar4 - 15.0,fVar4 + 15.0);
      param_1[1] = uVar7;
      uVar7 = maybe_Rand_Next(fVar5 - 40.0,fVar5 + 40.0);
      param_1[2] = uVar7;
      uVar7 = maybe_Rand_Next(0x3d75c28f,0x3da3d70a);
      param_1[3] = uVar7;
      if (param_5 == 0) {
        uVar7 = maybe_Rand_Next(0x42cccccd,0x43000000);
        param_1[4] = uVar7;
        uVar7 = maybe_Rand_Next(0x42cccccd,0x43000000);
        param_1[5] = uVar7;
        uVar7 = maybe_Rand_Next(0x42cccccd,0x43000000);
        param_1[6] = uVar7;
      }
      else {
        fVar8 = (float)maybe_Rand_Next(0x42cccccd,0x43000000);
        param_1[4] = fVar8 * 0.55;
        uVar7 = maybe_Rand_Next(0x42cccccd,0x43000000);
        param_1[5] = uVar7;
        fVar8 = (float)maybe_Rand_Next(0x42cccccd,0x43000000);
        param_1[6] = fVar8 * 0.65;
      }
      param_1[7] = 0x43000000;
      uVar2 = maybe_rand();
      Math_SinCosTable(uVar2,param_1 + 8,param_1 + 9);
      uVar2 = maybe_rand();
      Math_SinCosTable(uVar2,param_1 + 10,param_1 + 0xb);
      *param_2 = 0;
      fVar8 = (float)maybe_Rand_Next(0x3d4ccccd,0x3dcccccd);
      param_2[1] = -fVar8;
      param_2[2] = 0;
      param_2[3] = 0;
      iVar1 = maybe_rand();
      param_2[8] = iVar1 % 0x826;
      param_2[9] = 0;
      iVar1 = maybe_rand();
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 0xc;
      param_2[10] = iVar1 % 0x826;
      param_2[0xb] = 0;
      param_2 = param_2 + 0xc;
    } while (iVar6 < param_4);
  }
  return;
}

// 0x001c3b00  size 0x124
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Prop_DrawSparks(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [352];
  
  iVar1 = _g_Props;
  if (_s_RaceIsReplayMode == 0) {
    sceVu0CopyVector(auStack_170,0x431100);
    maybe_Pkt_InitLayers(auStack_160,0x431100,0x436180,0,0);
    Prop_DrawModel(0x431100,auStack_160,iVar1,100,4,0x10);
  }
  else {
    iVar2 = _g_Props + 0x12c0;
    maybe_Pkt_InitLayers(auStack_160,0x4316c0,0x436180,0,0);
    Prop_DrawModel(0x4316c0,auStack_160,iVar1,100,2,0x10);
    maybe_Pkt_InitLayers(auStack_160,0x431c80,0x436180,0,0);
    Prop_DrawModel(0x431c80,auStack_160,iVar2,100,2,0x10);
  }
  return;
}

// 0x001c3c30  size 0x138
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Prop_UpdateLeaves(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  iVar2 = _g_Props;
  if (_s_RaceIsReplayMode == 0) {
    sceVu0CopyVector(auStack_10,*(int *)(_g_Loading + 0x14) + 0x70);
    if (*param_1 == 0) {
      *param_1 = 1;
      Prop_MoveLeaves(iVar2,auStack_10,100);
    }
    Prop_SpawnLeaf(iVar2,auStack_10,100,0,uRam00436570);
  }
  else {
    iVar1 = *(int *)(_g_Loading + 0x18);
    iVar3 = _g_Props + 0x12c0;
    sceVu0CopyVector(auStack_20,*(int *)(_g_Loading + 0x14) + 0x70);
    sceVu0CopyVector(auStack_30,iVar1 + 0x70);
    if (*param_1 == 0) {
      *param_1 = 1;
      Prop_MoveLeaves(iVar2,auStack_20,100);
      Prop_MoveLeaves(iVar3,auStack_30,100);
    }
    Prop_SpawnLeaf(iVar2,auStack_20,100,0,uRam00436570);
    Prop_SpawnLeaf(iVar3,auStack_30,100,1,uRam004365c0);
  }
  return;
}

// 0x001c3d70  size 0x268
void Prop_SpawnLeaf(float *param_1,undefined4 *param_2,int param_3,int param_4,long param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = 0;
  uStack_10 = *param_2;
  uStack_c = param_2[1];
  uStack_8 = param_2[2];
  uStack_4 = param_2[3];
  uStack_20 = DAT_00318380;
  uStack_1c = DAT_00318384;
  uStack_18 = DAT_00318388;
  uStack_14 = DAT_0031838c;
  if (0 < param_3) {
    do {
      pfVar2 = param_1 + 10;
      fVar4 = (float)maybe_Rand_Next(0xbd088889,0x3d088889);
      pfVar1 = param_1 + 0xb;
      *pfVar2 = (*pfVar2 + fVar4) * 0.985;
      fVar4 = (float)maybe_Rand_Next(0xbd088889,0x3d088889);
      *pfVar1 = (*pfVar1 + fVar4) * 0.97;
      *param_1 = *param_1 + *pfVar2;
      fVar4 = (float)maybe_Rand_Next(0xbd4ccccd,0x3d4ccccd);
      param_1[1] = param_1[1] - fVar4;
      param_1[2] = param_1[2] + *pfVar1;
      Prop_CollideWithCar(&uStack_10,param_1,&uStack_20);
      if (param_5 == 0) {
        param_1[7] = 0.0;
      }
      else {
        fVar4 = (float)Vu0_Vec3Distance(auStack_30,param_1,param_4 * 0x50 + 0x4365b0);
        fVar4 = fVar4 / 10.0;
        if (fVar4 < 1.0) {
          fVar4 = 1.0;
        }
        fVar5 = (float)sceVu0InnerProduct(auStack_30,param_4 * 0x50 + 0x436580);
        fVar4 = (fVar5 * fVar5 * fVar5) / (fVar4 * fVar4);
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        param_1[7] = fVar4 * 128.0;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0xc;
    } while (iVar3 < param_3);
  }
  return;
}

// 0x001c3fe0  size 0x144
void Prop_MoveLeaves(undefined4 *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 0;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  if (0 < param_3) {
    do {
      uVar5 = maybe_Rand_Next(fVar1 - 50.0,fVar1 + 50.0);
      *param_1 = uVar5;
      uVar5 = maybe_Rand_Next(fVar2 - 5.0,fVar2 + 5.0);
      param_1[1] = uVar5;
      uVar5 = maybe_Rand_Next(fVar3 - 50.0,fVar3 + 50.0);
      param_1[2] = uVar5;
      uVar5 = maybe_Rand_Next(0x3ca3d70a,0x3d23d70a);
      param_1[3] = uVar5;
      param_1[4] = 0x437f0000;
      param_1[5] = 0x437f0000;
      param_1[6] = 0x437f0000;
      param_1[7] = 0;
      uVar5 = maybe_Rand_Next(0xbec90fdb,0x3ec90fdb);
      maybe_Math_AngleToIndex(uVar5,param_1 + 8,param_1 + 9);
      param_1[10] = 0;
      iVar4 = iVar4 + 1;
      param_1[0xb] = 0;
      param_1 = param_1 + 0xc;
    } while (iVar4 < param_3);
  }
  return;
}

