// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0016c000 - 0x00170000
#include "ghidra_types.h"

// 0x0016c0d0  size 0x214
/* speed-sensitive (2.7778 m/s, *3.6 km/h) */

void Car_UpdateSteeringAngle(int param_1)

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
  
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x13c);
  fVar6 = *(float *)(*(int *)(param_1 + 0x120) + 0x174);
  fVar3 = (float)fabsf(*(undefined4 *)(param_1 + 0x40));
  fVar3 = fVar3 - 2.777778;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  fVar5 = *(float *)(*(int *)(param_1 + 0x120) + 0x178);
  fVar5 = fVar5 * (fVar6 / (fVar3 * 3.6 + fVar5 + 0.0));
  if (0.0 <= fVar5) {
    if (fVar6 < fVar5) {
      fVar5 = fVar6;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar3 = 1.5707964;
  fVar7 = -fVar5;
  if (*(float *)(param_1 + 400) < 0.0) {
    fVar3 = fVar5;
  }
  iVar1 = PhysBody_GetTransform(*(undefined4 *)(param_1 + 0x154));
  uStack_10 = *(undefined4 *)(iVar1 + 0x10);
  uStack_c = *(undefined4 *)(iVar1 + 0x14);
  uStack_8 = *(undefined4 *)(iVar1 + 0x18);
  uVar2 = PhysBody_GetAngularVelocity(*(undefined4 *)(param_1 + 0x154));
  fVar4 = (float)Vec3_Dot(&uStack_10,uVar2);
  fVar4 = DAT_0036e75c * ((*(float *)(param_1 + 0x6c) + 0.0) - fVar4 * DAT_0036e758);
  if (fVar4 < fVar7) {
    fVar7 = fVar4;
    if (fVar4 < -fVar3) {
      fVar7 = -fVar3;
    }
  }
  else if ((fVar5 < fVar4) && (fVar5 = fVar4, fVar3 < fVar4)) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(param_1 + 0x124);
  if (0.0 <= fVar3) {
    *(float *)(param_1 + 0x13c) = fVar7 * fVar3;
  }
  else {
    *(float *)(param_1 + 0x13c) = fVar5 * -fVar3;
  }
  *(float *)(param_1 + 0x140) = fVar7;
  *(float *)(param_1 + 0x144) = fVar5;
  fVar3 = *(float *)(param_1 + 0x13c);
  if (-fVar6 <= fVar3) {
    if (fVar3 <= fVar6) {
      fVar6 = fVar3;
    }
  }
  else {
    fVar6 = -fVar6;
  }
  *(float *)(param_1 + 0x148) = (*(float *)(param_1 + 0x148) + fVar6) * 0.5;
  *(float *)(param_1 + 0xb64) =
       (*(float *)(param_1 + 0x13c) * *(float *)(param_1 + 400)) /
       *(float *)(*(int *)(param_1 + 0x120) + 0x28);
  return;
}

// 0x0016c2f0  size 0xd0
void Car_UpdateBrakeTorque(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x160) == 0) {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    *(undefined4 *)(param_1 + 0x520) = 0;
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  else {
    fVar3 = *(float *)(param_1 + 400);
    uVar2 = 0;
    iVar1 = param_1;
    do {
      if (*(char *)(iVar1 + 0x1c1) == '\0') {
        *(undefined4 *)(iVar1 + 0x2a0) = 0;
      }
      else {
        fVar5 = *(float *)(iVar1 + 0x1b8);
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
        if (0.0 < *(float *)(param_1 + 400)) {
          if (uVar2 < 2) {
            fVar4 = *(float *)(*(int *)(param_1 + 0x120) + 0x744);
          }
          else {
            fVar4 = *(float *)(*(int *)(param_1 + 0x120) + 0x748);
          }
          fVar5 = fVar5 + fVar3 * fVar3 * fVar4 * 0.5;
        }
        *(float *)(iVar1 + 0x2a0) = fVar5;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x140;
    } while (uVar2 < 4);
  }
  return;
}

// 0x0016c3c0  size 0x224
void Car_UpdateTurbo(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x120);
  fVar3 = *(float *)(iVar1 + 0x534);
  fVar4 = fVar3 * 0.71;
  if (*(char *)(param_1 + 0x8f0) == '\0') {
    *(undefined1 *)(param_1 + 0x8e8) = 0;
    *(undefined4 *)(param_1 + 0x8ec) = 0;
    *(undefined4 *)(param_1 + 0x8e4) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xacc) == '\0') {
      if (fVar4 < *(float *)(param_1 + 0x7fc)) {
        fVar2 = *(float *)(param_1 + 0x8e4) + *(float *)(param_1 + 0x870);
        *(float *)(param_1 + 0x8e4) = fVar2;
        if (2.0 < fVar2) {
          *(undefined4 *)(param_1 + 0x8e4) = 0x40000000;
        }
      }
      else {
        fVar2 = *(float *)(param_1 + 0x8e4) - *(float *)(param_1 + 0x870);
        *(float *)(param_1 + 0x8e4) = fVar2;
        if (fVar2 < 0.0) {
          *(undefined4 *)(param_1 + 0x8e4) = 0;
        }
      }
    }
    else {
      *(float *)(param_1 + 0x8e4) = *(float *)(param_1 + 0x8e4) + *(float *)(param_1 + 0x870);
      fVar2 = *(float *)(param_1 + 0x8e4) + *(float *)(param_1 + 0x870);
      *(float *)(param_1 + 0x8e4) = fVar2;
      if (2.0 < fVar2) {
        *(undefined4 *)(param_1 + 0x8e4) = 0x40000000;
      }
    }
    if (2.0 <= *(float *)(param_1 + 0x8e4)) {
      if ((fVar3 * 0.3 < *(float *)(param_1 + 0x8f8) - *(float *)(param_1 + 0x8f4)) ||
         ((*(char *)(param_1 + 0x831) != '\0' && (*(int *)(param_1 + 0x818) != 0)))) {
        if (*(char *)(param_1 + 0x8a0) == '\x01') {
          *(undefined1 *)(param_1 + 0x8e8) = 0;
          *(undefined4 *)(param_1 + 0x8ec) = 0;
        }
        else if ((*(float *)(param_1 + 0x7fc) <= fVar4) || (*(int *)(param_1 + 0x814) < 1)) {
          *(undefined1 *)(param_1 + 0x8e8) = 0;
          *(undefined4 *)(param_1 + 0x8ec) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x8e8) = 1;
          *(float *)(param_1 + 0x8ec) =
               ((*(float *)(param_1 + 0x7fc) + 0.0) - *(float *)(iVar1 + 0x534) * 0.9) / fVar4;
          *(undefined4 *)(param_1 + 0x8e4) = 0;
        }
      }
      else if ((*(float *)(param_1 + 0x8f4) < 0.1) && (*(char *)(param_1 + 0xacc) != '\0')) {
        *(undefined1 *)(param_1 + 0x8e8) = 1;
        *(float *)(param_1 + 0x8ec) = (*(float *)(iVar1 + 0x534) * 0.2) / fVar4;
        *(undefined4 *)(param_1 + 0x8e4) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x8e8) = 0;
      *(undefined4 *)(param_1 + 0x8ec) = 0;
    }
  }
  return;
}

