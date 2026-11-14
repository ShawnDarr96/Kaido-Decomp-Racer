// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001fc000 - 0x00200000
#include "ghidra_types.h"

// 0x001fc2d0  size 0x128
/* WARNING: Removing unreachable block (ram,0x001fc320) */
/* WARNING: Removing unreachable block (ram,0x001fc370) */

bool FUN_001fc2d0(void)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*(uint *)(iRam0036f458 + 0x28) & 0x20) != 0) {
    lVar1 = FUN_001fbfc0();
    bVar2 = lVar1 == 1;
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffffffdf;
  }
  if ((*(uint *)(iRam0036f458 + 0x28) & 0x40) != 0) {
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x200;
    FUN_001fb660();
    bVar2 = true;
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffffffbf;
  }
  if ((*(uint *)(iRam0036f458 + 0x28) & 0x80) != 0) {
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x400;
    bVar2 = true;
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffffff7f;
  }
  return bVar2;
}

// 0x001fc400  size 0xa0
undefined8 FUN_001fc400(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_001f4ac0();
  uVar2 = 1;
  if ((lVar1 != 1) && (*(int *)(iRam0036f458 + 0x344) != 1)) {
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xfffffeff;
    uVar2 = 0;
  }
  lVar1 = FUN_00205630();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  lVar1 = FUN_00209490();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  lVar1 = FUN_001fbcd0();
  if (lVar1 == 1) {
    uVar2 = 1;
  }
  return uVar2;
}

// 0x001fc4a0  size 0x54
void FUN_001fc4a0(void)

{
  if (*(int *)(iRam0036f458 + 0x20) < -1) {
    FUN_001fb660();
  }
  *(undefined4 *)(iRam0036f458 + 0x24) = *(undefined4 *)(iRam0036f458 + 0x1c);
  *(undefined4 *)(iRam0036f458 + 0x1c) = *(undefined4 *)(iRam0036f458 + 0x20);
  return;
}

// 0x001fc500  size 0x4b0
undefined4 FUN_001fc500(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  char acStack_40 [16];
  char acStack_30 [16];
  char acStack_20 [16];
  char acStack_10 [16];
  
  iVar2 = *(int *)(iRam0036f458 + 0x1c);
  iVar5 = *(int *)(iRam0036f458 + 0x20);
  iVar6 = *(int *)(iRam0036f458 + 0x30);
  if (iVar5 == iVar2) {
    if (iVar2 == 4) {
      iVar2 = FUN_001fd380();
      if (*(int *)(iVar2 + 0x50) != *(int *)(iVar2 + 0x4c)) {
        if (*(int *)(iVar2 + 0x50) - 4U < 2) {
          iVar6 = 3;
        }
        else {
          iVar6 = 6;
        }
      }
    }
    else if (iVar2 == 0x1b) {
      iVar2 = FUN_001fd380();
      if ((*(int *)(iVar2 + 0x650) != *(int *)(iVar2 + 0x64c)) &&
         ((*(uint *)(iRam0036f458 + 0x28) & 0x80000000) == 0)) {
        switch(*(int *)(iVar2 + 0x650)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 9:
        case 0xb:
          iVar6 = 5;
          break;
        case 4:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0x10:
        case 0x12:
        case 0x16:
        case 0x17:
        case 0x1b:
        case 0x1c:
        case 0x22:
        case 0x23:
          iVar6 = 2;
          break;
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x21:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x29:
        case 0x2b:
        case 0x2c:
          iVar6 = 1;
          break;
        case 0x20:
        case 0x2a:
          iVar6 = 3;
        }
      }
    }
    else if (iVar2 == 0x2b) {
      iVar2 = FUN_001fd380();
      if (*(uint *)(iVar2 + 0x6a4) != *(uint *)(iVar2 + 0x6a0)) {
        if (*(uint *)(iVar2 + 0x6a4) < 2) {
          iVar6 = 5;
        }
        else {
          iVar6 = 1;
        }
      }
    }
    else {
      if (iVar2 != 0x20) goto LAB_001fc868;
      iVar2 = FUN_001fd380();
      if (*(int *)(iVar2 + 0x888) != *(int *)(iVar2 + 0x884)) {
        switch(*(int *)(iVar2 + 0x888)) {
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          iVar6 = 5;
          break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
          iVar6 = 1;
        }
      }
    }
  }
  else if (iVar5 == 0xf) {
    iVar6 = 4;
  }
  else if (iVar5 == 0x12) {
    iVar6 = 3;
  }
  else if ((iVar5 == 0x1b) || (iVar5 == 0xc)) {
    iVar5 = 5;
    iVar6 = iVar5;
    if (iVar2 == 0xf) {
      iVar6 = 1;
      if (((*(uint *)(iRam0036f458 + 0x28) & 0x10000000) == 0) &&
         (iVar6 = iVar5, (*(uint *)(iRam0036f458 + 0x28) & 0x20000000) == 0)) {
        iVar6 = 2;
      }
    }
    else if (iVar2 == -1) {
      cVar1 = FUN_0017e890();
      if (cVar1 == '\x02') {
        iVar6 = 1;
        uVar4 = FUN_00176fa0();
        if (((uVar4 & 1) != 0) && (FUN_00176e90(acStack_10), acStack_10[0] == '\x05')) {
          iVar6 = 3;
        }
        cVar1 = FUN_0017e890();
        if (cVar1 == '\x01') {
          iVar6 = 5;
        }
        else {
          cVar1 = FUN_0017e890();
          if (cVar1 == '\x05') {
            iVar6 = 5;
          }
        }
        cVar1 = FUN_0017e890();
        if (cVar1 == '\x02') {
          uVar4 = FUN_00176fa0();
          if (((uVar4 & 2) != 0) || (uVar4 = FUN_00176fa0(), (uVar4 & 4) != 0)) {
            FUN_00176ef0(acStack_20);
            if ((acStack_20[0] == '\x05') || (FUN_00176ef0(acStack_30), acStack_30[0] == '\b')) {
              iVar6 = 5;
            }
            else {
              FUN_00176ef0(acStack_40);
              if (acStack_40[0] == '\x06') {
                iVar6 = 5;
              }
            }
          }
          uVar4 = FUN_00176fa0();
          if ((uVar4 & 0x100000) != 0) {
            iVar6 = 5;
          }
        }
      }
      else {
        cVar1 = FUN_0017e890();
        if (cVar1 == '\x03') {
          iVar6 = 1;
        }
      }
    }
  }
  else if (iVar5 == 4) {
    if (iVar2 == -1) {
      iVar6 = 3;
    }
    else {
      iVar6 = 6;
    }
  }
  else if (iVar5 == 0x2b) {
    if ((iVar2 == 0x23) || (iVar2 == 0x18)) {
      iVar6 = 1;
    }
    else {
      iVar6 = 5;
    }
  }
  else if (iVar5 == 0x20) {
    if (iVar2 == 0x23) {
      iVar6 = 1;
    }
    else {
      iVar6 = 5;
    }
  }
  else {
    if ((((iVar5 == 0x11) || (iVar5 == 0x23)) || (iVar5 == 0x25)) || (iVar5 == 0x24)) {
      return 0;
    }
    iVar6 = 1;
  }
LAB_001fc868:
  if ((iVar6 == *(int *)(iRam0036f458 + 0x30)) || (iVar6 == *(int *)(iRam0036f458 + 0x34))) {
    uVar3 = 0;
  }
  else {
    if (iVar6 - 5U < 2) {
      FUN_001fb2f0();
    }
    *(int *)(iRam0036f458 + 0x34) = iVar6;
    if (((*(int *)(iRam0036f458 + 0x30) == 0) && (*(int *)(iRam0036f458 + 0x34) != 5)) &&
       (*(int *)(iRam0036f458 + 0x34) != 6)) {
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x100;
      FUN_001ee6c0(iRam0036f458 + 0x40,0x3294a8,0x430750);
    }
    uVar3 = 1;
  }
  return uVar3;
}

