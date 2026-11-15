// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001e8000 - 0x001ec000
#include "ghidra_types.h"

// 0x001e80e0  size 0x2d8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceSnd_UpdateCrowd(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  RaceEntrySetup *pRVar4;
  float fVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  float fVar11;
  
  lVar6 = RaceScene_IsRunning();
  if (lVar6 != 1) {
    return;
  }
  lVar6 = RaceScene_IsPaused();
  puVar9 = (undefined1 *)param_1;
  *(uint *)(puVar9 + 0x18) = (uint)(lVar6 != 0);
  cVar1 = Options_Get_1c();
  *(int *)(puVar9 + 0x1c) = (int)cVar1;
  RaceSnd_StopSlot(param_1,0xff);
  RaceSnd_StopSlot(puVar9 + 8,0xff);
  RaceSnd_StopSlot(puVar9 + 0x10,0xff);
  RaceSnd_PlayResult(param_1,param_1,3);
  uVar2 = Options_Get_1c();
  uVar3 = Snd_VolumeToMidi(uVar2);
  (**(code **)(**(int **)(puVar9 + 4) + 0x10))(*(int **)(puVar9 + 4),*puVar9,uVar3,0x3f,1);
  if (*(int *)(puVar9 + 0x18) == 0) {
    uVar2 = Options_Get_1c();
    uVar3 = Snd_VolumeToMidi(uVar2);
    (**(code **)(**(int **)(puVar9 + 0xc) + 0x10))(*(int **)(puVar9 + 0xc),puVar9[8],uVar3,0x3f,1);
  }
  else {
    uVar2 = Options_Get_1c();
    uVar3 = Snd_VolumeToMidi(uVar2);
    (**(code **)(**(int **)(puVar9 + 0x14) + 0x10))
              (*(int **)(puVar9 + 0x14),puVar9[0x10],uVar3,0x3f,1);
  }
  fVar11 = DAT_0036e860;
  if (_s_RaceIsReplayMode != 0) goto LAB_001e8224;
  cVar1 = Options_Get_1c();
  *(int *)(puVar9 + 0x1c) = (int)cVar1;
  lVar6 = Loading_IsActive();
  if (lVar6 != 0) {
    pRVar4 = GameState_Elem_f0_xcc(0);
    uVar7 = CarRec_GetPartData(pRVar4,0xb);
    fVar5 = 1.0;
    if (uVar7 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch((int)uVar7) {
      case 0:
        fVar11 = fVar11 * 0.8;
        goto LAB_001e8314;
      case 1:
        fVar5 = 0.9;
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        fVar5 = 1.1;
        break;
      case 5:
        fVar5 = 1.2;
      }
    }
    fVar11 = fVar11 * fVar5;
  }
LAB_001e8314:
  uVar8 = SndMgr_GetInstance();
  uVar8 = SndMgr_GetSlot(uVar8,1);
  fVar11 = (float)*(int *)(puVar9 + 0x1c) * fVar11;
  if (fVar11 < 2.1474836e+09) {
    uVar10 = (uint)fVar11;
  }
  else {
    uVar10 = (int)(fVar11 - 2.1474836e+09) | 0x80000000;
  }
  uVar3 = Snd_VolumeToMidi(uVar10);
  (**(code **)(*(int *)uVar8 + 0x20))(uVar8,uVar3);
LAB_001e8224:
  if (iRam0046a590 == 0) {
    *(undefined4 *)(puVar9 + 0x24) = 3;
  }
  else {
    *(undefined4 *)(puVar9 + 0x24) = 2;
  }
  return;
}

// 0x001e83c0  size 0x2cc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceSnd_Task(undefined8 param_1)

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
  if (*(uint *)(iVar4 + 0x24) < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(iVar4 + 0x24)) {
    case 0:
      (**(code **)(**(int **)(iVar4 + 4) + 0x1c))();
      if (*(int *)(iVar4 + 0x18) == 0) {
        (**(code **)(**(int **)(iVar4 + 0xc) + 0x1c))();
      }
      else {
        (**(code **)(**(int **)(iVar4 + 0x14) + 0x1c))();
      }
      RaceSnd_SetupCars(param_1);
      *(undefined4 *)(iVar4 + 0x24) = 1;
      break;
    case 1:
      RaceSnd_UpdateCrowd(param_1);
      break;
    case 2:
      iVar6 = *(int *)(_g_Loading + 0x14);
      Snd_StreamGetState(0);
      lVar2 = Scene_GetParam();
      if (lVar2 == 4) {
        return;
      }
      lVar2 = RaceScene_IsPaused();
      if (lVar2 == 0) {
        if (*(int *)(iVar6 + 0x500) == 0) {
          if (_g_RaceSnd == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = _g_RaceSnd + 0x80;
          }
          CarSnd_Update3d(iVar4,iVar6);
        }
        else {
          if (_g_RaceSnd == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = _g_RaceSnd + 0x80;
          }
          CarSnd_StopVoice(iVar4);
        }
      }
      else {
        if (_g_RaceSnd == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = _g_RaceSnd + 0x80;
        }
        CarSnd_StopVoice(iVar6);
        *(undefined4 *)(iVar4 + 0x24) = 6;
      }
      break;
    case 3:
      lVar2 = RaceScene_IsFlag10();
      if ((lVar2 == 0) && (_s_RaceIsReplayMode != 0)) {
        RaceSnd_UpdateCars(param_1);
      }
      else {
        RaceSnd_UpdateAnnouncer(param_1);
      }
      break;
    case 4:
      RaceSnd_UpdateAmbient(param_1);
      break;
    case 6:
      RaceSnd_UpdateMusic(param_1);
      break;
    case 7:
      iVar6 = 0;
      lVar2 = GameState_GetRacerCount();
      if (0 < lVar2) {
        iVar5 = 0;
        do {
          if (_g_RaceSnd == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = _g_RaceSnd + iVar5;
          }
          CarSnd_StopVoice(iVar1);
          iVar5 = iVar5 + 0x80;
          iVar6 = iVar6 + 1;
          iVar1 = GameState_GetRacerCount();
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
      uVar3 = SndMgr_GetInstance();
      SndMgr_ResumeAll(uVar3);
      *(undefined4 *)(iVar4 + 0x24) = 0;
    }
  }
  return;
}

// 0x001e8690  size 0x1c8
void RaceSnd_PlayStart(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_50 [2];
  byte bStack_4e;
  
  uVar3 = SndMgr_GetInstance();
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0x28) = 0;
  *(undefined4 *)(iVar7 + 0x20) = 0;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  lVar4 = RaceScene_IsPaused();
  *(uint *)(iVar7 + 0x18) = (uint)(lVar4 != 0);
  cVar1 = Options_Get_1c();
  *(int *)(iVar7 + 0x1c) = (int)cVar1;
  RaceSnd_StopSlot(param_1,0xff);
  RaceSnd_StopSlot(iVar7 + 8,0xff);
  RaceSnd_StopSlot(iVar7 + 0x10,0xff);
  *(undefined4 *)(iVar7 + 0x2c) = 0;
  *(undefined4 *)(iVar7 + 0x30) = 5000000;
  *(undefined4 *)(iVar7 + 0x38) = 0;
  *(undefined4 *)(iVar7 + 0x3c) = 5000000;
  uVar2 = maybe_Options_GetBgmVolume();
  uVar5 = Snd_RpmToPitch(uVar2);
  SndMgr_PlayEngine(uVar3,uVar5);
  uVar5 = SndMgr_GetChannelB(uVar3,1);
  uVar6 = SndMgr_GetChannelB(uVar3,2);
  uVar3 = SndMgr_GetChannelB(uVar3,3);
  SndMgr_PlayStreamSlot(uVar3,0x1c1a,0x1c63,0,0);
  GameState_LoadHeader(auStack_50);
  if (bStack_4e < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bStack_4e) {
    case 0:
      goto switchD_001e879c_caseD_0;
    case 1:
      SndMgr_PlayStreamSlot(uVar6,0x1c19,0x1c62,0,0);
      SndMgr_PlayStreamSlot(uVar5,0x1c16,0x1c5f,0,0);
      break;
    case 2:
      SndMgr_PlayStreamSlot(uVar6,0x1c18,0x1c61,0,0);
      SndMgr_PlayStreamSlot(uVar5,0x1c15,0x1c5e,0,0);
    }
  }
  else {
switchD_001e879c_caseD_0:
    SndMgr_PlayStreamSlot(uVar6,0x1c17,0x1c60,0,0);
    SndMgr_PlayStreamSlot(uVar5,0x1c14,0x1c5d,0,0);
  }
  return;
}