// 0x0016c5f0  size 0x260
void Car_UpdateDownforce(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = 0.0;
  fVar4 = 0.0;
  if ((0.0 < *(float *)(param_1 + 0x130)) && (0.0 < *(float *)(*(int *)(param_1 + 0x120) + 0x138)))
  {
    fVar3 = *(float *)(*(int *)(param_1 + 0x120) + 0x1b4) *
            (*(float *)(param_1 + 0x26c) + *(float *)(param_1 + 0x3ac)) * 0.5;
    fVar3 = *(float *)(param_1 + 0x874) *
            ((fVar3 * fVar3 * 0.5) / *(float *)(param_1 + 0x44)) * 10.0;
  }
  if ((0.0 < *(float *)(param_1 + 0x130)) && (0.0 < *(float *)(*(int *)(param_1 + 0x120) + 0x13c)))
  {
    fVar4 = *(float *)(*(int *)(param_1 + 0x120) + 0x2c4) *
            (*(float *)(param_1 + 0x4ec) + *(float *)(param_1 + 0x62c)) * 0.5;
    fVar4 = *(float *)(param_1 + 0x874) *
            ((fVar4 * fVar4 * 0.5) / *(float *)(param_1 + 0x44)) * 10.0;
  }
  iVar2 = 0;
  fVar8 = *(float *)(param_1 + 0x870) * 100.0;
  iVar1 = param_1;
  do {
    fVar7 = 0.0;
    if (iVar2 < 2) {
      if (0.0 < fVar3) {
        fVar7 = *(float *)(*(int *)(param_1 + 0x120) + 0xcc) * fVar3;
        *(float *)(iVar1 + 0x270) = *(float *)(iVar1 + 0x270) + fVar7;
      }
    }
    else if (0.0 < fVar4) {
      fVar7 = *(float *)(*(int *)(param_1 + 0x120) + 0xd0) * fVar4;
      *(float *)(iVar1 + 0x270) = *(float *)(iVar1 + 0x270) + fVar7;
    }
    *(float *)(iVar1 + 0x270) = *(float *)(iVar1 + 0x270) - fVar8;
    fVar6 = *(float *)(iVar1 + 0x270);
    fVar5 = *(float *)(*(int *)(param_1 + 0x120) + 0xd4);
    if (20.0 <= fVar6) {
      if (fVar6 <= fVar5) {
        fVar5 = fVar6;
      }
    }
    else {
      fVar5 = 20.0;
    }
    *(float *)(iVar1 + 0x270) = fVar5;
    if ((0.0 < *(float *)(param_1 + 0x130)) && (fVar8 < fVar7)) {
      fVar7 = *(float *)(*(int *)(param_1 + 0x120) + 0xd8);
      if (fVar7 < *(float *)(iVar1 + 0x270)) {
        fVar7 = *(float *)(param_1 + 0xbd0) +
                ((*(float *)(iVar1 + 0x270) - fVar7) * 0.089999996) /
                *(float *)(*(int *)(param_1 + 0x120) + 0xd4);
        *(float *)(param_1 + 0xbd0) = fVar7;
        if (0.0 <= fVar7) {
          if (100.0 < fVar7) {
            fVar7 = 100.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        *(float *)(param_1 + 0xbd0) = fVar7;
      }
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x140;
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
void Car_UpdateTransmission(int param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar5 = *(int *)(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x831) = 0;
  piVar6 = (int *)(iVar5 + 0x524);
  *(undefined1 *)(param_1 + 0x832) = 0;
  fVar7 = *(float *)(param_1 + 0x828) - *(float *)(param_1 + 0x870);
  *(float *)(param_1 + 0x828) = fVar7;
  if (fVar7 < 0.0) {
    *(undefined4 *)(param_1 + 0x828) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x120) + 0x524) == 1) {
    if (*(int *)(param_1 + 0x814) < 1) {
      *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(iVar5 + 0x650);
      iVar1 = *(int *)(param_1 + 0x120);
      fVar7 = (float)fabsf(*(float *)(param_1 + 0x838) * *(float *)(iVar1 + 0x670));
      *(float *)(param_1 + 0x848) = fVar7;
      fVar7 = fVar7 * *(float *)(param_1 + 0x844) * fVar7;
      *(float *)(param_1 + 0x858) = fVar7;
      *(float *)(param_1 + 0x85c) = fVar7 + *(float *)(param_1 + 0x860);
      *(float *)(param_1 + 0x850) =
           (*(float *)(param_1 + 0x868) * 2.0 + *(float *)(param_1 + 0x85c) + 0.0) /
           *(float *)(param_1 + 0x864);
      *(float *)(param_1 + 0x84c) = *(float *)(iVar1 + 0x610) * *(float *)(iVar1 + 0x638);
    }
    else {
      fVar10 = *(float *)(iVar5 + 0x650);
      fVar8 = *(float *)(iVar5 + 0x66c);
      fVar7 = (1.0 - *(float *)(param_1 + 0x128)) * (fVar8 - fVar10) + fVar10 + 0.0;
      if (fVar7 < fVar8) {
        fVar10 = fVar8;
      }
      else if (fVar7 <= fVar10) {
        fVar10 = fVar7;
      }
      if (((1.0 < *(float *)(param_1 + 0x7e0)) &&
          (fVar9 = (*(float *)(iVar5 + 0x530) * 0.10471976 * 0.86) /
                   (*(float *)(param_1 + 0x7e0) * *(float *)(iVar5 + 0x670)), fVar9 <= fVar7)) &&
         (fVar8 <= fVar9)) {
        if (fVar9 < fVar8) {
          fVar10 = fVar8;
        }
        else {
          if (fVar9 <= fVar7) {
            fVar7 = fVar9;
          }
          fVar10 = fVar7;
        }
      }
      fVar10 = fVar10 - *(float *)(param_1 + 0x838);
      if (-0.01 <= fVar10) {
        if (0.01 < fVar10) {
          fVar10 = 0.01;
        }
      }
      else {
        fVar10 = -0.01;
      }
      *(float *)(param_1 + 0x838) = *(float *)(param_1 + 0x838) + fVar10;
      iVar1 = *(int *)(param_1 + 0x120);
      fVar7 = (float)fabsf(*(float *)(param_1 + 0x838) * *(float *)(iVar1 + 0x670));
      *(float *)(param_1 + 0x848) = fVar7;
      fVar7 = fVar7 * *(float *)(param_1 + 0x844) * fVar7;
      *(float *)(param_1 + 0x858) = fVar7;
      *(float *)(param_1 + 0x85c) = fVar7 + *(float *)(param_1 + 0x860);
      *(float *)(param_1 + 0x850) =
           (*(float *)(param_1 + 0x868) * 2.0 + *(float *)(param_1 + 0x85c) + 0.0) /
           *(float *)(param_1 + 0x864);
      *(float *)(param_1 + 0x84c) = *(float *)(iVar1 + 0x610) * *(float *)(iVar1 + 0x638);
    }
  }
  if (*(char *)(param_1 + 0x890) == '\0') {
    if (((*(float *)(param_1 + 300) == 0.0) || (*(int *)(param_1 + 0x814) != -1)) ||
       (*(float *)(param_1 + 0x820) != 1.0)) {
      if (((*(float *)(param_1 + 0x130) == 0.0) || (*(float *)(param_1 + 0x128) == 0.0)) ||
         (*(int *)(param_1 + 0x814) != 0)) {
        if (0.0 < *(float *)(param_1 + 0x824)) {
          fVar7 = *(float *)(param_1 + 0x824) - *(float *)(param_1 + 0x870);
          *(float *)(param_1 + 0x824) = fVar7;
          if (0.0 < fVar7) {
            iVar5 = *(int *)(param_1 + 0x818);
            if (iVar5 < 1) {
              iVar5 = -iVar5;
            }
            *(float *)(param_1 + 0x820) = 1.0 - fVar7 * (float)piVar6[iVar5 + 100];
            goto LAB_0016cecc;
          }
          *(undefined4 *)(param_1 + 0x824) = 0;
          *(undefined4 *)(param_1 + 0x820) = 0x3f800000;
          *(undefined1 *)(param_1 + 0x82c) = 0;
          *(undefined1 *)(param_1 + 0x82d) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x814);
        fVar10 = 0.0;
        fVar7 = 31.93;
        if (0 < iVar1) {
          iVar4 = iVar1 * 4 + param_1;
          fVar10 = *(float *)(iVar4 + 0x968);
          fVar7 = *(float *)(iVar4 + 0x964) - 5.0;
        }
        bVar3 = false;
        fVar8 = *(float *)(param_1 + 0x40) / *(float *)(param_1 + 0x864);
        if ((((param_2 == 0) && (fVar10 < fVar8)) && (0 < iVar1)) ||
           (*(char *)(param_1 + 0x834) != '\0')) {
          if (iVar1 < *piVar6) {
            bVar3 = true;
            *(undefined4 *)(param_1 + 0x828) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(param_1 + 0x814);
            *(int *)(param_1 + 0x814) = *(int *)(param_1 + 0x814) + 1;
            *(undefined4 *)(param_1 + 0x81c) = 0;
          }
        }
        else {
          fVar10 = *(float *)(param_1 + 400);
          if ((fVar10 <= 1.0) || (iVar1 != -1)) {
            if ((((param_2 == 0) && ((fVar8 < fVar7 && (1 < iVar1)))) &&
                (*(float *)(param_1 + 0x820) == 1.0)) ||
               ((*(char *)(param_1 + 0x835) != '\0' && (1 < iVar1)))) {
              if ((param_2 != 0) || (*(float *)(param_1 + 0x828) == 0.0)) {
                *(int *)(param_1 + 0x818) = iVar1;
                *(int *)(param_1 + 0x814) = *(int *)(param_1 + 0x814) + -1;
                *(undefined4 *)(param_1 + 0x81c) = 0;
                bVar3 = true;
              }
            }
            else if (((*(float *)(param_1 + 0x130) == 0.0) || (*(float *)(param_1 + 0x128) == 0.0))
                    || (iVar1 != 0)) {
              if (((iVar1 != 0) || (*(float *)(param_1 + 0x128) == 0.0)) ||
                 (*(float *)(param_1 + 0x7f4) <= *(float *)(iVar5 + 0x530) * 0.1)) {
                if ((1.0 <= fVar10) || (*(float *)(param_1 + 300) == 0.0)) {
                  if ((*(float *)(param_1 + 0x7fc) != *(float *)(iVar5 + 0x68c)) ||
                     ((7.6 <= *(float *)(param_1 + 0x8ac) || (*(float *)(param_1 + 0x128) != 0.0))))
                  {
                    if (fVar10 < -1.0) {
                      if (iVar1 == 1) {
                        *(undefined4 *)(param_1 + 0x818) = 1;
                        *(undefined4 *)(param_1 + 0x814) = 0;
                        *(undefined4 *)(param_1 + 0x81c) = 0;
                        bVar3 = true;
                      }
                    }
                  }
                  else {
                    *(int *)(param_1 + 0x818) = iVar1;
                    bVar3 = true;
                    *(undefined4 *)(param_1 + 0x814) = 0;
                    *(undefined4 *)(param_1 + 0x81c) = 0;
                  }
                }
                else if (iVar1 != -1) {
                  *(int *)(param_1 + 0x818) = iVar1;
                  bVar3 = true;
                  *(undefined4 *)(param_1 + 0x81c) = 0;
                  *(undefined4 *)(param_1 + 0x814) = 0xffffffff;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x818) = 0;
                *(undefined4 *)(param_1 + 0x814) = 1;
                *(undefined4 *)(param_1 + 0x81c) = 0;
                bVar3 = true;
                if (*(float *)(iVar5 + 0x534) * 0.2 < *(float *)(param_1 + 0x7fc)) {
                  *(undefined1 *)(param_1 + 0x82d) = 1;
                  *(undefined1 *)(param_1 + 0x82c) = 0;
                }
                else {
                  *(undefined1 *)(param_1 + 0x82d) = 0;
                  *(undefined1 *)(param_1 + 0x82c) = 1;
                }
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x81c) = 0;
              *(undefined4 *)(param_1 + 0x820) = 0;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x818) = 0xffffffff;
            bVar3 = true;
            *(undefined4 *)(param_1 + 0x814) = 0;
            *(undefined4 *)(param_1 + 0x81c) = 0;
          }
        }
        bVar2 = true;
        if (bVar3) {
          if ((*(char *)(param_1 + 0x82c) == '\0') && (*(char *)(param_1 + 0x82d) == '\0')) {
            bVar2 = false;
          }
          if (bVar2) {
            if (*(char *)(param_1 + 0x82c) != '\0') {
              *(undefined4 *)(param_1 + 0x818) = 0;
            }
            *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(iVar5 + 0x690);
          }
          else if (*(int *)(param_1 + 0x814) == 0) {
            *(undefined4 *)(param_1 + 0x820) = 0;
            *(undefined4 *)(param_1 + 0x824) = 0;
          }
          else {
            *(undefined4 *)(param_1 + 0x820) = 0;
            *(int *)(param_1 + 0x824) = piVar6[*(int *)(param_1 + 0x814) + 0x5b];
          }
          iVar5 = *(int *)(param_1 + 0x814);
          if (iVar5 == -1) {
            iVar5 = 0;
          }
          else if (iVar5 == 0) {
            iVar5 = 1;
          }
          iVar1 = *(int *)(param_1 + 0x120);
          fVar7 = (float)fabsf(*(float *)(iVar5 * 4 + iVar1 + 0x524 + 0x128) *
                               *(float *)(iVar1 + 0x670));
          *(float *)(param_1 + 0x848) = fVar7;
          iVar5 = iVar5 * 4 + iVar1 + 0x524;
          fVar7 = fVar7 * fVar7 * (*(float *)(iVar5 + 0xc4) +
                                  *(float *)(iVar1 + 0x63c) + *(float *)(iVar1 + 0x648));
          *(float *)(param_1 + 0x858) = fVar7;
          *(float *)(param_1 + 0x85c) = fVar7 + *(float *)(param_1 + 0x860);
          *(float *)(param_1 + 0x850) =
               (*(float *)(param_1 + 0x868) * 2.0 + *(float *)(param_1 + 0x85c) + 0.0) /
               *(float *)(param_1 + 0x864);
          *(float *)(param_1 + 0x84c) = *(float *)(iVar5 + 0xe8) * *(float *)(iVar1 + 0x638);
          *(undefined1 *)(param_1 + 0x831) = 1;
          *(undefined1 *)(param_1 + 0x832) = 1;
        }
        else if ((*(int *)(param_1 + 0x888) != 0) && (0 < *(int *)(param_1 + 0x814))) {
          if (*(float *)(param_1 + 0x134) <= 0.0) {
            fVar7 = *(float *)(param_1 + 0x820) + 0.05;
            *(float *)(param_1 + 0x820) = fVar7;
            if (1.0 <= fVar7) {
              *(undefined4 *)(param_1 + 0x820) = 0x3f800000;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x820) = 0;
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x820) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x814) = 0;
    *(undefined4 *)(param_1 + 0x820) = 0;
  }
LAB_0016cecc:
  *(undefined1 *)(param_1 + 0x835) = 0;
  *(undefined1 *)(param_1 + 0x834) = 0;
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
void Car_ApplyStopFriction(int param_1)

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
  
  if (*(int *)(param_1 + 0x814) == 0) {
    fVar2 = (float)fabsf(*(undefined4 *)(param_1 + 0x198));
    fVar3 = (float)fabsf(*(undefined4 *)(param_1 + 400));
    if ((fVar2 <= 0.1) || (fVar3 <= 0.06)) {
      uVar1 = PhysBody_GetAngularVelocity(*(undefined4 *)(param_1 + 0x154));
      fVar3 = (float)Vec3_Length(uVar1);
      if (0.1 <= fVar3) {
        uStack_10 = DAT_003625e0;
        uStack_c = DAT_003625e4;
        uStack_8 = DAT_003625e8;
        uStack_4 = DAT_003625ec;
        if (fVar2 < 0.2) {
          Vec3_Scale(fVar2,&uStack_40,param_1 + 0x30);
          uStack_10 = uStack_40;
          uStack_c = uStack_3c;
          uStack_8 = uStack_38;
          uStack_4 = uStack_34;
        }
        uStack_20 = DAT_003625e0;
        uStack_1c = DAT_003625e4;
        uStack_18 = DAT_003625e8;
        uStack_14 = DAT_003625ec;
        uVar1 = PhysBody_GetPositionPtr(*(undefined4 *)(param_1 + 0x154));
        Vec3_Sub(auStack_50,uVar1,&uStack_20);
        Vec3_Sub(auStack_30,auStack_50,&uStack_10);
        PhysBody_UpdateMomentum(*(undefined4 *)(param_1 + 0x154),auStack_30);
      }
    }
  }
  return;
}

// 0x0016d690  size 0x1fc
void Car_CheckUpsideDown(int param_1)

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
  
  if ((*(float *)(param_1 + 0x40) < 2.0) &&
     (fVar3 = (float)Vec3_Dot(param_1 + 0x20,param_1 + 0x70), fVar3 < -0.8)) {
    uStack_24 = 0x3f800000;
    uStack_14 = 0x3f800000;
    uVar2 = PhysBody_GetCenterOfMass(*(undefined4 *)(param_1 + 0x154));
    PhysShape_CallVirtual(afStack_40,uVar2,*(undefined4 *)(param_1 + 0xae0));
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
    Vec3_Cross(&uStack_d0,&uStack_e0,param_1 + 0x900);
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
    puVar1 = (undefined4 *)PhysBody_GetCenterOfMass(*(undefined4 *)(param_1 + 0x154));
    uStack_a0 = *puVar1;
    uStack_98 = puVar1[2];
    fStack_9c = (float)puVar1[1] - afStack_40[0];
    uStack_94 = puVar1[3];
    PhysBody_SetTransformFrom(*(undefined4 *)(param_1 + 0x154),*(int *)(param_1 + 0x120) + 0x90);
    PhysBody_WorldToLocal(*(undefined4 *)(param_1 + 0x154),&uStack_a0);
    PhysBody_SetRotation(*(undefined4 *)(param_1 + 0x154),auStack_90);
    *(undefined1 *)(param_1 + 0xb74) = 0;
  }
  return;
}

// 0x0016d890  size 0x248
void Car_UpdateTractionControl(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fStack_4;
  
  *(undefined1 *)(param_1 + 0x8a1) = 0;
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_1 + 0x130);
  if (*(char *)(param_1 + 0x892) != '\0') {
    fStack_4 = (*(float *)(param_1 + 0x2a0) + *(float *)(param_1 + 0x3e0)) * 0.5;
    Tire_SetupLoad(fStack_4,0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x214),
                   param_1 + 0xae4,*(int *)(param_1 + 0x120) + 0x180);
    uVar12 = *(undefined4 *)(param_1 + 0x6c);
    fVar5 = (float)tanf(uVar12);
    *(float *)(param_1 + 0xb08) = *(float *)(param_1 + 0xb04) * fVar5;
    *(undefined4 *)(param_1 + 0xb0c) = uVar12;
    fStack_4 = -1.0;
    fVar5 = (float)Tire_FindPeakSlipRatio(param_1 + 0xae4,&fStack_4);
    fVar5 = -fVar5;
    if (0.3 < fVar5) {
      fVar5 = 0.3;
    }
    fVar10 = *(float *)(param_1 + 0x720);
    fVar6 = (float)fabsf(*(float *)(param_1 + 0x4e8) + *(float *)(param_1 + 0x628));
    fVar6 = fVar6 * 0.5;
    if (0.3 < fVar6) {
      fVar6 = 0.3;
    }
    fVar11 = *(float *)(param_1 + 0x7a0);
    if (0.0 < *(float *)(param_1 + 0x130)) {
      fVar7 = *(float *)(param_1 + 0x86c);
      uVar4 = 0;
      iVar3 = param_1;
      do {
        if (*(char *)(iVar3 + 0x287) == '\0') {
          fVar8 = *(float *)(iVar3 + 0x298);
        }
        else {
          fVar8 = *(float *)(iVar3 + 0x294);
        }
        fVar8 = fVar8 * -fVar7;
        fVar9 = fVar5 * fVar10;
        if (1 < uVar4) {
          fVar9 = fVar6 * fVar11;
        }
        if (fVar9 < fVar8) {
          iVar2 = *(int *)(iVar3 + 0x264) + (int)((fVar8 - fVar9) * 8.0) + 1;
        }
        else {
          iVar2 = *(int *)(iVar3 + 0x264) + -1;
        }
        if (iVar2 < 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = (int)*(float *)(param_1 + 0x874);
          if (iVar2 <= (int)*(float *)(param_1 + 0x874)) {
            iVar1 = iVar2;
          }
        }
        *(int *)(iVar3 + 0x264) = iVar1;
        uVar4 = uVar4 + 1;
        *(float *)(iVar3 + 0x260) =
             *(float *)(iVar3 + 0x260) *
             (1.0 - (float)*(int *)(iVar3 + 0x264) * *(float *)(param_1 + 0x870));
        *(undefined1 *)(param_1 + 0x8a1) = 1;
        iVar3 = iVar3 + 0x140;
      } while (uVar4 < 4);
    }
    else {
      *(undefined4 *)(param_1 + 0x264) = 0;
      *(undefined4 *)(param_1 + 0x3a4) = 0;
      *(undefined4 *)(param_1 + 0x4e4) = 0;
      *(undefined4 *)(param_1 + 0x624) = 0;
    }
  }
  return;
}

// 0x0016dae0  size 0x2c
void maybe_Car_ResetWheelForces(int param_1)

{
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(*(int *)(param_1 + 0x120) + 0xbc);
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(*(int *)(param_1 + 0x120) + 0xc0);
  return;
}

// 0x0016db10  size 0x180
void Car_UpdateAbs(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(undefined1 *)(param_1 + 0x8a0) = 0;
  fVar5 = *(float *)(param_1 + 0x128);
  if (*(char *)(param_1 + 0x891) != '\0') {
    iVar1 = 0;
    if (*(float *)(*(int *)(param_1 + 0x120) + 0xe4) < 0.5) {
      iVar1 = 2;
    }
    fVar2 = (float)fabsf(*(undefined4 *)(iVar1 * 0x140 + param_1 + 0x298));
    fVar3 = (float)fabsf(*(undefined4 *)(iVar1 * 0x140 + param_1 + 0x3d8));
    if (fVar3 <= fVar2) {
      fVar4 = *(float *)(param_1 + 0x89c);
    }
    else {
      fVar4 = *(float *)(param_1 + 0x89c);
      fVar2 = fVar3;
    }
    if (fVar4 < fVar2) {
      *(int *)(param_1 + 0x898) = *(int *)(param_1 + 0x898) + 1;
      if (12.0 < (float)*(int *)(param_1 + 0x898)) {
        *(undefined4 *)(param_1 + 0x898) = 0xc;
      }
    }
    else {
      *(int *)(param_1 + 0x898) = *(int *)(param_1 + 0x898) + -1;
      if (*(int *)(param_1 + 0x898) < 0) {
        *(undefined4 *)(param_1 + 0x898) = 0;
      }
    }
    fVar2 = 1.0 - (float)*(int *)(param_1 + 0x898) * 0.083333336;
    if (0.0 <= fVar2) {
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    fVar2 = *(float *)(param_1 + 0x128) * fVar2;
    *(float *)(param_1 + 0x128) = fVar2;
    if (fVar5 != fVar2) {
      *(undefined1 *)(param_1 + 0x8a0) = 1;
    }
  }
  return;
}

// 0x0016dc90  size 0x118
void Car_SetHandbrake(float param_1,int param_2,undefined1 param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fStack_4;
  
  fVar1 = 0.0;
  if ((0.0 <= param_1) && (fVar1 = 1.0, param_1 <= 1.0)) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x894) = fVar1;
  fStack_4 = *(float *)(param_2 + 0x44) * 0.25;
  Tire_SetupLoad(fStack_4,0x3f800000,0x3f800000,param_2 + 0xae4,*(int *)(param_2 + 0x120) + 0x290);
  fVar1 = (float)tanf(0);
  *(float *)(param_2 + 0xb08) = *(float *)(param_2 + 0xb04) * fVar1;
  *(undefined4 *)(param_2 + 0xb0c) = 0;
  uVar2 = Tire_FindPeakSlipRatio(param_2 + 0xae4,&fStack_4);
  *(undefined4 *)(param_2 + 0xb6c) = uVar2;
  fVar1 = 1.0 - param_1 * 0.9;
  *(undefined1 *)(param_2 + 0x891) = param_3;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0x89c) = fVar1;
  return;
}

// 0x0016ddb0  size 0x4f8
void Car_UpdateBodyDynamics(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  undefined4 uStack_74;
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
  
  *(float *)(param_1 + 0x8ac) = *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x160) == 0) {
    if ((ulong)*(byte *)(param_1 + 0xb74) != 0xffffffffffffffff) {
      *(undefined1 *)(param_1 + 0xb74) = 1;
      PhysBody_SetTransformFrom(*(undefined4 *)(param_1 + 0x154),*(int *)(param_1 + 0x120) + 0xa0);
    }
  }
  else if (*(char *)(param_1 + 0xb74) != '\0') {
    *(undefined1 *)(param_1 + 0xb74) = 0;
    PhysBody_SetTransformFrom(*(undefined4 *)(param_1 + 0x154),*(int *)(param_1 + 0x120) + 0x90);
  }
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = uStack_74;
  fVar11 = (float)Vec3_Dot(param_1 + 0x10,param_1 + 0x80);
  fVar12 = (float)Vec3_Dot(param_1 + 0x30,param_1 + 0x90);
  uVar10 = 0;
  iVar7 = param_1;
  iVar8 = param_1;
  iVar9 = param_1;
  do {
    iVar1 = *(int *)(iVar9 + 0x7c0);
    Mat33_MulVec3Transposed(&uStack_10,param_1 + 0xa0,iVar8 + 0x910);
    Vec3_AddInPlace(param_1 + 0x180,&uStack_10);
    Vec3_ScaleCopy(*(float *)(iVar1 + 0xd4) * fVar11,auStack_90,param_1 + 0x80);
    uVar3 = PhysBody_GetLocalCenter(*(undefined4 *)(param_1 + 0x154));
    Vec3_Add(auStack_20,auStack_90,uVar3);
    Vec3_ScaleCopy(*(float *)(iVar7 + 0x1cc) * fVar12,auStack_a0,param_1 + 0x90);
    Vec3_AddInPlace(auStack_20,auStack_a0);
    Vec3_ScaleCopy(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x84),auStack_b0,param_1 + 0x70);
    Vec3_SubInPlace(auStack_20,auStack_b0);
    uStack_24 = 0x3f800000;
    if ((1 < uVar10) || (*(float *)(iVar7 + 0x294) * *(float *)(param_1 + 0x86c) < 0.0)) {
      Vec3_ScaleCopy(uStack_10,auStack_170,param_1 + 0x80);
      Vec3_ScaleCopy(uStack_c,auStack_180,param_1 + 0x70);
      Vec3_Add(auStack_160,auStack_170,auStack_180);
      Vec3_ScaleCopy(uStack_8,auStack_190,param_1 + 0x90);
      Vec3_Add(&uStack_150,auStack_160,auStack_190);
      uStack_30 = uStack_150;
      uStack_2c = uStack_14c;
      uStack_28 = uStack_148;
      uStack_24 = uStack_144;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x13c);
      fVar13 = (float)cosf(uVar4);
      uVar4 = sinf(uVar4);
      Vec3_Scale(uVar4,auStack_c0,param_1 + 0x80);
      Vec3_Scale(-fVar13,auStack_d0,param_1 + 0x90);
      Vec3_Add(auStack_40,auStack_c0,auStack_d0);
      Vec3_Scale(fVar13,auStack_e0,param_1 + 0x80);
      Vec3_Scale(uVar4,auStack_f0,param_1 + 0x90);
      Vec3_Add(auStack_50,auStack_e0,auStack_f0);
      Vec3_ScaleCopy(uStack_10,auStack_120,auStack_40);
      Vec3_ScaleCopy(uStack_c,auStack_130,param_1 + 0x70);
      Vec3_Add(auStack_110,auStack_120,auStack_130);
      Vec3_ScaleCopy(uStack_8,auStack_140,auStack_50);
      Vec3_Add(&uStack_100,auStack_110,auStack_140);
      uStack_30 = uStack_100;
      uStack_2c = uStack_fc;
      uStack_28 = uStack_f8;
      uStack_24 = uStack_f4;
    }
    PhysBody_AddForceAtPoint(*(undefined4 *)(param_1 + 0x154),&uStack_30,auStack_20);
    Mat33_MulVec3B(auStack_60,param_1 + 0xa0,&uStack_30);
    fVar13 = (float)Vec3_Dot(param_1 + 0x20,0x362570);
    if ((fVar13 < 0.7071) && (*(float *)(iVar7 + 0x2a0) == 0.0)) {
      uStack_70 = DAT_003625e0;
      uStack_6c = DAT_003625e4;
      uStack_68 = DAT_003625e8;
      uStack_64 = DAT_003625ec;
      uVar3 = PhysBody_GetAngularVelocity(*(undefined4 *)(param_1 + 0x154));
      Vec3_Cross(auStack_1a0,uVar3,param_1 + 0x20);
      fVar14 = (float)Vec3_Dot(auStack_1a0,0x362570);
      if (fVar14 < fVar13) {
        PhysBody_ClampAngularVelocity(*(undefined4 *)(param_1 + 0x154),&uStack_70);
      }
    }
    uVar10 = uVar10 + 1;
    iVar9 = iVar9 + 4;
    iVar8 = iVar8 + 0x10;
    iVar7 = iVar7 + 0x140;
  } while (uVar10 < 4);
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x188) * *(float *)(param_1 + 0xad8);
  *(float *)(param_1 + 100) = *(float *)(param_1 + 0x180) * *(float *)(param_1 + 0xadc);
  PhysBody_AddTorque(*(undefined4 *)(param_1 + 0x154),param_1 + 0x950);
  puVar2 = (undefined4 *)PhysBody_GetTorque(*(undefined4 *)(param_1 + 0x154));
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *(undefined4 *)(param_1 + 0x8c0) = *puVar2;
  *(undefined4 *)(param_1 + 0x8c4) = uVar4;
  *(undefined4 *)(param_1 + 0x8c8) = uVar5;
  *(undefined4 *)(param_1 + 0x8cc) = uVar6;
  if (*(char *)(param_1 + 0xab0) != '\0') {
    afStack_1b0[2] = -*(float *)(param_1 + 0x8c8);
    afStack_1b0[0] = -*(float *)(param_1 + 0x8c0);
    afStack_1b0[1] = 0.0;
    PhysBody_AddTorque(*(undefined4 *)(param_1 + 0x154),afStack_1b0);
    *(undefined4 *)(param_1 + 0x8c0) = 0;
    *(undefined4 *)(param_1 + 0x8c8) = 0;
  }
  Vec3_Scale(0x3f000000,auStack_1c0,param_1 + 0x8c0);
  Vec3_AddInPlace(param_1 + 0x170,auStack_1c0);
  Vec3_ScaleInPlace(0x3f2aaa9f,param_1 + 0x170);
  puVar2 = (undefined4 *)PhysBody_GetForce(*(undefined4 *)(param_1 + 0x154));
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *(undefined4 *)(param_1 + 0x8d0) = *puVar2;
  *(undefined4 *)(param_1 + 0x8d4) = uVar4;
  *(undefined4 *)(param_1 + 0x8d8) = uVar5;
  *(undefined4 *)(param_1 + 0x8dc) = uVar6;
  PhysBody_IntegrateFull(*(undefined4 *)(param_1 + 0x870),*(undefined4 *)(param_1 + 0x154));
  return;
}

