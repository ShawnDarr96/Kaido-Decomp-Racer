// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001c8000 - 0x001cc000
#include "ghidra_types.h"

// 0x001c8ba0  size 0x48
/* follows Driver_FilterSteering; no call, branch, pointer or constant reference (exception landing
   pad or dead code) */

void Driver_FilterSteering_Orphan2(void)

{
  uint uVar1;
  uint unaff_s1_lo;
  int unaff_s2_lo;
  float *unaff_s3_lo;
  uint *unaff_s4_lo;
  int iVar2;
  int unaff_s5_lo;
  uint *unaff_s6_lo;
  byte *unaff_s7_lo;
  int iVar3;
  int unaff_s8_lo;
  float fVar4;
  float fVar5;
  float in_f3;
  char in_stack_000000a0;
  char in_stack_000000b0;
  char in_stack_000000c0;
  char in_stack_000000d0;
  undefined8 in_stack_000000e8;
  
  unaff_s3_lo[1] = in_f3;
  do {
    unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
    do {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  do {
                    iVar3 = unaff_s8_lo;
                    iVar2 = unaff_s5_lo;
                    unaff_s5_lo = iVar2 + 1;
                    unaff_s8_lo = iVar3 + 8;
                    unaff_s6_lo = unaff_s6_lo + 1;
                    unaff_s7_lo = unaff_s7_lo + 4;
                    if (0x17 < unaff_s5_lo) {
                      return;
                    }
                    unaff_s1_lo = *(uint *)(iVar3 + 0xc);
                  } while (unaff_s1_lo == 0);
                  uVar1 = *(uint *)(iVar3 + 0x10);
                  if ((unaff_s5_lo < 0x10) || (0x17 < unaff_s5_lo)) break;
                  if ((uVar1 & 1) == 0) {
                    if ((uVar1 & 2) == 0) {
                      if ((uVar1 & 0x30) == 0) {
                        if ((uVar1 & 4) == 0) {
                          if ((uVar1 & 8) == 0) {
                            if (((uVar1 & 0x40) != 0) && (fVar5 = 0.0, unaff_s3_lo[1] == 0.0)) {
                              fVar4 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 +
                                                0x330);
                              switch(iVar2) {
                              case 0xf:
                              case 0x11:
                              case 0x13:
                              case 0x15:
                                in_stack_000000a0 = '\0';
                                break;
                              case 0x10:
                              case 0x12:
                              case 0x14:
                              case 0x16:
                                in_stack_000000a0 = '\x01';
                              }
                              if (in_stack_000000a0 == '\0') {
                                if (fVar4 < 0.0) {
                                  fVar5 = -1.0;
                                }
                              }
                              else if (0.0 < fVar4) {
                                fVar5 = 1.0;
                              }
                              fVar5 = (float)fabsf(fVar4 * fVar5);
                              if (0.2 <= fVar5) {
                                if (fVar5 < 0.6) {
                                  fVar5 = ((fVar5 - 0.2) / 0.40000004) * 0.5;
                                }
                                else {
                                  fVar5 = ((fVar5 - 0.6) / 0.39999998) * 0.5 + 0.5;
                                }
                              }
                              else {
                                fVar5 = 0.0;
                              }
                              if (fVar5 != 0.0) {
                                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                                unaff_s3_lo[3] = fVar5;
                              }
                            }
                          }
                          else {
                            fVar5 = 0.0;
                            if (unaff_s3_lo[1] == 0.0) {
                              fVar4 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 +
                                                0x330);
                              switch(iVar2) {
                              case 0xf:
                              case 0x11:
                              case 0x13:
                              case 0x15:
                                in_stack_000000b0 = '\0';
                                break;
                              case 0x10:
                              case 0x12:
                              case 0x14:
                              case 0x16:
                                in_stack_000000b0 = '\x01';
                              }
                              if (in_stack_000000b0 == '\0') {
                                if (fVar4 < 0.0) {
                                  fVar5 = -1.0;
                                }
                              }
                              else if (0.0 < fVar4) {
                                fVar5 = 1.0;
                              }
                              fVar5 = (float)fabsf(fVar4 * fVar5);
                              if (0.2 <= fVar5) {
                                if (fVar5 < 0.6) {
                                  fVar5 = ((fVar5 - 0.2) / 0.40000004) * 0.5;
                                }
                                else {
                                  fVar5 = ((fVar5 - 0.6) / 0.39999998) * 0.5 + 0.5;
                                }
                              }
                              else {
                                fVar5 = 0.0;
                              }
                              if (fVar5 != 0.0) {
                                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                                unaff_s3_lo[1] = fVar5;
                              }
                            }
                          }
                        }
                        else {
                          fVar5 = 0.0;
                          if (*unaff_s3_lo == 0.0) {
                            fVar4 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330
                                              );
                            switch(iVar2) {
                            case 0xf:
                            case 0x11:
                            case 0x13:
                            case 0x15:
                              in_stack_000000c0 = '\0';
                              break;
                            case 0x10:
                            case 0x12:
                            case 0x14:
                            case 0x16:
                              in_stack_000000c0 = '\x01';
                            }
                            if (in_stack_000000c0 == '\0') {
                              if (fVar4 < 0.0) {
                                fVar5 = -1.0;
                              }
                            }
                            else if (0.0 < fVar4) {
                              fVar5 = 1.0;
                            }
                            fVar5 = (float)fabsf(fVar4 * fVar5);
                            if (0.2 <= fVar5) {
                              if (fVar5 < 0.6) {
                                fVar5 = ((fVar5 - 0.2) / 0.40000004) * 0.5;
                              }
                              else {
                                fVar5 = ((fVar5 - 0.6) / 0.39999998) * 0.5 + 0.5;
                              }
                            }
                            else {
                              fVar5 = 0.0;
                            }
                            if (fVar5 != 0.0) {
                              unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                              *unaff_s3_lo = fVar5;
                            }
                          }
                        }
                      }
                      else {
                        fVar5 = 0.0;
                        if (unaff_s3_lo[2] == 0.0) {
                          fVar4 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                          switch(iVar2) {
                          case 0xf:
                          case 0x11:
                          case 0x13:
                          case 0x15:
                            in_stack_000000d0 = '\0';
                            break;
                          case 0x10:
                          case 0x12:
                          case 0x14:
                          case 0x16:
                            in_stack_000000d0 = '\x01';
                          }
                          if (in_stack_000000d0 == '\0') {
                            if (fVar4 < 0.0) {
                              fVar5 = -1.0;
                            }
                          }
                          else if (0.0 < fVar4) {
                            fVar5 = 1.0;
                          }
                          fVar5 = (float)fabsf(fVar4 * fVar5);
                          if (0.2 <= fVar5) {
                            if (fVar5 < 0.6) {
                              fVar5 = ((fVar5 - 0.2) / 0.40000004) * 0.5;
                            }
                            else {
                              fVar5 = ((fVar5 - 0.6) / 0.36499995) * 0.5 + 0.5;
                            }
                          }
                          else {
                            fVar5 = 0.0;
                          }
                          if (1.0 < fVar5) {
                            fVar5 = 1.0;
                          }
                          if (fVar5 != 0.0) {
                            if ((uVar1 & 0x10) == 0) {
                              unaff_s3_lo[2] = fVar5;
                            }
                            else {
                              unaff_s3_lo[2] = -fVar5;
                            }
                            *(undefined1 *)(unaff_s3_lo + 5) = 0;
                          }
                        }
                      }
                    }
                    else if ((*(uint *)(in_stack_000000e8._4_4_ + 0x10) & unaff_s1_lo) == 0) {
                      fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                      switch(iVar2) {
                      case 0xf:
                      case 0x11:
                        if ((fVar5 < -0.75) && ((*unaff_s4_lo & 1) != 0)) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                          *unaff_s4_lo = *unaff_s4_lo & 0xfffffffe;
                        }
                        break;
                      case 0x10:
                      case 0x12:
                        if ((0.75 < fVar5) && ((*unaff_s4_lo & 1) != 0)) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                          *unaff_s4_lo = *unaff_s4_lo & 0xfffffffe;
                        }
                        break;
                      case 0x13:
                      case 0x15:
                        if ((fVar5 < -0.75) && ((*unaff_s4_lo & 2) != 0)) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                          *unaff_s4_lo = *unaff_s4_lo & 0xfffffffd;
                        }
                        break;
                      case 0x14:
                      case 0x16:
                        if ((0.75 < fVar5) && ((*unaff_s4_lo & 2) != 0)) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                          *unaff_s4_lo = *unaff_s4_lo & 0xfffffffd;
                        }
                      }
                    }
                  }
                  else {
                    fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                    switch(iVar2) {
                    case 0xf:
                    case 0x11:
                      if (fVar5 < -0.75) {
                        unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                      }
                      break;
                    case 0x10:
                    case 0x12:
                      if (0.75 < fVar5) {
                        unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                      }
                      break;
                    case 0x13:
                    case 0x15:
                      if (fVar5 < -0.75) {
                        unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                      }
                      break;
                    case 0x14:
                    case 0x16:
                      if (0.75 < fVar5) {
                        unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                      }
                    }
                  }
                }
                if ((uVar1 & 1) == 0) break;
                if ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0xc)) != 0) {
                  unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                }
              }
              if ((uVar1 & 2) == 0) break;
              if ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0x14)) != 0) {
                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
              }
            }
            if ((uVar1 & 4) == 0) break;
            fVar4 = 0.0;
            fVar5 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
            if (fVar5 != 0.0) {
              if (0.1 <= fVar5) {
                if (fVar5 < 0.5) {
                  fVar4 = ((fVar5 - 0.1) / 0.4) * 0.5;
                }
                else {
                  fVar4 = ((fVar5 - 0.5) / 0.5) * 0.5 + 0.5;
                }
              }
              *unaff_s3_lo = fVar4;
              if (*unaff_s3_lo != 0.0) {
                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
              }
            }
          }
          if ((uVar1 & 8) != 0) break;
          if ((uVar1 & 0x30) == 0) {
            if ((uVar1 & 0x40) != 0) {
              fVar4 = 0.0;
              fVar5 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
              if (fVar5 != 0.0) {
                if (0.1 <= fVar5) {
                  if (fVar5 < 0.5) {
                    fVar4 = ((fVar5 - 0.1) / 0.4) * 0.5;
                  }
                  else {
                    fVar4 = ((fVar5 - 0.5) / 0.5) * 0.5 + 0.5;
                  }
                }
                unaff_s3_lo[3] = fVar4;
                if (unaff_s3_lo[1] != 0.0) {
                  unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                }
              }
            }
          }
          else if ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0xc)) != 0) {
            unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
            if ((uVar1 & 0x10) == 0) {
              unaff_s3_lo[2] = 1.0;
            }
            else {
              unaff_s3_lo[2] = -1.0;
            }
          }
        }
        fVar4 = 0.0;
        fVar5 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
      } while (fVar5 == 0.0);
      if (0.1 <= fVar5) {
        if (fVar5 < 0.5) {
          fVar4 = ((fVar5 - 0.1) / 0.4) * 0.5;
        }
        else {
          fVar4 = ((fVar5 - 0.5) / 0.5) * 0.5 + 0.5;
        }
      }
      unaff_s3_lo[1] = fVar4;
    } while (fVar4 == 0.0);
  } while( true );
}

