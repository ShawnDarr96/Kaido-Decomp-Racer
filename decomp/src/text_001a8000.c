// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001a8000 - 0x001ac000
#include "ghidra_types.h"

// 0x001a8740  size 0x60
long PtclList_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e5a0;
    maybe_List_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001a87a0  size 0x68
/* "particleSystem Get Error! : Illegal ID"; 0x3b systems */

int PtclSys_Get(long param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x3a < param_1)) {
    printf(0x363910,param_1,0x3b);
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)param_1 * 4 + 0x4307bc);
    if ((*(uint *)(iVar1 + 0x14) & 1) == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

// 0x001a8810  size 0x80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 PtclSys_Create(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_4;
  
  uVar3 = 0;
  iVar2 = 0x4307a0;
  do {
    iVar1 = *(int *)(iVar2 + 0x1c);
    if ((*(uint *)(iVar1 + 0x14) & 1) == 0) {
      uStack_4 = 1;
      PtclSys_SetEmitter(iVar1,uVar3,param_1,&uStack_4);
      _s_PtclSysVar1 = _s_PtclSysVar1 + 1;
      return *(undefined4 *)(iVar1 + 0x20);
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (uVar3 < 0x3b);
  return 0xffffffff;
}

// 0x001a8890  size 0x114
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "particleSystem Remove Error!" */

void PtclSys_RemoveAll(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0x4307a0;
  do {
    if (*(int *)(iVar3 + 0x1c) != 0) {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x20);
      if ((iVar1 < 0) || (0x3a < iVar1)) {
        printf(0x363950,iVar1,0x3b);
      }
      else {
        iVar1 = *(int *)(iVar1 * 4 + 0x4307bc);
        if ((*(uint *)(iVar1 + 0x14) & 1) != 0) {
          *(undefined4 *)(iVar1 + 0x14) = 0;
          iVar1 = *(int *)(iVar1 + 0xc);
          while (iVar1 != 0) {
            iVar2 = *(int *)(iVar1 + 4);
            *(undefined4 *)(iVar1 + 8) = 0;
            maybe_List_Append(*(undefined4 *)(iVar1 + 0x9c),iVar1);
            maybe_List_Remove(0x4307a0,iVar1);
            iVar1 = iVar2;
          }
          _s_PtclSysVar1 = _s_PtclSysVar1 + -1;
        }
      }
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (uVar4 < 0x3b);
  return;
}

// 0x001a89b0  size 0x18c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PtclSys_UpdateAll(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0x4307a0;
  do {
    piVar1 = *(int **)(iVar4 + 0x1c);
    if ((piVar1[5] & 1U) != 0) {
      if (_s_PtclSysVar4 == 0) {
        PtclSys_ComputeRate(piVar1);
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      if (((piVar1[5] & 2U) == 0) || (piVar1[0x23] != 0)) {
        PtclSys_Update(piVar1);
        (**(code **)(*piVar1 + 0x10))(piVar1);
      }
      else {
        iVar2 = piVar1[8];
        if ((iVar2 < 0) || (0x3a < iVar2)) {
          printf(0x363950,iVar2,0x3b);
        }
        else {
          iVar2 = *(int *)(iVar2 * 4 + 0x4307bc);
          if ((*(uint *)(iVar2 + 0x14) & 1) != 0) {
            *(undefined4 *)(iVar2 + 0x14) = 0;
            iVar2 = *(int *)(iVar2 + 0xc);
            while (iVar2 != 0) {
              iVar3 = *(int *)(iVar2 + 4);
              *(undefined4 *)(iVar2 + 8) = 0;
              maybe_List_Append(*(undefined4 *)(iVar2 + 0x9c),iVar2);
              maybe_List_Remove(0x4307a0,iVar2);
              iVar2 = iVar3;
            }
            _s_PtclSysVar1 = _s_PtclSysVar1 + -1;
          }
        }
      }
    }
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar5 < 0x3b);
  return;
}

// 0x001a8b40  size 0x4c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PtclSys_BeginFrame(void)

{
  _s_PtclSysVar5 = 0;
  if (_s_PtclSysVar3 == 0) {
    _s_PtclSysVar2 = _g_Particles;
  }
  else {
    _s_PtclSysVar2 = _g_ParticlesB;
  }
  _s_PtclSysVar3 = _s_PtclSysVar3 ^ 1;
  return;
}

// 0x001a8b90  size 0x150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PtclSys_Shutdown(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0x4307a0;
  do {
    iVar1 = *(int *)(iVar4 + 0x1c);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      iVar1 = *(int *)(iVar1 + 0xc);
      while (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 4);
        *(undefined4 *)(iVar1 + 8) = 0;
        maybe_List_Append(*(undefined4 *)(iVar1 + 0x9c),iVar1);
        maybe_List_Remove(0x4307a0,iVar1);
        iVar1 = iVar2;
      }
      piVar3 = *(int **)(iVar4 + 0x1c);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3,1);
      }
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      _s_PtclSysVar1 = _s_PtclSysVar1 + -1;
    }
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar1 = _g_PtclShared1;
  } while (uVar5 < 0x3b);
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 4);
    maybe_List_Append(0x4307a0,iVar1);
    iVar1 = iVar4;
  }
  Mem_Free(_g_Particles);
  Mem_Free(_g_ParticlesB);
  maybe_Heap_Release(0x4308a8);
  if (_g_ParticlesC != 0) {
    Mem_Free();
  }
  _g_ParticlesC = 0;
  return;
}

// 0x001a8ce0  size 0x278
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PtclSys_Init(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  
  _g_ParticlesC = Mem_Alloc16(0x1e000,param_1);
  uVar5 = 0;
  iVar3 = 0;
  do {
    iVar2 = _g_ParticlesC + iVar3;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x9c) = 0;
    maybe_List_Remove(0x4307a0,_g_ParticlesC + iVar3);
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + 0xa0;
  } while (uVar5 < 0x300);
  _s_PtclSysVar1 = 0;
  _s_PtclSysVar5 = 0;
  _s_PtclSysVar2 = 0;
  _s_PtclSysVar3 = 1;
  maybe_Heap_Create(0x4308a8,0x18500,0x430750);
  _g_Particles = Mem_AllocAligned(0x9000,0x10,0x4308a8);
  _g_ParticlesB = Mem_AllocAligned(0x9000,0x10,0x4308a8);
  uVar5 = 0;
  iVar3 = 0x4307a0;
  do {
    lVar1 = maybe_operator_new_arr_heap(0x160,0x4308a8);
    if (lVar1 != 0) {
      List_ctor(lVar1,0);
      *(undefined4 *)lVar1 = &DAT_0036e580;
    }
    *(undefined4 **)(iVar3 + 0x1c) = (undefined4 *)lVar1;
    iVar2 = *(int *)(iVar3 + 0x1c);
    *(undefined4 *)(iVar2 + 0x14) = 1;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(uint *)(iVar2 + 0x20) = uVar5;
    *(undefined4 *)(iVar2 + 0x118) = 0;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x88) = 0;
    *(undefined4 *)(iVar2 + 0x120) = 0;
    *(undefined4 *)(iVar2 + 0x11c) = 0;
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    *(undefined4 *)(iVar2 + 0xc4) = 0;
    *(undefined4 *)(iVar2 + 200) = 0;
    *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
    maybe_Vu0_UnitMatrix(iVar2 + 0xd0);
    uVar5 = uVar5 + 1;
    *(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0x14) = 0;
    iVar3 = iVar3 + 4;
  } while (uVar5 < 0x3b);
  uVar5 = 0;
  puVar6 = (undefined4 *)0x4308e0;
  puVar4 = (undefined4 *)0x430ce0;
  do {
    fVar8 = ((float)uVar5 / 256.0) * 2.0 * 3.1415927;
    if (3.1415927 < fVar8) {
      fVar8 = fVar8 - 6.2831855;
    }
    uVar7 = cosf(fVar8);
    *puVar6 = uVar7;
    uVar7 = sinf(fVar8);
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 1;
    *puVar4 = uVar7;
    puVar4 = puVar4 + 1;
  } while (uVar5 < 0x100);
  _s_PtclSysVar4 = 0;
  return;
}

