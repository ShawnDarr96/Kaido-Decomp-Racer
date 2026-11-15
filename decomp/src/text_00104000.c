// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00104000 - 0x00108000
#include "ghidra_types.h"

// 0x001040e0  size 0x10
void maybe_Pos_InitC(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}

// 0x001040f0  size 0x10
void maybe_Pos_InitD(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}

// 0x00104100  size 0xac
undefined8 maybe_std_istream_ctor(undefined8 param_1,short param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (param_2 != 0) {
    *piVar2 = (int)(piVar2 + 6);
    piVar2[6] = (int)&PTR_PTR_0036df88;
  }
  piVar2[4] = (int)&PTR_PTR_0036df70;
  *(undefined ***)*piVar2 = &PTR_PTR_0036df7c;
  *(int *)(*piVar2 + 0x48) = (int)piVar2 + (0x18 - *piVar2);
  piVar2[2] = 0;
  piVar2[3] = 0;
  iVar1 = *piVar2;
  std_ios_base_init(iVar1,param_3);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined1 *)(iVar1 + 0x44) = 0x20;
  return param_1;
}

// 0x001041b0  size 0xac
undefined8 maybe_std_wistream_ctor(undefined8 param_1,short param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (param_2 != 0) {
    *piVar2 = (int)(piVar2 + 6);
    piVar2[6] = (int)&PTR_PTR_0036deb8;
  }
  piVar2[4] = (int)&PTR_PTR_0036dea0;
  *(undefined ***)*piVar2 = &PTR_PTR_0036deac;
  *(int *)(*piVar2 + 0x48) = (int)piVar2 + (0x18 - *piVar2);
  piVar2[2] = 0;
  piVar2[3] = 0;
  iVar1 = *piVar2;
  std_ios_base_init(iVar1,param_3);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined2 *)(iVar1 + 0x44) = 0x20;
  return param_1;
}

// 0x00104260  size 0x158
/* "ios_base failure in clear" */

undefined8 maybe_std_ostream_flush(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuStack_18;
  undefined4 auStack_14 [3];
  undefined1 uStack_8;
  char cStack_7;
  int *piStack_4;
  
  maybe_std_ostream_sentry_ctor(&uStack_8,param_1);
  cStack_7 = '\x01';
  piVar1 = *(int **)(*(int *)param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    lVar3 = (**(code **)(*piVar1 + 0x18))();
    if (lVar3 == -1) {
      iVar2 = *(int *)param_1;
      *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 1;
      if (*(int *)(iVar2 + 0x20) == 0) {
        *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 1;
      }
      if ((*(byte *)(iVar2 + 0x3a) & *(byte *)(iVar2 + 0x3b)) != 0) {
        ppuStack_18 = &PTR_PTR_0036de90;
        iVar2 = strlen(0x35e280);
        uVar4 = maybe_operator_new(iVar2 + 1);
        maybe_std_shared_count_ctor(auStack_14,uVar4);
        maybe_strcpy(auStack_14[0],0x35e280);
        maybe___throw(0x35e5f0,&ppuStack_18,0x102a60);
      }
    }
  }
  if ((((*(byte *)(*piStack_4 + 0x3a) & 5) == 0) && ((*(ushort *)(*piStack_4 + 0x38) & 0x2000) != 0)
      ) && (cStack_7 == '\0')) {
    maybe_std_ostream_flush();
  }
  return param_1;
}

