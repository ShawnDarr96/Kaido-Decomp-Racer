// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001e8000 - 0x001ec000
#include "ghidra_types.h"

// 0x001e80e0  size 0x2d8
void FUN_001e80e0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  float fVar9;
  
  lVar5 = FUN_001e90f0();
  if (lVar5 != 1) {
    return;
  }
  lVar5 = FUN_001e9010();
  puVar7 = (undefined1 *)param_1;
  *(uint *)(puVar7 + 0x18) = (uint)(lVar5 != 0);
  cVar1 = FUN_00183470();
  *(int *)(puVar7 + 0x1c) = (int)cVar1;
  FUN_001e8e50(param_1,0xff);
  FUN_001e8e50(puVar7 + 8,0xff);
  FUN_001e8e50(puVar7 + 0x10,0xff);
  FUN_001e8860(param_1,param_1,3);
  uVar2 = FUN_00183470();
  uVar3 = FUN_00192800(uVar2);
  (**(code **)(**(int **)(puVar7 + 4) + 0x10))(*(int **)(puVar7 + 4),*puVar7,uVar3,0x3f,1);
  if (*(int *)(puVar7 + 0x18) == 0) {
    uVar2 = FUN_00183470();
    uVar3 = FUN_00192800(uVar2);
    (**(code **)(**(int **)(puVar7 + 0xc) + 0x10))(*(int **)(puVar7 + 0xc),puVar7[8],uVar3,0x3f,1);
  }
  else {
    uVar2 = FUN_00183470();
    uVar3 = FUN_00192800(uVar2);
    (**(code **)(**(int **)(puVar7 + 0x14) + 0x10))
              (*(int **)(puVar7 + 0x14),puVar7[0x10],uVar3,0x3f,1);
  }
  fVar9 = DAT_0036e860;
  if (iRam0036f1f8 != 0) goto LAB_001e8224;
  cVar1 = FUN_00183470();
  *(int *)(puVar7 + 0x1c) = (int)cVar1;
  lVar5 = FUN_00183600();
  if (lVar5 != 0) {
    uVar6 = FUN_00177070(0);
    uVar6 = FUN_001d2280(uVar6,0xb);
    fVar4 = 1.0;
    switch(uVar6) {
    case 0:
      fVar9 = fVar9 * 0.8;
      goto LAB_001e8314;
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
    fVar9 = fVar9 * fVar4;
  }
LAB_001e8314:
  uVar6 = FUN_00191420();
  uVar6 = FUN_00191410(uVar6,1);
  fVar9 = (float)*(int *)(puVar7 + 0x1c) * fVar9;
  if (fVar9 < 2.1474836e+09) {
    uVar8 = (uint)fVar9;
  }
  else {
    uVar8 = (int)(fVar9 - 2.1474836e+09) | 0x80000000;
  }
  uVar3 = FUN_00192800(uVar8);
  (**(code **)(*(int *)uVar6 + 0x20))(uVar6,uVar3);
LAB_001e8224:
  if (iRam0046a590 == 0) {
    *(undefined4 *)(puVar7 + 0x24) = 3;
  }
  else {
    *(undefined4 *)(puVar7 + 0x24) = 2;
  }
  return;
}

// 0x001e83c0  size 0x2cc
void FUN_001e83c0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (int)param_1;
  if ((uRam0036f25c & 0x20) != 0) {
    *(undefined4 *)(iVar4 + 0x24) = 7;
  }
  switch(*(undefined4 *)(iVar4 + 0x24)) {
  case 0:
    (**(code **)(**(int **)(iVar4 + 4) + 0x1c))();
    if (*(int *)(iVar4 + 0x18) == 0) {
      (**(code **)(**(int **)(iVar4 + 0xc) + 0x1c))();
    }
    else {
      (**(code **)(**(int **)(iVar4 + 0x14) + 0x1c))();
    }
    FUN_001e6b80(param_1);
    *(undefined4 *)(iVar4 + 0x24) = 1;
    break;
  case 1:
    FUN_001e80e0(param_1);
    break;
  case 2:
    iVar6 = *(int *)(iRam0036f1fc + 0x14);
    FUN_001543c0(0);
    lVar2 = FUN_0014b8b0();
    if (lVar2 == 4) {
      return;
    }
    lVar2 = FUN_001e9010();
    if (lVar2 == 0) {
      if (*(int *)(iVar6 + 0x500) == 0) {
        if (iRam0036f26c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iRam0036f26c + 0x80;
        }
        FUN_00192890(iVar4,iVar6);
      }
      else {
        if (iRam0036f26c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iRam0036f26c + 0x80;
        }
        FUN_00193070(iVar4);
      }
    }
    else {
      if (iRam0036f26c == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iRam0036f26c + 0x80;
      }
      FUN_00193070(iVar6);
      *(undefined4 *)(iVar4 + 0x24) = 6;
    }
    break;
  case 3:
    lVar2 = thunk_FUN_001e8fc0();
    if ((lVar2 == 0) && (iRam0036f1f8 != 0)) {
      FUN_001e7740(param_1);
    }
    else {
      FUN_001e79d0(param_1);
    }
    break;
  case 4:
    FUN_001e7440(param_1);
    break;
  case 5:
  case 8:
    break;
  case 6:
    FUN_001e6f60(param_1);
    break;
  case 7:
    iVar6 = 0;
    lVar2 = FUN_00177210();
    if (0 < lVar2) {
      iVar5 = 0;
      do {
        if (iRam0036f26c == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = iRam0036f26c + iVar5;
        }
        FUN_00193070(iVar1);
        iVar5 = iVar5 + 0x80;
        iVar6 = iVar6 + 1;
        iVar1 = FUN_00177210();
      } while (iVar6 < iVar1);
    }
    (**(code **)(**(int **)(iVar4 + 4) + 0x1c))();
    if (*(int *)(iVar4 + 0x18) == 0) {
      (**(code **)(**(int **)(iVar4 + 0xc) + 0x1c))();
    }
    else {
      (**(code **)(**(int **)(iVar4 + 0x14) + 0x1c))();
    }
    uRam0036f25c = uRam0036f25c & 0xffffffdf;
    uVar3 = FUN_00191420();
    FUN_00191010(uVar3);
    *(undefined4 *)(iVar4 + 0x24) = 0;
    break;
  default:
    goto switchD_001e840c_default;
  }
switchD_001e840c_default:
  return;
}

// 0x001e8690  size 0x1c8
void FUN_001e8690(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_50 [2];
  undefined1 uStack_4e;
  
  uVar3 = FUN_00191420();
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0x28) = 0;
  *(undefined4 *)(iVar7 + 0x20) = 0;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  lVar4 = FUN_001e9010();
  *(uint *)(iVar7 + 0x18) = (uint)(lVar4 != 0);
  cVar1 = FUN_00183470();
  *(int *)(iVar7 + 0x1c) = (int)cVar1;
  FUN_001e8e50(param_1,0xff);
  FUN_001e8e50(iVar7 + 8,0xff);
  FUN_001e8e50(iVar7 + 0x10,0xff);
  *(undefined4 *)(iVar7 + 0x2c) = 0;
  *(undefined4 *)(iVar7 + 0x30) = 5000000;
  *(undefined4 *)(iVar7 + 0x38) = 0;
  *(undefined4 *)(iVar7 + 0x3c) = 5000000;
  uVar2 = FUN_00183460();
  uVar5 = FUN_00192770(uVar2);
  FUN_00191110(uVar3,uVar5);
  uVar5 = FUN_00191400(uVar3,1);
  uVar6 = FUN_00191400(uVar3,2);
  uVar3 = FUN_00191400(uVar3,3);
  FUN_0018faf0(uVar3,0x1c1a,0x1c63,0,0);
  FUN_001778a0(auStack_50);
  switch(uStack_4e) {
  default:
    FUN_0018faf0(uVar6,0x1c17,0x1c60,0,0);
    FUN_0018faf0(uVar5,0x1c14,0x1c5d,0,0);
    break;
  case 1:
  case 4:
    FUN_0018faf0(uVar6,0x1c19,0x1c62,0,0);
    FUN_0018faf0(uVar5,0x1c16,0x1c5f,0,0);
    break;
  case 2:
  case 5:
    FUN_0018faf0(uVar6,0x1c18,0x1c61,0,0);
    FUN_0018faf0(uVar5,0x1c15,0x1c5e,0,0);
  }
  return;
}

