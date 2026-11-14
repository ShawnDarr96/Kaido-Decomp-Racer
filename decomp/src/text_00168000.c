// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00168000 - 0x0016c000
#include "ghidra_types.h"

// 0x00168070  size 0x634
void FUN_00168070(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar3 = param_2 * 4 + param_1;
  iVar6 = *(int *)(iVar3 + 0x7c0);
  fVar11 = *(float *)(param_1 + 0x870);
  iVar1 = *(int *)(param_1 + 0x120);
  fVar14 = *(float *)(iVar6 + 0x34);
  iVar3 = *(int *)(iVar3 + 0x7b0);
  fVar10 = *(float *)(iVar6 + 200);
  pfVar8 = (float *)(iVar6 + 0x34);
  pfVar5 = (float *)(iVar6 + 0x38);
  if (param_2 < param_2 + 2) {
    iVar6 = param_1 + param_2 * 0x140;
    uVar9 = param_2;
    do {
      *(undefined4 *)(iVar6 + 0x288) = *(undefined4 *)(iVar6 + 0x28c);
      cVar4 = *(char *)(iVar6 + 0x287);
      pfVar7 = (float *)(iVar6 + 0x2c8);
      if ((cVar4 == '\0') &&
         (cVar4 = *(float *)(iVar6 + 0x278) < 0.95,
         *(float *)(iVar6 + 0x2c8) * *(float *)(param_1 + 400) < 0.0)) {
        cVar4 = '\x01';
      }
      *(float *)(iVar6 + 0x26c) = *(float *)(iVar6 + 0x26c) * fVar11 * (fVar14 / fVar10);
      bVar2 = false;
      if (((*(char *)(iVar6 + 0x286) != '\0') && (bVar2 = 0.3 < *(float *)(iVar6 + 0x260), !bVar2))
         && (bVar2 = false, 0.3 < *(float *)(param_1 + 0x134))) {
        bVar2 = 1 < param_2;
      }
      if (bVar2) {
        *(undefined4 *)(iVar6 + 0x28c) = 0;
        *(undefined4 *)(iVar6 + 0x26c) = 0;
        fVar12 = (float)FUN_00163c10(iVar6 + 0x2e0);
        if (fVar12 <= 0.1) {
          *(undefined1 *)(iVar6 + 0x287) = 0;
          *(undefined1 *)(iVar6 + 0x286) = 0;
          *(float *)(iVar6 + 0x28c) = *pfVar7 * *pfVar5;
          *(undefined4 *)(iVar6 + 0x294) = 0;
        }
        else {
          *(undefined1 *)(iVar6 + 0x286) = 1;
          fVar16 = 0.0;
          fVar15 = 0.0 - *(float *)(iVar6 + 0x2c8);
          fVar13 = (float)FUN_00120a68();
          fVar12 = (float)FUN_00120a68(0);
          if (fVar12 < fVar13) {
            fVar12 = fVar13;
          }
          if (0.001 < fVar12) {
            fVar16 = fVar15 / fVar12;
          }
          if (-1.0 <= fVar16) {
            if (1.0 < fVar16) {
              fVar16 = 1.0;
            }
          }
          else {
            fVar16 = -1.0;
          }
          *(float *)(iVar6 + 0x294) = fVar16;
        }
      }
      else if (cVar4 == '\0') {
        fVar12 = *pfVar5;
        *(undefined4 *)(iVar6 + 0x294) = *(undefined4 *)(iVar6 + 0x298);
        *(float *)(iVar6 + 0x28c) = *pfVar7 * fVar12;
        *(undefined1 *)(iVar6 + 0x287) = 0;
        *(undefined1 *)(iVar6 + 0x286) = 0;
      }
      else {
        *(undefined1 *)(iVar6 + 0x286) = 0;
        fVar15 = *pfVar8;
        fVar13 = *(float *)(param_1 + 0x870);
        fVar12 = *(float *)(iVar3 + 0x6c);
        if (*(char *)(iVar6 + 0x287) == '\0') {
          fVar16 = *(float *)(iVar6 + 0x298) * *(float *)(param_1 + 0x86c);
          if (0.0 <= fVar16) {
            if (0.01 < 1.0 - fVar16) {
              *(float *)(iVar6 + 0x28c) = (*pfVar7 * *pfVar5) / (1.0 - fVar16);
            }
            else {
              *(float *)(iVar6 + 0x28c) =
                   *(float *)(param_1 + 0x86c) *
                   (*(float *)(param_1 + 0x7ec) / *(float *)(param_1 + 0x848));
            }
          }
          else {
            *(float *)(iVar6 + 0x28c) = (fVar16 + 1.0) * *pfVar7 * *pfVar5;
          }
        }
        fVar12 = *(float *)(iVar6 + 0x28c) +
                 fVar13 * ((((*(float *)(iVar6 + 0x2c0) + *(float *)(iVar6 + 0x2b4)) -
                            *(float *)(iVar6 + 0x2a4)) * fVar15) / fVar12);
        *(float *)(iVar6 + 0x28c) = fVar12;
        if (fVar12 * *(float *)(param_1 + 0x86c) < 0.0) {
          *(undefined4 *)(iVar6 + 0x28c) = 0;
          fVar12 = (float)FUN_00163c10(iVar6 + 0x2e0);
          if (fVar12 < 0.1) {
            *(undefined1 *)(iVar6 + 0x286) = 0;
            *(undefined1 *)(iVar6 + 0x287) = 0;
          }
          else {
            *(undefined1 *)(iVar6 + 0x286) = 1;
            *(undefined1 *)(iVar6 + 0x287) = 1;
          }
        }
        fVar16 = 0.0;
        fVar12 = *(float *)(iVar6 + 0x28c) * *pfVar8;
        fVar15 = fVar12 - *pfVar7;
        fVar13 = (float)FUN_00120a68();
        fVar12 = (float)FUN_00120a68(fVar12);
        if (fVar12 < fVar13) {
          fVar12 = fVar13;
        }
        if (0.001 < fVar12) {
          fVar16 = fVar15 / fVar12;
        }
        if (-1.0 <= fVar16) {
          if (1.0 < fVar16) {
            fVar16 = 1.0;
          }
        }
        else {
          fVar16 = -1.0;
        }
        *(float *)(iVar6 + 0x294) = fVar16;
        fVar12 = *(float *)(iVar6 + 0x294);
        fVar13 = fVar12 - *(float *)(iVar6 + 0x298);
        if ((((fVar13 <= 0.0) && (fVar12 <= *(float *)(param_1 + 0xb70))) && (0.0 <= fVar12)) ||
           ((((0.0 <= fVar13 && (-*(float *)(param_1 + 0xb70) <= fVar12)) && (fVar12 <= 0.0)) ||
            (fVar12 * *(float *)(iVar6 + 0x298) < 0.0)))) {
          *(float *)(iVar6 + 0x28c) = *pfVar7 * *pfVar5;
          *(undefined1 *)(iVar6 + 0x287) = 0;
          *(undefined1 *)(iVar6 + 0x286) = 0;
        }
      }
      if (0 < *(int *)(param_1 + 0x814)) {
        fVar13 = *(float *)(iVar6 + 0x28c);
        fVar12 = (*(float *)(iVar1 + 0x528) * 0.10471976) / *(float *)(param_1 + 0x848);
        if (fVar13 < -fVar12) {
          *(float *)(iVar6 + 0x28c) = -fVar12;
        }
        else {
          if (fVar13 <= fVar12) {
            fVar12 = fVar13;
          }
          *(float *)(iVar6 + 0x28c) = fVar12;
        }
      }
      uVar9 = uVar9 + 1;
      iVar6 = iVar6 + 0x140;
    } while (uVar9 < param_2 + 2);
  }
  iVar6 = param_2 * 0x140 + param_1;
  fVar10 = (*(float *)(iVar6 + 0x28c) + *(float *)(iVar6 + 0x3cc)) * 0.5;
  if (*(float *)(param_1 + 0x7e0) == 0.0) {
    *(float *)(param_1 + 0x7e0) = fVar10;
    *(float *)(param_1 + 0x7e4) = fVar10 * *pfVar8;
  }
  else {
    *(float *)(param_1 + 0x7e0) = (*(float *)(param_1 + 0x7e0) * 21.0 + fVar10 + 0.0) / 22.0;
    *(float *)(param_1 + 0x7e4) = (fVar10 * *pfVar8 + *(float *)(param_1 + 0x7e4) + 0.0) * 0.5;
  }
  return;
}

