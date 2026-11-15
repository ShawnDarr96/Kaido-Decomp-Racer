// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001f4000 - 0x001f8000
#include "ghidra_types.h"

// 0x001f42c0  size 0x19c
void Demo_DriveCar(undefined4 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RaceCar *pRVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  puVar7 = (undefined4 *)param_2;
  *param_1 = puVar7;
  if (param_2 != 0) {
    param_1[1] = *puVar7;
    param_1[2] = param_1[1] + puVar7[1] * 0x14 + -0x14;
    param_1[4] = 0;
    param_1[6] = 0;
    pRVar4 = RaceCar_Get(1);
    param_1[3] = pRVar4;
    if (param_1[3] == 0) {
      pRVar4 = RaceCar_Get(0);
      param_1[3] = pRVar4;
    }
    if (-1 < (int)puVar7[5]) {
      Demo_FindRoadSection(&uStack_c);
      uStack_4 = uStack_c;
      uStack_2 = uStack_a;
      if ((int)puVar7[5] < 0xc9) {
        iVar6 = 100;
      }
      else {
        iVar6 = -100;
      }
      Demo_FindRoadSection(&uStack_10,puVar7[5] + iVar6);
      uStack_8 = uStack_10;
      uStack_6 = uStack_e;
      uVar5 = GameState_LoadHeader_Wrap();
      cVar1 = *(char *)((uVar5 & 0xff) + 0x36e868);
      cVar3 = GameState_LoadHeader_Wrap2();
      bVar2 = cVar1 == cVar3;
      iVar6 = RaceCar_GetIndex(param_1[3]);
      param_1[5] = *(undefined4 *)(iVar6 + 4);
      iVar6 = RaceCar_GetIndex(param_1[3]);
      *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) & 0xfffffedf;
      pRVar4 = RaceCar_Get(0);
      Ai_PredictPath(0,pRVar4,uStack_8,uStack_6,0,bVar2,0);
      Ai_PredictPath(0,param_1[3],uStack_4,uStack_2,0,bVar2,0);
      if (!bVar2) {
        RaceCar_SetFlags(param_1[3],4);
      }
      Ai_ComputeSteering(param_1[3]);
    }
  }
  return;
}

// 0x001f4460  size 0x2fc
/* WARNING: Removing unreachable block (ram,0x001f4560) */

void Demo_PlaceCamera(float param_1,float param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
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
  undefined1 auStack_40 [64];
  
  iVar4 = (int)param_3;
  iVar3 = iVar4 + 0x510;
  if (*(int *)(iVar4 + 0x7b0) != 0) {
    *(undefined4 *)(iVar4 + 0x480) =
         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x7b0) + 0x120) + 0x80);
    *(undefined4 *)(iVar4 + 0x484) =
         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x7b0) + 0x120) + 0x84);
    *(undefined4 *)(iVar4 + 0x488) =
         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x7b0) + 0x120) + 0x88);
    *(undefined4 *)(iVar4 + 0x48c) = 0x3f800000;
    *(float *)(iVar4 + 0x484) = *(float *)(iVar4 + 0x484) + 1.3;
    uStack_60 = 0x3f800000;
    uStack_50 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_44 = 0x3f800000;
    uStack_5c = 0;
    uStack_4c = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    sceVu0ApplyMatrix(&uStack_50,iVar4 + 0x590,&uStack_50);
    sceVu0ApplyMatrix(&uStack_60,iVar4 + 0x550,&uStack_60);
    fVar5 = (float)sceVu0InnerProduct(&uStack_50,&uStack_60);
    if ((float)(fVar5 < 0.0) * fVar5 * fVar5 * fVar5 * fVar5 == 0.0) {
      param_1 = param_1 * 1.0;
    }
    else {
      param_1 = param_1 * -1.0;
    }
    if (param_1 < param_2) {
      param_1 = param_2;
    }
    Mat33_MulVec3Add(param_1,auStack_a0,iVar4 + 0x5d0);
    Mat33_MulVec3Add(1.0 - param_1,auStack_b0,iVar4 + 0x5e0);
    Quat_Conjugate(&uStack_90,auStack_a0,auStack_b0);
    *(undefined4 *)(iVar4 + 0x5d0) = uStack_90;
    *(undefined4 *)(iVar4 + 0x5d4) = uStack_8c;
    *(undefined4 *)(iVar4 + 0x5d8) = uStack_88;
    *(undefined4 *)(iVar4 + 0x5dc) = uStack_84;
    Quat_Normalize(iVar4 + 0x5d0);
    if (iRam0036f428 == 0) {
      iVar2 = iVar4 + 0x530;
    }
    else {
      iVar2 = iVar3;
    }
    sceVu0TransMatrix(auStack_40,iVar4 + 0x550,iVar2);
    sceVu0ApplyMatrix(iVar4 + 0x430,auStack_40,iVar4 + 0x480);
    fStack_78 = *(float *)(iVar4 + 0x478) - *(float *)(iVar4 + 0x468);
    fStack_7c = *(float *)(iVar4 + 0x474) - *(float *)(iVar4 + 0x464);
    fStack_80 = *(float *)(iVar4 + 0x470) - *(float *)(iVar4 + 0x460);
    Quat_RotateVec3(&fStack_c0,iVar4 + 0x5d0,&fStack_80);
    fStack_80 = fStack_c0;
    fStack_7c = (float)uStack_bc;
    fStack_78 = (float)uStack_b8;
    uStack_74 = uStack_b4;
    if (iRam0036f428 == 0) {
      iVar3 = iVar4 + 0x530;
    }
    sceVu0TransMatrix(auStack_40,iVar4 + 0x550,iVar3);
    sceVu0ApplyMatrix(auStack_70,auStack_40,iVar4 + 0x460);
    sceVu0AddVector(iVar4 + 0x420,&fStack_80,auStack_70);
    *(undefined4 *)(iVar4 + 0x42c) = 0x3f800000;
    sceVu0CopyVector(iVar4 + 0x440,iVar4 + 0x490);
    Cam_UpdateTargetFromCar(param_3);
    Cam_Nop(param_3);
    if ((*(uint *)(iVar4 + 0x7c0) & 1) != 0) {
      Cam_BuildViewMatrix(param_3);
    }
    lVar1 = Cam_IsTransitioning(param_3);
    if (lVar1 != 0) {
      Cam_UpdateChase(param_3);
    }
  }
  return;
}

// 0x001f4760  size 0x12c
void maybe_DemoCam_SetPath
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  
  sceVu0CopyVector(param_1 + 0x470);
  sceVu0CopyVector(param_1 + 0x480,param_3);
  sceVu0CopyVector(param_1 + 0x490,param_4);
  sceVu0CopyVector(param_1 + 0x4a0,param_5);
  sceVu0CopyVector(param_1 + 0x460,param_1 + 0x4a0);
  *(undefined4 *)(param_1 + 0x7c4) = 0;
  if (*(int *)(param_1 + 0x7b0) != 0) {
    Cam_SetTarget(param_1 + 0x510);
    iVar1 = *(int *)(param_1 + 0x7b4);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x7b0);
    }
    Cam_SetTarget(param_1 + 0x660,iVar1);
    Quat_Normalize(param_1 + 0x5d0);
    *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_1 + 0x5d0);
    *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_1 + 0x5d8);
    *(undefined4 *)(param_1 + 0x5ec) = *(undefined4 *)(param_1 + 0x5dc);
    *(undefined4 *)(param_1 + 0x480) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b0) + 0x120) + 0x80);
    *(undefined4 *)(param_1 + 0x484) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b0) + 0x120) + 0x84);
    *(undefined4 *)(param_1 + 0x488) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b0) + 0x120) + 0x88);
    *(undefined4 *)(param_1 + 0x48c) = 0x3f800000;
    *(float *)(param_1 + 0x484) = *(float *)(param_1 + 0x484) + 1.3;
  }
  return;
}

// 0x001f4890  size 0x2c
/* returns UI layout records from the menu layout pack (was Msg_Get) */

int UiRes_GetLayoutData(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)g_UiMgr->bufferB;
  return (int)piVar1 + piVar1[param_1 + 1] + (*piVar1 + 1) * 4;
}

// 0x001f48c0  size 0x4c
/* 429 callers; slot stride 0x4f4 */

int UiMgr_FindLayout(uint param_1)

{
  int iVar1;
  UiLayoutSlot *pUVar2;
  
  iVar1 = 0;
  if (0 < (int)g_UiMgr->slotCount) {
    pUVar2 = g_UiMgr->slots;
    do {
      if (param_1 == pUVar2->id) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pUVar2 = pUVar2 + 1;
    } while (iVar1 < (int)g_UiMgr->slotCount);
  }
  return -1;
}

// 0x001f4910  size 0x18
void UiMgr_ReleaseMemory(int *param_1)

{
  g_UiMgr->unk_4fc = g_UiMgr->unk_4fc - *param_1;
  return;
}

// 0x001f4930  size 0x44
undefined * UiMgr_LockedAlloc(int param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  
  DIntr();
  ppuVar1 = &g_UiMgr->buffer;
  uVar2 = g_UiMgr->unk_4fc;
  g_UiMgr->unk_4fc = uVar2 + param_1;
  SYNC(0);
  EI();
  return *ppuVar1 + uVar2;
}