// 0x001e8860  size 0x3b0
void FUN_001e8860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_50 [80];
  
  cVar1 = FUN_0017e8d0();
  if (cVar1 == '\x06') {
    FUN_001e8e50(param_2,0xff);
    FUN_001e8c20(param_1,param_2);
  }
  else {
    iVar6 = (int)param_2;
    switch(param_3) {
    case 0:
    case 1:
    case 4:
    case 7:
    case 8:
      FUN_001e8e50(iVar6 + 8,0xff);
      FUN_001e8e50(iVar6 + 0x10,0xff);
      FUN_001e8e50(param_2,0xff);
      break;
    case 2:
      break;
    case 3:
      lVar3 = FUN_002fd0c0();
      if (lVar3 == 0) {
        uVar5 = FUN_002fd180();
        cVar1 = FUN_001b4930(uVar5);
        if (cVar1 == '\x05') {
          FUN_001e8e50(param_2);
        }
        else {
          FUN_001e8e50(param_2,0x29);
        }
      }
      else if (iRam0046a590 == 0) {
        lVar3 = FUN_002fd0c0();
        if (lVar3 == 8) {
          FUN_001e8e50(param_2,2);
        }
        else if (lVar3 == 4) {
          FUN_001e8e50(param_2,6);
        }
        else if (lVar3 == 7) {
          FUN_001e8e50(param_2,10);
        }
        else if (lVar3 == 1) {
          FUN_001e8e50(param_2,0x10);
        }
        else if (lVar3 == 5) {
          FUN_001e8e50(param_2);
        }
        else {
          FUN_001e8e50(param_2,0xc);
        }
      }
      else {
        lVar3 = FUN_002fd0c0();
        if (lVar3 == 8) {
          FUN_001e8e50(param_2,0x13);
        }
        else if (lVar3 == 4) {
          FUN_001e8e50(param_2,0x15);
        }
        else if (lVar3 == 7) {
          FUN_001e8e50(param_2,0x16);
        }
        else if (lVar3 == 1) {
          FUN_001e8e50(param_2,0x18);
        }
        else if (lVar3 == 5) {
          FUN_001e8e50(param_2,0x14);
        }
        else {
          FUN_001e8e50(param_2,0x17);
        }
      }
      FUN_001e8c20(param_1,param_2);
      break;
    case 5:
      FUN_001e8e50(iVar6 + 8,0xff);
      FUN_001e8e50(iVar6 + 0x10,0xff);
      FUN_001778a0(auStack_50);
      uVar2 = FUN_0017e890();
      switch(uVar2) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 7:
      case 8:
        uVar4 = FUN_00176fa0();
        if ((uVar4 & 9) == 0) {
          FUN_001e8e50(param_2,3);
        }
        else {
          FUN_001e8e50(param_2,0x11);
        }
        lVar3 = thunk_FUN_001e8fc0();
        if (lVar3 != 0) {
          return;
        }
        if (iGpffff8b08 == 0) {
          return;
        }
        FUN_001e8e50(param_2,9);
        break;
      default:
        FUN_001e8e50(param_2,9);
        break;
      case 9:
      case 10:
        FUN_001e8e50(param_2,0xff);
      }
      break;
    case 6:
      FUN_001e8e50(param_2,0xff);
      FUN_001e8c20(param_1,param_2);
      break;
    default:
      goto switchD_001e88b4_default;
    }
  }
switchD_001e88b4_default:
  return;
}

// 0x001e8c20  size 0x12c
void FUN_001e8c20(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_f0 [3];
  byte bStack_ed;
  undefined1 auStack_a0 [2];
  byte bStack_9e;
  byte abStack_50 [80];
  
  FUN_001e8e50(param_2 + 8,0xff);
  FUN_001e8e50(param_2 + 0x10,0xff);
  FUN_001778a0(abStack_50);
  FUN_001778a0(auStack_a0);
  uVar2 = (uint)bStack_9e;
  FUN_001778a0(auStack_f0);
  if ((abStack_50[0] == 8) && (uVar2 == 2)) {
    uVar2 = 3;
  }
  switch(uVar2) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 1;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
    uVar2 = 2;
    break;
  case 5:
    uVar2 = 2;
  }
  iVar1 = (uint)abStack_50[0] * 0x40;
  FUN_001e8e50(param_2 + 8,*(undefined4 *)(uVar2 * 8 + (uint)bStack_ed * 0x20 + iVar1 + 0x31c410));
  FUN_001e8e50(param_2 + 0x10,*(undefined4 *)(uVar2 * 8 + (uint)bStack_ed * 0x20 + iVar1 + 0x31c414)
              );
  return;
}

// 0x001e8e00  size 0x4c
void FUN_001e8e00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  FUN_001936b0(0x430750);
  FUN_001e8690(uVar1);
  *(undefined1 **)(param_1 + 0x1c) = &LAB_001e8d50;
  return;
}

// 0x001e8e50  size 0xc8
void FUN_001e8e50(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00191420();
  if (param_2 == 0xff) {
    uVar1 = FUN_00191410(uVar2,5);
    param_1[1] = uVar1;
  }
  else if (param_2 == 0x29) {
    uVar1 = FUN_00191410(uVar2,4);
    param_1[1] = uVar1;
  }
  else if ((param_2 < 0x27) || (0x28 < param_2)) {
    if (param_2 < 0x19) {
      uVar1 = FUN_00191410(uVar2,0);
      param_1[1] = uVar1;
    }
    else {
      uVar1 = FUN_00191410(uVar2,1);
      param_1[1] = uVar1;
    }
  }
  else {
    uVar1 = FUN_00191410(uVar2,2);
    param_1[1] = uVar1;
  }
  *param_1 = (int)param_2;
  return;
}

// 0x001e8f20  size 0xc
undefined4 FUN_001e8f20(void)

{
  return *(undefined4 *)(iGpffff8ce8 + 0x38);
}

// 0x001e8f30  size 0xc
undefined4 FUN_001e8f30(void)

{
  return *(undefined4 *)(iGpffff8ce8 + 0x40);
}

// 0x001e8f40  size 0x14
bool FUN_001e8f40(void)

{
  return (*(uint *)(iGpffff8ce8 + 0x30) & 0x1000) != 0;
}

// 0x001e8f60  size 0x14
bool FUN_001e8f60(void)

{
  return (*(uint *)(iGpffff8ce8 + 0x30) & 0x400) != 0;
}

// 0x001e8f80  size 0x18
void FUN_001e8f80(void)

{
  *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) & 0xfffff7ff;
  return;
}

// 0x001e8fa0  size 0x14
bool FUN_001e8fa0(void)

{
  return (*(uint *)(iGpffff8ce8 + 0x30) & 0x800) != 0;
}

// 0x001e8fc0  size 0x14
bool FUN_001e8fc0(void)

{
  return (*(uint *)(iGpffff8ce8 + 0x30) & 0x10) != 0;
}

// 0x001e8fe0  size 0x24
bool FUN_001e8fe0(void)

{
  bool bVar1;
  
  if (iGpffff8ce8 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(iGpffff8ce8 + 0x30) & 0x20000) != 0;
  }
  return bVar1;
}

// 0x001e9010  size 0x20
bool FUN_001e9010(void)

{
  bool bVar1;
  
  if (iGpffff8ce8 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(iGpffff8ce8 + 0x30) & 0x40) != 0;
  }
  return bVar1;
}

// 0x001e9030  size 0x14
void FUN_001e9030(void)

{
  *(uint *)(iGpffff8ce8 + 0x34) = *(uint *)(iGpffff8ce8 + 0x34) | 4;
  return;
}

// 0x001e9050  size 0x14
bool FUN_001e9050(void)

{
  return (*(uint *)(iGpffff8ce8 + 0x30) & 2) != 0;
}

// 0x001e9070  size 0x14
void FUN_001e9070(void)

{
  *(uint *)(iGpffff8ce8 + 0x34) = *(uint *)(iGpffff8ce8 + 0x34) | 2;
  return;
}

// 0x001e9090  size 0x18
bool FUN_001e9090(void)

{
  return (*(uint *)(iGpffff8ce8 + 0x30) & 0x10000) != 0;
}

// 0x001e90b0  size 0x14
bool FUN_001e90b0(void)

{
  return (*(uint *)(iGpffff8ce8 + 0x30) & 0x8000) != 0;
}

// 0x001e90d0  size 0x18
void FUN_001e90d0(void)

{
  *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) & 0xfffffffe;
  return;
}

// 0x001e90f0  size 0x14
bool FUN_001e90f0(void)

{
  return (*(uint *)(iGpffff8ce8 + 0x30) & 1) != 0;
}

// 0x001e9110  size 0xc
undefined4 FUN_001e9110(void)

{
  return *puGpffff8ce8;
}

// 0x001e9120  size 0x14
void FUN_001e9120(uint param_1)

{
  *puGpffff8ce8 = *puGpffff8ce8 | param_1;
  return;
}

