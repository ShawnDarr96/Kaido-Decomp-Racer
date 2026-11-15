// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001dc000 - 0x001e0000
#include "ghidra_types.h"

// 0x001dc180  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_RaceProg_GetEntry(void)

{
  return *_g_RaceProg;
}

// 0x001dc190  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceProg_Get_c(void)

{
  return *(undefined4 *)(_g_RaceProg + 0xc);
}

// 0x001dc1a0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceProg_Set_8(undefined1 param_1)

{
  *(undefined1 *)(_g_RaceProg + 8) = param_1;
  return;
}

// 0x001dc1b0  size 0x18
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 17 callers */

undefined1 RaceProg_Get(void)

{
  undefined1 uVar1;
  
  if (_g_RaceProg == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = *(undefined1 *)(_g_RaceProg + 8);
  }
  return uVar1;
}

// 0x001dc1d0  size 0x30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceProg_IsFinished(void)

{
  undefined4 uVar1;
  
  if ((_g_RaceProg == 0) || ((*(uint *)(_g_RaceProg + 4) & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// 0x001dc200  size 0x1c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceProg_GetArray_1c(char param_1)

{
  return *(undefined4 *)(param_1 * 4 + _g_RaceProg + 0x1c);
}

// 0x001dc220  size 0x1c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceProg_GetArray_40(char param_1)

{
  return *(undefined4 *)(param_1 * 4 + _g_RaceProg + 0x40);
}

// 0x001dc240  size 0x1c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceProg_GetArray_34(char param_1)

{
  return *(undefined4 *)(param_1 * 4 + _g_RaceProg + 0x34);
}

// 0x001dc260  size 0x1c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceProg_GetArray_28(char param_1)

{
  return *(undefined4 *)(param_1 * 4 + _g_RaceProg + 0x28);
}

// 0x001dc280  size 0x8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_RaceProg_GetEntryB(void)

{
  return _g_RaceProg;
}

// 0x001dc290  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceProg_Get_4(void)

{
  return *(undefined4 *)(_g_RaceProg + 4);
}

// 0x001dc2a0  size 0x10
/* *p |= mask */

void Flags_Set(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}

// 0x001dc2b0  size 0xfc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceProg_UpdateAll(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  
  RaceProg_UpdatePositions();
  cVar1 = GameState_Get_0();
  puVar4 = (uint *)param_1;
  if (cVar1 != '\b') {
    if ((puVar4[1] & 1) == 0) {
      uVar2 = puVar4[1];
    }
    else {
      RaceProg_DetectCollisions(param_1);
      uVar2 = puVar4[1];
    }
    if ((uVar2 & 2) == 0) {
      uVar2 = puVar4[1];
    }
    else {
      SpGauge_UpdateAll(param_1);
      uVar2 = puVar4[1];
    }
    if ((uVar2 & 4) != 0) {
      RaceProg_UpdateLaps(param_1);
    }
  }
  lVar3 = RaceScene_Get_38();
  if ((lVar3 == 36000) && (lVar3 = RaceScene_IsFlag10(), lVar3 != 0)) {
    if (*_g_RaceProg == 0) {
      *puVar4 = *puVar4 | 0x10;
      uVar2 = GameState_Get_35c();
      *puVar4 = *puVar4 | uVar2;
    }
  }
  else {
    RaceProg_CheckWin(param_1);
  }
  return;
}

// 0x001dc3b0  size 0x104
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceProg_Task(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  
  if (_g_RaceProg == 0) {
    cVar4 = '\x03';
  }
  else {
    cVar4 = *(char *)(_g_RaceProg + 8);
  }
  if (cVar4 == '\0') {
    RaceScene_GetMode(0x10f);
    RaceScene_SetFlags(0x100);
    lVar3 = RaceScene_IsRunning();
    iVar1 = _g_RaceProg;
    if (lVar3 == 1) {
      if ((*(uint *)(_g_RaceProg + 4) & 2) == 0) {
        uVar2 = *(uint *)(_g_RaceProg + 4);
      }
      else {
        RaceProg_UpdateDistances(_g_RaceProg);
        uVar2 = *(uint *)(iVar1 + 4);
      }
      if ((uVar2 & 4) != 0) {
        RaceProg_UpdateTimerAll(iVar1);
      }
      *(undefined4 *)(_g_RaceProg + 0xc) = 0;
      *(undefined1 *)(_g_RaceProg + 8) = 3;
      RaceScene_GetMode(0x47f);
      RaceScene_GetMode(0xff);
    }
  }
  else {
    if (_g_RaceProg == 0) {
      cVar4 = '\x03';
    }
    else {
      cVar4 = *(char *)(_g_RaceProg + 8);
    }
    if (cVar4 == '\x03') {
      *(int *)(_g_RaceProg + 0xc) = *(int *)(_g_RaceProg + 0xc) + 1;
    }
  }
  return;
}

// 0x001dc4c0  size 0x624
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceProg_Begin(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  char cVar13;
  
  if (_g_RaceProg == (uint *)0x0) {
    cVar4 = '\x03';
  }
  else {
    cVar4 = (char)_g_RaceProg[2];
  }
  if (cVar4 == '\0') {
    RaceScene_GetMode(0x10f);
    RaceScene_SetFlags(0x100);
    lVar5 = RaceScene_IsRunning();
    puVar12 = _g_RaceProg;
    if (lVar5 == 1) {
      if ((_g_RaceProg[1] & 2) == 0) {
        uVar11 = _g_RaceProg[1];
      }
      else {
        RaceProg_UpdateDistances(_g_RaceProg);
        uVar11 = puVar12[1];
      }
      if ((uVar11 & 4) != 0) {
        RaceProg_UpdateTimerAll(puVar12);
      }
      _g_RaceProg[3] = 0xb4;
      *(undefined1 *)(_g_RaceProg + 2) = 1;
    }
  }
  else {
    if (_g_RaceProg == (uint *)0x0) {
      cVar4 = '\x03';
    }
    else {
      cVar4 = (char)_g_RaceProg[2];
    }
    if (cVar4 == '\x01') {
      puVar12 = _g_RaceProg + 3;
      if ((int)_g_RaceProg[3] < 1) {
        *puVar12 = 300;
        *(undefined1 *)(_g_RaceProg + 2) = 2;
        RaceScene_GetMode(0x20f);
        RaceScene_GetMode(0x40c);
        RaceScene_SetFlags(0x400);
      }
      else {
        *puVar12 = *puVar12 - 1;
        cVar4 = GameState_Get_3();
        if (cVar4 == '\x01') {
          if (_g_RaceProg[3] == 0x70) {
            RaceScene_GetMode(0x2003);
          }
          else if (_g_RaceProg[3] == 0x66) {
            RaceScene_GetMode(0x200c);
          }
        }
      }
    }
    else {
      if (_g_RaceProg == (uint *)0x0) {
        cVar4 = '\x03';
      }
      else {
        cVar4 = (char)_g_RaceProg[2];
      }
      if (cVar4 == '\x02') {
        puVar12 = _g_RaceProg + 3;
        if ((int)_g_RaceProg[3] < 1) {
          *puVar12 = 0;
          *(undefined1 *)(_g_RaceProg + 2) = 3;
          RaceScene_GetMode(0x8f);
          RaceScene_SetFlags(0x200);
        }
        else {
          *puVar12 = *puVar12 - 1;
        }
      }
      else {
        if (_g_RaceProg == (uint *)0x0) {
          cVar4 = '\x03';
        }
        else {
          cVar4 = (char)_g_RaceProg[2];
        }
        cVar13 = '\x03';
        if (cVar4 == '\x03') {
          _g_RaceProg[3] = _g_RaceProg[3] + 1;
          RaceProg_UpdateAll(_g_RaceProg);
          if (*_g_RaceProg != 0) {
            if ((*_g_RaceProg & 0x410) == 0) {
              GameState_MarkGhostDirty();
              _g_RaceProg[3] = 0x78;
              *(undefined1 *)(_g_RaceProg + 2) = 4;
              RaceScene_GetMode(0x40f);
              RaceScene_SetFlags(0x100);
              RaceScene_SetFlags(0x800);
            }
            else {
              _g_RaceProg[3] = 0;
              *(undefined1 *)(_g_RaceProg + 2) = 6;
            }
            RaceProg_UpdateOrder(_g_RaceProg);
          }
        }
        else {
          if (_g_RaceProg != (uint *)0x0) {
            cVar13 = (char)_g_RaceProg[2];
          }
          if (cVar13 == '\x04') {
            puVar12 = _g_RaceProg + 3;
            if ((int)_g_RaceProg[3] < 1) {
              *puVar12 = 0;
              *(undefined1 *)(_g_RaceProg + 2) = 6;
            }
            else {
              *puVar12 = *puVar12 - 1;
            }
          }
          else {
            if (_g_RaceProg == (uint *)0x0) {
              cVar4 = '\x03';
            }
            else {
              cVar4 = (char)_g_RaceProg[2];
            }
            if (cVar4 != '\x06') {
              if (_g_RaceProg == (uint *)0x0) {
                cVar4 = '\x03';
              }
              else {
                cVar4 = (char)_g_RaceProg[2];
              }
              if (cVar4 != '\x05') {
                return;
              }
            }
            cVar4 = RaceCtx_GetMode();
            if (cVar4 == '\x05') {
              RaceScene_SetFlags(0x10);
              *(undefined4 *)(iRam0036f804 + 0x29c) = 1;
            }
            else {
              *(undefined1 *)(_g_RaceProg + 2) = 5;
              lVar5 = RaceScene_IsFlag10();
              if (lVar5 == 0) {
                cVar4 = RaceCtx_GetMode();
                if (cVar4 == '\x01') {
                  cVar4 = RaceCtx_Get_8();
                  if (cVar4 == '\x05') {
                    if ((_g_RaceProg[1] & 2) != 0) {
                      if (_g_RaceProg[4] == 0) {
                        _g_RaceProg[4] = *(uint *)(_g_RaceProg[0xd] + 0x8a0);
                      }
                      else if ((int)_g_RaceProg[4] < (int)*(uint *)(_g_RaceProg[0xd] + 0x8a0)) {
                        _g_RaceProg[4] = *(uint *)(_g_RaceProg[0xd] + 0x8a0);
                      }
                    }
                    if ((_g_RaceProg[1] & 4) != 0) {
                      if (_g_RaceProg[5] == 0) {
                        _g_RaceProg[5] = *(uint *)(_g_RaceProg[0x10] + 0x4b8);
                      }
                      else if ((int)*(uint *)(_g_RaceProg[0x10] + 0x4b8) < (int)_g_RaceProg[5]) {
                        _g_RaceProg[5] = *(uint *)(_g_RaceProg[0x10] + 0x4b8);
                      }
                    }
                  }
                  else {
                    cVar4 = RaceCtx_Get_8();
                    if (cVar4 == '\0') {
                      RaceRule_Finish();
                    }
                  }
                  uVar9 = Profile_Get(0);
                  Career_ProcessDay(uVar9);
                }
                else {
                  cVar4 = RaceCtx_GetMode();
                  if (cVar4 == '\x02') {
                    if ((*_g_RaceProg & 0x410) == 0) {
                      iVar1 = *piRam0036f34c;
                      uVar11 = _g_RaceProg[0x10];
                      Replay_GetHeader();
                      Ranking_FindBestRival();
                      *_g_RaceProg = *_g_RaceProg | 0x40000;
                      uVar2 = *(undefined4 *)(uVar11 + 0x4b8);
                      uVar9 = Replay_GetHeader();
                      uVar6 = maybe_GameState_GetFlag();
                      uVar7 = RaceCtx_GetMode();
                      uVar8 = RaceCtx_Get_8();
                      RaceEntry_Create(uVar9,uVar6,iVar1 + 0x1d8,uVar2,0,uVar7,uVar8,0);
                    }
                  }
                  else {
                    cVar4 = RaceCtx_GetMode();
                    if ((cVar4 == '\x03') && ((*_g_RaceProg & 0x410) == 0)) {
                      uVar11 = _g_RaceProg[0xd];
                      iVar1 = *piRam0036f34c;
                      uVar3 = _g_RaceProg[0x10];
                      Replay_GetHeader();
                      Ranking_ComputePlayerRank();
                      *_g_RaceProg = *_g_RaceProg | 0x40000;
                      uVar2 = *(undefined4 *)(uVar3 + 0x4b8);
                      uVar9 = Replay_GetHeader();
                      uVar6 = maybe_GameState_GetFlag();
                      uVar7 = SpGauge_GetValue(uVar11);
                      uVar8 = RaceCtx_GetMode();
                      uVar10 = RaceCtx_Get_8();
                      RaceEntry_Create(uVar9,uVar6,iVar1 + 0x1d8,uVar2,uVar7,uVar8,uVar10,0);
                    }
                  }
                }
                GameState_Set_35c(*_g_RaceProg);
              }
              RaceScene_SetFlags(0x40);
              RaceScene_SetFlags(0x100);
            }
          }
        }
      }
    }
  }
  return;
}

// 0x001dcaf0  size 0xdc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_Free(void)

{
  int iVar1;
  int iVar2;
  
  if (_g_RaceProg != 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(_g_RaceProg + iVar1 + 0x28) != 0) {
        Mem_Free();
      }
      if (*(int *)(_g_RaceProg + iVar1 + 0x34) != 0) {
        Mem_Free();
      }
      if (*(int *)(_g_RaceProg + iVar1 + 0x40) != 0) {
        Mem_Free();
      }
      if (*(int *)(_g_RaceProg + iVar1 + 0x1c) != 0) {
        Mem_Free();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < 3);
    if (_g_RaceProg != 0) {
      Mem_Free();
      _g_RaceProg = 0;
    }
  }
  return;
}

// 0x001dcbd0  size 0x1c
void LapTime_FormatLap(int param_1,int param_2)

{
  Time_SplitHms(1,*(undefined4 *)(param_2 * 0xc + param_1 + 4));
  return;
}

// 0x001dcbf0  size 0x40
void LapTime_FormatTotal(int param_1,long param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)param_2 * 0xc + param_1 + -8);
  }
  Time_SplitHms(1,*(int *)((int)param_2 * 0xc + param_1 + 4) - iVar1);
  return;
}

