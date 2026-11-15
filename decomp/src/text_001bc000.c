// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001bc000 - 0x001c0000
#include "ghidra_types.h"

// 0x001bc010  size 0x210
undefined4 Profile_EquipFromStock(undefined8 param_1,undefined8 param_2,short param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  short *psVar13;
  undefined1 auStack_4 [4];
  
  iVar6 = (int)param_1;
  iVar4 = param_3 * 2 + iVar6;
  psVar13 = (short *)(iVar4 + 0x1420);
  puVar12 = (undefined2 *)(iVar6 + *(short *)(iVar6 + 0x13ec) * 0xcc);
  if ((*(short *)(iVar4 + 0x1420) < 1) &&
     (sVar3 = CarDb_FindDefaultPart(*puVar12,param_2,0xffffffffffffffff), param_3 != sVar3)) {
    uVar7 = 0;
  }
  else {
    sVar3 = *(short *)(iVar6 + 0x13ec);
    puVar11 = (undefined2 *)(iVar6 + sVar3 * 0xcc);
    uVar8 = CarRec_GetPartSlotB(puVar11,param_2);
    psVar5 = (short *)uVar8;
    if ((char)psVar5[1] == '\x1f') {
      sVar1 = *psVar5;
      sVar2 = CarDb_FindDefaultPart(*puVar11,param_2,0xffffffffffffffff);
      if (CONCAT44((int)((ulong)(long)sVar1 >> 0x20),(int)sVar1) != (long)sVar2) {
        iVar6 = *psVar5 * 2 + iVar6;
        sVar1 = *(short *)(iVar6 + 0x1420);
        if (sVar1 < 99) {
          *(short *)(iVar6 + 0x1420) = sVar1 + 1;
        }
        Profile_ApplyStockParts(param_1,sVar3,param_2);
        CarRec_ClearParts(uVar8);
        uVar9 = CarDb_FindDefaultPart(*puVar11,param_2,0xffffffffffffffff);
        CarRec_SetModelAndColor(uVar8,uVar9);
      }
    }
    else {
      CarRec_ClearParts(uVar8);
      uVar9 = CarDb_FindDefaultPart(*puVar11,param_2,0xffffffffffffffff);
      CarRec_SetModelAndColor(uVar8,uVar9);
    }
    auStack_4[2] = 0x1f;
    auStack_4._0_2_ = param_3;
    lVar10 = CarRec_ApplyDefaultParts(puVar12,param_2,auStack_4._0_3_);
    if (lVar10 == 0) {
      uVar7 = 0;
    }
    else {
      sVar3 = CarDb_FindDefaultPart(*puVar12,param_2,0xffffffffffffffff);
      if (param_3 != sVar3) {
        *psVar13 = *psVar13 + -1;
      }
      uVar7 = 1;
    }
  }
  return uVar7;
}

// 0x001bc220  size 0x18
undefined2 Profile_GetPartStock(int param_1,short param_2)

{
  return *(undefined2 *)(param_2 * 2 + param_1 + 0x1420);
}

// 0x001bc240  size 0x144
void Profile_AddCar(undefined4 *param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined4 auStack_d0 [2];
  undefined1 uStack_c7;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined4 uStack_c0;
  undefined4 auStack_bc [15];
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  sVar1 = *(short *)(param_2 + 0x13ec);
  CarRec_Init(auStack_d0);
  auStack_d0[0]._0_1_ = 1;
  puVar5 = auStack_bc;
  iVar4 = 0xf;
  iVar3 = sVar1 * 0xcc;
  puVar7 = (undefined2 *)(param_2 + iVar3);
  puVar6 = (undefined4 *)(puVar7 + 10);
  uStack_c4 = *puVar7;
  uStack_c2 = puVar7[1];
  uStack_c0 = *(undefined4 *)(puVar7 + 2);
  do {
    iVar4 = iVar4 + -1;
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (0 < iVar4);
  puVar7 = auStack_80;
  puVar8 = (undefined2 *)(iVar3 + param_2 + 0x50);
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    uVar2 = puVar8[1];
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 2;
    puVar7[1] = uVar2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar4);
  puVar7 = auStack_60;
  puVar8 = (undefined2 *)(iVar3 + param_2 + 0x70);
  iVar4 = 0x15;
  do {
    iVar4 = iVar4 + -1;
    uVar2 = puVar8[1];
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 2;
    puVar7[1] = uVar2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar4);
  puVar5 = auStack_d0;
  iVar4 = 0x33;
  uStack_c = *(undefined1 *)(iVar3 + param_2 + 0xc4);
  uStack_8 = *(undefined4 *)(iVar3 + param_2 + 200);
  auStack_d0[1] = 1;
  uStack_c7 = 0;
  do {
    iVar4 = iVar4 + -1;
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar4);
  return;
}

// 0x001bc390  size 0x1c
int Profile_GetCarRecord(int param_1,int param_2)

{
  return param_1 + param_2 * 0xcc;
}

// 0x001bc3b0  size 0x40
void Profile_CopyCarRecord(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x33;
  puVar1 = (undefined4 *)(param_2 + param_3 * 0xcc);
  do {
    iVar2 = iVar2 + -1;
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar2);
  return;
}

// 0x001bc3f0  size 0x20
/* +0x13ec index, 0xcc records; 41 callers */

int Profile_GetCurrentCar(int param_1)

{
  return param_1 + *(short *)(param_1 + 0x13ec) * 0xcc;
}

// 0x001bc410  size 0x44
void Profile_CopyCurrentCar(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x33;
  puVar1 = (undefined4 *)(param_2 + *(short *)(param_2 + 0x13ec) * 0xcc);
  do {
    iVar2 = iVar2 + -1;
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar2);
  return;
}

// 0x001bc460  size 0x8
undefined2 Profile_GetCurrentCarIndex(int param_1)

{
  return *(undefined2 *)(param_1 + 0x13ec);
}

// 0x001bc470  size 0x24
undefined2 Profile_GetCurrentCarModel(int param_1)

{
  return *(undefined2 *)(param_1 + *(short *)(param_1 + 0x13ec) * 0xcc);
}

// 0x001bc4a0  size 0x28
undefined4 Profile_SetCurrentCarColor(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + *(short *)(param_1 + 0x13ec) * 0xcc + 2) = param_2;
  return 1;
}

// 0x001bc4d0  size 0x1c
void Profile_CopyTime(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *(undefined4 *)(param_2 + 4);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}

// 0x001bc4f0  size 0x10
bool Profile_HasFreeGarageSlot(int param_1)

{
  return *(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x18);
}

// 0x001bc500  size 0x8
undefined1 Profile_GetGarageSize(int param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}

// 0x001bc510  size 0xe4
/* wraps at 9999 */

void Profile_AdvanceCounter(short *param_1,char param_2)

{
  short sVar1;
  
  *param_1 = *param_1 + 1;
  if (9999 < *param_1) {
    *param_1 = 9999;
  }
  if ((param_2 == '\x04') || (param_2 == '\x05')) {
    param_1[3] = param_1[3] + 1;
  }
  else if (param_2 == '\0') {
    param_1[2] = param_1[2] + 1;
    param_1[3] = param_1[3] + 1;
  }
  else {
    if (param_2 != '\x01') {
      sVar1 = param_1[1];
      goto LAB_001bc598;
    }
    param_1[1] = param_1[1] + 1;
  }
  sVar1 = param_1[1];
LAB_001bc598:
  if (9999 < sVar1) {
    param_1[1] = 9999;
  }
  if (9999 < param_1[2]) {
    param_1[2] = 9999;
  }
  if (9999 < param_1[3]) {
    param_1[3] = 9999;
  }
  return;
}

// 0x001bc600  size 0x1c
/* 21 callers */

int Profile_GetCarRecordB(int param_1,int param_2)

{
  return param_1 + param_2 * 0xcc;
}

