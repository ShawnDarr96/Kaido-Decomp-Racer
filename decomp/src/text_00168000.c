// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00168000 - 0x0016c000
#include "ghidra_types.h"

// 0x00168070  size 0x634
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateDiffFront(RaceCar *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  undefined **ppuVar6;
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
  
  uVar9 = (&param_1->unk_07c0)[param_2];
  fVar11 = param_1->maybe_rpmLimit;
  puVar1 = param_1->maybe_params;
  fVar14 = *(float *)(uVar9 + 0x34);
  uVar2 = (&param_1->unk_07b0)[param_2];
  fVar10 = *(float *)(uVar9 + 200);
  pfVar8 = (float *)(uVar9 + 0x34);
  pfVar5 = (float *)(uVar9 + 0x38);
  if (param_2 < param_2 + 2) {
    ppuVar6 = &param_1->vtable + param_2 * 0x50;
    uVar9 = param_2;
    do {
      ppuVar6[0xa2] = ppuVar6[0xa3];
      cVar4 = *(char *)((int)ppuVar6 + 0x287);
      pfVar7 = (float *)(ppuVar6 + 0xb2);
      if ((cVar4 == '\0') &&
         (cVar4 = (float)ppuVar6[0x9e] < 0.95, (float)ppuVar6[0xb2] * (float)param_1->unk_0190 < 0.0
         )) {
        cVar4 = '\x01';
      }
      ppuVar6[0x9b] = (undefined *)((float)ppuVar6[0x9b] * fVar11 * (fVar14 / fVar10));
      bVar3 = false;
      if (((*(char *)((int)ppuVar6 + 0x286) != '\0') && (bVar3 = 0.3 < (float)ppuVar6[0x98], !bVar3)
          ) && (bVar3 = false, 0.3 < param_1->maybe_throttleInput)) {
        bVar3 = 1 < param_2;
      }
      if (bVar3) {
        ppuVar6[0xa3] = (undefined *)0x0;
        ppuVar6[0x9b] = (undefined *)0x0;
        fVar12 = (float)Vec3_Length(ppuVar6 + 0xb8);
        if (fVar12 <= 0.1) {
          *(undefined1 *)((int)ppuVar6 + 0x287) = 0;
          *(undefined1 *)((int)ppuVar6 + 0x286) = 0;
          ppuVar6[0xa3] = (undefined *)(*pfVar7 * *pfVar5);
          ppuVar6[0xa5] = (undefined *)0x0;
        }
        else {
          *(undefined1 *)((int)ppuVar6 + 0x286) = 1;
          fVar16 = 0.0;
          fVar15 = 0.0 - (float)ppuVar6[0xb2];
          fVar13 = (float)fabsf();
          fVar12 = (float)fabsf(0);
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
          ppuVar6[0xa5] = (undefined *)fVar16;
        }
      }
      else if (cVar4 == '\0') {
        fVar12 = *pfVar5;
        ppuVar6[0xa5] = ppuVar6[0xa6];
        ppuVar6[0xa3] = (undefined *)(*pfVar7 * fVar12);
        *(undefined1 *)((int)ppuVar6 + 0x287) = 0;
        *(undefined1 *)((int)ppuVar6 + 0x286) = 0;
      }
      else {
        *(undefined1 *)((int)ppuVar6 + 0x286) = 0;
        fVar15 = *pfVar8;
        fVar13 = param_1->maybe_rpmLimit;
        fVar12 = *(float *)(uVar2 + 0x6c);
        if (*(char *)((int)ppuVar6 + 0x287) == '\0') {
          fVar16 = (float)ppuVar6[0xa6] * (float)param_1->unk_086c;
          if (0.0 <= fVar16) {
            if (0.01 < 1.0 - fVar16) {
              ppuVar6[0xa3] = (undefined *)((*pfVar7 * *pfVar5) / (1.0 - fVar16));
            }
            else {
              ppuVar6[0xa3] =
                   (undefined *)
                   ((float)param_1->unk_086c * ((float)param_1->unk_07ec / (float)param_1->unk_0848)
                   );
            }
          }
          else {
            ppuVar6[0xa3] = (undefined *)((fVar16 + 1.0) * *pfVar7 * *pfVar5);
          }
        }
        fVar12 = (float)ppuVar6[0xa3] +
                 fVar13 * (((((float)ppuVar6[0xb0] + (float)ppuVar6[0xad]) - (float)ppuVar6[0xa9]) *
                           fVar15) / fVar12);
        ppuVar6[0xa3] = (undefined *)fVar12;
        if (fVar12 * (float)param_1->unk_086c < 0.0) {
          ppuVar6[0xa3] = (undefined *)0x0;
          fVar12 = (float)Vec3_Length(ppuVar6 + 0xb8);
          if (fVar12 < 0.1) {
            *(undefined1 *)((int)ppuVar6 + 0x286) = 0;
            *(undefined1 *)((int)ppuVar6 + 0x287) = 0;
          }
          else {
            *(undefined1 *)((int)ppuVar6 + 0x286) = 1;
            *(undefined1 *)((int)ppuVar6 + 0x287) = 1;
          }
        }
        fVar16 = 0.0;
        fVar12 = (float)ppuVar6[0xa3] * *pfVar8;
        fVar15 = fVar12 - *pfVar7;
        fVar13 = (float)fabsf();
        fVar12 = (float)fabsf(fVar12);
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
        ppuVar6[0xa5] = (undefined *)fVar16;
        fVar12 = (float)ppuVar6[0xa5];
        fVar13 = fVar12 - (float)ppuVar6[0xa6];
        if ((((fVar13 <= 0.0) && (fVar12 <= (float)param_1->unk_0b70)) && (0.0 <= fVar12)) ||
           ((((0.0 <= fVar13 && (-(float)param_1->unk_0b70 <= fVar12)) && (fVar12 <= 0.0)) ||
            (fVar12 * (float)ppuVar6[0xa6] < 0.0)))) {
          ppuVar6[0xa3] = (undefined *)(*pfVar7 * *pfVar5);
          *(undefined1 *)((int)ppuVar6 + 0x287) = 0;
          *(undefined1 *)((int)ppuVar6 + 0x286) = 0;
        }
      }
      if (0 < (int)param_1->gear) {
        fVar13 = (float)ppuVar6[0xa3];
        fVar12 = (*(float *)(puVar1 + 0x528) * 0.10471976) / (float)param_1->unk_0848;
        if (fVar13 < -fVar12) {
          ppuVar6[0xa3] = (undefined *)-fVar12;
        }
        else {
          if (fVar13 <= fVar12) {
            fVar12 = fVar13;
          }
          ppuVar6[0xa3] = (undefined *)fVar12;
        }
      }
      uVar9 = uVar9 + 1;
      ppuVar6 = ppuVar6 + 0x50;
    } while (uVar9 < param_2 + 2);
  }
  fVar10 = ((float)(&param_1->unk_028c)[param_2 * 0x50] +
           (float)(&param_1->unk_03cc)[param_2 * 0x50]) * 0.5;
  if ((float)param_1->unk_07e0 == 0.0) {
    param_1->unk_07e0 = (uint)fVar10;
    param_1->unk_07e4 = (uint)(fVar10 * *pfVar8);
  }
  else {
    param_1->unk_07e0 = (uint)(((float)param_1->unk_07e0 * 21.0 + fVar10 + 0.0) / 22.0);
    param_1->unk_07e4 = (uint)((fVar10 * *pfVar8 + (float)param_1->unk_07e4 + 0.0) * 0.5);
  }
  return;
}

