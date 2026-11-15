// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001e4000 - 0x001e8000
#include "ghidra_types.h"

// 0x001e4398  size 0x14
/* follows RaceCam_UpdateReplay; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void RaceCam_UpdateReplay_Orphan1(void)

{
  return;
}

// 0x001e43b0  size 0x4c4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceCam_UpdateFree(int param_1)

{
  int index;
  char cVar1;
  RaceCar *pRVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
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
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [32];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cVar1 = RaceCtx_GetMode();
  if ((cVar1 == '\x04') && (g_Loading->workBufs[0][0x4f8] == '\x03')) {
    _g_CourseShared15 = 0;
    _g_CourseShared16 = 0;
  }
  else {
    uVar8 = 0;
    pbVar7 = &DAT_0031c2e0;
    do {
      iVar5 = ((uint)*pbVar7 * 0x18 - (uint)*pbVar7) * 0x40;
      if (*(int *)(&s_Course_Render_2 + iVar5) != 0) {
        index = *(int *)(pbVar7 + 4);
        uStack_10 = DAT_0031c300;
        fStack_c = DAT_0031c304;
        uStack_50 = DAT_0031c310;
        uStack_8 = DAT_0031c308;
        uStack_4 = DAT_0031c30c;
        uStack_4c = DAT_0031c314;
        uStack_48 = DAT_0031c318;
        uStack_44 = DAT_0031c31c;
        iVar3 = *(int *)(param_1 + index * 4 + 0x1c);
        puVar6 = (uint *)(iVar3 + 0x110);
        if ((*(uint *)(iVar3 + 0x110) & 0xc) == 0) {
          if (index == 0) {
            _g_CourseShared15 = 0;
          }
          else {
            _g_CourseShared16 = 0;
          }
        }
        else {
          if (index == 0) {
            _g_CourseShared15 = 1;
          }
          else {
            _g_CourseShared16 = 1;
          }
          if ((*puVar6 & 8) == 0) {
            fStack_c = DAT_0031c304 - 0.02;
          }
          pRVar2 = RaceCar_Get(index);
          uVar4 = RaceCar_GetIndex(pRVar2);
          uStack_d0 = pRVar2->unk_00e0;
          uStack_cc = pRVar2->unk_00e4;
          uStack_c8 = pRVar2->unk_00e8;
          uStack_c4 = pRVar2->unk_00ec;
          uStack_c0 = pRVar2->unk_00f0;
          uStack_bc = pRVar2->unk_00f4;
          uStack_b8 = pRVar2->unk_00f8;
          uStack_b4 = pRVar2->unk_00fc;
          uStack_b0 = pRVar2->unk_0100;
          uStack_ac = pRVar2->unk_0104;
          uStack_a8 = pRVar2->unk_0108;
          uStack_a4 = pRVar2->unk_010c;
          uStack_a0 = pRVar2->unk_0110;
          uStack_9c = pRVar2->unk_0114;
          uStack_98 = pRVar2->unk_0118;
          uStack_94 = pRVar2->unk_011c;
          iVar3 = CarRec_GetPartData(uVar4,0xc);
          fVar9 = ((float)iVar3 + 5.0) / 5.0 - 1.0;
          maybe_Vu0_UnitMatrix(auStack_90);
          sceVu0CopyVector(auStack_90,&uStack_d0);
          sceVu0CopyVector(auStack_80,&uStack_c0);
          sceVu0CopyVector(auStack_70,&uStack_b0);
          sceVu0CopyVector(auStack_20,&uStack_a0);
          sceVu0ApplyMatrix(auStack_30,auStack_90,&uStack_10);
          sceVu0CopyVector(auStack_e0,auStack_20);
          fStack_dc = fStack_dc + 0.4;
          if (index == 0) {
            sceVu0CopyVector(0x430680,auStack_20);
            sceVu0CopyVector(0x4306a0,auStack_30);
          }
          else {
            sceVu0CopyVector(0x430690,auStack_20);
            sceVu0CopyVector(0x4306b0,auStack_30);
          }
          sceVu0ApplyMatrix(&uStack_50,auStack_90,&uStack_50);
          sceVu0Normalize(auStack_30,auStack_30);
          sceVu0Normalize(&uStack_50,&uStack_50);
          sceVu0ScaleVector(0x40000000,auStack_40,auStack_30);
          sceVu0AddVector(auStack_20,auStack_20,auStack_40);
          if ((*puVar6 & 8) == 0) {
            Camera_BuildScreenMatrix
                      (fVar9 + 0.6,fVar9 + 1.0,&g_Views + iVar5,auStack_20,auStack_30,&uStack_50);
          }
          else {
            Camera_BuildScreenMatrix
                      (fVar9 + 0.65,fVar9 + 1.2,&g_Views + iVar5,auStack_20,auStack_30,&uStack_50);
          }
        }
      }
      uVar8 = uVar8 + 1;
      pbVar7 = pbVar7 + 8;
    } while (uVar8 < 3);
  }
  return;
}

// 0x001e4884  size 0x10
/* follows RaceCam_UpdateFree; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void RaceCam_UpdateFree_Orphan1(void)

{
  return;
}

// 0x001e48a0  size 0x874
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Race_SetupCars(undefined8 param_1,uint *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  RacerState *pRVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  if (_g_AiDrivers == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)((char)param_4 * 4 + _g_AiDrivers + 8);
  }
  iVar3 = RaceCar_GetIndex(param_3);
  if ((*(uint *)(iVar3 + 4) & 0x100) == 0) {
    *param_2 = *param_2 & 0xfffff7ff;
  }
  else {
    *param_2 = *param_2 | 0x800;
  }
  if (*(short *)(iVar3 + 0xc) == 0x11e) {
    uVar5 = RaceCar_GetFlags(param_3);
    if ((uVar5 & 0x8000) == 0) {
      fVar8 = (float)RaceCar_GetSpeedKmh(param_3);
      if (80.0 < fVar8) {
        RaceCar_SetFlags(param_3,0x10000);
      }
      uVar5 = RaceCar_GetFlags(param_3);
      if ((uVar5 & 0x10000) != 0) {
        fVar8 = (float)RaceCar_GetSpeedKmh(param_3);
        if (10.0 <= fVar8) {
          fVar8 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar8 + 0.02);
          if (1.0 <= fVar8 + 0.02) {
            param_2[0xdf] = 0x3f800000;
            RaceCar_SetFlags(param_3,0x8000);
            RaceCar_ClearFlags(param_3,0x10000);
          }
        }
        else {
          fVar8 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar8 - 0.02);
          if (fVar8 - 0.02 <= 0.0) {
            param_2[0xdf] = 0;
            RaceCar_ClearFlags(param_3,0x10000);
          }
        }
      }
    }
    else {
      fVar8 = (float)RaceCar_GetSpeedKmh(param_3);
      if (fVar8 < 10.0) {
        RaceCar_SetFlags(param_3,0x10000);
      }
      uVar5 = RaceCar_GetFlags(param_3);
      if ((uVar5 & 0x10000) != 0) {
        fVar8 = (float)RaceCar_GetSpeedKmh(param_3);
        if (80.0 < fVar8) {
          fVar8 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar8 + 0.02);
          if (1.0 <= fVar8 + 0.02) {
            param_2[0xdf] = 0x3f800000;
            RaceCar_ClearFlags(param_3,0x10000);
          }
        }
        else {
          fVar8 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar8 - 0.02);
          if (fVar8 - 0.02 <= 0.0) {
            param_2[0xdf] = 0;
            RaceCar_ClearFlags(param_3,0x8000);
            RaceCar_ClearFlags(param_3,0x10000);
          }
        }
      }
    }
  }
  iVar3 = RaceCar_GetIndex(param_3);
  uVar5 = RaceCar_GetFlags(param_3);
  iVar7 = (int)param_3;
  if (((uVar5 & 0x1000) == 0) && (uVar5 = RaceCar_GetFlags(param_3), (uVar5 & 0x2000) == 0)) {
    *(undefined4 *)(iVar7 + 0x17c4) = 0;
    *param_2 = *param_2 & 0xfffffe7f;
  }
  else {
    *(int *)(iVar7 + 0x17c4) = *(int *)(iVar7 + 0x17c4) + 1;
    if (0x31 < *(int *)(iVar7 + 0x17c4)) {
      *(undefined4 *)(iVar7 + 0x17c4) = 0;
    }
  }
  uVar5 = RaceCar_GetFlags(param_3);
  if ((uVar5 & 0x1000) == 0) {
    *param_2 = *param_2 & 0xffffff7f;
  }
  else if (*(int *)(iVar7 + 0x17c4) % 0x32 < 0x19) {
    *param_2 = *param_2 | 0x80;
  }
  else {
    *param_2 = *param_2 & 0xffffff7f;
  }
  uVar5 = RaceCar_GetFlags(param_3);
  if ((uVar5 & 0x2000) == 0) {
    *param_2 = *param_2 & 0xfffffeff;
  }
  else if (*(int *)(iVar7 + 0x17c4) % 0x32 < 0x19) {
    *param_2 = *param_2 | 0x100;
  }
  else {
    *param_2 = *param_2 & 0xfffffeff;
  }
  uVar5 = RaceCar_GetFlags(param_3);
  if (((uVar5 & 0x10) != 0) && (*(int *)(iVar7 + 0x17bc) != 0)) {
    *(int *)(iVar7 + 0x17bc) = *(int *)(iVar7 + 0x17bc) + -1;
  }
  uVar5 = RaceCar_GetFlags(param_3);
  if ((uVar5 & 0x20) == 0) {
    uVar5 = RaceCar_GetFlags(param_3);
    if ((uVar5 & 0x40) != 0) {
      sVar2 = CarRec_GetModelId(iVar3 + 0xc);
      pRVar4 = GameState_Elem_3e0_x540((int)sVar2);
      if (pRVar4->unk_90 == 0) {
        RaceCar_ClearFlags(param_3,0x10);
        param_2[0xdd] = 0;
        RaceCar_ClearFlags(param_3,0x40);
      }
      else if (*(int *)(iVar7 + 0x17bc) == 0) {
        RaceCar_ClearFlags(param_3,0x10);
        fVar8 = (float)param_2[0xdd];
        param_2[0xdd] = (uint)(fVar8 - 0.05);
        if (fVar8 - 0.05 <= 0.0) {
          param_2[0xdd] = 0;
          RaceCar_ClearFlags(param_3,0x40);
        }
      }
    }
  }
  else {
    RaceCar_ClearFlags(param_3,0x40);
    pRVar4 = GameState_Elem_3e0_x540((int)*(char *)(iVar3 + 9));
    if (pRVar4->unk_90 == 0) {
      param_2[0xdd] = 0x3f800000;
      RaceCar_ClearFlags(param_3,0x20);
      RaceCar_SetFlags(param_3,0x10);
      *(undefined4 *)(iVar7 + 0x17bc) = 0;
      uVar5 = RaceCar_GetFlags(param_3);
      if ((uVar5 & 0x80) != 0) {
        *(undefined4 *)(iVar7 + 0x17c0) = 3;
      }
    }
    else {
      fVar8 = (float)param_2[0xdd];
      param_2[0xdd] = (uint)(fVar8 + 0.05);
      if (1.0 <= fVar8 + 0.05) {
        param_2[0xdd] = 0x3f800000;
        RaceCar_ClearFlags(param_3,0x20);
        RaceCar_SetFlags(param_3,0x10);
        *(undefined4 *)(iVar7 + 0x17bc) = 0x14;
        uVar5 = RaceCar_GetFlags(param_3);
        if ((uVar5 & 0x80) != 0) {
          *(undefined4 *)(iVar7 + 0x17c0) = 3;
        }
      }
    }
  }
  uVar5 = RaceCar_GetFlags(param_3);
  if (((uVar5 & 8) == 0) || (uVar5 = RaceCar_GetFlags(param_3), (uVar5 & 0x10) == 0)) {
    *param_2 = *param_2 & 0xfffffffb;
  }
  else {
    *param_2 = *param_2 | 4;
  }
  cVar1 = GameState_Get_3();
  if (cVar1 == '\x01') {
    uVar5 = RaceCar_GetFlags(param_3);
    if ((uVar5 & 8) == 0) {
      *param_2 = *param_2 & 0xffffffef;
    }
    else {
      cVar1 = GameState_Get_2();
      if (((cVar1 == '\x03') || (cVar1 == '\x04')) ||
         ((cVar1 == '\x05' || ((cVar1 == '\x02' || (cVar1 == '\x01')))))) {
        *param_2 = *param_2 | 0x10;
      }
      else {
        *param_2 = *param_2 & 0xffffffef;
      }
    }
  }
  else {
    cVar1 = GameState_Get_2();
    if ((((cVar1 == '\x03') || (cVar1 == '\x04')) || (cVar1 == '\x05')) ||
       ((cVar1 == '\x02' || (cVar1 == '\x01')))) {
      *param_2 = *param_2 | 0x10;
    }
    else {
      *param_2 = *param_2 & 0xffffffef;
    }
  }
  uVar5 = RaceCar_GetFlags(param_3);
  if ((uVar5 & 0x80) == 0) {
    iVar3 = *(int *)(iVar7 + 0x17c0);
LAB_001e4e1c:
    if (iVar3 == 0) {
      *param_2 = *param_2 & 0xfffffff7;
      goto LAB_001e4e50;
    }
  }
  else {
    uVar5 = RaceCar_GetFlags(param_3);
    if ((uVar5 & 0x10) == 0) {
      iVar3 = *(int *)(iVar7 + 0x17c0);
      goto LAB_001e4e1c;
    }
  }
  if (*(int *)(iVar7 + 0x17c0) != 0) {
    *(int *)(iVar7 + 0x17c0) = *(int *)(iVar7 + 0x17c0) + -1;
  }
  *param_2 = *param_2 | 8;
LAB_001e4e50:
  uVar5 = RaceCar_GetFlags(param_3);
  if ((uVar5 & 0x4000) == 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  else {
    *param_2 = *param_2 | 0x20;
  }
  if (((*(uint *)(iVar6 + 0x10) & 0x200) == 0) || (*(int *)(iVar7 + 0x814) != -1)) {
    *param_2 = *param_2 & 0xffffffbf;
  }
  else {
    *param_2 = *param_2 | 0x40;
  }
  cVar1 = RaceCtx_GetMode();
  if (cVar1 == '\x04') {
    cVar1 = Race_GetWeather();
    if (cVar1 == '\x01') {
      param_2[0xe0] = 1;
    }
    else {
      param_2[0xe0] = 0;
    }
  }
  else if ((param_4 == 0) || (cVar1 = Race_GetWeather(), cVar1 != '\x01')) {
    param_2[0xe0] = 0;
  }
  else {
    param_2[0xe0] = 1;
  }
  if ((g_Loading->workBufs[0][0x4f8] == '\x03') || (_g_DemoShared1 != 0)) {
    param_2[0xe4] = 0;
  }
  else {
    param_2[0xe4] = 1;
  }
  param_2[0xe1] = 1;
  return;
}

// 0x001e5120  size 0x398
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Race_SetupCarFlags(undefined8 param_1,uint *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (_g_AiDrivers == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((char)param_4 * 4 + _g_AiDrivers + 8);
  }
  iVar2 = RaceCar_GetIndex(param_3);
  if ((*(uint *)(iVar2 + 4) & 0x100) != 0) {
    *param_2 = *param_2 | 0x800;
  }
  cVar1 = GameState_Get_3();
  if (cVar1 == '\x01') {
    *param_2 = *param_2 | 0x400;
    cVar1 = RaceCtx_GetMode();
    if (cVar1 == '\x06') {
      *param_2 = *param_2 | 4;
      param_2[0xdd] = 0x3f800000;
      RaceCar_SetFlags(param_3,8);
      RaceCar_SetFlags(param_3,0x10);
    }
    uVar3 = RaceCar_GetFlags(param_3);
    if ((uVar3 & 8) == 0) {
      *param_2 = *param_2 & 0xfffffffb;
      param_2[0xdd] = 0x3f800000;
    }
    else {
      *param_2 = *param_2 | 4;
      param_2[0xdd] = 0x3f800000;
    }
  }
  else {
    *param_2 = *param_2 & 0xfffffffb;
    param_2[0xdd] = 0;
  }
  cVar1 = GameState_Get_3();
  if (cVar1 == '\x01') {
    uVar3 = RaceCar_GetFlags(param_3);
    if ((uVar3 & 8) == 0) {
      *param_2 = *param_2 & 0xffffffef;
    }
    else {
      cVar1 = GameState_Get_2();
      if (((cVar1 == '\x03') || (cVar1 == '\x05')) ||
         ((cVar1 == '\x04' || ((cVar1 == '\x02' || (cVar1 == '\x01')))))) {
        *param_2 = *param_2 | 0x10;
      }
      else {
        *param_2 = *param_2 & 0xffffffef;
      }
    }
  }
  else {
    cVar1 = GameState_Get_2();
    if ((((cVar1 == '\x03') || (cVar1 == '\x05')) || (cVar1 == '\x04')) ||
       ((cVar1 == '\x02' || (cVar1 == '\x01')))) {
      *param_2 = *param_2 | 0x10;
    }
    else {
      *param_2 = *param_2 & 0xffffffef;
    }
  }
  uVar3 = RaceCar_GetFlags(param_3);
  if ((uVar3 & 0x4000) == 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  else {
    *param_2 = *param_2 | 0x20;
  }
  if (iVar4 != 0) {
    if (((*(uint *)(iVar4 + 0x10) & 0x200) == 0) || (*(int *)((int)param_3 + 0x814) != -1)) {
      *param_2 = *param_2 & 0xffffffbf;
    }
    else {
      *param_2 = *param_2 | 0x40;
    }
    if ((*(uint *)(iVar4 + 0x10) & 0x1000) == 0) {
      *param_2 = *param_2 & 0xfffffeff;
    }
    else {
      *param_2 = *param_2 | 0x100;
    }
    if ((*(uint *)(iVar4 + 0x10) & 0x800) == 0) {
      *param_2 = *param_2 & 0xffffff7f;
    }
    else {
      *param_2 = *param_2 | 0x80;
    }
  }
  cVar1 = RaceCtx_GetMode();
  if (cVar1 == '\x04') {
    cVar1 = Race_GetWeather();
    if (cVar1 == '\x01') {
      param_2[0xe0] = 1;
    }
    else {
      param_2[0xe0] = 0;
    }
  }
  else if ((param_4 == 0) || (cVar1 = Race_GetWeather(), cVar1 != '\x01')) {
    param_2[0xe0] = 0;
  }
  else {
    param_2[0xe0] = 1;
  }
  return;
}

// 0x001e54c0  size 0x200
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Race_LoadCourse(undefined4 *param_1,long param_2)

{
  RaceCar *pRVar1;
  RaceEntrySetup *pRVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int index;
  undefined4 auStack_200 [64];
  undefined4 auStack_100 [64];
  
  if (_s_RaceIsReplayMode == 0) {
    Weather_Update(0x42c80000,param_1 + 0x14,100,1);
    Weather_Update(0x42c80000,param_1 + 0x388,100,1);
  }
  else {
    Weather_Update(0x42c80000,param_1 + 0x14,100,1);
    Weather_Update(0x42c80000,param_1 + 0x388,0x32,1);
    Weather_Update(0x42c80000,param_1 + 0x6fc,0x32,2);
  }
  if (param_2 == 0) {
    param_1[6] = 3;
  }
  else {
    param_1[6] = 0;
  }
  param_1[4] = 0;
  index = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar7 = param_1;
  do {
    pRVar1 = RaceCar_Get(index);
    pRVar2 = GameState_Elem_f0_xcc(index);
    if (pRVar1 == (RaceCar *)0x0) {
      if (puVar7[7] != 0) {
        CarModel_SwapParts();
        puVar7[7] = 0;
      }
    }
    else if ((pRVar2->unk_04 & 0x80) == 0) {
      if (puVar7[7] != 0) {
        Race_SetupCarFlags(param_1,puVar7[7] + 0x110,pRVar1,index);
      }
    }
    else {
      pRVar2->unk_04 = pRVar2->unk_04 & 0xffffff7f;
      if (puVar7[7] != 0) {
        CarModel_SwapParts();
      }
      GameState_CopyCourseRecord(auStack_200,pRVar2->unk_09);
      puVar6 = auStack_200;
      puVar5 = auStack_100;
      iVar4 = 0x20;
      do {
        iVar4 = iVar4 + -1;
        uVar3 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar3;
        puVar6 = puVar6 + 2;
        puVar5 = puVar5 + 2;
      } while (0 < iVar4);
      uVar3 = SceneObj_CreateCar(auStack_100);
      puVar7[7] = uVar3;
      Race_SetupCarFlags(param_1,puVar7[7] + 0x110,pRVar1,index);
    }
    index = index + 1;
    puVar7 = puVar7 + 1;
  } while (index < 3);
  Skid_ClearAll();
  return;
}

// 0x001e56c8  size 0x8
/* follows Race_LoadCourse; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void Race_LoadCourse_Orphan1(void)

{
  return;
}

// 0x001e56d0  size 0x84
void Race_LoadCourseAsync(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  undefined4 uStack_10;
  
  auStack_30[0] = 2;
  uStack_14 = 2;
  uStack_28 = 6;
  uStack_10 = 3;
  uStack_2c = 3;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  Course_LoadModels(0x430750,auStack_30);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  maybe_ReplayCam_Load(0x430750);
  Race_LoadCourse(param_1,1);
  return;
}

// 0x001e5770  size 0x24
void RaceTask_FreeCourse(void)

{
  maybe_ReplayCam_Free();
  Course_FreeModels();
  return;
}

// 0x001e57a0  size 0x34
void Race_LoadTask(int param_1)

{
  Race_LoadCourseAsync(*(undefined4 *)(param_1 + 0x14));
  *(undefined1 **)(param_1 + 0x1c) = &LAB_001e5760;
  return;
}

// 0x001e57e0  size 0x8
void Race_Nop(void)

{
  return;
}

// 0x001e57f0  size 0x148
void RaceHud_UpdateBattle(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar2 = RaceHud_GetRacerPanel(0);
  iVar1 = *(int *)(iVar2 + 0xb0);
  iVar8 = 0;
  lVar6 = GameState_GetPlayerCount();
  if (lVar6 < 1) {
    uVar3 = *(uint *)(iVar2 + 4);
  }
  else {
    do {
      iVar4 = RaceHud_GetRacerPanel(iVar8);
      uVar7 = RaceHud_UpdateTimePanel(param_1,iVar8);
      RaceHud_UpdateLapPanel(param_1,iVar8,uVar7);
      RaceHud_UpdatePlayerPanel(param_1,iVar8);
      iVar8 = iVar8 + 1;
      *(int *)(iVar4 + 0xb8) = *(int *)(iVar4 + 0xb8) + 1;
      iVar4 = GameState_GetPlayerCount();
    } while (iVar8 < iVar4);
    uVar3 = *(uint *)(iVar2 + 4);
  }
  if ((uVar3 & 0x100) == 0) {
    uVar7 = RaceProg_GetArray_34(0);
    uVar5 = SpGauge_Update(uVar7);
    *(undefined4 *)(iVar2 + 0xb0) = uVar5;
  }
  else {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffeff;
    if ((*(uint *)(iVar2 + 4) & 0x20) == 0) {
      if (*(int *)(iVar2 + 0xb4) < iVar1) {
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x400;
      }
      else {
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x200;
      }
    }
  }
  uVar7 = RaceProg_GetArray_34(0);
  uVar7 = SpGauge_Update(uVar7);
  RaceHud_SetField26c(uVar7);
  return;
}

// 0x001e5940  size 0x130
void RaceHud_UpdateRanking(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = 0;
  lVar5 = GameState_GetTotalCarCount();
  if (0 < lVar5) {
    do {
      iVar2 = RaceHud_GetRacerPanel(iVar8);
      uVar6 = RaceProg_GetArray_28((char)iVar8);
      uVar3 = Raceprog_Nop(uVar6);
      *(undefined4 *)(iVar2 + 0x8c) = uVar3;
      iVar4 = *(int *)(iVar2 + 0x8c);
      iVar1 = *(int *)(iVar2 + 0x90);
      piVar7 = (int *)(iVar2 + 0x90);
      if (iVar1 < iVar4) {
        if (iVar1 + 10000 < iVar4) {
          *piVar7 = *piVar7 + 10000;
        }
        else {
          *piVar7 = iVar4;
        }
      }
      else if (iVar4 < iVar1) {
        if (iVar4 < iVar1 + -10000) {
          *piVar7 = iVar1 + -10000;
        }
        else {
          *piVar7 = iVar4;
        }
      }
      if (((float)*(int *)(iVar2 + 0x8c) / 5e+06 < 0.25) &&
         (lVar5 = RaceScene_IsPaused(), lVar5 == 0)) {
        *(int *)(iVar2 + 0x94) = *(int *)(iVar2 + 0x94) + 1;
      }
      iVar8 = iVar8 + 1;
      iVar4 = GameState_GetTotalCarCount();
    } while (iVar8 < iVar4);
  }
  return;
}

// 0x001e5a80  size 0x8
void Race_Nop_2(void)

{
  return;
}

// 0x001e5a90  size 0xa4
void RaceHud_UpdateSprint(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = GameState_GetPlayerCount();
  if (0 < lVar2) {
    do {
      iVar1 = RaceHud_GetRacerPanel(iVar4);
      uVar3 = RaceHud_UpdateTimePanel(param_1,iVar4);
      RaceHud_UpdateLapPanel(param_1,iVar4,uVar3);
      RaceHud_UpdatePlayerPanel(param_1,iVar4);
      iVar4 = iVar4 + 1;
      *(int *)(iVar1 + 0xb8) = *(int *)(iVar1 + 0xb8) + 1;
      iVar1 = GameState_GetPlayerCount();
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x001e5b40  size 0x8
void Race_Nop_3(void)

{
  return;
}

// 0x001e5b50  size 0x224
void RaceHud_UpdatePlayerPanel(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  RaceCar *pRVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar1 = RaceHud_GetRacerPanel(param_2);
  uVar5 = RaceProg_GetArray_34((char)param_2);
  iVar2 = SpGauge_GetValue(uVar5);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffff7f;
  pRVar3 = RaceCar_Get((int)param_2);
  uVar6 = RaceCar_GetFlags(pRVar3);
  if (((uVar6 & 0x100) != 0) && (iVar2 < *(int *)(iVar1 + 0xa4))) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80;
  }
  iVar4 = *(int *)(iVar1 + 0xa4);
  if (iVar4 < iVar2) {
    if (iVar4 + 0x28 < iVar2) {
      *(int *)(iVar1 + 0xa4) = *(int *)(iVar1 + 0xa4) + 0x28;
    }
    else {
      *(int *)(iVar1 + 0xa4) = iVar2;
    }
  }
  else if (iVar2 < iVar4) {
    if (iVar2 < iVar4 + -0x28) {
      *(int *)(iVar1 + 0xa4) = iVar4 + -0x28;
    }
    else {
      *(int *)(iVar1 + 0xa4) = iVar2;
    }
  }
  if (*(int *)(iVar1 + 0x98) == -1) {
    return;
  }
  iVar4 = RaceProg_GetSplit(uVar5);
  iVar2 = *(int *)(iVar1 + 0xa8);
  if (iVar2 < iVar4) {
    if (iVar2 + 0x28 < iVar4) {
      *(int *)(iVar1 + 0xa8) = *(int *)(iVar1 + 0xa8) + 0x28;
    }
    else {
      *(int *)(iVar1 + 0xa8) = iVar4;
    }
  }
  else if (iVar4 < iVar2) {
    if (iVar4 < iVar2 + -0x28) {
      *(int *)(iVar1 + 0xa8) = iVar2 + -0x28;
    }
    else {
      *(int *)(iVar1 + 0xa8) = iVar4;
    }
  }
  if (iVar4 - iVar2 < 1) {
    lVar7 = RaceScene_IsFlag10();
    if ((lVar7 == 0) && ((param_2 == 0 || (uVar6 = RaceHud_GetFlags(), (uVar6 & 1) != 0)))) {
      RaceUi_PlayCue(0,param_2);
      iVar2 = *(int *)(iVar1 + 0x98);
      goto LAB_001e5cc8;
    }
  }
  else {
    lVar7 = RaceScene_IsFlag10();
    if ((lVar7 == 0) && ((param_2 == 0 || (uVar6 = RaceHud_GetFlags(), (uVar6 & 1) != 0)))) {
      RaceUi_PlayCue(1,param_2);
    }
  }
  iVar2 = *(int *)(iVar1 + 0x98);
LAB_001e5cc8:
  iVar2 = iVar2 * 0x1c + (int)uVar5;
  *(int *)(iVar1 + 0xb4) = *(int *)(iVar2 + 0x100) + *(int *)(iVar2 + 0x104);
  return;
}

// 0x001e5d80  size 0x1a4
void RaceHud_UpdateLapPanel(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = RaceHud_GetRacerPanel(param_2);
  if (param_3 == -1) {
    iVar4 = RaceProg_GetArray_34((char)param_2);
    if (*(int *)(iVar3 + 0x9c) != *(int *)(iVar3 + 0x98)) {
      *(undefined4 *)(iVar3 + 0xb8) = 0;
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffffb;
      *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(iVar3 + 0x98);
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 8;
      cVar2 = GameState_Get_354_7050();
      if (cVar2 == '\a') {
        *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x100;
      }
      uVar1 = *(uint *)(*(int *)(iVar3 + 0x98) * 0x1c + iVar4 + 0x10c);
      if ((uVar1 & 8) == 0) {
        if ((uVar1 & 0x10) != 0) {
          *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x10;
        }
      }
      else {
        *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x20;
        *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x40;
        cVar2 = GameState_Get_354_7050();
        if (cVar2 == '\a') {
          *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x400;
        }
      }
    }
  }
  else if (*(int *)(iVar3 + 0x98) != param_3) {
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffff7;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xffffffef;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xffffffdf;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xffffffbf;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffeff;
    *(undefined4 *)(iVar3 + 0xa8) = 0;
    *(int *)(iVar3 + 0x98) = param_3;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 4;
  }
  return;
}

// 0x001e5f30  size 0x9c
int RaceHud_UpdateTimePanel(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = RaceHud_GetRacerPanel(param_2);
  iVar2 = RaceProg_GetArray_34((char)param_2);
  iVar4 = -1;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  iVar3 = 0;
  do {
    if (*(int *)(iVar2 + 0xf8) == -1) {
      return iVar4;
    }
    if ((*(uint *)(iVar2 + 0x10c) & 0xe) == 0) {
      if ((*(uint *)(iVar2 + 0x10c) & 1) != 0) {
        iVar4 = iVar3;
      }
      *(int *)(iVar1 + 0xac) = *(int *)(iVar1 + 0xac) + 1;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x1c;
  } while (iVar3 < 0x46);
  return iVar4;
}

// 0x001e5fd0  size 0xa4
void RaceHud_UpdateTimeAttack(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = GameState_GetPlayerCount();
  if (0 < lVar2) {
    do {
      iVar1 = RaceHud_GetRacerPanel(iVar4);
      uVar3 = RaceHud_UpdateTimePanel(param_1,iVar4);
      RaceHud_UpdateLapPanel(param_1,iVar4,uVar3);
      RaceHud_UpdatePlayerPanel(param_1,iVar4);
      iVar4 = iVar4 + 1;
      *(int *)(iVar1 + 0xb8) = *(int *)(iVar1 + 0xb8) + 1;
      iVar1 = GameState_GetPlayerCount();
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x001e6080  size 0x130
void RaceHud_UpdateMap(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = 0;
  lVar5 = GameState_GetTotalCarCount();
  if (0 < lVar5) {
    do {
      iVar2 = RaceHud_GetRacerPanel(iVar7);
      uVar6 = RaceProg_GetArray_28((char)iVar7);
      uVar3 = Raceprog_Nop(uVar6);
      *(undefined4 *)(iVar2 + 0x8c) = uVar3;
      iVar4 = *(int *)(iVar2 + 0x8c);
      iVar1 = *(int *)(iVar2 + 0x90);
      if (iVar1 < iVar4) {
        if (iVar1 + 10000 < iVar4) {
          *(int *)(iVar2 + 0x90) = *(int *)(iVar2 + 0x90) + 10000;
        }
        else {
          *(int *)(iVar2 + 0x90) = iVar4;
        }
      }
      else if (iVar4 < iVar1) {
        if (iVar4 < iVar1 + -10000) {
          *(int *)(iVar2 + 0x90) = iVar1 + -10000;
        }
        else {
          *(int *)(iVar2 + 0x90) = iVar4;
        }
      }
      if (((float)*(int *)(iVar2 + 0x8c) / 5e+06 < 0.25) &&
         (lVar5 = RaceScene_IsPaused(), lVar5 == 0)) {
        *(int *)(iVar2 + 0x94) = *(int *)(iVar2 + 0x94) + 1;
      }
      iVar7 = iVar7 + 1;
      iVar4 = GameState_GetTotalCarCount();
    } while (iVar7 < iVar4);
  }
  return;
}

// 0x001e61c0  size 0x380
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rpm, speed, gear */