// 0x001c8bec  size 0x44
/* follows Driver_FilterSteering; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Driver_FilterSteering_Orphan1(void)

{
  uint uVar1;
  uint uVar2;
  float in_v1_lo;
  int unaff_s2_lo;
  float *unaff_s3_lo;
  uint *unaff_s4_lo;
  int iVar3;
  int unaff_s5_lo;
  uint *unaff_s6_lo;
  byte *unaff_s7_lo;
  int iVar4;
  int unaff_s8_lo;
  float fVar5;
  float fVar6;
  char in_stack_000000a0;
  char in_stack_000000b0;
  char in_stack_000000c0;
  char in_stack_000000d0;
  undefined8 in_stack_000000e8;
  
  do {
    unaff_s3_lo[2] = in_v1_lo;
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    do {
                      iVar4 = unaff_s8_lo;
                      iVar3 = unaff_s5_lo;
                      unaff_s5_lo = iVar3 + 1;
                      unaff_s8_lo = iVar4 + 8;
                      unaff_s6_lo = unaff_s6_lo + 1;
                      unaff_s7_lo = unaff_s7_lo + 4;
                      if (0x17 < unaff_s5_lo) {
                        return;
                      }
                      uVar1 = *(uint *)(iVar4 + 0xc);
                    } while (uVar1 == 0);
                    uVar2 = *(uint *)(iVar4 + 0x10);
                    if ((unaff_s5_lo < 0x10) || (0x17 < unaff_s5_lo)) break;
                    if ((uVar2 & 1) == 0) {
                      if ((uVar2 & 2) == 0) {
                        if ((uVar2 & 0x30) == 0) {
                          if ((uVar2 & 4) == 0) {
                            if ((uVar2 & 8) == 0) {
                              if (((uVar2 & 0x40) != 0) && (fVar6 = 0.0, unaff_s3_lo[1] == 0.0)) {
                                fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 +
                                                  0x330);
                                switch(iVar3) {
                                case 0xf:
                                case 0x11:
                                case 0x13:
                                case 0x15:
                                  in_stack_000000a0 = '\0';
                                  break;
                                case 0x10:
                                case 0x12:
                                case 0x14:
                                case 0x16:
                                  in_stack_000000a0 = '\x01';
                                }
                                if (in_stack_000000a0 == '\0') {
                                  if (fVar5 < 0.0) {
                                    fVar6 = -1.0;
                                  }
                                }
                                else if (0.0 < fVar5) {
                                  fVar6 = 1.0;
                                }
                                fVar6 = (float)fabsf(fVar5 * fVar6);
                                if (0.2 <= fVar6) {
                                  if (fVar6 < 0.6) {
                                    fVar6 = ((fVar6 - 0.2) / 0.40000004) * 0.5;
                                  }
                                  else {
                                    fVar6 = ((fVar6 - 0.6) / 0.39999998) * 0.5 + 0.5;
                                  }
                                }
                                else {
                                  fVar6 = 0.0;
                                }
                                if (fVar6 != 0.0) {
                                  unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                                  unaff_s3_lo[3] = fVar6;
                                }
                              }
                            }
                            else {
                              fVar6 = 0.0;
                              if (unaff_s3_lo[1] == 0.0) {
                                fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 +
                                                  0x330);
                                switch(iVar3) {
                                case 0xf:
                                case 0x11:
                                case 0x13:
                                case 0x15:
                                  in_stack_000000b0 = '\0';
                                  break;
                                case 0x10:
                                case 0x12:
                                case 0x14:
                                case 0x16:
                                  in_stack_000000b0 = '\x01';
                                }
                                if (in_stack_000000b0 == '\0') {
                                  if (fVar5 < 0.0) {
                                    fVar6 = -1.0;
                                  }
                                }
                                else if (0.0 < fVar5) {
                                  fVar6 = 1.0;
                                }
                                fVar6 = (float)fabsf(fVar5 * fVar6);
                                if (0.2 <= fVar6) {
                                  if (fVar6 < 0.6) {
                                    fVar6 = ((fVar6 - 0.2) / 0.40000004) * 0.5;
                                  }
                                  else {
                                    fVar6 = ((fVar6 - 0.6) / 0.39999998) * 0.5 + 0.5;
                                  }
                                }
                                else {
                                  fVar6 = 0.0;
                                }
                                if (fVar6 != 0.0) {
                                  unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                                  unaff_s3_lo[1] = fVar6;
                                }
                              }
                            }
                          }
                          else {
                            fVar6 = 0.0;
                            if (*unaff_s3_lo == 0.0) {
                              fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 +
                                                0x330);
                              switch(iVar3) {
                              case 0xf:
                              case 0x11:
                              case 0x13:
                              case 0x15:
                                in_stack_000000c0 = '\0';
                                break;
                              case 0x10:
                              case 0x12:
                              case 0x14:
                              case 0x16:
                                in_stack_000000c0 = '\x01';
                              }
                              if (in_stack_000000c0 == '\0') {
                                if (fVar5 < 0.0) {
                                  fVar6 = -1.0;
                                }
                              }
                              else if (0.0 < fVar5) {
                                fVar6 = 1.0;
                              }
                              fVar6 = (float)fabsf(fVar5 * fVar6);
                              if (0.2 <= fVar6) {
                                if (fVar6 < 0.6) {
                                  fVar6 = ((fVar6 - 0.2) / 0.40000004) * 0.5;
                                }
                                else {
                                  fVar6 = ((fVar6 - 0.6) / 0.39999998) * 0.5 + 0.5;
                                }
                              }
                              else {
                                fVar6 = 0.0;
                              }
                              if (fVar6 != 0.0) {
                                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                                *unaff_s3_lo = fVar6;
                              }
                            }
                          }
                        }
                        else {
                          fVar6 = 0.0;
                          if (unaff_s3_lo[2] == 0.0) {
                            fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330
                                              );
                            switch(iVar3) {
                            case 0xf:
                            case 0x11:
                            case 0x13:
                            case 0x15:
                              in_stack_000000d0 = '\0';
                              break;
                            case 0x10:
                            case 0x12:
                            case 0x14:
                            case 0x16:
                              in_stack_000000d0 = '\x01';
                            }
                            if (in_stack_000000d0 == '\0') {
                              if (fVar5 < 0.0) {
                                fVar6 = -1.0;
                              }
                            }
                            else if (0.0 < fVar5) {
                              fVar6 = 1.0;
                            }
                            fVar6 = (float)fabsf(fVar5 * fVar6);
                            if (0.2 <= fVar6) {
                              if (fVar6 < 0.6) {
                                fVar6 = ((fVar6 - 0.2) / 0.40000004) * 0.5;
                              }
                              else {
                                fVar6 = ((fVar6 - 0.6) / 0.36499995) * 0.5 + 0.5;
                              }
                            }
                            else {
                              fVar6 = 0.0;
                            }
                            if (1.0 < fVar6) {
                              fVar6 = 1.0;
                            }
                            if (fVar6 != 0.0) {
                              if ((uVar2 & 0x10) == 0) {
                                unaff_s3_lo[2] = fVar6;
                              }
                              else {
                                unaff_s3_lo[2] = -fVar6;
                              }
                              *(undefined1 *)(unaff_s3_lo + 5) = 0;
                            }
                          }
                        }
                      }
                      else if ((*(uint *)(in_stack_000000e8._4_4_ + 0x10) & uVar1) == 0) {
                        fVar6 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                        switch(iVar3) {
                        case 0xf:
                        case 0x11:
                          if ((fVar6 < -0.75) && ((*unaff_s4_lo & 1) != 0)) {
                            unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                            *unaff_s4_lo = *unaff_s4_lo & 0xfffffffe;
                          }
                          break;
                        case 0x10:
                        case 0x12:
                          if ((0.75 < fVar6) && ((*unaff_s4_lo & 1) != 0)) {
                            unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                            *unaff_s4_lo = *unaff_s4_lo & 0xfffffffe;
                          }
                          break;
                        case 0x13:
                        case 0x15:
                          if ((fVar6 < -0.75) && ((*unaff_s4_lo & 2) != 0)) {
                            unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                            *unaff_s4_lo = *unaff_s4_lo & 0xfffffffd;
                          }
                          break;
                        case 0x14:
                        case 0x16:
                          if ((0.75 < fVar6) && ((*unaff_s4_lo & 2) != 0)) {
                            unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                            *unaff_s4_lo = *unaff_s4_lo & 0xfffffffd;
                          }
                        }
                      }
                    }
                    else {
                      fVar6 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                      switch(iVar3) {
                      case 0xf:
                      case 0x11:
                        if (fVar6 < -0.75) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                        }
                        break;
                      case 0x10:
                      case 0x12:
                        if (0.75 < fVar6) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                        }
                        break;
                      case 0x13:
                      case 0x15:
                        if (fVar6 < -0.75) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                        }
                        break;
                      case 0x14:
                      case 0x16:
                        if (0.75 < fVar6) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                        }
                      }
                    }
                  }
                  if ((uVar2 & 1) == 0) break;
                  if ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0xc)) != 0) {
                    unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                  }
                }
                if ((uVar2 & 2) == 0) break;
                if ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0x14)) != 0) {
                  unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                }
              }
              if ((uVar2 & 4) == 0) break;
              fVar5 = 0.0;
              fVar6 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
              if (fVar6 != 0.0) {
                if (0.1 <= fVar6) {
                  if (fVar6 < 0.5) {
                    fVar5 = ((fVar6 - 0.1) / 0.4) * 0.5;
                  }
                  else {
                    fVar5 = ((fVar6 - 0.5) / 0.5) * 0.5 + 0.5;
                  }
                }
                *unaff_s3_lo = fVar5;
                if (*unaff_s3_lo != 0.0) {
                  unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                }
              }
            }
            if ((uVar2 & 8) == 0) break;
            fVar5 = 0.0;
            fVar6 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
            if (fVar6 != 0.0) {
              if (0.1 <= fVar6) {
                if (fVar6 < 0.5) {
                  fVar5 = ((fVar6 - 0.1) / 0.4) * 0.5;
                }
                else {
                  fVar5 = ((fVar6 - 0.5) / 0.5) * 0.5 + 0.5;
                }
              }
              unaff_s3_lo[1] = fVar5;
              if (fVar5 != 0.0) {
                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
              }
            }
          }
          if ((uVar2 & 0x30) != 0) break;
          if ((uVar2 & 0x40) != 0) {
            fVar5 = 0.0;
            fVar6 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
            if (fVar6 != 0.0) {
              if (0.1 <= fVar6) {
                if (fVar6 < 0.5) {
                  fVar5 = ((fVar6 - 0.1) / 0.4) * 0.5;
                }
                else {
                  fVar5 = ((fVar6 - 0.5) / 0.5) * 0.5 + 0.5;
                }
              }
              unaff_s3_lo[3] = fVar5;
              if (unaff_s3_lo[1] != 0.0) {
                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
              }
            }
          }
        }
      } while ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0xc)) == 0);
      unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
      if ((uVar2 & 0x10) != 0) break;
      unaff_s3_lo[2] = 1.0;
    }
    in_v1_lo = -1.0;
  } while( true );
}

// 0x001c8c38  size 0x8
/* follows Driver_FilterSteering; no call, branch, pointer or constant reference (exception landing
   pad or dead code) */

void Driver_FilterSteering_Orphan3(void)

{
  return;
}

