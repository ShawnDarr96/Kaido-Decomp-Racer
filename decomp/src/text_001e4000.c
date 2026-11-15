// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001e4000 - 0x001e8000
#include "ghidra_types.h"

// 0x001e43b0  size 0x4d4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceCam_UpdateFree(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStack_e0 [4];
  float fStack_dc;
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
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  
  cVar2 = RaceCtx_GetMode();
  if ((cVar2 == '\x04') && (*(char *)(*(int *)(_g_Loading + 0x14) + 0x4f8) == '\x03')) {
    uRam00430668 = 0;
    uRam0043066c = 0;
  }
  else {
    uVar9 = 0;
    pbVar8 = &DAT_0031c2e0;
    do {
      iVar6 = ((uint)*pbVar8 * 0x18 - (uint)*pbVar8) * 0x40;
      if (*(int *)(iVar6 + 0x431684) != 0) {
        iVar1 = *(int *)(pbVar8 + 4);
        uStack_10 = DAT_0031c300;
        fStack_c = DAT_0031c304;
        uStack_50 = DAT_0031c310;
        uStack_8 = DAT_0031c308;
        uStack_4 = DAT_0031c30c;
        uStack_4c = DAT_0031c314;
        uStack_48 = DAT_0031c318;
        uStack_44 = DAT_0031c31c;
        iVar3 = *(int *)(param_1 + iVar1 * 4 + 0x1c);
        puVar7 = (uint *)(iVar3 + 0x110);
        if ((*(uint *)(iVar3 + 0x110) & 0xc) == 0) {
          if (iVar1 == 0) {
            uRam00430668 = 0;
          }
          else {
            uRam0043066c = 0;
          }
        }
        else {
          if (iVar1 == 0) {
            uRam00430668 = 1;
          }
          else {
            uRam0043066c = 1;
          }
          if ((*puVar7 & 8) == 0) {
            fStack_c = DAT_0031c304 - 0.02;
          }
          uVar4 = RaceCar_Get(iVar1);
          uVar5 = RaceCar_GetIndex(uVar4);
          iVar3 = (int)uVar4;
          uStack_d0 = *(undefined4 *)(iVar3 + 0xe0);
          uStack_cc = *(undefined4 *)(iVar3 + 0xe4);
          uStack_c8 = *(undefined4 *)(iVar3 + 0xe8);
          uStack_c4 = *(undefined4 *)(iVar3 + 0xec);
          uStack_c0 = *(undefined4 *)(iVar3 + 0xf0);
          uStack_bc = *(undefined4 *)(iVar3 + 0xf4);
          uStack_b8 = *(undefined4 *)(iVar3 + 0xf8);
          uStack_b4 = *(undefined4 *)(iVar3 + 0xfc);
          uStack_b0 = *(undefined4 *)(iVar3 + 0x100);
          uStack_ac = *(undefined4 *)(iVar3 + 0x104);
          uStack_a8 = *(undefined4 *)(iVar3 + 0x108);
          uStack_a4 = *(undefined4 *)(iVar3 + 0x10c);
          uStack_a0 = *(undefined4 *)(iVar3 + 0x110);
          uStack_9c = *(undefined4 *)(iVar3 + 0x114);
          uStack_98 = *(undefined4 *)(iVar3 + 0x118);
          uStack_94 = *(undefined4 *)(iVar3 + 0x11c);
          iVar3 = CarRec_GetPartData(uVar5,0xc);
          fVar10 = ((float)iVar3 + 5.0) / 5.0 - 1.0;
          maybe_Vu0_UnitMatrix(auStack_90);
          sceVu0CopyVector(auStack_90,&uStack_d0);
          sceVu0CopyVector(auStack_80,&uStack_c0);
          sceVu0CopyVector(auStack_70,&uStack_b0);
          sceVu0CopyVector(auStack_20,&uStack_a0);
          sceVu0ApplyMatrix(auStack_30,auStack_90,&uStack_10);
          sceVu0CopyVector(auStack_e0,auStack_20);
          fStack_dc = fStack_dc + 0.4;
          if (iVar1 == 0) {
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
          if ((*puVar7 & 8) == 0) {
            Camera_BuildScreenMatrix
                      (fVar10 + 0.6,fVar10 + 1.0,&g_Views + iVar6,auStack_20,auStack_30,&uStack_50);
          }
          else {
            Camera_BuildScreenMatrix
                      (fVar10 + 0.65,fVar10 + 1.2,&g_Views + iVar6,auStack_20,auStack_30,&uStack_50)
            ;
          }
        }
      }
      uVar9 = uVar9 + 1;
      pbVar8 = pbVar8 + 8;
    } while (uVar9 < 3);
  }
  return;
}

