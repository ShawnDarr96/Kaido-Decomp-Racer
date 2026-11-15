// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0020c000 - 0x00210000
#include "ghidra_types.h"

// 0x0020c3d0  size 0x490
void SaveUi_DoLoad(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 uVar9;
  
  puVar7 = (undefined4 *)param_1;
  if (puVar7[8] != 0) {
    puVar7[0x10] = 0;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    if ((*(int *)(puVar7[1] + 4) < 2) || ((int)puVar7[0x111] < 1)) {
      *(undefined1 *)(puVar7 + 7) = 2;
    }
    else {
      *(undefined1 *)(puVar7 + 7) = 0xc;
    }
  }
  if ((*(int *)(puVar7[1] + 4) < 2) || ((int)puVar7[0x111] < 1)) {
    uVar9 = 4;
  }
  else {
    uVar9 = 0xc;
  }
  cVar3 = *(char *)(puVar7 + 7);
  if (cVar3 == '\x1a') {
    if (puVar7[0xc] == 0x10) {
      Se_PlayMenu(5);
      *(undefined1 *)(puVar7 + 7) = uVar9;
    }
  }
  else if (cVar3 == '\r') {
    iVar6 = puVar7[0xd];
    if (puVar7[0xc] == 1) {
      if (iVar6 == 0) {
        puVar7[0xd] = 1;
      }
      else {
        puVar7[0xd] = puVar7[0xd] + -1;
      }
      if (iVar6 == puVar7[0xd]) {
        uVar5 = 8;
      }
      else {
        uVar5 = 7;
      }
      Se_PlayMenu(uVar5);
      iVar6 = puVar7[0xc];
    }
    else {
      if (puVar7[0xc] == 2) {
        if (iVar6 < 1) {
          puVar7[0xd] = puVar7[0xd] + 1;
        }
        else {
          puVar7[0xd] = 0;
        }
        if (iVar6 == puVar7[0xd]) {
          uVar5 = 8;
        }
        else {
          uVar5 = 7;
        }
        Se_PlayMenu(uVar5);
      }
      iVar6 = puVar7[0xc];
    }
    if (iVar6 == 0x10) {
      Se_PlayMenu(5);
      if (puVar7[0xd] == 1) {
        *(undefined1 *)(puVar7 + 7) = 0x12;
      }
      else {
        *(undefined1 *)(puVar7 + 7) = uVar9;
      }
    }
    else if (puVar7[0xc] == 0x20) {
      Se_PlayMenu(6);
    }
    if (*(char *)(puVar7 + 7) == '\x12') {
      puVar7[0x157] = 1;
      puVar7[0x158] = 0;
      puVar7[0x159] = 0;
    }
  }
  else if (cVar3 == '\n') {
    if (puVar7[0xc] == 0x10) {
      Se_PlayMenu(5);
      *(undefined1 *)(puVar7 + 7) = uVar9;
    }
  }
  else {
    if (cVar3 != '\x02') {
      if (cVar3 != '\f') {
        return;
      }
      bVar2 = true;
      SaveUi_HandleCursor(param_1,puVar7 + 0xf,puVar7[0x111]);
      if (puVar7[0xc] == 0x10) {
        Se_PlayMenu(5);
        uVar4 = SaveUi_GetResultMessage(param_1,puVar7[0x13]);
        puVar7[0x14] = uVar4;
        *(undefined1 *)(puVar7 + 7) = 2;
        bVar2 = false;
      }
      else if (puVar7[0xc] == 0x20) {
        Se_PlayMenu(6);
        *(undefined1 *)(puVar7 + 7) = 4;
      }
      if (bVar2) {
        return;
      }
    }
    iVar6 = puVar7[0x14];
    iVar8 = puVar7[0x10c] + iVar6 * 0x2c;
    cVar3 = *(char *)(iVar8 + 0x10);
    if ((cVar3 == '\x01') || (cVar3 == '\x05')) {
      *(undefined1 *)(puVar7 + 7) = 10;
    }
    else if (cVar3 == '\x03') {
      *(undefined1 *)(puVar7 + 7) = 0x1a;
    }
    else {
      iVar1 = puVar7[0x10d];
      puVar7[0x11a] = 0;
      puVar7[9] = 0;
      puVar7[puVar7[0x11a] * 3 + 0x11b] = 4;
      puVar7[puVar7[0x11a] * 3 + 0x11c] = iVar1;
      puVar7[puVar7[0x11a] * 3 + 0x11d] = 0x10;
      puVar7[0x11a] = puVar7[0x11a] + 1;
      iVar8 = *(int *)(iVar8 + 8);
      if (iVar8 != 0) {
        uVar4 = *(undefined4 *)(iVar1 + 0x10);
        puVar7[puVar7[0x11a] * 3 + 0x11b] = 4;
        puVar7[puVar7[0x11a] * 3 + 0x11c] = uVar4;
        puVar7[puVar7[0x11a] * 3 + 0x11d] = iVar8;
        puVar7[0x11a] = puVar7[0x11a] + 1;
      }
      cVar3 = SaveSlot_FindFile(*puVar7,iVar6,puVar7 + 0x11b,puVar7[0x11a]);
      if (cVar3 == '\0') {
        puVar7[0xd] = 0;
        *(undefined1 *)(puVar7 + 7) = 0xd;
      }
    }
  }
  return;
}

// 0x0020c860  size 0x440
void SaveUi_DoAutoSave(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar7 = (undefined4 *)param_1;
  if (puVar7[8] != 0) {
    iVar6 = puVar7[0x14];
    iVar8 = puVar7[0x10c] + iVar6 * 0x2c;
    cVar3 = *(char *)(iVar8 + 0x10);
    if (cVar3 == '\x01') {
      lVar5 = SaveMgr_BuildFileName();
      if (lVar5 == 0) {
        puVar7[0xd] = 0;
        *(undefined1 *)(puVar7 + 7) = 0x20;
      }
      else {
        *(undefined1 *)(puVar7 + 7) = 4;
      }
    }
    else if (cVar3 == '\x03') {
      puVar7[0xd] = 0;
      *(undefined1 *)(puVar7 + 7) = 0x21;
    }
    else {
      iVar1 = puVar7[0x10d];
      puVar7[0x11a] = 0;
      puVar7[9] = 0;
      puVar7[puVar7[0x11a] * 3 + 0x11b] = 4;
      puVar7[puVar7[0x11a] * 3 + 0x11c] = iVar1;
      puVar7[puVar7[0x11a] * 3 + 0x11d] = 0x10;
      puVar7[0x11a] = puVar7[0x11a] + 1;
      iVar8 = *(int *)(iVar8 + 8);
      if (iVar8 != 0) {
        uVar2 = *(undefined4 *)(iVar1 + 0x10);
        puVar7[puVar7[0x11a] * 3 + 0x11b] = 4;
        puVar7[puVar7[0x11a] * 3 + 0x11c] = uVar2;
        puVar7[puVar7[0x11a] * 3 + 0x11d] = iVar8;
        puVar7[0x11a] = puVar7[0x11a] + 1;
      }
      cVar3 = SaveSlot_FindFile(*puVar7,iVar6,puVar7 + 0x11b,puVar7[0x11a]);
      if (cVar3 == '\0') {
        *(undefined1 *)(puVar7 + 7) = 0x12;
      }
    }
  }
  cVar3 = *(char *)(puVar7 + 7);
  if (cVar3 == '!') {
    iVar6 = puVar7[0xd];
    if (puVar7[0xc] == 1) {
      if (iVar6 == 0) {
        puVar7[0xd] = 1;
      }
      else {
        puVar7[0xd] = puVar7[0xd] + -1;
      }
      if (iVar6 == puVar7[0xd]) {
        uVar4 = 8;
      }
      else {
        uVar4 = 7;
      }
      Se_PlayMenu(uVar4);
      iVar6 = puVar7[0xc];
    }
    else {
      if (puVar7[0xc] == 2) {
        if (iVar6 < 1) {
          puVar7[0xd] = puVar7[0xd] + 1;
        }
        else {
          puVar7[0xd] = 0;
        }
        if (iVar6 == puVar7[0xd]) {
          uVar4 = 8;
        }
        else {
          uVar4 = 7;
        }
        Se_PlayMenu(uVar4);
      }
      iVar6 = puVar7[0xc];
    }
    if (iVar6 == 0x10) {
      Se_PlayMenu(5);
      if (puVar7[0xd] == 1) {
        *(undefined1 *)(puVar7 + 7) = 4;
      }
      else {
        *(undefined1 *)(puVar7 + 7) = 3;
      }
    }
    else if (puVar7[0xc] == 0x20) {
      Se_PlayMenu(6);
    }
    if ((*(char *)(puVar7 + 7) == '\x04') &&
       (lVar5 = SaveMgr_BuildFileName(param_1,puVar7[0x14]), lVar5 == 0)) {
      puVar7[0xd] = 0;
      *(undefined1 *)(puVar7 + 7) = 0x20;
    }
  }
  else if (cVar3 == ' ') {
    iVar6 = puVar7[0xd];
    if (puVar7[0xc] == 1) {
      if (iVar6 == 0) {
        puVar7[0xd] = 1;
      }
      else {
        puVar7[0xd] = puVar7[0xd] + -1;
      }
      if (iVar6 == puVar7[0xd]) {
        uVar4 = 8;
      }
      else {
        uVar4 = 7;
      }
      Se_PlayMenu(uVar4);
      iVar6 = puVar7[0xc];
    }
    else {
      if (puVar7[0xc] == 2) {
        if (iVar6 < 1) {
          puVar7[0xd] = puVar7[0xd] + 1;
        }
        else {
          puVar7[0xd] = 0;
        }
        if (iVar6 == puVar7[0xd]) {
          uVar4 = 8;
        }
        else {
          uVar4 = 7;
        }
        Se_PlayMenu(uVar4);
      }
      iVar6 = puVar7[0xc];
    }
    if (iVar6 == 0x10) {
      Se_PlayMenu(5);
      if (puVar7[0xd] == 1) {
        *(undefined1 *)(puVar7 + 7) = 4;
      }
      else {
        *(undefined1 *)(puVar7 + 7) = 3;
      }
    }
    else if (puVar7[0xc] == 0x20) {
      Se_PlayMenu(6);
    }
  }
  else if (cVar3 == '\x12') {
    puVar7[0x157] = 1;
    puVar7[0x158] = 0;
    puVar7[0x159] = 0;
  }
  return;
}