// 0x001686b0  size 0x5b4
void FUN_001686b0(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar3 = param_2 * 4 + param_1;
  iVar1 = *(int *)(iVar3 + 0x7c0);
  fVar11 = *(float *)(param_1 + 0x870);
  fVar14 = *(float *)(iVar1 + 0x34);
  iVar3 = *(int *)(iVar3 + 0x7b0);
  fVar9 = *(float *)(iVar1 + 200);
  pfVar5 = (float *)(iVar1 + 0x38);
  if (param_2 < param_2 + 2) {
    iVar6 = param_1 + param_2 * 0x140;
    uVar8 = param_2;
    do {
      *(undefined4 *)(iVar6 + 0x288) = *(undefined4 *)(iVar6 + 0x28c);
      *(undefined4 *)(iVar6 + 0x294) = 0;
      cVar4 = *(char *)(iVar6 + 0x287);
      pfVar7 = (float *)(iVar6 + 0x2c8);
      if (cVar4 == '\0') {
        cVar4 = *(float *)(iVar6 + 0x278) < 0.99;
      }
      *(float *)(iVar6 + 0x26c) = *(float *)(iVar6 + 0x26c) * fVar11 * (fVar14 / fVar9);
      bVar2 = false;
      if (((*(char *)(iVar6 + 0x286) != '\0') && (bVar2 = 0.3 < *(float *)(iVar6 + 0x260), !bVar2))
         && (bVar2 = false, 0.3 < *(float *)(param_1 + 0x134))) {
        bVar2 = 1 < param_2;
      }
      if (bVar2) {
        *(undefined4 *)(iVar6 + 0x28c) = 0;
        *(undefined4 *)(iVar6 + 0x26c) = 0;
        fVar10 = (float)FUN_00163c10(iVar6 + 0x2e0);
        if (fVar10 <= 0.1) {
          *(undefined1 *)(iVar6 + 0x287) = 0;
          *(undefined1 *)(iVar6 + 0x286) = 0;
          *(float *)(iVar6 + 0x28c) = *pfVar7 * *pfVar5;
          *(undefined4 *)(iVar6 + 0x294) = 0;
        }
        else {
          *(undefined1 *)(iVar6 + 0x286) = 1;
          fVar13 = 0.0;
          fVar15 = 0.0 - *pfVar7;
          fVar12 = (float)FUN_00120a68();
          fVar10 = (float)FUN_00120a68(0);
          if (fVar10 < fVar12) {
            fVar10 = fVar12;
          }
          if (0.001 < fVar10) {
            fVar13 = fVar15 / fVar10;
          }
          if (-1.0 <= fVar13) {
            if (1.0 < fVar13) {
              fVar13 = 1.0;
            }
          }
          else {
            fVar13 = -1.0;
          }
          *(float *)(iVar6 + 0x294) = fVar13;
        }
      }
      else if (cVar4 == '\0') {
        fVar10 = *pfVar5;
        *(undefined4 *)(iVar6 + 0x294) = *(undefined4 *)(iVar6 + 0x298);
        *(float *)(iVar6 + 0x28c) = *pfVar7 * fVar10;
        *(undefined1 *)(iVar6 + 0x287) = 0;
        *(undefined1 *)(iVar6 + 0x286) = 0;
      }
      else {
        *(undefined1 *)(iVar6 + 0x286) = 0;
        fVar15 = *(float *)(iVar1 + 0x34);
        fVar10 = *(float *)(iVar3 + 0x6c);
        fVar12 = *(float *)(param_1 + 0x870);
        if (*(char *)(iVar6 + 0x287) == '\0') {
          fVar13 = *(float *)(iVar6 + 0x298) * *(float *)(param_1 + 0x86c);
          if (0.0 <= fVar13) {
            if (0.01 < 1.0 - fVar13) {
              *(float *)(iVar6 + 0x28c) = (*pfVar7 * *pfVar5) / (1.0 - fVar13);
            }
            else {
              *(float *)(iVar6 + 0x28c) =
                   *(float *)(param_1 + 0x86c) *
                   (*(float *)(param_1 + 0x7ec) / *(float *)(param_1 + 0x848));
            }
          }
          else {
            *(float *)(iVar6 + 0x28c) = (fVar13 + 1.0) * *pfVar7 * *pfVar5;
          }
        }
        *(float *)(iVar6 + 0x28c) =
             *(float *)(iVar6 + 0x28c) +
             fVar12 * ((((*(float *)(iVar6 + 0x2c0) + *(float *)(iVar6 + 0x2b4)) -
                        *(float *)(iVar6 + 0x2a4)) * fVar15) / fVar10);
        if (0.3 < *(float *)(iVar6 + 0x260)) {
          fVar10 = *(float *)(iVar6 + 0x28c);
LAB_00168a60:
          if ((fVar10 * *(float *)(iVar6 + 0x288) <= 0.0) &&
             (fVar10 = (float)FUN_00163c10(iVar6 + 0x2e0), 0.1 < fVar10)) {
            *(undefined4 *)(iVar6 + 0x28c) = 0;
            *(undefined1 *)(iVar6 + 0x286) = 1;
          }
        }
        else if ((0.3 < *(float *)(param_1 + 0x134)) && (1 < param_2)) {
          fVar10 = *(float *)(iVar6 + 0x28c);
          goto LAB_00168a60;
        }
        fVar13 = 0.0;
        fVar10 = *(float *)(iVar6 + 0x28c) * *(float *)(iVar1 + 0x34);
        fVar15 = fVar10 - *pfVar7;
        fVar12 = (float)FUN_00120a68();
        fVar10 = (float)FUN_00120a68(fVar10);
        if (fVar10 < fVar12) {
          fVar10 = fVar12;
        }
        if (0.001 < fVar10) {
          fVar13 = fVar15 / fVar10;
        }
        if (-1.0 <= fVar13) {
          if (1.0 < fVar13) {
            fVar13 = 1.0;
          }
        }
        else {
          fVar13 = -1.0;
        }
        *(float *)(iVar6 + 0x294) = fVar13;
        fVar10 = *(float *)(iVar6 + 0x294);
        fVar12 = fVar10 - *(float *)(iVar6 + 0x298);
        if ((((fVar12 <= 0.0) && (fVar10 <= *(float *)(param_1 + 0xb70))) && (0.0 <= fVar10)) ||
           ((((0.0 <= fVar12 && (-*(float *)(param_1 + 0xb70) <= fVar10)) && (fVar10 <= 0.0)) ||
            (fVar10 * *(float *)(iVar6 + 0x298) < 0.0)))) {
          *(float *)(iVar6 + 0x28c) = *pfVar7 * *pfVar5;
          *(undefined1 *)(iVar6 + 0x287) = 0;
          *(undefined1 *)(iVar6 + 0x286) = 0;
        }
      }
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 0x140;
    } while (uVar8 < param_2 + 2);
  }
  return;
}

// 0x00168c70  size 0x350
void FUN_00168c70(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x634) = 0;
  iVar2 = param_1;
  iVar3 = param_1;
  do {
    if (*(char *)(iVar3 + 0x1c1) == '\0') {
      *(undefined4 *)(iVar3 + 0x278) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x274) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x2a8) = 0;
      *(undefined4 *)(iVar3 + 0x2a4) = 0;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x86c);
      fVar9 = *(float *)(iVar3 + 0x2b8);
      fVar7 = 1.0;
      fVar10 = *(float *)(iVar3 + 700) * fVar8;
      fVar8 = fVar8 * (*(float *)(iVar3 + 0x2c0) + *(float *)(iVar3 + 0x2b4));
      fVar5 = (float)FUN_00120a68(fVar10);
      fVar6 = (float)FUN_00120a68(fVar8);
      bVar1 = 0.1 < fVar6 - fVar5;
      if (*(char *)(iVar3 + 0x287) == '\x01') {
        *(undefined1 *)(iVar3 + 0x284) = 1;
        *(undefined1 *)(iVar3 + 0x285) = 0;
        *(undefined4 *)(iVar3 + 0x274) = 0x3f800000;
        if ((bVar1) && (fVar8 != 0.0)) {
          fVar7 = (float)FUN_00120a68(fVar10 / fVar8);
        }
        if (0.001 < fVar7) {
          *(float *)(iVar3 + 0x274) = 1.0 / fVar7;
        }
        else {
          *(undefined4 *)(iVar3 + 0x274) = 0x3f800000;
        }
      }
      else if ((((fVar8 < 0.0) && (0.0 < fVar10)) || ((0.0 < fVar8 && (fVar10 < 0.0)))) || (bVar1))
      {
        *(undefined1 *)(iVar3 + 0x284) = 1;
        *(undefined1 *)(iVar3 + 0x285) = 0;
        *(undefined4 *)(iVar3 + 0x274) = 0x3f800000;
        if (fVar8 != 0.0) {
          fVar7 = (float)FUN_00120a68(fVar10 / fVar8);
        }
        if (0.001 < fVar7) {
          *(float *)(iVar3 + 0x274) = 1.0 / fVar7;
        }
        else {
          *(undefined4 *)(iVar3 + 0x274) = 0x3f800000;
        }
      }
      else {
        *(undefined1 *)(iVar3 + 0x284) = 0;
        *(undefined1 *)(iVar3 + 0x285) = 1;
        *(undefined4 *)(iVar3 + 0x274) = 0x3f800000;
      }
      *(float *)(iVar3 + 0x278) = fVar7;
      fVar7 = *(float *)(iVar3 + 0x2c4) / SQRT(fVar10 * fVar10 + fVar9 * fVar9);
      if (1.0 < fVar7) {
        fVar7 = 1.0;
      }
      *(float *)(iVar3 + 0x2a8) = fVar9 * fVar7;
      *(float *)(iVar3 + 0x2a4) = fVar7 * fVar10 * *(float *)(param_1 + 0x86c);
      FUN_001638b0(auStack_20,param_1 + 0x80);
      FUN_001638b0(*(undefined4 *)(iVar3 + 0x2a8),auStack_30,param_1 + 0x90);
      FUN_00163b80(auStack_10,auStack_20,auStack_30);
      FUN_00163b00(iVar2 + 0x910,auStack_10);
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x140;
    iVar2 = iVar2 + 0x10;
  } while (uVar4 < 4);
  return;
}

// 0x00168fd0  size 0x158
void FUN_00168fd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x160) != 0) {
    uVar6 = 0;
    iVar5 = param_1;
    iVar4 = param_1;
    do {
      if (*(char *)(iVar5 + 0x1c1) == '\0') {
        *(undefined4 *)(iVar5 + 0x280) = 0;
        *(undefined4 *)(iVar5 + 0x2c4) = 0;
      }
      else {
        fVar8 = 1.0;
        iVar1 = *(int *)(iVar4 + 0x7c0);
        iVar2 = *(int *)(iVar4 + 0x7b0);
        if (*(char *)(param_1 + 0x9a8) != '\0') {
          if (uVar6 < 2) {
            iVar3 = *(int *)(param_1 + (uint)*(byte *)(iVar5 + 0x1c8) * 4 + 0x9ac);
          }
          else {
            iVar3 = *(int *)(param_1 + (uint)*(byte *)(iVar5 + 0x1c8) * 4 + 0xa2c);
          }
          if (iVar3 != 0) {
            fVar8 = *(float *)(iVar3 + 0xc);
          }
        }
        *(float *)(iVar5 + 0x254) = fVar8;
        fVar7 = (float)FUN_00120a68(*(float *)(iVar5 + 0x1d4) * 0.15);
        fVar8 = *(float *)(iVar2 + 0x60) *
                (1.0 - fVar7) * fVar8 * (1.0 - *(float *)(iVar5 + 0x2a0) * *(float *)(iVar1 + 0x90))
        ;
        *(float *)(iVar5 + 0x280) = fVar8;
        *(float *)(iVar5 + 0x2c4) = fVar8 * *(float *)(iVar5 + 0x2a0);
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x140;
      iVar4 = iVar4 + 4;
    } while (uVar6 < 4);
  }
  return;
}

