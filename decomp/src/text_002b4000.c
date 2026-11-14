// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002b4000 - 0x002b8000
#include "ghidra_types.h"

// 0x002b4090  size 0xae4
undefined4 FUN_002b4090(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iStack_80;
  int iStack_70;
  int aiStack_60 [8];
  int aiStack_40 [10];
  int iStack_18;
  int iStack_14;
  int aiStack_10 [3];
  short sStack_4;
  undefined1 uStack_1;
  
  iVar13 = 0;
  iVar12 = 0;
  piVar17 = aiStack_40;
  iStack_14 = 0;
  iStack_18 = 0;
  sStack_4 = 0;
  iVar5 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
  puVar18 = (undefined4 *)(iVar5 + 0x6fe4);
  iVar9 = *(int *)(iVar5 + 0x6ff0);
  iVar11 = param_1;
  piVar15 = piVar17;
  do {
    bVar4 = false;
    if (0 < *(int *)(iVar11 + 0x2f0)) {
      bVar3 = true;
      bVar1 = *(int *)(iVar11 + 0x1cc) != 0;
      bVar2 = true;
      if (!bVar1) {
        bVar1 = *(int *)(iVar11 + 0x1e8) != 0;
      }
      if (!bVar1) {
        bVar1 = *(int *)(iVar11 + 0x2b8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar11 + 0x2d0) != 0;
        }
        if (!bVar1) {
          bVar2 = false;
        }
      }
      if (!bVar2) {
        bVar1 = *(int *)(iVar11 + 0x2e8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar11 + 0x2ec) != 0;
        }
        if (!bVar1) {
          bVar3 = false;
        }
      }
      if (!bVar3) {
        bVar4 = true;
      }
    }
    if (bVar4) {
      if ((*(int *)(iVar11 + 0x2f4) < 1) || (*(char *)(iVar11 + 0x1d5) < '\x01')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      *piVar15 = iVar11 + 0x254;
      iVar13 = iVar13 + *(int *)(*piVar15 + 0xc) + 1;
      iStack_14 = iVar13;
    }
    else {
      *piVar15 = 0;
    }
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + 0xda8;
    piVar15 = piVar15 + 1;
  } while (iVar12 < 8);
  iStack_14 = iVar13 + -1;
  *(int *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x7004) = iVar9;
  aiStack_10[2] = 0x53434549;
  aiStack_10[1] = 0x53736574;
  iVar11 = *(int *)(iVar5 + 0x6ff0);
  uVar7 = *(uint *)(iVar5 + 0x6fec);
  if (uVar7 < iVar11 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,*puVar18);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
          uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
            uVar7 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar7;
        }
      }
      iVar11 = *(int *)(iVar5 + 0x6ff0);
      uVar7 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar7 < iVar11 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar11,aiStack_10 + 2,4);
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  iVar11 = *(int *)(iVar5 + 0x6ff0);
  uVar7 = *(uint *)(iVar5 + 0x6fec);
  if (uVar7 < iVar11 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,*puVar18);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
          uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
            uVar7 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar7;
        }
      }
      iVar11 = *(int *)(iVar5 + 0x6ff0);
      uVar7 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar7 < iVar11 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar11,aiStack_10 + 1,4);
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  iVar11 = *(int *)(iVar5 + 0x6ff0);
  uVar7 = *(uint *)(iVar5 + 0x6fec);
  if (uVar7 < iVar11 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,*puVar18);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
          uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
            uVar7 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar7;
        }
      }
      iVar11 = *(int *)(iVar5 + 0x6ff0);
      uVar7 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar7 < iVar11 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar11,&iStack_14,4);
  piVar16 = aiStack_60;
  iVar11 = 0;
  iVar12 = 0;
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  piVar15 = piVar17;
  piVar14 = piVar16;
  do {
    iVar13 = *piVar15;
    if (iVar13 != 0) {
      *piVar14 = 0;
      uVar7 = 0;
      iVar20 = 0;
      iStack_70 = 0;
      do {
        if (*(int *)(*(int *)(iVar13 + 0x10) + iVar20) == -1) {
          iStack_18 = -1;
        }
        else {
          iStack_18 = iVar11 + (iStack_14 + 1) * 4 + 0x10;
          iVar11 = iVar11 + (uint)*(byte *)(*(int *)(*piVar15 + 0x14) + iStack_70 + 3) * 2 + 4;
        }
        iVar13 = *(int *)(iVar5 + 0x6ff0);
        uVar8 = *(uint *)(iVar5 + 0x6fec);
        *piVar14 = *piVar14 + 1;
        if (uVar8 < iVar13 + 4U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                  uVar8 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar8;
              }
            }
            iVar13 = *(int *)(iVar5 + 0x6ff0);
            uVar8 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar8 < iVar13 + 4U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,&iStack_18,4);
        uVar7 = uVar7 + 1;
        iVar13 = *piVar15;
        iStack_70 = iStack_70 + 8;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
        iVar20 = iVar20 + 4;
      } while (uVar7 <= *(uint *)(iVar13 + 0xc));
    }
    iVar12 = iVar12 + 1;
    piVar15 = piVar15 + 1;
    piVar14 = piVar14 + 1;
  } while (iVar12 < 8);
  iStack_80 = 0;
  iVar11 = 0;
  do {
    iVar12 = *piVar17;
    if (iVar12 != 0) {
      uVar7 = 0;
      iVar20 = 0;
      iVar13 = 0;
      do {
        if (*(int *)(*(int *)(iVar12 + 0x10) + iVar20) != -1) {
          iVar12 = *(int *)(iVar12 + 0x14);
          iVar10 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar10 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar10 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,iVar12 + iVar13,1);
          iVar12 = *piVar17;
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar12 = *(int *)(iVar12 + 0x14);
          iVar10 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar10 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar10 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,iVar12 + iVar13 + 1,1);
          iVar12 = *piVar17;
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar12 = *(int *)(iVar12 + 0x14);
          iVar10 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar10 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar10 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,iVar12 + iVar13 + 2,1);
          iVar12 = *piVar17;
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar12 = *(int *)(iVar12 + 0x14);
          iVar10 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar10 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar10 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,iVar12 + iVar13 + 3,1);
          iVar12 = *piVar17;
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar10 = *(int *)(iVar12 + 0x14) + iVar13;
          iVar19 = 0;
          if (*(char *)(iVar10 + 3) != '\0') {
            iVar21 = 0;
            do {
              sStack_4 = (short)iStack_80 + *(short *)(*(int *)(iVar10 + 4) + iVar21);
              iVar12 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar12 + 2U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar12 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar12 + 2U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar12,&sStack_4,2);
              iVar19 = iVar19 + 1;
              iVar12 = *piVar17;
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
              iVar10 = iVar13 + *(int *)(iVar12 + 0x14);
              iVar21 = iVar21 + 2;
            } while (iVar19 < (int)(uint)*(byte *)(iVar10 + 3));
          }
        }
        uVar7 = uVar7 + 1;
        iVar20 = iVar20 + 4;
        iVar13 = iVar13 + 8;
      } while (uVar7 <= *(uint *)(iVar12 + 0xc));
      iStack_80 = iStack_80 + *piVar16;
    }
    iVar11 = iVar11 + 1;
    piVar17 = piVar17 + 1;
    piVar16 = piVar16 + 1;
  } while (iVar11 < 8);
  uStack_1 = 0xff;
  uVar7 = *(uint *)(iVar5 + 0x6ff0) & 0xf;
  if (uVar7 != 0) {
    iVar11 = 0x10 - uVar7;
    iVar12 = 0;
    if (0 < iVar11) {
      do {
        iVar13 = *(int *)(iVar5 + 0x6ff0);
        uVar7 = *(uint *)(iVar5 + 0x6fec);
        if (uVar7 < iVar13 + 1U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,*puVar18);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
                uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
                  uVar7 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar7;
              }
            }
            iVar13 = *(int *)(iVar5 + 0x6ff0);
            uVar7 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar7 < iVar13 + 1U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,&uStack_1,1);
        iVar12 = iVar12 + 1;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
      } while (iVar12 < iVar11);
    }
  }
  iVar11 = *(int *)(iVar5 + 0x6ff0);
  aiStack_10[0] = iVar11 - iVar9;
  *(int *)(iVar5 + 0x6ff0) = iVar9 + 8;
  iVar9 = *(int *)(iVar5 + 0x6ff0);
  uVar7 = *(uint *)(iVar5 + 0x6fec);
  if (uVar7 < iVar9 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,*puVar18);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
          uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
            uVar7 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar7;
        }
      }
      iVar9 = *(int *)(iVar5 + 0x6ff0);
      uVar7 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar7 < iVar9 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar9,aiStack_10,4);
  *(int *)(iVar5 + 0x6ff0) = iVar11;
  return 1;
}