// 0x001043e8  size 0x54
/* follows std_ostream_flush; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void std_ostream_flush_Orphan1(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *unaff_s0_lo;
  long unaff_s1;
  int *unaff_s2_lo;
  int unaff_s8_lo;
  
  maybe___throw(param_1,0,0);
  maybe___destroy_local_object(unaff_s8_lo + 0x60);
  if (unaff_s1 != 0) {
    iVar1 = *unaff_s2_lo;
    *(byte *)(iVar1 + 0x3a) = *(byte *)(iVar1 + 0x3a) | 1;
    if (*(int *)(iVar1 + 0x20) == 0) {
      *(byte *)(iVar1 + 0x3a) = *(byte *)(iVar1 + 0x3a) | 1;
    }
    if ((*(byte *)(iVar1 + 0x3a) & *(byte *)(iVar1 + 0x3b)) != 0) {
      *(undefined ***)(unaff_s8_lo + 0x78) = &PTR_PTR_0036de90;
      iVar1 = strlen(0x35e280);
      uVar2 = maybe_operator_new(iVar1 + 1);
      maybe_std_shared_count_ctor((undefined4 *)(unaff_s8_lo + 0x7c),uVar2);
      maybe_strcpy(*(undefined4 *)(unaff_s8_lo + 0x7c),0x35e280);
      maybe___throw(0x35e5f0,unaff_s8_lo + 0x78,0x102a60);
    }
  }
  if ((((*(byte *)(**(int **)(unaff_s8_lo + 0x8c) + 0x3a) & 5) == 0) &&
      ((*(ushort *)(**(int **)(unaff_s8_lo + 0x8c) + 0x38) & 0x2000) != 0)) &&
     (*unaff_s0_lo == '\0')) {
    maybe_std_ostream_flush();
  }
  return;
}

// 0x00104430  size 0xa8
undefined8 maybe_std_ostream_ctor(undefined8 param_1,short param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (param_2 != 0) {
    *piVar2 = (int)(piVar2 + 2);
    piVar2[2] = (int)&PTR_PTR_0036df88;
  }
  piVar2[1] = (int)&PTR_PTR_0036dfa0;
  *(undefined ***)*piVar2 = &PTR_PTR_0036dfac;
  *(int *)(*piVar2 + 0x48) = (int)piVar2 + (8 - *piVar2);
  iVar1 = *piVar2;
  std_ios_base_init(iVar1,param_3);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined1 *)(iVar1 + 0x44) = 0x20;
  return param_1;
}

// 0x001044e0  size 0x158
undefined8 maybe_std_wostream_flush(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuStack_18;
  undefined4 auStack_14 [3];
  undefined1 uStack_8;
  char cStack_7;
  int *piStack_4;
  
  maybe_std_wostream_sentry_ctor(&uStack_8,param_1);
  cStack_7 = '\x01';
  piVar1 = *(int **)(*(int *)param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    lVar3 = (**(code **)(*piVar1 + 0x18))();
    if (lVar3 == -1) {
      iVar2 = *(int *)param_1;
      *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 1;
      if (*(int *)(iVar2 + 0x20) == 0) {
        *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 1;
      }
      if ((*(byte *)(iVar2 + 0x3a) & *(byte *)(iVar2 + 0x3b)) != 0) {
        ppuStack_18 = &PTR_PTR_0036de90;
        iVar2 = strlen(0x35e280);
        uVar4 = maybe_operator_new(iVar2 + 1);
        maybe_std_shared_count_ctor(auStack_14,uVar4);
        maybe_strcpy(auStack_14[0],0x35e280);
        maybe___throw(0x35e5f0,&ppuStack_18,0x102a60);
      }
    }
  }
  if ((((*(byte *)(*piStack_4 + 0x3a) & 5) == 0) && ((*(ushort *)(*piStack_4 + 0x38) & 0x2000) != 0)
      ) && (cStack_7 == '\0')) {
    maybe_std_wostream_flush();
  }
  return param_1;
}

// 0x00104668  size 0x54
/* follows std_wostream_flush; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void std_wostream_flush_Orphan1(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *unaff_s0_lo;
  long unaff_s1;
  int *unaff_s2_lo;
  int unaff_s8_lo;
  
  maybe___throw(param_1,0,0);
  maybe___destroy_local_object(unaff_s8_lo + 0x60);
  if (unaff_s1 != 0) {
    iVar1 = *unaff_s2_lo;
    *(byte *)(iVar1 + 0x3a) = *(byte *)(iVar1 + 0x3a) | 1;
    if (*(int *)(iVar1 + 0x20) == 0) {
      *(byte *)(iVar1 + 0x3a) = *(byte *)(iVar1 + 0x3a) | 1;
    }
    if ((*(byte *)(iVar1 + 0x3a) & *(byte *)(iVar1 + 0x3b)) != 0) {
      *(undefined ***)(unaff_s8_lo + 0x78) = &PTR_PTR_0036de90;
      iVar1 = strlen(0x35e280);
      uVar2 = maybe_operator_new(iVar1 + 1);
      maybe_std_shared_count_ctor((undefined4 *)(unaff_s8_lo + 0x7c),uVar2);
      maybe_strcpy(*(undefined4 *)(unaff_s8_lo + 0x7c),0x35e280);
      maybe___throw(0x35e5f0,unaff_s8_lo + 0x78,0x102a60);
    }
  }
  if ((((*(byte *)(**(int **)(unaff_s8_lo + 0x8c) + 0x3a) & 5) == 0) &&
      ((*(ushort *)(**(int **)(unaff_s8_lo + 0x8c) + 0x38) & 0x2000) != 0)) &&
     (*unaff_s0_lo == '\0')) {
    maybe_std_wostream_flush();
  }
  return;
}

// 0x001046b0  size 0xa8
undefined8 maybe_std_wostream_ctor(undefined8 param_1,short param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (param_2 != 0) {
    *piVar2 = (int)(piVar2 + 2);
    piVar2[2] = (int)&PTR_PTR_0036deb8;
  }
  piVar2[1] = (int)&PTR_PTR_0036ded0;
  *(undefined ***)*piVar2 = &PTR_PTR_0036dedc;
  *(int *)(*piVar2 + 0x48) = (int)piVar2 + (8 - *piVar2);
  iVar1 = *piVar2;
  std_ios_base_init(iVar1,param_3);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined2 *)(iVar1 + 0x44) = 0x20;
  return param_1;
}

// 0x00104760  size 0xb8
int maybe_std_filebuf_sync(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 1;
  piVar4 = (int *)param_1;
  bVar2 = true;
  if (piVar4[7] != 0) {
    bVar1 = false;
    if (((uint)piVar4[4] < (uint)piVar4[5]) &&
       (lVar3 = (**(code **)(*piVar4 + 0x34))(param_1,0xffffffffffffffff), lVar3 == -1)) {
      bVar1 = true;
    }
    if (!bVar1) {
      bVar2 = false;
    }
  }
  if ((!bVar2) && (lVar3 = maybe__fflush_r(piVar4[7]), lVar3 == 0)) {
    iVar5 = 0;
  }
  return -iVar5;
}

// 0x00104820  size 0x110
void maybe_std_filebuf_seekpos
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 uStack_8;
  
  piVar4 = (int *)param_2;
  uVar3 = param_3[1];
  uVar5 = *param_3;
  if ((piVar4[7] == 0) || ((param_4 & 0x18) == 0)) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    bVar1 = false;
    if (((uint)piVar4[4] < (uint)piVar4[5]) &&
       (lVar2 = (**(code **)(*piVar4 + 0x34))(param_2,0xffffffffffffffff), lVar2 == -1)) {
      bVar1 = true;
    }
    if (bVar1) {
      *param_1 = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      lVar2 = maybe__fseek_r(piVar4[7],uVar5,0);
      if (lVar2 == 0) {
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[5] = 0;
        piVar4[4] = 0;
        piVar4[6] = 0;
        *(undefined1 *)(piVar4 + 0xd) = 0;
        uStack_8 = (undefined4)uVar3;
        *param_1 = uVar5;
        *(undefined4 *)(param_1 + 1) = uStack_8;
      }
      else {
        *param_1 = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
  }
  return;
}

// 0x00104930  size 0x170
void maybe_std_filebuf_seekoff
               (undefined8 *param_1,undefined8 param_2,long param_3,char param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = (int *)param_2;
  if (piVar3[7] == 0) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    bVar1 = false;
    if (((uint)piVar3[4] < (uint)piVar3[5]) &&
       (lVar2 = (**(code **)(*piVar3 + 0x34))(param_2,0xffffffffffffffff), lVar2 == -1)) {
      bVar1 = true;
    }
    if (bVar1) {
      *param_1 = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      if (param_4 == '\x04') {
        uVar4 = 2;
      }
      else if (param_4 == '\x02') {
        uVar4 = 1;
        if ((param_5 & 8) != 0) {
          param_3 = param_3 - (piVar3[3] - piVar3[2]);
        }
      }
      else {
        if (param_4 != '\x01') {
          *param_1 = 0xffffffffffffffff;
          *(undefined4 *)(param_1 + 1) = 0;
          return;
        }
        uVar4 = 0;
      }
      lVar2 = maybe__fseek_r(piVar3[7],param_3,uVar4);
      if (lVar2 == 0) {
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[5] = 0;
        piVar3[4] = 0;
        piVar3[6] = 0;
        *(undefined1 *)(piVar3 + 0xd) = 0;
        uVar4 = maybe__fclose_r(piVar3[7]);
        *param_1 = uVar4;
        *(undefined4 *)(param_1 + 1) = 0;
      }
      else {
        *param_1 = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
  }
  return;
}

// 0x00104aa0  size 0x3f0
ulong maybe_std_filebuf_overflow(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  long alStack_10 [2];
  
  piVar9 = (int *)param_1;
  if (piVar9[7] == 0) {
    param_2 = 0xffffffffffffffff;
  }
  else {
    if ((*(char *)((int)piVar9 + 0x36) != '\0') && (piVar9[5] == 0)) {
      if (((uint)piVar9[2] < (uint)piVar9[3]) &&
         ((**(code **)(*piVar9 + 0x10))(alStack_10,param_1,0,2,8), alStack_10[0] == -1)) {
        return 0xffffffffffffffff;
      }
      piVar9[5] = (int)(piVar9 + 9);
      piVar9[4] = (int)(piVar9 + 9);
      piVar9[6] = (int)(piVar9 + 0xd);
    }
    *(undefined1 *)(piVar9 + 0xd) = 1;
    uVar10 = (undefined1)param_2;
    if (*(char *)((int)piVar9 + 0x35) == '\0') {
      puVar11 = (undefined1 *)piVar9[4];
      if (puVar11 < (undefined1 *)piVar9[5]) {
        do {
          lVar7 = maybe_std_filebuf_putmb(param_1,1,*puVar11);
          if (lVar7 == -1) {
            if ((undefined1 *)piVar9[4] < puVar11) {
              memcpy((undefined1 *)piVar9[4],puVar11,piVar9[5] - (int)puVar11);
              piVar9[5] = piVar9[5] + (piVar9[4] - (int)puVar11);
            }
            return 0xffffffffffffffff;
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 < (undefined1 *)piVar9[5]);
        iVar5 = piVar9[4];
      }
      else {
        iVar5 = piVar9[4];
      }
      bVar4 = false;
      piVar9[5] = piVar9[5] + (iVar5 - piVar9[5]);
      if ((param_2 != 0xffffffffffffffff) &&
         (lVar7 = maybe_std_filebuf_putmb(param_1,1,uVar10), lVar7 == -1)) {
        bVar4 = true;
      }
      if (bVar4) {
        return 0xffffffffffffffff;
      }
    }
    else {
      pbVar12 = (byte *)piVar9[4];
      if (pbVar12 < (byte *)piVar9[5]) {
        do {
          bVar1 = *pbVar12;
          iVar5 = *(int *)(piVar9[7] + 8) + -1;
          *(int *)(piVar9[7] + 8) = iVar5;
          if (iVar5 < 0) {
            puVar3 = (undefined4 *)piVar9[7];
            if ((int)puVar3[2] < (int)puVar3[6]) {
              uVar6 = maybe___swbuf_r(bVar1);
            }
            else {
              *(byte *)*puVar3 = bVar1;
              puVar3 = (undefined4 *)piVar9[7];
              if (*(char *)*puVar3 == '\n') {
                uVar6 = maybe___swbuf_r();
              }
              else {
                pbVar2 = (byte *)*puVar3;
                *puVar3 = pbVar2 + 1;
                uVar6 = (ulong)*pbVar2;
              }
            }
          }
          else {
            **(byte **)piVar9[7] = bVar1;
            pbVar2 = *(byte **)piVar9[7];
            *(byte **)piVar9[7] = pbVar2 + 1;
            uVar6 = (ulong)*pbVar2;
          }
          uVar8 = 0xffffffffffffffff;
          if (uVar6 != 0xffffffffffffffff) {
            uVar8 = (ulong)bVar1;
          }
          if (uVar8 == 0xffffffffffffffff) {
            if ((byte *)piVar9[4] < pbVar12) {
              memcpy((byte *)piVar9[4],pbVar12,piVar9[5] - (int)pbVar12);
              piVar9[5] = piVar9[5] + (piVar9[4] - (int)pbVar12);
            }
            return 0xffffffffffffffff;
          }
          pbVar12 = pbVar12 + 1;
        } while (pbVar12 < (byte *)piVar9[5]);
      }
      piVar9[5] = piVar9[5] + (piVar9[4] - piVar9[5]);
      bVar4 = false;
      if (param_2 != 0xffffffffffffffff) {
        iVar5 = *(int *)(piVar9[7] + 8) + -1;
        *(int *)(piVar9[7] + 8) = iVar5;
        if (iVar5 < 0) {
          puVar3 = (undefined4 *)piVar9[7];
          if ((int)puVar3[2] < (int)puVar3[6]) {
            uVar6 = maybe___swbuf_r(uVar10);
          }
          else {
            *(undefined1 *)*puVar3 = uVar10;
            puVar3 = (undefined4 *)piVar9[7];
            if (*(char *)*puVar3 == '\n') {
              uVar6 = maybe___swbuf_r();
            }
            else {
              pbVar12 = (byte *)*puVar3;
              *puVar3 = pbVar12 + 1;
              uVar6 = (ulong)*pbVar12;
            }
          }
        }
        else {
          **(undefined1 **)piVar9[7] = uVar10;
          pbVar12 = *(byte **)piVar9[7];
          *(byte **)piVar9[7] = pbVar12 + 1;
          uVar6 = (ulong)*pbVar12;
        }
        uVar8 = 0xffffffffffffffff;
        if (uVar6 != 0xffffffffffffffff) {
          uVar8 = param_2 & 0xff;
        }
        bVar4 = uVar8 == 0xffffffffffffffff;
      }
      if (bVar4) {
        return 0xffffffffffffffff;
      }
    }
    if (param_2 == 0xffffffffffffffff) {
      param_2 = 0;
    }
  }
  return param_2;
}

// 0x00104e90  size 0xc0
long maybe_std_stdio_filebuf_pbackfail(int param_1,long param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return -1;
  }
  if ((*(char *)(param_1 + 0x36) == '\0') && (*(char *)(param_1 + 0x35) != '\0')) {
    if (param_2 == -1) {
      return -1;
    }
    lVar1 = maybe__ungetc_r(param_2);
    if (lVar1 == -1) {
      return -1;
    }
  }
  else {
    if (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 4)) {
      return -1;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    if (param_2 != -1) {
      **(undefined1 **)(param_1 + 8) = (char)param_2;
    }
  }
  if (param_2 == -1) {
    param_2 = 0;
  }
  return param_2;
}

// 0x00104f50  size 0x124
ulong maybe_std_stdio_filebuf_underflow(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  if ((*(char *)((int)piVar6 + 0x36) != '\0') && (piVar6[2] == 0)) {
    bVar2 = false;
    if (((uint)piVar6[4] < (uint)piVar6[5]) &&
       (lVar4 = (**(code **)(*piVar6 + 0x34))(param_1,0xffffffffffffffff), lVar4 == -1)) {
      bVar2 = true;
    }
    if (bVar2) {
      return 0xffffffffffffffff;
    }
    piVar6[5] = 0;
    piVar3 = piVar6 + 9;
    piVar6[4] = 0;
    piVar6[6] = 0;
    piVar6[1] = (int)piVar3;
    piVar6[2] = (int)piVar3;
    piVar6[3] = (int)piVar3;
  }
  if (piVar6[2] == 0) {
    *(undefined1 *)(piVar6 + 0xd) = 0;
    if (piVar6[7] == 0) {
      uVar5 = 0xffffffffffffffff;
    }
    else {
      if (*(char *)((int)piVar6 + 0x35) == '\0') {
        uVar5 = maybe_std_filebuf_getmb(param_1,1,0);
      }
      else {
        uVar5 = maybe_std_filebuf_getc(param_1,0);
      }
      if (uVar5 == 0xffffffffffffffff) {
        uVar5 = 0xffffffffffffffff;
      }
    }
  }
  else {
    lVar4 = (**(code **)(*piVar6 + 0x24))(param_1);
    uVar5 = 0xffffffffffffffff;
    if (lVar4 != -1) {
      bVar1 = *(byte *)piVar6[2];
      piVar6[2] = piVar6[2] + 1;
      uVar5 = (ulong)bVar1;
    }
  }
  return uVar5;
}

// 0x00105080  size 0x180
ulong maybe_std_stdio_filebuf_uflow(undefined8 param_1)

{
  byte *pbVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = (int *)param_1;
  if (piVar7[7] == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    if ((*(char *)((int)piVar7 + 0x36) != '\0') && (piVar7[2] == 0)) {
      bVar2 = false;
      if (((uint)piVar7[4] < (uint)piVar7[5]) &&
         (lVar4 = (**(code **)(*piVar7 + 0x34))(param_1,0xffffffffffffffff), lVar4 == -1)) {
        bVar2 = true;
      }
      if (bVar2) {
        return 0xffffffffffffffff;
      }
      piVar7[5] = 0;
      piVar3 = piVar7 + 9;
      piVar7[4] = 0;
      piVar7[6] = 0;
      piVar7[1] = (int)piVar3;
      piVar7[2] = (int)piVar3;
      piVar7[3] = (int)piVar3;
    }
    *(undefined1 *)(piVar7 + 0xd) = 0;
    pbVar1 = (byte *)piVar7[2];
    if (pbVar1 < (byte *)piVar7[3]) {
      uVar6 = (ulong)*pbVar1;
    }
    else {
      if (*(char *)((int)piVar7 + 0x35) == '\0') {
        uVar5 = maybe_std_filebuf_getmb(param_1,1,pbVar1 == (byte *)0x0);
      }
      else {
        uVar5 = maybe_std_filebuf_getc(param_1,pbVar1 == (byte *)0x0);
      }
      uVar6 = 0xffffffffffffffff;
      if ((uVar5 != 0xffffffffffffffff) && (uVar6 = uVar5, piVar7[2] != 0)) {
        iVar8 = piVar7[3] - piVar7[1];
        if (iVar8 == 0x10) {
          iVar8 = 4;
          piVar7[9] = piVar7[0xc];
        }
        piVar7[1] = (int)(piVar7 + 9);
        piVar7[2] = (int)piVar7 + iVar8 + 0x24;
        piVar7[3] = (int)piVar7 + iVar8 + 0x25;
        *(char *)piVar7[2] = (char)uVar5;
      }
    }
  }
  return uVar6;
}

// 0x00105200  size 0x18
/* N153 confirmed: end - begin */