// 0x001e8860  size 0x3b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceSnd_PlayResult(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_50 [80];
  
  cVar1 = RaceCtx_GetMode();
  if (cVar1 == '\x06') {
    RaceSnd_StopSlot(param_2,0xff);
    RaceSnd_SetupChannels(param_1,param_2);
    return;
  }
  if (8 < param_3) {
    return;
  }
  iVar6 = (int)param_2;
                    /* WARNING: Switch is manually overridden */
  switch((int)param_3) {
  default:
    RaceSnd_StopSlot(iVar6 + 8,0xff);
    RaceSnd_StopSlot(iVar6 + 0x10,0xff);
    RaceSnd_StopSlot(param_2,0xff);
    break;
  case 2:
    break;
  case 3:
    lVar3 = maybe_RaceResult_GetCategory();
    if (lVar3 == 0) {
      uVar5 = maybe_RaceResult_GetRivalTeam();
      cVar1 = RivalRec_GetTeam(uVar5);
      if (cVar1 == '\x05') {
        RaceSnd_StopSlot(param_2);
      }
      else {
        RaceSnd_StopSlot(param_2,0x29);
      }
    }
    else if (iRam0046a590 == 0) {
      lVar3 = maybe_RaceResult_GetCategory();
      if (lVar3 == 8) {
        RaceSnd_StopSlot(param_2,2);
      }
      else if (lVar3 == 4) {
        RaceSnd_StopSlot(param_2,6);
      }
      else if (lVar3 == 7) {
        RaceSnd_StopSlot(param_2,10);
      }
      else if (lVar3 == 1) {
        RaceSnd_StopSlot(param_2,0x10);
      }
      else if (lVar3 == 5) {
        RaceSnd_StopSlot(param_2);
      }
      else {
        RaceSnd_StopSlot(param_2,0xc);
      }
    }
    else {
      lVar3 = maybe_RaceResult_GetCategory();
      if (lVar3 == 8) {
        RaceSnd_StopSlot(param_2,0x13);
      }
      else if (lVar3 == 4) {
        RaceSnd_StopSlot(param_2,0x15);
      }
      else if (lVar3 == 7) {
        RaceSnd_StopSlot(param_2,0x16);
      }
      else if (lVar3 == 1) {
        RaceSnd_StopSlot(param_2,0x18);
      }
      else if (lVar3 == 5) {
        RaceSnd_StopSlot(param_2,0x14);
      }
      else {
        RaceSnd_StopSlot(param_2,0x17);
      }
    }
    RaceSnd_SetupChannels(param_1,param_2);
    break;
  case 5:
    RaceSnd_StopSlot(iVar6 + 8,0xff);
    RaceSnd_StopSlot(iVar6 + 0x10,0xff);
    GameState_LoadHeader(auStack_50);
    bVar2 = RaceCtx_Get_8();
    if (bVar2 < 0xb) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar2) {
      default:
        uVar4 = GameState_Get_35c();
        if ((uVar4 & 9) == 0) {
          RaceSnd_StopSlot(param_2,3);
        }
        else {
          RaceSnd_StopSlot(param_2,0x11);
        }
        lVar3 = RaceScene_IsFlag10();
        if (lVar3 != 0) {
          return;
        }
        if (_s_RaceIsReplayMode == 0) {
          return;
        }
        RaceSnd_StopSlot(param_2,9);
        break;
      case 5:
      case 6:
        goto switchD_001e8b08_caseD_5;
      case 9:
        RaceSnd_StopSlot(param_2,0xff);
      }
    }
    else {
switchD_001e8b08_caseD_5:
      RaceSnd_StopSlot(param_2,9);
    }
    break;
  case 6:
    RaceSnd_StopSlot(param_2,0xff);
    RaceSnd_SetupChannels(param_1,param_2);
  }
  return;
}

// 0x001e8c20  size 0x12c
void RaceSnd_SetupChannels(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_f0 [3];
  byte bStack_ed;
  undefined1 auStack_a0 [2];
  byte bStack_9e;
  byte abStack_50 [80];
  
  RaceSnd_StopSlot(param_2 + 8,0xff);
  RaceSnd_StopSlot(param_2 + 0x10,0xff);
  GameState_LoadHeader(abStack_50);
  GameState_LoadHeader(auStack_a0);
  uVar2 = (uint)bStack_9e;
  GameState_LoadHeader(auStack_f0);
  if ((abStack_50[0] == 8) && (uVar2 == 2)) {
    uVar2 = 3;
  }
  if (uVar2 < 6) {
                    /* WARNING: Switch is manually overridden */
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
  }
  iVar1 = (uint)abStack_50[0] * 0x40;
  RaceSnd_StopSlot(param_2 + 8,
                   *(undefined4 *)(uVar2 * 8 + (uint)bStack_ed * 0x20 + iVar1 + 0x31c410));
  RaceSnd_StopSlot(param_2 + 0x10,
                   *(undefined4 *)(uVar2 * 8 + (uint)bStack_ed * 0x20 + iVar1 + 0x31c414));
  return;
}

// 0x001e8d60  size 0x9c
void RaceTask_ShutdownSound(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  (**(code **)(**(int **)(iVar1 + 4) + 0x1c))();
  if (*(int *)(iVar1 + 0x18) == 0) {
    (**(code **)(**(int **)(iVar1 + 0xc) + 0x1c))();
  }
  else {
    (**(code **)(**(int **)(iVar1 + 0x14) + 0x1c))();
  }
  cVar2 = RaceCtx_GetMode();
  if (cVar2 != '\x06') {
    CarSnd_UpdateAll();
    SndMgr_PauseGlobal();
  }
  CarSnd_Shutdown();
  return;
}

// 0x001e8e00  size 0x4c
void RaceSnd_Enter(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  CarSnd_Init(0x430750);
  RaceSnd_PlayStart(uVar1);
  *(undefined1 **)(param_1 + 0x1c) = &LAB_001e8d50;
  return;
}

// 0x001e8e50  size 0xc8
void RaceSnd_StopSlot(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = SndMgr_GetInstance();
  if (param_2 == 0xff) {
    uVar1 = SndMgr_GetSlot(uVar2,5);
    param_1[1] = uVar1;
  }
  else if (param_2 == 0x29) {
    uVar1 = SndMgr_GetSlot(uVar2,4);
    param_1[1] = uVar1;
  }
  else if ((param_2 < 0x27) || (0x28 < param_2)) {
    if (param_2 < 0x19) {
      uVar1 = SndMgr_GetSlot(uVar2,0);
      param_1[1] = uVar1;
    }
    else {
      uVar1 = SndMgr_GetSlot(uVar2,1);
      param_1[1] = uVar1;
    }
  }
  else {
    uVar1 = SndMgr_GetSlot(uVar2,2);
    param_1[1] = uVar1;
  }
  *param_1 = (int)param_2;
  return;
}

// 0x001e8f20  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceScene_Get_38(void)

{
  return *(undefined4 *)(_g_RaceScene + 0x38);
}

// 0x001e8f30  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceScene_Get_40(void)

{
  return *(undefined4 *)(_g_RaceScene + 0x40);
}

// 0x001e8f40  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool RaceScene_IsFlag1000(void)

{
  return (*(uint *)(_g_RaceScene + 0x30) & 0x1000) != 0;
}

// 0x001e8f60  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool RaceScene_IsFlag400(void)

{
  return (*(uint *)(_g_RaceScene + 0x30) & 0x400) != 0;
}

// 0x001e8f80  size 0x18
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_ClearFlag800(void)

{
  *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) & 0xfffff7ff;
  return;
}

// 0x001e8fa0  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool RaceScene_IsFlag800(void)

{
  return (*(uint *)(_g_RaceScene + 0x30) & 0x800) != 0;
}

// 0x001e8fc0  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool RaceScene_IsFlag10(void)

{
  return (*(uint *)(_g_RaceScene + 0x30) & 0x10) != 0;
}

// 0x001e8fe0  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool RaceScene_IsActive(void)

{
  bool bVar1;
  
  if (_g_RaceScene == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(_g_RaceScene + 0x30) & 0x20000) != 0;
  }
  return bVar1;
}

// 0x001e9010  size 0x20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 26 callers */

bool RaceScene_IsPaused(void)

{
  bool bVar1;
  
  if (_g_RaceScene == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(_g_RaceScene + 0x30) & 0x40) != 0;
  }
  return bVar1;
}

// 0x001e9030  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_SetFlagB4(void)

{
  *(uint *)(_g_RaceScene + 0x34) = *(uint *)(_g_RaceScene + 0x34) | 4;
  return;
}

// 0x001e9050  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool RaceScene_IsFlag2(void)

{
  return (*(uint *)(_g_RaceScene + 0x30) & 2) != 0;
}

// 0x001e9070  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_SetFlagB2(void)

{
  *(uint *)(_g_RaceScene + 0x34) = *(uint *)(_g_RaceScene + 0x34) | 2;
  return;
}

// 0x001e9090  size 0x18
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool RaceScene_IsReplay(void)

{
  return (*(uint *)(_g_RaceScene + 0x30) & 0x10000) != 0;
}

// 0x001e90b0  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool RaceScene_IsFlag8000(void)

{
  return (*(uint *)(_g_RaceScene + 0x30) & 0x8000) != 0;
}

// 0x001e90d0  size 0x18
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_ClearFlag1(void)

{
  *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) & 0xfffffffe;
  return;
}

