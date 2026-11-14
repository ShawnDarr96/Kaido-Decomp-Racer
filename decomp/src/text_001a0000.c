// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001a0000 - 0x001a4000
#include "ghidra_types.h"

// 0x001a0670  size 0x74
void CourseStream_LoadSky(void)

{
  if (iRam00430600 != 0) {
    Arc_LoadFileEx(*(undefined4 *)(iRam004305c0 + 0x14),*(undefined4 *)(iRam004305c0 + 0xc),0x19eb10
                   ,iRam004305c0,0,0);
  }
  Arc_LoadFileEx(*(undefined4 *)(iRam004305b8 + 0x3c),*(undefined4 *)(iRam004305bc + 0xc),0x19ebd0,
                 iRam004305bc,0,0);
  return;
}

// 0x001a06f0  size 0x168
int CourseStream_GetLoadProgress(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar2 = param_1;
    do {
      iVar8 = *(int *)(iVar2 + 0x44) * 0x14;
      iVar5 = iRam0036f0c4 + iVar8;
      iVar9 = *(int *)(iVar5 + 0x20);
      if (iVar9 == 0) {
        uVar3 = *(uint *)(iVar5 + 0x18);
      }
      else {
        uVar3 = iVar9 + 0x7ffU >> 0xb;
      }
      uVar7 = *param_2;
      if (uVar7 < uVar3 << 0xb) {
        iVar8 = iRam0036f0c4 + iVar8;
        iVar9 = *(int *)(iVar8 + 0x20);
        if (iVar9 == 0) {
          uVar7 = *(uint *)(iVar8 + 0x18);
        }
        else {
          uVar7 = iVar9 + 0x7ffU >> 0xb;
        }
        uVar7 = uVar7 << 0xb;
      }
      *param_2 = uVar7;
      uVar3 = *(uint *)(iVar2 + 0x48);
      uVar7 = (uVar3 + *(int *)(iVar2 + 0x4c)) - 1;
      if (uVar3 <= uVar7) {
        iVar9 = uVar3 * 0x14;
        do {
          iVar8 = iRam0036f0c4 + iVar9;
          iVar5 = *(int *)(iVar8 + 0x20);
          if (iVar5 == 0) {
            uVar1 = *(uint *)(iVar8 + 0x18);
          }
          else {
            uVar1 = iVar5 + 0x7ffU >> 0xb;
          }
          uVar6 = *param_3;
          if (uVar6 < uVar1 << 0xb) {
            if (iVar5 == 0) {
              uVar6 = *(uint *)(iVar8 + 0x18);
            }
            else {
              uVar6 = iVar5 + 0x7ffU >> 0xb;
            }
            uVar6 = uVar6 << 0xb;
          }
          uVar3 = uVar3 + 1;
          *param_3 = uVar6;
          iVar9 = iVar9 + 0x14;
        } while (uVar3 <= uVar7);
      }
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0xc;
    } while (uVar4 < *(uint *)(param_1 + 0x40));
  }
  iVar9 = *(int *)(param_1 + 0x3c) * 0x14 + iRam0036f0c4;
  iVar2 = *(int *)(iVar9 + 0x20);
  if (iVar2 == 0) {
    uVar4 = *(uint *)(iVar9 + 0x18);
  }
  else {
    uVar4 = iVar2 + 0x7ffU >> 0xb;
  }
  return uVar4 << 0xb;
}