// 0x001bc620  size 0x388
void Profile_InitNewGame(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x16e4) = 5;
  iVar2 = 0;
  *(undefined2 *)(param_1 + 0x13ec) = 0xffff;
  iVar4 = param_1;
  iVar3 = param_1;
  do {
    CarRec_ResetColors(iVar4);
    iVar2 = iVar2 + 1;
    *(undefined2 *)(iVar3 + 0x13ee) = 0xffff;
    iVar4 = iVar4 + 0xcc;
    iVar3 = iVar3 + 2;
  } while (iVar2 < 0x19);
  iVar3 = 0;
  iVar4 = param_1;
  do {
    *(undefined4 *)(iVar4 + 0x16e8) = 0;
    iVar3 = iVar3 + 8;
    *(undefined4 *)(iVar4 + 0x16ec) = 0;
    *(undefined4 *)(iVar4 + 0x16f0) = 0;
    *(undefined4 *)(iVar4 + 0x16f4) = 0;
    *(undefined4 *)(iVar4 + 0x16f8) = 0;
    *(undefined4 *)(iVar4 + 0x16fc) = 0;
    *(undefined4 *)(iVar4 + 0x1700) = 0;
    *(undefined4 *)(iVar4 + 0x1704) = 0;
    iVar4 = iVar4 + 0x20;
  } while (iVar3 < 0x15a);
  iVar4 = iVar3 * 4 + param_1;
  iVar3 = 0;
  *(undefined4 *)(iVar4 + 0x16e8) = 0;
  *(undefined4 *)(iVar4 + 0x16ec) = 0;
  *(undefined4 *)(param_1 + 0x16e8) = 1;
  *(undefined4 *)(param_1 + 0x170c) = 1;
  *(undefined4 *)(param_1 + 0x1754) = 1;
  *(undefined4 *)(param_1 + 0x1730) = 1;
  *(undefined4 *)(param_1 + 0x16ec) = 1;
  *(undefined4 *)(param_1 + 0x1710) = 1;
  *(undefined4 *)(param_1 + 0x1758) = 1;
  *(undefined4 *)(param_1 + 0x1734) = 1;
  *(undefined4 *)(param_1 + 0x16f0) = 1;
  *(undefined4 *)(param_1 + 0x1714) = 1;
  *(undefined4 *)(param_1 + 0x175c) = 1;
  *(undefined4 *)(param_1 + 0x1738) = 1;
  *(undefined4 *)(param_1 + 0x1790) = 1;
  *(undefined4 *)(param_1 + 0x17b4) = 1;
  *(undefined4 *)(param_1 + 0x17fc) = 1;
  *(undefined4 *)(param_1 + 0x17d8) = 1;
  *(undefined4 *)(param_1 + 0x1794) = 1;
  *(undefined4 *)(param_1 + 0x17b8) = 1;
  *(undefined4 *)(param_1 + 0x1800) = 1;
  *(undefined4 *)(param_1 + 0x17dc) = 1;
  *(undefined4 *)(param_1 + 0x1798) = 1;
  *(undefined4 *)(param_1 + 0x17bc) = 1;
  *(undefined4 *)(param_1 + 0x1804) = 1;
  *(undefined4 *)(param_1 + 0x17e0) = 1;
  *(undefined4 *)(param_1 + 0x1778) = 1;
  *(undefined4 *)(param_1 + 0x177c) = 1;
  *(undefined4 *)(param_1 + 0x1780) = 1;
  *(undefined4 *)(param_1 + 0x1824) = 1;
  *(undefined4 *)(param_1 + 0x1828) = 1;
  *(undefined4 *)(param_1 + 0x182c) = 1;
  *(undefined4 *)(param_1 + 0x183c) = 1;
  *(undefined4 *)(param_1 + 0x1840) = 1;
  *(undefined4 *)(param_1 + 0x1844) = 1;
  *(undefined4 *)(param_1 + 0x1854) = 1;
  *(undefined4 *)(param_1 + 0x1858) = 1;
  *(undefined4 *)(param_1 + 0x185c) = 1;
  *(undefined4 *)(param_1 + 0x186c) = 1;
  *(undefined4 *)(param_1 + 0x1870) = 1;
  *(undefined4 *)(param_1 + 0x1874) = 1;
  *(undefined4 *)(param_1 + 0x1884) = 1;
  *(undefined4 *)(param_1 + 0x1888) = 1;
  *(undefined4 *)(param_1 + 0x1894) = 1;
  *(undefined4 *)(param_1 + 0x18a0) = 1;
  *(undefined4 *)(param_1 + 0x18ac) = 1;
  *(undefined4 *)(param_1 + 0x18b0) = 1;
  *(undefined4 *)(param_1 + 0x18b4) = 1;
  *(undefined4 *)(param_1 + 0x18c4) = 1;
  *(undefined4 *)(param_1 + 0x18c8) = 1;
  *(undefined4 *)(param_1 + 0x18cc) = 1;
  *(undefined4 *)(param_1 + 0x18dc) = 1;
  *(undefined4 *)(param_1 + 0x18e0) = 1;
  *(undefined4 *)(param_1 + 0x18e4) = 1;
  *(undefined4 *)(param_1 + 0x18f4) = 1;
  *(undefined4 *)(param_1 + 0x18f8) = 1;
  *(undefined4 *)(param_1 + 0x18fc) = 1;
  *(undefined4 *)(param_1 + 0x190c) = 1;
  *(undefined4 *)(param_1 + 0x1910) = 1;
  *(undefined4 *)(param_1 + 0x1914) = 1;
  *(undefined4 *)(param_1 + 0x1918) = 1;
  iVar4 = param_1;
  do {
    *(undefined4 *)(iVar4 + 0x199c) = 1;
    iVar3 = iVar3 + 8;
    *(undefined4 *)(iVar4 + 0x19a0) = 1;
    *(undefined4 *)(iVar4 + 0x19a4) = 1;
    *(undefined4 *)(iVar4 + 0x19a8) = 1;
    *(undefined4 *)(iVar4 + 0x19ac) = 1;
    *(undefined4 *)(iVar4 + 0x19b0) = 1;
    *(undefined4 *)(iVar4 + 0x19b4) = 1;
    *(undefined4 *)(iVar4 + 0x19b8) = 1;
    iVar4 = iVar4 + 0x20;
  } while (iVar3 < 0xad);
  iVar4 = iVar3 * 4 + param_1;
  iVar3 = 0;
  *(undefined4 *)(iVar4 + 0x199c) = 1;
  *(undefined4 *)(iVar4 + 0x19a0) = 1;
  *(undefined4 *)(iVar4 + 0x19a4) = 1;
  *(undefined4 *)(iVar4 + 0x19a8) = 1;
  *(undefined4 *)(iVar4 + 0x19ac) = 1;
  *(undefined4 *)(param_1 + 0x191c) = 1;
  *(undefined4 *)(param_1 + 0x1920) = 1;
  *(undefined4 *)(param_1 + 0x1924) = 1;
  *(undefined4 *)(param_1 + 0x1928) = 1;
  *(undefined4 *)(param_1 + 0x1934) = 1;
  *(undefined4 *)(param_1 + 0x1938) = 1;
  *(undefined4 *)(param_1 + 0x193c) = 1;
  *(undefined4 *)(param_1 + 0x1948) = 1;
  *(undefined4 *)(param_1 + 0x194c) = 1;
  *(undefined4 *)(param_1 + 0x1950) = 1;
  *(undefined4 *)(param_1 + 0x195c) = 1;
  *(undefined4 *)(param_1 + 0x1960) = 1;
  *(undefined4 *)(param_1 + 0x1964) = 1;
  *(undefined4 *)(param_1 + 0x1970) = 1;
  *(undefined4 *)(param_1 + 0x1974) = 1;
  *(undefined4 *)(param_1 + 0x1978) = 1;
  *(undefined4 *)(param_1 + 0x197c) = 1;
  *(undefined4 *)(param_1 + 0x1980) = 1;
  *(undefined4 *)(param_1 + 0x1984) = 1;
  *(undefined4 *)(param_1 + 0x1988) = 1;
  *(undefined4 *)(param_1 + 0x198c) = 1;
  *(undefined4 *)(param_1 + 0x1990) = 1;
  *(undefined4 *)(param_1 + 0x1994) = 1;
  *(undefined4 *)(param_1 + 0x1998) = 1;
  iVar4 = param_1;
  do {
    *(undefined4 *)(iVar4 + 0x1c70) = 0;
    iVar3 = iVar3 + 8;
    *(undefined4 *)(iVar4 + 0x20f0) = 0;
    *(undefined4 *)(iVar4 + 0x1c74) = 0;
    *(undefined4 *)(iVar4 + 0x20f4) = 0;
    *(undefined4 *)(iVar4 + 0x1c78) = 0;
    *(undefined4 *)(iVar4 + 0x20f8) = 0;
    *(undefined4 *)(iVar4 + 0x1c7c) = 0;
    *(undefined4 *)(iVar4 + 0x20fc) = 0;
    *(undefined4 *)(iVar4 + 0x1c80) = 0;
    *(undefined4 *)(iVar4 + 0x2100) = 0;
    *(undefined4 *)(iVar4 + 0x1c84) = 0;
    *(undefined4 *)(iVar4 + 0x2104) = 0;
    *(undefined4 *)(iVar4 + 0x1c88) = 0;
    *(undefined4 *)(iVar4 + 0x2108) = 0;
    *(undefined4 *)(iVar4 + 0x1c8c) = 0;
    *(undefined4 *)(iVar4 + 0x210c) = 0;
    iVar4 = iVar4 + 0x20;
  } while (iVar3 < 0x120);
  for (psVar1 = &DAT_00318050; *psVar1 != -1; psVar1 = psVar1 + 1) {
    *(undefined4 *)(param_1 + *psVar1 * 4 + 0x1c70) = 1;
  }
  for (psVar1 = &DAT_00318080; *psVar1 != -1; psVar1 = psVar1 + 1) {
    *(undefined4 *)(param_1 + *psVar1 * 4 + 0x20f0) = 1;
  }
  iVar3 = 0;
  iVar4 = param_1;
  do {
    CarRec_ResetParts(iVar4 + 0x2570);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x44;
  } while (iVar3 < 6);
  iVar3 = 0;
  iVar4 = param_1;
  do {
    *(undefined2 *)(iVar4 + 0x1420) = 0;
    iVar3 = iVar3 + 8;
    *(undefined2 *)(iVar4 + 0x1422) = 0;
    *(undefined2 *)(iVar4 + 0x1424) = 0;
    *(undefined2 *)(iVar4 + 0x1426) = 0;
    *(undefined2 *)(iVar4 + 0x1428) = 0;
    *(undefined2 *)(iVar4 + 0x142a) = 0;
    *(undefined2 *)(iVar4 + 0x142c) = 0;
    *(undefined2 *)(iVar4 + 0x142e) = 0;
    iVar4 = iVar4 + 0x10;
  } while (iVar3 < 0x15a);
  param_1 = iVar3 * 2 + param_1;
  *(undefined2 *)(param_1 + 0x1420) = 0;
  *(undefined2 *)(param_1 + 0x1422) = 0;
  return;
}

// 0x001bc9b0  size 0x94
/* money -= x, spent += x */

bool Profile_SpendMoney(int param_1,int param_2,long param_3)

{
  bool bVar1;
  
  *(int *)(param_1 + 0x2738) = *(int *)(param_1 + 0x2738) - param_2;
  *(int *)(param_1 + 0x2be0) = *(int *)(param_1 + 0x2be0) + param_2;
  if ((param_3 != 0) &&
     (*(int *)(param_1 + 0x2be8) = *(int *)(param_1 + 0x2be8) + param_2,
     99999999 < *(int *)(param_1 + 0x2be8))) {
    *(undefined4 *)(param_1 + 0x2be8) = 99999999;
  }
  if (99999999 < *(int *)(param_1 + 0x2be0)) {
    *(undefined4 *)(param_1 + 0x2be0) = 99999999;
  }
  bVar1 = -1 < *(int *)(param_1 + 0x2738);
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x2738) = 0;
  }
  return bVar1;
}

// 0x001bca50  size 0xa8
/* money += x, earned += x */

void Profile_EarnMoney(int param_1,int param_2,long param_3)

{
  *(int *)(param_1 + 0x2738) = *(int *)(param_1 + 0x2738) + param_2;
  *(int *)(param_1 + 0x2bdc) = *(int *)(param_1 + 0x2bdc) + param_2;
  if ((param_3 != 0) &&
     (*(int *)(param_1 + 0x2be4) = *(int *)(param_1 + 0x2be4) + param_2,
     99999999 < *(int *)(param_1 + 0x2be4))) {
    *(undefined4 *)(param_1 + 0x2be4) = 99999999;
  }
  if (99999999 < *(int *)(param_1 + 0x2bdc)) {
    *(undefined4 *)(param_1 + 0x2bdc) = 99999999;
  }
  if (99999999 < *(int *)(param_1 + 0x2738)) {
    *(undefined4 *)(param_1 + 0x2738) = 99999999;
  }
  return;
}

// 0x001bcb00  size 0x8
/* +0x2738; 59 callers */

undefined4 Profile_GetMoney(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2738);
}