// 0x001f4980  size 0x140
void UiMgr_LoadLayout(uint param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)param_2;
  uVar1 = g_ArcToc->entries[*piVar2].unpackedSize;
  if (uVar1 == 0) {
    uVar1 = g_ArcToc->entries[*piVar2].sectorCount;
  }
  else {
    uVar1 = uVar1 + 0x7ff >> 0xb;
  }
  if (0x100000 <
      (int)(((piVar2[2] * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) + uVar1 * 0x800 + piVar2[1] * 0x80))
  {
    param_3 = 0;
  }
  g_UiMgr->slots[g_UiMgr->unk_50c].id = param_1;
  UiLayout_Init(&g_UiMgr->slots[g_UiMgr->unk_50c].layout,iRam0036f430 + g_UiMgr->unk_508,
                iRam0036f434 + g_UiMgr->unk_508,param_3);
  UiLayout_Load(&g_UiMgr->slots[g_UiMgr->unk_50c].layout,param_2,0);
  g_UiMgr->unk_50c = g_UiMgr->unk_50c + 1;
  return;
}

// 0x001f4ac0  size 0x54
undefined4 UiMgr_FindFreeSlot(void)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)g_UiMgr->slotCount) {
    pUVar1 = g_UiMgr->slots;
    do {
      if ((pUVar1->layout).maybe_inUse == 1) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      pUVar1 = pUVar1 + 1;
    } while (iVar2 < (int)g_UiMgr->slotCount);
  }
  return 0;
}

// 0x001f4b20  size 0xb8
void UiMgr_SetActive(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iRam0036f430 = (int)param_1;
  iRam0036f434 = param_2;
  if (g_UiMgr != (UiMgr *)0x0) {
    if (g_UiMgr->unk_508 != 0) {
      UiLayout_SetTexture(&g_UiMgr->field_0x4,param_1);
    }
    iVar2 = 0;
    if (0 < (int)g_UiMgr->slotCount) {
      iVar1 = 0;
      do {
        UiLayout_SetTexture(&(g_UiMgr->slots->layout).field_0x0 + iVar1,
                            iRam0036f430 + g_UiMgr->unk_508,iRam0036f434 + g_UiMgr->unk_508);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x4f4;
      } while (iVar2 < (int)g_UiMgr->slotCount);
    }
  }
  return;
}

// 0x001f4be0  size 0x9c
void UiMgr_Free(void)

{
  if (g_UiMgr != (UiMgr *)0x0) {
    if (g_UiMgr->buffer != (undefined *)0x0) {
      Mem_Free();
      g_UiMgr->buffer = (undefined *)0x0;
    }
    if (g_UiMgr->slots != (UiLayoutSlot *)0x0) {
      Mem_Free();
      g_UiMgr->slots = (UiLayoutSlot *)0x0;
    }
    if ((g_UiMgr->bufferB != (undefined *)0x0) && (g_UiMgr->bufferB != (undefined *)0x0)) {
      Mem_Free();
      g_UiMgr->bufferB = (undefined *)0x0;
    }
    if (g_UiMgr != (UiMgr *)0x0) {
      Mem_Free();
    }
    g_UiMgr = (UiMgr *)0x0;
  }
  return;
}

// 0x001f4c80  size 0x210
void UiMgr_Alloc(undefined8 param_1,uint param_2,uint param_3,long param_4,uint param_5,long param_6
                )

{
  undefined *puVar1;
  UiLayoutSlot *pUVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  g_UiMgr = (UiMgr *)Mem_Alloc16(0x518,param_1);
  g_UiMgr->unk_4fc = 0;
  g_UiMgr->unk_4f8 = param_3;
  puVar1 = (undefined *)Mem_AllocAligned(g_UiMgr->unk_4f8,0x40,param_1);
  g_UiMgr->buffer = puVar1;
  g_UiMgr->slotCount = param_2;
  pUVar2 = (UiLayoutSlot *)Mem_Alloc16(g_UiMgr->slotCount * 0x4f4,param_1);
  g_UiMgr->slots = pUVar2;
  g_UiMgr->unk_50c = 0;
  if (param_6 < 0) {
    g_UiMgr->bufferB = (undefined *)0x0;
  }
  else {
    uVar3 = g_ArcToc->entries[(int)param_6].unpackedSize;
    if (uVar3 == 0) {
      uVar3 = g_ArcToc->entries[(int)param_6].sectorCount;
    }
    else {
      uVar3 = uVar3 + 0x7ff >> 0xb;
    }
    g_UiMgr->unk_514 = uVar3 << 0xb;
    puVar1 = (undefined *)Mem_AllocAligned(g_UiMgr->unk_514,0x40,param_1);
    g_UiMgr->bufferB = puVar1;
    Arc_LoadFileEx(param_6,g_UiMgr->bufferB,0,0,0,0);
  }
  if (param_4 == 0) {
    g_UiMgr->unk_508 = 0;
    g_UiMgr->unk_4f4 = 0;
  }
  else {
    UiLayout_Init(&g_UiMgr->field_0x4,iRam0036f430,iRam0036f434,0);
    UiLayout_Load(&g_UiMgr->field_0x4,param_4,0);
    g_UiMgr->unk_4f4 = 1;
    g_UiMgr->unk_508 = param_5;
  }
  iVar5 = 0;
  if (0 < (int)param_2) {
    iVar4 = 0;
    do {
      *(undefined4 *)((int)&g_UiMgr->slots->id + iVar4) = 0xffffffff;
      UiLayout_Init(&(g_UiMgr->slots->layout).field_0x0 + iVar4,iRam0036f430 + g_UiMgr->unk_508,
                    iRam0036f434 + g_UiMgr->unk_508,1);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x4f4;
    } while (iVar5 < (int)param_2);
  }
  return;
}

// 0x001f4e90  size 0x19c
/* recursive */

void UiMgr_DrawAll(uint param_1)

