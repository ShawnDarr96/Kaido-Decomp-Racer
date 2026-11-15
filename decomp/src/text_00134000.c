// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00134000 - 0x00138000
#include "ghidra_types.h"

// 0x00134120  size 0x118
void Color_LerpAlpha(float *param_1,uint param_2,ulong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((long)param_3 < 0) {
    fVar1 = (float)(param_3 & 0xffffffff);
  }
  else {
    fVar1 = (float)(int)param_3;
  }
  fVar1 = (float)param_2 / fVar1;
  param_1[3] = fVar1;
  fVar3 = param_1[2];
  fVar2 = -1.0;
  if (fVar3 * -1.0 <= fVar1) {
    if (fVar1 <= fVar3) {
      fVar2 = *param_1 - param_1[1];
      if (fVar2 <= fVar1) {
        fVar2 = *param_1 + param_1[1];
        if (fVar2 < fVar1) {
          fVar2 = (fVar1 - fVar2) / (fVar3 - fVar2);
        }
        else {
          fVar2 = 0.0;
        }
      }
      else {
        fVar2 = ((fVar1 - fVar2) / (fVar3 * -1.0 - fVar2)) * -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
  }
  param_1[3] = fVar2;
  return;
}

// 0x00134240  size 0x48
void maybe_Vec3_SetAbsYZ(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                        undefined4 *param_4)

{
  undefined4 uVar1;
  
  *param_4 = param_1;
  uVar1 = fabsf(param_2);
  param_4[1] = uVar1;
  uVar1 = fabsf(param_3);
  param_4[2] = uVar1;
  return;
}

// 0x00134290  size 0x48
undefined8 maybe_Vec3_SetUp(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  uVar2 = fabsf(0);
  puVar1[1] = uVar2;
  uVar2 = fabsf(0x3f800000);
  puVar1[2] = uVar2;
  puVar1[3] = 0;
  return param_1;
}

// 0x001342e0  size 0xf0
/* held/pressed/released bit masks */

void Input_UpdateButtonEdges(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  param_1[1] = param_1[1] | param_1[6];
  param_1[2] = param_1[1];
  param_1[1] = param_2;
  uVar2 = param_1[1] ^ param_1[2];
  param_1[3] = uVar2 & param_1[1];
  param_1[3] = param_1[3] | param_1[6];
  param_1[4] = uVar2 & ~param_1[1];
  param_1[5] = param_1[3];
  param_1[6] = 0;
  uVar2 = param_1[1];
  uVar1 = 0;
  if (*param_1 != 0) {
    puVar3 = param_1;
    do {
      if ((uVar2 & 1) == 0) {
        puVar3[7] = 0;
      }
      else {
        if ((puVar3[0x27] <= puVar3[7]) && ((int)puVar3[7] % (int)puVar3[0x47] == 0)) {
          param_1[5] = param_1[5] | (uVar2 & 1) << (uVar1 & 0x1f);
          puVar3[7] = puVar3[0x27];
        }
        puVar3[7] = puVar3[7] + 1;
      }
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 >> 1;
      puVar3 = puVar3 + 1;
    } while (uVar1 < *param_1);
  }
  return;
}

// 0x001343d0  size 0x28
void Input_Clear(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  Mem_Set16(param_1 + 0x1c,0,0x20);
  return;
}

// 0x00134400  size 0x28
void Input_LatchButton(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 4 + param_1;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1 << (param_2 & 0x1f);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x9c);
  return;
}

// 0x00134430  size 0x10
undefined4 Input_GetAnalog(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + param_1 + 0x9c);
}

// 0x00134440  size 0x180
/* recursive */

void maybe_Gut_HashInsert(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uStack_10;
  
  uVar1 = *param_1;
  uVar6 = (uint)param_3;
  uVar7 = (uint)param_4;
  if (uVar1 == param_2) {
    uStack_10 = 0;
    if (uVar1 != 0) {
      puVar9 = param_1;
      do {
        if (uVar1 == uStack_10) {
          uVar8 = 0;
          if (uVar1 != 0) {
            puVar3 = param_1;
            do {
              if (uVar1 == uVar8) {
                uVar5 = 0;
                if (uVar1 != 0) {
                  puVar2 = param_1;
                  do {
                    if (uVar1 == uVar5) {
                      uVar4 = 0;
                      if (uVar1 != 0) {
                        do {
                          maybe_Gut_HashInsert(param_1,uVar4,param_3,param_4);
                          uVar4 = uVar4 + 1;
                        } while (uVar4 < *param_1);
                      }
                    }
                    else {
                      puVar2[0x27] = uVar6;
                      puVar2[0x47] = uVar7;
                    }
                    uVar1 = *param_1;
                    uVar5 = uVar5 + 1;
                    puVar2 = puVar2 + 1;
                  } while (uVar5 < uVar1);
                }
              }
              else {
                puVar3[0x27] = uVar6;
                puVar3[0x47] = uVar7;
              }
              uVar1 = *param_1;
              uVar8 = uVar8 + 1;
              puVar3 = puVar3 + 1;
            } while (uVar8 < uVar1);
          }
        }
        else {
          puVar9[0x27] = uVar6;
          puVar9[0x47] = uVar7;
        }
        uVar1 = *param_1;
        uStack_10 = uStack_10 + 1;
        puVar9 = puVar9 + 1;
      } while (uStack_10 < uVar1);
    }
  }
  else {
    param_1[param_2 + 0x27] = uVar6;
    param_1[param_2 + 0x47] = uVar7;
  }
  return;
}

// 0x001345d0  size 0x60
undefined8 Gut_HashInit(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = param_2;
  maybe_Gut_HashInsert(param_1,*puVar1,0x28,2);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  Mem_Set16(puVar1 + 7,0,0x20);
  return param_1;
}

// 0x00134630  size 0x44
/* count + offset table; 32 callers */

int * Gut_PackGetEntry(uint *param_1,uint param_2,long param_3)

