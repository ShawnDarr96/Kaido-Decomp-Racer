// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002c4000 - 0x002c8000
#include "ghidra_types.h"

// 0x002c40d0  size 0xfc
void RaceMenu_SetItemAlpha(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_2 != -1) {
    if ((char)param_1[param_2 * 5 + 5] == '\0') {
      cVar1 = *(char *)((int)param_1 + param_2 * 0x14 + 0x15);
      if ((cVar1 == '\0') || (cVar1 == '\x02')) {
        *(undefined1 *)(param_1 + param_2 * 5 + 5) = 1;
        *(undefined1 *)((int)param_1 + param_2 * 0x14 + 0x15) = 0;
        iVar2 = *param_1;
        iVar3 = param_1[param_2 * 5 + 8];
        iVar4 = param_1[param_2 * 5 + 6];
        iVar5 = iVar4 * 0x14 + iVar2;
        *(undefined4 *)(iVar5 + 0x310) = 0xffffffff;
        *(undefined4 *)(iVar5 + 0x31c) = 0;
        *(undefined4 *)(iVar5 + 0x30c) = 0;
        if (*(int *)(iVar5 + 0x31c) == 0) {
          *(undefined4 *)(iVar5 + 0x318) = 0;
        }
        else {
          *(undefined4 *)(iVar5 + 0x318) = 1;
        }
        puVar6 = (undefined4 *)(iVar5 + 0x318);
        *(undefined4 *)(iVar5 + 0x30c) = 0;
        if (*(int *)(iVar5 + 0x31c) == 0) {
          *puVar6 = 0;
        }
        else {
          *puVar6 = 1;
        }
        *(undefined4 *)(iVar4 * 0x14 + iVar2 + 0x314) = 0;
        *(int *)(iVar5 + 0x31c) = iVar3;
        *puVar6 = 1;
      }
    }
  }
  return;
}

// 0x002c41d0  size 0x2c4
void RaceMenu_Draw(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  piVar6 = (int *)param_1;
  if (*piVar6 == 0) {
    lVar5 = RaceScene_IsFlag10();
    if (lVar5 == 0) {
      iVar3 = UiMgr_FindLayout(piVar6[1]);
      uVar8 = 1;
      uVar7 = 2;
      *piVar6 = (int)&g_UiMgr->slots[iVar3].layout;
    }
    else {
      iVar3 = UiMgr_FindLayout(piVar6[2]);
      uVar8 = 6;
      uVar7 = 7;
      *piVar6 = (int)&g_UiMgr->slots[iVar3].layout;
    }
    iVar3 = UiMgr_FindLayout(piVar6[4]);
    piVar6[3] = (int)&g_UiMgr->slots[iVar3].layout;
    RaceMenu_Task(param_1);
    RaceMenu_SetItemAlpha(param_1,uVar8);
    RaceMenu_SetItemAlpha(param_1,uVar7);
    cVar2 = Options_Get_1c();
    *(short *)((int)piVar6 + 0x10a) = (short)cVar2;
    *(short *)(piVar6 + 0x42) = (short)cVar2;
    cVar2 = maybe_Options_GetBgmVolume();
    *(short *)((int)piVar6 + 0x10e) = (short)cVar2;
    *(short *)(piVar6 + 0x43) = (short)cVar2;
    iVar3 = Options_Get_4();
    piVar6[0x45] = iVar3;
    piVar6[0x44] = iVar3;
  }
  uVar4 = RaceHud_GetFlags();
  if ((uVar4 & 6) == 0) {
    return;
  }
  if ((uint)piVar6[0x3c] < 0xc) {
                    /* WARNING: Switch is manually overridden */
    switch(piVar6[0x3c]) {
    case 0:
      RaceMenu_AnimateCursor(param_1);
      iVar3 = piVar6[0x40];
      goto LAB_002c432c;
    case 1:
      RaceMenu_AnimateOptions(param_1);
      RaceMenu_AnimateCursor(param_1);
      RaceMenu_AnimateClose(param_1);
      break;
    default:
      RaceMenu_AnimateClose(param_1);
      break;
    case 7:
      bVar1 = true;
      piVar6[0x40] = 1;
      if ((char)piVar6[5] == '\x01') {
        if (*(int *)(piVar6[6] * 0x14 + piVar6[3] + 0x318) == 0) {
          *(undefined1 *)(piVar6 + 5) = 2;
        }
        else {
          bVar1 = false;
          UiLayout_UpdateAnim();
        }
      }
      if (bVar1) {
        piVar6[0x3c] = 8;
      }
      break;
    case 8:
      lVar5 = RaceMenu_HandleInput(param_1);
      if (lVar5 == 0) {
        uVar7 = 1;
        if (piVar6[0x41] == 0) {
          uVar7 = 7;
        }
        MenuWnd_SetItemState(piVar6[4],uVar7,1,0);
      }
      break;
    case 9:
      RaceMenu_AnimateOpen(param_1);
      break;
    case 10:
      lVar5 = RaceMenu_AnimateClose(param_1);
      if ((lVar5 != 0) && (lVar5 = RaceMenu_AnimateOpen(param_1), lVar5 != 0)) {
        piVar6[0x40] = 0;
        Race_FrameBegin();
        piVar6[0x3c] = 0xb;
      }
      break;
    case 0xb:
      break;
    }
  }
  iVar3 = piVar6[0x40];
LAB_002c432c:
  if ((iVar3 != 0) && (piVar6[3] != 0)) {
    UiLayout_Draw(0x3f800000);
  }
  if (*piVar6 != 0) {
    UiLayout_Draw(0x3f800000);
  }
  return;
}

