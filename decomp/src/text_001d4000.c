// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001d4000 - 0x001d8000
#include "ghidra_types.h"

// 0x001d4010  size 0x1d0
/* 18 callers */

undefined2 CarDb_FindDefaultPart(undefined2 param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 auStack_70 [24];
  undefined1 uStack_40;
  char cStack_3f;
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
  
  uVar5 = 0xffff;
  if (param_3 == -1) {
    iVar2 = CarDb_GetModel(param_1);
    uStack_38 = *(undefined4 *)(iVar2 + 0x4c);
  }
  else {
    iVar1 = GameState_Elem_3e0_x540(param_3);
    iVar2 = iVar1 + 4;
    uStack_38 = *(undefined4 *)(iVar1 + 0x50);
  }
  puVar4 = &DAT_00319250;
  puVar3 = auStack_70;
  iVar1 = 0x15;
  uStack_34 = *(undefined4 *)(iVar2 + 0x50);
  uStack_40 = *(undefined1 *)(iVar2 + 0x44);
  uStack_30 = *(undefined4 *)(iVar2 + 0x54);
  cStack_3f = *(char *)(iVar2 + 0x45);
  uStack_2c = *(undefined4 *)(iVar2 + 0x58);
  uStack_28 = *(undefined4 *)(iVar2 + 0x5c);
  uStack_24 = *(undefined4 *)(iVar2 + 0x60);
  uStack_20 = *(undefined4 *)(iVar2 + 100);
  uStack_1c = *(undefined4 *)(iVar2 + 0x68);
  uStack_18 = *(undefined4 *)(iVar2 + 0x6c);
  uStack_14 = *(undefined4 *)(iVar2 + 0x70);
  uStack_10 = *(undefined4 *)(iVar2 + 0x74);
  uStack_c = *(undefined4 *)(iVar2 + 0x78);
  uStack_8 = *(undefined4 *)(iVar2 + 0x7c);
  do {
    iVar1 = iVar1 + -1;
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (0 < iVar1);
  param_2 = param_2 & 0xff;
  if (param_2 == 0) {
    switch(uStack_40) {
    case 0:
    case 1:
    case 2:
      uVar5 = 0;
      break;
    case 3:
    case 4:
      uVar5 = 0x12;
      break;
    case 5:
    case 6:
    case 8:
      uVar5 = 9;
      break;
    case 7:
      uVar5 = 0x1b;
    }
  }
  else if (param_2 == 2) {
    switch(uStack_40) {
    case 0:
    case 1:
    case 2:
      uVar5 = 0x2a;
      break;
    case 3:
    case 4:
      uVar5 = 0x3c;
      break;
    case 5:
    case 6:
    case 8:
      uVar5 = 0x33;
      break;
    case 7:
      uVar5 = 0x45;
    }
  }
  else if (param_2 == 1) {
    if (cStack_3f == '\0') {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = 0x24;
    }
  }
  else {
    uVar5 = auStack_70[param_2];
  }
  return uVar5;
}

// 0x001d41e0  size 0x58
undefined4 CarDb_CopyTable(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_60 [24];
  
  puVar3 = auStack_60;
  uVar1 = 0;
  puVar4 = &DAT_003191f0;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (0 < iVar2);
  if ((param_1 & 0xff) < 0x15) {
    uVar1 = auStack_60[param_1 & 0xff];
  }
  return uVar1;
}

// 0x001d4240  size 0x118
void CarDb_GetPartForModel(int param_1,short param_2,ulong param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != -1) {
    if (param_3 == 0xffffffffffffffff) {
      uVar1 = CarDb_GetModelPhysics(param_2);
      param_3 = (ulong)uVar1;
    }
    else {
      iVar4 = GameState_Elem_3e0_x540(param_3);
      param_3 = (ulong)(iVar4 + 0xa0);
    }
  }
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    puVar2 = (undefined1 *)(param_1 + iVar3);
    *puVar2 = 0;
    iVar4 = iVar3 + 7;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
  } while (iVar4 < 0x10);
  *(undefined1 *)(param_1 + iVar4) = 0;
  *(undefined1 *)(param_1 + iVar3 + 8) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  *(undefined1 *)(param_1 + 0x16) = 1;
  if (param_2 == -1) {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0xe) = (char)(int)(-(*(float *)((int)param_3 + 0x188) - 0.5) * 100.0);
  }
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    param_1 = param_1 + 4;
  } while (uVar1 < 9);
  return;
}