// 0x001c8c40  size 0xc64
void Driver_FilterPedals(uint *param_1,float *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  char cStack_50;
  char cStack_40;
  char cStack_30;
  char cStack_20;
  
  iVar4 = 0;
  puVar5 = (uint *)0x318980;
  uVar1 = param_1[0x31];
  pbVar6 = &DAT_003189e0;
  puVar7 = param_1;
  do {
    uVar2 = puVar7[1];
    if (uVar2 != 0) {
      uVar3 = puVar7[2];
      if ((iVar4 < 0x10) || (0x17 < iVar4)) {
        if ((uVar3 & 1) == 0) {
          if ((uVar3 & 2) == 0) {
            if ((uVar3 & 4) == 0) {
              if ((uVar3 & 8) == 0) {
                if ((uVar3 & 0x30) == 0) {
                  if ((uVar3 & 0x40) != 0) {
                    fVar9 = 0.0;
                    fVar8 = *(float *)(uVar1 + (uint)*pbVar6 * 0x10 + 0x1b0);
                    if (fVar8 != 0.0) {
                      if (0.2 <= fVar8) {
                        if (fVar8 < 0.6) {
                          fVar9 = ((fVar8 - 0.2) / 0.40000004) * 0.5;
                        }
                        else {
                          fVar9 = ((fVar8 - 0.6) / 0.39999998) * 0.5 + 0.5;
                        }
                      }
                      param_2[3] = fVar9;
                      if (param_2[1] != 0.0) {
                        param_2[4] = (float)((uint)param_2[4] | uVar2);
                      }
                    }
                  }
                }
                else if ((*puVar5 & *(uint *)(uVar1 + 0xc)) != 0) {
                  param_2[4] = (float)((uint)param_2[4] | uVar2);
                  if ((uVar3 & 0x10) == 0) {
                    param_2[2] = 1.0;
                  }
                  else {
                    param_2[2] = -1.0;
                  }
                }
              }
              else {
                fVar9 = 0.0;
                fVar8 = *(float *)(uVar1 + (uint)*pbVar6 * 0x10 + 0x1b0);
                if (fVar8 != 0.0) {
                  if (0.2 <= fVar8) {
                    if (fVar8 < 0.75) {
                      fVar9 = ((fVar8 - 0.2) / 0.55) * 0.5;
                    }
                    else {
                      fVar9 = ((fVar8 - 0.75) / 0.25) * 0.5 + 0.5;
                    }
                  }
                  param_2[1] = fVar9;
                  if (fVar9 != 0.0) {
                    param_2[4] = (float)((uint)param_2[4] | uVar2);
                  }
                }
              }
            }
            else {
              fVar9 = 0.0;
              fVar8 = *(float *)(uVar1 + (uint)*pbVar6 * 0x10 + 0x1b0);
              if (fVar8 != 0.0) {
                if (0.2 <= fVar8) {
                  if (fVar8 < 0.6) {
                    fVar9 = ((fVar8 - 0.2) / 0.40000004) * 0.5;
                  }
                  else {
                    fVar9 = ((fVar8 - 0.6) / 0.39999998) * 0.5 + 0.5;
                  }
                }
                *param_2 = fVar9;
                if (*param_2 != 0.0) {
                  param_2[4] = (float)((uint)param_2[4] | uVar2);
                }
              }
            }
          }
          else if ((*puVar5 & *(uint *)(uVar1 + 0x14)) != 0) {
            param_2[4] = (float)((uint)param_2[4] | uVar2);
          }
        }
        else if ((*puVar5 & *(uint *)(uVar1 + 0xc)) != 0) {
          param_2[4] = (float)((uint)param_2[4] | uVar2);
        }
      }
      else if ((uVar3 & 1) == 0) {
        if ((uVar3 & 2) == 0) {
          if ((uVar3 & 0x30) == 0) {
            if ((uVar3 & 4) == 0) {
              if ((uVar3 & 8) == 0) {
                if (((uVar3 & 0x40) != 0) && (fVar9 = 0.0, param_2[1] == 0.0)) {
                  fVar8 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
                  if (iVar4 - 0x10U < 8) {
                    /* WARNING: Switch is manually overridden */
                    switch(iVar4 - 0x10U) {
                    case 0:
                      cStack_50 = '\0';
                      break;
                    case 1:
                      cStack_50 = '\x01';
                    }
                  }
                  if (cStack_50 == '\0') {
                    if (fVar8 < 0.0) {
                      fVar9 = -1.0;
                    }
                  }
                  else if (0.0 < fVar8) {
                    fVar9 = 1.0;
                  }
                  fVar9 = (float)fabsf(fVar8 * fVar9);
                  if (0.2 <= fVar9) {
                    if (fVar9 < 0.6) {
                      fVar9 = ((fVar9 - 0.2) / 0.40000004) * 0.5;
                    }
                    else {
                      fVar9 = ((fVar9 - 0.6) / 0.39999998) * 0.5 + 0.5;
                    }
                  }
                  else {
                    fVar9 = 0.0;
                  }
                  if (fVar9 != 0.0) {
                    param_2[4] = (float)((uint)param_2[4] | uVar2);
                    param_2[3] = fVar9;
                  }
                }
              }
              else {
                fVar9 = 0.0;
                if (param_2[1] == 0.0) {
                  fVar8 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
                  if (iVar4 - 0x10U < 8) {
                    /* WARNING: Switch is manually overridden */
                    switch(iVar4 - 0x10U) {
                    case 0:
                      cStack_40 = '\0';
                      break;
                    case 1:
                      cStack_40 = '\x01';
                    }
                  }
                  if (cStack_40 == '\0') {
                    if (fVar8 < 0.0) {
                      fVar9 = -1.0;
                    }
                  }
                  else if (0.0 < fVar8) {
                    fVar9 = 1.0;
                  }
                  fVar9 = (float)fabsf(fVar8 * fVar9);
                  if (0.2 <= fVar9) {
                    if (fVar9 < 0.75) {
                      fVar9 = ((fVar9 - 0.2) / 0.55) * 0.5;
                    }
                    else {
                      fVar9 = ((fVar9 - 0.75) / 0.25) * 0.5 + 0.5;
                    }
                  }
                  else {
                    fVar9 = 0.0;
                  }
                  if (fVar9 != 0.0) {
                    param_2[4] = (float)((uint)param_2[4] | uVar2);
                    param_2[1] = fVar9;
                  }
                }
              }
            }
            else {
              fVar9 = 0.0;
              if (*param_2 == 0.0) {
                fVar8 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
                if (iVar4 - 0x10U < 8) {
                    /* WARNING: Switch is manually overridden */
                  switch(iVar4 - 0x10U) {
                  case 0:
                    cStack_30 = '\0';
                    break;
                  case 1:
                    cStack_30 = '\x01';
                  }
                }
                if (cStack_30 == '\0') {
                  if (fVar8 < 0.0) {
                    fVar9 = -1.0;
                  }
                }
                else if (0.0 < fVar8) {
                  fVar9 = 1.0;
                }
                fVar9 = (float)fabsf(fVar8 * fVar9);
                if (0.2 <= fVar9) {
                  if (fVar9 < 0.6) {
                    fVar9 = ((fVar9 - 0.2) / 0.40000004) * 0.5;
                  }
                  else {
                    fVar9 = ((fVar9 - 0.6) / 0.39999998) * 0.5 + 0.5;
                  }
                }
                else {
                  fVar9 = 0.0;
                }
                if (fVar9 != 0.0) {
                  param_2[4] = (float)((uint)param_2[4] | uVar2);
                  *param_2 = fVar9;
                }
              }
            }
          }
          else {
            fVar9 = 0.0;
            if (param_2[2] == 0.0) {
              fVar8 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
              if (iVar4 - 0x10U < 8) {
                    /* WARNING: Switch is manually overridden */
                switch(iVar4 - 0x10U) {
                case 0:
                  cStack_20 = '\0';
                  break;
                case 1:
                  cStack_20 = '\x01';
                }
              }
              if (cStack_20 == '\0') {
                if (fVar8 < 0.0) {
                  fVar9 = -1.0;
                }
              }
              else if (0.0 < fVar8) {
                fVar9 = 1.0;
              }
              fVar9 = (float)fabsf(fVar8 * fVar9);
              if (0.05 <= fVar9) {
                if (fVar9 < 0.5) {
                  fVar9 = ((fVar9 - 0.05) / 0.45) * 0.5;
                }
                else {
                  fVar9 = ((fVar9 - 0.5) / 0.45) * 0.5 + 0.5;
                }
              }
              else {
                fVar9 = 0.0;
              }
              if (1.0 < fVar9) {
                fVar9 = 1.0;
              }
              if (fVar9 != 0.0) {
                if ((uVar3 & 0x10) == 0) {
                  param_2[2] = fVar9;
                }
                else {
                  param_2[2] = -fVar9;
                }
                *(undefined1 *)(param_2 + 5) = 1;
              }
            }
          }
        }
        else if ((*(uint *)(param_3 + 0x10) & uVar2) == 0) {
          fVar9 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
          if (iVar4 - 0x10U < 8) {
                    /* WARNING: Switch is manually overridden */
            switch(iVar4 - 0x10U) {
            default:
              if ((fVar9 < -0.75) && ((*param_1 & 1) != 0)) {
                param_2[4] = (float)((uint)param_2[4] | uVar2);
                *param_1 = *param_1 & 0xfffffffe;
              }
              break;
            case 1:
            case 3:
              if ((0.75 < fVar9) && ((*param_1 & 1) != 0)) {
                param_2[4] = (float)((uint)param_2[4] | uVar2);
                *param_1 = *param_1 & 0xfffffffe;
              }
              break;
            case 4:
              if ((fVar9 < -0.75) && ((*param_1 & 2) != 0)) {
                param_2[4] = (float)((uint)param_2[4] | uVar2);
                *param_1 = *param_1 & 0xfffffffd;
              }
              break;
            case 5:
              if ((0.75 < fVar9) && ((*param_1 & 2) != 0)) {
                param_2[4] = (float)((uint)param_2[4] | uVar2);
                *param_1 = *param_1 & 0xfffffffd;
              }
            }
          }
        }
      }
      else {
        fVar9 = *(float *)(uVar1 + (uint)(byte)*puVar5 * 0x10 + 0x330);
        if (iVar4 - 0x10U < 8) {
                    /* WARNING: Switch is manually overridden */
          switch(iVar4 - 0x10U) {
          default:
            if (fVar9 < -0.75) {
              param_2[4] = (float)((uint)param_2[4] | uVar2);
            }
            break;
          case 1:
          case 3:
            if (0.75 < fVar9) {
              param_2[4] = (float)((uint)param_2[4] | uVar2);
            }
            break;
          case 4:
            if (fVar9 < -0.75) {
              param_2[4] = (float)((uint)param_2[4] | uVar2);
            }
            break;
          case 5:
            if (0.75 < fVar9) {
              param_2[4] = (float)((uint)param_2[4] | uVar2);
            }
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
    puVar7 = puVar7 + 2;
    puVar5 = puVar5 + 1;
    pbVar6 = pbVar6 + 4;
  } while (iVar4 < 0x18);
  return;
}

// 0x001c98f0  size 0x4c
/* follows Driver_FilterPedals; no call, branch, pointer or constant reference (exception landing
   pad or dead code) */

void Driver_FilterPedals_Orphan2(void)

{
  uint uVar1;
  uint unaff_s1_lo;
  int unaff_s2_lo;
  float *unaff_s3_lo;
  uint *unaff_s4_lo;
  int iVar2;
  int unaff_s5_lo;
  uint *unaff_s6_lo;
  byte *unaff_s7_lo;
  int iVar3;
  int unaff_s8_lo;
  float fVar4;
  float fVar5;
  float in_f0;
  float in_f3;
  char in_stack_000000a0;
  char in_stack_000000b0;
  char in_stack_000000c0;
  char in_stack_000000d0;
  undefined8 in_stack_000000e8;
  
  do {
    unaff_s3_lo[1] = in_f3;
    if (in_f0 != in_f3) {
      unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
    }
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                do {
                  iVar3 = unaff_s8_lo;
                  iVar2 = unaff_s5_lo;
                  unaff_s5_lo = iVar2 + 1;
                  unaff_s8_lo = iVar3 + 8;
                  unaff_s6_lo = unaff_s6_lo + 1;
                  unaff_s7_lo = unaff_s7_lo + 4;
                  if (0x17 < unaff_s5_lo) {
                    return;
                  }
                  unaff_s1_lo = *(uint *)(iVar3 + 0xc);
                } while (unaff_s1_lo == 0);
                uVar1 = *(uint *)(iVar3 + 0x10);
                if ((unaff_s5_lo < 0x10) || (0x17 < unaff_s5_lo)) break;
                if ((uVar1 & 1) == 0) {
                  if ((uVar1 & 2) == 0) {
                    if ((uVar1 & 0x30) == 0) {
                      if ((uVar1 & 4) == 0) {
                        if ((uVar1 & 8) == 0) {
                          if (((uVar1 & 0x40) != 0) && (fVar5 = 0.0, unaff_s3_lo[1] == 0.0)) {
                            fVar4 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330
                                              );
                            switch(iVar2) {
                            case 0xf:
                            case 0x11:
                            case 0x13:
                            case 0x15:
                              in_stack_000000a0 = '\0';
                              break;
                            case 0x10:
                            case 0x12:
                            case 0x14:
                            case 0x16:
                              in_stack_000000a0 = '\x01';
                            }
                            if (in_stack_000000a0 == '\0') {
                              if (fVar4 < 0.0) {
                                fVar5 = -1.0;
                              }
                            }
                            else if (0.0 < fVar4) {
                              fVar5 = 1.0;
                            }
                            fVar5 = (float)fabsf(fVar4 * fVar5);
                            if (0.2 <= fVar5) {
                              if (fVar5 < 0.6) {
                                fVar5 = ((fVar5 - 0.2) / 0.40000004) * 0.5;
                              }
                              else {
                                fVar5 = ((fVar5 - 0.6) / 0.39999998) * 0.5 + 0.5;
                              }
                            }
                            else {
                              fVar5 = 0.0;
                            }
                            if (fVar5 != 0.0) {
                              unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                              unaff_s3_lo[3] = fVar5;
                            }
                          }
                        }
                        else {
                          fVar5 = 0.0;
                          if (unaff_s3_lo[1] == 0.0) {
                            fVar4 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330
                                              );
                            switch(iVar2) {
                            case 0xf:
                            case 0x11:
                            case 0x13:
                            case 0x15:
                              in_stack_000000b0 = '\0';
                              break;
                            case 0x10:
                            case 0x12:
                            case 0x14:
                            case 0x16:
                              in_stack_000000b0 = '\x01';
                            }
                            if (in_stack_000000b0 == '\0') {
                              if (fVar4 < 0.0) {
                                fVar5 = -1.0;
                              }
                            }
                            else if (0.0 < fVar4) {
                              fVar5 = 1.0;
                            }
                            fVar5 = (float)fabsf(fVar4 * fVar5);
                            if (0.2 <= fVar5) {
                              if (fVar5 < 0.75) {
                                fVar5 = ((fVar5 - 0.2) / 0.55) * 0.5;
                              }
                              else {
                                fVar5 = ((fVar5 - 0.75) / 0.25) * 0.5 + 0.5;
                              }
                            }
                            else {
                              fVar5 = 0.0;
                            }
                            if (fVar5 != 0.0) {
                              unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                              unaff_s3_lo[1] = fVar5;
                            }
                          }
                        }
                      }
                      else {
                        fVar5 = 0.0;
                        if (*unaff_s3_lo == 0.0) {
                          fVar4 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                          switch(iVar2) {
                          case 0xf:
                          case 0x11:
                          case 0x13:
                          case 0x15:
                            in_stack_000000c0 = '\0';
                            break;
                          case 0x10:
                          case 0x12:
                          case 0x14:
                          case 0x16:
                            in_stack_000000c0 = '\x01';
                          }
                          if (in_stack_000000c0 == '\0') {
                            if (fVar4 < 0.0) {
                              fVar5 = -1.0;
                            }
                          }
                          else if (0.0 < fVar4) {
                            fVar5 = 1.0;
                          }
                          fVar5 = (float)fabsf(fVar4 * fVar5);
                          if (0.2 <= fVar5) {
                            if (fVar5 < 0.6) {
                              fVar5 = ((fVar5 - 0.2) / 0.40000004) * 0.5;
                            }
                            else {
                              fVar5 = ((fVar5 - 0.6) / 0.39999998) * 0.5 + 0.5;
                            }
                          }
                          else {
                            fVar5 = 0.0;
                          }
                          if (fVar5 != 0.0) {
                            unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                            *unaff_s3_lo = fVar5;
                          }
                        }
                      }
                    }
                    else {
                      fVar5 = 0.0;
                      if (unaff_s3_lo[2] == 0.0) {
                        fVar4 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                        switch(iVar2) {
                        case 0xf:
                        case 0x11:
                        case 0x13:
                        case 0x15:
                          in_stack_000000d0 = '\0';
                          break;
                        case 0x10:
                        case 0x12:
                        case 0x14:
                        case 0x16:
                          in_stack_000000d0 = '\x01';
                        }
                        if (in_stack_000000d0 == '\0') {
                          if (fVar4 < 0.0) {
                            fVar5 = -1.0;
                          }
                        }
                        else if (0.0 < fVar4) {
                          fVar5 = 1.0;
                        }
                        fVar5 = (float)fabsf(fVar4 * fVar5);
                        if (0.05 <= fVar5) {
                          if (fVar5 < 0.5) {
                            fVar5 = ((fVar5 - 0.05) / 0.45) * 0.5;
                          }
                          else {
                            fVar5 = ((fVar5 - 0.5) / 0.45) * 0.5 + 0.5;
                          }
                        }
                        else {
                          fVar5 = 0.0;
                        }
                        if (1.0 < fVar5) {
                          fVar5 = 1.0;
                        }
                        if (fVar5 != 0.0) {
                          if ((uVar1 & 0x10) == 0) {
                            unaff_s3_lo[2] = fVar5;
                          }
                          else {
                            unaff_s3_lo[2] = -fVar5;
                          }
                          *(undefined1 *)(unaff_s3_lo + 5) = 1;
                        }
                      }
                    }
                  }
                  else if ((*(uint *)(in_stack_000000e8._4_4_ + 0x10) & unaff_s1_lo) == 0) {
                    fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                    switch(iVar2) {
                    case 0xf:
                    case 0x11:
                      if ((fVar5 < -0.75) && ((*unaff_s4_lo & 1) != 0)) {
                        unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                        *unaff_s4_lo = *unaff_s4_lo & 0xfffffffe;
                      }
                      break;
                    case 0x10:
                    case 0x12:
                      if ((0.75 < fVar5) && ((*unaff_s4_lo & 1) != 0)) {
                        unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                        *unaff_s4_lo = *unaff_s4_lo & 0xfffffffe;
                      }
                      break;
                    case 0x13:
                    case 0x15:
                      if ((fVar5 < -0.75) && ((*unaff_s4_lo & 2) != 0)) {
                        unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                        *unaff_s4_lo = *unaff_s4_lo & 0xfffffffd;
                      }
                      break;
                    case 0x14:
                    case 0x16:
                      if ((0.75 < fVar5) && ((*unaff_s4_lo & 2) != 0)) {
                        unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                        *unaff_s4_lo = *unaff_s4_lo & 0xfffffffd;
                      }
                    }
                  }
                }
                else {
                  fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                  switch(iVar2) {
                  case 0xf:
                  case 0x11:
                    if (fVar5 < -0.75) {
                      unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                    }
                    break;
                  case 0x10:
                  case 0x12:
                    if (0.75 < fVar5) {
                      unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                    }
                    break;
                  case 0x13:
                  case 0x15:
                    if (fVar5 < -0.75) {
                      unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                    }
                    break;
                  case 0x14:
                  case 0x16:
                    if (0.75 < fVar5) {
                      unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
                    }
                  }
                }
              }
              if ((uVar1 & 1) == 0) break;
              if ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0xc)) != 0) {
                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
              }
            }
            if ((uVar1 & 2) == 0) break;
            if ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0x14)) != 0) {
              unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
            }
          }
          if ((uVar1 & 4) == 0) break;
          fVar5 = 0.0;
          fVar4 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
          if (fVar4 != 0.0) {
            if (0.2 <= fVar4) {
              if (fVar4 < 0.6) {
                fVar5 = ((fVar4 - 0.2) / 0.40000004) * 0.5;
              }
              else {
                fVar5 = ((fVar4 - 0.6) / 0.39999998) * 0.5 + 0.5;
              }
            }
            *unaff_s3_lo = fVar5;
            if (*unaff_s3_lo != 0.0) {
              unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
            }
          }
        }
        if ((uVar1 & 8) != 0) break;
        if ((uVar1 & 0x30) == 0) {
          if ((uVar1 & 0x40) != 0) {
            fVar5 = 0.0;
            fVar4 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
            if (fVar4 != 0.0) {
              if (0.2 <= fVar4) {
                if (fVar4 < 0.6) {
                  fVar5 = ((fVar4 - 0.2) / 0.40000004) * 0.5;
                }
                else {
                  fVar5 = ((fVar4 - 0.6) / 0.39999998) * 0.5 + 0.5;
                }
              }
              unaff_s3_lo[3] = fVar5;
              if (unaff_s3_lo[1] != 0.0) {
                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
              }
            }
          }
        }
        else if ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0xc)) != 0) {
          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | unaff_s1_lo);
          if ((uVar1 & 0x10) == 0) {
            unaff_s3_lo[2] = 1.0;
          }
          else {
            unaff_s3_lo[2] = -1.0;
          }
        }
      }
      in_f3 = 0.0;
      fVar5 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
    } while (fVar5 == 0.0);
    if (0.2 <= fVar5) {
      if (fVar5 < 0.75) {
        in_f3 = ((fVar5 - 0.2) / 0.55) * 0.5;
      }
      else {
        in_f3 = ((fVar5 - 0.75) / 0.25) * 0.5 + 0.5;
      }
    }
    in_f0 = 0.0;
  } while( true );
}