// 0x0020cca0  size 0xe0
void SaveUi_Update(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  uVar3 = SaveSlot_GetFileList(*puVar4,puVar4 + 0x109,puVar4 + 0x10a);
  puVar4[0x108] = uVar3;
  SaveMgr_PrepareNewFile(param_1);
  lVar2 = SaveMgr_FindSaveFiles(param_1);
  if (lVar2 == 0) {
    if (puVar4[0x10e] == 0) {
      cVar1 = *(char *)(puVar4 + 3);
      if (cVar1 == '\x02') {
        SaveUi_DoSave(param_1);
      }
      else if (cVar1 == '\x01') {
        SaveUi_DoLoad(param_1);
      }
      else if (cVar1 == '\0') {
        SaveUi_DoAutoSave(param_1);
      }
    }
    else {
      *(undefined1 *)((int)puVar4 + 0x1e) = *(undefined1 *)((int)puVar4 + 0x1f);
      *(undefined1 *)(puVar4 + 7) = 7;
      puVar4[0x10e] = 0;
    }
  }
  else {
    *(undefined1 *)(puVar4 + 7) = 7;
    puVar4[0x157] = 1;
    puVar4[0x158] = 0;
    puVar4[0x159] = 0;
    puVar4[0x10e] = 0;
  }
  return;
}

// 0x0020cd80  size 0x1cc
void SaveUi_ConfirmFormat(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0x23;
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 0x24;
    }
  }
  if (*(char *)(param_1 + 0x1c) == '$') {
    if (*(int *)(param_1 + 0x30) == 0x10) {
      Se_PlayMenu(5);
      *(undefined1 *)(param_1 + 0x1c) = 4;
    }
  }
  else if (*(char *)(param_1 + 0x1c) == '#') {
    iVar2 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x30) == 1) {
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x34) = 1;
      }
      else {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      }
      if (iVar2 == *(int *)(param_1 + 0x34)) {
        uVar1 = 8;
      }
      else {
        uVar1 = 7;
      }
      Se_PlayMenu(uVar1);
      iVar2 = *(int *)(param_1 + 0x30);
    }
    else {
      if (*(int *)(param_1 + 0x30) == 2) {
        if (iVar2 < 1) {
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
        if (iVar2 == *(int *)(param_1 + 0x34)) {
          uVar1 = 8;
        }
        else {
          uVar1 = 7;
        }
        Se_PlayMenu(uVar1);
      }
      iVar2 = *(int *)(param_1 + 0x30);
    }
    if (iVar2 == 0x10) {
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
  return;
}

// 0x0020cf50  size 0x1cc
void SaveUi_ConfirmDelete(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0x1f;
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 9;
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\t') {
    if (*(int *)(param_1 + 0x30) == 0x10) {
      Se_PlayMenu(5);
      *(undefined1 *)(param_1 + 0x1c) = 4;
    }
  }
  else if (*(char *)(param_1 + 0x1c) == '\x1f') {
    iVar2 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x30) == 1) {
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x34) = 1;
      }
      else {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      }
      if (iVar2 == *(int *)(param_1 + 0x34)) {
        uVar1 = 8;
      }
      else {
        uVar1 = 7;
      }
      Se_PlayMenu(uVar1);
      iVar2 = *(int *)(param_1 + 0x30);
    }
    else {
      if (*(int *)(param_1 + 0x30) == 2) {
        if (iVar2 < 1) {
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
        if (iVar2 == *(int *)(param_1 + 0x34)) {
          uVar1 = 8;
        }
        else {
          uVar1 = 7;
        }
        Se_PlayMenu(uVar1);
      }
      iVar2 = *(int *)(param_1 + 0x30);
    }
    if (iVar2 == 0x10) {
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
  return;
}

// 0x0020d120  size 0x38c
bool SaveMgr_BuildFileName(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[0x10d];
  iVar5 = 0x208d8;
  param_1[0x11a] = 0;
  param_1[9] = 0;
  param_1[param_1[0x11a] * 3 + 0x11b] = 4;
  param_1[param_1[0x11a] * 3 + 0x11c] = iVar4;
  param_1[param_1[0x11a] * 3 + 0x11d] = 0x10;
  param_1[0x11a] = param_1[0x11a] + 1;
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    iVar5 = 0x69b90;
  }
  *(int *)(iVar4 + 0x14) = iVar5;
  if (iVar5 != 0) {
    uVar1 = *(undefined4 *)(iVar4 + 0x14);
    uVar2 = *(undefined4 *)(iVar4 + 0x10);
    param_1[param_1[0x11a] * 3 + 0x11b] = 4;
    param_1[param_1[0x11a] * 3 + 0x11c] = uVar2;
    param_1[param_1[0x11a] * 3 + 0x11d] = uVar1;
    param_1[0x11a] = param_1[0x11a] + 1;
  }
  uVar1 = param_1[0x107];
  uVar2 = param_1[0x106];
  param_1[param_1[0x11a] * 3 + 0x11b] = 1;
  param_1[param_1[0x11a] * 3 + 0x11c] = uVar2;
  param_1[param_1[0x11a] * 3 + 0x11d] = uVar1;
  param_1[0x11a] = param_1[0x11a] + 1;
  Mem_Set16(param_1 + 0x15,0,0x3c4);
  Mem_Copy8(param_1 + 0x15,0x3662f0,4);
  Mem_Copy8(param_1 + 0x19,0x329910,0x40);
  Mem_Copy8(param_1 + 0x29,0x329950,0x30);
  Mem_Copy8(param_1 + 0x35,0x329980,0x30);
  Mem_Copy8(param_1 + 0x41,0x329900,0x10);
  SaveSlot_BuildPath(*param_1,param_1 + 0x56,0xffffffffffffffff,1);
  SaveSlot_BuildPath(*param_1,param_1 + 0x66,0xffffffffffffffff,1);
  SaveSlot_BuildPath(*param_1,param_1 + 0x76,0xffffffffffffffff,1);
  param_1[0x18] = 0x60;
  *(short *)((int)param_1 + 0x5a) =
       (short)*(undefined4 *)
               ((uint)*(byte *)((int)param_1 + 0xd) * 8 +
               (uint)g_RaceCtx->language * 0x30 + 0x3299b4);
  maybe_strcpy(param_1 + 0x45,
               *(undefined4 *)
                ((uint)*(byte *)((int)param_1 + 0xd) * 8 +
                (uint)g_RaceCtx->language * 0x30 + 0x3299b0));
  if (1 < *(int *)(param_1[1] + 4)) {
    iVar4 = strlen(param_1 + 0x45);
    iVar5 = (int)param_2 + 1;
    *(char *)((int)param_1 + iVar4 + 0x111) =
         *(char *)((int)param_1 + iVar4 + 0x111) + (char)(iVar5 / 10);
    *(char *)((int)param_1 + iVar4 + 0x113) =
         *(char *)((int)param_1 + iVar4 + 0x113) + (char)(iVar5 % 10);
  }
  param_1[param_1[0x11a] * 3 + 0x11b] = 0;
  param_1[param_1[0x11a] * 3 + 0x11c] = param_1 + 0x15;
  param_1[param_1[0x11a] * 3 + 0x11d] = 0x3c4;
  param_1[0x11a] = param_1[0x11a] + 1;
  cVar3 = SaveSlot_FindFreeName(*param_1,param_2,param_1 + 0x11b,param_1[0x11a]);
  return cVar3 == '\0';
}