// 0x001d4360  size 0x7e8
void Ai_UpdateRivalBehaviour(short param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  long lVar9;
  short sVar10;
  short sVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 auStack_90 [2];
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 auStack_70 [2];
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
  
  iVar2 = RaceCar_Get(param_1);
  iVar3 = GameState_Elem_f0_xcc(param_1);
  sVar11 = -1;
  fVar8 = 1e+08;
  lVar9 = 0;
  *param_2 = '\x04';
  fVar18 = 1e+08;
  param_2[2] = -1;
  param_2[3] = -1;
  fVar16 = 1e+08;
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  fVar17 = 1e+08;
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[8] = -1;
  param_2[9] = -1;
  param_2[10] = -1;
  param_2[0xb] = -1;
  sVar10 = sVar11;
  do {
    if ((((lVar9 != param_1) && (lVar6 = RaceCar_Get(lVar9), lVar6 != 0)) &&
        (*(float *)(iVar2 + 0x1780) != 0.0)) &&
       ((iVar4 = (int)lVar6, *(float *)(iVar4 + 0x1780) != 0.0 &&
        (fVar12 = (float)GameState_Get_14(), *(float *)(iVar2 + 0x1780) < fVar12)))) {
      fVar15 = *(float *)(iVar4 + 0x1780);
      fVar12 = (float)GameState_Get_14();
      if (fVar15 < fVar12) {
        fVar15 = *(float *)(iVar2 + 0x1780) - fVar15;
        if (lVar9 == 0) {
          uVar7 = RaceCar_GetFlags(lVar6);
          if ((uVar7 & 0x80) != 0) {
            uStack_4 = 0x3f800000;
            uStack_14 = 0x3f800000;
            puVar5 = (undefined4 *)phys_sub_001651a0(*(undefined4 *)(iVar2 + 0x154));
            uStack_30 = *puVar5;
            uStack_2c = puVar5[1];
            uStack_28 = puVar5[2];
            uStack_24 = puVar5[3];
            uStack_10 = *(undefined4 *)(iVar4 + 0x16e0);
            uStack_8 = *(undefined4 *)(iVar4 + 0x16e8);
            uStack_4 = *(undefined4 *)(iVar4 + 0x16ec);
            uStack_c = 0;
            Vec3_Sub(auStack_70,&uStack_30,iVar4 + 0x16b0);
            uStack_20 = auStack_70[0];
            uStack_18 = uStack_68;
            uStack_14 = uStack_64;
            uStack_1c = 0;
            Vec3_Sub(&fStack_80,&uStack_10,&uStack_20);
            fVar12 = SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80 + fStack_7c * fStack_7c);
            if (fVar12 < 50.0) {
              fVar13 = (float)Vec3_AngleBetweenNorm(&uStack_10,&uStack_20);
              fVar14 = (float)atan2f((fVar12 * 5.0) / 50.0 + 2.5,fVar12);
              if (((fVar13 * 180.0) / 3.1415927 < (fVar14 * 180.0) / 3.1415927) && (fVar12 < fVar16)
                 ) {
                param_2[8] = '\0';
                param_2[9] = '\0';
                fVar16 = fVar12;
              }
            }
          }
          uStack_34 = 0x3f800000;
          uStack_44 = 0x3f800000;
          puVar5 = (undefined4 *)phys_sub_001651a0(*(undefined4 *)(iVar4 + 0x154));
          uStack_60 = *puVar5;
          uStack_5c = puVar5[1];
          uStack_58 = puVar5[2];
          uStack_54 = puVar5[3];
          uStack_40 = *(undefined4 *)(iVar2 + 0x16e0);
          uStack_38 = *(undefined4 *)(iVar2 + 0x16e8);
          uStack_34 = *(undefined4 *)(iVar2 + 0x16ec);
          uStack_3c = 0;
          Vec3_Sub(auStack_90,&uStack_60,iVar2 + 0x16b0);
          uStack_50 = auStack_90[0];
          uStack_48 = uStack_88;
          uStack_44 = uStack_84;
          uStack_4c = 0;
          Vec3_Sub(&fStack_a0,&uStack_40,&uStack_50);
          fVar12 = SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c);
          if (fVar12 < 50.0) {
            fVar13 = (float)Vec3_AngleBetweenNorm(&uStack_40,&uStack_50);
            fVar14 = (float)atan2f((fVar12 * 5.0) / 50.0 + 2.5,fVar12);
            if (((fVar13 * 180.0) / 3.1415927 < (fVar14 * 180.0) / 3.1415927) && (fVar12 < fVar17))
            {
              param_2[10] = '\0';
              param_2[0xb] = '\0';
              fVar17 = fVar12;
            }
          }
        }
        if (fVar15 < 0.0) {
          if (fVar15 * -1.0 < fVar8) {
            fVar8 = fVar15 * -1.0;
            sVar11 = (short)lVar9;
          }
        }
        else {
          cVar1 = Race_GetWeather();
          if (((cVar1 != '\x01') || (uVar7 = RaceCar_GetFlags(lVar6), (uVar7 & 8) != 0)) &&
             (fVar15 < fVar18)) {
            fVar18 = fVar15;
            sVar10 = (short)lVar9;
          }
        }
      }
    }
    lVar9 = (long)((int)lVar9 + 1);
  } while (lVar9 < 3);
  if ((sVar11 != -1) && (fVar8 < 32.0)) {
    iVar4 = RaceCar_Get();
    if (4.0 <= fVar8) {
      fVar16 = *(float *)(iVar2 + 0x1788) - *(float *)(iVar4 + 0x1788);
      if (0.0 < fVar16) {
        fVar16 = (fVar16 * 1000.0) / 216000.0;
        if (fVar16 == 0.0) {
          fVar16 = 1.0;
        }
        else {
          fVar16 = fVar8 / fVar16;
        }
        if (fVar16 / 60.0 < *(float *)(iVar2 + 0x1788)) {
          *param_2 = '\0';
          *(short *)(param_2 + 2) = sVar11;
          *(float *)(param_2 + 4) = fVar8;
          *(int *)(param_2 + 0xc) = iVar4 + 0x16b0;
        }
      }
    }
    else {
      *param_2 = '\x02';
      *(short *)(param_2 + 2) = sVar11;
      *(float *)(param_2 + 4) = fVar8;
      *(int *)(param_2 + 0xc) = iVar4 + 0x16b0;
    }
  }
  if (((((sVar10 != -1) && ((*(uint *)(iVar3 + 4) & 2) != 0)) &&
       ((*param_2 == '\x04' || ((*param_2 == '\x02' && (*(short *)(param_2 + 2) != 0)))))) &&
      (fVar18 < 32.0)) && (sVar10 == 0)) {
    iVar3 = RaceCar_Get(0);
    if (3.0 <= fVar18) {
      fVar16 = *(float *)(iVar3 + 0x1788) - *(float *)(iVar2 + 0x1788);
      if (0.0 < fVar16) {
        fVar16 = (fVar16 * 1000.0) / 216000.0;
        if (fVar16 == 0.0) {
          fVar16 = 1.0;
        }
        else {
          fVar16 = fVar18 / fVar16;
        }
        if (fVar16 / 60.0 < *(float *)(iVar2 + 0x1788)) {
          *param_2 = '\x01';
          param_2[2] = '\0';
          param_2[3] = '\0';
          *(float *)(param_2 + 4) = fVar18;
          *(int *)(param_2 + 0xc) = iVar3 + 0x16b0;
        }
      }
      else if (-10.0 < fVar16) {
        *param_2 = '\x01';
        param_2[2] = '\0';
        param_2[3] = '\0';
        *(float *)(param_2 + 4) = fVar18;
        *(int *)(param_2 + 0xc) = iVar3 + 0x16b0;
      }
    }
    else {
      *param_2 = '\x03';
      param_2[2] = '\0';
      param_2[3] = '\0';
      *(float *)(param_2 + 4) = fVar18;
      *(int *)(param_2 + 0xc) = iVar3 + 0x16b0;
    }
  }
  return;
}

// 0x001d4b50  size 0xc4
void Ai_DriverTask(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x14);
  lVar1 = RaceScene_IsRunning();
  if (lVar1 == 1) {
    iVar6 = 0;
    do {
      if (*(int *)(iVar5 + 4) != 0) {
        uVar2 = RaceCar_Get(iVar6);
        iVar3 = GameState_Elem_f0_xcc(iVar6);
        if ((((*(uint *)(iVar3 + 4) & 0x20) == 0) &&
            (uVar4 = RaceCar_GetFlags(uVar2), (uVar4 & 0x200) != 0)) &&
           ((*(uint *)(iVar5 + 4) & 1) != 0)) {
          Ai_DriveCar(iVar5 + 4);
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x74;
    } while (iVar6 < 3);
  }
  return;
}

// 0x001d4c40  size 0x84
void Traffic_UpdateAll(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  puVar2 = puVar1;
  do {
    puVar2[1] = 0;
    puVar2[2] = 0xffffffff;
    Traffic_InitSlot(puVar2 + 3);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x1d;
  } while (iVar3 < 3);
  *puVar1 = 0;
  puGpffff8c7c = puVar1;
  Traffic_Spawn(puVar1);
  *(code **)(param_1 + 0x1c) = Ai_DriverTask;
  return;
}

// 0x001d4cd0  size 0x14
void Traffic_Reset(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[0x1e] = 0;
  param_1[0x3b] = 0;
  *param_1 = 0;
  Traffic_Spawn();
  return;
}

// 0x001d4cf0  size 0x224
void Traffic_Spawn(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  float fVar8;
  
  cVar1 = GameState_GetTotalCarCount();
  cVar7 = '\0';
  iVar6 = param_1;
  do {
    *(undefined4 *)(iVar6 + 4) = 0;
    *(undefined4 *)(iVar6 + 8) = 0xffffffff;
    Traffic_InitSlot(iVar6 + 0xc);
    cVar7 = cVar7 + '\x01';
    iVar6 = iVar6 + 0x74;
  } while (cVar7 < '\x03');
  cVar7 = '\0';
  if ('\0' < cVar1) {
    do {
      *(undefined4 *)(param_1 + 4) = 1;
      *(int *)(param_1 + 8) = (int)cVar7;
      uVar5 = GameState_Elem_f0_xcc();
      iVar6 = GameState_Elem_2fa0_x17c(*(undefined1 *)((int)uVar5 + 9));
      iVar3 = GameState_Elem_3e0_x540(*(undefined1 *)((int)uVar5 + 9));
      cVar2 = RaceCtx_GetMode();
      if (cVar2 == '\x06') {
        *(undefined4 *)(param_1 + 0x54) = 0x1800;
      }
      else {
        if (*(char *)(iVar6 + 4) != '\r') {
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x10);
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar6 + 0x18);
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar6 + 0x1c);
        }
        iVar6 = CarRec_GetPartData(uVar5,0xf);
        iVar4 = CarRec_GetPartData(uVar5,0x10);
        iVar6 = iVar6 + iVar4;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 1;
        }
        *(float *)(param_1 + 0x5c) = (float)(iVar6 >> 1) * 0.3 + *(float *)(param_1 + 0x5c) + 0.0;
        *(float *)(param_1 + 0x60) = (float)(iVar6 >> 1) * 0.15 + *(float *)(param_1 + 0x60) + 0.0;
      }
      iVar6 = CarRec_GetPartData(uVar5,9);
      fVar8 = 1.0 / ((float)iVar6 + 1.0) + 0.5;
      if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
      if (*(int *)(iVar3 + 0x8c) == 2) {
        fVar8 = 0.66;
      }
      cVar7 = cVar7 + '\x01';
      *(float *)(param_1 + 0x70) = fVar8;
      param_1 = param_1 + 0x74;
    } while (cVar7 < cVar1);
  }
  return;
}