{
  int *piVar1;
  
  if (param_2 < *param_1) {
    piVar1 = (int *)((int)param_1 + param_1[param_2 + 1]);
    if ((param_3 != 0) && (*piVar1 == 0)) {
      piVar1 = (int *)0x0;
    }
  }
  else {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

// 0x00134680  size 0x1dc
/* "GUT_Archive Memory Over", "destSize Error" */

undefined4 Gut_ArchiveDecompress(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  uVar4 = 0;
  memcpy(auStack_8,param_2 + 8,4);
  memcpy(auStack_c,param_2 + 0xe,4);
  iVar2 = 0x12;
  while( true ) {
    while( true ) {
      memcpy(&uStack_10,param_2 + iVar2,4);
      uVar3 = CONCAT13(uStack_10,CONCAT12(uStack_f,CONCAT11(uStack_e,uStack_d)));
      if (uVar3 == 0) {
        if (param_3 == uVar4) {
          return 1;
        }
        Dbg_Nop(0x361240);
        return 0;
      }
      memcpy(&uStack_14,param_2 + iVar2 + 4,4);
      uVar1 = CONCAT13(uStack_14,CONCAT12(uStack_13,CONCAT11(uStack_12,uStack_11)));
      iVar2 = iVar2 + 8;
      if (uVar3 <= uVar1) break;
      Gut_DecompressBlock(param_2 + iVar2,uVar1,param_1 + uVar4,auStack_4,0);
      uVar4 = uVar4 + uVar3;
      iVar2 = iVar2 + uVar1;
      if (param_3 < uVar4) {
        Dbg_Nop(0x361200);
        return 0;
      }
    }
    if (param_3 < uVar4 + uVar1) break;
    memcpy(param_1 + uVar4,param_2 + iVar2,uVar1);
    iVar2 = iVar2 + uVar1;
    uVar4 = uVar4 + uVar1;
  }
  Dbg_Nop(0x361220);
  return 0;
}

// 0x00134860  size 0x70
/* iReferThreadStatus + iWakeup */

undefined8 maybe_Gfx_VSyncWakeThread(void)

{
  uint auStack_30 [12];
  
  uRam0036ef98 = uRam0036ef98 + 1;
  if ((uRam00380340 <= uRam0036ef98) &&
     (iReferThreadStatus(uRam0036efa4,auStack_30), (auStack_30[0] & 4) != 0)) {
    maybe_iWakeupThreadEx(uRam0036efa4);
  }
  SYNC(0);
  EI();
  return 0;
}

// 0x001348d0  size 0xc8
/* sceGsExecStoreImage */

void Gfx_StoreImage(undefined8 param_1,undefined2 *param_2)

{
  long lVar1;
  undefined1 auStack_70 [112];
  
  sceGsSetDefStoreImage
            (auStack_70,*param_2,param_2[2],param_2[4],param_2[6],param_2[8],param_2[10],
             param_2[0xc]);
  FlushCache(0);
  sceGsExecStoreImage(auStack_70,param_1);
  lVar1 = sceGsSyncPath(0,0);
  while (lVar1 != 0) {
    REG_DMAC_1_VIF1_QWC = 0;
    REG_DMAC_1_VIF1_CHCR = 0x45;
    REG_DMAC_2_GIF_QWC = 0;
    REG_DMAC_2_GIF_CHCR = 5;
    REG_VIF1_FBRST = 0xf;
    REG_VIF1_ERR = 2;
    REG_GIF_CTRL = 1;
    lVar1 = sceGsSyncPath(0,0);
  }
  return;
}

// 0x001349a0  size 0x80
/* sceGsSyncPath, kicks VIF1/GIF DMA */

void Gfx_ResetPathsIfBusy(void)

{
  long lVar1;
  
  lVar1 = sceGsSyncPath(0,0);
  while (lVar1 != 0) {
    REG_DMAC_1_VIF1_QWC = 0;
    REG_DMAC_1_VIF1_CHCR = 0x45;
    REG_DMAC_2_GIF_QWC = 0;
    REG_DMAC_2_GIF_CHCR = 5;
    REG_VIF1_FBRST = 0xf;
    REG_VIF1_ERR = 2;
    REG_GIF_CTRL = 1;
    lVar1 = sceGsSyncPath(0,0);
  }
  return;
}

// 0x00134a20  size 0x90
void maybe_Gfx_KickVif1Dma(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    do {
      uVar1 = REG_DMAC_1_VIF1_CHCR;
    } while ((uVar1 & 0x100) != 0);
    uRam0036efac = (uint)param_1;
    REG_DMAC_1_VIF1_TADR = uRam0036efac & 0xfffffff;
    REG_DMAC_1_VIF1_QWC = 0;
    REG_DMAC_1_VIF1_CHCR = 0x145;
  }
  if (param_2 != 0) {
    do {
      uVar1 = REG_DMAC_2_GIF_CHCR;
    } while ((uVar1 & 0x100) != 0);
    REG_DMAC_2_GIF_TADR = (uint)param_2 & 0xfffffff;
    REG_DMAC_2_GIF_QWC = 0;
    REG_DMAC_2_GIF_CHCR = 0x105;
    uRam0036efb0 = (uint)param_2;
  }
  return;
}

// 0x00134ab0  size 0xa0
long Gfx_SyncPath(long param_1,undefined2 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = sceGsSyncPath(param_1,param_2);
  lVar2 = lVar1;
  while ((param_1 == 0 && (lVar2 != 0))) {
    REG_DMAC_1_VIF1_QWC = 0;
    REG_DMAC_1_VIF1_CHCR = 0x45;
    REG_DMAC_2_GIF_QWC = 0;
    REG_DMAC_2_GIF_CHCR = 5;
    REG_VIF1_FBRST = 0xf;
    REG_VIF1_ERR = 2;
    REG_GIF_CTRL = 1;
    lVar2 = sceGsSyncPath(0,param_2);
  }
  return lVar1;
}

// 0x00134b60  size 0x180
/* sceGsResetGraph(0,1,2,1), DBuff */

void Gfx_Init(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  sceGsResetGraph(0,1,2,1);
  sceGsSetDefDBuff(0x3803a0,0,0x80,0x80,2,0,1);
  uVar2 = uRam003804f0 & 0x1ff;
  if ((uRam003804f0 & 0x1ff) <= (uRam00380400 & 0x1ff)) {
    uVar2 = uRam00380400 & 0x1ff;
  }
  sceGsSyncV(0);
  uVar4 = 0;
  if (0x200 / uVar2 != 0) {
    iVar3 = 0;
    do {
      uRam00380410 = 0x31003;
      uRam00380400 = uRam00380400 & 0xfe00 | (ushort)iVar3 & 0x1ff;
      FlushCache(0);
      sceGsPutDrawEnv(0x3803f0);
      lVar1 = sceGsSyncPath(0,0);
      while (lVar1 != 0) {
        REG_DMAC_1_VIF1_QWC = 0;
        REG_DMAC_1_VIF1_CHCR = 0x45;
        REG_DMAC_2_GIF_QWC = 0;
        REG_DMAC_2_GIF_CHCR = 5;
        REG_VIF1_FBRST = 0xf;
        REG_VIF1_ERR = 2;
        REG_GIF_CTRL = 1;
        lVar1 = sceGsSyncPath(0,0);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + uVar2;
    } while (uVar4 < 0x200 / uVar2);
  }
  sceGsSyncV(0);
  return;
}

// 0x00134cf0  size 0x33c
void maybe_Gfx_BuildDisplayEnv(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  iVar3 = iRam00380344;
  iVar2 = iRam00380334;
  iVar1 = iRam00380330;
  pbVar12 = (byte *)0x3801f0;
  uVar10 = 0;
  uVar7 = (ulong)uRam00380354;
  uVar6 = (ulong)uRam00380338;
  uVar4 = uRam00380354 - 1;
  uVar5 = iRam00380358 - 1;
  do {
    uVar9 = 0;
    pbVar11 = pbVar12;
    do {
      if (iVar1 == 2) {
        lVar8 = 0x19;
      }
      else {
        lVar8 = 0x24;
      }
      if (*param_1 == 0) {
        *pbVar11 = *pbVar11 & 0xfe;
      }
      else {
        *pbVar11 = *pbVar11 & 0xfe | 1;
      }
      if (param_1[1] == 0) {
        *(ushort *)(pbVar11 + 0x10) =
             *(ushort *)(pbVar11 + 0x10) & 0xfe00 | *(ushort *)(pbVar11 + 0x20) & 0x1ff;
      }
      else {
        *(ushort *)(pbVar11 + 0x10) =
             *(ushort *)(pbVar11 + 0x10) & 0xfe00 | (ushort)param_1[2] & 0x1ff;
      }
      if (param_1[3] == 0) {
        if (iVar3 == 0) {
          *pbVar11 = *pbVar11 & 0xdf;
          *pbVar11 = *pbVar11 & 0xbf;
          *pbVar11 = *pbVar11 & 0x7f;
          pbVar11[1] = 0;
        }
        else {
          *pbVar11 = *pbVar11 & 0xdf | 0x20;
          *pbVar11 = *pbVar11 & 0xbf;
          *pbVar11 = *pbVar11 & 0x7f;
          pbVar11[1] = 0x7f;
        }
      }
      else {
        *pbVar11 = *pbVar11 & 0xdf | (byte)((param_1[4] & 1U) << 5);
        *pbVar11 = *pbVar11 & 0xbf | (byte)((param_1[5] & 1U) << 6);
        *pbVar11 = *pbVar11 & 0x7f | (byte)((param_1[6] & 1U) << 7);
        pbVar11[1] = (byte)param_1[7];
      }
      if (param_1[8] != 0) {
        *(ulong *)(pbVar11 + 0x38) =
             (ulong)(uint)param_1[0xc] << 0x19 |
             (ulong)(uint)param_1[0xb] << 0x17 |
             uVar6 << 0x16 |
             (ulong)(uint)param_1[10] << 0x14 |
             (ulong)(uint)param_1[9] | (((ulong)pbVar11[0x11] & 0x7f) >> 1) << 0xe;
      }
      if (param_1[8] != 0) {
        if (iVar2 != 0) {
          lVar8 = (long)(int)((int)lVar8 + (uVar9 + param_1[0xd] & 1));
        }
        *(ulong *)(pbVar11 + 0x40) =
             (ulong)uVar5 << 0x2c |
             (ulong)uVar4 << 0x20 |
             (((ulong)pbVar11[0x1b] & 0x1f) >> 3) << 0x1b |
             (((ulong)*(ushort *)(pbVar11 + 0x1a) & 0x7ff) >> 7) << 0x17 | uVar7 | lVar8 << 0xc;
      }
      if (param_1[8] == 0) {
        pbVar11[0x48] = 0;
        pbVar11[0x49] = 0;
        pbVar11[0x4a] = 0;
        pbVar11[0x4b] = 0;
        pbVar11[0x4c] = 0;
        pbVar11[0x4d] = 0;
        pbVar11[0x4e] = 0;
        pbVar11[0x4f] = 0;
      }
      else {
        pbVar11[0x48] = 1;
        pbVar11[0x49] = 0;
        pbVar11[0x4a] = 0;
        pbVar11[0x4b] = 0;
        pbVar11[0x4c] = 0;
        pbVar11[0x4d] = 0;
        pbVar11[0x4e] = 0;
        pbVar11[0x4f] = 0;
      }
      uVar9 = uVar9 + 1;
      pbVar11 = pbVar11 + 0x50;
    } while (uVar9 < 2);
    uVar10 = uVar10 + 1;
    pbVar12 = pbVar12 + 0xa0;
  } while (uVar10 < 2);
  return;
}

// 0x00135030  size 0x10
void Gfx_AddFrameCallback(undefined8 param_1)

{
  maybe_List_Append(0x380380,param_1);
  return;
}

// 0x00135040  size 0x10
void Gfx_RemoveFrameCallback(undefined8 param_1)

{
  maybe_List_Remove(0x380380,param_1);
  return;
}

// 0x00135050  size 0x3c4
/* runs vsync callbacks, sync path */

void Gfx_SyncAndFlip(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  for (iVar1 = iRam0038038c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    (**(code **)(iVar1 + 8))(*(undefined4 *)(iVar1 + 0xc));
  }
  lVar4 = sceGsSyncPath(0,0);
  while (lVar4 != 0) {
    REG_DMAC_1_VIF1_QWC = 0;
    REG_DMAC_1_VIF1_CHCR = 0x45;
    REG_DMAC_2_GIF_QWC = 0;
    REG_DMAC_2_GIF_CHCR = 5;
    REG_VIF1_FBRST = 0xf;
    REG_VIF1_ERR = 2;
    REG_GIF_CTRL = 1;
    lVar4 = sceGsSyncPath(0,0);
  }
  uRam0036efa0 = (uint)(uRam00380340 <= uRam0036ef98);
  SleepThread();
  do {
  } while (uRam0036ef98 < uRam00380340);
  uVar3 = REG_GS_CSR;
  uRam0036ef94 = uRam0036ef94 + 1;
  uRam0036ef98 = 0;
  iRam0036ef90 = (int)((uVar3 & 0x2000) >> 0xd);
  if (uRam0036ef8c != 0) {
    do {
      uVar2 = REG_DMAC_2_GIF_CHCR;
    } while ((uVar2 & 0x100) != 0);
    FlushCache(0);
    REG_DMAC_2_GIF_TADR = uRam0036ef8c & 0xfffffff;
    REG_DMAC_2_GIF_QWC = 0;
    lVar4 = sceGsSyncPath(0,0);
    while (lVar4 != 0) {
      REG_DMAC_1_VIF1_QWC = 0;
      REG_DMAC_1_VIF1_CHCR = 0x45;
      REG_DMAC_2_GIF_QWC = 0;
      REG_DMAC_2_GIF_CHCR = 5;
      REG_VIF1_FBRST = 0xf;
      REG_VIF1_ERR = 2;
      REG_GIF_CTRL = 1;
      lVar4 = sceGsSyncPath(0,0);
    }
    REG_DMAC_2_GIF_CHCR = 0x105;
    lVar4 = sceGsSyncPath(0,0);
    while (lVar4 != 0) {
      REG_DMAC_1_VIF1_QWC = 0;
      REG_DMAC_1_VIF1_CHCR = 0x45;
      REG_DMAC_2_GIF_QWC = 0;
      REG_DMAC_2_GIF_CHCR = 5;
      REG_VIF1_FBRST = 0xf;
      REG_VIF1_ERR = 2;
      REG_GIF_CTRL = 1;
      lVar4 = sceGsSyncPath(0,0);
    }
  }
  lVar4 = sceGsSyncPath(0,0);
  while (lVar4 != 0) {
    REG_DMAC_1_VIF1_QWC = 0;
    REG_DMAC_1_VIF1_CHCR = 0x45;
    REG_DMAC_2_GIF_QWC = 0;
    REG_DMAC_2_GIF_CHCR = 5;
    REG_VIF1_FBRST = 0xf;
    REG_VIF1_ERR = 2;
    REG_GIF_CTRL = 1;
    lVar4 = sceGsSyncPath(0,0);
  }
  puVar5 = (undefined8 *)(iRam0036ef90 * 0x50 + (uRam0036ef94 & 1) * 0xa0 + 0x3801f0);
  REG_GS_DISPFB1 = puVar5[2];
  REG_GS_DISPLAY1 = puVar5[3];
  REG_GS_DISPFB2 = puVar5[4];
  REG_GS_DISPLAY2 = puVar5[5];
  REG_GS_BGCOLOR = puVar5[6];
  REG_GS_SMODE2 = puVar5[1];
  REG_GS_PMODE = *puVar5;
  REG_GS_EXTBUF = puVar5[7];
  REG_GS_EXTDATA = puVar5[8];
  REG_GS_EXTWRITE = puVar5[9];
  REG_GS_BGCOLOR = 0;
  if (iRam0036ef9c != 0) {
    REG_GS_PMODE = 0;
    iRam0036ef9c = iRam0036ef9c + -1;
  }
  lVar4 = sceGsSyncPath(0,0);
  while (lVar4 != 0) {
    REG_DMAC_1_VIF1_QWC = 0;
    REG_DMAC_1_VIF1_CHCR = 0x45;
    REG_DMAC_2_GIF_QWC = 0;
    REG_DMAC_2_GIF_CHCR = 5;
    REG_VIF1_FBRST = 0xf;
    REG_VIF1_ERR = 2;
    REG_GIF_CTRL = 1;
    lVar4 = sceGsSyncPath(0,0);
  }
  return;
}

// 0x00135420  size 0x238
/* sceGsResetGraph + DefDispEnv + vsync callback */

void Gfx_SetVideoMode(undefined2 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined8 *puStack_50;
  uint uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  FlushCache(0);
  sceGsSyncV(0);
  sceGsResetGraph(param_1,param_2[2],*param_2,param_2[4]);
  sceGsSyncV(0);
  uStack_40 = 0;
  puStack_50 = (undefined8 *)0x3801f0;
  puVar3 = param_2;
  do {
    uVar4 = 0;
    puVar2 = puStack_50;
    puVar1 = param_2;
    do {
      sceGsDefDispEnv(&uStack_30,param_2[6],puVar3[0x12],puVar3[0x14],puVar3[0xe],puVar3[0x10]);
      *puVar2 = uStack_30;
      puVar2[1] = uStack_28;
      puVar2[2] = uStack_20;
      puVar2[3] = uStack_18;
      puVar2[4] = uStack_20;
      puVar2[5] = uStack_18;
      puVar2[6] = uStack_10;
      if (*(int *)(param_2 + 10) == 0) {
        *(ushort *)(puVar2 + 2) =
             *(ushort *)(puVar2 + 2) & 0xfe00 | (ushort)*(undefined4 *)(puVar3 + 0xc) & 0x1ff;
        *(ushort *)(puVar2 + 4) =
             *(ushort *)(puVar2 + 4) & 0xfe00 | (ushort)*(undefined4 *)(puVar3 + 0xc) & 0x1ff;
      }
      else {
        *puVar2 = 0x7f23;
        *(ushort *)(puVar2 + 2) =
             *(ushort *)(puVar2 + 2) & 0xfe00 | (ushort)*(undefined4 *)(puVar1 + 0xc) & 0x1ff;
        *(ushort *)(puVar2 + 4) =
             *(ushort *)(puVar2 + 4) & 0xfe00 | (ushort)*(undefined4 *)(puVar1 + 0xc) & 0x1ff;
        *(uint *)(puVar2 + 5) =
             *(uint *)(puVar2 + 5) & 0xff800fff |
             ((int)(((long)(int)*(uint *)(puVar2 + 5) & 0x7fffffU) >> 0xc) + 1U & 0x7ff) << 0xc;
      }
      puVar2[7] = 0;
      puVar2[8] = 0;
      uVar4 = uVar4 + 1;
      puVar2[9] = 0;
      puVar1 = puVar1 + 10;
      puVar2 = puVar2 + 10;
    } while (uVar4 < 2);
    puStack_50 = puStack_50 + 0x14;
    uStack_40 = uStack_40 + 1;
    puVar3 = puVar3 + 10;
  } while (uStack_40 < 2);
  uRam0036ef8c = 0;
  maybe_Mem_CopyQwords(0x380330,param_2,0x40);
  uRam0036efa8 = sceGsSyncVCallback(0x134860);
  EnableIntc(2);
  return;
}

// 0x00135660  size 0x3c
void Gfx_Shutdown(void)

{
  if (iRam0036efa8 != 0) {
    DisableIntc(2);
    sceGsSyncVCallback(iRam0036efa8);
  }
  maybe_List_Clear(0x380380);
  return;
}

// 0x001356a0  size 0x50
void Gfx_ResetState(void)

{
  sceGsSyncV(0);
  sceGsResetPath();
  uRam0036ef90 = 0;
  uRam0036ef9c = 4;
  uRam0036ef94 = 0;
  uRam0036ef98 = 0;
  uRam0036efa0 = 0;
  uRam0036efa4 = GetThreadId();
  uRam0036efa8 = 0;
  uRam0036efac = 0;
  uRam0036efb0 = 0;
  return;
}

// 0x001356f0  size 0x60
long Gfx_FrameCallbackList_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e0b0;
    maybe_List_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00135750  size 0x38
/* refcounted sceDbcEnd */

void Dbc_Release(void)

{
  iRam0036efb4 = iRam0036efb4 + -1;
  if (iRam0036efb4 == 0) {
    sceDbcEnd();
  }
  return;
}

// 0x00135790  size 0x40
/* refcounted sceDbcInit */

void Dbc_Acquire(void)

{
  if (iRam0036efb4 == 0) {
    sceDbcInit();
  }
  iRam0036efb4 = iRam0036efb4 + 1;
  return;
}

// 0x001357d0  size 0x14
undefined8 Input_InitPorts(undefined8 param_1)

{
  *(undefined1 *)param_1 = 0xff;
  ((undefined1 *)param_1)[1] = 0xff;
  return param_1;
}

// 0x001357f0  size 0x1d0
/* sceCdStRead */

int CdStream_ReadSector(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (iRam0036f00c == -1) {
    iStack_4 = 0;
    iVar4 = 0;
    do {
      iVar2 = sceCdStRead((int)param_2 >> 0xb,param_1,1,&iStack_4);
      iVar1 = iRam0036f00c;
      if (iStack_4 == 0) {
        iRam0036f010 = iRam0036f010 + iVar2;
        iRam0036f014 = iRam0036f014 - iVar2;
        iVar2 = iVar2 << 0xb;
      }
      else {
        if (iVar4 != iStack_4) {
          iVar4 = iStack_4;
        }
        uStack_10 = 0;
        iStack_c = iRam0036f010;
        iStack_8 = iRam0036f014;
        if (iRam0036f00c == -1) {
          sceCdStStop();
        }
        else {
          if (*(int *)(iRam0036f00c * 4 + 0x3805d0) != -1) {
            sceClose();
            *(undefined4 *)(iVar1 * 4 + 0x3805d0) = 0xffffffff;
          }
          iRam0036f00c = -1;
        }
        Sema_Signal(0x36effc,0);
        do {
          lVar3 = sceCdDiskReady(0);
        } while (lVar3 == 6);
        CdStream_Open(&uStack_10);
      }
    } while (iStack_4 != 0);
  }
  else {
    do {
      iVar2 = -1;
      iVar4 = *(int *)(iRam0036f00c * 4 + 0x3805d0);
      if (iVar4 != -1) {
        iVar2 = sceRead(iVar4,param_1,param_2);
      }
    } while (iVar2 < 0);
  }
  return iVar2;
}

// 0x001359c0  size 0x98
void CdStream_Close(void)

{
  int iVar1;
  
  iVar1 = iRam0036f00c;
  if (iRam0036f00c == -1) {
    sceCdStStop();
  }
  else {
    if (*(int *)(iRam0036f00c * 4 + 0x3805d0) != -1) {
      sceClose();
      *(undefined4 *)(iVar1 * 4 + 0x3805d0) = 0xffffffff;
    }
    iRam0036f00c = -1;
  }
  Sema_Signal(0x36effc,0);
  return;
}

// 0x00135a60  size 0xfc
undefined4 CdStream_Open(int *param_1)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  
  if (*param_1 == 0) {
    uStack_4 = 0;
    uRam0036f00c = 0xffffffff;
    uStack_3 = 0;
    uStack_2 = 0;
    iRam0036f010 = param_1[1];
    iRam0036f014 = param_1[2];
    lVar1 = sceCdStStart(iRam0036f010,&uStack_4);
    if (lVar1 == 0) {
      return 0;
    }
  }
  else {
    uVar4 = 0xffffffff;
    uVar3 = 0;
    piVar2 = (int *)0x3805d0;
    do {
      if (*piVar2 == -1) {
        uVar4 = uVar3;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < 10);
    if (uVar4 != 0xffffffff) {
      lVar1 = sceOpen(*param_1,1);
      if (lVar1 < 0) {
        uVar4 = 0xffffffff;
      }
      else {
        *(int *)(uVar4 * 4 + 0x3805d0) = (int)lVar1;
      }
    }
    uRam0036f00c = uVar4;
    if (uRam0036f00c == 0xffffffff) {
      return 0;
    }
    iRam0036f010 = 0;
    iRam0036f014 = 0;
  }
  Sema_Wait(0x36effc);
  return 1;
}

// 0x00135b60  size 0x24
void CdStream_Shutdown(void)

{
  sceCdStStop();
  maybe_sceSifFreeSysMemory(uRam0036f008);
  return;
}

// 0x00135b90  size 0x64
undefined4 maybe_CdStream_Init(undefined8 param_1,undefined8 param_2)

{
  uRam0036f00c = 0xffffffff;
  uRam0036f010 = 0;
  iRam0036f008 = sceSifAllocIopHeap((int)param_1 * 0x800 + 0x10);
  sceCdStInit(param_1,param_2,iRam0036f008 + 0xfU & 0xfffffff0);
  return 1;
}

// 0x00135c00  size 0xf0
/* sceOpen/sceLseek/sceWrite */

void File_WriteHostRequest(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if ((*(uint *)(param_1 + 0xc) & 0x400) == 0) {
    iVar2 = sceOpen(*(undefined4 *)(param_1 + 0x10),1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  iVar3 = iVar2;
  if ((-1 < iVar2) && (iVar1 != 0)) {
    iVar3 = sceLseek(iVar2,iVar1,1);
  }
  if (-1 < iVar3) {
    iVar3 = sceWrite(iVar2,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48));
  }
  if ((-1 < iVar2) && ((*(uint *)(param_1 + 0xc) & 0x400) == 0)) {
    sceClose(iVar2);
  }
  if (iVar3 < 0) {
    uRam0036f000 = 0xfffffffb;
  }
  Sema_Signal(0x36eff8,0);
  return;
}

// 0x00135cf0  size 0xf0
/* sceOpen/sceLseek/sceRead */

void File_ReadHostRequest(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if ((*(uint *)(param_1 + 0xc) & 0x400) == 0) {
    iVar2 = sceOpen(*(undefined4 *)(param_1 + 0x10),1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  iVar3 = iVar2;
  if ((-1 < iVar2) && (iVar1 != 0)) {
    iVar3 = sceLseek(iVar2,iVar1,1);
  }
  if (-1 < iVar3) {
    iVar3 = sceRead(iVar2,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48));
  }
  if ((-1 < iVar2) && ((*(uint *)(param_1 + 0xc) & 0x400) == 0)) {
    sceClose(iVar2);
  }
  if (iVar3 < 0) {
    uRam0036f000 = 0xfffffffb;
  }
  Sema_Signal(0x36eff8,0);
  return;
}

// 0x00135de0  size 0x68
void maybe_Cd_ToggleMotor(undefined4 param_1)

{
  Sema_Wait(0x36efc0);
  if (iRam0036f000 == 0) {
    iRam0036f000 = maybe_sceCdTrayReq();
  }
  else {
    iRam0036f000 = 0;
  }
  uRam0036f004 = param_1;
  Sema_Signal(0x36eff8,0);
  Sema_Signal(0x36efc0,0);
  return;
}

// 0x00135e50  size 0x2f0
/* "decompress Error" */

void File_LoaderThread(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  do {
    Sema_Wait(0x36eff4);
    for (lVar3 = File_NextRequest(0); lVar3 != 0; lVar3 = File_NextRequest(lVar3)) {
      Sema_Wait(0x36effc);
      Sema_Signal(0x36effc,0);
      iVar6 = (int)lVar3;
      if (8 < *(byte *)(iVar6 + 0x38)) goto switchD_00135eec_caseD_0;
                    /* WARNING: Switch is manually overridden */
      switch(*(byte *)(iVar6 + 0x38)) {
      case 0:
        break;
      default:
        Sema_Signal(0x36eff8,0);
        iVar2 = *(int *)(iVar6 + 0x58);
        goto LAB_00136060;
      case 4:
        if (*(uint *)(iVar6 + 0x44) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(iVar6 + 0x44) >> 0xb;
        }
        iVar2 = *(int *)(iVar6 + 0x3c);
        do {
          do {
            lVar4 = sceCdDiskReady(0);
          } while (lVar4 == 6);
          lVar4 = maybe_sceCdSeek(iVar2 + uVar5);
        } while (lVar4 == 0);
        break;
      case 5:
        if (*(uint *)(iVar6 + 0x44) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(iVar6 + 0x44) >> 0xb;
        }
        iVar2 = *(int *)(iVar6 + 0x3c);
        uStack_4 = uRam0036e710;
        uStack_3 = uRam0036e711;
        uStack_2 = uRam0036e712;
        uStack_1 = uRam0036e713;
        do {
          do {
            lVar4 = sceCdDiskReady(0);
          } while (lVar4 == 6);
          lVar4 = sceCdRead(iVar2 + uVar5,*(undefined4 *)(iVar6 + 0x40),
                            *(undefined4 *)(iVar6 + 0x50),&uStack_4);
        } while (lVar4 == 0);
        break;
      case 6:
        if (*(uint *)(iVar6 + 0x44) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(iVar6 + 0x44) >> 0xb;
        }
        iVar2 = *(int *)(iVar6 + 0x3c);
        uStack_8 = uRam0036e714;
        uStack_7 = uRam0036e715;
        uStack_6 = uRam0036e716;
        uStack_5 = uRam0036e717;
        do {
          do {
            lVar4 = sceCdDiskReady(0);
          } while (lVar4 == 6);
          lVar4 = maybe_sceCdReadIOPm(iVar2 + uVar5,*(undefined4 *)(iVar6 + 0x40),
                                      *(undefined4 *)(iVar6 + 0x50),&uStack_8);
        } while (lVar4 == 0);
        break;
      case 7:
        File_ReadHostRequest(lVar3);
        break;
      case 8:
        File_WriteHostRequest(lVar3);
      }
switchD_00135eec_caseD_0:
      iVar2 = *(int *)(iVar6 + 0x58);
LAB_00136060:
      if (iVar2 != 0) {
        lVar4 = Gut_ArchiveDecompress
                          (*(undefined4 *)(iVar2 + 0x5c),*(undefined4 *)(iVar2 + 0x50),
                           *(undefined4 *)(iVar2 + 0x4c));
        if (lVar4 == 0) {
          Dbg_Nop(0x361260);
        }
        FlushCache(0);
      }
      Sema_Wait(0x36eff8);
      bVar1 = iRam0036f000 != 0;
      *(int *)(iVar6 + 0x54) = iRam0036f000;
      if (bVar1) {
        sceCdSync(0);
        do {
          lVar4 = sceCdDiskReady(0);
        } while (lVar4 == 6);
        maybe_sceCdStop();
        do {
          lVar4 = sceCdDiskReady(0);
        } while (lVar4 == 6);
        Sema_Wait(0x36eff8);
      }
    }
    if (iRam0036efc8 != 0) {
      iRam0036efc8 = 0;
      Sema_Signal(0x36efc4,0);
    }
  } while( true );
}

// 0x00136140  size 0x2a0
void File_StartRequest(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((param_1 != 0) && (iVar5 = (int)param_1, *(char *)(iVar5 + 0x38) == '\x01')) {
    Sema_Wait(0x36efc0);
    uVar1 = *(uint *)(iVar5 + 0xc);
    if ((uVar1 & 8) == 0) {
      if (((uVar1 & 0x10) == 0) || ((uVar1 & 0x800) == 0)) {
        if (((uVar1 & 0x10) == 0) || ((uVar1 & 0x200) == 0)) {
          uVar3 = uVar1 & 0x20;
          if ((uVar3 == 0) || ((uVar1 & 0x200) == 0)) {
            if ((uVar3 == 0) || ((uVar1 & 0x400) == 0)) {
              if ((uVar3 == 0) || ((uVar1 & 0x800) == 0)) {
                if ((uVar3 == 0) || ((uVar1 & 0x1000) == 0)) {
                  if (((uVar1 & 0x40) != 0) && ((uVar1 & 0x200) != 0)) {
                    *(undefined1 *)(iVar5 + 0x38) = 8;
                  }
                }
                else {
                  *(undefined1 *)(iVar5 + 0x38) = 6;
                }
              }
              else {
                *(undefined1 *)(iVar5 + 0x38) = 5;
              }
            }
            else {
              *(undefined1 *)(iVar5 + 0x38) = 7;
            }
          }
          else {
            *(undefined1 *)(iVar5 + 0x38) = 7;
          }
        }
        else {
          *(undefined1 *)(iVar5 + 0x38) = 3;
        }
      }
      else {
        *(undefined1 *)(iVar5 + 0x38) = 4;
      }
    }
    else {
      *(undefined1 *)(iVar5 + 0x38) = 3;
    }
    Sema_Signal(0x36efc0,0);
    if ((*(uint *)(iVar5 + 0xc) & 0x800) != 0) {
      *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(iVar5 + 0x18);
    }
    if ((*(uint *)(iVar5 + 0xc) & 0x80) != 0) {
      *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(iVar5 + 0x1c);
    }
    if ((*(uint *)(iVar5 + 0xc) & 0x100) == 0) {
      *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(iVar5 + 0x20);
    }
    else {
      *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar5 + 0x24);
      *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(iVar5 + 0x20);
    }
    *(uint *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x48) + 0x7ffU >> 0xb;
    uVar1 = *(uint *)(iVar5 + 0xc);
    if (((uVar1 & 0x20) != 0) && ((uVar1 & 1) != 0)) {
      if ((uVar1 & 0x1000) == 0) {
        uVar2 = Mem_AllocAligned(*(int *)(iVar5 + 0x40) << 0xb,0x40,*(undefined4 *)(iVar5 + 0x28));
        puVar4 = *(undefined4 **)(iVar5 + 0x2c);
      }
      else {
        uVar2 = sceSifAllocIopHeap();
        puVar4 = *(undefined4 **)(iVar5 + 0x2c);
      }
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uVar2;
      }
      *(undefined4 *)(iVar5 + 0x50) = uVar2;
    }
    if ((*(uint *)(iVar5 + 0xc) & 4) != 0) {
      *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar5 + 0x2c);
    }
    if (((*(uint *)(iVar5 + 0xc) & 0x100) != 0) && ((*(uint *)(iVar5 + 0xc) & 8) == 0)) {
      *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(iVar5 + 0x50);
      *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)((uRam0036efe4 & 1) * 4 + 0x36efe8);
      uRam0036efe4 = uRam0036efe4 + 1;
    }
  }
  return;
}

