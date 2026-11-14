// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0017c000 - 0x00180000
#include "ghidra_types.h"

// 0x0017c270  size 0x40
void FUN_0017c270(void)

{
  *puRam0036f1d4 = 5;
  FUN_00177aa0();
  puRam0036f1d4[8] = 0x13;
  puRam0036f1d4[8] = 0x10;
  FUN_00180fa0();
  return;
}

// 0x0017c2b0  size 0x754
void FUN_0017c2b0(int param_1,ulong param_2,char param_3,undefined1 param_4,int param_5,int *param_6
                 ,undefined8 param_7,undefined4 *param_8,undefined4 param_9)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined1 *puVar20;
  undefined4 uStack_464;
  undefined4 auStack_45c [6];
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined2 auStack_420 [16];
  undefined2 auStack_400 [42];
  undefined1 uStack_3ac;
  undefined4 uStack_3a8;
  undefined1 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 uStack_398;
  undefined1 uStack_397;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 auStack_38c [6];
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined2 auStack_350 [16];
  undefined2 auStack_330 [42];
  undefined1 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 uStack_2d0;
  undefined1 uStack_2cf;
  char cStack_2ce;
  undefined1 uStack_2cd;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined1 auStack_280 [4];
  undefined4 uStack_27c;
  undefined1 uStack_278;
  undefined1 uStack_277;
  undefined2 uStack_274;
  undefined2 uStack_272;
  undefined4 uStack_270;
  undefined1 auStack_26c [24];
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined2 auStack_230 [16];
  undefined2 auStack_210 [42];
  undefined1 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 auStack_1b0 [2];
  int iStack_1a8;
  int aiStack_e0 [54];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar9 = 0x33;
  piVar11 = aiStack_e0;
  do {
    iVar9 = iVar9 + -1;
    *piVar11 = *param_6;
    param_6 = param_6 + 1;
    piVar11 = piVar11 + 1;
  } while (0 < iVar9);
  puVar12 = auStack_1b0;
  iVar9 = 0x33;
  do {
    iVar9 = iVar9 + -1;
    *puVar12 = *param_8;
    param_8 = param_8 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar9);
  uVar17 = param_2 & 0xff;
  if ((uVar17 == 4) || (uVar17 == 7)) {
    if (param_3 == '\x04') {
      param_3 = '\x05';
    }
    else if (param_3 == '\x01') {
      param_3 = '\x02';
    }
  }
  FUN_00177aa0();
  *(undefined1 *)(iRam0036f1d4 + 8) = 0x13;
  *(undefined1 *)(iRam0036f1d4 + 8) = 0xd;
  if (aiStack_e0[2] != 0) goto switchD_0017c3e8_caseD_0;
  uVar7 = FUN_001d34f0(aiStack_e0,0xf);
  uVar8 = FUN_001d34f0(aiStack_e0,0x10);
  switch(param_3) {
  case '\x01':
  case '\x04':
    if ((uVar17 == 7) || (uVar17 == 4)) {
      FUN_001d2150(uVar7,0x9d);
      FUN_001d2150(uVar8,0x9d);
    }
    else {
      FUN_001d2150(uVar7,0x98);
      FUN_001d2150(uVar8,0x98);
    }
    break;
  case '\x02':
  case '\x05':
    FUN_001d2150(uVar7,0x9d);
    FUN_001d2150(uVar8,0x9d);
    break;
  case '\x03':
    FUN_001d2150(uVar7,0x98);
    FUN_001d2150(uVar8,0x98);
    goto LAB_0017c464;
  }
switchD_0017c3e8_caseD_0:
LAB_0017c464:
  FUN_001d3120(aiStack_e0,auStack_280);
  auStack_280[0] = 1;
  uStack_27c = 0x89;
  uStack_278 = 0;
  FUN_001d2180(auStack_280,param_7);
  uVar6 = uStack_270;
  uVar5 = uStack_277;
  uVar4 = uStack_278;
  uVar2 = uStack_27c;
  uVar3 = auStack_280[0];
  iVar9 = iRam0036f1a8;
  puVar20 = auStack_26c;
  puVar12 = auStack_38c;
  uStack_3a0 = auStack_280[0];
  uStack_39c = uStack_27c;
  iVar10 = 0x17;
  uStack_398 = uStack_278;
  uStack_397 = uStack_277;
  uStack_394 = CONCAT22(uStack_272,uStack_274);
  uStack_390 = uStack_270;
  puVar13 = puVar20;
  do {
    iVar10 = iVar10 + -1;
    *(undefined1 *)puVar12 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  } while (0 < iVar10);
  puVar19 = auStack_230;
  puVar14 = auStack_350;
  iVar10 = 8;
  uStack_374 = uStack_254;
  uStack_370 = uStack_250;
  uStack_36c = uStack_24c;
  uStack_368 = uStack_248;
  uStack_364 = uStack_244;
  uStack_360 = uStack_240;
  uStack_35c = uStack_23c;
  uStack_358 = uStack_238;
  uStack_354 = uStack_234;
  puVar15 = puVar19;
  do {
    iVar10 = iVar10 + -1;
    uVar1 = puVar15[1];
    *puVar14 = *puVar15;
    puVar14[1] = uVar1;
    puVar15 = puVar15 + 2;
    puVar14 = puVar14 + 2;
  } while (0 < iVar10);
  puVar18 = auStack_210;
  puVar14 = auStack_330;
  iVar10 = 0x15;
  puVar15 = puVar18;
  do {
    iVar10 = iVar10 + -1;
    uVar1 = puVar15[1];
    *puVar14 = *puVar15;
    puVar14[1] = uVar1;
    puVar15 = puVar15 + 2;
    puVar14 = puVar14 + 2;
  } while (0 < iVar10);
  puVar16 = auStack_38c;
  iVar10 = 0x17;
  uStack_2dc = uStack_1bc;
  uStack_2d8 = uStack_1b8;
  *(undefined1 *)(iRam0036f1a8 + 0xf0) = uVar3;
  *(undefined4 *)(iVar9 + 0xf4) = uVar2;
  puVar12 = (undefined4 *)(iVar9 + 0x104);
  *(undefined1 *)(iVar9 + 0xf8) = uVar4;
  *(undefined1 *)(iVar9 + 0xf9) = uVar5;
  *(undefined4 *)(iVar9 + 0xfc) = uStack_394;
  *(undefined4 *)(iVar9 + 0x100) = uVar6;
  do {
    iVar10 = iVar10 + -1;
    uVar2 = puVar16[1];
    *puVar12 = *puVar16;
    puVar12[1] = uVar2;
    puVar16 = puVar16 + 2;
    puVar12 = puVar12 + 2;
  } while (0 < iVar10);
  if (iStack_1a8 == 0) {
    uVar7 = FUN_001d34f0(aiStack_e0,0xf);
    uVar8 = FUN_001d34f0(aiStack_e0,0x10);
    switch(param_3) {
    case '\x01':
    case '\x04':
      if ((uVar17 == 7) || (uVar17 == 4)) {
        FUN_001d2150(uVar7,0x9d);
        FUN_001d2150(uVar8,0x9d);
      }
      else {
        FUN_001d2150(uVar7,0x98);
        FUN_001d2150(uVar8,0x98);
      }
      break;
    case '\x02':
    case '\x05':
      FUN_001d2150(uVar7,0x9d);
      FUN_001d2150(uVar8,0x9d);
      break;
    case '\x03':
      FUN_001d2150(uVar7,0x98);
      FUN_001d2150(uVar8,0x98);
      goto LAB_0017c704;
    }
  }
LAB_0017c704:
  FUN_001d3120(auStack_1b0,auStack_280);
  uStack_27c = 0x91;
  auStack_280[0] = 1;
  uStack_278 = 1;
  FUN_001d2180(auStack_280,param_9);
  uVar4 = uStack_278;
  uVar2 = uStack_27c;
  uVar3 = auStack_280[0];
  iVar9 = iRam0036f1a8;
  puVar12 = auStack_45c;
  iVar10 = 0x17;
  uStack_464 = CONCAT22(uStack_272,uStack_274);
  do {
    iVar10 = iVar10 + -1;
    *(undefined1 *)puVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  } while (0 < iVar10);
  puVar15 = auStack_420;
  iVar10 = 8;
  uStack_444 = uStack_254;
  uStack_440 = uStack_250;
  uStack_43c = uStack_24c;
  uStack_438 = uStack_248;
  uStack_434 = uStack_244;
  uStack_430 = uStack_240;
  uStack_42c = uStack_23c;
  uStack_428 = uStack_238;
  uStack_424 = uStack_234;
  do {
    iVar10 = iVar10 + -1;
    uVar1 = puVar19[1];
    *puVar15 = *puVar19;
    puVar15[1] = uVar1;
    puVar19 = puVar19 + 2;
    puVar15 = puVar15 + 2;
  } while (0 < iVar10);
  puVar15 = auStack_400;
  iVar10 = 0x15;
  do {
    iVar10 = iVar10 + -1;
    uVar1 = puVar18[1];
    *puVar15 = *puVar18;
    puVar15[1] = uVar1;
    puVar18 = puVar18 + 2;
    puVar15 = puVar15 + 2;
  } while (0 < iVar10);
  puVar16 = auStack_45c;
  iVar10 = 0x17;
  uStack_3ac = uStack_1bc;
  uStack_3a8 = uStack_1b8;
  *(undefined1 *)(iRam0036f1a8 + 0x1bc) = uVar3;
  *(undefined4 *)(iVar9 + 0x1c0) = uVar2;
  puVar12 = (undefined4 *)(iVar9 + 0x1d0);
  *(undefined1 *)(iVar9 + 0x1c4) = uVar4;
  *(undefined1 *)(iVar9 + 0x1c5) = uStack_277;
  *(undefined4 *)(iVar9 + 0x1c8) = uStack_464;
  *(undefined4 *)(iVar9 + 0x1cc) = uStack_270;
  do {
    iVar10 = iVar10 + -1;
    uVar2 = puVar16[1];
    *puVar12 = *puVar16;
    puVar12[1] = uVar2;
    puVar16 = puVar16 + 2;
    puVar12 = puVar12 + 2;
  } while (0 < iVar10);
  FUN_00177200(2);
  if (param_5 == 0) {
    uVar8 = 9;
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 9;
  }
  FUN_001780d0(&uStack_2d0);
  uStack_2cf = FUN_001bff70(param_2,uVar8,uVar7,&uStack_4,&uStack_8);
  uStack_2d0 = (undefined1)param_2;
  uStack_2c8 = 0;
  uStack_2c4 = uStack_4;
  uStack_2c0 = uStack_8;
  cStack_2ce = param_3;
  uStack_2cd = param_4;
  FUN_001777c0(&uStack_2d0);
  if (param_1 == 0) {
    FUN_00177030(0);
    FUN_00177020(5000000);
    FUN_00176fe0(100);
  }
  else if (param_1 == 1) {
    FUN_00177030();
  }
  else {
    FUN_00177030(2);
  }
  FUN_00180fa0();
  return;
}

