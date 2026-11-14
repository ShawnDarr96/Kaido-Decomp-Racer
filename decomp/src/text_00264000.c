// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00264000 - 0x00268000
#include "ghidra_types.h"

// 0x002644c0  size 0x418
void FUN_002644c0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  bVar1 = true;
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x898) == 0) && (*(int *)(iVar2 + 0x890) == 0)) {
    bVar1 = false;
  }
  iVar4 = *(int *)(iVar2 + 0x894);
  *(undefined4 *)(iVar2 + 0x894) = 0;
  if (iVar4 != 0) {
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
    *(undefined4 *)(iRam0036f458 + 0x634) = 1;
    *(undefined4 *)(iRam0036f458 + 0x644) = 1;
    uVar3 = FUN_001f4890(0x368);
    iVar4 = FUN_001f48c0(0x108);
    iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar4 + 800) = 0;
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x318) = 0;
    *(undefined4 *)(iVar4 + 800) = uVar3;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    if (*(int *)(iVar2 + 0x880) == -1) {
      FUN_00266a40(param_1);
      iVar4 = *(int *)(iVar2 + 0x890);
      goto LAB_0026451c;
    }
  }
  iVar4 = *(int *)(iVar2 + 0x890);
LAB_0026451c:
  if ((iVar4 != 0) && (lVar6 = FUN_00201260(0x108,0), lVar6 == 0)) {
    FUN_00200fc0(0);
    *(undefined4 *)(iVar2 + 0x890) = 0;
    bVar1 = false;
  }
  if (*(int *)(iVar2 + 0x898) != 0) {
    iVar4 = *(int *)(iVar2 + 0x89c);
    *(undefined4 *)(iVar2 + 0x89c) = 0;
    if (iVar4 != 0) {
      uVar3 = FUN_001f4890(0x369);
      iVar4 = FUN_001f48c0(0x108);
      iVar4 = *piRam0036f42c + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar4 + 800) = 0;
      *(undefined4 *)(iVar4 + 0x310) = 0;
      if (*(int *)(iVar4 + 800) == 0) {
        *(undefined4 *)(iVar4 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar4 + 0x310) = 0;
      if (*(int *)(iVar4 + 800) == 0) {
        *(undefined4 *)(iVar4 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar4 + 0x318) = 0;
      *(undefined4 *)(iVar4 + 800) = uVar3;
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    lVar6 = FUN_00201260(0x108,0);
    if (lVar6 == 0) {
      *(undefined4 *)(iVar2 + 0x898) = 0;
      bVar1 = true;
    }
  }
  if (!bVar1) {
    FUN_00200d70(0x108,*(undefined4 *)(&DAT_0036ecc0 + *(int *)(iVar2 + 0x24) * 4),1,0);
  }
  uVar5 = FUN_001f69b0(*(undefined4 *)(iVar2 + 0x10),1);
  FUN_002011b0(0x103,(&DAT_0032d3b0)[*(int *)(iVar2 + 0x758)],uVar5);
  uVar5 = 0x66;
  if (*(int *)(iVar2 + 8) != 0) {
    uVar5 = 0x65;
  }
  FUN_002011b0(0x103,0x42,uVar5);
  if (*(uint *)(iVar2 + 0x78) == 0 || (*(uint *)(iVar2 + 0x78) & 1) != 0) {
    FUN_002011b0(0x108,0xf,0x418);
    uVar7 = *(uint *)(iVar2 + 0x78);
  }
  else {
    FUN_00201140(0x108,0xf,3,0x418);
    uVar7 = *(uint *)(iVar2 + 0x78);
  }
  if (uVar7 == 0 || (uVar7 & 2) != 0) {
    FUN_002011b0(0x108,0x10,0x419);
    iVar2 = *(int *)(iVar2 + 0x24);
  }
  else {
    FUN_00201140(0x108,0x10,3,0x419);
    iVar2 = *(int *)(iVar2 + 0x24);
  }
  FUN_002011b0(0x102,0x1b,*(undefined4 *)(&DAT_0036ecc8 + iVar2 * 4));
  iVar2 = FUN_001f48c0(0x108);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x103);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x102);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x10c);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x002648e0  size 0x478
void FUN_002648e0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  bVar1 = true;
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x898) == 0) && (*(int *)(iVar2 + 0x890) == 0)) {
    bVar1 = false;
  }
  iVar4 = *(int *)(iVar2 + 0x894);
  *(undefined4 *)(iVar2 + 0x894) = 0;
  if (iVar4 != 0) {
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    uVar3 = FUN_001f4890(0x377);
    iVar4 = FUN_001f48c0(0x10a);
    iVar4 = *piGpffff8d3c + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar4 + 800) = 0;
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x318) = 0;
    *(undefined4 *)(iVar4 + 800) = uVar3;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    if (*(int *)(iVar2 + 0x880) == -1) {
      FUN_00266a40(param_1);
      iVar4 = *(int *)(iVar2 + 0x890);
      goto LAB_0026493c;
    }
  }
  iVar4 = *(int *)(iVar2 + 0x890);
