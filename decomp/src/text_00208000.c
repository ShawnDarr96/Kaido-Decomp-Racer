// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00208000 - 0x0020c000
#include "ghidra_types.h"

// 0x00208950  size 0xc8
void TitleCam_SetKey(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  iVar1 = (int)param_1;
  uStack_30 = *param_2;
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  uStack_24 = param_2[3];
  *(undefined4 *)(iVar1 + 0xd4) = 0;
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xdc) = param_4;
  *(undefined4 *)(iVar1 + 0x94) = param_5;
  *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(iVar1 + 0x38);
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uStack_18 = uStack_38;
  uStack_14 = uStack_34;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  uStack_8 = uStack_28;
  uStack_4 = uStack_24;
  vu0math_sub_00132ae0(iVar1 + 0x40,param_1);
  vu0math_sub_00132ae0(iVar1 + 0x50,iVar1 + 0x10);
  vu0math_sub_00132ae0(iVar1 + 0x70,&uStack_30);
  vu0math_sub_00132ae0(iVar1 + 0x80,&uStack_40);
  return;
}

// 0x00208a20  size 0x7c
void TitleCam_SetTarget(undefined4 param_1,undefined8 param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = *param_3;
  uStack_c = param_3[1];
  uStack_8 = param_3[2];
  uStack_4 = param_3[3];
  uStack_20 = *param_4;
  uStack_1c = param_4[1];
  uStack_18 = param_4[2];
  uStack_14 = param_4[3];
  iVar1 = (int)param_2;
  *(undefined4 *)(iVar1 + 0xd4) = 0;
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xdc) = param_5;
  *(undefined4 *)(iVar1 + 0x94) = param_6;
  *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(iVar1 + 0x90) = param_1;
  vu0math_sub_00132ae0(iVar1 + 0x40,param_2);
  vu0math_sub_00132ae0(iVar1 + 0x50,iVar1 + 0x10);
  vu0math_sub_00132ae0(iVar1 + 0x70,&uStack_10);
  vu0math_sub_00132ae0(iVar1 + 0x80,&uStack_20);
  return;
}

// 0x00208aa0  size 0x54
void TitleCam_SetSpeed(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  if (param_3 == -1) {
    param_3 = 0;
  }
  else if (param_3 < 1) {
    param_3 = 0;
  }
  *(int *)(param_1 + 0xd8) = param_3;
  if (param_4 == 0xffffffff) {
    param_4 = **(uint **)(param_1 + 0xd4);
  }
  else if (**(uint **)(param_1 + 0xd4) <= param_4) {
    param_4 = **(uint **)(param_1 + 0xd4);
  }
  *(uint *)(param_1 + 0xdc) = param_4;
  return;
}

// 0x00208b00  size 0x154
void TitleCam_Advance(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0xd8) = 0;
  *(undefined4 *)(iVar4 + 0xdc) = 0;
  iVar5 = (int)param_2;
  *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar5 + 0x30);
  uRam00431190 = *(undefined4 *)(iVar5 + 0x34);
  uRam00431194 = *(undefined4 *)(iVar5 + 0x38);
  uVar1 = (ulong)uRam00431170;
  uVar2 = newlib_sub_0012f600((*(float *)(iVar4 + 0x38) / 57.29578) / 2.0);
  uVar2 = libm_sub_00120618(uVar2);
  uVar2 = __divdf3(0x3ff0000000000000,uVar2);
  uVar3 = newlib_sub_0012f600((float)uVar1 / 2.0);
  uVar2 = __muldf3(uVar3,uVar2);
  uVar6 = maybe___extendsfdf2(uVar2);
  Cam_SetPitch(uVar6,*(undefined4 *)(iVar4 + 0xd0));
  vu0math_sub_00132ae0(param_1,param_2);
  vu0math_sub_00132ae0(iVar4 + 0x10,iVar5 + 0x10);
  vu0math_sub_00132ae0(iVar4 + 0x20,iVar5 + 0x20);
  return;
}

// 0x00208c60  size 0x164
void TitleCam_StartPath(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (&PTR_DAT_003298b0)[param_2];
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0xd8) = 0;
  *(undefined4 *)(iVar5 + 0xdc) = 0;
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(puVar1 + 0x30);
  uRam00431190 = *(undefined4 *)(puVar1 + 0x34);
  uRam00431194 = *(undefined4 *)(puVar1 + 0x38);
  uVar2 = (ulong)uRam00431170;
  uVar3 = newlib_sub_0012f600((*(float *)(iVar5 + 0x38) / 57.29578) / 2.0);
  uVar3 = libm_sub_00120618(uVar3);
  uVar3 = __divdf3(0x3ff0000000000000,uVar3);
  uVar4 = newlib_sub_0012f600((float)uVar2 / 2.0);
  uVar3 = __muldf3(uVar4,uVar3);
  uVar6 = maybe___extendsfdf2(uVar3);
  Cam_SetPitch(uVar6,*(undefined4 *)(iVar5 + 0xd0));
  vu0math_sub_00132ae0(param_1,puVar1);
  vu0math_sub_00132ae0(iVar5 + 0x10,puVar1 + 0x10);
  vu0math_sub_00132ae0(iVar5 + 0x20,puVar1 + 0x20);
  return;
}

// 0x00208dd0  size 0x9c
void TitleCam_SetFov(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x34] = param_2;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xbf800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0x3f800000;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x42040000;
  vu0math_sub_00132b90(param_1 + 0x28);
  vu0math_sub_00132b90(param_1 + 0x2c);
  vu0math_sub_00132b90(param_1 + 0x30);
  vu0math_sub_00132b90(param_1 + 0x38);
  vu0math_sub_00132b90(param_1 + 0x3c);
  return;
}

// 0x00208e70  size 0x94
void TitleCam_ApplyLight(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  vu0math_sub_00132ae0(*(undefined4 *)(iVar1 + 0x70),param_1);
  vu0math_sub_00132ae0(*(int *)(iVar1 + 0x70) + 0x50,iVar1 + 0x10);
  vu0math_sub_00132ae0(*(int *)(iVar1 + 0x70) + 0x60,iVar1 + 0x20);
  vu0math_sub_00132ae0(*(int *)(iVar1 + 0x70) + 0x70,iVar1 + 0x30);
  vu0math_sub_00132ae0(*(int *)(iVar1 + 0x70) + 0x80,iVar1 + 0x40);
  vu0math_sub_00132ae0(*(int *)(iVar1 + 0x70) + 0x90,iVar1 + 0x50);
  vu0math_sub_00132ae0(*(int *)(iVar1 + 0x70) + 0xa0,iVar1 + 0x60);
  Light_UpdateMatrices(*(undefined4 *)(iVar1 + 0x70));
  return;
}

// 0x00208f10  size 0x78
void TitleCam_CopyPosition(int param_1,int param_2)

{
  vu0math_sub_00132ae0();
  vu0math_sub_00132ae0(param_1 + 0x10,param_2 + 0x10);
  vu0math_sub_00132ae0(param_1 + 0x20,param_2 + 0x20);
  vu0math_sub_00132ae0(param_1 + 0x30,param_2 + 0x30);
  vu0math_sub_00132ae0(param_1 + 0x40,param_2 + 0x40);
  vu0math_sub_00132ae0(param_1 + 0x50,param_2 + 0x50);
  vu0math_sub_00132ae0(param_1 + 0x60,param_2 + 0x60);
  return;
}