{
  uchar uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = g_RaceCtx->language;
  uVar2 = 2;
  if (uVar1 == '\x04') {
    uVar2 = 7;
  }
  else if (uVar1 == '\x03') {
    uVar2 = 6;
  }
  else if (uVar1 == '\x02') {
    uVar2 = 5;
  }
  else if (uVar1 == '\x05') {
    uVar2 = 4;
  }
  else if (uVar1 == '\x01') {
    uVar2 = 3;
  }
  UiElem_SetNumber(0x468e10,3,0x16,uVar2);
  param_1 = param_1 & 0xff;
  if (param_1 == 1) {
    iVar3 = 0;
    do {
      UiLayout_UpdateAnim(0x468e10,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x18);
    UiLayout_Draw(0x3f800000,0x468e10);
  }
  else if (param_1 == 0) {
    if (iRam0036f438 < 0x259) {
      UiLayout_Draw(0x3f800000,0x468920);
    }
    else {
      UiMgr_DrawAll();
    }
    iRam0036f438 = iRam0036f438 + 1;
  }
  else {
    iVar3 = 0;
    iVar4 = param_1 * 0x4f0 + 0x468920;
    do {
      UiLayout_UpdateAnim(iVar4,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x18);
    UiLayout_Draw(0x3f800000,iVar4);
  }
  return;
}

// 0x001f5030  size 0xfc
/* WARNING: Removing unreachable block (ram,0x001f50bc) */
/* WARNING: Removing unreachable block (ram,0x001f50dc) */

void UiMgr_UpdateAll(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0x468920;
  do {
    iVar3 = 0;
    iVar1 = iVar2;
    do {
      *(undefined4 *)(iVar1 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x31c) = 0;
      *(undefined4 *)(iVar1 + 0x30c) = 0;
      if (*(int *)(iVar1 + 0x31c) == 0) {
        *(undefined4 *)(iVar1 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x318) = 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar3 < 0x18);
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0x4f0;
  } while (iVar4 < 2);
  uRam00469120 = 0xffffffff;
  uRam0046911c = 0;
  uRam0046912c = uRam0036f43c;
  uRam0036f438 = 0;
  uRam00469124 = 1;
  uRam00469128 = 1;
  return;
}

// 0x001f5130  size 0x68
void UiMgr_RebindTextures(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0x468920;
  do {
    UiLayout_SetTexture(iVar1,param_1,param_2);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x4f0;
  } while (iVar2 < 2);
  return;
}

// 0x001f51a0  size 0x68
void UiMgr_FreeSystem(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0x468920;
  do {
    UiLayout_Free(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x4f0;
  } while (iVar2 < 2);
  if (iRam0036f43c != 0) {
    Mem_Free();
    iRam0036f43c = 0;
  }
  return;
}

// 0x001f5210  size 0x164
void UiMgr_LoadSystem(undefined8 param_1)

{
  uchar uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_4;
  
  iVar6 = 0;
  iVar5 = 0x468920;
  puVar4 = &uStack_20;
  uStack_20 = DAT_003268c0;
  uStack_1c = DAT_003268c4;
  iStack_4 = iRam0036e870;
  uStack_18 = DAT_003268c8;
  uStack_14 = DAT_003268cc;
  uStack_10 = DAT_003268d0;
  uStack_c = DAT_003268d4;
  uVar1 = g_RaceCtx->language;
  g_RaceCtx->language = '\0';
  do {
    UiLayout_Init(iVar5,uRam0036f2c0,uRam0036f2c0,1);
    UiLayout_Load(iVar5,puVar4,param_1);
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x4f0;
    puVar4 = puVar4 + 3;
  } while (iVar6 < 2);
  g_RaceCtx->language = uVar1;
  uVar2 = g_ArcToc->entries[iStack_4].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[iStack_4].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar3 = Mem_AllocAligned(uVar2 << 0xb,0x40,param_1);
  uRam0036f43c = (undefined4)uVar3;
  Arc_LoadFileEx(iStack_4,uVar3,0,0,0,0);
  File_AbortAll();
  return;
}

// 0x001f5380  size 0x130
/* WARNING: Removing unreachable block (ram,0x001f53ec) */
/* WARNING: Removing unreachable block (ram,0x001f53fc) */
/* WARNING: Removing unreachable block (ram,0x001f53f4) */
/* WARNING: Removing unreachable block (ram,0x001f5420) */
/* 17 callers */

void UiElem_SetNumber(undefined8 param_1,undefined8 param_2,byte param_3,ulong param_4)

{
  bool bVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  
  if (param_3 < 0x49) {
                    /* WARNING: Switch is manually overridden */
    switch(param_3) {
    case 0:
      bVar1 = false;
      break;
    case 1:
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((long)param_4 < 0) {
      fVar4 = (float)(param_4 & 0xffffffff);
    }
    else {
      fVar4 = (float)(int)param_4;
    }
    pfVar3 = (float *)UiElem_GetPropPtr(param_1);
    *pfVar3 = fVar4;
  }
  else {
    piVar2 = (int *)UiElem_GetPropPtr(param_1);
    *piVar2 = (int)param_4;
  }
  if (param_3 == 10) {
    UiElem_MarkDirty(param_1);
  }
  return;
}

// 0x001f54b0  size 0x338
/* 17 callers */

int Msg_FormatRivalName(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 uStack_300;
  undefined2 uStack_2fe;
  undefined1 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined2 uStack_2c8;
  undefined2 uStack_2c6;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 auStack_2bc [23];
  undefined4 auStack_260 [23];
  undefined4 auStack_204 [16];
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  undefined1 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 auStack_13c [23];
  undefined4 auStack_e0 [23];
  undefined4 auStack_84 [16];
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
  undefined2 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar7 = (int)param_1 + 0x15f;
  while( true ) {
    if (499 < iVar7) {
      return -1;
    }
    RivalDb_Copy(&uStack_300,(short)iVar7);
    puVar6 = auStack_2bc;
    puVar5 = auStack_13c;
    uStack_180 = uStack_300;
    uStack_168 = uStack_2e8;
    uStack_17e = uStack_2fe;
    uStack_164 = uStack_2e4;
    iVar4 = 0x17;
    uStack_17c = uStack_2fc;
    uStack_178 = uStack_2f8;
    uStack_174 = uStack_2f4;
    uStack_170 = uStack_2f0;
    uStack_16c = uStack_2ec;
    uStack_160 = uStack_2e0;
    uStack_15c = uStack_2dc;
    uStack_158 = uStack_2d8;
    uStack_154 = uStack_2d4;
    uStack_150 = uStack_2d0;
    uStack_14c = uStack_2cc;
    uStack_148 = uStack_2c8;
    uStack_146 = uStack_2c6;
    uStack_144 = uStack_2c4;
    uStack_140 = uStack_2c0;
    do {
      iVar4 = iVar4 + -1;
      *puVar5 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (0 < iVar4);
    iVar4 = 0x17;
    puVar6 = auStack_260;
    puVar5 = auStack_e0;
    do {
      iVar4 = iVar4 + -1;
      *puVar5 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (0 < iVar4);
    iVar4 = 8;
    puVar6 = auStack_204;
    puVar5 = auStack_84;
    do {
      iVar4 = iVar4 + -1;
      uVar1 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar1;
      puVar6 = puVar6 + 2;
      puVar5 = puVar5 + 2;
    } while (0 < iVar4);
    uStack_38 = uStack_1b8;
    uStack_34 = uStack_1b4;
    uStack_30 = uStack_1b0;
    uStack_2c = uStack_1ac;
    uStack_40 = uStack_1c0;
    uStack_3c = uStack_1bc;
    uStack_28 = uStack_1a8;
    uStack_24 = uStack_1a4;
    uStack_20 = uStack_1a0;
    uStack_1c = uStack_19c;
    uStack_44 = uStack_1c4;
    uStack_18 = uStack_198;
    uStack_14 = uStack_194;
    uStack_10 = uStack_190;
    uStack_c = uStack_18c;
    uStack_8 = uStack_188;
    cVar2 = RivalRec_GetTeam(&uStack_180);
    if ((cVar2 == '\v') && (sVar3 = RivalRec_GetSubId(&uStack_180), param_1 == sVar3)) break;
    iVar7 = iVar7 + 1;
  }
  return iVar7;
}

// 0x001f57f0  size 0x348
/* 13 callers */

void Msg_FormatCarName(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined2 *puVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined2 uStack_270;
  undefined2 uStack_26e;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_25c [24];
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined2 auStack_220 [16];
  undefined2 auStack_200 [42];
  undefined1 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [12];
  undefined2 uStack_194;
  undefined2 uStack_192;
  undefined4 uStack_190;
  undefined1 auStack_185 [169];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [7];
  undefined1 auStack_b5 [17];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  uVar11 = Profile_Get(0);
  uVar11 = Garage_GetPartSlot(uVar11,param_2);
  CarRec_InstallPart(&uStack_270,uVar11,0);
  puVar14 = auStack_25c;
  iVar12 = 0x17;
  uStack_d0 = uStack_270;
  uStack_c0 = uStack_260;
  uStack_c8 = uStack_268;
  uStack_c4 = uStack_264;
  uStack_ce = uStack_26e;
  uStack_cc = uStack_26c;
  puVar13 = auStack_bc;
  do {
    iVar12 = iVar12 + -1;
    *puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = puVar13 + 1;
  } while (0 < iVar12);
  puVar15 = auStack_220;
  puVar17 = auStack_80;
  iVar12 = 8;
  uStack_98 = uStack_238;
  uStack_94 = uStack_234;
  uStack_90 = uStack_230;
  uStack_a4 = uStack_244;
  uStack_a0 = uStack_240;
  uStack_9c = uStack_23c;
  uStack_8c = uStack_22c;
  uStack_88 = uStack_228;
  uStack_84 = uStack_224;
  do {
    iVar12 = iVar12 + -1;
    uVar6 = puVar15[1];
    *puVar17 = *puVar15;
    puVar17[1] = uVar6;
    puVar15 = puVar15 + 2;
    puVar17 = puVar17 + 2;
  } while (0 < iVar12);
  puVar15 = auStack_200;
  puVar17 = auStack_60;
  iVar12 = 0x15;
  do {
    iVar12 = iVar12 + -1;
    uVar6 = puVar15[1];
    *puVar17 = *puVar15;
    puVar17[1] = uVar6;
    puVar15 = puVar15 + 2;
    puVar17 = puVar17 + 2;
  } while (0 < iVar12);
  puVar15 = &uStack_d0;
  puVar14 = auStack_1a0;
  iVar12 = 0;
  uStack_192 = uStack_26e;
  uStack_190 = uStack_26c;
  uStack_8 = uStack_1a8;
  uStack_194 = uStack_270;
  uStack_c = uStack_1ac;
  puVar17 = puVar15;
  puVar13 = puVar14;
  do {
    iVar12 = iVar12 + 7;
    uVar1 = *(undefined1 *)(puVar17 + 0x39);
    uVar6 = puVar17[0x3a];
    uVar2 = *(undefined1 *)(puVar17 + 0x3b);
    uVar7 = puVar17[0x3c];
    uVar3 = *(undefined1 *)(puVar17 + 0x3d);
    *(undefined2 *)(puVar13 + 0x70) = puVar17[0x38];
    puVar13[0x72] = uVar1;
    *(undefined2 *)(puVar13 + 0x74) = uVar6;
    puVar13[0x76] = uVar2;
    *(undefined2 *)(puVar13 + 0x78) = uVar7;
    puVar13[0x7a] = uVar3;
    uVar1 = *(undefined1 *)(puVar17 + 0x3f);
    uVar6 = puVar17[0x40];
    uVar2 = *(undefined1 *)(puVar17 + 0x41);
    uVar7 = puVar17[0x42];
    uVar3 = *(undefined1 *)(puVar17 + 0x43);
    *(undefined2 *)(puVar13 + 0x7c) = puVar17[0x3e];
    puVar13[0x7e] = uVar1;
    *(undefined2 *)(puVar13 + 0x80) = uVar6;
    puVar13[0x82] = uVar2;
    *(undefined2 *)(puVar13 + 0x84) = uVar7;
    puVar13[0x86] = uVar3;
    uVar1 = *(undefined1 *)(puVar17 + 0x45);
    *(undefined2 *)(puVar13 + 0x88) = puVar17[0x44];
    puVar13[0x8a] = uVar1;
    puVar17 = puVar17 + 0xe;
    puVar13 = puVar13 + 0x1c;
  } while (iVar12 < 0x15);
  iVar12 = 0;
  puVar17 = puVar15;
  puVar13 = puVar14;
  do {
    iVar18 = iVar12;
    iVar12 = iVar18 + 7;
    uVar1 = *(undefined1 *)((int)puVar17 + 0x15);
    uVar2 = *(undefined1 *)(puVar17 + 0xb);
    uVar3 = *(undefined1 *)((int)puVar17 + 0x17);
    uVar4 = *(undefined1 *)(puVar17 + 0xc);
    uVar5 = *(undefined1 *)((int)puVar17 + 0x19);
    puVar13[0x14] = *(undefined1 *)(puVar17 + 10);
    puVar13[0x15] = uVar1;
    puVar13[0x16] = uVar2;
    puVar13[0x17] = uVar3;
    puVar13[0x18] = uVar4;
    puVar13[0x19] = uVar5;
    puVar13[0x1a] = *(undefined1 *)(puVar17 + 0xd);
    puVar17 = (undefined2 *)((int)puVar17 + 7);
    puVar13 = puVar13 + 7;
  } while (iVar12 < 0x10);
  iVar16 = 0;
  auStack_185[iVar18] = auStack_bc[iVar12];
  auStack_185[iVar18 + 1] = auStack_bc[iVar18 + 8];
  puVar17 = puVar15;
  puVar13 = puVar14;
  do {
    iVar16 = iVar16 + 3;
    uVar19 = *(undefined4 *)(puVar17 + 0x18);
    uVar20 = *(undefined4 *)(puVar17 + 0x1a);
    *(undefined4 *)(puVar13 + 0x2c) = *(undefined4 *)(puVar17 + 0x16);
    *(undefined4 *)(puVar13 + 0x30) = uVar19;
    *(undefined4 *)(puVar13 + 0x34) = uVar20;
    puVar17 = puVar17 + 6;
    puVar13 = puVar13 + 0xc;
  } while (iVar16 < 9);
  iVar12 = 0;
  do {
    iVar12 = iVar12 + 8;
    uVar6 = puVar15[0x29];
    uVar7 = puVar15[0x2a];
    uVar8 = puVar15[0x2b];
    uVar9 = puVar15[0x2c];
    uVar10 = puVar15[0x2d];
    *(undefined2 *)(puVar14 + 0x50) = puVar15[0x28];
    *(undefined2 *)(puVar14 + 0x52) = uVar6;
    *(undefined2 *)(puVar14 + 0x54) = uVar7;
    *(undefined2 *)(puVar14 + 0x56) = uVar8;
    *(undefined2 *)(puVar14 + 0x58) = uVar9;
    *(undefined2 *)(puVar14 + 0x5a) = uVar10;
    uVar6 = puVar15[0x2f];
    *(undefined2 *)(puVar14 + 0x5c) = puVar15[0x2e];
    *(undefined2 *)(puVar14 + 0x5e) = uVar6;
    puVar15 = puVar15 + 8;
    puVar14 = puVar14 + 0x10;
  } while (iVar12 < 0x10);
  uStack_dc = uStack_c;
  uStack_d8 = uStack_8;
  CarSpec_BuildForRecord(param_1,auStack_1a0);
  return;
}

// 0x001f5b40  size 0x78
int MsgId_ForMode(byte param_1,int param_2)

{
  if (param_1 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      param_2 = param_2 + 0x332;
      break;
    case 1:
      param_2 = param_2 + 0x335;
      break;
    case 2:
      param_2 = param_2 + 0x33b;
      break;
    case 3:
      param_2 = param_2 + 0x338;
      break;
    case 4:
      param_2 = param_2 + 0x33e;
      break;
    case 5:
      param_2 = param_2 + 0x341;
      break;
    case 6:
      param_2 = param_2 + 0x344;
      break;
    case 7:
      param_2 = param_2 + 0x347;
    }
  }
  else {
    param_2 = -1;
  }
  return param_2;
}

// 0x001f5bc0  size 0x78
int MsgId_ForModeShort(byte param_1,int param_2)

{
  if (param_1 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      param_2 = param_2 + 0x309;
      break;
    case 1:
      param_2 = param_2 + 0x30c;
      break;
    case 2:
      param_2 = param_2 + 0x312;
      break;
    case 3:
      param_2 = param_2 + 0x30f;
      break;
    case 4:
      param_2 = param_2 + 0x315;
      break;
    case 5:
      param_2 = param_2 + 0x318;
      break;
    case 6:
      param_2 = param_2 + 0x31b;
      break;
    case 7:
      param_2 = param_2 + 0x31e;
    }
  }
  else {
    param_2 = -1;
  }
  return param_2;
}

// 0x001f5c40  size 0x8
/* 0x89f "INEXPERIENCED MEDAL" */

int MsgId_MedalName(int param_1)

{
  return param_1 + 0x89f;
}

// 0x001f5c50  size 0x8
/* 0xd99 */

int MsgId_GirlfriendLine(int param_1)

{
  return param_1 + 0xd99;
}

// 0x001f5c60  size 0x8
/* 0xdc1 "PARTYING" */

int MsgId_GirlfriendHobby(int param_1)

{
  return param_1 + 0xdc1;
}

// 0x001f5c70  size 0x8
/* 0xdad "FLIGHT ATTENDANT" */

int MsgId_GirlfriendJob(int param_1)

{
  return param_1 + 0xdad;
}

// 0x001f5c80  size 0x2c
/* 10 callers */

undefined4 Msg_TeamName(undefined1 param_1)

{
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  
  TeamDb_Copy(auStack_30,param_1);
  return uStack_24;
}

// 0x001f5cb0  size 0x30
void Msg_RivalTitle(void)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar1 = Msg_FormatRivalName();
  uVar2 = RivalDb_Get(uVar1);
  RivalRec_GetType(uVar2);
  return;
}

// 0x001f5ce0  size 0x3c
bool Msg_RivalComment(void)

{
  undefined2 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = Msg_FormatRivalName();
  uVar2 = RivalDb_Get(uVar1);
  lVar3 = RivalRec_IsBelowMax(uVar2);
  return lVar3 != 0;
}

// 0x001f5d20  size 0x8
/* 0x85 "Exclusive for TOYOTA INLINE ..." */

int MsgId_PartDescription(int param_1)

{
  return param_1 + 0x85;
}

// 0x001f5d30  size 0x30
void Msg_RivalCourse(void)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = Msg_FormatRivalName();
  iVar2 = RivalDb_Get(uVar1);
  Race_GetLapCountForMode(*(undefined4 *)(iVar2 + 0x14));
  return;
}

// 0x001f5d60  size 0x78
/* 15 callers */

undefined2 Msg_TeamInfo(undefined1 param_1)

{
  undefined2 auStack_60 [48];
  
  TeamDb_Copy(auStack_60,param_1);
  return auStack_60[0];
}

// 0x001f5de0  size 0x8
/* 0x1f */

int MsgId_Symbol(int param_1)

{
  return param_1 + 0x1f;
}

// 0x001f5df0  size 0x20
/* 14 callers */

int Msg_RivalNickname(void)

{
  int iVar1;
  
  iVar1 = Msg_FormatRivalName();
  return iVar1 + 0xa8c;
}

// 0x001f5e10  size 0xa4
void MsgId_ForMenuItem(uint param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((param_1 & 0xff) + 0x36e878);
  if (bVar1 < 0xd) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
    }
  }
  return;
}

// 0x001f5ec0  size 0xa4
void MsgId_ForMenuHelp(uint param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((param_1 & 0xff) + 0x36e878);
  if (bVar1 < 0xd) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
    }
  }
  return;
}