// 0x00169130  size 0x320
void FUN_00169130(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x888) == 2) {
    fVar8 = *(float *)(*(int *)(param_1 + 0x120) + 0xe4);
    fVar7 = 1.0 - fVar8;
    if (0 < *(int *)(param_1 + 0x814)) {
      fVar3 = (float)FUN_00120a68((*(float *)(param_1 + 0x50c) + *(float *)(param_1 + 0x64c)) -
                                  (*(float *)(param_1 + 0x28c) + *(float *)(param_1 + 0x3cc)));
      fVar5 = (float)FUN_00120a68(*(undefined4 *)(param_1 + 0x60));
      iVar1 = *(int *)(param_1 + 0x120);
      fVar5 = *(float *)(iVar1 + 0xe8) * (fVar5 / *(float *)(param_1 + 0x44));
      if (1.0 < fVar5) {
        fVar5 = 1.0;
      }
      fVar5 = fVar5 * 15.0;
      if (fVar5 < 2.1474836e+09) {
        uVar6 = (uint)fVar5;
      }
      else {
        uVar6 = (int)(fVar5 - 2.1474836e+09) | 0x80000000;
      }
      if (uVar6 == 0xf) {
        fVar5 = *(float *)(iVar1 + 300);
      }
      else {
        iVar2 = uVar6 * 4 + iVar1 + 0xe8;
        fVar5 = (1.0 - (fVar5 - (float)uVar6)) * *(float *)(iVar2 + 8) +
                (fVar5 - (float)uVar6) * *(float *)(iVar2 + 0xc);
      }
      fVar5 = fVar5 * *(float *)(iVar1 + 0xec) * fVar3 * 0.5;
      fVar8 = fVar8 + fVar5;
      fVar7 = fVar7 - fVar5;
      if (0.5 < fVar8) {
        fVar8 = 0.5;
      }
      if (fVar7 < 0.5) {
        fVar7 = 0.5;
      }
    }
    *(float *)(param_1 + 0x714) = fVar8;
    *(float *)(param_1 + 0x794) = fVar7;
  }
  if (*(int *)(param_1 + 0x888) - 3U < 3) {
    fVar7 = *(float *)(*(int *)(param_1 + 0x120) + 0xe4);
    fVar8 = 1.0 - fVar7;
    if ((0 < *(int *)(param_1 + 0x814)) && (*(float *)(*(int *)(param_1 + 0x120) + 0x134) != 0.0)) {
      fVar3 = (float)FUN_00120a68(*(float *)(param_1 + 0x28c) + *(float *)(param_1 + 0x3cc));
      fVar3 = fVar3 * 0.5;
      fVar4 = (float)FUN_00120a68(*(float *)(param_1 + 0x50c) + *(float *)(param_1 + 0x64c));
      fVar5 = (float)FUN_00120a68(fVar3 - fVar4 * 0.5);
      if (fVar5 <= 0.0) {
        fVar5 = -fVar5 / (fVar4 * 0.5);
      }
      else {
        fVar5 = fVar5 / fVar3;
      }
      fVar5 = fVar5 * 10.0;
      if (0.0 < fVar5) {
        if (1.0 < fVar5) {
          fVar5 = 1.0;
        }
        fVar7 = (*(float *)(*(int *)(param_1 + 0x120) + 0xe4) - 0.5) * (1.0 - fVar5) + 0.5;
        fVar8 = 1.0 - fVar7;
      }
    }
    *(float *)(param_1 + 0x714) = fVar7;
    *(float *)(param_1 + 0x794) = fVar8;
  }
  return;
}