// 0x001d4f20  size 0x138
void Traffic_InitSlot(undefined4 *param_1)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x13] = 0;
  param_1[9] = 0;
  param_1[0x12] = 0;
  param_1[0x1a] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  uVar1 = GameState_Get_2();
  switch(uVar1) {
  case 0:
    param_1[0x17] = 0x3f800000;
    param_1[0x18] = 0x3f800000;
    break;
  case 1:
    param_1[0x17] = 0x3f8ccccd;
    param_1[0x18] = 0x3f8ccccd;
    break;
  case 2:
    param_1[0x17] = 0x3f8ccccd;
    param_1[0x18] = 0x3f8ccccd;
    break;
  case 3:
    param_1[0x17] = 0x3f8851ec;
    param_1[0x18] = 0x3f8ccccd;
    break;
  case 4:
    param_1[0x17] = 0x3f933333;
    param_1[0x18] = 0x3f933333;
    break;
  case 5:
    param_1[0x17] = 0x3f933333;
    param_1[0x18] = 0x3f933333;
  }
  return;
}

// 0x001d5060  size 0xacc
void Ai_DriveCar(undefined8 param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iStack_254;
  undefined4 uStack_250;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined2 uStack_1fc;
  undefined4 uStack_1f8;
  undefined2 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b0;
  undefined2 uStack_1ac;
  undefined4 uStack_1a8;
  undefined2 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_160;
  undefined2 uStack_15c;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int aiStack_120 [4];
  undefined4 uStack_110;
  undefined2 uStack_10c;
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
  undefined1 uStack_d0;
  undefined2 uStack_ce;
  int iStack_c0;
  float fStack_bc;
  int iStack_b8;
  undefined2 uStack_b4;
  undefined1 auStack_b0 [2];
  short sStack_ae;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
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
  undefined2 uStack_4c;
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
  float fStack_8;
  float fStack_4;
  
  puVar10 = (uint *)param_1;
  uVar1 = (undefined2)puVar10[1];
  if (iGpffff8c5c == 0) {
    puVar11 = (uint *)0x0;
  }
  else {
    puVar11 = *(uint **)((char)puVar10[1] * 4 + iGpffff8c5c + 8);
  }
  uVar7 = RaceCar_Get(uVar1);
  uStack_34 = 0x3f800000;
  iVar14 = (int)uVar7;
  iVar13 = iVar14 + 0x16b0;
  uStack_24 = 0x3f800000;
  uStack_84 = 0x3f800000;
  uStack_64 = 0x3f800000;
  RaceCar_GetTracker(uVar7);
  iVar6 = RaceCar_GetIndex(uVar7);
  uStack_250 = 1;
  fVar15 = (float)Ai_CheckRaceEnd(uVar1);
  lVar8 = GameState_Get_40();
  if (lVar8 == 0) {
    uVar9 = RaceCar_GetFlags(uVar7);
    if ((uVar9 & 4) == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = 1;
    }
  }
  else {
    uVar9 = RaceCar_GetFlags(uVar7);
    if ((uVar9 & 4) == 0) {
      iVar12 = 1;
    }
    else {
      iVar12 = 0;
    }
  }
  if ((*(char *)(iVar14 + 0x811) == '\0') && (*(int *)(iVar14 + 0x814) < 1)) {
    Car_RequestShiftUp(uVar7);
  }
  auStack_b0[0] = 4;
  uStack_ac = 0;
  uStack_a4 = 0;
  sStack_ae = -1;
  uStack_a8 = 0xffff;
  uStack_a6 = 0xffff;
  if ((*(uint *)(iVar6 + 4) & 0x100) == 0) {
    Ai_UpdateRivalBehaviour(uVar1,auStack_b0);
  }
  iStack_254 = 0;
  bVar4 = false;
  fVar16 = (float)RaceCar_GetSpeedKmh(uVar7);
  fStack_8 = fVar16 * fVar16 * 0.004 * (float)puVar10[0x19];
  if (fStack_8 < 10.0) {
    fStack_8 = 10.0;
  }
  uStack_b4 = 3;
  fStack_4 = fStack_8;
  fStack_bc = fStack_8;
  iStack_c0 = iVar13;
  iStack_b8 = iVar12;
  Ai_ThrottleControl(&uStack_160,&iStack_c0);
  uStack_d0 = iVar12 != 0;
  uStack_ce = 3;
  uStack_20 = uStack_130;
  uStack_e0 = uStack_130;
  uStack_4c = uStack_15c;
  uStack_30 = uStack_140;
  uStack_2c = uStack_13c;
  uStack_28 = uStack_138;
  uStack_24 = uStack_134;
  uStack_f0 = uStack_140;
  uStack_ec = uStack_13c;
  uStack_e8 = uStack_138;
  uStack_e4 = uStack_134;
  uStack_1c = uStack_12c;
  uStack_dc = uStack_12c;
  uStack_50 = uStack_160;
  uStack_110 = uStack_160;
  uStack_40 = uStack_150;
  uStack_3c = uStack_14c;
  uStack_38 = uStack_148;
  uStack_34 = uStack_144;
  uStack_100 = uStack_150;
  uStack_fc = uStack_14c;
  uStack_f8 = uStack_148;
  uStack_f4 = uStack_144;
  uStack_10c = uStack_15c;
  uStack_18 = uStack_128;
  uStack_d8 = uStack_128;
  aiStack_120[0] = iVar13;
  if (((fVar15 == -200.0) || (fVar15 == 0.0)) ||
     (((cVar5 = GameState_Get_354(), cVar5 == '\0' || (cVar5 = GameState_Get_354(), cVar5 == '\x05')
       ) && ((uVar9 = RaceScene_Get_38(), uVar9 < 0x1e1 && (iRam0046a590 == 0)))))) {
    fVar16 = *(float *)(iVar14 + 6000) + *(float *)(iVar14 + 0x1778);
    if (2.0 <= fVar16) {
      fVar17 = *(float *)(iVar14 + 0x1760) - 2.0;
      if (fVar17 < fVar16) {
        fVar16 = fVar17;
      }
    }
    else {
      fVar16 = 2.0;
    }
    fVar16 = fVar16 - *(float *)(iVar14 + 6000);
    if (iVar12 != 0) {
      fVar16 = -fVar16;
    }
    Ai_ComputeTargetSpeed(fVar16,0,&uStack_1b0,aiStack_120,1,0,1);
    bVar4 = true;
    uStack_a0 = uStack_1b0;
    uStack_80 = uStack_190;
    uStack_90 = uStack_1a0;
    uStack_8c = uStack_19c;
    uStack_88 = uStack_198;
    uStack_84 = uStack_194;
    uStack_94 = uStack_1a4;
    uStack_7c = uStack_18c;
    uStack_78 = uStack_188;
    uStack_9c = uStack_1ac;
    uStack_98 = uStack_1a8;
    uStack_60 = uStack_170;
    uStack_70 = uStack_180;
    uStack_6c = uStack_17c;
    uStack_68 = uStack_178;
    uStack_64 = uStack_174;
    uStack_5c = uStack_16c;
  }
  else {
    Ai_ComputeTargetSpeed(0,0,&uStack_200,aiStack_120,1,0,0);
    uStack_90 = uStack_1f0;
    uStack_8c = uStack_1ec;
    uStack_88 = uStack_1e8;
    uStack_84 = uStack_1e4;
    uStack_80 = uStack_1e0;
    uStack_94 = uStack_1f4;
    uStack_7c = uStack_1dc;
    uStack_78 = uStack_1d8;
    uStack_a0 = uStack_200;
    uStack_9c = uStack_1fc;
    uStack_98 = uStack_1f8;
    uStack_60 = uStack_1c0;
    uStack_70 = uStack_1d0;
    uStack_6c = uStack_1cc;
    uStack_68 = uStack_1c8;
    uStack_64 = uStack_1c4;
    uStack_5c = uStack_1bc;
  }
  uStack_60 = Ai_BrakeForCorner(fStack_4,uStack_94,(undefined2)uStack_98,iVar12);
  if ((sStack_ae != -1) && (uVar9 = RaceScene_Get_38(), 0x1e0 < uVar9)) {
    iStack_254 = Ai_SteerToLine(&uStack_a0,&uStack_50,iVar13,iVar12,auStack_b0,puVar10[0x14]);
  }
  if (((iStack_254 == 0) && (fVar15 == 1000.0)) && (!bVar4)) {
    Ai_AvoidCars(&uStack_a0,&uStack_50,iVar13,iVar12);
  }
  if ((iStack_254 != 0) || (bVar4)) {
    uStack_250 = 0;
  }
  uVar2 = puVar11[4];
  if ((fVar15 == 0.0) || (uVar3 = *puVar10, (uVar3 & 0x20) != 0)) {
    cVar5 = RaceProg_Get();
    if (cVar5 == '\x02') {
      Ai_InitTuning(param_1,uVar7,puVar11,puVar10 + 3);
    }
    else {
      DriverInput_ClearAxes(puVar11);
    }
  }
  else if (fVar15 == -200.0) {
    fVar15 = (float)RaceCar_GetSpeedKmh(uVar7);
    if (5.0 <= fVar15) {
      if ((*(uint *)(iVar6 + 4) & 4) == 0) {
        Ai_PlanOvertake(0,puVar10 + 2,uVar1,&uStack_50,&uStack_a0,0,1);
      }
      else {
        Ai_PlanOvertake(0,puVar10 + 2,uVar1,&uStack_50,&uStack_a0,0,1);
      }
    }
    else {
      DriverInput_ClearAxes(puVar11);
    }
  }
  else if ((*(uint *)(iVar6 + 4) & 4) == 0) {
    if ((uVar3 & 0x100) == 0) {
      if ((uVar3 & 0x200) == 0) {
        iVar6 = RaceCar_GetTracker(uVar7);
        if (((*(uint *)(iVar6 + 0x60) & 0x20) == 0) || (10.0 <= *(float *)(iVar14 + 0x1788))) {
          if (puVar10[9] != 0) {
            puVar10[9] = puVar10[9] - 1;
          }
        }
        else {
          puVar10[9] = puVar10[9] + 10;
          if (200 < (int)puVar10[9]) {
            if (*(float *)(iVar14 + 0x1764) < 0.5) {
              *puVar10 = *puVar10 | 0x100;
              puVar10[10] = 0;
            }
            else {
              *puVar10 = *puVar10 | 0x200;
              puVar10[10] = 0;
            }
          }
        }
        Ai_PlanOvertake(fVar15,puVar10 + 2,uVar1,&uStack_50,&uStack_a0,auStack_b0,uStack_250);
      }
      else {
        DriverInput_Clear(puVar11);
        uStack_230 = *(undefined4 *)(iVar14 + 0x1700);
        uStack_22c = *(undefined4 *)(iVar14 + 0x1704);
        uStack_228 = *(undefined4 *)(iVar14 + 0x1708);
        uStack_224 = *(undefined4 *)(iVar14 + 0x170c);
        uStack_240 = *(undefined4 *)(iVar14 + 0x16e0);
        uStack_23c = *(undefined4 *)(iVar14 + 0x16e4);
        uStack_238 = *(undefined4 *)(iVar14 + 0x16e8);
        uStack_234 = *(undefined4 *)(iVar14 + 0x16ec);
        fVar15 = (float)Vec3_AngleBetweenNorm(&uStack_230,&uStack_240);
        iVar6 = 0;
        fVar15 = (fVar15 * 180.0) / 3.1415927;
        do {
          if ((fVar15 <= 180.0) && (-180.0 <= fVar15)) goto LAB_001d5a10;
          if (180.0 < fVar15) {
            fVar15 = fVar15 - 360.0;
          }
          else if (fVar15 < -180.0) {
            fVar15 = fVar15 + 360.0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x65);
        fVar15 = 0.0;
LAB_001d5a10:
        if (fVar15 < 0.0) {
          fVar15 = fVar15 * -1.0;
        }
        if (((fVar15 < 20.0) || (0x78 < (int)puVar10[10])) || (*(float *)(iVar14 + 0x1764) < 0.25))
        {
          fVar15 = (float)RaceCar_GetSpeedKmh(uVar7);
          if (fVar15 < 5.0) {
            *puVar10 = *puVar10 & 0xfffffdff;
            puVar10[9] = 0;
            puVar10[10] = 0;
          }
          puVar11[1] = 0x3f800000;
          puVar11[3] = 0x3f800000;
          puVar10[10] = 0xb4;
        }
        else {
          puVar11[4] = puVar11[4] | 0x200;
          puVar11[2] = 0x3f800000;
          puVar10[10] = puVar10[10] + 1;
        }
      }
    }
    else {
      DriverInput_Clear(puVar11);
      uStack_210 = *(undefined4 *)(iVar14 + 0x1700);
      uStack_20c = *(undefined4 *)(iVar14 + 0x1704);
      uStack_208 = *(undefined4 *)(iVar14 + 0x1708);
      uStack_204 = *(undefined4 *)(iVar14 + 0x170c);
      uStack_220 = *(undefined4 *)(iVar14 + 0x16e0);
      uStack_21c = *(undefined4 *)(iVar14 + 0x16e4);
      uStack_218 = *(undefined4 *)(iVar14 + 0x16e8);
      uStack_214 = *(undefined4 *)(iVar14 + 0x16ec);
      fVar15 = (float)Vec3_AngleBetweenNorm(&uStack_210,&uStack_220);
      iVar6 = 0;
      fVar15 = (fVar15 * 180.0) / 3.1415927;
      do {
        if ((fVar15 <= 180.0) && (-180.0 <= fVar15)) goto LAB_001d5878;
        if (180.0 < fVar15) {
          fVar15 = fVar15 - 360.0;
        }
        else if (fVar15 < -180.0) {
          fVar15 = fVar15 + 360.0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x65);
      fVar15 = 0.0;
LAB_001d5878:
      if (fVar15 < 0.0) {
        fVar15 = fVar15 * -1.0;
      }
      if (((fVar15 < 20.0) || (0x78 < (int)puVar10[10])) || (0.75 <= *(float *)(iVar14 + 0x1764))) {
        fVar15 = (float)RaceCar_GetSpeedKmh(uVar7);
        if (fVar15 < 5.0) {
          *puVar10 = *puVar10 & 0xfffffeff;
          puVar10[9] = 0;
          puVar10[10] = 0;
        }
        puVar11[1] = 0x3f800000;
        puVar11[3] = 0x3f800000;
        puVar10[10] = 0xb4;
      }
      else {
        puVar11[4] = puVar11[4] | 0x200;
        puVar11[2] = 0xbf800000;
        puVar10[10] = puVar10[10] + 1;
      }
    }
  }
  else {
    Ai_PlanOvertake(fVar15,puVar10 + 2,uVar1,&uStack_50,&uStack_a0,0,1);
  }
  if ((uVar2 & 0x40) != 0) {
    puVar11[4] = puVar11[4] | 0x40;
  }
  *(undefined1 *)(puVar11 + 5) = 2;
  puVar10[5] = puVar11[2];
  puVar10[3] = *puVar11;
  puVar10[4] = puVar11[1];
  puVar10[6] = puVar11[3];
  puVar10[7] = puVar11[4];
  puVar10[0xc] = *(uint *)(iVar14 + 0x1720);
  puVar10[0xf] = *(uint *)(iVar14 + 0x172c);
  return;
}

// 0x001d5b30  size 0x180
void Ai_InitTuning(uint *param_1,int param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float afStack_20 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  afStack_20[0] = DAT_00319830;
  afStack_20[1] = (float)DAT_00319834;
  afStack_20[2] = (float)DAT_00319838;
  afStack_20[3] = (float)DAT_0031983c;
  uStack_10 = DAT_00319840;
  uStack_c = DAT_00319844;
  if ((param_1[0x14] & 0x200) == 0) {
    *param_3 = 0.0;
  }
  else if ((*param_1 & 0x80) == 0) {
    *param_3 = 1.0;
    if (0.9 < *(float *)(param_2 + 0x7f8) / *(float *)(param_2 + 0x1120)) {
      *param_1 = *param_1 | 0x80;
    }
  }
  else {
    *param_3 = 0.0;
    fVar2 = *(float *)(param_2 + 0x7f8);
    if (fVar2 < 2.1474836e+09) {
      uVar1 = (uint)fVar2;
    }
    else {
      uVar1 = (int)(fVar2 - 2.1474836e+09) | 0x80000000;
    }
    if (fVar2 / *(float *)(param_2 + 0x1120) < afStack_20[(int)uVar1 % 6]) {
      *param_1 = *param_1 & 0xffffff7f;
    }
  }
  if (1.0 < *param_3) {
    *param_3 = 1.0;
  }
  param_3[1] = 1.0;
  param_3[2] = 0.0;
  param_3[3] = 1.0;
  param_3[4] = 0.0;
  return;
}

// 0x001d5cb0  size 0x1438
/* WARNING: Removing unreachable block (ram,0x001d664c) */
/* WARNING: Removing unreachable block (ram,0x001d6670) */
/* WARNING: Removing unreachable block (ram,0x001d6688) */
/* WARNING: Removing unreachable block (ram,0x001d6668) */

void Ai_PlanOvertake(float param_1,int param_2,long param_3,undefined4 *param_4,undefined4 *param_5,
                    long param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float afStack_190 [2];
  float fStack_188;
  undefined4 uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  float afStack_160 [2];
  float fStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined1 uStack_11c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
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
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
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
  float fStack_8;
  undefined4 uStack_4;
  
  pcVar12 = (char *)param_6;
  uStack_20 = param_4[8];
  uStack_1c = param_4[9];
  uStack_18 = param_4[10];
  uStack_14 = param_4[0xb];
  uStack_10 = param_4[0xc];
  uStack_c = param_4[0xd];
  fStack_8 = (float)param_4[0xe];
  uStack_4 = param_4[0xf];
  uStack_90 = *param_5;
  uStack_8c = param_5[1];
  uStack_88 = param_5[2];
  uStack_84 = param_5[3];
  uStack_80 = param_5[4];
  uStack_7c = param_5[5];
  uStack_78 = param_5[6];
  uStack_74 = param_5[7];
  uStack_40 = *param_4;
  uStack_3c = param_4[1];
  uStack_38 = param_4[2];
  uStack_34 = param_4[3];
  uStack_30 = param_4[4];
  uStack_2c = param_4[5];
  uStack_28 = param_4[6];
  uStack_24 = param_4[7];
  uStack_70 = param_5[8];
  uStack_6c = param_5[9];
  uStack_68 = param_5[10];
  uStack_64 = param_5[0xb];
  uStack_60 = param_5[0xc];
  uStack_5c = param_5[0xd];
  uStack_58 = param_5[0xe];
  uStack_54 = param_5[0xf];
  fStack_50 = (float)param_5[0x10];
  uStack_4c = param_5[0x11];
  uStack_48 = param_5[0x12];
  uStack_44 = param_5[0x13];
  if (iGpffff8c5c == 0) {
    pfVar13 = (float *)0x0;
  }
  else {
    pfVar13 = *(float **)((char)param_3 * 4 + iGpffff8c5c + 8);
  }
  uVar8 = RaceCar_Get(param_3);
  iVar14 = (int)uVar8;
  iVar7 = RaceCar_GetIndex(uVar8);
  uStack_c4 = 0x3f800000;
  uStack_b4 = 0x3f800000;
  uStack_104 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  bVar2 = false;
  bVar4 = false;
  bVar3 = true;
  fVar18 = fStack_50;
  fVar22 = fStack_8;
  DriverInput_Clear(pfVar13);
  DriverInput_Clear(&fStack_130);
  *(undefined4 *)(param_2 + 0x4c) = 0;
  if (*(float *)(iVar14 + 0x1788) < 1.0) {
    fVar21 = 0.0046296297;
  }
  else {
    fVar21 = (*(float *)(iVar14 + 0x1788) * 1000.0) / 216000.0;
  }
  uStack_e0 = 0x3e4ccccd;
  uStack_144 = 0x3f800000;
  uStack_110 = uStack_30;
  uStack_10c = uStack_2c;
  uStack_108 = uStack_28;
  uStack_104 = uStack_24;
  uStack_140 = *(undefined4 *)(iVar14 + 0x16d0);
  uStack_138 = *(undefined4 *)(iVar14 + 0x16d8);
  uStack_134 = *(undefined4 *)(iVar14 + 0x16dc);
  uStack_13c = 0;
  Vec3_Sub(afStack_160,&uStack_110,iVar14 + 0x16b0);
  fStack_150 = afStack_160[0];
  fStack_148 = fStack_158;
  uStack_144 = uStack_154;
  fStack_14c = 0.0;
  fVar16 = (float)Vec3_AngleBetweenNorm(&uStack_140,&fStack_150);
  fStack_e8 = (fVar16 * 180.0) / 3.1415927;
  fStack_ec = SQRT(fStack_148 * fStack_148 + fStack_150 * fStack_150 + fStack_14c * fStack_14c);
  fVar16 = (float)atan2f(fStack_148,fStack_150);
  fStack_f0 = (fVar16 * 180.0) / 3.1415927;
  fVar16 = (float)atan2f(uStack_e0,fStack_ec);
  uStack_a0 = 0x3dcccccd;
  uStack_174 = 0x3f800000;
  fStack_e4 = (fVar16 * 180.0) / 3.1415927;
  uStack_d0 = uStack_80;
  uStack_cc = uStack_7c;
  uStack_c8 = uStack_78;
  uStack_c4 = uStack_74;
  uStack_170 = *(undefined4 *)(iVar14 + 0x16d0);
  uStack_168 = *(undefined4 *)(iVar14 + 0x16d8);
  uStack_164 = *(undefined4 *)(iVar14 + 0x16dc);
  uStack_16c = 0;
  Vec3_Sub(afStack_190,&uStack_d0,iVar14 + 0x16b0);
  fStack_180 = afStack_190[0];
  fStack_178 = fStack_188;
  uStack_174 = uStack_184;
  fStack_17c = 0.0;
  fVar16 = (float)Vec3_AngleBetweenNorm(&uStack_170,&fStack_180);
  fStack_a8 = (fVar16 * 180.0) / 3.1415927;
  fStack_ac = SQRT(fStack_178 * fStack_178 + fStack_180 * fStack_180 + fStack_17c * fStack_17c);
  fVar16 = (float)atan2f(fStack_178,fStack_180);
  fStack_b0 = (fVar16 * 180.0) / 3.1415927;
  fVar16 = (float)atan2f(uStack_a0,fStack_ac);
  iVar11 = 0;
  fStack_a4 = (fVar16 * 180.0) / 3.1415927;
  fVar16 = fStack_b0 - *(float *)(iVar14 + 0x1718);
  do {
    if ((fVar16 <= 180.0) && (-180.0 <= fVar16)) break;
    if (180.0 < fVar16) {
      fVar16 = fVar16 - 360.0;
    }
    else if (fVar16 < -180.0) {
      fVar16 = fVar16 + 360.0;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x65);
  iVar11 = 0;
  fVar16 = fStack_b0 - *(float *)(iVar14 + 0x171c);
  do {
    if ((fVar16 <= 180.0) && (-180.0 <= fVar16)) goto LAB_001d6158;
    if (180.0 < fVar16) {
      fVar16 = fVar16 - 360.0;
    }
    else if (fVar16 < -180.0) {
      fVar16 = fVar16 + 360.0;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x65);
  fVar16 = 0.0;
LAB_001d6158:
  if ((*(uint *)(param_2 + 0x48) & 0x400) == 0) {
    if ((*(uint *)(param_2 + 0x48) & 0x800) == 0) {
      fVar23 = 12.0;
    }
    else {
      fVar23 = 10.0;
    }
  }
  else {
    fVar23 = 14.0;
  }
  if (fVar18 == 0.0) {
    fVar18 = 1000.0;
  }
  if ((param_6 != 0) && (param_3 != 0)) {
    iVar11 = RaceCar_Get(0);
    if ((*(uint *)(param_2 + 0x48) & 8) == 0) {
      if (((*(uint *)(param_2 + 0x48) & 0x10) != 0) && (cVar5 = Race_GetWeather(), cVar5 == '\x01'))
      {
        cVar5 = *pcVar12;
        if ((((cVar5 == '\0') || (cVar5 == '\x02')) && (*(short *)(pcVar12 + 2) == 0)) ||
           ((cVar5 == '\x04' && (0.0 < *(float *)(iVar11 + 0x1780) - *(float *)(iVar14 + 0x1780)))))
        {
          uVar9 = RaceCar_GetFlags(uVar8);
          if (((uVar9 & 8) != 0) && (uVar9 = RaceCar_GetFlags(uVar8), (uVar9 & 0x10) != 0)) {
            RaceCar_ClearFlags(uVar8,8);
            RaceCar_SetFlags(uVar8,0x40);
          }
        }
        else {
          RaceCar_SetFlags(uVar8,8);
          RaceCar_SetFlags(uVar8,0x20);
        }
      }
LAB_001d6270:
      uVar10 = *(uint *)(param_2 + 0x48);
    }
    else {
      if (((*(short *)(pcVar12 + 10) == -1) || (*pcVar12 != '\0')) || (*(short *)(pcVar12 + 2) != 0)
         ) {
        uVar9 = RaceCar_GetFlags(uVar8);
        if (((uVar9 & 0x80) != 0) && (uVar9 = RaceCar_GetFlags(uVar8), (uVar9 & 0x10) != 0)) {
          RaceCar_ClearFlags(uVar8,0x80);
          uVar9 = RaceCar_GetFlags(uVar8);
          if ((uVar9 & 8) == 0) {
            RaceCar_SetFlags(uVar8,0x40);
          }
        }
        goto LAB_001d6270;
      }
      RaceCar_SetFlags(uVar8,0x80);
      uVar9 = RaceCar_GetFlags(uVar8);
      if ((uVar9 & 0x10) != 0) goto LAB_001d6270;
      RaceCar_SetFlags(uVar8,0x20);
      uVar10 = *(uint *)(param_2 + 0x48);
    }
    if ((uVar10 & 4) == 0) {
      if ((uVar10 & 2) != 0) {
        if (*(int *)(param_2 + 0x24) == 0) {
          if ((*(short *)(pcVar12 + 8) == -1) ||
             (*(float *)(iVar14 + 0x1780) - *(float *)(iVar11 + 0x1780) <= 0.0)) {
            if (*(float *)(iVar14 + 0x8a8) != 1.0) {
              *(undefined4 *)(iVar14 + 0x8a8) = 0x3f800000;
            }
          }
          else {
            *(undefined4 *)(iVar14 + 0x8a8) = 0x3f000000;
            *(undefined4 *)(param_2 + 0x24) = 0x78;
          }
        }
        else {
          *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
      }
    }
    else if (*(int *)(param_2 + 0x24) == 0) {
      if ((*(short *)(pcVar12 + 8) == -1) ||
         (*(float *)(iVar14 + 0x1780) - *(float *)(iVar11 + 0x1780) <= 0.0)) {
        if (*(float *)(iVar14 + 0x8a8) != 1.0) {
          *(undefined4 *)(iVar14 + 0x8a8) = 0x3f800000;
        }
      }
      else {
        *(undefined4 *)(iVar14 + 0x8a8) = 0x40000000;
        *(undefined4 *)(param_2 + 0x24) = 0x78;
      }
    }
    else {
      *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
    }
  }
  if (fVar22 == 1000.0) {
    fVar20 = 1.0;
  }
  else {
    fVar20 = 5.0;
  }
  if ((param_3 != 0) && (param_6 != 0)) {
    if ((*(uint *)(param_2 + 0x48) & 0x20) == 0) {
      if ((((*(uint *)(param_2 + 0x48) & 0x40) != 0) && (*pcVar12 == '\x01')) &&
         (*(short *)(pcVar12 + 2) == 0)) {
        fVar20 = fVar20 * 1.5;
      }
    }
    else if ((*pcVar12 == '\x01') && (*(short *)(pcVar12 + 2) == 0)) {
      fVar20 = fVar20 * 0.5;
    }
  }
  iVar11 = 0;
  fVar19 = fStack_f0 - *(float *)(iVar14 + 0x1718);
  do {
    if ((fVar19 <= 180.0) && (-180.0 <= fVar19)) goto LAB_001d6580;
    if (180.0 < fVar19) {
      fVar19 = fVar19 - 360.0;
    }
    else if (fVar19 < -180.0) {
      fVar19 = fVar19 + 360.0;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x65);
  fVar19 = 0.0;
LAB_001d6580:
  fVar15 = *(float *)(iVar14 + 0x1720);
  fVar20 = (fVar19 / (fStack_ec / fVar21)) * fVar20;
  if (((fVar15 <= fVar20) && (fVar20 < 0.0)) || ((fVar20 <= fVar15 && (0.0 < fVar20)))) {
    bVar2 = true;
  }
  if (((0.0 < fVar22) && (0.0 < fVar15)) || ((fVar22 < 0.0 && (fVar15 < 0.0)))) {
    bVar4 = true;
  }
  if (param_1 == 1000.0) {
    fVar21 = (float)fabsf(fVar22);
    if (fVar21 < 30.0) {
      fVar21 = 30.0;
    }
    if (param_3 != 0) {
      iVar11 = RaceCar_Get(0);
      fVar20 = *(float *)(iVar14 + 0x1780) - *(float *)(iVar11 + 0x1780);
      if ((*(uint *)(iVar7 + 4) & 0x100) == 0) {
        cVar5 = GameState_Get_2();
        if (cVar5 == '\0') {
          fVar19 = *(float *)(param_2 + 0x50);
        }
        else {
          fVar19 = *(float *)(param_2 + 0x54);
        }
        fVar23 = fVar23 + fVar19;
        if ((*(uint *)(param_2 + 0x48) & 0x2000) == 0) {
          if ((fVar20 < 4.0) && (fVar23 < 12.0)) {
            fVar23 = 12.0;
          }
        }
        else if (fVar20 < -8.0) {
          fVar20 = 1.0 - fVar20 / 30.0;
          if (fVar23 < 14.0) {
            fVar23 = 14.0;
          }
          if (1.5 < fVar20) {
            fVar20 = 1.5;
          }
          *(float *)(iVar14 + 0x8a8) = fVar20;
        }
        else if (*(float *)(iVar14 + 0x8a8) != 1.0) {
          *(undefined4 *)(iVar14 + 0x8a8) = 0x3f800000;
        }
      }
      else {
        fVar23 = fVar23 + *(float *)(param_2 + 0x50);
      }
    }
    if (fVar23 < 10.0) {
      fVar23 = 10.0;
    }
    param_1 = fVar23 * SQRT(fVar21);
  }
  else {
    bVar3 = false;
  }
  cVar5 = RaceCtx_GetMode();
  if (((cVar5 == '\x06') || (cVar5 = GameState_Get_0(), cVar5 == '\x03')) ||
     (cVar5 = GameState_Get_0(), cVar5 == '\x04')) {
    uVar8 = newlib_sub_0012f600(fStack_a8 * 3.1415927);
    uVar8 = __divdf3(uVar8,0x4066800000000000);
    uVar17 = maybe___extendsfdf2(uVar8);
    uVar17 = cosf(uVar17);
    fVar21 = (float)fabsf(uVar17);
    fVar21 = 1.0 - fVar21;
    if (fVar21 < 0.5) {
      fVar21 = 0.5;
    }
    param_1 = param_1 * fVar21;
  }
  bVar1 = false;
  iVar7 = 0;
  fVar21 = fStack_f0 - *(float *)(iVar14 + 0x171c);
  fVar20 = fStack_f0 - *(float *)(iVar14 + 0x1718);
  do {
    if ((fVar21 <= 180.0) && (-180.0 <= fVar21)) goto LAB_001d67a0;
    if (180.0 < fVar21) {
      fVar21 = fVar21 - 360.0;
    }
    else if (fVar21 < -180.0) {
      fVar21 = fVar21 + 360.0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x65);
  fVar21 = 0.0;
LAB_001d67a0:
  fVar21 = (float)fabsf(fVar21);
  iVar7 = 0;
  do {
    if ((fVar20 <= 180.0) && (-180.0 <= fVar20)) goto LAB_001d6828;
    if (180.0 < fVar20) {
      fVar20 = fVar20 - 360.0;
    }
    else if (fVar20 < -180.0) {
      fVar20 = fVar20 + 360.0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x65);
  fVar20 = 0.0;
LAB_001d6828:
  fVar20 = (float)fabsf(fVar20);
  if (bVar2) {
    fabsf(((*(float *)(iVar14 + 0x1788) * *(float *)(iVar14 + 0x1788)) / (fVar23 * fVar23)) /
          fStack_8);
    fVar23 = *(float *)(iVar14 + 0x1788);
  }
  else {
    fVar23 = *(float *)(iVar14 + 0x1788);
  }
  if (40.0 < fVar23) {
    fVar23 = 0.0;
    uVar6 = GameState_Get_2();
    switch(uVar6) {
    case 0:
      fVar23 = 0.2;
      iVar7 = *(int *)(iVar14 + 0xccc);
      goto LAB_001d6e3c;
    case 1:
      fVar23 = 0.25;
      break;
    case 2:
      fVar23 = 0.25;
      break;
    case 3:
      fVar23 = 0.25;
      break;
    case 4:
      fVar23 = 0.25;
      break;
    case 5:
      fVar23 = 0.25;
    }
    iVar7 = *(int *)(iVar14 + 0xccc);
LAB_001d6e3c:
    if (iVar7 == 0) {
      fVar15 = (float)fabsf(*(undefined4 *)(iVar14 + 0x514));
      fVar19 = (float)fabsf(*(undefined4 *)(iVar14 + 0x654));
    }
    else if (iVar7 == 1) {
      fVar15 = (float)fabsf(*(undefined4 *)(iVar14 + 0x514));
      fVar19 = (float)fabsf(*(undefined4 *)(iVar14 + 0x654));
    }
    else {
      fVar15 = (float)fabsf(*(undefined4 *)(iVar14 + 0x514));
      fVar19 = (float)fabsf(*(undefined4 *)(iVar14 + 0x654));
    }
    if ((fVar23 < fVar15) || (fVar23 < fVar19)) {
      bVar1 = true;
    }
  }
  if (!bVar3) {
    if (*(float *)(iVar14 + 0x1788) < param_1) {
      if ((((*(float *)(iVar14 + 0x1788) <= 30.0) || (fVar21 <= *(float *)(param_2 + 0x38))) ||
          (fVar23 = (float)fabsf(fStack_8), 25.0 <= fVar23)) ||
         (fVar23 = (float)fabsf(fVar18), 25.0 <= fVar23)) {
        fStack_130 = *(float *)(param_2 + 4);
        fStack_12c = 0.0;
      }
      else {
        fStack_130 = *(float *)(param_2 + 4) - 0.016667;
        fStack_12c = 0.0;
      }
    }
    else {
      fStack_130 = 0.0;
      fStack_12c = 1.0;
    }
    goto LAB_001d69ec;
  }
  if (bVar2) {
    fStack_130 = 1.0;
    fStack_12c = 0.0;
  }
  else if (*(float *)(iVar14 + 0x1788) < param_1) {
    if ((*(float *)(iVar14 + 0x1788) <= 30.0) || (fVar20 <= *(float *)(param_2 + 0x3c))) {
LAB_001d68ec:
      if (bVar1) {
        fStack_130 = *(float *)(param_2 + 4) - 0.016667;
      }
      else {
        fStack_130 = *(float *)(param_2 + 4) + 0.033334;
      }
      fStack_12c = 0.0;
    }
    else {
      fVar23 = (float)fabsf(fStack_8);
      if ((fVar23 < 25.0) || (fVar23 = (float)fabsf(fVar18), fVar23 < 25.0)) {
        fStack_130 = *(float *)(param_2 + 4);
      }
      else {
        if (((*(uint *)(param_2 + 0x48) & 0x1000) == 0) || (fStack_8 == 1000.0)) goto LAB_001d68ec;
        fStack_130 = *(float *)(param_2 + 4);
      }
      fStack_130 = fStack_130 - 0.016667;
      fStack_12c = 0.0;
    }
  }
  else {
    fStack_130 = 0.0;
    fStack_12c = *(float *)(param_2 + 100) *
                 (SQRT(*(float *)(iVar14 + 0x1788) * *(float *)(iVar14 + 0x1788) - param_1 * param_1
                      ) / 100.0) * 1.1 * *(float *)(param_2 + 0x60);
    if (*(float *)(param_2 + 8) < 0.15000299) {
      fVar23 = *(float *)(param_2 + 8) + 0.050000995;
      if (fVar23 <= fStack_12c) {
        fStack_12c = fVar23;
      }
    }
    else {
    }
  }
  if (fStack_12c == 0.0) {
    *(undefined4 *)(param_2 + 0x58) = 0;
  }
LAB_001d69ec:
  if (((15.0 <= fVar21) &&
      ((fVar23 = (float)fabsf(fStack_8), fVar23 < 25.0 ||
       (fVar18 = (float)fabsf(fVar18), fVar18 < 25.0)))) || (30.0 <= fVar21)) {
    fVar18 = (float)sinf(*(undefined4 *)(iVar14 + 0x1728));
    fVar18 = (float)fabsf(*(float *)(iVar14 + 0x1788) * fVar18);
    if ((40.0 < fVar18) && ((fVar22 == 1000.0 || (bVar4)))) {
      uVar17 = cosf(*(undefined4 *)(iVar14 + 0x1728));
      fVar18 = (float)fabsf(uVar17);
      if (40.0 <= *(float *)(iVar14 + 0x1788) * (1.0 - fVar18)) {
        if (*(float *)(param_2 + 0x38) < fVar21) {
          fStack_124 = *(float *)(param_2 + 0x10) + 0.083335;
        }
        else {
          fStack_124 = *(float *)(param_2 + 0x10);
        }
      }
      else {
        fStack_124 = *(float *)(param_2 + 0x10);
      }
    }
  }
  fStack_128 = ((fVar16 / *(float *)(iVar14 + 0x1710)) * 2.0 - 0.0) * 2.5;
  if (fStack_128 <= 1.0) {
    if (fStack_128 < -1.0) {
      fStack_128 = -1.0;
    }
  }
  else {
    fStack_128 = 1.0;
  }
  *(float *)(param_2 + 0x38) = fVar21;
  *(float *)(param_2 + 0x3c) = fVar20;
  Input_ApplyCurve(&fStack_130);
  Input_ClampPositive(&fStack_130);
  *pfVar13 = fStack_130;
  pfVar13[1] = fStack_12c;
  pfVar13[2] = fStack_128;
  pfVar13[3] = fStack_124;
  pfVar13[4] = fStack_120;
  *(undefined1 *)(pfVar13 + 5) = uStack_11c;
  *(float *)(param_2 + 0x40) = fStack_e8;
  *(float *)(param_2 + 0x44) = fStack_a8;
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
  }
  return;
}

// 0x001d7100  size 0x64
void AiLine_GetPoint(undefined4 *param_1,ulong param_2)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_2 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x001d713c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_00364160)[(int)param_2])();
    return;
  }
  *param_1 = uStack_10;
  param_1[1] = uStack_c;
  param_1[2] = uStack_8;
  param_1[3] = uStack_4;
  return;
}

// 0x001d7dc0  size 0x50
void AiLine_GetDirection(undefined4 *param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  AiLine_GetPoint(&uStack_20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = 0x3f800000;
  return;
}

// 0x001d7e10  size 0x1d0
void AiLine_BuildFrame(float param_1,undefined4 *param_2,uint param_3,short param_4,long param_5)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  short *psVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  uStack_54 = 0x3f800000;
  iVar2 = (param_3 & 0xffff) * 4;
  psVar4 = *(short **)(*(int *)(iGpffff8b40 + 4) + iVar2);
  psVar4 = psVar4 + *psVar4 * 0x10 + param_4 * 6 + 0x3e;
  uStack_10 = *(undefined4 *)psVar4;
  uStack_c = *(undefined4 *)(psVar4 + 2);
  uStack_8 = *(undefined4 *)(psVar4 + 4);
  uStack_4 = 0x3f800000;
  psVar4 = *(short **)(*(int *)(iGpffff8b40 + 4) + iVar2);
  sVar1 = *psVar4;
  psVar4 = psVar4 + sVar1 * 0x14 + sVar1 * 2 + param_4 * 6 + 0x3e;
  uStack_20 = *(undefined4 *)psVar4;
  uStack_1c = *(undefined4 *)(psVar4 + 2);
  uStack_18 = *(undefined4 *)(psVar4 + 4);
  uStack_14 = 0x3f800000;
  if (param_5 == 0) {
    vu0math_sub_00132b50(auStack_50,&uStack_20,&uStack_10);
    vu0math_sub_001328b0(auStack_30,auStack_50);
    vu0math_sub_00132af0(param_1,auStack_30,auStack_30);
    vu0math_sub_00132b70(&uStack_60,&uStack_10,auStack_30);
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(*(int *)(iGpffff8b40 + 4) + iVar2) + 0x7c + param_4 * 0x20);
    uStack_40 = *puVar3;
    uStack_3c = puVar3[1];
    uStack_38 = puVar3[2];
    uStack_34 = 0x3f800000;
    if (param_1 < 0.0) {
      param_1 = -param_1;
      vu0math_sub_00132b50(auStack_50,&uStack_10,&uStack_40);
    }
    else {
      vu0math_sub_00132b50(auStack_50,&uStack_20,&uStack_40);
    }
    vu0math_sub_001328b0(auStack_30,auStack_50);
    vu0math_sub_00132af0(param_1,auStack_30,auStack_30);
    vu0math_sub_00132b70(&uStack_60,&uStack_40,auStack_30);
  }
  *param_2 = uStack_60;
  param_2[1] = uStack_5c;
  param_2[2] = uStack_58;
  param_2[3] = uStack_54;
  return;
}

// 0x001d7fe0  size 0x10c
undefined4 Ai_CheckRaceEnd(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x447a0000;
  iVar2 = GameState_Elem_f0_xcc();
  uVar3 = RaceCar_Get(param_1);
  if ((*(uint *)(iVar2 + 4) & 4) == 0) {
    uVar1 = RaceProg_Get();
    switch(uVar1) {
    case 1:
      uVar5 = 0;
      break;
    case 2:
      uVar5 = 0;
      break;
    case 3:
      uVar4 = RaceCar_GetFlags(uVar3);
      if ((uVar4 & 0x800) == 0) {
        uVar5 = 0x447a0000;
      }
      else {
        uVar5 = 0;
      }
      break;
    case 4:
      uVar5 = 0xc3480000;
      break;
    case 5:
    case 6:
      uVar5 = 0;
      break;
    case 7:
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0x42200000;
  }
  return uVar5;
}