// 0x001f5f70  size 0x38
int MsgId_ForMenu(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = MsgId_ForMenuItem();
  iVar2 = MsgId_ForMenuHelp(param_1);
  return (iVar1 - iVar2) + 1;
}

// 0x001f5fb0  size 0x18
int MsgId_ForMenuTitle(uint param_1)

{
  return *(byte *)((param_1 & 0xff) + 0x36e878) + 0x892;
}

// 0x001f5fd0  size 0x68
undefined4 MsgId_ForResult(byte param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      uVar1 = 0x4f;
      break;
    case 1:
      uVar1 = 0x50;
      break;
    case 2:
      uVar1 = 0x53;
      break;
    case 3:
      uVar1 = 0x51;
      break;
    case 4:
      uVar1 = 0x52;
      break;
    case 5:
      uVar1 = 0x54;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x001f6040  size 0x24
undefined4 MsgId_YesNo(char param_1)

{
  undefined4 uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = 0x56;
  }
  else if (param_1 == '\0') {
    uVar1 = 0x55;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x001f6070  size 0x24
undefined4 MsgId_OnOff(char param_1)

{
  undefined4 uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = 0x49;
  }
  else if (param_1 == '\0') {
    uVar1 = 0x4a;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x001f60a0  size 0x12c
undefined4 Rival_IsBossId(short param_1)

{
  undefined4 uVar1;
  
  if ((((((param_1 == 0xad) || (param_1 == 0xa2)) || (param_1 == 0xa4)) ||
       (((param_1 == 0x89 || (param_1 == 0x8d)) ||
        ((param_1 == 0x83 || ((param_1 == 0x7d || (param_1 == 0x77)))))))) ||
      ((param_1 == 0x71 ||
       ((((((param_1 == 0x67 || (param_1 == 0x61)) || (param_1 == 0x5b)) ||
          ((param_1 == 0x55 || (param_1 == 0x4f)))) ||
         ((param_1 == 0x24 || ((param_1 == 0x45 || (param_1 == 0x3c)))))) || (param_1 == 0x33))))))
     || ((((param_1 == 0x2a || (param_1 == 0x1b)) || (param_1 == 0x12)) ||
         ((param_1 == 9 || (param_1 == 0)))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x001f61d0  size 0xe0
undefined4 MsgId_ForGrade(byte param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x15) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      uVar1 = 1;
      break;
    case 1:
      uVar1 = 6;
      break;
    case 2:
      uVar1 = 7;
      break;
    case 3:
      uVar1 = 5;
      break;
    case 4:
      uVar1 = 0xd;
      break;
    case 5:
      uVar1 = 0xb;
      break;
    case 6:
      uVar1 = 4;
      break;
    case 7:
      uVar1 = 2;
      break;
    case 8:
      uVar1 = 9;
      break;
    case 9:
      uVar1 = 3;
      break;
    case 10:
      uVar1 = 8;
      break;
    case 0xb:
      uVar1 = 0xc;
      break;
    case 0xc:
      uVar1 = 0xf;
      break;
    case 0xd:
      uVar1 = 0x12;
      break;
    case 0xe:
      uVar1 = 0x12;
      break;
    case 0xf:
      uVar1 = 10;
      break;
    case 0x10:
      uVar1 = 10;
      break;
    case 0x11:
      uVar1 = 0xe;
      break;
    case 0x12:
      uVar1 = 0x13;
      break;
    case 0x13:
      uVar1 = 0x11;
      break;
    case 0x14:
      uVar1 = 0x10;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x001f62b0  size 0xe0
undefined4 MsgId_ForGradeShort(byte param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x15) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      uVar1 = 0x980;
      break;
    case 1:
      uVar1 = 0x982;
      break;
    case 2:
      uVar1 = 0x981;
      break;
    case 3:
      uVar1 = 0x983;
      break;
    case 4:
      uVar1 = 0x984;
      break;
    case 5:
      uVar1 = 0x985;
      break;
    case 6:
      uVar1 = 0x986;
      break;
    case 7:
      uVar1 = 0x987;
      break;
    case 8:
      uVar1 = 0x988;
      break;
    case 9:
      uVar1 = 0x989;
      break;
    case 10:
      uVar1 = 0x98a;
      break;
    case 0xb:
      uVar1 = 0x98b;
      break;
    case 0xc:
      uVar1 = 0x98d;
      break;
    case 0xd:
      uVar1 = 0x9b5;
      break;
    case 0xe:
      uVar1 = 0x9b6;
      break;
    case 0xf:
      uVar1 = 0x9b3;
      break;
    case 0x10:
      uVar1 = 0x9b4;
      break;
    case 0x11:
      uVar1 = 0x992;
      break;
    case 0x12:
      uVar1 = 0x991;
      break;
    case 0x13:
      uVar1 = 0x993;
      break;
    case 0x14:
      uVar1 = 0x994;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x001f6390  size 0x6c
int Msg_PartMaker(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = PartDb_Get();
  sVar1 = PartDb_GetInfo(param_1);
  if (sVar1 == 0x6e) {
    iVar2 = iVar2 + 0x9c8;
  }
  else if (sVar1 == 0x6b) {
    iVar2 = iVar2 + 0x9c5;
  }
  else if (sVar1 == 0x67) {
    iVar2 = iVar2 + 0x9c2;
  }
  else {
    iVar2 = Msg_MakerInfo(param_1);
  }
  return iVar2;
}

// 0x001f6400  size 0x54
/* 26 callers */

undefined8 Msg_MakerName(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Maker_GetInfo();
  if ((cVar1 == '\x11') || (cVar1 == '\x13')) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = Msg_MakerInfo(param_1);
  }
  return uVar2;
}

// 0x001f6460  size 0xd4
/* 27 callers */

int Msg_MakerInfo(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = Maker_GetInfo();
  if ((short)param_1 == -1) {
    iVar2 = 0x9b2;
  }
  else {
    lVar3 = PartDb_Get(param_1);
    if ((lVar3 == 0) && ((bVar1 == 0x11 || (bVar1 == 0x13)))) {
      iVar2 = 0x9b2;
    }
    else if (bVar1 == 0x11) {
      iVar2 = 0x992;
    }
    else if (bVar1 == 0x13) {
      iVar2 = 0x993;
    }
    else {
      iVar2 = (int)lVar3;
      if (bVar1 - 0xd < 2) {
        iVar2 = iVar2 + 0x9d7;
      }
      else if (bVar1 == 0x14) {
        iVar2 = iVar2 + 0x9ae;
      }
      else if (bVar1 == 0x12) {
        if (lVar3 == 0) {
          iVar2 = 0x9a5;
        }
        else {
          iVar2 = iVar2 + 0x9b6;
        }
      }
      else {
        iVar2 = iVar2 + 0x9a5;
      }
    }
  }
  return iVar2;
}

// 0x001f6540  size 0xe4
/* 24 callers */

undefined8 Msg_PartInfo(undefined8 param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = PartDb_GetInfo();
  if (sVar1 == 0x9d) {
    uVar2 = 0x9a1;
  }
  else if (sVar1 == 0x98) {
    uVar2 = 0x9a0;
  }
  else if (sVar1 == 0x93) {
    uVar2 = 0x99f;
  }
  else if (sVar1 == 0x8d) {
    uVar2 = 0x99e;
  }
  else if (sVar1 == 0x6e) {
    uVar2 = 0x9a4;
  }
  else if (sVar1 == 0x6b) {
    uVar2 = 0x9a3;
  }
  else if (sVar1 == 0x67) {
    uVar2 = 0x9a2;
  }
  else if (sVar1 == 0x45) {
    uVar2 = 0x99d;
  }
  else if (sVar1 == 0x3c) {
    uVar2 = 0x99c;
  }
  else if (sVar1 == 0x33) {
    uVar2 = 0x99b;
  }
  else if (sVar1 == 0x2a) {
    uVar2 = 0x99a;
  }
  else if (sVar1 == 0x1b) {
    uVar2 = 0x999;
  }
  else if (sVar1 == 0x12) {
    uVar2 = 0x998;
  }
  else if (sVar1 == 9) {
    uVar2 = 0x997;
  }
  else if (sVar1 == 0) {
    uVar2 = 0x996;
  }
  else {
    uVar2 = Msg_MakerCountry(param_1);
  }
  return uVar2;
}

// 0x001f6630  size 0xe4
undefined4 Msg_MakerCountry(void)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = Maker_GetInfo();
  if (bVar1 < 0x15) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0:
      uVar2 = 0x980;
      break;
    case 1:
      uVar2 = 0x982;
      break;
    case 2:
      uVar2 = 0x981;
      break;
    case 3:
      uVar2 = 0x983;
      break;
    case 4:
      uVar2 = 0x984;
      break;
    case 5:
      uVar2 = 0x985;
      break;
    case 6:
      uVar2 = 0x986;
      break;
    case 7:
      uVar2 = 0x987;
      break;
    case 8:
      uVar2 = 0x988;
      break;
    case 9:
      uVar2 = 0x989;
      break;
    case 10:
      uVar2 = 0x98a;
      break;
    case 0xb:
      uVar2 = 0x98b;
      break;
    case 0xc:
      uVar2 = 0x98d;
      break;
    default:
      uVar2 = 0x995;
      break;
    case 0xf:
    case 0x10:
      uVar2 = 0x98c;
      break;
    case 0x11:
      uVar2 = 0x992;
      break;
    case 0x12:
      uVar2 = 0x991;
      break;
    case 0x13:
      uVar2 = 0x993;
      break;
    case 0x14:
      uVar2 = 0x994;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// 0x001f6720  size 0xd0
/* WARNING: Switch with 1 destination removed at 0x001f6744 */

void maybe_Ui_LeafF6720(float *param_1,uint param_2,int param_3,int param_4)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_2 & 0xff) < 8) {
                    /* WARNING: Switch is manually overridden */
    puVar1 = (&PTR_DAT_00327000)[param_2 & 0xff];
    fVar6 = *(float *)(puVar1 + param_3 * 8);
    fVar4 = *(float *)(puVar1 + param_4 * 8);
    fVar2 = *(float *)(puVar1 + param_4 * 8 + 4);
    fVar5 = *(float *)(puVar1 + param_3 * 8 + 4);
    if (fVar6 < fVar4) {
      fVar3 = fVar6;
    }
    else {
      fVar3 = fVar4;
    }
    if (fVar6 <= fVar4) {
      fVar6 = fVar4;
    }
    *param_1 = fVar6 - fVar3;
    param_1[1] = fVar5;
    param_1[2] = fVar2;
    *param_1 = *param_1 / 100.0;
    param_1[1] = param_1[1] / 100.0;
    param_1[2] = param_1[2] / 100.0;
  }
  return;
}

// 0x001f67f0  size 0xc0
undefined4 MsgId_ForDriveType(byte param_1,long param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      uVar1 = 3;
      if (param_2 != 0) {
        uVar1 = 0xe;
      }
      break;
    case 1:
      uVar1 = 2;
      if (param_2 != 0) {
        uVar1 = 0xd;
      }
      break;
    case 2:
      uVar1 = 5;
      if (param_2 != 0) {
        uVar1 = 0x10;
      }
      break;
    case 3:
      uVar1 = 4;
      if (param_2 != 0) {
        uVar1 = 0xf;
      }
      break;
    case 4:
      uVar1 = 6;
      if (param_2 != 0) {
        uVar1 = 0x11;
      }
      break;
    case 5:
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = 0xb;
      }
      break;
    case 6:
      uVar1 = 1;
      if (param_2 != 0) {
        uVar1 = 0xc;
      }
      break;
    case 7:
      uVar1 = 7;
      if (param_2 != 0) {
        uVar1 = 0x12;
      }
      break;
    case 8:
      uVar1 = 0x13;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x001f68b0  size 0xf4
int Msg_ProfileStat(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar3 = 0;
  if (param_1 != 1) {
    iVar3 = 2;
  }
  uVar4 = iVar3 + 1;
  if (uVar4 < 8) {
    do {
      if (uVar4 + 1 < 9) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar4 + 1) {
        case 0:
          uVar5 = 8;
          break;
        case 1:
          uVar5 = 1;
          break;
        case 2:
          uVar5 = 0;
          break;
        case 3:
          uVar5 = 5;
          break;
        case 4:
          uVar5 = 3;
          break;
        case 5:
          uVar5 = 2;
          break;
        case 6:
          uVar5 = 4;
          break;
        case 7:
          uVar5 = 7;
          break;
        case 8:
          uVar5 = 6;
        }
      }
      else {
        uVar5 = 1;
      }
      uVar1 = Profile_Get(0);
      lVar2 = Profile_GetStat(uVar1,uVar5);
      if (lVar2 == 0) {
        return uVar4 - 1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 8);
  }
  return 7;
}

// 0x001f69b0  size 0x38
/* 36 callers */

int MsgId_ForSlot(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 == -1) {
    iVar1 = 3;
    if (param_2 != 0) {
      iVar1 = 0xc;
    }
  }
  else if (param_2 == 1) {
    iVar1 = (int)param_1 + 0xd;
  }
  else if (param_2 == 0) {
    iVar1 = (int)param_1 + 4;
  }
  return iVar1;
}

// 0x001f69f0  size 0x78
undefined4 MsgId_ForOption(byte param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      uVar1 = 1;
      break;
    case 1:
      uVar1 = 0;
      break;
    case 2:
      uVar1 = 4;
      break;
    case 3:
      uVar1 = 3;
      break;
    case 4:
      uVar1 = 5;
      break;
    case 5:
      uVar1 = 2;
      break;
    case 6:
      uVar1 = 7;
      break;
    case 7:
      uVar1 = 6;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x001f6a70  size 0x80
/* 26 callers */

undefined4 Menu_MapCursorToItem(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 + 1U < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1 + 1U) {
    case 0:
      uVar1 = 8;
      break;
    case 1:
      uVar1 = 1;
      break;
    case 2:
      uVar1 = 0;
      break;
    case 3:
      uVar1 = 5;
      break;
    case 4:
      uVar1 = 3;
      break;
    case 5:
      uVar1 = 2;
      break;
    case 6:
      uVar1 = 4;
      break;
    case 7:
      uVar1 = 7;
      break;
    case 8:
      uVar1 = 6;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// 0x001f6af0  size 0x3cc
void maybe_Ui_BuildCarSpec
               (undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  short sVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [12];
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined4 uStack_c0;
  undefined1 auStack_b5 [85];
  short sStack_60;
  undefined1 auStack_5e [2];
  short sStack_5c;
  undefined1 auStack_5a [78];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 == -1) {
    uVar5 = Profile_Get(param_3);
    puVar3 = (undefined2 *)Profile_GetCurrentCar(uVar5);
    uStack_c4 = *puVar3;
  }
  else {
    iVar2 = Profile_Get(param_3);
    uVar1 = *(undefined2 *)(iVar2 + (int)param_2 * 2 + 0x13ee);
    uVar5 = Profile_Get(param_3);
    puVar3 = (undefined2 *)Profile_GetCarRecordB(uVar5,uVar1);
    uStack_c4 = *puVar3;
  }
  puVar9 = auStack_d0;
  iVar2 = 0;
  uStack_c2 = puVar3[1];
  uStack_c0 = *(undefined4 *)(puVar3 + 2);
  puVar6 = puVar9;
  puVar8 = puVar3;
  do {
    iVar2 = iVar2 + 7;
    *(undefined2 *)(puVar6 + 0x70) = puVar8[0x38];
    puVar6[0x72] = *(undefined1 *)(puVar8 + 0x39);
    *(undefined2 *)(puVar6 + 0x74) = puVar8[0x3a];
    puVar6[0x76] = *(undefined1 *)(puVar8 + 0x3b);
    *(undefined2 *)(puVar6 + 0x78) = puVar8[0x3c];
    puVar6[0x7a] = *(undefined1 *)(puVar8 + 0x3d);
    *(undefined2 *)(puVar6 + 0x7c) = puVar8[0x3e];
    puVar6[0x7e] = *(undefined1 *)(puVar8 + 0x3f);
    *(undefined2 *)(puVar6 + 0x80) = puVar8[0x40];
    puVar6[0x82] = *(undefined1 *)(puVar8 + 0x41);
    *(undefined2 *)(puVar6 + 0x84) = puVar8[0x42];
    puVar6[0x86] = *(undefined1 *)(puVar8 + 0x43);
    *(undefined2 *)(puVar6 + 0x88) = puVar8[0x44];
    puVar6[0x8a] = *(undefined1 *)(puVar8 + 0x45);
    puVar8 = puVar8 + 0xe;
    puVar6 = puVar6 + 0x1c;
  } while (iVar2 < 0x15);
  iVar2 = 0;
  puVar6 = puVar9;
  do {
    iVar10 = iVar2;
    puVar6[0x14] = *(undefined1 *)((int)puVar3 + iVar10 + 0x14);
    puVar6[0x15] = *(undefined1 *)((int)puVar3 + iVar10 + 0x15);
    puVar6[0x16] = *(undefined1 *)((int)puVar3 + iVar10 + 0x16);
    puVar6[0x17] = *(undefined1 *)((int)puVar3 + iVar10 + 0x17);
    puVar6[0x18] = *(undefined1 *)((int)puVar3 + iVar10 + 0x18);
    puVar6[0x19] = *(undefined1 *)((int)puVar3 + iVar10 + 0x19);
    puVar6[0x1a] = *(undefined1 *)((int)puVar3 + iVar10 + 0x1a);
    puVar6 = puVar6 + 7;
    iVar2 = iVar10 + 7;
  } while (iVar10 + 7 < 0x10);
  iVar2 = 0;
  auStack_b5[iVar10] = *(undefined1 *)((int)puVar3 + iVar10 + 0x1b);
  auStack_b5[iVar10 + 1] = *(undefined1 *)((int)puVar3 + iVar10 + 0x1c);
  puVar6 = puVar9;
  puVar8 = puVar3;
  do {
    iVar2 = iVar2 + 3;
    *(undefined4 *)(puVar6 + 0x2c) = *(undefined4 *)(puVar8 + 0x16);
    *(undefined4 *)(puVar6 + 0x30) = *(undefined4 *)(puVar8 + 0x18);
    *(undefined4 *)(puVar6 + 0x34) = *(undefined4 *)(puVar8 + 0x1a);
    puVar8 = puVar8 + 6;
    puVar6 = puVar6 + 0xc;
  } while (iVar2 < 9);
  iVar2 = 0;
  puVar8 = puVar3;
  do {
    iVar2 = iVar2 + 8;
    *(undefined2 *)(puVar9 + 0x50) = puVar8[0x28];
    *(undefined2 *)(puVar9 + 0x52) = puVar8[0x29];
    *(undefined2 *)(puVar9 + 0x54) = puVar8[0x2a];
    *(undefined2 *)(puVar9 + 0x56) = puVar8[0x2b];
    *(undefined2 *)(puVar9 + 0x58) = puVar8[0x2c];
    *(undefined2 *)(puVar9 + 0x5a) = puVar8[0x2d];
    *(undefined2 *)(puVar9 + 0x5c) = puVar8[0x2e];
    *(undefined2 *)(puVar9 + 0x5e) = puVar8[0x2f];
    puVar8 = puVar8 + 8;
    puVar9 = puVar9 + 0x10;
  } while (iVar2 < 0x10);
  uStack_c = *(undefined1 *)(puVar3 + 0x62);
  sVar7 = (short)param_4;
  uStack_8 = *(undefined4 *)(puVar3 + 100);
  if (sVar7 == -2) {
    uStack_c = 1;
  }
  else if (sVar7 == -3) {
    uStack_c = 0;
  }
  else if (sVar7 != -1) {
    if (param_5 == 0) {
      uVar4 = Maker_GetInfo(param_4);
      *(short *)(auStack_b5 + (uVar4 & 0xff) * 4 + 0x55) = sVar7;
      uVar4 = Maker_GetInfo(param_4);
      auStack_5e[(uVar4 & 0xff) * 4] = 0x1f;
    }
    else if (param_5 == 1) {
      uVar4 = Maker_GetInfo(param_4);
      *(short *)(auStack_5e + (uVar4 & 0xff) * 4 + 2) = sVar7;
      uVar4 = Maker_GetInfo(param_4);
      auStack_5a[(uVar4 & 0xff) * 4] = 0x1f;
    }
    else {
      uVar4 = Maker_GetInfo(param_4);
      *(short *)(auStack_b5 + (uVar4 & 0xff) * 4 + 0x55) = sVar7;
      uVar4 = Maker_GetInfo(param_4);
      auStack_5e[(uVar4 & 0xff) * 4] = 0x1f;
      uVar4 = Maker_GetInfo(param_4);
      *(short *)(auStack_5e + (uVar4 & 0xff) * 4 + 2) = sVar7;
      uVar4 = Maker_GetInfo(param_4);
      auStack_5a[(uVar4 & 0xff) * 4] = 0x1f;
    }
  }
  CarSpec_BuildForRecord(&uStack_f0,auStack_d0);
  *param_1 = uStack_f0;
  param_1[1] = uStack_ec;
  param_1[2] = uStack_e8;
  param_1[3] = uStack_e4;
  param_1[4] = uStack_e0;
  param_1[5] = uStack_dc;
  param_1[6] = uStack_d8;
  return;
}

// 0x001f6ec0  size 0x8
/* 0xdd5 "HAKONE STALKERS" */

int MsgId_TeamName(int param_1)

{
  return param_1 + 0xdd5;
}

// 0x001f6ed0  size 0x8
/* 0xc32 */

int MsgId_RivalProfile(int param_1)

{
  return param_1 + 0xc32;
}

// 0x001f6ee0  size 0x8
/* 0x6ec "GROUND ZERO" */

int MsgId_RivalNickname(int param_1)

{
  return param_1 + 0x6ec;
}

// 0x001f6ef0  size 0x8
/* base 0xa8c */

int MsgId_RivalName(int param_1)

{
  return param_1 + 0xa8c;
}

// 0x001f6f00  size 0x8
/* 0x6d2 */

int MsgId_RivalType(int param_1)

{
  return param_1 + 0x6d2;
}

// 0x001f6f10  size 0x8
/* 0x6b8 "FAKE", "BRAGGER" */

int MsgId_RivalTrait(int param_1)

{
  return param_1 + 0x6b8;
}

// 0x001f6f20  size 0xc4
undefined4 MsgId_ForChapter(ulong param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x12) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_1) {
    case 0:
      uVar1 = 0;
      break;
    case 1:
      uVar1 = 4;
      break;
    case 2:
      uVar1 = 8;
      break;
    case 3:
      uVar1 = 9;
      break;
    case 4:
      uVar1 = 0xb;
      break;
    case 5:
      uVar1 = 0xc;
      break;
    case 6:
      uVar1 = 0x12;
      break;
    case 7:
      uVar1 = 0x13;
      break;
    case 8:
      uVar1 = 0x14;
      break;
    case 9:
      uVar1 = 2;
      break;
    case 10:
      uVar1 = 1;
      break;
    case 0xb:
      uVar1 = 6;
      break;
    case 0xc:
      uVar1 = 3;
      break;
    case 0xd:
      uVar1 = 10;
      break;
    case 0xe:
      uVar1 = 0xe;
      break;
    case 0xf:
      uVar1 = 0x10;
      break;
    case 0x10:
      uVar1 = 0x15;
      break;
    case 0x11:
      uVar1 = 0x18;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x001f6ff0  size 0x17c
/* 22 callers */

undefined4 MenuText_RivalCar(long param_1,long param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int aiStack_40 [16];
  
  if (param_2 == -3) {
    uVar3 = RivalDb_Get((short)param_1);
    uVar3 = RivalRec_GetCarId(uVar3);
    uVar2 = MenuText_RivalCar(uVar3,0xffffffffffffffff);
  }
  else if (param_2 == -4) {
    uVar3 = Msg_FormatRivalName();
    uVar2 = MenuText_RivalCar(uVar3,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(aiStack_40,param_1);
    uVar2 = *(undefined4 *)(&DAT_003268e0 + aiStack_40[0] * 4);
  }
  else if (param_2 == -1) {
    uVar2 = *(undefined4 *)(&DAT_003268e0 + (int)param_1 * 4);
  }
  else {
    uVar3 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar3 = Profile_GetCurrentCar(uVar3);
      sVar1 = CarRec_GetModelId(uVar3);
    }
    else {
      sVar1 = CarRec_GetModelId((int)uVar3 +
                                *(short *)((int)param_1 * 2 + (int)uVar3 + 0x13ee) * 0xcc);
    }
    uVar2 = *(undefined4 *)(&DAT_003268e0 + sVar1 * 4);
  }
  return uVar2;
}

// 0x001f7170  size 0x160
undefined1 MenuText_RivalCarSpec(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 == -3) {
    uVar4 = RivalDb_Get((short)param_1);
    uVar4 = RivalRec_GetCarId(uVar4);
    uVar1 = MenuText_RivalCarSpec(uVar4,0xffffffffffffffff);
  }
  else if (param_2 == -4) {
    uVar4 = Msg_FormatRivalName();
    uVar1 = MenuText_RivalCarSpec(uVar4,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(&uStack_40,param_1);
    uStack_c = uStack_2c;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uStack_18 = uStack_38;
    uStack_14 = uStack_34;
    uStack_10 = uStack_30;
    uStack_8 = uStack_28;
    iVar3 = CarDb_GetModel(uStack_40);
    uVar1 = *(undefined1 *)(iVar3 + 0x44);
  }
  else if (param_2 == -1) {
    iVar3 = CarDb_GetModel();
    uVar1 = *(undefined1 *)(iVar3 + 0x44);
  }
  else {
    uVar4 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar4 = Profile_GetCurrentCar(uVar4);
      uVar2 = CarRec_GetModelId(uVar4);
    }
    else {
      uVar2 = CarRec_GetModelId((int)uVar4 +
                                *(short *)((int)param_1 * 2 + (int)uVar4 + 0x13ee) * 0xcc);
    }
    iVar3 = CarDb_GetModel(uVar2);
    uVar1 = *(undefined1 *)(iVar3 + 0x44);
  }
  return uVar1;
}

// 0x001f72d0  size 0x160
undefined1 MenuText_RivalCarMaker(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 == -3) {
    uVar4 = RivalDb_Get((short)param_1);
    uVar4 = RivalRec_GetCarId(uVar4);
    uVar1 = MenuText_RivalCarMaker(uVar4,0xffffffffffffffff);
  }
  else if (param_2 == -4) {
    uVar4 = Msg_FormatRivalName();
    uVar1 = MenuText_RivalCarMaker(uVar4,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(&uStack_40,param_1);
    uStack_c = uStack_2c;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uStack_18 = uStack_38;
    uStack_14 = uStack_34;
    uStack_10 = uStack_30;
    uStack_8 = uStack_28;
    iVar3 = CarDb_GetModel(uStack_40);
    uVar1 = *(undefined1 *)(iVar3 + 0x45);
  }
  else if (param_2 == -1) {
    iVar3 = CarDb_GetModel();
    uVar1 = *(undefined1 *)(iVar3 + 0x45);
  }
  else {
    uVar4 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar4 = Profile_GetCurrentCar(uVar4);
      uVar2 = CarRec_GetModelId(uVar4);
    }
    else {
      uVar2 = CarRec_GetModelId((int)uVar4 +
                                *(short *)((int)param_1 * 2 + (int)uVar4 + 0x13ee) * 0xcc);
    }
    iVar3 = CarDb_GetModel(uVar2);
    uVar1 = *(undefined1 *)(iVar3 + 0x45);
  }
  return uVar1;
}

