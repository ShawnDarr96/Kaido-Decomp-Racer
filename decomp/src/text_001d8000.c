// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001d8000 - 0x001dc000
#include "ghidra_types.h"

// 0x001d80f0  size 0x4fc
undefined4
Ai_SteerToLine(undefined8 param_1,undefined4 *param_2,int param_3,long param_4,uint *param_5,
              ulong param_6)

{
  uint uVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_1a0;
  undefined2 uStack_19c;
  undefined4 uStack_198;
  undefined2 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int aiStack_100 [4];
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 uStack_b0;
  undefined2 uStack_ae;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  float fStack_4c;
  uint uStack_48;
  uint uStack_44;
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
  float fStack_8;
  undefined4 uStack_4;
  
  uVar4 = 0;
  uStack_50 = *param_5;
  uStack_10 = param_2[0xc];
  uStack_c = param_2[0xd];
  fVar2 = (float)param_2[0xe];
  uStack_4 = param_2[0xf];
  uStack_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  fStack_4c = (float)param_5[1];
  uStack_30 = param_2[4];
  uStack_2c = param_2[5];
  uStack_28 = param_2[6];
  uStack_24 = param_2[7];
  uStack_48 = param_5[2];
  uStack_20 = param_2[8];
  uStack_1c = param_2[9];
  uStack_18 = param_2[10];
  uStack_14 = param_2[0xb];
  uStack_44 = param_5[3];
  uVar1 = uStack_50 & 0xff;
  uStack_84 = 0x3f800000;
  uStack_64 = 0x3f800000;
  uStack_d4 = 0x3f800000;
  uStack_c4 = 0x3f800000;
  puVar3 = (undefined4 *)param_1;
  uVar8 = puVar3[0x10];
  aiStack_100[0] = param_3;
  fStack_8 = fVar2;
  if (((uVar1 == 0) || (uVar1 == 2)) || ((uVar1 == 3 && ((param_6 & 0x80) != 0)))) {
    fVar7 = 2.5;
    fVar9 = *(float *)(uStack_44 + 0xb8);
    fVar6 = *(float *)(uStack_44 + 0xb0);
    fVar10 = *(float *)(param_3 + 0xb8) - fVar9;
    if ((param_6 & 0x80) != 0) {
      fVar7 = 3.5;
    }
    fVar5 = (float)fabsf(fVar10);
    if (fVar5 < fVar7) {
      uVar4 = 1;
      if (0.0 < fVar10) {
        if ((fVar2 <= -70.0) || (0.0 <= fVar2)) {
          fVar2 = fVar9 + fVar7;
        }
        else {
          fVar2 = fVar9 - fVar7;
          if (fVar2 < 1.0) {
            fVar2 = fVar9 + fVar7;
          }
        }
      }
      else if ((70.0 <= fVar2) || (fVar2 <= 0.0)) {
        fVar2 = fVar9 - fVar7;
      }
      else {
        fVar2 = fVar9 + fVar7;
        if (fVar6 - 1.0 < fVar2) {
          fVar2 = fVar9 - fVar7;
        }
      }
      if (1.0 <= fVar2) {
        if (fVar6 - 1.0 < fVar2) {
          fVar2 = fVar6 - 1.0;
        }
      }
      else {
        fVar2 = 1.0;
      }
      if (param_4 != 0) {
        fVar2 = fVar6 - fVar2;
      }
      uStack_b0 = param_4 != 0;
      uStack_f0 = *puVar3;
      uStack_ec = *(undefined2 *)(puVar3 + 1);
      uStack_e0 = puVar3[4];
      uStack_dc = puVar3[5];
      uStack_d8 = puVar3[6];
      uStack_d4 = puVar3[7];
      uStack_d0 = puVar3[0xc];
      uStack_cc = puVar3[0xd];
      uStack_c8 = puVar3[0xe];
      uStack_c4 = puVar3[0xf];
      uStack_c0 = puVar3[8];
      uStack_bc = puVar3[9];
      uStack_b8 = puVar3[10];
      uStack_ae = 3;
      Ai_ComputeTargetSpeed(fVar2,0,&uStack_150,aiStack_100,1,0,0);
      uStack_94 = uStack_144;
      uStack_80 = uStack_130;
      uStack_90 = uStack_140;
      uStack_8c = uStack_13c;
      uStack_88 = uStack_138;
      uStack_84 = uStack_134;
      uStack_7c = uStack_12c;
      uStack_78 = uStack_128;
      uStack_a0 = uStack_150;
      uStack_9c = uStack_14c;
      uStack_98 = uStack_148;
      uStack_60 = uStack_110;
      uStack_70 = uStack_120;
      uStack_6c = uStack_11c;
      uStack_68 = uStack_118;
      uStack_64 = uStack_114;
      uStack_5c = uStack_10c;
      memcpy(param_1,&uStack_a0,0x50);
      puVar3[0x10] = uVar8;
      puVar3[8] = (float)puVar3[8] * 0.5;
    }
  }
  else if (((((uVar1 == 1) || (uVar1 == 3)) && (fVar2 = (float)fabsf(fVar2), 60.0 < fVar2)) &&
           (((param_6 & 1) != 0 && (uStack_50._2_2_ == 0)))) && (55.5 < *(float *)(param_3 + 0xd8)))
  {
    uVar4 = 1;
    fVar2 = *(float *)(uStack_44 + 0xb8);
    fVar7 = fStack_4c * 0.5;
    if (1.0 <= fVar2) {
      fVar6 = *(float *)(param_3 + 0xb0) - 1.0;
      if (fVar6 < fVar2) {
        fVar2 = fVar6;
      }
    }
    else {
      fVar2 = 1.0;
    }
    if (param_4 != 0) {
      fVar2 = *(float *)(param_3 + 0xb0) - fVar2;
    }
    uStack_f0 = *puVar3;
    uStack_b0 = param_4 != 0;
    uStack_ec = *(undefined2 *)(puVar3 + 1);
    uStack_e0 = puVar3[4];
    uStack_dc = puVar3[5];
    uStack_d8 = puVar3[6];
    uStack_d4 = puVar3[7];
    uStack_d0 = puVar3[0xc];
    uStack_cc = puVar3[0xd];
    uStack_c8 = puVar3[0xe];
    uStack_c4 = puVar3[0xf];
    uStack_c0 = puVar3[8];
    uStack_bc = puVar3[9];
    uStack_b8 = puVar3[10];
    uStack_ae = 3;
    if (fVar7 < 10.0) {
      fVar7 = 10.0;
    }
    Ai_ComputeTargetSpeed(fVar2,fVar7,&uStack_1a0,aiStack_100,1,0,0);
    uStack_94 = uStack_194;
    uStack_80 = uStack_180;
    uStack_90 = uStack_190;
    uStack_8c = uStack_18c;
    uStack_88 = uStack_188;
    uStack_84 = uStack_184;
    uStack_7c = uStack_17c;
    uStack_78 = uStack_178;
    uStack_a0 = uStack_1a0;
    uStack_9c = uStack_19c;
    uStack_98 = uStack_198;
    uStack_60 = uStack_160;
    uStack_70 = uStack_170;
    uStack_6c = uStack_16c;
    uStack_68 = uStack_168;
    uStack_64 = uStack_164;
    uStack_5c = uStack_15c;
    memcpy(param_1,&uStack_a0,0x50);
    puVar3[0x10] = uVar8;
    puVar3[8] = (float)puVar3[8] * 0.5;
  }
  return uVar4;
}

