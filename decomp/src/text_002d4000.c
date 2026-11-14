// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002d4000 - 0x002d8000
#include "ghidra_types.h"

// 0x002d40e0  size 0x200
int FUN_002d40e0(short *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  
  sVar4 = *param_1;
  sVar5 = *param_2;
  iVar6 = FUN_001c1890(uRam0036f828);
  uVar3 = FUN_001d20f0(iVar6 + sVar4 * 0xcc);
  iVar6 = FUN_00205530(uVar3);
  cVar1 = *(char *)(iVar6 + 0x3c);
  iVar6 = FUN_001c1890(uRam0036f828);
  uVar3 = FUN_001d20f0(iVar6 + sVar5 * 0xcc);
  iVar6 = FUN_00205530(uVar3);
  iVar6 = (uint)(*(char *)(iVar6 + 0x3c) == '\x04') - (uint)(cVar1 == '\x04');
  if (iVar6 == 0) {
    sVar4 = *param_1;
    sVar5 = *param_2;
    iVar6 = FUN_001c1890(uRam0036f828);
    uVar3 = FUN_001d20f0(iVar6 + sVar5 * 0xcc);
    iVar6 = FUN_00205530(uVar3);
    cVar1 = *(char *)(iVar6 + 0x28);
    iVar6 = FUN_001c1890(uRam0036f828);
    uVar3 = FUN_001d20f0(iVar6 + sVar4 * 0xcc);
    iVar6 = FUN_00205530(uVar3);
    iVar6 = (int)*(char *)(iVar6 + 0x28) - (int)cVar1;
    if (iVar6 == 0) {
      uVar8 = FUN_001c1890(uRam0036f828);
      psVar7 = (short *)FUN_001bc600(uVar8,sVar4);
      sVar2 = *psVar7;
      uVar8 = FUN_001c1890(uRam0036f828);
      psVar7 = (short *)FUN_001bc600(uVar8,sVar5);
      iVar6 = (int)sVar2 - (int)*psVar7;
      if (iVar6 == 0) {
        uVar8 = FUN_001c1890(uRam0036f828);
        uVar8 = FUN_001bc600(uVar8,sVar4);
        sVar4 = FUN_001d3010(uVar8);
        uVar8 = FUN_001c1890(uRam0036f828);
        uVar8 = FUN_001bc600(uVar8,sVar5);
        sVar5 = FUN_001d3010(uVar8);
        iVar6 = (int)sVar4 - (int)sVar5;
      }
    }
  }
  return iVar6;
}

// 0x002d42e0  size 0x200
int FUN_002d42e0(short *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  
  sVar4 = *param_1;
  sVar5 = *param_2;
  iVar6 = FUN_001c1890(uRam0036f828);
  uVar3 = FUN_001d20f0(iVar6 + sVar4 * 0xcc);
  iVar6 = FUN_00205530(uVar3);
  cVar1 = *(char *)(iVar6 + 0x3c);
  iVar6 = FUN_001c1890(uRam0036f828);
  uVar3 = FUN_001d20f0(iVar6 + sVar5 * 0xcc);
  iVar6 = FUN_00205530(uVar3);
  iVar6 = (uint)(*(char *)(iVar6 + 0x3c) == '\x02') - (uint)(cVar1 == '\x02');
  if (iVar6 == 0) {
    sVar4 = *param_1;
    sVar5 = *param_2;
    iVar6 = FUN_001c1890(uRam0036f828);
    uVar3 = FUN_001d20f0(iVar6 + sVar5 * 0xcc);
    iVar6 = FUN_00205530(uVar3);
    cVar1 = *(char *)(iVar6 + 0x28);
    iVar6 = FUN_001c1890(uRam0036f828);
    uVar3 = FUN_001d20f0(iVar6 + sVar4 * 0xcc);
    iVar6 = FUN_00205530(uVar3);
    iVar6 = (int)*(char *)(iVar6 + 0x28) - (int)cVar1;
    if (iVar6 == 0) {
      uVar8 = FUN_001c1890(uRam0036f828);
      psVar7 = (short *)FUN_001bc600(uVar8,sVar4);
      sVar2 = *psVar7;
      uVar8 = FUN_001c1890(uRam0036f828);
      psVar7 = (short *)FUN_001bc600(uVar8,sVar5);
      iVar6 = (int)sVar2 - (int)*psVar7;
      if (iVar6 == 0) {
        uVar8 = FUN_001c1890(uRam0036f828);
        uVar8 = FUN_001bc600(uVar8,sVar4);
        sVar4 = FUN_001d3010(uVar8);
        uVar8 = FUN_001c1890(uRam0036f828);
        uVar8 = FUN_001bc600(uVar8,sVar5);
        sVar5 = FUN_001d3010(uVar8);
        iVar6 = (int)sVar4 - (int)sVar5;
      }
    }
  }
  return iVar6;
}

// 0x002d44e0  size 0x200
int FUN_002d44e0(short *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  
  sVar4 = *param_1;
  sVar5 = *param_2;
  iVar6 = FUN_001c1890(uRam0036f828);
  uVar3 = FUN_001d20f0(iVar6 + sVar4 * 0xcc);
  iVar6 = FUN_00205530(uVar3);
  cVar1 = *(char *)(iVar6 + 0x3c);
  iVar6 = FUN_001c1890(uRam0036f828);
  uVar3 = FUN_001d20f0(iVar6 + sVar5 * 0xcc);
  iVar6 = FUN_00205530(uVar3);
  iVar6 = (uint)(*(char *)(iVar6 + 0x3c) == '\x01') - (uint)(cVar1 == '\x01');
  if (iVar6 == 0) {
    sVar4 = *param_1;
    sVar5 = *param_2;
    iVar6 = FUN_001c1890(uRam0036f828);
    uVar3 = FUN_001d20f0(iVar6 + sVar5 * 0xcc);
    iVar6 = FUN_00205530(uVar3);
    cVar1 = *(char *)(iVar6 + 0x28);
    iVar6 = FUN_001c1890(uRam0036f828);
    uVar3 = FUN_001d20f0(iVar6 + sVar4 * 0xcc);
    iVar6 = FUN_00205530(uVar3);
    iVar6 = (int)*(char *)(iVar6 + 0x28) - (int)cVar1;
    if (iVar6 == 0) {
      uVar8 = FUN_001c1890(uRam0036f828);
      psVar7 = (short *)FUN_001bc600(uVar8,sVar4);
      sVar2 = *psVar7;
      uVar8 = FUN_001c1890(uRam0036f828);
      psVar7 = (short *)FUN_001bc600(uVar8,sVar5);
      iVar6 = (int)sVar2 - (int)*psVar7;
      if (iVar6 == 0) {
        uVar8 = FUN_001c1890(uRam0036f828);
        uVar8 = FUN_001bc600(uVar8,sVar4);
        sVar4 = FUN_001d3010(uVar8);
        uVar8 = FUN_001c1890(uRam0036f828);
        uVar8 = FUN_001bc600(uVar8,sVar5);
        sVar5 = FUN_001d3010(uVar8);
        iVar6 = (int)sVar4 - (int)sVar5;
      }
    }
  }
  return iVar6;
}

// 0x002d46e0  size 0x200
int FUN_002d46e0(short *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  
  sVar4 = *param_1;
  sVar5 = *param_2;
  iVar6 = FUN_001c1890(uRam0036f828);
  uVar3 = FUN_001d20f0(iVar6 + sVar4 * 0xcc);
  iVar6 = FUN_00205530(uVar3);
  cVar1 = *(char *)(iVar6 + 0x3c);
  iVar6 = FUN_001c1890(uRam0036f828);
  uVar3 = FUN_001d20f0(iVar6 + sVar5 * 0xcc);
  iVar6 = FUN_00205530(uVar3);
  iVar6 = (uint)(*(char *)(iVar6 + 0x3c) == '\0') - (uint)(cVar1 == '\0');
  if (iVar6 == 0) {
    sVar4 = *param_1;
    sVar5 = *param_2;
    iVar6 = FUN_001c1890(uRam0036f828);
    uVar3 = FUN_001d20f0(iVar6 + sVar5 * 0xcc);
    iVar6 = FUN_00205530(uVar3);
    cVar1 = *(char *)(iVar6 + 0x28);
    iVar6 = FUN_001c1890(uRam0036f828);
    uVar3 = FUN_001d20f0(iVar6 + sVar4 * 0xcc);
    iVar6 = FUN_00205530(uVar3);
    iVar6 = (int)*(char *)(iVar6 + 0x28) - (int)cVar1;
    if (iVar6 == 0) {
      uVar8 = FUN_001c1890(uRam0036f828);
      psVar7 = (short *)FUN_001bc600(uVar8,sVar4);
      sVar2 = *psVar7;
      uVar8 = FUN_001c1890(uRam0036f828);
      psVar7 = (short *)FUN_001bc600(uVar8,sVar5);
      iVar6 = (int)sVar2 - (int)*psVar7;
      if (iVar6 == 0) {
        uVar8 = FUN_001c1890(uRam0036f828);
        uVar8 = FUN_001bc600(uVar8,sVar4);
        sVar4 = FUN_001d3010(uVar8);
        uVar8 = FUN_001c1890(uRam0036f828);
        uVar8 = FUN_001bc600(uVar8,sVar5);
        sVar5 = FUN_001d3010(uVar8);
        iVar6 = (int)sVar4 - (int)sVar5;
      }
    }
  }
  return iVar6;
}