// 0x002c44a0  size 0xac4
void RaceMenu_LoadLayouts
               (int param_1,char param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  int iStack_60;
  int iStack_50;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *param_6;
  uStack_c = param_6[1];
  uStack_8 = param_6[2];
  uStack_20 = *param_7;
  uStack_1c = param_7[1];
  uStack_18 = param_7[2];
  uStack_30 = *param_8;
  uStack_2c = param_8[1];
  uStack_28 = param_8[2];
  *(char *)(param_1 + 0xf4) = param_2;
  if (param_2 == '\x01') {
    unaff_s3 = 0x1851;
    iStack_50 = 0x1865;
    unaff_s2 = 0x1852;
    unaff_s1 = 0x1857;
    unaff_s0 = 0x1858;
    unaff_s5 = 0x1861;
    unaff_s6 = 0x1862;
    unaff_s7 = 0x1863;
    unaff_s8 = 0x1864;
    iStack_60 = 0x1866;
  }
  else if (param_2 == '\0') {
    unaff_s3 = 0x184f;
    iStack_50 = 0x185f;
    unaff_s2 = 0x1850;
    unaff_s1 = 0x1855;
    unaff_s0 = 0x1856;
    unaff_s5 = 0x185b;
    unaff_s6 = 0x185c;
    unaff_s7 = 0x185d;
    unaff_s8 = 0x185e;
    iStack_60 = 0x1860;
  }
  *(int *)(param_1 + 4) = (int)param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined4 *)(param_1 + 0x18) = 6;
  *(undefined4 *)(param_1 + 0x1c) = 7;
  *(undefined4 *)(param_1 + 0x2c) = 6;
  *(undefined4 *)(param_1 + 0x30) = 7;
  *(undefined4 *)(param_1 + 0x40) = 8;
  *(undefined4 *)(param_1 + 0x44) = 9;
  *(undefined4 *)(param_1 + 0x54) = 10;
  *(undefined4 *)(param_1 + 0x58) = 0xb;
  *(undefined4 *)(param_1 + 0x68) = 0xc;
  *(undefined4 *)(param_1 + 0x6c) = 0xd;
  *(undefined4 *)(param_1 + 0x7c) = 0xe;
  *(undefined4 *)(param_1 + 0x80) = 0xf;
  *(undefined4 *)(param_1 + 0x90) = 6;
  *(undefined4 *)(param_1 + 0x94) = 7;
  *(undefined4 *)(param_1 + 0xa4) = 8;
  *(undefined4 *)(param_1 + 0xa8) = 9;
  *(undefined4 *)(param_1 + 0xb8) = 10;
  *(undefined4 *)(param_1 + 0xbc) = 0xb;
  *(undefined4 *)(param_1 + 0xcc) = 0xc;
  *(undefined4 *)(param_1 + 0xd0) = 0xd;
  *(undefined4 *)(param_1 + 0xe0) = 0xe;
  *(undefined4 *)(param_1 + 0xe4) = 0xf;
  UiMgr_LoadLayout(param_3,&uStack_10,0);
  UiMgr_LoadLayout(param_4,&uStack_20,0);
  UiMgr_LoadLayout(param_5,&uStack_30,0);
  uVar2 = g_ArcToc->entries[0x186d].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x186d].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  Arc_LoadFileEx(0x186d,*(undefined4 *)(param_1 + 0x20),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x186e].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x186e].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  Arc_LoadFileEx(0x186e,*(undefined4 *)(param_1 + 0x24),0,0,0,0);
  uVar2 = g_ArcToc->entries[(int)unaff_s3].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[(int)unaff_s3].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  Arc_LoadFileEx(unaff_s3,*(undefined4 *)(param_1 + 0x34),0,0,0,0);
  uVar2 = g_ArcToc->entries[(int)unaff_s2].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[(int)unaff_s2].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  Arc_LoadFileEx(unaff_s2,*(undefined4 *)(param_1 + 0x38),0,0,0,0);
  uVar2 = g_ArcToc->entries[(int)unaff_s1].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[(int)unaff_s1].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  Arc_LoadFileEx(unaff_s1,*(undefined4 *)(param_1 + 0x48),0,0,0,0);
  uVar2 = g_ArcToc->entries[(int)unaff_s0].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[(int)unaff_s0].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  Arc_LoadFileEx(unaff_s0,*(undefined4 *)(param_1 + 0x4c),0,0,0,0);
  uVar2 = g_ArcToc->entries[(int)unaff_s5].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[(int)unaff_s5].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  Arc_LoadFileEx(unaff_s5,*(undefined4 *)(param_1 + 0x5c),0,0,0,0);
  uVar2 = g_ArcToc->entries[(int)unaff_s6].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[(int)unaff_s6].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  Arc_LoadFileEx(unaff_s6,*(undefined4 *)(param_1 + 0x60),0,0,0,0);
  uVar2 = g_ArcToc->entries[(int)unaff_s7].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[(int)unaff_s7].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  Arc_LoadFileEx(unaff_s7,*(undefined4 *)(param_1 + 0x70),0,0,0,0);
  uVar2 = g_ArcToc->entries[(int)unaff_s8].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[(int)unaff_s8].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  Arc_LoadFileEx(unaff_s8,*(undefined4 *)(param_1 + 0x74),0,0,0,0);
  uVar2 = g_ArcToc->entries[iStack_50].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[iStack_50].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  Arc_LoadFileEx(iStack_50,*(undefined4 *)(param_1 + 0x84),0,0,0,0);
  uVar2 = g_ArcToc->entries[iStack_60].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[iStack_60].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  Arc_LoadFileEx(iStack_60,*(undefined4 *)(param_1 + 0x88),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x1853].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x1853].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  Arc_LoadFileEx(0x1853,*(undefined4 *)(param_1 + 0x98),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x1854].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x1854].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  Arc_LoadFileEx(0x1854,*(undefined4 *)(param_1 + 0x9c),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x1859].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x1859].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  Arc_LoadFileEx(0x1859,*(undefined4 *)(param_1 + 0xac),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x185a].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x185a].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  Arc_LoadFileEx(0x185a,*(undefined4 *)(param_1 + 0xb0),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x1867].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x1867].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  Arc_LoadFileEx(0x1867,*(undefined4 *)(param_1 + 0xc0),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x1868].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x1868].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  Arc_LoadFileEx(0x1868,*(undefined4 *)(param_1 + 0xc4),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x1869].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x1869].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  Arc_LoadFileEx(0x1869,*(undefined4 *)(param_1 + 0xd4),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x186a].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x186a].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  Arc_LoadFileEx(0x186a,*(undefined4 *)(param_1 + 0xd8),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x186b].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x186b].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  Arc_LoadFileEx(0x186b,*(undefined4 *)(param_1 + 0xe8),0,0,0,0);
  uVar2 = g_ArcToc->entries[0x186c].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[0x186c].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  Arc_LoadFileEx(0x186c,*(undefined4 *)(param_1 + 0xec),0,0,0,0);
  return;
}

// 0x002c4f70  size 0x3fc
void RaceMenu_Task(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  if (((param_1[3] != 0) && (param_1[8] != 0)) && (param_1[9] != 0)) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    iVar2 = param_1[6];
    iVar9 = param_1[3];
    iVar1 = param_1[8];
    iVar7 = iVar2 * 0x14 + iVar9;
    *(undefined4 *)(iVar7 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x31c) = 0;
    *(undefined4 *)(iVar7 + 0x30c) = 0;
    if (*(int *)(iVar7 + 0x31c) == 0) {
      *(undefined4 *)(iVar7 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x318) = 1;
    }
    puVar10 = (undefined4 *)(iVar7 + 0x318);
    *(undefined4 *)(iVar7 + 0x30c) = 0;
    if (*(int *)(iVar7 + 0x31c) == 0) {
      *puVar10 = 0;
    }
    else {
      *puVar10 = 1;
    }
    *(undefined4 *)(iVar2 * 0x14 + iVar9 + 0x314) = 0;
    *(int *)(iVar7 + 0x31c) = iVar1;
    *puVar10 = 1;
    iVar2 = param_1[7];
    iVar9 = param_1[3];
    iVar1 = param_1[9];
    iVar7 = iVar2 * 0x14 + iVar9;
    *(undefined4 *)(iVar7 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x31c) = 0;
    *(undefined4 *)(iVar7 + 0x30c) = 0;
    if (*(int *)(iVar7 + 0x31c) == 0) {
      *(undefined4 *)(iVar7 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x318) = 1;
    }
    puVar10 = (undefined4 *)(iVar7 + 0x318);
    *(undefined4 *)(iVar7 + 0x30c) = 0;
    if (*(int *)(iVar7 + 0x31c) == 0) {
      *puVar10 = 0;
    }
    else {
      *puVar10 = 1;
    }
    *(undefined4 *)(iVar2 * 0x14 + iVar9 + 0x314) = 0;
    *(int *)(iVar7 + 0x31c) = iVar1;
    *puVar10 = 1;
  }
  if (*param_1 != 0) {
    iVar2 = RaceScene_IsActive();
    param_1[0x3f] = iVar2;
    uVar6 = 2;
    piVar3 = param_1 + 10;
    do {
      if ((piVar3[8] != 0) && (piVar3[9] != 0)) {
        *(undefined1 *)(piVar3 + 5) = 0;
        *(undefined1 *)((int)piVar3 + 0x15) = 0;
        iVar2 = piVar3[8];
        iVar9 = *param_1 + piVar3[6] * 0x14;
        *(undefined4 *)(iVar9 + 0x310) = 0xffffffff;
        *(undefined4 *)(iVar9 + 0x31c) = 0;
        *(undefined4 *)(iVar9 + 0x30c) = 0;
        if (*(int *)(iVar9 + 0x31c) == 0) {
          *(undefined4 *)(iVar9 + 0x318) = 0;
        }
        else {
          *(undefined4 *)(iVar9 + 0x318) = 1;
        }
        puVar10 = (undefined4 *)(iVar9 + 0x318);
        *(undefined4 *)(iVar9 + 0x30c) = 0;
        if (*(int *)(iVar9 + 0x31c) == 0) {
          *puVar10 = 0;
        }
        else {
          *puVar10 = 1;
        }
        *(undefined4 *)(iVar9 + 0x314) = 0;
        *(int *)(iVar9 + 0x31c) = iVar2;
        *puVar10 = 1;
        iVar2 = piVar3[9];
        iVar9 = *param_1 + piVar3[7] * 0x14;
        *(undefined4 *)(iVar9 + 0x310) = 0xffffffff;
        *(undefined4 *)(iVar9 + 0x31c) = 0;
        *(undefined4 *)(iVar9 + 0x30c) = 0;
        if (*(int *)(iVar9 + 0x31c) == 0) {
          *(undefined4 *)(iVar9 + 0x318) = 0;
        }
        else {
          *(undefined4 *)(iVar9 + 0x318) = 1;
        }
        puVar10 = (undefined4 *)(iVar9 + 0x318);
        *(undefined4 *)(iVar9 + 0x30c) = 0;
        if (*(int *)(iVar9 + 0x31c) == 0) {
          *puVar10 = 0;
        }
        else {
          *puVar10 = 1;
        }
        *(undefined4 *)(iVar9 + 0x314) = 0;
        *(int *)(iVar9 + 0x31c) = iVar2;
        *puVar10 = 1;
      }
      uVar6 = uVar6 + 1;
      piVar3 = piVar3 + 5;
    } while (uVar6 < 0xb);
    lVar4 = RaceScene_IsFlag10();
    cVar5 = '\x06';
    if (lVar4 == 0) {
      cVar5 = '\x01';
    }
    iVar2 = (int)cVar5;
    if ((param_1[iVar2 * 5 + 8] != 0) && (param_1[iVar2 * 5 + 9] != 0)) {
      param_1[0x3c] = 0;
      param_1[0x3e] = 0;
      *(undefined1 *)(param_1 + iVar2 * 5 + 5) = 0;
      *(undefined1 *)((int)param_1 + iVar2 * 0x14 + 0x15) = 0;
      iVar9 = param_1[iVar2 * 5 + 8];
      iVar1 = *param_1;
      iVar7 = param_1[iVar2 * 5 + 6];
      iVar8 = iVar7 * 0x14 + iVar1;
      *(undefined4 *)(iVar8 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar8 + 0x31c) = 0;
      *(undefined4 *)(iVar8 + 0x30c) = 0;
      if (*(int *)(iVar8 + 0x31c) == 0) {
        *(undefined4 *)(iVar8 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar8 + 0x318) = 1;
      }
      puVar10 = (undefined4 *)(iVar8 + 0x318);
      *(undefined4 *)(iVar8 + 0x30c) = 0;
      if (*(int *)(iVar8 + 0x31c) == 0) {
        *puVar10 = 0;
      }
      else {
        *puVar10 = 1;
      }
      *(undefined4 *)(iVar7 * 0x14 + iVar1 + 0x314) = 0;
      *(int *)(iVar8 + 0x31c) = iVar9;
      *puVar10 = 1;
      iVar9 = param_1[iVar2 * 5 + 9];
      iVar2 = param_1[iVar2 * 5 + 7];
      iVar1 = *param_1;
      iVar7 = iVar2 * 0x14 + iVar1;
      *(undefined4 *)(iVar7 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar7 + 0x31c) = 0;
      *(undefined4 *)(iVar7 + 0x30c) = 0;
      if (*(int *)(iVar7 + 0x31c) == 0) {
        *(undefined4 *)(iVar7 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x318) = 1;
      }
      puVar10 = (undefined4 *)(iVar7 + 0x318);
      *(undefined4 *)(iVar7 + 0x30c) = 0;
      if (*(int *)(iVar7 + 0x31c) == 0) {
        *puVar10 = 0;
      }
      else {
        *puVar10 = 1;
      }
      *(undefined4 *)(iVar2 * 0x14 + iVar1 + 0x314) = 0;
      *(int *)(iVar7 + 0x31c) = iVar9;
      *puVar10 = 1;
      Menu_ClearSlot(0);
    }
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return;
}

