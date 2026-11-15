// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00194000 - 0x00198000
#include "ghidra_types.h"

// 0x001940f0  size 0x5ac
/* WARNING: Removing unreachable block (ram,0x00194184) */

void CarSnd_UpdateTurbo(undefined4 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  float fVar12;
  undefined1 auStack_50 [2];
  byte bStack_4e;
  
  if ((param_1[1] & 1) == 0) {
    return;
  }
  fVar12 = (float)RaceCar_IsAirborne(param_2);
  if (fVar12 <= 0.001) {
    if ((param_1[1] & 2) == 0) {
      *(undefined2 *)(param_1 + 2) = 0;
      if (*(short *)(param_1 + 5) == 0) {
        param_1[1] = param_1[1] & 0xfffffffd;
        (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,*(undefined1 *)(param_1 + 3));
        *(undefined2 *)(param_1 + 5) = 0x3c;
        return;
      }
      return;
    }
    *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 1;
    if (DAT_0036e7ec < (float)*(ushort *)(param_1 + 2)) {
      param_1[1] = param_1[1] & 0xfffffffd;
      (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,*(undefined1 *)(param_1 + 3));
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    uVar5 = (uint)*(ushort *)(param_1 + 2) << 7;
    if (0x3fff < uVar5) {
      uVar5 = 0x3fff;
    }
    uVar2 = *(ushort *)(param_1 + 4);
    uVar1 = *(undefined1 *)(param_1 + 3);
    piVar11 = (int *)*param_1;
    uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
    lVar8 = SndMgr_IsChannelBusy(uVar7);
    if (lVar8 == 0) {
      uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
      uVar3 = (**(code **)(*piVar11 + 0xc))(piVar11,uVar1);
      uVar4 = (**(code **)(*piVar11 + 0x10))(piVar11);
      piVar11 = (int *)uVar7;
      (**(code **)(*piVar11 + 0x2c))(uVar7,uVar1,uVar3,uVar2 & 0xff,uVar4);
      (**(code **)(*piVar11 + 0x30))(uVar7,uVar1,uVar3,0x40,uVar4);
      (**(code **)(*piVar11 + 0x34))(uVar7,uVar1,uVar3,(short)uVar5 + 0x2000,uVar4);
      return;
    }
    return;
  }
  RaceCar_GetSpeedKmh(param_2);
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[4] = (int)DAT_0036e7f4;
  param_1[4] = (int)((float)(int)param_1[4] + DAT_0036e7f0);
  iVar6 = param_1[4];
  if (iVar6 < 0) {
    param_1[4] = 0;
  }
  else {
    if (0x7f < iVar6) {
      iVar6 = 0x7f;
    }
    param_1[4] = iVar6;
  }
  GameState_LoadHeader(auStack_50);
  if (bStack_4e < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bStack_4e) {
    case 1:
      param_1[4] = (int)param_1[4] / 3;
      break;
    case 2:
      iVar6 = param_1[4];
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      param_1[4] = iVar6 >> 1;
      break;
    case 3:
      iVar6 = param_1[4];
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      param_1[4] = iVar6 >> 1;
    }
  }
  if ((param_1[1] & 2) != 0) {
    uVar2 = *(ushort *)(param_1 + 4);
    uVar1 = *(undefined1 *)(param_1 + 3);
    piVar11 = (int *)*param_1;
    uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
    lVar8 = SndMgr_IsChannelBusy(uVar7);
    if (lVar8 == 0) {
      uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
      uVar3 = (**(code **)(*piVar11 + 0xc))(piVar11,uVar1);
      uVar4 = (**(code **)(*piVar11 + 0x10))(piVar11);
      piVar11 = (int *)uVar7;
      (**(code **)(*piVar11 + 0x2c))(uVar7,uVar1,uVar3,uVar2 & 0xff,uVar4);
      (**(code **)(*piVar11 + 0x30))(uVar7,uVar1,uVar3,0x40,uVar4);
      (**(code **)(*piVar11 + 0x34))(uVar7,uVar1,uVar3,0x2000,uVar4);
      return;
    }
    return;
  }
  piVar11 = (int *)*param_1;
  uVar2 = *(ushort *)(param_1 + 4);
  uVar1 = *(undefined1 *)(param_1 + 3);
  uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
  lVar8 = SndMgr_IsChannelBusy(uVar7);
  if (lVar8 == 0) {
    uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
    uVar9 = (**(code **)(*piVar11 + 0xc))(piVar11,uVar1);
    uVar10 = (**(code **)(*piVar11 + 0x10))(piVar11);
    (**(code **)(*(int *)uVar7 + 0x24))(uVar7,uVar1,uVar9,0x7f,uVar10,0x40,0);
    uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
    lVar8 = SndMgr_IsChannelBusy(uVar7);
    if (lVar8 == 0) {
      uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
      uVar3 = (**(code **)(*piVar11 + 0xc))(piVar11,uVar1);
      uVar4 = (**(code **)(*piVar11 + 0x10))(piVar11);
      piVar11 = (int *)uVar7;
      (**(code **)(*piVar11 + 0x2c))(uVar7,uVar1,uVar3,uVar2 & 0xff,uVar4);
      (**(code **)(*piVar11 + 0x30))(uVar7,uVar1,uVar3,0x40,uVar4);
      (**(code **)(*piVar11 + 0x34))(uVar7,uVar1,uVar3,0x2000,uVar4);
      uVar5 = param_1[1];
      goto LAB_00194514;
    }
  }
  uVar5 = param_1[1];
LAB_00194514:
  param_1[1] = uVar5 | 2;
  return;
}

