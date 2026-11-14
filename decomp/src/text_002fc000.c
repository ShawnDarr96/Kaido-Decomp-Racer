// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002fc000 - 0x00300000
#include "ghidra_types.h"

// 0x002fd080  size 0x20
undefined1 FUN_002fd080(void)

{
  undefined1 auStack_50 [80];
  
  FUN_001778a0(auStack_50);
  return auStack_50[0];
}

// 0x002fd0a0  size 0x20
undefined1 FUN_002fd0a0(void)

{
  undefined1 uStack_50;
  undefined1 uStack_4f;
  
  FUN_001778a0(&uStack_50);
  return uStack_4f;
}

// 0x002fd0c0  size 0xbc
undefined4 FUN_002fd0c0(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  lVar2 = FUN_00177070(1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_00177160(*(undefined1 *)((int)lVar2 + 9));
  }
  if (lVar2 != 0) {
    uVar1 = FUN_001b4930(lVar2);
    switch(uVar1) {
    case 2:
      uVar3 = 1;
      break;
    case 3:
      uVar3 = 2;
      break;
    case 4:
      uVar3 = 3;
      break;
    case 6:
      uVar3 = 4;
      break;
    case 7:
      uVar3 = 5;
      break;
    case 8:
      uVar3 = 6;
      break;
    case 9:
      uVar3 = 7;
      break;
    case 10:
      uVar3 = 8;
    }
  }
  return uVar3;
}

// 0x002fd180  size 0x34
undefined8 FUN_002fd180(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00177070(1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00177160(*(undefined1 *)((int)lVar1 + 9));
  }
  return uVar2;
}

// 0x002fd1c0  size 0xc
undefined4 FUN_002fd1c0(void)

{
  return uRam0046a598;
}

// 0x002fd1e0  size 0x398
void FUN_002fd1e0(int *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = FUN_001fb170(param_1 + 3);
  if (lVar2 != 0) {
    iVar1 = param_1[4];
    if (iVar1 == 3) {
      iVar1 = param_1[2];
      param_1[2] = iVar1 + 1;
      if (600 < iVar1) {
        param_1[1] = 0;
        param_1[5] = 2;
        if (*param_1 == 0) {
          FUN_001a97d0(1);
        }
      }
      uVar3 = piGpffff8d78[2];
      if ((piGpffff8d78[4] & uVar3) == 0) {
        uVar3 = 0x100000;
      }
      else if (uVar3 == 0x80000) {
        uVar3 = 0x80000;
      }
      else if (*piGpffff8d78 != 1) {
        uVar3 = 0x100000;
      }
      if (uVar3 == 0x40) {
        param_1[1] = 0;
        *param_1 = 1;
        param_1[5] = 2;
      }
      else if ((uVar3 == 0x10) || (uVar3 == 0x20)) {
        param_1[1] = 0;
        if (*param_1 == 0) {
          FUN_001a97d0(1);
        }
        param_1[5] = 2;
      }
    }
    else if (iVar1 == 2) {
      uVar3 = piGpffff8d78[2];
      if ((piGpffff8d78[4] & uVar3) == 0) {
        uVar3 = 0x100000;
      }
      else if (uVar3 == 0x80000) {
        uVar3 = 0x80000;
      }
      else if (*piGpffff8d78 != 1) {
        uVar3 = 0x100000;
      }
      if (uVar3 == 0x10) {
        FUN_001fb290(5);
        if (param_1[1] == 0) {
          FUN_001fd070(0);
          param_1[1] = 0;
        }
        else {
          if (param_1[1] == 1) {
            FUN_001a97d0(0);
            param_1[5] = 3;
          }
          else {
            FUN_001a97d0();
            *param_1 = 0;
          }
          param_1[1] = 0;
        }
        param_1[2] = 0;
      }
      else if (uVar3 == 0x20) {
        FUN_001fb290(8);
      }
      FUN_001f8640(param_1 + 1,0,2,2,1,0);
    }
    else if (iVar1 == 1) {
      FUN_00138bf0((int)register0x000001c0 + -0x7730);
      iVar1 = iRam00386628;
      FUN_00138ba0((int)register0x000001c0 + -0x7730,0);
      if (iVar1 == 0) {
        if (*(int *)(iGpffff8d68 + 0x24) == -1) {
          param_1[5] = 2;
        }
        else {
          FUN_001fd070();
        }
      }
    }
    else if (iVar1 == 0) {
      uVar3 = piGpffff8d78[2];
      if ((piGpffff8d78[4] & uVar3) == 0) {
        uVar3 = 0x100000;
      }
      else if (uVar3 == 0x80000) {
        uVar3 = 0x80000;
      }
      else if (*piGpffff8d78 != 1) {
        uVar3 = 0x100000;
      }
      if (uVar3 == 0x10) {
        FUN_001fb290(5);
        *(undefined1 *)(iGpffff8ae4 + 0x15) =
             *(undefined1 *)((int)register0x000001c0 + param_1[1] + -0x77c8);
        FUN_001f06b0(0x1870);
        param_1[1] = 0;
        param_1[5] = 1;
      }
      else if (uVar3 == 0x20) {
        FUN_001fb290(8);
      }
      FUN_001f8640(param_1 + 1,0,2,4,1,0);
    }
    FUN_001fb240(param_1 + 3);
  }
  return;
}