void RaceHud_UpdateMeters(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  RaceCar *pRVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  iVar1 = RaceHud_GetRacerPanel(param_2);
  pRVar2 = RaceCar_Get((int)param_2);
  uVar12 = RaceCar_GetSpeedKmh(pRVar2);
  *(undefined4 *)(iVar1 + 0x14) = uVar12;
  uVar12 = RaceCar_GetRpm(pRVar2);
  *(undefined4 *)(iVar1 + 0x2c) = uVar12;
  iVar11 = 0;
  iVar10 = 0;
  *(float *)(iVar1 + 0x44) = (float)pRVar2->unk_0ac0 - 1.0;
  iVar5 = iVar1;
  do {
    iVar3 = RaceHud_GetMeterTable();
    pfVar4 = (float *)(iVar3 + iVar10);
    *(float *)(iVar5 + 0x18) =
         pfVar4[1] +
         ((*pfVar4 - pfVar4[1]) * (*(float *)(iVar5 + 0x14) - *(float *)(iVar5 + 0x10))) /
         (*(float *)(iVar5 + 0xc) - *(float *)(iVar5 + 0x10));
    fVar13 = *(float *)(iVar5 + 0x1c) + pfVar4[2];
    if (*(float *)(iVar5 + 0x18) <= fVar13) {
      fVar13 = *(float *)(iVar5 + 0x1c) - pfVar4[2];
      if (*(float *)(iVar5 + 0x18) < fVar13) {
        *(float *)(iVar5 + 0x18) = fVar13;
      }
    }
    else {
      *(float *)(iVar5 + 0x18) = fVar13;
    }
    if (*(float *)(iVar5 + 0x18) <= *pfVar4) {
      if (*(float *)(iVar5 + 0x18) < pfVar4[1]) {
        *(float *)(iVar5 + 0x18) = pfVar4[1];
      }
    }
    else {
      *(float *)(iVar5 + 0x18) = *pfVar4;
    }
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + 0x18;
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar5 + 0x18);
    iVar5 = iVar5 + 0x18;
  } while (iVar11 < 3);
  cVar9 = (char)param_2;
  *(uint *)(iVar1 + 0x50) = pRVar2->gear;
  uVar6 = RaceProg_GetArray_1c(cVar9);
  iVar5 = RaceRule_GetParams(uVar6);
  *(undefined1 *)(iVar1 + 0x7c) = *(undefined1 *)(iVar5 + 8);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar5 + 0xc);
  *(undefined1 *)(iVar1 + 0x84) = *(undefined1 *)(iVar5 + 0x10);
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(iVar5 + 0x14);
  uVar12 = RaceCar_GetPosition(pRVar2);
  *(undefined4 *)(iVar1 + 0x60) = uVar12;
  uVar7 = RaceProg_Get_4();
  if ((uVar7 & 4) != 0) {
    uVar6 = RaceProg_GetArray_40(cVar9);
    LapTime_FormatBest(uVar6,iVar1 + 0xbc,iVar1 + 0xc0,iVar1 + 0xc4);
  }
  if (_g_AiDrivers == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(cVar9 * 4 + _g_AiDrivers + 8);
  }
  *(uint *)(iVar1 + 0x5c) = (uint)(0.0 < *(float *)(iVar5 + 0xc));
  fVar13 = (float)pRVar2->unk_0bd0 / 100.0;
  *(float *)(iVar1 + 0x54) = fVar13;
  if (1.0 <= fVar13) {
    *(undefined4 *)(iVar1 + 0x54) = 0x3f800000;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
  }
  else {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
    if (*(float *)(iVar1 + 0x54) < 0.0) {
      *(undefined4 *)(iVar1 + 0x54) = 0;
    }
  }
  fVar13 = 0.0;
  iVar5 = 0;
  do {
    fVar14 = (float)Car_GetWheelLoad(pRVar2,iVar5);
    iVar5 = iVar5 + 1;
    fVar13 = fVar13 + fVar14;
  } while (iVar5 < 4);
  fVar13 = (fVar13 / 4.0) / 0.7;
  *(float *)(iVar1 + 0x58) = fVar13;
  if (1.0 <= fVar13) {
    *(undefined4 *)(iVar1 + 0x58) = 0x3f800000;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  }
  else {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
  }
  *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) + 1;
  uVar7 = RaceCar_GetFlags(pRVar2);
  if (((uVar7 & 0x100) == 0) || (cVar9 = RaceProg_GetPhase(), cVar9 != '\x03')) {
    *(undefined4 *)(iVar1 + 0x74) = 0;
  }
  else {
    lVar8 = RaceScene_IsPaused();
    if (lVar8 == 0) {
      *(int *)(iVar1 + 0x74) = *(int *)(iVar1 + 0x74) + 1;
    }
  }
  return;
}