// 0x002b4b80  size 0x2284
undefined4 FUN_002b4b80(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  short *psVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  int iStack_b0;
  int iStack_a0;
  int iStack_90;
  uint uStack_80;
  uint uStack_70;
  int aiStack_60 [8];
  int aiStack_40 [11];
  int iStack_14;
  int aiStack_10 [3];
  short sStack_4;
  undefined1 uStack_1;
  
  iVar13 = 0;
  piVar17 = aiStack_40;
  piVar16 = aiStack_60;
  aiStack_10[0] = 0;
  iVar5 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
  puVar18 = (undefined4 *)(iVar5 + 0x6fe4);
  iVar11 = *(int *)(iVar5 + 0x6ff0);
  iVar12 = param_1;
  piVar14 = piVar17;
  piVar7 = piVar16;
  do {
    bVar4 = false;
    if (0 < *(int *)(iVar12 + 0x2f0)) {
      bVar3 = true;
      bVar1 = *(int *)(iVar12 + 0x1cc) != 0;
      bVar2 = true;
      if (!bVar1) {
        bVar1 = *(int *)(iVar12 + 0x1e8) != 0;
      }
      if (!bVar1) {
        bVar1 = *(int *)(iVar12 + 0x2b8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar12 + 0x2d0) != 0;
        }
        if (!bVar1) {
          bVar2 = false;
        }
      }
      if (!bVar2) {
        bVar1 = *(int *)(iVar12 + 0x2e8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar12 + 0x2ec) != 0;
        }
        if (!bVar1) {
          bVar3 = false;
        }
      }
      if (!bVar3) {
        bVar4 = true;
      }
    }
    if (bVar4) {
      if ((*(int *)(iVar12 + 0x2f4) < 1) || (*(char *)(iVar12 + 0x1d5) < '\x01')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      *piVar14 = iVar12 + 0x23c;
      *piVar7 = iVar12 + 0x254;
    }
    else {
      *piVar14 = 0;
      *piVar7 = 0;
    }
    iVar13 = iVar13 + 1;
    iVar12 = iVar12 + 0xda8;
    piVar14 = piVar14 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar13 < 8);
  *(int *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x7000) = iVar11;
  aiStack_10[2] = 0x53434549;
  aiStack_10[1] = 0x50726f67;
  iVar12 = *(int *)(iVar5 + 0x6ff0);
  uVar8 = *(uint *)(iVar5 + 0x6fec);
  if (uVar8 < iVar12 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
          uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
            uVar8 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar8;
        }
      }
      iVar12 = *(int *)(iVar5 + 0x6ff0);
      uVar8 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar8 < iVar12 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar12,aiStack_10 + 2,4);
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  iVar12 = *(int *)(iVar5 + 0x6ff0);
  uVar8 = *(uint *)(iVar5 + 0x6fec);
  if (uVar8 < iVar12 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
          uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
            uVar8 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar8;
        }
      }
      iVar12 = *(int *)(iVar5 + 0x6ff0);
      uVar8 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar8 < iVar12 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar12,aiStack_10 + 1,4);
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  iVar12 = *(int *)(iVar5 + 0x6ff0);
  uVar8 = *(uint *)(iVar5 + 0x6fec);
  if (uVar8 < iVar12 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
          uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
            uVar8 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar8;
        }
      }
      iVar12 = *(int *)(iVar5 + 0x6ff0);
      uVar8 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar8 < iVar12 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar12,0x367928,4);
  iVar12 = 0;
  uStack_70 = 0;
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  piVar14 = piVar17;
  do {
    iVar13 = 0x10;
    if (*piVar14 != 0) {
      uVar8 = 0;
      iVar13 = 0;
      iVar19 = 0;
      do {
        if (*(int *)(*(int *)(*piVar14 + 0x10) + iVar13) == -1) {
          iStack_14 = -1;
        }
        else {
          iStack_14 = iVar12 + 0x210;
          iVar12 = iVar12 + (uint)*(byte *)(*(int *)(*piVar14 + 0x14) + iVar19 + 4) * 0x14 + 0x24;
        }
        iVar20 = *(int *)(iVar5 + 0x6ff0);
        uVar9 = *(uint *)(iVar5 + 0x6fec);
        if (uVar9 < iVar20 + 4U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar18);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                  uVar9 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar9;
              }
            }
            iVar20 = *(int *)(iVar5 + 0x6ff0);
            uVar9 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar9 < iVar20 + 4U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar20,&iStack_14,4);
        uVar8 = uVar8 + 1;
        iVar20 = *piVar14;
        iVar13 = iVar13 + 4;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
        iVar19 = iVar19 + 0x28;
      } while (uVar8 <= *(uint *)(iVar20 + 0xc));
      uVar8 = *(uint *)(iVar20 + 0xc) + 1;
      if (uVar8 < 0x10) {
        iVar13 = 0x10 - uVar8;
      }
      else {
        iVar13 = 0;
      }
    }
    iVar19 = 0;
    if (0 < iVar13) {
      do {
        iVar20 = *(int *)(iVar5 + 0x6ff0);
        uVar8 = *(uint *)(iVar5 + 0x6fec);
        if (uVar8 < iVar20 + 4U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                  uVar8 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar8;
              }
            }
            iVar20 = *(int *)(iVar5 + 0x6ff0);
            uVar8 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar8 < iVar20 + 4U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar20,0x367930,4);
        iVar19 = iVar19 + 1;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
      } while (iVar19 < iVar13);
    }
    uStack_70 = uStack_70 + 1;
    piVar14 = piVar14 + 1;
  } while (uStack_70 < 8);
  iStack_b0 = 0;
  iVar12 = 0;
  do {
    iVar13 = *piVar17;
    if (iVar13 != 0) {
      uStack_80 = 0;
      iStack_90 = 0;
      iStack_a0 = 0;
      do {
        if (*(int *)(*(int *)(iVar13 + 0x10) + iStack_90) != -1) {
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          iVar13 = *(int *)(iVar13 + 0x14) + iStack_a0;
          if (uVar8 < iVar19 + 4U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 4U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13,4);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 4,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 5,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 6,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 7,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 8,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 9,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 10,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0xb,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0xc,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0xd,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0xe,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0xf,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x10,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x11,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x12,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x13,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x14,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x16,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x18,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x1a,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x1c,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x1e,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x20,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x21,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x22,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = *(int *)(iVar5 + 0x6ff0);
          uVar8 = *(uint *)(iVar5 + 0x6fec);
          if (uVar8 < iVar19 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                  uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                    uVar8 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar8;
                }
              }
              iVar19 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar8 < iVar19 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,iVar13 + 0x23,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar19 = 0;
          if (*(char *)(iVar13 + 4) != '\0') {
            iVar20 = 0;
            do {
              psVar15 = (short *)(*(int *)(iVar13 + 0x24) + iVar20);
              sStack_4 = *psVar15 + (short)iStack_b0;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 2U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 2U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,&sStack_4,2);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,psVar15 + 1,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,(int)psVar15 + 3,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,psVar15 + 2,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,(int)psVar15 + 5,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 2U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 2U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,psVar15 + 3,2);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 2U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 2U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,psVar15 + 4,2);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,psVar15 + 5,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,(int)psVar15 + 0xb,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,psVar15 + 6,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,(int)psVar15 + 0xd,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,psVar15 + 7,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,(int)psVar15 + 0xf,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,psVar15 + 8,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,(int)psVar15 + 0x11,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,psVar15 + 9,1);
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar10 = *(int *)(iVar5 + 0x6ff0);
              uVar8 = *(uint *)(iVar5 + 0x6fec);
              if (uVar8 < iVar10 + 1U) {
                do {
                  if (*(int *)(iVar5 + 0x6fe8) != 0) {
                    uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
                    *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                    if (*(int *)(iVar5 + 0x6fe8) != 0) {
                      *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                      uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                      if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                        uVar8 = *(uint *)(iVar5 + 0x6ff0);
                      }
                      *(uint *)(iVar5 + 0x6ff0) = uVar8;
                    }
                  }
                  iVar10 = *(int *)(iVar5 + 0x6ff0);
                  uVar8 = *(uint *)(iVar5 + 0x6fec);
                } while (uVar8 < iVar10 + 1U);
              }
              maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,(int)psVar15 + 0x13,1);
              iVar19 = iVar19 + 1;
              *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
              iVar20 = iVar20 + 0x14;
            } while (iVar19 < (int)(uint)*(byte *)(iVar13 + 4));
          }
        }
        iVar13 = *piVar17;
        iStack_90 = iStack_90 + 4;
        iStack_a0 = iStack_a0 + 0x28;
        uStack_80 = uStack_80 + 1;
      } while (uStack_80 <= *(uint *)(iVar13 + 0xc));
      iStack_b0 = iStack_b0 + *(int *)(*piVar16 + 0xc) + 1;
    }
    iVar12 = iVar12 + 1;
    piVar17 = piVar17 + 1;
    piVar16 = piVar16 + 1;
  } while (iVar12 < 8);
  uStack_1 = 0xff;
  uVar8 = *(uint *)(iVar5 + 0x6ff0) & 0xf;
  if (uVar8 != 0) {
    iVar12 = 0x10 - uVar8;
    iVar13 = 0;
    if (0 < iVar12) {
      do {
        iVar19 = *(int *)(iVar5 + 0x6ff0);
        uVar8 = *(uint *)(iVar5 + 0x6fec);
        if (uVar8 < iVar19 + 1U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                  uVar8 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar8;
              }
            }
            iVar19 = *(int *)(iVar5 + 0x6ff0);
            uVar8 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar8 < iVar19 + 1U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar19,&uStack_1,1);
        iVar13 = iVar13 + 1;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
      } while (iVar13 < iVar12);
    }
  }
  iVar12 = *(int *)(iVar5 + 0x6ff0);
  aiStack_10[0] = iVar12 - iVar11;
  *(int *)(iVar5 + 0x6ff0) = iVar11 + 8;
  iVar11 = *(int *)(iVar5 + 0x6ff0);
  uVar8 = *(uint *)(iVar5 + 0x6fec);
  if (uVar8 < iVar11 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar18);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
          uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
            uVar8 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar8;
        }
      }
      iVar11 = *(int *)(iVar5 + 0x6ff0);
      uVar8 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar8 < iVar11 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar11,aiStack_10,4);
  *(int *)(iVar5 + 0x6ff0) = iVar12;
  return 1;
}