// 0x00169450  size 0x40c
void FUN_00169450(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar11 = *(undefined4 *)(param_1 + 400);
  fVar12 = *(float *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x534) = 0;
  *(undefined4 *)(param_1 + 0x62c) = 0;
  *(undefined4 *)(param_1 + 0x674) = 0;
  fVar5 = fVar12 + *(float *)(param_1 + 0x134);
  if (fVar5 != 0.0) {
    if ((fVar5 <= 0.3) || (fVar5 = (float)FUN_00120a68(uVar11), fGpffff8070 <= fVar5)) {
      *(undefined1 *)(param_1 + 0xab1) = 0;
      fVar5 = (float)FUN_00120a68(*(undefined4 *)(param_1 + 400));
      if (fVar5 < 103.0) {
        fVar6 = 0.0;
        if (0.0 < fVar5) {
          fVar5 = fVar5 * 0.009708738 * 7.0;
          if (fVar5 < 2.1474836e+09) {
            uVar4 = (uint)fVar5;
          }
          else {
            uVar4 = (int)(fVar5 - 2.1474836e+09) | 0x80000000;
          }
          iVar3 = uVar4 * 4 + *(int *)(param_1 + 0x120);
          fVar6 = (1.0 - (fVar5 - (float)uVar4)) * *(float *)(iVar3 + 0x144) +
                  (fVar5 - (float)uVar4) * *(float *)(iVar3 + 0x148);
        }
      }
      else {
        fVar6 = *(float *)(*(int *)(param_1 + 0x120) + 0x160);
      }
      fVar6 = *(float *)(param_1 + 0x44) * fVar6;
      fVar5 = fVar6 * *(float *)(*(int *)(param_1 + 0x120) + 0x164);
      if ((*(int *)(param_1 + 0x160) != 0) && (0.1 < *(float *)(param_1 + 0x40))) {
        uVar2 = FUN_00164f50(*(undefined4 *)(param_1 + 0x154));
        FUN_00163800(&uStack_20,param_1 + 0x70,uVar2);
        FUN_00163bc0(&uStack_20);
        FUN_00163800(&uStack_40,param_1 + 0x70,&uStack_20);
        uStack_20 = uStack_40;
        uStack_1c = uStack_3c;
        uStack_18 = uStack_38;
        uStack_14 = uStack_34;
        FUN_00163a90(fVar12 * fVar5,&uStack_20);
        FUN_00163b00(param_1 + 0x950,&uStack_20);
      }
      iVar3 = *(int *)(param_1 + 0x120);
      uVar4 = 0;
      fVar5 = *(float *)(param_1 + 0x134);
      fVar6 = fVar6 * 0.25;
      fVar12 = *(float *)(iVar3 + 0x138);
      fVar7 = *(float *)(iVar3 + 0x13c);
      fVar8 = *(float *)(iVar3 + 0x140);
      iVar3 = param_1;
      do {
        if (*(float *)(param_1 + 0xbd0) == 100.0) {
          fVar10 = 1.0;
        }
        else {
          fVar10 = 0.0;
        }
        fVar10 = ((1.0 - ((*(float *)(iVar3 + 0x270) - 20.0) * 0.3) /
                         *(float *)(*(int *)(param_1 + 0x120) + 0xd4)) + 0.0) - fVar10 * 0.7;
        if (uVar4 < 2) {
          fVar9 = *(float *)(iVar3 + 0x260) * fVar6 * fVar12 * fVar10;
          *(float *)(iVar3 + 0x26c) = fVar9;
        }
        else {
          fVar10 = *(float *)(iVar3 + 0x260) * fVar6 * fVar7 * fVar10;
          fVar9 = fVar10 + fVar5 * fVar6 * fVar8;
          *(float *)(iVar3 + 0x26c) = fVar10;
        }
        if (*(float *)(iVar3 + 0x28c) <= 0.0) {
          if (0.0 <= *(float *)(iVar3 + 0x28c)) {
            if (0.0 <= *(float *)(iVar3 + 0x2c8)) {
              *(float *)(iVar3 + 0x2b4) = -fVar9;
            }
            else {
              *(float *)(iVar3 + 0x2b4) = fVar9;
            }
          }
          else {
            *(float *)(iVar3 + 0x2b4) = fVar9;
          }
        }
        else {
          *(float *)(iVar3 + 0x2b4) = -fVar9;
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x140;
      } while (uVar4 < 4);
    }
    else {
      *(undefined4 *)(param_1 + 0x28c) = 0;
      *(undefined4 *)(param_1 + 0x2b0) = 0;
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      *(undefined4 *)(param_1 + 0x3cc) = 0;
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      *(undefined4 *)(param_1 + 0x3f4) = 0;
      *(undefined4 *)(param_1 + 0x50c) = 0;
      *(undefined4 *)(param_1 + 0x530) = 0;
      *(undefined4 *)(param_1 + 0x534) = 0;
      *(undefined4 *)(param_1 + 0x64c) = 0;
      *(undefined4 *)(param_1 + 0x670) = 0;
      *(undefined4 *)(param_1 + 0x674) = 0;
      puVar1 = (undefined4 *)FUN_00164f50(*(undefined4 *)(param_1 + 0x154));
      uStack_10 = *puVar1;
      uStack_c = puVar1[1];
      uStack_8 = puVar1[2];
      uStack_4 = puVar1[3];
      FUN_001638b0(uVar11,auStack_30,param_1 + 0x80);
      FUN_00163ac0(&uStack_10,auStack_30);
      FUN_00164f60(*(undefined4 *)(param_1 + 0x154),&uStack_10);
    }
  }
  return;
}

// 0x00169860  size 0x7f8
void FUN_00169860(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar6 = *(int *)(param_1 + 0x120);
  fVar12 = 0.0;
  fVar10 = 0.0;
  fVar15 = *(float *)(iVar6 + 0x534);
  if (*(int *)(param_1 + 0x814) == -1) {
    fVar16 = *(float *)(param_1 + 300);
  }
  else {
    fVar16 = *(float *)(param_1 + 0x128);
  }
  if (0.0 < *(float *)(param_1 + 0x80c)) {
    fVar16 = *(float *)(param_1 + 0x80c) - *(float *)(param_1 + 0x870);
    *(float *)(param_1 + 0x80c) = fVar16;
    if (fVar16 < 0.0) {
      *(undefined1 *)(param_1 + 0x810) = 0;
    }
    fVar16 = 0.0;
    *(undefined4 *)(param_1 + 0x8f4) = 0;
    goto LAB_00169930;
  }
  if ((*(char *)(param_1 + 0x811) == '\0') || (*(int *)(param_1 + 0x814) < 1)) {
    fVar7 = *(float *)(param_1 + 0x7fc);
LAB_00169900:
    if (fVar7 < fVar15) goto LAB_00169924;
    *(undefined4 *)(param_1 + 0x80c) = 0x3e19999a;
    *(undefined1 *)(param_1 + 0x810) = 1;
  }
  else {
    if (*(float *)(param_1 + 0x820) == 0.0) {
      fVar7 = *(float *)(param_1 + 0x7fc);
      goto LAB_00169900;
    }
LAB_00169924:
    *(undefined4 *)(param_1 + 0x80c) = 0;
    *(undefined1 *)(param_1 + 0x810) = 0;
  }
  *(float *)(param_1 + 0x8f4) = fVar16;
LAB_00169930:
  if ((*(int *)(param_1 + 0x814) == 0) || (*(float *)(param_1 + 0x820) == 0.0)) {
    fVar8 = (float)FUN_0016bfb0(*(undefined4 *)(param_1 + 0x7fc),fVar16,param_1);
    fVar15 = 0.0;
    fVar7 = 1.0;
    if (0.0 < fVar16) {
      fVar15 = fVar8 * fVar16;
    }
    *(float *)(param_1 + 0x804) =
         (fVar15 - (1.0 - *(float *)(iVar6 + 0x640)) * fVar8) -
         *(float *)(param_1 + 0x870) *
         *(float *)(param_1 + 0x7ec) * (*(float *)(iVar6 + 0x63c) + *(float *)(iVar6 + 0x648));
  }
  else {
    fVar14 = *(float *)(param_1 + 0x848);
    fVar12 = *(float *)(param_1 + 0x850);
    fVar8 = *(float *)(param_1 + 0x84c);
    fVar13 = *(float *)(*(int *)(param_1 + 0x120) + 0x2c4) *
             (((*(float *)(param_1 + 0x7fc) - *(float *)(param_1 + 0x800)) *
               *(float *)(iVar6 + 0x528) * 0.10471976) / fVar14);
    fVar10 = (float)FUN_0016bfb0(*(float *)(param_1 + 0x7fc),fVar16,param_1);
    fVar12 = fVar12 * fVar13;
    fVar7 = 1.0;
    fVar11 = fVar14 * (1.0 - fVar8) * fVar10;
    fVar8 = *(float *)(param_1 + 0x870) *
            *(float *)(param_1 + 0x7ec) * (*(float *)(iVar6 + 0x63c) + *(float *)(iVar6 + 0x648));
    if (1.0 <= *(float *)(param_1 + 0x820)) {
      fVar9 = 0.0;
      if (0.0 <= fVar16) {
        if (*(char *)(param_1 + 0x810) == '\0') {
          fVar9 = fVar14 * fVar10 * fVar16;
          *(float *)(param_1 + 0x808) = fVar16 * fVar10 * *(float *)(iVar6 + 0x640) - fVar8;
        }
        else {
          fVar10 = (float)FUN_0016bfb0(*(float *)(iVar6 + 0x530) / *(float *)(iVar6 + 0x528),param_1
                                      );
          fVar9 = -fVar10 * 0.3 * fVar14;
          *(float *)(param_1 + 0x808) = -fVar10 * 0.3 * *(float *)(iVar6 + 0x640) - fVar8;
        }
      }
      else {
        *(float *)(param_1 + 0x808) = -fVar8;
        fVar11 = fVar14 * (1.0 - *(float *)(iVar6 + 0x644)) * fVar10 + fVar11 + 0.0;
      }
    }
    else {
      *(float *)(param_1 + 0x808) = fVar16 * fVar10 * *(float *)(iVar6 + 0x640) - fVar8;
      if ((*(int *)(param_1 + 0x814) == 1) && (*(int *)(param_1 + 0x818) == 0)) {
        fVar9 = fVar14 * fVar10 * fVar16;
        fVar12 = fVar13 * (*(float *)(iVar6 + 0x63c) + *(float *)(iVar6 + 0x648));
      }
      else {
        fVar9 = *(float *)(param_1 + 0x820) * fVar14 * fVar10 * fVar16;
        fVar12 = fVar12 * *(float *)(param_1 + 0x820);
      }
    }
    if (*(char *)(param_1 + 0x82f) == '\x01') {
      if (*(float *)(param_1 + 0x7fc) < fVar15) {
        *(undefined1 *)(param_1 + 0x82f) = 0;
      }
    }
    else if ((*(char *)(param_1 + 0x832) == '\x01') &&
            (*(float *)(iVar6 + 0x530) * 0.10471976 < fVar14 * *(float *)(param_1 + 0x7e0))) {
      *(undefined1 *)(param_1 + 0x82f) = 1;
    }
    if (*(char *)(param_1 + 0x82f) == '\x01') {
      fVar10 = *(float *)(iVar6 + 0x5c0);
      *(undefined4 *)(param_1 + 0x80c) = 0;
      *(float *)(param_1 + 0x804) = -fVar11 - fVar10 * fVar14 * 0.7;
    }
    else {
      *(float *)(param_1 + 0x804) = (fVar9 - fVar11) - fVar12;
    }
    fVar10 = *(float *)(param_1 + 0x804);
    if (*(int *)(param_1 + 0x814) == -1) {
      fVar10 = fVar10 * -1.0;
    }
    if (*(float *)(param_1 + 0x8a8) != 1.0) {
      fVar10 = fVar10 * *(float *)(param_1 + 0x8a8);
    }
    fVar15 = fVar10 * *(float *)(param_1 + 0x714);
    fVar12 = fVar15 * *(float *)(*(int *)(param_1 + 0x120) + 0x1b8) * 0.5;
    fVar10 = (fVar10 - fVar15) * *(float *)(*(int *)(param_1 + 0x120) + 0x2c8) * 0.5;
  }
  *(float *)(param_1 + 0x2b0) = fVar12;
  *(float *)(param_1 + 0x3f0) = fVar12;
  *(float *)(param_1 + 0x530) = fVar10;
  *(float *)(param_1 + 0x670) = fVar10;
  if (*(int *)(param_1 + 0x888) != 5) {
    uVar5 = 0;
    iVar3 = 1;
    iVar6 = param_1;
    iVar4 = param_1;
    do {
      iVar1 = *(int *)(iVar6 + 0x7c0);
      iVar2 = param_1 + iVar3 * 0x140;
      if (*(float *)(iVar2 + 0x2c4) < *(float *)(iVar4 + 0x2c4)) {
        fVar10 = (float)FUN_00120a68(*(undefined4 *)(iVar2 + 0x2b0));
        if (*(float *)(iVar2 + 0x2c4) < fVar10) {
          fVar10 = (float)FUN_00120a68(*(undefined4 *)(iVar2 + 0x2b0));
          fVar10 = (float)FUN_00120a68(fVar10 - *(float *)(iVar2 + 0x2c4));
          fVar12 = (float)FUN_00120a68(*(undefined4 *)(iVar4 + 0x2c4));
          fVar12 = (float)FUN_00120a68(fVar12 - *(float *)(iVar2 + 0x2c4));
          if (fVar12 / 2.0 < fVar10) {
            fVar10 = (float)FUN_00120a68(*(undefined4 *)(iVar4 + 0x2c4));
            fVar10 = (float)FUN_00120a68(fVar10 - *(float *)(iVar2 + 0x2c4));
            fVar10 = fVar10 / 2.0;
          }
          if (0.0 < *(float *)(iVar2 + 0x2b0)) {
            if (*(float *)(iVar1 + 0x10c) * *(float *)(iVar1 + 0x38) < fVar10) {
              fVar10 = fVar10 * (fVar7 - *(float *)(iVar1 + 0x104));
            }
            else {
              fVar10 = 0.0;
            }
          }
          else if (*(float *)(iVar1 + 0x10c) * *(float *)(iVar1 + 0x38) < fVar10) {
            fVar10 = fVar10 * (fVar7 - *(float *)(iVar1 + 0x108));
          }
          else {
            fVar10 = 0.0;
          }
          if (fVar10 < 0.0) {
            fVar10 = 0.0;
          }
          if (0.0 < *(float *)(iVar2 + 0x2b0)) {
            *(float *)(iVar4 + 0x2b0) = *(float *)(iVar4 + 0x2b0) - fVar10;
            *(float *)(iVar2 + 0x2b0) = *(float *)(iVar2 + 0x2b0) - fVar10;
          }
          else {
            *(float *)(iVar4 + 0x2b0) = *(float *)(iVar4 + 0x2b0) + fVar10;
            *(float *)(iVar2 + 0x2b0) = *(float *)(iVar2 + 0x2b0) + fVar10;
          }
        }
      }
      else {
        fVar10 = (float)FUN_00120a68(*(undefined4 *)(iVar4 + 0x2b0));
        if (*(float *)(iVar4 + 0x2c4) < fVar10) {
          fVar10 = (float)FUN_00120a68(*(undefined4 *)(iVar4 + 0x2b0));
          fVar10 = fVar10 - *(float *)(iVar4 + 0x2c4);
          fVar12 = (float)FUN_00120a68();
          fVar12 = (float)FUN_00120a68(fVar12 - *(float *)(iVar2 + 0x2c4));
          if (fVar12 / 2.0 < fVar10) {
            fVar10 = (float)FUN_00120a68(*(undefined4 *)(iVar4 + 0x2c4));
            fVar10 = (float)FUN_00120a68(fVar10 - *(float *)(iVar2 + 0x2c4));
            fVar10 = fVar10 / 2.0;
          }
          if (0.0 < *(float *)(iVar2 + 0x2b0)) {
            if (*(float *)(iVar1 + 0x10c) * *(float *)(iVar1 + 0x38) < fVar10) {
              fVar10 = fVar10 * (fVar7 - *(float *)(iVar1 + 0x104));
            }
            else {
              fVar10 = 0.0;
            }
          }
          else if (*(float *)(iVar1 + 0x10c) * *(float *)(iVar1 + 0x38) < fVar10) {
            fVar10 = fVar10 * (fVar7 - *(float *)(iVar1 + 0x108));
          }
          else {
            fVar10 = 0.0;
          }
          if (fVar10 < 0.0) {
            fVar10 = 0.0;
          }
          if (0.0 < *(float *)(iVar4 + 0x2b0)) {
            *(float *)(iVar4 + 0x2b0) = *(float *)(iVar4 + 0x2b0) - fVar10;
            *(float *)(iVar2 + 0x2b0) = *(float *)(iVar2 + 0x2b0) - fVar10;
          }
          else {
            *(float *)(iVar4 + 0x2b0) = *(float *)(iVar4 + 0x2b0) + fVar10;
            *(float *)(iVar2 + 0x2b0) = *(float *)(iVar2 + 0x2b0) + fVar10;
          }
        }
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 8;
      iVar4 = iVar4 + 0x280;
      iVar3 = iVar3 + 2;
    } while (uVar5 < 2);
  }
  return;
}

// 0x0016a070  size 0x344
void FUN_0016a070(int param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar5 = 1;
  if (*(char *)(param_1 + 0x88e) == '\0') {
    fVar7 = (float)FUN_00120a68(*(undefined4 *)(param_1 + 0x7e4));
    if ((fVar7 <= 5.5) &&
       (pfVar1 = (float *)FUN_00164f40(*(undefined4 *)(param_1 + 0x154)), *pfVar1 <= 1.3889)) {
      uVar2 = FUN_00164d80(*(undefined4 *)(param_1 + 0x154));
      fVar7 = (float)FUN_00163c10(uVar2);
      if (fVar7 < 1.0) {
        lVar5 = 0;
      }
    }
  }
  else {
    pfVar1 = (float *)FUN_00164f40(*(undefined4 *)(param_1 + 0x154));
    if ((*pfVar1 <= 1.3889) &&
       (fVar7 = (float)FUN_00120a68(*(undefined4 *)(param_1 + 0x7e4)), fVar7 <= 5.5)) {
      lVar5 = 0;
    }
  }
  *(bool *)(param_1 + 0x88e) = lVar5 != -1;
  fVar7 = ((*(float *)(param_1 + 0x85c) + 0.0) -
          (1.0 - *(float *)(param_1 + 0x820)) * *(float *)(param_1 + 0x858)) * 0.5;
  if (*(int *)(param_1 + 0x888) == 1) {
    *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(*(int *)(param_1 + 0x120) + 0x248);
    *(float *)(param_1 + 0x79c) =
         fVar7 * *(float *)(param_1 + 0x794) + *(float *)(*(int *)(param_1 + 0x120) + 0x358) + 0.0;
  }
  else if (*(int *)(param_1 + 0x888) == 0) {
    *(float *)(param_1 + 0x71c) =
         fVar7 * *(float *)(param_1 + 0x714) + *(float *)(*(int *)(param_1 + 0x120) + 0x248) + 0.0;
    *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(*(int *)(param_1 + 0x120) + 0x358);
  }
  else {
    *(float *)(param_1 + 0x71c) =
         fVar7 * *(float *)(param_1 + 0x714) + *(float *)(*(int *)(param_1 + 0x120) + 0x248) + 0.0;
    *(float *)(param_1 + 0x79c) =
         fVar7 * *(float *)(param_1 + 0x794) + *(float *)(*(int *)(param_1 + 0x120) + 0x358) + 0.0;
  }
  *(undefined4 *)(param_1 + 0xb68) = 0;
  uVar4 = 0;
  fVar7 = 0.0;
  iVar3 = param_1;
  do {
    fVar9 = *(float *)(iVar3 + 0x2c4) * 1.05;
    fVar8 = *(float *)(iVar3 + 0x2b0) + *(float *)(iVar3 + 0x2b4);
    fVar6 = -fVar9;
    if (fVar6 <= fVar8) {
      if (fVar9 < fVar8) {
        fVar6 = fVar9;
      }
      else {
        fVar6 = fVar8;
      }
    }
    uVar4 = uVar4 + 1;
    fVar7 = fVar7 + fVar6;
    iVar3 = iVar3 + 0x140;
  } while (uVar4 < 4);
  fVar6 = *(float *)(param_1 + 400);
  fVar7 = fVar7 / *(float *)(param_1 + 0x44);
  fVar8 = (float)FUN_00120a68(fVar6);
  fVar6 = (float)FUN_00120a68(fVar6 + fVar7);
  if (fVar6 < fVar8) {
    fVar6 = fVar8;
  }
  if (0.001 < fVar6) {
    *(float *)(param_1 + 0xb68) = fVar7 / fVar6;
  }
  fVar7 = (float)FUN_00120a68(*(undefined4 *)(param_1 + 0xb68));
  fVar7 = fVar7 * 1.2;
  *(float *)(param_1 + 0xb68) = fVar7;
  if (0.05 <= fVar7) {
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 0.05;
  }
  *(float *)(param_1 + 0xb68) = fVar7;
  FUN_0016a3c0(param_1,lVar5,0);
  FUN_0016a3c0(param_1,lVar5,2);
  return;
}

// 0x0016a3c0  size 0x3f4
void FUN_0016a3c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  uVar6 = (uint)param_3;
  uVar5 = uVar6 + 1;
  iVar7 = (int)param_1;
  iVar3 = iVar7 + uVar5 * 0x140;
  iVar1 = *(int *)(uVar6 * 4 + iVar7 + 0x7c0);
  iVar4 = iVar7 + uVar6 * 0x140;
  FUN_001663f0(*(undefined4 *)(iVar4 + 0x2a0),*(undefined4 *)(iVar4 + 0x280),
               *(undefined4 *)(iVar1 + 0x94),iVar7 + 0xae4,iVar1);
  FUN_001663f0(*(undefined4 *)(iVar3 + 0x2a0),*(undefined4 *)(iVar3 + 0x280),
               *(undefined4 *)(iVar1 + 0x94),iVar7 + 0xb20,iVar1);
  *(undefined4 *)(iVar4 + 0x2c0) = *(undefined4 *)(iVar4 + 0x2b0);
  *(undefined4 *)(iVar3 + 0x2c0) = *(undefined4 *)(iVar3 + 0x2b0);
  if (*(int *)(iVar7 + 0x888) == 5) {
    fVar11 = (float)FUN_00120a68((*(float *)(iVar7 + 0x60) / *(float *)(iVar7 + 0x44)) / 9.8);
    fVar11 = fVar11 * 0.5;
  }
  else {
    fVar11 = 0.0;
  }
  if (*(float *)(iVar3 + 0x2c4) <= *(float *)(iVar4 + 0x2c4)) {
    fVar10 = 0.0;
    if ((*(float *)(iVar7 + 0x124) < 0.0) &&
       (fVar10 = -*(float *)(iVar7 + 0x124) * 0.5, fVar11 < fVar10)) {
      fVar10 = fVar11;
    }
    *(float *)(iVar3 + 0x2c0) = *(float *)(iVar3 + 0x2c0) * (1.0 - fVar10);
    *(float *)(iVar4 + 0x2c0) = *(float *)(iVar4 + 0x2c0) * (fVar10 + 1.0);
  }
  else {
    fVar10 = 0.0;
    if ((0.0 < *(float *)(iVar7 + 0x124)) &&
       (fVar10 = *(float *)(iVar7 + 0x124) * 0.5, fVar11 < fVar10)) {
      fVar10 = fVar11;
    }
    *(float *)(iVar4 + 0x2c0) = *(float *)(iVar4 + 0x2c0) * (1.0 - fVar10);
    *(float *)(iVar3 + 0x2c0) = *(float *)(iVar3 + 0x2c0) * (fVar10 + 1.0);
  }
  fVar11 = 1.0;
  if (param_2 == 0) {
    FUN_00163b80(auStack_30,iVar4 + 0x220,iVar3 + 0x220);
    FUN_001638b0(0x3f000000,auStack_10,auStack_30);
    puVar2 = *(undefined4 **)(uVar6 * 4 + iVar7 + 0x7b0);
    uStack_20 = *puVar2;
    uStack_1c = puVar2[1];
    uStack_18 = puVar2[2];
    uStack_14 = puVar2[3];
    fVar11 = (float)FUN_00164900(*(undefined4 *)(iVar7 + 0x870),*(undefined4 *)(iVar7 + 0x154),
                                 &uStack_20,auStack_10);
    *(float *)(iVar4 + 0x2b8) = fVar11 * 0.5;
    *(float *)(iVar3 + 0x2b8) = fVar11 * 0.5;
    FUN_0016aa00(param_1,param_3);
    FUN_0016aa00(param_1,uVar5);
  }
  else {
    FUN_0016a7c0(param_1,param_3);
    FUN_0016a7c0(param_1,uVar5);
    if (*(char *)(iVar4 + 0x1c1) == '\0') {
      *(undefined4 *)(iVar4 + 0x2b8) = 0;
    }
    else {
      fVar10 = 1.0;
      if ((*(float *)(iVar4 + 0x28c) != 0.0) ||
         (0.0 <= *(float *)(iVar4 + 0x2c8) * *(float *)(iVar7 + 0x86c))) {
        fVar8 = *(float *)(iVar4 + 0x298);
      }
      else {
        fVar10 = -1.0;
        fVar8 = *(float *)(iVar4 + 0x298);
      }
      uVar9 = FUN_00165ef0(*(undefined4 *)(iVar4 + 0x290),fVar10 * fVar8 * *(float *)(iVar7 + 0x86c)
                           ,*(undefined4 *)(iVar4 + 0x1d4),iVar7 + (uVar6 & 1) * 0x3c + 0xae4);
      *(undefined4 *)(iVar4 + 0x2b8) = uVar9;
    }
    if (*(char *)(iVar3 + 0x1c1) == '\0') {
      *(undefined4 *)(iVar3 + 0x2b8) = 0;
    }
    else {
      if ((*(float *)(iVar3 + 0x28c) != 0.0) ||
         (0.0 <= *(float *)(iVar3 + 0x2c8) * *(float *)(iVar7 + 0x86c))) {
        fVar10 = *(float *)(iVar7 + 0x86c);
      }
      else {
        fVar11 = -1.0;
        fVar10 = *(float *)(iVar7 + 0x86c);
      }
      uVar9 = FUN_00165ef0(*(undefined4 *)(iVar3 + 0x290),
                           fVar11 * *(float *)(iVar3 + 0x298) * fVar10,
                           *(undefined4 *)(iVar3 + 0x1d4),iVar7 + (uVar5 & 1) * 0x3c + 0xae4);
      *(undefined4 *)(iVar3 + 0x2b8) = uVar9;
    }
  }
  return;
}

// 0x0016a7c0  size 0x234
float FUN_0016a7c0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fStack_4;
  
  iVar1 = param_1 + param_2 * 0x140;
  if (*(char *)(iVar1 + 0x1c1) == '\0') {
    *(undefined4 *)(iVar1 + 700) = 0;
    fStack_4 = 0.0;
    *(undefined4 *)(iVar1 + 0x298) = 0;
    *(undefined4 *)(iVar1 + 0x268) = 0xbe4ccccd;
  }
  else {
    uVar7 = *(undefined4 *)(iVar1 + 0x290);
    iVar2 = param_1 + (param_2 & 1) * 0x3c;
    iVar3 = iVar2 + 0xae4;
    fVar5 = (float)FUN_00120d18(uVar7);
    *(float *)(iVar2 + 0xb08) = *(float *)(iVar2 + 0xb04) * fVar5;
    *(undefined4 *)(iVar2 + 0xb0c) = uVar7;
    fStack_4 = *(float *)(param_1 + 0x86c) * (*(float *)(iVar1 + 0x2c0) + *(float *)(iVar1 + 0x2b4))
    ;
    if ((*(char *)(iVar1 + 0x287) == '\0') && (*(char *)(iVar1 + 0x286) == '\0')) {
      fVar6 = (float)FUN_00165cf0(fStack_4,iVar3);
      *(undefined4 *)(iVar1 + 0x268) = *(undefined4 *)(iVar2 + 0xb14);
      fVar4 = *(float *)(param_1 + 0xb68);
      fVar5 = -fVar4;
      if ((-fVar4 <= fVar6) && (fVar5 = fVar4, fVar6 <= fVar4)) {
        fVar5 = fVar6;
      }
      fVar4 = (float)FUN_001661c0(fVar5,iVar3);
      *(float *)(iVar1 + 0x298) = fVar5 * *(float *)(param_1 + 0x86c);
      *(float *)(iVar1 + 700) = fVar4 * *(float *)(param_1 + 0x86c);
      fVar5 = (float)FUN_00120a68(*(undefined4 *)(iVar2 + 0xb18));
      fStack_4 = -fVar5;
      if (fStack_4 <= fVar4) {
        if (fVar4 <= fVar5) {
          fVar5 = fVar4;
        }
        fStack_4 = fVar5;
      }
      fStack_4 = (float)FUN_00120a68();
    }
    else {
      uVar7 = FUN_00165a80(iVar3,&fStack_4);
      *(undefined4 *)(iVar1 + 0x268) = uVar7;
      fVar5 = 1.0;
      if ((*(float *)(iVar1 + 0x28c) != 0.0) ||
         (0.0 <= *(float *)(iVar1 + 0x2c8) * *(float *)(param_1 + 0x86c))) {
        fVar4 = *(float *)(iVar1 + 0x294);
      }
      else {
        fVar5 = -1.0;
        fVar4 = *(float *)(iVar1 + 0x294);
      }
      fVar6 = *(float *)(param_1 + 0x86c);
      *(float *)(iVar1 + 0x298) = fVar4;
      fVar4 = (float)FUN_001661c0(fVar4 * fVar6 * fVar5,iVar3);
      *(float *)(iVar1 + 700) = fVar5 * fVar4 * *(float *)(param_1 + 0x86c);
      fStack_4 = (float)FUN_00120a68(fStack_4);
      fVar5 = (float)FUN_00120a68(fVar5 * fVar4);
      if (fStack_4 < fVar5) {
        fStack_4 = fVar5;
      }
    }
  }
  return fStack_4;
}