LAB_0026493c:
  if ((iVar4 != 0) && (lVar6 = FUN_00201260(0x10a,0), lVar6 == 0)) {
    FUN_00200fc0(0);
    *(undefined4 *)(iVar2 + 0x890) = 0;
    bVar1 = false;
  }
  if (*(int *)(iVar2 + 0x898) != 0) {
    iVar4 = *(int *)(iVar2 + 0x89c);
    *(undefined4 *)(iVar2 + 0x89c) = 0;
    if (iVar4 != 0) {
      uVar3 = FUN_001f4890(0x378);
      iVar4 = FUN_001f48c0(0x10a);
      iVar4 = *piGpffff8d3c + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar4 + 800) = 0;
      *(undefined4 *)(iVar4 + 0x310) = 0;
      if (*(int *)(iVar4 + 800) == 0) {
        *(undefined4 *)(iVar4 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar4 + 0x310) = 0;
      if (*(int *)(iVar4 + 800) == 0) {
        *(undefined4 *)(iVar4 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar4 + 0x318) = 0;
      *(undefined4 *)(iVar4 + 800) = uVar3;
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    lVar6 = FUN_00201260(0x10a,0);
    if (lVar6 == 0) {
      *(undefined4 *)(iVar2 + 0x898) = 0;
      bVar1 = true;
    }
  }
  if (!bVar1) {
    FUN_00200d70(0x10a,*(undefined4 *)(&DAT_0032d600 + *(int *)(iVar2 + 0x28) * 4),1,0);
  }
  uVar5 = FUN_001f69b0(*(undefined4 *)(iVar2 + 0x10),1);
  FUN_002011b0(0x103,(&DAT_0032d3b0)[*(int *)(iVar2 + 0x758)],uVar5);
  uVar5 = 0x66;
  if (*(int *)(iVar2 + 8) != 0) {
    uVar5 = 0x65;
  }
  FUN_002011b0(0x103,0x42,uVar5);
  FUN_0020eb50();
  if (*(uint *)(iVar2 + 0x70) == 0 || (*(uint *)(iVar2 + 0x70) & 1) != 0) {
    FUN_002011b0(0x10a,0x16,0x1f38);
    uVar7 = *(uint *)(iVar2 + 0x70);
  }
  else {
    FUN_00201140(0x10a,0x16,3,0x1f38);
    uVar7 = *(uint *)(iVar2 + 0x70);
  }
  if (uVar7 == 0 || (uVar7 & 2) != 0) {
    FUN_002011b0(0x10a,0x17,0x1f39);
    uVar7 = *(uint *)(iVar2 + 0x70);
  }
  else {
    FUN_00201140(0x10a,0x17,3,0x1f39);
    uVar7 = *(uint *)(iVar2 + 0x70);
  }
  if (uVar7 == 0 || (uVar7 & 4) != 0) {
    FUN_002011b0(0x10a,0x18,0x1f3a);
    iVar2 = *(int *)(iVar2 + 0x28);
  }
  else {
    FUN_00201140(0x10a,0x18,3,0x1f3a);
    iVar2 = *(int *)(iVar2 + 0x28);
  }
  FUN_002011b0(0x102,0x1b,*(undefined4 *)(&DAT_0032d610 + iVar2 * 4));
  iVar2 = FUN_001f48c0(0x10a);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x103);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x102);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x10c);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00264d60  size 0x744
void FUN_00264d60(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  uint uVar10;
  
  bVar3 = true;
  if ((*(int *)(param_1 + 0x898) == 0) && (*(int *)(param_1 + 0x890) == 0)) {
    bVar3 = false;
  }
  iVar5 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x18);
  }
  else {
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    FUN_00242ce0(param_1 + 0x84c,0x109);
    uVar6 = FUN_001f4890(0x36d);
    iVar5 = FUN_001f48c0(0x109);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar5 + 800) = 0;
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x318) = 0;
    *(undefined4 *)(iVar5 + 800) = uVar6;
    uVar10 = 0;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    puVar9 = &DAT_0032d5a0;
    iVar5 = param_1;
    do {
      FUN_00242a90(iVar5 + 0x76c,0x109,puVar9);
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 8;
      iVar5 = iVar5 + 0x10;
    } while (uVar10 < 8);
    iVar5 = FUN_001f48c0(0x103);
    iVar5 = *piGpffff8d3c + iVar5 * 0x4f4 + 4;
    FUN_001eeb00(0,iVar5,0x52,8);
    FUN_001eeb00(0,iVar5,0x53,8);
    iVar5 = *(int *)(param_1 + 0x18);
  }
  bVar1 = *(int *)(param_1 + 0x14) == 0;
  FUN_00242960(param_1 + 0x76c,iVar5 == 0,iVar5 == 0 && bVar1);
  bVar2 = *(int *)(param_1 + 0x18) == 1;
  FUN_00242960(param_1 + 0x77c,bVar2,bVar2 && bVar1);
  bVar1 = *(int *)(param_1 + 0x1c) == 0;
  bVar2 = *(int *)(param_1 + 0x14) == 1;
  FUN_00242960(param_1 + 0x78c,bVar1,bVar1 && bVar2);
  bVar1 = *(int *)(param_1 + 0x1c) == 1;
  FUN_00242960(param_1 + 0x79c,bVar1,bVar1 && bVar2);
  bVar1 = *(int *)(param_1 + 0x1c) == 2;
  FUN_00242960(param_1 + 0x7ac,bVar1,bVar1 && bVar2);
  bVar1 = *(int *)(param_1 + 0x1c) == 3;
  FUN_00242960(param_1 + 0x7bc,bVar1,bVar1 && bVar2);
  bVar1 = *(int *)(param_1 + 0x20) == 0;
  bVar2 = *(int *)(param_1 + 0x14) == 2;
  FUN_00242960(param_1 + 0x7cc,bVar1,bVar1 && bVar2);
  bVar1 = *(int *)(param_1 + 0x20) == 1;
  FUN_00242960(param_1 + 0x7dc,bVar1,bVar1 && bVar2);
  if ((*(int *)(param_1 + 0x890) != 0) && (lVar8 = FUN_00201260(0x109,0), lVar8 == 0)) {
    FUN_00200fc0(0);
    *(undefined4 *)(param_1 + 0x890) = 0;
    bVar3 = false;
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar5 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar5 != 0) {
      uVar6 = FUN_001f4890(0x36e);
      iVar5 = FUN_001f48c0(0x109);
      iVar5 = *piGpffff8d3c + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar5 + 800) = 0;
      *(undefined4 *)(iVar5 + 0x310) = 0;
      if (*(int *)(iVar5 + 800) == 0) {
        *(undefined4 *)(iVar5 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar5 + 0x310) = 0;
      if (*(int *)(iVar5 + 800) == 0) {
        *(undefined4 *)(iVar5 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar6;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    lVar8 = FUN_00201260(0x109,0);
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
      bVar3 = true;
    }
  }
  if (bVar3) {
    FUN_00242960(param_1 + 0x76c,*(int *)(param_1 + 0x18) == 0,0);
    FUN_00242960(param_1 + 0x77c,*(int *)(param_1 + 0x18) == 1,0);
    FUN_00242960(param_1 + 0x78c,*(int *)(param_1 + 0x1c) == 0,0);
    FUN_00242960(param_1 + 0x79c,*(int *)(param_1 + 0x1c) == 1,0);
    FUN_00242960(param_1 + 0x7ac,*(int *)(param_1 + 0x1c) == 2,0);
    FUN_00242960(param_1 + 0x7bc,*(int *)(param_1 + 0x1c) == 3,0);
    FUN_00242960(param_1 + 0x7cc,*(int *)(param_1 + 0x20) == 0,0);
    FUN_00242960(param_1 + 0x7dc,*(int *)(param_1 + 0x20) == 1,0);
  }
  else {
    FUN_00242b40(param_1 + 0x84c,*(undefined4 *)(&DAT_0032d5e0 + *(int *)(param_1 + 0x14) * 4));
  }
  FUN_0020eb50();
  uVar7 = FUN_001f69b0(*(undefined4 *)(param_1 + 0x10),1);
  FUN_002011b0(0x103,(&DAT_0032d3b0)[*(int *)(param_1 + 0x758)],uVar7);
  uVar7 = 0x66;
  if (*(int *)(param_1 + 8) != 0) {
    uVar7 = 0x65;
  }
  FUN_002011b0(0x103,0x42,uVar7);
  uVar7 = FUN_001f6070(1);
  FUN_002011b0(0x109,0x2c,uVar7);
  uVar7 = FUN_001f6070(0);
  FUN_002011b0(0x109,0x2d,uVar7);
  uVar7 = FUN_001f5fd0(0);
  FUN_002011b0(0x109,0x2e,uVar7);
  uVar7 = FUN_001f5fd0(3);
  FUN_002011b0(0x109,0x2f,uVar7);
  cVar4 = FUN_002a31d0(param_1);
  if ((cVar4 == '\x04') || (cVar4 = FUN_002a31d0(param_1), cVar4 == '\a')) {
    uVar7 = FUN_001f5fd0(2);
    FUN_002011b0(0x109,0x30,uVar7);
    uVar7 = FUN_001f5fd0(5);
    FUN_002011b0(0x109,0x31,uVar7);
  }
  else {
    uVar7 = FUN_001f5fd0(1);
    FUN_002011b0(0x109,0x30,uVar7);
    uVar7 = FUN_001f5fd0(4);
    FUN_002011b0(0x109,0x31,uVar7);
  }
  uVar7 = FUN_001f6040(0);
  FUN_002011b0(0x109,0x32,uVar7);
  uVar7 = FUN_001f6040(1);
  FUN_002011b0(0x109,0x33,uVar7);
  FUN_002011b0(0x102,0x1b,*(undefined4 *)(&DAT_0032d5f0 + *(int *)(param_1 + 0x14) * 4));
  iVar5 = FUN_001f48c0(0x109);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  iVar5 = FUN_001f48c0(0x103);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  iVar5 = FUN_001f48c0(0x102);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  iVar5 = FUN_001f48c0(0x10c);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  return;
}