// 0x002b6e10  size 0x7cc
undefined4 FUN_002b6e10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [24];
  
  param_1 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
  iVar1 = *(int *)(param_1 + 0x6ff0);
  puVar4 = (undefined4 *)(param_1 + 0x6fe4);
  uStack_40 = 0x53434549;
  uStack_3c = 0x48656164;
  uStack_34 = iVar1 + 0xfU & 0xfffffff0;
  uStack_38 = 0x40;
  uStack_30 = *(undefined4 *)(param_1 + 0x6ffc);
  uStack_1c = 0xffffffff;
  uStack_20 = *(undefined4 *)(param_1 + 0x700c);
  uStack_24 = *(undefined4 *)(param_1 + 0x7008);
  uStack_28 = *(undefined4 *)(param_1 + 0x7004);
  uStack_2c = *(undefined4 *)(param_1 + 0x7000);
  Mem_Set16(auStack_18,0xff,0x18);
  *(undefined4 *)(param_1 + 0x6ff0) = 0x10;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_40,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_3c,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_38,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_34,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_30,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_2c,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_28,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_24,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_20,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_1c,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 0x18U) {
    do {
      iVar5 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar2 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar5,*puVar4);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar2;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar5;
          uVar3 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar3;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 0x18U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),auStack_18,0x18);
  *(int *)(param_1 + 0x6ff0) = iVar1;
  return 1;
}

