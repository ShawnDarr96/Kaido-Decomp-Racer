// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00100000 - 0x00104000
#include "ghidra_types.h"

// 0x00100008  size 0x210
void entry(void)

{
  undefined4 in_zero_lo;
  undefined4 in_zero_hi;
  undefined4 in_zero_udw;
  undefined4 in_register_0000000c;
  undefined4 *puVar1;
  undefined8 uVar2;
  
  SYNC(0x10);
  for (puVar1 = (undefined4 *)0x36ef80; ((uint)puVar1 & 0xf) != 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1)) {
    *(undefined1 *)puVar1 = 0;
  }
  for (; puVar1 != (undefined4 *)&DAT_0046a600; puVar1 = puVar1 + 4) {
    *puVar1 = in_zero_lo;
    puVar1[1] = in_zero_hi;
    puVar1[2] = in_zero_udw;
    puVar1[3] = in_register_0000000c;
  }
  for (; puVar1 != (undefined4 *)&DAT_0046a600; puVar1 = (undefined4 *)((int)puVar1 + 1)) {
    *(undefined1 *)puVar1 = 0;
  }
  syscall(0x3c);
  syscall(0x3d);
  _InitSys(0,0,0,0,0,0,0,0,0x46a600,0xffffffffffffffff,0x80000,0x36fa00,0x100220,0,0,0);
  FlushCache(0);
  EI();
  uVar2 = FUN_001707d0(uRam0036fa00,0x36fa04);
  newlib_sub_00126098(uVar2);
  return;
}

// 0x00100230  size 0xc
/* alloc(size, 16, heap) */

void maybe_operator_new_heap(undefined8 param_1,undefined8 param_2)

{
  Mem_AllocAligned(param_1,0x10,param_2);
  return;
}

// 0x00100240  size 0xc
void maybe_operator_new_arr_heap(undefined8 param_1,undefined8 param_2)

{
  Mem_AllocAligned(param_1,0x10,param_2);
  return;
}

// 0x00100270  size 0xc
void maybe_operator_new(undefined8 param_1)

{
  Mem_AllocAligned(param_1,0x10,0);
  return;
}

// 0x00100280  size 0xc
void maybe_operator_new_arr(undefined8 param_1)

{
  Mem_AllocAligned(param_1,0x10,0);
  return;
}

// 0x00100290  size 0x138
/* checks 'BIND'/'CORE' block tags, sema-locked */

void Mem_Free(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    iVar4 = (int)param_1;
    piVar5 = *(int **)(iVar4 + -4);
    if (*(int *)(iVar4 + -8) == 0x42494e44) {
      iVar1 = *piVar5;
      WaitSema(*(undefined4 *)(iVar1 + 0x14));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) - piVar5[6];
      piVar5[5] = 0;
      piVar2 = (int *)piVar5[1];
      if ((piVar2 != (int *)0x0) && (piVar2[5] == 0)) {
        piVar2[6] = piVar2[6] + piVar5[6];
        piVar2[2] = piVar5[2];
        piVar5 = piVar2;
        if (piVar2[2] != 0) {
          *(int **)(piVar2[2] + 4) = piVar2;
        }
      }
      iVar3 = piVar5[2];
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x14) == 0)) {
        piVar5[6] = piVar5[6] + *(int *)(iVar3 + 0x18);
        piVar5[2] = *(int *)(iVar3 + 8);
        if (piVar5[2] != 0) {
          *(int **)(piVar5[2] + 4) = piVar5;
        }
      }
      *(undefined4 *)(iVar4 + -8) = 0;
      SignalSema(*(undefined4 *)(iVar1 + 0x14));
    }
    else if (*(int *)(iVar4 + -8) == 0x434f5245) {
      iRam0036ef80 = iRam0036ef80 - piVar5[6];
      free(piVar5);
    }
  }
  return;
}

// 0x001003d0  size 0xb0
long Mem_Realloc(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)((int)param_1 + -8);
    iVar2 = *(int *)((int)param_1 + -4);
    if ((iVar1 == 0x42494e44) || (iVar1 == 0x434f5245)) {
      if (param_2 < *(uint *)(iVar2 + 0x14)) {
        lVar3 = 0;
      }
      else {
        lVar3 = Mem_AllocAligned(param_2,*(undefined4 *)(iVar2 + 0xc));
        if (lVar3 != 0) {
          maybe_Mem_CopyQwords(lVar3,param_1,*(undefined4 *)(iVar2 + 0x14));
          Mem_Free(param_1);
        }
      }
    }
    else {
      lVar3 = 0;
    }
  }
  return lVar3;
}

// 0x00100480  size 0x1f8
/* (size, align, heap), sema-locked */

int Mem_AllocAligned(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = 0;
  if ((param_1 == 0) || ((param_2 & 0xf) != 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)param_3;
    if (param_3 != 0) {
      WaitSema(*(undefined4 *)(iVar7 + 0x14));
    }
    iVar3 = param_2 * ((int)((int)param_1 + param_2 + -1) / (int)param_2);
    uVar6 = iVar3 + param_2 + 0x33 & 0xfffffff0;
    if (param_3 == 0) {
      piVar2 = (int *)malloc(uVar6);
      if (piVar2 != (int *)0x0) {
        iRam0036ef80 = iRam0036ef80 + uVar6;
      }
    }
    else {
      piVar2 = *(int **)(iVar7 + 4);
      while (((piVar2[5] != 0 || ((uint)piVar2[6] < uVar6)) && ((int *)piVar2[2] != (int *)0x0))) {
        piVar2 = (int *)piVar2[2];
      }
      if ((piVar2[5] == 0) && (uVar1 = piVar2[6], uVar6 <= uVar1)) {
        uVar5 = uVar1 - uVar6;
        if (uVar5 < 0x24) {
          uVar5 = 0;
          uVar6 = uVar1;
        }
        *(uint *)(iVar7 + 8) = *(int *)(iVar7 + 8) + uVar6;
      }
      else {
        piVar2 = (int *)0x0;
      }
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar7;
      piVar2[3] = param_2;
      piVar2[4] = ~(param_2 - 1) & (int)piVar2 + param_2 + 0x23;
      piVar2[5] = iVar3;
      piVar2[6] = uVar6;
      if (param_3 == 0) {
        piVar2[1] = 0;
        piVar2[2] = 0;
      }
      else if (uVar5 != 0) {
        iVar3 = (int)piVar2 + uVar6;
        *(int **)(iVar3 + 4) = piVar2;
        *(int *)(iVar3 + 8) = piVar2[2];
        *(undefined4 *)(iVar3 + 0x14) = 0;
        *(uint *)(iVar3 + 0x18) = uVar5;
        piVar2[2] = iVar3;
        if (*(int *)(iVar3 + 8) != 0) {
          *(int *)(*(int *)(iVar3 + 8) + 4) = iVar3;
        }
      }
      iVar3 = piVar2[4];
      uVar4 = 0x42494e44;
      if (param_3 == 0) {
        uVar4 = 0x434f5245;
      }
      *(undefined4 *)(iVar3 + -8) = uVar4;
      *(int **)(iVar3 + -4) = piVar2;
    }
    if (param_3 != 0) {
      SignalSema(*(undefined4 *)(iVar7 + 0x14));
    }
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = piVar2[4];
    }
  }
  return iVar7;
}

// 0x00100680  size 0xc
void Mem_Alloc16(undefined8 param_1,undefined8 param_2)

{
  Mem_AllocAligned(param_1,0x10,param_2);
  return;
}

// 0x00100690  size 0x58
void maybe_Heap_Release(undefined4 *param_1)