// 0x002654b0  size 0x6ac
void FUN_002654b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iStack_4;
  
  iVar3 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x890);
  }
  else {
    iVar3 = FUN_001f48c0(0x103);
    FUN_001eea30(*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x35,0x16,
                 *(undefined4 *)((int)register0x000001c0 + *(int *)(param_1 + 8) * 4 + -0x7a50));
    uVar2 = FUN_001f4890(0x370);
    iVar3 = FUN_001f48c0(0x103);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = FUN_001f4890(0x36f);
    iVar3 = FUN_001f48c0(0x103);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x398) = 0;
    *(undefined4 *)(iVar3 + 0x388) = 0;
    if (*(int *)(iVar3 + 0x398) == 0) {
      *(undefined4 *)(iVar3 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x394) = 1;
    }
    *(undefined4 *)(iVar3 + 0x388) = 0;
    if (*(int *)(iVar3 + 0x398) == 0) {
      *(undefined4 *)(iVar3 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x394) = 1;
    }
    *(undefined4 *)(iVar3 + 0x390) = 0;
    *(undefined4 *)(iVar3 + 0x398) = uVar2;
    *(undefined4 *)(iVar3 + 0x394) = 1;
    uVar2 = FUN_001f4890(0x376);
    iVar3 = FUN_001f48c0(0x103);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x3ac) = 0;
    *(undefined4 *)(iVar3 + 0x39c) = 0;
    if (*(int *)(iVar3 + 0x3ac) == 0) {
      *(undefined4 *)(iVar3 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar3 + 0x39c) = 0;
    if (*(int *)(iVar3 + 0x3ac) == 0) {
      *(undefined4 *)(iVar3 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar3 + 0x3a4) = 0;
    *(undefined4 *)(iVar3 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar3 + 0x3a8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    FUN_00200fc0(0);
    FUN_00200a10(0x103,(int)register0x000001c0 + -0x7a38,2,0);
    iVar3 = *(int *)(param_1 + 0x890);
  }
  if ((iVar3 != 0) && (lVar5 = FUN_00201260(0x103,0), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  if (*(int *)(param_1 + 0x898) == 0) {
    FUN_002008b0(3 < *(int *)(param_1 + 0x754));
  }
  else {
    iVar3 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x888) == 2) {
        uVar2 = FUN_001f4890(0x371);
        iVar3 = FUN_001f48c0(0x103);
        iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
        *(undefined4 *)(iVar3 + 800) = 0;
        *(undefined4 *)(iVar3 + 0x310) = 0;
        if (*(int *)(iVar3 + 800) == 0) {
          *(undefined4 *)(iVar3 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x31c) = 1;
        }
        *(undefined4 *)(iVar3 + 0x310) = 0;
        if (*(int *)(iVar3 + 800) == 0) {
          *(undefined4 *)(iVar3 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x31c) = 1;
        }
        *(undefined4 *)(iVar3 + 0x318) = 0;
        *(undefined4 *)(iVar3 + 800) = uVar2;
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      else {
        uVar2 = FUN_001f4890(*(undefined4 *)(*(int *)(param_1 + 0x758) * 4 + 0x32d390));
        iVar3 = FUN_001f48c0(0x103);
        iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
        *(undefined4 *)(iVar3 + 800) = 0;
        *(undefined4 *)(iVar3 + 0x310) = 0;
        if (*(int *)(iVar3 + 800) == 0) {
          *(undefined4 *)(iVar3 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x31c) = 1;
        }
        *(undefined4 *)(iVar3 + 0x310) = 0;
        if (*(int *)(iVar3 + 800) == 0) {
          *(undefined4 *)(iVar3 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x31c) = 1;
        }
        *(undefined4 *)(iVar3 + 0x318) = 0;
        *(undefined4 *)(iVar3 + 800) = uVar2;
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
    }
    lVar5 = FUN_00201260(0x103,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
    FUN_002008b0(0);
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x103,*(undefined4 *)(&DAT_0032d410 + *(int *)(param_1 + 0x758) * 4),1,0);
  }
  FUN_001fe3d0(param_1 + 0x764,0x103,6,7);
  iVar8 = *(int *)(param_1 + 0x754) + 1;
  FUN_001fe370(&iStack_4,*(undefined4 *)(param_1 + 0x764),*(undefined4 *)(param_1 + 0x758),
               *(undefined4 *)(param_1 + 0x10),iVar8,4);
  iVar3 = (*(int *)(param_1 + 0x10) + iVar8) - *(int *)(param_1 + 0x758);
  iVar7 = 0;
  puVar6 = &DAT_0032d3b0;
  puVar9 = &DAT_0032d3d0;
  while( true ) {
    iVar1 = iVar8;
    if (4 < iVar8) {
      iVar1 = 5;
    }
    if ((iVar1 <= iVar7) ||
       ((iVar3 = iVar3 % iVar8, iVar7 == 4 && (iVar3 = iStack_4, iStack_4 == -1)))) break;
    uVar4 = FUN_001f69b0(iVar3,1);
    FUN_002011b0(0x103,*puVar6,uVar4);
    iVar1 = FUN_001f48c0(0x103);
    FUN_001eea30(*piGpffff8d3c + iVar1 * 0x4f4 + 4,*puVar9,0x16,
                 *(undefined4 *)(&DAT_0032d430 + iVar3 * 4));
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
    iVar7 = iVar7 + 1;
  }
  if ((iVar8 < 4) && (iVar8 < 4)) {
    puVar9 = (undefined4 *)(&DAT_0032d3f0 + iVar8 * 4);
    puVar6 = &DAT_0032d3d0 + iVar8;
    do {
      iVar3 = FUN_001f48c0(0x103);
      FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,*puVar9,8);
      iVar3 = FUN_001f48c0(0x103);
      FUN_001eeb00(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,*puVar6,8);
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar8 < 4);
  }
  uVar4 = 0x66;
  if (*(int *)(param_1 + 8) != 0) {
    uVar4 = 0x65;
  }
  FUN_002011b0(0x103,0x42,uVar4);
  FUN_002011b0(0x102,0x1b,0x1f2a);
  iVar3 = FUN_001f48c0(0x103);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0x102);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0x10c);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  FUN_0020eb50();
  return;
}