// 0x0016e2b0  size 0x1a8
void Car_CheckStuck(int param_1)

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
  
  if (*(char *)(param_1 + 0x890) == '\0') {
    if (*(int *)(param_1 + 0x158) == 0) {
      return;
    }
    if (((1.0 <= *(float *)(param_1 + 0x40)) || (*(float *)(param_1 + 0x128) != 0.0)) ||
       (*(float *)(param_1 + 300) != 0.0)) {
      *(undefined1 *)(param_1 + 0xab0) = 0;
    }
    else {
      lVar1 = PhysBody_FindShapeWithFlags(*(int *)(param_1 + 0x158),0x3000000);
      if ((lVar1 != 0) && (fVar4 = (float)PhysWorld_GetFirstBody(lVar1), fVar4 < 70.0)) {
        iVar3 = PhysBody_GetOrientation(*(undefined4 *)(param_1 + 0x154));
        uStack_30 = *(undefined4 *)(iVar3 + 0x30);
        uStack_2c = *(undefined4 *)(iVar3 + 0x34);
        uStack_28 = *(undefined4 *)(iVar3 + 0x38);
        uVar2 = PhysWorld_GetBounds(lVar1);
        Vec3_Sub(auStack_10,uVar2,&uStack_30);
        uStack_c = 0;
        fVar4 = (float)Vec3_Dot(auStack_10,param_1 + 0x70);
        *(bool *)(param_1 + 0xab0) = 0.0 <= fVar4;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xab0) = 1;
  }
  if (*(char *)(param_1 + 0xab0) != '\0') {
    *(undefined4 *)(param_1 + 0x28c) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    *(undefined4 *)(param_1 + 0x3cc) = 0;
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    *(undefined4 *)(param_1 + 0x50c) = 0;
    *(undefined4 *)(param_1 + 0x530) = 0;
    *(undefined4 *)(param_1 + 0x64c) = 0;
    *(undefined4 *)(param_1 + 0x670) = 0;
    iVar3 = PhysBody_GetPositionPtr(*(undefined4 *)(param_1 + 0x154));
    uStack_1c = *(undefined4 *)(iVar3 + 4);
    uStack_14 = *(undefined4 *)(iVar3 + 0xc);
    uStack_18 = 0;
    uStack_20 = 0;
    PhysBody_UpdateMomentum(*(undefined4 *)(param_1 + 0x154),&uStack_20);
  }
  return;
}

