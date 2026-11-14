// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002b8000 - 0x002bc000
#include "ghidra_types.h"

// 0x002b85d0  size 0x464
undefined4 script_step_sub_002b85d0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined2 uStack_4;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  uStack_8 = 0x10;
  uStack_10 = 0x53434549;
  uStack_c = 0x56657273;
  uStack_2 = 2;
  uStack_4 = 0;
  param_1 = param_1 + (1 - *(int *)(param_1 + 0x89e8)) * 0xda8;
  uStack_1 = 0;
  *(undefined4 *)(param_1 + 0x6f04) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x6ef8);
  if (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 4U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6f00) << 1;
      if (*(int *)(param_1 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6efc),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6efc) = uVar1;
        if (*(int *)(param_1 + 0x6efc) != 0) {
          *(int *)(param_1 + 0x6f00) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6f00) - 1;
          if (*(uint *)(param_1 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6f04);
          }
          *(uint *)(param_1 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6efc) + *(int *)(param_1 + 0x6f04),&uStack_10,4);
  *(int *)(param_1 + 0x6f04) = *(int *)(param_1 + 0x6f04) + 4;
  if (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 4U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6f00) << 1;
      if (*(int *)(param_1 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6efc),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6efc) = uVar1;
        if (*(int *)(param_1 + 0x6efc) != 0) {
          *(int *)(param_1 + 0x6f00) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6f00) - 1;
          if (*(uint *)(param_1 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6f04);
          }
          *(uint *)(param_1 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6efc) + *(int *)(param_1 + 0x6f04),&uStack_c,4);
  *(int *)(param_1 + 0x6f04) = *(int *)(param_1 + 0x6f04) + 4;
  if (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 4U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6f00) << 1;
      if (*(int *)(param_1 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6efc),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6efc) = uVar1;
        if (*(int *)(param_1 + 0x6efc) != 0) {
          *(int *)(param_1 + 0x6f00) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6f00) - 1;
          if (*(uint *)(param_1 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6f04);
          }
          *(uint *)(param_1 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6efc) + *(int *)(param_1 + 0x6f04),&uStack_8,4);
  *(int *)(param_1 + 0x6f04) = *(int *)(param_1 + 0x6f04) + 4;
  if (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 2U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6f00) << 1;
      if (*(int *)(param_1 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6efc),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6efc) = uVar1;
        if (*(int *)(param_1 + 0x6efc) != 0) {
          *(int *)(param_1 + 0x6f00) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6f00) - 1;
          if (*(uint *)(param_1 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6f04);
          }
          *(uint *)(param_1 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 2U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6efc) + *(int *)(param_1 + 0x6f04),&uStack_4,2);
  *(int *)(param_1 + 0x6f04) = *(int *)(param_1 + 0x6f04) + 2;
  if (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 1U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6f00) << 1;
      if (*(int *)(param_1 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6efc),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6efc) = uVar1;
        if (*(int *)(param_1 + 0x6efc) != 0) {
          *(int *)(param_1 + 0x6f00) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6f00) - 1;
          if (*(uint *)(param_1 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6f04);
          }
          *(uint *)(param_1 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 1U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6efc) + *(int *)(param_1 + 0x6f04),&uStack_2,1);
  *(int *)(param_1 + 0x6f04) = *(int *)(param_1 + 0x6f04) + 1;
  if (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 1U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6f00) << 1;
      if (*(int *)(param_1 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6efc),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6efc) = uVar1;
        if (*(int *)(param_1 + 0x6efc) != 0) {
          *(int *)(param_1 + 0x6f00) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6f00) - 1;
          if (*(uint *)(param_1 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6f04);
          }
          *(uint *)(param_1 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6f00) < *(int *)(param_1 + 0x6f04) + 1U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6efc) + *(int *)(param_1 + 0x6f04),&uStack_1,1);
  *(int *)(param_1 + 0x6f04) = *(int *)(param_1 + 0x6f04) + 1;
  return 1;
}

// 0x002b8a40  size 0x180
void script_step_sub_002b8a40(undefined8 param_1)

{
  int iVar1;
  
  script_exit_sub_002bb370();
  iVar1 = 0;
  do {
    script_step_sub_002ba4b0(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  script_step_sub_002ba1c0(param_1);
  script_load_sub_002b9e40(param_1);
  script_load_sub_002b9a60(param_1);
  iVar1 = (int)param_1;
  if (0x286c0 < *(uint *)(iVar1 + *(int *)(iVar1 + 0x89e8) * 0xda8 + 0x6f04)) {
    *(uint *)(iVar1 + 0x89ec) = *(uint *)(iVar1 + 0x89ec) | 0x40;
  }
  if (0xa900 < *(uint *)(iVar1 + *(int *)(iVar1 + 0x89e8) * 0xda8 + 0x6ff0)) {
    *(uint *)(iVar1 + 0x89ec) = *(uint *)(iVar1 + 0x89ec) | 0x10;
  }
  if (0x92600 < *(uint *)(iVar1 + *(int *)(iVar1 + 0x89e8) * 0xda8 + 0x7020)) {
    *(uint *)(iVar1 + 0x89ec) = *(uint *)(iVar1 + 0x89ec) | 0x20;
  }
  if ((*(uint *)(iVar1 + 0x89ec) & 0x40) == 0) {
    *(undefined4 *)(iVar1 + 0x89ec) = 1;
  }
  *(undefined4 *)(iVar1 + 0xc) = 1;
  Thread_Exit(param_1);
  return;
}

// 0x002b8bc0  size 0x70
void script_leaf_sub_002b8bc0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x89ec) == 1) {
    *param_2 = *(undefined4 *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x6efc);
    *param_3 = *(undefined4 *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x6f04);
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
  }
  return;
}

// 0x002b8c30  size 0x70
void script_leaf_sub_002b8c30(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x89ec) == 1) {
    *param_2 = *(undefined4 *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x7018);
    *param_3 = *(undefined4 *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x7020);
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
  }
  return;
}

// 0x002b8ca0  size 0x70
void script_leaf_sub_002b8ca0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x89ec) == 1) {
    *param_2 = *(undefined4 *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x6fe8);
    *param_3 = *(undefined4 *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x6ff0);
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
  }
  return;
}

// 0x002b8d10  size 0x20
void script_leaf_sub_002b8d10(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  param_1 = param_1 + param_2 * 0xda8;
  *param_3 = *(undefined4 *)(param_1 + 0x1bc);
  *param_4 = *(undefined4 *)(param_1 + 0x1a4);
  return;
}

// 0x002b8d30  size 0x20
void script_leaf_sub_002b8d30(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  param_1 = param_1 + param_2 * 0xda8;
  *param_3 = *(undefined4 *)(param_1 + 0x2d8);
  *param_4 = *(undefined4 *)(param_1 + 700);
  return;
}

// 0x002b8d50  size 0x20
void script_leaf_sub_002b8d50(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  param_1 = param_1 + param_2 * 0xda8;
  *param_3 = *(undefined4 *)(param_1 + 0x2a8);
  *param_4 = *(undefined4 *)(param_1 + 0x29c);
  return;
}

// 0x002b8d70  size 0x58
void script_leaf_sub_002b8d70(undefined8 param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  param_2 = param_2 * 0xc;
  *param_3 = *(ushort *)(*(int *)(iRam0036f7e4 + 8) + param_2) + 0x1ca6;
  *param_4 = *(ushort *)(*(int *)(iRam0036f7e4 + 8) + param_2) + 0x1db4;
  *param_5 = *(ushort *)(*(int *)(iRam0036f7e4 + 8) + param_2) + 0x1ec2;
  return;
}

// 0x002b8dd0  size 0x14
undefined4 Script_GetElem_2f4_xda8(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0xda8 + param_1 + 0x2f4);
}

// 0x002b8df0  size 0x50
int script_leaf_sub_002b8df0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 * 0xda8 + param_1 + 0x2fc);
    iVar2 = 0;
    if (0 < param_3) {
      do {
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = *(int *)(iVar1 + 8);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
  }
  return iVar1;
}

// 0x002b8e40  size 0x14
undefined4 Script_GetElem_2f0_xda8(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0xda8 + param_1 + 0x2f0);
}

// 0x002b8e60  size 0x64
int script_step_sub_002b8e60(int param_1,long param_2)

{
  int iVar1;
  
  if (param_2 < 0xc) {
    iVar1 = *(int *)((int)param_2 * 0x18 + param_1 + 0x3c) + 0x846;
  }
  else {
    iVar1 = maybe_Race_GetMode();
    iVar1 = iVar1 + ((int)param_2 + -0xc) * 0x858 + 0x876;
  }
  return iVar1;
}

// 0x002b8ed0  size 0xc
int Script_FieldPtr_89f6(int param_1)

{
  return param_1 + 0x89f6;
}

// 0x002b8ee0  size 0x14
int Script_ElemPtr_1d6_xda8(int param_1,int param_2)

{
  return param_1 + param_2 * 0xda8 + 0x1d6;
}

// 0x002b8f00  size 0x14
undefined1 Script_GetElem_1d5_xda8(int param_1,int param_2)

{
  return *(undefined1 *)(param_2 * 0xda8 + param_1 + 0x1d5);
}