// 0x001d85f0  size 0x324
void Ai_AvoidCars(undefined8 param_1,undefined4 *param_2,undefined4 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  undefined2 *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_100;
  undefined2 uStack_fc;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 auStack_b0 [4];
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar1 = false;
  puVar3 = (undefined2 *)param_1;
  fVar5 = *(float *)(puVar3 + 0x20);
  bVar2 = false;
  if (fVar5 != 0.0) {
    fVar4 = (float)fabsf(param_2[0xe]);
    if (fVar4 <= 100.0) {
      fVar4 = (float)fabsf(param_2[0xe]);
      if (fVar4 < 25.0) {
        fVar4 = (float)fabsf(fVar5);
        if (fVar4 <= 25.0) {
          bVar2 = true;
        }
      }
      else {
        bVar1 = true;
        fVar4 = (float)fabsf(fVar5);
        if ((fVar4 <= 25.0) && (*(float *)(puVar3 + 0x10) < 40.0)) {
          bVar2 = true;
        }
      }
    }
    else {
      bVar1 = true;
      fVar4 = (float)fabsf(fVar5);
      if ((fVar4 <= 25.0) && (*(float *)(puVar3 + 0x10) < 40.0)) {
        bVar2 = true;
      }
    }
    if ((bVar1) || (bVar2)) {
      uStack_5e = 3;
      uStack_34 = 0x3f800000;
      uStack_14 = 0x3f800000;
      uStack_84 = 0x3f800000;
      uStack_74 = 0x3f800000;
      if (bVar1) {
        if (param_4 == 0) {
          if (fVar5 <= 0.0) {
            if (fVar5 < 0.0) {
              uStack_5e = 0xc;
            }
          }
          else {
            uStack_5e = 0xb;
          }
        }
        else if (fVar5 <= 0.0) {
          if (fVar5 < 0.0) {
            uStack_5e = 0xb;
          }
        }
        else {
          uStack_5e = 0xc;
        }
      }
      if (bVar2) {
        uStack_60 = param_4 != 0;
        uStack_a0 = *param_2;
        uStack_9c = *(undefined2 *)(param_2 + 1);
        uStack_90 = param_2[4];
        uStack_8c = param_2[5];
        uStack_88 = param_2[6];
        uStack_84 = param_2[7];
        uStack_80 = param_2[8];
        uStack_7c = param_2[9];
        uStack_78 = param_2[10];
        uStack_74 = param_2[0xb];
        uStack_70 = param_2[0xc];
        uStack_6c = param_2[0xd];
        uStack_68 = param_2[0xe];
        auStack_b0[0] = param_3;
        Ai_ComputeTargetSpeed(0,(float)param_2[0xc] * 0.7,&uStack_100,auStack_b0,1,0,0);
        uStack_44 = uStack_f4;
        uStack_30 = uStack_e0;
        uStack_40 = uStack_f0;
        uStack_3c = uStack_ec;
        uStack_38 = uStack_e8;
        uStack_34 = uStack_e4;
        uStack_2c = uStack_dc;
        uStack_28 = uStack_d8;
        uStack_50 = uStack_100;
        uStack_4c = uStack_fc;
        uStack_48 = uStack_f8;
        uStack_10 = uStack_c0;
        uStack_20 = uStack_d0;
        uStack_1c = uStack_cc;
        uStack_18 = uStack_c8;
        uStack_14 = uStack_c4;
        uStack_c = uStack_bc;
        memcpy(param_1,&uStack_50,0x50);
        *(float *)(puVar3 + 0x20) = fVar5;
      }
      else {
        AiLine_GetPoint(&uStack_130,uStack_5e,puVar3[2],*puVar3);
        *(undefined4 *)(puVar3 + 8) = uStack_130;
        *(undefined4 *)(puVar3 + 10) = uStack_12c;
        *(undefined4 *)(puVar3 + 0xc) = uStack_128;
        *(undefined4 *)(puVar3 + 0xe) = 0x3f800000;
        *(undefined4 *)(puVar3 + 10) = 0;
      }
    }
  }
  return;
}