// 0x0016e460  size 0x3d8
void Car_UpdateWheelTransforms(int param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
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
  undefined4 uStack_f0;
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
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 auStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  iVar3 = param_1;
  do {
    uStack_24 = 0x3f800000;
    uStack_14 = 0x3f800000;
    PhysShape_CallVirtual(auStack_40,iVar3 + 0x1f0,*(undefined4 *)(iVar3 + 0x1c4));
    fVar5 = 0.0;
    *(undefined4 *)(iVar3 + 0x200) = auStack_40[0];
    *(undefined4 *)(iVar3 + 0x210) = uStack_30;
    *(undefined4 *)(iVar3 + 0x214) = uStack_2c;
    *(undefined4 *)(iVar3 + 0x218) = uStack_28;
    *(undefined4 *)(iVar3 + 0x21c) = uStack_24;
    *(undefined4 *)(iVar3 + 0x1c4) = uStack_c;
    *(char *)(iVar3 + 0x1c8) = (char)uStack_10;
    if (*(char *)(param_1 + 0x9a8) != '\0') {
      if (uVar4 < 2) {
        pfVar1 = *(float **)(param_1 + (uint)*(byte *)(iVar3 + 0x1c8) * 4 + 0x9ac);
      }
      else {
        pfVar1 = *(float **)(param_1 + (uint)*(byte *)(iVar3 + 0x1c8) * 4 + 0xa2c);
      }
      if (pfVar1 != (float *)0x0) {
        fVar5 = *pfVar1;
      }
    }
    *(float *)(iVar3 + 0x200) = *(float *)(iVar3 + 0x200) + fVar5;
    *(undefined4 *)(iVar3 + 0x240) = *(undefined4 *)(iVar3 + 0x1f0);
    *(undefined4 *)(iVar3 + 0x244) = *(undefined4 *)(iVar3 + 500);
    *(undefined4 *)(iVar3 + 0x248) = *(undefined4 *)(iVar3 + 0x1f8);
    *(undefined4 *)(iVar3 + 0x24c) = *(undefined4 *)(iVar3 + 0x1fc);
    *(float *)(iVar3 + 0x244) = *(float *)(iVar3 + 0x244) - *(float *)(iVar3 + 0x200);
    Vec3_AddInPlace(param_1 + 0x70,iVar3 + 0x210);
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x140;
  } while (uVar4 < 4);
  Vec3_Normalize(param_1 + 0x70);
  Vec3_Add(auStack_80,param_1 + 0x240,param_1 + 0x380);
  Vec3_Scale(0x3f000000,&uStack_70,auStack_80);
  *(undefined4 *)(param_1 + 0x6c0) = uStack_70;
  *(undefined4 *)(param_1 + 0x6c4) = uStack_6c;
  *(undefined4 *)(param_1 + 0x6c8) = uStack_68;
  *(undefined4 *)(param_1 + 0x6cc) = uStack_64;
  Vec3_Add(auStack_a0,param_1 + 0x4c0,param_1 + 0x600);
  Vec3_Scale(0x3f000000,&uStack_90,auStack_a0);
  *(undefined4 *)(param_1 + 0x740) = uStack_90;
  *(undefined4 *)(param_1 + 0x744) = uStack_8c;
  *(undefined4 *)(param_1 + 0x748) = uStack_88;
  *(undefined4 *)(param_1 + 0x74c) = uStack_84;
  Vec3_Cross(&uStack_b0,param_1 + 0x70,param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x80) = uStack_b0;
  *(undefined4 *)(param_1 + 0x84) = uStack_ac;
  *(undefined4 *)(param_1 + 0x88) = uStack_a8;
  *(undefined4 *)(param_1 + 0x8c) = uStack_a4;
  Vec3_Normalize(param_1 + 0x80);
  Vec3_Cross(&uStack_c0,param_1 + 0x80,param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x90) = uStack_c0;
  *(undefined4 *)(param_1 + 0x94) = uStack_bc;
  *(undefined4 *)(param_1 + 0x98) = uStack_b8;
  *(undefined4 *)(param_1 + 0x9c) = uStack_b4;
  Vec3_Normalize(param_1 + 0x90);
  uStack_d0 = *(undefined4 *)(param_1 + 0x80);
  uStack_cc = *(undefined4 *)(param_1 + 0x84);
  uStack_c4 = 0x3f800000;
  uStack_c8 = *(undefined4 *)(param_1 + 0x88);
  uStack_d4 = 0x3f800000;
  uStack_e4 = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = uStack_d0;
  *(undefined4 *)(param_1 + 0xa4) = uStack_cc;
  *(undefined4 *)(param_1 + 0xa8) = uStack_c8;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  uStack_e0 = *(undefined4 *)(param_1 + 0x70);
  uStack_dc = *(undefined4 *)(param_1 + 0x74);
  uStack_d8 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xb0) = uStack_e0;
  *(undefined4 *)(param_1 + 0xb4) = uStack_dc;
  *(undefined4 *)(param_1 + 0xb8) = uStack_d8;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  uStack_f0 = *(undefined4 *)(param_1 + 0x90);
  uStack_ec = *(undefined4 *)(param_1 + 0x94);
  uStack_e8 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xc0) = uStack_f0;
  *(undefined4 *)(param_1 + 0xc4) = uStack_ec;
  *(undefined4 *)(param_1 + 200) = uStack_e8;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  pfVar1 = (float *)PhysBody_GetPositionPtr(*(undefined4 *)(param_1 + 0x154));
  fStack_50 = *pfVar1;
  fStack_4c = pfVar1[1];
  fStack_48 = pfVar1[2];
  fStack_44 = pfVar1[3];
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (0.01 < fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c) {
    Vec3_ScaleInPlace(0x447a0000,&fStack_50);
    uVar8 = Vec3_Dot(&fStack_50,param_1 + 0x80);
    fVar6 = (float)Vec3_Dot(&fStack_50,param_1 + 0x90);
    fVar5 = (float)fabsf(uVar8);
    fVar7 = (float)fabsf(fVar6);
    if (fVar7 < fVar5 * 0.3) {
      fVar6 = fVar6 / fVar5;
    }
    else {
      fVar6 = (float)atan2f(fVar6,fVar5);
    }
    *(float *)(param_1 + 0x6c) = -fVar6;
  }
  uVar8 = Vec3_Dot(param_1 + 0x50,param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xb60) = uVar8;
  PhysBody_PointVelocityWorld(&uStack_100,*(undefined4 *)(param_1 + 0x154),param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x700) = uStack_100;
  *(undefined4 *)(param_1 + 0x704) = uStack_fc;
  *(undefined4 *)(param_1 + 0x708) = uStack_f8;
  *(undefined4 *)(param_1 + 0x70c) = uStack_f4;
  PhysBody_PointVelocityWorld(&uStack_110,*(undefined4 *)(param_1 + 0x154),param_1 + 0x730);
  *(undefined4 *)(param_1 + 0x780) = uStack_110;
  *(undefined4 *)(param_1 + 0x784) = uStack_10c;
  *(undefined4 *)(param_1 + 0x788) = uStack_108;
  *(undefined4 *)(param_1 + 0x78c) = uStack_104;
  uVar2 = PhysBody_GetPositionPtr(*(undefined4 *)(param_1 + 0x154));
  Mat33_MulVec3Transposed(&uStack_120,param_1 + 0xa0,uVar2);
  *(undefined4 *)(param_1 + 400) = uStack_120;
  *(undefined4 *)(param_1 + 0x194) = uStack_11c;
  *(undefined4 *)(param_1 + 0x198) = uStack_118;
  *(undefined4 *)(param_1 + 0x19c) = uStack_114;
  Vec3_Cross(auStack_60,param_1 + 0x70,param_1 + 0x20);
  uVar8 = Vec3_Dot(auStack_60,param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  return;
}