// 0x001e90f0  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* flag 1; 13 callers */

bool RaceScene_IsRunning(void)

{
  return (*(uint *)(_g_RaceScene + 0x30) & 1) != 0;
}

// 0x001e9110  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceScene_GetState(void)

{
  return *_g_RaceScene;
}

// 0x001e9120  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 10 callers */

void RaceScene_SetFlags(uint param_1)

{
  *_g_RaceScene = *_g_RaceScene | param_1;
  return;
}

// 0x001e9140  size 0x5f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateMachine(undefined8 param_1)

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
  
  uVar1 = *_g_RaceScene;
  iVar5 = (int)param_1;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 8) == 0) {
          if ((uVar1 & 0x10) != 0) {
            *_g_RaceScene = *_g_RaceScene & 0xffffffef;
            puVar2 = PTR_RaceScene_StateResult_0031c820;
            uStack_50 = DAT_0031c818;
            uVar3 = uStack_50;
            puStack_48 = PTR_RaceScene_StateResult_0031c820;
            uStack_50._0_4_ = (undefined4)DAT_0031c818;
            uStack_50._4_4_ = (undefined4)((ulong)DAT_0031c818 >> 0x20);
            *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_50;
            *(undefined4 *)(iVar5 + 0xc) = uStack_50._4_4_;
            *(undefined **)(iVar5 + 0x10) = puVar2;
            uStack_50 = uVar3;
            lVar4 = __ptmf_test(&uStack_50);
            if (lVar4 != 0) {
              __ptmf_scall(param_1);
            }
          }
        }
        else {
          *_g_RaceScene = *_g_RaceScene & 0xfffffff7;
          puVar2 = PTR_RaceScene_StateRetry_0031c810;
          uStack_40 = DAT_0031c808;
          uVar3 = uStack_40;
          puStack_38 = PTR_RaceScene_StateRetry_0031c810;
          uStack_40._0_4_ = (undefined4)DAT_0031c808;
          uStack_40._4_4_ = (undefined4)((ulong)DAT_0031c808 >> 0x20);
          *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_40;
          *(undefined4 *)(iVar5 + 0xc) = uStack_40._4_4_;
          *(undefined **)(iVar5 + 0x10) = puVar2;
          uStack_40 = uVar3;
          lVar4 = __ptmf_test(&uStack_40);
          if (lVar4 != 0) {
            __ptmf_scall(param_1);
          }
        }
      }
      else {
        *_g_RaceScene = *_g_RaceScene & 0xfffffffb;
        puVar2 = PTR_RaceScene_StateNextRace_0031c800;
        uStack_30 = DAT_0031c7f8;
        uVar3 = uStack_30;
        puStack_28 = PTR_RaceScene_StateNextRace_0031c800;
        uStack_30._0_4_ = (undefined4)DAT_0031c7f8;
        uStack_30._4_4_ = (undefined4)((ulong)DAT_0031c7f8 >> 0x20);
        *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_30;
        *(undefined4 *)(iVar5 + 0xc) = uStack_30._4_4_;
        *(undefined **)(iVar5 + 0x10) = puVar2;
        uStack_30 = uVar3;
        lVar4 = __ptmf_test(&uStack_30);
        if (lVar4 != 0) {
          __ptmf_scall(param_1);
        }
      }
    }
    else {
      *_g_RaceScene = *_g_RaceScene & 0xfffffffd;
      puVar2 = PTR_RaceScene_StateSaveGhost_0031c7f0;
      uStack_20 = DAT_0031c7e8;
      uVar3 = uStack_20;
      puStack_18 = PTR_RaceScene_StateSaveGhost_0031c7f0;
      uStack_20._0_4_ = (undefined4)DAT_0031c7e8;
      uStack_20._4_4_ = (undefined4)((ulong)DAT_0031c7e8 >> 0x20);
      *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_20;
      *(undefined4 *)(iVar5 + 0xc) = uStack_20._4_4_;
      *(undefined **)(iVar5 + 0x10) = puVar2;
      uStack_20 = uVar3;
      lVar4 = __ptmf_test(&uStack_20);
      if (lVar4 != 0) {
        __ptmf_scall(param_1);
      }
    }
  }
  else {
    *_g_RaceScene = uVar1 & 0xfffffffe;
    puVar2 = PTR_RaceScene_StateSaveReplay_0031c7e0;
    uStack_10 = DAT_0031c7d8;
    uVar3 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c7d8;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c7d8 >> 0x20);
    puStack_8 = PTR_RaceScene_StateSaveReplay_0031c7e0;
    *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar5 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar5 + 0x10) = puVar2;
    uStack_10 = uVar3;
    lVar4 = __ptmf_test(&uStack_10);
    if (lVar4 != 0) {
      __ptmf_scall(param_1);
    }
  }
  if ((*_g_RaceScene & 0x40000) != 0) {
    _g_RaceScene[0xc] = _g_RaceScene[0xc] | 0x10000;
  }
  if ((*_g_RaceScene & 0x80000) != 0) {
    _g_RaceScene[0xc] = _g_RaceScene[0xc] & 0xfffeffff;
  }
  if ((*_g_RaceScene & 0x400) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xfffffbff;
    _g_RaceScene[0xc] = _g_RaceScene[0xc] | 8;
  }
  if ((*_g_RaceScene & 0x800) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xfffff7ff;
    _g_RaceScene[0xc] = _g_RaceScene[0xc] & 0xfffffff7;
  }
  if ((*_g_RaceScene & 0x40) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xffffffbf;
    puVar2 = PTR_RaceScene_StateOptions_0031c830;
    uStack_60 = DAT_0031c828;
    uVar3 = uStack_60;
    uStack_60._0_4_ = (undefined4)DAT_0031c828;
    uStack_60._4_4_ = (undefined4)((ulong)DAT_0031c828 >> 0x20);
    puStack_58 = PTR_RaceScene_StateOptions_0031c830;
    *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_60;
    *(undefined4 *)(iVar5 + 0xc) = uStack_60._4_4_;
    *(undefined **)(iVar5 + 0x10) = puVar2;
    uStack_60 = uVar3;
    lVar4 = __ptmf_test(&uStack_60);
    if (lVar4 != 0) {
      __ptmf_scall(param_1);
    }
  }
  if ((*_g_RaceScene & 0x80) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xffffff7f;
    puVar2 = PTR_RaceScene_StatePause_0031c840;
    uStack_70 = DAT_0031c838;
    uVar3 = uStack_70;
    uStack_70._0_4_ = (undefined4)DAT_0031c838;
    uStack_70._4_4_ = (undefined4)((ulong)DAT_0031c838 >> 0x20);
    puStack_68 = PTR_RaceScene_StatePause_0031c840;
    *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_70;
    *(undefined4 *)(iVar5 + 0xc) = uStack_70._4_4_;
    *(undefined **)(iVar5 + 0x10) = puVar2;
    uStack_70 = uVar3;
    lVar4 = __ptmf_test(&uStack_70);
    if (lVar4 != 0) {
      __ptmf_scall(param_1);
    }
  }
  if ((*_g_RaceScene & 0x100) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xfffffeff;
    _g_RaceScene[0xc] = _g_RaceScene[0xc] | 0x100;
  }
  if ((*_g_RaceScene & 0x200) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xfffffdff;
    _g_RaceScene[0xc] = _g_RaceScene[0xc] & 0xfffffeff;
  }
  if ((*_g_RaceScene & 0x4000) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xffffbfff;
    _g_RaceScene[0xc] = _g_RaceScene[0xc] | 0x400;
  }
  if ((*_g_RaceScene & 0x8000) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xffff7fff;
    _g_RaceScene[0xc] = _g_RaceScene[0xc] & 0xfffffbff;
  }
  if ((*_g_RaceScene & 0x1000) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xffffefff;
    _g_RaceScene[0xc] = _g_RaceScene[0xc] | 0x800;
  }
  if ((*_g_RaceScene & 0x2000) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xffffdfff;
    _g_RaceScene[0xc] = _g_RaceScene[0xc] & 0xfffff7ff;
  }
  if ((*_g_RaceScene & 0x10000) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xfffeffff;
    _g_RaceScene[0xc] = _g_RaceScene[0xc] | 0x1000;
  }
  if ((*_g_RaceScene & 0x20000) != 0) {
    *_g_RaceScene = *_g_RaceScene & 0xfffdffff;
    _g_RaceScene[0xc] = _g_RaceScene[0xc] & 0xffffefff;
  }
  if (((*_g_RaceScene & 0x20) != 0) &&
     (*_g_RaceScene = *_g_RaceScene & 0xffffffdf, puVar2 = PTR_RaceScene_StateOptions_0031c850,
     (_g_RaceScene[0xc] & 0x100) == 0)) {
    uStack_80 = DAT_0031c848;
    uVar3 = uStack_80;
    uStack_80._0_4_ = (undefined4)DAT_0031c848;
    uStack_80._4_4_ = (undefined4)((ulong)DAT_0031c848 >> 0x20);
    puStack_78 = PTR_RaceScene_StateOptions_0031c850;
    *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_80;
    *(undefined4 *)(iVar5 + 0xc) = uStack_80._4_4_;
    *(undefined **)(iVar5 + 0x10) = puVar2;
    uStack_80 = uVar3;
    lVar4 = __ptmf_test(&uStack_80);
    if (lVar4 != 0) {
      __ptmf_scall(param_1);
    }
  }
  *_g_RaceScene = 0;
  return;
}