// 0x001686b0  size 0x5b4
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateDiffRear(RaceCar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  undefined **ppuVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar1 = (&param_1->unk_07c0)[param_2];
  fVar11 = param_1->maybe_rpmLimit;
  fVar14 = *(float *)(uVar1 + 0x34);
  uVar2 = (&param_1->unk_07b0)[param_2];
  fVar9 = *(float *)(uVar1 + 200);
  pfVar5 = (float *)(uVar1 + 0x38);
  if (param_2 < param_2 + 2) {
    ppuVar6 = &param_1->vtable + param_2 * 0x50;
    uVar8 = param_2;
    do {
      ppuVar6[0xa2] = ppuVar6[0xa3];
      ppuVar6[0xa5] = (undefined *)0x0;
      cVar4 = *(char *)((int)ppuVar6 + 0x287);
      pfVar7 = (float *)(ppuVar6 + 0xb2);
      if (cVar4 == '\0') {
        cVar4 = (float)ppuVar6[0x9e] < 0.99;
      }
      ppuVar6[0x9b] = (undefined *)((float)ppuVar6[0x9b] * fVar11 * (fVar14 / fVar9));
      bVar3 = false;
      if (((*(char *)((int)ppuVar6 + 0x286) != '\0') && (bVar3 = 0.3 < (float)ppuVar6[0x98], !bVar3)
          ) && (bVar3 = false, 0.3 < param_1->maybe_throttleInput)) {
        bVar3 = 1 < param_2;
      }
      if (bVar3) {
        ppuVar6[0xa3] = (undefined *)0x0;
        ppuVar6[0x9b] = (undefined *)0x0;
        fVar10 = (float)Vec3_Length(ppuVar6 + 0xb8);
        if (fVar10 <= 0.1) {
          *(undefined1 *)((int)ppuVar6 + 0x287) = 0;
          *(undefined1 *)((int)ppuVar6 + 0x286) = 0;
          ppuVar6[0xa3] = (undefined *)(*pfVar7 * *pfVar5);
          ppuVar6[0xa5] = (undefined *)0x0;
        }
        else {
          *(undefined1 *)((int)ppuVar6 + 0x286) = 1;
          fVar13 = 0.0;
          fVar15 = 0.0 - *pfVar7;
          fVar12 = (float)fabsf();
          fVar10 = (float)fabsf(0);
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
          ppuVar6[0xa5] = (undefined *)fVar13;
        }
      }
      else if (cVar4 == '\0') {
        fVar10 = *pfVar5;
        ppuVar6[0xa5] = ppuVar6[0xa6];
        ppuVar6[0xa3] = (undefined *)(*pfVar7 * fVar10);
        *(undefined1 *)((int)ppuVar6 + 0x287) = 0;
        *(undefined1 *)((int)ppuVar6 + 0x286) = 0;
      }
      else {
        *(undefined1 *)((int)ppuVar6 + 0x286) = 0;
        fVar15 = *(float *)(uVar1 + 0x34);
        fVar10 = *(float *)(uVar2 + 0x6c);
        fVar12 = param_1->maybe_rpmLimit;
        if (*(char *)((int)ppuVar6 + 0x287) == '\0') {
          fVar13 = (float)ppuVar6[0xa6] * (float)param_1->unk_086c;
          if (0.0 <= fVar13) {
            if (0.01 < 1.0 - fVar13) {
              ppuVar6[0xa3] = (undefined *)((*pfVar7 * *pfVar5) / (1.0 - fVar13));
            }
            else {
              ppuVar6[0xa3] =
                   (undefined *)
                   ((float)param_1->unk_086c * ((float)param_1->unk_07ec / (float)param_1->unk_0848)
                   );
            }
          }
          else {
            ppuVar6[0xa3] = (undefined *)((fVar13 + 1.0) * *pfVar7 * *pfVar5);
          }
        }
        ppuVar6[0xa3] =
             (undefined *)
             ((float)ppuVar6[0xa3] +
             fVar12 * (((((float)ppuVar6[0xb0] + (float)ppuVar6[0xad]) - (float)ppuVar6[0xa9]) *
                       fVar15) / fVar10));
        if (0.3 < (float)ppuVar6[0x98]) {
          fVar10 = (float)ppuVar6[0xa3];
LAB_00168a60:
          if ((fVar10 * (float)ppuVar6[0xa2] <= 0.0) &&
             (fVar10 = (float)Vec3_Length(ppuVar6 + 0xb8), 0.1 < fVar10)) {
            ppuVar6[0xa3] = (undefined *)0x0;
            *(undefined1 *)((int)ppuVar6 + 0x286) = 1;
          }
        }
        else if ((0.3 < param_1->maybe_throttleInput) && (1 < param_2)) {
          fVar10 = (float)ppuVar6[0xa3];
          goto LAB_00168a60;
        }
        fVar13 = 0.0;
        fVar10 = (float)ppuVar6[0xa3] * *(float *)(uVar1 + 0x34);
        fVar15 = fVar10 - *pfVar7;
        fVar12 = (float)fabsf();
        fVar10 = (float)fabsf(fVar10);
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
        ppuVar6[0xa5] = (undefined *)fVar13;
        fVar10 = (float)ppuVar6[0xa5];
        fVar12 = fVar10 - (float)ppuVar6[0xa6];
        if ((((fVar12 <= 0.0) && (fVar10 <= (float)param_1->unk_0b70)) && (0.0 <= fVar10)) ||
           ((((0.0 <= fVar12 && (-(float)param_1->unk_0b70 <= fVar10)) && (fVar10 <= 0.0)) ||
            (fVar10 * (float)ppuVar6[0xa6] < 0.0)))) {
          ppuVar6[0xa3] = (undefined *)(*pfVar7 * *pfVar5);
          *(undefined1 *)((int)ppuVar6 + 0x287) = 0;
          *(undefined1 *)((int)ppuVar6 + 0x286) = 0;
        }
      }
      uVar8 = uVar8 + 1;
      ppuVar6 = ppuVar6 + 0x50;
    } while (uVar8 < param_2 + 2);
  }
  return;
}

// 0x00168c70  size 0x340
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_ApplySuspensionForces(RaceCar *param_1)

{
  bool bVar1;
  RaceCar *pRVar2;
  RaceCar *pRVar3;
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
  param_1->unk_0274 = 0;
  param_1->unk_03b4 = 0;
  param_1->unk_04f4 = 0;
  param_1->unk_0634 = 0;
  pRVar2 = param_1;
  pRVar3 = param_1;
  do {
    if (pRVar3->field_0x1c1 == '\0') {
      pRVar3->unk_0278 = 0x3f800000;
      pRVar3->unk_0274 = 0x3f800000;
      *(undefined4 *)&pRVar3->field_0x2a8 = 0;
      *(undefined4 *)&pRVar3->field_0x2a4 = 0;
    }
    else {
      fVar8 = (float)param_1->unk_086c;
      fVar9 = *(float *)&pRVar3->field_0x2b8;
      fVar7 = 1.0;
      fVar10 = *(float *)&pRVar3->field_0x2bc * fVar8;
      fVar8 = fVar8 * (*(float *)&pRVar3->field_0x2c0 + (float)pRVar3->unk_02b4);
      fVar5 = (float)fabsf(fVar10);
      fVar6 = (float)fabsf(fVar8);
      bVar1 = 0.1 < fVar6 - fVar5;
      if (pRVar3->field_0x287 == '\x01') {
        pRVar3->field_0x284 = 1;
        pRVar3->field_0x285 = 0;
        pRVar3->unk_0274 = 0x3f800000;
        if ((bVar1) && (fVar8 != 0.0)) {
          fVar7 = (float)fabsf(fVar10 / fVar8);
        }
        if (0.001 < fVar7) {
          pRVar3->unk_0274 = (uint)(1.0 / fVar7);
        }
        else {
          pRVar3->unk_0274 = 0x3f800000;
        }
      }
      else if ((((fVar8 < 0.0) && (0.0 < fVar10)) || ((0.0 < fVar8 && (fVar10 < 0.0)))) || (bVar1))
      {
        pRVar3->field_0x284 = 1;
        pRVar3->field_0x285 = 0;
        pRVar3->unk_0274 = 0x3f800000;
        if (fVar8 != 0.0) {
          fVar7 = (float)fabsf(fVar10 / fVar8);
        }
        if (0.001 < fVar7) {
          pRVar3->unk_0274 = (uint)(1.0 / fVar7);
        }
        else {
          pRVar3->unk_0274 = 0x3f800000;
        }
      }
      else {
        pRVar3->field_0x284 = 0;
        pRVar3->field_0x285 = 1;
        pRVar3->unk_0274 = 0x3f800000;
      }
      pRVar3->unk_0278 = (uint)fVar7;
      fVar7 = *(float *)&pRVar3->field_0x2c4 / SQRT(fVar10 * fVar10 + fVar9 * fVar9);
      if (1.0 < fVar7) {
        fVar7 = 1.0;
      }
      *(float *)&pRVar3->field_0x2a8 = fVar9 * fVar7;
      *(float *)&pRVar3->field_0x2a4 = fVar7 * fVar10 * (float)param_1->unk_086c;
      Vec3_Scale(auStack_20,&param_1->unk_0080);
      Vec3_Scale(*(undefined4 *)&pRVar3->field_0x2a8,auStack_30,&param_1->unk_0090);
      Vec3_Add(auStack_10,auStack_20,auStack_30);
      Vec3_AddInPlace(&pRVar2->unk_0910,auStack_10);
    }
    uVar4 = uVar4 + 1;
    pRVar3 = (RaceCar *)&pRVar3->unk_0140;
    pRVar2 = (RaceCar *)&pRVar2->unk_0010;
  } while (uVar4 < 4);
  return;
}

// 0x00168fc0  size 0x10
/* follows Car_ApplySuspensionForces; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Car_ApplySuspensionForces_Orphan1(void)

{
  return;
}

// 0x00168fd0  size 0x158
void Car_UpdateWheelSpin(int param_1)

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
        fVar7 = (float)fabsf(*(float *)(iVar5 + 0x1d4) * 0.15);
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* drive type +0x888 == 2 */

void Car_UpdateLsd(RaceCar *param_1)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  if (param_1->unk_0888 == 2) {
    fVar7 = *(float *)(param_1->maybe_params + 0xe4);
    fVar6 = 1.0 - fVar7;
    if (0 < (int)param_1->gear) {
      fVar2 = (float)fabsf(((float)param_1->unk_050c + (float)param_1->unk_064c) -
                           ((float)param_1->unk_028c + (float)param_1->unk_03cc));
      fVar4 = (float)fabsf(param_1->unk_0060);
      puVar1 = param_1->maybe_params;
      fVar4 = *(float *)(puVar1 + 0xe8) * (fVar4 / (float)param_1->unk_0044);
      if (1.0 < fVar4) {
        fVar4 = 1.0;
      }
      fVar4 = fVar4 * 15.0;
      if (fVar4 < 2.1474836e+09) {
        uVar5 = (uint)fVar4;
      }
      else {
        uVar5 = (int)(fVar4 - 2.1474836e+09) | 0x80000000;
      }
      if (uVar5 == 0xf) {
        fVar4 = *(float *)(puVar1 + 300);
      }
      else {
        fVar4 = (1.0 - (fVar4 - (float)uVar5)) * *(float *)(puVar1 + uVar5 * 4 + 0xf0) +
                (fVar4 - (float)uVar5) * *(float *)(puVar1 + uVar5 * 4 + 0xf4);
      }
      fVar4 = fVar4 * *(float *)(puVar1 + 0xec) * fVar2 * 0.5;
      fVar7 = fVar7 + fVar4;
      fVar6 = fVar6 - fVar4;
      if (0.5 < fVar7) {
        fVar7 = 0.5;
      }
      if (fVar6 < 0.5) {
        fVar6 = 0.5;
      }
    }
    param_1->unk_0714 = (uint)fVar7;
    param_1->unk_0794 = (uint)fVar6;
  }
  if (param_1->unk_0888 - 3 < 3) {
    fVar6 = *(float *)(param_1->maybe_params + 0xe4);
    fVar7 = 1.0 - fVar6;
    if ((0 < (int)param_1->gear) && (*(float *)(param_1->maybe_params + 0x134) != 0.0)) {
      fVar2 = (float)fabsf((float)param_1->unk_028c + (float)param_1->unk_03cc);
      fVar2 = fVar2 * 0.5;
      fVar3 = (float)fabsf((float)param_1->unk_050c + (float)param_1->unk_064c);
      fVar4 = (float)fabsf(fVar2 - fVar3 * 0.5);
      if (fVar4 <= 0.0) {
        fVar4 = -fVar4 / (fVar3 * 0.5);
      }
      else {
        fVar4 = fVar4 / fVar2;
      }
      fVar4 = fVar4 * 10.0;
      if (0.0 < fVar4) {
        if (1.0 < fVar4) {
          fVar4 = 1.0;
        }
        fVar6 = (*(float *)(param_1->maybe_params + 0xe4) - 0.5) * (1.0 - fVar4) + 0.5;
        fVar7 = 1.0 - fVar6;
      }
    }
    param_1->unk_0714 = (uint)fVar6;
    param_1->unk_0794 = (uint)fVar7;
  }
  return;
}