// 0x00208f90  size 0x8c
void TitleCam_StartPathB(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (&PTR_DAT_003298a0)[param_2];
  vu0math_sub_00132ae0(param_1,puVar1);
  iVar2 = (int)param_1;
  vu0math_sub_00132ae0(iVar2 + 0x10,puVar1 + 0x10);
  vu0math_sub_00132ae0(iVar2 + 0x20,puVar1 + 0x20);
  vu0math_sub_00132ae0(iVar2 + 0x30,puVar1 + 0x30);
  vu0math_sub_00132ae0(iVar2 + 0x40,puVar1 + 0x40);
  vu0math_sub_00132ae0(iVar2 + 0x50,puVar1 + 0x50);
  vu0math_sub_00132ae0(iVar2 + 0x60,puVar1 + 0x60);
  return;
}

// 0x00209020  size 0x30
undefined4 TitleCam_GetPathCount(undefined4 param_1,ulong param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x00209040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_00365a40)[(int)param_2])();
    return uVar1;
  }
  return param_1;
}

// 0x00209240  size 0x1c
/* 0xc */

int GameDb_GetEncounter(int param_1)

{
  return *(int *)(iGpffff8df8 + 0x250) + param_1 * 0xc;
}

// 0x00209260  size 0x1c
/* 0x50 */

int GameDb_GetRivalCar(int param_1)

{
  return *(int *)(iGpffff8df8 + 0x24c) + param_1 * 0x50;
}

// 0x00209280  size 0x1c
/* 0x28 */

int GameDb_GetTeamInfo(int param_1)

{
  return *(int *)(iGpffff8df8 + 0x248) + param_1 * 0x28;
}

// 0x002092a0  size 0x1c
/* 0x44 */

int GameDb_GetTeam(int param_1)

{
  return *(int *)(iGpffff8df8 + 0x244) + param_1 * 0x44;
}

// 0x002092c0  size 0x24
/* 0x17c; 17 callers */

int GameDb_GetRival(int param_1)

{
  return *(int *)(iGpffff8df8 + 0x240) + param_1 * 0x17c;
}

// 0x002092f0  size 0xa8
int GameDb_FindRival(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  if (0 < *(int *)(iGpffff8df8 + 0x54)) {
    iVar3 = *(int *)(iGpffff8df8 + 0x240);
    do {
      if ((((*(short *)(iVar3 + 2) != -1) && (cVar1 = *(char *)(iVar3 + 4), cVar1 != '\x06')) &&
          (cVar1 != '\x05')) &&
         (((cVar1 != '\v' && (cVar1 != '\f')) &&
          ((iVar4 != *(int *)(iGpffff8df8 + 0x1e8) && (iVar4 != *(int *)(iGpffff8df8 + 0x1e4)))))))
      {
        iVar2 = iVar2 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x17c;
    } while (iVar4 < *(int *)(iGpffff8df8 + 0x54));
  }
  return iVar2;
}

// 0x002093a0  size 0x20
int GameDb_GetCourseSection(uint param_1,int param_2)

{
  return *(int *)((param_1 & 0xff) * 4 + iGpffff8df8 + 0x220) + param_2 * 0x20;
}

// 0x002093c0  size 0x1c
/* 0x38 */

int GameDb_GetCourse(int param_1)

{
  return *(int *)(iGpffff8df8 + 0x21c) + param_1 * 0x38;
}

// 0x002093e0  size 0xc
undefined4 GameDb_GetTeamCount(void)

{
  return *(undefined4 *)(iGpffff8df8 + 4);
}

// 0x002093f0  size 0x24
/* 0x58 */

int GameDb_GetTeamRecord(int param_1)

{
  return *(int *)(iGpffff8df8 + 0x1f0) + param_1 * 0x58;
}

// 0x00209420  size 0x14
undefined4 GameDb_GetTeamMemberCount(int param_1)

{
  return *(undefined4 *)(param_1 * 4 + iGpffff8df8 + 0xc);
}

// 0x00209440  size 0x1c
/* 0x40 */

int GameDb_GetTeamMember(int param_1,int param_2)

{
  return *(int *)(param_1 * 4 + iGpffff8df8 + 0x1f8) + param_2 * 0x40;
}

// 0x00209460  size 0xc
undefined4 GameDb_GetEventCount(void)

{
  return *(undefined4 *)(iGpffff8df8 + 8);
}

// 0x00209470  size 0x1c
/* 0x48 */

int GameDb_GetEvent(int param_1)

{
  return *(int *)(iGpffff8df8 + 500) + param_1 * 0x48;
}

// 0x00209490  size 0xc
void GameDb_IsLoading(void)

{
  File_IsBusy(*puGpffff8df8);
  return;
}

// 0x002094a0  size 0x98
void GameDb_ApplyToProfile(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = iGpffff8df8;
  if (param_1 == 0) {
    iVar2 = Profile_Get(0);
    Opponent_SetupGrid(iVar2 + 0x5280,0,*(int *)(iVar1 + 0x240) + *(int *)(iVar1 + 0x1e4) * 0x17c);
  }
  else {
    iVar2 = Profile_Get(0);
    Opponent_SetupGrid(iVar2 + 0x52c4,1,*(int *)(iVar1 + 0x240) + *(int *)(iVar1 + 0x1e8) * 0x17c);
  }
  return;
}

// 0x00209540  size 0xe0
void GameDb_ApplyAllProfiles(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(iGpffff8df8 + 0x54)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(iGpffff8df8 + 0x240) + iVar3;
      if (*(char *)(iVar2 + 4) == '\x05') {
        iVar1 = Profile_Get(0);
        Opponent_SetupGrid(iVar1 + 0x5280,0,iVar2);
        *(int *)(iGpffff8df8 + 0x1e4) = iVar4;
      }
      if (*(char *)(iVar2 + 4) == '\x06') {
        iVar2 = Profile_Get(0);
        Opponent_SetupGrid(iVar2 + 0x52c4,1,*(int *)(iGpffff8df8 + 0x240) + iVar3);
        *(int *)(iGpffff8df8 + 0x1e8) = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x17c;
    } while (iVar4 < *(int *)(iGpffff8df8 + 0x54));
  }
  return;
}