// 0x001e9740  size 0x184
void maybe_RaceTask_SetupControls(int *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  uVar5 = 0;
  do {
    if (uVar5 == (uRam0036f0cc & 1)) {
      Ffb_PlayCollision(uVar5);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  iVar9 = 1;
  cVar1 = RaceCtx_GetMode();
  if (cVar1 == '\x04') {
    iVar9 = 2;
  }
  iVar8 = 0;
  if (iVar9 != 0) {
    piVar7 = param_1;
    do {
      lVar3 = Wheel_GetDeviceName(iVar8);
      if ((lVar3 == 0) || (lVar3 = (**(code **)(*(int *)((int)lVar3 + 4) + 8))(lVar3), lVar3 == 0))
      {
        *piVar7 = 0;
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar8 < iVar9);
  }
  iVar8 = 0;
  if (iVar9 != 0) {
    iVar6 = 0;
    piVar7 = param_1;
    do {
      lVar3 = Wheel_GetDeviceName(iVar8);
      if (((lVar3 != 0) && (*piVar7 == 0)) && (lVar4 = Wheel_IsActive(lVar3), lVar4 == 0)) {
        iVar2 = maybe_Options_GetLanguage();
        Controls_SetDefaults(iVar2 + iVar6 + 0x28,lVar3);
        *piVar7 = 1;
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 1;
      iVar6 = iVar6 + 0xe8;
    } while (iVar8 < iVar9);
  }
  RaceScene_StateMachine(param_1);
  return;
}

// 0x001e98d0  size 0xac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StatePause(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(_g_RaceScene + 0x30);
  if ((*(uint *)(_g_RaceScene + 0x30) & 0x80) == 0) {
    *puVar3 = *(uint *)(_g_RaceScene + 0x30) | 0x80;
    Scene_SetParam(5);
    puVar2 = PTR_RaceScene_StateMachine_0031c7d0;
    uVar1 = DAT_0031c7cc;
    *(undefined4 *)(param_1 + 8) = DAT_0031c7c8;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined **)(param_1 + 0x10) = puVar2;
  }
  else {
    *puVar3 = *puVar3 & 0xffffff7f;
    Scene_SetParam(0);
    puVar2 = PTR_RaceScene_Tick_0031c7c0;
    uVar1 = DAT_0031c7bc;
    *(undefined4 *)(param_1 + 8) = DAT_0031c7b8;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined **)(param_1 + 0x10) = puVar2;
  }
  return;
}

// 0x001e9980  size 0x268
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateOptions(undefined4 *param_1)

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
  iVar6 = maybe_Options_GetLanguage();
  cVar5 = RaceCtx_Get_8();
  if (cVar5 == '\r') {
    iVar11 = 2;
  }
  if (_g_RaceScene == (uint *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = (_g_RaceScene[0xc] & 0x40) != 0;
  }
  if (bVar2) {
    _g_RaceScene[0xc] = _g_RaceScene[0xc] & 0xfffdffbf;
    Scene_SetParam(0);
    iVar10 = 0;
    if (iVar11 != 0) {
      puVar9 = param_1;
      do {
        if (*(int *)(*(int *)(_g_AiDrivers + (char)iVar10 * 4) + 0x198) != 0) {
          Controls_ApplyMapping(iVar6 + 0x28);
          *puVar9 = 1;
        }
        iVar10 = iVar10 + 1;
        iVar6 = iVar6 + 0xe8;
        puVar9 = puVar9 + 1;
      } while (iVar10 < iVar11);
    }
    puVar4 = PTR_RaceScene_Tick_0031c7a0;
    uVar3 = DAT_0031c79c;
    param_1[2] = DAT_0031c798;
    param_1[3] = uVar3;
    param_1[4] = puVar4;
  }
  else {
    if ((*_g_RaceScene & 0x100000) == 0) {
      _g_RaceScene[0xc] = _g_RaceScene[0xc] | 0x40;
    }
    else {
      *_g_RaceScene = *_g_RaceScene & 0xffefffff;
      _g_RaceScene[0xc] = _g_RaceScene[0xc] | 0x20000;
      _g_RaceScene[0xc] = _g_RaceScene[0xc] | 0x40;
    }
    Scene_SetParam(1);
    iVar10 = 0;
    if (iVar11 != 0) {
      puVar9 = param_1;
      do {
        iVar1 = *(int *)(_g_AiDrivers + (char)iVar10 * 4);
        if (*(int *)(iVar1 + 0x198) != 0) {
          lVar7 = Wheel_IsActive();
          if (lVar7 == 0) {
            Controls_SetDefaults(iVar6 + 0x28,*(undefined4 *)(iVar1 + 0x198));
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
      if (uVar8 == (uRam0036f0cc & 1)) {
        Ffb_PlayCollision(uVar8);
      }
      puVar4 = PTR_maybe_RaceTask_SetupControls_0031c7b0;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateResult(undefined8 param_1)

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
  
  lVar7 = RaceScene_IsFlag10();
  if (lVar7 == 0) {
    *(int *)(_g_RaceScene + 0x3c) = *(int *)(_g_RaceScene + 0x38) + -1;
  }
  *(undefined4 *)(_g_RaceScene + 0x40) = 0;
  *(undefined4 *)(_g_RaceScene + 0x38) = 0;
  if (_g_RaceScene == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(_g_RaceScene + 0x30) & 0x40) != 0;
  }
  if (bVar1) {
    Scene_SetParam(0);
  }
  *(undefined4 *)(_g_RaceScene + 0x30) = 0;
  *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x10;
  lVar7 = GameState_Get_3ac8();
  if (lVar7 != -1) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x400;
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x2000;
  }
  RaceScene_CountFinished();
  cVar5 = GameState_Get_354_7050();
  if (cVar5 == '\0') {
    iVar6 = RaceProg_GetArray_28(0);
    GameState_Set_398(*(undefined4 *)(iVar6 + 4));
  }
  Race_CreateCars();
  puVar3 = PTR_RaceScene_StateFinish_0031c790;
  iVar6 = (int)param_1;
  if (lVar7 != -1) {
    GameState_FreeReplay();
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) & 0xfffff7ff;
    puVar3 = PTR_RaceScene_LoadGhost_0031c780;
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
    puStack_8 = PTR_RaceScene_StateFinish_0031c790;
    *(undefined4 *)(iVar6 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar6 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar6 + 0x10) = puVar3;
    uStack_10 = uVar4;
    lVar7 = __ptmf_test(&uStack_10);
    if (lVar7 != 0) {
      __ptmf_scall(param_1);
    }
  }
  Scene_SetParam(2);
  return;
}

// 0x001e9d90  size 0x134
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateRetry(void)

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
  
  uVar3 = GameState_Get_35c();
  GameState_Set_360(uVar3);
  cVar2 = RaceCtx_GetMode();
  if (((cVar2 == '\x02') || (cVar2 = RaceCtx_GetMode(), cVar2 == '\x03')) &&
     (uVar4 = GameState_Get_35c(), (uVar4 & 0x80000) != 0)) {
    iVar1 = *(int *)(_g_AiDrivers + 4);
    uVar3 = RaceProg_GetArray_40(1);
    Replay_GetHeader();
    uVar9 = 0;
    cVar2 = RaceCtx_GetMode();
    if (cVar2 == '\x03') {
      uVar9 = RaceProg_GetArray_34(1);
      uVar9 = SpGauge_GetValue(uVar9);
    }
    uVar5 = Replay_GetHeader();
    uVar6 = maybe_GameState_GetFlag();
    uVar3 = LapTime_GetBest(uVar3);
    uVar7 = RaceCtx_GetMode();
    uVar8 = RaceCtx_Get_8();
    RaceEntry_Create(uVar5,uVar6,iVar1 + 0x1d8,uVar3,uVar9,uVar7,uVar8,1);
  }
  Scene_RequestChange(3);
  return;
}

// 0x001e9ed0  size 0x74
void RaceScene_StateReplayMenu(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  RaceScene_CheckReplayData();
  puVar1 = PTR_RaceScene_StateFinish_0031c770;
  uStack_10 = DAT_0031c768;
  uVar2 = uStack_10;
  uStack_10._0_4_ = (undefined4)DAT_0031c768;
  uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c768 >> 0x20);
  puStack_8 = PTR_RaceScene_StateFinish_0031c770;
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 8) = (undefined4)uStack_10;
  *(undefined4 *)(iVar4 + 0xc) = uStack_10._4_4_;
  *(undefined **)(iVar4 + 0x10) = puVar1;
  uStack_10 = uVar2;
  lVar3 = __ptmf_test(&uStack_10);
  if (lVar3 != 0) {
    __ptmf_scall(param_1);
  }
  Scene_SetParam(2);
  return;
}