{
  if ((param_1[4] != 0) && (param_1[1] != 0)) {
    Mem_Free();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  maybe_Mutex_Delete(param_1 + 5);
  return;
}

// 0x001006f0  size 0xa4
bool maybe_Heap_Create(undefined4 *param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = maybe_Mutex_Create(param_1 + 5);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = Mem_AllocAligned(param_2 + 0x2bU & 0xfffffff0,0x10,param_3);
    if (lVar3 != 0) {
      puVar2 = (undefined4 *)lVar3;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = param_2;
      *param_1 = (int)param_3;
      param_1[1] = puVar2;
      param_1[2] = 0;
      param_1[3] = param_2;
      param_1[4] = 1;
    }
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}

// 0x001007a0  size 0xb4
bool maybe_Heap_CreateFromBuffer(undefined4 *param_1,long param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar3 = maybe_Mutex_Create(param_1 + 5);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = 0;
    if ((param_3 & 0xfffffff0) != 0x20) {
      lVar3 = param_2;
    }
    if (lVar3 != 0) {
      puVar4 = (undefined4 *)lVar3;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      iVar2 = (param_3 & 0xfffffff0) - 0x20;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = iVar2;
      *param_1 = 0;
      param_1[1] = puVar4;
      param_1[2] = 0;
      param_1[3] = iVar2;
      param_1[4] = 0;
    }
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}

// 0x00100860  size 0x94
long maybe_Heap_dtor(long param_1,short param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)param_1;
    if ((puVar1[4] != 0) && (puVar1[1] != 0)) {
      Mem_Free();
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    maybe_Mutex_Delete(puVar1 + 5);
    FUN_00132830(puVar1 + 5,0xffffffffffffffff);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00100900  size 0x3c
undefined8 maybe_Heap_ctor(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  FUN_001328a0(puVar1 + 5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return param_1;
}

// 0x00100940  size 0x20
bool msl_sub_00100940(void)

{
  long lVar1;
  
  lVar1 = __cmpdf2();
  return 0 < lVar1;
}

// 0x00100960  size 0x20
bool msl_sub_00100960(void)

{
  long lVar1;
  
  lVar1 = __cmpdf2();
  return lVar1 < 0;
}

// 0x00100990  size 0x24
void maybe___init_cpp(void)

{
  maybe___call_static_initializers(0x36db30,0x36de64,0x36e690,0x36e690);
  return;
}

// 0x001009c0  size 0x9c
void __destroy_new_array(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = (int)param_1;
    if (param_2 != 0) {
      iVar1 = *(int *)(iVar5 + -0x10);
      uVar2 = *(uint *)(iVar5 + -0xc);
      uVar4 = 0;
      iVar3 = iVar5 + iVar1 * uVar2;
      if (uVar2 != 0) {
        do {
          iVar3 = iVar3 - iVar1;
          (*(code *)param_2)(iVar3,0xffffffffffffffff);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
    }
    Mem_Free(iVar5 + -0x10);
  }
  return;
}

// 0x00100a60  size 0x74
void __destroy_arr(int param_1,code *param_2,int param_3,int param_4)

{
  param_1 = param_1 + param_3 * param_4;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    param_1 = param_1 - param_3;
    (*param_2)(param_1,0xffffffffffffffff);
  }
  return;
}

// 0x00100ae0  size 0x124
void __construct_array(int param_1,code *param_2,code *param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uStack_10;
  
  uStack_10 = 0;
  iVar1 = param_1;
  if (param_5 != 0) {
    do {
      (*param_2)(iVar1,1);
      uStack_10 = uStack_10 + 1;
      iVar1 = iVar1 + param_4;
    } while (uStack_10 < param_5);
  }
  if ((uStack_10 < param_5) && (param_3 != (code *)0x0)) {
    param_1 = param_1 + param_4 * uStack_10;
    for (; uStack_10 != 0; uStack_10 = uStack_10 - 1) {
      param_1 = param_1 - param_4;
      (*param_3)(param_1,0xffffffffffffffff);
    }
  }
  return;
}

// 0x00100c10  size 0x144
int * __construct_new_array(int *param_1,long param_2,code *param_3,int param_4,uint param_5)

{
  int *piVar1;
  uint uStack_10;
  
  if (param_1 != (int *)0x0) {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1 = param_1 + 4;
    if (param_2 != 0) {
      uStack_10 = 0;
      piVar1 = param_1;
      if (param_5 != 0) {
        do {
          (*(code *)param_2)(piVar1,1);
          uStack_10 = uStack_10 + 1;
          piVar1 = (int *)((int)piVar1 + param_4);
        } while (uStack_10 < param_5);
      }
      if ((uStack_10 < param_5) && (param_3 != (code *)0x0)) {
        piVar1 = (int *)((int)param_1 + param_4 * uStack_10);
        for (; uStack_10 != 0; uStack_10 = uStack_10 - 1) {
          piVar1 = (int *)((int)piVar1 - param_4);
          (*param_3)(piVar1,0xffffffffffffffff);
        }
      }
    }
  }
  return param_1;
}

// 0x00100d60  size 0x4c
long maybe_std_exception_dtor(long param_1,short param_2)

{
  if ((param_1 != 0) && (*(undefined4 *)param_1 = &PTR_PTR_0036de70, 0 < param_2)) {
    Mem_Free();
  }
  return param_1;
}

// 0x00100dc0  size 0x260
/* compares MW type strings ("PCV...") */

undefined4 __throw_catch_compare(char *param_1,char *param_2,long *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  
  *param_3 = 0;
  if (param_2 == (char *)0x0) {
    return 1;
  }
  if (*param_2 == 'P') {
    pcVar2 = param_2 + 1;
    if (*pcVar2 == 'C') {
      pcVar2 = param_2 + 2;
    }
    if (*pcVar2 == 'V') {
      pcVar2 = pcVar2 + 1;
    }
    if ((*pcVar2 == 'v') && ((*param_1 == 'P' || (*param_1 == '*')))) {
      return 1;
    }
  }
  if ((*param_1 == '!') || (*param_1 == '*')) {
    pcVar2 = param_1 + 1;
    if (*param_1 != *param_2) {
      return 0;
    }
    pcVar3 = param_2 + 1;
    while( true ) {
      while( true ) {
        cVar4 = *pcVar3;
        cVar1 = *pcVar2;
        pcVar3 = pcVar3 + 1;
        if (cVar1 != cVar4) break;
        pcVar2 = pcVar2 + 1;
        if (cVar1 == '!') {
          lVar5 = 0;
          cVar4 = *pcVar2;
          while (cVar4 != '!') {
            pcVar2 = pcVar2 + 1;
            lVar5 = (long)(int)cVar4 + lVar5 * 10 + -0x30;
            cVar4 = *pcVar2;
          }
          *param_3 = lVar5;
          return 1;
        }
      }
      do {
        cVar4 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar4 != '!');
      do {
        cVar4 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar4 != '!');
      if (*pcVar2 == '\0') break;
      pcVar3 = param_2 + 1;
    }
    return 0;
  }
  while( true ) {
    cVar4 = *param_1;
    if (((cVar4 != 'P') && (cVar4 != 'R')) || (cVar4 != *param_2)) {
      if (cVar4 == *param_2) {
        do {
          if (cVar4 == '\0') {
            return 1;
          }
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          cVar4 = *param_1;
        } while (cVar4 == *param_2);
      }
      return 0;
    }
    pcVar3 = param_2 + 1;
    pcVar2 = param_1 + 1;
    if (*pcVar3 == 'C') {
      if (*pcVar2 == 'C') {
        pcVar2 = param_1 + 2;
      }
      pcVar3 = param_2 + 2;
    }
    param_1 = pcVar2;
    if (*param_1 == 'C') break;
    if (*pcVar3 == 'V') {
      if (*param_1 == 'V') {
        param_1 = param_1 + 1;
      }
      pcVar3 = pcVar3 + 1;
    }
    param_2 = pcVar3;
    if (*param_1 == 'V') {
      return 0;
    }
  }
  return 0;
}

// 0x00101020  size 0x24
void maybe_std_terminate(void)

{
  (*(code *)PTR_maybe_std_dthandler_00306800)();
  return;
}

// 0x00101050  size 0x1c
/* calls abort */

void maybe_std_dthandler(void)

{
  abort();
  return;
}

// 0x00101070  size 0x54
void __destroy_global_chain(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0036fb48;
  while (puVar1 != (undefined4 *)0x0) {
    puRam0036fb48 = (undefined4 *)*puVar1;
    (*(code *)puVar1[1])(puVar1[2],0xffffffffffffffff);
    puVar1 = puRam0036fb48;
  }
  puRam0036fb48 = puVar1;
  return;
}

// 0x001010d0  size 0x24
undefined8 __register_global_object(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = puRam0036fb48;
  param_3[1] = param_2;
  param_3[2] = (int)param_1;
  puRam0036fb48 = param_3;
  return param_1;
}

// 0x00101100  size 0x78
void maybe___call_static_initializers
               (undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    (*(code *)*param_1)();
  }
  msl_sub_00102810(param_3,param_4);
  return;
}

// 0x00101180  size 0x34
void msl_sub_00101180(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)&LAB_8f390008;
  if (-1 < msl_sub_00101180) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(int *)(&LAB_8f390008 + param_1 + _msl_sub_00101180) + msl_sub_00101180);
  }
                    /* WARNING: Could not recover jumptable at 0x001011ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 0x001011c0  size 0x1c
bool msl_sub_001011c0(int *param_1)

{
  return (*param_1 != 0 || param_1[1] != 0) || param_1[2] != 0;
}

// 0x001011e0  size 0x9c
/* LEB128-style decoder in EH tables */