// 0x002b75e0  size 0x45c
undefined4 FUN_002b75e0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined2 uStack_4;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  uStack_8 = 0x10;
  uStack_4 = 0;
  uStack_10 = 0x53434549;
  uStack_1 = 0;
  uStack_c = 0x56657273;
  uStack_2 = 2;
  param_1 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
  *(undefined4 *)(param_1 + 0x6ff0) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x6fe4);
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar1;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_10,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar1;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_c,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar1;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_8,4);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 4;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 2U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar1;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 2U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_4,2);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 2;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 1U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar1;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 1U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_2,1);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 1;
  if (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 1U) {
    do {
      iVar4 = *(int *)(param_1 + 0x6fec) << 1;
      if (*(int *)(param_1 + 0x6fe8) != 0) {
        uVar1 = Mem_Realloc(*(int *)(param_1 + 0x6fe8),iVar4,*puVar3);
        *(undefined4 *)(param_1 + 0x6fe8) = uVar1;
        if (*(int *)(param_1 + 0x6fe8) != 0) {
          *(int *)(param_1 + 0x6fec) = iVar4;
          uVar2 = *(int *)(param_1 + 0x6fec) - 1;
          if (*(uint *)(param_1 + 0x6ff0) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 0x6ff0);
          }
          *(uint *)(param_1 + 0x6ff0) = uVar2;
        }
      }
    } while (*(uint *)(param_1 + 0x6fec) < *(int *)(param_1 + 0x6ff0) + 1U);
  }
  maybe_Mem_CopyQwords(*(int *)(param_1 + 0x6fe8) + *(int *)(param_1 + 0x6ff0),&uStack_1,1);
  *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6ff0) + 1;
  return 1;
}