// 0x001f7430  size 0x170
int MenuText_OpponentName(long param_1,long param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_a0 [68];
  float fStack_5c;
  undefined1 auStack_40 [16];
  float fStack_30;
  
  if (param_2 == -3) {
    Opponent_BuildFromRival(auStack_a0,(short)param_1);
    iVar3 = (int)fStack_5c;
  }
  else if (param_2 == -4) {
    uVar2 = Msg_FormatRivalName();
    iVar3 = MenuText_OpponentName(uVar2,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(auStack_40,param_1);
    iVar3 = (int)fStack_30;
  }
  else if (param_2 == -1) {
    iVar3 = CarDb_GetModel();
    iVar3 = (int)*(float *)(iVar3 + 0x58);
  }
  else {
    uVar2 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar2 = Profile_GetCurrentCar(uVar2);
      uVar1 = CarRec_GetModelId(uVar2);
    }
    else {
      uVar1 = CarRec_GetModelId((int)uVar2 +
                                *(short *)((int)param_1 * 2 + (int)uVar2 + 0x13ee) * 0xcc);
    }
    iVar3 = CarDb_GetModel(uVar1);
    iVar3 = (int)*(float *)(iVar3 + 0x58);
  }
  return iVar3;
}

// 0x001f75a0  size 0x1ec
int MenuText_OpponentTeam(long param_1,long param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_a0 [64];
  float fStack_60;
  undefined1 auStack_40 [12];
  float fStack_34;
  
  if (param_2 == -3) {
    Opponent_BuildFromRival(auStack_a0,(short)param_1);
    iVar3 = (int)(fStack_60 * 10.0 + 0.5);
  }
  else if (param_2 == -4) {
    uVar2 = Msg_FormatRivalName();
    iVar3 = MenuText_OpponentTeam(uVar2,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(auStack_40,param_1);
    iVar3 = (int)(fStack_34 * 10.0 + 0.5);
  }
  else if (param_2 == -1) {
    iVar3 = CarDb_GetModel();
    iVar3 = (int)(*(float *)(iVar3 + 0x54) * 10.0 + 0.5);
  }
  else {
    uVar2 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar2 = Profile_GetCurrentCar(uVar2);
      uVar1 = CarRec_GetModelId(uVar2);
    }
    else {
      uVar1 = CarRec_GetModelId((int)uVar2 +
                                *(short *)((int)param_1 * 2 + (int)uVar2 + 0x13ee) * 0xcc);
    }
    iVar3 = CarDb_GetModel(uVar1);
    iVar3 = (int)(*(float *)(iVar3 + 0x54) * 10.0 + 0.5);
  }
  return iVar3;
}