// 0x00169450  size 0x40c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_ApplyTireForces(RaceCar *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  RaceCar *pRVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
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
  
  uVar11 = param_1->unk_0190;
  fVar12 = param_1->maybe_boostInput;
  param_1->unk_026c = 0;
  param_1->unk_02b4 = 0;
  param_1->unk_03ac = 0;
  param_1->unk_03f4 = 0;
  param_1->unk_04ec = 0;
  param_1->unk_0534 = 0;
  param_1->unk_062c = 0;
  param_1->unk_0674 = 0;
  fVar5 = fVar12 + param_1->maybe_throttleInput;
  if (fVar5 != 0.0) {
    if ((fVar5 <= 0.3) || (fVar5 = (float)fabsf(uVar11), _s_Car_ApplyTireForces_1 <= fVar5)) {
      param_1->unk_0ab1 = '\0';
      fVar5 = (float)fabsf(param_1->unk_0190);
      if (fVar5 < 103.0) {
        fVar6 = 0.0;
        if (0.0 < fVar5) {
          fVar5 = fVar5 * 0.009708738 * 7.0;
          if (fVar5 < 2.1474836e+09) {
            uVar11 = (uint)fVar5;
          }
          else {
            uVar11 = (int)(fVar5 - 2.1474836e+09) | 0x80000000;
          }
          fVar6 = (1.0 - (fVar5 - (float)uVar11)) *
                  *(float *)(param_1->maybe_params + uVar11 * 4 + 0x144) +
                  (fVar5 - (float)uVar11) * *(float *)(param_1->maybe_params + uVar11 * 4 + 0x148);
        }
      }
      else {
        fVar6 = *(float *)(param_1->maybe_params + 0x160);
      }
      fVar6 = (float)param_1->unk_0044 * fVar6;
      fVar5 = fVar6 * *(float *)(param_1->maybe_params + 0x164);
      if ((param_1->unk_0160 != 0) && (0.1 < param_1->speed)) {
        uVar3 = PhysBody_GetPositionPtr(param_1->unk_0154);
        Vec3_Cross(&uStack_20,&param_1->unk_0070,uVar3);
        Vec3_Normalize(&uStack_20);
        Vec3_Cross(&uStack_40,&param_1->unk_0070,&uStack_20);
        uStack_20 = uStack_40;
        uStack_1c = uStack_3c;
        uStack_18 = uStack_38;
        uStack_14 = uStack_34;
        Vec3_ScaleInPlace(fVar12 * fVar5,&uStack_20);
        Vec3_AddInPlace(&param_1->unk_0950,&uStack_20);
      }
      puVar1 = param_1->maybe_params;
      uVar11 = 0;
      fVar5 = param_1->maybe_throttleInput;
      fVar6 = fVar6 * 0.25;
      fVar12 = *(float *)(puVar1 + 0x138);
      fVar7 = *(float *)(puVar1 + 0x13c);
      fVar8 = *(float *)(puVar1 + 0x140);
      pRVar4 = param_1;
      do {
        if ((float)param_1->unk_0bd0 == 100.0) {
          fVar10 = 1.0;
        }
        else {
          fVar10 = 0.0;
        }
        fVar10 = ((1.0 - (((float)pRVar4->unk_0270 - 20.0) * 0.3) /
                         *(float *)(param_1->maybe_params + 0xd4)) + 0.0) - fVar10 * 0.7;
        if (uVar11 < 2) {
          fVar9 = (float)pRVar4->unk_0260 * fVar6 * fVar12 * fVar10;
          pRVar4->unk_026c = (uint)fVar9;
        }
        else {
          fVar10 = (float)pRVar4->unk_0260 * fVar6 * fVar7 * fVar10;
          fVar9 = fVar10 + fVar5 * fVar6 * fVar8;
          pRVar4->unk_026c = (uint)fVar10;
        }
        if ((float)pRVar4->unk_028c <= 0.0) {
          if (0.0 <= (float)pRVar4->unk_028c) {
            if (0.0 <= *(float *)&pRVar4->field_0x2c8) {
              pRVar4->unk_02b4 = (uint)-fVar9;
            }
            else {
              pRVar4->unk_02b4 = (uint)fVar9;
            }
          }
          else {
            pRVar4->unk_02b4 = (uint)fVar9;
          }
        }
        else {
          pRVar4->unk_02b4 = (uint)-fVar9;
        }
        uVar11 = uVar11 + 1;
        pRVar4 = (RaceCar *)&pRVar4->unk_0140;
      } while (uVar11 < 4);
    }
    else {
      param_1->unk_028c = 0;
      param_1->unk_02b0 = 0;
      param_1->unk_02b4 = 0;
      param_1->unk_03cc = 0;
      param_1->unk_03f0 = 0;
      param_1->unk_03f4 = 0;
      param_1->unk_050c = 0;
      param_1->unk_0530 = 0;
      param_1->unk_0534 = 0;
      param_1->unk_064c = 0;
      param_1->unk_0670 = 0;
      param_1->unk_0674 = 0;
      puVar2 = (undefined4 *)PhysBody_GetPositionPtr(param_1->unk_0154);
      uStack_10 = *puVar2;
      uStack_c = puVar2[1];
      uStack_8 = puVar2[2];
      uStack_4 = puVar2[3];
      Vec3_Scale(uVar11,auStack_30,&param_1->unk_0080);
      Vec3_SubInPlace(&uStack_10,auStack_30);
      PhysBody_UpdateMomentum(param_1->unk_0154,&uStack_10);
    }
  }
  return;
}

