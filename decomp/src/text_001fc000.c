// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001fc000 - 0x00200000
#include "ghidra_types.h"

// 0x001fc2d0  size 0x128
/* WARNING: Removing unreachable block (ram,0x001fc320) */
/* WARNING: Removing unreachable block (ram,0x001fc370) */

bool MenuMgr_PushScreen(void)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((g_MenuMgr->flags & 0x20) != 0) {
    lVar1 = MenuMgr_LoadScreenLayouts();
    bVar2 = lVar1 == 1;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffffffdf;
  }
  if ((g_MenuMgr->flags & 0x40) != 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x200;
    MenuMgr_PopScreen();
    bVar2 = true;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffffffbf;
  }
  if ((g_MenuMgr->flags & 0x80) != 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400;
    bVar2 = true;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffffff7f;
  }
  return bVar2;
}

// 0x001fc400  size 0xa0
undefined8 MenuMgr_Start(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = UiMgr_FindFreeSlot();
  uVar2 = 1;
  if ((lVar1 != 1) && (g_MenuMgr->unk_0344 != 1)) {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xfffffeff;
    uVar2 = 0;
  }
  lVar1 = CarDb_IsLoading();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  lVar1 = GameDb_IsLoading();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  lVar1 = MenuMgr_EnterScreen();
  if (lVar1 == 1) {
    uVar2 = 1;
  }
  return uVar2;
}

// 0x001fc4a0  size 0x54
void MenuMgr_Back(void)

{
  if ((int)g_MenuMgr->nextScreen < -1) {
    MenuMgr_PopScreen();
  }
  g_MenuMgr->prevScreen = g_MenuMgr->curScreen;
  g_MenuMgr->curScreen = g_MenuMgr->nextScreen;
  return;
}

// 0x001fc500  size 0x4b0
undefined4 MenuMgr_SetupFromCareer(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  char acStack_40 [16];
  char acStack_30 [16];
  char acStack_20 [16];
  char acStack_10 [16];
  
  uVar1 = g_MenuMgr->curScreen;
  uVar6 = g_MenuMgr->nextScreen;
  uVar7 = g_MenuMgr->nextBgMode;
  if (uVar6 == uVar1) {
    if (uVar1 == 4) {
      iVar3 = MenuMgr_UpdateTransition();
      if (*(int *)(iVar3 + 0x50) != *(int *)(iVar3 + 0x4c)) {
        if (*(int *)(iVar3 + 0x50) - 4U < 2) {
          uVar7 = 3;
        }
        else {
          uVar7 = 6;
        }
      }
    }
    else if (uVar1 == 0x1b) {
      iVar3 = MenuMgr_UpdateTransition();
      uVar1 = *(uint *)(iVar3 + 0x650);
      if (((uVar1 != *(uint *)(iVar3 + 0x64c)) && ((g_MenuMgr->flags & 0x80000000) == 0)) &&
         (uVar1 < 0x2d)) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 9:
        case 0xb:
          uVar7 = 5;
          break;
        default:
          uVar7 = 2;
          break;
        case 8:
        case 10:
        case 0xf:
        case 0x11:
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
          uVar7 = 1;
          break;
        case 0x20:
          uVar7 = 3;
        }
      }
    }
    else if (uVar1 == 0x2b) {
      iVar3 = MenuMgr_UpdateTransition();
      if (*(uint *)(iVar3 + 0x6a4) != *(uint *)(iVar3 + 0x6a0)) {
        if (*(uint *)(iVar3 + 0x6a4) < 2) {
          uVar7 = 5;
        }
        else {
          uVar7 = 1;
        }
      }
    }
    else {
      if (uVar1 != 0x20) goto LAB_001fc868;
      iVar3 = MenuMgr_UpdateTransition();
      uVar1 = *(uint *)(iVar3 + 0x888);
      if ((uVar1 != *(uint *)(iVar3 + 0x884)) && (uVar1 < 0xc)) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar1) {
        default:
          uVar7 = 5;
          break;
        case 1:
          break;
        case 7:
          uVar7 = 1;
        }
      }
    }
  }
  else if (uVar6 == 0xf) {
    uVar7 = 4;
  }
  else if (uVar6 == 0x12) {
    uVar7 = 3;
  }
  else if ((uVar6 == 0x1b) || (uVar6 == 0xc)) {
    uVar6 = 5;
    uVar7 = uVar6;
    if (uVar1 == 0xf) {
      uVar7 = 1;
      if (((g_MenuMgr->flags & 0x10000000) == 0) &&
         (uVar7 = uVar6, (g_MenuMgr->flags & 0x20000000) == 0)) {
        uVar7 = 2;
      }
    }
    else if (uVar1 == 0xffffffff) {
      cVar2 = RaceCtx_Get_8();
      if (cVar2 == '\x02') {
        uVar7 = 1;
        uVar5 = GameState_Get_35c();
        if (((uVar5 & 1) != 0) && (GameState_GetVec3d0(acStack_10), acStack_10[0] == '\x05')) {
          uVar7 = 3;
        }
        cVar2 = RaceCtx_Get_8();
        if (cVar2 == '\x01') {
          uVar7 = 5;
        }
        else {
          cVar2 = RaceCtx_Get_8();
          if (cVar2 == '\x05') {
            uVar7 = 5;
          }
        }
        cVar2 = RaceCtx_Get_8();
        if (cVar2 == '\x02') {
          uVar5 = GameState_Get_35c();
          if (((uVar5 & 2) != 0) || (uVar5 = GameState_Get_35c(), (uVar5 & 4) != 0)) {
            GameState_GetVec3c4(acStack_20);
            if ((acStack_20[0] == '\x05') ||
               (GameState_GetVec3c4(acStack_30), acStack_30[0] == '\b')) {
              uVar7 = 5;
            }
            else {
              GameState_GetVec3c4(acStack_40);
              if (acStack_40[0] == '\x06') {
                uVar7 = 5;
              }
            }
          }
          uVar5 = GameState_Get_35c();
          if ((uVar5 & 0x100000) != 0) {
            uVar7 = 5;
          }
        }
      }
      else {
        cVar2 = RaceCtx_Get_8();
        if (cVar2 == '\x03') {
          uVar7 = 1;
        }
      }
    }
  }
  else if (uVar6 == 4) {
    if (uVar1 == 0xffffffff) {
      uVar7 = 3;
    }
    else {
      uVar7 = 6;
    }
  }
  else if (uVar6 == 0x2b) {
    if ((uVar1 == 0x23) || (uVar1 == 0x18)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 5;
    }
  }
  else if (uVar6 == 0x20) {
    if (uVar1 == 0x23) {
      uVar7 = 1;
    }
    else {
      uVar7 = 5;
    }
  }
  else {
    if ((((uVar6 == 0x11) || (uVar6 == 0x23)) || (uVar6 == 0x25)) || (uVar6 == 0x24)) {
      return 0;
    }
    uVar7 = 1;
  }
LAB_001fc868:
  if ((uVar7 == g_MenuMgr->nextBgMode) || (uVar7 == g_MenuMgr->bgMode)) {
    uVar4 = 0;
  }
  else {
    if (uVar7 - 5 < 2) {
      Menu_GetUnlockState();
    }
    g_MenuMgr->bgMode = uVar7;
    if (((g_MenuMgr->nextBgMode == 0) && (g_MenuMgr->bgMode != 5)) && (g_MenuMgr->bgMode != 6)) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x100;
      UiLayout_Load((UiLayout *)&g_MenuMgr->field_0x40,(undefined4 *)&DAT_003294a8,0x430750);
    }
    uVar4 = 1;
  }
  return uVar4;
}