// 0x001fc9b0  size 0x6c0
undefined8 FUN_001fc9b0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  char acStack_40 [16];
  char acStack_30 [16];
  char acStack_20 [16];
  char acStack_10 [16];
  
  uVar4 = FUN_001c1890(0);
  iVar1 = *(int *)(iGpffff8d68 + 0x1c);
  iVar3 = *(int *)(iGpffff8d68 + 0x20);
  if (iVar3 == iVar1) {
    if (iVar1 == 0x1b) {
      iVar3 = FUN_001fd380();
      iVar1 = *(int *)(iVar3 + 0x650);
      if ((iVar1 != *(int *)(iVar3 + 0x64c)) && ((*(uint *)(iGpffff8d68 + 0x28) & 0x80000000) == 0))
      {
        if ((iVar1 == 0x2a) || (iVar1 == 0x20)) {
          *(undefined4 *)(iGpffff8d68 + 0x3c) = 0x12;
        }
        else if (((((iVar1 == 0x2e) || (iVar1 == 0x2b)) || (iVar1 == 0x29)) ||
                 (((iVar1 == 0x21 || (iVar1 == 0x1f)) ||
                  ((iVar1 == 0x15 || ((iVar1 == 0x14 || (iVar1 == 0x1a)))))))) || (iVar1 == 0x19)) {
          *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xffffffff;
        }
        else if ((((iVar1 == 9) || (iVar1 == 6)) || (iVar1 == 0xb)) ||
                (((iVar1 == 5 || (iVar1 == 7)) ||
                 (((iVar1 == 2 || ((iVar1 == 1 || (iVar1 == 3)))) || (iVar1 == 0)))))) {
          cVar2 = FUN_001c16e0(uVar4);
          uVar6 = 0x27;
          if (cVar2 != '\0') {
            uVar6 = 0x28;
          }
          *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
        }
        else {
          cVar2 = FUN_001c16e0(uVar4);
          uVar6 = 7;
          if (cVar2 != '\0') {
            uVar6 = 8;
          }
          *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
        }
      }
    }
    else if (iVar1 == 4) {
      iVar3 = FUN_001fd380();
      iVar1 = *(int *)(iVar3 + 0x50);
      if (iVar1 != *(int *)(iVar3 + 0x4c)) {
        if (iVar1 == 4) {
          *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xffffffff;
        }
        else if (iVar1 == 5) {
          *(undefined4 *)(iGpffff8d68 + 0x3c) = 0x12;
        }
        else {
          cVar2 = FUN_001c16e0(uVar4);
          uVar6 = 0x27;
          if (cVar2 != '\0') {
            uVar6 = 0x28;
          }
          *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
        }
      }
    }
  }
  else if (iVar3 == 0xe) {
    *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xe;
  }
  else if (iVar3 == 0xd) {
    *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xd;
  }
  else if (((iVar3 == 0x2b) || (iVar3 == 0x21)) || (iVar3 == 0x20)) {
    *(undefined4 *)(iGpffff8d68 + 0x3c) = 0x27;
  }
  else if (iVar3 == 0x1b) {
    if (iVar1 != 0xf) {
      if (iVar1 == -1) {
        cVar2 = FUN_0017e8d0();
        if (cVar2 == '\a') {
          cVar2 = FUN_001c16e0(uVar4);
          uVar6 = 0x27;
          if (cVar2 != '\0') {
            uVar6 = 0x28;
          }
          *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
        }
        else {
          *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xffffffff;
          cVar2 = FUN_0017e890();
          if (cVar2 == '\x01') {
            cVar2 = FUN_001c16e0(uVar4);
            uVar6 = 0x27;
            if (cVar2 != '\0') {
              uVar6 = 0x28;
            }
            *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
          }
          else {
            cVar2 = FUN_0017e890();
            if (cVar2 == '\x05') {
              cVar2 = FUN_001c16e0(uVar4);
              uVar6 = 0x27;
              if (cVar2 != '\0') {
                uVar6 = 0x28;
              }
              *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
            }
          }
          cVar2 = FUN_0017e890();
          if (cVar2 == '\x02') {
            FUN_00176ef0(acStack_10);
            if ((acStack_10[0] == '\x05') && (uVar5 = FUN_00176fa0(), (uVar5 & 1) != 0)) {
              *(undefined4 *)(iGpffff8d68 + 0x3c) = 0x12;
            }
            else {
              uVar5 = FUN_00176fa0();
              if ((((uVar5 & 2) != 0) || (uVar5 = FUN_00176fa0(), (uVar5 & 4) != 0)) &&
                 (((FUN_00176ef0(acStack_20), acStack_20[0] == '\x05' ||
                   (FUN_00176ef0(acStack_30), acStack_30[0] == '\b')) ||
                  (FUN_00176ef0(acStack_40), acStack_40[0] == '\x06')))) {
                cVar2 = FUN_001c16e0(uVar4);
                uVar6 = 0x27;
                if (cVar2 != '\0') {
                  uVar6 = 0x28;
                }
                *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
              }
              uVar5 = FUN_00176fa0();
              if ((uVar5 & 0x100000) != 0) {
                cVar2 = FUN_001c16e0(uVar4);
                uVar6 = 0x27;
                if (cVar2 != '\0') {
                  uVar6 = 0x28;
                }
                *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
              }
            }
          }
        }
      }
      else {
        cVar2 = FUN_001c16e0(uVar4);
        uVar6 = 0x27;
        if (cVar2 != '\0') {
          uVar6 = 0x28;
        }
        *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
      }
    }
  }
  else if (iVar3 == 0x27) {
    *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xb;
  }
  else if (((iVar3 == 0x1a) || (iVar3 == 0x19)) || ((iVar3 == 0x18 || (iVar3 == 0x17)))) {
    cVar2 = FUN_001c16e0(uVar4);
    uVar6 = 0xd;
    if (cVar2 != '\0') {
      uVar6 = 0xe;
    }
    *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
  }
  else if (iVar3 == 0xc) {
    cVar2 = FUN_001c16e0(uVar4);
    uVar6 = 0x27;
    if (cVar2 != '\0') {
      uVar6 = 0x28;
    }
    *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
  }
  else if (iVar3 == 4) {
    if (iVar1 == -1) {
      *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xffffffff;
    }
    else {
      cVar2 = FUN_001c16e0(uVar4);
      uVar6 = 0x27;
      if (cVar2 != '\0') {
        uVar6 = 0x28;
      }
      *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
    }
  }
  else if ((iVar3 == 0x16) || (iVar3 == 9)) {
    *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xf;
  }
  else if ((((((iVar3 == 0x2c) || (iVar3 == 0x2d)) || (iVar3 == 0)) ||
            ((iVar3 == -1 || (iVar3 == -2)))) || (iVar3 == -3)) || ((iVar3 == -4 || (iVar3 == -6))))
  {
    *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xffffffff;
  }
  else if ((((iVar3 != 0xf) && (iVar3 != 0x11)) && (iVar3 != 0x23)) &&
          ((iVar3 != 0x25 && (iVar3 != 0x24)))) {
    cVar2 = FUN_001c16e0(uVar4);
    uVar6 = 0xd;
    if (cVar2 != '\0') {
      uVar6 = 0xe;
    }
    *(undefined4 *)(iGpffff8d68 + 0x3c) = uVar6;
  }
  return 0;
}

// 0x001fd070  size 0x50
void FUN_001fd070(long param_1)

{
  if (param_1 < 0) {
    FUN_00206480();
    *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xffffffff;
  }
  *(int *)(iGpffff8d68 + 0x20) = (int)param_1;
  return;
}

// 0x001fd0c0  size 0x10c
undefined4 FUN_001fd0c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  
  iVar3 = *(int *)(iGpffff8d68 + 0x1c);
  iVar1 = *(int *)(iGpffff8d68 + 0x20);
  if (((iVar1 == iVar3) || (iVar1 == -1)) ||
     (psVar4 = (short *)(&PTR_DAT_00328f60)[iVar1], psVar4 == (short *)0x0)) {
    uVar2 = 0;
  }
  else if ((iVar3 == -1) || ((short *)(&PTR_DAT_00328f60)[iVar3] == (short *)0x0)) {
    uVar2 = 1;
  }
  else if (psVar4 == (short *)(&PTR_DAT_00328f60)[iVar3]) {
    uVar2 = 0;
  }
  else {
    iVar3 = 0;
    while( true ) {
      if ((*psVar4 == -2) &&
         (*(short *)((&PTR_DAT_00328f60)[*(int *)(iGpffff8d68 + 0x1c)] + iVar3) == -2)) {
        return 1;
      }
      if ((*(short *)((&PTR_DAT_00328f60)[*(int *)(iGpffff8d68 + 0x1c)] + iVar3) == -2) ||
         (*(short *)((&PTR_DAT_00328f60)[*(int *)(iGpffff8d68 + 0x20)] + iVar3) !=
          *(short *)((&PTR_DAT_00328f60)[*(int *)(iGpffff8d68 + 0x1c)] + iVar3))) break;
      psVar4 = psVar4 + 1;
      iVar3 = iVar3 + 2;
    }
    uVar2 = 1;
  }
  return uVar2;
}

// 0x001fd1d0  size 0xfc
undefined8 FUN_001fd1d0(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)(iGpffff8d68 + 0x20) < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((*(uint *)(iGpffff8d68 + 0x28) & 0x20) == 0) {
      lVar2 = FUN_001fd0c0();
      if (lVar2 == 1) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x20;
        uVar1 = 1;
      }
    }
    if ((*(uint *)(iGpffff8d68 + 0x28) & 0x40) == 0) {
      lVar2 = FUN_001fc500();
      if (lVar2 == 1) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x40;
        uVar1 = 1;
      }
    }
    if ((*(uint *)(iGpffff8d68 + 0x28) & 0x80) == 0) {
      lVar2 = FUN_001fc9b0();
      if (lVar2 == 1) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x80;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

// 0x001fd2d0  size 0xa8
undefined4 FUN_001fd2d0(void)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)(iGpffff8d68 + 0x20) == *(int *)(iGpffff8d68 + 0x1c)) {
    lVar2 = FUN_001fd1d0();
    if (lVar2 != 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    }
    uVar1 = 0;
  }
  else {
    if (*(int *)(iGpffff8d68 + 0x20) < -1) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    }
    else {
      lVar2 = FUN_001fd1d0();
      if (lVar2 != 0) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
      }
    }
    uVar1 = 1;
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xfffffffb;
  }
  return uVar1;
}