// 0x002b8f20  size 0x10
undefined2 Script_GetField_89f2(int param_1)

{
  return *(undefined2 *)(param_1 + 0x89f2);
}

// 0x002b8f30  size 0x10
undefined2 Script_GetField_89f0(int param_1)

{
  return *(undefined2 *)(param_1 + 0x89f0);
}

// 0x002b8f40  size 0x10
undefined2 Script_GetField_89f4(int param_1)

{
  return *(undefined2 *)(param_1 + 0x89f4);
}

// 0x002b8f50  size 0x64
undefined4 script_leaf_sub_002b8f50(int param_1,int param_2,short param_3)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_2 * 0xda8 + param_1 + 0x2fc);
  if (psVar1 != (short *)0x0) {
    do {
      if (((long)*psVar1 <= (long)param_3) &&
         ((long)param_3 < (long)((int)*psVar1 + (int)psVar1[1]))) {
        return 1;
      }
      psVar1 = *(short **)(psVar1 + 4);
    } while (psVar1 != (short *)0x0);
  }
  return 0;
}

// 0x002b8fc0  size 0xc0
undefined8 script_leaf_sub_002b8fc0(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  
  param_2 = param_2 * 0xda8;
  iVar5 = param_2 + param_1;
  uVar4 = 0;
  if (0 < *(int *)(iVar5 + 0x2f0)) {
    bVar3 = true;
    bVar1 = *(int *)(iVar5 + 0x1cc) != 0;
    bVar2 = true;
    if (!bVar1) {
      bVar1 = *(int *)(iVar5 + 0x1e8) != 0;
    }
    if (!bVar1) {
      bVar1 = *(int *)(param_2 + param_1 + 0x2b8) != 0;
      if (!bVar1) {
        bVar1 = *(int *)(param_2 + param_1 + 0x2d0) != 0;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar1 = *(int *)(param_2 + param_1 + 0x2e8) != 0;
      if (!bVar1) {
        bVar1 = *(int *)(param_2 + param_1 + 0x2ec) != 0;
      }
      if (!bVar1) {
        bVar3 = false;
      }
    }
    if (!bVar3) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

// 0x002b9080  size 0x204
undefined4 script_leaf_sub_002b9080(int param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 0) {
    iVar6 = 0;
    iVar5 = param_1;
    do {
      bVar3 = true;
      bVar1 = *(int *)(iVar5 + 0x1cc) != 0;
      bVar2 = true;
      if (!bVar1) {
        bVar1 = *(int *)(iVar5 + 0x1e8) != 0;
      }
      if (!bVar1) {
        bVar1 = *(int *)(iVar5 + 0x2b8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar5 + 0x2d0) != 0;
        }
        if (!bVar1) {
          bVar2 = false;
        }
      }
      if (!bVar2) {
        bVar1 = *(int *)(iVar5 + 0x2e8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar5 + 0x2ec) != 0;
        }
        if (!bVar1) {
          bVar3 = false;
        }
      }
      if (bVar3) {
        return 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0xda8;
    } while (iVar6 < 8);
    iVar5 = 0;
    do {
      bVar3 = true;
      bVar1 = *(int *)(param_1 + 0x6f0c) != 0;
      bVar2 = true;
      if (!bVar1) {
        bVar1 = *(int *)(param_1 + 0x6f28) != 0;
      }
      if (!bVar1) {
        bVar1 = *(int *)(param_1 + 0x6ff8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(param_1 + 0x7010) != 0;
        }
        if (!bVar1) {
          bVar2 = false;
        }
      }
      if (!bVar2) {
        bVar1 = *(int *)(param_1 + 0x7028) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(param_1 + 0x702c) != 0;
        }
        if (!bVar1) {
          bVar3 = false;
        }
      }
      if (bVar3) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 0xda8;
    } while (iVar5 < 2);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    iVar5 = (int)param_2 * 0xda8;
    bVar2 = true;
    bVar1 = true;
    if ((*(int *)(iVar5 + param_1 + 0x1cc) == 0) && (*(int *)(iVar5 + param_1 + 0x1e8) == 0)) {
      bVar1 = false;
    }
    if (!bVar1) {
      bVar1 = *(int *)(iVar5 + param_1 + 0x2b8) != 0;
      if (!bVar1) {
        bVar1 = *(int *)(iVar5 + param_1 + 0x2d0) != 0;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar1 = *(int *)(iVar5 + param_1 + 0x2e8) != 0;
      if (!bVar1) {
        bVar1 = *(int *)(iVar5 + param_1 + 0x2ec) != 0;
      }
      if (!bVar1) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// 0x002b9290  size 0x18
bool script_leaf_sub_002b9290(int param_1)

{
  return *(int *)(param_1 + 0x89ec) == 1;
}

// 0x002b92b0  size 0x3c
void script_step_sub_002b92b0(int param_1,undefined8 param_2)

{
  maybe_strncpy(param_1 + 0x89f6,param_2,0x10);
  *(undefined1 *)(param_1 + 0x8a05) = 0;
  return;
}

// 0x002b92f0  size 0x4c
undefined4 script_leaf_sub_002b92f0(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  
  if ((param_3 < '\0') || ('\x7f' < param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *(char *)(param_2 * 0xda8 + param_1 + 0x1d5) = param_3;
  }
  return uVar1;
}

// 0x002b9340  size 0x50
undefined4 script_leaf_sub_002b9340(int param_1,short param_2)

{
  undefined4 uVar1;
  
  if (((long)param_2 < (long)(*(short *)(param_1 + 0x89f0) + 0x10)) || (0x400 < (long)param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *(short *)(param_1 + 0x89f2) = param_2;
  }
  return uVar1;
}

// 0x002b9390  size 0x50
undefined4 script_leaf_sub_002b9390(int param_1,short param_2)

{
  undefined4 uVar1;
  
  if (((long)param_2 < 0) || ((long)(*(short *)(param_1 + 0x89f2) + -0x10) < (long)param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *(short *)(param_1 + 0x89f0) = param_2;
  }
  return uVar1;
}

// 0x002b93e0  size 0x40
undefined4 script_leaf_sub_002b93e0(int param_1,short param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 100) || (200 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *(short *)(param_1 + 0x89f4) = param_2;
  }
  return uVar1;
}

// 0x002b9420  size 0x18
undefined4 Script_GetElem_3c_x18(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x18 + param_1 + 0x3c);
}

// 0x002b9440  size 0x16c
void script_step_sub_002b9440(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)(param_2 + 0x19c) = 0;
  Mem_Set16(param_2 + 0x1a8,0,0xc00);
  iVar5 = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar4 & 7;
    if (((int)uVar4 < 0) && (uVar1 != 0)) {
      uVar1 = uVar1 - 8;
    }
    uVar2 = uVar4;
    if ((int)uVar4 < 0) {
      uVar2 = uVar4 + 7;
    }
    pbVar3 = (byte *)(param_3 + ((int)uVar2 >> 3));
    if (((int)(uint)*pbVar3 >> (uVar1 + 1 & 0x1f) & 1U) != 0) {
      iVar6 = param_2 + *(int *)(param_2 + 0x19c) * 0xc;
      *(short *)(iVar6 + 0x1aa) = (short)iVar5 - *(short *)(iVar6 + 0x1a8);
      iVar6 = *(int *)(param_2 + 0x19c);
      if (iVar6 == 0) {
        *(int *)(param_2 + 0x1a4) = param_2 + 0x1a8;
      }
      else {
        *(int *)(param_2 + iVar6 * 0xc + 0x1ac) = param_2 + (iVar6 + -1) * 0xc + 0x1a8;
        iVar6 = param_2 + *(int *)(param_2 + 0x19c) * 0xc;
        *(int *)(iVar6 + 0x1a4) = iVar6 + 0x1a8;
      }
      *(int *)(param_2 + 0x19c) = *(int *)(param_2 + 0x19c) + 1;
      if (0xff < *(int *)(param_2 + 0x19c)) {
        return;
      }
    }
    if (((int)(uint)*pbVar3 >> (uVar1 & 0x1f) & 1U) != 0) {
      *(short *)(param_2 + *(int *)(param_2 + 0x19c) * 0xc + 0x1a8) = (short)iVar5;
    }
    iVar5 = iVar5 + 1;
    uVar4 = uVar4 + 2;
    if (0x400 < iVar5) {
      return;
    }
  } while( true );
}

// 0x002b95c0  size 0x1f4
undefined4 script_exit_sub_002b95c0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  *(short *)(param_1 + 0x89f4) = (short)param_2[0x211];
  *(short *)(param_1 + 0x89f0) = (short)param_2[0x210];
  *(undefined2 *)(param_1 + 0x89f2) = *(undefined2 *)((int)param_2 + 0x842);
  maybe_strncpy(param_1 + 0x89f6,(int)param_2 + 0x846,0x10);
  iVar5 = 0;
  iVar3 = param_1;
  do {
    script_exit_sub_002b1820(iVar3 + 0x6e98);
    menuscr_exit_sub_002afbd0(iVar3 + 0x6f2c);
    if (*(int *)(iVar3 + 0x7018) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar3 + 0x7018) = 0;
    }
    *(undefined4 *)(iVar3 + 0x701c) = 0;
    *(undefined4 *)(iVar3 + 0x7020) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x7024) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x7028) = 0;
    *(undefined4 *)(iVar3 + 0x6f28) = 0;
    *(undefined4 *)(iVar3 + 0x7010) = 0;
    *(undefined4 *)(iVar3 + 0x702c) = 0;
    *(undefined4 *)(iVar3 + 0x7030) = 0;
    *(undefined4 *)(iVar3 + 0x703c) = 0;
    *(undefined4 *)(iVar3 + 0x7034) = 0;
    Mem_Set16(iVar3 + 0x7040,0,0xc00);
    iVar5 = iVar5 + 1;
    *(undefined4 *)(iVar3 + 0x7038) = 0;
    iVar3 = iVar3 + 0xda8;
  } while (iVar5 < 2);
  iVar5 = 0;
  piVar4 = param_2;
  iVar3 = param_1;
  do {
    script_exit_sub_002b1820(iVar3 + 0x158);
    menuscr_exit_sub_002afbd0(iVar3 + 0x1ec);
    if (*(int *)(iVar3 + 0x2d8) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar3 + 0x2d8) = 0;
    }
    *(undefined4 *)(iVar3 + 0x2dc) = 0;
    *(undefined4 *)(iVar3 + 0x2e0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x2e4) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x2e8) = 0;
    *(undefined4 *)(iVar3 + 0x1e8) = 0;
    *(undefined4 *)(iVar3 + 0x2d0) = 0;
    *(undefined4 *)(iVar3 + 0x2ec) = 0;
    *(undefined4 *)(iVar3 + 0x2f0) = 0;
    *(undefined4 *)(iVar3 + 0x2fc) = 0;
    *(undefined4 *)(iVar3 + 0x2f4) = 0;
    Mem_Set16(iVar3 + 0x300,0,0xc00);
    *(undefined4 *)(iVar3 + 0x2f8) = 0;
    iVar2 = *param_2;
    if ((0 < iVar2) && (0 < iVar2)) {
      *(int *)(iVar3 + 0x2f0) = iVar2;
      *(undefined4 *)(iVar3 + 0x1e8) = 1;
      *(undefined4 *)(iVar3 + 0x2d0) = 1;
      *(undefined4 *)(iVar3 + 0x2ec) = 1;
    }
    cVar1 = (char)param_2[1];
    if ((-1 < cVar1) && (cVar1 <= '\x7f')) {
      *(char *)(iVar3 + 0x1d5) = cVar1;
    }
    *(int *)(iVar3 + 0x2f8) = (int)piVar4 + 5;
    iVar5 = iVar5 + 1;
    param_2 = param_2 + 0x42;
    iVar3 = iVar3 + 0xda8;
    piVar4 = piVar4 + 0x42;
  } while (iVar5 < 8);
  script_load_sub_002bb990(param_1);
  return 1;
}