// 0x001a0860  size 0x368
void Course_Unload(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  RoadMesh_Free((int)register0x000001c0 + -0x74b8);
  RoadData_Free((int)register0x000001c0 + -0x74c0);
  iVar2 = iRam004305c0;
  if (iRam00430600 != 0) {
    *(undefined4 *)(iRam004305c0 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    DmaBuf_Free(iVar2 + 0x24);
    if (*(int *)(iVar2 + 0x34) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar2 + 0x34) = 0;
    }
    BlockPool_FreeD(iRam004305c0,1);
  }
  BlockPool_FreeC(iRam004305bc,1);
  BlockPool_FreeB(iRam004305c8,uRam004305c4);
  BlockPool_FreeA(iRam004305d0,uRam004305cc);
  iVar2 = iRam004305bc;
  *(undefined4 *)(iRam004305bc + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  DmaBuf_Free(iVar2 + 0x20);
  if (*(int *)(iVar2 + 0x30) != 0) {
    Mem_Free();
    *(undefined4 *)(iVar2 + 0x30) = 0;
  }
  iVar2 = iRam004305bc;
  *(undefined4 *)(iRam004305bc + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  DmaBuf_Free(iVar2 + 0x40);
  if (*(int *)(iVar2 + 0x50) != 0) {
    Mem_Free();
    *(undefined4 *)(iVar2 + 0x50) = 0;
  }
  iVar2 = iRam004305bc;
  *(undefined4 *)(iRam004305bc + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  DmaBuf_Free(iVar2 + 0x60);
  if (*(int *)(iVar2 + 0x70) != 0) {
    Mem_Free();
    *(undefined4 *)(iVar2 + 0x70) = 0;
  }
  uVar3 = 0;
  if (uRam004305c4 != 0) {
    iVar2 = 0;
    do {
      iVar1 = iRam004305c8 + iVar2;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      DmaBuf_Free(iVar1 + 0x20);
      if (*(int *)(iVar1 + 0x30) != 0) {
        Mem_Free();
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      iVar1 = iRam004305c8 + iVar2;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      DmaBuf_Free(iVar1 + 0x40);
      if (*(int *)(iVar1 + 0x50) != 0) {
        Mem_Free();
        *(undefined4 *)(iVar1 + 0x50) = 0;
      }
      iVar1 = iRam004305c8 + iVar2;
      *(undefined4 *)(iVar1 + 0x54) = 0;
      *(undefined4 *)(iVar1 + 0x58) = 0;
      *(undefined4 *)(iVar1 + 0x5c) = 0;
      DmaBuf_Free(iVar1 + 0x60);
      if (*(int *)(iVar1 + 0x70) != 0) {
        Mem_Free();
        *(undefined4 *)(iVar1 + 0x70) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x74;
    } while (uVar3 < uRam004305c4);
  }
  if (iRam004305c0 != 0) {
    Mem_Free();
    iRam004305c0 = 0;
  }
  if (iRam004305bc != 0) {
    Mem_Free();
    iRam004305bc = 0;
  }
  if (iRam004305c8 != 0) {
    Mem_Free();
    iRam004305c8 = 0;
  }
  if (iRam004305d0 != 0) {
    Mem_Free();
    iRam004305d0 = 0;
  }
  if (iRam004305d8 != 0) {
    Mem_Free();
    iRam004305d8 = 0;
  }
  if (iRam004305e0 != 0) {
    Mem_Free();
  }
  iRam004305bc = 0;
  uRam004305c4 = 0;
  iRam004305c8 = 0;
  uRam004305cc = 0;
  iRam004305d0 = 0;
  iRam004305d8 = 0;
  iRam004305e0 = 0;
  return;
}

// 0x001a0bd0  size 0x688
int Course_Load(undefined8 param_1,int param_2,undefined8 param_3,char *param_4,undefined4 param_5,
               undefined4 param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  uStack_8 = 0;
  if (*param_4 == '\x01') {
    uVar11 = *(uint *)(param_2 + 8);
    uVar12 = 4;
  }
  else {
    uVar11 = *(uint *)(param_2 + 4);
    uVar12 = 3;
  }
  uVar4 = CourseStream_GetLoadProgress(param_3,&uStack_4,&uStack_8);
  RoadData_MarkLoaded((int)register0x000001c0 + -0x74c0);
  iVar10 = (int)param_3;
  RoadData_Load((int)register0x000001c0 + -0x74c0,*(undefined4 *)(iVar10 + 0x38));
  RoadMesh_MarkLoaded((int)register0x000001c0 + -0x74b8);
  RoadMesh_Load((int)register0x000001c0 + -0x74b8,*(undefined4 *)(iVar10 + 0x34));
  uRam004305b0 = (uint)(*param_4 == '\x01');
  iRam004305b4 = param_2;
  iRam004305b8 = iVar10;
  iRam004305bc = Mem_Alloc16(0x74,param_1);
  iRam004305c0 = Mem_Alloc16(0x38,param_1);
  uRam004305c4 = uVar12;
  iRam004305c8 = Mem_Alloc16(uVar12 * 0x74,param_1);
  uRam004305cc = uVar11;
  uRam004305d0 = Mem_Alloc16(uVar11 * 0x50,param_1);
  iRam004305d8 = Mem_Alloc16(uVar12 << 3,param_1);
  uVar9 = 0;
  if (uRam004305c4 != 0) {
    iVar8 = 0;
    do {
      uVar9 = uVar9 + 1;
      *(undefined4 *)(iRam004305d8 + iVar8) = 0xbf800000;
      iVar8 = iVar8 + 8;
    } while (uVar9 < uRam004305c4);
  }
  iRam004305e0 = Mem_Alloc16(uVar11 << 3,param_1);
  uVar9 = 0;
  if (uRam004305cc != 0) {
    iVar8 = 0;
    do {
      uVar9 = uVar9 + 1;
      *(undefined4 *)(iRam004305e0 + iVar8) = 0xbf800000;
      iVar8 = iVar8 + 8;
    } while (uVar9 < uRam004305cc);
  }
  iRam004305e4 = 0;
  uRam004305fc = (uint)*(ushort *)(iVar10 + 0x1a);
  iVar8 = *(int *)(param_4 + 4);
  if (iVar8 < 0) {
    uVar9 = 0;
    uRam00430600 = 0;
  }
  else {
    uVar5 = Arc_GetFileSize(iVar8,iVar8,1);
    uVar9 = (uint)uVar5 >> 8;
    *(undefined4 *)(iRam004305c0 + 0x14) = *(undefined4 *)(param_4 + 4);
    uRam00430600 = 1;
    BlockPool_AllocD(iRam004305c0,1,param_1,uVar5);
    uVar2 = uRam004305fc;
    iVar8 = iRam004305c0;
    *(undefined4 *)(iRam004305c0 + 0x18) = 1;
    *(undefined4 *)(iVar8 + 0x1c) = 0;
    *(uint *)(iVar8 + 0x20) = uVar2 + iGpffff8bd0;
    DmaBuf_Alloc(iVar8 + 0x24,param_1,0x30);
    uVar3 = Mem_Alloc16(0x80,param_1);
    *(undefined4 *)(iVar8 + 0x34) = uVar3;
  }
  iRam004305ec = uRam004305fc + uVar9;
  iRam004305f0 = iRam004305ec + *(ushort *)(iVar10 + 0x22) * uVar12;
  iRam004305e8 = iRam004305f0 + (uint)*(ushort *)(iVar10 + 0x26);
  iRam004305f4 = iRam004305e8;
  iRam004305f8 = iRam004305e8;
  uRam00430604 = param_5;
  uRam00430608 = param_6;
  BlockPool_AllocC(iRam004305bc,1,param_1,uVar4);
  BlockPool_AllocB(iRam004305c8,uVar12,param_1,uStack_4);
  BlockPool_AllocA(uRam004305d0,uVar11,param_1,uStack_8);
  iVar7 = iRam004305e4;
  iVar8 = iRam004305bc;
  uVar1 = *(ushort *)(iVar10 + 0x18);
  *(uint *)(iRam004305bc + 0x14) = (uint)uVar1;
  *(undefined4 *)(iVar8 + 0x18) = 0;
  *(int *)(iVar8 + 0x1c) = iVar7 + iGpffff8bd0;
  if (uVar1 == 0) {
    DmaBuf_SetUncached(iVar8 + 0x20,0,0);
    *(undefined4 *)(iVar8 + 0x30) = 0;
  }
  else {
    DmaBuf_Alloc(iVar8 + 0x20,param_1,((uint)uVar1 * 2 + (uint)uVar1) * 0x10);
    uVar3 = Mem_Alloc16((uint)uVar1 << 7,param_1);
    *(undefined4 *)(iVar8 + 0x30) = uVar3;
  }
  iVar7 = iRam004305f4;
  iVar8 = iRam004305bc;
  uVar1 = *(ushort *)(iVar10 + 0x28);
  *(uint *)(iRam004305bc + 0x34) = (uint)uVar1;
  *(undefined4 *)(iVar8 + 0x38) = 0;
  *(int *)(iVar8 + 0x3c) = iVar7 + iGpffff8bd0;
  if (uVar1 == 0) {
    DmaBuf_SetUncached(iVar8 + 0x40,0,0);
    *(undefined4 *)(iVar8 + 0x50) = 0;
  }
  else {
    DmaBuf_Alloc(iVar8 + 0x40,param_1,((uint)uVar1 * 2 + (uint)uVar1) * 0x10);
    uVar3 = Mem_Alloc16((uint)uVar1 << 7,param_1);
    *(undefined4 *)(iVar8 + 0x50) = uVar3;
  }
  iVar7 = iRam004305f8;
  iVar8 = iRam004305bc;
  uVar1 = *(ushort *)(iVar10 + 0x2c);
  *(uint *)(iRam004305bc + 0x54) = (uint)uVar1;
  *(undefined4 *)(iVar8 + 0x58) = 0;
  *(int *)(iVar8 + 0x5c) = iVar7 + iGpffff8bd0;
  if (uVar1 == 0) {
    DmaBuf_SetUncached(iVar8 + 0x60,0,0);
    *(undefined4 *)(iVar8 + 0x70) = 0;
  }
  else {
    DmaBuf_Alloc(iVar8 + 0x60,param_1,((uint)uVar1 * 2 + (uint)uVar1) * 0x10);
    uVar3 = Mem_Alloc16((uint)uVar1 << 7,param_1);
    *(undefined4 *)(iVar8 + 0x70) = uVar3;
  }
  uVar11 = 0;
  if (uVar12 != 0) {
    iVar8 = 0;
    do {
      iVar7 = iRam004305e8;
      uVar1 = *(ushort *)(iVar10 + 0x1c);
      iVar6 = iRam004305c8 + iVar8;
      *(uint *)(iVar6 + 0x14) = (uint)uVar1;
      *(undefined4 *)(iVar6 + 0x18) = 0;
      *(int *)(iVar6 + 0x1c) = iVar7 + iGpffff8bd0;
      if (uVar1 == 0) {
        DmaBuf_SetUncached(iVar6 + 0x20,0,0);
        *(undefined4 *)(iVar6 + 0x30) = 0;
      }
      else {
        DmaBuf_Alloc(iVar6 + 0x20,param_1,((uint)uVar1 * 2 + (uint)uVar1) * 0x10);
        uVar3 = Mem_Alloc16((uint)uVar1 << 7,param_1);
        *(undefined4 *)(iVar6 + 0x30) = uVar3;
      }
      uVar1 = *(ushort *)(iVar10 + 0x20);
      iVar6 = iRam004305ec + *(ushort *)(iVar10 + 0x22) * uVar11;
      iVar7 = iRam004305c8 + iVar8;
      *(uint *)(iVar7 + 0x34) = (uint)uVar1;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(int *)(iVar7 + 0x3c) = iVar6 + iGpffff8bd0;
      if (uVar1 == 0) {
        DmaBuf_SetUncached(iVar7 + 0x40,0,0);
        *(undefined4 *)(iVar7 + 0x50) = 0;
      }
      else {
        DmaBuf_Alloc(iVar7 + 0x40,param_1,((uint)uVar1 * 2 + (uint)uVar1) * 0x10);
        uVar3 = Mem_Alloc16((uint)uVar1 << 7,param_1);
        *(undefined4 *)(iVar7 + 0x50) = uVar3;
      }
      iVar7 = iRam004305f0;
      uVar1 = *(ushort *)(iVar10 + 0x24);
      iVar6 = iRam004305c8 + iVar8;
      *(uint *)(iVar6 + 0x54) = (uint)uVar1;
      *(undefined4 *)(iVar6 + 0x58) = 0;
      *(int *)(iVar6 + 0x5c) = iVar7 + iGpffff8bd0;
      if (uVar1 == 0) {
        DmaBuf_SetUncached(iVar6 + 0x60,0,0);
        *(undefined4 *)(iVar6 + 0x70) = 0;
      }
      else {
        DmaBuf_Alloc(iVar6 + 0x60,param_1,((uint)uVar1 * 2 + (uint)uVar1) * 0x10);
        uVar3 = Mem_Alloc16((uint)uVar1 << 7,param_1);
        *(undefined4 *)(iVar6 + 0x70) = uVar3;
      }
      uVar11 = uVar11 + 1;
      iVar8 = iVar8 + 0x74;
    } while (uVar11 < uVar12);
  }
  return iRam004305ec;
}

// 0x001a1260  size 0x5c
void BlockPool_ResetA(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if ((*param_1 & 8) != 0) {
        param_1[1] = 3;
      }
      if (param_1[1] != 0) {
        param_1[1] = param_1[1] - 1;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 0x14;
    } while (uVar1 < param_2);
  }
  return;
}

// 0x001a12c0  size 0x5c
void BlockPool_ResetB(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if ((*param_1 & 8) != 0) {
        param_1[1] = 3;
      }
      if (param_1[1] != 0) {
        param_1[1] = param_1[1] - 1;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 0x1d;
    } while (uVar1 < param_2);
  }
  return;
}

// 0x001a1320  size 0xc8
void BlockPool_TouchA(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (8 < param_2) {
      uVar1 = ~param_3;
      do {
        uVar2 = uVar2 + 8;
        *param_1 = *param_1 & uVar1;
        param_1[0x14] = param_1[0x14] & uVar1;
        param_1[0x28] = param_1[0x28] & uVar1;
        param_1[0x3c] = param_1[0x3c] & uVar1;
        param_1[0x50] = param_1[0x50] & uVar1;
        param_1[100] = param_1[100] & uVar1;
        param_1[0x78] = param_1[0x78] & uVar1;
        param_1[0x8c] = param_1[0x8c] & uVar1;
        param_1 = param_1 + 0xa0;
      } while (uVar2 < param_2 - 8);
    }
    if (uVar2 < param_2) {
      do {
        uVar2 = uVar2 + 1;
        *param_1 = *param_1 & ~param_3;
        param_1 = param_1 + 0x14;
      } while (uVar2 < param_2);
    }
  }
  return;
}

// 0x001a13f0  size 0xc8
void BlockPool_TouchB(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (8 < param_2) {
      uVar1 = ~param_3;
      do {
        uVar2 = uVar2 + 8;
        *param_1 = *param_1 & uVar1;
        param_1[0x1d] = param_1[0x1d] & uVar1;
        param_1[0x3a] = param_1[0x3a] & uVar1;
        param_1[0x57] = param_1[0x57] & uVar1;
        param_1[0x74] = param_1[0x74] & uVar1;
        param_1[0x91] = param_1[0x91] & uVar1;
        param_1[0xae] = param_1[0xae] & uVar1;
        param_1[0xcb] = param_1[0xcb] & uVar1;
        param_1 = param_1 + 0xe8;
      } while (uVar2 < param_2 - 8);
    }
    if (uVar2 < param_2) {
      do {
        uVar2 = uVar2 + 1;
        *param_1 = *param_1 & ~param_3;
        param_1 = param_1 + 0x1d;
      } while (uVar2 < param_2);
    }
  }
  return;
}

// 0x001a14c0  size 0x4c
uint * BlockPool_FindFree(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (param_1[1] + (*param_1 & 0x1b) == 0) {
        return param_1;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 0x14;
    } while (uVar1 < param_2);
  }
  return (uint *)0x0;
}