// 0x001e9f50  size 0x19c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateNextRace(undefined8 param_1)

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
  
  lVar5 = RaceScene_IsFlag10();
  if (lVar5 == 0) {
    *(int *)(_g_RaceScene + 0x3c) = *(int *)(_g_RaceScene + 0x38) + -1;
  }
  *(undefined4 *)(_g_RaceScene + 0x40) = 0;
  *(undefined4 *)(_g_RaceScene + 0x38) = 0;
  if (_g_RaceScene == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(_g_RaceScene + 0x30) & 0x40) != 0;
  }
  if (bVar1) {
    Scene_SetParam(0);
  }
  *(undefined4 *)(_g_RaceScene + 0x30) = 0;
  lVar5 = Race_AdvanceCheckpoint();
  puVar2 = PTR_RaceScene_StateRetry_0031c750;
  iVar7 = (int)param_1;
  if (lVar5 == 0) {
    uStack_10 = DAT_0031c748;
    uVar6 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c748;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c748 >> 0x20);
    puStack_8 = PTR_RaceScene_StateRetry_0031c750;
    *(undefined4 *)(iVar7 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar7 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar7 + 0x10) = puVar2;
    uStack_10 = uVar6;
    lVar5 = __ptmf_test(&uStack_10);
    if (lVar5 != 0) {
      __ptmf_scall(param_1);
    }
  }
  else {
    uVar6 = GameState_Get_35c();
    GameState_Set_360(uVar6);
    GameState_Set_35c(0);
    cVar3 = GameState_Get_354_7050();
    if (cVar3 == '\0') {
      iVar4 = GameState_Get_39c();
      iVar4 = iVar4 + 1500000;
      if (5000000 < iVar4) {
        iVar4 = 5000000;
      }
      GameState_Set_398(iVar4);
    }
    Race_CreateCars();
    puVar2 = PTR_RaceScene_LoadReplay_0031c760;
    uStack_20 = DAT_0031c758;
    uVar6 = uStack_20;
    uStack_20._0_4_ = (undefined4)DAT_0031c758;
    uStack_20._4_4_ = (undefined4)((ulong)DAT_0031c758 >> 0x20);
    puStack_18 = PTR_RaceScene_LoadReplay_0031c760;
    *(undefined4 *)(iVar7 + 8) = (undefined4)uStack_20;
    *(undefined4 *)(iVar7 + 0xc) = uStack_20._4_4_;
    *(undefined **)(iVar7 + 0x10) = puVar2;
    uStack_20 = uVar6;
    lVar5 = __ptmf_test(&uStack_20);
    if (lVar5 != 0) {
      __ptmf_scall(param_1);
    }
  }
  return;
}

// 0x001ea0f0  size 0x330
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateSaveGhost(undefined8 param_1)

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
  lVar7 = RaceScene_IsFlag10();
  if (lVar7 == 0) {
    *(int *)(_g_RaceScene + 0x3c) = *(int *)(_g_RaceScene + 0x38) + -1;
  }
  *(undefined4 *)(_g_RaceScene + 0x40) = 0;
  *(undefined4 *)(_g_RaceScene + 0x38) = 0;
  if (_g_RaceScene == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(uint *)(_g_RaceScene + 0x30) & 0x40) != 0;
  }
  if (bVar2) {
    Scene_SetParam(0);
  }
  *(undefined4 *)(_g_RaceScene + 0x30) = 0;
  uVar8 = GameState_Get_35c();
  GameState_Set_360(uVar8);
  GameState_Set_35c(0);
  uVar9 = GameState_Get_360();
  if ((uVar9 & 0x10) == 0) {
    RaceScene_CheckReplayData();
    lVar7 = GameState_Get_ec();
    if ((lVar7 != 0) &&
       ((cVar5 = RaceCtx_GetMode(), cVar5 == '\x02' || (cVar5 = RaceCtx_GetMode(), cVar5 == '\x03'))
       )) {
      uVar8 = Replay_GetHeader();
      uVar9 = GameState_Get_360();
      if ((uVar9 & 0x80000) != 0) {
        iVar14 = *(int *)(_g_AiDrivers + 4);
        uVar10 = RaceProg_GetArray_40(1);
        uVar17 = 0;
        cVar5 = RaceCtx_GetMode();
        if (cVar5 == '\x03') {
          uVar17 = RaceProg_GetArray_34(1);
          uVar17 = SpGauge_GetValue(uVar17);
        }
        uVar11 = maybe_GameState_GetFlag();
        uVar10 = LapTime_GetBest(uVar10);
        uVar12 = RaceCtx_GetMode();
        uVar13 = RaceCtx_Get_8();
        RaceEntry_Create(uVar8,uVar11,iVar14 + 0x1d8,uVar10,uVar17,uVar12,uVar13,1);
        bVar3 = true;
      }
      uVar10 = maybe_GameState_GetFlag();
      lVar7 = RaceEntry_Matches(uVar8,uVar10);
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
        PlayerRecord_Copy(1,auStack_e0);
        GameState_Set_e0(2);
        bVar3 = true;
      }
    }
  }
  cVar5 = GameState_Get_354_7050();
  if (cVar5 == '\0') {
    iVar14 = RaceProg_GetArray_28(0);
    GameState_Set_398(*(undefined4 *)(iVar14 + 4));
  }
  Race_CreateCars();
  if (bVar3) {
    iVar14 = *(int *)(_g_AiDrivers + 4);
    iVar6 = Replay_GetHeader();
    memcpy(iVar14 + 0x1d8,iVar6 + 0x40c,0x69784);
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x1000;
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x2000;
  }
  puVar4 = PTR_RaceScene_StateFinish_0031c740;
  uStack_10 = DAT_0031c738;
  uVar8 = uStack_10;
  uStack_10._0_4_ = (undefined4)DAT_0031c738;
  uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c738 >> 0x20);
  puStack_8 = PTR_RaceScene_StateFinish_0031c740;
  iVar14 = (int)param_1;
  *(undefined4 *)(iVar14 + 8) = (undefined4)uStack_10;
  *(undefined4 *)(iVar14 + 0xc) = uStack_10._4_4_;
  *(undefined **)(iVar14 + 0x10) = puVar4;
  uStack_10 = uVar8;
  lVar7 = __ptmf_test(&uStack_10);
  if (lVar7 != 0) {
    __ptmf_scall(param_1);
  }
  Scene_SetParam(2);
  return;
}

// 0x001ea420  size 0xc4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateLoadGhost(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  RaceScene_CheckReplayData();
  *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x10;
  iVar5 = *_g_AiDrivers;
  piVar3 = (int *)maybe_Replay_GetSize();
  memcpy(iVar5 + 0x1d8,*piVar3 + 0x40c,0x69784);
  *(undefined4 *)(_g_RaceScene + 0x3c) = *(undefined4 *)(*piVar3 + 0x40c);
  puVar1 = PTR_RaceScene_StateFinish_0031c730;
  uStack_10 = DAT_0031c728;
  uVar2 = uStack_10;
  puStack_8 = PTR_RaceScene_StateFinish_0031c730;
  uStack_10._0_4_ = (undefined4)DAT_0031c728;
  uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c728 >> 0x20);
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 8) = (undefined4)uStack_10;
  *(undefined4 *)(iVar5 + 0xc) = uStack_10._4_4_;
  *(undefined **)(iVar5 + 0x10) = puVar1;
  uStack_10 = uVar2;
  lVar4 = __ptmf_test(&uStack_10);
  if (lVar4 != 0) {
    __ptmf_scall(param_1);
  }
  return;
}

// 0x001ea4f0  size 0xf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateSaveReplay(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  RaceScene_CheckReplayData();
  lVar3 = GameState_Get_ec();
  if ((lVar3 != 0) &&
     ((cVar2 = RaceCtx_GetMode(), cVar2 == '\x02' || (cVar2 = RaceCtx_GetMode(), cVar2 == '\x03'))))
  {
    uVar4 = Replay_GetHeader();
    uVar5 = maybe_GameState_GetFlag();
    lVar3 = RaceEntry_SetName(uVar4,uVar5);
    if (lVar3 != 0) {
      *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x1000;
    }
  }
  puVar1 = PTR_RaceScene_StateFinish_0031c720;
  uStack_10 = DAT_0031c718;
  uVar4 = uStack_10;
  uStack_10._0_4_ = (undefined4)DAT_0031c718;
  uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c718 >> 0x20);
  puStack_8 = PTR_RaceScene_StateFinish_0031c720;
  iVar6 = (int)param_1;
  *(undefined4 *)(iVar6 + 8) = (undefined4)uStack_10;
  *(undefined4 *)(iVar6 + 0xc) = uStack_10._4_4_;
  *(undefined **)(iVar6 + 0x10) = puVar1;
  uStack_10 = uVar4;
  lVar3 = __ptmf_test(&uStack_10);
  if (lVar3 != 0) {
    __ptmf_scall(param_1);
  }
  return;
}