// 0x001a8f60  size 0x8
void Asset_Nop_3(void)

{
  return;
}

// 0x001a8f70  size 0x8
void Asset_Nop_4(void)

{
  return;
}

// 0x001a8f80  size 0x64
long PtclMgr_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    maybe_Heap_dtor((int)param_1 + 0x108,0xffffffffffffffff);
    maybe_List_dtor(param_1,0xffffffffffffffff);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001a8ff0  size 0x24
void Ui_Shutdown(void)

{
  UiRes_FreeAll();
  UiMgr_FreeSystem();
  return;
}

// 0x001a9020  size 0x34
/* font/ui heaps 0x2000 */

void Ui_Init(undefined8 param_1)

{
  UiRes_LoadAll(param_1,0x2000,0x2000);
  UiMgr_LoadSystem(param_1);
  return;
}

// 0x001a9060  size 0xb8
void View_DrawFadeSprite(uint param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [20];
  undefined *puStack_2c;
  
  Pkt_Init(auStack_40,1,2,0);
  puStack_2c = &g_Views + (param_1 & 0xff) * 0x5c0;
  Pkt_SubmitToChain(auStack_40,0);
  Pkt_End(auStack_40);
  uVar1 = Pkt_AllocVif(auStack_40,0x36,0x13000000);
  maybe_Gs_BuildSpriteRegs(uVar1,&g_Views + (param_1 & 0xff) * 0x5c0,0x3100c,0x3100c,0x58,0,param_2)
  ;
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x001a9120  size 0xe0
void View_DrawFullscreen(uint param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [20];
  undefined *puStack_2c;
  
  Pkt_Init(auStack_40,1,2,0);
  puStack_2c = &g_Views + (param_1 & 0xff) * 0x5c0;
  Pkt_SubmitToChain(auStack_40,0);
  Pkt_End(auStack_40);
  uVar1 = Pkt_AllocVif(auStack_40,0x59,0x13000000);
  maybe_Gs_BuildFullscreenQuad
            (uVar1,&g_Views + (param_1 & 0xff) * 0x5c0,&g_Views + (param_2 & 0xff) * 0x5c0,0x33001,
             0x58,param_3);
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x001a9210  size 0x1c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 14 objects of 0x5c0 at 0x431100 */

void maybe_Game_UpdateObjects(void)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  byte abStack_8 [8];
  
  uVar7 = 0;
  do {
    View_ResetDirty(&g_Views + (uVar7 & 0xff) * 0x5c0);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0xe);
  Gfx_EndFrame();
  pbVar5 = (byte *)0x36e838;
  pbVar3 = abStack_8;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
    *pbVar3 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar3 = pbVar3 + 1;
  } while (0 < iVar2);
  uVar7 = 0;
  pbVar3 = abStack_8;
  iVar2 = _g_PktShared1 * 0x28c80 + (_g_PktShared2 & 1) * 0x51900 + 0x388200;
  do {
    iVar4 = (uint)*pbVar3 * 0x5c0;
    puVar6 = (uint *)(iVar4 + 0x431160);
    if (*pbVar3 == 7) {
      _s_Game_UpdateObjects_1 = *(ushort *)(iVar2 + 0xfd50) & 0x1ff;
      _s_Game_UpdateObjects_2 = _s_Game_UpdateObjects_1;
    }
    else {
      uVar1 = *(ushort *)(iVar2 + 0xfd50);
      *puVar6 = *(ushort *)(iVar2 + 0xfd40) & 0x1ff;
      *(uint *)(&s_Course_DrawReflectionPlane_8 + iVar4) = uVar1 & 0x1ff;
    }
    uVar7 = uVar7 + 1;
    pbVar3 = pbVar3 + 1;
    *(ushort *)(iVar4 + 0x4315a0) = *(ushort *)(iVar4 + 0x4315a0) & 0xfe00 | (ushort)*puVar6 & 0x1ff
    ;
    *(ushort *)(iVar4 + 0x4315b0) =
         *(ushort *)(iVar4 + 0x4315b0) & 0xfe00 |
         (ushort)*(undefined4 *)(&s_Course_DrawReflectionPlane_8 + iVar4) & 0x1ff;
    *(ushort *)(iVar4 + 0x4315e0) = *(ushort *)(iVar4 + 0x4315e0) & 0xfe00 | (ushort)*puVar6 & 0x1ff
    ;
    *(ushort *)(iVar4 + 0x4315f0) =
         *(ushort *)(iVar4 + 0x4315f0) & 0xfe00 |
         (ushort)*(undefined4 *)(&s_Course_DrawReflectionPlane_8 + iVar4) & 0x1ff;
  } while (uVar7 < 5);
  return;
}

// 0x001a93d0  size 0x44
void Render_EndScene(void)

{
  TexSlot_Free();
  DmaChain_Destroy(4);
  DmaChain_Destroy(3);
  DmaChain_Destroy(0);
  DmaChain_Destroy(1);
  DmaChain_Destroy(2);
  return;
}

// 0x001a9420  size 0x1a8
void Render_BeginScene(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = param_1[1];
  }
  else {
    DmaChain_Create(0,2,*param_1,0xc);
    iVar1 = param_1[1];
  }
  if (iVar1 == 0) {
    iVar1 = param_1[2];
  }
  else {
    DmaChain_Create(1,2,iVar1,0xe);
    DmaChain_SetFlag(1,0,0);
    DmaChain_SetFlag(1,1,1);
    DmaChain_SetFlag(1,2,1);
    DmaChain_SetFlag(1,3,1);
    DmaChain_SetFlag(1,4,1);
    DmaChain_SetFlag(1,5,1);
    DmaChain_SetFlag(1,6,1);
    DmaChain_SetFlag(1,7,1);
    DmaChain_SetFlag(1,8,0);
    DmaChain_SetFlag(1,9,1);
    DmaChain_SetFlag(1,10,0);
    DmaChain_SetFlag(1,0xb,1);
    DmaChain_SetFlag(1,0xc,0);
    DmaChain_SetFlag(1,0xd,1);
    iVar1 = param_1[2];
  }
  if (iVar1 == 0) {
    iVar1 = param_1[3];
  }
  else {
    DmaChain_Create(2,2,iVar1,0x20);
    iVar1 = param_1[3];
  }
  if (iVar1 == 0) {
    iVar1 = param_1[4];
  }
  else {
    DmaChain_Create(3,2,iVar1,1);
    iVar1 = param_1[4];
  }
  if (iVar1 != 0) {
    DmaChain_Create(4,2,iVar1,1);
  }
  TexSlot_Alloc(0x11);
  return;
}

// 0x001a95d0  size 0xf4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Render_SetupViews(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  puVar4 = &DAT_00317f00;
  _g_RaceIntroShared1 = _g_RectShared4;
  uVar2 = 0;
  _s_RenderVar1 = _g_RectShared5;
  do {
    iVar3 = (uVar5 & 0xff) * 0x5c0;
    if ((_s_RenderVar3 & 1 << (uVar5 & 0x1f)) != 0) {
      uVar2 = View_SetupForCourse(&g_Views + iVar3);
    }
    uVar1 = *(undefined4 *)(puVar4 + 4);
    uVar5 = uVar5 + 1;
    *(undefined1 *)(iVar3 + 0x431688) = *puVar4;
    puVar4 = puVar4 + 8;
    *(undefined4 *)(iVar3 + 0x43168c) = uVar1;
  } while (uVar5 < 0xe);
  if (uVar2 <= _g_RaceIntroShared1) {
    uVar2 = _g_RaceIntroShared1;
  }
  _g_RaceIntroShared1 = uVar2;
  Light_SetEnabledFlag(0x436180,0);
  _g_RenderShared1 = _g_RaceIntroShared1;
  _g_RaceIntroShared1 = _g_RaceIntroShared1 + 0x20;
  return;
}