// 0x002b7a40  size 0x5ac
undefined4 FUN_002b7a40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [7];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined2 uStack_2;
  
  uStack_8 = 0x14;
  uStack_c = 6;
  uStack_2 = 0x1e0;
  uStack_30 = 0x53434549;
  uStack_2c = 0x4d696469;
  iVar4 = param_1 + (1 - *(int *)(param_1 + 0x89e8)) * 0xda8;
  param_1 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
  aiStack_28[0] = *(int *)(param_1 + 0x6f04) + 0x1a;
  aiStack_28[1] = 0;
  *(undefined4 *)(iVar4 + 0x6f04) = 0x30;
  puVar6 = (undefined4 *)(iVar4 + 0x6ef8);
  if (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U) {
    do {
      iVar7 = *(int *)(iVar4 + 0x6f00) << 1;
      if (*(int *)(iVar4 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar4 + 0x6efc),iVar7,*puVar6);
        *(undefined4 *)(iVar4 + 0x6efc) = uVar1;
        if (*(int *)(iVar4 + 0x6efc) != 0) {
          *(int *)(iVar4 + 0x6f00) = iVar7;
          uVar3 = *(int *)(iVar4 + 0x6f00) - 1;
          if (*(uint *)(iVar4 + 0x6f04) <= uVar3) {
            uVar3 = *(uint *)(iVar4 + 0x6f04);
          }
          *(uint *)(iVar4 + 0x6f04) = uVar3;
        }
      }
    } while (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar4 + 0x6efc) + *(int *)(iVar4 + 0x6f04),&uStack_30,4);
  *(int *)(iVar4 + 0x6f04) = *(int *)(iVar4 + 0x6f04) + 4;
  if (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U) {
    do {
      iVar7 = *(int *)(iVar4 + 0x6f00) << 1;
      if (*(int *)(iVar4 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar4 + 0x6efc),iVar7,*puVar6);
        *(undefined4 *)(iVar4 + 0x6efc) = uVar1;
        if (*(int *)(iVar4 + 0x6efc) != 0) {
          *(int *)(iVar4 + 0x6f00) = iVar7;
          uVar3 = *(int *)(iVar4 + 0x6f00) - 1;
          if (*(uint *)(iVar4 + 0x6f04) <= uVar3) {
            uVar3 = *(uint *)(iVar4 + 0x6f04);
          }
          *(uint *)(iVar4 + 0x6f04) = uVar3;
        }
      }
    } while (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar4 + 0x6efc) + *(int *)(iVar4 + 0x6f04),&uStack_2c,4);
  *(int *)(iVar4 + 0x6f04) = *(int *)(iVar4 + 0x6f04) + 4;
  if (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U) {
    do {
      iVar7 = *(int *)(iVar4 + 0x6f00) << 1;
      if (*(int *)(iVar4 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar4 + 0x6efc),iVar7,*puVar6);
        *(undefined4 *)(iVar4 + 0x6efc) = uVar1;
        if (*(int *)(iVar4 + 0x6efc) != 0) {
          *(int *)(iVar4 + 0x6f00) = iVar7;
          uVar3 = *(int *)(iVar4 + 0x6f00) - 1;
          if (*(uint *)(iVar4 + 0x6f04) <= uVar3) {
            uVar3 = *(uint *)(iVar4 + 0x6f04);
          }
          *(uint *)(iVar4 + 0x6f04) = uVar3;
        }
      }
    } while (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar4 + 0x6efc) + *(int *)(iVar4 + 0x6f04),aiStack_28,4);
  *(int *)(iVar4 + 0x6f04) = *(int *)(iVar4 + 0x6f04) + 4;
  if (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U) {
    do {
      iVar7 = *(int *)(iVar4 + 0x6f00) << 1;
      if (*(int *)(iVar4 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar4 + 0x6efc),iVar7,*puVar6);
        *(undefined4 *)(iVar4 + 0x6efc) = uVar1;
        if (*(int *)(iVar4 + 0x6efc) != 0) {
          *(int *)(iVar4 + 0x6f00) = iVar7;
          uVar3 = *(int *)(iVar4 + 0x6f00) - 1;
          if (*(uint *)(iVar4 + 0x6f04) <= uVar3) {
            uVar3 = *(uint *)(iVar4 + 0x6f04);
          }
          *(uint *)(iVar4 + 0x6f04) = uVar3;
        }
      }
    } while (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar4 + 0x6efc) + *(int *)(iVar4 + 0x6f04),aiStack_28 + 1,4);
  *(int *)(iVar4 + 0x6f04) = *(int *)(iVar4 + 0x6f04) + 4;
  if (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U) {
    do {
      iVar7 = *(int *)(iVar4 + 0x6f00) << 1;
      if (*(int *)(iVar4 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar4 + 0x6efc),iVar7,*puVar6);
        *(undefined4 *)(iVar4 + 0x6efc) = uVar1;
        if (*(int *)(iVar4 + 0x6efc) != 0) {
          *(int *)(iVar4 + 0x6f00) = iVar7;
          uVar3 = *(int *)(iVar4 + 0x6f00) - 1;
          if (*(uint *)(iVar4 + 0x6f04) <= uVar3) {
            uVar3 = *(uint *)(iVar4 + 0x6f04);
          }
          *(uint *)(iVar4 + 0x6f04) = uVar3;
        }
      }
    } while (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar4 + 0x6efc) + *(int *)(iVar4 + 0x6f04),&uStack_8,4);
  *(int *)(iVar4 + 0x6f04) = *(int *)(iVar4 + 0x6f04) + 4;
  if (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U) {
    do {
      iVar7 = *(int *)(iVar4 + 0x6f00) << 1;
      if (*(int *)(iVar4 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar4 + 0x6efc),iVar7,*puVar6);
        *(undefined4 *)(iVar4 + 0x6efc) = uVar1;
        if (*(int *)(iVar4 + 0x6efc) != 0) {
          *(int *)(iVar4 + 0x6f00) = iVar7;
          uVar3 = *(int *)(iVar4 + 0x6f00) - 1;
          if (*(uint *)(iVar4 + 0x6f04) <= uVar3) {
            uVar3 = *(uint *)(iVar4 + 0x6f04);
          }
          *(uint *)(iVar4 + 0x6f04) = uVar3;
        }
      }
    } while (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar4 + 0x6efc) + *(int *)(iVar4 + 0x6f04),&uStack_c,4);
  *(int *)(iVar4 + 0x6f04) = *(int *)(iVar4 + 0x6f04) + 4;
  if (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 2U) {
    do {
      iVar7 = *(int *)(iVar4 + 0x6f00) << 1;
      if (*(int *)(iVar4 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar4 + 0x6efc),iVar7,*puVar6);
        *(undefined4 *)(iVar4 + 0x6efc) = uVar1;
        if (*(int *)(iVar4 + 0x6efc) != 0) {
          *(int *)(iVar4 + 0x6f00) = iVar7;
          uVar3 = *(int *)(iVar4 + 0x6f00) - 1;
          if (*(uint *)(iVar4 + 0x6f04) <= uVar3) {
            uVar3 = *(uint *)(iVar4 + 0x6f04);
          }
          *(uint *)(iVar4 + 0x6f04) = uVar3;
        }
      }
    } while (*(uint *)(iVar4 + 0x6f00) < *(int *)(iVar4 + 0x6f04) + 2U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar4 + 0x6efc) + *(int *)(iVar4 + 0x6f04),&uStack_2,2);
  *(int *)(iVar4 + 0x6f04) = *(int *)(iVar4 + 0x6f04) + 2;
  iVar7 = *(int *)(param_1 + 0x6f04);
  uVar1 = *(undefined4 *)(param_1 + 0x6efc);
  if (*(uint *)(iVar4 + 0x6f00) < (uint)(*(int *)(iVar4 + 0x6f04) + iVar7)) {
    do {
      iVar5 = *(int *)(iVar4 + 0x6f00) << 1;
      if (*(int *)(iVar4 + 0x6efc) != 0) {
        uVar2 = Mem_Realloc(*(int *)(iVar4 + 0x6efc),iVar5,*puVar6);
        *(undefined4 *)(iVar4 + 0x6efc) = uVar2;
        if (*(int *)(iVar4 + 0x6efc) != 0) {
          *(int *)(iVar4 + 0x6f00) = iVar5;
          uVar3 = *(int *)(iVar4 + 0x6f00) - 1;
          if (*(uint *)(iVar4 + 0x6f04) <= uVar3) {
            uVar3 = *(uint *)(iVar4 + 0x6f04);
          }
          *(uint *)(iVar4 + 0x6f04) = uVar3;
        }
      }
    } while (*(uint *)(iVar4 + 0x6f00) < (uint)(*(int *)(iVar4 + 0x6f04) + iVar7));
  }
  maybe_Mem_CopyQwords(*(int *)(iVar4 + 0x6efc) + *(int *)(iVar4 + 0x6f04),uVar1,iVar7);
  *(int *)(iVar4 + 0x6f04) = *(int *)(iVar4 + 0x6f04) + iVar7;
  return 1;
}

