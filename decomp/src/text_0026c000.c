// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0026c000 - 0x00270000
#include "ghidra_types.h"

// 0x0026cb10  size 0xca0
/* state of MenuPage37; on-screen text/callee hint "GarageDrawFullAero" (was
   ScrScrGarageDrawFullAeroa980_Enter) */

void maybe_PageAero_State3_GarageDrawFullAero(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar2 = *(int *)(iVar6 + 0x14);
  *(undefined4 *)(iVar6 + 0x14) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x1fa);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar3;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0x1fb);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0x1fd);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x1fe);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x1ff);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar3 = UiRes_GetLayoutData(0x200);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    uVar3 = UiRes_GetLayoutData(0x201);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    uVar3 = UiRes_GetLayoutData(0x202);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    uVar3 = UiRes_GetLayoutData(0x1fc);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    uVar3 = UiRes_GetLayoutData(0x203);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0x205);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x206);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x207);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar3 = UiRes_GetLayoutData(0x208);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    uVar3 = UiRes_GetLayoutData(0x209);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    uVar3 = UiRes_GetLayoutData(0x20a);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    uVar3 = UiRes_GetLayoutData(0x204);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    uVar3 = UiRes_GetLayoutData(0x20b);
    iVar2 = UiMgr_FindLayout(0xdf);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0x20c);
    iVar2 = UiMgr_FindLayout(0xdf);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x20d);
    iVar2 = UiMgr_FindLayout(0xdf);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x20e);
    iVar2 = UiMgr_FindLayout(0xdf);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar3 = UiRes_GetLayoutData(0x20f);
    iVar2 = UiMgr_FindLayout(0xdf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
  }
  *(undefined4 *)(iVar6 + 0x10) = 0;
  if (*(int *)(iVar6 + 0x18) != 0) {
    lVar4 = 0;
    if (*(byte *)(iVar6 + 8) < 6) {
                    /* WARNING: Switch is manually overridden */
      switch(*(byte *)(iVar6 + 8)) {
      case 0:
        break;
      default:
        lVar4 = 1;
        break;
      case 5:
        lVar4 = 2;
      }
    }
    if ((lVar4 == 1) && (lVar4 = MenuMgr_Goto(), lVar4 == 0)) {
      if (*(int *)(iVar6 + 8) == 2) {
        ScrGarage_Draw_PowerTune(param_1);
        lVar4 = UiLayout_UpdateAnimById(0xdd,6);
        lVar5 = UiLayout_UpdateAnimById(0xde,5);
        if (lVar4 == 0 && lVar5 == 0) {
          *(undefined4 *)(iVar6 + 0x18) = 0;
        }
      }
      else {
        ScrGarage_Draw_FullAero_a980(param_1);
        lVar4 = UiLayout_UpdateAnimById(0xde,3);
        lVar5 = UiLayout_UpdateAnimById(0xdf,2);
        if (lVar4 == 0 && lVar5 == 0) {
          *(undefined4 *)(iVar6 + 0x18) = 0;
        }
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xdc,1);
      lVar5 = UiLayout_UpdateAnimById(0xde,1);
      if (lVar4 == 0 && lVar5 == 0) {
        *(undefined4 *)(iVar6 + 0x18) = 0;
      }
    }
  }
  MenuScr_Select_CarStatus(param_1);
  MenuNum_CountUp_Tune(0xdc,3,4,0xf8,4,1,2);
  UiLayout_UpdateAnimById(0xdc,2);
  iVar2 = UiMgr_FindLayout(0xdc);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  ScrGarage_Draw_BodyTune(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0026d7b0  size 0xcac
/* state of MenuPage37; on-screen text/callee hint "Category" (was ScrCategory_Exit) */

void maybe_PageAero_State2_Category(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar2 = *(int *)(iVar7 + 0x14);
  *(undefined4 *)(iVar7 + 0x14) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x1fa);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar3;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0x1fb);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0x1fd);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x1fe);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x1ff);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar3 = UiRes_GetLayoutData(0x200);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    uVar3 = UiRes_GetLayoutData(0x201);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    uVar3 = UiRes_GetLayoutData(0x202);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    uVar3 = UiRes_GetLayoutData(0x1fc);
    iVar2 = UiMgr_FindLayout(0xdd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    uVar3 = UiRes_GetLayoutData(0x203);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0x205);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x206);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x207);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar3 = UiRes_GetLayoutData(0x208);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    uVar3 = UiRes_GetLayoutData(0x209);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    uVar3 = UiRes_GetLayoutData(0x20a);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    uVar3 = UiRes_GetLayoutData(0x204);
    iVar2 = UiMgr_FindLayout(0xde);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    uVar3 = UiRes_GetLayoutData(0x20b);
    iVar2 = UiMgr_FindLayout(0xdf);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0x20c);
    iVar2 = UiMgr_FindLayout(0xdf);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x20d);
    iVar2 = UiMgr_FindLayout(0xdf);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x20e);
    iVar2 = UiMgr_FindLayout(0xdf);
    pUVar1 = g_UiMgr->slots;
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar3 = UiRes_GetLayoutData(0x20f);
    iVar2 = UiMgr_FindLayout(0xdf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
  }
  *(undefined4 *)(iVar7 + 0x10) = 0;
  if (*(int *)(iVar7 + 0x18) != 0) {
    lVar4 = 0;
    if (*(byte *)(iVar7 + 8) < 6) {
                    /* WARNING: Switch is manually overridden */
      switch(*(byte *)(iVar7 + 8)) {
      case 0:
        break;
      default:
        lVar4 = 1;
        break;
      case 5:
        lVar4 = 2;
      }
    }
    if ((lVar4 == 1) && (lVar4 = MenuMgr_Goto(), lVar4 == 0)) {
      if (*(int *)(iVar7 + 8) == 1) {
        lVar4 = UiLayout_UpdateAnimById(0xdd,7);
        lVar6 = UiLayout_UpdateAnimById(0xde,7);
        if (lVar4 == 0 && lVar6 == 0) {
          *(undefined4 *)(iVar7 + 0x18) = 0;
        }
      }
      else {
        lVar4 = UiLayout_UpdateAnimById(0xdd,4);
        lVar6 = UiLayout_UpdateAnimById(0xde,2);
        if (lVar4 == 0 && lVar6 == 0) {
          *(undefined4 *)(iVar7 + 0x18) = 0;
        }
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xdc,1);
      lVar6 = UiLayout_UpdateAnimById(0xdd,8);
      lVar5 = UiLayout_UpdateAnimById(0xde,8);
      if (lVar5 == 0 && (lVar4 == 0 && lVar6 == 0)) {
        *(undefined4 *)(iVar7 + 0x18) = 0;
      }
    }
  }
  MenuScr_Select_CarStatus(param_1);
  MenuNum_CountUp_Tune(0xdc,3,4,0xf8,4,1,1);
  UiLayout_UpdateAnimById(0xdc,2);
  iVar2 = UiMgr_FindLayout(0xdc);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  ScrGarage_Draw_PowerTune(param_1);
  ScrGarage_Draw_BodyTune(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0026e460  size 0xfb4
/* state of MenuPage37; on-screen text/callee hint "Category" (was ScrCategory_Update) */

void maybe_PageAero_State1_Category(undefined8 param_1)

{
  byte bVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  
  pbVar8 = (byte *)param_1;
  iVar3 = *(int *)(pbVar8 + 0x14);
  pbVar8[0x14] = 0;
  pbVar8[0x15] = 0;
  pbVar8[0x16] = 0;
  pbVar8[0x17] = 0;
  if (iVar3 == 0) {
    bVar1 = *pbVar8;
  }
  else {
    uVar4 = UiRes_GetLayoutData(0x1f8);
    iVar3 = UiMgr_FindLayout(0xdc);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x31c == 0) {
      pUVar2[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x31c == 0) {
      pUVar2[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x31c = uVar4;
    pUVar2[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x1f9);
    iVar3 = UiMgr_FindLayout(0xdc);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = uVar4;
    pUVar2[iVar3].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x1f6);
    iVar3 = UiMgr_FindLayout(0xdc);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x1f7);
    iVar3 = UiMgr_FindLayout(0xdc);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x350 = 1;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0x1fa);
    iVar3 = UiMgr_FindLayout(0xdd);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x31c == 0) {
      pUVar2[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x31c == 0) {
      pUVar2[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x31c = uVar4;
    pUVar2[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x1fb);
    iVar3 = UiMgr_FindLayout(0xdd);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = uVar4;
    pUVar2[iVar3].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x1fd);
    iVar3 = UiMgr_FindLayout(0xdd);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x1fe);
    iVar3 = UiMgr_FindLayout(0xdd);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0x1ff);
    iVar3 = UiMgr_FindLayout(0xdd);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 1;
    uVar4 = UiRes_GetLayoutData(0x200);
    iVar3 = UiMgr_FindLayout(0xdd);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x380 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 1;
    uVar4 = UiRes_GetLayoutData(0x201);
    iVar3 = UiMgr_FindLayout(0xdd);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x394 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x390 = 1;
    uVar4 = UiRes_GetLayoutData(0x202);
    iVar3 = UiMgr_FindLayout(0xdd);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a8 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a4 = 1;
    uVar4 = UiRes_GetLayoutData(0x1fc);
    iVar3 = UiMgr_FindLayout(0xdd);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3ac = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3ac = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3bc = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 1;
    uVar4 = UiRes_GetLayoutData(0x203);
    iVar3 = UiMgr_FindLayout(0xde);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = uVar4;
    pUVar2[iVar3].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x205);
    iVar3 = UiMgr_FindLayout(0xde);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x206);
    iVar3 = UiMgr_FindLayout(0xde);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0x207);
    iVar3 = UiMgr_FindLayout(0xde);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 1;
    uVar4 = UiRes_GetLayoutData(0x208);
    iVar3 = UiMgr_FindLayout(0xde);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x380 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 1;
    uVar4 = UiRes_GetLayoutData(0x209);
    iVar3 = UiMgr_FindLayout(0xde);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x394 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x390 = 1;
    uVar4 = UiRes_GetLayoutData(0x20a);
    iVar3 = UiMgr_FindLayout(0xde);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a8 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3a4 = 1;
    uVar4 = UiRes_GetLayoutData(0x204);
    iVar3 = UiMgr_FindLayout(0xde);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3ac = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3ac = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3bc = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x3b8 = 1;
    uVar4 = UiRes_GetLayoutData(0x20b);
    iVar3 = UiMgr_FindLayout(0xdf);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = uVar4;
    pUVar2[iVar3].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x20c);
    iVar3 = UiMgr_FindLayout(0xdf);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x20d);
    iVar3 = UiMgr_FindLayout(0xdf);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0x20e);
    iVar3 = UiMgr_FindLayout(0xdf);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x368 = 1;
    uVar4 = UiRes_GetLayoutData(0x20f);
    iVar3 = UiMgr_FindLayout(0xdf);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x380 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x37c = 1;
    iVar3 = UiMgr_FindLayout(0xdd);
    pUVar2 = g_UiMgr->slots;
    uVar5 = UiRes_GetLayoutData(0x202);
    UiLayout_PlayAnim(&pUVar2[iVar3].layout,uVar5);
    iVar3 = UiMgr_FindLayout(0xde);
    pUVar2 = g_UiMgr->slots;
    uVar5 = UiRes_GetLayoutData(0x20a);
    UiLayout_PlayAnim(&pUVar2[iVar3].layout,uVar5);
    iVar3 = UiMgr_FindLayout(0xdf);
    pUVar2 = g_UiMgr->slots;
    uVar5 = UiRes_GetLayoutData(0x20e);
    UiLayout_PlayAnim(&pUVar2[iVar3].layout,uVar5);
    bVar1 = *pbVar8;
  }
  iVar3 = 0;
  if (bVar1 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0:
      break;
    default:
      iVar3 = 1;
      break;
    case 5:
      iVar3 = 2;
    }
  }
  if (iVar3 == 1) {
    pbVar8[0x10] = 0;
    pbVar8[0x11] = 0;
    pbVar8[0x12] = 0;
    pbVar8[0x13] = 0;
  }
  else {
    lVar6 = UiLayout_UpdateAnimById(0xdc,0);
    lVar7 = UiLayout_UpdateAnimById(0xdd,0);
    if (lVar6 == 0 && lVar7 == 0) {
      pbVar8[0x10] = 0;
      pbVar8[0x11] = 0;
      pbVar8[0x12] = 0;
      pbVar8[0x13] = 0;
    }
  }
  if (*(int *)(pbVar8 + 0x18) != 0) {
    lVar6 = 0;
    if (pbVar8[8] < 6) {
                    /* WARNING: Switch is manually overridden */
      switch(pbVar8[8]) {
      case 0:
        break;
      default:
        lVar6 = 1;
        break;
      case 5:
        lVar6 = 2;
      }
    }
    if ((lVar6 == 1) && (lVar6 = MenuMgr_Goto(), lVar6 == 0)) {
      if (*(int *)(pbVar8 + 8) == 4) {
        ScrGarage_Draw_FullAero_a980(param_1);
        lVar6 = UiLayout_UpdateAnimById(0xdd,5);
        lVar7 = UiLayout_UpdateAnimById(0xdf,5);
        if (lVar6 == 0 && lVar7 == 0) {
          pbVar8[0x18] = 0;
          pbVar8[0x19] = 0;
          pbVar8[0x1a] = 0;
          pbVar8[0x1b] = 0;
        }
      }
      else {
        ScrGarage_Draw_BodyTune(param_1);
        lVar6 = UiLayout_UpdateAnimById(0xdd,2);
        lVar7 = UiLayout_UpdateAnimById(0xde,4);
        if (lVar6 == 0 && lVar7 == 0) {
          pbVar8[0x18] = 0;
          pbVar8[0x19] = 0;
          pbVar8[0x1a] = 0;
          pbVar8[0x1b] = 0;
        }
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0xdc,1);
      lVar7 = UiLayout_UpdateAnimById(0xdd,1);
      if (lVar6 == 0 && lVar7 == 0) {
        pbVar8[0x18] = 0;
        pbVar8[0x19] = 0;
        pbVar8[0x1a] = 0;
        pbVar8[0x1b] = 0;
      }
    }
  }
  MenuScr_Select_CarStatus(param_1);
  MenuNum_CountUp_Tune(0xdc,3,4,0xf8,4,1,0);
  UiLayout_UpdateAnimById(0xdc,2);
  iVar3 = UiMgr_FindLayout(0xdc);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  ScrGarage_Draw_PowerTune(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0026f420  size 0x460
void ScrCareer_Draw_Category(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  iVar3 = piVar6[5];
  piVar6[5] = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(500);
    iVar3 = UiMgr_FindLayout(0xdb);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar4;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x1f5);
    iVar3 = UiMgr_FindLayout(0xdb);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar4;
    pUVar1[iVar3].layout.animState = 1;
  }
  lVar5 = UiLayout_UpdateAnimById(0xdb,0);
  if (lVar5 == 0) {
    if ((*piVar6 == -1) && (piVar6[4] != 0)) {
      maybe_CarStatus_ResetBars(*(undefined4 *)(&DAT_0032d928 + piVar6[0xbf] * 4));
    }
    piVar6[4] = 0;
  }
  if ((piVar6[6] != 0) && (lVar5 = UiLayout_UpdateAnimById(0xdb), lVar5 == 0)) {
    piVar6[6] = 0;
  }
  MenuWnd_DrawTextId(0xdb,0x16,4,0x24f);
  if (piVar6[0xc0] < 0) {
    MenuWnd_DrawText(0xdb,0x1d,0x59);
  }
  else {
    MenuWnd_DrawText(0xdb,0x1d,piVar6[0xc0] + 0x250);
  }
  MenuWnd_DrawTextId(0xdb,0x17,4,0x232);
  if (piVar6[0xcd] == 0) {
    MenuWnd_DrawLabel(0xdb,0x1e,0x26,0);
  }
  else {
    cVar2 = MenuText_RivalCarSpec(piVar6[8],0);
    if (cVar2 == '\a') {
      MenuWnd_DrawLabel(0xdb,0x1e,0x18,piVar6[0xc1],0);
    }
    else {
      MenuWnd_DrawLabel(0xdb,0x1e,0x17,piVar6[0xc1],0);
    }
  }
  MenuWnd_DrawTextId(0xdb,0x18,4,0x233);
  if (piVar6[0xcb] == 0) {
    MenuWnd_DrawLabel(0xdb,0x1f,0x27,0,0,0);
  }
  else {
    MenuWnd_DrawLabel(0xdb,0x1f,0x19,piVar6[0xc2],0,0,piVar6[0xc3],0);
  }
  MenuWnd_DrawTextId(0xdb,0x19,4,0x234);
  if (piVar6[0xcc] == 0) {
    MenuWnd_DrawLabel(0xdb,0x20,0x28,0,0,0);
  }
  else {
    MenuWnd_DrawLabel(0xdb,0x20,0x1a,piVar6[0xc4] / 10,piVar6[0xc4] % 10,0,0,piVar6[0xc5]);
  }
  MenuWnd_DrawTextId(0xdb,0x1a,4,0x235);
  if (piVar6[0xca] == 0) {
    MenuWnd_DrawLabel(0xdb,0x21,0x25,0);
  }
  else {
    MenuWnd_DrawLabel(0xdb,0x21,0x16,piVar6[0xc6],0);
  }
  MenuWnd_DrawTextId(0xdb,0x1b,4,0x236);
  MenuWnd_DrawLabel(0xdb,0x22,0x23a,piVar6[199]);
  MenuWnd_DrawTextId(0xdb,0x1c,4,0x237);
  MenuWnd_DrawLabel(0xdb,0x23,0x47,piVar6[200],piVar6[0xc9]);
  MenuScr_Select_CarStatus(param_1);
  iVar3 = UiMgr_FindLayout(0xdb);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0026f880  size 0x14