// 0x0016e840  size 0x29c
void Car_SyncFromRigidBody(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 auStack_80 [7];
  undefined4 uStack_64;
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
  
  puVar1 = (undefined4 *)PhysBody_GetTransform(*(undefined4 *)(param_1 + 0x154));
  uStack_90 = *puVar1;
  uStack_8c = puVar1[1];
  uStack_88 = puVar1[2];
  *(undefined4 *)(param_1 + 0x10) = uStack_90;
  *(undefined4 *)(param_1 + 0x14) = uStack_8c;
  *(undefined4 *)(param_1 + 0x18) = uStack_88;
  *(undefined4 *)(param_1 + 0x1c) = uStack_84;
  iVar2 = PhysBody_GetTransform(*(undefined4 *)(param_1 + 0x154));
  uStack_a0 = *(undefined4 *)(iVar2 + 0x10);
  uStack_9c = *(undefined4 *)(iVar2 + 0x14);
  uStack_98 = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = uStack_a0;
  *(undefined4 *)(param_1 + 0x24) = uStack_9c;
  *(undefined4 *)(param_1 + 0x28) = uStack_98;
  *(undefined4 *)(param_1 + 0x2c) = uStack_94;
  iVar2 = PhysBody_GetTransform(*(undefined4 *)(param_1 + 0x154));
  uStack_b0 = *(undefined4 *)(iVar2 + 0x20);
  uStack_ac = *(undefined4 *)(iVar2 + 0x24);
  uStack_a8 = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = uStack_b0;
  *(undefined4 *)(param_1 + 0x34) = uStack_ac;
  *(undefined4 *)(param_1 + 0x38) = uStack_a8;
  *(undefined4 *)(param_1 + 0x3c) = uStack_a4;
  puVar1 = (undefined4 *)PhysBody_GetLinearVelocity(*(undefined4 *)(param_1 + 0x154));
  *(undefined4 *)(param_1 + 0x40) = *puVar1;
  puVar1 = (undefined4 *)PhysBody_GetAngularVelocity(*(undefined4 *)(param_1 + 0x154));
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(param_1 + 0x50) = *puVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  puVar1 = (undefined4 *)PhysBody_GetTransform(*(undefined4 *)(param_1 + 0x154));
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  auStack_80[3] = 0x3f800000;
  uStack_64 = 0x3f800000;
  uStack_54 = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe0) = *puVar1;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = uVar4;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  uVar3 = puVar1[5];
  uVar4 = puVar1[6];
  uVar5 = puVar1[7];
  *(undefined4 *)(param_1 + 0xf0) = puVar1[4];
  *(undefined4 *)(param_1 + 0xf4) = uVar3;
  *(undefined4 *)(param_1 + 0xf8) = uVar4;
  *(undefined4 *)(param_1 + 0xfc) = uVar5;
  uVar3 = puVar1[9];
  uVar4 = puVar1[10];
  uVar5 = puVar1[0xb];
  *(undefined4 *)(param_1 + 0x100) = puVar1[8];
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  *(undefined4 *)(param_1 + 0x108) = uVar4;
  *(undefined4 *)(param_1 + 0x10c) = uVar5;
  uVar3 = puVar1[0xd];
  uVar4 = puVar1[0xe];
  uVar5 = puVar1[0xf];
  *(undefined4 *)(param_1 + 0x110) = puVar1[0xc];
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  *(undefined4 *)(param_1 + 0x118) = uVar4;
  *(undefined4 *)(param_1 + 0x11c) = uVar5;
  uStack_34 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_4 = 0x3f800000;
  uStack_44 = 0x3f800000;
  fVar8 = (float)cosf(*(undefined4 *)(param_1 + 0x68));
  iVar2 = *(int *)(param_1 + 0x120);
  uVar6 = 0;
  uStack_40 = *(undefined4 *)(iVar2 + 0x3b0);
  uStack_3c = *(undefined4 *)(iVar2 + 0x3b4);
  uStack_38 = *(undefined4 *)(iVar2 + 0x3b8);
  uStack_34 = *(undefined4 *)(iVar2 + 0x3bc);
  *(float *)(param_1 + 0x1cc) =
       *(float *)(*(int *)(param_1 + 0x7c0) + 0x100) * fVar8 +
       *(float *)(*(int *)(param_1 + 0x120) + 0x3c0) + 0.0;
  iVar2 = *(int *)(param_1 + 0x120);
  uStack_30 = *(undefined4 *)(iVar2 + 0x410);
  uStack_2c = *(undefined4 *)(iVar2 + 0x414);
  uStack_28 = *(undefined4 *)(iVar2 + 0x418);
  uStack_24 = *(undefined4 *)(iVar2 + 0x41c);
  *(float *)(param_1 + 0x30c) =
       *(float *)(*(int *)(param_1 + 0x7c4) + 0x100) * fVar8 +
       *(float *)(*(int *)(param_1 + 0x120) + 0x420) + 0.0;
  iVar2 = *(int *)(param_1 + 0x120);
  uStack_20 = *(undefined4 *)(iVar2 + 0x470);
  uStack_1c = *(undefined4 *)(iVar2 + 0x474);
  uStack_18 = *(undefined4 *)(iVar2 + 0x478);
  uStack_14 = *(undefined4 *)(iVar2 + 0x47c);
  *(float *)(param_1 + 0x44c) =
       *(float *)(*(int *)(param_1 + 0x7c8) + 0x100) * fVar8 +
       *(float *)(*(int *)(param_1 + 0x120) + 0x480) + 0.0;
  iVar2 = *(int *)(param_1 + 0x120);
  uStack_10 = *(undefined4 *)(iVar2 + 0x4d0);
  uStack_c = *(undefined4 *)(iVar2 + 0x4d4);
  uStack_8 = *(undefined4 *)(iVar2 + 0x4d8);
  uStack_4 = *(undefined4 *)(iVar2 + 0x4dc);
  *(float *)(param_1 + 0x58c) =
       *(float *)(*(int *)(param_1 + 0x7cc) + 0x100) * fVar8 +
       *(float *)(*(int *)(param_1 + 0x120) + 0x4e0) + 0.0;
  puVar1 = auStack_80;
  puVar7 = &uStack_40;
  do {
    Mat33_MulVec3(&uStack_100,param_1 + 0xe0,puVar7);
    uVar6 = uVar6 + 1;
    *puVar1 = uStack_100;
    puVar1[1] = uStack_fc;
    puVar1[2] = uStack_f8;
    puVar1[3] = uStack_f4;
    puVar1 = puVar1 + 4;
    puVar7 = puVar7 + 4;
  } while (uVar6 < 4);
  *(undefined4 *)(param_1 + 0x1f0) = auStack_80[0];
  *(undefined4 *)(param_1 + 500) = auStack_80[1];
  *(undefined4 *)(param_1 + 0x1f8) = auStack_80[2];
  *(undefined4 *)(param_1 + 0x1fc) = auStack_80[3];
  *(undefined4 *)(param_1 + 0x330) = auStack_80[4];
  *(undefined4 *)(param_1 + 0x334) = auStack_80[5];
  *(undefined4 *)(param_1 + 0x338) = auStack_80[6];
  *(undefined4 *)(param_1 + 0x33c) = uStack_64;
  *(undefined4 *)(param_1 + 0x470) = uStack_60;
  *(undefined4 *)(param_1 + 0x474) = uStack_5c;
  *(undefined4 *)(param_1 + 0x478) = uStack_58;
  *(undefined4 *)(param_1 + 0x47c) = uStack_54;
  *(undefined4 *)(param_1 + 0x5b0) = uStack_50;
  *(undefined4 *)(param_1 + 0x5b4) = uStack_4c;
  *(undefined4 *)(param_1 + 0x5b8) = uStack_48;
  *(undefined4 *)(param_1 + 0x5bc) = uStack_44;
  *(float *)(param_1 + 0x718) = *(float *)(param_1 + 0x1cc) - *(float *)(param_1 + 0x30c);
  *(float *)(param_1 + 0x798) = *(float *)(param_1 + 0x44c) - *(float *)(param_1 + 0x58c);
  Vec3_Add(auStack_d0,param_1 + 0x1f0,param_1 + 0x330);
  Vec3_Scale(0x3f000000,&uStack_c0,auStack_d0);
  *(undefined4 *)(param_1 + 0x6b0) = uStack_c0;
  *(undefined4 *)(param_1 + 0x6b4) = uStack_bc;
  *(undefined4 *)(param_1 + 0x6b8) = uStack_b8;
  *(undefined4 *)(param_1 + 0x6bc) = uStack_b4;
  Vec3_Add(auStack_f0,param_1 + 0x470,param_1 + 0x5b0);
  Vec3_Scale(0x3f000000,&uStack_e0,auStack_f0);
  *(undefined4 *)(param_1 + 0x730) = uStack_e0;
  *(undefined4 *)(param_1 + 0x734) = uStack_dc;
  *(undefined4 *)(param_1 + 0x738) = uStack_d8;
  *(undefined4 *)(param_1 + 0x73c) = uStack_d4;
  return;
}