// 0x002b7ff0  size 0x5dc
undefined4 FUN_002b7ff0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint auStack_14 [5];
  
  iVar3 = param_1 + (1 - *(int *)(param_1 + 0x89e8)) * 0xda8;
  uStack_20 = 0x53434549;
  uStack_1c = 0x53657175;
  auStack_14[0] =
       *(int *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x6f04) + 0x59U & 0xfffffff0;
  uStack_18 = 0x20;
  auStack_14[2] = 0x30;
  auStack_14[1] = 0xffffffff;
  auStack_14[3] = 0xffffffff;
  auStack_14[4] = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x6f04) = 0x10;
  puVar4 = (undefined4 *)(iVar3 + 0x6ef8);
  if (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U) {
    do {
      iVar5 = *(int *)(iVar3 + 0x6f00) << 1;
      if (*(int *)(iVar3 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar3 + 0x6efc),iVar5,*puVar4);
        *(undefined4 *)(iVar3 + 0x6efc) = uVar1;
        if (*(int *)(iVar3 + 0x6efc) != 0) {
          *(int *)(iVar3 + 0x6f00) = iVar5;
          uVar2 = *(int *)(iVar3 + 0x6f00) - 1;
          if (*(uint *)(iVar3 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(iVar3 + 0x6f04);
          }
          *(uint *)(iVar3 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar3 + 0x6efc) + *(int *)(iVar3 + 0x6f04),&uStack_20,4);
  *(int *)(iVar3 + 0x6f04) = *(int *)(iVar3 + 0x6f04) + 4;
  if (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U) {
    do {
      iVar5 = *(int *)(iVar3 + 0x6f00) << 1;
      if (*(int *)(iVar3 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar3 + 0x6efc),iVar5,*puVar4);
        *(undefined4 *)(iVar3 + 0x6efc) = uVar1;
        if (*(int *)(iVar3 + 0x6efc) != 0) {
          *(int *)(iVar3 + 0x6f00) = iVar5;
          uVar2 = *(int *)(iVar3 + 0x6f00) - 1;
          if (*(uint *)(iVar3 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(iVar3 + 0x6f04);
          }
          *(uint *)(iVar3 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar3 + 0x6efc) + *(int *)(iVar3 + 0x6f04),&uStack_1c,4);
  *(int *)(iVar3 + 0x6f04) = *(int *)(iVar3 + 0x6f04) + 4;
  if (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U) {
    do {
      iVar5 = *(int *)(iVar3 + 0x6f00) << 1;
      if (*(int *)(iVar3 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar3 + 0x6efc),iVar5,*puVar4);
        *(undefined4 *)(iVar3 + 0x6efc) = uVar1;
        if (*(int *)(iVar3 + 0x6efc) != 0) {
          *(int *)(iVar3 + 0x6f00) = iVar5;
          uVar2 = *(int *)(iVar3 + 0x6f00) - 1;
          if (*(uint *)(iVar3 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(iVar3 + 0x6f04);
          }
          *(uint *)(iVar3 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar3 + 0x6efc) + *(int *)(iVar3 + 0x6f04),&uStack_18,4);
  *(int *)(iVar3 + 0x6f04) = *(int *)(iVar3 + 0x6f04) + 4;
  if (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U) {
    do {
      iVar5 = *(int *)(iVar3 + 0x6f00) << 1;
      if (*(int *)(iVar3 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar3 + 0x6efc),iVar5,*puVar4);
        *(undefined4 *)(iVar3 + 0x6efc) = uVar1;
        if (*(int *)(iVar3 + 0x6efc) != 0) {
          *(int *)(iVar3 + 0x6f00) = iVar5;
          uVar2 = *(int *)(iVar3 + 0x6f00) - 1;
          if (*(uint *)(iVar3 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(iVar3 + 0x6f04);
          }
          *(uint *)(iVar3 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar3 + 0x6efc) + *(int *)(iVar3 + 0x6f04),auStack_14,4);
  *(int *)(iVar3 + 0x6f04) = *(int *)(iVar3 + 0x6f04) + 4;
  if (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U) {
    do {
      iVar5 = *(int *)(iVar3 + 0x6f00) << 1;
      if (*(int *)(iVar3 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar3 + 0x6efc),iVar5,*puVar4);
        *(undefined4 *)(iVar3 + 0x6efc) = uVar1;
        if (*(int *)(iVar3 + 0x6efc) != 0) {
          *(int *)(iVar3 + 0x6f00) = iVar5;
          uVar2 = *(int *)(iVar3 + 0x6f00) - 1;
          if (*(uint *)(iVar3 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(iVar3 + 0x6f04);
          }
          *(uint *)(iVar3 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar3 + 0x6efc) + *(int *)(iVar3 + 0x6f04),auStack_14 + 1,4);
  *(int *)(iVar3 + 0x6f04) = *(int *)(iVar3 + 0x6f04) + 4;
  if (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U) {
    do {
      iVar5 = *(int *)(iVar3 + 0x6f00) << 1;
      if (*(int *)(iVar3 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar3 + 0x6efc),iVar5,*puVar4);
        *(undefined4 *)(iVar3 + 0x6efc) = uVar1;
        if (*(int *)(iVar3 + 0x6efc) != 0) {
          *(int *)(iVar3 + 0x6f00) = iVar5;
          uVar2 = *(int *)(iVar3 + 0x6f00) - 1;
          if (*(uint *)(iVar3 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(iVar3 + 0x6f04);
          }
          *(uint *)(iVar3 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar3 + 0x6efc) + *(int *)(iVar3 + 0x6f04),auStack_14 + 2,4);
  *(int *)(iVar3 + 0x6f04) = *(int *)(iVar3 + 0x6f04) + 4;
  if (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U) {
    do {
      iVar5 = *(int *)(iVar3 + 0x6f00) << 1;
      if (*(int *)(iVar3 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar3 + 0x6efc),iVar5,*puVar4);
        *(undefined4 *)(iVar3 + 0x6efc) = uVar1;
        if (*(int *)(iVar3 + 0x6efc) != 0) {
          *(int *)(iVar3 + 0x6f00) = iVar5;
          uVar2 = *(int *)(iVar3 + 0x6f00) - 1;
          if (*(uint *)(iVar3 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(iVar3 + 0x6f04);
          }
          *(uint *)(iVar3 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar3 + 0x6efc) + *(int *)(iVar3 + 0x6f04),auStack_14 + 3,4);
  *(int *)(iVar3 + 0x6f04) = *(int *)(iVar3 + 0x6f04) + 4;
  if (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U) {
    do {
      iVar5 = *(int *)(iVar3 + 0x6f00) << 1;
      if (*(int *)(iVar3 + 0x6efc) != 0) {
        uVar1 = Mem_Realloc(*(int *)(iVar3 + 0x6efc),iVar5,*puVar4);
        *(undefined4 *)(iVar3 + 0x6efc) = uVar1;
        if (*(int *)(iVar3 + 0x6efc) != 0) {
          *(int *)(iVar3 + 0x6f00) = iVar5;
          uVar2 = *(int *)(iVar3 + 0x6f00) - 1;
          if (*(uint *)(iVar3 + 0x6f04) <= uVar2) {
            uVar2 = *(uint *)(iVar3 + 0x6f04);
          }
          *(uint *)(iVar3 + 0x6f04) = uVar2;
        }
      }
    } while (*(uint *)(iVar3 + 0x6f00) < *(int *)(iVar3 + 0x6f04) + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar3 + 0x6efc) + *(int *)(iVar3 + 0x6f04),auStack_14 + 4,4);
  *(int *)(iVar3 + 0x6f04) = *(int *)(iVar3 + 0x6f04) + 4;
  return 1;
}