// 0x00265b60  size 0x3b8
void FUN_00265b60(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x898) == 0) && (*(int *)(param_1 + 0x890) == 0)) {
    bVar1 = false;
  }
  iVar2 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
    uVar3 = FUN_001f4890(0x379);
    iVar2 = FUN_001f48c0(0x104);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  if ((*(int *)(param_1 + 0x890) != 0) && (lVar4 = FUN_00201260(0x104,0), lVar4 == 0)) {
    FUN_00200fc0(0);
    *(undefined4 *)(param_1 + 0x890) = 0;
    bVar1 = false;
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar2 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_001f4890(0x37a);
      iVar2 = FUN_001f48c0(0x104);
      iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar2 + 800) = 0;
      *(undefined4 *)(iVar2 + 0x310) = 0;
      if (*(int *)(iVar2 + 800) == 0) {
        *(undefined4 *)(iVar2 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar2 + 0x310) = 0;
      if (*(int *)(iVar2 + 800) == 0) {
        *(undefined4 *)(iVar2 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar2 + 0x318) = 0;
      *(undefined4 *)(iVar2 + 800) = uVar3;
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    lVar4 = FUN_00201260(0x104,0);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
      bVar1 = true;
    }
  }
  if (!bVar1) {
    FUN_00200d70(0x104,*(undefined4 *)
                        ((int)register0x000001c0 + *(int *)(param_1 + 0xc) * 4 + -0x7a40),1,0);
  }
  FUN_00201260(0x10b,0);
  FUN_002011b0(0x10d,0x25,0x66);
  FUN_002011b0(0x10d,0x26,0x65);
  FUN_002011b0(0x10d,0x27,0x107);
  FUN_002011b0(0x104,0xd,0x1f36);
  if (*(uint *)(param_1 + 0x58) == 0 || (*(uint *)(param_1 + 0x58) & 2) != 0) {
    FUN_002011b0(0x104,0xe,0x1f37);
    iVar2 = *(int *)(param_1 + 8);
  }
  else {
    FUN_00201140(0x104,0xe,3,0x1f37);
    iVar2 = *(int *)(param_1 + 8);
  }
  FUN_002011b0(0x102,0x1b,*(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + iVar2 * 8 + 0x32d590));
  iVar2 = FUN_001f48c0(0x104);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x10d);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x102);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = FUN_001f48c0(0x10b);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00265f20  size 0x10c
void FUN_00265f20(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(2);
  }
  lVar2 = FUN_001ff320(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x3c),
                       (int)register0x000001c0 + -0x7a48);
  FUN_002011b0(5,0x1c,0x14d);
  if (*(int *)(param_1 + 0x898) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  iVar1 = FUN_001f48c0(0x102);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x10b);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00266030  size 0x5c8
