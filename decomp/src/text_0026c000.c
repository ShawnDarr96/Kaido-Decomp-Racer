// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0026c000 - 0x00270000
#include "ghidra_types.h"

// 0x0026cb10  size 0xca0
void FUN_0026cb10(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0x14);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x1fa);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x1fb);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x1fd);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = FUN_001f4890(0x1fe);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x1ff);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x200);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar2 = FUN_001f4890(0x201);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x398) = 0;
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x390) = 0;
    *(undefined4 *)(iVar1 + 0x398) = uVar2;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    uVar2 = FUN_001f4890(0x202);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3ac) = 0;
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3a4) = 0;
    *(undefined4 *)(iVar1 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar1 + 0x3a8) = 1;
    uVar2 = FUN_001f4890(0x1fc);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b8) = 0;
    *(undefined4 *)(iVar1 + 0x3c0) = uVar2;
    *(undefined4 *)(iVar1 + 0x3bc) = 1;
    uVar2 = FUN_001f4890(0x203);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x205);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = FUN_001f4890(0x206);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x207);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x208);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar2 = FUN_001f4890(0x209);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x398) = 0;
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x390) = 0;
    *(undefined4 *)(iVar1 + 0x398) = uVar2;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    uVar2 = FUN_001f4890(0x20a);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3ac) = 0;
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3a4) = 0;
    *(undefined4 *)(iVar1 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar1 + 0x3a8) = 1;
    uVar2 = FUN_001f4890(0x204);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b8) = 0;
    *(undefined4 *)(iVar1 + 0x3c0) = uVar2;
    *(undefined4 *)(iVar1 + 0x3bc) = 1;
    uVar2 = FUN_001f4890(0x20b);
    iVar1 = FUN_001f48c0(0xdf);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x20c);
    iVar1 = FUN_001f48c0(0xdf);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = FUN_001f4890(0x20d);
    iVar1 = FUN_001f48c0(0xdf);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x20e);
    iVar1 = FUN_001f48c0(0xdf);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x20f);
    iVar1 = FUN_001f48c0(0xdf);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
  }
  *(undefined4 *)(iVar5 + 0x10) = 0;
  if (*(int *)(iVar5 + 0x18) != 0) {
    lVar3 = 0;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
      break;
    case 1:
    case 2:
    case 3:
    case 4:
      lVar3 = 1;
      break;
    case 5:
      lVar3 = 2;
    }
    if ((lVar3 == 1) && (lVar3 = FUN_001fd2d0(), lVar3 == 0)) {
      if (*(int *)(iVar5 + 8) == 2) {
        FUN_0026b1f0(param_1);
        lVar3 = FUN_00201260(0xdd,6);
        lVar4 = FUN_00201260(0xde,5);
        if (lVar3 == 0 && lVar4 == 0) {
          *(undefined4 *)(iVar5 + 0x18) = 0;
        }
      }
      else {
        FUN_0026a980(param_1);
        lVar3 = FUN_00201260(0xde,3);
        lVar4 = FUN_00201260(0xdf,2);
        if (lVar3 == 0 && lVar4 == 0) {
          *(undefined4 *)(iVar5 + 0x18) = 0;
        }
      }
    }
    else {
      lVar3 = FUN_00201260(0xdc,1);
      lVar4 = FUN_00201260(0xde,1);
      if (lVar3 == 0 && lVar4 == 0) {
        *(undefined4 *)(iVar5 + 0x18) = 0;
      }
    }
  }
  FUN_0026b8c0(param_1);
  FUN_0026a630(0xdc,3,4,0xf8,4,1,2);
  FUN_00201260(0xdc,2);
  iVar1 = FUN_001f48c0(0xdc);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_0026ad80(param_1);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0026d7b0  size 0xcac