// 0x001946a0  size 0xa50
void CarSnd_UpdateTireSqueal(undefined4 *param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((param_1[1] & 1) != 0) {
    if (*(short *)(param_1 + 3) == 0) {
      uVar3 = *(undefined4 *)((int)param_2 + 0x158);
      iVar6 = RaceCar_GetTracker(param_2);
      uVar7 = PhysBody_FindShapeWithFlags(uVar3,0xffffffffff000000);
      if ((*(uint *)(iVar6 + 0x60) & 0x30) == 0) {
        if (((param_1[1] & 2) == 0) ||
           (*(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) + 1,
           *(ushort *)((int)param_1 + 0xe) < 3)) {
          sVar2 = *(short *)(param_1 + 4);
        }
        else {
          *(undefined2 *)((int)param_1 + 0xe) = 0;
          param_1[1] = param_1[1] & 0xfffffffd;
          (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,7);
          sVar2 = *(short *)(param_1 + 4);
        }
        if (sVar2 == 0) {
          param_1[1] = param_1[1] & 0xfffffffd;
          (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,7);
          *(undefined2 *)(param_1 + 4) = 0x3c;
        }
      }
      else if ((*(uint *)(iVar6 + 0x60) & 0x10) == 0) {
        fVar15 = (float)PhysWorld_GetFirstBody(uVar7);
        fVar13 = (float)RaceCar_GetSpeedKmh(param_2);
        fVar15 = fVar15 * (fVar13 / DAT_0036e7dc);
        if (10.0 < fVar15) {
          fVar13 = 1.0;
          if (fVar15 / DAT_0036e7d8 <= 1.0) {
            fVar13 = fVar15 / DAT_0036e7d8;
          }
          param_1[2] = (int)((127.0 - DAT_0036e7e8) * fVar13 + DAT_0036e7e8 + 0.0);
          *(undefined2 *)(param_1 + 3) = 4;
          if ((param_1[1] & 2) == 0) {
            param_1[1] = param_1[1] | 2;
            piVar12 = (int *)*param_1;
            uVar1 = *(ushort *)(param_1 + 2);
            uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
            lVar8 = SndMgr_IsChannelBusy(uVar7);
            if (lVar8 == 0) {
              uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
              uVar9 = (**(code **)(*piVar12 + 0xc))(piVar12,7);
              uVar10 = (**(code **)(*piVar12 + 0x10))(piVar12);
              (**(code **)(*(int *)uVar7 + 0x24))(uVar7,7,uVar9,0x7f,uVar10,0x40,0);
              uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
              lVar8 = SndMgr_IsChannelBusy(uVar7);
              if (lVar8 == 0) {
                uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
                uVar4 = (**(code **)(*piVar12 + 0xc))(piVar12,7);
                uVar5 = (**(code **)(*piVar12 + 0x10))(piVar12);
                piVar12 = (int *)uVar7;
                (**(code **)(*piVar12 + 0x2c))(uVar7,7,uVar4,uVar1 & 0xff,uVar5);
                (**(code **)(*piVar12 + 0x30))(uVar7,7,uVar4,0x40,uVar5);
                (**(code **)(*piVar12 + 0x34))(uVar7,7,uVar4,0x2000,uVar5);
              }
            }
          }
          else {
            piVar12 = (int *)*param_1;
            uVar1 = *(ushort *)(param_1 + 2);
            uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
            lVar8 = SndMgr_IsChannelBusy(uVar7);
            if (lVar8 == 0) {
              uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
              uVar4 = (**(code **)(*piVar12 + 0xc))(piVar12,7);
              uVar5 = (**(code **)(*piVar12 + 0x10))(piVar12);
              piVar12 = (int *)uVar7;
              (**(code **)(*piVar12 + 0x2c))(uVar7,7,uVar4,uVar1 & 0xff,uVar5);
              (**(code **)(*piVar12 + 0x30))(uVar7,7,uVar4,0x40,uVar5);
              (**(code **)(*piVar12 + 0x34))(uVar7,7,uVar4,0x2000,uVar5);
            }
          }
          if (500.0 < fVar15) {
            fVar13 = 2.0;
            if (fVar15 / DAT_0036e7e0 <= 2.0) {
              fVar13 = fVar15 / DAT_0036e7e0;
            }
            if (2.1474836e+09 <= fVar13) {
              fVar13 = fVar13 - 2.1474836e+09;
            }
            fVar15 = DAT_0036e7e4 * (float)(((int)fVar13 & 0xffffU) + 1);
            if (2.1474836e+09 <= fVar15) {
              fVar15 = fVar15 - 2.1474836e+09;
            }
            *(short *)(param_1 + 3) = (short)(int)fVar15;
            piVar12 = (int *)*param_1;
            uVar1 = *(ushort *)(param_1 + 2);
            uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
            lVar8 = SndMgr_IsChannelBusy(uVar7);
            if (lVar8 == 0) {
              uVar11 = ((int)fVar13 & 0xffffU) + 3;
              uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
              uVar9 = (**(code **)(*piVar12 + 0xc))(piVar12,uVar11 & 0xff);
              uVar10 = (**(code **)(*piVar12 + 0x10))(piVar12);
              (**(code **)(*(int *)uVar7 + 0x24))(uVar7,uVar11 & 0xff,uVar9,0x7f,uVar10,0x40,0);
              uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
              lVar8 = SndMgr_IsChannelBusy(uVar7);
              if (lVar8 == 0) {
                uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
                uVar4 = (**(code **)(*piVar12 + 0xc))(piVar12,uVar11 & 0xff);
                uVar5 = (**(code **)(*piVar12 + 0x10))(piVar12);
                piVar12 = (int *)uVar7;
                (**(code **)(*piVar12 + 0x2c))(uVar7,uVar11 & 0xff,uVar4,uVar1 & 0xff,uVar5);
                (**(code **)(*piVar12 + 0x30))(uVar7,uVar11 & 0xff,uVar4,0x40,uVar5);
                (**(code **)(*piVar12 + 0x34))(uVar7,uVar11 & 0xff,uVar4,0x2000,uVar5);
              }
            }
          }
        }
        *(undefined2 *)((int)param_1 + 0xe) = 0;
      }
      else if ((param_1[1] & 8) != 0) {
        uVar7 = PhysBody_FindShapeWithFlags(uVar3,0xffffff);
        if ((uRam0036f25c & 8) == 0) {
          uRam0036f25c = uRam0036f25c | 8;
          fVar13 = (float)PhysWorld_GetFirstBody(uVar7);
          fVar15 = 1.0;
          fVar14 = (fVar13 * 5.0) / DAT_0036e7d8;
          if (fVar14 <= 1.0) {
            fVar15 = fVar14;
          }
          fVar14 = 2.0;
          param_1[2] = (int)((127.0 - DAT_0036e7e8) * fVar15 + DAT_0036e7e8 + 0.0);
          *(undefined2 *)(param_1 + 3) = 4;
          fVar15 = (fVar13 * 5.0) / DAT_0036e7e0;
          if (fVar15 <= 2.0) {
            fVar14 = fVar15;
          }
          if (2.1474836e+09 <= fVar14) {
            fVar14 = fVar14 - 2.1474836e+09;
          }
          fVar15 = DAT_0036e7e4 * (float)(((int)fVar14 & 0xffffU) + 1);
          if (2.1474836e+09 <= fVar15) {
            fVar15 = fVar15 - 2.1474836e+09;
          }
          *(short *)(param_1 + 3) = (short)(int)fVar15;
          piVar12 = (int *)*param_1;
          uVar1 = *(ushort *)(param_1 + 2);
          uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
          lVar8 = SndMgr_IsChannelBusy(uVar7);
          if (lVar8 == 0) {
            uVar11 = ((int)fVar14 & 0xffffU) + 3;
            uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
            uVar9 = (**(code **)(*piVar12 + 0xc))(piVar12,uVar11 & 0xff);
            uVar10 = (**(code **)(*piVar12 + 0x10))(piVar12);
            (**(code **)(*(int *)uVar7 + 0x24))(uVar7,uVar11 & 0xff,uVar9,0x7f,uVar10,0x40,0);
            uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
            lVar8 = SndMgr_IsChannelBusy(uVar7);
            if (lVar8 == 0) {
              uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
              uVar4 = (**(code **)(*piVar12 + 0xc))(piVar12,uVar11 & 0xff);
              uVar5 = (**(code **)(*piVar12 + 0x10))(piVar12);
              piVar12 = (int *)uVar7;
              (**(code **)(*piVar12 + 0x2c))(uVar7,uVar11 & 0xff,uVar4,uVar1 & 0xff,uVar5);
              (**(code **)(*piVar12 + 0x30))(uVar7,uVar11 & 0xff,uVar4,0x40,uVar5);
              (**(code **)(*piVar12 + 0x34))(uVar7,uVar11 & 0xff,uVar4,0x2000,uVar5);
            }
          }
          *(undefined2 *)((int)param_1 + 0xe) = 0;
        }
        else {
          uRam0036f25c = uRam0036f25c & 0xfffffff7;
        }
      }
    }
    else {
      *(short *)(param_1 + 3) = *(short *)(param_1 + 3) + -1;
      if ((param_1[1] & 2) != 0) {
        uVar1 = *(ushort *)(param_1 + 2);
        piVar12 = (int *)*param_1;
        uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
        lVar8 = SndMgr_IsChannelBusy(uVar7);
        if (lVar8 == 0) {
          uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12);
          uVar4 = (**(code **)(*piVar12 + 0xc))(piVar12,7);
          uVar5 = (**(code **)(*piVar12 + 0x10))(piVar12);
          piVar12 = (int *)uVar7;
          (**(code **)(*piVar12 + 0x2c))(uVar7,7,uVar4,uVar1 & 0xff,uVar5);
          (**(code **)(*piVar12 + 0x30))(uVar7,7,uVar4,0x40,uVar5);
          (**(code **)(*piVar12 + 0x34))(uVar7,7,uVar4,0x2000,uVar5);
        }
      }
    }
  }
  return;
}

