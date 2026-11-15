// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0016c000 - 0x00170000
#include "ghidra_types.h"

// 0x0016c0d0  size 0x214
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* speed-sensitive (2.7778 m/s, *3.6 km/h) */

void Car_UpdateSteeringAngle(RaceCar *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  param_1->unk_014c = param_1->unk_013c;
  fVar6 = *(float *)(param_1->maybe_params + 0x174);
  fVar4 = (float)fabsf(param_1->speed);
  fVar4 = fVar4 - 2.777778;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = *(float *)(param_1->maybe_params + 0x178) *
          (fVar6 / (fVar4 * 3.6 + *(float *)(param_1->maybe_params + 0x178) + 0.0));
  if (0.0 <= fVar4) {
    if (fVar6 < fVar4) {
      fVar4 = fVar6;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar3 = 1.5707964;
  fVar7 = -fVar4;
  if ((float)param_1->unk_0190 < 0.0) {
    fVar3 = fVar4;
  }
  iVar1 = PhysBody_GetTransform(param_1->unk_0154);
  uStack_10 = *(undefined4 *)(iVar1 + 0x10);
  uStack_c = *(undefined4 *)(iVar1 + 0x14);
  uStack_8 = *(undefined4 *)(iVar1 + 0x18);
  uVar2 = PhysBody_GetAngularVelocity(param_1->unk_0154);
  fVar5 = (float)Vec3_Dot(&uStack_10,uVar2);
  fVar5 = DAT_0036e75c * (((float)param_1->unk_006c + 0.0) - fVar5 * DAT_0036e758);
  if (fVar5 < fVar7) {
    fVar7 = fVar5;
    if (fVar5 < -fVar3) {
      fVar7 = -fVar3;
    }
  }
  else if ((fVar4 < fVar5) && (fVar4 = fVar5, fVar3 < fVar5)) {
    fVar4 = fVar3;
  }
  fVar3 = param_1->steerInput;
  if (0.0 <= fVar3) {
    param_1->unk_013c = (uint)(fVar7 * fVar3);
  }
  else {
    param_1->unk_013c = (uint)(fVar4 * -fVar3);
  }
  param_1->unk_0140 = (uint)fVar7;
  param_1->unk_0144 = (uint)fVar4;
  fVar4 = (float)param_1->unk_013c;
  if (-fVar6 <= fVar4) {
    if (fVar4 <= fVar6) {
      fVar6 = fVar4;
    }
  }
  else {
    fVar6 = -fVar6;
  }
  param_1->unk_0148 = (uint)(((float)param_1->unk_0148 + fVar6) * 0.5);
  param_1->unk_0b64 =
       (uint)(((float)param_1->unk_013c * (float)param_1->unk_0190) /
             *(float *)(param_1->maybe_params + 0x28));
  return;
}

// 0x0016c2f0  size 0xd0
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateBrakeTorque(RaceCar *param_1)

{
  RaceCar *pRVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_1->unk_0160 == 0) {
    param_1->unk_02a0 = 0;
    param_1->unk_03e0 = 0;
    param_1->unk_0520 = 0;
    param_1->unk_0660 = 0;
  }
  else {
    fVar3 = (float)param_1->unk_0190;
    uVar2 = 0;
    pRVar1 = param_1;
    do {
      if (pRVar1->field_0x1c1 == '\0') {
        pRVar1->unk_02a0 = 0;
      }
      else {
        fVar5 = *(float *)&pRVar1->field_0x1b8;
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
        if (0.0 < (float)param_1->unk_0190) {
          if (uVar2 < 2) {
            fVar4 = *(float *)(param_1->maybe_params + 0x744);
          }
          else {
            fVar4 = *(float *)(param_1->maybe_params + 0x748);
          }
          fVar5 = fVar5 + fVar3 * fVar3 * fVar4 * 0.5;
        }
        pRVar1->unk_02a0 = (uint)fVar5;
      }
      uVar2 = uVar2 + 1;
      pRVar1 = (RaceCar *)&pRVar1->unk_0140;
    } while (uVar2 < 4);
  }
  return;
}

// 0x0016c3c0  size 0x224
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateTurbo(RaceCar *param_1)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = param_1->maybe_params;
  fVar3 = *(float *)(puVar1 + 0x534);
  fVar4 = fVar3 * 0.71;
  if (param_1->unk_08f0 == '\0') {
    param_1->unk_08e8 = '\0';
    param_1->unk_08ec = 0;
    param_1->unk_08e4 = 0;
  }
  else {
    if (param_1->unk_0acc == '\0') {
      if (fVar4 < (float)param_1->unk_07fc) {
        fVar2 = (float)param_1->unk_08e4 + param_1->maybe_rpmLimit;
        param_1->unk_08e4 = (uint)fVar2;
        if (2.0 < fVar2) {
          param_1->unk_08e4 = 0x40000000;
        }
      }
      else {
        fVar2 = (float)param_1->unk_08e4 - param_1->maybe_rpmLimit;
        param_1->unk_08e4 = (uint)fVar2;
        if (fVar2 < 0.0) {
          param_1->unk_08e4 = 0;
        }
      }
    }
    else {
      param_1->unk_08e4 = (uint)((float)param_1->unk_08e4 + param_1->maybe_rpmLimit);
      fVar2 = (float)param_1->unk_08e4 + param_1->maybe_rpmLimit;
      param_1->unk_08e4 = (uint)fVar2;
      if (2.0 < fVar2) {
        param_1->unk_08e4 = 0x40000000;
      }
    }
    if (2.0 <= (float)param_1->unk_08e4) {
      if ((fVar3 * 0.3 < (float)param_1->unk_08f8 - (float)param_1->unk_08f4) ||
         ((param_1->unk_0831 != '\0' && (param_1->unk_0818 != 0)))) {
        if (param_1->unk_08a0 == '\x01') {
          param_1->unk_08e8 = '\0';
          param_1->unk_08ec = 0;
        }
        else if (((float)param_1->unk_07fc <= fVar4) || ((int)param_1->gear < 1)) {
          param_1->unk_08e8 = '\0';
          param_1->unk_08ec = 0;
        }
        else {
          param_1->unk_08e8 = '\x01';
          param_1->unk_08ec =
               (uint)((((float)param_1->unk_07fc + 0.0) - *(float *)(puVar1 + 0x534) * 0.9) / fVar4)
          ;
          param_1->unk_08e4 = 0;
        }
      }
      else if (((float)param_1->unk_08f4 < 0.1) && (param_1->unk_0acc != '\0')) {
        param_1->unk_08e8 = '\x01';
        param_1->unk_08ec = (uint)((*(float *)(puVar1 + 0x534) * 0.2) / fVar4);
        param_1->unk_08e4 = 0;
      }
    }
    else {
      param_1->unk_08e8 = '\0';
      param_1->unk_08ec = 0;
    }
  }
  return;
}

// 0x0016c5f0  size 0x260
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateDownforce(RaceCar *param_1)