void FUN_00266030(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x898) == 0) && (*(int *)(param_1 + 0x890) == 0)) {
    bVar1 = false;
  }
  iVar3 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar3 != 0) {
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
    if (*(int *)(param_1 + 0x880) != 2) {
      uVar2 = FUN_001f4890(899);
      iVar3 = FUN_001f48c0(0x10d);
      iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x334) = 0;
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x32c) = 0;
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    uVar2 = FUN_001f4890(0x382);
    iVar3 = FUN_001f48c0(0x10d);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
  }
  if (*(int *)(param_1 + 0x890) != 0) {
    lVar5 = FUN_00201260(0x10d,0);
    lVar6 = FUN_00201260(0x10d,1);
    if (lVar5 == 0 && lVar6 == 0) {
      FUN_00200fc0(0);
      *(undefined4 *)(param_1 + 0x890) = 0;
      bVar1 = false;
    }
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar3 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar3 != 0) {
      lVar5 = FUN_001fd2d0();
      if ((lVar5 == 0) && (iVar3 = *(int *)(param_1 + 8), iVar3 != 2)) {
        if (iVar3 == 0) {
          uVar2 = FUN_001f4890(DAT_0032d3a8);
          iVar3 = FUN_001f48c0(0x10d);
          iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
          *(undefined4 *)(iVar3 + 0x364) = 0xffffffff;
          *(undefined4 *)(iVar3 + 0x370) = 0;
          *(undefined4 *)(iVar3 + 0x360) = 0;
          if (*(int *)(iVar3 + 0x370) == 0) {
            *(undefined4 *)(iVar3 + 0x36c) = 0;
          }
          else {
            *(undefined4 *)(iVar3 + 0x36c) = 1;
          }
          *(undefined4 *)(iVar3 + 0x360) = 0;
          if (*(int *)(iVar3 + 0x370) == 0) {
            *(undefined4 *)(iVar3 + 0x36c) = 0;
          }
          else {
            *(undefined4 *)(iVar3 + 0x36c) = 1;
          }
          *(undefined4 *)(iVar3 + 0x368) = 0;
          *(undefined4 *)(iVar3 + 0x370) = uVar2;
          *(undefined4 *)(iVar3 + 0x36c) = 1;
        }
        else if (iVar3 == 1) {
          uVar2 = FUN_001f4890(DAT_0032d3ac);
          iVar3 = FUN_001f48c0(0x10d);
          iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
          *(undefined4 *)(iVar3 + 0x364) = 0xffffffff;
          *(undefined4 *)(iVar3 + 0x370) = 0;
          *(undefined4 *)(iVar3 + 0x360) = 0;
          if (*(int *)(iVar3 + 0x370) == 0) {
            *(undefined4 *)(iVar3 + 0x36c) = 0;
          }
          else {
            *(undefined4 *)(iVar3 + 0x36c) = 1;
          }
          *(undefined4 *)(iVar3 + 0x360) = 0;
          if (*(int *)(iVar3 + 0x370) == 0) {
            *(undefined4 *)(iVar3 + 0x36c) = 0;
          }
          else {
            *(undefined4 *)(iVar3 + 0x36c) = 1;
          }
          *(undefined4 *)(iVar3 + 0x368) = 0;
          *(undefined4 *)(iVar3 + 0x370) = uVar2;
          *(undefined4 *)(iVar3 + 0x36c) = 1;
        }
      }
      else {
        uVar2 = FUN_001f4890(DAT_0032d3a0);
        iVar3 = FUN_001f48c0(0x10d);
        iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
        *(undefined4 *)(iVar3 + 0x348) = 0;
        *(undefined4 *)(iVar3 + 0x338) = 0;
        if (*(int *)(iVar3 + 0x348) == 0) {
          *(undefined4 *)(iVar3 + 0x344) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x344) = 1;
        }
        *(undefined4 *)(iVar3 + 0x338) = 0;
        if (*(int *)(iVar3 + 0x348) == 0) {
          *(undefined4 *)(iVar3 + 0x344) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x344) = 1;
        }
        *(undefined4 *)(iVar3 + 0x340) = 0;
        *(undefined4 *)(iVar3 + 0x348) = uVar2;
        *(undefined4 *)(iVar3 + 0x344) = 1;
        uVar2 = FUN_001f4890(DAT_0032d3a4);
        iVar3 = FUN_001f48c0(0x10d);
        iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x350) = 0xffffffff;
        *(undefined4 *)(iVar3 + 0x35c) = 0;
        *(undefined4 *)(iVar3 + 0x34c) = 0;
        if (*(int *)(iVar3 + 0x35c) == 0) {
          *(undefined4 *)(iVar3 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x358) = 1;
        }
        *(undefined4 *)(iVar3 + 0x34c) = 0;
        if (*(int *)(iVar3 + 0x35c) == 0) {
          *(undefined4 *)(iVar3 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x358) = 1;
        }
        *(undefined4 *)(iVar3 + 0x354) = 0;
        *(undefined4 *)(iVar3 + 0x35c) = uVar2;
        *(undefined4 *)(iVar3 + 0x358) = 1;
      }
    }
    lVar5 = FUN_00201260(0x10d,2);
    lVar6 = FUN_00201260(0x10d,3);
    lVar4 = FUN_00201260(0x10d,4);
    if (lVar4 == 0 && (lVar5 == 0 && lVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x898) = 0;
      bVar1 = true;
    }
  }
  if (!bVar1) {
    FUN_00200d70(0x10d,*(undefined4 *)(&DAT_0032d568 + *(int *)(param_1 + 8) * 4),1,0);
  }
  FUN_00201260(0x10b,0);
  FUN_002011b0(0x10d,0x25,0x66);
  FUN_002011b0(0x10d,0x26,0x65);
  FUN_002011b0(0x10d,0x27,0x107);
  FUN_002011b0(0x102,0x1b,*(undefined4 *)(&DAT_0032d578 + *(int *)(param_1 + 8) * 4));
  iVar3 = FUN_001f48c0(0x10d);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0x102);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0x10b);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  return;
}

// 0x00266640  size 0x98
void FUN_00266640(int param_1)

{
  uint uVar1;
  
  if ((*(uint *)(iRam0036f458 + 0x28) & 2) == 0) {
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_FUN_0032d360)[*(int *)(param_1 + 0x884)])();
  uVar1 = *(uint *)(iRam0036f458 + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(iRam0036f458 + 0x28) = uVar1 | 0x800;
  }
  return;
}