// 0x00169860  size 0x7ec
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateClutchAndTorque(RaceCar *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  RaceCar *pRVar4;
  uint uVar5;
  RaceCar *pRVar6;
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
  
  puVar1 = param_1->maybe_params;
  fVar12 = 0.0;
  fVar10 = 0.0;
  fVar15 = *(float *)(puVar1 + 0x534);
  if (param_1->gear == 0xffffffff) {
    fVar16 = param_1->maybe_brakeInput;
  }
  else {
    fVar16 = param_1->maybe_handbrakeInput;
  }
  if (0.0 < (float)param_1->unk_080c) {
    fVar16 = (float)param_1->unk_080c - param_1->maybe_rpmLimit;
    param_1->unk_080c = (uint)fVar16;
    if (fVar16 < 0.0) {
      param_1->unk_0810 = '\0';
    }
    fVar16 = 0.0;
    param_1->unk_08f4 = 0;
    goto LAB_00169930;
  }
  if ((param_1->unk_0811 == '\0') || ((int)param_1->gear < 1)) {
    fVar7 = (float)param_1->unk_07fc;
LAB_00169900:
    if (fVar7 < fVar15) goto LAB_00169924;
    param_1->unk_080c = 0x3e19999a;
    param_1->unk_0810 = '\x01';
  }
  else {
    if ((float)param_1->unk_0820 == 0.0) {
      fVar7 = (float)param_1->unk_07fc;
      goto LAB_00169900;
    }
LAB_00169924:
    param_1->unk_080c = 0;
    param_1->unk_0810 = '\0';
  }
  param_1->unk_08f4 = (uint)fVar16;
LAB_00169930:
  if ((param_1->gear == 0) || ((float)param_1->unk_0820 == 0.0)) {
    fVar8 = (float)Car_TorqueCurveLookup(param_1->unk_07fc,fVar16,param_1);
    fVar15 = 0.0;
    fVar7 = 1.0;
    if (0.0 < fVar16) {
      fVar15 = fVar8 * fVar16;
    }
    param_1->unk_0804 =
         (uint)((fVar15 - (1.0 - *(float *)(puVar1 + 0x640)) * fVar8) -
               param_1->maybe_rpmLimit *
               (float)param_1->unk_07ec * (*(float *)(puVar1 + 0x63c) + *(float *)(puVar1 + 0x648)))
    ;
  }
  else {
    fVar14 = (float)param_1->unk_0848;
    fVar12 = (float)param_1->unk_0850;
    fVar8 = (float)param_1->unk_084c;
    fVar13 = *(float *)(param_1->maybe_params + 0x2c4) *
             ((((float)param_1->unk_07fc - (float)param_1->unk_0800) * *(float *)(puVar1 + 0x528) *
              0.10471976) / fVar14);
    fVar10 = (float)Car_TorqueCurveLookup(param_1->unk_07fc,fVar16,param_1);
    fVar12 = fVar12 * fVar13;
    fVar7 = 1.0;
    fVar11 = fVar14 * (1.0 - fVar8) * fVar10;
    fVar8 = param_1->maybe_rpmLimit *
            (float)param_1->unk_07ec * (*(float *)(puVar1 + 0x63c) + *(float *)(puVar1 + 0x648));
    if (1.0 <= (float)param_1->unk_0820) {
      fVar9 = 0.0;
      if (0.0 <= fVar16) {
        if (param_1->unk_0810 == '\0') {
          fVar9 = fVar14 * fVar10 * fVar16;
          param_1->unk_0808 = (uint)(fVar16 * fVar10 * *(float *)(puVar1 + 0x640) - fVar8);
        }
        else {
          fVar10 = (float)Car_TorqueCurveLookup
                                    (*(float *)(puVar1 + 0x530) / *(float *)(puVar1 + 0x528),param_1
                                    );
          fVar9 = -fVar10 * 0.3 * fVar14;
          param_1->unk_0808 = (uint)(-fVar10 * 0.3 * *(float *)(puVar1 + 0x640) - fVar8);
        }
      }
      else {
        param_1->unk_0808 = (uint)-fVar8;
        fVar11 = fVar14 * (1.0 - *(float *)(puVar1 + 0x644)) * fVar10 + fVar11 + 0.0;
      }
    }
    else {
      param_1->unk_0808 = (uint)(fVar16 * fVar10 * *(float *)(puVar1 + 0x640) - fVar8);
      if ((param_1->gear == 1) && (param_1->unk_0818 == 0)) {
        fVar9 = fVar14 * fVar10 * fVar16;
        fVar12 = fVar13 * (*(float *)(puVar1 + 0x63c) + *(float *)(puVar1 + 0x648));
      }
      else {
        fVar9 = (float)param_1->unk_0820 * fVar14 * fVar10 * fVar16;
        fVar12 = fVar12 * (float)param_1->unk_0820;
      }
    }
    if (param_1->unk_082f == '\x01') {
      if ((float)param_1->unk_07fc < fVar15) {
        param_1->unk_082f = '\0';
      }
    }
    else if ((param_1->unk_0832 == '\x01') &&
            (*(float *)(puVar1 + 0x530) * 0.10471976 < fVar14 * (float)param_1->unk_07e0)) {
      param_1->unk_082f = '\x01';
    }
    if (param_1->unk_082f == '\x01') {
      fVar10 = *(float *)(puVar1 + 0x5c0);
      param_1->unk_080c = 0;
      param_1->unk_0804 = (uint)(-fVar11 - fVar10 * fVar14 * 0.7);
    }
    else {
      param_1->unk_0804 = (uint)((fVar9 - fVar11) - fVar12);
    }
    fVar10 = (float)param_1->unk_0804;
    if (param_1->gear == 0xffffffff) {
      fVar10 = fVar10 * -1.0;
    }
    if ((float)param_1->unk_08a8 != 1.0) {
      fVar10 = fVar10 * (float)param_1->unk_08a8;
    }
    fVar15 = fVar10 * (float)param_1->unk_0714;
    fVar12 = fVar15 * *(float *)(param_1->maybe_params + 0x1b8) * 0.5;
    fVar10 = (fVar10 - fVar15) * *(float *)(param_1->maybe_params + 0x2c8) * 0.5;
  }
  param_1->unk_02b0 = (uint)fVar12;
  param_1->unk_03f0 = (uint)fVar12;
  param_1->unk_0530 = (uint)fVar10;
  param_1->unk_0670 = (uint)fVar10;
  if (param_1->unk_0888 != 5) {
    uVar5 = 0;
    iVar3 = 1;
    pRVar6 = param_1;
    pRVar4 = param_1;
    do {
      uVar2 = pRVar6->unk_07c0;
      if (*(float *)(&param_1->field_0x2c4 + iVar3 * 0x140) < *(float *)&pRVar4->field_0x2c4) {
        fVar10 = (float)fabsf((&param_1->unk_02b0)[iVar3 * 0x50]);
        if (*(float *)(&param_1->field_0x2c4 + iVar3 * 0x140) < fVar10) {
          fVar10 = (float)fabsf((&param_1->unk_02b0)[iVar3 * 0x50]);
          fVar10 = (float)fabsf(fVar10 - *(float *)(&param_1->field_0x2c4 + iVar3 * 0x140));
          fVar12 = (float)fabsf(*(undefined4 *)&pRVar4->field_0x2c4);
          fVar12 = (float)fabsf(fVar12 - *(float *)(&param_1->field_0x2c4 + iVar3 * 0x140));
          if (fVar12 / 2.0 < fVar10) {
            fVar10 = (float)fabsf(*(undefined4 *)&pRVar4->field_0x2c4);
            fVar10 = (float)fabsf(fVar10 - *(float *)(&param_1->field_0x2c4 + iVar3 * 0x140));
            fVar10 = fVar10 / 2.0;
          }
          if (0.0 < (float)(&param_1->unk_02b0)[iVar3 * 0x50]) {
            if (*(float *)(uVar2 + 0x10c) * *(float *)(uVar2 + 0x38) < fVar10) {
              fVar10 = fVar10 * (fVar7 - *(float *)(uVar2 + 0x104));
            }
            else {
              fVar10 = 0.0;
            }
          }
          else if (*(float *)(uVar2 + 0x10c) * *(float *)(uVar2 + 0x38) < fVar10) {
            fVar10 = fVar10 * (fVar7 - *(float *)(uVar2 + 0x108));
          }
          else {
            fVar10 = 0.0;
          }
          if (fVar10 < 0.0) {
            fVar10 = 0.0;
          }
          if (0.0 < (float)(&param_1->unk_02b0)[iVar3 * 0x50]) {
            pRVar4->unk_02b0 = (uint)((float)pRVar4->unk_02b0 - fVar10);
            (&param_1->unk_02b0)[iVar3 * 0x50] =
                 (uint)((float)(&param_1->unk_02b0)[iVar3 * 0x50] - fVar10);
          }
          else {
            pRVar4->unk_02b0 = (uint)((float)pRVar4->unk_02b0 + fVar10);
            (&param_1->unk_02b0)[iVar3 * 0x50] =
                 (uint)((float)(&param_1->unk_02b0)[iVar3 * 0x50] + fVar10);
          }
        }
      }
      else {
        fVar10 = (float)fabsf(pRVar4->unk_02b0);
        if (*(float *)&pRVar4->field_0x2c4 < fVar10) {
          fVar10 = (float)fabsf(pRVar4->unk_02b0);
          fVar10 = fVar10 - *(float *)&pRVar4->field_0x2c4;
          fVar12 = (float)fabsf();
          fVar12 = (float)fabsf(fVar12 - *(float *)(&param_1->field_0x2c4 + iVar3 * 0x140));
          if (fVar12 / 2.0 < fVar10) {
            fVar10 = (float)fabsf(*(undefined4 *)&pRVar4->field_0x2c4);
            fVar10 = (float)fabsf(fVar10 - *(float *)(&param_1->field_0x2c4 + iVar3 * 0x140));
            fVar10 = fVar10 / 2.0;
          }
          if (0.0 < (float)(&param_1->unk_02b0)[iVar3 * 0x50]) {
            if (*(float *)(uVar2 + 0x10c) * *(float *)(uVar2 + 0x38) < fVar10) {
              fVar10 = fVar10 * (fVar7 - *(float *)(uVar2 + 0x104));
            }
            else {
              fVar10 = 0.0;
            }
          }
          else if (*(float *)(uVar2 + 0x10c) * *(float *)(uVar2 + 0x38) < fVar10) {
            fVar10 = fVar10 * (fVar7 - *(float *)(uVar2 + 0x108));
          }
          else {
            fVar10 = 0.0;
          }
          if (fVar10 < 0.0) {
            fVar10 = 0.0;
          }
          if (0.0 < (float)pRVar4->unk_02b0) {
            pRVar4->unk_02b0 = (uint)((float)pRVar4->unk_02b0 - fVar10);
            (&param_1->unk_02b0)[iVar3 * 0x50] =
                 (uint)((float)(&param_1->unk_02b0)[iVar3 * 0x50] - fVar10);
          }
          else {
            pRVar4->unk_02b0 = (uint)((float)pRVar4->unk_02b0 + fVar10);
            (&param_1->unk_02b0)[iVar3 * 0x50] =
                 (uint)((float)(&param_1->unk_02b0)[iVar3 * 0x50] + fVar10);
          }
        }
      }
      uVar5 = uVar5 + 1;
      pRVar6 = (RaceCar *)&pRVar6->unk_0008;
      pRVar4 = (RaceCar *)&pRVar4->field_0x280;
      iVar3 = iVar3 + 2;
    } while (uVar5 < 2);
  }
  return;
}