// 0x001f7790  size 0x170
int MenuText_OpponentCar(long param_1,long param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_a0 [60];
  float fStack_64;
  undefined1 auStack_40 [8];
  float fStack_38;
  
  if (param_2 == -3) {
    Opponent_BuildFromRival(auStack_a0,(short)param_1);
    iVar3 = (int)fStack_64;
  }
  else if (param_2 == -4) {
    uVar2 = Msg_FormatRivalName();
    iVar3 = MenuText_OpponentCar(uVar2,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(auStack_40,param_1);
    iVar3 = (int)fStack_38;
  }
  else if (param_2 == -1) {
    iVar3 = CarDb_GetModel();
    iVar3 = (int)*(float *)(iVar3 + 0x50);
  }
  else {
    uVar2 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar2 = Profile_GetCurrentCar(uVar2);
      uVar1 = CarRec_GetModelId(uVar2);
    }
    else {
      uVar1 = CarRec_GetModelId((int)uVar2 +
                                *(short *)((int)param_1 * 2 + (int)uVar2 + 0x13ee) * 0xcc);
    }
    iVar3 = CarDb_GetModel(uVar1);
    iVar3 = (int)*(float *)(iVar3 + 0x50);
  }
  return iVar3;
}

// 0x001f7900  size 0x170
int MenuText_OpponentTitle(long param_1,long param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_a0 [56];
  float fStack_68;
  undefined1 auStack_40 [4];
  float fStack_3c;
  
  if (param_2 == -3) {
    Opponent_BuildFromRival(auStack_a0,(short)param_1);
    iVar3 = (int)fStack_68;
  }
  else if (param_2 == -4) {
    uVar2 = Msg_FormatRivalName();
    iVar3 = MenuText_OpponentTitle(uVar2,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(auStack_40,param_1);
    iVar3 = (int)fStack_3c;
  }
  else if (param_2 == -1) {
    iVar3 = CarDb_GetModel();
    iVar3 = (int)*(float *)(iVar3 + 0x4c);
  }
  else {
    uVar2 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar2 = Profile_GetCurrentCar(uVar2);
      uVar1 = CarRec_GetModelId(uVar2);
    }
    else {
      uVar1 = CarRec_GetModelId((int)uVar2 +
                                *(short *)((int)param_1 * 2 + (int)uVar2 + 0x13ee) * 0xcc);
    }
    iVar3 = CarDb_GetModel(uVar1);
    iVar3 = (int)*(float *)(iVar3 + 0x4c);
  }
  return iVar3;
}