// 0x001d8920  size 0x12dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Ai_ComputeTargetSpeed
               (float param_1,float param_2,int *param_3,int *param_4,int param_5,undefined8 param_6
               ,undefined4 param_7)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  ushort uVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iStack_370;
  ushort uStack_350;
  int iStack_334;
  int iStack_330;
  int iStack_320;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 auStack_240 [2];
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  int aiStack_220 [2];
  int iStack_218;
  undefined4 uStack_214;
  int aiStack_210 [2];
  int iStack_208;
  undefined4 uStack_204;
  int aiStack_200 [2];
  int iStack_1f8;
  undefined4 uStack_1f4;
  int aiStack_1f0 [2];
  int iStack_1e8;
  undefined4 uStack_1e4;
  int aiStack_1e0 [2];
  int iStack_1d8;
  undefined4 uStack_1d4;
  int aiStack_1d0 [2];
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined4 auStack_1c0 [2];
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int aiStack_1a0 [2];
  int iStack_198;
  undefined4 uStack_194;
  int aiStack_190 [2];
  int iStack_188;
  undefined4 uStack_184;
  int aiStack_180 [2];
  int iStack_178;
  undefined4 uStack_174;
  int aiStack_170 [2];
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 auStack_f0 [2];
  undefined4 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 *puStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
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
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar4 = 0;
  iVar19 = 0;
  bVar1 = 0;
  puStack_60 = (undefined4 *)*param_4;
  iStack_5c = param_4[1];
  iStack_58 = param_4[2];
  iStack_54 = param_4[3];
  fVar23 = 0.0;
  iStack_30 = param_4[0xc];
  iStack_2c = param_4[0xd];
  iStack_28 = param_4[0xe];
  iStack_24 = param_4[0xf];
  iStack_20 = param_4[0x10];
  iStack_1c = param_4[0x11];
  iStack_18 = param_4[0x12];
  iStack_14 = param_4[0x13];
  iVar3 = param_4[0x14];
  iStack_c = param_4[0x15];
  iStack_8 = param_4[0x16];
  iStack_4 = param_4[0x17];
  iStack_50 = param_4[4];
  iStack_4c = param_4[5];
  iStack_48 = param_4[6];
  iStack_44 = param_4[7];
  iStack_130 = param_4[8];
  iStack_3c = param_4[9];
  iStack_128 = param_4[10];
  iStack_34 = param_4[0xb];
  fVar24 = 0.0;
  iVar20 = (int)((float)puStack_60[0x36] / 8.0);
  if (iVar20 < 6) {
    iVar20 = 6;
  }
  else if (0xc < iVar20) {
    iVar20 = 0xc;
  }
  uStack_10._2_2_ = (undefined2)((uint)iVar3 >> 0x10);
  uVar2 = uStack_10._2_2_;
  uStack_100 = *puStack_60;
  uStack_fc = 0;
  uStack_f8 = puStack_60[2];
  uStack_f4 = 0x3f800000;
  uStack_124 = 0x3f800000;
  iStack_12c = 0;
  iStack_bc = 0;
  uStack_b4 = 0x3f800000;
  uStack_10._0_1_ = (char)iVar3;
  if (param_1 == 0.0) {
    if ((char)uStack_10 == '\0') {
      uVar12 = 9;
      uVar10 = 10;
    }
    else {
      uVar12 = 10;
      uVar10 = 9;
    }
  }
  else if ((char)uStack_10 == '\0') {
    uVar12 = 1;
    uVar10 = 2;
  }
  else {
    uVar12 = 2;
    uVar10 = 1;
  }
  fVar25 = ((float)puStack_60[0x1a] * 3.1415927) / 180.0;
  iStack_c0 = iStack_130;
  iStack_b8 = iStack_128;
  iStack_40 = iStack_130;
  iStack_38 = iStack_128;
  uStack_10 = iVar3;
  if ((char)uStack_10 == '\0') {
    uVar11 = *(ushort *)(puStack_60 + 0x42);
    if ((long)(puStack_60[0x41] + 1) < (long)**(short **)(_g_RoadData[1] + (uint)uVar11 * 4)) {
      uVar9 = (undefined2)(puStack_60[0x41] + 1);
      if (param_1 == 0.0) {
        AiLine_GetPoint(aiStack_1f0,uVar2,uVar11,uVar9);
        iStack_e0 = aiStack_1f0[0];
        iStack_d8 = iStack_1e8;
        uStack_d4 = uStack_1e4;
        iVar3 = iStack_78;
      }
      else {
        AiLine_BuildFrame(param_1,aiStack_200,uVar11,uVar9,param_7);
        iStack_e0 = aiStack_200[0];
        iStack_d8 = iStack_1f8;
        uStack_d4 = uStack_1f4;
        iVar3 = iStack_78;
      }
    }
    else if (param_1 == 0.0) {
      AiLine_GetPoint(aiStack_1d0,uVar2,uVar11 + 1,0);
      iStack_e0 = aiStack_1d0[0];
      iStack_d8 = iStack_1c8;
      uStack_d4 = uStack_1c4;
      iVar3 = iStack_78;
    }
    else {
      AiLine_BuildFrame(param_1,aiStack_1e0,uVar11 + 1,0,param_7);
      iStack_e0 = aiStack_1e0[0];
      iStack_d8 = iStack_1d8;
      uStack_d4 = uStack_1d4;
      iVar3 = iStack_78;
    }
    iVar7 = iStack_50;
    iStack_dc = 0;
    iStack_370 = 0;
    uStack_350 = *(ushort *)(puStack_60 + 0x42);
    lVar16 = (long)(short)uStack_350;
    lVar15 = (long)(short)(ushort)iStack_4c;
    iVar18 = puStack_60[0x41] + 2;
    iVar13 = (int)(short)(ushort)iStack_4c;
    fVar6 = 360.0;
    iStack_330 = (int)**(short **)(_g_RoadData[1] + (uint)uStack_350 * 4);
    lVar17 = lVar16;
    iStack_334 = iVar18;
    iStack_320 = iStack_330;
    iVar14 = iVar18;
    do {
      if (iStack_320 <= iVar18) {
        if (*_g_RoadData <= (short)lVar17 + 1) goto LAB_001d9878;
        uVar5 = (int)lVar17 + 1;
        lVar17 = (long)(short)uVar5;
        iVar18 = iVar18 - iStack_320;
        iStack_320 = (int)**(short **)(_g_RoadData[1] + (uVar5 & 0xffff) * 4);
      }
      if (iStack_330 <= iVar14) {
        if (*_g_RoadData <= (short)lVar16 + 1) goto LAB_001d9878;
        uVar5 = (int)lVar16 + 1;
        uVar11 = (ushort)uVar5;
        lVar16 = (long)(short)uVar11;
        iVar14 = iVar14 - iStack_330;
        iStack_330 = (int)**(short **)(_g_RoadData[1] + (uVar5 & 0xffff) * 4);
        if (iStack_370 == 0) {
          uStack_350 = uVar11;
          iStack_334 = iVar14;
        }
      }
      if ((param_5 == 1) &&
         ((((long)(short)(ushort)lVar16 == CONCAT44((int)((ulong)lVar15 >> 0x20),iVar13) &&
           (iVar7 <= iVar14)) || ((0.0 < param_2 && (param_2 < fVar23)))))) goto LAB_001d9878;
      if (param_1 == 0.0) {
        AiLine_GetPoint(aiStack_210,uVar2,lVar16,(short)iVar14);
        iStack_130 = aiStack_210[0];
        iStack_128 = iStack_208;
        uStack_124 = uStack_204;
        fVar26 = fVar25;
      }
      else {
        AiLine_BuildFrame(param_1,aiStack_220,lVar16,(short)iVar14,param_7);
        iStack_130 = aiStack_220[0];
        iStack_128 = iStack_218;
        uStack_124 = uStack_214;
        fVar26 = fVar25;
      }
      iStack_12c = 0;
      AiLine_GetPoint(&uStack_230,uVar12,lVar17,(short)iVar18);
      uStack_110 = uStack_230;
      uStack_10c = uStack_22c;
      uStack_108 = uStack_228;
      uStack_104 = uStack_224;
      AiLine_GetPoint(auStack_240,uVar10,lVar17,(short)iVar18);
      uStack_10c = 0;
      uStack_120 = auStack_240[0];
      uStack_118 = uStack_238;
      uStack_114 = uStack_234;
      uStack_11c = 0;
      sceVu0SubVector(&uStack_140,&uStack_110,&uStack_100);
      sceVu0SubVector(&uStack_150,&uStack_120,&uStack_100);
      sceVu0SubVector(&uStack_160,&iStack_130,&uStack_100);
      uStack_2b0 = uStack_140;
      uStack_2c0 = uStack_160;
      uStack_2ac = uStack_13c;
      uStack_2a8 = uStack_138;
      uStack_2a4 = uStack_134;
      uStack_2bc = uStack_15c;
      uStack_2b8 = uStack_158;
      uStack_2b4 = uStack_154;
      fVar25 = (float)Vec3_AngleBetween(&uStack_2b0,&uStack_2c0);
      iVar8 = 0;
      fVar25 = (fVar25 * 180.0) / 3.1415927;
      do {
        if ((fVar25 <= 180.0) && (-180.0 <= fVar25)) goto LAB_001d9558;
        if (180.0 < fVar25) {
          fVar25 = fVar25 - 360.0;
        }
        else if (fVar25 < -180.0) {
          fVar25 = fVar25 + 360.0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x65);
      fVar25 = 0.0;
LAB_001d9558:
      uStack_2e0 = uStack_150;
      uStack_2cc = uStack_15c;
      uStack_2c8 = uStack_158;
      uStack_2c4 = uStack_154;
      uStack_2dc = uStack_14c;
      uStack_2d8 = uStack_148;
      uStack_2d0 = uStack_160;
      uStack_2d4 = uStack_144;
      fVar21 = (float)Vec3_AngleBetween(&uStack_2d0,&uStack_2e0);
      iVar8 = 0;
      fVar21 = (fVar21 * 180.0) / 3.1415927;
      do {
        if ((fVar21 <= 180.0) && (-180.0 <= fVar21)) goto LAB_001d9678;
        if (180.0 < fVar21) {
          fVar21 = fVar21 - 360.0;
        }
        else if (fVar21 < -180.0) {
          fVar21 = fVar21 + 360.0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x65);
      fVar21 = 0.0;
LAB_001d9678:
      uStack_300 = uStack_150;
      uStack_2ec = uStack_13c;
      uStack_2e8 = uStack_138;
      uStack_2e4 = uStack_134;
      uStack_2fc = uStack_14c;
      uStack_2f8 = uStack_148;
      uStack_2f0 = uStack_140;
      uStack_2f4 = uStack_144;
      fVar22 = (float)Vec3_AngleBetween(&uStack_2f0,&uStack_300);
      iVar8 = 0;
      fVar22 = (fVar22 * 180.0) / 3.1415927;
      do {
        if ((fVar22 <= 180.0) && (-180.0 <= fVar22)) goto LAB_001d9798;
        if (180.0 < fVar22) {
          fVar22 = fVar22 - 360.0;
        }
        else if (fVar22 < -180.0) {
          fVar22 = fVar22 + 360.0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x65);
      fVar22 = 0.0;
LAB_001d9798:
      fVar25 = (float)fabsf(fVar25);
      fVar21 = (float)fabsf(fVar21);
      fVar22 = (float)fabsf(fVar22);
      if (((fVar22 < fVar25) || (fVar22 < fVar21)) || (0 < iVar19)) {
        iVar19 = iVar19 + 1;
        if (-1 < iStack_370) goto code_r0x001d97e4;
      }
      else {
        iVar19 = 0;
      }
      iStack_d0 = iStack_130;
      iStack_cc = iStack_12c;
      iStack_c8 = iStack_128;
      uStack_c4 = uStack_124;
      iStack_c0 = iStack_130;
      iStack_bc = iStack_12c;
      iStack_b8 = iStack_128;
      uStack_b4 = uStack_124;
      fVar25 = (float)maybe_sceVu0InterVectorDist(auStack_f0,&iStack_d0,&iStack_e0);
      fVar23 = fVar23 + fVar25;
      fVar25 = (float)atan2f(uStack_e8,auStack_f0[0]);
      if (iStack_370 != 0) {
        fVar24 = fVar24 + (fVar25 - fVar26);
      }
      iStack_e0 = iStack_d0;
      iStack_dc = iStack_cc;
      iStack_d8 = iStack_c8;
      uStack_d4 = uStack_c4;
      if (iVar4 == iVar20 + -2) {
        iVar18 = iVar18 + 1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      iStack_370 = iStack_370 + 1;
      uStack_350 = (ushort)lVar16;
      iStack_334 = iVar14;
      iVar14 = iVar14 + 1;
    } while( true );
  }
  if (param_1 == 0.0) {
    AiLine_GetPoint(aiStack_170,uVar2,*(undefined2 *)(puStack_60 + 0x42),
                    *(undefined2 *)(puStack_60 + 0x41));
    iStack_e0 = aiStack_170[0];
    iStack_d8 = iStack_168;
    uStack_d4 = uStack_164;
    iVar3 = iStack_78;
  }
  else {
    AiLine_BuildFrame(param_1,aiStack_180,*(undefined2 *)(puStack_60 + 0x42),
                      *(undefined2 *)(puStack_60 + 0x41),param_7);
    iStack_e0 = aiStack_180[0];
    iStack_d8 = iStack_178;
    uStack_d4 = uStack_174;
    iVar3 = iStack_78;
  }
  fVar6 = 360.0;
  iStack_dc = 0;
  iVar14 = 0;
  lVar15 = (long)(short)*(ushort *)(puStack_60 + 0x42);
  iVar18 = puStack_60[0x41] + -1;
  lVar17 = lVar15;
  uStack_350 = *(ushort *)(puStack_60 + 0x42);
  iStack_334 = iVar18;
  iVar7 = iVar18;
  do {
    if (iVar18 < 0) {
      if ((short)lVar17 + -1 < 0) goto LAB_001d9878;
      uVar5 = (int)lVar17 - 1;
      lVar17 = (long)(short)uVar5;
      iVar18 = iVar18 + **(short **)(_g_RoadData[1] + (uVar5 & 0xffff) * 4) + -1;
    }
    iVar13 = iVar7;
    if (iVar7 < 0) {
      if ((short)lVar15 + -1 < 0) goto LAB_001d9878;
      uVar5 = (int)lVar15 - 1;
      uVar11 = (ushort)uVar5;
      lVar15 = (long)(short)uVar11;
      iVar13 = iVar7 + **(short **)(_g_RoadData[1] + (uVar5 & 0xffff) * 4) + -1;
      if (iVar14 == 0) {
        uStack_350 = uVar11;
        iStack_334 = iVar13;
      }
    }
    if ((param_5 == 1) &&
       ((((ushort)lVar15 == (ushort)iStack_4c && (iVar13 <= iStack_50)) ||
        ((0.0 < param_2 && (param_2 < fVar23)))))) goto LAB_001d9878;
    if (param_1 == 0.0) {
      AiLine_GetPoint(aiStack_190,uVar2,lVar15,(short)iVar13);
      iStack_130 = aiStack_190[0];
      iStack_128 = iStack_188;
      uStack_124 = uStack_184;
      fVar26 = fVar25;
    }
    else {
      AiLine_BuildFrame(param_1,aiStack_1a0,lVar15,(short)iVar13,param_7);
      iStack_130 = aiStack_1a0[0];
      iStack_128 = iStack_198;
      uStack_124 = uStack_194;
      fVar26 = fVar25;
    }
    iStack_12c = 0;
    AiLine_GetPoint(&uStack_1b0,uVar12,lVar17,(short)iVar18);
    uStack_110 = uStack_1b0;
    uStack_10c = uStack_1ac;
    uStack_108 = uStack_1a8;
    uStack_104 = uStack_1a4;
    AiLine_GetPoint(auStack_1c0,uVar10,lVar17,(short)iVar18);
    uStack_10c = 0;
    uStack_120 = auStack_1c0[0];
    uStack_118 = uStack_1b8;
    uStack_114 = uStack_1b4;
    uStack_11c = 0;
    sceVu0SubVector(&uStack_140,&uStack_110,&uStack_100);
    sceVu0SubVector(&uStack_150,&uStack_120,&uStack_100);
    sceVu0SubVector(&uStack_160,&iStack_130,&uStack_100);
    uStack_250 = uStack_140;
    uStack_260 = uStack_160;
    uStack_24c = uStack_13c;
    uStack_248 = uStack_138;
    uStack_244 = uStack_134;
    uStack_25c = uStack_15c;
    uStack_258 = uStack_158;
    uStack_254 = uStack_154;
    fVar25 = (float)Vec3_AngleBetween(&uStack_250,&uStack_260);
    iVar7 = 0;
    fVar25 = (fVar25 * 180.0) / 3.1415927;
    do {
      if ((fVar25 <= 180.0) && (-180.0 <= fVar25)) goto LAB_001d8db8;
      if (180.0 < fVar25) {
        fVar25 = fVar25 - 360.0;
      }
      else if (fVar25 < -180.0) {
        fVar25 = fVar25 + 360.0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x65);
    fVar25 = 0.0;
LAB_001d8db8:
    fVar25 = (float)fabsf(fVar25);
    uStack_270 = uStack_160;
    uStack_280 = uStack_150;
    uStack_26c = uStack_15c;
    uStack_268 = uStack_158;
    uStack_264 = uStack_154;
    uStack_27c = uStack_14c;
    uStack_278 = uStack_148;
    uStack_274 = uStack_144;
    fVar21 = (float)Vec3_AngleBetween(&uStack_270,&uStack_280);
    iVar7 = 0;
    fVar21 = (fVar21 * 180.0) / 3.1415927;
    do {
      if ((fVar21 <= 180.0) && (-180.0 <= fVar21)) goto LAB_001d8ef0;
      if (180.0 < fVar21) {
        fVar21 = fVar21 - 360.0;
      }
      else if (fVar21 < -180.0) {
        fVar21 = fVar21 + 360.0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x65);
    fVar21 = 0.0;
LAB_001d8ef0:
    fVar21 = (float)fabsf(fVar21);
    uStack_290 = uStack_140;
    uStack_2a0 = uStack_150;
    uStack_28c = uStack_13c;
    uStack_288 = uStack_138;
    uStack_284 = uStack_134;
    uStack_29c = uStack_14c;
    uStack_298 = uStack_148;
    uStack_294 = uStack_144;
    fVar22 = (float)Vec3_AngleBetween(&uStack_290,&uStack_2a0);
    iVar7 = 0;
    fVar22 = (fVar22 * 180.0) / 3.1415927;
    do {
      if ((fVar22 <= 180.0) && (-180.0 <= fVar22)) goto LAB_001d9028;
      if (180.0 < fVar22) {
        fVar22 = fVar22 - 360.0;
      }
      else if (fVar22 < -180.0) {
        fVar22 = fVar22 + 360.0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x65);
    fVar22 = 0.0;
LAB_001d9028:
    fVar22 = (float)fabsf(fVar22);
    if (((fVar22 < fVar25) || (fVar22 < fVar21)) || (0 < iVar19)) {
      iVar19 = iVar19 + 1;
      if (-1 < iVar14) goto code_r0x001d9058;
    }
    else {
      iVar19 = 0;
    }
    iStack_d0 = iStack_130;
    iStack_cc = iStack_12c;
    iStack_c8 = iStack_128;
    uStack_c4 = uStack_124;
    iStack_c0 = iStack_130;
    iStack_bc = iStack_12c;
    iStack_b8 = iStack_128;
    uStack_b4 = uStack_124;
    fVar25 = (float)maybe_sceVu0InterVectorDist(auStack_f0,&iStack_d0,&iStack_e0);
    fVar23 = fVar23 + fVar25;
    fVar25 = (float)atan2f(uStack_e8,auStack_f0[0]);
    if (iVar14 != 0) {
      fVar24 = fVar24 + (fVar25 - fVar26);
    }
    iVar7 = iVar13 + -1;
    iStack_e0 = iStack_d0;
    iStack_dc = iStack_cc;
    iStack_d8 = iStack_c8;
    uStack_d4 = uStack_c4;
    if (iVar4 == iVar20 + -2) {
      iVar18 = iVar18 + -1;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    iVar14 = iVar14 + 1;
    uStack_350 = (ushort)lVar15;
    iStack_334 = iVar13;
  } while( true );
code_r0x001d97e4:
  bVar1 = 1;
  goto LAB_001d9878;
code_r0x001d9058:
  bVar1 = 1;
LAB_001d9878:
  iVar19 = iStack_b8;
  iVar20 = iStack_c0;
  iVar4 = 0;
  fVar24 = (fVar24 * 180.0) / 3.1415927;
  do {
    if ((fVar24 <= 180.0) && (-180.0 <= fVar24)) goto LAB_001d9930;
    if (180.0 < fVar24) {
      fVar24 = fVar24 - fVar6;
    }
    else if (fVar24 < -180.0) {
      fVar24 = fVar24 + fVar6;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x65);
  fVar24 = 0.0;
LAB_001d9930:
  fVar25 = (float)fabsf(fVar24);
  if (1.0 < fVar25) {
    fVar25 = (fVar6 * fVar23) / (fVar24 * 2.0 * 3.1415927);
    if ((1000.0 < fVar25) || (fVar25 < -1000.0)) {
      fVar25 = 1000.0;
    }
  }
  else {
    fVar25 = 1000.0;
  }
  *param_3 = iStack_334;
  *(ushort *)(param_3 + 1) = uStack_350;
  param_3[2] = iVar18;
  *(short *)(param_3 + 3) = (short)lVar17;
  param_3[4] = iVar20;
  param_3[5] = iStack_bc;
  param_3[6] = iVar19;
  param_3[7] = 0x3f800000;
  param_3[8] = (int)fVar23;
  param_3[9] = (int)fVar24;
  param_3[10] = (int)fVar25;
  param_3[0xc] = iStack_80;
  param_3[0xd] = iStack_7c;
  param_3[0xe] = iVar3;
  param_3[0xf] = 0x3f800000;
  param_3[0x10] = 0;
  param_3[0x11] = (uint)bVar1;
  return;
}

// 0x001d9c40  size 0x650
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Ai_BrakeForCorner(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float in_f21;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined4 auStack_80 [2];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [2];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 auStack_60 [2];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  param_1 = param_1 * 3.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar12 = 0.0;
  if (param_1 < 20.0) {
    param_1 = 20.0;
  }
  if (cRam0036f234 != '\x02') {
    return 0.0;
  }
  sVar3 = (short)param_3;
  sVar6 = (short)param_2;
  if (param_4 == 0) {
    iVar4 = ((uint)param_2 & 0xffff) * 4;
    iVar5 = sVar3 + 1;
    if ((long)iVar5 < (long)**(short **)(_g_RoadData[1] + iVar4)) {
      AiLine_GetPoint(auStack_80,3,param_2,(short)iVar5);
      uStack_20 = auStack_80[0];
      uStack_18 = uStack_78;
      uStack_14 = uStack_74;
    }
    else {
      AiLine_GetPoint(auStack_70,3,sVar6 + 1,0);
      uStack_20 = auStack_70[0];
      uStack_18 = uStack_68;
      uStack_14 = uStack_64;
    }
    uStack_1c = 0;
    iVar5 = sVar3 + 2;
    lVar8 = (long)sVar6;
    iVar2 = 0;
    lVar7 = (long)**(short **)(_g_RoadData[1] + iVar4);
    do {
      if (lVar7 <= iVar5) {
        if (*_g_RoadData <= (short)lVar8 + 1) {
          AiLine_GetPoint(auStack_90,3,lVar8,(short)iVar5);
          return fVar12;
        }
        uVar1 = (int)lVar8 + 1;
        lVar8 = (long)(short)uVar1;
        lVar7 = (long)**(short **)(_g_RoadData[1] + (uVar1 & 0xffff) * 4);
        iVar5 = 0;
      }
      AiLine_GetPoint(auStack_a0,3,lVar8,(short)iVar5);
      uStack_10 = auStack_a0[0];
      uStack_8 = uStack_98;
      uStack_4 = uStack_94;
      uStack_c = 0;
      fVar10 = (float)maybe_sceVu0InterVectorDist(auStack_30,&uStack_10,&uStack_20);
      fVar13 = fVar13 + fVar10;
      fVar10 = (float)atan2f(uStack_28,auStack_30[0]);
      if (iVar2 == 0) {
        in_f21 = fVar10;
      }
      fVar14 = fVar14 + (fVar10 - in_f21);
      if (20.0 < fVar13) {
        iVar4 = 0;
        fVar11 = (fVar14 * 180.0) / 3.1415927;
        do {
          if ((fVar11 <= 180.0) && (-180.0 <= fVar11)) goto LAB_001d9e70;
          if (180.0 < fVar11) {
            fVar11 = fVar11 - 360.0;
          }
          else if (fVar11 < -180.0) {
            fVar11 = fVar11 + 360.0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x65);
        fVar11 = 0.0;
LAB_001d9e70:
        fVar9 = (float)fabsf(fVar11);
        if (1.0 < fVar9) {
          fVar12 = (fVar13 * 360.0) / (fVar11 * 2.0 * 3.1415927);
          if ((fVar12 <= 500.0) && (-500.0 <= fVar12)) {
            return fVar12;
          }
          fVar12 = 0.0;
          if (param_1 < fVar13) {
            return 0.0;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 1;
      uStack_20 = uStack_10;
      uStack_1c = uStack_c;
      uStack_18 = uStack_8;
      uStack_14 = uStack_4;
      in_f21 = fVar10;
    } while( true );
  }
  AiLine_GetPoint(auStack_40,3,param_2,param_3);
  lVar8 = (long)sVar6;
  iVar5 = (int)sVar3;
  iVar4 = 0;
  uStack_20 = auStack_40[0];
  uStack_18 = uStack_38;
  uStack_14 = uStack_34;
  uStack_1c = 0;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) {
      if ((short)lVar8 + -1 < 0) {
        AiLine_GetPoint(auStack_50,3,lVar8,(short)iVar5);
        return fVar12;
      }
      uVar1 = (int)lVar8 - 1;
      lVar8 = (long)(short)uVar1;
      iVar5 = **(short **)(_g_RoadData[1] + (uVar1 & 0xffff) * 4) + -1;
    }
    AiLine_GetPoint(auStack_60,3,lVar8,(short)iVar5);
    uStack_10 = auStack_60[0];
    uStack_8 = uStack_58;
    uStack_4 = uStack_54;
    uStack_c = 0;
    fVar10 = (float)maybe_sceVu0InterVectorDist(auStack_30,&uStack_10,&uStack_20);
    fVar13 = fVar13 + fVar10;
    fVar10 = (float)atan2f(uStack_28,auStack_30[0]);
    if (iVar4 == 0) {
      in_f21 = fVar10;
    }
    fVar14 = fVar14 + (fVar10 - in_f21);
    if (20.0 < fVar13) {
      iVar2 = 0;
      fVar11 = (fVar14 * 180.0) / 3.1415927;
      do {
        if ((fVar11 <= 180.0) && (-180.0 <= fVar11)) goto LAB_001da068;
        if (180.0 < fVar11) {
          fVar11 = fVar11 - 360.0;
        }
        else if (fVar11 < -180.0) {
          fVar11 = fVar11 + 360.0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x65);
      fVar11 = 0.0;
LAB_001da068:
      fVar9 = (float)fabsf(fVar11);
      if (1.0 < fVar9) {
        fVar12 = (fVar13 * 360.0) / (fVar11 * 2.0 * 3.1415927);
        if ((fVar12 <= 500.0) && (-500.0 <= fVar12)) {
          return fVar12;
        }
        fVar12 = 0.0;
        if (param_1 < fVar13) {
          return 0.0;
        }
      }
    }
    iVar4 = iVar4 + 1;
    uStack_20 = uStack_10;
    uStack_1c = uStack_c;
    uStack_18 = uStack_8;
    uStack_14 = uStack_4;
    in_f21 = fVar10;
  } while( true );
}

// 0x001da2b0  size 0x5d8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Ai_ThrottleControl(int *param_1,int *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int aiStack_f0 [2];
  int iStack_e8;
  undefined4 uStack_e4;
  int aiStack_e0 [2];
  int iStack_d8;
  undefined4 uStack_d4;
  int aiStack_d0 [2];
  int iStack_c8;
  undefined4 uStack_c4;
  int aiStack_c0 [2];
  int iStack_b8;
  undefined4 uStack_b4;
  int aiStack_b0 [2];
  int iStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int aiStack_90 [2];
  int iStack_88;
  undefined4 uStack_84;
  undefined4 auStack_80 [2];
  undefined4 uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_18;
  int iStack_10;
  float fStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_10 = *param_2;
  fVar11 = (float)param_2[1];
  iStack_8 = param_2[2];
  iStack_4 = param_2[3];
  fVar13 = 0.0;
  fVar14 = 0.0;
  if (cRam0036f234 != '\x02') {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0x3f800000;
    param_1[8] = iStack_30;
    param_1[9] = iStack_2c;
    param_1[10] = iStack_28;
    param_1[0xb] = 0x3f800000;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = iStack_18;
    return;
  }
  uVar2 = (undefined2)iStack_4;
  fVar12 = (*(float *)(iStack_10 + 0x68) * 3.1415927) / 180.0;
  fStack_c = fVar11;
  if (iStack_8 != 0) {
    AiLine_GetPoint(aiStack_90,(undefined2)iStack_4,*(undefined2 *)(iStack_10 + 0x108),
                    *(undefined2 *)(iStack_10 + 0x104));
    iVar6 = 0;
    iStack_70 = aiStack_90[0];
    iStack_68 = iStack_88;
    uStack_64 = uStack_84;
    iStack_6c = 0;
    lVar7 = (long)*(short *)(iStack_10 + 0x108);
    iVar4 = *(int *)(iStack_10 + 0x104);
    iVar10 = iStack_2c;
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 < 1) {
        if ((short)lVar7 + -1 < 0) {
          AiLine_GetPoint(&iStack_a0,uVar2,lVar7,(short)iVar4);
          iStack_60 = iStack_a0;
          iStack_5c = iStack_9c;
          iStack_58 = iStack_98;
          uStack_54 = uStack_94;
          goto LAB_001da4d8;
        }
        uVar3 = (int)lVar7 - 1;
        lVar7 = (long)(short)uVar3;
        iVar4 = **(short **)(_g_RoadData[1] + (uVar3 & 0xffff) * 4) + -1;
      }
      AiLine_GetPoint(aiStack_b0,uVar2,lVar7,(short)iVar4);
      iStack_60 = aiStack_b0[0];
      iStack_58 = iStack_a8;
      uStack_54 = uStack_a4;
      iStack_5c = 0;
      fVar9 = (float)maybe_sceVu0InterVectorDist(auStack_80,&iStack_60,&iStack_70);
      fVar13 = fVar13 + fVar9;
      fVar9 = (float)atan2f(uStack_78,auStack_80[0]);
      if (iVar6 != 0) {
        fVar14 = fVar14 + (fVar9 - fVar12);
      }
      if (fVar11 < fVar13) goto LAB_001da4d8;
      iVar6 = iVar6 + 1;
      iStack_70 = iStack_60;
      iStack_6c = iStack_5c;
      iStack_68 = iStack_58;
      uStack_64 = uStack_54;
      fVar12 = fVar9;
    } while( true );
  }
  uVar1 = *(ushort *)(iStack_10 + 0x108);
  iVar4 = *(int *)(iStack_10 + 0x104) + 1;
  if ((long)iVar4 < (long)**(short **)(_g_RoadData[1] + (uint)uVar1 * 4)) {
    AiLine_GetPoint(aiStack_d0,(undefined2)iStack_4,uVar1,(short)iVar4);
    iStack_70 = aiStack_d0[0];
    iStack_68 = iStack_c8;
    uStack_64 = uStack_c4;
    iVar10 = iStack_2c;
  }
  else {
    AiLine_GetPoint(aiStack_c0,(undefined2)iStack_4,uVar1 + 1,0);
    iStack_70 = aiStack_c0[0];
    iStack_68 = iStack_b8;
    uStack_64 = uStack_b4;
    iVar10 = iStack_2c;
  }
  iVar6 = 0;
  iStack_6c = 0;
  lVar7 = (long)(short)*(ushort *)(iStack_10 + 0x108);
  iVar4 = *(int *)(iStack_10 + 0x104) + 2;
  lVar8 = (long)**(short **)(_g_RoadData[1] + (uint)*(ushort *)(iStack_10 + 0x108) * 4);
LAB_001da44c:
  if (iVar4 < lVar8) {
LAB_001da7e0:
    AiLine_GetPoint(aiStack_f0,uVar2,lVar7,(short)iVar4);
    iStack_60 = aiStack_f0[0];
    iStack_58 = iStack_e8;
    uStack_54 = uStack_e4;
    iStack_5c = 0;
    fVar9 = (float)maybe_sceVu0InterVectorDist(auStack_80,&iStack_60,&iStack_70);
    fVar13 = fVar13 + fVar9;
    fVar9 = (float)atan2f(uStack_78,auStack_80[0]);
    if (iVar6 != 0) {
      fVar14 = fVar14 + (fVar9 - fVar12);
    }
    if (fVar11 < fVar13) goto LAB_001da4d8;
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 1;
    iStack_70 = iStack_60;
    iStack_6c = iStack_5c;
    iStack_68 = iStack_58;
    uStack_64 = uStack_54;
    fVar12 = fVar9;
    goto LAB_001da44c;
  }
  if ((short)lVar7 + 1 < *_g_RoadData) {
    uVar3 = (int)lVar7 + 1;
    lVar7 = (long)(short)uVar3;
    lVar8 = (long)**(short **)(_g_RoadData[1] + (uVar3 & 0xffff) * 4);
    iVar4 = 0;
    goto LAB_001da7e0;
  }
  AiLine_GetPoint(aiStack_e0,uVar2,lVar7,(short)iVar4);
  iStack_60 = aiStack_e0[0];
  iStack_58 = iStack_d8;
  uStack_54 = uStack_d4;
  iStack_5c = 0;
LAB_001da4d8:
  iVar6 = iStack_5c;
  iVar5 = 0;
  fVar11 = (fVar14 * 180.0) / 3.1415927;
  do {
    if ((fVar11 <= 180.0) && (-180.0 <= fVar11)) goto LAB_001da580;
    if (180.0 < fVar11) {
      fVar11 = fVar11 - 360.0;
    }
    else if (fVar11 < -180.0) {
      fVar11 = fVar11 + 360.0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x65);
  fVar11 = 0.0;
LAB_001da580:
  fVar14 = (float)fabsf(fVar11);
  if (1.0 < fVar14) {
    fVar14 = (fVar13 * 360.0) / (fVar11 * 2.0 * 3.1415927);
    if ((400.0 < fVar14) || (fVar14 < -400.0)) {
      fVar14 = 1000.0;
      *param_1 = iVar4;
      goto LAB_001da604;
    }
  }
  else {
    fVar14 = 1000.0;
  }
  *param_1 = iVar4;
LAB_001da604:
  *(short *)(param_1 + 1) = (short)lVar7;
  param_1[4] = iStack_60;
  param_1[5] = iVar6;
  param_1[6] = iStack_58;
  param_1[7] = 0x3f800000;
  param_1[8] = iStack_30;
  param_1[9] = iVar10;
  param_1[10] = iStack_28;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = (int)fVar13;
  param_1[0xd] = (int)fVar11;
  param_1[0xe] = (int)fVar14;
  return;
}

// 0x001da8a0  size 0x20
void AiLine_Clear(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}

// 0x001da8c0  size 0xe0
void AiLine_TransformToWorld(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = *param_2;
  uStack_c = param_2[1];
  uStack_8 = param_2[2];
  uStack_4 = param_2[3];
  uStack_20 = DAT_00319820;
  uStack_1c = DAT_00319824;
  uStack_18 = DAT_00319828;
  uStack_14 = DAT_0031982c;
  Mat34_Identity(auStack_a0);
  Quat_ToMat33(auStack_a0,&uStack_10);
  maybe_Vu0_UnitMatrix(auStack_60);
  sceVu0CopyVector(auStack_60,auStack_a0);
  sceVu0CopyVector(auStack_50,auStack_90);
  sceVu0CopyVector(auStack_40,auStack_80);
  sceVu0CopyVector(auStack_30,auStack_70);
  sceVu0ApplyMatrix(&uStack_20,auStack_60,&uStack_20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = 0x3f800000;
  return;
}

// 0x001da9a0  size 0x110
undefined4 Vec3_AngleBetween(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
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
  
  uStack_30 = *param_1;
  uStack_2c = param_1[1];
  uStack_28 = param_1[2];
  uStack_24 = param_1[3];
  uStack_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uStack_18 = uStack_38;
  uStack_14 = uStack_34;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  uStack_8 = uStack_28;
  uStack_4 = uStack_24;
  fVar1 = (float)sceVu0InnerProduct(&uStack_30,&uStack_40);
  fVar2 = (float)sceVu0Normalize(&uStack_10,&uStack_10);
  fVar3 = (float)sceVu0Normalize(&uStack_20,&uStack_20);
  if (fVar1 == 0.0) {
    uVar4 = 0;
  }
  else {
    if (fVar2 * fVar3 == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = fVar1 / (fVar2 * fVar3);
    }
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    uVar4 = maybe_acosf(fVar1);
  }
  return uVar4;
}

// 0x001daab0  size 0xd0
float Vec3_AngleBetweenSigned(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = *param_1;
  uStack_c = param_1[1];
  uStack_8 = param_1[2];
  uStack_4 = param_1[3];
  uStack_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  fVar2 = (float)Vec3_AngleBetweenNorm(&uStack_10,&uStack_20);
  iVar1 = 0;
  fVar2 = (fVar2 * 180.0) / 3.1415927;
  do {
    if ((fVar2 <= 180.0) && (-180.0 <= fVar2)) {
      return fVar2;
    }
    if (180.0 < fVar2) {
      fVar2 = fVar2 - 360.0;
    }
    else if (fVar2 < -180.0) {
      fVar2 = fVar2 + 360.0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x65);
  return 0.0;
}

// 0x001dab90  size 0xf0
void Vec3_AngleBetweenNorm(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar7 = fVar6 * fVar3 + fVar4 * fVar1 + fVar5 * fVar2;
  if (fVar7 != 0.0) {
    fVar1 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) *
            SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar1 == 0.0) {
      fVar7 = 1.0;
    }
    else {
      fVar7 = fVar7 / fVar1;
    }
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    maybe_acosf(fVar7);
  }
  return;
}

// 0x001dac80  size 0x38
float Vec3_LengthB(float *param_1)

{
  return SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
}

// 0x001dacc0  size 0x40
float Vec3_DotB(float *param_1,float *param_2)

{
  return param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1];
}

// 0x001dad00  size 0x84
float Race_CountActiveCars(float param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((param_1 <= 180.0) && (-180.0 <= param_1)) {
      return param_1;
    }
    if (180.0 < param_1) {
      param_1 = param_1 - 360.0;
    }
    else if (param_1 < -180.0) {
      param_1 = param_1 + 360.0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x65);
  return 0.0;
}

// 0x001dada0  size 0x254
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_CheckSprint(char param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = GameState_GetPlayerCount();
  lVar2 = GameState_GetRivalCount();
  lVar3 = GameState_GetTrafficCount();
  iVar5 = param_1 * 4;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 1) != 0) && (0 < lVar1)) {
    uVar4 = RaceCar_Get(0);
    RaceCar_SetFlags(uVar4,8);
    RaceCar_SetFlags(uVar4,0x10);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 2) != 0) && (1 < lVar1)) {
    uVar4 = RaceCar_Get(1);
    RaceCar_SetFlags(uVar4,8);
    RaceCar_SetFlags(uVar4,0x10);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 4) != 0) && (0 < lVar2)) {
    uVar4 = RaceCar_Get(lVar1);
    RaceCar_SetFlags(uVar4,8);
    RaceCar_SetFlags(uVar4,0x10);
  }
  iVar7 = (int)lVar1;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 8) != 0) && (1 < lVar2)) {
    uVar4 = RaceCar_Get(iVar7 + 1);
    RaceCar_SetFlags(uVar4,8);
    RaceCar_SetFlags(uVar4,0x10);
  }
  iVar6 = (int)lVar2;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x10) != 0) && (0 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6);
    RaceCar_SetFlags(uVar4,8);
    RaceCar_SetFlags(uVar4,0x10);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x20) != 0) && (1 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6 + 1);
    RaceCar_SetFlags(uVar4,8);
    RaceCar_SetFlags(uVar4,0x10);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x40) != 0) && (2 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6 + 2);
    RaceCar_SetFlags(uVar4,8);
    RaceCar_SetFlags(uVar4,0x10);
  }
  return;
}