// 0x001950f0  size 0x1f8
void maybe_CarSnd_UpdatePitch(undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  
  iVar2 = param_1[4];
  piVar3 = (int *)param_1[3];
  if (iVar2 != 0) {
    piVar5 = (int *)(iVar2 + 0x18);
    uVar1 = *(undefined1 *)((int)param_1 + 0x25);
    puVar4 = (undefined1 *)((int)param_1 + 0x26);
    iVar2 = *(int *)(iVar2 + 0x18);
    while (-1 < iVar2) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined1 *)((int)param_1 + 0x25),uVar1,(char)*piVar5)
      ;
      piVar5 = piVar5 + 0x21;
      iVar2 = *piVar5;
    }
  }
  iVar2 = param_1[4];
  piVar3 = (int *)param_1[3];
  if (iVar2 != 0) {
    piVar5 = (int *)(iVar2 + 0x18);
    uVar1 = *(undefined1 *)(param_1 + 5);
    puVar4 = (undefined1 *)((int)param_1 + 0x15);
    iVar2 = *(int *)(iVar2 + 0x18);
    while (-1 < iVar2) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined1 *)(param_1 + 5),uVar1,(char)*piVar5);
      piVar5 = piVar5 + 0x21;
      iVar2 = *piVar5;
    }
  }
  iVar2 = param_1[4];
  piVar3 = (int *)param_1[0x15];
  if (iVar2 != 0) {
    piVar5 = (int *)(iVar2 + 0x18);
    uVar1 = *(undefined1 *)((int)param_1 + 0x25);
    puVar4 = (undefined1 *)((int)param_1 + 0x26);
    iVar2 = *(int *)(iVar2 + 0x18);
    while (-1 < iVar2) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined1 *)((int)param_1 + 0x25),uVar1,(char)*piVar5)
      ;
      piVar5 = piVar5 + 0x21;
      iVar2 = *piVar5;
    }
  }
  iVar2 = param_1[4];
  piVar3 = (int *)param_1[0x15];
  if (iVar2 != 0) {
    piVar5 = (int *)(iVar2 + 0x18);
    uVar1 = *(undefined1 *)(param_1 + 5);
    puVar4 = (undefined1 *)((int)param_1 + 0x15);
    iVar2 = *(int *)(iVar2 + 0x18);
    while (-1 < iVar2) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined1 *)(param_1 + 5),uVar1,(char)*piVar5);
      piVar5 = piVar5 + 0x21;
      iVar2 = *piVar5;
    }
  }
  if ((param_1[1] & 0x40) != 0) {
    (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,10);
    param_1[1] = param_1[1] & 0xffffff7f;
  }
  return;
}

