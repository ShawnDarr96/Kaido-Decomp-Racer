// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001d0000 - 0x001d4000
#include "ghidra_types.h"

// 0x001d15a0  size 0x644
void FUN_001d15a0(int param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  short sVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  
  pcVar5 = (char *)FUN_001d2210(param_2);
  fVar10 = (float)FUN_00120da8(((float)(int)pcVar5[2] / 2.0) /
                               (*(float *)(param_1 + 0x1b4) * 2.0 * 1000.0));
  *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) + (fVar10 * 180.0) / 3.1415927;
  fVar10 = (float)FUN_00120da8(((float)(int)pcVar5[3] / 2.0) /
                               (*(float *)(param_1 + 0x2c4) * 2.0 * 1000.0));
  *(float *)(param_1 + 0x360) = *(float *)(param_1 + 0x360) + (fVar10 * 180.0) / 3.1415927;
  *(float *)(param_1 + 0x24c) = (float)(int)pcVar5[4] * 0.5 + *(float *)(param_1 + 0x24c) + 0.0;
  *(float *)(param_1 + 0x35c) = (float)(int)pcVar5[5] * 0.5 + *(float *)(param_1 + 0x35c) + 0.0;
  *(float *)(param_1 + 0x6e8) = *(float *)(param_1 + 0x6e8) * ((float)(int)pcVar5[6] * 0.1 + 1.0);
  *(float *)(param_1 + 0x6fc) = *(float *)(param_1 + 0x6fc) * ((float)(int)pcVar5[7] * 0.1 + 1.0);
  *(float *)(param_1 + 0x6ec) = *(float *)(param_1 + 0x6ec) * ((float)(int)pcVar5[8] * 0.1 + 1.0);
  *(float *)(param_1 + 0x6f0) = *(float *)(param_1 + 0x6f0) * ((float)(int)pcVar5[8] * 0.1 + 1.0);
  if (1.0 < *(float *)(param_1 + 0x6ec)) {
    *(undefined4 *)(param_1 + 0x6ec) = 0x3f800000;
  }
  if (1.0 < *(float *)(param_1 + 0x6f0)) {
    *(undefined4 *)(param_1 + 0x6f0) = 0x3f800000;
  }
  *(float *)(param_1 + 0x700) = *(float *)(param_1 + 0x700) * ((float)(int)pcVar5[9] * 0.1 + 1.0);
  *(float *)(param_1 + 0x704) = *(float *)(param_1 + 0x704) * ((float)(int)pcVar5[9] * 0.1 + 1.0);
  if (1.0 < *(float *)(param_1 + 0x700)) {
    *(undefined4 *)(param_1 + 0x700) = 0x3f800000;
  }
  if (1.0 < *(float *)(param_1 + 0x704)) {
    *(undefined4 *)(param_1 + 0x704) = 0x3f800000;
  }
  *(float *)(param_1 + 0x6f4) = *(float *)(param_1 + 0x6f4) * ((float)(int)pcVar5[10] * 0.1 + 1.0);
  *(float *)(param_1 + 0x708) = *(float *)(param_1 + 0x708) * ((float)(int)pcVar5[0xb] * 0.1 + 1.0);
  cVar1 = pcVar5[0xc];
  *(float *)(param_1 + 0x6f8) = *(float *)(param_1 + 0x6f8) - (float)(int)cVar1 * 0.005;
  cVar2 = pcVar5[0xd];
  *(float *)(param_1 + 0x70c) = *(float *)(param_1 + 0x70c) - (float)(int)cVar2 * 0.005;
  *(float *)(param_1 + 0x84) =
       ((float)(int)cVar1 * 0.005 + (float)(int)cVar2 * 0.005) * 0.5 +
       *(float *)(param_1 + 0x84) + 0.0;
  *(float *)(param_1 + 0x168) = -(float)(int)pcVar5[0xe] / 100.0 + 0.5;
  if ((pcVar5[0xf] != -1) &&
     (*(float *)(param_1 + 0xe4) = 1.0 - (float)(int)pcVar5[0xf] / 20.0,
     *(int *)(param_1 + 0xe0) == 1)) {
    fVar10 = (float)(int)pcVar5[0xf];
    if (fVar10 < 0.0) {
      fVar10 = -fVar10;
    }
    *(float *)(param_1 + 0x134) = fVar10 * 0.1 + 1.0;
  }
  if (*(float *)(pcVar5 + 0x1c) != 0.0) {
    iVar9 = 0;
    uVar8 = 1;
    pcVar3 = pcVar5;
    iVar7 = param_1;
    do {
      *(undefined4 *)(iVar7 + 0x5c8) = *(undefined4 *)(pcVar3 + 0x1c);
      if (0.0 < *(float *)(pcVar3 + 0x1c)) {
        iVar9 = iVar9 + 1;
      }
      uVar8 = uVar8 + 1;
      pcVar3 = pcVar3 + 4;
      iVar7 = iVar7 + 4;
    } while (uVar8 < 9);
    *(int *)(param_1 + 0x524) = iVar9;
    *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(pcVar5 + 0x18);
  }
  lVar6 = FUN_001d2280(param_2,7);
  sVar4 = FUN_001d2240(param_2,7);
  if (0 < lVar6) {
    fVar10 = 1.0;
    if (sVar4 == 0x67) {
      fVar10 = 0.0;
      iVar7 = *(int *)(param_1 + 0xdc);
    }
    else {
      if (sVar4 == 0x6b) {
        fVar10 = 0.5;
      }
      iVar7 = *(int *)(param_1 + 0xdc);
    }
    if (iVar7 != 1) {
      *(float *)(param_1 + 0x28c) = (float)(*pcVar5 * 5 + 0x62);
      *(float *)(param_1 + 0x284) = (float)(pcVar5[0x10] + 5) * 0.1;
      *(float *)(param_1 + 0x288) = (float)(pcVar5[0x11] + 5) * 0.1 * fVar10;
    }
    if (*(int *)(param_1 + 0xdc) != 0) {
      *(float *)(param_1 + 0x39c) = (float)(pcVar5[1] * 5 + 0x62);
      *(float *)(param_1 + 0x394) = (float)(pcVar5[0x12] + 5) * 0.1;
      *(float *)(param_1 + 0x398) = (float)(pcVar5[0x13] + 5) * 0.1 * fVar10;
    }
  }
  fVar10 = (*(float *)(param_1 + 0x16c) * 0.75) / 6.0;
  *(float *)(param_1 + 0x16c) = fVar10;
  *(float *)(param_1 + 0x170) = fVar10 / 1.2;
  *(float *)(param_1 + 0x174) = (float)(int)pcVar5[0x15] * 2.5 + *(float *)(param_1 + 0x174) + 0.0;
  return;
}