// 0x001dcc30  size 0x18
/* 0xc bytes per lap */

undefined4 LapTime_GetLap(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0xc + param_1 + 4);
}

// 0x001dcc50  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_Set_14(undefined4 param_1)

{
  *(undefined4 *)(_g_RaceProg + 0x14) = param_1;
  return;
}

// 0x001dcc60  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceRule_Get_14(void)

{
  return *(undefined4 *)(_g_RaceProg + 0x14);
}

// 0x001dcc70  size 0x50
void LapTime_FormatBest(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 0x4b8) == 0) {
    Time_SplitHms(0,*(undefined4 *)(param_1 + 0x4b0),param_2,param_3,param_4);
  }
  else {
    Time_SplitHms(1,*(int *)(param_1 + 0x4b8),param_2,param_3,param_4);
  }
  return;
}

// 0x001dccc0  size 0x8
undefined4 LapTime_GetBest(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4b8);
}

// 0x001dccd0  size 0x8
undefined4 LapTime_GetTotal(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4b0);
}

// 0x001dcce0  size 0x24
void LapTime_Clear(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0xffffffff;
  return;
}

// 0x001dcd10  size 0xc
void LapTime_Reset(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

// 0x001dcd20  size 0xa0
void LapTime_GetLapCount(int *param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = GameState_Get_3a0();
  *param_1 = *param_1 - ((int)param_2 * iVar1) / 100;
  if (param_3 == 0) {
    if (*param_1 < 0) {
      *param_1 = 0;
    }
  }
  else if ((param_2 != 0) && (*param_1 < 1)) {
    *param_1 = 1;
  }
  return;
}

// 0x001dcdc0  size 0x8
undefined4 Raceprog_Nop(undefined4 *param_1)

{
  return *param_1;
}

// 0x001dcdd0  size 0x8
int RaceRule_GetParams(int param_1)

{
  return param_1 + 0x14;
}

// 0x001dcde0  size 0x5c4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_Alloc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  
  _g_RaceProg = 0;
  sVar10 = (short)param_1;
  if ((param_2 & 1) != 0) {
    uVar2 = Mem_Alloc16(0x4c,param_3);
    _g_RaceProg = (int)uVar2;
    Mem_Set16(uVar2,0,0x4c);
    RaceRule_SetupCheckpoints(param_1,param_3);
    lVar9 = (long)sVar10;
    *(uint *)(_g_RaceProg + 4) = *(uint *)(_g_RaceProg + 4) | 1;
    if (lVar9 == 1) {
      *(uint *)(_g_RaceProg + 4) = *(uint *)(_g_RaceProg + 4) | 0x80;
    }
    lVar8 = 0;
    if (0 < lVar9) {
      iVar7 = 0;
      do {
        uVar1 = Mem_Alloc16(8,param_3);
        *(undefined4 *)(_g_RaceProg + iVar7 + 0x28) = uVar1;
        Mem_Set16(*(undefined4 *)(_g_RaceProg + iVar7 + 0x28),0,8);
        if (lVar8 == 0) {
          puVar4 = *(undefined4 **)(_g_RaceProg + iVar7 + 0x28);
          *puVar4 = param_4;
          puVar4[1] = param_4;
        }
        else {
          puVar4 = *(undefined4 **)(_g_RaceProg + iVar7 + 0x28);
          *puVar4 = 5000000;
          puVar4[1] = 5000000;
        }
        lVar8 = (long)((int)lVar8 + 1);
        iVar7 = iVar7 + 4;
      } while (lVar8 < lVar9);
    }
  }
  if ((param_2 & 2) != 0) {
    if (_g_RaceProg == 0) {
      uVar2 = Mem_Alloc16(0x4c,param_3);
      _g_RaceProg = (int)uVar2;
      Mem_Set16(uVar2,0,0x4c);
      RaceRule_SetupCheckpoints(param_1,param_3);
    }
    lVar9 = 0;
    *(uint *)(_g_RaceProg + 4) = *(uint *)(_g_RaceProg + 4) | 2;
    if (0 < (long)sVar10) {
      iVar7 = 0;
      do {
        uVar1 = Mem_Alloc16(0x8b8,param_3);
        *(undefined4 *)(_g_RaceProg + iVar7 + 0x34) = uVar1;
        Mem_Set16(*(undefined4 *)(_g_RaceProg + iVar7 + 0x34),0,0x8b8);
        iVar5 = 0;
        puVar4 = *(undefined4 **)(_g_RaceProg + iVar7 + 0x34);
        puVar4[0x228] = 0;
        puVar4[0x22b] = 0;
        puVar4[0x22c] = 0xffffffff;
        puVar4[0x22d] = 0;
        puVar4[0x229] = 0;
        puVar4[0x22a] = 0;
        puVar3 = puVar4;
        do {
          puVar3[0x3e] = 0xffffffff;
          puVar3[0x40] = 0;
          iVar5 = iVar5 + 8;
          puVar3[0x41] = 0;
          puVar3[0x42] = 0;
          puVar3[0x43] = 0;
          puVar3[0x44] = 0;
          puVar3[0x3f] = 0xffffffff;
          puVar3[0x45] = 0xffffffff;
          puVar3[0x47] = 0;
          puVar3[0x48] = 0;
          puVar3[0x49] = 0;
          puVar3[0x4a] = 0;
          puVar3[0x4b] = 0;
          puVar3[0x46] = 0xffffffff;
          puVar3[0x4c] = 0xffffffff;
          puVar3[0x4e] = 0;
          puVar3[0x4f] = 0;
          puVar3[0x50] = 0;
          puVar3[0x51] = 0;
          puVar3[0x52] = 0;
          puVar3[0x4d] = 0xffffffff;
          puVar3[0x53] = 0xffffffff;
          puVar3[0x55] = 0;
          puVar3[0x56] = 0;
          puVar3[0x57] = 0;
          puVar3[0x58] = 0;
          puVar3[0x59] = 0;
          puVar3[0x54] = 0xffffffff;
          puVar3[0x5a] = 0xffffffff;
          puVar3[0x5c] = 0;
          puVar3[0x5d] = 0;
          puVar3[0x5e] = 0;
          puVar3[0x5f] = 0;
          puVar3[0x60] = 0;
          puVar3[0x5b] = 0xffffffff;
          puVar3[0x61] = 0xffffffff;
          puVar3[99] = 0;
          puVar3[100] = 0;
          puVar3[0x65] = 0;
          puVar3[0x66] = 0;
          puVar3[0x67] = 0;
          puVar3[0x62] = 0xffffffff;
          puVar3[0x68] = 0xffffffff;
          puVar3[0x6a] = 0;
          puVar3[0x6b] = 0;
          puVar3[0x6c] = 0;
          puVar3[0x6d] = 0;
          puVar3[0x6e] = 0;
          puVar3[0x69] = 0xffffffff;
          puVar3[0x6f] = 0xffffffff;
          puVar3[0x71] = 0;
          puVar3[0x72] = 0;
          puVar3[0x73] = 0;
          puVar3[0x74] = 0;
          puVar3[0x75] = 0;
          puVar3[0x70] = 0xffffffff;
          puVar3 = puVar3 + 0x38;
        } while (iVar5 < 0x3e);
        lVar9 = (long)((int)lVar9 + 1);
        iVar7 = iVar7 + 4;
        puVar4[iVar5 * 7 + 0x3e] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x40] = 0;
        puVar4[iVar5 * 7 + 0x41] = 0;
        puVar4[iVar5 * 7 + 0x42] = 0;
        puVar4[iVar5 * 7 + 0x43] = 0;
        puVar4[iVar5 * 7 + 0x44] = 0;
        puVar4[iVar5 * 7 + 0x3f] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x45] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x47] = 0;
        puVar4[iVar5 * 7 + 0x48] = 0;
        puVar4[iVar5 * 7 + 0x49] = 0;
        puVar4[iVar5 * 7 + 0x4a] = 0;
        puVar4[iVar5 * 7 + 0x4b] = 0;
        puVar4[iVar5 * 7 + 0x46] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x4c] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x4e] = 0;
        puVar4[iVar5 * 7 + 0x4f] = 0;
        puVar4[iVar5 * 7 + 0x50] = 0;
        puVar4[iVar5 * 7 + 0x51] = 0;
        puVar4[iVar5 * 7 + 0x52] = 0;
        puVar4[iVar5 * 7 + 0x4d] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x53] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x55] = 0;
        puVar4[iVar5 * 7 + 0x56] = 0;
        puVar4[iVar5 * 7 + 0x57] = 0;
        puVar4[iVar5 * 7 + 0x58] = 0;
        puVar4[iVar5 * 7 + 0x59] = 0;
        puVar4[iVar5 * 7 + 0x54] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x5a] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x5c] = 0;
        puVar4[iVar5 * 7 + 0x5d] = 0;
        puVar4[iVar5 * 7 + 0x5e] = 0;
        puVar4[iVar5 * 7 + 0x5f] = 0;
        puVar4[iVar5 * 7 + 0x60] = 0;
        puVar4[iVar5 * 7 + 0x5b] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x61] = 0xffffffff;
        puVar4[iVar5 * 7 + 99] = 0;
        puVar4[iVar5 * 7 + 100] = 0;
        puVar4[iVar5 * 7 + 0x65] = 0;
        puVar4[iVar5 * 7 + 0x66] = 0;
        puVar4[iVar5 * 7 + 0x67] = 0;
        puVar4[iVar5 * 7 + 0x62] = 0xffffffff;
        puVar4[1] = 0;
        *puVar4 = 0;
      } while (lVar9 < sVar10);
    }
  }
  if ((param_2 & 4) != 0) {
    if (_g_RaceProg == 0) {
      uVar2 = Mem_Alloc16(0x4c,param_3);
      _g_RaceProg = (int)uVar2;
      Mem_Set16(uVar2,0,0x4c);
      RaceRule_SetupCheckpoints(param_1,param_3);
    }
    lVar9 = 0;
    *(uint *)(_g_RaceProg + 4) = *(uint *)(_g_RaceProg + 4) | 4;
    if (0 < (long)sVar10) {
      iVar7 = 0;
      do {
        uVar1 = Mem_Alloc16(0x4c0,param_3);
        *(undefined4 *)(_g_RaceProg + iVar7 + 0x40) = uVar1;
        Mem_Set16(*(undefined4 *)(_g_RaceProg + iVar7 + 0x40),0,0x4c0);
        iVar5 = 0;
        puVar4 = *(undefined4 **)(_g_RaceProg + iVar7 + 0x40);
        puVar4[300] = 0;
        puVar4[0x12d] = 0xffffffff;
        puVar4[0x12e] = 0;
        puVar4[0x12f] = 0;
        do {
          iVar6 = 0;
          puVar3 = puVar4;
          do {
            *puVar3 = 0xffffffff;
            puVar3[1] = 0;
            iVar6 = iVar6 + 5;
            puVar3[2] = 0;
            puVar3[3] = 0xffffffff;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0xffffffff;
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar3[9] = 0xffffffff;
            puVar3[10] = 0;
            puVar3[0xb] = 0;
            puVar3[0xc] = 0xffffffff;
            puVar3[0xd] = 0;
            puVar3[0xe] = 0;
            puVar3 = puVar3 + 0xf;
          } while (iVar6 < 10);
          iVar5 = iVar5 + 1;
          puVar4 = puVar4 + 0x1e;
        } while (iVar5 < 10);
        lVar9 = (long)((int)lVar9 + 1);
        iVar7 = iVar7 + 4;
      } while (lVar9 < sVar10);
    }
  }
  if ((param_2 & 8) != 0) {
    *(uint *)(_g_RaceProg + 4) = *(uint *)(_g_RaceProg + 4) | 8;
  }
  if ((param_2 & 0x10) != 0) {
    *(uint *)(_g_RaceProg + 4) = *(uint *)(_g_RaceProg + 4) | 0x10;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(_g_RaceProg + 4) = *(uint *)(_g_RaceProg + 4) | 0x40;
  }
  if (_g_RaceProg == 0) {
    uVar2 = Mem_Alloc16(0x4c,param_3);
    _g_RaceProg = (int)uVar2;
    Mem_Set16(uVar2,0,0x4c);
    RaceRule_SetupCheckpoints(param_1,param_3);
  }
  return;
}