// 0x0020d4b0  size 0x12c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SaveMgr_BuildHeader(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = Mem_Alloc16(0x2c,*_g_SaveMgr);
  *(undefined4 *)(param_1 + 0x434) = uVar1;
  uVar1 = 0x208d8;
  if (*(char *)(param_1 + 0xd) != '\0') {
    uVar1 = 0x69b90;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x14) = uVar1;
  uVar1 = Mem_Alloc16(*(undefined4 *)(*(int *)(param_1 + 0x434) + 0x14),*_g_SaveMgr);
  *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x10) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x24) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x28) = 0;
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar1 = Profile_Get(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x18) = uVar1;
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar1 = maybe_RaceTbl_GetCapacity();
    }
    else {
      uVar1 = 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x1c) = uVar1;
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar1 = maybe_Race_GetMode();
    }
    else {
      uVar1 = 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x20) = uVar1;
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar1 = maybe_Options_GetLanguage();
    }
    else {
      uVar1 = 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x24) = uVar1;
  }
  else {
    uVar1 = Replay_GetHeader();
    *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x28) = uVar1;
  }
  return;
}

// 0x0020d5e0  size 0x198
undefined4 SaveMgr_FindSaveFiles(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1[1] + 4)) {
    iVar5 = 0;
    do {
      iVar4 = param_1[0x10c] + iVar5;
      if (*(char *)(iVar4 + 0x10) == '\x02') {
        if (*(int *)(iVar4 + 0x18) == 0) {
          param_1[0x11a] = 0;
          param_1[9] = 0;
          param_1[param_1[0x11a] * 3 + 0x11b] = 4;
          param_1[param_1[0x11a] * 3 + 0x11c] = iVar4;
          param_1[param_1[0x11a] * 3 + 0x11d] = 0x10;
          param_1[0x11a] = param_1[0x11a] + 1;
          iVar1 = *(int *)(iVar4 + 0x24);
          if (iVar1 != 0) {
            uVar2 = *(undefined4 *)(iVar4 + 0x28);
            param_1[param_1[0x11a] * 3 + 0x11b] = 4;
            param_1[param_1[0x11a] * 3 + 0x11c] = uVar2;
            param_1[param_1[0x11a] * 3 + 0x11d] = iVar1;
            param_1[0x11a] = param_1[0x11a] + 1;
          }
          cVar3 = SaveSlot_FindFile(*param_1,iVar6,param_1 + 0x11b,param_1[0x11a]);
          if (cVar3 == '\0') {
            param_1[0x10b] = iVar6;
            return 1;
          }
        }
        *(undefined4 *)(iVar4 + 0x18) = 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x2c;
    } while (iVar6 < *(int *)(param_1[1] + 4));
  }
  return 0;
}

// 0x0020d780  size 0x204
void SaveMgr_PrepareNewFile(undefined8 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x1c) == '\a') {
    *(undefined4 *)(iVar3 + 0x43c) = 1;
  }
  if (*(int *)(iVar3 + 0x43c) != 0) {
    *(undefined4 *)(iVar3 + 0x440) = 0;
    *(undefined4 *)(iVar3 + 0x444) = 0;
    *(undefined4 *)(iVar3 + 0x448) = *(undefined4 *)(*(int *)(iVar3 + 4) + 4);
    *(undefined4 *)(iVar3 + 0x44c) = 0;
  }
  iVar4 = *(int *)(*(int *)(iVar3 + 4) + 4);
  iVar7 = 0;
  if (0 < iVar4) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar4 = *(int *)(iVar3 + 0x430) + iVar6;
      if (*(int *)(*(int *)(iVar3 + 0x420) + iVar5) == 0) {
        if (*(int *)(iVar3 + 0x43c) != 0) {
          iVar8 = *(int *)(iVar3 + 0x448);
          if (iVar7 < *(int *)(iVar3 + 0x448)) {
            iVar8 = iVar7;
          }
          *(int *)(iVar3 + 0x448) = iVar8;
        }
        *(undefined1 *)(iVar4 + 0x10) = 1;
      }
      else {
        *(undefined1 *)(iVar4 + 0x10) = 2;
        if (*(int *)(iVar4 + 0x20) == 0) {
          if (*(int *)(iVar4 + 0x18) == 0) {
            if (*(int *)(iVar4 + 0x1c) == 0) {
              piVar1 = *(int **)(*(int *)(iVar3 + 0x420) + iVar5 + 0x24);
              if (((*piVar1 == 0) || (piVar1[7] == 0)) || (piVar1[0x1c] == 0)) {
                *(undefined1 *)(iVar4 + 0x10) = 3;
                *(undefined4 *)(iVar4 + 0x18) = 1;
              }
              else {
                if ((piVar1[5] == 0x3c4) && (*(int *)(iVar3 + 0x41c) == piVar1[0xc])) {
                  uVar9 = 0;
                  if (*(char *)(iVar3 + 0xd) != '\0') {
                    uVar9 = 0x410;
                  }
                  if (uVar9 <= (uint)piVar1[0x21]) goto LAB_0020d92c;
                }
                *(undefined1 *)(iVar4 + 0x10) = 3;
                *(undefined4 *)(iVar4 + 0x18) = 1;
              }
            }
            else {
              *(undefined1 *)(iVar4 + 0x10) = 4;
            }
          }
          else {
            *(undefined1 *)(iVar4 + 0x10) = 3;
          }
        }
        else {
          *(undefined1 *)(iVar4 + 0x10) = 5;
        }
LAB_0020d92c:
        if (*(int *)(iVar3 + 0x43c) != 0) {
          if (*(byte *)(iVar4 + 0x10) - 3 < 2) {
            *(int *)(iVar3 + 0x444) = *(int *)(iVar3 + 0x444) + 1;
          }
          *(int *)(iVar3 + 0x440) = *(int *)(iVar3 + 0x440) + 1;
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x2c;
      iVar4 = *(int *)(*(int *)(iVar3 + 4) + 4);
      iVar5 = iVar5 + 0x28;
    } while (iVar7 < iVar4);
  }
  if ((*(int *)(iVar3 + 0x43c) != 0) && (*(int *)(iVar3 + 0x440) < iVar4)) {
    uVar2 = SaveMgr_BuildFileName(param_1,*(undefined4 *)(iVar3 + 0x448));
    *(undefined4 *)(iVar3 + 0x44c) = uVar2;
  }
  *(undefined4 *)(iVar3 + 0x43c) = 0;
  return;
}

// 0x0020d990  size 0x78
int SaveUi_GetResultMessage(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xc) == '\x02') {
    if (param_2 == 0) {
      return -1;
    }
    param_2 = param_2 + -1;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x430);
    do {
      if (*(byte *)(iVar2 + 0x10) - 3 < 2) {
        if (param_2 == 0) {
          return iVar3;
        }
        param_2 = param_2 + -1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 0x0020da10  size 0x2f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 SaveUi_Task(undefined8 param_1,long param_2,undefined4 param_3,long param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = (undefined4 *)param_1;
  if (*(char *)(puVar5 + 7) == '\0') {
    return *(undefined1 *)(puVar5 + 7);
  }
  *(undefined1 *)((int)puVar5 + 0x1f) = *(undefined1 *)((int)puVar5 + 0x1e);
  uVar2 = SaveSlot_GetState(*puVar5);
  *(undefined1 *)((int)puVar5 + 0x1d) = uVar2;
  uVar2 = SaveSlot_GetSubState(*puVar5);
  *(undefined1 *)((int)puVar5 + 0x1e) = uVar2;
  puVar5[8] = (uint)(*(char *)((int)puVar5 + 0x1f) != *(char *)((int)puVar5 + 0x1e));
  puVar5[10] = param_3;
  if ((puVar5[8] == 0) && (param_2 != 0)) {
    uVar6 = _g_MenuInput[puVar5[5] + 2];
    if ((_g_MenuInput[puVar5[5] + 4] & uVar6) == 0) {
      uVar6 = 0x100000;
    }
    else if (uVar6 == 0x80000) {
      uVar6 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar6 = 0x100000;
    }
    puVar5[0xc] = uVar6;
  }
  else {
    puVar5[0xc] = 0x100000;
  }
  if (puVar5[0x157] != 0) {
    cVar1 = *(char *)(puVar5 + 7);
    if (cVar1 == '\a') {
      SaveMgr_SaveOptions(param_1);
      cVar1 = *(char *)(puVar5 + 7);
      goto LAB_0020db74;
    }
    if (cVar1 == '\x12') {
      SaveMgr_SerializeGame(param_1);
    }
    else if ((cVar1 == '\x15') || (cVar1 == '\x17')) {
      SaveMgr_DeserializeGame(param_1);
    }
  }
  cVar1 = *(char *)(puVar5 + 7);
LAB_0020db74:
  if (cVar1 == '\x04') {
    iVar3 = puVar5[0xe];
    if (puVar5[0xc] == 1) {
      if (iVar3 == 0) {
        puVar5[0xe] = 1;
      }
      else {
        puVar5[0xe] = puVar5[0xe] + -1;
      }
      if (iVar3 == puVar5[0xe]) {
        uVar4 = 8;
      }
      else {
        uVar4 = 7;
      }
      Se_PlayMenu(uVar4);
      iVar3 = puVar5[0xc];
    }
    else {
      if (puVar5[0xc] == 2) {
        if (iVar3 < 1) {
          puVar5[0xe] = puVar5[0xe] + 1;
        }
        else {
          puVar5[0xe] = 0;
        }
        if (iVar3 == puVar5[0xe]) {
          uVar4 = 8;
        }
        else {
          uVar4 = 7;
        }
        Se_PlayMenu(uVar4);
      }
      iVar3 = puVar5[0xc];
    }
    if (iVar3 == 0x10) {
      Se_PlayMenu(5);
      if (puVar5[0xe] == 1) {
        *(undefined1 *)(puVar5 + 7) = 1;
      }
      else {
        *(undefined1 *)(puVar5 + 7) = 3;
      }
    }
    else if (puVar5[0xc] == 0x20) {
      Se_PlayMenu(6);
    }
    cVar1 = *(char *)(puVar5 + 7);
  }
  else {
    SaveUi_StateMachine(param_1);
    cVar1 = *(char *)(puVar5 + 7);
  }
  if (cVar1 != '\x04') {
    puVar5[0xe] = (uint)(puVar5[9] != 0);
  }
  if ((param_4 != 0) && (*(char *)(puVar5 + 7) == '\x04')) {
    *(undefined1 *)(puVar5 + 7) = 1;
  }
  return *(undefined1 *)(puVar5 + 7);
}

// 0x0020dd00  size 0x1ac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 SaveMgr_Close(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  lVar4 = SaveSlot_Close(*param_1);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1[0x10d] + 0x10) != 0) {
      Mem_Free();
      *(undefined4 *)(param_1[0x10d] + 0x10) = 0;
    }
    if (param_1[0x10d] != 0) {
      Mem_Free();
      param_1[0x10d] = 0;
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1[1] + 4)) {
      iVar5 = 0;
      do {
        iVar1 = param_1[0x10c];
        if (*(int *)(iVar1 + iVar5 + 0x28) != 0) {
          Mem_Free();
          *(undefined4 *)(iVar1 + iVar5 + 0x28) = 0;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < *(int *)(param_1[1] + 4));
    }
    if (param_1[0x10c] != 0) {
      Mem_Free();
      param_1[0x10c] = 0;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    *(undefined1 *)((int)param_1 + 0x1f) = *(undefined1 *)((int)param_1 + 0x1e);
    if (_g_SaveMgr[3] == 0) {
      uVar3 = Arc_GetFileSize(4,4,1);
      _g_SaveMgr[2] = uVar3;
      uVar3 = Mem_AllocAligned(_g_SaveMgr[2],0x40,*_g_SaveMgr);
      _g_SaveMgr[3] = uVar3;
      uVar3 = Arc_LoadFileEx(4,_g_SaveMgr[3],0,0,0,0);
      _g_SaveMgr[1] = uVar3;
    }
    uVar2 = g_ArcToc->entries[4].unpackedSize;
    if (uVar2 == 0) {
      uVar2 = g_ArcToc->entries[4].storedSize;
    }
    param_1[0x107] = uVar2;
    uVar3 = 1;
    param_1[0x106] = _g_SaveMgr[3];
  }
  return uVar3;
}