/* page identified from its states' on-screen text (N154) */

void maybe_PageAero_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0026f8a0  size 0x110
/* page identified from its states' on-screen text (N154) */

void maybe_PageAero_Update(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = UiLayout_UpdateAnimById(0xd9,0);
  lVar2 = UiLayout_UpdateAnimById(0xda,0);
  if (lVar1 == 0 && lVar2 == 0) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  (*(code *)(&PTR_ScrCareer_Draw_Category_0032d910)[*(int *)((int)param_1 + 4)])(param_1);
  if ((g_MenuMgr->flags & 4) == 0) {
    lVar1 = UiLayout_UpdateAnimById(0xd9,1);
    lVar2 = UiLayout_UpdateAnimById(0xda,1);
    if (lVar1 == 0 && lVar2 == 0) {
      if ((g_MenuMgr->flags & 1) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
      }
    }
  }
  return;
}

// 0x0026f9b0  size 0x42c
/* page identified from its states' on-screen text (N154) */

void maybe_PageAero_Enter(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  uVar4 = UiRes_GetLayoutData(0x7c);
  UiLayout_PlayAnim(&pUVar1[iVar2].layout,uVar4);
  uVar3 = UiRes_GetLayoutData(0x7e);
  iVar2 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
  }
  uVar3 = UiRes_GetLayoutData(0x1ee);
  iVar2 = UiMgr_FindLayout(0xd9);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar3;
  pUVar1[iVar2].layout.unk_318 = 1;
  uVar3 = UiRes_GetLayoutData(0x1ef);
  iVar2 = UiMgr_FindLayout(0xd9);
  pUVar1 = g_UiMgr->slots;
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
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
  pUVar1[iVar2].layout.animState = 1;
  uVar3 = UiRes_GetLayoutData(0x1f0);
  iVar2 = UiMgr_FindLayout(0xda);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar3;
  pUVar1[iVar2].layout.unk_318 = 1;
  uVar3 = UiRes_GetLayoutData(0x1f1);
  iVar2 = UiMgr_FindLayout(0xda);
  pUVar1 = g_UiMgr->slots;
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
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
  pUVar1[iVar2].layout.animState = 1;
  uVar3 = UiRes_GetLayoutData(0x1f2);
  iVar2 = UiMgr_FindLayout(0xda);
  pUVar1 = g_UiMgr->slots;
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
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
  uVar3 = UiRes_GetLayoutData(499);
  iVar2 = UiMgr_FindLayout(0xda);
  pUVar1 = g_UiMgr->slots;
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
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x350 = 1;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
  uVar3 = 0;
  if (*(byte *)(param_1 + 4) < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(*(byte *)(param_1 + 4)) {
    case 0:
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      goto LAB_0026fd2c;
    default:
      uVar3 = 1;
      break;
    case 5:
      uVar3 = 2;
    }
  }
  *(undefined4 *)(param_1 + 0x2fc) = uVar3;
