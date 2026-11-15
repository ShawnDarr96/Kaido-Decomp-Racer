// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00138000 - 0x0013c000
#include "ghidra_types.h"

// 0x00138050  size 0xc4
undefined8 maybe_Pad_ctor(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  Pad_InitState();
  uVar2 = 0;
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 4) = &DAT_0036e0e0;
  *(undefined4 *)(iVar1 + 0x47c) = 0;
  *(undefined4 *)(iVar1 + 0x480) = 0;
  *(undefined4 *)(iVar1 + 0x48c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x490) = 0;
  *(undefined4 *)(iVar1 + 0x494) = 0;
  *(undefined4 *)(iVar1 + 0x484) = 0;
  *(undefined4 *)(iVar1 + 0x488) = 0;
  do {
    maybe_Pad_ApplyDeadzone(0,0,param_1,uVar2 & 0xff,0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  uVar2 = 0x10;
  do {
    maybe_Pad_ApplyDeadzone(0x3ecccccd,0x3ecccccd,param_1,uVar2 & 0xff,10,0x14);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x18);
  return param_1;
}

// 0x00138120  size 0x248
uint Pad_MapButtons(undefined8 param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  uVar12 = 0;
  uVar9 = 0;
  puVar8 = &DAT_0030a580;
  piVar7 = (int *)0x30a640;
  do {
    iVar10 = (int)param_1;
    iVar6 = iVar10 + uVar9;
    if (*(char *)(iVar6 + 0x3cc) == '\0') {
      uVar11 = 1 << (uVar9 & 0x1f);
      if ((param_2 & uVar11) != 0) {
        if (*(char *)(iVar6 + 0x39c) == '\0') goto LAB_00138280;
        if ((param_3 == 0) ||
           (lVar4 = (**(code **)(*(int *)(iVar10 + 4) + 0x10))(param_1,puVar8[1]), lVar4 != 0)) {
          pcVar5 = (char *)(iVar6 + 900);
          if (*(char *)(iVar6 + 900) == '\0') {
            bVar1 = *(byte *)(iVar6 + 0x39c);
            if (bVar1 <= *(byte *)(iVar6 + 0x414)) {
              if (bVar1 != *(byte *)(iVar6 + 0x3b4)) {
                *pcVar5 = '\x01';
              }
              goto LAB_00138208;
            }
            *(byte *)(iVar6 + 0x444) = bVar1;
          }
          else if (*(byte *)(iVar6 + 0x414) < *(byte *)(iVar6 + 0x3b4)) {
            *(byte *)(iVar6 + 0x444) = *(byte *)(iVar6 + 0x3b4);
            *pcVar5 = '\0';
          }
          else {
LAB_00138208:
            if ((*pcVar5 == '\0') && (*(byte *)(iVar6 + 0x414) < *(byte *)(iVar6 + 0x444))) {
              bVar1 = *(char *)(iVar6 + 0x45c) + 1;
              *(byte *)(iVar6 + 0x45c) = bVar1;
              uVar3 = Input_GetAnalog(iVar10 + 8,uVar9);
              if (bVar1 <= uVar3) goto LAB_001382a8;
              Input_LatchButton(iVar10 + 8,uVar9);
              *(undefined1 *)(iVar6 + 0x45c) = 0;
              *(byte *)(iVar6 + 0x444) = *(byte *)(iVar6 + 0x414);
            }
LAB_00138280:
            if (-1 < *piVar7) {
              *(undefined1 *)(iVar10 + *piVar7 + 0x3cc) = *(undefined1 *)(iVar6 + 0x3e4);
            }
            uVar12 = uVar12 | uVar11;
          }
        }
      }
    }
    else {
      *(char *)(iVar6 + 0x3cc) = *(char *)(iVar6 + 0x3cc) + -1;
    }
LAB_001382a8:
    uVar9 = uVar9 + 1;
    puVar8 = puVar8 + 2;
    piVar7 = piVar7 + 1;
    if (0x17 < uVar9) {
      uVar9 = 0;
      do {
        iVar6 = iVar10 + uVar9;
        if (*(byte *)(iVar6 + 0x42c) < *(byte *)(iVar6 + 0x414)) {
          iVar2 = (uint)*(byte *)(iVar6 + 0x414) - (uint)*(byte *)(iVar6 + 0x3fc);
          if (iVar2 < 1) {
            iVar2 = 0;
          }
          *(char *)(iVar6 + 0x444) = (char)iVar2;
        }
        uVar9 = uVar9 + 1;
        *(undefined1 *)(iVar6 + 0x42c) = *(undefined1 *)(iVar6 + 0x414);
      } while (uVar9 < 0x18);
      return uVar12;
    }
  } while( true );
}

// 0x00138370  size 0x8
/* follows Pad_MapButtons; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

void Pad_MapButtons_Orphan1(void)

{
  return;
}

// 0x00138380  size 0x1dc
void maybe_Pad_ReadAnalogAxes(undefined4 param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = (int)param_3;
  if ((param_4 & 0xff) == 0x18) {
    uVar5 = 0;
    do {
      if ((uVar5 & 0xff) == 0x18) {
        uVar4 = 0;
        do {
          if ((uVar4 & 0xff) == 0x18) {
            uVar3 = 0;
            do {
              if ((uVar3 & 0xff) == 0x18) {
                uVar2 = 0;
                do {
                  if ((uVar2 & 0xff) == 0x18) {
                    uVar1 = 0;
                    do {
                      maybe_Pad_ReadAnalogAxes(param_1,param_2,param_3,uVar1 & 0xff);
                      uVar1 = uVar1 + 1;
                    } while (uVar1 < 0x18);
                  }
                  else {
                    maybe_Vec3_SetAbsYZ(0,param_1,param_2,iVar6 + (uVar2 & 0xff) * 0x10 + 0x1a4);
                  }
                  uVar2 = uVar2 + 1;
                } while (uVar2 < 0x18);
              }
              else {
                maybe_Vec3_SetAbsYZ(0,param_1,param_2,iVar6 + (uVar3 & 0xff) * 0x10 + 0x1a4);
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < 0x18);
          }
          else {
            maybe_Vec3_SetAbsYZ(0,param_1,param_2,iVar6 + (uVar4 & 0xff) * 0x10 + 0x1a4);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0x18);
      }
      else {
        maybe_Vec3_SetAbsYZ(0,param_1,param_2,iVar6 + (uVar5 & 0xff) * 0x10 + 0x1a4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x18);
  }
  else {
    maybe_Vec3_SetAbsYZ(0,param_1,param_2,iVar6 + (param_4 & 0xff) * 0x10 + 0x1a4);
  }
  return;
}

// 0x00138568  size 0xc
/* follows Pad_ReadAnalogAxes; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void Pad_ReadAnalogAxes_Orphan1(void)

{
  return;
}

// 0x00138580  size 0x308
void maybe_Pad_ApplyDeadzone
               (float param_1,float param_2,undefined8 param_3,uint param_4,undefined8 param_5,
               undefined8 param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  float fVar9;
  float fVar10;
  
  param_4 = param_4 & 0xff;
  uVar8 = (undefined1)param_5;
  uVar7 = (undefined1)param_6;
  iVar2 = (int)param_3;
  if (param_4 == 0x18) {
    uVar6 = 0;
    fVar9 = param_1 * 255.0;
    fVar10 = param_2 * 255.0;
    do {
      if ((uVar6 & 0xff) == 0x18) {
        uVar5 = 0;
        do {
          if ((uVar5 & 0xff) == 0x18) {
            uVar4 = 0;
            do {
              maybe_Pad_ApplyDeadzone(param_1,param_2,param_3,uVar4 & 0xff,param_5,param_6);
              uVar4 = uVar4 + 1;
            } while (uVar4 < 0x18);
          }
          else {
            iVar3 = iVar2 + (uVar5 & 0xff);
            fVar1 = fVar9;
            if (2.1474836e+09 <= fVar9) {
              fVar1 = fVar9 - 2.1474836e+09;
            }
            *(char *)(iVar3 + 0x39c) = (char)(int)fVar1;
            fVar1 = fVar10;
            if (2.1474836e+09 <= fVar10) {
              fVar1 = fVar10 - 2.1474836e+09;
            }
            *(char *)(iVar3 + 0x3b4) = (char)(int)fVar1;
            *(undefined1 *)(iVar3 + 0x3cc) = 0;
            *(undefined1 *)(iVar3 + 0x3e4) = uVar8;
            *(undefined1 *)(iVar3 + 0x3fc) = uVar7;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x18);
      }
      else {
        iVar3 = iVar2 + (uVar6 & 0xff);
        fVar1 = fVar9;
        if (2.1474836e+09 <= fVar9) {
          fVar1 = fVar9 - 2.1474836e+09;
        }
        *(char *)(iVar3 + 0x39c) = (char)(int)fVar1;
        fVar1 = fVar10;
        if (2.1474836e+09 <= fVar10) {
          fVar1 = fVar10 - 2.1474836e+09;
        }
        *(char *)(iVar3 + 0x3b4) = (char)(int)fVar1;
        *(undefined1 *)(iVar3 + 0x3cc) = 0;
        *(undefined1 *)(iVar3 + 0x3e4) = uVar8;
        *(undefined1 *)(iVar3 + 0x3fc) = uVar7;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x18);
  }
  else {
    param_1 = param_1 * 255.0;
    if (2.1474836e+09 <= param_1) {
      param_1 = param_1 - 2.1474836e+09;
    }
    param_2 = param_2 * 255.0;
    *(char *)(param_4 + iVar2 + 0x39c) = (char)(int)param_1;
    if (2.1474836e+09 <= param_2) {
      param_2 = param_2 - 2.1474836e+09;
    }
    iVar2 = param_4 + iVar2;
    *(char *)(iVar2 + 0x3b4) = (char)(int)param_2;
    *(undefined1 *)(iVar2 + 0x3cc) = 0;
    *(undefined1 *)(iVar2 + 0x3e4) = uVar8;
    *(undefined1 *)(iVar2 + 0x3fc) = uVar7;
  }
  return;
}

// 0x00138890  size 0x8
/* follows Pad_ApplyDeadzone; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void Pad_ApplyDeadzone_Orphan1(void)

{
  return;
}

// 0x001388a0  size 0xbc
void Pad_Reset(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  Input_Clear(param_1 + 8);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    iVar1 = param_1 + iVar3;
    *(undefined4 *)(iVar2 + 0x1b0) = 0;
    *(undefined1 *)(iVar1 + 0x414) = 0;
    iVar3 = iVar3 + 8;
    *(undefined4 *)(iVar2 + 0x1c0) = 0;
    *(undefined1 *)(iVar1 + 0x415) = 0;
    *(undefined4 *)(iVar2 + 0x1d0) = 0;
    *(undefined1 *)(iVar1 + 0x416) = 0;
    *(undefined4 *)(iVar2 + 0x1e0) = 0;
    *(undefined1 *)(iVar1 + 0x417) = 0;
    *(undefined4 *)(iVar2 + 0x1f0) = 0;
    *(undefined1 *)(iVar1 + 0x418) = 0;
    *(undefined4 *)(iVar2 + 0x200) = 0;
    *(undefined1 *)(iVar1 + 0x419) = 0;
    *(undefined4 *)(iVar2 + 0x210) = 0;
    *(undefined1 *)(iVar1 + 0x41a) = 0;
    *(undefined4 *)(iVar2 + 0x220) = 0;
    *(undefined1 *)(iVar1 + 0x41b) = 0;
    iVar2 = iVar2 + 0x80;
  } while (iVar3 < 0x18);
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined1 *)(param_1 + 0x474) = 0x7f;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined1 *)(param_1 + 0x475) = 0x7f;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined1 *)(param_1 + 0x476) = 0x7f;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined1 *)(param_1 + 0x477) = 0x7f;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined1 *)(param_1 + 0x478) = 0x7f;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined1 *)(param_1 + 0x479) = 0x7f;
  return;
}

// 0x00138960  size 0x1d8
int Pad_InitState(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  Input_InitPorts();
  *(undefined **)(param_1 + 4) = &DAT_0036e100;
  Gut_HashInit(param_1 + 8,0x18);
  uVar5 = param_1 + 0x1a4;
  do {
    maybe_Vec3_SetUp(uVar5);
    uVar5 = uVar5 + 0x10;
    uVar4 = param_1 + 0x324;
  } while (uVar5 < uVar4);
  do {
    maybe_Vec3_SetUp(uVar4);
    uVar4 = uVar4 + 0x10;
  } while (uVar4 < param_1 + 900U);
  Input_Clear(param_1 + 8);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    iVar1 = param_1 + iVar3;
    *(undefined4 *)(iVar2 + 0x1b0) = 0;
    *(undefined1 *)(iVar1 + 0x414) = 0;
    iVar3 = iVar3 + 8;
    *(undefined4 *)(iVar2 + 0x1c0) = 0;
    *(undefined1 *)(iVar1 + 0x415) = 0;
    *(undefined4 *)(iVar2 + 0x1d0) = 0;
    *(undefined1 *)(iVar1 + 0x416) = 0;
    *(undefined4 *)(iVar2 + 0x1e0) = 0;
    *(undefined1 *)(iVar1 + 0x417) = 0;
    *(undefined4 *)(iVar2 + 0x1f0) = 0;
    *(undefined1 *)(iVar1 + 0x418) = 0;
    *(undefined4 *)(iVar2 + 0x200) = 0;
    *(undefined1 *)(iVar1 + 0x419) = 0;
    *(undefined4 *)(iVar2 + 0x210) = 0;
    *(undefined1 *)(iVar1 + 0x41a) = 0;
    *(undefined4 *)(iVar2 + 0x220) = 0;
    *(undefined1 *)(iVar1 + 0x41b) = 0;
    iVar2 = iVar2 + 0x80;
  } while (iVar3 < 0x18);
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined1 *)(param_1 + 0x474) = 0x7f;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined1 *)(param_1 + 0x475) = 0x7f;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined1 *)(param_1 + 0x476) = 0x7f;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined1 *)(param_1 + 0x477) = 0x7f;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined1 *)(param_1 + 0x478) = 0x7f;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined1 *)(param_1 + 0x479) = 0x7f;
  Mem_Set16(param_1 + 900,0,0x18);
  Mem_Set16(param_1 + 0x39c,0,0x18);
  Mem_Set16(param_1 + 0x3b4,0,0x18);
  Mem_Set16(param_1 + 0x3cc,0,0x18);
  Mem_Set16(param_1 + 0x3e4,0,0x18);
  Mem_Set16(param_1 + 0x3fc,0,0x18);
  Mem_Set16(param_1 + 0x414,0,0x18);
  Mem_Set16(param_1 + 0x42c,0,0x18);
  Mem_Set16(param_1 + 0x444,0,0x18);
  Mem_Set16(param_1 + 0x45c,0,0x18);
  Mem_Set16(param_1 + 0x474,0,6);
  return param_1;
}

// 0x00138b40  size 0x1c
/* address loaded as a constant in __sinit_003686c0 */

void __sinit_003686c0_Callback1(void)

{
  __destroy_arr(0x386650,0x137ff0,0x498,2);
  return;
}

// 0x00138b60  size 0x3c
undefined4 Sema_GetCount(undefined4 *param_1,long param_2)

{
  undefined4 auStack_20 [8];
  
  if (param_2 == 0) {
    ReferSemaStatus(*param_1,auStack_20);
  }
  else {
    iReferSemaStatus(*param_1,auStack_20);
  }
  return auStack_20[0];
}

// 0x00138ba0  size 0x44
/* handles interrupt context */

void Sema_Signal(int *param_1,long param_2)

{
  if (-1 < *param_1) {
    if (param_2 == 0) {
      SignalSema();
    }
    else {
      iSignalSema();
    }
  }
  return;
}

// 0x00138bf0  size 0x38
void Sema_Wait(int *param_1)

{
  if (-1 < *param_1) {
    WaitSema();
  }
  return;
}

// 0x00138c30  size 0x38
void Sema_Delete(int *param_1)

{
  if (-1 < *param_1) {
    DeleteSema();
  }
  return;
}

// 0x00138c70  size 0x3c
bool Sema_Create(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = param_3;
  uStack_18 = param_2;
  iVar1 = CreateSema(auStack_20);
  *param_1 = iVar1;
  return 0 < *param_1;
}

// 0x00138cb0  size 0x38
void Thread_Exit(int *param_1)

{
  if (-1 < *param_1) {
    ExitThread();
  }
  return;
}

// 0x00138cf0  size 0x38
void Thread_Terminate(int *param_1)

{
  if (-1 < *param_1) {
    TerminateThread();
  }
  return;
}

// 0x00138d30  size 0x38
void Thread_Start(int *param_1)

{
  if (-1 < *param_1) {
    _StartThread();
  }
  return;
}

// 0x00138d70  size 0x48
void Thread_Delete(int *param_1)

{
  if (-1 < *param_1) {
    DeleteThread();
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

// 0x00138dc0  size 0x54
bool Thread_Create(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  int iStack_10;
  
  param_1[1] = param_6;
  puStack_20 = &_mips_gp0_value;
  uStack_2c = param_3;
  uStack_28 = param_4;
  uStack_24 = param_5;
  uStack_1c = param_2;
  iStack_10 = param_6;
  iVar1 = CreateThread(auStack_30);
  *param_1 = iVar1;
  return 0 < *param_1;
}

// 0x00138e20  size 0x28c
/* sceMcSync */

long Mc_PollResult(int param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iStack_8;
  undefined4 uStack_4;
  
  uStack_4 = *(undefined4 *)(param_1 + 0xc);
  iStack_8 = 0;
  lVar2 = sceMcSync(1,&uStack_4,&iStack_8);
  bVar3 = true;
  if (lVar2 != 0) {
    if (lVar2 == -1) {
      **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 8;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x24) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x28) = 0x16;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xc);
      if (uVar1 < 0x14) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar1) {
        case 1:
          if (iStack_8 == 0) {
            **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 1;
            **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) & 0xfffffffd;
          }
          else if (iStack_8 + 2U < 2) {
            **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 1;
            **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 2;
          }
          else if (iStack_8 == -5) {
            **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 1;
            **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 4;
          }
          else {
            **(undefined4 **)(param_1 + 8) = 0;
            *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
            *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = 0;
            *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0;
          }
          bVar3 = false;
          break;
        case 2:
          if (-1 < iStack_8) {
            bVar3 = false;
            *(int *)(*(int *)(param_1 + 8) + 0x18) = iStack_8;
          }
          break;
        case 3:
          if (iStack_8 == 0) {
            bVar3 = false;
            *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = 0xffffffff;
          }
          break;
        case 4:
          if (-1 < iStack_8) {
            if (uVar1 == 0xd) {
              *(int *)(*(int *)(param_1 + 8) + 0x20) = iStack_8;
            }
            if (*(int *)(param_1 + 0xc) == 0x12) {
              *(int *)(*(int *)(param_1 + 8) + 0x1c) = iStack_8;
            }
            bVar3 = false;
          }
        }
      }
      if (bVar3) {
        **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 8;
        *(undefined4 *)(*(int *)(param_1 + 8) + 0x24) = *(undefined4 *)(param_1 + 0xc);
        uVar1 = Mc_TranslateResult(*(undefined1 *)(param_1 + 0xc),iStack_8);
        *(uint *)(*(int *)(param_1 + 8) + 0x28) = uVar1 & 0xffff;
        if ((*(undefined4 **)(param_1 + 8))[10] == 0x13) {
          **(undefined4 **)(param_1 + 8) = 0;
          *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
          *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = 0;
          *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0;
        }
      }
      else if (*(code **)(param_1 + 0x14) != (code *)0x0) {
        (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      }
    }
  }
  return lVar2;
}