// 0x0016aa00  size 0x174
void FUN_0016aa00(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_4;
  
  iVar1 = param_1 + (param_2 & 1) * 0x3c;
  iVar2 = param_1 + param_2 * 0x140;
  if (*(char *)(iVar2 + 0x1c1) == '\0') {
    *(undefined4 *)(iVar2 + 0x2b8) = 0;
    *(undefined4 *)(iVar2 + 700) = 0;
    *(undefined4 *)(iVar2 + 0x298) = 0;
    *(undefined4 *)(iVar2 + 0x268) = 0xbe4ccccd;
  }
  else {
    *(undefined4 *)(iVar2 + 0x298) = *(undefined4 *)(iVar2 + 0x294);
    uStack_4 = 0xbf800000;
    uVar4 = FUN_00165a80(iVar1 + 0xae4,&uStack_4);
    *(undefined4 *)(iVar2 + 0x268) = uVar4;
    if ((*(char *)(iVar2 + 0x287) == '\0') && (*(char *)(iVar2 + 0x286) == '\0')) {
      fVar6 = *(float *)(iVar2 + 0x2c4);
      fVar5 = *(float *)(iVar2 + 0x2b8);
      fVar7 = *(float *)(iVar2 + 0x2c0) + *(float *)(iVar2 + 0x2b4);
      fVar3 = fVar5 * fVar5 + fVar7 * fVar7;
      if (fVar6 * fVar6 < fVar3) {
        fVar6 = fVar6 * (1.0 / SQRT(fVar3));
        fVar7 = fVar7 * fVar6;
        *(float *)(iVar2 + 0x2b8) = fVar5 * fVar6;
      }
      *(undefined4 *)(iVar2 + 0x298) = 0;
      *(float *)(iVar2 + 700) = fVar7;
    }
    else {
      uVar4 = *(undefined4 *)(iVar2 + 0x290);
      fVar3 = (float)FUN_00120d18(uVar4);
      *(float *)(iVar1 + 0xb08) = *(float *)(iVar1 + 0xb04) * fVar3;
      *(undefined4 *)(iVar1 + 0xb0c) = uVar4;
      *(undefined4 *)(iVar2 + 0x298) = *(undefined4 *)(iVar2 + 0x294);
      fVar3 = (float)FUN_001661c0(*(float *)(iVar2 + 0x294) * *(float *)(param_1 + 0x86c),
                                  iVar1 + 0xae4);
      *(float *)(iVar2 + 700) = *(float *)(param_1 + 0x86c) * fVar3;
    }
  }
  return;
}