// 0x002c5370  size 0x74
void RaceUi_Free(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x20) != 0) {
      Mem_Free();
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      Mem_Free();
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x14;
  } while (uVar1 < 0xb);
  MenuWnd_FreeSystem();
  return;
}

// 0x002c53f0  size 0xec
void RaceUi_Alloc(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  uVar2 = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  puVar1 = param_1;
  do {
    *(undefined1 *)(puVar1 + 5) = 0;
    uVar2 = uVar2 + 5;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
    puVar1[6] = 0xffffffff;
    puVar1[7] = 0xffffffff;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)((int)puVar1 + 0x29) = 0;
    puVar1[0xb] = 0xffffffff;
    puVar1[0xc] = 0xffffffff;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    *(undefined1 *)((int)puVar1 + 0x3d) = 0;
    puVar1[0x10] = 0xffffffff;
    puVar1[0x11] = 0xffffffff;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined1 *)(puVar1 + 0x14) = 0;
    *(undefined1 *)((int)puVar1 + 0x51) = 0;
    puVar1[0x15] = 0xffffffff;
    puVar1[0x16] = 0xffffffff;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined1 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x65) = 0;
    puVar1[0x1a] = 0xffffffff;
    puVar1[0x1b] = 0xffffffff;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1 = puVar1 + 0x19;
  } while (uVar2 < 6);
  *(undefined1 *)(param_1 + uVar2 * 5 + 5) = 0;
  *(undefined1 *)((int)param_1 + uVar2 * 0x14 + 0x15) = 0;
  param_1[uVar2 * 5 + 6] = 0xffffffff;
  param_1[uVar2 * 5 + 7] = 0xffffffff;
  param_1[uVar2 * 5 + 8] = 0;
  param_1[uVar2 * 5 + 9] = 0;
  param_1[0x3c] = 0xb;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  MenuWnd_AllocSystem(param_2);
  return;
}

// 0x002c54e0  size 0xf4
/* WARNING: Removing unreachable block (ram,0x002c5554) */

void RaceUi_SetElementNumber(undefined8 param_1,undefined8 param_2,byte param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  float *pfVar3;
  
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
    pfVar3 = (float *)UiElem_GetPropPtr(param_1);
    *pfVar3 = (float)param_4;
  }
  else {
    piVar2 = (int *)UiElem_GetPropPtr(param_1);
    *piVar2 = (int)(char)param_4;
  }
  if (param_3 == 10) {
    UiElem_MarkDirty(param_1);
  }
  return;
}

// 0x002c55e0  size 0x19c
void RaceUi_OnTextureLoaded(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_1 == param_4[0xe]) {
    Tex_Relocate(param_4[1]);
    uVar1 = *(ushort *)(param_4[1] + 6);
    iVar2 = Tex_UploadAll(param_4[1],0x412,0,0,0);
    if ((param_4[0xd] != 0) && (uVar6 = 0, uVar1 != 0)) {
      do {
        iVar3 = Tex_GetEntry(param_4[1],uVar6);
        *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xc000;
        if (*(int *)(iVar3 + 4) != 0) {
          uVar5 = Tex_GetPageCount(((ulong)*(ushort *)(iVar3 + 0x1a) & 0x3ff) >> 4,
                                   *(undefined2 *)(iVar3 + 0x14),*(undefined2 *)(iVar3 + 0x16));
          *(ulong *)(iVar3 + 0x18) =
               *(ulong *)(iVar3 + 0x18) & 0xfff8001fffffffff | (uVar5 & 0x3fff) << 0x25;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    if (param_4[2] != 0) {
      DmaBuf_Alloc(param_4 + 4,*param_4,iVar2 + 1);
      Pkt_AddTextureUploadAll(param_4 + 4,param_4[1],param_4[8],param_4[9]);
    }
    uVar4 = Mem_Alloc16((uint)uVar1 << 7,*param_4);
    param_4[3] = uVar4;
    TexSlot_Bind(param_4[3],param_4[1],param_4[2],param_4[8],param_4[9],param_4[10],0,0);
    param_4[0xc] = 0;
  }
  return;
}

// 0x002c5780  size 0x2bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawSprites(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint auStack_18840 [25088];
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_1 + 4) != 0) {
    TexSlot_Set(0,*(undefined2 *)(*(int *)(param_1 + 4) + 6),*(undefined4 *)(param_1 + 0xc));
    iVar6 = 0;
    iVar2 = param_1;
    do {
      if (0 < *(int *)(iVar2 + 0x1440)) {
        iVar4 = 0;
        puVar5 = auStack_18840;
        Pkt_Init(auStack_40,2,2,0);
        Pkt_SubmitToChain(auStack_40,(*_s_RaceUiSpriteCursor + -2) - (iVar6 + 8));
        if (*(int *)(param_1 + 8) != 0) {
          Pkt_Flush(auStack_40,param_1 + 0x10);
        }
        iVar3 = 0;
        iVar1 = param_1;
        do {
          if (iVar6 == *(int *)(iVar1 + 0x40)) {
            Obj_Reset(puVar5,4,0xffffffffffffffff);
            Obj_SetVisible(puVar5,1,0,*(undefined4 *)(iVar1 + 0x50));
            puVar5[0xa7] = *(uint *)(iVar1 + 0x54);
            *puVar5 = *puVar5 | 2;
            fVar7 = *(float *)(iVar1 + 0x58) * 128.0;
            if (2.1474836e+09 <= fVar7) {
              fVar7 = fVar7 - 2.1474836e+09;
            }
            puVar5[0xb3] = (int)fVar7 & 0xff;
            puVar5[0xb4] = 0;
            puVar5[0xb5] = 0;
            uVar8 = *(uint *)(iVar1 + 0x4c);
            puVar5[0xbc] = *(uint *)(iVar1 + 0x48);
            puVar5[0xbd] = uVar8;
            uVar8 = *(uint *)(iVar1 + 0x60);
            uVar9 = *(uint *)(iVar1 + 0x5c);
            *puVar5 = *puVar5 | 4;
            puVar5[0xb8] = uVar9;
            puVar5[0xb9] = uVar8;
            if (*(int *)(iVar1 + 100) == 0) {
              *puVar5 = *puVar5 & 0xfffffdff;
            }
            else {
              *puVar5 = *puVar5 | 0x200;
            }
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 0xc4;
            if (*(int *)(iVar2 + 0x1440) <= iVar4) break;
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0x28;
        } while (iVar3 < 0x80);
        Pkt_AddPrimitives(auStack_40,auStack_18840,((int)puVar5 - (int)auStack_18840) / 0x310);
        Pkt_Submit(auStack_40,0);
        *(undefined4 *)(iVar2 + 0x1440) = 0;
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar6 < 0xf);
    *(undefined4 *)(param_1 + 0x147c) = 0;
  }
  return;
}

// 0x002c5a50  size 0x140
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 20 callers */

void RaceUi_DrawSprite(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
                      undefined4 param_5,int param_6,int param_7,undefined4 param_8,
                      undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  
  if (param_3 != 0.0) {
    param_7 = (*_s_RaceUiSpriteCursor + -10) - param_7;
    *(int *)(*(int *)(param_6 + 0x147c) * 0x28 + param_6 + 0x40) = param_7;
    iVar1 = param_7 * 4 + param_6;
    *(undefined4 *)(*(int *)(param_6 + 0x147c) * 0x28 + param_6 + 0x48) = param_1;
    *(undefined4 *)(*(int *)(param_6 + 0x147c) * 0x28 + param_6 + 0x48) = param_1;
    *(undefined4 *)(*(int *)(param_6 + 0x147c) * 0x28 + param_6 + 0x4c) = param_2;
    *(undefined4 *)(*(int *)(param_6 + 0x147c) * 0x28 + param_6 + 0x50) = param_8;
    *(undefined4 *)(*(int *)(param_6 + 0x147c) * 0x28 + param_6 + 0x54) = param_9;
    *(float *)(*(int *)(param_6 + 0x147c) * 0x28 + param_6 + 0x58) = param_3;
    *(undefined4 *)(*(int *)(param_6 + 0x147c) * 0x28 + param_6 + 0x5c) = param_4;
    *(undefined4 *)(*(int *)(param_6 + 0x147c) * 0x28 + param_6 + 0x60) = param_5;
    *(undefined4 *)(*(int *)(param_6 + 0x147c) * 0x28 + param_6 + 100) = param_10;
    *(int *)(iVar1 + 0x1440) = *(int *)(iVar1 + 0x1440) + 1;
    *(int *)(param_6 + 0x147c) = *(int *)(param_6 + 0x147c) + 1;
  }
  return;
}

// 0x002c5b90  size 0xa4
void RaceUi_InitSprites(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0x10] = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1 = puVar1 + 10;
  } while (iVar2 < 0x80);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0x510] = 0;
    iVar2 = iVar2 + 5;
    puVar1[0x511] = 0;
    puVar1[0x512] = 0;
    puVar1[0x513] = 0;
    puVar1[0x514] = 0;
    puVar1 = puVar1 + 5;
  } while (iVar2 < 0xf);
  param_1[0x51f] = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  DmaBuf_SetUncached(param_1 + 4,0,0);
  return;
}