// 0x001db000  size 0x1dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_CheckTimeAttack(char param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = GameState_GetPlayerCount();
  lVar2 = GameState_GetRivalCount();
  lVar3 = GameState_GetTrafficCount();
  iVar5 = param_1 * 4;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 1) != 0) && (0 < lVar1)) {
    uVar4 = RaceCar_Get(0);
    RaceCar_ClearFlags(uVar4,2);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 2) != 0) && (1 < lVar1)) {
    uVar4 = RaceCar_Get(1);
    RaceCar_ClearFlags(uVar4,2);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 4) != 0) && (0 < lVar2)) {
    uVar4 = RaceCar_Get(lVar1);
    RaceCar_ClearFlags(uVar4,2);
  }
  iVar7 = (int)lVar1;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 8) != 0) && (1 < lVar2)) {
    uVar4 = RaceCar_Get(iVar7 + 1);
    RaceCar_ClearFlags(uVar4,2);
  }
  iVar6 = (int)lVar2;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x10) != 0) && (0 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6);
    RaceCar_ClearFlags(uVar4,2);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x20) != 0) && (1 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6 + 1);
    RaceCar_ClearFlags(uVar4,2);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x40) != 0) && (2 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6 + 2);
    RaceCar_ClearFlags(uVar4,2);
  }
  return;
}