// 0x00209630  size 0x9ac
void GameDb_Load(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(iGpffff89d4 + 0x20320);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20314);
  }
  puGpffff8df8[1] = uVar2 / 0x58;
  uVar1 = Arc_LoadFileEx(0x19c0,puGpffff8df8[0x7c],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20334);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20328);
  }
  puGpffff8df8[2] = uVar2 / 0x48;
  uVar1 = Arc_LoadFileEx(0x19c1,puGpffff8df8[0x7d],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20348);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x2033c);
  }
  puGpffff8df8[3] = uVar2 >> 6;
  uVar1 = Arc_LoadFileEx(0x19c2,puGpffff8df8[0x7e],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20370);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20364);
  }
  puGpffff8df8[4] = uVar2 >> 6;
  uVar1 = Arc_LoadFileEx(0x19c4,puGpffff8df8[0x7f],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20384);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20378);
  }
  puGpffff8df8[5] = uVar2 >> 6;
  uVar1 = Arc_LoadFileEx(0x19c5,puGpffff8df8[0x80],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20398);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x2038c);
  }
  puGpffff8df8[6] = uVar2 >> 6;
  uVar1 = Arc_LoadFileEx(0x19c6,puGpffff8df8[0x81],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x203ac);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x203a0);
  }
  puGpffff8df8[7] = uVar2 >> 6;
  uVar1 = Arc_LoadFileEx(0x19c7,puGpffff8df8[0x82],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x203d4);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x203c8);
  }
  puGpffff8df8[8] = uVar2 >> 6;
  uVar1 = Arc_LoadFileEx(0x19c9,puGpffff8df8[0x83],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x203c0);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x203b4);
  }
  puGpffff8df8[9] = uVar2 >> 6;
  uVar1 = Arc_LoadFileEx(0x19c8,puGpffff8df8[0x84],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x203e8);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x203dc);
  }
  puGpffff8df8[10] = uVar2 >> 6;
  uVar1 = Arc_LoadFileEx(0x19ca,puGpffff8df8[0x85],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x203fc);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x203f0);
  }
  puGpffff8df8[0xb] = uVar2 >> 6;
  uVar1 = Arc_LoadFileEx(0x19cb,puGpffff8df8[0x86],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20410);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20404);
  }
  puGpffff8df8[0xc] = uVar2 / 0x38;
  uVar1 = Arc_LoadFileEx(0x19cc,puGpffff8df8[0x87],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20424);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20418);
  }
  puGpffff8df8[0xe] = uVar2 >> 5;
  uVar1 = Arc_LoadFileEx(0x19cd,puGpffff8df8[0x89],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20438);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x2042c);
  }
  puGpffff8df8[0xd] = uVar2 >> 5;
  uVar1 = Arc_LoadFileEx(0x19ce,puGpffff8df8[0x88],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x2044c);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20440);
  }
  puGpffff8df8[0x12] = uVar2 >> 5;
  uVar1 = Arc_LoadFileEx(0x19cf,puGpffff8df8[0x8d],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20460);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20454);
  }
  puGpffff8df8[0x10] = uVar2 >> 5;
  uVar1 = Arc_LoadFileEx(0x19d0,puGpffff8df8[0x8b],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20474);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20468);
  }
  puGpffff8df8[0xf] = uVar2 >> 5;
  uVar1 = Arc_LoadFileEx(0x19d1,puGpffff8df8[0x8a],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20488);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x2047c);
  }
  puGpffff8df8[0x11] = uVar2 >> 5;
  uVar1 = Arc_LoadFileEx(0x19d2,puGpffff8df8[0x8c],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x2049c);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20490);
  }
  puGpffff8df8[0x14] = uVar2 >> 5;
  uVar1 = Arc_LoadFileEx(0x19d3,puGpffff8df8[0x8f],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x204b0);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x204a4);
  }
  puGpffff8df8[0x13] = uVar2 >> 5;
  uVar1 = Arc_LoadFileEx(0x19d4,puGpffff8df8[0x8e],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x204c4);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x204b8);
  }
  puGpffff8df8[0x15] = uVar2 / 0x17c;
  uVar1 = Arc_LoadFileEx(0x19d5,puGpffff8df8[0x90],0x209540,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x204d8);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x204cc);
  }
  puGpffff8df8[0x16] = uVar2 / 0x44;
  uVar1 = Arc_LoadFileEx(0x19d6,puGpffff8df8[0x91],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x204ec);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x204e0);
  }
  puGpffff8df8[0x17] = uVar2 / 0x28;
  uVar1 = Arc_LoadFileEx(0x19d7,puGpffff8df8[0x92],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20500);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x204f4);
  }
  puGpffff8df8[0x18] = uVar2 / 0x50;
  uVar1 = Arc_LoadFileEx(0x19d8,puGpffff8df8[0x93],0,0,0,0);
  *puGpffff8df8 = uVar1;
  uVar2 = *(uint *)(iGpffff89d4 + 0x20514);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iGpffff89d4 + 0x20508);
  }
  puGpffff8df8[0x19] = uVar2 / 0xc;
  uVar1 = Arc_LoadFileEx(0x19d9,puGpffff8df8[0x94],0,0,0,0);
  *puGpffff8df8 = uVar1;
  return;
}

// 0x00209fe0  size 0x4c
void GameDb_Free(void)

{
  if (*(int *)(iGpffff8df8 + 0x1ec) != 0) {
    Mem_Free();
    *(undefined4 *)(iGpffff8df8 + 0x1ec) = 0;
  }
  if (iGpffff8df8 != 0) {
    Mem_Free();
    iGpffff8df8 = 0;
  }
  return;
}

// 0x0020a030  size 0x594
void GameDb_Alloc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = 0;
  iRam0036f4e8 = Mem_Alloc16(0x254,param_1);
  *(undefined4 *)(iRam0036f4e8 + 0x1ec) = 0;
  iVar5 = *(int *)(iRam0036f4e8 + 0x1ec);
  while (iVar5 == 0) {
    if (iVar3 != 0) {
      uVar4 = Mem_AllocAligned(iVar3,0x40,param_1);
      *(undefined4 *)(iRam0036f4e8 + 0x1ec) = uVar4;
    }
    iVar5 = *(int *)(iRam0036f4e8 + 0x1ec);
    *(int *)(iRam0036f4e8 + 500) = iVar5;
    iVar1 = Arc_GetFileSize(0x19c1,0x19c1,1);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar1;
    }
    *(int *)(iRam0036f4e8 + 0x1f0) = iVar5;
    iVar2 = Arc_GetFileSize(0x19c0,0x19c0,1);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar1 + iVar2;
    }
    *(int *)(iRam0036f4e8 + 0x1f8) = iVar5;
    iVar3 = Arc_GetFileSize(0x19c2,0x19c2,1);
    iVar3 = iVar1 + iVar2 + iVar3;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x1fc) = iVar5;
    iVar1 = Arc_GetFileSize(0x19c4,0x19c4,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x200) = iVar5;
    iVar1 = Arc_GetFileSize(0x19c5,0x19c5,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x204) = iVar5;
    iVar1 = Arc_GetFileSize(0x19c6,0x19c6,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x208) = iVar5;
    iVar1 = Arc_GetFileSize(0x19c7,0x19c7,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x20c) = iVar5;
    iVar1 = Arc_GetFileSize(0x19c9,0x19c9,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x210) = iVar5;
    iVar1 = Arc_GetFileSize(0x19c8,0x19c8,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x214) = iVar5;
    iVar1 = Arc_GetFileSize(0x19ca,0x19ca,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x218) = iVar5;
    iVar1 = Arc_GetFileSize(0x19cb,0x19cb,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x21c) = iVar5;
    iVar1 = Arc_GetFileSize(0x19cc,0x19cc,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x220) = iVar5;
    iVar1 = Arc_GetFileSize(0x19ce,0x19ce,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x224) = iVar5;
    iVar1 = Arc_GetFileSize(0x19cd,0x19cd,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x234) = iVar5;
    iVar1 = Arc_GetFileSize(0x19cf,0x19cf,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x22c) = iVar5;
    iVar1 = Arc_GetFileSize(0x19d0,0x19d0,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x228) = iVar5;
    iVar1 = Arc_GetFileSize(0x19d1,0x19d1,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x230) = iVar5;
    iVar1 = Arc_GetFileSize(0x19d2,0x19d2,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x23c) = iVar5;
    iVar1 = Arc_GetFileSize(0x19d3,0x19d3,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x238) = iVar5;
    iVar1 = Arc_GetFileSize(0x19d4,0x19d4,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x240) = iVar5;
    iVar1 = Arc_GetFileSize(0x19d5,0x19d5,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x244) = iVar5;
    iVar1 = Arc_GetFileSize(0x19d6,0x19d6,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x248) = iVar5;
    iVar1 = Arc_GetFileSize(0x19d7,0x19d7,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x24c) = iVar5;
    iVar1 = Arc_GetFileSize(0x19d8,0x19d8,1);
    iVar3 = iVar3 + iVar1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iRam0036f4e8 + 0x1ec) + iVar3;
    }
    *(int *)(iRam0036f4e8 + 0x250) = iVar5;
    iVar5 = Arc_GetFileSize(0x19d9,0x19d9,1);
    iVar3 = iVar3 + iVar5;
    iVar5 = *(int *)(iRam0036f4e8 + 0x1ec);
  }
  return;
}