void FUN_0026d7b0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar1 = *(int *)(iVar6 + 0x14);
  *(undefined4 *)(iVar6 + 0x14) = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_001f4890(0x1fa);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x1fb);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x1fd);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = FUN_001f4890(0x1fe);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x1ff);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x200);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar2 = FUN_001f4890(0x201);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x398) = 0;
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x390) = 0;
    *(undefined4 *)(iVar1 + 0x398) = uVar2;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    uVar2 = FUN_001f4890(0x202);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3ac) = 0;
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3a4) = 0;
    *(undefined4 *)(iVar1 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar1 + 0x3a8) = 1;
    uVar2 = FUN_001f4890(0x1fc);
    iVar1 = FUN_001f48c0(0xdd);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b8) = 0;
    *(undefined4 *)(iVar1 + 0x3c0) = uVar2;
    *(undefined4 *)(iVar1 + 0x3bc) = 1;
    uVar2 = FUN_001f4890(0x203);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x205);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = FUN_001f4890(0x206);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x207);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x208);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar2 = FUN_001f4890(0x209);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x398) = 0;
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x390) = 0;
    *(undefined4 *)(iVar1 + 0x398) = uVar2;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    uVar2 = FUN_001f4890(0x20a);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3ac) = 0;
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3a4) = 0;
    *(undefined4 *)(iVar1 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar1 + 0x3a8) = 1;
    uVar2 = FUN_001f4890(0x204);
    iVar1 = FUN_001f48c0(0xde);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b8) = 0;
    *(undefined4 *)(iVar1 + 0x3c0) = uVar2;
    *(undefined4 *)(iVar1 + 0x3bc) = 1;
    uVar2 = FUN_001f4890(0x20b);
    iVar1 = FUN_001f48c0(0xdf);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x20c);
    iVar1 = FUN_001f48c0(0xdf);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = FUN_001f4890(0x20d);
    iVar1 = FUN_001f48c0(0xdf);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x20e);
    iVar1 = FUN_001f48c0(0xdf);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = FUN_001f4890(0x20f);
    iVar1 = FUN_001f48c0(0xdf);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
  }
  *(undefined4 *)(iVar6 + 0x10) = 0;
  if (*(int *)(iVar6 + 0x18) != 0) {
    lVar3 = 0;
    switch(*(undefined1 *)(iVar6 + 8)) {
    case 0:
      break;
    case 1:
    case 2:
    case 3:
    case 4:
      lVar3 = 1;
      break;
    case 5:
      lVar3 = 2;
    }
    if ((lVar3 == 1) && (lVar3 = FUN_001fd2d0(), lVar3 == 0)) {
      if (*(int *)(iVar6 + 8) == 1) {
        lVar3 = FUN_00201260(0xdd,7);
        lVar5 = FUN_00201260(0xde,7);
        if (lVar3 == 0 && lVar5 == 0) {
          *(undefined4 *)(iVar6 + 0x18) = 0;
        }
      }
      else {
        lVar3 = FUN_00201260(0xdd,4);
        lVar5 = FUN_00201260(0xde,2);
        if (lVar3 == 0 && lVar5 == 0) {
          *(undefined4 *)(iVar6 + 0x18) = 0;
        }
      }
    }
    else {
      lVar3 = FUN_00201260(0xdc,1);
      lVar5 = FUN_00201260(0xdd,8);
      lVar4 = FUN_00201260(0xde,8);
      if (lVar4 == 0 && (lVar3 == 0 && lVar5 == 0)) {
        *(undefined4 *)(iVar6 + 0x18) = 0;
      }
    }
  }
  FUN_0026b8c0(param_1);
  FUN_0026a630(0xdc,3,4,0xf8,4,1,1);
  FUN_00201260(0xdc,2);
  iVar1 = FUN_001f48c0(0xdc);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  FUN_0026b1f0(param_1);
  FUN_0026ad80(param_1);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0026e460  size 0xfb4