// 0x001363e0  size 0x228
int File_PollRequest(int param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  Sema_Wait(0x36efc0);
  if (((param_1 != 0) && ((*(uint *)(param_1 + 0xc) & 0x100) != 0)) &&
     ((*(uint *)(param_1 + 0xc) & 8) == 0)) {
    iVar3 = param_1;
  }
  if (param_2 != 0) {
    maybe_List_Append(0x386620,param_2);
    iVar4 = (int)param_2;
    *(undefined4 *)(iVar4 + 8) = 0xffffffff;
    *(undefined1 *)(iVar4 + 0x38) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  if (param_3 != 0) {
    maybe_List_Append(0x386620,param_3);
    iVar4 = (int)param_3;
    *(undefined4 *)(iVar4 + 8) = 0xffffffff;
    *(undefined1 *)(iVar4 + 0x38) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  if (param_1 == 0) {
    iVar4 = iRam0038662c;
  }
  else {
    iVar4 = *(int *)(param_1 + 4);
  }
  if ((iVar4 != 0) && (*(int *)(iVar4 + 8) == -1)) {
    iVar4 = iRam0038662c;
  }
  if (((iVar4 != 0) && (iVar3 != 0)) &&
     (((*(uint *)(iVar4 + 0xc) & 1) != 0 &&
      (((*(uint *)(iVar3 + 0xc) & 1) != 0 && (*(int *)(iVar4 + 0x28) == *(int *)(iVar3 + 0x28)))))))
  {
    iVar4 = 0;
  }
  if (((iVar4 != 0) && (iVar3 != 0)) &&
     (((uVar1 = *(uint *)(iVar4 + 0xc), (uVar1 & 0x100) == 0 || ((uVar1 & 8) != 0)) &&
      ((((uVar1 & 4) != 0 && ((*(uint *)(iVar3 + 0xc) & 4) != 0)) &&
       (*(int *)(iVar4 + 0x2c) == *(int *)(iVar3 + 0x5c))))))) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    *(undefined1 *)(iVar4 + 0x38) = 1;
    *(undefined4 *)(iVar4 + 0x3c) = 0;
    *(undefined4 *)(iVar4 + 0x40) = 0;
    *(undefined4 *)(iVar4 + 0x44) = 0;
    *(undefined4 *)(iVar4 + 0x4c) = 0;
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x54) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
  }
  if (iVar3 != 0) {
    if (iVar4 == 0) {
      *(int *)(iVar3 + 0x58) = iVar3;
      iVar4 = iVar3;
    }
    else {
      *(int *)(iVar4 + 0x58) = iVar3;
    }
    *(undefined1 *)(iVar3 + 0x38) = 2;
  }
  if ((iVar4 != 0) && (lVar2 = Sema_GetCount(0x36eff4,0), lVar2 != 0)) {
    Sema_Wait(0x36eff4);
  }
  Sema_Signal(0x36efc0,0);
  return iVar4;
}

