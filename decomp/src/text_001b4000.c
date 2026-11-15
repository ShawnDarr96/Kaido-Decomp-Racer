// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001b4000 - 0x001b8000
#include "ghidra_types.h"

// 0x001b4270  size 0x260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Career_RefreshAvailability(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  int iStack_10;
  
  iVar5 = 0;
  do {
    param_1[400] = 0;
    iStack_10 = 0;
    piVar8 = param_1;
    while( true ) {
      lVar7 = 0;
      iVar1 = GameDb_GetTeamMemberCount(iVar5);
      if (iStack_10 < iVar1) {
        lVar7 = GameDb_GetTeamMember(iVar5,iStack_10);
      }
      if (lVar7 == 0) break;
      if ((char)piVar8[1] == '\0') {
        piVar6 = (int *)lVar7;
        lVar7 = Rival_IsAvailable(piVar6[2],piVar6[3],piVar6 + 6,5);
        if (lVar7 != 0) {
          iVar1 = piVar6[1];
          if (iVar1 < 1) {
            *(undefined1 *)(piVar8 + 1) = 1;
            *piVar8 = param_1[400] + *(int *)(*_g_Profiles + 0x2734) * 100;
            param_1[400] = param_1[400] + 1;
          }
          else {
            iVar3 = *piVar6;
            iVar4 = 0;
            while( true ) {
              lVar7 = 0;
              iVar2 = GameDb_GetTeamMemberCount(iVar5);
              if (iVar4 < iVar2) {
                lVar7 = GameDb_GetTeamMember(iVar5,iVar4);
              }
              iVar2 = -1;
              if ((lVar7 == 0) ||
                 ((*(int *)lVar7 == iVar3 && (iVar2 = iVar4, ((int *)lVar7)[1] == iVar1 + -1))))
              break;
              iVar4 = iVar4 + 1;
            }
            if ((char)param_1[iVar2 * 2 + 1] != '\0') {
              iVar3 = 0;
              iVar1 = GameDb_GetTeamMemberCount(iVar5);
              if (iVar2 < iVar1) {
                iVar3 = GameDb_GetTeamMember(iVar5,iVar2);
              }
              if (*(int *)(iVar3 + 0x10) != piVar6[1]) {
                *(undefined1 *)(piVar8 + 1) = 1;
                *piVar8 = param_1[400] + *(int *)(*_g_Profiles + 0x2734) * 100;
                param_1[400] = param_1[400] + 1;
              }
            }
          }
        }
      }
      piVar8 = piVar8 + 2;
      iStack_10 = iStack_10 + 1;
    }
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 0x191;
  } while (iVar5 < 9);
  return;
}

// 0x001b44f0  size 0x1d8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Career_UpdateTeams(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_30 [48];
  
  iVar7 = 0;
  iVar8 = param_1;
  while( true ) {
    lVar6 = 0;
    iVar2 = GameDb_GetTeamCount();
    if (iVar7 < iVar2) {
      lVar6 = GameDb_GetTeamRecord(iVar7);
    }
    if (lVar6 == 0) break;
    piVar5 = (int *)lVar6;
    if (((*piVar5 == 0) && (*(int *)(iVar8 + 0x41c8) == 0)) &&
       (lVar6 = Rival_IsAvailable(piVar5[4],piVar5[5],piVar5 + 0xc,5), lVar6 != 0)) {
      iVar2 = piVar5[3];
      if (iVar2 < 1) {
        Career_AssignRivalCar
                  (auStack_30,*(undefined4 *)(*_g_Profiles + 0x2734),iVar7,0xffffffffffffffff,
                   0xffffffffffffffff);
        Career_UpdateRivalStatus(param_1,piVar5[1],auStack_30);
        *(undefined4 *)(iVar8 + 0x41c8) = 1;
      }
      else {
        iVar1 = piVar5[2];
        iVar4 = 0;
        while( true ) {
          lVar6 = 0;
          iVar3 = GameDb_GetTeamCount();
          if (iVar4 < iVar3) {
            lVar6 = GameDb_GetTeamRecord(iVar4);
          }
          iVar3 = -1;
          if ((lVar6 == 0) ||
             ((*(int *)((int)lVar6 + 8) == iVar1 &&
              (iVar3 = iVar4, *(int *)((int)lVar6 + 0xc) == iVar2 + -1)))) break;
          iVar4 = iVar4 + 1;
        }
        if (*(int *)(param_1 + iVar3 * 4 + 0x41c8) != 0) {
          Career_AssignRivalCar
                    (auStack_30,*(undefined4 *)(*_g_Profiles + 0x2734),iVar7,0xffffffffffffffff,
                     0xffffffffffffffff);
          Career_UpdateRivalStatus(param_1,piVar5[1],auStack_30);
          *(undefined4 *)(iVar8 + 0x41c8) = 1;
        }
      }
    }
    iVar8 = iVar8 + 4;
    iVar7 = iVar7 + 1;
  }
  return;
}

// 0x001b46d0  size 0x138
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Career_AssignRivalCar
               (undefined4 *param_1,undefined4 param_2,long param_3,undefined4 param_4,
               undefined4 param_5)