byte * maybe___DecodeUnsignedNumber(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    pbVar3 = param_1 + 1;
    *param_2 = (uint)(bVar1 >> 1);
  }
  else {
    bVar2 = param_1[1];
    if ((bVar1 & 2) == 0) {
      pbVar3 = param_1 + 2;
      *param_2 = (uint)CONCAT11(bVar1 >> 2,bVar2);
    }
    else if ((bVar1 & 4) == 0) {
      pbVar3 = param_1 + 3;
      *param_2 = (uint)param_1[2] | (uint)(bVar1 >> 3) << 0x10 | (uint)bVar2 << 8;
    }
    else {
      pbVar3 = param_1 + 4;
      *param_2 = (uint)param_1[3] |
                 (uint)param_1[2] << 8 | (uint)(bVar1 >> 3) << 0x18 | (uint)bVar2 << 0x10;
    }
  }
  return pbVar3;
}

// 0x00101280  size 0x9c
byte * maybe___DecodeSignedNumber(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *param_1;
  iVar3 = (int)(char)bVar1;
  if ((bVar1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    *param_2 = iVar3 >> 1;
  }
  else {
    uVar4 = (uint)param_1[1];
    if ((bVar1 & 2) == 0) {
      pbVar2 = param_1 + 2;
      *param_2 = (iVar3 >> 2) << 8 | uVar4;
    }
    else if ((bVar1 & 4) == 0) {
      pbVar2 = param_1 + 3;
      *param_2 = (uint)param_1[2] | (iVar3 >> 3) << 0x10 | uVar4 << 8;
    }
    else {
      pbVar2 = param_1 + 4;
      *param_2 = (uint)param_1[3] | (uint)param_1[2] << 8 | (iVar3 >> 3) << 0x18 | uVar4 << 0x10;
    }
  }
  return pbVar2;
}

// 0x00101320  size 0x38
void msl_sub_00101320(int *param_1)

{
  if ((*param_1 != 0) && ((code *)param_1[2] != (code *)0x0)) {
    (*(code *)param_1[2])(*param_1,0xffffffffffffffff);
  }
  return;
}

// 0x00101360  size 0x194
void maybe___ThrowHandler(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  int iStack_30;
  int iStack_2c;
  int aiStack_18 [2];
  int iStack_10;
  int iStack_c;
  int aiStack_8 [2];
  
  piVar4 = (int *)param_1;
  msl_sub_001024d0(piVar4[4],&iStack_30);
  if (iStack_2c == 0) {
    maybe_std_terminate();
  }
  msl_sub_00102820(param_1,&iStack_30);
  if (*piVar4 == 0) {
    iVar1 = msl_sub_00101810(param_1,&iStack_30);
    piVar4[3] = iVar1;
  }
  else {
    piVar4[3] = 0;
  }
  uVar2 = msl_sub_00101500(param_1,&iStack_30,aiStack_18);
  iStack_10 = *(int *)((int)uVar2 + 1);
  if (iStack_10 == 0) {
    iStack_10 = 0;
  }
  uVar3 = maybe___DecodeUnsignedNumber((int)uVar2 + 5,&iStack_c);
  maybe___DecodeSignedNumber(uVar3,aiStack_8);
  msl_sub_00101980(param_1,&iStack_30,uVar2);
  piVar5 = (int *)(piVar4[6] + aiStack_8[0]);
  *piVar5 = piVar4[1];
  piVar5[1] = *piVar4;
  piVar5[2] = piVar4[2];
  if (*(char *)*piVar4 == '*') {
    piVar5[3] = (int)(piVar5 + 4);
    piVar5[4] = *(int *)piVar4[1] + aiStack_18[0];
  }
  else {
    piVar5[3] = piVar4[1] + aiStack_18[0];
  }
  msl_sub_001026a0(param_1,&iStack_30,iStack_30 + iStack_c);
  return;
}

// 0x00101500  size 0x304
byte * msl_sub_00101500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar8;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uStack_310;
  int iStack_30c;
  int iStack_308;
  undefined4 *puStack_304;
  int iStack_300;
  int iStack_2fc;
  byte *pbStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 auStack_2c0 [170];
  undefined1 auStack_18 [8];
  int iStack_10;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  puVar16 = auStack_2c0;
  puVar18 = (undefined4 *)param_1;
  iVar15 = 0x15;
  piVar14 = (int *)param_2;
  iStack_300 = *piVar14;
  iStack_2fc = piVar14[1];
  pbStack_2f8 = (byte *)piVar14[2];
  iStack_2f4 = piVar14[3];
  iStack_2f0 = piVar14[4];
  iStack_2ec = piVar14[5];
  uStack_2e0 = *puVar18;
  uStack_2dc = puVar18[1];
  uStack_2d8 = puVar18[2];
  uStack_2d4 = puVar18[3];
  uStack_2d0 = puVar18[4];
  uStack_2cc = puVar18[5];
  uStack_2c8 = puVar18[6];
  uStack_2c4 = puVar18[7];
  puVar5 = puVar18;
  do {
    uVar11 = puVar5[9];
    uVar12 = puVar5[10];
    uVar13 = puVar5[0xb];
    iVar15 = iVar15 + -1;
    uVar4 = puVar5[0xc];
    uVar8 = puVar5[0xd];
    uVar9 = puVar5[0xe];
    uVar10 = puVar5[0xf];
    *puVar16 = puVar5[8];
    puVar16[1] = uVar11;
    puVar16[2] = uVar12;
    puVar16[3] = uVar13;
    puVar16[4] = uVar4;
    puVar16[5] = uVar8;
    puVar16[6] = uVar9;
    puVar16[7] = uVar10;
    puVar16 = puVar16 + 8;
    puVar5 = puVar5 + 8;
  } while (0 < iVar15);
  if (pbStack_2f8 == (byte *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = *pbStack_2f8 & 0x1f;
  }
  do {
    switch(bVar3) {
    default:
      maybe_std_terminate();
      return pbStack_2f8;
    case 0xc:
      iStack_10 = *(int *)(pbStack_2f8 + 1);
      if (iStack_10 == 0) {
        iStack_10 = 0;
      }
      uVar6 = maybe___DecodeUnsignedNumber(pbStack_2f8 + 5,auStack_c);
      maybe___DecodeSignedNumber(uVar6,auStack_8);
      lVar7 = __throw_catch_compare(*puVar18,iStack_10,param_3);
      if (lVar7 != 0) {
        return pbStack_2f8;
      }
      break;
    case 0xf:
      uVar6 = maybe___DecodeUnsignedNumber(pbStack_2f8 + 1,&uStack_310);
      uVar6 = maybe___DecodeUnsignedNumber(uVar6,&iStack_30c);
      puVar5 = (undefined4 *)maybe___DecodeSignedNumber(uVar6,&iStack_308);
      uVar4 = *puVar18;
      uVar17 = 0;
      puStack_304 = puVar5;
      if (uStack_310 == 0) {
        bVar1 = false;
      }
      else {
        do {
          lVar7 = __throw_catch_compare(uVar4,*puVar5,auStack_18);
          if (lVar7 != 0) {
            bVar1 = true;
            goto LAB_001016f0;
          }
          uVar17 = uVar17 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar17 < uStack_310);
        bVar1 = false;
      }
LAB_001016f0:
      pbVar2 = pbStack_2f8;
      if (!bVar1) {
        msl_sub_00101980(param_1,param_2,pbStack_2f8);
        puVar5 = (undefined4 *)(puVar18[6] + iStack_308);
        *puVar5 = puVar18[1];
        puVar5[1] = *puVar18;
        puVar5[2] = puVar18[2];
        puVar5[5] = pbVar2;
        msl_sub_001026a0(param_1,param_2,*piVar14 + iStack_30c);
      }
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xd:
    }
    bVar3 = msl_sub_001021c0(&iStack_300);
  } while( true );
}

// 0x00101810  size 0x168
void msl_sub_00101810(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  byte *pbStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  int iStack_2b8;
  undefined4 uStack_2b4;
  undefined4 auStack_2b0 [171];
  int iStack_4;
  
  iVar10 = 0x15;
  puVar11 = auStack_2b0;
  uStack_2f0 = *param_2;
  uStack_2ec = param_2[1];
  pbStack_2e8 = (byte *)param_2[2];
  uStack_2e4 = param_2[3];
  uStack_2e0 = param_2[4];
  uStack_2dc = param_2[5];
  uStack_2d0 = *param_1;
  uStack_2cc = param_1[1];
  uStack_2c8 = param_1[2];
  uStack_2c4 = param_1[3];
  uStack_2c0 = param_1[4];
  uStack_2bc = param_1[5];
  iStack_2b8 = param_1[6];
  uStack_2b4 = param_1[7];
  puVar3 = param_1;
  do {
    uVar7 = puVar3[9];
    uVar8 = puVar3[10];
    uVar9 = puVar3[0xb];
    iVar10 = iVar10 + -1;
    uVar2 = puVar3[0xc];
    uVar4 = puVar3[0xd];
    uVar5 = puVar3[0xe];
    uVar6 = puVar3[0xf];
    *puVar11 = puVar3[8];
    puVar11[1] = uVar7;
    puVar11[2] = uVar8;
    puVar11[3] = uVar9;
    puVar11[4] = uVar2;
    puVar11[5] = uVar4;
    puVar11[6] = uVar5;
    puVar11[7] = uVar6;
    puVar11 = puVar11 + 8;
    puVar3 = puVar3 + 8;
  } while (0 < iVar10);
  if (pbStack_2e8 == (byte *)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *pbStack_2e8 & 0x1f;
  }
  do {
    switch(bVar1) {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xf:
      bVar1 = msl_sub_001021c0(&uStack_2f0);
      break;
    default:
      maybe_std_terminate();
    case 0xd:
      maybe___DecodeSignedNumber(pbStack_2e8 + 1,&iStack_4);
      puVar3 = (undefined4 *)(iStack_2b8 + iStack_4);
      *param_1 = puVar3[1];
      param_1[1] = *puVar3;
      param_1[2] = 0;
      param_1[3] = puVar3;
      return;
    }
  } while( true );
}

// 0x00101980  size 0x834
void msl_sub_00101980(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  char cVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  int iStack_6c;
  int iStack_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [8];
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
LAB_001019b8:
  iVar11 = (int)param_2;
  pbVar9 = *(byte **)(iVar11 + 8);
  if (pbVar9 == (byte *)0x0) goto code_r0x001019c4;
  bVar1 = *pbVar9;
  goto LAB_001020dc;
code_r0x001019c4:
  uVar6 = msl_sub_001028e0(param_1,param_2);
  msl_sub_001024d0(uVar6,param_2);
  if (*(int *)(iVar11 + 4) == 0) {
    maybe_std_terminate();
  }
  msl_sub_00102820(param_1,param_2);
  pbVar9 = *(byte **)(iVar11 + 8);
  if (pbVar9 == (byte *)0x0) goto LAB_001019b8;
  bVar1 = *pbVar9;
LAB_001020dc:
  iVar5 = (int)param_1;
  switch(bVar1 & 0x1f) {
  default:
    maybe_std_terminate();
    break;
  case 1:
    maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_4);
    *(int *)(iVar11 + 8) = *(int *)(iVar11 + 8) + iStack_4;
    break;
  case 2:
    puVar3 = (undefined4 *)maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_8);
    (*(code *)*puVar3)(*(int *)(iVar5 + 0x18) + iStack_8,0xffffffffffffffff);
    *(undefined4 **)(iVar11 + 8) = puVar3 + 1;
    break;
  case 3:
    uVar6 = maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_c);
    puVar3 = (undefined4 *)maybe___DecodeSignedNumber(uVar6,&iStack_10);
    if ((bVar1 & 0x40) == 0) {
      cVar8 = *(char *)(*(int *)(iVar5 + 0x18) + iStack_c);
    }
    else {
      cVar8 = (char)*(undefined8 *)(iVar5 + iStack_c * 0x10 + 0x20);
    }
    if (cVar8 != '\0') {
      (*(code *)*puVar3)(*(int *)(iVar5 + 0x18) + iStack_10,0xffffffffffffffff);
    }
    *(undefined4 **)(iVar11 + 8) = puVar3 + 1;
    break;
  case 4:
    puVar3 = (undefined4 *)maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_14);
    if ((bVar1 & 0x20) == 0) {
      uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x18) + iStack_14);
    }
    else {
      uVar4 = (undefined4)*(undefined8 *)(iVar5 + iStack_14 * 0x10 + 0x20);
    }
    (*(code *)*puVar3)(uVar4,0xffffffffffffffff);
    *(undefined4 **)(iVar11 + 8) = puVar3 + 1;
    break;
  case 5:
    uVar6 = maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_18);
    uVar6 = maybe___DecodeUnsignedNumber(uVar6,&iStack_1c);
    puVar3 = (undefined4 *)maybe___DecodeUnsignedNumber(uVar6,&iStack_20);
    pcVar2 = (code *)*puVar3;
    iVar5 = *(int *)(iVar5 + 0x18) + iStack_18 + iStack_1c * iStack_20;
    for (iVar10 = iStack_1c; iVar10 != 0; iVar10 = iVar10 + -1) {
      iVar5 = iVar5 - iStack_20;
      (*pcVar2)(iVar5,0xffffffffffffffff);
    }
    *(undefined4 **)(iVar11 + 8) = puVar3 + 1;
    break;
  case 6:
    uVar6 = maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_24);
    puVar3 = (undefined4 *)maybe___DecodeSignedNumber(uVar6,&iStack_28);
    if ((bVar1 & 0x20) == 0) {
      iVar5 = *(int *)(*(int *)(iVar5 + 0x18) + iStack_24);
    }
    else {
      iVar5 = (int)*(undefined8 *)(iVar5 + iStack_24 * 0x10 + 0x20);
    }
    (*(code *)*puVar3)(iVar5 + iStack_28,0);
    *(undefined4 **)(iVar11 + 8) = puVar3 + 1;
    break;
  case 7:
    uVar6 = maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_2c);
    puVar3 = (undefined4 *)maybe___DecodeSignedNumber(uVar6,&iStack_30);
    if ((bVar1 & 0x20) == 0) {
      iVar5 = *(int *)(*(int *)(iVar5 + 0x18) + iStack_2c);
    }
    else {
      iVar5 = (int)*(undefined8 *)(iVar5 + iStack_2c * 0x10 + 0x20);
    }
    (*(code *)*puVar3)(iVar5 + iStack_30,0xffffffffffffffff);
    *(undefined4 **)(iVar11 + 8) = puVar3 + 1;
    break;
  case 8:
    uVar6 = maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_34);
    uVar6 = maybe___DecodeSignedNumber(uVar6,&iStack_38);
    puVar3 = (undefined4 *)maybe___DecodeSignedNumber(uVar6,&iStack_3c);
    if ((bVar1 & 0x40) == 0) {
      cVar8 = *(char *)(*(int *)(iVar5 + 0x18) + iStack_34);
    }
    else {
      cVar8 = (char)*(undefined8 *)(iVar5 + iStack_34 * 0x10 + 0x20);
    }
    if (cVar8 != '\0') {
      if ((bVar1 & 0x20) == 0) {
        iVar5 = *(int *)(*(int *)(iVar5 + 0x18) + iStack_38);
      }
      else {
        iVar5 = (int)*(undefined8 *)(iVar5 + iStack_38 * 0x10 + 0x20);
      }
      (*(code *)*puVar3)(iVar5 + iStack_3c,0xffffffffffffffff);
    }
    *(undefined4 **)(iVar11 + 8) = puVar3 + 1;
    break;
  case 9:
    uVar6 = maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_40);
    uVar6 = maybe___DecodeSignedNumber(uVar6,&iStack_44);
    uVar6 = maybe___DecodeUnsignedNumber(uVar6,&iStack_48);
    puVar3 = (undefined4 *)maybe___DecodeUnsignedNumber(uVar6,&iStack_4c);
    pcVar2 = (code *)*puVar3;
    if ((bVar1 & 0x20) == 0) {
      iVar5 = *(int *)(*(int *)(iVar5 + 0x18) + iStack_40);
    }
    else {
      iVar5 = (int)*(undefined8 *)(iVar5 + iStack_40 * 0x10 + 0x20);
    }
    iVar5 = iVar5 + iStack_44 + iStack_48 * iStack_4c;
    for (iVar10 = iStack_48; iVar10 != 0; iVar10 = iVar10 + -1) {
      iVar5 = iVar5 - iStack_4c;
      (*pcVar2)(iVar5,0xffffffffffffffff);
    }
    *(undefined4 **)(iVar11 + 8) = puVar3 + 1;
    break;
  case 10:
    puVar3 = (undefined4 *)maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_50);
    if ((bVar1 & 0x20) == 0) {
      uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x18) + iStack_50);
    }
    else {
      uVar4 = (undefined4)*(undefined8 *)(iVar5 + iStack_50 * 0x10 + 0x20);
    }
    (*(code *)*puVar3)(uVar4);
    *(undefined4 **)(iVar11 + 8) = puVar3 + 1;
    break;
  case 0xb:
    uVar6 = maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_54);
    puVar3 = (undefined4 *)maybe___DecodeSignedNumber(uVar6,&iStack_58);
    if ((bVar1 & 0x40) == 0) {
      cVar8 = *(char *)(*(int *)(iVar5 + 0x18) + iStack_54);
    }
    else {
      cVar8 = (char)*(undefined8 *)(iVar5 + iStack_54 * 0x10 + 0x20);
    }
    if (cVar8 != '\0') {
      if ((bVar1 & 0x20) == 0) {
        uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x18) + iStack_58);
      }
      else {
        uVar4 = (undefined4)*(undefined8 *)(iVar5 + iStack_58 * 0x10 + 0x20);
      }
      (*(code *)*puVar3)(uVar4);
    }
    *(undefined4 **)(iVar11 + 8) = puVar3 + 1;
    break;
  case 0xc:
    if (param_3 == pbVar9) {
      return;
    }
    uVar6 = maybe___DecodeUnsignedNumber(pbVar9 + 5,auStack_60);
    uVar4 = maybe___DecodeSignedNumber(uVar6,auStack_64);
    *(undefined4 *)(iVar11 + 8) = uVar4;
    break;
  case 0xd:
    uVar4 = maybe___DecodeSignedNumber(pbVar9 + 1,&iStack_68);
    piVar7 = (int *)(*(int *)(iVar5 + 0x18) + iStack_68);
    pcVar2 = (code *)piVar7[2];
    if (pcVar2 != (code *)0x0) {
      iVar10 = *piVar7;
      if (*(int *)(iVar5 + 4) != iVar10) {
        (*pcVar2)(iVar10,0xffffffffffffffff);
        *(undefined4 *)(iVar11 + 8) = uVar4;
        break;
      }
      *(code **)(iVar5 + 8) = pcVar2;
    }
    *(undefined4 *)(iVar11 + 8) = uVar4;
    break;
  case 0xf:
    if (param_3 == pbVar9) {
      return;
    }
    uVar6 = maybe___DecodeUnsignedNumber(pbVar9 + 1,&iStack_6c);
    uVar6 = maybe___DecodeUnsignedNumber(uVar6,auStack_70);
    iVar5 = maybe___DecodeSignedNumber(uVar6,auStack_74);
    *(int *)(iVar11 + 8) = iVar5 + iStack_6c * 4;
  }
  if ((bVar1 & 0x80) != 0) {
    *(undefined4 *)(iVar11 + 8) = 0;
  }
  goto LAB_001019b8;
}