// 0x002b97c0  size 0xc4
undefined8 script_step_sub_002b97c0(undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  if (param_2 < 0xc) {
    iVar4 = *(int *)(iVar4 * 0x18 + (int)param_1 + 0x3c);
  }
  else {
    if (param_2 < 0xc) {
      bVar1 = true;
    }
    else {
      iVar2 = maybe_Race_GetMode();
      bVar1 = *(short *)(iVar2 + iVar4 * 0x858 + -0x5bac) != 0;
    }
    if (!bVar1) {
      script_exit_sub_002bb810(param_1);
      return 0;
    }
    iVar2 = maybe_Race_GetMode();
    iVar4 = iVar2 + (iVar4 + -0xc) * 0x858 + 0x30;
  }
  uVar3 = script_exit_sub_002b95c0(param_1,iVar4);
  return uVar3;
}

// 0x002b9890  size 0x16c
undefined4 script_step_sub_002b9890(int param_1,undefined4 *param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  Mem_Set16(param_2,0,0x858);
  *(undefined2 *)(param_2 + 0x211) = *(undefined2 *)(param_1 + 0x89f4);
  *(undefined2 *)(param_2 + 0x210) = *(undefined2 *)(param_1 + 0x89f0);
  *(undefined2 *)((int)param_2 + 0x842) = *(undefined2 *)(param_1 + 0x89f2);
  maybe_strncpy((int)param_2 + 0x846,param_1 + 0x89f6,0x10);
  iVar3 = 0;
  do {
    *param_2 = *(undefined4 *)(param_1 + 0x2f0);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x1d5);
    psVar2 = *(short **)(param_1 + 0x2fc);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x2f4)) {
      do {
        uVar5 = *psVar2 * 2;
        uVar4 = uVar5 & 7;
        if (((int)uVar5 < 0) && (uVar4 != 0)) {
          uVar4 = uVar4 - 8;
        }
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + 7;
        }
        *(byte *)((int)param_2 + ((int)uVar5 >> 3) + 5) =
             *(byte *)((int)param_2 + ((int)uVar5 >> 3) + 5) | (byte)(1 << (uVar4 & 0x1f));
        uVar5 = ((int)*psVar2 + (int)psVar2[1]) * 2;
        uVar4 = uVar5 & 7;
        if (((int)uVar5 < 0) && (uVar4 != 0)) {
          uVar4 = uVar4 - 8;
        }
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + 7;
        }
        iVar1 = iVar1 + 1;
        *(byte *)((int)param_2 + ((int)uVar5 >> 3) + 5) =
             *(byte *)((int)param_2 + ((int)uVar5 >> 3) + 5) | (byte)(1 << (uVar4 + 1 & 0x1f));
        psVar2 = *(short **)(psVar2 + 4);
      } while (iVar1 < *(int *)(param_1 + 0x2f4));
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0xda8;
    param_2 = param_2 + 0x42;
  } while (iVar3 < 8);
  return 1;
}

// 0x002b9a00  size 0x60
undefined8 script_step_sub_002b9a00(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 < 0xc) {
    uVar2 = 0;
  }
  else {
    iVar1 = maybe_Race_GetMode();
    uVar2 = script_step_sub_002b9890(param_1,iVar1 + ((int)param_2 + -0xc) * 0x858 + 0x30);
  }
  return uVar2;
}

// 0x002b9a60  size 0x3d0
undefined4 script_load_sub_002b9a60(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar10 = 0;
    iVar9 = param_1;
    iVar7 = param_1;
    do {
      bVar5 = false;
      if (0 < *(int *)(iVar9 + 0x2f0)) {
        bVar4 = true;
        bVar2 = *(int *)(iVar9 + 0x1cc) != 0;
        bVar3 = true;
        if (!bVar2) {
          bVar2 = *(int *)(iVar9 + 0x1e8) != 0;
        }
        if (!bVar2) {
          bVar2 = *(int *)(iVar9 + 0x2b8) != 0;
          if (!bVar2) {
            bVar2 = *(int *)(iVar9 + 0x2d0) != 0;
          }
          if (!bVar2) {
            bVar3 = false;
          }
        }
        if (!bVar3) {
          bVar2 = *(int *)(iVar9 + 0x2e8) != 0;
          if (!bVar2) {
            bVar2 = *(int *)(iVar9 + 0x2ec) != 0;
          }
          if (!bVar2) {
            bVar4 = false;
          }
        }
        if (!bVar4) {
          bVar5 = true;
        }
      }
      if (bVar5) {
        if ((*(int *)(iVar9 + 0x2f4) < 1) || (*(char *)(iVar9 + 0x1d5) < '\x01')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        iVar11 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
        *(int *)(iVar11 + 0x7020) = *(int *)(iVar11 + 0x7020) + *(int *)(iVar7 + 0x10);
      }
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0xda8;
      iVar7 = iVar7 + 4;
    } while (iVar10 < 8);
  }
  else {
    iVar9 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
    uVar1 = *(undefined4 *)(iVar9 + 0x6ffc);
    if (*(int *)(iVar9 + 0x7018) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar9 + 0x7018) = 0;
    }
    *(undefined4 *)(iVar9 + 0x701c) = 0;
    *(undefined4 *)(iVar9 + 0x7020) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x7024) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x7028) = 0;
    uVar6 = Mem_Alloc16(uVar1,*(undefined4 *)(iVar9 + 0x7014));
    *(undefined4 *)(iVar9 + 0x7018) = uVar6;
    if (*(int *)(iVar9 + 0x7018) != 0) {
      *(undefined4 *)(iVar9 + 0x701c) = uVar1;
      *(undefined4 *)(iVar9 + 0x7020) = 0;
    }
    iVar7 = 0;
    iVar9 = param_1;
    do {
      bVar5 = false;
      if (0 < *(int *)(iVar9 + 0x2f0)) {
        bVar4 = true;
        bVar2 = *(int *)(iVar9 + 0x1cc) != 0;
        bVar3 = true;
        if (!bVar2) {
          bVar2 = *(int *)(iVar9 + 0x1e8) != 0;
        }
        if (!bVar2) {
          bVar2 = *(int *)(iVar9 + 0x2b8) != 0;
          if (!bVar2) {
            bVar2 = *(int *)(iVar9 + 0x2d0) != 0;
          }
          if (!bVar2) {
            bVar3 = false;
          }
        }
        if (!bVar3) {
          bVar2 = *(int *)(iVar9 + 0x2e8) != 0;
          if (!bVar2) {
            bVar2 = *(int *)(iVar9 + 0x2ec) != 0;
          }
          if (!bVar2) {
            bVar4 = false;
          }
        }
        if (!bVar4) {
          bVar5 = true;
        }
      }
      if (bVar5) {
        if ((*(int *)(iVar9 + 0x2f4) < 1) || (*(char *)(iVar9 + 0x1d5) < '\x01')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        iVar10 = *(int *)(iVar9 + 700);
        iVar11 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
        uVar1 = *(undefined4 *)(iVar9 + 0x2d8);
        if (*(uint *)(iVar11 + 0x701c) < (uint)(*(int *)(iVar11 + 0x7020) + iVar10)) {
          do {
            iVar12 = *(int *)(iVar11 + 0x701c) << 1;
            if (*(int *)(iVar11 + 0x7018) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar11 + 0x7018),iVar12,*(undefined4 *)(iVar11 + 0x7014))
              ;
              *(undefined4 *)(iVar11 + 0x7018) = uVar6;
              if (*(int *)(iVar11 + 0x7018) != 0) {
                *(int *)(iVar11 + 0x701c) = iVar12;
                uVar8 = *(int *)(iVar11 + 0x701c) - 1;
                if (*(uint *)(iVar11 + 0x7020) <= uVar8) {
                  uVar8 = *(uint *)(iVar11 + 0x7020);
                }
                *(uint *)(iVar11 + 0x7020) = uVar8;
              }
            }
          } while (*(uint *)(iVar11 + 0x701c) < (uint)(*(int *)(iVar11 + 0x7020) + iVar10));
        }
        maybe_Mem_CopyQwords(*(int *)(iVar11 + 0x7018) + *(int *)(iVar11 + 0x7020),uVar1,iVar10);
        *(int *)(iVar11 + 0x7020) = *(int *)(iVar11 + 0x7020) + iVar10;
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 0xda8;
    } while (iVar7 < 8);
  }
  return 1;
}