// 0x001e6550  size 0x14c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceHud_UpdateMessages(void)

{
  char cVar1;
  long lVar2;
  
  cVar1 = RaceProg_GetPhase();
  if (cVar1 == '\x05') {
    if (*(int *)(_g_RaceHud + 0x288) == 0) {
      cVar1 = RaceHud_GetState();
      if (cVar1 != '\x04') {
        RaceHud_SetState();
      }
    }
    else {
      cVar1 = RaceHud_GetState();
      if (cVar1 != '\x02') {
        RaceHud_SetState();
      }
    }
  }
  else if (cVar1 == '\x03') {
    lVar2 = RaceScene_IsPaused();
    if (lVar2 == 0) {
      cVar1 = RaceHud_GetState();
      if (cVar1 == '\x05') {
        RaceHud_SetState(3);
      }
    }
    else {
      cVar1 = RaceHud_GetState();
      if (cVar1 == '\x03') {
        Se_PlayMenuVol(9,0x60);
        RaceHud_SetState(5);
      }
    }
  }
  else if (((cVar1 == '\x01') && (cVar1 = RaceHud_GetState(), cVar1 != '\x01')) &&
          (cVar1 = RaceHud_GetState(), cVar1 != '\x03')) {
    RaceHud_SetState(1);
  }
  return;
}