// 0x001dd3b0  size 0x1c4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_SetupCheckpoints(short param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = 0;
  _g_RaceProg[10] = 0;
  _g_RaceProg[0xd] = 0;
  _g_RaceProg[0x10] = 0;
  *(undefined1 *)(_g_RaceProg + 6) = 0xff;
  _g_RaceProg[0xb] = 0;
  _g_RaceProg[0xe] = 0;
  _g_RaceProg[0x11] = 0;
  *(undefined1 *)((int)_g_RaceProg + 0x19) = 0xff;
  _g_RaceProg[0xc] = 0;
  _g_RaceProg[0xf] = 0;
  _g_RaceProg[0x12] = 0;
  *(undefined1 *)((int)_g_RaceProg + 0x1a) = 0xff;
  if (0 < (long)param_1) {
    iVar6 = 0;
    do {
      uVar2 = Mem_Alloc16(0x30,param_2);
      *(undefined4 *)((int)_g_RaceProg + iVar6 + 0x1c) = uVar2;
      Mem_Set16(*(undefined4 *)((int)_g_RaceProg + iVar6 + 0x1c),0,0x30);
      puVar1 = *(undefined4 **)((int)_g_RaceProg + iVar6 + 0x1c);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 7) = 0;
      puVar1[8] = 0;
      *(undefined1 *)(puVar1 + 9) = 0;
      puVar1[10] = 0;
      lVar5 = Options_Get_8();
      if (lVar5 != 0) {
        uVar3 = Race_GetDirection();
        uVar4 = Race_GetCourseVariant();
        puVar1[6] = (&PTR_DAT_0031bd90)[(uVar3 & 0xff) + (uVar4 & 0xff) * 2];
      }
      lVar7 = (long)((int)lVar7 + 1);
      puVar1[3] = 0;
      puVar1[4] = 0;
      iVar6 = iVar6 + 4;
    } while (lVar7 < param_1);
  }
  *_g_RaceProg = 0;
  _g_RaceProg[1] = 0;
  *(undefined1 *)(_g_RaceProg + 2) = 0;
  _g_RaceProg[3] = 0;
  _g_RaceProg[5] = 0;
  _g_RaceProg[4] = 0;
  *(undefined1 *)((int)_g_RaceProg + 0x1b) = 0;
  return;
}