// 0x00136610  size 0x2ac
int File_NextRequest(int param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if ((param_1 != 0) && (iVar6 = *(int *)(param_1 + 0x58), iVar6 != 0)) {
    if (((*(uint *)(iVar6 + 0xc) & 0x100) != 0) && ((*(uint *)(iVar6 + 0xc) & 8) == 0)) {
      uRam0036eff0 = *(undefined4 *)(iVar6 + 0x50);
      *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar6 + 0x5c);
    }
    if ((*(uint *)(iVar6 + 0xc) & 0x2000) == 0) {
      uVar4 = *(uint *)(iVar6 + 0xc);
    }
    else {
      DAT_0036e704 = *(undefined4 *)(iVar6 + 8);
      (**(code **)(iVar6 + 0x34))
                (*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0x50),
                 *(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x30));
      uVar4 = *(uint *)(iVar6 + 0xc);
    }
    if ((uVar4 & 2) != 0) {
      if ((uVar4 & 0x1000) == 0) {
        maybe_sceSifFreeSysMemory(*(undefined4 *)(iVar6 + 0x50));
      }
      else if (*(int *)(iVar6 + 0x50) != 0) {
        Mem_Free();
        *(undefined4 *)(iVar6 + 0x50) = 0;
      }
    }
    iVar7 = iVar6;
    if (param_1 == iVar6) {
      param_1 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  bVar1 = false;
  if (param_1 != 0) {
    lVar3 = maybe_sceCdTrayReq();
    bVar5 = false;
    if (lVar3 == 0) {
      bVar5 = *(int *)(param_1 + 0x54) == 0;
    }
    bVar1 = false;
    if (bVar5) {
      bVar1 = iRam0036f000 == 0;
    }
  }
  bVar5 = false;
  if (param_1 != 0) {
    bVar2 = false;
    if (((*(uint *)(param_1 + 0xc) & 0x100) != 0) && ((*(uint *)(param_1 + 0xc) & 8) == 0)) {
      bVar2 = true;
    }
    if (bVar2) {
      bVar5 = true;
    }
  }
  if ((param_1 == 0) || (bVar1)) {
    iVar6 = 0;
    if ((param_1 != 0) && (!bVar5)) {
      if (((*(uint *)(param_1 + 0xc) & 0x100) != 0) && ((*(uint *)(param_1 + 0xc) & 8) == 0)) {
        uRam0036eff0 = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x5c);
      }
      if ((*(uint *)(param_1 + 0xc) & 0x2000) == 0) {
        uVar4 = *(uint *)(param_1 + 0xc);
      }
      else {
        DAT_0036e704 = *(undefined4 *)(param_1 + 8);
        (**(code **)(param_1 + 0x34))
                  (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x50),
                   *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30));
        uVar4 = *(uint *)(param_1 + 0xc);
      }
      iVar6 = param_1;
      if ((uVar4 & 2) != 0) {
        if ((uVar4 & 0x1000) == 0) {
          maybe_sceSifFreeSysMemory(*(undefined4 *)(param_1 + 0x50));
        }
        else if (*(int *)(param_1 + 0x50) != 0) {
          Mem_Free();
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
      }
    }
    param_1 = File_PollRequest(param_1,iVar7,iVar6);
    if (param_1 != 0) {
      File_StartRequest(param_1);
    }
  }
  else if (iVar7 != 0) {
    Sema_Wait(0x36efc0);
    maybe_List_Append(0x386620,iVar7);
    *(undefined4 *)(iVar7 + 8) = 0xffffffff;
    *(undefined1 *)(iVar7 + 0x38) = 0;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    Sema_Signal(0x36efc0,0);
  }
  return param_1;
}