// 0x0017ca10  size 0x4b4
void FUN_0017ca10(char param_1,undefined8 param_2,ulong param_3,char param_4,undefined1 param_5,
                 int param_6,undefined4 *param_7,undefined1 param_8)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  short sVar14;
  undefined4 uStack_2c4;
  undefined4 auStack_2bc [6];
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined2 auStack_280 [16];
  undefined2 auStack_260 [42];
  undefined1 uStack_20c;
  undefined4 uStack_208;
  undefined1 uStack_200;
  undefined1 uStack_1ff;
  char cStack_1fe;
  undefined1 uStack_1fd;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined1 auStack_1b0 [4];
  undefined4 uStack_1ac;
  undefined1 uStack_1a8;
  undefined1 uStack_1a7;
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  undefined4 uStack_1a0;
  undefined1 auStack_19c [24];
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined2 auStack_160 [16];
  undefined2 auStack_140 [42];
  undefined1 uStack_ec;
  undefined4 uStack_e8;
  undefined4 auStack_e0 [2];
  int iStack_d8;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar7 = 0x33;
  puVar8 = auStack_e0;
  do {
    iVar7 = iVar7 + -1;
    *puVar8 = *param_7;
    param_7 = param_7 + 1;
    puVar8 = puVar8 + 1;
  } while (0 < iVar7);
  uVar13 = param_3 & 0xff;
  if ((uVar13 == 4) || (uVar13 == 7)) {
    if (param_4 == '\x04') {
      param_4 = '\x05';
    }
    else if (param_4 == '\x01') {
      param_4 = '\x02';
    }
  }
  FUN_00177aa0();
  *(undefined1 *)(iGpffff8ae4 + 8) = 0x13;
  *(char *)(iGpffff8ae4 + 8) = param_1;
  if (iStack_d8 == 0) {
    sVar14 = 0;
    uVar5 = FUN_001d34f0(auStack_e0,0xf);
    uVar6 = FUN_001d34f0(auStack_e0,0x10);
    if (param_1 == '\x0f') {
      sVar14 = 4;
    }
    switch(param_4) {
    case '\0':
      FUN_001d2150(uVar5,sVar14 + 0x8d);
      FUN_001d2150(uVar6,sVar14 + 0x8d);
      break;
    case '\x01':
    case '\x04':
      if ((uVar13 == 7) || (uVar13 == 4)) {
        FUN_001d2150(uVar5,sVar14 + 0x9d);
        FUN_001d2150(uVar6,sVar14 + 0x9d);
      }
      else {
        FUN_001d2150(uVar5,sVar14 + 0x98);
        FUN_001d2150(uVar6,sVar14 + 0x98);
      }
      break;
    case '\x02':
    case '\x05':
      FUN_001d2150(uVar5,sVar14 + 0x9d);
      FUN_001d2150(uVar6,sVar14 + 0x9d);
      break;
    case '\x03':
      FUN_001d2150(uVar5,sVar14 + 0x98);
      FUN_001d2150(uVar6,sVar14 + 0x98);
    }
  }
  FUN_001d3120(auStack_e0,auStack_1b0);
  uStack_1a8 = 0;
  uStack_1ac = 0x89;
  auStack_1b0[0] = param_8;
  FUN_001d2180(auStack_1b0,param_2);
  uVar4 = uStack_1a8;
  uVar2 = uStack_1ac;
  uVar3 = auStack_1b0[0];
  puVar9 = auStack_19c;
  puVar8 = auStack_2bc;
  iVar7 = 0x17;
  uStack_2c4 = CONCAT22(uStack_1a2,uStack_1a4);
  do {
    iVar7 = iVar7 + -1;
    *(undefined1 *)puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  } while (0 < iVar7);
  puVar11 = auStack_160;
  puVar10 = auStack_280;
  iVar7 = 8;
  uStack_298 = uStack_178;
  uStack_294 = uStack_174;
  uStack_290 = uStack_170;
  uStack_2a4 = uStack_184;
  uStack_2a0 = uStack_180;
  uStack_29c = uStack_17c;
  uStack_28c = uStack_16c;
  uStack_288 = uStack_168;
  uStack_284 = uStack_164;
  do {
    iVar7 = iVar7 + -1;
    uVar1 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar1;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 2;
  } while (0 < iVar7);
  puVar11 = auStack_140;
  puVar10 = auStack_260;
  iVar7 = 0x15;
  do {
    iVar7 = iVar7 + -1;
    uVar1 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar1;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 2;
  } while (0 < iVar7);
  puVar12 = auStack_2bc;
  iVar7 = 0x17;
  uStack_20c = uStack_ec;
  uStack_208 = uStack_e8;
  *(undefined1 *)(iGpffff8ab8 + 0xf0) = uVar3;
  *(undefined4 *)(iGpffff8ab8 + 0xf4) = uVar2;
  puVar8 = (undefined4 *)(iGpffff8ab8 + 0x104);
  *(undefined1 *)(iGpffff8ab8 + 0xf8) = uVar4;
  *(undefined1 *)(iGpffff8ab8 + 0xf9) = uStack_1a7;
  *(undefined4 *)(iGpffff8ab8 + 0xfc) = uStack_2c4;
  *(undefined4 *)(iGpffff8ab8 + 0x100) = uStack_1a0;
  do {
    iVar7 = iVar7 + -1;
    uVar2 = puVar12[1];
    *puVar8 = *puVar12;
    puVar8[1] = uVar2;
    puVar12 = puVar12 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar7);
  FUN_00177200(1);
  if (param_6 == 0) {
    uVar6 = 9;
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 9;
  }
  FUN_001780d0(&uStack_200);
  uStack_1ff = FUN_001bff70(param_3,uVar6,uVar5,&uStack_4,&uStack_8);
  uStack_200 = (undefined1)param_3;
  uStack_1f8 = 0;
  uStack_1f4 = uStack_4;
  uStack_1f0 = uStack_8;
  cStack_1fe = param_4;
  uStack_1fd = param_5;
  FUN_001777c0(&uStack_200);
  if (param_1 == '\f') {
    FUN_00177030(1);
  }
  else {
    FUN_00177030(2);
  }
  FUN_00180fa0();
  return;
}