// 0x001952f0  size 0x50
undefined4 CarSnd_IsEnginePlaying(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = SndMgr_IsChannelBusy(*(undefined4 *)(param_1 + 0xc));
  if ((lVar2 == 0) && (lVar2 = SndMgr_IsChannelBusy(*(undefined4 *)(param_1 + 0x54)), lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00195340  size 0x104
void CarSnd_StartEngine(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((&PTR_PTR_003127d0)[param_2 * 2] + param_3 * 4);
  do {
    *(undefined1 *)(param_1 + uVar1 + 0x15) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  uVar1 = 0;
  do {
    *(undefined1 *)(param_1 + uVar1 + 0x26) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  if ((*(int *)(param_1 + 0x40) != param_2) || (*(int *)(param_1 + 0x44) != param_3)) {
    *(int *)(param_1 + 0x40) = param_2;
    *(int *)(param_1 + 0x44) = param_3;
    *(undefined4 *)(param_1 + 0x48) = 1;
    SndMgr_PlayStreamSlot
              (*(undefined4 *)(param_1 + 0xc),**(undefined4 **)(param_1 + 0x10),
               (*(undefined4 **)(param_1 + 0x10))[1],0,0);
    SndMgr_PlayStreamSlot
              (*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(*(int *)(param_1 + 0x10) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc),0,0);
  }
  return;
}

// 0x00195450  size 0x430
/* WARNING: Removing unreachable block (ram,0x001956a8) */

void CarSnd_UpdateCollision(undefined4 *param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = *(float *)(param_2 + 0xac0);
  if (*(short *)((int)param_1 + 0x4e) == 0) {
    if ((((param_1[1] & 0x80) != 0) || (fVar13 <= 1.0)) || (fVar13 <= (float)param_1[0xe])) {
      if (fVar13 < 1.2) {
        (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,10);
        param_1[1] = param_1[1] & 0xffffff7f;
      }
    }
    else {
      param_1[1] = param_1[1] | 0x80;
      *(undefined2 *)((int)param_1 + 0x4e) = 0x20;
      piVar11 = (int *)*param_1;
      sVar1 = *(short *)(param_1 + 0x13);
      uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
      lVar8 = SndMgr_IsChannelBusy(uVar7);
      if (lVar8 == 0) {
        uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
        uVar5 = (**(code **)(*piVar11 + 0xc))(piVar11,10);
        uVar6 = (**(code **)(*piVar11 + 0x10))(piVar11);
        (**(code **)(*(int *)uVar7 + 0x24))(uVar7,10,uVar5,0x7f,uVar6,0x40,0);
        uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
        lVar8 = SndMgr_IsChannelBusy(uVar7);
        if (lVar8 == 0) {
          uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
          uVar2 = (**(code **)(*piVar11 + 0xc))(piVar11,10);
          uVar3 = (**(code **)(*piVar11 + 0x10))(piVar11);
          piVar11 = (int *)uVar7;
          (**(code **)(*piVar11 + 0x2c))(uVar7,10,uVar2,7,uVar3);
          (**(code **)(*piVar11 + 0x30))(uVar7,10,uVar2,0x40,uVar3);
          (**(code **)(*piVar11 + 0x34))(uVar7,10,uVar2,sVar1 + 0x2000,uVar3);
          uVar9 = param_1[1];
          goto LAB_00195670;
        }
      }
    }
  }
  else {
    *(short *)((int)param_1 + 0x4e) = *(short *)((int)param_1 + 0x4e) + -1;
  }
  uVar9 = param_1[1];
LAB_00195670:
  if ((uVar9 & 0x80) == 0) {
    iVar10 = *(ushort *)(param_1 + 0x13) - 0x80;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    *(short *)(param_1 + 0x13) = (short)iVar10;
  }
  else {
    if ((*(ushort *)(param_1 + 0x13) < 0x1fff) && (0.0 <= fVar13 - (float)param_1[0xe])) {
      fVar12 = (float)*(ushort *)(param_1 + 0x13) + (fVar13 - (float)param_1[0xe]) * 16.0 + 32.0;
      if (2.1474836e+09 <= fVar12) {
        fVar12 = fVar12 - 2.1474836e+09;
      }
      *(short *)(param_1 + 0x13) = (short)(int)fVar12;
      uVar4 = *(ushort *)(param_1 + 0x13);
      if (0x1fff < uVar4) {
        uVar4 = 0x1fff;
      }
      *(ushort *)(param_1 + 0x13) = uVar4;
    }
    piVar11 = (int *)*param_1;
    sVar1 = *(short *)(param_1 + 0x13);
    uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
    lVar8 = SndMgr_IsChannelBusy(uVar7);
    if (lVar8 == 0) {
      uVar7 = (**(code **)(*piVar11 + 0x14))(piVar11);
      uVar2 = (**(code **)(*piVar11 + 0xc))(piVar11,10);
      uVar3 = (**(code **)(*piVar11 + 0x10))(piVar11);
      piVar11 = (int *)uVar7;
      (**(code **)(*piVar11 + 0x2c))(uVar7,10,uVar2,7,uVar3);
      (**(code **)(*piVar11 + 0x30))(uVar7,10,uVar2,0x40,uVar3);
      (**(code **)(*piVar11 + 0x34))(uVar7,10,uVar2,sVar1 + 0x2000,uVar3);
      param_1[0xe] = fVar13;
      return;
    }
  }
  param_1[0xe] = fVar13;
  return;
}

// 0x00195880  size 0x8
undefined4 Render_GetField_c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 0x00195890  size 0x158
void maybe_CarSnd_UpdateVolume(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  
  puVar4 = (undefined4 *)param_1;
  uVar3 = (**(code **)(puVar4[2] + 0x14))();
  iVar2 = puVar4[4];
  if (iVar2 != 0) {
    piVar6 = (int *)(iVar2 + 0x18);
    uVar1 = *(undefined1 *)((int)puVar4 + 0x25);
    puVar5 = (undefined1 *)((int)puVar4 + 0x26);
    iVar2 = *(int *)(iVar2 + 0x18);
    while (-1 < iVar2) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      (**(code **)(*(int *)uVar3 + 0x10))
                (uVar3,*(undefined1 *)((int)puVar4 + 0x25),uVar1,(char)*piVar6);
      piVar6 = piVar6 + 0x21;
      iVar2 = *piVar6;
    }
  }
  uVar3 = (**(code **)(puVar4[2] + 0x14))(param_1);
  iVar2 = puVar4[4];
  if (iVar2 != 0) {
    piVar6 = (int *)(iVar2 + 0x18);
    uVar1 = *(undefined1 *)(puVar4 + 5);
    puVar5 = (undefined1 *)((int)puVar4 + 0x15);
    iVar2 = *(int *)(iVar2 + 0x18);
    while (-1 < iVar2) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      (**(code **)(*(int *)uVar3 + 0x10))(uVar3,*(undefined1 *)(puVar4 + 5),uVar1,(char)*piVar6);
      piVar6 = piVar6 + 0x21;
      iVar2 = *piVar6;
    }
  }
  if ((puVar4[1] & 0x40) != 0) {
    (**(code **)(*(int *)*puVar4 + 8))((int *)*puVar4,10);
    puVar4[1] = puVar4[1] & 0xffffff7f;
  }
  return;
}

// 0x001959f0  size 0x57c
/* WARNING: Removing unreachable block (ram,0x00195cc0) */
/* WARNING: Removing unreachable block (ram,0x00195b58) */
/* WARNING: Removing unreachable block (ram,0x00195e64) */

void CarSnd_UpdateWind(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = (float)RaceCar_GetRpm(param_2);
  iVar5 = (int)param_2;
  iVar6 = (int)param_1;
  if ((*(char *)(iVar5 + 0x810) != '\0') ||
     ((0.0 < *(float *)(iVar5 + 0x824) && (*(int *)(iVar5 + 0x818) != 0)))) {
    fVar9 = 0.0;
    iVar3 = *(int *)(iVar6 + 0x48);
  }
  else {
    if (*(int *)(iVar5 + 0x814) == -1) {
      fVar9 = *(float *)(iVar5 + 300);
    }
    else {
      fVar9 = *(float *)(iVar5 + 0x128);
    }
    iVar3 = *(int *)(iVar6 + 0x48);
  }
  iVar5 = *(int *)(iVar5 + 0x120);
  if ((iVar3 == 0) && ((*(uint *)(iVar6 + 4) & 1) != 0)) {
    CarSnd_UpdateCollision(param_1,param_2);
    *(float *)(iVar6 + 0x3c) = fVar9;
    fVar10 = (fVar8 * DAT_0036e808) / *(float *)(iVar5 + 0x530);
    fVar8 = *(float *)(*(int *)(iVar6 + 0x10) + 0x14);
    if (2.1474836e+09 <= fVar8) {
      fVar8 = fVar8 - 2.1474836e+09;
    }
    if (((*(uint *)(iVar6 + 4) & 0x20) != 0) && ((uRam0036f25c & 4) == 0)) {
      fVar8 = (float)((int)fVar8 & 0xff) *
              (fVar9 * (DAT_0036e7ac - DAT_0036e7a8) + DAT_0036e7a8 + 0.0);
      if (2.1474836e+09 <= fVar8) {
        fVar8 = fVar8 - 2.1474836e+09;
      }
      uVar4 = (int)fVar8 & 0xff;
      if (0x7f < uVar4) {
        uVar4 = 0x7f;
      }
      uVar2 = (**(code **)(*(int *)(iVar6 + 8) + 0x14))(param_1);
      CarSnd_SetupMidiChannel(fVar10,iVar6 + 0x14,*(undefined4 *)(iVar6 + 0x10),uVar2);
      SndCh_SetVolumeCc(uVar2,*(undefined1 *)(iVar6 + 0x14),*(undefined1 *)(iVar6 + 0x14),0x40);
      SndCh_ProgramChange(uVar2,*(undefined1 *)(iVar6 + 0x14),*(undefined1 *)(iVar6 + 0x14),uVar4);
    }
    fVar8 = fVar10;
    if (DAT_0036e7f8 < fVar10) {
      iVar5 = 0;
      fVar8 = 1.0;
      fVar7 = (fVar10 - DAT_0036e7f8) / (DAT_0036e800 - DAT_0036e7f8);
      if (0 < DAT_0036e804) {
        if (8 < DAT_0036e804) {
          bVar1 = false;
          if ((-1 < DAT_0036e804) && (DAT_0036e804 < 0x7fffffff)) {
            bVar1 = true;
          }
          if (bVar1) {
            do {
              iVar5 = iVar5 + 8;
              fVar8 = fVar8 * fVar7 * fVar7 * fVar7 * fVar7 * fVar7 * fVar7 * fVar7 * fVar7;
            } while (iVar5 < DAT_0036e804 + -8);
          }
        }
        for (; iVar5 < DAT_0036e804; iVar5 = iVar5 + 1) {
          fVar8 = fVar8 * fVar7;
        }
      }
      fVar8 = (DAT_0036e7f8 + 0.0) - fVar8 * DAT_0036e7fc;
      if (0.0 <= fVar8) {
        if (DAT_0036e800 < fVar8) {
          fVar8 = DAT_0036e800;
        }
      }
      else {
        fVar8 = 0.0;
      }
    }
    fVar8 = (*(float *)(*(int *)(iVar6 + 0x10) + 0x10) * fVar8) / DAT_0036e800;
    if (2.1474836e+09 <= fVar8) {
      fVar8 = fVar8 - 2.1474836e+09;
    }
    if (((*(uint *)(iVar6 + 4) & 0x10) != 0) && ((uRam0036f25c & 4) == 0)) {
      if (0.0 <= fVar9) {
        if (1.0 < fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar8 = (float)((int)fVar8 & 0xff) *
              (fVar9 * (DAT_0036e7b4 - DAT_0036e7b0) + DAT_0036e7b0 + 0.0);
      if (2.1474836e+09 <= fVar8) {
        fVar8 = fVar8 - 2.1474836e+09;
      }
      uVar4 = (int)fVar8 & 0xff;
      if (0x7f < uVar4) {
        uVar4 = 0x7f;
      }
      uVar2 = (**(code **)(*(int *)(iVar6 + 8) + 0x14))(param_1);
      CarSnd_SetupMidiChannel(fVar10,iVar6 + 0x25,*(undefined4 *)(iVar6 + 0x10),uVar2);
      SndCh_SetVolumeCc(uVar2,*(undefined1 *)(iVar6 + 0x25),*(undefined1 *)(iVar6 + 0x25),0x40);
      SndCh_ProgramChange(uVar2,*(undefined1 *)(iVar6 + 0x25),*(undefined1 *)(iVar6 + 0x25),uVar4);
    }
  }
  return;
}

// 0x00195f70  size 0x48
bool CarSnd_IsLoopPlaying(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x14))();
  lVar2 = SndMgr_IsChannelBusy(uVar1);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return lVar2 == 0;
}

// 0x00195fc0  size 0xf0
void CarSnd_StartLoop(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  uVar3 = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((&PTR_PTR_003127d0)[param_2 * 2] + param_3 * 4);
  do {
    *(undefined1 *)(param_1 + uVar3 + 0x15) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  uVar3 = 0;
  do {
    *(undefined1 *)(param_1 + uVar3 + 0x26) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  if ((*(int *)(param_1 + 0x40) != param_2) || (*(int *)(param_1 + 0x44) != param_3)) {
    *(int *)(param_1 + 0x40) = param_2;
    *(int *)(param_1 + 0x44) = param_3;
    *(undefined4 *)(param_1 + 0x48) = 1;
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x14))();
    SndMgr_PlayStreamSlot(uVar2,*puVar1,puVar1[1],0,0);
  }
  return;
}

// 0x001960b0  size 0x2f4
void CarSnd_UpdateGearShift(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  
  if ((param_1[1] & 1) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x814) == 0) {
    return;
  }
  if (*(char *)(param_2 + 0xac4) == '\0') {
    if (param_1[3] != 0) {
      param_1[3] = param_1[3] + -1;
    }
    goto LAB_00196124;
  }
  if (param_1[3] == 0) {
    (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,0);
    param_1[1] = param_1[1] & 0xfffffffd;
    uVar1 = DAT_0036e80c;
    piVar9 = (int *)*param_1;
    uVar5 = (**(code **)(*piVar9 + 0x14))(piVar9);
    lVar6 = SndMgr_IsChannelBusy(uVar5);
    if (lVar6 == 0) {
      uVar5 = (**(code **)(*piVar9 + 0x14))(piVar9);
      uVar7 = (**(code **)(*piVar9 + 0xc))(piVar9,0);
      uVar8 = (**(code **)(*piVar9 + 0x10))(piVar9);
      (**(code **)(*(int *)uVar5 + 0x24))(uVar5,0,uVar7,0x7f,uVar8,0x40,0);
      uVar5 = (**(code **)(*piVar9 + 0x14))(piVar9);
      lVar6 = SndMgr_IsChannelBusy(uVar5);
      if (lVar6 != 0) goto LAB_001961a0;
      uVar5 = (**(code **)(*piVar9 + 0x14))(piVar9);
      uVar2 = (**(code **)(*piVar9 + 0xc))(piVar9,0);
      uVar3 = (**(code **)(*piVar9 + 0x10))(piVar9);
      piVar9 = (int *)uVar5;
      (**(code **)(*piVar9 + 0x2c))(uVar5,0,uVar2,uVar1 & 0xff,uVar3);
      (**(code **)(*piVar9 + 0x30))(uVar5,0,uVar2,0x40,uVar3);
      (**(code **)(*piVar9 + 0x34))(uVar5,0,uVar2,0x2000,uVar3);
      uVar4 = param_1[1];
    }
    else {
LAB_001961a0:
      uVar4 = param_1[1];
    }
    param_1[1] = uVar4 | 2;
  }
  param_1[3] = 0x20;
LAB_00196124:
  uVar1 = DAT_0036e80c;
  piVar9 = (int *)*param_1;
  uVar5 = (**(code **)(*piVar9 + 0x14))(piVar9);
  lVar6 = SndMgr_IsChannelBusy(uVar5);
  if (lVar6 == 0) {
    uVar5 = (**(code **)(*piVar9 + 0x14))(piVar9);
    uVar2 = (**(code **)(*piVar9 + 0xc))(piVar9,0);
    uVar3 = (**(code **)(*piVar9 + 0x10))(piVar9);
    piVar9 = (int *)uVar5;
    (**(code **)(*piVar9 + 0x2c))(uVar5,0,uVar2,uVar1 & 0xff,uVar3);
    (**(code **)(*piVar9 + 0x30))(uVar5,0,uVar2,0x40,uVar3);
    (**(code **)(*piVar9 + 0x34))(uVar5,0,uVar2,0x2000,uVar3);
  }
  return;
}

// 0x001963b0  size 0xa8
void maybe_CarSnd_StopAll(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = SndMgr_GetInstance();
  uVar1 = SndMgr_GetChannelB(uVar1,3);
  uVar2 = (**(code **)(*(int *)param_1 + 0xc))(param_1,param_2);
  (**(code **)(*(int *)uVar1 + 0x28))(uVar1,param_2,uVar2,0x3c);
  uVar2 = (**(code **)(*(int *)param_1 + 0xc))(param_1,param_2);
  (**(code **)(*(int *)uVar1 + 0x28))(uVar1,param_2,uVar2,0x3d);
  return;
}

// 0x00196460  size 0x2c
undefined4 maybe_CarSnd_CanPlay(void)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = Loading_IsActive();
  uVar2 = 0x3d;
  if (lVar1 == 0) {
    uVar2 = 0x3c;
  }
  return uVar2;
}

// 0x00196490  size 0x28
void maybe_CarSnd_GetChannel(void)

{
  undefined8 uVar1;
  
  uVar1 = SndMgr_GetInstance();
  SndMgr_GetChannelB(uVar1,3);
  return;
}

// 0x001964c0  size 0x3c
char maybe_CarSnd_PlayIfReady(int param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = Loading_IsActive();
  if (lVar2 == 0) {
    cVar1 = *(char *)(param_1 + 4) + '\x01';
  }
  else {
    cVar1 = *(char *)(param_1 + 4);
  }
  return cVar1;
}

// 0x00196500  size 0xe4
void maybe_CarSnd_RestartIfIdle(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  uVar1 = (**(code **)(*piVar5 + 0x14))();
  lVar2 = SndMgr_IsChannelBusy(uVar1);
  if (lVar2 == 0) {
    uVar1 = SndMgr_GetInstance();
    uVar3 = SndMgr_GetChannelB(uVar1,1);
    uVar4 = (**(code **)(*piVar5 + 0xc))(param_1,param_2);
    (**(code **)(*(int *)uVar3 + 0x28))(uVar3,param_2,uVar4,0x3c);
    uVar1 = SndMgr_GetChannelB(uVar1,2);
    uVar3 = (**(code **)(*piVar5 + 0xc))(param_1,param_2);
    (**(code **)(*(int *)uVar1 + 0x28))(uVar1,param_2,uVar3,0x3c);
  }
  return;
}

// 0x001965f0  size 0x8
undefined4 Render_Nop_8(void)

{
  return 0x3c;
}

// 0x00196600  size 0x40
void maybe_CarSnd_PlayIfNotLoading(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = Loading_IsActive();
  uVar3 = 1;
  if (lVar1 == 0) {
    uVar3 = 2;
  }
  uVar2 = SndMgr_GetInstance();
  SndMgr_GetChannelB(uVar2,uVar3);
  return;
}

// 0x00196640  size 0x7c
char maybe_CarSnd_GetVoiceIndex(int param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\n') {
    cVar1 = *(char *)(param_1 + 4) * '\x04' + '\x04';
  }
  else if (param_2 == '\a') {
    cVar1 = *(char *)(param_1 + 4) * '\x04' + '\x03';
  }
  else if (param_2 == '\x01') {
    cVar1 = *(char *)(param_1 + 4) * '\x04' + '\x02';
  }
  else if (param_2 == '\0') {
    cVar1 = *(char *)(param_1 + 4) * '\x04' + '\x01';
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}

// 0x001966c0  size 0x64c
/* WARNING: Removing unreachable block (ram,0x00196af0) */
/* WARNING: Removing unreachable block (ram,0x00196bec) */

void CarSnd_SetupMidiChannel(float param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined2 uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  char *pcVar9;
  char cVar10;
  uint uVar11;
  float fVar12;
  
  if (param_3 != 0) {
    uVar1 = *param_2;
    puVar7 = (uint *)((int)param_3 + 0x18);
    pcVar9 = param_2 + 1;
    MidiCh_SetProgram(param_4,uVar1,uVar1);
    if (DAT_0036e808 < param_1) {
      param_1 = DAT_0036e808;
    }
    uVar6 = *puVar7;
    while (-1 < (int)uVar6) {
      piVar8 = (int *)param_4;
      fVar12 = (float)puVar7[1];
      pfVar4 = (float *)(puVar7 + 1);
      pfVar3 = (float *)(puVar7 + 1);
      while (pfVar2 = pfVar4, -1.0 < fVar12) {
        if (param_1 <= fVar12) {
          if (pfVar2 == pfVar3) {
            fVar12 = pfVar2[1] * 127.0;
            if (2.1474836e+09 <= fVar12) {
              fVar12 = fVar12 - 2.1474836e+09;
            }
          }
          else {
            fVar12 = (param_1 - *pfVar3) / (fVar12 - *pfVar3);
            fVar12 = (fVar12 * pfVar2[1] + (1.0 - fVar12) * pfVar3[1]) * 127.0;
            if (2.1474836e+09 <= fVar12) {
              fVar12 = fVar12 - 2.1474836e+09;
            }
          }
          uVar11 = (int)fVar12 & 0xff;
          cVar10 = (char)(int)fVar12;
          if (*pcVar9 == '\0') {
            if (uVar11 == 0) goto LAB_0019685c;
            MidiCh_SetReverb(param_4,*param_2,uVar1,0x7f,uVar6 & 0xff,0x40,0);
            *pcVar9 = cVar10;
          }
          else {
            if (uVar11 == 0) {
              MidiCh_SetBank(param_4,*param_2,uVar1,uVar6 & 0xff);
            }
LAB_0019685c:
            *pcVar9 = cVar10;
          }
          pcVar9 = pcVar9 + 1;
          (**(code **)(*piVar8 + 0x2c))(param_4,*param_2,uVar1,uVar11,(char)*puVar7);
          break;
        }
        pfVar4 = pfVar2 + 2;
        pfVar3 = pfVar2;
        fVar12 = pfVar2[2];
      }
      if (*pfVar2 <= -1.0) {
        fVar12 = pfVar2[-1] * 127.0;
        if (2.1474836e+09 <= fVar12) {
          fVar12 = fVar12 - 2.1474836e+09;
        }
        uVar6 = (int)fVar12 & 0xff;
        cVar10 = (char)(int)fVar12;
        if (*pcVar9 == '\0') {
          if (uVar6 == 0) goto LAB_00196978;
          MidiCh_SetReverb(param_4,*param_2,uVar1,0x7f,(char)*puVar7,0x40,0);
          *pcVar9 = cVar10;
        }
        else {
          if (uVar6 == 0) {
            MidiCh_SetBank(param_4,*param_2,uVar1,(char)*puVar7);
          }
LAB_00196978:
          *pcVar9 = cVar10;
        }
        pcVar9 = pcVar9 + 1;
        (**(code **)(*piVar8 + 0x2c))(param_4,*param_2,uVar1,uVar6,(char)*puVar7);
      }
      fVar12 = (float)puVar7[0x11];
      pfVar4 = (float *)(puVar7 + 0x11);
      pfVar3 = (float *)(puVar7 + 1);
      while (pfVar2 = pfVar4, -1.0 < fVar12) {
        if (param_1 <= fVar12) {
          if (pfVar2 == (float *)(puVar7 + 0x11)) {
            fVar12 = pfVar2[1];
            if (2.1474836e+09 <= fVar12) {
              fVar12 = fVar12 - 2.1474836e+09;
            }
          }
          else {
            fVar12 = (param_1 - *pfVar3) / (fVar12 - *pfVar3);
            fVar12 = fVar12 * pfVar2[1] + (1.0 - fVar12) * pfVar3[1];
            if (2.1474836e+09 <= fVar12) {
              fVar12 = fVar12 - 2.1474836e+09;
            }
          }
          fVar12 = (float)(int)(((int)fVar12 & 0xffffU) - 0x2000) * DAT_0036e7b8 + 8192.0;
          if (2.1474836e+09 <= fVar12) {
            fVar12 = fVar12 - 2.1474836e+09;
          }
          uVar5 = (undefined2)(int)fVar12;
          if (0x3fff < ((int)fVar12 & 0xffffU)) {
            uVar5 = 0x3fff;
          }
          (**(code **)(*piVar8 + 0x34))(param_4,*param_2,uVar1,uVar5,(char)*puVar7);
          break;
        }
        pfVar4 = pfVar2 + 2;
        pfVar3 = pfVar2;
        fVar12 = pfVar2[2];
      }
      if (*pfVar2 <= -1.0) {
        fVar12 = (pfVar2[-1] - 8192.0) * DAT_0036e7b8 + 8192.0;
        if (2.1474836e+09 <= fVar12) {
          fVar12 = fVar12 - 2.1474836e+09;
        }
        uVar5 = (undefined2)(int)fVar12;
        if (0x3fff < ((int)fVar12 & 0xffffU)) {
          uVar5 = 0x3fff;
        }
        (**(code **)(*piVar8 + 0x34))(param_4,*param_2,uVar1,uVar5,(char)*puVar7);
      }
      puVar7 = puVar7 + 0x21;
      uVar6 = *puVar7;
    }
  }
  return;
}

// 0x00196d10  size 0x3c
void View_Clear(undefined8 param_1)

{
  int iVar1;
  
  Gfx_ClearRenderTarget();
  iVar1 = (int)param_1;
  Pkt_SubmitImmediate(param_1,*(undefined1 *)(iVar1 + 0x588),*(undefined4 *)(iVar1 + 0x58c));
  *(undefined4 *)(iVar1 + 0x584) = 1;
  return;
}

// 0x00196d50  size 0x8
void View_ResetDirty(int param_1)

{
  *(undefined4 *)(param_1 + 0x584) = 0;
  return;
}

// 0x00196d60  size 0x111c
int View_SetupForCourse(undefined8 param_1,undefined1 param_2,uint param_3)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_s4_lo;
  uint unaff_s5_lo;
  uint unaff_s6_lo;
  uint uVar9;
  undefined4 in_f21;
  undefined4 unaff_f22;
  undefined4 uStack_d0;
  uint uStack_c0;
  uint uStack_b0;
  uint uStack_a0;
  uint uStack_90;
  uint uStack_80;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar8 = uRam0036f2c0;
  if (iRam00387fa8 == 2) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = 0.84;
  }
  iVar7 = (int)param_1;
  *(undefined1 *)(iVar7 + 0x580) = param_2;
  uVar8 = uVar8 >> 5;
  *(undefined4 *)(iVar7 + 0x584) = 0;
  *(undefined1 *)(iVar7 + 0x588) = 0;
  *(undefined4 *)(iVar7 + 0x58c) = 0;
  uStack_90 = uVar8;
  uStack_80 = uVar8;
  if ((param_3 & 0x40) != 0) {
    iVar3 = Tex_GetBlockCount(iRam00388044,0x100,0x40);
    iVar4 = Tex_GetBlockCount(iRam00388048,0x100,0x40);
    uStack_80 = uVar8 + iVar3;
    uStack_90 = uVar8 + iVar3 + iVar4;
  }
  uStack_b0 = uStack_90;
  uStack_a0 = uStack_90;
  if ((param_3 & 8) != 0) {
    iVar3 = Tex_GetBlockCount(2,0x80,0x80);
    iVar4 = Tex_GetBlockCount(0x32,0x80,0x80);
    uStack_a0 = uStack_90 + iVar3;
    uStack_b0 = uStack_90 + iVar3 + iVar4;
  }
  if ((param_3 & 0x20) == 0) {
    uVar5 = uStack_b0;
    uVar9 = uStack_b0;
    uVar6 = uStack_b0;
    if ((param_3 & 0x10) != 0) {
      iVar3 = Tex_GetBlockCount(0,0x80,0x80);
      iVar4 = Tex_GetBlockCount(0x3a,0x80,0x80);
      uVar5 = uStack_b0 + iVar3 + iVar4;
      uVar6 = uStack_b0 + iVar3;
    }
  }
  else {
    iVar3 = Tex_GetBlockCount(0,0x100,0x100);
    iVar4 = Tex_GetBlockCount(0x3a,0x100,0x100);
    uVar5 = uStack_b0 + iVar3 + iVar4;
    uVar9 = uStack_b0 + iVar3;
    uVar6 = uStack_b0 + iVar3;
  }
  uStack_c0 = uVar8;
  if ((param_3 & 0x1000) != 0) {
    iVar3 = Tex_GetBlockCount(0,0x140,0xe0);
    iVar4 = Tex_GetBlockCount(0x3a,0x140,0xe0);
    uStack_c0 = uVar8 + iVar3;
    uVar5 = uVar8 + iVar3 + iVar4;
  }
  bVar1 = *(byte *)(iVar7 + 0x580);
  if (bVar1 < 0xe) {
    uStack_60 = uVar8;
    uStack_58 = uVar6;
    fStack_3c = fVar2;
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    default:
      if (bVar1 == 7) {
        uStack_60 = uRam0038803c;
      }
      else {
        uStack_60 = uRam00388034;
      }
      iStack_5c = iRam00388044;
      uStack_58 = uRam0038803c;
      iStack_54 = iRam00388048;
      uStack_50 = uRam0038804c;
      uStack_4c = uRam00388050;
      if (*(char *)(iVar7 + 0x580) == '\a') {
        uStack_48 = 0;
      }
      else {
        uStack_48 = 8;
      }
      uStack_40 = 0x3f800000;
      fStack_3c = fVar2 * ((438.0 / (float)uRam0038804c) / 0.75);
      if (iRam00388048 == 0x30) {
        uStack_38 = 0x41a00000;
        uStack_34 = 0x4b742400;
      }
      else {
        uStack_38 = 0x40000000;
        uStack_34 = 0x477de800;
      }
      uStack_28 = 0x8011100f;
      uStack_30 = 0;
      uStack_2c = 1;
      uStack_24 = 1;
      uStack_20 = 0;
      uStack_18 = 0;
      uStack_1c = 0xf1011;
      fStack_10 = fRam00388094;
      fStack_c = -(fRam00388090 / 2.0);
      fStack_8 = -(fRam00388094 / 2.0);
      fStack_14 = fRam00388090;
      if (*(char *)(iVar7 + 0x580) == '\x01') {
        unaff_s6_lo = 0;
        unaff_s4_lo = uRam00388050 >> 1;
        fStack_44 = ((float)uRam0038804c * 1.9209821) / 2.0;
      }
      else if (*(char *)(iVar7 + 0x580) == '\x02') {
        fStack_44 = ((float)uRam0038804c * 1.9209821) / 2.0;
        unaff_s6_lo = uRam00388050 >> 1;
        unaff_s4_lo = unaff_s6_lo;
      }
      else {
        unaff_s6_lo = 0;
        fStack_44 = ((float)uRam0038804c * 1.9209821) / 2.0;
        unaff_s4_lo = uRam00388050;
      }
      uStack_d0 = 0;
      unaff_f22 = 0x3f000000;
      in_f21 = 0x43fa0000;
      unaff_s5_lo = uRam0038804c;
      goto LAB_00197c3c;
    case 3:
    case 4:
      if (bVar1 == 4) {
        iStack_54 = 0x3a;
        fStack_44 = 32.0;
        iStack_5c = 0;
        uStack_60 = uStack_b0;
      }
      else {
        iStack_5c = 2;
        iStack_54 = 0x32;
        uStack_60 = uStack_90;
        uStack_58 = uStack_a0;
        fStack_44 = ((((float)uRam0038804c * 1.9209821) / 2.0) / (float)uRam0038804c) * 128.0;
      }
      uStack_30 = (uint)(bVar1 == 4);
      uStack_38 = 0x40000000;
      uStack_48 = 0;
      uStack_50 = 0x80;
      uStack_34 = 0x476a6000;
      uStack_4c = 0x80;
      if (*(char *)(iVar7 + 0x580) != '\x04') {
        fStack_3c = fVar2 * (((438.0 / (float)uRam0038804c) / 0.75) / 0.75);
      }
      uStack_40 = 0x3f800000;
      uStack_28 = 0;
      unaff_s4_lo = 0x80;
      uStack_2c = 1;
      unaff_s6_lo = 0;
      uStack_24 = 1;
      uStack_20 = 0;
      fStack_14 = 1.0;
      fStack_10 = 1.0;
      uStack_18 = 0;
      fStack_c = -0.5;
      fStack_8 = -0.5;
      uStack_1c = 0;
      uStack_d0 = 0;
      unaff_s5_lo = unaff_s4_lo;
      if (*(char *)(iVar7 + 0x580) == '\x04') {
        unaff_f22 = 0x3dcccccd;
        in_f21 = 0x43480000;
      }
      else {
        unaff_f22 = 0x3f000000;
        in_f21 = 0x43480000;
      }
      break;
    case 5:
      unaff_s4_lo = 0x100;
      uStack_28 = 0;
      unaff_s6_lo = 0;
      fStack_c = -0.5;
      uStack_60 = uStack_b0;
      fStack_8 = -0.5;
      iStack_54 = 0x3a;
      fStack_44 = 64.0;
      iStack_5c = 0;
      uStack_38 = 0x40000000;
      uStack_50 = 0x100;
      uStack_4c = 0x100;
      uStack_34 = 0x476a6000;
      uStack_48 = 0;
      uStack_30 = 1;
      uStack_2c = 1;
      uStack_24 = 1;
      uStack_40 = 0x3f800000;
      uStack_d0 = 0;
      unaff_f22 = 0x3dcccccd;
      uStack_20 = 0;
      uStack_18 = 0;
      fStack_14 = 1.0;
      in_f21 = 0x43480000;
      fStack_10 = 1.0;
      uStack_1c = 0;
      uStack_58 = uVar9;
      unaff_s5_lo = unaff_s4_lo;
      break;
    case 6:
      uStack_48 = 0;
      uStack_58 = uStack_80;
      iStack_5c = iRam00388044;
      uStack_50 = 0x100;
      uStack_4c = 0x40;
      iStack_54 = iRam00388048;
      uStack_40 = 0x3f800000;
      fStack_44 = ((((float)uRam0038804c * 1.9209821) / 2.0) / (float)uRam0038804c) * 256.0;
      if (iRam00388048 == 0x30) {
        uStack_38 = 0x41a00000;
        uStack_34 = 0x4b742400;
      }
      else {
        uStack_38 = 0x40000000;
        uStack_34 = 0x477de800;
      }
      uStack_30 = 1;
      uStack_2c = 1;
      unaff_s6_lo = 0;
      uStack_28 = 0x373839;
      uStack_24 = 1;
      uStack_20 = 1;
      unaff_s4_lo = 0x40;
      uStack_18 = 0;
      fStack_14 = 1.0;
      fStack_10 = 1.0;
      uStack_1c = 0x393837;
      fStack_c = -0.5;
      fStack_8 = -0.5;
      unaff_f22 = 0x3f000000;
      in_f21 = 0x43160000;
      uStack_d0 = 0;
      fStack_3c = fVar2 * ((438.0 / (float)uRam0038804c) / 0.75);
      unaff_s5_lo = 0x100;
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
      if (bVar1 == 9) {
        iStack_5c = iRam00388048;
        uStack_60 = uVar6;
      }
      else {
        iStack_5c = iRam00388044;
        uStack_60 = uStack_b0;
      }
      uStack_48 = 0;
      uStack_50 = 0x40;
      uStack_4c = 0x40;
      iStack_54 = iRam00388048;
      uStack_40 = 0x3f800000;
      fStack_44 = ((((float)uRam0038804c * 1.9209821) / 2.0) / (float)uRam0038804c) * 64.0;
      fStack_3c = (438.0 / (float)uRam0038804c) / 0.75;
      if (iRam00388048 == 0x30) {
        uStack_38 = 0x41a00000;
        uStack_34 = 0x4b742400;
      }
      else {
        uStack_38 = 0x40000000;
        uStack_34 = 0x477de800;
      }
      uStack_28 = 0;
      unaff_s5_lo = 0x40;
      uStack_2c = 1;
      uStack_24 = 1;
      unaff_f22 = 0x3f000000;
      uStack_30 = 0;
      fStack_14 = 1.0;
      unaff_s6_lo = 0;
      fStack_10 = 1.0;
      fStack_c = -0.5;
      fStack_8 = -0.5;
      uStack_20 = 0;
      uStack_18 = 0;
      in_f21 = 0x43fa0000;
      uStack_1c = 0;
      uStack_d0 = 0;
      if (*(char *)(iVar7 + 0x580) == '\n') {
        unaff_s4_lo = 0x20;
      }
      else {
        unaff_s4_lo = unaff_s5_lo;
        if (*(char *)(iVar7 + 0x580) == '\v') {
          unaff_s4_lo = 0x20;
          unaff_s6_lo = unaff_s4_lo;
        }
      }
      break;
    case 0xc:
      uStack_50 = 0x140;
      uStack_40 = 0x3f800000;
      iStack_54 = 0x3a;
      iStack_5c = 0;
      uStack_58 = uStack_c0;
      uStack_4c = 0xe0;
      uStack_48 = 0;
      uStack_38 = 0x40000000;
      fStack_14 = 1.0;
      fStack_10 = 1.0;
      uStack_34 = 0x477de800;
      fStack_c = -0.5;
      uStack_28 = 0;
      fStack_8 = -0.5;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      uStack_1c = 0;
      uStack_d0 = 0;
      unaff_f22 = 0x3f000000;
      fStack_44 = ((float)uRam0038804c * 1.9209821) / 2.0;
      in_f21 = 0x43fa0000;
      fStack_3c = fVar2 * ((438.0 / (float)uRam0038804c) / 0.75);
      unaff_s4_lo = 0xe0;
      unaff_s5_lo = 0x140;
      unaff_s6_lo = 0;
      break;
    case 0xd:
      uStack_48 = 8;
      uStack_60 = uRam00388034;
      iStack_5c = iRam00388044;
      uStack_40 = 0x3f800000;
      uStack_58 = uRam0038803c;
      uStack_4c = uRam00388050;
      iStack_54 = iRam00388048;
      uStack_50 = uRam0038804c;
      if (iRam00388048 == 0x30) {
        uStack_38 = 0x41a00000;
        uStack_34 = 0x4b742400;
      }
      else {
        uStack_38 = 0x40000000;
        uStack_34 = 0x477de800;
      }
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      fStack_10 = fRam00388094;
      fStack_14 = fRam00388090;
      fStack_c = -(fRam00388090 / 2.0);
      fStack_8 = -(fRam00388094 / 2.0);
      uStack_1c = 0;
      uStack_d0 = 0x34;
      unaff_f22 = 0x3f000000;
      fStack_44 = ((float)uRam0038804c * 1.9209821) / 2.0;
      in_f21 = 0x43fa0000;
      fStack_3c = fVar2 * ((438.0 / (float)uRam0038804c) / 0.75);
      unaff_s4_lo = 0x80;
      unaff_s5_lo = 0x80;
      unaff_s6_lo = 0x78;
    }
  }
LAB_00197c3c:
  Gfx_CopyRenderTarget(param_1,&uStack_60);
  Gfx_SetViewportSize(param_1,uStack_d0,unaff_s6_lo);
  Gfx_SetViewportOffset(param_1,unaff_s5_lo,unaff_s4_lo);
  Gfx_ClearRenderTarget(param_1);
  *(undefined4 *)(iVar7 + 0xa0) = unaff_f22;
  *(undefined4 *)(iVar7 + 0xa4) = in_f21;
  Camera_Init(param_1);
  return uVar5 << 5;
}

// 0x00197e80  size 0x188
void SceneObj_DestroyList(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (iRam00430588 != 0) {
    lVar1 = SceneObj_Next(param_2,0);
    while (lVar1 != 0) {
      __ptmf_scall(lVar1);
      uVar2 = Chunk_GetData(lVar1);
      lVar1 = SceneObj_Next(param_2,uVar2);
    }
  }
  return;
}