{
  short sVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = 0;
  lVar3 = GameDb_GetTeamCount();
  if (param_3 < lVar3) {
    iVar2 = GameDb_GetTeamRecord(param_3);
  }
  *param_1 = (int)param_3;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar4 = 0;
  param_1[3] = param_4;
  param_1[1] = param_2;
  do {
    param_1[4] = *(undefined4 *)(iVar2 + 0x18);
    param_1[5] = 0xffffffff;
    if (*(uint *)(iVar2 + 0x18) < 10) {
                    /* WARNING: Switch is manually overridden */
      switch(*(uint *)(iVar2 + 0x18)) {
      case 0:
        break;
      case 1:
        param_1[5] = param_5;
        break;
      default:
        param_1[5] = param_5;
        break;
      case 4:
        param_1[5] = param_5;
        break;
      case 5:
        param_1[5] = param_5;
        break;
      case 6:
        param_1[5] = param_5;
        break;
      case 7:
        param_1[5] = param_5;
        break;
      case 8:
        param_1[5] = param_5;
        break;
      case 9:
        sVar1 = Profile_GetRivalBattleCountById(*_g_Profiles);
        param_1[5] = (int)sVar1;
      }
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 4;
    param_1 = param_1 + 2;
  } while (iVar4 < 3);
  return;
}

// 0x001b4810  size 0xd0
void Career_InitRivalStates(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = param_1;
  do {
    puVar1[0x12d] = 0xffffffff;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(puVar1 + 0x12f) = 0;
    puVar1[0x131] = 10;
    puVar1[0x132] = 0xffffffff;
    puVar1[0x133] = 10;
    puVar1[0x134] = 0xffffffff;
    puVar1[0x135] = 10;
    puVar1[0x136] = 0xffffffff;
    puVar1[0x8fd] = 0xffffffff;
    *(undefined1 *)(puVar1 + 0x8ff) = 0;
    puVar1[0x901] = 10;
    puVar1[0x902] = 0xffffffff;
    puVar1[0x903] = 10;
    puVar1[0x904] = 0xffffffff;
    puVar1[0x905] = 10;
    puVar1[0x906] = 0xffffffff;
    puVar1 = puVar1 + 10;
  } while (iVar3 < 200);
  param_1[0x10cd] = 0xffffffff;
  param_1[0x10ce] = 0;
  param_1[0x10cf] = 0xffffffff;
  param_1[0x10d0] = 0;
  param_1[0x10d1] = 0xffffffff;
  param_1[0x10d2] = 0;
  puVar1 = param_1;
  iVar3 = 0;
  do {
    iVar2 = iVar3;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1 = puVar1 + 8;
    iVar3 = iVar2 + 8;
  } while (iVar2 + 8 < 0x124);
  param_1[iVar2 + 9] = 0;
  param_1[iVar2 + 10] = 0;
  param_1[iVar2 + 0xb] = 0;
  param_1[iVar2 + 0xc] = 0;
  *param_1 = 0;
  return;
}

// 0x001b48e0  size 0x1c
void RivalRec_GetPosition(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *param_1 = *(undefined4 *)(param_2 + 0x20);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}

// 0x001b4900  size 0x8
/* 8 callers */

undefined2 RivalRec_GetId(undefined2 *param_1)

{
  return *param_1;
}

// 0x001b4910  size 0x10
bool RivalRec_IsBelowMax(int param_1)

{
  return *(short *)(param_1 + 0x38) < *(short *)(param_1 + 0x3a);
}

// 0x001b4920  size 0x8
undefined1 RivalRec_GetType(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}

// 0x001b4930  size 0x8
/* 10 callers */

undefined1 RivalRec_GetTeam(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}

// 0x001b4940  size 0x10
/* 11 callers */

bool RivalRec_IsValid(short *param_1)

{
  return *param_1 != -1;
}

// 0x001b4950  size 0x10
bool RivalRec_IsBoss(int param_1)

{
  return *(char *)(param_1 + 4) == '\x01';
}

// 0x001b4960  size 0x8
/* 10 callers */

undefined4 RivalRec_GetCarId(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0x001b4970  size 0x20
undefined2 RivalRec_GetCourse(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0xffff;
  if (*(byte *)(param_1 + 4) - 0xb < 2) {
    uVar1 = *(undefined2 *)(param_1 + 2);
  }
  return uVar1;
}

// 0x001b4990  size 0x8
undefined2 RivalRec_GetSubId(int param_1)

{
  return *(undefined2 *)(param_1 + 2);
}

// 0x001b49a0  size 0xa8c
void Opponent_BuildEntry(int param_1,undefined1 param_2,int param_3,long param_4,byte param_5)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  RacerState *pRVar4;
  uint *puVar5;
  undefined1 *puVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  byte abStack_20 [32];
  
  iVar8 = 0x17;
  pbVar9 = abStack_20;
  pbVar10 = &DAT_00318300;
  do {
    iVar8 = iVar8 + -1;
    *pbVar9 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    pbVar9 = pbVar9 + 1;
  } while (0 < iVar8);
  CarRec_Init(param_3);
  *(short *)(param_3 + 0xc) = (short)*(undefined4 *)(param_1 + 8);
  *(short *)(param_3 + 0xe) = (short)*(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 2;
  CarRec_HasPart(param_3 + 0x14,*(undefined2 *)(param_3 + 0xc),param_4);
  CarDb_GetPartForModel(param_3 + 0x14,*(undefined2 *)(param_3 + 0xc),param_4);
  *(undefined1 *)(param_3 + 8) = param_2;
  if (*(short *)(param_1 + 0x168) != 0) {
    *(undefined1 *)(param_3 + 0xc4) = 1;
  }
  iVar12 = 0;
  iVar8 = param_3;
  do {
    CarRec_ClearParts(iVar8 + 0x70);
    iVar12 = iVar12 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar12 < 0x15);
  iVar12 = 0;
  pbVar9 = abStack_20;
  iVar8 = param_1;
  do {
    iVar13 = *(int *)(iVar8 + 0x44);
    if (iVar13 != -1) {
      sVar3 = (short)iVar13;
      if (iVar12 == 8) {
        CarRec_SetModelAndColor(param_3 + (uint)*pbVar9 * 4 + 0x70,sVar3 + 0x6e);
      }
      else if (iVar12 == 7) {
        CarRec_SetModelAndColor(param_3 + (uint)*pbVar9 * 4 + 0x70,sVar3 + 0x6a);
      }
      else if (iVar12 == 6) {
        CarRec_SetModelAndColor(param_3 + (uint)*pbVar9 * 4 + 0x70,sVar3 + 0x67);
      }
      else if ((iVar12 == 0xe) || (iVar12 == 0xd)) {
        if (iVar13 < 1) {
          iVar13 = 1;
        }
        sVar3 = (short)iVar13;
        if (param_5 < 6) {
                    /* WARNING: Switch is manually overridden */
          switch(param_5) {
          case 0:
            CarRec_SetModelAndColor(param_3 + (uint)*pbVar9 * 4 + 0x70,sVar3 + 0x92);
            break;
          case 1:
            CarRec_SetModelAndColor(param_3 + (uint)*pbVar9 * 4 + 0x70,sVar3 + 0x97);
            break;
          case 2:
            CarRec_SetModelAndColor(param_3 + (uint)*pbVar9 * 4 + 0x70,sVar3 + 0x9c);
          }
        }
        else {
          CarRec_SetModelAndColor(param_3 + (uint)*pbVar9 * 4 + 0x70,sVar3 + 0x92);
        }
      }
      else {
        sVar3 = CarDb_FindDefaultPart(*(undefined2 *)(param_3 + 0xc),*pbVar9,param_4);
        CarRec_SetModelAndColor
                  (param_3 + (uint)*pbVar9 * 4 + 0x70,(short)*(undefined4 *)(iVar8 + 0x44) + sVar3);
      }
    }
    iVar12 = iVar12 + 1;
    iVar8 = iVar8 + 4;
    pbVar9 = pbVar9 + 1;
  } while (iVar12 < 0x17);
  if (*(short *)(param_3 + 0x8c) == -1) {
    CarRec_SetModelAndColor(param_3 + 0x8c,0x6e);
  }
  CarRec_SetModelAndColor(param_3 + 0x8c,0x6e);
  if (*(short *)(param_3 + 0xac) == -1) {
    CarRec_SetModelAndColor(param_3 + 0xac,0x8d);
    sVar3 = *(short *)(param_3 + 0xb0);
  }
  else {
    sVar3 = *(short *)(param_3 + 0xb0);
  }
  if (sVar3 == -1) {
    CarRec_SetModelAndColor(param_3 + 0xb0,0x8d);
  }
  iVar13 = 0;
  *(char *)(param_3 + 0xc4) = (char)*(undefined2 *)(param_1 + 0x168);
  iVar8 = param_1;
  iVar12 = param_3;
  do {
    CarRec_SetModel(iVar12 + 0x50,*(undefined2 *)(iVar8 + 0xfc));
    iVar13 = iVar13 + 1;
    iVar8 = iVar8 + 4;
    iVar12 = iVar12 + 2;
  } while (iVar13 < 0x10);
  if ((*(byte *)(param_1 + 0x2c) != 0) && (1 < *(byte *)(param_1 + 0x2c) - 4)) {
    return;
  }
  if (param_4 == -1) {
    puVar5 = (uint *)CarDb_GetModel(*(undefined2 *)(param_3 + 0xc));
    puVar6 = (undefined1 *)CarDb_GetModelPhysics(*(undefined2 *)(param_3 + 0xc));
  }
  else {
    pRVar4 = GameState_Elem_3e0_x540((int)param_4);
    puVar5 = &pRVar4->unk_04;
    puVar6 = &pRVar4->field_0xa0;
  }
  if (*(int *)(param_1 + 0xf0) != -100) {
    *(char *)(param_3 + 0x28) = (char)*(int *)(param_1 + 0xf0);
  }
  if (((*(char *)(puVar5 + 0xf) == '\x04') && (*(int *)(puVar6 + 0x160) == 3)) &&
     (0.35 < *(float *)(puVar6 + 0x168))) {
    *(undefined1 *)(param_3 + 0x23) = 0xd;
  }
  lVar7 = CarRec_GetPartData(param_3,8);
  if (0 < lVar7) {
    cVar1 = *(char *)(puVar5 + 0xf);
    iVar8 = (int)lVar7;
    if (cVar1 == '\0') {
      *(char *)(param_3 + 0x1a) = (char)((iVar8 * 0x1e) / 100);
      *(char *)(param_3 + 0x1b) = (char)((iVar8 * 0x3c) / 100);
      *(char *)(param_3 + 0x18) = (char)((iVar8 * 0x32) / 100);
      *(char *)(param_3 + 0x20) = (char)((iVar8 * -100) / 100);
      *(char *)(param_3 + 0x21) = (char)((iVar8 * -0x46) / 100);
    }
    else if (cVar1 == '\x04') {
      *(char *)(param_3 + 0x1a) = (char)((iVar8 * 0x1e) / 100);
      *(char *)(param_3 + 0x1b) = (char)((iVar8 * 0x3c) / 100);
      *(char *)(param_3 + 0x18) = (char)((iVar8 * 0x32) / 100);
      *(char *)(param_3 + 0x20) = (char)((iVar8 * -100) / 100);
      *(char *)(param_3 + 0x21) = (char)((iVar8 * -0x46) / 100);
    }
    else if (cVar1 == '\x03') {
      *(char *)(param_3 + 0x1a) = (char)((iVar8 * 0x1e) / 100);
      *(char *)(param_3 + 0x1b) = (char)((iVar8 * 0x3c) / 100);
      *(char *)(param_3 + 0x18) = (char)((iVar8 * 0x50) / 100);
      *(char *)(param_3 + 0x20) = (char)((iVar8 * -0x50) / 100);
      *(char *)(param_3 + 0x21) = (char)((iVar8 * -100) / 100);
    }
    else if (cVar1 == '\x02') {
      *(char *)(param_3 + 0x1a) = (char)((iVar8 * 0x14) / 100);
      *(char *)(param_3 + 0x1b) = (char)((iVar8 * 0x3c) / 100);
      *(char *)(param_3 + 0x18) = (char)((iVar8 * 0x46) / 100);
      uVar2 = (undefined1)((iVar8 * -100) / 100);
      *(undefined1 *)(param_3 + 0x20) = uVar2;
      *(undefined1 *)(param_3 + 0x21) = uVar2;
    }
    else if (cVar1 == '\x01') {
      *(char *)(param_3 + 0x1a) = (char)((iVar8 * 0x1e) / 100);
      *(char *)(param_3 + 0x1b) = (char)((iVar8 * 0x3c) / 100);
      *(char *)(param_3 + 0x18) = (char)((iVar8 * 0x46) / 100);
      *(char *)(param_3 + 0x20) = (char)((iVar8 * -0x50) / 100);
      *(char *)(param_3 + 0x21) = (char)((iVar8 * -100) / 100);
    }
    uVar2 = (undefined1)((iVar8 * 0x3c) / 100);
    *(undefined1 *)(param_3 + 0x1c) = uVar2;
    *(undefined1 *)(param_3 + 0x1d) = uVar2;
    uVar2 = (undefined1)((iVar8 * 0x46) / 100);
    *(undefined1 *)(param_3 + 0x1e) = uVar2;
    *(undefined1 *)(param_3 + 0x1f) = uVar2;
    cVar1 = *(char *)(param_1 + 4);
    if (((cVar1 != '\x06') && (cVar1 != '\x05')) && (cVar1 != '\t')) {
      if (cVar1 != '\n') goto LAB_001b5364;
      *(undefined1 *)(param_3 + 0x18) = 0xf6;
    }
    uVar2 = (undefined1)((iVar8 * -100) / 100);
    *(undefined1 *)(param_3 + 0x20) = uVar2;
    *(undefined1 *)(param_3 + 0x21) = uVar2;
    *(char *)(param_3 + 0x1e) = (char)lVar7;
    *(char *)(param_3 + 0x1f) = (char)lVar7;
  }
LAB_001b5364:
  lVar7 = CarRec_GetPartData(param_3,5);
  if (0 < lVar7) {
    Race_GetLapCountForMode(*(undefined4 *)(param_1 + 0x14));
    fVar14 = *(float *)(puVar6 + 0x240);
    *(float *)(param_3 + 0x2c) = fVar14 * 1.1;
    if (7.9 < fVar14 * 1.1) {
      *(undefined4 *)(param_3 + 0x2c) = 0x40fccccd;
    }
    uVar11 = 1;
    do {
      uVar11 = uVar11 + 1;
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(puVar6 + 0x1b4);
      puVar6 = puVar6 + 4;
      param_3 = param_3 + 4;
    } while (uVar11 < 9);
  }
  return;
}

// 0x001b5430  size 0x168
void Opponent_Clear(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  *param_1 = 0xffff;
  param_1[1] = 0xffff;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)(param_1 + 2) = 0xd;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  RaceSlot_Clear((RaceSlot *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x16) = 8;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  iVar2 = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 8;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  puVar1 = param_1;
  do {
    *(undefined4 *)(puVar1 + 0x22) = 0;
    iVar2 = iVar2 + 7;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 0x26) = 0;
    *(undefined4 *)(puVar1 + 0x28) = 0;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    puVar1 = puVar1 + 0xe;
  } while (iVar2 < 0x15);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *(undefined4 *)(puVar1 + 0x7e) = 0xffffffff;
    iVar2 = iVar2 + 8;
    *(undefined4 *)(puVar1 + 0x80) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x82) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x84) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x86) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x88) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x8a) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x8c) = 0xffffffff;
    puVar1 = puVar1 + 0x10;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *(undefined4 *)(puVar1 + 0x50) = 0;
    iVar2 = iVar2 + 7;
    *(undefined4 *)(puVar1 + 0x52) = 0;
    *(undefined4 *)(puVar1 + 0x54) = 0;
    *(undefined4 *)(puVar1 + 0x56) = 0;
    *(undefined4 *)(puVar1 + 0x58) = 0;
    *(undefined4 *)(puVar1 + 0x5a) = 0;
    *(undefined4 *)(puVar1 + 0x5c) = 0;
    puVar1 = puVar1 + 0xe;
  } while (iVar2 < 0x10);
  *(undefined4 *)(param_1 + iVar2 * 2 + 0x50) = 0;
  *(undefined4 *)(param_1 + iVar2 * 2 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xa2) = 4;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xa6) = 4;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xaa) = 4;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xae) = 4;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb2) = 4;
  return;
}