// 0x001e9140  size 0x5f0
void FUN_001e9140(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  uVar1 = *puGpffff8ce8;
  iVar5 = (int)param_1;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 8) == 0) {
          if ((uVar1 & 0x10) != 0) {
            *puGpffff8ce8 = *puGpffff8ce8 & 0xffffffef;
            puVar2 = PTR_FUN_0031c820;
            uStack_50 = DAT_0031c818;
            uVar3 = uStack_50;
            puStack_48 = PTR_FUN_0031c820;
            uStack_50._0_4_ = (undefined4)DAT_0031c818;
            uStack_50._4_4_ = (undefined4)((ulong)DAT_0031c818 >> 0x20);
            *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_50;
            *(undefined4 *)(iVar5 + 0xc) = uStack_50._4_4_;
            *(undefined **)(iVar5 + 0x10) = puVar2;
            uStack_50 = uVar3;
            lVar4 = FUN_001011c0(&uStack_50);
            if (lVar4 != 0) {
              FUN_00101180(param_1);
            }
          }
        }
        else {
          *puGpffff8ce8 = *puGpffff8ce8 & 0xfffffff7;
          puVar2 = PTR_FUN_0031c810;
          uStack_40 = DAT_0031c808;
          uVar3 = uStack_40;
          puStack_38 = PTR_FUN_0031c810;
          uStack_40._0_4_ = (undefined4)DAT_0031c808;
          uStack_40._4_4_ = (undefined4)((ulong)DAT_0031c808 >> 0x20);
          *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_40;
          *(undefined4 *)(iVar5 + 0xc) = uStack_40._4_4_;
          *(undefined **)(iVar5 + 0x10) = puVar2;
          uStack_40 = uVar3;
          lVar4 = FUN_001011c0(&uStack_40);
          if (lVar4 != 0) {
            FUN_00101180(param_1);
          }
        }
      }
      else {
        *puGpffff8ce8 = *puGpffff8ce8 & 0xfffffffb;
        puVar2 = PTR_FUN_0031c800;
        uStack_30 = DAT_0031c7f8;
        uVar3 = uStack_30;
        puStack_28 = PTR_FUN_0031c800;
        uStack_30._0_4_ = (undefined4)DAT_0031c7f8;
        uStack_30._4_4_ = (undefined4)((ulong)DAT_0031c7f8 >> 0x20);
        *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_30;
        *(undefined4 *)(iVar5 + 0xc) = uStack_30._4_4_;
        *(undefined **)(iVar5 + 0x10) = puVar2;
        uStack_30 = uVar3;
        lVar4 = FUN_001011c0(&uStack_30);
        if (lVar4 != 0) {
          FUN_00101180(param_1);
        }
      }
    }
    else {
      *puGpffff8ce8 = *puGpffff8ce8 & 0xfffffffd;
      puVar2 = PTR_FUN_0031c7f0;
      uStack_20 = DAT_0031c7e8;
      uVar3 = uStack_20;
      puStack_18 = PTR_FUN_0031c7f0;
      uStack_20._0_4_ = (undefined4)DAT_0031c7e8;
      uStack_20._4_4_ = (undefined4)((ulong)DAT_0031c7e8 >> 0x20);
      *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_20;
      *(undefined4 *)(iVar5 + 0xc) = uStack_20._4_4_;
      *(undefined **)(iVar5 + 0x10) = puVar2;
      uStack_20 = uVar3;
      lVar4 = FUN_001011c0(&uStack_20);
      if (lVar4 != 0) {
        FUN_00101180(param_1);
      }
    }
  }
  else {
    *puGpffff8ce8 = uVar1 & 0xfffffffe;
    puVar2 = PTR_FUN_0031c7e0;
    uStack_10 = DAT_0031c7d8;
    uVar3 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c7d8;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c7d8 >> 0x20);
    puStack_8 = PTR_FUN_0031c7e0;
    *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar5 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar5 + 0x10) = puVar2;
    uStack_10 = uVar3;
    lVar4 = FUN_001011c0(&uStack_10);
    if (lVar4 != 0) {
      FUN_00101180(param_1);
    }
  }
  if ((*puGpffff8ce8 & 0x40000) != 0) {
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] | 0x10000;
  }
  if ((*puGpffff8ce8 & 0x80000) != 0) {
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] & 0xfffeffff;
  }
  if ((*puGpffff8ce8 & 0x400) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xfffffbff;
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] | 8;
  }
  if ((*puGpffff8ce8 & 0x800) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xfffff7ff;
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] & 0xfffffff7;
  }
  if ((*puGpffff8ce8 & 0x40) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xffffffbf;
    puVar2 = PTR_FUN_0031c830;
    uStack_60 = DAT_0031c828;
    uVar3 = uStack_60;
    uStack_60._0_4_ = (undefined4)DAT_0031c828;
    uStack_60._4_4_ = (undefined4)((ulong)DAT_0031c828 >> 0x20);
    puStack_58 = PTR_FUN_0031c830;
    *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_60;
    *(undefined4 *)(iVar5 + 0xc) = uStack_60._4_4_;
    *(undefined **)(iVar5 + 0x10) = puVar2;
    uStack_60 = uVar3;
    lVar4 = FUN_001011c0(&uStack_60);
    if (lVar4 != 0) {
      FUN_00101180(param_1);
    }
  }
  if ((*puGpffff8ce8 & 0x80) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xffffff7f;
    puVar2 = PTR_FUN_0031c840;
    uStack_70 = DAT_0031c838;
    uVar3 = uStack_70;
    uStack_70._0_4_ = (undefined4)DAT_0031c838;
    uStack_70._4_4_ = (undefined4)((ulong)DAT_0031c838 >> 0x20);
    puStack_68 = PTR_FUN_0031c840;
    *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_70;
    *(undefined4 *)(iVar5 + 0xc) = uStack_70._4_4_;
    *(undefined **)(iVar5 + 0x10) = puVar2;
    uStack_70 = uVar3;
    lVar4 = FUN_001011c0(&uStack_70);
    if (lVar4 != 0) {
      FUN_00101180(param_1);
    }
  }
  if ((*puGpffff8ce8 & 0x100) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xfffffeff;
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] | 0x100;
  }
  if ((*puGpffff8ce8 & 0x200) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xfffffdff;
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] & 0xfffffeff;
  }
  if ((*puGpffff8ce8 & 0x4000) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xffffbfff;
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] | 0x400;
  }
  if ((*puGpffff8ce8 & 0x8000) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xffff7fff;
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] & 0xfffffbff;
  }
  if ((*puGpffff8ce8 & 0x1000) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xffffefff;
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] | 0x800;
  }
  if ((*puGpffff8ce8 & 0x2000) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xffffdfff;
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] & 0xfffff7ff;
  }
  if ((*puGpffff8ce8 & 0x10000) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xfffeffff;
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] | 0x1000;
  }
  if ((*puGpffff8ce8 & 0x20000) != 0) {
    *puGpffff8ce8 = *puGpffff8ce8 & 0xfffdffff;
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] & 0xffffefff;
  }
  if (((*puGpffff8ce8 & 0x20) != 0) &&
     (*puGpffff8ce8 = *puGpffff8ce8 & 0xffffffdf, puVar2 = PTR_FUN_0031c850,
     (puGpffff8ce8[0xc] & 0x100) == 0)) {
    uStack_80 = DAT_0031c848;
    uVar3 = uStack_80;
    uStack_80._0_4_ = (undefined4)DAT_0031c848;
    uStack_80._4_4_ = (undefined4)((ulong)DAT_0031c848 >> 0x20);
    puStack_78 = PTR_FUN_0031c850;
    *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_80;
    *(undefined4 *)(iVar5 + 0xc) = uStack_80._4_4_;
    *(undefined **)(iVar5 + 0x10) = puVar2;
    uStack_80 = uVar3;
    lVar4 = FUN_001011c0(&uStack_80);
    if (lVar4 != 0) {
      FUN_00101180(param_1);
    }
  }
  *puGpffff8ce8 = 0;
  return;
}

// 0x001e98d0  size 0xac
void FUN_001e98d0(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(iGpffff8ce8 + 0x30);
  if ((*(uint *)(iGpffff8ce8 + 0x30) & 0x80) == 0) {
    *puVar3 = *(uint *)(iGpffff8ce8 + 0x30) | 0x80;
    FUN_0014b8a0(5);
    puVar2 = PTR_LAB_0031c7d0;
    uVar1 = DAT_0031c7cc;
    *(undefined4 *)(param_1 + 8) = DAT_0031c7c8;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined **)(param_1 + 0x10) = puVar2;
  }
  else {
    *puVar3 = *puVar3 & 0xffffff7f;
    FUN_0014b8a0(0);
    puVar2 = PTR_FUN_0031c7c0;
    uVar1 = DAT_0031c7bc;
    *(undefined4 *)(param_1 + 8) = DAT_0031c7b8;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined **)(param_1 + 0x10) = puVar2;
  }
  return;
}