// 0x0016eae0  size 0x14
void maybe_Car_ResetShift(int param_1)

{
  *(undefined1 *)(param_1 + 0x8b0) = 0;
  *(undefined1 *)(param_1 + 0x8b1) = 0;
  *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_1 + 0x8f4);
  return;
}

// 0x0016eb00  size 0x1cc
/* per-step driver */

void Car_Simulate(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  (**(code **)(*piVar2 + 0x3c))();
  *(undefined1 *)(piVar2 + 0x22f) = 1;
  Car_SyncFromRigidBody(param_1);
  Car_UpdateWheelTransforms(param_1);
  Car_UpdateSuspension(param_1);
  (**(code **)(*piVar2 + 0x50))(param_1);
  (**(code **)(*piVar2 + 0x4c))(param_1);
  if (*(int *)(piVar2[0x48] + 0x524) == 1) {
    Car_UpdateTransmission(param_1,0);
  }
  else {
    if (*(char *)((int)piVar2 + 0x811) != '\0') {
      Car_UpdateTransmission(param_1,0);
      iVar1 = piVar2[0x205];
      goto LAB_0016eb9c;
    }
    Car_UpdateTransmission(param_1);
  }
  iVar1 = piVar2[0x205];
LAB_0016eb9c:
  if (iVar1 == -1) {
    piVar2[0x21b] = -0x40800000;
  }
  else {
    piVar2[0x21b] = 0x3f800000;
  }
  (**(code **)(*piVar2 + 0x54))(param_1);
  Car_UpdateSteeringGeometry(param_1);
  Car_UpdateSlipAngles(param_1);
  Car_ApplyRollingResistance(param_1);
  Car_UpdateBrakeTorque(param_1);
  Car_UpdateWheelSpin(param_1);
  Car_UpdateLsd(param_1);
  Car_UpdateClutchAndTorque(param_1);
  Car_UpdateGearRatio(param_1);
  Car_UpdateWheelAngularVel(param_1);
  Car_ApplyTireForces(param_1);
  Car_CheckStuck(param_1);
  Car_UpdateParkingBrake(param_1);
  Car_ApplySuspensionForces(param_1);
  (**(code **)(*piVar2 + 0x44))(param_1);
  Car_UpdateBodyDynamics(param_1);
  Car_SyncFromRigidBody(param_1);
  Car_UpdateWheelTransforms(param_1);
  Car_UpdateSteeringGeometry(param_1);
  Car_UpdateEngine(param_1);
  Car_UpdateDownforce(param_1);
  Car_UpdateTurbo(param_1);
  Car_UpdateWheelContacts(param_1);
  Car_UpdateCamber(param_1);
  Car_ApplyStopFriction(param_1);
  Car_CheckUpsideDown(param_1);
  (**(code **)(*piVar2 + 0x40))(param_1);
  return;
}