// 0x001dd580  size 0x62c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceRule_PlaceCheckpoint
               (float param_1,undefined4 *param_2,ushort param_3,int param_4,long param_5,
               short param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float unaff_f20;
  float fVar9;
  float unaff_f22;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [2];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 auStack_90 [2];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar4 = 0;
  uStack_24 = 0x3f800000;
  fVar9 = 0.0;
  uStack_14 = 0x3f800000;
  uStack_44 = 0x3f800000;
  uStack_54 = 0x3f800000;
  uStack_64 = 0x3f800000;
  fVar8 = 0.0;
  if (cRam0036f234 != '\x02') {
    AiLine_Clear(&uStack_40);
    *param_2 = uStack_40;
    *(undefined2 *)(param_2 + 1) = uStack_3c;
    param_2[4] = uStack_30;
    param_2[5] = uStack_2c;
    param_2[6] = uStack_28;
    param_2[7] = uStack_24;
    param_2[8] = uStack_20;
    param_2[9] = uStack_1c;
    param_2[10] = uStack_18;
    param_2[0xb] = uStack_14;
    param_2[0xc] = fStack_10;
    param_2[0xd] = fStack_c;
    param_2[0xe] = fStack_8;
    return;
  }
  if (param_1 != 0.0) {
    fVar7 = ((param_1 * 1000.0) / 216000.0) * 60.0 * 0.5;
    unaff_f22 = fVar7 * 2.0;
    iVar4 = (int)(fVar7 / 2.5);
  }
  if (param_5 == 0) {
    iVar4 = (param_4 + 2) - iVar4;
    lVar6 = (long)(short)param_3;
    iVar2 = 0;
    lVar3 = (long)**(short **)(_g_RoadData[1] + (uint)param_3 * 4);
    fVar7 = 0.0;
    do {
      lVar5 = (long)iVar4;
      uStack_54 = uStack_44;
      if (lVar3 <= lVar5) {
        if (*_g_RoadData <= (short)lVar6 + 1) goto LAB_001dd838;
        uVar1 = (int)lVar6 + 1;
        lVar5 = (long)(iVar4 - (int)lVar3);
        lVar6 = (long)(short)uVar1;
        lVar3 = (long)**(short **)(_g_RoadData[1] + (uVar1 & 0xffff) * 4);
      }
      AiLine_GetDirection(auStack_b0,3,lVar6,(short)lVar5);
      uStack_50 = auStack_b0[0];
      uStack_48 = uStack_a8;
      uStack_44 = uStack_a4;
      uStack_4c = 0;
      if (iVar2 != 0) {
        Vec3_Sub(&uStack_c0,&uStack_50,&uStack_60);
        uStack_70 = uStack_c0;
        uStack_6c = uStack_bc;
        uStack_68 = uStack_b8;
        uStack_64 = uStack_b4;
        unaff_f20 = (float)atan2f(uStack_b8,uStack_c0);
        if (iVar2 == 1) {
          fVar7 = unaff_f20;
        }
        fVar8 = fVar8 + (unaff_f20 - fVar7);
        fVar7 = (float)Vec3_LengthB(&uStack_70);
        fVar9 = fVar9 + fVar7;
        if ((param_1 != 0.0) && (unaff_f22 < fVar9)) goto LAB_001dd838;
      }
      if ((param_1 == 0.0) && ((param_7 <= lVar5 && ((short)lVar6 == param_6)))) goto LAB_001dd838;
      iVar4 = (int)lVar5 + 1;
      iVar2 = iVar2 + 1;
      uStack_60 = uStack_50;
      uStack_5c = uStack_4c;
      uStack_58 = uStack_48;
      fVar7 = unaff_f20;
    } while( true );
  }
  lVar6 = (long)(short)param_3;
  iVar4 = param_4 + -1 + iVar4;
  iVar2 = 0;
  fVar7 = 0.0;
  do {
    lVar5 = (long)iVar4;
    uStack_54 = uStack_44;
    if (lVar5 < 1) {
      if ((short)lVar6 + -1 < 0) {
        AiLine_GetDirection(&uStack_80,3,lVar6,(short)iVar4);
        uStack_50 = uStack_80;
        uStack_4c = uStack_7c;
        uStack_48 = uStack_78;
        uStack_44 = uStack_74;
LAB_001dd838:
        uStack_3c = (undefined2)lVar6;
        uStack_40 = (undefined4)lVar5;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uStack_28 = uStack_48;
        uStack_24 = uStack_44;
        fStack_10 = fVar9;
        fStack_c = (float)Race_CountActiveCars((fVar8 * 180.0) / 3.1415927);
        fVar8 = (float)fabsf(fStack_c);
        if (1.0 < fVar8) {
          fStack_8 = (fStack_10 * 360.0) / (fStack_c * 2.0 * 3.1415927);
          if ((300.0 < fStack_8) || (fStack_8 < -300.0)) {
            fStack_8 = 1000.0;
          }
        }
        else {
          fStack_8 = 1000.0;
        }
        *param_2 = uStack_40;
        *(undefined2 *)(param_2 + 1) = uStack_3c;
        param_2[4] = uStack_30;
        param_2[5] = uStack_2c;
        param_2[6] = uStack_28;
        param_2[7] = uStack_24;
        param_2[8] = uStack_20;
        param_2[9] = uStack_1c;
        param_2[10] = uStack_18;
        param_2[0xb] = uStack_14;
        param_2[0xc] = fStack_10;
        param_2[0xd] = fStack_c;
        param_2[0xe] = fStack_8;
        return;
      }
      uVar1 = (int)lVar6 - 1;
      lVar6 = (long)(short)uVar1;
      lVar5 = (long)(iVar4 + **(short **)(_g_RoadData[1] + (uVar1 & 0xffff) * 4) + -1);
    }
    AiLine_GetDirection(auStack_90,3,lVar6,(short)lVar5);
    uStack_50 = auStack_90[0];
    uStack_48 = uStack_88;
    uStack_44 = uStack_84;
    uStack_4c = 0;
    if (iVar2 != 0) {
      Vec3_Sub(&uStack_a0,&uStack_50,&uStack_60);
      uStack_70 = uStack_a0;
      uStack_6c = uStack_9c;
      uStack_68 = uStack_98;
      uStack_64 = uStack_94;
      unaff_f20 = (float)atan2f(uStack_98,uStack_a0);
      if (iVar2 == 1) {
        fVar7 = unaff_f20;
      }
      fVar8 = fVar8 + (unaff_f20 - fVar7);
      fVar7 = (float)Vec3_LengthB(&uStack_70);
      fVar9 = fVar9 + fVar7;
      if ((param_1 != 0.0) && (unaff_f22 < fVar9)) goto LAB_001dd838;
    }
    if ((param_1 == 0.0) && ((lVar5 <= param_7 && ((short)lVar6 == param_6)))) goto LAB_001dd838;
    iVar4 = (int)lVar5 + -1;
    iVar2 = iVar2 + 1;
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    uStack_58 = uStack_48;
    fVar7 = unaff_f20;
  } while( true );
}

// 0x001ddbc0  size 0x1d4
undefined4 Checkpoint_Update(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined2 uStack_30;
  undefined2 uStack_20;
  
  lVar8 = GameState_Get_44();
  uVar11 = 0;
  if (lVar8 != 0) {
    uVar3 = GameState_Get_1();
    iVar14 = (int)lVar8;
    iVar1 = *(int *)(iVar14 + 0x24);
    piVar9 = (int *)(iVar14 + (uVar3 & 0xff) * 0x10);
    if ((param_2 < *(int *)(iVar14 + 0x20)) && (param_1 < *piVar9)) {
      puVar10 = (undefined4 *)(piVar9[1] + param_1 * 0x10);
      puVar4 = (undefined4 *)(piVar9[3] + param_1 * 0x10);
      iVar14 = puVar10[1];
      uVar12 = *puVar4;
      iVar13 = puVar4[1];
      uStack_20 = (undefined2)*puVar10;
      iVar5 = GameState_GetArray_3a78(uStack_20);
      uStack_30 = (undefined2)uVar12;
      iVar5 = iVar14 * 0x20 + iVar5;
      iVar6 = GameState_GetArray_3a78(uStack_30);
      puVar4 = (undefined4 *)(iVar1 + param_2 * 0x14);
      uVar12 = *puVar4;
      iVar1 = puVar4[1];
      uVar2 = puVar4[2];
      iVar14 = puVar4[3];
      iVar6 = iVar13 * 0x20 + iVar6;
      lVar8 = GameState_Get_40();
      if (lVar8 == 0) {
        iVar13 = GameState_GetArray_3a78((short)uVar12);
        iVar7 = GameState_GetArray_3a78((short)uVar2);
        if ((iVar5 < iVar1 * 0x20 + iVar13) && (iVar14 * 0x20 + iVar7 < iVar6)) {
          uVar11 = 1;
        }
      }
      else {
        iVar13 = GameState_GetArray_3a78((short)uVar12);
        iVar7 = GameState_GetArray_3a78((short)uVar2);
        if ((iVar14 * 0x20 + iVar7 < iVar5) && (iVar6 < iVar1 * 0x20 + iVar13)) {
          uVar11 = 1;
        }
      }
    }
  }
  return uVar11;
}

// 0x001ddda0  size 0xa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_RaceProg_FindRecord(int param_1,short *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = *_g_RoadData;
  *param_2 = -1;
  *param_3 = 0xffff;
  if (param_1 < 0) {
    param_1 = 0;
  }
  lVar4 = 0;
  if (0 < (long)iVar1) {
    do {
      iVar3 = (int)**(short **)(_g_RoadData[1] + ((uint)lVar4 & 0xffff) * 4);
      param_1 = param_1 + iVar3 * -0x20;
      if (param_1 < 0) {
        param_1 = param_1 + iVar3 * 0x20;
        *param_2 = (short)lVar4;
        uVar2 = (undefined2)(param_1 >> 5);
        if (param_1 < 0) {
          uVar2 = (undefined2)(param_1 + 0x1f >> 5);
        }
        *param_3 = uVar2;
        return;
      }
      lVar4 = (long)(short)((short)lVar4 + 1);
    } while (lVar4 < iVar1);
  }
  return;
}

// 0x001dde40  size 0x34
int Checkpoint_GetPosition(undefined2 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GameState_GetArray_3a78(param_1);
  return param_2 * 0x20 + iVar1;
}

// 0x001dde80  size 0x30
int Checkpoint_GetDirection(undefined2 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GameState_GetArray_3a78(param_1);
  return param_2 + iVar1;
}