// 0x001e48a0  size 0x874
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Race_SetupCars(undefined8 param_1,uint *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  if (iRam0036f34c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((char)param_4 * 4 + iRam0036f34c + 8);
  }
  iVar3 = RaceCar_GetIndex(param_3);
  if ((*(uint *)(iVar3 + 4) & 0x100) == 0) {
    *param_2 = *param_2 & 0xfffff7ff;
  }
  else {
    *param_2 = *param_2 | 0x800;
  }
  if (*(short *)(iVar3 + 0xc) == 0x11e) {
    uVar4 = RaceCar_GetFlags(param_3);
    if ((uVar4 & 0x8000) == 0) {
      fVar7 = (float)RaceCar_GetSpeedKmh(param_3);
      if (80.0 < fVar7) {
        RaceCar_SetFlags(param_3,0x10000);
      }
      uVar4 = RaceCar_GetFlags(param_3);
      if ((uVar4 & 0x10000) != 0) {
        fVar7 = (float)RaceCar_GetSpeedKmh(param_3);
        if (10.0 <= fVar7) {
          fVar7 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar7 + 0.02);
          if (1.0 <= fVar7 + 0.02) {
            param_2[0xdf] = 0x3f800000;
            RaceCar_SetFlags(param_3,0x8000);
            RaceCar_ClearFlags(param_3,0x10000);
          }
        }
        else {
          fVar7 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar7 - 0.02);
          if (fVar7 - 0.02 <= 0.0) {
            param_2[0xdf] = 0;
            RaceCar_ClearFlags(param_3,0x10000);
          }
        }
      }
    }
    else {
      fVar7 = (float)RaceCar_GetSpeedKmh(param_3);
      if (fVar7 < 10.0) {
        RaceCar_SetFlags(param_3,0x10000);
      }
      uVar4 = RaceCar_GetFlags(param_3);
      if ((uVar4 & 0x10000) != 0) {
        fVar7 = (float)RaceCar_GetSpeedKmh(param_3);
        if (80.0 < fVar7) {
          fVar7 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar7 + 0.02);
          if (1.0 <= fVar7 + 0.02) {
            param_2[0xdf] = 0x3f800000;
            RaceCar_ClearFlags(param_3,0x10000);
          }
        }
        else {
          fVar7 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar7 - 0.02);
          if (fVar7 - 0.02 <= 0.0) {
            param_2[0xdf] = 0;
            RaceCar_ClearFlags(param_3,0x8000);
            RaceCar_ClearFlags(param_3,0x10000);
          }
        }
      }
    }
  }
  iVar3 = RaceCar_GetIndex(param_3);
  uVar4 = RaceCar_GetFlags(param_3);
  iVar6 = (int)param_3;
  if (((uVar4 & 0x1000) == 0) && (uVar4 = RaceCar_GetFlags(param_3), (uVar4 & 0x2000) == 0)) {
    *(undefined4 *)(iVar6 + 0x17c4) = 0;
    *param_2 = *param_2 & 0xfffffe7f;
  }
  else {
    *(int *)(iVar6 + 0x17c4) = *(int *)(iVar6 + 0x17c4) + 1;
    if (0x31 < *(int *)(iVar6 + 0x17c4)) {
      *(undefined4 *)(iVar6 + 0x17c4) = 0;
    }
  }
  uVar4 = RaceCar_GetFlags(param_3);
  if ((uVar4 & 0x1000) == 0) {
    *param_2 = *param_2 & 0xffffff7f;
  }
  else if (*(int *)(iVar6 + 0x17c4) % 0x32 < 0x19) {
    *param_2 = *param_2 | 0x80;
  }
  else {
    *param_2 = *param_2 & 0xffffff7f;
  }
  uVar4 = RaceCar_GetFlags(param_3);
  if ((uVar4 & 0x2000) == 0) {
    *param_2 = *param_2 & 0xfffffeff;
  }
  else if (*(int *)(iVar6 + 0x17c4) % 0x32 < 0x19) {
    *param_2 = *param_2 | 0x100;
  }
  else {
    *param_2 = *param_2 & 0xfffffeff;
  }
  uVar4 = RaceCar_GetFlags(param_3);
  if (((uVar4 & 0x10) != 0) && (*(int *)(iVar6 + 0x17bc) != 0)) {
    *(int *)(iVar6 + 0x17bc) = *(int *)(iVar6 + 0x17bc) + -1;
  }
  uVar4 = RaceCar_GetFlags(param_3);
  if ((uVar4 & 0x20) == 0) {
    uVar4 = RaceCar_GetFlags(param_3);
    if ((uVar4 & 0x40) != 0) {
      uVar2 = CarRec_GetModelId(iVar3 + 0xc);
      iVar3 = GameState_Elem_3e0_x540(uVar2);
      if (*(int *)(iVar3 + 0x90) == 0) {
        RaceCar_ClearFlags(param_3,0x10);
        param_2[0xdd] = 0;
        RaceCar_ClearFlags(param_3,0x40);
      }
      else if (*(int *)(iVar6 + 0x17bc) == 0) {
        RaceCar_ClearFlags(param_3,0x10);
        fVar7 = (float)param_2[0xdd];
        param_2[0xdd] = (uint)(fVar7 - 0.05);
        if (fVar7 - 0.05 <= 0.0) {
          param_2[0xdd] = 0;
          RaceCar_ClearFlags(param_3,0x40);
        }
      }
    }
  }
  else {
    RaceCar_ClearFlags(param_3,0x40);
    iVar3 = GameState_Elem_3e0_x540(*(undefined1 *)(iVar3 + 9));
    if (*(int *)(iVar3 + 0x90) == 0) {
      param_2[0xdd] = 0x3f800000;
      RaceCar_ClearFlags(param_3,0x20);
      RaceCar_SetFlags(param_3,0x10);
      *(undefined4 *)(iVar6 + 0x17bc) = 0;
      uVar4 = RaceCar_GetFlags(param_3);
      if ((uVar4 & 0x80) != 0) {
        *(undefined4 *)(iVar6 + 0x17c0) = 3;
      }
    }
    else {
      fVar7 = (float)param_2[0xdd];
      param_2[0xdd] = (uint)(fVar7 + 0.05);
      if (1.0 <= fVar7 + 0.05) {
        param_2[0xdd] = 0x3f800000;
        RaceCar_ClearFlags(param_3,0x20);
        RaceCar_SetFlags(param_3,0x10);
        *(undefined4 *)(iVar6 + 0x17bc) = 0x14;
        uVar4 = RaceCar_GetFlags(param_3);
        if ((uVar4 & 0x80) != 0) {
          *(undefined4 *)(iVar6 + 0x17c0) = 3;
        }
      }
    }
  }
  uVar4 = RaceCar_GetFlags(param_3);
  if (((uVar4 & 8) == 0) || (uVar4 = RaceCar_GetFlags(param_3), (uVar4 & 0x10) == 0)) {
    *param_2 = *param_2 & 0xfffffffb;
  }
  else {
    *param_2 = *param_2 | 4;
  }
  cVar1 = GameState_Get_3();
  if (cVar1 == '\x01') {
    uVar4 = RaceCar_GetFlags(param_3);
    if ((uVar4 & 8) == 0) {
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
  uVar4 = RaceCar_GetFlags(param_3);
  if ((uVar4 & 0x80) == 0) {
    iVar3 = *(int *)(iVar6 + 0x17c0);
LAB_001e4e1c:
    if (iVar3 == 0) {
      *param_2 = *param_2 & 0xfffffff7;
      goto LAB_001e4e50;
    }
  }
  else {
    uVar4 = RaceCar_GetFlags(param_3);
    if ((uVar4 & 0x10) == 0) {
      iVar3 = *(int *)(iVar6 + 0x17c0);
      goto LAB_001e4e1c;
    }
  }
  if (*(int *)(iVar6 + 0x17c0) != 0) {
    *(int *)(iVar6 + 0x17c0) = *(int *)(iVar6 + 0x17c0) + -1;
  }
  *param_2 = *param_2 | 8;
LAB_001e4e50:
  uVar4 = RaceCar_GetFlags(param_3);
  if ((uVar4 & 0x4000) == 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  else {
    *param_2 = *param_2 | 0x20;
  }
  if (((*(uint *)(iVar5 + 0x10) & 0x200) == 0) || (*(int *)(iVar6 + 0x814) != -1)) {
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
  if ((*(char *)(*(int *)(_g_Loading + 0x14) + 0x4f8) == '\x03') || (iRam0046a594 != 0)) {
    param_2[0xe4] = 0;
  }
  else {
    param_2[0xe4] = 1;
  }
  param_2[0xe1] = 1;
  return;
}

// 0x001e5120  size 0x398
void Race_SetupCarFlags(undefined8 param_1,uint *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (iRam0036f34c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((char)param_4 * 4 + iRam0036f34c + 8);
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

// 0x001e54c0  size 0x208
void Race_LoadCourse(undefined4 *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 auStack_200 [64];
  undefined4 auStack_100 [64];
  
  if (iRam0036f1f8 == 0) {
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
  iVar7 = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar6 = param_1;
  do {
    lVar3 = RaceCar_Get(iVar7);
    iVar1 = GameState_Elem_f0_xcc(iVar7);
    if (lVar3 == 0) {
      if (puVar6[7] != 0) {
        CarModel_SwapParts();
        puVar6[7] = 0;
      }
    }
    else if ((*(uint *)(iVar1 + 4) & 0x80) == 0) {
      if (puVar6[7] != 0) {
        Race_SetupCarFlags(param_1,puVar6[7] + 0x110,lVar3,iVar7);
      }
    }
    else {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffff7f;
      if (puVar6[7] != 0) {
        CarModel_SwapParts();
      }
      GameState_CopyCourseRecord(auStack_200,*(undefined1 *)(iVar1 + 9));
      puVar5 = auStack_200;
      puVar4 = auStack_100;
      iVar1 = 0x20;
      do {
        iVar1 = iVar1 + -1;
        uVar2 = puVar5[1];
        *puVar4 = *puVar5;
        puVar4[1] = uVar2;
        puVar5 = puVar5 + 2;
        puVar4 = puVar4 + 2;
      } while (0 < iVar1);
      uVar2 = SceneObj_CreateCar(auStack_100);
      puVar6[7] = uVar2;
      Race_SetupCarFlags(param_1,puVar6[7] + 0x110,lVar3,iVar7);
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar7 < 3);
  Skid_ClearAll();
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
  showroom_load_sub_002d36c0(0x430750);
  Race_LoadCourse(param_1,1);
  return;
}

// 0x001e5770  size 0x24
void RaceTask_FreeCourse(void)

{
  showroom_exit_sub_002d3550();
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
  
  iVar2 = racehud_leaf_sub_002cfb30(0);
  iVar1 = *(int *)(iVar2 + 0xb0);
  iVar8 = 0;
  lVar6 = GameState_GetPlayerCount();
  if (lVar6 < 1) {
    uVar3 = *(uint *)(iVar2 + 4);
  }
  else {
    do {
      iVar4 = racehud_leaf_sub_002cfb30(iVar8);
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
  racehud_leaf_sub_002cfac0(uVar7);
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
      iVar2 = racehud_leaf_sub_002cfb30(iVar8);
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
      iVar1 = racehud_leaf_sub_002cfb30(iVar4);
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
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar1 = racehud_leaf_sub_002cfb30(param_2);
  uVar4 = RaceProg_GetArray_34((char)param_2);
  iVar2 = SpGauge_GetValue(uVar4);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffff7f;
  uVar5 = RaceCar_Get(param_2);
  uVar6 = RaceCar_GetFlags(uVar5);
  if (((uVar6 & 0x100) != 0) && (iVar2 < *(int *)(iVar1 + 0xa4))) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80;
  }
  iVar3 = *(int *)(iVar1 + 0xa4);
  if (iVar3 < iVar2) {
    if (iVar3 + 0x28 < iVar2) {
      *(int *)(iVar1 + 0xa4) = *(int *)(iVar1 + 0xa4) + 0x28;
    }
    else {
      *(int *)(iVar1 + 0xa4) = iVar2;
    }
  }
  else if (iVar2 < iVar3) {
    if (iVar2 < iVar3 + -0x28) {
      *(int *)(iVar1 + 0xa4) = iVar3 + -0x28;
    }
    else {
      *(int *)(iVar1 + 0xa4) = iVar2;
    }
  }
  if (*(int *)(iVar1 + 0x98) == -1) {
    return;
  }
  iVar3 = RaceProg_GetSplit(uVar4);
  iVar2 = *(int *)(iVar1 + 0xa8);
  if (iVar2 < iVar3) {
    if (iVar2 + 0x28 < iVar3) {
      *(int *)(iVar1 + 0xa8) = *(int *)(iVar1 + 0xa8) + 0x28;
    }
    else {
      *(int *)(iVar1 + 0xa8) = iVar3;
    }
  }
  else if (iVar3 < iVar2) {
    if (iVar3 < iVar2 + -0x28) {
      *(int *)(iVar1 + 0xa8) = iVar2 + -0x28;
    }
    else {
      *(int *)(iVar1 + 0xa8) = iVar3;
    }
  }
  if (iVar3 - iVar2 < 1) {
    lVar7 = race_leaf_sub_001e8fc0();
    if ((lVar7 == 0) && ((param_2 == 0 || (uVar6 = racehud_leaf_sub_002cfad0(), (uVar6 & 1) != 0))))
    {
      RaceUi_PlayCue(0,param_2);
      iVar2 = *(int *)(iVar1 + 0x98);
      goto LAB_001e5cc8;
    }
  }
  else {
    lVar7 = race_leaf_sub_001e8fc0();
    if ((lVar7 == 0) && ((param_2 == 0 || (uVar6 = racehud_leaf_sub_002cfad0(), (uVar6 & 1) != 0))))
    {
      RaceUi_PlayCue(1,param_2);
    }
  }
  iVar2 = *(int *)(iVar1 + 0x98);
LAB_001e5cc8:
  iVar2 = iVar2 * 0x1c + (int)uVar4;
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
  
  iVar3 = racehud_leaf_sub_002cfb30(param_2);
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
  
  iVar1 = racehud_leaf_sub_002cfb30(param_2);
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
      iVar1 = racehud_leaf_sub_002cfb30(iVar4);
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
      iVar2 = racehud_leaf_sub_002cfb30(iVar7);
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
/* rpm, speed, gear */

void RaceHud_UpdateMeters(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  iVar1 = racehud_leaf_sub_002cfb30(param_2);
  uVar5 = RaceCar_Get(param_2);
  uVar13 = RaceCar_GetSpeedKmh(uVar5);
  *(undefined4 *)(iVar1 + 0x14) = uVar13;
  uVar13 = RaceCar_GetRpm(uVar5);
  *(undefined4 *)(iVar1 + 0x2c) = uVar13;
  iVar12 = (int)uVar5;
  iVar11 = 0;
  iVar10 = 0;
  *(float *)(iVar1 + 0x44) = *(float *)(iVar12 + 0xac0) - 1.0;
  iVar4 = iVar1;
  do {
    iVar2 = racehud_leaf_sub_002cfb20();
    pfVar3 = (float *)(iVar2 + iVar10);
    *(float *)(iVar4 + 0x18) =
         pfVar3[1] +
         ((*pfVar3 - pfVar3[1]) * (*(float *)(iVar4 + 0x14) - *(float *)(iVar4 + 0x10))) /
         (*(float *)(iVar4 + 0xc) - *(float *)(iVar4 + 0x10));
    fVar14 = *(float *)(iVar4 + 0x1c) + pfVar3[2];
    if (*(float *)(iVar4 + 0x18) <= fVar14) {
      fVar14 = *(float *)(iVar4 + 0x1c) - pfVar3[2];
      if (*(float *)(iVar4 + 0x18) < fVar14) {
        *(float *)(iVar4 + 0x18) = fVar14;
      }
    }
    else {
      *(float *)(iVar4 + 0x18) = fVar14;
    }
    if (*(float *)(iVar4 + 0x18) <= *pfVar3) {
      if (*(float *)(iVar4 + 0x18) < pfVar3[1]) {
        *(float *)(iVar4 + 0x18) = pfVar3[1];
      }
    }
    else {
      *(float *)(iVar4 + 0x18) = *pfVar3;
    }
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + 0x18;
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar4 + 0x18);
    iVar4 = iVar4 + 0x18;
  } while (iVar11 < 3);
  cVar9 = (char)param_2;
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar12 + 0x814);
  uVar6 = RaceProg_GetArray_1c(cVar9);
  iVar4 = RaceRule_GetParams(uVar6);
  *(undefined1 *)(iVar1 + 0x7c) = *(undefined1 *)(iVar4 + 8);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar4 + 0xc);
  *(undefined1 *)(iVar1 + 0x84) = *(undefined1 *)(iVar4 + 0x10);
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(iVar4 + 0x14);
  uVar13 = RaceCar_GetPosition(uVar5);
  *(undefined4 *)(iVar1 + 0x60) = uVar13;
  uVar7 = RaceProg_Get_4();
  if ((uVar7 & 4) != 0) {
    uVar6 = RaceProg_GetArray_40(cVar9);
    LapTime_FormatBest(uVar6,iVar1 + 0xbc,iVar1 + 0xc0,iVar1 + 0xc4);
  }
  if (iRam0036f34c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(cVar9 * 4 + iRam0036f34c + 8);
  }
  *(uint *)(iVar1 + 0x5c) = (uint)(0.0 < *(float *)(iVar4 + 0xc));
  fVar14 = *(float *)(iVar12 + 0xbd0) / 100.0;
  *(float *)(iVar1 + 0x54) = fVar14;
  if (1.0 <= fVar14) {
    *(undefined4 *)(iVar1 + 0x54) = 0x3f800000;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
  }
  else {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
    if (*(float *)(iVar1 + 0x54) < 0.0) {
      *(undefined4 *)(iVar1 + 0x54) = 0;
    }
  }
  fVar14 = 0.0;
  iVar4 = 0;
  do {
    fVar15 = (float)Car_GetWheelLoad(uVar5,iVar4);
    iVar4 = iVar4 + 1;
    fVar14 = fVar14 + fVar15;
  } while (iVar4 < 4);
  fVar14 = (fVar14 / 4.0) / 0.7;
  *(float *)(iVar1 + 0x58) = fVar14;
  if (1.0 <= fVar14) {
    *(undefined4 *)(iVar1 + 0x58) = 0x3f800000;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  }
  else {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
  }
  *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) + 1;
  uVar7 = RaceCar_GetFlags(uVar5);
  if (((uVar7 & 0x100) == 0) || (cVar9 = RaceProg_Get(), cVar9 != '\x03')) {
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
void RaceHud_UpdateMessages(void)

{
  char cVar1;
  long lVar2;
  
  cVar1 = RaceProg_Get();
  if (cVar1 == '\x05') {
    if (*(int *)(iRam0036f804 + 0x288) == 0) {
      cVar1 = racehud_leaf_sub_002cfb60();
      if (cVar1 != '\x04') {
        racehud_step_sub_002cfb70();
      }
    }
    else {
      cVar1 = racehud_leaf_sub_002cfb60();
      if (cVar1 != '\x02') {
        racehud_step_sub_002cfb70();
      }
    }
  }
  else if (cVar1 == '\x03') {
    lVar2 = RaceScene_IsPaused();
    if (lVar2 == 0) {
      cVar1 = racehud_leaf_sub_002cfb60();
      if (cVar1 == '\x05') {
        racehud_step_sub_002cfb70(3);
      }
    }
    else {
      cVar1 = racehud_leaf_sub_002cfb60();
      if (cVar1 == '\x03') {
        Se_PlayMenuVol(9,0x60);
        racehud_step_sub_002cfb70(5);
      }
    }
  }
  else if (((cVar1 == '\x01') && (cVar1 = racehud_leaf_sub_002cfb60(), cVar1 != '\x01')) &&
          (cVar1 = racehud_leaf_sub_002cfb60(), cVar1 != '\x03')) {
    racehud_step_sub_002cfb70(1);
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
  
  lVar3 = racehud_step_sub_002cf9b0();
  if ((lVar3 == 0) && (cVar1 = RaceProg_Get(), cVar1 != '\0')) {
    if (iRam0046a590 == 0) {
      RaceHud_UpdateMessages(param_1);
      lVar3 = race_leaf_sub_001e8fc0();
      if (lVar3 != 0) {
        racehud_leaf_sub_002cfb00(4);
        if (*piRam0036f468 != 1) {
          *piRam0036f468 = 1;
        }
        uVar5 = piRam0036f468[2];
        if ((piRam0036f468[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar5 = 0x100000;
        }
        if (((uVar5 == 0x10) && (lVar3 = RaceScene_IsPaused(), lVar3 == 0)) &&
           (uVar4 = racehud_leaf_sub_002cfad0(), (uVar4 & 1) == 0)) {
          racehud_leaf_sub_002cfae0(8);
          *(undefined4 *)(iRam0036f804 + 0x3b70) = 0x3f800000;
        }
      }
      maybe_GameState_GetFlag();
      uVar7 = GameState_Get_14();
      racehud_leaf_sub_002cfab0(uVar7);
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
      uVar4 = racehud_leaf_sub_002cfad0();
      if ((uVar4 & 1) == 0) {
        iVar6 = racehud_leaf_sub_002cfb30(0);
        lVar3 = Cam_IsIdle(*(undefined4 *)(_g_Loading + 0x14));
        if ((lVar3 == 0) || (lVar3 = race_leaf_sub_001e8fc0(), lVar3 != 0)) {
          *(undefined4 *)(iVar6 + 0x70) = 1;
        }
        else {
          *(undefined4 *)(iVar6 + 0x70) = 0;
        }
      }
      RaceHud_Task();
      uVar4 = racehud_leaf_sub_002cfad0();
      if ((((uVar4 & 10) != 0) && (cVar1 = racehud_leaf_sub_002cfb60(), cVar1 != '\x04')) &&
         ((lVar3 = Options_Get_c(), lVar3 == 1 && (iRam0036f1f8 == 0)))) {
        if (iRam0036f85c != 0) {
          *(undefined4 *)(iRam0036f85c + 0x1c) = *(undefined4 *)(iRam0036f804 + 0x3b70);
        }
        showroom_draw_sub_002d6e40();
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
  racehud_exit_sub_002cff10();
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
  racehud_load_sub_002d1130(0x430750);
  RaceHud_GetLayout(uVar1);
  UiMgr_DrawAll(1);
  *(undefined1 **)(param_1 + 0x1c) = &LAB_001e6ab0;
  return;
}

// 0x001e6b80  size 0x3d8
void RaceSnd_SetupCars(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong unaff_s1;
  ulong unaff_s2;
  int iVar10;
  int iVar11;
  
  iVar10 = 0;
  lVar7 = GameState_GetRacerCount();
  if (0 < lVar7) {
    iVar11 = 0;
    do {
      lVar7 = RaceCar_Get(iVar10);
      if (lVar7 != 0) {
        if (iRam0036f26c == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = iRam0036f26c + iVar11;
        }
        iVar4 = RaceCar_GetIndex(lVar7);
        sVar3 = CarRec_GetModelId(iVar4 + 0xc);
        uVar8 = RaceCar_GetIndex(lVar7);
        uVar9 = CarRec_GetPartData(uVar8,0);
        if (uVar9 < 9) {
                    /* WARNING: Switch is manually overridden */
          switch((int)uVar9) {
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
        uVar8 = RaceCar_GetIndex(lVar7);
        uVar9 = CarRec_GetPartData(uVar8,2);
        if (uVar9 < 9) {
                    /* WARNING: Switch is manually overridden */
          switch((int)uVar9) {
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
          uVar9 = unaff_s1;
        }
        else {
          uVar9 = unaff_s2;
        }
        iVar4 = RaceCar_GetIndex(lVar7);
        iVar5 = GameState_Elem_3e0_x540(*(undefined1 *)(iVar4 + 9));
        iVar4 = *(int *)(iVar5 + 0x8c);
        CarSnd_Attach(iVar6,lVar7);
        if (iVar4 == 2) {
          uVar9 = 4;
        }
        if (((sVar3 == 0x9b) || (sVar3 == 0x9d)) || (sVar3 == 0x8b)) {
          (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + 8))(*(int *)(iVar6 + 0xc),3,uVar9);
          cVar2 = *(char *)(iVar5 + 0x49);
        }
        else {
          if (((*(uint *)(iVar5 + 0x4c) < 0x5dc) && (*(uint *)(iVar5 + 0x4c) != 0)) &&
             (*(byte *)(iVar5 + 0x48) != 7)) {
            (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + 8))(*(int *)(iVar6 + 0xc),0,uVar9);
          }
          else {
            bVar1 = *(byte *)(iVar5 + 0x48);
            if (bVar1 < 9) {
                    /* WARNING: Switch is manually overridden */
              switch(bVar1) {
              case 0:
                (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + 8))
                          (*(int *)(iVar6 + 0xc),3,uVar9);
                break;
              case 1:
                (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + 8))
                          (*(int *)(iVar6 + 0xc),3,uVar9);
                break;
              case 2:
                (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + 8))
                          (*(int *)(iVar6 + 0xc),4,uVar9);
                break;
              default:
                (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + 8))
                          (*(int *)(iVar6 + 0xc),1,uVar9);
                break;
              case 5:
              case 6:
                (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + 8))
                          (*(int *)(iVar6 + 0xc),5,uVar9);
                break;
              case 7:
                (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + 8))
                          (*(int *)(iVar6 + 0xc),2,uVar9);
              }
            }
          }
          cVar2 = *(char *)(iVar5 + 0x49);
        }
        if (cVar2 != '\0') {
          *(uint *)(*(int *)(iVar6 + 0xc) + 4) = *(uint *)(*(int *)(iVar6 + 0xc) + 4) | 0x40;
        }
        cVar2 = RaceCtx_Get_8();
        if (cVar2 == '\x0f') {
          *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0xfffffffe;
        }
      }
      iVar11 = iVar11 + 0x80;
      iVar10 = iVar10 + 1;
      iVar6 = GameState_GetRacerCount();
    } while (iVar10 < iVar6);
  }
  return;
}

// 0x001e6f60  size 0x4d4
void RaceSnd_UpdateMusic(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  float fVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
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
    fVar11 = DAT_0036e860;
    if (iRam0036f1f8 != 0) goto LAB_001e7340;
    cVar3 = Options_Get_1c();
    *(int *)(param_1 + 0x1c) = (int)cVar3;
    lVar7 = Loading_IsActive();
    if (lVar7 != 0) {
      uVar8 = GameState_Elem_f0_xcc(0);
      uVar9 = CarRec_GetPartData(uVar8,0xb);
      fVar6 = 1.0;
      if (uVar9 < 6) {
                    /* WARNING: Switch is manually overridden */
        switch((int)uVar9) {
        case 0:
          fVar11 = fVar11 * 0.8;
          goto LAB_001e7114;
        case 1:
          fVar6 = 0.9;
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          fVar6 = 1.1;
          break;
        case 5:
          fVar6 = 1.2;
        }
      }
      fVar11 = fVar11 * fVar6;
    }
LAB_001e7114:
    uVar8 = SndMgr_GetInstance();
    uVar8 = SndMgr_GetSlot(uVar8,1);
    fVar11 = (float)*(int *)(param_1 + 0x1c) * fVar11;
    if (fVar11 < 2.1474836e+09) {
      uVar10 = (uint)fVar11;
    }
    else {
      uVar10 = (int)(fVar11 - 2.1474836e+09) | 0x80000000;
    }
    uVar4 = Snd_VolumeToMidi(uVar10);
    (**(code **)(*(int *)uVar8 + 0x20))(uVar8,uVar4);
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  cVar3 = Options_Get_1c();
  fVar11 = DAT_0036e860;
  if (((long)iVar5 == (long)cVar3) || (iRam0036f1f8 != 0)) goto LAB_001e72f0;
  cVar3 = Options_Get_1c();
  *(int *)(param_1 + 0x1c) = (int)cVar3;
  lVar7 = Loading_IsActive();
  if (lVar7 != 0) {
    uVar8 = GameState_Elem_f0_xcc(0);
    uVar9 = CarRec_GetPartData(uVar8,0xb);
    fVar6 = 1.0;
    if (uVar9 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch((int)uVar9) {
      case 0:
        fVar11 = fVar11 * 0.8;
        goto LAB_001e726c;
      case 1:
        fVar6 = 0.9;
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        fVar6 = 1.1;
        break;
      case 5:
        fVar6 = 1.2;
      }
    }
    fVar11 = fVar11 * fVar6;
  }
LAB_001e726c:
  uVar8 = SndMgr_GetInstance();
  uVar8 = SndMgr_GetSlot(uVar8,1);
  fVar11 = (float)*(int *)(param_1 + 0x1c) * fVar11;
  if (fVar11 < 2.1474836e+09) {
    uVar10 = (uint)fVar11;
  }
  else {
    uVar10 = (int)(fVar11 - 2.1474836e+09) | 0x80000000;
  }
  uVar4 = Snd_VolumeToMidi(uVar10);
  (**(code **)(*(int *)uVar8 + 0x20))(uVar8,uVar4);
LAB_001e72f0:
  if (*(int *)(param_1 + 0x24) == 6) {
    cVar3 = RaceProg_Get();
    bVar1 = cVar3 == '\x05';
  }
  else {
    cVar3 = RaceProg_Get();
    bVar1 = cVar3 == '\a';
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x24) = 4;
  }
  else {
    lVar7 = RaceScene_IsPaused();
    if (lVar7 == 0) {
      cVar3 = RaceProg_Get();
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
void RaceSnd_UpdateAmbient(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  
  puVar8 = (undefined1 *)param_1;
  (**(code **)(**(int **)(puVar8 + 4) + 0x1c))();
  if (*(int *)(puVar8 + 0x18) == 0) {
    (**(code **)(**(int **)(puVar8 + 0xc) + 0x1c))();
  }
  else {
    (**(code **)(**(int **)(puVar8 + 0x14) + 0x1c))();
  }
  RaceSnd_PlayResult(param_1,param_1,5);
  uVar1 = Options_Get_1c();
  uVar3 = Snd_VolumeToMidi(uVar1);
  (**(code **)(**(int **)(puVar8 + 4) + 0x10))(*(int **)(puVar8 + 4),*puVar8,uVar3,0x3f,1);
  if (*(int *)(puVar8 + 0x18) == 0) {
    uVar1 = Options_Get_1c();
    uVar3 = Snd_VolumeToMidi(uVar1);
    (**(code **)(**(int **)(puVar8 + 0xc) + 0x10))(*(int **)(puVar8 + 0xc),puVar8[8],uVar3,0x3f,1);
  }
  else {
    uVar1 = Options_Get_1c();
    uVar3 = Snd_VolumeToMidi(uVar1);
    (**(code **)(**(int **)(puVar8 + 0x14) + 0x10))
              (*(int **)(puVar8 + 0x14),puVar8[0x10],uVar3,0x3f,1);
  }
  fVar13 = DAT_0036e860;
  if (iRam0036f1f8 != 0) goto LAB_001e7580;
  cVar2 = Options_Get_1c();
  *(int *)(puVar8 + 0x1c) = (int)cVar2;
  lVar5 = Loading_IsActive();
  if (lVar5 != 0) {
    uVar6 = GameState_Elem_f0_xcc(0);
    uVar7 = CarRec_GetPartData(uVar6,0xb);
    fVar4 = 1.0;
    if (uVar7 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch((int)uVar7) {
      case 0:
        fVar13 = fVar13 * 0.8;
        goto LAB_001e7694;
      case 1:
        fVar4 = 0.9;
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        fVar4 = 1.1;
        break;
      case 5:
        fVar4 = 1.2;
      }
    }
    fVar13 = fVar13 * fVar4;
  }
LAB_001e7694:
  uVar6 = SndMgr_GetInstance();
  uVar6 = SndMgr_GetSlot(uVar6,1);
  fVar13 = (float)*(int *)(puVar8 + 0x1c) * fVar13;
  if (fVar13 < 2.1474836e+09) {
    uVar12 = (uint)fVar13;
  }
  else {
    uVar12 = (int)(fVar13 - 2.1474836e+09) | 0x80000000;
  }
  uVar3 = Snd_VolumeToMidi(uVar12);
  (**(code **)(*(int *)uVar6 + 0x20))(uVar6,uVar3);
LAB_001e7580:
  iVar11 = 0;
  lVar5 = GameState_GetRacerCount();
  if (0 < lVar5) {
    iVar10 = 0;
    do {
      if (iRam0036f26c == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = iRam0036f26c + iVar10;
      }
      CarSnd_StopVoice(iVar9);
      iVar10 = iVar10 + 0x80;
      iVar11 = iVar11 + 1;
      iVar9 = GameState_GetRacerCount();
    } while (iVar11 < iVar9);
  }
  *(undefined4 *)(puVar8 + 0x24) = 5;
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
      cVar2 = RaceProg_Get();
      bVar1 = cVar2 == '\x05';
    }
    else {
      cVar2 = RaceProg_Get();
      bVar1 = cVar2 == '\a';
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x24) = 4;
    }
    else {
      uVar9 = 0;
      iVar8 = 0;
      do {
        if (iRam0036f26c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iRam0036f26c + iVar8;
        }
        CarSnd_Update3d(iVar4,*(undefined4 *)(_g_Loading + (uVar9 & 0xff) * 4 + 0x14));
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 0x80;
      } while ((int)uVar9 < 2);
      lVar5 = race_leaf_sub_001e8fc0();
      if (((lVar5 == 0) && (uVar6 = RaceProg_Get_4(), (uVar6 & 1) != 0)) &&
         (cVar2 = RaceProg_Get(), cVar2 == '\x03')) {
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
        if (iRam0036f26c == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iRam0036f26c + iVar4;
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
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  
  cVar2 = RaceCtx_Get_8();
  if (cVar2 == '\x0f') {
    if (*(int *)(param_1 + 0x24) == 6) {
      cVar2 = RaceProg_Get();
      bVar1 = cVar2 == '\x05';
    }
    else {
      cVar2 = RaceProg_Get();
      bVar1 = cVar2 == '\a';
    }
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
      if (*(int *)(param_1 + 0x18) == 0) {
        (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
      }
      iVar11 = 0;
      lVar7 = GameState_GetRacerCount();
      if (0 < lVar7) {
        iVar10 = 0;
        do {
          if (iRam0036f26c == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iRam0036f26c + iVar10;
          }
          CarSnd_StopVoice(iVar4);
          iVar10 = iVar10 + 0x80;
          iVar11 = iVar11 + 1;
          iVar4 = GameState_GetRacerCount();
        } while (iVar11 < iVar4);
      }
      *(undefined4 *)(param_1 + 0x24) = 5;
    }
    else {
      iVar11 = *(int *)(_g_Loading + 0x14);
      iVar10 = 0;
      lVar7 = GameState_GetRacerCount();
      if (0 < lVar7) {
        iVar4 = 0;
        do {
          fVar13 = DAT_0036e860;
          if (*(int *)(iVar11 + 0x500) == 0) {
            if (iRam0036f26c == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = iRam0036f26c + iVar4;
            }
            CarSnd_Update3d(iVar6,iVar11);
          }
          else {
            if ((iVar10 == 0) && (iRam0036f1f8 == 0)) {
              cVar2 = Options_Get_1c();
              *(int *)(param_1 + 0x1c) = (int)cVar2;
              lVar7 = Loading_IsActive();
              if (lVar7 != 0) {
                uVar8 = GameState_Elem_f0_xcc(0);
                uVar9 = CarRec_GetPartData(uVar8,0xb);
                fVar5 = 1.0;
                if (uVar9 < 6) {
                    /* WARNING: Switch is manually overridden */
                  switch((int)uVar9) {
                  case 0:
                    fVar13 = fVar13 * 0.8;
                    goto LAB_001e7bfc;
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
                fVar13 = fVar13 * fVar5;
              }
LAB_001e7bfc:
              uVar8 = SndMgr_GetInstance();
              uVar8 = SndMgr_GetSlot(uVar8,1);
              fVar13 = (float)*(int *)(param_1 + 0x1c) * fVar13;
              if (fVar13 < 2.1474836e+09) {
                uVar12 = (uint)fVar13;
              }
              else {
                uVar12 = (int)(fVar13 - 2.1474836e+09) | 0x80000000;
              }
              uVar3 = Snd_VolumeToMidi(uVar12);
              (**(code **)(*(int *)uVar8 + 0x20))(uVar8,uVar3);
            }
            if (iRam0036f26c == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = iRam0036f26c + iVar4;
            }
            CarSnd_StopVoice(iVar6);
          }
          iVar4 = iVar4 + 0x80;
          iVar10 = iVar10 + 1;
          iVar6 = GameState_GetRacerCount();
        } while (iVar10 < iVar6);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) == 6) {
      cVar2 = RaceProg_Get();
      bVar1 = cVar2 == '\x05';
    }
    else {
      cVar2 = RaceProg_Get();
      bVar1 = cVar2 == '\a';
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x24) = 4;
    }
    else {
      lVar7 = RaceScene_IsPaused();
      if (lVar7 == 0) {
        lVar7 = race_leaf_sub_001e8fc0();
        if ((((lVar7 == 0) && (uVar9 = RaceProg_Get_4(), (uVar9 & 1) != 0)) &&
            (cVar2 = RaceProg_Get(), cVar2 == '\x03')) &&
           (uVar9 = RaceProg_Get_4(), (uVar9 & 0x80) == 0)) {
          uVar8 = RaceProg_GetArray_28(0);
          iVar11 = Raceprog_Nop(uVar8);
          if ((iVar11 < *(int *)(param_1 + 0x30)) &&
             (fVar13 = ((float)iVar11 / 0.25) / 5e+06, fVar13 < 1.0)) {
            if (*(int *)(param_1 + 0x2c) == 0) {
              *(int *)(param_1 + 0x2c) = (int)(fVar13 * 32.0 + 16.0);
              Se_PlayMenuVol(0,0x60);
            }
            else {
              *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
            }
          }
          *(int *)(param_1 + 0x30) = iVar11;
        }
        iVar11 = *(int *)(_g_Loading + 0x14);
        iVar10 = 0;
        lVar7 = GameState_GetRacerCount();
        if (0 < lVar7) {
          iVar4 = 0;
          do {
            fVar13 = DAT_0036e860;
            if (*(int *)(iVar11 + 0x500) == 0) {
              if (iRam0036f26c == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = iRam0036f26c + iVar4;
              }
              CarSnd_Update3d(iVar6,iVar11);
            }
            else {
              if ((iVar10 == 0) && (iRam0036f1f8 == 0)) {
                cVar2 = Options_Get_1c();
                *(int *)(param_1 + 0x1c) = (int)cVar2;
                lVar7 = Loading_IsActive();
                if (lVar7 != 0) {
                  uVar8 = GameState_Elem_f0_xcc(0);
                  uVar9 = CarRec_GetPartData(uVar8,0xb);
                  fVar5 = 1.0;
                  if (uVar9 < 6) {
                    /* WARNING: Switch is manually overridden */
                    switch((int)uVar9) {
                    case 0:
                      fVar13 = fVar13 * 0.8;
                      goto LAB_001e7fb4;
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
                  fVar13 = fVar13 * fVar5;
                }
LAB_001e7fb4:
                uVar8 = SndMgr_GetInstance();
                uVar8 = SndMgr_GetSlot(uVar8,1);
                fVar13 = (float)*(int *)(param_1 + 0x1c) * fVar13;
                if (fVar13 < 2.1474836e+09) {
                  uVar12 = (uint)fVar13;
                }
                else {
                  uVar12 = (int)(fVar13 - 2.1474836e+09) | 0x80000000;
                }
                uVar3 = Snd_VolumeToMidi(uVar12);
                (**(code **)(*(int *)uVar8 + 0x20))(uVar8,uVar3);
              }
              if (iRam0036f26c == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = iRam0036f26c + iVar4;
              }
              CarSnd_StopVoice(iVar6);
            }
            iVar4 = iVar4 + 0x80;
            iVar10 = iVar10 + 1;
            iVar6 = GameState_GetRacerCount();
          } while (iVar10 < iVar6);
        }
      }
      else {
        iVar11 = 0;
        lVar7 = GameState_GetRacerCount();
        if (0 < lVar7) {
          iVar10 = 0;
          do {
            if (iRam0036f26c == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = iRam0036f26c + iVar10;
            }
            CarSnd_StopVoice(iVar4);
            iVar10 = iVar10 + 0x80;
            iVar11 = iVar11 + 1;
            iVar4 = GameState_GetRacerCount();
          } while (iVar11 < iVar4);
        }
        (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),1);
        *(undefined4 *)(param_1 + 0x24) = 6;
      }
    }
  }
  return;
}