int Vector_ByteSize(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
}

// 0x00105220  size 0x50
undefined8 maybe_std_stdio_filebuf_ctor(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &PTR_PTR_0036dfc0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_PTR_0036e000;
  puVar1[7] = param_2;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0x36) = 1;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  return param_1;
}

// 0x00105270  size 0xb8
int maybe_std_stdio_wfilebuf_sync(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 1;
  piVar4 = (int *)param_1;
  bVar2 = true;
  if (piVar4[7] != 0) {
    bVar1 = false;
    if (((uint)piVar4[4] < (uint)piVar4[5]) &&
       (lVar3 = (**(code **)(*piVar4 + 0x34))(param_1,0xffffffffffffffff), lVar3 == -1)) {
      bVar1 = true;
    }
    if (!bVar1) {
      bVar2 = false;
    }
  }
  if ((!bVar2) && (lVar3 = maybe__fflush_r(piVar4[7]), lVar3 == 0)) {
    iVar5 = 0;
  }
  return -iVar5;
}

// 0x00105330  size 0x110
void maybe_std_stdio_wfilebuf_seekpos
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 uStack_8;
  
  piVar4 = (int *)param_2;
  uVar3 = param_3[1];
  uVar5 = *param_3;
  if ((piVar4[7] == 0) || ((param_4 & 0x18) == 0)) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    bVar1 = false;
    if (((uint)piVar4[4] < (uint)piVar4[5]) &&
       (lVar2 = (**(code **)(*piVar4 + 0x34))(param_2,0xffffffffffffffff), lVar2 == -1)) {
      bVar1 = true;
    }
    if (bVar1) {
      *param_1 = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      lVar2 = maybe__fseek_r(piVar4[7],uVar5,0);
      if (lVar2 == 0) {
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[5] = 0;
        piVar4[4] = 0;
        piVar4[6] = 0;
        *(undefined1 *)(piVar4 + 0x19) = 0;
        uStack_8 = (undefined4)uVar3;
        *param_1 = uVar5;
        *(undefined4 *)(param_1 + 1) = uStack_8;
      }
      else {
        *param_1 = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
  }
  return;
}

// 0x00105440  size 0x180
void maybe_std_stdio_wfilebuf_seekoff
               (undefined8 *param_1,undefined8 param_2,long param_3,char param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar4 = (int *)param_2;
  if (piVar4[7] == 0) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    bVar1 = false;
    if (((uint)piVar4[4] < (uint)piVar4[5]) &&
       (lVar2 = (**(code **)(*piVar4 + 0x34))(param_2,0xffffffffffffffff), lVar2 == -1)) {
      bVar1 = true;
    }
    if (bVar1) {
      *param_1 = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      if (param_4 == '\x04') {
        uVar5 = 2;
      }
      else if (param_4 == '\x02') {
        uVar5 = 1;
        if ((param_5 & 8) != 0) {
          iVar3 = piVar4[3] - piVar4[2];
          if (iVar3 < 0) {
            iVar3 = iVar3 + 3;
          }
          param_3 = param_3 - (iVar3 >> 2);
        }
      }
      else {
        if (param_4 != '\x01') {
          *param_1 = 0xffffffffffffffff;
          *(undefined4 *)(param_1 + 1) = 0;
          return;
        }
        uVar5 = 0;
      }
      lVar2 = maybe__fseek_r(piVar4[7],param_3 << 2,uVar5);
      if (lVar2 == 0) {
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[5] = 0;
        piVar4[4] = 0;
        piVar4[6] = 0;
        *(undefined1 *)(piVar4 + 0x19) = 0;
        uVar5 = maybe__fclose_r(piVar4[7]);
        *param_1 = uVar5;
        *(undefined4 *)(param_1 + 1) = 0;
      }
      else {
        *param_1 = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
  }
  return;
}

// 0x001055c0  size 0x460
ulong maybe_std_stdio_wfilebuf_overflow(undefined8 param_1,ulong param_2)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  undefined2 *puVar11;
  ushort *puVar12;
  long alStack_10 [2];
  
  piVar10 = (int *)param_1;
  if (piVar10[7] == 0) {
    param_2 = 0xffffffffffffffff;
  }
  else {
    if ((*(char *)((int)piVar10 + 0x66) != '\0') && (piVar10[5] == 0)) {
      if (((uint)piVar10[2] < (uint)piVar10[3]) &&
         ((**(code **)(*piVar10 + 0x10))(alStack_10,param_1,0,2,8), alStack_10[0] == -1)) {
        return 0xffffffffffffffff;
      }
      piVar10[5] = (int)(piVar10 + 9);
      piVar10[4] = (int)(piVar10 + 9);
      piVar10[6] = (int)(piVar10 + 0x19);
    }
    *(undefined1 *)(piVar10 + 0x19) = 1;
    if (*(char *)((int)piVar10 + 0x65) == '\0') {
      puVar11 = (undefined2 *)piVar10[4];
      if (puVar11 < (undefined2 *)piVar10[5]) {
        do {
          lVar7 = maybe_std_wfilebuf_putmb(param_1,4,*puVar11);
          if (lVar7 == -1) {
            if ((undefined2 *)piVar10[4] < puVar11) {
              iVar8 = piVar10[5] - (int)puVar11;
              if (iVar8 < 0) {
                iVar8 = iVar8 + 3;
              }
              memcpy((undefined2 *)piVar10[4],puVar11,(iVar8 >> 2) << 2);
              iVar8 = piVar10[4] - (int)puVar11;
              if (iVar8 < 0) {
                iVar8 = iVar8 + 3;
              }
              piVar10[5] = piVar10[5] + (iVar8 >> 2) * 4;
            }
            return 0xffffffffffffffff;
          }
          puVar11 = puVar11 + 2;
        } while (puVar11 < (undefined2 *)piVar10[5]);
        iVar8 = piVar10[4];
      }
      else {
        iVar8 = piVar10[4];
      }
      iVar8 = iVar8 - piVar10[5];
      if (iVar8 < 0) {
        iVar8 = iVar8 + 3;
      }
      bVar4 = false;
      piVar10[5] = piVar10[5] + (iVar8 >> 2) * 4;
      if ((param_2 != 0xffffffffffffffff) &&
         (lVar7 = maybe_std_wfilebuf_putmb(param_1,4,param_2), lVar7 == -1)) {
        bVar4 = true;
      }
      if (bVar4) {
        return 0xffffffffffffffff;
      }
    }
    else {
      puVar12 = (ushort *)piVar10[4];
      if (puVar12 < (ushort *)piVar10[5]) {
        do {
          uVar1 = *puVar12;
          iVar8 = *(int *)(piVar10[7] + 8) + -1;
          *(int *)(piVar10[7] + 8) = iVar8;
          if (iVar8 < 0) {
            puVar3 = (undefined4 *)piVar10[7];
            if ((int)puVar3[2] < (int)puVar3[6]) {
              uVar5 = maybe___swbuf_r((ulong)uVar1);
            }
            else {
              *(char *)*puVar3 = (char)uVar1;
              puVar3 = (undefined4 *)piVar10[7];
              if (*(char *)*puVar3 == '\n') {
                uVar5 = maybe___swbuf_r();
              }
              else {
                pbVar2 = (byte *)*puVar3;
                *puVar3 = pbVar2 + 1;
                uVar5 = (ulong)*pbVar2;
              }
            }
          }
          else {
            **(undefined1 **)piVar10[7] = (char)uVar1;
            pbVar2 = *(byte **)piVar10[7];
            *(byte **)piVar10[7] = pbVar2 + 1;
            uVar5 = (ulong)*pbVar2;
          }
          uVar6 = 0xffffffffffffffff;
          if (uVar5 != 0xffffffffffffffff) {
            uVar6 = (ulong)uVar1;
          }
          if (uVar6 == 0xffffffffffffffff) {
            if ((ushort *)piVar10[4] < puVar12) {
              iVar8 = piVar10[5] - (int)puVar12;
              if (iVar8 < 0) {
                iVar8 = iVar8 + 3;
              }
              memcpy((ushort *)piVar10[4],puVar12,(iVar8 >> 2) << 2);
              iVar8 = piVar10[4] - (int)puVar12;
              if (iVar8 < 0) {
                iVar8 = iVar8 + 3;
              }
              piVar10[5] = piVar10[5] + (iVar8 >> 2) * 4;
            }
            return 0xffffffffffffffff;
          }
          puVar12 = puVar12 + 2;
        } while (puVar12 < (ushort *)piVar10[5]);
      }
      iVar8 = piVar10[4] - piVar10[5];
      if (iVar8 < 0) {
        iVar8 = iVar8 + 3;
      }
      piVar10[5] = piVar10[5] + (iVar8 >> 2) * 4;
      bVar4 = false;
      if (param_2 != 0xffffffffffffffff) {
        uVar5 = param_2 & 0xffff;
        iVar8 = *(int *)(piVar10[7] + 8) + -1;
        *(int *)(piVar10[7] + 8) = iVar8;
        if (iVar8 < 0) {
          puVar3 = (undefined4 *)piVar10[7];
          if ((int)puVar3[2] < (int)puVar3[6]) {
            uVar6 = maybe___swbuf_r(uVar5);
          }
          else {
            *(char *)*puVar3 = (char)uVar5;
            puVar3 = (undefined4 *)piVar10[7];
            if (*(char *)*puVar3 == '\n') {
              uVar6 = maybe___swbuf_r();
            }
            else {
              pbVar2 = (byte *)*puVar3;
              *puVar3 = pbVar2 + 1;
              uVar6 = (ulong)*pbVar2;
            }
          }
        }
        else {
          **(undefined1 **)piVar10[7] = (char)uVar5;
          pbVar2 = *(byte **)piVar10[7];
          *(byte **)piVar10[7] = pbVar2 + 1;
          uVar6 = (ulong)*pbVar2;
        }
        uVar9 = 0xffffffffffffffff;
        if (uVar6 != 0xffffffffffffffff) {
          uVar9 = uVar5;
        }
        bVar4 = uVar9 == 0xffffffffffffffff;
      }
      if (bVar4) {
        return 0xffffffffffffffff;
      }
    }
    if (param_2 == 0xffffffffffffffff) {
      param_2 = 0;
    }
  }
  return param_2;
}