// 0x0020a5d0  size 0x70
void Save_IsBusy(void)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (-1 < *(int *)(iRam0036f4f4 + 4)) {
    lVar2 = File_IsBusy();
    if (lVar2 == 0) {
      bVar1 = true;
    }
    else {
      *(undefined4 *)(iRam0036f4f4 + 4) = 0xffffffff;
    }
  }
  if (!bVar1) {
    Save_UpdateAll();
  }
  return;
}

// 0x0020a640  size 0x3c
void SaveMgr_FreeAll(void)

{
  Save_FreeAll();
  if (*(int *)(iRam0036f4f4 + 0xc) != 0) {
    Mem_Free();
    *(undefined4 *)(iRam0036f4f4 + 0xc) = 0;
  }
  return;
}

// 0x0020a690  size 0x34
void SaveMgr_Shutdown(void)

{
  Save_Shutdown();
  if (iRam0036f4f4 != 0) {
    Mem_Free();
    iRam0036f4f4 = 0;
  }
  return;
}

// 0x0020a6d0  size 0x58
void SaveMgr_Init(undefined8 param_1)

{
  puRam0036f4f4 = (undefined4 *)Mem_Alloc16(0x10,param_1);
  *puRam0036f4f4 = (int)param_1;
  puRam0036f4f4[1] = 0xffffffff;
  puRam0036f4f4[2] = 0;
  puRam0036f4f4[3] = 0;
  Save_Init(param_1);
  return;
}