// 0x001021c0  size 0x310
void msl_sub_001021c0(undefined8 param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iStack_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  int iStack_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  iVar6 = (int)param_1;
  pbVar2 = *(byte **)(iVar6 + 8);
  while ((pbVar2 == (byte *)0x0 || ((*pbVar2 & 0x80) != 0))) {
    uVar5 = msl_sub_001028e0(iVar6 + 0x20,param_1);
    msl_sub_001024d0(uVar5,param_1);
    if (*(int *)(iVar6 + 4) == 0) {
      maybe_std_terminate();
    }
    msl_sub_00102820(iVar6 + 0x20,param_1);
    if (*(int *)(iVar6 + 8) != 0) goto LAB_00102410;
    pbVar2 = *(byte **)(iVar6 + 8);
  }
  switch(*pbVar2 & 0x1f) {
  default:
    maybe_std_terminate();
    break;
  case 2:
    iVar4 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_4);
    *(int *)(iVar6 + 8) = iVar4 + 4;
    break;
  case 3:
    uVar5 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_8);
    iVar4 = maybe___DecodeSignedNumber(uVar5,auStack_c);
    *(int *)(iVar6 + 8) = iVar4 + 4;
    break;
  case 4:
    iVar4 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_10);
    *(int *)(iVar6 + 8) = iVar4 + 4;
    break;
  case 5:
    uVar5 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_14);
    uVar5 = maybe___DecodeUnsignedNumber(uVar5,auStack_18);
    iVar4 = maybe___DecodeUnsignedNumber(uVar5,auStack_1c);
    *(int *)(iVar6 + 8) = iVar4 + 4;
    break;
  case 6:
    uVar5 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_20);
    iVar4 = maybe___DecodeSignedNumber(uVar5,auStack_24);
    *(int *)(iVar6 + 8) = iVar4 + 4;
    break;
  case 7:
    uVar5 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_28);
    iVar4 = maybe___DecodeSignedNumber(uVar5,auStack_2c);
    *(int *)(iVar6 + 8) = iVar4 + 4;
    break;
  case 8:
    uVar5 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_30);
    uVar5 = maybe___DecodeSignedNumber(uVar5,auStack_34);
    iVar4 = maybe___DecodeSignedNumber(uVar5,auStack_38);
    *(int *)(iVar6 + 8) = iVar4 + 4;
    break;
  case 9:
    uVar5 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_3c);
    uVar5 = maybe___DecodeSignedNumber(uVar5,auStack_40);
    uVar5 = maybe___DecodeUnsignedNumber(uVar5,auStack_44);
    iVar4 = maybe___DecodeUnsignedNumber(uVar5,auStack_48);
    *(int *)(iVar6 + 8) = iVar4 + 4;
    break;
  case 10:
    iVar4 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_4c);
    *(int *)(iVar6 + 8) = iVar4 + 4;
    break;
  case 0xb:
    uVar5 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_50);
    iVar4 = maybe___DecodeSignedNumber(uVar5,auStack_54);
    *(int *)(iVar6 + 8) = iVar4 + 4;
    break;
  case 0xc:
    uVar5 = maybe___DecodeUnsignedNumber(pbVar2 + 5,auStack_5c);
    uVar3 = maybe___DecodeSignedNumber(uVar5,auStack_60);
    *(undefined4 *)(iVar6 + 8) = uVar3;
    break;
  case 0xd:
    uVar3 = maybe___DecodeSignedNumber(pbVar2 + 1,auStack_64);
    *(undefined4 *)(iVar6 + 8) = uVar3;
    break;
  case 0xf:
    uVar5 = maybe___DecodeUnsignedNumber(pbVar2 + 1,&iStack_68);
    uVar5 = maybe___DecodeUnsignedNumber(uVar5,auStack_6c);
    iVar4 = maybe___DecodeSignedNumber(uVar5,auStack_70);
    *(int *)(iVar6 + 8) = iVar4 + iStack_68 * 4;
  }