void FUN_0026e460(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  
  puVar8 = (undefined1 *)param_1;
  iVar2 = *(int *)(puVar8 + 0x14);
  *(undefined4 *)(puVar8 + 0x14) = 0;
  if (iVar2 == 0) {
    uVar1 = *puVar8;
  }
  else {
    uVar3 = FUN_001f4890(0x1f8);
    iVar2 = FUN_001f48c0(0xdc);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0x1f9);
    iVar2 = FUN_001f48c0(0xdc);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar3 = FUN_001f4890(0x1f6);
    iVar2 = FUN_001f48c0(0xdc);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 1;
    *(undefined4 *)(iVar2 + 0x348) = uVar3;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar3 = FUN_001f4890(0x1f7);
    iVar2 = FUN_001f48c0(0xdc);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 1;
    *(undefined4 *)(iVar2 + 0x35c) = uVar3;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar3 = FUN_001f4890(0x1fa);
    iVar2 = FUN_001f48c0(0xdd);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0x1fb);
    iVar2 = FUN_001f48c0(0xdd);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar3 = FUN_001f4890(0x1fd);
    iVar2 = FUN_001f48c0(0xdd);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar3;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar3 = FUN_001f4890(0x1fe);
    iVar2 = FUN_001f48c0(0xdd);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar3;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar3 = FUN_001f4890(0x1ff);
    iVar2 = FUN_001f48c0(0xdd);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x368) = 0;
    *(undefined4 *)(iVar2 + 0x370) = uVar3;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    uVar3 = FUN_001f4890(0x200);
    iVar2 = FUN_001f48c0(0xdd);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar2 + 900) = 0;
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x37c) = 0;
    *(undefined4 *)(iVar2 + 900) = uVar3;
    *(undefined4 *)(iVar2 + 0x380) = 1;
    uVar3 = FUN_001f4890(0x201);
    iVar2 = FUN_001f48c0(0xdd);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x398) = 0;
    *(undefined4 *)(iVar2 + 0x388) = 0;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    *(undefined4 *)(iVar2 + 0x388) = 0;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    *(undefined4 *)(iVar2 + 0x390) = 0;
    *(undefined4 *)(iVar2 + 0x398) = uVar3;
    *(undefined4 *)(iVar2 + 0x394) = 1;
    uVar3 = FUN_001f4890(0x202);
    iVar2 = FUN_001f48c0(0xdd);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3ac) = 0;
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    if (*(int *)(iVar2 + 0x3ac) == 0) {
      *(undefined4 *)(iVar2 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    if (*(int *)(iVar2 + 0x3ac) == 0) {
      *(undefined4 *)(iVar2 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3a4) = 0;
    *(undefined4 *)(iVar2 + 0x3ac) = uVar3;
    *(undefined4 *)(iVar2 + 0x3a8) = 1;
    uVar3 = FUN_001f4890(0x1fc);
    iVar2 = FUN_001f48c0(0xdd);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3c0) = 0;
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
    if (*(int *)(iVar2 + 0x3c0) == 0) {
      *(undefined4 *)(iVar2 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
    if (*(int *)(iVar2 + 0x3c0) == 0) {
      *(undefined4 *)(iVar2 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3b8) = 0;
    *(undefined4 *)(iVar2 + 0x3c0) = uVar3;
    *(undefined4 *)(iVar2 + 0x3bc) = 1;
    uVar3 = FUN_001f4890(0x203);
    iVar2 = FUN_001f48c0(0xde);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar3 = FUN_001f4890(0x205);
    iVar2 = FUN_001f48c0(0xde);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar3;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar3 = FUN_001f4890(0x206);
    iVar2 = FUN_001f48c0(0xde);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar3;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar3 = FUN_001f4890(0x207);
    iVar2 = FUN_001f48c0(0xde);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x368) = 0;
    *(undefined4 *)(iVar2 + 0x370) = uVar3;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    uVar3 = FUN_001f4890(0x208);
    iVar2 = FUN_001f48c0(0xde);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar2 + 900) = 0;
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x37c) = 0;
    *(undefined4 *)(iVar2 + 900) = uVar3;
    *(undefined4 *)(iVar2 + 0x380) = 1;
    uVar3 = FUN_001f4890(0x209);
    iVar2 = FUN_001f48c0(0xde);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x398) = 0;
    *(undefined4 *)(iVar2 + 0x388) = 0;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    *(undefined4 *)(iVar2 + 0x388) = 0;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    *(undefined4 *)(iVar2 + 0x390) = 0;
    *(undefined4 *)(iVar2 + 0x398) = uVar3;
    *(undefined4 *)(iVar2 + 0x394) = 1;
    uVar3 = FUN_001f4890(0x20a);
    iVar2 = FUN_001f48c0(0xde);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3ac) = 0;
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    if (*(int *)(iVar2 + 0x3ac) == 0) {
      *(undefined4 *)(iVar2 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    if (*(int *)(iVar2 + 0x3ac) == 0) {
      *(undefined4 *)(iVar2 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3a4) = 0;
    *(undefined4 *)(iVar2 + 0x3ac) = uVar3;
    *(undefined4 *)(iVar2 + 0x3a8) = 1;
    uVar3 = FUN_001f4890(0x204);
    iVar2 = FUN_001f48c0(0xde);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3c0) = 0;
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
    if (*(int *)(iVar2 + 0x3c0) == 0) {
      *(undefined4 *)(iVar2 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
    if (*(int *)(iVar2 + 0x3c0) == 0) {
      *(undefined4 *)(iVar2 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3b8) = 0;
    *(undefined4 *)(iVar2 + 0x3c0) = uVar3;
    *(undefined4 *)(iVar2 + 0x3bc) = 1;
    uVar3 = FUN_001f4890(0x20b);
    iVar2 = FUN_001f48c0(0xdf);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar3 = FUN_001f4890(0x20c);
    iVar2 = FUN_001f48c0(0xdf);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar3;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar3 = FUN_001f4890(0x20d);
    iVar2 = FUN_001f48c0(0xdf);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar3;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar3 = FUN_001f4890(0x20e);
    iVar2 = FUN_001f48c0(0xdf);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x368) = 0;
    *(undefined4 *)(iVar2 + 0x370) = uVar3;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    uVar3 = FUN_001f4890(0x20f);
    iVar2 = FUN_001f48c0(0xdf);
    iVar2 = *piRam0036f42c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar2 + 900) = 0;
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x37c) = 0;
    *(undefined4 *)(iVar2 + 900) = uVar3;
    *(undefined4 *)(iVar2 + 0x380) = 1;
    iVar4 = FUN_001f48c0(0xdd);
    iVar2 = *piRam0036f42c;
    uVar5 = FUN_001f4890(0x202);
    FUN_001ed190(iVar2 + iVar4 * 0x4f4 + 4,uVar5);
    iVar4 = FUN_001f48c0(0xde);
    iVar2 = *piRam0036f42c;
    uVar5 = FUN_001f4890(0x20a);
    FUN_001ed190(iVar2 + iVar4 * 0x4f4 + 4,uVar5);
    iVar4 = FUN_001f48c0(0xdf);
    iVar2 = *piRam0036f42c;
    uVar5 = FUN_001f4890(0x20e);
    FUN_001ed190(iVar2 + iVar4 * 0x4f4 + 4,uVar5);
    uVar1 = *puVar8;
  }
  iVar2 = 0;
  switch(uVar1) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
  case 4:
    iVar2 = 1;
    break;
  case 5:
    iVar2 = 2;
  }
  if (iVar2 == 1) {
    *(undefined4 *)(puVar8 + 0x10) = 0;
  }
  else {
    lVar6 = FUN_00201260(0xdc,0);
    lVar7 = FUN_00201260(0xdd,0);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(puVar8 + 0x10) = 0;
    }
  }
  if (*(int *)(puVar8 + 0x18) != 0) {
    lVar6 = 0;
    switch(puVar8[8]) {
    case 0:
      break;
    case 1:
    case 2:
    case 3:
    case 4:
      lVar6 = 1;
      break;
    case 5:
      lVar6 = 2;
    }
    if ((lVar6 == 1) && (lVar6 = FUN_001fd2d0(), lVar6 == 0)) {
      if (*(int *)(puVar8 + 8) == 4) {
        FUN_0026a980(param_1);
        lVar6 = FUN_00201260(0xdd,5);
        lVar7 = FUN_00201260(0xdf,5);
        if (lVar6 == 0 && lVar7 == 0) {
          *(undefined4 *)(puVar8 + 0x18) = 0;
        }
      }
      else {
        FUN_0026ad80(param_1);
        lVar6 = FUN_00201260(0xdd,2);
        lVar7 = FUN_00201260(0xde,4);
        if (lVar6 == 0 && lVar7 == 0) {
          *(undefined4 *)(puVar8 + 0x18) = 0;
        }
      }
    }
    else {
      lVar6 = FUN_00201260(0xdc,1);
      lVar7 = FUN_00201260(0xdd,1);
      if (lVar6 == 0 && lVar7 == 0) {
        *(undefined4 *)(puVar8 + 0x18) = 0;
      }
    }
  }
  FUN_0026b8c0(param_1);
  FUN_0026a630(0xdc,3,4,0xf8,4,1,0);
  FUN_00201260(0xdc,2);
  iVar2 = FUN_001f48c0(0xdc);
  FUN_001eda40(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  FUN_0026b1f0(param_1);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0026f420  size 0x460
void FUN_0026f420(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  iVar2 = piVar5[5];
  piVar5[5] = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_001f4890(500);
    iVar2 = FUN_001f48c0(0xdb);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = FUN_001f4890(0x1f5);
    iVar2 = FUN_001f48c0(0xdb);
    iVar2 = *piGpffff8d3c + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
  }
  lVar4 = FUN_00201260(0xdb,0);
  if (lVar4 == 0) {
    if ((*piVar5 == -1) && (piVar5[4] != 0)) {
      FUN_0026a4e0(*(undefined4 *)(&DAT_0032d928 + piVar5[0xbf] * 4));
    }
    piVar5[4] = 0;
  }
  if ((piVar5[6] != 0) && (lVar4 = FUN_00201260(0xdb), lVar4 == 0)) {
    piVar5[6] = 0;
  }
  FUN_00201140(0xdb,0x16,4,0x24f);
  if (piVar5[0xc0] < 0) {
    FUN_002011b0(0xdb,0x1d,0x59);
  }
  else {
    FUN_002011b0(0xdb,0x1d,piVar5[0xc0] + 0x250);
  }
  FUN_00201140(0xdb,0x17,4,0x232);
  if (piVar5[0xcd] == 0) {
    FUN_002010a0(0xdb,0x1e,0x26,0);
  }
  else {
    cVar1 = FUN_001f7170(piVar5[8],0);
    if (cVar1 == '\a') {
      FUN_002010a0(0xdb,0x1e,0x18,piVar5[0xc1],0);
    }
    else {
      FUN_002010a0(0xdb,0x1e,0x17,piVar5[0xc1],0);
    }
  }
  FUN_00201140(0xdb,0x18,4,0x233);
  if (piVar5[0xcb] == 0) {
    FUN_002010a0(0xdb,0x1f,0x27,0,0,0);
  }
  else {
    FUN_002010a0(0xdb,0x1f,0x19,piVar5[0xc2],0,0,piVar5[0xc3],0);
  }
  FUN_00201140(0xdb,0x19,4,0x234);
  if (piVar5[0xcc] == 0) {
    FUN_002010a0(0xdb,0x20,0x28,0,0,0);
  }
  else {
    FUN_002010a0(0xdb,0x20,0x1a,piVar5[0xc4] / 10,piVar5[0xc4] % 10,0,0,piVar5[0xc5]);
  }
  FUN_00201140(0xdb,0x1a,4,0x235);
  if (piVar5[0xca] == 0) {
    FUN_002010a0(0xdb,0x21,0x25,0);
  }
  else {
    FUN_002010a0(0xdb,0x21,0x16,piVar5[0xc6],0);
  }
  FUN_00201140(0xdb,0x1b,4,0x236);
  FUN_002010a0(0xdb,0x22,0x23a,piVar5[199]);
  FUN_00201140(0xdb,0x1c,4,0x237);
  FUN_002010a0(0xdb,0x23,0x47,piVar5[200],piVar5[0xc9]);
  FUN_0026b8c0(param_1);
  iVar2 = FUN_001f48c0(0xdb);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  FUN_001ff790(3,0xffffffffffffffff);
  return;
}