// 0x00105a20  size 0xc0
long maybe_std_stdio_wfilebuf_pbackfail(int param_1,long param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return -1;
  }
  if ((*(char *)(param_1 + 0x66) == '\0') && (*(char *)(param_1 + 0x65) != '\0')) {
    if (param_2 == -1) {
      return -1;
    }
    lVar1 = maybe__ungetc_r(param_2);
    if (lVar1 == -1) {
      return -1;
    }
  }
  else {
    if (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 4)) {
      return -1;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
    if (param_2 != -1) {
      **(undefined2 **)(param_1 + 8) = (short)param_2;
    }
  }
  if (param_2 == -1) {
    param_2 = 0;
  }
  return param_2;
}

// 0x00105ae0  size 0x124
ulong maybe_std_stdio_wfilebuf_underflow(undefined8 param_1)

{
  ushort uVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  if ((*(char *)((int)piVar6 + 0x66) != '\0') && (piVar6[2] == 0)) {
    bVar2 = false;
    if (((uint)piVar6[4] < (uint)piVar6[5]) &&
       (lVar4 = (**(code **)(*piVar6 + 0x34))(param_1,0xffffffffffffffff), lVar4 == -1)) {
      bVar2 = true;
    }
    if (bVar2) {
      return 0xffffffffffffffff;
    }
    piVar6[5] = 0;
    piVar3 = piVar6 + 9;
    piVar6[4] = 0;
    piVar6[6] = 0;
    piVar6[1] = (int)piVar3;
    piVar6[2] = (int)piVar3;
    piVar6[3] = (int)piVar3;
  }
  if (piVar6[2] == 0) {
    *(undefined1 *)(piVar6 + 0x19) = 0;
    if (piVar6[7] == 0) {
      uVar5 = 0xffffffffffffffff;
    }
    else {
      if (*(char *)((int)piVar6 + 0x65) == '\0') {
        uVar5 = maybe_std_wfilebuf_getmb(param_1,4,0);
      }
      else {
        uVar5 = maybe_std_wfilebuf_getc(param_1,0);
      }
      if (uVar5 == 0xffffffffffffffff) {
        uVar5 = 0xffffffffffffffff;
      }
    }
  }
  else {
    lVar4 = (**(code **)(*piVar6 + 0x24))(param_1);
    uVar5 = 0xffffffffffffffff;
    if (lVar4 != -1) {
      uVar1 = *(ushort *)piVar6[2];
      piVar6[2] = piVar6[2] + 4;
      uVar5 = (ulong)uVar1;
    }
  }
  return uVar5;
}

// 0x00105c10  size 0x190
ulong maybe_std_stdio_wfilebuf_uflow(undefined8 param_1)

{
  ushort *puVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  
  piVar8 = (int *)param_1;
  if (piVar8[7] == 0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    if ((*(char *)((int)piVar8 + 0x66) != '\0') && (piVar8[2] == 0)) {
      bVar2 = false;
      if (((uint)piVar8[4] < (uint)piVar8[5]) &&
         (lVar4 = (**(code **)(*piVar8 + 0x34))(param_1,0xffffffffffffffff), lVar4 == -1)) {
        bVar2 = true;
      }
      if (bVar2) {
        return 0xffffffffffffffff;
      }
      piVar8[5] = 0;
      piVar3 = piVar8 + 9;
      piVar8[4] = 0;
      piVar8[6] = 0;
      piVar8[1] = (int)piVar3;
      piVar8[2] = (int)piVar3;
      piVar8[3] = (int)piVar3;
    }
    *(undefined1 *)(piVar8 + 0x19) = 0;
    puVar1 = (ushort *)piVar8[2];
    if (puVar1 < (ushort *)piVar8[3]) {
      uVar7 = (ulong)*puVar1;
    }
    else {
      if (*(char *)((int)piVar8 + 0x65) == '\0') {
        uVar5 = maybe_std_wfilebuf_getmb(param_1,4,puVar1 == (ushort *)0x0);
      }
      else {
        uVar5 = maybe_std_wfilebuf_getc(param_1,puVar1 == (ushort *)0x0);
      }
      uVar7 = 0xffffffffffffffff;
      if ((uVar5 != 0xffffffffffffffff) && (uVar7 = uVar5, piVar8[2] != 0)) {
        iVar6 = piVar8[3] - piVar8[1];
        if (iVar6 < 0) {
          iVar6 = iVar6 + 3;
        }
        iVar6 = iVar6 >> 2;
        if (iVar6 == 0x10) {
          iVar6 = 1;
          piVar8[9] = piVar8[0x18];
        }
        piVar8[1] = (int)(piVar8 + 9);
        piVar8[2] = (int)(piVar8 + iVar6 + 9);
        piVar8[3] = (int)(piVar8 + iVar6 + 10);
        *(short *)piVar8[2] = (short)uVar5;
      }
    }
  }
  return uVar7;
}

// 0x00105da0  size 0x28
/* N153 confirmed: (end - begin) / 4 */

int Vector_Count(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  return iVar1 >> 2;
}

// 0x00105dd0  size 0x50
undefined8 maybe_std_stdio_wfilebuf_ctor(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &PTR_PTR_0036def0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_PTR_0036df30;
  puVar1[7] = param_2;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  *(undefined1 *)((int)puVar1 + 0x66) = 1;
  *(undefined1 *)((int)puVar1 + 0x65) = 0;
  return param_1;
}

// 0x00105e20  size 0xa8
ulong maybe_std_wfilebuf_getc(int param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4) + -1;
  *(int *)(*(int *)(param_1 + 0x1c) + 4) = iVar2;
  if (iVar2 < 0) {
    uVar3 = __srget(*(undefined4 *)(param_1 + 0x1c));
  }
  else {
    pbVar1 = (byte *)**(undefined4 **)(param_1 + 0x1c);
    **(undefined4 **)(param_1 + 0x1c) = pbVar1 + 1;
    uVar3 = (ulong)*pbVar1;
  }
  uVar5 = 0xffffffffffffffff;
  if (uVar3 != 0xffffffffffffffff) {
    if ((param_2 != 0) &&
       (lVar4 = maybe__ungetc_r(uVar3,*(undefined4 *)(param_1 + 0x1c)), lVar4 == -1)) {
      return 0xffffffffffffffff;
    }
    uVar5 = uVar3;
  }
  return uVar5;
}

// 0x00105ed0  size 0x114
ulong maybe_std_wfilebuf_getmb(int param_1,uint param_2,long param_3)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 auStack_11 [13];
  ushort auStack_4 [2];
  
  if (param_2 < 0xd) {
    iVar6 = 0;
    if (0 < (int)param_2) {
      puVar5 = auStack_11;
      do {
        puVar5 = puVar5 + 1;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4) + -1;
        *(int *)(*(int *)(param_1 + 0x1c) + 4) = iVar2;
        if (iVar2 < 0) {
          uVar3 = __srget(*(undefined4 *)(param_1 + 0x1c));
        }
        else {
          pbVar1 = (byte *)**(undefined4 **)(param_1 + 0x1c);
          **(undefined4 **)(param_1 + 0x1c) = pbVar1 + 1;
          uVar3 = (ulong)*pbVar1;
        }
        if (uVar3 == 0xffffffffffffffff) {
          return 0xffffffffffffffff;
        }
        *puVar5 = (char)uVar3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_2);
    }
    memcpy(auStack_4,auStack_11 + 1,param_2);
    if (param_3 == 0) {
LAB_00105fb8:
      uVar3 = (ulong)auStack_4[0];
    }
    else {
      do {
        if ((int)param_2 < 1) goto LAB_00105fb8;
        lVar4 = maybe__ungetc_r(auStack_11[param_2],*(undefined4 *)(param_1 + 0x1c));
        uVar3 = 0xffffffffffffffff;
        param_2 = param_2 - 1;
      } while (lVar4 != -1);
    }
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}