LAB_00102410:
  bVar1 = **(byte **)(iVar6 + 8);
  while ((bVar1 & 0x1f) == 1) {
    maybe___DecodeSignedNumber(*(int *)(iVar6 + 8) + 1,&iStack_74);
    *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + iStack_74;
    bVar1 = **(byte **)(iVar6 + 8);
  }
  return;
}

// 0x001024d0  size 0x1c4
void msl_sub_001024d0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  puVar5 = (uint *)param_2;
  puVar5[1] = 0;
  puVar5[2] = 0;
  lVar2 = msl_sub_001027f0(param_2,param_1);
  if (lVar2 != 0) {
    uVar4 = (uint)param_1 & 0xfffffffe;
    iVar8 = 0;
    iVar7 = (int)(puVar5[4] - puVar5[3]) / 0xc + -1;
    if (-1 < iVar7) {
      do {
        iVar6 = iVar8 + iVar7 >> 1;
        puVar9 = (uint *)(puVar5[3] + iVar6 * 0xc);
        if (uVar4 < *puVar9) {
          iVar7 = iVar6 + -1;
        }
        else {
          if (uVar4 <= *puVar9 + (puVar9[1] & 0xfffffffe)) goto LAB_001025bc;
          iVar8 = iVar6 + 1;
        }
      } while (iVar8 <= iVar7);
    }
    puVar9 = (uint *)0x0;
LAB_001025bc:
    if (puVar9 != (uint *)0x0) {
      if ((puVar9[1] & 1) == 0) {
        puVar5[1] = puVar9[2];
      }
      else {
        puVar5[1] = (uint)(puVar9 + 2);
      }
      *puVar5 = *puVar9;
      uVar1 = *puVar9;
      uVar3 = msl_sub_00102790(puVar5[1]);
      uVar10 = 0;
      do {
        uVar3 = maybe___DecodeUnsignedNumber(uVar3,&iStack_4);
        if (iStack_4 == 0) {
          return;
        }
        uVar3 = maybe___DecodeUnsignedNumber(uVar3,&iStack_8);
        uVar3 = maybe___DecodeUnsignedNumber(uVar3,&iStack_c);
        if (uVar4 - uVar1 < uVar10 + iStack_4) {
          return;
        }
        uVar10 = uVar10 + iStack_4 + iStack_8;
      } while (uVar10 < uVar4 - uVar1);
      puVar5[2] = puVar5[1] + iStack_c;
    }
  }
  return;
}