// 0x001390b0  size 0x28c
/* switch over sceMc* calls */

long Mc_IssueCommand(int param_1)

{
  uint *puVar1;
  long lVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  lVar2 = 0;
  if (*(uint *)(param_1 + 0xc) < 0x14) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(param_1 + 0xc)) {
    case 1:
      lVar2 = maybe_sceMcGetDir(*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                                *(undefined1 *)(*(int *)(param_1 + 8) + 5),
                                *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                                *(undefined4 *)(param_1 + 0x24));
      break;
    case 2:
      lVar2 = maybe_sceMcOpen(*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                              *(undefined1 *)(*(int *)(param_1 + 8) + 5),
                              *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
      break;
    case 3:
      lVar2 = maybe_sceMcClose(*(undefined4 *)(*(int *)(param_1 + 8) + 0x18));
      break;
    case 4:
      lVar2 = maybe_sceMcSeek(*(undefined4 *)(*(int *)(param_1 + 8) + 0x18),
                              *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30));
      break;
    case 5:
      lVar2 = maybe_sceMcRead(*(undefined4 *)(*(int *)(param_1 + 8) + 0x18),
                              *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
      break;
    case 6:
      lVar2 = maybe_sceMcWrite(*(undefined4 *)(*(int *)(param_1 + 8) + 0x18),
                               *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
      break;
    case 10:
      lVar2 = maybe_sceMcFormat(*(undefined4 *)(*(int *)(param_1 + 8) + 0x18));
      break;
    case 0xb:
      lVar2 = maybe_sceMcOpenChecked
                        (*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                         *(undefined1 *)(*(int *)(param_1 + 8) + 5),*(undefined4 *)(param_1 + 0x28))
      ;
      break;
    case 0xc:
      lVar2 = maybe_sceMcMkdir(*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                               *(undefined1 *)(*(int *)(param_1 + 8) + 5),
                               *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
      break;
    case 0xd:
      lVar2 = maybe_sceMcSetFileInfo
                        (*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                         *(undefined1 *)(*(int *)(param_1 + 8) + 5),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x48),
                         *(undefined4 *)(param_1 + 0x4c));
      break;
    case 0xe:
      lVar2 = maybe_sceMcReadDirEntry
                        (*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                         *(undefined1 *)(*(int *)(param_1 + 8) + 5),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
      break;
    case 0xf:
      lVar2 = maybe_sceMcChdir(*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                               *(undefined1 *)(*(int *)(param_1 + 8) + 5),
                               *(undefined4 *)(param_1 + 0x28));
      break;
    case 0x10:
      lVar2 = maybe_sceMcFlush(*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                               *(undefined1 *)(*(int *)(param_1 + 8) + 5));
      break;
    case 0x11:
      lVar2 = maybe_sceMcUnformat(*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                                  *(undefined1 *)(*(int *)(param_1 + 8) + 5));
      break;
    case 0x12:
      lVar2 = maybe_sceMcDelete(*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                                *(undefined1 *)(*(int *)(param_1 + 8) + 5),
                                *(undefined4 *)(param_1 + 0x40));
      break;
    case 0x13:
      lVar2 = maybe_sceMcGetEntSpace
                        (*(undefined1 *)(*(int *)(param_1 + 8) + 4),
                         *(undefined1 *)(*(int *)(param_1 + 8) + 5),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x2c));
    }
  }
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar2 = 0;
  }
  else {
    if (lVar2 == -200) {
      uStack_4 = *(undefined4 *)(param_1 + 0xc);
      uStack_8 = 0;
      sceMcSync(1,&uStack_4,&uStack_8);
      puVar1 = *(uint **)(param_1 + 8);
    }
    else {
      puVar1 = *(uint **)(param_1 + 8);
    }
    *puVar1 = *puVar1 | 8;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x24) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x28) = 0x16;
  }
  return lVar2;
}