// 0x0017ced0  size 0xb08
void FUN_0017ced0(undefined1 param_1,undefined8 param_2,char param_3,ulong param_4,ulong param_5,
                 undefined1 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 int param_10,int param_11,char param_12)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined1 *puVar18;
  undefined4 uStack_a24;
  undefined4 auStack_a1c [6];
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined2 auStack_9e0 [16];
  undefined2 auStack_9c0 [42];
  undefined1 uStack_96c;
  undefined4 uStack_968;
  undefined1 uStack_960;
  undefined4 uStack_95c;
  undefined1 uStack_958;
  undefined1 uStack_957;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 auStack_94c [6];
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined2 auStack_910 [16];
  undefined2 auStack_8f0 [42];
  undefined1 uStack_89c;
  undefined4 uStack_898;
  undefined1 auStack_890 [4];
  undefined4 uStack_88c;
  undefined1 uStack_888;
  undefined1 uStack_887;
  undefined2 uStack_884;
  undefined2 uStack_882;
  undefined4 uStack_880;
  undefined1 auStack_87c [24];
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined2 auStack_840 [16];
  undefined2 auStack_820 [42];
  undefined1 uStack_7cc;
  undefined4 uStack_7c8;
  undefined2 uStack_7c0;
  undefined2 uStack_7be;
  char cStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined1 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined1 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined2 uStack_788;
  undefined2 uStack_786;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 auStack_77c [23];
  undefined4 auStack_720 [23];
  undefined4 auStack_6c4 [16];
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined2 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined2 uStack_640;
  undefined2 uStack_63e;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined1 auStack_62c [24];
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined2 auStack_5f0 [16];
  undefined2 auStack_5d0 [42];
  undefined1 uStack_57c;
  undefined4 uStack_578;
  undefined2 uStack_570;
  undefined2 uStack_56e;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined1 auStack_55c [24];
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined2 auStack_520 [16];
  undefined2 auStack_500 [42];
  undefined1 uStack_4ac;
  undefined4 uStack_4a8;
  undefined1 uStack_4a0;
  undefined1 uStack_49f;
  undefined1 uStack_49e;
  undefined1 uStack_49d;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined1 uStack_450;
  undefined1 uStack_44f;
  undefined1 uStack_44e;
  undefined1 uStack_44d;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined1 auStack_400 [4];
  undefined4 uStack_3fc;
  undefined1 uStack_3f8;
  undefined1 uStack_3f7;
  undefined2 uStack_3f4;
  undefined2 uStack_3f2;
  undefined4 uStack_3f0;
  undefined1 auStack_3ec [24];
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined2 auStack_3b0 [16];
  undefined2 auStack_390 [42];
  undefined1 uStack_33c;
  undefined4 uStack_338;
  undefined2 uStack_330;
  undefined2 uStack_32e;
  char cStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined1 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined2 uStack_2f8;
  undefined2 uStack_2f6;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 auStack_2ec [23];
  undefined4 auStack_290 [23];
  undefined4 auStack_234 [16];
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined2 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined2 uStack_1b0;
  undefined2 uStack_1ae;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined1 auStack_19c [24];
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined2 auStack_160 [16];
  undefined2 auStack_140 [42];
  undefined1 uStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [4];
  undefined4 uStack_dc;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined4 uStack_d0;
  undefined1 auStack_cc [24];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined2 auStack_90 [16];
  undefined2 auStack_70 [42];
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((param_4 & 0xff) == 4) || ((param_4 & 0xff) == 7)) {
    if ((param_5 & 0xff) == 4) {
      param_5 = 5;
    }
    else if ((param_5 & 0xff) == 1) {
      param_5 = 2;
    }
  }
  FUN_00177aa0();
  *(undefined1 *)(iGpffff8ae4 + 8) = 0x13;
  *(undefined1 *)(iGpffff8ae4 + 8) = param_1;
  if (param_3 == -1) {
    uVar8 = FUN_001c1890(0);
    FUN_001bc410(&uStack_640,uVar8);
    puVar12 = auStack_62c;
    puVar10 = auStack_19c;
    iVar9 = 0x17;
    uStack_1b0 = uStack_640;
    uStack_1a0 = uStack_630;
    uStack_1ae = uStack_63e;
    uStack_1ac = uStack_63c;
    uStack_1a8 = uStack_638;
    uStack_1a4 = uStack_634;
    do {
      iVar9 = iVar9 + -1;
      *puVar10 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (0 < iVar9);
    puVar14 = auStack_5f0;
    puVar13 = auStack_160;
    iVar9 = 8;
    uStack_178 = uStack_608;
    uStack_174 = uStack_604;
    uStack_170 = uStack_600;
    uStack_184 = uStack_614;
    uStack_180 = uStack_610;
    uStack_17c = uStack_60c;
    uStack_16c = uStack_5fc;
    uStack_168 = uStack_5f8;
    uStack_164 = uStack_5f4;
    do {
      iVar9 = iVar9 + -1;
      uVar7 = puVar14[1];
      *puVar13 = *puVar14;
      puVar13[1] = uVar7;
      puVar14 = puVar14 + 2;
      puVar13 = puVar13 + 2;
    } while (0 < iVar9);
    puVar14 = auStack_5d0;
    puVar13 = auStack_140;
    iVar9 = 0x15;
    do {
      iVar9 = iVar9 + -1;
      uVar7 = puVar14[1];
      *puVar13 = *puVar14;
      puVar13[1] = uVar7;
      puVar14 = puVar14 + 2;
      puVar13 = puVar13 + 2;
    } while (0 < iVar9);
    uStack_ec = uStack_57c;
    uStack_e8 = uStack_578;
  }
  else {
    uVar8 = FUN_001c1890(0);
    uVar8 = FUN_001b8ec0(uVar8,param_3);
    FUN_001d2e00(&uStack_570,uVar8,0);
    puVar12 = auStack_55c;
    puVar10 = auStack_19c;
    iVar9 = 0x17;
    uStack_1b0 = uStack_570;
    uStack_1a0 = uStack_560;
    uStack_1ae = uStack_56e;
    uStack_1ac = uStack_56c;
    uStack_1a8 = uStack_568;
    uStack_1a4 = uStack_564;
    do {
      iVar9 = iVar9 + -1;
      *puVar10 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (0 < iVar9);
    puVar14 = auStack_520;
    puVar13 = auStack_160;
    iVar9 = 8;
    uStack_178 = uStack_538;
    uStack_174 = uStack_534;
    uStack_170 = uStack_530;
    uStack_184 = uStack_544;
    uStack_180 = uStack_540;
    uStack_17c = uStack_53c;
    uStack_16c = uStack_52c;
    uStack_168 = uStack_528;
    uStack_164 = uStack_524;
    do {
      iVar9 = iVar9 + -1;
      uVar7 = puVar14[1];
      *puVar13 = *puVar14;
      puVar13[1] = uVar7;
      puVar14 = puVar14 + 2;
      puVar13 = puVar13 + 2;
    } while (0 < iVar9);
    puVar14 = auStack_500;
    puVar13 = auStack_140;
    iVar9 = 0x15;
    do {
      iVar9 = iVar9 + -1;
      uVar7 = puVar14[1];
      *puVar13 = *puVar14;
      puVar13[1] = uVar7;
      puVar14 = puVar14 + 2;
      puVar13 = puVar13 + 2;
    } while (0 < iVar9);
    uStack_ec = uStack_4ac;
    uStack_e8 = uStack_4a8;
    FUN_001770f0(param_3);
  }
  FUN_001d3120(&uStack_1b0,auStack_e0);
  auStack_e0[0] = 1;
  uStack_dc = 0x89;
  uStack_d8 = 0;
  FUN_001d2180(auStack_e0,param_2);
  uVar4 = uStack_d8;
  uVar2 = uStack_dc;
  uVar3 = auStack_e0[0];
  puVar10 = auStack_cc;
  puVar11 = auStack_94c;
  iVar9 = 0x17;
  uStack_95c = uStack_dc;
  uStack_958 = uStack_d8;
  uStack_960 = auStack_e0[0];
  uStack_957 = uStack_d7;
  uStack_954 = CONCAT22(uStack_d2,uStack_d4);
  uStack_950 = uStack_d0;
  do {
    iVar9 = iVar9 + -1;
    *(undefined1 *)puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  } while (0 < iVar9);
  puVar14 = auStack_90;
  puVar13 = auStack_910;
  iVar9 = 8;
  uStack_928 = uStack_a8;
  uStack_924 = uStack_a4;
  uStack_920 = uStack_a0;
  uStack_934 = uStack_b4;
  uStack_930 = uStack_b0;
  uStack_92c = uStack_ac;
  uStack_91c = uStack_9c;
  uStack_918 = uStack_98;
  uStack_914 = uStack_94;
  do {
    iVar9 = iVar9 + -1;
    uVar7 = puVar14[1];
    *puVar13 = *puVar14;
    puVar13[1] = uVar7;
    puVar14 = puVar14 + 2;
    puVar13 = puVar13 + 2;
  } while (0 < iVar9);
  puVar14 = auStack_70;
  puVar13 = auStack_8f0;
  iVar9 = 0x15;
  do {
    iVar9 = iVar9 + -1;
    uVar7 = puVar14[1];
    *puVar13 = *puVar14;
    puVar13[1] = uVar7;
    puVar14 = puVar14 + 2;
    puVar13 = puVar13 + 2;
  } while (0 < iVar9);
  puVar15 = auStack_94c;
  iVar9 = 0x17;
  uStack_89c = uStack_1c;
  uStack_898 = uStack_18;
  *(undefined1 *)(iGpffff8ab8 + 0xf0) = uVar3;
  *(undefined4 *)(iGpffff8ab8 + 0xf4) = uVar2;
  puVar11 = (undefined4 *)(iGpffff8ab8 + 0x104);
  *(undefined1 *)(iGpffff8ab8 + 0xf8) = uVar4;
  *(undefined1 *)(iGpffff8ab8 + 0xf9) = uStack_d7;
  *(undefined4 *)(iGpffff8ab8 + 0xfc) = uStack_954;
  *(undefined4 *)(iGpffff8ab8 + 0x100) = uStack_d0;
  do {
    iVar9 = iVar9 + -1;
    uVar2 = puVar15[1];
    *puVar11 = *puVar15;
    puVar11[1] = uVar2;
    puVar15 = puVar15 + 2;
    puVar11 = puVar11 + 2;
  } while (0 < iVar9);
  FUN_00177200(1);
  if (param_11 == -1) {
    if (param_12 != '\b') {
      FUN_00177030(param_12);
    }
    FUN_001780d0(&uStack_4a0);
    uStack_49f = FUN_001bff70(param_4,param_8,param_9,&uStack_c,&uStack_10);
    uStack_494 = uStack_c;
    uStack_490 = uStack_10;
    uStack_4a0 = (char)param_4;
    uStack_49e = (char)param_5;
    uStack_49d = param_6;
    uStack_498 = param_7;
    FUN_001777c0(&uStack_4a0);
  }
  else {
    if (param_10 == 0) {
      FUN_001b55b0(&uStack_7c0,(short)param_11);
      puVar15 = auStack_77c;
      puVar11 = auStack_2ec;
      iVar9 = 0x17;
      uStack_320 = uStack_7b0;
      uStack_318 = uStack_7a8;
      uStack_314 = uStack_7a4;
      uStack_328 = uStack_7b8;
      cStack_32c = cStack_7bc;
      uStack_324 = uStack_7b4;
      uStack_308 = uStack_798;
      uStack_330 = uStack_7c0;
      uStack_32e = uStack_7be;
      uStack_31c = uStack_7ac;
      uStack_310 = uStack_7a0;
      uStack_30c = uStack_79c;
      uStack_2f4 = uStack_784;
      uStack_304 = uStack_794;
      uStack_300 = uStack_790;
      uStack_2fc = uStack_78c;
      uStack_2f8 = uStack_788;
      uStack_2f6 = uStack_786;
      uStack_2f0 = uStack_780;
      do {
        iVar9 = iVar9 + -1;
        *puVar11 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar11 = puVar11 + 1;
      } while (0 < iVar9);
      puVar15 = auStack_720;
      puVar11 = auStack_290;
      iVar9 = 0x17;
      do {
        iVar9 = iVar9 + -1;
        *puVar11 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar11 = puVar11 + 1;
      } while (0 < iVar9);
      puVar15 = auStack_6c4;
      puVar11 = auStack_234;
      iVar9 = 8;
      do {
        iVar9 = iVar9 + -1;
        uVar2 = puVar15[1];
        *puVar11 = *puVar15;
        puVar11[1] = uVar2;
        puVar15 = puVar15 + 2;
        puVar11 = puVar11 + 2;
      } while (0 < iVar9);
      uStack_1f4 = uStack_684;
      uStack_1f0 = uStack_680;
      uStack_1ec = uStack_67c;
      uStack_1e8 = uStack_678;
      uStack_1e4 = uStack_674;
      uStack_1c4 = uStack_654;
      uStack_1e0 = uStack_670;
      uStack_1c0 = uStack_650;
      uStack_1bc = uStack_64c;
      uStack_1c8 = uStack_658;
      uStack_1dc = uStack_66c;
      uStack_1d8 = uStack_668;
      uStack_1d4 = uStack_664;
      uStack_1d0 = uStack_660;
      uStack_1b8 = uStack_648;
      uStack_1cc = uStack_65c;
      if (cStack_7bc == '\v') {
        uVar7 = FUN_001b4970(&uStack_330);
        FUN_001b7e20(auStack_890,(char)uVar7,param_5);
        puVar18 = auStack_3ec;
        auStack_400[0] = auStack_890[0];
        uStack_3fc = uStack_88c;
        puVar12 = auStack_87c;
        uStack_3f8 = uStack_888;
        iVar9 = 0x17;
        uStack_3f7 = uStack_887;
        uStack_3f4 = uStack_884;
        uStack_3f2 = uStack_882;
        uStack_3f0 = uStack_880;
        puVar10 = puVar18;
        do {
          iVar9 = iVar9 + -1;
          *puVar10 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar10 = puVar10 + 1;
        } while (0 < iVar9);
        puVar17 = auStack_3b0;
        puVar14 = auStack_840;
        iVar9 = 8;
        uStack_3d4 = uStack_864;
        uStack_3d0 = uStack_860;
        uStack_3cc = uStack_85c;
        uStack_3c8 = uStack_858;
        uStack_3c4 = uStack_854;
        uStack_3c0 = uStack_850;
        uStack_3bc = uStack_84c;
        uStack_3b8 = uStack_848;
        uStack_3b4 = uStack_844;
        puVar13 = puVar17;
        do {
          iVar9 = iVar9 + -1;
          uVar1 = puVar14[1];
          *puVar13 = *puVar14;
          puVar13[1] = uVar1;
          puVar14 = puVar14 + 2;
          puVar13 = puVar13 + 2;
        } while (0 < iVar9);
        puVar16 = auStack_390;
        puVar14 = auStack_820;
        iVar9 = 0x15;
        puVar13 = puVar16;
        do {
          iVar9 = iVar9 + -1;
          uVar1 = puVar14[1];
          *puVar13 = *puVar14;
          puVar13[1] = uVar1;
          puVar14 = puVar14 + 2;
          puVar13 = puVar13 + 2;
        } while (0 < iVar9);
        uStack_3f8 = 0;
        auStack_400[0] = 1;
        uStack_3fc = 0x89;
        uStack_338 = uStack_7c8;
        uStack_33c = uStack_7cc;
        FUN_001d2180(auStack_400,param_2);
        uVar6 = uStack_3f0;
        uVar5 = uStack_3f7;
        uVar4 = uStack_3f8;
        uVar2 = uStack_3fc;
        uVar3 = auStack_400[0];
        puVar11 = auStack_a1c;
        iVar9 = 0x17;
        uStack_a24 = CONCAT22(uStack_3f2,uStack_3f4);
        do {
          iVar9 = iVar9 + -1;
          *(undefined1 *)puVar11 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        } while (0 < iVar9);
        puVar13 = auStack_9e0;
        iVar9 = 8;
        uStack_a04 = uStack_3d4;
        uStack_a00 = uStack_3d0;
        uStack_9fc = uStack_3cc;
        uStack_9f8 = uStack_3c8;
        uStack_9f4 = uStack_3c4;
        uStack_9f0 = uStack_3c0;
        uStack_9ec = uStack_3bc;
        uStack_9e8 = uStack_3b8;
        uStack_9e4 = uStack_3b4;
        do {
          iVar9 = iVar9 + -1;
          uVar1 = puVar17[1];
          *puVar13 = *puVar17;
          puVar13[1] = uVar1;
          puVar17 = puVar17 + 2;
          puVar13 = puVar13 + 2;
        } while (0 < iVar9);
        puVar13 = auStack_9c0;
        iVar9 = 0x15;
        do {
          iVar9 = iVar9 + -1;
          uVar1 = puVar16[1];
          *puVar13 = *puVar16;
          puVar13[1] = uVar1;
          puVar16 = puVar16 + 2;
          puVar13 = puVar13 + 2;
        } while (0 < iVar9);
        puVar15 = auStack_a1c;
        iVar9 = 0x17;
        uStack_96c = uStack_33c;
        uStack_968 = uStack_338;
        *(undefined1 *)(iGpffff8ab8 + 0xf0) = uVar3;
        *(undefined4 *)(iGpffff8ab8 + 0xf4) = uVar2;
        *(undefined1 *)(iGpffff8ab8 + 0xf8) = uVar4;
        puVar11 = (undefined4 *)(iGpffff8ab8 + 0x104);
        *(undefined1 *)(iGpffff8ab8 + 0xf9) = uVar5;
        *(undefined4 *)(iGpffff8ab8 + 0xfc) = uStack_a24;
        *(undefined4 *)(iGpffff8ab8 + 0x100) = uVar6;
        do {
          iVar9 = iVar9 + -1;
          uVar2 = puVar15[1];
          *puVar11 = *puVar15;
          puVar11[1] = uVar2;
          puVar15 = puVar15 + 2;
          puVar11 = puVar11 + 2;
        } while (0 < iVar9);
        FUN_001770f0(uVar7);
      }
      FUN_00178010(iGpffff8ab8 + 0x48);
      *(undefined4 *)(iGpffff8ab8 + 0x48) = 1;
      *(int *)(iGpffff8ab8 + 0x4c) = param_11;
      *(undefined4 *)(iGpffff8ab8 + 200) = 0xffffffff;
      *(undefined4 *)(iGpffff8ab8 + 0xcc) = 0xffffffff;
      *(undefined4 *)(iGpffff8ab8 + 0xd0) = 0xffffffff;
      *(undefined4 *)(iGpffff8ab8 + 0xd4) = 0xffffffff;
      *(undefined4 *)(iGpffff8ab8 + 0xd8) = 0xffffffff;
      *(undefined4 *)(iGpffff8ab8 + 0xdc) = 0xffffffff;
      *(int *)(iGpffff8ab8 + 200) = param_11;
    }
    else {
      FUN_0017ece0(param_11);
    }
    FUN_001780d0(&uStack_450);
    uStack_44f = FUN_001bff70(param_4,param_8,param_9,&uStack_4,&uStack_8);
    uStack_444 = uStack_4;
    uStack_440 = uStack_8;
    uStack_450 = (char)param_4;
    uStack_44e = (char)param_5;
    uStack_44d = param_6;
    uStack_448 = param_7;
    FUN_001777c0(&uStack_450);
  }
  FUN_00180fa0();
  return;
}

// 0x0017d9e0  size 0x19c
void FUN_0017d9e0(long param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  if (param_1 == 0) {
    *param_3 = param_2 / 0xe10;
    *param_4 = (param_2 / 0x3c) % 0x3c;
    *param_5 = ((param_2 % 0x3c) * 1000) / 0x3c;
  }
  else {
    *param_3 = (param_2 / 1000) / 0xe10;
    *param_4 = ((param_2 / 1000) / 0x3c) % 0x3c;
    *param_5 = ((param_2 % 60000) * 1000) / 60000;
  }
  if (99 < *param_3) {
    *param_3 = 99;
    *param_4 = 0x3b;
    *param_5 = 999;
  }
  return;
}

// 0x0017db80  size 0x370
int FUN_0017db80(void)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  short sVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  
  pbVar8 = (byte *)FUN_00177070(0);
  iVar9 = FUN_001dc240(0);
  uVar15 = FUN_001dc220(0);
  iVar17 = iGpffff8af0;
  bVar3 = *pbVar8;
  uVar10 = FUN_001777a0();
  bVar5 = FUN_001777b0();
  uVar6 = FUN_00177790();
  uVar7 = FUN_00177780();
  sVar4 = *(short *)(pbVar8 + 0xc);
  iVar11 = FUN_001dccc0(uVar15);
  iVar12 = FUN_001e0530(iVar9);
  if (bVar5 == 8) {
    return -1;
  }
  iVar13 = FUN_001dc200(0);
  piVar16 = (int *)(iVar17 + (uint)bVar3 * 0x2fd0 + (uVar10 & 0xff) * 0x17e8 + (uint)bVar5 * 0x2a8);
  iVar17 = 0;
  piVar14 = piVar16;
  while( true ) {
    iVar18 = iVar17;
    uVar10 = (uint)(*(int *)(iVar13 + 0xc) != 0);
    if (*piVar14 == -1) {
      piVar14 = piVar16 + iVar18 * 5;
      *piVar14 = (int)sVar4;
      *(undefined1 *)(piVar14 + 1) = uVar6;
      *(undefined1 *)((int)piVar14 + 5) = uVar7;
      piVar14[2] = uVar10;
      piVar14[3] = iVar11;
      piVar14[4] = iVar12;
      goto LAB_0017dd10;
    }
    if (piVar14[4] < iVar12) break;
    iVar17 = iVar18 + 1;
    piVar14 = piVar14 + 5;
    iVar18 = -1;
    if (0x13 < iVar17) goto LAB_0017dd10;
  }
  iVar17 = 0x13;
  if (iVar18 < 0x13) {
    piVar14 = piVar16 + 0x5f;
    do {
      iVar17 = iVar17 + -1;
      *piVar14 = piVar14[-5];
      *(char *)(piVar14 + 1) = (char)piVar14[-4];
      *(undefined1 *)((int)piVar14 + 5) = *(undefined1 *)((int)piVar14 + -0xf);
      piVar14[2] = piVar14[-3];
      piVar14[3] = piVar14[-2];
      piVar14[4] = piVar14[-1];
      piVar14 = piVar14 + -5;
    } while (iVar18 < iVar17);
  }
  piVar14 = piVar16 + iVar18 * 5;
  *piVar14 = (int)sVar4;
  *(undefined1 *)(piVar14 + 1) = uVar6;
  *(undefined1 *)((int)piVar14 + 5) = uVar7;
  piVar14[2] = uVar10;
  piVar14[3] = iVar11;
  piVar14[4] = iVar12;
LAB_0017dd10:
  if (iVar18 == 0) {
    piVar14 = piVar16;
    iVar17 = 0;
    iVar11 = iVar9;
    do {
      iVar12 = iVar17;
      iVar17 = iVar12 + 8;
      piVar14[100] = *(int *)(iVar11 + 0x100) + *(int *)(iVar11 + 0x104);
      piVar14[0x65] = *(int *)(iVar11 + 0x11c) + *(int *)(iVar11 + 0x120);
      piVar14[0x66] = *(int *)(iVar11 + 0x138) + *(int *)(iVar11 + 0x13c);
      piVar14[0x67] = *(int *)(iVar11 + 0x154) + *(int *)(iVar11 + 0x158);
      piVar14[0x68] = *(int *)(iVar11 + 0x170) + *(int *)(iVar11 + 0x174);
      piVar14[0x69] = *(int *)(iVar11 + 0x18c) + *(int *)(iVar11 + 400);
      piVar14[0x6a] = *(int *)(iVar11 + 0x1a8) + *(int *)(iVar11 + 0x1ac);
      piVar1 = (int *)(iVar11 + 0x1c4);
      piVar2 = (int *)(iVar11 + 0x1c8);
      iVar11 = iVar11 + 0xe0;
      piVar14[0x6b] = *piVar1 + *piVar2;
      piVar14 = piVar14 + 8;
    } while (iVar17 < 0x3e);
    iVar9 = iVar17 * 0x1c + iVar9;
    piVar16[iVar12 + 0x6c] = *(int *)(iVar9 + 0x100) + *(int *)(iVar9 + 0x104);
    piVar16[iVar12 + 0x6d] = *(int *)(iVar9 + 0x11c) + *(int *)(iVar9 + 0x120);
    piVar16[iVar12 + 0x6e] = *(int *)(iVar9 + 0x138) + *(int *)(iVar9 + 0x13c);
    piVar16[iVar12 + 0x6f] = *(int *)(iVar9 + 0x154) + *(int *)(iVar9 + 0x158);
    piVar16[iVar12 + 0x70] = *(int *)(iVar9 + 0x170) + *(int *)(iVar9 + 0x174);
    piVar16[iVar12 + 0x71] = *(int *)(iVar9 + 0x18c) + *(int *)(iVar9 + 400);
  }
  return iVar18;
}