// 0x001d1bf0  size 0x4f4
undefined8 FUN_001d1bf0(int *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_d20 [12];
  undefined1 auStack_d14 [12];
  undefined1 auStack_d08 [12];
  float fStack_cfc;
  float fStack_b60;
  float fStack_a50;
  float fStack_7f8;
  float afStack_7e4 [32];
  float fStack_764;
  undefined1 auStack_5b0 [48];
  uint uStack_580;
  int iStack_564;
  float fStack_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  int iStack_524;
  float fStack_194;
  float fStack_140;
  int iStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_58;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  FUN_001705e0(auStack_d20);
  iVar4 = (int)param_2;
  iStack_70 = (int)*(short *)(iVar4 + 0xc);
  FUN_00175e10(auStack_5b0,param_2);
  FUN_001ceef0(auStack_5b0,auStack_d20,param_2,1);
  uStack_4 = *(undefined2 *)(iVar4 + 0x70);
  uStack_2 = *(undefined2 *)(iVar4 + 0x72);
  lVar1 = FUN_001d3540(uStack_4);
  if (lVar1 == 0) {
    uStack_8 = *(undefined2 *)(iVar4 + 0x78);
    uStack_6 = *(undefined2 *)(iVar4 + 0x7a);
    lVar1 = FUN_001d3540(uStack_8);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_c = *(undefined2 *)(iVar4 + 0x80);
    uStack_a = *(undefined2 *)(iVar4 + 0x82);
    lVar1 = FUN_001d3540(uStack_c);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_10 = *(undefined2 *)(iVar4 + 0x74);
    uStack_e = *(undefined2 *)(iVar4 + 0x76);
    lVar1 = FUN_001d3540(uStack_10);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_14 = *(undefined2 *)(iVar4 + 0x84);
    uStack_12 = *(undefined2 *)(iVar4 + 0x86);
    lVar1 = FUN_001d3540(uStack_14);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_18 = *(undefined2 *)(iVar4 + 0x88);
    uStack_16 = *(undefined2 *)(iVar4 + 0x8a);
    lVar1 = FUN_001d3540(uStack_18);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_1c = *(undefined2 *)(iVar4 + 0x90);
    uStack_1a = *(undefined2 *)(iVar4 + 0x92);
    lVar1 = FUN_001d3540(uStack_1c);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_20 = *(undefined2 *)(iVar4 + 0x94);
    uStack_1e = *(undefined2 *)(iVar4 + 0x96);
    lVar1 = FUN_001d3540(uStack_20);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_24 = *(undefined2 *)(iVar4 + 0x98);
    uStack_22 = *(undefined2 *)(iVar4 + 0x9a);
    lVar1 = FUN_001d3540(uStack_24);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_28 = *(undefined2 *)(iVar4 + 0x9c);
    uStack_26 = *(undefined2 *)(iVar4 + 0x9e);
    lVar1 = FUN_001d3540(uStack_28);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_2c = *(undefined2 *)(iVar4 + 0xb8);
    uStack_2a = *(undefined2 *)(iVar4 + 0xba);
    lVar1 = FUN_001d3540(uStack_2c);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_30 = *(undefined2 *)(iVar4 + 0xb4);
    uStack_2e = *(undefined2 *)(iVar4 + 0xb6);
    lVar1 = FUN_001d3540(uStack_30);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_34 = *(undefined2 *)(iVar4 + 0xac);
    uStack_32 = *(undefined2 *)(iVar4 + 0xae);
    lVar1 = FUN_001d3540(uStack_34);
    if (lVar1 != 0) goto LAB_001d1c5c;
    uStack_38 = *(undefined2 *)(iVar4 + 0xb0);
    uStack_36 = *(undefined2 *)(iVar4 + 0xb2);
    lVar1 = FUN_001d3540(uStack_38);
    if ((lVar1 != 0) || (*(char *)(iVar4 + 0xc4) != '\0')) goto LAB_001d1c5c;
LAB_001d1cd8:
    fStack_5c = (float)uStack_580;
  }
  else {
LAB_001d1c5c:
    if (iStack_524 == 2) goto LAB_001d1cd8;
    fStack_5c = ((fStack_a50 + (fStack_b60 - ((fStack_194 - 13.0) * 0.25 + 6.0))) -
                ((fStack_140 - 13.0) * 0.25 + 6.0)) * 2.0 + fStack_cfc + 0.0;
  }
  uStack_3c = *(undefined2 *)(iVar4 + 0x70);
  uStack_3a = *(undefined2 *)(iVar4 + 0x72);
  iStack_58 = iStack_564;
  lVar1 = FUN_001d3540(uStack_3c);
  if (lVar1 == 0) {
    uStack_40 = *(undefined2 *)(iVar4 + 0x78);
    uStack_3e = *(undefined2 *)(iVar4 + 0x7a);
    lVar1 = FUN_001d3540(uStack_40);
    if (lVar1 == 0) {
      uStack_44 = *(undefined2 *)(iVar4 + 0x7c);
      uStack_42 = *(undefined2 *)(iVar4 + 0x7e);
      lVar1 = FUN_001d3540(uStack_44);
      if (lVar1 == 0) {
        uStack_48 = *(undefined2 *)(iVar4 + 0x80);
        uStack_46 = *(undefined2 *)(iVar4 + 0x82);
        lVar1 = FUN_001d3540(uStack_48);
        if (lVar1 == 0) {
          uStack_4c = *(undefined2 *)(iVar4 + 0x74);
          uStack_4a = *(undefined2 *)(iVar4 + 0x76);
          lVar1 = FUN_001d3540(uStack_4c);
          if (lVar1 == 0) {
            fStack_6c = fStack_560;
            fStack_68 = fStack_55c;
            fStack_64 = fStack_558;
            fStack_60 = fStack_554;
            goto LAB_001d1e08;
          }
        }
      }
    }
  }
  uVar3 = 0;
  fStack_6c = 0.0;
  puVar2 = auStack_d20;
  fStack_60 = 0.0;
  fStack_68 = 0.0;
  do {
    fVar6 = (float)(int)(uVar3 + 1);
    fVar5 = ((fStack_764 * *(float *)(puVar2 + 0x53c)) / 9.8) * ((fVar6 * fStack_7f8) / 32.0) *
            0.0013962635;
    if (*(float *)(puVar2 + 0x53c) == 1.0) {
      fStack_60 = fVar6 * (fStack_7f8 / 32.0);
    }
    if (fStack_6c < fVar5) {
      fStack_68 = (float)(int)(uVar3 + 1) * (fStack_7f8 / 32.0);
      fStack_6c = fVar5;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 0x20);
  fStack_64 = fStack_764 / 9.8;
LAB_001d1e08:
  *param_1 = iStack_70;
  param_1[1] = (int)fStack_6c;
  param_1[2] = (int)fStack_68;
  param_1[3] = (int)fStack_64;
  param_1[4] = (int)fStack_60;
  param_1[5] = (int)fStack_5c;
  param_1[6] = iStack_58;
  FUN_00107050(auStack_d08,0xffffffffffffffff);
  FUN_00107050(auStack_d14,0xffffffffffffffff);
  FUN_00107050(auStack_d20,0xffffffffffffffff);
  return 0;
}

// 0x001d20f0  size 0x8
undefined2 FUN_001d20f0(undefined2 *param_1)

{
  return *param_1;
}

// 0x001d2100  size 0x18
void FUN_001d2100(undefined2 *param_1)

{
  *param_1 = 0xffff;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  return;
}

// 0x001d2120  size 0xc
void FUN_001d2120(undefined2 *param_1)

{
  *param_1 = 0xffff;
  return;
}

// 0x001d2130  size 0x8
undefined2 FUN_001d2130(undefined2 *param_1)

{
  return *param_1;
}

// 0x001d2140  size 0x8
void FUN_001d2140(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  return;
}

// 0x001d2150  size 0x10
void FUN_001d2150(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0x1f;
  return;
}

// 0x001d2160  size 0x14
void FUN_001d2160(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined1 *)(param_1 + 1) = 0x20;
  return;
}