// 0x0026f8a0  size 0x110
void FUN_0026f8a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00201260(0xd9,0);
  lVar2 = FUN_00201260(0xda,0);
  if (lVar1 == 0 && lVar2 == 0) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
    }
  }
  (*(code *)(&PTR_FUN_0032d910)[*(int *)((int)param_1 + 4)])(param_1);
  if ((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) {
    lVar1 = FUN_00201260(0xd9,1);
    lVar2 = FUN_00201260(0xda,1);
    if (lVar1 == 0 && lVar2 == 0) {
      if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
      }
    }
  }
  return;
}

// 0x0026f9b0  size 0x42c
void FUN_0026f9b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_001f48c0(8);
  iVar3 = *piGpffff8d3c;
  uVar4 = FUN_001f4890(0x7c);
  FUN_001ed190(iVar3 + iVar1 * 0x4f4 + 4,uVar4);
  uVar2 = FUN_001f4890(0x7e);
  iVar3 = FUN_001f48c0(8);
  iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
  if (*(int *)(iVar3 + 0x348) == 0) {
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
  }
  uVar2 = FUN_001f4890(0x1ee);
  iVar3 = FUN_001f48c0(0xd9);
  iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
  *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar3 + 800) = 0;
  *(undefined4 *)(iVar3 + 0x310) = 0;
  if (*(int *)(iVar3 + 800) == 0) {
    *(undefined4 *)(iVar3 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar3 + 0x310) = 0;
  if (*(int *)(iVar3 + 800) == 0) {
    *(undefined4 *)(iVar3 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar3 + 0x318) = 0;
  *(undefined4 *)(iVar3 + 800) = uVar2;
  *(undefined4 *)(iVar3 + 0x31c) = 1;
  uVar2 = FUN_001f4890(0x1ef);
  iVar3 = FUN_001f48c0(0xd9);
  iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
  *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x334) = 0;
  *(undefined4 *)(iVar3 + 0x324) = 0;
  if (*(int *)(iVar3 + 0x334) == 0) {
    *(undefined4 *)(iVar3 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x330) = 1;
  }
  *(undefined4 *)(iVar3 + 0x324) = 0;
  if (*(int *)(iVar3 + 0x334) == 0) {
    *(undefined4 *)(iVar3 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x330) = 1;
  }
  *(undefined4 *)(iVar3 + 0x32c) = 0;
  *(undefined4 *)(iVar3 + 0x334) = uVar2;
  *(undefined4 *)(iVar3 + 0x330) = 1;
  uVar2 = FUN_001f4890(0x1f0);
  iVar3 = FUN_001f48c0(0xda);
  iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
  *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar3 + 800) = 0;
  *(undefined4 *)(iVar3 + 0x310) = 0;
  if (*(int *)(iVar3 + 800) == 0) {
    *(undefined4 *)(iVar3 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar3 + 0x310) = 0;
  if (*(int *)(iVar3 + 800) == 0) {
    *(undefined4 *)(iVar3 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar3 + 0x318) = 0;
  *(undefined4 *)(iVar3 + 800) = uVar2;
  *(undefined4 *)(iVar3 + 0x31c) = 1;
  uVar2 = FUN_001f4890(0x1f1);
  iVar3 = FUN_001f48c0(0xda);
  iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
  *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x334) = 0;
  *(undefined4 *)(iVar3 + 0x324) = 0;
  if (*(int *)(iVar3 + 0x334) == 0) {
    *(undefined4 *)(iVar3 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x330) = 1;
  }
  *(undefined4 *)(iVar3 + 0x324) = 0;
  if (*(int *)(iVar3 + 0x334) == 0) {
    *(undefined4 *)(iVar3 + 0x330) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x330) = 1;
  }
  *(undefined4 *)(iVar3 + 0x32c) = 0;
  *(undefined4 *)(iVar3 + 0x334) = uVar2;
  *(undefined4 *)(iVar3 + 0x330) = 1;
  uVar2 = FUN_001f4890(0x1f2);
  iVar3 = FUN_001f48c0(0xda);
  iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
  *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x348) = 0;
  *(undefined4 *)(iVar3 + 0x338) = 0;
  if (*(int *)(iVar3 + 0x348) == 0) {
    *(undefined4 *)(iVar3 + 0x344) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x344) = 1;
  }
  *(undefined4 *)(iVar3 + 0x338) = 0;
  if (*(int *)(iVar3 + 0x348) == 0) {
    *(undefined4 *)(iVar3 + 0x344) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x344) = 1;
  }
  *(undefined4 *)(iVar3 + 0x340) = 1;
  *(undefined4 *)(iVar3 + 0x348) = uVar2;
  *(undefined4 *)(iVar3 + 0x344) = 1;
  uVar2 = FUN_001f4890(499);
  iVar3 = FUN_001f48c0(0xda);
  iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
  *(undefined4 *)(iVar3 + 0x350) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x35c) = 0;
  *(undefined4 *)(iVar3 + 0x34c) = 0;
  if (*(int *)(iVar3 + 0x35c) == 0) {
    *(undefined4 *)(iVar3 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x358) = 1;
  }
  *(undefined4 *)(iVar3 + 0x34c) = 0;
  if (*(int *)(iVar3 + 0x35c) == 0) {
    *(undefined4 *)(iVar3 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x358) = 1;
  }
  *(undefined4 *)(iVar3 + 0x354) = 1;
  *(undefined4 *)(iVar3 + 0x35c) = uVar2;
  *(undefined4 *)(iVar3 + 0x358) = 1;
  uVar2 = 0;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    goto LAB_0026fd2c;
  case 1:
  case 2:
  case 3:
  case 4:
    uVar2 = 1;
    break;
  case 5:
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x2fc) = uVar2;
LAB_0026fd2c:
  FUN_0026a4e0(*(undefined4 *)(&DAT_0032d928 + *(int *)(param_1 + 0x2fc) * 4));
  return;
}