// 0x002d48e0  size 0x54
void FUN_002d48e0(uint param_1)

{
  int iVar1;
  
  iVar1 = iGpffff9144 + (param_1 & 0xff) * 0x14;
  if (*(int *)(iVar1 + 0x14) != 0) {
    Mem_Free();
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}

// 0x002d4940  size 0xa8
void FUN_002d4940(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = iGpffff9144 + (param_1 & 0xff) * 0x14;
  *(int *)(iVar1 + 0xc) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  uVar2 = Mem_Alloc16(param_2 * 0x1c,*(undefined4 *)(iVar1 + 8));
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  iVar5 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    iVar4 = 0;
    do {
      puVar3 = (undefined1 *)(*(int *)(iVar1 + 0x14) + iVar4);
      *puVar3 = *(undefined1 *)(iVar1 + 4);
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined4 *)(puVar3 + 8) = 0xffffffff;
      *(int *)(puVar3 + 0xc) = iVar5;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x1c;
    } while (iVar5 < *(int *)(iVar1 + 0xc));
  }
  return;
}

// 0x002d49f0  size 0xe4
undefined4 FUN_002d49f0(byte param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = iGpffff9144 + (uint)param_1 * 0x14;
  if ((param_2 < 0) || (*(int *)(iVar2 + 0xc) <= param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x14) + param_2 * 0x1c;
  }
  uVar3 = 0;
  if ((iVar2 != 0) && (cVar1 = FUN_002d5e40(iVar2), cVar1 != '\x01')) {
    if (param_1 == 7) {
      uVar3 = *(undefined4 *)(iVar2 + 0x10);
    }
    else if (param_1 == 6) {
      uVar3 = *(undefined4 *)(iVar2 + 0x10);
    }
    else if (param_1 == 5) {
      uVar3 = *(undefined4 *)(iVar2 + 0x10);
    }
    else if (param_1 == 4) {
      uVar3 = *(undefined4 *)(iVar2 + 0x10);
    }
    else if (param_1 == 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x10);
    }
  }
  return uVar3;
}

// 0x002d4ae0  size 0x250
void FUN_002d4ae0(ulong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_1 & 0xff) == 8) {
    uVar6 = 0;
    do {
      if ((uVar6 & 0xff) == 8) {
        uVar5 = 0;
        do {
          uVar4 = uVar5 & 0xff;
          if (uVar4 == 8) {
            uVar4 = 0;
            do {
              uVar2 = uVar4 & 0xff;
              if (uVar2 == 8) {
                uVar2 = 0;
                do {
                  FUN_002d4ae0(uVar2 & 0xff);
                  uVar2 = uVar2 + 1;
                } while ((int)uVar2 < 8);
              }
              else {
                iVar1 = iGpffff9144 + uVar2 * 0x14;
                iVar3 = 0;
                if (0 < *(int *)(iVar1 + 0xc)) {
                  do {
                    FUN_002d4d40(uVar2,iVar3,0,0);
                    iVar3 = iVar3 + 1;
                  } while (iVar3 < *(int *)(iVar1 + 0xc));
                }
              }
              uVar4 = uVar4 + 1;
            } while ((int)uVar4 < 8);
          }
          else {
            iVar1 = iGpffff9144 + uVar4 * 0x14;
            iVar3 = 0;
            if (0 < *(int *)(iVar1 + 0xc)) {
              do {
                FUN_002d4d40(uVar4,iVar3,0,0);
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(iVar1 + 0xc));
            }
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 8);
      }
      else {
        iVar1 = iGpffff9144 + (uVar6 & 0xff) * 0x14;
        iVar3 = 0;
        if (0 < *(int *)(iVar1 + 0xc)) {
          do {
            FUN_002d4d40(uVar6 & 0xff,iVar3,0,0);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar1 + 0xc));
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 8);
  }
  else {
    iVar1 = iGpffff9144 + (int)(param_1 & 0xff) * 0x14;
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        FUN_002d4d40(param_1,iVar3,0,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0xc));
    }
  }
  return;
}

// 0x002d4d40  size 0x1e0
void FUN_002d4d40(byte param_1,int param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = iGpffff9144 + (uint)param_1 * 0x14;
  if ((param_2 < 0) || (*(int *)(iVar2 + 0xc) <= param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x14) + param_2 * 0x1c;
  }
  if (((iVar2 != 0) && (cVar1 = FUN_002d5e40(iVar2), cVar1 != '\x01')) &&
     (*(int *)(iVar2 + 4) = (int)param_3, param_3 != 0)) {
    switch(param_1) {
    case 0:
      maybe_Mem_CopyQwords(*(int *)(iVar2 + 0x10) + 0x110,param_4,0x3f0);
      FUN_0019cde0(*(undefined4 *)(iVar2 + 0x10),0,0);
      FUN_0019cde0(*(undefined4 *)(iVar2 + 0x10),1,0);
      FUN_0019cd80(*(undefined4 *)(iVar2 + 0x10),0,0);
      FUN_0019cd80(*(undefined4 *)(iVar2 + 0x10),1,0);
      break;
    case 1:
      maybe_Mem_CopyQwords(iVar2 + 0x14,param_4,8);
      break;
    case 2:
      maybe_Mem_CopyQwords(iVar2 + 0x14,param_4,8);
      break;
    case 3:
      break;
    case 4:
      maybe_Mem_CopyQwords(*(int *)(iVar2 + 0x10) + 0x10,param_4,0x30);
      break;
    case 5:
      maybe_Mem_CopyQwords(*(int *)(iVar2 + 0x10) + 0x10,param_4,0x30);
      break;
    case 6:
      maybe_Mem_CopyQwords(*(int *)(iVar2 + 0x10) + 0x90,param_4,0x20);
      break;
    case 7:
      maybe_Mem_CopyQwords(*(int *)(iVar2 + 0x10) + 0x50,param_4,0x30);
      break;
    default:
      goto switchD_002d4df8_default;
    }
  }
switchD_002d4df8_default:
  return;
}

// 0x002d4f20  size 0x7c
undefined8 FUN_002d4f20(uint param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = iGpffff9144 + (param_1 & 0xff) * 0x14;
  if ((param_2 < 0) || (*(int *)(iVar1 + 0xc) <= param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x14) + param_2 * 0x1c;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_002d5e40();
  }
  return uVar2;
}

