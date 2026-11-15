// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001d4000 - 0x001d8000
#include "ghidra_types.h"

// 0x001d4010  size 0x1d0
/* 18 callers */

undefined2 CarDb_FindDefaultPart(undefined2 param_1,uint param_2,long param_3)

{
  RacerState *pRVar1;
  uint *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 auStack_70 [24];
  byte bStack_40;
  uchar uStack_3f;
  uint uStack_38;
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
  
  uVar6 = 0xffff;
  if (param_3 == -1) {
    puVar2 = (uint *)CarDb_GetModel(param_1);
    uStack_38 = puVar2[0x13];
  }
  else {
    pRVar1 = GameState_Elem_3e0_x540((int)param_3);
    puVar2 = &pRVar1->unk_04;
    uStack_38 = pRVar1->unk_50;
  }
  puVar5 = &DAT_00319250;
  puVar4 = auStack_70;
  iVar3 = 0x15;
  uStack_34 = puVar2[0x14];
  bStack_40 = *(byte *)(puVar2 + 0x11);
  uStack_30 = puVar2[0x15];
  uStack_3f = *(uchar *)((int)puVar2 + 0x45);
  uStack_2c = puVar2[0x16];
  uStack_28 = puVar2[0x17];
  uStack_24 = puVar2[0x18];
  uStack_20 = puVar2[0x19];
  uStack_1c = puVar2[0x1a];
  uStack_18 = puVar2[0x1b];
  uStack_14 = puVar2[0x1c];
  uStack_10 = puVar2[0x1d];
  uStack_c = puVar2[0x1e];
  uStack_8 = puVar2[0x1f];
  do {
    iVar3 = iVar3 + -1;
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (0 < iVar3);
  param_2 = param_2 & 0xff;
  if (param_2 == 0) {
    if (bStack_40 < 9) {
                    /* WARNING: Switch is manually overridden */
      switch(bStack_40) {
      default:
        uVar6 = 0;
        break;
      case 3:
      case 4:
        uVar6 = 0x12;
        break;
      case 5:
      case 6:
        uVar6 = 9;
        break;
      case 7:
        uVar6 = 0x1b;
      }
    }
  }
  else if (param_2 == 2) {
    if (bStack_40 < 9) {
                    /* WARNING: Switch is manually overridden */
      switch(bStack_40) {
      default:
        uVar6 = 0x2a;
        break;
      case 3:
      case 4:
        uVar6 = 0x3c;
        break;
      case 5:
      case 6:
        uVar6 = 0x33;
        break;
      case 7:
        uVar6 = 0x45;
      }
    }
  }
  else if (param_2 == 1) {
    if (uStack_3f == '\0') {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = 0x24;
    }
  }
  else {
    uVar6 = auStack_70[param_2];
  }
  return uVar6;
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
void CarDb_GetPartForModel(int param_1,short param_2,undefined1 *param_3)

{
  RacerState *pRVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != -1) {
    if (param_3 == (undefined1 *)0xffffffff) {
      param_3 = (undefined1 *)CarDb_GetModelPhysics(param_2);
    }
    else {
      pRVar1 = GameState_Elem_3e0_x540((int)param_3);
      param_3 = &pRVar1->field_0xa0;
    }
  }
  iVar5 = 0;
  do {
    iVar4 = iVar5;
    puVar2 = (undefined1 *)(param_1 + iVar4);
    *puVar2 = 0;
    iVar5 = iVar4 + 7;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
  } while (iVar5 < 0x10);
  *(undefined1 *)(param_1 + iVar5) = 0;
  *(undefined1 *)(param_1 + iVar4 + 8) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  *(undefined1 *)(param_1 + 0x16) = 1;
  if (param_2 == -1) {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0xe) = (char)(int)(-(*(float *)(param_3 + 0x188) - 0.5) * 100.0);
  }
  uVar3 = 0;
  do {
    uVar3 = uVar3 + 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    param_1 = param_1 + 4;
  } while (uVar3 < 9);
  return;
}

// 0x001d4360  size 0x7e8
void Ai_UpdateRivalBehaviour(short param_1,char *param_2)