// 0x001e66a0  size 0x280
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceHud_Task(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  lVar3 = maybe_RaceHud_IsBusy();
  if ((lVar3 == 0) && (cVar1 = RaceProg_GetPhase(), cVar1 != '\0')) {
    if (_g_RaceSndShared1 == 0) {
      RaceHud_UpdateMessages(param_1);
      lVar3 = RaceScene_IsFlag10();
      if (lVar3 != 0) {
        RaceHud_SetFlags(4);
        if (*g_MenuInput != 1) {
          *g_MenuInput = 1;
        }
        uVar5 = g_MenuInput[2];
        if ((g_MenuInput[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*g_MenuInput != 1) {
          uVar5 = 0x100000;
        }
        if (((uVar5 == 0x10) && (lVar3 = RaceScene_IsPaused(), lVar3 == 0)) &&
           (uVar4 = RaceHud_GetFlags(), (uVar4 & 1) == 0)) {
          RaceHud_ToggleFlags(8);
          *(undefined4 *)(_g_RaceHud + 0x3b70) = 0x3f800000;
        }
      }
      maybe_GameState_GetFlag();
      uVar7 = GameState_Get_14();
      RaceHud_SetField268(uVar7);
      iVar6 = 0;
      lVar3 = GameState_GetTotalCarCount();
      if (0 < lVar3) {
        do {
          RaceHud_UpdateMeters(param_1,iVar6);
          iVar6 = iVar6 + 1;
          iVar2 = GameState_GetTotalCarCount();
        } while (iVar6 < iVar2);
      }
      __ptmf_scall(param_1);
      uVar4 = RaceHud_GetFlags();
      if ((uVar4 & 1) == 0) {
        iVar6 = RaceHud_GetRacerPanel(0);
        lVar3 = Cam_IsIdle(g_Loading->workBufs[0]);
        if ((lVar3 == 0) || (lVar3 = RaceScene_IsFlag10(), lVar3 != 0)) {
          *(undefined4 *)(iVar6 + 0x70) = 1;
        }
        else {
          *(undefined4 *)(iVar6 + 0x70) = 0;
        }
      }
      RaceHud_Task();
      uVar4 = RaceHud_GetFlags();
      if ((((uVar4 & 10) != 0) && (cVar1 = RaceHud_GetState(), cVar1 != '\x04')) &&
         ((lVar3 = Options_Get_c(), lVar3 == 1 && (_s_RaceIsReplayMode == 0)))) {
        if (_g_IntroCar != 0) {
          *(undefined4 *)(_g_IntroCar + 0x1c) = *(undefined4 *)(_g_RaceHud + 0x3b70);
        }
        maybe_IntroCar_Draw();
      }
    }
  }
  else {
    UiMgr_DrawAll(1);
  }
  return;
}

// 0x001e6920  size 0x18c
void RaceHud_GetLayout(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined *puVar16;
  byte bVar17;
  
  bVar17 = GameState_Get_354_7050();
  puVar16 = PTR_Race_Nop_0031c3e0;
  uVar15 = DAT_0031c3dc;
  puVar14 = PTR_RaceHud_UpdateBattle_0031c3d0;
  uVar13 = DAT_0031c3cc;
  puVar12 = PTR_RaceHud_UpdateRanking_0031c3c0;
  uVar11 = DAT_0031c3bc;
  puVar10 = PTR_Race_Nop_2_0031c3b0;
  uVar9 = DAT_0031c3ac;
  puVar8 = PTR_RaceHud_UpdateSprint_0031c3a0;
  uVar7 = DAT_0031c39c;
  puVar6 = PTR_Race_Nop_3_0031c390;
  uVar5 = DAT_0031c38c;
  puVar4 = PTR_RaceHud_UpdateTimeAttack_0031c380;
  uVar3 = DAT_0031c37c;
  puVar2 = PTR_RaceHud_UpdateMap_0031c370;
  uVar1 = DAT_0031c36c;
  if (bVar17 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar17) {
    case 0:
      *param_1 = DAT_0031c368;
      param_1[1] = uVar1;
      param_1[2] = puVar2;
      break;
    case 1:
      *param_1 = DAT_0031c378;
      param_1[1] = uVar3;
      param_1[2] = puVar4;
      break;
    case 2:
      goto switchD_001e6958_caseD_2;
    case 3:
      *param_1 = DAT_0031c398;
      param_1[1] = uVar7;
      param_1[2] = puVar8;
      break;
    default:
      *param_1 = DAT_0031c3a8;
      param_1[1] = uVar9;
      param_1[2] = puVar10;
      break;
    case 6:
      *param_1 = DAT_0031c3b8;
      param_1[1] = uVar11;
      param_1[2] = puVar12;
      break;
    case 7:
      *param_1 = DAT_0031c3c8;
      param_1[1] = uVar13;
      param_1[2] = puVar14;
      break;
    case 8:
      *param_1 = DAT_0031c3d8;
      param_1[1] = uVar15;
      param_1[2] = puVar16;
    }
  }
  else {
switchD_001e6958_caseD_2:
    *param_1 = DAT_0031c388;
    param_1[1] = uVar5;
    param_1[2] = puVar6;
  }
  return;
}

// 0x001e6ac0  size 0x2c
void RaceTask_FreeUi(void)

{
  RaceHud_Free();
  MenuWnd_Free();
  UiRes_FreeFonts();
  return;
}

// 0x001e6af0  size 0x8c
void RaceHud_Init(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  Gfx_SetFade(2,9,0,0);
  UiRes_LoadLocalizedAlloc(0x430750,0x1876,0x485);
  MenuWnd_Alloc(0x430750,0);
  RaceHud_Load(0x430750);
  RaceHud_GetLayout(uVar1);
  UiMgr_DrawAll(1);
  *(undefined1 **)(param_1 + 0x1c) = &LAB_001e6ab0;
  return;
}

// 0x001e6b80  size 0x3d8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceSnd_SetupCars(void)

{
  uchar uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  RaceCar *pRVar6;
  int iVar7;
  RacerState *pRVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong unaff_s1;
  ulong unaff_s2;
  int index;
  int iVar13;
  
  index = 0;
  lVar10 = GameState_GetRacerCount();
  if (0 < lVar10) {
    iVar13 = 0;
    do {
      pRVar6 = RaceCar_Get(index);
      if (pRVar6 != (RaceCar *)0x0) {
        if (_g_RaceSnd == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = _g_RaceSnd + iVar13;
        }
        iVar7 = RaceCar_GetIndex(pRVar6);
        sVar5 = CarRec_GetModelId(iVar7 + 0xc);
        uVar11 = RaceCar_GetIndex(pRVar6);
        uVar12 = CarRec_GetPartData(uVar11,0);
        if (uVar12 < 9) {
                    /* WARNING: Switch is manually overridden */
          switch((int)uVar12) {
          case 0:
            unaff_s2 = 0;
            break;
          case 1:
            unaff_s2 = 1;
            break;
          case 2:
            unaff_s2 = 1;
            break;
          case 3:
            unaff_s2 = 1;
            break;
          case 4:
            unaff_s2 = 2;
            break;
          case 5:
            unaff_s2 = 2;
            break;
          case 6:
            unaff_s2 = 2;
            break;
          case 7:
            unaff_s2 = 3;
            break;
          case 8:
            unaff_s2 = 3;
          }
        }
        uVar11 = RaceCar_GetIndex(pRVar6);
        uVar12 = CarRec_GetPartData(uVar11,2);
        if (uVar12 < 9) {
                    /* WARNING: Switch is manually overridden */
          switch((int)uVar12) {
          case 0:
            unaff_s1 = 0;
            break;
          case 1:
            unaff_s1 = 1;
            break;
          case 2:
            unaff_s1 = 1;
            break;
          case 3:
            unaff_s1 = 2;
            break;
          case 4:
            unaff_s1 = 2;
            break;
          case 5:
            unaff_s1 = 3;
            break;
          case 6:
            unaff_s1 = 3;
            break;
          case 7:
            unaff_s1 = 3;
            break;
          case 8:
            unaff_s1 = 4;
          }
        }
        if (unaff_s2 < unaff_s1) {
          uVar12 = unaff_s1;
        }
        else {
          uVar12 = unaff_s2;
        }
        iVar7 = RaceCar_GetIndex(pRVar6);
        pRVar8 = GameState_Elem_3e0_x540((int)*(char *)(iVar7 + 9));
        uVar3 = pRVar8->unk_8c;
        CarSnd_Attach(iVar9,pRVar6);
        if (uVar3 == 2) {
          uVar12 = 4;
        }
        if (((sVar5 == 0x9b) || (sVar5 == 0x9d)) || (sVar5 == 0x8b)) {
          (**(code **)(*(int *)(*(int *)(iVar9 + 0xc) + 8) + 8))(*(int *)(iVar9 + 0xc),3,uVar12);
          uVar1 = pRVar8->unk_49;
        }
        else {
          if (((pRVar8->unk_4c < 0x5dc) && (pRVar8->unk_4c != 0)) && (pRVar8->unk_48 != '\a')) {
            (**(code **)(*(int *)(*(int *)(iVar9 + 0xc) + 8) + 8))(*(int *)(iVar9 + 0xc),0,uVar12);
          }
          else {
            bVar2 = pRVar8->unk_48;
            if (bVar2 < 9) {
                    /* WARNING: Switch is manually overridden */
              switch(bVar2) {
              case 0:
                (**(code **)(*(int *)(*(int *)(iVar9 + 0xc) + 8) + 8))
                          (*(int *)(iVar9 + 0xc),3,uVar12);
                break;
              case 1:
                (**(code **)(*(int *)(*(int *)(iVar9 + 0xc) + 8) + 8))
                          (*(int *)(iVar9 + 0xc),3,uVar12);
                break;
              case 2:
                (**(code **)(*(int *)(*(int *)(iVar9 + 0xc) + 8) + 8))
                          (*(int *)(iVar9 + 0xc),4,uVar12);
                break;
              default:
                (**(code **)(*(int *)(*(int *)(iVar9 + 0xc) + 8) + 8))
                          (*(int *)(iVar9 + 0xc),1,uVar12);
                break;
              case 5:
              case 6:
                (**(code **)(*(int *)(*(int *)(iVar9 + 0xc) + 8) + 8))
                          (*(int *)(iVar9 + 0xc),5,uVar12);
                break;
              case 7:
                (**(code **)(*(int *)(*(int *)(iVar9 + 0xc) + 8) + 8))
                          (*(int *)(iVar9 + 0xc),2,uVar12);
              }
            }
          }
          uVar1 = pRVar8->unk_49;
        }
        if (uVar1 != '\0') {
          *(uint *)(*(int *)(iVar9 + 0xc) + 4) = *(uint *)(*(int *)(iVar9 + 0xc) + 4) | 0x40;
        }
        cVar4 = RaceCtx_Get_8();
        if (cVar4 == '\x0f') {
          *(uint *)(iVar9 + 0x14) = *(uint *)(iVar9 + 0x14) & 0xfffffffe;
        }
      }
      iVar13 = iVar13 + 0x80;
      index = index + 1;
      iVar9 = GameState_GetRacerCount();
    } while (index < iVar9);
  }
  return;
}

// 0x001e6f60  size 0x4d4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceSnd_UpdateMusic(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  RaceEntrySetup *pRVar6;
  float fVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  float fVar12;
  byte abStack_50 [80];
  
  iVar5 = RaceScene_IsPaused();
  if (iVar5 == *(int *)(param_1 + 0x18)) {
LAB_001e7340:
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  else {
    if (iVar5 == 0) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
      uVar2 = Options_Get_1c();
      uVar4 = Snd_VolumeToMidi(uVar2);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
                (*(int **)(param_1 + 0xc),*(undefined1 *)(param_1 + 8),uVar4,0x3f,1);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
      uVar2 = Options_Get_1c();
      uVar4 = Snd_VolumeToMidi(uVar2);
      (**(code **)(**(int **)(param_1 + 0x14) + 0x10))
                (*(int **)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x10),uVar4,0x3f,1);
      *(int *)(param_1 + 0x18) = iVar5;
    }
    fVar12 = DAT_0036e860;
    if (_s_RaceIsReplayMode != 0) goto LAB_001e7340;
    cVar3 = Options_Get_1c();
    *(int *)(param_1 + 0x1c) = (int)cVar3;
    lVar8 = Loading_IsActive();
    if (lVar8 != 0) {
      pRVar6 = GameState_Elem_f0_xcc(0);
      uVar9 = CarRec_GetPartData(pRVar6,0xb);
      fVar7 = 1.0;
      if (uVar9 < 6) {
                    /* WARNING: Switch is manually overridden */
        switch((int)uVar9) {
        case 0:
          fVar12 = fVar12 * 0.8;
          goto LAB_001e7114;
        case 1:
          fVar7 = 0.9;
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          fVar7 = 1.1;
          break;
        case 5:
          fVar7 = 1.2;
        }
      }
      fVar12 = fVar12 * fVar7;
    }
LAB_001e7114:
    uVar10 = SndMgr_GetInstance();
    uVar10 = SndMgr_GetSlot(uVar10,1);
    fVar12 = (float)*(int *)(param_1 + 0x1c) * fVar12;
    if (fVar12 < 2.1474836e+09) {
      uVar11 = (uint)fVar12;
    }
    else {
      uVar11 = (int)(fVar12 - 2.1474836e+09) | 0x80000000;
    }
    uVar4 = Snd_VolumeToMidi(uVar11);
    (**(code **)(*(int *)uVar10 + 0x20))(uVar10,uVar4);
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  cVar3 = Options_Get_1c();
  fVar12 = DAT_0036e860;
  if (((long)iVar5 == (long)cVar3) || (_s_RaceIsReplayMode != 0)) goto LAB_001e72f0;
  cVar3 = Options_Get_1c();
  *(int *)(param_1 + 0x1c) = (int)cVar3;
  lVar8 = Loading_IsActive();
  if (lVar8 != 0) {
    pRVar6 = GameState_Elem_f0_xcc(0);
    uVar9 = CarRec_GetPartData(pRVar6,0xb);
    fVar7 = 1.0;
    if (uVar9 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch((int)uVar9) {
      case 0:
        fVar12 = fVar12 * 0.8;
        goto LAB_001e726c;
      case 1:
        fVar7 = 0.9;
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        fVar7 = 1.1;
        break;
      case 5:
        fVar7 = 1.2;
      }
    }
    fVar12 = fVar12 * fVar7;
  }
LAB_001e726c:
  uVar10 = SndMgr_GetInstance();
  uVar10 = SndMgr_GetSlot(uVar10,1);
  fVar12 = (float)*(int *)(param_1 + 0x1c) * fVar12;
  if (fVar12 < 2.1474836e+09) {
    uVar11 = (uint)fVar12;
  }
  else {
    uVar11 = (int)(fVar12 - 2.1474836e+09) | 0x80000000;
  }
  uVar4 = Snd_VolumeToMidi(uVar11);
  (**(code **)(*(int *)uVar10 + 0x20))(uVar10,uVar4);
LAB_001e72f0:
  if (*(int *)(param_1 + 0x24) == 6) {
    cVar3 = RaceProg_GetPhase();
    bVar1 = cVar3 == '\x05';
  }
  else {
    cVar3 = RaceProg_GetPhase();
    bVar1 = cVar3 == '\a';
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x24) = 4;
  }
  else {
    lVar8 = RaceScene_IsPaused();
    if (lVar8 == 0) {
      cVar3 = RaceProg_GetPhase();
      if (cVar3 == '\x03') {
        (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x24) = 3;
      }
      else {
        cVar3 = RaceCtx_Get_8();
        if ((((cVar3 != '\f') && (cVar3 != '\v')) && (cVar3 != '\x10')) &&
           (GameState_LoadHeader(abStack_50), abStack_50[0] < 9)) {
          (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),0);
          *(undefined4 *)(param_1 + 0x24) = 3;
        }
      }
    }
  }
  return;
}

