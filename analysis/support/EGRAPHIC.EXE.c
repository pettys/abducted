/* Decompiled pseudocode; not original source or guaranteed compilable C. */

/* 1000:0010 entry */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

char entry(void)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char in_AL;
  char cVar5;
  byte bVar6;
  undefined2 in_CX;
  byte bVar7;
  undefined2 in_DX;
  int in_BX;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int unaff_BP;
  int iVar11;
  uint unaff_SI;
  uint uVar12;
  int unaff_DI;
  undefined2 unaff_DS;
  
  bVar7 = (byte)((uint)in_CX >> 8);
  iVar8 = in_BX + 1;
  iVar11 = unaff_BP + 3;
  DAT_1256_050e = in_DX;
  *(byte *)(iVar11 + unaff_SI) = *(byte *)(iVar11 + unaff_SI) ^ (byte)((uint)in_DX >> 8);
  cVar5 = in_AL + -0x6a;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar5;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar5;
  pbVar2 = (byte *)(iVar8 + unaff_SI);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + (byte)in_DX;
  cVar4 = *(char *)(iVar8 + unaff_SI);
  DAT_1256_050c = unaff_SI;
  *(char *)(unaff_SI + 0xa00) = *(char *)(unaff_SI + 0xa00) - (char)iVar8;
  uVar12 = unaff_SI & *(uint *)(unaff_SI + 0xf);
  *(bool *)(iVar11 + uVar12) =
       (char)((cVar5 + cVar4 + CARRY1(bVar3,(byte)in_DX) | 0xfeU) + 1 | 200) < '\0';
  puVar9 = (undefined2 *)(DAT_1256_050c & 0xe);
  *puVar9 = 0x1000;
  puVar10 = puVar9 + -1;
  puVar9[-1] = 0x51;
  bVar6 = func_0x000f8c57();
  puVar1 = (uint *)(iVar11 + uVar12 + -0x77de);
  *puVar1 = *puVar1 | unaff_DI + 1U;
  *(undefined2 *)((int)puVar10 + -2) = 0x12a6;
  *(int *)((int)puVar10 + -4) = iVar11;
  *(byte *)(iVar11 + uVar12) = *(byte *)(iVar11 + uVar12) | bVar7;
  bVar3 = *(byte *)(uVar12 - 0xfdd);
  *(int *)(uVar12 + 0xd) =
       (*(int *)(uVar12 + 0xd) - uVar12) - (uint)CARRY1(bVar6 | 0x8c,*(byte *)(uVar12 - 0xfdd));
  return (bVar6 | 0x8c) + bVar3;
}



/* 1000:0588 FUN_1000_0588 */

void __cdecl16far FUN_1000_0588(void)

{
  int in_AX;
  
  DAT_1256_0431 = (char)in_AX;
  DAT_1256_0434 = ((byte)((uint)in_AX >> 8) & 3) << 3;
  out(0x3ce,CONCAT11(DAT_1256_0434,3));
  out(0x3ce,in_AX << 8);
  DAT_1256_0432 = 0xf;
  out(0x3ce,0xf01);
  return;
}



/* 1000:05b5 FUN_1000_05b5 */

void __cdecl16far FUN_1000_05b5(void)

{
  DAT_1256_0437 = 0xf;
  out(0x3c4,0xf02);
  DAT_1256_0432 = 0;
  out(0x3ce,1);
  DAT_1256_0434 = 0;
  out(0x3ce,3);
  DAT_1256_0435 = 0;
  out(0x3ce,4);
  DAT_1256_0436 = 0;
  out(0x3ce,5);
  DAT_1256_042f = 0xff;
  out(0x3ce,0xff08);
  return;
}



/* 1000:0618 FUN_1000_0618 */

undefined4 __cdecl16near FUN_1000_0618(void)

{
  out(0x3c4,CONCAT11(DAT_1256_0437,2));
  out(0x3ce,CONCAT11(DAT_1256_0432,1));
  out(0x3ce,CONCAT11(DAT_1256_0434,3));
  out(0x3ce,CONCAT11(DAT_1256_0435,4));
  out(0x3ce,CONCAT11(DAT_1256_0436,5));
  out(0x3ce,CONCAT11(DAT_1256_042f,8));
  return CONCAT22(0x3ce,CONCAT11(DAT_1256_042f,8));
}



/* 1000:0a5d FUN_1000_0a5d */

void __cdecl16far FUN_1000_0a5d(uint param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DAT_1256_0062 = param_3;
  DAT_1256_0064 = param_1;
  DAT_1256_0068 = *(uint *)0x0;
  if (DAT_1256_0068 != 0) {
    uVar3 = DAT_1256_0068;
    if ((int)param_1 < 0) {
      uVar3 = DAT_1256_0068 + param_1;
      if (DAT_1256_0068 < -param_1 || uVar3 == 0) goto LAB_1000_0ad7;
      param_1 = 0;
    }
    uVar1 = DAT_1256_042c * 8 - param_1;
    if (param_1 <= (uint)(DAT_1256_042c * 8) && uVar1 != 0) {
      if (uVar1 < uVar3) {
        uVar3 = uVar1;
      }
      DAT_1256_0070 = uVar3 + (param_1 & 7) + 7 >> 3;
      DAT_1256_006c = param_1 >> 3;
      DAT_1256_0078 = DAT_1256_042c - DAT_1256_0070;
      uVar3 = (uint)(0x80 / (ulong)DAT_1256_0070);
      DAT_1256_0066 = param_2;
      DAT_1256_006a = *(uint *)0x2;
      if (DAT_1256_006a != 0) {
        uVar1 = DAT_1256_006a;
        if ((int)param_2 < 0) {
          uVar1 = DAT_1256_006a + param_2;
          if (DAT_1256_006a < -param_2 || uVar1 == 0) goto LAB_1000_0ad7;
          param_2 = 0;
        }
        uVar2 = 200 - param_2;
        if (param_2 < 0xc9 && uVar2 != 0) {
          if (uVar2 < uVar1) {
            uVar1 = uVar2;
          }
          DAT_1256_0072 = uVar1;
          if (uVar3 < uVar1) {
            DAT_1256_0072 = uVar3;
          }
          DAT_1256_0074 = 1;
          DAT_1256_006e = param_2;
          FUN_1000_0b2b();
          goto LAB_1000_0b25;
        }
      }
    }
  }
LAB_1000_0ad7:
  DAT_1256_0074 = 0;
LAB_1000_0b25:
  FUN_1000_0618();
  return;
}