// 0x002666e0  size 0x1f8
void FUN_002666e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = FUN_001f4890(0x381);
  iVar2 = FUN_001f48c0(0x10b);
  iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 800) == 0) {
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 1;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  if (*(int *)(param_1 + 0x884) == 2) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar1 = FUN_001f4890(DAT_0032d3a8);
      iVar2 = FUN_001f48c0(0x10d);
      iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x370) = 0;
      *(undefined4 *)(iVar2 + 0x360) = 0;
      if (*(int *)(iVar2 + 0x370) == 0) {
        *(undefined4 *)(iVar2 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x36c) = 1;
      }
      *(undefined4 *)(iVar2 + 0x360) = 0;
      if (*(int *)(iVar2 + 0x370) == 0) {
        *(undefined4 *)(iVar2 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x36c) = 1;
      }
      *(undefined4 *)(iVar2 + 0x368) = 0;
      *(undefined4 *)(iVar2 + 0x370) = uVar1;
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    else if (*(int *)(param_1 + 8) == 1) {
      uVar1 = FUN_001f4890(DAT_0032d3ac);
      iVar2 = FUN_001f48c0(0x10d);
      iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x370) = 0;
      *(undefined4 *)(iVar2 + 0x360) = 0;
      if (*(int *)(iVar2 + 0x370) == 0) {
        *(undefined4 *)(iVar2 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x36c) = 1;
      }
      *(undefined4 *)(iVar2 + 0x360) = 0;
      if (*(int *)(iVar2 + 0x370) == 0) {
        *(undefined4 *)(iVar2 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x36c) = 1;
      }
      *(undefined4 *)(iVar2 + 0x368) = 0;
      *(undefined4 *)(iVar2 + 0x370) = uVar1;
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    do {
      lVar3 = FUN_00201260(0x10d,4);
    } while (lVar3 != 0);
  }
  return;
}

// 0x002668e0  size 0x154
void FUN_002668e0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char acStack_10 [16];
  
  uVar3 = 0;
  pcVar2 = acStack_10;
  do {
    *pcVar2 = *param_3;
    cVar1 = *pcVar2;
    param_3 = param_3 + 1;
    if (cVar1 == '-') {
      *pcVar2 = ' ';
    }
    else if (cVar1 < 'A') {
      *pcVar2 = *pcVar2 + -0x32;
    }
    else if (cVar1 < 'J') {
      *pcVar2 = *pcVar2 + -0x39;
    }
    else if (cVar1 < 'P') {
      *pcVar2 = *pcVar2 + -0x3a;
    }
    else {
      *pcVar2 = *pcVar2 + -0x3b;
    }
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (uVar3 < 0xd);
  FUN_00200ff0(param_1,param_2,0,0x1f42,acStack_10[0] + 0x1f43,acStack_10[1] + 0x1f43,
               acStack_10[2] + 0x1f43,acStack_10[3] + 0x1f43);
  return;
}

// 0x00266a40  size 0x2a0
void FUN_00266a40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = FUN_001f48c0(0x103);
  iVar4 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
  FUN_001eea30(iVar4,0x35,0x16,
               *(undefined4 *)((int)register0x000001c0 + *(int *)(param_1 + 8) * 4 + -0x7a50));
  FUN_001eeb00(0,iVar4,0x52,8);
  FUN_001eeb00(0,iVar4,0x53,8);
  iVar1 = *(int *)(param_1 + 0x758);
  FUN_001eea30(iVar4,0x48,0x16,*(undefined4 *)(&DAT_0032d430 + *(int *)(param_1 + 0x10) * 4));
  uVar2 = FUN_001f4890(*(undefined4 *)(iVar1 * 4 + 0x32d390));
  iVar1 = FUN_001f48c0(0x103);
  iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
  *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar1 + 800) = 0;
  *(undefined4 *)(iVar1 + 0x310) = 0;
  if (*(int *)(iVar1 + 800) == 0) {
    *(undefined4 *)(iVar1 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x310) = 0;
  if (*(int *)(iVar1 + 800) == 0) {
    *(undefined4 *)(iVar1 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x318) = 0;
  *(undefined4 *)(iVar1 + 800) = uVar2;
  *(undefined4 *)(iVar1 + 0x31c) = 1;
  if (*(int *)(param_1 + 8) == 0) {
    uVar2 = FUN_001f4890(DAT_0032d3a8);
    iVar1 = FUN_001f48c0(0x10d);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x370) = 0;
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x368) = 0;
    *(undefined4 *)(iVar1 + 0x370) = uVar2;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    uVar2 = FUN_001f4890(DAT_0032d3ac);
    iVar1 = FUN_001f48c0(0x10d);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x370) = 0;
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x368) = 0;
    *(undefined4 *)(iVar1 + 0x370) = uVar2;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
  }
  do {
    lVar3 = FUN_00201260(0x103,0);
  } while (lVar3 != 0);
  do {
    lVar3 = FUN_00201260(0x10d,4);
  } while (lVar3 != 0);
  return;
}