// 0x002c5c40  size 0x194
void RaceUi_DrawSpriteRotated
               (undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
               undefined4 param_5,int param_6,undefined8 param_7,undefined4 param_8)

{
  uint auStack_350 [167];
  undefined4 uStack_b4;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_40 [64];
  
  TexSlot_Set(0,*(undefined2 *)(*(int *)(param_6 + 4) + 6),*(undefined4 *)(param_6 + 0xc));
  Pkt_Init(auStack_40,2,2,0);
  Pkt_SubmitToChain(auStack_40,param_7);
  if (*(int *)(param_6 + 8) != 0) {
    Pkt_Flush(auStack_40,param_6 + 0x10);
  }
  Obj_Reset(auStack_350,4,0xffffffffffffffff);
  Obj_SetVisible(auStack_350,1,0,0);
  param_3 = param_3 * 128.0;
  if (2.1474836e+09 <= param_3) {
    param_3 = param_3 - 2.1474836e+09;
  }
  uStack_84 = (int)param_3 & 0xff;
  uStack_80 = 0;
  uStack_7c = 0;
  auStack_350[0] = auStack_350[0] | 6;
  uStack_b4 = param_8;
  uStack_70 = param_4;
  uStack_6c = param_5;
  uStack_60 = param_1;
  uStack_5c = param_2;
  Pkt_AddPrimitives(auStack_40,auStack_350,1);
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x002c5de0  size 0x190
void RaceUi_SelectCarIcon(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  iVar2 = maybe_GameState_GetFlag();
  iVar2 = iVar2 + param_2 * 0x540;
  cVar1 = *(char *)(iVar2 + 0x7b0);
  if (cVar1 == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 0x437a0000;
  }
  else if (cVar1 == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 0x43660000;
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0xc) = 0x43520000;
  }
  else {
    if (cVar1 != '\x01') {
      *(undefined4 *)(param_1 + 0x10) = 0;
      goto LAB_002c5e74;
    }
    *(undefined4 *)(param_1 + 0xc) = 0x43340000;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
LAB_002c5e74:
  uVar3 = *(byte *)(iVar2 + 0x7b1) - 4;
  if (uVar3 < 0xd) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar3) {
    default:
      *(undefined4 *)(param_1 + 0x24) = 0x45fa0000;
      break;
    case 3:
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0x24) = 0x460ca000;
      break;
    case 6:
    case 7:
    case 8:
      *(undefined4 *)(param_1 + 0x24) = 0x461c4000;
      break;
    case 9:
    case 10:
    case 0xb:
      *(undefined4 *)(param_1 + 0x24) = 0x462be000;
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0x24) = 0x463b8000;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar5 = 1;
  if ((*(char *)(iVar2 + 0x429) != '\x01') && (*(char *)(iVar2 + 0x429) != '\x03')) {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 100) = uVar5;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
  puVar4 = &DAT_0032f7b0;
  do {
    uVar3 = uVar3 + 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(puVar4 + 4);
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    puVar4 = puVar4 + 0x18;
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    param_1 = param_1 + 0x18;
  } while (uVar3 < 3);
  return;
}

// 0x002c5f70  size 0x118
void RaceUi_SetupCarIcons(int *param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  
  param_1[1] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = param_1[0x23];
  param_1[0x25] = 0;
  param_1[0x26] = -1;
  param_1[0x27] = -1;
  param_1[0x28] = -1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar3 = RaceCar_Get(param_2);
  iVar2 = RaceCar_GetIndex(uVar3);
  sVar1 = CarRec_GetModelId(iVar2 + 0xc);
  *param_1 = (int)sVar1;
  iVar2 = RaceCar_Get(param_2);
  param_1[0x1b] = (uint)*(byte *)(iVar2 + 0x811);
  iVar2 = RaceCar_Get(param_2);
  uVar5 = 0;
  param_1[0x1a] = (uint)(*(int *)(*(int *)(iVar2 + 0x120) + 0x524) == 1);
  piVar4 = param_1;
  do {
    *(undefined1 *)(piVar4 + 0x1f) = 0;
    uVar5 = uVar5 + 1;
    piVar4[0x20] = 0;
    piVar4 = piVar4 + 2;
  } while (uVar5 < 2);
  RaceUi_SelectCarIcon(param_1,param_2);
  return;
}

// 0x002c6090  size 0xc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_PlayCue(long param_1,int param_2)

{
  if (param_1 == 0) {
    if ((((*(int *)(_g_RaceHud + 0x290) != 0) || (*(int *)(_g_RaceHud + 0x294) != 0)) &&
        (*(undefined4 *)(param_2 * 4 + _g_RaceHud + 0x290) = 0, *(int *)(_g_RaceHud + 0x290) == 0))
       && (*(int *)(_g_RaceHud + 0x294) == 0)) {
      MenuSnd_Stop(0xb);
    }
  }
  else if ((*(int *)(_g_RaceHud + 0x290) == 0) && (*(int *)(_g_RaceHud + 0x294) == 0)) {
    Se_PlayMenuVol(0xb,0x60);
    *(undefined4 *)(param_2 * 4 + _g_RaceHud + 0x290) = 1;
  }
  return;
}

// 0x002c6150  size 0x8
void Result_Nop(void)

{
  return;
}