// 0x001db1e0  size 0x254
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_CheckBattle(char param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = GameState_GetPlayerCount();
  lVar2 = GameState_GetRivalCount();
  lVar3 = GameState_GetTrafficCount();
  iVar5 = param_1 * 4;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 1) != 0) && (0 < lVar1)) {
    uVar4 = RaceCar_Get(0);
    RaceCar_ClearFlags(uVar4,1);
    RaceCar_SetFlags(uVar4,0x200);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 2) != 0) && (1 < lVar1)) {
    uVar4 = RaceCar_Get(1);
    RaceCar_ClearFlags(uVar4,1);
    RaceCar_SetFlags(uVar4,0x200);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 4) != 0) && (0 < lVar2)) {
    uVar4 = RaceCar_Get(lVar1);
    RaceCar_ClearFlags(uVar4,1);
    RaceCar_SetFlags(uVar4,0x200);
  }
  iVar7 = (int)lVar1;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 8) != 0) && (1 < lVar2)) {
    uVar4 = RaceCar_Get(iVar7 + 1);
    RaceCar_ClearFlags(uVar4,1);
    RaceCar_SetFlags(uVar4,0x200);
  }
  iVar6 = (int)lVar2;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x10) != 0) && (0 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6);
    RaceCar_ClearFlags(uVar4,1);
    RaceCar_SetFlags(uVar4,0x200);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x20) != 0) && (1 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6 + 1);
    RaceCar_ClearFlags(uVar4,1);
    RaceCar_SetFlags(uVar4,0x200);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x40) != 0) && (2 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6 + 2);
    RaceCar_ClearFlags(uVar4,1);
    RaceCar_SetFlags(uVar4,0x200);
  }
  return;
}