// 0x0020a730  size 0x59c
void SaveMgr_DeserializeGame(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = 5;
  puVar2 = (undefined4 *)param_1[0x10d];
  if (param_1[0xb] == 0) {
    uVar6 = 0xe;
  }
  iVar7 = param_1[0x10c] + param_1[0x14] * 0x2c;
  switch(param_1[0x158]) {
  case 0:
    iVar7 = puVar2[6];
    if (iVar7 == 0) {
      param_1[0x158] = 1;
    }
    else {
      param_1[0x117] = puVar2[4];
      param_1[0x118] = iVar7;
      param_1[0x119] = 0xdb5c;
      param_1[0x158] = 5;
      param_1[0x159] = 1;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 1:
    iVar7 = puVar2[7];
    if (iVar7 == 0) {
      param_1[0x158] = 2;
    }
    else {
      param_1[0x117] = puVar2[4] + 0xdb5c;
      param_1[0x118] = iVar7;
      param_1[0x119] = 0x9240;
      param_1[0x158] = 5;
      param_1[0x159] = 2;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 2:
    iVar7 = puVar2[8];
    if (iVar7 == 0) {
      param_1[0x158] = 3;
    }
    else {
      param_1[0x117] = puVar2[4] + 0x16d9c;
      param_1[0x118] = iVar7;
      param_1[0x119] = 0x9944;
      param_1[0x158] = 5;
      param_1[0x159] = 3;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 3:
    iVar7 = puVar2[9];
    if (iVar7 == 0) {
      param_1[0x158] = 4;
    }
    else {
      param_1[0x117] = puVar2[4] + 0x206e0;
      param_1[0x118] = iVar7;
      param_1[0x119] = 0x1f8;
      param_1[0x158] = 5;
      param_1[0x159] = 4;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 4:
    iVar7 = puVar2[10];
    if (iVar7 == 0) {
      param_1[0x158] = 6;
    }
    else {
      param_1[0x117] = puVar2[4];
      param_1[0x118] = iVar7;
      param_1[0x119] = 0x69b90;
      param_1[0x158] = 5;
      param_1[0x159] = 6;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 5:
    uVar8 = param_1[0x119];
    if (uVar8 != 0) {
      if (0x1fff < uVar8) {
        uVar8 = 0x2000;
      }
      maybe_Mem_CopyQwords(param_1[0x117],param_1[0x118],uVar8);
      param_1[0x117] = param_1[0x117] + uVar8;
      param_1[0x118] = param_1[0x118] + uVar8;
      param_1[0x119] = param_1[0x119] - uVar8;
    }
    if (param_1[0x119] == 0) {
      param_1[0x158] = param_1[0x159];
    }
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 6:
    uVar3 = *(undefined4 *)(iVar7 + 0x24);
    param_1[0x114] = puVar2[4];
    *(undefined2 *)(param_1 + 0x115) = 0xffff;
    param_1[0x116] = uVar3;
    param_1[0x158] = 7;
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 7:
    for (iVar5 = 0x2000; (param_1[0x116] != 0 && (iVar5 != 0)); iVar5 = iVar5 + -1) {
      *(ushort *)(param_1 + 0x115) =
           *(ushort *)(param_1 + 0x115) << 8 ^
           *(ushort *)
            (&DAT_00329b20 +
            ((int)(uint)*(ushort *)(param_1 + 0x115) >> 8 ^ (uint)*(byte *)param_1[0x114]) * 2);
      param_1[0x114] = param_1[0x114] + 1;
      param_1[0x116] = param_1[0x116] + -1;
    }
    if (param_1[0x116] == 0) {
      *puVar2 = *(undefined4 *)(iVar7 + 0x24);
      puVar2[1] = (uint)*(ushort *)(param_1 + 0x115);
      param_1[0x158] = 8;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 8:
    uVar3 = puVar2[5];
    param_1[0x114] = puVar2[4];
    *(undefined2 *)(param_1 + 0x115) = 0xffff;
    param_1[0x116] = uVar3;
    param_1[0x158] = 9;
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 9:
    for (iVar7 = 0x2000; (param_1[0x116] != 0 && (iVar7 != 0)); iVar7 = iVar7 + -1) {
      *(ushort *)(param_1 + 0x115) =
           *(ushort *)(param_1 + 0x115) << 8 ^
           *(ushort *)
            (&DAT_00329b20 +
            ((int)(uint)*(ushort *)(param_1 + 0x115) >> 8 ^ (uint)*(byte *)param_1[0x114]) * 2);
      param_1[0x114] = param_1[0x114] + 1;
      param_1[0x116] = param_1[0x116] + -1;
    }
    if (param_1[0x116] == 0) {
      puVar2[2] = puVar2[5];
      puVar2[3] = (uint)*(ushort *)(param_1 + 0x115);
      param_1[0x158] = 10;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 10:
    SaveSlot_StartLoad(*param_1,param_1[0x14],param_1 + 0x11b,param_1[0x11a]);
    param_1[0x158] = 0xb;
    *(undefined1 *)((int)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 0xb:
    cVar1 = *(char *)((int)param_1 + 0x1e);
    if (cVar1 != '\x01') {
      if (cVar1 == '\x06') {
        param_1[0x157] = 0;
        param_1[0x158] = 0;
        param_1[0x159] = 0;
      }
      else if (cVar1 == '\f') {
        param_1[0x158] = 0xc;
        *(undefined1 *)((int)param_1 + 0x1d) = 0x10;
        *(undefined1 *)((int)param_1 + 0x1e) = 1;
      }
      else {
        *(undefined1 *)(iVar7 + 0x10) = 3;
        *(undefined4 *)(iVar7 + 0x1c) = 0;
        *(undefined4 *)(iVar7 + 0x18) = 1;
        param_1[0x157] = 0;
        param_1[0x158] = 0;
        param_1[0x159] = 0;
      }
      param_1[0xb] = 0;
    }
    break;
  case 0xc:
    uVar3 = puVar2[4];
    uVar4 = *(undefined4 *)(iVar7 + 0x24);
    param_1[0x117] = *(undefined4 *)(iVar7 + 0x28);
    param_1[0x118] = uVar3;
    param_1[0x119] = uVar4;
    param_1[0x158] = 0xd;
    *(undefined1 *)((int)param_1 + 0x1d) = 0x10;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 0xd:
    uVar8 = param_1[0x119];
    if (uVar8 != 0) {
      if (0x1fff < uVar8) {
        uVar8 = 0x2000;
      }
      maybe_Mem_CopyQwords(param_1[0x117],param_1[0x118],uVar8);
      param_1[0x117] = param_1[0x117] + uVar8;
      param_1[0x118] = param_1[0x118] + uVar8;
      param_1[0x119] = param_1[0x119] - uVar8;
    }
    if (param_1[0x119] == 0) {
      *(undefined1 *)(iVar7 + 0x10) = 4;
      *(undefined4 *)(iVar7 + 0x1c) = 1;
      *(undefined4 *)(iVar7 + 0x18) = 0;
      param_1[0x157] = 0;
      param_1[0x158] = 0;
      param_1[0x159] = 0;
    }
    param_1[9] = 1;
    *(undefined1 *)((int)param_1 + 0x1d) = 0x10;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
  }
  return;
}

// 0x0020acd0  size 0x4a0
void SaveMgr_SerializeGame(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = param_1[0x10d];
  iVar3 = param_1[0x10c] + param_1[0x14] * 0x2c;
  switch(param_1[0x158]) {
  case 0:
    SaveSlot_StartSave(*param_1,param_1[0x14],param_1 + 0x11b,param_1[0x11a]);
    param_1[0x158] = 1;
    *(undefined1 *)((int)param_1 + 0x1d) = 0xb;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 1:
    if (*(char *)((int)param_1 + 0x1e) != '\x01') {
      if (*(char *)((int)param_1 + 0x1e) == '\t') {
        iVar6 = *(int *)(iVar1 + 8);
        iVar5 = 0x208d8;
        iVar4 = 0x208d8;
        if (*(char *)((int)param_1 + 0xd) != '\0') {
          iVar4 = 0x69b90;
        }
        if (iVar6 == iVar4) {
          if (*(char *)((int)param_1 + 0xd) != '\0') {
            iVar5 = 0x69b90;
          }
          if (*(int *)(*(int *)(*(int *)(iVar3 + 0x14) * 0x28 + param_1[0x108] + 0x24) + 0x84) ==
              iVar5 + 0x10) {
            param_1[0x114] = *(undefined4 *)(iVar1 + 0x10);
            *(undefined2 *)(param_1 + 0x115) = 0xffff;
            param_1[0x116] = iVar6;
            param_1[0x158] = 2;
            *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
            *(undefined1 *)((int)param_1 + 0x1e) = 1;
            return;
          }
        }
        *(undefined1 *)(iVar3 + 0x10) = 3;
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        *(undefined4 *)(iVar3 + 0x18) = 1;
        param_1[0x157] = 0;
        param_1[0x158] = 0;
        param_1[0x159] = 0;
      }
      else {
        param_1[0x157] = 0;
        param_1[0x158] = 0;
        param_1[0x159] = 0;
      }
    }
    break;
  case 2:
    for (iVar6 = 0x2000; (param_1[0x116] != 0 && (iVar6 != 0)); iVar6 = iVar6 + -1) {
      *(ushort *)(param_1 + 0x115) =
           *(ushort *)(param_1 + 0x115) << 8 ^
           *(ushort *)
            (&DAT_00329b20 +
            ((int)(uint)*(ushort *)(param_1 + 0x115) >> 8 ^ (uint)*(byte *)param_1[0x114]) * 2);
      param_1[0x114] = param_1[0x114] + 1;
      param_1[0x116] = param_1[0x116] + -1;
    }
    if (param_1[0x116] == 0) {
      if (*(uint *)(iVar1 + 0xc) == (uint)*(ushort *)(param_1 + 0x115)) {
        param_1[0x158] = 3;
      }
      else {
        *(undefined1 *)(iVar3 + 0x10) = 3;
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        *(undefined4 *)(iVar3 + 0x18) = 1;
        param_1[0x157] = 0;
        param_1[0x158] = 0;
        param_1[0x159] = 0;
      }
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 3:
    if (*(int *)(iVar1 + 0x18) == 0) {
      param_1[0x158] = 4;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x10);
      param_1[0x117] = *(int *)(iVar1 + 0x18);
      param_1[0x118] = uVar2;
      param_1[0x119] = 0xdb5c;
      param_1[0x158] = 8;
      param_1[0x159] = 4;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 4:
    if (*(int *)(iVar1 + 0x1c) == 0) {
      param_1[0x158] = 5;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x10);
      param_1[0x117] = *(int *)(iVar1 + 0x1c);
      param_1[0x118] = iVar3 + 0xdb5c;
      param_1[0x119] = 0x9240;
      param_1[0x158] = 8;
      param_1[0x159] = 5;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 5:
    if (*(int *)(iVar1 + 0x20) == 0) {
      param_1[0x158] = 6;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x10);
      param_1[0x117] = *(int *)(iVar1 + 0x20);
      param_1[0x118] = iVar3 + 0x16d9c;
      param_1[0x119] = 0x9944;
      param_1[0x158] = 8;
      param_1[0x159] = 6;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 6:
    if (*(int *)(iVar1 + 0x24) == 0) {
      param_1[0x158] = 7;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x10);
      param_1[0x117] = *(int *)(iVar1 + 0x24);
      param_1[0x118] = iVar3 + 0x206e0;
      param_1[0x119] = 0x1f8;
      param_1[0x158] = 8;
      param_1[0x159] = 7;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 7:
    if (*(int *)(iVar1 + 0x28) == 0) {
      param_1[0x158] = 9;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x10);
      param_1[0x117] = *(int *)(iVar1 + 0x28);
      param_1[0x118] = uVar2;
      param_1[0x119] = 0x69b90;
      param_1[0x158] = 8;
      param_1[0x159] = 9;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 8:
    uVar7 = param_1[0x119];
    if (uVar7 != 0) {
      if (0x1fff < uVar7) {
        uVar7 = 0x2000;
      }
      maybe_Mem_CopyQwords(param_1[0x117],param_1[0x118],uVar7);
      param_1[0x117] = param_1[0x117] + uVar7;
      param_1[0x118] = param_1[0x118] + uVar7;
      param_1[0x119] = param_1[0x119] - uVar7;
    }
    if (param_1[0x119] == 0) {
      param_1[0x158] = param_1[0x159];
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    break;
  case 9:
    param_1[9] = 1;
    *(undefined1 *)(iVar3 + 0x10) = 4;
    *(undefined4 *)(iVar3 + 0x1c) = 1;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    param_1[0x157] = 0;
    param_1[0x158] = 0;
    param_1[0x159] = 0;
    *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
  }
  return;
}

// 0x0020b180  size 0x278
void SaveMgr_SaveOptions(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[0x158];
  iVar2 = param_1[0x10c] + param_1[0x10b] * 0x2c;
  if (iVar3 == 3) {
    if (*(uint *)(iVar2 + 4) == (uint)*(ushort *)(param_1 + 0x115)) {
      *(undefined1 *)(iVar2 + 0x10) = 4;
      *(undefined4 *)(iVar2 + 0x1c) = 1;
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    else {
      *(undefined1 *)(iVar2 + 0x10) = 3;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 1;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    SaveSlot_StartCheck(*param_1);
    param_1[0x157] = 0;
    param_1[0x158] = 0;
    param_1[0x159] = 0;
  }
  else if (iVar3 == 2) {
    for (iVar3 = 0x2000; (param_1[0x116] != 0 && (iVar3 != 0)); iVar3 = iVar3 + -1) {
      *(ushort *)(param_1 + 0x115) =
           *(ushort *)(param_1 + 0x115) << 8 ^
           *(ushort *)
            (&DAT_00329b20 +
            ((int)(uint)*(ushort *)(param_1 + 0x115) >> 8 ^ (uint)*(byte *)param_1[0x114]) * 2);
      param_1[0x114] = param_1[0x114] + 1;
      param_1[0x116] = param_1[0x116] + -1;
    }
    if (param_1[0x116] == 0) {
      param_1[0x158] = 3;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
  }
  else if (iVar3 == 1) {
    if (*(char *)((int)param_1 + 0x1e) != '\x01') {
      if (*(char *)((int)param_1 + 0x1e) == '\t') {
        iVar4 = 0x208d8;
        iVar3 = 0x208d8;
        if (*(char *)((int)param_1 + 0xd) != '\0') {
          iVar3 = 0x69b90;
        }
        if (*(int *)(iVar2 + 8) == iVar3) {
          if (*(char *)((int)param_1 + 0xd) != '\0') {
            iVar4 = 0x69b90;
          }
          if (*(int *)(*(int *)(*(int *)(iVar2 + 0x14) * 0x28 + param_1[0x108] + 0x24) + 0x84) ==
              iVar4 + 0x10) {
            uVar1 = *(undefined4 *)(iVar2 + 0x24);
            param_1[0x114] = *(undefined4 *)(iVar2 + 0x28);
            *(undefined2 *)(param_1 + 0x115) = 0xffff;
            param_1[0x116] = uVar1;
            param_1[0x158] = 2;
            *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
            *(undefined1 *)((int)param_1 + 0x1e) = 1;
            return;
          }
        }
        *(undefined1 *)((int)param_1 + 0x1d) = 0xd;
        *(undefined1 *)((int)param_1 + 0x1e) = 1;
        *(undefined1 *)(iVar2 + 0x10) = 3;
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x18) = 1;
        SaveSlot_StartCheck(*param_1);
        param_1[0x157] = 0;
        param_1[0x158] = 0;
        param_1[0x159] = 0;
      }
      else {
        param_1[0x157] = 0;
        param_1[0x158] = 0;
        param_1[0x159] = 0;
      }
    }
  }
  else if (iVar3 == 0) {
    SaveSlot_StartSave(*param_1,param_1[0x10b],param_1 + 0x11b,param_1[0x11a]);
    param_1[0x158] = 1;
    *(undefined1 *)((int)param_1 + 0x1d) = 0xb;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
  }
  return;
}

// 0x0020b400  size 0x158
void SaveUi_HandleCursor(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2[4];
  if (*(int *)(param_1 + 0x30) == 1) {
    param_2[4] = iVar4 + -1;
    if (param_2[4] < 0) {
      param_2[4] = 0;
    }
    if (param_2[4] < param_2[1]) {
      param_2[1] = param_2[4];
    }
    if (iVar4 == param_2[4]) {
      uVar2 = 8;
    }
    else {
      uVar2 = 7;
    }
    Se_PlayMenu(uVar2);
    iVar4 = param_2[4];
  }
  else {
    if (*(int *)(param_1 + 0x30) == 2) {
      param_2[4] = param_2[4] + 1;
      if (param_2[1] + *param_2 <= param_2[4]) {
        iVar3 = param_3 - *param_2;
        iVar1 = param_2[1] + 1;
        if (iVar1 <= iVar3) {
          iVar3 = iVar1;
        }
        param_2[1] = iVar3;
      }
      if (param_3 <= param_2[4]) {
        param_2[4] = param_3 + -1;
      }
      if (iVar4 == param_2[4]) {
        uVar2 = 8;
      }
      else {
        uVar2 = 7;
      }
      Se_PlayMenu(uVar2);
    }
    iVar4 = param_2[4];
  }
  param_2[3] = iVar4 - param_2[1];
  iVar4 = *param_2 + -1;
  if (param_3 + -1 <= *param_2 + -1) {
    iVar4 = param_3 + -1;
  }
  param_2[2] = param_2[1] + iVar4;
  return;
}

// 0x0020b560  size 0x330
void SaveUi_StateMachine(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  switch(*(undefined1 *)((int)param_1 + 0x1e)) {
  case 0:
    *(undefined1 *)(param_1 + 7) = 2;
    break;
  case 1:
    switch(*(undefined1 *)((int)param_1 + 0x1d)) {
    case 0:
    case 4:
      break;
    case 1:
    case 2:
    case 3:
      iVar3 = 0;
      if (0 < *(int *)(param_1[1] + 4)) {
        iVar2 = 0;
        do {
          iVar1 = param_1[0x10c] + iVar2;
          *(undefined1 *)(iVar1 + 0x10) = 0;
          *(int *)(iVar1 + 0x14) = iVar3;
          *(undefined4 *)(iVar1 + 0x18) = 0;
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar1 + 0x1c) = 0;
          *(undefined4 *)(iVar1 + 0x20) = 0;
          iVar2 = iVar2 + 0x2c;
        } while (iVar3 < *(int *)(param_1[1] + 4));
      }
      param_1[0x10e] = 1;
      param_1[0x10f] = 1;
      param_1[0xb] = 0;
      *(undefined1 *)(param_1 + 7) = 5;
      break;
    case 5:
    case 6:
      *(undefined1 *)(param_1 + 7) = 0x15;
      break;
    case 7:
    case 8:
    case 9:
    case 10:
      *(undefined1 *)(param_1 + 7) = 6;
      break;
    case 0xb:
    case 0xc:
    case 0xd:
      if (*(char *)(param_1 + 7) == '\a') {
        return;
      }
      *(undefined1 *)(param_1 + 7) = 0x12;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
      *(undefined1 *)(param_1 + 7) = 0x17;
      break;
    default:
      goto switchD_0020b594_default;
    }
    break;
  case 2:
    SaveUi_ConfirmDelete();
    break;
  case 3:
    SaveUi_ConfirmFormat();
    break;
  case 4:
    if (param_1[8] != 0) {
      if (*(char *)(param_1 + 3) == '\0') {
        *(undefined1 *)(param_1 + 7) = 4;
      }
      else if (*(char *)(param_1 + 3) == '\x01') {
        *(undefined1 *)(param_1 + 7) = 0xb;
      }
      else {
        param_1[0xb] = 1;
        SaveSlot_ConsumeDone(*param_1);
      }
    }
    if (*(char *)(param_1 + 7) == '\v') {
      if (param_1[0xc] != 0x10) {
        return;
      }
      Se_PlayMenu(5);
      *(undefined1 *)(param_1 + 7) = 4;
    }
    break;
  case 5:
    SaveSlot_StartCheck(*param_1);
    break;
  case 6:
    if (param_1[8] != 0) {
      *(undefined1 *)(param_1 + 7) = 0x16;
    }
    if (param_1[0xc] != 0x10) {
      return;
    }
    Se_PlayMenu(5);
    *(undefined1 *)(param_1 + 7) = 4;
    break;
  case 7:
  case 8:
    SaveUi_Update();
    break;
  case 9:
    SaveUi_ConfirmLoad();
    break;
  case 10:
  case 0xd:
    break;
  case 0xb:
    SaveUi_ConfirmOverwrite();
    break;
  case 0xc:
    if (param_1[8] != 0) {
      *(undefined1 *)(param_1 + 7) = 0x18;
    }
    if (param_1[10] == 0) {
      if (param_1[0xc] != 0x10) {
        return;
      }
      Se_PlayMenu(5);
    }
    *(undefined1 *)(param_1 + 7) = 4;
    break;
  case 0xe:
    if (param_1[8] != 0) {
      *(undefined1 *)(param_1 + 7) = 0x19;
    }
    if (param_1[0xc] != 0x10) {
      return;
    }
    Se_PlayMenu(5);
    *(undefined1 *)(param_1 + 7) = 4;
    break;
  default:
    goto switchD_0020b594_default;
  }
switchD_0020b594_default:
  return;
}

// 0x0020b890  size 0x1f0
void SaveUi_ConfirmOverwrite(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0x22;
    }
    else if (*(char *)(param_1 + 0x1c) == '\a') {
      *(undefined1 *)(param_1 + 0x1c) = 8;
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 0x14;
    }
  }
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '\"') {
    iVar3 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x30) == 1) {
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x34) = 1;
      }
      else {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      }
      if (iVar3 == *(int *)(param_1 + 0x34)) {
        uVar2 = 8;
      }
      else {
        uVar2 = 7;
      }
      Se_PlayMenu(uVar2);
      iVar3 = *(int *)(param_1 + 0x30);
    }
    else {
      if (*(int *)(param_1 + 0x30) == 2) {
        if (iVar3 < 1) {
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
        if (iVar3 == *(int *)(param_1 + 0x34)) {
          uVar2 = 8;
        }
        else {
          uVar2 = 7;
        }
        Se_PlayMenu(uVar2);
      }
      iVar3 = *(int *)(param_1 + 0x30);
    }
    if (iVar3 == 0x10) {
      Se_PlayMenu(5);
      if (*(int *)(param_1 + 0x34) == 1) {
        *(undefined1 *)(param_1 + 0x1c) = 4;
      }
      else {
        *(undefined1 *)(param_1 + 0x1c) = 3;
      }
    }
    else if (*(int *)(param_1 + 0x30) == 0x20) {
      Se_PlayMenu(6);
    }
  }
  else if (((cVar1 == '\x14') || (cVar1 == '\b')) && (*(int *)(param_1 + 0x30) == 0x10)) {
    Se_PlayMenu(5);
    *(undefined1 *)(param_1 + 0x1c) = 4;
  }
  return;
}

// 0x0020ba80  size 0x230
void SaveUi_ConfirmLoad(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      if (*(char *)(param_1 + 0xc) == '\0') {
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 0x1c) = 0x21;
      }
      else {
        *(undefined1 *)(param_1 + 0x1c) = 0x1b;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 0x13;
    }
  }
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '!') {
    iVar3 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x30) == 1) {
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x34) = 1;
      }
      else {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      }
      if (iVar3 == *(int *)(param_1 + 0x34)) {
        uVar2 = 8;
      }
      else {
        uVar2 = 7;
      }
      Se_PlayMenu(uVar2);
      iVar3 = *(int *)(param_1 + 0x30);
    }
    else {
      if (*(int *)(param_1 + 0x30) == 2) {
        if (iVar3 < 1) {
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
        if (iVar3 == *(int *)(param_1 + 0x34)) {
          uVar2 = 8;
        }
        else {
          uVar2 = 7;
        }
        Se_PlayMenu(uVar2);
      }
      iVar3 = *(int *)(param_1 + 0x30);
    }
    if (iVar3 == 0x10) {
      Se_PlayMenu(5);
      if (*(int *)(param_1 + 0x34) == 1) {
        *(undefined1 *)(param_1 + 0x1c) = 4;
      }
      else {
        *(undefined1 *)(param_1 + 0x1c) = 3;
      }
    }
    else if (*(int *)(param_1 + 0x30) == 0x20) {
      Se_PlayMenu(6);
    }
  }
  else if (cVar1 == '\x1b') {
    if (*(int *)(param_1 + 0x30) == 0x10) {
      Se_PlayMenu(5);
      *(undefined1 *)(param_1 + 0x1c) = 4;
    }
  }
  else if (cVar1 == '\x13') {
    if (*(int *)(param_1 + 0x28) == 0) {
      if (*(int *)(param_1 + 0x30) != 0x10) {
        return;
      }
      Se_PlayMenu(5);
    }
    *(undefined1 *)(param_1 + 0x1c) = 4;
  }
  return;
}