// 0x00266ce0  size 0x3e0
void FUN_00266ce0(int param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar10 = 0;
  puVar9 = &DAT_0032d4b0;
  do {
    iVar7 = (*(int *)(param_1 + 0x4c) + iVar10) * 4;
    piVar8 = (int *)(param_2 + iVar7);
    piVar2 = (int *)*piVar8;
    uVar1 = *(undefined1 *)((int)piVar2 + 5);
    iVar3 = piVar2[1];
    iVar6 = *piVar2;
    iVar4 = FUN_001f48c0(0x10e);
    FUN_001eea30(*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar9,0x16,
                 *(undefined4 *)(&DAT_0032d540 + iVar7));
    if (iVar6 < 0) {
      FUN_002011b0(0x10e,puVar9[6],0x5b);
      FUN_002011b0(0x10e,puVar9[5],0x5b);
      FUN_002011b0(0x10e,puVar9[2],0x5b);
      FUN_002011b0(0x10e,puVar9[1],0x5b);
    }
    else {
      uVar5 = FUN_001f5fd0((char)iVar3);
      FUN_002011b0(0x10e,puVar9[6],uVar5);
      uVar5 = FUN_001f6040(uVar1);
      FUN_002011b0(0x10e,puVar9[5],uVar5);
      uVar5 = FUN_001f7e90(iVar6,0xffffffffffffffff);
      FUN_002011b0(0x10e,puVar9[2],uVar5);
      uVar5 = FUN_001f8170(iVar6,0xffffffffffffffff);
      FUN_00200ff0(0x10e,puVar9[3],4,uVar5);
      uVar5 = FUN_001f81a0(iVar6,0xffffffffffffffff);
      FUN_002011b0(0x10e,puVar9[1],uVar5);
    }
    FUN_002010a0(0x10e,puVar9[4],0x3a,*(undefined4 *)(*piVar8 + 0x10));
    iVar10 = iVar10 + 1;
    puVar9 = puVar9 + 7;
  } while (iVar10 < 4);
  if (*(int *)(param_1 + 0x54) - 1U < 2) {
    if (*(int *)(param_1 + 0x54) == 1) {
      iVar6 = -1;
    }
    else {
      iVar6 = 4;
    }
    iVar7 = (*(int *)(param_1 + 0x4c) + iVar6) * 4;
    piVar8 = (int *)(param_2 + iVar7);
    piVar2 = (int *)*piVar8;
    uVar1 = *(undefined1 *)((int)piVar2 + 5);
    iVar3 = piVar2[1];
    iVar6 = *piVar2;
    iVar4 = FUN_001f48c0(0x10e);
    FUN_001eea30(*piGpffff8d3c + iVar4 * 0x4f4 + 4,(&DAT_0032d4b0)[iVar10 * 7],0x16,
                 *(undefined4 *)(&DAT_0032d540 + iVar7));
    if (iVar6 < 0) {
      FUN_002011b0(0x10e,(&DAT_0032d4c8)[iVar10 * 7],0x5b);
      FUN_002011b0(0x10e,(&DAT_0032d4c4)[iVar10 * 7],0x5b);
      FUN_002011b0(0x10e,(&DAT_0032d4b8)[iVar10 * 7],0x5b);
      FUN_002011b0(0x10e,(&DAT_0032d4b4)[iVar10 * 7],0x5b);
      iVar6 = *piVar8;
    }
    else {
      uVar5 = FUN_001f5fd0((char)iVar3);
      FUN_002011b0(0x10e,(&DAT_0032d4c8)[iVar10 * 7],uVar5);
      uVar5 = FUN_001f6040(uVar1);
      FUN_002011b0(0x10e,(&DAT_0032d4c4)[iVar10 * 7],uVar5);
      uVar5 = FUN_001f7e90(iVar6,0xffffffffffffffff);
      FUN_002011b0(0x10e,(&DAT_0032d4b8)[iVar10 * 7],uVar5);
      uVar5 = FUN_001f8170(iVar6,0xffffffffffffffff);
      FUN_00200ff0(0x10e,(&DAT_0032d4bc)[iVar10 * 7],4,uVar5);
      uVar5 = FUN_001f81a0(iVar6,0xffffffffffffffff);
      FUN_002011b0(0x10e,(&DAT_0032d4b4)[iVar10 * 7],uVar5);
      iVar6 = *piVar8;
    }
    FUN_002010a0(0x10e,(&DAT_0032d4c0)[iVar10 * 7],0x3a,*(undefined4 *)(iVar6 + 0x10));
  }
  return;
}

// 0x002670c0  size 0x420
void FUN_002670c0(int param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar10 = 0;
  puVar9 = &DAT_0032d4b0;
  do {
    iVar7 = (*(int *)(param_1 + 0x4c) + iVar10) * 4;
    piVar8 = (int *)(param_2 + iVar7);
    piVar2 = (int *)*piVar8;
    uVar1 = *(undefined1 *)((int)piVar2 + 5);
    iVar3 = piVar2[1];
    iVar6 = *piVar2;
    iVar4 = FUN_001f48c0(0x10e);
    FUN_001eea30(*piGpffff8d3c + iVar4 * 0x4f4 + 4,*puVar9,0x16,
                 *(undefined4 *)(&DAT_0032d540 + iVar7));
    if (iVar6 < 0) {
      FUN_002011b0(0x10e,puVar9[6],0x5b);
      FUN_002011b0(0x10e,puVar9[5],0x5b);
      FUN_002011b0(0x10e,puVar9[2],0x5b);
      FUN_002011b0(0x10e,puVar9[1],0x5b);
    }
    else {
      uVar5 = FUN_001f5fd0((char)iVar3);
      FUN_002011b0(0x10e,puVar9[6],uVar5);
      uVar5 = FUN_001f6040(uVar1);
      FUN_002011b0(0x10e,puVar9[5],uVar5);
      uVar5 = FUN_001f7e90(iVar6,0xffffffffffffffff);
      FUN_002011b0(0x10e,puVar9[2],uVar5);
      uVar5 = FUN_001f8170(iVar6,0xffffffffffffffff);
      FUN_00200ff0(0x10e,puVar9[3],4,uVar5);
      uVar5 = FUN_001f81a0(iVar6,0xffffffffffffffff);
      FUN_002011b0(0x10e,puVar9[1],uVar5);
    }
    Time_SplitHms(1,*(undefined4 *)(*piVar8 + 0xc),&uStack_4,&uStack_8,&uStack_c);
    FUN_002010a0(0x10e,puVar9[4],0x331,uStack_4,uStack_8,uStack_c);
    iVar10 = iVar10 + 1;
    puVar9 = puVar9 + 7;
  } while (iVar10 < 4);
  if (*(int *)(param_1 + 0x54) - 1U < 2) {
    if (*(int *)(param_1 + 0x54) == 1) {
      iVar6 = -1;
    }
    else {
      iVar6 = 4;
    }
    iVar7 = (*(int *)(param_1 + 0x4c) + iVar6) * 4;
    piVar8 = (int *)(param_2 + iVar7);
    piVar2 = (int *)*piVar8;
    uVar1 = *(undefined1 *)((int)piVar2 + 5);
    iVar3 = piVar2[1];
    iVar6 = *piVar2;
    iVar4 = FUN_001f48c0(0x10e);
    FUN_001eea30(*piGpffff8d3c + iVar4 * 0x4f4 + 4,(&DAT_0032d4b0)[iVar10 * 7],0x16,
                 *(undefined4 *)(&DAT_0032d540 + iVar7));
    if (iVar6 < 0) {
      FUN_002011b0(0x10e,(&DAT_0032d4c8)[iVar10 * 7],0x5b);
      FUN_002011b0(0x10e,(&DAT_0032d4c4)[iVar10 * 7],0x5b);
      FUN_002011b0(0x10e,(&DAT_0032d4b8)[iVar10 * 7],0x5b);
      FUN_002011b0(0x10e,(&DAT_0032d4b4)[iVar10 * 7],0x5b);
      iVar6 = *piVar8;
    }
    else {
      uVar5 = FUN_001f5fd0((char)iVar3);
      FUN_002011b0(0x10e,(&DAT_0032d4c8)[iVar10 * 7],uVar5);
      uVar5 = FUN_001f6040(uVar1);
      FUN_002011b0(0x10e,(&DAT_0032d4c4)[iVar10 * 7],uVar5);
      uVar5 = FUN_001f7e90(iVar6,0xffffffffffffffff);
      FUN_002011b0(0x10e,(&DAT_0032d4b8)[iVar10 * 7],uVar5);
      uVar5 = FUN_001f8170(iVar6,0xffffffffffffffff);
      FUN_00200ff0(0x10e,(&DAT_0032d4bc)[iVar10 * 7],4,uVar5);
      uVar5 = FUN_001f81a0(iVar6,0xffffffffffffffff);
      FUN_002011b0(0x10e,(&DAT_0032d4b4)[iVar10 * 7],uVar5);
      iVar6 = *piVar8;
    }
    Time_SplitHms(1,*(undefined4 *)(iVar6 + 0xc),&uStack_10,&uStack_14,&uStack_18);
    FUN_002010a0(0x10e,(&DAT_0032d4c0)[iVar10 * 7],0x331,uStack_10,uStack_14,uStack_18);
  }
  return;
}