// 0x001368c0  size 0x60
void File_AbortAll(void)

{
  Sema_Wait(0x36efc0);
  if (iRam00386628 != 0) {
    iRam0036efc8 = 1;
  }
  Sema_Signal(0x36efc0,0);
  if (iRam0036efc8 != 0) {
    Sema_Wait(0x36efc4);
  }
  return;
}

// 0x00136920  size 0x94
bool File_IsBusy(int param_1)

{
  int iVar1;
  uint uVar2;
  
  Sema_Wait(0x36efc0);
  uVar2 = 0;
  iVar1 = 0x380610;
  do {
    if (param_1 == *(int *)(iVar1 + 8)) {
      iVar1 = uVar2 * 0x60 + 0x380610;
      goto LAB_00136984;
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x60;
  } while (uVar2 < 0x100);
  iVar1 = 0;
LAB_00136984:
  Sema_Signal(0x36efc0,0);
  return iVar1 == 0;
}

// 0x001369c0  size 0xb8
undefined4 File_CancelRequest(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  Sema_Wait(0x36efc0);
  uVar2 = 0;
  iVar1 = 0x380610;
  do {
    if (param_1 == *(int *)(iVar1 + 8)) {
      iVar1 = uVar2 * 0x60 + 0x380610;
      goto LAB_00136a24;
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x60;
  } while (uVar2 < 0x100);
  iVar1 = 0;
LAB_00136a24:
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else if (*(char *)(iVar1 + 0x38) == '\0') {
    maybe_List_Append(0x386620,iVar1);
    uVar3 = 1;
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  Sema_Signal(0x36efc0,0);
  return uVar3;
}

// 0x00136a80  size 0x160
int File_QueueRequest(undefined4 *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = -1;
  Sema_Wait(0x36efc0);
  uVar3 = 0;
  iVar2 = 0x380610;
  do {
    if (*(int *)(iVar2 + 8) == -1) {
      iVar2 = uVar3 * 0x60 + 0x380610;
      goto LAB_00136aec;
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x60;
  } while (uVar3 < 0x100);
  iVar2 = 0;
LAB_00136aec:
  if (iVar2 != 0) {
    if ((iRam0038662c == 0) && (lVar1 = Sema_GetCount(0x36eff4,0), lVar1 == 0)) {
      Sema_Signal(0x36eff4,0);
      iVar4 = iRam0036efbc;
    }
    else {
      iVar4 = iRam0036efbc;
    }
    iRam0036efbc = (iVar4 + 1) % 0x7fffffff;
    *(int *)(iVar2 + 8) = iVar4;
    *(undefined1 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0xc) = *param_1;
    *(undefined4 *)(iVar2 + 0x10) = param_1[1];
    *(undefined4 *)(iVar2 + 0x14) = param_1[2];
    *(undefined4 *)(iVar2 + 0x18) = param_1[3];
    *(undefined4 *)(iVar2 + 0x1c) = param_1[4];
    *(undefined4 *)(iVar2 + 0x20) = param_1[5];
    *(undefined4 *)(iVar2 + 0x24) = param_1[6];
    *(undefined4 *)(iVar2 + 0x28) = param_1[7];
    *(undefined4 *)(iVar2 + 0x2c) = param_1[8];
    *(undefined4 *)(iVar2 + 0x30) = param_1[9];
    *(undefined4 *)(iVar2 + 0x34) = param_1[10];
    maybe_List_Remove(0x386620,iVar2);
  }
  Sema_Signal(0x36efc0,0);
  return iVar4;
}

// 0x00136be0  size 0x12c
/* sceCdSearchFile */

undefined4 File_OpenCdFile(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_40 [3];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  Sema_Wait(0x36efc0);
  if (iRam00386628 != 0) {
    iRam0036efc8 = 1;
  }
  Sema_Signal(0x36efc0,0);
  if (iRam0036efc8 != 0) {
    Sema_Wait(0x36efc4);
  }
  lVar2 = maybe_sceCdSearchFileSimple(&uStack_70,param_1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uStack_4 = uStack_70;
    uStack_8 = uStack_6c;
    auStack_40[0] = 0x824;
    uStack_30 = 0;
    uStack_24 = 0;
    uStack_34 = uStack_70;
    uStack_2c = uStack_6c;
    uStack_20 = param_2;
    File_QueueRequest(auStack_40);
    Sema_Wait(0x36efc0);
    if (iRam00386628 != 0) {
      iRam0036efc8 = 1;
    }
    Sema_Signal(0x36efc0,0);
    if (iRam0036efc8 != 0) {
      Sema_Wait(0x36efc4);
    }
    uVar1 = 1;
  }
  return uVar1;
}

// 0x00136d10  size 0xf4
undefined4 File_ReadCdFile(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_18 [8];
  undefined4 uStack_10;
  
  Sema_Wait(0x36efc0);
  if (iRam00386628 != 0) {
    iRam0036efc8 = 1;
  }
  Sema_Signal(0x36efc0,0);
  if (iRam0036efc8 != 0) {
    Sema_Wait(0x36efc4);
  }
  lVar2 = maybe_sceCdSearchFileSimple(&uStack_30,param_1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      *(undefined4 *)param_2 = uStack_30;
    }
    if (param_3 != 0) {
      *(undefined4 *)param_3 = uStack_2c;
    }
    if (param_4 != 0) {
      *(undefined4 *)param_4 = uStack_10;
    }
    if (param_5 != 0) {
      Mem_Copy8(param_5,auStack_18,8);
    }
    uVar1 = 1;
  }
  return uVar1;
}

// 0x00136e10  size 0x14
undefined4 maybe_File_GetSectorCount(int *param_1)

{
  *param_1 = iRam0036efe0 << 1;
  return uRam0036efe8;
}

// 0x00136e30  size 0x98
/* sceCdReadClock */

void File_ReadClock(undefined8 param_1)

{
  long lVar1;
  
  Sema_Wait(0x36efc0);
  if (iRam00386628 != 0) {
    iRam0036efc8 = 1;
  }
  Sema_Signal(0x36efc0,0);
  if (iRam0036efc8 != 0) {
    Sema_Wait(0x36efc4);
  }
  lVar1 = sceCdReadClock(param_1);
  while (lVar1 == 0) {
    DelayThread(10000);
    lVar1 = sceCdReadClock(param_1);
  }
  return;
}

// 0x00136ed0  size 0xcc
bool File_GetDiscType(long param_1)

{
  long lVar1;
  
  Sema_Wait(0x36efc0);
  if (iRam00386628 != 0) {
    iRam0036efc8 = 1;
  }
  Sema_Signal(0x36efc0,0);
  if (iRam0036efc8 != 0) {
    Sema_Wait(0x36efc4);
  }
  lVar1 = sceCdGetDiskType();
  while (lVar1 == 1) {
    DelayThread(10000);
    lVar1 = sceCdGetDiskType();
  }
  if (param_1 != 0) {
    *(undefined4 *)param_1 = (int)lVar1;
  }
  return lVar1 == 0x14;
}

// 0x00136fa0  size 0xe8
void File_Shutdown(void)

{
  Sema_Wait(0x36efc0);
  if (iRam00386628 != 0) {
    iRam0036efc8 = 1;
  }
  Sema_Signal(0x36efc0,0);
  if (iRam0036efc8 != 0) {
    Sema_Wait(0x36efc4);
  }
  sceCdInit(5);
  if (iRam0036efe0 != 0) {
    uRam0036efe4 = 0;
    if (iRam0036efe8 != 0) {
      Mem_Free();
      iRam0036efe8 = 0;
    }
    uRam0036efec = 0;
  }
  Thread_Delete(0x36efd0);
  if (iRam0036efd8 != 0) {
    Mem_Free();
    iRam0036efd8 = 0;
  }
  if (iRam0036efdc != 0) {
    Mem_Free();
    iRam0036efdc = 0;
  }
  Sema_Delete(0x36efc0);
  Sema_Delete(0x36efc4);
  Sema_Delete(0x36eff8);
  Sema_Delete(0x36eff4);
  Sema_Delete(0x36effc);
  return;
}

// 0x00137090  size 0x1b4
/* sceCdInit, loader thread */

undefined4 File_Init(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  sceCdInit(0);
  sceCdMmode(2);
  DAT_0036e704 = 0xffffffff;
  uRam0036efbc = 0;
  uRam0036efc8 = 0;
  uRam0036f000 = 0;
  uRam0036f004 = 0;
  uRam0036eff0 = 0;
  Sema_Create(0x36efc0,1,1);
  Sema_Create(0x36efc4,0,1);
  Sema_Create(0x36eff4,0,1);
  Sema_Create(0x36eff8,0,1);
  Sema_Create(0x36effc,1,1);
  uVar1 = Mem_AllocAligned(0x4000,0x10,uRam0036efb8);
  uRam0036efd8 = (undefined4)uVar1;
  Thread_Create(0x36efd0,param_1,0x135e50,uVar1,0x4000,0);
  Thread_Start(0x36efd0,0);
  uVar1 = Mem_AllocAligned(0x4000,0x10,uRam0036efb8);
  uRam0036efdc = (undefined4)uVar1;
  maybe_Cd_CallbackThreadInit(param_2,uVar1,0x4000);
  maybe_sceCdSync0(0x135de0);
  if (param_3 == 0) {
    iRam0036efe8 = 0;
    iRam0036efec = 0;
    uRam0036efe0 = 0;
  }
  else {
    uRam0036efe0 = (int)param_3 + 0x7ffU & 0xfffff800;
    uRam0036efe4 = 0;
    iRam0036efe8 = Mem_AllocAligned(uRam0036efe0 << 1,0x40,uRam0036efb8);
    iRam0036efec = iRam0036efe8 + uRam0036efe0;
  }
  uVar3 = 0;
  iVar2 = 0x380610;
  do {
    *(undefined4 *)(iVar2 + 8) = 0xffffffff;
    uVar3 = uVar3 + 8;
    *(undefined4 *)(iVar2 + 0x68) = 0xffffffff;
    *(undefined4 *)(iVar2 + 200) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x128) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x188) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x1e8) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x248) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x2a8) = 0xffffffff;
    iVar2 = iVar2 + 0x300;
  } while (uVar3 < 0x100);
  return 1;
}