// 0x002b9e40  size 0x374
undefined4 script_load_sub_002b9e40(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 uStack_1;
  
  iVar5 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
  menuscr_exit_sub_002afbd0(iVar5 + 0x6f2c);
  if (*(int *)(iVar5 + 0x6fe8) != 0) {
    Mem_Free();
    *(undefined4 *)(iVar5 + 0x6fe8) = 0;
  }
  *(undefined4 *)(iVar5 + 0x6fec) = 0;
  *(undefined4 *)(iVar5 + 0x6ff0) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x6ff4) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x6ff8) = 0;
  uVar6 = Mem_Alloc16(0xa900,*(undefined4 *)(iVar5 + 0x6fe4));
  *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
  if (*(int *)(iVar5 + 0x6fe8) != 0) {
    *(undefined4 *)(iVar5 + 0x6fec) = 0xa900;
    *(undefined4 *)(iVar5 + 0x6ff0) = 0;
  }
  iVar10 = 0;
  iVar9 = 0;
  iVar5 = param_1;
  do {
    bVar4 = false;
    if (0 < *(int *)(iVar5 + 0x2f0)) {
      bVar3 = true;
      bVar1 = *(int *)(iVar5 + 0x1cc) != 0;
      bVar2 = true;
      if (!bVar1) {
        bVar1 = *(int *)(iVar5 + 0x1e8) != 0;
      }
      if (!bVar1) {
        bVar1 = *(int *)(iVar5 + 0x2b8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar5 + 0x2d0) != 0;
        }
        if (!bVar1) {
          bVar2 = false;
        }
      }
      if (!bVar2) {
        bVar1 = *(int *)(iVar5 + 0x2e8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar5 + 0x2ec) != 0;
        }
        if (!bVar1) {
          bVar3 = false;
        }
      }
      if (!bVar3) {
        bVar4 = true;
      }
    }
    if (bVar4) {
      if ((*(int *)(iVar5 + 0x2f4) < 1) || (bVar4 = true, *(char *)(iVar5 + 0x1d5) < '\x01')) {
        bVar4 = false;
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      iVar10 = iVar10 + *(int *)(iVar5 + 700);
    }
    iVar9 = iVar9 + 1;
    iVar5 = iVar5 + 0xda8;
  } while (iVar9 < 8);
  *(int *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x6ffc) = iVar10;
  script_step_sub_002b75e0(param_1);
  iVar5 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 0x40;
  script_step_sub_002b1a80(param_1);
  script_step_sub_002b23f0(param_1);
  script_step_sub_002b4090(param_1);
  script_step_sub_002b4b80(param_1);
  script_step_sub_002b6e10(param_1);
  uStack_1 = 0xff;
  iVar5 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
  uVar7 = *(uint *)(iVar5 + 0x6ff0) & 0xf;
  if (uVar7 != 0) {
    iVar9 = 0x10 - uVar7;
    iVar10 = 0;
    if (0 < iVar9) {
      do {
        iVar8 = *(int *)(iVar5 + 0x6ff0);
        uVar7 = *(uint *)(iVar5 + 0x6fec);
        if (uVar7 < iVar8 + 1U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,
                                  *(undefined4 *)(iVar5 + 0x6fe4));
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
                uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
                  uVar7 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar7;
              }
            }
            iVar8 = *(int *)(iVar5 + 0x6ff0);
            uVar7 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar7 < iVar8 + 1U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar8,&uStack_1,1);
        iVar10 = iVar10 + 1;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
      } while (iVar10 < iVar9);
    }
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar9 = 0;
    iVar5 = param_1;
    do {
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_1 + 700);
      menuscr_exit_sub_002afbd0(param_1 + 0x1ec);
      iVar9 = iVar9 + 1;
      param_1 = param_1 + 0xda8;
      iVar5 = iVar5 + 4;
    } while (iVar9 < 8);
  }
  return 1;
}

// 0x002ba1c0  size 0x1c4
void script_step_sub_002ba1c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uStack_1;
  
  script_step_sub_002b85d0();
  script_step_sub_002b7ff0(param_1);
  script_step_sub_002b7a40(param_1);
  uStack_1 = 0xff;
  iVar1 = param_1 + (1 - *(int *)(param_1 + 0x89e8)) * 0xda8;
  uVar3 = *(uint *)(iVar1 + 0x6f04) & 0xf;
  if (uVar3 != 0) {
    iVar5 = 0x10 - uVar3;
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        iVar4 = *(int *)(iVar1 + 0x6f04);
        uVar3 = *(uint *)(iVar1 + 0x6f00);
        if (uVar3 < iVar4 + 1U) {
          do {
            if (*(int *)(iVar1 + 0x6efc) != 0) {
              uVar2 = Mem_Realloc(*(int *)(iVar1 + 0x6efc),uVar3 << 1,
                                  *(undefined4 *)(iVar1 + 0x6ef8));
              *(undefined4 *)(iVar1 + 0x6efc) = uVar2;
              if (*(int *)(iVar1 + 0x6efc) != 0) {
                *(uint *)(iVar1 + 0x6f00) = uVar3 << 1;
                uVar3 = *(int *)(iVar1 + 0x6f00) - 1;
                if (*(uint *)(iVar1 + 0x6f04) <= uVar3) {
                  uVar3 = *(uint *)(iVar1 + 0x6f04);
                }
                *(uint *)(iVar1 + 0x6f04) = uVar3;
              }
            }
            iVar4 = *(int *)(iVar1 + 0x6f04);
            uVar3 = *(uint *)(iVar1 + 0x6f00);
          } while (uVar3 < iVar4 + 1U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar1 + 0x6efc) + iVar4,&uStack_1,1);
        iVar6 = iVar6 + 1;
        *(int *)(iVar1 + 0x6f04) = *(int *)(iVar1 + 0x6f04) + 1;
      } while (iVar6 < iVar5);
    }
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    script_exit_sub_002b1820(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x6e98);
    iVar5 = 0;
    iVar1 = param_1;
    do {
      script_exit_sub_002b1820(iVar1 + 0x158);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 0xda8;
    } while (iVar5 < 8);
  }
  *(int *)(param_1 + 0x89e8) = 1 - *(int *)(param_1 + 0x89e8);
  return;
}

// 0x002ba390  size 0x120
int script_step_sub_002ba390
              (undefined8 param_1,undefined8 param_2,int *param_3,long param_4,undefined4 *param_5,
              char param_6)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piStack_30;
  undefined4 auStack_10 [2];
  byte bStack_8;
  undefined1 uStack_7;
  
  iVar5 = 0;
  iVar4 = 0;
  if (0 < param_4) {
    bVar1 = param_6 << 1;
    piStack_30 = param_3;
    do {
      iVar3 = 0;
      piVar2 = piStack_30;
      do {
        if (*piVar2 != 0) {
          auStack_10[0] = *param_5;
          uStack_7 = (undefined1)iVar3;
          bStack_8 = bVar1 | 0x80;
          script_step_sub_002b0790(param_2,auStack_10);
          *piVar2 = 0;
          iVar4 = iVar4 + 1;
          *param_5 = 0;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < 0x80);
      iVar5 = iVar5 + 1;
      piStack_30 = piStack_30 + 0x80;
      bVar1 = bVar1 + 1;
    } while (iVar5 < (int)param_4);
  }
  return iVar4;
}