// 0x0016a058  size 0xc
/* follows Car_UpdateClutchAndTorque; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Car_UpdateClutchAndTorque_Orphan1(void)

{
  return;
}

// 0x0016a070  size 0x344
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateParkingBrake(RaceCar *param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  RaceCar *pRVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar5 = 1;
  if (param_1->unk_088e == '\0') {
    fVar7 = (float)fabsf(param_1->unk_07e4);
    if ((fVar7 <= 5.5) &&
       (pfVar1 = (float *)PhysBody_GetLinearVelocity(param_1->unk_0154), *pfVar1 <= 1.3889)) {
      uVar2 = PhysBody_GetAngularVelocity(param_1->unk_0154);
      fVar7 = (float)Vec3_Length(uVar2);
      if (fVar7 < 1.0) {
        lVar5 = 0;
      }
    }
  }
  else {
    pfVar1 = (float *)PhysBody_GetLinearVelocity(param_1->unk_0154);
    if ((*pfVar1 <= 1.3889) && (fVar7 = (float)fabsf(param_1->unk_07e4), fVar7 <= 5.5)) {
      lVar5 = 0;
    }
  }
  param_1->unk_088e = lVar5 != -1;
  fVar7 = (((float)param_1->unk_085c + 0.0) -
          (1.0 - (float)param_1->unk_0820) * (float)param_1->unk_0858) * 0.5;
  if (param_1->unk_0888 == 1) {
    param_1->unk_071c = *(uint *)(param_1->maybe_params + 0x248);
    param_1->unk_079c =
         (uint)(fVar7 * (float)param_1->unk_0794 + *(float *)(param_1->maybe_params + 0x358) + 0.0);
  }
  else if (param_1->unk_0888 == 0) {
    param_1->unk_071c =
         (uint)(fVar7 * (float)param_1->unk_0714 + *(float *)(param_1->maybe_params + 0x248) + 0.0);
    param_1->unk_079c = *(uint *)(param_1->maybe_params + 0x358);
  }
  else {
    param_1->unk_071c =
         (uint)(fVar7 * (float)param_1->unk_0714 + *(float *)(param_1->maybe_params + 0x248) + 0.0);
    param_1->unk_079c =
         (uint)(fVar7 * (float)param_1->unk_0794 + *(float *)(param_1->maybe_params + 0x358) + 0.0);
  }
  param_1->unk_0b68 = 0;
  uVar4 = 0;
  fVar7 = 0.0;
  pRVar3 = param_1;
  do {
    fVar9 = *(float *)&pRVar3->field_0x2c4 * 1.05;
    fVar8 = (float)pRVar3->unk_02b0 + (float)pRVar3->unk_02b4;
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
    pRVar3 = (RaceCar *)&pRVar3->unk_0140;
  } while (uVar4 < 4);
  fVar6 = (float)param_1->unk_0190;
  fVar7 = fVar7 / (float)param_1->unk_0044;
  fVar8 = (float)fabsf(fVar6);
  fVar6 = (float)fabsf(fVar6 + fVar7);
  if (fVar6 < fVar8) {
    fVar6 = fVar8;
  }
  if (0.001 < fVar6) {
    param_1->unk_0b68 = (uint)(fVar7 / fVar6);
  }
  fVar7 = (float)fabsf(param_1->unk_0b68);
  fVar7 = fVar7 * 1.2;
  param_1->unk_0b68 = (uint)fVar7;
  if (0.05 <= fVar7) {
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 0.05;
  }
  param_1->unk_0b68 = (uint)fVar7;
  Car_SolveAxleTires(param_1,lVar5,0);
  Car_SolveAxleTires(param_1,lVar5,2);
  return;
}

// 0x0016a3c0  size 0x3f4
void Car_SolveAxleTires(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  RaceCar *pRVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  uVar4 = (uint)param_3;
  uVar3 = uVar4 + 1;
  pRVar5 = (RaceCar *)param_1;
  uVar1 = (&pRVar5->unk_07c0)[uVar4];
  Tire_SetupLoad((&pRVar5->unk_02a0)[uVar4 * 0x50],
                 *(undefined4 *)(&pRVar5->field_0x280 + uVar4 * 0x140),*(undefined4 *)(uVar1 + 0x94)
                 ,&pRVar5->field_0xae4,uVar1);
  Tire_SetupLoad((&pRVar5->unk_03e0)[uVar4 * 0x50],
                 *(undefined4 *)(&pRVar5->field_0x3c0 + uVar4 * 0x140),*(undefined4 *)(uVar1 + 0x94)
                 ,&pRVar5->field_0xb20,uVar1);
  *(uint *)(&pRVar5->field_0x2c0 + uVar4 * 0x140) = (&pRVar5->unk_02b0)[uVar4 * 0x50];
  *(uint *)(&pRVar5->field_0x400 + uVar4 * 0x140) = (&pRVar5->unk_03f0)[uVar4 * 0x50];
  if (pRVar5->unk_0888 == 5) {
    fVar9 = (float)fabsf(((float)pRVar5->unk_0060 / (float)pRVar5->unk_0044) / 9.8);
    fVar9 = fVar9 * 0.5;
  }
  else {
    fVar9 = 0.0;
  }
  if (*(float *)(&pRVar5->field_0x404 + uVar4 * 0x140) <=
      *(float *)(&pRVar5->field_0x2c4 + uVar4 * 0x140)) {
    fVar8 = 0.0;
    if ((pRVar5->steerInput < 0.0) && (fVar8 = -pRVar5->steerInput * 0.5, fVar9 < fVar8)) {
      fVar8 = fVar9;
    }
    *(float *)(&pRVar5->field_0x400 + uVar4 * 0x140) =
         *(float *)(&pRVar5->field_0x400 + uVar4 * 0x140) * (1.0 - fVar8);
    *(float *)(&pRVar5->field_0x2c0 + uVar4 * 0x140) =
         *(float *)(&pRVar5->field_0x2c0 + uVar4 * 0x140) * (fVar8 + 1.0);
  }
  else {
    fVar8 = 0.0;
    if ((0.0 < pRVar5->steerInput) && (fVar8 = pRVar5->steerInput * 0.5, fVar9 < fVar8)) {
      fVar8 = fVar9;
    }
    *(float *)(&pRVar5->field_0x2c0 + uVar4 * 0x140) =
         *(float *)(&pRVar5->field_0x2c0 + uVar4 * 0x140) * (1.0 - fVar8);
    *(float *)(&pRVar5->field_0x400 + uVar4 * 0x140) =
         *(float *)(&pRVar5->field_0x400 + uVar4 * 0x140) * (fVar8 + 1.0);
  }
  fVar9 = 1.0;
  if (param_2 == 0) {
    Vec3_Add(auStack_30,&pRVar5->unk_0220 + uVar4 * 0x50,&pRVar5->unk_0360 + uVar4 * 0x50);
    Vec3_Scale(0x3f000000,auStack_10,auStack_30);
    puVar2 = (undefined4 *)(&pRVar5->unk_07b0)[uVar4];
    uStack_20 = *puVar2;
    uStack_1c = puVar2[1];
    uStack_18 = puVar2[2];
    uStack_14 = puVar2[3];
    fVar9 = (float)PhysBody_RelativeVelocity
                             (pRVar5->maybe_rpmLimit,pRVar5->unk_0154,&uStack_20,auStack_10);
    *(float *)(&pRVar5->field_0x2b8 + uVar4 * 0x140) = fVar9 * 0.5;
    *(float *)(&pRVar5->field_0x3f8 + uVar4 * 0x140) = fVar9 * 0.5;
    Car_SolveFreeWheel(param_1,param_3);
    Car_SolveFreeWheel(param_1,uVar3);
  }
  else {
    Car_SolveDriveWheel(pRVar5,uVar4);
    Car_SolveDriveWheel(pRVar5,uVar3);
    if ((&pRVar5->field_0x1c1)[uVar4 * 0x140] == '\0') {
      *(undefined4 *)(&pRVar5->field_0x2b8 + uVar4 * 0x140) = 0;
    }
    else {
      fVar8 = 1.0;
      if (((float)(&pRVar5->unk_028c)[uVar4 * 0x50] != 0.0) ||
         (0.0 <= *(float *)(&pRVar5->field_0x2c8 + uVar4 * 0x140) * (float)pRVar5->unk_086c)) {
        fVar6 = *(float *)(&pRVar5->field_0x298 + uVar4 * 0x140);
      }
      else {
        fVar8 = -1.0;
        fVar6 = *(float *)(&pRVar5->field_0x298 + uVar4 * 0x140);
      }
      uVar7 = Tire_CombinedForce((&pRVar5->unk_0290)[uVar4 * 0x50],
                                 fVar8 * fVar6 * (float)pRVar5->unk_086c,
                                 *(undefined4 *)(&pRVar5->field_0x1d4 + uVar4 * 0x140),
                                 &pRVar5->field_0xae4 + (uVar4 & 1) * 0x3c);
      *(undefined4 *)(&pRVar5->field_0x2b8 + uVar4 * 0x140) = uVar7;
    }
    if ((&pRVar5->field_0x301)[uVar4 * 0x140] == '\0') {
      *(undefined4 *)(&pRVar5->field_0x3f8 + uVar4 * 0x140) = 0;
    }
    else {
      if (((float)(&pRVar5->unk_03cc)[uVar4 * 0x50] != 0.0) ||
         (0.0 <= *(float *)(&pRVar5->field_0x408 + uVar4 * 0x140) * (float)pRVar5->unk_086c)) {
        fVar8 = (float)pRVar5->unk_086c;
      }
      else {
        fVar9 = -1.0;
        fVar8 = (float)pRVar5->unk_086c;
      }
      uVar7 = Tire_CombinedForce((&pRVar5->unk_03d0)[uVar4 * 0x50],
                                 fVar9 * *(float *)(&pRVar5->field_0x3d8 + uVar4 * 0x140) * fVar8,
                                 *(undefined4 *)(&pRVar5->field_0x314 + uVar4 * 0x140),
                                 &pRVar5->field_0xae4 + (uVar3 & 1) * 0x3c);
      *(undefined4 *)(&pRVar5->field_0x3f8 + uVar4 * 0x140) = uVar7;
    }
  }
  return;
}

// 0x0016a7c0  size 0x234
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float Car_SolveDriveWheel(RaceCar *param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  float fStack_4;
  
  if ((&param_1->field_0x1c1)[param_2 * 0x140] == '\0') {
    *(undefined4 *)(&param_1->field_0x2bc + param_2 * 0x140) = 0;
    fStack_4 = 0.0;
    *(undefined4 *)(&param_1->field_0x298 + param_2 * 0x140) = 0;
    *(undefined4 *)(&param_1->field_0x268 + param_2 * 0x140) = 0xbe4ccccd;
  }
  else {
    uVar7 = (&param_1->unk_0290)[param_2 * 0x50];
    uVar1 = param_2 & 1;
    puVar2 = &param_1->field_0xae4 + uVar1 * 0x3c;
    fVar4 = (float)tanf(uVar7);
    (&param_1->unk_0b08)[uVar1 * 0xf] = (uint)((float)(&param_1->unk_0b04)[uVar1 * 0xf] * fVar4);
    (&param_1->unk_0b0c)[uVar1 * 0xf] = uVar7;
    fStack_4 = (float)param_1->unk_086c *
               (*(float *)(&param_1->field_0x2c0 + param_2 * 0x140) +
               (float)(&param_1->unk_02b4)[param_2 * 0x50]);
    if (((&param_1->field_0x287)[param_2 * 0x140] == '\0') &&
       ((&param_1->field_0x286)[param_2 * 0x140] == '\0')) {
      fVar5 = (float)Tire_LongitudinalForce(fStack_4,puVar2);
      *(undefined4 *)(&param_1->field_0x268 + param_2 * 0x140) =
           *(undefined4 *)(&param_1->field_0xb14 + uVar1 * 0x3c);
      fVar3 = (float)param_1->unk_0b68;
      fVar4 = -fVar3;
      if ((-fVar3 <= fVar5) && (fVar4 = fVar3, fVar5 <= fVar3)) {
        fVar4 = fVar5;
      }
      fVar3 = (float)Tire_ForceAtSlip(fVar4,puVar2);
      *(float *)(&param_1->field_0x298 + param_2 * 0x140) = fVar4 * (float)param_1->unk_086c;
      *(float *)(&param_1->field_0x2bc + param_2 * 0x140) = fVar3 * (float)param_1->unk_086c;
      fVar4 = (float)fabsf(*(undefined4 *)(&param_1->field_0xb18 + uVar1 * 0x3c));
      fStack_4 = -fVar4;
      if (fStack_4 <= fVar3) {
        if (fVar3 <= fVar4) {
          fVar4 = fVar3;
        }
        fStack_4 = fVar4;
      }
      fStack_4 = (float)fabsf();
    }
    else {
      uVar6 = Tire_FindPeakSlipRatio(puVar2,&fStack_4);
      *(undefined4 *)(&param_1->field_0x268 + param_2 * 0x140) = uVar6;
      fVar4 = 1.0;
      if (((float)(&param_1->unk_028c)[param_2 * 0x50] != 0.0) ||
         (0.0 <= *(float *)(&param_1->field_0x2c8 + param_2 * 0x140) * (float)param_1->unk_086c)) {
        fVar3 = *(float *)(&param_1->field_0x294 + param_2 * 0x140);
      }
      else {
        fVar4 = -1.0;
        fVar3 = *(float *)(&param_1->field_0x294 + param_2 * 0x140);
      }
      fVar5 = (float)param_1->unk_086c;
      *(float *)(&param_1->field_0x298 + param_2 * 0x140) = fVar3;
      fVar3 = (float)Tire_ForceAtSlip(fVar3 * fVar5 * fVar4,puVar2);
      *(float *)(&param_1->field_0x2bc + param_2 * 0x140) = fVar4 * fVar3 * (float)param_1->unk_086c
      ;
      fStack_4 = (float)fabsf(fStack_4);
      fVar4 = (float)fabsf(fVar4 * fVar3);
      if (fStack_4 < fVar4) {
        fStack_4 = fVar4;
      }
    }
  }
  return fStack_4;
}

// 0x0016aa00  size 0x174
void Car_SolveFreeWheel(int param_1,uint param_2)

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
    uVar4 = Tire_FindPeakSlipRatio(iVar1 + 0xae4,&uStack_4);
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
      fVar3 = (float)tanf(uVar4);
      *(float *)(iVar1 + 0xb08) = *(float *)(iVar1 + 0xb04) * fVar3;
      *(undefined4 *)(iVar1 + 0xb0c) = uVar4;
      *(undefined4 *)(iVar2 + 0x298) = *(undefined4 *)(iVar2 + 0x294);
      fVar3 = (float)Tire_ForceAtSlip(*(float *)(iVar2 + 0x294) * *(float *)(param_1 + 0x86c),
                                      iVar1 + 0xae4);
      *(float *)(iVar2 + 700) = *(float *)(param_1 + 0x86c) * fVar3;
    }
  }
  return;
}

// 0x0016ab80  size 0x110
void Car_UpdateCamber(int param_1)

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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateWheelAngularVel(RaceCar *param_1)

{
  uint uVar1;
  int iVar2;
  RaceCar *pRVar3;
  RaceCar *pRVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_1->unk_0160 != 0) {
    fVar6 = (float)param_1->unk_0044;
    uVar5 = 0;
    pRVar3 = param_1;
    pRVar4 = param_1;
    do {
      if (pRVar4->field_0x1c1 != '\0') {
        fVar8 = 0.01;
        uVar1 = pRVar3->unk_07c0;
        if (param_1->unk_09a8 != '\0') {
          if (uVar5 < 2) {
            iVar2 = *(int *)(&param_1->field_0x9ac + (uint)(byte)pRVar4->field_0x1c8 * 4);
          }
          else {
            iVar2 = *(int *)(&param_1->field_0xa2c + (uint)(byte)pRVar4->field_0x1c8 * 4);
          }
          if (iVar2 != 0) {
            fVar8 = *(float *)(iVar2 + 4);
          }
        }
        *(float *)&pRVar4->field_0x25c = fVar8;
        fVar9 = (float)pRVar4->unk_028c * *(float *)(uVar1 + 0x34);
        fVar8 = fVar6 * 0.25 * 9.8 * (*(float *)(param_1->maybe_params + 0x6dc) + fVar8);
        fVar7 = (float)fabsf(fVar9);
        if (fVar7 < 0.03) {
          fVar9 = 0.0;
        }
        fVar9 = fVar8 * fVar9;
        fVar7 = -fVar8;
        if (fVar9 < fVar7) {
          fVar9 = (float)pRVar4->unk_02b0;
        }
        else {
          if (fVar9 <= fVar8) {
            fVar8 = fVar9;
          }
          fVar9 = (float)pRVar4->unk_02b0;
          fVar7 = fVar8;
        }
        pRVar4->unk_02b0 = (uint)(fVar9 - fVar7);
      }
      uVar5 = uVar5 + 1;
      pRVar4 = (RaceCar *)&pRVar4->unk_0140;
      pRVar3 = (RaceCar *)&pRVar3->field_0x4;
    } while (uVar5 < 4);
  }
  return;
}

// 0x0016ae20  size 0x1c0
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* v^2 drag/downforce */