// 0x0020deb0  size 0x254
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SaveMgr_Open(undefined8 param_1,undefined1 param_2,byte param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar1 = SaveSlot_Get(param_4,0);
  puVar6 = (undefined4 *)param_1;
  *puVar6 = uVar1;
  puVar6[1] = (uint)param_3 * 0xc + 0x329ad0;
  SaveSlot_Open(*puVar6,puVar6[1]);
  uVar1 = 0x96;
  if (param_3 != 0) {
    uVar1 = 0x1b3;
  }
  puVar6[2] = uVar1;
  SaveSlot_SetUserData(*puVar6,puVar6[2] + 2);
  *(undefined1 *)(puVar6 + 3) = param_2;
  *(byte *)((int)puVar6 + 0xd) = param_3;
  puVar6[4] = (int)param_4;
  puVar6[5] = param_5;
  puVar6[6] = param_6;
  *(undefined1 *)(puVar6 + 7) = 2;
  *(undefined1 *)((int)puVar6 + 0x1d) = 0;
  lVar2 = 2;
  if (1 < param_7) {
    lVar2 = param_7;
  }
  *(undefined1 *)((int)puVar6 + 0x1e) = 0;
  *(undefined1 *)((int)puVar6 + 0x1f) = *(undefined1 *)((int)puVar6 + 0x1e);
  puVar6[8] = 1;
  puVar6[9] = 0;
  puVar6[0xb] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = (int)lVar2;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x114] = 0;
  *(undefined2 *)(puVar6 + 0x115) = 0xffff;
  puVar6[0x116] = 0;
  puVar6[0x117] = 0;
  puVar6[0x118] = 0;
  puVar6[0x119] = 0;
  puVar6[0x11a] = 0;
  uVar1 = Mem_Alloc16(*(int *)(puVar6[1] + 4) * 0x2c,*_g_SaveMgr);
  puVar6[0x10c] = uVar1;
  iVar3 = *(int *)(puVar6[1] + 4);
  iVar5 = 0;
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      uVar1 = 0;
      iVar3 = puVar6[0x10c] + iVar4;
      if (*(char *)((int)puVar6 + 0xd) != '\0') {
        uVar1 = 0x410;
      }
      *(undefined4 *)(iVar3 + 0x24) = uVar1;
      if (*(int *)(iVar3 + 0x24) == 0) {
        *(undefined4 *)(iVar3 + 0x28) = 0;
      }
      else {
        uVar1 = Mem_Alloc16(*(int *)(iVar3 + 0x24),*_g_SaveMgr);
        *(undefined4 *)(iVar3 + 0x28) = uVar1;
      }
      iVar5 = iVar5 + 1;
      iVar3 = *(int *)(puVar6[1] + 4);
      iVar4 = iVar4 + 0x2c;
    } while (iVar5 < iVar3);
  }
  iVar5 = 0;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar4 = puVar6[0x10c] + iVar3;
      *(undefined1 *)(iVar4 + 0x10) = 0;
      *(int *)(iVar4 + 0x14) = iVar5;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      iVar3 = iVar3 + 0x2c;
    } while (iVar5 < *(int *)(puVar6[1] + 4));
  }
  puVar6[0x10e] = 1;
  puVar6[0x10f] = 1;
  SaveMgr_BuildHeader(param_1);
  puVar6[0x157] = 0;
  puVar6[0x158] = 0;
  puVar6[0x159] = 0;
  return;
}

// 0x0020e110  size 0xdc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SaveMgr_LoadIcon(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = *(undefined1 *)((int)param_1 + 0x1e);
  if (_g_SaveMgr[3] == 0) {
    uVar1 = Arc_GetFileSize(4,4,1);
    _g_SaveMgr[2] = uVar1;
    uVar1 = Mem_AllocAligned(_g_SaveMgr[2],0x40,*_g_SaveMgr);
    _g_SaveMgr[3] = uVar1;
    uVar1 = Arc_LoadFileEx(4,_g_SaveMgr[3],0,0,0,0);
    _g_SaveMgr[1] = uVar1;
  }
  uVar2 = g_ArcToc->entries[4].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[4].storedSize;
  }
  param_1[0x107] = uVar2;
  param_1[0x106] = _g_SaveMgr[3];
  return;
}

// 0x0020e1f0  size 0x1bc
undefined4
Minimap_Project(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float *param_7,float *param_8)

{
  float fVar1;
  
  if (param_6 < param_3) {
    if (param_2 <= 0.0) {
      return 1;
    }
    fVar1 = (1.0 / param_2) * (param_3 - param_6);
    if (*param_7 < fVar1) {
      *param_7 = fVar1;
    }
    if (param_1 < *param_7) {
      return 1;
    }
    fVar1 = (1.0 / param_2) * (param_4 - param_5);
    if (fVar1 < *param_8) {
      *param_8 = fVar1;
    }
    if (*param_8 < *param_7) {
      return 1;
    }
  }
  else if (param_4 < param_5) {
    if (0.0 <= param_2) {
      return 1;
    }
    fVar1 = (1.0 / param_2) * (param_4 - param_5);
    if (*param_7 < fVar1) {
      *param_7 = fVar1;
    }
    if (param_1 < *param_7) {
      return 1;
    }
    fVar1 = (1.0 / param_2) * (param_3 - param_6);
    if (fVar1 < *param_8) {
      *param_8 = fVar1;
    }
    if (*param_8 < *param_7) {
      return 1;
    }
  }
  else if (0.0 < param_2) {
    param_2 = (param_4 - param_5) / param_2;
    if (param_2 < *param_8) {
      *param_8 = param_2;
    }
    if (*param_8 < *param_7) {
      return 1;
    }
  }
  else if (param_2 < 0.0) {
    param_2 = (param_3 - param_6) / param_2;
    if (param_2 < *param_8) {
      *param_8 = param_2;
    }
    if (*param_8 < *param_7) {
      return 1;
    }
  }
  return 0;
}