// 0x002674e0  size 0x380
void FUN_002674e0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_001f4890(0x1df);
    iVar3 = FUN_001f48c0(0x31);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar4;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar4 = FUN_001f4890(0x1e0);
    iVar3 = FUN_001f48c0(0x31);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar4;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar4 = FUN_001f4890(0x1e1);
    iVar3 = FUN_001f48c0(0x31);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar4;
    *(undefined4 *)(iVar3 + 0x344) = 1;
  }
  lVar5 = FUN_00201260(0x31,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (lVar5 = FUN_00201260(0x31), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_00201140(0x31,0x13,4,0x3cb);
  FUN_00201140(0x31,0x15,4,0x3cc);
  FUN_002011b0(0x31,0x14,0x3cd);
  uVar6 = FUN_001c1890(0);
  cVar1 = FUN_001b8a10(uVar6);
  FUN_002010a0(0x31,0x17,0x3a,cVar1 + -1);
  FUN_002010a0(0x31,0x18,0x3a,*(undefined4 *)(param_1 + 0x2c));
  uVar6 = FUN_001c1890(0);
  uVar2 = FUN_001b8a10(uVar6);
  FUN_00200ff0(0x31,0x16,5,0x3a,uVar2);
  uVar6 = FUN_001c1890(0);
  uVar2 = FUN_001b8eb0(uVar6);
  FUN_00200ff0(0x31,0x19,5,0x3a,uVar2);
  FUN_00201260(0x31,2);
  iVar3 = FUN_001f48c0(0x31);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = FUN_001f48c0(0x30);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  FUN_00201260(0x13,0);
  iVar3 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x00267860  size 0x12c
void FUN_00267860(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(0);
  }
  lVar2 = FUN_001ff320(0x3c9,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_00201260(0x13,0);
  iVar1 = FUN_001f48c0(0x30);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x00267990  size 0x12c
void FUN_00267990(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar1 != 0) {
    FUN_001ff610(0);
  }
  lVar2 = FUN_001ff320(0x3ce,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_00201260(0x13,0);
  iVar1 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = FUN_001f48c0(0x30);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x00267ac0  size 0x43c
void FUN_00267ac0(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar3 = param_1[6];
  param_1[6] = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_001f4890(0x1dc);
    iVar3 = FUN_001f48c0(0x30);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar4;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar4 = FUN_001f4890(0x1dd);
    iVar3 = FUN_001f48c0(0x30);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar4;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar4 = FUN_001f4890(0x1de);
    iVar3 = FUN_001f48c0(0x30);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar4;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    FUN_00200fc0(0);
  }
  lVar5 = FUN_00201260(0x30,0);
  if (lVar5 == 0) {
    param_1[5] = 0;
  }
  if ((param_1[7] != 0) && (lVar5 = FUN_00201260(0x30), lVar5 == 0)) {
    param_1[7] = 0;
  }
  if (*piGpffff8d78 == 1) {
    FUN_00200d70(0x30,*(undefined4 *)((int)register0x000001c0 + *param_1 * 4 + -0x79e8),1,0);
  }
  FUN_00201140(0x30,0x22,4,0x3cb);
  FUN_00201140(0x30,0x27,4,0x3cc);
  uVar6 = FUN_001c1890(0);
  uVar6 = FUN_001b8ac0(uVar6);
  FUN_001fe620(0x30,0x23,uVar6);
  FUN_002011b0(0x30,0x25,0x3ca);
  uVar6 = FUN_001c1890(0);
  uVar1 = FUN_001b8a10(uVar6);
  FUN_002010a0(0x30,0x29,0x3a,uVar1);
  uVar6 = FUN_001c1890(0);
  uVar1 = FUN_001b8eb0(uVar6);
  FUN_002010a0(0x30,0x2a,0x3a,uVar1);
  uVar6 = FUN_001c1890(0);
  lVar5 = FUN_001b8ac0(uVar6);
  if (lVar5 == 0) {
    FUN_00201140(0x30,0x28,5,0x59);
    FUN_00201140(0x30,0x2b,5,0x59);
  }
  else {
    uVar6 = FUN_001c1890(0);
    cVar2 = FUN_001b8a10(uVar6);
    FUN_00200ff0(0x30,0x28,5,0x3a,cVar2 + 1);
    uVar6 = FUN_001c1890(0);
    uVar1 = FUN_001b8a60(uVar6);
    FUN_00200ff0(0x30,0x2b,5,0x3a,uVar1);
  }
  FUN_002011b0(0x30,0x24,1);
  FUN_002011b0(0x30,0x26,2);
  FUN_00201260(0x30,2);
  iVar3 = FUN_001f48c0(0x30);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  FUN_00201260(0x13,0);
  iVar3 = FUN_001f48c0(0x13);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  FUN_001ffdc0(0xffffffffffffffff,0,0xffffffffffffffff,0);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x00267f20  size 0xe0
void FUN_00267f20(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_FUN_0032d740)[*(int *)((int)param_1 + 8)])(param_1);
  uVar1 = FUN_001c1890(0);
  uVar1 = FUN_001bcb00(uVar1);
  FUN_001fe620(0x12,0x36,uVar1);
  if (((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) &&
     (lVar2 = FUN_001fb170((int)param_1 + 4), lVar2 == 1)) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
    }
  }
  return;
}