// 0x001ddeb0  size 0x440
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Checkpoint_BuildGate(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uStack_f0;
  int iStack_ec;
  uint uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_f0._0_2_ = (undefined2)param_1;
  iStack_e4 = (int)((ulong)param_2 >> 0x20);
  iStack_ec = (int)((ulong)param_1 >> 0x20);
  iVar3 = GameState_GetArray_3a78((undefined2)uStack_f0);
  uStack_e8._0_2_ = (undefined2)param_2;
  iVar3 = iStack_ec * 0x20 + iVar3;
  iVar4 = GameState_GetArray_3a78((undefined2)uStack_e8);
  iVar4 = iStack_e4 * 0x20 + iVar4;
  fVar9 = 0.0;
  uStack_f0 = (uint)param_1;
  uStack_e8 = (uint)param_2;
  if (iVar4 < iVar3) {
    uVar2 = uStack_f0;
    iVar3 = iStack_ec;
  }
  else {
    if (iVar4 <= iVar3) {
      return 0.0;
    }
    uVar2 = uStack_e8;
    uStack_e8 = uStack_f0;
    iVar3 = iStack_e4;
    iStack_e4 = iStack_ec;
  }
  sVar5 = (short)uStack_e8;
  if (uStack_e8 == uVar2) {
    AiLine_GetPoint(&uStack_40,3,sVar5,(short)iStack_e4);
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uStack_18 = uStack_38;
    uStack_14 = uStack_34;
    for (; iStack_e4 <= iVar3; iStack_e4 = iStack_e4 + 1) {
      AiLine_GetPoint(&uStack_50,3,sVar5,(short)iStack_e4);
      uStack_10 = uStack_50;
      uStack_c = uStack_4c;
      uStack_8 = uStack_48;
      uStack_4 = uStack_44;
      fVar7 = (float)maybe_sceVu0InterVectorDist(auStack_30,&uStack_10,&uStack_20);
      fVar9 = fVar9 + fVar7;
      uStack_20 = uStack_10;
      uStack_1c = uStack_c;
      uStack_18 = uStack_8;
      uStack_14 = uStack_4;
    }
  }
  else {
    sVar1 = **(short **)(*(int *)(_g_RoadData + 4) + (uStack_e8 & 0xffff) * 4);
    iVar4 = (int)sVar1;
    if ((long)sVar1 < 0) {
      iVar4 = iVar4 + 1;
    }
    if (iStack_e4 < iVar4 >> 1) {
      fVar7 = 0.0;
      AiLine_GetPoint(&uStack_60,3,sVar5,0);
      iVar4 = 1;
      uStack_20 = uStack_60;
      uStack_1c = uStack_5c;
      uStack_18 = uStack_58;
      uStack_14 = uStack_54;
      if (1 < iStack_e4) {
        do {
          AiLine_GetPoint(&uStack_70,3,sVar5,(short)iVar4);
          uStack_10 = uStack_70;
          uStack_c = uStack_6c;
          uStack_8 = uStack_68;
          uStack_4 = uStack_64;
          fVar9 = (float)maybe_sceVu0InterVectorDist(auStack_30,&uStack_10,&uStack_20);
          iVar4 = iVar4 + 1;
          fVar7 = fVar7 + fVar9;
          uStack_20 = uStack_10;
          uStack_1c = uStack_c;
          uStack_18 = uStack_8;
          uStack_14 = uStack_4;
        } while (iVar4 < iStack_e4);
      }
      fVar9 = (float)GameState_GetArray_3a50(uStack_e8);
      fVar9 = fVar9 - fVar7;
    }
    else {
      AiLine_GetPoint(&uStack_80,3,sVar5,(short)iStack_e4);
      uStack_20 = uStack_80;
      uStack_1c = uStack_7c;
      uStack_18 = uStack_78;
      uStack_14 = uStack_74;
      while (iStack_e4 = iStack_e4 + 1, (long)iStack_e4 < (long)sVar1) {
        AiLine_GetPoint(&uStack_90,3,sVar5,(short)iStack_e4);
        uStack_10 = uStack_90;
        uStack_c = uStack_8c;
        uStack_8 = uStack_88;
        uStack_4 = uStack_84;
        fVar7 = (float)maybe_sceVu0InterVectorDist(auStack_30,&uStack_10,&uStack_20);
        fVar9 = fVar9 + fVar7;
        uStack_20 = uStack_10;
        uStack_1c = uStack_c;
        uStack_18 = uStack_8;
        uStack_14 = uStack_4;
      }
      AiLine_GetPoint(&uStack_a0,3,sVar5 + 1,0);
      uStack_10 = uStack_a0;
      uStack_c = uStack_9c;
      uStack_8 = uStack_98;
      uStack_4 = uStack_94;
      fVar7 = (float)maybe_sceVu0InterVectorDist(auStack_30,&uStack_10,&uStack_20);
      fVar9 = fVar9 + fVar7;
    }
    sVar5 = **(short **)(*(int *)(_g_RoadData + 4) + (uVar2 & 0xffff) * 4);
    iVar4 = (int)sVar5;
    if ((long)sVar5 < 0) {
      iVar4 = iVar4 + 1;
    }
    uVar6 = (undefined2)uVar2;
    if (iVar4 >> 1 < iVar3) {
      fVar7 = 0.0;
      AiLine_GetPoint(&uStack_b0,3,uVar6,(short)iVar3);
      uStack_20 = uStack_b0;
      uStack_1c = uStack_ac;
      uStack_18 = uStack_a8;
      uStack_14 = uStack_a4;
      while (iVar3 = iVar3 + 1, (long)iVar3 < (long)sVar5) {
        AiLine_GetPoint(&uStack_c0,3,uVar6,(short)iVar3);
        uStack_10 = uStack_c0;
        uStack_c = uStack_bc;
        uStack_8 = uStack_b8;
        uStack_4 = uStack_b4;
        fVar8 = (float)maybe_sceVu0InterVectorDist(auStack_30,&uStack_10,&uStack_20);
        fVar7 = fVar7 + fVar8;
        uStack_20 = uStack_10;
        uStack_1c = uStack_c;
        uStack_18 = uStack_8;
        uStack_14 = uStack_4;
      }
      fVar8 = (float)GameState_GetArray_3a50(uVar2);
      fVar9 = fVar9 + (fVar8 - fVar7);
    }
    else {
      AiLine_GetPoint(&uStack_d0,3,uVar6,0);
      iVar4 = 1;
      uStack_20 = uStack_d0;
      uStack_1c = uStack_cc;
      uStack_18 = uStack_c8;
      uStack_14 = uStack_c4;
      if (0 < iVar3) {
        do {
          AiLine_GetPoint(&uStack_e0,3,uVar6,(short)iVar4);
          uStack_10 = uStack_e0;
          uStack_c = uStack_dc;
          uStack_8 = uStack_d8;
          uStack_4 = uStack_d4;
          fVar7 = (float)maybe_sceVu0InterVectorDist(auStack_30,&uStack_10,&uStack_20);
          iVar4 = iVar4 + 1;
          fVar9 = fVar9 + fVar7;
          uStack_20 = uStack_10;
          uStack_1c = uStack_c;
          uStack_18 = uStack_8;
          uStack_14 = uStack_4;
        } while (iVar4 <= iVar3);
      }
    }
    while (uStack_e8 = uStack_e8 + 1, (int)uStack_e8 < (int)uVar2) {
      fVar7 = (float)GameState_GetArray_3a50(uStack_e8);
      fVar9 = fVar9 + fVar7;
    }
  }
  return fVar9;
}