// 0x001c9940  size 0x48
/* follows Driver_FilterPedals; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Driver_FilterPedals_Orphan1(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_s2_lo;
  float *unaff_s3_lo;
  uint *unaff_s4_lo;
  int iVar3;
  int unaff_s5_lo;
  uint *unaff_s6_lo;
  byte *unaff_s7_lo;
  int iVar4;
  int unaff_s8_lo;
  float fVar5;
  float fVar6;
  char in_stack_000000a0;
  char in_stack_000000b0;
  char in_stack_000000c0;
  char in_stack_000000d0;
  undefined8 in_stack_000000e8;
  
  do {
    unaff_s3_lo[2] = -1.0;
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    do {
                      iVar4 = unaff_s8_lo;
                      iVar3 = unaff_s5_lo;
                      unaff_s5_lo = iVar3 + 1;
                      unaff_s8_lo = iVar4 + 8;
                      unaff_s6_lo = unaff_s6_lo + 1;
                      unaff_s7_lo = unaff_s7_lo + 4;
                      if (0x17 < unaff_s5_lo) {
                        return;
                      }
                      uVar1 = *(uint *)(iVar4 + 0xc);
                    } while (uVar1 == 0);
                    uVar2 = *(uint *)(iVar4 + 0x10);
                    if ((unaff_s5_lo < 0x10) || (0x17 < unaff_s5_lo)) break;
                    if ((uVar2 & 1) == 0) {
                      if ((uVar2 & 2) == 0) {
                        if ((uVar2 & 0x30) == 0) {
                          if ((uVar2 & 4) == 0) {
                            if ((uVar2 & 8) == 0) {
                              if (((uVar2 & 0x40) != 0) && (fVar6 = 0.0, unaff_s3_lo[1] == 0.0)) {
                                fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 +
                                                  0x330);
                                switch(iVar3) {
                                case 0xf:
                                case 0x11:
                                case 0x13:
                                case 0x15:
                                  in_stack_000000a0 = '\0';
                                  break;
                                case 0x10:
                                case 0x12:
                                case 0x14:
                                case 0x16:
                                  in_stack_000000a0 = '\x01';
                                }
                                if (in_stack_000000a0 == '\0') {
                                  if (fVar5 < 0.0) {
                                    fVar6 = -1.0;
                                  }
                                }
                                else if (0.0 < fVar5) {
                                  fVar6 = 1.0;
                                }
                                fVar6 = (float)fabsf(fVar5 * fVar6);
                                if (0.2 <= fVar6) {
                                  if (fVar6 < 0.6) {
                                    fVar6 = ((fVar6 - 0.2) / 0.40000004) * 0.5;
                                  }
                                  else {
                                    fVar6 = ((fVar6 - 0.6) / 0.39999998) * 0.5 + 0.5;
                                  }
                                }
                                else {
                                  fVar6 = 0.0;
                                }
                                if (fVar6 != 0.0) {
                                  unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                                  unaff_s3_lo[3] = fVar6;
                                }
                              }
                            }
                            else {
                              fVar6 = 0.0;
                              if (unaff_s3_lo[1] == 0.0) {
                                fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 +
                                                  0x330);
                                switch(iVar3) {
                                case 0xf:
                                case 0x11:
                                case 0x13:
                                case 0x15:
                                  in_stack_000000b0 = '\0';
                                  break;
                                case 0x10:
                                case 0x12:
                                case 0x14:
                                case 0x16:
                                  in_stack_000000b0 = '\x01';
                                }
                                if (in_stack_000000b0 == '\0') {
                                  if (fVar5 < 0.0) {
                                    fVar6 = -1.0;
                                  }
                                }
                                else if (0.0 < fVar5) {
                                  fVar6 = 1.0;
                                }
                                fVar6 = (float)fabsf(fVar5 * fVar6);
                                if (0.2 <= fVar6) {
                                  if (fVar6 < 0.75) {
                                    fVar6 = ((fVar6 - 0.2) / 0.55) * 0.5;
                                  }
                                  else {
                                    fVar6 = ((fVar6 - 0.75) / 0.25) * 0.5 + 0.5;
                                  }
                                }
                                else {
                                  fVar6 = 0.0;
                                }
                                if (fVar6 != 0.0) {
                                  unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                                  unaff_s3_lo[1] = fVar6;
                                }
                              }
                            }
                          }
                          else {
                            fVar6 = 0.0;
                            if (*unaff_s3_lo == 0.0) {
                              fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 +
                                                0x330);
                              switch(iVar3) {
                              case 0xf:
                              case 0x11:
                              case 0x13:
                              case 0x15:
                                in_stack_000000c0 = '\0';
                                break;
                              case 0x10:
                              case 0x12:
                              case 0x14:
                              case 0x16:
                                in_stack_000000c0 = '\x01';
                              }
                              if (in_stack_000000c0 == '\0') {
                                if (fVar5 < 0.0) {
                                  fVar6 = -1.0;
                                }
                              }
                              else if (0.0 < fVar5) {
                                fVar6 = 1.0;
                              }
                              fVar6 = (float)fabsf(fVar5 * fVar6);
                              if (0.2 <= fVar6) {
                                if (fVar6 < 0.6) {
                                  fVar6 = ((fVar6 - 0.2) / 0.40000004) * 0.5;
                                }
                                else {
                                  fVar6 = ((fVar6 - 0.6) / 0.39999998) * 0.5 + 0.5;
                                }
                              }
                              else {
                                fVar6 = 0.0;
                              }
                              if (fVar6 != 0.0) {
                                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                                *unaff_s3_lo = fVar6;
                              }
                            }
                          }
                        }
                        else {
                          fVar6 = 0.0;
                          if (unaff_s3_lo[2] == 0.0) {
                            fVar5 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330
                                              );
                            switch(iVar3) {
                            case 0xf:
                            case 0x11:
                            case 0x13:
                            case 0x15:
                              in_stack_000000d0 = '\0';
                              break;
                            case 0x10:
                            case 0x12:
                            case 0x14:
                            case 0x16:
                              in_stack_000000d0 = '\x01';
                            }
                            if (in_stack_000000d0 == '\0') {
                              if (fVar5 < 0.0) {
                                fVar6 = -1.0;
                              }
                            }
                            else if (0.0 < fVar5) {
                              fVar6 = 1.0;
                            }
                            fVar6 = (float)fabsf(fVar5 * fVar6);
                            if (0.05 <= fVar6) {
                              if (fVar6 < 0.5) {
                                fVar6 = ((fVar6 - 0.05) / 0.45) * 0.5;
                              }
                              else {
                                fVar6 = ((fVar6 - 0.5) / 0.45) * 0.5 + 0.5;
                              }
                            }
                            else {
                              fVar6 = 0.0;
                            }
                            if (1.0 < fVar6) {
                              fVar6 = 1.0;
                            }
                            if (fVar6 != 0.0) {
                              if ((uVar2 & 0x10) == 0) {
                                unaff_s3_lo[2] = fVar6;
                              }
                              else {
                                unaff_s3_lo[2] = -fVar6;
                              }
                              *(undefined1 *)(unaff_s3_lo + 5) = 1;
                            }
                          }
                        }
                      }
                      else if ((*(uint *)(in_stack_000000e8._4_4_ + 0x10) & uVar1) == 0) {
                        fVar6 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                        switch(iVar3) {
                        case 0xf:
                        case 0x11:
                          if ((fVar6 < -0.75) && ((*unaff_s4_lo & 1) != 0)) {
                            unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                            *unaff_s4_lo = *unaff_s4_lo & 0xfffffffe;
                          }
                          break;
                        case 0x10:
                        case 0x12:
                          if ((0.75 < fVar6) && ((*unaff_s4_lo & 1) != 0)) {
                            unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                            *unaff_s4_lo = *unaff_s4_lo & 0xfffffffe;
                          }
                          break;
                        case 0x13:
                        case 0x15:
                          if ((fVar6 < -0.75) && ((*unaff_s4_lo & 2) != 0)) {
                            unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                            *unaff_s4_lo = *unaff_s4_lo & 0xfffffffd;
                          }
                          break;
                        case 0x14:
                        case 0x16:
                          if ((0.75 < fVar6) && ((*unaff_s4_lo & 2) != 0)) {
                            unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                            *unaff_s4_lo = *unaff_s4_lo & 0xfffffffd;
                          }
                        }
                      }
                    }
                    else {
                      fVar6 = *(float *)(unaff_s2_lo + (uint)(byte)*unaff_s6_lo * 0x10 + 0x330);
                      switch(iVar3) {
                      case 0xf:
                      case 0x11:
                        if (fVar6 < -0.75) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                        }
                        break;
                      case 0x10:
                      case 0x12:
                        if (0.75 < fVar6) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                        }
                        break;
                      case 0x13:
                      case 0x15:
                        if (fVar6 < -0.75) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                        }
                        break;
                      case 0x14:
                      case 0x16:
                        if (0.75 < fVar6) {
                          unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                        }
                      }
                    }
                  }
                  if ((uVar2 & 1) == 0) break;
                  if ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0xc)) != 0) {
                    unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                  }
                }
                if ((uVar2 & 2) == 0) break;
                if ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0x14)) != 0) {
                  unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                }
              }
              if ((uVar2 & 4) == 0) break;
              fVar6 = 0.0;
              fVar5 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
              if (fVar5 != 0.0) {
                if (0.2 <= fVar5) {
                  if (fVar5 < 0.6) {
                    fVar6 = ((fVar5 - 0.2) / 0.40000004) * 0.5;
                  }
                  else {
                    fVar6 = ((fVar5 - 0.6) / 0.39999998) * 0.5 + 0.5;
                  }
                }
                *unaff_s3_lo = fVar6;
                if (*unaff_s3_lo != 0.0) {
                  unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
                }
              }
            }
            if ((uVar2 & 8) == 0) break;
            fVar6 = 0.0;
            fVar5 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
            if (fVar5 != 0.0) {
              if (0.2 <= fVar5) {
                if (fVar5 < 0.75) {
                  fVar6 = ((fVar5 - 0.2) / 0.55) * 0.5;
                }
                else {
                  fVar6 = ((fVar5 - 0.75) / 0.25) * 0.5 + 0.5;
                }
              }
              unaff_s3_lo[1] = fVar6;
              if (fVar6 != 0.0) {
                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
              }
            }
          }
          if ((uVar2 & 0x30) != 0) break;
          if ((uVar2 & 0x40) != 0) {
            fVar6 = 0.0;
            fVar5 = *(float *)(unaff_s2_lo + (uint)*unaff_s7_lo * 0x10 + 0x1b0);
            if (fVar5 != 0.0) {
              if (0.2 <= fVar5) {
                if (fVar5 < 0.6) {
                  fVar6 = ((fVar5 - 0.2) / 0.40000004) * 0.5;
                }
                else {
                  fVar6 = ((fVar5 - 0.6) / 0.39999998) * 0.5 + 0.5;
                }
              }
              unaff_s3_lo[3] = fVar6;
              if (unaff_s3_lo[1] != 0.0) {
                unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
              }
            }
          }
        }
      } while ((*unaff_s6_lo & *(uint *)(unaff_s2_lo + 0xc)) == 0);
      unaff_s3_lo[4] = (float)((uint)unaff_s3_lo[4] | uVar1);
      if ((uVar2 & 0x10) != 0) break;
      unaff_s3_lo[2] = 1.0;
    }
  } while( true );
}

// 0x001c9990  size 0x8
/* follows Driver_FilterPedals; no call, branch, pointer or constant reference (exception landing
   pad or dead code) */

void Driver_FilterPedals_Orphan3(void)

{
  return;
}

// 0x001c99b0  size 0xc4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceTask_CreateAiDrivers(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  *puVar1 = 0;
  _g_AiDrivers = (undefined4 *)Mem_Alloc16(0x14,0x430750);
  iVar4 = 0;
  *_g_AiDrivers = 0;
  _g_AiDrivers[1] = 0;
  _g_AiDrivers[2] = 0;
  _g_AiDrivers[3] = 0;
  _g_AiDrivers[4] = 0;
  lVar3 = GameState_GetTotalCarCount();
  if (0 < lVar3) {
    do {
      Driver_CreateAi(0x430750,iVar4);
      iVar4 = iVar4 + 1;
      iVar2 = GameState_GetTotalCarCount();
    } while (iVar4 < iVar2);
  }
  puVar1[1] = 0;
  *(code **)(param_1 + 0x1c) = Driver_UpdateAll;
  return;
}

// 0x001c9a80  size 0x378
void Driver_InitController(uint *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  
  *param_1 = 0;
  uVar9 = (ulong)param_2;
  uVar2 = (uint)(uVar9 & 1);
  if (((long)uVar9 < 0) && ((uVar9 & 1) != 0)) {
    uVar2 = uVar2 - 2;
  }
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[0x1a657] = 0;
  *(undefined1 *)(param_1 + 0x1a658) = 2;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)((int)param_1 + 0x1cd) = 0;
  *(undefined1 *)((int)param_1 + 0x1ce) = 0;
  *(undefined1 *)((int)param_1 + 0x1cf) = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x6d] = param_1[0x67];
  param_1[0x6e] = param_1[0x68];
  param_1[0x6f] = param_1[0x69];
  param_1[0x70] = param_1[0x6a];
  param_1[0x71] = param_1[0x6b];
  *(char *)(param_1 + 0x72) = (char)param_1[0x6c];
  param_1[0x34] = 0;
  uVar2 = Pad_GetPort((char)param_1[1],(char)param_1[2]);
  param_1[0x34] = uVar2;
  Driver_ReadPad(param_1 + 3,param_1[1]);
  if (((param_1[0x34] != 0) &&
      (lVar3 = (**(code **)(*(int *)(param_1[0x34] + 4) + 8))(), lVar3 != 0)) &&
     (lVar3 = (**(code **)(*(int *)(param_1[0x34] + 4) + 0xc))(param_1[0x34],0xffffffffffffffff),
     lVar3 != 0)) {
    *param_1 = *param_1 | 1;
  }
  uVar2 = Wheel_GetDeviceName(param_2);
  param_1[0x66] = uVar2;
  if ((param_1[0x66] != 0) && (lVar3 = Wheel_IsActive(), lVar3 == 0)) {
    *param_1 = *param_1 | 2;
    Driver_ReadWheel(param_1 + 0x35,param_1[1]);
  }
  lVar3 = GameState_GetPlayerCount();
  if ((long)uVar9 < lVar3) {
    iVar6 = 0;
    puVar4 = param_1;
    do {
      *(undefined1 *)((int)puVar4 + 0x1dd) = 0;
      iVar6 = iVar6 + 8;
      *(undefined1 *)((int)puVar4 + 0x1de) = 0;
      *(undefined2 *)(puVar4 + 0x78) = 0;
      *(undefined1 *)((int)puVar4 + 0x1df) = 0;
      puVar4[0x79] = 0;
      *(undefined1 *)((int)puVar4 + 0x1e9) = 0;
      *(undefined1 *)((int)puVar4 + 0x1ea) = 0;
      *(undefined2 *)(puVar4 + 0x7b) = 0;
      *(undefined1 *)((int)puVar4 + 0x1eb) = 0;
      puVar4[0x7c] = 0;
      *(undefined1 *)((int)puVar4 + 0x1f5) = 0;
      *(undefined1 *)((int)puVar4 + 0x1f6) = 0;
      *(undefined2 *)(puVar4 + 0x7e) = 0;
      *(undefined1 *)((int)puVar4 + 0x1f7) = 0;
      puVar4[0x7f] = 0;
      *(undefined1 *)((int)puVar4 + 0x201) = 0;
      *(undefined1 *)((int)puVar4 + 0x202) = 0;
      *(undefined2 *)(puVar4 + 0x81) = 0;
      *(undefined1 *)((int)puVar4 + 0x203) = 0;
      puVar4[0x82] = 0;
      *(undefined1 *)((int)puVar4 + 0x20d) = 0;
      *(undefined1 *)((int)puVar4 + 0x20e) = 0;
      *(undefined2 *)(puVar4 + 0x84) = 0;
      *(undefined1 *)((int)puVar4 + 0x20f) = 0;
      puVar4[0x85] = 0;
      *(undefined1 *)((int)puVar4 + 0x219) = 0;
      *(undefined1 *)((int)puVar4 + 0x21a) = 0;
      *(undefined2 *)(puVar4 + 0x87) = 0;
      *(undefined1 *)((int)puVar4 + 0x21b) = 0;
      puVar4[0x88] = 0;
      *(undefined1 *)((int)puVar4 + 0x225) = 0;
      *(undefined1 *)((int)puVar4 + 0x226) = 0;
      *(undefined2 *)(puVar4 + 0x8a) = 0;
      *(undefined1 *)((int)puVar4 + 0x227) = 0;
      puVar4[0x8b] = 0;
      *(undefined1 *)((int)puVar4 + 0x231) = 0;
      *(undefined1 *)((int)puVar4 + 0x232) = 0;
      *(undefined2 *)(puVar4 + 0x8d) = 0;
      *(undefined1 *)((int)puVar4 + 0x233) = 0;
      puVar4[0x8e] = 0;
      puVar4 = puVar4 + 0x18;
    } while (iVar6 < 36000);
    param_1[0x76] = 0;
  }
  lVar3 = Options_Get_18();
  uVar2 = 4;
  iVar6 = 0;
  if (lVar3 == 0) {
    uVar2 = 8;
  }
  puVar4 = param_1;
  do {
    puVar7 = puVar4 + 0x1a696;
    puVar5 = puVar4 + 0x1a65a;
    iVar1 = 0;
    do {
      iVar8 = iVar1;
      *puVar7 = 0;
      *puVar5 = 0x3f800000;
      puVar7[1] = 0;
      puVar5[1] = 0x3f800000;
      puVar7[2] = 0;
      puVar5[2] = 0x3f800000;
      puVar7[3] = 0;
      puVar5[3] = 0x3f800000;
      puVar7[4] = 0;
      puVar5[4] = 0x3f800000;
      puVar7[5] = 0;
      puVar5[5] = 0x3f800000;
      puVar7[6] = 0;
      puVar5[6] = 0x3f800000;
      puVar7[7] = 0;
      puVar5[7] = 0x3f800000;
      puVar7 = puVar7 + 8;
      puVar5 = puVar5 + 8;
      iVar1 = iVar8 + 8;
    } while (iVar8 + 8 < 0x34);
    iVar6 = iVar6 + 1;
    puVar4[iVar8 + 0x1a69e] = 0;
    puVar4[iVar8 + 0x1a662] = 0x3f800000;
    puVar4[iVar8 + 0x1a69f] = 0;
    puVar4[iVar8 + 0x1a663] = 0x3f800000;
    puVar4[iVar8 + 0x1a6a0] = 0;
    puVar4[iVar8 + 0x1a664] = 0x3f800000;
    puVar4[iVar8 + 0x1a6a1] = 0;
    puVar4[iVar8 + 0x1a665] = 0x3f800000;
    puVar4[0x1a6d3] = uVar2;
    puVar4 = puVar4 + 0x7b;
  } while (iVar6 < 4);
  *(undefined1 *)(param_1 + 0x1a845) = 0xff;
  param_1[0x1a846] = 0;
  param_1[0x1a847] = 0;
  return;
}