// 0x002ba4b0  size 0xe98
undefined4 script_step_sub_002ba4b0(undefined8 param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  int iStack_24a0;
  int iStack_2490;
  int iStack_248c;
  int iStack_2480;
  int iStack_247c;
  int iStack_2460;
  short *psStack_2450;
  undefined4 auStack_2430 [2048];
  undefined4 auStack_430 [256];
  undefined1 auStack_30 [8];
  int aiStack_28 [2];
  byte bStack_20;
  byte bStack_1f;
  char cStack_1e;
  int aiStack_18 [2];
  byte bStack_10;
  byte bStack_f;
  char cStack_e;
  int iStack_8;
  int iStack_4;
  
  iVar9 = param_2 * 0xda8;
  iVar22 = (int)param_1;
  iVar13 = iVar9 + iVar22;
  bVar5 = false;
  if (0 < *(int *)(iVar13 + 0x2f0)) {
    bVar4 = true;
    bVar2 = *(int *)(iVar13 + 0x1cc) != 0;
    bVar3 = true;
    if (!bVar2) {
      bVar2 = *(int *)(iVar13 + 0x1e8) != 0;
    }
    if (!bVar2) {
      bVar2 = *(int *)(iVar9 + iVar22 + 0x2b8) != 0;
      if (!bVar2) {
        bVar2 = *(int *)(iVar9 + iVar22 + 0x2d0) != 0;
      }
      if (!bVar2) {
        bVar3 = false;
      }
    }
    if (!bVar3) {
      bVar2 = *(int *)(iVar9 + iVar22 + 0x2e8) != 0;
      if (!bVar2) {
        bVar2 = *(int *)(iVar9 + iVar22 + 0x2ec) != 0;
      }
      if (!bVar2) {
        bVar4 = false;
      }
    }
    if (!bVar4) {
      bVar5 = true;
    }
  }
  if (bVar5) {
    if ((*(int *)(iVar9 + iVar22 + 0x2f4) < 1) || (*(char *)(iVar9 + iVar22 + 0x1d5) < '\x01')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    iStack_2480 = *(short *)(iVar22 + 0x89f0) * 0x1e0;
    if (iStack_2480 < 0) {
      iStack_2480 = iStack_2480 + 3;
    }
    iStack_247c = iStack_2480 >> 0x1f;
    iStack_2480 = iStack_2480 >> 2;
    iStack_2490 = *(short *)(iVar22 + 0x89f2) * 0x1e0;
    if (iStack_2490 < 0) {
      iStack_2490 = iStack_2490 + 3;
    }
    iStack_248c = iStack_2490 >> 0x1f;
    iStack_2490 = iStack_2490 >> 2;
    psStack_2450 = *(short **)(param_2 * 0xda8 + iVar22 + 0x2fc);
    sVar1 = *psStack_2450;
    iStack_2460 = ((int)sVar1 + (int)psStack_2450[1]) * 0x1e0;
    if (iStack_2460 < 0) {
      iStack_2460 = iStack_2460 + 3;
    }
    iStack_2460 = iStack_2460 >> 2;
    uVar20 = 0;
    iStack_24a0 = (sVar1 * 0x10 - (int)sVar1) * 0x20;
    if (iStack_24a0 < 0) {
      iStack_24a0 = iStack_24a0 + 3;
    }
    iStack_24a0 = iStack_24a0 >> 2;
    iVar9 = iVar22 + param_2 * 0xda8;
    iVar18 = iVar9 + 0x158;
    bVar5 = false;
    iVar13 = iVar22 + (1 - *(int *)(iVar22 + 0x89e8)) * 0xda8;
    iVar16 = iVar13 + 0x6e98;
    iVar10 = iVar22 + *(int *)(iVar22 + 0x89e8) * 0xda8;
    iVar17 = iVar10 + 0x6e98;
    Mem_Set16(auStack_430,0,0x400);
    Mem_Set16(auStack_2430,0,0x2000);
    *(undefined4 *)(iVar9 + 0x1b0) = 0;
    *(undefined4 *)(iVar9 + 0x1c4) = 0;
    *(undefined1 *)(iVar9 + 0x1d4) = 0;
    *(undefined4 *)(iVar9 + 0x1d0) = 0;
    *(undefined4 *)(iVar10 + 0x6ef0) = 0;
    *(undefined4 *)(iVar10 + 0x6f04) = 0;
    *(undefined1 *)(iVar10 + 0x6f14) = 0;
    *(undefined4 *)(iVar10 + 0x6f10) = 0;
    *(undefined4 *)(iVar13 + 0x6ef0) = 0;
    *(undefined4 *)(iVar13 + 0x6f04) = 0;
    *(undefined1 *)(iVar13 + 0x6f14) = 0;
    *(undefined4 *)(iVar13 + 0x6f10) = 0;
    script_step_sub_002b1680(iVar16,0,60000000 / (int)*(short *)(iVar22 + 0x89f4));
    iVar10 = 0;
    do {
      script_step_sub_002b1500(iVar16,0,(char)iVar10,0x40);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x10);
    script_step_sub_002b0a80(iVar17,aiStack_18,1);
    iVar10 = aiStack_18[0];
    if ((((bStack_10 & 0xf0) == 0xb0) && (bStack_f == 99)) && (cStack_e == '\x01')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      if (((bStack_10 == 0xff) && (bStack_f == 0x2f)) && (cStack_e == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    if (bVar2) {
      uVar21 = 0xffffffffffffffff;
    }
    else {
      iVar15 = 0;
      while( true ) {
        if ((((bStack_10 & 0xf0) == 0xb0) && (bStack_f == 99)) && (cStack_e == '\0')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) break;
        script_step_sub_002b0a80(iVar17,aiStack_18,1);
        iVar15 = iVar15 + aiStack_18[0];
        script_step_sub_002b0a80(iVar17,aiStack_18,1);
        iVar15 = iVar15 + aiStack_18[0];
      }
      uVar21 = (ulong)(iVar10 + iVar15);
    }
    script_step_sub_002b0a80(iVar18,aiStack_28,0);
    if ((((bStack_20 & 0xf0) == 0xb0) && (bStack_1f == 99)) && (cStack_1e == '\x01')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      if (((bStack_20 == 0xff) && (bStack_1f == 0x2f)) && (cStack_1e == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    if (bVar2) {
      uVar19 = 0xffffffffffffffff;
    }
    else {
      iVar10 = 0;
      iStack_24a0 = iStack_24a0 + aiStack_28[0];
      while( true ) {
        if ((((bStack_20 & 0xf0) == 0xb0) && (bStack_1f == 99)) && (cStack_1e == '\0')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) break;
        script_step_sub_002b0a80(iVar18,aiStack_28,0);
        iVar10 = iVar10 + aiStack_28[0];
        script_step_sub_002b0a80(iVar18,aiStack_28,0);
        iVar10 = iVar10 + aiStack_28[0];
      }
      uVar19 = (ulong)(iStack_24a0 + iVar10);
    }
    while( true ) {
      if (((!bVar5) && (CONCAT44(iStack_247c,iStack_2480) <= uVar21)) &&
         (CONCAT44(iStack_247c,iStack_2480) <= uVar19)) {
        iVar10 = script_step_sub_002b12b0(iVar16,iStack_2480 - (int)uVar20);
        uVar20 = (ulong)(iStack_2480 + iVar10);
        bVar5 = true;
      }
      uVar8 = CONCAT44(iStack_248c,iStack_2490);
      iStack_4 = (int)uVar20;
      if ((uVar8 <= uVar21) && (uVar8 <= uVar19)) break;
      if (uVar19 < uVar21) {
        if (uVar19 < (ulong)(long)iStack_2460) {
          iVar10 = (int)uVar19;
          if (uVar20 < uVar19) {
            aiStack_28[0] = iVar10 - iStack_4;
          }
          else {
            aiStack_28[0] = 0;
          }
          if ((((bStack_20 & 0xf0) == 0xb0) && (bStack_1f == 99)) && (cStack_1e == '\x01')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            if (((bStack_20 == 0xff) && (bStack_1f == 0x2f)) && (cStack_1e == '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
          }
          if (bVar2) {
            if ((((bStack_20 & 0xf0) != 0xb0) || (bStack_1f != 99)) ||
               (bVar2 = true, cStack_1e != '\x01')) {
              bVar2 = false;
            }
            if (bVar2) {
              *(undefined4 *)(iVar9 + 0x1b0) = 0;
              *(undefined4 *)(iVar9 + 0x1c4) = 0;
              *(undefined1 *)(iVar9 + 0x1d4) = 0;
              *(undefined4 *)(iVar9 + 0x1d0) = 0;
              do {
                script_step_sub_002b0a80(iVar18,aiStack_28,0);
                if ((((bStack_20 & 0xf0) == 0xb0) && (bStack_1f == 99)) && (cStack_1e == '\0')) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
              } while (!bVar2);
              script_step_sub_002b0a80(iVar18,aiStack_28,0);
              script_step_sub_002b0a80(iVar18,aiStack_28,0);
              uVar19 = (ulong)(iVar10 + aiStack_28[0]);
            }
            else {
              uVar19 = 0xffffffffffffffff;
            }
          }
          else {
            bVar6 = bStack_20 & 0xf0;
            bVar7 = (bStack_20 & 0xf) + (char)param_2 * '\x02';
            bStack_20 = bVar6 | bVar7;
            if ((bVar6 | bVar7 & 0xf0) == 0xc0) {
              bStack_1f = bStack_1f + (char)(param_2 << 4);
            }
            script_step_sub_002b0790(iVar16,aiStack_28);
            if (uVar20 < uVar19) {
              uVar20 = uVar19;
            }
            uVar14 = (uint)bStack_20;
            if ((uVar14 & 0xf0) == 0x90) {
              auStack_430[(uVar14 + param_2 * -2 & 0xf) * 0x80 + (bStack_1f & 0x7f)] = 1;
            }
            else if ((uVar14 & 0xf0) == 0x80) {
              auStack_430[(uVar14 + param_2 * -2 & 0xf) * 0x80 + (bStack_1f & 0x7f)] = 0;
            }
            script_step_sub_002b0a80(iVar18,aiStack_28,0);
            iVar15 = 0;
            iVar10 = iVar10 + aiStack_28[0];
            while( true ) {
              if ((((bStack_20 & 0xf0) == 0xb0) && (bStack_1f == 99)) && (cStack_1e == '\0')) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (!bVar2) break;
              script_step_sub_002b0a80(iVar18,aiStack_28,0);
              iVar15 = iVar15 + aiStack_28[0];
              script_step_sub_002b0a80(iVar18,aiStack_28,0);
              iVar15 = iVar15 + aiStack_28[0];
            }
            uVar19 = (ulong)(iVar10 + iVar15);
          }
          if ((ulong)(long)iStack_2460 < uVar19) {
            uVar19 = (long)iStack_2460;
          }
        }
        else {
          if (uVar20 < (ulong)(long)iStack_2460) {
            aiStack_28[0] = iStack_2460 - iStack_4;
          }
          else {
            aiStack_28[0] = 0;
          }
          lVar12 = script_step_sub_002ba390(param_1,iVar16,auStack_430,2,aiStack_28,param_2);
          if (0 < lVar12) {
            uVar20 = (ulong)iStack_2460;
          }
          psStack_2450 = *(short **)(psStack_2450 + 4);
          if (psStack_2450 == (short *)0x0) {
            uVar19 = 0xffffffffffffffff;
          }
          else {
            iVar10 = *psStack_2450 * 0x1e0;
            if (iVar10 < 0) {
              iVar10 = iVar10 + 3;
            }
            iStack_2460 = ((int)*psStack_2450 + (int)psStack_2450[1]) * 0x1e0;
            if (iStack_2460 < 0) {
              iStack_2460 = iStack_2460 + 3;
            }
            iStack_2460 = iStack_2460 >> 2;
            *(undefined4 *)(iVar9 + 0x1b0) = 0;
            *(undefined4 *)(iVar9 + 0x1c4) = 0;
            *(undefined1 *)(iVar9 + 0x1d4) = 0;
            *(undefined4 *)(iVar9 + 0x1d0) = 0;
            script_step_sub_002b0a80(iVar18,aiStack_28,0);
            iVar15 = 0;
            iVar10 = (iVar10 >> 2) + aiStack_28[0];
            while( true ) {
              if ((((bStack_20 & 0xf0) == 0xb0) && (bStack_1f == 99)) && (cStack_1e == '\0')) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (!bVar2) break;
              script_step_sub_002b0a80(iVar18,aiStack_28,0);
              iVar15 = iVar15 + aiStack_28[0];
              script_step_sub_002b0a80(iVar18,aiStack_28,0);
              iVar15 = iVar15 + aiStack_28[0];
            }
            uVar19 = (long)(iVar10 + iVar15);
          }
        }
      }
      else {
        if (uVar20 < uVar21) {
          aiStack_18[0] = (int)uVar21 - iStack_4;
        }
        else {
          aiStack_18[0] = 0;
        }
        script_step_sub_002b0790(iVar16,aiStack_18);
        if (uVar20 < uVar21) {
          uVar20 = uVar21;
        }
        uVar14 = (uint)bStack_10;
        if ((uVar14 & 0xf0) == 0x90) {
          auStack_2430[(uVar14 & 0xf) * 0x80 + (bStack_f & 0x7f)] = 1;
        }
        else if ((uVar14 & 0xf0) == 0x80) {
          auStack_2430[(uVar14 & 0xf) * 0x80 + (bStack_f & 0x7f)] = 0;
        }
        script_step_sub_002b0a80(iVar17,aiStack_18,1);
        if ((((bStack_10 & 0xf0) == 0xb0) && (bStack_f == 99)) && (cStack_e == '\x01')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) {
          if (((bStack_10 == 0xff) && (bStack_f == 0x2f)) && (cStack_e == '\0')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
        }
        if (bVar2) {
          uVar21 = 0xffffffffffffffff;
        }
        else {
          iVar15 = 0;
          iVar10 = (int)uVar21 + aiStack_18[0];
          while( true ) {
            if ((((bStack_10 & 0xf0) == 0xb0) && (bStack_f == 99)) && (cStack_e == '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (!bVar2) break;
            script_step_sub_002b0a80(iVar17,aiStack_18,1);
            iVar15 = iVar15 + aiStack_18[0];
            script_step_sub_002b0a80(iVar17,aiStack_18,1);
            iVar15 = iVar15 + aiStack_18[0];
          }
          uVar21 = (ulong)(iVar10 + iVar15);
        }
      }
    }
    if (uVar20 < uVar8) {
      iStack_4 = iStack_2490 - iStack_4;
    }
    else {
      iStack_4 = 0;
    }
    script_step_sub_002ba390(param_1,iVar16,auStack_430,2,&iStack_4,param_2);
    script_step_sub_002ba390(param_1,iVar16,auStack_2430,0x10,&iStack_4,0);
    script_step_sub_002b0f60(iVar16,iStack_4);
    lVar12 = menuscr_leaf_sub_002afef0(iVar16,0,auStack_30,&iStack_8);
    if (lVar12 != 0) {
      auStack_30[iStack_8] = 0xff;
      auStack_30[iStack_8 + 1] = 0x2f;
      iVar10 = iStack_8 + 3;
      iVar9 = iStack_8 + 2;
      iStack_8 = iVar10;
      auStack_30[iVar9] = 0;
      iVar9 = *(int *)(iVar13 + 0x6f04);
      uVar14 = *(uint *)(iVar13 + 0x6f00);
      bVar5 = false;
      if ((uVar14 < (uint)(iVar9 + iVar10)) && (bVar5 = true, uVar14 < (uint)(iVar9 + iVar10))) {
        do {
          if (*(int *)(iVar13 + 0x6efc) != 0) {
            uVar11 = Mem_Realloc(*(int *)(iVar13 + 0x6efc),uVar14 << 1,
                                 *(undefined4 *)(iVar13 + 0x6ef8));
            *(undefined4 *)(iVar13 + 0x6efc) = uVar11;
            if (*(int *)(iVar13 + 0x6efc) != 0) {
              *(uint *)(iVar13 + 0x6f00) = uVar14 << 1;
              uVar14 = *(int *)(iVar13 + 0x6f00) - 1;
              if (*(uint *)(iVar13 + 0x6f04) <= uVar14) {
                uVar14 = *(uint *)(iVar13 + 0x6f04);
              }
              *(uint *)(iVar13 + 0x6f04) = uVar14;
            }
          }
          iVar9 = *(int *)(iVar13 + 0x6f04);
          uVar14 = *(uint *)(iVar13 + 0x6f00);
        } while (uVar14 < (uint)(iVar9 + iVar10));
      }
      maybe_Mem_CopyQwords(*(int *)(iVar13 + 0x6efc) + iVar9,auStack_30,iVar10);
      *(int *)(iVar13 + 0x6f04) = *(int *)(iVar13 + 0x6f04) + iVar10;
      if (bVar5) {
        *(undefined4 *)(iVar13 + 0x6ee8) = *(undefined4 *)(iVar13 + 0x6efc);
      }
      *(undefined1 *)(iVar13 + 0x6f14) = 0;
    }
    uVar11 = 1;
    *(int *)(iVar22 + 0x89e8) = 1 - *(int *)(iVar22 + 0x89e8);
  }
  else {
    uVar11 = 0;
  }
  return uVar11;
}

// 0x002bb370  size 0xe4
undefined4 script_exit_sub_002bb370(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(int *)(param_1 + 0x34) == 1) {
      script_exit_sub_002b1820(iVar1 + 0x6e98);
      menuscr_exit_sub_002afbd0(iVar1 + 0x6f2c);
      if (*(int *)(iVar1 + 0x7018) != 0) {
        Mem_Free();
        *(undefined4 *)(iVar1 + 0x7018) = 0;
      }
      *(undefined4 *)(iVar1 + 0x701c) = 0;
      *(undefined4 *)(iVar1 + 0x7020) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x7024) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x7028) = 0;
      *(undefined4 *)(iVar1 + 0x6f28) = 0;
      *(undefined4 *)(iVar1 + 0x7010) = 0;
      *(undefined4 *)(iVar1 + 0x702c) = 0;
      *(undefined4 *)(iVar1 + 0x7030) = 0;
      *(undefined4 *)(iVar1 + 0x703c) = 0;
      *(undefined4 *)(iVar1 + 0x7034) = 0;
      Mem_Set16(iVar1 + 0x7040,0,0xc00);
      *(undefined4 *)(iVar1 + 0x7038) = 0;
    }
    script_load_sub_002b0b70(iVar1 + 0x6e98,0x286c0);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0xda8;
  } while (iVar2 < 2);
  *(undefined4 *)(param_1 + 0x89ec) = 4;
  return 1;
}

// 0x002bb460  size 0x58
undefined4 script_step_sub_002bb460(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 1) {
    Thread_Delete();
    if (*(int *)(param_1 + 8) != 0) {
      Mem_Free();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002bb4c0  size 0x1d8
undefined4 script_load_sub_002bb4c0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  
  lVar7 = script_leaf_sub_002b9080(param_1,0xffffffffffffffff);
  if (lVar7 == 0) {
    iVar5 = 0;
    piVar8 = param_1;
    do {
      bVar4 = false;
      if (0 < piVar8[0xbc]) {
        bVar3 = true;
        bVar1 = piVar8[0x73] != 0;
        bVar2 = true;
        if (!bVar1) {
          bVar1 = piVar8[0x7a] != 0;
        }
        if (!bVar1) {
          bVar1 = piVar8[0xae] != 0;
          if (!bVar1) {
            bVar1 = piVar8[0xb4] != 0;
          }
          if (!bVar1) {
            bVar2 = false;
          }
        }
        if (!bVar2) {
          bVar1 = piVar8[0xba] != 0;
          if (!bVar1) {
            bVar1 = piVar8[0xbb] != 0;
          }
          if (!bVar1) {
            bVar3 = false;
          }
        }
        if (!bVar3) {
          bVar4 = true;
        }
      }
      if (((bVar4) && (0 < piVar8[0xbd])) && ('\0' < *(char *)((int)piVar8 + 0x1d5))) {
        bVar4 = true;
        goto LAB_002bb5d8;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 0x36a;
    } while (iVar5 < 8);
    bVar4 = false;
LAB_002bb5d8:
    if (bVar4) {
      if (*param_1 < 1) {
        param_1[0x227b] = 4;
        iVar5 = Mem_AllocAligned(0x3500,0x10,param_1[0xc]);
        param_1[2] = iVar5;
        Thread_Create(param_1,iRam0036f2a4 + 1,0x2b8a40,param_1[2],0x3500,0);
        param_1[3] = 0;
        Thread_Start(param_1,param_1);
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
        param_1[0x227b] = 4;
      }
    }
    else {
      uVar6 = 0;
      param_1[0x227b] = 2;
    }
  }
  else {
    uVar6 = 0;
    param_1[0x227b] = 4;
  }
  return uVar6;
}

// 0x002bb6a0  size 0x48
undefined4 script_leaf_sub_002bb6a0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(int *)(param_1 + 0x2f4) < 1 || (*(char *)(param_1 + 0x1d5) < '\x01'))) {
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xda8;
    if (7 < iVar1) {
      return 0;
    }
  }
  return 1;
}

// 0x002bb6f0  size 0xd4
undefined4 script_leaf_sub_002bb6f0(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = 0;
  while( true ) {
    bVar4 = false;
    if (0 < *(int *)(param_1 + 0x2f0)) {
      bVar3 = true;
      bVar1 = *(int *)(param_1 + 0x1cc) != 0;
      bVar2 = true;
      if (!bVar1) {
        bVar1 = *(int *)(param_1 + 0x1e8) != 0;
      }
      if (!bVar1) {
        bVar1 = *(int *)(param_1 + 0x2b8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(param_1 + 0x2d0) != 0;
        }
        if (!bVar1) {
          bVar2 = false;
        }
      }
      if (!bVar2) {
        bVar1 = *(int *)(param_1 + 0x2e8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(param_1 + 0x2ec) != 0;
        }
        if (!bVar1) {
          bVar3 = false;
        }
      }
      if (!bVar3) {
        bVar4 = true;
      }
    }
    if (bVar4) break;
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 0xda8;
    if (7 < iVar5) {
      return 0;
    }
  }
  return 1;
}

// 0x002bb7d0  size 0x18
void script_step_sub_002bb7d0(int param_1,int param_2,undefined8 param_3)

{
  script_leaf_sub_002bc730(param_1 + param_2 * 0xda8 + 0x158,param_3);
  return;
}

// 0x002bb7f0  size 0x1c
void script_step_sub_002bb7f0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  script_leaf_sub_002bc8a0(param_1 + param_2 * 0xda8 + 0x158,param_3,param_4);
  return;
}

// 0x002bb810  size 0x17c
void script_exit_sub_002bb810(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    script_exit_sub_002b1820(iVar1 + 0x6e98);
    menuscr_exit_sub_002afbd0(iVar1 + 0x6f2c);
    if (*(int *)(iVar1 + 0x7018) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar1 + 0x7018) = 0;
    }
    *(undefined4 *)(iVar1 + 0x701c) = 0;
    *(undefined4 *)(iVar1 + 0x7020) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7024) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7028) = 0;
    *(undefined4 *)(iVar1 + 0x6f28) = 0;
    *(undefined4 *)(iVar1 + 0x7010) = 0;
    *(undefined4 *)(iVar1 + 0x702c) = 0;
    *(undefined4 *)(iVar1 + 0x7030) = 0;
    *(undefined4 *)(iVar1 + 0x703c) = 0;
    *(undefined4 *)(iVar1 + 0x7034) = 0;
    Mem_Set16(iVar1 + 0x7040,0,0xc00);
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar1 + 0x7038) = 0;
    iVar1 = iVar1 + 0xda8;
  } while (iVar2 < 2);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    script_exit_sub_002b1820(iVar1 + 0x158);
    menuscr_exit_sub_002afbd0(iVar1 + 0x1ec);
    if (*(int *)(iVar1 + 0x2d8) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar1 + 0x2d8) = 0;
    }
    *(undefined4 *)(iVar1 + 0x2dc) = 0;
    *(undefined4 *)(iVar1 + 0x2e0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2e4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2e8) = 0;
    *(undefined4 *)(iVar1 + 0x1e8) = 0;
    *(undefined4 *)(iVar1 + 0x2d0) = 0;
    *(undefined4 *)(iVar1 + 0x2ec) = 0;
    *(undefined4 *)(iVar1 + 0x2f0) = 0;
    *(undefined4 *)(iVar1 + 0x2fc) = 0;
    *(undefined4 *)(iVar1 + 0x2f4) = 0;
    Mem_Set16(iVar1 + 0x300,0,0xc00);
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + 0x1d5) = 100;
    iVar1 = iVar1 + 0xda8;
  } while (iVar2 < 8);
  *(undefined2 *)(param_1 + 0x89f0) = 0;
  *(undefined2 *)(param_1 + 0x89f2) = 0x400;
  *(undefined2 *)(param_1 + 0x89f4) = 0x96;
  *(undefined1 *)(param_1 + 0x89f6) = 0;
  *(undefined4 *)(param_1 + 0x89ec) = 4;
  return;
}