// 0x0017def0  size 0x24c
int FUN_0017def0(void)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  
  iVar14 = -1;
  pbVar6 = (byte *)FUN_00177070(0);
  iVar7 = FUN_001dc220(0);
  bVar1 = *pbVar6;
  iVar15 = iGpffff8af0 + 0x5fa0;
  uVar8 = FUN_001777a0();
  bVar3 = FUN_001777b0();
  uVar4 = FUN_00177790();
  uVar5 = FUN_00177780();
  sVar2 = *(short *)(pbVar6 + 0xc);
  iVar9 = FUN_001dccc0(iVar7);
  if (bVar3 == 8) {
    iVar14 = -1;
  }
  else if (iVar9 != 0) {
    iVar10 = FUN_001dc200(0);
    iVar12 = 0;
    piVar11 = (int *)(iVar15 + (uint)bVar1 * 0x1950 + (uVar8 & 0xff) * 0xca8 + (uint)bVar3 * 0x168);
    piVar13 = piVar11;
    while( true ) {
      uVar8 = (uint)(*(int *)(iVar10 + 0xc) != 0);
      if (*piVar13 == -1) {
        piVar13 = piVar11 + iVar12 * 4;
        *piVar13 = (int)sVar2;
        *(undefined1 *)(piVar13 + 1) = uVar4;
        *(undefined1 *)((int)piVar13 + 5) = uVar5;
        piVar13[2] = uVar8;
        piVar13[3] = iVar9;
        iVar14 = iVar12;
        goto LAB_0017e048;
      }
      if (iVar9 < piVar13[3]) break;
      iVar12 = iVar12 + 1;
      piVar13 = piVar13 + 4;
      if (0x13 < iVar12) goto LAB_0017e048;
    }
    iVar14 = 0x13;
    if (iVar12 < 0x13) {
      piVar13 = piVar11 + 0x4c;
      do {
        iVar14 = iVar14 + -1;
        *piVar13 = piVar13[-4];
        *(char *)(piVar13 + 1) = (char)piVar13[-3];
        *(undefined1 *)((int)piVar13 + 5) = *(undefined1 *)((int)piVar13 + -0xb);
        piVar13[2] = piVar13[-2];
        piVar13[3] = piVar13[-1];
        piVar13 = piVar13 + -4;
      } while (iVar12 < iVar14);
    }
    piVar13 = piVar11 + iVar12 * 4;
    *piVar13 = (int)sVar2;
    *(undefined1 *)(piVar13 + 1) = uVar4;
    *(undefined1 *)((int)piVar13 + 5) = uVar5;
    piVar13[2] = uVar8;
    piVar13[3] = iVar9;
    iVar14 = iVar12;
LAB_0017e048:
    if (iVar14 == 0) {
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 5;
        piVar11[0x50] = *(int *)(iVar7 + 4);
        piVar11[0x51] = *(int *)(iVar7 + 0x10);
        piVar11[0x52] = *(int *)(iVar7 + 0x1c);
        piVar11[0x53] = *(int *)(iVar7 + 0x28);
        piVar11[0x54] = *(int *)(iVar7 + 0x34);
        iVar7 = iVar7 + 0x3c;
        piVar11 = piVar11 + 5;
      } while (iVar9 < 10);
    }
  }
  return iVar14;
}