// 0x001e9980  size 0x268
void FUN_001e9980(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = 1;
  iVar6 = FUN_001831b0();
  cVar5 = FUN_0017e890();
  if (cVar5 == '\r') {
    iVar11 = 2;
  }
  if (puGpffff8ce8 == (uint *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = (puGpffff8ce8[0xc] & 0x40) != 0;
  }
  if (bVar2) {
    puGpffff8ce8[0xc] = puGpffff8ce8[0xc] & 0xfffdffbf;
    FUN_0014b8a0(0);
    iVar10 = 0;
    if (iVar11 != 0) {
      puVar9 = param_1;
      do {
        if (*(int *)(*(int *)(iGpffff8c5c + (char)iVar10 * 4) + 0x198) != 0) {
          FUN_00182ed0(iVar6 + 0x28);
          *puVar9 = 1;
        }
        iVar10 = iVar10 + 1;
        iVar6 = iVar6 + 0xe8;
        puVar9 = puVar9 + 1;
      } while (iVar10 < iVar11);
    }
    puVar4 = PTR_FUN_0031c7a0;
    uVar3 = DAT_0031c79c;
    param_1[2] = DAT_0031c798;
    param_1[3] = uVar3;
    param_1[4] = puVar4;
  }
  else {
    if ((*puGpffff8ce8 & 0x100000) == 0) {
      puGpffff8ce8[0xc] = puGpffff8ce8[0xc] | 0x40;
    }
    else {
      *puGpffff8ce8 = *puGpffff8ce8 & 0xffefffff;
      puGpffff8ce8[0xc] = puGpffff8ce8[0xc] | 0x20000;
      puGpffff8ce8[0xc] = puGpffff8ce8[0xc] | 0x40;
    }
    FUN_0014b8a0(1);
    iVar10 = 0;
    if (iVar11 != 0) {
      puVar9 = param_1;
      do {
        iVar1 = *(int *)(iGpffff8c5c + (char)iVar10 * 4);
        if (*(int *)(iVar1 + 0x198) != 0) {
          lVar7 = FUN_001419f0();
          if (lVar7 == 0) {
            FUN_00182d60(iVar6 + 0x28,*(undefined4 *)(iVar1 + 0x198));
            *puVar9 = 1;
          }
          else {
            *puVar9 = 0;
          }
        }
        iVar10 = iVar10 + 1;
        puVar9 = puVar9 + 1;
        iVar6 = iVar6 + 0xe8;
      } while (iVar10 < iVar11);
    }
    uVar8 = 0;
    do {
      if (uVar8 == (uGpffff89dc & 1)) {
        FUN_001c6190(uVar8);
      }
      puVar4 = PTR_LAB_0031c7b0;
      uVar3 = DAT_0031c7ac;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 2);
    param_1[2] = DAT_0031c7a8;
    param_1[3] = uVar3;
    param_1[4] = puVar4;
  }
  return;
}

// 0x001e9bf0  size 0x1a0
void FUN_001e9bf0(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  lVar7 = thunk_FUN_001e8fc0();
  if (lVar7 == 0) {
    *(int *)(iGpffff8ce8 + 0x3c) = *(int *)(iGpffff8ce8 + 0x38) + -1;
  }
  *(undefined4 *)(iGpffff8ce8 + 0x40) = 0;
  *(undefined4 *)(iGpffff8ce8 + 0x38) = 0;
  if (iGpffff8ce8 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(iGpffff8ce8 + 0x30) & 0x40) != 0;
  }
  if (bVar1) {
    FUN_0014b8a0(0);
  }
  *(undefined4 *)(iGpffff8ce8 + 0x30) = 0;
  *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 0x10;
  lVar7 = FUN_0017e420();
  if (lVar7 != -1) {
    *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 0x400;
    *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 0x2000;
  }
  FUN_001ea5e0();
  cVar5 = FUN_00177050();
  if (cVar5 == '\0') {
    iVar6 = FUN_001dc260(0);
    FUN_00177020(*(undefined4 *)(iVar6 + 4));
  }
  FUN_001eb420();
  puVar3 = PTR_FUN_0031c790;
  iVar6 = (int)param_1;
  if (lVar7 != -1) {
    FUN_00177f20();
    *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) & 0xfffff7ff;
    puVar3 = PTR_FUN_0031c780;
    uVar2 = DAT_0031c77c;
    *(undefined4 *)(iVar6 + 8) = DAT_0031c778;
    *(undefined4 *)(iVar6 + 0xc) = uVar2;
    *(undefined **)(iVar6 + 0x10) = puVar3;
  }
  else {
    uStack_10 = DAT_0031c788;
    uVar4 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c788;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c788 >> 0x20);
    puStack_8 = PTR_FUN_0031c790;
    *(undefined4 *)(iVar6 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar6 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar6 + 0x10) = puVar3;
    uStack_10 = uVar4;
    lVar7 = FUN_001011c0(&uStack_10);
    if (lVar7 != 0) {
      FUN_00101180(param_1);
    }
  }
  FUN_0014b8a0(2);
  return;
}

// 0x001e9d90  size 0x134
void FUN_001e9d90(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = FUN_00176fa0();
  FUN_00176fb0(uVar3);
  cVar2 = FUN_0017e8d0();
  if (((cVar2 == '\x02') || (cVar2 = FUN_0017e8d0(), cVar2 == '\x03')) &&
     (uVar4 = FUN_00176fa0(), (uVar4 & 0x80000) != 0)) {
    iVar1 = *(int *)(iGpffff8c5c + 4);
    uVar3 = FUN_001dc220(1);
    FUN_00176da0();
    uVar9 = 0;
    cVar2 = FUN_0017e8d0();
    if (cVar2 == '\x03') {
      uVar9 = FUN_001dc240(1);
      uVar9 = FUN_001e0530(uVar9);
    }
    uVar5 = FUN_00176da0();
    uVar6 = FUN_00178390();
    uVar3 = FUN_001dccc0(uVar3);
    uVar7 = FUN_0017e8d0();
    uVar8 = FUN_0017e890();
    FUN_00176960(uVar5,uVar6,iVar1 + 0x1d8,uVar3,uVar9,uVar7,uVar8,1);
  }
  FUN_0014b880(3);
  return;
}

// 0x001e9ed0  size 0x74
void FUN_001e9ed0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  FUN_001ea6d0();
  puVar1 = PTR_FUN_0031c770;
  uStack_10 = DAT_0031c768;
  uVar2 = uStack_10;
  uStack_10._0_4_ = (undefined4)DAT_0031c768;
  uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c768 >> 0x20);
  puStack_8 = PTR_FUN_0031c770;
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 8) = (undefined4)uStack_10;
  *(undefined4 *)(iVar4 + 0xc) = uStack_10._4_4_;
  *(undefined **)(iVar4 + 0x10) = puVar1;
  uStack_10 = uVar2;
  lVar3 = FUN_001011c0(&uStack_10);
  if (lVar3 != 0) {
    FUN_00101180(param_1);
  }
  FUN_0014b8a0(2);
  return;
}

// 0x001e9f50  size 0x19c
void FUN_001e9f50(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  lVar5 = thunk_FUN_001e8fc0();
  if (lVar5 == 0) {
    *(int *)(iGpffff8ce8 + 0x3c) = *(int *)(iGpffff8ce8 + 0x38) + -1;
  }
  *(undefined4 *)(iGpffff8ce8 + 0x40) = 0;
  *(undefined4 *)(iGpffff8ce8 + 0x38) = 0;
  if (iGpffff8ce8 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(iGpffff8ce8 + 0x30) & 0x40) != 0;
  }
  if (bVar1) {
    FUN_0014b8a0(0);
  }
  *(undefined4 *)(iGpffff8ce8 + 0x30) = 0;
  lVar5 = FUN_001801d0();
  puVar2 = PTR_FUN_0031c750;
  iVar7 = (int)param_1;
  if (lVar5 == 0) {
    uStack_10 = DAT_0031c748;
    uVar6 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c748;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c748 >> 0x20);
    puStack_8 = PTR_FUN_0031c750;
    *(undefined4 *)(iVar7 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar7 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar7 + 0x10) = puVar2;
    uStack_10 = uVar6;
    lVar5 = FUN_001011c0(&uStack_10);
    if (lVar5 != 0) {
      FUN_00101180(param_1);
    }
  }
  else {
    uVar6 = FUN_00176fa0();
    FUN_00176fb0(uVar6);
    FUN_00176fc0(0);
    cVar3 = FUN_00177050();
    if (cVar3 == '\0') {
      iVar4 = FUN_00176ff0();
      iVar4 = iVar4 + 1500000;
      if (5000000 < iVar4) {
        iVar4 = 5000000;
      }
      FUN_00177020(iVar4);
    }
    FUN_001eb420();
    puVar2 = PTR_FUN_0031c760;
    uStack_20 = DAT_0031c758;
    uVar6 = uStack_20;
    uStack_20._0_4_ = (undefined4)DAT_0031c758;
    uStack_20._4_4_ = (undefined4)((ulong)DAT_0031c758 >> 0x20);
    puStack_18 = PTR_FUN_0031c760;
    *(undefined4 *)(iVar7 + 8) = (undefined4)uStack_20;
    *(undefined4 *)(iVar7 + 0xc) = uStack_20._4_4_;
    *(undefined **)(iVar7 + 0x10) = puVar2;
    uStack_20 = uVar6;
    lVar5 = FUN_001011c0(&uStack_20);
    if (lVar5 != 0) {
      FUN_00101180(param_1);
    }
  }
  return;
}