// 0x001fd380  size 0x200
int FUN_001fd380(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(iGpffff8d68 + 0x530);
  switch(param_1) {
  case 0:
    break;
  case 1:
    iVar1 = iVar1 + 0x77c;
    break;
  case 2:
    iVar1 = iVar1 + 0x784;
    break;
  case 3:
    iVar1 = iVar1 + 0xc90;
    break;
  case 4:
    iVar1 = iVar1 + 0xd08;
    break;
  case 5:
    iVar1 = iVar1 + 0xd78;
    break;
  case 6:
    iVar1 = iVar1 + 0x628c;
    break;
  case 7:
    iVar1 = iVar1 + 0x6610;
    break;
  case 8:
    iVar1 = iVar1 + 0x6c9c;
    break;
  case 9:
    iVar1 = iVar1 + 0x6cc0;
    break;
  case 10:
    iVar1 = iVar1 + 0x6d04;
    break;
  case 0xb:
    iVar1 = iVar1 + 0x6d28;
    break;
  case 0xc:
    iVar1 = iVar1 + 0x6d30;
    break;
  case 0xd:
    iVar1 = iVar1 + 0x6d40;
    break;
  case 0xe:
    iVar1 = iVar1 + 0x6d88;
    break;
  case 0xf:
    iVar1 = iVar1 + 0x6dd0;
    break;
  case 0x10:
    iVar1 = iVar1 + 0x6e38;
    break;
  case 0x11:
    iVar1 = iVar1 + 0x6f68;
    break;
  case 0x12:
    iVar1 = iVar1 + 0x6f90;
    break;
  case 0x13:
    iVar1 = iVar1 + 0x71b0;
    break;
  case 0x14:
    iVar1 = iVar1 + 0x7a20;
    break;
  case 0x15:
    iVar1 = iVar1 + 0x7b48;
    break;
  case 0x16:
    iVar1 = iVar1 + 0x7b8c;
    break;
  case 0x17:
    iVar1 = iVar1 + 0x7bc0;
    break;
  case 0x18:
    iVar1 = iVar1 + 0x83ac;
    break;
  case 0x19:
    iVar1 = iVar1 + 0x8b30;
    break;
  case 0x1a:
    iVar1 = iVar1 + 0x92ac;
    break;
  case 0x1b:
    iVar1 = iVar1 + 0x98b4;
    break;
  case 0x1c:
    iVar1 = iVar1 + 0x9fd0;
    break;
  case 0x1d:
    iVar1 = iVar1 + 0x9fd4;
    break;
  case 0x1e:
    iVar1 = iVar1 + 0xa044;
    break;
  case 0x1f:
    iVar1 = iVar1 + 0xa944;
    break;
  case 0x20:
    iVar1 = iVar1 + 0xa980;
    break;
  case 0x21:
    iVar1 = iVar1 + 0xb250;
    break;
  case 0x22:
    iVar1 = iVar1 + 0xb274;
    break;
  case 0x23:
    iVar1 = iVar1 + 0xb2a4;
    break;
  case 0x24:
    iVar1 = iVar1 + 0xb2f4;
    break;
  case 0x25:
    iVar1 = iVar1 + 0xb300;
    break;
  case 0x26:
    iVar1 = iVar1 + 0xb638;
    break;
  case 0x27:
    iVar1 = iVar1 + 0xb688;
    break;
  case 0x28:
    iVar1 = iVar1 + 0xb7c4;
    break;
  case 0x29:
    iVar1 = iVar1 + 0xb7c8;
    break;
  case 0x2a:
    iVar1 = iVar1 + 0xc1f0;
    break;
  case 0x2b:
    iVar1 = iVar1 + 0xc330;
    break;
  case 0x2c:
    iVar1 = iVar1 + 0xc9f4;
    break;
  case 0x2d:
    iVar1 = iVar1 + 0xca38;
    break;
  default:
    iVar1 = 0;
  }
  return iVar1;
}

// 0x001fd580  size 0x4c
void FUN_001fd580(void)

{
  if (*(int *)(iGpffff8d68 + 0x530) != 0) {
    FUN_00100290();
    *(undefined4 *)(iGpffff8d68 + 0x530) = 0;
  }
  if (iGpffff8d68 != 0) {
    FUN_00100290();
  }
  iGpffff8d68 = 0;
  return;
}

// 0x001fd5d0  size 0x260
void FUN_001fd5d0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iGpffff8d68 = FUN_00100680(0x660,param_1);
  uVar1 = FUN_00100680(0xca68,param_1);
  iVar6 = 0;
  *(undefined4 *)(iGpffff8d68 + 0x530) = uVar1;
  *(undefined4 *)(iGpffff8d68 + 0x1c) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x20) = param_2;
  *(undefined4 *)(iGpffff8d68 + 0x24) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x30) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x34) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x28) = 4;
  *(undefined4 *)(iGpffff8d68 + 0x38) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x3c) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x534) = 0;
  iVar5 = iGpffff8d68 + 0x534;
  *(undefined4 *)(iGpffff8d68 + 0x538) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x53c) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x540) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x594) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x598) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x59c) = *(undefined4 *)(iGpffff8d68 + 0x598);
  *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x544) = 0xfffffffe;
  iVar4 = iVar5;
  do {
    *(undefined2 *)(iVar4 + 0x14) = 0x162;
    iVar6 = iVar6 + 7;
    *(undefined2 *)(iVar4 + 0x16) = 0x162;
    *(undefined2 *)(iVar4 + 0x18) = 0x162;
    *(undefined2 *)(iVar4 + 0x1a) = 0x162;
    *(undefined2 *)(iVar4 + 0x1c) = 0x162;
    *(undefined2 *)(iVar4 + 0x1e) = 0x162;
    *(undefined2 *)(iVar4 + 0x20) = 0x162;
    iVar4 = iVar4 + 0xe;
  } while (iVar6 < 0x15);
  iVar4 = 0;
  do {
    *(undefined2 *)(iVar5 + 0x3e) = 0xfffe;
    iVar4 = iVar4 + 8;
    *(undefined2 *)(iVar5 + 0x40) = 0xfffe;
    *(undefined2 *)(iVar5 + 0x42) = 0xfffe;
    *(undefined2 *)(iVar5 + 0x44) = 0xfffe;
    *(undefined2 *)(iVar5 + 0x46) = 0xfffe;
    *(undefined2 *)(iVar5 + 0x48) = 0xfffe;
    *(undefined2 *)(iVar5 + 0x4a) = 0xfffe;
    *(undefined2 *)(iVar5 + 0x4c) = 0xfffe;
    iVar5 = iVar5 + 0x10;
  } while (iVar4 < 0x10);
  *(undefined1 *)(iGpffff8d68 + 0x5ac) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x5b8) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x5b4) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x5d8) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x5dc) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x5f0) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x5fc) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x600) = 0;
  *(undefined1 *)(iGpffff8d68 + 0x620) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x62c) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x614) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x618) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
  *(undefined4 *)(iGpffff8d68 + 0x648) = 0xa0;
  *(undefined4 *)(iGpffff8d68 + 0x64c) = 0x31;
  *(undefined4 *)(iGpffff8d68 + 0x650) = 0;
  *(uint *)(iGpffff8d78 + 0x10) = *(uint *)(iGpffff8d78 + 0x10) | 0x10;
  *(uint *)(iGpffff8d78 + 0x10) = *(uint *)(iGpffff8d78 + 0x10) | 0x80;
  FUN_001ee970(iGpffff8d68 + 0x40,uGpffff8bd0,uGpffff8bd0,0);
  FUN_001fd1d0();
  if (*(int *)(iGpffff8d68 + 0x20) < -1) {
    FUN_001fb660();
  }
  *(undefined4 *)(iGpffff8d68 + 0x24) = *(undefined4 *)(iGpffff8d68 + 0x1c);
  *(undefined4 *)(iGpffff8d68 + 0x1c) = *(undefined4 *)(iGpffff8d68 + 0x20);
  FUN_001fc2d0();
  uVar2 = FUN_001c1890(0);
  uVar3 = FUN_001bdd00(uVar2);
  if ((uVar3 & 0x3fe) != 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x80000000;
  }
  return;
}