// 0x001fc9b0  size 0x6c0
undefined8 MenuMgr_SetupFromResult(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  char acStack_40 [16];
  char acStack_30 [16];
  char acStack_20 [16];
  char acStack_10 [16];
  
  uVar5 = Profile_Get(0);
  uVar7 = g_MenuMgr->curScreen;
  uVar1 = g_MenuMgr->nextScreen;
  if (uVar1 == uVar7) {
    if (uVar7 == 0x1b) {
      iVar4 = MenuMgr_UpdateTransition();
      iVar2 = *(int *)(iVar4 + 0x650);
      if ((iVar2 != *(int *)(iVar4 + 0x64c)) && ((g_MenuMgr->flags & 0x80000000) == 0)) {
        if ((iVar2 == 0x2a) || (iVar2 == 0x20)) {
          g_MenuMgr->voiceParam = 0x12;
        }
        else if (((((iVar2 == 0x2e) || (iVar2 == 0x2b)) || (iVar2 == 0x29)) ||
                 (((iVar2 == 0x21 || (iVar2 == 0x1f)) ||
                  ((iVar2 == 0x15 || ((iVar2 == 0x14 || (iVar2 == 0x1a)))))))) || (iVar2 == 0x19)) {
          g_MenuMgr->voiceParam = 0xffffffff;
        }
        else if ((((iVar2 == 9) || (iVar2 == 6)) || (iVar2 == 0xb)) ||
                (((iVar2 == 5 || (iVar2 == 7)) ||
                 (((iVar2 == 2 || ((iVar2 == 1 || (iVar2 == 3)))) || (iVar2 == 0)))))) {
          cVar3 = Profile_GetChapter(uVar5);
          uVar7 = 0x27;
          if (cVar3 != '\0') {
            uVar7 = 0x28;
          }
          g_MenuMgr->voiceParam = uVar7;
        }
        else {
          cVar3 = Profile_GetChapter(uVar5);
          uVar7 = 7;
          if (cVar3 != '\0') {
            uVar7 = 8;
          }
          g_MenuMgr->voiceParam = uVar7;
        }
      }
    }
    else if (uVar7 == 4) {
      iVar4 = MenuMgr_UpdateTransition();
      iVar2 = *(int *)(iVar4 + 0x50);
      if (iVar2 != *(int *)(iVar4 + 0x4c)) {
        if (iVar2 == 4) {
          g_MenuMgr->voiceParam = 0xffffffff;
        }
        else if (iVar2 == 5) {
          g_MenuMgr->voiceParam = 0x12;
        }
        else {
          cVar3 = Profile_GetChapter(uVar5);
          uVar7 = 0x27;
          if (cVar3 != '\0') {
            uVar7 = 0x28;
          }
          g_MenuMgr->voiceParam = uVar7;
        }
      }
    }
  }
  else if (uVar1 == 0xe) {
    g_MenuMgr->voiceParam = 0xe;
  }
  else if (uVar1 == 0xd) {
    g_MenuMgr->voiceParam = 0xd;
  }
  else if (((uVar1 == 0x2b) || (uVar1 == 0x21)) || (uVar1 == 0x20)) {
    g_MenuMgr->voiceParam = 0x27;
  }
  else if (uVar1 == 0x1b) {
    if (uVar7 != 0xf) {
      if (uVar7 == 0xffffffff) {
        cVar3 = RaceCtx_GetMode();
        if (cVar3 == '\a') {
          cVar3 = Profile_GetChapter(uVar5);
          uVar7 = 0x27;
          if (cVar3 != '\0') {
            uVar7 = 0x28;
          }
          g_MenuMgr->voiceParam = uVar7;
        }
        else {
          g_MenuMgr->voiceParam = 0xffffffff;
          cVar3 = RaceCtx_Get_8();
          if (cVar3 == '\x01') {
            cVar3 = Profile_GetChapter(uVar5);
            uVar7 = 0x27;
            if (cVar3 != '\0') {
              uVar7 = 0x28;
            }
            g_MenuMgr->voiceParam = uVar7;
          }
          else {
            cVar3 = RaceCtx_Get_8();
            if (cVar3 == '\x05') {
              cVar3 = Profile_GetChapter(uVar5);
              uVar7 = 0x27;
              if (cVar3 != '\0') {
                uVar7 = 0x28;
              }
              g_MenuMgr->voiceParam = uVar7;
            }
          }
          cVar3 = RaceCtx_Get_8();
          if (cVar3 == '\x02') {
            GameState_GetVec3c4(acStack_10);
            if ((acStack_10[0] == '\x05') && (uVar6 = GameState_Get_35c(), (uVar6 & 1) != 0)) {
              g_MenuMgr->voiceParam = 0x12;
            }
            else {
              uVar6 = GameState_Get_35c();
              if ((((uVar6 & 2) != 0) || (uVar6 = GameState_Get_35c(), (uVar6 & 4) != 0)) &&
                 (((GameState_GetVec3c4(acStack_20), acStack_20[0] == '\x05' ||
                   (GameState_GetVec3c4(acStack_30), acStack_30[0] == '\b')) ||
                  (GameState_GetVec3c4(acStack_40), acStack_40[0] == '\x06')))) {
                cVar3 = Profile_GetChapter(uVar5);
                uVar7 = 0x27;
                if (cVar3 != '\0') {
                  uVar7 = 0x28;
                }
                g_MenuMgr->voiceParam = uVar7;
              }
              uVar6 = GameState_Get_35c();
              if ((uVar6 & 0x100000) != 0) {
                cVar3 = Profile_GetChapter(uVar5);
                uVar7 = 0x27;
                if (cVar3 != '\0') {
                  uVar7 = 0x28;
                }
                g_MenuMgr->voiceParam = uVar7;
              }
            }
          }
        }
      }
      else {
        cVar3 = Profile_GetChapter(uVar5);
        uVar7 = 0x27;
        if (cVar3 != '\0') {
          uVar7 = 0x28;
        }
        g_MenuMgr->voiceParam = uVar7;
      }
    }
  }
  else if (uVar1 == 0x27) {
    g_MenuMgr->voiceParam = 0xb;
  }
  else if (((uVar1 == 0x1a) || (uVar1 == 0x19)) || ((uVar1 == 0x18 || (uVar1 == 0x17)))) {
    cVar3 = Profile_GetChapter(uVar5);
    uVar7 = 0xd;
    if (cVar3 != '\0') {
      uVar7 = 0xe;
    }
    g_MenuMgr->voiceParam = uVar7;
  }
  else if (uVar1 == 0xc) {
    cVar3 = Profile_GetChapter(uVar5);
    uVar7 = 0x27;
    if (cVar3 != '\0') {
      uVar7 = 0x28;
    }
    g_MenuMgr->voiceParam = uVar7;
  }
  else if (uVar1 == 4) {
    if (uVar7 == 0xffffffff) {
      g_MenuMgr->voiceParam = 0xffffffff;
    }
    else {
      cVar3 = Profile_GetChapter(uVar5);
      uVar7 = 0x27;
      if (cVar3 != '\0') {
        uVar7 = 0x28;
      }
      g_MenuMgr->voiceParam = uVar7;
    }
  }
  else if ((uVar1 == 0x16) || (uVar1 == 9)) {
    g_MenuMgr->voiceParam = 0xf;
  }
  else if ((((((uVar1 == 0x2c) || (uVar1 == 0x2d)) || (uVar1 == 0)) ||
            ((uVar1 == 0xffffffff || (uVar1 == 0xfffffffe)))) || (uVar1 == 0xfffffffd)) ||
          ((uVar1 == 0xfffffffc || (uVar1 == 0xfffffffa)))) {
    g_MenuMgr->voiceParam = 0xffffffff;
  }
  else if ((((uVar1 != 0xf) && (uVar1 != 0x11)) && (uVar1 != 0x23)) &&
          ((uVar1 != 0x25 && (uVar1 != 0x24)))) {
    cVar3 = Profile_GetChapter(uVar5);
    uVar7 = 0xd;
    if (cVar3 != '\0') {
      uVar7 = 0xe;
    }
    g_MenuMgr->voiceParam = uVar7;
  }
  return 0;
}

// 0x001fd070  size 0x50
/* stores the requested screen id at MenuMgr+0x20 (was MenuMgr_GetScreenParam) */

void MenuMgr_RequestScreen(long param_1)

{
  if (param_1 < 0) {
    MenuSnd_PlayVoice();
    g_MenuMgr->voiceParam = 0xffffffff;
  }
  g_MenuMgr->nextScreen = (uint)param_1;
  return;
}

// 0x001fd0c0  size 0x10c
undefined4 MenuMgr_ResolveNext(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  
  uVar1 = g_MenuMgr->curScreen;
  uVar2 = g_MenuMgr->nextScreen;
  if (((uVar2 == uVar1) || (uVar2 == 0xffffffff)) ||
     (psVar5 = (short *)(&PTR_DAT_00328f60)[uVar2], psVar5 == (short *)0x0)) {
    uVar3 = 0;
  }
  else if ((uVar1 == 0xffffffff) || ((short *)(&PTR_DAT_00328f60)[uVar1] == (short *)0x0)) {
    uVar3 = 1;
  }
  else if (psVar5 == (short *)(&PTR_DAT_00328f60)[uVar1]) {
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    while( true ) {
      if ((*psVar5 == -2) && (*(short *)((&PTR_DAT_00328f60)[g_MenuMgr->curScreen] + iVar4) == -2))
      {
        return 1;
      }
      if ((*(short *)((&PTR_DAT_00328f60)[g_MenuMgr->curScreen] + iVar4) == -2) ||
         (*(short *)((&PTR_DAT_00328f60)[g_MenuMgr->nextScreen] + iVar4) !=
          *(short *)((&PTR_DAT_00328f60)[g_MenuMgr->curScreen] + iVar4))) break;
      psVar5 = psVar5 + 1;
      iVar4 = iVar4 + 2;
    }
    uVar3 = 1;
  }
  return uVar3;
}