// 0x002bb990  size 0x62c
/* WARNING: Removing unreachable block (ram,0x002bbde4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void script_load_sub_002bb990(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = 0;
  iVar4 = param_1;
  do {
    if (*(int *)(iVar4 + 0x1cc) != 0) {
      return;
    }
    if (*(int *)(iVar4 + 0x2b8) != 0) {
      return;
    }
    if (*(int *)(iVar4 + 0x2e8) != 0) {
      return;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xda8;
  } while (iVar5 < 8);
  bVar1 = false;
  iVar5 = 0;
  iVar4 = param_1;
  do {
    if (*(int *)(iVar4 + 0x2f8) != 0) {
      script_step_sub_002b9440(param_1,iVar4 + 0x158);
      *(undefined4 *)(iVar4 + 0x2f8) = 0;
    }
    if (*(int *)(iVar4 + 0x1e8) != 0) {
      if (*(int *)(param_1 + 0x34) == 0) {
        iVar4 = iVar5 * 0xda8 + param_1;
        if (((*(int *)(iVar4 + 0x2f0) < 1) || (*(int *)(iVar4 + 0x2f4) < 1)) ||
           (*(char *)(iVar4 + 0x1d5) < '\x01')) {
          bVar1 = true;
        }
        else {
          script_load_sub_002b18e0(iVar4 + 0x158);
        }
      }
      else {
        iVar4 = param_1 + iVar5 * 0xda8;
        script_load_sub_002b18e0(iVar4 + 0x158,*(undefined4 *)(iVar4 + 0x2f0));
      }
      *(undefined4 *)(iVar5 * 0xda8 + param_1 + 0x1e8) = 0;
      if (bVar1) {
        script_load_sub_002bb990(param_1);
        return;
      }
      return;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xda8;
  } while (iVar5 < 8);
  iVar5 = 0;
  iVar4 = param_1;
  while (*(int *)(iVar4 + 0x2d0) == 0) {
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xda8;
    if (7 < iVar5) {
      iVar5 = 0;
      iVar4 = param_1;
      do {
        if (*(int *)(iVar4 + 0x2ec) != 0) {
          if (*(int *)(param_1 + 0x34) == 0) {
            iVar9 = 0;
            iVar8 = 0;
            iVar7 = 0;
            iVar4 = 1 - *(int *)(param_1 + 0x89e8);
            iVar6 = param_1;
            do {
              if (((0 < *(int *)(iVar6 + 0x2f0)) && (0 < *(int *)(iVar6 + 0x2f4))) &&
                 ('\0' < *(char *)(iVar6 + 0x1d5))) {
                iVar4 = 1 - iVar4;
                iVar9 = iVar9 + (*(int *)(iVar6 + 700) + 0x7ffU & 0xfffff800);
                if (iVar7 < iVar5) {
                  iVar8 = iVar8 + *(int *)(iVar6 + 700);
                }
              }
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + 0xda8;
            } while (iVar7 < 8);
            iVar4 = iVar4 * 0xda8;
            iVar6 = param_1 + iVar4;
            if (*(int *)(iVar6 + 0x7018) == 0) {
              *(undefined4 *)(iVar6 + 0x701c) = 0;
              *(undefined4 *)(iVar6 + 0x7020) = 0xffffffff;
              *(undefined4 *)(iVar6 + 0x7024) = 0xffffffff;
              *(undefined4 *)(iVar6 + 0x7028) = 0;
              uVar3 = Mem_Alloc16(iVar9,*(undefined4 *)(iVar6 + 0x7014));
              *(undefined4 *)(iVar6 + 0x7018) = uVar3;
              if (*(int *)(iVar6 + 0x7018) != 0) {
                *(int *)(iVar6 + 0x701c) = iVar9;
                *(undefined4 *)(iVar6 + 0x7020) = 0;
              }
            }
            iVar9 = iVar5 * 0xda8 + param_1;
            iVar7 = *(int *)(iVar9 + 0x2f0);
            if (((iVar7 < 1) || (*(int *)(iVar9 + 0x2f4) < 1)) ||
               (*(char *)(iVar9 + 0x1d5) < '\x01')) {
              bVar1 = true;
            }
            else if (iVar8 < 0) {
              iVar9 = (iVar7 + 0x1db4) * 0x14 + _g_ArcToc;
              iVar8 = *(int *)(iVar9 + 0x20);
              if (iVar8 == 0) {
                uVar2 = *(uint *)(iVar9 + 0x18);
              }
              else {
                uVar2 = iVar8 + 0x7ffU >> 0xb;
              }
              if (*(int *)(iVar4 + param_1 + 0x7018) != 0) {
                Mem_Free();
                *(undefined4 *)(iVar4 + param_1 + 0x7018) = 0;
              }
              iVar9 = iVar4 + param_1;
              *(undefined4 *)(iVar9 + 0x701c) = 0;
              *(undefined4 *)(iVar9 + 0x7020) = 0xffffffff;
              *(undefined4 *)(iVar9 + 0x7024) = 0xffffffff;
              *(undefined4 *)(iVar9 + 0x7028) = 0;
              iVar8 = Mem_Alloc16(uVar2 << 0xb,*(undefined4 *)(iVar9 + 0x7014));
              *(int *)(iVar9 + 0x7018) = iVar8;
              if (*(int *)(iVar9 + 0x7018) != 0) {
                *(uint *)(iVar9 + 0x701c) = uVar2 << 0xb;
                *(undefined4 *)(iVar9 + 0x7020) = 0;
              }
              iVar4 = *(int *)(iVar4 + param_1 + 0x7018);
              if (iVar4 != 0) {
                uVar3 = Arc_LoadFileEx(iVar7 + 0x1db4,iVar4,0x2ae470,iVar6 + 0x7014,0,0);
                *(undefined4 *)(iVar9 + 0x7024) = uVar3;
                *(undefined4 *)(iVar9 + 0x7028) = 1;
              }
            }
            else {
              uVar3 = Arc_LoadFileEx(iVar7 + 0x1db4,*(int *)(iVar4 + param_1 + 0x7018) + iVar8,
                                     0x2ae470,iVar6 + 0x7014,0,0);
              *(undefined4 *)(iVar4 + param_1 + 0x7024) = uVar3;
              *(undefined4 *)(iVar4 + param_1 + 0x7028) = 1;
            }
          }
          else {
            iVar6 = iVar5 * 0xda8;
            iVar8 = *(int *)(iVar6 + param_1 + 0x2f0) + 0x1db4;
            iVar7 = iVar8 * 0x14 + _g_ArcToc;
            iVar4 = *(int *)(iVar7 + 0x20);
            if (iVar4 == 0) {
              uVar2 = *(uint *)(iVar7 + 0x18);
            }
            else {
              uVar2 = iVar4 + 0x7ffU >> 0xb;
            }
            if (*(int *)(iVar6 + param_1 + 0x2d8) != 0) {
              Mem_Free();
              *(undefined4 *)(iVar6 + param_1 + 0x2d8) = 0;
            }
            iVar7 = iVar6 + param_1;
            *(undefined4 *)(iVar7 + 0x2dc) = 0;
            *(undefined4 *)(iVar7 + 0x2e0) = 0xffffffff;
            *(undefined4 *)(iVar7 + 0x2e4) = 0xffffffff;
            *(undefined4 *)(iVar7 + 0x2e8) = 0;
            iVar4 = Mem_Alloc16(uVar2 << 0xb,*(undefined4 *)(iVar7 + 0x2d4));
            *(int *)(iVar7 + 0x2d8) = iVar4;
            if (*(int *)(iVar7 + 0x2d8) != 0) {
              *(uint *)(iVar7 + 0x2dc) = uVar2 << 0xb;
              *(undefined4 *)(iVar7 + 0x2e0) = 0;
            }
            iVar4 = *(int *)(iVar6 + param_1 + 0x2d8);
            if (iVar4 != 0) {
              uVar3 = Arc_LoadFileEx(iVar8,iVar4,0x2ae470,param_1 + iVar6 + 0x2d4,0,0);
              *(undefined4 *)(iVar7 + 0x2e4) = uVar3;
              *(undefined4 *)(iVar7 + 0x2e8) = 1;
            }
          }
          *(undefined4 *)(iVar5 * 0xda8 + param_1 + 0x2ec) = 0;
          if (bVar1) {
            script_load_sub_002bb990(param_1);
          }
          return;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xda8;
      } while (iVar5 < 8);
      return;
    }
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar4 = iVar5 * 0xda8 + param_1;
    if (((*(int *)(iVar4 + 0x2f0) < 1) || (*(int *)(iVar4 + 0x2f4) < 1)) ||
       (*(char *)(iVar4 + 0x1d5) < '\x01')) {
      bVar1 = true;
    }
    else {
      menuscr_load_sub_002afe00(iVar4 + 0x1ec);
    }
  }
  else {
    iVar4 = param_1 + iVar5 * 0xda8;
    menuscr_load_sub_002afe00(iVar4 + 0x1ec,*(undefined4 *)(iVar4 + 0x2f0));
  }
  *(undefined4 *)(iVar5 * 0xda8 + param_1 + 0x2d0) = 0;
  if (bVar1) {
    script_load_sub_002bb990(param_1);
    return;
  }
  return;
}

// 0x002bbfc0  size 0xec
void script_exit_sub_002bbfc0(undefined8 param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(*(int *)(iRam0036f7e4 + 8) + param_3 * 0xc);
  iVar2 = (int)param_1;
  if (uVar1 == 0) {
    iVar3 = iVar2 + param_2 * 0xda8;
    script_exit_sub_002b1820(iVar3 + 0x158);
    menuscr_exit_sub_002afbd0(iVar3 + 0x1ec);
    if (*(int *)(iVar3 + 0x2d8) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar3 + 0x2d8) = 0;
    }
    iVar2 = param_2 * 0xda8 + iVar2;
    *(undefined4 *)(iVar2 + 0x2dc) = 0;
    *(undefined4 *)(iVar2 + 0x2e0) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x2e4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x2e8) = 0;
    *(undefined4 *)(iVar2 + 0x1e8) = 0;
    *(undefined4 *)(iVar2 + 0x2d0) = 0;
    *(undefined4 *)(iVar2 + 0x2ec) = 0;
    *(undefined4 *)(iVar2 + 0x2f0) = 0;
  }
  else {
    if (uVar1 != 0) {
      iVar2 = param_2 * 0xda8 + iVar2;
      *(uint *)(iVar2 + 0x2f0) = (uint)uVar1;
      *(undefined4 *)(iVar2 + 0x1e8) = 1;
      *(undefined4 *)(iVar2 + 0x2d0) = 1;
      *(undefined4 *)(iVar2 + 0x2ec) = 1;
    }
    script_load_sub_002bb990(param_1);
  }
  return;
}