// 0x0020bcb0  size 0x71c
void SaveUi_DoSave(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  
  puVar7 = (undefined4 *)param_1;
  if (puVar7[8] != 0) {
    puVar7[0x10] = 0;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    if ((puVar7[0x110] == 0) && (puVar7[0x113] == 0)) {
      *(undefined1 *)(puVar7 + 7) = 0x1d;
    }
    else if (*(int *)(puVar7[1] + 4) < 2) {
      *(undefined1 *)(puVar7 + 7) = 2;
    }
    else {
      *(undefined1 *)(puVar7 + 7) = 0xc;
    }
  }
  if (*(int *)(puVar7[1] + 4) < 2) {
    uVar8 = 4;
  }
  else if ((puVar7[0x110] == 0) && (puVar7[0x113] == 0)) {
    uVar8 = 4;
  }
  else {
    uVar8 = 0xc;
  }
  cVar1 = *(char *)(puVar7 + 7);
  if (((cVar1 == '\x1e') || (cVar1 == '\x1d')) || (cVar1 == '\x1c')) {
    if (puVar7[0xc] == 0x10) {
      Se_PlayMenu(5);
      *(undefined1 *)(puVar7 + 7) = uVar8;
    }
  }
  else if (cVar1 == '\x11') {
    iVar3 = puVar7[0xd];
    if (puVar7[0xc] == 1) {
      if (iVar3 == 0) {
        puVar7[0xd] = 1;
      }
      else {
        puVar7[0xd] = puVar7[0xd] + -1;
      }
      if (iVar3 == puVar7[0xd]) {
        uVar5 = 8;
      }
      else {
        uVar5 = 7;
      }
      Se_PlayMenu(uVar5);
      iVar3 = puVar7[0xc];
    }
    else {
      if (puVar7[0xc] == 2) {
        if (iVar3 < 1) {
          puVar7[0xd] = puVar7[0xd] + 1;
        }
        else {
          puVar7[0xd] = 0;
        }
        if (iVar3 == puVar7[0xd]) {
          uVar5 = 8;
        }
        else {
          uVar5 = 7;
        }
        Se_PlayMenu(uVar5);
      }
      iVar3 = puVar7[0xc];
    }
    if (iVar3 == 0x10) {
      Se_PlayMenu(5);
      if (puVar7[0xd] == 1) {
        *(undefined1 *)(puVar7 + 7) = 0x17;
      }
      else {
        *(undefined1 *)(puVar7 + 7) = uVar8;
      }
    }
    else if (puVar7[0xc] == 0x20) {
      Se_PlayMenu(6);
    }
    if (*(char *)(puVar7 + 7) == '\x17') {
      lVar6 = SaveMgr_BuildFileName(param_1,puVar7[0x14]);
      if (lVar6 == 0) {
        *(undefined1 *)(puVar7 + 7) = 0x1e;
      }
      else {
        puVar7[0x157] = 1;
        puVar7[0x158] = 0;
        puVar7[0x159] = 0;
      }
    }
  }
  else if ((cVar1 == '\x10') || (cVar1 == '\x0f')) {
    iVar3 = puVar7[0xd];
    if (puVar7[0xc] == 1) {
      if (iVar3 == 0) {
        puVar7[0xd] = 1;
      }
      else {
        puVar7[0xd] = puVar7[0xd] + -1;
      }
      if (iVar3 == puVar7[0xd]) {
        uVar5 = 8;
      }
      else {
        uVar5 = 7;
      }
      Se_PlayMenu(uVar5);
      iVar3 = puVar7[0xc];
    }
    else {
      if (puVar7[0xc] == 2) {
        if (iVar3 < 1) {
          puVar7[0xd] = puVar7[0xd] + 1;
        }
        else {
          puVar7[0xd] = 0;
        }
        if (iVar3 == puVar7[0xd]) {
          uVar5 = 8;
        }
        else {
          uVar5 = 7;
        }
        Se_PlayMenu(uVar5);
      }
      iVar3 = puVar7[0xc];
    }
    if (iVar3 == 0x10) {
      Se_PlayMenu(5);
      if (puVar7[0xd] == 1) {
        *(undefined1 *)(puVar7 + 7) = 0x17;
      }
      else {
        *(undefined1 *)(puVar7 + 7) = uVar8;
      }
    }
    else if (puVar7[0xc] == 0x20) {
      Se_PlayMenu(6);
    }
    if (*(char *)(puVar7 + 7) == '\x17') {
      puVar7[0x157] = 1;
      puVar7[0x158] = 0;
      puVar7[0x159] = 0;
    }
  }
  else if (cVar1 == '\x0e') {
    iVar3 = puVar7[0xd];
    if (puVar7[0xc] == 1) {
      if (iVar3 == 0) {
        puVar7[0xd] = 1;
      }
      else {
        puVar7[0xd] = puVar7[0xd] + -1;
      }
      if (iVar3 == puVar7[0xd]) {
        uVar5 = 8;
      }
      else {
        uVar5 = 7;
      }
      Se_PlayMenu(uVar5);
      iVar3 = puVar7[0xc];
    }
    else {
      if (puVar7[0xc] == 2) {
        if (iVar3 < 1) {
          puVar7[0xd] = puVar7[0xd] + 1;
        }
        else {
          puVar7[0xd] = 0;
        }
        if (iVar3 == puVar7[0xd]) {
          uVar5 = 8;
        }
        else {
          uVar5 = 7;
        }
        Se_PlayMenu(uVar5);
      }
      iVar3 = puVar7[0xc];
    }
    if (iVar3 == 0x10) {
      Se_PlayMenu(5);
      if (puVar7[0xd] == 1) {
        *(undefined1 *)(puVar7 + 7) = 0x15;
      }
      else {
        *(undefined1 *)(puVar7 + 7) = uVar8;
      }
    }
    else if (puVar7[0xc] == 0x20) {
      Se_PlayMenu(6);
    }
    if (*(char *)(puVar7 + 7) == '\x15') {
      SaveMgr_BuildFileName(param_1,puVar7[0x14]);
      puVar7[0x157] = 1;
      puVar7[0x158] = 0;
      puVar7[0x159] = 0;
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\f') {
        return;
      }
      bVar2 = true;
      SaveUi_HandleCursor(param_1,puVar7 + 0xf,puVar7[0x111] + 1);
      if (puVar7[0xc] == 0x10) {
        Se_PlayMenu(5);
        if (puVar7[0x13] == 0) {
          puVar7[0x14] = puVar7[0x112];
        }
        else {
          uVar4 = SaveUi_GetResultMessage(param_1);
          puVar7[0x14] = uVar4;
        }
        bVar2 = false;
        *(undefined1 *)(puVar7 + 7) = 2;
      }
      else if (puVar7[0xc] == 0x20) {
        Se_PlayMenu(6);
        *(undefined1 *)(puVar7 + 7) = 4;
      }
      if (bVar2) {
        return;
      }
    }
    if (puVar7[0xb] == 0) {
      if (((puVar7[0x13] == 0) && (1 < *(int *)(puVar7[1] + 4))) &&
         (*(int *)(puVar7[1] + 4) <= (int)puVar7[0x110])) {
        iVar3 = SaveSlot_GetBuffer(*puVar7);
        if (iVar3 < (int)puVar7[2]) {
          *(undefined1 *)(puVar7 + 7) = 0x1e;
        }
        else {
          *(undefined1 *)(puVar7 + 7) = 0x1c;
        }
      }
      else {
        cVar1 = *(char *)(puVar7[0x10c] + puVar7[0x14] * 0x2c + 0x10);
        if (cVar1 == '\x01') {
          if (puVar7[0x113] == 0) {
            *(undefined1 *)(puVar7 + 7) = 0x1e;
          }
          else {
            lVar6 = SaveMgr_BuildFileName(param_1);
            if (lVar6 == 0) {
              *(undefined1 *)(puVar7 + 7) = 0x1e;
            }
            else {
              puVar7[0xd] = 0;
              *(undefined1 *)(puVar7 + 7) = 0xf;
            }
          }
        }
        else if (cVar1 == '\x03') {
          puVar7[0xd] = 0;
          *(undefined1 *)(puVar7 + 7) = 0x11;
        }
        else {
          lVar6 = SaveMgr_BuildFileName(param_1);
          if (lVar6 == 0) {
            *(undefined1 *)(puVar7 + 7) = 0x1e;
          }
          else {
            puVar7[0xd] = 0;
            *(undefined1 *)(puVar7 + 7) = 0x10;
          }
        }
      }
    }
    else {
      puVar7[0xd] = 0;
      *(undefined1 *)(puVar7 + 7) = 0xe;
    }
  }
  return;
}