// 0x0020e3b0  size 0xe0
void Minimap_ClampToFrame(undefined8 param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = (float)sceVu0InnerProduct();
  uVar2 = sceVu0InnerProduct(param_1,param_2 + 0x50);
  fVar3 = (float)fabsf(uVar2);
  fVar7 = *(float *)(param_2 + 0x60);
  uVar2 = sceVu0InnerProduct(param_1,param_2 + 0x10);
  fVar4 = (float)fabsf(uVar2);
  fVar6 = *(float *)(param_2 + 0x20);
  uVar2 = sceVu0InnerProduct(param_1,param_2 + 0x30);
  fVar5 = (float)fabsf(uVar2);
  fVar3 = fVar7 * fVar3 + fVar6 * fVar4 + *(float *)(param_2 + 0x40) * fVar5;
  *param_3 = fVar1 - fVar3;
  *param_4 = fVar1 + fVar3;
  return;
}

// 0x0020e490  size 0xc4
void Minimap_RotatePoint(undefined8 param_1,int param_2,int param_3,float *param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)sceVu0InnerProduct();
  *param_4 = fVar2;
  iVar1 = 1;
  *param_5 = fVar2;
  if (1 < param_3) {
    do {
      param_2 = param_2 + 0x10;
      fVar2 = (float)sceVu0InnerProduct(param_1,param_2);
      if (*param_4 <= fVar2) {
        if (*param_5 < fVar2) {
          *param_5 = fVar2;
        }
      }
      else {
        *param_4 = fVar2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}

// 0x0020e560  size 0x5e8
void Minimap_Draw(float param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 auStack_150 [63];
  float afStack_54 [17];
  undefined1 auStack_10 [16];
  
  iVar9 = 0;
  iVar8 = 0;
  iVar4 = -1;
  iVar7 = 0;
  iVar5 = *param_3;
  iVar3 = iVar5;
  if (0 < iVar5) {
    pfVar6 = afStack_54;
    puVar1 = param_4;
    do {
      pfVar6 = pfVar6 + 1;
      fVar10 = (float)fabsf(param_1);
      fVar12 = (float)sceVu0InnerProduct(param_2,puVar1);
      fVar10 = fVar10 * 1.1920929e-07 + (fVar12 - param_1) + 0.0;
      *pfVar6 = fVar10;
      if (0.0 <= fVar10) {
        iVar8 = iVar8 + 1;
        if (iVar4 < 0) {
          iVar4 = iVar7;
        }
      }
      else {
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar7 + 1;
      puVar1 = puVar1 + 4;
      iVar3 = *param_3;
    } while (iVar7 < *param_3);
  }
  if (iVar3 == 2) {
    if (iVar8 < 1) {
      *param_3 = 0;
      return;
    }
    if (iVar9 < 1) {
      return;
    }
    sceVu0SubVector(auStack_10,param_4 + (uint)(iVar4 == 0) * 4,param_4 + iVar4 * 4);
    sceVu0ScaleVector(afStack_54[iVar4 + 1] / (afStack_54[iVar4 + 1] - afStack_54[(iVar4 == 0) + 1])
                      ,auStack_10,auStack_10);
    sceVu0AddVector(param_4 + (uint)(iVar4 == 0) * 4,param_4 + iVar4 * 4,auStack_10);
    return;
  }
  if (iVar8 < 1) {
    *param_3 = 0;
    return;
  }
  if (iVar9 < 1) goto LAB_0020e8ec;
  iVar3 = 0;
  if (iVar4 < 1) {
    iVar7 = 0;
    pfVar6 = afStack_54;
    puVar1 = auStack_150;
    puVar2 = param_4;
    while ((pfVar6 = pfVar6 + 1, iVar7 < iVar5 && (0.0 <= *pfVar6))) {
      uVar14 = puVar2[1];
      uVar11 = puVar2[2];
      iVar7 = iVar7 + 1;
      uVar13 = puVar2[3];
      iVar3 = iVar3 + 1;
      *puVar1 = *puVar2;
      puVar1[1] = uVar14;
      puVar1[2] = uVar11;
      puVar1[3] = uVar13;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    }
    pfVar6 = afStack_54 + iVar7 + 1;
    fVar12 = afStack_54[iVar7];
    fVar10 = *pfVar6;
    sceVu0SubVector(auStack_10,param_4 + (iVar7 + -1) * 4,param_4 + iVar7 * 4);
    sceVu0ScaleVector(fVar10 / (fVar10 - fVar12),auStack_10,auStack_10);
    sceVu0AddVector(auStack_150 + iVar3 * 4,param_4 + iVar7 * 4,auStack_10);
    for (; (iVar7 < iVar5 && (*pfVar6 < 0.0)); pfVar6 = pfVar6 + 1) {
      iVar7 = iVar7 + 1;
    }
    if (iVar7 < iVar5) {
      pfVar6 = afStack_54 + iVar7 + 1;
      fVar12 = afStack_54[iVar7];
      fVar10 = *pfVar6;
      puVar2 = param_4 + iVar7 * 4;
      sceVu0SubVector(auStack_10,param_4 + (iVar7 + -1) * 4,puVar2);
      sceVu0ScaleVector(fVar10 / (fVar10 - fVar12),auStack_10,auStack_10);
      iVar4 = iVar3 + 2;
      sceVu0AddVector(auStack_150 + (iVar3 + 1) * 4,puVar2,auStack_10);
      puVar1 = auStack_150 + iVar4 * 4;
      for (; (iVar7 < iVar5 && (0.0 <= *pfVar6)); pfVar6 = pfVar6 + 1) {
        uVar14 = puVar2[1];
        uVar11 = puVar2[2];
        iVar7 = iVar7 + 1;
        uVar13 = puVar2[3];
        iVar4 = iVar4 + 1;
        *puVar1 = *puVar2;
        puVar1[1] = uVar14;
        puVar1[2] = uVar11;
        puVar1[3] = uVar13;
        puVar1 = puVar1 + 4;
        puVar2 = puVar2 + 4;
      }
      goto LAB_0020e8d8;
    }
    fVar10 = afStack_54[iVar5];
    sceVu0SubVector(auStack_10,param_4 + (iVar5 + -1) * 4,param_4);
    sceVu0ScaleVector(afStack_54[1] / (afStack_54[1] - fVar10),auStack_10,auStack_10);
    iVar5 = iVar3 + 2;
    sceVu0AddVector(auStack_150 + (iVar3 + 1) * 4,param_4,auStack_10);
  }
  else {
    pfVar6 = afStack_54 + iVar4 + 1;
    fVar12 = afStack_54[iVar4];
    fVar10 = *pfVar6;
    puVar2 = param_4 + iVar4 * 4;
    sceVu0SubVector(auStack_10,param_4 + (iVar4 + -1) * 4,puVar2);
    sceVu0ScaleVector(fVar10 / (fVar10 - fVar12),auStack_10,auStack_10);
    iVar3 = 1;
    sceVu0AddVector(auStack_150,puVar2,auStack_10);
    puVar1 = auStack_150;
    for (; (puVar1 = puVar1 + 4, iVar4 < iVar5 && (0.0 <= *pfVar6)); pfVar6 = pfVar6 + 1) {
      uVar14 = puVar2[1];
      uVar11 = puVar2[2];
      iVar4 = iVar4 + 1;
      uVar13 = puVar2[3];
      iVar3 = iVar3 + 1;
      *puVar1 = *puVar2;
      puVar1[1] = uVar14;
      puVar1[2] = uVar11;
      puVar1[3] = uVar13;
      puVar2 = puVar2 + 4;
    }
    iVar7 = iVar4;
    if (iVar5 <= iVar4) {
      iVar4 = iVar5;
      iVar7 = 0;
    }
    fVar10 = afStack_54[iVar7 + 1];
    fVar12 = afStack_54[iVar4];
    sceVu0SubVector(auStack_10,param_4 + (iVar4 + -1) * 4,param_4 + iVar7 * 4);
    sceVu0ScaleVector(fVar10 / (fVar10 - fVar12),auStack_10,auStack_10);
    iVar4 = iVar3 + 1;
    sceVu0AddVector(auStack_150 + iVar3 * 4,param_4 + iVar7 * 4,auStack_10);
LAB_0020e8d8:
    iVar5 = iVar4;
  }
  Mem_Copy8(param_4,auStack_150,iVar5 << 4);
LAB_0020e8ec:
  *param_3 = iVar5;
  return;
}

// 0x0020eb50  size 0x258
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 14 callers */

void Subtitle_Draw(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_40 [64];
  
  if (_g_Subtitle[0x1f0c] != 0) {
    uVar1 = *_g_Subtitle;
    iVar11 = 0;
    *_g_Subtitle = uVar1 ^ 1;
    if (_g_Subtitle[0x1f0e] == 1) {
      _g_Subtitle[0x1f0e] = 0;
    }
    else {
      UiText_Update(_g_Subtitle + 0x1f19);
      iVar10 = 0;
      iVar7 = 0;
      uVar2 = _g_Subtitle[uVar1 * 4 + 0x1f11];
      do {
        iVar9 = 0;
        do {
          puVar4 = _g_Subtitle;
          if ((((iVar9 < (int)_g_Subtitle[0x1f07]) || ((int)_g_Subtitle[0x1f08] < iVar9)) ||
              (iVar10 < (int)_g_Subtitle[0x1f09])) || ((int)_g_Subtitle[0x1f0a] < iVar10)) {
            uVar8 = 0;
          }
          else {
            uVar5 = (int)(char)_g_Subtitle
                               [(iVar9 - _g_Subtitle[0x1f07]) +
                                (iVar10 - _g_Subtitle[0x1f09]) * _g_Subtitle[0x309b] + 0x1f19] + 1;
            uVar8 = uVar5 & 7;
            if (((int)uVar5 < 0) && (uVar8 != 0)) {
              uVar8 = uVar8 - 8;
            }
          }
          iVar3 = iVar7 + uVar1 * 0x3dc0;
          puVar6 = (uint *)((int)_g_Subtitle + iVar3 + 0x98);
          if (uVar8 != *(uint *)((int)_g_Subtitle + iVar3 + 0x98)) {
            if (-1 < (int)_g_Subtitle[3]) {
              *(undefined8 *)
               (uVar2 + (_g_Subtitle[3] +
                        _g_Subtitle[1] + iVar11 * (_g_Subtitle[2] - _g_Subtitle[1])) * 0x10) =
                   *(undefined8 *)(_g_Subtitle + uVar8 * 2 + 0x16);
            }
            if (-1 < (int)puVar4[4]) {
              *(undefined8 *)
               (uVar2 + (puVar4[4] + _g_Subtitle[1] + iVar11 * (_g_Subtitle[2] - _g_Subtitle[1])) *
                        0x10) = *(undefined8 *)(_g_Subtitle + uVar8 * 2 + 6);
            }
            *puVar6 = uVar8;
          }
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 4;
          iVar11 = iVar11 + 1;
        } while (iVar9 < 0x4c);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x34);
    }
    Pkt_Init(auStack_40,2,2,0);
    Pkt_SubmitToChain(auStack_40,0);
    Pkt_Flush(auStack_40,_g_Subtitle[0x1f0f] + 0x10);
    Pkt_CloseDmaTag(auStack_40,_g_Subtitle + uVar1 * 4 + 0x1f11);
    Pkt_Submit(auStack_40,0);
  }
  return;
}

// 0x0020edb0  size 0x90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 13 callers */

void Subtitle_Hide(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  
  if (*(int *)(_g_Subtitle + 0x7c30) != 0) {
    *(undefined4 *)(_g_Subtitle + 0x7c38) = 1;
    if (param_2 == 0xffff) {
      UiText_Reset(_g_Subtitle + 0x7c64,-(int)param_1,0);
    }
    else {
      pbVar1 = *(byte **)(_g_Subtitle + 0x7c40);
      UiText_Reset(_g_Subtitle + 0x7c64,param_1,
                   pbVar1 + *(int *)(pbVar1 + (int)param_2 * 4 + 4) + (*pbVar1 + 1) * 4 + 8);
    }
  }
  return;
}

// 0x0020ee40  size 0xd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Subtitle_Show(int param_1,int param_2,int param_3,long param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(_g_Subtitle + 0x7c30) = 1;
  *(int *)(_g_Subtitle + 0x7c1c) = param_1;
  *(int *)(_g_Subtitle + 0x7c24) = param_2;
  pbVar1 = *(byte **)(_g_Subtitle + 0x7c40);
  iVar2 = *(int *)(pbVar1 + *(int *)(pbVar1 + param_3 * 4 + 4) + (*pbVar1 + 1) * 4);
  iVar3 = *(int *)(pbVar1 + *(int *)(pbVar1 + param_3 * 4 + 4) + (*pbVar1 + 1) * 4 + 4);
  *(int *)(_g_Subtitle + 0x7c20) = param_1 + iVar2 + -1;
  *(int *)(_g_Subtitle + 0x7c28) = param_2 + iVar3 + -1;
  if (param_4 == 0) {
    pbVar1 = *(byte **)(_g_Subtitle + 0x7c40);
    UiText_SetString(_g_Subtitle + 0x7c64,iVar2,iVar3,
                     pbVar1 + *(int *)(pbVar1 + param_3 * 4 + 4) + (*pbVar1 + 1) * 4 + 8);
  }
  else {
    UiText_SetString(_g_Subtitle + 0x7c64,iVar2,iVar3,0);
  }
  return;
}

// 0x0020ef10  size 0x230
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Subtitle_DrawFace(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_370;
  int iStack_360;
  uint auStack_350 [167];
  undefined4 uStack_b4;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_40 [64];
  
  iVar1 = _g_Subtitle + param_1 * 0x10;
  Pkt_Init(auStack_40,5,2,iVar1 + 0x7c44);
  TexSlot_Set(0,*(undefined2 *)(*(int *)(*(int *)(_g_Subtitle + 0x7c3c) + 4) + 6),
              *(undefined4 *)(*(int *)(_g_Subtitle + 0x7c3c) + 0xc));
  if (*(int *)(*(int *)(_g_Subtitle + 0x7c3c) + 8) != 0) {
    Pkt_Flush(auStack_40,*(int *)(_g_Subtitle + 0x7c3c) + 0x10);
  }
  iStack_360 = 0;
  iStack_370 = 0;
  iVar3 = 0;
  do {
    iVar4 = 0;
    iVar2 = 0;
    do {
      Obj_Reset(auStack_350,4,0xffffffffffffffff);
      Obj_SetVisible(auStack_350,1,0,*(undefined4 *)(_g_Subtitle + 0x7c18));
      uStack_b4 = 0;
      uStack_50 = 0x41000000;
      uStack_4c = 0x41000000;
      auStack_350[0] = auStack_350[0] | 2;
      fStack_60 = (float)iVar2 + 16.0;
      *(undefined4 *)(_g_Subtitle + iVar3 + 0x98) = 0;
      *(undefined4 *)(_g_Subtitle + iVar3 + 0x3e58) = 0;
      if (*(int *)(_g_Subtitle + 4) < 0) {
        *(undefined4 *)(_g_Subtitle + 4) = *(undefined4 *)(iVar1 + 0x7c4c);
      }
      fStack_5c = (float)iStack_370 + 16.0;
      Pkt_SubmitToChain(auStack_40,0);
      Pkt_AddPrimitives(auStack_40,auStack_350,1);
      Pkt_Submit(auStack_40,0);
      if (*(int *)(_g_Subtitle + 8) < 0) {
        *(undefined4 *)(_g_Subtitle + 8) = *(undefined4 *)(iVar1 + 0x7c4c);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 8;
    } while (iVar4 < 0x4c);
    iStack_370 = iStack_370 + 8;
    iStack_360 = iStack_360 + 1;
  } while (iStack_360 < 0x34);
  return;
}

// 0x0020f150  size 0x188
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Subtitle_DrawPortrait(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(_g_Subtitle + 0x7c34) != 1) && (*(int *)(_g_Subtitle + 0x7c2c) != 0)) {
    *(undefined4 *)(_g_Subtitle + 0x7c34) = 1;
    iVar1 = UiMgr_FindLayout(3);
    *(uint **)(_g_Subtitle + 0x7c3c) = &g_UiMgr->slots[iVar1].layout.unk_2cc;
    *(undefined4 *)(_g_Subtitle + 4) = 0xffffffff;
    *(undefined4 *)(_g_Subtitle + 8) = 0xffffffff;
    *(undefined4 *)(_g_Subtitle + 0xc) = 0xffffffff;
    *(undefined4 *)(_g_Subtitle + 0x10) = 0xffffffff;
    Subtitle_DrawFace(0);
    Subtitle_DrawFace(1);
    uVar2 = TexSlot_GetEntry(0,*(undefined4 *)(_g_Subtitle + 0x7c18));
    iVar4 = 0;
    iVar1 = 0;
    do {
      iVar3 = _g_Subtitle + iVar1;
      *(undefined8 *)(iVar3 + 0x18) = *(undefined8 *)((int)uVar2 + 0x18);
      *(undefined8 *)(iVar3 + 0x58) = 0;
      Tex_GetTex0(uVar2,iVar4,iVar3 + 0x18,iVar3 + 0x58);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 8;
    } while (iVar4 < 8);
    iVar1 = *(int *)(_g_Subtitle + 4);
    if (iVar1 < *(int *)(_g_Subtitle + 8)) {
      iVar4 = *(int *)(_g_Subtitle + 0x7c44) + iVar1 * 0x10;
      do {
        if (*(long *)(iVar4 + 8) == 6) {
          if (*(int *)(_g_Subtitle + 0xc) == -1) {
            *(int *)(_g_Subtitle + 0xc) = iVar1 - *(int *)(_g_Subtitle + 4);
          }
          else if (*(int *)(_g_Subtitle + 0x10) == -1) {
            *(int *)(_g_Subtitle + 0x10) = iVar1 - *(int *)(_g_Subtitle + 4);
          }
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar1 < *(int *)(_g_Subtitle + 8));
    }
  }
  return;
}

// 0x0020f2e0  size 0x94
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Subtitle_AllocBuffer(undefined8 param_1)

{
  if (*(int *)(_g_Subtitle + 0x7c2c) == 0) {
    DmaBuf_SetUncached(_g_Subtitle + 0x7c44,0,0);
    DmaBuf_Alloc(_g_Subtitle + 0x7c44,param_1,0x134c1);
    DmaBuf_SetUncached(_g_Subtitle + 0x7c54,0,0);
    DmaBuf_Alloc(_g_Subtitle + 0x7c54,param_1,0x134c1);
    *(undefined4 *)(_g_Subtitle + 0x7c2c) = 1;
  }
  return;
}

// 0x0020f380  size 0x5c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Subtitle_FreeBuffer(void)

{
  if (*(int *)(_g_Subtitle + 0x7c2c) == 1) {
    DmaBuf_Free(_g_Subtitle + 0x7c54);
    DmaBuf_Free(_g_Subtitle + 0x7c44);
    *(undefined4 *)(_g_Subtitle + 0x7c2c) = 0;
    *(undefined4 *)(_g_Subtitle + 0x7c34) = 0;
  }
  *(undefined4 *)(_g_Subtitle + 0x7c30) = 0;
  return;
}

// 0x0020f3e0  size 0x98
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Subtitle_Free(void)

{
  if (*(int *)(_g_Subtitle + 0x7c2c) == 1) {
    DmaBuf_Free(_g_Subtitle + 0x7c54);
    DmaBuf_Free(_g_Subtitle + 0x7c44);
    *(undefined4 *)(_g_Subtitle + 0x7c2c) = 0;
    *(undefined4 *)(_g_Subtitle + 0x7c34) = 0;
  }
  *(undefined4 *)(_g_Subtitle + 0x7c30) = 0;
  if (*(int *)(_g_Subtitle + 0x7c40) != 0) {
    Mem_Free();
    *(undefined4 *)(_g_Subtitle + 0x7c40) = 0;
  }
  if (_g_Subtitle != 0) {
    Mem_Free();
    _g_Subtitle = 0;
  }
  return;
}

// 0x0020f480  size 0xe4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Subtitle_Alloc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  _g_Subtitle = (undefined4 *)Mem_Alloc16(0xc280,param_1);
  uVar1 = g_ArcToc->entries[(int)param_2].unpackedSize;
  if (uVar1 == 0) {
    uVar1 = g_ArcToc->entries[(int)param_2].sectorCount;
  }
  else {
    uVar1 = uVar1 + 0x7ff >> 0xb;
  }
  uVar2 = Mem_AllocAligned(uVar1 << 0xb,0x40,param_1);
  _g_Subtitle[0x1f10] = uVar2;
  Arc_LoadFileEx(param_2,_g_Subtitle[0x1f10],0,0,0,0);
  *_g_Subtitle = 0;
  _g_Subtitle[0x1f06] = param_3;
  _g_Subtitle[0x1f0b] = 0;
  _g_Subtitle[0x1f0d] = 0;
  _g_Subtitle[0x1f0c] = 0;
  _g_Subtitle[0x1f0e] = 1;
  return;
}

// 0x0020f570  size 0x390
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuMovie_Draw(void)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  uint auStack_360 [184];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_50 [64];
  undefined1 auStack_10 [16];
  
  if (_g_MenuMovie == 0) {
    return;
  }
  if (*(char *)(_g_MenuMovie + 4) == '\t') {
    return;
  }
  if (-1 < *(int *)(_g_MenuMovie + 0x18)) {
    lVar2 = File_IsBusy();
    if (lVar2 != 1) {
      bVar3 = false;
      goto LAB_0020f5a8;
    }
    Tex_Relocate(*(undefined4 *)(_g_MenuMovie + 0x1c));
    TexSlot_Bind(_g_MenuMovie + 0x20,*(undefined4 *)(_g_MenuMovie + 0x1c),0,
                 *(undefined4 *)(_g_MenuMovie + 0x42c),*(undefined4 *)(_g_MenuMovie + 0x42c),0x11010
                 ,0,0);
    *(undefined4 *)(_g_MenuMovie + 0x18) = 0xffffffff;
  }
  bVar3 = true;
LAB_0020f5a8:
  if (bVar3) {
    iVar1 = *(int *)(_g_MoviePlayer + 0x154);
    if (iVar1 == 4) {
      MoviePlayer_Close();
    }
    else if ((iVar1 != 3) && (iVar1 != 2)) {
      if (iVar1 == 1) {
        if (*(char *)(_g_MenuMovie + 5) == '\b') {
          *(undefined4 *)(_g_MenuMovie + 8) = 0;
        }
        else if (*(char *)(_g_MenuMovie + 6) == *(char *)(_g_MenuMovie + 5)) {
          *(uint *)(_g_MenuMovie + 0xc) = *(int *)(_g_MoviePlayer + 0x174) != 0 ^ 1;
          *(uint *)(_g_MenuMovie + 8) = *(int *)(_g_MenuMovie + 0xc) != 0 ^ 1;
        }
        else {
          *(undefined4 *)(_g_MenuMovie + 8) = 0;
          *(undefined4 *)(_g_MenuMovie + 0xc) = 1;
          MoviePlayer_IsFinished();
        }
      }
      else if ((iVar1 == 0) && (*(byte *)(_g_MenuMovie + 5) != 8)) {
        Arc_GetEntryInfo(auStack_10,
                         (uint)*(byte *)(_g_MenuMovie + 5) +
                         *(int *)(&DAT_00329d24 + (uint)*(byte *)(_g_MenuMovie + 4) * 8));
        lVar2 = MoviePlayer_Open(auStack_10,1);
        if (lVar2 == 0) {
          *(undefined4 *)(_g_MenuMovie + 0xc) = 1;
        }
        else {
          *(undefined1 *)(_g_MenuMovie + 6) = *(undefined1 *)(_g_MenuMovie + 5);
          *(undefined4 *)(_g_MenuMovie + 8) = 1;
        }
      }
    }
    bVar3 = false;
    if ((*(int *)(_g_MenuMovie + 0x10) != 0) && (bVar3 = false, *(int *)(_g_MenuMovie + 0xc) == 0))
    {
      bVar3 = *(int *)(_g_MenuMovie + 8) != 0;
    }
    MoviePlayer_Update(bVar3,*(int *)(_g_MenuMovie + 0x430) * -0x10,
                       *(int *)(_g_MenuMovie + 0x434) * -0x10);
    if (((*(int *)(_g_MenuMovie + 0x10) != 0) && (*(int *)(_g_MenuMovie + 0xc) != 0)) &&
       (*(char *)(_g_MenuMovie + 5) != '\b')) {
      TexSlot_Set(0,*(undefined2 *)(*(int *)(_g_MenuMovie + 0x1c) + 6),_g_MenuMovie + 0x20);
      Pkt_Init(auStack_50,*(undefined1 *)(_g_MenuMovie + 0x420),2,0);
      Obj_Reset(auStack_360,4,0xffffffffffffffff);
      Obj_SetVisible(auStack_360,1,0,*(undefined1 *)(_g_MenuMovie + 5));
      fStack_6c = (float)*(uint *)(_g_MenuMovie + 0x434);
      fStack_70 = (float)*(uint *)(_g_MenuMovie + 0x430);
      uStack_80 = 0x3f800000;
      uStack_7c = 0x3f800000;
      auStack_360[0] = auStack_360[0] | 4;
      Pkt_SubmitToChain(auStack_50,*(undefined4 *)(_g_MenuMovie + 0x424));
      Pkt_AddPrimitives(auStack_50,auStack_360,1);
      Pkt_Submit(auStack_50,*(undefined4 *)(_g_MenuMovie + 0x428));
    }
  }
  return;
}