{
  RaceCar *pRVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = 0.0;
  fVar4 = 0.0;
  if ((0.0 < param_1->maybe_boostInput) && (0.0 < *(float *)(param_1->maybe_params + 0x138))) {
    fVar3 = *(float *)(param_1->maybe_params + 0x1b4) *
            ((float)param_1->unk_026c + (float)param_1->unk_03ac) * 0.5;
    fVar3 = param_1->maybe_rpmLimitInv * ((fVar3 * fVar3 * 0.5) / (float)param_1->unk_0044) * 10.0;
  }
  if ((0.0 < param_1->maybe_boostInput) && (0.0 < *(float *)(param_1->maybe_params + 0x13c))) {
    fVar4 = *(float *)(param_1->maybe_params + 0x2c4) *
            ((float)param_1->unk_04ec + (float)param_1->unk_062c) * 0.5;
    fVar4 = param_1->maybe_rpmLimitInv * ((fVar4 * fVar4 * 0.5) / (float)param_1->unk_0044) * 10.0;
  }
  iVar2 = 0;
  fVar8 = param_1->maybe_rpmLimit * 100.0;
  pRVar1 = param_1;
  do {
    fVar7 = 0.0;
    if (iVar2 < 2) {
      if (0.0 < fVar3) {
        fVar7 = *(float *)(param_1->maybe_params + 0xcc) * fVar3;
        pRVar1->unk_0270 = (uint)((float)pRVar1->unk_0270 + fVar7);
      }
    }
    else if (0.0 < fVar4) {
      fVar7 = *(float *)(param_1->maybe_params + 0xd0) * fVar4;
      pRVar1->unk_0270 = (uint)((float)pRVar1->unk_0270 + fVar7);
    }
    pRVar1->unk_0270 = (uint)((float)pRVar1->unk_0270 - fVar8);
    fVar6 = (float)pRVar1->unk_0270;
    fVar5 = *(float *)(param_1->maybe_params + 0xd4);
    if (20.0 <= fVar6) {
      if (fVar6 <= fVar5) {
        fVar5 = fVar6;
      }
    }
    else {
      fVar5 = 20.0;
    }
    pRVar1->unk_0270 = (uint)fVar5;
    if ((0.0 < param_1->maybe_boostInput) && (fVar8 < fVar7)) {
      fVar7 = *(float *)(param_1->maybe_params + 0xd8);
      if (fVar7 < (float)pRVar1->unk_0270) {
        fVar7 = (float)param_1->unk_0bd0 +
                (((float)pRVar1->unk_0270 - fVar7) * 0.089999996) /
                *(float *)(param_1->maybe_params + 0xd4);
        param_1->unk_0bd0 = (uint)fVar7;
        if (0.0 <= fVar7) {
          if (100.0 < fVar7) {
            fVar7 = 100.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        param_1->unk_0bd0 = (uint)fVar7;
      }
    }
    iVar2 = iVar2 + 1;
    pRVar1 = (RaceCar *)&pRVar1->unk_0140;
  } while (iVar2 < 4);
  return;
}

// 0x0016c860  size 0xc
void Car_RequestShiftDown(int param_1)

{
  *(undefined1 *)(param_1 + 0x835) = 1;
  return;
}

// 0x0016c870  size 0xc
void Car_RequestShiftUp(int param_1)

{
  *(undefined1 *)(param_1 + 0x834) = 1;
  return;
}

// 0x0016c880  size 0x894
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateTransmission(RaceCar *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = param_1->maybe_params;
  param_1->unk_0831 = '\0';
  piVar6 = (int *)(puVar1 + 0x524);
  param_1->unk_0832 = '\0';
  fVar8 = (float)param_1->unk_0828 - param_1->maybe_rpmLimit;
  param_1->unk_0828 = (uint)fVar8;
  if (fVar8 < 0.0) {
    param_1->unk_0828 = 0;
  }
  if (*(int *)(param_1->maybe_params + 0x524) == 1) {
    if ((int)param_1->gear < 1) {
      param_1->unk_0838 = *(uint *)(puVar1 + 0x650);
      puVar2 = param_1->maybe_params;
      fVar8 = (float)fabsf((float)param_1->unk_0838 * *(float *)(puVar2 + 0x670));
      param_1->unk_0848 = (uint)fVar8;
      fVar8 = fVar8 * (float)param_1->unk_0844 * fVar8;
      param_1->unk_0858 = (uint)fVar8;
      param_1->unk_085c = (uint)(fVar8 + (float)param_1->unk_0860);
      param_1->unk_0850 =
           (uint)(((float)param_1->unk_0868 * 2.0 + (float)param_1->unk_085c + 0.0) /
                 (float)param_1->unk_0864);
      param_1->unk_084c = (uint)(*(float *)(puVar2 + 0x610) * *(float *)(puVar2 + 0x638));
    }
    else {
      fVar11 = *(float *)(puVar1 + 0x650);
      fVar9 = *(float *)(puVar1 + 0x66c);
      fVar8 = (1.0 - param_1->maybe_handbrakeInput) * (fVar9 - fVar11) + fVar11 + 0.0;
      if (fVar8 < fVar9) {
        fVar11 = fVar9;
      }
      else if (fVar8 <= fVar11) {
        fVar11 = fVar8;
      }
      if (((1.0 < (float)param_1->unk_07e0) &&
          (fVar10 = (*(float *)(puVar1 + 0x530) * 0.10471976 * 0.86) /
                    ((float)param_1->unk_07e0 * *(float *)(puVar1 + 0x670)), fVar10 <= fVar8)) &&
         (fVar9 <= fVar10)) {
        if (fVar10 < fVar9) {
          fVar11 = fVar9;
        }
        else {
          if (fVar10 <= fVar8) {
            fVar8 = fVar10;
          }
          fVar11 = fVar8;
        }
      }
      fVar11 = fVar11 - (float)param_1->unk_0838;
      if (-0.01 <= fVar11) {
        if (0.01 < fVar11) {
          fVar11 = 0.01;
        }
      }
      else {
        fVar11 = -0.01;
      }
      param_1->unk_0838 = (uint)((float)param_1->unk_0838 + fVar11);
      puVar2 = param_1->maybe_params;
      fVar8 = (float)fabsf((float)param_1->unk_0838 * *(float *)(puVar2 + 0x670));
      param_1->unk_0848 = (uint)fVar8;
      fVar8 = fVar8 * (float)param_1->unk_0844 * fVar8;
      param_1->unk_0858 = (uint)fVar8;
      param_1->unk_085c = (uint)(fVar8 + (float)param_1->unk_0860);
      param_1->unk_0850 =
           (uint)(((float)param_1->unk_0868 * 2.0 + (float)param_1->unk_085c + 0.0) /
                 (float)param_1->unk_0864);
      param_1->unk_084c = (uint)(*(float *)(puVar2 + 0x610) * *(float *)(puVar2 + 0x638));
    }
  }
  if (param_1->unk_0890 == '\0') {
    if (((param_1->maybe_brakeInput == 0.0) || (param_1->gear != 0xffffffff)) ||
       ((float)param_1->unk_0820 != 1.0)) {
      if (((param_1->maybe_boostInput == 0.0) || (param_1->maybe_handbrakeInput == 0.0)) ||
         (param_1->gear != 0)) {
        if (0.0 < (float)param_1->unk_0824) {
          fVar8 = (float)param_1->unk_0824 - param_1->maybe_rpmLimit;
          param_1->unk_0824 = (uint)fVar8;
          if (0.0 < fVar8) {
            uVar5 = param_1->unk_0818;
            if ((int)uVar5 < 1) {
              uVar5 = -uVar5;
            }
            param_1->unk_0820 = (uint)(1.0 - fVar8 * (float)piVar6[uVar5 + 100]);
            goto LAB_0016cecc;
          }
          param_1->unk_0824 = 0;
          param_1->unk_0820 = 0x3f800000;
          param_1->unk_082c = '\0';
          param_1->unk_082d = '\0';
        }
        uVar5 = param_1->gear;
        fVar11 = 0.0;
        fVar8 = 31.93;
        if (0 < (int)uVar5) {
          fVar11 = (float)(&param_1->unk_0968)[uVar5];
          fVar8 = (float)(&param_1->unk_0964)[uVar5] - 5.0;
        }
        bVar4 = false;
        fVar9 = param_1->speed / (float)param_1->unk_0864;
        if ((((param_2 == 0) && (fVar11 < fVar9)) && (0 < (int)uVar5)) ||
           (param_1->unk_0834 != '\0')) {
          if ((int)uVar5 < *piVar6) {
            bVar4 = true;
            param_1->unk_0828 = 0x3f800000;
            param_1->unk_0818 = param_1->gear;
            param_1->gear = param_1->gear + 1;
            param_1->unk_081c = 0;
          }
        }
        else {
          fVar11 = (float)param_1->unk_0190;
          if ((fVar11 <= 1.0) || (uVar5 != 0xffffffff)) {
            if ((((param_2 == 0) && ((fVar9 < fVar8 && (1 < (int)uVar5)))) &&
                ((float)param_1->unk_0820 == 1.0)) ||
               ((param_1->unk_0835 != '\0' && (1 < (int)uVar5)))) {
              if ((param_2 != 0) || ((float)param_1->unk_0828 == 0.0)) {
                param_1->unk_0818 = uVar5;
                param_1->gear = param_1->gear - 1;
                param_1->unk_081c = 0;
                bVar4 = true;
              }
            }
            else if (((param_1->maybe_boostInput == 0.0) || (param_1->maybe_handbrakeInput == 0.0))
                    || (uVar5 != 0)) {
              if (((uVar5 != 0) || (param_1->maybe_handbrakeInput == 0.0)) ||
                 ((float)param_1->unk_07f4 <= *(float *)(puVar1 + 0x530) * 0.1)) {
                if ((1.0 <= fVar11) || (param_1->maybe_brakeInput == 0.0)) {
                  if (((float)param_1->unk_07fc != *(float *)(puVar1 + 0x68c)) ||
                     ((7.6 <= (float)param_1->unk_08ac || (param_1->maybe_handbrakeInput != 0.0))))
                  {
                    if (fVar11 < -1.0) {
                      if (uVar5 == 1) {
                        param_1->unk_0818 = 1;
                        param_1->gear = 0;
                        param_1->unk_081c = 0;
                        bVar4 = true;
                      }
                    }
                  }
                  else {
                    param_1->unk_0818 = uVar5;
                    bVar4 = true;
                    param_1->gear = 0;
                    param_1->unk_081c = 0;
                  }
                }
                else if (uVar5 != 0xffffffff) {
                  param_1->unk_0818 = uVar5;
                  bVar4 = true;
                  param_1->unk_081c = 0;
                  param_1->gear = 0xffffffff;
                }
              }
              else {
                param_1->unk_0818 = 0;
                param_1->gear = 1;
                param_1->unk_081c = 0;
                bVar4 = true;
                if (*(float *)(puVar1 + 0x534) * 0.2 < (float)param_1->unk_07fc) {
                  param_1->unk_082d = '\x01';
                  param_1->unk_082c = '\0';
                }
                else {
                  param_1->unk_082d = '\0';
                  param_1->unk_082c = '\x01';
                }
              }
            }
            else {
              param_1->unk_081c = 0;
              param_1->unk_0820 = 0;
            }
          }
          else {
            param_1->unk_0818 = 0xffffffff;
            bVar4 = true;
            param_1->gear = 0;
            param_1->unk_081c = 0;
          }
        }
        bVar3 = true;
        if (bVar4) {
          if ((param_1->unk_082c == '\0') && (param_1->unk_082d == '\0')) {
            bVar3 = false;
          }
          if (bVar3) {
            if (param_1->unk_082c != '\0') {
              param_1->unk_0818 = 0;
            }
            param_1->unk_0824 = *(uint *)(puVar1 + 0x690);
          }
          else if (param_1->gear == 0) {
            param_1->unk_0820 = 0;
            param_1->unk_0824 = 0;
          }
          else {
            param_1->unk_0820 = 0;
            param_1->unk_0824 = piVar6[param_1->gear + 0x5b];
          }
          uVar5 = param_1->gear;
          if (uVar5 == 0xffffffff) {
            uVar5 = 0;
          }
          else if (uVar5 == 0) {
            uVar5 = 1;
          }
          puVar1 = param_1->maybe_params;
          iVar7 = uVar5 * 4;
          fVar8 = (float)fabsf(*(float *)(puVar1 + iVar7 + 0x64c) * *(float *)(puVar1 + 0x670));
          param_1->unk_0848 = (uint)fVar8;
          fVar8 = fVar8 * fVar8 * (*(float *)(puVar1 + iVar7 + 0x5e8) +
                                  *(float *)(puVar1 + 0x63c) + *(float *)(puVar1 + 0x648));
          param_1->unk_0858 = (uint)fVar8;
          param_1->unk_085c = (uint)(fVar8 + (float)param_1->unk_0860);
          param_1->unk_0850 =
               (uint)(((float)param_1->unk_0868 * 2.0 + (float)param_1->unk_085c + 0.0) /
                     (float)param_1->unk_0864);
          param_1->unk_084c =
               (uint)(*(float *)(puVar1 + iVar7 + 0x60c) * *(float *)(puVar1 + 0x638));
          param_1->unk_0831 = '\x01';
          param_1->unk_0832 = '\x01';
        }
        else if ((param_1->unk_0888 != 0) && (0 < (int)param_1->gear)) {
          if (param_1->maybe_throttleInput <= 0.0) {
            fVar8 = (float)param_1->unk_0820 + 0.05;
            param_1->unk_0820 = (uint)fVar8;
            if (1.0 <= fVar8) {
              param_1->unk_0820 = 0x3f800000;
            }
          }
          else {
            param_1->unk_0820 = 0;
          }
        }
      }
      else {
        param_1->unk_0820 = 0;
      }
    }
  }
  else {
    param_1->gear = 0;
    param_1->unk_0820 = 0;
  }
LAB_0016cecc:
  param_1->unk_0835 = '\0';
  param_1->unk_0834 = '\0';
  return;
}

// 0x0016d130  size 0x3dc
void Car_UpdateAutoShift(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x120);
  puVar7 = (uint *)(iVar1 + 0x524);
  if (*(int *)(iVar2 + 0x888) == 1) {
    *(undefined4 *)(iVar2 + 0x864) = *(undefined4 *)(iVar1 + 0x2c4);
    *(undefined4 *)(iVar2 + 0x868) = *(undefined4 *)(*(int *)(iVar2 + 0x120) + 0x358);
  }
  else if (*(int *)(iVar2 + 0x888) == 0) {
    *(undefined4 *)(iVar2 + 0x864) = *(undefined4 *)(iVar1 + 0x1b4);
    *(undefined4 *)(iVar2 + 0x868) = *(undefined4 *)(*(int *)(iVar2 + 0x120) + 0x248);
  }
  else {
    *(undefined4 *)(iVar2 + 0x864) = *(undefined4 *)(iVar1 + 0x2c4);
    *(float *)(iVar2 + 0x868) =
         (*(float *)(*(int *)(iVar2 + 0x120) + 0x248) + *(float *)(*(int *)(iVar2 + 0x120) + 0x358))
         * 0.5;
  }
  *(float *)(iVar2 + 0x860) =
       *(float *)(iVar1 + 0x670) * *(float *)(iVar1 + 0x634) * *(float *)(iVar1 + 0x670);
  iVar3 = *(int *)(iVar2 + 0x814);
  if (iVar3 == -1) {
    iVar3 = 0;
  }
  else if (iVar3 == 0) {
    iVar3 = 1;
  }
  iVar5 = *(int *)(iVar2 + 0x120);
  fVar8 = (float)fabsf(*(float *)(iVar3 * 4 + iVar5 + 0x524 + 0x128) * *(float *)(iVar5 + 0x670));
  *(float *)(iVar2 + 0x848) = fVar8;
  iVar3 = iVar3 * 4 + iVar5 + 0x524;
  fVar8 = fVar8 * fVar8 * (*(float *)(iVar3 + 0xc4) +
                          *(float *)(iVar5 + 0x63c) + *(float *)(iVar5 + 0x648));
  *(float *)(iVar2 + 0x858) = fVar8;
  *(float *)(iVar2 + 0x85c) = fVar8 + *(float *)(iVar2 + 0x860);
  *(float *)(iVar2 + 0x850) =
       (*(float *)(iVar2 + 0x868) * 2.0 + *(float *)(iVar2 + 0x85c) + 0.0) /
       *(float *)(iVar2 + 0x864);
  *(float *)(iVar2 + 0x84c) = *(float *)(iVar3 + 0xe8) * *(float *)(iVar5 + 0x638);
  fVar17 = *(float *)(iVar1 + 0x534);
  fVar8 = 1.0 / *(float *)(iVar2 + 0x864);
  *(undefined4 *)(iVar2 + 0x968) = 0;
  *(float *)(*puVar7 * 4 + iVar2 + 0x968) = fVar8 * 103.0;
  uVar6 = 1;
  if (1 < *puVar7) {
    iVar5 = iVar1 + 0x528;
    iVar3 = iVar2;
    do {
      fVar10 = *(float *)(iVar1 + 0x638);
      fVar11 = *(float *)(iVar5 + 0xe8);
      fVar9 = *(float *)(iVar5 + 0xec);
      fVar13 = 0.0;
      fVar16 = *(float *)(iVar5 + 0x128) * *(float *)(iVar1 + 0x670);
      fVar15 = *(float *)(iVar5 + 300) * *(float *)(iVar1 + 0x670);
      do {
        fVar14 = fVar13 * fVar8;
        fVar18 = (fVar14 * 9.549296) / *(float *)(iVar1 + 0x528);
        fVar12 = fVar18 * fVar16;
        if ((fVar17 + 0.0) - *(float *)(iVar1 + 0x534) * 0.06 < fVar12) {
          *(float *)(iVar3 + 0x96c) = fVar14;
          break;
        }
        fVar12 = (float)Car_TorqueCurveLookup(fVar12,0,param_1);
        fVar12 = fVar16 * fVar12;
        fVar18 = (float)Car_TorqueCurveLookup(fVar18 * fVar15,0,param_1);
        if (fVar11 * fVar10 * fVar12 < fVar9 * fVar10 * fVar15 * fVar18) {
          *(float *)(iVar3 + 0x96c) = fVar14;
          break;
        }
        fVar13 = fVar13 + 0.02777778;
      } while (fVar13 < 103.0);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 4;
    } while (uVar6 < *puVar7);
  }
  uVar6 = 0;
  uVar4 = 0;
  fVar8 = 0.0;
  *(float *)(iVar2 + 0x844) =
       *(float *)(iVar1 + 0x5ec) + *(float *)(iVar1 + 0x63c) + *(float *)(iVar1 + 0x648);
  do {
    if (fVar8 < (float)puVar7[6]) {
      fVar8 = (float)puVar7[6];
      uVar6 = uVar4;
    }
    uVar4 = uVar4 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar4 < 0x20);
  *(float *)(iVar2 + 0x840) = (float)uVar6 / 32.0;
  *(float *)(iVar2 + 0x83c) =
       *(float *)(iVar1 + 0x68c) * 0.39999998 + *(float *)(iVar2 + 0x840) * 0.6;
  return;
}

// 0x0016d510  size 0x174
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_ApplyStopFriction(RaceCar *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_50 [16];
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
  
  if (param_1->gear == 0) {
    fVar2 = (float)fabsf(param_1->unk_0198);
    fVar3 = (float)fabsf(param_1->unk_0190);
    if ((fVar2 <= 0.1) || (fVar3 <= 0.06)) {
      uVar1 = PhysBody_GetAngularVelocity(param_1->unk_0154);
      fVar3 = (float)Vec3_Length(uVar1);
      if (0.1 <= fVar3) {
        uStack_10 = DAT_003625e0;
        uStack_c = DAT_003625e4;
        uStack_8 = DAT_003625e8;
        uStack_4 = DAT_003625ec;
        if (fVar2 < 0.2) {
          Vec3_Scale(fVar2,&uStack_40,&param_1->unk_0030);
          uStack_10 = uStack_40;
          uStack_c = uStack_3c;
          uStack_8 = uStack_38;
          uStack_4 = uStack_34;
        }
        uStack_20 = DAT_003625e0;
        uStack_1c = DAT_003625e4;
        uStack_18 = DAT_003625e8;
        uStack_14 = DAT_003625ec;
        uVar1 = PhysBody_GetPositionPtr(param_1->unk_0154);
        Vec3_Sub(auStack_50,uVar1,&uStack_20);
        Vec3_Sub(auStack_30,auStack_50,&uStack_10);
        PhysBody_UpdateMomentum(param_1->unk_0154,auStack_30);
      }
    }
  }
  return;
}

// 0x0016d690  size 0x1fc
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_CheckUpsideDown(RaceCar *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
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
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
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
  float afStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if ((param_1->speed < 2.0) &&
     (fVar3 = (float)Vec3_Dot(&param_1->unk_0020,&param_1->unk_0070), fVar3 < -0.8)) {
    uStack_24 = 0x3f800000;
    uStack_14 = 0x3f800000;
    uVar2 = PhysBody_GetCenterOfMass(param_1->unk_0154);
    PhysShape_CallVirtual(afStack_40,uVar2,param_1->unk_0ae0);
    Mat34_Identity(&uStack_80);
    uStack_a4 = 0x3f800000;
    uStack_b0 = uStack_30;
    uStack_ac = uStack_2c;
    uStack_a8 = uStack_28;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    uStack_68 = uStack_28;
    uStack_64 = 0x3f800000;
    uStack_e0 = uStack_30;
    uStack_dc = uStack_2c;
    uStack_d8 = uStack_28;
    Vec3_Cross(&uStack_d0,&uStack_e0,&param_1->unk_0900);
    uStack_b4 = 0x3f800000;
    uStack_c0 = uStack_d0;
    uStack_bc = uStack_cc;
    uStack_b8 = uStack_c8;
    uStack_60 = uStack_d0;
    uStack_5c = uStack_cc;
    uStack_58 = uStack_c8;
    uStack_54 = 0x3f800000;
    Quat_NormalizeB(&uStack_60);
    uStack_120 = uStack_60;
    uStack_110 = uStack_60;
    uStack_11c = uStack_5c;
    uStack_10c = uStack_5c;
    uStack_118 = uStack_58;
    uStack_108 = uStack_58;
    Vec3_Cross(&uStack_100,&uStack_110,&uStack_120);
    uStack_e4 = 0x3f800000;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    uStack_e8 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_7c = uStack_fc;
    uStack_78 = uStack_f8;
    uStack_74 = 0x3f800000;
    Quat_NormalizeB(&uStack_80);
    Mat33_ToQuat(auStack_90,&uStack_80);
    puVar1 = (undefined4 *)PhysBody_GetCenterOfMass(param_1->unk_0154);
    uStack_a0 = *puVar1;
    uStack_98 = puVar1[2];
    fStack_9c = (float)puVar1[1] - afStack_40[0];
    uStack_94 = puVar1[3];
    PhysBody_SetTransformFrom(param_1->unk_0154,param_1->maybe_params + 0x90);
    PhysBody_WorldToLocal(param_1->unk_0154,&uStack_a0);
    PhysBody_SetRotation(param_1->unk_0154,auStack_90);
    param_1->unk_0b74 = '\0';
  }
  return;
}

// 0x0016d890  size 0x248
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateTractionControl(RaceCar *param_1)

{
  uint uVar1;
  uint uVar2;
  RaceCar *pRVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fStack_4;
  
  param_1->unk_08a1 = '\0';
  param_1->unk_0260 = (uint)param_1->maybe_boostInput;
  param_1->unk_03a0 = (uint)param_1->maybe_boostInput;
  param_1->unk_04e0 = (uint)param_1->maybe_boostInput;
  param_1->unk_0620 = (uint)param_1->maybe_boostInput;
  if (param_1->unk_0892 != '\0') {
    fStack_4 = ((float)param_1->unk_02a0 + (float)param_1->unk_03e0) * 0.5;
    Tire_SetupLoad(fStack_4,0x3f800000,*(undefined4 *)(param_1->maybe_params + 0x214),
                   &param_1->field_0xae4,param_1->maybe_params + 0x180);
    uVar11 = param_1->unk_006c;
    fVar4 = (float)tanf(uVar11);
    param_1->unk_0b08 = (uint)((float)param_1->unk_0b04 * fVar4);
    param_1->unk_0b0c = uVar11;
    fStack_4 = -1.0;
    fVar4 = (float)Tire_FindPeakSlipRatio(&param_1->field_0xae4,&fStack_4);
    fVar4 = -fVar4;
    if (0.3 < fVar4) {
      fVar4 = 0.3;
    }
    fVar9 = (float)param_1->unk_0720;
    fVar5 = (float)fabsf((float)param_1->unk_04e8 + (float)param_1->unk_0628);
    fVar5 = fVar5 * 0.5;
    if (0.3 < fVar5) {
      fVar5 = 0.3;
    }
    fVar10 = (float)param_1->unk_07a0;
    if (0.0 < param_1->maybe_boostInput) {
      fVar6 = (float)param_1->unk_086c;
      uVar11 = 0;
      pRVar3 = param_1;
      do {
        if (pRVar3->field_0x287 == '\0') {
          fVar7 = *(float *)&pRVar3->field_0x298;
        }
        else {
          fVar7 = *(float *)&pRVar3->field_0x294;
        }
        fVar7 = fVar7 * -fVar6;
        fVar8 = fVar4 * fVar9;
        if (1 < uVar11) {
          fVar8 = fVar5 * fVar10;
        }
        if (fVar8 < fVar7) {
          uVar2 = pRVar3->unk_0264 + (int)((fVar7 - fVar8) * 8.0) + 1;
        }
        else {
          uVar2 = pRVar3->unk_0264 - 1;
        }
        if ((int)uVar2 < 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = (int)param_1->maybe_rpmLimitInv;
          if ((int)uVar2 <= (int)param_1->maybe_rpmLimitInv) {
            uVar1 = uVar2;
          }
        }
        pRVar3->unk_0264 = uVar1;
        uVar11 = uVar11 + 1;
        pRVar3->unk_0260 =
             (uint)((float)pRVar3->unk_0260 *
                   (1.0 - (float)(int)pRVar3->unk_0264 * param_1->maybe_rpmLimit));
        param_1->unk_08a1 = '\x01';
        pRVar3 = (RaceCar *)&pRVar3->unk_0140;
      } while (uVar11 < 4);
    }
    else {
      param_1->unk_0264 = 0;
      param_1->unk_03a4 = 0;
      param_1->unk_04e4 = 0;
      param_1->unk_0624 = 0;
    }
  }
  return;
}

// 0x0016dae0  size 0x2c
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void maybe_Car_ResetWheelForces(RaceCar *param_1)

{
  param_1->unk_0264 = 0;
  param_1->unk_03a4 = 0;
  param_1->unk_04e4 = 0;
  param_1->unk_0624 = 0;
  param_1->unk_0720 = *(uint *)(param_1->maybe_params + 0xbc);
  param_1->unk_07a0 = *(uint *)(param_1->maybe_params + 0xc0);
  return;
}

// 0x0016db10  size 0x180
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateAbs(RaceCar *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  param_1->unk_08a0 = '\0';
  fVar5 = param_1->maybe_handbrakeInput;
  if (param_1->unk_0891 != '\0') {
    iVar1 = 0;
    if (*(float *)(param_1->maybe_params + 0xe4) < 0.5) {
      iVar1 = 2;
    }
    fVar2 = (float)fabsf(*(undefined4 *)(&param_1->field_0x298 + iVar1 * 0x140));
    fVar3 = (float)fabsf(*(undefined4 *)(&param_1->field_0x3d8 + iVar1 * 0x140));
    if (fVar3 <= fVar2) {
      fVar4 = (float)param_1->unk_089c;
    }
    else {
      fVar4 = (float)param_1->unk_089c;
      fVar2 = fVar3;
    }
    if (fVar4 < fVar2) {
      param_1->unk_0898 = param_1->unk_0898 + 1;
      if (12.0 < (float)(int)param_1->unk_0898) {
        param_1->unk_0898 = 0xc;
      }
    }
    else {
      param_1->unk_0898 = param_1->unk_0898 - 1;
      if ((int)param_1->unk_0898 < 0) {
        param_1->unk_0898 = 0;
      }
    }
    fVar2 = 1.0 - (float)(int)param_1->unk_0898 * 0.083333336;
    if (0.0 <= fVar2) {
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    fVar2 = param_1->maybe_handbrakeInput * fVar2;
    param_1->maybe_handbrakeInput = fVar2;
    if (fVar5 != fVar2) {
      param_1->unk_08a0 = '\x01';
    }
  }
  return;
}

// 0x0016dc90  size 0x118
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_SetHandbrake(float param_1,RaceCar *param_2,uchar param_3)

{
  float fVar1;
  uint uVar2;
  float fStack_4;
  
  fVar1 = 0.0;
  if ((0.0 <= param_1) && (fVar1 = 1.0, param_1 <= 1.0)) {
    fVar1 = param_1;
  }
  param_2->unk_0894 = (uint)fVar1;
  fStack_4 = (float)param_2->unk_0044 * 0.25;
  Tire_SetupLoad(fStack_4,0x3f800000,0x3f800000,&param_2->field_0xae4,param_2->maybe_params + 0x290)
  ;
  fVar1 = (float)tanf(0);
  param_2->unk_0b08 = (uint)((float)param_2->unk_0b04 * fVar1);
  param_2->unk_0b0c = 0;
  uVar2 = Tire_FindPeakSlipRatio(&param_2->field_0xae4,&fStack_4);
  param_2->unk_0b6c = uVar2;
  fVar1 = 1.0 - param_1 * 0.9;
  param_2->unk_0891 = param_3;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_2->unk_089c = (uint)fVar1;
  return;
}

// 0x0016ddb0  size 0x4f8
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateBodyDynamics(RaceCar *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  RaceCar *pRVar5;
  RaceCar *pRVar6;
  RaceCar *pRVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1c0 [16];
  float afStack_1b0 [4];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  param_1->unk_08ac = (uint)(param_1->speed * param_1->speed);
  if (param_1->unk_0160 == 0) {
    if ((ulong)param_1->unk_0b74 != 0xffffffffffffffff) {
      param_1->unk_0b74 = '\x01';
      PhysBody_SetTransformFrom(param_1->unk_0154,param_1->maybe_params + 0xa0);
    }
  }
  else if (param_1->unk_0b74 != '\0') {
    param_1->unk_0b74 = '\0';
    PhysBody_SetTransformFrom(param_1->unk_0154,param_1->maybe_params + 0x90);
  }
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  param_1->unk_0180 = 0;
  param_1->unk_0184 = 0;
  param_1->unk_0188 = 0;
  param_1->unk_018c = uStack_74;
  fVar9 = (float)Vec3_Dot(&param_1->unk_0010,&param_1->unk_0080);
  fVar10 = (float)Vec3_Dot(&param_1->unk_0030,&param_1->unk_0090);
  uVar8 = 0;
  pRVar5 = param_1;
  pRVar6 = param_1;
  pRVar7 = param_1;
  do {
    uVar3 = pRVar7->unk_07c0;
    Mat33_MulVec3Transposed(&uStack_10,&param_1->unk_00a0,&pRVar6->unk_0910);
    Vec3_AddInPlace(&param_1->unk_0180,&uStack_10);
    Vec3_ScaleCopy(*(float *)(uVar3 + 0xd4) * fVar9,auStack_90,&param_1->unk_0080);
    uVar2 = PhysBody_GetLocalCenter(param_1->unk_0154);
    Vec3_Add(auStack_20,auStack_90,uVar2);
    Vec3_ScaleCopy((float)pRVar5->unk_01cc * fVar10,auStack_a0,&param_1->unk_0090);
    Vec3_AddInPlace(auStack_20,auStack_a0);
    Vec3_ScaleCopy(*(undefined4 *)(param_1->maybe_params + 0x84),auStack_b0,&param_1->unk_0070);
    Vec3_SubInPlace(auStack_20,auStack_b0);
    uStack_24 = 0x3f800000;
    if ((1 < uVar8) || (*(float *)&pRVar5->field_0x294 * (float)param_1->unk_086c < 0.0)) {
      Vec3_ScaleCopy(uStack_10,auStack_170,&param_1->unk_0080);
      Vec3_ScaleCopy(uStack_c,auStack_180,&param_1->unk_0070);
      Vec3_Add(auStack_160,auStack_170,auStack_180);
      Vec3_ScaleCopy(uStack_8,auStack_190,&param_1->unk_0090);
      Vec3_Add(&uStack_150,auStack_160,auStack_190);
      uStack_30 = uStack_150;
      uStack_2c = uStack_14c;
      uStack_28 = uStack_148;
      uStack_24 = uStack_144;
    }
    else {
      uVar3 = param_1->unk_013c;
      fVar12 = (float)cosf(uVar3);
      uVar11 = sinf(uVar3);
      Vec3_Scale(uVar11,auStack_c0,&param_1->unk_0080);
      Vec3_Scale(-fVar12,auStack_d0,&param_1->unk_0090);
      Vec3_Add(auStack_40,auStack_c0,auStack_d0);
      Vec3_Scale(fVar12,auStack_e0,&param_1->unk_0080);
      Vec3_Scale(uVar11,auStack_f0,&param_1->unk_0090);
      Vec3_Add(auStack_50,auStack_e0,auStack_f0);
      Vec3_ScaleCopy(uStack_10,auStack_120,auStack_40);
      Vec3_ScaleCopy(uStack_c,auStack_130,&param_1->unk_0070);
      Vec3_Add(auStack_110,auStack_120,auStack_130);
      Vec3_ScaleCopy(uStack_8,auStack_140,auStack_50);
      Vec3_Add(&uStack_100,auStack_110,auStack_140);
      uStack_30 = uStack_100;
      uStack_2c = uStack_fc;
      uStack_28 = uStack_f8;
      uStack_24 = uStack_f4;
    }
    PhysBody_AddForceAtPoint(param_1->unk_0154,&uStack_30,auStack_20);
    Mat33_MulVec3B(auStack_60,&param_1->unk_00a0,&uStack_30);
    fVar12 = (float)Vec3_Dot(&param_1->unk_0020,0x362570);
    if ((fVar12 < 0.7071) && ((float)pRVar5->unk_02a0 == 0.0)) {
      uStack_70 = DAT_003625e0;
      uStack_6c = DAT_003625e4;
      uStack_68 = DAT_003625e8;
      uStack_64 = DAT_003625ec;
      uVar2 = PhysBody_GetAngularVelocity(param_1->unk_0154);
      Vec3_Cross(auStack_1a0,uVar2,&param_1->unk_0020);
      fVar13 = (float)Vec3_Dot(auStack_1a0,0x362570);
      if (fVar13 < fVar12) {
        PhysBody_ClampAngularVelocity(param_1->unk_0154,&uStack_70);
      }
    }
    uVar8 = uVar8 + 1;
    pRVar7 = (RaceCar *)&pRVar7->field_0x4;
    pRVar6 = (RaceCar *)&pRVar6->unk_0010;
    pRVar5 = (RaceCar *)&pRVar5->unk_0140;
  } while (uVar8 < 4);
  param_1->unk_0060 = (uint)((float)param_1->unk_0188 * (float)param_1->unk_0ad8);
  param_1->unk_0064 = (uint)((float)param_1->unk_0180 * (float)param_1->unk_0adc);
  PhysBody_AddTorque(param_1->unk_0154,&param_1->unk_0950);
  puVar1 = (uint *)PhysBody_GetTorque(param_1->unk_0154);
  uVar8 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  param_1->unk_08c0 = *puVar1;
  param_1->unk_08c4 = uVar8;
  param_1->unk_08c8 = uVar3;
  param_1->unk_08cc = uVar4;
  if (param_1->unk_0ab0 != '\0') {
    afStack_1b0[2] = -(float)param_1->unk_08c8;
    afStack_1b0[0] = -(float)param_1->unk_08c0;
    afStack_1b0[1] = 0.0;
    PhysBody_AddTorque(param_1->unk_0154,afStack_1b0);
    param_1->unk_08c0 = 0;
    param_1->unk_08c8 = 0;
  }
  Vec3_Scale(0x3f000000,auStack_1c0,&param_1->unk_08c0);
  Vec3_AddInPlace(&param_1->unk_0170,auStack_1c0);
  Vec3_ScaleInPlace(0x3f2aaa9f,&param_1->unk_0170);
  puVar1 = (uint *)PhysBody_GetForce(param_1->unk_0154);
  uVar8 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  param_1->unk_08d0 = *puVar1;
  param_1->unk_08d4 = uVar8;
  param_1->unk_08d8 = uVar3;
  param_1->unk_08dc = uVar4;
  PhysBody_IntegrateFull(param_1->maybe_rpmLimit,param_1->unk_0154);
  return;
}

// 0x0016e2b0  size 0x1a8
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_CheckStuck(RaceCar *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  if (param_1->unk_0890 == '\0') {
    if (param_1->unk_0158 == 0) {
      return;
    }
    if (((1.0 <= param_1->speed) || (param_1->maybe_handbrakeInput != 0.0)) ||
       (param_1->maybe_brakeInput != 0.0)) {
      param_1->unk_0ab0 = '\0';
    }
    else {
      lVar1 = PhysBody_FindShapeWithFlags(param_1->unk_0158,0x3000000);
      if ((lVar1 != 0) && (fVar4 = (float)PhysWorld_GetFirstBody(lVar1), fVar4 < 70.0)) {
        iVar3 = PhysBody_GetOrientation(param_1->unk_0154);
        uStack_30 = *(undefined4 *)(iVar3 + 0x30);
        uStack_2c = *(undefined4 *)(iVar3 + 0x34);
        uStack_28 = *(undefined4 *)(iVar3 + 0x38);
        uVar2 = PhysWorld_GetBounds(lVar1);
        Vec3_Sub(auStack_10,uVar2,&uStack_30);
        uStack_c = 0;
        fVar4 = (float)Vec3_Dot(auStack_10,&param_1->unk_0070);
        param_1->unk_0ab0 = 0.0 <= fVar4;
      }
    }
  }
  else {
    param_1->unk_0ab0 = '\x01';
  }
  if (param_1->unk_0ab0 != '\0') {
    param_1->unk_028c = 0;
    param_1->unk_02b0 = 0;
    param_1->unk_03cc = 0;
    param_1->unk_03f0 = 0;
    param_1->unk_050c = 0;
    param_1->unk_0530 = 0;
    param_1->unk_064c = 0;
    param_1->unk_0670 = 0;
    iVar3 = PhysBody_GetPositionPtr(param_1->unk_0154);
    uStack_1c = *(undefined4 *)(iVar3 + 4);
    uStack_14 = *(undefined4 *)(iVar3 + 0xc);
    uStack_18 = 0;
    uStack_20 = 0;
    PhysBody_UpdateMomentum(param_1->unk_0154,&uStack_20);
  }
  return;
}

// 0x0016e460  size 0x3d8
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_UpdateWheelTransforms(RaceCar *param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  RaceCar *pRVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined1 auStack_80 [16];
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined1 auStack_60 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 auStack_40 [4];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar4 = 0;
  param_1->unk_0070 = 0;
  param_1->unk_0074 = 0;
  param_1->unk_0078 = 0;
  pRVar3 = param_1;
  do {
    uStack_24 = 0x3f800000;
    uStack_14 = 0x3f800000;
    PhysShape_CallVirtual(auStack_40,&pRVar3->unk_01f0,*(undefined4 *)&pRVar3->field_0x1c4);
    fVar5 = 0.0;
    *(undefined4 *)&pRVar3->field_0x200 = auStack_40[0];
    pRVar3->unk_0210 = uStack_30;
    pRVar3->unk_0214 = uStack_2c;
    pRVar3->unk_0218 = uStack_28;
    *(undefined4 *)&pRVar3->field_0x21c = uStack_24;
    *(undefined4 *)&pRVar3->field_0x1c4 = uStack_c;
    pRVar3->field_0x1c8 = (char)uStack_10;
    if (param_1->unk_09a8 != '\0') {
      if (uVar4 < 2) {
        pfVar1 = *(float **)(&param_1->field_0x9ac + (uint)(byte)pRVar3->field_0x1c8 * 4);
      }
      else {
        pfVar1 = *(float **)(&param_1->field_0xa2c + (uint)(byte)pRVar3->field_0x1c8 * 4);
      }
      if (pfVar1 != (float *)0x0) {
        fVar5 = *pfVar1;
      }
    }
    *(float *)&pRVar3->field_0x200 = *(float *)&pRVar3->field_0x200 + fVar5;
    *(uint *)&pRVar3->field_0x240 = pRVar3->unk_01f0;
    *(uint *)&pRVar3->field_0x244 = pRVar3->unk_01f4;
    *(uint *)&pRVar3->field_0x248 = pRVar3->unk_01f8;
    *(uint *)&pRVar3->field_0x24c = pRVar3->unk_01fc;
    *(float *)&pRVar3->field_0x244 = *(float *)&pRVar3->field_0x244 - *(float *)&pRVar3->field_0x200
    ;
    Vec3_AddInPlace(&param_1->unk_0070,&pRVar3->unk_0210);
    uVar4 = uVar4 + 1;
    pRVar3 = (RaceCar *)&pRVar3->unk_0140;
  } while (uVar4 < 4);
  Vec3_Normalize(&param_1->unk_0070);
  Vec3_Add(auStack_80,&param_1->field_0x240,&param_1->field_0x380);
  Vec3_Scale(0x3f000000,&uStack_70,auStack_80);
  param_1->unk_06c0 = uStack_70;
  param_1->unk_06c4 = uStack_6c;
  param_1->unk_06c8 = uStack_68;
  param_1->unk_06cc = uStack_64;
  Vec3_Add(auStack_a0,&param_1->field_0x4c0,&param_1->field_0x600);
  Vec3_Scale(0x3f000000,&uStack_90,auStack_a0);
  param_1->unk_0740 = uStack_90;
  param_1->unk_0744 = uStack_8c;
  param_1->unk_0748 = uStack_88;
  param_1->unk_074c = uStack_84;
  Vec3_Cross(&uStack_b0,&param_1->unk_0070,&param_1->unk_0030);
  param_1->unk_0080 = uStack_b0;
  param_1->unk_0084 = uStack_ac;
  param_1->unk_0088 = uStack_a8;
  param_1->unk_008c = uStack_a4;
  Vec3_Normalize(&param_1->unk_0080);
  Vec3_Cross(&uStack_c0,&param_1->unk_0080,&param_1->unk_0070);
  param_1->unk_0090 = uStack_c0;
  param_1->unk_0094 = uStack_bc;
  param_1->unk_0098 = uStack_b8;
  param_1->unk_009c = uStack_b4;
  Vec3_Normalize(&param_1->unk_0090);
  uStack_d0 = param_1->unk_0080;
  uStack_cc = param_1->unk_0084;
  uStack_c4 = 0x3f800000;
  uStack_c8 = param_1->unk_0088;
  uStack_d4 = 0x3f800000;
  uStack_e4 = 0x3f800000;
  param_1->unk_00a0 = uStack_d0;
  param_1->unk_00a4 = uStack_cc;
  param_1->unk_00a8 = uStack_c8;
  param_1->unk_00ac = 0x3f800000;
  uStack_e0 = param_1->unk_0070;
  uStack_dc = param_1->unk_0074;
  uStack_d8 = param_1->unk_0078;
  param_1->unk_00b0 = uStack_e0;
  param_1->unk_00b4 = uStack_dc;
  param_1->unk_00b8 = uStack_d8;
  param_1->unk_00bc = 0x3f800000;
  uStack_f0 = param_1->unk_0090;
  uStack_ec = param_1->unk_0094;
  uStack_e8 = param_1->unk_0098;
  param_1->unk_00c0 = uStack_f0;
  param_1->unk_00c4 = uStack_ec;
  param_1->unk_00c8 = uStack_e8;
  param_1->unk_00cc = 0x3f800000;
  pfVar1 = (float *)PhysBody_GetPositionPtr(param_1->unk_0154);
  fStack_50 = *pfVar1;
  fStack_4c = pfVar1[1];
  fStack_48 = pfVar1[2];
  fStack_44 = pfVar1[3];
  param_1->unk_006c = 0;
  if (0.01 < fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c) {
    Vec3_ScaleInPlace(0x447a0000,&fStack_50);
    uVar6 = Vec3_Dot(&fStack_50,&param_1->unk_0080);
    fVar7 = (float)Vec3_Dot(&fStack_50,&param_1->unk_0090);
    fVar5 = (float)fabsf(uVar6);
    fVar8 = (float)fabsf(fVar7);
    if (fVar8 < fVar5 * 0.3) {
      fVar7 = fVar7 / fVar5;
    }
    else {
      fVar7 = (float)atan2f(fVar7,fVar5);
    }
    param_1->unk_006c = (uint)-fVar7;
  }
  uVar4 = Vec3_Dot(&param_1->unk_0050,&param_1->unk_0070);
  param_1->unk_0b60 = uVar4;
  PhysBody_PointVelocityWorld(&uStack_100,param_1->unk_0154,&param_1->unk_06b0);
  param_1->unk_0700 = uStack_100;
  param_1->unk_0704 = uStack_fc;
  param_1->unk_0708 = uStack_f8;
  param_1->unk_070c = uStack_f4;
  PhysBody_PointVelocityWorld(&uStack_110,param_1->unk_0154,&param_1->unk_0730);
  param_1->unk_0780 = uStack_110;
  param_1->unk_0784 = uStack_10c;
  param_1->unk_0788 = uStack_108;
  param_1->unk_078c = uStack_104;
  uVar2 = PhysBody_GetPositionPtr(param_1->unk_0154);
  Mat33_MulVec3Transposed(&uStack_120,&param_1->unk_00a0,uVar2);
  param_1->unk_0190 = uStack_120;
  param_1->unk_0194 = uStack_11c;
  param_1->unk_0198 = uStack_118;
  param_1->unk_019c = uStack_114;
  Vec3_Cross(auStack_60,&param_1->unk_0070,&param_1->unk_0020);
  uVar4 = Vec3_Dot(auStack_60,&param_1->unk_0080);
  param_1->unk_0068 = uVar4;
  return;
}

// 0x0016e840  size 0x29c
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_SyncFromRigidBody(RaceCar *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  float fVar9;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint auStack_80 [7];
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
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
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = (uint *)PhysBody_GetTransform(param_1->unk_0154);
  uStack_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  param_1->unk_0010 = uStack_90;
  param_1->unk_0014 = uStack_8c;
  param_1->unk_0018 = uStack_88;
  param_1->unk_001c = uStack_84;
  iVar3 = PhysBody_GetTransform(param_1->unk_0154);
  uStack_a0 = *(uint *)(iVar3 + 0x10);
  uStack_9c = *(uint *)(iVar3 + 0x14);
  uStack_98 = *(uint *)(iVar3 + 0x18);
  param_1->unk_0020 = uStack_a0;
  param_1->unk_0024 = uStack_9c;
  param_1->unk_0028 = uStack_98;
  param_1->unk_002c = uStack_94;
  iVar3 = PhysBody_GetTransform(param_1->unk_0154);
  uStack_b0 = *(uint *)(iVar3 + 0x20);
  uStack_ac = *(uint *)(iVar3 + 0x24);
  uStack_a8 = *(uint *)(iVar3 + 0x28);
  param_1->unk_0030 = uStack_b0;
  param_1->unk_0034 = uStack_ac;
  param_1->unk_0038 = uStack_a8;
  param_1->unk_003c = uStack_a4;
  pfVar4 = (float *)PhysBody_GetLinearVelocity(param_1->unk_0154);
  param_1->speed = *pfVar4;
  puVar2 = (uint *)PhysBody_GetAngularVelocity(param_1->unk_0154);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  param_1->unk_0050 = *puVar2;
  param_1->unk_0054 = uVar5;
  param_1->unk_0058 = uVar6;
  param_1->unk_005c = uVar7;
  puVar2 = (uint *)PhysBody_GetTransform(param_1->unk_0154);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  auStack_80[3] = 0x3f800000;
  uStack_64 = 0x3f800000;
  uStack_54 = 0x3f800000;
  param_1->unk_00e0 = *puVar2;
  param_1->unk_00e4 = uVar5;
  param_1->unk_00e8 = uVar6;
  param_1->unk_00ec = uVar7;
  uVar5 = puVar2[5];
  uVar6 = puVar2[6];
  uVar7 = puVar2[7];
  param_1->unk_00f0 = puVar2[4];
  param_1->unk_00f4 = uVar5;
  param_1->unk_00f8 = uVar6;
  param_1->unk_00fc = uVar7;
  uVar5 = puVar2[9];
  uVar6 = puVar2[10];
  uVar7 = puVar2[0xb];
  param_1->unk_0100 = puVar2[8];
  param_1->unk_0104 = uVar5;
  param_1->unk_0108 = uVar6;
  param_1->unk_010c = uVar7;
  uVar5 = puVar2[0xd];
  uVar6 = puVar2[0xe];
  uVar7 = puVar2[0xf];
  param_1->unk_0110 = puVar2[0xc];
  param_1->unk_0114 = uVar5;
  param_1->unk_0118 = uVar6;
  param_1->unk_011c = uVar7;
  uStack_34 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_4 = 0x3f800000;
  uStack_44 = 0x3f800000;
  fVar9 = (float)cosf(param_1->unk_0068);
  puVar1 = param_1->maybe_params;
  uVar5 = 0;
  uStack_40 = *(undefined4 *)(puVar1 + 0x3b0);
  uStack_3c = *(undefined4 *)(puVar1 + 0x3b4);
  uStack_38 = *(undefined4 *)(puVar1 + 0x3b8);
  uStack_34 = *(undefined4 *)(puVar1 + 0x3bc);
  param_1->unk_01cc =
       (uint)(*(float *)(param_1->unk_07c0 + 0x100) * fVar9 +
             *(float *)(param_1->maybe_params + 0x3c0) + 0.0);
  puVar1 = param_1->maybe_params;
  uStack_30 = *(undefined4 *)(puVar1 + 0x410);
  uStack_2c = *(undefined4 *)(puVar1 + 0x414);
  uStack_28 = *(undefined4 *)(puVar1 + 0x418);
  uStack_24 = *(undefined4 *)(puVar1 + 0x41c);
  param_1->unk_030c =
       (uint)(*(float *)(param_1->unk_07c4 + 0x100) * fVar9 +
             *(float *)(param_1->maybe_params + 0x420) + 0.0);
  puVar1 = param_1->maybe_params;
  uStack_20 = *(undefined4 *)(puVar1 + 0x470);
  uStack_1c = *(undefined4 *)(puVar1 + 0x474);
  uStack_18 = *(undefined4 *)(puVar1 + 0x478);
  uStack_14 = *(undefined4 *)(puVar1 + 0x47c);
  param_1->unk_044c =
       (uint)(*(float *)(param_1->unk_07c8 + 0x100) * fVar9 +
             *(float *)(param_1->maybe_params + 0x480) + 0.0);
  puVar1 = param_1->maybe_params;
  uStack_10 = *(undefined4 *)(puVar1 + 0x4d0);
  uStack_c = *(undefined4 *)(puVar1 + 0x4d4);
  uStack_8 = *(undefined4 *)(puVar1 + 0x4d8);
  uStack_4 = *(undefined4 *)(puVar1 + 0x4dc);
  param_1->unk_058c =
       (uint)(*(float *)(param_1->unk_07cc + 0x100) * fVar9 +
             *(float *)(param_1->maybe_params + 0x4e0) + 0.0);
  puVar2 = auStack_80;
  puVar8 = &uStack_40;
  do {
    Mat33_MulVec3(&uStack_100,&param_1->unk_00e0,puVar8);
    uVar5 = uVar5 + 1;
    *puVar2 = uStack_100;
    puVar2[1] = uStack_fc;
    puVar2[2] = uStack_f8;
    puVar2[3] = uStack_f4;
    puVar2 = puVar2 + 4;
    puVar8 = puVar8 + 4;
  } while (uVar5 < 4);
  param_1->unk_01f0 = auStack_80[0];
  param_1->unk_01f4 = auStack_80[1];
  param_1->unk_01f8 = auStack_80[2];
  param_1->unk_01fc = auStack_80[3];
  param_1->unk_0330 = auStack_80[4];
  param_1->unk_0334 = auStack_80[5];
  param_1->unk_0338 = auStack_80[6];
  param_1->unk_033c = uStack_64;
  param_1->unk_0470 = uStack_60;
  param_1->unk_0474 = uStack_5c;
  param_1->unk_0478 = uStack_58;
  param_1->unk_047c = uStack_54;
  param_1->unk_05b0 = uStack_50;
  param_1->unk_05b4 = uStack_4c;
  param_1->unk_05b8 = uStack_48;
  param_1->unk_05bc = uStack_44;
  param_1->unk_0718 = (uint)((float)param_1->unk_01cc - (float)param_1->unk_030c);
  param_1->unk_0798 = (uint)((float)param_1->unk_044c - (float)param_1->unk_058c);
  Vec3_Add(auStack_d0,&param_1->unk_01f0,&param_1->unk_0330);
  Vec3_Scale(0x3f000000,&uStack_c0,auStack_d0);
  param_1->unk_06b0 = uStack_c0;
  param_1->unk_06b4 = uStack_bc;
  param_1->unk_06b8 = uStack_b8;
  param_1->unk_06bc = uStack_b4;
  Vec3_Add(auStack_f0,&param_1->unk_0470,&param_1->unk_05b0);
  Vec3_Scale(0x3f000000,&uStack_e0,auStack_f0);
  param_1->unk_0730 = uStack_e0;
  param_1->unk_0734 = uStack_dc;
  param_1->unk_0738 = uStack_d8;
  param_1->unk_073c = uStack_d4;
  return;
}

// 0x0016eae0  size 0x14
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void maybe_Car_ResetShift(RaceCar *param_1)

{
  param_1->unk_08b0 = '\0';
  param_1->unk_08b1 = '\0';
  param_1->unk_08f8 = param_1->unk_08f4;
  return;
}

// 0x0016eb00  size 0x1cc
/* per-step driver */

void Car_Simulate(undefined8 param_1)

{
  uint uVar1;
  RaceCar *pRVar2;
  
  pRVar2 = (RaceCar *)param_1;
  (**(code **)(pRVar2->vtable + 0x3c))();
  pRVar2->unk_08bc = '\x01';
  Car_SyncFromRigidBody(pRVar2);
  Car_UpdateWheelTransforms(pRVar2);
  Car_UpdateSuspension(pRVar2);
  (**(code **)(pRVar2->vtable + 0x50))(param_1);
  (**(code **)(pRVar2->vtable + 0x4c))(param_1);
  if (*(int *)(pRVar2->maybe_params + 0x524) == 1) {
    Car_UpdateTransmission(pRVar2,0);
  }
  else {
    if (pRVar2->unk_0811 != '\0') {
      Car_UpdateTransmission(pRVar2,0);
      uVar1 = pRVar2->gear;
      goto LAB_0016eb9c;
    }
    Car_UpdateTransmission(pRVar2,1);
  }
  uVar1 = pRVar2->gear;
LAB_0016eb9c:
  if (uVar1 == 0xffffffff) {
    pRVar2->unk_086c = 0xbf800000;
  }
  else {
    pRVar2->unk_086c = 0x3f800000;
  }
  (**(code **)(pRVar2->vtable + 0x54))(param_1);
  Car_UpdateSteeringGeometry(pRVar2);
  Car_UpdateSlipAngles(pRVar2);
  Car_ApplyRollingResistance(pRVar2);
  Car_UpdateBrakeTorque(pRVar2);
  Car_UpdateWheelSpin(param_1);
  Car_UpdateLsd(pRVar2);
  Car_UpdateClutchAndTorque(pRVar2);
  Car_UpdateGearRatio(pRVar2);
  Car_UpdateWheelAngularVel(pRVar2);
  Car_ApplyTireForces(pRVar2);
  Car_CheckStuck(pRVar2);
  Car_UpdateParkingBrake(pRVar2);
  Car_ApplySuspensionForces(pRVar2);
  (**(code **)(pRVar2->vtable + 0x44))(param_1);
  Car_UpdateBodyDynamics(pRVar2);
  Car_SyncFromRigidBody(pRVar2);
  Car_UpdateWheelTransforms(pRVar2);
  Car_UpdateSteeringGeometry(pRVar2);
  Car_UpdateEngine(param_1);
  Car_UpdateDownforce(pRVar2);
  Car_UpdateTurbo(pRVar2);
  Car_UpdateWheelContacts(pRVar2);
  Car_UpdateCamber(param_1);
  Car_ApplyStopFriction(pRVar2);
  Car_CheckUpsideDown(pRVar2);
  (**(code **)(pRVar2->vtable + 0x40))(param_1);
  return;
}

// 0x0016ecd0  size 0xc0
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void maybe_Car_SetRpmLimit(float param_1,RaceCar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  param_2->maybe_rpmLimit = param_1;
  fVar4 = param_1 * 600.0;
  param_2->maybe_rpmLimitInv = 1.0 / param_2->maybe_rpmLimit;
  if (fVar4 < 2.1474836e+09) {
    param_2->unk_0880 = (int)fVar4;
  }
  else {
    param_2->unk_0880 = (int)(fVar4 - 2.1474836e+09) | 0x80000000;
  }
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  param_2->unk_0910 = DAT_003625e0;
  param_2->unk_0914 = uVar1;
  param_2->unk_0918 = uVar2;
  param_2->unk_091c = uVar3;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  param_2->unk_0920 = DAT_003625e0;
  param_2->unk_0924 = uVar1;
  param_2->unk_0928 = uVar2;
  param_2->unk_092c = uVar3;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  param_2->unk_0930 = DAT_003625e0;
  param_2->unk_0934 = uVar1;
  param_2->unk_0938 = uVar2;
  param_2->unk_093c = uVar3;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  param_2->unk_0940 = DAT_003625e0;
  param_2->unk_0944 = uVar1;
  param_2->unk_0948 = uVar2;
  param_2->unk_094c = uVar3;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  param_2->unk_0950 = DAT_003625e0;
  param_2->unk_0954 = uVar1;
  param_2->unk_0958 = uVar2;
  param_2->unk_095c = uVar3;
  param_2->unk_08b4 = 0;
  param_2->unk_08b8 = 0;
  param_2->unk_0b8c = param_2->unk_0b8c + 1;
  return;
}

// 0x0016ed90  size 0xac
long Car_dtor(long param_1,short param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)param_1;
    *puVar2 = &DAT_0036e280;
    if (puVar2[0x56] != 0) {
      Phys_RemoveBody();
    }
    puVar2[0x56] = 0;
    piVar1 = (int *)puVar2[0x57];
    if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 8))(piVar1,1);
    }
    puVar2[0x57] = 0;
    if (puVar2[0x55] != 0) {
      maybe_CarSpec_dtor(puVar2[0x55],1);
    }
    puVar2[0x55] = 0;
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x0016ee40  size 0x4d0
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car_Clear(RaceCar *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  RaceCar *pRVar4;
  float fVar5;
  
  param_1->maybe_params = (undefined *)0x0;
  param_1->unk_0018 = 0;
  param_1->unk_0014 = 0;
  param_1->unk_0010 = 0;
  param_1->unk_0028 = 0;
  param_1->unk_0024 = 0;
  param_1->unk_0020 = 0;
  param_1->unk_0038 = 0;
  param_1->unk_0034 = 0;
  param_1->unk_0030 = 0;
  param_1->speed = 0.0;
  param_1->unk_0044 = 0;
  param_1->unk_0058 = 0;
  param_1->unk_0054 = 0;
  param_1->unk_0050 = 0;
  param_1->steerInput = 0.0;
  param_1->maybe_handbrakeInput = 0.0;
  param_1->maybe_boostInput = 0.0;
  param_1->maybe_throttleInput = 0.0;
  param_1->unk_0138 = 0;
  param_1->maybe_brakeInput = 0.0;
  param_1->unk_0150 = 0;
  param_1->unk_013c = 0;
  param_1->unk_014c = 0;
  param_1->unk_0140 = 0;
  param_1->unk_0144 = 0;
  param_1->unk_0148 = 0;
  param_1->unk_0150 = 0;
  param_1->unk_0064 = 0;
  param_1->unk_0068 = 0;
  param_1->unk_0060 = 0;
  param_1->unk_0160 = 0;
  param_1->unk_0178 = 0;
  param_1->unk_0174 = 0;
  param_1->unk_0170 = 0;
  param_1->unk_0198 = 0;
  param_1->unk_0194 = 0;
  param_1->unk_0190 = 0;
  param_1->unk_01a8 = 0;
  param_1->unk_01a4 = 0;
  param_1->unk_01a0 = 0;
  param_1->unk_0070 = 0;
  param_1->unk_0074 = 0x3f800000;
  param_1->unk_0078 = 0;
  param_1->unk_0098 = 0;
  param_1->unk_0094 = 0;
  param_1->unk_0090 = 0;
  param_1->unk_0088 = 0;
  param_1->unk_0084 = 0;
  param_1->unk_0080 = 0;
  memset(&param_1->unk_01b0,0,0x500);
  memset(&param_1->unk_06b0,0,0x80);
  memset(&param_1->unk_0730,0,0x80);
  memset(&param_1->unk_07d0,0,0x10);
  memset(&param_1->unk_07ec,0,0x80);
  param_1->unk_0830 = '\0';
  param_1->unk_0811 = '\x01';
  param_1->maybe_rpmLimit = 0.016666668;
  param_1->maybe_rpmLimitInv = 1.0 / param_1->maybe_rpmLimit;
  param_1->unk_0878 = 0x42700000;
  fVar5 = param_1->maybe_rpmLimit * 600.0;
  if (fVar5 < 2.1474836e+09) {
    param_1->unk_0880 = (int)fVar5;
  }
  else {
    param_1->unk_0880 = (int)(fVar5 - 2.1474836e+09) | 0x80000000;
  }
  param_1->unk_087c = (uint)(param_1->maybe_rpmLimit / (float)param_1->unk_0880);
  param_1->unk_0884 = 2;
  param_1->unk_088f = '\0';
  param_1->unk_0890 = '\0';
  param_1->unk_0891 = '\0';
  param_1->unk_0892 = '\0';
  param_1->unk_0893 = '\0';
  param_1->unk_0898 = 0;
  param_1->unk_08a0 = '\0';
  param_1->unk_08a1 = '\0';
  param_1->nitroOn = '\0';
  param_1->unk_088e = '\0';
  param_1->unk_08a4 = 0x3f800000;
  param_1->unk_08a8 = 0x3f800000;
  param_1->unk_08ac = 0;
  param_1->unk_08b0 = '\0';
  param_1->unk_08b1 = '\0';
  param_1->unk_08b4 = 0;
  param_1->unk_08b8 = 0;
  param_1->unk_08bc = '\0';
  uVar2 = DAT_003625ec;
  uVar1 = DAT_003625e8;
  uVar3 = DAT_003625e4;
  param_1->unk_08c0 = DAT_003625e0;
  param_1->unk_08c4 = uVar3;
  param_1->unk_08c8 = uVar1;
  param_1->unk_08cc = uVar2;
  uVar2 = DAT_003625ec;
  uVar1 = DAT_003625e8;
  uVar3 = DAT_003625e4;
  param_1->unk_08d0 = DAT_003625e0;
  param_1->unk_08d4 = uVar3;
  param_1->unk_08d8 = uVar1;
  param_1->unk_08dc = uVar2;
  param_1->unk_08e0 = 0;
  param_1->unk_02ac = 0;
  param_1->unk_0278 = 0x3f800000;
  param_1->unk_0210 = 0;
  param_1->unk_0214 = 0x3f800000;
  param_1->unk_0218 = 0;
  param_1->unk_0270 = 0;
  param_1->unk_01d8 = 0;
  param_1->unk_03ec = 0;
  param_1->unk_03b8 = 0x3f800000;
  param_1->unk_0350 = 0;
  param_1->unk_0354 = 0x3f800000;
  param_1->unk_0358 = 0;
  param_1->unk_03b0 = 0;
  param_1->unk_0318 = 0;
  param_1->unk_052c = 0;
  param_1->unk_04f8 = 0x3f800000;
  param_1->unk_0490 = 0;
  param_1->unk_0494 = 0x3f800000;
  param_1->unk_0498 = 0;
  param_1->unk_04f0 = 0;
  param_1->unk_0458 = 0;
  param_1->unk_066c = 0;
  param_1->unk_0638 = 0x3f800000;
  param_1->unk_05d0 = 0;
  param_1->unk_05d4 = 0x3f800000;
  param_1->unk_05d8 = 0;
  param_1->unk_0630 = 0;
  param_1->unk_0598 = 0;
  param_1->unk_0188 = 0;
  param_1->unk_0184 = 0;
  param_1->unk_0180 = 0;
  param_1->unk_0888 = 0;
  param_1->unk_08e4 = 0;
  param_1->unk_08e8 = '\0';
  param_1->unk_08ec = 0;
  param_1->unk_08f0 = '\0';
  param_1->unk_08f4 = 0;
  param_1->unk_08f8 = 0;
  uVar2 = DAT_0036256c;
  uVar1 = DAT_00362568;
  uVar3 = DAT_00362564;
  param_1->unk_0900 = DAT_00362560;
  param_1->unk_0904 = uVar3;
  param_1->unk_0908 = uVar1;
  param_1->unk_090c = uVar2;
  memset(&param_1->unk_0910,0,0x50);
  uVar3 = 0;
  pRVar4 = param_1;
  do {
    *(undefined4 *)&pRVar4->field_0x9ac = 0;
    uVar3 = uVar3 + 8;
    *(undefined4 *)&pRVar4->field_0xa2c = 0;
    *(undefined4 *)&pRVar4->field_0x9b0 = 0;
    *(undefined4 *)&pRVar4->field_0xa30 = 0;
    *(undefined4 *)&pRVar4->field_0x9b4 = 0;
    *(undefined4 *)&pRVar4->field_0xa34 = 0;
    *(undefined4 *)&pRVar4->field_0x9b8 = 0;
    *(undefined4 *)&pRVar4->field_0xa38 = 0;
    *(undefined4 *)&pRVar4->field_0x9bc = 0;
    *(undefined4 *)&pRVar4->field_0xa3c = 0;
    *(undefined4 *)&pRVar4->field_0x9c0 = 0;
    *(undefined4 *)&pRVar4->field_0xa40 = 0;
    *(undefined4 *)&pRVar4->field_0x9c4 = 0;
    *(undefined4 *)&pRVar4->field_0xa44 = 0;
    *(undefined4 *)&pRVar4->field_0x9c8 = 0;
    *(undefined4 *)&pRVar4->field_0xa48 = 0;
    pRVar4 = (RaceCar *)&pRVar4->unk_0020;
  } while (uVar3 < 0x20);
  param_1->unk_0961 = '\0';
  param_1->unk_0964 = 0;
  param_1->unk_07e0 = 0;
  param_1->unk_07e4 = 0;
  param_1->unk_07e8 = 0;
  param_1->unk_0858 = 0;
  param_1->unk_085c = 0;
  param_1->unk_07f0 = 0;
  param_1->unk_0828 = 0;
  param_1->unk_0835 = '\0';
  param_1->unk_0834 = '\0';
  param_1->unk_0aac = (uint)param_1->maybe_rpmLimitInv;
  param_1->unk_0888 = 0;
  param_1->unk_0064 = 0;
  param_1->unk_0068 = 0;
  param_1->unk_088c = '\x01';
  param_1->unk_0ab0 = '\0';
  Mat34_Identity(&param_1->unk_00e0);
  Mat34_Identity(&param_1->unk_00a0);
  param_1->unk_0968 = 0;
  uVar3 = 0;
  param_1->unk_096c = 0;
  param_1->unk_0970 = 0;
  param_1->unk_0974 = 0;
  param_1->unk_0978 = 0;
  param_1->unk_097c = 0;
  param_1->unk_0980 = 0;
  param_1->unk_07b0 = 0;
  param_1->unk_07c0 = 0;
  param_1->unk_07d0 = 0;
  param_1->unk_0988 = 0;
  param_1->unk_0998 = 0;
  param_1->unk_07b4 = 0;
  param_1->unk_07c4 = 0;
  param_1->unk_07d4 = 0;
  param_1->unk_098c = 0;
  param_1->unk_099c = 0;
  param_1->unk_07b8 = 0;
  param_1->unk_07c8 = 0;
  param_1->unk_07d8 = 0;
  param_1->unk_0990 = 0;
  param_1->unk_09a0 = 0;
  param_1->unk_07bc = 0;
  param_1->unk_07cc = 0;
  param_1->unk_07dc = 0;
  param_1->unk_0994 = 0;
  param_1->unk_09a4 = 0;
  pRVar4 = param_1;
  do {
    *(undefined4 *)&pRVar4->field_0x9ac = 0;
    uVar3 = uVar3 + 8;
    *(undefined4 *)&pRVar4->field_0xa2c = 0;
    *(undefined4 *)&pRVar4->field_0x9b0 = 0;
    *(undefined4 *)&pRVar4->field_0xa30 = 0;
    *(undefined4 *)&pRVar4->field_0x9b4 = 0;
    *(undefined4 *)&pRVar4->field_0xa34 = 0;
    *(undefined4 *)&pRVar4->field_0x9b8 = 0;
    *(undefined4 *)&pRVar4->field_0xa38 = 0;
    *(undefined4 *)&pRVar4->field_0x9bc = 0;
    *(undefined4 *)&pRVar4->field_0xa3c = 0;
    *(undefined4 *)&pRVar4->field_0x9c0 = 0;
    *(undefined4 *)&pRVar4->field_0xa40 = 0;
    *(undefined4 *)&pRVar4->field_0x9c4 = 0;
    *(undefined4 *)&pRVar4->field_0xa44 = 0;
    *(undefined4 *)&pRVar4->field_0x9c8 = 0;
    *(undefined4 *)&pRVar4->field_0xa48 = 0;
    pRVar4 = (RaceCar *)&pRVar4->unk_0020;
  } while (uVar3 < 0x20);
  param_1->unk_0ac0 = 0;
  param_1->unk_0ac4 = '\0';
  param_1->unk_0adc = 0x3f800000;
  param_1->unk_0ad8 = 0x3f800000;
  param_1->unk_0ae0 = 0;
  param_1->unk_0ab1 = '\0';
  param_1->unk_0ab8 = 0x3f800000;
  param_1->unk_0abc = 0x3f800000;
  param_1->unk_0ac8 = 0x3f800000;
  param_1->unk_0acc = '\0';
  param_1->unk_09a8 = '\0';
  param_1->unk_0b8c = 0;
  param_1->unk_0bd0 = 0;
  return;
}