/* 1000:0b2b FUN_1000_0b2b */

void __cdecl16near FUN_1000_0b2b(void)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int in_AX;
  undefined2 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int aiStack_12 [4];
  undefined2 uStack_a;
  
  DAT_1256_0076 = in_AX;
  if (DAT_1256_0074 != 0) {
    puVar8 = (undefined1 *)(*(int *)(DAT_1256_006e * 2 + 0x27a) + DAT_1256_006c);
    uVar1 = *(undefined2 *)(in_AX * 2 + 0x2974);
    puVar10 = (undefined1 *)0x7a;
    uVar4 = 0x304;
    do {
      out(0x3ce,uVar4);
      iVar7 = DAT_1256_0072;
      puVar9 = puVar8;
      do {
        for (iVar6 = DAT_1256_0070; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar3 = *puVar2;
        }
        puVar9 = puVar9 + DAT_1256_0078;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      cVar5 = (char)((uint)uVar4 >> 8) + -1;
      uVar4 = CONCAT11(cVar5,(char)uVar4);
    } while (-1 < cVar5);
    uStack_a = 199;
    aiStack_12[3] = DAT_1256_042c * 8 + -1;
    aiStack_12[2] = 0;
    aiStack_12[1] = 0;
    aiStack_12[0] = DAT_1256_0076;
    FUN_1000_1a40(aiStack_12,DAT_1256_0064,DAT_1256_0066,DAT_1256_0062);
  }
  return;
}



/* 1000:16db FUN_1000_16db */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_1000_16db(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 in_DX;
  int *piVar3;
  
  uVar1 = DAT_1000_14fe;
  uVar2 = DAT_1000_1502 - DAT_1000_14fe;
  if (DAT_1000_1502 < DAT_1000_14fe || uVar2 == 0) {
    _DAT_1000_14fc = (int *)0x0;
    return 0;
  }
  if (0xfff < uVar2) {
    uVar2 = 0xfff;
  }
  DAT_1000_1504 = uVar2 << 4;
  piVar3 = (int *)_DAT_1000_14fc;
  *_DAT_1000_14fc = param_1;
  DAT_1000_150e = 0x191c;
  if (DAT_1256_0412 == 1) {
    param_1 = param_1 << 1;
    in_DX = 0x38e;
    DAT_1000_150e = 0x199b;
  }
  if (DAT_1000_018d != '\0') {
    in_DX = 0x18e;
    DAT_1000_150e = 0x1950;
  }
  DAT_1000_1516 = param_1 + 7U >> 3;
  DAT_1000_1512 = -0x80 >> ((char)param_1 - 1U & 7);
  DAT_1000_1510 = in_DX;
  piVar3[1] = param_2;
  DAT_1000_1514 = param_2;
  _DAT_1000_14fc = (int *)CONCAT22(DAT_1000_14fe,piVar3 + 2);
  return uVar1;
}



/* 1000:176d FUN_1000_176d */

int __cdecl16far FUN_1000_176d(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1000_14fe;
  iVar1 = DAT_1000_14fc;
  LOCK();
  DAT_1000_14fc = 0;
  UNLOCK();
  LOCK();
  DAT_1000_14fe = (iVar1 + 0xfU >> 4) + DAT_1000_14fe;
  UNLOCK();
  return iVar2;
}



/* 1000:178a FUN_1000_178a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1000_178a(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_DX;
  int in_BX;
  int *piVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  piVar2 = _DAT_1000_14fc;
  iVar7 = (int)((ulong)_DAT_1000_14fc >> 0x10);
  piVar5 = (int *)_DAT_1000_14fc;
  if (iVar7 != 0) {
    if (DAT_1000_1504 < piVar5 + DAT_1000_1516 * 2 + 2) {
      *(int *)0x2 = *(int *)0x2 + -1;
      iVar7 = 0;
      DAT_1000_1502 = 0;
    }
    else {
      DAT_1000_1506 = 0;
      DAT_1000_1508 = 0;
      DAT_1000_150a = 0;
      DAT_1000_1510 = DAT_1000_1510 ^ 1;
      bVar8 = DAT_1000_1510 == 0;
      *_DAT_1000_14fc = 0;
      piVar6 = piVar5 + 2;
      piVar5[1] = 0;
      DAT_1000_150c = DAT_1000_1516;
      do {
        while ((*DAT_1000_150e)(), !bVar8) {
          DAT_1000_1508 = 0;
LAB_1000_180f:
          DAT_1000_150a = DAT_1000_150a + 1;
          piVar1 = piVar6 + 1;
          *piVar6 = in_BX;
          piVar6 = piVar6 + 2;
          *piVar1 = extraout_DX;
          DAT_1000_150c = DAT_1000_150c + -1;
          bVar8 = false;
          if (DAT_1000_150c == 0) goto LAB_1000_1821;
        }
        if (DAT_1000_150a != 0) {
          DAT_1000_1508 = DAT_1000_1508 + 1;
          goto LAB_1000_180f;
        }
        DAT_1000_1506 = DAT_1000_1506 + 1;
        DAT_1000_150c = DAT_1000_150c + -1;
        bVar8 = DAT_1000_150c == 0;
      } while (!bVar8);
      DAT_1000_150c = 0;
LAB_1000_1821:
      iVar3 = DAT_1000_1506;
      iVar4 = DAT_1000_150a;
      if (DAT_1000_1508 != 0) {
        iVar4 = DAT_1000_150a - DAT_1000_1508;
        piVar6 = piVar6 + DAT_1000_1508 * -2;
      }
      *piVar2 = iVar4;
      piVar5[1] = iVar3;
      _DAT_1000_14fc = (int *)CONCAT22(DAT_1000_14fe,piVar6);
    }
  }
  return iVar7;
}



/* 1000:184e FUN_1000_184e */