// 0x002c6160  size 0x204
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_TaskSplits(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  uVar1 = *(uint *)(iVar4 + 8);
  RaceUi_DrawDigits(param_1,0x24,0x26,*(undefined4 *)(iVar4 + 0x26c),1,5,0);
  RaceUi_DrawDigits(param_1,0x19a,0x14,*(undefined4 *)(iVar4 + 0xac),2,5,(uVar1 & 0x80) != 0);
  RaceUi_DrawSprite(0x44118000,0x42880000,*(undefined4 *)(iVar4 + 0x3b70),0x3f800000,0x3f800000,
                    iVar4 + 0x26f0,*_s_RaceUiSpriteCursor + -10,
                    (*(int *)(iVar4 + 0xb0) / 10) % 10 + 3,0,0);
  RaceUi_DrawSprite(0x44158000,0x42880000,*(undefined4 *)(iVar4 + 0x3b70),0x3f800000,0x3f800000,
                    iVar4 + 0x26f0,*_s_RaceUiSpriteCursor + -10,*(int *)(iVar4 + 0xb0) % 10 + 3,0,0)
  ;
  lVar3 = RaceScene_IsFlag10();
  if (lVar3 == 0) {
    RaceUi_AnimateSplit(param_1,0);
    if ((*(uint *)(iVar4 + 8) & 0x200) != 0) {
      *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xfffffdff;
      *(undefined1 *)(iVar4 + 0x1018) = 1;
    }
  }
  iVar2 = *(int *)(iVar4 + 0x9c);
  if (iVar2 != -1) {
    RaceProg_GetArray_34(0);
    if (*(int *)(iVar4 + 0xa4) == -1) {
      *(int *)(iVar4 + 0xa4) = iVar2;
    }
    if (*(int *)(iVar4 + 0xa4) == 0) {
      *(undefined4 *)(iVar4 + 0x298) = 1;
    }
    else {
      *(undefined4 *)(iVar4 + 0x298) = 0;
    }
  }
  return;
}

// 0x002c6370  size 0x288
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawRivalBanner(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uVar7 = Profile_Get(0);
  iVar9 = (int)param_1;
  uVar1 = *(uint *)(iVar9 + 0x98);
  bVar2 = false;
  if (0 < (int)uVar1) {
    uVar5 = uVar1 & 7;
    if (((int)uVar1 < 0) && (uVar5 != 0)) {
      uVar5 = uVar5 - 8;
    }
    bVar2 = (int)uVar5 < 4;
  }
  if (!bVar2) {
    if (*(int *)(iVar9 + 0x90) < *(int *)(iVar9 + 0x94)) {
      RaceUi_DrawSprite(0x42880000,0x42140000,*(undefined4 *)(iVar9 + 0x3b70),
                        (float)*(int *)(iVar9 + 0x94) * 1.32e-05,0x3f800000,iVar9 + 0x26f0,
                        *_s_RaceUiSpriteCursor + -0x12,0,2,0);
    }
    RaceUi_DrawSprite(0x42880000,0x42140000,*(undefined4 *)(iVar9 + 0x3b70),
                      (float)*(int *)(iVar9 + 0x90) * 1.32e-05,0x3f800000,iVar9 + 0x26f0,
                      *_s_RaceUiSpriteCursor + -0x12,0,0,0);
  }
  UiElem_SetPropFloat(*(undefined4 *)(iVar9 + 0x3b70),*(undefined4 *)(iVar9 + 0x10f8),5,8);
  cVar3 = Profile_GetFlag273d(uVar7);
  cVar4 = Profile_GetFlag273f(uVar7);
  MenuWnd_DrawRivalLabel(0x10,5,1,0x68,cVar3 + 0x2ab,cVar4 + 0x2c5);
  RaceUi_DrawNumber(param_1,0x1bd,0x3a,iVar9 + 0x270,0);
  iStack_10 = *(int *)(iVar9 + 0xc0);
  iStack_c = *(int *)(iVar9 + 0xc4);
  iStack_8 = *(int *)(iVar9 + 200);
  if (((((iStack_10 != 0) || (iStack_c != 0)) || (iStack_8 != 0)) &&
      (((iStack_10 != 99 || (iStack_c != 0x3b)) || (iStack_8 != 999)))) &&
     (cVar3 = RaceProg_Get(), cVar3 == '\x03')) {
    lVar8 = RaceScene_IsPaused();
    if (lVar8 == 0) {
      iVar6 = maybe_rand();
      *(int *)(iVar9 + 0xcc) = iVar6 % 3;
    }
    iStack_8 = iStack_8 - *(int *)(iVar9 + 0xcc);
    if (iStack_8 < 0) {
      iStack_8 = -iStack_8;
    }
  }
  RaceUi_DrawNumber(param_1,0x1bd,100,&iStack_10,0);
  return;
}

// 0x002c6600  size 0x218
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawGapBar(float param_1,int param_2,int param_3,int param_4,long param_5)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar4 = param_3 + -0x14;
  bVar1 = false;
  fVar6 = param_1 * 0.01;
  if (param_1 < 0.0) {
    fVar6 = fVar6 * -1.0;
  }
  iVar3 = 3;
  do {
    iVar5 = (int)fVar6;
    if (((iVar5 != 0) || (bVar1)) || (iVar3 < 2)) {
      RaceUi_DrawSprite((float)param_3,(float)param_4,*(undefined4 *)(param_2 + 0x3b70),0x3f800000,
                        0x3f800000,param_2 + 0x1270,*_s_RaceUiSpriteCursor + -10,iVar5 + 0x20,0,0);
      bVar1 = true;
    }
    else {
      iVar4 = iVar4 + 0x14;
    }
    fVar6 = (fVar6 - (float)iVar5) * 10.0;
    if (iVar3 == 1) {
      RaceUi_DrawSprite((float)(param_3 + 0x14),(float)param_4,*(undefined4 *)(param_2 + 0x3b70),
                        0x3f800000,0x3f800000,param_2 + 0x1270,*_s_RaceUiSpriteCursor + -10,0x2b,0,0
                       );
      param_3 = param_3 + 0x1e;
    }
    else {
      param_3 = param_3 + 0x14;
    }
    iVar3 = iVar3 + -1;
  } while (-2 < iVar3);
  if (param_5 != 0) {
    uVar2 = 0x2d;
    if (param_1 >= 0.0) {
      uVar2 = 0x2c;
    }
    RaceUi_DrawSprite((float)iVar4,(float)param_4,*(undefined4 *)(param_2 + 0x3b70),0x3f800000,
                      0x3f800000,param_2 + 0x1270,*_s_RaceUiSpriteCursor + -10,uVar2,0,0);
  }
  return;
}

// 0x002c6820  size 0x2c4
void RaceUi_TaskSpeedometer(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  float fVar11;
  float fVar12;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  bVar2 = true;
  bVar3 = true;
  pcVar10 = (char *)param_1;
  uVar5 = *(uint *)(pcVar10 + 0x284) & 7;
  if (((int)*(uint *)(pcVar10 + 0x284) < 0) && (uVar5 != 0)) {
    uVar5 = uVar5 - 8;
  }
  bVar1 = (int)uVar5 < 4;
  uVar7 = RaceCar_Get(0);
  uVar8 = RaceCar_Get(1);
  fVar11 = (float)Race_GetTimeScale(uVar8);
  fVar12 = (float)Race_GetTimeScale(uVar7);
  fVar11 = fVar11 - fVar12;
  fVar12 = (float)Race_GetTimeScale(uVar7);
  fVar12 = fVar12 * 0.001;
  if (fVar12 < 0.0) {
    fVar12 = 0.0;
  }
  if (1000.0 <= fVar11) {
    fVar11 = 999.999;
  }
  if (fVar11 <= -1000.0) {
    fVar11 = -999.999;
  }
  if ((fVar12 < 0.5) && (bVar1)) {
    bVar2 = false;
  }
  if (*pcVar10 == '\x04') {
    if ((fVar11 < 5.0) && (bVar1)) {
      bVar3 = false;
    }
  }
  else if ((fVar11 < -30.0) && (bVar1)) {
    bVar3 = false;
  }
  if (bVar2) {
    RaceUi_DrawGapBar(param_1,5,0x26,0);
  }
  if (bVar3) {
    RaceUi_DrawGapBar(fVar11,param_1,0xae,0x26,1);
    iStack_10 = *(int *)(pcVar10 + 0xc0);
  }
  else {
    iStack_10 = *(int *)(pcVar10 + 0xc0);
  }
  iStack_c = *(int *)(pcVar10 + 0xc4);
  iStack_8 = *(int *)(pcVar10 + 200);
  if (((((iStack_10 != 0) || (iStack_c != 0)) || (iStack_8 != 0)) &&
      (((iStack_10 != 99 || (iStack_c != 0x3b)) || (iStack_8 != 999)))) &&
     (cVar4 = RaceProg_Get(), cVar4 == '\x03')) {
    lVar9 = RaceScene_IsPaused();
    if (lVar9 == 0) {
      iVar6 = maybe_rand();
      *(int *)(pcVar10 + 0xcc) = iVar6 % 3;
    }
    iStack_8 = iStack_8 - *(int *)(pcVar10 + 0xcc);
    if (iStack_8 < 0) {
      iStack_8 = -iStack_8;
    }
  }
  RaceUi_DrawNumber(param_1,0x1bd,0x1e,&iStack_10,0);
  return;
}