// 0x001db440  size 0x28c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_CheckSpBattle(char param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = GameState_GetPlayerCount();
  lVar2 = GameState_GetRivalCount();
  lVar3 = GameState_GetTrafficCount();
  iVar6 = param_1 * 4;
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 1) != 0) && (0 < lVar1)) {
    uVar4 = RaceCar_Get(0);
    RaceCar_ClearFlags(uVar4,0xa01);
    RaceCar_SetFlags(uVar4,2);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 2) != 0) && (1 < lVar1)) {
    uVar4 = RaceCar_Get(1);
    RaceCar_ClearFlags(uVar4,0xa01);
    RaceCar_SetFlags(uVar4,2);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 4) != 0) && (0 < lVar2)) {
    uVar4 = RaceCar_Get(lVar1);
    RaceCar_ClearFlags(uVar4,0xa01);
    RaceCar_SetFlags(uVar4,2);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  iVar5 = (int)lVar1;
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 8) != 0) && (1 < lVar2)) {
    uVar4 = RaceCar_Get(iVar5 + 1);
    RaceCar_ClearFlags(uVar4,0xa01);
    RaceCar_SetFlags(uVar4,2);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  iVar7 = (int)lVar2;
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 0x10) != 0) && (0 < lVar3)) {
    uVar4 = RaceCar_Get(iVar5 + iVar7);
    RaceCar_ClearFlags(uVar4,0xa01);
    RaceCar_SetFlags(uVar4,2);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 0x20) != 0) && (1 < lVar3)) {
    uVar4 = RaceCar_Get(iVar5 + iVar7 + 1);
    RaceCar_ClearFlags(uVar4,0xa01);
    RaceCar_SetFlags(uVar4,2);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 0x40) != 0) && (2 < lVar3)) {
    uVar4 = RaceCar_Get(iVar5 + iVar7 + 2);
    RaceCar_ClearFlags(uVar4,0xa01);
    RaceCar_SetFlags(uVar4,2);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  return;
}