// 0x0016ecd0  size 0xc0
void maybe_Car_SetRpmLimit(float param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(float *)(param_2 + 0x870) = param_1;
  param_1 = param_1 * 600.0;
  *(float *)(param_2 + 0x874) = 1.0 / *(float *)(param_2 + 0x870);
  if (param_1 < 2.1474836e+09) {
    *(int *)(param_2 + 0x880) = (int)param_1;
  }
  else {
    *(uint *)(param_2 + 0x880) = (int)(param_1 - 2.1474836e+09) | 0x80000000;
  }
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  *(undefined4 *)(param_2 + 0x910) = DAT_003625e0;
  *(undefined4 *)(param_2 + 0x914) = uVar1;
  *(undefined4 *)(param_2 + 0x918) = uVar2;
  *(undefined4 *)(param_2 + 0x91c) = uVar3;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  *(undefined4 *)(param_2 + 0x920) = DAT_003625e0;
  *(undefined4 *)(param_2 + 0x924) = uVar1;
  *(undefined4 *)(param_2 + 0x928) = uVar2;
  *(undefined4 *)(param_2 + 0x92c) = uVar3;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  *(undefined4 *)(param_2 + 0x930) = DAT_003625e0;
  *(undefined4 *)(param_2 + 0x934) = uVar1;
  *(undefined4 *)(param_2 + 0x938) = uVar2;
  *(undefined4 *)(param_2 + 0x93c) = uVar3;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  *(undefined4 *)(param_2 + 0x940) = DAT_003625e0;
  *(undefined4 *)(param_2 + 0x944) = uVar1;
  *(undefined4 *)(param_2 + 0x948) = uVar2;
  *(undefined4 *)(param_2 + 0x94c) = uVar3;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  *(undefined4 *)(param_2 + 0x950) = DAT_003625e0;
  *(undefined4 *)(param_2 + 0x954) = uVar1;
  *(undefined4 *)(param_2 + 0x958) = uVar2;
  *(undefined4 *)(param_2 + 0x95c) = uVar3;
  *(undefined4 *)(param_2 + 0x8b4) = 0;
  *(undefined4 *)(param_2 + 0x8b8) = 0;
  *(int *)(param_2 + 0xb8c) = *(int *)(param_2 + 0xb8c) + 1;
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
void Car_Clear(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset(param_1 + 0x1b0,0,0x500);
  memset(param_1 + 0x6b0,0,0x80);
  memset(param_1 + 0x730,0,0x80);
  memset(param_1 + 2000,0,0x10);
  memset(param_1 + 0x7ec,0,0x80);
  *(undefined1 *)(param_1 + 0x830) = 0;
  *(undefined1 *)(param_1 + 0x811) = 1;
  *(undefined4 *)(param_1 + 0x870) = 0x3c888889;
  *(float *)(param_1 + 0x874) = 1.0 / *(float *)(param_1 + 0x870);
  *(undefined4 *)(param_1 + 0x878) = 0x42700000;
  fVar6 = *(float *)(param_1 + 0x870) * 600.0;
  if (fVar6 < 2.1474836e+09) {
    *(int *)(param_1 + 0x880) = (int)fVar6;
  }
  else {
    *(uint *)(param_1 + 0x880) = (int)(fVar6 - 2.1474836e+09) | 0x80000000;
  }
  *(float *)(param_1 + 0x87c) = *(float *)(param_1 + 0x870) / (float)*(uint *)(param_1 + 0x880);
  *(undefined4 *)(param_1 + 0x884) = 2;
  *(undefined1 *)(param_1 + 0x88f) = 0;
  *(undefined1 *)(param_1 + 0x890) = 0;
  *(undefined1 *)(param_1 + 0x891) = 0;
  *(undefined1 *)(param_1 + 0x892) = 0;
  *(undefined1 *)(param_1 + 0x893) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
  *(undefined1 *)(param_1 + 0x8a0) = 0;
  *(undefined1 *)(param_1 + 0x8a1) = 0;
  *(undefined1 *)(param_1 + 0x88d) = 0;
  *(undefined1 *)(param_1 + 0x88e) = 0;
  *(undefined4 *)(param_1 + 0x8a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8a8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8ac) = 0;
  *(undefined1 *)(param_1 + 0x8b0) = 0;
  *(undefined1 *)(param_1 + 0x8b1) = 0;
  *(undefined4 *)(param_1 + 0x8b4) = 0;
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  *(undefined1 *)(param_1 + 0x8bc) = 0;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  *(undefined4 *)(param_1 + 0x8c0) = DAT_003625e0;
  *(undefined4 *)(param_1 + 0x8c4) = uVar1;
  *(undefined4 *)(param_1 + 0x8c8) = uVar2;
  *(undefined4 *)(param_1 + 0x8cc) = uVar3;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  *(undefined4 *)(param_1 + 0x8d0) = DAT_003625e0;
  *(undefined4 *)(param_1 + 0x8d4) = uVar1;
  *(undefined4 *)(param_1 + 0x8d8) = uVar2;
  *(undefined4 *)(param_1 + 0x8dc) = uVar3;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x66c) = 0;
  *(undefined4 *)(param_1 + 0x638) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  *(undefined4 *)(param_1 + 0x5d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  *(undefined4 *)(param_1 + 0x630) = 0;
  *(undefined4 *)(param_1 + 0x598) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x888) = 0;
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  *(undefined1 *)(param_1 + 0x8e8) = 0;
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  uVar3 = DAT_0036256c;
  uVar2 = DAT_00362568;
  uVar1 = DAT_00362564;
  *(undefined4 *)(param_1 + 0x900) = DAT_00362560;
  *(undefined4 *)(param_1 + 0x904) = uVar1;
  *(undefined4 *)(param_1 + 0x908) = uVar2;
  *(undefined4 *)(param_1 + 0x90c) = uVar3;
  memset(param_1 + 0x910,0,0x50);
  uVar5 = 0;
  iVar4 = param_1;
  do {
    *(undefined4 *)(iVar4 + 0x9ac) = 0;
    uVar5 = uVar5 + 8;
    *(undefined4 *)(iVar4 + 0xa2c) = 0;
    *(undefined4 *)(iVar4 + 0x9b0) = 0;
    *(undefined4 *)(iVar4 + 0xa30) = 0;
    *(undefined4 *)(iVar4 + 0x9b4) = 0;
    *(undefined4 *)(iVar4 + 0xa34) = 0;
    *(undefined4 *)(iVar4 + 0x9b8) = 0;
    *(undefined4 *)(iVar4 + 0xa38) = 0;
    *(undefined4 *)(iVar4 + 0x9bc) = 0;
    *(undefined4 *)(iVar4 + 0xa3c) = 0;
    *(undefined4 *)(iVar4 + 0x9c0) = 0;
    *(undefined4 *)(iVar4 + 0xa40) = 0;
    *(undefined4 *)(iVar4 + 0x9c4) = 0;
    *(undefined4 *)(iVar4 + 0xa44) = 0;
    *(undefined4 *)(iVar4 + 0x9c8) = 0;
    *(undefined4 *)(iVar4 + 0xa48) = 0;
    iVar4 = iVar4 + 0x20;
  } while (uVar5 < 0x20);
  *(undefined1 *)(param_1 + 0x961) = 0;
  *(undefined4 *)(param_1 + 0x964) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  *(undefined4 *)(param_1 + 0x7e4) = 0;
  *(undefined4 *)(param_1 + 0x7e8) = 0;
  *(undefined4 *)(param_1 + 0x858) = 0;
  *(undefined4 *)(param_1 + 0x85c) = 0;
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  *(undefined4 *)(param_1 + 0x828) = 0;
  *(undefined1 *)(param_1 + 0x835) = 0;
  *(undefined1 *)(param_1 + 0x834) = 0;
  *(undefined4 *)(param_1 + 0xaac) = *(undefined4 *)(param_1 + 0x874);
  *(undefined4 *)(param_1 + 0x888) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x88c) = 1;
  *(undefined1 *)(param_1 + 0xab0) = 0;
  Mat34_Identity(param_1 + 0xe0);
  Mat34_Identity(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x968) = 0;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x96c) = 0;
  *(undefined4 *)(param_1 + 0x970) = 0;
  *(undefined4 *)(param_1 + 0x974) = 0;
  *(undefined4 *)(param_1 + 0x978) = 0;
  *(undefined4 *)(param_1 + 0x97c) = 0;
  *(undefined4 *)(param_1 + 0x980) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  *(undefined4 *)(param_1 + 2000) = 0;
  *(undefined4 *)(param_1 + 0x988) = 0;
  *(undefined4 *)(param_1 + 0x998) = 0;
  *(undefined4 *)(param_1 + 0x7b4) = 0;
  *(undefined4 *)(param_1 + 0x7c4) = 0;
  *(undefined4 *)(param_1 + 0x7d4) = 0;
  *(undefined4 *)(param_1 + 0x98c) = 0;
  *(undefined4 *)(param_1 + 0x99c) = 0;
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  *(undefined4 *)(param_1 + 0x7c8) = 0;
  *(undefined4 *)(param_1 + 0x7d8) = 0;
  *(undefined4 *)(param_1 + 0x990) = 0;
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  *(undefined4 *)(param_1 + 0x7bc) = 0;
  *(undefined4 *)(param_1 + 0x7cc) = 0;
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 0x994) = 0;
  *(undefined4 *)(param_1 + 0x9a4) = 0;
  iVar4 = param_1;
  do {
    *(undefined4 *)(iVar4 + 0x9ac) = 0;
    uVar5 = uVar5 + 8;
    *(undefined4 *)(iVar4 + 0xa2c) = 0;
    *(undefined4 *)(iVar4 + 0x9b0) = 0;
    *(undefined4 *)(iVar4 + 0xa30) = 0;
    *(undefined4 *)(iVar4 + 0x9b4) = 0;
    *(undefined4 *)(iVar4 + 0xa34) = 0;
    *(undefined4 *)(iVar4 + 0x9b8) = 0;
    *(undefined4 *)(iVar4 + 0xa38) = 0;
    *(undefined4 *)(iVar4 + 0x9bc) = 0;
    *(undefined4 *)(iVar4 + 0xa3c) = 0;
    *(undefined4 *)(iVar4 + 0x9c0) = 0;
    *(undefined4 *)(iVar4 + 0xa40) = 0;
    *(undefined4 *)(iVar4 + 0x9c4) = 0;
    *(undefined4 *)(iVar4 + 0xa44) = 0;
    *(undefined4 *)(iVar4 + 0x9c8) = 0;
    *(undefined4 *)(iVar4 + 0xa48) = 0;
    iVar4 = iVar4 + 0x20;
  } while (uVar5 < 0x20);
  *(undefined4 *)(param_1 + 0xac0) = 0;
  *(undefined1 *)(param_1 + 0xac4) = 0;
  *(undefined4 *)(param_1 + 0xadc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xad8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xae0) = 0;
  *(undefined1 *)(param_1 + 0xab1) = 0;
  *(undefined4 *)(param_1 + 0xab8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xabc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xac8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xacc) = 0;
  *(undefined1 *)(param_1 + 0x9a8) = 0;
  *(undefined4 *)(param_1 + 0xb8c) = 0;
  *(undefined4 *)(param_1 + 0xbd0) = 0;
  return;
}

