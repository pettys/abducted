/* Decompiled pseudocode; not original source or guaranteed compilable C. */

/* 1000:0010 entry */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00010058) overlaps instruction at (ram,0x00010057)
    */

void entry(void)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int in_AX;
  int iVar6;
  uint uVar7;
  int in_CX;
  char cVar8;
  uint in_DX;
  byte bVar10;
  undefined2 uVar9;
  int in_BX;
  uint uVar11;
  undefined2 *puVar12;
  int unaff_BP;
  int iVar13;
  undefined2 *unaff_SI;
  int unaff_DI;
  uint uVar14;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  undefined2 in_FS;
  
  uVar11 = in_BX + 1;
  iVar13 = unaff_BP + 1;
  bVar10 = (byte)(in_DX >> 8);
  DAT_113b_063e = in_DX;
  *(byte *)(iVar13 + (int)unaff_SI) = *(byte *)(iVar13 + (int)unaff_SI) ^ bVar10;
  bVar5 = (byte)(in_AX + 0x9696U);
  *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + bVar5;
  *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + bVar5;
  cVar8 = (char)in_DX;
  *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar8;
  *(byte *)0x0 = *(byte *)0x0 ^ bVar5;
  iVar6 = (in_AX + 0x9696U ^ 0x600) + 0x4ec;
  puVar12 = (undefined2 *)(uVar11 | unaff_SI[0x2a00]);
  DAT_113b_063c = in_CX;
  *(int *)(unaff_DI + 0xb08) = *(int *)(unaff_DI + 0xb08) + in_DX;
  uVar11 = CONCAT11((byte)((uint)iVar6 >> 8) | *(byte *)(unaff_DI + 1),(char)iVar6) | 0x24;
  uVar7 = uVar11 + 0x6bd;
  if (in_CX != 1) {
    uVar7 = CONCAT11((char)(uVar7 >> 8),*(undefined1 *)(ulong)((int)puVar12 + (uVar7 & 0xff)));
  }
  uVar14 = unaff_DI + 3;
  puVar4 = unaff_SI + 1;
  *(undefined2 *)(byte *)(unaff_DI + 1) = *unaff_SI;
  piVar2 = (int *)(iVar13 + uVar14 + -0x77fe);
  *piVar2 = *piVar2 + iVar13 + (uint)(0xf942 < uVar11);
  unaff_SI[-0x3fd] =
       unaff_SI[-0x3fd] + uVar14 +
       (uint)CARRY2(CONCAT11((char)(uVar7 >> 8) + *(char *)((int)unaff_SI + 0x15),(char)uVar7),
                    *puVar4);
  uVar14 = uVar14 | in_DX;
  pbVar1 = (byte *)((int)puVar4 + unaff_BP + -0x31f8);
  uVar9 = CONCAT11(bVar10 + *pbVar1,cVar8);
  *(int *)(uVar14 + 0x710b) = (int)puVar4 + (uint)CARRY1(bVar10,*pbVar1) + *(int *)(uVar14 + 0x710b)
  ;
  *(char *)((int)puVar12 + (int)puVar4) = *(char *)((int)puVar12 + (int)puVar4) + cVar8;
  piVar2 = (int *)(iVar13 + uVar14 + 1);
  *piVar2 = *piVar2 + 0xc;
  *(int *)(uVar14 + 0x10) = *(int *)(uVar14 + 0x10) + uVar14;
  LOCK();
  DAT_113b_063a = uVar9;
  *(char *)(iVar13 + (int)unaff_SI + 3) = (char)*puVar12 * '>' + 'f';
  UNLOCK();
  out(*(undefined2 *)((int)unaff_SI + 3),uVar9);
  puVar3 = (uint *)((int)puVar12 + uVar14 + 3);
  *puVar3 = ~*puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1000:0352 FUN_1000_0352 */

void __cdecl16far FUN_1000_0352(uint param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DAT_113b_0200 = param_3;
  DAT_113b_0202 = param_1;
  DAT_113b_0206 = *(uint *)0x0;
  if (DAT_113b_0206 != 0) {
    uVar1 = param_1;
    uVar3 = DAT_113b_0206;
    if ((int)param_1 < 0) {
      uVar3 = DAT_113b_0206 + param_1;
      if (DAT_113b_0206 < -param_1 || uVar3 == 0) {
        DAT_113b_0212 = 0;
        return;
      }
      uVar1 = 0;
    }
    uVar2 = 0x140 - uVar1;
    if (uVar1 < 0x141 && uVar2 != 0) {
      DAT_113b_020e = uVar3;
      if (uVar2 < uVar3) {
        DAT_113b_020e = uVar2;
      }
      uVar3 = (uint)(0x200 / (ulong)DAT_113b_020e);
      DAT_113b_0204 = param_2;
      DAT_113b_0208 = *(uint *)0x2;
      DAT_113b_020a = uVar1;
      if (DAT_113b_0208 != 0) {
        uVar2 = DAT_113b_0208;
        if ((int)param_2 < 0) {
          uVar2 = DAT_113b_0208 + param_2;
          if (DAT_113b_0208 < -param_2 || uVar2 == 0) {
            DAT_113b_0212 = 0;
            return;
          }
          param_2 = 0;
        }
        uVar1 = 200 - param_2;
        if (param_2 < 0xc9 && uVar1 != 0) {
          if (uVar1 < uVar2) {
            uVar2 = uVar1;
          }
          DAT_113b_0210 = uVar2;
          if (uVar3 < uVar2) {
            DAT_113b_0210 = uVar3;
          }
          DAT_113b_0212 = 1;
          DAT_113b_020c = param_2;
          FUN_1000_03ee();
          return;
        }
      }
    }
  }
  DAT_113b_0212 = 0;
  return;
}