// 0x001a96d0  size 0xf8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Render_SetVideoMode(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    _s_RenderVar3 = param_2;
  }
  lVar1 = Str_CompareN(0x4310e0,param_1,0x14);
  if (lVar1 == 0) {
    if (param_3 != 0) {
      Render_SetupViews(0);
    }
  }
  else {
    maybe_Mem_CopyQwords(0x4310e0,param_1,0x14);
    Gfx_ApplyVideoSettings(0x4310e0,param_3);
  }
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      View_ResetDirty(&g_Views + (uVar2 & 0xff) * 0x5c0);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xe);
  }
  if (param_3 != 0) {
    maybe_Light_InitDefaults(0x436180);
  }
  return;
}

// 0x001a97d0  size 0x120
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Render_SetInterlace(byte param_1)

{
  uint uVar1;
  int iVar2;
  byte bStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  uint uStack_14;
  undefined4 uStack_10;
  
  _g_RenderShared2 = (uint)param_1;
  uVar1 = (uint)s_RenderVar2;
  iVar2 = uVar1 * 0x14;
  uStack_1e = (&DAT_00317f72)[iVar2];
  uStack_1f = (&DAT_00317f71)[iVar2];
  _s_RenderVar2 = (uint)s_RenderVar2;
  uStack_1d = (&DAT_00317f73)[iVar2];
  uStack_1c = (&DAT_00317f74)[iVar2];
  uStack_10 = (&DAT_00317f80)[uVar1 * 5];
  uStack_1b = (&DAT_00317f75)[iVar2];
  uStack_14 = (&DAT_00317f7c)[uVar1 * 5] | 1;
  uStack_1a = (&DAT_00317f76)[iVar2];
  uStack_19 = (&DAT_00317f77)[iVar2];
  uStack_18 = (&DAT_00317f78)[iVar2];
  uStack_16 = (&DAT_00317f7a)[iVar2];
  uStack_17 = (&DAT_00317f79)[iVar2];
  uStack_15 = (&DAT_00317f7b)[iVar2];
  bStack_20 = param_1;
  Render_SetVideoMode(&bStack_20,0,0);
  return;
}

// 0x001a98f0  size 0x120
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Render_SetSceneMode(uint param_1,undefined8 param_2)

{
  int iVar1;
  byte bStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  uint uStack_14;
  undefined4 uStack_10;
  
  _s_RenderVar2 = param_1 & 0xff;
  iVar1 = _s_RenderVar2 * 0x14;
  uStack_1f = (&DAT_00317f71)[iVar1];
  uStack_1e = (&DAT_00317f72)[iVar1];
  bStack_20 = g_RenderShared2;
  _g_RenderShared2 = (uint)g_RenderShared2;
  uStack_1d = (&DAT_00317f73)[iVar1];
  uStack_1c = (&DAT_00317f74)[iVar1];
  uStack_1b = (&DAT_00317f75)[iVar1];
  uStack_19 = (&DAT_00317f77)[iVar1];
  uStack_1a = (&DAT_00317f76)[iVar1];
  uStack_18 = (&DAT_00317f78)[iVar1];
  uStack_17 = (&DAT_00317f79)[iVar1];
  uStack_10 = (&DAT_00317f80)[_s_RenderVar2 * 5];
  uStack_14 = (&DAT_00317f7c)[_s_RenderVar2 * 5] | 1;
  uStack_16 = (&DAT_00317f7a)[iVar1];
  uStack_15 = (&DAT_00317f7b)[iVar1];
  Render_SetVideoMode(&bStack_20,param_2,1);
  return;
}

// 0x001a9a10  size 0x28
void Render_Shutdown(void)

{
  Gfx_AddEndFrameCallback(0x436310);
  Gfx_ShutdownAll();
  return;
}

// 0x001a9a40  size 0x138
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Render_Init(undefined4 param_1)

{
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  uint uStack_14;
  undefined4 uStack_10;
  
  _g_RenderShared1 = 0;
  _g_RaceIntroShared1 = 0;
  _s_RenderVar1 = 0;
  _s_RenderVar2 = 0;
  _g_RenderShared2 = 0;
  _s_Render_Init_1 = param_1;
  Mem_Set16(0x4310e0,0x55,0x14);
  _s_RenderVar3 = 0;
  Gfx_InitAll(_s_Render_Init_1);
  _s_Render_Init_2 = Render_SetupViews;
  _s_Render_Init_3 = 0;
  Gfx_RemoveEndFrameCallback(0x436310);
  _s_RenderVar2 = 0;
  uStack_1f = DAT_00317f71;
  uStack_1e = DAT_00317f72;
  uStack_18 = DAT_00317f78;
  uStack_1d = DAT_00317f73;
  uStack_17 = DAT_00317f79;
  uStack_1c = DAT_00317f74;
  uStack_16 = DAT_00317f7a;
  uStack_1b = DAT_00317f75;
  uStack_15 = DAT_00317f7b;
  uStack_1a = DAT_00317f76;
  uStack_19 = DAT_00317f77;
  uStack_14 = DAT_00317f7c | 1;
  uStack_10 = DAT_00317f80;
  uStack_20 = (undefined1)_g_RenderShared2;
  _g_RenderShared2 = _g_RenderShared2 & 0xff;
  Render_SetVideoMode(&uStack_20,0,1);
  return;
}

// 0x001a9b80  size 0x60
long Render_Task_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e5b8;
    maybe_ListNode_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001a9be0  size 0x64
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ResPool_CountUsedA(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (_g_AssetShared3 != 0) {
    iVar1 = _g_AssetShared4;
    do {
      if (*(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0x14) == 0) {
        return _g_AssetShared4 + uVar2 * 0xa0;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa0;
    } while (uVar2 < _g_AssetShared3);
  }
  return 0;
}

// 0x001a9c50  size 0x5c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ResPool_CountUsedB(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (_g_AssetShared1 != 0) {
    iVar1 = _g_AssetShared2;
    do {
      if (*(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0x14) == 0) {
        return _g_AssetShared2 + uVar2 * 0x80;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x80;
    } while (uVar2 < _g_AssetShared1);
  }
  return 0;
}