// 0x002d4fa0  size 0x258
undefined4 FUN_002d4fa0(uint param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  
  iVar9 = 0;
  iVar3 = iGpffff9144 + (param_1 & 0xff) * 0x14;
  iVar6 = *(int *)(iVar3 + 0xc);
  if (0 < iVar6) {
    iVar7 = 0;
    do {
      if ((iVar9 < 0) || (iVar6 <= iVar9)) {
        pcVar10 = (char *)0x0;
      }
      else {
        pcVar10 = (char *)(*(int *)(iVar3 + 0x14) + iVar7);
      }
      if (param_2 == *(int *)(pcVar10 + 8)) {
        if (param_2 < 0) goto LAB_002d51a8;
        cVar2 = FUN_002d5e40(pcVar10);
        if (cVar2 == '\x01') {
          bVar1 = false;
        }
        else {
          iVar6 = *(int *)(pcVar10 + 8);
          iVar8 = 0;
          cVar2 = FUN_002d5e40(pcVar10);
          if (cVar2 != '\x01') {
            cVar2 = *pcVar10;
            if (cVar2 == '\x02') {
              iVar8 = *(int *)(pcVar10 + 0x10) + 0x2c;
            }
            else if (cVar2 == '\x01') {
              iVar8 = *(int *)(pcVar10 + 0x10) + 0x2c;
            }
            else if (cVar2 == '\0') {
              iVar8 = *(int *)(pcVar10 + 0x10) + 0xc;
            }
          }
          cVar2 = *pcVar10;
          if (iVar6 == param_2) {
            if (cVar2 == '\x02') {
              lVar5 = FUN_00132590(iVar8,param_3,0x20);
              if (lVar5 == 0) goto LAB_002d5180;
              bVar1 = false;
            }
            else if (cVar2 == '\x01') {
              lVar5 = FUN_00132590(iVar8,param_3,0x20);
              if (lVar5 == 0) goto LAB_002d5180;
              bVar1 = false;
            }
            else if ((cVar2 == '\0') && (lVar5 = FUN_00132590(iVar8,param_3,0x100), lVar5 != 0)) {
              bVar1 = false;
            }
            else {
LAB_002d5180:
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        if (bVar1) goto LAB_002d51a8;
      }
      iVar6 = *(int *)(iVar3 + 0xc);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0x1c;
    } while (iVar9 < iVar6);
  }
  pcVar10 = (char *)0x0;
LAB_002d51a8:
  if (pcVar10 == (char *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(pcVar10 + 0xc);
  }
  return uVar4;
}

// 0x002d5210  size 0x20
void FUN_002d5210(uint param_1)

{
  FUN_002d53b0(iGpffff9144 + (param_1 & 0xff) * 0x14 + 4);
  return;
}

// 0x002d5230  size 0x2c
void FUN_002d5230(void)

{
  if (iGpffff9144 != 0) {
    Mem_Free();
    iGpffff9144 = 0;
  }
  return;
}

// 0x002d5260  size 0x110
void FUN_002d5260(undefined8 param_1)

{
  undefined4 uVar1;
  
  puGpffff9144 = (undefined4 *)Mem_Alloc16(0xa4,param_1);
  uVar1 = (undefined4)param_1;
  *puGpffff9144 = uVar1;
  *(undefined1 *)(puGpffff9144 + 1) = 0;
  puGpffff9144[2] = uVar1;
  puGpffff9144[3] = 0;
  puGpffff9144[4] = 0;
  puGpffff9144[5] = 0;
  *(undefined1 *)(puGpffff9144 + 6) = 1;
  puGpffff9144[7] = uVar1;
  puGpffff9144[8] = 0;
  puGpffff9144[9] = 0;
  puGpffff9144[10] = 0;
  *(undefined1 *)(puGpffff9144 + 0xb) = 2;
  puGpffff9144[0xc] = uVar1;
  puGpffff9144[0xd] = 0;
  puGpffff9144[0xe] = 0;
  puGpffff9144[0xf] = 0;
  *(undefined1 *)(puGpffff9144 + 0x10) = 3;
  puGpffff9144[0x11] = uVar1;
  puGpffff9144[0x12] = 0;
  puGpffff9144[0x13] = 0;
  puGpffff9144[0x14] = 0;
  *(undefined1 *)(puGpffff9144 + 0x15) = 4;
  puGpffff9144[0x16] = uVar1;
  puGpffff9144[0x17] = 0;
  puGpffff9144[0x18] = 0;
  puGpffff9144[0x19] = 0;
  *(undefined1 *)(puGpffff9144 + 0x1a) = 5;
  puGpffff9144[0x1b] = uVar1;
  puGpffff9144[0x1c] = 0;
  puGpffff9144[0x1d] = 0;
  puGpffff9144[0x1e] = 0;
  *(undefined1 *)(puGpffff9144 + 0x1f) = 6;
  puGpffff9144[0x20] = uVar1;
  puGpffff9144[0x21] = 0;
  puGpffff9144[0x22] = 0;
  puGpffff9144[0x23] = 0;
  *(undefined1 *)(puGpffff9144 + 0x24) = 7;
  puGpffff9144[0x25] = uVar1;
  puGpffff9144[0x26] = 0;
  puGpffff9144[0x27] = 0;
  puGpffff9144[0x28] = 0;
  return;
}

// 0x002d5370  size 0x40
int FUN_002d5370(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 8) <= param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10) + param_2 * 0x1c;
  }
  return iVar1;
}

// 0x002d53b0  size 0x82c
void FUN_002d53b0(char *param_1,uint param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  int *piVar16;
  int iStack_a0;
  int *piStack_90;
  int iStack_80;
  int iStack_70;
  int *piStack_60;
  int aiStack_50 [20];
  
  uVar12 = param_2;
  switch(*param_1) {
  case '\0':
    uVar12 = uRam00430570;
    if (param_2 <= uRam00430570) {
      uVar12 = param_2;
    }
    iVar14 = *(int *)(param_1 + 8);
    goto LAB_002d54b4;
  case '\x01':
    uVar12 = uRam004364c8;
    if (param_2 <= uRam004364c8) {
      uVar12 = param_2;
    }
    break;
  case '\x02':
    uVar12 = uRam004364d0;
    if (param_2 <= uRam004364d0) {
      uVar12 = param_2;
    }
    break;
  case '\x04':
    uVar12 = uRam00430580;
    if (param_2 <= uRam00430580) {
      uVar12 = param_2;
    }
    break;
  case '\x05':
    uVar12 = uRam00430578;
    if (param_2 <= uRam00430578) {
      uVar12 = param_2;
    }
    break;
  case '\x06':
    uVar12 = uRam0046a19c;
    if (param_2 <= uRam0046a19c) {
      uVar12 = param_2;
    }
    break;
  case '\a':
    uVar12 = uRam0046a23c;
    if (param_2 <= uRam0046a23c) {
      uVar12 = param_2;
    }
  }
  iVar14 = *(int *)(param_1 + 8);
LAB_002d54b4:
  iVar9 = 0;
  if (0 < iVar14) {
    piVar7 = aiStack_50;
    piVar8 = param_3;
    do {
      if (iVar9 < (int)uVar12) {
        *piVar7 = *piVar8;
      }
      else {
        *piVar7 = -1;
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 0x41;
      piVar7 = piVar7 + 1;
    } while (iVar9 < *(int *)(param_1 + 8));
  }
  iVar14 = 0;
  if (0 < (int)uVar12) {
    piVar7 = aiStack_50;
    piVar8 = param_3;
    do {
      iVar9 = iVar14 + 1;
      if (iVar9 < (int)uVar12) {
        piVar16 = aiStack_50 + iVar9;
        piVar13 = param_3 + iVar9 * 0x41;
        do {
          if (*piVar7 == *piVar16) {
            cVar3 = *param_1;
            if (*piVar8 == *piVar13) {
              if (cVar3 == '\x02') {
                lVar5 = FUN_00132590(piVar8 + 1,piVar13 + 1,0x20);
                if (lVar5 == 0) goto LAB_002d5608;
                bVar1 = false;
              }
              else if (cVar3 == '\x01') {
                lVar5 = FUN_00132590(piVar8 + 1,piVar13 + 1,0x20);
                if (lVar5 == 0) goto LAB_002d5608;
                bVar1 = false;
              }
              else if ((cVar3 == '\0') &&
                      (lVar5 = FUN_00132590(piVar8 + 1,piVar13 + 1,0x100), lVar5 != 0)) {
                bVar1 = false;
              }
              else {
LAB_002d5608:
                bVar1 = true;
              }
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              *piVar16 = -1;
            }
          }
          iVar9 = iVar9 + 1;
          piVar16 = piVar16 + 1;
          piVar13 = piVar13 + 0x41;
        } while (iVar9 < (int)uVar12);
      }
      iVar14 = iVar14 + 1;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 0x41;
    } while (iVar14 < (int)uVar12);
  }
  iVar14 = *(int *)(param_1 + 8);
  iStack_70 = 0;
  if (0 < iVar14) {
    iStack_a0 = 0;
    do {
      if ((iStack_70 < 0) || (iVar14 <= iStack_70)) {
        pcVar15 = (char *)0x0;
      }
      else {
        pcVar15 = (char *)(*(int *)(param_1 + 0x10) + iStack_a0);
      }
      cVar3 = FUN_002d5e40(pcVar15);
      bVar1 = true;
      if (cVar3 != '\x01') {
        iVar14 = 0;
        if (0 < (int)uVar12) {
          piVar7 = aiStack_50;
          piVar8 = param_3;
          do {
            if (-1 < *piVar7) {
              iVar9 = *piVar8;
              cVar4 = FUN_002d5e40(pcVar15);
              if (cVar4 == '\x01') {
                bVar2 = false;
              }
              else {
                iVar11 = *(int *)(pcVar15 + 8);
                iVar10 = 0;
                cVar4 = FUN_002d5e40(pcVar15);
                if (cVar4 != '\x01') {
                  cVar4 = *pcVar15;
                  if (cVar4 == '\x02') {
                    iVar10 = *(int *)(pcVar15 + 0x10) + 0x2c;
                  }
                  else if (cVar4 == '\x01') {
                    iVar10 = *(int *)(pcVar15 + 0x10) + 0x2c;
                  }
                  else if (cVar4 == '\0') {
                    iVar10 = *(int *)(pcVar15 + 0x10) + 0xc;
                  }
                }
                cVar4 = *pcVar15;
                if (iVar11 == iVar9) {
                  if (cVar4 == '\x02') {
                    lVar5 = FUN_00132590(iVar10,piVar8 + 1,0x20);
                    if (lVar5 == 0) goto LAB_002d5938;
                    bVar2 = false;
                  }
                  else if (cVar4 == '\x01') {
                    lVar5 = FUN_00132590(iVar10,piVar8 + 1,0x20);
                    if (lVar5 == 0) goto LAB_002d5938;
                    bVar2 = false;
                  }
                  else if ((cVar4 == '\0') &&
                          (lVar5 = FUN_00132590(iVar10,piVar8 + 1,0x100), lVar5 != 0)) {
                    bVar2 = false;
                  }
                  else {
LAB_002d5938:
                    bVar2 = true;
                  }
                }
                else {
                  bVar2 = false;
                }
                if (bVar2) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
              }
              if (bVar2) {
                bVar1 = false;
              }
            }
            iVar14 = iVar14 + 1;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 0x41;
          } while (iVar14 < (int)uVar12);
        }
        if ((bVar1) && (cVar3 != '\x02')) {
          FUN_002d5c00(pcVar15);
        }
      }
      iVar14 = *(int *)(param_1 + 8);
      iStack_a0 = iStack_a0 + 0x1c;
      iStack_70 = iStack_70 + 1;
    } while (iStack_70 < iVar14);
  }
  iStack_80 = 0;
  if (0 < (int)uVar12) {
    piStack_90 = aiStack_50;
    piVar8 = param_3;
    do {
      if (-1 < *piStack_90) {
        iVar14 = *(int *)(param_1 + 8);
        iVar9 = *piVar8;
        iVar11 = 0;
        if (0 < iVar14) {
          iVar10 = 0;
          do {
            if ((iVar11 < 0) || (iVar14 <= iVar11)) {
              pcVar15 = (char *)0x0;
            }
            else {
              pcVar15 = (char *)(*(int *)(param_1 + 0x10) + iVar10);
            }
            if (iVar9 == *(int *)(pcVar15 + 8)) {
              if (iVar9 < 0) goto LAB_002d5aa0;
              cVar3 = FUN_002d5e40(pcVar15);
              if (cVar3 == '\x01') {
                bVar1 = false;
              }
              else {
                iVar14 = *(int *)(pcVar15 + 8);
                iVar6 = 0;
                cVar3 = FUN_002d5e40(pcVar15);
                if (cVar3 != '\x01') {
                  cVar3 = *pcVar15;
                  if (cVar3 == '\x02') {
                    iVar6 = *(int *)(pcVar15 + 0x10) + 0x2c;
                  }
                  else if (cVar3 == '\x01') {
                    iVar6 = *(int *)(pcVar15 + 0x10) + 0x2c;
                  }
                  else if (cVar3 == '\0') {
                    iVar6 = *(int *)(pcVar15 + 0x10) + 0xc;
                  }
                }
                cVar3 = *pcVar15;
                if (iVar14 == iVar9) {
                  if (cVar3 == '\x02') {
                    lVar5 = FUN_00132590(iVar6,piVar8 + 1,0x20);
                    if (lVar5 == 0) goto LAB_002d5a78;
                    bVar1 = false;
                  }
                  else if (cVar3 == '\x01') {
                    lVar5 = FUN_00132590(iVar6,piVar8 + 1,0x20);
                    if (lVar5 == 0) goto LAB_002d5a78;
                    bVar1 = false;
                  }
                  else if ((cVar3 == '\0') &&
                          (lVar5 = FUN_00132590(iVar6,piVar8 + 1,0x100), lVar5 != 0)) {
                    bVar1 = false;
                  }
                  else {
LAB_002d5a78:
                    bVar1 = true;
                  }
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
              }
              if (bVar1) goto LAB_002d5aa0;
            }
            iVar14 = *(int *)(param_1 + 8);
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 0x1c;
          } while (iVar11 < iVar14);
        }
        pcVar15 = (char *)0x0;
LAB_002d5aa0:
        if (pcVar15 != (char *)0x0) {
          *piStack_90 = -1;
        }
      }
      piStack_90 = piStack_90 + 1;
      iStack_80 = iStack_80 + 1;
      piVar8 = piVar8 + 0x41;
    } while (iStack_80 < (int)uVar12);
  }
  iVar14 = 0;
  if (0 < (int)uVar12) {
    piVar8 = aiStack_50;
    piStack_60 = param_3;
    do {
      if (-1 < *piVar8) {
        iVar9 = *(int *)(param_1 + 8);
        iVar11 = 0;
        if (0 < iVar9) {
          iVar10 = 0;
          do {
            if ((iVar11 < 0) || (iVar9 <= iVar11)) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(param_1 + 0x10) + iVar10;
            }
            if (*(int *)(iVar6 + 8) == -1) goto LAB_002d5b60;
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 0x1c;
          } while (iVar11 < iVar9);
        }
        iVar6 = 0;
LAB_002d5b60:
        if (iVar6 != 0) {
          FUN_002d5ce0(iVar6,*piStack_60,piStack_60 + 1);
        }
      }
      iVar14 = iVar14 + 1;
      piStack_60 = piStack_60 + 0x41;
      piVar8 = piVar8 + 1;
    } while (iVar14 < (int)uVar12);
  }
  return;
}

// 0x002d5c00  size 0xd4
void FUN_002d5c00(undefined1 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_002d5e40();
  if (cVar1 == '\x01') {
    return;
  }
  switch(*param_1) {
  case 0:
    FUN_0019ce40(*(undefined4 *)(param_1 + 0x10));
    goto LAB_002d5cbc;
  case 1:
    FUN_001a5a00(*(undefined4 *)(param_1 + 0x10));
    break;
  case 2:
    FUN_001a5a00(*(undefined4 *)(param_1 + 0x10));
    break;
  case 4:
    FUN_001994c0(*(undefined4 *)(param_1 + 0x10));
    break;
  case 5:
    FUN_00199a10(*(undefined4 *)(param_1 + 0x10));
    break;
  case 6:
    FUN_002d6460(*(undefined4 *)(param_1 + 0x10));
    break;
  case 7:
    FUN_002d8630(*(undefined4 *)(param_1 + 0x10));
  }
LAB_002d5cbc:
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 0x002d5ce0  size 0x154
undefined4 FUN_002d5ce0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_002d5e40();
  if (cVar1 != '\x01') {
    return 0xffffffff;
  }
  switch(*param_1) {
  case 0:
    uVar2 = FUN_00198270(param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    break;
  case 1:
    uVar2 = FUN_001a9c50();
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) {
      FUN_001ac860(iVar3,param_2,param_3);
      FUN_001ac780(iVar3);
      iVar3 = *(int *)(param_1 + 0x10);
      goto LAB_002d5e04;
    }
    break;
  case 2:
    uVar2 = FUN_001a9be0();
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) {
      FUN_001abf00(iVar3,param_2,param_3);
      FUN_001abe20(iVar3);
    }
    break;
  case 4:
    uVar2 = FUN_00198130(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    break;
  case 5:
    uVar2 = FUN_001981b0(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    break;
  case 6:
    uVar2 = FUN_002d6000(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    break;
  case 7:
    uVar2 = FUN_002d7d40(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x10);
LAB_002d5e04:
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 8) = (int)param_2;
    uVar2 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar2;
}

// 0x002d5e40  size 0xf8
ulong FUN_002d5e40(undefined1 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = 1;
  if (iVar1 != 0) {
    switch(*param_1) {
    case 0:
      uVar2 = FUN_001a4fe0();
      break;
    case 1:
      uVar2 = (ulong)(*(int *)(iVar1 + 8) != 0) ^ 1;
      break;
    case 2:
      uVar2 = (ulong)(*(int *)(iVar1 + 8) != 0) ^ 1;
      break;
    case 4:
      uVar2 = FUN_001a4fe0();
      break;
    case 5:
      uVar2 = FUN_001a4fe0();
      break;
    case 6:
      uVar2 = FUN_001a4fe0(iVar1 + 0x28);
      break;
    case 7:
      uVar2 = FUN_001a4fe0(iVar1 + 0x28);
    }
    if (uVar2 == 0) {
      uVar2 = 2;
    }
    else if (*(int *)(param_1 + 4) == 0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
    }
  }
  return uVar2;
}

// 0x002d5f40  size 0xb8
void FUN_002d5f40(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = iRam0046a1a8;
  for (iVar1 = iRam0046a19c; iVar1 != 0; iVar1 = iVar1 + -1) {
    if ((*(uint *)(iVar2 + 0x28) & 0xc) != 0) {
      uStack_4 = 1;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      FUN_002d6290(iVar2,&uStack_10);
      *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) & 0xfffffff3;
    }
    iVar2 = iVar2 + 0xb0;
  }
  return;
}

// 0x002d6000  size 0x90
long FUN_002d6000(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_001a5070(0x46a190,0);
  if (lVar2 != 0) {
    iVar3 = (int)lVar2;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    FUN_001a5a40(lVar2);
    *(int *)(iVar3 + 0xc) = param_1;
    *(undefined4 *)(iVar3 + 0x28) = 1;
    *(undefined4 *)(iVar3 + 8) = 1;
    uVar1 = FUN_0014bf00(param_1 + 0x1989,uVar1,0x2d64c0,lVar2,0,0);
    *(undefined4 *)(iVar3 + 0x2c) = uVar1;
  }
  return lVar2;
}

// 0x002d6090  size 0x54
void FUN_002d6090(void)

{
  if (iRam0046a1a0 != 0) {
    Mem_Free();
    iRam0046a1a0 = 0;
  }
  if (iRam0046a198 != 0) {
    Mem_Free();
    iRam0046a198 = 0;
  }
  return;
}

// 0x002d60f0  size 0x19c
void FUN_002d60f0(undefined8 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = FUN_0014bfe0(0x1989,0x19b0,1);
  iVar1 = iVar1 + 0x1400;
  FUN_001325d0(0x46a190,0,0x20);
  iRam0046a198 = Mem_AllocAligned(iVar1 * param_2,0x40,param_1);
  uRam0046a19c = param_2;
  iRam0046a1a0 = Mem_Alloc16(param_2 * 0xb0,param_1);
  uVar5 = 0;
  iRam0046a1a4 = iRam0046a1a0 + param_2 * 0x28;
  iRam0046a1a8 = iRam0046a1a0;
  uRam0046a1ac = param_3;
  if (param_2 != 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar4 = iRam0046a1a8 + iVar3;
      iVar6 = iRam0046a198 + iVar2;
      FUN_001a5aa0(iVar4,0,0xb0);
      FUN_001a5a80(iVar4,iVar1,iVar6);
      FUN_001a5060(iVar4 + 0x28,0xb0);
      *(undefined4 *)(iVar4 + 0x90) = 0;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar4 + 0x94) = 0;
      *(undefined4 *)(iVar4 + 0x98) = 0;
      *(undefined4 *)(iVar4 + 0x9c) = 0x3f800000;
      iVar3 = iVar3 + 0xb0;
      *(undefined4 *)(iVar4 + 0xa0) = 0;
      iVar2 = iVar2 + iVar1;
      *(undefined4 *)(iVar4 + 0xa4) = 0;
      *(undefined4 *)(iVar4 + 0xa8) = 0;
      *(undefined4 *)(iVar4 + 0xac) = 0x3f800000;
    } while (uVar5 < param_2);
  }
  FUN_001a5140(0x46a190,iRam0046a1a0,iRam0046a1a4);
  return;
}

// 0x002d6290  size 0x1c4
void FUN_002d6290(int param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_240 [68];
  undefined1 auStack_1fc [96];
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined1 auStack_180 [384];
  
  iVar2 = ((uint)(byte)param_2[4] * 0x18 - (uint)(byte)param_2[4]) * 0x40;
  iVar4 = iVar2 + 0x431100;
  if (*(int *)(iVar2 + 0x431684) != 0) {
    FUN_00184b20(iVar4,0,*param_2);
    FUN_0014d240(0x436180);
    FUN_00148950(auStack_240,iVar4,0x436180,*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 0xc));
    maybe_Vu0_UnitMatrix(auStack_180);
    maybe_Vu0_RotMatrixZ(*(undefined4 *)(param_1 + 0x90),auStack_180,auStack_180);
    maybe_Vu0_RotMatrixY(*(undefined4 *)(param_1 + 0x94),auStack_180,auStack_180);
    maybe_Vu0_RotMatrixX(*(undefined4 *)(param_1 + 0x98),auStack_180,auStack_180);
    vu0math_sub_00132d20(auStack_180,auStack_180,param_1 + 0xa0);
    uStack_19c = *(undefined4 *)(param_1 + 0x50);
    uStack_198 = 1;
    FUN_00148850(auStack_240,0);
    FUN_00148850(auStack_240,1);
    cVar3 = *(int *)(param_1 + 0x38) != 0;
    if ((bool)cVar3) {
      FUN_00158390(0,*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x50));
      FUN_00145f10(auStack_240,param_1 + 0x40);
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_00158390(cVar3,*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x6c));
      FUN_00145f10(auStack_240,param_1 + 0x5c);
      cVar3 = cVar3 + '\x01';
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      FUN_00158390(cVar3,*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x88));
      FUN_00145f10(auStack_1fc,param_1 + 0x78);
    }
    uVar1 = FUN_0014d710(*(undefined4 *)(param_1 + 0x34),0);
    FUN_001486a0(auStack_240,uVar1);
    FUN_00148820(auStack_240,0);
    FUN_00148820(auStack_240,1);
  }
  return;
}