// 0x001de2f0  size 0x47c
void RaceProg_UpdatePositions(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  char cVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  
  iVar4 = GameState_GetRacerCount();
  iVar16 = 0;
  if (0 < iVar4) {
    do {
      uVar9 = RaceProg_GetArray_1c((char)iVar16);
      uVar10 = RaceCar_Get(iVar16);
      fVar18 = (float)RaceCar_GetSpeedKmh(uVar10);
      iVar5 = RaceCar_GetTracker(uVar10);
      uVar1 = *(uint *)(iVar5 + 0x60);
      puVar8 = (undefined4 *)uVar9;
      if ((uVar1 & 0x20) != 0) {
        puVar8[3] = puVar8[3] + 1;
      }
      if ((uVar1 & 0x10) != 0) {
        puVar8[4] = puVar8[4] + 1;
      }
      iVar5 = RaceProg_Get_c();
      fVar17 = (float)puVar8[1];
      fVar20 = fVar18 + 0.0;
      iVar6 = RaceProg_Get_c();
      puVar8[1] = (fVar17 * (float)(iVar5 + -1) + fVar20) / (float)iVar6;
      if ((float)puVar8[2] < fVar18) {
        puVar8[2] = fVar18;
      }
      uVar19 = RaceCar_GetPosition(uVar10);
      *puVar8 = uVar19;
      uVar11 = RaceCar_GetFlags(uVar10);
      if ((uVar11 & 0x100) == 0) {
        piVar7 = (int *)RaceRule_GetParams(uVar9);
        if (piVar7[1] != 0) {
          lVar12 = GameState_Get_40();
          iVar5 = RaceCar_GetCheckpoint(uVar10);
          fVar18 = (float)RaceCar_GetSpeedKmh(uVar10);
          fVar18 = (fVar18 * fVar18 * 0.004) / 0.078125;
          if (lVar12 == 0) {
            fVar18 = (float)iVar5 + fVar18;
          }
          else {
            fVar18 = (float)iVar5 - fVar18;
          }
          iVar5 = (int)fVar18;
          lVar12 = GameState_Get_40();
          if (lVar12 == 0) {
            iVar6 = *piVar7;
            if ((iVar6 != 0) && (iVar5 < iVar6)) {
              iVar5 = iVar6;
            }
            *(undefined1 *)(piVar7 + 2) = 0;
            cVar15 = '\0';
            piVar7[3] = 0;
            iVar6 = 0;
            *(undefined1 *)(piVar7 + 4) = 0;
            piVar7[5] = 0;
            piVar14 = piVar7;
            while( true ) {
              piVar13 = (int *)(piVar7[1] + iVar6);
              iVar2 = *piVar13;
              iVar3 = piVar13[1];
              if (iVar2 == -1) break;
              if ((iVar2 <= iVar5) && (iVar5 <= iVar3)) {
                *(char *)(piVar14 + 2) = (char)piVar13[2];
                cVar15 = cVar15 + '\x01';
                piVar14[3] = (int)((float)(iVar5 - iVar2) / (float)(iVar3 - iVar2));
                piVar14 = piVar14 + 2;
                if ('\x01' < cVar15) break;
              }
              iVar6 = iVar6 + 0xc;
            }
          }
          else {
            iVar6 = *piVar7;
            if ((iVar6 != 0) && (iVar6 < iVar5)) {
              iVar5 = iVar6;
            }
            *(undefined1 *)(piVar7 + 2) = 0;
            cVar15 = '\0';
            piVar7[3] = 0;
            iVar6 = 0;
            *(undefined1 *)(piVar7 + 4) = 0;
            piVar7[5] = 0;
            piVar14 = piVar7;
            while( true ) {
              piVar13 = (int *)(piVar7[1] + iVar6);
              iVar2 = *piVar13;
              iVar3 = piVar13[1];
              if (iVar2 == -1) break;
              if ((iVar5 <= iVar2) && (iVar3 <= iVar5)) {
                *(char *)(piVar14 + 2) = (char)piVar13[2];
                cVar15 = cVar15 + '\x01';
                piVar14[3] = (int)((float)(iVar2 - iVar5) / (float)(iVar2 - iVar3));
                piVar14 = piVar14 + 2;
                if ('\x01' < cVar15) break;
              }
              iVar6 = iVar6 + 0xc;
            }
          }
          *piVar7 = iVar5;
        }
      }
      else {
        puVar8 = (undefined4 *)RaceRule_GetParams(uVar9);
        *(undefined1 *)(puVar8 + 2) = 0;
        puVar8[3] = 0;
        *(undefined1 *)(puVar8 + 4) = 0;
        puVar8[5] = 0;
        *puVar8 = 0;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar4);
  }
  return;
}

// 0x001de770  size 0x74
void RaceProg_UpdateOrder(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = GameState_GetRacerCount();
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = RaceProg_GetArray_1c((char)iVar4);
      iVar3 = RaceRule_GetParams(uVar2);
      *(undefined1 *)(iVar3 + 8) = 0;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined1 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x001de7f0  size 0x168
void RaceProg_CheckWin(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  bVar4 = GameState_Get_354();
  if (bVar4 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar4) {
    case 0:
      RaceProg_CheckTimeUp(param_1);
      break;
    case 1:
      RaceProg_CheckBattleFinish(param_1);
      break;
    case 2:
      RaceProg_CheckSprintFinish(param_1);
      break;
    case 3:
      RaceProg_CheckLose(param_1);
      break;
    default:
      RaceProg_CheckPosition(param_1);
      break;
    case 6:
      uVar1 = RaceProg_GetArray_28(0);
      lVar2 = Raceprog_Nop(uVar1);
      if (lVar2 < 1) {
        Flags_Set(param_1,0x22);
      }
      iVar5 = RaceProg_GetArray_40(0);
      if ((*(int *)(iVar5 + 0x4b8) != 0) && (lVar2 = GameState_Get_364(), lVar2 != 0)) {
        iVar5 = *(int *)(iVar5 + 0x4b8);
        iVar3 = GameState_Get_364();
        if (iVar5 < iVar3) {
          Flags_Set(param_1,0x81);
        }
        else {
          Flags_Set(param_1,0x82);
        }
      }
      break;
    case 7:
      iVar5 = RaceProg_GetArray_40(0);
      RaceProg_GetArray_34(0);
      if (*(int *)(iVar5 + 0x4b8) != 0) {
        Flags_Set(param_1,0x41);
      }
    }
  }
  return;
}

// 0x001de960  size 0x188
void RaceProg_CheckLose(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = RaceProg_GetArray_34(0);
  iVar2 = RaceProg_GetArray_40(0);
  if (*(int *)(iVar2 + 0x4b8) != 0) {
    lVar4 = GameState_Get_390();
    if ((lVar4 == 0) || (lVar4 = GameState_Get_364(), lVar4 == 0)) {
      lVar4 = GameState_Get_390();
      if ((lVar4 == 0) && (lVar4 = GameState_Get_364(), lVar4 != 0)) {
        iVar1 = *(int *)(iVar2 + 0x4b8);
        iVar2 = GameState_Get_364();
        if (iVar1 < iVar2) {
          Flags_Set(param_1,0x81);
        }
        else {
          Flags_Set(param_1,0x242);
        }
      }
      else {
        lVar4 = GameState_Get_390();
        if ((lVar4 == 0) || (lVar4 = GameState_Get_364(), lVar4 != 0)) {
          Flags_Set(param_1,0x88);
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x8a0);
          iVar2 = GameState_Get_390();
          if (iVar1 < iVar2) {
            Flags_Set(param_1,0x242);
          }
          else {
            Flags_Set(param_1,0x41);
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x8a0);
      iVar3 = GameState_Get_390();
      if ((iVar1 < iVar3) ||
         (iVar1 = *(int *)(iVar2 + 0x4b8), iVar2 = GameState_Get_364(), iVar2 <= iVar1)) {
        Flags_Set(param_1,0x242);
      }
      else {
        Flags_Set(param_1,0xc1);
      }
    }
  }
  return;
}

// 0x001deaf0  size 0x3d0
void RaceProg_CheckSprintFinish(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = GameState_GetRacerCount();
  if (lVar5 == 1) {
    iVar2 = RaceProg_GetArray_40(0);
    if (*(int *)(iVar2 + 0x4b8) != 0) {
      lVar5 = GameState_Get_364();
      if (lVar5 == 0) {
        Flags_Set(param_1,0x89);
      }
      else {
        iVar3 = GameState_Get_364();
        if (*(int *)(iVar2 + 0x4b8) < iVar3) {
          Flags_Set(param_1,0x89);
        }
        else {
          Flags_Set(param_1,0x8a);
        }
      }
    }
  }
  else {
    lVar5 = GameState_GetRacerCount();
    if (lVar5 == 2) {
      iVar2 = RaceProg_GetArray_40(0);
      iVar3 = RaceProg_GetArray_40(1);
      cVar1 = RaceCtx_GetMode();
      if (cVar1 == '\x04') {
        iVar2 = *(int *)(iVar2 + 0x4b8);
        if ((iVar2 == 0) || (iVar4 = *(int *)(iVar3 + 0x4b8), iVar4 == 0)) {
          if ((iVar2 == 0) || (*(int *)(iVar3 + 0x4b8) != 0)) {
            if ((iVar2 == 0) && (*(int *)(iVar3 + 0x4b8) != 0)) {
              Flags_Set(param_1,0x8a);
            }
          }
          else {
            Flags_Set(param_1,0x89);
          }
        }
        else if (iVar2 < iVar4) {
          Flags_Set(param_1,0x89);
        }
        else if (iVar2 == iVar4) {
          Flags_Set(param_1,0x8c);
        }
        else {
          Flags_Set(param_1,0x8a);
        }
      }
      else {
        cVar1 = RaceCtx_GetMode();
        if ((cVar1 == '\x02') || (cVar1 = RaceCtx_GetMode(), cVar1 == '\x03')) {
          if (*(int *)(iVar2 + 0x4b8) != 0) {
            Flags_Set(param_1,0x88);
          }
        }
        else if (*(int *)(iVar2 + 0x4b8) != 0) {
          lVar5 = GameState_Get_364();
          if (lVar5 == 0) {
            iVar2 = *(int *)(iVar2 + 0x4b8);
            if ((iVar2 == 0) || (iVar4 = *(int *)(iVar3 + 0x4b8), iVar4 == 0)) {
              if ((iVar2 == 0) || (*(int *)(iVar3 + 0x4b8) != 0)) {
                if ((iVar2 == 0) && (*(int *)(iVar3 + 0x4b8) != 0)) {
                  Flags_Set(param_1,0x8a);
                }
              }
              else {
                Flags_Set(param_1,0x89);
              }
            }
            else if (iVar2 < iVar4) {
              Flags_Set(param_1,0x89);
            }
            else if (iVar2 == iVar4) {
              Flags_Set(param_1,0x8c);
            }
            else {
              Flags_Set(param_1,0x8a);
            }
          }
          else {
            iVar3 = GameState_Get_364();
            if (*(int *)(iVar2 + 0x4b8) < iVar3) {
              Flags_Set(param_1,0x89);
            }
            else {
              Flags_Set(param_1,0x8a);
            }
          }
        }
      }
    }
    else {
      lVar5 = GameState_GetRacerCount();
      if (lVar5 == 3) {
        iVar2 = RaceProg_GetArray_40(0);
        iVar3 = RaceProg_GetArray_40(1);
        iVar4 = RaceProg_GetArray_40(2);
        iVar2 = *(int *)(iVar2 + 0x4b8);
        if (((iVar2 != 0) && (iVar3 = *(int *)(iVar3 + 0x4b8), iVar3 != 0)) &&
           (iVar4 = *(int *)(iVar4 + 0x4b8), iVar4 != 0)) {
          if ((iVar2 < iVar3) && (iVar2 < iVar4)) {
            Flags_Set(param_1,0x89);
          }
          else if ((iVar2 == iVar3) && (iVar2 == iVar4)) {
            Flags_Set(param_1,0x8c);
          }
          else {
            Flags_Set(param_1,0x8a);
          }
        }
      }
    }
  }
  return;
}

// 0x001deec0  size 0x23c
void RaceProg_CheckBattleFinish(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  lVar5 = GameState_Get_390();
  if (lVar5 == 0) {
    lVar5 = GameState_GetRacerCount();
    if (lVar5 == 1) {
      iVar6 = RaceProg_GetArray_40(0);
      if (*(int *)(iVar6 + 0x4b8) != 0) {
        Flags_Set(param_1,0x41);
      }
    }
    else {
      lVar5 = GameState_GetRacerCount();
      if (lVar5 == 2) {
        cVar2 = RaceCtx_GetMode();
        if (cVar2 == '\x04') {
          iVar6 = RaceProg_GetArray_40(0);
          iVar3 = RaceProg_GetArray_40(1);
          iVar4 = RaceProg_GetArray_34(0);
          iVar7 = RaceProg_GetArray_34(1);
          if ((*(int *)(iVar6 + 0x4b8) != 0) && (*(int *)(iVar3 + 0x4b8) != 0)) {
            if (*(int *)(iVar7 + 0x8a0) < *(int *)(iVar4 + 0x8a0)) {
              Flags_Set(param_1,0x41);
            }
            else if (*(int *)(iVar4 + 0x8a0) == *(int *)(iVar7 + 0x8a0)) {
              Flags_Set(param_1,0x44);
            }
            else {
              Flags_Set(param_1,0x42);
            }
          }
        }
        else {
          iVar6 = RaceProg_GetArray_40(0);
          if (*(int *)(iVar6 + 0x4b8) != 0) {
            Flags_Set(param_1,0x41);
          }
        }
      }
    }
  }
  else {
    bVar1 = false;
    iVar3 = RaceProg_GetArray_34(0);
    iVar4 = RaceProg_GetArray_40(0);
    iVar7 = 0;
    iVar6 = iVar3;
    do {
      if (*(int *)(iVar6 + 0xf8) == -1) {
LAB_001def94:
        iVar6 = *(int *)(iVar3 + 0x8a0);
        goto LAB_001def98;
      }
      if (((*(uint *)(iVar6 + 0x10c) & 0xe) == 0) && ((*(uint *)(iVar6 + 0x10c) & 1) != 0)) {
        bVar1 = true;
        goto LAB_001def94;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x1c;
    } while (iVar7 < 0x46);
    iVar6 = *(int *)(iVar3 + 0x8a0);
LAB_001def98:
    iVar3 = GameState_Get_390();
    if (iVar6 < iVar3) {
      if (*(int *)(iVar4 + 0x4b8) != 0) {
        Flags_Set(param_1,0x242);
      }
    }
    else if (!bVar1) {
      Flags_Set(param_1,0x41);
    }
  }
  return;
}

// 0x001df100  size 0x458
void RaceProg_CheckTimeUp(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = GameState_GetRacerCount();
  if (lVar5 == 2) {
    uVar6 = RaceProg_GetArray_28(0);
    uVar7 = RaceProg_GetArray_28(1);
    lVar5 = Raceprog_Nop(uVar6);
    if ((lVar5 < 1) && (lVar5 = Raceprog_Nop(uVar7), 0 < lVar5)) {
      Flags_Set(param_1,0x22);
    }
    else {
      lVar5 = Raceprog_Nop(uVar6);
      if ((lVar5 < 1) && (lVar5 = Raceprog_Nop(uVar7), lVar5 < 1)) {
        Flags_Set(param_1,0x24);
      }
      else {
        lVar5 = Raceprog_Nop(uVar6);
        if ((lVar5 < 1) || (lVar5 = Raceprog_Nop(uVar7), 0 < lVar5)) {
          iVar3 = RaceProg_GetArray_40(0);
          iVar4 = RaceProg_GetArray_40(1);
          iVar3 = *(int *)(iVar3 + 0x4b8);
          if ((iVar3 == 0) || (*(int *)(iVar4 + 0x4b8) != 0)) {
            if ((iVar3 == 0) && (*(int *)(iVar4 + 0x4b8) != 0)) {
              Flags_Set(param_1,0x82);
            }
            else if ((iVar3 != 0) && (iVar4 = *(int *)(iVar4 + 0x4b8), iVar4 != 0)) {
              if (iVar3 < iVar4) {
                Flags_Set(param_1,0x81);
              }
              else if (iVar3 == iVar4) {
                Flags_Set(param_1,0x84);
              }
              else {
                Flags_Set(param_1,0x82);
              }
            }
          }
          else {
            Flags_Set(param_1,0x81);
          }
        }
        else {
          Flags_Set(param_1,0x21);
        }
      }
    }
  }
  else {
    lVar5 = GameState_GetRacerCount();
    if (lVar5 == 3) {
      uVar6 = RaceProg_GetArray_28(0);
      uVar7 = RaceProg_GetArray_28(1);
      uVar8 = RaceProg_GetArray_28(2);
      lVar5 = Raceprog_Nop(uVar7);
      if (((lVar5 < 1) && (lVar5 = Raceprog_Nop(uVar8), lVar5 < 1)) &&
         (lVar5 = Raceprog_Nop(uVar6), 0 < lVar5)) {
        Flags_Set(param_1,0x21);
      }
      else {
        lVar5 = Raceprog_Nop(uVar7);
        if (((lVar5 < 1) && (lVar5 = Raceprog_Nop(uVar8), lVar5 < 1)) &&
           (lVar5 = Raceprog_Nop(uVar6), lVar5 < 1)) {
          Flags_Set(param_1,0x24);
        }
        else {
          lVar5 = Raceprog_Nop(uVar6);
          if (lVar5 < 1) {
            Flags_Set(param_1,0x22);
          }
          else {
            iVar3 = RaceProg_GetArray_40(0);
            iVar4 = RaceProg_GetArray_40(1);
            iVar2 = RaceProg_GetArray_40(2);
            iVar3 = *(int *)(iVar3 + 0x4b8);
            if (iVar3 == 0) {
              if ((*(int *)(iVar4 + 0x4b8) != 0) || (*(int *)(iVar2 + 0x4b8) != 0)) {
                Flags_Set(param_1,0x82);
              }
            }
            else {
              iVar4 = *(int *)(iVar4 + 0x4b8);
              if ((iVar4 == 0) || (iVar1 = *(int *)(iVar2 + 0x4b8), iVar1 == 0)) {
                if (iVar4 == 0) {
                  iVar4 = *(int *)(iVar2 + 0x4b8);
                  if (iVar4 == 0) {
                    Flags_Set(param_1,0x81);
                  }
                  else if (iVar3 < iVar4) {
                    Flags_Set(param_1,0x81);
                  }
                  else if (iVar3 == iVar4) {
                    Flags_Set(param_1,0x84);
                  }
                  else {
                    Flags_Set(param_1,0x82);
                  }
                }
                else if (iVar3 < iVar4) {
                  Flags_Set(param_1,0x81);
                }
                else if (iVar3 == iVar4) {
                  Flags_Set(param_1,0x84);
                }
                else {
                  Flags_Set(param_1,0x82);
                }
              }
              else if ((iVar3 < iVar4) && (iVar3 < iVar1)) {
                Flags_Set(param_1,0x81);
              }
              else if ((iVar3 == iVar4) && (iVar3 == iVar1)) {
                Flags_Set(param_1,0x84);
              }
              else {
                Flags_Set(param_1,0x82);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// 0x001df560  size 0x264
void RaceProg_CheckPosition(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = GameState_GetRacerCount();
  if (lVar4 == 2) {
    uVar5 = RaceCar_Get(0);
    uVar6 = RaceCar_Get(1);
    uVar7 = RaceProg_Get_4();
    if ((uVar7 & 8) == 0) {
      uVar7 = RaceProg_Get_4();
      if ((uVar7 & 0x10) != 0) {
        fVar8 = (float)RaceCar_GetPosition(uVar5);
        fVar9 = (float)RaceCar_GetPosition(uVar6);
        if (fVar8 - fVar9 <= 50.0) {
          fVar8 = (float)RaceCar_GetPosition(uVar6);
          fVar9 = (float)RaceCar_GetPosition(uVar5);
          if (150.0 < fVar8 - fVar9) {
            Flags_Set(param_1,0x102);
          }
        }
        else {
          Flags_Set(param_1,0x101);
        }
      }
    }
    else {
      fVar8 = (float)RaceCar_GetPosition(uVar6);
      fVar9 = (float)RaceCar_GetPosition(uVar5);
      if (50.0 < fVar8 - fVar9) {
        Flags_Set(param_1,0x102);
      }
      else {
        fVar8 = (float)RaceCar_GetPosition(uVar5);
        fVar9 = (float)RaceCar_GetPosition(uVar6);
        if (150.0 < fVar8 - fVar9) {
          Flags_Set(param_1,0x101);
        }
      }
    }
    iVar2 = RaceProg_GetArray_40(0);
    iVar3 = RaceProg_GetArray_40(1);
    iVar2 = *(int *)(iVar2 + 0x4b8);
    if ((iVar2 == 0) || (iVar1 = *(int *)(iVar3 + 0x4b8), iVar1 == 0)) {
      if ((iVar2 == 0) && (*(int *)(iVar3 + 0x4b8) != 0)) {
        Flags_Set(param_1,0x8a);
      }
      else if ((iVar2 != 0) && (*(int *)(iVar3 + 0x4b8) == 0)) {
        Flags_Set(param_1,0x89);
      }
    }
    else if (iVar2 < iVar1) {
      Flags_Set(param_1,0x89);
    }
    else if (iVar2 == iVar1) {
      Flags_Set(param_1,0x8c);
    }
    else {
      Flags_Set(param_1,0x8a);
    }
  }
  return;
}

// 0x001df7d0  size 0x4ec
void RaceProg_UpdateLaps(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined2 uStack_10;
  
  lVar6 = GameState_Get_44();
  if (lVar6 != 0) {
    uVar2 = GameState_Get_1();
    iVar1 = *(int *)((int)lVar6 + (uVar2 & 0xff) * 0x10 + 0xc);
    iVar11 = 0;
    lVar6 = GameState_GetRacerCount();
    if (0 < lVar6) {
      do {
        iVar13 = 0;
        uVar7 = RaceCar_Get(iVar11);
        iVar3 = RaceCar_GetIndex(uVar7);
        if ((*(uint *)(iVar3 + 4) & 0x20) == 0) {
          uVar8 = RaceProg_GetArray_40((char)iVar11);
          iVar10 = 0;
          iVar3 = 0;
          do {
            iVar12 = (int)uVar8;
            piVar9 = (int *)(iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3);
            iVar5 = *piVar9;
            if (iVar5 == -1) break;
            if ((piVar9[2] & 1U) == 0) {
              puVar4 = (undefined4 *)(iVar1 + iVar5 * 0x10);
              iVar14 = puVar4[1];
              uStack_10 = (undefined2)*puVar4;
              iVar5 = GameState_GetArray_3a78(uStack_10);
              iVar5 = iVar14 * 0x20 + iVar5;
              if (iVar13 != iVar10) break;
              lVar6 = GameState_Get_40();
              if (lVar6 == 0) {
                iVar14 = RaceCar_GetCheckpoint(uVar7);
                if (iVar5 <= iVar14) {
                  iVar5 = iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3;
                  *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 1;
                }
              }
              else {
                iVar14 = RaceCar_GetCheckpoint(uVar7);
                if (iVar14 < iVar5) {
                  iVar5 = iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3;
                  *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 1;
                }
              }
              if ((*(uint *)(iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3 + 8) & 1) != 0) {
                lVar6 = LapTime_GetTotal(uVar8);
                if (lVar6 < 360000) {
                  iVar5 = LapTime_GetTotal(uVar8);
                  fVar15 = (float)GameState_GetArray_18(iVar10);
                  fVar16 = (float)RaceCar_GetPosition(uVar7);
                  fVar17 = (float)RaceCar_GetLap(uVar7);
                  fVar18 = (float)RaceCar_GetPosition(uVar7);
                  *(int *)(iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3 + 4) =
                       (int)((float)(iVar5 * 1000) -
                            (float)(int)(((fVar18 - fVar15) * 1000.0) / (fVar16 - fVar17)));
                }
                else {
                  *(undefined4 *)(iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3 + 4) = 360000000;
                }
                iVar5 = *(int *)(iVar12 + 0x4bc);
                if ((*(uint *)(iVar12 + iVar5 * 0x78 + iVar3 + 8) & 2) != 0) {
                  iVar14 = GameState_Get_8();
                  if (iVar5 < iVar14 + -1) {
                    *(int *)(iVar12 + 0x4bc) = *(int *)(iVar12 + 0x4bc) + 1;
                  }
                  else {
                    if (iVar11 == 2) {
                      RaceScene_GetMode(0x1008);
                    }
                    else if (iVar11 == 1) {
                      lVar6 = GameState_GetPlayerCount();
                      if (lVar6 == 2) {
                        RaceScene_GetMode(0x1002);
                        RaceScene_GetMode(0x402);
                      }
                      else {
                        RaceScene_GetMode(0x1004);
                      }
                    }
                    else if (iVar11 == 0) {
                      RaceScene_GetMode(0x1001);
                      RaceScene_GetMode(0x401);
                    }
                    lVar6 = LapTime_GetTotal(uVar8);
                    if (lVar6 < 360000) {
                      iVar5 = LapTime_GetTotal(uVar8);
                      fVar15 = (float)GameState_Get_14();
                      fVar16 = (float)RaceCar_GetPosition(uVar7);
                      fVar17 = (float)RaceCar_GetLap(uVar7);
                      fVar18 = (float)RaceCar_GetPosition(uVar7);
                      *(int *)(iVar12 + 0x4b8) =
                           (int)((float)(iVar5 * 1000) -
                                (float)(int)(((fVar18 - fVar15) * 1000.0) / (fVar16 - fVar17)));
                    }
                    else {
                      *(undefined4 *)(iVar12 + 0x4b8) = 360000000;
                    }
                  }
                }
              }
            }
            else {
              iVar13 = iVar13 + 1;
            }
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + 0xc;
          } while (iVar10 < 10);
          if (*(int *)(iVar12 + 0x4b8) == 0) {
            if (*(int *)(iVar12 + 0x4b0) < 360000) {
              *(int *)(iVar12 + 0x4b0) = *(int *)(iVar12 + 0x4b0) + 1;
            }
            else {
              *(undefined4 *)(iVar12 + 0x4b0) = 360000;
            }
          }
        }
        iVar11 = iVar11 + 1;
        iVar3 = GameState_GetRacerCount();
      } while (iVar11 < iVar3);
    }
  }
  return;
}

// 0x001dfcd0  size 0x1e0
void RaceProg_UpdateTimers(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  lVar4 = GameState_Get_40();
  if (lVar4 == 0) {
    iVar1 = GameState_Get_c();
    iVar2 = GameState_Get_10();
    if (iVar1 <= iVar2) {
      iVar2 = 0;
      piVar6 = param_1;
      do {
        *piVar6 = iVar1;
        iVar3 = GameState_Get_10();
        if (iVar1 == iVar3) {
          piVar6[2] = 2;
        }
        iVar3 = 1;
        piVar5 = (int *)((int)param_1 + iVar2 + 0x78);
        do {
          iVar3 = iVar3 + 3;
          *piVar5 = *piVar6;
          piVar5[1] = piVar6[1];
          piVar5[2] = piVar6[2];
          piVar5[0x1e] = *piVar6;
          piVar5[0x1f] = piVar6[1];
          piVar5[0x20] = piVar6[2];
          piVar5[0x3c] = *piVar6;
          piVar5[0x3d] = piVar6[1];
          piVar5[0x3e] = piVar6[2];
          piVar5 = piVar5 + 0x5a;
        } while (iVar3 < 10);
        piVar6 = piVar6 + 3;
        iVar2 = iVar2 + 0xc;
        iVar1 = iVar1 + 1;
        iVar3 = GameState_Get_10();
      } while (iVar1 <= iVar3);
    }
  }
  else {
    iVar1 = GameState_Get_c();
    iVar2 = GameState_Get_10();
    if (iVar2 <= iVar1) {
      iVar2 = 0;
      piVar6 = param_1;
      do {
        *piVar6 = iVar1;
        iVar3 = GameState_Get_10();
        if (iVar1 == iVar3) {
          piVar6[2] = 2;
        }
        iVar3 = 1;
        piVar5 = (int *)((int)param_1 + iVar2 + 0x78);
        do {
          iVar3 = iVar3 + 3;
          *piVar5 = *piVar6;
          piVar5[1] = piVar6[1];
          piVar5[2] = piVar6[2];
          piVar5[0x1e] = *piVar6;
          piVar5[0x1f] = piVar6[1];
          piVar5[0x20] = piVar6[2];
          piVar5[0x3c] = *piVar6;
          piVar5[0x3d] = piVar6[1];
          piVar5[0x3e] = piVar6[2];
          piVar5 = piVar5 + 0x5a;
        } while (iVar3 < 10);
        piVar6 = piVar6 + 3;
        iVar2 = iVar2 + 0xc;
        iVar1 = iVar1 + -1;
        iVar3 = GameState_Get_10();
      } while (iVar3 <= iVar1);
    }
  }
  return;
}

// 0x001dfec0  size 0x64
void RaceProg_UpdateTimerAll(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = GameState_GetRacerCount();
  if (0 < lVar2) {
    do {
      uVar3 = RaceProg_GetArray_40((char)iVar4);
      RaceProg_UpdateTimers(uVar3);
      iVar4 = iVar4 + 1;
      iVar1 = GameState_GetRacerCount();
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x001dff30  size 0x48
void maybe_RaceProg_CountA(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0xf8) == -1) {
      return;
    }
    if (iVar1 < *(int *)(param_1 + 0x100)) {
      iVar1 = *(int *)(param_1 + 0x100);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x1c;
  } while (iVar2 < 0x46);
  return;
}

// 0x001dff80  size 0x50
int maybe_RaceProg_CountB(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0xf8) == -1) {
      return iVar1;
    }
    iVar1 = iVar1 * iVar2;
    iVar2 = iVar2 + 1;
    iVar1 = (*(int *)(param_1 + 0x100) + iVar1) / iVar2;
    param_1 = param_1 + 0x1c;
  } while (iVar2 < 0x46);
  return iVar1;
}

// 0x001dffd0  size 0x458
/* WARNING: Removing unreachable block (ram,0x001e0310) */

void RaceProg_UpdateGapMeter(float param_1,int *param_2,undefined8 param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  RaceEntrySetup *pRVar10;
  undefined8 uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  
  uVar11 = RaceCar_Get(param_3);
  fVar16 = (float)RaceCar_GetSpeedKmh(uVar11);
  iVar19 = *(int *)((int)uVar11 + 0x6c);
  pRVar10 = GameState_Elem_f0_xcc((int)param_3);
  GameState_Elem_3e0_x540((int)(char)pRVar10->unk_09);
  fVar18 = 0.0;
  param_2[param_2[1] + 2] = iVar19;
  if (*param_2 == 0) {
    iVar19 = param_2[1];
    iVar15 = 0;
    if (0 < iVar19) {
      if (8 < iVar19) {
        bVar9 = false;
        if ((-1 < iVar19) && (iVar19 < 0x7fffffff)) {
          bVar9 = true;
        }
        if (bVar9) {
          piVar12 = param_2;
          do {
            pfVar1 = (float *)(piVar12 + 2);
            iVar15 = iVar15 + 8;
            pfVar2 = (float *)(piVar12 + 3);
            pfVar3 = (float *)(piVar12 + 4);
            pfVar4 = (float *)(piVar12 + 5);
            pfVar5 = (float *)(piVar12 + 6);
            pfVar6 = (float *)(piVar12 + 7);
            pfVar7 = (float *)(piVar12 + 8);
            pfVar8 = (float *)(piVar12 + 9);
            piVar12 = piVar12 + 8;
            fVar18 = fVar18 + *pfVar1 + *pfVar2 + *pfVar3 + *pfVar4 + *pfVar5 + *pfVar6 + *pfVar7 +
                     *pfVar8;
          } while (iVar15 < iVar19 + -8);
        }
      }
      iVar19 = param_2[1];
      if (iVar15 < iVar19) {
        piVar12 = param_2 + iVar15;
        do {
          iVar15 = iVar15 + 1;
          fVar18 = fVar18 + (float)piVar12[2];
          piVar12 = piVar12 + 1;
        } while (iVar15 < iVar19);
      }
    }
    fVar18 = fVar18 / (float)(iVar19 + 1);
  }
  else {
    iVar15 = 0;
    iVar13 = param_2[1] + 2;
    iVar19 = param_2[1];
    do {
      iVar14 = iVar19 + 1;
      if (0x3b < iVar14) {
        iVar14 = iVar19 + -0x3b;
      }
      if (0x3b < iVar13) {
        iVar13 = iVar13 + -0x3c;
      }
      iVar15 = iVar15 + 1;
      iVar13 = iVar13 + 1;
      fVar18 = fVar18 + (float)param_2[iVar14 + 2];
      iVar19 = iVar14;
    } while (iVar15 < 0x3c);
    fVar18 = fVar18 / 60.0;
  }
  fVar18 = (float)Race_CountActiveCars((fVar18 * 180.0) / 3.1415927);
  if (param_1 == 1000.0) {
    fVar17 = 2.0;
  }
  else if (param_1 < 0.0) {
    if (fVar18 < 0.0) {
      fVar17 = 3.0;
    }
    else {
      fVar17 = 1.0;
    }
  }
  else if (0.0 < fVar18) {
    fVar17 = 3.0;
  }
  else {
    fVar17 = 1.0;
  }
  fVar18 = (float)fabsf(fVar18);
  if (fVar18 <= 45.0) {
    if (fVar18 < 10.0) {
      fVar18 = 0.0;
    }
  }
  else {
    fVar18 = 45.0;
  }
  fVar18 = (float)tanf((fVar18 * 3.1415927) / 180.0);
  fVar16 = fVar16 - 10.0;
  if (fVar16 < 0.0) {
    fVar16 = 0.0;
  }
  fVar17 = fVar18 * fVar17 * 1.0 * 10.0;
  if (fVar16 == 0.0) {
    fVar17 = 0.0;
  }
  iVar19 = (int)(((fVar16 * fVar16) / 100.0) * fVar18 * 0.5 + fVar17);
  if (iVar19 < 10) {
    iVar19 = 0;
  }
  if (iVar19 % 10 != 0) {
    iVar19 = iVar19 - iVar19 % 10;
  }
  param_2[param_4 * 7 + 0x40] = param_2[param_4 * 7 + 0x40] + iVar19;
  param_2[1] = param_2[1] + 1;
  if (param_2[1] == 0x3c) {
    param_2[1] = 0;
    *param_2 = 1;
  }
  return;
}