// 0x00105ff0  size 0x12c
ulong maybe_std_wfilebuf_putmb(int param_1,int param_2,ushort param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar6;
  ushort auStack_14 [2];
  undefined1 auStack_10 [16];
  
  auStack_14[0] = param_3;
  memcpy(auStack_10,auStack_14,param_2);
  iVar6 = 0;
  if (0 < param_2) {
    puVar5 = auStack_10;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 8) + -1;
      *(int *)(*(int *)(param_1 + 0x1c) + 8) = iVar3;
      if (iVar3 < 0) {
        puVar2 = *(undefined4 **)(param_1 + 0x1c);
        if ((int)puVar2[2] < (int)puVar2[6]) {
          uVar4 = maybe___swbuf_r(*puVar5);
        }
        else {
          *(undefined1 *)*puVar2 = *puVar5;
          puVar2 = *(undefined4 **)(param_1 + 0x1c);
          if (*(char *)*puVar2 == '\n') {
            uVar4 = maybe___swbuf_r();
          }
          else {
            pbVar1 = (byte *)*puVar2;
            *puVar2 = pbVar1 + 1;
            uVar4 = (ulong)*pbVar1;
          }
        }
      }
      else {
        *(undefined1 *)**(undefined4 **)(param_1 + 0x1c) = *puVar5;
        pbVar1 = (byte *)**(undefined4 **)(param_1 + 0x1c);
        **(undefined4 **)(param_1 + 0x1c) = pbVar1 + 1;
        uVar4 = (ulong)*pbVar1;
      }
      if (uVar4 == 0xffffffffffffffff) {
        return 0xffffffffffffffff;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < param_2);
  }
  return (ulong)auStack_14[0];
}

// 0x00106120  size 0xa8
ulong maybe_std_filebuf_getc(int param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4) + -1;
  *(int *)(*(int *)(param_1 + 0x1c) + 4) = iVar2;
  if (iVar2 < 0) {
    uVar3 = __srget(*(undefined4 *)(param_1 + 0x1c));
  }
  else {
    pbVar1 = (byte *)**(undefined4 **)(param_1 + 0x1c);
    **(undefined4 **)(param_1 + 0x1c) = pbVar1 + 1;
    uVar3 = (ulong)*pbVar1;
  }
  uVar5 = 0xffffffffffffffff;
  if (uVar3 != 0xffffffffffffffff) {
    if ((param_2 != 0) &&
       (lVar4 = maybe__ungetc_r(uVar3,*(undefined4 *)(param_1 + 0x1c)), lVar4 == -1)) {
      return 0xffffffffffffffff;
    }
    uVar5 = uVar3;
  }
  return uVar5;
}

// 0x001061d0  size 0x114
ulong maybe_std_filebuf_getmb(int param_1,uint param_2,long param_3)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 auStack_11 [16];
  byte bStack_1;
  
  if (param_2 < 0xd) {
    iVar6 = 0;
    if (0 < (int)param_2) {
      puVar5 = auStack_11;
      do {
        puVar5 = puVar5 + 1;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4) + -1;
        *(int *)(*(int *)(param_1 + 0x1c) + 4) = iVar2;
        if (iVar2 < 0) {
          uVar3 = __srget(*(undefined4 *)(param_1 + 0x1c));
        }
        else {
          pbVar1 = (byte *)**(undefined4 **)(param_1 + 0x1c);
          **(undefined4 **)(param_1 + 0x1c) = pbVar1 + 1;
          uVar3 = (ulong)*pbVar1;
        }
        if (uVar3 == 0xffffffffffffffff) {
          return 0xffffffffffffffff;
        }
        *puVar5 = (char)uVar3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_2);
    }
    memcpy(&bStack_1,auStack_11 + 1,param_2);
    if (param_3 == 0) {
LAB_001062b8:
      uVar3 = (ulong)bStack_1;
    }
    else {
      do {
        if ((int)param_2 < 1) goto LAB_001062b8;
        lVar4 = maybe__ungetc_r(auStack_11[param_2],*(undefined4 *)(param_1 + 0x1c));
        uVar3 = 0xffffffffffffffff;
        param_2 = param_2 - 1;
      } while (lVar4 != -1);
    }
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}

// 0x001062f0  size 0x12c
ulong maybe_std_filebuf_putmb(int param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar6;
  byte bStack_11;
  undefined1 auStack_10 [16];
  
  bStack_11 = param_3;
  memcpy(auStack_10,&bStack_11,param_2);
  iVar6 = 0;
  if (0 < param_2) {
    puVar5 = auStack_10;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 8) + -1;
      *(int *)(*(int *)(param_1 + 0x1c) + 8) = iVar3;
      if (iVar3 < 0) {
        puVar2 = *(undefined4 **)(param_1 + 0x1c);
        if ((int)puVar2[2] < (int)puVar2[6]) {
          uVar4 = maybe___swbuf_r(*puVar5);
        }
        else {
          *(undefined1 *)*puVar2 = *puVar5;
          puVar2 = *(undefined4 **)(param_1 + 0x1c);
          if (*(char *)*puVar2 == '\n') {
            uVar4 = maybe___swbuf_r();
          }
          else {
            pbVar1 = (byte *)*puVar2;
            *puVar2 = pbVar1 + 1;
            uVar4 = (ulong)*pbVar1;
          }
        }
      }
      else {
        *(undefined1 *)**(undefined4 **)(param_1 + 0x1c) = *puVar5;
        pbVar1 = (byte *)**(undefined4 **)(param_1 + 0x1c);
        **(undefined4 **)(param_1 + 0x1c) = pbVar1 + 1;
        uVar4 = (ulong)*pbVar1;
      }
      if (uVar4 == 0xffffffffffffffff) {
        return 0xffffffffffffffff;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < param_2);
  }
  return (ulong)bStack_11;
}

// 0x00106420  size 0x1b8
undefined8 maybe_std_ostream_sentry_ctor(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined **ppuStack_10;
  undefined4 uStack_c;
  undefined4 *puStack_8;
  
  puVar4 = (undefined1 *)param_1;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 4) = param_2;
  iVar2 = **(int **)(puVar4 + 4);
  if (*(byte *)(iVar2 + 0x3a) == 0) {
    if (*(int *)(iVar2 + 0x40) == 0) {
      piVar1 = *(int **)(puVar4 + 4);
    }
    else {
      maybe_std_ostream_flush();
      piVar1 = *(int **)(puVar4 + 4);
    }
    iVar2 = *piVar1;
    if (*(char *)(iVar2 + 0x3a) == '\0') {
      *puVar4 = 1;
    }
    else {
      *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 4;
      if (*(int *)(iVar2 + 0x20) == 0) {
        *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 1;
      }
      if ((*(byte *)(iVar2 + 0x3a) & *(byte *)(iVar2 + 0x3b)) != 0) {
        ppuStack_10 = &PTR_PTR_0036de90;
        iVar2 = strlen(0x35e280);
        lVar3 = maybe_operator_new(iVar2 + 1);
        uStack_c = (undefined4)lVar3;
        puStack_8 = (undefined4 *)0x0;
        if (lVar3 != 0) {
          lVar3 = maybe_operator_new_arr(4);
          puStack_8 = (undefined4 *)lVar3;
          if (lVar3 != 0) {
            *puStack_8 = 1;
          }
        }
        maybe_strcpy(uStack_c,0x35e280);
        maybe___throw(0x35e5f0,&ppuStack_10,0x102a60);
      }
    }
  }
  else {
    *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 4;
    if (*(int *)(iVar2 + 0x20) == 0) {
      *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 1;
    }
    if ((*(byte *)(iVar2 + 0x3a) & *(byte *)(iVar2 + 0x3b)) != 0) {
      ppuStack_20 = &PTR_PTR_0036de90;
      iVar2 = strlen(0x35e280);
      lVar3 = maybe_operator_new(iVar2 + 1);
      uStack_1c = (undefined4)lVar3;
      puStack_18 = (undefined4 *)0x0;
      if (lVar3 != 0) {
        lVar3 = maybe_operator_new_arr(4);
        puStack_18 = (undefined4 *)lVar3;
        if (lVar3 != 0) {
          *puStack_18 = 1;
        }
      }
      maybe_strcpy(uStack_1c,0x35e280);
      maybe___throw(0x35e5f0,&ppuStack_20,0x102a60);
    }
  }
  return param_1;
}

// 0x00106644  size 0x58
/* code jumped/branched into from std_ostream_sentry_ctor; shared tail */

void std_ostream_sentry_ctor_Tail1(void)

{
  undefined4 in_v0_lo;
  undefined4 *unaff_s2_lo;
  
  unaff_s2_lo[1] = in_v0_lo;
  maybe_strcpy(*unaff_s2_lo,0x35e280);
  maybe___throw(0x35e5f0);
  return;
}

// 0x00106700  size 0x1b8
undefined8 maybe_std_wostream_sentry_ctor(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined **ppuStack_10;
  undefined4 uStack_c;
  undefined4 *puStack_8;
  
  puVar4 = (undefined1 *)param_1;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 4) = param_2;
  iVar2 = **(int **)(puVar4 + 4);
  if (*(byte *)(iVar2 + 0x3a) == 0) {
    if (*(int *)(iVar2 + 0x40) == 0) {
      piVar1 = *(int **)(puVar4 + 4);
    }
    else {
      maybe_std_wostream_flush();
      piVar1 = *(int **)(puVar4 + 4);
    }
    iVar2 = *piVar1;
    if (*(char *)(iVar2 + 0x3a) == '\0') {
      *puVar4 = 1;
    }
    else {
      *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 4;
      if (*(int *)(iVar2 + 0x20) == 0) {
        *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 1;
      }
      if ((*(byte *)(iVar2 + 0x3a) & *(byte *)(iVar2 + 0x3b)) != 0) {
        ppuStack_10 = &PTR_PTR_0036de90;
        iVar2 = strlen(0x35e280);
        lVar3 = maybe_operator_new(iVar2 + 1);
        uStack_c = (undefined4)lVar3;
        puStack_8 = (undefined4 *)0x0;
        if (lVar3 != 0) {
          lVar3 = maybe_operator_new_arr(4);
          puStack_8 = (undefined4 *)lVar3;
          if (lVar3 != 0) {
            *puStack_8 = 1;
          }
        }
        maybe_strcpy(uStack_c,0x35e280);
        maybe___throw(0x35e5f0,&ppuStack_10,0x102a60);
      }
    }
  }
  else {
    *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 4;
    if (*(int *)(iVar2 + 0x20) == 0) {
      *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) | 1;
    }
    if ((*(byte *)(iVar2 + 0x3a) & *(byte *)(iVar2 + 0x3b)) != 0) {
      ppuStack_20 = &PTR_PTR_0036de90;
      iVar2 = strlen(0x35e280);
      lVar3 = maybe_operator_new(iVar2 + 1);
      uStack_1c = (undefined4)lVar3;
      puStack_18 = (undefined4 *)0x0;
      if (lVar3 != 0) {
        lVar3 = maybe_operator_new_arr(4);
        puStack_18 = (undefined4 *)lVar3;
        if (lVar3 != 0) {
          *puStack_18 = 1;
        }
      }
      maybe_strcpy(uStack_1c,0x35e280);
      maybe___throw(0x35e5f0,&ppuStack_20,0x102a60);
    }
  }
  return param_1;
}