// 0x001ea5e0  size 0xf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 RaceScene_CountFinished(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = RaceCtx_Get_8();
  if (cVar1 != '\r') {
    lVar2 = GameState_GetTotalCarCount();
    if ((lVar2 == 1) && (lVar2 = GameState_GetPlayerCount(), lVar2 == 1)) {
      if (*(int *)(*_g_AiDrivers + 0x1d8) == 0) {
        return 0;
      }
      *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x1000;
      *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x2000;
      return 1;
    }
    lVar2 = GameState_GetTotalCarCount();
    if ((lVar2 == 2) && (lVar2 = GameState_GetPlayerCount(), lVar2 == 2)) {
      uVar3 = 1;
      *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x1000;
      *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x2000;
    }
  }
  return uVar3;
}

// 0x001ea6d0  size 0x188
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceScene_CheckReplayData(void)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  cVar1 = GameState_Get_354();
  if (((((cVar1 == '\a') || (cVar1 == '\x03')) || (cVar1 == '\x02')) || (cVar1 == '\x01')) &&
     (lVar2 = GameState_Get_48(), 0 < lVar2)) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x2000;
  }
  lVar2 = GameState_Get_3acc();
  if (lVar2 != 0) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x2000;
    lVar2 = GameState_Get_3ad0();
    if (lVar2 == 0) {
      lVar2 = GameState_GetReplayValue();
      if (lVar2 != 0) {
        uVar3 = 1;
        *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x400;
        *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x2000;
      }
    }
    else {
      lVar2 = GameState_GetGhostValue();
      if (lVar2 == 0) {
        lVar2 = GameState_GetReplayValue();
        if (lVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
          *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x400;
          *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x2000;
        }
      }
      else {
        uVar3 = 1;
        *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x400;
        *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x2000;
      }
    }
  }
  lVar2 = GameState_Get_3ad0();
  if (lVar2 != 0) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x800;
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x2000;
  }
  return uVar3;
}

// 0x001ea860  size 0x94
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateWaitSound(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((((*(uint *)(_g_RaceScene + 0x30) & 2) != 0) && (lVar3 = SndMgr_IsIdle(), lVar3 != 0)) &&
     (lVar3 = maybe_RaceHud_IsBusy(), lVar3 == 0)) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 1;
    puVar2 = PTR_RaceScene_Tick_0031c710;
    uVar1 = DAT_0031c70c;
    *(undefined4 *)(param_1 + 8) = DAT_0031c708;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined **)(param_1 + 0x10) = puVar2;
  }
  return;
}

// 0x001ea900  size 0x8c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateEnterA(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  puVar1 = PTR_RaceScene_StateReplayMenu_0031c700;
  if ((*(uint *)(_g_RaceScene + 0x30) & 0x4000) != 0) {
    uStack_10 = DAT_0031c6f8;
    uVar2 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c6f8;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c6f8 >> 0x20);
    puStack_8 = PTR_RaceScene_StateReplayMenu_0031c700;
    iVar4 = (int)param_1;
    *(undefined4 *)(iVar4 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar4 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar4 + 0x10) = puVar1;
    uStack_10 = uVar2;
    lVar3 = __ptmf_test(&uStack_10);
    if (lVar3 != 0) {
      __ptmf_scall(param_1);
    }
  }
  return;
}

// 0x001ea990  size 0xe8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_LoadReplay(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = GameState_Get_3ac8();
  if (lVar3 == -1) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x4000;
  }
  else {
    lVar3 = GameState_Get_3acc();
    if (lVar3 != 0) {
      GameState_FreeReplay();
    }
    uVar4 = GameState_Get_3ac8();
    uVar5 = Mem_AllocAligned(0xc3050,0x40,0x430750);
    Arc_LoadFileEx(uVar4,uVar5,0x1eadd0,0,0,0);
    GameState_Set_3acc(uVar5);
  }
  puVar2 = PTR_RaceScene_StateEnterA_0031c6f0;
  uVar1 = DAT_0031c6ec;
  *(undefined4 *)(param_1 + 8) = DAT_0031c6e8;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}

// 0x001eaa80  size 0x8c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateEnterB(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  puVar1 = PTR_RaceScene_StateFinish_0031c6e0;
  if ((*(uint *)(_g_RaceScene + 0x30) & 0x4000) != 0) {
    uStack_10 = DAT_0031c6d8;
    uVar2 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c6d8;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c6d8 >> 0x20);
    puStack_8 = PTR_RaceScene_StateFinish_0031c6e0;
    iVar4 = (int)param_1;
    *(undefined4 *)(iVar4 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar4 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar4 + 0x10) = puVar1;
    uStack_10 = uVar2;
    lVar3 = __ptmf_test(&uStack_10);
    if (lVar3 != 0) {
      __ptmf_scall(param_1);
    }
  }
  return;
}

// 0x001eab10  size 0xf4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateCountdown(undefined8 param_1)

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
  
  if ((*(uint *)(_g_RaceScene + 0x30) & 0x4000) != 0) {
    cVar4 = RaceCtx_GetMode();
    puVar2 = PTR_RaceScene_StateSaveReplay_0031c6d0;
    puVar1 = PTR_RaceScene_StateLoadGhost_0031c6c0;
    iVar6 = (int)param_1;
    if (cVar4 == '\x05') {
      uStack_10 = DAT_0031c6b8;
      uVar3 = uStack_10;
      uStack_10._0_4_ = (undefined4)DAT_0031c6b8;
      uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c6b8 >> 0x20);
      puStack_8 = PTR_RaceScene_StateLoadGhost_0031c6c0;
      *(undefined4 *)(iVar6 + 8) = (undefined4)uStack_10;
      *(undefined4 *)(iVar6 + 0xc) = uStack_10._4_4_;
      *(undefined **)(iVar6 + 0x10) = puVar1;
      uStack_10 = uVar3;
      lVar5 = __ptmf_test(&uStack_10);
      if (lVar5 != 0) {
        __ptmf_scall(param_1);
      }
    }
    else {
      uStack_20 = DAT_0031c6c8;
      uVar3 = uStack_20;
      uStack_20._0_4_ = (undefined4)DAT_0031c6c8;
      uStack_20._4_4_ = (undefined4)((ulong)DAT_0031c6c8 >> 0x20);
      puStack_18 = PTR_RaceScene_StateSaveReplay_0031c6d0;
      *(undefined4 *)(iVar6 + 8) = (undefined4)uStack_20;
      *(undefined4 *)(iVar6 + 0xc) = uStack_20._4_4_;
      *(undefined **)(iVar6 + 0x10) = puVar2;
      uStack_20 = uVar3;
      lVar5 = __ptmf_test(&uStack_20);
      if (lVar5 != 0) {
        __ptmf_scall(param_1);
      }
    }
  }
  return;
}

// 0x001eac10  size 0xd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_LoadGhost(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = GameState_Get_3ac8();
  if (lVar3 == -1) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x4000;
  }
  else {
    uVar4 = GameState_Get_3ac8();
    uVar5 = Mem_AllocAligned(0xc3050,0x40,0x430750);
    Arc_LoadFileEx(uVar4,uVar5,0x1eadd0,0,0,0);
    GameState_Set_3acc(uVar5);
  }
  puVar2 = PTR_RaceScene_StateEnterB_0031c6b0;
  uVar1 = DAT_0031c6ac;
  *(undefined4 *)(param_1 + 8) = DAT_0031c6a8;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}

// 0x001eace0  size 0xe8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_ReloadReplay(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = GameState_Get_3ac8();
  if (lVar3 == -1) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x4000;
  }
  else {
    lVar3 = GameState_Get_3acc();
    if (lVar3 != 0) {
      GameState_FreeReplay();
    }
    uVar4 = GameState_Get_3ac8();
    uVar5 = Mem_AllocAligned(0xc3050,0x40,0x430750);
    Arc_LoadFileEx(uVar4,uVar5,0x1eadd0,0,0,0);
    GameState_Set_3acc(uVar5);
  }
  puVar2 = PTR_RaceScene_StateCountdown_0031c6a0;
  uVar1 = DAT_0031c69c;
  *(undefined4 *)(param_1 + 8) = DAT_0031c698;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}

// 0x001eadd0  size 0xe8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StartReplay(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = GameState_Get_354_7050();
  if (((((cVar1 == '\x02') || (cVar1 = GameState_Get_354_7050(), cVar1 == '\x01')) ||
       (cVar1 = GameState_Get_354_7050(), cVar1 == '\x03')) ||
      (cVar1 = GameState_Get_354_7050(), cVar1 == '\x06')) &&
     (((cVar1 = GameState_Get_354_7050(), cVar1 == '\x02' ||
       (cVar1 = GameState_Get_354_7050(), cVar1 == '\x03')) ||
      (cVar1 = GameState_Get_354_7050(), cVar1 == '\x06')))) {
    iVar2 = GameState_Get_3acc();
    GameState_Set_364(*(undefined4 *)(iVar2 + 4));
  }
  *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x4000;
  return;
}