/* 1000:03ee FUN_1000_03ee */

void __cdecl16near FUN_1000_03ee(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  int iVar4;
  int in_AX;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int aiStack_10 [5];
  
  iVar4 = DAT_113b_020e;
  DAT_113b_0214 = in_AX;
  if (DAT_113b_0212 != 0) {
    puVar8 = (undefined1 *)(*(int *)(DAT_113b_020c * 2 + 0x420) + DAT_113b_020a);
    uVar3 = *(undefined2 *)(in_AX * 2 + 0x1960);
    puVar9 = (undefined1 *)0x216;
    iVar6 = 0x140 - DAT_113b_020e;
    iVar7 = DAT_113b_0210;
    do {
      for (iVar5 = iVar4; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar1;
      }
      puVar8 = puVar8 + iVar6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    aiStack_10[4] = 199;
    aiStack_10[3] = 0x13f;
    aiStack_10[2] = 0;
    aiStack_10[1] = 0;
    aiStack_10[0] = DAT_113b_0214;
    FUN_1000_0c0b(aiStack_10,DAT_113b_0202,DAT_113b_0204,DAT_113b_0200);
  }
  return;
}



/* 1000:07b2 FUN_1000_07b2 */

void __cdecl16far
FUN_1000_07b2(int *param_1,int param_2,int param_3,uint param_4,int param_5,int *param_6,int param_7
             ,int param_8)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)(*param_1 * 2 + 0x1960);
  uVar2 = *(undefined2 *)(*param_6 * 2 + 0x1960);
  puVar6 = (undefined2 *)(*(int *)((param_1[2] + param_3) * 2 + 0x17d0) + param_1[1] + param_2);
  puVar7 = (undefined2 *)(*(int *)((param_6[2] + param_8) * 2 + 0x17d0) + param_6[1] + param_7);
  if ((param_4 != 0) && (param_5 != 0)) {
    do {
      for (uVar5 = param_4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar4 = puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = *puVar3;
      }
      if ((param_4 & 1) != 0) {
        puVar4 = puVar7;
        puVar7 = (undefined2 *)((int)puVar7 + 1);
        puVar3 = puVar6;
        puVar6 = (undefined2 *)((int)puVar6 + 1);
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      }
      puVar6 = (undefined2 *)((int)puVar6 + (0x140 - param_4));
      puVar7 = (undefined2 *)((int)puVar7 + (0x140 - param_4));
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* 1000:0a47 FUN_1000_0a47 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_1000_0a47(undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  uVar1 = _DAT_1000_087a;
  uVar2 = DAT_1000_087e - _DAT_1000_087a;
  if (DAT_1000_087e < _DAT_1000_087a || uVar2 == 0) {
    _DAT_1000_0878 = (undefined2 *)0x0;
    return 0;
  }
  if (0xfff < uVar2) {
    uVar2 = 0xfff;
  }
  DAT_1000_0880 = uVar2 << 4;
  puVar3 = (undefined2 *)_DAT_1000_0878;
  *_DAT_1000_0878 = param_1;
  DAT_1000_088a = param_1;
  puVar3[1] = param_2;
  DAT_1000_0888 = param_2;
  _DAT_1000_0878 = (undefined2 *)CONCAT22(_DAT_1000_087a,puVar3 + 2);
  return uVar1;
}



/* 1000:0a92 FUN_1000_0a92 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1000_0a92(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_1000_087a;
  iVar1 = DAT_1000_0878;
  LOCK();
  DAT_1000_0878 = 0;
  UNLOCK();
  LOCK();
  _DAT_1000_087a = (iVar1 + 0xfU >> 4) + _DAT_1000_087a;
  UNLOCK();
  return iVar2;
}



/* 1000:0aaf FUN_1000_0aaf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1000_0aaf(char *param_1)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined2 unaff_DS;
  
  piVar3 = _DAT_1000_0878;
  iVar8 = (int)((ulong)_DAT_1000_0878 >> 0x10);
  piVar6 = (int *)_DAT_1000_0878;
  if (iVar8 != 0) {
    if (DAT_1000_0880 < (char *)(DAT_1000_088a + 4 + (int)piVar6)) {
      *(int *)0x2 = *(int *)0x2 + -1;
      iVar8 = 0;
      DAT_1000_087e = 0;
    }
    else {
      DAT_1000_0882 = 0;
      DAT_1000_0884 = 0;
      DAT_1000_0886 = 0;
      *_DAT_1000_0878 = 0;
      piVar7 = piVar6 + 2;
      piVar6[1] = 0;
      iVar5 = DAT_1000_088a;
      do {
        while( true ) {
          pcVar1 = param_1;
          param_1 = param_1 + 1;
          if (*pcVar1 == '\0') break;
          DAT_1000_0884 = 0;
LAB_1000_0b20:
          DAT_1000_0886 = DAT_1000_0886 + 1;
          piVar2 = piVar7;
          piVar7 = (int *)((int)piVar7 + 1);
          *(char *)piVar2 = *pcVar1;
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) goto LAB_1000_0b28;
        }
        if (DAT_1000_0886 != 0) {
          DAT_1000_0884 = DAT_1000_0884 + 1;
          goto LAB_1000_0b20;
        }
        DAT_1000_0882 = DAT_1000_0882 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
LAB_1000_0b28:
      iVar5 = DAT_1000_0882;
      iVar4 = DAT_1000_0886;
      if (DAT_1000_0884 != 0) {
        iVar4 = DAT_1000_0886 - DAT_1000_0884;
        piVar7 = (int *)((int)piVar7 - DAT_1000_0884);
      }
      *piVar3 = iVar4;
      piVar6[1] = iVar5;
      _DAT_1000_0878 = (int *)CONCAT22(_DAT_1000_087a,piVar7);
    }
  }
  return iVar8;
}



/* 1000:0b51 FUN_1000_0b51 */

void __cdecl16far
FUN_1000_0b51(undefined2 param_1,int param_2,int param_3,undefined2 param_4,undefined2 param_5)

{
  int iVar1;
  
  iVar1 = FUN_1000_0a47(param_4,param_5);
  if (((iVar1 != 0) && (DAT_1000_0888 != 0)) && (DAT_1000_088a != 0)) {
    param_2 = *(int *)(param_3 * 2 + 0x17d0) + param_2;
    do {
      FUN_1000_0aaf(param_2);
      param_2 = param_2 + 0x140;
      DAT_1000_0888 = DAT_1000_0888 + -1;
    } while (DAT_1000_0888 != 0);
  }
  FUN_1000_0a92();
  return;
}



/* 1000:0bb5 FUN_1000_0bb5 */

undefined2 __cdecl16far FUN_1000_0bb5(void)

{
  undefined1 uVar1;
  bool bVar2;
  uint in_stack_0000000a;
  uint in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  DAT_1000_08b6 = in_stack_00000010;
  DAT_1000_0898 = (int)in_stack_0000000a >> 0xf;
  DAT_1000_0894 = (in_stack_0000000a ^ DAT_1000_0898) - DAT_1000_0898;
  DAT_1000_089a = (int)in_stack_0000000c >> 0xf;
  DAT_1000_0896 = (in_stack_0000000c ^ DAT_1000_089a) - DAT_1000_089a;
  uVar1 = 0;
  bVar2 = true;
  FUN_1000_0ce0();
  if (!bVar2) {
    FUN_1000_0c45();
    if (!(bool)uVar1) {
      FUN_1000_0dd0(0x1000);
    }
  }
  return 0x89c;
}



/* 1000:0c0b FUN_1000_0c0b */

undefined2 __cdecl16far FUN_1000_0c0b(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined2 in_stack_0000000a;
  
  uVar1 = 0;
  bVar2 = true;
  DAT_1000_0894 = *(undefined2 *)0x0;
  DAT_1000_0896 = *(undefined2 *)0x2;
  FUN_1000_0ce0();
  if (!bVar2) {
    FUN_1000_0c45();
    if (!(bool)uVar1) {
      FUN_1000_0d38();
    }
  }
  return 0x89c;
}



/* 1000:0c45 FUN_1000_0c45 */

void __cdecl16near FUN_1000_0c45(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_DX;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  
  if (unaff_DI < 0) {
    if (DAT_1000_0896 <= (uint)-unaff_DI) {
      return;
    }
    DAT_1000_08a4 = -unaff_DI;
  }
  iVar2 = unaff_DI + DAT_1000_0896 + -1;
  iVar1 = *(int *)(unaff_BP + 8);
  if ((-1 < iVar1) && (unaff_DI <= iVar1)) {
    iVar3 = iVar2 - iVar1;
    if (iVar3 != 0 && iVar1 <= iVar2) {
      DAT_1000_08a8 = iVar3;
    }
    if (in_DX < 0) {
      if (DAT_1000_0894 <= (uint)-in_DX) {
        return;
      }
      DAT_1000_08a6 = -in_DX;
    }
    iVar2 = in_DX + DAT_1000_0894 + -1;
    iVar1 = *(int *)(unaff_BP + 6);
    if ((-1 < iVar1) && (in_DX <= iVar1)) {
      iVar3 = iVar2 - iVar1;
      if (iVar3 != 0 && iVar1 <= iVar2) {
        DAT_1000_08aa = iVar3;
      }
      DAT_1000_089c = DAT_1000_08a6 + in_DX;
      DAT_1000_089e = DAT_1000_08a4 + unaff_DI;
      DAT_1000_08a0 = (DAT_1000_0894 - DAT_1000_08a6) - DAT_1000_08aa;
      DAT_1000_08a2 = (DAT_1000_0896 - DAT_1000_08a4) - DAT_1000_08a8;
      return;
    }
  }
  return;
}



/* 1000:0ce0 FUN_1000_0ce0 */

undefined2 __cdecl16near FUN_1000_0ce0(void)

{
  undefined2 uVar1;
  int unaff_DS;
  
  DAT_1000_08a4 = 0;
  DAT_1000_08a6 = 0;
  DAT_1000_08a8 = 0;
  DAT_1000_08aa = 0;
  DAT_1000_089c = 0;
  DAT_1000_089e = 0;
  DAT_1000_08a0 = 0;
  DAT_1000_08a2 = 0;
  uVar1 = 0;
  if ((unaff_DS != 0) && (uVar1 = 0, *(int *)0x0 != 0)) {
    uVar1 = *(undefined2 *)0x2;
  }
  return uVar1;
}



/* 1000:0d15 FUN_1000_0d15 */

void __cdecl16far FUN_1000_0d15(void)

{
  bool bVar1;
  
  bVar1 = true;
  FUN_1000_0ce0();
  if (!bVar1) {
    FUN_1000_0d38();
  }
  return;
}



/* 1000:0d38 FUN_1000_0d38 */

void __cdecl16far FUN_1000_0d38(void)

{
  undefined2 uVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int in_DX;
  int iVar7;
  int *unaff_BP;
  int iVar8;
  int *unaff_SI;
  int *piVar9;
  int *piVar10;
  int unaff_DI;
  char *pcVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)(*unaff_BP * 2 + 0x1960);
  iVar8 = *(int *)((unaff_DI + unaff_BP[2] + DAT_1000_08a4) * 2 + 0x17d0) + in_DX + unaff_BP[1];
  uVar4 = *unaff_SI - DAT_1000_08aa;
  if ((uVar4 != 0 && DAT_1000_08aa <= *unaff_SI) &&
     (iVar5 = (unaff_SI[1] - DAT_1000_08a4) - DAT_1000_08a8, DAT_1000_088e = uVar4,
     iVar7 = DAT_1000_08a4, iVar5 != 0 && DAT_1000_08a8 <= unaff_SI[1] - DAT_1000_08a4)) {
    for (; piVar10 = unaff_SI + 2, DAT_1000_088c = iVar5, iVar7 != 0; iVar7 = iVar7 + -1) {
      unaff_SI = (int *)((int)piVar10 + *piVar10);
    }
    do {
      iVar7 = *piVar10;
      piVar9 = piVar10 + 2;
      uVar4 = piVar10[1];
      if (iVar7 != 0) {
        uVar6 = iVar7 + uVar4;
        iVar5 = uVar4 - DAT_1000_08a6;
        if (uVar4 < DAT_1000_08a6 || iVar5 == 0) {
          piVar9 = (int *)((int)piVar9 - iVar5);
          uVar4 = uVar4 - iVar5;
          iVar7 = iVar7 + iVar5;
        }
        if (DAT_1000_088e <= uVar6) {
          uVar6 = DAT_1000_088e;
        }
        iVar5 = uVar6 - uVar4;
        if (uVar4 <= uVar6 && iVar5 != 0) {
          pcVar11 = (char *)(iVar8 + uVar4);
          iVar7 = iVar7 - iVar5;
          do {
            while( true ) {
              piVar2 = piVar9;
              piVar9 = (int *)((int)piVar9 + 1);
              if ((char)*piVar2 == '\0') break;
              pcVar3 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar3 = (char)*piVar2;
              iVar5 = iVar5 + -1;
              if (iVar5 == 0) goto LAB_1000_0db8;
            }
            pcVar11 = pcVar11 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
LAB_1000_0db8:
      iVar8 = iVar8 + 0x140;
      piVar10 = (int *)((int)piVar9 + iVar7);
      DAT_1000_088c = DAT_1000_088c + -1;
    } while (DAT_1000_088c != 0);
  }
  return;
}



/* 1000:0dd0 FUN_1000_0dd0 */

void FUN_1000_0dd0(void)

{
  int iVar1;
  int iVar2;
  int *unaff_BP;
  int *unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  DAT_1000_08b4 = *(undefined2 *)(*unaff_BP * 2 + 0x1960);
  DAT_1000_0890 = *unaff_SI;
  DAT_1000_0892 = unaff_SI[1];
  iVar1 = (DAT_1000_0894 - DAT_1000_08a6) - DAT_1000_08aa;
  DAT_1000_08b2 = unaff_DS;
  if ((iVar1 == 0 || DAT_1000_0894 - DAT_1000_08a6 < DAT_1000_08aa) ||
     (iVar2 = (DAT_1000_0896 - DAT_1000_08a4) - DAT_1000_08a8, DAT_1000_088e = iVar1,
     iVar2 == 0 || DAT_1000_0896 - DAT_1000_08a4 < DAT_1000_08a8)) {
    FUN_1000_0ebb();
    return;
  }
  DAT_1000_08b0 = 0x140;
  iVar1 = DAT_1000_08a4;
  if (DAT_1000_089a != 0) {
    DAT_1000_08b0 = 0xfec0;
    iVar1 = DAT_1000_08a8;
  }
  DAT_1000_08ae = -(DAT_1000_0896 + 1U >> 1);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    for (DAT_1000_08ae = DAT_1000_08ae + DAT_1000_0892; -1 < DAT_1000_08ae;
        DAT_1000_08ae = DAT_1000_08ae - DAT_1000_0896) {
    }
  }
  uRam00010f1c = DAT_1000_0f39;
  uRam00010f2d = DAT_1000_0f3a;
  if (DAT_1000_0898 != 0) {
    DAT_1000_08a6 = DAT_1000_08aa;
    uRam00010f1c = DAT_1000_0f3b;
    uRam00010f2d = DAT_1000_0f3c;
  }
  DAT_1000_08ac = -(DAT_1000_0894 + 1U >> 1);
  iVar1 = 0;
  while (DAT_1000_08a6 = DAT_1000_08a6 + -1, -1 < DAT_1000_08a6) {
    for (DAT_1000_08ac = DAT_1000_08ac + DAT_1000_0890; -1 < DAT_1000_08ac;
        DAT_1000_08ac = DAT_1000_08ac - DAT_1000_0894) {
      iVar1 = iVar1 + 1;
    }
  }
  DAT_1000_088c = iVar2;
  DAT_1000_08a6 = iVar1;
  FUN_1000_0ebe();
  return;
}



/* 1000:0ebb FUN_1000_0ebb */

void __cdecl16far FUN_1000_0ebb(void)

{
  return;
}



/* 1000:0ebe FUN_1000_0ebe */

void FUN_1000_0ebe(void)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_SI;
  int *piVar10;
  char *pcVar11;
  char *unaff_DI;
  undefined1 *puVar12;
  char *pcVar13;
  undefined2 unaff_DS;
  
  do {
    iVar7 = *unaff_SI;
    if (iVar7 != 0) {
      piVar10 = unaff_SI + 2;
      iVar6 = unaff_SI[1];
      if (DAT_1000_08a6 < (uint)(iVar6 + iVar7)) {
        puVar12 = (undefined1 *)0x8b8;
        iVar8 = (DAT_1000_0890 - iVar7) - iVar6;
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar4 = 0;
        }
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar4 = puVar12;
          puVar12 = puVar12 + 1;
          piVar1 = piVar10;
          piVar10 = (int *)((int)piVar10 + 1);
          *puVar4 = (char)*piVar1;
        }
        while( true ) {
          uVar5 = DAT_1000_08b4;
          iVar6 = DAT_1000_0894;
          iVar7 = DAT_1000_0890;
          if (iVar8 == 0) break;
          puVar4 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar4 = 0;
          iVar8 = iVar8 + -1;
        }
        pcVar11 = (char *)(DAT_1000_08a6 + 0x8b8);
        iVar8 = DAT_1000_088e;
        iVar9 = DAT_1000_08ac;
        pcVar13 = unaff_DI;
        do {
          while( true ) {
            pcVar2 = pcVar11;
            pcVar11 = pcVar11 + 1;
            cVar3 = *pcVar2;
            if (cVar3 == '\0') break;
            do {
              iVar8 = iVar8 + -1;
              if (iVar8 < 0) goto LAB_1000_0f3e;
              pcVar2 = pcVar13;
              pcVar13 = pcVar13 + 1;
              *pcVar2 = cVar3;
              iVar9 = iVar9 + iVar7;
            } while (iVar9 < 0);
            while (iVar9 = iVar9 - iVar6, -1 < iVar9) {
              pcVar11 = pcVar11 + 1;
            }
          }
          do {
            iVar8 = iVar8 + -1;
            if (iVar8 < 0) goto LAB_1000_0f3e;
            pcVar13 = pcVar13 + 1;
            iVar9 = iVar9 + iVar7;
          } while (iVar9 < 0);
          while (iVar9 = iVar9 - iVar6, -1 < iVar9) {
            pcVar11 = pcVar11 + 1;
          }
        } while( true );
      }
    }
LAB_1000_0f3e:
    DAT_1000_088c = DAT_1000_088c + -1;
    if (DAT_1000_088c == 0) {
      FUN_1000_0ebb();
      return;
    }
    unaff_DI = unaff_DI + DAT_1000_08b0;
    for (DAT_1000_08ae = DAT_1000_08ae + DAT_1000_0892; -1 < DAT_1000_08ae;
        DAT_1000_08ae = DAT_1000_08ae - DAT_1000_0896) {
      unaff_SI = (int *)((int)unaff_SI + *unaff_SI + 4);
    }
    unaff_DS = DAT_1000_08b2;
  } while( true );
}