// 0x0017e140  size 0x58
int FUN_0017e140(int param_1,uint param_2,uint param_3,uint param_4)

{
  return param_1 + (param_2 & 0xff) * 0x2fd0 + (param_3 & 0xff) * 0x17e8 + (param_4 & 0xff) * 0x2a8;
}

// 0x0017e1a0  size 0x40
int FUN_0017e1a0(int param_1,uint param_2,uint param_3,uint param_4)

{
  return param_1 + (param_2 & 0xff) * 0x1950 + (param_3 & 0xff) * 0xca8 + (param_4 & 0xff) * 0x168;
}

// 0x0017e1e0  size 0xc
int FUN_0017e1e0(void)

{
  return iRam0036f1e0 + 0x5fa0;
}

// 0x0017e1f0  size 0x8
undefined4 FUN_0017e1f0(void)

{
  return uRam0036f1e0;
}

// 0x0017e200  size 0x8
undefined4 FUN_0017e200(void)

{
  return uRam0036f1e0;
}

// 0x0017e210  size 0x28
void FUN_0017e210(void)

{
  if (iRam0036f1e0 != 0) {
    FUN_00100290();
  }
  return;
}

// 0x0017e240  size 0x1e0
void FUN_0017e240(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  puVar1 = (undefined4 *)FUN_00100680(0x9240,param_1);
  iVar9 = 0;
  puRam0036f1e0 = puVar1;
  do {
    iVar8 = 0;
    puVar4 = puVar1;
    do {
      iVar7 = 0;
      puVar3 = puVar4;
      do {
        iVar5 = 0;
        puVar2 = puVar3;
        do {
          *puVar2 = 0xffffffff;
          puVar2[3] = 0;
          iVar5 = iVar5 + 5;
          puVar2[4] = 0;
          puVar2[5] = 0xffffffff;
          puVar2[8] = 0;
          puVar2[9] = 0;
          puVar2[10] = 0xffffffff;
          puVar2[0xd] = 0;
          puVar2[0xe] = 0;
          puVar2[0xf] = 0xffffffff;
          puVar2[0x12] = 0;
          puVar2[0x13] = 0;
          puVar2[0x14] = 0xffffffff;
          puVar2[0x17] = 0;
          puVar2[0x18] = 0;
          puVar2 = puVar2 + 0x19;
        } while (iVar5 < 0x14);
        puVar2 = puVar3;
        iVar5 = 0;
        do {
          iVar6 = iVar5;
          puVar2[100] = 0;
          puVar2[0x65] = 0;
          puVar2[0x66] = 0;
          puVar2[0x67] = 0;
          puVar2[0x68] = 0;
          puVar2[0x69] = 0;
          puVar2[0x6a] = 0;
          puVar2[0x6b] = 0;
          puVar2 = puVar2 + 8;
          iVar5 = iVar6 + 8;
        } while (iVar6 + 8 < 0x3e);
        iVar7 = iVar7 + 1;
        puVar3[iVar6 + 0x6c] = 0;
        puVar3[iVar6 + 0x6d] = 0;
        puVar3[iVar6 + 0x6e] = 0;
        puVar3[iVar6 + 0x6f] = 0;
        puVar3[iVar6 + 0x70] = 0;
        puVar3[iVar6 + 0x71] = 0;
        puVar3 = puVar3 + 0xaa;
      } while (iVar7 < 9);
      iVar8 = iVar8 + 1;
      puVar4 = puVar4 + 0x5fa;
    } while (iVar8 < 2);
    iVar9 = iVar9 + 1;
    puVar1 = puVar1 + 0xbf4;
  } while (iVar9 < 2);
  iVar9 = 0;
  puVar1 = puRam0036f1e0 + 0x17e8;
  do {
    iVar8 = 0;
    puVar4 = puVar1;
    do {
      iVar7 = 0;
      puVar3 = puVar4;
      do {
        iVar5 = 0;
        puVar2 = puVar3;
        do {
          *puVar2 = 0xffffffff;
          puVar2[3] = 0;
          iVar5 = iVar5 + 5;
          puVar2[4] = 0xffffffff;
          puVar2[7] = 0;
          puVar2[8] = 0xffffffff;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0xffffffff;
          puVar2[0xf] = 0;
          puVar2[0x10] = 0xffffffff;
          puVar2[0x13] = 0;
          puVar2 = puVar2 + 0x14;
        } while (iVar5 < 0x14);
        iVar5 = 0;
        puVar2 = puVar3;
        do {
          puVar2[0x50] = 0;
          puVar2[0x51] = 0;
          iVar5 = iVar5 + 5;
          puVar2[0x52] = 0;
          puVar2[0x53] = 0;
          puVar2[0x54] = 0;
          puVar2 = puVar2 + 5;
        } while (iVar5 < 10);
        iVar7 = iVar7 + 1;
        puVar3 = puVar3 + 0x5a;
      } while (iVar7 < 9);
      iVar8 = iVar8 + 1;
      puVar4 = puVar4 + 0x32a;
    } while (iVar8 < 2);
    iVar9 = iVar9 + 1;
    puVar1 = puVar1 + 0x654;
  } while (iVar9 < 2);
  return;
}

// 0x0017e420  size 0xc
undefined4 FUN_0017e420(void)

{
  return *(undefined4 *)(iRam0036f1a8 + 0x3ac8);
}

// 0x0017e430  size 0xac
undefined4 FUN_0017e430(ulong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 10;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 4) == 0) {
      if ((param_1 & 8) == 0) {
        if ((param_1 & 0x10) == 0) {
          if ((param_1 & 0x20) == 0) {
            if ((param_1 & 0x40) == 0) {
              if ((param_1 & 0x80) == 0) {
                if ((param_1 & 0x100) != 0) {
                  uVar1 = 7;
                }
              }
              else {
                uVar1 = 6;
              }
            }
            else {
              uVar1 = 5;
            }
          }
          else {
            uVar1 = 4;
          }
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x0017e4e0  size 0x70
undefined4 FUN_0017e4e0(undefined1 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  switch(param_1) {
  case 0:
    break;
  case 1:
    uVar1 = 4;
    break;
  case 2:
    uVar1 = 8;
    break;
  case 3:
    uVar1 = 0x10;
    break;
  case 4:
    uVar1 = 0x20;
    break;
  case 5:
    uVar1 = 0x40;
    break;
  case 6:
    uVar1 = 0x80;
    break;
  case 7:
    uVar1 = 0x100;
  }
  return uVar1;
}

// 0x0017e550  size 0x124
ulong FUN_0017e550(char param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_1 == '\n') || (param_1 == '\n')) {
    if (pcRam0036f1d4[8] == '\x13') {
      param_1 = pcRam0036f1d4[0x10];
    }
    else {
      param_1 = FUN_001777b0();
    }
  }
  if (*pcRam0036f1d4 == '\x01') {
    uVar2 = FUN_001c1890(0);
    uVar1 = FUN_001c16d0(uVar2);
  }
  else if (pcRam0036f1d4[8] == '\x13') {
    uVar1 = (ulong)pcRam0036f1d4[0x12];
  }
  else {
    uVar1 = FUN_00177790();
  }
  if ((uVar1 & 0xff) == 1) {
    if ((param_1 == '\x04') || (param_1 == '\a')) {
      uVar1 = 2;
    }
  }
  else if (((uVar1 & 0xff) == 4) && ((param_1 == '\x04' || (param_1 == '\a')))) {
    uVar1 = 5;
  }
  return uVar1;
}

// 0x0017e680  size 0x60
char FUN_0017e680(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*pcRam0036f1d4 == '\x01') {
    uVar2 = FUN_001c1890(0);
    cVar1 = FUN_001c16d0(uVar2);
  }
  else if (pcRam0036f1d4[8] == '\x13') {
    cVar1 = pcRam0036f1d4[0x12];
  }
  else {
    cVar1 = FUN_00177790();
  }
  return cVar1;
}

// 0x0017e6e0  size 0x38
undefined1 FUN_0017e6e0(void)

{
  undefined1 uVar1;
  
  if (*(char *)(iRam0036f1d4 + 8) == '\x13') {
    uVar1 = *(undefined1 *)(iRam0036f1d4 + 0x11);
  }
  else {
    uVar1 = FUN_001777a0();
  }
  return uVar1;
}

// 0x0017e720  size 0x38
undefined1 FUN_0017e720(void)

{
  undefined1 uVar1;
  
  if (*(char *)(iRam0036f1d4 + 8) == '\x13') {
    uVar1 = *(undefined1 *)(iRam0036f1d4 + 0x10);
  }
  else {
    uVar1 = FUN_001777b0();
  }
  return uVar1;
}

// 0x0017e760  size 0x60
char FUN_0017e760(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*pcRam0036f1d4 == '\x01') {
    uVar2 = FUN_001c1890(0);
    cVar1 = FUN_001c16e0(uVar2);
  }
  else if (pcRam0036f1d4[8] == '\x13') {
    cVar1 = pcRam0036f1d4[0x13];
  }
  else {
    cVar1 = FUN_00177780();
  }
  return cVar1;
}

// 0x0017e7c0  size 0x18
void FUN_0017e7c0(undefined1 *param_1)