// 0x002d6460  size 0x54
void FUN_002d6460(int param_1)

{
  FUN_001a5a00();
  FUN_001a5060(param_1 + 0x28,0xb0);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  return;
}

// 0x002d64c0  size 0x120
void FUN_002d64c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = iRam0046a1ac + iRam0036f2c0;
  FUN_001a5a70(param_4);
  FUN_001a59b0(param_4,param_3);
  uVar1 = FUN_00134630(param_2,0,0);
  iVar3 = (int)param_4;
  *(undefined4 *)(iVar3 + 0x34) = uVar1;
  FUN_0014d2a0(*(undefined4 *)(iVar3 + 0x34));
  uVar2 = FUN_00134630(param_2,1,0);
  FUN_001a5150(param_4,iVar3 + 0x38,uVar2,0,1,iVar4,0,0);
  uVar2 = FUN_00134630(param_2,2,0);
  FUN_001a5150(param_4,iVar3 + 0x54,uVar2,0,1,iVar4,0,0);
  uVar2 = FUN_00134630(param_2,3,0);
  FUN_001a5150(param_4,iVar3 + 0x70,uVar2,0,1,iVar4,0,0);
  *(undefined4 *)(iVar3 + 8) = 0;
  return;
}

// 0x002d65e0  size 0x28
void FUN_002d65e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3f800000;
  return;
}