// 0x001a1510  size 0x4c
uint * BlockPool_FindFreeB(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (param_1[1] + (*param_1 & 0x1b) == 0) {
        return param_1;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 0x1d;
    } while (uVar1 < param_2);
  }
  return (uint *)0x0;
}

// 0x001a1560  size 0x3c
int BlockPool_Find(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (param_3 == *(int *)(param_1 + 8)) {
        return param_1;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 0x50;
    } while (uVar1 < param_2);
  }
  return 0;
}

// 0x001a15a0  size 0x3c
int BlockPool_FindB(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (param_3 == *(int *)(param_1 + 8)) {
        return param_1;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 0x74;
    } while (uVar1 < param_2);
  }
  return 0;
}

// 0x001a15e0  size 0x104
void BlockPool_FreeA(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[3];
  uVar2 = 0;
  if (param_2 != 0) {
    if (8 < param_2) {
      do {
        *param_1 = 0;
        uVar2 = uVar2 + 8;
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        *(undefined2 *)(param_1 + 0x16) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x5a) = 0xffff;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x2a) = 0xffff;
        *(undefined2 *)((int)param_1 + 0xaa) = 0xffff;
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        *(undefined2 *)(param_1 + 0x3e) = 0xffff;
        *(undefined2 *)((int)param_1 + 0xfa) = 0xffff;
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        *(undefined2 *)(param_1 + 0x52) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x14a) = 0xffff;
        param_1[100] = 0;
        param_1[0x65] = 0;
        *(undefined2 *)(param_1 + 0x66) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x19a) = 0xffff;
        param_1[0x78] = 0;
        param_1[0x79] = 0;
        *(undefined2 *)(param_1 + 0x7a) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x1ea) = 0xffff;
        param_1[0x8c] = 0;
        param_1[0x8d] = 0;
        *(undefined2 *)(param_1 + 0x8e) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x23a) = 0xffff;
        param_1 = param_1 + 0xa0;
      } while (uVar2 < param_2 - 8);
    }
    for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined2 *)(param_1 + 2) = 0xffff;
      *(undefined2 *)((int)param_1 + 10) = 0xffff;
      param_1 = param_1 + 0x14;
    }
  }
  if (iVar1 != 0) {
    Mem_Free(iVar1);
  }
  return;
}

// 0x001a16f0  size 0x104
void BlockPool_FreeB(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[3];
  uVar2 = 0;
  if (param_2 != 0) {
    if (8 < param_2) {
      do {
        *param_1 = 0;
        uVar2 = uVar2 + 8;
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        *(undefined2 *)(param_1 + 0x1f) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x7e) = 0xffff;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        *(undefined2 *)(param_1 + 0x3c) = 0xffff;
        *(undefined2 *)((int)param_1 + 0xf2) = 0xffff;
        param_1[0x57] = 0;
        param_1[0x58] = 0;
        *(undefined2 *)(param_1 + 0x59) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x166) = 0xffff;
        param_1[0x74] = 0;
        param_1[0x75] = 0;
        *(undefined2 *)(param_1 + 0x76) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x1da) = 0xffff;
        param_1[0x91] = 0;
        param_1[0x92] = 0;
        *(undefined2 *)(param_1 + 0x93) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x24e) = 0xffff;
        param_1[0xae] = 0;
        param_1[0xaf] = 0;
        *(undefined2 *)(param_1 + 0xb0) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x2c2) = 0xffff;
        param_1[0xcb] = 0;
        param_1[0xcc] = 0;
        *(undefined2 *)(param_1 + 0xcd) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x336) = 0xffff;
        param_1 = param_1 + 0xe8;
      } while (uVar2 < param_2 - 8);
    }
    for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined2 *)(param_1 + 2) = 0xffff;
      *(undefined2 *)((int)param_1 + 10) = 0xffff;
      param_1 = param_1 + 0x1d;
    }
  }
  if (iVar1 != 0) {
    Mem_Free(iVar1);
  }
  return;
}

// 0x001a1800  size 0x104
void BlockPool_FreeC(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[3];
  uVar2 = 0;
  if (param_2 != 0) {
    if (8 < param_2) {
      do {
        *param_1 = 0;
        uVar2 = uVar2 + 8;
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        *(undefined2 *)(param_1 + 0x1f) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x7e) = 0xffff;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        *(undefined2 *)(param_1 + 0x3c) = 0xffff;
        *(undefined2 *)((int)param_1 + 0xf2) = 0xffff;
        param_1[0x57] = 0;
        param_1[0x58] = 0;
        *(undefined2 *)(param_1 + 0x59) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x166) = 0xffff;
        param_1[0x74] = 0;
        param_1[0x75] = 0;
        *(undefined2 *)(param_1 + 0x76) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x1da) = 0xffff;
        param_1[0x91] = 0;
        param_1[0x92] = 0;
        *(undefined2 *)(param_1 + 0x93) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x24e) = 0xffff;
        param_1[0xae] = 0;
        param_1[0xaf] = 0;
        *(undefined2 *)(param_1 + 0xb0) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x2c2) = 0xffff;
        param_1[0xcb] = 0;
        param_1[0xcc] = 0;
        *(undefined2 *)(param_1 + 0xcd) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x336) = 0xffff;
        param_1 = param_1 + 0xe8;
      } while (uVar2 < param_2 - 8);
    }
    for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined2 *)(param_1 + 2) = 0xffff;
      *(undefined2 *)((int)param_1 + 10) = 0xffff;
      param_1 = param_1 + 0x1d;
    }
  }
  if (iVar1 != 0) {
    Mem_Free(iVar1);
  }
  return;
}

// 0x001a1910  size 0x104
void BlockPool_FreeD(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[3];
  uVar2 = 0;
  if (param_2 != 0) {
    if (8 < param_2) {
      do {
        *param_1 = 0;
        uVar2 = uVar2 + 8;
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *(undefined2 *)(param_1 + 0x10) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x42) = 0xffff;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        *(undefined2 *)(param_1 + 0x1e) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x7a) = 0xffff;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        *(undefined2 *)(param_1 + 0x2c) = 0xffff;
        *(undefined2 *)((int)param_1 + 0xb2) = 0xffff;
        param_1[0x38] = 0;
        param_1[0x39] = 0;
        *(undefined2 *)(param_1 + 0x3a) = 0xffff;
        *(undefined2 *)((int)param_1 + 0xea) = 0xffff;
        param_1[0x46] = 0;
        param_1[0x47] = 0;
        *(undefined2 *)(param_1 + 0x48) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x122) = 0xffff;
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        *(undefined2 *)(param_1 + 0x56) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x15a) = 0xffff;
        param_1[0x62] = 0;
        param_1[99] = 0;
        *(undefined2 *)(param_1 + 100) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x192) = 0xffff;
        param_1 = param_1 + 0x70;
      } while (uVar2 < param_2 - 8);
    }
    for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined2 *)(param_1 + 2) = 0xffff;
      *(undefined2 *)((int)param_1 + 10) = 0xffff;
      param_1 = param_1 + 0xe;
    }
  }
  if (iVar1 != 0) {
    Mem_Free(iVar1);
  }
  return;
}

// 0x001a1a20  size 0x1dc
void BlockPool_AllocA(undefined4 *param_1,uint param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar6 = param_4 + 0x3fU & 0xffffffc0;
  iVar1 = Mem_AllocAligned(uVar6 * param_2,0x40);
  uVar8 = 0;
  if (param_2 != 0) {
    if (8 < param_2) {
      iVar7 = 0;
      iVar10 = 0;
      do {
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        param_1[3] = iVar1 + iVar7;
        param_1[0x14] = 0;
        iVar2 = iVar10 + uVar6 * 3;
        param_1[0x15] = 0;
        *(undefined2 *)(param_1 + 0x16) = 0xffff;
        iVar3 = iVar10 + uVar6 * 4;
        *(undefined2 *)((int)param_1 + 0x5a) = 0xffff;
        param_1[0x17] = iVar1 + iVar10 + uVar6;
        iVar4 = iVar10 + uVar6 * 5;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        iVar5 = iVar10 + uVar6 * 6;
        *(undefined2 *)(param_1 + 0x2a) = 0xffff;
        iVar9 = iVar10 + uVar6 * 7;
        *(undefined2 *)((int)param_1 + 0xaa) = 0xffff;
        param_1[0x2b] = iVar1 + iVar10 + uVar6 * 2;
        uVar8 = uVar8 + 8;
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        *(undefined2 *)(param_1 + 0x3e) = 0xffff;
        iVar7 = iVar7 + uVar6 * 8;
        *(undefined2 *)((int)param_1 + 0xfa) = 0xffff;
        iVar10 = iVar10 + uVar6 * 8;
        param_1[0x3f] = iVar1 + iVar2;
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        *(undefined2 *)(param_1 + 0x52) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x14a) = 0xffff;
        param_1[0x53] = iVar1 + iVar3;
        param_1[100] = 0;
        param_1[0x65] = 0;
        *(undefined2 *)(param_1 + 0x66) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x19a) = 0xffff;
        param_1[0x67] = iVar1 + iVar4;
        param_1[0x78] = 0;
        param_1[0x79] = 0;
        *(undefined2 *)(param_1 + 0x7a) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x1ea) = 0xffff;
        param_1[0x7b] = iVar1 + iVar5;
        param_1[0x8c] = 0;
        param_1[0x8d] = 0;
        *(undefined2 *)(param_1 + 0x8e) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x23a) = 0xffff;
        param_1[0x8f] = iVar1 + iVar9;
        param_1 = param_1 + 0xa0;
      } while (uVar8 < param_2 - 8);
    }
    if (uVar8 < param_2) {
      iVar7 = uVar8 * uVar6;
      do {
        *param_1 = 0;
        iVar10 = iVar1 + iVar7;
        param_1[1] = 0;
        uVar8 = uVar8 + 1;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        iVar7 = iVar7 + uVar6;
        param_1[3] = iVar10;
        param_1 = param_1 + 0x14;
      } while (uVar8 < param_2);
    }
  }
  return;
}