// 0x00106924  size 0x58
/* code jumped/branched into from std_wostream_sentry_ctor; shared tail */

void std_wostream_sentry_ctor_Tail1(void)

{
  undefined4 in_v0_lo;
  undefined4 *unaff_s2_lo;
  
  unaff_s2_lo[1] = in_v0_lo;
  maybe_strcpy(*unaff_s2_lo,0x35e280);
  maybe___throw(0x35e5f0);
  return;
}

// 0x001069e0  size 0x10
int * maybe_VBaseDtorThunkA(int param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + -8 + *(int *)(param_1 + 0x48));
  if (piVar2 != (int *)0x0) {
    piVar2[1] = (int)&PTR_PTR_0036dfa0;
    piVar1 = piVar2 + 2;
    *(undefined ***)*piVar2 = &PTR_PTR_0036dfac;
    *(int *)(*piVar2 + 0x48) = (int)piVar1 - *piVar2;
    if ((param_2 != 0) && (piVar1 != (int *)0x0)) {
      piVar2[2] = (int)&PTR_PTR_0036df88;
      maybe_std_locale_imp_dtor(piVar1,0);
    }
    if (0 < (short)param_2) {
      Mem_Free(piVar2);
    }
  }
  return piVar2;
}

// 0x001069f0  size 0x10
int * maybe_VBaseDtorThunkB(int param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + -0x18 + *(int *)(param_1 + 0x48));
  if (piVar2 != (int *)0x0) {
    piVar2[4] = (int)&PTR_PTR_0036df70;
    piVar1 = piVar2 + 6;
    *(undefined ***)*piVar2 = &PTR_PTR_0036df7c;
    *(int *)(*piVar2 + 0x48) = (int)piVar1 - *piVar2;
    if ((param_2 != 0) && (piVar1 != (int *)0x0)) {
      piVar2[6] = (int)&PTR_PTR_0036df88;
      maybe_std_locale_imp_dtor(piVar1,0);
    }
    if (0 < (short)param_2) {
      Mem_Free(piVar2);
    }
  }
  return piVar2;
}

// 0x00106a00  size 0x10
int * maybe_VBaseDtorThunkC(int param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + -8 + *(int *)(param_1 + 0x48));
  if (piVar2 != (int *)0x0) {
    piVar2[1] = (int)&PTR_PTR_0036ded0;
    piVar1 = piVar2 + 2;
    *(undefined ***)*piVar2 = &PTR_PTR_0036dedc;
    *(int *)(*piVar2 + 0x48) = (int)piVar1 - *piVar2;
    if ((param_2 != 0) && (piVar1 != (int *)0x0)) {
      piVar2[2] = (int)&PTR_PTR_0036deb8;
      maybe_std_locale_imp_dtor(piVar1,0);
    }
    if (0 < (short)param_2) {
      Mem_Free(piVar2);
    }
  }
  return piVar2;
}

// 0x00106a10  size 0x10
int * maybe_VBaseDtorThunkD(int param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + -0x18 + *(int *)(param_1 + 0x48));
  if (piVar2 != (int *)0x0) {
    piVar2[4] = (int)&PTR_PTR_0036dea0;
    piVar1 = piVar2 + 6;
    *(undefined ***)*piVar2 = &PTR_PTR_0036deac;
    *(int *)(*piVar2 + 0x48) = (int)piVar1 - *piVar2;
    if ((param_2 != 0) && (piVar1 != (int *)0x0)) {
      piVar2[6] = (int)&PTR_PTR_0036deb8;
      maybe_std_locale_imp_dtor(piVar1,0);
    }
    if (0 < (short)param_2) {
      Mem_Free(piVar2);
    }
  }
  return piVar2;
}

// 0x00106a20  size 0x45c
/* basic_string out_of_range/length_error */

undefined8
maybe_std_string_replace(undefined8 param_1,uint param_2,uint param_3,int param_4,byte *param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_50;
  uint auStack_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined **ppuStack_20;
  undefined4 auStack_1c [3];
  undefined **ppuStack_10;
  undefined4 auStack_c [2];
  uint uStack_4;
  
  auStack_38[0] = param_3;
  puVar8 = (uint *)param_1;
  bVar2 = (*puVar8 & 1) != 0;
  if (bVar2) {
    pbVar9 = (byte *)puVar8[2];
    uVar3 = puVar8[1];
    uStack_50 = *puVar8 >> 1;
  }
  else {
    uStack_50 = 0xb;
    pbVar9 = (byte *)((int)puVar8 + 1);
    uVar3 = (uint)(byte)((byte)*puVar8 >> 1);
  }
  if (uVar3 < param_2) {
    ppuStack_10 = &PTR_PTR_0036e060;
    iVar5 = strlen(0x35e620);
    uVar7 = maybe_operator_new(iVar5 + 1);
    maybe_std_shared_count_ctor(auStack_c,uVar7);
    maybe_strcpy(auStack_c[0],0x35e620);
    ppuStack_10 = &PTR_PTR_0036e050;
    maybe___throw(0x35e640,&ppuStack_10,0x106fb0);
  }
  uStack_4 = uVar3 - param_2;
  if (uVar3 - param_2 < auStack_38[0]) {
    puVar4 = &uStack_4;
  }
  else {
    puVar4 = auStack_38;
  }
  uVar1 = *puVar4;
  uVar10 = (int)param_5 - param_4;
  if ((0x7ffffffe < uVar10) || (0x7ffffffe - uVar10 < uVar3 - uVar1)) {
    ppuStack_20 = &PTR_PTR_0036e060;
    iVar5 = strlen(0x35e680);
    uVar7 = maybe_operator_new(iVar5 + 1);
    maybe_std_shared_count_ctor(auStack_1c,uVar7);
    maybe_strcpy(auStack_1c[0],0x35e680);
    ppuStack_20 = &PTR_PTR_0036e040;
    maybe___throw(0x35e6a0,&ppuStack_20,0x106f10);
  }
  uVar11 = uVar10 + (uVar3 - uVar1);
  iVar5 = uVar3 - (param_2 + uVar1);
  if (uVar11 < uStack_50) {
    uStack_30 = 0;
    uStack_2c = 0;
    iStack_28 = 0;
    if (((iVar5 != 0) && (pbVar9 + uVar10 + param_2 < param_5)) && (param_5 <= pbVar9 + uVar3)) {
      maybe_std_string_assign(&uStack_30,param_4,param_5,0);
      if ((uStack_30 & 1) == 0) {
        param_4 = (int)&uStack_30 + 1;
      }
      else {
        param_4 = iStack_28;
      }
    }
    if (iVar5 != 0) {
      memmove(pbVar9 + uVar10 + param_2,pbVar9 + uVar1 + param_2,iVar5);
    }
    memmove(pbVar9 + param_2,param_4,uVar10);
    pbVar9[uVar11] = DAT_00306810;
    if (bVar2) {
      puVar8[1] = uVar11;
    }
    else {
      *(byte *)puVar8 = (byte)*puVar8 & 1 | (byte)((uVar11 & 0x7f) << 1);
    }
    if ((uStack_30 & 1) != 0) {
      Mem_Free(iStack_28);
    }
  }
  else {
    for (uVar3 = uStack_50 + 0xf & 0xfffffff0; uVar3 < uVar11 + 1; uVar3 = uVar3 * 2) {
    }
    uVar7 = maybe_operator_new_arr(uVar3);
    uVar6 = (uint)uVar7;
    if (param_2 != 0) {
      memcpy(uVar7,pbVar9,param_2);
    }
    memcpy(uVar6 + param_2,param_4,(int)param_5 - param_4);
    if (iVar5 != 0) {
      memcpy(uVar6 + param_2 + uVar10,pbVar9 + uVar1 + param_2,iVar5);
    }
    *(undefined1 *)(uVar6 + uVar11) = DAT_00306808;
    if (bVar2) {
      Mem_Free(pbVar9);
    }
    else {
      *puVar8 = *puVar8 & 0xfffffffe | 1;
    }
    puVar8[2] = uVar6;
    puVar8[1] = uVar11;
    *puVar8 = *puVar8 & 1 | uVar3 << 1;
  }
  return param_1;
}

// 0x00106e80  size 0x88
long maybe_std_exception_dtor_b(long param_1,short param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)param_1;
    *puVar1 = &PTR_PTR_0036e060;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      maybe_std_shared_count_dtor(puVar1 + 1,0xffffffffffffffff);
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