// 0x002c6af0  size 0x3a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_TaskGapMeter(undefined8 param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar6 = (int)param_1;
  bVar2 = (*(uint *)(iVar6 + 8) & 0x80) != 0;
  RaceUi_DrawDigits(param_1,5,0x26,*(undefined4 *)(iVar6 + 0xa8),1,6,bVar2);
  if (((&DAT_0032f535)[(uint)bRam0036f810 * 6] == '\x03') ||
     ((&DAT_0032f535)[(uint)bRam0036f810 * 6] == '\x05')) {
    RaceUi_DrawDigits(param_1,0x9b,0x26,*(undefined4 *)(iVar6 + 0x458),1,6,0);
    RaceUi_DrawNumber(param_1,0x1bd,0x5a,iVar6 + 0x484,0);
    uVar1 = *(undefined4 *)(iVar6 + 0xac);
  }
  else {
    cVar3 = RaceCtx_Get_8();
    if (cVar3 == '\x10') {
      RaceUi_DrawDigits(param_1,0xaf,0x26,*(undefined4 *)(iVar6 + 0x26c),3,5,0);
      RaceUi_DrawNumber(param_1,0x1bd,0x5a,iVar6 + 0x270,1);
    }
    else {
      RaceUi_DrawDigits(param_1,0x9b,0x26,*(undefined4 *)(iVar6 + 0x26c),1,6,0);
      RaceUi_DrawNumber(param_1,0x1bd,0x5a,iVar6 + 0x270,0);
    }
    uVar1 = *(undefined4 *)(iVar6 + 0xac);
  }
  RaceUi_DrawDigits(param_1,0x19a,0x14,uVar1,2,5,bVar2);
  RaceUi_DrawSprite(0x44118000,0x42880000,*(undefined4 *)(iVar6 + 0x3b70),0x3f800000,0x3f800000,
                    iVar6 + 0x26f0,*_s_RaceUiSpriteCursor + -10,
                    (*(int *)(iVar6 + 0xb0) / 10) % 10 + 3,0,0);
  RaceUi_DrawSprite(0x44158000,0x42880000,*(undefined4 *)(iVar6 + 0x3b70),0x3f800000,0x3f800000,
                    iVar6 + 0x26f0,*_s_RaceUiSpriteCursor + -10,*(int *)(iVar6 + 0xb0) % 10 + 3,0,0)
  ;
  lVar5 = RaceScene_IsFlag10();
  if (lVar5 == 0) {
    RaceUi_AnimateSplit(param_1,0);
    iStack_10 = *(int *)(iVar6 + 0xc0);
  }
  else {
    iStack_10 = *(int *)(iVar6 + 0xc0);
  }
  iStack_c = *(int *)(iVar6 + 0xc4);
  iStack_8 = *(int *)(iVar6 + 200);
  if (((((iStack_10 != 0) || (iStack_c != 0)) || (iStack_8 != 0)) &&
      (((iStack_10 != 99 || (iStack_c != 0x3b)) || (iStack_8 != 999)))) &&
     (cVar3 = RaceProg_Get(), cVar3 == '\x03')) {
    lVar5 = RaceScene_IsPaused();
    if (lVar5 == 0) {
      iVar4 = maybe_rand();
      *(int *)(iVar6 + 0xcc) = iVar4 % 3;
    }
    iStack_8 = iStack_8 - *(int *)(iVar6 + 0xcc);
    if (iStack_8 < 0) {
      iStack_8 = -iStack_8;
    }
  }
  RaceUi_DrawNumber(param_1,0x1bd,0x84,&iStack_10,0);
  return;
}

// 0x002c6e90  size 0x114
void RaceUi_TaskWarning(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar4 = (int)param_1;
  iStack_10 = *(int *)(iVar4 + 0xc0);
  iStack_c = *(int *)(iVar4 + 0xc4);
  iStack_8 = *(int *)(iVar4 + 200);
  if (((((iStack_10 != 0) || (iStack_c != 0)) || (iStack_8 != 0)) &&
      (((iStack_10 != 99 || (iStack_c != 0x3b)) || (iStack_8 != 999)))) &&
     (cVar1 = RaceProg_Get(), cVar1 == '\x03')) {
    lVar3 = RaceScene_IsPaused();
    if (lVar3 == 0) {
      iVar2 = maybe_rand();
      *(int *)(iVar4 + 0xcc) = iVar2 % 3;
    }
    iStack_8 = iStack_8 - *(int *)(iVar4 + 0xcc);
    if (iStack_8 < 0) {
      iStack_8 = -iStack_8;
    }
  }
  RaceUi_DrawNumber(param_1,0x85,0xd5,&iStack_10,0);
  return;
}