// 0x001e7440  size 0x2f8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceSnd_UpdateAmbient(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  RaceEntrySetup *pRVar4;
  float fVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  
  puVar9 = (undefined1 *)param_1;
  (**(code **)(**(int **)(puVar9 + 4) + 0x1c))();
  if (*(int *)(puVar9 + 0x18) == 0) {
    (**(code **)(**(int **)(puVar9 + 0xc) + 0x1c))();
  }
  else {
    (**(code **)(**(int **)(puVar9 + 0x14) + 0x1c))();
  }
  RaceSnd_PlayResult(param_1,param_1,5);
  uVar1 = Options_Get_1c();
  uVar3 = Snd_VolumeToMidi(uVar1);
  (**(code **)(**(int **)(puVar9 + 4) + 0x10))(*(int **)(puVar9 + 4),*puVar9,uVar3,0x3f,1);
  if (*(int *)(puVar9 + 0x18) == 0) {
    uVar1 = Options_Get_1c();
    uVar3 = Snd_VolumeToMidi(uVar1);
    (**(code **)(**(int **)(puVar9 + 0xc) + 0x10))(*(int **)(puVar9 + 0xc),puVar9[8],uVar3,0x3f,1);
  }
  else {
    uVar1 = Options_Get_1c();
    uVar3 = Snd_VolumeToMidi(uVar1);
    (**(code **)(**(int **)(puVar9 + 0x14) + 0x10))
              (*(int **)(puVar9 + 0x14),puVar9[0x10],uVar3,0x3f,1);
  }
  fVar14 = DAT_0036e860;
  if (_s_RaceIsReplayMode != 0) goto LAB_001e7580;
  cVar2 = Options_Get_1c();
  *(int *)(puVar9 + 0x1c) = (int)cVar2;
  lVar6 = Loading_IsActive();
  if (lVar6 != 0) {
    pRVar4 = GameState_Elem_f0_xcc(0);
    uVar7 = CarRec_GetPartData(pRVar4,0xb);
    fVar5 = 1.0;
    if (uVar7 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch((int)uVar7) {
      case 0:
        fVar14 = fVar14 * 0.8;
        goto LAB_001e7694;
      case 1:
        fVar5 = 0.9;
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        fVar5 = 1.1;
        break;
      case 5:
        fVar5 = 1.2;
      }
    }
    fVar14 = fVar14 * fVar5;
  }