// 0x001fd1d0  size 0xfc
undefined8 MenuMgr_ApplyNext(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((int)g_MenuMgr->nextScreen < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((g_MenuMgr->flags & 0x20) == 0) {
      lVar2 = MenuMgr_ResolveNext();
      if (lVar2 == 1) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x20;
        uVar1 = 1;
      }
    }
    if ((g_MenuMgr->flags & 0x40) == 0) {
      lVar2 = MenuMgr_SetupFromCareer();
      if (lVar2 == 1) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x40;
        uVar1 = 1;
      }
    }
    if ((g_MenuMgr->flags & 0x80) == 0) {
      lVar2 = MenuMgr_SetupFromResult();
      if (lVar2 == 1) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x80;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

// 0x001fd2d0  size 0xa8
/* 13 callers */

undefined4 MenuMgr_Goto(void)

{
  undefined4 uVar1;
  long lVar2;
  
  if (g_MenuMgr->nextScreen == g_MenuMgr->curScreen) {
    lVar2 = MenuMgr_ApplyNext();
    if (lVar2 != 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
    }
    uVar1 = 0;
  }
  else {
    if ((int)g_MenuMgr->nextScreen < -1) {
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
    }
    else {
      lVar2 = MenuMgr_ApplyNext();
      if (lVar2 != 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 1;
      }
    }
    uVar1 = 1;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xfffffffb;
  }
  return uVar1;
}

// 0x001fd380  size 0x200
uint MenuMgr_UpdateTransition(ulong param_1)

{
  uint uVar1;
  
  uVar1 = g_MenuMgr->unk_0530;
  if (param_1 < 0x2e) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_1) {
    case 0:
      break;
    case 1:
      uVar1 = uVar1 + 0x77c;
      break;
    case 2:
      uVar1 = uVar1 + 0x784;
      break;
    case 3:
      uVar1 = uVar1 + 0xc90;
      break;
    case 4:
      uVar1 = uVar1 + 0xd08;
      break;
    case 5:
      uVar1 = uVar1 + 0xd78;
      break;
    case 6:
      uVar1 = uVar1 + 0x628c;
      break;
    case 7:
      uVar1 = uVar1 + 0x6610;
      break;
    case 8:
      uVar1 = uVar1 + 0x6c9c;
      break;
    case 9:
      uVar1 = uVar1 + 0x6cc0;
      break;
    case 10:
      uVar1 = uVar1 + 0x6d04;
      break;
    case 0xb:
      uVar1 = uVar1 + 0x6d28;
      break;
    case 0xc:
      uVar1 = uVar1 + 0x6d30;
      break;
    case 0xd:
      uVar1 = uVar1 + 0x6d40;
      break;
    case 0xe:
      uVar1 = uVar1 + 0x6d88;
      break;
    case 0xf:
      uVar1 = uVar1 + 0x6dd0;
      break;
    case 0x10:
      uVar1 = uVar1 + 0x6e38;
      break;
    case 0x11:
      uVar1 = uVar1 + 0x6f68;
      break;
    case 0x12:
      uVar1 = uVar1 + 0x6f90;
      break;
    case 0x13:
      uVar1 = uVar1 + 0x71b0;
      break;
    case 0x14:
      uVar1 = uVar1 + 0x7a20;
      break;
    case 0x15:
      uVar1 = uVar1 + 0x7b48;
      break;
    case 0x16:
      uVar1 = uVar1 + 0x7b8c;
      break;
    case 0x17:
      uVar1 = uVar1 + 0x7bc0;
      break;
    case 0x18:
      uVar1 = uVar1 + 0x83ac;
      break;
    case 0x19:
      uVar1 = uVar1 + 0x8b30;
      break;
    case 0x1a:
      uVar1 = uVar1 + 0x92ac;
      break;
    case 0x1b:
      uVar1 = uVar1 + 0x98b4;
      break;
    case 0x1c:
      uVar1 = uVar1 + 0x9fd0;
      break;
    case 0x1d:
      uVar1 = uVar1 + 0x9fd4;
      break;
    case 0x1e:
      uVar1 = uVar1 + 0xa044;
      break;
    case 0x1f:
      uVar1 = uVar1 + 0xa944;
      break;
    case 0x20:
      uVar1 = uVar1 + 0xa980;
      break;
    case 0x21:
      uVar1 = uVar1 + 0xb250;
      break;
    case 0x22:
      uVar1 = uVar1 + 0xb274;
      break;
    case 0x23:
      uVar1 = uVar1 + 0xb2a4;
      break;
    case 0x24:
      uVar1 = uVar1 + 0xb2f4;
      break;
    case 0x25:
      uVar1 = uVar1 + 0xb300;
      break;
    case 0x26:
      uVar1 = uVar1 + 0xb638;
      break;
    case 0x27:
      uVar1 = uVar1 + 0xb688;
      break;
    case 0x28:
      uVar1 = uVar1 + 0xb7c4;
      break;
    case 0x29:
      uVar1 = uVar1 + 0xb7c8;
      break;
    case 0x2a:
      uVar1 = uVar1 + 0xc1f0;
      break;
    case 0x2b:
      uVar1 = uVar1 + 0xc330;
      break;
    case 0x2c:
      uVar1 = uVar1 + 0xc9f4;
      break;
    case 0x2d:
      uVar1 = uVar1 + 0xca38;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x001fd580  size 0x4c
void MenuMgr_FreeBuffers(void)

{
  if (g_MenuMgr->unk_0530 != 0) {
    Mem_Free();
    g_MenuMgr->unk_0530 = 0;
  }
  if (g_MenuMgr != (MenuMgr *)0x0) {
    Mem_Free();
  }
  g_MenuMgr = (MenuMgr *)0x0;
  return;
}

// 0x001fd5d0  size 0x260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x660 bytes */

void MenuMgr_Alloc(undefined8 param_1,uint param_2)

{
  MenuMgr *pMVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  
  g_MenuMgr = (MenuMgr *)Mem_Alloc16(0x660,param_1);
  uVar2 = Mem_Alloc16(0xca68,param_1);
  iVar7 = 0;
  g_MenuMgr->unk_0530 = uVar2;
  g_MenuMgr->curScreen = 0xffffffff;
  g_MenuMgr->nextScreen = param_2;
  g_MenuMgr->prevScreen = 0xffffffff;
  g_MenuMgr->nextBgMode = 0;
  g_MenuMgr->bgMode = 0;
  g_MenuMgr->flags = 4;
  g_MenuMgr->unk_0038 = 0xffffffff;
  g_MenuMgr->voiceParam = 0xffffffff;
  pMVar1 = g_MenuMgr;
  g_MenuMgr->unk_0534 = 0;
  puVar6 = &pMVar1->unk_0534;
  pMVar1->unk_0538 = 0;
  *(undefined4 *)&pMVar1->field_0x53c = 0;
  pMVar1->unk_0540 = 0;
  pMVar1->unk_0594 = 0;
  pMVar1->unk_0598 = 0;
  *(uint *)&pMVar1->field_0x59c = pMVar1->unk_0598;
  pMVar1->unk_05a0 = 0;
  pMVar1->unk_0544 = 0xfffffffe;
  puVar5 = puVar6;
  do {
    *(undefined2 *)(puVar5 + 5) = 0x162;
    iVar7 = iVar7 + 7;
    *(undefined2 *)((int)puVar5 + 0x16) = 0x162;
    *(undefined2 *)(puVar5 + 6) = 0x162;
    *(undefined2 *)((int)puVar5 + 0x1a) = 0x162;
    *(undefined2 *)(puVar5 + 7) = 0x162;
    *(undefined2 *)((int)puVar5 + 0x1e) = 0x162;
    *(undefined2 *)(puVar5 + 8) = 0x162;
    puVar5 = (uint *)((int)puVar5 + 0xe);
  } while (iVar7 < 0x15);
  iVar7 = 0;
  do {
    *(undefined2 *)((int)puVar6 + 0x3e) = 0xfffe;
    iVar7 = iVar7 + 8;
    *(undefined2 *)(puVar6 + 0x10) = 0xfffe;
    *(undefined2 *)((int)puVar6 + 0x42) = 0xfffe;
    *(undefined2 *)(puVar6 + 0x11) = 0xfffe;
    *(undefined2 *)((int)puVar6 + 0x46) = 0xfffe;
    *(undefined2 *)(puVar6 + 0x12) = 0xfffe;
    *(undefined2 *)((int)puVar6 + 0x4a) = 0xfffe;
    *(undefined2 *)(puVar6 + 0x13) = 0xfffe;
    pMVar1 = g_MenuMgr;
    puVar6 = puVar6 + 4;
  } while (iVar7 < 0x10);
  g_MenuMgr->unk_05ac = '\x01';
  pMVar1->unk_05b8 = 0;
  *(undefined4 *)&pMVar1->field_0x5b4 = 0xffffffff;
  pMVar1->unk_05e8 = 0;
  *(undefined4 *)&pMVar1->field_0x5d8 = 0xffffffff;
  pMVar1->unk_05dc = 0;
  pMVar1 = g_MenuMgr;
  g_MenuMgr->unk_05f0 = 0;
  pMVar1->unk_060c = 0;
  pMVar1->unk_05fc = 0;
  pMVar1->unk_0600 = 0;
  pMVar1 = g_MenuMgr;
  g_MenuMgr->unk_0620 = '\x01';
  pMVar1->unk_0624 = 0xffffffff;
  pMVar1->unk_0628 = 0xffffffff;
  pMVar1->unk_0634 = 0;
  *(undefined4 *)&pMVar1->field_0x62c = 0;
  *(undefined4 *)&pMVar1->field_0x614 = 0xffffffff;
  pMVar1->unk_0618 = 0;
  pMVar1 = g_MenuMgr;
  g_MenuMgr->unk_0644 = 0;
  pMVar1->unk_0640 = '\0';
  pMVar1->unk_0648 = 0xa0;
  pMVar1->unk_064c = 0x31;
  pMVar1->unk_0650 = 0;
  *(uint *)(g_MenuInput + 0x10) = *(uint *)(g_MenuInput + 0x10) | 0x10;
  *(uint *)(g_MenuInput + 0x10) = *(uint *)(g_MenuInput + 0x10) | 0x80;
  UiLayout_Init((UiLayout *)&g_MenuMgr->field_0x40,_g_RaceIntroShared1,_g_RaceIntroShared1,0);
  MenuMgr_ApplyNext();
  if ((int)g_MenuMgr->nextScreen < -1) {
    MenuMgr_PopScreen();
  }
  g_MenuMgr->prevScreen = g_MenuMgr->curScreen;
  g_MenuMgr->curScreen = g_MenuMgr->nextScreen;
  MenuMgr_PushScreen();
  uVar3 = Profile_Get(0);
  uVar4 = Profile_GetFlags(uVar3);
  if ((uVar4 & 0x3fe) != 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x80000000;
  }
  return;
}

// 0x001fd830  size 0x238
undefined4 Menu_GetInput(int param_1,ulong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = g_MenuInput[param_1 + 2];
  uVar1 = 0;
  if ((g_MenuInput[param_1 + 4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
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
undefined4 MenuInput_SetupDevices(int param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = DAT_0036e880;
  auStack_8[1] = DAT_0036e884;
  lVar3 = Wheel_GetDeviceName(auStack_8[*(char *)(param_1 + 0x1c)]);
  if (lVar3 != 0) {
    iVar5 = (int)lVar3;
    lVar4 = (**(code **)(*(int *)(iVar5 + 4) + 8))(lVar3);
    if (lVar4 != 0) {
      lVar4 = Wheel_IsActive(lVar3);
      if (lVar4 != 0) {
        if (*(int *)(g_MenuInput + 4) == 1) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        return 0x100000;
      }
      if ((*(int *)(g_MenuInput + 4) == 1) && (*(int *)(param_1 + 8) == 0)) {
        *(undefined4 *)(param_1 + 8) = 1;
        iVar2 = Options_GetInstance();
        Controls_SetDefaults
                  (iVar2 + (*(char *)(param_1 + 0x1c) * 0x1c + (int)*(char *)(param_1 + 0x1c)) * 8 +
                   0x28,lVar3);
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
  if (*(int *)(g_MenuInput + 4) == 1) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0x80000;
}

// 0x001fddf0  size 0x20c
undefined4 MenuInput_Read(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = Pad_GetPort(*(undefined1 *)(param_1 + 0x1c),0);
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
long MenuInput_Update(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = MenuInput_Read();
  lVar2 = MenuInput_SetupDevices(param_1);
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
void MenuInput_Task(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (g_MenuInput != 0) {
    uVar2 = MenuInput_Update(iVar1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    *(undefined4 *)(*(char *)(iVar1 + 0x1c) * 4 + g_MenuInput + 8) = *(undefined4 *)(iVar1 + 0x18);
  }
  return;
}

// 0x001fe150  size 0x8
void Ui_Nop_3(void)

{
  return;
}

// 0x001fe160  size 0x16c
void MenuInput_KeyRepeatTask(int param_1)

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
  uVar3 = Pad_GetPort(*(undefined1 *)(iVar1 + 0x1c),0);
  iVar4 = (int)uVar3;
  maybe_Gut_HashInsert(iVar4 + 8,2,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,3,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,4,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,5,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,0x10,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,0x11,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,0x12,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,0x13,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,0x14,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,0x15,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,0x16,10,5);
  maybe_Gut_HashInsert(iVar4 + 8,0x17,10,5);
  uVar2 = (**(code **)(*(int *)(iVar4 + 4) + 8))(uVar3);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  *(code **)(param_1 + 0x1c) = MenuInput_Task;
  return;
}

// 0x001fe2d0  size 0x2c
void MenuWnd_Free(void)

{
  if (g_MenuInput != 0) {
    Mem_Free();
  }
  g_MenuInput = 0;
  return;
}

// 0x001fe300  size 0x70
void MenuWnd_Alloc(undefined8 param_1,undefined4 param_2)

{
  g_MenuInput = (undefined4 *)Mem_Alloc16(0x18,param_1);
  g_MenuInput[1] = param_2;
  g_MenuInput[2] = 0x100000;
  g_MenuInput[4] = 0x1fffff;
  g_MenuInput[3] = 0x100000;
  g_MenuInput[5] = 0x1fffff;
  *g_MenuInput = 1;
  return;
}

// 0x001fe370  size 0x5c
void MenuWnd_Clear(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuWnd_Update(int *param_1,undefined8 param_2,int param_3,int param_4)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  
  if (*param_1 == 2) {
    iVar2 = UiMgr_FindLayout(param_2);
    if ((&g_UiMgr->slots[iVar2].layout.unk_318)[param_4 * 5] == 1) {
      iVar2 = UiMgr_FindLayout(param_2);
      UiLayout_UpdateAnim(&g_UiMgr->slots[iVar2].layout,param_4);
    }
    else {
      _g_MenuWnd[2] = 0xffffffff;
      *_g_MenuWnd = 0xffffffff;
      *param_1 = 0;
      iVar2 = UiMgr_FindLayout(param_2);
      pUVar1 = g_UiMgr->slots;
      (&pUVar1[iVar2].layout.unk_30c)[param_4 * 5] = 0;
      if ((&pUVar1[iVar2].layout.unk_31c)[param_4 * 5] == 0) {
        (&pUVar1[iVar2].layout.unk_318)[param_4 * 5] = 0;
      }
      else {
        (&pUVar1[iVar2].layout.unk_318)[param_4 * 5] = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  else if (*param_1 == 1) {
    iVar2 = UiMgr_FindLayout(param_2);
    if ((&g_UiMgr->slots[iVar2].layout.unk_318)[param_3 * 5] == 1) {
      iVar2 = UiMgr_FindLayout(param_2);
      UiLayout_UpdateAnim(&g_UiMgr->slots[iVar2].layout,param_3);
    }
    else {
      _g_MenuWnd[2] = 0xffffffff;
      *_g_MenuWnd = 0xffffffff;
      *param_1 = 0;
      iVar2 = UiMgr_FindLayout(param_2);
      pUVar1 = g_UiMgr->slots;
      (&pUVar1[iVar2].layout.unk_30c)[param_3 * 5] = 0;
      if ((&pUVar1[iVar2].layout.unk_31c)[param_3 * 5] == 0) {
        (&pUVar1[iVar2].layout.unk_318)[param_3 * 5] = 0;
      }
      else {
        (&pUVar1[iVar2].layout.unk_318)[param_3 * 5] = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  return;
}

// 0x001fe620  size 0x224
/* 63 callers */

void MenuWnd_DrawNumber(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_40 [16];
  
  iVar2 = (((int)param_3 % 1000) * 1000) % 1000;
  iVar1 = (int)param_3 - iVar2 / 1000;
  if (param_3 == 0) {
    iVar2 = UiMgr_FindLayout();
    UiElem_GetRect(&g_UiMgr->slots[iVar2].layout,auStack_40,param_2);
    UiText_DrawById(auStack_40,0x34);
  }
  else if (param_3 < 1) {
    MenuWnd_DrawLabel(param_1,param_2,0x35,iVar2);
  }
  else if (param_3 < 1000) {
    MenuWnd_DrawLabel(param_1,param_2,0x36,iVar1 % 1000,iVar2);
  }
  else if (param_3 < 1000000) {
    MenuWnd_DrawLabel(param_1,param_2,0x37,(iVar1 / 1000) % 1000,iVar1 % 1000,iVar2);
  }
  else if (param_3 < 1000000000) {
    MenuWnd_DrawLabel(param_1,param_2,0x38,((iVar1 / 1000) / 1000) % 1000,(iVar1 / 1000) % 1000,
                      iVar1 % 1000,iVar2);
  }
  else {
    iVar2 = (iVar1 / 1000) / 1000;
    MenuWnd_DrawLabel(param_1,param_2,0x39,(iVar2 / 1000) % 1000,iVar2 % 1000,(iVar1 / 1000) % 1000,
                      iVar1 % 1000);
  }
  return;
}

// 0x001fe850  size 0x2a0
void MenuWnd_SetElementState
               (char param_1,UiLayout *param_2,undefined8 param_3,int param_4,long param_5)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_5 == 0) {
    piVar6 = &DAT_00329040;
    piVar5 = &DAT_00329140;
    iVar4 = 0x16;
    iVar3 = 0x17;
  }
  else {
    piVar6 = (int *)0x3290c0;
    piVar5 = (int *)0x329210;
    iVar4 = 0x14;
    iVar3 = 0x15;
  }
  if (param_1 != '\x02') {
    if (param_1 == '\x01') {
      UiElem_SetPropFloat(param_2,param_3,8,(byte)param_4);
    }
    else if (param_1 == '\0') {
      if (*piVar6 != -1) {
        piVar1 = piVar6;
        do {
          *piVar1 = (int)param_3;
          piVar1 = piVar1 + 10;
        } while (*piVar1 != -1);
      }
      UiElem_SetPropFloat(param_2,param_3,8,(byte)param_4);
      if (param_4 == 1) {
        if (*piVar5 != -1) {
          piVar1 = piVar5;
          do {
            *piVar1 = (int)param_3;
            piVar1 = piVar1 + 10;
          } while (*piVar1 != -1);
        }
        (&param_2->unk_310)[iVar3 * 5] = 0xffffffff;
        (&param_2->unk_31c)[iVar3 * 5] = 0;
        (&param_2->unk_30c)[iVar3 * 5] = 0;
        if ((&param_2->unk_31c)[iVar3 * 5] == 0) {
          (&param_2->unk_318)[iVar3 * 5] = 0;
        }
        else {
          (&param_2->unk_318)[iVar3 * 5] = 1;
        }
        puVar2 = &param_2->unk_318 + iVar3 * 5;
        (&param_2->unk_30c)[iVar3 * 5] = 0;
        if ((&param_2->unk_31c)[iVar3 * 5] == 0) {
          *puVar2 = 0;
        }
        else {
          *puVar2 = 1;
        }
        *(undefined4 *)(&param_2->field_0x314 + iVar3 * 0x14) = 0;
        (&param_2->unk_31c)[iVar3 * 5] = (uint)piVar5;
        *puVar2 = 1;
      }
      else {
        (&param_2->unk_310)[iVar3 * 5] = 0xffffffff;
        (&param_2->unk_31c)[iVar3 * 5] = 0;
        (&param_2->unk_30c)[iVar3 * 5] = 0;
        if ((&param_2->unk_31c)[iVar3 * 5] == 0) {
          (&param_2->unk_318)[iVar3 * 5] = 0;
        }
        else {
          (&param_2->unk_318)[iVar3 * 5] = 1;
        }
      }
      (&param_2->unk_310)[iVar4 * 5] = 0xffffffff;
      (&param_2->unk_31c)[iVar4 * 5] = 0;
      (&param_2->unk_30c)[iVar4 * 5] = 0;
      if ((&param_2->unk_31c)[iVar4 * 5] == 0) {
        (&param_2->unk_318)[iVar4 * 5] = 0;
      }
      else {
        (&param_2->unk_318)[iVar4 * 5] = 1;
      }
      puVar2 = &param_2->unk_318 + iVar4 * 5;
      (&param_2->unk_30c)[iVar4 * 5] = 0;
      if ((&param_2->unk_31c)[iVar4 * 5] == 0) {
        *puVar2 = 0;
      }
      else {
        *puVar2 = 1;
      }
      *(undefined4 *)(&param_2->field_0x314 + iVar4 * 0x14) = 1;
      (&param_2->unk_31c)[iVar4 * 5] = (uint)piVar6;
      *puVar2 = 1;
    }
  }
  return;
}

// 0x001feaf0  size 0x10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuWnd_RequestClose(void)

{
  *(undefined4 *)(_g_MenuWnd + 0x18) = 1;
  return;
}

// 0x001feb00  size 0x600
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 MenuWnd_DrawHeader(int param_1,long param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  UiLayoutSlot *pUVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  int *piVar10;
  UiLayout *pUVar11;
  long lVar12;
  long lVar13;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_80 [16];
  undefined4 auStack_40 [16];
  
  iVar4 = UiMgr_FindLayout(0xb);
  lVar13 = 0;
  pUVar3 = g_UiMgr->slots;
  iVar6 = *(int *)(_g_MenuWnd + 0x18);
  puVar9 = (undefined4 *)(_g_MenuWnd + 0x18);
  pUVar11 = &pUVar3[iVar4].layout;
  if (iVar6 == 2) {
    if (0 < param_2) {
      MenuWnd_SetItemState(0xb,*(undefined4 *)(&DAT_003293d0 + param_4 * 4),0,0);
    }
  }
  else if (iVar6 == 4) {
    if (*(int *)(_g_MenuWnd + 0x1c) == 1) {
      if (*(int *)&pUVar3[iVar4].layout.field_0x354 == 1) {
        UiLayout_UpdateAnim(pUVar11,3);
        lVar13 = -1;
      }
      else {
        *puVar9 = 2;
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        *(undefined4 *)&pUVar3[iVar4].layout.field_0x348 = 0;
        if (*(int *)&pUVar3[iVar4].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar3[iVar4].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar3[iVar4].layout.field_0x354 = 1;
        }
      }
    }
    else if (*(int *)&pUVar3[iVar4].layout.field_0x368 == 1) {
      UiLayout_UpdateAnim(pUVar11,4);
      lVar13 = 10;
    }
    else {
      *puVar9 = 2;
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      *(undefined4 *)&pUVar3[iVar4].layout.field_0x35c = 0;
      if (*(int *)&pUVar3[iVar4].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar3[iVar4].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar3[iVar4].layout.field_0x368 = 1;
      }
    }
  }
  else if (iVar6 == 1) {
    if (pUVar3[iVar4].layout.animState == 1) {
      UiLayout_UpdateAnim(pUVar11,1);
    }
    else {
      *puVar9 = 3;
    }
  }
  else if (iVar6 == 0) {
    if (pUVar3[iVar4].layout.unk_318 == 1) {
      UiLayout_UpdateAnim(pUVar11,0);
    }
    else {
      *puVar9 = 2;
    }
  }
  if (0 < param_2) {
    iVar6 = (int)param_2;
    if (param_2 < 0xc) {
      uStack_9c = (undefined4)((ulong)param_2 >> 0x20);
      iStack_a0 = iVar6;
    }
    else {
      iStack_a0 = 0xb;
      uStack_9c = 0;
    }
    lVar12 = 0;
    if (0 < CONCAT44(uStack_9c,iStack_a0)) {
      piVar10 = &DAT_00329400;
      do {
        if (lVar12 == 10) {
          if (lVar13 == 0) break;
          lVar8 = lVar13;
        }
        else {
          lVar8 = lVar12;
        }
        sVar1 = *(short *)(param_1 + ((iVar6 + param_3 + (int)lVar8) % iVar6) * 2);
        iVar4 = Profile_Get(0);
        sVar2 = *(short *)(iVar4 + sVar1 * 2 + 0x1420);
        uVar7 = Msg_PartInfo(sVar1);
        iVar4 = *piVar10;
        iVar5 = UiMgr_FindLayout(0xb);
        UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_40,(long)iVar4);
        UiText_DrawById(auStack_40,uVar7);
        uVar7 = Msg_MakerInfo(sVar1);
        iVar4 = piVar10[1];
        iVar5 = UiMgr_FindLayout(0xb);
        UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_80,(long)iVar4);
        UiText_DrawById(auStack_80,uVar7);
        lVar8 = Rival_IsBossId(sVar1);
        if (lVar8 == 0) {
          MenuWnd_DrawLabel(0xb,piVar10[2],0x3f,
                            CONCAT44((int)((ulong)(long)sVar2 >> 0x20),(int)sVar2));
        }
        lVar12 = (long)((int)lVar12 + 1);
        piVar10 = piVar10 + 3;
      } while (lVar12 < CONCAT44(uStack_9c,iStack_a0));
    }
    MenuWnd_DrawLabel(0xb,0x26,0x3e,(param_3 + param_4) % iVar6 + 1,param_2);
  }
  UiLayout_Draw(1.0,pUVar11);
  if (param_2 < 0xb) {
    UiElem_SetPropFloat(pUVar11,0xc,2,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar11,0xc,6,extraout_a3_lo_06);
    iVar6 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0xd,8,extraout_a3_lo_07);
  }
  else if (param_3 + 9 < param_2) {
    UiElem_SetPropFloat(pUVar11,0xc,2,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar11,0xc,6,extraout_a3_lo_00);
    iVar6 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0xd,8,extraout_a3_lo_01);
  }
  else {
    UiElem_SetPropFloat(pUVar11,0xc,2,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar11,0xc,6,extraout_a3_lo_02);
    UiElem_SetPropFloat(pUVar11,0xd,2,extraout_a3_lo_03);
    UiElem_SetPropFloat(pUVar11,0xd,6,extraout_a3_lo_04);
    iVar6 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0xd,8,extraout_a3_lo_05);
  }
  MenuWnd_DrawCursor(10 < param_2);
  return *(undefined4 *)(_g_MenuWnd + 0x18);
}

// 0x001ff108  size 0x8
/* follows MenuWnd_DrawHeader; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void MenuWnd_DrawHeader_Orphan1(void)

{
  return;
}

// 0x001ff110  size 0x44
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuMgr_LockInput(long param_1)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
  _g_MenuWnd[7] = (uint)(param_1 != 0);
  _g_MenuWnd[6] = 4;
  _g_MenuWnd[2] = 0xffffffff;
  *_g_MenuWnd = 0xffffffff;
  return;
}

// 0x001ff160  size 0x1bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuWnd_DrawHelp(void)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = UiMgr_FindLayout(0xb);
  pUVar1 = g_UiMgr->slots;
  uVar3 = UiRes_GetLayoutData(0xbb);
  pUVar1[iVar2].layout.unk_310 = 0xffffffff;
  pUVar1[iVar2].layout.unk_31c = 0;
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
  pUVar1[iVar2].layout.unk_31c = uVar3;
  pUVar1[iVar2].layout.unk_318 = 1;
  uVar4 = UiRes_GetLayoutData(0xbc);
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
    pUVar1[iVar2].layout.animState = 0;
  }
  else {
    pUVar1[iVar2].layout.animState = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
    pUVar1[iVar2].layout.animState = 0;
  }
  else {
    pUVar1[iVar2].layout.animState = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar4;
  pUVar1[iVar2].layout.animState = 1;
  uVar4 = UiRes_GetLayoutData(0xbd);
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x34c = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x350 = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar4;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
  uVar4 = UiRes_GetLayoutData(0xbe);
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x360 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x35c = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x36c == 0) {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x35c = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x36c == 0) {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x364 = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar4;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
  _g_MenuWnd[6] = 0;
  _g_MenuWnd[2] = 0xffffffff;
  *_g_MenuWnd = 0xffffffff;
  MenuWnd_DrawDialogText(0xb,0x36e898,2,0);
  return;
}

// 0x001ff320  size 0x148
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 75 callers */

undefined4 MenuWnd_DrawFooter(undefined8 param_1,long param_2,undefined8 param_3)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  UiLayout *pUVar3;
  
  iVar2 = UiMgr_FindLayout(5);
  pUVar1 = g_UiMgr->slots;
  pUVar3 = &pUVar1[iVar2].layout;
  if (*(int *)(_g_MenuWnd + 0x14) == 0) {
    if (pUVar1[iVar2].layout.unk_318 == 1) {
      UiLayout_UpdateAnim(pUVar3,0);
    }
    else {
      *(undefined4 *)(_g_MenuWnd + 0x14) = 2;
    }
  }
  if (*(int *)(_g_MenuWnd + 0x14) == 1) {
    if (pUVar1[iVar2].layout.animState == 1) {
      UiLayout_UpdateAnim(pUVar3,1);
    }
    else {
      *(undefined4 *)(_g_MenuWnd + 0x14) = 3;
    }
  }
  if ((*(int *)(_g_MenuWnd + 0x14) == 2) && (param_2 != -1)) {
    MenuWnd_SetItemState(5,*(undefined4 *)((int)param_2 * 4 + 0x36e890),1,0);
  }
  UiLayout_UpdateAnim(pUVar3,2);
  MenuWnd_DrawFooterText(param_1,param_3);
  UiLayout_Draw(1.0,pUVar3);
  return *(undefined4 *)(_g_MenuWnd + 0x14);
}

// 0x001ff470  size 0x18c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuWnd_DrawFooterText(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte extraout_a3_lo;
  byte bVar5;
  byte extraout_a3_lo_00;
  UiLayout *pUVar6;
  int *piVar7;
  undefined4 auStack_80 [16];
  undefined4 auStack_40 [16];
  
  iVar3 = UiMgr_FindLayout(5);
  pUVar6 = &g_UiMgr->slots[iVar3].layout;
  bVar5 = extraout_a3_lo;
  if (*(int *)(_g_MenuWnd + 0x10) == 0) {
    UiElem_SetPropFloat(pUVar6,0x19,8,extraout_a3_lo);
    bVar5 = extraout_a3_lo_00;
  }
  if (*(int *)(_g_MenuWnd + 0x10) != 2) {
    UiElem_SetPropFloat(pUVar6,0x1a,8,bVar5);
  }
  if (param_1 != -1) {
    iVar3 = UiMgr_FindLayout(5);
    UiElem_GetRect(&g_UiMgr->slots[iVar3].layout,auStack_40,0x1c);
    UiText_DrawById(auStack_40,param_1);
  }
  if ((param_2 != (undefined4 *)0x0) && (iVar3 = 0, 0 < *(int *)(_g_MenuWnd + 0x10))) {
    piVar7 = (int *)0x36e888;
    do {
      uVar1 = *param_2;
      iVar2 = *piVar7;
      iVar4 = UiMgr_FindLayout(5);
      UiElem_GetRect(&g_UiMgr->slots[iVar4].layout,auStack_80,(long)iVar2);
      UiText_DrawById(auStack_80,uVar1);
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < *(int *)(_g_MenuWnd + 0x10));
  }
  return;
}

// 0x001ff600  size 0x10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 74 callers */

void MenuWnd_RequestRedraw(void)

{
  *(undefined4 *)(_g_MenuWnd + 0x14) = 1;
  return;
}

// 0x001ff610  size 0x174
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 75 callers */

void MenuWnd_SetHelpText(long param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  _g_MenuWnd[4] = (int)param_1;
  iVar2 = UiMgr_FindLayout(5);
  pUVar1 = g_UiMgr->slots;
  uVar3 = UiRes_GetLayoutData(1);
  pUVar1[iVar2].layout.unk_310 = 0xffffffff;
  pUVar1[iVar2].layout.unk_31c = 0;
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
  pUVar1[iVar2].layout.unk_31c = uVar3;
  pUVar1[iVar2].layout.unk_318 = 1;
  uVar4 = UiRes_GetLayoutData(2);
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
    pUVar1[iVar2].layout.animState = 0;
  }
  else {
    pUVar1[iVar2].layout.animState = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
    pUVar1[iVar2].layout.animState = 0;
  }
  else {
    pUVar1[iVar2].layout.animState = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar4;
  pUVar1[iVar2].layout.animState = 1;
  uVar4 = UiRes_GetLayoutData(3);
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x338 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 1;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar4;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
  _g_MenuWnd[5] = 0;
  if (param_1 != 0) {
    _g_MenuWnd[2] = 0xffffffff;
    *_g_MenuWnd = 0xffffffff;
  }
  return;
}

// 0x001ff790  size 0x624
/* 145 callers */

void MenuWnd_SetTitle(ulong param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  byte extraout_a3_lo_08;
  int unaff_s0_lo;
  UiLayout *pUVar8;
  undefined4 auStack_40 [16];
  
  uVar5 = Profile_Get(0);
  iVar4 = UiMgr_FindLayout(7);
  pUVar8 = &g_UiMgr->slots[iVar4].layout;
  UiElem_GetRect(pUVar8,auStack_40,0x2f);
  uVar6 = Career_GetRivalTable(uVar5);
  UiText_DrawPlayerName(auStack_40,uVar6,0);
  if (param_2 != -1) {
    UiElem_GetRect(pUVar8,auStack_40,0x2e);
    UiText_DrawById(auStack_40,param_2);
  }
  if (((((g_MenuMgr->flags & 0x1c000) != 0) && (uVar1 = g_MenuMgr->curScreen, uVar1 != 0x25)) &&
      (uVar1 != 0x23)) && (uVar1 != 0x11)) {
    uVar6 = Profile_Get(0);
    lVar7 = Garage_FindCar(uVar6);
    if (0 < lVar7) {
      param_1 = param_1 | 4;
    }
  }
  if (((long)param_1 < 8) && (-1 < (long)param_1)) {
    UiElem_SetPropInt(pUVar8,0x2d,9,*(int *)(&DAT_00329330 + (int)param_1 * 4));
  }
  cVar3 = Profile_GetChapter(uVar5);
  if (cVar3 == '\0') {
    iVar4 = 0xe;
  }
  else {
    iVar4 = 0xd;
  }
  UiElem_SetPropInt(pUVar8,0x16,0x16,iVar4);
  UiElem_SetPropInt(pUVar8,0x23,9,(uint)(cVar3 != '\0'));
  bVar2 = Race_GetCourseId(g_MenuMgr->unk_0620);
  if (bVar2 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar2) {
    case 0:
      unaff_s0_lo = 0x13;
      break;
    case 1:
      unaff_s0_lo = 0x2b;
      break;
    case 2:
      unaff_s0_lo = 0x29;
      break;
    case 3:
      unaff_s0_lo = 0x27;
      break;
    case 4:
      unaff_s0_lo = 0x28;
      break;
    case 5:
      unaff_s0_lo = 0x2a;
    }
  }
  UiElem_SetPropInt(pUVar8,0x2c,0x16,unaff_s0_lo);
  lVar7 = Profile_GetDayClamped(uVar5);
  iVar4 = (int)lVar7;
  if (lVar7 < 1000) {
    UiElem_SetPropFloat(pUVar8,0x18,8,extraout_a3_lo);
    bVar2 = extraout_a3_lo_06;
  }
  else {
    UiElem_SetPropFloat(pUVar8,0x18,8,extraout_a3_lo);
    UiElem_SetPropInt(pUVar8,0x18,0x16,*(int *)(&DAT_00329350 + ((iVar4 / 1000) % 10) * 4));
    bVar2 = extraout_a3_lo_00;
  }
  if (lVar7 < 100) {
    UiElem_SetPropFloat(pUVar8,0x19,8,bVar2);
    bVar2 = extraout_a3_lo_07;
  }
  else {
    UiElem_SetPropFloat(pUVar8,0x19,8,bVar2);
    UiElem_SetPropInt(pUVar8,0x19,0x16,*(int *)(&DAT_00329350 + ((iVar4 / 100) % 10) * 4));
    bVar2 = extraout_a3_lo_01;
  }
  if (lVar7 < 10) {
    UiElem_SetPropFloat(pUVar8,0x1a,8,bVar2);
  }
  else {
    UiElem_SetPropFloat(pUVar8,0x1a,8,bVar2);
    UiElem_SetPropInt(pUVar8,0x1a,0x16,*(int *)(&DAT_00329350 + ((iVar4 / 10) % 10) * 4));
  }
  UiElem_SetPropInt(pUVar8,0x1b,0x16,*(int *)(&DAT_00329350 + (iVar4 % 10) * 4));
  UiElem_SetPropFloat(pUVar8,0x1c,8,extraout_a3_lo_02);
  UiElem_SetPropFloat(pUVar8,0x1d,8,extraout_a3_lo_03);
  iVar4 = Profile_IsMonthStart(uVar5);
  UiElem_SetPropInt(pUVar8,0x1e,0x16,*(int *)(&DAT_00329380 + iVar4 * 4));
  lVar7 = Profile_GetMonth(uVar5);
  iVar4 = (int)lVar7;
  if (lVar7 < 100) {
    UiElem_SetPropFloat(pUVar8,0x1f,8,extraout_a3_lo_04);
    bVar2 = extraout_a3_lo_08;
  }
  else {
    UiElem_SetPropFloat(pUVar8,0x1f,8,extraout_a3_lo_04);
    UiElem_SetPropInt(pUVar8,0x1f,0x16,*(int *)(&DAT_00329380 + ((iVar4 / 100) % 10) * 4));
    bVar2 = extraout_a3_lo_05;
  }
  if (lVar7 < 10) {
    UiElem_SetPropFloat(pUVar8,0x20,8,bVar2);
  }
  else {
    UiElem_SetPropFloat(pUVar8,0x20,8,bVar2);
    UiElem_SetPropInt(pUVar8,0x20,0x16,*(int *)(&DAT_00329380 + ((iVar4 / 10) % 10) * 4));
  }
  UiElem_SetPropInt(pUVar8,0x21,0x16,*(int *)(&DAT_00329380 + (iVar4 % 10) * 4));
  iVar4 = Profile_GetWeekday(uVar5);
  UiElem_SetPropInt(pUVar8,0x17,0x16,*(int *)(&DAT_003293b0 + iVar4 * 4));
  UiLayout_UpdateAnim(pUVar8,0);
  UiLayout_Draw(1.0,pUVar8);
  return;
}

// 0x001ffdc0  size 0xae4
/* 75 callers */

void MenuWnd_DrawStatus(long param_1,ulong param_2,int param_3,undefined4 param_4)

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
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte bVar16;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  byte extraout_a3_lo_08;
  byte extraout_a3_lo_09;
  byte extraout_a3_lo_10;
  UiLayout *pUVar17;
  long lVar18;
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
  undefined4 auStack_80 [5];
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
  
  iVar6 = UiMgr_FindLayout(6);
  lVar18 = 2;
  iStack_130 = 2;
  iStack_140 = 2;
  pUVar17 = &g_UiMgr->slots[iVar6].layout;
  if ((long)param_2 < 0) {
LAB_001ffe38:
    if (param_1 == -2) goto LAB_001ffe40;
    if (param_2 < 2) {
      maybe_Ui_BuildCarSpec(auStack_20,param_1,param_2,0xffffffffffffffff,0);
      uStack_94 = MenuText_CarNameOrMaker(param_1,param_2);
      uStack_90 = MenuText_CarGrade(param_1,param_2);
      uStack_8c = MenuText_CarShortName(param_1,param_2);
      uStack_d0 = MenuText_CarName(param_1,param_2);
      uStack_e0 = MenuText_RivalCarMaker(param_1,param_2);
      iStack_b0 = (int)fStack_18;
      iVar8 = (int)fStack_1c;
      iVar9 = (int)(fStack_14 * 10.0);
      iVar7 = (int)fStack_c;
      iStack_c0 = (int)fStack_10;
      iVar6 = iStack_8;
    }
    else {
      uStack_94 = MenuText_CarNameOrMaker(param_1,param_2);
      uStack_90 = MenuText_CarGrade(param_1,param_2);
      uStack_8c = MenuText_CarShortName(param_1,param_2);
      uStack_d0 = MenuText_CarName(param_1,param_2);
      uStack_e0 = MenuText_RivalCarMaker(param_1,param_2);
      iVar7 = MenuText_OpponentComment(param_1,param_2);
      iVar6 = MenuText_OpponentSpec(param_1,param_2);
      iVar8 = MenuText_OpponentTitle(param_1,param_2);
      iStack_b0 = MenuText_OpponentCar(param_1,param_2);
      iVar9 = MenuText_OpponentTeam(param_1,param_2);
      iStack_c0 = MenuText_OpponentName(param_1,param_2);
    }
    uStack_d0 = uStack_d0 & 0xff;
    uStack_e0 = uStack_e0 & 0xff;
    uVar12 = MenuText_CarModelId(param_1,param_2);
    uVar10 = (undefined4)uVar12;
    lVar13 = MenuText_OpponentComment(uVar12,0xffffffffffffffff);
    lVar14 = MenuText_OpponentSpec(uVar10,0xffffffffffffffff);
    lVar15 = MenuText_OpponentTitle(uVar10,0xffffffffffffffff);
    iVar11 = MenuText_OpponentTeam(uVar10,0xffffffffffffffff);
    bVar1 = 0 < lVar13;
    bVar4 = 0.0 < (float)iVar11;
    bVar2 = 0 < lVar15;
    bVar3 = 0 < lVar14;
  }
  else {
    uVar12 = Profile_Get(param_2);
    lVar13 = Garage_FindCar(uVar12);
    if (lVar13 != 0) goto LAB_001ffe38;
LAB_001ffe40:
    uStack_94 = 0;
    iVar7 = 0;
    uStack_90 = 0;
    iVar6 = 0;
    uStack_8c = 0;
    iVar8 = 0;
    iStack_b0 = 0;
    iVar9 = 0;
    iStack_c0 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    bVar1 = false;
    bVar2 = false;
    bVar4 = false;
    bVar3 = false;
  }
  lVar13 = lVar18;
  iStack_190 = iVar6;
  iStack_160 = iVar8;
  iStack_170 = iVar9;
  iStack_180 = iVar7;
  if ((param_2 == 0) && (param_3 != -1)) {
    if (param_3 == -4) {
      uVar12 = MenuText_CarModelId(param_1,0);
      uVar10 = (undefined4)uVar12;
      iStack_180 = MenuText_OpponentComment(uVar12,0xffffffffffffffff);
      iStack_190 = MenuText_OpponentSpec(uVar10,0xffffffffffffffff);
      iStack_160 = MenuText_OpponentTitle(uVar10,0xffffffffffffffff);
      iStack_b0 = MenuText_OpponentCar(uVar10,0xffffffffffffffff);
      iStack_170 = MenuText_OpponentTeam(uVar10,0xffffffffffffffff);
      iStack_c0 = MenuText_OpponentName(uVar10,0xffffffffffffffff);
    }
    else {
      uStack_84 = (undefined2)param_3;
      maybe_Ui_BuildCarSpec(auStack_40,param_1,0,uStack_84,param_4);
      iStack_190 = iStack_28;
      iStack_160 = (int)fStack_3c;
      iStack_b0 = (int)fStack_38;
      iStack_170 = (int)(fStack_34 * 10.0);
      iStack_c0 = (int)fStack_30;
      iStack_180 = (int)fStack_2c;
    }
    if (iStack_180 < iVar7) {
      lVar13 = 1;
    }
    else if (iVar7 < iStack_180) {
      lVar13 = 0;
    }
    if (iStack_160 < iVar8) {
      iStack_130 = 1;
    }
    else if (iVar8 < iStack_160) {
      iStack_130 = 0;
    }
    if (iStack_170 < iVar9) {
      iStack_140 = 1;
    }
    else if (iVar9 < iStack_170) {
      iStack_140 = 0;
    }
    if (iStack_190 < iVar6) {
      lVar18 = 1;
    }
    else if (iVar6 < iStack_190) {
      lVar18 = 0;
    }
  }
  UiElem_GetRect(pUVar17,auStack_80,10);
  UiText_DrawById(auStack_80,uStack_94);
  UiElem_GetRect(pUVar17,auStack_80,0xb);
  uStack_6c = 4;
  UiText_DrawById(auStack_80,uStack_90);
  UiElem_GetRect(pUVar17,auStack_80,0xc);
  UiText_DrawById(auStack_80,uStack_8c);
  UiElem_GetRect(pUVar17,auStack_80,8);
  if (bVar1) {
    if (lVar13 == 2) {
      UiText_DrawRivalInfo(auStack_80,0x16,iStack_180,4);
    }
    else if (lVar13 == 1) {
      UiText_DrawRivalInfo(auStack_80,0x20,3,0,iStack_180,4);
    }
    else if (lVar13 == 0) {
      UiText_DrawRivalInfo(auStack_80,0x1b,2,0,iStack_180,4);
    }
  }
  else {
    UiText_DrawRivalInfo(auStack_80,0x25,4);
  }
  UiElem_GetRect(pUVar17,auStack_80,0xd);
  if (bVar3) {
    cVar5 = MenuText_RivalCarSpec(param_1,param_2);
    if (cVar5 == '\a') {
      if (lVar18 == 2) {
        UiText_DrawRivalInfo(auStack_80,0x18,iStack_190,4);
      }
      else if (lVar18 == 1) {
        UiText_DrawRivalInfo(auStack_80,0x22,3,0,iStack_190,4);
      }
      else if (lVar18 == 0) {
        UiText_DrawRivalInfo(auStack_80,0x1d,2,0,iStack_190,4);
      }
    }
    else if (lVar18 == 2) {
      UiText_DrawRivalInfo(auStack_80,0x17,iStack_190,4);
    }
    else if (lVar18 == 1) {
      UiText_DrawRivalInfo(auStack_80,0x21,3,0,iStack_190,4);
    }
    else if (lVar18 == 0) {
      UiText_DrawRivalInfo(auStack_80,0x1c,2,0,iStack_190,4);
    }
  }
  else {
    UiText_DrawRivalInfo(auStack_80,0x26,4);
  }
  UiElem_GetRect(pUVar17,auStack_80,9);
  if (bVar2) {
    if (iStack_130 == 2) {
      UiText_DrawRivalInfo(auStack_80,0x19,iStack_160,4,0,iStack_b0,4);
    }
    else if (iStack_130 == 1) {
      UiText_DrawRivalInfo(auStack_80,0x23,3,0,iStack_160,4,0,iStack_b0);
    }
    else if (iStack_130 == 0) {
      UiText_DrawRivalInfo(auStack_80,0x1e,2,0,iStack_160,4,0,iStack_b0);
    }
  }
  else {
    UiText_DrawRivalInfo(auStack_80,0x27,4,0,4);
  }
  UiElem_GetRect(pUVar17,auStack_80,0xe);
  if (bVar4) {
    if (iStack_140 == 2) {
      UiText_DrawRivalInfo(auStack_80,0x1a,iStack_170 / 10,iStack_170 % 10,4,0,iStack_c0,4);
      bVar16 = extraout_a3_lo_02;
    }
    else if (iStack_140 == 1) {
      UiText_DrawRivalInfo(auStack_80,0x24,3,0,iStack_170 / 10,iStack_170 % 10,4,0);
      bVar16 = extraout_a3_lo_01;
    }
    else if (iStack_140 == 0) {
      UiText_DrawRivalInfo(auStack_80,0x1f,2,0,iStack_170 / 10,iStack_170 % 10,4,0);
      bVar16 = extraout_a3_lo_00;
    }
    else {
      bVar16 = extraout_a3_lo;
    }
  }
  else {
    UiText_DrawRivalInfo(auStack_80,0x28,4,0,4);
    bVar16 = extraout_a3_lo_09;
  }
  if ((long)param_2 < 0) {
LAB_0020060c:
    if (param_1 != -2) {
      lVar18 = MenuText_CarModelId(param_1,param_2);
      if (lVar18 == 0x11c) {
        UiElem_SetPropInt(pUVar17,5,0x16,DAT_00329314);
        bVar16 = extraout_a3_lo_05;
      }
      else {
        UiElem_SetPropInt(pUVar17,5,0x16,*(int *)(&DAT_00329300 + uStack_d0 * 4));
        bVar16 = extraout_a3_lo_06;
      }
      UiElem_SetPropFloat(pUVar17,5,8,bVar16);
      UiElem_SetPropFloat(pUVar17,6,8,extraout_a3_lo_07);
      UiElem_SetPropFloat(pUVar17,7,8,extraout_a3_lo_08);
      UiElem_SetPropInt(pUVar17,6,0x16,*(int *)(&DAT_003292e0 + uStack_d0 * 4));
      UiElem_SetPropInt(pUVar17,7,0x16,*(int *)(&LAB_00329320 + uStack_e0 * 4));
      goto LAB_0020074c;
    }
  }
  else {
    uVar12 = Profile_Get(param_2);
    lVar18 = Garage_FindCar(uVar12);
    bVar16 = extraout_a3_lo_10;
    if (lVar18 != 0) goto LAB_0020060c;
  }
  UiElem_SetPropFloat(pUVar17,5,8,bVar16);
  UiElem_SetPropFloat(pUVar17,6,8,extraout_a3_lo_03);
  UiElem_SetPropFloat(pUVar17,7,8,extraout_a3_lo_04);
LAB_0020074c:
  UiLayout_UpdateAnim(pUVar17,0);
  UiLayout_Draw(1.0,pUVar17);
  return;
}