// 0x00137250  size 0x78
void File_CloseHostHandles(void)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  do {
    piVar2 = (int *)(uVar1 * 4 + 0x3805d0);
    if (*piVar2 != -1) {
      sceClose();
      *piVar2 = -1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  return;
}

// 0x001372d0  size 0x3c
undefined4 File_ResetHostHandles(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)0x3805d0;
  do {
    *puVar1 = 0xffffffff;
    uVar2 = uVar2 + 5;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1 = puVar1 + 5;
  } while (uVar2 < 10);
  return 1;
}

// 0x00137310  size 0x8
void File_ShutdownNop(void)

{
  return;
}

// 0x00137320  size 0x14
void File_SetHeap(undefined4 param_1)

{
  uRam0036efb8 = param_1;
  uRam0036e708 = 0xffffffff;
  uRam0036e70c = 0xffffffff;
  return;
}

// 0x00137340  size 0x60
long File_RequestList_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e0c0;
    maybe_List_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001373c0  size 0x60
long maybe_EngineNode_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e0d0;
    maybe_ListNode_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00137420  size 0x38
undefined8 File_Request_ctor(undefined8 param_1)

{
  maybe_ListNode_ctor(param_1,0);
  *(undefined4 *)param_1 = &DAT_0036e0d0;
  return param_1;
}