void Car_ApplyAeroDrag(RaceCar *param_1)

{
  undefined *puVar1;
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
  
  fVar3 = (float)param_1->unk_0190;
  puVar1 = param_1->maybe_params;
  fVar4 = *(float *)(puVar1 + 0x740) * (float)param_1->unk_08a4;
  fVar5 = fVar4 * fVar3 * fVar3 * *(float *)(puVar1 + 0x738) * 0.6;
  if (0.0 < fVar3) {
    fVar5 = fVar5 * -1.0;
  }
  fVar2 = (float)param_1->unk_0198;
  fVar4 = fVar4 * fVar2 * fVar2 * *(float *)(puVar1 + 0x73c) * 0.6;
  if (0.0 < fVar2) {
    fVar4 = fVar4 * -1.0;
  }
  Vec3_Scale(fVar5,auStack_50,&param_1->unk_0080);
  Vec3_Scale(fVar4,auStack_60,&param_1->unk_0090);
  Vec3_Add(auStack_10,auStack_50,auStack_60);
  Vec3_AddInPlace(&param_1->unk_0950,auStack_10);
  if (0.0 < (float)param_1->unk_0190) {
    fStack_78 = -(float)param_1->unk_0078;
    fStack_7c = -(float)param_1->unk_0074;
    fStack_80 = -(float)param_1->unk_0070;
    Vec3_Scale(fVar3 * fVar3,auStack_70,&fStack_80);
    Vec3_Scale(0x3f000000,auStack_20,auStack_70);
    Vec3_Scale(*(undefined4 *)(param_1->maybe_params + 0x744),auStack_30,auStack_20);
    Vec3_Scale(*(undefined4 *)(param_1->maybe_params + 0x748),auStack_40,auStack_20);
    Vec3_AddInPlace(&param_1->unk_0920,auStack_30);
    Vec3_AddInPlace(&param_1->unk_0910,auStack_30);
    Vec3_AddInPlace(&param_1->unk_0940,auStack_40);
    Vec3_AddInPlace(&param_1->unk_0930,auStack_40);
  }
  return;
}

// 0x0016afe0  size 0xf0
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_ApplyRollingResistance(RaceCar *param_1)

{
  RaceCar *pRVar1;
  RaceCar *pRVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_10 [16];
  
  uVar3 = 0;
  pRVar1 = param_1;
  pRVar2 = param_1;
  do {
    if (pRVar2->field_0x1c1 != '\0') {
      fVar5 = 0.0;
      fVar4 = *(float *)&pRVar2->field_0x2a4;
      if (uVar3 < 2) {
        if (fVar4 < 0.0) {
          fVar5 = -*(float *)(param_1->maybe_params + 0x74c) * fVar4;
        }
      }
      else if (fVar4 < 0.0) {
        fVar5 = *(float *)(param_1->maybe_params + 0x750) * fVar4;
      }
      else {
        fVar5 = *(float *)(param_1->maybe_params + 0x754) * fVar4;
      }
      Vec3_Scale(fVar5,auStack_10,&param_1->unk_0070);
      Vec3_AddInPlace(&pRVar1->unk_0910,auStack_10);
      *(float *)&pRVar2->field_0x1b8 = *(float *)&pRVar2->field_0x1b8 + fVar5;
    }
    uVar3 = uVar3 + 1;
    pRVar2 = (RaceCar *)&pRVar2->unk_0140;
    pRVar1 = (RaceCar *)&pRVar1->unk_0010;
  } while (uVar3 < 4);
  return;
}