// 0x00106f10  size 0x98
long maybe_std_out_of_range_dtor(long param_1,short param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)param_1;
    *puVar1 = &PTR_PTR_0036e040;
    if (param_1 != 0) {
      *puVar1 = &PTR_PTR_0036e060;
      if (puVar1 + 1 != (undefined4 *)0x0) {
        maybe_std_shared_count_dtor(puVar1 + 1,0xffffffffffffffff);
      }
      if (param_1 != 0) {
        *puVar1 = &PTR_PTR_0036de70;
      }
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00106fb0  size 0x98
long maybe_std_length_error_dtor(long param_1,short param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)param_1;
    *puVar1 = &PTR_PTR_0036e050;
    if (param_1 != 0) {
      *puVar1 = &PTR_PTR_0036e060;
      if (puVar1 + 1 != (undefined4 *)0x0) {
        maybe_std_shared_count_dtor(puVar1 + 1,0xffffffffffffffff);
      }
      if (param_1 != 0) {
        *puVar1 = &PTR_PTR_0036de70;
      }
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00107050  size 0x70
long maybe_std_string_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    if ((*(uint *)param_1 & 1) != 0) {
      Mem_Free(((uint *)param_1)[2]);
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001070c0  size 0x8
undefined4 Msl_GetField_4_70c0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0x001070d0  size 0x4c
void maybe_std_string_assign(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 uStack_4;
  
  if ((*param_1 & 1) == 0) {
    uVar1 = (uint)(byte)((byte)*param_1 >> 1);
  }
  else {
    uVar1 = param_1[1];
  }
  maybe_std_string_replace(param_1,0,uVar1,param_2,param_3,uStack_4);
  return;
}

// 0x00107120  size 0x24c
/* "basic_string::reserve length_error" */

void std_string_reserve(uint *param_1,uint param_2)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined **ppuStack_10;
  undefined4 uStack_c;
  undefined4 *puStack_8;
  
  if (param_2 < 0x7fffffff) {
    uVar10 = *param_1;
  }
  else {
    ppuStack_10 = &PTR_PTR_0036e060;
    iVar3 = strlen(0x35e790);
    lVar4 = maybe_operator_new(iVar3 + 1);
    uStack_c = (undefined4)lVar4;
    puStack_8 = (undefined4 *)0x0;
    if (lVar4 != 0) {
      lVar4 = maybe_operator_new_arr(4);
      puStack_8 = (undefined4 *)lVar4;
      if (lVar4 != 0) {
        *puStack_8 = 1;
      }
    }
    maybe_strcpy(uStack_c,0x35e790);
    ppuStack_10 = &PTR_PTR_0036e040;
    maybe___throw(0x35e6a0,&ppuStack_10,0x106f10);
    uVar10 = *param_1;
  }
  bVar1 = (uVar10 & 1) != 0;
  if (bVar1) {
    uVar5 = param_1[1];
    uVar7 = (ulong)(uVar10 >> 1);
  }
  else {
    uVar7 = 0xb;
    uVar5 = (uint)(byte)((byte)*param_1 >> 1);
  }
  if (param_2 < uVar5) {
    param_2 = uVar5;
  }
  if (param_2 + 1 < 0xc) {
    uVar8 = 0xb;
  }
  else {
    uVar8 = (long)(int)(param_2 + 0x10) & 0xfffffffffffffff0;
  }
  if (uVar8 != uVar7) {
    if (uVar8 == 0xb) {
      pbVar9 = (byte *)param_1[2];
      pbVar2 = (byte *)((int)param_1 + 1);
      uVar10 = 0;
    }
    else {
      if (uVar7 < uVar8) {
        pbVar2 = (byte *)maybe_operator_new_arr(uVar8);
      }
      else {
        pbVar2 = (byte *)maybe_operator_new_arr(uVar8);
      }
      uVar10 = 1;
      if (bVar1) {
        pbVar9 = (byte *)param_1[2];
      }
      else {
        pbVar9 = (byte *)((int)param_1 + 1);
      }
    }
    memcpy(pbVar2,pbVar9,uVar5);
    pbVar2[uVar5] = 0;
    if (bVar1) {
      Mem_Free(pbVar9);
      uVar6 = *param_1;
    }
    else {
      uVar6 = *param_1;
    }
    *param_1 = uVar6 & 0xfffffffe | uVar10;
    if (uVar10 == 0) {
      *(byte *)param_1 = (byte)*param_1 & 1 | (byte)((uVar5 & 0x7f) << 1);
    }
    else {
      param_1[2] = (uint)pbVar2;
      param_1[1] = uVar5;
      *param_1 = *param_1 & 1 | (int)uVar8 << 1;
    }
  }
  return;
}

// 0x001073a0  size 0x34
/* follows std_string_reserve; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void std_string_reserve_Orphan1(void)

{
  return;
}

// 0x001073d8  size 0x190
/* (mode, inter, omode, ffmode); GS_CSR reset */

void sceGsResetGraph(short param_1,ushort param_2,ushort param_3,ushort param_4)

{
  undefined8 uVar1;
  ushort *puVar2;
  
  if (param_1 == 1) {
    REG_GS_CSR = 0x100;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      puVar2 = (ushort *)sceGsGetGParam();
      REG_GS_CSR = 0x200;
      *puVar2 = param_2;
      uVar1 = REG_GS_CSR;
      puVar2[1] = param_3;
      puVar2[3] = (ushort)((ulong)uVar1 >> 0x10) & 0xff;
      GsPutIMR(0xff00);
      puVar2[2] = (ushort)(param_4 != 0);
      if (*(int *)(puVar2 + 4) != 0) {
        DisableIntc(2);
        RemoveIntcHandler(2,*(undefined4 *)(puVar2 + 6));
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
      }
      SetGsCrt(param_2 & 1,param_3 & 0xff,param_4 & 1);
      return;
    }
  }
  else if (param_1 == 5) {
    puVar2 = (ushort *)sceGsGetGParam();
    uVar1 = REG_GS_CSR;
    puVar2[2] = (ushort)(param_4 != 0);
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[3] = (ushort)((ulong)uVar1 >> 0x10) & 0xff;
    SetGsCrt(param_2 & 1,param_3 & 0xff,param_4 & 1);
    return;
  }
  return;
}

// 0x00107568  size 0xc
undefined * sceGsGetGParam(void)

{
  return &DAT_00306830;
}

// 0x00107578  size 0x68
/* VIF1 FBRST, VU1 reset */

void sceGsResetPath(void)

{
  undefined8 uVar1;
  undefined4 in_vc12;
  
  REG_VIF1_FBRST = 1;
  REG_VIF1_ERR = 2;
  SYNC(0);
  uVar1 = _cfc2(in_vc12);
  _ctc2((uint)uVar1 | 0x200);
  SYNC(0x10);
  REG_VIF1_FIFO = DAT_00306840;
  DAT_10005004 = PTR_DAT_00306844;
  DAT_10005008 = DAT_00306848;
  DAT_1000500c = DAT_0030684c;
  REG_VIF1_FIFO = DAT_00306850;
  DAT_10005004 = DAT_00306854;
  DAT_10005008 = DAT_00306858;
  DAT_1000500c = DAT_0030685c;
  REG_GIF_CTRL = 1;
  return;
}

// 0x001075e0  size 0xa0
/* reads rom0:ROMVER */

uint maybe_Gs_ReadRomVersion(void)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined1 auStack_149 [9];
  char acStack_140 [256];
  
  pcVar4 = acStack_140;
  lVar3 = sceOpen(0x35e7b8,1);
  uVar2 = 0;
  if (lVar3 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (; uVar2 < 0x100; uVar2 = uVar2 + 1) {
      sceRead(lVar3,pcVar4,1);
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      if (cVar1 == '\0') break;
    }
    sceClose(lVar3);
    lVar3 = atoi(auStack_149 + uVar2);
    uVar2 = (uint)(0x1315670 < lVar3);
  }
  return uVar2;
}

// 0x00107680  size 0x10
/* syscall 0x80 */

void maybe_sceGsSyncVBlank(void)

{
  syscall(0x80);
  return;
}

// 0x00107690  size 0x374
void sceGsDefDispEnv(undefined8 *param_1,short param_2,short param_3,short param_4,short param_5,
                    short param_6)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ushort uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar11 = (int)param_4;
  iVar10 = (int)param_3;
  iVar13 = (int)param_5;
  iVar12 = (int)param_6;
  psVar2 = (short *)sceGsGetGParam();
  uVar6 = psVar2[1];
  if (uVar6 - 2 < 2) {
LAB_00107730:
    uStack_84 = 0;
    uStack_88 = 0;
    iStack_8c = 0;
    iStack_90 = 0;
  }
  else {
    lVar4 = maybe_Gs_ReadRomVersion();
    if (lVar4 == 0) {
      uVar6 = psVar2[1];
      goto LAB_00107730;
    }
    maybe_sceGsSyncVBlank
              (psVar2[1],&iStack_90,(uint)&iStack_90 | 4,(uint)&iStack_90 | 8,(uint)&iStack_90 | 0xc
              );
    uVar6 = psVar2[1];
  }
  sVar1 = *psVar2;
  *param_1 = 0x66;
  uVar3 = 2;
  if ((*psVar2 != 0) && (uVar3 = 3, psVar2[2] == 0)) {
    uVar3 = 1;
  }
  param_1[1] = uVar3;
  param_1[2] = ((long)(int)param_2 & 0xfU) << 0xf | ((long)(iVar10 + 0x3f >> 6) & 0x3fU) << 9;
  if (uVar6 == 2) {
    if (sVar1 != 1) {
      if (iVar10 == 0) {
        trap(7);
      }
      lVar4 = (long)iStack_90 + 0x27c;
      iVar12 = iVar12 + iStack_8c + 0x19;
LAB_00107910:
      iVar14 = (iVar10 + 0x9ff) / iVar10;
      param_1[3] = (long)(iVar14 + -1) << 0x17 | (long)(iVar14 * iVar10 + -1) << 0x20 |
                   iVar13 * iVar14 + lVar4 & 0xfffU | (long)(iVar11 + -1) << 0x2c |
                   ((long)iVar12 & 0xfffU) << 0xc;
      goto LAB_001079d8;
    }
    if (iVar10 == 0) {
      trap(7);
    }
    iVar14 = (iVar10 + 0x9ff) / iVar10;
    uVar8 = ((long)(iVar12 + iStack_8c + 0x32) & 0xfffU) << 0xc;
    uVar9 = (long)(iVar14 + -1) << 0x17;
    uVar5 = (long)(iVar14 * iVar10 + -1) << 0x20;
    uVar7 = (long)(iVar13 * iVar14) + (long)iStack_90 + 0x27c & 0xfff;
    if (psVar2[2] == 0) {
LAB_001078c8:
      lVar4 = (long)(iVar11 + -1);
      uVar9 = uVar9 | uVar5;
    }
    else {
      uVar9 = uVar9 | uVar5;
      lVar4 = (long)(iVar11 * 2 + -1);
    }
  }
  else {
    if (uVar6 != 3) {
      if (uVar6 == 0x50) {
        param_1[3] = (long)(iVar11 + -1) << 0x2c | (long)(iVar10 * 2 + -1) << 0x20 |
                     (long)((0x2d0 - iVar10) / 2 << 1) + (long)iStack_90 +
                     (long)(iVar13 << 1) + 0xe8 & 0xfffU | 0x800000 |
                     ((long)(iVar12 + iStack_8c + 0x23) & 0xfffU) << 0xc;
      }
      else {
        maybe_scePrintf(0x35e7c8);
      }
      goto LAB_001079d8;
    }
    if (sVar1 != 1) {
      if (iVar10 == 0) {
        trap(7);
      }
      lVar4 = (long)iStack_90 + 0x290;
      iVar12 = iVar12 + iStack_8c + 0x24;
      goto LAB_00107910;
    }
    if (iVar10 == 0) {
      trap(7);
    }
    iVar14 = (iVar10 + 0x9ff) / iVar10;
    uVar8 = ((long)(iVar12 + iStack_8c + 0x48) & 0xfffU) << 0xc;
    uVar9 = (long)(iVar14 + -1) << 0x17;
    uVar5 = (long)(iVar14 * iVar10 + -1) << 0x20;
    uVar7 = (long)(iVar13 * iVar14) + (long)iStack_90 + 0x290 & 0xfff;
    if (psVar2[2] == 0) goto LAB_001078c8;
    uVar9 = uVar9 | uVar5;
    lVar4 = (long)(iVar11 * 2 + -1);
  }
  param_1[3] = uVar9 | uVar7 | lVar4 << 0x2c | uVar8;
