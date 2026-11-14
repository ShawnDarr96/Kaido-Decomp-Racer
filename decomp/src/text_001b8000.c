// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001b8000 - 0x001bc000
#include "ghidra_types.h"

// 0x001b8080  size 0x584
short FUN_001b8080(char param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  short sVar6;
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
  
  sVar6 = 0;
  while( true ) {
    uVar3 = FUN_002092c0(sVar6);
    memcpy(&uStack_480,uVar3,0x17c);
    puVar5 = auStack_43c;
    uStack_300 = uStack_480;
    uStack_2f8 = uStack_478;
    uStack_2e8 = uStack_468;
    puVar4 = auStack_2bc;
    uStack_2e4 = uStack_464;
    uStack_2f4 = uStack_474;
    uStack_2f0 = uStack_470;
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
    uStack_180 = uStack_480;
    uStack_188 = uStack_308;
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
    if ((long)sStack_47e == -1) break;
    if ((cStack_47c == '\f') && ((long)sStack_47e == (long)param_1)) {
      return sVar6;
    }
    sVar6 = sVar6 + 1;
    if (499 < sVar6) {
      return -1;
    }
  }
  return -1;
}

// 0x001b8610  size 0x8c
void FUN_001b8610(undefined4 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = FUN_00209280(param_2);
  memcpy(&uStack_30,uVar1,0x28);
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  param_1[4] = uStack_20;
  param_1[5] = uStack_1c;
  param_1[6] = uStack_18;
  param_1[7] = uStack_14;
  param_1[8] = uStack_10;
  param_1[9] = uStack_c;
  return;
}

// 0x001b86a0  size 0x84
int FUN_001b86a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + iVar2 + 0xd82c) == '\x02') {
      iVar1 = FUN_00209280(iVar2);
      iVar3 = iVar3 + *(int *)(iVar1 + 0xc);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1e);
  return iVar3;
}

// 0x001b8730  size 0x180
undefined4 FUN_001b8730(short *param_1,char param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_4;
  
  pcVar6 = (char *)((int)param_1 + param_2 + 0xd82c);
  if (*pcVar6 == '\x02') {
    *pcVar6 = '\x01';
    iVar8 = 0;
    do {
      if (*param_1 != -1) {
        uVar7 = 0;
        do {
          iVar4 = FUN_001d34f0(param_1,uVar7 & 0xff);
          if (*(char *)(iVar4 + 2) == param_2) {
            FUN_001d2160(&uStack_4);
            uStack_4._0_3_ = CONCAT12(0x1f,(undefined2)uStack_4);
            uVar2 = FUN_001d4010(*param_1,uVar7 & 0xff,0xffffffffffffffff);
            uStack_4 = CONCAT22(uStack_4._2_2_,uVar2);
            FUN_001d31e0(param_1,uVar7 & 0xff,uStack_4);
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 0x15);
        iVar4 = 0;
        do {
          uVar5 = FUN_001d34e0(param_1,iVar4);
          cVar1 = FUN_001d2130(uVar5);
          if (param_2 == cVar1) {
            FUN_001d2120(uVar5);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x10);
      }
      iVar8 = iVar8 + 1;
      param_1 = param_1 + 0x66;
    } while (iVar8 < 0x19);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// 0x001b88c0  size 0x38
void FUN_001b88c0(int param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_2 + param_1 + 0xd82c);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
  return;
}

// 0x001b8900  size 0x88
undefined4 FUN_001b8900(int param_1,char param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    if (*(char *)(param_1 + iVar3 + 0xd82c) == '\x02') {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  if (iVar4 < 0xf) {
    pcVar2 = (char *)(param_2 + param_1 + 0xd82c);
    if (*pcVar2 == '\x02') {
      uVar1 = 0;
    }
    else {
      *pcVar2 = '\x02';
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x001b8990  size 0x40
int FUN_001b8990(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + iVar2 + 0xd82c) == '\x02') {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1e);
  return iVar1;
}

// 0x001b89d0  size 0x38
int FUN_001b89d0(short *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*param_1 != -1) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x66;
  } while (iVar2 < 0x19);
  return iVar1;
}

// 0x001b8a10  size 0x4c
char FUN_001b8a10(int param_1)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = '\x01';
  for (pcVar1 = &DAT_003181d1; (*pcVar1 != -1 && (*pcVar1 <= *(char *)(param_1 + 0x16e4)));
      pcVar1 = pcVar1 + 1) {
    cVar2 = cVar2 + '\x01';
  }
  return cVar2 + -1;
}

// 0x001b8a60  size 0x5c
char FUN_001b8a60(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = &DAT_003181d0;
  while( true ) {
    if (*pcVar1 == -1) {
      return *(char *)(param_1 + 0x16e4);
    }
    if (*(char *)(param_1 + 0x16e4) < *pcVar1) break;
    pcVar1 = pcVar1 + 1;
    iVar2 = iVar2 + 1;
  }
  return (&DAT_003181d0)[iVar2];
}

// 0x001b8ac0  size 0xe0
undefined4 FUN_001b8ac0(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 auStack_230 [128];
  undefined4 auStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  cVar2 = '\x01';
  auStack_30[0] = DAT_00318250;
  auStack_30[1] = DAT_00318254;
  auStack_30[2] = DAT_00318258;
  auStack_30[3] = DAT_0031825c;
  uStack_20 = DAT_00318260;
  uStack_1c = DAT_00318264;
  uStack_18 = DAT_00318268;
  uStack_14 = DAT_0031826c;
  uStack_10 = (undefined4)DAT_00318270;
  uStack_c = DAT_00318270._4_4_;
  uStack_8 = DAT_00318278;
  for (pcVar1 = &DAT_003181d1; (*pcVar1 != -1 && (*pcVar1 <= *(char *)(param_1 + 0x16e4)));
      pcVar1 = pcVar1 + 1) {
    cVar2 = cVar2 + '\x01';
  }
  return auStack_30[(char)(cVar2 + -1)];
}

// 0x001b8bb0  size 0x2f8
undefined4 FUN_001b8bb0(int param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int aiStack_290 [12];
  int aiStack_260 [12];
  int aiStack_230 [100];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int aiStack_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int aiStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int aiStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  cVar3 = '\x01';
  aiStack_30[2] = DAT_00318258;
  aiStack_30[3] = DAT_0031825c;
  aiStack_30[0] = DAT_00318250;
  uStack_20 = DAT_00318260;
  uStack_a0 = (undefined4)DAT_00318270;
  aiStack_30[1] = DAT_00318254;
  uStack_18 = DAT_00318268;
  uStack_14 = DAT_0031826c;
  uStack_8 = DAT_00318278;
  uStack_10 = uStack_a0;
  uStack_1c = DAT_00318264;
  uStack_9c = (undefined4)((ulong)DAT_00318270 >> 0x20);
  uStack_c = uStack_9c;
  for (pcVar1 = &DAT_003181d1; (*pcVar1 != -1 && (*pcVar1 <= *(char *)(param_1 + 0x16e4)));
      pcVar1 = pcVar1 + 1) {
    cVar3 = cVar3 + '\x01';
  }
  if (aiStack_30[(char)(cVar3 + -1)] != 0) {
    cVar3 = '\x01';
    aiStack_60[1] = DAT_00318254;
    aiStack_60[2] = DAT_00318258;
    aiStack_60[3] = DAT_0031825c;
    uStack_50 = DAT_00318260;
    uStack_4c = DAT_00318264;
    aiStack_60[0] = DAT_00318250;
    uStack_48 = DAT_00318268;
    uStack_44 = DAT_0031826c;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    uStack_38 = DAT_00318278;
    for (pcVar1 = &DAT_003181d1; (*pcVar1 != -1 && (*pcVar1 <= *(char *)(param_1 + 0x16e4)));
        pcVar1 = pcVar1 + 1) {
      cVar3 = cVar3 + '\x01';
    }
    if (aiStack_60[(char)(cVar3 + -1)] <= *(int *)(param_1 + 0x2738)) {
      cVar3 = '\x01';
      aiStack_90[1] = DAT_00318254;
      aiStack_90[2] = DAT_00318258;
      aiStack_90[3] = DAT_0031825c;
      uStack_80 = DAT_00318260;
      uStack_7c = DAT_00318264;
      aiStack_90[0] = DAT_00318250;
      uStack_78 = DAT_00318268;
      uStack_74 = DAT_0031826c;
      uStack_70 = uStack_a0;
      uStack_6c = uStack_9c;
      uStack_68 = DAT_00318278;
      for (pcVar1 = &DAT_003181d1; (*pcVar1 != -1 && (*pcVar1 <= *(char *)(param_1 + 0x16e4)));
          pcVar1 = pcVar1 + 1) {
        cVar3 = cVar3 + '\x01';
      }
      iVar2 = aiStack_90[(char)(cVar3 + -1)];
      *(int *)(param_1 + 0x2738) = *(int *)(param_1 + 0x2738) - iVar2;
      *(int *)(param_1 + 0x2be0) = *(int *)(param_1 + 0x2be0) + iVar2;
      if (99999999 < *(int *)(param_1 + 0x2be0)) {
        *(undefined4 *)(param_1 + 0x2be0) = 99999999;
      }
      if (*(int *)(param_1 + 0x2738) < 0) {
        *(undefined4 *)(param_1 + 0x2738) = 0;
      }
      cVar3 = *(char *)(param_1 + 0x16e4);
      iVar2 = 0;
      pcVar1 = &DAT_003181d0;
      do {
        if (*pcVar1 == -1) {
LAB_001b8ea0:
          *(char *)(param_1 + 0x16e4) = cVar3;
          return 1;
        }
        if (cVar3 < *pcVar1) {
          cVar3 = (&DAT_003181d0)[iVar2];
          goto LAB_001b8ea0;
        }
        pcVar1 = pcVar1 + 1;
        iVar2 = iVar2 + 1;
      } while( true );
    }
  }
  return 0;
}

// 0x001b8eb0  size 0x8
undefined1 FUN_001b8eb0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x16e4);
}