// 0x001bcb10  size 0x354
void Profile_StartNight(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)param_1;
  if (*(char *)(iVar7 + 0x2730) == '\0') {
    iVar5 = 0x14;
    *(undefined1 *)(iVar7 + 0x2730) = 1;
  }
  else {
    *(undefined1 *)(iVar7 + 0x2730) = 0;
    *(int *)(iVar7 + 0x2734) = *(int *)(iVar7 + 0x2734) + 1;
    iVar5 = 0x46;
    if ((9999999 < *(int *)(iVar7 + 0x2734)) && (*(char *)(iVar7 + 0x273c) == '\0')) {
      *(undefined1 *)(iVar7 + 0x273c) = 1;
    }
    if (*(int *)(iVar7 + 0x2734) % 0xf == 0) {
      iVar8 = 0;
      iVar4 = 0;
      do {
        if (*(char *)(iVar7 + iVar4 + 0xd82c) == '\x02') {
          iVar6 = GameDb_GetTeamInfo(iVar4);
          iVar8 = iVar8 + *(int *)(iVar6 + 0xc);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x1e);
      *(int *)(iVar7 + 0x2738) = *(int *)(iVar7 + 0x2738) + iVar8;
      *(int *)(iVar7 + 0x2bdc) = *(int *)(iVar7 + 0x2bdc) + iVar8;
      if (99999999 < *(int *)(iVar7 + 0x2bdc)) {
        *(undefined4 *)(iVar7 + 0x2bdc) = 99999999;
      }
      if (99999999 < *(int *)(iVar7 + 0x2738)) {
        *(undefined4 *)(iVar7 + 0x2738) = 99999999;
      }
    }
    Profile_AdvanceDay(param_1);
  }
  *(undefined1 *)(iVar7 + 0x3fbc) = 0;
  *(undefined1 *)(iVar7 + 0x3fbd) = 0;
  *(undefined1 *)(iVar7 + 0x3fbe) = 0;
  *(undefined1 *)(iVar7 + 0x3fbf) = 0;
  *(undefined1 *)(iVar7 + 0x3fc0) = 0;
  *(undefined1 *)(iVar7 + 0x3fc1) = 0;
  *(undefined1 *)(iVar7 + 0x3fc2) = 0;
  *(undefined1 *)(iVar7 + 0x3fc3) = 0;
  uVar3 = (*(int *)(iVar7 + 0x2734) + -1) / 0x1c + 1;
  if (999 < (int)uVar3) {
    uVar3 = 999;
  }
  if (uVar3 < 0xd) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar3) {
    case 0:
      break;
    case 1:
    case 2:
      iVar5 = iVar5 + 3;
      *(undefined1 *)(iVar7 + 0x2732) = 3;
      break;
    default:
      *(undefined1 *)(iVar7 + 0x2732) = 0;
      iVar5 = iVar5 + 3;
      break;
    case 6:
    case 7:
    case 8:
      iVar5 = iVar5 + 3;
      *(undefined1 *)(iVar7 + 0x2732) = 1;
      break;
    case 9:
      iVar5 = iVar5 + 5;
      *(undefined1 *)(iVar7 + 0x2732) = 2;
    }
  }
  iVar4 = maybe_Rand_Float();
  if (iVar4 % 100 < iVar5) {
    iVar5 = maybe_Rand_Float();
    iVar5 = iVar5 % 100;
    cVar2 = *(char *)(iVar7 + 0x2731);
    if (cVar2 == '\x04') {
      if (iVar5 < 0x50) {
        *(undefined1 *)(iVar7 + 0x2731) = 0;
      }
      else if (iVar5 < 0x55) {
        *(undefined1 *)(iVar7 + 0x2731) = 1;
      }
      else if (iVar5 < 0x5a) {
        *(undefined1 *)(iVar7 + 0x2731) = 3;
      }
    }
    else if (cVar2 == '\x01') {
      if (iVar5 < 0x28) {
        *(undefined1 *)(iVar7 + 0x2731) = 0;
      }
      else if (iVar5 < 0x46) {
        *(undefined1 *)(iVar7 + 0x2731) = 3;
      }
      else if (iVar5 < 0x5a) {
        *(undefined1 *)(iVar7 + 0x2731) = 4;
      }
    }
    else if (cVar2 == '\x03') {
      if (iVar5 < 0x28) {
        *(undefined1 *)(iVar7 + 0x2731) = 0;
      }
      else if (iVar5 < 0x41) {
        *(undefined1 *)(iVar7 + 0x2731) = 1;
      }
      else if (iVar5 < 0x4b) {
        *(undefined1 *)(iVar7 + 0x2731) = 4;
      }
    }
    else {
      if (cVar2 != '\0') {
        uVar1 = *(undefined1 *)(iVar7 + 0x2730);
        goto LAB_001bce30;
      }
      if (iVar5 < 0x1e) {
        *(undefined1 *)(iVar7 + 0x2731) = 3;
      }
      else if (iVar5 < 0x32) {
        *(undefined1 *)(iVar7 + 0x2731) = 1;
      }
      else if (iVar5 < 0x37) {
        *(undefined1 *)(iVar7 + 0x2731) = 4;
      }
    }
  }
  uVar1 = *(undefined1 *)(iVar7 + 0x2730);
LAB_001bce30:
  RaceCtx_Set_13(uVar1);
  RaceCtx_Set_12(*(undefined1 *)(iVar7 + 0x2731));
  RaceCtx_Set_14(*(undefined1 *)(iVar7 + 0x2732));
  return;
}

// 0x001bce70  size 0xe34
void Profile_ScheduleRivals(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 uVar17;
  int iStack_810;
  int iStack_800;
  int iStack_7f0;
  undefined4 uStack_7e0;
  undefined4 auStack_7dc [18];
  undefined4 uStack_794;
  undefined4 auStack_78c [19];
  int aiStack_740 [401];
  short sStack_fc;
  short sStack_fa;
  uint uStack_f0;
  uint auStack_ec [4];
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 auStack_cc [18];
  undefined4 uStack_84;
  undefined1 auStack_80 [40];
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  iVar6 = 0xca;
  piVar9 = aiStack_740;
  piVar14 = (int *)(param_1 + 0x4c30);
  do {
    iVar6 = iVar6 + -1;
    iVar10 = piVar14[1];
    *piVar9 = *piVar14;
    piVar9[1] = iVar10;
    piVar14 = piVar14 + 2;
    piVar9 = piVar9 + 2;
  } while (0 < iVar6);
  iStack_800 = 0;
  iVar10 = 0;
  iVar6 = param_1;
  do {
    if (*(int *)(iVar6 + 0x2b14) != -1) {
      iStack_800 = iStack_800 + 1;
    }
    iVar10 = iVar10 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar10 < 0x28);
  iVar6 = *(int *)(param_1 + 0x274c);
  iStack_7f0 = 0;
  iStack_810 = 0x81;
  iVar10 = param_1;
  do {
    if (*(int *)(iVar10 + 0x2a74) != -1) {
      bVar2 = false;
      uVar3 = GameDb_GetRivalCar(iStack_7f0);
      memcpy(&uStack_7e0,uVar3,0x50);
      iVar7 = 9;
      puVar15 = auStack_7dc;
      puVar11 = auStack_78c;
      do {
        iVar7 = iVar7 + -1;
        uVar17 = puVar15[1];
        *puVar11 = *puVar15;
        puVar11[1] = uVar17;
        puVar15 = puVar15 + 2;
        puVar11 = puVar11 + 2;
      } while (0 < iVar7);
      iVar7 = 9;
      puVar15 = auStack_78c;
      puVar11 = auStack_cc;
      uStack_d0 = uStack_7e0;
      do {
        iVar7 = iVar7 + -1;
        uVar17 = puVar15[1];
        *puVar11 = *puVar15;
        puVar11[1] = uVar17;
        puVar15 = puVar15 + 2;
        puVar11 = puVar11 + 2;
      } while (0 < iVar7);
      iVar16 = 0;
      puVar11 = &uStack_d0;
      uStack_84 = uStack_794;
      iVar7 = iStack_810;
      do {
        uStack_f0 = puVar11[1];
        auStack_ec[0] = puVar11[2];
        auStack_ec[1] = puVar11[3];
        auStack_ec[2] = puVar11[4];
        auStack_ec[3] = puVar11[5];
        uStack_dc = puVar11[6];
        if (uStack_f0 < 0x14) {
                    /* WARNING: Switch is manually overridden */
          switch(uStack_f0) {
          case 0:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                iStack_8 = *(int *)(iVar13 + 0x2750);
                uStack_4 = *(undefined4 *)(iVar13 + 0x2754);
                if (*(int *)(iVar13 + 0x2750) == 1) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             0xffffffffffffffff);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
            break;
          case 1:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                iStack_10 = *(int *)(iVar13 + 0x2750);
                uStack_c = *(undefined4 *)(iVar13 + 0x2754);
                if (*(int *)(iVar13 + 0x2750) == 2) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             0xffffffffffffffff);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
            break;
          case 2:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                iStack_18 = *(int *)(iVar13 + 0x2750);
                uStack_14 = *(undefined4 *)(iVar13 + 0x2754);
                if (*(int *)(iVar13 + 0x2750) == 4) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             0xffffffffffffffff);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
            break;
          case 3:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                iStack_20 = *(int *)(iVar13 + 0x2750);
                uStack_1c = *(undefined4 *)(iVar13 + 0x2754);
                if (*(int *)(iVar13 + 0x2750) == 8) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             0xffffffffffffffff);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
            break;
          case 4:
            iVar5 = 0;
            puVar12 = &uStack_f0;
            do {
              uVar1 = puVar12[1];
              if (uVar1 == 0xffffffff) break;
              if ((*(int *)(param_1 + 0x2748) <= (int)uVar1) &&
                 ((int)uVar1 < *(int *)(param_1 + 0x2744))) {
                uVar4 = maybe_Rand_Float();
                iVar5 = (int)(uVar4 & 3);
                if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                  iVar5 = iVar5 + -4;
                }
                Career_AssignRivalCar
                          (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                           0xffffffffffffffff);
                Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                bVar2 = true;
                break;
              }
              iVar5 = iVar5 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar5 < 5);
            break;
          case 5:
            if ((*(char *)(param_1 + 0x273d) != *(char *)(param_1 + 0x273e)) &&
               (*(char *)(param_1 + 0x273f) != *(char *)(param_1 + 0x2740))) {
              uVar4 = maybe_Rand_Float();
              iVar5 = (int)(uVar4 & 3);
              if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                iVar5 = iVar5 + -4;
              }
              Career_AssignRivalCar
                        (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                         *(undefined1 *)(param_1 + 0x273d));
              Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
              *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
              bVar2 = true;
            }
            break;
          case 6:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                iStack_28 = *(int *)(iVar13 + 0x2750);
                uStack_24 = *(undefined4 *)(iVar13 + 0x2754);
                if (*(int *)(iVar13 + 0x2750) == 0x40) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             0xffffffffffffffff);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
            break;
          case 7:
            iVar5 = 0;
            puVar12 = &uStack_f0;
            do {
              uVar1 = puVar12[1];
              if (uVar1 == 0xffffffff) break;
              for (piVar9 = aiStack_740; piVar9[1] != 0xffffffff; piVar9 = piVar9 + 2) {
                if ((piVar9[1] == uVar1) && (piVar9[2] != 0)) {
                  if (*(short *)(param_1 + uVar1 * 2 + 0x3fc4) == 1) {
                    uVar4 = maybe_Rand_Float();
                    iVar13 = (int)(uVar4 & 3);
                    if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                      iVar13 = iVar13 + -4;
                    }
                    Career_AssignRivalCar
                              (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar13,uStack_d0
                               ,puVar12[1]);
                    Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                    *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                    bVar2 = true;
                  }
                  break;
                }
              }
              if (bVar2) break;
              iVar5 = iVar5 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar5 < 5);
            break;
          case 8:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                uVar17 = *(undefined4 *)(iVar13 + 0x2754);
                uStack_2c = uVar17;
                iStack_30 = *(int *)(iVar13 + 0x2750);
                if (*(int *)(iVar13 + 0x2750) == 0x100) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             uVar17);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
            break;
          case 9:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                iStack_38 = *(int *)(iVar13 + 0x2750);
                uStack_34 = *(undefined4 *)(iVar13 + 0x2754);
                if (*(int *)(iVar13 + 0x2750) == 0x200) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             0xffffffffffffffff);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
            break;
          case 10:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                iStack_40 = *(int *)(iVar13 + 0x2750);
                uStack_3c = *(undefined4 *)(iVar13 + 0x2754);
                if (*(int *)(iVar13 + 0x2750) == 0x400) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             0xffffffffffffffff);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
            break;
          case 0xb:
            iVar5 = 0;
            puVar12 = &uStack_f0;
            do {
              if (puVar12[1] == 0xffffffff) break;
              if ((*(int *)(param_1 + 0x2734) < 9999) &&
                 ((*(int *)(param_1 + 0x2734) - *(int *)(iVar10 + 0x2a74)) % (int)puVar12[1] == 0))
              {
                uVar4 = maybe_Rand_Float();
                iVar5 = (int)(uVar4 & 3);
                if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                  iVar5 = iVar5 + -4;
                }
                Career_AssignRivalCar
                          (auStack_80,*(int *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                           *(int *)(param_1 + 0x2734) - *(int *)(iVar10 + 0x2a74));
                Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                bVar2 = true;
                break;
              }
              iVar5 = iVar5 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar5 < 5);
            break;
          case 0xc:
            if ((long)(int)auStack_ec[0] <= (long)sStack_fc) {
              uVar4 = maybe_Rand_Float();
              iVar5 = (int)(uVar4 & 3);
              if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                iVar5 = iVar5 + -4;
              }
              Career_AssignRivalCar
                        (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                         (long)sStack_fc);
              Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
              *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
              bVar2 = true;
            }
            break;
          case 0xd:
            if ((int)auStack_ec[0] <= (int)sStack_fa) {
              uVar4 = maybe_Rand_Float();
              iVar5 = (int)(uVar4 & 3);
              if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                iVar5 = iVar5 + -4;
              }
              Career_AssignRivalCar
                        (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                         (int)sStack_fa);
              Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
              *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
              bVar2 = true;
            }
            break;
          case 0xe:
            iVar5 = 0;
            puVar12 = &uStack_f0;
            do {
              lVar8 = (long)(int)puVar12[1];
              if (lVar8 == -1) break;
              if ((*(short *)(param_1 + 0x5318) < lVar8) && (lVar8 <= *(short *)(param_1 + 0x5312)))
              {
                uVar4 = maybe_Rand_Float();
                iVar5 = (int)(uVar4 & 3);
                if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                  iVar5 = iVar5 + -4;
                }
                Career_AssignRivalCar
                          (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                           *(undefined2 *)(param_1 + 0x5312));
                Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                bVar2 = true;
                break;
              }
              iVar5 = iVar5 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar5 < 5);
            break;
          case 0xf:
            iVar5 = 0;
            puVar12 = &uStack_f0;
            do {
              lVar8 = (long)(int)puVar12[1];
              if (lVar8 == -1) break;
              if ((*(short *)(param_1 + 0x531a) < lVar8) && (lVar8 <= *(short *)(param_1 + 0x5314)))
              {
                uVar4 = maybe_Rand_Float();
                iVar5 = (int)(uVar4 & 3);
                if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                  iVar5 = iVar5 + -4;
                }
                Career_AssignRivalCar
                          (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                           *(undefined2 *)(param_1 + 0x5314));
                Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                bVar2 = true;
                break;
              }
              iVar5 = iVar5 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar5 < 5);
            break;
          case 0x10:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                iStack_48 = *(int *)(iVar13 + 0x2750);
                uStack_44 = *(undefined4 *)(iVar13 + 0x2754);
                if (*(int *)(iVar13 + 0x2750) == 0x10000) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             0xffffffffffffffff);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
            break;
          case 0x11:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                iStack_50 = *(int *)(iVar13 + 0x2750);
                uStack_4c = *(undefined4 *)(iVar13 + 0x2754);
                if (*(int *)(iVar13 + 0x2750) == 0x20000) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             0xffffffffffffffff);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
            break;
          case 0x12:
            if ((iStack_800 == 0x28) && (iVar6 != 0x28)) {
              uVar4 = maybe_Rand_Float();
              iVar5 = (int)(uVar4 & 3);
              if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                iVar5 = iVar5 + -4;
              }
              Career_AssignRivalCar
                        (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                         0xffffffffffffffff);
              Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
              *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
              bVar2 = true;
            }
            break;
          case 0x13:
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x2a70)) {
              iVar13 = param_1;
              do {
                iStack_58 = *(int *)(iVar13 + 0x2750);
                uStack_54 = *(undefined4 *)(iVar13 + 0x2754);
                if (*(int *)(iVar13 + 0x2750) == 0x80000) {
                  uVar4 = maybe_Rand_Float();
                  iVar5 = (int)(uVar4 & 3);
                  if (((long)uVar4 < 0) && ((uVar4 & 3) != 0)) {
                    iVar5 = iVar5 + -4;
                  }
                  Career_AssignRivalCar
                            (auStack_80,*(undefined4 *)(param_1 + 0x2734),iVar7 + iVar5,uStack_d0,
                             0xffffffffffffffff);
                  Career_UpdateRivalStatus(param_1 + 0x531c,0,auStack_80);
                  *(int *)(iVar10 + 0x2ac4) = *(int *)(iVar10 + 0x2ac4) + 1;
                  bVar2 = true;
                  break;
                }
                iVar5 = iVar5 + 1;
                iVar13 = iVar13 + 8;
              } while (iVar5 < *(int *)(param_1 + 0x2a70));
            }
          }
        }
        if (bVar2) break;
        iVar16 = iVar16 + 1;
        puVar11 = puVar11 + 6;
        iVar7 = iVar7 + 4;
      } while (iVar16 < 3);
    }
    iStack_810 = iStack_810 + 0xc;
    iStack_7f0 = iStack_7f0 + 1;
    iVar10 = iVar10 + 4;
    if (0x13 < iStack_7f0) {
      return;
    }
  } while( true );
}