// 0x0016f310  size 0x504
undefined8 Car_ctor(undefined8 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *puVar10;
  
  puVar3 = (undefined4 *)param_1;
  *puVar3 = &DAT_0036e280;
  puVar3[7] = 0x3f800000;
  puVar3[0xb] = 0x3f800000;
  puVar1 = puVar3 + 0xbc;
  puVar3[0xf] = 0x3f800000;
  puVar10 = puVar3 + 0x1ac;
  puVar3[0x17] = 0x3f800000;
  puVar3[0x1f] = 0x3f800000;
  puVar3[0x23] = 0x3f800000;
  puVar3[0x27] = 0x3f800000;
  puVar3[0x5f] = 0x3f800000;
  puVar3[99] = 0x3f800000;
  puVar3[0x67] = 0x3f800000;
  puVar3[0x6b] = 0x3f800000;
  puVar3[0x7f] = 0x3f800000;
  puVar3[0x87] = 0x3f800000;
  puVar3[0x8b] = 0x3f800000;
  puVar3[0x8f] = 0x3f800000;
  puVar3[0x93] = 0x3f800000;
  puVar3[0xbb] = 0x3f800000;
  if (puVar1 < puVar10) {
    uVar7 = (int)puVar10 - (int)(puVar3 + 0xbc);
    uVar6 = uVar7 + 0x13f;
    uVar2 = (int)uVar6 / 0x140;
    uVar4 = uVar2 + 1;
    if (8 < (int)uVar4) {
      bVar9 = false;
      bVar5 = false;
      if (puVar3 + 0xbc <= puVar10) {
        bVar8 = true;
        if (((uVar7 & 0x80000000) == 0) && ((uVar6 & 0x80000000) != 0)) {
          bVar8 = false;
        }
        if (bVar8) {
          bVar5 = true;
        }
      }
      if (bVar5) {
        bVar5 = true;
        if (((uVar2 & 0x80000000) == 0) && ((uVar4 & 0x80000000) != 0)) {
          bVar5 = false;
        }
        if (bVar5) {
          bVar9 = true;
        }
      }
      if (bVar9) {
        do {
          puVar1[0x13] = 0x3f800000;
          puVar1[0x1b] = 0x3f800000;
          puVar1[0x1f] = 0x3f800000;
          puVar1[0x23] = 0x3f800000;
          puVar1[0x27] = 0x3f800000;
          puVar1[0x4f] = 0x3f800000;
          puVar1[99] = 0x3f800000;
          puVar1[0x6b] = 0x3f800000;
          puVar1[0x6f] = 0x3f800000;
          puVar1[0x73] = 0x3f800000;
          puVar1[0x77] = 0x3f800000;
          puVar1[0x9f] = 0x3f800000;
          puVar1[0xb3] = 0x3f800000;
          puVar1[0xbb] = 0x3f800000;
          puVar1[0xbf] = 0x3f800000;
          puVar1[0xc3] = 0x3f800000;
          puVar1[199] = 0x3f800000;
          puVar1[0xef] = 0x3f800000;
          puVar1[0x103] = 0x3f800000;
          puVar1[0x10b] = 0x3f800000;
          puVar1[0x10f] = 0x3f800000;
          puVar1[0x113] = 0x3f800000;
          puVar1[0x117] = 0x3f800000;
          puVar1[0x13f] = 0x3f800000;
          puVar1[0x153] = 0x3f800000;
          puVar1[0x15b] = 0x3f800000;
          puVar1[0x15f] = 0x3f800000;
          puVar1[0x163] = 0x3f800000;
          puVar1[0x167] = 0x3f800000;
          puVar1[399] = 0x3f800000;
          puVar1[0x1a3] = 0x3f800000;
          puVar1[0x1ab] = 0x3f800000;
          puVar1[0x1af] = 0x3f800000;
          puVar1[0x1b3] = 0x3f800000;
          puVar1[0x1b7] = 0x3f800000;
          puVar1[0x1df] = 0x3f800000;
          puVar1[499] = 0x3f800000;
          puVar1[0x1fb] = 0x3f800000;
          puVar1[0x1ff] = 0x3f800000;
          puVar1[0x203] = 0x3f800000;
          puVar1[0x207] = 0x3f800000;
          puVar1[0x22f] = 0x3f800000;
          puVar1[0x243] = 0x3f800000;
          puVar1[0x24b] = 0x3f800000;
          puVar1[0x24f] = 0x3f800000;
          puVar1[0x253] = 0x3f800000;
          puVar1[599] = 0x3f800000;
          puVar1[0x27f] = 0x3f800000;
          puVar1 = puVar1 + 0x280;
        } while (puVar1 < puVar3 + -0xd4);
      }
    }
    for (; puVar1 < puVar3 + 0x1ac; puVar1 = puVar1 + 0x50) {
      puVar1[0x13] = 0x3f800000;
      puVar1[0x1b] = 0x3f800000;
      puVar1[0x1f] = 0x3f800000;
      puVar1[0x23] = 0x3f800000;
      puVar1[0x27] = 0x3f800000;
      puVar1[0x4f] = 0x3f800000;
    }
  }
  puVar3[0x1af] = 0x3f800000;
  puVar3[0x1b3] = 0x3f800000;
  puVar1 = puVar3 + 0x248;
  puVar3[0x1b7] = 0x3f800000;
  puVar3[0x1bb] = 0x3f800000;
  puVar3[0x1bf] = 0x3f800000;
  puVar3[0x1c3] = 0x3f800000;
  puVar3[0x1cf] = 0x3f800000;
  puVar3[0x1d3] = 0x3f800000;
  puVar3[0x1d7] = 0x3f800000;
  puVar3[0x1db] = 0x3f800000;
  puVar3[0x1df] = 0x3f800000;
  puVar3[0x1e3] = 0x3f800000;
  puVar3[0x233] = 0x3f800000;
  puVar3[0x237] = 0x3f800000;
  puVar3[0x243] = 0x3f800000;
  puVar3[0x247] = 0x3f800000;
  if (puVar1 < puVar3 + 600) {
    uVar6 = (int)(puVar3 + 600) - (int)(puVar3 + 0x248);
    uVar4 = uVar6 + 0xf;
    uVar2 = uVar4;
    if ((int)uVar4 < 0) {
      uVar2 = uVar6 + 0x1e;
    }
    uVar7 = ((int)uVar2 >> 4) + 1;
    if (8 < (int)uVar7) {
      bVar5 = false;
      bVar9 = false;
      if (puVar3 + 0x248 <= puVar3 + 600) {
        bVar8 = true;
        if (((uVar6 & 0x80000000) == 0) && ((uVar4 & 0x80000000) != 0)) {
          bVar8 = false;
        }
        if (bVar8) {
          bVar9 = true;
        }
      }
      if (bVar9) {
        bVar9 = true;
        if ((((int)uVar2 >> 4 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
          bVar9 = false;
        }
        if (bVar9) {
          bVar5 = true;
        }
      }
      if (bVar5) {
        do {
          puVar1[3] = 0x3f800000;
          puVar1[7] = 0x3f800000;
          puVar1[0xb] = 0x3f800000;
          puVar1[0xf] = 0x3f800000;
          puVar1[0x13] = 0x3f800000;
          puVar1[0x17] = 0x3f800000;
          puVar1[0x1b] = 0x3f800000;
          puVar1[0x1f] = 0x3f800000;
          puVar1 = puVar1 + 0x20;
        } while (puVar1 < puVar3 + 0x238);
      }
    }
    for (; puVar1 < puVar3 + 600; puVar1 = puVar1 + 4) {
      puVar1[3] = 0x3f800000;
    }
  }
  puVar3[0x2e7] = 0x3f800000;
  puVar1 = puVar3 + 0x2e8;
  if (puVar1 < puVar3 + 0x2f4) {
    uVar6 = (int)(puVar3 + 0x2f4) - (int)(puVar3 + 0x2e8);
    uVar4 = uVar6 + 0xf;
    uVar2 = uVar4;
    if ((int)uVar4 < 0) {
      uVar2 = uVar6 + 0x1e;
    }
    uVar7 = ((int)uVar2 >> 4) + 1;
    if (8 < (int)uVar7) {
      bVar5 = false;
      bVar9 = false;
      if (puVar3 + 0x2e8 <= puVar3 + 0x2f4) {
        bVar8 = true;
        if (((uVar6 & 0x80000000) == 0) && ((uVar4 & 0x80000000) != 0)) {
          bVar8 = false;
        }
        if (bVar8) {
          bVar9 = true;
        }
      }
      if (bVar9) {
        bVar9 = true;
        if ((((int)uVar2 >> 4 & 0x80000000U) == 0) && ((uVar7 & 0x80000000) != 0)) {
          bVar9 = false;
        }
        if (bVar9) {
          bVar5 = true;
        }
      }
      if (bVar5) {
        do {
          puVar1[3] = 0x3f800000;
          puVar1[7] = 0x3f800000;
          puVar1[0xb] = 0x3f800000;
          puVar1[0xf] = 0x3f800000;
          puVar1[0x13] = 0x3f800000;
          puVar1[0x17] = 0x3f800000;
          puVar1[0x1b] = 0x3f800000;
          puVar1[0x1f] = 0x3f800000;
          puVar1 = puVar1 + 0x20;
        } while (puVar1 < puVar3 + 0x2d4);
      }
    }
    for (; puVar1 < puVar3 + 0x2f4; puVar1 = puVar1 + 4) {
      puVar1[3] = 0x3f800000;
    }
  }
  puVar3[0x55] = 0;
  puVar3[0x56] = 0;
  puVar3[0x57] = 0;
  Car_Clear(param_1);
  *(undefined1 *)(puVar3 + 600) = 0;
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