// 0x001a1c00  size 0x1dc
void BlockPool_AllocB(undefined4 *param_1,uint param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar6 = param_4 + 0x3fU & 0xffffffc0;
  iVar1 = Mem_AllocAligned(uVar6 * param_2,0x40);
  uVar8 = 0;
  if (param_2 != 0) {
    if (8 < param_2) {
      iVar7 = 0;
      iVar10 = 0;
      do {
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        param_1[3] = iVar1 + iVar7;
        param_1[0x1d] = 0;
        iVar2 = iVar10 + uVar6 * 3;
        param_1[0x1e] = 0;
        *(undefined2 *)(param_1 + 0x1f) = 0xffff;
        iVar3 = iVar10 + uVar6 * 4;
        *(undefined2 *)((int)param_1 + 0x7e) = 0xffff;
        param_1[0x20] = iVar1 + iVar10 + uVar6;
        iVar4 = iVar10 + uVar6 * 5;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        iVar5 = iVar10 + uVar6 * 6;
        *(undefined2 *)(param_1 + 0x3c) = 0xffff;
        iVar9 = iVar10 + uVar6 * 7;
        *(undefined2 *)((int)param_1 + 0xf2) = 0xffff;
        param_1[0x3d] = iVar1 + iVar10 + uVar6 * 2;
        uVar8 = uVar8 + 8;
        param_1[0x57] = 0;
        param_1[0x58] = 0;
        *(undefined2 *)(param_1 + 0x59) = 0xffff;
        iVar7 = iVar7 + uVar6 * 8;
        *(undefined2 *)((int)param_1 + 0x166) = 0xffff;
        iVar10 = iVar10 + uVar6 * 8;
        param_1[0x5a] = iVar1 + iVar2;
        param_1[0x74] = 0;
        param_1[0x75] = 0;
        *(undefined2 *)(param_1 + 0x76) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x1da) = 0xffff;
        param_1[0x77] = iVar1 + iVar3;
        param_1[0x91] = 0;
        param_1[0x92] = 0;
        *(undefined2 *)(param_1 + 0x93) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x24e) = 0xffff;
        param_1[0x94] = iVar1 + iVar4;
        param_1[0xae] = 0;
        param_1[0xaf] = 0;
        *(undefined2 *)(param_1 + 0xb0) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x2c2) = 0xffff;
        param_1[0xb1] = iVar1 + iVar5;
        param_1[0xcb] = 0;
        param_1[0xcc] = 0;
        *(undefined2 *)(param_1 + 0xcd) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x336) = 0xffff;
        param_1[0xce] = iVar1 + iVar9;
        param_1 = param_1 + 0xe8;
      } while (uVar8 < param_2 - 8);
    }
    if (uVar8 < param_2) {
      iVar7 = uVar8 * uVar6;
      do {
        *param_1 = 0;
        iVar10 = iVar1 + iVar7;
        param_1[1] = 0;
        uVar8 = uVar8 + 1;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        iVar7 = iVar7 + uVar6;
        param_1[3] = iVar10;
        param_1 = param_1 + 0x1d;
      } while (uVar8 < param_2);
    }
  }
  return;
}

// 0x001a1de0  size 0x1dc
void BlockPool_AllocC(undefined4 *param_1,uint param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar6 = param_4 + 0x3fU & 0xffffffc0;
  iVar1 = Mem_AllocAligned(uVar6 * param_2,0x40);
  uVar8 = 0;
  if (param_2 != 0) {
    if (8 < param_2) {
      iVar7 = 0;
      iVar10 = 0;
      do {
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        param_1[3] = iVar1 + iVar7;
        param_1[0x1d] = 0;
        iVar2 = iVar10 + uVar6 * 3;
        param_1[0x1e] = 0;
        *(undefined2 *)(param_1 + 0x1f) = 0xffff;
        iVar3 = iVar10 + uVar6 * 4;
        *(undefined2 *)((int)param_1 + 0x7e) = 0xffff;
        param_1[0x20] = iVar1 + iVar10 + uVar6;
        iVar4 = iVar10 + uVar6 * 5;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        iVar5 = iVar10 + uVar6 * 6;
        *(undefined2 *)(param_1 + 0x3c) = 0xffff;
        iVar9 = iVar10 + uVar6 * 7;
        *(undefined2 *)((int)param_1 + 0xf2) = 0xffff;
        param_1[0x3d] = iVar1 + iVar10 + uVar6 * 2;
        uVar8 = uVar8 + 8;
        param_1[0x57] = 0;
        param_1[0x58] = 0;
        *(undefined2 *)(param_1 + 0x59) = 0xffff;
        iVar7 = iVar7 + uVar6 * 8;
        *(undefined2 *)((int)param_1 + 0x166) = 0xffff;
        iVar10 = iVar10 + uVar6 * 8;
        param_1[0x5a] = iVar1 + iVar2;
        param_1[0x74] = 0;
        param_1[0x75] = 0;
        *(undefined2 *)(param_1 + 0x76) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x1da) = 0xffff;
        param_1[0x77] = iVar1 + iVar3;
        param_1[0x91] = 0;
        param_1[0x92] = 0;
        *(undefined2 *)(param_1 + 0x93) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x24e) = 0xffff;
        param_1[0x94] = iVar1 + iVar4;
        param_1[0xae] = 0;
        param_1[0xaf] = 0;
        *(undefined2 *)(param_1 + 0xb0) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x2c2) = 0xffff;
        param_1[0xb1] = iVar1 + iVar5;
        param_1[0xcb] = 0;
        param_1[0xcc] = 0;
        *(undefined2 *)(param_1 + 0xcd) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x336) = 0xffff;
        param_1[0xce] = iVar1 + iVar9;
        param_1 = param_1 + 0xe8;
      } while (uVar8 < param_2 - 8);
    }
    if (uVar8 < param_2) {
      iVar7 = uVar8 * uVar6;
      do {
        *param_1 = 0;
        iVar10 = iVar1 + iVar7;
        param_1[1] = 0;
        uVar8 = uVar8 + 1;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        iVar7 = iVar7 + uVar6;
        param_1[3] = iVar10;
        param_1 = param_1 + 0x1d;
      } while (uVar8 < param_2);
    }
  }
  return;
}

// 0x001a1fc0  size 0x1dc
void BlockPool_AllocD(undefined4 *param_1,uint param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar6 = param_4 + 0x3fU & 0xffffffc0;
  iVar1 = Mem_AllocAligned(uVar6 * param_2,0x40);
  uVar8 = 0;
  if (param_2 != 0) {
    if (8 < param_2) {
      iVar7 = 0;
      iVar10 = 0;
      do {
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        param_1[3] = iVar1 + iVar7;
        param_1[0xe] = 0;
        iVar2 = iVar10 + uVar6 * 3;
        param_1[0xf] = 0;
        *(undefined2 *)(param_1 + 0x10) = 0xffff;
        iVar3 = iVar10 + uVar6 * 4;
        *(undefined2 *)((int)param_1 + 0x42) = 0xffff;
        param_1[0x11] = iVar1 + iVar10 + uVar6;
        iVar4 = iVar10 + uVar6 * 5;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        iVar5 = iVar10 + uVar6 * 6;
        *(undefined2 *)(param_1 + 0x1e) = 0xffff;
        iVar9 = iVar10 + uVar6 * 7;
        *(undefined2 *)((int)param_1 + 0x7a) = 0xffff;
        param_1[0x1f] = iVar1 + iVar10 + uVar6 * 2;
        uVar8 = uVar8 + 8;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        *(undefined2 *)(param_1 + 0x2c) = 0xffff;
        iVar7 = iVar7 + uVar6 * 8;
        *(undefined2 *)((int)param_1 + 0xb2) = 0xffff;
        iVar10 = iVar10 + uVar6 * 8;
        param_1[0x2d] = iVar1 + iVar2;
        param_1[0x38] = 0;
        param_1[0x39] = 0;
        *(undefined2 *)(param_1 + 0x3a) = 0xffff;
        *(undefined2 *)((int)param_1 + 0xea) = 0xffff;
        param_1[0x3b] = iVar1 + iVar3;
        param_1[0x46] = 0;
        param_1[0x47] = 0;
        *(undefined2 *)(param_1 + 0x48) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x122) = 0xffff;
        param_1[0x49] = iVar1 + iVar4;
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        *(undefined2 *)(param_1 + 0x56) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x15a) = 0xffff;
        param_1[0x57] = iVar1 + iVar5;
        param_1[0x62] = 0;
        param_1[99] = 0;
        *(undefined2 *)(param_1 + 100) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x192) = 0xffff;
        param_1[0x65] = iVar1 + iVar9;
        param_1 = param_1 + 0x70;
      } while (uVar8 < param_2 - 8);
    }
    if (uVar8 < param_2) {
      iVar7 = uVar8 * uVar6;
      do {
        *param_1 = 0;
        iVar10 = iVar1 + iVar7;
        param_1[1] = 0;
        uVar8 = uVar8 + 1;
        *(undefined2 *)(param_1 + 2) = 0xffff;
        *(undefined2 *)((int)param_1 + 10) = 0xffff;
        iVar7 = iVar7 + uVar6;
        param_1[3] = iVar10;
        param_1 = param_1 + 0xe;
      } while (uVar8 < param_2);
    }
  }
  return;
}