// 0x001ea0f0  size 0x330
void FUN_001ea0f0(undefined8 param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined1 auStack_e0 [4];
  undefined4 uStack_dc;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 auStack_cc [47];
  undefined8 uStack_10;
  undefined *puStack_8;
  
  bVar3 = false;
  lVar7 = thunk_FUN_001e8fc0();
  if (lVar7 == 0) {
    *(int *)(iRam0036f3d8 + 0x3c) = *(int *)(iRam0036f3d8 + 0x38) + -1;
  }
  *(undefined4 *)(iRam0036f3d8 + 0x40) = 0;
  *(undefined4 *)(iRam0036f3d8 + 0x38) = 0;
  if (iRam0036f3d8 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(uint *)(iRam0036f3d8 + 0x30) & 0x40) != 0;
  }
  if (bVar2) {
    FUN_0014b8a0(0);
  }
  *(undefined4 *)(iRam0036f3d8 + 0x30) = 0;
  uVar8 = FUN_00176fa0();
  FUN_00176fb0(uVar8);
  FUN_00176fc0(0);
  uVar9 = FUN_00176f90();
  if ((uVar9 & 0x10) == 0) {
    FUN_001ea6d0();
    lVar7 = FUN_001771e0();
    if ((lVar7 != 0) &&
       ((cVar5 = FUN_0017e8d0(), cVar5 == '\x02' || (cVar5 = FUN_0017e8d0(), cVar5 == '\x03')))) {
      uVar8 = FUN_00176da0();
      uVar9 = FUN_00176f90();
      if ((uVar9 & 0x80000) != 0) {
        iVar14 = *(int *)(iRam0036f34c + 4);
        uVar10 = FUN_001dc220(1);
        uVar17 = 0;
        cVar5 = FUN_0017e8d0();
        if (cVar5 == '\x03') {
          uVar17 = FUN_001dc240(1);
          uVar17 = FUN_001e0530(uVar17);
        }
        uVar11 = FUN_00178390();
        uVar10 = FUN_001dccc0(uVar10);
        uVar12 = FUN_0017e8d0();
        uVar13 = FUN_0017e890();
        FUN_00176960(uVar8,uVar11,iVar14 + 0x1d8,uVar10,uVar17,uVar12,uVar13,1);
        bVar3 = true;
      }
      uVar10 = FUN_00178390();
      lVar7 = FUN_001768e0(uVar8,uVar10);
      if (lVar7 != 0) {
        iVar6 = (int)uVar8;
        auStack_e0[0] = *(undefined1 *)(iVar6 + 0x118);
        puVar16 = (undefined4 *)(iVar6 + 300);
        puVar15 = auStack_cc;
        iVar14 = 0x17;
        uStack_d8 = *(undefined1 *)(iVar6 + 0x120);
        uStack_d7 = *(undefined1 *)(iVar6 + 0x121);
        uStack_d4 = *(undefined4 *)(iVar6 + 0x124);
        uStack_d0 = *(undefined4 *)(iVar6 + 0x128);
        do {
          iVar14 = iVar14 + -1;
          uVar1 = puVar16[1];
          *puVar15 = *puVar16;
          puVar16 = puVar16 + 2;
          puVar15[1] = uVar1;
          puVar15 = puVar15 + 2;
        } while (0 < iVar14);
        uStack_dc = 0x1c1;
        FUN_00182cb0(1,auStack_e0);
        FUN_00177200(2);
        bVar3 = true;
      }
    }
  }
  cVar5 = FUN_00177050();
  if (cVar5 == '\0') {
    iVar14 = FUN_001dc260(0);
    FUN_00177020(*(undefined4 *)(iVar14 + 4));
  }
  FUN_001eb420();
  if (bVar3) {
    iVar14 = *(int *)(iRam0036f34c + 4);
    iVar6 = FUN_00176da0();
    FUN_00128268(iVar14 + 0x1d8,iVar6 + 0x40c,0x69784);
    *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x1000;
    *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x2000;
  }
  puVar4 = PTR_FUN_0031c740;
  uStack_10 = DAT_0031c738;
  uVar8 = uStack_10;
  uStack_10._0_4_ = (undefined4)DAT_0031c738;
  uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c738 >> 0x20);
  puStack_8 = PTR_FUN_0031c740;
  iVar14 = (int)param_1;
  *(undefined4 *)(iVar14 + 8) = (undefined4)uStack_10;
  *(undefined4 *)(iVar14 + 0xc) = uStack_10._4_4_;
  *(undefined **)(iVar14 + 0x10) = puVar4;
  uStack_10 = uVar8;
  lVar7 = FUN_001011c0(&uStack_10);
  if (lVar7 != 0) {
    FUN_00101180(param_1);
  }
  FUN_0014b8a0(2);
  return;
}

// 0x001ea420  size 0xc4
void FUN_001ea420(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  FUN_001ea6d0();
  *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x10;
  iVar5 = *piRam0036f34c;
  piVar3 = (int *)FUN_00176dc0();
  FUN_00128268(iVar5 + 0x1d8,*piVar3 + 0x40c,0x69784);
  *(undefined4 *)(iRam0036f3d8 + 0x3c) = *(undefined4 *)(*piVar3 + 0x40c);
  puVar1 = PTR_FUN_0031c730;
  uStack_10 = DAT_0031c728;
  uVar2 = uStack_10;
  puStack_8 = PTR_FUN_0031c730;
  uStack_10._0_4_ = (undefined4)DAT_0031c728;
  uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c728 >> 0x20);
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_10;
  *(undefined4 *)(iVar5 + 0xc) = uStack_10._4_4_;
  *(undefined **)(iVar5 + 0x10) = puVar1;
  uStack_10 = uVar2;
  lVar4 = FUN_001011c0(&uStack_10);
  if (lVar4 != 0) {
    FUN_00101180(param_1);
  }
  return;
}

// 0x001ea4f0  size 0xf0
void FUN_001ea4f0(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  FUN_001ea6d0();
  lVar3 = FUN_001771e0();
  if ((lVar3 != 0) &&
     ((cVar2 = FUN_0017e8d0(), cVar2 == '\x02' || (cVar2 = FUN_0017e8d0(), cVar2 == '\x03')))) {
    uVar4 = FUN_00176da0();
    uVar5 = FUN_00178390();
    lVar3 = FUN_00176660(uVar4,uVar5);
    if (lVar3 != 0) {
      *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x1000;
    }
  }
  puVar1 = PTR_FUN_0031c720;
  uStack_10 = DAT_0031c718;
  uVar4 = uStack_10;
  uStack_10._0_4_ = (undefined4)DAT_0031c718;
  uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c718 >> 0x20);
  puStack_8 = PTR_FUN_0031c720;
  iVar6 = (int)param_1;
  *(undefined4 *)(iVar6 + 8) = (undefined4)uStack_10;
  *(undefined4 *)(iVar6 + 0xc) = uStack_10._4_4_;
  *(undefined **)(iVar6 + 0x10) = puVar1;
  uStack_10 = uVar4;
  lVar3 = FUN_001011c0(&uStack_10);
  if (lVar3 != 0) {
    FUN_00101180(param_1);
  }
  return;
}

// 0x001ea5e0  size 0xf0
undefined8 FUN_001ea5e0(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_0017e890();
  if (cVar1 != '\r') {
    lVar2 = FUN_00177230();
    if ((lVar2 == 1) && (lVar2 = FUN_00177270(), lVar2 == 1)) {
      if (*(int *)(*piRam0036f34c + 0x1d8) == 0) {
        return 0;
      }
      *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x1000;
      *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x2000;
      return 1;
    }
    lVar2 = FUN_00177230();
    if ((lVar2 == 2) && (lVar2 = FUN_00177270(), lVar2 == 2)) {
      uVar3 = 1;
      *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x1000;
      *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x2000;
    }
  }
  return uVar3;
}

// 0x001ea6d0  size 0x188
undefined4 FUN_001ea6d0(void)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_00177040();
  if (((((cVar1 == '\a') || (cVar1 == '\x03')) || (cVar1 == '\x02')) || (cVar1 == '\x01')) &&
     (lVar2 = FUN_001778d0(), 0 < lVar2)) {
    *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x2000;
  }
  lVar2 = FUN_00176f30();
  if (lVar2 != 0) {
    *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x2000;
    lVar2 = FUN_00176f40();
    if (lVar2 == 0) {
      lVar2 = FUN_00176f10();
      if (lVar2 != 0) {
        uVar3 = 1;
        *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x400;
        *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x2000;
      }
    }
    else {
      lVar2 = FUN_00176f20();
      if (lVar2 == 0) {
        lVar2 = FUN_00176f10();
        if (lVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
          *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x400;
          *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x2000;
        }
      }
      else {
        uVar3 = 1;
        *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x400;
        *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x2000;
      }
    }
  }
  lVar2 = FUN_00176f40();
  if (lVar2 != 0) {
    *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x800;
    *(uint *)(iRam0036f3d8 + 0x30) = *(uint *)(iRam0036f3d8 + 0x30) | 0x2000;
  }
  return uVar3;
}

// 0x001ea860  size 0x94
void FUN_001ea860(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((((*(uint *)(iGpffff8ce8 + 0x30) & 2) != 0) && (lVar3 = FUN_00191430(), lVar3 != 0)) &&
     (lVar3 = FUN_002cf9b0(), lVar3 == 0)) {
    *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 1;
    puVar2 = PTR_FUN_0031c710;
    uVar1 = DAT_0031c70c;
    *(undefined4 *)(param_1 + 8) = DAT_0031c708;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined **)(param_1 + 0x10) = puVar2;
  }
  return;
}

// 0x001ea900  size 0x8c
void FUN_001ea900(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  puVar1 = PTR_FUN_0031c700;
  if ((*(uint *)(iGpffff8ce8 + 0x30) & 0x4000) != 0) {
    uStack_10 = DAT_0031c6f8;
    uVar2 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c6f8;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c6f8 >> 0x20);
    puStack_8 = PTR_FUN_0031c700;
    iVar4 = (int)param_1;
    *(undefined4 *)(iVar4 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar4 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar4 + 0x10) = puVar1;
    uStack_10 = uVar2;
    lVar3 = FUN_001011c0(&uStack_10);
    if (lVar3 != 0) {
      FUN_00101180(param_1);
    }
  }
  return;
}

// 0x001ea990  size 0xe8
void FUN_001ea990(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0017e420();
  if (lVar3 == -1) {
    *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 0x4000;
  }
  else {
    lVar3 = FUN_00176f30();
    if (lVar3 != 0) {
      FUN_00177f20();
    }
    uVar4 = FUN_0017e420();
    uVar5 = FUN_00100480(0xc3050,0x40,0x430750);
    FUN_0014bf00(uVar4,uVar5,0x1eadd0,0,0,0);
    FUN_00178110(uVar5);
  }
  puVar2 = PTR_FUN_0031c6f0;
  uVar1 = DAT_0031c6ec;
  *(undefined4 *)(param_1 + 8) = DAT_0031c6e8;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}

// 0x001eaa80  size 0x8c
void FUN_001eaa80(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  puVar1 = PTR_FUN_0031c6e0;
  if ((*(uint *)(iGpffff8ce8 + 0x30) & 0x4000) != 0) {
    uStack_10 = DAT_0031c6d8;
    uVar2 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c6d8;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c6d8 >> 0x20);
    puStack_8 = PTR_FUN_0031c6e0;
    iVar4 = (int)param_1;
    *(undefined4 *)(iVar4 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar4 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar4 + 0x10) = puVar1;
    uStack_10 = uVar2;
    lVar3 = FUN_001011c0(&uStack_10);
    if (lVar3 != 0) {
      FUN_00101180(param_1);
    }
  }
  return;
}