// 0x00139340  size 0x174
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
Mc_QueueCommand(int param_1,long param_2,undefined4 param_3,uint param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = _s_McFreeList_head;
  if (_s_McFreeList_head == 0) {
    uVar2 = 0;
  }
  else {
    *(int *)(_s_McFreeList_head + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(undefined4 *)(iVar1 + 0x10) = 1;
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x30);
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
    }
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(uint *)(iVar1 + 0xc) < 0x14) {
                    /* WARNING: Switch is manually overridden */
      switch(*(uint *)(iVar1 + 0xc)) {
      case 1:
        if ((param_4 & 1) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = param_1 + 8;
        }
        *(int *)(iVar1 + 0x1c) = iVar3;
        if ((param_4 & 2) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = param_1 + 0xc;
        }
        *(int *)(iVar1 + 0x20) = iVar3;
        if ((param_4 & 4) == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + 0x10;
        }
        *(int *)(iVar1 + 0x24) = param_1;
        break;
      case 2:
        *(uint *)(iVar1 + 0x28) = param_4;
        *(undefined4 *)(iVar1 + 0x30) = param_5;
        break;
      case 4:
        *(uint *)(iVar1 + 0x34) = param_4;
        *(undefined4 *)(iVar1 + 0x30) = param_5;
        break;
      case 5:
      case 6:
        *(uint *)(iVar1 + 0x38) = param_4;
        *(undefined4 *)(iVar1 + 0x3c) = param_5;
        break;
      case 0xb:
        *(uint *)(iVar1 + 0x28) = param_4;
        break;
      case 0xc:
        *(uint *)(iVar1 + 0x40) = param_4;
        *(undefined4 *)(iVar1 + 0x44) = param_5;
        break;
      case 0xd:
        *(uint *)(iVar1 + 0x28) = param_4;
        *(undefined4 *)(iVar1 + 0x30) = param_5;
        *(undefined4 *)(iVar1 + 0x48) = param_6;
        *(undefined4 *)(iVar1 + 0x4c) = param_7;
        break;
      case 0xe:
        *(uint *)(iVar1 + 0x28) = param_4;
        *(undefined4 *)(iVar1 + 0x50) = param_5;
        *(undefined4 *)(iVar1 + 0x54) = param_6;
        break;
      case 0xf:
        *(uint *)(iVar1 + 0x28) = param_4;
        break;
      case 0x12:
        *(uint *)(iVar1 + 0x40) = param_4;
        break;
      case 0x13:
        *(uint *)(iVar1 + 0x28) = param_4;
        *(undefined4 *)(iVar1 + 0x2c) = param_5;
      }
    }
    List_Remove(0x386f94,iVar1);
    List_Append(0x386fa8,iVar1);
    uVar2 = 1;
  }
  return uVar2;
}

// 0x001394c0  size 0xb8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Mc_Update(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = _s_McQueue_head;
  if (_s_McQueue_head != 0) {
    while (iVar1 = *(int *)(iVar3 + 4), (**(uint **)(iVar3 + 8) & 8) == 0) {
      if (*(int *)(iVar3 + 0x10) == 0) {
        lVar2 = Mc_PollResult(iVar3);
      }
      else {
        lVar2 = Mc_IssueCommand(iVar3);
      }
      if (lVar2 == 0) {
        return;
      }
      if (lVar2 != 1) {
        return;
      }
      *(int *)(*(int *)(iVar3 + 8) + 0x14) = *(int *)(*(int *)(iVar3 + 8) + 0x14) + -1;
      List_Remove(0x386fa8,iVar3);
      List_Append(0x386f94,iVar3);
      iVar3 = iVar1;
      if (iVar1 == 0) {
        return;
      }
    }
  }
  return;
}