// 0x0016ab80  size 0x110
void FUN_0016ab80(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = 0;
  iVar1 = param_1;
  do {
    fVar3 = -*(float *)(iVar1 + 0x28c) * *(float *)(param_1 + 0x870);
    if (0.52 < fVar3) {
      fVar3 = -fVar3 * 0.032 + 0.52;
    }
    else if (fVar3 < -0.52) {
      fVar3 = -fVar3 * 0.032 - 0.52;
    }
    fVar3 = *(float *)(iVar1 + 0x1d0) + fVar3;
    fVar3 = (fVar3 + 0.0) - (float)(int)(fVar3 * 0.15915494) * 6.2831855;
    *(float *)(iVar1 + 0x1d0) = fVar3;
    if (fVar3 <= 3.1415927) {
      if (fVar3 < -3.1415927) {
        *(float *)(iVar1 + 0x1d0) = *(float *)(iVar1 + 0x1d0) + 6.2831855;
      }
    }
    else {
      *(float *)(iVar1 + 0x1d0) = fVar3 - 6.2831855;
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x140;
  } while (uVar2 < 4);
  return;
}

// 0x0016aca0  size 0x180
void FUN_0016aca0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(param_1 + 0x160) != 0) {
    fVar6 = *(float *)(param_1 + 0x44);
    uVar5 = 0;
    iVar3 = param_1;
    iVar4 = param_1;
    do {
      if (*(char *)(iVar4 + 0x1c1) != '\0') {
        fVar8 = 0.01;
        iVar1 = *(int *)(iVar3 + 0x7c0);
        if (*(char *)(param_1 + 0x9a8) != '\0') {
          if (uVar5 < 2) {
            iVar2 = *(int *)(param_1 + (uint)*(byte *)(iVar4 + 0x1c8) * 4 + 0x9ac);
          }
          else {
            iVar2 = *(int *)(param_1 + (uint)*(byte *)(iVar4 + 0x1c8) * 4 + 0xa2c);
          }
          if (iVar2 != 0) {
            fVar8 = *(float *)(iVar2 + 4);
          }
        }
        *(float *)(iVar4 + 0x25c) = fVar8;
        fVar9 = *(float *)(iVar4 + 0x28c) * *(float *)(iVar1 + 0x34);
        fVar8 = fVar6 * 0.25 * 9.8 * (*(float *)(*(int *)(param_1 + 0x120) + 0x6dc) + fVar8);
        fVar7 = (float)FUN_00120a68(fVar9);
        if (fVar7 < 0.03) {
          fVar9 = 0.0;
        }
        fVar9 = fVar8 * fVar9;
        fVar7 = -fVar8;
        if (fVar9 < fVar7) {
          fVar9 = *(float *)(iVar4 + 0x2b0);
        }
        else {
          if (fVar9 <= fVar8) {
            fVar8 = fVar9;
          }
          fVar9 = *(float *)(iVar4 + 0x2b0);
          fVar7 = fVar8;
        }
        *(float *)(iVar4 + 0x2b0) = fVar9 - fVar7;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x140;
      iVar3 = iVar3 + 4;
    } while (uVar5 < 4);
  }
  return;
}

// 0x0016ae20  size 0x1c0
void FUN_0016ae20(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  fVar3 = *(float *)(param_1 + 400);
  iVar1 = *(int *)(param_1 + 0x120);
  fVar4 = *(float *)(iVar1 + 0x740) * *(float *)(param_1 + 0x8a4);
  fVar5 = fVar4 * fVar3 * fVar3 * *(float *)(iVar1 + 0x738) * 0.6;
  if (0.0 < fVar3) {
    fVar5 = fVar5 * -1.0;
  }
  fVar2 = *(float *)(param_1 + 0x198);
  fVar4 = fVar4 * fVar2 * fVar2 * *(float *)(iVar1 + 0x73c) * 0.6;
  if (0.0 < fVar2) {
    fVar4 = fVar4 * -1.0;
  }
  FUN_001638b0(fVar5,auStack_50,param_1 + 0x80);
  FUN_001638b0(fVar4,auStack_60,param_1 + 0x90);
  FUN_00163b80(auStack_10,auStack_50,auStack_60);
  FUN_00163b00(param_1 + 0x950,auStack_10);
  if (0.0 < *(float *)(param_1 + 400)) {
    fStack_78 = -*(float *)(param_1 + 0x78);
    fStack_7c = -*(float *)(param_1 + 0x74);
    fStack_80 = -*(float *)(param_1 + 0x70);
    FUN_001638b0(fVar3 * fVar3,auStack_70,&fStack_80);
    FUN_001638b0(0x3f000000,auStack_20,auStack_70);
    FUN_001638b0(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x744),auStack_30,auStack_20);
    FUN_001638b0(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x748),auStack_40,auStack_20);
    FUN_00163b00(param_1 + 0x920,auStack_30);
    FUN_00163b00(param_1 + 0x910,auStack_30);
    FUN_00163b00(param_1 + 0x940,auStack_40);
    FUN_00163b00(param_1 + 0x930,auStack_40);
  }
  return;
}

// 0x0016afe0  size 0xf8
void FUN_0016afe0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_10 [16];
  
  uVar3 = 0;
  iVar2 = param_1;
  iVar1 = param_1;
  do {
    if (*(char *)(iVar2 + 0x1c1) != '\0') {
      fVar5 = 0.0;
      fVar4 = *(float *)(iVar2 + 0x2a4);
      if (uVar3 < 2) {
        if (fVar4 < 0.0) {
          fVar5 = -*(float *)(*(int *)(param_1 + 0x120) + 0x74c) * fVar4;
        }
      }
      else if (fVar4 < 0.0) {
        fVar5 = *(float *)(*(int *)(param_1 + 0x120) + 0x750) * fVar4;
      }
      else {
        fVar5 = *(float *)(*(int *)(param_1 + 0x120) + 0x754) * fVar4;
      }
      FUN_001638b0(fVar5,auStack_10,param_1 + 0x70);
      FUN_00163b00(iVar1 + 0x910,auStack_10);
      *(float *)(iVar2 + 0x1b8) = *(float *)(iVar2 + 0x1b8) + fVar5;
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x140;
    iVar1 = iVar1 + 0x10;
  } while (uVar3 < 4);
  return;
}