// 0x001eab10  size 0xf4
void FUN_001eab10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  if ((*(uint *)(iGpffff8ce8 + 0x30) & 0x4000) != 0) {
    cVar4 = FUN_0017e8d0();
    puVar2 = PTR_FUN_0031c6d0;
    puVar1 = PTR_FUN_0031c6c0;
    iVar6 = (int)param_1;
    if (cVar4 == '\x05') {
      uStack_10 = DAT_0031c6b8;
      uVar3 = uStack_10;
      uStack_10._0_4_ = (undefined4)DAT_0031c6b8;
      uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c6b8 >> 0x20);
      puStack_8 = PTR_FUN_0031c6c0;
      *(undefined4 *)(iVar6 + 8) = (undefined4)uStack_10;
      *(undefined4 *)(iVar6 + 0xc) = uStack_10._4_4_;
      *(undefined **)(iVar6 + 0x10) = puVar1;
      uStack_10 = uVar3;
      lVar5 = FUN_001011c0(&uStack_10);
      if (lVar5 != 0) {
        FUN_00101180(param_1);
      }
    }
    else {
      uStack_20 = DAT_0031c6c8;
      uVar3 = uStack_20;
      uStack_20._0_4_ = (undefined4)DAT_0031c6c8;
      uStack_20._4_4_ = (undefined4)((ulong)DAT_0031c6c8 >> 0x20);
      puStack_18 = PTR_FUN_0031c6d0;
      *(undefined4 *)(iVar6 + 8) = (undefined4)uStack_20;
      *(undefined4 *)(iVar6 + 0xc) = uStack_20._4_4_;
      *(undefined **)(iVar6 + 0x10) = puVar2;
      uStack_20 = uVar3;
      lVar5 = FUN_001011c0(&uStack_20);
      if (lVar5 != 0) {
        FUN_00101180(param_1);
      }
    }
  }
  return;
}

// 0x001eac10  size 0xd0
void FUN_001eac10(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0017e420();
  if (lVar3 == -1) {
    *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 0x4000;
  }
  else {
    uVar4 = FUN_0017e420();
    uVar5 = FUN_00100480(0xc3050,0x40,0x430750);
    FUN_0014bf00(uVar4,uVar5,0x1eadd0,0,0,0);
    FUN_00178110(uVar5);
  }
  puVar2 = PTR_FUN_0031c6b0;
  uVar1 = DAT_0031c6ac;
  *(undefined4 *)(param_1 + 8) = DAT_0031c6a8;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}

// 0x001eace0  size 0xe8
void FUN_001eace0(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0017e420();
  if (lVar3 == -1) {
    *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 0x4000;
  }
  else {
    lVar3 = FUN_00176f30();
    if (lVar3 != 0) {
      FUN_00177f20();
    }
    uVar4 = FUN_0017e420();
    uVar5 = FUN_00100480(0xc3050,0x40,0x430750);
    FUN_0014bf00(uVar4,uVar5,0x1eadd0,0,0,0);
    FUN_00178110(uVar5);
  }
  puVar2 = PTR_FUN_0031c6a0;
  uVar1 = DAT_0031c69c;
  *(undefined4 *)(param_1 + 8) = DAT_0031c698;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}

// 0x001eadd0  size 0xe8
void FUN_001eadd0(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00177050();
  if (((((cVar1 == '\x02') || (cVar1 = FUN_00177050(), cVar1 == '\x01')) ||
       (cVar1 = FUN_00177050(), cVar1 == '\x03')) || (cVar1 = FUN_00177050(), cVar1 == '\x06')) &&
     (((cVar1 = FUN_00177050(), cVar1 == '\x02' || (cVar1 = FUN_00177050(), cVar1 == '\x03')) ||
      (cVar1 = FUN_00177050(), cVar1 == '\x06')))) {
    iVar2 = FUN_00176f30();
    FUN_00176f50(*(undefined4 *)(iVar2 + 4));
  }
  *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 0x4000;
  return;
}

// 0x001eaec0  size 0x58
void FUN_001eaec0(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  FUN_001cd6e0();
  *(uint *)(iGpffff8ce8 + 0x34) = *(uint *)(iGpffff8ce8 + 0x34) | 0x8000;
  puVar2 = PTR_FUN_0031c690;
  uVar1 = DAT_0031c68c;
  *(undefined4 *)(param_1 + 8) = DAT_0031c688;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}

// 0x001eaf20  size 0xa4
void FUN_001eaf20(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  if ((*(uint *)(iGpffff8ce8 + 0x30) & 4) != 0) {
    FUN_001774b0();
    FUN_00177280();
    FUN_001772b0();
    puVar1 = PTR_FUN_0031c680;
    uStack_10 = DAT_0031c678;
    uVar2 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c678;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c678 >> 0x20);
    puStack_8 = PTR_FUN_0031c680;
    iVar4 = (int)param_1;
    *(undefined4 *)(iVar4 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar4 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar4 + 0x10) = puVar1;
    uStack_10 = uVar2;
    lVar3 = FUN_001011c0(&uStack_10);
    if (lVar3 != 0) {
      FUN_00101180(param_1);
    }
  }
  return;
}

// 0x001eafd0  size 0x150
void FUN_001eafd0(void)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  if ('\0' < *(char *)(iGpffff8ce8 + 0x2c)) {
    iVar3 = 0;
    do {
      uVar1 = *(uint *)(iGpffff8ce8 + iVar3 + 4);
      uVar2 = (undefined1)lVar4;
      if ((uVar1 & 0x80) == 0) {
        if ((uVar1 & 0x100) == 0) {
          if ((uVar1 & 0x1000) == 0) {
            if ((uVar1 & 0x200) == 0) {
              if ((uVar1 & 0x400) == 0) {
                if ((uVar1 & 0x800) == 0) {
                  if ((uVar1 & 0x2000) != 0) {
                    FUN_001dada0(uVar2);
                  }
                }
                else {
                  FUN_001db000(uVar2);
                }
              }
              else {
                FUN_001db1e0(uVar2);
              }
            }
            else {
              FUN_001db440(uVar2);
            }
          }
          else {
            FUN_001db6d0(uVar2);
          }
        }
        else {
          FUN_001db930(uVar2);
        }
      }
      else {
        FUN_001dbbc0(uVar2);
      }
      lVar4 = (long)((int)lVar4 + 1);
      *(undefined4 *)(iGpffff8ce8 + iVar3 + 4) = 0;
      iVar3 = iVar3 + 4;
    } while (lVar4 < *(char *)(iGpffff8ce8 + 0x2c));
  }
  *(undefined1 *)(iGpffff8ce8 + 0x2c) = 0;
  return;
}

// 0x001eb140  size 0x40
bool FUN_001eb140(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(iGpffff8ce8 + 0x2c);
  if (cVar1 < '\n') {
    *(undefined4 *)(cVar1 * 4 + iGpffff8ce8 + 4) = param_1;
    *(char *)(iGpffff8ce8 + 0x2c) = *(char *)(iGpffff8ce8 + 0x2c) + '\x01';
  }
  return cVar1 < '\n';
}

// 0x001eb180  size 0x54
void FUN_001eb180(void)

{
  FUN_001e9140();
  *(int *)(iGpffff8ce8 + 0x40) = *(int *)(iGpffff8ce8 + 0x40) + 1;
  if ((*(uint *)(iGpffff8ce8 + 0x30) & 8) != 0) {
    *(int *)(iGpffff8ce8 + 0x38) = *(int *)(iGpffff8ce8 + 0x38) + 1;
  }
  return;
}

// 0x001eb1e0  size 0xc4
void FUN_001eb1e0(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((*(uint *)(iGpffff8ce8 + 0x34) & 2) != 0) {
    *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 2;
  }
  if ((*(uint *)(iGpffff8ce8 + 0x34) & 4) != 0) {
    *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 4;
  }
  if ((*(uint *)(iGpffff8ce8 + 0x34) & 0x8000) != 0) {
    *(uint *)(iGpffff8ce8 + 0x30) = *(uint *)(iGpffff8ce8 + 0x30) | 0x8000;
  }
  if ((*(uint *)(iGpffff8ce8 + 0x34) & 0x20) != 0) {
    *(undefined4 *)(iGpffff8ce8 + 0x30) = 0;
  }
  *(undefined4 *)(iGpffff8ce8 + 0x34) = 0;
  FUN_001eafd0();
  lVar2 = FUN_001011c0(iVar1 + 8);
  if (lVar2 != 0) {
    FUN_00101180(iVar1);
  }
  return;
}

// 0x001eb2b0  size 0x30
void FUN_001eb2b0(void)

{
  FUN_00177f20();
  FUN_00177f60();
  FUN_00100290(uGpffff8ce8);
  uGpffff8ce8 = 0;
  return;
}