// 0x001c9e00  size 0x340
void Driver_ReadWheel(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 auStack_40 [4];
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
  
  piVar2 = (int *)Options_Elem_28_xe8(param_2);
  *param_1 = 0;
  iVar7 = 0;
  puVar4 = param_1;
  piVar5 = piVar2;
  do {
    iVar6 = 0;
    puVar4[1] = *piVar5;
    puVar3 = &DAT_00318810;
    do {
      if ((puVar4[1] & *puVar3) != 0) {
        puVar4[2] = puVar3[1];
      }
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar6 < 0x20);
    iVar7 = iVar7 + 1;
    piVar5 = piVar5 + 1;
    puVar4 = puVar4 + 2;
  } while (iVar7 < 0x18);
  iVar7 = Options_GetInstance();
  Controls_ApplyMapping(iVar7 + (int)param_2 * 0xe8 + 0x28,param_1[0x31]);
  uVar9 = 0;
  puVar8 = &DAT_00318920;
  do {
    iVar7 = *piVar2;
    if (iVar7 == 0x20000000) {
      maybe_Pad_ReadAnalogAxes(0,0x3f666666,param_1[0x31],*puVar8);
    }
    else if (iVar7 == 4) {
      maybe_Pad_ReadAnalogAxes(0,0x3f666666,param_1[0x31],*puVar8);
    }
    else if (iVar7 == 0x200) {
      maybe_Pad_ReadAnalogAxes(0,0x3f666666,param_1[0x31],*puVar8);
    }
    else if (iVar7 == 8) {
      maybe_Pad_ReadAnalogAxes(0,0x3f666666,param_1[0x31],*puVar8);
    }
    uVar9 = uVar9 + 1;
    piVar2 = piVar2 + 1;
    puVar8 = puVar8 + 4;
  } while (uVar9 < 0x18);
  uVar1 = param_1[0x31];
  Wheel_SetAutocenter(uVar1,0);
  Wheel_SetCenterSpring(uVar1,0xff);
  auStack_40[0] = 2;
  uStack_3c = 0xffffffff;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_14 = 0;
  Wheel_SetEffectGain(uVar1,0,2);
  Wheel_IsEffectIdle(uVar1,0);
  Wheel_PlayEffect(uVar1,0,auStack_40);
  auStack_40[0] = 7;
  uStack_3c = 0xffffffff;
  uStack_2c = 0x32;
  uStack_28 = 0x32;
  uStack_24 = 0xff;
  uStack_20 = 0xff;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  Wheel_SetEffectGain(uVar1,1,7);
  Wheel_IsEffectIdle(uVar1,1);
  Wheel_PlayEffect(uVar1,1,auStack_40);
  auStack_40[0] = 0;
  uStack_3c = 0xffffffff;
  uStack_38 = 0;
  uStack_34 = 0xff;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  Wheel_SetEffectGain(uVar1,2,0);
  Wheel_IsEffectIdle(uVar1,2);
  Wheel_PlayEffect(uVar1,2,auStack_40);
  return;
}

// 0x001ca150  size 0x10
/* follows Driver_ReadWheel; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void Driver_ReadWheel_Orphan1(void)

{
  return;
}

// 0x001ca160  size 0x16c
void Driver_ReadPad(undefined4 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar3 = (int *)Options_Elem_28_xe8(param_2);
  uVar2 = param_1[0x31];
  iVar8 = 0;
  *param_1 = 0;
  piVar6 = piVar3;
  do {
    iVar7 = 0;
    param_1[1] = *piVar6;
    puVar5 = &DAT_00318810;
    do {
      if ((param_1[1] & *puVar5) != 0) {
        param_1[2] = puVar5[1];
      }
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar7 < 0x20);
    iVar8 = iVar8 + 1;
    piVar6 = piVar6 + 1;
    param_1 = param_1 + 2;
  } while (iVar8 < 0x18);
  iVar8 = 0;
  puVar9 = &DAT_00318920;
  do {
    iVar7 = *piVar3;
    if ((((iVar7 == 0x20000000) || (iVar7 == 4)) || (iVar7 == 0x200)) || (iVar7 == 8)) {
      lVar4 = Options_Get_18();
      if (lVar4 == 0) {
        uVar11 = 0x3dcccccd;
        uVar10 = 0x3e4ccccd;
        goto LAB_001ca240;
      }
      uVar11 = 0;
      uVar10 = 0x3e4ccccd;
      uVar1 = *puVar9;
    }
    else {
      uVar11 = 0x3f000000;
      uVar10 = 0x3f000000;
LAB_001ca240:
      uVar1 = *puVar9;
    }
    maybe_Pad_ReadAnalogAxes(uVar11,uVar10,uVar2,uVar1);
    iVar8 = iVar8 + 1;
    piVar3 = piVar3 + 1;
    puVar9 = puVar9 + 4;
    if (0x17 < iVar8) {
      return;
    }
  } while( true );
}

// 0x001ca2d0  size 0x1fc
void Driver_ApplyControls(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xfffffffc;
  if (((param_1[0x34] != 0) &&
      (lVar4 = (**(code **)(*(int *)(param_1[0x34] + 4) + 8))(), lVar4 != 0)) &&
     (lVar4 = (**(code **)(*(int *)(param_1[0x34] + 4) + 0xc))(param_1[0x34],0xffffffffffffffff),
     lVar4 != 0)) {
    if ((uVar1 & 1) == 0) {
      uVar2 = Pad_GetPort((char)param_1[1],(char)param_1[2]);
      param_1[0x34] = uVar2;
      Driver_ReadPad(param_1 + 3,param_1[1]);
      uVar2 = *param_1;
    }
    else {
      uVar2 = *param_1;
    }
    *param_1 = uVar2 | 1;
    uVar2 = param_1[0x34];
    fVar5 = (float)fabsf(*(undefined4 *)(uVar2 + 0x370));
    fVar6 = (float)fabsf(*(undefined4 *)(uVar2 + 0x380));
    if ((fVar5 < 0.2) && (fVar6 < 0.2)) {
      param_1[3] = param_1[3] | 1;
    }
    fVar5 = (float)fabsf(*(undefined4 *)(uVar2 + 0x350));
    fVar6 = (float)fabsf(*(undefined4 *)(uVar2 + 0x360));
    if ((fVar5 < 0.2) && (fVar6 < 0.2)) {
      param_1[3] = param_1[3] | 2;
    }
  }
  uVar2 = Wheel_GetDeviceName(param_1[1]);
  param_1[0x66] = uVar2;
  if (param_1[0x66] != 0) {
    if ((uVar1 & 2) == 0) {
      lVar4 = Wheel_IsActive();
      if (lVar4 == 0) {
        Driver_ReadWheel(param_1 + 0x35,param_1[1]);
        iVar3 = Options_GetInstance();
        Controls_ApplyMapping(iVar3 + param_1[1] * 0xe8 + 0x28,param_1[0x66]);
        *param_1 = *param_1 | 2;
      }
    }
    else {
      lVar4 = Wheel_IsActive();
      if (lVar4 == 0) {
        *param_1 = *param_1 | 2;
      }
    }
  }
  return;
}

// 0x001ca4d0  size 0x60
void Input_ClampPositive(float *param_1)

{
  if (0.0 < *param_1) {
    param_1[4] = (float)((uint)param_1[4] | 4);
  }
  if (0.2 < param_1[1]) {
    param_1[4] = (float)((uint)param_1[4] | 8);
  }
  return;
}

// 0x001ca530  size 0x104
void Input_ApplyCurve(float *param_1)

{
  if (*param_1 <= 1.0) {
    if (*param_1 < 0.0) {
      *param_1 = 0.0;
    }
  }
  else {
    *param_1 = 1.0;
  }
  if (param_1[1] <= 1.0) {
    if (param_1[1] < 0.0) {
      param_1[1] = 0.0;
    }
  }
  else {
    param_1[1] = 1.0;
  }
  if (param_1[3] <= 1.0) {
    if (param_1[3] < 0.0) {
      param_1[3] = 0.0;
    }
  }
  else {
    param_1[3] = 1.0;
  }
  if (param_1[2] <= 1.0) {
    if (param_1[2] < -1.0) {
      param_1[2] = -1.0;
    }
  }
  else {
    param_1[2] = 1.0;
  }
  return;
}

// 0x001ca640  size 0x1c
void DriverInput_Clear(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

// 0x001ca660  size 0x1c
void DriverInput_ClearAxes(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  param_1[4] = 0;
  return;
}

// 0x001ca680  size 0x2c
float Race_GetTimeScale(int param_1)

{
  float fVar1;
  
  fVar1 = (float)GameState_Get_14();
  return fVar1 - *(float *)(param_1 + 0x1780);
}

// 0x001ca6b0  size 0x20
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* 42 callers */

RaceCar * RaceCar_Get(int index)

{
  RaceCar *pRVar1;
  
  if (g_RaceCars == (RaceCarList *)0x0) {
    pRVar1 = (RaceCar *)0x0;
  }
  else {
    pRVar1 = g_RaceCars->cars[index];
  }
  return pRVar1;
}

// 0x001ca6d0  size 0x8
undefined4 RaceCar_GetLap(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1784);
}

// 0x001ca6e0  size 0x8
undefined4 RaceCar_GetPosition(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1780);
}

// 0x001ca6f0  size 0x8
undefined4 RaceCar_GetCheckpoint(int param_1)

{
  return *(undefined4 *)(param_1 + 0x17d0);
}

// 0x001ca700  size 0x14
void RaceCar_ClearFlags(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) & ~param_2;
  return;
}

// 0x001ca720  size 0x10
void RaceCar_SetFlags(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | param_2;
  return;
}

// 0x001ca730  size 0x8
/* 17 callers */

undefined4 RaceCar_GetFlags(int param_1)

{
  return *(undefined4 *)(param_1 + 0x17d8);
}

// 0x001ca740  size 0x18
int RaceCar_GetWheelFx(int param_1,int param_2)

{
  return param_1 + param_2 * 0x70 + 0x13d0;
}

// 0x001ca760  size 0x8
int RaceCar_GetTracker(int param_1)

{
  return param_1 + 0x1360;
}

// 0x001ca770  size 0x8
/* 18 callers */

undefined4 RaceCar_GetIndex(int param_1)

{
  return *(undefined4 *)(param_1 + 0x17dc);
}

// 0x001ca780  size 0x24
float RaceCar_GetSpeedPerMinute(int param_1)

{
  return *(float *)(param_1 + 0x40) / 60.0;
}

// 0x001ca7b0  size 0x8
undefined4 RaceCar_GetRpm(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7f8);
}

// 0x001ca7c0  size 0x18
/* 11 callers */

float RaceCar_GetSpeedKmh(int param_1)

{
  return *(float *)(param_1 + 0x40) * 3.6;
}

// 0x001ca7e0  size 0x8
undefined4 RaceCar_GetDistance(int param_1)

{
  return *(undefined4 *)(param_1 + 0x17a0);
}

// 0x001ca7f0  size 0x14
void RaceCar_GetLapTimes(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x179c);
  *param_3 = *(undefined4 *)(param_1 + 0x1798);
  return;
}