// 0x001a21a0  size 0x21c
void Course_CullBlocks(int param_1,int param_2,ushort *param_3,long param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_20 [8];
  float fStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  uVar2 = 0;
  if (*param_3 != 0) {
    iVar1 = (int)param_5 * 0x10;
    do {
      if (param_4 == 0) {
        if (param_5 == 0) {
          *(undefined4 *)(param_2 + 0x18) = 0;
          *(undefined4 *)(param_2 + 0x14) = 0;
          *(undefined4 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0x1c) = 0x43000000;
        }
      }
      else {
        Vu0_Vec3Distance(auStack_10,param_2,iVar1 + 0x430680);
        fVar4 = (float)vu0math_sub_00132ab0(auStack_10,iVar1 + 0x4306a0);
        fVar3 = fVar4 * fVar4 * fVar4 * fVar4;
        fVar3 = fVar3 * fVar3;
        fVar4 = fVar4 * fVar3 * fVar3;
        fVar3 = 0.0;
        if (0.0 <= fVar4) {
          fVar3 = fVar4 * 128.0;
        }
        if (param_5 == 0) {
          *(float *)(param_2 + 0x18) = fVar3;
          *(float *)(param_2 + 0x14) = fVar3;
          *(float *)(param_2 + 0x10) = fVar3;
          *(undefined4 *)(param_2 + 0x1c) = 0x43000000;
        }
        else {
          *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + fVar3;
          *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + fVar3;
          *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + fVar3;
          *(undefined4 *)(param_2 + 0x1c) = 0x43000000;
        }
        vu0math_sub_00132ae0(auStack_20,param_2);
        uStack_14 = 0x3f800000;
        vu0math_sub_00132d50(auStack_20,param_1 + 0x180,auStack_20);
        *(float *)(param_2 + 0xc) =
             ((((float)*(int *)(param_1 + 0x80) *
               ((fStack_18 * 20.0 + *(float *)(param_1 + 0xa4) + 0.0) / *(float *)(param_1 + 0xa4))
               * 1.9209821) / 2.0) / *(float *)(param_1 + 0x8c)) * 0.2;
      }
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 0x30;
    } while (uVar2 < *param_3);
  }
  return;
}

// 0x001a23c0  size 0x1bc
void Course_CaptureReflection(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  
  if (iRam00430654 != 0) {
    uVar6 = 0;
    iVar3 = 0;
    do {
      uVar5 = 0;
      iVar2 = 0;
      iVar1 = iVar3 * 2;
      do {
        uVar5 = uVar5 + 8;
        *(undefined2 *)(iVar1 + iRam00430660 + iVar2) = 0xffff;
        *(undefined2 *)(iVar1 + iRam00430660 + iVar2 + 2) = 0xffff;
        *(undefined2 *)(iVar1 + iRam00430660 + iVar2 + 4) = 0xffff;
        *(undefined2 *)(iVar1 + iRam00430660 + iVar2 + 6) = 0xffff;
        *(undefined2 *)(iVar1 + iRam00430660 + iVar2 + 8) = 0xffff;
        *(undefined2 *)(iVar1 + iRam00430660 + iVar2 + 10) = 0xffff;
        *(undefined2 *)(iVar1 + iRam00430660 + iVar2 + 0xc) = 0xffff;
        *(undefined2 *)(iVar1 + iRam00430660 + iVar2 + 0xe) = 0xffff;
        iVar2 = iVar2 + 0x10;
      } while (uVar5 < 0x10);
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar6 < 0x10);
    if (iRam0036f298 != 0) {
      iRam00430654 = 0;
      iRam0036f298 = 0;
      Gfx_StoreImage(iRam00430660,0x430700);
    }
    iVar1 = 0;
    uVar6 = 0;
    iVar3 = 0;
    do {
      uVar5 = 0;
      psVar4 = (short *)(iRam00430660 + iVar3 * 2);
      do {
        if (*psVar4 == 1) {
          iVar1 = iVar1 + 1;
        }
        uVar5 = uVar5 + 1;
        psVar4 = psVar4 + 1;
      } while (uVar5 < 0x10);
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar6 < 0x10);
    fRam00430664 = ((float)iVar1 / 16.0) / 16.0;
  }
  return;
}

// 0x001a2580  size 0x328
void Course_DrawReflectionPlane(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  uVar3 = uRam0043116c;
  uVar2 = uRam0036f2bc;
  if (iRam00430654 != 0) {
    iVar5 = 0x10;
    bVar1 = true;
    uVar10 = uRam00431170 >> 6;
    uVar8 = iRam00430658 - 8;
    uVar7 = iRam0043065c - 8;
    uVar9 = iRam00431168 << 5;
    iVar6 = iVar5;
    if ((int)uVar8 < -0x10) {
      bVar1 = false;
    }
    else if (uRam00431170 < uVar8) {
      bVar1 = false;
    }
    else if ((int)uVar8 < 0) {
      iVar6 = 0x10 - uVar8;
      uVar8 = 0;
    }
    else if (uRam00431170 < iRam00430658 + 8U) {
      iVar6 = 0x10 - ((uRam00431170 - uVar8) + 0x10);
    }
    if ((int)uVar7 < -0x10) {
      bVar1 = false;
    }
    else if (uRam00431174 < uVar7) {
      bVar1 = false;
    }
    else if ((int)uVar7 < 0) {
      iVar5 = 0x10 - uVar7;
      uVar7 = 0;
    }
    else if (uRam00431174 < iRam0043065c + 8U) {
      iVar5 = 0x10 - ((uRam00431174 - uVar7) + 0x10);
    }
    if (iVar6 < 1) {
      bVar1 = false;
    }
    if (iVar5 < 1) {
      bVar1 = false;
    }
    if (bVar1) {
      Pkt_Init(auStack_40,1,2,0);
      uStack_2c = 0x42d0c0;
      Pkt_SubmitToChain(auStack_40,0);
      puVar4 = (undefined8 *)Pkt_AllocDmaRef(auStack_40,6,0x13000000,0x50000006);
      *puVar4 = 0x1000000000008005;
      puVar4[1] = 0xe;
      puVar4[2] = 0;
      puVar4[3] = 0x3f;
      puVar4[4] = (ulong)uVar3 << 0x38 |
                  (ulong)uVar2 << 0x20 |
                  (ulong)uVar3 << 0x18 | (ulong)uVar9 | (long)(int)uVar10 << 0x10 | 0x1000000000000;
      puVar4[5] = 0x50;
      puVar4[6] = (long)(int)uVar8 | (long)(int)uVar7 << 0x10;
      puVar4[7] = 0x51;
      puVar4[8] = (long)iVar6 | (long)iVar5 << 0x20;
      puVar4[9] = 0x52;
      puVar4[10] = 2;
      puVar4[0xb] = 0x53;
      Pkt_Submit(auStack_40,0);
      uRam00430700 = uVar2;
      uRam00430704 = 1;
      uRam00430708 = uVar3;
      uRam0043070c = 0;
      uRam00430710 = 0;
      iRam00430714 = iVar6;
      iRam00430718 = iVar5;
    }
    uRam0036f298 = (uint)bVar1;
  }
  return;
}

// 0x001a28b0  size 0x140
void Course_BindTextureSlots(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0x317520;
  do {
    bVar1 = *(byte *)(iVar4 + 8);
    iVar2 = ((uint)bVar1 * 0x18 - (uint)bVar1) * 0x40;
    uVar3 = 0;
    if (*(int *)(iVar2 + 0x431684) != 0) {
      if ((iRam00430600 != 0) && (param_2 != 0)) {
        *(undefined4 *)(iVar2 + 0x431154) = 0x3d4ccccd;
        *(undefined4 *)(iVar2 + 0x431158) = 0x447a0000;
        *(undefined4 *)(iVar2 + 0x43115c) = 0x43000000;
        if (bVar1 < 2) {
          if (iRam00430668 != 0) {
            uVar3 = TexSlot_GetEntry(7,0,bVar1,0);
          }
        }
        else if ((bVar1 == 2) && (iRam0043066c != 0)) {
          uVar3 = TexSlot_GetEntry(7,0,2,0);
        }
      }
      (*pcRam00430674)(iVar4,uRam00430678,param_1,uVar3);
    }
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 0x14;
  } while (uVar5 < 6);
  return;
}

// 0x001a2a00  size 0x84c
/* WARNING: Removing unreachable block (ram,0x001a2fec) */