// 0x00137460  size 0x17c
void Pad_Update(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar7 = 0;
  puVar6 = &g_Pads;
  do {
    uVar1 = maybe_Pad2_UpdateSocket(*(undefined4 *)(puVar6 + 0x48c));
    *(undefined4 *)(puVar6 + 0x47c) = uVar1;
    if (*(int *)(puVar6 + 0x47c) != 3) {
      if (*(int *)(puVar6 + 0x47c) == 1) {
        if (*(int *)(puVar6 + 0x480) == 0) {
          lVar2 = maybe_scePad2GetState
                            (*(undefined4 *)(puVar6 + 0x48c),*(undefined4 *)(puVar6 + 0x490));
          if (0 < lVar2) {
            *(undefined4 *)(puVar6 + 0x480) = 1;
          }
          maybe_Dbc_ReceiveStatus(*(undefined4 *)(puVar6 + 0x48c),*(undefined4 *)(puVar6 + 0x494));
        }
        else {
          lVar2 = maybe_scePad2Read(*(undefined4 *)(puVar6 + 0x48c),*(undefined4 *)(puVar6 + 0x488))
          ;
          if (0 < lVar2) {
            Pad_ReadButtons(puVar6);
          }
        }
      }
      else {
        *(undefined4 *)(puVar6 + 0x480) = 0;
        Input_Clear(puVar6 + 8);
        iVar4 = 0;
        puVar3 = puVar6;
        do {
          *(undefined4 *)(puVar3 + 0x1b0) = 0;
          iVar5 = iVar4 + 8;
          puVar6[iVar4 + 0x414] = 0;
          *(undefined4 *)(puVar3 + 0x1c0) = 0;
          puVar6[iVar4 + 0x415] = 0;
          *(undefined4 *)(puVar3 + 0x1d0) = 0;
          puVar6[iVar4 + 0x416] = 0;
          *(undefined4 *)(puVar3 + 0x1e0) = 0;
          puVar6[iVar4 + 0x417] = 0;
          *(undefined4 *)(puVar3 + 0x1f0) = 0;
          puVar6[iVar4 + 0x418] = 0;
          *(undefined4 *)(puVar3 + 0x200) = 0;
          puVar6[iVar4 + 0x419] = 0;
          *(undefined4 *)(puVar3 + 0x210) = 0;
          puVar6[iVar4 + 0x41a] = 0;
          *(undefined4 *)(puVar3 + 0x220) = 0;
          puVar6[iVar4 + 0x41b] = 0;
          puVar3 = puVar3 + 0x80;
          iVar4 = iVar5;
        } while (iVar5 < 0x18);
        *(undefined4 *)(puVar6 + 0x330) = 0;
        puVar6[0x474] = 0x7f;
        *(undefined4 *)(puVar6 + 0x340) = 0;
        puVar6[0x475] = 0x7f;
        *(undefined4 *)(puVar6 + 0x350) = 0;
        puVar6[0x476] = 0x7f;
        *(undefined4 *)(puVar6 + 0x360) = 0;
        puVar6[0x477] = 0x7f;
        *(undefined4 *)(puVar6 + 0x370) = 0;
        puVar6[0x478] = 0x7f;
        *(undefined4 *)(puVar6 + 0x380) = 0;
        puVar6[0x479] = 0x7f;
      }
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 0x498;
  } while (iVar7 < 2);
  return;
}

// 0x001375f0  size 0x30
/* 0x498 bytes per pad at 0x386650 */

undefined1 * Pad_GetPort(char param_1,char param_2)

{
  return &g_Pads + param_2 * 0x498 + param_1 * 0x498;
}

// 0x00137620  size 0x5c
void maybe_Pad_Shutdown(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &g_Pads;
  do {
    Pad_Close(puVar1);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x498;
  } while (iVar2 < 2);
  maybe_scePad2End();
  Dbc_Release();
  return;
}

// 0x00137680  size 0x188
/* scePad2CreateSocket per port, state at 0x386650 */

void Pad_Init(undefined8 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  
  Dbc_Acquire();
  maybe_scePad2Init(0);
  iVar6 = 0;
  pcVar5 = &g_Pads;
  do {
    pcVar5[0x47c] = '\0';
    pcVar5[0x47d] = '\0';
    pcVar5[0x47e] = '\0';
    pcVar5[0x47f] = '\0';
    pcVar5[0x480] = '\0';
    pcVar5[0x481] = '\0';
    pcVar5[0x482] = '\0';
    pcVar5[0x483] = '\0';
    *pcVar5 = (char)iVar6;
    pcVar5[1] = '\0';
    uVar1 = Mem_AllocAligned(0x100,0x40,param_1);
    *(undefined4 *)(pcVar5 + 0x484) = uVar1;
    uVar1 = Mem_Alloc16(0x12,param_1);
    *(undefined4 *)(pcVar5 + 0x488) = uVar1;
    uVar1 = Mem_Alloc16(4,param_1);
    *(undefined4 *)(pcVar5 + 0x490) = uVar1;
    uVar1 = Mem_Alloc16(1,param_1);
    *(undefined4 *)(pcVar5 + 0x494) = uVar1;
    uStack_20 = 2;
    iStack_1c = (int)*pcVar5;
    iStack_18 = (int)pcVar5[1];
    uVar1 = scePad2CreateSocket(&uStack_20,*(undefined4 *)(pcVar5 + 0x484));
    *(undefined4 *)(pcVar5 + 0x48c) = uVar1;
    Input_Clear(pcVar5 + 8);
    pcVar2 = pcVar5;
    iVar3 = 0;
    do {
      pcVar2[0x1b0] = '\0';
      pcVar2[0x1b1] = '\0';
      pcVar2[0x1b2] = '\0';
      pcVar2[0x1b3] = '\0';
      iVar4 = iVar3 + 8;
      pcVar5[iVar3 + 0x414] = '\0';
      pcVar2[0x1c0] = '\0';
      pcVar2[0x1c1] = '\0';
      pcVar2[0x1c2] = '\0';
      pcVar2[0x1c3] = '\0';
      pcVar5[iVar3 + 0x415] = '\0';
      pcVar2[0x1d0] = '\0';
      pcVar2[0x1d1] = '\0';
      pcVar2[0x1d2] = '\0';
      pcVar2[0x1d3] = '\0';
      pcVar5[iVar3 + 0x416] = '\0';
      pcVar2[0x1e0] = '\0';
      pcVar2[0x1e1] = '\0';
      pcVar2[0x1e2] = '\0';
      pcVar2[0x1e3] = '\0';
      pcVar5[iVar3 + 0x417] = '\0';
      pcVar2[0x1f0] = '\0';
      pcVar2[0x1f1] = '\0';
      pcVar2[0x1f2] = '\0';
      pcVar2[499] = '\0';
      pcVar5[iVar3 + 0x418] = '\0';
      pcVar2[0x200] = '\0';
      pcVar2[0x201] = '\0';
      pcVar2[0x202] = '\0';
      pcVar2[0x203] = '\0';
      pcVar5[iVar3 + 0x419] = '\0';
      pcVar2[0x210] = '\0';
      pcVar2[0x211] = '\0';
      pcVar2[0x212] = '\0';
      pcVar2[0x213] = '\0';
      pcVar5[iVar3 + 0x41a] = '\0';
      pcVar2[0x220] = '\0';
      pcVar2[0x221] = '\0';
      pcVar2[0x222] = '\0';
      pcVar2[0x223] = '\0';
      pcVar5[iVar3 + 0x41b] = '\0';
      pcVar2 = pcVar2 + 0x80;
      iVar3 = iVar4;
    } while (iVar4 < 0x18);
    pcVar5[0x330] = '\0';
    pcVar5[0x331] = '\0';
    pcVar5[0x332] = '\0';
    pcVar5[0x333] = '\0';
    pcVar5[0x474] = '\x7f';
    iVar6 = iVar6 + 1;
    pcVar5[0x340] = '\0';
    pcVar5[0x341] = '\0';
    pcVar5[0x342] = '\0';
    pcVar5[0x343] = '\0';
    pcVar5[0x475] = '\x7f';
    pcVar5[0x350] = '\0';
    pcVar5[0x351] = '\0';
    pcVar5[0x352] = '\0';
    pcVar5[0x353] = '\0';
    pcVar5[0x476] = '\x7f';
    pcVar5[0x360] = '\0';
    pcVar5[0x361] = '\0';
    pcVar5[0x362] = '\0';
    pcVar5[0x363] = '\0';
    pcVar5[0x477] = '\x7f';
    pcVar5[0x370] = '\0';
    pcVar5[0x371] = '\0';
    pcVar5[0x372] = '\0';
    pcVar5[0x373] = '\0';
    pcVar5[0x478] = '\x7f';
    pcVar5[0x380] = '\0';
    pcVar5[0x381] = '\0';
    pcVar5[0x382] = '\0';
    pcVar5[899] = '\0';
    pcVar5[0x479] = '\x7f';
    pcVar5 = pcVar5 + 0x498;
  } while (iVar6 < 2);
  return;
}

// 0x00137810  size 0x110
/* sceDbcSendData2 (vibration) */

undefined4 Pad_SetActuator(int param_1,byte param_2,byte param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bStack_4;
  byte bStack_3;
  byte bStack_1;
  
  lVar3 = (**(code **)(*(int *)(param_1 + 4) + 8))();
  if ((lVar3 == 0) || (param_2 != (**(byte **)(param_1 + 0x494) & param_2))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 1;
    if (param_2 == 1) {
      bStack_4 = param_3 & 1;
    }
    else if (param_2 == 2) {
      bStack_4 = (byte)param_4;
    }
    else {
      bStack_4 = param_3 & 1 | (byte)(param_4 << 1);
      bStack_3 = (byte)(param_4 >> 7) & 1;
      uVar4 = 2;
    }
    bStack_1 = param_2;
    maybe_Dbc_SendActuator(*(undefined4 *)(param_1 + 0x48c),1,&bStack_1,uVar4,&bStack_4);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// 0x00137920  size 0x18
void maybe_EngineObj_SetBit(int param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00137930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 4) + 0xc))(param_1,1 << (param_2 & 0x1f));
  return;
}