// 0x001eb2e0  size 0x140
void FUN_001eb2e0(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  uVar3 = FUN_00100680(0x44,0x430750);
  puGpffff8ce8 = (undefined4 *)uVar3;
  FUN_001325d0(uVar3,0,0x44);
  iVar6 = 0;
  iVar5 = 0;
  *puGpffff8ce8 = 0;
  do {
    iVar6 = iVar6 + 5;
    *(undefined4 *)((int)puGpffff8ce8 + iVar5 + 4) = 0;
    *(undefined4 *)((int)puGpffff8ce8 + iVar5 + 8) = 0;
    *(undefined4 *)((int)puGpffff8ce8 + iVar5 + 0xc) = 0;
    *(undefined4 *)((int)puGpffff8ce8 + iVar5 + 0x10) = 0;
    *(undefined4 *)((int)puGpffff8ce8 + iVar5 + 0x14) = 0;
    iVar5 = iVar5 + 0x14;
  } while (iVar6 < 10);
  *(undefined1 *)(puGpffff8ce8 + 0xb) = 0;
  puGpffff8ce8[0xc] = 0;
  puGpffff8ce8[0xd] = 0;
  puGpffff8ce8[0x10] = 0;
  puGpffff8ce8[0xe] = 0;
  puGpffff8ce8[0xf] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_FUN_0031c670;
  uStack_10 = DAT_0031c668;
  uVar3 = uStack_10;
  puStack_8 = PTR_FUN_0031c670;
  uStack_10._0_4_ = (undefined4)DAT_0031c668;
  uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c668 >> 0x20);
  puVar1[2] = (undefined4)uStack_10;
  puVar1[3] = uStack_10._4_4_;
  puVar1[4] = puVar2;
  uStack_10 = uVar3;
  lVar4 = FUN_001011c0(&uStack_10);
  if (lVar4 != 0) {
    FUN_00101180(puVar1);
  }
  *(code **)(param_1 + 0x1c) = FUN_001eb1e0;
  return;
}

// 0x001eb420  size 0x128
void FUN_001eb420(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  FUN_001cdbc0();
  FUN_001cdcd0(0x430750);
  uVar3 = FUN_001e0500();
  uVar4 = FUN_001dcc60();
  FUN_001dcaf0();
  uVar2 = FUN_00177210();
  uVar5 = FUN_00180260();
  uVar6 = FUN_00177010();
  FUN_001dcde0(uVar2,uVar5,0x430750,uVar6);
  FUN_001e04f0(uVar3);
  FUN_001dcc50(uVar4);
  FUN_001c5e50(0x430750);
  FUN_001d4cd0(uGpffff8c7c);
  uGpffff8b6c = uGpffff8b6c | 0x20;
  *puGpffff8b0c = *puGpffff8b0c | 2;
  cVar1 = FUN_0017e890();
  if ((cVar1 == '\r') && (lVar7 = thunk_FUN_001e8fc0(), lVar7 == 0)) {
    uGpffff8b08 = 1;
  }
  else {
    uGpffff8b08 = 0;
  }
  if (*(int *)(iGpffff8cc0 + 0xc) != 0) {
    FUN_001e54c0(*(undefined4 *)(*(int *)(iGpffff8cc0 + 0xc) + 0x14),1);
  }
  return;
}

// 0x001eb550  size 0x394
void FUN_001eb550(undefined8 param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 auStack_240 [160];
  undefined4 uStack_1a0;
  
  iVar10 = (int)param_1;
  iVar9 = (*(uint *)(iVar10 + 8) & 0xff) * 0x5c0 + 0x431100;
  if (param_3 != 0) {
    return;
  }
  if (*(uint *)(iVar10 + 8) == 3) {
    return;
  }
  FUN_002e3440(param_1,*(undefined4 *)(param_2 + 0x58));
  FUN_00148950(auStack_240,iVar9,0x436180,*(undefined4 *)(iVar10 + 0xc),
               *(undefined4 *)(iVar10 + 0x10));
  if (param_4 != 0) {
    uStack_1a0 = (undefined4)param_4;
  }
  FUN_00148850(auStack_240,0);
  FUN_00148850(auStack_240,1);
  if (*(int *)(param_2 + 0x10) == 0) goto LAB_001eb6d0;
  if (*(int *)(param_2 + 0x34) < 0) {
LAB_001eb620:
    iVar10 = *(int *)(param_2 + 0x38);
  }
  else {
    puVar8 = (ushort *)(*(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x34) * 0x10);
    puVar5 = (undefined4 *)
             (*(int *)(*(int *)(iGpffff8b40 + 4) + (uint)*puVar8 * 4) + 0x7c +
             *(int *)(puVar8 + 2) * 0x20);
    uStack_250 = *puVar5;
    uStack_24c = puVar5[1];
    uStack_248 = puVar5[2];
    uStack_244 = 0x3f800000;
    lVar3 = FUN_0019e0a0(iVar9,&uStack_250);
    if (lVar3 == 0) goto LAB_001eb620;
    uVar4 = FUN_00134630(*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)
                          (*(int *)(param_2 + 0x34) * 0x10 + *(int *)(param_2 + 0x18) + 0xc),0);
    uVar4 = FUN_0014d6e0(uVar4,0);
    FUN_00148430(auStack_240,uVar4);
    iVar10 = *(int *)(param_2 + 0x38);
  }
  if (-1 < iVar10) {
    puVar8 = (ushort *)(*(int *)(param_2 + 0x20) + iVar10 * 0x10);
    puVar5 = (undefined4 *)
             (*(int *)(*(int *)(iGpffff8b40 + 4) + (uint)*puVar8 * 4) + 0x7c +
             *(int *)(puVar8 + 2) * 0x20);
    uStack_260 = *puVar5;
    uStack_25c = puVar5[1];
    uStack_258 = puVar5[2];
    uStack_254 = 0x3f800000;
    lVar3 = FUN_0019e0a0(iVar9,&uStack_260);
    if (lVar3 != 0) {
      uVar4 = FUN_00134630(*(undefined4 *)(param_2 + 8),
                           *(undefined4 *)
                            (*(int *)(param_2 + 0x38) * 0x10 + *(int *)(param_2 + 0x20) + 0xc),0);
      uVar4 = FUN_0014d6e0(uVar4,0);
      FUN_00148430(auStack_240,uVar4);
    }
  }
LAB_001eb6d0:
  if ((((*(int *)(param_2 + 0x10) != 0) && (-1 < *(int *)(param_2 + 0x34))) &&
      (-1 < *(int *)(param_2 + 0x38))) &&
     ((lVar3 = FUN_001dc1d0(), lVar3 != 0 && (iVar10 = 0, 0 < *(int *)(param_2 + 0x24))))) {
    iVar9 = 0;
    do {
      piVar6 = (int *)(*(int *)(param_2 + 0x28) + iVar9);
      iVar1 = *piVar6;
      iVar2 = **(int **)(param_2 + 0x2c);
      bVar7 = false;
      if ((iVar2 < iVar1) && (iVar1 < **(int **)(param_2 + 0x30))) {
        bVar7 = true;
      }
      if ((iVar2 == iVar1) && ((*(int **)(param_2 + 0x2c))[1] < piVar6[1])) {
        bVar7 = true;
      }
      if ((**(int **)(param_2 + 0x30) == iVar1) && (piVar6[1] < (*(int **)(param_2 + 0x30))[1])) {
        bVar7 = true;
      }
      if (bVar7) {
        uVar4 = FUN_00134630(*(undefined4 *)(param_2 + 8),piVar6[4],0);
        uVar4 = FUN_0014d6e0(uVar4,0);
        FUN_00148430(auStack_240,uVar4);
      }
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x14;
    } while (iVar10 < *(int *)(param_2 + 0x24));
  }
  FUN_00148820(auStack_240,0);
  FUN_00148820(auStack_240,1);
  return;
}