// 0x002d6610  size 0x98
void FUN_002d6610(undefined4 *param_1,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(&PTR_DAT_00342000)[param_2];
  iVar3 = 0;
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[3] = 0x3f800000;
  do {
    iVar3 = iVar3 + 1;
    param_1[0x10] = puVar2[6];
    param_1[0x11] = puVar2[7];
    param_1[0x12] = puVar2[8];
    param_1[0x13] = 0;
    param_1[4] = -(float)puVar2[9];
    param_1[5] = -(float)puVar2[10];
    pfVar1 = (float *)(puVar2 + 0xb);
    puVar2 = puVar2 + 6;
    param_1[6] = -*pfVar1;
    param_1[7] = 0;
    param_1 = param_1 + 4;
  } while (iVar3 < 3);
  return;
}

// 0x002d66b0  size 0xa0
void FUN_002d66b0(float *param_1,int param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)(&PTR_DAT_00341f60)[param_2];
  *param_1 = pfVar1[1] * 0.1;
  param_1[1] = pfVar1[2] * 0.1;
  param_1[2] = pfVar1[3] * 0.1;
  param_1[3] = 1.0;
  param_1[4] = pfVar1[4] * 0.1;
  param_1[5] = pfVar1[5] * 0.1;
  param_1[6] = pfVar1[6] * 0.1;
  param_1[7] = 1.0;
  param_1[8] = 0.0;
  param_1[9] = 1.0;
  param_1[10] = 0.0;
  param_1[0xb] = 1.0;
  param_1[0xc] = *pfVar1;
  param_1[0xd] = 1.0;
  param_1[0xe] = 0.91249996;
  return;
}

// 0x002d6750  size 0x18
undefined * FUN_002d6750(int param_1)

{
  return (&PTR_DAT_00341ec0)[param_1];
}

// 0x002d6770  size 0xac
void FUN_002d6770(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = iRam0036f834;
  iVar5 = iRam0036f834 + 0x7c;
  iVar4 = 0;
  if (0 < *(int *)(iRam0036f834 + 0x84)) {
    do {
      uVar3 = FUN_002d5370(iVar5,iVar4);
      cVar2 = FUN_002d5e40(uVar3);
      if (cVar2 == '\x04') {
        FUN_001a4f50(*(int *)((int)uVar3 + 0x10) + 0x28,0xc);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x84));
  }
  FUN_002d5f40();
  return;
}

// 0x002d6820  size 0x24
void FUN_002d6820(void)

{
  FUN_002d48e0(6);
  FUN_002d6090();
  return;
}

// 0x002d6850  size 0x40
void FUN_002d6850(undefined8 param_1,undefined8 param_2)

{
  FUN_002d60f0(*puGpffff9144,param_1,param_2);
  FUN_002d4940(6,param_1);
  return;
}

// 0x002d68c0  size 0x574
/* WARNING: Removing unreachable block (ram,0x002d6b08) */
/* WARNING: Removing unreachable block (ram,0x002d6b54) */
/* WARNING: Removing unreachable block (ram,0x002d6ba0) */