// 0x001d2180  size 0x8
void FUN_001d2180(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

// 0x001d2190  size 0x68
void FUN_001d2190(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar2 = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  puVar1 = param_1;
  do {
    *(undefined2 *)(puVar1 + 0x50) = 0xffff;
    iVar2 = iVar2 + 8;
    *(undefined2 *)(puVar1 + 0x52) = 0xffff;
    *(undefined2 *)(puVar1 + 0x54) = 0xffff;
    *(undefined2 *)(puVar1 + 0x56) = 0xffff;
    *(undefined2 *)(puVar1 + 0x58) = 0xffff;
    *(undefined2 *)(puVar1 + 0x5a) = 0xffff;
    *(undefined2 *)(puVar1 + 0x5c) = 0xffff;
    *(undefined2 *)(puVar1 + 0x5e) = 0xffff;
    puVar1 = puVar1 + 0x10;
  } while (iVar2 < 0x10);
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}

// 0x001d2200  size 0x10
undefined1 FUN_001d2200(int param_1,uint param_2)

{
  return *(undefined1 *)((param_2 & 0xff) + param_1 + 0x14);
}

// 0x001d2210  size 0x8
int FUN_001d2210(int param_1)

{
  return param_1 + 0x14;
}

// 0x001d2220  size 0x14
int FUN_001d2220(int param_1,uint param_2)

{
  return param_1 + (param_2 & 0xff) * 4 + 0x70;
}

// 0x001d2240  size 0x38
void FUN_001d2240(int param_1,uint param_2)

{
  FUN_001d3970(*(undefined2 *)((param_2 & 0xff) * 4 + param_1 + 0x70));
  return;
}

// 0x001d2280  size 0x38
void FUN_001d2280(int param_1,uint param_2)

{
  FUN_001d3540(*(undefined2 *)((param_2 & 0xff) * 4 + param_1 + 0x70));
  return;
}

// 0x001d22c0  size 0xd4
void FUN_001d22c0(int param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  iVar2 = param_1;
  do {
    *(undefined2 *)(iVar2 + 0x3c) = 0xffff;
    iVar3 = iVar3 + 8;
    *(undefined2 *)(iVar2 + 0x3e) = 0xffff;
    *(undefined2 *)(iVar2 + 0x40) = 0xffff;
    *(undefined2 *)(iVar2 + 0x42) = 0xffff;
    *(undefined2 *)(iVar2 + 0x44) = 0xffff;
    *(undefined2 *)(iVar2 + 0x46) = 0xffff;
    *(undefined2 *)(iVar2 + 0x48) = 0xffff;
    *(undefined2 *)(iVar2 + 0x4a) = 0xffff;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x10);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if ((short)param_2 != -1) {
    FUN_001d4240(param_1,param_2);
    uVar4 = 0;
    iVar2 = param_1;
    do {
      uVar1 = FUN_001d4010(param_2,uVar4 & 0xff,0xffffffffffffffff);
      *(undefined2 *)(iVar2 + 0x5c) = uVar1;
      *(undefined1 *)(iVar2 + 0x5e) = 0x1f;
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 4;
    } while ((int)uVar4 < 0x15);
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  return;
}

// 0x001d23a0  size 0x14
int FUN_001d23a0(int param_1,uint param_2)

{
  return param_1 + (param_2 & 0xff) * 4 + 0x5c;
}

// 0x001d23c0  size 0x38
void FUN_001d23c0(int param_1,uint param_2)

{
  FUN_001d3540(*(undefined2 *)((param_2 & 0xff) * 4 + param_1 + 0x5c));
  return;
}

// 0x001d2410  size 0x80
void FUN_001d2410(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = param_1;
  do {
    uVar1 = FUN_001d4010(param_2,uVar3 & 0xff,param_3);
    *(undefined2 *)(iVar2 + 0x5c) = uVar1;
    *(undefined1 *)(iVar2 + 0x5e) = 0x1f;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
  } while ((int)uVar3 < 0x15);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}

// 0x001d2490  size 0x960
void FUN_001d2490(short *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  char cVar15;
  uint uVar16;
  short *psVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  undefined1 uVar21;
  float fVar22;
  int aiStack_250 [4];
  short asStack_240 [288];
  
  bVar1 = false;
  iVar20 = 0;
  bVar3 = false;
  bVar2 = false;
  uVar12 = FUN_001c1890(0);
  sVar4 = FUN_001c1730(uVar12);
  sVar5 = DAT_00319280;
  uVar21 = (undefined1)DAT_00319284;
  uVar12 = FUN_001c1890(0);
  uVar13 = FUN_001bdd00(uVar12);
  if ((uVar13 & 0x200000) == 0) {
    uVar12 = FUN_001c1890(0);
    lVar14 = FUN_001c0ed0(uVar12,6);
    psVar17 = (short *)PTR_DAT_003197f0;
    if (lVar14 == 0) {
      uVar12 = FUN_001c1890(0);
      lVar14 = FUN_001c0ed0(uVar12,7);
      if (lVar14 == 0) {
        uVar12 = FUN_001c1890(0);
        lVar14 = FUN_001c0ed0(uVar12,4);
        if (lVar14 == 0) {
          uVar12 = FUN_001c1890(0);
          lVar14 = FUN_001c0ed0(uVar12,2);
          if (lVar14 == 0) {
            uVar12 = FUN_001c1890(0);
            lVar14 = FUN_001c0ed0(uVar12,3);
            if (lVar14 == 0) {
              uVar12 = FUN_001c1890(0);
              lVar14 = FUN_001c0ed0(uVar12,0);
              if (lVar14 == 0) {
                uVar12 = FUN_001c1890(0);
                lVar14 = FUN_001c0ed0(uVar12,5);
                psVar17 = (short *)PTR_DAT_003197e0;
                if (lVar14 == 0) {
                  uVar7 = FUN_00133940();
                  uVar19 = uVar7 & 1;
                  if (((int)uVar7 < 0) && (uVar19 != 0)) {
                    uVar19 = uVar19 - 2;
                  }
                  goto LAB_001d2524;
                }
              }
              psVar17 = (short *)PTR_DAT_003197e4;
              uVar7 = FUN_00133940();
              uVar19 = uVar7 & 1;
              if (((int)uVar7 < 0) && (uVar19 != 0)) {
                uVar19 = uVar19 - 2;
              }
              goto LAB_001d2524;
            }
          }
          psVar17 = (short *)PTR_DAT_003197e8;
          iVar11 = FUN_00133940();
          uVar19 = iVar11 % 3;
          goto LAB_001d2524;
        }
      }
      psVar17 = (short *)PTR_DAT_003197ec;
      iVar11 = FUN_00133940();
      uVar19 = iVar11 % 3 + 1;
    }
    else {
      uVar13 = FUN_00133940();
      iVar11 = (int)(uVar13 & 1);
      if (((long)uVar13 < 0) && ((uVar13 & 1) != 0)) {
        iVar11 = iVar11 + -2;
      }
      uVar19 = iVar11 + 2;
    }
  }
  else {
    uVar19 = 3;
    psVar17 = (short *)PTR_DAT_003197f4;
  }
LAB_001d2524:
  if (psVar17 != (short *)0x0) {
    while( true ) {
      sVar5 = *psVar17;
      uVar21 = (undefined1)psVar17[2];
      if ((sVar5 == -1) || (param_2 < *(int *)(psVar17 + 4))) goto LAB_001d256c;
      if ((psVar17[1] == sVar4) && (*(int *)(psVar17 + 4) == param_2)) break;
      psVar17 = psVar17 + 6;
    }
    bVar1 = true;
  }
LAB_001d256c:
  if (bVar1) {
    *param_1 = sVar5;
    *(undefined1 *)(param_1 + 0x1e) = uVar21;
  }
  else {
    if ('\0' < (char)param_1[0x1e]) {
      return;
    }
    uVar13 = FUN_00133940();
    cVar15 = (char)(uVar13 & 3);
    if (((long)uVar13 < 0) && ((uVar13 & 3) != 0)) {
      cVar15 = cVar15 + -4;
    }
    *(char *)(param_1 + 0x1e) = cVar15 + '\x01';
    iVar11 = FUN_00133940();
    if (iVar11 % 0x96 == 0) {
      bVar3 = true;
      uVar13 = FUN_00133940();
      cVar15 = (char)(uVar13 & 3);
      if (((long)uVar13 < 0) && ((uVar13 & 3) != 0)) {
        cVar15 = cVar15 + -4;
      }
      *(char *)(param_1 + 0x1e) = cVar15 + '\x04';
    }
    else {
      iVar11 = FUN_00133940();
      if (iVar11 % 300 == 0) {
        bVar2 = true;
      }
    }
    iVar11 = FUN_001c1890(0);
    piVar18 = (int *)(iVar11 + 0x1c70);
    sVar5 = 0;
    iVar11 = 0;
    psVar17 = asStack_240;
    do {
      if ((*piVar18 != 0) && (iVar6 = FUN_00205530(iVar11), *(int *)(iVar6 + 0x88) == 0)) {
        sVar5 = sVar5 + 1;
        *psVar17 = (short)iVar11;
        psVar17 = psVar17 + 1;
      }
      iVar11 = iVar11 + 1;
      piVar18 = piVar18 + 1;
    } while (iVar11 < 0x120);
    iVar11 = FUN_00133940();
    *param_1 = asStack_240[iVar11 % (int)sVar5];
  }
  iVar11 = FUN_00205530(*param_1);
  sVar5 = *param_1;
  if (((sVar5 == 0x11d) || (sVar5 == 0xfb)) || (*(char *)(iVar11 + 0x28) == '\f')) {
    iVar6 = FUN_00133940();
    iVar8 = FUN_00204b50(sVar5);
    param_1[1] = (short)(iVar6 % iVar8);
  }
  else {
    iVar6 = FUN_00133940();
    if (iVar6 % 100 < 0xf) {
      uVar7 = FUN_00133940();
      uVar16 = uVar7 & 1;
      if (((int)uVar7 < 0) && (uVar16 != 0)) {
        uVar16 = uVar16 - 2;
      }
      if (uVar16 == 0) {
        iVar6 = FUN_00133940();
        iVar8 = FUN_00204630();
        param_1[1] = (short)(iVar6 % iVar8) + 0x1e;
      }
      else {
        iVar6 = FUN_00133940();
        iVar8 = FUN_002045b0();
        param_1[1] = (short)(iVar6 % iVar8) + 0x2be;
      }
    }
    else {
      iVar6 = FUN_00204b50(*param_1);
      iVar8 = FUN_00133940();
      param_1[1] = (short)(iVar8 % iVar6);
    }
  }
  iVar6 = FUN_00133940();
  iVar6 = iVar6 % 0x32;
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  iVar8 = FUN_00133940();
  *(float *)(param_1 + 4) = (float)(iVar8 % iVar6);
  iVar6 = FUN_00133940();
  fVar22 = *(float *)(param_1 + 4);
  iVar8 = FUN_00133940();
  uVar7 = 0;
  *(int *)(param_1 + 2) = iVar8 % 100 + ((int)fVar22 / 5) * 4000 + 3000 + (iVar6 % 100) * 0x28;
  psVar17 = param_1;
  do {
    sVar5 = FUN_001d4010(*param_1,uVar7 & 0xff,0xffffffffffffffff);
    uVar7 = uVar7 + 1;
    psVar17[6] = sVar5;
    psVar17 = psVar17 + 1;
  } while ((int)uVar7 < 0x15);
  if (*(char *)(iVar11 + 0x28) != '\x11') {
    if (bVar2) {
      uVar19 = 0;
      psVar17 = param_1;
      do {
        uVar12 = FUN_001c1890(0);
        lVar14 = FUN_001bbdd0(uVar12,psVar17[6]);
        if (0 < lVar14) {
          sVar5 = FUN_001d4010(*param_1,uVar19 & 0xff,0xffffffffffffffff);
          psVar17[6] = sVar5 + (short)lVar14;
          iVar6 = FUN_001ba290(psVar17[6],0);
          iVar20 = iVar20 + iVar6;
        }
        uVar19 = uVar19 + 1;
        psVar17 = psVar17 + 1;
      } while ((int)uVar19 < 0xd);
      iVar6 = FUN_00133940();
      sVar5 = (short)(iVar6 % 0x98) + 0xad;
      param_1[0x14] = sVar5;
      param_1[0x13] = sVar5;
      iVar6 = FUN_001ba290(param_1[0x13],0);
      iVar8 = FUN_001ba290(param_1[0x14],0);
      param_1[0x16] = 0x90;
      param_1[0x15] = 0x90;
      iVar9 = FUN_001ba290(param_1[0x15],0);
      iVar10 = FUN_001ba290(param_1[0x16],0);
      iVar20 = iVar20 + iVar6 + iVar8 + iVar9 + iVar10;
    }
    else {
      FUN_001b0480(0xb,uVar19,aiStack_250);
      iVar6 = 0;
      if (0 < (int)uVar19) {
        piVar18 = aiStack_250;
        do {
          uVar12 = FUN_001c1890(0);
          lVar14 = FUN_001bbdd0(uVar12,param_1[*piVar18 + 6]);
          if (0 < lVar14) {
            iVar8 = FUN_00133940();
            sVar5 = FUN_001d4010(*param_1,(char)*piVar18,0xffffffffffffffff);
            param_1[*piVar18 + 6] = sVar5 + (short)(iVar8 % (int)lVar14) + 1;
            iVar8 = FUN_001ba290(param_1[*piVar18 + 6],0);
            iVar20 = iVar20 + iVar8;
          }
          iVar6 = iVar6 + 1;
          piVar18 = piVar18 + 1;
        } while (iVar6 < (int)uVar19);
      }
      if ((uVar19 == 0) || (uVar19 == 3)) {
        uVar19 = FUN_00133940();
        uVar7 = uVar19 & 1;
        if (((int)uVar19 < 0) && (uVar7 != 0)) {
          uVar7 = uVar7 - 2;
        }
        if (uVar7 != 0) {
          iVar6 = FUN_00133940();
          sVar5 = (short)(iVar6 % 0x98) + 0xad;
          param_1[0x14] = sVar5;
          param_1[0x13] = sVar5;
          iVar6 = FUN_001ba290(param_1[0x13],0);
          iVar8 = FUN_001ba290(param_1[0x14],0);
          iVar20 = iVar20 + iVar6 + iVar8;
        }
      }
    }
  }
  if (bVar2) {
    param_1[0x20] = 1;
    param_1[0x21] = 0;
    iVar20 = 0;
  }
  uVar19 = *(uint *)(iVar11 + 0x84) / 1000;
  if (bVar3) {
    param_1[0x20] = 1;
    param_1[0x21] = 0;
    *(int *)(param_1 + 0x1c) =
         (iVar20 * 0x41) / 100 +
         (int)(uVar19 * (100 - (((int)*(float *)(param_1 + 4) / 5) * 2 + 0x14))) / 100;
  }
  else {
    *(int *)(param_1 + 0x1c) =
         (iVar20 * 0x46) / 100 +
         (int)(uVar19 * (100 - (((int)*(float *)(param_1 + 4) / 5) * 2 + 0x10))) / 100;
  }
  return;
}

// 0x001d2e00  size 0x1cc
void FUN_001d2e00(undefined4 *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  short sStack_d0;
  short sStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [60];
  short asStack_80 [16];
  short sStack_60;
  undefined1 auStack_5e [82];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar3 = 0;
  psVar5 = &sStack_d0;
  sVar1 = *param_2;
  uStack_c8 = param_3;
  sStack_ce = param_2[1];
  uStack_cc = 1;
  sStack_d0 = sVar1;
  uStack_c4 = 0;
  uStack_c0 = 0;
  psVar4 = psVar5;
  do {
    psVar4[0x28] = -1;
    iVar3 = iVar3 + 8;
    psVar4[0x29] = -1;
    psVar4[0x2a] = -1;
    psVar4[0x2b] = -1;
    psVar4[0x2c] = -1;
    psVar4[0x2d] = -1;
    psVar4[0x2e] = -1;
    psVar4[0x2f] = -1;
    psVar4 = psVar4 + 8;
  } while (iVar3 < 0x10);
  uStack_8 = 0;
  uStack_c = 0;
  if (sVar1 != -1) {
    FUN_001d4240(auStack_bc,sVar1);
    uVar6 = 0;
    psVar4 = psVar5;
    do {
      sVar2 = FUN_001d4010(sVar1,uVar6 & 0xff,0xffffffffffffffff);
      psVar4[0x38] = sVar2;
      *(undefined1 *)(psVar4 + 0x39) = 0x1f;
      uVar6 = uVar6 + 1;
      psVar4 = psVar4 + 2;
    } while ((int)uVar6 < 0x15);
    uStack_c = 0;
  }
  iVar3 = 0;
  psVar4 = param_2;
  do {
    iVar3 = iVar3 + 7;
    psVar5[0x38] = psVar4[6];
    *(undefined1 *)(psVar5 + 0x39) = 0x1f;
    psVar5[0x3a] = psVar4[7];
    *(undefined1 *)(psVar5 + 0x3b) = 0x1f;
    psVar5[0x3c] = psVar4[8];
    *(undefined1 *)(psVar5 + 0x3d) = 0x1f;
    psVar5[0x3e] = psVar4[9];
    *(undefined1 *)(psVar5 + 0x3f) = 0x1f;
    psVar5[0x40] = psVar4[10];
    *(undefined1 *)(psVar5 + 0x41) = 0x1f;
    psVar5[0x42] = psVar4[0xb];
    *(undefined1 *)(psVar5 + 0x43) = 0x1f;
    psVar5[0x44] = psVar4[0xc];
    psVar4 = psVar4 + 7;
    *(undefined1 *)(psVar5 + 0x45) = 0x1f;
    psVar5 = psVar5 + 0xe;
  } while (iVar3 < 0x15);
  psVar4 = &sStack_d0;
  iVar3 = 0x33;
  uStack_c4 = *(undefined4 *)(param_2 + 2);
  do {
    iVar3 = iVar3 + -1;
    *param_1 = *(undefined4 *)psVar4;
    psVar4 = psVar4 + 2;
    param_1 = param_1 + 1;
  } while (0 < iVar3);
  return;
}

// 0x001d2fd0  size 0x28
void FUN_001d2fd0(undefined2 *param_1)

{
  *param_1 = 0xffff;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1b] = 0xffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 0x001d3000  size 0x8
undefined1 FUN_001d3000(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc4);
}

// 0x001d3010  size 0x8
undefined2 FUN_001d3010(int param_1)

{
  return *(undefined2 *)(param_1 + 2);
}

// 0x001d3020  size 0xf4
void FUN_001d3020(short *param_1,undefined8 param_2,short param_3,undefined4 param_4,
                 undefined4 param_5)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  
  iVar2 = 0;
  *param_1 = (short)param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 4) = param_5;
  psVar3 = param_1;
  do {
    psVar3[0x28] = -1;
    iVar2 = iVar2 + 8;
    psVar3[0x29] = -1;
    psVar3[0x2a] = -1;
    psVar3[0x2b] = -1;
    psVar3[0x2c] = -1;
    psVar3[0x2d] = -1;
    psVar3[0x2e] = -1;
    psVar3[0x2f] = -1;
    psVar3 = psVar3 + 8;
  } while (iVar2 < 0x10);
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  if ((short)param_2 != -1) {
    FUN_001d4240(param_1 + 10,param_2);
    uVar4 = 0;
    psVar3 = param_1;
    do {
      sVar1 = FUN_001d4010(param_2,uVar4 & 0xff,0xffffffffffffffff);
      psVar3[0x38] = sVar1;
      *(undefined1 *)(psVar3 + 0x39) = 0x1f;
      uVar4 = uVar4 + 1;
      psVar3 = psVar3 + 2;
    } while ((int)uVar4 < 0x15);
    *(undefined1 *)(param_1 + 0x62) = 0;
  }
  return;
}