LAB_001079d8:
  param_1[4] = 0;
  return;
}

// 0x00107a08  size 0xc8
int maybe_sceGsSetDefDrawEnvOffset(ulong param_1,short param_2,short param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  puVar1 = (ulong *)sceGsGetGParam();
  iVar2 = param_2 + 0x3f;
  iVar3 = param_2 + 0x7e;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if ((param_1 & 2) == 0) {
    iVar2 = iVar4 + 0x3e;
    if (-1 < iVar4 + 0x1f) {
      iVar2 = iVar4 + 0x1f;
    }
    iVar2 = iVar2 >> 5;
  }
  else {
    iVar2 = iVar4 + 0x7e;
    if (-1 < iVar4 + 0x3f) {
      iVar2 = iVar4 + 0x3f;
    }
    iVar2 = iVar2 >> 6;
  }
  iVar2 = (iVar3 >> 6) * iVar2;
  if ((*puVar1 & 0xffff0000ffff) == 1) {
    iVar2 = iVar2 * 0x10000;
  }
  else {
    iVar2 = iVar2 * 0x20000;
  }
  return iVar2 >> 0x10;
}

// 0x00107ad0  size 0x1e4
undefined4
sceGsSetDefDrawEnv(ulong *param_1,short param_2,short param_3,short param_4,short param_5,
                  short param_6)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar4 = (int)param_3;
  uVar5 = (ulong)(int)param_2;
  iVar3 = (int)param_4;
  uVar6 = (ulong)(int)param_5;
  param_1[1] = 0x4c;
  *param_1 = ((long)(iVar4 + 0x3f >> 6) & 0x3fU) << 0x10 | (uVar5 & 0xf) << 0x18;
  param_1[3] = 0x4e;
  if (uVar6 == 0) {
    sVar1 = maybe_sceGsSetDefDrawEnvOffset(uVar5,iVar4,iVar3);
    uVar2 = (long)sVar1 | ((long)(int)param_6 & 0xfU) << 0x18 | 0x100000000;
  }
  else {
    sVar1 = maybe_sceGsSetDefDrawEnvOffset(uVar5,iVar4,iVar3);
    uVar2 = (long)sVar1 | ((long)(int)param_6 & 0xfU) << 0x18;
  }
  param_1[2] = uVar2;
  param_1[5] = 0x18;
  param_1[4] = (0x800 - (long)(param_3 >> 1)) * 0x10 | 0x800 - (long)(param_4 >> 1) << 0x24;
  param_1[7] = 0x40;
  param_1[6] = (long)(iVar4 + -1) << 0x10 | (long)(iVar3 + -1) << 0x30;
  param_1[9] = 0x1a;
  param_1[8] = param_1[8] | 1;
  param_1[0xb] = 0x46;
  param_1[10] = param_1[10] | 1;
  param_1[0xd] = 0x45;
  if ((uVar5 & 2) == 0) {
    uVar5 = param_1[0xc] & 0xfffffffffffffffe;
  }
  else {
    uVar5 = param_1[0xc] | 1;
  }
  param_1[0xc] = uVar5;
  param_1[0xf] = 0x47;
  if (uVar6 == 0) {
    uVar5 = 0x30000;
  }
  else {
    uVar5 = (uVar6 & 3) << 0x11 | 0x10000;
  }
  param_1[0xe] = uVar5;
  SYNC(0);
  return 8;
}

// 0x00107cb8  size 0x104
undefined4
sceGsSetDefClear(undefined8 *param_1,short param_2,short param_3,short param_4,short param_5,
                short param_6,ulong param_7,ulong param_8,byte param_9,byte param_10,uint param_11)

{
  param_1[2] = 6;
  param_1[5] = 1;
  param_1[4] = param_7 & 0xff | 0x3f80000000000000 | (ulong)param_9 << 0x10 | (param_8 & 0xff) << 8
               | (ulong)param_10 << 0x18;
  param_1[6] = (long)((int)param_3 << 4) | (long)((int)param_4 << 4) << 0x10 |
               (ulong)param_11 << 0x20;
  param_1[9] = 5;
  param_1[8] = (long)(((int)param_3 + (int)param_5) * 0x10) |
               (long)(((int)param_4 + (int)param_6) * 0x10) << 0x10 | (ulong)param_11 << 0x20;
  param_1[0xb] = 0x47;
  param_1[1] = 0x47;
  *param_1 = 0x30000;
  param_1[3] = 0;
  param_1[7] = 5;
  if ((long)(int)param_2 == 0) {
    param_1[10] = 0x30000;
  }
  else {
    param_1[10] = ((long)(int)param_2 & 3U) << 0x11 | 0x10000;
  }
  SYNC(0);
  return 6;
}

// 0x00107dc0  size 0xe8
undefined4 sceGsPutDrawEnv(undefined8 *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = REG_DMAC_2_GIF_CHCR;
  uVar3 = 0;
  while( true ) {
    if ((uVar2 & 0x100) == 0) {
      REG_DMAC_2_GIF_QWC = ((uint)*param_1 & 0x7fff) + 1;
      if (((uint)param_1 & 0x70000000) == 0x70000000) {
        uVar2 = (uint)param_1 & 0xfffffff | 0x80000000;
      }
      else {
        uVar2 = (uint)param_1 & 0xfffffff;
      }
      REG_DMAC_2_GIF_MADR = uVar2;
      REG_DMAC_2_GIF_CHCR = 0x101;
      return 0;
    }
    bVar1 = 0x1000000 < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar1) break;
    uVar2 = REG_DMAC_2_GIF_CHCR;
  }
  maybe_scePrintf(0x35e800);
  return 0xffffffff;
}

// 0x00107ea8  size 0x298
/* calls sceGsDefDispEnv + DrawEnv + Clear */

void sceGsSetDefDBuff(undefined8 param_1,undefined2 param_2,int param_3,int param_4,
                     undefined2 param_5,undefined2 param_6,short param_7)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = (ulong *)sceGsGetGParam();
  iVar6 = (param_3 << 0x10) >> 0x10;
  iVar7 = (param_4 << 0x10) >> 0x10;
  sceGsDefDispEnv(param_1,param_2,iVar6,iVar7,0,0);
  iVar5 = (int)param_1;
  sceGsDefDispEnv(iVar5 + 0x28,param_2,iVar6,iVar7,0,0);
  sceGsSetDefDrawEnv(iVar5 + 0x60,param_2,iVar6,iVar7,param_5,param_6);
  sceGsSetDefDrawEnv(iVar5 + 0x150,param_2,iVar6,iVar7,param_5,param_6);
  if (param_7 != 0) {
    iVar4 = 0x800 - ((param_4 << 0x10) >> 0x11);
    iVar3 = 0x800 - ((param_3 << 0x10) >> 0x11);
    sceGsSetDefClear(iVar5 + 0xe0,param_5,iVar3,iVar4,iVar6,iVar7,0,0);
    sceGsSetDefClear(iVar5 + 0x1d0,param_5,iVar3,iVar4,iVar6,iVar7,0,0);
  }
  *(undefined4 *)(iVar5 + 0x50) = 0;
  *(undefined4 *)(iVar5 + 0x54) = 0;
  *(undefined4 *)(iVar5 + 0x58) = 0;
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  *(undefined4 *)(iVar5 + 0x140) = 0;
  *(undefined4 *)(iVar5 + 0x144) = 0;
  *(undefined4 *)(iVar5 + 0x148) = 0;
  *(undefined4 *)(iVar5 + 0x14c) = 0;
  uVar2 = 8;
  if (param_7 != 0) {
    uVar2 = 0xe;
  }
  *(ulong *)(iVar5 + 0x50) =
       *(ulong *)(iVar5 + 0x50) & 0xfffffffffff8000 | uVar2 | 0x1000000000008000;
  *(ulong *)(iVar5 + 0x140) =
       *(ulong *)(iVar5 + 0x140) & 0xfffffffffff8000 | uVar2 | 0x1000000000008000;
  *(ulong *)(iVar5 + 0x58) = *(ulong *)(iVar5 + 0x58) & 0xfffffffffffffff0 | 0xe;
  *(ulong *)(iVar5 + 0x148) = *(ulong *)(iVar5 + 0x148) & 0xfffffffffffffff0 | 0xe;
  iVar6 = maybe_sceGsSetDefDrawEnvOffset(param_2,iVar6,iVar7);
  if (((*puVar1 & 0xffff0000ffff) == 0x100000001) || ((short)*puVar1 == 0)) {
    *(ulong *)(iVar5 + 0x60) =
         *(ulong *)(iVar5 + 0x60) & 0xfffffffffffffe00 | (long)(iVar6 >> 1) & 0x1ffU;
    *(ulong *)(iVar5 + 0x38) =
         *(ulong *)(iVar5 + 0x38) & 0xfffffffffffffe00 | (long)(int)(short)(iVar6 >> 1) & 0x1ffU;
  }
  return;
}