LAB_001e7694:
  uVar8 = SndMgr_GetInstance();
  uVar8 = SndMgr_GetSlot(uVar8,1);
  fVar14 = (float)*(int *)(puVar9 + 0x1c) * fVar14;
  if (fVar14 < 2.1474836e+09) {
    uVar13 = (uint)fVar14;
  }
  else {
    uVar13 = (int)(fVar14 - 2.1474836e+09) | 0x80000000;
  }
  uVar3 = Snd_VolumeToMidi(uVar13);
  (**(code **)(*(int *)uVar8 + 0x20))(uVar8,uVar3);
LAB_001e7580:
  iVar12 = 0;
  lVar6 = GameState_GetRacerCount();
  if (0 < lVar6) {
    iVar11 = 0;
    do {
      if (_g_RaceSnd == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = _g_RaceSnd + iVar11;
      }
      CarSnd_StopVoice(iVar10);
      iVar11 = iVar11 + 0x80;
      iVar12 = iVar12 + 1;
      iVar10 = GameState_GetRacerCount();
    } while (iVar12 < iVar10);
  }
  *(undefined4 *)(puVar9 + 0x24) = 5;
  return;
}

// 0x001e7740  size 0x280
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceSnd_UpdateCars(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  
  lVar5 = RaceScene_IsPaused();
  if (lVar5 == 0) {
    if (*(int *)(param_1 + 0x24) == 6) {
      cVar2 = RaceProg_GetPhase();
      bVar1 = cVar2 == '\x05';
    }
    else {
      cVar2 = RaceProg_GetPhase();
      bVar1 = cVar2 == '\a';
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x24) = 4;
    }
    else {
      uVar9 = 0;
      iVar8 = 0;
      do {
        if (_g_RaceSnd == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = _g_RaceSnd + iVar8;
        }
        CarSnd_Update3d(iVar4,g_Loading->workBufs[uVar9 & 0xff]);
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 0x80;
      } while ((int)uVar9 < 2);
      lVar5 = RaceScene_IsFlag10();
      if (((lVar5 == 0) && (uVar6 = RaceProg_Get_4(), (uVar6 & 1) != 0)) &&
         (cVar2 = RaceProg_GetPhase(), cVar2 == '\x03')) {
        iVar8 = 0;
        lVar5 = GameState_GetRacerCount();
        if (0 < lVar5) {
          do {
            uVar7 = RaceProg_GetArray_28((char)iVar8);
            iVar4 = Raceprog_Nop(uVar7);
            if ((iVar4 < *(int *)(param_1 + 0x30)) &&
               (fVar10 = ((float)iVar4 / 0.25) / 5e+06, fVar10 < 1.0)) {
              if (*(int *)(param_1 + 0x2c) == 0) {
                *(int *)(param_1 + 0x2c) = (int)(fVar10 * 32.0 + 16.0);
                Se_PlayMenuVol(0,0x60);
              }
              else {
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
              }
            }
            *(int *)(param_1 + 0x30) = iVar4;
            param_1 = param_1 + 0xc;
            iVar8 = iVar8 + 1;
            iVar4 = GameState_GetRacerCount();
          } while (iVar8 < iVar4);
        }
      }
    }
  }
  else {
    iVar8 = 0;
    lVar5 = GameState_GetRacerCount();
    if (0 < lVar5) {
      iVar4 = 0;
      do {
        if (_g_RaceSnd == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = _g_RaceSnd + iVar4;
        }
        CarSnd_StopVoice(iVar3);
        iVar4 = iVar4 + 0x80;
        iVar8 = iVar8 + 1;
        iVar3 = GameState_GetRacerCount();
      } while (iVar8 < iVar3);
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),1);
    *(undefined4 *)(param_1 + 0x24) = 6;
  }
  return;
}