void __cdecl16far
FUN_1000_184e(undefined2 param_1,uint param_2,int param_3,undefined2 param_4,undefined2 param_5)

{
  int iVar1;
  
  iVar1 = FUN_1000_16db(param_4,param_5);
  if (((iVar1 != 0) && (DAT_1000_1514 != 0)) && (DAT_1000_1516 != 0)) {
    if (DAT_1256_0412 == 1) {
      param_2 = param_2 << 1;
    }
    DAT_1000_1513 = (byte)param_2 & 7;
    iVar1 = *(int *)(param_3 * 2 + 0x27da) + (param_2 >> 3);
    DAT_1000_150e = 0x18cc;
    do {
      FUN_1000_178a(iVar1);
      iVar1 = iVar1 + DAT_1256_042c;
      DAT_1000_1514 = DAT_1000_1514 + -1;
    } while (DAT_1000_1514 != 0);
  }
  FUN_1000_176d();
  return;
}



/* 1000:19f0 FUN_1000_19f0 */

undefined2 __cdecl16far FUN_1000_19f0(void)

{
  undefined1 uVar1;
  bool bVar2;
  uint in_stack_0000000a;
  uint in_stack_0000000c;
  
  DAT_1000_1524 = (int)in_stack_0000000a >> 0xf;
  DAT_1000_1520 = (in_stack_0000000a ^ DAT_1000_1524) - DAT_1000_1524;
  DAT_1000_1526 = (int)in_stack_0000000c >> 0xf;
  DAT_1000_1522 = (in_stack_0000000c ^ DAT_1000_1526) - DAT_1000_1526;
  uVar1 = 0;
  bVar2 = true;
  FUN_1000_1b16();
  if (!bVar2) {
    FUN_1000_1a7b();
    if (!(bool)uVar1) {
      FUN_1000_1e23(0x1000);
    }
  }
  return 0x1528;
}



/* 1000:1a40 FUN_1000_1a40 */

undefined2 __cdecl16far FUN_1000_1a40(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined2 in_stack_0000000a;
  
  uVar1 = 0;
  bVar2 = true;
  DAT_1000_1520 = *(undefined2 *)0x0;
  DAT_1000_1522 = *(undefined2 *)0x2;
  FUN_1000_1b16();
  if (!bVar2) {
    FUN_1000_1a7b();
    if (!(bool)uVar1) {
      FUN_1000_1b6e();
    }
  }
  return 0x1528;
}



/* 1000:1a7b FUN_1000_1a7b */

void __cdecl16near FUN_1000_1a7b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_DX;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  
  if (unaff_DI < 0) {
    if (DAT_1000_1522 <= (uint)-unaff_DI) {
      return;
    }
    DAT_1000_1530 = -unaff_DI;
  }
  iVar2 = unaff_DI + DAT_1000_1522 + -1;
  iVar1 = *(int *)(unaff_BP + 8);
  if ((-1 < iVar1) && (unaff_DI <= iVar1)) {
    iVar3 = iVar2 - iVar1;
    if (iVar3 != 0 && iVar1 <= iVar2) {
      DAT_1000_1534 = iVar3;
    }
    if (in_DX < 0) {
      if (DAT_1000_1520 <= (uint)-in_DX) {
        return;
      }
      DAT_1000_1532 = -in_DX;
    }
    iVar2 = in_DX + DAT_1000_1520 + -1;
    iVar1 = *(int *)(unaff_BP + 6);
    if ((-1 < iVar1) && (in_DX <= iVar1)) {
      iVar3 = iVar2 - iVar1;
      if (iVar3 != 0 && iVar1 <= iVar2) {
        DAT_1000_1536 = iVar3;
      }
      DAT_1000_1528 = DAT_1000_1532 + in_DX;
      DAT_1000_152a = DAT_1000_1530 + unaff_DI;
      DAT_1000_152c = (DAT_1000_1520 - DAT_1000_1532) - DAT_1000_1536;
      DAT_1000_152e = (DAT_1000_1522 - DAT_1000_1530) - DAT_1000_1534;
      return;
    }
  }
  return;
}



/* 1000:1b16 FUN_1000_1b16 */

undefined2 __cdecl16near FUN_1000_1b16(void)

{
  undefined2 uVar1;
  int unaff_DS;
  
  DAT_1000_1530 = 0;
  DAT_1000_1532 = 0;
  DAT_1000_1534 = 0;
  DAT_1000_1536 = 0;
  DAT_1000_1528 = 0;
  DAT_1000_152a = 0;
  DAT_1000_152c = 0;
  DAT_1000_152e = 0;
  uVar1 = 0;
  if ((unaff_DS != 0) && (uVar1 = 0, *(int *)0x0 != 0)) {
    uVar1 = *(undefined2 *)0x2;
  }
  return uVar1;
}



/* 1000:1b4b FUN_1000_1b4b */

void __cdecl16far FUN_1000_1b4b(void)

{
  bool bVar1;
  
  bVar1 = true;
  FUN_1000_1b16();
  if (!bVar1) {
    FUN_1000_1b6e();
  }
  return;
}