void FUN_002d68c0(undefined8 param_1,int param_2,uint param_3)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  float fVar9;
  float afStack_60 [4];
  undefined1 auStack_50 [32];
  undefined4 uStack_30;
  undefined4 uStack_28;
  
  iVar8 = (int)param_1;
  puVar7 = (undefined4 *)(iVar8 + 0x100);
  vu0math_sub_00132c20(auStack_50,param_2 + 0xe0);
  uVar4 = FUN_001651a0(*(undefined4 *)(param_2 + 0x154));
  vu0math_sub_00132ae0(afStack_60,uVar4);
  vu0math_sub_00132b10(0x3c23d70a,afStack_60,afStack_60);
  cVar1 = FUN_001777b0();
  if (cVar1 == '\x03') {
    afStack_60[0] = afStack_60[0] + -17.5417;
    afStack_60[2] = afStack_60[2] + 18.2577;
  }
  else if (cVar1 == '\x02') {
    afStack_60[0] = afStack_60[0] + -6.65728;
    afStack_60[2] = afStack_60[2] + 8.67468;
  }
  afStack_60[1] = 0.0;
  fVar9 = (float)atan2f(uStack_30,uStack_28);
  fVar9 = fVar9 - 1.5707964;
  if (fVar9 <= -3.1415927) {
    fVar9 = fVar9 + 6.2831855;
  }
  if (3.1415927 < fVar9) {
    fVar9 = fVar9 - 6.2831855;
  }
  maybe_Vu0_UnitMatrix(puVar7);
  *puVar7 = 0x3f19999a;
  *(undefined4 *)(iVar8 + 0x114) = 0;
  *(undefined4 *)(iVar8 + 0x128) = 0x3f666666;
  maybe_Vu0_RotMatrixY(fVar9,puVar7,puVar7);
  vu0math_sub_00132d20(puVar7,puVar7,afStack_60);
  if ((**(uint **)(iGpffff916c + 4) & 0x10) == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = *(uint **)(iGpffff916c + 4) + 0x14;
  }
  if (puVar2 == (uint *)0x0) {
    uVar3 = 0;
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = puVar2 + 0xc;
    uVar3 = puVar2[3];
  }
  if (uVar3 != 0) {
    do {
      puVar5[8] = (uint)((float)(param_3 & 0xff) / 255.0);
      puVar5[9] = (uint)((float)(param_3 >> 8 & 0xff) / 255.0);
      puVar5[10] = (uint)((float)(param_3 >> 0x10 & 0xff) / 255.0);
      uVar3 = uVar3 - 1;
      puVar5 = puVar5 + (puVar5[0x1e] + 1) * 4 + 0x28;
    } while (uVar3 != 0);
  }
  if (*(float *)(iGpffff916c + 0x1c) != 1.0) {
    puVar2 = *(uint **)(iGpffff916c + 4);
    if ((*puVar2 & 0x10) == 0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = puVar2 + 0x14;
    }
    if (puVar5 == (uint *)0x0) {
      uVar3 = 0;
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = puVar5 + 0xc;
      uVar3 = puVar5[3];
    }
    if (uVar3 == 0) {
      uVar3 = *puVar2;
    }
    else {
      do {
        uVar3 = uVar3 - 1;
        *puVar6 = *puVar6 | 0x80000;
        puVar6[0xb] = *(uint *)(iGpffff916c + 0x1c);
        puVar6[0x16] = 0x30000;
        puVar6[0x17] = 0;
        puVar6 = puVar6 + (puVar6[0x1e] + 1) * 4 + 0x28;
      } while (uVar3 != 0);
      uVar3 = *puVar2;
    }
    *puVar2 = uVar3 | 0x20;
    *puVar2 = *puVar2 & 0xffffffbf;
  }
  FUN_00148430(param_1,*(undefined4 *)(iGpffff916c + 4));
  if (*(float *)(iGpffff916c + 0x1c) != 1.0) {
    puVar2 = *(uint **)(iGpffff916c + 8);
    if ((*puVar2 & 0x10) == 0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = puVar2 + 0x14;
    }
    if (puVar5 == (uint *)0x0) {
      uVar3 = 0;
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = puVar5 + 0xc;
      uVar3 = puVar5[3];
    }
    if (uVar3 == 0) {
      uVar3 = *puVar2;
    }
    else {
      do {
        uVar3 = uVar3 - 1;
        *puVar6 = *puVar6 | 0x80000;
        puVar6[0xb] = *(uint *)(iGpffff916c + 0x1c);
        puVar6[0x16] = 0x30000;
        puVar6[0x17] = 0;
        puVar6 = puVar6 + (puVar6[0x1e] + 1) * 4 + 0x28;
      } while (uVar3 != 0);
      uVar3 = *puVar2;
    }
    *puVar2 = uVar3 | 0x20;
    *puVar2 = *puVar2 & 0xffffffbf;
  }
  FUN_00148430(param_1,*(undefined4 *)(iGpffff916c + 8));
  return;
}