// 0x001fd830  size 0x238
undefined4 FUN_001fd830(int param_1,ulong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = piGpffff8d78[param_1 + 2];
  uVar1 = 0;
  if ((piGpffff8d78[param_1 + 4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar2 = 0x100000;
  }
  if ((uVar2 == 0x40000) || (uVar2 == 0x2000)) {
    if ((param_2 & 0x40) == 0) {
      if ((param_2 & 0x80) != 0) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else if ((uVar2 == 0x10000) || (uVar2 == 0x400)) {
    if ((param_2 & 0x40) == 0) {
      if ((param_2 & 0x80) != 0) {
        uVar1 = 0xffffffff;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else if ((uVar2 == 0x20000) || (uVar2 == 0x1000)) {
    if ((param_2 & 0x10) == 0) {
      if ((param_2 & 0x20) != 0) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else if ((uVar2 == 0x8000) || (uVar2 == 0x200)) {
    if ((param_2 & 0x10) == 0) {
      if ((param_2 & 0x20) != 0) {
        uVar1 = 0xffffffff;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else if (uVar2 == 8) {
    if ((param_2 & 4) == 0) {
      if ((param_2 & 8) != 0) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else if (uVar2 == 4) {
    if ((param_2 & 4) == 0) {
      if ((param_2 & 8) != 0) {
        uVar1 = 0xffffffff;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else if (uVar2 == 2) {
    if ((param_2 & 1) == 0) {
      if ((param_2 & 2) != 0) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else if (uVar2 == 1) {
    if ((param_2 & 1) == 0) {
      if ((param_2 & 2) != 0) {
        uVar1 = 0xffffffff;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

// 0x001fda70  size 0x378
undefined4 FUN_001fda70(int param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = DAT_0036e880;
  auStack_8[1] = DAT_0036e884;
  lVar3 = FUN_00141310(auStack_8[*(char *)(param_1 + 0x1c)]);
  if (lVar3 != 0) {
    iVar5 = (int)lVar3;
    lVar4 = (**(code **)(*(int *)(iVar5 + 4) + 8))(lVar3);
    if (lVar4 != 0) {
      lVar4 = FUN_001419f0(lVar3);
      if (lVar4 != 0) {
        if (*(int *)(iRam0036f468 + 4) == 1) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        return 0x100000;
      }
      if ((*(int *)(iRam0036f468 + 4) == 1) && (*(int *)(param_1 + 8) == 0)) {
        *(undefined4 *)(param_1 + 8) = 1;
        iVar2 = FUN_001831b0();
        FUN_00182d60(iVar2 + (*(char *)(param_1 + 0x1c) * 0x1c + (int)*(char *)(param_1 + 0x1c)) * 8
                     + 0x28,lVar3);
      }
      uVar1 = *(uint *)(iVar5 + 0x14);
      if ((uVar1 & 0x100) != 0) {
        return 0x10;
      }
      if (((uVar1 & 0x40) != 0) || ((uVar1 & 0x200) != 0)) {
        return 0x20;
      }
      if ((uVar1 & 2) != 0) {
        return 0x40;
      }
      if ((uVar1 & 1) != 0) {
        return 0x80;
      }
      if ((uVar1 & 0x10) != 0) {
        return 4;
      }
      if ((uVar1 & 0x20) != 0) {
        return 8;
      }
      if ((uVar1 & 4) != 0) {
        return 1;
      }
      if ((uVar1 & 8) != 0) {
        return 2;
      }
      if ((uVar1 & 0x400) != 0) {
        return 0x200;
      }
      if ((uVar1 & 0x1000) != 0) {
        return 0x400;
      }
      if ((uVar1 & 0x4000) != 0) {
        return 0x800;
      }
      if ((uVar1 & 0x800) != 0) {
        return 0x1000;
      }
      if ((uVar1 & 0x2000) != 0) {
        return 0x2000;
      }
      if ((uVar1 & 0x8000) != 0) {
        return 0x4000;
      }
      uVar1 = *(uint *)(iVar5 + 0x1c);
      if ((uVar1 & 0x400) != 0) {
        return 0x8000;
      }
      if ((uVar1 & 0x1000) != 0) {
        return 0x10000;
      }
      if ((uVar1 & 0x800) != 0) {
        return 0x20000;
      }
      if ((uVar1 & 0x2000) != 0) {
        return 0x40000;
      }
      if (((((uVar1 & 0x10) == 0) && ((uVar1 & 0x20) == 0)) && ((uVar1 & 4) == 0)) &&
         ((uVar1 & 8) == 0)) {
        if ((((-0.2 <= *(float *)(iVar5 + 0x370)) && (*(float *)(iVar5 + 0x370) <= 0.2)) &&
            (-0.2 <= *(float *)(iVar5 + 0x380))) && (*(float *)(iVar5 + 0x380) <= 0.2)) {
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
        if ((*(float *)(iVar5 + 0x370) < -0.2) && (*(int *)(param_1 + 0x14) == 0)) {
          return 4;
        }
        if ((0.2 < *(float *)(iVar5 + 0x370)) && (*(int *)(param_1 + 0x14) == 0)) {
          return 8;
        }
        return 0x100000;
      }
      if (((uVar1 & 0x10) != 0) && (*(int *)(param_1 + 0x14) == 0)) {
        return 4;
      }
      if (((uVar1 & 0x20) != 0) && (*(int *)(param_1 + 0x14) == 0)) {
        return 8;
      }
      if (((uVar1 & 4) != 0) && (*(int *)(param_1 + 0x14) == 0)) {
        return 1;
      }
      if (((uVar1 & 8) == 0) || (*(int *)(param_1 + 0x14) != 0)) {
        return 0x100000;
      }
      return 2;
    }
  }
  if (*(int *)(iRam0036f468 + 4) == 1) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0x80000;
}

// 0x001fddf0  size 0x20c
undefined4 FUN_001fddf0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = FUN_001375f0(*(undefined1 *)(param_1 + 0x1c),0);
  iVar2 = (int)uVar4;
  lVar5 = (**(code **)(*(int *)(iVar2 + 4) + 8))(uVar4);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar3 = 0x80000;
  }
  else {
    lVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0xc))(uVar4,0xffffffffffffffff);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      uVar3 = 0x80000;
    }
    else if (*(int *)(param_1 + 0x10) == 0) {
      uVar3 = 0x100000;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      uVar1 = *(uint *)(iVar2 + 0x14);
      if (((uVar1 & 0x80) == 0) && ((uVar1 & 0x100) == 0)) {
        if (((uVar1 & 0x40) == 0) && ((uVar1 & 0x200) == 0)) {
          if ((uVar1 & 2) == 0) {
            if ((uVar1 & 1) == 0) {
              if ((uVar1 & 0x100010) == 0) {
                if ((uVar1 & 0x200020) == 0) {
                  if ((uVar1 & 0x400004) == 0) {
                    if ((uVar1 & 0x800008) == 0) {
                      if ((uVar1 & 0x400) == 0) {
                        if ((uVar1 & 0x1000) == 0) {
                          if ((uVar1 & 0x4000) == 0) {
                            if ((uVar1 & 0x800) == 0) {
                              if ((uVar1 & 0x2000) == 0) {
                                if ((uVar1 & 0x8000) == 0) {
                                  uVar1 = *(uint *)(iVar2 + 0x1c);
                                  if ((uVar1 & 0x400) == 0) {
                                    if ((uVar1 & 0x1000) == 0) {
                                      if ((uVar1 & 0x800) == 0) {
                                        if ((uVar1 & 0x2000) == 0) {
                                          if ((uVar1 & 0xf0003c) != 0) {
                                            if ((uVar1 & 0x100010) != 0) {
                                              return 4;
                                            }
                                            if ((uVar1 & 0x200020) != 0) {
                                              return 8;
                                            }
                                            if ((uVar1 & 0x400004) != 0) {
                                              return 1;
                                            }
                                            if ((uVar1 & 0x800008) != 0) {
                                              return 2;
                                            }
                                          }
                                          uVar3 = 0x100000;
                                        }
                                        else {
                                          uVar3 = 0x40000;
                                        }
                                      }
                                      else {
                                        uVar3 = 0x20000;
                                      }
                                    }
                                    else {
                                      uVar3 = 0x10000;
                                    }
                                  }
                                  else {
                                    uVar3 = 0x8000;
                                  }
                                }
                                else {
                                  uVar3 = 0x4000;
                                }
                              }
                              else {
                                uVar3 = 0x2000;
                              }
                            }
                            else {
                              uVar3 = 0x1000;
                            }
                          }
                          else {
                            uVar3 = 0x800;
                          }
                        }
                        else {
                          uVar3 = 0x400;
                        }
                      }
                      else {
                        uVar3 = 0x200;
                      }
                    }
                    else {
                      uVar3 = 2;
                    }
                  }
                  else {
                    uVar3 = 1;
                  }
                }
                else {
                  uVar3 = 8;
                }
              }
              else {
                uVar3 = 4;
              }
            }
            else {
              uVar3 = 0x80;
            }
          }
          else {
            uVar3 = 0x40;
          }
        }
        else {
          uVar3 = 0x20;
        }
      }
      else {
        uVar3 = 0x10;
      }
    }
  }
  return uVar3;
}

// 0x001fe000  size 0xfc
long FUN_001fe000(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = FUN_001fddf0();
  lVar2 = FUN_001fda70(param_1);
  iVar4 = (int)param_1;
  iVar3 = *(int *)(iVar4 + 0x14) + -1;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  *(int *)(iVar4 + 0x14) = iVar3;
  if ((lVar1 == 0x80000) && (lVar2 == 0x80000)) {
    *(undefined4 *)(iVar4 + 0xc) = 0;
    lVar2 = 0x80000;
  }
  else if ((lVar1 == 0x100000) && (lVar2 == 0x80000)) {
    *(undefined4 *)(iVar4 + 0xc) = 0;
    lVar2 = 0x100000;
  }
  else if (*(int *)(iVar4 + 0xc) == 0) {
    if ((lVar1 == 0x100000) || (lVar1 == 0x80000)) {
      if ((lVar2 != 0x100000) && (lVar2 != 0x80000)) {
        *(undefined4 *)(iVar4 + 0xc) = 1;
        *(undefined4 *)(iVar4 + 0x14) = 0xf;
      }
    }
    else {
      *(undefined4 *)(iVar4 + 0xc) = 1;
      lVar2 = lVar1;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0xc) = 0;
    lVar2 = 0x100000;
  }
  return lVar2;
}

// 0x001fe100  size 0x4c
void FUN_001fe100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iRam0036f468 != 0) {
    uVar2 = FUN_001fe000(iVar1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    *(undefined4 *)(*(char *)(iVar1 + 0x1c) * 4 + iRam0036f468 + 8) = *(undefined4 *)(iVar1 + 0x18);
  }
  return;
}

// 0x001fe160  size 0x16c
void FUN_001fe160(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = 10;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(char *)(iVar1 + 0x1c) = (char)*(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar3 = FUN_001375f0(*(undefined1 *)(iVar1 + 0x1c),0);
  iVar4 = (int)uVar3;
  FUN_00134440(iVar4 + 8,2,10,5);
  FUN_00134440(iVar4 + 8,3,10,5);
  FUN_00134440(iVar4 + 8,4,10,5);
  FUN_00134440(iVar4 + 8,5,10,5);
  FUN_00134440(iVar4 + 8,0x10,10,5);
  FUN_00134440(iVar4 + 8,0x11,10,5);
  FUN_00134440(iVar4 + 8,0x12,10,5);
  FUN_00134440(iVar4 + 8,0x13,10,5);
  FUN_00134440(iVar4 + 8,0x14,10,5);
  FUN_00134440(iVar4 + 8,0x15,10,5);
  FUN_00134440(iVar4 + 8,0x16,10,5);
  FUN_00134440(iVar4 + 8,0x17,10,5);
  uVar2 = (**(code **)(*(int *)(iVar4 + 4) + 8))(uVar3);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  *(code **)(param_1 + 0x1c) = FUN_001fe100;
  return;
}

// 0x001fe2d0  size 0x2c
void FUN_001fe2d0(void)

{
  if (iRam0036f468 != 0) {
    FUN_00100290();
  }
  iRam0036f468 = 0;
  return;
}

// 0x001fe300  size 0x70
void FUN_001fe300(undefined8 param_1,undefined4 param_2)

{
  puRam0036f468 = (undefined4 *)FUN_00100680(0x18,param_1);
  puRam0036f468[1] = param_2;
  puRam0036f468[2] = 0x100000;
  puRam0036f468[4] = 0x1fffff;
  puRam0036f468[3] = 0x100000;
  puRam0036f468[5] = 0x1fffff;
  *puRam0036f468 = 1;
  return;
}

// 0x001fe370  size 0x5c
void FUN_001fe370(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  *param_1 = -1;
  if (param_2 == 1) {
    *param_1 = (param_6 + param_5 + (param_4 - param_3)) % param_5;
  }
  else if (param_2 == 2) {
    *param_1 = (param_5 + (param_4 - param_3) + -1) % param_5;
  }
  return;
}

// 0x001fe3d0  size 0x250
void FUN_001fe3d0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 2) {
    iVar1 = FUN_001f48c0(param_2);
    iVar2 = (int)param_4 * 0x14;
    if (*(int *)(iVar2 + *piRam0036f42c + iVar1 * 0x4f4 + 0x31c) == 1) {
      iVar1 = FUN_001f48c0(param_2);
      FUN_001ecd80(*piRam0036f42c + iVar1 * 0x4f4 + 4,param_4);
    }
    else {
      puRam0036f478[2] = 0xffffffff;
      *puRam0036f478 = 0xffffffff;
      *param_1 = 0;
      iVar1 = FUN_001f48c0(param_2);
      iVar2 = iVar2 + *piRam0036f42c + iVar1 * 0x4f4 + 4;
      *(undefined4 *)(iVar2 + 0x30c) = 0;
      if (*(int *)(iVar2 + 0x31c) == 0) {
        *(undefined4 *)(iVar2 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x318) = 1;
      }
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffbfffff;
    }
  }
  else if (*param_1 == 1) {
    iVar1 = FUN_001f48c0(param_2);
    iVar2 = (int)param_3 * 0x14;
    if (*(int *)(iVar2 + *piRam0036f42c + iVar1 * 0x4f4 + 0x31c) == 1) {
      iVar1 = FUN_001f48c0(param_2);
      FUN_001ecd80(*piRam0036f42c + iVar1 * 0x4f4 + 4,param_3);
    }
    else {
      puRam0036f478[2] = 0xffffffff;
      *puRam0036f478 = 0xffffffff;
      *param_1 = 0;
      iVar1 = FUN_001f48c0(param_2);
      iVar2 = iVar2 + *piRam0036f42c + iVar1 * 0x4f4 + 4;
      *(undefined4 *)(iVar2 + 0x30c) = 0;
      if (*(int *)(iVar2 + 0x31c) == 0) {
        *(undefined4 *)(iVar2 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x318) = 1;
      }
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffbfffff;
    }
  }
  return;
}

// 0x001fe620  size 0x224
void FUN_001fe620(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [64];
  
  iVar2 = (((int)param_3 % 1000) * 1000) % 1000;
  iVar1 = (int)param_3 - iVar2 / 1000;
  if (param_3 == 0) {
    iVar2 = FUN_001f48c0();
    FUN_001ede20(*piRam0036f42c + iVar2 * 0x4f4 + 4,auStack_40,param_2);
    FUN_001f1350(auStack_40,0x34);
  }
  else if (param_3 < 1) {
    FUN_002010a0(param_1,param_2,0x35,iVar2);
  }
  else if (param_3 < 1000) {
    FUN_002010a0(param_1,param_2,0x36,iVar1 % 1000,iVar2);
  }
  else if (param_3 < 1000000) {
    FUN_002010a0(param_1,param_2,0x37,(iVar1 / 1000) % 1000,iVar1 % 1000,iVar2);
  }
  else if (param_3 < 1000000000) {
    FUN_002010a0(param_1,param_2,0x38,((iVar1 / 1000) / 1000) % 1000,(iVar1 / 1000) % 1000,
                 iVar1 % 1000,iVar2);
  }
  else {
    iVar2 = (iVar1 / 1000) / 1000;
    FUN_002010a0(param_1,param_2,0x39,(iVar2 / 1000) % 1000,iVar2 % 1000,(iVar1 / 1000) % 1000,
                 iVar1 % 1000);
  }
  return;
}

// 0x001fe850  size 0x2a0
void FUN_001fe850(char param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  if (param_5 == 0) {
    piVar7 = &DAT_00329040;
    piVar6 = &DAT_00329140;
    iVar5 = 0x16;
    iVar3 = 0x17;
  }
  else {
    piVar7 = (int *)0x3290c0;
    piVar6 = (int *)0x329210;
    iVar5 = 0x14;
    iVar3 = 0x15;
  }
  if (param_1 != '\x02') {
    if (param_1 == '\x01') {
      FUN_001eeb00(0,param_2,param_3,8);
    }
    else if (param_1 == '\0') {
      if (*piVar7 != -1) {
        piVar1 = piVar7;
        do {
          *piVar1 = (int)param_3;
          piVar1 = piVar1 + 10;
        } while (*piVar1 != -1);
      }
      FUN_001eeb00(0x3f800000,param_2,param_3,8);
      iVar8 = (int)param_2;
      if (param_4 == 1) {
        if (*piVar6 != -1) {
          piVar1 = piVar6;
          do {
            *piVar1 = (int)param_3;
            piVar1 = piVar1 + 10;
          } while (*piVar1 != -1);
        }
        iVar2 = iVar3 * 0x14 + iVar8;
        *(undefined4 *)(iVar2 + 0x310) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x31c) = 0;
        *(undefined4 *)(iVar2 + 0x30c) = 0;
        if (*(int *)(iVar2 + 0x31c) == 0) {
          *(undefined4 *)(iVar2 + 0x318) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x318) = 1;
        }
        puVar4 = (undefined4 *)(iVar2 + 0x318);
        *(undefined4 *)(iVar2 + 0x30c) = 0;
        if (*(int *)(iVar2 + 0x31c) == 0) {
          *puVar4 = 0;
        }
        else {
          *puVar4 = 1;
        }
        *(undefined4 *)(iVar3 * 0x14 + iVar8 + 0x314) = 0;
        *(int *)(iVar2 + 0x31c) = (int)piVar6;
        *puVar4 = 1;
      }
      else {
        iVar3 = iVar3 * 0x14 + iVar8;
        *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
        *(undefined4 *)(iVar3 + 0x31c) = 0;
        *(undefined4 *)(iVar3 + 0x30c) = 0;
        if (*(int *)(iVar3 + 0x31c) == 0) {
          *(undefined4 *)(iVar3 + 0x318) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x318) = 1;
        }
      }
      iVar3 = iVar5 * 0x14 + iVar8;
      *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x31c) = 0;
      *(undefined4 *)(iVar3 + 0x30c) = 0;
      if (*(int *)(iVar3 + 0x31c) == 0) {
        *(undefined4 *)(iVar3 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x318) = 1;
      }
      puVar4 = (undefined4 *)(iVar3 + 0x318);
      *(undefined4 *)(iVar3 + 0x30c) = 0;
      if (*(int *)(iVar3 + 0x31c) == 0) {
        *puVar4 = 0;
      }
      else {
        *puVar4 = 1;
      }
      *(undefined4 *)(iVar5 * 0x14 + iVar8 + 0x314) = 1;
      *(int *)(iVar3 + 0x31c) = (int)piVar7;
      *puVar4 = 1;
    }
  }
  return;
}

// 0x001feaf0  size 0x10
void FUN_001feaf0(void)

{
  *(undefined4 *)(iGpffff8d88 + 0x18) = 1;
  return;
}

// 0x001feb00  size 0x608
undefined4 FUN_001feb00(int param_1,long param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  iVar4 = FUN_001f48c0(0xb);
  lVar11 = 0;
  iVar5 = *(int *)(iGpffff8d88 + 0x18);
  iVar4 = *piGpffff8d3c + iVar4 * 0x4f4;
  puVar8 = (undefined4 *)(iGpffff8d88 + 0x18);
  iVar9 = iVar4 + 4;
  if (iVar5 == 2) {
    if (0 < param_2) {
      FUN_00200d70(0xb,*(undefined4 *)(&DAT_003293d0 + param_4 * 4),0,0);
    }
  }
  else if (iVar5 == 4) {
    if (*(int *)(iGpffff8d88 + 0x1c) == 1) {
      if (*(int *)(iVar4 + 0x358) == 1) {
        FUN_001ecd80(iVar9,3);
        lVar11 = -1;
      }
      else {
        *puVar8 = 2;
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
        *(undefined4 *)(iVar4 + 0x34c) = 0;
        if (*(int *)(iVar4 + 0x35c) == 0) {
          *(undefined4 *)(iVar4 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 0x358) = 1;
        }
      }
    }
    else if (*(int *)(iVar4 + 0x36c) == 1) {
      FUN_001ecd80(iVar9);
      lVar11 = 10;
    }
    else {
      *puVar8 = 2;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xffbfffff;
      *(undefined4 *)(iVar4 + 0x360) = 0;
      if (*(int *)(iVar4 + 0x370) == 0) {
        *(undefined4 *)(iVar4 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x36c) = 1;
      }
    }
  }
  else if (iVar5 == 1) {
    if (*(int *)(iVar4 + 0x330) == 1) {
      FUN_001ecd80(iVar9);
    }
    else {
      *puVar8 = 3;
    }
  }
  else if (iVar5 == 0) {
    if (*(int *)(iVar4 + 0x31c) == 1) {
      FUN_001ecd80(iVar9,0);
    }
    else {
      *puVar8 = 2;
    }
  }
  iVar5 = (int)param_2;
  if (0 < param_2) {
    if (param_2 < 0xc) {
      uStack_9c = (undefined4)((ulong)param_2 >> 0x20);
      iStack_a0 = iVar5;
    }
    else {
      iStack_a0 = 0xb;
      uStack_9c = 0;
    }
    lVar10 = 0;
    if (0 < CONCAT44(uStack_9c,iStack_a0)) {
      puVar8 = &DAT_00329400;
      do {
        if (lVar10 == 10) {
          if (lVar11 == 0) break;
          lVar7 = lVar11;
        }
        else {
          lVar7 = lVar10;
        }
        sVar1 = *(short *)(param_1 + ((iVar5 + param_3 + (int)lVar7) % iVar5) * 2);
        iVar4 = FUN_001c1890(0);
        sVar2 = *(short *)(iVar4 + sVar1 * 2 + 0x1420);
        uVar6 = FUN_001f6540(sVar1);
        uVar3 = *puVar8;
        iVar4 = FUN_001f48c0(0xb);
        FUN_001ede20(*piGpffff8d3c + iVar4 * 0x4f4 + 4,auStack_40,uVar3);
        FUN_001f1350(auStack_40,uVar6);
        uVar6 = FUN_001f6460(sVar1);
        uVar3 = puVar8[1];
        iVar4 = FUN_001f48c0(0xb);
        FUN_001ede20(*piGpffff8d3c + iVar4 * 0x4f4 + 4,auStack_80,uVar3);
        FUN_001f1350(auStack_80,uVar6);
        lVar7 = FUN_001f60a0(sVar1);
        if (lVar7 == 0) {
          FUN_002010a0(0xb,puVar8[2],0x3f,CONCAT44((int)((ulong)(long)sVar2 >> 0x20),(int)sVar2));
        }
        lVar10 = (long)((int)lVar10 + 1);
        puVar8 = puVar8 + 3;
      } while (lVar10 < CONCAT44(uStack_9c,iStack_a0));
    }
    FUN_002010a0(0xb,0x26,0x3e,(param_3 + param_4) % iVar5 + 1,param_2);
  }
  FUN_001eda40(0x3f800000,iVar9);
  if (param_2 < 0xb) {
    FUN_001eeb00(0x41800000,iVar9,0xc,2);
    FUN_001eeb00(0x41500000,iVar9,0xc,6);
    iVar5 = FUN_001f48c0(0xb);
    FUN_001eeb00(0,*piGpffff8d3c + iVar5 * 0x4f4 + 4,0xd,8);
  }
  else if (param_3 + 9 < param_2) {
    FUN_001eeb00((208.0 / (float)iVar5) * (float)param_3 + 16.0,iVar9,0xc,2);
    FUN_001eeb00((10.0 / (float)iVar5) * 13.0,iVar9,0xc,6);
    iVar5 = FUN_001f48c0(0xb);
    FUN_001eeb00(0,*piGpffff8d3c + iVar5 * 0x4f4 + 4,0xd,8);
  }
  else {
    fVar12 = ((float)param_3 + 10.0) - (float)iVar5;
    FUN_001eeb00((208.0 / (float)iVar5) * (float)param_3 + 16.0,iVar9,0xc,2);
    FUN_001eeb00(((10.0 - fVar12) / (float)iVar5) * 13.0,iVar9,0xc,6);
    FUN_001eeb00(0x41800000,iVar9,0xd,2);
    FUN_001eeb00((fVar12 / (float)iVar5) * 13.0,iVar9,0xd,6);
    iVar5 = FUN_001f48c0(0xb);
    FUN_001eeb00(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4,0xd,8);
  }
  FUN_002008b0(10 < param_2);
  return *(undefined4 *)(iGpffff8d88 + 0x18);
}

// 0x001ff110  size 0x44
void FUN_001ff110(long param_1)

{
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
  puGpffff8d88[7] = (uint)(param_1 != 0);
  puGpffff8d88[6] = 4;
  puGpffff8d88[2] = 0xffffffff;
  *puGpffff8d88 = 0xffffffff;
  return;
}

// 0x001ff160  size 0x1bc
void FUN_001ff160(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_001f48c0(0xb);
  iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
  uVar2 = FUN_001f4890(0xbb);
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
  uVar2 = FUN_001f4890(0xbc);
  *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x334) = 0;
  *(undefined4 *)(iVar1 + 0x324) = 0;
  if (*(int *)(iVar1 + 0x334) == 0) {
    *(undefined4 *)(iVar1 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x330) = 1;
  }
  *(undefined4 *)(iVar1 + 0x324) = 0;
  if (*(int *)(iVar1 + 0x334) == 0) {
    *(undefined4 *)(iVar1 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x330) = 1;
  }
  *(undefined4 *)(iVar1 + 0x32c) = 0;
  *(undefined4 *)(iVar1 + 0x334) = uVar2;
  *(undefined4 *)(iVar1 + 0x330) = 1;
  uVar2 = FUN_001f4890(0xbd);
  *(undefined4 *)(iVar1 + 0x350) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x35c) = 0;
  *(undefined4 *)(iVar1 + 0x34c) = 0;
  if (*(int *)(iVar1 + 0x35c) == 0) {
    *(undefined4 *)(iVar1 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x358) = 1;
  }
  *(undefined4 *)(iVar1 + 0x34c) = 0;
  if (*(int *)(iVar1 + 0x35c) == 0) {
    *(undefined4 *)(iVar1 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x358) = 1;
  }
  *(undefined4 *)(iVar1 + 0x354) = 0;
  *(undefined4 *)(iVar1 + 0x35c) = uVar2;
  *(undefined4 *)(iVar1 + 0x358) = 1;
  uVar2 = FUN_001f4890(0xbe);
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
  puGpffff8d88[6] = 0;
  puGpffff8d88[2] = 0xffffffff;
  *puGpffff8d88 = 0xffffffff;
  FUN_00200a10(0xb,(int)register0x000001c0 + -0x7e58,2,0);
  return;
}

// 0x001ff320  size 0x148
undefined4 FUN_001ff320(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_001f48c0(5);
  iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
  iVar2 = iVar1 + 4;
  if (*(int *)(iGpffff8d88 + 0x14) == 0) {
    if (*(int *)(iVar1 + 0x31c) == 1) {
      FUN_001ecd80(iVar2,0);
    }
    else {
      *(undefined4 *)(iGpffff8d88 + 0x14) = 2;
    }
  }
  if (*(int *)(iGpffff8d88 + 0x14) == 1) {
    if (*(int *)(iVar1 + 0x330) == 1) {
      FUN_001ecd80(iVar2);
    }
    else {
      *(undefined4 *)(iGpffff8d88 + 0x14) = 3;
    }
  }
  if ((*(int *)(iGpffff8d88 + 0x14) == 2) && (param_2 != -1)) {
    FUN_00200d70(5,*(undefined4 *)((int)register0x000001c0 + (int)param_2 * 4 + -0x7e60),1,0);
  }
  FUN_001ecd80(iVar2,2);
  FUN_001ff470(param_1,param_3);
  FUN_001eda40(0x3f800000,iVar2);
  return *(undefined4 *)(iGpffff8d88 + 0x14);
}

// 0x001ff470  size 0x18c
void FUN_001ff470(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  iVar3 = FUN_001f48c0(5);
  iVar3 = *piGpffff8d3c + iVar3 * 0x4f4 + 4;
  if (*(int *)(iGpffff8d88 + 0x10) == 0) {
    FUN_001eeb00(0,iVar3,0x19,8);
  }
  if (*(int *)(iGpffff8d88 + 0x10) != 2) {
    FUN_001eeb00(0,iVar3,0x1a,8);
  }
  if (param_1 != -1) {
    iVar3 = FUN_001f48c0(5);
    FUN_001ede20(*piGpffff8d3c + iVar3 * 0x4f4 + 4,auStack_40,0x1c);
    FUN_001f1350(auStack_40,param_1);
  }
  if ((param_2 != (undefined4 *)0x0) && (iVar3 = 0, 0 < *(int *)(iGpffff8d88 + 0x10))) {
    puVar5 = (undefined4 *)((int)register0x000001c0 + -0x7e68);
    do {
      uVar1 = *param_2;
      uVar2 = *puVar5;
      iVar4 = FUN_001f48c0(5);
      FUN_001ede20(*piGpffff8d3c + iVar4 * 0x4f4 + 4,auStack_80,uVar2);
      FUN_001f1350(auStack_80,uVar1);
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < *(int *)(iGpffff8d88 + 0x10));
  }
  return;
}

// 0x001ff600  size 0x10
void FUN_001ff600(void)

{
  *(undefined4 *)(iGpffff8d88 + 0x14) = 1;
  return;
}

// 0x001ff610  size 0x174
void FUN_001ff610(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  puGpffff8d88[4] = (int)param_1;
  iVar1 = FUN_001f48c0(5);
  iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
  uVar2 = FUN_001f4890(1);
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
  uVar2 = FUN_001f4890(2);
  *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x334) = 0;
  *(undefined4 *)(iVar1 + 0x324) = 0;
  if (*(int *)(iVar1 + 0x334) == 0) {
    *(undefined4 *)(iVar1 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x330) = 1;
  }
  *(undefined4 *)(iVar1 + 0x324) = 0;
  if (*(int *)(iVar1 + 0x334) == 0) {
    *(undefined4 *)(iVar1 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x330) = 1;
  }
  *(undefined4 *)(iVar1 + 0x32c) = 0;
  *(undefined4 *)(iVar1 + 0x334) = uVar2;
  *(undefined4 *)(iVar1 + 0x330) = 1;
  uVar2 = FUN_001f4890(3);
  *(undefined4 *)(iVar1 + 0x33c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x348) = 0;
  *(undefined4 *)(iVar1 + 0x338) = 0;
  if (*(int *)(iVar1 + 0x348) == 0) {
    *(undefined4 *)(iVar1 + 0x344) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x344) = 1;
  }
  *(undefined4 *)(iVar1 + 0x338) = 0;
  if (*(int *)(iVar1 + 0x348) == 0) {
    *(undefined4 *)(iVar1 + 0x344) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x344) = 1;
  }
  *(undefined4 *)(iVar1 + 0x340) = 1;
  *(undefined4 *)(iVar1 + 0x348) = uVar2;
  *(undefined4 *)(iVar1 + 0x344) = 1;
  puGpffff8d88[5] = 0;
  if (param_1 != 0) {
    puGpffff8d88[2] = 0xffffffff;
    *puGpffff8d88 = 0xffffffff;
  }
  return;
}

// 0x001ff790  size 0x624
void FUN_001ff790(ulong param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 unaff_s0;
  undefined1 auStack_40 [64];
  
  uVar5 = FUN_001c1890(0);
  iVar3 = FUN_001f48c0(7);
  iVar3 = *piGpffff8d3c + iVar3 * 0x4f4 + 4;
  FUN_001ede20(iVar3,auStack_40,0x2f);
  uVar6 = FUN_001b2e60(uVar5);
  FUN_001f12c0(auStack_40,uVar6,0);
  if (param_2 != -1) {
    FUN_001ede20(iVar3,auStack_40,0x2e);
    FUN_001f1350(auStack_40,param_2);
  }
  if (((((*(uint *)(iGpffff8d68 + 0x28) & 0x1c000) != 0) &&
       (iVar4 = *(int *)(iGpffff8d68 + 0x1c), iVar4 != 0x25)) && (iVar4 != 0x23)) && (iVar4 != 0x11)
     ) {
    uVar6 = FUN_001c1890(0);
    lVar7 = FUN_001b89d0(uVar6);
    if (0 < lVar7) {
      param_1 = param_1 | 4;
    }
  }
  if (((long)param_1 < 8) && (-1 < (long)param_1)) {
    FUN_001eea30(iVar3,0x2d,9,*(undefined4 *)(&DAT_00329330 + (int)param_1 * 4));
  }
  cVar2 = FUN_001c16e0(uVar5);
  if (cVar2 == '\0') {
    uVar8 = 0xe;
  }
  else {
    uVar8 = 0xd;
  }
  FUN_001eea30(iVar3,0x16,0x16,uVar8);
  FUN_001eea30(iVar3,0x23,9,cVar2 != '\0');
  uVar1 = FUN_0017e550(*(undefined1 *)(iGpffff8d68 + 0x620));
  switch(uVar1) {
  case 0:
    unaff_s0 = 0x13;
    break;
  case 1:
    unaff_s0 = 0x2b;
    break;
  case 2:
    unaff_s0 = 0x29;
    break;
  case 3:
    unaff_s0 = 0x27;
    break;
  case 4:
    unaff_s0 = 0x28;
    break;
  case 5:
    unaff_s0 = 0x2a;
  }
  FUN_001eea30(iVar3,0x2c,0x16,unaff_s0);
  lVar7 = FUN_001c1800(uVar5);
  iVar4 = (int)lVar7;
  if (lVar7 < 1000) {
    FUN_001eeb00(0,iVar3,0x18,8);
  }
  else {
    FUN_001eeb00(0x3f800000,iVar3,0x18,8);
    FUN_001eea30(iVar3,0x18,0x16,*(undefined4 *)(&DAT_00329350 + ((iVar4 / 1000) % 10) * 4));
  }
  if (lVar7 < 100) {
    FUN_001eeb00(0,iVar3,0x19,8);
  }
  else {
    FUN_001eeb00(0x3f800000,iVar3,0x19,8);
    FUN_001eea30(iVar3,0x19,0x16,*(undefined4 *)(&DAT_00329350 + ((iVar4 / 100) % 10) * 4));
  }
  if (lVar7 < 10) {
    FUN_001eeb00(0,iVar3,0x1a,8);
  }
  else {
    FUN_001eeb00(0x3f800000,iVar3,0x1a,8);
    FUN_001eea30(iVar3,0x1a,0x16,*(undefined4 *)(&DAT_00329350 + ((iVar4 / 10) % 10) * 4));
  }
  FUN_001eea30(iVar3,0x1b,0x16,*(undefined4 *)(&DAT_00329350 + (iVar4 % 10) * 4));
  FUN_001eeb00(0,iVar3,0x1c,8);
  FUN_001eeb00(0,iVar3,0x1d,8);
  iVar4 = FUN_001c17b0(uVar5);
  FUN_001eea30(iVar3,0x1e,0x16,*(undefined4 *)(&DAT_00329380 + iVar4 * 4));
  lVar7 = FUN_001c1760(uVar5);
  iVar4 = (int)lVar7;
  if (lVar7 < 100) {
    FUN_001eeb00(0,iVar3,0x1f,8);
  }
  else {
    FUN_001eeb00(0x3f800000,iVar3,0x1f,8);
    FUN_001eea30(iVar3,0x1f,0x16,*(undefined4 *)(&DAT_00329380 + ((iVar4 / 100) % 10) * 4));
  }
  if (lVar7 < 10) {
    FUN_001eeb00(0,iVar3,0x20,8);
  }
  else {
    FUN_001eeb00(0x3f800000,iVar3,0x20,8);
    FUN_001eea30(iVar3,0x20,0x16,*(undefined4 *)(&DAT_00329380 + ((iVar4 / 10) % 10) * 4));
  }
  FUN_001eea30(iVar3,0x21,0x16,*(undefined4 *)(&DAT_00329380 + (iVar4 % 10) * 4));
  iVar4 = FUN_001c1710(uVar5);
  FUN_001eea30(iVar3,0x17,0x16,*(undefined4 *)(&DAT_003293b0 + iVar4 * 4));
  FUN_001ecd80(iVar3,0);
  FUN_001eda40(0x3f800000,iVar3);
  return;
}

// 0x001ffdc0  size 0xae4
void FUN_001ffdc0(long param_1,ulong param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iStack_190;
  int iStack_180;
  int iStack_170;
  int iStack_160;
  int iStack_140;
  int iStack_130;
  uint uStack_e0;
  uint uStack_d0;
  int iStack_c0;
  int iStack_b0;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_84;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  undefined1 auStack_40 [4];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  undefined1 auStack_20 [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  int iStack_8;
  
  iVar6 = FUN_001f48c0(6);
  lVar17 = 2;
  iStack_130 = 2;
  iStack_140 = 2;
  iVar6 = *piGpffff8d3c + iVar6 * 0x4f4 + 4;
  if ((long)param_2 < 0) {
LAB_001ffe38:
    if (param_1 == -2) goto LAB_001ffe40;
    if (param_2 < 2) {
      FUN_001f6af0(auStack_20,param_1,param_2,0xffffffffffffffff,0);
      uStack_94 = FUN_001f7e90(param_1,param_2);
      uStack_90 = FUN_001f8170(param_1,param_2);
      uStack_8c = FUN_001f81a0(param_1,param_2);
      uStack_d0 = FUN_001f7d30(param_1,param_2);
      uStack_e0 = FUN_001f72d0(param_1,param_2);
      iStack_b0 = (int)fStack_18;
      iVar9 = (int)fStack_1c;
      iVar10 = (int)(fStack_14 * 10.0);
      iVar7 = (int)fStack_c;
      iStack_c0 = (int)fStack_10;
      iVar8 = iStack_8;
    }
    else {
      uStack_94 = FUN_001f7e90(param_1,param_2);
      uStack_90 = FUN_001f8170(param_1,param_2);
      uStack_8c = FUN_001f81a0(param_1,param_2);
      uStack_d0 = FUN_001f7d30(param_1,param_2);
      uStack_e0 = FUN_001f72d0(param_1,param_2);
      iVar7 = FUN_001f7bd0(param_1,param_2);
      iVar8 = FUN_001f7a70(param_1,param_2);
      iVar9 = FUN_001f7900(param_1,param_2);
      iStack_b0 = FUN_001f7790(param_1,param_2);
      iVar10 = FUN_001f75a0(param_1,param_2);
      iStack_c0 = FUN_001f7430(param_1,param_2);
    }
    uStack_d0 = uStack_d0 & 0xff;
    uStack_e0 = uStack_e0 & 0xff;
    uVar13 = FUN_001f8040(param_1,param_2);
    uVar11 = (undefined4)uVar13;
    lVar14 = FUN_001f7bd0(uVar13,0xffffffffffffffff);
    lVar15 = FUN_001f7a70(uVar11,0xffffffffffffffff);
    lVar16 = FUN_001f7900(uVar11,0xffffffffffffffff);
    iVar12 = FUN_001f75a0(uVar11,0xffffffffffffffff);
    bVar1 = 0 < lVar14;
    bVar4 = 0.0 < (float)iVar12;
    bVar2 = 0 < lVar16;
    bVar3 = 0 < lVar15;
  }
  else {
    uVar13 = FUN_001c1890(param_2);
    lVar14 = FUN_001b89d0(uVar13);
    if (lVar14 != 0) goto LAB_001ffe38;
LAB_001ffe40:
    uStack_94 = 0;
    iVar7 = 0;
    uStack_90 = 0;
    iVar8 = 0;
    uStack_8c = 0;
    iVar9 = 0;
    iStack_b0 = 0;
    iVar10 = 0;
    iStack_c0 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    bVar1 = false;
    bVar2 = false;
    bVar4 = false;
    bVar3 = false;
  }
  lVar14 = lVar17;
  iStack_190 = iVar8;
  iStack_160 = iVar9;
  iStack_170 = iVar10;
  iStack_180 = iVar7;
  if ((param_2 == 0) && (param_3 != -1)) {
    if (param_3 == -4) {
      uVar13 = FUN_001f8040(param_1,0);
      uVar11 = (undefined4)uVar13;
      iStack_180 = FUN_001f7bd0(uVar13,0xffffffffffffffff);
      iStack_190 = FUN_001f7a70(uVar11,0xffffffffffffffff);
      iStack_160 = FUN_001f7900(uVar11,0xffffffffffffffff);
      iStack_b0 = FUN_001f7790(uVar11,0xffffffffffffffff);
      iStack_170 = FUN_001f75a0(uVar11,0xffffffffffffffff);
      iStack_c0 = FUN_001f7430(uVar11,0xffffffffffffffff);
    }
    else {
      uStack_84 = (undefined2)param_3;
      FUN_001f6af0(auStack_40,param_1,0,uStack_84,param_4);
      iStack_190 = iStack_28;
      iStack_160 = (int)fStack_3c;
      iStack_b0 = (int)fStack_38;
      iStack_170 = (int)(fStack_34 * 10.0);
      iStack_c0 = (int)fStack_30;
      iStack_180 = (int)fStack_2c;
    }
    if (iStack_180 < iVar7) {
      lVar14 = 1;
    }
    else if (iVar7 < iStack_180) {
      lVar14 = 0;
    }
    if (iStack_160 < iVar9) {
      iStack_130 = 1;
    }
    else if (iVar9 < iStack_160) {
      iStack_130 = 0;
    }
    if (iStack_170 < iVar10) {
      iStack_140 = 1;
    }
    else if (iVar10 < iStack_170) {
      iStack_140 = 0;
    }
    if (iStack_190 < iVar8) {
      lVar17 = 1;
    }
    else if (iVar8 < iStack_190) {
      lVar17 = 0;
    }
  }
  FUN_001ede20(iVar6,auStack_80,10);
  FUN_001f1350(auStack_80,uStack_94);
  FUN_001ede20(iVar6,auStack_80,0xb);
  uStack_6c = 4;
  FUN_001f1350(auStack_80,uStack_90);
  FUN_001ede20(iVar6,auStack_80,0xc);
  FUN_001f1350(auStack_80,uStack_8c);
  FUN_001ede20(iVar6,auStack_80,8);
  if (bVar1) {
    if (lVar14 == 2) {
      FUN_001f1400(auStack_80,0x16,iStack_180,4);
    }
    else if (lVar14 == 1) {
      FUN_001f1400(auStack_80,0x20,3,0,iStack_180,4);
    }
    else if (lVar14 == 0) {
      FUN_001f1400(auStack_80,0x1b,2,0,iStack_180,4);
    }
  }
  else {
    FUN_001f1400(auStack_80,0x25,4);
  }
  FUN_001ede20(iVar6,auStack_80,0xd);
  if (bVar3) {
    cVar5 = FUN_001f7170(param_1,param_2);
    if (cVar5 == '\a') {
      if (lVar17 == 2) {
        FUN_001f1400(auStack_80,0x18,iStack_190,4);
      }
      else if (lVar17 == 1) {
        FUN_001f1400(auStack_80,0x22,3,0,iStack_190,4);
      }
      else if (lVar17 == 0) {
        FUN_001f1400(auStack_80,0x1d,2,0,iStack_190,4);
      }
    }
    else if (lVar17 == 2) {
      FUN_001f1400(auStack_80,0x17,iStack_190,4);
    }
    else if (lVar17 == 1) {
      FUN_001f1400(auStack_80,0x21,3,0,iStack_190,4);
    }
    else if (lVar17 == 0) {
      FUN_001f1400(auStack_80,0x1c,2,0,iStack_190,4);
    }
  }
  else {
    FUN_001f1400(auStack_80,0x26,4);
  }
  FUN_001ede20(iVar6,auStack_80,9);
  if (bVar2) {
    if (iStack_130 == 2) {
      FUN_001f1400(auStack_80,0x19,iStack_160,4,0,iStack_b0,4);
    }
    else if (iStack_130 == 1) {
      FUN_001f1400(auStack_80,0x23,3,0,iStack_160,4,0,iStack_b0);
    }
    else if (iStack_130 == 0) {
      FUN_001f1400(auStack_80,0x1e,2,0,iStack_160,4,0,iStack_b0);
    }
  }
  else {
    FUN_001f1400(auStack_80,0x27,4,0,4);
  }
  FUN_001ede20(iVar6,auStack_80,0xe);
  if (bVar4) {
    if (iStack_140 == 2) {
      FUN_001f1400(auStack_80,0x1a,iStack_170 / 10,iStack_170 % 10,4,0,iStack_c0,4);
    }
    else if (iStack_140 == 1) {
      FUN_001f1400(auStack_80,0x24,3,0,iStack_170 / 10,iStack_170 % 10,4,0);
    }
    else if (iStack_140 == 0) {
      FUN_001f1400(auStack_80,0x1f,2,0,iStack_170 / 10,iStack_170 % 10,4,0);
    }
  }
  else {
    FUN_001f1400(auStack_80,0x28,4,0,4);
  }
  if ((long)param_2 < 0) {
LAB_0020060c:
    if (param_1 != -2) {
      lVar17 = FUN_001f8040(param_1,param_2);
      if (lVar17 == 0x11c) {
        FUN_001eea30(iVar6,5,0x16,DAT_00329314);
      }
      else {
        FUN_001eea30(iVar6,5,0x16,*(undefined4 *)(&DAT_00329300 + uStack_d0 * 4));
      }
      FUN_001eeb00(0x3f800000,iVar6,5,8);
      FUN_001eeb00(0x3f800000,iVar6,6,8);
      FUN_001eeb00(0x3f800000,iVar6,7,8);
      FUN_001eea30(iVar6,6,0x16,*(undefined4 *)(&DAT_003292e0 + uStack_d0 * 4));
      FUN_001eea30(iVar6,7,0x16,*(undefined4 *)(&LAB_00329320 + uStack_e0 * 4));
      goto LAB_0020074c;
    }
  }
  else {
    uVar13 = FUN_001c1890(param_2);
    lVar17 = FUN_001b89d0(uVar13);
    if (lVar17 != 0) goto LAB_0020060c;
  }
  FUN_001eeb00(0,iVar6,5,8);
  FUN_001eeb00(0,iVar6,6,8);
  FUN_001eeb00(0,iVar6,7,8);
LAB_0020074c:
  FUN_001ecd80(iVar6,0);
  FUN_001eda40(0x3f800000,iVar6);
  return;
}