/* 1000:1b6e FUN_1000_1b6e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1000_1b6e(void)

{
  undefined2 uVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  int in_DX;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  char cVar15;
  uint uVar16;
  int *unaff_BP;
  int iVar17;
  int *unaff_SI;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int unaff_DI;
  byte *pbVar21;
  byte *pbVar22;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar23;
  
  uVar1 = *(undefined2 *)(*unaff_BP * 2 + 0x2974);
  uVar12 = in_DX + unaff_BP[1];
  iVar17 = *unaff_SI;
  if (DAT_1256_0412 == 1) {
    uVar12 = uVar12 * 2;
    iVar17 = iVar17 << 1;
    DAT_1000_1532 = DAT_1000_1532 << 1;
    DAT_1000_1536 = DAT_1000_1536 << 1;
  }
  DAT_1000_1549 = (byte)uVar12 & 7;
  DAT_1000_1544 = 0xff >> DAT_1000_1549;
  bVar23 = (uVar12 & 7) != 0;
  DAT_1000_1545 = DAT_1000_1544;
  if (bVar23) {
    DAT_1000_1545 = ~DAT_1000_1544;
  }
  DAT_1000_1542 = (uint)bVar23;
  DAT_1000_1547 = 0xff >> ((byte)(uVar12 + DAT_1000_1532) & 7);
  uVar16 = uVar12 + DAT_1000_1532 >> 3;
  pbVar21 = (byte *)(*(int *)((unaff_DI + unaff_BP[2] + DAT_1000_1530) * 2 + 0x27da) + uVar16);
  uVar12 = (uVar12 + iVar17 + -1) - DAT_1000_1536;
  DAT_1000_1548 = -0x80 >> ((byte)uVar12 & 7);
  DAT_1000_151a = ((uVar12 >> 3) - uVar16) + 1;
  piVar18 = unaff_SI + 2;
  iVar8 = (unaff_SI[1] - DAT_1000_1530) - DAT_1000_1534;
  iVar17 = DAT_1000_1530;
  if (iVar8 != 0 && DAT_1000_1534 <= unaff_SI[1] - DAT_1000_1530) {
    for (; iVar17 != 0; iVar17 = iVar17 + -1) {
      piVar18 = piVar18 + *piVar18 * 2 + 2;
    }
    DAT_1000_1532 = DAT_1000_1549 + DAT_1000_1532 >> 3;
    if (4 < DAT_1000_1549) {
      DAT_1000_1549 = DAT_1000_1549 - 8;
    }
    _DAT_1000_1518 = iVar8;
    do {
      puVar3 = (uint *)(piVar18 + 1);
      iVar17 = *piVar18;
      piVar20 = piVar18 + 2;
      piVar18 = piVar20;
      if (iVar17 == 0) goto LAB_1000_1cd8;
      piVar18 = piVar20 + iVar17 * 2;
      uVar13 = iVar17 + DAT_1000_1542;
      uVar16 = *puVar3 - DAT_1000_1532;
      uVar12 = DAT_1000_151a;
      pbVar22 = pbVar21;
      if (uVar16 == 0) {
        bVar10 = DAT_1000_1547 & DAT_1000_1544;
LAB_1000_1ca4:
        if (uVar13 == uVar12) {
          DAT_1000_1546 = DAT_1000_1548 & DAT_1000_1545;
        }
        else {
          DAT_1000_1546 = DAT_1000_1548;
          if (uVar13 <= uVar12) {
            uVar12 = uVar13;
            DAT_1000_1546 = DAT_1000_1545;
          }
        }
        cVar15 = (char)uVar12;
        piVar19 = piVar20 + -2;
        if (DAT_1000_1549 == 0) {
          do {
            piVar2 = piVar20;
            piVar19 = piVar20 + 1;
            piVar20 = piVar20 + 2;
            bVar5 = (byte)*piVar19;
            bVar7 = (byte)((uint)*piVar19 >> 8);
            bVar11 = (byte)*piVar2;
            bVar14 = (byte)((uint)*piVar2 >> 8);
            if (cVar15 == '\x01') {
              bVar10 = bVar10 & DAT_1000_1546;
            }
            bVar10 = (bVar7 | bVar5 | bVar11 | bVar14) & bVar10;
            if (bVar10 != 0) {
              out(0x3ce,CONCAT11(bVar10,8));
              out(0x3c4,0x102);
              LOCK();
              *pbVar22 = bVar11;
              UNLOCK();
              out(0x3c5,2);
              *pbVar22 = bVar14;
              out(0x3c5,4);
              *pbVar22 = bVar5;
              out(0x3c5,8);
              *pbVar22 = bVar7;
            }
            pbVar22 = pbVar22 + 1;
            cVar15 = cVar15 + -1;
            bVar10 = 0xff;
          } while (cVar15 != '\0');
        }
        else if ((char)DAT_1000_1549 < '\0') {
          do {
            bVar11 = -DAT_1000_1549;
            piVar20 = piVar19 + 1;
            piVar4 = piVar19 + 3;
            bVar5 = (byte)((uint)(CONCAT11((char)*piVar19,(char)piVar19[2]) << (bVar11 & 0x1f)) >> 8
                          );
            bVar14 = (byte)((uint)(CONCAT11((char)((uint)*piVar19 >> 8),
                                            (char)((uint)piVar19[2] >> 8)) << (bVar11 & 0x1f)) >> 8)
            ;
            piVar19 = piVar19 + 2;
            bVar7 = (byte)((uint)(CONCAT11((char)*piVar20,(char)*piVar4) << (bVar11 & 0x1f)) >> 8);
            bVar11 = (byte)((uint)(CONCAT11((char)((uint)*piVar20 >> 8),(char)((uint)*piVar4 >> 8))
                                  << (bVar11 & 0x1f)) >> 8);
            if (cVar15 == '\x01') {
              bVar10 = bVar10 & DAT_1000_1546;
            }
            bVar10 = (bVar7 | bVar11 | bVar5 | bVar14) & bVar10;
            if (bVar10 != 0) {
              out(0x3ce,CONCAT11(bVar10,8));
              out(0x3c4,0x102);
              LOCK();
              *pbVar22 = bVar5;
              UNLOCK();
              out(0x3c5,2);
              *pbVar22 = bVar14;
              out(0x3c5,4);
              *pbVar22 = bVar7;
              out(0x3c5,8);
              *pbVar22 = bVar11;
            }
            pbVar22 = pbVar22 + 1;
            cVar15 = cVar15 + -1;
            bVar10 = 0xff;
          } while (cVar15 != '\0');
        }
        else {
          do {
            piVar20 = piVar19 + 1;
            piVar4 = piVar19 + 3;
            bVar5 = (byte)(CONCAT11((char)*piVar19,(char)piVar19[2]) >> (DAT_1000_1549 & 0x1f));
            bVar11 = (byte)(CONCAT11((char)((uint)*piVar19 >> 8),(char)((uint)piVar19[2] >> 8)) >>
                           (DAT_1000_1549 & 0x1f));
            piVar19 = piVar19 + 2;
            cVar9 = (char)((uint)*piVar4 >> 8);
            cVar6 = (char)*piVar4;
            bVar7 = (byte)(CONCAT11((char)*piVar20,cVar6) >> (DAT_1000_1549 & 0xf)) |
                    cVar6 << 0x10 - (DAT_1000_1549 & 0xf);
            bVar14 = (byte)(CONCAT11((char)((uint)*piVar20 >> 8),cVar9) >> (DAT_1000_1549 & 0xf)) |
                     cVar9 << 0x10 - (DAT_1000_1549 & 0xf);
            if (cVar15 == '\x01') {
              bVar10 = bVar10 & DAT_1000_1546;
            }
            bVar10 = (bVar14 | bVar7 | bVar11 | bVar5) & bVar10;
            if (bVar10 != 0) {
              out(0x3ce,CONCAT11(bVar10,8));
              out(0x3c4,0x102);
              LOCK();
              *pbVar22 = bVar5;
              UNLOCK();
              out(0x3c5,2);
              *pbVar22 = bVar11;
              out(0x3c5,4);
              *pbVar22 = bVar7;
              out(0x3c5,8);
              *pbVar22 = bVar14;
            }
            pbVar22 = pbVar22 + 1;
            cVar15 = cVar15 + -1;
            bVar10 = 0xff;
          } while (cVar15 != '\0');
        }
      }
      else if (*puVar3 < DAT_1000_1532) {
        bVar23 = -uVar16 <= uVar13;
        uVar13 = uVar13 + uVar16;
        if (bVar23 && uVar13 != 0) {
          piVar20 = piVar20 + uVar16 * -2;
          bVar10 = DAT_1000_1547;
          goto LAB_1000_1ca4;
        }
      }
      else if (uVar16 <= DAT_1000_151a && DAT_1000_151a - uVar16 != 0) {
        uVar12 = DAT_1000_151a - uVar16;
        pbVar22 = pbVar21 + uVar16;
        bVar10 = DAT_1000_1544;
        goto LAB_1000_1ca4;
      }
LAB_1000_1cd8:
      pbVar21 = pbVar21 + DAT_1256_042c;
      cVar15 = DAT_1000_1518 + -1;
      _DAT_1000_1518 = CONCAT11(DAT_1000_1518_1,cVar15);
    } while (cVar15 != '\0');
  }
  out(0x3c4,0xf02);
  out(0x3ce,0xff08);
  return 0xff08;
}



/* 1000:1e23 FUN_1000_1e23 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000_1e23(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char in_DL;
  byte bVar4;
  int *unaff_BP;
  int *unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  DAT_1000_1540 = *(undefined2 *)(*unaff_BP * 2 + 0x2974);
  DAT_1000_151c = *unaff_SI;
  DAT_1000_151e = unaff_SI[1];
  iVar1 = (DAT_1000_1520 - DAT_1000_1532) - DAT_1000_1536;
  DAT_1000_153e = unaff_DS;
  if ((iVar1 == 0 || DAT_1000_1520 - DAT_1000_1532 < DAT_1000_1536) ||
     (iVar2 = (DAT_1000_1522 - DAT_1000_1530) - DAT_1000_1534, DAT_1000_151a = iVar1,
     iVar2 == 0 || DAT_1000_1522 - DAT_1000_1530 < DAT_1000_1534)) {
    FUN_1000_1f39();
    return;
  }
  DAT_1000_153c = DAT_1256_042c;
  iVar3 = DAT_1000_1530;
  if (DAT_1000_1526 != 0) {
    DAT_1000_153c = -DAT_1256_042c;
    iVar3 = DAT_1000_1534;
  }
  DAT_1000_153a = -(DAT_1000_1522 + 1U >> 1);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    for (DAT_1000_153a = DAT_1000_153a + DAT_1000_151e; -1 < DAT_1000_153a;
        DAT_1000_153a = DAT_1000_153a - DAT_1000_1522) {
    }
  }
  bVar4 = in_DL + (char)unaff_BP[1] + (char)DAT_1000_1532;
  uRam00011fea = DAT_1000_2015;
  uRam00011fec = DAT_1000_2017;
  if (DAT_1000_1524 != 0) {
    bVar4 = (bVar4 + (char)iVar1) - 1;
    uRam00011fea = DAT_1000_201a;
    DAT_1000_1532 = DAT_1000_1536;
    uRam00011fec = DAT_1000_201c;
  }
  DAT_1000_1538 = -(DAT_1000_1520 + 1U >> 1);
  iVar1 = 0;
  while (DAT_1000_1532 = DAT_1000_1532 + -1, -1 < DAT_1000_1532) {
    for (DAT_1000_1538 = DAT_1000_1538 + DAT_1000_151c; -1 < DAT_1000_1538;
        DAT_1000_1538 = DAT_1000_1538 - DAT_1000_1520) {
      iVar1 = iVar1 + 1;
    }
  }
  DAT_1000_154a = 0x80 >> (bVar4 & 7);
  DAT_1256_0432 = 0xf;
  out(0x3ce,0xf01);
  _DAT_1000_1518 = iVar2;
  DAT_1000_1532 = iVar1;
  uRam00012001 = uRam00011fea;
  uRam00012003 = uRam00011fec;
  FUN_1000_1f4f();
  return;
}



/* 1000:1f39 FUN_1000_1f39 */