// 0x001db6d0  size 0x254
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_CheckTeamBattle(char param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = GameState_GetPlayerCount();
  lVar2 = GameState_GetRivalCount();
  lVar3 = GameState_GetTrafficCount();
  iVar5 = param_1 * 4;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 1) != 0) && (0 < lVar1)) {
    uVar4 = RaceCar_Get(0);
    RaceCar_ClearFlags(uVar4,3);
    RaceCar_SetFlags(uVar4,0x800);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 2) != 0) && (1 < lVar1)) {
    uVar4 = RaceCar_Get(1);
    RaceCar_ClearFlags(uVar4,3);
    RaceCar_SetFlags(uVar4,0x800);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 4) != 0) && (0 < lVar2)) {
    uVar4 = RaceCar_Get(lVar1);
    RaceCar_ClearFlags(uVar4,3);
    RaceCar_SetFlags(uVar4,0x800);
  }
  iVar7 = (int)lVar1;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 8) != 0) && (1 < lVar2)) {
    uVar4 = RaceCar_Get(iVar7 + 1);
    RaceCar_ClearFlags(uVar4,3);
    RaceCar_SetFlags(uVar4,0x800);
  }
  iVar6 = (int)lVar2;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x10) != 0) && (0 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6);
    RaceCar_ClearFlags(uVar4,3);
    RaceCar_SetFlags(uVar4,0x800);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x20) != 0) && (1 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6 + 1);
    RaceCar_ClearFlags(uVar4,3);
    RaceCar_SetFlags(uVar4,0x800);
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x40) != 0) && (2 < lVar3)) {
    uVar4 = RaceCar_Get(iVar7 + iVar6 + 2);
    RaceCar_ClearFlags(uVar4,3);
    RaceCar_SetFlags(uVar4,0x800);
  }
  return;
}