// 0x00139580  size 0x5c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Mc_Shutdown(void)

{
  Gfx_RemoveFrameCallback(0x386fbc);
  List_Clear(0x386f94);
  List_Clear(0x386fa8);
  if (_s_McRequestPool != 0) {
    __destroy_new_array(_s_McRequestPool,0x1395e0);
    _s_McRequestPool = 0;
  }
  return;
}

// 0x001395e0  size 0x60
long Mc_Command_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e118;
    ListNode_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00139640  size 0xec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sceMcInit */

void Mc_Init(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  
  sceMcInit();
  _s_McFreeList_ownsNodes = 0;
  _s_McQueue_ownsNodes = 0;
  uVar1 = maybe_operator_new_heap(param_2 * 0x58 + 0x10,param_1);
  _s_McRequestPool = __construct_new_array(uVar1,0x139730,0x1395e0,0x58,param_2);
  uVar2 = 0;
  if (param_2 != 0) {
    iVar3 = 0;
    do {
      List_Append(0x386f94,_s_McRequestPool + iVar3);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x58;
    } while (uVar2 < param_2);
  }
  _s_McFrameNode_func = Mc_Update;
  _s_McFrameNode_arg = 0;
  Gfx_AddFrameCallback(0x386fbc);
  return;
}

// 0x00139730  size 0x38
undefined8 Mc_Command_ctor(undefined8 param_1)

{
  ListNode_ctor(param_1,0);
  *(undefined4 *)param_1 = &DAT_0036e118;
  return param_1;
}

// 0x00139770  size 0xa8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Mc_CancelCommand(uint *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _s_McQueue_head;
  if ((*param_1 & 8) != 0) {
    while (iVar2 = iVar1, iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 4);
      if (param_1 == *(uint **)(iVar2 + 8)) {
        List_Remove(0x386fa8,iVar2);
        List_Append(0x386f94,iVar2);
      }
    }
    param_1[5] = 0;
    *param_1 = *param_1 & 0xfffffff7;
  }
  return;
}

// 0x0013981c  size 0x4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* follows Mc_CancelCommand; no call, branch, pointer or constant reference (exception landing pad
   or dead code) */

undefined4
Mc_CancelCommand_Orphan1
          (int param_1,long param_2,undefined4 param_3,uint param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  
  iVar1 = _s_McFreeList_head;
  uStack00000020 = (undefined4)unaff_s0;
  uStack00000024 = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (_s_McFreeList_head == 0) {
    uVar2 = 0;
  }
  else {
    *(int *)(_s_McFreeList_head + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(undefined4 *)(iVar1 + 0x10) = 1;
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x30);
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
    }
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    switch(*(undefined4 *)(iVar1 + 0xc)) {
    case 1:
      if ((param_4 & 1) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1 + 8;
      }
      *(int *)(iVar1 + 0x1c) = iVar3;
      if ((param_4 & 2) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1 + 0xc;
      }
      *(int *)(iVar1 + 0x20) = iVar3;
      if ((param_4 & 4) == 0) {
        param_1 = 0;
      }
      else {
        param_1 = param_1 + 0x10;
      }
      *(int *)(iVar1 + 0x24) = param_1;
      break;
    case 2:
      *(uint *)(iVar1 + 0x28) = param_4;
      *(undefined4 *)(iVar1 + 0x30) = param_5;
      break;
    case 4:
      *(uint *)(iVar1 + 0x34) = param_4;
      *(undefined4 *)(iVar1 + 0x30) = param_5;
      break;
    case 5:
    case 6:
      *(uint *)(iVar1 + 0x38) = param_4;
      *(undefined4 *)(iVar1 + 0x3c) = param_5;
      break;
    case 0xb:
      *(uint *)(iVar1 + 0x28) = param_4;
      break;
    case 0xc:
      *(uint *)(iVar1 + 0x40) = param_4;
      *(undefined4 *)(iVar1 + 0x44) = param_5;
      break;
    case 0xd:
      *(uint *)(iVar1 + 0x28) = param_4;
      *(undefined4 *)(iVar1 + 0x30) = param_5;
      *(undefined4 *)(iVar1 + 0x48) = param_6;
      *(undefined4 *)(iVar1 + 0x4c) = param_7;
      break;
    case 0xe:
      *(uint *)(iVar1 + 0x28) = param_4;
      *(undefined4 *)(iVar1 + 0x50) = param_5;
      *(undefined4 *)(iVar1 + 0x54) = param_6;
      break;
    case 0xf:
      *(uint *)(iVar1 + 0x28) = param_4;
      break;
    case 0x12:
      *(uint *)(iVar1 + 0x40) = param_4;
      break;
    case 0x13:
      *(uint *)(iVar1 + 0x28) = param_4;
      *(undefined4 *)(iVar1 + 0x2c) = param_5;
    }
    List_Remove(0x386f94,iVar1);
    List_Append(0x386fa8,iVar1);
    uVar2 = 1;
  }
  return uVar2;
}