undefined2 __cdecl16far FUN_1000_1f39(void)

{
  DAT_1256_0432 = 0;
  out(0x3ce,1);
  out(0x3ce,0xff08);
  return 0xff08;
}



/* 1000:1f4f FUN_1000_1f4f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000_1f4f(void)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint in_DX;
  char cVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  int *unaff_SI;
  uint *puVar11;
  char *unaff_DI;
  byte *pbVar12;
  char *pcVar13;
  undefined2 unaff_DS;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  
  do {
    uVar4 = *unaff_SI * 8;
    if (uVar4 != 0) {
      puVar11 = (uint *)(unaff_SI + 2);
      iVar5 = unaff_SI[1] * 8;
      if (DAT_1000_1532 < iVar5 + uVar4) {
        pbVar12 = (byte *)0x154c;
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          pbVar2 = pbVar12;
          pbVar12 = pbVar12 + 1;
          *pbVar2 = 0;
        }
        uVar8 = uVar4;
        do {
          if ((uVar4 & 7) == 0) {
            puVar1 = puVar11 + 1;
            uVar8 = *puVar11;
            puVar11 = puVar11 + 2;
            in_DX = *puVar1;
          }
          bVar14 = (int)in_DX < 0;
          cVar6 = (char)in_DX;
          in_DX = CONCAT11((char)(in_DX >> 8) << 1,cVar6 << 1);
          bVar15 = (int)uVar8 < 0;
          cVar7 = (char)uVar8;
          uVar8 = CONCAT11((char)(uVar8 >> 8) << 1,cVar7 << 1);
          pbVar2 = pbVar12;
          pbVar12 = pbVar12 + 1;
          *pbVar2 = ((bVar14 << 1 | cVar6 < '\0') << 1 | bVar15) << 1 | cVar7 < '\0';
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        iVar5 = (DAT_1000_151c + 0x154c) - (int)pbVar12;
        if (pbVar12 <= (byte *)(DAT_1000_151c + 0x154c) && iVar5 != 0) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            pbVar2 = pbVar12;
            pbVar12 = pbVar12 + 1;
            *pbVar2 = 0;
          }
        }
        uVar3 = DAT_1000_1540;
        in_DX = 0x3ce;
        pbVar12 = (byte *)(DAT_1000_1532 + 0x154c);
        iVar5 = DAT_1000_151a;
        iVar10 = DAT_1000_1538;
        pcVar13 = unaff_DI;
        bVar9 = DAT_1000_154a;
        do {
          while( true ) {
            pbVar2 = pbVar12;
            pbVar12 = pbVar12 + 1;
            bVar17 = *pbVar2;
            if (bVar17 == 0) break;
            do {
              iVar5 = iVar5 + -1;
              if (iVar5 < 0) goto LAB_1000_2020;
              out(0x3ce,(uint)bVar17 << 8);
              out(0x3ce,CONCAT11(bVar9,8));
              *pcVar13 = *pcVar13 + '\x01';
              bVar16 = bVar9 & 1;
              bVar9 = bVar9 >> 1 | bVar9 << 7;
              pcVar13 = pcVar13 + bVar16;
              iVar10 = iVar10 + DAT_1000_151c;
            } while (iVar10 < 0);
            while (iVar10 = iVar10 - DAT_1000_1520, -1 < iVar10) {
              pbVar12 = pbVar12 + 1;
            }
          }
          do {
            iVar5 = iVar5 + -1;
            if (iVar5 < 0) goto LAB_1000_2020;
            bVar17 = bVar9 & 1;
            bVar9 = bVar9 >> 1 | bVar9 << 7;
            pcVar13 = pcVar13 + bVar17;
            iVar10 = iVar10 + DAT_1000_151c;
          } while (iVar10 < 0);
          while (iVar10 = iVar10 - DAT_1000_1520, -1 < iVar10) {
            pbVar12 = pbVar12 + 1;
          }
        } while( true );
      }
    }
LAB_1000_2020:
    _DAT_1000_1518 = _DAT_1000_1518 + -1;
    if (_DAT_1000_1518 == 0) {
      FUN_1000_1f39();
      return;
    }
    unaff_DI = unaff_DI + DAT_1000_153c;
    for (DAT_1000_153a = DAT_1000_153a + DAT_1000_151e; -1 < DAT_1000_153a;
        DAT_1000_153a = DAT_1000_153a - DAT_1000_1522) {
      unaff_SI = unaff_SI + *unaff_SI * 2 + 2;
    }
    unaff_DS = DAT_1000_153e;
  } while( true );
}



/* 1000:214a FUN_1000_214a */