// 0x001026a0  size 0x64
void msl_sub_001026a0(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x001026fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 0x00102710  size 0x80
void maybe___throw(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte *extraout_a0_lo;
  undefined8 unaff_s0;
  undefined1 auStack_2c4 [4];
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined1 *puStack_2ac;
  undefined1 *puStack_2a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  
  uStack_1a0 = (undefined4)unaff_s0;
  uStack_19c = (undefined4)((ulong)unaff_s0 >> 0x20);
  uStack_2c0 = param_1;
  uStack_2bc = param_2;
  uStack_2b8 = param_3;
  puStack_2ac = (undefined1 *)register0x000001d0;
  puStack_2a4 = (undefined1 *)register0x000001d0;
  maybe___ThrowHandler(&uStack_2c0);
  bVar1 = *extraout_a0_lo;
  uVar2 = maybe___DecodeUnsignedNumber(extraout_a0_lo + 1,auStack_2c4);
  uVar2 = maybe___DecodeUnsignedNumber(uVar2,auStack_2c4);
  if ((bVar1 & 0x40) != 0) {
    maybe___DecodeUnsignedNumber(uVar2,auStack_2c4);
  }
  return;
}

// 0x00102790  size 0x58
void msl_sub_00102790(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_4 [4];
  
  bVar1 = *param_1;
  uVar2 = maybe___DecodeUnsignedNumber(param_1 + 1,auStack_4);
  uVar2 = maybe___DecodeUnsignedNumber(uVar2,auStack_4);
  if ((bVar1 & 0x40) != 0) {
    maybe___DecodeUnsignedNumber(uVar2,auStack_4);
  }
  return;
}

// 0x001027f0  size 0x20
undefined4 msl_sub_001027f0(int param_1)

{
  *(undefined ***)(param_1 + 0xc) = &PTR_DAT_0036e690;
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_0036e690;
  return 1;
}

// 0x00102810  size 0x8
undefined8 msl_sub_00102810(void)

{
  return 0;
}

// 0x00102820  size 0xb4
void msl_sub_00102820(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  
  pbVar2 = *(byte **)(param_2 + 4);
  bVar1 = *pbVar2;
  *(uint *)(param_1 + 0x230) = (int)(char)bVar1 & 0x20;
  *(uint *)(param_1 + 0x22c) = (int)(char)*pbVar2 & 0x10;
  *(uint *)(param_1 + 0x228) = (int)(char)*pbVar2 & 0xf;
  uVar3 = maybe___DecodeUnsignedNumber(pbVar2 + 1,param_1 + 0x220);
  uVar3 = maybe___DecodeUnsignedNumber(uVar3,param_1 + 0x224);
  if (*(int *)(param_1 + 0x230) == 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    *(int *)(param_1 + 0x18) = (int)*(undefined8 *)(param_1 + 0x200);
  }
  if ((bVar1 & 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  else {
    maybe___DecodeUnsignedNumber(uVar3,param_1 + 0x234);
  }
  return;
}

// 0x001028e0  size 0x180
undefined4 msl_sub_001028e0(int param_1,int param_2,int param_3,ulong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  uVar5 = (ulong)*(int *)(param_1 + 0x228);
  bVar1 = **(byte **)(param_2 + 4);
  iVar4 = *(int *)(param_1 + 0x220);
  if ((bVar1 & 0x40) == 0) {
    puVar11 = (undefined4 *)
              (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x224) + (int)(uVar5 << 4));
  }
  else {
    param_4 = (ulong)*(uint *)(param_1 + 0x234);
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = 0xfffffffffffffff0;
    auVar3 = _pcpyld(in_zero_qw,auVar3);
    param_3 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x224) +
              (*(uint *)(param_1 + 0x234) * 4 + 0xf & auVar3._0_4_);
    puVar11 = (undefined4 *)(param_3 + *(int *)(param_1 + 0x228) * 0x10);
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    puVar11 = puVar11 + 4;
  }
  uVar2 = *puVar11;
  if (*(int *)(param_1 + 0x230) == 0) {
    puVar12 = puVar11;
    if (uVar5 == 9) {
      puVar12 = puVar11 + -4;
      uVar5 = 8;
      uVar6 = puVar11[-3];
      uVar7 = puVar11[-2];
      uVar8 = puVar11[-1];
      *(undefined4 *)(param_1 + 0x200) = *puVar12;
      *(undefined4 *)(param_1 + 0x204) = uVar6;
      *(undefined4 *)(param_1 + 0x208) = uVar7;
      *(undefined4 *)(param_1 + 0x20c) = uVar8;
    }
  }
  else {
    puVar12 = puVar11 + -4;
    uVar6 = puVar11[-3];
    uVar7 = puVar11[-2];
    uVar8 = puVar11[-1];
    *(undefined4 *)(param_1 + 0x200) = *puVar12;
    *(undefined4 *)(param_1 + 0x204) = uVar6;
    *(undefined4 *)(param_1 + 0x208) = uVar7;
    *(undefined4 *)(param_1 + 0x20c) = uVar8;
  }
  iVar10 = 0;
  puVar12 = puVar12 + (int)uVar5 * -4;
  if (uVar5 != 0) {
    iVar9 = param_1;
    do {
      uVar6 = puVar12[1];
      uVar7 = puVar12[2];
      uVar8 = puVar12[3];
      iVar10 = iVar10 + 1;
      *(undefined4 *)(iVar9 + 0x120) = *puVar12;
      *(undefined4 *)(iVar9 + 0x124) = uVar6;
      *(undefined4 *)(iVar9 + 0x128) = uVar7;
      *(undefined4 *)(iVar9 + 300) = uVar8;
      puVar12 = puVar12 + 4;
      iVar9 = iVar9 + 0x10;
    } while ((ulong)(long)iVar10 < uVar5);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x18) + iVar4;
  if ((bVar1 & 0x40) != 0) {
    iVar4 = 0;
    puVar11 = (undefined4 *)(param_3 + (int)param_4 * -4);
    if (param_4 != 0) {
      do {
        iVar4 = iVar4 + 1;
        *(undefined4 *)(param_1 + 0x288) = *puVar11;
        puVar11 = puVar11 + 1;
        param_1 = param_1 + 4;
      } while ((ulong)(long)iVar4 < param_4);
    }
  }
  return uVar2;
}

// 0x00102a60  size 0x88
long msl_sub_00102a60(long param_1,short param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)param_1;
    *puVar1 = &PTR_PTR_0036de90;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      msl_sub_00102c30(puVar1 + 1,0xffffffffffffffff);
    }
    if (param_1 != 0) {
      *puVar1 = &PTR_PTR_0036de70;
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00102af0  size 0xb4
long msl_sub_00102af0(long param_1,short param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar3 = (undefined4 *)param_1;
    *puVar3 = &PTR_PTR_0036de80;
    iVar2 = puVar3[2];
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      puVar1 = (undefined4 *)(puVar3[1] + iVar2 * 8);
      (*(code *)*puVar1)(0,param_1,puVar1[1]);
    }
    free(puVar3[6]);
    free(puVar3[4]);
    free(puVar3[1]);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00102bd0  size 0x4c
/* rdbuf at +0x20, flags 0x1002, precision 6 */

void std_ios_base_init(int param_1,long param_2)

{
  *(int *)(param_1 + 0x20) = (int)param_2;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(bool *)(param_1 + 0x3a) = param_2 == 0;
  *(undefined2 *)(param_1 + 0x38) = 0x1002;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 6;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 0x00102c30  size 0x78
long msl_sub_00102c30(long param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar3 = (undefined4 *)param_1;
    piVar1 = (int *)puVar3[1];
    if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, *piVar1 = iVar2 + -1, iVar2 + -1 == 0)) {
      Mem_Free(*puVar3);
      Mem_Free(puVar3[1]);
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00102cb0  size 0x6c
undefined8 msl_sub_00102cb0(undefined8 param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  *piVar2 = param_2;
  piVar2[1] = 0;
  if (*piVar2 != 0) {
    lVar1 = maybe_operator_new_arr(4);
    if (lVar1 != 0) {
      *(undefined4 *)lVar1 = 1;
    }
    piVar2[1] = (int)(undefined4 *)lVar1;
  }
  return param_1;
}

// 0x00102d40  size 0x270
/* constructs cin/cout/cerr/clog once */

undefined8 std_ios_base_Init_ctor(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  if (cRam0036fe78 == '\0') {
    maybe_std_stdio_filebuf_ctor(0x36fe90,*(undefined4 *)(PTR_DAT_0030a090 + 4));
    __register_global_object(0x36fe90,0x102ff0,0x36fe80);
    cRam0036fe78 = '\x01';
  }
  if (cRam0036fec8 == '\0') {
    maybe_std_stdio_filebuf_ctor(0x36fee0,*(undefined4 *)(PTR_DAT_0030a090 + 8));
    __register_global_object(0x36fee0,0x102ff0,0x36fed0);
    cRam0036fec8 = '\x01';
  }
  if (cRam0036ff18 == '\0') {
    maybe_std_stdio_filebuf_ctor(0x36ff30,*(undefined4 *)(PTR_DAT_0030a090 + 0xc));
    __register_global_object(0x36ff30,0x102ff0,0x36ff20);
    cRam0036ff18 = '\x01';
  }
  iVar2 = iRam0036fb50 + 1;
  bVar1 = iRam0036fb50 == 0;
  iRam0036fb50 = iVar2;
  if (bVar1) {
    msl_sub_00104100(0x36fb60,1,0x36fe90);
    msl_sub_00104430(0x36fbd0,1,0x36fee0);
    msl_sub_00104430(0x36fc90,1,0x36ff30);
    msl_sub_00104430(0x36fc30,1,0x36ff30);
    *(undefined4 *)(iRam0036fb60 + 0x40) = 0x36fbd0;
    *(ushort *)(iRam0036fc90 + 0x38) = *(ushort *)(iRam0036fc90 + 0x38) | 0x2000;
    (**(code **)(iRam0036fe90 + 0xc))(0x36fe90,0,0);
    (**(code **)(iRam0036fee0 + 0xc))(0x36fee0,0,0);
    (**(code **)(iRam0036ff30 + 0xc))(0x36ff30,0,0);
  }
  return param_1;
}

// 0x00102ff0  size 0x60
long msl_sub_00102ff0(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &PTR_PTR_0036e000;
    if (param_1 != 0) {
      *(undefined4 *)param_1 = &PTR_PTR_0036dfc0;
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00103050  size 0xf4
long std_ios_base_Init_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    iRam0036fb50 = iRam0036fb50 + -1;
    if (iRam0036fb50 == 0) {
      maybe_std_ostream_flush(0x36fbd0);
      maybe_std_ostream_flush(0x36fc90);
      maybe_std_ostream_flush(0x36fc30);
      (**(code **)(iRam0036fb70 + 8))(0x36fb60,0xffffffffffffffff);
      (**(code **)(iRam0036fbd4 + 8))(0x36fbd0,0xffffffffffffffff);
      (**(code **)(iRam0036fc94 + 8))(0x36fc90,0xffffffffffffffff);
      (**(code **)(iRam0036fc34 + 8))(0x36fc30,0xffffffffffffffff);
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00103150  size 0x98
long msl_sub_00103150(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)param_1;
    piVar2[1] = (int)&PTR_PTR_0036dfa0;
    piVar1 = piVar2 + 2;
    *(undefined ***)*piVar2 = &PTR_PTR_0036dfac;
    *(int *)(*piVar2 + 0x48) = (int)piVar1 - *piVar2;
    if ((param_2 != 0) && (piVar1 != (int *)0x0)) {
      piVar2[2] = (int)&PTR_PTR_0036df88;
      msl_sub_00102af0(piVar1,0);
    }
    if (0 < (short)param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001031f0  size 0x98
long msl_sub_001031f0(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)param_1;
    piVar2[4] = (int)&PTR_PTR_0036df70;
    piVar1 = piVar2 + 6;
    *(undefined ***)*piVar2 = &PTR_PTR_0036df7c;
    *(int *)(*piVar2 + 0x48) = (int)piVar1 - *piVar2;
    if ((param_2 != 0) && (piVar1 != (int *)0x0)) {
      piVar2[6] = (int)&PTR_PTR_0036df88;
      msl_sub_00102af0(piVar1,0);
    }
    if (0 < (short)param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00103290  size 0x270
/* wide-char streams */

undefined8 maybe_std_wios_Init_ctor(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  if (cRam0036ff68 == '\0') {
    maybe_std_stdio_wfilebuf_ctor(0x36ff80,*(undefined4 *)(PTR_DAT_0030a090 + 4));
    __register_global_object(0x36ff80,0x103540,0x36ff70);
    cRam0036ff68 = '\x01';
  }
  if (cRam0036ffe8 == '\0') {
    maybe_std_stdio_wfilebuf_ctor(0x370000,*(undefined4 *)(PTR_DAT_0030a090 + 8));
    __register_global_object(0x370000,0x103540,0x36fff0);
    cRam0036ffe8 = '\x01';
  }
  if (cRam00370068 == '\0') {
    maybe_std_stdio_wfilebuf_ctor(0x370080,*(undefined4 *)(PTR_DAT_0030a090 + 0xc));
    __register_global_object(0x370080,0x103540,0x370070);
    cRam00370068 = '\x01';
  }
  iVar2 = iRam0036fb58 + 1;
  bVar1 = iRam0036fb58 == 0;
  iRam0036fb58 = iVar2;
  if (bVar1) {
    msl_sub_001041b0(0x36fcf0,1,0x36ff80);
    msl_sub_001046b0(0x36fd60,1,0x370000);
    msl_sub_001046b0(0x36fe20,1,0x370080);
    msl_sub_001046b0(0x36fdc0,1,0x370080);
    *(undefined4 *)(iRam0036fcf0 + 0x40) = 0x36fd60;
    *(ushort *)(iRam0036fe20 + 0x38) = *(ushort *)(iRam0036fe20 + 0x38) | 0x2000;
    (**(code **)(iRam0036ff80 + 0xc))(0x36ff80,0,0);
    (**(code **)(iRam00370000 + 0xc))(0x370000,0,0);
    (**(code **)(iRam00370080 + 0xc))(0x370080,0,0);
  }
  return param_1;
}

// 0x00103540  size 0x60
long msl_sub_00103540(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &PTR_PTR_0036df30;
    if (param_1 != 0) {
      *(undefined4 *)param_1 = &PTR_PTR_0036def0;
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001035a0  size 0xf4
long maybe_std_wios_Init_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    iRam0036fb58 = iRam0036fb58 + -1;
    if (iRam0036fb58 == 0) {
      maybe_std_wostream_flush(0x36fd60);
      maybe_std_wostream_flush(0x36fe20);
      maybe_std_wostream_flush(0x36fdc0);
      (**(code **)(iRam0036fd00 + 8))(0x36fcf0,0xffffffffffffffff);
      (**(code **)(iRam0036fd64 + 8))(0x36fd60,0xffffffffffffffff);
      (**(code **)(iRam0036fe24 + 8))(0x36fe20,0xffffffffffffffff);
      (**(code **)(iRam0036fdc4 + 8))(0x36fdc0,0xffffffffffffffff);
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001036a0  size 0x98
long msl_sub_001036a0(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)param_1;
    piVar2[1] = (int)&PTR_PTR_0036ded0;
    piVar1 = piVar2 + 2;
    *(undefined ***)*piVar2 = &PTR_PTR_0036dedc;
    *(int *)(*piVar2 + 0x48) = (int)piVar1 - *piVar2;
    if ((param_2 != 0) && (piVar1 != (int *)0x0)) {
      piVar2[2] = (int)&PTR_PTR_0036deb8;
      msl_sub_00102af0(piVar1,0);
    }
    if (0 < (short)param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00103740  size 0x98
long msl_sub_00103740(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)param_1;
    piVar2[4] = (int)&PTR_PTR_0036dea0;
    piVar1 = piVar2 + 6;
    *(undefined ***)*piVar2 = &PTR_PTR_0036deac;
    *(int *)(*piVar2 + 0x48) = (int)piVar1 - *piVar2;
    if ((param_2 != 0) && (piVar1 != (int *)0x0)) {
      piVar2[6] = (int)&PTR_PTR_0036deb8;
      msl_sub_00102af0(piVar1,0);
    }
    if (0 < (short)param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001037e0  size 0x60
long msl_sub_001037e0(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &PTR_PTR_0036deb8;
    msl_sub_00102af0(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00103840  size 0x4c
long msl_sub_00103840(long param_1,short param_2)

{
  if ((param_1 != 0) && (*(undefined4 *)param_1 = &PTR_PTR_0036def0, 0 < param_2)) {
    Mem_Free();
  }
  return param_1;
}

// 0x00103890  size 0x60
long msl_sub_00103890(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &PTR_PTR_0036df88;
    msl_sub_00102af0(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001038f0  size 0x4c
long msl_sub_001038f0(long param_1,short param_2)

{
  if ((param_1 != 0) && (*(undefined4 *)param_1 = &PTR_PTR_0036dfc0, 0 < param_2)) {
    Mem_Free();
  }
  return param_1;
}

// 0x001039b0  size 0x50
ulong msl_sub_001039b0(int *param_1)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x24))();
  uVar3 = 0xffffffffffffffff;
  if (lVar2 != -1) {
    pbVar1 = (byte *)param_1[2];
    param_1[2] = (int)(pbVar1 + 1);
    uVar3 = (ulong)*pbVar1;
  }
  return uVar3;
}

// 0x00103a20  size 0x12c
long msl_sub_00103a20(undefined8 param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  long lStack_10;
  long lStack_8;
  
  lStack_10 = param_3;
  piVar5 = (int *)param_1;
  lStack_8 = (long)(piVar5[6] - piVar5[5]);
  if (piVar5[6] - piVar5[5] < param_3) {
    plVar3 = &lStack_8;
  }
  else {
    plVar3 = &lStack_10;
  }
  lVar7 = *plVar3;
  if (0 < lVar7) {
    iVar6 = (int)lVar7;
    memcpy(piVar5[5],param_2,iVar6);
    param_2 = param_2 + iVar6;
    piVar5[5] = piVar5[5] + iVar6;
    lStack_10 = lStack_10 - lVar7;
  }
  while( true ) {
    if (lStack_10 < 1) {
      return lVar7;
    }
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    if ((uint)piVar5[5] < (uint)piVar5[6]) {
      pbVar2 = (byte *)piVar5[5];
      piVar5[5] = (int)(pbVar2 + 1);
      *pbVar2 = bVar1;
      uVar4 = (ulong)*pbVar2;
    }
    else {
      uVar4 = (**(code **)(*piVar5 + 0x34))(param_1,bVar1);
    }
    if (uVar4 == 0xffffffffffffffff) break;
    lVar7 = lVar7 + 1;
    lStack_10 = lStack_10 + -1;
  }
  return lVar7;
}

// 0x00103b50  size 0x124
long msl_sub_00103b50(undefined8 param_1,undefined1 *param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long lStack_10;
  long lStack_8;
  
  lStack_10 = param_3;
  piVar4 = (int *)param_1;
  lStack_8 = (long)(piVar4[3] - piVar4[2]);
  if (piVar4[3] - piVar4[2] < param_3) {
    plVar2 = &lStack_8;
  }
  else {
    plVar2 = &lStack_10;
  }
  lVar6 = *plVar2;
  if (0 < lVar6) {
    iVar5 = (int)lVar6;
    memcpy(param_2,piVar4[2],iVar5);
    param_2 = param_2 + iVar5;
    piVar4[2] = piVar4[2] + iVar5;
    lStack_10 = lStack_10 - lVar6;
  }
  while( true ) {
    if (lStack_10 < 1) {
      return lVar6;
    }
    if ((uint)piVar4[2] < (uint)piVar4[3]) {
      pbVar1 = (byte *)piVar4[2];
      piVar4[2] = (int)(pbVar1 + 1);
      uVar3 = (ulong)*pbVar1;
    }
    else {
      uVar3 = (**(code **)(*piVar4 + 0x28))(param_1);
    }
    if (uVar3 == 0xffffffffffffffff) break;
    *param_2 = (char)uVar3;
    lVar6 = lVar6 + 1;
    param_2 = param_2 + 1;
    lStack_10 = lStack_10 + -1;
  }
  return lVar6;
}

// 0x00103cb0  size 0x1e0
long msl_sub_00103cb0(undefined8 param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  long lVar12;
  long lStack_10;
  long lStack_8;
  
  lStack_10 = param_3;
  piVar7 = (int *)param_1;
  iVar5 = piVar7[6] - piVar7[5];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 3;
  }
  lStack_8 = (long)(iVar5 >> 2);
  if (iVar5 >> 2 < param_3) {
    plVar2 = &lStack_8;
  }
  else {
    plVar2 = &lStack_10;
  }
  lVar12 = *plVar2;
  if (0 < lVar12) {
    puVar11 = (ushort *)piVar7[5];
    uVar3 = (uint)lVar12;
    uVar9 = 0;
    if (uVar3 != 0) {
      puVar10 = param_2;
      if (8 < uVar3) {
        do {
          uVar9 = uVar9 + 8;
          puVar6 = puVar10 + 0xe;
          puVar8 = puVar11 + 0xe;
          *puVar11 = *puVar10;
          puVar11[2] = puVar10[2];
          puVar11[4] = puVar10[4];
          puVar11[6] = puVar10[6];
          puVar11[8] = puVar10[8];
          puVar11[10] = puVar10[10];
          puVar11[0xc] = puVar10[0xc];
          puVar10 = puVar10 + 0x10;
          puVar11 = puVar11 + 0x10;
          *puVar8 = *puVar6;
        } while (uVar9 < uVar3 - 8);
      }
      for (; uVar9 < uVar3; uVar9 = uVar9 + 1) {
        *puVar11 = *puVar10;
        puVar11 = puVar11 + 2;
        puVar10 = puVar10 + 2;
      }
    }
    param_2 = param_2 + uVar3 * 2;
    piVar7[5] = piVar7[5] + uVar3 * 4;
    lStack_10 = param_3 - lVar12;
  }
  while( true ) {
    if (lStack_10 < 1) {
      return lVar12;
    }
    uVar1 = *param_2;
    param_2 = param_2 + 2;
    if ((uint)piVar7[5] < (uint)piVar7[6]) {
      puVar11 = (ushort *)piVar7[5];
      piVar7[5] = (int)(puVar11 + 2);
      *puVar11 = uVar1;
      uVar4 = (ulong)*puVar11;
    }
    else {
      uVar4 = (**(code **)(*piVar7 + 0x34))(param_1);
    }
    if (uVar4 == 0xffffffffffffffff) break;
    lVar12 = lVar12 + 1;
    lStack_10 = lStack_10 + -1;
  }
  return lVar12;
}

// 0x00103ea0  size 0x50
ulong msl_sub_00103ea0(int *param_1)

{
  ushort *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x24))();
  uVar3 = 0xffffffffffffffff;
  if (lVar2 != -1) {
    puVar1 = (ushort *)param_1[2];
    param_1[2] = (int)(puVar1 + 2);
    uVar3 = (ulong)*puVar1;
  }
  return uVar3;
}

// 0x00103f00  size 0x1dc
long msl_sub_00103f00(undefined8 param_1,undefined2 *param_2,long param_3)

{
  undefined2 uVar1;
  ushort *puVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  long lStack_10;
  long lStack_8;
  
  lStack_10 = param_3;
  piVar8 = (int *)param_1;
  iVar6 = piVar8[3] - piVar8[2];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 3;
  }
  lStack_8 = (long)(iVar6 >> 2);
  if (iVar6 >> 2 < param_3) {
    plVar3 = &lStack_8;
  }
  else {
    plVar3 = &lStack_10;
  }
  lVar13 = *plVar3;
  if (0 < lVar13) {
    puVar11 = (undefined2 *)piVar8[2];
    uVar4 = (uint)lVar13;
    uVar10 = 0;
    if (uVar4 != 0) {
      puVar12 = param_2;
      if (8 < uVar4) {
        do {
          uVar10 = uVar10 + 8;
          puVar7 = puVar11 + 0xe;
          puVar9 = puVar12 + 0xe;
          *puVar12 = *puVar11;
          puVar12[2] = puVar11[2];
          puVar12[4] = puVar11[4];
          puVar12[6] = puVar11[6];
          puVar12[8] = puVar11[8];
          puVar12[10] = puVar11[10];
          puVar12[0xc] = puVar11[0xc];
          puVar11 = puVar11 + 0x10;
          puVar12 = puVar12 + 0x10;
          *puVar9 = *puVar7;
        } while (uVar10 < uVar4 - 8);
      }
      for (; uVar10 < uVar4; uVar10 = uVar10 + 1) {
        uVar1 = *puVar11;
        puVar11 = puVar11 + 2;
        *puVar12 = uVar1;
        puVar12 = puVar12 + 2;
      }
    }
    param_2 = param_2 + uVar4 * 2;
    piVar8[2] = piVar8[2] + uVar4 * 4;
    lStack_10 = param_3 - lVar13;
  }
  while( true ) {
    if (lStack_10 < 1) {
      return lVar13;
    }
    if ((uint)piVar8[2] < (uint)piVar8[3]) {
      puVar2 = (ushort *)piVar8[2];
      piVar8[2] = (int)(puVar2 + 2);
      uVar5 = (ulong)*puVar2;
    }
    else {
      uVar5 = (**(code **)(*piVar8 + 0x28))(param_1);
    }
    if (uVar5 == 0xffffffffffffffff) break;
    *param_2 = (short)uVar5;
    lVar13 = lVar13 + 1;
    param_2 = param_2 + 2;
    lStack_10 = lStack_10 + -1;
  }
  return lVar13;
}