// 0x0020f900  size 0x4c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuMovie_SetParams(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  if (_g_MenuMovie != 0) {
    *(undefined4 *)(_g_MenuMovie + 0x10) = param_1;
    if (*(char *)(_g_MenuMovie + 5) != '\b') {
      *(undefined1 *)(_g_MenuMovie + 5) = param_2;
      *(undefined4 *)(_g_MenuMovie + 0x430) = param_3;
      *(undefined4 *)(_g_MenuMovie + 0x434) = param_4;
    }
  }
  return;
}

// 0x0020f950  size 0x18
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuMovie_Stop(void)

{
  *(undefined1 *)(_g_MenuMovie + 5) = 8;
  *(undefined4 *)(_g_MenuMovie + 8) = 0;
  MoviePlayer_IsFinished();
  return;
}

// 0x0020f970  size 0x9c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_MenuMovie_BindTexture(void)

{
  long lVar1;
  
  if (-1 < *(int *)(_g_MenuMovie + 0x18)) {
    lVar1 = File_IsBusy();
    if (lVar1 != 1) {
      return 0;
    }
    Tex_Relocate(*(undefined4 *)(_g_MenuMovie + 0x1c));
    TexSlot_Bind(_g_MenuMovie + 0x20,*(undefined4 *)(_g_MenuMovie + 0x1c),0,
                 *(undefined4 *)(_g_MenuMovie + 0x42c),*(undefined4 *)(_g_MenuMovie + 0x42c),0x11010
                 ,0,0);
    *(undefined4 *)(_g_MenuMovie + 0x18) = 0xffffffff;
  }
  return 1;
}