/* 1000:0f82 FUN_1000_0f82 */

void __cdecl16far FUN_1000_0f82(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar18;
  
  *(undefined1 *)0x60a = *(undefined1 *)(unaff_BP + 0xc);
  *(undefined1 *)0x60b = *(undefined1 *)(unaff_BP + 0xe);
  *(undefined1 *)0x60c = *(undefined1 *)(unaff_BP + 10);
  iVar7 = *(int *)0x61e;
  uVar2 = *(undefined2 *)(unaff_ES * 2 + 0x1960);
  puVar15 = (undefined1 *)(*(int *)(*(int *)0x622 * 2 + 0x420) + *(int *)0x620);
  while( true ) {
    puVar1 = unaff_SI;
    unaff_SI = (undefined2 *)((int)unaff_SI + 1);
    bVar9 = (byte)*puVar1;
    cVar11 = (char)((uint)*puVar1 >> 8);
    if (bVar9 == 0) break;
    if ((char)bVar9 < '\0') {
      *(byte *)0x60a = bVar9 & 0x7f;
    }
    else if ((bVar9 <= *(byte *)0x611) && (*(byte *)0x610 <= bVar9)) {
      uVar8 = (uint)(byte)(bVar9 - *(byte *)0x610);
      cVar12 = *(char *)0x616;
      if (cVar12 == '\0') {
        cVar12 = *(char *)(*(int *)0x60e + uVar8) + *(char *)0x612;
      }
      if (cVar11 == '\0') {
        cVar12 = cVar12 - *(char *)0x61b;
      }
      *(char *)0x60d = cVar12 - *(char *)0x617;
      puVar14 = (undefined2 *)((uVar8 << (*(byte *)0x615 & 0x1f)) + *(int *)0x613);
      bVar9 = *(byte *)0x617;
      cVar12 = *(char *)0x61c;
      uVar4 = *(undefined1 *)0x60a;
      uVar5 = *(undefined1 *)0x60b;
      puVar17 = puVar15;
      if (*(char *)0x60c == '\x01') {
        do {
          cVar11 = *(char *)0x60d;
          iVar13 = CONCAT11((char)*puVar14,(char)((uint)*puVar14 >> 8)) << (bVar9 & 0x1f);
          puVar16 = puVar17;
          do {
            bVar18 = -1 < iVar13;
            iVar13 = iVar13 << 1;
            uVar6 = uVar4;
            if (bVar18) {
              uVar6 = uVar5;
            }
            puVar3 = puVar16;
            puVar16 = puVar16 + 1;
            *puVar3 = uVar6;
            cVar11 = cVar11 + -1;
          } while (cVar11 != '\0');
          puVar17 = puVar17 + 0x140;
          puVar14 = (undefined2 *)((int)puVar14 + iVar7);
          cVar12 = cVar12 + -1;
        } while (cVar12 != '\0');
      }
      else {
        cVar10 = *(char *)0x60d;
        if (cVar11 != '\0') {
          cVar10 = cVar10 - *(char *)0x612;
        }
        do {
          iVar13 = CONCAT11((char)*puVar14,(char)((uint)*puVar14 >> 8)) << (bVar9 & 0x1f);
          puVar16 = puVar17;
          cVar11 = cVar10;
          do {
            bVar18 = iVar13 < 0;
            iVar13 = iVar13 << 1;
            if (bVar18) {
              *puVar16 = uVar4;
            }
            puVar16 = puVar16 + 1;
            cVar11 = cVar11 + -1;
          } while (cVar11 != '\0');
          puVar17 = puVar17 + 0x140;
          puVar14 = (undefined2 *)((int)puVar14 + iVar7);
          cVar12 = cVar12 + -1;
        } while (cVar12 != '\0');
      }
      *(undefined1 *)0x617 = 0;
      puVar15 = puVar15 + *(byte *)0x60d;
      *(int *)0x620 = *(int *)0x620 + (uint)*(byte *)0x60d;
    }
  }
  *(undefined1 *)(unaff_BP + 0xc) = *(undefined1 *)0x60a;
  return;
}