{
  char cVar1;
  RaceCar *pRVar2;
  RaceEntrySetup *pRVar3;
  undefined4 *puVar4;
  RaceCar *pRVar5;
  ulong uVar6;
  float fVar7;
  long lVar8;
  short sVar9;
  short sVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
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
  uint auStack_40 [3];
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint auStack_10 [3];
  uint uStack_4;
  
  pRVar2 = RaceCar_Get((int)param_1);
  pRVar3 = GameState_Elem_f0_xcc((int)param_1);
  sVar10 = -1;
  fVar7 = 1e+08;
  lVar8 = 0;
  *param_2 = '\x04';
  fVar17 = 1e+08;
  param_2[2] = -1;
  param_2[3] = -1;
  fVar15 = 1e+08;
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  fVar16 = 1e+08;
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[8] = -1;
  param_2[9] = -1;
  param_2[10] = -1;
  param_2[0xb] = -1;
  sVar9 = sVar10;
  do {
    if ((((lVar8 != param_1) && (pRVar5 = RaceCar_Get((int)lVar8), pRVar5 != (RaceCar *)0x0)) &&
        (pRVar2->trackPos != 0.0)) &&
       ((pRVar5->trackPos != 0.0 && (fVar11 = (float)GameState_Get_14(), pRVar2->trackPos < fVar11))
       )) {
      fVar14 = pRVar5->trackPos;
      fVar11 = (float)GameState_Get_14();
      if (fVar14 < fVar11) {
        fVar14 = pRVar2->trackPos - fVar14;
        if (lVar8 == 0) {
          uVar6 = RaceCar_GetFlags(pRVar5);
          if ((uVar6 & 0x80) != 0) {
            uStack_4 = 0x3f800000;
            uStack_14 = 0x3f800000;
            puVar4 = (undefined4 *)PhysBody_GetWorldMatrix(pRVar2->unk_0154);
            uStack_30 = *puVar4;
            uStack_2c = puVar4[1];
            uStack_28 = puVar4[2];
            uStack_24 = puVar4[3];
            auStack_10[0] = pRVar5->unk_16e0;
            auStack_10[2] = pRVar5->unk_16e8;
            uStack_4 = pRVar5->unk_16ec;
            auStack_10[1] = 0;
            Vec3_Sub(auStack_70,&uStack_30,&pRVar5->field_0x16b0);
            uStack_20 = auStack_70[0];
            uStack_18 = uStack_68;
            uStack_14 = uStack_64;
            uStack_1c = 0;
            Vec3_Sub(&fStack_80,auStack_10,&uStack_20);
            fVar11 = SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80 + fStack_7c * fStack_7c);
            if (fVar11 < 50.0) {
              fVar12 = (float)Vec3_AngleBetweenNorm(auStack_10,&uStack_20);
              fVar13 = (float)atan2f((fVar11 * 5.0) / 50.0 + 2.5,fVar11);
              if (((fVar12 * 180.0) / 3.1415927 < (fVar13 * 180.0) / 3.1415927) && (fVar11 < fVar15)
                 ) {
                param_2[8] = '\0';
                param_2[9] = '\0';
                fVar15 = fVar11;
              }
            }
          }
          uStack_34 = 0x3f800000;
          uStack_44 = 0x3f800000;
          puVar4 = (undefined4 *)PhysBody_GetWorldMatrix(pRVar5->unk_0154);
          uStack_60 = *puVar4;
          uStack_5c = puVar4[1];
          uStack_58 = puVar4[2];
          uStack_54 = puVar4[3];
          auStack_40[0] = pRVar2->unk_16e0;
          auStack_40[2] = pRVar2->unk_16e8;
          uStack_34 = pRVar2->unk_16ec;
          auStack_40[1] = 0;
          Vec3_Sub(auStack_90,&uStack_60,&pRVar2->field_0x16b0);
          uStack_50 = auStack_90[0];
          uStack_48 = uStack_88;
          uStack_44 = uStack_84;
          uStack_4c = 0;
          Vec3_Sub(&fStack_a0,auStack_40,&uStack_50);
          fVar11 = SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c);
          if (fVar11 < 50.0) {
            fVar12 = (float)Vec3_AngleBetweenNorm(auStack_40,&uStack_50);
            fVar13 = (float)atan2f((fVar11 * 5.0) / 50.0 + 2.5,fVar11);
            if (((fVar12 * 180.0) / 3.1415927 < (fVar13 * 180.0) / 3.1415927) && (fVar11 < fVar16))
            {
              param_2[10] = '\0';
              param_2[0xb] = '\0';
              fVar16 = fVar11;
            }
          }
        }
        if (fVar14 < 0.0) {
          if (fVar14 * -1.0 < fVar7) {
            fVar7 = fVar14 * -1.0;
            sVar10 = (short)lVar8;
          }
        }
        else {
          cVar1 = Race_GetWeather();
          if (((cVar1 != '\x01') || (uVar6 = RaceCar_GetFlags(pRVar5), (uVar6 & 8) != 0)) &&
             (fVar14 < fVar17)) {
            fVar17 = fVar14;
            sVar9 = (short)lVar8;
          }
        }
      }
    }
    lVar8 = (long)((int)lVar8 + 1);
  } while (lVar8 < 3);
  if ((sVar10 != -1) && (fVar7 < 32.0)) {
    pRVar5 = RaceCar_Get((int)sVar10);
    if (4.0 <= fVar7) {
      fVar15 = (float)pRVar2->unk_1788 - (float)pRVar5->unk_1788;
      if (0.0 < fVar15) {
        fVar15 = (fVar15 * 1000.0) / 216000.0;
        if (fVar15 == 0.0) {
          fVar15 = 1.0;
        }
        else {
          fVar15 = fVar7 / fVar15;
        }
        if (fVar15 / 60.0 < (float)pRVar2->unk_1788) {
          *param_2 = '\0';
          *(short *)(param_2 + 2) = sVar10;
          *(float *)(param_2 + 4) = fVar7;
          *(undefined1 **)(param_2 + 0xc) = &pRVar5->field_0x16b0;
        }
      }
    }
    else {
      *param_2 = '\x02';
      *(short *)(param_2 + 2) = sVar10;
      *(float *)(param_2 + 4) = fVar7;
      *(undefined1 **)(param_2 + 0xc) = &pRVar5->field_0x16b0;
    }
  }
  if (((((sVar9 != -1) && ((pRVar3->unk_04 & 2) != 0)) &&
       ((*param_2 == '\x04' || ((*param_2 == '\x02' && (*(short *)(param_2 + 2) != 0)))))) &&
      (fVar17 < 32.0)) && (sVar9 == 0)) {
    pRVar5 = RaceCar_Get(0);
    if (3.0 <= fVar17) {
      fVar15 = (float)pRVar5->unk_1788 - (float)pRVar2->unk_1788;
      if (0.0 < fVar15) {
        fVar15 = (fVar15 * 1000.0) / 216000.0;
        if (fVar15 == 0.0) {
          fVar15 = 1.0;
        }
        else {
          fVar15 = fVar17 / fVar15;
        }
        if (fVar15 / 60.0 < (float)pRVar2->unk_1788) {
          *param_2 = '\x01';
          param_2[2] = '\0';
          param_2[3] = '\0';
          *(float *)(param_2 + 4) = fVar17;
          *(undefined1 **)(param_2 + 0xc) = &pRVar5->field_0x16b0;
        }
      }
      else if (-10.0 < fVar15) {
        *param_2 = '\x01';
        param_2[2] = '\0';
        param_2[3] = '\0';
        *(float *)(param_2 + 4) = fVar17;
        *(undefined1 **)(param_2 + 0xc) = &pRVar5->field_0x16b0;
      }
    }
    else {
      *param_2 = '\x03';
      param_2[2] = '\0';
      param_2[3] = '\0';
      *(float *)(param_2 + 4) = fVar17;
      *(undefined1 **)(param_2 + 0xc) = &pRVar5->field_0x16b0;
    }
  }
  return;
}

// 0x001d4b50  size 0xc4
void Ai_DriverTask(int param_1)

{
  RaceCar *pRVar1;
  RaceEntrySetup *pRVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int index;
  
  iVar5 = *(int *)(param_1 + 0x14);
  lVar3 = RaceScene_IsRunning();
  if (lVar3 == 1) {
    index = 0;
    do {
      if (*(int *)(iVar5 + 4) != 0) {
        pRVar1 = RaceCar_Get(index);
        pRVar2 = GameState_Elem_f0_xcc(index);
        if ((((pRVar2->unk_04 & 0x20) == 0) &&
            (uVar4 = RaceCar_GetFlags(pRVar1), (uVar4 & 0x200) != 0)) &&
           ((*(uint *)(iVar5 + 4) & 1) != 0)) {
          Ai_DriveCar(iVar5 + 4);
        }
      }
      index = index + 1;
      iVar5 = iVar5 + 0x74;
    } while (index < 3);
  }
  return;
}

// 0x001d4c20  size 0x14
void maybe_RaceTask_GetField(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
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
  puRam0036f36c = puVar1;
  *puVar1 = 0;
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
  RaceEntrySetup *pRVar3;
  RacerStats *pRVar4;
  RacerState *pRVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  float fVar9;
  
  cVar1 = GameState_GetTotalCarCount();
  cVar8 = '\0';
  iVar7 = param_1;
  do {
    *(undefined4 *)(iVar7 + 4) = 0;
    *(undefined4 *)(iVar7 + 8) = 0xffffffff;
    Traffic_InitSlot(iVar7 + 0xc);
    cVar8 = cVar8 + '\x01';
    iVar7 = iVar7 + 0x74;
  } while (cVar8 < '\x03');
  cVar8 = '\0';
  if ('\0' < cVar1) {
    do {
      *(undefined4 *)(param_1 + 4) = 1;
      *(int *)(param_1 + 8) = (int)cVar8;
      pRVar3 = GameState_Elem_f0_xcc((int)cVar8);
      pRVar4 = GameState_Elem_2fa0_x17c((int)(char)pRVar3->unk_09);
      pRVar5 = GameState_Elem_3e0_x540((int)(char)pRVar3->unk_09);
      cVar2 = RaceCtx_GetMode();
      if (cVar2 == '\x06') {
        *(undefined4 *)(param_1 + 0x54) = 0x1800;
      }
      else {
        if ((char)pRVar4->unk_04 != '\r') {
          *(uint *)(param_1 + 0x54) = pRVar4->unk_10;
          *(uint *)(param_1 + 0x5c) = pRVar4->unk_18;
          *(uint *)(param_1 + 0x60) = pRVar4->unk_1c;
        }
        iVar7 = CarRec_GetPartData(pRVar3,0xf);
        iVar6 = CarRec_GetPartData(pRVar3,0x10);
        iVar7 = iVar7 + iVar6;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 1;
        }
        *(float *)(param_1 + 0x5c) = (float)(iVar7 >> 1) * 0.3 + *(float *)(param_1 + 0x5c) + 0.0;
        *(float *)(param_1 + 0x60) = (float)(iVar7 >> 1) * 0.15 + *(float *)(param_1 + 0x60) + 0.0;
      }
      iVar7 = CarRec_GetPartData(pRVar3,9);
      fVar9 = 1.0 / ((float)iVar7 + 1.0) + 0.5;
      if (1.0 < fVar9) {
        fVar9 = 1.0;
      }
      if (pRVar5->unk_8c == 2) {
        fVar9 = 0.66;
      }
      cVar8 = cVar8 + '\x01';
      *(float *)(param_1 + 0x70) = fVar9;
      param_1 = param_1 + 0x74;
    } while (cVar8 < cVar1);
  }
  return;
}

// 0x001d4f20  size 0x138
void Traffic_InitSlot(undefined4 *param_1)