// 0x0020fa10  size 0x7c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 MenuMovie_Reset(void)

{
  undefined4 uVar1;
  
  if (*(int *)(_g_MoviePlayer + 0x154) == 0) {
    *(undefined4 *)(_g_MenuMovie + 0xc) = 0;
    *(undefined4 *)(_g_MenuMovie + 8) = 0;
    if (*(int *)(_g_MenuMovie + 0x10) == 0) {
      if (*(int *)(_g_MenuMovie + 0x1c) != 0) {
        Mem_Free();
        *(undefined4 *)(_g_MenuMovie + 0x1c) = 0;
      }
      uVar1 = 1;
      *(undefined1 *)(_g_MenuMovie + 4) = 9;
    }
    else {
      *(undefined4 *)(_g_MenuMovie + 0x10) = 0;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x0020fa90  size 0xd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool MenuMovie_LoadFile(undefined1 param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(_g_MenuMovie + 1);
  if (cVar1 == '\t') {
    *(undefined1 *)(_g_MenuMovie + 1) = param_1;
    *(undefined1 *)((int)_g_MenuMovie + 5) = param_2;
    _g_MenuMovie[2] = 0;
    _g_MenuMovie[3] = 1;
    _g_MenuMovie[4] = 1;
    uVar3 = *(undefined4 *)(&DAT_00329d20 + (uint)*(byte *)(_g_MenuMovie + 1) * 8);
    uVar4 = Arc_GetFileSize(uVar3,uVar3);
    uVar2 = Mem_AllocAligned(uVar4,0x40,*_g_MenuMovie);
    _g_MenuMovie[7] = uVar2;
    uVar3 = Arc_LoadFileEx(uVar3,_g_MenuMovie[7],0,0,0,0);
    _g_MenuMovie[6] = uVar3;
  }
  return cVar1 == '\t';
}

// 0x0020fb60  size 0x34
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuMovie_Free(void)

{
  MoviePlayer_Free();
  if (_g_MenuMovie != 0) {
    Mem_Free();
    _g_MenuMovie = 0;
  }
  return;
}

// 0x0020fba0  size 0x160
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuMovie_Create(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  int aiStack_50 [11];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  _g_MenuMovie = (undefined4 *)Mem_Alloc16(0x438,param_5);
  *_g_MenuMovie = (int)param_5;
  *(undefined1 *)(_g_MenuMovie + 1) = 9;
  *(undefined1 *)((int)_g_MenuMovie + 5) = 8;
  *(undefined1 *)((int)_g_MenuMovie + 6) = 8;
  *(undefined1 *)(_g_MenuMovie + 0x108) = param_2;
  _g_MenuMovie[0x109] = param_3;
  _g_MenuMovie[0x10a] = param_4;
  _g_MenuMovie[0x10b] = param_1;
  _g_MenuMovie[2] = 0;
  _g_MenuMovie[3] = 0;
  _g_MenuMovie[6] = 0xffffffff;
  _g_MenuMovie[7] = 0;
  uStack_24 = 8;
  uStack_20 = 8;
  aiStack_50[9] = 5;
  aiStack_50[1] = 1;
  aiStack_50[3] = 0x10000;
  aiStack_50[4] = 0xf;
  aiStack_50[0] = _g_GameShared1 + 1;
  aiStack_50[5] = 0x1e0;
  aiStack_50[6] = 0xc0;
  aiStack_50[7] = 0x200;
  aiStack_50[8] = 0x100;
  aiStack_50[2] = 0;
  uStack_1c = *(undefined1 *)(_g_MenuMovie + 0x108);
  uStack_18 = 0;
  uStack_14 = _g_MenuMovie[0x109];
  uStack_10 = _g_MenuMovie[0x10a];
  uStack_c = 0x7fff;
  uStack_8 = 0x800;
  aiStack_50[10] = param_1;
  MoviePlayer_Create(aiStack_50,*_g_MenuMovie);
  return;
}

// 0x0020fd00  size 0x1dc
/* entry 8 of state table 0x329d70 used by MenuPage43_Update */

void MenuPage43_State8(int param_1)

{
  int iVar1;
  bool bVar2;
  MenuMgr *pMVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  
  iVar7 = *(int *)(param_1 + 0x6b0);
  iVar1 = *(int *)(*(int *)(param_1 + 4) * 4 + param_1 + 0x4d8);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  bVar2 = iVar1 != 1;
  if (iVar7 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar8 = MenuWnd_DrawFooter(0x57,bVar2,0x36e8b0);
  if (*(int *)(param_1 + 0x6b4) != 0) {
    if (lVar8 == 2) {
      MenuWnd_RequestRedraw();
    }
    pMVar3 = g_MenuMgr;
    bVar6 = false;
    if ((g_MenuMgr->nextScreen != g_MenuMgr->curScreen) || (*(int *)(param_1 + 0x6a4) == 4)) {
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x115,3);
      bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x115,1);
      bVar6 = UiLayout_UpdateAnimIfActive((UiLayout *)&pMVar3->field_0x40,1);
      bVar6 = bVar6 || (bVar4 || bVar5);
    }
    if ((lVar8 == 3) && (!bVar6)) {
      *(undefined4 *)(param_1 + 0x6b4) = 0;
    }
  }
  if (lVar8 == 2) {
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)((uint)bVar2 * 4 + 0x36e8b8));
  if (*(int *)(param_1 + 8) == 0) {
    MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 0x4d0) * 4 + param_1 + 0x4c),
                       0xffffffffffffffff,0xffffffffffffffff,0);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x4d0),1,0xffffffffffffffff,0);
  }
  iVar7 = UiMgr_FindLayout(0x115);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x0020fee0  size 0x560
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectCarColour(int param_1)