// 0x002d6e40  size 0x8c4
void FUN_002d6e40(void)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  int iVar9;
  float fVar10;
  undefined1 auStack_1b90 [256];
  undefined1 auStack_1a90 [20];
  undefined4 uStack_1a7c;
  uint auStack_1950 [4];
  undefined4 uStack_1940;
  undefined4 uStack_193c;
  undefined4 uStack_1930;
  undefined4 uStack_192c;
  undefined8 uStack_16a8;
  undefined4 uStack_1690;
  undefined4 uStack_168c;
  undefined4 uStack_1688;
  uint uStack_1684;
  uint auStack_1640 [4];
  undefined4 uStack_1630;
  undefined4 uStack_162c;
  undefined4 uStack_1620;
  undefined4 uStack_161c;
  undefined8 uStack_1398;
  undefined4 uStack_1380;
  undefined4 uStack_137c;
  undefined4 uStack_1378;
  uint uStack_1374;
  uint auStack_1330 [4];
  undefined4 uStack_1320;
  undefined4 uStack_131c;
  undefined4 uStack_1310;
  undefined4 uStack_130c;
  undefined8 uStack_1088;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  uint uStack_1064;
  uint auStack_1020 [4];
  undefined4 uStack_1010;
  undefined4 uStack_100c;
  undefined4 uStack_1000;
  undefined4 uStack_ffc;
  undefined8 uStack_d78;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  undefined4 uStack_d58;
  uint uStack_d54;
  uint auStack_d10 [4];
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  undefined4 uStack_cf0;
  undefined4 uStack_cec;
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  undefined4 uStack_cd0;
  undefined4 uStack_ccc;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 uStack_a48;
  uint uStack_a44;
  undefined1 auStack_d0 [20];
  undefined4 uStack_bc;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [64];
  float afStack_20 [8];
  
  iVar9 = *(int *)(iGpffff8b0c + 0x14);
  if ((((piGpffff916c != (int *)0x0) && (piGpffff916c[4] != 0)) && (piGpffff916c[6] != 0)) &&
     ((float)piGpffff916c[7] != 0.0)) {
    maybe_Vu0_UnitMatrix(auStack_60);
    maybe_Vu0_RotMatrixX(0,auStack_60,auStack_60);
    maybe_Vu0_RotMatrixY(&UNK_bfc90fdb,auStack_60,auStack_60);
    if (piGpffff916c[5] != 0) {
      vu0math_sub_00132ba0(auStack_60,iVar9 + 0x550,auStack_60);
    }
    uStack_68 = DAT_003420c8;
    uStack_70 = DAT_003420c0;
    uStack_64 = DAT_003420cc;
    iStack_6c = piGpffff916c[8];
    uStack_80 = DAT_003420d0;
    uStack_7c = DAT_003420d4;
    uStack_78 = DAT_003420d8;
    uStack_74 = DAT_003420dc;
    uStack_90 = DAT_003420e0;
    uStack_8c = DAT_003420e4;
    uStack_88 = DAT_003420e8;
    uStack_84 = DAT_003420ec;
    vu0math_sub_00132d50(0x435bc0,auStack_60,&uStack_70);
    vu0math_sub_00132d50(0x435bd0,auStack_60,&uStack_80);
    vu0math_sub_00132cd0(auStack_60,auStack_60);
    vu0math_sub_00133020(auStack_60,auStack_60);
    vu0math_sub_00132d50(0x435be0,auStack_60,&uStack_90);
    vu0math_sub_00132b10(0x3c23d70a,afStack_20,iVar9 + 0x510);
    cVar2 = FUN_001777b0();
    if (cVar2 == '\x03') {
      afStack_20[0] = afStack_20[0] + -17.5417;
      afStack_20[2] = afStack_20[2] + 18.2577;
    }
    else if (cVar2 == '\x02') {
      afStack_20[0] = afStack_20[0] + -6.65728;
      afStack_20[2] = afStack_20[2] + 8.67468;
    }
    afStack_20[1] = 0.0;
    vu0math_sub_00132b70(0x435bc0,0x435bc0,afStack_20);
    vu0math_sub_00132b70(0x435bd0,0x435bd0,afStack_20);
    uRam00435bf0 = 0;
    FUN_001445d0(0x435bc0);
    thunk_FUN_001466b0(auStack_d0,1,2,0);
    FUN_001465c0(auStack_d0,0xc);
    uStack_bc = 0x435bc0;
    FUN_00145d70(auStack_d0);
    FUN_0014f3b0(auStack_1950,1,0xffffffffffffffff);
    uStack_1930 = 0x42fe0000;
    uStack_1690 = 0xff;
    uStack_168c = 0xff;
    uStack_1688 = 0xff;
    uStack_1940 = 0;
    uStack_193c = 0;
    uStack_192c = 0;
    auStack_1950[0] = auStack_1950[0] | 2;
    fVar10 = (float)piGpffff916c[7] * 128.0;
    if (2.1474836e+09 <= fVar10) {
      fVar10 = fVar10 - 2.1474836e+09;
    }
    uStack_1684 = (int)fVar10 & 0xff;
    uStack_16a8 = 0x30000;
    FUN_0014f3b0(auStack_1640,1,0xffffffffffffffff);
    uStack_1630 = 0x42fe0000;
    uStack_1620 = 0x42fe0000;
    uStack_161c = 0x42fe0000;
    uStack_1380 = 0xff;
    uStack_137c = 0xff;
    uStack_1378 = 0xff;
    uStack_162c = 0;
    auStack_1640[0] = auStack_1640[0] | 2;
    fVar10 = (float)piGpffff916c[7] * 128.0;
    if (2.1474836e+09 <= fVar10) {
      fVar10 = fVar10 - 2.1474836e+09;
    }
    uStack_1374 = (int)fVar10 & 0xff;
    uStack_1398 = 0x30000;
    FUN_0014f3b0(auStack_1330,1,0xffffffffffffffff);
    uStack_1320 = 0x42fe0000;
    uStack_131c = 0x42fe0000;
    uStack_130c = 0x42fe0000;
    uStack_1070 = 0xff;
    uStack_106c = 0xff;
    uStack_1068 = 0xff;
    uStack_1310 = 0;
    auStack_1330[0] = auStack_1330[0] | 2;
    fVar10 = (float)piGpffff916c[7] * 128.0;
    if (2.1474836e+09 <= fVar10) {
      fVar10 = fVar10 - 2.1474836e+09;
    }
    uStack_1064 = (int)fVar10 & 0xff;
    uStack_1088 = 0x30000;
    FUN_0014f3b0(auStack_1020,1,0xffffffffffffffff);
    uStack_100c = 0x42fe0000;
    uStack_d60 = 0xff;
    uStack_d5c = 0xff;
    uStack_d58 = 0xff;
    uStack_1010 = 0;
    uStack_1000 = 0;
    uStack_ffc = 0;
    auStack_1020[0] = auStack_1020[0] | 2;
    fVar10 = (float)piGpffff916c[7] * 128.0;
    if (2.1474836e+09 <= fVar10) {
      fVar10 = fVar10 - 2.1474836e+09;
    }
    uStack_d54 = (int)fVar10 & 0xff;
    uStack_d78 = 0x30000;
    FUN_0014f3b0(auStack_d10,3,0xffffffffffffffff);
    uStack_d00 = 0x3f800000;
    uStack_cfc = 0x3f800000;
    uStack_cf0 = 0x3f800000;
    uStack_cdc = 0x3f800000;
    uStack_cec = 0x42fc0000;
    uStack_ce0 = 0x42fc0000;
    uStack_cd0 = 0x42fc0000;
    uStack_ccc = 0x42fc0000;
    uStack_a50 = 0xff;
    auStack_d10[0] = auStack_d10[0] | 2;
    uStack_a4c = 0xff;
    uStack_a48 = 0xff;
    fVar10 = 128.0 - (float)piGpffff916c[7] * 56.0;
    if (2.1474836e+09 <= fVar10) {
      fVar10 = fVar10 - 2.1474836e+09;
    }
    uStack_a44 = (int)fVar10 & 0xff;
    uStack_a68 = 0x30000;
    uStack_a60 = 0x89;
    FUN_0014b700(auStack_d0,auStack_1950,5);
    FUN_00146570(auStack_d0,0);
    FUN_00148950(auStack_1b90,0x435bc0,0x436180,0xc,0xd);
    FUN_00148850(auStack_1b90,0);
    FUN_00148850(auStack_1b90,1);
    iVar9 = *piGpffff916c;
    maybe_Vu0_UnitMatrix(auStack_1a90);
    uStack_1a7c = 0;
    maybe_Vu0_RotMatrixZ(*(undefined4 *)(iVar9 + 0x30),auStack_1a90,auStack_1a90);
    maybe_Vu0_RotMatrixY(*(undefined4 *)(iVar9 + 0x34),auStack_1a90,auStack_1a90);
    maybe_Vu0_RotMatrixX(*(undefined4 *)(iVar9 + 0x38),auStack_1a90,auStack_1a90);
    vu0math_sub_00132d20(auStack_1a90,auStack_1a90,iVar9 + 0x20);
    if ((float)piGpffff916c[7] != 1.0) {
      puVar1 = (uint *)*piGpffff916c;
      if ((*puVar1 & 0x10) == 0) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = puVar1 + 0x14;
      }
      if (puVar3 == (uint *)0x0) {
        uVar4 = 0;
        puVar8 = (uint *)0x0;
      }
      else {
        puVar8 = puVar3 + 0xc;
        uVar4 = puVar3[3];
      }
      if (uVar4 == 0) {
        uVar4 = *puVar1;
      }
      else {
        do {
          uVar4 = uVar4 - 1;
          *puVar8 = *puVar8 | 0x80000;
          puVar8[0xb] = piGpffff916c[7];
          puVar8[0x16] = 0x30000;
          puVar8[0x17] = 0;
          puVar8 = puVar8 + (puVar8[0x1e] + 1) * 4 + 0x28;
        } while (uVar4 != 0);
        uVar4 = *puVar1;
      }
      *puVar1 = uVar4 | 0x20;
      *puVar1 = *puVar1 & 0xffffffbf;
    }
    FUN_00148430(auStack_1b90,*piGpffff916c);
    iVar9 = 1;
    lVar6 = FUN_00177210();
    if (1 < lVar6) {
      do {
        uVar7 = FUN_001ca6b0(iVar9);
        FUN_002d68c0(auStack_1b90,uVar7,0xff0000);
        iVar9 = iVar9 + 1;
        iVar5 = FUN_00177210();
      } while (iVar9 < iVar5);
    }
    uVar7 = FUN_001ca6b0(0);
    FUN_002d68c0(auStack_1b90,uVar7,0xff);
    FUN_00148820(auStack_1b90,0);
    FUN_00148820(auStack_1b90,1);
  }
  return;
}

// 0x002d7710  size 0x30
void FUN_002d7710(void)

{
  FUN_001375f0(0,0);
  return;
}