// 0x001b8ec0  size 0x18
int FUN_001b8ec0(int param_1,int param_2)

{
  return param_1 + param_2 * 0x44 + 0x2570;
}

// 0x001b8ee0  size 0x578
undefined4 FUN_001b8ee0(undefined8 param_1,long param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int aiStack_260 [24];
  int aiStack_200 [50];
  float fStack_138;
  int aiStack_130 [24];
  int aiStack_d0 [50];
  float fStack_8;
  
  iVar13 = (int)param_1;
  piVar11 = (int *)(iVar13 + (int)param_3 * 0xcc);
  if (param_2 == 0) {
    uVar12 = 0;
    do {
      uVar6 = FUN_001d34f0(piVar11,uVar12 & 0xff);
      psVar5 = (short *)uVar6;
      if ((char)psVar5[1] == '\x1f') {
        sVar1 = *psVar5;
        sVar2 = FUN_001d4010((short)*piVar11,uVar12 & 0xff,0xffffffffffffffff);
        if (sVar1 != sVar2) {
          iVar3 = iVar13 + *psVar5 * 2;
          sVar1 = *(short *)(iVar3 + 0x1420);
          if (sVar1 < 99) {
            *(short *)(iVar3 + 0x1420) = sVar1 + 1;
          }
          FUN_001bbeb0(param_1,param_3,uVar12 & 0xff);
          FUN_001d2160(uVar6);
          uVar7 = FUN_001d4010((short)*piVar11,uVar12 & 0xff,0xffffffffffffffff);
          FUN_001d2150(uVar6,uVar7);
        }
      }
      else {
        FUN_001d2160(uVar6);
        uVar7 = FUN_001d4010((short)*piVar11,uVar12 & 0xff,0xffffffffffffffff);
        FUN_001d2150(uVar6,uVar7);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x15);
    iVar3 = *(int *)(iVar13 + 0x2734);
    piVar10 = aiStack_200;
    iVar8 = 0x33;
    do {
      iVar8 = iVar8 + -1;
      *piVar10 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar10 = piVar10 + 1;
    } while (0 < iVar8);
    iVar4 = FUN_00205530((undefined2)aiStack_200[0]);
    piVar10 = &DAT_003181f0;
    piVar11 = aiStack_260;
    iVar9 = 0x15;
    iVar8 = (int)fStack_138 / 5;
    do {
      iVar9 = iVar9 + -1;
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    } while (0 < iVar9);
    if (0x14 < iVar8) {
      iVar8 = 0x14;
    }
    iVar3 = (int)((((*(uint *)(iVar4 + 0x84) / 1000) * 0x32) / 100 - (iVar3 - aiStack_200[2])) *
                 (100 - aiStack_260[iVar8])) / 100;
    if ((float)iVar3 < 0.0) {
      iVar3 = 0;
    }
    iVar8 = 0;
    uVar12 = 0;
    do {
      psVar5 = (short *)FUN_001d34f0(aiStack_200,uVar12 & 0xff);
      sVar1 = *psVar5;
      sVar2 = FUN_001d4010((undefined2)aiStack_200[0],uVar12 & 0xff,0xffffffffffffffff);
      if ((sVar1 != sVar2) && ((char)psVar5[1] == '\x1f')) {
        iVar4 = FUN_001ba290(*psVar5,0);
        iVar8 = iVar8 + (iVar4 * 0x3c) / 100;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x15);
    iVar3 = iVar3 + iVar8;
  }
  else {
    iVar3 = *(int *)(iVar13 + 0x2734);
    piVar10 = aiStack_d0;
    iVar8 = 0x33;
    do {
      iVar8 = iVar8 + -1;
      *piVar10 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar10 = piVar10 + 1;
    } while (0 < iVar8);
    iVar4 = FUN_00205530((undefined2)aiStack_d0[0]);
    piVar10 = &DAT_003181f0;
    piVar11 = aiStack_130;
    iVar9 = 0x15;
    iVar8 = (int)fStack_8 / 5;
    do {
      iVar9 = iVar9 + -1;
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    } while (0 < iVar9);
    if (0x14 < iVar8) {
      iVar8 = 0x14;
    }
    iVar3 = (int)((((*(uint *)(iVar4 + 0x84) / 1000) * 0x32) / 100 - (iVar3 - aiStack_d0[2])) *
                 (100 - aiStack_130[iVar8])) / 100;
    if ((float)iVar3 < 0.0) {
      iVar3 = 0;
    }
    iVar8 = 0;
    uVar12 = 0;
    do {
      psVar5 = (short *)FUN_001d34f0(aiStack_d0,uVar12 & 0xff);
      sVar1 = *psVar5;
      sVar2 = FUN_001d4010((undefined2)aiStack_d0[0],uVar12 & 0xff,0xffffffffffffffff);
      if ((sVar1 != sVar2) && ((char)psVar5[1] == '\x1f')) {
        iVar4 = FUN_001ba290(*psVar5,0);
        iVar8 = iVar8 + (iVar4 * 0x3c) / 100;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x15);
    iVar3 = iVar3 + iVar8;
  }
  *(int *)(iVar13 + 0x2738) = *(int *)(iVar13 + 0x2738) + iVar3;
  *(int *)(iVar13 + 0x2bdc) = *(int *)(iVar13 + 0x2bdc) + iVar3;
  if (99999999 < *(int *)(iVar13 + 0x2bdc)) {
    *(undefined4 *)(iVar13 + 0x2bdc) = 99999999;
  }
  if (99999999 < *(int *)(iVar13 + 0x2738)) {
    *(undefined4 *)(iVar13 + 0x2738) = 99999999;
  }
  FUN_001b9460(param_1,param_3);
  return 1;
}

// 0x001b9460  size 0xcc
undefined4 FUN_001b9460(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  
  psVar3 = (short *)(param_1 + (int)param_2 * 0xcc);
  iVar1 = FUN_00205530(*psVar3);
  if (*(int *)(iVar1 + 0x88) == 2) {
    *(undefined4 *)(*psVar3 * 4 + param_1 + 0x1c70) = 1;
  }
  FUN_001d3510(psVar3);
  if (param_2 != -1) {
    iVar2 = 0;
    iVar1 = param_1;
    do {
      if (*(short *)(iVar1 + 0x13ee) == param_2) {
        *(undefined2 *)(iVar2 * 2 + param_1 + 0x13ee) = 0xffff;
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 2;
    } while (iVar2 < 0x19);
  }
  return 1;
}

// 0x001b9530  size 0x350
long FUN_001b9530(undefined8 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined2 uStack_270;
  undefined2 uStack_26e;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_25c [24];
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined2 auStack_220 [16];
  undefined2 auStack_200 [42];
  undefined1 uStack_1ac;
  undefined4 uStack_1a8;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar11 = (int)param_1;
  iVar10 = iVar11 + param_2 * 0x44 + 0x2570;
  FUN_001d2e00(&uStack_1a0,iVar10);
  puVar5 = auStack_bc;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  puVar6 = auStack_18c;
  uStack_cc = uStack_19c;
  iVar2 = 0x17;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  puVar3 = puVar5;
  do {
    iVar2 = iVar2 + -1;
    *puVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar3 = puVar3 + 1;
  } while (0 < iVar2);
  puVar4 = auStack_80;
  puVar8 = auStack_150;
  iVar2 = 8;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  puVar7 = puVar4;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar2);
  puVar8 = auStack_60;
  puVar9 = auStack_130;
  iVar2 = 0x15;
  puVar7 = puVar8;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar7 = *puVar9;
    puVar7[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar2);
  uStack_264 = uStack_194;
  puVar3 = auStack_25c;
  uStack_26e = uStack_19e;
  iVar2 = 0x17;
  uStack_26c = uStack_19c;
  uStack_268 = uStack_198;
  uStack_8 = uStack_d8;
  uStack_c = uStack_dc;
  uStack_260 = uStack_190;
  uStack_270 = uStack_1a0;
  do {
    iVar2 = iVar2 + -1;
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  } while (0 < iVar2);
  puVar7 = auStack_220;
  iVar2 = 8;
  uStack_244 = uStack_174;
  uStack_240 = uStack_170;
  uStack_23c = uStack_16c;
  uStack_238 = uStack_168;
  uStack_234 = uStack_164;
  uStack_230 = uStack_160;
  uStack_22c = uStack_15c;
  uStack_228 = uStack_158;
  uStack_224 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar4[1];
    *puVar7 = *puVar4;
    puVar7[1] = uVar1;
    puVar4 = puVar4 + 2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar2);
  puVar7 = auStack_200;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar2);
  uStack_1ac = uStack_dc;
  uStack_1a8 = uStack_d8;
  iVar2 = *(int *)(iVar11 + 0x2734) % 0x1c;
  if (iVar2 == 0) {
    iVar2 = 0x1c;
  }
  iVar2 = FUN_001b9f50(&uStack_270,iVar2);
  lVar12 = -1;
  if ((iVar2 <= *(int *)(iVar11 + 0x2738)) &&
     (lVar12 = FUN_001b9a70(param_1,&uStack_270), lVar12 != -1)) {
    *(int *)(iVar11 + 0x2738) = *(int *)(iVar11 + 0x2738) - iVar2;
    *(int *)(iVar11 + 0x2be0) = *(int *)(iVar11 + 0x2be0) + iVar2;
    if (99999999 < *(int *)(iVar11 + 0x2be0)) {
      *(undefined4 *)(iVar11 + 0x2be0) = 99999999;
    }
    if (*(int *)(iVar11 + 0x2738) < 0) {
      *(undefined4 *)(iVar11 + 0x2738) = 0;
    }
  }
  if (lVar12 != -1) {
    FUN_001d2fd0(iVar10);
  }
  return lVar12;
}

// 0x001b9880  size 0x1ec
long FUN_001b9880(undefined8 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  FUN_001d3020(&uStack_d0,param_2);
  puVar5 = auStack_bc;
  puVar4 = auStack_18c;
  iVar3 = 0x17;
  uStack_1a0 = uStack_d0;
  uStack_190 = uStack_c0;
  uStack_19e = uStack_ce;
  uStack_19c = uStack_cc;
  uStack_198 = uStack_c8;
  uStack_194 = uStack_c4;
  do {
    iVar3 = iVar3 + -1;
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (0 < iVar3);
  puVar7 = auStack_80;
  puVar6 = auStack_150;
  iVar3 = 8;
  uStack_168 = uStack_98;
  uStack_164 = uStack_94;
  uStack_160 = uStack_90;
  uStack_174 = uStack_a4;
  uStack_170 = uStack_a0;
  uStack_16c = uStack_9c;
  uStack_15c = uStack_8c;
  uStack_158 = uStack_88;
  uStack_154 = uStack_84;
  do {
    iVar3 = iVar3 + -1;
    uVar1 = puVar7[1];
    *puVar6 = *puVar7;
    puVar6[1] = uVar1;
    puVar7 = puVar7 + 2;
    puVar6 = puVar6 + 2;
  } while (0 < iVar3);
  puVar7 = auStack_60;
  puVar6 = auStack_130;
  iVar3 = 0x15;
  do {
    iVar3 = iVar3 + -1;
    uVar1 = puVar7[1];
    *puVar6 = *puVar7;
    puVar6[1] = uVar1;
    puVar7 = puVar7 + 2;
    puVar6 = puVar6 + 2;
  } while (0 < iVar3);
  uStack_dc = uStack_c;
  uStack_d8 = uStack_8;
  iVar8 = (int)param_1;
  iVar3 = *(int *)(iVar8 + 0x2734) % 0x1c;
  if (iVar3 == 0) {
    iVar3 = 0x1c;
  }
  iVar3 = FUN_001b9f50(&uStack_1a0,iVar3);
  lVar2 = -1;
  if ((iVar3 <= *(int *)(iVar8 + 0x2738)) &&
     (lVar2 = FUN_001b9a70(param_1,&uStack_1a0), lVar2 != -1)) {
    *(int *)(iVar8 + 0x2738) = *(int *)(iVar8 + 0x2738) - iVar3;
    *(int *)(iVar8 + 0x2be0) = *(int *)(iVar8 + 0x2be0) + iVar3;
    if (99999999 < *(int *)(iVar8 + 0x2be0)) {
      *(undefined4 *)(iVar8 + 0x2be0) = 99999999;
    }
    if (*(int *)(iVar8 + 0x2738) < 0) {
      *(undefined4 *)(iVar8 + 0x2738) = 0;
    }
  }
  return lVar2;
}

// 0x001b9a70  size 0x19c
int FUN_001b9a70(short *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  long lVar7;
  undefined4 auStack_d0 [4];
  undefined4 uStack_c0;
  undefined4 auStack_bc [47];
  
  iVar2 = 0x33;
  puVar3 = auStack_d0;
  do {
    iVar2 = iVar2 + -1;
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  } while (0 < iVar2);
  lVar7 = 0;
  iVar2 = 0;
  psVar4 = param_1;
  do {
    if (*psVar4 != -1) {
      lVar7 = (long)((int)lVar7 + 1);
    }
    iVar2 = iVar2 + 1;
    psVar4 = psVar4 + 0x66;
  } while (iVar2 < 0x19);
  if ((char)param_1[0xb72] <= lVar7) {
    return -1;
  }
  iVar2 = 0;
  psVar4 = param_1;
  while (*psVar4 != -1) {
    iVar2 = iVar2 + 1;
    psVar4 = psVar4 + 0x66;
    iVar5 = -1;
    if (0x18 < iVar2) goto LAB_001b9ba0;
  }
  puVar3 = auStack_bc;
  psVar6 = psVar4 + 10;
  iVar5 = 0x17;
  *(undefined4 *)psVar4 = auStack_d0[0];
  *(undefined4 *)(psVar4 + 2) = auStack_d0[1];
  *(undefined4 *)(psVar4 + 4) = auStack_d0[2];
  *(undefined4 *)(psVar4 + 6) = auStack_d0[3];
  *(undefined4 *)(psVar4 + 8) = uStack_c0;
  do {
    iVar5 = iVar5 + -1;
    uVar1 = puVar3[1];
    *(undefined4 *)psVar6 = *puVar3;
    *(undefined4 *)(psVar6 + 2) = uVar1;
    puVar3 = puVar3 + 2;
    psVar6 = psVar6 + 4;
  } while (0 < iVar5);
  iVar5 = FUN_00205530((short)auStack_d0[0]);
  if (*(int *)(iVar5 + 0x88) == 2) {
    (param_1 + (short)auStack_d0[0] * 2 + 0xe38)[0] = 0;
    (param_1 + (short)auStack_d0[0] * 2 + 0xe38)[1] = 0;
  }
  (param_1 + (short)auStack_d0[0] * 2 + 0x1078)[0] = 1;
  (param_1 + (short)auStack_d0[0] * 2 + 0x1078)[1] = 0;
  iVar5 = iVar2;
LAB_001b9ba0:
  if (iVar5 == -1) {
    return -1;
  }
  iVar2 = 0;
  psVar4 = param_1;
  do {
    if (psVar4[0x9f7] == -1) {
      param_1[iVar2 + 0x9f7] = (short)iVar5;
      return iVar5;
    }
    iVar2 = iVar2 + 1;
    psVar4 = psVar4 + 1;
  } while (iVar2 < 0x19);
  return iVar5;
}

// 0x001b9c10  size 0x3c
bool FUN_001b9c10(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = *(short *)(param_1 + param_2 * 0xcc) != -1;
  if (bVar1) {
    *(short *)(param_1 + 0x13ec) = (short)param_2;
  }
  return bVar1;
}

// 0x001b9c50  size 0xdc
int FUN_001b9c50(undefined8 param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar5 = 0;
  do {
    psVar3 = (short *)FUN_001d34f0(param_1,uVar5 & 0xff);
    sVar1 = *psVar3;
    sVar2 = FUN_001d4010(*(undefined2 *)param_1,uVar5 & 0xff,0xffffffffffffffff);
    if ((sVar1 != sVar2) && ((char)psVar3[1] == '\x1f')) {
      iVar4 = FUN_001ba290(*psVar3,0);
      iVar6 = iVar6 + (iVar4 * 0x3c) / 100;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x15);
  return iVar6;
}

// 0x001b9d30  size 0x214
int FUN_001b9d30(undefined4 *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int aiStack_130 [24];
  undefined2 auStack_d0 [4];
  int iStack_c8;
  float fStack_8;
  
  iVar5 = 0x33;
  puVar7 = (undefined4 *)auStack_d0;
  do {
    iVar5 = iVar5 + -1;
    *puVar7 = *param_1;
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar5);
  iVar3 = FUN_00205530(auStack_d0[0]);
  piVar9 = &DAT_003181f0;
  piVar8 = aiStack_130;
  iVar6 = 0x15;
  iVar5 = (int)fStack_8 / 5;
  do {
    iVar6 = iVar6 + -1;
    *piVar8 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar8 = piVar8 + 1;
  } while (0 < iVar6);
  if (0x14 < iVar5) {
    iVar5 = 0x14;
  }
  iVar5 = (int)((((*(uint *)(iVar3 + 0x84) / 1000) * 0x32) / 100 - (param_2 - iStack_c8)) *
               (100 - aiStack_130[iVar5])) / 100;
  if ((float)iVar5 < 0.0) {
    iVar5 = 0;
  }
  iVar3 = 0;
  uVar10 = 0;
  do {
    psVar4 = (short *)FUN_001d34f0(auStack_d0,uVar10 & 0xff);
    sVar1 = *psVar4;
    sVar2 = FUN_001d4010(auStack_d0[0],uVar10 & 0xff,0xffffffffffffffff);
    if ((sVar1 != sVar2) && ((char)psVar4[1] == '\x1f')) {
      iVar6 = FUN_001ba290(*psVar4,0);
      iVar3 = iVar3 + (iVar6 * 0x3c) / 100;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x15);
  return iVar5 + iVar3;
}

// 0x001b9f50  size 0x2c4
uint FUN_001b9f50(undefined4 *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined2 auStack_d0 [6];
  int iStack_c4;
  float fStack_c0;
  
  iVar4 = 0x33;
  puVar5 = (undefined4 *)auStack_d0;
  do {
    iVar4 = iVar4 + -1;
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  } while (0 < iVar4);
  iVar4 = FUN_00205530(auStack_d0[0]);
  uVar6 = 0;
  uVar7 = *(uint *)(iVar4 + 0x84) / 1000;
  do {
    psVar3 = (short *)FUN_001d34f0(auStack_d0,uVar6 & 0xff);
    sVar1 = *psVar3;
    sVar2 = FUN_001d4010(auStack_d0[0],uVar6 & 0xff,0xffffffffffffffff);
    if (sVar1 != sVar2) {
      iVar4 = FUN_001ba290(*psVar3,0);
      uVar7 = uVar7 + (iVar4 * 0x50) / 100;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x15);
  if ((iStack_c4 == 0) && (fStack_c0 == 0.0)) {
    if (param_2 == 0x15) {
      uVar7 = (int)(uVar7 * 0x61) / 100;
    }
    else if (param_2 == 0x16) {
      uVar7 = (int)(uVar7 * 0x60) / 100;
    }
    else if (param_2 == 0x17) {
      uVar7 = (int)(uVar7 * 0x60) / 100;
    }
    else if (param_2 == 0x18) {
      uVar7 = (int)(uVar7 * 0x5f) / 100;
    }
    else if (param_2 == 0x19) {
      uVar7 = (int)(uVar7 * 0x5c) / 100;
    }
  }
  else {
    uVar7 = (int)(uVar7 * (100 - iStack_c4 / 500)) / 100;
  }
  return uVar7;
}

// 0x001ba220  size 0x1c
void FUN_001ba220(int param_1,short param_2)

{
  *(undefined4 *)(param_2 * 4 + param_1 + 0x16e8) = 1;
  return;
}

// 0x001ba240  size 0x48
int FUN_001ba240(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_001ba290(param_1,0);
  return (iVar1 * 0x3c) / 100;
}

// 0x001ba290  size 0xc88
undefined8 FUN_001ba290(undefined8 param_1,long param_2)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_001d3da0();
  sVar1 = FUN_001d3970(param_1);
  lVar2 = FUN_001d3540(param_1);
  if (param_2 == 0) {
    if (sVar1 == 0xaa) {
      uVar3 = 0x29;
    }
    else if (sVar1 == 0xa9) {
      uVar3 = 100;
    }
    else {
      uVar3 = 0xa2;
      if (sVar1 == 0xa2) {
        uVar3 = 0x78;
      }
      else if (sVar1 == 0xa4) {
        uVar3 = 0x96;
      }
      else if (sVar1 == 0x89) {
        if (lVar2 == 3) {
          uVar3 = 0x96;
        }
        else if (lVar2 == 2) {
          uVar3 = 10;
        }
        else if (lVar2 == 1) {
          uVar3 = 5;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x9d) {
        if (lVar2 == 5) {
          uVar3 = 0x96;
        }
        else if (lVar2 == 4) {
          uVar3 = 0x7d;
        }
        else if (lVar2 == 3) {
          uVar3 = 100;
        }
        else if (lVar2 == 2) {
          uVar3 = 0x4b;
        }
        else if (lVar2 == 1) {
          uVar3 = 0x32;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x98) {
        if (lVar2 == 5) {
          uVar3 = 0x87;
        }
        else if (lVar2 == 4) {
          uVar3 = 100;
        }
        else if (lVar2 == 3) {
          uVar3 = 0x50;
        }
        else if (lVar2 == 2) {
          uVar3 = 0x41;
        }
        else if (lVar2 == 1) {
          uVar3 = 0x2d;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x93) {
        if (lVar2 == 5) {
          uVar3 = 200;
        }
        else if (lVar2 == 4) {
          uVar3 = 0xb4;
        }
        else if (lVar2 == 3) {
          uVar3 = 0x96;
        }
        else if (lVar2 == 2) {
          uVar3 = 0x73;
        }
        else if (lVar2 == 1) {
          uVar3 = 0x50;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x8d) {
        if (lVar2 == 5) {
          uVar3 = 0xa5;
        }
        else if (lVar2 == 4) {
          uVar3 = 0x82;
        }
        else if (lVar2 == 3) {
          uVar3 = 0x5a;
        }
        else if (lVar2 == 2) {
          uVar3 = 0x4b;
        }
        else if (lVar2 == 1) {
          uVar3 = 0x32;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x83) {
        if (lVar2 == 5) {
          uVar3 = 0x28a;
        }
        else if (lVar2 == 4) {
          uVar3 = 0x200;
        }
        else if (lVar2 == 3) {
          uVar3 = 0x17b;
        }
        else if (lVar2 == 2) {
          uVar3 = 200;
        }
        else if (lVar2 == 1) {
          uVar3 = 0x87;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x7d) {
        if (lVar2 == 5) {
          uVar3 = 0x2d5;
        }
        else if (lVar2 == 4) {
          uVar3 = 0x288;
        }
        else if (lVar2 == 3) {
          uVar3 = 0x20a;
        }
        else if (lVar2 == 2) {
          uVar3 = 0x15e;
        }
        else if (lVar2 == 1) {
          uVar3 = 200;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x6e) {
        if (lVar2 == 3) {
          uVar3 = 300;
        }
        else if (lVar2 == 2) {
          uVar3 = 0xb9;
        }
        else if (lVar2 == 1) {
          uVar3 = 100;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x6b) {
        if (lVar2 == 3) {
          uVar3 = 200;
        }
        else if (lVar2 == 2) {
          uVar3 = 0x7e;
        }
        else if (lVar2 == 1) {
          uVar3 = 0x4c;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x67) {
        if (lVar2 == 3) {
          uVar3 = 200;
        }
        else if (lVar2 == 2) {
          uVar3 = 0x7d;
        }
        else if (lVar2 == 1) {
          uVar3 = 0x4b;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x77) {
        if (lVar2 == 5) {
          uVar3 = 0xfa;
        }
        else if (lVar2 == 4) {
          uVar3 = 0xb6;
        }
        else if (lVar2 == 3) {
          uVar3 = 0xaf;
        }
        else if (lVar2 == 2) {
          uVar3 = 0x91;
        }
        else if (lVar2 == 1) {
          uVar3 = 100;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x71) {
        if (lVar2 == 5) {
          uVar3 = 500;
        }
        else if (lVar2 == 4) {
          uVar3 = 0x15e;
        }
        else if (lVar2 == 3) {
          uVar3 = 0xfc;
        }
        else if (lVar2 == 2) {
          uVar3 = 0xc3;
        }
        else if (lVar2 == 1) {
          uVar3 = 0x78;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x61) {
        if (lVar2 == 5) {
          uVar3 = 0x228;
        }
        else if (lVar2 == 4) {
          uVar3 = 0x17b;
        }
        else if (lVar2 == 3) {
          uVar3 = 0xf2;
        }
        else if (lVar2 == 2) {
          uVar3 = 0xb9;
        }
        else if (lVar2 == 1) {
          uVar3 = 100;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x5b) {
        if (lVar2 == 5) {
          uVar3 = 0x311;
        }
        else if (lVar2 == 4) {
          uVar3 = 500;
        }
        else if (lVar2 == 3) {
          uVar3 = 0x177;
        }
        else if (lVar2 == 2) {
          uVar3 = 0xe0;
        }
        else if (lVar2 == 1) {
          uVar3 = 0x96;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x55) {
        if (lVar2 == 5) {
          uVar3 = 500;
        }
        else if (lVar2 == 4) {
          uVar3 = 0x18a;
        }
        else if (lVar2 == 3) {
          uVar3 = 0xff;
        }
        else if (lVar2 == 2) {
          uVar3 = 0x94;
        }
        else if (lVar2 == 1) {
          uVar3 = 100;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x4f) {
        if (lVar2 == 5) {
          uVar3 = 0x15e;
        }
        else if (lVar2 == 4) {
          uVar3 = 200;
        }
        else if (lVar2 == 3) {
          uVar3 = 0x87;
        }
        else if (lVar2 == 2) {
          uVar3 = 100;
        }
        else if (lVar2 == 1) {
          uVar3 = 0x4d;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (sVar1 == 0x24) {
        if (lVar2 == 5) {
          uVar3 = 0x2f1;
        }
        else if (lVar2 == 4) {
          uVar3 = 500;
        }
        else if (lVar2 == 3) {
          uVar3 = 0x17c;
        }
        else if (lVar2 == 2) {
          uVar3 = 0xe0;
        }
        else {
          if (lVar2 != 1) {
            return 0;
          }
          uVar3 = 0x96;
        }
      }
      else if (sVar1 == 0x45) {
        switch(lVar2) {
        default:
          uVar3 = 0;
          break;
        case 1:
          uVar3 = 0x7a;
          break;
        case 2:
          uVar3 = 0xe1;
          break;
        case 3:
          uVar3 = 0x137;
          break;
        case 4:
          uVar3 = 0x1ca;
          break;
        case 5:
          uVar3 = 0x2d6;
          break;
        case 6:
          uVar3 = 0x37c;
          break;
        case 7:
          uVar3 = 0x4e2;
          break;
        case 8:
          uVar3 = 0x5dc;
        }
      }
      else if (sVar1 == 0x3c) {
        switch(lVar2) {
        default:
          uVar3 = 0;
          break;
        case 1:
          uVar3 = 0x6c;
          break;
        case 2:
          break;
        case 3:
          uVar3 = 0xf0;
          break;
        case 4:
          uVar3 = 0x13b;
          break;
        case 5:
          uVar3 = 0x1e8;
          break;
        case 6:
          uVar3 = 700;
          break;
        case 7:
          uVar3 = 899;
          break;
        case 8:
          uVar3 = 0x458;
        }
      }
      else if (sVar1 == 0x33) {
        switch(lVar2) {
        default:
          uVar3 = 0;
          break;
        case 1:
          uVar3 = 0x73;
          break;
        case 2:
          uVar3 = 0xb1;
          break;
        case 3:
          uVar3 = 0x102;
          break;
        case 4:
          uVar3 = 0x159;
          break;
        case 5:
          uVar3 = 500;
          break;
        case 6:
          uVar3 = 0x2e9;
          break;
        case 7:
          uVar3 = 1000;
          break;
        case 8:
          uVar3 = 0x4ea;
        }
      }
      else if (sVar1 == 0x2a) {
        switch(lVar2) {
        default:
          uVar3 = 0;
          break;
        case 1:
          uVar3 = 100;
          break;
        case 2:
          uVar3 = 0x96;
          break;
        case 3:
          uVar3 = 0xe1;
          break;
        case 4:
          uVar3 = 300;
          break;
        case 5:
          uVar3 = 0x1c2;
          break;
        case 6:
          uVar3 = 0x28c;
          break;
        case 7:
          uVar3 = 0x34d;
          break;
        case 8:
          uVar3 = 1000;
        }
      }
      else if (sVar1 == 0x1b) {
        switch(lVar2) {
        default:
          uVar3 = 0;
          break;
        case 1:
          uVar3 = 300;
          break;
        case 2:
          uVar3 = 0x2d1;
          break;
        case 3:
          uVar3 = 1000;
          break;
        case 4:
          uVar3 = 0x8ca;
          break;
        case 5:
          uVar3 = 0xe74;
          break;
        case 6:
          uVar3 = 0x1068;
          break;
        case 7:
          uVar3 = 0x136f;
          break;
        case 8:
          uVar3 = 0x1467;
        }
      }
      else if (sVar1 == 0x12) {
        switch(lVar2) {
        default:
          uVar3 = 0;
          break;
        case 1:
          uVar3 = 0x104;
          break;
        case 2:
          uVar3 = 400;
          break;
        case 3:
          uVar3 = 0x2e9;
          break;
        case 4:
          uVar3 = 0x60e;
          break;
        case 5:
          uVar3 = 0x8e8;
          break;
        case 6:
          uVar3 = 3000;
          break;
        case 7:
          uVar3 = 0xea6;
          break;
        case 8:
          uVar3 = 4000;
        }
      }
      else if (sVar1 == 9) {
        switch(lVar2) {
        default:
          uVar3 = 0;
          break;
        case 1:
          uVar3 = 0x102;
          break;
        case 2:
          uVar3 = 0x1c7;
          break;
        case 3:
          uVar3 = 0x352;
          break;
        case 4:
          uVar3 = 0x6b8;
          break;
        case 5:
          uVar3 = 0xa41;
          break;
        case 6:
          uVar3 = 0xc4e;
          break;
        case 7:
          uVar3 = 4000;
          break;
        case 8:
          uVar3 = 0x11c6;
        }
      }
      else if (sVar1 == 0) {
        switch(lVar2) {
        default:
          uVar3 = 0;
          break;
        case 1:
          uVar3 = 200;
          break;
        case 2:
          uVar3 = 0x17c;
          break;
        case 3:
          uVar3 = 0x2d5;
          break;
        case 4:
          uVar3 = 0x3d4;
          break;
        case 5:
          uVar3 = 0x5dc;
          break;
        case 6:
          uVar3 = 0x9b5;
          break;
        case 7:
          uVar3 = 3000;
          break;
        case 8:
          uVar3 = 0xf0a;
        }
      }
      else {
        uVar3 = 0x6e;
        if (sVar1 != 0xad) {
          uVar3 = 99999999;
        }
      }
    }
  }
  else {
    uVar3 = 300;
  }
  return uVar3;
}

// 0x001baf70  size 0x3c
bool FUN_001baf70(int param_1)

{
  bool bVar1;
  
  param_1 = param_1 + *(short *)(param_1 + 0x13ec) * 0xcc;
  bVar1 = *(char *)(param_1 + 0xc4) != '\0';
  if (bVar1) {
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  return bVar1;
}

// 0x001bafb0  size 0xc4
undefined4 FUN_001bafb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + *(short *)(param_1 + 0x13ec) * 0xcc;
  iVar1 = FUN_001ba290(0xffffffffffffffff,1);
  if (*(char *)(iVar3 + 0xc4) == '\0') {
    *(int *)(param_1 + 0x2738) = *(int *)(param_1 + 0x2738) - iVar1;
    *(int *)(param_1 + 0x2be0) = *(int *)(param_1 + 0x2be0) + iVar1;
    if (99999999 < *(int *)(param_1 + 0x2be0)) {
      *(undefined4 *)(param_1 + 0x2be0) = 99999999;
    }
    if (*(int *)(param_1 + 0x2738) < 0) {
      *(undefined4 *)(param_1 + 0x2738) = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      *(undefined1 *)(iVar3 + 0xc4) = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// 0x001bb080  size 0x104
undefined4 FUN_001bb080(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = FUN_001ba290(param_2,0);
  iVar1 = (iVar1 * 0x3c) / 100;
  iVar2 = (short)param_2 * 2 + param_1;
  psVar3 = (short *)(iVar2 + 0x1420);
  if (0 < *(short *)(iVar2 + 0x1420)) {
    *(int *)(param_1 + 0x2738) = *(int *)(param_1 + 0x2738) + iVar1;
    *(int *)(param_1 + 0x2bdc) = *(int *)(param_1 + 0x2bdc) + iVar1;
    if (99999999 < *(int *)(param_1 + 0x2bdc)) {
      *(undefined4 *)(param_1 + 0x2bdc) = 99999999;
    }
    if (99999999 < *(int *)(param_1 + 0x2738)) {
      *(undefined4 *)(param_1 + 0x2738) = 99999999;
    }
    uVar4 = 1;
    *psVar3 = *psVar3 + -1;
  }
  return uVar4;
}

// 0x001bb190  size 0x24
undefined4 FUN_001bb190(int param_1,short param_2)

{
  param_1 = param_2 * 2 + param_1;
  *(short *)(param_1 + 0x1420) = *(short *)(param_1 + 0x1420) + -1;
  return 1;
}

// 0x001bb1c0  size 0x138
undefined4 FUN_001bb1c0(int param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_001ba290(param_2,0);
  *(int *)(param_1 + 0x2738) = *(int *)(param_1 + 0x2738) - iVar2;
  *(int *)(param_1 + 0x2be0) = *(int *)(param_1 + 0x2be0) + iVar2;
  if (99999999 < *(int *)(param_1 + 0x2be0)) {
    *(undefined4 *)(param_1 + 0x2be0) = 99999999;
  }
  if (*(int *)(param_1 + 0x2738) < 0) {
    *(undefined4 *)(param_1 + 0x2738) = 0;
    uVar3 = 0;
  }
  else {
    iVar4 = (short)param_2 * 2 + param_1;
    sVar1 = *(short *)(iVar4 + 0x1420);
    if (sVar1 < 99) {
      *(short *)(iVar4 + 0x1420) = sVar1 + 1;
      uVar3 = 1;
    }
    else {
      *(int *)(param_1 + 0x2738) = *(int *)(param_1 + 0x2738) + iVar2;
      *(int *)(param_1 + 0x2bdc) = *(int *)(param_1 + 0x2bdc) + iVar2;
      if (99999999 < *(int *)(param_1 + 0x2bdc)) {
        *(undefined4 *)(param_1 + 0x2bdc) = 99999999;
      }
      if (99999999 < *(int *)(param_1 + 0x2738)) {
        *(undefined4 *)(param_1 + 0x2738) = 99999999;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

// 0x001bb300  size 0x44
bool FUN_001bb300(int param_1,short param_2)

{
  short sVar1;
  
  param_1 = param_2 * 2 + param_1;
  sVar1 = *(short *)(param_1 + 0x1420);
  if (sVar1 < 99) {
    *(short *)(param_1 + 0x1420) = sVar1 + 1;
  }
  return sVar1 < 99;
}

// 0x001bb350  size 0x164
undefined4 FUN_001bb350(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 auStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar7 = (int)param_4;
  puVar8 = (undefined2 *)(param_1 + *(short *)(param_1 + 0x13ec) * 0xcc);
  uVar4 = FUN_00209280((char)param_3);
  memcpy(&uStack_a0,uVar4,0x28);
  auStack_40[0] = uStack_a0;
  auStack_40[1] = uStack_9c;
  auStack_40[2] = uStack_98;
  auStack_40[3] = uStack_94;
  uStack_10 = auStack_40[iVar7 * 3];
  uStack_70 = uStack_a0;
  uStack_6c = uStack_9c;
  uStack_68 = uStack_98;
  uStack_64 = uStack_94;
  uStack_c = auStack_40[iVar7 * 3 + 1];
  uStack_60 = uStack_90;
  uStack_5c = uStack_8c;
  uStack_58 = uStack_88;
  uStack_54 = uStack_84;
  uStack_8 = auStack_40[iVar7 * 3 + 2];
  uStack_30 = uStack_90;
  uStack_2c = uStack_8c;
  uStack_28 = uStack_88;
  uStack_24 = uStack_84;
  uStack_50 = uStack_80;
  uStack_20 = uStack_80;
  lVar5 = FUN_001bb4c0(*puVar8,param_3,param_4);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uStack_4._0_3_ = CONCAT12((char)param_3,(undefined2)uStack_10);
    uVar6 = FUN_001d3da0((undefined2)uStack_10);
    if (((uVar6 & 0xff) == 0) || ((uVar6 & 0xff) == 2)) {
      sVar1 = FUN_001d3540((undefined2)uStack_4);
      sVar2 = FUN_001d4010(*puVar8,uVar6,0xffffffffffffffff);
      uStack_4 = CONCAT22(uStack_4._2_2_,sVar1 + sVar2);
    }
    lVar5 = FUN_001d31e0(puVar8,param_2,uStack_4);
    if (lVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

// 0x001bb4c0  size 0x488
undefined4 FUN_001bb4c0(short param_1,undefined1 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  byte bStack_80;
  char cStack_7f;
  uint auStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uVar5 = FUN_00209280(param_2);
  memcpy(&uStack_e0,uVar5,0x28);
  auStack_40[0] = uStack_e0;
  auStack_40[1] = uStack_dc;
  auStack_40[2] = uStack_d8;
  auStack_40[3] = uStack_d4;
  uStack_10 = auStack_40[param_3 * 3];
  uStack_b0 = uStack_e0;
  uStack_ac = uStack_dc;
  uStack_a8 = uStack_d8;
  uStack_a4 = uStack_d4;
  uStack_c = auStack_40[param_3 * 3 + 1];
  uStack_a0 = uStack_d0;
  uStack_9c = uStack_cc;
  uStack_98 = uStack_c8;
  uStack_94 = uStack_c4;
  uStack_8 = auStack_40[param_3 * 3 + 2];
  uStack_30 = uStack_d0;
  uStack_2c = uStack_cc;
  uStack_28 = uStack_c8;
  uStack_24 = uStack_c4;
  uStack_90 = uStack_c0;
  uStack_20 = uStack_c0;
  iVar3 = FUN_00205530(param_1);
  puVar9 = (undefined4 *)(iVar3 + 0x44);
  pbVar8 = &bStack_80;
  iVar7 = 8;
  do {
    iVar7 = iVar7 + -1;
    uVar4 = puVar9[1];
    *(undefined4 *)pbVar8 = *puVar9;
    *(undefined4 *)(pbVar8 + 4) = uVar4;
    puVar9 = puVar9 + 2;
    pbVar8 = pbVar8 + 8;
  } while (0 < iVar7);
  cVar1 = *(char *)(iVar3 + 0x28);
  if (cVar1 == '\x11') {
    uVar4 = 0;
  }
  else if (*(int *)(iVar3 + 0x88) == 2) {
    uVar4 = 0;
  }
  else if (((short)uStack_8 == -1) || ((short)uStack_8 == param_1)) {
    if (uStack_c == 0) {
      uVar4 = 1;
    }
    else {
      if ((uStack_c & 0x1ff000) != 0) {
        bVar6 = false;
        if (((uStack_c & 0x1000) != 0) && (cVar1 == '\x06')) {
          bVar6 = true;
        }
        if (((uStack_c & 0x2000) != 0) && (cVar1 == '\x05')) {
          bVar6 = true;
        }
        if (((uStack_c & 0x4000) != 0) && (cVar1 == '\b')) {
          bVar6 = true;
        }
        if (((uStack_c & 0x8000) != 0) && (cVar1 == '\x03')) {
          bVar6 = true;
        }
        if (((uStack_c & 0x10000) != 0) && (cVar1 == '\x04')) {
          bVar6 = true;
        }
        if (((uStack_c & 0x20000) != 0) && (cVar1 == '\n')) {
          bVar6 = true;
        }
        if (((uStack_c & 0x40000) != 0) && (cVar1 == '\t')) {
          bVar6 = true;
        }
        if (((uStack_c & 0x80000) != 0) && (cVar1 == '\x0f')) {
          bVar6 = true;
        }
        if (((uStack_c & 0x100000) != 0) && (cVar1 == '\x02')) {
          bVar6 = true;
        }
        if (!bVar6) {
          return 0;
        }
      }
      if ((uStack_c & 0x1f) != 0) {
        bVar6 = false;
        if (((uStack_c & 1) != 0) && (*(char *)(iVar3 + 0x3c) == '\0')) {
          bVar6 = true;
        }
        if (((uStack_c & 2) != 0) && (*(char *)(iVar3 + 0x3c) == '\x01')) {
          bVar6 = true;
        }
        if (((uStack_c & 0x10) != 0) && (*(char *)(iVar3 + 0x3c) == '\x02')) {
          bVar6 = true;
        }
        if (((uStack_c & 8) != 0) && (*(char *)(iVar3 + 0x3c) == '\x03')) {
          bVar6 = true;
        }
        if (((uStack_c & 4) != 0) && (*(char *)(iVar3 + 0x3c) == '\x04')) {
          bVar6 = true;
        }
        if (!bVar6) {
          return 0;
        }
      }
      if ((uStack_c & 0x1e0) != 0) {
        bVar6 = false;
        if (((uStack_c & 0x20) != 0) && (((bStack_80 == 5 || (bStack_80 == 6)) || (bStack_80 == 8)))
           ) {
          bVar6 = true;
        }
        if (((uStack_c & 0x40) != 0) && (bStack_80 < 3)) {
          bVar6 = true;
        }
        if (((uStack_c & 0x80) != 0) && (bStack_80 - 3 < 2)) {
          bVar6 = true;
        }
        if (((uStack_c & 0x100) != 0) && (bStack_80 == 7)) {
          bVar6 = true;
        }
        if (!bVar6) {
          return 0;
        }
      }
      if ((uStack_c & 0x600) != 0) {
        bVar6 = false;
        if (((uStack_c & 0x200) != 0) && (cStack_7f == '\0')) {
          bVar6 = true;
        }
        if (((uStack_c & 0x400) != 0) && (cStack_7f != '\0')) {
          bVar6 = true;
        }
        if (!bVar6) {
          return 0;
        }
      }
      if (((uStack_c & 0x800) == 0) || (*(int *)(iVar3 + 0x90) == 1)) {
        sVar2 = FUN_001d3970((undefined2)uStack_10);
        if ((sVar2 == 0x24) && (cStack_7f != '\x01')) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

// 0x001bb950  size 0x144
undefined4 FUN_001bb950(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  
  iVar5 = (int)param_1;
  sVar1 = *(short *)(iVar5 + 0x13ec);
  puVar8 = (undefined2 *)(iVar5 + sVar1 * 0xcc);
  uVar6 = FUN_001d34f0(puVar8);
  psVar4 = (short *)uVar6;
  uVar9 = 0;
  if ((char)psVar4[1] == '\x1f') {
    sVar2 = *psVar4;
    sVar3 = FUN_001d4010(*puVar8,param_2,0xffffffffffffffff);
    if (sVar2 != sVar3) {
      iVar5 = *psVar4 * 2 + iVar5;
      sVar2 = *(short *)(iVar5 + 0x1420);
      if (sVar2 < 99) {
        *(short *)(iVar5 + 0x1420) = sVar2 + 1;
      }
      FUN_001bbeb0(param_1,sVar1,param_2);
      FUN_001d2160(uVar6);
      uVar7 = FUN_001d4010(*puVar8,param_2,0xffffffffffffffff);
      FUN_001d2150(uVar6,uVar7);
      uVar9 = 1;
    }
  }
  else {
    FUN_001d2160(uVar6);
    uVar7 = FUN_001d4010(*puVar8,param_2,0xffffffffffffffff);
    FUN_001d2150(uVar6,uVar7);
    uVar9 = 1;
  }
  return uVar9;
}

// 0x001bbaa0  size 0x38
undefined2 FUN_001bbaa0(int param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_001d34f0(param_1 + *(short *)(param_1 + 0x13ec) * 0xcc);
  return *puVar1;
}

// 0x001bbae0  size 0x38
undefined2 FUN_001bbae0(int param_1,int param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_001d34f0(param_1 + param_2 * 0xcc,param_3);
  return *puVar1;
}

// 0x001bbb20  size 0x148
undefined4 FUN_001bbb20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  
  puVar7 = (undefined2 *)((int)param_1 + (int)param_2 * 0xcc);
  uVar5 = FUN_001d34f0(puVar7,param_3);
  psVar3 = (short *)uVar5;
  uVar8 = 0;
  if ((char)psVar3[1] == '\x1f') {
    sVar1 = *psVar3;
    sVar2 = FUN_001d4010(*puVar7,param_3,0xffffffffffffffff);
    if (sVar1 != sVar2) {
      iVar4 = *psVar3 * 2 + (int)param_1;
      sVar1 = *(short *)(iVar4 + 0x1420);
      if (sVar1 < 99) {
        *(short *)(iVar4 + 0x1420) = sVar1 + 1;
      }
      FUN_001bbeb0(param_1,param_2,param_3);
      FUN_001d2160(uVar5);
      uVar6 = FUN_001d4010(*puVar7,param_3,0xffffffffffffffff);
      FUN_001d2150(uVar5,uVar6);
      uVar8 = 1;
    }
  }
  else {
    FUN_001d2160(uVar5);
    uVar6 = FUN_001d4010(*puVar7,param_3,0xffffffffffffffff);
    FUN_001d2150(uVar5,uVar6);
    uVar8 = 1;
  }
  return uVar8;
}

// 0x001bbc70  size 0x15c
undefined4 FUN_001bbc70(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  
  uVar9 = 0;
  uVar7 = 0;
  puVar8 = (undefined2 *)((int)param_1 + (int)param_2 * 0xcc);
  do {
    uVar5 = FUN_001d34f0(puVar8,uVar7 & 0xff);
    psVar3 = (short *)uVar5;
    if ((char)psVar3[1] == '\x1f') {
      sVar1 = *psVar3;
      sVar2 = FUN_001d4010(*puVar8,uVar7 & 0xff,0xffffffffffffffff);
      if (sVar1 != sVar2) {
        iVar4 = (int)param_1 + *psVar3 * 2;
        sVar1 = *(short *)(iVar4 + 0x1420);
        if (sVar1 < 99) {
          *(short *)(iVar4 + 0x1420) = sVar1 + 1;
        }
        FUN_001bbeb0(param_1,param_2,uVar7 & 0xff);
        FUN_001d2160(uVar5);
        uVar6 = FUN_001d4010(*puVar8,uVar7 & 0xff,0xffffffffffffffff);
        FUN_001d2150(uVar5,uVar6);
        uVar9 = 1;
      }
    }
    else {
      FUN_001d2160(uVar5);
      uVar6 = FUN_001d4010(*puVar8,uVar7 & 0xff,0xffffffffffffffff);
      FUN_001d2150(uVar5,uVar6);
      uVar9 = 1;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x15);
  return uVar9;
}

// 0x001bbdd0  size 0xd0
long FUN_001bbdd0(int param_1,undefined8 param_2)

{
  short sVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = -1;
  sVar1 = FUN_001d3970(param_2);
  iVar4 = 0;
  do {
    if (*(int *)(param_1 + (short)iVar4 * 4 + 0x16e8) != 0) {
      sVar2 = FUN_001d3970();
      if (sVar1 == sVar2) {
        lVar3 = FUN_001d3540((short)iVar4);
        if (lVar5 < lVar3) {
          lVar5 = lVar3;
        }
      }
      else if (lVar5 != -1) {
        return lVar5;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x162);
  return lVar5;
}

// 0x001bbeb0  size 0x154
void FUN_001bbeb0(int param_1,int param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  
  puVar3 = (undefined2 *)(param_1 + param_2 * 0xcc);
  FUN_001d4240(&uStack_40,*puVar3,0xffffffffffffffff);
  if (param_3 == '\x05') {
    iVar2 = 0;
    puVar1 = &uStack_40;
    do {
      iVar2 = iVar2 + 3;
      *(undefined4 *)(puVar3 + 0x16) = *(undefined4 *)(puVar1 + 0x18);
      *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(puVar1 + 0x1c);
      *(undefined4 *)(puVar3 + 0x1a) = *(undefined4 *)(puVar1 + 0x20);
      puVar1 = puVar1 + 0xc;
      puVar3 = puVar3 + 6;
    } while (iVar2 < 9);
  }
  else if (param_3 == '\a') {
    *(undefined1 *)(puVar3 + 10) = uStack_40;
    *(undefined1 *)((int)puVar3 + 0x15) = uStack_3f;
    *(undefined1 *)(puVar3 + 0x12) = uStack_30;
    *(undefined1 *)(puVar3 + 0x13) = uStack_2e;
    *(undefined1 *)((int)puVar3 + 0x25) = uStack_2f;
    *(undefined1 *)((int)puVar3 + 0x27) = uStack_2d;
  }
  else if (param_3 == '\b') {
    *(undefined1 *)(puVar3 + 0xb) = uStack_3e;
    *(undefined1 *)((int)puVar3 + 0x17) = uStack_3d;
    *(undefined1 *)(puVar3 + 0xc) = uStack_3c;
    *(undefined1 *)((int)puVar3 + 0x19) = uStack_3b;
    *(undefined1 *)(puVar3 + 0x10) = uStack_34;
    *(undefined1 *)((int)puVar3 + 0x21) = uStack_33;
    *(undefined1 *)(puVar3 + 0xd) = uStack_3a;
    *(undefined1 *)((int)puVar3 + 0x1b) = uStack_39;
    *(undefined1 *)(puVar3 + 0xe) = uStack_38;
    *(undefined1 *)((int)puVar3 + 0x1d) = uStack_37;
    *(undefined1 *)(puVar3 + 0xf) = uStack_36;
    *(undefined1 *)((int)puVar3 + 0x1f) = uStack_35;
  }
  else if (param_3 == '\t') {
    *(undefined1 *)(puVar3 + 0x11) = uStack_32;
  }
  return;
}