// 0x001eaec0  size 0x58
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_ApplyDifficulty(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  Ai_SetupDifficulty();
  *(uint *)(_g_RaceScene + 0x34) = *(uint *)(_g_RaceScene + 0x34) | 0x8000;
  puVar2 = PTR_RaceScene_StateWaitSound_0031c690;
  uVar1 = DAT_0031c68c;
  *(undefined4 *)(param_1 + 8) = DAT_0031c688;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}

// 0x001eaf20  size 0xa4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateFinish(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_10;
  undefined *puStack_8;
  
  if ((*(uint *)(_g_RaceScene + 0x30) & 4) != 0) {
    GameState_SetupStartGrid();
    GameState_UpdateTimestamp();
    GameState_ApplyGarage();
    puVar1 = PTR_RaceScene_ApplyDifficulty_0031c680;
    uStack_10 = DAT_0031c678;
    uVar2 = uStack_10;
    uStack_10._0_4_ = (undefined4)DAT_0031c678;
    uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c678 >> 0x20);
    puStack_8 = PTR_RaceScene_ApplyDifficulty_0031c680;
    iVar4 = (int)param_1;
    *(undefined4 *)(iVar4 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(iVar4 + 0xc) = uStack_10._4_4_;
    *(undefined **)(iVar4 + 0x10) = puVar1;
    uStack_10 = uVar2;
    lVar3 = __ptmf_test(&uStack_10);
    if (lVar3 != 0) {
      __ptmf_scall(param_1);
    }
  }
  return;
}

// 0x001eafd0  size 0x150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_CheckRules(void)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  if ('\0' < *(char *)(_g_RaceScene + 0x2c)) {
    iVar3 = 0;
    do {
      uVar1 = *(uint *)(_g_RaceScene + iVar3 + 4);
      uVar2 = (undefined1)lVar4;
      if ((uVar1 & 0x80) == 0) {
        if ((uVar1 & 0x100) == 0) {
          if ((uVar1 & 0x1000) == 0) {
            if ((uVar1 & 0x200) == 0) {
              if ((uVar1 & 0x400) == 0) {
                if ((uVar1 & 0x800) == 0) {
                  if ((uVar1 & 0x2000) != 0) {
                    RaceRule_CheckSprint(uVar2);
                  }
                }
                else {
                  RaceRule_CheckTimeAttack(uVar2);
                }
              }
              else {
                RaceRule_CheckBattle(uVar2);
              }
            }
            else {
              RaceRule_CheckSpBattle(uVar2);
            }
          }
          else {
            RaceRule_CheckTeamBattle(uVar2);
          }
        }
        else {
          RaceRule_CheckDrift(uVar2);
        }
      }
      else {
        RaceRule_CheckFreeRun(uVar2);
      }
      lVar4 = (long)((int)lVar4 + 1);
      *(undefined4 *)(_g_RaceScene + iVar3 + 4) = 0;
      iVar3 = iVar3 + 4;
    } while (lVar4 < *(char *)(_g_RaceScene + 0x2c));
  }
  *(undefined1 *)(_g_RaceScene + 0x2c) = 0;
  return;
}

// 0x001eb140  size 0x40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool RaceScene_GetMode(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(_g_RaceScene + 0x2c);
  if (cVar1 < '\n') {
    *(undefined4 *)(cVar1 * 4 + _g_RaceScene + 4) = param_1;
    *(char *)(_g_RaceScene + 0x2c) = *(char *)(_g_RaceScene + 0x2c) + '\x01';
  }
  return cVar1 < '\n';
}

// 0x001eb180  size 0x54
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_Tick(void)

{
  RaceScene_StateMachine();
  *(int *)(_g_RaceScene + 0x40) = *(int *)(_g_RaceScene + 0x40) + 1;
  if ((*(uint *)(_g_RaceScene + 0x30) & 8) != 0) {
    *(int *)(_g_RaceScene + 0x38) = *(int *)(_g_RaceScene + 0x38) + 1;
  }
  return;
}

// 0x001eb1e0  size 0xc4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_StateRacing(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((*(uint *)(_g_RaceScene + 0x34) & 2) != 0) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 2;
  }
  if ((*(uint *)(_g_RaceScene + 0x34) & 4) != 0) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 4;
  }
  if ((*(uint *)(_g_RaceScene + 0x34) & 0x8000) != 0) {
    *(uint *)(_g_RaceScene + 0x30) = *(uint *)(_g_RaceScene + 0x30) | 0x8000;
  }
  if ((*(uint *)(_g_RaceScene + 0x34) & 0x20) != 0) {
    *(undefined4 *)(_g_RaceScene + 0x30) = 0;
  }
  *(undefined4 *)(_g_RaceScene + 0x34) = 0;
  RaceScene_CheckRules();
  lVar2 = __ptmf_test(iVar1 + 8);
  if (lVar2 != 0) {
    __ptmf_scall(iVar1);
  }
  return;
}

// 0x001eb2b0  size 0x30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_Free(void)

{
  GameState_FreeReplay();
  GameState_FreeGhost();
  Mem_Free(_g_RaceScene);
  _g_RaceScene = 0;
  return;
}

// 0x001eb2e0  size 0x140
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceScene_Alloc(int param_1)

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
  uVar3 = Mem_Alloc16(0x44,0x430750);
  _g_RaceScene = (undefined4 *)uVar3;
  Mem_Set16(uVar3,0,0x44);
  iVar6 = 0;
  iVar5 = 0;
  *_g_RaceScene = 0;
  do {
    iVar6 = iVar6 + 5;
    *(undefined4 *)((int)_g_RaceScene + iVar5 + 4) = 0;
    *(undefined4 *)((int)_g_RaceScene + iVar5 + 8) = 0;
    *(undefined4 *)((int)_g_RaceScene + iVar5 + 0xc) = 0;
    *(undefined4 *)((int)_g_RaceScene + iVar5 + 0x10) = 0;
    *(undefined4 *)((int)_g_RaceScene + iVar5 + 0x14) = 0;
    iVar5 = iVar5 + 0x14;
  } while (iVar6 < 10);
  *(undefined1 *)(_g_RaceScene + 0xb) = 0;
  _g_RaceScene[0xc] = 0;
  _g_RaceScene[0xd] = 0;
  _g_RaceScene[0x10] = 0;
  _g_RaceScene[0xe] = 0;
  _g_RaceScene[0xf] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_RaceScene_ReloadReplay_0031c670;
  uStack_10 = DAT_0031c668;
  uVar3 = uStack_10;
  puStack_8 = PTR_RaceScene_ReloadReplay_0031c670;
  uStack_10._0_4_ = (undefined4)DAT_0031c668;
  uStack_10._4_4_ = (undefined4)((ulong)DAT_0031c668 >> 0x20);
  puVar1[2] = (undefined4)uStack_10;
  puVar1[3] = uStack_10._4_4_;
  puVar1[4] = puVar2;
  uStack_10 = uVar3;
  lVar4 = __ptmf_test(&uStack_10);
  if (lVar4 != 0) {
    __ptmf_scall(puVar1);
  }
  *(code **)(param_1 + 0x1c) = RaceScene_StateRacing;
  return;
}

// 0x001eb420  size 0x128
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Race_CreateCars(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  RaceCar_FreeAll();
  RaceCar_CreateAll(0x430750);
  uVar3 = RaceProg_Get_10();
  uVar4 = RaceRule_Get_14();
  RaceRule_Free();
  uVar2 = GameState_GetRacerCount();
  uVar5 = Race_GetModeFlags();
  uVar6 = GameState_Get_398();
  RaceRule_Alloc(uVar2,uVar5,0x430750,uVar6);
  RaceProg_Set_10(uVar3);
  RaceRule_Set_14(uVar4);
  Driver_CreatePlayers(0x430750);
  Traffic_Reset(uRam0036f36c);
  uRam0036f25c = uRam0036f25c | 0x20;
  *_g_Loading = *_g_Loading | 2;
  cVar1 = RaceCtx_Get_8();
  if ((cVar1 == '\r') && (lVar7 = RaceScene_IsFlag10(), lVar7 == 0)) {
    _s_RaceIsReplayMode = 1;
  }
  else {
    _s_RaceIsReplayMode = 0;
  }
  if (*(int *)(iRam0036f3b0 + 0xc) != 0) {
    Race_LoadCourse(*(undefined4 *)(*(int *)(iRam0036f3b0 + 0xc) + 0x14),1);
  }
  return;
}