// 0x001ca810  size 0x974
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Ai_UpdateDriver(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_4;
  
  cVar4 = GameState_Get_3();
  if (cVar4 == '\x01') {
    if ((_g_Skids == 0) || (_g_AiShared3 <= param_2)) {
      iVar12 = 0;
    }
    else {
      iVar12 = _g_Skids + param_2 * 0xb900;
    }
    if (*(int *)(g_Loading->workBufs[0] + 0x500) != 0) {
      MotionBlur_Setup(iVar12);
    }
    if ((*(int *)(_g_AiShared2 + 0xc) != 0) &&
       (iVar13 = *(int *)(*(int *)(_g_AiShared2 + 0xc) + 0x14), iVar13 != 0)) {
      *(uint *)(*(int *)(param_2 * 4 + iVar13 + 0x1c) + 0x3fc) = param_2;
      MotionBlur_Build(iVar12,1);
    }
  }
  if ((*(uint *)(*(int *)(param_1 + 0x17dc) + 4) & 1) == 0) {
LAB_001ca8e8:
    cVar4 = *(char *)(param_1 + 0x8e8);
  }
  else {
    lVar8 = PhysBody_FindShapeWithFlags(*(undefined4 *)(param_1 + 0x158),0xffffffffffffffff);
    uStack_34 = 0x3f800000;
    iVar12 = *(int *)(_g_AiDrivers + (char)param_2 * 4);
    uVar9 = PhysBody_GetRotation(*(undefined4 *)(param_1 + 0x154));
    AiLine_TransformToWorld(&fStack_50,uVar9);
    for (; lVar8 != 0; lVar8 = PhysWorld_FindBodyWithFlags(lVar8,0xffffffffffffffff)) {
      if (((*(uint *)(param_1 + 0x13c0) & 0x70) != 0) &&
         (PhysBody_GetWorldMatrix(*(undefined4 *)(param_1 + 0x154)),
         10.0 < *(float *)(param_1 + 0x40) * 3.6)) {
        uStack_4 = PhysWorld_GetFirstBody(lVar8);
        puVar6 = (undefined4 *)PhysWorld_GetGravity(lVar8);
        uStack_40 = *puVar6;
        uStack_3c = puVar6[1];
        uStack_38 = puVar6[2];
        uStack_34 = puVar6[3];
        fStack_30 = fStack_50;
        uStack_2c = uStack_4c;
        uStack_28 = uStack_48;
        uStack_20 = uStack_40;
        uStack_1c = uStack_3c;
        uStack_18 = uStack_38;
        sceVu0OuterProduct(&uStack_20,&uStack_20,&fStack_30);
        Driver_SetInputMode(iVar12,&uStack_20,&uStack_4,0);
      }
    }
    if (*(char *)(iVar12 + 0x6a114) == '\0') goto LAB_001ca8e8;
    if ((*(int *)(param_1 + 0x1434) != 4) && (*(int *)(param_1 + 0x14a4) != 4)) {
      if ((*(int *)(param_1 + 0x1434) == 3) || (*(int *)(param_1 + 0x14a4) == 3)) {
        if (10.0 < *(float *)(param_1 + 0x40) * 3.6) {
          Driver_SetInputMode(iVar12,&uStack_20,&uStack_4,2);
        }
      }
      else {
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_4 = 0;
        Driver_SetInputMode(iVar12,&uStack_20,&uStack_4,0xffffffffffffffff);
      }
      goto LAB_001ca8e8;
    }
    if (*(float *)(param_1 + 0x40) * 3.6 <= 10.0) goto LAB_001ca8e8;
    Driver_SetInputMode(iVar12,&uStack_20,&uStack_4,1);
    cVar4 = *(char *)(param_1 + 0x8e8);
  }
  if (((cVar4 != '\0') && (*(int *)(_g_AiShared2 + 0xc) != 0)) &&
     (iVar12 = *(int *)(*(int *)(_g_AiShared2 + 0xc) + 0x14), iVar12 != 0)) {
    uVar14 = 0;
    iVar13 = 0;
    iVar12 = *(int *)(param_2 * 4 + iVar12 + 0x1c);
    do {
      iVar1 = *(int *)(iVar12 + 0x504);
      if ((1 << (uVar14 & 0x1f) & *(uint *)(iVar1 + 0x7c)) != 0) {
        if ((_g_Skids == 0) || (_g_AiShared3 <= param_2)) {
          iVar11 = 0;
        }
        else {
          iVar11 = _g_Skids + param_2 * 0xb900;
        }
        Skid_UpdateWheel(iVar11,iVar1 + iVar13 + 0x550,uVar14);
      }
      uVar14 = uVar14 + 1;
      iVar13 = iVar13 + 0x10;
    } while (uVar14 < 4);
  }
  cVar4 = GameState_Get_2();
  if (cVar4 == '\0') {
    bVar3 = false;
    bVar2 = false;
    uVar15 = 0;
    uVar14 = 0;
    iVar12 = param_1;
    do {
      if ((*(int *)(iVar12 + 0x1434) - 5U < 2) &&
         (fVar16 = (float)fabsf(*(undefined4 *)(param_1 + uVar14 * 0x140 + 0x28c)), 15.0 < fVar16))
      {
        if (*(int *)(iVar12 + 0x1434) == 6) {
          bVar2 = true;
        }
        bVar3 = true;
        uVar15 = uVar15 | 1 << (uVar14 & 0x1f);
      }
      uVar14 = uVar14 + 1;
      iVar12 = iVar12 + 0x70;
    } while ((int)uVar14 < 4);
    if (bVar3) {
      if ((_g_Skids == 0) || (_g_AiShared3 <= param_2)) {
        iVar12 = 0;
      }
      else {
        iVar12 = _g_Skids + param_2 * 0xb900;
      }
      if (iVar12 != 0) {
        if ((bVar2) || (fVar16 = (float)fabsf(*(float *)(param_1 + 0x40) * 3.6), fVar16 <= 60.0)) {
          if (bVar2) {
            Skid_UpdateAll(iVar12,uVar15,1);
          }
        }
        else {
          Skid_UpdateAll(iVar12,uVar15,0);
        }
      }
    }
  }
  bVar5 = GameState_Get_2();
  if (5 < bVar5) {
    return;
  }
                    /* WARNING: Switch is manually overridden */
  switch(bVar5) {
  case 0:
    bVar2 = false;
    uVar15 = 0;
    uVar14 = 0;
    do {
      fVar16 = (float)RaceCar_WheelGroundDistance(param_1,uVar14);
      if (fVar16 != 0.0) {
        bVar2 = true;
        uVar15 = uVar15 | 1 << (uVar14 & 0x1f);
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 4);
    if (!bVar2) {
      return;
    }
    if ((_g_Skids == 0) || (_g_AiShared3 <= param_2)) {
      iVar12 = 0;
    }
    else {
      iVar12 = _g_Skids + param_2 * 0xb900;
    }
    if (iVar12 == 0) {
      return;
    }
    Skid_UpdateCarEx(iVar12,uVar15);
    return;
  case 1:
    if ((((param_2 == 0) || ((param_2 == 1 && (_s_RaceIsReplayMode == 1)))) &&
        (*(int *)(_g_AiShared2 + 0xc) != 0)) &&
       (iVar12 = *(int *)(*(int *)(_g_AiShared2 + 0xc) + 0x14), iVar12 != 0)) {
      fVar16 = *(float *)(param_1 + 0x40) * 3.6;
      if (param_2 == 0) {
        iVar12 = iVar12 + 0xe20;
      }
      else {
        iVar12 = iVar12 + 0x1bf0;
      }
      if (*(float *)(param_1 + 400) < 0.0) {
        uStack_58 = 0;
        uStack_54 = 0;
        fStack_60 = *(float *)(param_1 + 0x198) * 40.0;
        uStack_5c = 0xc4160000;
        *(undefined4 *)(iVar12 + 8) = 1;
        *(float *)(iVar12 + 0x14) = fVar16 / 20.0;
        sceVu0CopyVector(iVar12 + 0x20,&fStack_60);
      }
      else {
        uStack_58 = 0;
        uStack_54 = 0;
        fStack_60 = *(float *)(param_1 + 0x198) * 40.0;
        uStack_5c = 0x44160000;
        *(undefined4 *)(iVar12 + 8) = 1;
        *(float *)(iVar12 + 0x14) = fVar16 / 20.0;
        sceVu0CopyVector(iVar12 + 0x20,&fStack_60);
      }
      Weather_SpawnDrops(iVar12);
    }
    lVar8 = RaceScene_IsFlag10();
    if (((lVar8 != 0) && (*(int *)(_g_AiShared2 + 0xc) != 0)) &&
       (iVar12 = *(int *)(*(int *)(_g_AiShared2 + 0xc) + 0x14), iVar12 != 0)) {
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      *(undefined4 *)(iVar12 + 0x58) = 0;
      sceVu0CopyVector(iVar12 + 0x70,&uStack_70);
      Weather_SpawnDrops(iVar12 + 0x50);
    }
  }
  bVar2 = false;
  uVar15 = 0;
  uVar14 = 0;
  iVar12 = param_1;
  do {
    iVar13 = param_1 + uVar14 * 0x140;
    if ((*(char *)(iVar13 + 0x1c1) != '\0') &&
       (fVar16 = (float)fabsf(*(undefined4 *)(iVar13 + 0x28c)), 5.0 <= fVar16)) {
      fVar16 = *(float *)(iVar12 + 0xbe0) + (*(float *)(iVar13 + 0x28c) * 0.3) / 60.0;
      *(float *)(iVar12 + 0xbe0) = fVar16;
      fVar16 = fVar16 - 1.0;
      if ((0.0 < fVar16) && (bVar2 = true, 0.0 < fVar16)) {
        do {
          fVar16 = *(float *)(iVar12 + 0xbe0) - 1.0;
          *(float *)(iVar12 + 0xbe0) = fVar16;
          uVar15 = uVar15 | 1 << (uVar14 & 0x1f);
        } while (0.0 < fVar16 - 1.0);
      }
    }
    uVar14 = uVar14 + 1;
    iVar12 = iVar12 + 4;
  } while ((int)uVar14 < 4);
  if (!bVar2) {
    return;
  }
  if ((_g_Skids == 0) || (_g_AiShared3 <= param_2)) {
    iVar12 = 0;
  }
  else {
    iVar12 = _g_Skids + param_2 * 0xb900;
  }
  if (iVar12 == 0) {
    return;
  }
  lVar8 = CarRec_GetPartData(*(undefined4 *)(param_1 + 0x17dc),0x14);
  if (lVar8 == 0) {
    cVar4 = GameState_Get_2();
    if (cVar4 == '\x04') {
      uVar10 = 0x42700000;
      uVar7 = 0x41200000;
      goto LAB_001cae70;
    }
    uVar7 = 0x40a00000;
  }
  else {
    uVar7 = 0x40000000;
  }
  uVar10 = 0x41f00000;
LAB_001cae70:
  Skid_UpdateCar(uVar10,uVar7,iVar12,uVar15);
  return;
}

// 0x001cb190  size 0x8c4
void Ai_FollowRacingLine(int param_1)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 auStack_330 [2];
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
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
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 auStack_280 [2];
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 auStack_270 [2];
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 auStack_230 [2];
  undefined4 uStack_228;
  undefined4 uStack_224;
  float afStack_220 [2];
  float fStack_218;
  undefined4 uStack_214;
  undefined4 auStack_210 [2];
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 auStack_200 [2];
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 auStack_1f0 [2];
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 auStack_1e0 [2];
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 auStack_1d0 [2];
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 auStack_1c0 [2];
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 auStack_1b0 [2];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 auStack_1a0 [2];
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [48];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  short sStack_10;
  short sStack_e;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar8 = PhysBody_GetWorldMatrix(*(undefined4 *)(param_1 + 0x154));
  puVar5 = (undefined1 *)0x10;
  puVar11 = auStack_60;
  puVar4 = puVar11;
  while (puVar4 != (undefined1 *)0x0) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
    puVar5 = puVar5 + -1;
    puVar4 = puVar5;
  }
  uStack_74 = 0x3f800000;
  puVar7 = (undefined4 *)uVar8;
  uStack_70 = *puVar7;
  uStack_6c = puVar7[1];
  uStack_68 = puVar7[2];
  uStack_64 = puVar7[3];
  lVar9 = RaceScene_Get_40();
  if (lVar9 != 0) {
    iVar12 = RaceScene_Get_40();
    Course_GetStartTransform(iVar12 + -1,auStack_50,auStack_60,0);
    uStack_80 = uStack_20;
    uStack_7c = uStack_1c;
    uStack_78 = uStack_18;
  }
  Vec3_Sub(auStack_90,&uStack_70,&uStack_80);
  fVar15 = (float)Vec3_LengthB(auStack_90);
  *(undefined4 *)(param_1 + 0x178c) = *(undefined4 *)(param_1 + 0x1788);
  *(float *)(param_1 + 0x1788) = (fVar15 * 60.0 * 60.0 * 60.0) / 1000.0;
  *(undefined4 *)(param_1 + 0x16b0) = uStack_70;
  *(undefined4 *)(param_1 + 0x16b4) = uStack_6c;
  *(undefined4 *)(param_1 + 0x16b8) = uStack_68;
  *(undefined4 *)(param_1 + 0x16bc) = uStack_64;
  *(undefined4 *)(param_1 + 0x16c0) = uStack_70;
  *(undefined4 *)(param_1 + 0x16c4) = uStack_6c;
  *(undefined4 *)(param_1 + 0x16c8) = uStack_68;
  *(undefined4 *)(param_1 + 0x16cc) = uStack_64;
  fVar15 = *(float *)(param_1 + 0x1798) + fVar15;
  *(float *)(param_1 + 0x1798) = fVar15;
  if (1000.0 < fVar15) {
    *(int *)(param_1 + 0x179c) = *(int *)(param_1 + 0x179c) + 1;
    *(float *)(param_1 + 0x1798) = *(float *)(param_1 + 0x1798) - 1000.0;
  }
  uVar1 = *(ushort *)(param_1 + 0x1366);
  sVar2 = *(short *)(param_1 + 0x1368);
  uStack_94 = 0x3f800000;
  uStack_a4 = 0x3f800000;
  uStack_b4 = 0x3f800000;
  uStack_c4 = 0x3f800000;
  uStack_d4 = 0x3f800000;
  lVar9 = GameState_Get_40();
  if (lVar9 == 0) {
    if ((*(uint *)(param_1 + 0x17d8) & 4) == 0) {
      AiLine_GetDirection(auStack_200,1,uVar1,sVar2);
      uStack_a0 = auStack_200[0];
      uStack_98 = uStack_1f8;
      uStack_94 = uStack_1f4;
      uStack_9c = 0;
      AiLine_GetDirection(auStack_210,2,uVar1,sVar2);
      uStack_b0 = auStack_210[0];
      uStack_a8 = uStack_208;
      uStack_a4 = uStack_204;
    }
    else {
      AiLine_GetDirection(auStack_1e0,2,uVar1,sVar2);
      uStack_a0 = auStack_1e0[0];
      uStack_98 = uStack_1d8;
      uStack_94 = uStack_1d4;
      uStack_9c = 0;
      AiLine_GetDirection(auStack_1f0,1,uVar1,sVar2);
      uStack_b0 = auStack_1f0[0];
      uStack_a8 = uStack_1e8;
      uStack_a4 = uStack_1e4;
    }
  }
  else if ((*(uint *)(param_1 + 0x17d8) & 4) == 0) {
    AiLine_GetDirection(auStack_1c0,2,uVar1,sVar2);
    uStack_a0 = auStack_1c0[0];
    uStack_98 = uStack_1b8;
    uStack_94 = uStack_1b4;
    uStack_9c = 0;
    AiLine_GetDirection(auStack_1d0,1,uVar1,sVar2);
    uStack_b0 = auStack_1d0[0];
    uStack_a8 = uStack_1c8;
    uStack_a4 = uStack_1c4;
  }
  else {
    AiLine_GetDirection(auStack_1a0,1,uVar1,sVar2);
    uStack_a0 = auStack_1a0[0];
    uStack_98 = uStack_198;
    uStack_94 = uStack_194;
    uStack_9c = 0;
    AiLine_GetDirection(auStack_1b0,2,uVar1,sVar2);
    uStack_b0 = auStack_1b0[0];
    uStack_a8 = uStack_1a8;
    uStack_a4 = uStack_1a4;
  }
  uStack_ac = 0;
  Vec3_Sub(afStack_220,&uStack_b0,&uStack_a0);
  fStack_c0 = afStack_220[0];
  fStack_b8 = fStack_218;
  uStack_b4 = uStack_214;
  fStack_bc = 0.0;
  fVar15 = (float)Vec3_LengthB(&fStack_c0);
  *(float *)(param_1 + 0x1760) = fVar15;
  Vec3_Sub(auStack_230,uVar8,&uStack_a0);
  uStack_d0 = auStack_230[0];
  uStack_c8 = uStack_228;
  uStack_c4 = uStack_224;
  uStack_cc = 0;
  fVar16 = (float)Vec3_DotB(&fStack_c0,&uStack_d0);
  fVar17 = (float)Vec3_LengthB(&fStack_c0);
  fVar16 = fVar16 / fVar17;
  Vec3_Normalize(&fStack_c0);
  fStack_dc = fStack_bc * fVar16;
  fStack_e0 = fStack_c0 * fVar16;
  fStack_d8 = fStack_b8 * fVar16;
  fVar16 = (float)Vec3_LengthB(&fStack_e0);
  *(float *)(param_1 + 0x1768) = fVar16;
  iVar12 = sVar2 + 1;
  *(float *)(param_1 + 0x1764) = fVar16 / fVar15;
  uStack_e4 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  uStack_104 = 0x3f800000;
  uStack_114 = 0x3f800000;
  if ((long)iVar12 < (long)**(short **)(g_RoadData->aiLine + (uint)uVar1 * 4)) {
    AiLine_GetDirection(&uStack_250,3,uVar1,(short)iVar12);
    uStack_100 = uStack_250;
    uStack_fc = uStack_24c;
    uStack_f8 = uStack_248;
    uStack_f4 = uStack_244;
  }
  else {
    AiLine_GetDirection(&uStack_240,3,uVar1 + 1,0);
    uStack_100 = uStack_240;
    uStack_fc = uStack_23c;
    uStack_f8 = uStack_238;
    uStack_f4 = uStack_234;
  }
  AiLine_GetDirection(&uStack_260,3,uVar1,sVar2);
  uStack_f0 = uStack_260;
  uStack_ec = uStack_25c;
  uStack_e8 = uStack_258;
  uStack_e4 = uStack_254;
  Vec3_Sub(auStack_270,&uStack_100,&uStack_f0);
  uStack_110 = auStack_270[0];
  uStack_108 = uStack_268;
  uStack_104 = uStack_264;
  uStack_10c = 0;
  Vec3_Sub(auStack_280,uVar8,&uStack_f0);
  uStack_120 = auStack_280[0];
  uStack_118 = uStack_278;
  uStack_114 = uStack_274;
  uStack_11c = 0;
  fVar16 = (float)Vec3_DotB(&uStack_110,&uStack_120);
  fVar17 = (float)Vec3_LengthB(&uStack_110);
  *(float *)(param_1 + 0x177c) = fVar16 / fVar17;
  uStack_124 = 0x3f800000;
  uStack_134 = 0x3f800000;
  uStack_144 = 0x3f800000;
  uStack_154 = 0x3f800000;
  uStack_164 = 0x3f800000;
  AiLine_GetDirection(&uStack_290,0,uVar1,sVar2);
  uStack_130 = uStack_290;
  uStack_12c = uStack_28c;
  uStack_128 = uStack_288;
  uStack_124 = uStack_284;
  AiLine_GetDirection(&uStack_2a0,3,uVar1,sVar2);
  uStack_160 = uStack_2a0;
  uStack_15c = uStack_29c;
  uStack_158 = uStack_298;
  uStack_154 = uStack_294;
  lVar9 = GameState_Get_40();
  if (lVar9 == 0) {
    if ((*(uint *)(param_1 + 0x17d8) & 4) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else if ((*(uint *)(param_1 + 0x17d8) & 4) == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  iVar12 = (int)sVar2;
  if (bVar3) {
    iVar14 = sVar2 + -2;
    lVar9 = (long)(short)uVar1;
    if (iVar14 < 0) {
      lVar9 = (long)(int)((int)(short)uVar1 - 1U);
      if (lVar9 < 0) {
        iVar14 = iVar12 + 1;
        lVar9 = (long)(short)uVar1;
      }
      else {
        iVar14 = **(short **)(g_RoadData->aiLine + ((int)(short)uVar1 - 1U & 0xffff) * 4) + -1;
      }
    }
    AiLine_GetDirection(&uStack_2b0,0,(short)lVar9,(short)iVar14);
    uStack_150 = uStack_2b0;
    uStack_14c = uStack_2ac;
    uStack_148 = uStack_2a8;
    uStack_144 = uStack_2a4;
    AiLine_GetDirection(&uStack_2c0,3,(short)lVar9,(short)iVar14);
    uStack_170 = uStack_2c0;
    uStack_16c = uStack_2bc;
    uStack_168 = uStack_2b8;
    uStack_164 = uStack_2b4;
    Vec3_Sub(&uStack_2d0,&uStack_150,&uStack_130);
    *(undefined4 *)(param_1 + 0x16f0) = uStack_2d0;
    *(undefined4 *)(param_1 + 0x16f4) = uStack_2cc;
    *(undefined4 *)(param_1 + 0x16f8) = uStack_2c8;
    *(undefined4 *)(param_1 + 0x16fc) = uStack_2c4;
    *(undefined4 *)(param_1 + 0x16f4) = 0;
    Vec3_Normalize(param_1 + 0x16f0);
    Vec3_Sub(&uStack_2e0,&uStack_170,&uStack_160);
    *(undefined4 *)(param_1 + 0x1700) = uStack_2e0;
    *(undefined4 *)(param_1 + 0x1704) = uStack_2dc;
    *(undefined4 *)(param_1 + 0x1708) = uStack_2d8;
    *(undefined4 *)(param_1 + 0x170c) = uStack_2d4;
    *(undefined4 *)(param_1 + 0x1704) = 0;
    Vec3_Normalize(param_1 + 0x1700);
  }
  else {
    lVar13 = (long)(iVar12 + 1);
    lVar9 = (long)(short)uVar1;
    if (**(short **)(g_RoadData->aiLine + (uint)uVar1 * 4) <= lVar13) {
      lVar13 = 0;
      lVar9 = (long)((short)uVar1 + 1);
      if ((long)(int)g_RoadData->unk_00 <= (long)((short)uVar1 + 1)) {
        lVar13 = (long)(iVar12 + -1);
        lVar9 = (long)(short)uVar1;
      }
    }
    AiLine_GetDirection(&uStack_2f0,0,(short)lVar9,(short)lVar13);
    uStack_150 = uStack_2f0;
    uStack_14c = uStack_2ec;
    uStack_148 = uStack_2e8;
    uStack_144 = uStack_2e4;
    AiLine_GetDirection(&uStack_300,3,(short)lVar9,(short)lVar13);
    uStack_170 = uStack_300;
    uStack_16c = uStack_2fc;
    uStack_168 = uStack_2f8;
    uStack_164 = uStack_2f4;
    Vec3_Sub(&uStack_310,&uStack_150,&uStack_130);
    *(undefined4 *)(param_1 + 0x16f0) = uStack_310;
    *(undefined4 *)(param_1 + 0x16f4) = uStack_30c;
    *(undefined4 *)(param_1 + 0x16f8) = uStack_308;
    *(undefined4 *)(param_1 + 0x16fc) = uStack_304;
    *(undefined4 *)(param_1 + 0x16f4) = 0;
    Vec3_Normalize(param_1 + 0x16f0);
    Vec3_Sub(&uStack_320,&uStack_170,&uStack_160);
    *(undefined4 *)(param_1 + 0x1700) = uStack_320;
    *(undefined4 *)(param_1 + 0x1704) = uStack_31c;
    *(undefined4 *)(param_1 + 0x1708) = uStack_318;
    *(undefined4 *)(param_1 + 0x170c) = uStack_314;
    *(undefined4 *)(param_1 + 0x1704) = 0;
    Vec3_Normalize(param_1 + 0x1700);
  }
  Vec3_Sub(auStack_330,&uStack_130,&uStack_a0);
  uStack_140 = auStack_330[0];
  uStack_138 = uStack_328;
  uStack_134 = uStack_324;
  uStack_13c = 0;
  fVar16 = (float)Vec3_LengthB(&uStack_140);
  *(float *)(param_1 + 6000) = fVar16;
  *(float *)(param_1 + 0x176c) = fVar16 / fVar15;
  fVar15 = *(float *)(param_1 + 0x1768) - *(float *)(param_1 + 6000);
  *(float *)(param_1 + 0x1778) = fVar15;
  if (fVar15 < 0.0) {
    *(float *)(param_1 + 0x1774) = fVar15 / *(float *)(param_1 + 6000);
  }
  else {
    *(float *)(param_1 + 0x1774) =
         fVar15 / (*(float *)(param_1 + 0x1760) - *(float *)(param_1 + 6000));
  }
  if (*(float *)(param_1 + 0x1774) <= 1.0) {
    if (*(float *)(param_1 + 0x1774) < -1.0) {
      *(undefined4 *)(param_1 + 0x1774) = 0xbf800000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1774) = 0x3f800000;
  }
  fVar15 = 0.0;
  *(undefined2 *)(param_1 + 0x17b8) = *(undefined2 *)(param_1 + 0x1366);
  *(int *)(param_1 + 0x17b4) = (int)*(short *)(param_1 + 0x1368);
  lVar9 = GameState_Get_44();
  if (lVar9 != 0) {
    uVar6 = GameState_Get_1();
    puVar7 = (undefined4 *)((int)lVar9 + (uVar6 & 0xff) * 0x10);
    uStack_180 = *puVar7;
    iStack_17c = puVar7[1];
    uStack_178 = puVar7[2];
    uStack_174 = puVar7[3];
    iVar12 = GameState_Get_c();
    sStack_10 = *(short *)(param_1 + 0x1366);
    puVar7 = (undefined4 *)(iStack_17c + iVar12 * 0x10);
    uStack_190 = *puVar7;
    sStack_e = sStack_10 >> 0xf;
    uStack_18c = puVar7[1];
    uStack_188 = puVar7[2];
    iStack_c = (int)*(short *)(param_1 + 0x1368);
    uStack_184 = puVar7[3];
    uStack_8 = uStack_190;
    uStack_4 = uStack_18c;
    lVar9 = Checkpoint_GetPosition((short)uStack_190);
    lVar13 = Checkpoint_GetPosition(sStack_10,iStack_c);
    lVar10 = GameState_Get_40();
    if (lVar10 == 0) {
      if (lVar9 <= lVar13) {
        fVar15 = (float)Checkpoint_BuildGate
                                  (CONCAT44(uStack_4,uStack_8),
                                   CONCAT44(iStack_c,CONCAT22(sStack_e,sStack_10)));
        fVar15 = fVar15 + *(float *)(param_1 + 0x177c);
      }
    }
    else {
      if (lVar9 <= lVar13) {
        uVar18 = *(undefined4 *)(param_1 + 0x1780);
        goto LAB_001cba24;
      }
      fVar15 = (float)Checkpoint_BuildGate
                                (CONCAT44(uStack_4,uStack_8),
                                 CONCAT44(iStack_c,CONCAT22(sStack_e,sStack_10)));
      fVar15 = fVar15 - *(float *)(param_1 + 0x177c);
    }
  }
  uVar18 = *(undefined4 *)(param_1 + 0x1780);
LAB_001cba24:
  *(undefined4 *)(param_1 + 0x1784) = uVar18;
  *(float *)(param_1 + 0x1780) = fVar15;
  return;
}

// 0x001cba60  size 0xe70
void Ai_ComputeSteering(int param_1)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uVar12;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float unaff_f20;
  undefined4 auStack_350 [2];
  undefined4 uStack_348;
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
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 auStack_2d0 [2];
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 auStack_2c0 [2];
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 auStack_280 [2];
  undefined4 uStack_278;
  undefined4 uStack_274;
  float afStack_270 [2];
  float fStack_268;
  undefined4 uStack_264;
  undefined4 auStack_260 [2];
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 auStack_250 [2];
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 auStack_240 [2];
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 auStack_230 [2];
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 auStack_220 [2];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 auStack_210 [2];
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 auStack_200 [2];
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 auStack_1f0 [2];
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
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
  int iStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
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
  int aiStack_a0 [4];
  undefined4 auStack_90 [24];
  uint uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  short sStack_10;
  short sStack_e;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar7 = PhysBody_GetWorldMatrix(*(undefined4 *)(param_1 + 0x154));
  *(undefined4 *)(param_1 + 0x178c) = *(undefined4 *)(param_1 + 0x1788);
  *(float *)(param_1 + 0x1788) = *(float *)(param_1 + 0x40) * 3.6;
  uStack_14 = 0x3f800000;
  uStack_20 = 0x3fd9999a;
  uStack_1c = 0;
  uStack_18 = 0;
  Mat33_MulVec3(&uStack_1d0,param_1 + 0xe0,&uStack_20);
  *(undefined4 *)(param_1 + 0x16b0) = uStack_1d0;
  *(undefined4 *)(param_1 + 0x16b4) = uStack_1cc;
  *(undefined4 *)(param_1 + 0x16b8) = uStack_1c8;
  *(undefined4 *)(param_1 + 0x16bc) = uStack_1c4;
  puVar6 = (undefined4 *)uVar7;
  uVar12 = puVar6[1];
  uVar13 = puVar6[2];
  uVar14 = puVar6[3];
  *(undefined4 *)(param_1 + 0x16c0) = *puVar6;
  *(undefined4 *)(param_1 + 0x16c4) = uVar12;
  *(undefined4 *)(param_1 + 0x16c8) = uVar13;
  *(undefined4 *)(param_1 + 0x16cc) = uVar14;
  fVar34 = (*(float *)(param_1 + 0x1788) * 1000.0) / 216000.0;
  fVar20 = *(float *)(param_1 + 0x1798) + fVar34;
  *(float *)(param_1 + 0x1798) = fVar20;
  if (1000.0 < fVar20) {
    *(int *)(param_1 + 0x179c) = *(int *)(param_1 + 0x179c) + 1;
    *(float *)(param_1 + 0x1798) = *(float *)(param_1 + 0x1798) - 1000.0;
  }
  puVar18 = (undefined4 *)(param_1 + 0x1360);
  puVar6 = auStack_90;
  iVar15 = 7;
  do {
    uVar12 = puVar18[1];
    uVar13 = puVar18[2];
    uVar14 = puVar18[3];
    iVar15 = iVar15 + -1;
    *puVar6 = *puVar18;
    puVar6[1] = uVar12;
    puVar6[2] = uVar13;
    puVar6[3] = uVar14;
    puVar18 = puVar18 + 4;
    puVar6 = puVar6 + 4;
  } while (0 < iVar15);
  fVar20 = *(float *)(param_1 + 0x40);
  uVar12 = *(undefined4 *)(param_1 + 0x158);
  uVar8 = PhysBody_FindShapeWithFlags(uVar12,0xffffffffff000000);
  if ((fVar20 * 3.6 <= 10.0) || ((uStack_30 & 0x20) == 0)) {
    if ((10.0 < *(float *)(param_1 + 0x1788)) && ((uStack_30 & 0x10) != 0)) {
      uVar8 = PhysBody_FindShapeWithFlags(uVar12,0xffffff);
      fVar20 = (float)PhysWorld_GetFirstBody(uVar8);
      unaff_f20 = fVar20 * 5e-06;
      if (1.0 < unaff_f20) {
        unaff_f20 = 1.0;
      }
    }
  }
  else {
    fVar20 = (float)PhysWorld_GetFirstBody(uVar8);
    unaff_f20 = fVar20 * 5e-06;
    if (1.0 < unaff_f20) {
      unaff_f20 = 1.0;
    }
  }
  iVar15 = CarRec_GetPartData(*(undefined4 *)(param_1 + 0x17dc),10);
  iVar5 = CarRec_GetPartData(*(undefined4 *)(param_1 + 0x17dc),0xb);
  fVar29 = 0.0;
  uVar17 = 0;
  piVar16 = aiStack_a0;
  fVar30 = 0.0;
  fVar27 = 0.0;
  fVar28 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar20 = 0.0;
  fVar33 = 0.0;
  fVar32 = 0.0;
  fVar31 = 0.0;
  *(float *)(param_1 + 0x17a0) =
       fVar34 * 1e-07 +
       *(float *)(param_1 + 0x17a0) + unaff_f20 * ((float)(iVar5 - iVar15) / 5.0 + 1.0) * 0.5 + 0.0;
  iVar15 = param_1;
  do {
    *(undefined4 *)(iVar15 + 0x17a4) = 0;
    *piVar16 = param_1 + uVar17 * 0x140 + 0x1b0;
    if (*(char *)(*piVar16 + 0x10) != '\0') {
      *(uint *)(iVar15 + 0x17a4) = *(uint *)(iVar15 + 0x17a4) | 1;
    }
    if (*(char *)(*piVar16 + 0xd4) != '\0') {
      *(uint *)(iVar15 + 0x17a4) = *(uint *)(iVar15 + 0x17a4) | 2;
    }
    if (*(char *)(*piVar16 + 0xd5) != '\0') {
      *(uint *)(iVar15 + 0x17a4) = *(uint *)(iVar15 + 0x17a4) | 4;
    }
    if (*(char *)(*piVar16 + 0xd6) != '\0') {
      *(uint *)(iVar15 + 0x17a4) = *(uint *)(iVar15 + 0x17a4) | 8;
    }
    if (*(char *)(*piVar16 + 0xd7) != '\0') {
      *(uint *)(iVar15 + 0x17a4) = *(uint *)(iVar15 + 0x17a4) | 0x10;
    }
    if ((int)uVar17 < 2) {
      iVar5 = *piVar16;
      fVar22 = *(float *)(iVar5 + 0x100);
      fVar34 = *(float *)(iVar5 + 0x108);
      fVar21 = *(float *)(iVar5 + 0xf0);
      fVar29 = fVar29 + fVar22;
      fVar25 = fVar25 + fVar34;
      fVar20 = fVar20 + fVar21;
    }
    else {
      iVar5 = *piVar16;
      fVar22 = *(float *)(iVar5 + 0x100);
      fVar34 = *(float *)(iVar5 + 0x108);
      fVar21 = *(float *)(iVar5 + 0xf0);
      fVar30 = fVar30 + fVar22;
      fVar26 = fVar26 + fVar34;
      fVar33 = fVar33 + fVar21;
    }
    uVar19 = uVar17 & 1;
    if (((int)uVar17 < 0) && (uVar19 != 0)) {
      uVar19 = uVar19 - 2;
    }
    if (uVar19 == 0) {
      fVar28 = fVar28 + fVar22;
      fVar24 = fVar24 + fVar34;
      fVar31 = fVar31 + fVar21;
    }
    else {
      fVar27 = fVar27 + fVar22;
      fVar23 = fVar23 + fVar34;
      fVar32 = fVar32 + fVar21;
    }
    uVar17 = uVar17 + 1;
    piVar16 = piVar16 + 1;
    iVar15 = iVar15 + 4;
  } while ((int)uVar17 < 4);
  *(undefined4 *)(param_1 + 0x1728) = *(undefined4 *)(param_1 + 0x6c);
  *(float *)(param_1 + 0x172c) = (*(float *)(param_1 + 0x1728) * 180.0) / 3.1415927;
  *(float *)(param_1 + 0x1730) = fVar29 / 2.0;
  *(float *)(param_1 + 0x1734) = fVar30 / 2.0;
  *(float *)(param_1 + 0x173c) = fVar27 / 2.0;
  *(float *)(param_1 + 0x1738) = fVar28 / 2.0;
  *(float *)(param_1 + 0x1740) = fVar25 / 2.0;
  *(float *)(param_1 + 0x1744) = fVar26 / 2.0;
  *(float *)(param_1 + 0x174c) = fVar23 / 2.0;
  *(float *)(param_1 + 0x1748) = fVar24 / 2.0;
  *(float *)(param_1 + 0x1750) = fVar20 / 2.0;
  *(float *)(param_1 + 0x1754) = fVar33 / 2.0;
  *(float *)(param_1 + 0x175c) = fVar32 / 2.0;
  *(float *)(param_1 + 0x1758) = fVar31 / 2.0;
  iVar15 = PhysBody_GetAngularVelocity(*(undefined4 *)(param_1 + 0x154));
  uStack_a4 = 0x3f800000;
  *(float *)(param_1 + 0x1720) = (-*(float *)(iVar15 + 4) * 3.0) / 3.1415927;
  uVar8 = PhysBody_GetRotation(*(undefined4 *)(param_1 + 0x154));
  AiLine_TransformToWorld(&uStack_1e0,uVar8);
  uStack_b0 = uStack_1e0;
  uStack_ac = uStack_1dc;
  uStack_a8 = uStack_1d8;
  uStack_a4 = uStack_1d4;
  fVar20 = (float)atan2f(uStack_1d8,uStack_1e0);
  *(float *)(param_1 + 0x171c) = (fVar20 * 180.0) / 3.1415927;
  fVar34 = fVar20 + *(float *)(param_1 + 0x1728);
  uVar12 = Race_CountActiveCars((fVar34 * 180.0) / 3.1415927);
  *(undefined4 *)(param_1 + 0x1718) = uVar12;
  uVar12 = sinf(fVar34);
  *(undefined4 *)(param_1 + 0x16d0) = uVar12;
  *(undefined4 *)(param_1 + 0x16d4) = uStack_ac;
  fVar34 = cosf(fVar34);
  *(float *)(param_1 + 0x16d8) = fVar34;
  uVar12 = sinf(fVar20);
  *(undefined4 *)(param_1 + 0x16e0) = uVar12;
  *(undefined4 *)(param_1 + 0x16e4) = uStack_ac;
  fVar20 = cosf(fVar20);
  *(float *)(param_1 + 0x16e8) = fVar20;
  uVar1 = *(ushort *)(param_1 + 0x1366);
  sVar2 = *(short *)(param_1 + 0x1368);
  uStack_b4 = 0x3f800000;
  uStack_c4 = 0x3f800000;
  uStack_d4 = 0x3f800000;
  uStack_e4 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  lVar9 = GameState_Get_40();
  if (lVar9 == 0) {
    if ((*(uint *)(param_1 + 0x17d8) & 4) == 0) {
      AiLine_GetDirection(auStack_250,1,uVar1,sVar2);
      uStack_c0 = auStack_250[0];
      uStack_b8 = uStack_248;
      uStack_b4 = uStack_244;
      uStack_bc = 0;
      AiLine_GetDirection(auStack_260,2,uVar1,sVar2);
      uStack_d0 = auStack_260[0];
      uStack_c8 = uStack_258;
      uStack_c4 = uStack_254;
    }
    else {
      AiLine_GetDirection(auStack_230,2,uVar1,sVar2);
      uStack_c0 = auStack_230[0];
      uStack_b8 = uStack_228;
      uStack_b4 = uStack_224;
      uStack_bc = 0;
      AiLine_GetDirection(auStack_240,1,uVar1,sVar2);
      uStack_d0 = auStack_240[0];
      uStack_c8 = uStack_238;
      uStack_c4 = uStack_234;
    }
  }
  else if ((*(uint *)(param_1 + 0x17d8) & 4) == 0) {
    AiLine_GetDirection(auStack_210,2,uVar1,sVar2);
    uStack_c0 = auStack_210[0];
    uStack_b8 = uStack_208;
    uStack_b4 = uStack_204;
    uStack_bc = 0;
    AiLine_GetDirection(auStack_220,1,uVar1,sVar2);
    uStack_d0 = auStack_220[0];
    uStack_c8 = uStack_218;
    uStack_c4 = uStack_214;
  }
  else {
    AiLine_GetDirection(auStack_1f0,1,uVar1,sVar2);
    uStack_c0 = auStack_1f0[0];
    uStack_b8 = uStack_1e8;
    uStack_b4 = uStack_1e4;
    uStack_bc = 0;
    AiLine_GetDirection(auStack_200,2,uVar1,sVar2);
    uStack_d0 = auStack_200[0];
    uStack_c8 = uStack_1f8;
    uStack_c4 = uStack_1f4;
  }
  uStack_cc = 0;
  Vec3_Sub(afStack_270,&uStack_d0,&uStack_c0);
  fStack_e0 = afStack_270[0];
  fStack_d8 = fStack_268;
  uStack_d4 = uStack_264;
  fStack_dc = 0.0;
  fVar20 = (float)Vec3_LengthB(&fStack_e0);
  *(float *)(param_1 + 0x1760) = fVar20;
  Vec3_Sub(auStack_280,uVar7,&uStack_c0);
  uStack_f0 = auStack_280[0];
  uStack_e8 = uStack_278;
  uStack_e4 = uStack_274;
  uStack_ec = 0;
  fVar34 = (float)Vec3_DotB(&fStack_e0,&uStack_f0);
  fVar23 = (float)Vec3_LengthB(&fStack_e0);
  fVar34 = fVar34 / fVar23;
  Vec3_Normalize(&fStack_e0);
  fStack_fc = fStack_dc * fVar34;
  fStack_100 = fStack_e0 * fVar34;
  fStack_f8 = fStack_d8 * fVar34;
  fVar34 = (float)Vec3_LengthB(&fStack_100);
  *(float *)(param_1 + 0x1768) = fVar34;
  iVar15 = sVar2 + 1;
  *(float *)(param_1 + 0x1764) = fVar34 / fVar20;
  uStack_104 = 0x3f800000;
  uStack_114 = 0x3f800000;
  uStack_124 = 0x3f800000;
  uStack_134 = 0x3f800000;
  if ((long)iVar15 < (long)**(short **)(g_RoadData->aiLine + (uint)uVar1 * 4)) {
    AiLine_GetDirection(&uStack_2a0,3,uVar1,(short)iVar15);
    uStack_120 = uStack_2a0;
    uStack_11c = uStack_29c;
    uStack_118 = uStack_298;
    uStack_114 = uStack_294;
  }
  else {
    AiLine_GetDirection(&uStack_290,3,uVar1 + 1,0);
    uStack_120 = uStack_290;
    uStack_11c = uStack_28c;
    uStack_118 = uStack_288;
    uStack_114 = uStack_284;
  }
  AiLine_GetDirection(&uStack_2b0,3,uVar1,sVar2);
  uStack_110 = uStack_2b0;
  uStack_10c = uStack_2ac;
  uStack_108 = uStack_2a8;
  uStack_104 = uStack_2a4;
  Vec3_Sub(auStack_2c0,&uStack_120,&uStack_110);
  uStack_130 = auStack_2c0[0];
  uStack_128 = uStack_2b8;
  uStack_124 = uStack_2b4;
  uStack_12c = 0;
  Vec3_Sub(auStack_2d0,uVar7,&uStack_110);
  uStack_140 = auStack_2d0[0];
  uStack_138 = uStack_2c8;
  uStack_134 = uStack_2c4;
  uStack_13c = 0;
  fVar34 = (float)Vec3_DotB(&uStack_130,&uStack_140);
  fVar23 = (float)Vec3_LengthB(&uStack_130);
  *(float *)(param_1 + 0x177c) = fVar34 / fVar23;
  uStack_144 = 0x3f800000;
  uStack_154 = 0x3f800000;
  uStack_164 = 0x3f800000;
  uStack_174 = 0x3f800000;
  uStack_184 = 0x3f800000;
  AiLine_GetDirection(&uStack_2e0,3,uVar1,sVar2);
  uStack_180 = uStack_2e0;
  uStack_17c = uStack_2dc;
  uStack_178 = uStack_2d8;
  uStack_174 = uStack_2d4;
  uStack_150 = uStack_2e0;
  uStack_14c = uStack_2dc;
  uStack_148 = uStack_2d8;
  uStack_144 = uStack_2d4;
  lVar9 = GameState_Get_40();
  if (lVar9 == 0) {
    if ((*(uint *)(param_1 + 0x17d8) & 4) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else if ((*(uint *)(param_1 + 0x17d8) & 4) == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  iVar15 = (int)sVar2;
  if (bVar3) {
    iVar5 = iVar15 + -2;
    lVar9 = (long)(short)uVar1;
    if (iVar5 < 0) {
      uVar17 = (int)(short)uVar1 - 1;
      if ((long)(int)uVar17 < 0) {
        iVar5 = iVar15 + 1;
      }
      else {
        iVar5 = **(short **)(g_RoadData->aiLine + (uVar17 & 0xffff) * 4) + -1;
        lVar9 = (long)(int)uVar17;
      }
    }
    AiLine_GetDirection(&uStack_2f0,3,(short)lVar9,(short)iVar5);
    uStack_190 = uStack_2f0;
    uStack_18c = uStack_2ec;
    uStack_188 = uStack_2e8;
    uStack_184 = uStack_2e4;
    uStack_170 = uStack_2f0;
    uStack_16c = uStack_2ec;
    uStack_168 = uStack_2e8;
    uStack_164 = uStack_2e4;
    Vec3_Sub(&uStack_300,&uStack_170,&uStack_150);
    *(undefined4 *)(param_1 + 0x16f0) = uStack_300;
    *(undefined4 *)(param_1 + 0x16f4) = uStack_2fc;
    *(undefined4 *)(param_1 + 0x16f8) = uStack_2f8;
    *(undefined4 *)(param_1 + 0x16fc) = uStack_2f4;
    *(undefined4 *)(param_1 + 0x16f4) = 0;
    Vec3_Normalize(param_1 + 0x16f0);
    Vec3_Sub(&uStack_310,&uStack_190,&uStack_180);
    *(undefined4 *)(param_1 + 0x1700) = uStack_310;
    *(undefined4 *)(param_1 + 0x1704) = uStack_30c;
    *(undefined4 *)(param_1 + 0x1708) = uStack_308;
    *(undefined4 *)(param_1 + 0x170c) = uStack_304;
    *(undefined4 *)(param_1 + 0x1704) = 0;
    Vec3_Normalize(param_1 + 0x1700);
  }
  else {
    lVar10 = (long)(sVar2 + 1);
    lVar9 = (long)(short)uVar1;
    if (**(short **)(g_RoadData->aiLine + (uint)uVar1 * 4) <= lVar10) {
      lVar10 = 0;
      lVar9 = (long)((short)uVar1 + 1);
      if ((long)(int)g_RoadData->unk_00 <= (long)((short)uVar1 + 1)) {
        lVar10 = (long)(iVar15 + -1);
        lVar9 = (long)(short)uVar1;
      }
    }
    AiLine_GetDirection(&uStack_320,3,(short)lVar9,(short)lVar10);
    uStack_190 = uStack_320;
    uStack_18c = uStack_31c;
    uStack_188 = uStack_318;
    uStack_184 = uStack_314;
    uStack_170 = uStack_320;
    uStack_16c = uStack_31c;
    uStack_168 = uStack_318;
    uStack_164 = uStack_314;
    Vec3_Sub(&uStack_330,&uStack_170,&uStack_150);
    *(undefined4 *)(param_1 + 0x16f0) = uStack_330;
    *(undefined4 *)(param_1 + 0x16f4) = uStack_32c;
    *(undefined4 *)(param_1 + 0x16f8) = uStack_328;
    *(undefined4 *)(param_1 + 0x16fc) = uStack_324;
    *(undefined4 *)(param_1 + 0x16f4) = 0;
    Vec3_Normalize(param_1 + 0x16f0);
    Vec3_Sub(&uStack_340,&uStack_190,&uStack_180);
    *(undefined4 *)(param_1 + 0x1700) = uStack_340;
    *(undefined4 *)(param_1 + 0x1704) = uStack_33c;
    *(undefined4 *)(param_1 + 0x1708) = uStack_338;
    *(undefined4 *)(param_1 + 0x170c) = uStack_334;
    *(undefined4 *)(param_1 + 0x1704) = 0;
    Vec3_Normalize(param_1 + 0x1700);
  }
  Vec3_Sub(auStack_350,&uStack_150,&uStack_c0);
  uStack_160 = auStack_350[0];
  uStack_158 = uStack_348;
  uStack_154 = uStack_344;
  uStack_15c = 0;
  fVar34 = (float)Vec3_LengthB(&uStack_160);
  *(float *)(param_1 + 6000) = fVar34;
  *(float *)(param_1 + 0x176c) = fVar34 / fVar20;
  fVar20 = *(float *)(param_1 + 0x1768) - *(float *)(param_1 + 6000);
  *(float *)(param_1 + 0x1778) = fVar20;
  if (fVar20 < 0.0) {
    *(float *)(param_1 + 0x1774) = fVar20 / *(float *)(param_1 + 6000);
  }
  else {
    *(float *)(param_1 + 0x1774) =
         fVar20 / (*(float *)(param_1 + 0x1760) - *(float *)(param_1 + 6000));
  }
  if (*(float *)(param_1 + 0x1774) <= 1.0) {
    if (*(float *)(param_1 + 0x1774) < -1.0) {
      *(undefined4 *)(param_1 + 0x1774) = 0xbf800000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1774) = 0x3f800000;
  }
  fVar20 = 0.0;
  *(undefined2 *)(param_1 + 0x17b8) = *(undefined2 *)(param_1 + 0x1366);
  *(int *)(param_1 + 0x17b4) = (int)*(short *)(param_1 + 0x1368);
  lVar9 = GameState_Get_44();
  if (lVar9 != 0) {
    uVar17 = GameState_Get_1();
    puVar6 = (undefined4 *)((int)lVar9 + (uVar17 & 0xff) * 0x10);
    uStack_1a0 = *puVar6;
    iStack_19c = puVar6[1];
    uStack_198 = puVar6[2];
    uStack_194 = puVar6[3];
    iVar15 = GameState_Get_c();
    sStack_10 = *(short *)(param_1 + 0x1366);
    puVar6 = (undefined4 *)(iStack_19c + iVar15 * 0x10);
    uStack_1b0 = *puVar6;
    sStack_e = sStack_10 >> 0xf;
    uStack_1ac = puVar6[1];
    uStack_1a8 = puVar6[2];
    iStack_c = (int)*(short *)(param_1 + 0x1368);
    uStack_1a4 = puVar6[3];
    uStack_8 = uStack_1b0;
    uStack_4 = uStack_1ac;
    lVar9 = Checkpoint_GetPosition((short)uStack_1b0);
    lVar10 = Checkpoint_GetPosition(sStack_10,iStack_c);
    lVar11 = GameState_Get_40();
    if (lVar11 == 0) {
      if (lVar9 <= lVar10) {
        fVar20 = (float)Checkpoint_BuildGate
                                  (CONCAT44(uStack_4,uStack_8),
                                   CONCAT44(iStack_c,CONCAT22(sStack_e,sStack_10)));
        fVar20 = fVar20 + *(float *)(param_1 + 0x177c);
      }
    }
    else {
      if (lVar9 <= lVar10) {
        uVar12 = *(undefined4 *)(param_1 + 0x1780);
        goto LAB_001cc744;
      }
      fVar20 = (float)Checkpoint_BuildGate
                                (CONCAT44(uStack_4,uStack_8),
                                 CONCAT44(iStack_c,CONCAT22(sStack_e,sStack_10)));
      fVar20 = fVar20 - *(float *)(param_1 + 0x177c);
    }
  }
  uVar12 = *(undefined4 *)(param_1 + 0x1780);
LAB_001cc744:
  *(undefined4 *)(param_1 + 0x1784) = uVar12;
  *(float *)(param_1 + 0x1780) = fVar20;
  cVar4 = GameState_Get_0();
  if (cVar4 != '\b') {
    uVar7 = PhysBody_GetPositionPtr(*(undefined4 *)(param_1 + 0x154));
    puVar6 = (undefined4 *)uVar7;
    uStack_1c0 = *puVar6;
    uStack_1bc = puVar6[1];
    uStack_1b8 = puVar6[2];
    uStack_1b4 = puVar6[3];
    fVar20 = (float)Vec3_LengthB(&uStack_1c0);
    fVar20 = (fVar20 * 60.0 * 60.0) / 1000.0;
    uVar12 = Vec3_AngleBetweenSigned(uVar7,param_1 + 0x1700);
    *(undefined4 *)(param_1 + 0x1714) = uVar12;
    if ((*(uint *)(param_1 + 0x17d8) & 0x100) == 0) {
      if ((4.0 < fVar20) &&
         ((125.0 <= *(float *)(param_1 + 0x1714) || (*(float *)(param_1 + 0x1714) <= -125.0)))) {
        *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 0x100;
      }
    }
    else if (4.0 < fVar20) {
      if ((*(float *)(param_1 + 0x1714) < 90.0) && (-90.0 < *(float *)(param_1 + 0x1714))) {
        *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) & 0xfffffeff;
      }
    }
    else {
      *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) & 0xfffffeff;
    }
  }
  return;
}