// 0x001e79d0  size 0x70c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceSnd_UpdateAnnouncer(int param_1)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  RaceEntrySetup *pRVar6;
  float fVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  
  cVar3 = RaceCtx_Get_8();
  if (cVar3 == '\x0f') {
    if (*(int *)(param_1 + 0x24) == 6) {
      cVar3 = RaceProg_GetPhase();
      bVar2 = cVar3 == '\x05';
    }
    else {
      cVar3 = RaceProg_GetPhase();
      bVar2 = cVar3 == '\a';
    }
    if (bVar2) {
      (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
      if (*(int *)(param_1 + 0x18) == 0) {
        (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
      }
      iVar12 = 0;
      lVar8 = GameState_GetRacerCount();
      if (0 < lVar8) {
        iVar11 = 0;
        do {
          if (_g_RaceSnd == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = _g_RaceSnd + iVar11;
          }
          CarSnd_StopVoice(iVar5);
          iVar11 = iVar11 + 0x80;
          iVar12 = iVar12 + 1;
          iVar5 = GameState_GetRacerCount();
        } while (iVar12 < iVar5);
      }
      *(undefined4 *)(param_1 + 0x24) = 5;
    }
    else {
      puVar1 = g_Loading->workBufs[0];
      iVar12 = 0;
      lVar8 = GameState_GetRacerCount();
      if (0 < lVar8) {
        iVar11 = 0;
        do {
          fVar14 = DAT_0036e860;
          if (*(int *)(puVar1 + 0x500) == 0) {
            if (_g_RaceSnd == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = _g_RaceSnd + iVar11;
            }
            CarSnd_Update3d(iVar5,puVar1);
          }
          else {
            if ((iVar12 == 0) && (_s_RaceIsReplayMode == 0)) {
              cVar3 = Options_Get_1c();
              *(int *)(param_1 + 0x1c) = (int)cVar3;
              lVar8 = Loading_IsActive();
              if (lVar8 != 0) {
                pRVar6 = GameState_Elem_f0_xcc(0);
                uVar9 = CarRec_GetPartData(pRVar6,0xb);
                fVar7 = 1.0;
                if (uVar9 < 6) {
                    /* WARNING: Switch is manually overridden */
                  switch((int)uVar9) {
                  case 0:
                    fVar14 = fVar14 * 0.8;
                    goto LAB_001e7bfc;
                  case 1:
                    fVar7 = 0.9;
                    break;
                  case 2:
                    break;
                  case 3:
                    break;
                  case 4:
                    fVar7 = 1.1;
                    break;
                  case 5:
                    fVar7 = 1.2;
                  }
                }
                fVar14 = fVar14 * fVar7;
              }
LAB_001e7bfc:
              uVar10 = SndMgr_GetInstance();
              uVar10 = SndMgr_GetSlot(uVar10,1);
              fVar14 = (float)*(int *)(param_1 + 0x1c) * fVar14;
              if (fVar14 < 2.1474836e+09) {
                uVar13 = (uint)fVar14;
              }
              else {
                uVar13 = (int)(fVar14 - 2.1474836e+09) | 0x80000000;
              }
              uVar4 = Snd_VolumeToMidi(uVar13);
              (**(code **)(*(int *)uVar10 + 0x20))(uVar10,uVar4);
            }
            if (_g_RaceSnd == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = _g_RaceSnd + iVar11;
            }
            CarSnd_StopVoice(iVar5);
          }
          iVar11 = iVar11 + 0x80;
          iVar12 = iVar12 + 1;
          iVar5 = GameState_GetRacerCount();
        } while (iVar12 < iVar5);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) == 6) {
      cVar3 = RaceProg_GetPhase();
      bVar2 = cVar3 == '\x05';
    }
    else {
      cVar3 = RaceProg_GetPhase();
      bVar2 = cVar3 == '\a';
    }
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x24) = 4;
    }
    else {
      lVar8 = RaceScene_IsPaused();
      if (lVar8 == 0) {
        lVar8 = RaceScene_IsFlag10();
        if ((((lVar8 == 0) && (uVar9 = RaceProg_Get_4(), (uVar9 & 1) != 0)) &&
            (cVar3 = RaceProg_GetPhase(), cVar3 == '\x03')) &&
           (uVar9 = RaceProg_Get_4(), (uVar9 & 0x80) == 0)) {
          uVar10 = RaceProg_GetArray_28(0);
          iVar12 = Raceprog_Nop(uVar10);
          if ((iVar12 < *(int *)(param_1 + 0x30)) &&
             (fVar14 = ((float)iVar12 / 0.25) / 5e+06, fVar14 < 1.0)) {
            if (*(int *)(param_1 + 0x2c) == 0) {
              *(int *)(param_1 + 0x2c) = (int)(fVar14 * 32.0 + 16.0);
              Se_PlayMenuVol(0,0x60);
            }
            else {
              *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
            }
          }
          *(int *)(param_1 + 0x30) = iVar12;
        }
        puVar1 = g_Loading->workBufs[0];
        iVar12 = 0;
        lVar8 = GameState_GetRacerCount();
        if (0 < lVar8) {
          iVar11 = 0;
          do {
            fVar14 = DAT_0036e860;
            if (*(int *)(puVar1 + 0x500) == 0) {
              if (_g_RaceSnd == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = _g_RaceSnd + iVar11;
              }
              CarSnd_Update3d(iVar5,puVar1);
            }
            else {
              if ((iVar12 == 0) && (_s_RaceIsReplayMode == 0)) {
                cVar3 = Options_Get_1c();
                *(int *)(param_1 + 0x1c) = (int)cVar3;
                lVar8 = Loading_IsActive();
                if (lVar8 != 0) {
                  pRVar6 = GameState_Elem_f0_xcc(0);
                  uVar9 = CarRec_GetPartData(pRVar6,0xb);
                  fVar7 = 1.0;
                  if (uVar9 < 6) {
                    /* WARNING: Switch is manually overridden */
                    switch((int)uVar9) {
                    case 0:
                      fVar14 = fVar14 * 0.8;
                      goto LAB_001e7fb4;
                    case 1:
                      fVar7 = 0.9;
                      break;
                    case 2:
                      break;
                    case 3:
                      break;
                    case 4:
                      fVar7 = 1.1;
                      break;
                    case 5:
                      fVar7 = 1.2;
                    }
                  }
                  fVar14 = fVar14 * fVar7;
                }
LAB_001e7fb4:
                uVar10 = SndMgr_GetInstance();
                uVar10 = SndMgr_GetSlot(uVar10,1);
                fVar14 = (float)*(int *)(param_1 + 0x1c) * fVar14;
                if (fVar14 < 2.1474836e+09) {
                  uVar13 = (uint)fVar14;
                }
                else {
                  uVar13 = (int)(fVar14 - 2.1474836e+09) | 0x80000000;
                }
                uVar4 = Snd_VolumeToMidi(uVar13);
                (**(code **)(*(int *)uVar10 + 0x20))(uVar10,uVar4);
              }
              if (_g_RaceSnd == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = _g_RaceSnd + iVar11;
              }
              CarSnd_StopVoice(iVar5);
            }
            iVar11 = iVar11 + 0x80;
            iVar12 = iVar12 + 1;
            iVar5 = GameState_GetRacerCount();
          } while (iVar12 < iVar5);
        }
      }
      else {
        iVar12 = 0;
        lVar8 = GameState_GetRacerCount();
        if (0 < lVar8) {
          iVar11 = 0;
          do {
            if (_g_RaceSnd == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = _g_RaceSnd + iVar11;
            }
            CarSnd_StopVoice(iVar5);
            iVar11 = iVar11 + 0x80;
            iVar12 = iVar12 + 1;
            iVar5 = GameState_GetRacerCount();
          } while (iVar12 < iVar5);
        }
        (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),1);
        *(undefined4 *)(param_1 + 0x24) = 6;
      }
    }
  }
  return;
}