// 0x0026fde0  size 0x198
void FUN_0026fde0(int param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_0032d9d0;
  do {
    uVar1 = FUN_001f69b0(*(int *)(param_1 + 4) + -1,1);
    FUN_002011b0(0x6e,*puVar2,uVar1);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 4);
  if (*(int *)(param_1 + 4) == 0) {
    FUN_002011b0(0x6f,0x2c,0x122);
    FUN_002011b0(0x6f,0x2d,0x123);
    FUN_002011b0(0x6f,0x2e,0x4f);
    FUN_002011b0(0x6f,0x2f,0x50);
    FUN_002011b0(0x6f,0x30,0x53);
    FUN_002011b0(0x6f,0x31,0x52);
  }
  else {
    FUN_002011b0(0x70,0x2b,0x49);
    FUN_002011b0(0x70,0x2c,0x4a);
    FUN_002011b0(0x70,0x2d,0x4f);
    FUN_002011b0(0x70,0x2e,0x51);
    if (*(int *)(param_1 + 4) - 6U < 2) {
      FUN_002011b0(0x70,0x2f,0x53);
      FUN_002011b0(0x70,0x30,0x54);
    }
    else {
      FUN_002011b0(0x70,0x2f,0x50);
      FUN_002011b0(0x70,0x30,0x52);
    }
    FUN_002011b0(0x70,0x31,0x55);
    FUN_002011b0(0x70,0x32,0x56);
  }
  return;
}

// 0x0026ff80  size 0x13c
void FUN_0026ff80(int param_1)

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
    FUN_001ff610(2);
  }
  lVar2 = FUN_001ff320(0x57,bVar1,(int)register0x000001c0 + -0x79c8);
  if (*(int *)(param_1 + 0x40) != 0) {
    if (lVar2 == 2) {
      FUN_001ff600();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_001ff790(3,*(undefined4 *)((int)register0x000001c0 + (uint)bVar1 * 4 + -0x79c0));
  iVar5 = 0;
  puVar4 = &DAT_0032d9d0;
  do {
    uVar3 = FUN_001f69b0(*(int *)(param_1 + 4) + -1,1);
    FUN_002011b0(0x6e,*puVar4,uVar3);
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar5 < 4);
  iVar5 = FUN_001f48c0(0x6e);
  FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
  return;
}