// 0x0016b0e0  size 0x2bc
void FUN_0016b0e0(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 2000) = 0;
  *(undefined4 *)(param_1 + 0x7d4) = 1;
  *(undefined4 *)(param_1 + 0x7d8) = 2;
  *(undefined4 *)(param_1 + 0x7dc) = 3;
  do {
    uVar6 = 3;
    if (uVar7 < 3) {
      iVar4 = param_1 + 0xc;
      do {
        iVar1 = *(int *)(iVar4 + 2000);
        if (*(float *)(param_1 + iVar1 * 0x140 + 0x200) <
            *(float *)(param_1 + *(int *)(iVar4 + 0x7cc) * 0x140 + 0x200)) {
          *(int *)(iVar4 + 2000) = *(int *)(iVar4 + 0x7cc);
          *(int *)(iVar4 + 0x7cc) = iVar1;
        }
        uVar6 = uVar6 - 1;
        iVar4 = iVar4 + -4;
      } while (uVar7 < uVar6);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  uVar7 = 0;
  iVar4 = param_1;
  do {
    iVar1 = param_1 + *(int *)(iVar4 + 2000) * 0x140;
    FUN_0016b3b0(param_1);
    fVar10 = *(float *)(iVar1 + 0x200);
    fVar10 = fVar10 - fVar10;
    if ((0.0 < fVar10) && (uVar7 != 3)) {
      iVar9 = uVar7 + 1;
      if (iVar9 < 4) {
        iVar8 = param_1 + iVar9 * 4;
        do {
          iVar2 = param_1 + *(int *)(iVar8 + 2000) * 0x140;
          *(float *)(iVar2 + 0x200) = *(float *)(iVar2 + 0x200) + fVar10;
          FUN_001638b0(fVar10,auStack_20,iVar1 + 0x210);
          FUN_00163b00(iVar2 + 0x1f0,auStack_20);
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar9 < 4);
      }
    }
    uVar7 = uVar7 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar7 < 4);
  uVar7 = 0;
  do {
    if (uVar7 == 0) {
      iVar4 = *(int *)(param_1 + 0x120) + 0x180;
      pfVar5 = (float *)(param_1 + 0x1b0);
      pfVar3 = (float *)(param_1 + 0x2f0);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x120) + 0x290;
      pfVar5 = (float *)(param_1 + 0x430);
      pfVar3 = (float *)(param_1 + 0x570);
    }
    if ((*(char *)((int)pfVar5 + 0x11) != '\0') && (*(char *)((int)pfVar3 + 0x11) != '\0')) {
      fVar10 = (*pfVar5 - *pfVar3) * *(float *)(iVar4 + 0x84) * 0.5;
      pfVar5[2] = pfVar5[2] + fVar10;
      pfVar3[2] = fVar10 * -1.0 + pfVar3[2] + 0.0;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  uVar7 = 0;
  iVar4 = param_1;
  iVar1 = param_1;
  do {
    FUN_001638b0(*(undefined4 *)(iVar4 + 0x1b8),auStack_10,param_1 + 0x70);
    FUN_00163b00(iVar1 + 0x910,auStack_10);
    uVar7 = uVar7 + 1;
    iVar4 = iVar4 + 0x140;
    iVar1 = iVar1 + 0x10;
  } while (uVar7 < 4);
  return;
}

// 0x0016b3b0  size 0x1b8
void FUN_0016b3b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_4;
  
  iVar3 = (int)param_1;
  iVar4 = iVar3 + (int)param_2 * 0x140;
  iVar1 = *(int *)((int)param_2 * 4 + iVar3 + 0x7c0);
  pfVar2 = (float *)(iVar4 + 0x1b0);
  *(undefined4 *)(iVar4 + 0x1bc) = *(undefined4 *)(iVar4 + 0x1b8);
  *(undefined1 *)(iVar4 + 0x1c0) = 0;
  fVar5 = (float)FUN_00166570(param_1,param_2,iVar4 + 0x1f0);
  fVar5 = -*(float *)(iVar4 + 0x200) - fVar5;
  if (fVar5 <= *(float *)(iVar1 + 0x78)) {
    FUN_00164eb0(&fStack_30,*(undefined4 *)(iVar3 + 0x154),iVar4 + 0x1f0);
    fStack_18 = -fStack_28;
    fStack_1c = -fStack_2c;
    fStack_20 = -fStack_30;
    fStack_4 = (float)FUN_00163750(&fStack_20,iVar3 + 0xb0);
    fVar5 = (float)FUN_0016b7b0(fVar5,param_1,param_2,&fStack_4);
    fVar5 = *(float *)(iVar1 + 0x80) + fVar5;
    *(float *)(iVar4 + 0x1b4) = -fStack_4;
    if (*pfVar2 < *(float *)(iVar1 + 0x7c)) {
      *pfVar2 = *(float *)(iVar1 + 0x7c);
      fVar5 = 0.0;
      *(undefined1 *)(iVar4 + 0x1c1) = 0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
      *(undefined1 *)(iVar4 + 0x1c1) = 0;
    }
    else {
      *(undefined1 *)(iVar4 + 0x1c1) = 1;
      *(int *)(iVar3 + 0x160) = *(int *)(iVar3 + 0x160) + 1;
    }
  }
  else {
    fVar5 = (float)FUN_0016b570(param_1,param_2);
    *(float *)(iVar4 + 0x200) = *(float *)(iVar4 + 0x200) + fVar5;
    *pfVar2 = *(float *)(iVar1 + 0x78);
    *(undefined4 *)(iVar4 + 0x1b4) = 0;
    fVar6 = *(float *)(iVar1 + 0x80);
    fVar7 = *(float *)(iVar1 + 0x6c);
    fVar5 = *(float *)(iVar1 + 0x78);
    *(undefined1 *)(iVar4 + 0x1c0) = 1;
    fVar5 = fVar7 * fVar5 + fVar6 + 0.0;
    *(undefined1 *)(iVar4 + 0x1c1) = 1;
    *(int *)(iVar3 + 0x160) = *(int *)(iVar3 + 0x160) + 1;
  }
  *(float *)(iVar4 + 0x1b8) = fVar5;
  return;
}

// 0x0016b570  size 0x238
float FUN_0016b570(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
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
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1 + param_2 * 0x140;
  iVar5 = iVar3 + 0x210;
  iVar4 = iVar3 + 0x1f0;
  fVar6 = (float)FUN_001638e0(*(int *)(param_2 * 4 + param_1 + 0x7b0) + 0x50,iVar5);
  if (fVar6 <= 0.0) {
    uStack_10 = DAT_003625e0;
    uStack_c = DAT_003625e4;
    uStack_8 = DAT_003625e8;
    uStack_4 = DAT_003625ec;
    if ((*(byte *)(iVar3 + 0x1c8) & 2) == 0) {
      fVar6 = (float)FUN_001647f0(*(undefined4 *)(param_1 + 0x154),iVar4,iVar5);
      FUN_001638b0(fVar6 * 1.1,&uStack_70,iVar5);
      uStack_10 = uStack_70;
      uStack_c = uStack_6c;
      uStack_8 = uStack_68;
      uStack_4 = uStack_64;
    }
    else {
      uVar7 = FUN_001647f0(*(undefined4 *)(param_1 + 0x154),iVar4,param_1 + 0x20);
      FUN_001638b0(uVar7,&uStack_60,param_1 + 0x20);
      uStack_10 = uStack_60;
      uStack_c = uStack_5c;
      uStack_8 = uStack_58;
      uStack_4 = uStack_54;
    }
    uVar2 = FUN_00165110(*(undefined4 *)(param_1 + 0x154));
    FUN_00163b40(auStack_20,iVar4,uVar2);
    FUN_00163800(auStack_30,auStack_20,&uStack_10);
    uVar2 = FUN_00165300(*(undefined4 *)(param_1 + 0x154));
    FUN_00163b80(auStack_80,uVar2,auStack_30);
    FUN_00165310(*(undefined4 *)(param_1 + 0x154),auStack_80);
    uVar2 = FUN_00164f50(*(undefined4 *)(param_1 + 0x154));
    uVar7 = FUN_00165380(*(undefined4 *)(param_1 + 0x154));
    FUN_001638b0(uVar7,auStack_a0,&uStack_10);
    FUN_00163b80(auStack_90,uVar2,auStack_a0);
    FUN_00164f60(*(undefined4 *)(param_1 + 0x154),auStack_90);
    fVar6 = -*(float *)(*(int *)(param_2 * 4 + param_1 + 0x7c0) + 0x78) - *(float *)(iVar3 + 0x200);
    FUN_001638b0(fVar6,auStack_40,iVar5);
    puVar1 = (undefined4 *)FUN_00165250(*(undefined4 *)(param_1 + 0x154));
    uStack_50 = *puVar1;
    uStack_4c = puVar1[1];
    uStack_48 = puVar1[2];
    uStack_44 = puVar1[3];
    FUN_00163b80(auStack_b0,&uStack_50,auStack_40);
    FUN_00165260(*(undefined4 *)(param_1 + 0x154),auStack_b0);
    FUN_00163b00(iVar4,auStack_40);
  }
  else {
    fVar6 = 0.0;
  }
  return fVar6;
}

// 0x0016b7b0  size 0x120
float FUN_0016b7b0(float param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = param_3 * 0x140 + param_2;
  iVar1 = *(int *)(param_3 * 4 + param_2 + 0x7c0);
  fVar4 = param_1 - *(float *)(iVar2 + 0x1b0);
  if (0.0 < fVar4) {
    fVar5 = *(float *)(iVar1 + 0x70);
  }
  else {
    fVar5 = *(float *)(iVar1 + 0x74);
  }
  fVar7 = *param_4;
  uVar3 = 0;
  fVar8 = *(float *)(param_2 + 0x87c);
  fVar5 = fVar7 * *(float *)(iVar1 + 0x60) - fVar5 * fVar4 * *(float *)(iVar1 + 100);
  fVar4 = fVar7;
  if (*(int *)(param_2 + 0x880) != 0) {
    do {
      fVar6 = -*(float *)(iVar1 + 0x6c) * param_1;
      if (0.0 < fVar4) {
        fVar4 = (fVar6 + 0.0) - *(float *)(iVar1 + 0x70) * fVar4;
      }
      else {
        fVar4 = (fVar6 + 0.0) - *(float *)(iVar1 + 0x74) * fVar4;
      }
      fVar5 = fVar4 * fVar8 + fVar5 + 0.0;
      fVar4 = fVar5 * *(float *)(iVar1 + 100);
      *param_4 = fVar4;
      param_1 = fVar4 * fVar8 + param_1 + 0.0;
      if (*(float *)(iVar1 + 0x78) <= param_1) {
        param_1 = *(float *)(iVar1 + 0x78);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x880));
  }
  *(float *)(iVar2 + 0x1b0) = param_1;
  return *(float *)(iVar1 + 0x60) * (-(*param_4 - fVar7) / *(float *)(param_2 + 0x870));
}

// 0x0016b8e0  size 0x200
void FUN_0016b8e0(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_20 [16];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  uVar2 = 0;
  iVar1 = param_1;
  do {
    fStack_10 = *(float *)(iVar1 + 0x2e0);
    fVar5 = 0.0;
    fStack_c = *(float *)(iVar1 + 0x2e4);
    fStack_8 = *(float *)(iVar1 + 0x2e8);
    uStack_4 = *(undefined4 *)(iVar1 + 0x2ec);
    if (0.01 < fStack_8 * fStack_8 + fStack_10 * fStack_10 + fStack_c * fStack_c) {
      FUN_001638b0(0x447a0000,auStack_20,&fStack_10);
      fVar3 = (float)FUN_001638e0(auStack_20,iVar1 + 0x230);
      fVar3 = *(float *)(param_1 + 0x86c) * fVar3;
      fVar4 = (float)FUN_001638e0(auStack_20,iVar1 + 0x220);
      if (0.0001 < fVar3 * fVar3) {
        fVar5 = (float)FUN_00120a68(fVar3);
        fVar3 = (float)FUN_00120a68(fVar4);
        if (fVar3 < fVar5 * 0.3) {
          fVar5 = fVar4 / fVar5;
        }
        else {
          fVar5 = (float)FUN_00120dc0(fVar4,fVar5);
        }
        fVar5 = -fVar5;
      }
    }
    uVar2 = uVar2 + 1;
    *(float *)(iVar1 + 0x290) = fVar5;
    iVar1 = iVar1 + 0x140;
  } while (uVar2 < 4);
  *(undefined1 *)(param_1 + 0x88d) = 0;
  fVar5 = (float)FUN_00120a68(*(undefined4 *)(param_1 + 0x510));
  if ((0.34 < fVar5) &&
     (fVar5 = (float)FUN_00120a68(*(undefined4 *)(param_1 + 0x650)), 0.34 < fVar5)) {
    *(undefined1 *)(param_1 + 0x88d) = 1;
  }
  return;
}

// 0x0016baf0  size 0x4c0
void FUN_0016baf0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar3 = (undefined4 *)(param_1 + 0x80);
  puVar2 = (undefined4 *)(param_1 + 0x90);
  fVar13 = *(float *)(param_1 + 0x13c);
  fVar7 = (float)FUN_00120c30(fVar13);
  uVar8 = FUN_00120990(fVar13);
  FUN_001638b0(uVar8,auStack_20,puVar3);
  FUN_001638b0(-fVar7,auStack_30,puVar2);
  FUN_00163b80(&uStack_10,auStack_20,auStack_30);
  *(undefined4 *)(param_1 + 0x6f0) = uStack_10;
  *(undefined4 *)(param_1 + 0x6f4) = uStack_c;
  *(undefined4 *)(param_1 + 0x6f8) = uStack_8;
  *(undefined4 *)(param_1 + 0x6fc) = uStack_4;
  FUN_001638b0(fVar7,auStack_50,puVar3);
  FUN_001638b0(uVar8,auStack_60,puVar2);
  FUN_00163b80(&uStack_40,auStack_50,auStack_60);
  *(undefined4 *)(param_1 + 0x6e0) = uStack_40;
  *(undefined4 *)(param_1 + 0x6e4) = uStack_3c;
  *(undefined4 *)(param_1 + 0x6e8) = uStack_38;
  *(undefined4 *)(param_1 + 0x6ec) = uStack_34;
  fVar12 = *(float *)(*(int *)(param_1 + 0x120) + 0x250);
  fVar9 = (float)FUN_00120dc0(*(undefined4 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1cc));
  fVar7 = *(float *)(*(int *)(param_1 + 0x7c0) + 0x30);
  fVar10 = (float)FUN_00120dc0(*(undefined4 *)(param_1 + 0x2f0),-*(float *)(param_1 + 0x30c));
  fVar11 = *(float *)(*(int *)(param_1 + 0x7c4) + 0x30);
  *(float *)(param_1 + 0x1d8) = fVar12 + fVar7 * -fVar9;
  *(float *)(param_1 + 0x318) = -fVar12 + fVar11 * fVar10;
  fVar9 = fVar13 + *(float *)(param_1 + 0x1d8);
  fVar7 = (float)FUN_00120c30(fVar9);
  uVar8 = FUN_00120990(fVar9);
  FUN_001638b0(uVar8,auStack_80,puVar3);
  FUN_001638b0(-fVar7,auStack_90,puVar2);
  FUN_00163b80(&uStack_70,auStack_80,auStack_90);
  *(undefined4 *)(param_1 + 0x230) = uStack_70;
  *(undefined4 *)(param_1 + 0x234) = uStack_6c;
  *(undefined4 *)(param_1 + 0x238) = uStack_68;
  *(undefined4 *)(param_1 + 0x23c) = uStack_64;
  FUN_001638b0(fVar7,auStack_b0,puVar3);
  FUN_001638b0(uVar8,auStack_c0,puVar2);
  FUN_00163b80(&uStack_a0,auStack_b0,auStack_c0);
  *(undefined4 *)(param_1 + 0x220) = uStack_a0;
  *(undefined4 *)(param_1 + 0x224) = uStack_9c;
  *(undefined4 *)(param_1 + 0x228) = uStack_98;
  *(undefined4 *)(param_1 + 0x22c) = uStack_94;
  fVar13 = fVar13 + *(float *)(param_1 + 0x318);
  fVar7 = (float)FUN_00120c30(fVar13);
  uVar8 = FUN_00120990(fVar13);
  FUN_001638b0(uVar8,auStack_e0,puVar3);
  FUN_001638b0(-fVar7,auStack_f0,puVar2);
  FUN_00163b80(&uStack_d0,auStack_e0,auStack_f0);
  *(undefined4 *)(param_1 + 0x370) = uStack_d0;
  *(undefined4 *)(param_1 + 0x374) = uStack_cc;
  *(undefined4 *)(param_1 + 0x378) = uStack_c8;
  *(undefined4 *)(param_1 + 0x37c) = uStack_c4;
  FUN_001638b0(fVar7,auStack_110,puVar3);
  FUN_001638b0(uVar8,auStack_120,puVar2);
  FUN_00163b80(&uStack_100,auStack_110,auStack_120);
  *(undefined4 *)(param_1 + 0x360) = uStack_100;
  *(undefined4 *)(param_1 + 0x364) = uStack_fc;
  *(undefined4 *)(param_1 + 0x368) = uStack_f8;
  *(undefined4 *)(param_1 + 0x36c) = uStack_f4;
  *(undefined4 *)(param_1 + 0x770) = *puVar3;
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x760) = *puVar2;
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_1 + 0x9c);
  fVar11 = *(float *)(*(int *)(param_1 + 0x120) + 0x360);
  fVar7 = (float)FUN_00120dc0(*(undefined4 *)(param_1 + 0x430),*(undefined4 *)(param_1 + 0x44c));
  fVar7 = *(float *)(*(int *)(param_1 + 0x7c8) + 0x30) * fVar7;
  fVar9 = (float)FUN_00120dc0(*(undefined4 *)(param_1 + 0x570),-*(float *)(param_1 + 0x58c));
  fVar10 = *(float *)(*(int *)(param_1 + 0x7cc) + 0x30);
  *(float *)(param_1 + 0x458) = fVar11 + fVar7;
  *(float *)(param_1 + 0x598) = -fVar11 + fVar10 * -fVar9;
  uVar8 = *(undefined4 *)(param_1 + 0x458);
  fVar7 = (float)FUN_00120c30(uVar8);
  uVar8 = FUN_00120990(uVar8);
  FUN_001638b0(uVar8,auStack_140,puVar3);
  FUN_001638b0(-fVar7,auStack_150,puVar2);
  FUN_00163b80(&uStack_130,auStack_140,auStack_150);
  *(undefined4 *)(param_1 + 0x4b0) = uStack_130;
  *(undefined4 *)(param_1 + 0x4b4) = uStack_12c;
  *(undefined4 *)(param_1 + 0x4b8) = uStack_128;
  *(undefined4 *)(param_1 + 0x4bc) = uStack_124;
  FUN_001638b0(fVar7,auStack_170,puVar3);
  FUN_001638b0(uVar8,auStack_180,puVar2);
  FUN_00163b80(&uStack_160,auStack_170,auStack_180);
  *(undefined4 *)(param_1 + 0x4a0) = uStack_160;
  *(undefined4 *)(param_1 + 0x4a4) = uStack_15c;
  *(undefined4 *)(param_1 + 0x4a8) = uStack_158;
  *(undefined4 *)(param_1 + 0x4ac) = uStack_154;
  uVar8 = *(undefined4 *)(param_1 + 0x598);
  fVar7 = (float)FUN_00120c30(uVar8);
  uVar8 = FUN_00120990(uVar8);
  FUN_001638b0(uVar8,auStack_1a0,puVar3);
  FUN_001638b0(-fVar7,auStack_1b0,puVar2);
  FUN_00163b80(&uStack_190,auStack_1a0,auStack_1b0);
  *(undefined4 *)(param_1 + 0x5f0) = uStack_190;
  *(undefined4 *)(param_1 + 0x5f4) = uStack_18c;
  *(undefined4 *)(param_1 + 0x5f8) = uStack_188;
  *(undefined4 *)(param_1 + 0x5fc) = uStack_184;
  FUN_001638b0(fVar7,auStack_1d0,puVar3);
  FUN_001638b0(uVar8,auStack_1e0,puVar2);
  FUN_00163b80(&uStack_1c0,auStack_1d0,auStack_1e0);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x5e0) = uStack_1c0;
  *(undefined4 *)(param_1 + 0x5e4) = uStack_1bc;
  *(undefined4 *)(param_1 + 0x5e8) = uStack_1b8;
  *(undefined4 *)(param_1 + 0x5ec) = uStack_1b4;
  iVar5 = param_1;
  iVar4 = param_1;
  do {
    iVar1 = *(int *)(iVar4 + 0x7c0);
    *(undefined4 *)(iVar5 + 0x2cc) = *(undefined4 *)(iVar5 + 0x2c8);
    FUN_00164eb0(&uStack_1f0,*(undefined4 *)(param_1 + 0x154),iVar5 + 0x240);
    *(undefined4 *)(iVar5 + 0x2e0) = uStack_1f0;
    *(undefined4 *)(iVar5 + 0x2e4) = uStack_1ec;
    *(undefined4 *)(iVar5 + 0x2e8) = uStack_1e8;
    *(undefined4 *)(iVar5 + 0x2ec) = uStack_1e4;
    uVar8 = FUN_001638e0(iVar5 + 0x2e0,iVar5 + 0x230);
    *(undefined4 *)(iVar5 + 0x2c8) = uVar8;
    uVar8 = FUN_001638e0(iVar5 + 0x2e0,iVar5 + 0x220);
    *(undefined4 *)(iVar5 + 0x2d0) = uVar8;
    if ((uVar6 & 1) == 0) {
      fVar7 = (float)FUN_00120dc0(*(undefined4 *)(iVar5 + 0x1b0),*(undefined4 *)(iVar5 + 0x1cc));
      *(float *)(iVar5 + 0x1d4) =
           (*(float *)(iVar1 + 0xcc) + 0.0) - *(float *)(iVar1 + 0x30) * fVar7;
    }
    else {
      fVar7 = (float)FUN_00120dc0(*(undefined4 *)(iVar5 + 0x1b0),-*(float *)(iVar5 + 0x1cc));
      *(float *)(iVar5 + 0x1d4) = *(float *)(iVar1 + 0x30) * fVar7 + -*(float *)(iVar1 + 0xcc) + 0.0
      ;
    }
    FUN_00163540(*(undefined4 *)(iVar5 + 0x1d4),iVar5 + 0x1e0,0x362560);
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 0x140;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 4);
  return;
}