// 0x001f7a70  size 0x154
undefined4 MenuText_OpponentSpec(long param_1,long param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [76];
  undefined4 uStack_54;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 == -3) {
    Opponent_BuildFromRival(auStack_a0,(short)param_1);
  }
  else if (param_2 == -4) {
    uVar3 = Msg_FormatRivalName();
    uStack_54 = MenuText_OpponentSpec(uVar3,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(&uStack_40,param_1);
    uStack_c = uStack_2c;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uStack_18 = uStack_38;
    uStack_14 = uStack_34;
    uStack_10 = uStack_30;
    uStack_8 = uStack_28;
    iVar2 = CarDb_GetModel(uStack_40);
    uStack_54 = *(undefined4 *)(iVar2 + 0x48);
  }
  else if (param_2 == -1) {
    iVar2 = CarDb_GetModel();
    uStack_54 = *(undefined4 *)(iVar2 + 0x48);
  }
  else {
    uVar3 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar3 = Profile_GetCurrentCar(uVar3);
      uVar1 = CarRec_GetModelId(uVar3);
    }
    else {
      uVar1 = CarRec_GetModelId((int)uVar3 +
                                *(short *)((int)param_1 * 2 + (int)uVar3 + 0x13ee) * 0xcc);
    }
    iVar2 = CarDb_GetModel(uVar1);
    uStack_54 = *(undefined4 *)(iVar2 + 0x48);
  }
  return uStack_54;
}