LAB_0026fd2c:
  maybe_CarStatus_ResetBars(*(undefined4 *)(&DAT_0032d928 + *(int *)(param_1 + 0x2fc) * 4));
  return;
}

// 0x0026fde0  size 0x198
void MenuScr_Draw_Clockwise(int param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_0032d9d0;
  do {
    uVar1 = MsgId_ForSlot(*(int *)(param_1 + 4) + -1,1);
    MenuWnd_DrawText(0x6e,*puVar2,uVar1);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 4);
  if (*(int *)(param_1 + 4) == 0) {
    MenuWnd_DrawText(0x6f,0x2c,0x122);
    MenuWnd_DrawText(0x6f,0x2d,0x123);
    MenuWnd_DrawText(0x6f,0x2e,0x4f);
    MenuWnd_DrawText(0x6f,0x2f,0x50);
    MenuWnd_DrawText(0x6f,0x30,0x53);
    MenuWnd_DrawText(0x6f,0x31,0x52);
  }
  else {
    MenuWnd_DrawText(0x70,0x2b,0x49);
    MenuWnd_DrawText(0x70,0x2c,0x4a);
    MenuWnd_DrawText(0x70,0x2d,0x4f);
    MenuWnd_DrawText(0x70,0x2e,0x51);
    if (*(int *)(param_1 + 4) - 6U < 2) {
      MenuWnd_DrawText(0x70,0x2f,0x53);
      MenuWnd_DrawText(0x70,0x30,0x54);
    }
    else {
      MenuWnd_DrawText(0x70,0x2f,0x50);
      MenuWnd_DrawText(0x70,0x30,0x52);
    }
    MenuWnd_DrawText(0x70,0x31,0x55);
    MenuWnd_DrawText(0x70,0x32,0x56);
  }
  return;
}

// 0x0026ff80  size 0x13c
/* entry 2 of draw table 0x32d9b8 used by ScrSubtitleDraw_Update */

void ScrSubtitleDraw_Draw2(int param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  bVar1 = *(int *)(param_1 + 0x24) != 1;
  if (iVar5 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0x57,bVar1,0x36ed28);
  if (*(int *)(param_1 + 0x40) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  MenuWnd_SetTitle(3,*(undefined4 *)((uint)bVar1 * 4 + 0x36ed30));
  iVar5 = 0;
  puVar4 = &DAT_0032d9d0;
  do {
    uVar3 = MsgId_ForSlot(*(int *)(param_1 + 4) + -1,1);
    MenuWnd_DrawText(0x6e,*puVar4,uVar3);
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar5 < 4);
  iVar5 = UiMgr_FindLayout(0x6e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  return;
}