// 0x001bdce0  size 0x14
void Profile_ClearFlags(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) & ~param_2;
  return;
}

// 0x001bdd00  size 0x8
undefined4 Profile_GetFlags(int param_1)

{
  return *(undefined4 *)(param_1 + 0x272c);
}

// 0x001bdd10  size 0x10
void Profile_SetFlags(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) | param_2;
  return;
}

// 0x001bdd20  size 0x70c
void Profile_SetupRivalBattle(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short sVar7;
  int iVar8;
  undefined2 uStack_480;
  short sStack_47e;
  byte bStack_47c;
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
  byte bStack_2fc;
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
  
  if (*(char *)(param_1 + 0x273c) == '\0') {
    *(int *)(param_1 + 0x2bd8) =
         ((int)*(short *)(param_1 + 0x5274) +
         *(int *)(param_1 + 0x2bd8) * (*(int *)(param_1 + 0x2734) + -1)) /
         *(int *)(param_1 + 0x2734);
  }
  if ((*(uint *)(param_1 + 0x272c) & 1) == 0) {
    bVar2 = true;
    sVar7 = 0;
    iVar8 = param_1;
    while( true ) {
      uVar3 = GameDb_GetRival(sVar7);
      memcpy(&uStack_480,uVar3,0x17c);
      puVar6 = auStack_43c;
      uStack_300 = uStack_480;
      uStack_2e8 = uStack_468;
      puVar5 = auStack_2bc;
      sStack_2fe = sStack_47e;
      uStack_2e4 = uStack_464;
      bStack_2fc = bStack_47c;
      iVar4 = 0x17;
      uStack_2f8 = uStack_478;
      uStack_2f4 = uStack_474;
      uStack_2f0 = uStack_470;
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
        iVar4 = iVar4 + -1;
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (0 < iVar4);
      iVar4 = 0x17;
      puVar6 = auStack_3e0;
      puVar5 = auStack_260;
      do {
        iVar4 = iVar4 + -1;
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (0 < iVar4);
      iVar4 = 8;
      puVar6 = auStack_384;
      puVar5 = auStack_204;
      do {
        iVar4 = iVar4 + -1;
        uVar1 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar6 = puVar6 + 2;
        puVar5 = puVar5 + 2;
      } while (0 < iVar4);
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
      uStack_180 = uStack_480;
      uStack_18c = uStack_30c;
      uStack_188 = uStack_308;
      sStack_17e = sStack_47e;
      bStack_17c = bStack_47c;
      uStack_178 = uStack_478;
      uStack_174 = uStack_474;
      uStack_168 = uStack_468;
      puVar6 = auStack_2bc;
      uStack_170 = uStack_470;
      uStack_164 = uStack_464;
      uStack_16c = uStack_46c;
      iVar4 = 0x17;
      uStack_160 = uStack_460;
      uStack_15c = uStack_45c;
      puVar5 = auStack_13c;
      uStack_158 = uStack_458;
      uStack_154 = uStack_454;
      uStack_150 = uStack_450;
      uStack_14c = uStack_44c;
      uStack_148 = uStack_448;
      uStack_146 = uStack_446;
      uStack_144 = uStack_444;
      uStack_140 = uStack_440;
      do {
        iVar4 = iVar4 + -1;
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (0 < iVar4);
      iVar4 = 0x17;
      puVar6 = auStack_260;
      puVar5 = auStack_e0;
      do {
        iVar4 = iVar4 + -1;
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (0 < iVar4);
      iVar4 = 8;
      puVar6 = auStack_204;
      puVar5 = auStack_84;
      do {
        iVar4 = iVar4 + -1;
        uVar1 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar6 = puVar6 + 2;
        puVar5 = puVar5 + 2;
      } while (0 < iVar4);
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
      if (bStack_47c < 0xb) {
                    /* WARNING: Switch is manually overridden */
        switch(bStack_47c) {
        default:
          if (*(short *)(iVar8 + 0x3fc4) == 0) {
            bVar2 = false;
          }
          break;
        case 4:
          break;
        }
      }
      if (!bVar2) break;
      iVar8 = iVar8 + 2;
      sVar7 = sVar7 + 1;
    }
    if (bVar2) {
      *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) | 1;
      if (*(int *)(param_1 + 0x2a70) < 100) {
        *(undefined4 *)(*(int *)(param_1 + 0x2a70) * 8 + param_1 + 0x2750) = 0x400;
        *(undefined4 *)(*(int *)(param_1 + 0x2a70) * 8 + param_1 + 0x2754) = 0xffffffff;
        *(int *)(param_1 + 0x2a70) = *(int *)(param_1 + 0x2a70) + 1;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x272c) & 0x1000) != 0) {
    Opponent_RandomizeGrid(param_1 + 0x5280,0);
    *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) & 0xffffefff;
  }
  if ((*(uint *)(param_1 + 0x272c) & 0x2000) != 0) {
    Opponent_RandomizeGrid(param_1 + 0x52c4,1);
    *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) & 0xffffdfff;
  }
  if ((*(uint *)(param_1 + 0x272c) & 0x800) != 0) {
    if (*(int *)(param_1 + 0x2a70) < 100) {
      *(undefined4 *)(*(int *)(param_1 + 0x2a70) * 8 + param_1 + 0x2750) = 0x200;
      *(undefined4 *)(*(int *)(param_1 + 0x2a70) * 8 + param_1 + 0x2754) = 0xffffffff;
      *(int *)(param_1 + 0x2a70) = *(int *)(param_1 + 0x2a70) + 1;
    }
    *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) & 0xfffff7ff;
  }
  if ((*(uint *)(param_1 + 0x272c) & 0x400) != 0) {
    *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) & 0xfffffbff;
  }
  return;
}