// 0x001f7bd0  size 0x15c
int MenuText_OpponentComment(long param_1,long param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_a0 [72];
  float fStack_58;
  undefined1 auStack_40 [20];
  float fStack_2c;
  
  if (param_2 == -3) {
    Opponent_BuildFromRival(auStack_a0,(short)param_1);
    iVar3 = (int)fStack_58;
  }
  else if (param_2 == -4) {
    uVar2 = Msg_FormatRivalName();
    iVar3 = MenuText_OpponentComment(uVar2,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(auStack_40,param_1);
    iVar3 = (int)fStack_2c;
  }
  else if (param_2 == -1) {
    iVar3 = CarDb_GetModel();
    iVar3 = *(int *)(iVar3 + 0x2c);
  }
  else {
    uVar2 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar2 = Profile_GetCurrentCar(uVar2);
      uVar1 = CarRec_GetModelId(uVar2);
    }
    else {
      uVar1 = CarRec_GetModelId((int)uVar2 +
                                *(short *)((int)param_1 * 2 + (int)uVar2 + 0x13ee) * 0xcc);
    }
    iVar3 = CarDb_GetModel(uVar1);
    iVar3 = *(int *)(iVar3 + 0x2c);
  }
  return iVar3;
}

// 0x001f7d30  size 0x160
/* 12 callers */

undefined1 MenuText_CarName(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 == -3) {
    uVar4 = RivalDb_Get((short)param_1);
    uVar4 = RivalRec_GetCarId(uVar4);
    uVar1 = MenuText_CarName(uVar4,0xffffffffffffffff);
  }
  else if (param_2 == -4) {
    uVar4 = Msg_FormatRivalName();
    uVar1 = MenuText_CarName(uVar4,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(&uStack_40,param_1);
    uStack_c = uStack_2c;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uStack_18 = uStack_38;
    uStack_14 = uStack_34;
    uStack_10 = uStack_30;
    uStack_8 = uStack_28;
    iVar3 = CarDb_GetModel(uStack_40);
    uVar1 = *(undefined1 *)(iVar3 + 0x3c);
  }
  else if (param_2 == -1) {
    iVar3 = CarDb_GetModel();
    uVar1 = *(undefined1 *)(iVar3 + 0x3c);
  }
  else {
    uVar4 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar4 = Profile_GetCurrentCar(uVar4);
      uVar2 = CarRec_GetModelId(uVar4);
    }
    else {
      uVar2 = CarRec_GetModelId((int)uVar4 +
                                *(short *)((int)param_1 * 2 + (int)uVar4 + 0x13ee) * 0xcc);
    }
    iVar3 = CarDb_GetModel(uVar2);
    uVar1 = *(undefined1 *)(iVar3 + 0x3c);
  }
  return uVar1;
}

// 0x001f7e90  size 0x50
int MenuText_CarNameOrMaker(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = MenuText_CarModelId();
  if (lVar2 == 0x112) {
    iVar1 = 0x6a2;
  }
  else {
    iVar1 = MenuText_CarFullName(param_1,param_2);
    iVar1 = iVar1 + 0x6a3;
  }
  return iVar1;
}

// 0x001f7ee0  size 0x160
/* 16 callers */

undefined1 MenuText_CarFullName(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 == -3) {
    uVar4 = RivalDb_Get((short)param_1);
    uVar4 = RivalRec_GetCarId(uVar4);
    uVar1 = MenuText_CarFullName(uVar4,0xffffffffffffffff);
  }
  else if (param_2 == -4) {
    uVar4 = Msg_FormatRivalName();
    uVar1 = MenuText_CarFullName(uVar4,0xfffffffffffffffd);
  }
  else if (param_2 == -2) {
    Msg_FormatCarName(&uStack_40,param_1);
    uStack_c = uStack_2c;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uStack_18 = uStack_38;
    uStack_14 = uStack_34;
    uStack_10 = uStack_30;
    uStack_8 = uStack_28;
    iVar3 = CarDb_GetModel(uStack_40);
    uVar1 = *(undefined1 *)(iVar3 + 0x28);
  }
  else if (param_2 == -1) {
    iVar3 = CarDb_GetModel();
    uVar1 = *(undefined1 *)(iVar3 + 0x28);
  }
  else {
    uVar4 = Profile_Get(param_2);
    if (param_1 == -1) {
      uVar4 = Profile_GetCurrentCar(uVar4);
      uVar2 = CarRec_GetModelId(uVar4);
    }
    else {
      uVar2 = CarRec_GetModelId((int)uVar4 +
                                *(short *)((int)param_1 * 2 + (int)uVar4 + 0x13ee) * 0xcc);
    }
    iVar3 = CarDb_GetModel(uVar2);
    uVar1 = *(undefined1 *)(iVar3 + 0x28);
  }
  return uVar1;
}