// 0x001a9cb0  size 0x240
/* WARNING: Removing unreachable block (ram,0x001a9d60) */
/* WARNING: Removing unreachable block (ram,0x001a9d9c) */
/* WARNING: Removing unreachable block (ram,0x001a9dac) */
/* WARNING: Removing unreachable block (ram,0x001a9dcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ResPool_Load(byte param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  for (lVar1 = Chunk_FindNext(0x436470,param_1,param_2,_g_CourseAssetsB); lVar1 != 0;
      lVar1 = Chunk_FindNext(0x436470,param_1,param_2,(int)lVar1 + *(int *)((int)lVar1 + 4))) {
    if (param_1 < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(param_1) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
      }
    }
  }
  lVar1 = Chunk_Find(0x436470,param_1);
  if ((lVar1 != 0) && (param_1 < 7)) {
    uVar3 = (undefined4)param_2;
    iVar2 = (int)lVar1;
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      maybe_Mem_CopyQwords(iVar2 + 0x29,param_3,1);
      maybe_Course_GetItemB(lVar1);
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
      break;
    case 1:
      maybe_Mem_CopyQwords(iVar2 + 0x2c,param_3,0x50);
      maybe_Course_GetItemB(lVar1);
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
      break;
    case 2:
      maybe_Mem_CopyQwords(iVar2 + 0x29,param_3,10);
      maybe_Course_GetItemB(lVar1);
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
      break;
    case 3:
      maybe_Mem_CopyQwords(iVar2 + 0x2c,param_3,0x20);
      maybe_Course_GetItemB(lVar1);
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
      break;
    case 4:
      maybe_Mem_CopyQwords(iVar2 + 0x2c,param_3,0x20);
      maybe_Course_GetItemB(lVar1);
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
    }
  }
  return lVar1;
}

// 0x001a9ef0  size 0x28
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ResPool_Get(int param_1)

{
  int iVar1;
  
  if (_g_ResPoolShared1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = _s_ResPool_Get_1 + param_1 * 0x80;
  }
  return iVar1;
}

// 0x001a9f20  size 0xe0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Asset_FreeCourseCommon(void)

{
  Course_Nop(0x436470);
  if (_g_CourseAssetsC != 0) {
    Mem_Free();
    _g_CourseAssetsC = 0;
  }
  if (_g_CourseAssetsD != 0) {
    Mem_Free();
    _g_CourseAssetsD = 0;
  }
  if (_g_CourseAssets != 0) {
    Mem_Free();
    _g_CourseAssets = 0;
  }
  if (_s_AssetVar2 != 0) {
    Mem_Free();
    _s_AssetVar2 = 0;
  }
  if (_s_AssetVar3 != 0) {
    Mem_Free();
    _s_AssetVar3 = 0;
  }
  if (_g_CourseAssetsB != 0) {
    Mem_Free();
    _g_CourseAssetsB = 0;
  }
  return;
}

// 0x001aa000  size 0xb98
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Asset_LoadCourseCommon(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iStack_80;
  int iStack_70;
  uint uStack_38;
  uint uStack_34;
  
  uStack_34 = 0;
  uStack_38 = 0;
  uVar2 = *(int *)(param_2 + 4) + *(int *)(param_2 + 0xc);
  Mem_Set16(0x436470,0,0x68);
  g_CarAssetShared4 = *param_2;
  if ((g_CarAssetShared4 == '\x02') || (g_CarAssetShared4 == '\x01')) {
    _g_CarAssetShared1 = 4;
    _s_CarAssetLod = 1;
    _g_WheelAssetShared1 = 1;
    _g_CarAssetShared2 = 1;
    _g_WheelAssetShared2 = 3;
    _g_CarAssetShared3 = 3;
  }
  else if (g_CarAssetShared4 == '\0') {
    _s_CarAssetLod = 0;
    _g_CarAssetShared1 = 0;
    _g_WheelAssetShared1 = 0;
    _g_WheelAssetShared2 = 0;
    _g_CarAssetShared2 = 0;
    _g_CarAssetShared3 = 0;
  }
  _s_Asset_LoadCourseCommon_2 = *(undefined4 *)(param_2 + 4);
  _s_Asset_LoadCourseCommon_3 = *(undefined4 *)(param_2 + 8);
  _s_Asset_LoadCourseCommon_4 = *(undefined4 *)(param_2 + 0xc);
  _s_Asset_LoadCourseCommon_5 = *(undefined4 *)(param_2 + 0x10);
  iVar12 = uVar2 * 0xa0 + *(int *)(param_2 + 4) * 0xcc0 + *(int *)(param_2 + 8) * 400 +
           *(int *)(param_2 + 0xc) * 0x2d0 + *(int *)(param_2 + 0x10) * 0x50;
  _s_Asset_LoadCourseCommon_1 = uVar2;
  _g_CourseAssetsB = Mem_Alloc16(iVar12,param_1);
  _s_Asset_LoadCourseCommon_6 = _g_CourseAssetsB + iVar12;
  _s_Asset_LoadCourseCommon_8 = _g_CourseAssetsB + uVar2 * 0xa0;
  uVar14 = 0xff;
  _s_Asset_LoadCourseCommon_9 = _s_Asset_LoadCourseCommon_8 + *(int *)(param_2 + 4) * 0xcc0;
  _s_Asset_LoadCourseCommon_10 = _s_Asset_LoadCourseCommon_9 + *(int *)(param_2 + 8) * 0x80;
  _s_Asset_LoadCourseCommon_11 = _s_Asset_LoadCourseCommon_10 + *(int *)(param_2 + 8) * 0xa0;
  _s_Asset_LoadCourseCommon_12 = _s_Asset_LoadCourseCommon_11 + *(int *)(param_2 + 8) * 0x70;
  _s_Asset_LoadCourseCommon_13 = _s_Asset_LoadCourseCommon_12 + *(int *)(param_2 + 0xc) * 0x2d0;
  uVar11 = 0;
  _s_Asset_LoadCourseCommon_7 = _g_CourseAssetsB;
  uVar3 = 0;
  do {
    uVar19 = 0;
    uVar13 = 0;
    uVar10 = _s_CarAssetLod;
    if (_s_CarAssetLod <= _g_CarAssetShared1) {
      do {
        if ((g_CarAssetShared4 != '\x01') || (((uVar10 != 0 && (uVar10 != 2)) && (uVar10 != 3)))) {
          iVar12 = Arc_GetFileSize(uVar14 + uVar10,uVar14 + uVar10,0);
          uVar13 = uVar13 + iVar12;
          uVar19 = uVar19 + (iVar12 + 0x7ffU & 0xfffff800);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 <= _g_CarAssetShared1);
    }
    if (uVar13 <= uVar11) {
      uVar13 = uVar11;
    }
    if (uVar19 <= uVar3) {
      uVar19 = uVar3;
    }
    uVar14 = uVar14 + 5;
    uVar11 = uVar13;
    uVar3 = uVar19;
  } while (uVar14 < 0x69e);
  for (uVar11 = (*param_2 != '\0') + 0x6a0; uVar11 < 0x6a8; uVar11 = uVar11 + 2) {
    uVar3 = Arc_GetFileSize(uVar11,uVar11,0);
    if (uStack_34 < uVar3) {
      uStack_34 = Arc_GetFileSize(uVar11,uVar11,0);
    }
  }
  uVar3 = uStack_34 + 0x7ff & 0xfffff800;
  for (uVar11 = (*param_2 != '\0') + 0x6a8; uVar11 < 0x96e; uVar11 = uVar11 + 2) {
    uVar14 = Arc_GetFileSize(uVar11,uVar11,0);
    if (uStack_38 < uVar14) {
      uStack_38 = Arc_GetFileSize(uVar11,uVar11,0);
    }
  }
  uVar18 = uStack_38 + 0x7ff & 0xfffff800;
  iVar12 = Arc_GetFileSize(0xfe,0xfe,0);
  uVar10 = iVar12 + 0x7ffU & 0xfffff800;
  uVar11 = Arc_GetFileSize(0x69f,0x69f,0);
  uVar4 = uVar11 + 0x7ff & 0xfffff800;
  iVar5 = Arc_GetFileSize(0x96e,0x98d,0);
  uVar6 = iVar5 + 0x7ffU & 0xfffff800;
  iVar5 = Arc_GetFileSize(0x98e,0x98e,0);
  uVar7 = iVar5 + 0x7ffU & 0xfffff800;
  uVar14 = uVar10;
  if (uVar10 < uVar19) {
    uVar14 = uVar19;
  }
  if (uVar14 < uVar4) {
    uVar14 = uVar4;
  }
  if (uVar14 < uVar3) {
    uVar14 = uVar3;
  }
  if (uVar14 < uVar18) {
    uVar14 = uVar18;
  }
  if (uVar14 < uVar6) {
    uVar14 = uVar6;
  }
  if (uVar14 < uVar7) {
    uVar14 = uVar7;
  }
  if (*param_2 == '\x02') {
    _g_CourseAssets = Mem_AllocAligned(uVar14,0x40,param_1);
  }
  else {
    _g_CourseAssets = 0;
  }
  _g_CourseAssetsC = 0;
  _g_CourseAssetsD = 0;
  _g_AssetShared1 = 0;
  _g_AssetShared2 = 0;
  _g_AssetShared3 = 0;
  _g_AssetShared4 = 0;
  if (*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18) != 0) {
    _g_CourseAssetsC =
         Mem_Alloc16(*(int *)(param_2 + 0x14) * 0x80 + *(int *)(param_2 + 0x18) * 0xa0,param_1);
    _g_AssetShared1 = *(uint *)(param_2 + 0x14);
    _g_AssetShared3 = *(uint *)(param_2 + 0x18);
    _g_AssetShared4 = _g_CourseAssetsC + *(int *)(param_2 + 0x14) * 0x80;
    uVar14 = (uVar3 + 0x1000) * *(int *)(param_2 + 0x14);
    _g_AssetShared2 = _g_CourseAssetsC;
    _g_CourseAssetsD =
         Mem_AllocAligned((uVar14 | (int)uVar14 >> 0x1f) +
                          (uVar18 + 0x1000) * *(int *)(param_2 + 0x18),0x40,param_1);
    uVar14 = 0;
    iVar5 = _g_CourseAssetsD;
    if (_g_AssetShared1 != 0) {
      iVar20 = 0;
      do {
        iVar8 = _g_AssetShared2 + iVar20;
        maybe_Course_InitHeader(iVar8,3,0x80);
        Course_SetField18(iVar8,uVar3 + 0x1000,iVar5);
        uVar14 = uVar14 + 1;
        iVar5 = iVar5 + uVar3 + 0x1000;
        iVar20 = iVar20 + 0x80;
      } while (uVar14 < _g_AssetShared1);
    }
    uVar14 = 0;
    if (_g_AssetShared3 != 0) {
      iVar20 = 0;
      do {
        iVar8 = _g_AssetShared4 + iVar20;
        maybe_Course_InitHeader(iVar8,4,0xa0);
        Course_SetField18(iVar8,uVar18 + 0x1000,iVar5);
        uVar14 = uVar14 + 1;
        iVar5 = iVar5 + uVar18 + 0x1000;
        iVar20 = iVar20 + 0xa0;
      } while (uVar14 < _g_AssetShared3);
      cVar1 = *param_2;
      goto LAB_001aa5ac;
    }
  }
  cVar1 = *param_2;
LAB_001aa5ac:
  if (cVar1 == '\x02') {
    iVar12 = iVar12 + 0x3b80;
  }
  else {
    iVar12 = uVar10 + 0xa000;
    uVar11 = uVar4;
  }
  uVar9 = Mem_AllocAligned(iVar12 + uVar11 + 0x500,0x40,param_1);
  _s_AssetVar3 = (int)uVar9;
  maybe_Course_InitHeader(0x436320,0,0xc0);
  Course_SetField18(0x436320,iVar12,uVar9);
  _g_DriverAssetShared2 = 0;
  _g_ResPoolShared1 = 0;
  iVar12 = _s_AssetVar3 + iVar12;
  maybe_Course_InitHeader(0x4363e0,0,0x8c);
  Course_SetField18(0x4363e0,uVar11 + 0x500,iVar12);
  _s_AssetVar1 = 0;
  if (*param_2 == '\x02') {
    iVar12 = uVar13 + 0x1680;
    iStack_70 = uStack_34 + 0x280;
    iVar5 = uStack_38 + 0x500;
  }
  else {
    iVar12 = uVar19 + 0x3f00;
    iStack_70 = uVar3 + 0x1000;
    iVar5 = uVar18 + 0x1000;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar20 = 0;
  }
  else {
    iVar20 = uVar6 + 0x6000;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    iStack_80 = 0;
  }
  else {
    iStack_80 = uVar7 + 0x2000;
  }
  iVar8 = Mem_AllocAligned(iVar12 * *(int *)(param_2 + 4) + iStack_70 * *(int *)(param_2 + 8) +
                           iVar5 * *(int *)(param_2 + 8) + iVar20 * *(int *)(param_2 + 0xc) +
                           iStack_80 * *(int *)(param_2 + 0x10),0x40,param_1);
  uVar11 = 0;
  _s_AssetVar2 = iVar8;
  if (uVar2 == 0) {
    iVar15 = *(int *)(param_2 + 4);
  }
  else {
    iVar15 = 0;
    do {
      iVar17 = _s_Asset_LoadCourseCommon_7 + iVar15;
      maybe_Course_InitHeader(iVar17,0,0xa0);
      Course_SetField18(iVar17,0,iVar8);
      uVar11 = uVar11 + 1;
      *(undefined4 *)(iVar17 + 0x2c) = 0;
      iVar15 = iVar15 + 0xa0;
    } while (uVar11 < uVar2);
    iVar15 = *(int *)(param_2 + 4);
  }
  uVar2 = 0;
  if (iVar15 == 0) {
    iVar12 = *(int *)(param_2 + 8);
  }
  else {
    iVar15 = 0;
    do {
      iVar17 = _s_Asset_LoadCourseCommon_8 + iVar15;
      maybe_Course_InitHeader(iVar17,1,0xcc0);
      Course_SetField18(iVar17,iVar12,iVar8);
      uVar2 = uVar2 + 1;
      iVar8 = iVar8 + iVar12;
      iVar15 = iVar15 + 0xcc0;
    } while (uVar2 < *(uint *)(param_2 + 4));
    iVar12 = *(int *)(param_2 + 8);
  }
  uVar2 = 0;
  if (iVar12 == 0) {
    iVar12 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar15 = 0;
    iVar12 = 0;
    iVar17 = 0;
    do {
      iVar16 = _s_Asset_LoadCourseCommon_9 + iVar15;
      maybe_Course_InitHeader(iVar16,3,0x80);
      Course_SetField18(iVar16,iStack_70,iVar8);
      iVar16 = _s_Asset_LoadCourseCommon_10 + iVar12;
      maybe_Course_InitHeader(iVar16,4,0xa0);
      Course_SetField18(iVar16,iVar5,iVar8 + iStack_70);
      iVar8 = iVar8 + iStack_70 + iVar5;
      iVar16 = _s_Asset_LoadCourseCommon_11 + iVar17;
      maybe_Course_InitHeader(iVar16,2,0x70);
      Course_SetField18(iVar16,0,iVar8);
      *(undefined4 *)(iVar16 + 0x34) = 0;
      uVar2 = uVar2 + 1;
      iVar15 = iVar15 + 0x80;
      iVar12 = iVar12 + 0xa0;
      iVar17 = iVar17 + 0x70;
    } while (uVar2 < *(uint *)(param_2 + 8));
    iVar12 = *(int *)(param_2 + 0xc);
  }
  uVar2 = 0;
  if (iVar12 == 0) {
    iVar12 = *(int *)(param_2 + 0x10);
  }
  else {
    iVar12 = 0;
    do {
      iVar5 = _s_Asset_LoadCourseCommon_12 + iVar12;
      maybe_Course_InitHeader(iVar5,5,0x2d0);
      Course_SetField18(iVar5,iVar20,iVar8);
      uVar2 = uVar2 + 1;
      iVar8 = iVar8 + iVar20;
      iVar12 = iVar12 + 0x2d0;
    } while (uVar2 < *(uint *)(param_2 + 0xc));
    iVar12 = *(int *)(param_2 + 0x10);
  }
  uVar2 = 0;
  if (iVar12 != 0) {
    iVar12 = 0;
    do {
      iVar5 = _s_Asset_LoadCourseCommon_13 + iVar12;
      maybe_Course_InitHeader(iVar5,6,0x50);
      Course_SetField18(iVar5,iStack_80,iVar8);
      uVar2 = uVar2 + 1;
      iVar8 = iVar8 + iStack_80;
      iVar12 = iVar12 + 0x50;
    } while (uVar2 < *(uint *)(param_2 + 0x10));
  }
  Chunk_SetRange(0x436470,_g_CourseAssetsB,_s_Asset_LoadCourseCommon_6);
  return;
}

// 0x001aaba0  size 0xb4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Asset_OnCourseTexLoaded
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  Course_ClearCount(param_4);
  if ((g_CarAssetShared4 != '\x02') && (lVar1 = Course_GetField_24(param_4), lVar1 == 0)) {
    Arena_Alloc(param_4,param_3);
  }
  iVar3 = _g_DriverAssetShared1 + _g_RaceIntroShared1;
  uVar2 = Gut_PackGetEntry(param_2,0,0);
  Res_UploadTexture(param_4,(int)param_4 + 0x2c,uVar2,0,0,iVar3,0,0);
  *(undefined4 *)((int)param_4 + 8) = 0;
  return;
}

// 0x001aac60  size 0xc8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Asset_LoadCourseTex(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = 0;
  maybe_Course_GetItemB();
  iVar4 = (int)param_1;
  *(int *)(iVar4 + 0xc) = param_2;
  lVar3 = Course_GetField_24(param_1);
  if (lVar3 != 0) {
    iVar2 = Course_GetField_24(param_1);
    iVar2 = *(int *)(iVar2 + 0x20);
  }
  if (g_CarAssetShared4 == '\x02') {
    uVar1 = _g_CourseAssets;
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 0x20);
  }
  *(undefined4 *)(iVar4 + 8) = 1;
  if (iVar2 == 0) {
    Arc_LoadFileEx(param_2 + 0x98e,uVar1,0x1aaba0,param_1,0,0);
  }
  else {
    Arc_LoadFile(param_2 + 0x98e,iVar2,0x1aaba0,param_1);
  }
  return;
}

// 0x001aad30  size 0x30
void Asset_GetLightColor(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x38) + param_3 * 0x10);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = 0x3f800000;
  return;
}

// 0x001aad60  size 0x90
void Asset_GetSpotLight(int param_1,float *param_2,float *param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  
  pfVar2 = (float *)(*(int *)(param_1 + 0x34) + param_4 * 0x20);
  iVar1 = *(int *)(param_1 + 0x34) + (param_4 * 2 + 1) * 0x10;
  *param_2 = *pfVar2 * 0.1;
  param_2[1] = pfVar2[1] * 0.1;
  param_2[2] = pfVar2[2] * 0.1;
  param_2[3] = 1.0;
  *param_3 = *pfVar2 * 0.017453292;
  param_3[1] = *(float *)(iVar1 + 4) * 0.017453292;
  param_3[2] = *(float *)(iVar1 + 8) * 0.017453292;
  param_3[3] = 1.0;
  return;
}

// 0x001aadf0  size 0x80
void Asset_GetPointLight(int param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar2 = (float *)(*(int *)(param_1 + 0x30) + param_4 * 0x20);
  pfVar1 = (float *)(*(int *)(param_1 + 0x30) + (param_4 * 2 + 1) * 0x10);
  *param_2 = *pfVar2 * 0.1;
  param_2[1] = pfVar2[1] * 0.1;
  param_2[2] = pfVar2[2] * 0.1;
  param_2[3] = 1.0;
  *param_3 = *pfVar1 * 0.1;
  param_3[1] = pfVar1[1] * 0.1;
  param_3[2] = pfVar1[2] * 0.1;
  param_3[3] = 1.0;
  return;
}

// 0x001aae70  size 0xa8
void Asset_FindNearestLight(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  iVar6 = 0;
  iVar5 = 3;
  iVar4 = 2;
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = 0x3f800000;
  do {
    pfVar3 = (float *)(puVar1 + iVar5 * 4);
    iVar6 = iVar6 + 1;
    puVar2 = puVar1 + iVar4 * 4;
    iVar5 = iVar5 + 2;
    iVar4 = iVar4 + 2;
    *param_3 = -*pfVar3;
    param_3[1] = -pfVar3[1];
    param_3[2] = -pfVar3[2];
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
    *param_4 = *puVar2;
    param_4[1] = puVar2[1];
    param_4[2] = puVar2[2];
    param_4[3] = 0x3f800000;
    param_4 = param_4 + 4;
  } while (iVar6 < 3);
  return;
}

// 0x001aaf20  size 0x16c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Asset_SetupEnvModels(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar7 = 0;
  iVar1 = _g_DriverAssetShared1 + _g_RaceIntroShared1;
  iVar5 = param_1;
  do {
    uVar2 = Gut_PackGetEntry(param_2,uVar7,0);
    *(undefined4 *)(iVar5 + 0x2c) = uVar2;
    uVar7 = uVar7 + 1;
    iVar5 = iVar5 + 4;
  } while (uVar7 < 4);
  uVar7 = 0;
  iVar8 = 4;
  iVar9 = 5;
  iVar10 = 6;
  iVar5 = param_1;
  iVar6 = param_1;
  do {
    lVar3 = Gut_PackGetEntry(param_2,iVar8,1);
    if (lVar3 != 0) {
      Model_Relocate(lVar3);
    }
    *(int *)(iVar5 + 0x3c) = (int)lVar3;
    uVar4 = Gut_PackGetEntry(param_2,iVar9,1);
    Res_UploadTexture(param_1,iVar6 + 0x68,uVar4,0,1,iVar1,0,0);
    uVar4 = Gut_PackGetEntry(param_2,iVar10,1);
    Res_UploadTexture(param_1,iVar6 + 0x19c,uVar4,0,0,iVar1,0,0);
    uVar7 = uVar7 + 1;
    iVar8 = iVar8 + 3;
    iVar5 = iVar5 + 4;
    iVar9 = iVar9 + 3;
    iVar6 = iVar6 + 0x1c;
    iVar10 = iVar10 + 3;
  } while (uVar7 < 0xb);
  return;
}

// 0x001ab090  size 0x80
void Asset_OnEnvLoaded(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  Course_ClearCount(param_4);
  if ((g_CarAssetShared4 != '\x02') && (lVar1 = Course_GetField_24(param_4), lVar1 == 0)) {
    Arena_Alloc(param_4,param_3);
  }
  Asset_SetupEnvModels(param_4,param_2);
  *(undefined4 *)((int)param_4 + 8) = 0;
  return;
}

// 0x001ab110  size 0xc8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Asset_LoadEnv(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = 0;
  maybe_Course_GetItemB();
  iVar4 = (int)param_1;
  *(int *)(iVar4 + 0xc) = param_2;
  lVar3 = Course_GetField_24(param_1);
  if (lVar3 != 0) {
    iVar2 = Course_GetField_24(param_1);
    iVar2 = *(int *)(iVar2 + 0x20);
  }
  if (g_CarAssetShared4 == '\x02') {
    uVar1 = _g_CourseAssets;
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 0x20);
  }
  *(undefined4 *)(iVar4 + 8) = 1;
  if (iVar2 == 0) {
    Arc_LoadFileEx(param_2 + 0x96e,uVar1,0x1ab090,param_1,0,0);
  }
  else {
    Arc_LoadFile(param_2 + 0x96e,iVar2,0x1ab090,param_1);
  }
  return;
}

// 0x001ab1e0  size 0x1d0
void Asset_ReleaseCarParts(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int aiStack_10 [4];
  
  uVar11 = 0;
  piVar8 = aiStack_10 + 2;
  piVar7 = aiStack_10;
  iVar10 = param_1;
  iVar9 = param_1;
  iVar6 = param_1;
  do {
    if ((*(char *)(iVar10 + 0x2b) == '\x02') || (*(char *)(iVar10 + 0x2c) == '\x05')) {
      *(undefined4 *)(iVar9 + 0x38) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x38) = 1;
    }
    if (uVar11 == 0) {
      *piVar8 = 0;
      *piVar7 = 0x14;
    }
    else {
      *piVar8 = 2;
      *piVar7 = 0x16;
    }
    iVar1 = *piVar7;
    iVar5 = (uint)*(byte *)(iVar10 + 0x2d) + (uint)*(byte *)(iVar10 + 0x2c) * 4;
    uVar4 = *(undefined4 *)((uint)*(byte *)(iVar10 + 0x2a) * 4 + 0x43640c);
    *piVar8 = *piVar8 + iVar5;
    iVar2 = *piVar8;
    *piVar7 = iVar1 + iVar5;
    uVar3 = Model_GetTexture(uVar4,iVar2);
    iVar1 = *piVar7;
    *(undefined4 *)(iVar6 + 0x40) = uVar3;
    uVar4 = Model_GetTexture(uVar4,iVar1);
    *(undefined4 *)(iVar6 + 0x44) = uVar4;
    Res_Release(param_1,*(undefined4 *)(iVar6 + 0x40));
    Res_Release(param_1,*(undefined4 *)(iVar6 + 0x44));
    uVar4 = *(undefined4 *)((uint)*(byte *)(iVar10 + 0x29) * 4 + 0x43641c);
    uVar3 = Model_GetTexture(uVar4,*(undefined1 *)(iVar10 + 0x2b));
    *(undefined4 *)(iVar9 + 0x50) = uVar3;
    uVar4 = Model_GetTexture(uVar4,2);
    *(undefined4 *)(iVar9 + 0x58) = uVar4;
    Res_Release(param_1,*(undefined4 *)(iVar9 + 0x50));
    Res_Release(param_1,*(undefined4 *)(iVar9 + 0x58));
    uVar4 = Res_GetSubResource(param_1,*(undefined4 *)(iVar9 + 0x58),0);
    uVar11 = uVar11 + 1;
    *(undefined4 *)(iVar9 + 0x60) = uVar4;
    iVar10 = iVar10 + 5;
    iVar9 = iVar9 + 4;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + 8;
  } while (uVar11 < 2);
  return;
}

// 0x001ab3c0  size 0xec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Asset_SetupCarParts(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0x4363e0;
  do {
    uVar1 = Gut_PackGetEntry(param_2,uVar4 + 1,0);
    *(undefined4 *)(iVar3 + 0x2c) = uVar1;
    Model_Relocate(*(undefined4 *)(iVar3 + 0x2c));
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (uVar4 < 4);
  uVar4 = 0;
  iVar3 = 0x4363e0;
  do {
    uVar1 = Gut_PackGetEntry(param_2,uVar4 + 5,0);
    *(undefined4 *)(iVar3 + 0x3c) = uVar1;
    Model_Relocate(*(undefined4 *)(iVar3 + 0x3c));
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (uVar4 < 0xd);
  iVar3 = _g_DriverAssetShared1 + _g_RaceIntroShared1;
  uVar2 = Gut_PackGetEntry(param_2,0,0);
  Res_UploadTexture(0x4363e0,0x436450,uVar2,0,1,iVar3 + 0xc0,0,0);
  return;
}

// 0x001ab4b0  size 0x9c
void Asset_OnCarPartsLoaded
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  Course_ClearCount(param_4);
  iVar2 = (int)param_4;
  if (*(int *)(iVar2 + 0x34) == 0) {
    iVar1 = *(int *)(iVar2 + 0x34);
  }
  else {
    Course_ClearCount(0x4363e0);
    Arena_Alloc(0x4363e0,param_3);
    iVar1 = *(int *)(iVar2 + 0x34);
  }
  if (iVar1 != 0) {
    Asset_SetupCarParts(param_4,param_2);
  }
  Asset_ReleaseCarParts(param_4,param_2);
  *(undefined4 *)(iVar2 + 8) = 0;
  return;
}

// 0x001ab550  size 0x9c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Asset_LoadCarParts(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = (int)param_1;
  if (_s_AssetVar1 == 0) {
    _s_AssetVar1 = 1;
    *(undefined4 *)(iVar3 + 0x34) = 1;
    iVar1 = _s_Asset_LoadCarParts_1;
  }
  else {
    iVar2 = _s_Asset_LoadCarParts_1;
    iVar1 = 0;
  }
  *(undefined4 *)(iVar3 + 8) = 1;
  if (iVar2 == 0) {
    Arc_LoadFileEx(*(int *)(iVar3 + 0xc) + 0x69f,iVar1,0x1ab4b0,param_1,0,0);
  }
  else {
    Arc_LoadFile(*(int *)(iVar3 + 0xc) + 0x69f,iVar2,0x1ab4b0);
  }
  return;
}

// 0x001ab5f0  size 0x54
void CarAsset_Clear(undefined8 param_1)

{
  undefined1 *puVar1;
  
  Mem_Set16(param_1,0,10);
  puVar1 = (undefined1 *)param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}

// 0x001ab650  size 0x4e0
/* WARNING: Removing unreachable block (ram,0x001ab9a4) */
/* WARNING: Removing unreachable block (ram,0x001ab974) */
/* WARNING: Removing unreachable block (ram,0x001ab7a0) */
/* WARNING: Removing unreachable block (ram,0x001ab71c) */
/* WARNING: Removing unreachable block (ram,0x001ab848) */
/* WARNING: Removing unreachable block (ram,0x001ab74c) */
/* WARNING: Removing unreachable block (ram,0x001ab878) */
/* WARNING: Removing unreachable block (ram,0x001ab8cc) */
/* WARNING: Removing unreachable block (ram,0x001ab9f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CarAsset_RelocateBody(undefined8 param_1,char param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  
  uVar4 = 0;
  if (param_2 == '\x01') {
    uVar4 = 0x200;
  }
  else if (param_2 == '\0') {
    uVar4 = 0x440;
  }
  if (_g_CarAssetShared2 <= _g_CarAssetShared3) {
    iVar6 = (int)param_1 + _g_CarAssetShared2 * 0xc;
    uVar3 = _g_CarAssetShared2;
    do {
      uVar2 = 0;
      iVar7 = iVar6;
      do {
        iVar5 = (int)param_3;
        if (uVar3 == 0) {
          Res_Relocate(param_1,*(undefined4 *)(iVar7 + 0x4c),uVar4,1,param_3,iVar5 + 3,iVar5 + 6,0);
        }
        else {
          bVar1 = *(byte *)(iVar5 + 3);
          fVar8 = (float)((uint)*(byte *)(iVar5 + 5) + (uint)bVar1 + (uint)*(byte *)(iVar5 + 4));
          fVar9 = (float)*(byte *)(iVar5 + 6) * (((float)bVar1 / fVar8) / 2.0) + (float)bVar1 + 0.0;
          if (255.0 <= fVar9) {
            fVar9 = 255.0;
          }
          if (2.1474836e+09 <= fVar9) {
            fVar9 = fVar9 - 2.1474836e+09;
          }
          uStack_4 = (undefined1)(int)fVar9;
          fVar9 = (float)*(byte *)(iVar5 + 6) * (((float)*(byte *)(iVar5 + 4) / fVar8) / 2.0) +
                  (float)*(byte *)(iVar5 + 4) + 0.0;
          if (255.0 <= fVar9) {
            fVar9 = 255.0;
          }
          if (2.1474836e+09 <= fVar9) {
            fVar9 = fVar9 - 2.1474836e+09;
          }
          uStack_3 = (undefined1)(int)fVar9;
          fVar9 = (float)*(byte *)(iVar5 + 6) * (((float)*(byte *)(iVar5 + 5) / fVar8) / 2.0) +
                  (float)*(byte *)(iVar5 + 5) + 0.0;
          if (255.0 <= fVar9) {
            fVar9 = 255.0;
          }
          if (2.1474836e+09 <= fVar9) {
            fVar9 = fVar9 - 2.1474836e+09;
          }
          uStack_2 = (undefined1)(int)fVar9;
          Res_Relocate(param_1,*(undefined4 *)(iVar7 + 0x4c),uVar4,1,param_3,&uStack_4,iVar5 + 6,0);
        }
        uVar2 = uVar2 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar2 < 3);
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + 0xc;
    } while (uVar3 <= _g_CarAssetShared3);
  }
  return;
}

// 0x001abb30  size 0x270
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CarAsset_SetupBody(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iStack_50;
  undefined4 uStack_24;
  
  uVar2 = _g_CarAssetShared3;
  uVar10 = _g_CarAssetShared2;
  bVar1 = false;
  uStack_24 = 0;
  iVar3 = _g_DriverAssetShared1 + _g_RaceIntroShared1;
  if (_g_CarAssetShared2 <= _g_CarAssetShared3) {
    iVar4 = param_1 + _g_CarAssetShared2 * 0xc;
    uVar8 = _g_CarAssetShared2;
    do {
      *(undefined4 *)(iVar4 + 0x4c) = 0;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(iVar4 + 0x50) = 0;
      *(undefined4 *)(iVar4 + 0x54) = 0;
      iVar4 = iVar4 + 0xc;
    } while (uVar8 <= _g_CarAssetShared3);
  }
  if ((g_CarAssetShared4 == '\x02') && (lVar7 = Course_GetField_24(param_1), lVar7 == 0)) {
    bVar1 = true;
    uStack_24 = 1;
  }
  if (uVar10 <= uVar2) {
    iVar4 = uVar10 * 3;
    iVar11 = param_1 + uVar10 * 0xc;
    do {
      uVar8 = 0;
      iVar12 = iVar4 + -1;
      iStack_50 = iVar11;
      do {
        uVar5 = Gut_PackGetEntry(param_2,0,0);
        Model_Relocate(uVar5);
        iVar9 = iVar12;
        if (uVar10 == 0) {
          iVar9 = 0;
        }
        uVar6 = Res_GetModelSize(param_1,uVar5,iVar9);
        if (bVar1) {
          uVar6 = Res_CopyModel(param_1,uVar6);
        }
        if ((uVar10 == 0) && (uVar8 == 0)) {
          uVar5 = Res_GetModelSize(param_1,uVar5,1);
          CarAsset_ApplyLivery(0x41500000,0x41a00000,param_1,uVar6,param_1 + 0x2c,uVar5);
        }
        CarAsset_ApplyDecals(param_1,uVar6,param_1 + 0x2c,0,0);
        Res_Release(param_1,uVar6);
        uVar8 = uVar8 + 1;
        *(int *)(iStack_50 + 0x4c) = (int)uVar6;
        iStack_50 = iStack_50 + 4;
        iVar12 = iVar12 + 1;
      } while (uVar8 < 3);
      uVar10 = uVar10 + 1;
      iVar4 = iVar4 + 3;
      iVar11 = iVar11 + 0xc;
    } while (uVar10 <= uVar2);
  }
  uVar10 = 0;
  iVar4 = param_1;
  do {
    CarAsset_RelocateBody(param_1,uVar10 & 0xff,iVar4 + 0x3c);
    uVar10 = uVar10 + 1;
    iVar4 = iVar4 + 8;
  } while (uVar10 < 2);
  uVar5 = Gut_PackGetEntry(param_2,1,1);
  Res_UploadTexture(param_1,param_1 + 0x7c,uVar5,uStack_24,1,iVar3 + 0x40,0,0);
  return;
}

// 0x001abda0  size 0x80
void CarAsset_OnBodyLoaded
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  Course_ClearCount(param_4);
  if ((g_CarAssetShared4 != '\x02') && (lVar1 = Course_GetField_24(param_4), lVar1 == 0)) {
    Arena_Alloc(param_4,param_3);
  }
  CarAsset_SetupBody(param_4,param_2);
  *(undefined4 *)((int)param_4 + 8) = 0;
  return;
}

// 0x001abe20  size 0xdc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CarAsset_LoadBody(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = 0;
  lVar3 = Course_GetField_24();
  if (lVar3 != 0) {
    iVar2 = Course_GetField_24(param_1);
    iVar2 = *(int *)(iVar2 + 0x20);
  }
  iVar4 = (int)param_1;
  if (g_CarAssetShared4 == '\x02') {
    uVar1 = _g_CourseAssets;
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 0x20);
  }
  *(undefined4 *)(iVar4 + 8) = 1;
  if (iVar2 == 0) {
    Arc_LoadFileEx((uint)(g_CarAssetShared4 != '\0') + *(int *)(iVar4 + 0xc) * 2 + 0x6a8,uVar1,
                   0x1abda0,param_1,0,0);
  }
  else {
    Arc_LoadFile((uint)(g_CarAssetShared4 != '\0') + *(int *)(iVar4 + 0xc) * 2 + 0x6a8,iVar2,
                 0x1abda0,param_1);
  }
  return;
}

// 0x001abf00  size 0x48
void CarAsset_SetColor(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  maybe_Mem_CopyQwords((int)param_1 + 0x2c,param_3,0x20);
  maybe_Course_GetItemB(param_1);
  *(undefined4 *)((int)param_1 + 0xc) = param_2;
  return;
}

// 0x001abf50  size 0x34
void WheelAsset_Clear(undefined8 param_1)

{
  Mem_Set16(param_1,0,0x20);
  CarAsset_SetDefaultParams(param_1);
  return;
}

// 0x001abf90  size 0x4b0
/* WARNING: Removing unreachable block (ram,0x001ac2cc) */
/* WARNING: Removing unreachable block (ram,0x001ac29c) */
/* WARNING: Removing unreachable block (ram,0x001ac0c8) */
/* WARNING: Removing unreachable block (ram,0x001ac044) */
/* WARNING: Removing unreachable block (ram,0x001ac170) */
/* WARNING: Removing unreachable block (ram,0x001ac074) */
/* WARNING: Removing unreachable block (ram,0x001ac1a0) */
/* WARNING: Removing unreachable block (ram,0x001ac1f4) */
/* WARNING: Removing unreachable block (ram,0x001ac320) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WheelAsset_Relocate(undefined8 param_1,char param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  
  uVar4 = 0;
  if (param_2 == '\x01') {
    uVar4 = 0x200;
  }
  else if (param_2 == '\0') {
    uVar4 = 0x440;
  }
  if (_g_WheelAssetShared1 <= _g_WheelAssetShared2) {
    iVar2 = (int)param_1 + _g_WheelAssetShared1 * 4;
    uVar3 = _g_WheelAssetShared1;
    do {
      iVar5 = (int)param_3;
      if (uVar3 == 0) {
        Res_Relocate(param_1,*(undefined4 *)(iVar2 + 0x4c),uVar4,1,param_3,iVar5 + 3,iVar5 + 6,0);
      }
      else {
        bVar1 = *(byte *)(iVar5 + 3);
        fVar6 = (float)((uint)*(byte *)(iVar5 + 5) + (uint)bVar1 + (uint)*(byte *)(iVar5 + 4));
        fVar7 = (float)*(byte *)(iVar5 + 6) * (((float)bVar1 / fVar6) / 2.0) + (float)bVar1 + 0.0;
        if (255.0 <= fVar7) {
          fVar7 = 255.0;
        }
        if (2.1474836e+09 <= fVar7) {
          fVar7 = fVar7 - 2.1474836e+09;
        }
        uStack_4 = (undefined1)(int)fVar7;
        fVar7 = (float)*(byte *)(iVar5 + 6) * (((float)*(byte *)(iVar5 + 4) / fVar6) / 2.0) +
                (float)*(byte *)(iVar5 + 4) + 0.0;
        if (255.0 <= fVar7) {
          fVar7 = 255.0;
        }
        if (2.1474836e+09 <= fVar7) {
          fVar7 = fVar7 - 2.1474836e+09;
        }
        uStack_3 = (undefined1)(int)fVar7;
        fVar7 = (float)*(byte *)(iVar5 + 6) * (((float)*(byte *)(iVar5 + 5) / fVar6) / 2.0) +
                (float)*(byte *)(iVar5 + 5) + 0.0;
        if (255.0 <= fVar7) {
          fVar7 = 255.0;
        }
        if (2.1474836e+09 <= fVar7) {
          fVar7 = fVar7 - 2.1474836e+09;
        }
        uStack_2 = (undefined1)(int)fVar7;
        Res_Relocate(param_1,*(undefined4 *)(iVar2 + 0x4c),uVar4,1,param_3,&uStack_4,iVar5 + 6,0);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 <= _g_WheelAssetShared2);
  }
  return;
}