// 0x001be430  size 0x380
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Profile_AdvanceDay(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  Profile_SetupRivalBattle();
  iVar8 = 0;
  iVar5 = param_1 + 0x531c;
  iVar6 = param_1;
  do {
    if (*(int *)(iVar6 + 0xd814) != -1) {
      bVar2 = false;
      uVar1 = *(undefined4 *)(iVar6 + 0xd818);
      iVar7 = 0;
      iVar4 = *_g_Profiles;
      do {
        if (*(int *)(iVar4 + 0x2ef0) == -1) {
          bVar2 = true;
          iVar4 = *_g_Profiles + iVar7 * 8;
          *(int *)(iVar4 + 0x2ef0) = *(int *)(iVar6 + 0xd814);
          *(undefined4 *)(iVar4 + 0x2ef4) = uVar1;
          break;
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 8;
      } while (iVar7 < 0x1e);
      if (bVar2) {
        *(undefined4 *)(iVar5 + 0x84f8) = 0xffffffff;
        *(undefined4 *)(iVar5 + 0x84fc) = 0;
      }
    }
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + 8;
    iVar5 = iVar5 + 8;
    if (2 < iVar8) {
      Career_SpawnNightRivals(param_1 + 0x531c);
      Career_RefreshAvailability(param_1 + 0x531c);
      Career_UpdateTeams(param_1 + 0x531c);
      *(undefined4 *)(param_1 + 0x94e0) = 0;
      Profile_ScheduleRivals(param_1);
      iVar5 = 0;
      iVar6 = param_1;
      do {
        CarRec_Randomize(iVar6 + 0x2570,iVar5);
        iVar5 = iVar5 + 1;
        *(char *)(iVar6 + 0x25ac) = *(char *)(iVar6 + 0x25ac) + -1;
        iVar6 = iVar6 + 0x44;
      } while (iVar5 < 6);
      iVar5 = 0;
      iVar6 = param_1;
      do {
        *(undefined4 *)(iVar6 + 0x2fe0) = 0;
        iVar5 = iVar5 + 8;
        *(undefined4 *)(iVar6 + 0x2fe4) = 0;
        *(undefined4 *)(iVar6 + 0x2fe8) = 0;
        *(undefined4 *)(iVar6 + 0x2fec) = 0;
        *(undefined4 *)(iVar6 + 0x2ff0) = 0;
        *(undefined4 *)(iVar6 + 0x2ff4) = 0;
        *(undefined4 *)(iVar6 + 0x2ff8) = 0;
        *(undefined4 *)(iVar6 + 0x2ffc) = 0;
        iVar6 = iVar6 + 0x20;
      } while (iVar5 < 0x1ec);
      iVar8 = 0;
      iVar6 = iVar5 * 4 + param_1;
      *(undefined4 *)(iVar6 + 0x2fe0) = 0;
      *(undefined4 *)(iVar6 + 0x2fe4) = 0;
      *(undefined4 *)(iVar6 + 0x2fe8) = 0;
      *(undefined4 *)(iVar6 + 0x2fec) = 0;
      *(undefined2 *)(param_1 + 0x527a) = *(undefined2 *)(param_1 + 0x5274);
      *(undefined2 *)(param_1 + 0x527c) = *(undefined2 *)(param_1 + 0x5276);
      *(undefined2 *)(param_1 + 0x4c30) = 0;
      iVar6 = param_1;
      do {
        *(undefined4 *)(iVar6 + 0x4c34) = 0xffffffff;
        iVar8 = iVar8 + 8;
        *(undefined4 *)(iVar6 + 0x4c38) = 0;
        *(undefined4 *)(iVar6 + 0x4c3c) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x4c40) = 0;
        *(undefined4 *)(iVar6 + 0x4c44) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x4c48) = 0;
        *(undefined4 *)(iVar6 + 0x4c4c) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x4c50) = 0;
        *(undefined4 *)(iVar6 + 0x4c54) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x4c58) = 0;
        *(undefined4 *)(iVar6 + 0x4c5c) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x4c60) = 0;
        *(undefined4 *)(iVar6 + 0x4c64) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x4c68) = 0;
        *(undefined4 *)(iVar6 + 0x4c6c) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x4c70) = 0;
        iVar6 = iVar6 + 0x40;
      } while (iVar8 < 200);
      *(undefined2 *)(param_1 + 0x5274) = 0;
      *(undefined2 *)(param_1 + 0x5276) = 0;
      *(undefined2 *)(param_1 + 0x5278) = 0;
      *(undefined1 *)(param_1 + 0x3fbc) = 0;
      *(undefined1 *)(param_1 + 0x3fbd) = 0;
      *(undefined1 *)(param_1 + 0x3fbe) = 0;
      *(undefined1 *)(param_1 + 0x3fbf) = 0;
      *(undefined1 *)(param_1 + 0x3fc0) = 0;
      *(undefined1 *)(param_1 + 0x3fc1) = 0;
      *(undefined1 *)(param_1 + 0x3fc2) = 0;
      *(undefined1 *)(param_1 + 0x3fc3) = 0;
      GameDb_ApplyToProfile(0);
      GameDb_ApplyToProfile(1);
      iVar5 = 0;
      iVar6 = param_1 + 0x272c;
      do {
        *(undefined4 *)(iVar6 + 0x24) = 0;
        iVar5 = iVar5 + 8;
        *(undefined4 *)(iVar6 + 0x28) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x2c) = 0;
        *(undefined4 *)(iVar6 + 0x30) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x34) = 0;
        *(undefined4 *)(iVar6 + 0x38) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x3c) = 0;
        *(undefined4 *)(iVar6 + 0x40) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x44) = 0;
        *(undefined4 *)(iVar6 + 0x48) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x4c) = 0;
        *(undefined4 *)(iVar6 + 0x50) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x54) = 0;
        *(undefined4 *)(iVar6 + 0x58) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x5c) = 0;
        *(undefined4 *)(iVar6 + 0x60) = 0xffffffff;
        iVar6 = iVar6 + 0x40;
      } while (iVar5 < 0x5c);
      iVar8 = 0;
      iVar6 = iVar5 * 8 + param_1;
      iVar5 = 0;
      *(undefined4 *)(iVar6 + 0x2750) = 0;
      *(undefined4 *)(iVar6 + 0x2754) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x2758) = 0;
      *(undefined4 *)(iVar6 + 0x275c) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x2760) = 0;
      *(undefined4 *)(iVar6 + 0x2764) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x2768) = 0;
      *(undefined4 *)(iVar6 + 0x276c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2a70) = 0;
      *(undefined1 *)(param_1 + 0x273e) = *(undefined1 *)(param_1 + 0x273d);
      *(undefined1 *)(param_1 + 0x2740) = *(undefined1 *)(param_1 + 0x273f);
      *(undefined4 *)(param_1 + 0x2748) = *(undefined4 *)(param_1 + 0x2744);
      iVar6 = param_1;
      do {
        if (*(int *)(iVar6 + 0x2b14) != -1) {
          iVar8 = iVar8 + 1;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < 0x28);
      *(int *)(param_1 + 0x274c) = iVar8;
      if (*(int *)(param_1 + 0x2734) % 7 == 0) {
        uVar3 = Rival_BuildEncounterList();
        *(undefined1 *)(param_1 + 0x273d) = uVar3;
        uVar3 = Rival_PickEncounter();
        *(undefined1 *)(param_1 + 0x273f) = uVar3;
      }
      uVar9 = 0;
      *(undefined2 *)(param_1 + 0x5318) = *(undefined2 *)(param_1 + 0x5312);
      *(undefined2 *)(param_1 + 0x531a) = *(undefined2 *)(param_1 + 0x5314);
      do {
        Password_ComputeProgress(param_1,uVar9 & 0xff);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 9);
      Password_GetCharTable(param_1 + 0xd84a);
      return;
    }
  } while( true );
}