// 0x00139830  size 0x88
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Mc_RemoveCommandsFor(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _s_McQueue_head;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    if (param_1 == *(int *)(iVar2 + 8)) {
      List_Remove(0x386fa8,iVar2);
      List_Append(0x386f94,iVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 0x001398c0  size 0x48
undefined4 Mc_InitCommand(undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined1 *)((int)param_1 + 5) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return 1;
}

// 0x00139910  size 0x510
undefined4 Mc_TranslateResult(byte param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 < 0x14) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    default:
      goto switchD_0013993c_caseD_0;
    case 1:
      if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -1) {
        uVar1 = 0x9003;
      }
      else if (param_2 == -0xd2) {
        uVar1 = 0x16;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 2:
      if (param_2 == -7) {
        uVar1 = 0x18;
      }
      else if (param_2 == -5) {
        uVar1 = 0xd;
      }
      else if (param_2 == -4) {
        uVar1 = 2;
      }
      else if (param_2 == -3) {
        uVar1 = 0x1c;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -0xd2) {
        uVar1 = 0x16;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 3:
      if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -4) {
        uVar1 = 9;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 4:
      if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -4) {
        uVar1 = 9;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 5:
      if (param_2 == -5) {
        uVar1 = 0xd;
      }
      else if (param_2 == -4) {
        uVar1 = 9;
      }
      else if (param_2 == -3) {
        uVar1 = 5;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 6:
      if (param_2 == -8) {
        uVar1 = 5;
      }
      else if (param_2 == -5) {
        uVar1 = 0xd;
      }
      else if (param_2 == -4) {
        uVar1 = 9;
      }
      else if (param_2 == -3) {
        uVar1 = 0x1c;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 10:
      if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -4) {
        uVar1 = 9;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 0xb:
      if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -4) {
        uVar1 = 0x11;
      }
      else if (param_2 == -3) {
        uVar1 = 0x1c;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -0xd2) {
        uVar1 = 0x16;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 0xc:
      if (param_2 == -6) {
        uVar1 = 5;
      }
      else if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -4) {
        uVar1 = 2;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -0xd2) {
        uVar1 = 0x16;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 0xd:
      if (param_2 == -6) {
        uVar1 = 5;
      }
      else if (param_2 == -5) {
        uVar1 = 0xd;
      }
      else if (param_2 == -4) {
        uVar1 = 2;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -0xd2) {
        uVar1 = 0x16;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 0xe:
      if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -4) {
        uVar1 = 2;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 0xf:
      if (param_2 == -6) {
        uVar1 = 0x5a;
      }
      else if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -4) {
        uVar1 = 2;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -0xd2) {
        uVar1 = 0x16;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 0x10:
      if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 0x11:
      if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 0x12:
      if (param_2 == -5) {
        uVar1 = 0xd;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -0xd2) {
        uVar1 = 0x16;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
      break;
    case 0x13:
      if (param_2 == -5) {
        uVar1 = 0x6f;
      }
      else if (param_2 == -4) {
        uVar1 = 2;
      }
      else if (param_2 == -2) {
        uVar1 = 0x2f;
      }
      else if (param_2 == -0xd2) {
        uVar1 = 0x16;
      }
      else if (param_2 == -200) {
        uVar1 = 0x10;
      }
      else if (param_2 == -100) {
        uVar1 = 0x8001;
      }
      else {
        uVar1 = 0x13;
      }
    }
  }
  else {
switchD_0013993c_caseD_0:
    uVar1 = 0x16;
  }
  return uVar1;
}

// 0x00139e20  size 0x60
long Mc_Queue_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e128;
    ListNode_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00139e80  size 0x90
long Mc_Manager_dtor(long param_1,short param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (int)param_1;
    if (iVar1 + 0x2c != 0) {
      *(undefined **)(iVar1 + 0x2c) = &DAT_0036e128;
      ListNode_dtor(iVar1 + 0x2c,0);
    }
    List_dtor(iVar1 + 0x18,0xffffffffffffffff);
    List_dtor(iVar1 + 4,0xffffffffffffffff);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00139f10  size 0x1cc
int maybe_Gfx_ClipRect(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                      int param_7,int param_8)

{
  int iVar1;
  int iStack_10;
  
  if (param_2 + param_4 < param_6 + param_8) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if ((param_2 != 0) && (param_6 != 0)) {
      iVar1 = param_2;
      if (param_6 <= param_2) {
        iVar1 = param_6;
      }
      if (iVar1 != 0) {
        Mem_Copy(param_1,param_5,iVar1);
      }
      param_1 = param_1 + iVar1;
      param_5 = param_5 + iVar1;
      param_2 = param_2 - iVar1;
      param_6 = param_6 - iVar1;
    }
    if ((param_4 != 0) && (param_6 != 0)) {
      if (param_4 < param_6) {
        param_6 = param_4;
      }
      if (param_6 != 0) {
        Mem_Copy(param_3,param_5,param_6);
      }
      iVar1 = iVar1 + param_6;
      param_3 = param_3 + param_6;
      param_4 = param_4 - param_6;
    }
    iStack_10 = param_7;
    if ((param_2 != 0) && (param_8 != 0)) {
      if (param_8 <= param_2) {
        param_2 = param_8;
      }
      if (param_2 != 0) {
        Mem_Copy(param_1,param_7,param_2);
      }
      iVar1 = iVar1 + param_2;
      param_8 = param_8 - param_2;
      iStack_10 = param_7 + param_2;
    }
    if ((param_4 != 0) && (param_8 != 0)) {
      if (param_4 < param_8) {
        param_8 = param_4;
      }
      if (param_8 != 0) {
        Mem_Copy(param_3,iStack_10,param_8);
        iVar1 = iVar1 + param_8;
      }
    }
  }
  return iVar1;
}

// 0x0013a0e0  size 0x118
bool Movie_CopyAudioChunk(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  RingBuf_GetWriteSpans(param_3 + 0x100,&uStack_4,&uStack_c,&uStack_8,&uStack_10);
  uVar1 = maybe_Gfx_ClipRect(uStack_4 & 0xfffffff | 0x20000000,uStack_c,
                             uStack_8 & 0xfffffff | 0x20000000,uStack_10);
  uVar3 = uVar1;
  if (*(uint *)(param_3 + 0x13c) < 0x28) {
    uVar2 = 0x28 - *(uint *)(param_3 + 0x13c);
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    uVar3 = uVar1 - uVar2;
    *(uint *)(param_3 + 0x13c) = *(int *)(param_3 + 0x13c) + uVar2;
  }
  *(int *)(param_3 + 0x108) = (int)(*(int *)(param_3 + 0x108) + uVar3) % *(int *)(param_3 + 0x104);
  *(uint *)(param_3 + 0x10c) = *(int *)(param_3 + 0x10c) + uVar3;
  *(uint *)(param_3 + 0x110) = *(int *)(param_3 + 0x110) + uVar3;
  return 0 < (int)uVar1;
}

// 0x0013a200  size 0x228
bool Movie_CopyVideoChunk(undefined8 param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lStack_30;
  long lStack_28;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  Movie_GetStreamSpans(param_3 + 0x80,&uStack_4,&uStack_c,&uStack_8,&uStack_10);
  lVar1 = maybe_Gfx_ClipRect(uStack_4 & 0xfffffff | 0x20000000,uStack_c,
                             uStack_8 & 0xfffffff | 0x20000000,uStack_10);
  iVar2 = (int)lVar1;
  if (0 < lVar1) {
    lStack_30 = *(long *)(param_2 + 0x10);
    lStack_28 = *(long *)(param_2 + 0x18);
    iStack_20 = uStack_4 - *(int *)(param_3 + 0x80);
    iStack_1c = iVar2;
    WaitSema(*(undefined4 *)(param_3 + 0xc0));
    if ((*(int *)(param_3 + 0xd8) < *(int *)(param_3 + 0xd4)) &&
       ((RingBuf_Write(param_3 + 0x80,&lStack_30), -1 < lStack_30 || (-1 < lStack_28)))) {
      *(long *)(*(int *)(param_3 + 0xd0) + *(int *)(param_3 + 0xdc) * 0x18) = lStack_30;
      *(long *)(*(int *)(param_3 + 0xdc) * 0x18 + *(int *)(param_3 + 0xd0) + 8) = lStack_28;
      *(int *)(*(int *)(param_3 + 0xdc) * 0x18 + *(int *)(param_3 + 0xd0) + 0x10) = iStack_20;
      *(int *)(*(int *)(param_3 + 0xdc) * 0x18 + *(int *)(param_3 + 0xd0) + 0x14) = iStack_1c;
      *(int *)(param_3 + 0xd8) = *(int *)(param_3 + 0xd8) + 1;
      *(int *)(param_3 + 0xdc) = (*(int *)(param_3 + 0xdc) + 1) % *(int *)(param_3 + 0xd4);
    }
    SignalSema(*(undefined4 *)(param_3 + 0xc0));
  }
  WaitSema(*(undefined4 *)(param_3 + 0xc0));
  *(int *)(param_3 + 0x94) = *(int *)(param_3 + 0x94) + iVar2;
  *(long *)(param_3 + 200) = *(long *)(param_3 + 200) + (long)iVar2;
  SignalSema(*(undefined4 *)(param_3 + 0xc0));
  return 0 < lVar1;
}

// 0x0013a430  size 0xac
/* sceMpeg callback dispatch */

undefined4 Movie_HandleCallback(undefined8 param_1,byte *param_2,int param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*param_2 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(*param_2) {
    case 1:
      RotateThreadReadyQueue(*(undefined4 *)(param_3 + 0x50));
      Movie_KickDma(param_3 + 0x80);
      return 1;
    case 2:
      Movie_ResetDma(param_3 + 0x80);
      break;
    case 3:
      Movie_ReadDmaHandler(param_3 + 0x80);
      break;
    case 5:
      Movie_IpuDmaHandler(param_3 + 0x80,&uStack_20);
      *(undefined8 *)(param_2 + 8) = uStack_20;
      *(undefined8 *)(param_2 + 0x10) = uStack_18;
    }
  }
  return 1;
}

// 0x0013a4e0  size 0x8
undefined4 Movie_GetFrameCount(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// 0x0013a4f0  size 0x50
undefined4 Movie_IsFrameReady(uint *param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if (((param_1[0x50] == 0) || ((*param_1 & 2) == 0)) || ((*param_1 & 0x40) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *param_2 = param_1[2];
    *param_3 = param_1[3];
  }
  return uVar1;
}

// 0x0013a540  size 0x88
/* sceMpegDemuxPss */

int Movie_Demux(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 != 0) {
    iVar1 = maybe_Mpeg_DemuxPss(param_1 + 8,
                                *(int *)(param_1 + 0x6c) +
                                (*(int *)(param_1 + 0x70) + (*(int *)(param_1 + 0x78) - iVar2)) %
                                *(int *)(param_1 + 0x70),iVar2,*(undefined4 *)(param_1 + 0x6c),
                                *(undefined4 *)(param_1 + 0x70));
    iVar2 = *(int *)(param_1 + 0x7c);
    if (iVar1 < *(int *)(param_1 + 0x7c)) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) - iVar2;
  }
  return iVar1;
}

// 0x0013a5d0  size 0x188
void Movie_DecodeThread(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = maybe_sceMpegGetDecodeMode(param_1 + 2);
  do {
    if ((lVar3 != 0) || ((*param_1 & 0x10) != 0)) goto LAB_0013a6fc;
    if ((param_1[0x50] != 0) && ((*param_1 & 2) != 0)) {
      uVar1 = param_1[0x3c];
      while( true ) {
        if (uVar1 == param_1[0x3a]) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[0x38] + param_1[0x3b] * param_1[0x39];
        }
        if (iVar4 != 0) break;
        RotateThreadReadyQueue(param_1[0x14]);
        uVar1 = param_1[0x3c];
      }
      uVar1 = param_1[0x3d];
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 + 0xf;
      }
      uVar2 = param_1[0x3e];
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 0xf;
      }
      lVar3 = maybe_sceMpegGetPictureRAW8(param_1 + 2,iVar4,((int)uVar1 >> 4) * ((int)uVar2 >> 4));
      if (lVar3 < 0) {
LAB_0013a6fc:
        param_1[0x3f] = 1;
        maybe_sceMpegReset(param_1 + 2);
        *param_1 = *param_1 & 0xffffffbf;
        *param_1 = *param_1 | 0x80;
        *param_1 = *param_1 | 0x20;
        return;
      }
      DIntr();
      param_1[0x3c] = param_1[0x3c] + 1;
      param_1[0x3b] = (int)(param_1[0x3b] + 1) % (int)param_1[0x3a];
      SYNC(0);
      EI();
    }
    *param_1 = *param_1 | 0x40;
    RotateThreadReadyQueue(param_1[0x14]);
    lVar3 = maybe_sceMpegGetDecodeMode(param_1 + 2);
  } while( true );
}

// 0x0013a760  size 0x8
void maybe_Movie_iSuspendSelf(void)

{
  syscall(0x2b);
  return;
}

// 0x0013a770  size 0x20
bool Movie_IsEnd(int param_1)

{
  long lVar1;
  
  lVar1 = maybe_sceMpegIsEnd(param_1 + 8);
  return lVar1 != 0;
}

// 0x0013a790  size 0x11c
undefined4 Movie_FeedData(uint *param_1)