// 0x001d3120  size 0xc0
void FUN_001d3120(undefined2 *param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar4 = (undefined4 *)(param_1 + 10);
  puVar3 = (undefined4 *)(param_2 + 0x14);
  iVar2 = 0xf;
  *(undefined2 *)(param_2 + 0xc) = *param_1;
  *(undefined2 *)(param_2 + 0xe) = param_1[1];
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 2);
  do {
    iVar2 = iVar2 + -1;
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (0 < iVar2);
  puVar6 = param_1 + 0x28;
  puVar5 = (undefined2 *)(param_2 + 0x50);
  iVar2 = 8;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar6[1];
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 2;
    puVar5[1] = uVar1;
    puVar5 = puVar5 + 2;
  } while (0 < iVar2);
  puVar6 = param_1 + 0x38;
  puVar5 = (undefined2 *)(param_2 + 0x70);
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar6[1];
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 2;
    puVar5[1] = uVar1;
    puVar5 = puVar5 + 2;
  } while (0 < iVar2);
  param_2[0xc4] = *(undefined1 *)(param_1 + 0x62);
  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = 1;
  return;
}

// 0x001d31e0  size 0x2ec
undefined4 FUN_001d31e0(undefined2 *param_1,byte param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  short sStack_44;
  undefined1 uStack_42;
  undefined1 auStack_40 [64];
  
  iVar3 = FUN_00205530(*param_1);
  puVar6 = (undefined4 *)auStack_40;
  puVar7 = (undefined4 *)(iVar3 + 0x44);
  iVar5 = 8;
  do {
    iVar5 = iVar5 + -1;
    uVar4 = puVar7[1];
    *puVar6 = *puVar7;
    puVar6[1] = uVar4;
    puVar7 = puVar7 + 2;
    puVar6 = puVar6 + 2;
  } while (0 < iVar5);
  sStack_44 = (short)param_3;
  bVar1 = false;
  bVar2 = FUN_001d3da0(sStack_44);
  if (bVar2 == 0xd) {
    if (param_2 - 0xd < 2) {
      bVar1 = true;
    }
  }
  else if (bVar2 == 0xf) {
    if (param_2 - 0xf < 2) {
      bVar1 = true;
    }
  }
  else if (bVar2 == param_2) {
    bVar1 = true;
  }
  if (bVar1) {
    if (param_2 == 0) {
      bVar1 = false;
      switch(auStack_40[0]) {
      case 0:
      case 1:
      case 2:
        if ((-1 < sStack_44) && (sStack_44 < 9)) {
          bVar1 = true;
        }
        break;
      case 3:
      case 4:
        if ((0x11 < sStack_44) && (sStack_44 < 0x1b)) {
          bVar1 = true;
        }
        break;
      case 5:
      case 6:
      case 8:
        if ((8 < sStack_44) && (sStack_44 < 0x12)) {
          bVar1 = true;
        }
        break;
      case 7:
        if ((0x1a < sStack_44) && (sStack_44 < 0x24)) {
          bVar1 = true;
        }
      }
      if (!bVar1) {
        return 0;
      }
    }
    else if (param_2 == 2) {
      bVar1 = false;
      switch(auStack_40[0]) {
      case 0:
      case 1:
      case 2:
        if ((0x29 < sStack_44) && (sStack_44 < 0x33)) {
          bVar1 = true;
        }
        break;
      case 3:
      case 4:
        if ((0x3b < sStack_44) && (sStack_44 < 0x45)) {
          bVar1 = true;
        }
        break;
      case 5:
      case 6:
      case 8:
        if ((0x32 < sStack_44) && (sStack_44 < 0x3c)) {
          bVar1 = true;
        }
        break;
      case 7:
        if ((0x44 < sStack_44) && (sStack_44 < 0x4e)) {
          bVar1 = true;
        }
      }
      if (!bVar1) {
        return 0;
      }
    }
    else if (param_2 == 7) {
      bVar1 = true;
      if (((*(char *)(iVar3 + 0x3c) == '\0') && (0x6d < sStack_44)) && (sStack_44 < 0x71)) {
        bVar1 = false;
      }
      if (!bVar1) {
        return 0;
      }
    }
    uStack_42 = (undefined1)((uint)param_3 >> 0x10);
    uVar4 = 1;
    param_1[(uint)param_2 * 2 + 0x38] = sStack_44;
    *(undefined1 *)(param_1 + (uint)param_2 * 2 + 0x39) = uStack_42;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

// 0x001d34d0  size 0x8
int FUN_001d34d0(int param_1)

{
  return param_1 + 0x14;
}

// 0x001d34e0  size 0x10
int FUN_001d34e0(int param_1,int param_2)

{
  return param_1 + param_2 * 2 + 0x50;
}

// 0x001d34f0  size 0x14
int FUN_001d34f0(int param_1,uint param_2)

{
  return param_1 + (param_2 & 0xff) * 4 + 0x70;
}

// 0x001d3510  size 0x24
void FUN_001d3510(undefined2 *param_1)

{
  *param_1 = 0xffff;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0x001d3540  size 0x430
long FUN_001d3540(short param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = (long)param_1;
  lVar1 = 0;
  lVar2 = lVar1;
  if (lVar4 != -1) {
    iVar3 = (int)param_1;
    if ((lVar4 < 0) || (0x23 < lVar4)) {
      if ((lVar4 < 0x24) || (0x29 < lVar4)) {
        if ((lVar4 < 0x2a) || (0x4e < lVar4)) {
          if ((lVar4 < 0x4f) || (0x54 < lVar4)) {
            if ((lVar4 < 0x55) || (0x5a < lVar4)) {
              if ((lVar4 < 0x5b) || (0x60 < lVar4)) {
                if ((lVar4 < 0x61) || (0x66 < lVar4)) {
                  if ((lVar4 < 0x67) || (0x70 < lVar4)) {
                    if ((lVar4 < 0x71) || (0x76 < lVar4)) {
                      if ((lVar4 < 0x77) || (0x7c < lVar4)) {
                        if ((lVar4 < 0x7d) || (0x82 < lVar4)) {
                          if ((lVar4 < 0x83) || (0x88 < lVar4)) {
                            if ((lVar4 < 0x8d) || (0xa1 < lVar4)) {
                              if ((lVar4 < 0xad) || (0x161 < lVar4)) {
                                if ((lVar4 < 0xa2) || (0xa3 < lVar4)) {
                                  if ((lVar4 < 0xa4) || (0xa8 < lVar4)) {
                                    if ((lVar4 < 0xa9) || (0xa9 < lVar4)) {
                                      if ((lVar4 < 0xaa) || (0xac < lVar4)) {
                                        if ((0x88 < lVar4) && (lVar4 < 0x8d)) {
                                          lVar2 = (long)(iVar3 + -0x89);
                                        }
                                      }
                                      else {
                                        lVar2 = (long)(iVar3 + -0xa9);
                                      }
                                    }
                                    else {
                                      lVar2 = (long)(iVar3 + -0xa8);
                                    }
                                  }
                                  else {
                                    lVar2 = (long)(iVar3 + -0xa4);
                                  }
                                }
                                else {
                                  lVar2 = (long)(iVar3 + -0xa2);
                                }
                              }
                              else {
                                lVar2 = (long)(iVar3 + -0xad);
                              }
                            }
                            else if (lVar4 < 0x93) {
                              lVar2 = (long)(iVar3 + -0x8d);
                            }
                            else if ((lVar4 < 0x93) || (0x97 < lVar4)) {
                              if ((lVar4 < 0x98) || (0x9c < lVar4)) {
                                if ((0x9c < lVar4) && (lVar4 < 0xa2)) {
                                  lVar2 = (long)(iVar3 + -0x9c);
                                }
                              }
                              else {
                                lVar2 = (long)(iVar3 + -0x97);
                              }
                            }
                            else {
                              lVar2 = (long)(iVar3 + -0x92);
                            }
                          }
                          else {
                            lVar2 = (long)(iVar3 + -0x83);
                          }
                        }
                        else {
                          lVar2 = (long)(iVar3 + -0x7d);
                        }
                      }
                      else {
                        lVar2 = (long)(iVar3 + -0x77);
                      }
                    }
                    else {
                      lVar2 = (long)(iVar3 + -0x71);
                    }
                  }
                  else if (lVar4 < 0x6b) {
                    lVar2 = (long)(iVar3 + -0x67);
                  }
                  else if ((lVar4 < 0x6b) || (0x6d < lVar4)) {
                    if ((0x6d < lVar4) && (lVar4 < 0x71)) {
                      lVar2 = (long)(iVar3 + -0x6d);
                    }
                  }
                  else {
                    lVar2 = (long)(iVar3 + -0x6a);
                  }
                }
                else {
                  lVar2 = (long)(iVar3 + -0x61);
                }
              }
              else {
                lVar2 = (long)(iVar3 + -0x5b);
              }
            }
            else {
              lVar2 = (long)(iVar3 + -0x55);
            }
          }
          else {
            lVar2 = (long)(iVar3 + -0x4f);
          }
        }
        else if (lVar4 < 0x33) {
          lVar2 = (long)(iVar3 + -0x2a);
        }
        else if ((lVar4 < 0x3c) || (0x44 < lVar4)) {
          if ((lVar4 < 0x33) || (0x3b < lVar4)) {
            if ((0x44 < lVar4) && (lVar4 < 0x4e)) {
              lVar2 = (long)(iVar3 + -0x45);
            }
          }
          else {
            lVar2 = (long)(iVar3 + -0x33);
          }
        }
        else {
          lVar2 = (long)(iVar3 + -0x3c);
        }
      }
      else {
        lVar2 = (long)(iVar3 + -0x24);
      }
    }
    else if ((lVar4 < 0) || (lVar2 = lVar4, 8 < lVar4)) {
      if ((lVar4 < 0x12) || (0x1a < lVar4)) {
        if ((lVar4 < 9) || (0x11 < lVar4)) {
          lVar2 = lVar1;
          if ((0x1a < lVar4) && (lVar4 < 0x24)) {
            lVar2 = (long)(iVar3 + -0x1b);
          }
        }
        else {
          lVar2 = (long)(iVar3 + -9);
        }
      }
      else {
        lVar2 = (long)(iVar3 + -0x12);
      }
    }
  }
  return lVar2;
}

// 0x001d3970  size 0x424
undefined4 FUN_001d3970(short param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 < 0) || (0x23 < param_1)) {
    if ((param_1 < 0x24) || (0x29 < param_1)) {
      if ((param_1 < 0x2a) || (0x4e < param_1)) {
        if ((param_1 < 0x4f) || (0x54 < param_1)) {
          if ((param_1 < 0x55) || (0x5a < param_1)) {
            if ((param_1 < 0x5b) || (0x60 < param_1)) {
              if ((param_1 < 0x61) || (0x66 < param_1)) {
                if ((param_1 < 0x67) || (0x70 < param_1)) {
                  if ((param_1 < 0x71) || (0x76 < param_1)) {
                    if ((param_1 < 0x77) || (0x7c < param_1)) {
                      if ((param_1 < 0x7d) || (0x82 < param_1)) {
                        if ((param_1 < 0x83) || (0x88 < param_1)) {
                          if ((param_1 < 0x89) || (0x8c < param_1)) {
                            if ((param_1 < 0x8d) || (0xa1 < param_1)) {
                              if ((param_1 < 0xad) || (0x161 < param_1)) {
                                if ((param_1 < 0xa2) || (0xa3 < param_1)) {
                                  if ((param_1 < 0xa4) || (0xa8 < param_1)) {
                                    if ((param_1 < 0xa9) || (0xa9 < param_1)) {
                                      if ((0xa9 < param_1) && (param_1 < 0xad)) {
                                        uVar1 = 0xaa;
                                      }
                                    }
                                    else {
                                      uVar1 = 0xa9;
                                    }
                                  }
                                  else {
                                    uVar1 = 0xa4;
                                  }
                                }
                                else {
                                  uVar1 = 0xa2;
                                }
                              }
                              else {
                                uVar1 = 0xad;
                              }
                            }
                            else if (param_1 < 0x93) {
                              uVar1 = 0x8d;
                            }
                            else if ((param_1 < 0x93) || (0x97 < param_1)) {
                              if ((param_1 < 0x98) || (0x9c < param_1)) {
                                if ((0x9c < param_1) && (param_1 < 0xa2)) {
                                  uVar1 = 0x9d;
                                }
                              }
                              else {
                                uVar1 = 0x98;
                              }
                            }
                            else {
                              uVar1 = 0x93;
                            }
                          }
                          else {
                            uVar1 = 0x89;
                          }
                        }
                        else {
                          uVar1 = 0x83;
                        }
                      }
                      else {
                        uVar1 = 0x7d;
                      }
                    }
                    else {
                      uVar1 = 0x77;
                    }
                  }
                  else {
                    uVar1 = 0x71;
                  }
                }
                else if (param_1 < 0x6b) {
                  uVar1 = 0x67;
                }
                else if ((param_1 < 0x6b) || (0x6d < param_1)) {
                  if ((0x6d < param_1) && (param_1 < 0x71)) {
                    uVar1 = 0x6e;
                  }
                }
                else {
                  uVar1 = 0x6b;
                }
              }
              else {
                uVar1 = 0x61;
              }
            }
            else {
              uVar1 = 0x5b;
            }
          }
          else {
            uVar1 = 0x55;
          }
        }
        else {
          uVar1 = 0x4f;
        }
      }
      else if (param_1 < 0x33) {
        uVar1 = 0x2a;
      }
      else if ((param_1 < 0x3c) || (0x44 < param_1)) {
        if ((param_1 < 0x33) || (0x3b < param_1)) {
          if ((0x44 < param_1) && (param_1 < 0x4e)) {
            uVar1 = 0x45;
          }
        }
        else {
          uVar1 = 0x33;
        }
      }
      else {
        uVar1 = 0x3c;
      }
    }
    else {
      uVar1 = 0x24;
    }
  }
  else if ((param_1 < 0) || (8 < param_1)) {
    if ((param_1 < 0x12) || (0x1a < param_1)) {
      if ((param_1 < 9) || (0x11 < param_1)) {
        if ((0x1a < param_1) && (param_1 < 0x24)) {
          uVar1 = 0x1b;
        }
      }
      else {
        uVar1 = 9;
      }
    }
    else {
      uVar1 = 0x12;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x001d3da0  size 0x270
undefined4 FUN_001d3da0(short param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (0x23 < param_1)) {
    if ((param_1 < 0x24) || (0x29 < param_1)) {
      if ((param_1 < 0x2a) || (0x4e < param_1)) {
        if ((param_1 < 0x4f) || (0x54 < param_1)) {
          if ((param_1 < 0x55) || (0x5a < param_1)) {
            if ((param_1 < 0x5b) || (0x60 < param_1)) {
              if ((param_1 < 0x61) || (0x66 < param_1)) {
                if ((param_1 < 0x67) || (0x70 < param_1)) {
                  if ((param_1 < 0x71) || (0x76 < param_1)) {
                    if ((param_1 < 0x77) || (0x7c < param_1)) {
                      if ((param_1 < 0x7d) || (0x82 < param_1)) {
                        if ((param_1 < 0x83) || (0x88 < param_1)) {
                          if ((param_1 < 0x8d) || (0xa1 < param_1)) {
                            if ((param_1 < 0xad) || (0x161 < param_1)) {
                              if ((param_1 < 0xa2) || (0xa3 < param_1)) {
                                if ((param_1 < 0xa4) || (0xa8 < param_1)) {
                                  if ((param_1 < 0xa9) || (0xa9 < param_1)) {
                                    if ((param_1 < 0xaa) || (0xac < param_1)) {
                                      if ((param_1 < 0x89) || (0x8c < param_1)) {
                                        uVar1 = 0x16;
                                      }
                                      else {
                                        uVar1 = 0xc;
                                      }
                                    }
                                    else {
                                      uVar1 = 0x14;
                                    }
                                  }
                                  else {
                                    uVar1 = 0x13;
                                  }
                                }
                                else {
                                  uVar1 = 0x12;
                                }
                              }
                              else {
                                uVar1 = 0x11;
                              }
                            }
                            else {
                              uVar1 = 0xd;
                            }
                          }
                          else {
                            uVar1 = 0xf;
                          }
                        }
                        else {
                          uVar1 = 0xb;
                        }
                      }
                      else {
                        uVar1 = 10;
                      }
                    }
                    else {
                      uVar1 = 9;
                    }
                  }
                  else {
                    uVar1 = 8;
                  }
                }
                else {
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