void __cdecl16far FUN_1000_214a(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar11;
  char *pcVar12;
  int unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar2 = *(undefined2 *)(unaff_BP + 0xc);
  *(undefined1 *)0x4da = (char)uVar2;
  *(undefined1 *)0x4de = (char)((uint)uVar2 >> 8);
  FUN_1000_0588();
  *(undefined1 *)0x4db = *(undefined1 *)(unaff_BP + 0xe);
  *(undefined1 *)0x4dc = *(undefined1 *)(unaff_BP + 10);
  iVar3 = *(int *)0x4f0;
  uVar2 = *(undefined2 *)(unaff_ES * 2 + 0x2974);
  *(undefined2 *)0x4d8 = *(undefined2 *)(*(int *)0x4f4 * 2 + 0x27a);
  *(int *)0x4d4 = (DAT_1256_042c & 0xff) * (uint)*(byte *)0x4ee;
  *(int *)0x4d6 = (*(uint *)0x4f0 & 0xff) * (uint)*(byte *)0x4ee;
  iVar9 = 0x3ce;
  while( true ) {
    puVar1 = unaff_SI;
    unaff_SI = (undefined2 *)((int)unaff_SI + 1);
    bVar4 = (byte)*puVar1;
    if (bVar4 == 0) break;
    if ((char)bVar4 < '\0') {
      *(byte *)0x4da = bVar4 & 0x7f;
      FUN_1000_0588();
    }
    else if ((bVar4 <= *(byte *)0x4e3) && (*(byte *)0x4e2 <= bVar4)) {
      uVar8 = (uint)(byte)(bVar4 - *(byte *)0x4e2);
      cVar6 = *(char *)0x4e8;
      if (cVar6 == '\0') {
        cVar6 = *(char *)(*(int *)0x4e0 + uVar8) + *(char *)0x4e4;
      }
      if ((char)((uint)*puVar1 >> 8) == '\0') {
        cVar6 = cVar6 - *(char *)0x4ed;
      }
      cVar5 = *(char *)0x4e9;
      *(char *)0x4df = cVar6 - cVar5;
      uVar10 = -0x8000 >> ((cVar6 - cVar5) - 1U & 0x1f);
      *(uint *)0x4d2 = uVar10;
      pcVar12 = (char *)(*(int *)0x4d8 + (*(uint *)0x4f2 >> 3));
      bVar4 = (byte)*(uint *)0x4f2 & 7;
      uVar10 = uVar10 >> bVar4;
      *(char *)0x4dd = -(bVar4 - 8);
      puVar11 = (undefined2 *)((uVar8 << (*(byte *)0x4e7 & 0x1f)) + *(int *)0x4e5);
      while( true ) {
        bVar4 = (byte)(uVar10 >> 8);
        if (*(char *)0x4dc != '\0') {
          out(iVar9,(uint)*(byte *)0x4db << 8);
          out(iVar9,CONCAT11(bVar4,8));
          uVar8 = (uint)*(byte *)0x4ee;
          do {
            *pcVar12 = *pcVar12 + '\x01';
            pcVar12 = pcVar12 + DAT_1256_042c;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
          pcVar12 = pcVar12 + -*(int *)0x4d4;
        }
        out(iVar9,(uint)*(byte *)0x4da << 8);
        out(iVar9,8);
        cVar6 = *(char *)0x4ee;
        bVar7 = *(char *)0x4dd + *(char *)0x4e9 & 0xf;
        do {
          cVar5 = (char)((uint)*puVar11 >> 8);
          out(iVar9 + 1,
              (cVar5 << bVar7 | (byte)(CONCAT11((char)*puVar11,cVar5) >> 0x10 - bVar7)) & bVar4);
          *pcVar12 = *pcVar12 + '\x01';
          pcVar12 = pcVar12 + DAT_1256_042c;
          puVar11 = (undefined2 *)((int)puVar11 + iVar3);
          cVar6 = cVar6 + -1;
        } while (cVar6 != '\0');
        pcVar12 = pcVar12 + (1 - *(int *)0x4d4);
        puVar11 = (undefined2 *)((int)puVar11 - *(int *)0x4d6);
        if (*(byte *)0x4df <= *(byte *)0x4dd) break;
        uVar10 = *(int *)0x4d2 << (*(byte *)0x4dd & 0x1f);
        *(char *)0x4dd = *(char *)0x4dd + '\b';
      }
      *(undefined1 *)0x4e9 = 0;
      *(int *)0x4f2 = *(int *)0x4f2 + (uint)*(byte *)0x4df;
    }
  }
  FUN_1000_05b5();
  *(undefined1 *)(unaff_BP + 0xc) = *(undefined1 *)0x4da;
  return;
}



/* 1000:22ba FUN_1000_22ba */

void __cdecl16far FUN_1000_22ba(uint param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  if ((param_1 <= DAT_1256_0500) && (param_1 * 2 != 0)) {
    uVar4 = (uint)(byte)((*(char *)(param_2 + -7) - *(char *)(param_2 + -8)) + 1);
    iVar3 = uVar4 + 8;
    puVar5 = (undefined2 *)(param_2 - iVar3);
    puVar6 = (undefined2 *)((*(int *)(param_1 * 2 + 0x500) + 0x500) - iVar3);
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



/* 1000:230a FUN_1000_230a */

int __cdecl16far FUN_1000_230a(uint param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = '\0';
  cVar3 = '\0';
  if ((((-1 < (char)param_2) && (param_1 <= DAT_1256_0500)) && (param_1 * 2 != 0)) &&
     ((iVar1 = *(int *)(param_1 * 2 + 0x500), *(byte *)(iVar1 + 0x4f8) <= param_2 &&
      (param_2 <= *(byte *)(iVar1 + 0x4f9))))) {
    cVar3 = *(char *)(iVar1 + 0x4fd);
    cVar2 = *(char *)(iVar1 + 0x4fb);
    if (cVar2 == '\0') {
      cVar2 = *(char *)((iVar1 + 0x4f7) - (uint)(byte)(*(char *)(iVar1 + 0x4f9) - param_2));
    }
  }
  return (int)(char)(cVar2 + cVar3);
}



/* 1000:235b FUN_1000_235b */

char __cdecl16far FUN_1000_235b(uint param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((param_1 <= DAT_1256_0500) && (param_1 * 2 != 0)) {
    iVar1 = *(int *)(param_1 * 2 + 0x500);
    cVar2 = *(char *)(iVar1 + 0x4fc) + *(char *)(iVar1 + 0x4fe);
  }
  return cVar2;
}



/* 1000:2384 FUN_1000_2384 */

void __cdecl16far FUN_1000_2384(void)

{
  FUN_1000_239e(0x1000);
  return;
}



/* 1000:239e FUN_1000_239e */

void FUN_1000_239e(void)

{
  FUN_1000_24cf();
  FUN_1000_2404();
  FUN_1000_23b6();
  FUN_1000_2463();
  FUN_1000_24a3();
  return;
}



/* 1000:23b6 FUN_1000_23b6 */

int __cdecl16near FUN_1000_23b6(void)

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
  
  if (*(char *)0x4e8 == '\0') {
    return in_AX;
  }
  if (-1 < *(int *)(unaff_BP + 6)) {
    iVar3 = *(int *)0x4f2;
    if (-1 < iVar3) {
      return iVar3;
    }
    *(undefined2 *)0x4f2 = 0;
    bVar1 = *(byte *)0x4e8;
    uVar4 = (undefined1)((uint)-iVar3 % (uint)bVar1);
    *(undefined1 *)0x4e9 = uVar4;
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
      } while ((bVar1 < *(byte *)0x4e2) || (*(byte *)0x4e3 < bVar1));
    } while (bVar1 != *(byte *)0x4e3);
  }
  if ((undefined1 *)*(undefined2 *)0x4ea != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x4ea = *(undefined1 *)0x4ec;
  }
  return *(int *)0x4f2 - *(int *)(unaff_BP + 2);
}