{
  int iVar1;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  if ((param_1[0x50] != 0) && ((*param_1 & 2) != 0)) {
    uStack_4 = DAT_0036e718;
    uStack_3 = DAT_0036e719;
    uStack_2 = DAT_0036e71a;
    uStack_1 = DAT_0036e71b;
    Movie_GetStreamSpans(param_1 + 0x20,&uStack_8,&iStack_10,&uStack_c,&iStack_14);
    if (3 < (uint)(iStack_10 + iStack_14)) {
      iVar1 = maybe_Gfx_ClipRect(uStack_8,iStack_10,uStack_c,iStack_14,&uStack_4,4,0,0);
      WaitSema(param_1[0x30]);
      param_1[0x25] = param_1[0x25] + iVar1;
      *(long *)(param_1 + 0x32) = *(long *)(param_1 + 0x32) + (long)iVar1;
      SignalSema(param_1[0x30]);
      WaitSema(param_1[0x30]);
      iVar1 = param_1[0x25] + 0x7ff;
      if (iVar1 < 0) {
        iVar1 = param_1[0x25] + 0xffe;
      }
      param_1[0x25] = (iVar1 >> 0xb) << 0xb;
      SignalSema(param_1[0x30]);
      return 1;
    }
  }
  return 0;
}

// 0x0013a8b0  size 0x2c
void Movie_RequestStop(uint *param_1)

{
  if ((*param_1 & 8) != 0) {
    *param_1 = *param_1 | 0x10;
  }
  return;
}

// 0x0013a8e0  size 0x48
void Movie_Close(int param_1)

{
  Thread_Terminate(param_1 + 0x54);
  Thread_Delete(param_1 + 0x54);
  maybe_sceMpegDelete(param_1 + 8);
  sceMpegCreate(param_1 + 8,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  return;
}

// 0x0013a930  size 0x1ec
void Movie_Start(undefined8 param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)param_1;
  maybe_sceMpegReset(puVar2 + 2);
  puVar2[0x50] = 0;
  puVar2[0x51] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  if ((*puVar2 & 2) == 0) {
    uVar1 = *puVar2;
  }
  else {
    Movie_ResetStream(puVar2 + 0x20,param_4);
    uVar1 = *puVar2;
  }
  if ((uVar1 & 4) != 0) {
    puVar2[0x4f] = 0;
    puVar2[0x44] = 0;
    if (param_4 == 0) {
      puVar2[0x42] = 0;
      puVar2[0x43] = 0;
    }
  }
  sceMpegAddCallback(puVar2 + 2,0,0x13a430,param_1);
  sceMpegAddCallback(puVar2 + 2,1,0x13a430,param_1);
  sceMpegAddCallback(puVar2 + 2,2,0x13a430,param_1);
  sceMpegAddCallback(puVar2 + 2,3,0x13a430,param_1);
  sceMpegAddCallback(puVar2 + 2,4,0x13a430,param_1);
  sceMpegAddCallback(puVar2 + 2,5,0x13a430,param_1);
  if (((*puVar2 & 2) != 0) && (param_2 != 0)) {
    maybe_Demux_DeliverPacket(puVar2 + 2,0,0,0x13a200,param_1);
    puVar2[0x50] = (uint)param_2;
  }
  if (((*puVar2 & 4) != 0) && (param_3 != 0)) {
    maybe_Demux_DeliverPacket(puVar2 + 2,2,0,0x13a0e0,param_1);
    puVar2[0x51] = (uint)param_3;
  }
  *puVar2 = *puVar2 & 0xffffff0f;
  *puVar2 = *puVar2 | 8;
  Thread_Create(puVar2 + 0x15,puVar2[0x14],0x13a5d0,puVar2[0x19],puVar2[0x1a],0);
  Thread_Start(puVar2 + 0x15,param_1);
  return;
}

// 0x0013ab20  size 0x98
void Movie_StopDma(uint *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 2) != 0) {
    DIntr();
    uVar1 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar1 | 0x10000;
    REG_DMAC_4_IPU_TO_CHCR = 5;
    uVar1 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
    SYNC(0);
    EI();
    REG_DMAC_4_IPU_TO_QWC = 0;
    REG_DMAC_4_IPU_TO_MADR = 0;
    REG_DMAC_4_IPU_TO_TADR = 0;
    DeleteSema(param_1[0x30]);
  }
  maybe_sceMpegDelete(param_1 + 2);
  return;
}

// 0x0013abc0  size 0x11c
/* sceMpegCreate */

void Movie_Open(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  sceMpegCreate(param_1 + 2,param_2[0xe],param_2[0xf]);
  *param_1 = 1;
  param_1[0x14] = param_2[0x12];
  param_1[0x17] = param_2[0xe];
  param_1[0x18] = param_2[0xf];
  param_1[0x19] = param_2[0x10];
  param_1[0x1a] = param_2[0x11];
  param_1[0x1b] = *param_2;
  param_1[0x1d] = param_2[1];
  param_1[0x1c] = param_2[1] * param_2[2];
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (param_2[0x13] == 0) {
    uVar1 = param_2[0x14];
  }
  else {
    *param_1 = *param_1 | 2;
    puVar2 = param_2;
    if (param_2 != (uint *)0x0) {
      puVar2 = param_2 + 3;
    }
    Movie_InitStream(param_1 + 0x20,puVar2);
    uVar1 = param_2[0x14];
  }
  if (uVar1 != 0) {
    *param_1 = *param_1 | 4;
    if (param_2 != (uint *)0x0) {
      param_2 = param_2 + 0xc;
    }
    param_1[0x40] = *param_2;
    param_1[0x41] = param_2[1] * 0x60;
    param_1[0x4f] = 0;
    param_1[0x44] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
  }
  return;
}

// 0x0013ace0  size 0x8
void Movie_ShutdownNop(void)

{
  return;
}

// 0x0013ad00  size 0x1c
void RingBuf_Consume(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) <= param_2) {
    param_2 = *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - param_2;
  return;
}

// 0x0013ad20  size 0x24
void RingBuf_GetSpans(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                     undefined4 *param_4,undefined4 *param_5)

{
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_4 = param_1[2];
  *param_5 = param_1[3];
  return;
}

// 0x0013ad50  size 0x1c
int RingBuf_GetFree(int param_1)

{
  if (*(uint *)(param_1 + 0x3c) < 0x28) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x14;
  }
  return param_1;
}

// 0x0013ad70  size 0xb8
void RingBuf_GetWriteSpans(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if ((uint)param_1[0xf] < 0x28) {
    *param_2 = (int)param_1 + param_1[0xf] + 0x14U;
    *param_3 = 0x28 - param_1[0xf];
    *param_4 = *param_1;
    *param_5 = param_1[1];
  }
  else {
    iVar1 = param_1[2];
    iVar2 = param_1[1] - param_1[3];
    if (param_1[1] - iVar1 < iVar2) {
      *param_2 = *param_1 + iVar1;
      *param_3 = param_1[1] - param_1[2];
      *param_4 = *param_1;
      *param_5 = iVar2 - (param_1[1] - param_1[2]);
    }
    else {
      *param_2 = *param_1 + iVar1;
      *param_3 = iVar2;
      *param_4 = 0;
      *param_5 = 0;
    }
  }
  return;
}

// 0x0013ae30  size 0x11c
undefined8 RingBuf_Write(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  
  iVar4 = (*(int *)(param_1 + 0x54) + (*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58))) %
          *(int *)(param_1 + 0x54);
  bVar2 = true;
  iVar3 = *(int *)(param_1 + 8) * 0x800;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      plVar7 = (long *)(*(int *)(param_1 + 0x50) + iVar4 * 0x18);
      iVar6 = *(int *)((int)plVar7 + 0x14);
      if (iVar6 == 0) {
        return 0;
      }
      iVar5 = *(int *)(param_2 + 0x14);
      if (iVar5 == 0) {
        return 0;
      }
      iVar1 = (int)plVar7[2];
      if (((iVar1 + iVar3) - *(int *)(param_2 + 0x10)) % iVar3 < iVar5) {
        iVar5 = (*(int *)(param_2 + 0x10) + iVar5) - iVar1;
        if (iVar5 <= iVar6) {
          iVar6 = iVar5;
        }
        *(int *)(plVar7 + 2) = (iVar1 + iVar6) % iVar3;
        *(int *)((int)plVar7 + 0x14) = *(int *)((int)plVar7 + 0x14) - iVar6;
        if (*(int *)((int)plVar7 + 0x14) == 0) {
          if (-1 < *plVar7) {
            *plVar7 = -1;
            plVar7[1] = -1;
            *(undefined4 *)(plVar7 + 2) = 0;
            *(undefined4 *)((int)plVar7 + 0x14) = 0;
          }
          iVar6 = *(int *)(param_1 + 0x58) + -1;
          if (0 < iVar6) {
            iVar6 = 0;
          }
          *(int *)(param_1 + 0x58) = iVar6;
        }
      }
      else {
        bVar2 = false;
      }
      iVar4 = (iVar4 + 1) % *(int *)(param_1 + 0x54);
    } while (bVar2);
  }
  return 0;
}