// 0x002d7740  size 0x340
void FUN_002d7740(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar2 = FUN_00134630(param_2,0,0);
  FUN_0014d2a0(uVar2);
  iVar3 = FUN_0014d6e0(uVar2,0);
  *piGpffff916c = iVar3;
  uVar2 = FUN_00134630(param_2,1,0);
  FUN_0014d2a0(uVar2);
  iVar3 = FUN_0014d6e0(uVar2,0);
  piGpffff916c[1] = iVar3;
  uVar2 = FUN_00134630(param_2,2,0);
  FUN_0014d2a0(uVar2);
  iVar3 = FUN_0014d6e0(uVar2,0);
  piGpffff916c[2] = iVar3;
  FUN_001777b0();
  piGpffff916c[7] = 0x3f800000;
  puVar1 = (uint *)piGpffff916c[2];
  if ((*puVar1 & 0x10) == 0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar1 + 0x14;
  }
  if (puVar4 == (uint *)0x0) {
    uVar5 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = puVar4 + 0xc;
    uVar5 = puVar4[3];
  }
  if (uVar5 == 0) {
    uVar5 = *puVar1;
  }
  else {
    do {
      uVar5 = uVar5 - 1;
      *puVar6 = *puVar6 | 0x80000;
      puVar6[0xb] = piGpffff916c[7];
      puVar6[0x16] = 0x30000;
      puVar6[0x17] = 0;
      puVar6 = puVar6 + (puVar6[0x1e] + 1) * 4 + 0x28;
    } while (uVar5 != 0);
    uVar5 = *puVar1;
  }
  *puVar1 = uVar5 | 0x20;
  *puVar1 = *puVar1 & 0xffffffbf;
  puVar1 = (uint *)piGpffff916c[1];
  if ((*puVar1 & 0x10) == 0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar1 + 0x14;
  }
  if (puVar4 == (uint *)0x0) {
    uVar5 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = puVar4 + 0xc;
    uVar5 = puVar4[3];
  }
  if (uVar5 == 0) {
    uVar5 = *puVar1;
  }
  else {
    do {
      uVar5 = uVar5 - 1;
      *puVar6 = *puVar6 | 0x80000;
      puVar6[0xb] = piGpffff916c[7];
      puVar6[0x16] = 0x30000;
      puVar6[0x17] = 0;
      puVar6 = puVar6 + (puVar6[0x1e] + 1) * 4 + 0x28;
    } while (uVar5 != 0);
    uVar5 = *puVar1;
  }
  *puVar1 = uVar5 | 0x20;
  *puVar1 = *puVar1 & 0xffffffbf;
  puVar1 = (uint *)*piGpffff916c;
  if ((*puVar1 & 0x10) == 0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar1 + 0x14;
  }
  if (puVar4 == (uint *)0x0) {
    uVar5 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = puVar4 + 0xc;
    uVar5 = puVar4[3];
  }
  if (uVar5 == 0) {
    uVar5 = *puVar1;
  }
  else {
    do {
      uVar5 = uVar5 - 1;
      *puVar6 = *puVar6 | 0x80000;
      puVar6[0xb] = piGpffff916c[7];
      puVar6[0x16] = 0x30000;
      puVar6[0x17] = 0;
      puVar6 = puVar6 + (puVar6[0x1e] + 1) * 4 + 0x28;
    } while (uVar5 != 0);
    uVar5 = *puVar1;
  }
  *puVar1 = uVar5 | 0x20;
  *puVar1 = *puVar1 & 0xffffffbf;
  piGpffff916c[7] = 0;
  piGpffff916c[4] = 1;
  return;
}

// 0x002d7a80  size 0x110
void FUN_002d7a80(undefined8 param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = FUN_001777b0();
  switch(uVar2) {
  case 0:
    iVar6 = 0x1984;
    break;
  case 1:
    iVar6 = 0x1983;
    break;
  case 2:
    iVar6 = 0x1986;
    break;
  case 3:
    iVar6 = 0x1985;
    break;
  case 4:
    iVar6 = 0x1987;
    break;
  case 5:
    iVar6 = 0x1981;
    break;
  case 6:
    iVar6 = 0x1982;
    break;
  case 7:
    iVar6 = 0x1988;
    break;
  default:
    goto switchD_002d7abc_default;
  }
  iVar5 = iVar6 * 0x14 + iGpffff89d4;
  iVar1 = *(int *)(iVar5 + 0x20);
  if (iVar1 == 0) {
    uVar3 = *(uint *)(iVar5 + 0x18);
  }
  else {
    uVar3 = iVar1 + 0x7ffU >> 0xb;
  }
  uVar4 = Mem_AllocAligned(uVar3 << 0xb,0x40,param_1);
  *(undefined4 *)(iGpffff916c + 0xc) = uVar4;
  *(undefined4 *)(iGpffff916c + 0x10) = 0;
  FUN_0014bf00(iVar6,*(undefined4 *)(iGpffff916c + 0xc),0x2d7740,iGpffff916c,0,0);
switchD_002d7abc_default:
  return;
}

// 0x002d7ba0  size 0x4c
void FUN_002d7ba0(void)

{
  if (*(int *)(iGpffff916c + 0xc) != 0) {
    Mem_Free();
    *(undefined4 *)(iGpffff916c + 0xc) = 0;
  }
  if (iGpffff916c != 0) {
    Mem_Free();
    iGpffff916c = 0;
  }
  return;
}

// 0x002d7bf0  size 0x84
void FUN_002d7bf0(undefined8 param_1)

{
  puGpffff916c = (undefined4 *)Mem_Alloc16(0x24,param_1);
  *puGpffff916c = 0;
  puGpffff916c[1] = 0;
  puGpffff916c[2] = 0;
  puGpffff916c[3] = 0;
  puGpffff916c[4] = 0;
  puGpffff916c[5] = 1;
  puGpffff916c[6] = 1;
  puGpffff916c[7] = 0;
  puGpffff916c[8] = 0x41800000;
  FUN_002d7a80(param_1);
  return;
}

// 0x002d7c80  size 0xb8
void FUN_002d7c80(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = iRam0046a248;
  for (iVar1 = iRam0046a23c; iVar1 != 0; iVar1 = iVar1 + -1) {
    if ((*(uint *)(iVar2 + 0x28) & 0xc) != 0) {
      uStack_4 = 1;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      FUN_002d8150(iVar2,&uStack_10);
      *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) & 0xfffffff3;
    }
    iVar2 = iVar2 + 0x80;
  }
  return;
}

// 0x002d7d40  size 0x90
long FUN_002d7d40(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_001a5070(0x46a230,0);
  if (lVar2 != 0) {
    iVar3 = (int)lVar2;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    FUN_001a5a40(lVar2);
    *(int *)(iVar3 + 0xc) = param_1;
    *(undefined4 *)(iVar3 + 0x28) = 1;
    *(undefined4 *)(iVar3 + 8) = 1;
    uVar1 = FUN_0014bf00(param_1 + 0x188d,uVar1,0x2d86a0,lVar2,0,0);
    *(undefined4 *)(iVar3 + 0x2c) = uVar1;
  }
  return lVar2;
}

// 0x002d7dd0  size 0x54
void FUN_002d7dd0(void)

{
  if (iRam0046a238 != 0) {
    Mem_Free();
    iRam0046a238 = 0;
  }
  if (iRam0046a240 != 0) {
    Mem_Free();
    iRam0046a240 = 0;
  }
  return;
}

// 0x002d7e30  size 0x19c
void FUN_002d7e30(undefined8 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = FUN_0014bfe0(0x188d,0x1894,1);
  iVar1 = iVar1 + 0x1400;
  FUN_001325d0(0x46a230,0,0x20);
  iRam0046a238 = Mem_AllocAligned(iVar1 * param_2,0x40,param_1);
  uRam0046a23c = param_2;
  iRam0046a240 = Mem_Alloc16(param_2 << 7,param_1);
  uVar5 = 0;
  iRam0046a244 = iRam0046a240 + param_2 * 0x28;
  iRam0046a248 = iRam0046a240;
  uRam0046a24c = param_3;
  if (param_2 != 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar4 = iRam0046a248 + iVar3;
      iVar6 = iRam0046a238 + iVar2;
      FUN_001a5aa0(iVar4,0,0x80);
      FUN_001a5a80(iVar4,iVar1,iVar6);
      FUN_001a5060(iVar4 + 0x28,0x80);
      *(undefined4 *)(iVar4 + 0x50) = 0;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar4 + 0x54) = 0;
      *(undefined4 *)(iVar4 + 0x58) = 0;
      *(undefined4 *)(iVar4 + 0x5c) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x60) = 0;
      iVar3 = iVar3 + 0x80;
      *(undefined4 *)(iVar4 + 100) = 0;
      iVar2 = iVar2 + iVar1;
      *(undefined4 *)(iVar4 + 0x68) = 0;
      *(undefined4 *)(iVar4 + 0x6c) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x70) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x74) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x78) = 0;
    } while (uVar5 < param_2);
  }
  FUN_001a5140(0x46a230,iRam0046a240,iRam0046a244);
  return;
}

// 0x002d7fd0  size 0x178
undefined4
FUN_002d7fd0(float param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
            int param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  piVar1 = *(int **)(param_2 + 0x38);
  iVar2 = *piVar1;
  if (param_5 == 0) {
    vu0math_sub_00132ae0(param_3,piVar1 + iVar2 * 4 + 4);
    vu0math_sub_00132ae0(param_4,piVar1 + iVar2 * 4 + 4 + 4);
  }
  else {
    vu0math_sub_00132ae0(&fStack_10,piVar1 + iVar2 * 4 + (int)param_5 * 8 + 4);
    vu0math_sub_00132ae0(&fStack_30,piVar1 + iVar2 * 4 + (int)param_5 * 8 + 4 + 4);
    fStack_40 = fStack_30;
    fVar3 = (float)((param_7 - param_6) + -1);
    fStack_3c = fStack_2c;
    uStack_14 = 0x3f800000;
    uStack_34 = 0x3f800000;
    fStack_20 = fStack_10 - fVar3 * param_1 * (fStack_30 - fStack_10);
    fStack_38 = fStack_28;
    fStack_1c = fStack_c - fVar3 * param_1 * (fStack_2c - fStack_c);
    fStack_18 = fStack_8 - fVar3 * param_1 * (fStack_28 - fStack_8);
    vu0math_sub_00132ae0(param_3,&fStack_20);
    vu0math_sub_00132ae0(param_4,&fStack_40);
  }
  return 1;
}