/* 1000:2404 FUN_1000_2404 */

uint __cdecl16near FUN_1000_2404(void)

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
  
  if (*(char *)0x4e8 != '\0') {
    iVar2 = *(int *)(unaff_BP + 6);
    if ((iVar2 < 0) || (iVar2 < *(int *)0x4f2)) {
      if ((undefined1 *)*(undefined2 *)0x4ea != (undefined1 *)0x0) {
        *(undefined1 *)*(undefined2 *)0x4ea = *(undefined1 *)0x4ec;
      }
      return *(int *)0x4f2 - *(int *)(unaff_BP + 2);
    }
    iVar3 = *(int *)0x4f2 + -1;
    pbVar4 = (byte *)(in_BX + -1);
    do {
      pbVar5 = pbVar4;
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar4;
      if (bVar1 == 0) {
        return 0;
      }
    } while (((((char)bVar1 < '\0') || (bVar1 < *(byte *)0x4e2)) || (*(byte *)0x4e3 < bVar1)) ||
            (iVar3 = iVar3 + (uint)*(byte *)0x4e8, iVar3 < iVar2));
    *(char *)0x4ed = (char)iVar3 - (char)iVar2;
    pbVar5 = pbVar5 + 2;
    bVar1 = *pbVar5;
    in_AX = (uint)bVar1;
    *pbVar5 = 0;
    *(byte *)0x4ec = bVar1;
    *(undefined2 *)0x4ea = pbVar5;
  }
  return in_AX;
}