// 0x0016f310  size 0x504
undefined8 Car_ctor(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  RaceCar *pRVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  
  pRVar7 = (RaceCar *)param_1;
  pRVar7->vtable = &DAT_0036e280;
  pRVar7->unk_001c = 0x3f800000;
  pRVar7->unk_002c = 0x3f800000;
  puVar4 = &pRVar7->unk_02f0;
  pRVar7->unk_003c = 0x3f800000;
  puVar11 = &pRVar7->unk_06b0;
  pRVar7->unk_005c = 0x3f800000;
  *(undefined4 *)&pRVar7->field_0x7c = 0x3f800000;
  pRVar7->unk_008c = 0x3f800000;
  pRVar7->unk_009c = 0x3f800000;
  *(undefined4 *)&pRVar7->field_0x17c = 0x3f800000;
  pRVar7->unk_018c = 0x3f800000;
  pRVar7->unk_019c = 0x3f800000;
  *(undefined4 *)&pRVar7->field_0x1ac = 0x3f800000;
  pRVar7->unk_01fc = 0x3f800000;
  *(undefined4 *)&pRVar7->field_0x21c = 0x3f800000;
  pRVar7->unk_022c = 0x3f800000;
  pRVar7->unk_023c = 0x3f800000;
  *(undefined4 *)&pRVar7->field_0x24c = 0x3f800000;
  *(undefined4 *)&pRVar7->field_0x2ec = 0x3f800000;
  if (puVar4 < puVar11) {
    uVar10 = (int)puVar11 - (int)&pRVar7->unk_02f0;
    uVar9 = uVar10 + 0x13f;
    uVar6 = (int)uVar9 / 0x140;
    uVar8 = uVar6 + 1;
    if (8 < (int)uVar8) {
      bVar3 = false;
      bVar2 = false;
      if (&pRVar7->unk_02f0 <= puVar11) {
        bVar1 = true;
        if (((uVar10 & 0x80000000) == 0) && ((uVar9 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if (((uVar6 & 0x80000000) == 0) && ((uVar8 & 0x80000000) != 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        do {
          puVar4[0x13] = 0x3f800000;
          puVar4[0x1b] = 0x3f800000;
          puVar4[0x1f] = 0x3f800000;
          puVar4[0x23] = 0x3f800000;
          puVar4[0x27] = 0x3f800000;
          puVar4[0x4f] = 0x3f800000;
          puVar4[99] = 0x3f800000;
          puVar4[0x6b] = 0x3f800000;
          puVar4[0x6f] = 0x3f800000;
          puVar4[0x73] = 0x3f800000;
          puVar4[0x77] = 0x3f800000;
          puVar4[0x9f] = 0x3f800000;
          puVar4[0xb3] = 0x3f800000;
          puVar4[0xbb] = 0x3f800000;
          puVar4[0xbf] = 0x3f800000;
          puVar4[0xc3] = 0x3f800000;
          puVar4[199] = 0x3f800000;
          puVar4[0xef] = 0x3f800000;
          puVar4[0x103] = 0x3f800000;
          puVar4[0x10b] = 0x3f800000;
          puVar4[0x10f] = 0x3f800000;
          puVar4[0x113] = 0x3f800000;
          puVar4[0x117] = 0x3f800000;
          puVar4[0x13f] = 0x3f800000;
          puVar4[0x153] = 0x3f800000;
          puVar4[0x15b] = 0x3f800000;
          puVar4[0x15f] = 0x3f800000;
          puVar4[0x163] = 0x3f800000;
          puVar4[0x167] = 0x3f800000;
          puVar4[399] = 0x3f800000;
          puVar4[0x1a3] = 0x3f800000;
          puVar4[0x1ab] = 0x3f800000;
          puVar4[0x1af] = 0x3f800000;
          puVar4[0x1b3] = 0x3f800000;
          puVar4[0x1b7] = 0x3f800000;
          puVar4[0x1df] = 0x3f800000;
          puVar4[499] = 0x3f800000;
          puVar4[0x1fb] = 0x3f800000;
          puVar4[0x1ff] = 0x3f800000;
          puVar4[0x203] = 0x3f800000;
          puVar4[0x207] = 0x3f800000;
          puVar4[0x22f] = 0x3f800000;
          puVar4[0x243] = 0x3f800000;
          puVar4[0x24b] = 0x3f800000;
          puVar4[0x24f] = 0x3f800000;
          puVar4[0x253] = 0x3f800000;
          puVar4[599] = 0x3f800000;
          puVar4[0x27f] = 0x3f800000;
          puVar4 = puVar4 + 0x280;
        } while (puVar4 < &pRVar7[-1].field_0x1490);
      }
    }
    for (; puVar4 < &pRVar7->unk_06b0; puVar4 = puVar4 + 0x50) {
      puVar4[0x13] = 0x3f800000;
      puVar4[0x1b] = 0x3f800000;
      puVar4[0x1f] = 0x3f800000;
      puVar4[0x23] = 0x3f800000;
      puVar4[0x27] = 0x3f800000;
      puVar4[0x4f] = 0x3f800000;
    }
  }
  pRVar7->unk_06bc = 0x3f800000;
  pRVar7->unk_06cc = 0x3f800000;
  puVar4 = &pRVar7->unk_0920;
  *(undefined4 *)&pRVar7->field_0x6dc = 0x3f800000;
  pRVar7->unk_06ec = 0x3f800000;
  pRVar7->unk_06fc = 0x3f800000;
  pRVar7->unk_070c = 0x3f800000;
  pRVar7->unk_073c = 0x3f800000;
  pRVar7->unk_074c = 0x3f800000;
  pRVar7->unk_075c = 0x3f800000;
  pRVar7->unk_076c = 0x3f800000;
  pRVar7->unk_077c = 0x3f800000;
  pRVar7->unk_078c = 0x3f800000;
  pRVar7->unk_08cc = 0x3f800000;
  pRVar7->unk_08dc = 0x3f800000;
  pRVar7->unk_090c = 0x3f800000;
  pRVar7->unk_091c = 0x3f800000;
  if (puVar4 < &pRVar7->field_0x960) {
    uVar9 = (int)&pRVar7->field_0x960 - (int)&pRVar7->unk_0920;
    uVar8 = uVar9 + 0xf;
    uVar6 = uVar8;
    if ((int)uVar8 < 0) {
      uVar6 = uVar9 + 0x1e;
    }
    uVar10 = ((int)uVar6 >> 4) + 1;
    if (8 < (int)uVar10) {
      bVar3 = false;
      bVar2 = false;
      if (&pRVar7->unk_0920 <= &pRVar7->field_0x960) {
        bVar1 = true;
        if (((uVar9 & 0x80000000) == 0) && ((uVar8 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if ((((int)uVar6 >> 4 & 0x80000000U) == 0) && ((uVar10 & 0x80000000) != 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        do {
          puVar4[3] = 0x3f800000;
          puVar4[7] = 0x3f800000;
          puVar4[0xb] = 0x3f800000;
          puVar4[0xf] = 0x3f800000;
          puVar4[0x13] = 0x3f800000;
          puVar4[0x17] = 0x3f800000;
          puVar4[0x1b] = 0x3f800000;
          puVar4[0x1f] = 0x3f800000;
          puVar4 = puVar4 + 0x20;
        } while (puVar4 < &pRVar7->unk_08e0);
      }
    }
    for (; puVar4 < &pRVar7->field_0x960; puVar4 = puVar4 + 4) {
      puVar4[3] = 0x3f800000;
    }
  }
  *(undefined4 *)&pRVar7->field_0xb9c = 0x3f800000;
  puVar5 = &pRVar7->field_0xba0;
  if (puVar5 < &pRVar7->unk_0bd0) {
    uVar9 = (int)&pRVar7->unk_0bd0 - (int)&pRVar7->field_0xba0;
    uVar8 = uVar9 + 0xf;
    uVar6 = uVar8;
    if ((int)uVar8 < 0) {
      uVar6 = uVar9 + 0x1e;
    }
    uVar10 = ((int)uVar6 >> 4) + 1;
    if (8 < (int)uVar10) {
      bVar3 = false;
      bVar2 = false;
      if (&pRVar7->field_0xba0 <= &pRVar7->unk_0bd0) {
        bVar1 = true;
        if (((uVar9 & 0x80000000) == 0) && ((uVar8 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if ((((int)uVar6 >> 4 & 0x80000000U) == 0) && ((uVar10 & 0x80000000) != 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        do {
          *(undefined4 *)(puVar5 + 0xc) = 0x3f800000;
          *(undefined4 *)(puVar5 + 0x1c) = 0x3f800000;
          *(undefined4 *)(puVar5 + 0x2c) = 0x3f800000;
          *(undefined4 *)(puVar5 + 0x3c) = 0x3f800000;
          *(uint *)(puVar5 + 0x4c) = 0x3f800000;
          *(undefined4 *)(puVar5 + 0x5c) = 0x3f800000;
          *(undefined4 *)(puVar5 + 0x6c) = 0x3f800000;
          *(undefined4 *)(puVar5 + 0x7c) = 0x3f800000;
          puVar5 = puVar5 + 0x80;
        } while (puVar5 < &pRVar7->field_0xb50);
      }
    }
    for (; puVar5 < &pRVar7->unk_0bd0; puVar5 = puVar5 + 0x10) {
      *(undefined4 *)(puVar5 + 0xc) = 0x3f800000;
    }
  }
  pRVar7->unk_0154 = 0;
  pRVar7->unk_0158 = 0;
  *(undefined4 *)&pRVar7->field_0x15c = 0;
  Car_Clear(pRVar7);
  pRVar7->field_0x960 = 0;
  return param_1;
}

// 0x0016f820  size 0x110
void CarSpec_SetupAxle(int param_1,float *param_2,long param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = param_1 + 0x290;
  if (param_3 != 0) {
    iVar1 = param_1 + 0x180;
  }
  fVar3 = *param_2;
  fVar2 = param_2[1];
  *(float *)(iVar1 + 0x10) = (fVar3 * 2.0) / fVar2;
  *(float *)(iVar1 + 0x14) = (fVar3 / fVar2) / fVar2;
  *(float *)(iVar1 + 0x18) = param_2[2];
  *(float *)(iVar1 + 0x1c) = fVar2;
  fVar3 = param_2[4];
  fVar2 = param_2[5];
  *(float *)(iVar1 + 0x20) = (fVar3 * 2.0) / fVar2;
  *(float *)(iVar1 + 0x24) = (fVar3 / fVar2) / fVar2;
  *(float *)(iVar1 + 0x28) = param_2[6];
  *(float *)(iVar1 + 0x2c) = fVar2;
  fVar2 = param_2[8];
  *(float *)(iVar1 + 0x34) = fVar2;
  *(float *)(iVar1 + 0x38) = 1.0 / fVar2;
  *(float *)(iVar1 + 0x3c) = param_2[9];
  *(float *)(iVar1 + 0x40) = param_2[10];
  *(float *)(iVar1 + 0xb4) = param_2[0xb];
  *(float *)(iVar1 + 0xb8) = param_2[0xc];
  *(float *)(iVar1 + 0xbc) = param_2[0xd];
  *(float *)(iVar1 + 0xc0) = param_2[0xe];
  *(float *)(iVar1 + 200) =
       *(float *)(iVar1 + 0x34) * (*(float *)(iVar1 + 0x40) + 10.0) * *(float *)(iVar1 + 0x34) * 0.5
  ;
  *(float *)(iVar1 + 0x8c) = param_2[0xf];
  *(float *)(iVar1 + 0x90) = (1.0 / param_2[0x10]) / 1000.0;
  return;
}

// 0x0016f930  size 0x988
void CarSpec_Finalize(int param_1)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined1 auStack_300 [16];
  undefined4 uStack_2f0;
  float fStack_2ec;
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
  undefined1 auStack_2a0 [4];
  float fStack_29c;
  undefined4 uStack_294;
  undefined1 auStack_290 [4];
  float fStack_28c;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined1 auStack_260 [528];
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(float *)(param_1 + 0x1b4) == 0.0) {
    *(undefined4 *)(param_1 + 0x1b4) = 0x3e99999a;
  }
  if (*(float *)(param_1 + 0x2c4) == 0.0) {
    *(undefined4 *)(param_1 + 0x2c4) = 0x3e99999a;
  }
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x18c);
  fVar2 = (float)cosf(*(undefined4 *)(param_1 + 0x24c));
  *(float *)(param_1 + 0x1d4) =
       *(float *)(param_1 + 0x1d4) -
       (*(float *)(param_1 + 0x1bc) * 0.5 * fVar2 + *(float *)(param_1 + 0x1b4) + 0.0);
  fVar2 = (float)cosf(*(undefined4 *)(param_1 + 0x24c));
  *(float *)(param_1 + 0x1d8) =
       (*(float *)(param_1 + 0x1d8) + 0.0) - *(float *)(param_1 + 0x1b4) * fVar2;
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x290);
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x29c);
  fVar2 = (float)cosf(*(undefined4 *)(param_1 + 0x35c));
  *(float *)(param_1 + 0x2e4) =
       *(float *)(param_1 + 0x2e4) -
       (*(float *)(param_1 + 0x2cc) * 0.5 * fVar2 + *(float *)(param_1 + 0x2c4) + 0.0);
  fVar2 = (float)cosf(*(undefined4 *)(param_1 + 0x35c));
  *(float *)(param_1 + 0x2e8) =
       (*(float *)(param_1 + 0x2e8) + 0.0) - *(float *)(param_1 + 0x2c4) * fVar2;
  *(float *)(param_1 + 0x1b8) = 1.0 / *(float *)(param_1 + 0x1b4);
  *(float *)(param_1 + 0x2c8) = 1.0 / *(float *)(param_1 + 0x2c4);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x1dc);
  uVar3 = cosf(*(undefined4 *)(param_1 + 0x24c));
  *(undefined4 *)(param_1 + 0x3c4) = uVar3;
  uVar3 = sinf(*(undefined4 *)(param_1 + 0x24c));
  *(undefined4 *)(param_1 + 0x3c8) = uVar3;
  Quat_FromAxisAngle(*(undefined4 *)(param_1 + 0x24c),&uStack_2b0,0x362560);
  *(undefined4 *)(param_1 + 0x3d0) = uStack_2b0;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_2ac;
  *(undefined4 *)(param_1 + 0x3d8) = uStack_2a8;
  *(undefined4 *)(param_1 + 0x3dc) = uStack_2a4;
  *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x3a8) * -1.0;
  *(float *)(param_1 + 0x3b8) = *(float *)(param_1 + 0x3b8) * -1.0;
  uVar3 = cosf(-*(float *)(param_1 + 0x24c));
  *(undefined4 *)(param_1 + 0x424) = uVar3;
  uVar3 = sinf(-*(float *)(param_1 + 0x24c));
  *(undefined4 *)(param_1 + 0x428) = uVar3;
  Quat_FromAxisAngle(-*(float *)(param_1 + 0x24c),&uStack_2c0,0x362560);
  *(undefined4 *)(param_1 + 0x430) = uStack_2c0;
  *(undefined4 *)(param_1 + 0x434) = uStack_2bc;
  *(undefined4 *)(param_1 + 0x438) = uStack_2b8;
  *(undefined4 *)(param_1 + 0x43c) = uStack_2b4;
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x290);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x29c);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x290);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x29c);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x2e4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x2e4);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x2cc);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x2cc);
  uVar3 = cosf(*(undefined4 *)(param_1 + 0x35c));
  *(undefined4 *)(param_1 + 0x484) = uVar3;
  uVar3 = sinf(*(undefined4 *)(param_1 + 0x35c));
  *(undefined4 *)(param_1 + 0x488) = uVar3;
  Quat_FromAxisAngle(*(undefined4 *)(param_1 + 0x35c),&uStack_2d0,0x362560);
  *(undefined4 *)(param_1 + 0x490) = uStack_2d0;
  *(undefined4 *)(param_1 + 0x494) = uStack_2cc;
  *(undefined4 *)(param_1 + 0x498) = uStack_2c8;
  *(undefined4 *)(param_1 + 0x49c) = uStack_2c4;
  *(float *)(param_1 + 0x468) = *(float *)(param_1 + 0x468) * -1.0;
  *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x478) * -1.0;
  uVar3 = cosf(-*(float *)(param_1 + 0x35c));
  *(undefined4 *)(param_1 + 0x4e4) = uVar3;
  uVar3 = sinf(-*(float *)(param_1 + 0x35c));
  *(undefined4 *)(param_1 + 0x4e8) = uVar3;
  Quat_FromAxisAngle(-*(float *)(param_1 + 0x35c),&uStack_2e0,0x362560);
  *(undefined4 *)(param_1 + 0x4f0) = uStack_2e0;
  *(undefined4 *)(param_1 + 0x4f4) = uStack_2dc;
  *(undefined4 *)(param_1 + 0x4f8) = uStack_2d8;
  *(undefined4 *)(param_1 + 0x4fc) = uStack_2d4;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x3b0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x3b4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x3b8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x3bc);
  Vec3_AddInPlace(param_1 + 0xa0,param_1 + 0x410);
  Vec3_AddInPlace(param_1 + 0xa0,param_1 + 0x470);
  Vec3_AddInPlace(param_1 + 0xa0,param_1 + 0x4d0);
  Vec3_ScaleInPlace(0x3e800000,param_1 + 0xa0);
  Vec3_AddInPlace(param_1 + 0xa0,param_1 + 0x80);
  fVar8 = (*(float *)(param_1 + 0x1c0) + *(float *)(param_1 + 0x2d0)) * 2.0 +
          *(float *)(param_1 + 0x24) + 0.0;
  *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x50) * fVar8;
  *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x54) * fVar8;
  *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x58) * fVar8;
  fVar2 = *(float *)(param_1 + 0x290) - *(float *)(param_1 + 0xa0);
  fVar6 = *(float *)(param_1 + 0x180) - *(float *)(param_1 + 0xa0);
  fVar7 = *(float *)(param_1 + 0x180) - *(float *)(param_1 + 0x290);
  fVar4 = (float)fabsf(*(float *)(param_1 + 0x3b8) - *(float *)(param_1 + 0x418));
  fVar5 = (float)fabsf(*(float *)(param_1 + 0x478) - *(float *)(param_1 + 0x4d8));
  *(float *)(param_1 + 0x3c0) = fVar4 * 0.5;
  *(float *)(param_1 + 0x420) = -fVar4 * 0.5;
  *(float *)(param_1 + 0x480) = fVar5 * 0.5;
  *(float *)(param_1 + 0x4e0) = -fVar5 * 0.5;
  if (fVar2 == 0.0) {
    fVar2 = 0.01;
  }
  if (fVar6 == 0.0) {
    fVar6 = 0.01;
  }
  if (fVar7 == 0.0) {
    fVar7 = 0.01;
  }
  *(float *)(param_1 + 0x254) = fVar6;
  *(float *)(param_1 + 0x364) = fVar2;
  uVar3 = fabsf(fVar2 / fVar7);
  *(undefined4 *)(param_1 + 0x264) = uVar3;
  uVar3 = fabsf(fVar6 / fVar7);
  *(undefined4 *)(param_1 + 0x374) = uVar3;
  uStack_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_44 = 0x3f800000;
  *(float *)(param_1 + 600) = *(float *)(param_1 + 0x264) * fVar8 * 9.8 * 0.5;
  *(float *)(param_1 + 0x25c) = (-*(float *)(param_1 + 0x84) / fVar7) * 0.5;
  *(float *)(param_1 + 0x260) = *(float *)(param_1 + 0x280) / fVar4;
  *(float *)(param_1 + 0x268) = (-*(float *)(param_1 + 0x40) / fVar7) * 0.5;
  *(float *)(param_1 + 0x368) = *(float *)(param_1 + 0x374) * fVar8 * 9.8 * 0.5;
  *(float *)(param_1 + 0x36c) = (*(float *)(param_1 + 0x84) / fVar7) * 0.5;
  *(float *)(param_1 + 0x370) = *(float *)(param_1 + 0x390) / fVar5;
  *(float *)(param_1 + 0x378) = (*(float *)(param_1 + 0x40) / fVar7) * 0.5;
  *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0xb4) * 9.8 * *(float *)(param_1 + 0x168) * 2.0
  ;
  *(float *)(param_1 + 0x13c) =
       *(float *)(param_1 + 0xb8) * 9.8 * (1.0 - *(float *)(param_1 + 0x168)) * 2.0;
  *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0xc4) * 9.8;
  fVar6 = *(float *)(param_1 + 0x390) - *(float *)(param_1 + 0x280);
  fVar4 = *(float *)(param_1 + 0x84) -
          (*(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x280) +
          *(float *)(param_1 + 0x374) * *(float *)(param_1 + 0x390));
  fVar2 = fVar4 * (1.0 / SQRT(fVar6 * fVar6 + fVar7 * fVar7));
  *(float *)(param_1 + 0x34) = fVar6 * fVar2;
  *(float *)(param_1 + 0x38) = fVar7 * fVar2;
  uStack_4 = 0x3f800000;
  uStack_34 = 0x3f800000;
  fStack_30 = fVar7 / 2.0 - *(float *)(param_1 + 0x80);
  fStack_2c = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x280);
  uStack_8 = 0;
  fStack_1c = *(float *)(param_1 + 0x390) - *(float *)(param_1 + 0x280);
  uStack_28 = 0;
  uStack_24 = 0x3f800000;
  fStack_20 = fVar7;
  fStack_10 = fStack_30;
  fStack_c = fStack_2c;
  Vec3_Normalize(&fStack_30);
  fStack_40 = fStack_20;
  fStack_3c = fStack_1c;
  uStack_38 = uStack_18;
  uStack_34 = uStack_14;
  Vec3_Normalize(&fStack_40);
  uVar3 = Vec3_Dot(&fStack_10,&fStack_40);
  Vec3_ScaleCopy(uVar3,auStack_300,&fStack_40);
  Vec3_Sub(&uStack_2f0,auStack_300,&fStack_10);
  uStack_50 = uStack_2f0;
  fStack_4c = fStack_2ec;
  uStack_48 = uStack_2e8;
  uStack_44 = uStack_2e4;
  *(undefined4 *)(param_1 + 0x34) = uStack_2f0;
  *(float *)(param_1 + 0x38) = -fStack_2ec;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xac);
  *(float *)(param_1 + 0x3c) = fVar4;
  maybe_Car_InitMatrices(auStack_260);
  PhysBody_Reset(auStack_260);
  PhysBody_SetMassAndInertia(*(undefined4 *)(param_1 + 0x24),auStack_260);
  PhysBody_SetInertia(auStack_260,param_1 + 0x70);
  PhysBody_SetTransformFrom(auStack_260,param_1 + 0x90);
  uStack_270 = *(undefined4 *)(param_1 + 0x180);
  uStack_26c = 0;
  uStack_268 = 0;
  uStack_280 = *(undefined4 *)(param_1 + 0x290);
  uStack_27c = 0;
  uStack_278 = 0;
  PhysBody_EffectiveMass(auStack_260,param_1 + 0x270,&uStack_270);
  PhysBody_EffectiveMass(auStack_260,param_1 + 0x380,&uStack_280);
  uStack_284 = 0x3f800000;
  uStack_294 = 0x3f800000;
  uStack_308 = *(undefined4 *)(param_1 + 0x188);
  uStack_30c = *(undefined4 *)(param_1 + 0x184);
  uStack_310 = *(undefined4 *)(param_1 + 0x180);
  PhysBody_EffectiveMass(auStack_260,auStack_2a0,&uStack_310);
  uStack_318 = *(undefined4 *)(param_1 + 0x298);
  uStack_31c = *(undefined4 *)(param_1 + 0x184);
  uStack_320 = *(undefined4 *)(param_1 + 0x290);
  PhysBody_EffectiveMass(auStack_260,auStack_290,&uStack_320);
  *(float *)(param_1 + 0x1e0) = fStack_29c;
  *(float *)(param_1 + 0x2f0) = fStack_28c;
  uVar1 = 0;
  *(float *)(param_1 + 0x1e4) = 1.0 / fStack_29c;
  *(float *)(param_1 + 0x2f4) = 1.0 / fStack_28c;
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x368);
  *(float *)(param_1 + 0x1e8) = *(float *)(param_1 + 0x6e8) * 1000.0 * 9.8;
  fVar2 = SQRT(fStack_29c * 4.0 * *(float *)(param_1 + 0x1e8));
  *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x6ec) * fVar2;
  *(float *)(param_1 + 500) = *(float *)(param_1 + 0x6f0) * fVar2;
  *(float *)(param_1 + 0x204) = *(float *)(param_1 + 0x6f4) * 1000.0 * 9.8;
  *(float *)(param_1 + 0x2f8) = *(float *)(param_1 + 0x6fc) * 1000.0 * 9.8;
  fVar2 = SQRT(fStack_28c * 4.0 * *(float *)(param_1 + 0x2f8));
  *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x700) * fVar2;
  *(float *)(param_1 + 0x304) = *(float *)(param_1 + 0x704) * fVar2;
  *(float *)(param_1 + 0x314) = *(float *)(param_1 + 0x708) * 1000.0 * 9.8;
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x2f8);
  *(float *)(param_1 + 0x208) = *(float *)(param_1 + 0x280) - *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x318) = *(float *)(param_1 + 0x390) - *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 200) =
       (*(float *)(param_1 + 0x200) + *(float *)(param_1 + 0x200)) /
       (*(float *)(param_1 + 0x24) * (*(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xb8)) *
       0.25);
  *(float *)(param_1 + 0x738) = *(float *)(param_1 + 100) * *(float *)(param_1 + 0x68) * 0.8;
  *(float *)(param_1 + 0x73c) = *(float *)(param_1 + 0x60) * *(float *)(param_1 + 100) * 0.8;
  do {
    uVar1 = uVar1 + 3;
    *(float *)(param_1 + 0x6b4) = 1.0 / *(float *)(param_1 + 0x690);
    *(float *)(param_1 + 0x6b8) = 1.0 / *(float *)(param_1 + 0x694);
    *(float *)(param_1 + 0x6bc) = 1.0 / *(float *)(param_1 + 0x698);
    param_1 = param_1 + 0xc;
  } while (uVar1 < 9);
  maybe_CarSpec_dtor(auStack_260,0xffffffffffffffff);
  return;
}