// 0x001db930  size 0x28c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_CheckDrift(char param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = GameState_GetPlayerCount();
  lVar2 = GameState_GetRivalCount();
  lVar3 = GameState_GetTrafficCount();
  iVar6 = param_1 * 4;
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 1) != 0) && (0 < lVar1)) {
    uVar4 = RaceCar_Get(0);
    RaceCar_ClearFlags(uVar4,0x802);
    RaceCar_SetFlags(uVar4,1);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 2) != 0) && (1 < lVar1)) {
    uVar4 = RaceCar_Get(1);
    RaceCar_ClearFlags(uVar4,0x802);
    RaceCar_SetFlags(uVar4,1);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 4) != 0) && (0 < lVar2)) {
    uVar4 = RaceCar_Get(lVar1);
    RaceCar_ClearFlags(uVar4,0x802);
    RaceCar_SetFlags(uVar4,1);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  iVar5 = (int)lVar1;
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 8) != 0) && (1 < lVar2)) {
    uVar4 = RaceCar_Get(iVar5 + 1);
    RaceCar_ClearFlags(uVar4,0x802);
    RaceCar_SetFlags(uVar4,1);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  iVar7 = (int)lVar2;
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 0x10) != 0) && (0 < lVar3)) {
    uVar4 = RaceCar_Get(iVar5 + iVar7);
    RaceCar_ClearFlags(uVar4,0x802);
    RaceCar_SetFlags(uVar4,1);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 0x20) != 0) && (1 < lVar3)) {
    uVar4 = RaceCar_Get(iVar5 + iVar7 + 1);
    RaceCar_ClearFlags(uVar4,0x802);
    RaceCar_SetFlags(uVar4,1);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  if (((*(uint *)(iVar6 + _g_RaceScene + 4) & 0x40) != 0) && (2 < lVar3)) {
    uVar4 = RaceCar_Get(iVar5 + iVar7 + 2);
    RaceCar_ClearFlags(uVar4,0x802);
    RaceCar_SetFlags(uVar4,1);
    *(undefined1 *)((int)uVar4 + 0x890) = 1;
  }
  return;
}

// 0x001dbbc0  size 0x344
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_CheckFreeRun(char param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = GameState_GetPlayerCount();
  lVar2 = GameState_GetRivalCount();
  lVar3 = GameState_GetTrafficCount();
  iVar5 = param_1 * 4;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 1) != 0) && (0 < lVar1)) {
    uVar4 = RaceCar_Get(0);
    RaceCar_ClearFlags(uVar4,0x803);
    if (*(char *)((int)uVar4 + 0x890) == '\x01') {
      *(undefined1 *)((int)uVar4 + 0x890) = 0;
    }
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 2) != 0) && (1 < lVar1)) {
    uVar4 = RaceCar_Get(1);
    RaceCar_ClearFlags(uVar4,0x803);
    if (*(char *)((int)uVar4 + 0x890) == '\x01') {
      *(undefined1 *)((int)uVar4 + 0x890) = 0;
    }
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 4) != 0) && (0 < lVar2)) {
    uVar4 = RaceCar_Get(lVar1);
    RaceCar_ClearFlags(uVar4,0x803);
    iVar6 = (int)uVar4;
    if ((*(char *)(iVar6 + 0x811) == '\0') && (*(int *)(iVar6 + 0x814) == 0)) {
      Car_RequestShiftUp(uVar4);
    }
    if (*(char *)(iVar6 + 0x890) == '\x01') {
      *(undefined1 *)(iVar6 + 0x890) = 0;
    }
  }
  iVar6 = (int)lVar1;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 8) != 0) && (1 < lVar2)) {
    uVar4 = RaceCar_Get(iVar6 + 1);
    RaceCar_ClearFlags(uVar4,0x803);
    iVar7 = (int)uVar4;
    if (*(char *)(iVar7 + 0x890) == '\x01') {
      *(undefined1 *)(iVar7 + 0x890) = 0;
    }
    if ((*(char *)(iVar7 + 0x811) == '\0') && (*(int *)(iVar7 + 0x814) == 0)) {
      Car_RequestShiftUp(uVar4);
    }
  }
  iVar7 = (int)lVar2;
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x10) != 0) && (0 < lVar3)) {
    uVar4 = RaceCar_Get(iVar6 + iVar7);
    RaceCar_ClearFlags(uVar4,0x803);
    iVar8 = (int)uVar4;
    if (*(char *)(iVar8 + 0x890) == '\x01') {
      *(undefined1 *)(iVar8 + 0x890) = 0;
    }
    if ((*(char *)(iVar8 + 0x811) == '\0') && (*(int *)(iVar8 + 0x814) == 0)) {
      Car_RequestShiftUp(uVar4);
    }
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x20) != 0) && (1 < lVar3)) {
    uVar4 = RaceCar_Get(iVar6 + iVar7 + 1);
    RaceCar_ClearFlags(uVar4,0x803);
    iVar8 = (int)uVar4;
    if (*(char *)(iVar8 + 0x890) == '\x01') {
      *(undefined1 *)(iVar8 + 0x890) = 0;
    }
    if ((*(char *)(iVar8 + 0x811) == '\0') && (*(int *)(iVar8 + 0x814) == 0)) {
      Car_RequestShiftUp(uVar4);
    }
  }
  if (((*(uint *)(iVar5 + _g_RaceScene + 4) & 0x40) != 0) && (2 < lVar3)) {
    uVar4 = RaceCar_Get(iVar6 + iVar7 + 2);
    RaceCar_ClearFlags(uVar4,0x803);
    iVar5 = (int)uVar4;
    if (*(char *)(iVar5 + 0x890) == '\x01') {
      *(undefined1 *)(iVar5 + 0x890) = 0;
    }
    if ((*(char *)(iVar5 + 0x811) == '\0') && (*(int *)(iVar5 + 0x814) == 0)) {
      Car_RequestShiftUp(uVar4);
    }
  }
  return;
}

// 0x001dbf40  size 0x94
void race_step_sub_001dbf40(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = GameState_GetRacerCount();
  uVar3 = Race_GetModeFlags();
  uVar4 = GameState_Get_398();
  RaceRule_Alloc(uVar2,uVar3,0x430750,uVar4);
  cVar1 = RaceCtx_GetMode();
  if (cVar1 == '\x06') {
    *(undefined4 *)(param_1 + 0x1c) = 0x1dbf10;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 0x1dbf20;
  }
  return;
}

// 0x001dbfe0  size 0x128
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_Finish(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  
  uVar1 = _g_RaceProg[0x10];
  if ((*_g_RaceProg & 0x410) == 0) {
    if (_g_RaceProg[0xd] == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = SpGauge_GetValue();
      iVar9 = (int)(float)iVar9;
    }
    uVar8 = Password_EncodeFields(iVar9,*(undefined4 *)(uVar1 + 0x4b8));
    if (uVar8 < 6) {
                    /* WARNING: Could not recover jumptable at 0x001dc074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_LAB_003641c0)[(int)uVar8])();
      return;
    }
    if (uVar8 != 5) {
      uVar2 = Profile_Get(0);
      uVar3 = GameState_Get_3a4();
      uVar4 = GameState_Get_3ac();
      uVar5 = Race_GetCourseVariant();
      uVar6 = GameState_Get_3a8();
      lVar7 = Password_ApplyRewards(uVar2,uVar8,uVar3,uVar4,uVar5,uVar6);
      if (lVar7 != 0) {
        *_g_RaceProg = *_g_RaceProg | 0x20000;
      }
    }
  }
  return;
}