// 0x002c6fb0  size 0x690
void RaceUi_DrawIntroCard(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  RaceEntrySetup *pRVar5;
  RacerState *pRVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  undefined1 auStack_130 [20];
  undefined4 uStack_11c;
  int iStack_118;
  undefined1 auStack_f0 [20];
  undefined4 uStack_dc;
  int iStack_d8;
  undefined1 auStack_b0 [20];
  undefined4 uStack_9c;
  int iStack_98;
  undefined1 auStack_70 [24];
  int iStack_58;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  iVar10 = (int)param_1;
  bVar2 = (&DAT_0032f535)[(uint)bRam0036f810 * 6] != '\x05';
  uVar17 = 5;
  uVar9 = 4;
  uVar3 = 7;
  if (bVar2) {
    uVar17 = 6;
    uVar9 = 5;
    uVar3 = 4;
  }
  UiElem_GetRect(*(undefined4 *)(iVar10 + 0x10f8),auStack_70,uVar9);
  iStack_58 = (int)((float)iStack_58 * *(float *)(iVar10 + 0x3b70));
  pRVar5 = GameState_Elem_f0_xcc(0);
  if ((short)pRVar5->maybe_counter == 0x112) {
    iVar7 = 0x295;
  }
  else {
    iVar7 = maybe_GameState_GetFlag();
    iVar7 = *(char *)(iVar7 + 0x40c) + 0x296;
  }
  UiElem_GetRect(*(undefined4 *)(iVar10 + 0x10f8),auStack_b0,uVar9);
  uStack_9c = 0;
  iStack_98 = (int)((float)iStack_98 * *(float *)(iVar10 + 0x3b70));
  UiText_DrawById(auStack_b0,iVar7);
  UiElem_GetRect(*(undefined4 *)(iVar10 + 0x10f8),auStack_70,uVar17);
  iStack_58 = (int)((float)iStack_58 * *(float *)(iVar10 + 0x3b70));
  pRVar5 = GameState_Elem_f0_xcc(0);
  pRVar6 = GameState_Elem_3e0_x540((int)(char)pRVar5->unk_09);
  uVar1 = pRVar6->unk_00;
  UiElem_GetRect(*(undefined4 *)(iVar10 + 0x10f8),auStack_f0,uVar17);
  uStack_dc = 0;
  iStack_d8 = (int)((float)iStack_d8 * *(float *)(iVar10 + 0x3b70));
  UiText_DrawById(auStack_f0,uVar1 + 0x1b3);
  UiElem_GetRect(*(undefined4 *)(iVar10 + 0x10f8),auStack_70,uVar3);
  iStack_58 = (int)((float)iStack_58 * *(float *)(iVar10 + 0x3b70));
  pRVar5 = GameState_Elem_f0_xcc(0);
  pRVar6 = GameState_Elem_3e0_x540((int)(char)pRVar5->unk_09);
  uVar1 = pRVar6->unk_00;
  UiElem_GetRect(*(undefined4 *)(iVar10 + 0x10f8),auStack_130,uVar3);
  uStack_11c = 0;
  iStack_118 = (int)((float)iStack_118 * *(float *)(iVar10 + 0x3b70));
  UiText_DrawById(auStack_130,uVar1 + 0xd1);
  if (*(int *)(iVar10 + 0x288) == 0) {
    if ((&DAT_0032f535)[(uint)bRam0036f810 * 6] == '\x03') {
      RaceUi_DrawNumber(param_1,0x1bd,0x22,iVar10 + 0x484,0);
    }
    else if ((&DAT_0032f535)[(uint)bRam0036f810 * 6] == '\x05') {
      RaceUi_DrawNumber(param_1,0x1bd,0x12,iVar10 + 0x484,0);
    }
    else {
      cVar4 = RaceCtx_Get_8();
      if ((cVar4 == '\x10') && (lVar8 = GameState_Get_364(), lVar8 == 0)) {
        RaceUi_DrawNumber(param_1,0x1bd,0x22,iVar10 + 0x270,1);
      }
      else {
        RaceUi_DrawNumber(param_1,0x1bd,0x22,iVar10 + 0x270,0);
      }
    }
    if (bVar2) {
      iStack_30 = *(int *)(iVar10 + 0xc0);
      iStack_2c = *(int *)(iVar10 + 0xc4);
      iStack_28 = *(int *)(iVar10 + 200);
      if (((((iStack_30 != 0) || (iStack_2c != 0)) || (iStack_28 != 0)) &&
          (((iStack_30 != 99 || (iStack_2c != 0x3b)) || (iStack_28 != 999)))) &&
         (cVar4 = RaceProg_Get(), cVar4 == '\x03')) {
        lVar8 = RaceScene_IsPaused();
        if (lVar8 == 0) {
          iVar7 = maybe_rand();
          *(int *)(iVar10 + 0xcc) = iVar7 % 3;
        }
        iStack_28 = iStack_28 - *(int *)(iVar10 + 0xcc);
        if (iStack_28 < 0) {
          iStack_28 = -iStack_28;
        }
      }
      RaceUi_DrawNumber(param_1,0x1bd,0x50,&iStack_30,0);
    }
    else {
      iStack_20 = *(int *)(iVar10 + 0xc0);
      iStack_1c = *(int *)(iVar10 + 0xc4);
      iStack_18 = *(int *)(iVar10 + 200);
      if ((((iStack_20 != 0) || (iStack_1c != 0)) || (iStack_18 != 0)) &&
         ((((iStack_20 != 99 || (iStack_1c != 0x3b)) || (iStack_18 != 999)) &&
          (cVar4 = RaceProg_Get(), cVar4 == '\x03')))) {
        lVar8 = RaceScene_IsPaused();
        if (lVar8 == 0) {
          iVar7 = maybe_rand();
          *(int *)(iVar10 + 0xcc) = iVar7 % 3;
        }
        iStack_18 = iStack_18 - *(int *)(iVar10 + 0xcc);
        if (iStack_18 < 0) {
          iStack_18 = -iStack_18;
        }
      }
      RaceUi_DrawNumber(param_1,0x1bd,0x3a,&iStack_20,0);
    }
    if ((!bVar2) && (*(int *)(iVar10 + 0x28c) == 0)) {
      uVar9 = RaceProg_GetArray_40(0);
      iVar7 = (int)uVar9;
      iVar16 = 0;
      iVar15 = 0;
      iVar12 = 0;
      piVar11 = (int *)(iVar7 + *(int *)(iVar7 + 0x4bc) * 0x78);
      piVar13 = piVar11;
      do {
        if ((*piVar13 != -1) && ((*(uint *)((int)piVar11 + iVar12 + 8) & 1) == 0)) {
          iVar15 = iVar15 + -1;
          break;
        }
        iVar15 = iVar15 + 1;
        piVar13 = piVar13 + 3;
        iVar12 = iVar12 + 0xc;
      } while (iVar15 < 10);
      if (iVar15 == 10) {
        iVar15 = 9;
      }
      if (-1 < iVar15) {
        iVar14 = iVar15 * 0xc;
        iVar12 = piVar11[iVar15 * 3];
        if (*piVar11 == 0) {
          *(undefined4 *)(iVar10 + 0x298) = 1;
        }
        else {
          *(undefined4 *)(iVar10 + 0x298) = 0;
        }
        if (-1 < iVar12) {
          iVar18 = 0x60;
          while( true ) {
            LapTime_FormatTotal(uVar9,iVar15,auStack_10,auStack_c,auStack_8);
            if (*(int *)(iVar10 + 0x298) == 0) {
              iVar12 = 8 - iVar12;
            }
            RaceUi_DrawTimer(param_1,0x1c0,iVar18,iVar12,auStack_10);
            iVar16 = iVar16 + 1;
            iVar18 = iVar18 + 0x12;
            if (iVar16 == 4) break;
            iVar15 = iVar15 + -1;
            iVar14 = iVar14 + -0xc;
            if (iVar15 < 0) {
              return;
            }
            iVar12 = *(int *)(iVar7 + *(int *)(iVar7 + 0x4bc) * 0x78 + iVar14);
            if (iVar12 < 0) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}

// 0x002c7640  size 0x2d8
void RaceUi_AnimateSplit(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  undefined8 unaff_s3;
  uint uVar7;
  undefined8 unaff_s4;
  int aiStack_20 [4];
  undefined4 uStack_10;
  byte abStack_8 [8];
  
  pbVar5 = (byte *)0x36ee98;
  pbVar4 = abStack_8;
  aiStack_20[0] = DAT_0032fc80;
  aiStack_20[1] = DAT_0032fc84;
  iVar3 = 5;
  aiStack_20[2] = DAT_0032fc88;
  aiStack_20[3] = DAT_0032fc8c;
  uStack_10 = DAT_0032fc90;
  do {
    iVar3 = iVar3 + -1;
    *pbVar4 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (0 < iVar3);
  iVar3 = param_1 + param_2 * 0xcc;
  if ((*(uint *)(iVar3 + 8) & 4) == 0) {
    if ((*(uint *)(iVar3 + 8) & 8) != 0) {
      uVar2 = RaceProg_GetArray_34((char)param_2);
      uVar7 = *(uint *)(iVar3 + 8);
      if ((uVar7 & 0x20) == 0) {
        if ((uVar7 & 0x10) == 0) {
          if ((*(char *)(param_1 + 0x107c) != '\x01') && (*(char *)(param_1 + 0x1090) != '\x01')) {
            uVar7 = 0;
            piVar6 = aiStack_20;
            *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffffff7;
            do {
              iVar1 = RaceProg_GetSplit(uVar2,*(undefined4 *)(iVar3 + 0x9c));
              if (iVar1 <= *piVar6) {
                *(undefined1 *)(param_1 + (uint)abStack_8[uVar7] * 0x14 + 0xfc8) = 1;
                return;
              }
              uVar7 = uVar7 + 1;
              piVar6 = piVar6 + 1;
            } while (uVar7 < 5);
          }
        }
        else {
          Se_PlayMenuVol(10,0x60);
          *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xffffffef;
          if (*(int *)((int)uVar2 + 0x8ac) < 2) {
            *(undefined1 *)(param_1 + 0x107c) = 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x1090) = 1;
            iVar3 = *(int *)((int)uVar2 + 0x8ac);
            if (iVar3 == 2) {
              unaff_s3 = 5;
              unaff_s4 = 0xc;
            }
            else if (iVar3 == 3) {
              unaff_s3 = 5;
              unaff_s4 = 8;
            }
            else if (iVar3 == 4) {
              unaff_s3 = 6;
              unaff_s4 = 0xc;
            }
            else if (4 < iVar3) {
              unaff_s3 = 7;
              unaff_s4 = 0xc;
            }
            UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x1080),3,0x16,unaff_s4);
            UiElem_SetPropInt(*(undefined4 *)(param_1 + 0x1080),4,0x16,unaff_s3);
          }
        }
      }
      else if ((uVar7 & 0x40) == 0) {
        if (*(char *)(param_1 + 0x1068) != '\x01') {
          *(undefined1 *)(param_1 + 0x1054) = 1;
          *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xffffffdf;
          *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffffff7;
        }
      }
      else {
        Se_PlayMenuVol(0xd,0x60);
        *(undefined1 *)(param_1 + 0x1068) = 1;
        *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xffffffbf;
      }
    }
  }
  else {
    Se_PlayMenuVol(0xe,0x60);
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffffffb;
    *(undefined1 *)(param_1 + 0x1040) = 1;
  }
  return;
}

// 0x002c7920  size 0x330
/* WARNING: Removing unreachable block (ram,0x002c7ab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_DrawDigits(int param_1,int param_2,int param_3,int param_4,long param_5,int param_6,
                      undefined4 param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int unaff_s0_lo;
  int unaff_s1_lo;
  int iVar8;
  int iVar9;
  undefined8 unaff_s6;
  
  uVar5 = 3;
  if (param_5 == 3) {
    unaff_s1_lo = param_1 + 0x1270;
    unaff_s0_lo = 0x14;
    uVar5 = 0x2d;
  }
  else if (param_5 == 2) {
    unaff_s1_lo = param_1 + 0x26f0;
    unaff_s0_lo = 0x1c;
    uVar5 = 0xd;
  }
  else if (param_5 == 1) {
    unaff_s1_lo = param_1 + 0x1270;
    unaff_s0_lo = 0x14;
    uVar5 = 0x20;
  }
  else {
    if (param_5 != 0) goto LAB_002c79c8;
    unaff_s1_lo = param_1 + 0x26f0;
    unaff_s0_lo = 0x10;
  }
  unaff_s6 = uVar5;
LAB_002c79c8:
  if (param_5 == 3) {
    iVar9 = 0;
    if (0 < param_6) {
      iVar8 = 0;
      do {
        RaceUi_DrawSprite((float)(param_2 + iVar8),(float)param_3,*(undefined4 *)(param_1 + 0x3b70),
                          0x3f800000,0x3f800000,unaff_s1_lo,*_s_RaceUiSpriteCursor + -0x11,unaff_s6,
                          param_7,0);
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + unaff_s0_lo;
      } while (iVar9 < param_6);
    }
  }
  else {
    bVar2 = false;
    iVar9 = 0;
    if (0 < param_6) {
      iVar8 = 0;
      do {
        iVar7 = param_6 - iVar9;
        iVar4 = 1;
        iVar6 = iVar7 + -1;
        iVar3 = 0;
        if (0 < iVar6) {
          if (8 < iVar6) {
            bVar1 = false;
            if ((-1 < iVar6) && (iVar6 < 0x7fffffff)) {
              bVar1 = true;
            }
            if (bVar1) {
              do {
                iVar3 = iVar3 + 8;
                iVar4 = iVar4 * 100000000;
              } while (iVar3 < iVar7 + -9);
            }
          }
          if (iVar3 < iVar6) {
            do {
              iVar3 = iVar3 + 1;
              iVar4 = iVar4 * 10;
            } while (iVar3 < iVar7 + -1);
          }
        }
        iVar4 = (param_4 / iVar4) % 10;
        if ((iVar4 != 0) || (param_6 + -1 == iVar9)) {
          bVar2 = true;
        }
        if (bVar2) {
          RaceUi_DrawSprite((float)(param_2 + iVar8),(float)param_3,
                            *(undefined4 *)(param_1 + 0x3b70),0x3f800000,0x3f800000,unaff_s1_lo,
                            *_s_RaceUiSpriteCursor + -0x11,(int)unaff_s6 + iVar4,param_7,0);
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + unaff_s0_lo;
      } while (iVar9 < param_6);
    }
  }
  return;
}

// 0x002c7c60  size 0x188
void RaceUi_TaskCountdown(int param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 auStack_10 [4];
  
  puVar6 = auStack_10 + 2;
  puVar5 = auStack_10;
  iVar4 = 0;
  auStack_10[2] = uRam0036ee88;
  auStack_10[3] = uRam0036ee8c;
  auStack_10[0] = uRam0036ee90;
  auStack_10[1] = uRam0036ee94;
  iVar7 = param_1;
  do {
    bVar2 = (*(uint *)(iVar7 + 8) & 0x80) != 0;
    RaceUi_DrawDigits(param_1,0x35,*puVar6,*(undefined4 *)(iVar7 + 0xa8),1,6,bVar2);
    RaceUi_DrawDigits(param_1,0x10c,*puVar5,*(undefined4 *)(iVar7 + 0xac),1,5,bVar2);
    lVar3 = RaceScene_IsFlag10();
    if (lVar3 == 0) {
      uVar1 = *(uint *)(iVar7 + 8);
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 8) != 0) {
          if ((uVar1 & 0x20) == 0) {
            if ((uVar1 & 0x10) != 0) {
              Se_PlayMenuVol(10,0x60);
              *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xffffffef;
            }
          }
          else if ((uVar1 & 0x40) != 0) {
            Se_PlayMenuVol(0xd,0x60);
            *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xffffffbf;
          }
        }
      }
      else {
        Se_PlayMenuVol(0xe,0x60);
        *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xfffffffb;
      }
    }
    iVar4 = iVar4 + 1;
    iVar7 = iVar7 + 0xcc;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 2);
  return;
}

// 0x002c7df0  size 0x53c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceUi_TaskLapCounter(undefined8 param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = (int)param_1;
  bVar2 = (*(uint *)(iVar7 + 8) & 0x80) != 0;
  RaceUi_DrawDigits(param_1,0x19,0x26,*(undefined4 *)(iVar7 + 0xa8),1,6,bVar2);
  if (((&DAT_0032f535)[(uint)bRam0036f810 * 6] == '\x03') ||
     ((&DAT_0032f535)[(uint)bRam0036f810 * 6] == '\x05')) {
    RaceUi_DrawDigits(param_1,0xaf,0x26,*(undefined4 *)(iVar7 + 0x458),1,6,0);
    uVar1 = *(undefined4 *)(iVar7 + 0xac);
  }
  else {
    cVar3 = RaceCtx_Get_8();
    if ((cVar3 == '\x10') && (lVar4 = GameState_Get_390(), lVar4 == 0)) {
      RaceUi_DrawDigits(param_1,0xc3,0x26,*(undefined4 *)(iVar7 + 0x26c),3,5,0);
    }
    else {
      RaceUi_DrawDigits(param_1,0xaf,0x26,*(undefined4 *)(iVar7 + 0x26c),1,6,0);
    }
    uVar1 = *(undefined4 *)(iVar7 + 0xac);
  }
  RaceUi_DrawDigits(param_1,0x1b6,0x14,uVar1,2,5,bVar2);
  RaceUi_DrawSprite(0x44118000,0x42880000,*(undefined4 *)(iVar7 + 0x3b70),0x3f800000,0x3f800000,
                    iVar7 + 0x26f0,*_s_RaceUiSpriteCursor + -10,
                    (*(int *)(iVar7 + 0xb0) / 10) % 10 + 3,0,0);
  RaceUi_DrawSprite(0x44158000,0x42880000,*(undefined4 *)(iVar7 + 0x3b70),0x3f800000,0x3f800000,
                    iVar7 + 0x26f0,*_s_RaceUiSpriteCursor + -10,*(int *)(iVar7 + 0xb0) % 10 + 3,0,0)
  ;
  if ((((&DAT_0032f535)[(uint)bRam0036f810 * 6] == '\x05') && (*(int *)(iVar7 + 0x28c) == 0)) &&
     (iVar9 = *(int *)(iVar7 + 0x9c), iVar9 != -1)) {
    iVar8 = 0;
    uVar5 = RaceProg_GetArray_34(0);
    if (*(int *)(iVar7 + 0xa4) == -1) {
      *(int *)(iVar7 + 0xa4) = iVar9;
    }
    if (*(int *)(iVar7 + 0xa4) != iVar9) {
      if (iVar9 - *(int *)(iVar7 + 0xa4) < 1) {
        *(undefined4 *)(iVar7 + 0x298) = 0;
        iVar9 = *(int *)(iVar9 * 0x1c + (int)uVar5 + 0xfc) + 1;
        if (iVar9 < 9) {
          iVar10 = 0x58;
          do {
            uVar6 = maybe_RaceProg_CountD(uVar5,iVar9);
            RaceUi_DrawSprite(0x43fc0000,(float)iVar10,*(undefined4 *)(iVar7 + 0x3b70),0x3f800000,
                              0x3f800000,iVar7 + 0x26f0,*_s_RaceUiSpriteCursor + -10,0xc - iVar9,1,0
                             );
            RaceUi_DrawSprite(0x44020000,(float)iVar10,*(undefined4 *)(iVar7 + 0x3b70),0x3f800000,
                              0x3f800000,iVar7 + 0x26f0,*_s_RaceUiSpriteCursor + -10,0,1,0);
            RaceUi_DrawDigits(param_1,0x216,iVar10,uVar6,0,5,0);
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 0x14;
            if (iVar8 == 4) break;
          } while (iVar9 < 9);
        }
      }
      else {
        *(undefined4 *)(iVar7 + 0x298) = 1;
        iVar9 = *(int *)(iVar9 * 0x1c + (int)uVar5 + 0xfc) + -1;
        if (-1 < iVar9) {
          iVar10 = 0x58;
          do {
            uVar6 = maybe_RaceProg_CountD(uVar5,iVar9);
            RaceUi_DrawSprite(0x43fc0000,(float)iVar10,*(undefined4 *)(iVar7 + 0x3b70),0x3f800000,
                              0x3f800000,iVar7 + 0x26f0,*_s_RaceUiSpriteCursor + -10,iVar9 + 4,1,0);
            RaceUi_DrawSprite(0x44020000,(float)iVar10,*(undefined4 *)(iVar7 + 0x3b70),0x3f800000,
                              0x3f800000,iVar7 + 0x26f0,*_s_RaceUiSpriteCursor + -10,0,1,0);
            RaceUi_DrawDigits(param_1,0x216,iVar10,uVar6,0,5,0);
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + -1;
            iVar10 = iVar10 + 0x14;
            if (iVar8 == 4) break;
          } while (-1 < iVar9);
        }
      }
    }
  }
  lVar4 = RaceScene_IsFlag10();
  if (lVar4 == 0) {
    RaceUi_AnimateSplit(param_1,0);
  }
  return;
}