// 0x001b55a0  size 0xc
/* 30 callers */

void RivalDb_Get(undefined2 param_1)

{
  GameDb_GetRival(param_1);
  return;
}

// 0x001b55b0  size 0x60
/* 31 callers */

void RivalDb_Copy(undefined4 *param_1,undefined2 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_180 [96];
  
  uVar1 = GameDb_GetRival(param_2);
  memcpy(auStack_180,uVar1,0x17c);
  puVar3 = auStack_180;
  iVar2 = 0x5f;
  do {
    iVar2 = iVar2 + -1;
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar2);
  return;
}

// 0x001b5610  size 0x56c
int RivalDb_FindByCourse(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uStack_480;
  short sStack_47e;
  char cStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined1 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined1 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined2 uStack_448;
  undefined2 uStack_446;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 auStack_43c [23];
  undefined4 auStack_3e0 [23];
  undefined4 auStack_384 [16];
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined2 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined2 uStack_300;
  short sStack_2fe;
  char cStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined2 uStack_2c8;
  undefined2 uStack_2c6;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 auStack_2bc [23];
  undefined4 auStack_260 [23];
  undefined4 auStack_204 [16];
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined2 uStack_180;
  short sStack_17e;
  char cStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 auStack_13c [23];
  undefined4 auStack_e0 [23];
  undefined4 auStack_84 [16];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar6 = 0;
  do {
    uVar3 = GameDb_GetRival((short)iVar6);
    memcpy(&uStack_480,uVar3,0x17c);
    puVar5 = auStack_43c;
    uStack_300 = uStack_480;
    uStack_2f8 = uStack_478;
    uStack_2e8 = uStack_468;
    puVar4 = auStack_2bc;
    uStack_2e4 = uStack_464;
    uStack_2f4 = uStack_474;
    uStack_2f0 = uStack_470;
    sStack_2fe = sStack_47e;
    cStack_2fc = cStack_47c;
    iVar2 = 0x17;
    uStack_2ec = uStack_46c;
    uStack_2e0 = uStack_460;
    uStack_2dc = uStack_45c;
    uStack_2d8 = uStack_458;
    uStack_2d4 = uStack_454;
    uStack_2d0 = uStack_450;
    uStack_2cc = uStack_44c;
    uStack_2c8 = uStack_448;
    uStack_2c6 = uStack_446;
    uStack_2c4 = uStack_444;
    uStack_2c0 = uStack_440;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 0x17;
    puVar5 = auStack_3e0;
    puVar4 = auStack_260;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 8;
    puVar5 = auStack_384;
    puVar4 = auStack_204;
    do {
      iVar2 = iVar2 + -1;
      uVar1 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (0 < iVar2);
    uStack_1b0 = uStack_330;
    uStack_1c0 = uStack_340;
    uStack_1bc = uStack_33c;
    uStack_1b8 = uStack_338;
    uStack_1b4 = uStack_334;
    uStack_1ac = uStack_32c;
    uStack_1a8 = uStack_328;
    uStack_1a4 = uStack_324;
    uStack_1a0 = uStack_320;
    uStack_19c = uStack_31c;
    uStack_1c4 = uStack_344;
    uStack_198 = uStack_318;
    uStack_194 = uStack_314;
    uStack_190 = uStack_310;
    uStack_18c = uStack_30c;
    uStack_180 = uStack_480;
    uStack_188 = uStack_308;
    sStack_17e = sStack_47e;
    cStack_17c = cStack_47c;
    uStack_178 = uStack_478;
    uStack_174 = uStack_474;
    uStack_168 = uStack_468;
    puVar5 = auStack_2bc;
    uStack_170 = uStack_470;
    uStack_164 = uStack_464;
    uStack_16c = uStack_46c;
    iVar2 = 0x17;
    uStack_160 = uStack_460;
    uStack_15c = uStack_45c;
    puVar4 = auStack_13c;
    uStack_158 = uStack_458;
    uStack_154 = uStack_454;
    uStack_150 = uStack_450;
    uStack_14c = uStack_44c;
    uStack_148 = uStack_448;
    uStack_146 = uStack_446;
    uStack_144 = uStack_444;
    uStack_140 = uStack_440;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 0x17;
    puVar5 = auStack_260;
    puVar4 = auStack_e0;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 8;
    puVar5 = auStack_204;
    puVar4 = auStack_84;
    do {
      iVar2 = iVar2 + -1;
      uVar1 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (0 < iVar2);
    uStack_38 = uStack_338;
    uStack_34 = uStack_334;
    uStack_30 = uStack_330;
    uStack_2c = uStack_32c;
    uStack_40 = uStack_340;
    uStack_3c = uStack_33c;
    uStack_28 = uStack_328;
    uStack_24 = uStack_324;
    uStack_20 = uStack_320;
    uStack_44 = uStack_344;
    uStack_18 = uStack_318;
    uStack_14 = uStack_314;
    uStack_10 = uStack_310;
    uStack_c = uStack_30c;
    uStack_8 = uStack_308;
    uStack_1c = uStack_31c;
  } while (((cStack_47c != '\v') || (iVar2 = iVar6, param_1 != sStack_47e)) &&
          (iVar6 = iVar6 + 1, iVar2 = -1, iVar6 < 500));
  return iVar2;
}

// 0x001b5b80  size 0x57c
int RivalDb_FindByName(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uStack_480;
  short sStack_47e;
  char cStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined1 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined1 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined2 uStack_448;
  undefined2 uStack_446;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 auStack_43c [23];
  undefined4 auStack_3e0 [23];
  undefined4 auStack_384 [16];
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined2 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined2 uStack_300;
  short sStack_2fe;
  char cStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined2 uStack_2c8;
  undefined2 uStack_2c6;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 auStack_2bc [23];
  undefined4 auStack_260 [23];
  undefined4 auStack_204 [16];
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined2 uStack_180;
  short sStack_17e;
  char cStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 auStack_13c [23];
  undefined4 auStack_e0 [23];
  undefined4 auStack_84 [16];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar6 = 0;
  do {
    uVar3 = GameDb_GetRival((short)iVar6);
    memcpy(&uStack_480,uVar3,0x17c);
    puVar5 = auStack_43c;
    uStack_300 = uStack_480;
    uStack_2f8 = uStack_478;
    uStack_2e8 = uStack_468;
    puVar4 = auStack_2bc;
    uStack_2e4 = uStack_464;
    uStack_2f4 = uStack_474;
    uStack_2f0 = uStack_470;
    sStack_2fe = sStack_47e;
    cStack_2fc = cStack_47c;
    iVar2 = 0x17;
    uStack_2ec = uStack_46c;
    uStack_2e0 = uStack_460;
    uStack_2dc = uStack_45c;
    uStack_2d8 = uStack_458;
    uStack_2d4 = uStack_454;
    uStack_2d0 = uStack_450;
    uStack_2cc = uStack_44c;
    uStack_2c8 = uStack_448;
    uStack_2c6 = uStack_446;
    uStack_2c4 = uStack_444;
    uStack_2c0 = uStack_440;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 0x17;
    puVar5 = auStack_3e0;
    puVar4 = auStack_260;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 8;
    puVar5 = auStack_384;
    puVar4 = auStack_204;
    do {
      iVar2 = iVar2 + -1;
      uVar1 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (0 < iVar2);
    uStack_1b0 = uStack_330;
    uStack_1c0 = uStack_340;
    uStack_1bc = uStack_33c;
    uStack_1b8 = uStack_338;
    uStack_1b4 = uStack_334;
    uStack_1ac = uStack_32c;
    uStack_1a8 = uStack_328;
    uStack_1a4 = uStack_324;
    uStack_1a0 = uStack_320;
    uStack_19c = uStack_31c;
    uStack_1c4 = uStack_344;
    uStack_198 = uStack_318;
    uStack_194 = uStack_314;
    uStack_190 = uStack_310;
    uStack_18c = uStack_30c;
    uStack_180 = uStack_480;
    uStack_188 = uStack_308;
    sStack_17e = sStack_47e;
    cStack_17c = cStack_47c;
    uStack_178 = uStack_478;
    uStack_174 = uStack_474;
    uStack_168 = uStack_468;
    puVar5 = auStack_2bc;
    uStack_170 = uStack_470;
    uStack_164 = uStack_464;
    uStack_16c = uStack_46c;
    iVar2 = 0x17;
    uStack_160 = uStack_460;
    uStack_15c = uStack_45c;
    puVar4 = auStack_13c;
    uStack_158 = uStack_458;
    uStack_154 = uStack_454;
    uStack_150 = uStack_450;
    uStack_14c = uStack_44c;
    uStack_148 = uStack_448;
    uStack_146 = uStack_446;
    uStack_144 = uStack_444;
    uStack_140 = uStack_440;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 0x17;
    puVar5 = auStack_260;
    puVar4 = auStack_e0;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    iVar2 = 8;
    puVar5 = auStack_204;
    puVar4 = auStack_84;
    do {
      iVar2 = iVar2 + -1;
      uVar1 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (0 < iVar2);
    uStack_38 = uStack_338;
    uStack_34 = uStack_334;
    uStack_30 = uStack_330;
    uStack_2c = uStack_32c;
    uStack_40 = uStack_340;
    uStack_3c = uStack_33c;
    uStack_28 = uStack_328;
    uStack_24 = uStack_324;
    uStack_20 = uStack_320;
    uStack_44 = uStack_344;
    uStack_18 = uStack_318;
    uStack_14 = uStack_314;
    uStack_10 = uStack_310;
    uStack_c = uStack_30c;
    uStack_8 = uStack_308;
    uStack_1c = uStack_31c;
    iVar2 = -1;
  } while ((sStack_47e != -1) &&
          (((cStack_47c != '\f' || (iVar2 = iVar6, param_1 != sStack_47e)) &&
           (iVar6 = iVar6 + 1, iVar2 = -1, iVar6 < 500))));
  return iVar2;
}

// 0x001b6100  size 0x40c
/* "nickname" */

void Opponent_BuildNamed(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uStack_5d0;
  undefined2 uStack_5ce;
  undefined1 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined1 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined1 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined2 uStack_598;
  undefined2 uStack_596;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 auStack_58c [23];
  undefined4 auStack_530 [23];
  undefined4 auStack_4d4 [16];
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined2 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined2 uStack_430;
  undefined2 uStack_42e;
  undefined1 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined1 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined1 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined2 uStack_3f8;
  undefined2 uStack_3f6;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 auStack_3ec [23];
  undefined4 auStack_390 [23];
  undefined4 auStack_334 [16];
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined2 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [208];
  undefined2 uStack_1e0;
  undefined2 uStack_1de;
  undefined1 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined2 uStack_1a8;
  undefined2 uStack_1a6;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 auStack_19c [23];
  undefined4 auStack_140 [23];
  undefined4 auStack_e4 [16];
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
  undefined2 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 auStack_60 [6];
  undefined1 auStack_47 [27];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = RivalDb_FindByName(param_2);
  uVar3 = GameDb_GetRival(uVar2);
  memcpy(&uStack_5d0,uVar3,0x17c);
  puVar6 = auStack_58c;
  puVar5 = auStack_3ec;
  iVar4 = 0x17;
  uStack_420 = uStack_5c0;
  uStack_418 = uStack_5b8;
  uStack_414 = uStack_5b4;
  uStack_42c = uStack_5cc;
  uStack_428 = uStack_5c8;
  uStack_424 = uStack_5c4;
  uStack_408 = uStack_5a8;
  uStack_430 = uStack_5d0;
  uStack_42e = uStack_5ce;
  uStack_41c = uStack_5bc;
  uStack_410 = uStack_5b0;
  uStack_40c = uStack_5ac;
  uStack_3f4 = uStack_594;
  uStack_404 = uStack_5a4;
  uStack_400 = uStack_5a0;
  uStack_3fc = uStack_59c;
  uStack_3f8 = uStack_598;
  uStack_3f6 = uStack_596;
  uStack_3f0 = uStack_590;
  do {
    iVar4 = iVar4 + -1;
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (0 < iVar4);
  puVar6 = auStack_530;
  puVar5 = auStack_390;
  iVar4 = 0x17;
  do {
    iVar4 = iVar4 + -1;
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (0 < iVar4);
  puVar6 = auStack_4d4;
  puVar5 = auStack_334;
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar1;
    puVar6 = puVar6 + 2;
    puVar5 = puVar5 + 2;
  } while (0 < iVar4);
  puVar6 = auStack_3ec;
  uStack_2f4 = uStack_494;
  uStack_2e0 = uStack_480;
  uStack_2c0 = uStack_460;
  uStack_2f0 = uStack_490;
  uStack_2bc = uStack_45c;
  uStack_2ec = uStack_48c;
  uStack_2b8 = uStack_458;
  uStack_2e8 = uStack_488;
  uStack_1e0 = uStack_5d0;
  uStack_2e4 = uStack_484;
  uStack_2c8 = uStack_468;
  uStack_2cc = uStack_46c;
  uStack_1dc = uStack_5cc;
  puVar5 = auStack_19c;
  iVar4 = 0x17;
  uStack_1de = uStack_5ce;
  uStack_1c8 = uStack_5b8;
  uStack_1d8 = uStack_5c8;
  uStack_2dc = uStack_47c;
  uStack_1d4 = uStack_5c4;
  uStack_2d8 = uStack_478;
  uStack_1d0 = uStack_5c0;
  uStack_2d4 = uStack_474;
  uStack_2d0 = uStack_470;
  uStack_1cc = uStack_5bc;
  uStack_1c4 = uStack_5b4;
  uStack_1c0 = uStack_5b0;
  uStack_1bc = uStack_5ac;
  uStack_1b8 = uStack_5a8;
  uStack_1b4 = uStack_5a4;
  uStack_1b0 = uStack_5a0;
  uStack_2c4 = uStack_464;
  uStack_1ac = uStack_59c;
  uStack_1a8 = uStack_598;
  uStack_1a6 = uStack_596;
  uStack_1a4 = uStack_594;
  uStack_1a0 = uStack_590;
  do {
    iVar4 = iVar4 + -1;
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (0 < iVar4);
  puVar6 = auStack_390;
  puVar5 = auStack_140;
  iVar4 = 0x17;
  do {
    iVar4 = iVar4 + -1;
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (0 < iVar4);
  puVar6 = auStack_334;
  puVar5 = auStack_e4;
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar1;
    puVar6 = puVar6 + 2;
    puVar5 = puVar5 + 2;
  } while (0 < iVar4);
  uStack_a4 = uStack_494;
  uStack_a0 = uStack_490;
  uStack_9c = uStack_48c;
  uStack_98 = uStack_488;
  uStack_94 = uStack_484;
  uStack_90 = uStack_480;
  uStack_74 = uStack_464;
  uStack_70 = uStack_460;
  uStack_6c = uStack_45c;
  uStack_78 = uStack_468;
  uStack_8c = uStack_47c;
  uStack_88 = uStack_478;
  uStack_84 = uStack_474;
  uStack_80 = uStack_470;
  uStack_68 = uStack_458;
  uStack_7c = uStack_46c;
  Opponent_BuildEntry(&uStack_1e0,0,auStack_2b0,0xffffffffffffffff,0);
  sprintf(auStack_60,0x363b48);
  sprintf(auStack_47,0x363b50);
  CarSpec_BuildForRecord(&uStack_450,auStack_2b0);
  puVar5 = auStack_60;
  iVar4 = 0x17;
  uStack_2c = uStack_450;
  uStack_28 = uStack_44c;
  uStack_24 = uStack_448;
  uStack_20 = uStack_444;
  uStack_1c = uStack_440;
  uStack_18 = uStack_43c;
  uStack_14 = uStack_438;
  do {
    iVar4 = iVar4 + -1;
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar4);
  return;
}

// 0x001b6510  size 0x2ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "nickname" */

void Opponent_BuildFromRival(undefined4 *param_1,short param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined2 uStack_5d0;
  undefined2 uStack_5ce;
  undefined1 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined1 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined1 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined2 uStack_598;
  undefined2 uStack_596;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 auStack_58c [23];
  undefined4 auStack_530 [23];
  undefined4 auStack_4d4 [16];
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined2 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined8 uStack_430;
  undefined4 auStack_428 [2];
  undefined8 uStack_420;
  undefined4 auStack_418 [2];
  undefined1 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined1 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined2 uStack_3f8;
  undefined2 uStack_3f6;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 auStack_3ec [23];
  undefined4 auStack_390 [23];
  undefined4 auStack_334 [16];
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined2 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [208];
  undefined8 auStack_1e0 [48];
  undefined4 auStack_60 [6];
  undefined1 auStack_47 [27];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uVar3 = GameDb_GetRival(param_2);
  memcpy(&uStack_5d0,uVar3,0x17c);
  puVar10 = auStack_58c;
  puVar8 = auStack_3ec;
  iVar7 = 0x17;
  uStack_420._0_4_ = uStack_5c0;
  auStack_418[0] = uStack_5b8;
  auStack_418[1] = uStack_5b4;
  uStack_430._4_1_ = uStack_5cc;
  auStack_428[0] = uStack_5c8;
  auStack_428[1] = uStack_5c4;
  uStack_408 = uStack_5a8;
  uStack_430._0_2_ = uStack_5d0;
  uStack_430._2_2_ = uStack_5ce;
  uStack_420._4_4_ = uStack_5bc;
  uStack_410 = uStack_5b0;
  uStack_40c = uStack_5ac;
  uStack_3f4 = uStack_594;
  uStack_404 = uStack_5a4;
  uStack_400 = uStack_5a0;
  uStack_3fc = uStack_59c;
  uStack_3f8 = uStack_598;
  uStack_3f6 = uStack_596;
  uStack_3f0 = uStack_590;
  do {
    iVar7 = iVar7 + -1;
    *puVar8 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar8 = puVar8 + 1;
  } while (0 < iVar7);
  puVar10 = auStack_530;
  puVar8 = auStack_390;
  iVar7 = 0x17;
  do {
    iVar7 = iVar7 + -1;
    *puVar8 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar8 = puVar8 + 1;
  } while (0 < iVar7);
  puVar10 = auStack_4d4;
  puVar8 = auStack_334;
  iVar7 = 8;
  do {
    iVar7 = iVar7 + -1;
    uVar4 = puVar10[1];
    *puVar8 = *puVar10;
    puVar8[1] = uVar4;
    puVar10 = puVar10 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar7);
  iVar7 = 0x17;
  uStack_2f4 = uStack_494;
  uStack_2f0 = uStack_490;
  uStack_2ec = uStack_48c;
  uStack_2e8 = uStack_488;
  uStack_2c4 = uStack_464;
  uStack_2e4 = uStack_484;
  uStack_2c0 = uStack_460;
  uStack_2e0 = uStack_480;
  uStack_2bc = uStack_45c;
  uStack_2c8 = uStack_468;
  uStack_2dc = uStack_47c;
  uStack_2d8 = uStack_478;
  uStack_2d4 = uStack_474;
  uStack_2d0 = uStack_470;
  uStack_2b8 = uStack_458;
  uStack_2cc = uStack_46c;
  puVar1 = &uStack_430;
  puVar2 = auStack_1e0;
  do {
    puVar12 = puVar2;
    puVar9 = puVar1;
    uVar4 = *(undefined4 *)((int)puVar9 + 4);
    uVar5 = *(undefined4 *)(puVar9 + 1);
    uVar6 = *(undefined4 *)((int)puVar9 + 0xc);
    iVar7 = iVar7 + -1;
    *(undefined4 *)puVar12 = *(undefined4 *)puVar9;
    *(undefined4 *)((int)puVar12 + 4) = uVar4;
    *(undefined4 *)(puVar12 + 1) = uVar5;
    *(undefined4 *)((int)puVar12 + 0xc) = uVar6;
    puVar1 = puVar9 + 2;
    puVar2 = puVar12 + 2;
  } while (0 < iVar7);
  uVar4 = *(undefined4 *)(puVar9 + 3);
  puVar12[2] = puVar9[2];
  *(undefined4 *)(puVar12 + 3) = uVar4;
  Opponent_BuildEntry(auStack_1e0,0,auStack_2b0,0xffffffffffffffff,0);
  sprintf(auStack_60,0x363b48);
  sprintf(auStack_47,0x363b50);
  CarSpec_BuildForRecord(&uStack_450,auStack_2b0);
  iVar11 = param_2 * 2;
  puVar8 = auStack_60;
  iVar7 = 0x17;
  uStack_2c = uStack_450;
  uStack_28 = uStack_44c;
  uStack_24 = uStack_448;
  uStack_20 = uStack_444;
  uStack_1c = uStack_440;
  uStack_18 = uStack_43c;
  uStack_14 = uStack_438;
  iStack_10 = (int)*(short *)(iVar11 + *_g_Profiles + 0x3fc4);
  iStack_c = (int)*(short *)(iVar11 + *_g_Profiles + 0x43ac);
  iStack_8 = (int)*(short *)(iVar11 + *_g_Profiles + 0x4794);
  do {
    iVar7 = iVar7 + -1;
    *param_1 = *puVar8;
    puVar8 = puVar8 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar7);
  return;
}

// 0x001b6800  size 0x48
void Career_IsBelowCap(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x2a70) < 100) {
    *(undefined4 *)(*(int *)(param_1 + 0x2a70) * 8 + param_1 + 0x2750) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x2a70) * 8 + param_1 + 0x2754) = param_3;
    *(int *)(param_1 + 0x2a70) = *(int *)(param_1 + 0x2a70) + 1;
  }
  return;
}

// 0x001b6850  size 0x1500
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Career_ProcessDay(int param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  RaceEntrySetup *pRVar5;
  RacerStats *pRVar6;
  RacerStats *pRVar7;
  int *piVar8;
  RaceCar *pRVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  int iStack_c0;
  int iStack_bc;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int aiStack_a0 [16];
  int aiStack_60 [16];
  int iStack_20;
  int iStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_8;
  int iStack_4;
  
  piVar14 = &DAT_00318280;
  iVar12 = 0xd;
  piVar8 = aiStack_60;
  do {
    iVar12 = iVar12 + -1;
    *piVar8 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar8 = piVar8 + 1;
  } while (0 < iVar12);
  piVar8 = aiStack_a0;
  piVar14 = &DAT_003182c0;
  iVar12 = 0xd;
  do {
    iVar12 = iVar12 + -1;
    *piVar8 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar8 = piVar8 + 1;
  } while (0 < iVar12);
  RaceResult_Clear(&iStack_20);
  cVar3 = RaceCtx_Get_8();
  if ((cVar3 == '\x01') || (cVar3 == '\x02')) {
    GameState_GetCurrentRecord(&iStack_c0);
    iStack_20 = iStack_c0;
    iStack_1c = iStack_bc;
    uStack_18 = uStack_b8;
    uStack_17 = uStack_b7;
    uStack_14 = uStack_b4;
    uStack_10 = uStack_b0;
  }
  cVar3 = RaceCtx_Get_8();
  if (((cVar3 != '\n') && (cVar3 = RaceCtx_Get_8(), cVar3 != '\t')) &&
     (cVar3 = RaceCtx_Get_8(), cVar3 != '\x06')) {
    iStack_4 = 0;
    fStack_8 = 0.0;
    pRVar9 = RaceCar_Get(0);
    RaceCar_GetLapTimes(pRVar9,&iStack_4,&fStack_8);
    iVar12 = *_g_Profiles;
    iVar13 = iVar12 + *(short *)(iVar12 + 0x13ec) * 0xcc;
    *(int *)(iVar13 + 0xc) = *(int *)(iVar13 + 0xc) + iStack_4;
    fVar17 = *(float *)(iVar13 + 0x10) + fStack_8;
    *(float *)(iVar13 + 0x10) = fVar17;
    if (1000.0 <= fVar17) {
      *(int *)(iVar13 + 0xc) = *(int *)(iVar13 + 0xc) + 1;
      *(float *)(iVar13 + 0x10) = *(float *)(iVar13 + 0x10) - 1000.0;
    }
    *(int *)(iVar12 + 0x2bf4) = *(int *)(iVar12 + 0x2bf4) + iStack_4;
    fVar17 = *(float *)(iVar12 + 0x2bf8) + fStack_8;
    *(float *)(iVar12 + 0x2bf8) = fVar17;
    if (1000.0 <= fVar17) {
      *(int *)(iVar12 + 0x2bf4) = *(int *)(iVar12 + 0x2bf4) + 1;
      *(float *)(iVar12 + 0x2bf8) = *(float *)(iVar12 + 0x2bf8) - 1000.0;
    }
    fVar17 = (float)RaceCar_GetDistance(pRVar9);
    iVar12 = *_g_Profiles + *(short *)(*_g_Profiles + 0x13ec) * 0xcc;
    fVar17 = *(float *)(iVar12 + 200) + fVar17;
    *(float *)(iVar12 + 200) = fVar17;
    if (100.0 < fVar17) {
      *(undefined4 *)(iVar12 + 200) = 0x42c80000;
    }
  }
  if (iStack_20 != -1) {
    pRVar5 = GameState_Elem_f0_xcc(1);
    pRVar6 = GameState_Elem_2fa0_x17c((int)(char)pRVar5->unk_09);
    iVar12 = GameState_Ptr_48();
    uVar10 = maybe_RaceProg_GetEntry();
    if ((uVar10 & 1) == 0) {
      uVar10 = maybe_RaceProg_GetEntry();
      if ((uVar10 & 2) == 0) {
        uVar10 = maybe_RaceProg_GetEntry();
        if ((uVar10 & 4) != 0) {
          *(short *)(param_1 + 0x5316) = *(short *)(param_1 + 0x5316) + 1;
          if (9999 < *(short *)(param_1 + 0x5316)) {
            *(undefined2 *)(param_1 + 0x5316) = 9999;
          }
          *(short *)(param_1 + 0x5310) = *(short *)(param_1 + 0x5310) + 1;
          if (9999 < *(short *)(param_1 + 0x5310)) {
            *(undefined2 *)(param_1 + 0x5310) = 9999;
          }
          iVar12 = iStack_20 * 2 + param_1;
          *(short *)(iVar12 + 0x4794) = *(short *)(iVar12 + 0x4794) + 1;
          if (999 < *(short *)(iVar12 + 0x4794)) {
            *(undefined2 *)(iVar12 + 0x4794) = 999;
          }
          RivalSchedule_IsComplete(pRVar6,iStack_20,0);
          iVar13 = 0;
          *(short *)(*_g_Profiles + 0x5278) = *(short *)(*_g_Profiles + 0x5278) + 1;
          *(short *)(*_g_Profiles + 0x4c30) = *(short *)(*_g_Profiles + 0x4c30) + 1;
          iVar12 = *_g_Profiles;
          do {
            if (*(int *)(iVar12 + 0x4c34) == iStack_20) {
LAB_001b7ba4:
              sVar4 = *(short *)pRVar6;
              goto LAB_001b7ba8;
            }
            if (*(int *)(iVar12 + 0x4c34) == -1) {
              iVar12 = iVar13 * 8 + *_g_Profiles;
              *(int *)(iVar12 + 0x4c34) = iStack_20;
              *(undefined4 *)(iVar12 + 0x4c38) = 0;
              goto LAB_001b7ba4;
            }
            iVar13 = iVar13 + 1;
            iVar12 = iVar12 + 8;
          } while (iVar13 < 200);
          sVar4 = *(short *)pRVar6;
LAB_001b7ba8:
          if ((sVar4 != -1) && (*(short *)(sVar4 * 2 + *_g_Profiles + 0x4b7c) == 0)) {
            iVar12 = sVar4 * 2 + param_1;
            *(short *)(iVar12 + 0x4bf4) = *(short *)(iVar12 + 0x4bf4) + 1;
            if (999 < *(short *)(iVar12 + 0x4bf4)) {
              *(undefined2 *)(iVar12 + 0x4bf4) = 999;
            }
          }
          if (iStack_1c != -1) {
            pRVar5 = GameState_Elem_f0_xcc(2);
            pRVar6 = GameState_Elem_2fa0_x17c((int)(char)pRVar5->unk_09);
            iVar12 = iStack_1c * 2 + param_1;
            *(short *)(iVar12 + 0x4794) = *(short *)(iVar12 + 0x4794) + 1;
            if (999 < *(short *)(iVar12 + 0x4794)) {
              *(undefined2 *)(iVar12 + 0x4794) = 999;
            }
            RivalSchedule_IsComplete(pRVar6,iStack_1c,0);
            iVar13 = 0;
            iVar12 = *_g_Profiles;
            do {
              if (*(int *)(iVar12 + 0x4c34) == iStack_1c) break;
              if (*(int *)(iVar12 + 0x4c34) == -1) {
                iVar12 = iVar13 * 8 + *_g_Profiles;
                *(int *)(iVar12 + 0x4c34) = iStack_1c;
                *(undefined4 *)(iVar12 + 0x4c38) = 0;
                break;
              }
              iVar13 = iVar13 + 1;
              iVar12 = iVar12 + 8;
            } while (iVar13 < 200);
          }
        }
      }
      else {
        uVar11 = maybe_RaceProg_GetEntryB();
        *(short *)(param_1 + 0x5314) = *(short *)(param_1 + 0x5314) + 1;
        if (9999 < *(short *)(param_1 + 0x5314)) {
          *(undefined2 *)(param_1 + 0x5314) = 9999;
        }
        *(short *)(param_1 + 0x5310) = *(short *)(param_1 + 0x5310) + 1;
        if (9999 < *(short *)(param_1 + 0x5310)) {
          *(undefined2 *)(param_1 + 0x5310) = 9999;
        }
        iVar12 = iStack_20 * 2 + param_1;
        *(short *)(iVar12 + 0x43ac) = *(short *)(iVar12 + 0x43ac) + 1;
        if (999 < *(short *)(iVar12 + 0x43ac)) {
          *(undefined2 *)(iVar12 + 0x43ac) = 999;
        }
        iVar12 = *_g_Profiles;
        *(int *)(iVar12 + 0x2744) = *(int *)(iVar12 + 0x2744) + aiStack_a0[(byte)pRVar6->unk_04];
        if (*(int *)(iVar12 + 0x2744) < 0) {
          *(undefined4 *)(iVar12 + 0x2744) = 0;
        }
        else if (9999 < *(int *)(iVar12 + 0x2744)) {
          *(undefined4 *)(iVar12 + 0x2744) = 9999;
        }
        RivalSchedule_IsComplete(pRVar6,iStack_20,0);
        iVar13 = 0;
        *(short *)(*_g_Profiles + 0x5276) = *(short *)(*_g_Profiles + 0x5276) + 1;
        *(short *)(*_g_Profiles + 0x4c30) = *(short *)(*_g_Profiles + 0x4c30) + 1;
        iVar12 = *_g_Profiles;
        do {
          if (*(int *)(iVar12 + 0x4c34) == iStack_20) {
LAB_001b7994:
            sVar4 = *(short *)pRVar6;
            goto LAB_001b7998;
          }
          if (*(int *)(iVar12 + 0x4c34) == -1) {
            iVar12 = iVar13 * 8 + *_g_Profiles;
            *(int *)(iVar12 + 0x4c34) = iStack_20;
            *(undefined4 *)(iVar12 + 0x4c38) = 0;
            goto LAB_001b7994;
          }
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + 8;
        } while (iVar13 < 200);
        sVar4 = *(short *)pRVar6;
LAB_001b7998:
        if ((sVar4 != -1) && (*(short *)(sVar4 * 2 + *_g_Profiles + 0x4b7c) == 0)) {
          iVar12 = sVar4 * 2 + param_1;
          *(short *)(iVar12 + 0x4bb8) = *(short *)(iVar12 + 0x4bb8) + 1;
          if (999 < *(short *)(iVar12 + 0x4bb8)) {
            *(undefined2 *)(iVar12 + 0x4bb8) = 999;
          }
          if ((char)pRVar6->unk_04 != '\x01') {
            Flags_Set(uVar11,0x100000);
          }
        }
        if (iStack_1c != -1) {
          pRVar5 = GameState_Elem_f0_xcc(2);
          pRVar6 = GameState_Elem_2fa0_x17c((int)(char)pRVar5->unk_09);
          iVar12 = iStack_1c * 2 + param_1;
          *(short *)(iVar12 + 0x43ac) = *(short *)(iVar12 + 0x43ac) + 1;
          if (999 < *(short *)(iVar12 + 0x43ac)) {
            *(undefined2 *)(iVar12 + 0x43ac) = 999;
          }
          if (((*(short *)pRVar6 != -1) &&
              (*(short *)(*(short *)pRVar6 * 2 + *_g_Profiles + 0x4b7c) == 0)) &&
             ((char)pRVar6->unk_04 != '\x01')) {
            Flags_Set(uVar11,0x100000);
          }
          iVar12 = *_g_Profiles;
          *(int *)(iVar12 + 0x2744) = *(int *)(iVar12 + 0x2744) + aiStack_a0[(byte)pRVar6->unk_04];
          if (*(int *)(iVar12 + 0x2744) < 0) {
            *(undefined4 *)(iVar12 + 0x2744) = 0;
          }
          else if (9999 < *(int *)(iVar12 + 0x2744)) {
            *(undefined4 *)(iVar12 + 0x2744) = 9999;
          }
          RivalSchedule_IsComplete(pRVar6,iStack_1c,0);
          iVar13 = 0;
          iVar12 = *_g_Profiles;
          do {
            if (*(int *)(iVar12 + 0x4c34) == iStack_1c) break;
            if (*(int *)(iVar12 + 0x4c34) == -1) {
              iVar12 = iVar13 * 8 + *_g_Profiles;
              *(int *)(iVar12 + 0x4c34) = iStack_1c;
              *(undefined4 *)(iVar12 + 0x4c38) = 0;
              break;
            }
            iVar13 = iVar13 + 1;
            iVar12 = iVar12 + 8;
          } while (iVar13 < 200);
        }
      }
    }
    else {
      *(short *)(param_1 + 0x5312) = *(short *)(param_1 + 0x5312) + 1;
      if (9999 < *(short *)(param_1 + 0x5312)) {
        *(undefined2 *)(param_1 + 0x5312) = 9999;
      }
      *(short *)(param_1 + 0x5310) = *(short *)(param_1 + 0x5310) + 1;
      if (9999 < *(short *)(param_1 + 0x5310)) {
        *(undefined2 *)(param_1 + 0x5310) = 9999;
      }
      iVar13 = iStack_20 * 2 + param_1;
      *(short *)(iVar13 + 0x3fc4) = *(short *)(iVar13 + 0x3fc4) + 1;
      if (999 < *(short *)(iVar13 + 0x3fc4)) {
        *(undefined2 *)(iVar13 + 0x3fc4) = 999;
      }
      iVar13 = *_g_Profiles;
      *(int *)(iVar13 + 0x2744) = *(int *)(iVar13 + 0x2744) + aiStack_60[(byte)pRVar6->unk_04];
      if (*(int *)(iVar13 + 0x2744) < 0) {
        *(undefined4 *)(iVar13 + 0x2744) = 0;
      }
      else if (9999 < *(int *)(iVar13 + 0x2744)) {
        *(undefined4 *)(iVar13 + 0x2744) = 9999;
      }
      iVar15 = 0;
      *(short *)(*_g_Profiles + 0x5274) = *(short *)(*_g_Profiles + 0x5274) + 1;
      *(short *)(*_g_Profiles + 0x4c30) = *(short *)(*_g_Profiles + 0x4c30) + 1;
      iVar13 = *_g_Profiles;
      iVar16 = iVar13;
      do {
        if (*(int *)(iVar16 + 0x4c34) == iStack_20) {
          iVar13 = iVar15 * 8 + iVar13;
          if (*(int *)(iVar13 + 0x4c38) == 0) {
            *(undefined4 *)(iVar13 + 0x4c38) = 1;
          }
          break;
        }
        if (*(int *)(iVar16 + 0x4c34) == -1) {
          iVar13 = iVar15 * 8 + iVar13;
          *(int *)(iVar13 + 0x4c34) = iStack_20;
          *(undefined4 *)(iVar13 + 0x4c38) = 1;
          break;
        }
        iVar15 = iVar15 + 1;
        iVar16 = iVar16 + 8;
      } while (iVar15 < 200);
      if (*(short *)pRVar6 == -1) {
        RivalSchedule_IsComplete(pRVar6,iStack_20,1);
      }
      else {
        iVar13 = *(short *)pRVar6 * 2;
        if (*(short *)(iVar13 + *_g_Profiles + 0x4b7c) == 0) {
          if ((char)pRVar6->unk_04 == '\x01') {
            iVar13 = iVar13 + param_1;
            *(short *)(iVar13 + 0x4b7c) = *(short *)(iVar13 + 0x4b7c) + 1;
            if (999 < *(short *)(iVar13 + 0x4b7c)) {
              *(undefined2 *)(iVar13 + 0x4b7c) = 999;
            }
            iVar16 = 0;
            *(undefined2 *)(*(short *)pRVar6 * 2 + *_g_Profiles + 0x3f80) = 0;
            for (iVar13 = iVar12; *(int *)(iVar13 + 0x80) != -1; iVar13 = iVar13 + 4) {
              pRVar7 = GameState_Elem_2fa0_x17c(iVar16 + 1);
              RivalSchedule_IsComplete(pRVar7,*(undefined4 *)(iVar13 + 0x80),1);
              iVar16 = iVar16 + 1;
            }
          }
          else {
            sVar4 = GameState_Get_c4();
            *(short *)(*(short *)pRVar6 * 2 + *_g_Profiles + 0x3f80) = sVar4 + 1;
          }
        }
        else {
          RivalSchedule_IsComplete(pRVar6,iStack_20,1);
        }
      }
      if ((*(short *)(iStack_20 * 2 + param_1 + 0x3fc4) == 1) &&
         (bVar1 = (byte)pRVar6->unk_04, bVar1 < 0xd)) {
                    /* WARNING: Switch is manually overridden */
        switch(bVar1) {
        case 9:
          uVar2 = *(uint *)&pRVar6->field_0x14;
          if ((uVar2 & 4) == 0) {
            if ((uVar2 & 2) == 0) {
              if ((uVar2 & 0x40) == 0) {
                if ((uVar2 & 8) == 0) {
                  if ((uVar2 & 0x10) == 0) {
                    if ((uVar2 & 0x20) == 0) {
                      if ((uVar2 & 0x100) != 0) {
                        *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) | 0x100;
                      }
                    }
                    else {
                      *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) | 0x80;
                    }
                  }
                  else {
                    *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) | 0x40;
                  }
                }
                else {
                  *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) | 0x20;
                }
              }
              else {
                *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) | 0x10;
              }
            }
            else {
              *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) | 8;
            }
          }
          else {
            *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) | 4;
          }
          break;
        case 10:
          *(uint *)(param_1 + 0x272c) = *(uint *)(param_1 + 0x272c) | 2;
        }
      }
      cVar3 = (char)pRVar6->unk_04;
      if (cVar3 == '\x06') {
        iVar13 = *_g_Profiles;
        if (*(int *)(iVar13 + 0x2a70) < 100) {
          *(undefined4 *)(*(int *)(iVar13 + 0x2a70) * 8 + iVar13 + 0x2750) = 0x100;
          *(undefined4 *)(*(int *)(iVar13 + 0x2a70) * 8 + iVar13 + 0x2754) = 0xffffffff;
          *(int *)(iVar13 + 0x2a70) = *(int *)(iVar13 + 0x2a70) + 1;
        }
        *(undefined4 *)(iStack_20 * 4 + *_g_Profiles + 0x37b0) = 0;
        iVar13 = *_g_Profiles;
        *(undefined2 *)(iVar13 + 0x52c4) = 0;
        *(undefined2 *)(iVar13 + 0x52c6) = 0;
        *(undefined4 *)(iVar13 + 0x52cc) = 0;
        *(uint *)(*_g_Profiles + 0x272c) = *(uint *)(*_g_Profiles + 0x272c) | 0x1000;
      }
      else if (cVar3 == '\x05') {
        iVar13 = *_g_Profiles;
        *(undefined2 *)(iVar13 + 0x5280) = 0;
        *(undefined2 *)(iVar13 + 0x5282) = 0;
        *(undefined4 *)(iVar13 + 0x5288) = 0;
        *(undefined4 *)(iStack_20 * 4 + *_g_Profiles + 0x37b0) = 0;
        sVar4 = *(short *)(iStack_20 * 2 + param_1 + 0x3fc4);
        iVar13 = (int)sVar4;
        if (iVar13 % 0x14 == 0) {
          iVar16 = *_g_Profiles;
          if (*(int *)(iVar16 + 0x2a70) < 100) {
            *(undefined4 *)(*(int *)(iVar16 + 0x2a70) * 8 + iVar16 + 0x2750) = 0x80000;
            *(int *)(*(int *)(iVar16 + 0x2a70) * 8 + iVar16 + 0x2754) =
                 (iVar13 / 0x14 + (iVar13 >> 0x1f)) - ((int)sVar4 >> 0x1f);
            *(int *)(iVar16 + 0x2a70) = *(int *)(iVar16 + 0x2a70) + 1;
          }
          *(uint *)(*_g_Profiles + 0x272c) = *(uint *)(*_g_Profiles + 0x272c) | 0x2000;
        }
        else {
          *(uint *)(*_g_Profiles + 0x272c) = *(uint *)(*_g_Profiles + 0x272c) | 0x1000;
        }
      }
      if (iStack_1c != -1) {
        pRVar5 = GameState_Elem_f0_xcc(2);
        pRVar6 = GameState_Elem_2fa0_x17c((int)(char)pRVar5->unk_09);
        iVar13 = iStack_1c * 2 + param_1;
        *(short *)(iVar13 + 0x3fc4) = *(short *)(iVar13 + 0x3fc4) + 1;
        if (999 < *(short *)(iVar13 + 0x3fc4)) {
          *(undefined2 *)(iVar13 + 0x3fc4) = 999;
        }
        iVar13 = *_g_Profiles;
        *(int *)(iVar13 + 0x2744) = *(int *)(iVar13 + 0x2744) + aiStack_60[(byte)pRVar6->unk_04];
        if (*(int *)(iVar13 + 0x2744) < 0) {
          *(undefined4 *)(iVar13 + 0x2744) = 0;
        }
        else if (9999 < *(int *)(iVar13 + 0x2744)) {
          *(undefined4 *)(iVar13 + 0x2744) = 9999;
        }
        iVar15 = 0;
        iVar13 = *_g_Profiles;
        iVar16 = iVar13;
        do {
          if (*(int *)(iVar16 + 0x4c34) == iStack_1c) {
            iVar13 = iVar15 * 8 + iVar13;
            if (*(int *)(iVar13 + 0x4c38) == 0) {
              *(undefined4 *)(iVar13 + 0x4c38) = 1;
            }
            break;
          }
          if (*(int *)(iVar16 + 0x4c34) == -1) {
            iVar13 = iVar15 * 8 + iVar13;
            *(int *)(iVar13 + 0x4c34) = iStack_1c;
            *(undefined4 *)(iVar13 + 0x4c38) = 1;
            break;
          }
          iVar15 = iVar15 + 1;
          iVar16 = iVar16 + 8;
        } while (iVar15 < 200);
        if (*(short *)pRVar6 == -1) {
          RivalSchedule_IsComplete(pRVar6,iStack_1c,1);
        }
        else {
          iVar13 = *(short *)pRVar6 * 2;
          if (*(short *)(iVar13 + *_g_Profiles + 0x4b7c) == 0) {
            if ((char)pRVar6->unk_04 == '\x01') {
              iVar13 = iVar13 + param_1;
              *(short *)(iVar13 + 0x4b7c) = *(short *)(iVar13 + 0x4b7c) + 1;
              if (999 < *(short *)(iVar13 + 0x4b7c)) {
                *(undefined2 *)(iVar13 + 0x4b7c) = 999;
              }
              iVar13 = 0;
              *(undefined2 *)(*(short *)pRVar6 * 2 + *_g_Profiles + 0x3f80) = 0;
              for (; *(int *)(iVar12 + 0x80) != -1; iVar12 = iVar12 + 4) {
                pRVar7 = GameState_Elem_2fa0_x17c(iVar13 + 1);
                RivalSchedule_IsComplete(pRVar7,*(undefined4 *)(iVar12 + 0x80),1);
                iVar13 = iVar13 + 1;
              }
            }
            else {
              sVar4 = GameState_Get_c4();
              *(short *)(*(short *)pRVar6 * 2 + *_g_Profiles + 0x3f80) = sVar4 + 1;
            }
          }
          else {
            RivalSchedule_IsComplete(pRVar6,iStack_1c,1);
          }
        }
        if ((*(short *)(iStack_1c * 2 + param_1 + 0x3fc4) == 1) &&
           (bVar1 = (byte)pRVar6->unk_04, bVar1 < 0xd)) {
                    /* WARNING: Switch is manually overridden */
          switch(bVar1) {
          case 6:
            iVar12 = *_g_Profiles;
            if (*(int *)(iVar12 + 0x2a70) < 100) {
              *(undefined4 *)(*(int *)(iVar12 + 0x2a70) * 8 + iVar12 + 0x2750) = 0x100;
              *(undefined4 *)(*(int *)(iVar12 + 0x2a70) * 8 + iVar12 + 0x2754) = 0xffffffff;
              *(int *)(iVar12 + 0x2a70) = *(int *)(iVar12 + 0x2a70) + 1;
            }
          }
        }
      }
    }
  }
  cVar3 = RaceCtx_Get_8();
  if (((cVar3 == '\0') || (cVar3 = RaceCtx_Get_8(), cVar3 == '\x01')) ||
     (cVar3 = RaceCtx_Get_8(), cVar3 == '\x02')) {
    uVar11 = GameState_Get_354();
    Profile_AdvanceCounter(param_1 + 0x5308,uVar11);
    iVar12 = RaceProg_GetArray_1c(0);
    cVar3 = GameState_Get_354();
    if ((cVar3 == '\x04') || (cVar3 == '\x05')) {
      sVar4 = *(short *)(param_1 + 0x530e);
      if (sVar4 == 0) {
        *(undefined4 *)(param_1 + 0x2bc0) = 0;
      }
      else {
        *(int *)(param_1 + 0x2bc0) =
             (*(int *)(iVar12 + 0x10) + (sVar4 + -1) * *(int *)(param_1 + 0x2bc0)) / (int)sVar4;
      }
      *(float *)(param_1 + 0x2bb4) =
           ((float)(*(short *)(param_1 + 0x5308) + -1) * *(float *)(param_1 + 0x2bb4) +
           *(float *)(iVar12 + 4) + 0.0) / (float)(int)*(short *)(param_1 + 0x5308);
      if (*(float *)(param_1 + 0x2bb8) < *(float *)(iVar12 + 8)) {
        *(float *)(param_1 + 0x2bb8) = *(float *)(iVar12 + 8);
      }
      sVar4 = *(short *)(param_1 + 0x5308);
      if (sVar4 == 0) {
        *(undefined4 *)(param_1 + 0x2bbc) = 0;
      }
      else {
        *(int *)(param_1 + 0x2bbc) =
             (*(int *)(iVar12 + 0xc) + (sVar4 + -1) * *(int *)(param_1 + 0x2bbc)) / (int)sVar4;
      }
    }
    else if (cVar3 == '\0') {
      piVar8 = (int *)RaceProg_GetArray_28(0);
      GameState_Set_39c(*piVar8);
      sVar4 = *(short *)(param_1 + 0x530c);
      if (sVar4 == 0) {
        *(undefined4 *)(param_1 + 0x2bd4) = 0;
      }
      else {
        *(int *)(param_1 + 0x2bd4) =
             (*piVar8 + (sVar4 + -1) * *(int *)(param_1 + 0x2bd4)) / (int)sVar4;
      }
      if (*piVar8 == 5000000) {
        iVar13 = *_g_Profiles;
        if (*(int *)(iVar13 + 0x2a70) < 100) {
          *(undefined4 *)(*(int *)(iVar13 + 0x2a70) * 8 + iVar13 + 0x2750) = 0x20000;
          *(undefined4 *)(*(int *)(iVar13 + 0x2a70) * 8 + iVar13 + 0x2754) = 0xffffffff;
          *(int *)(iVar13 + 0x2a70) = *(int *)(iVar13 + 0x2a70) + 1;
        }
      }
      sVar4 = *(short *)(param_1 + 0x530e);
      if (sVar4 == 0) {
        *(undefined4 *)(param_1 + 0x2bc0) = 0;
      }
      else {
        *(int *)(param_1 + 0x2bc0) =
             (*(int *)(iVar12 + 0x10) + (sVar4 + -1) * *(int *)(param_1 + 0x2bc0)) / (int)sVar4;
      }
      *(float *)(param_1 + 0x2bb4) =
           ((float)(*(short *)(param_1 + 0x5308) + -1) * *(float *)(param_1 + 0x2bb4) +
           *(float *)(iVar12 + 4) + 0.0) / (float)(int)*(short *)(param_1 + 0x5308);
      if (*(float *)(param_1 + 0x2bb8) < *(float *)(iVar12 + 8)) {
        *(float *)(param_1 + 0x2bb8) = *(float *)(iVar12 + 8);
      }
      sVar4 = *(short *)(param_1 + 0x5308);
      if (sVar4 == 0) {
        *(undefined4 *)(param_1 + 0x2bbc) = 0;
      }
      else {
        *(int *)(param_1 + 0x2bbc) =
             (*(int *)(iVar12 + 0xc) + (sVar4 + -1) * *(int *)(param_1 + 0x2bbc)) / (int)sVar4;
      }
    }
    else if (cVar3 == '\x01') {
      uVar11 = RaceProg_GetArray_34(0);
      iVar13 = maybe_RaceProg_CountB(uVar11);
      if (*(int *)(param_1 + 0x2bcc) < iVar13) {
        *(int *)(param_1 + 0x2bcc) = iVar13;
      }
      sVar4 = *(short *)(param_1 + 0x530a);
      if (sVar4 == 0) {
        *(undefined4 *)(param_1 + 0x2bc4) = 0;
      }
      else {
        *(int *)(param_1 + 0x2bc4) =
             (iVar13 + (sVar4 + -1) * *(int *)(param_1 + 0x2bc4)) / (int)sVar4;
      }
      iVar13 = maybe_RaceProg_CountA(uVar11);
      if (*(int *)(param_1 + 0x2bd0) < iVar13) {
        *(int *)(param_1 + 0x2bd0) = iVar13;
        iVar13 = *_g_Profiles;
        if (*(int *)(iVar13 + 0x2a70) < 100) {
          *(undefined4 *)(*(int *)(iVar13 + 0x2a70) * 8 + iVar13 + 0x2750) = 0x10000;
          *(undefined4 *)(*(int *)(iVar13 + 0x2a70) * 8 + iVar13 + 0x2754) = 0xffffffff;
          *(int *)(iVar13 + 0x2a70) = *(int *)(iVar13 + 0x2a70) + 1;
        }
      }
      iVar13 = Race_GetField_8b4(uVar11);
      if (*(int *)(param_1 + 0x2bc8) < iVar13) {
        *(int *)(param_1 + 0x2bc8) = iVar13;
      }
      *(float *)(param_1 + 0x2bb4) =
           ((float)(*(short *)(param_1 + 0x5308) + -1) * *(float *)(param_1 + 0x2bb4) +
           *(float *)(iVar12 + 4) + 0.0) / (float)(int)*(short *)(param_1 + 0x5308);
      if (*(float *)(param_1 + 0x2bb8) < *(float *)(iVar12 + 8)) {
        *(float *)(param_1 + 0x2bb8) = *(float *)(iVar12 + 8);
      }
      sVar4 = *(short *)(param_1 + 0x5308);
      if (sVar4 == 0) {
        *(undefined4 *)(param_1 + 0x2bbc) = 0;
      }
      else {
        *(int *)(param_1 + 0x2bbc) =
             (*(int *)(iVar12 + 0xc) + (sVar4 + -1) * *(int *)(param_1 + 0x2bbc)) / (int)sVar4;
      }
    }
    else {
      *(float *)(param_1 + 0x2bb4) =
           ((float)(*(short *)(param_1 + 0x5308) + -1) * *(float *)(param_1 + 0x2bb4) +
           *(float *)(iVar12 + 4) + 0.0) / (float)(int)*(short *)(param_1 + 0x5308);
      if (*(float *)(param_1 + 0x2bb8) < *(float *)(iVar12 + 8)) {
        *(float *)(param_1 + 0x2bb8) = *(float *)(iVar12 + 8);
      }
      sVar4 = *(short *)(param_1 + 0x5308);
      if (sVar4 == 0) {
        *(undefined4 *)(param_1 + 0x2bbc) = 0;
      }
      else {
        *(int *)(param_1 + 0x2bbc) =
             (*(int *)(iVar12 + 0xc) + (sVar4 + -1) * *(int *)(param_1 + 0x2bbc)) / (int)sVar4;
      }
    }
  }
  return;
}