// 0x002fd5e0  size 0x3d0
void FUN_002fd5e0(int *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
  }
  iVar1 = param_1[4];
  if (iVar1 == 3) {
    iVar1 = FUN_001f48c0(0x12a);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
    FUN_002010a0(0x12a,1,0x1f89,(600 - param_1[2]) / 0x3c + 1);
  }
  else if (iVar1 == 2) {
    iVar1 = param_1[8];
    param_1[8] = 0;
    if (iVar1 != 0) {
      FUN_00200d70(0x129,1,1,0);
      FUN_00200ef0(0);
      FUN_00200d70(0x129,6,1,0);
      FUN_00200ef0(0);
      FUN_00200d70(0x129,0xb,1,0);
      FUN_00200ef0(0);
    }
    iVar1 = FUN_001f48c0(0x129);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
    if (*param_1 == 0) {
      FUN_002010a0(0x129,0x14,0x1f82,0x1f83);
    }
    else {
      FUN_002010a0(0x129,0x14,0x1f82,0x1f84);
    }
    FUN_002011b0(0x129,0x13,0x1f85);
    FUN_002011b0(0x129,0x15,0x1f86);
    FUN_002011b0(0x129,0x16,0x1f88);
    FUN_00200d70(0x129,*(undefined4 *)(&DAT_0035e098 + param_1[1] * 4),1,0);
  }
  else if (iVar1 == 1) {
    FUN_001f4e90(0);
  }
  else {
    if (iVar1 != 0) {
      param_1[7] = 0;
      goto LAB_002fd938;
    }
    iVar1 = param_1[8];
    param_1[8] = 0;
    if (iVar1 != 0) {
      FUN_00200d70(0x128,1,1,0);
      FUN_00200ef0(0);
      FUN_00200d70(0x128,6,1,0);
      FUN_00200ef0(0);
      FUN_00200d70(0x128,0xb,1,0);
      FUN_00200ef0(0);
      FUN_00200d70(0x128,0x10,1,0);
      FUN_00200ef0(0);
      FUN_00200d70(0x128,0x15,1,0);
      FUN_00200ef0(0);
    }
    iVar1 = FUN_001f48c0(0x128);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
    FUN_002011b0(0x128,0x1f,0x1f8c);
    FUN_002011b0(0x128,0x20,0x1f8d);
    FUN_002011b0(0x128,0x21,0x1f8e);
    FUN_002011b0(0x128,0x22,0x1f8f);
    FUN_002011b0(0x128,0x23,0x1f90);
    FUN_00200d70(0x128,*(undefined4 *)(&DAT_0035e080 + param_1[1] * 4),1,0);
  }
  param_1[7] = 0;
LAB_002fd938:
  param_1[9] = 0;
  if (((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) && (lVar2 = FUN_001fb170(param_1 + 3), lVar2 == 1))
  {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
    }
  }
  return;
}