// 0x0016bfb0  size 0x120
float FUN_0016bfb0(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_2 + 0x120);
  if (param_1 < 1.0) {
    if (param_1 <= *(float *)(iVar1 + 0x68c)) {
      param_1 = *(float *)(iVar1 + 0x68c);
    }
    param_1 = param_1 * 32.0;
    if (param_1 < 2.1474836e+09) {
      uVar3 = (uint)param_1;
    }
    else {
      uVar3 = (int)(param_1 - 2.1474836e+09) | 0x80000000;
    }
    uVar3 = uVar3 - 1;
    if (uVar3 == 0x20) {
      fVar4 = *(float *)(iVar1 + 0x5bc);
    }
    else {
      param_1 = param_1 - 1.0;
      if (param_1 < 0.0) {
        param_1 = 0.0;
      }
      iVar2 = uVar3 * 4 + iVar1 + 0x524;
      fVar4 = (1.0 - (param_1 - (float)uVar3)) * *(float *)(iVar2 + 0x18) +
              (param_1 - (float)uVar3) * *(float *)(iVar2 + 0x1c);
    }
    fVar4 = fVar4 * *(float *)(iVar1 + 0x5c0) * *(float *)(param_2 + 0xac8);
  }
  else {
    fVar4 = 0.0;
  }
  return fVar4;
}