{
  byte bVar1;
  
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
  bVar1 = GameState_Get_2();
  if (bVar1 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
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
  }
  return;
}

// 0x001d5060  size 0xacc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Ai_DriveCar(undefined8 param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  RaceCar *pRVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iStack_254;
  undefined4 uStack_250;
  uint uStack_240;
  undefined4 uStack_23c;
  uint uStack_238;
  uint uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  uint uStack_218;
  uint uStack_214;
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
  undefined1 *apuStack_120 [4];
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
  undefined1 *puStack_c0;
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
  sVar1 = (short)puVar10[1];
  if (_g_AiDrivers == 0) {
    puVar11 = (uint *)0x0;
  }
  else {
    puVar11 = *(uint **)((char)puVar10[1] * 4 + _g_AiDrivers + 8);
  }
  pRVar6 = RaceCar_Get((int)sVar1);
  uStack_34 = 0x3f800000;
  puVar13 = &pRVar6->field_0x16b0;
  uStack_24 = 0x3f800000;
  uStack_84 = 0x3f800000;
  uStack_64 = 0x3f800000;
  RaceCar_GetTracker(pRVar6);
  iVar7 = RaceCar_GetIndex(pRVar6);
  uStack_250 = 1;
  fVar14 = (float)Ai_CheckRaceEnd(sVar1);
  lVar8 = GameState_Get_40();
  if (lVar8 == 0) {
    uVar9 = RaceCar_GetFlags(pRVar6);
    if ((uVar9 & 4) == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = 1;
    }
  }
  else {
    uVar9 = RaceCar_GetFlags(pRVar6);
    if ((uVar9 & 4) == 0) {
      iVar12 = 1;
    }
    else {
      iVar12 = 0;
    }
  }
  if ((pRVar6->unk_0811 == '\0') && ((int)pRVar6->gear < 1)) {
    Car_RequestShiftUp(pRVar6);
  }
  auStack_b0[0] = 4;
  uStack_ac = 0;
  uStack_a4 = 0;
  sStack_ae = -1;
  uStack_a8 = 0xffff;
  uStack_a6 = 0xffff;
  if ((*(uint *)(iVar7 + 4) & 0x100) == 0) {
    Ai_UpdateRivalBehaviour(sVar1,auStack_b0);
  }
  iStack_254 = 0;
  bVar4 = false;
  fVar15 = (float)RaceCar_GetSpeedKmh(pRVar6);
  fStack_8 = fVar15 * fVar15 * 0.004 * (float)puVar10[0x19];
  if (fStack_8 < 10.0) {
    fStack_8 = 10.0;
  }
  uStack_b4 = 3;
  fStack_4 = fStack_8;
  fStack_bc = fStack_8;
  puStack_c0 = puVar13;
  iStack_b8 = iVar12;
  Ai_ThrottleControl(&uStack_160,&puStack_c0);
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
  apuStack_120[0] = puVar13;
  if (((fVar14 == -200.0) || (fVar14 == 0.0)) ||
     (((cVar5 = GameState_Get_354(), cVar5 == '\0' || (cVar5 = GameState_Get_354(), cVar5 == '\x05')
       ) && ((uVar9 = RaceScene_Get_38(), uVar9 < 0x1e1 && (iRam0046a590 == 0)))))) {
    fVar15 = *(float *)&pRVar6->field_0x1770 + *(float *)&pRVar6->field_0x1778;
    if (2.0 <= fVar15) {
      fVar16 = *(float *)&pRVar6->field_0x1760 - 2.0;
      if (fVar16 < fVar15) {
        fVar15 = fVar16;
      }
    }
    else {
      fVar15 = 2.0;
    }
    fVar15 = fVar15 - *(float *)&pRVar6->field_0x1770;
    if (iVar12 != 0) {
      fVar15 = -fVar15;
    }
    Ai_ComputeTargetSpeed(fVar15,0,&uStack_1b0,apuStack_120,1,0,1);
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
    Ai_ComputeTargetSpeed(0,0,&uStack_200,apuStack_120,1,0,0);
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
    iStack_254 = Ai_SteerToLine(&uStack_a0,&uStack_50,puVar13,iVar12,auStack_b0,puVar10[0x14]);
  }
  if (((iStack_254 == 0) && (fVar14 == 1000.0)) && (!bVar4)) {
    Ai_AvoidCars(&uStack_a0,&uStack_50,puVar13,iVar12);
  }
  if ((iStack_254 != 0) || (bVar4)) {
    uStack_250 = 0;
  }
  uVar2 = puVar11[4];
  if ((fVar14 == 0.0) || (uVar3 = *puVar10, (uVar3 & 0x20) != 0)) {
    cVar5 = RaceProg_GetPhase();
    if (cVar5 == '\x02') {
      Ai_InitTuning(param_1,pRVar6,puVar11,puVar10 + 3);
    }
    else {
      DriverInput_ClearAxes(puVar11);
    }
  }
  else if (fVar14 == -200.0) {
    fVar14 = (float)RaceCar_GetSpeedKmh(pRVar6);
    if (5.0 <= fVar14) {
      if ((*(uint *)(iVar7 + 4) & 4) == 0) {
        Ai_PlanOvertake(0,puVar10 + 2,sVar1,&uStack_50,&uStack_a0,0,1);
      }
      else {
        Ai_PlanOvertake(0,puVar10 + 2,sVar1,&uStack_50,&uStack_a0,0,1);
      }
    }
    else {
      DriverInput_ClearAxes(puVar11);
    }
  }
  else if ((*(uint *)(iVar7 + 4) & 4) == 0) {
    if ((uVar3 & 0x100) == 0) {
      if ((uVar3 & 0x200) == 0) {
        iVar7 = RaceCar_GetTracker(pRVar6);
        if (((*(uint *)(iVar7 + 0x60) & 0x20) == 0) || (10.0 <= (float)pRVar6->unk_1788)) {
          if (puVar10[9] != 0) {
            puVar10[9] = puVar10[9] - 1;
          }
        }
        else {
          puVar10[9] = puVar10[9] + 10;
          if (200 < (int)puVar10[9]) {
            if (*(float *)&pRVar6->field_0x1764 < 0.5) {
              *puVar10 = *puVar10 | 0x100;
              puVar10[10] = 0;
            }
            else {
              *puVar10 = *puVar10 | 0x200;
              puVar10[10] = 0;
            }
          }
        }
        Ai_PlanOvertake(fVar14,puVar10 + 2,sVar1,&uStack_50,&uStack_a0,auStack_b0,uStack_250);
      }
      else {
        DriverInput_Clear(puVar11);
        uStack_230 = *(undefined4 *)&pRVar6->field_0x1700;
        uStack_22c = *(undefined4 *)&pRVar6->field_0x1704;
        uStack_228 = *(undefined4 *)&pRVar6->field_0x1708;
        uStack_224 = *(undefined4 *)&pRVar6->field_0x170c;
        uStack_240 = pRVar6->unk_16e0;
        uStack_23c = *(undefined4 *)&pRVar6->field_0x16e4;
        uStack_238 = pRVar6->unk_16e8;
        uStack_234 = pRVar6->unk_16ec;
        fVar14 = (float)Vec3_AngleBetweenNorm(&uStack_230,&uStack_240);
        iVar7 = 0;
        fVar14 = (fVar14 * 180.0) / 3.1415927;
        do {
          if ((fVar14 <= 180.0) && (-180.0 <= fVar14)) goto LAB_001d5a10;
          if (180.0 < fVar14) {
            fVar14 = fVar14 - 360.0;
          }
          else if (fVar14 < -180.0) {
            fVar14 = fVar14 + 360.0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x65);
        fVar14 = 0.0;
LAB_001d5a10:
        if (fVar14 < 0.0) {
          fVar14 = fVar14 * -1.0;
        }
        if (((fVar14 < 20.0) || (0x78 < (int)puVar10[10])) ||
           (*(float *)&pRVar6->field_0x1764 < 0.25)) {
          fVar14 = (float)RaceCar_GetSpeedKmh(pRVar6);
          if (fVar14 < 5.0) {
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
      uStack_210 = *(undefined4 *)&pRVar6->field_0x1700;
      uStack_20c = *(undefined4 *)&pRVar6->field_0x1704;
      uStack_208 = *(undefined4 *)&pRVar6->field_0x1708;
      uStack_204 = *(undefined4 *)&pRVar6->field_0x170c;
      uStack_220 = pRVar6->unk_16e0;
      uStack_21c = *(undefined4 *)&pRVar6->field_0x16e4;
      uStack_218 = pRVar6->unk_16e8;
      uStack_214 = pRVar6->unk_16ec;
      fVar14 = (float)Vec3_AngleBetweenNorm(&uStack_210,&uStack_220);
      iVar7 = 0;
      fVar14 = (fVar14 * 180.0) / 3.1415927;
      do {
        if ((fVar14 <= 180.0) && (-180.0 <= fVar14)) goto LAB_001d5878;
        if (180.0 < fVar14) {
          fVar14 = fVar14 - 360.0;
        }
        else if (fVar14 < -180.0) {
          fVar14 = fVar14 + 360.0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x65);
      fVar14 = 0.0;
LAB_001d5878:
      if (fVar14 < 0.0) {
        fVar14 = fVar14 * -1.0;
      }
      if (((fVar14 < 20.0) || (0x78 < (int)puVar10[10])) ||
         (0.75 <= *(float *)&pRVar6->field_0x1764)) {
        fVar14 = (float)RaceCar_GetSpeedKmh(pRVar6);
        if (fVar14 < 5.0) {
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
    Ai_PlanOvertake(fVar14,puVar10 + 2,sVar1,&uStack_50,&uStack_a0,0,1);
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
  puVar10[0xc] = *(uint *)&pRVar6->field_0x1720;
  puVar10[0xf] = *(uint *)&pRVar6->field_0x172c;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Ai_PlanOvertake(float param_1,int param_2,long param_3,undefined4 *param_4,undefined4 *param_5,
                    long param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  RaceCar *pRVar7;
  int iVar8;
  RaceCar *pRVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  
  pcVar14 = (char *)param_6;
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
  if (_g_AiDrivers == 0) {
    pfVar15 = (float *)0x0;
  }
  else {
    pfVar15 = *(float **)((char)param_3 * 4 + _g_AiDrivers + 8);
  }
  pRVar7 = RaceCar_Get((int)param_3);
  iVar8 = RaceCar_GetIndex(pRVar7);
  uStack_c4 = 0x3f800000;
  uStack_b4 = 0x3f800000;
  uStack_104 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  bVar2 = false;
  bVar4 = false;
  bVar3 = true;
  fVar19 = fStack_50;
  fVar23 = fStack_8;
  DriverInput_Clear(pfVar15);
  DriverInput_Clear(&fStack_130);
  *(undefined4 *)(param_2 + 0x4c) = 0;
  if ((float)pRVar7->unk_1788 < 1.0) {
    fVar22 = 0.0046296297;
  }
  else {
    fVar22 = ((float)pRVar7->unk_1788 * 1000.0) / 216000.0;
  }
  uStack_e0 = 0x3e4ccccd;
  uStack_144 = 0x3f800000;
  uStack_110 = uStack_30;
  uStack_10c = uStack_2c;
  uStack_108 = uStack_28;
  uStack_104 = uStack_24;
  uStack_140 = *(undefined4 *)&pRVar7->field_0x16d0;
  uStack_138 = *(undefined4 *)&pRVar7->field_0x16d8;
  uStack_134 = *(undefined4 *)&pRVar7->field_0x16dc;
  uStack_13c = 0;
  Vec3_Sub(afStack_160,&uStack_110,&pRVar7->field_0x16b0);
  fStack_150 = afStack_160[0];
  fStack_148 = fStack_158;
  uStack_144 = uStack_154;
  fStack_14c = 0.0;
  fVar17 = (float)Vec3_AngleBetweenNorm(&uStack_140,&fStack_150);
  fStack_e8 = (fVar17 * 180.0) / 3.1415927;
  fStack_ec = SQRT(fStack_148 * fStack_148 + fStack_150 * fStack_150 + fStack_14c * fStack_14c);
  fVar17 = (float)atan2f(fStack_148,fStack_150);
  fStack_f0 = (fVar17 * 180.0) / 3.1415927;
  fVar17 = (float)atan2f(uStack_e0,fStack_ec);
  uStack_a0 = 0x3dcccccd;
  uStack_174 = 0x3f800000;
  fStack_e4 = (fVar17 * 180.0) / 3.1415927;
  uStack_d0 = uStack_80;
  uStack_cc = uStack_7c;
  uStack_c8 = uStack_78;
  uStack_c4 = uStack_74;
  uStack_170 = *(undefined4 *)&pRVar7->field_0x16d0;
  uStack_168 = *(undefined4 *)&pRVar7->field_0x16d8;
  uStack_164 = *(undefined4 *)&pRVar7->field_0x16dc;
  uStack_16c = 0;
  Vec3_Sub(afStack_190,&uStack_d0,&pRVar7->field_0x16b0);
  fStack_180 = afStack_190[0];
  fStack_178 = fStack_188;
  uStack_174 = uStack_184;
  fStack_17c = 0.0;
  fVar17 = (float)Vec3_AngleBetweenNorm(&uStack_170,&fStack_180);
  fStack_a8 = (fVar17 * 180.0) / 3.1415927;
  fStack_ac = SQRT(fStack_178 * fStack_178 + fStack_180 * fStack_180 + fStack_17c * fStack_17c);
  fVar17 = (float)atan2f(fStack_178,fStack_180);
  fStack_b0 = (fVar17 * 180.0) / 3.1415927;
  fVar17 = (float)atan2f(uStack_a0,fStack_ac);
  iVar13 = 0;
  fStack_a4 = (fVar17 * 180.0) / 3.1415927;
  fVar17 = fStack_b0 - *(float *)&pRVar7->field_0x1718;
  do {
    if ((fVar17 <= 180.0) && (-180.0 <= fVar17)) break;
    if (180.0 < fVar17) {
      fVar17 = fVar17 - 360.0;
    }
    else if (fVar17 < -180.0) {
      fVar17 = fVar17 + 360.0;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x65);
  iVar13 = 0;
  fVar17 = fStack_b0 - *(float *)&pRVar7->field_0x171c;
  do {
    if ((fVar17 <= 180.0) && (-180.0 <= fVar17)) goto LAB_001d6158;
    if (180.0 < fVar17) {
      fVar17 = fVar17 - 360.0;
    }
    else if (fVar17 < -180.0) {
      fVar17 = fVar17 + 360.0;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x65);
  fVar17 = 0.0;
LAB_001d6158:
  if ((*(uint *)(param_2 + 0x48) & 0x400) == 0) {
    if ((*(uint *)(param_2 + 0x48) & 0x800) == 0) {
      fVar24 = 12.0;
    }
    else {
      fVar24 = 10.0;
    }
  }
  else {
    fVar24 = 14.0;
  }
  if (fVar19 == 0.0) {
    fVar19 = 1000.0;
  }
  if ((param_6 != 0) && (param_3 != 0)) {
    pRVar9 = RaceCar_Get(0);
    if ((*(uint *)(param_2 + 0x48) & 8) == 0) {
      if (((*(uint *)(param_2 + 0x48) & 0x10) != 0) && (cVar5 = Race_GetWeather(), cVar5 == '\x01'))
      {
        cVar5 = *pcVar14;
        if ((((cVar5 == '\0') || (cVar5 == '\x02')) && (*(short *)(pcVar14 + 2) == 0)) ||
           ((cVar5 == '\x04' && (0.0 < pRVar9->trackPos - pRVar7->trackPos)))) {
          uVar10 = RaceCar_GetFlags(pRVar7);
          if (((uVar10 & 8) != 0) && (uVar10 = RaceCar_GetFlags(pRVar7), (uVar10 & 0x10) != 0)) {
            RaceCar_ClearFlags(pRVar7,8);
            RaceCar_SetFlags(pRVar7,0x40);
          }
        }
        else {
          RaceCar_SetFlags(pRVar7,8);
          RaceCar_SetFlags(pRVar7,0x20);
        }
      }
LAB_001d6270:
      uVar12 = *(uint *)(param_2 + 0x48);
    }
    else {
      if (((*(short *)(pcVar14 + 10) == -1) || (*pcVar14 != '\0')) || (*(short *)(pcVar14 + 2) != 0)
         ) {
        uVar10 = RaceCar_GetFlags(pRVar7);
        if (((uVar10 & 0x80) != 0) && (uVar10 = RaceCar_GetFlags(pRVar7), (uVar10 & 0x10) != 0)) {
          RaceCar_ClearFlags(pRVar7,0x80);
          uVar10 = RaceCar_GetFlags(pRVar7);
          if ((uVar10 & 8) == 0) {
            RaceCar_SetFlags(pRVar7,0x40);
          }
        }
        goto LAB_001d6270;
      }
      RaceCar_SetFlags(pRVar7,0x80);
      uVar10 = RaceCar_GetFlags(pRVar7);
      if ((uVar10 & 0x10) != 0) goto LAB_001d6270;
      RaceCar_SetFlags(pRVar7,0x20);
      uVar12 = *(uint *)(param_2 + 0x48);
    }
    if ((uVar12 & 4) == 0) {
      if ((uVar12 & 2) != 0) {
        if (*(int *)(param_2 + 0x24) == 0) {
          if ((*(short *)(pcVar14 + 8) == -1) || (pRVar7->trackPos - pRVar9->trackPos <= 0.0)) {
            if ((float)pRVar7->unk_08a8 != 1.0) {
              pRVar7->unk_08a8 = 0x3f800000;
            }
          }
          else {
            pRVar7->unk_08a8 = 0x3f000000;
            *(undefined4 *)(param_2 + 0x24) = 0x78;
          }
        }
        else {
          *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
      }
    }
    else if (*(int *)(param_2 + 0x24) == 0) {
      if ((*(short *)(pcVar14 + 8) == -1) || (pRVar7->trackPos - pRVar9->trackPos <= 0.0)) {
        if ((float)pRVar7->unk_08a8 != 1.0) {
          pRVar7->unk_08a8 = 0x3f800000;
        }
      }
      else {
        pRVar7->unk_08a8 = 0x40000000;
        *(undefined4 *)(param_2 + 0x24) = 0x78;
      }
    }
    else {
      *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
    }
  }
  if (fVar23 == 1000.0) {
    fVar21 = 1.0;
  }
  else {
    fVar21 = 5.0;
  }
  if ((param_3 != 0) && (param_6 != 0)) {
    if ((*(uint *)(param_2 + 0x48) & 0x20) == 0) {
      if ((((*(uint *)(param_2 + 0x48) & 0x40) != 0) && (*pcVar14 == '\x01')) &&
         (*(short *)(pcVar14 + 2) == 0)) {
        fVar21 = fVar21 * 1.5;
      }
    }
    else if ((*pcVar14 == '\x01') && (*(short *)(pcVar14 + 2) == 0)) {
      fVar21 = fVar21 * 0.5;
    }
  }
  iVar13 = 0;
  fVar20 = fStack_f0 - *(float *)&pRVar7->field_0x1718;
  do {
    if ((fVar20 <= 180.0) && (-180.0 <= fVar20)) goto LAB_001d6580;
    if (180.0 < fVar20) {
      fVar20 = fVar20 - 360.0;
    }
    else if (fVar20 < -180.0) {
      fVar20 = fVar20 + 360.0;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x65);
  fVar20 = 0.0;
LAB_001d6580:
  fVar16 = *(float *)&pRVar7->field_0x1720;
  fVar21 = (fVar20 / (fStack_ec / fVar22)) * fVar21;
  if (((fVar16 <= fVar21) && (fVar21 < 0.0)) || ((fVar21 <= fVar16 && (0.0 < fVar21)))) {
    bVar2 = true;
  }
  if (((0.0 < fVar23) && (0.0 < fVar16)) || ((fVar23 < 0.0 && (fVar16 < 0.0)))) {
    bVar4 = true;
  }
  if (param_1 == 1000.0) {
    fVar22 = (float)fabsf(fVar23);
    if (fVar22 < 30.0) {
      fVar22 = 30.0;
    }
    if (param_3 != 0) {
      pRVar9 = RaceCar_Get(0);
      fVar21 = pRVar7->trackPos - pRVar9->trackPos;
      if ((*(uint *)(iVar8 + 4) & 0x100) == 0) {
        cVar5 = GameState_Get_2();
        if (cVar5 == '\0') {
          fVar20 = *(float *)(param_2 + 0x50);
        }
        else {
          fVar20 = *(float *)(param_2 + 0x54);
        }
        fVar24 = fVar24 + fVar20;
        if ((*(uint *)(param_2 + 0x48) & 0x2000) == 0) {
          if ((fVar21 < 4.0) && (fVar24 < 12.0)) {
            fVar24 = 12.0;
          }
        }
        else if (fVar21 < -8.0) {
          fVar21 = 1.0 - fVar21 / 30.0;
          if (fVar24 < 14.0) {
            fVar24 = 14.0;
          }
          if (1.5 < fVar21) {
            fVar21 = 1.5;
          }
          pRVar7->unk_08a8 = (uint)fVar21;
        }
        else if ((float)pRVar7->unk_08a8 != 1.0) {
          pRVar7->unk_08a8 = 0x3f800000;
        }
      }
      else {
        fVar24 = fVar24 + *(float *)(param_2 + 0x50);
      }
    }
    if (fVar24 < 10.0) {
      fVar24 = 10.0;
    }
    param_1 = fVar24 * SQRT(fVar22);
  }
  else {
    bVar3 = false;
  }
  cVar5 = RaceCtx_GetMode();
  if (((cVar5 == '\x06') || (cVar5 = GameState_Get_0(), cVar5 == '\x03')) ||
     (cVar5 = GameState_Get_0(), cVar5 == '\x04')) {
    uVar11 = maybe___sf_to_df(fStack_a8 * 3.1415927);
    uVar11 = __divdf3(uVar11,0x4066800000000000);
    uVar18 = maybe___extendsfdf2(uVar11);
    uVar18 = cosf(uVar18);
    fVar22 = (float)fabsf(uVar18);
    fVar22 = 1.0 - fVar22;
    if (fVar22 < 0.5) {
      fVar22 = 0.5;
    }
    param_1 = param_1 * fVar22;
  }
  bVar1 = false;
  iVar8 = 0;
  fVar22 = fStack_f0 - *(float *)&pRVar7->field_0x171c;
  fVar21 = fStack_f0 - *(float *)&pRVar7->field_0x1718;
  do {
    if ((fVar22 <= 180.0) && (-180.0 <= fVar22)) goto LAB_001d67a0;
    if (180.0 < fVar22) {
      fVar22 = fVar22 - 360.0;
    }
    else if (fVar22 < -180.0) {
      fVar22 = fVar22 + 360.0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x65);
  fVar22 = 0.0;
LAB_001d67a0:
  fVar22 = (float)fabsf(fVar22);
  iVar8 = 0;
  do {
    if ((fVar21 <= 180.0) && (-180.0 <= fVar21)) goto LAB_001d6828;
    if (180.0 < fVar21) {
      fVar21 = fVar21 - 360.0;
    }
    else if (fVar21 < -180.0) {
      fVar21 = fVar21 + 360.0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x65);
  fVar21 = 0.0;
LAB_001d6828:
  fVar21 = (float)fabsf(fVar21);
  if (bVar2) {
    fabsf((((float)pRVar7->unk_1788 * (float)pRVar7->unk_1788) / (fVar24 * fVar24)) / fStack_8);
    fVar24 = (float)pRVar7->unk_1788;
  }
  else {
    fVar24 = (float)pRVar7->unk_1788;
  }
  if (40.0 < fVar24) {
    fVar24 = 0.0;
    bVar6 = GameState_Get_2();
    if (5 < bVar6) goto switchD_001d6dd4_default;
                    /* WARNING: Switch is manually overridden */
    switch(bVar6) {
    case 0:
      fVar24 = 0.2;
      iVar8 = *(int *)&pRVar7->field_0xccc;
      goto LAB_001d6e3c;
    case 1:
      fVar24 = 0.25;
      break;
    case 2:
      fVar24 = 0.25;
      break;
    case 3:
      fVar24 = 0.25;
      break;
    case 4:
      fVar24 = 0.25;
      break;
    case 5:
      fVar24 = 0.25;
    }
switchD_001d6dd4_default:
    iVar8 = *(int *)&pRVar7->field_0xccc;
LAB_001d6e3c:
    if (iVar8 == 0) {
      fVar16 = (float)fabsf(*(undefined4 *)&pRVar7->field_0x514);
      fVar20 = (float)fabsf(*(undefined4 *)&pRVar7->field_0x654);
    }
    else if (iVar8 == 1) {
      fVar16 = (float)fabsf(*(undefined4 *)&pRVar7->field_0x514);
      fVar20 = (float)fabsf(*(undefined4 *)&pRVar7->field_0x654);
    }
    else {
      fVar16 = (float)fabsf(*(undefined4 *)&pRVar7->field_0x514);
      fVar20 = (float)fabsf(*(undefined4 *)&pRVar7->field_0x654);
    }
    if ((fVar24 < fVar16) || (fVar24 < fVar20)) {
      bVar1 = true;
    }
  }
  if (!bVar3) {
    if ((float)pRVar7->unk_1788 < param_1) {
      if (((((float)pRVar7->unk_1788 <= 30.0) || (fVar22 <= *(float *)(param_2 + 0x38))) ||
          (fVar24 = (float)fabsf(fStack_8), 25.0 <= fVar24)) ||
         (fVar24 = (float)fabsf(fVar19), 25.0 <= fVar24)) {
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
  else if ((float)pRVar7->unk_1788 < param_1) {
    if (((float)pRVar7->unk_1788 <= 30.0) || (fVar21 <= *(float *)(param_2 + 0x3c))) {
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
      fVar24 = (float)fabsf(fStack_8);
      if ((fVar24 < 25.0) || (fVar24 = (float)fabsf(fVar19), fVar24 < 25.0)) {
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
                 (SQRT((float)pRVar7->unk_1788 * (float)pRVar7->unk_1788 - param_1 * param_1) /
                 100.0) * 1.1 * *(float *)(param_2 + 0x60);
    if (*(float *)(param_2 + 8) < 0.15000299) {
      fVar24 = *(float *)(param_2 + 8) + 0.050000995;
      if (fVar24 <= fStack_12c) {
        fStack_12c = fVar24;
      }
    }
    else {
    }
  }
  if (fStack_12c == 0.0) {
    *(undefined4 *)(param_2 + 0x58) = 0;
  }
LAB_001d69ec:
  if (((15.0 <= fVar22) &&
      ((fVar24 = (float)fabsf(fStack_8), fVar24 < 25.0 ||
       (fVar19 = (float)fabsf(fVar19), fVar19 < 25.0)))) || (30.0 <= fVar22)) {
    fVar19 = (float)sinf(*(undefined4 *)&pRVar7->field_0x1728);
    fVar19 = (float)fabsf((float)pRVar7->unk_1788 * fVar19);
    if ((40.0 < fVar19) && ((fVar23 == 1000.0 || (bVar4)))) {
      uVar18 = cosf(*(undefined4 *)&pRVar7->field_0x1728);
      fVar19 = (float)fabsf(uVar18);
      if (40.0 <= (float)pRVar7->unk_1788 * (1.0 - fVar19)) {
        if (*(float *)(param_2 + 0x38) < fVar22) {
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
  fStack_128 = ((fVar17 / *(float *)&pRVar7->field_0x1710) * 2.0 - 0.0) * 2.5;
  if (fStack_128 <= 1.0) {
    if (fStack_128 < -1.0) {
      fStack_128 = -1.0;
    }
  }
  else {
    fStack_128 = 1.0;
  }
  *(float *)(param_2 + 0x38) = fVar22;
  *(float *)(param_2 + 0x3c) = fVar21;
  Input_ApplyCurve(&fStack_130);
  Input_ClampPositive(&fStack_130);
  *pfVar15 = fStack_130;
  pfVar15[1] = fStack_12c;
  pfVar15[2] = fStack_128;
  pfVar15[3] = fStack_124;
  pfVar15[4] = fStack_120;
  *(undefined1 *)(pfVar15 + 5) = uStack_11c;
  *(float *)(param_2 + 0x40) = fStack_e8;
  *(float *)(param_2 + 0x44) = fStack_a8;
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
  }
  return;
}

// 0x001d7100  size 0xcc0
void AiLine_GetPoint(float *param_1,ulong param_2,uint param_3,short param_4)

{
  short sVar1;
  float *pfVar2;
  long lVar3;
  undefined4 *puVar4;
  short *psVar5;
  int iVar6;
  float *pfVar7;
  undefined1 auStack_1f0 [16];
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [16];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [16];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
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
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_2 < 0xf) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_2) {
    case 0:
      lVar3 = GameState_Get_40();
      if (lVar3 == 0) {
        sVar1 = **(short **)(g_RoadData->aiLine + (param_3 & 0xffff) * 4);
        psVar5 = *(short **)(g_RoadData->aiLine + (param_3 & 0xffff) * 4) +
                 sVar1 * 0x18 + sVar1 * 4 + 0x3e;
      }
      else {
        sVar1 = **(short **)(g_RoadData->aiLine + (param_3 & 0xffff) * 4);
        psVar5 = *(short **)(g_RoadData->aiLine + (param_3 & 0xffff) * 4) +
                 sVar1 * 0x1c + sVar1 * 6 + 0x3e;
      }
      pfVar2 = (float *)(psVar5 + param_4 * 6);
      fStack_10 = *pfVar2;
      fStack_c = pfVar2[1];
      fStack_8 = pfVar2[2];
      fStack_4 = 1.0;
      break;
    case 1:
      pfVar2 = (float *)(*(short **)(g_RoadData->aiLine + (param_3 & 0xffff) * 4) +
                        **(short **)(g_RoadData->aiLine + (param_3 & 0xffff) * 4) * 0x10 +
                        param_4 * 6 + 0x3e);
      fStack_10 = *pfVar2;
      fStack_c = pfVar2[1];
      fStack_8 = pfVar2[2];
      fStack_4 = 1.0;
      break;
    case 2:
      sVar1 = **(short **)(g_RoadData->aiLine + (param_3 & 0xffff) * 4);
      pfVar2 = (float *)(*(short **)(g_RoadData->aiLine + (param_3 & 0xffff) * 4) +
                        sVar1 * 0x14 + sVar1 * 2 + param_4 * 6 + 0x3e);
      fStack_10 = *pfVar2;
      fStack_c = pfVar2[1];
      fStack_8 = pfVar2[2];
      fStack_4 = 1.0;
      break;
    case 3:
      pfVar2 = (float *)(*(int *)(g_RoadData->aiLine + (param_3 & 0xffff) * 4) + 0x7c +
                        param_4 * 0x20);
      fStack_10 = *pfVar2;
      fStack_c = pfVar2[1];
      fStack_8 = pfVar2[2];
      fStack_4 = 1.0;
      break;
    case 4:
      lVar3 = GameState_Get_40();
      if (lVar3 == 0) {
        iVar6 = (param_3 & 0xffff) * 4;
        sVar1 = **(short **)(g_RoadData->aiLine + iVar6);
        psVar5 = *(short **)(g_RoadData->aiLine + iVar6) + sVar1 * 0x18 + sVar1 * 4 + 0x3e;
      }
      else {
        iVar6 = (param_3 & 0xffff) * 4;
        sVar1 = **(short **)(g_RoadData->aiLine + iVar6);
        psVar5 = *(short **)(g_RoadData->aiLine + iVar6) + sVar1 * 0x1c + sVar1 * 6 + 0x3e;
      }
      pfVar7 = (float *)(psVar5 + param_4 * 6);
      pfVar2 = (float *)(*(int *)(g_RoadData->aiLine + iVar6) + 0x7c + param_4 * 0x20);
      fStack_10 = *pfVar7 + *pfVar2;
      fStack_c = pfVar7[1] + pfVar2[1];
      fStack_8 = pfVar7[2] + pfVar2[2];
      fStack_4 = 1.0;
      maybe_sceVu0ScaleVectorXYZ(0x3f000000,&fStack_10,&fStack_10);
      break;
    case 5:
      iVar6 = (param_3 & 0xffff) * 4;
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               **(short **)(g_RoadData->aiLine + iVar6) * 0x10 + param_4 * 6 + 0x3e;
      uStack_80 = *(undefined4 *)psVar5;
      uStack_7c = *(undefined4 *)(psVar5 + 2);
      uStack_78 = *(undefined4 *)(psVar5 + 4);
      uStack_74 = 0x3f800000;
      sVar1 = **(short **)(g_RoadData->aiLine + iVar6);
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               sVar1 * 0x14 + sVar1 * 2 + param_4 * 6 + 0x3e;
      uStack_90 = *(undefined4 *)psVar5;
      uStack_8c = *(undefined4 *)(psVar5 + 2);
      uStack_88 = *(undefined4 *)(psVar5 + 4);
      uStack_84 = 0x3f800000;
      sceVu0SubVector(auStack_a0,&uStack_90,&uStack_80);
      sceVu0Normalize(auStack_a0,auStack_a0);
      maybe_sceVu0ScaleVectorXYZ(0x40400000,auStack_a0,auStack_a0);
      sceVu0AddVector(&fStack_10,&uStack_80,auStack_a0);
      break;
    case 6:
      iVar6 = (param_3 & 0xffff) * 4;
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               **(short **)(g_RoadData->aiLine + iVar6) * 0x10 + param_4 * 6 + 0x3e;
      uStack_b0 = *(undefined4 *)psVar5;
      uStack_ac = *(undefined4 *)(psVar5 + 2);
      uStack_a8 = *(undefined4 *)(psVar5 + 4);
      uStack_a4 = 0x3f800000;
      sVar1 = **(short **)(g_RoadData->aiLine + iVar6);
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               sVar1 * 0x14 + sVar1 * 2 + param_4 * 6 + 0x3e;
      uStack_c0 = *(undefined4 *)psVar5;
      uStack_bc = *(undefined4 *)(psVar5 + 2);
      uStack_b8 = *(undefined4 *)(psVar5 + 4);
      uStack_b4 = 0x3f800000;
      sceVu0SubVector(auStack_d0,&uStack_b0,&uStack_c0);
      sceVu0Normalize(auStack_d0,auStack_d0);
      maybe_sceVu0ScaleVectorXYZ(0x40400000,auStack_d0,auStack_d0);
      sceVu0AddVector(&fStack_10,&uStack_c0,auStack_d0);
      break;
    case 7:
      iVar6 = (param_3 & 0xffff) * 4;
      puVar4 = (undefined4 *)(*(int *)(g_RoadData->aiLine + iVar6) + 0x7c + param_4 * 0x20);
      uStack_30 = *puVar4;
      uStack_2c = puVar4[1];
      uStack_28 = puVar4[2];
      uStack_24 = 0x3f800000;
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               **(short **)(g_RoadData->aiLine + iVar6) * 0x10 +
               (param_4 * 2 + (int)param_4) * 2 + 0x3e;
      uStack_20 = *(undefined4 *)psVar5;
      uStack_1c = *(undefined4 *)(psVar5 + 2);
      uStack_18 = *(undefined4 *)(psVar5 + 4);
      uStack_14 = 0x3f800000;
      sceVu0SubVector(auStack_40,&uStack_20,&uStack_30);
      sceVu0Normalize(auStack_40,auStack_40);
      maybe_sceVu0ScaleVectorXYZ(0x3fc00000,auStack_40,auStack_40);
      sceVu0AddVector(&fStack_10,&uStack_30,auStack_40);
      break;
    case 8:
      iVar6 = (param_3 & 0xffff) * 4;
      puVar4 = (undefined4 *)(*(int *)(g_RoadData->aiLine + iVar6) + 0x7c + param_4 * 0x20);
      uStack_60 = *puVar4;
      uStack_5c = puVar4[1];
      uStack_58 = puVar4[2];
      uStack_54 = 0x3f800000;
      sVar1 = **(short **)(g_RoadData->aiLine + iVar6);
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               sVar1 * 0x14 + sVar1 * 2 + (param_4 * 2 + (int)param_4) * 2 + 0x3e;
      uStack_50 = *(undefined4 *)psVar5;
      uStack_4c = *(undefined4 *)(psVar5 + 2);
      uStack_48 = *(undefined4 *)(psVar5 + 4);
      uStack_44 = 0x3f800000;
      sceVu0SubVector(auStack_70,&uStack_50,&uStack_60);
      sceVu0Normalize(auStack_70,auStack_70);
      maybe_sceVu0ScaleVectorXYZ(0x3fc00000,auStack_70,auStack_70);
      sceVu0AddVector(&fStack_10,&uStack_60,auStack_70);
      break;
    case 9:
      iVar6 = (param_3 & 0xffff) * 4;
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               **(short **)(g_RoadData->aiLine + iVar6) * 0x10 + param_4 * 6 + 0x3e;
      uStack_e0 = *(undefined4 *)psVar5;
      uStack_dc = *(undefined4 *)(psVar5 + 2);
      uStack_d8 = *(undefined4 *)(psVar5 + 4);
      uStack_d4 = 0x3f800000;
      sVar1 = **(short **)(g_RoadData->aiLine + iVar6);
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               sVar1 * 0x14 + sVar1 * 2 + param_4 * 6 + 0x3e;
      uStack_f0 = *(undefined4 *)psVar5;
      uStack_ec = *(undefined4 *)(psVar5 + 2);
      uStack_e8 = *(undefined4 *)(psVar5 + 4);
      uStack_e4 = 0x3f800000;
      sceVu0SubVector(auStack_100,&uStack_f0,&uStack_e0);
      sceVu0Normalize(auStack_100,auStack_100);
      maybe_sceVu0ScaleVectorXYZ(0x3f99999a,auStack_100,auStack_100);
      sceVu0AddVector(&fStack_10,&uStack_e0,auStack_100);
      break;
    case 10:
      iVar6 = (param_3 & 0xffff) * 4;
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               **(short **)(g_RoadData->aiLine + iVar6) * 0x10 + param_4 * 6 + 0x3e;
      uStack_110 = *(undefined4 *)psVar5;
      uStack_10c = *(undefined4 *)(psVar5 + 2);
      uStack_108 = *(undefined4 *)(psVar5 + 4);
      uStack_104 = 0x3f800000;
      sVar1 = **(short **)(g_RoadData->aiLine + iVar6);
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               sVar1 * 0x14 + sVar1 * 2 + param_4 * 6 + 0x3e;
      uStack_120 = *(undefined4 *)psVar5;
      uStack_11c = *(undefined4 *)(psVar5 + 2);
      uStack_118 = *(undefined4 *)(psVar5 + 4);
      uStack_114 = 0x3f800000;
      sceVu0SubVector(auStack_130,&uStack_110,&uStack_120);
      sceVu0Normalize(auStack_130,auStack_130);
      maybe_sceVu0ScaleVectorXYZ(0x3f99999a,auStack_130,auStack_130);
      sceVu0AddVector(&fStack_10,&uStack_120,auStack_130);
      break;
    case 0xb:
      iVar6 = (param_3 & 0xffff) * 4;
      puVar4 = (undefined4 *)(*(int *)(g_RoadData->aiLine + iVar6) + 0x7c + param_4 * 0x20);
      uStack_1b0 = *puVar4;
      uStack_1ac = puVar4[1];
      uStack_1a8 = puVar4[2];
      uStack_1a4 = 0x3f800000;
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               **(short **)(g_RoadData->aiLine + iVar6) * 0x10 +
               (param_4 * 2 + (int)param_4) * 2 + 0x3e;
      uStack_1a0 = *(undefined4 *)psVar5;
      uStack_19c = *(undefined4 *)(psVar5 + 2);
      uStack_198 = *(undefined4 *)(psVar5 + 4);
      uStack_194 = 0x3f800000;
      sceVu0SubVector(auStack_1c0,&uStack_1a0,&uStack_1b0);
      sceVu0Normalize(auStack_1c0,auStack_1c0);
      maybe_sceVu0ScaleVectorXYZ(0x3fd9999a,auStack_1c0,auStack_1c0);
      sceVu0AddVector(&fStack_10,&uStack_1b0,auStack_1c0);
      break;
    case 0xc:
      iVar6 = (param_3 & 0xffff) * 4;
      puVar4 = (undefined4 *)(*(int *)(g_RoadData->aiLine + iVar6) + 0x7c + param_4 * 0x20);
      uStack_1d0 = *puVar4;
      uStack_1cc = puVar4[1];
      uStack_1c8 = puVar4[2];
      uStack_1c4 = 0x3f800000;
      sVar1 = **(short **)(g_RoadData->aiLine + iVar6);
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               sVar1 * 0x14 + sVar1 * 2 + (param_4 * 2 + (int)param_4) * 2 + 0x3e;
      uStack_1e0 = *(undefined4 *)psVar5;
      uStack_1dc = *(undefined4 *)(psVar5 + 2);
      uStack_1d8 = *(undefined4 *)(psVar5 + 4);
      uStack_1d4 = 0x3f800000;
      sceVu0SubVector(auStack_1f0,&uStack_1e0,&uStack_1d0);
      sceVu0Normalize(auStack_1f0,auStack_1f0);
      maybe_sceVu0ScaleVectorXYZ(0x3fd9999a,auStack_1f0,auStack_1f0);
      sceVu0AddVector(&fStack_10,&uStack_1d0,auStack_1f0);
      break;
    case 0xd:
      iVar6 = (param_3 & 0xffff) * 4;
      puVar4 = (undefined4 *)(*(int *)(g_RoadData->aiLine + iVar6) + 0x7c + param_4 * 0x20);
      uStack_150 = *puVar4;
      uStack_14c = puVar4[1];
      uStack_148 = puVar4[2];
      uStack_144 = 0x3f800000;
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               **(short **)(g_RoadData->aiLine + iVar6) * 0x10 +
               (param_4 * 2 + (int)param_4) * 2 + 0x3e;
      uStack_140 = *(undefined4 *)psVar5;
      uStack_13c = *(undefined4 *)(psVar5 + 2);
      uStack_138 = *(undefined4 *)(psVar5 + 4);
      uStack_134 = 0x3f800000;
      sceVu0SubVector(auStack_160,&uStack_140,&uStack_150);
      sceVu0Normalize(auStack_160,auStack_160);
      maybe_sceVu0ScaleVectorXYZ(0x40200000,auStack_160,auStack_160);
      sceVu0AddVector(&fStack_10,&uStack_150,auStack_160);
      break;
    case 0xe:
      iVar6 = (param_3 & 0xffff) * 4;
      puVar4 = (undefined4 *)(*(int *)(g_RoadData->aiLine + iVar6) + 0x7c + param_4 * 0x20);
      uStack_170 = *puVar4;
      uStack_16c = puVar4[1];
      uStack_168 = puVar4[2];
      uStack_164 = 0x3f800000;
      sVar1 = **(short **)(g_RoadData->aiLine + iVar6);
      psVar5 = *(short **)(g_RoadData->aiLine + iVar6) +
               sVar1 * 0x14 + sVar1 * 2 + (param_4 * 2 + (int)param_4) * 2 + 0x3e;
      uStack_180 = *(undefined4 *)psVar5;
      uStack_17c = *(undefined4 *)(psVar5 + 2);
      uStack_178 = *(undefined4 *)(psVar5 + 4);
      uStack_174 = 0x3f800000;
      sceVu0SubVector(auStack_190,&uStack_180,&uStack_170);
      sceVu0Normalize(auStack_190,auStack_190);
      maybe_sceVu0ScaleVectorXYZ(0x40200000,auStack_190,auStack_190);
      sceVu0AddVector(&fStack_10,&uStack_170,auStack_190);
    }
  }
  *param_1 = fStack_10;
  param_1[1] = fStack_c;
  param_1[2] = fStack_8;
  param_1[3] = fStack_4;
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
  psVar4 = *(short **)(g_RoadData->aiLine + iVar2) +
           **(short **)(g_RoadData->aiLine + iVar2) * 0x10 + param_4 * 6 + 0x3e;
  uStack_10 = *(undefined4 *)psVar4;
  uStack_c = *(undefined4 *)(psVar4 + 2);
  uStack_8 = *(undefined4 *)(psVar4 + 4);
  uStack_4 = 0x3f800000;
  sVar1 = **(short **)(g_RoadData->aiLine + iVar2);
  psVar4 = *(short **)(g_RoadData->aiLine + iVar2) + sVar1 * 0x14 + sVar1 * 2 + param_4 * 6 + 0x3e;
  uStack_20 = *(undefined4 *)psVar4;
  uStack_1c = *(undefined4 *)(psVar4 + 2);
  uStack_18 = *(undefined4 *)(psVar4 + 4);
  uStack_14 = 0x3f800000;
  if (param_5 == 0) {
    sceVu0SubVector(auStack_50,&uStack_20,&uStack_10);
    sceVu0Normalize(auStack_30,auStack_50);
    maybe_sceVu0ScaleVectorXYZ(param_1,auStack_30,auStack_30);
    sceVu0AddVector(&uStack_60,&uStack_10,auStack_30);
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(g_RoadData->aiLine + iVar2) + 0x7c + param_4 * 0x20);
    uStack_40 = *puVar3;
    uStack_3c = puVar3[1];
    uStack_38 = puVar3[2];
    uStack_34 = 0x3f800000;
    if (param_1 < 0.0) {
      param_1 = -param_1;
      sceVu0SubVector(auStack_50,&uStack_10,&uStack_40);
    }
    else {
      sceVu0SubVector(auStack_50,&uStack_20,&uStack_40);
    }
    sceVu0Normalize(auStack_30,auStack_50);
    maybe_sceVu0ScaleVectorXYZ(param_1,auStack_30,auStack_30);
    sceVu0AddVector(&uStack_60,&uStack_40,auStack_30);
  }
  *param_2 = uStack_60;
  param_2[1] = uStack_5c;
  param_2[2] = uStack_58;
  param_2[3] = uStack_54;
  return;
}

// 0x001d7fe0  size 0x10c
undefined4 Ai_CheckRaceEnd(int param_1)

{
  byte bVar1;
  RaceEntrySetup *pRVar2;
  RaceCar *pRVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x447a0000;
  pRVar2 = GameState_Elem_f0_xcc(param_1);
  pRVar3 = RaceCar_Get(param_1);
  if ((pRVar2->unk_04 & 4) == 0) {
    bVar1 = RaceProg_GetPhase();
    if (bVar1 < 8) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar1) {
      case 0:
        break;
      case 1:
        uVar5 = 0;
        break;
      case 2:
        uVar5 = 0;
        break;
      case 3:
        uVar4 = RaceCar_GetFlags(pRVar3);
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
      default:
        uVar5 = 0;
        break;
      case 7:
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0x42200000;
  }
  return uVar5;
}