// 0x001be7c0  size 0x2d0
void Profile_ResetCareer(int param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x2708) = 0;
    iVar2 = iVar2 + 3;
    *(undefined4 *)(iVar1 + 0x270c) = 0;
    *(undefined4 *)(iVar1 + 10000) = 0;
    iVar1 = iVar1 + 0xc;
  } while (iVar2 < 9);
  *(undefined4 *)(param_1 + 0x270c) = 1;
  Career_Reset(param_1 + 0x272c);
  Profile_InitNewGame(param_1);
  *(undefined2 *)(param_1 + 0x5308) = 0;
  *(undefined2 *)(param_1 + 0x530a) = 0;
  *(undefined2 *)(param_1 + 0x530c) = 0;
  *(undefined2 *)(param_1 + 0x530e) = 0;
  *(undefined2 *)(param_1 + 0x5312) = 0;
  *(undefined2 *)(param_1 + 0x5314) = 0;
  *(undefined2 *)(param_1 + 0x5316) = 0;
  *(undefined2 *)(param_1 + 0x5310) = 0;
  *(undefined2 *)(param_1 + 0x5318) = 0;
  *(undefined2 *)(param_1 + 0x531a) = 0;
  Profile_InitDefaults(param_1 + 0x2ef0);
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 6;
    *(undefined1 *)(iVar2 + 0xd82c) = 0;
    *(undefined1 *)(iVar2 + 0xd82d) = 0;
    *(undefined1 *)(iVar2 + 0xd82e) = 0;
    *(undefined1 *)(iVar2 + 0xd82f) = 0;
    *(undefined1 *)(iVar2 + 0xd830) = 0;
    *(undefined1 *)(iVar2 + 0xd831) = 0;
  } while (iVar1 < 0x1e);
  Password_PackBits(param_1 + 0xd84a);
  iVar1 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x531c);
  do {
    puVar4[400] = 0;
    iVar2 = 0;
    puVar3 = puVar4;
    do {
      *puVar3 = 0xffffffff;
      *(undefined1 *)(puVar3 + 1) = 0;
      iVar2 = iVar2 + 8;
      puVar3[2] = 0xffffffff;
      *(undefined1 *)(puVar3 + 3) = 0;
      puVar3[4] = 0xffffffff;
      *(undefined1 *)(puVar3 + 5) = 0;
      puVar3[6] = 0xffffffff;
      *(undefined1 *)(puVar3 + 7) = 0;
      puVar3[8] = 0xffffffff;
      *(undefined1 *)(puVar3 + 9) = 0;
      puVar3[10] = 0xffffffff;
      *(undefined1 *)(puVar3 + 0xb) = 0;
      puVar3[0xc] = 0xffffffff;
      *(undefined1 *)(puVar3 + 0xd) = 0;
      puVar3[0xe] = 0xffffffff;
      *(undefined1 *)(puVar3 + 0xf) = 0;
      puVar3 = puVar3 + 0x10;
    } while (iVar2 < 200);
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 0x191;
  } while (iVar1 < 9);
  iVar1 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x8b80);
  do {
    *puVar4 = 0xffffffff;
    iVar1 = iVar1 + 8;
    *(undefined1 *)(puVar4 + 1) = 0;
    *(undefined2 *)((int)puVar4 + 6) = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    *(undefined1 *)((int)puVar4 + 9) = 0;
    *(undefined1 *)((int)puVar4 + 10) = 0;
    *(undefined1 *)((int)puVar4 + 0xb) = 0;
    puVar4[3] = 0xffffffff;
    *(undefined1 *)(puVar4 + 4) = 0;
    *(undefined2 *)((int)puVar4 + 0x12) = 0;
    *(undefined1 *)(puVar4 + 5) = 0;
    *(undefined1 *)((int)puVar4 + 0x15) = 0;
    *(undefined1 *)((int)puVar4 + 0x16) = 0;
    *(undefined1 *)((int)puVar4 + 0x17) = 0;
    puVar4[6] = 0xffffffff;
    *(undefined1 *)(puVar4 + 7) = 0;
    *(undefined2 *)((int)puVar4 + 0x1e) = 0;
    *(undefined1 *)(puVar4 + 8) = 0;
    *(undefined1 *)((int)puVar4 + 0x21) = 0;
    *(undefined1 *)((int)puVar4 + 0x22) = 0;
    *(undefined1 *)((int)puVar4 + 0x23) = 0;
    puVar4[9] = 0xffffffff;
    *(undefined1 *)(puVar4 + 10) = 0;
    *(undefined2 *)((int)puVar4 + 0x2a) = 0;
    *(undefined1 *)(puVar4 + 0xb) = 0;
    *(undefined1 *)((int)puVar4 + 0x2d) = 0;
    *(undefined1 *)((int)puVar4 + 0x2e) = 0;
    *(undefined1 *)((int)puVar4 + 0x2f) = 0;
    puVar4[0xc] = 0xffffffff;
    *(undefined1 *)(puVar4 + 0xd) = 0;
    *(undefined2 *)((int)puVar4 + 0x36) = 0;
    *(undefined1 *)(puVar4 + 0xe) = 0;
    *(undefined1 *)((int)puVar4 + 0x39) = 0;
    *(undefined1 *)((int)puVar4 + 0x3a) = 0;
    *(undefined1 *)((int)puVar4 + 0x3b) = 0;
    puVar4[0xf] = 0xffffffff;
    *(undefined1 *)(puVar4 + 0x10) = 0;
    *(undefined2 *)((int)puVar4 + 0x42) = 0;
    *(undefined1 *)(puVar4 + 0x11) = 0;
    *(undefined1 *)((int)puVar4 + 0x45) = 0;
    *(undefined1 *)((int)puVar4 + 0x46) = 0;
    *(undefined1 *)((int)puVar4 + 0x47) = 0;
    puVar4[0x12] = 0xffffffff;
    *(undefined1 *)(puVar4 + 0x13) = 0;
    *(undefined2 *)((int)puVar4 + 0x4e) = 0;
    *(undefined1 *)(puVar4 + 0x14) = 0;
    *(undefined1 *)((int)puVar4 + 0x51) = 0;
    *(undefined1 *)((int)puVar4 + 0x52) = 0;
    *(undefined1 *)((int)puVar4 + 0x53) = 0;
    puVar4[0x15] = 0xffffffff;
    *(undefined1 *)(puVar4 + 0x16) = 0;
    *(undefined2 *)((int)puVar4 + 0x5a) = 0;
    *(undefined1 *)(puVar4 + 0x17) = 0;
    *(undefined1 *)((int)puVar4 + 0x5d) = 0;
    *(undefined1 *)((int)puVar4 + 0x5e) = 0;
    *(undefined1 *)((int)puVar4 + 0x5f) = 0;
    puVar4 = puVar4 + 0x18;
  } while (iVar1 < 200);
  Career_InitRivalStates(param_1 + 0x94e0);
  Career_RefreshAvailability(param_1 + 0x531c);
  Career_SpawnNightRivals(param_1 + 0x531c);
  Career_UpdateTeams(param_1 + 0x531c);
  *(undefined4 *)(param_1 + 0x94e0) = 0;
  if ((param_2 & 0x10) == 0) {
    if ((param_2 & 0x20) == 0) {
      if ((param_2 & 0x40) != 0) {
        *(undefined4 *)(param_1 + 0x2744) = 999;
        *(undefined4 *)(param_1 + 0x2748) = 999;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2738) = 0x447;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2738) = 0xb86;
  }
  return;
}

// 0x001bea90  size 0x30
void Profile_CopyRivalStates(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_2 + 0x4c30);
  iVar2 = 0xca;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar3[1];
    *param_1 = *puVar3;
    puVar3 = puVar3 + 2;
    param_1[1] = uVar1;
    param_1 = param_1 + 2;
  } while (0 < iVar2);
  return;
}

// 0x001beac0  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* table at 0x36f2fc */

undefined2 RivalSchedule_Get(int param_1,int param_2)

{
  return *(undefined2 *)(_g_RivalSchedule + param_1 * 0xc + param_2 * 2);
}

// 0x001beaf0  size 0x2c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RivalSchedule_Free(void)

{
  if (_g_RivalSchedule != 0) {
    Mem_Free();
    _g_RivalSchedule = 0;
  }
  return;
}