// 0x001b7d60  size 0x3c
void Garage_GetCurrentCarSpec(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = CarRec_GetColorSlot(param_1 + *(short *)(param_1 + 0x13ec) * 0xcc);
  CarRec_ClearModel(uVar1);
  return;
}

// 0x001b7da0  size 0x80
void Garage_GetCurrentCarStats(int param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = CarRec_GetColorSlot(param_1 + *(short *)(param_1 + 0x13ec) * 0xcc);
  if (param_3 == 0) {
    CarRec_SetModel(uVar1,param_4);
  }
  else {
    CarRec_SetModel(uVar1,(short)param_4 + 0x1e);
  }
  return;
}

// 0x001b7e20  size 0x258
void Opponent_BuildFromTeam(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined2 uStack_550;
  undefined2 uStack_54e;
  undefined1 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined1 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined1 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined2 uStack_518;
  undefined2 uStack_516;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 auStack_50c [23];
  undefined4 auStack_4b0 [23];
  undefined4 auStack_454 [16];
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined2 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 auStack_3c8 [2];
  undefined8 uStack_3c0;
  undefined4 auStack_3b8 [2];
  undefined1 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined1 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined2 uStack_398;
  undefined2 uStack_396;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 auStack_38c [23];
  undefined4 auStack_330 [23];
  undefined4 auStack_2d4 [16];
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined2 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 auStack_250 [52];
  undefined8 auStack_180 [48];
  
  uVar3 = TeamDb_Find(param_2);
  uVar4 = GameDb_GetRival(uVar3);
  memcpy(&uStack_550,uVar4,0x17c);
  puVar11 = auStack_50c;
  puVar9 = auStack_38c;
  iVar8 = 0x17;
  uStack_3c0._0_4_ = uStack_540;
  auStack_3b8[0] = uStack_538;
  auStack_3b8[1] = uStack_534;
  uStack_3d0._4_1_ = uStack_54c;
  auStack_3c8[0] = uStack_548;
  auStack_3c8[1] = uStack_544;
  uStack_3a8 = uStack_528;
  uStack_3d0._0_2_ = uStack_550;
  uStack_3d0._2_2_ = uStack_54e;
  uStack_3c0._4_4_ = uStack_53c;
  uStack_3b0 = uStack_530;
  uStack_3ac = uStack_52c;
  uStack_394 = uStack_514;
  uStack_3a4 = uStack_524;
  uStack_3a0 = uStack_520;
  uStack_39c = uStack_51c;
  uStack_398 = uStack_518;
  uStack_396 = uStack_516;
  uStack_390 = uStack_510;
  do {
    iVar8 = iVar8 + -1;
    *puVar9 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar9 = puVar9 + 1;
  } while (0 < iVar8);
  puVar11 = auStack_4b0;
  puVar9 = auStack_330;
  iVar8 = 0x17;
  do {
    iVar8 = iVar8 + -1;
    *puVar9 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar9 = puVar9 + 1;
  } while (0 < iVar8);
  puVar11 = auStack_454;
  puVar9 = auStack_2d4;
  iVar8 = 8;
  do {
    iVar8 = iVar8 + -1;
    uVar5 = puVar11[1];
    *puVar9 = *puVar11;
    puVar9[1] = uVar5;
    puVar11 = puVar11 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar8);
  iVar8 = 0x17;
  uStack_294 = uStack_414;
  uStack_290 = uStack_410;
  uStack_28c = uStack_40c;
  uStack_288 = uStack_408;
  uStack_264 = uStack_3e4;
  uStack_284 = uStack_404;
  uStack_260 = uStack_3e0;
  uStack_280 = uStack_400;
  uStack_25c = uStack_3dc;
  uStack_268 = uStack_3e8;
  uStack_27c = uStack_3fc;
  uStack_278 = uStack_3f8;
  uStack_274 = uStack_3f4;
  uStack_270 = uStack_3f0;
  uStack_258 = uStack_3d8;
  uStack_26c = uStack_3ec;
  puVar1 = &uStack_3d0;
  puVar2 = auStack_180;
  do {
    puVar12 = puVar2;
    puVar10 = puVar1;
    uVar5 = *(undefined4 *)((int)puVar10 + 4);
    uVar6 = *(undefined4 *)(puVar10 + 1);
    uVar7 = *(undefined4 *)((int)puVar10 + 0xc);
    iVar8 = iVar8 + -1;
    *(undefined4 *)puVar12 = *(undefined4 *)puVar10;
    *(undefined4 *)((int)puVar12 + 4) = uVar5;
    *(undefined4 *)(puVar12 + 1) = uVar6;
    *(undefined4 *)((int)puVar12 + 0xc) = uVar7;
    puVar1 = puVar10 + 2;
    puVar2 = puVar12 + 2;
  } while (0 < iVar8);
  uVar5 = *(undefined4 *)(puVar10 + 3);
  puVar12[2] = puVar10[2];
  *(undefined4 *)(puVar12 + 3) = uVar5;
  Opponent_BuildEntry(auStack_180,0,auStack_250,0xffffffffffffffff,param_3);
  puVar9 = auStack_250;
  iVar8 = 0x33;
  do {
    iVar8 = iVar8 + -1;
    *param_1 = *puVar9;
    puVar9 = puVar9 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar8);
  return;
}