// 0x001eb900  size 0x13c
void FUN_001eb900(int param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x10) == 0) || (lVar2 = FUN_001e90f0(), lVar2 == 0)) ||
     (*(int *)(param_1 + 0x54) != 0)) goto LAB_001eba24;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x34) * 0x10 + *(int *)(param_1 + 0x18) + 8);
  if ((*(uint *)(param_1 + 0x4c) == uVar1) || (*(uint *)(param_1 + 0x50) == uVar1)) {
LAB_001eb9a8:
    iVar3 = *(int *)(param_1 + 0x38);
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x38) * 0x10 + *(int *)(param_1 + 0x20) + 8) <= (int)uVar1) {
      FUN_001c24f0((uVar1 & 0x7fff) << 1,1);
      goto LAB_001eb9a8;
    }
    FUN_001c24f0(uVar1 * 2 - 1 & 0xffff,1);
    iVar3 = *(int *)(param_1 + 0x38);
  }
  uVar1 = *(uint *)(iVar3 * 0x10 + *(int *)(param_1 + 0x20) + 8);
  if ((*(uint *)(param_1 + 0x4c) != uVar1) && (*(uint *)(param_1 + 0x50) != uVar1)) {
    if ((int)uVar1 < *(int *)(*(int *)(param_1 + 0x34) * 0x10 + *(int *)(param_1 + 0x18) + 8)) {
      FUN_001c24f0(uVar1 * 2 - 1 & 0xffff,1);
    }
    else {
      FUN_001c24f0((uVar1 & 0x7fff) << 1,1);
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 1;
LAB_001eba24:
  FUN_002e3400();
  return;
}

// 0x001eba40  size 0x5ec
void FUN_001eba40(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_8 [4];
  undefined4 uStack_4;
  
  iVar13 = (int)param_1;
  *(undefined4 *)(iVar13 + 0x5c) = 0;
  *(undefined4 *)(iVar13 + 0x14) = 0;
  *(undefined4 *)(iVar13 + 0x18) = 0;
  *(undefined4 *)(iVar13 + 0x1c) = 0;
  *(undefined4 *)(iVar13 + 0x20) = 0;
  *(undefined4 *)(iVar13 + 0x24) = 0;
  *(undefined4 *)(iVar13 + 0x28) = 0;
  *(undefined4 *)(iVar13 + 0x34) = 0;
  *(undefined4 *)(iVar13 + 0x38) = 0;
  *(undefined4 *)(iVar13 + 0x3c) = 0xffffffff;
  *(undefined4 *)(iVar13 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar13 + 0x44) = 0xffffffff;
  *(undefined4 *)(iVar13 + 0x48) = 0xffffffff;
  *(undefined4 *)(iVar13 + 0x4c) = 0xffffffff;
  *(undefined4 *)(iVar13 + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar13 + 0x54) = 0;
  *(undefined4 *)(iVar13 + 0x58) = 1;
  auStack_8[0] = iGpffff8b08 != 0;
  cVar1 = FUN_00177780();
  if (cVar1 == '\x01') {
    uStack_4 = 1;
  }
  else {
    uStack_4 = 0xffffffff;
  }
  iVar4 = FUN_001803f0();
  iVar5 = FUN_001804d0();
  uVar6 = FUN_001a4c30(0x430750,(&PTR_DAT_0031c880)[iVar4 * 3],(&PTR_DAT_0031c884)[iVar5 * 3],
                       auStack_8,0x1eb8f0,param_1,0x1eb550,param_1);
  *(undefined4 *)(iVar13 + 4) = uVar6;
  bVar2 = FUN_001777b0();
  if (bVar2 < 8) {
    cVar1 = FUN_0017e890();
    if ((cVar1 == '\x03') || (cVar1 = FUN_0017e890(), cVar1 == '\x04')) {
      uVar3 = FUN_00180140();
    }
    else {
      uVar3 = 0x26;
    }
    uVar9 = FUN_001777b0();
    uVar10 = FUN_00177790();
    uVar11 = FUN_00177780();
    FUN_002e3500(0x430750,uVar3,uVar9,uVar10,uVar11);
  }
  FUN_001986e0(uRam004305f4);
  iVar4 = *(int *)(iVar13 + 4) + iGpffff8bd0;
  FUN_001584a0(iVar4,iVar4);
  iVar4 = *(int *)(iVar13 + 4) + iGpffff8bd0;
  FUN_001f14b0(iVar4,iVar4);
  iVar4 = *(int *)(iVar13 + 4) + iGpffff8bd0;
  FUN_001f4b20(iVar4,iVar4);
  iVar4 = *(int *)(iVar13 + 4) + iGpffff8bd0;
  FUN_001f5130(iVar4,iVar4);
  iVar4 = *(int *)(iVar13 + 4) + iGpffff8bd0;
  FUN_002cfd00(iVar4,iVar4);
  iRam0046a020 = *(int *)(iVar13 + 4) + iGpffff8bd0;
  iRam0046a024 = iRam0046a020;
  iVar4 = FUN_001804d0();
  *(undefined **)(iVar13 + 0x10) = (&PTR_DAT_00326710)[iVar4];
  if (*(int *)(iVar13 + 0x10) != 0) {
    uVar7 = FUN_001777a0();
    *(undefined4 *)(iVar13 + 0x14) =
         *(undefined4 *)(*(int *)(iVar13 + 0x10) + (uVar7 & 0xff) * 0x10);
    uVar7 = FUN_001777a0();
    *(undefined4 *)(iVar13 + 0x18) =
         *(undefined4 *)((uVar7 & 0xff) * 0x10 + *(int *)(iVar13 + 0x10) + 4);
    uVar7 = FUN_001777a0();
    *(undefined4 *)(iVar13 + 0x1c) =
         *(undefined4 *)((uVar7 & 0xff) * 0x10 + *(int *)(iVar13 + 0x10) + 8);
    uVar7 = FUN_001777a0();
    *(undefined4 *)(iVar13 + 0x20) =
         *(undefined4 *)((uVar7 & 0xff) * 0x10 + *(int *)(iVar13 + 0x10) + 0xc);
    *(undefined4 *)(iVar13 + 0x24) = *(undefined4 *)(*(int *)(iVar13 + 0x10) + 0x20);
    *(undefined4 *)(iVar13 + 0x28) = *(undefined4 *)(*(int *)(iVar13 + 0x10) + 0x24);
    *(undefined4 *)(iVar13 + 0x34) = 0;
    *(undefined4 *)(iVar13 + 0x38) = 0;
    *(undefined4 *)(iVar13 + 0x3c) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x40) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x44) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x48) = 0xffffffff;
    lVar12 = FUN_00177700();
    if (lVar12 != 0) {
      uVar7 = FUN_001777a0();
      iVar4 = FUN_00177700();
      iVar4 = iVar4 + (uVar7 & 0xff) * 0x10;
      iVar17 = *(int *)(iVar4 + 4);
      iVar5 = *(int *)(iVar4 + 0xc);
      iVar4 = FUN_00177770();
      puVar8 = (undefined4 *)(iVar17 + iVar4 * 0x10);
      uVar6 = *puVar8;
      uVar18 = puVar8[1];
      iVar4 = FUN_00177760();
      puVar8 = (undefined4 *)(iVar5 + iVar4 * 0x10);
      uVar16 = *puVar8;
      uVar19 = puVar8[1];
      *(undefined4 *)(iVar13 + 0x3c) = uVar6;
      *(undefined4 *)(iVar13 + 0x40) = uVar18;
      *(undefined4 *)(iVar13 + 0x44) = uVar16;
      *(undefined4 *)(iVar13 + 0x48) = uVar19;
    }
    *(undefined4 *)(iVar13 + 0x4c) = *(undefined4 *)(*(int *)(iVar13 + 0x18) + 8);
    *(undefined4 *)(iVar13 + 0x50) = *(undefined4 *)(iVar13 + 0x4c);
    iVar4 = 0;
    if (0 < *(int *)(iVar13 + 0x14)) {
      iVar5 = 0;
      do {
        piVar14 = (int *)(*(int *)(iVar13 + 0x18) + iVar5);
        if ((*(int *)(iVar13 + 0x3c) == *piVar14) && (*(int *)(iVar13 + 0x40) == piVar14[1])) {
          *(int *)(iVar13 + 0x34) = iVar4;
        }
        iVar17 = *(int *)(*(int *)(iVar13 + 0x18) + iVar5 + 8);
        if (*(int *)(iVar13 + 0x4c) <= iVar17) {
          iVar17 = *(int *)(iVar13 + 0x4c);
        }
        *(int *)(iVar13 + 0x4c) = iVar17;
        iVar17 = *(int *)(*(int *)(iVar13 + 0x18) + iVar5 + 8);
        if (iVar17 <= *(int *)(iVar13 + 0x50)) {
          iVar17 = *(int *)(iVar13 + 0x50);
        }
        *(int *)(iVar13 + 0x50) = iVar17;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x10;
      } while (iVar4 < *(int *)(iVar13 + 0x14));
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar13 + 0x1c)) {
      iVar5 = 0;
      do {
        piVar14 = (int *)(*(int *)(iVar13 + 0x20) + iVar5);
        if ((*(int *)(iVar13 + 0x44) == *piVar14) && (*(int *)(iVar13 + 0x48) == piVar14[1])) {
          *(int *)(iVar13 + 0x38) = iVar4;
        }
        iVar17 = *(int *)(*(int *)(iVar13 + 0x20) + iVar5 + 8);
        if (*(int *)(iVar13 + 0x4c) <= iVar17) {
          iVar17 = *(int *)(iVar13 + 0x4c);
        }
        *(int *)(iVar13 + 0x4c) = iVar17;
        iVar17 = *(int *)(*(int *)(iVar13 + 0x20) + iVar5 + 8);
        if (iVar17 <= *(int *)(iVar13 + 0x50)) {
          iVar17 = *(int *)(iVar13 + 0x50);
        }
        *(int *)(iVar13 + 0x50) = iVar17;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x10;
      } while (iVar4 < *(int *)(iVar13 + 0x1c));
    }
    piVar15 = (int *)(*(int *)(iVar13 + 0x20) + *(int *)(iVar13 + 0x38) * 0x10);
    piVar14 = (int *)(*(int *)(iVar13 + 0x18) + *(int *)(iVar13 + 0x34) * 0x10);
    if (*piVar14 < *piVar15) {
      *(int **)(iVar13 + 0x2c) = piVar14;
      *(int *)(iVar13 + 0x30) = *(int *)(iVar13 + 0x20) + *(int *)(iVar13 + 0x38) * 0x10;
      *(undefined4 *)(iVar13 + 0x58) = 1;
    }
    else if (*piVar15 < *piVar14) {
      *(int **)(iVar13 + 0x2c) = piVar15;
      *(int *)(iVar13 + 0x30) = *(int *)(iVar13 + 0x18) + *(int *)(iVar13 + 0x34) * 0x10;
      *(undefined4 *)(iVar13 + 0x58) = 0;
    }
    else if (piVar14[1] < piVar15[1]) {
      *(int **)(iVar13 + 0x2c) = piVar14;
      *(int *)(iVar13 + 0x30) = *(int *)(iVar13 + 0x20) + *(int *)(iVar13 + 0x38) * 0x10;
      *(undefined4 *)(iVar13 + 0x58) = 1;
    }
    else {
      *(int **)(iVar13 + 0x2c) = piVar15;
      *(int *)(iVar13 + 0x30) = *(int *)(iVar13 + 0x18) + *(int *)(iVar13 + 0x34) * 0x10;
      *(undefined4 *)(iVar13 + 0x58) = 0;
    }
  }
  FUN_002d7bf0(0x430750);
  return;
}