// 0x001beb20  size 0x5f4
/* WARNING: Removing unreachable block (ram,0x001bed98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RivalSchedule_SetupBattle(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  short *psVar7;
  int *piVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  int *piVar16;
  int *piStack_3a0;
  int aiStack_370 [8];
  int aiStack_350 [100];
  int aiStack_1c0 [100];
  int aiStack_30 [11];
  char acStack_4 [4];
  
  iVar1 = *_g_Profiles;
  if (*(char *)((uint)*(byte *)(iVar1 + 0x2733) + iVar1 + 0x3fbc) < '\n') {
    iVar14 = 0;
    iVar4 = Profile_GetChapterRivalCount
                      (*(int *)(iVar1 + 0x2734) % 7,*(undefined1 *)(iVar1 + 0x2731));
    iVar11 = 0;
    psVar9 = _g_RivalSchedule;
    do {
      iVar10 = 0;
      psVar7 = psVar9;
      do {
        if (*psVar7 != -1) {
          iVar4 = iVar4 + -1;
        }
        iVar10 = iVar10 + 1;
        psVar7 = psVar7 + 1;
      } while (iVar10 < 6);
      iVar11 = iVar11 + 1;
      psVar9 = psVar9 + 6;
    } while (iVar11 < 5);
    piStack_3a0 = aiStack_30;
    iVar11 = 0;
    piVar8 = piStack_3a0;
    do {
      *piVar8 = -1;
      iVar11 = iVar11 + 5;
      piVar8[1] = -1;
      piVar8[2] = -1;
      piVar8[3] = -1;
      piVar8[4] = -1;
      piVar8 = piVar8 + 5;
    } while (iVar11 < 10);
    if (0 < iVar4) {
      acStack_4[0] = s_RivalSchedule_SetupBattle_1;
      acStack_4[1] = s_RivalSchedule_SetupBattle_2;
      acStack_4[2] = s_RivalSchedule_SetupBattle_3;
      for (pcVar15 = acStack_4; (iVar4 != 0 && (cVar3 = *pcVar15, cVar3 != '\r'));
          pcVar15 = pcVar15 + 1) {
        piVar16 = aiStack_1c0;
        iVar13 = 0;
        iVar12 = 0;
        iVar10 = 0;
        iVar11 = 0;
        piVar8 = piVar16;
        do {
          iVar5 = GameDb_GetRival((short)iVar12);
          if (*(short *)(iVar5 + 2) == -1) break;
          if ((((*(int *)(*_g_Profiles + iVar10 + 0x2fe0) == 0) &&
               (*(int *)((int)_g_RivalSchedule + iVar10 + 0x50) == 0)) &&
              (lVar6 = Rival_SetupBattle(iVar12,*(undefined1 *)(iVar1 + 0x2733),cVar3), lVar6 != 0))
             && ((0 < *(short *)(*_g_Profiles + iVar11 + 0x3fc4) && (iVar13 < 100)))) {
            *piVar8 = iVar12;
            iVar13 = iVar13 + 1;
            piVar8 = piVar8 + 1;
          }
          iVar12 = iVar12 + 1;
          iVar10 = iVar10 + 4;
          iVar11 = iVar11 + 2;
        } while (iVar12 < 500);
        if (0 < iVar13) {
          if (iVar4 < iVar13) {
            Rival_RandomizeBehaviour(iVar13,iVar4,aiStack_350);
            iVar11 = 0;
            if (0 < iVar4) {
              piVar16 = aiStack_350;
              piVar8 = aiStack_30 + iVar14;
              do {
                iVar10 = *piVar16;
                iVar4 = iVar4 + -1;
                iVar11 = iVar11 + 1;
                iVar14 = iVar14 + 1;
                piVar16 = piVar16 + 1;
                *piVar8 = aiStack_1c0[iVar10];
                piVar8 = piVar8 + 1;
              } while (iVar11 < iVar4);
            }
          }
          else {
            iVar11 = 0;
            if (0 < iVar13) {
              if (8 < iVar13) {
                bVar2 = false;
                if ((-1 < iVar13) && (iVar13 < 0x7fffffff)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  do {
                    iVar10 = piVar16[1];
                    iVar12 = piVar16[2];
                    iVar5 = piVar16[3];
                    iVar11 = iVar11 + 8;
                    iVar4 = iVar4 + -8;
                    aiStack_30[iVar14] = *piVar16;
                    aiStack_30[iVar14 + 1] = iVar10;
                    aiStack_30[iVar14 + 2] = iVar12;
                    iVar10 = piVar16[4];
                    iVar12 = piVar16[5];
                    aiStack_30[iVar14 + 3] = iVar5;
                    iVar5 = piVar16[6];
                    aiStack_30[iVar14 + 4] = iVar10;
                    iVar10 = piVar16[7];
                    aiStack_30[iVar14 + 5] = iVar12;
                    iVar12 = iVar14 + 7;
                    aiStack_30[iVar14 + 6] = iVar5;
                    iVar14 = iVar14 + 8;
                    aiStack_30[iVar12] = iVar10;
                    piVar16 = piVar16 + 8;
                  } while (iVar11 < iVar13 + -8);
                }
              }
              if (iVar11 < iVar13) {
                piVar16 = aiStack_1c0 + iVar11;
                piVar8 = aiStack_30 + iVar14;
                do {
                  iVar11 = iVar11 + 1;
                  iVar14 = iVar14 + 1;
                  iVar4 = iVar4 + -1;
                  *piVar8 = *piVar16;
                  piVar16 = piVar16 + 1;
                  piVar8 = piVar8 + 1;
                } while (iVar11 < iVar13);
              }
            }
          }
        }
      }
    }
    cVar3 = Race_GetTimeOfDay();
    iVar4 = 6;
    if (cVar3 != '\0') {
      iVar4 = 3;
    }
    iVar11 = 0;
    piVar8 = aiStack_370;
    psVar9 = _g_RivalSchedule;
    do {
      iVar10 = 0;
      iVar14 = 0;
      psVar7 = psVar9;
      do {
        if (*psVar7 != -1) {
          iVar10 = iVar10 + 1;
        }
        iVar14 = iVar14 + 1;
        psVar7 = psVar7 + 1;
      } while (iVar14 < 6);
      iVar11 = iVar11 + 1;
      *piVar8 = iVar10;
      psVar9 = psVar9 + 6;
      piVar8 = piVar8 + 1;
    } while (iVar11 < 5);
    iVar11 = 0;
    do {
      if (*piStack_3a0 != -1) {
        do {
          do {
            do {
              iVar14 = maybe_Rand_Float();
              iVar14 = iVar14 % 5;
            } while (*(int *)(_g_RivalSchedule + iVar14 * 2 + 0x1e) == 0);
            piVar8 = aiStack_370 + iVar14;
          } while (iVar4 <= *piVar8);
          iVar10 = maybe_Rand_Float();
        } while (_g_RivalSchedule[iVar14 * 6 + iVar10 % 6] != -1);
        iVar12 = *piStack_3a0;
        iVar13 = *piVar8;
        _g_RivalSchedule[iVar14 * 6 + iVar10 % 6] = (short)iVar12;
        *piVar8 = iVar13 + 1;
        psVar9 = _g_RivalSchedule + iVar12 * 2 + 0x28;
        psVar9[0] = 1;
        psVar9[1] = 0;
        iVar14 = *_g_Profiles + (uint)*(byte *)(iVar1 + 0x2733);
        *(char *)(iVar14 + 0x3fbc) = *(char *)(iVar14 + 0x3fbc) + '\x01';
        if ('\n' < *(char *)(*_g_Profiles + (uint)*(byte *)(iVar1 + 0x2733) + 0x3fbc)) {
          return;
        }
      }
      iVar11 = iVar11 + 1;
      piStack_3a0 = piStack_3a0 + 1;
    } while (iVar11 < 10);
  }
  return;
}

// 0x001bf120  size 0xcc0
/* WARNING: Removing unreachable block (ram,0x001bf840) */
/* WARNING: Removing unreachable block (ram,0x001bf578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RivalSchedule_SetupTeamBattle(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  char *pcVar16;
  short *psVar17;
  byte *pbVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int *piVar24;
  byte *pbStack_36a0;
  char *pcStack_3680;
  int *piStack_3670;
  int *piStack_3660;
  int aiStack_3630 [8];
  int aiStack_3610 [8];
  int aiStack_35f0 [8];
  int aiStack_35d0 [12];
  int aiStack_35a0 [100];
  int aiStack_3410 [100];
  int aiStack_3280 [500];
  int aiStack_2ab0 [16];
  int aiStack_2a70 [2600];
  int aiStack_1d0 [100];
  int aiStack_40 [10];
  char acStack_18 [8];
  byte abStack_10 [16];
  
  iVar23 = 0;
  iVar2 = *_g_Profiles;
  iVar5 = Profile_GetChapterRivalCount(*(int *)(iVar2 + 0x2734) % 7,*(undefined1 *)(iVar2 + 0x2731))
  ;
  iVar13 = 0;
  piVar12 = aiStack_2ab0;
  do {
    *piVar12 = 0;
    iVar13 = iVar13 + 6;
    piVar12[1] = 0;
    piVar12[2] = 0;
    piVar12[3] = 0;
    piVar12[4] = 0;
    piVar12[5] = 0;
    piVar12 = piVar12 + 6;
  } while (iVar13 < 7);
  iVar21 = 0;
  piVar12 = aiStack_3280;
  aiStack_2ab0[iVar13] = 0;
  iVar13 = 0;
  do {
    *piVar12 = 0;
    *(undefined4 *)(_g_RivalSchedule + iVar13 + 0x50) = 0;
    iVar6 = GameDb_GetRival((short)iVar21);
    if (*(short *)(iVar6 + 2) == -1) break;
    piVar12 = piVar12 + 1;
    uVar14 = (uint)*(byte *)(iVar6 + 4);
    iVar6 = aiStack_2ab0[uVar14];
    aiStack_2ab0[uVar14] = iVar6 + 1;
    aiStack_2a70[uVar14 * 200 + iVar6] = iVar21;
    iVar21 = iVar21 + 1;
    iVar13 = iVar13 + 4;
  } while (iVar21 < 500);
  iVar6 = 0;
  iVar21 = 0;
  iVar13 = 0;
  do {
    iVar6 = iVar6 + 1;
    *(undefined2 *)(_g_RivalSchedule + iVar21) = 0xffff;
    *(undefined2 *)(_g_RivalSchedule + iVar21 + 2) = 0xffff;
    *(undefined2 *)(_g_RivalSchedule + iVar21 + 4) = 0xffff;
    *(undefined2 *)(_g_RivalSchedule + iVar21 + 6) = 0xffff;
    *(undefined2 *)(_g_RivalSchedule + iVar21 + 8) = 0xffff;
    *(undefined2 *)(_g_RivalSchedule + iVar21 + 10) = 0xffff;
    iVar21 = iVar21 + 0xc;
    *(undefined4 *)(_g_RivalSchedule + iVar13 + 0x3c) = 1;
    iVar13 = iVar13 + 4;
  } while (iVar6 < 5);
  piStack_3660 = aiStack_40;
  iVar13 = 0;
  piVar12 = piStack_3660;
  do {
    *piVar12 = -1;
    iVar13 = iVar13 + 5;
    piVar12[1] = -1;
    piVar12[2] = -1;
    piVar12[3] = -1;
    piVar12[4] = -1;
    piVar12 = piVar12 + 5;
  } while (iVar13 < 10);
  if (*(char *)((uint)*(byte *)(iVar2 + 0x2733) + iVar2 + 0x3fbc) == '\0') {
    iVar21 = 0;
    iVar13 = iVar2;
    do {
      iVar6 = *(int *)(iVar13 + 0x2ef0);
      if ((iVar6 != -1) && (iVar20 = iVar6 * 4, *(int *)(iVar2 + iVar20 + 0x2fe0) == 0)) {
        iVar7 = GameDb_GetRival((short)iVar6);
        iVar8 = *(int *)(iVar13 + 0x2ef4);
        if (iVar8 == 0) {
          iVar8 = *(int *)(iVar7 + 0x14);
        }
        lVar10 = Rival_CheckWeatherCondition(iVar8,*(undefined1 *)(iVar2 + 0x2733));
        if (lVar10 != 0) {
          *(undefined4 *)(iVar20 + iVar2 + 0x2fe0) = 1;
          iVar23 = 1;
          *(undefined4 *)(iVar20 + iVar2 + 0x37b0) = 1;
          iVar5 = iVar5 + -1;
          aiStack_3280[iVar6] = 1;
          aiStack_40[0] = iVar6;
          iVar13 = iVar21 * 8 + iVar2;
          *(undefined4 *)(iVar20 + _g_RivalSchedule + 0x50) = 1;
          *(undefined4 *)(iVar13 + 0x2ef0) = 0xffffffff;
          *(undefined4 *)(iVar13 + 0x2ef4) = 0;
          break;
        }
      }
      iVar21 = iVar21 + 1;
      iVar13 = iVar13 + 8;
    } while (iVar21 < 0x1e);
  }
  if ((0 < iVar5) && (*(char *)((uint)*(byte *)(iVar2 + 0x2733) + iVar2 + 0x3fbc) < '\x02')) {
    pbVar15 = abStack_10;
    pbVar18 = &DAT_003181e0;
    iVar13 = 0xd;
    do {
      iVar13 = iVar13 + -1;
      *pbVar15 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar15 = pbVar15 + 1;
    } while (0 < iVar13);
    for (pbStack_36a0 = abStack_10; (iVar5 != 0 && (bVar1 = *pbStack_36a0, bVar1 != 0xd));
        pbStack_36a0 = pbStack_36a0 + 1) {
      uVar14 = (uint)bVar1;
      iVar21 = 0;
      iVar13 = 0;
      if (0 < aiStack_2ab0[uVar14]) {
        piVar12 = aiStack_1d0;
        piVar24 = aiStack_2a70 + uVar14 * 200;
        do {
          iVar6 = *piVar24;
          if (*(int *)(iVar2 + iVar6 * 4 + 0x2fe0) == 0) {
            lVar10 = Rival_SetupBattle(iVar6,*(undefined1 *)(iVar2 + 0x2733),bVar1);
            if ((lVar10 != 0) && (*(short *)(iVar2 + iVar6 * 2 + 0x3fc4) == 0)) {
              if (99 < iVar21) break;
              *piVar12 = iVar6;
              piVar12 = piVar12 + 1;
              iVar21 = iVar21 + 1;
              aiStack_3280[iVar6] = 1;
            }
          }
          else {
            aiStack_3280[iVar6] = 1;
          }
          iVar13 = iVar13 + 1;
          piVar24 = piVar24 + 1;
        } while (iVar13 < aiStack_2ab0[uVar14]);
      }
      if (0 < iVar21) {
        if (iVar5 < iVar21) {
          Rival_RandomizeBehaviour(iVar21,iVar5,aiStack_3410);
          iVar13 = 0;
          if (0 < iVar5) {
            piVar24 = aiStack_3410;
            piVar12 = aiStack_40 + iVar23;
            do {
              iVar21 = *piVar24;
              iVar5 = iVar5 + -1;
              iVar13 = iVar13 + 1;
              iVar23 = iVar23 + 1;
              piVar24 = piVar24 + 1;
              *piVar12 = aiStack_1d0[iVar21];
              piVar12 = piVar12 + 1;
            } while (iVar13 < iVar5);
          }
        }
        else {
          iVar13 = 0;
          if (0 < iVar21) {
            if (8 < iVar21) {
              bVar3 = false;
              if ((-1 < iVar21) && (iVar21 < 0x7fffffff)) {
                bVar3 = true;
              }
              if (bVar3) {
                piVar12 = aiStack_1d0;
                do {
                  iVar6 = piVar12[1];
                  iVar20 = piVar12[2];
                  iVar8 = piVar12[3];
                  iVar13 = iVar13 + 8;
                  iVar5 = iVar5 + -8;
                  aiStack_40[iVar23] = *piVar12;
                  aiStack_40[iVar23 + 1] = iVar6;
                  aiStack_40[iVar23 + 2] = iVar20;
                  iVar6 = piVar12[4];
                  iVar20 = piVar12[5];
                  aiStack_40[iVar23 + 3] = iVar8;
                  iVar8 = piVar12[6];
                  aiStack_40[iVar23 + 4] = iVar6;
                  iVar6 = piVar12[7];
                  aiStack_40[iVar23 + 5] = iVar20;
                  iVar20 = iVar23 + 7;
                  aiStack_40[iVar23 + 6] = iVar8;
                  iVar23 = iVar23 + 8;
                  aiStack_40[iVar20] = iVar6;
                  piVar12 = piVar12 + 8;
                } while (iVar13 < iVar21 + -8);
              }
            }
            if (iVar13 < iVar21) {
              piVar24 = aiStack_1d0 + iVar13;
              piVar12 = aiStack_40 + iVar23;
              do {
                iVar13 = iVar13 + 1;
                iVar23 = iVar23 + 1;
                iVar5 = iVar5 + -1;
                *piVar12 = *piVar24;
                piVar24 = piVar24 + 1;
                piVar12 = piVar12 + 1;
              } while (iVar13 < iVar21);
            }
          }
        }
      }
    }
  }
  if (0 < iVar5) {
    pcVar19 = (char *)0x36e848;
    pcVar16 = acStack_18;
    iVar13 = 5;
    do {
      iVar13 = iVar13 + -1;
      *pcVar16 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar16 = pcVar16 + 1;
    } while (0 < iVar13);
    for (pcStack_3680 = acStack_18; (iVar5 != 0 && (cVar4 = *pcStack_3680, cVar4 != '\r'));
        pcStack_3680 = pcStack_3680 + 1) {
      piStack_3670 = aiStack_1d0;
      iVar6 = 0;
      iVar20 = 0;
      piVar24 = aiStack_3280;
      iVar13 = iVar2;
      iVar21 = iVar2;
      piVar12 = piStack_3670;
      do {
        if (*piVar24 != 1) {
          iVar8 = GameDb_GetRival((short)iVar20);
          if (*(short *)(iVar8 + 2) == -1) break;
          if (*(int *)(iVar21 + 0x2fe0) == 0) {
            lVar10 = Rival_SetupBattle(iVar20,*(undefined1 *)(iVar2 + 0x2733),cVar4);
            if (((lVar10 != 0) && (0 < *(short *)(iVar13 + 0x3fc4))) && (iVar6 < 100)) {
              *piVar12 = iVar20;
              iVar6 = iVar6 + 1;
              piVar12 = piVar12 + 1;
              *piVar24 = 1;
            }
          }
          else {
            *piVar24 = 1;
          }
        }
        iVar20 = iVar20 + 1;
        piVar24 = piVar24 + 1;
        iVar21 = iVar21 + 4;
        iVar13 = iVar13 + 2;
      } while (iVar20 < 500);
      if (0 < iVar6) {
        if (iVar5 < iVar6) {
          Rival_RandomizeBehaviour(iVar6,iVar5,aiStack_35a0);
          iVar13 = 0;
          if (0 < iVar5) {
            piVar24 = aiStack_35a0;
            piVar12 = aiStack_40 + iVar23;
            do {
              iVar21 = *piVar24;
              iVar5 = iVar5 + -1;
              iVar13 = iVar13 + 1;
              iVar23 = iVar23 + 1;
              piVar24 = piVar24 + 1;
              *piVar12 = aiStack_1d0[iVar21];
              piVar12 = piVar12 + 1;
            } while (iVar13 < iVar5);
          }
        }
        else {
          iVar13 = 0;
          if (0 < iVar6) {
            if (8 < iVar6) {
              bVar3 = false;
              if ((-1 < iVar6) && (iVar6 < 0x7fffffff)) {
                bVar3 = true;
              }
              if (bVar3) {
                do {
                  iVar13 = iVar13 + 8;
                  iVar5 = iVar5 + -8;
                  iVar21 = piStack_3670[1];
                  aiStack_40[iVar23] = *piStack_3670;
                  aiStack_40[iVar23 + 1] = iVar21;
                  aiStack_40[iVar23 + 2] = piStack_3670[2];
                  aiStack_40[iVar23 + 3] = piStack_3670[3];
                  iVar21 = piStack_3670[5];
                  aiStack_40[iVar23 + 4] = piStack_3670[4];
                  aiStack_40[iVar23 + 5] = iVar21;
                  iVar21 = piStack_3670[7];
                  aiStack_40[iVar23 + 6] = piStack_3670[6];
                  aiStack_40[iVar23 + 7] = iVar21;
                  piStack_3670 = piStack_3670 + 8;
                  iVar23 = iVar23 + 8;
                } while (iVar13 < iVar6 + -8);
              }
            }
            if (iVar13 < iVar6) {
              piVar24 = aiStack_1d0 + iVar13;
              piVar12 = aiStack_40 + iVar23;
              do {
                iVar13 = iVar13 + 1;
                iVar23 = iVar23 + 1;
                iVar5 = iVar5 + -1;
                *piVar12 = *piVar24;
                piVar24 = piVar24 + 1;
                piVar12 = piVar12 + 1;
              } while (iVar13 < iVar6);
            }
          }
        }
      }
    }
  }
  iVar13 = 0;
  iVar5 = 0;
  if (0 < iVar23) {
    piVar24 = aiStack_35d0;
    piVar12 = piStack_3660;
    do {
      iVar21 = GameDb_GetRival((short)*piVar12);
      if ((*(char *)(iVar21 + 4) == '\x01') && (*(short *)(iVar2 + *piVar12 * 2 + 0x3fc4) == 0)) {
        *piVar24 = *piVar12;
        *piVar12 = -1;
        piVar24 = piVar24 + 1;
        iVar13 = iVar13 + 1;
      }
      iVar5 = iVar5 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar5 < iVar23);
  }
  if (iVar13 < 6) {
    Rival_RandomizeBehaviour(5,iVar13,aiStack_35f0);
    iVar5 = iVar13;
  }
  else {
    aiStack_35f0[1] = 1;
    iVar5 = 5;
    aiStack_35f0[2] = 2;
    aiStack_35f0[0] = 0;
    aiStack_35f0[3] = 3;
    aiStack_35f0[4] = 4;
  }
  iVar23 = 0;
  if (iVar13 < 1) {
LAB_001bfb30:
    bVar1 = *(byte *)(iVar2 + 0x2733);
  }
  else {
    piVar12 = aiStack_35f0;
    piVar24 = aiStack_35d0;
    do {
      iVar13 = *piVar24;
      *(undefined4 *)(_g_RivalSchedule + *piVar12 * 4 + 0x3c) = 0;
      psVar17 = (short *)GameDb_GetRival((short)iVar13);
      uVar11 = Rival_FindByTeam(*psVar17);
      Rival_RandomizeBehaviour(6,uVar11,aiStack_3610);
      iVar21 = 0;
      piVar22 = aiStack_3610;
      iVar13 = 0;
      do {
        psVar9 = (short *)GameDb_GetRival((short)iVar21);
        if (psVar9[1] == -1) break;
        if (*psVar17 == *psVar9) {
          iVar6 = *piVar22;
          piVar22 = piVar22 + 1;
          *(short *)(_g_RivalSchedule + *piVar12 * 0xc + iVar6 * 2) = (short)iVar21;
          *(undefined4 *)(_g_RivalSchedule + iVar13 + 0x50) = 1;
        }
        iVar21 = iVar21 + 1;
        iVar13 = iVar13 + 4;
      } while (iVar21 < 500);
      iVar13 = iVar2 + (uint)*(byte *)(iVar2 + 0x2733);
      *(char *)(iVar13 + 0x3fbc) = *(char *)(iVar13 + 0x3fbc) + '\x01';
      if ('\n' < *(char *)(iVar2 + (uint)*(byte *)(iVar2 + 0x2733) + 0x3fbc)) goto LAB_001bfb30;
      iVar23 = iVar23 + 1;
      piVar12 = piVar12 + 1;
      piVar24 = piVar24 + 1;
    } while (iVar23 < iVar5);
    bVar1 = *(byte *)(iVar2 + 0x2733);
  }
  if (*(char *)((uint)bVar1 + iVar2 + 0x3fbc) < '\n') {
    cVar4 = Race_GetTimeOfDay();
    iVar5 = 6;
    aiStack_3630[0] = 0;
    aiStack_3630[1] = 0;
    if (cVar4 != '\0') {
      iVar5 = 3;
    }
    aiStack_3630[2] = 0;
    iVar13 = 0;
    aiStack_3630[3] = 0;
    aiStack_3630[4] = 0;
    do {
      if (*piStack_3660 != -1) {
        do {
          do {
            do {
              iVar23 = maybe_Rand_Float();
              iVar23 = iVar23 % 5;
            } while (*(int *)(_g_RivalSchedule + iVar23 * 4 + 0x3c) == 0);
            piVar12 = aiStack_3630 + iVar23;
          } while (iVar5 <= *piVar12);
          iVar21 = maybe_Rand_Float();
          psVar17 = (short *)(_g_RivalSchedule + iVar23 * 0xc + (iVar21 % 6) * 2);
        } while (*psVar17 != -1);
        iVar23 = *piStack_3660;
        iVar21 = *piVar12;
        *psVar17 = (short)iVar23;
        *piVar12 = iVar21 + 1;
        *(undefined4 *)(_g_RivalSchedule + iVar23 * 4 + 0x50) = 1;
        iVar23 = iVar2 + (uint)*(byte *)(iVar2 + 0x2733);
        *(char *)(iVar23 + 0x3fbc) = *(char *)(iVar23 + 0x3fbc) + '\x01';
        if ('\n' < *(char *)(iVar2 + (uint)*(byte *)(iVar2 + 0x2733) + 0x3fbc)) {
          return;
        }
      }
      iVar13 = iVar13 + 1;
      piStack_3660 = piStack_3660 + 1;
    } while (iVar13 < 10);
  }
  return;
}

// 0x001bfe00  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RivalSchedule_Alloc(undefined8 param_1)

{
  _g_RivalSchedule = Mem_Alloc16(0x820,param_1);
  return;
}

// 0x001bfe30  size 0x10c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RivalSchedule_IsComplete(int param_1,short param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  
  bVar3 = false;
  bVar2 = false;
  if (param_3 == 1) {
    bVar2 = true;
  }
  else {
    cVar1 = *(char *)(param_1 + 4);
    if ((((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x05')) || (cVar1 == '\a')) {
      bVar2 = true;
    }
  }
  if (bVar2) {
    iVar6 = 0;
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar8 = 0;
      psVar7 = (short *)(_g_RivalSchedule + iVar5);
      do {
        if (param_2 == *psVar7) {
          ((short *)(_g_RivalSchedule + iVar5))[iVar8] = -1;
          if ((*(char *)(param_1 + 4) == '\x01') && (*(int *)(_g_RivalSchedule + iVar4 + 0x3c) == 0)
             ) {
            *(undefined4 *)(_g_RivalSchedule + iVar4 + 0x3c) = 1;
          }
          bVar3 = true;
          break;
        }
        iVar8 = iVar8 + 1;
        psVar7 = psVar7 + 1;
      } while (iVar8 < 6);
      if (bVar3) {
        return;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0xc;
      iVar4 = iVar4 + 4;
    } while (iVar6 < 5);
  }
  return;
}

// 0x001bff40  size 0x28
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RivalSchedule_Clear(int param_1,int param_2)

{
  *(undefined2 *)(_g_RivalSchedule + param_1 * 0xc + param_2 * 2) = 0xffff;
  return;
}

// 0x001bff70  size 0xcc
undefined4
Race_GetRewardAmount(undefined8 param_1,long param_2,long param_3,int *param_4,int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  iVar3 = (int)param_3;
  if (param_2 < param_3) {
    cVar1 = Race_IsTimeTrialMode(param_1,1);
    if (cVar1 == '\x01') {
      *param_4 = 8 - iVar4;
      *param_5 = 9 - iVar3;
    }
    else {
      *param_4 = iVar4;
      *param_5 = iVar3 + -1;
    }
    uVar2 = 1;
  }
  else {
    cVar1 = Race_IsTimeTrialMode(param_1,0);
    if (cVar1 == '\0') {
      *param_4 = 9 - iVar4;
      *param_5 = 8 - iVar3;
    }
    else {
      *param_4 = iVar4 + -1;
      *param_5 = iVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}