/* 1000:1104 FUN_1000_1104 */

void __cdecl16far FUN_1000_1104(uint param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  if ((param_1 <= DAT_113b_0630) && (param_1 * 2 != 0)) {
    uVar4 = (uint)(byte)((*(char *)(param_2 + -7) - *(char *)(param_2 + -8)) + 1);
    iVar3 = uVar4 + 8;
    puVar5 = (undefined2 *)(param_2 - iVar3);
    puVar6 = (undefined2 *)((*(int *)(param_1 * 2 + 0x630) + 0x630) - iVar3);
    for (uVar4 = ((uint)*(byte *)(param_2 + -6) *
                  (uint)(byte)(*(char *)(param_2 + -4) + *(char *)(param_2 + -2)) & 0xff) * uVar4 +
                 iVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}



/* 1000:1154 FUN_1000_1154 */

int __cdecl16far FUN_1000_1154(uint param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = '\0';
  cVar3 = '\0';
  if ((((-1 < (char)param_2) && (param_1 <= DAT_113b_0630)) && (param_1 * 2 != 0)) &&
     ((iVar1 = *(int *)(param_1 * 2 + 0x630), *(byte *)(iVar1 + 0x628) <= param_2 &&
      (param_2 <= *(byte *)(iVar1 + 0x629))))) {
    cVar3 = *(char *)(iVar1 + 0x62d);
    cVar2 = *(char *)(iVar1 + 0x62b);
    if (cVar2 == '\0') {
      cVar2 = *(char *)((iVar1 + 0x627) - (uint)(byte)(*(char *)(iVar1 + 0x629) - param_2));
    }
  }
  return (int)(char)(cVar2 + cVar3);
}



/* 1000:11a5 FUN_1000_11a5 */

char __cdecl16far FUN_1000_11a5(uint param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((param_1 <= DAT_113b_0630) && (param_1 * 2 != 0)) {
    iVar1 = *(int *)(param_1 * 2 + 0x630);
    cVar2 = *(char *)(iVar1 + 0x62c) + *(char *)(iVar1 + 0x62e);
  }
  return cVar2;
}



/* 1000:11ce FUN_1000_11ce */

void __cdecl16far FUN_1000_11ce(void)

{
  FUN_1000_11e8(0x1000);
  return;
}



/* 1000:11e8 FUN_1000_11e8 */

void FUN_1000_11e8(void)

{
  FUN_1000_1319();
  FUN_1000_124e();
  FUN_1000_1200();
  FUN_1000_12ad();
  FUN_1000_12ed();
  return;
}



/* 1000:1200 FUN_1000_1200 */

int __cdecl16near FUN_1000_1200(void)

{
  byte bVar1;
  char cVar2;
  int in_AX;
  undefined1 uVar4;
  int iVar3;
  byte *in_BX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (*(char *)0x616 == '\0') {
    return in_AX;
  }
  if (-1 < *(int *)(unaff_BP + 6)) {
    iVar3 = *(int *)0x620;
    if (-1 < iVar3) {
      return iVar3;
    }
    *(undefined2 *)0x620 = 0;
    bVar1 = *(byte *)0x616;
    uVar4 = (undefined1)((uint)-iVar3 % (uint)bVar1);
    *(undefined1 *)0x617 = uVar4;
    iVar3 = CONCAT11(uVar4,(char)((uint)-iVar3 / (uint)bVar1) + '\x01');
    do {
      cVar2 = (char)iVar3 + -1;
      iVar3 = CONCAT11((char)((uint)iVar3 >> 8),cVar2);
      if (cVar2 == '\0') {
        return iVar3;
      }
      do {
        do {
          bVar1 = *in_BX;
          in_BX = in_BX + 1;
          iVar3 = CONCAT11(bVar1,(char)iVar3);
        } while ((char)bVar1 < '\0');
      } while ((bVar1 < *(byte *)0x610) || (*(byte *)0x611 < bVar1));
    } while (bVar1 != *(byte *)0x611);
  }
  if ((undefined1 *)*(undefined2 *)0x618 != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x618 = *(undefined1 *)0x61a;
  }
  return *(int *)0x620 - *(int *)(unaff_BP + 2);
}



/* 1000:124e FUN_1000_124e */

uint __cdecl16near FUN_1000_124e(void)

{
  byte bVar1;
  int iVar2;
  uint in_AX;
  int iVar3;
  int in_BX;
  int unaff_BP;
  byte *pbVar4;
  byte *pbVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (*(char *)0x616 != '\0') {
    iVar2 = *(int *)(unaff_BP + 6);
    if ((iVar2 < 0) || (iVar2 < *(int *)0x620)) {
      if ((undefined1 *)*(undefined2 *)0x618 != (undefined1 *)0x0) {
        *(undefined1 *)*(undefined2 *)0x618 = *(undefined1 *)0x61a;
      }
      return *(int *)0x620 - *(int *)(unaff_BP + 2);
    }
    iVar3 = *(int *)0x620 + -1;
    pbVar4 = (byte *)(in_BX + -1);
    do {
      pbVar5 = pbVar4;
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar4;
      if (bVar1 == 0) {
        return 0;
      }
    } while (((((char)bVar1 < '\0') || (bVar1 < *(byte *)0x610)) || (*(byte *)0x611 < bVar1)) ||
            (iVar3 = iVar3 + (uint)*(byte *)0x616, iVar3 < iVar2));
    *(char *)0x61b = (char)iVar3 - (char)iVar2;
    pbVar5 = pbVar5 + 2;
    bVar1 = *pbVar5;
    in_AX = (uint)bVar1;
    *pbVar5 = 0;
    *(byte *)0x61a = bVar1;
    *(undefined2 *)0x618 = pbVar5;
  }
  return in_AX;
}



/* 1000:12ad FUN_1000_12ad */

int __cdecl16near FUN_1000_12ad(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar2 = *(uint *)(unaff_BP + 8);
  if (-1 < (int)uVar2) {
    iVar4 = *(int *)0x622;
    if (iVar4 < 0) {
      puVar1 = (uint *)0x61c;
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + iVar4;
      if (uVar3 < (uint)-iVar4 || *puVar1 == 0) goto LAB_1000_1302;
      *(undefined2 *)0x622 = 0;
      *(int *)0x613 = *(int *)0x613 + -iVar4 * *(int *)0x61e;
    }
    if (*(uint *)0x622 <= uVar2) {
      uVar3 = (*(uint *)0x622 + *(int *)0x61c) - 1;
      iVar4 = uVar3 - uVar2;
      if (uVar2 <= uVar3 && iVar4 != 0) {
        *(int *)0x61c = *(int *)0x61c - iVar4;
      }
      return iVar4;
    }
  }
LAB_1000_1302:
  if ((undefined1 *)*(undefined2 *)0x618 != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x618 = *(undefined1 *)0x61a;
  }
  return *(int *)0x620 - *(int *)(unaff_BP + 2);
}



/* 1000:12ed FUN_1000_12ed */

int __cdecl16far FUN_1000_12ed(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)0x620 = *(int *)0x620 + *(int *)(unaff_BP + 2);
  *(int *)0x622 = *(int *)0x622 + *(int *)(unaff_BP + 4);
  FUN_1000_0f82();
  if ((undefined1 *)*(undefined2 *)0x618 != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x618 = *(undefined1 *)0x61a;
  }
  return *(int *)0x620 - *(int *)(unaff_BP + 2);
}



/* 1000:1319 FUN_1000_1319 */

/* WARNING: Removing unreachable block (ram,0x0001130a) */

int __cdecl16far FUN_1000_1319(void)

{
  char cVar1;
  int in_CX;
  undefined2 in_DX;
  char *in_BX;
  int unaff_BP;
  int iVar2;
  undefined2 unaff_SS;
  code *in_stack_00000000;
  
  DAT_113b_0618 = 0;
  DAT_113b_0617 = 0;
  DAT_113b_061b = 0;
  if (((*in_BX == '\0') || (DAT_113b_0630 < *(uint *)(unaff_BP + 0x10))) ||
     (iVar2 = *(uint *)(unaff_BP + 0x10) * 2, iVar2 == 0)) {
    DAT_113b_0622 = in_DX;
    DAT_113b_0620 = in_CX;
    DAT_113b_061b = 0;
    DAT_113b_0618 = 0;
    DAT_113b_0617 = 0;
    return in_CX - *(int *)(unaff_BP + 2);
  }
  iVar2 = *(int *)(iVar2 + 0x630);
  DAT_113b_0613 = iVar2 + 0x630;
  cVar1 = *(char *)(iVar2 + 0x62c);
  if ((*(byte *)(unaff_BP + 10) & 1) != 0) {
    cVar1 = cVar1 + *(char *)(iVar2 + 0x62e);
  }
  DAT_113b_061c = (int)cVar1;
  DAT_113b_0612 = *(char *)(iVar2 + 0x62d);
  DAT_113b_0616 = *(char *)(iVar2 + 0x62b);
  if (DAT_113b_0616 != '\0') {
    DAT_113b_0616 = DAT_113b_0616 + DAT_113b_0612;
  }
  DAT_113b_0610 = *(char *)(iVar2 + 0x628);
  DAT_113b_0611 = *(char *)(iVar2 + 0x629);
  DAT_113b_0615 = *(char *)(iVar2 + 0x62a) - 1;
  DAT_113b_060e = (iVar2 + 0x627) - (uint)(byte)(DAT_113b_0611 - DAT_113b_0610);
  DAT_113b_061e = (byte)(DAT_113b_0611 - DAT_113b_0610) + 1 << (DAT_113b_0615 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x000113a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DAT_113b_0620 = in_CX;
  DAT_113b_0622 = in_DX;
  iVar2 = (*in_stack_00000000)();
  return iVar2;
}