// 0x001eb550  size 0x394
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceIntro_DrawCars(undefined8 param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  ushort *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
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
  
  iVar11 = (int)param_1;
  puVar9 = &g_Views + (*(uint *)(iVar11 + 8) & 0xff) * 0x5c0;
  if (param_3 != 0) {
    return;
  }
  if (*(uint *)(iVar11 + 8) == 3) {
    return;
  }
  maybe_IntroFlag_DrawAll(param_1,*(undefined4 *)(param_2 + 0x58));
  Layer_Reset(auStack_240,puVar9,0x436180,*(undefined4 *)(iVar11 + 0xc),
              *(undefined4 *)(iVar11 + 0x10));
  if (param_4 != 0) {
    uStack_1a0 = (undefined4)param_4;
  }
  Layer_Open(auStack_240,0);
  Layer_Open(auStack_240,1);
  if (*(int *)(param_2 + 0x10) == 0) goto LAB_001eb6d0;
  if (*(int *)(param_2 + 0x34) < 0) {
LAB_001eb620:
    iVar11 = *(int *)(param_2 + 0x38);
  }
  else {
    puVar8 = (ushort *)(*(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x34) * 0x10);
    puVar5 = (undefined4 *)
             (*(int *)(*(int *)(_g_RoadData + 4) + (uint)*puVar8 * 4) + 0x7c +
             *(int *)(puVar8 + 2) * 0x20);
    uStack_250 = *puVar5;
    uStack_24c = puVar5[1];
    uStack_248 = puVar5[2];
    uStack_244 = 0x3f800000;
    lVar3 = Course_GetGroundHeight(puVar9,&uStack_250);
    if (lVar3 == 0) goto LAB_001eb620;
    uVar4 = Gut_PackGetEntry(*(undefined4 *)(param_2 + 8),
                             *(undefined4 *)
                              (*(int *)(param_2 + 0x34) * 0x10 + *(int *)(param_2 + 0x18) + 0xc),0);
    uVar4 = Model_GetTexture(uVar4,0);
    Model_UpdateNodeMatrix(auStack_240,uVar4);
    iVar11 = *(int *)(param_2 + 0x38);
  }
  if (-1 < iVar11) {
    puVar8 = (ushort *)(*(int *)(param_2 + 0x20) + iVar11 * 0x10);
    puVar5 = (undefined4 *)
             (*(int *)(*(int *)(_g_RoadData + 4) + (uint)*puVar8 * 4) + 0x7c +
             *(int *)(puVar8 + 2) * 0x20);
    uStack_260 = *puVar5;
    uStack_25c = puVar5[1];
    uStack_258 = puVar5[2];
    uStack_254 = 0x3f800000;
    lVar3 = Course_GetGroundHeight(puVar9,&uStack_260);
    if (lVar3 != 0) {
      uVar4 = Gut_PackGetEntry(*(undefined4 *)(param_2 + 8),
                               *(undefined4 *)
                                (*(int *)(param_2 + 0x38) * 0x10 + *(int *)(param_2 + 0x20) + 0xc),0
                              );
      uVar4 = Model_GetTexture(uVar4,0);
      Model_UpdateNodeMatrix(auStack_240,uVar4);
    }
  }
LAB_001eb6d0:
  if ((((*(int *)(param_2 + 0x10) != 0) && (-1 < *(int *)(param_2 + 0x34))) &&
      (-1 < *(int *)(param_2 + 0x38))) &&
     ((lVar3 = RaceProg_IsFinished(), lVar3 != 0 && (iVar11 = 0, 0 < *(int *)(param_2 + 0x24))))) {
    iVar10 = 0;
    do {
      piVar6 = (int *)(*(int *)(param_2 + 0x28) + iVar10);
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
        uVar4 = Gut_PackGetEntry(*(undefined4 *)(param_2 + 8),piVar6[4],0);
        uVar4 = Model_GetTexture(uVar4,0);
        Model_UpdateNodeMatrix(auStack_240,uVar4);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x14;
    } while (iVar11 < *(int *)(param_2 + 0x24));
  }
  Layer_Close(auStack_240,0);
  Layer_Close(auStack_240,1);
  return;
}

// 0x001eb900  size 0x13c
void RaceIntro_SetupColliders(int param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x10) == 0) || (lVar2 = RaceScene_IsRunning(), lVar2 == 0)) ||
     (*(int *)(param_1 + 0x54) != 0)) goto LAB_001eba24;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x34) * 0x10 + *(int *)(param_1 + 0x18) + 8);
  if ((*(uint *)(param_1 + 0x4c) == uVar1) || (*(uint *)(param_1 + 0x50) == uVar1)) {
LAB_001eb9a8:
    iVar3 = *(int *)(param_1 + 0x38);
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x38) * 0x10 + *(int *)(param_1 + 0x20) + 8) <= (int)uVar1) {
      RaceWorld_BuildColliders((uVar1 & 0x7fff) << 1,1);
      goto LAB_001eb9a8;
    }
    RaceWorld_BuildColliders(uVar1 * 2 - 1 & 0xffff,1);
    iVar3 = *(int *)(param_1 + 0x38);
  }
  uVar1 = *(uint *)(iVar3 * 0x10 + *(int *)(param_1 + 0x20) + 8);
  if ((*(uint *)(param_1 + 0x4c) != uVar1) && (*(uint *)(param_1 + 0x50) != uVar1)) {
    if ((int)uVar1 < *(int *)(*(int *)(param_1 + 0x34) * 0x10 + *(int *)(param_1 + 0x18) + 8)) {
      RaceWorld_BuildColliders(uVar1 * 2 - 1 & 0xffff,1);
    }
    else {
      RaceWorld_BuildColliders((uVar1 & 0x7fff) << 1,1);
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 1;
LAB_001eba24:
  maybe_IntroFlag_Step();
  return;
}

// 0x001eba40  size 0x5ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceIntro_LoadAssets(undefined8 param_1)

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
  auStack_8[0] = _s_RaceIsReplayMode != 0;
  cVar1 = GameState_Get_3();
  if (cVar1 == '\x01') {
    uStack_4 = 1;
  }
  else {
    uStack_4 = 0xffffffff;
  }
  iVar4 = maybe_Race_DebugState();
  iVar5 = Course_GetCurrentId();
  uVar6 = CourseScene_Load(0x430750,(&PTR_DAT_0031c880)[iVar4 * 3],(&PTR_DAT_0031c884)[iVar5 * 3],
                           auStack_8,0x1eb8f0,param_1,0x1eb550,param_1);
  *(undefined4 *)(iVar13 + 4) = uVar6;
  bVar2 = GameState_Get_0();
  if (bVar2 < 8) {
    cVar1 = RaceCtx_Get_8();
    if ((cVar1 == '\x03') || (cVar1 = RaceCtx_Get_8(), cVar1 == '\x04')) {
      uVar3 = GameState_Get_3dc();
    }
    else {
      uVar3 = 0x26;
    }
    uVar9 = GameState_Get_0();
    uVar10 = GameState_Get_2();
    uVar11 = GameState_Get_3();
    IntroFlag_Load(0x430750,uVar3,uVar9,uVar10,uVar11);
  }
  SceneObj_SetGlobalFlags(uRam004305f4);
  iVar4 = *(int *)(iVar13 + 4) + iRam0036f2c0;
  maybe_Font_UploadTexture(iVar4,iVar4);
  iVar4 = *(int *)(iVar13 + 4) + iRam0036f2c0;
  UiRes_UploadFonts(iVar4,iVar4);
  iVar4 = *(int *)(iVar13 + 4) + iRam0036f2c0;
  UiMgr_SetActive(iVar4,iVar4);
  iVar4 = *(int *)(iVar13 + 4) + iRam0036f2c0;
  UiMgr_RebindTextures(iVar4,iVar4);
  iVar4 = *(int *)(iVar13 + 4) + iRam0036f2c0;
  maybe_RaceHud_UploadTextures(iVar4,iVar4);
  iRam0046a020 = *(int *)(iVar13 + 4) + iRam0036f2c0;
  iRam0046a024 = iRam0046a020;
  iVar4 = Course_GetCurrentId();
  *(undefined **)(iVar13 + 0x10) = (&PTR_DAT_00326710)[iVar4];
  if (*(int *)(iVar13 + 0x10) != 0) {
    uVar7 = GameState_Get_1();
    *(undefined4 *)(iVar13 + 0x14) =
         *(undefined4 *)(*(int *)(iVar13 + 0x10) + (uVar7 & 0xff) * 0x10);
    uVar7 = GameState_Get_1();
    *(undefined4 *)(iVar13 + 0x18) =
         *(undefined4 *)((uVar7 & 0xff) * 0x10 + *(int *)(iVar13 + 0x10) + 4);
    uVar7 = GameState_Get_1();
    *(undefined4 *)(iVar13 + 0x1c) =
         *(undefined4 *)((uVar7 & 0xff) * 0x10 + *(int *)(iVar13 + 0x10) + 8);
    uVar7 = GameState_Get_1();
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
    lVar12 = GameState_Get_44();
    if (lVar12 != 0) {
      uVar7 = GameState_Get_1();
      iVar4 = GameState_Get_44();
      iVar4 = iVar4 + (uVar7 & 0xff) * 0x10;
      iVar17 = *(int *)(iVar4 + 4);
      iVar5 = *(int *)(iVar4 + 0xc);
      iVar4 = GameState_Get_c();
      puVar8 = (undefined4 *)(iVar17 + iVar4 * 0x10);
      uVar6 = *puVar8;
      uVar18 = puVar8[1];
      iVar4 = GameState_Get_10();
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
  IntroCar_Load(0x430750);
  return;
}