// 0x0013af50  size 0x194
undefined4 Movie_IpuDmaHandler(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  
  iVar6 = REG_DMAC_4_IPU_TO_MADR;
  uVar5 = REG_IPU_BP;
  bVar7 = false;
  WaitSema(param_1[0x10]);
  uVar1 = param_1[0xe];
  iVar9 = param_1[2];
  iVar10 = 0;
  *param_2 = 0xffffffffffffffff;
  iVar9 = iVar9 * 0x800;
  param_2[1] = 0xffffffffffffffff;
  iVar2 = *param_1;
  iVar3 = param_1[0x16];
  iVar4 = param_1[0x17];
  while ((iVar10 < iVar3 && (!bVar7))) {
    iVar8 = ((iVar10 + param_1[0x15] + (iVar4 - iVar3)) % param_1[0x15]) * 0x18;
    puVar11 = (undefined8 *)(param_1[0x14] + iVar8);
    if ((((int)((iVar9 + iVar6 + ((uVar5 >> 0x10 & 3) + (uVar5 >> 8 & 0xf)) * -0x10 +
                         ((int)(uVar1 & 0x7f) >> 3)) - iVar2) % iVar9 + iVar9) -
        *(int *)(puVar11 + 2)) % iVar9 < *(int *)((int)puVar11 + 0x14)) {
      *param_2 = *puVar11;
      param_2[1] = *(undefined8 *)(param_1[0x14] + iVar8 + 8);
      *(undefined8 *)(param_1[0x14] + iVar8) = 0xffffffffffffffff;
      *(undefined8 *)(param_1[0x14] + iVar8 + 8) = 0xffffffffffffffff;
      iVar8 = param_1[0x16];
      if (0 < iVar8) {
        iVar8 = 1;
      }
      param_1[0x16] = param_1[0x16] - iVar8;
      bVar7 = true;
    }
    iVar10 = iVar10 + 1;
  }
  SignalSema(param_1[0x10]);
  return 1;
}

// 0x0013b0f0  size 0x388
void Movie_ReadDmaHandler(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  WaitSema(param_1[0x10]);
  uVar1 = param_1[0xe];
  uVar2 = param_1[10];
  uVar3 = param_1[7];
  uVar4 = *param_1;
  uVar11 = param_1[8];
  iVar7 = (uVar1 >> 0x10 & 3) + (uVar1 >> 8 & 0xf);
  uVar12 = param_1[9] + iVar7;
  uVar13 = uVar3 + iVar7 * -0x10;
  uVar10 = uVar2 | 0x100;
  if (uVar13 < uVar4) {
    uVar5 = param_1[2];
    uVar12 = uVar4 - uVar13 >> 4;
    uVar13 = uVar13 + uVar5 * 0x800;
    uVar11 = param_1[1] & 0xfffffff;
    if ((uVar3 == uVar4) || (uVar3 == uVar4 + uVar5 * 0x800)) {
      iVar7 = 0;
    }
    else {
      iVar7 = 3;
    }
    bVar6 = false;
    uVar10 = uVar2 & 0xfffffff | iVar7 << 0x1c | 0x100;
    iVar7 = (int)(uVar5 - param_1[3]) % (int)uVar5;
    if ((-1 < iVar7) && (iVar7 < (int)param_1[4])) {
      bVar6 = true;
    }
    if (!bVar6) {
      param_1[3] = uVar5 - 1;
      param_1[4] = param_1[4] + 1;
    }
  }
  else {
    uVar5 = param_1[2];
    uVar8 = param_1[1] + (uVar5 + 1) * 0x10 & 0xfffffff;
    if (uVar3 == uVar8) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar3 - uVar4 >> 0xb;
    }
    if (uVar13 == uVar8) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar13 - uVar4 >> 0xb;
    }
    if (uVar9 != uVar8) {
      uVar11 = param_1[1] + uVar9 * 0x10 & 0xfffffff;
      uVar12 = (uVar4 + uVar9 * 0x800) - uVar13 >> 4;
      if (uVar4 + (int)(uVar3 - uVar4) % (int)(uVar5 << 0xb) ==
          uVar4 + ((int)(param_1[3] + param_1[4]) % (int)uVar5) * 0x800) {
        iVar7 = 0;
      }
      else {
        iVar7 = 3;
      }
      bVar6 = false;
      uVar10 = uVar2 & 0xfffffff | iVar7 << 0x1c | 0x100;
      iVar7 = (int)((uVar8 + uVar5) - param_1[3]) % (int)uVar5;
      if ((-1 < iVar7) && (iVar7 < (int)param_1[4])) {
        bVar6 = true;
      }
      if (!bVar6) {
        param_1[3] = uVar8;
        param_1[4] = param_1[4] + 1;
      }
    }
  }
  if ((param_1[0xb] != 0) && (param_1[0xc] != 0)) {
    REG_DMAC_3_IPU_FROM_MADR = param_1[0xb];
    REG_DMAC_3_IPU_FROM_QWC = param_1[0xc];
    uVar2 = param_1[0xd];
    DIntr();
    uVar3 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar3 | 0x10000;
    REG_DMAC_3_IPU_FROM_CHCR = uVar2 | 0x100;
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 & 0xfffeffff;
    SYNC(0);
    EI();
  }
  if (param_1[4] != 0) {
    do {
      iVar7 = REG_IPU_CTRL;
    } while (iVar7 < 0);
    REG_IPU_CMD = uVar1 & 0x7f;
    do {
      iVar7 = REG_IPU_CTRL;
    } while (iVar7 < 0);
  }
  REG_DMAC_4_IPU_TO_MADR = uVar13;
  REG_DMAC_4_IPU_TO_TADR = uVar11;
  REG_DMAC_4_IPU_TO_QWC = uVar12;
  if (param_1[4] != 0) {
    DIntr();
    uVar1 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar1 | 0x10000;
    REG_DMAC_4_IPU_TO_CHCR = uVar10;
    uVar1 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
    SYNC(0);
    EI();
  }
  REG_IPU_CTRL = param_1[0xf];
  param_1[0x11] = 1;
  SignalSema(param_1[0x10]);
  return;
}

// 0x0013b480  size 0x118
void Movie_ResetDma(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  WaitSema(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x44) = 0;
  DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_4_IPU_TO_CHCR = 5;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  SYNC(0);
  EI();
  uVar2 = REG_DMAC_4_IPU_TO_MADR;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_TADR;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_QWC;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_CHCR;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  do {
    uVar1 = REG_IPU_CTRL;
  } while ((uVar1 & 0xf0) != 0);
  DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = 0;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  SYNC(0);
  EI();
  uVar2 = REG_DMAC_3_IPU_FROM_MADR;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_QWC;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_CHCR;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = REG_IPU_BP;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = REG_IPU_CTRL;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  SignalSema(*(undefined4 *)(param_1 + 0x40));
  return;
}

// 0x0013b5a0  size 0x270
void Movie_KickDma(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  
  WaitSema(param_1[0x10]);
  DIntr();
  uVar9 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar9 | 0x10000;
  REG_DMAC_4_IPU_TO_CHCR = 5;
  uVar9 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar9 & 0xfffeffff;
  SYNC(0);
  EI();
  uVar9 = REG_DMAC_4_IPU_TO_CHCR;
  uVar2 = REG_DMAC_4_IPU_TO_MADR;
  iVar4 = param_1[2];
  if (uVar2 == (param_1[1] + (iVar4 + 1) * 0x10 & 0xfffffffU)) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar2 - *param_1 >> 0xb;
  }
  iVar3 = (int)((uVar2 + iVar4) - param_1[3]) % iVar4;
  param_1[3] = (param_1[3] + iVar3) % iVar4;
  param_1[4] = param_1[4] - iVar3;
  iVar4 = (param_1[3] + param_1[4]) % param_1[2];
  iVar3 = param_1[5];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x7ff;
  }
  iVar3 = iVar3 >> 0xb;
  uVar2 = param_1[5] & 0x7ff;
  if ((param_1[5] < 0) && (uVar2 != 0)) {
    uVar2 = uVar2 - 0x800;
  }
  param_1[5] = uVar2;
  if (0 < iVar3) {
    iVar8 = (param_1[2] + param_1[3] + param_1[4] + -1) % param_1[2];
    iVar6 = *param_1;
    puVar7 = (undefined4 *)(param_1[1] + iVar8 * 0x10);
    *puVar7 = 0x30000080;
    puVar7[1] = iVar6 + iVar8 * 0x800;
    puVar7[2] = 0;
    puVar7[3] = 0;
  }
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      if (iVar8 == iVar3 + -1) {
        iVar6 = 0;
      }
      else {
        iVar6 = 3;
      }
      iVar1 = *param_1;
      puVar5 = (uint *)(param_1[1] + iVar4 * 0x10);
      *puVar5 = iVar6 << 0x1c | 0x80;
      puVar5[1] = iVar1 + iVar4 * 0x800;
      puVar5[2] = 0;
      puVar5[3] = 0;
      iVar4 = (iVar4 + 1) % param_1[2];
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  param_1[4] = param_1[4] + iVar3;
  if (param_1[4] != 0) {
    if (0 < iVar3) {
      uVar9 = uVar9 & 0xfffffff | 0x30000000;
    }
    DIntr();
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 | 0x10000;
    REG_DMAC_4_IPU_TO_CHCR = uVar9 | 0x100;
    uVar9 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar9 & 0xfffeffff;
    SYNC(0);
    EI();
  }
  SignalSema(param_1[0x10]);
  return;
}