// 0x0016b0d8  size 0x8
/* follows Car_ApplyRollingResistance; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Car_ApplyRollingResistance_Orphan1(void)

{
  return;
}

// 0x0016b0e0  size 0x2b4
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateSuspension(RaceCar *param_1)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  RaceCar *pRVar8;
  RaceCar *pRVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar7 = 0;
  param_1->unk_0160 = 0;
  param_1->unk_07d0 = 0;
  param_1->unk_07d4 = 1;
  param_1->unk_07d8 = 2;
  param_1->unk_07dc = 3;
  do {
    uVar5 = 3;
    if (uVar7 < 3) {
      puVar3 = (ushort *)&param_1->field_0xc;
      do {
        uVar1 = *(uint *)(puVar3 + 1000);
        if (*(float *)(&param_1->field_0x200 + uVar1 * 0x140) <
            *(float *)(&param_1->field_0x200 + *(uint *)(puVar3 + 0x3e6) * 0x140)) {
          *(uint *)(puVar3 + 1000) = *(uint *)(puVar3 + 0x3e6);
          *(uint *)(puVar3 + 0x3e6) = uVar1;
        }
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + -2;
      } while (uVar7 < uVar5);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  uVar7 = 0;
  pRVar9 = param_1;
  do {
    uVar5 = pRVar9->unk_07d0;
    Car_RaycastWheel(param_1);
    fVar11 = *(float *)(&param_1->field_0x200 + uVar5 * 0x140) -
             *(float *)(&param_1->field_0x200 + uVar5 * 0x140);
    if ((0.0 < fVar11) && (uVar7 != 3)) {
      iVar10 = uVar7 + 1;
      if (iVar10 < 4) {
        puVar3 = (ushort *)(&param_1->field_0x4 + uVar7 * 4);
        do {
          uVar1 = *(uint *)(puVar3 + 1000);
          *(float *)(&param_1->field_0x200 + uVar1 * 0x140) =
               *(float *)(&param_1->field_0x200 + uVar1 * 0x140) + fVar11;
          Vec3_Scale(fVar11,auStack_20,&param_1->unk_0210 + uVar5 * 0x50);
          Vec3_AddInPlace(&param_1->unk_01f0 + uVar1 * 0x50,auStack_20);
          iVar10 = iVar10 + 1;
          puVar3 = puVar3 + 2;
        } while (iVar10 < 4);
      }
    }
    uVar7 = uVar7 + 1;
    pRVar9 = (RaceCar *)&pRVar9->field_0x4;
  } while (uVar7 < 4);
  uVar7 = 0;
  do {
    if (uVar7 == 0) {
      puVar6 = param_1->maybe_params + 0x180;
      puVar4 = &param_1->unk_01b0;
      puVar2 = &param_1->unk_02f0;
    }
    else {
      puVar6 = param_1->maybe_params + 0x290;
      puVar4 = &param_1->unk_0430;
      puVar2 = &param_1->unk_0570;
    }
    if ((*(char *)((int)puVar4 + 0x11) != '\0') && (*(char *)((int)puVar2 + 0x11) != '\0')) {
      fVar11 = ((float)*puVar4 - (float)*puVar2) * *(float *)(puVar6 + 0x84) * 0.5;
      puVar4[2] = (uint)((float)puVar4[2] + fVar11);
      puVar2[2] = (uint)(fVar11 * -1.0 + (float)puVar2[2] + 0.0);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  uVar7 = 0;
  pRVar9 = param_1;
  pRVar8 = param_1;
  do {
    Vec3_Scale(*(undefined4 *)&pRVar9->field_0x1b8,auStack_10,&param_1->unk_0070);
    Vec3_AddInPlace(&pRVar8->unk_0910,auStack_10);
    uVar7 = uVar7 + 1;
    pRVar9 = (RaceCar *)&pRVar9->unk_0140;
    pRVar8 = (RaceCar *)&pRVar8->unk_0010;
  } while (uVar7 < 4);
  return;
}

// 0x0016b39c  size 0x8
/* follows Car_UpdateSuspension; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Car_UpdateSuspension_Orphan1(void)

{
  return;
}

// 0x0016b3b0  size 0x1b8
void Car_RaycastWheel(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  RaceCar *pRVar4;
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
  
  iVar3 = (int)param_2;
  pRVar4 = (RaceCar *)param_1;
  uVar1 = (&pRVar4->unk_07c0)[iVar3];
  puVar2 = &pRVar4->unk_01b0 + iVar3 * 0x50;
  *(undefined4 *)(&pRVar4->field_0x1bc + iVar3 * 0x140) =
       *(undefined4 *)(&pRVar4->field_0x1b8 + iVar3 * 0x140);
  (&pRVar4->field_0x1c0)[iVar3 * 0x140] = 0;
  fVar5 = (float)Car_GetSurfaceGrip(param_1,param_2,&pRVar4->unk_01f0 + iVar3 * 0x50);
  fVar5 = -*(float *)(&pRVar4->field_0x200 + iVar3 * 0x140) - fVar5;
  if (fVar5 <= *(float *)(uVar1 + 0x78)) {
    PhysBody_PointVelocityWorld(&fStack_30,pRVar4->unk_0154,&pRVar4->unk_01f0 + iVar3 * 0x50);
    fStack_18 = -fStack_28;
    fStack_1c = -fStack_2c;
    fStack_20 = -fStack_30;
    fStack_4 = (float)Vec3_DotC(&fStack_20,&pRVar4->unk_00b0);
    fVar5 = Car_SpringDamperForce(fVar5,pRVar4,iVar3,&fStack_4);
    fVar5 = *(float *)(uVar1 + 0x80) + fVar5;
    *(float *)(&pRVar4->field_0x1b4 + iVar3 * 0x140) = -fStack_4;
    if ((float)*puVar2 < *(float *)(uVar1 + 0x7c)) {
      *puVar2 = (uint)*(float *)(uVar1 + 0x7c);
      fVar5 = 0.0;
      (&pRVar4->field_0x1c1)[iVar3 * 0x140] = 0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
      (&pRVar4->field_0x1c1)[iVar3 * 0x140] = 0;
    }
    else {
      (&pRVar4->field_0x1c1)[iVar3 * 0x140] = 1;
      pRVar4->unk_0160 = pRVar4->unk_0160 + 1;
    }
  }
  else {
    fVar5 = Car_WheelGroundContact(pRVar4,iVar3);
    *(float *)(&pRVar4->field_0x200 + iVar3 * 0x140) =
         *(float *)(&pRVar4->field_0x200 + iVar3 * 0x140) + fVar5;
    *puVar2 = *(uint *)(uVar1 + 0x78);
    *(undefined4 *)(&pRVar4->field_0x1b4 + iVar3 * 0x140) = 0;
    fVar6 = *(float *)(uVar1 + 0x80);
    fVar7 = *(float *)(uVar1 + 0x6c);
    fVar5 = *(float *)(uVar1 + 0x78);
    (&pRVar4->field_0x1c0)[iVar3 * 0x140] = 1;
    fVar5 = fVar7 * fVar5 + fVar6 + 0.0;
    (&pRVar4->field_0x1c1)[iVar3 * 0x140] = 1;
    pRVar4->unk_0160 = pRVar4->unk_0160 + 1;
  }
  *(float *)(&pRVar4->field_0x1b8 + iVar3 * 0x140) = fVar5;
  return;
}

// 0x0016b570  size 0x238
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float Car_WheelGroundContact(RaceCar *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  float fVar5;
  undefined4 uVar6;
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
  
  puVar4 = &param_1->unk_0210 + param_2 * 0x50;
  puVar3 = &param_1->unk_01f0 + param_2 * 0x50;
  fVar5 = (float)Vec3_Dot((&param_1->unk_07b0)[param_2] + 0x50,puVar4);
  if (fVar5 <= 0.0) {
    uStack_10 = DAT_003625e0;
    uStack_c = DAT_003625e4;
    uStack_8 = DAT_003625e8;
    uStack_4 = DAT_003625ec;
    if (((&param_1->field_0x1c8)[param_2 * 0x140] & 2) == 0) {
      fVar5 = (float)PhysBody_VelocityAtPoint(param_1->unk_0154,puVar3,puVar4);
      Vec3_Scale(fVar5 * 1.1,&uStack_70,puVar4);
      uStack_10 = uStack_70;
      uStack_c = uStack_6c;
      uStack_8 = uStack_68;
      uStack_4 = uStack_64;
    }
    else {
      uVar6 = PhysBody_VelocityAtPoint(param_1->unk_0154,puVar3,&param_1->unk_0020);
      Vec3_Scale(uVar6,&uStack_60,&param_1->unk_0020);
      uStack_10 = uStack_60;
      uStack_c = uStack_5c;
      uStack_8 = uStack_58;
      uStack_4 = uStack_54;
    }
    uVar2 = PhysBody_GetLocalCenter(param_1->unk_0154);
    Vec3_Sub(auStack_20,puVar3,uVar2);
    Vec3_Cross(auStack_30,auStack_20,&uStack_10);
    uVar2 = PhysBody_GetExtraData(param_1->unk_0154);
    Vec3_Add(auStack_80,uVar2,auStack_30);
    PhysBody_SetLinearVelocity(param_1->unk_0154,auStack_80);
    uVar2 = PhysBody_GetPositionPtr(param_1->unk_0154);
    uVar6 = PhysBody_GetInvMass(param_1->unk_0154);
    Vec3_Scale(uVar6,auStack_a0,&uStack_10);
    Vec3_Add(auStack_90,uVar2,auStack_a0);
    PhysBody_UpdateMomentum(param_1->unk_0154,auStack_90);
    fVar5 = -*(float *)((&param_1->unk_07c0)[param_2] + 0x78) -
            *(float *)(&param_1->field_0x200 + param_2 * 0x140);
    Vec3_Scale(fVar5,auStack_40,puVar4);
    puVar1 = (undefined4 *)PhysBody_GetCenterOfMass(param_1->unk_0154);
    uStack_50 = *puVar1;
    uStack_4c = puVar1[1];
    uStack_48 = puVar1[2];
    uStack_44 = puVar1[3];
    Vec3_Add(auStack_b0,&uStack_50,auStack_40);
    PhysBody_WorldToLocal(param_1->unk_0154,auStack_b0);
    Vec3_AddInPlace(puVar3,auStack_40);
  }
  else {
    fVar5 = 0.0;
  }
  return fVar5;
}

// 0x0016b7b0  size 0x120
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float Car_SpringDamperForce(float param_1,RaceCar *param_2,int param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = (&param_2->unk_07c0)[param_3];
  fVar3 = param_1 - (float)(&param_2->unk_01b0)[param_3 * 0x50];
  if (0.0 < fVar3) {
    fVar4 = *(float *)(uVar1 + 0x70);
  }
  else {
    fVar4 = *(float *)(uVar1 + 0x74);
  }
  fVar6 = *param_4;
  uVar2 = 0;
  fVar7 = (float)param_2->unk_087c;
  fVar4 = fVar6 * *(float *)(uVar1 + 0x60) - fVar4 * fVar3 * *(float *)(uVar1 + 100);
  fVar3 = fVar6;
  if (param_2->unk_0880 != 0) {
    do {
      fVar5 = -*(float *)(uVar1 + 0x6c) * param_1;
      if (0.0 < fVar3) {
        fVar3 = (fVar5 + 0.0) - *(float *)(uVar1 + 0x70) * fVar3;
      }
      else {
        fVar3 = (fVar5 + 0.0) - *(float *)(uVar1 + 0x74) * fVar3;
      }
      fVar4 = fVar3 * fVar7 + fVar4 + 0.0;
      fVar3 = fVar4 * *(float *)(uVar1 + 100);
      *param_4 = fVar3;
      param_1 = fVar3 * fVar7 + param_1 + 0.0;
      if (*(float *)(uVar1 + 0x78) <= param_1) {
        param_1 = *(float *)(uVar1 + 0x78);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2->unk_0880);
  }
  (&param_2->unk_01b0)[param_3 * 0x50] = (uint)param_1;
  return *(float *)(uVar1 + 0x60) * (-(*param_4 - fVar6) / param_2->maybe_rpmLimit);
}

// 0x0016b8e0  size 0x200
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateSlipAngles(RaceCar *param_1)

{
  RaceCar *pRVar1;
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
  pRVar1 = param_1;
  do {
    fStack_10 = *(float *)&pRVar1->field_0x2e0;
    fVar5 = 0.0;
    fStack_c = *(float *)&pRVar1->field_0x2e4;
    fStack_8 = *(float *)&pRVar1->field_0x2e8;
    uStack_4 = *(undefined4 *)&pRVar1->field_0x2ec;
    if (0.01 < fStack_8 * fStack_8 + fStack_10 * fStack_10 + fStack_c * fStack_c) {
      Vec3_Scale(0x447a0000,auStack_20,&fStack_10);
      fVar3 = (float)Vec3_Dot(auStack_20,&pRVar1->unk_0230);
      fVar3 = (float)param_1->unk_086c * fVar3;
      fVar4 = (float)Vec3_Dot(auStack_20,&pRVar1->unk_0220);
      if (0.0001 < fVar3 * fVar3) {
        fVar5 = (float)fabsf(fVar3);
        fVar3 = (float)fabsf(fVar4);
        if (fVar3 < fVar5 * 0.3) {
          fVar5 = fVar4 / fVar5;
        }
        else {
          fVar5 = (float)atan2f(fVar4,fVar5);
        }
        fVar5 = -fVar5;
      }
    }
    uVar2 = uVar2 + 1;
    pRVar1->unk_0290 = (uint)fVar5;
    pRVar1 = (RaceCar *)&pRVar1->unk_0140;
  } while (uVar2 < 4);
  param_1->nitroOn = '\0';
  fVar5 = (float)fabsf(param_1->unk_0510);
  if ((0.34 < fVar5) && (fVar5 = (float)fabsf(param_1->unk_0650), 0.34 < fVar5)) {
    param_1->nitroOn = '\x01';
  }
  return;
}

// 0x0016baf0  size 0x4c0
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateSteeringGeometry(RaceCar *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  RaceCar *pRVar4;
  RaceCar *pRVar5;
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
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  puVar3 = &param_1->unk_0080;
  puVar2 = &param_1->unk_0090;
  fVar13 = (float)param_1->unk_013c;
  fVar7 = cosf(fVar13);
  uVar8 = sinf(fVar13);
  Vec3_Scale(uVar8,auStack_20,puVar3);
  Vec3_Scale(-fVar7,auStack_30,puVar2);
  Vec3_Add(&uStack_10,auStack_20,auStack_30);
  param_1->unk_06f0 = uStack_10;
  param_1->unk_06f4 = uStack_c;
  param_1->unk_06f8 = uStack_8;
  param_1->unk_06fc = uStack_4;
  Vec3_Scale(fVar7,auStack_50,puVar3);
  Vec3_Scale(uVar8,auStack_60,puVar2);
  Vec3_Add(&uStack_40,auStack_50,auStack_60);
  param_1->unk_06e0 = uStack_40;
  param_1->unk_06e4 = uStack_3c;
  param_1->unk_06e8 = uStack_38;
  param_1->unk_06ec = uStack_34;
  fVar12 = *(float *)(param_1->maybe_params + 0x250);
  fVar9 = (float)atan2f(param_1->unk_01b0,param_1->unk_01cc);
  fVar7 = *(float *)(param_1->unk_07c0 + 0x30);
  fVar10 = (float)atan2f(param_1->unk_02f0,-(float)param_1->unk_030c);
  fVar11 = *(float *)(param_1->unk_07c4 + 0x30);
  param_1->unk_01d8 = (uint)(fVar12 + fVar7 * -fVar9);
  param_1->unk_0318 = (uint)(-fVar12 + fVar11 * fVar10);
  fVar9 = fVar13 + (float)param_1->unk_01d8;
  fVar7 = cosf(fVar9);
  uVar8 = sinf(fVar9);
  Vec3_Scale(uVar8,auStack_80,puVar3);
  Vec3_Scale(-fVar7,auStack_90,puVar2);
  Vec3_Add(&uStack_70,auStack_80,auStack_90);
  param_1->unk_0230 = uStack_70;
  param_1->unk_0234 = uStack_6c;
  param_1->unk_0238 = uStack_68;
  param_1->unk_023c = uStack_64;
  Vec3_Scale(fVar7,auStack_b0,puVar3);
  Vec3_Scale(uVar8,auStack_c0,puVar2);
  Vec3_Add(&uStack_a0,auStack_b0,auStack_c0);
  param_1->unk_0220 = uStack_a0;
  param_1->unk_0224 = uStack_9c;
  param_1->unk_0228 = uStack_98;
  param_1->unk_022c = uStack_94;
  fVar13 = fVar13 + (float)param_1->unk_0318;
  fVar7 = cosf(fVar13);
  uVar8 = sinf(fVar13);
  Vec3_Scale(uVar8,auStack_e0,puVar3);
  Vec3_Scale(-fVar7,auStack_f0,puVar2);
  Vec3_Add(&uStack_d0,auStack_e0,auStack_f0);
  param_1->unk_0370 = uStack_d0;
  param_1->unk_0374 = uStack_cc;
  param_1->unk_0378 = uStack_c8;
  param_1->unk_037c = uStack_c4;
  Vec3_Scale(fVar7,auStack_110,puVar3);
  Vec3_Scale(uVar8,auStack_120,puVar2);
  Vec3_Add(&uStack_100,auStack_110,auStack_120);
  param_1->unk_0360 = uStack_100;
  param_1->unk_0364 = uStack_fc;
  param_1->unk_0368 = uStack_f8;
  param_1->unk_036c = uStack_f4;
  param_1->unk_0770 = *puVar3;
  param_1->unk_0774 = param_1->unk_0084;
  param_1->unk_0778 = param_1->unk_0088;
  param_1->unk_077c = param_1->unk_008c;
  param_1->unk_0760 = *puVar2;
  param_1->unk_0764 = param_1->unk_0094;
  param_1->unk_0768 = param_1->unk_0098;
  param_1->unk_076c = param_1->unk_009c;
  fVar11 = *(float *)(param_1->maybe_params + 0x360);
  fVar7 = (float)atan2f(param_1->unk_0430,param_1->unk_044c);
  fVar7 = *(float *)(param_1->unk_07c8 + 0x30) * fVar7;
  fVar9 = (float)atan2f(param_1->unk_0570,-(float)param_1->unk_058c);
  fVar10 = *(float *)(param_1->unk_07cc + 0x30);
  param_1->unk_0458 = (uint)(fVar11 + fVar7);
  param_1->unk_0598 = (uint)(-fVar11 + fVar10 * -fVar9);
  fVar9 = (float)param_1->unk_0458;
  fVar7 = cosf(fVar9);
  uVar8 = sinf(fVar9);
  Vec3_Scale(uVar8,auStack_140,puVar3);
  Vec3_Scale(-fVar7,auStack_150,puVar2);
  Vec3_Add(&uStack_130,auStack_140,auStack_150);
  param_1->unk_04b0 = uStack_130;
  param_1->unk_04b4 = uStack_12c;
  param_1->unk_04b8 = uStack_128;
  param_1->unk_04bc = uStack_124;
  Vec3_Scale(fVar7,auStack_170,puVar3);
  Vec3_Scale(uVar8,auStack_180,puVar2);
  Vec3_Add(&uStack_160,auStack_170,auStack_180);
  param_1->unk_04a0 = uStack_160;
  param_1->unk_04a4 = uStack_15c;
  param_1->unk_04a8 = uStack_158;
  param_1->unk_04ac = uStack_154;
  fVar9 = (float)param_1->unk_0598;
  fVar7 = cosf(fVar9);
  uVar8 = sinf(fVar9);
  Vec3_Scale(uVar8,auStack_1a0,puVar3);
  Vec3_Scale(-fVar7,auStack_1b0,puVar2);
  Vec3_Add(&uStack_190,auStack_1a0,auStack_1b0);
  param_1->unk_05f0 = uStack_190;
  param_1->unk_05f4 = uStack_18c;
  param_1->unk_05f8 = uStack_188;
  param_1->unk_05fc = uStack_184;
  Vec3_Scale(fVar7,auStack_1d0,puVar3);
  Vec3_Scale(uVar8,auStack_1e0,puVar2);
  Vec3_Add(&uStack_1c0,auStack_1d0,auStack_1e0);
  uVar6 = 0;
  param_1->unk_05e0 = uStack_1c0;
  param_1->unk_05e4 = uStack_1bc;
  param_1->unk_05e8 = uStack_1b8;
  param_1->unk_05ec = uStack_1b4;
  pRVar4 = param_1;
  pRVar5 = param_1;
  do {
    uVar1 = pRVar4->unk_07c0;
    *(undefined4 *)&pRVar5->field_0x2cc = *(undefined4 *)&pRVar5->field_0x2c8;
    PhysBody_PointVelocityWorld(&uStack_1f0,param_1->unk_0154,&pRVar5->field_0x240);
    *(undefined4 *)&pRVar5->field_0x2e0 = uStack_1f0;
    *(undefined4 *)&pRVar5->field_0x2e4 = uStack_1ec;
    *(undefined4 *)&pRVar5->field_0x2e8 = uStack_1e8;
    *(undefined4 *)&pRVar5->field_0x2ec = uStack_1e4;
    uVar8 = Vec3_Dot(&pRVar5->field_0x2e0,&pRVar5->unk_0230);
    *(undefined4 *)&pRVar5->field_0x2c8 = uVar8;
    uVar8 = Vec3_Dot(&pRVar5->field_0x2e0,&pRVar5->unk_0220);
    *(undefined4 *)&pRVar5->field_0x2d0 = uVar8;
    if ((uVar6 & 1) == 0) {
      fVar7 = (float)atan2f(pRVar5->unk_01b0,pRVar5->unk_01cc);
      *(float *)&pRVar5->field_0x1d4 =
           (*(float *)(uVar1 + 0xcc) + 0.0) - *(float *)(uVar1 + 0x30) * fVar7;
    }
    else {
      fVar7 = (float)atan2f(pRVar5->unk_01b0,-(float)pRVar5->unk_01cc);
      *(float *)&pRVar5->field_0x1d4 =
           *(float *)(uVar1 + 0x30) * fVar7 + -*(float *)(uVar1 + 0xcc) + 0.0;
    }
    Quat_FromAxisAngle(*(undefined4 *)&pRVar5->field_0x1d4,&pRVar5->field_0x1e0,0x362560);
    uVar6 = uVar6 + 1;
    pRVar5 = (RaceCar *)&pRVar5->unk_0140;
    pRVar4 = (RaceCar *)&pRVar4->field_0x4;
  } while (uVar6 < 4);
  return;
}

// 0x0016bfb0  size 0x120
/* rpm*32 index */

float Car_TorqueCurveLookup(float param_1,int param_2)

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