{
  *param_1 = 9;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0x0017e7e0  size 0x1c
void FUN_0017e7e0(undefined1 *param_1)

{
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 0x0017e800  size 0xc
void FUN_0017e800(undefined1 param_1)

{
  *(undefined1 *)(iGpffff8ae4 + 0x14) = param_1;
  return;
}

// 0x0017e810  size 0xc
void FUN_0017e810(undefined1 param_1)

{
  *(undefined1 *)(iGpffff8ae4 + 0x13) = param_1;
  return;
}

// 0x0017e820  size 0xc
void FUN_0017e820(undefined1 param_1)

{
  *(undefined1 *)(iGpffff8ae4 + 0x12) = param_1;
  return;
}

// 0x0017e830  size 0xc
void FUN_0017e830(undefined1 param_1)

{
  *(undefined1 *)(iGpffff8ae4 + 0x10) = param_1;
  return;
}

// 0x0017e840  size 0xc
undefined1 FUN_0017e840(void)

{
  return *(undefined1 *)(iGpffff8ae4 + 0x13);
}

// 0x0017e850  size 0xc
undefined1 FUN_0017e850(void)

{
  return *(undefined1 *)(iGpffff8ae4 + 0x10);
}

// 0x0017e860  size 0xc
void FUN_0017e860(undefined1 param_1)

{
  *(undefined1 *)(iGpffff8ae4 + 9) = param_1;
  return;
}

// 0x0017e870  size 0xc
undefined1 FUN_0017e870(void)

{
  return *(undefined1 *)(iGpffff8ae4 + 9);
}

// 0x0017e880  size 0xc
void FUN_0017e880(undefined1 param_1)

{
  *(undefined1 *)(iGpffff8ae4 + 8) = param_1;
  return;
}

// 0x0017e890  size 0xc
undefined1 FUN_0017e890(void)

{
  return *(undefined1 *)(iGpffff8ae4 + 8);
}

// 0x0017e8a0  size 0xc
void FUN_0017e8a0(undefined4 param_1)

{
  *(undefined4 *)(iGpffff8ae4 + 4) = param_1;
  return;
}

// 0x0017e8b0  size 0xc
undefined4 FUN_0017e8b0(void)

{
  return *(undefined4 *)(iGpffff8ae4 + 4);
}

// 0x0017e8c0  size 0xc
void FUN_0017e8c0(undefined1 param_1)

{
  *puGpffff8ae4 = param_1;
  return;
}

// 0x0017e8d0  size 0xc
undefined1 FUN_0017e8d0(void)

{
  return *puGpffff8ae4;
}

// 0x0017e8e0  size 0x1f4
undefined4 FUN_0017e8e0(int param_1,undefined4 *param_2,int *param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar2 = *(int **)(iGpffff8ab8 + 0x3acc);
  if (param_1 < *piVar2) {
    if (param_1 < 0) {
      iStack_40 = piVar2[4];
      iStack_3c = piVar2[5];
      iStack_38 = piVar2[6];
      iStack_34 = piVar2[7];
      iStack_30 = piVar2[8];
      iStack_2c = piVar2[9];
      iStack_28 = piVar2[10];
      iStack_24 = piVar2[0xb];
      iStack_20 = piVar2[0xc];
      iStack_1c = piVar2[0xd];
      iStack_18 = piVar2[0xe];
      iStack_14 = piVar2[0xf];
      iStack_10 = piVar2[0x10];
      iStack_c = piVar2[0x11];
      iStack_8 = piVar2[0x12];
      iStack_4 = piVar2[0x13];
    }
    else {
      iStack_40 = piVar2[param_1 * 0x10 + 4];
      iStack_3c = piVar2[param_1 * 0x10 + 5];
      iStack_38 = piVar2[param_1 * 0x10 + 6];
      iStack_34 = piVar2[param_1 * 0x10 + 7];
      iStack_30 = piVar2[param_1 * 0x10 + 8];
      iStack_2c = piVar2[param_1 * 0x10 + 9];
      iStack_28 = piVar2[param_1 * 0x10 + 10];
      iStack_24 = piVar2[param_1 * 0x10 + 0xb];
      iStack_20 = piVar2[param_1 * 0x10 + 0xc];
      iStack_1c = piVar2[param_1 * 0x10 + 0xd];
      iStack_18 = piVar2[param_1 * 0x10 + 0xe];
      iStack_14 = piVar2[param_1 * 0x10 + 0xf];
      iStack_10 = piVar2[param_1 * 0x10 + 0x10];
      iStack_c = piVar2[param_1 * 0x10 + 0x11];
      iStack_8 = piVar2[param_1 * 0x10 + 0x12];
      iStack_4 = piVar2[param_1 * 0x10 + 0x13];
    }
    uVar3 = 1;
  }
  else {
    iVar1 = *piVar2 + -1;
    uVar3 = 0;
    iStack_40 = piVar2[iVar1 * 0x10 + 4];
    iStack_3c = piVar2[iVar1 * 0x10 + 5];
    iStack_38 = piVar2[iVar1 * 0x10 + 6];
    iStack_34 = piVar2[iVar1 * 0x10 + 7];
    iStack_30 = piVar2[iVar1 * 0x10 + 8];
    iStack_2c = piVar2[iVar1 * 0x10 + 9];
    iStack_28 = piVar2[iVar1 * 0x10 + 10];
    iStack_24 = piVar2[iVar1 * 0x10 + 0xb];
    iStack_20 = piVar2[iVar1 * 0x10 + 0xc];
    iStack_1c = piVar2[iVar1 * 0x10 + 0xd];
    iStack_18 = piVar2[iVar1 * 0x10 + 0xe];
    iStack_14 = piVar2[iVar1 * 0x10 + 0xf];
    iStack_10 = piVar2[iVar1 * 0x10 + 0x10];
    iStack_c = piVar2[iVar1 * 0x10 + 0x11];
    iStack_8 = piVar2[iVar1 * 0x10 + 0x12];
    iStack_4 = piVar2[iVar1 * 0x10 + 0x13];
  }
  FUN_001630c0(&uStack_80);
  iStack_90 = iStack_40;
  iStack_8c = iStack_3c;
  iStack_88 = iStack_38;
  FUN_00162f70(&uStack_80,&iStack_90);
  FUN_00162fe0(&uStack_80,&iStack_30);
  *param_2 = uStack_80;
  param_2[1] = uStack_7c;
  param_2[2] = uStack_78;
  param_2[3] = uStack_74;
  param_2[4] = uStack_70;
  param_2[5] = uStack_6c;
  param_2[6] = uStack_68;
  param_2[7] = uStack_64;
  param_2[8] = uStack_60;
  param_2[9] = uStack_5c;
  param_2[10] = uStack_58;
  param_2[0xb] = uStack_54;
  param_2[0xc] = uStack_50;
  param_2[0xd] = uStack_4c;
  param_2[0xe] = uStack_48;
  param_2[0xf] = uStack_44;
  *param_3 = iStack_10;
  param_3[1] = iStack_c;
  param_3[2] = iStack_8;
  param_3[3] = iStack_4;
  if (param_4 != 0) {
    piVar2 = (int *)param_4;
    *piVar2 = iStack_20;
    piVar2[1] = iStack_1c;
    piVar2[2] = iStack_18;
    piVar2[3] = iStack_14;
  }
  return uVar3;
}

// 0x0017eae0  size 0x17c
void FUN_0017eae0(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
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
  undefined4 uStack_38;
  undefined4 uStack_34;
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
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  uStack_30 = param_2[4];
  uStack_2c = param_2[5];
  uStack_28 = param_2[6];
  uStack_24 = param_2[7];
  uStack_20 = param_2[8];
  uStack_1c = param_2[9];
  uStack_18 = param_2[10];
  uStack_14 = param_2[0xb];
  uStack_10 = param_2[0xc];
  uStack_c = param_2[0xd];
  uStack_8 = param_2[0xe];
  uStack_4 = param_2[0xf];
  uStack_50 = *param_3;
  uStack_4c = param_3[1];
  uStack_48 = param_3[2];
  uStack_44 = param_3[3];
  if (param_1 < 0x30c1) {
    FUN_00163340(&uStack_60,&uStack_40);
    iVar1 = (int)param_1 * 0x40;
    *(undefined4 *)(iVar1 + *(int *)(iGpffff8ab8 + 0x3ad0) + 0x10) = uStack_10;
    *(undefined4 *)(iVar1 + *(int *)(iGpffff8ab8 + 0x3ad0) + 0x14) = uStack_c;
    *(undefined4 *)(iVar1 + *(int *)(iGpffff8ab8 + 0x3ad0) + 0x18) = uStack_8;
    *(undefined4 *)(iVar1 + *(int *)(iGpffff8ab8 + 0x3ad0) + 0x1c) = uStack_4;
    iVar2 = *(int *)(iGpffff8ab8 + 0x3ad0) + iVar1;
    *(undefined4 *)(iVar2 + 0x20) = uStack_60;
    *(undefined4 *)(iVar2 + 0x24) = uStack_5c;
    *(undefined4 *)(iVar2 + 0x28) = uStack_58;
    *(undefined4 *)(iVar2 + 0x2c) = uStack_54;
    iVar2 = *(int *)(iGpffff8ab8 + 0x3ad0) + iVar1;
    *(undefined4 *)(iVar2 + 0x40) = uStack_50;
    *(undefined4 *)(iVar2 + 0x44) = uStack_4c;
    *(undefined4 *)(iVar2 + 0x48) = uStack_48;
    *(undefined4 *)(iVar2 + 0x4c) = uStack_44;
    *(undefined4 *)(iVar1 + *(int *)(iGpffff8ab8 + 0x3ad0) + 0x30) = *param_4;
    *(undefined4 *)(iVar1 + *(int *)(iGpffff8ab8 + 0x3ad0) + 0x34) = param_4[1];
    *(undefined4 *)(iVar1 + *(int *)(iGpffff8ab8 + 0x3ad0) + 0x38) = param_4[2];
    *(undefined4 *)(iVar1 + *(int *)(iGpffff8ab8 + 0x3ad0) + 0x3c) = param_4[3];
    **(int **)(iGpffff8ab8 + 0x3ad0) = (int)param_1 + 1;
  }
  return;
}

// 0x0017ec60  size 0x7c
void FUN_0017ec60(undefined4 param_1)

{
  FUN_00178010(iGpffff8ab8 + 0x48);
  *(undefined4 *)(iGpffff8ab8 + 0x48) = 1;
  *(undefined4 *)(iGpffff8ab8 + 0x4c) = param_1;
  *(undefined4 *)(iGpffff8ab8 + 200) = 0xffffffff;
  *(undefined4 *)(iGpffff8ab8 + 0xcc) = 0xffffffff;
  *(undefined4 *)(iGpffff8ab8 + 0xd0) = 0xffffffff;
  *(undefined4 *)(iGpffff8ab8 + 0xd4) = 0xffffffff;
  *(undefined4 *)(iGpffff8ab8 + 0xd8) = 0xffffffff;
  *(undefined4 *)(iGpffff8ab8 + 0xdc) = 0xffffffff;
  *(undefined4 *)(iGpffff8ab8 + 200) = param_1;
  return;
}

// 0x0017ece0  size 0xbd0
/* WARNING: Removing unreachable block (ram,0x0017f750) */

void FUN_0017ece0(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined2 *puVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  short sVar12;
  undefined4 *puVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  short *psVar21;
  int iVar22;
  int iStack_7b0;
  undefined2 uStack_790;
  short sStack_78e;
  undefined1 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
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
  int iStack_654;
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
  undefined2 uStack_60e;
  undefined1 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
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
  short sStack_48e;
  undefined1 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
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
  int iStack_354;
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
  undefined4 uStack_2fc;
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
  undefined1 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
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
  int iStack_54;
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
  short asStack_28 [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  short asStack_14 [10];
  
  FUN_00178010(iGpffff8ab8 + 0x48);
  iVar20 = 0;
  iStack_7b0 = -1;
  asStack_14[2] = -1;
  iVar22 = 0;
  asStack_14[3] = -1;
  asStack_14[4] = -1;
  asStack_14[5] = -1;
  asStack_14[6] = -1;
  asStack_14[7] = -1;
  do {
    sVar12 = (short)iVar22;
    FUN_001b55b0(&uStack_490,sVar12);
    puVar13 = auStack_44c;
    uStack_190 = uStack_490;
    uStack_178 = uStack_478;
    puVar11 = auStack_14c;
    sStack_18e = sStack_48e;
    uStack_174 = uStack_474;
    uStack_18c = uStack_48c;
    iVar9 = 0x17;
    uStack_188 = uStack_488;
    uStack_184 = uStack_484;
    uStack_180 = uStack_480;
    uStack_17c = uStack_47c;
    uStack_170 = uStack_470;
    uStack_16c = uStack_46c;
    uStack_168 = uStack_468;
    uStack_164 = uStack_464;
    uStack_160 = uStack_460;
    uStack_15c = uStack_45c;
    uStack_158 = uStack_458;
    uStack_156 = uStack_456;
    uStack_154 = uStack_454;
    uStack_150 = uStack_450;
    do {
      iVar9 = iVar9 + -1;
      *puVar11 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (0 < iVar9);
    iVar9 = 0x17;
    puVar13 = auStack_3f0;
    puVar11 = auStack_f0;
    do {
      iVar9 = iVar9 + -1;
      *puVar11 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (0 < iVar9);
    iVar9 = 8;
    puVar13 = auStack_394;
    puVar11 = auStack_94;
    do {
      iVar9 = iVar9 + -1;
      uVar1 = puVar13[1];
      *puVar11 = *puVar13;
      puVar11[1] = uVar1;
      puVar13 = puVar13 + 2;
      puVar11 = puVar11 + 2;
    } while (0 < iVar9);
    uStack_48 = uStack_348;
    uStack_44 = uStack_344;
    uStack_40 = uStack_340;
    uStack_3c = uStack_33c;
    uStack_50 = uStack_350;
    uStack_4c = uStack_34c;
    uStack_38 = uStack_338;
    uStack_34 = uStack_334;
    uStack_30 = uStack_330;
    iStack_54 = iStack_354;
    asStack_28[0] = uStack_328;
    uStack_24 = uStack_324;
    uStack_20 = uStack_320;
    uStack_1c = uStack_31c;
    uStack_18 = uStack_318;
    uStack_2c = uStack_32c;
    if (sStack_48e == -1) break;
    sVar7 = FUN_001b4900(&uStack_190);
    if ((long)param_1 == (long)sVar7) {
      cVar6 = FUN_001b4930(&uStack_190);
      if (cVar6 != '\x01') {
        iVar9 = 0;
        psVar21 = asStack_14 + 2;
LAB_0017f3b8:
        if (*psVar21 == -1) {
          iVar20 = iVar20 + 1;
          asStack_14[iVar9 + 2] = sVar12;
        }
        else {
          FUN_001b55b0(&uStack_610);
          puVar13 = auStack_5cc;
          uStack_310 = uStack_610;
          uStack_2f8 = uStack_5f8;
          puVar11 = auStack_2cc;
          uStack_30e = uStack_60e;
          uStack_2f4 = uStack_5f4;
          uStack_30c = uStack_60c;
          iVar10 = 0x17;
          uStack_308 = uStack_608;
          uStack_304 = uStack_604;
          uStack_300 = uStack_600;
          uStack_2fc = uStack_5fc;
          uStack_2f0 = uStack_5f0;
          uStack_2ec = uStack_5ec;
          uStack_2e8 = uStack_5e8;
          uStack_2e4 = uStack_5e4;
          uStack_2e0 = uStack_5e0;
          uStack_2dc = uStack_5dc;
          uStack_2d8 = uStack_5d8;
          uStack_2d6 = uStack_5d6;
          uStack_2d4 = uStack_5d4;
          uStack_2d0 = uStack_5d0;
          do {
            iVar10 = iVar10 + -1;
            *puVar11 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar11 = puVar11 + 1;
          } while (0 < iVar10);
          iVar10 = 0x17;
          puVar13 = auStack_570;
          puVar11 = auStack_270;
          do {
            iVar10 = iVar10 + -1;
            *puVar11 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar11 = puVar11 + 1;
          } while (0 < iVar10);
          iVar10 = 8;
          puVar13 = auStack_514;
          puVar11 = auStack_214;
          do {
            iVar10 = iVar10 + -1;
            uVar1 = puVar13[1];
            *puVar11 = *puVar13;
            puVar11[1] = uVar1;
            puVar13 = puVar13 + 2;
            puVar11 = puVar11 + 2;
          } while (0 < iVar10);
          uStack_1c8 = uStack_4c8;
          uStack_1c4 = uStack_4c4;
          uStack_1c0 = uStack_4c0;
          uStack_1bc = uStack_4bc;
          uStack_1d0 = uStack_4d0;
          uStack_1cc = uStack_4cc;
          uStack_1b8 = uStack_4b8;
          uStack_1b4 = uStack_4b4;
          uStack_1b0 = uStack_4b0;
          uStack_1ac = uStack_4ac;
          uStack_1d4 = uStack_4d4;
          uStack_1a8 = uStack_4a8;
          uStack_1a4 = uStack_4a4;
          uStack_1a0 = uStack_4a0;
          uStack_19c = uStack_49c;
          uStack_198 = uStack_498;
          sVar7 = FUN_001b4990(&uStack_310);
          sVar8 = FUN_001b4990(&uStack_190);
          if (sVar7 <= sVar8) goto code_r0x0017f66c;
          iVar10 = 5;
          if (iVar9 < 5) {
            if (8 < (int)(5U - iVar9)) {
              bVar3 = false;
              bVar2 = false;
              bVar4 = false;
              if ((iVar9 < 6) && (-0x80000000 < iVar9)) {
                bVar4 = true;
              }
              if ((bVar4) && (iVar9 != -0x80000000)) {
                bVar2 = true;
              }
              if (bVar2) {
                bVar2 = true;
                if (((-iVar9 & 0x80000000U) == 0) && ((5U - iVar9 & 0x80000000) != 0)) {
                  bVar2 = false;
                }
                if (bVar2) {
                  bVar3 = true;
                }
              }
              if (bVar3) {
                psVar19 = asStack_14 + 7;
                psVar18 = asStack_14 + 6;
                psVar17 = asStack_14 + 5;
                psVar16 = asStack_14 + 4;
                psVar15 = asStack_14 + 3;
                psVar14 = asStack_14 + 1;
                psVar21 = asStack_14;
                puVar5 = (undefined2 *)register0x000001d0;
                do {
                  iVar10 = iVar10 + -8;
                  *psVar19 = psVar19[-1];
                  psVar19 = psVar19 + -8;
                  *psVar18 = psVar18[-1];
                  psVar18 = psVar18 + -8;
                  *psVar17 = psVar17[-1];
                  psVar17 = psVar17 + -8;
                  *psVar16 = psVar16[-1];
                  psVar16 = psVar16 + -8;
                  *psVar15 = psVar15[-1];
                  psVar15 = psVar15 + -8;
                  puVar5[-8] = puVar5[-9];
                  *psVar14 = psVar14[-1];
                  psVar14 = psVar14 + -8;
                  *psVar21 = psVar21[-1];
                  psVar21 = psVar21 + -8;
                  puVar5 = puVar5 + -8;
                } while (iVar9 + 8 < iVar10);
              }
            }
            if (iVar9 < iVar10) {
              psVar21 = asStack_14 + iVar10 + 2;
              do {
                iVar10 = iVar10 + -1;
                *psVar21 = psVar21[-1];
                psVar21 = psVar21 + -1;
              } while (iVar9 < iVar10);
            }
          }
          iVar20 = iVar20 + 1;
          asStack_14[iVar9 + 2] = sVar12;
        }
        goto LAB_0017f008;
      }
      iStack_7b0 = iVar22;
    }
LAB_0017f008:
    iVar22 = iVar22 + 1;
  } while (iVar22 < 500);
  if (iStack_7b0 == -1) {
    *(int *)(iGpffff8ab8 + 0x48) = iVar20;
  }
  else {
    *(int *)(iGpffff8ab8 + 0x48) = iVar20 + 1;
    asStack_14[iVar20 + 2] = (short)iStack_7b0;
  }
  iVar9 = 0;
  iVar22 = 0;
  iVar20 = 0;
  *(int *)(iGpffff8ab8 + 200) = (int)asStack_14[2];
  *(int *)(iGpffff8ab8 + 0xcc) = (int)asStack_14[3];
  *(int *)(iGpffff8ab8 + 0xd0) = (int)asStack_14[4];
  *(int *)(iGpffff8ab8 + 0xd4) = (int)asStack_14[5];
  *(int *)(iGpffff8ab8 + 0xd8) = (int)asStack_14[6];
  *(int *)(iGpffff8ab8 + 0xdc) = (int)asStack_14[7];
  do {
    if (asStack_14[iVar9 + 2] == -1) break;
    FUN_001b55b0(&uStack_790);
    puVar13 = auStack_74c;
    uStack_190 = uStack_790;
    uStack_178 = uStack_778;
    puVar11 = auStack_14c;
    sStack_18e = sStack_78e;
    uStack_174 = uStack_774;
    iVar10 = 0x17;
    uStack_18c = uStack_78c;
    uStack_188 = uStack_788;
    uStack_184 = uStack_784;
    uStack_180 = uStack_780;
    uStack_17c = uStack_77c;
    uStack_170 = uStack_770;
    uStack_16c = uStack_76c;
    uStack_168 = uStack_768;
    uStack_164 = uStack_764;
    uStack_160 = uStack_760;
    uStack_15c = uStack_75c;
    uStack_158 = uStack_758;
    uStack_156 = uStack_756;
    uStack_154 = uStack_754;
    uStack_150 = uStack_750;
    do {
      iVar10 = iVar10 + -1;
      *puVar11 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (0 < iVar10);
    iVar10 = 0x17;
    puVar13 = auStack_6f0;
    puVar11 = auStack_f0;
    do {
      iVar10 = iVar10 + -1;
      *puVar11 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (0 < iVar10);
    iVar10 = 8;
    puVar13 = auStack_694;
    puVar11 = auStack_94;
    do {
      iVar10 = iVar10 + -1;
      uVar1 = puVar13[1];
      *puVar11 = *puVar13;
      puVar11[1] = uVar1;
      puVar13 = puVar13 + 2;
      puVar11 = puVar11 + 2;
    } while (0 < iVar10);
    uStack_48 = uStack_648;
    uStack_44 = uStack_644;
    uStack_40 = uStack_640;
    uStack_3c = uStack_63c;
    uStack_50 = uStack_650;
    uStack_4c = uStack_64c;
    uStack_38 = uStack_638;
    uStack_34 = uStack_634;
    uStack_30 = uStack_630;
    uStack_2c = uStack_62c;
    iStack_54 = iStack_654;
    asStack_28[0] = uStack_628;
    uStack_24 = uStack_624;
    uStack_20 = uStack_620;
    uStack_1c = uStack_61c;
    uStack_18 = uStack_618;
    *(int *)(iGpffff8ab8 + iVar20 + 0x4c) = (int)asStack_14[iVar9 + 2];
    iVar10 = iVar9;
    if (iStack_654 != 0) {
      iVar10 = iVar9 + 1;
      *(int *)(iGpffff8ab8 + iVar20 + 0x50) = (int)asStack_14[iVar9 + 3];
    }
    iVar22 = iVar22 + 1;
    iVar9 = iVar10 + 1;
    iVar20 = iVar20 + 0x14;
  } while (iVar22 < 6);
  if ((*pcGpffff8ae4 == '\x01') && (pcGpffff8ae4[8] != '\x06')) {
    *(undefined4 *)(iGpffff8ab8 + 0xc4) = 0;
  }
  return;
code_r0x0017f66c:
  iVar9 = iVar9 + 1;
  psVar21 = psVar21 + 1;
  if (5 < iVar9) goto LAB_0017f008;
  goto LAB_0017f3b8;
}

// 0x0017f8c0  size 0x464
void FUN_0017f8c0(void)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_400 [12];
  undefined2 uStack_3f4;
  undefined1 auStack_280 [8];
  undefined2 uStack_278;
  undefined1 auStack_100 [208];
  char acStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined4 uStack_18;
  char cStack_10;
  short asStack_4 [2];
  
  uVar4 = FUN_00176fa0();
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_00176fa0();
    if ((uVar4 & 2) == 0) {
      FUN_00176fa0();
    }
    else {
      FUN_00176ef0(acStack_30);
      cStack_10 = acStack_30[0];
      if (acStack_30[0] == '\x06') {
        uVar6 = FUN_001c1890(0);
        FUN_001bc9b0(uVar6,uStack_28,1);
      }
      else if (acStack_30[0] == '\x03') {
        uVar6 = FUN_001c1890(0);
        FUN_001bc9b0(uVar6,uStack_28,1);
      }
      else if ((acStack_30[0] == '\x02') || (acStack_30[0] == '\x01')) {
        uVar6 = FUN_001c1890(0);
        FUN_001b9460(uVar6,uStack_2c);
        uVar6 = FUN_001c1890(0);
        FUN_001b6800(uVar6,8,0xffffffffffffffff);
      }
      else if (acStack_30[0] == '\0') {
        uVar6 = FUN_001c1890(0);
        FUN_001bb190(uVar6,(short)uStack_2c);
        uVar6 = FUN_001c1890(0);
        FUN_001b6800(uVar6,2,0xffffffffffffffff);
      }
    }
  }
  else {
    FUN_00176e90(auStack_20);
    cStack_10 = auStack_20[0];
    uVar7 = (undefined2)iStack_1c;
    switch(auStack_20[0]) {
    case 0:
      FUN_001d2150(asStack_4,uVar7);
      uVar6 = FUN_001c1890(0);
      FUN_001bb300(uVar6,asStack_4[0]);
      sVar2 = FUN_001d3970(asStack_4[0]);
      lVar8 = (long)sVar2;
      if (lVar8 <= asStack_4[0]) {
        do {
          uVar6 = FUN_001c1890(0);
          FUN_001ba220(uVar6,(short)lVar8);
          lVar8 = (long)((int)lVar8 + 1);
        } while (lVar8 <= asStack_4[0]);
      }
      uVar6 = FUN_001c1890(0);
      FUN_001b6800(uVar6,1,0xffffffffffffffff);
      break;
    case 1:
      FUN_001b55b0(auStack_280,uVar7);
      FUN_001b55b0(auStack_400,uVar7);
      uVar6 = FUN_001c1890(0);
      uVar6 = FUN_001c1820(uVar6);
      FUN_001d3020(auStack_100,uStack_278,uStack_3f4,1,uVar6);
      uVar6 = FUN_001c1890(0);
      FUN_001b9a70(uVar6,auStack_100);
      uVar6 = FUN_001c1890(0);
      FUN_001b6800(uVar6,4,0xffffffffffffffff);
      break;
    case 2:
    case 4:
      break;
    case 3:
      uVar6 = FUN_001c1890(0);
      FUN_001bca50(uVar6,uStack_18,1);
      if (iStack_1c == -1) {
        return;
      }
      uVar6 = FUN_001c1890(0);
      iVar9 = FUN_00177a50();
      sVar2 = FUN_001c0890(uVar6,*(undefined4 *)(iVar9 + 0x80));
      if (1 < sVar2) {
        return;
      }
      piVar3 = (int *)FUN_00209240(iStack_1c);
      iVar9 = 0;
      do {
        iVar1 = *piVar3;
        if (-1 < iVar1) {
          uVar6 = FUN_001c1890(0);
          FUN_001c1670(uVar6,iVar1);
        }
        iVar9 = iVar9 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar9 < 3);
      break;
    case 5:
      uVar6 = FUN_001c1890(0);
      uVar5 = FUN_001c1890(0);
      uVar5 = FUN_001c1800(uVar5);
      FUN_001c16a0(uVar6,iStack_1c,uVar5);
      break;
    case 6:
      piVar3 = (int *)FUN_00209240(iStack_1c);
      iVar9 = 0;
      do {
        iVar1 = *piVar3;
        if (-1 < iVar1) {
          uVar6 = FUN_001c1890(0);
          FUN_001c1670(uVar6,iVar1);
        }
        iVar9 = iVar9 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar9 < 3);
      break;
    case 7:
      uVar6 = FUN_001c1890(0);
      FUN_001c1620(uVar6,iStack_1c);
      uVar6 = FUN_001c1890(0);
      FUN_001bca50(uVar6,uStack_18,1);
      break;
    case 8:
      uVar6 = FUN_001c1890(0);
      uVar5 = FUN_001c1890(0);
      uVar5 = FUN_001c1820(uVar5);
      FUN_001c1690(uVar6,iStack_1c,uVar5);
      break;
    default:
      goto switchD_0017f91c_default;
    }
  }
switchD_0017f91c_default:
  return;
}

// 0x0017fd30  size 0x40
void FUN_0017fd30(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uStack_10;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uStack_10 = (undefined1)*param_1;
  *(undefined1 *)(iGpffff8ab8 + 0x3d0) = uStack_10;
  *(undefined4 *)(iGpffff8ab8 + 0x3d4) = uVar1;
  *(undefined4 *)(iGpffff8ab8 + 0x3d8) = uVar2;
  return;
}

// 0x0017fd70  size 0x3c4
void FUN_0017fd70(undefined4 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_4b0 [20];
  undefined4 auStack_460 [20];
  undefined4 auStack_410 [96];
  undefined4 auStack_290 [20];
  undefined4 auStack_240 [20];
  undefined4 auStack_1f0 [8];
  char cStack_1d0;
  char acStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  FUN_001b55b0(auStack_410);
  puVar8 = auStack_410;
  puVar7 = auStack_1f0;
  iVar6 = 0x5f;
  do {
    iVar6 = iVar6 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar6);
  uStack_c = 0xffffffff;
  uStack_10 = CONCAT31(uStack_10._1_3_,9);
  uStack_8 = 0;
  if (cStack_1d0 != '\t') {
    cVar1 = FUN_001b4930(auStack_1f0);
    if (cVar1 == '\x01') {
      uVar5 = FUN_001c1890(0);
      uVar2 = FUN_001b4900(auStack_1f0);
      sVar3 = FUN_001c0850(uVar5,uVar2);
      if (sVar3 == 0) {
        uVar2 = FUN_001b4900(auStack_1f0);
        FUN_001b0ea0(auStack_460,uVar2);
        puVar8 = auStack_460;
        puVar7 = auStack_240;
        iVar6 = 0x11;
        do {
          iVar6 = iVar6 + -1;
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar6);
        FUN_001bc4d0(auStack_20,auStack_240);
        uStack_10 = CONCAT31(uStack_10._1_3_,auStack_20[0]);
        uStack_c = uStack_1c;
        uStack_8 = uStack_18;
      }
      else {
        uVar5 = FUN_001c1890(0);
        sVar3 = FUN_001c0890(uVar5,param_2);
        if (sVar3 == 1) {
          FUN_001b48e0(auStack_30,auStack_1f0);
          uStack_10 = CONCAT31(uStack_10._1_3_,auStack_30[0]);
          uStack_c = uStack_2c;
          uStack_8 = uStack_28;
        }
      }
    }
    else {
      lVar4 = FUN_001b4940(auStack_1f0);
      if (lVar4 == 0) {
        uVar5 = FUN_001c1890(0);
        sVar3 = FUN_001c0890(uVar5,param_2);
        if (sVar3 == 0) {
          FUN_001b48e0(auStack_60,auStack_1f0);
          uStack_10 = CONCAT31(uStack_10._1_3_,auStack_60[0]);
          uStack_c = uStack_5c;
          uStack_8 = uStack_58;
        }
        else {
          uVar5 = FUN_001c1890(0);
          sVar3 = FUN_001c0890(uVar5,param_2);
          if (0 < sVar3) {
            FUN_001b48e0(acStack_70,auStack_1f0);
            uStack_10 = CONCAT31(uStack_10._1_3_,acStack_70[0]);
            uStack_8 = uStack_68;
            uStack_c = uStack_6c;
            if (acStack_70[0] != '\x03') {
              uStack_8 = 0;
              uStack_10 = CONCAT31(uStack_10._1_3_,9);
              uStack_c = 0xffffffff;
            }
          }
        }
      }
      else {
        uVar5 = FUN_001c1890(0);
        uVar2 = FUN_001b4900(auStack_1f0);
        sVar3 = FUN_001c0850(uVar5,uVar2);
        if (sVar3 == 0) {
          uVar2 = FUN_001b4900(auStack_1f0);
          FUN_001b0ea0(auStack_4b0,uVar2);
          puVar8 = auStack_4b0;
          puVar7 = auStack_290;
          iVar6 = 0x11;
          do {
            iVar6 = iVar6 + -1;
            *puVar7 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + 1;
          } while (0 < iVar6);
          FUN_001bc4d0(auStack_50,auStack_290);
          uStack_10 = CONCAT31(uStack_10._1_3_,auStack_50[0]);
          uStack_c = uStack_4c;
          uStack_8 = uStack_48;
        }
        else {
          uVar5 = FUN_001c1890(0);
          sVar3 = FUN_001c0890(uVar5,param_2);
          if (sVar3 == 1) {
            FUN_001b48e0(auStack_40,auStack_1f0);
            uStack_10 = CONCAT31(uStack_10._1_3_,auStack_40[0]);
            uStack_c = uStack_3c;
            uStack_8 = uStack_38;
            uVar5 = FUN_001c1890(0);
            sVar3 = FUN_001c0890(uVar5,param_2);
            if ((1 < sVar3) && ((char)uStack_10 != '\x03')) {
              uStack_8 = 0;
              uStack_10 = CONCAT31(uStack_10._1_3_,9);
              uStack_c = 0xffffffff;
            }
          }
        }
      }
    }
  }
  *param_1 = uStack_10;
  param_1[1] = uStack_c;
  param_1[2] = uStack_8;
  return;
}