void Course_DrawSkyAndSun(undefined1 *param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c0;
  float fStack_3bc;
  undefined1 auStack_3b0 [4];
  float fStack_3ac;
  int iStack_3a0;
  int iStack_39c;
  int iStack_394;
  uint auStack_390 [166];
  undefined4 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [20];
  int iStack_2c;
  
  puVar6 = puRam004305b8;
  iVar11 = iRam004305b4 + 0x10;
  uVar3 = puRam004305b8[2];
  iVar8 = ((uint)(byte)param_1[8] * 0x18 - (uint)(byte)param_1[8]) * 0x40;
  uVar4 = *puRam004305b8;
  iVar12 = iVar8 + 0x431100;
  uVar5 = puRam004305b8[1];
  Cam_SetupViewport(iVar12,*param_1,param_1[4]);
  Pkt_Init(auStack_40,1,2,0);
  iStack_2c = iVar12;
  Pkt_SubmitToChain(auStack_40,*(undefined4 *)(param_1 + 0xc));
  Pkt_Init(auStack_80,2,2,0);
  Pkt_SubmitToChain(auStack_80,0x11);
  Pkt_End(auStack_40);
  TexSlot_Set(5,*(undefined4 *)(iRam004305bc + 0x58),*(undefined4 *)(iRam004305bc + 0x70));
  if (param_2 == 0) {
    vu0math_sub_001328b0(auStack_3b0,iVar11);
    vu0math_sub_00132b10(0x461c4000,auStack_3b0,auStack_3b0);
    vu0math_sub_00132b70(auStack_3b0,auStack_3b0,iVar12);
    vu0math_sub_00133680(&iStack_3a0,iVar8 + 0x431480,auStack_3b0,1);
    if (iStack_3a0 < 0) {
      iStack_3a0 = iStack_3a0 + 0xf;
    }
    iVar11 = *(int *)(iVar8 + 0x431180);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    iVar11 = (iStack_3a0 >> 4) + (iVar11 >> 1);
    if (iStack_39c < 0) {
      iStack_39c = iStack_39c + 0xf;
    }
    iVar12 = *(int *)(iVar8 + 0x431184);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    iVar12 = (iStack_39c >> 4) + (iVar12 >> 1);
  }
  else {
    vu0math_sub_001328b0(auStack_3b0,iVar11);
    vu0math_sub_001328b0(auStack_3b0,auStack_3b0);
    vu0math_sub_00132b10(0x461c4000,auStack_3b0,auStack_3b0);
    fStack_3ac = fStack_3ac * -1.0;
    vu0math_sub_00132b70(auStack_3b0,auStack_3b0,iVar12);
    vu0math_sub_00133680(&iStack_3a0,iVar8 + 0x431480,auStack_3b0,1);
    if (iStack_3a0 < 0) {
      iStack_3a0 = iStack_3a0 + 0xf;
    }
    iVar11 = *(int *)(iVar8 + 0x431180);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    iVar11 = (iStack_3a0 >> 4) + (iVar11 >> 1);
    if (iStack_39c < 0) {
      iStack_39c = iStack_39c + 0xf;
    }
    iVar12 = *(int *)(iVar8 + 0x431184);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    iVar12 = (iStack_39c >> 4) + (iVar12 >> 1);
  }
  fVar14 = (float)(iVar12 + -0x800);
  fVar13 = (float)(iVar11 + -0x800);
  if (param_2 == 0) {
    iRam00430658 = (int)fVar13;
    uRam00430654 = 1;
    iRam0043065c = (int)fVar14;
  }
  if (0 < iStack_394) {
    Obj_Reset(auStack_390,4,0xffffffffffffffff);
    uStack_e0 = 0x48;
    auStack_390[0] = auStack_390[0] | 2;
    fStack_a0 = fVar13;
    fStack_9c = fVar14;
    if (param_2 == 0) {
      iVar11 = TexSlot_GetEntry(5,uVar4);
      Obj_SetVisible(auStack_390,1,5,uVar4);
      uVar1 = *(ushort *)(iVar11 + 10);
      uVar2 = *(ushort *)(iVar11 + 8);
      fStack_b0 = *(float *)(iVar8 + 0x431190);
      fStack_ac = *(float *)(iVar8 + 0x431194);
    }
    else {
      iVar11 = TexSlot_GetEntry(5,uVar3);
      Obj_SetVisible(auStack_390,1,5,uVar3);
      uVar1 = *(ushort *)(iVar11 + 10);
      uVar2 = *(ushort *)(iVar11 + 8);
      fStack_ac = *(float *)(iVar8 + 0x431194) * 7.0;
      fStack_b0 = *(float *)(iVar8 + 0x431190) * 7.0;
    }
    fStack_bc = (float)(uVar1 >> 1);
    fStack_c0 = (float)(uVar2 >> 1);
    auStack_390[0] = auStack_390[0] | 4;
    Angle_Wrap(0,auStack_390);
    uStack_d0 = 0x80;
    uStack_f8 = 1;
    uStack_cc = 0x80;
    uStack_c8 = 0x80;
    uStack_c4 = 0x80;
    uStack_e8 = 0x50000;
    Pkt_AddPrimitives(auStack_40,auStack_390);
    if ((param_2 == 0) && (fRam00430664 != 0.0)) {
      uVar9 = 0;
      do {
        Obj_Reset(auStack_390,4,0xffffffffffffffff);
        uStack_e0 = 0x48;
        auStack_390[0] = auStack_390[0] | 2;
        Obj_SetVisible(auStack_390,1,5,uVar5);
        fStack_c0 = 0.0;
        fStack_bc = 0.0;
        fStack_ac = fRam00430664 * 2.0 * *(float *)(iVar8 + 0x431194);
        fStack_b0 = fRam00430664 * 2.0 * *(float *)(iVar8 + 0x431190);
        auStack_390[0] = auStack_390[0] | 4;
        fStack_a0 = fVar13;
        fStack_9c = fVar14;
        Angle_Wrap((float)uVar9 * 1.5707964,auStack_390);
        uStack_d0 = 0x80;
        uStack_e8 = 0x31001;
        Pkt_AddPrimitives(auStack_80,auStack_390,1);
        uVar9 = uVar9 + 1;
      } while (uVar9 < 4);
      uVar9 = 0;
      pfVar10 = (float *)&DAT_003173d0;
      do {
        iVar12 = TexSlot_GetEntry(5,puVar6[(int)pfVar10[2] + 3]);
        iVar11 = *(int *)(iVar8 + 0x431180);
        if (iVar11 < 0) {
          iVar11 = iVar11 + 1;
        }
        iVar7 = *(int *)(iVar8 + 0x431184);
        fStack_3d0 = (float)(iVar11 >> 1);
        if (iVar7 < 0) {
          iVar7 = iVar7 + 1;
        }
        fStack_3cc = (float)(iVar7 >> 1);
        fStack_3c0 = fVar13;
        fStack_3bc = fVar14;
        vu0math_sub_00132a60(pfVar10[1],&fStack_3e0,&fStack_3d0,&fStack_3c0);
        Obj_Reset(auStack_390,4,0xffffffffffffffff);
        uStack_e0 = 0x48;
        auStack_390[0] = auStack_390[0] | 2;
        Obj_SetVisible(auStack_390,1,5,puVar6[(int)pfVar10[2] + 3]);
        fStack_a0 = fStack_3e0;
        fStack_9c = fStack_3dc;
        fStack_bc = (float)*(ushort *)(iVar12 + 10) * 0.5;
        auStack_390[0] = auStack_390[0] | 4;
        fStack_c0 = (float)(*(ushort *)(iVar12 + 8) >> 1);
        fStack_ac = *pfVar10 * *(float *)(iVar8 + 0x431194);
        fStack_b0 = *pfVar10 * *(float *)(iVar8 + 0x431190);
        Angle_Wrap(0,auStack_390);
        uStack_e8 = 0x31001;
        uStack_d0 = ((uint)pfVar10[3] & 0xff0000) >> 0x10;
        Pkt_AddPrimitives(auStack_80,auStack_390,1);
        uVar9 = uVar9 + 1;
        pfVar10 = pfVar10 + 4;
      } while (uVar9 < 0xc);
    }
  }
  Pkt_Submit(auStack_80,0);
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x001a3250  size 0x480
void Course_DrawLensFlare(int *param_1,undefined1 *param_2,long param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ushort *puVar9;
  int iVar10;
  undefined1 *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  uint uStack_490;
  undefined2 uStack_450;
  undefined1 uStack_44e;
  undefined1 auStack_3a0 [352];
  undefined1 auStack_240 [160];
  undefined4 uStack_1a0;
  undefined1 auStack_180 [384];
  
  bVar4 = false;
  iVar5 = ((uint)(byte)param_2[8] * 0x18 - (uint)(byte)param_2[8]) * 0x40;
  iVar6 = iVar5 + 0x431100;
  maybe_Vu0_UnitMatrix(auStack_180);
  Cam_SetupViewport(iVar6,*param_2,param_2[4]);
  Light_UpdateMatrices(0x436180);
  Layer_Reset(auStack_240,iVar6,0x436180,*(undefined4 *)(param_2 + 0xc),
              *(undefined4 *)(param_2 + 0x10));
  if ((iRam00430600 != 0) && (param_3 != 0)) {
    uStack_1a0 = TexSlot_GetEntry(7,0);
    *(undefined4 *)(iVar5 + 0x431154) = 0x3d4ccccd;
    *(undefined4 *)(iVar5 + 0x431158) = 0x447a0000;
    *(undefined4 *)(iVar5 + 0x43115c) = 0x43000000;
  }
  iVar14 = 0;
  puVar11 = param_2;
  do {
    if (*(int *)(puVar11 + 0x18) != 0) {
      uStack_490 = 0;
      for (iVar10 = 0;
          (uStack_490 < uRam004305cc &&
          (puVar1 = *(uint **)(param_1[1] + iVar10), puVar1 != (uint *)0x0)); iVar10 = iVar10 + 4) {
        puVar2 = (uint *)*param_1;
        if (((puVar1[0x10] & 1 << (*(uint *)(param_2 + 8) & 0x1f)) != 0) &&
           (lVar8 = Gut_PackGetEntry(puVar1[3],param_2[0x14]), lVar8 != 0)) {
          if (!bVar4) {
            Layer_Open(auStack_240,0);
            bVar4 = true;
          }
          iVar7 = Model_GetNode(lVar8,iVar14);
          uVar13 = 0;
          if (*(int *)(iVar7 + 0x10) != 0) {
            do {
              lVar8 = Model_UpdateNodeMatrix
                                (auStack_240,
                                 *(undefined4 *)
                                  (*(int *)(iVar7 + 0x14) + (*(int *)(iVar7 + 0xc) + uVar13) * 4));
              if (lVar8 != 0) {
                *puVar2 = *puVar2 | 8;
                *puVar1 = *puVar1 | 8;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(uint *)(iVar7 + 0x10));
          }
        }
        uStack_490 = uStack_490 + 1;
      }
    }
    iVar14 = iVar14 + 1;
    puVar11 = puVar11 + 4;
  } while (iVar14 < 3);
  if (bVar4) {
    Layer_Close(auStack_240,0);
  }
  if ((param_4 != 0) &&
     (lVar8 = Gut_PackGetEntry(*(undefined4 *)(*param_1 + 0xc),param_2[0x14],1), lVar8 != 0)) {
    iVar14 = (int)lVar8;
    puVar12 = (ushort *)(iVar14 + 0x10);
    maybe_Pkt_InitLayers
              (auStack_3a0,iVar6,0x436180,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10));
    vu0math_sub_00132a90(iVar5 + 0x431150,iVar5 + 0x431120,iVar5 + 0x431140);
    vu0math_sub_001328b0(iVar5 + 0x431150,iVar5 + 0x431150);
    uVar13 = 0;
    if (*(int *)(iVar14 + 8) != 0) {
      do {
        puVar9 = puVar12 + 0x28;
        Obj_Init(&uStack_450);
        if ((puVar12[1] & 0x20) == 0) {
          if ((puVar12[1] & 1) == 0) {
            uStack_450 = 0x20;
          }
          else {
            uStack_450 = 0x40;
          }
        }
        else {
          uStack_450 = 0x400;
        }
        if ((puVar12[1] & 4) == 0) {
          uStack_44e = 4;
        }
        else {
          uStack_44e = 2;
        }
        Obj_SetBlend(&uStack_450,*(undefined1 *)((int)puVar12 + 5),puVar12[3],
                     *(undefined8 *)(puVar12 + 0xc));
        if ((puVar12[1] & 0x40) == 0) {
LAB_001a3634:
          Obj_SetTexture(&uStack_450,*puVar12,puVar9,puVar12 + 0x18);
          lVar8 = Model_Draw(auStack_3a0,&uStack_450);
          if (lVar8 != 0) {
            *(uint *)*param_1 = *(uint *)*param_1 | 8;
          }
          puVar12 = puVar9 + (uint)*puVar12 * 0x18;
        }
        else if ((param_2[8] != '\x01') && (param_2[8] != '\x02')) {
          lVar8 = Vu0_TransformPointPersp(iVar6,iVar5 + 0x4313c0,puVar12 + 0x18);
          if (lVar8 != 0) {
            if (param_2[8] == '\x02') {
              uVar3 = uRam0043066c;
            }
            else {
              uVar3 = uRam00430668;
            }
            Course_CullBlocks(iVar6,puVar9,puVar12,uVar3,param_2[8] == '\x02');
          }
          goto LAB_001a3634;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(iVar14 + 8));
    }
  }
  return;
}

// 0x001a36e0  size 0x13c
void Course_DrawView(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_240 [576];
  
  iVar4 = ((uint)(byte)param_1[8] * 0x18 - (uint)(byte)param_1[8]) * 0x40 + 0x431100;
  Cam_SetupViewport(iVar4,*param_1,param_1[4]);
  Light_UpdateMatrices(0x436180);
  Layer_Reset(auStack_240,iVar4,0x436180,*(undefined4 *)(param_1 + 0xc),
              *(undefined4 *)(param_1 + 0x10));
  Layer_Open(auStack_240,0);
  uVar5 = 0;
  if (*(uint *)param_2 != 0) {
    do {
      uVar1 = Gut_PackGetEntry(param_2,uVar5,0);
      uVar3 = 0;
      if (*(int *)((int)uVar1 + 0x24) != 0) {
        do {
          uVar2 = Model_GetTexture(uVar1,uVar3);
          Model_UpdateNodeMatrix(auStack_240,uVar2);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)((int)uVar1 + 0x24));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)param_2);
  }
  Layer_Close(auStack_240,0);
  return;
}

// 0x001a3820  size 0xf18
void Course_Render(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined1 auStack_520 [128];
  undefined1 auStack_4a0 [664];
  undefined4 uStack_208;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 auStack_190 [20];
  undefined4 uStack_17c;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  lVar11 = 0;
  CourseStream_Update(8);
  Course_UpdateFlareOcclusion();
  CourseStream_Update(0x10);
  Pkt_Init(auStack_40,1,2,0);
  uStack_2c = 0x42d0c0;
  if (iRam0043067c == 0) {
    Pkt_SubmitToChain(auStack_40,0);
    Pkt_Flush(auStack_40,iRam004305bc + 0x20);
    Pkt_Submit(auStack_40,0);
    iRam0043067c = 1;
  }
  piVar2 = (int *)Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),9,0);
  uVar4 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),0,0);
  uVar5 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),1,0);
  iVar9 = piVar2[2];
  while (iVar9 != 0) {
    uVar1 = *(undefined1 *)
             ((int)piVar2 + (iRam00430670 % (piVar2[1] * piVar2[2])) / piVar2[1] + 0x10);
    if (*piVar2 == 0) {
      uVar6 = Tex_GetEntry(uVar4,uVar1);
      iVar9 = *(int *)(iRam004305bc + 0x30) + piVar2[3] * 0x80;
      Pkt_SubmitToChain(auStack_40,0);
      Pkt_AddTexture(auStack_40,*(undefined4 *)(iVar9 + 100),*(undefined4 *)(iVar9 + 0x68),uVar6);
      Pkt_Submit(auStack_40,0);
    }
    else {
      uVar3 = Tex_GetEntry(uVar5,uVar1);
      *(undefined4 *)(*(int *)(iRam004305bc + 0x50) + piVar2[3] * 0x80 + 0x6c) = uVar3;
    }
    iVar9 = piVar2[10];
    piVar2 = piVar2 + 8;
  }
  iRam00430670 = iRam00430670 + param_1;
  TexSlot_Set(0,*(undefined4 *)(iRam004305bc + 0x18),*(undefined4 *)(iRam004305bc + 0x30));
  TexSlot_Set(4,*(undefined4 *)(iRam004305bc + 0x38),*(undefined4 *)(iRam004305bc + 0x50));
  lVar7 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),3,0);
  lVar8 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),4,0);
  if ((lVar7 != 0) && (iRam00431684 != 0)) {
    uStack_5c = 5;
    uStack_50 = 1;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    Course_DrawView(&uStack_60,lVar7);
  }
  if ((lVar7 != 0) && (iRam00431c44 != 0)) {
    uStack_5c = 5;
    uStack_58 = 1;
    uStack_50 = 2;
    uStack_60 = 0;
    uStack_54 = 0;
    Course_DrawView(&uStack_60,lVar7);
  }
  if ((lVar7 != 0) && (iRam00432204 != 0)) {
    uStack_5c = 5;
    uStack_58 = 2;
    uStack_60 = 1;
    uStack_50 = 3;
    uStack_54 = 0;
    Course_DrawView(&uStack_60,lVar7);
  }
  if ((lVar8 != 0) && (iRam00432d84 != 0)) {
    uStack_5c = 6;
    uStack_58 = 4;
    uStack_50 = 6;
    uStack_60 = 0;
    uStack_54 = 0;
    Course_DrawView(&uStack_60,lVar8,1);
  }
  if (iRam004327c4 != 0) {
    View_DrawFadeSprite(0,1);
  }
  lVar7 = Gut_PackGetEntry(*(undefined4 *)(iRam004305bc + 0xc),6,0);
  if ((lVar7 != 0) && (iRam00431684 != 0)) {
    uStack_7c = 7;
    uStack_70 = 1;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    Course_DrawView(&uStack_80,lVar7,0);
  }
  if ((lVar7 != 0) && (iRam00431c44 != 0)) {
    uStack_7c = 7;
    uStack_78 = 1;
    uStack_80 = 0;
    uStack_70 = 2;
    uStack_74 = 0;
    Course_DrawView(&uStack_80,lVar7,0);
  }
  if ((lVar7 != 0) && (iRam00432204 != 0)) {
    uStack_80 = 1;
    uStack_7c = 7;
    uStack_78 = 2;
    uStack_70 = 3;
    uStack_74 = 0;
    Course_DrawView(&uStack_80,lVar7,0);
  }
  if (iRam004327c4 == 0) {
    if (iRam00431c44 != 0) {
      View_DrawFadeSprite(1,1);
    }
    if (iRam00432204 != 0) {
      View_DrawFadeSprite(2,1);
    }
  }
  else {
    View_DrawFadeSprite(0,1);
  }
  uVar10 = 0;
  for (piVar2 = piRam00430640; (uVar10 < uRam004305c4 && (*piVar2 != 0)); piVar2 = piVar2 + 2) {
    if (*(int *)piVar2[1] != 0) {
      Pkt_SubmitToChain(auStack_40,0);
      Pkt_Flush(auStack_40,*piVar2 + 0x40);
      Pkt_Submit(auStack_40,0);
      *(uint *)*piVar2 = *(uint *)*piVar2 | 8;
    }
    uVar10 = uVar10 + 1;
  }
  if (iRam004327c4 != 0) {
    DmaChain_Kick(1,0,4);
  }
  uVar10 = 0;
  for (piVar2 = piRam00430640; (uVar10 < uRam004305c4 && (iVar9 = *piVar2, iVar9 != 0));
      piVar2 = piVar2 + 2) {
    if (*(int *)piVar2[1] != 0) {
      TexSlot_Set(1,*(undefined4 *)(iVar9 + 0x18),*(undefined4 *)(iVar9 + 0x30));
      TexSlot_Set(2,*(undefined4 *)(*piVar2 + 0x38),*(undefined4 *)(*piVar2 + 0x50));
      if (iRam004327c4 != 0) {
        uStack_ac = 2;
        uStack_98 = 1;
        uStack_a8 = 3;
        uStack_a0 = 5;
        uStack_b0 = 0;
        uStack_a4 = 0;
        uStack_9c = (uint)bRam004306c2;
        uStack_94 = 0;
        uStack_90 = 1;
        Course_DrawLensFlare(piVar2,&uStack_b0,0);
      }
    }
    uVar10 = uVar10 + 1;
  }
  if ((iRam00430600 != 0) && ((iRam00430668 != 0 || (iRam0043066c != 0)))) {
    lVar11 = 1;
  }
  if ((iRam00430600 != 0) && (lVar11 != 0)) {
    Pkt_SubmitToChain(auStack_40,0);
    Pkt_Flush(auStack_40,iRam004305c0 + 0x24);
    Pkt_Submit(auStack_40,0);
  }
  if ((iRam00430600 != 0) && (lVar11 != 0)) {
    TexSlot_Set(7,*(undefined4 *)(iRam004305c0 + 0x1c),*(undefined4 *)(iRam004305c0 + 0x34));
  }
  if (iRam00430674 != 0) {
    Course_BindTextureSlots(1,lVar11);
  }
  if ((-1 < *piRam004305b8) && (iRam004327c4 != 0)) {
    uStack_cc = 2;
    uStack_d0 = 0;
    uStack_c8 = 3;
    uStack_c4 = 0;
    uStack_c0 = 5;
    Course_DrawSkyAndSun(&uStack_d0,1);
  }
  if (iRam004327c4 != 0) {
    DmaChain_Kick(1,0,5);
  }
  uVar10 = 0;
  for (piVar2 = piRam00430640; (uVar10 < uRam004305c4 && (iVar9 = *piVar2, iVar9 != 0));
      piVar2 = piVar2 + 2) {
    if (*(int *)piVar2[1] != 0) {
      TexSlot_Set(1,*(undefined4 *)(iVar9 + 0x18),*(undefined4 *)(iVar9 + 0x30));
      TexSlot_Set(2,*(undefined4 *)(*piVar2 + 0x38),*(undefined4 *)(*piVar2 + 0x50));
      if (iRam00431684 != 0) {
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 1;
        uStack_e8 = 0;
        uStack_e4 = 1;
        uStack_ec = (uint)bRam004306c0;
        uStack_e0 = 0;
        Course_DrawLensFlare(piVar2,&uStack_100,lVar11 != 0 && iRam00430668 != 0,0);
      }
      if (iRam00431c44 != 0) {
        uStack_f0 = 2;
        uStack_f8 = 1;
        uStack_e4 = 1;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_f4 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_ec = (uint)bRam004306c0;
        Course_DrawLensFlare(piVar2,&uStack_100,lVar11 != 0 && iRam00430668 != 0,0);
      }
      if (iRam00432204 != 0) {
        uStack_f8 = 2;
        uStack_f0 = 3;
        uStack_100 = 1;
        uStack_e4 = 1;
        uStack_fc = 0;
        uStack_f4 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_ec = (uint)bRam004306c0;
        Course_DrawLensFlare(piVar2,&uStack_100,lVar11 != 0 && iRam0043066c != 0,0);
      }
    }
    uVar10 = uVar10 + 1;
  }
  if (iRam004327c4 != 0) {
    View_DrawFullscreen(0,3,0xffffffff80808080);
  }
  uVar10 = 0;
  for (piVar2 = piRam00430640; (uVar10 < uRam004305c4 && (*piVar2 != 0)); piVar2 = piVar2 + 2) {
    if (*(int *)piVar2[1] != 0) {
      Pkt_SubmitToChain(auStack_40,0);
      Pkt_Flush(auStack_40,*piVar2 + 0x60);
      Pkt_Submit(auStack_40,0);
      *(uint *)*piVar2 = *(uint *)*piVar2 | 8;
      TexSlot_Set(1,*(undefined4 *)(*piVar2 + 0x18),*(undefined4 *)(*piVar2 + 0x30));
      TexSlot_Set(2,*(undefined4 *)(*piVar2 + 0x38),*(undefined4 *)(*piVar2 + 0x50));
      TexSlot_Set(3,*(undefined4 *)(*piVar2 + 0x58),*(undefined4 *)(*piVar2 + 0x70));
      if (iRam00431684 != 0) {
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_128 = 0;
        uStack_124 = 0;
        uStack_120 = 1;
        uStack_118 = 1;
        uStack_110 = 1;
        uStack_11c = (uint)bRam004306c0;
        uStack_114 = 0;
        Course_DrawLensFlare(piVar2,&uStack_130,lVar11 != 0 && iRam00430668 != 0,1);
      }
      if (iRam00431c44 != 0) {
        uStack_120 = 2;
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_128 = 1;
        uStack_124 = 0;
        uStack_118 = 1;
        uStack_11c = (uint)bRam004306c0;
        uStack_110 = 1;
        uStack_114 = 0;
        Course_DrawLensFlare(piVar2,&uStack_130,lVar11 != 0 && iRam00430668 != 0,1);
      }
      if (iRam00432204 != 0) {
        uStack_128 = 2;
        uStack_120 = 3;
        uStack_12c = 0;
        uStack_124 = 0;
        uStack_130 = 1;
        uStack_118 = 1;
        uStack_11c = (uint)bRam004306c0;
        uStack_110 = 1;
        uStack_114 = 0;
        Course_DrawLensFlare(piVar2,&uStack_130,lVar11 != 0 && iRam0043066c != 0,1);
      }
      if (iRam00432d84 != 0) {
        uStack_12c = 3;
        uStack_118 = 1;
        uStack_128 = 4;
        uStack_120 = 6;
        uStack_130 = 0;
        uStack_124 = 0;
        uStack_11c = (uint)bRam004306c1;
        uStack_114 = 1;
        uStack_110 = 1;
        Course_DrawLensFlare(piVar2,&uStack_130,0);
      }
      if (iRam00433904 != 0) {
        uStack_12c = 4;
        uStack_118 = 1;
        uStack_128 = 6;
        uStack_120 = 7;
        uStack_130 = 0;
        uStack_124 = 0;
        uStack_11c = (uint)bRam004306c1;
        uStack_114 = 1;
        uStack_110 = 1;
        Course_DrawLensFlare(piVar2,&uStack_130,0);
      }
    }
    uVar10 = uVar10 + 1;
  }
  if (iRam00430674 != 0) {
    Course_BindTextureSlots(0,lVar11);
  }
  if (iRam00432d84 != 0) {
    DmaChain_Kick(1,0,6);
  }
  if ((-1 < *piRam004305b8) && (iRam00431684 != 0)) {
    uStack_140 = 1;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    Course_DrawSkyAndSun(&uStack_150,0);
  }
  if (iRam00433904 != 0) {
    Pkt_Init(auStack_190,1,2,0);
    uStack_17c = 0x431100;
    Pkt_SubmitToChain(auStack_190,0);
    Obj_Reset(auStack_4a0,4,0xffffffffffffffff);
    uStack_208 = 0xffff;
    uStack_1b0 = 0x43400000;
    uStack_1ac = 0x42900000;
    uStack_1a0 = 0x43800000;
    uStack_19c = 0x42800000;
    Pkt_AddPrimitives(auStack_190,auStack_4a0,1);
    Pkt_Submit(auStack_190,0);
    Pkt_Init(auStack_190,2,2,0);
    Pkt_SubmitToChain(auStack_190,0);
    Gfx_SetupRenderTargetEx(0x433380,auStack_520,0,0);
    TexSlot_Set(0,1,auStack_520);
    Obj_Reset(auStack_4a0,4,0xffffffffffffffff);
    Obj_SetVisible(auStack_4a0,1,0,0);
    uStack_1b0 = 0x43400000;
    uStack_1ac = 0x42900000;
    uStack_1a0 = 0x43800000;
    uStack_19c = 0x42800000;
    Pkt_AddPrimitives(auStack_190,auStack_4a0,1);
    Pkt_Submit(auStack_190,0);
  }
  CourseStream_Update(2);
  CourseStream_FreeAll();
  return;
}