{
  undefined4 uVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  int *piVar8;
  int iVar9;
  UiLayout *pUVar10;
  undefined1 auStack_8 [3];
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4d0) * 4 + param_1 + 0x4c);
  iVar4 = CarDb_GetModelEntry(uVar1);
  iVar9 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar9 != 0) {
    uVar5 = UiRes_GetLayoutData(100);
    iVar9 = UiMgr_FindLayout(0x1a);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar9].layout.unk_310 = 0xffffffff;
    pUVar2[iVar9].layout.unk_31c = 0;
    pUVar2[iVar9].layout.unk_30c = 0;
    if (pUVar2[iVar9].layout.unk_31c == 0) {
      pUVar2[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar9].layout.unk_318 = 1;
    }
    pUVar2[iVar9].layout.unk_30c = 0;
    if (pUVar2[iVar9].layout.unk_31c == 0) {
      pUVar2[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar9].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x314 = 0;
    pUVar2[iVar9].layout.unk_31c = uVar5;
    pUVar2[iVar9].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x65);
    iVar9 = UiMgr_FindLayout(0x1a);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x330 == 0) {
      pUVar2[iVar9].layout.animState = 0;
    }
    else {
      pUVar2[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x330 == 0) {
      pUVar2[iVar9].layout.animState = 0;
    }
    else {
      pUVar2[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x330 = uVar6;
    pUVar2[iVar9].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x66);
    iVar9 = UiMgr_FindLayout(0x1a);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x67);
    iVar9 = UiMgr_FindLayout(0x1a);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x354 = 1;
    iVar9 = UiMgr_FindLayout(0x1a);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x34,8,extraout_a3_lo);
    iVar9 = UiMgr_FindLayout(0x1a);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x36,8,extraout_a3_lo_00);
    Menu_ClearSlot(0);
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x1a,0);
  if (!bVar3) {
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  if ((*(int *)(param_1 + 0x6b4) != 0) &&
     (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x1a,1), !bVar3)) {
    *(undefined4 *)(param_1 + 0x6b4) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x1a,*(undefined4 *)(&DAT_00329f90 + *(int *)(param_1 + 0x4d4) * 4),0,0);
  }
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 0x4d0) * 4 + param_1 + 0x4c),
                     0xffffffffffffffff,0xffffffffffffffff,0);
  iVar9 = 0;
  piVar8 = &DAT_00329fc0;
  do {
    if (iVar4 <= iVar9) {
      iVar7 = UiMgr_FindLayout(0x1a);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)*piVar8,8,extraout_a3_lo_01);
    }
    iVar9 = iVar9 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar9 < 0xc);
  iVar9 = 0;
  if (0 < iVar4) {
    piVar8 = &DAT_00329ff0;
    do {
      iVar7 = UiMgr_FindLayout(0x1a);
      pUVar10 = &g_UiMgr->slots[iVar7].layout;
      CarDb_GetPartEntry(auStack_8,uVar1,iVar9,0);
      uVar5 = (uint)bStack_3 | (uint)bStack_5 << 0x10 | 0xff000000 | (uint)bStack_4 << 8;
      UiElem_SetPropInt(pUVar10,(long)*piVar8,0x39,uVar5);
      UiElem_SetPropInt(pUVar10,(long)*piVar8,0x3a,uVar5);
      UiElem_SetPropInt(pUVar10,(long)*piVar8,0x3b,uVar5);
      UiElem_SetPropInt(pUVar10,(long)*piVar8,0x3c,uVar5);
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar9 < iVar4);
  }
  iVar9 = UiMgr_FindLayout(0x115);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0x1a);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  MenuWnd_DrawLabel(0x102,0x1b,0x11f,*(int *)(param_1 + 4) + 1);
  return;
}