// 0x0013b810  size 0x14
int Movie_GetFrameBuffer(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x60) + param_2 * *(int *)(param_1 + 100);
}

// 0x0013b830  size 0x8
undefined4 Movie_GetBufferCount(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}

// 0x0013b840  size 0x8
undefined4 Movie_GetBufferSize(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}

// 0x0013b850  size 0x8
undefined4 Movie_GetReadyCount(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}

// 0x0013b860  size 0x8
undefined4 Movie_GetUserData(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}

// 0x0013b870  size 0x28
void Movie_ReleaseFrame(int param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  }
  return;
}

// 0x0013b8a0  size 0x14
bool Movie_IsBufferFull(int param_1)

{
  return *(int *)(param_1 + 0x70) == *(int *)(param_1 + 0x68);
}

// 0x0013b8c0  size 0xf0
void Movie_GetStreamSpans(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  WaitSema(param_1[0x10]);
  iVar1 = ((param_1[3] + param_1[4]) * 0x800 + param_1[5]) % param_1[6];
  iVar2 = ((param_1[2] + -2) - param_1[4]) * 0x800 - param_1[5];
  if (param_1[6] - iVar1 < iVar2) {
    *param_2 = *param_1 + iVar1;
    *param_3 = param_1[6] - iVar1;
    *param_4 = *param_1;
    *param_5 = iVar2 - (param_1[6] - iVar1);
  }
  else {
    *param_2 = *param_1 + iVar1;
    *param_3 = iVar2;
    *param_4 = 0;
    *param_5 = 0;
  }
  SignalSema(param_1[0x10]);
  return;
}

// 0x0013b9b0  size 0x1a8
void Movie_ResetStream(uint *param_1,long param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x11] = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar5 = 0;
  if (0 < (int)param_1[0x15]) {
    iVar3 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(undefined8 *)(param_1[0x14] + iVar3) = 0xffffffffffffffff;
      *(undefined8 *)(param_1[0x14] + iVar3 + 8) = 0xffffffffffffffff;
      *(undefined4 *)(param_1[0x14] + iVar3 + 0x10) = 0;
      *(undefined4 *)(param_1[0x14] + iVar3 + 0x14) = 0;
      iVar3 = iVar3 + 0x18;
    } while (iVar5 < (int)param_1[0x15]);
  }
  uVar4 = param_1[2];
  iVar5 = 0;
  if (0 < (int)uVar4) {
    iVar6 = 0;
    iVar3 = 0;
    do {
      uVar4 = *param_1;
      iVar5 = iVar5 + 1;
      puVar2 = (undefined4 *)(param_1[1] + iVar3);
      *puVar2 = 0x30000080;
      puVar2[1] = uVar4 + iVar6 & 0xfffffff;
      iVar6 = iVar6 + 0x800;
      puVar2[2] = 0;
      puVar2[3] = 0;
      uVar4 = param_1[2];
      iVar3 = iVar3 + 0x10;
    } while (iVar5 < (int)uVar4);
  }
  uVar1 = param_1[1];
  puVar2 = (undefined4 *)(uVar1 + uVar4 * 0x10);
  *puVar2 = 0x20000000;
  puVar2[1] = uVar1 & 0xfffffff;
  puVar2[2] = 0;
  puVar2[3] = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_4_IPU_TO_MADR = *param_1 & 0xfffffff;
  REG_DMAC_4_IPU_TO_TADR = param_1[1] & 0xfffffff;
  DIntr();
  uVar4 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar4 | 0x10000;
  REG_DMAC_4_IPU_TO_CHCR = 5;
  uVar4 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar4 & 0xfffeffff;
  SYNC(0);
  EI();
  if (param_2 == 0) {
    param_1[0x1c] = 0;
    param_1[0x1b] = 0;
  }
  param_1[0x1f] = 0;
  return;
}

// 0x0013bb60  size 0xcc
void Movie_InitStream(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = param_2[2];
  puVar2[1] = param_2[3] & 0xfffffff | 0x20000000;
  puVar2[2] = param_2[4];
  puVar2[6] = param_2[4] << 0xb;
  puVar2[0x14] = *param_2;
  puVar2[0x15] = param_2[1];
  uStack_18 = 1;
  uStack_1c = 1;
  uVar1 = CreateSema(auStack_20);
  puVar2[0x10] = uVar1;
  *(undefined8 *)(puVar2 + 0x12) = 0;
  puVar2[0x18] = param_2[5];
  puVar2[0x19] = param_2[7] * param_2[8] * 4;
  puVar2[0x1a] = param_2[6];
  puVar2[0x1d] = param_2[7];
  puVar2[0x1e] = param_2[8];
  Movie_ResetStream(param_1,0);
  return;
}

// 0x0013bc30  size 0x3c
int Stream_Advance(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) - *(int *)(param_1 + 0x10);
  if (iVar1 <= param_2) {
    param_2 = iVar1;
  }
  *(int *)(param_1 + 0xc) = (*(int *)(param_1 + 0xc) + param_2) % *(int *)(param_1 + 4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
  return param_2;
}

// 0x0013bc70  size 0x34
void Stream_GetReadPtr(int *param_1,int *param_2)

{
  if (param_1[1] != param_1[4]) {
    *param_2 = *param_1 + param_1[3];
  }
  return;
}

// 0x0013bcb0  size 0x8
undefined4 Stream_GetSize(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0x0013bcc0  size 0x4c
void Stream_InvokeCallback(int param_1)

{
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))
              (*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x34));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 1;
  SYNC(0);
  EI();
  return;
}

// 0x0013bd10  size 0x38
/* intc-guarded read */

undefined4 Rpc_GetPendingCount(int param_1)

{
  undefined4 uVar1;
  
  DisableIntc(1);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  EnableIntc(1);
  return uVar1;
}

// 0x0013bd50  size 0xec
/* sceSifCallRpc wrapper with mutex */

undefined4 Rpc_Call(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = (int)param_1;
  WaitSema(*(undefined4 *)(iVar3 + 0x28));
  do {
    lVar2 = sceSifCheckStatRpc(param_1);
  } while (lVar2 != 0);
  SignalSema(*(undefined4 *)(iVar3 + 0x28));
  FlushCache(0);
  *(undefined4 *)(iVar3 + 0x38) = *param_2;
  *(undefined4 *)(iVar3 + 0x3c) = param_2[4];
  *(uint *)(iVar3 + 0x40) = (uint)(*(int *)(iVar3 + 0x2c) != 0);
  if (*(int *)(iVar3 + 0x2c) == 0) {
    uVar4 = 0x13bcc0;
  }
  else {
    uVar4 = 0;
  }
  uVar1 = sceSifCallRpc(param_1,*param_2,*(int *)(iVar3 + 0x2c) == 0,param_2[2],param_2[1],
                        param_2[4],param_2[3],uVar4);
  if ((*(int *)(iVar3 + 0x2c) != 0) && ((undefined4 *)param_2[4] != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)param_2[4];
  }
  return uVar1;
}

// 0x0013be40  size 0xc
/* returns previous */

undefined4 Rpc_SetBlocking(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return uVar1;
}

// 0x0013be50  size 0x8
void Rpc_Unbind(int param_1)

{
  Mutex_Delete(param_1 + 0x28);
  return;
}

// 0x0013be60  size 0x88
/* sceSifBindRpc retry loop */

void Rpc_Bind(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  do {
    sceSifBindRpc(param_1,param_2,0);
    iVar1 = (int)param_1;
    if (*(int *)(iVar1 + 0x24) == 0) {
      DelayThread(10000);
    }
  } while (*(int *)(iVar1 + 0x24) == 0);
  Mutex_Create(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 1;
  return;
}

// 0x0013bef0  size 0x54
/* sceSifRegisterRpc + sceSifRpcLoop */

void RpcServer_Thread(undefined4 *param_1)

{
  sceSifSetRpcQueue(param_1 + 6,param_1[1]);
  sceSifRegisterRpc(param_1 + 0xc,*param_1,param_1[5],param_1[4],0,0,param_1 + 6);
  sceSifRpcLoop(param_1 + 6);
  return;
}

// 0x0013bf50  size 0x44
void RpcServer_Stop(int param_1)

{
  maybe_sceSifRemoveRpc(param_1 + 0x30,param_1 + 0x18);
  maybe_sceSifRemoveRpcQueue(param_1 + 0x18);
  Thread_Terminate(param_1 + 4);
  Thread_Delete(param_1 + 4);
  return;
}

// 0x0013bfa0  size 0x60
undefined4
RpcServer_Start(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = param_2;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  puVar1[5] = param_8;
  Thread_Create(puVar1 + 1,param_3,0x13bef0,param_7,param_6,param_1);
  Thread_Start(puVar1 + 1,param_1);
  return 1;
}