// 0x00137940  size 0x84
undefined4 maybe_EngineObj_ReadByte(int param_1,uint param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = (**(code **)(*(int *)(param_1 + 4) + 8))();
  if ((lVar3 == 0) ||
     (pbVar1 = *(byte **)(param_1 + 0x490),
     param_2 !=
     (param_2 &
     ((uint)*pbVar1 | (uint)pbVar1[1] << 8 | (uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

// 0x001379d0  size 0xc
bool maybe_EngineObj_HasData(int param_1)

{
  return *(int *)(param_1 + 0x47c) != 0;
}

// 0x001379e0  size 0x4c4
void Pad_ReadButtons(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  uint auStack_18 [4];
  uint uStack_8;
  uint uStack_4;
  
  uVar11 = 0;
  puVar9 = auStack_18 + 2;
  piVar8 = &DAT_0030a580;
  uVar7 = 0;
  iVar10 = param_1;
  do {
    iVar1 = *piVar8;
    iVar2 = piVar8[1];
    iVar3 = 0;
    if ((-1 < iVar1) &&
       (lVar5 = (**(code **)(*(int *)(param_1 + 4) + 0x10))(param_1,iVar1), lVar5 != 0)) {
      iVar3 = maybe_scePad2GetButtonProfile
                        (*(undefined4 *)(param_1 + 0x48c),*(undefined4 *)(param_1 + 0x488),iVar1);
    }
    if ((iVar1 == iVar2) ||
       (lVar5 = (**(code **)(*(int *)(param_1 + 4) + 0x10))(param_1,iVar2), lVar5 == 0)) {
      uVar4 = iVar3 * 0xff;
    }
    else {
      uVar4 = maybe_scePad2GetButtonProfile
                        (*(undefined4 *)(param_1 + 0x48c),*(undefined4 *)(param_1 + 0x488),iVar2);
    }
    lVar5 = (**(code **)(*(int *)(param_1 + 4) + 0x10))(param_1,iVar2);
    if ((lVar5 != 0) && (uVar7 - 0x10 < 8)) {
                    /* WARNING: Switch is manually overridden */
      switch(uVar7 - 0x10) {
      case 0:
        if ((int)uVar4 < 0x7f) {
          uVar4 = (uint)((127.5 - (float)(int)uVar4) * 2.0);
          iVar3 = 1;
        }
        else {
          iVar3 = 0;
          uVar4 = 0;
        }
        break;
      case 1:
        if ((int)uVar4 < 0x80) {
          iVar3 = 0;
          uVar4 = 0;
        }
        else {
          iVar3 = 1;
          uVar4 = (uint)(((float)(int)uVar4 - 127.5) * 2.0);
        }
      }
    }
    if ((1 < uVar7) && (uVar7 < 6)) {
      puVar9[-2] = uVar4;
    }
    uVar11 = uVar11 | iVar3 << (uVar7 & 0x1f);
    Color_LerpAlpha(iVar10 + 0x1a4,uVar4,0xff);
    piVar8 = piVar8 + 2;
    *(char *)(param_1 + uVar7 + 0x414) = (char)uVar4;
    uVar7 = uVar7 + 1;
    puVar9 = puVar9 + 1;
    iVar10 = iVar10 + 0x10;
  } while (uVar7 < 0x18);
  uVar6 = Pad_MapButtons(param_1,uVar11,1);
  Input_UpdateButtonEdges(param_1 + 8,uVar6);
  Color_LerpRgba(param_1 + 0x324,uStack_8,uStack_4,0xff);
  fVar12 = ((float)uStack_4 / 2.0 - (float)uStack_8 / 2.0) + 127.5;
  if (2.1474836e+09 <= fVar12) {
    fVar12 = fVar12 - 2.1474836e+09;
  }
  *(char *)(param_1 + 0x474) = (char)(int)fVar12;
  Color_LerpRgba(param_1 + 0x334,auStack_18[2],auStack_18[3],0xff);
  fVar12 = ((float)auStack_18[3] / 2.0 - (float)auStack_18[2] / 2.0) + 127.5;
  if (2.1474836e+09 <= fVar12) {
    fVar12 = fVar12 - 2.1474836e+09;
  }
  *(char *)(param_1 + 0x475) = (char)(int)fVar12;
  uVar7 = 0;
  do {
    uVar6 = 0;
    lVar5 = (**(code **)(*(int *)(param_1 + 4) + 0x10))(param_1,uVar7 + 0x10);
    if (lVar5 != 0) {
      uVar6 = maybe_scePad2GetButtonProfile
                        (*(undefined4 *)(param_1 + 0x48c),*(undefined4 *)(param_1 + 0x488),
                         uVar7 + 0x10);
    }
    Color_LerpRgb(param_1 + (uVar7 + 2) * 0x10 + 0x324,uVar6,0xff);
    *(char *)(param_1 + uVar7 + 0x476) = (char)uVar6;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  return;
}

// 0x00137eb0  size 0x140
void Pad_Close(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  scePad2DeleteSocket(*(undefined4 *)(param_1 + 0x48c));
  *(undefined4 *)(param_1 + 0x48c) = 0xffffffff;
  if (*(int *)(param_1 + 0x490) != 0) {
    Mem_Free();
    *(undefined4 *)(param_1 + 0x490) = 0;
  }
  if (*(int *)(param_1 + 0x494) != 0) {
    Mem_Free();
    *(undefined4 *)(param_1 + 0x494) = 0;
  }
  if (*(int *)(param_1 + 0x488) != 0) {
    Mem_Free();
    *(undefined4 *)(param_1 + 0x488) = 0;
  }
  if (*(int *)(param_1 + 0x484) != 0) {
    Mem_Free();
    *(undefined4 *)(param_1 + 0x484) = 0;
  }
  *param_1 = 0xff;
  param_1[1] = 0xff;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  Input_Clear(param_1 + 8);
  puVar1 = param_1;
  iVar2 = 0;
  do {
    *(undefined4 *)(puVar1 + 0x1b0) = 0;
    param_1[iVar2 + 0x414] = 0;
    iVar3 = iVar2 + 8;
    *(undefined4 *)(puVar1 + 0x1c0) = 0;
    param_1[iVar2 + 0x415] = 0;
    *(undefined4 *)(puVar1 + 0x1d0) = 0;
    param_1[iVar2 + 0x416] = 0;
    *(undefined4 *)(puVar1 + 0x1e0) = 0;
    param_1[iVar2 + 0x417] = 0;
    *(undefined4 *)(puVar1 + 0x1f0) = 0;
    param_1[iVar2 + 0x418] = 0;
    *(undefined4 *)(puVar1 + 0x200) = 0;
    param_1[iVar2 + 0x419] = 0;
    *(undefined4 *)(puVar1 + 0x210) = 0;
    param_1[iVar2 + 0x41a] = 0;
    *(undefined4 *)(puVar1 + 0x220) = 0;
    param_1[iVar2 + 0x41b] = 0;
    puVar1 = puVar1 + 0x80;
    iVar2 = iVar3;
  } while (iVar3 < 0x18);
  *(undefined4 *)(param_1 + 0x330) = 0;
  param_1[0x474] = 0x7f;
  *(undefined4 *)(param_1 + 0x340) = 0;
  param_1[0x475] = 0x7f;
  *(undefined4 *)(param_1 + 0x350) = 0;
  param_1[0x476] = 0x7f;
  *(undefined4 *)(param_1 + 0x360) = 0;
  param_1[0x477] = 0x7f;
  *(undefined4 *)(param_1 + 0x370) = 0;
  param_1[0x478] = 0x7f;
  *(undefined4 *)(param_1 + 0x380) = 0;
  param_1[0x479] = 0x7f;
  return;
}

// 0x00137ff0  size 0x5c
long Pad_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined **)((int)param_1 + 4) = &DAT_0036e0e0;
    Pad_Close();
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