/* 1000:2463 FUN_1000_2463 */

int __cdecl16near FUN_1000_2463(void)

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
    iVar4 = *(int *)0x4f4;
    if (iVar4 < 0) {
      puVar1 = (uint *)0x4ee;
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + iVar4;
      if (uVar3 < (uint)-iVar4 || *puVar1 == 0) goto LAB_1000_24b8;
      *(undefined2 *)0x4f4 = 0;
      *(int *)0x4e5 = *(int *)0x4e5 + -iVar4 * *(int *)0x4f0;
    }
    if (*(uint *)0x4f4 <= uVar2) {
      uVar3 = (*(uint *)0x4f4 + *(int *)0x4ee) - 1;
      iVar4 = uVar3 - uVar2;
      if (uVar2 <= uVar3 && iVar4 != 0) {
        *(int *)0x4ee = *(int *)0x4ee - iVar4;
      }
      return iVar4;
    }
  }
LAB_1000_24b8:
  if ((undefined1 *)*(undefined2 *)0x4ea != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x4ea = *(undefined1 *)0x4ec;
  }
  return *(int *)0x4f2 - *(int *)(unaff_BP + 2);
}



/* 1000:24a3 FUN_1000_24a3 */

int __cdecl16far FUN_1000_24a3(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)0x4f2 = *(int *)0x4f2 + *(int *)(unaff_BP + 2);
  *(int *)0x4f4 = *(int *)0x4f4 + *(int *)(unaff_BP + 4);
  FUN_1000_214a();
  if ((undefined1 *)*(undefined2 *)0x4ea != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x4ea = *(undefined1 *)0x4ec;
  }
  return *(int *)0x4f2 - *(int *)(unaff_BP + 2);
}



/* 1000:24cf FUN_1000_24cf */

/* WARNING: Removing unreachable block (ram,0x000124c0) */

int __cdecl16far FUN_1000_24cf(void)

{
  char cVar1;
  int in_CX;
  undefined2 in_DX;
  char *in_BX;
  int unaff_BP;
  int iVar2;
  undefined2 unaff_SS;
  code *in_stack_00000000;
  
  DAT_1256_04ea = 0;
  DAT_1256_04e9 = 0;
  DAT_1256_04ed = 0;
  if (((*in_BX == '\0') || (DAT_1256_0500 < *(uint *)(unaff_BP + 0x10))) ||
     (iVar2 = *(uint *)(unaff_BP + 0x10) * 2, iVar2 == 0)) {
    DAT_1256_04f4 = in_DX;
    DAT_1256_04f2 = in_CX;
    DAT_1256_04ed = 0;
    DAT_1256_04ea = 0;
    DAT_1256_04e9 = 0;
    return in_CX - *(int *)(unaff_BP + 2);
  }
  iVar2 = *(int *)(iVar2 + 0x500);
  DAT_1256_04e5 = iVar2 + 0x500;
  cVar1 = *(char *)(iVar2 + 0x4fc);
  if ((*(byte *)(unaff_BP + 10) & 1) != 0) {
    cVar1 = cVar1 + *(char *)(iVar2 + 0x4fe);
  }
  DAT_1256_04ee = (int)cVar1;
  DAT_1256_04e4 = *(char *)(iVar2 + 0x4fd);
  DAT_1256_04e8 = *(char *)(iVar2 + 0x4fb);
  if (DAT_1256_04e8 != '\0') {
    DAT_1256_04e8 = DAT_1256_04e8 + DAT_1256_04e4;
  }
  DAT_1256_04e2 = *(char *)(iVar2 + 0x4f8);
  DAT_1256_04e3 = *(char *)(iVar2 + 0x4f9);
  DAT_1256_04e7 = *(char *)(iVar2 + 0x4fa) - 1;
  DAT_1256_04e0 = (iVar2 + 0x4f7) - (uint)(byte)(DAT_1256_04e3 - DAT_1256_04e2);
  DAT_1256_04f0 = (byte)(DAT_1256_04e3 - DAT_1256_04e2) + 1 << (DAT_1256_04e7 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x00012557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DAT_1256_04f2 = in_CX;
  DAT_1256_04f4 = in_DX;
  iVar2 = (*in_stack_00000000)();
  return iVar2;
}


