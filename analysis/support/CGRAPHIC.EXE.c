/* Decompiled pseudocode; not original source or guaranteed compilable C. */

/* 1000:0010 entry */

/* WARNING: Instruction at (ram,0x00010057) overlaps instruction at (ram,0x00010056)
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __cdecl16far entry(void)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  byte bVar6;
  undefined2 uVar7;
  char in_AL;
  byte bVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int in_CX;
  uint uVar12;
  undefined2 in_DX;
  char cVar13;
  int in_BX;
  char *pcVar14;
  undefined2 *puVar15;
  int unaff_BP;
  uint uVar16;
  int unaff_SI;
  undefined2 *puVar17;
  int unaff_DI;
  char *pcVar18;
  undefined2 *puVar19;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  byte in_AF;
  byte in_TF;
  byte in_NT;
  longdouble in_ST0;
  
  pcVar18 = (char *)(unaff_DI + 1);
  pcVar14 = (char *)(in_BX + 2);
  uVar16 = unaff_BP + 2;
  DAT_11dd_4a2e = in_DX;
  pcVar14[unaff_SI] = pcVar14[unaff_SI] ^ (byte)((uint)pcVar14 >> 8);
  bVar8 = in_AL + 0x98;
  pcVar14[unaff_SI] = pcVar14[unaff_SI] + bVar8;
  pcVar14[unaff_SI] = pcVar14[unaff_SI] + bVar8;
  cVar10 = (char)in_DX;
  pcVar14[unaff_SI] = pcVar14[unaff_SI] + cVar10;
  *(double *)(pcVar14 + (int)pcVar18) = (double)in_ST0;
  *(byte *)(uVar16 + unaff_SI) = *(byte *)(uVar16 + unaff_SI) & (byte)in_CX;
  cVar13 = (char)((uint)in_DX >> 8);
  *pcVar18 = *pcVar18 + cVar13;
  *(int *)(unaff_SI + 0x1a01) = *(int *)(unaff_SI + 0x1a01) + uVar16;
  DAT_11dd_4a2c = 0x1000;
  *pcVar14 = *pcVar14 + '\x01';
  puVar15 = (undefined2 *)0xa;
  DAT_11dd_4a2a = 0x6015;
  *(uint *)(pcVar14 + (int)pcVar18 + 0xf) = *(uint *)(pcVar14 + (int)pcVar18 + 0xf) | (uint)pcVar14;
  puVar1 = (uint *)(unaff_DI + -0x9f6);
  uVar12 = *puVar1;
  *puVar1 = *puVar1 + uVar16;
  bVar6 = (bVar8 | 0xef) + 0xb9;
  iVar11 = CONCAT11((char)bVar8 >> 7,bVar6 + CARRY2(uVar12,uVar16)) + 0x1ac1 +
           (uint)(0x46 < (bVar8 | 0xef) || CARRY1(bVar6,CARRY2(uVar12,uVar16)));
  if (-1 < iVar11) {
    unaff_SI = unaff_SI + 1;
    pbVar2 = (byte *)(unaff_DI + 0x1e);
    bVar6 = *pbVar2;
    bVar9 = (byte)iVar11;
    *pbVar2 = *pbVar2 + bVar9;
    pcVar3 = (char *)(unaff_DI + 2);
    *pcVar3 = (*pcVar3 - cVar10) - CARRY1(bVar6,bVar9);
    iVar11 = -*(int *)(pcVar14 + unaff_DI + 2);
    puVar15 = (undefined2 *)(iVar11 + 8);
    *(undefined2 *)(iVar11 + 8) = unaff_ES;
    uVar12 = in_CX - 1;
    if (uVar12 != 0) goto LAB_1000_0073;
    *(undefined2 *)pcVar14 = *(undefined2 *)pcVar14;
    puVar15 = (undefined2 *)(iVar11 + 6);
    *(undefined2 *)(iVar11 + 6) = CONCAT11(cVar13 + bVar8,cVar10);
    in_CX = 0;
  }
  uVar12 = in_CX + 1;
LAB_1000_0073:
  *(uint *)(unaff_SI + 0x10) = *(uint *)(unaff_SI + 0x10) | (uint)puVar15;
  uVar7 = *puVar15;
  *(uint *)(pcVar14 + unaff_SI) = *(uint *)(pcVar14 + unaff_SI) | uVar12;
  *puVar15 = unaff_ES;
  *(char *)0x1659 = *(char *)0x1659 + '\x01';
  puVar1 = (uint *)(in_BX + -0x51fd);
  uVar16 = *puVar1;
  *puVar1 = *puVar1 + 0x9e16;
  cVar10 = (((0x61e9 < uVar16) + 'a') - pcVar14[unaff_SI]) - (0x9eU < (0x61e9 < uVar16));
  pcVar14[unaff_SI] = pcVar14[unaff_SI] + cVar10;
  pcVar14[unaff_SI] = pcVar14[unaff_SI] + cVar10;
  pcVar14[unaff_SI] = pcVar14[unaff_SI] + cVar10;
  pcVar14[unaff_SI] = pcVar14[unaff_SI] + cVar10;
  pbVar2 = (byte *)0x3e83;
  bVar6 = *pbVar2;
  bVar9 = (byte)(uVar12 >> 8);
  bVar8 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar9;
  puVar15[-1] = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar8,bVar9) * 0x800 | 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)((char)*pbVar2 < '\0') * 0x80 |
                (uint)(*pbVar2 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
                (uint)((POPCOUNT(*pbVar2) & 1U) == 0) * 4 | (uint)CARRY1(bVar6,bVar9);
  pcVar3 = pcVar14 + unaff_SI;
  *pcVar3 = *pcVar3 + cVar10;
  if (*pcVar3 != '\0') {
    puVar15[-2] = unaff_SI;
    puVar15[-3] = uVar7;
    puVar15[-4] = unaff_DS;
    puVar15[-5] = unaff_ES;
    puVar17 = (undefined2 *)0xa000;
    puVar19 = (undefined2 *)0xc000;
    for (iVar11 = 0x1000; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar5 = puVar19;
      puVar19 = puVar19 + 1;
      puVar4 = puVar17;
      puVar17 = puVar17 + 1;
      *puVar5 = *puVar4;
    }
  }
  return;
}



/* 1000:00c9 FUN_1000_00c9 */

void __cdecl16near FUN_1000_00c9(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int unaff_ES;
  
  if ((unaff_ES == -0x4800) && (iRam0001009c != 0)) {
    puVar6 = (undefined1 *)(*(int *)((uRam000100a0 & 0xfffe) * 2 + 0x1e20) + (uRam0001009e >> 2));
    uVar3 = iRam000100a2 + 3;
    uVar4 = uRam000100a4;
    if ((uRam000100a0 & 1) != 0) {
      uVar4 = uRam000100a4 + 1;
    }
    cVar5 = (char)(uVar4 >> 1);
    do {
      puVar7 = puVar6;
      puVar8 = puVar6;
      for (uVar4 = uVar3 >> 2 & 0xff; uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar1;
      }
      puVar6 = puVar6 + 0x50;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
  }
  return;
}



/* 1000:0cc1 FUN_1000_0cc1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_1000_0cc1(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar1 = DAT_1000_0ad8;
  uVar2 = DAT_1000_0adc - DAT_1000_0ad8;
  if (DAT_1000_0adc < DAT_1000_0ad8 || uVar2 == 0) {
    _DAT_1000_0ad6 = (int *)0x0;
    return 0;
  }
  if (0xfff < uVar2) {
    uVar2 = 0xfff;
  }
  DAT_1000_0ade = uVar2 << 4;
  piVar3 = (int *)_DAT_1000_0ad6;
  *_DAT_1000_0ad6 = param_1;
  DAT_1000_0ae8 = 0xeb1;
  DAT_1000_0aea = 0;
  DAT_1000_0af0 = param_1 + 3U >> 2;
  DAT_1000_0aec = -0x40 >> (((char)param_1 - 1U & 3) << 1);
  piVar3[1] = param_2;
  DAT_1000_0aee = param_2;
  _DAT_1000_0ad6 = (int *)CONCAT22(DAT_1000_0ad8,piVar3 + 2);
  return uVar1;
}



/* 1000:0d35 FUN_1000_0d35 */

int __cdecl16far FUN_1000_0d35(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1000_0ad8;
  iVar1 = DAT_1000_0ad6;
  LOCK();
  DAT_1000_0ad6 = 0;
  UNLOCK();
  LOCK();
  DAT_1000_0ad8 = (iVar1 + 0xfU >> 4) + DAT_1000_0ad8;
  UNLOCK();
  return iVar2;
}



/* 1000:0d52 FUN_1000_0d52 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1000_0d52(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int extraout_DX;
  int *piVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  piVar2 = _DAT_1000_0ad6;
  iVar8 = (int)((ulong)_DAT_1000_0ad6 >> 0x10);
  piVar6 = (int *)_DAT_1000_0ad6;
  if (iVar8 != 0) {
    piVar4 = piVar6 + DAT_1000_0af0 + 2;
    if (DAT_1000_0ade < piVar4) {
      *(int *)0x2 = *(int *)0x2 + -1;
      iVar8 = 0;
      DAT_1000_0adc = 0;
    }
    else {
      *_DAT_1000_0ad6 = (int)piVar4;
      piVar7 = piVar6 + 2;
      piVar6[1] = (int)piVar4;
      DAT_1000_0ae6 = DAT_1000_0af0;
      DAT_1000_0ae0 = 0;
      DAT_1000_0ae2 = 0;
      DAT_1000_0ae4 = 0;
      DAT_1000_0aea = DAT_1000_0aea ^ 1;
      bVar9 = DAT_1000_0aea == 0;
      do {
        while ((*DAT_1000_0ae8)(), !bVar9) {
          DAT_1000_0ae2 = 0;
LAB_1000_0de0:
          DAT_1000_0ae4 = DAT_1000_0ae4 + 1;
          piVar1 = piVar7;
          piVar7 = piVar7 + 1;
          *piVar1 = extraout_DX;
          DAT_1000_0ae6 = DAT_1000_0ae6 + -1;
          bVar9 = false;
          if (DAT_1000_0ae6 == 0) goto LAB_1000_0def;
        }
        if (DAT_1000_0ae4 != 0) {
          DAT_1000_0ae2 = DAT_1000_0ae2 + 1;
          goto LAB_1000_0de0;
        }
        DAT_1000_0ae0 = DAT_1000_0ae0 + 1;
        DAT_1000_0ae6 = DAT_1000_0ae6 + -1;
        bVar9 = DAT_1000_0ae6 == 0;
      } while (!bVar9);
      DAT_1000_0ae6 = 0;
LAB_1000_0def:
      iVar3 = DAT_1000_0ae0;
      iVar5 = DAT_1000_0ae4;
      if (DAT_1000_0ae2 != 0) {
        iVar5 = DAT_1000_0ae4 - DAT_1000_0ae2;
        piVar7 = piVar7 + -DAT_1000_0ae2;
      }
      *piVar2 = iVar5;
      piVar6[1] = iVar3;
      _DAT_1000_0ad6 = (int *)CONCAT22(DAT_1000_0ad8,piVar7);
    }
  }
  return iVar8;
}



/* 1000:0e1a FUN_1000_0e1a */

void __cdecl16far
FUN_1000_0e1a(undefined2 param_1,uint param_2,int param_3,undefined2 param_4,undefined2 param_5)

{
  int iVar1;
  
  iVar1 = FUN_1000_0cc1(param_4,param_5);
  if (((iVar1 != 0) && (DAT_1000_0aee != 0)) && (DAT_1000_0af0 != 0)) {
    param_3 = param_3 << 1;
    DAT_1000_0aed = (undefined1)((param_2 & 3) << 1);
    DAT_1000_0ae8 = 0xe92;
    do {
      FUN_1000_0d52(*(int *)(param_3 + 0x1e20) + (param_2 >> 2));
      param_3 = param_3 + 2;
      DAT_1000_0aee = DAT_1000_0aee + -1;
    } while (DAT_1000_0aee != 0);
  }
  FUN_1000_0d35();
  return;
}



/* 1000:0f09 FUN_1000_0f09 */

undefined2 __cdecl16far FUN_1000_0f09(void)

{
  undefined1 uVar1;
  bool bVar2;
  uint in_stack_0000000a;
  uint in_stack_0000000c;
  
  DAT_1000_0afe = (int)in_stack_0000000a >> 0xf;
  DAT_1000_0afa = (in_stack_0000000a ^ DAT_1000_0afe) - DAT_1000_0afe;
  DAT_1000_0b00 = (int)in_stack_0000000c >> 0xf;
  DAT_1000_0afc = (in_stack_0000000c ^ DAT_1000_0b00) - DAT_1000_0b00;
  uVar1 = 0;
  bVar2 = true;
  FUN_1000_102f();
  if (!bVar2) {
    FUN_1000_0f94();
    if (!(bool)uVar1) {
      FUN_1000_1252(0x1000);
    }
  }
  return 0xb02;
}



/* 1000:0f59 FUN_1000_0f59 */

undefined2 __cdecl16far FUN_1000_0f59(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined2 in_stack_0000000a;
  
  uVar1 = 0;
  bVar2 = true;
  DAT_1000_0afa = *(undefined2 *)0x0;
  DAT_1000_0afc = *(undefined2 *)0x2;
  FUN_1000_102f();
  if (!bVar2) {
    FUN_1000_0f94();
    if (!(bool)uVar1) {
      FUN_1000_1087();
    }
  }
  return 0xb02;
}



/* 1000:0f94 FUN_1000_0f94 */

void __cdecl16near FUN_1000_0f94(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_DX;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  
  if (unaff_DI < 0) {
    if (DAT_1000_0afc <= (uint)-unaff_DI) {
      return;
    }
    DAT_1000_0b0a = -unaff_DI;
  }
  iVar2 = unaff_DI + DAT_1000_0afc + -1;
  iVar1 = *(int *)(unaff_BP + 8);
  if ((-1 < iVar1) && (unaff_DI <= iVar1)) {
    iVar3 = iVar2 - iVar1;
    if (iVar3 != 0 && iVar1 <= iVar2) {
      DAT_1000_0b0e = iVar3;
    }
    if (in_DX < 0) {
      if (DAT_1000_0afa <= (uint)-in_DX) {
        return;
      }
      DAT_1000_0b0c = -in_DX;
    }
    iVar2 = in_DX + DAT_1000_0afa + -1;
    iVar1 = *(int *)(unaff_BP + 6);
    if ((-1 < iVar1) && (in_DX <= iVar1)) {
      iVar3 = iVar2 - iVar1;
      if (iVar3 != 0 && iVar1 <= iVar2) {
        DAT_1000_0b10 = iVar3;
      }
      DAT_1000_0b02 = DAT_1000_0b0c + in_DX;
      DAT_1000_0b04 = DAT_1000_0b0a + unaff_DI;
      DAT_1000_0b06 = (DAT_1000_0afa - DAT_1000_0b0c) - DAT_1000_0b10;
      DAT_1000_0b08 = (DAT_1000_0afc - DAT_1000_0b0a) - DAT_1000_0b0e;
      return;
    }
  }
  return;
}



/* 1000:102f FUN_1000_102f */

undefined2 __cdecl16near FUN_1000_102f(void)

{
  undefined2 uVar1;
  int unaff_DS;
  
  DAT_1000_0b0a = 0;
  DAT_1000_0b0c = 0;
  DAT_1000_0b0e = 0;
  DAT_1000_0b10 = 0;
  DAT_1000_0b02 = 0;
  DAT_1000_0b04 = 0;
  DAT_1000_0b06 = 0;
  DAT_1000_0b08 = 0;
  uVar1 = 0;
  if ((unaff_DS != 0) && (uVar1 = 0, *(int *)0x0 != 0)) {
    uVar1 = *(undefined2 *)0x2;
  }
  return uVar1;
}



/* 1000:1064 FUN_1000_1064 */

void __cdecl16far FUN_1000_1064(void)

{
  bool bVar1;
  
  bVar1 = true;
  FUN_1000_102f();
  if (!bVar1) {
    FUN_1000_1087();
  }
  return;
}



/* 1000:1087 FUN_1000_1087 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_1087(void)

{
  undefined2 uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int in_DX;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  char cVar13;
  int *unaff_BP;
  int *unaff_SI;
  int *piVar14;
  int *piVar15;
  int unaff_DI;
  int iVar16;
  byte *pbVar17;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar18;
  
  uVar1 = *(undefined2 *)(*unaff_BP * 2 + 0x1fba);
  uVar10 = in_DX + unaff_BP[1];
  iRam000100a0 = unaff_DI + unaff_BP[2] + DAT_1000_0b0a;
  iVar16 = iRam000100a0 * 2;
  iRam000100a2 = (*unaff_SI - DAT_1000_0b0c) - DAT_1000_0b10;
  bVar9 = (byte)uVar10 & 3;
  DAT_1000_0b23 = bVar9 << 1;
  DAT_1000_0b1e = 0xff >> DAT_1000_0b23;
  bVar18 = (uVar10 & 3) != 0;
  DAT_1000_0b1f = DAT_1000_0b1e;
  if (bVar18) {
    DAT_1000_0b1f = ~DAT_1000_0b1e;
  }
  DAT_1000_0b1c = (uint)bVar18;
  uRam0001009e = uVar10 + DAT_1000_0b0c;
  DAT_1000_0b21 = 0xff >> (((byte)uRam0001009e & 3) << 1);
  DAT_1000_0b24 = uRam0001009e >> 2;
  uVar10 = (uVar10 + *unaff_SI + -1) - DAT_1000_0b10;
  DAT_1000_0b22 = -0x40 >> (((byte)uVar10 & 3) << 1);
  DAT_1000_0af4 = ((uVar10 >> 2) - DAT_1000_0b24) + 1;
  piVar14 = unaff_SI + 2;
  iVar7 = (unaff_SI[1] - DAT_1000_0b0a) - DAT_1000_0b0e;
  iVar4 = DAT_1000_0b0a;
  if (iVar7 != 0 && DAT_1000_0b0e <= unaff_SI[1] - DAT_1000_0b0a) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar14 = piVar14 + *piVar14 + 2;
    }
    DAT_1000_0b0c = bVar9 + DAT_1000_0b0c >> 2;
    iRam000100a4 = iVar7;
    _DAT_1000_0af2 = iVar7;
    do {
      bVar9 = DAT_1000_0b23;
      puVar3 = (uint *)(piVar14 + 1);
      iVar4 = *piVar14;
      piVar15 = piVar14 + 2;
      piVar14 = piVar15;
      if (iVar4 == 0) goto LAB_1000_11e6;
      piVar14 = piVar15 + iVar4;
      pbVar17 = (byte *)(*(int *)(iVar16 + 0x1e20) + DAT_1000_0b24);
      uVar11 = iVar4 + DAT_1000_0b1c;
      uVar8 = *puVar3 - DAT_1000_0b0c;
      uVar10 = DAT_1000_0af4;
      if (uVar8 == 0) {
        bVar12 = DAT_1000_0b21 & DAT_1000_0b1e;
LAB_1000_11b8:
        if (uVar11 == uVar10) {
          DAT_1000_0b20 = DAT_1000_0b22 & DAT_1000_0b1f;
        }
        else {
          DAT_1000_0b20 = DAT_1000_0b22;
          if (uVar11 <= uVar10) {
            uVar10 = uVar11;
            DAT_1000_0b20 = DAT_1000_0b1f;
          }
        }
        cVar13 = (char)uVar10;
        if (DAT_1000_0b23 == 0) {
          do {
            piVar2 = piVar15;
            piVar15 = piVar15 + 1;
            if (cVar13 == '\x01') {
              bVar12 = bVar12 & DAT_1000_0b20;
            }
            bVar12 = (byte)((uint)*piVar2 >> 8) & bVar12;
            if (bVar12 != 0) {
              *pbVar17 = ((byte)*piVar2 ^ *pbVar17) & bVar12 ^ *pbVar17;
            }
            pbVar17 = pbVar17 + 1;
            cVar13 = cVar13 + -1;
            bVar12 = 0xff;
          } while (cVar13 != '\0');
        }
        else {
          piVar15 = piVar15 + -1;
          do {
            piVar2 = piVar15;
            piVar15 = piVar15 + 1;
            uVar8 = CONCAT11((char)((uint)*piVar15 >> 8),(char)((uint)*piVar2 >> 8));
            uVar10 = CONCAT11((char)*piVar15,(char)*piVar2);
            bVar5 = bVar9 & 0xf;
            bVar6 = bVar9 & 0xf;
            if (cVar13 == '\x01') {
              bVar12 = bVar12 & DAT_1000_0b20;
            }
            bVar12 = ((byte)((uVar8 >> bVar6) >> 8) | (byte)((uVar8 << 0x10 - bVar6) >> 8)) & bVar12
            ;
            if (bVar12 != 0) {
              *pbVar17 = (((byte)((uVar10 >> bVar5) >> 8) | (byte)((uVar10 << 0x10 - bVar5) >> 8)) ^
                         *pbVar17) & bVar12 ^ *pbVar17;
            }
            pbVar17 = pbVar17 + 1;
            cVar13 = cVar13 + -1;
            bVar12 = 0xff;
          } while (cVar13 != '\0');
        }
      }
      else if (*puVar3 < DAT_1000_0b0c) {
        bVar18 = -uVar8 <= uVar11;
        uVar11 = uVar11 + uVar8;
        if (bVar18 && uVar11 != 0) {
          piVar15 = piVar15 + -uVar8;
          bVar12 = DAT_1000_0b21;
          goto LAB_1000_11b8;
        }
      }
      else {
        pbVar17 = pbVar17 + uVar8;
        if (uVar8 <= DAT_1000_0af4 && DAT_1000_0af4 - uVar8 != 0) {
          uVar10 = DAT_1000_0af4 - uVar8;
          bVar12 = DAT_1000_0b1e;
          goto LAB_1000_11b8;
        }
      }
LAB_1000_11e6:
      iVar16 = iVar16 + 2;
      cVar13 = DAT_1000_0af2 + -1;
      _DAT_1000_0af2 = CONCAT11(DAT_1000_0af2_1,cVar13);
    } while (cVar13 != '\0');
    FUN_1000_00c9();
  }
  return;
}



/* 1000:1252 FUN_1000_1252 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000_1252(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int in_DX;
  uint uVar5;
  uint uVar6;
  int *unaff_BP;
  int *unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  DAT_1000_0b1a = *(undefined2 *)(*unaff_BP * 2 + 0x1fba);
  DAT_1000_0af6 = *unaff_SI;
  DAT_1000_0af8 = unaff_SI[1];
  iVar1 = (DAT_1000_0afa - DAT_1000_0b0c) - DAT_1000_0b10;
  DAT_1000_0b18 = unaff_DS;
  if (iVar1 != 0 && DAT_1000_0b10 <= DAT_1000_0afa - DAT_1000_0b0c) {
    iRam0001009e = in_DX + unaff_BP[1] + DAT_1000_0b0c;
    iVar2 = (DAT_1000_0afc - DAT_1000_0b0a) - DAT_1000_0b0e;
    iRam000100a2 = iVar1;
    DAT_1000_0af4 = iVar1;
    if (iVar2 != 0 && DAT_1000_0b0e <= DAT_1000_0afc - DAT_1000_0b0a) {
      iRam000100a0 = unaff_DI + unaff_BP[2] + DAT_1000_0b0a;
      DAT_1000_0b16 = 2;
      iVar4 = DAT_1000_0b0a;
      if (DAT_1000_0b00 != 0) {
        DAT_1000_0b16 = 0xfffe;
        iVar4 = DAT_1000_0b0e;
      }
      DAT_1000_0b14 = -(DAT_1000_0afc + 1U >> 1);
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        for (DAT_1000_0b14 = DAT_1000_0b14 + DAT_1000_0af8; -1 < DAT_1000_0b14;
            DAT_1000_0b14 = DAT_1000_0b14 - DAT_1000_0afc) {
        }
      }
      uVar5 = in_DX + unaff_BP[1] + DAT_1000_0b0c;
      uRam0001142e = DAT_1000_146b;
      uRam00011433 = DAT_1000_146d;
      if (DAT_1000_0afe != 0) {
        uVar5 = (uVar5 + iVar1) - 1;
        uRam0001142e = DAT_1000_1470;
        DAT_1000_0b0c = DAT_1000_0b10;
        uRam00011433 = DAT_1000_1472;
      }
      DAT_1000_0b12 = -(DAT_1000_0afa + 1U >> 1);
      uVar6 = 0;
      while (DAT_1000_0b0c = DAT_1000_0b0c + -1, -1 < DAT_1000_0b0c) {
        for (DAT_1000_0b12 = DAT_1000_0b12 + DAT_1000_0af6; -1 < DAT_1000_0b12;
            DAT_1000_0b12 = DAT_1000_0b12 - DAT_1000_0afa) {
          uVar6 = uVar6 + 1;
        }
      }
      bVar3 = (byte)uVar5 & 3;
      DAT_1000_0b21 = 0x3fU >> bVar3 * '\x02' | '?' << bVar3 * -2 + 8;
      DAT_1000_0b24 = uVar5 >> 2;
      DAT_1000_0b0c = (uVar6 >> 2) << 1;
      bVar3 = (byte)uVar6 & 3;
      DAT_1000_0b1e = 0xc0U >> bVar3 * '\x02' | -0x40 << bVar3 * -2 + 8;
      iRam000100a4 = iVar2;
      _DAT_1000_0af2 = iVar2;
      uRam00011430 = uRam0001142e;
      uRam0001144e = uRam0001142e;
      uRam00011450 = uRam0001142e;
      uRam00011453 = uRam00011433;
      FUN_1000_1396();
      return;
    }
  }
  FUN_1000_1390();
  return;
}



/* 1000:1390 FUN_1000_1390 */

void __cdecl16far FUN_1000_1390(void)

{
  return;
}



/* 1000:1396 FUN_1000_1396 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000_1396(void)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  byte bVar13;
  int *unaff_SI;
  int *piVar14;
  undefined2 *puVar15;
  int unaff_DI;
  byte *pbVar16;
  int *piVar17;
  undefined2 unaff_DS;
  
  while( true ) {
    iVar10 = *unaff_SI;
    if (iVar10 != 0) break;
LAB_1000_1476:
    _DAT_1000_0af2 = _DAT_1000_0af2 + -1;
    if (_DAT_1000_0af2 == 0) {
      FUN_1000_1390();
      return;
    }
    unaff_DI = unaff_DI + DAT_1000_0b16;
    for (DAT_1000_0b14 = DAT_1000_0b14 + DAT_1000_0af8; -1 < DAT_1000_0b14;
        DAT_1000_0b14 = DAT_1000_0b14 - DAT_1000_0afc) {
      unaff_SI = unaff_SI + *unaff_SI + 2;
    }
    unaff_DS = DAT_1000_0b18;
  }
  piVar14 = unaff_SI + 2;
  iVar9 = unaff_SI[1];
  pbVar16 = (byte *)(*(int *)(unaff_DI + 0x1e20) + DAT_1000_0b24);
  piVar17 = (int *)0xb26;
  iVar12 = ((DAT_1000_0af6 + 3U >> 2) - iVar10) - iVar9;
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    piVar1 = piVar17;
    piVar17 = piVar17 + 1;
    *piVar1 = 0;
  }
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar17;
    piVar17 = piVar17 + 1;
    piVar1 = piVar14;
    piVar14 = piVar14 + 1;
    *piVar2 = *piVar1;
  }
  while( true ) {
    uVar3 = DAT_1000_0b1a;
    iVar10 = DAT_1000_0af6;
    if (iVar12 == 0) break;
    piVar1 = piVar17;
    piVar17 = piVar17 + 1;
    *piVar1 = 0;
    iVar12 = iVar12 + -1;
  }
  puVar15 = (undefined2 *)(DAT_1000_0b0c + 0xb26);
  iVar9 = DAT_1000_0af4;
  iVar12 = DAT_1000_0b12;
  bVar11 = DAT_1000_0b1e;
  bVar13 = DAT_1000_0b21;
  do {
    while( true ) {
      bVar4 = (byte)*puVar15 & bVar11;
      bVar6 = (byte)((uint)*puVar15 >> 8) & bVar11;
      bVar5 = bVar11 >> 1;
      bVar11 = (byte)(bVar5 | bVar11 << 7) >> 1 | bVar5 << 7;
      if ((bool)(bVar5 & 1)) {
        puVar15 = puVar15 + 1;
      }
      if (bVar6 == 0) break;
      bVar5 = (byte)(bVar4 >> 1 | bVar4 << 7) >> 1;
      bVar7 = bVar5 | (bVar4 >> 1) << 7;
      bVar6 = bVar7 >> 1;
      bVar5 = (byte)(bVar6 | bVar5 << 7) >> 1;
      bVar8 = bVar5 | bVar6 << 7;
      bVar6 = bVar8 >> 1;
      bVar5 = bVar4 | bVar7 | bVar8 | (byte)(bVar6 | bVar5 << 7) >> 1 | bVar6 << 7;
      do {
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) goto LAB_1000_1476;
        *pbVar16 = (*pbVar16 ^ bVar5) & bVar13 ^ bVar5;
        bVar4 = bVar13 >> 1;
        bVar13 = (byte)(bVar4 | bVar13 << 7) >> 1 | bVar4 << 7;
        pbVar16 = pbVar16 + ((bVar4 & 1) == 0);
        iVar12 = iVar12 + iVar10;
      } while (iVar12 < 0);
      while (iVar12 = iVar12 - DAT_1000_0afa, -1 < iVar12) {
        bVar5 = bVar11 >> 1;
        bVar11 = (byte)(bVar5 | bVar11 << 7) >> 1 | bVar5 << 7;
        if ((bool)(bVar5 & 1)) {
          puVar15 = puVar15 + 1;
        }
      }
    }
    do {
      iVar9 = iVar9 + -1;
      if (iVar9 < 0) goto LAB_1000_1476;
      bVar5 = bVar13 >> 1;
      bVar13 = (byte)(bVar5 | bVar13 << 7) >> 1 | bVar5 << 7;
      pbVar16 = pbVar16 + ((bVar5 & 1) == 0);
      iVar12 = iVar12 + iVar10;
    } while (iVar12 < 0);
    while (iVar12 = iVar12 - DAT_1000_0afa, -1 < iVar12) {
      bVar5 = bVar11 >> 1;
      bVar11 = (byte)(bVar5 | bVar11 << 7) >> 1 | bVar5 << 7;
      if ((bool)(bVar5 & 1)) {
        puVar15 = puVar15 + 1;
      }
    }
  } while( true );
}



/* 1000:14f6 FUN_1000_14f6 */

int __cdecl16far FUN_1000_14f6(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 <= DAT_11dd_4a20) && (param_1 * 2 != 0)) {
    iVar1 = *(int *)(param_1 * 2 + 0x4a20) + 0x4a20;
  }
  return iVar1;
}



/* 1000:1518 FUN_1000_1518 */

void __cdecl16far FUN_1000_1518(uint param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  if ((param_1 <= DAT_11dd_4a20) && (param_1 * 2 != 0)) {
    uVar4 = (uint)(byte)((*(char *)(param_2 + -7) - *(char *)(param_2 + -8)) + 1);
    iVar3 = uVar4 + 8;
    puVar5 = (undefined2 *)(param_2 - iVar3);
    puVar6 = (undefined2 *)((*(int *)(param_1 * 2 + 0x4a20) + 0x4a20) - iVar3);
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



/* 1000:1568 FUN_1000_1568 */

int __cdecl16far FUN_1000_1568(uint param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = '\0';
  cVar3 = '\0';
  if ((((-1 < (char)param_2) && (param_1 <= DAT_11dd_4a20)) && (param_1 * 2 != 0)) &&
     ((iVar1 = *(int *)(param_1 * 2 + 0x4a20), *(byte *)(iVar1 + 0x4a18) <= param_2 &&
      (param_2 <= *(byte *)(iVar1 + 0x4a19))))) {
    cVar3 = *(char *)(iVar1 + 0x4a1d);
    cVar2 = *(char *)(iVar1 + 0x4a1b);
    if (cVar2 == '\0') {
      cVar2 = *(char *)((iVar1 + 0x4a17) - (uint)(byte)(*(char *)(iVar1 + 0x4a19) - param_2));
    }
  }
  return (int)(char)(cVar2 + cVar3);
}



/* 1000:15b9 FUN_1000_15b9 */

char __cdecl16far FUN_1000_15b9(uint param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((param_1 <= DAT_11dd_4a20) && (param_1 * 2 != 0)) {
    iVar1 = *(int *)(param_1 * 2 + 0x4a20);
    cVar2 = *(char *)(iVar1 + 0x4a1c) + *(char *)(iVar1 + 0x4a1e);
  }
  return cVar2;
}



/* 1000:15e2 FUN_1000_15e2 */

void __cdecl16far FUN_1000_15e2(void)

{
  FUN_1000_15fc(0x1000);
  return;
}



/* 1000:15fc FUN_1000_15fc */

void FUN_1000_15fc(void)

{
  FUN_1000_172d();
  FUN_1000_1662();
  FUN_1000_1614();
  FUN_1000_16c1();
  FUN_1000_1701();
  return;
}



/* 1000:1614 FUN_1000_1614 */

int __cdecl16near FUN_1000_1614(void)

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
  
  if (*(char *)0x892 == '\0') {
    return in_AX;
  }
  if (-1 < *(int *)(unaff_BP + 6)) {
    iVar3 = *(int *)0x89c;
    if (-1 < iVar3) {
      return iVar3;
    }
    *(undefined2 *)0x89c = 0;
    bVar1 = *(byte *)0x892;
    uVar4 = (undefined1)((uint)-iVar3 % (uint)bVar1);
    *(undefined1 *)0x893 = uVar4;
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
      } while ((bVar1 < *(byte *)0x88c) || (*(byte *)0x88d < bVar1));
    } while (bVar1 != *(byte *)0x88d);
  }
  if ((undefined1 *)*(undefined2 *)0x894 != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x894 = *(undefined1 *)0x896;
  }
  return *(int *)0x89c - *(int *)(unaff_BP + 2);
}



/* 1000:1662 FUN_1000_1662 */

uint __cdecl16near FUN_1000_1662(void)

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
  
  if (*(char *)0x892 != '\0') {
    iVar2 = *(int *)(unaff_BP + 6);
    if ((iVar2 < 0) || (iVar2 < *(int *)0x89c)) {
      if ((undefined1 *)*(undefined2 *)0x894 != (undefined1 *)0x0) {
        *(undefined1 *)*(undefined2 *)0x894 = *(undefined1 *)0x896;
      }
      return *(int *)0x89c - *(int *)(unaff_BP + 2);
    }
    iVar3 = *(int *)0x89c + -1;
    pbVar4 = (byte *)(in_BX + -1);
    do {
      pbVar5 = pbVar4;
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar4;
      if (bVar1 == 0) {
        return 0;
      }
    } while (((((char)bVar1 < '\0') || (bVar1 < *(byte *)0x88c)) || (*(byte *)0x88d < bVar1)) ||
            (iVar3 = iVar3 + (uint)*(byte *)0x892, iVar3 < iVar2));
    *(char *)0x897 = (char)iVar3 - (char)iVar2;
    pbVar5 = pbVar5 + 2;
    bVar1 = *pbVar5;
    in_AX = (uint)bVar1;
    *pbVar5 = 0;
    *(byte *)0x896 = bVar1;
    *(undefined2 *)0x894 = pbVar5;
  }
  return in_AX;
}



/* 1000:16c1 FUN_1000_16c1 */

int __cdecl16near FUN_1000_16c1(void)

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
    iVar4 = *(int *)0x89e;
    if (iVar4 < 0) {
      puVar1 = (uint *)0x898;
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + iVar4;
      if (uVar3 < (uint)-iVar4 || *puVar1 == 0) goto LAB_1000_1716;
      *(undefined2 *)0x89e = 0;
      *(int *)0x88f = *(int *)0x88f + -iVar4 * *(int *)0x89a;
    }
    if (*(uint *)0x89e <= uVar2) {
      uVar3 = (*(uint *)0x89e + *(int *)0x898) - 1;
      iVar4 = uVar3 - uVar2;
      if (uVar2 <= uVar3 && iVar4 != 0) {
        *(int *)0x898 = *(int *)0x898 - iVar4;
      }
      return iVar4;
    }
  }
LAB_1000_1716:
  if ((undefined1 *)*(undefined2 *)0x894 != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x894 = *(undefined1 *)0x896;
  }
  return *(int *)0x89c - *(int *)(unaff_BP + 2);
}



/* 1000:1701 FUN_1000_1701 */

int __cdecl16far FUN_1000_1701(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)0x89c = *(int *)0x89c + *(int *)(unaff_BP + 2);
  *(int *)0x89e = *(int *)0x89e + *(int *)(unaff_BP + 4);
  FUN_1000_17e8();
  if ((undefined1 *)*(undefined2 *)0x894 != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x894 = *(undefined1 *)0x896;
  }
  return *(int *)0x89c - *(int *)(unaff_BP + 2);
}



/* 1000:172d FUN_1000_172d */

/* WARNING: Removing unreachable block (ram,0x0001171e) */

int __cdecl16far FUN_1000_172d(void)

{
  char cVar1;
  int in_CX;
  undefined2 in_DX;
  char *in_BX;
  int unaff_BP;
  int iVar2;
  undefined2 unaff_SS;
  code *in_stack_00000000;
  
  DAT_11dd_0894 = 0;
  DAT_11dd_0893 = 0;
  DAT_11dd_0897 = 0;
  if (((*in_BX == '\0') || (DAT_11dd_4a20 < *(uint *)(unaff_BP + 0x10))) ||
     (iVar2 = *(uint *)(unaff_BP + 0x10) * 2, iVar2 == 0)) {
    DAT_11dd_089e = in_DX;
    DAT_11dd_089c = in_CX;
    DAT_11dd_0897 = 0;
    DAT_11dd_0894 = 0;
    DAT_11dd_0893 = 0;
    return in_CX - *(int *)(unaff_BP + 2);
  }
  iVar2 = *(int *)(iVar2 + 0x4a20);
  DAT_11dd_088f = iVar2 + 0x4a20;
  cVar1 = *(char *)(iVar2 + 0x4a1c);
  if ((*(byte *)(unaff_BP + 10) & 1) != 0) {
    cVar1 = cVar1 + *(char *)(iVar2 + 0x4a1e);
  }
  DAT_11dd_0898 = (int)cVar1;
  DAT_11dd_088e = *(char *)(iVar2 + 0x4a1d);
  DAT_11dd_0892 = *(char *)(iVar2 + 0x4a1b);
  if (DAT_11dd_0892 != '\0') {
    DAT_11dd_0892 = DAT_11dd_0892 + DAT_11dd_088e;
  }
  DAT_11dd_088c = *(char *)(iVar2 + 0x4a18);
  DAT_11dd_088d = *(char *)(iVar2 + 0x4a19);
  DAT_11dd_0891 = *(char *)(iVar2 + 0x4a1a) - 1;
  DAT_11dd_088a = (iVar2 + 0x4a17) - (uint)(byte)(DAT_11dd_088d - DAT_11dd_088c);
  DAT_11dd_089a = (byte)(DAT_11dd_088d - DAT_11dd_088c) + 1 << (DAT_11dd_0891 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x000117b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DAT_11dd_089c = in_CX;
  DAT_11dd_089e = in_DX;
  iVar2 = (*in_stack_00000000)();
  return iVar2;
}



/* 1000:17e8 FUN_1000_17e8 */

void __cdecl16far FUN_1000_17e8(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte bVar10;
  int *piVar9;
  uint uVar11;
  int iVar12;
  int unaff_BP;
  undefined2 *unaff_SI;
  byte *pbVar13;
  uint unaff_DI;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint *puVar17;
  int unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar18;
  
  *(undefined1 *)0x8a0 = *(undefined1 *)(unaff_BP + 0xc);
  *(undefined1 *)0x8a2 =
       *(undefined1 *)(ulong)(*(byte *)(ulong)(*(byte *)(unaff_BP + 0xe) + 0x210) + 0x20c);
  cVar8 = *(char *)(unaff_BP + 10);
  *(char *)0x8a7 = cVar8;
  if ((cVar8 == '\x03') || ((cVar8 == '\x02' && (unaff_DI < 0xf1)))) {
    *(undefined1 *)0x8a7 = 1;
    *(undefined1 *)0x8a0 = 0;
  }
  uRam000100a4 = (uint)*(byte *)0x898;
  iRam0001009e = *(int *)0x89c;
  uRam000100a0 = *(undefined2 *)0x89e;
  iVar5 = *(int *)0x89a;
  uVar2 = *(undefined2 *)(unaff_ES * 2 + 0x1fba);
  bVar10 = *(byte *)0x8a0;
  do {
    *(undefined1 *)0x8a1 = *(undefined1 *)(ulong)(*(byte *)(ulong)(bVar10 + 0x210) + 0x20c);
    while( true ) {
      puVar1 = unaff_SI;
      unaff_SI = (undefined2 *)((int)unaff_SI + 1);
      bVar10 = (byte)*puVar1;
      if ((char)bVar10 < '\0') break;
      if (bVar10 == 0) {
        iRam000100a2 = *(int *)0x89c - iRam0001009e;
        FUN_1000_00c9();
        *(undefined1 *)(unaff_BP + 0xc) = *(undefined1 *)0x8a0;
        return;
      }
      if ((bVar10 <= *(byte *)0x88d) && (*(byte *)0x88c <= bVar10)) {
        uVar11 = (uint)(byte)(bVar10 - *(byte *)0x88c);
        cVar8 = *(char *)0x892;
        if (cVar8 == '\0') {
          cVar8 = *(char *)(*(int *)0x88a + uVar11) + *(char *)0x88e;
        }
        if ((char)((uint)*puVar1 >> 8) == '\0') {
          cVar8 = cVar8 - *(char *)0x897;
        }
        *(char *)0x8a3 = cVar8 - *(char *)0x893;
        pbVar13 = (byte *)((uVar11 << (*(byte *)0x891 & 0x1f)) + *(int *)0x88f);
        uVar11 = *(uint *)0x89c;
        *(uint *)0x8ab = uVar11 >> 2;
        uVar11 = uVar11 & 3;
        *(undefined1 *)0x8a4 = *(undefined1 *)(uVar11 + 0x208);
        *(undefined1 *)0x8aa = (char)(uVar11 << 1);
        bVar10 = *(byte *)0x8a3;
        bVar6 = *(byte *)0x893;
        cVar8 = *(char *)0x898;
        bVar3 = *(byte *)0x8a1;
        bVar4 = *(byte *)0x8a2;
        iVar14 = *(int *)0x89e * 2;
        if (*(char *)0x8a7 == '\x01') {
          if ((bVar10 < 5) && (bVar6 == 0)) {
            bVar6 = *(byte *)0x8aa;
            if ((bVar10 == 4) && (bVar6 == 0)) {
              if (bVar3 == 0) {
                piVar9 = (int *)(iVar14 + 0x50);
                do {
                  *(byte *)(*piVar9 + *(int *)0x8ab) =
                       *(byte *)(ulong)((*pbVar13 >> 4) + 0x8ad) & bVar4;
                  piVar9 = piVar9 + 1;
                  pbVar13 = pbVar13 + iVar5;
                  cVar8 = cVar8 + -1;
                } while (cVar8 != '\0');
              }
              else {
                piVar9 = (int *)(iVar14 + 0x50);
                do {
                  bVar10 = *(byte *)(ulong)((*pbVar13 >> 4) + 0x8ad);
                  *(byte *)(*piVar9 + *(int *)0x8ab) = bVar10 & bVar4 | ~bVar10 & bVar3;
                  piVar9 = piVar9 + 1;
                  pbVar13 = pbVar13 + iVar5;
                  cVar8 = cVar8 + -1;
                } while (cVar8 != '\0');
              }
            }
            else {
              iVar12 = -0x8000 >> (bVar10 * '\x02' - 1 & 0x1f);
              uVar11 = ~CONCAT11((char)iVar12,(char)((uint)iVar12 >> 8));
              *(uint *)0x8a5 = uVar11 >> (bVar6 & 0xf) | uVar11 << 0x10 - (bVar6 & 0xf);
              do {
                puVar17 = (uint *)(*(int *)(iVar14 + 0x50) + *(int *)0x8ab);
                bVar10 = *(byte *)(ulong)((*pbVar13 >> 4) + 0x8ad);
                bVar10 = ~bVar10 & bVar3 | bVar10 & bVar4;
                uVar11 = (uint)(bVar10 >> (bVar6 & 0xf)) | (uint)bVar10 << 0x10 - (bVar6 & 0xf);
                *puVar17 = (*puVar17 ^ uVar11) & *(uint *)0x8a5 ^ uVar11;
                iVar14 = iVar14 + 2;
                pbVar13 = pbVar13 + iVar5;
                cVar8 = cVar8 + -1;
              } while (cVar8 != '\0');
            }
          }
          else {
            do {
              iVar12 = CONCAT11((char)*(undefined2 *)pbVar13,
                                (char)((uint)*(undefined2 *)pbVar13 >> 8)) <<
                       (*(byte *)0x893 & 0x1f);
              cVar7 = *(char *)0x8a3;
              bVar10 = *(byte *)0x8a4;
              pbVar15 = (byte *)(*(int *)(iVar14 + 0x50) + *(int *)0x8ab);
              do {
                bVar18 = iVar12 < 0;
                iVar12 = iVar12 << 1;
                if (bVar18) {
                  bVar6 = (*pbVar15 ^ bVar3) & bVar10 ^ bVar3;
                }
                else {
                  bVar6 = (*pbVar15 ^ bVar4) & bVar10 ^ bVar4;
                }
                *pbVar15 = bVar6;
                bVar6 = bVar10 >> 1;
                bVar10 = (byte)(bVar6 | bVar10 << 7) >> 1 | bVar6 << 7;
                pbVar16 = pbVar15 + 1;
                if ((bool)(bVar6 & 1)) {
                  pbVar16 = pbVar15;
                }
                cVar7 = cVar7 + -1;
                pbVar15 = pbVar16;
              } while (cVar7 != '\0');
              iVar14 = iVar14 + 2;
              pbVar13 = pbVar13 + iVar5;
              cVar8 = cVar8 + -1;
            } while (cVar8 != '\0');
          }
        }
        else {
          do {
            pbVar15 = (byte *)(*(int *)(iVar14 + 0x50) + *(int *)0x8ab);
            iVar12 = CONCAT11((char)*(undefined2 *)pbVar13,(char)((uint)*(undefined2 *)pbVar13 >> 8)
                             ) << (bVar6 & 0x1f);
            cVar7 = *(char *)0x8a3;
            bVar10 = *(byte *)0x8a4;
            do {
              bVar18 = iVar12 < 0;
              iVar12 = iVar12 << 1;
              if (bVar18) {
                *pbVar15 = (*pbVar15 ^ bVar3) & bVar10 ^ bVar3;
              }
              bVar4 = bVar10 >> 1;
              bVar10 = (byte)(bVar4 | bVar10 << 7) >> 1 | bVar4 << 7;
              if (!(bool)(bVar4 & 1)) {
                pbVar15 = pbVar15 + 1;
              }
              cVar7 = cVar7 + -1;
            } while (cVar7 != '\0');
            iVar14 = iVar14 + 2;
            pbVar13 = pbVar13 + iVar5;
            cVar8 = cVar8 + -1;
          } while (cVar8 != '\0');
        }
        *(undefined1 *)0x893 = 0;
        *(int *)0x89c = *(int *)0x89c + (uint)*(byte *)0x8a3;
      }
    }
    bVar10 = bVar10 & 0x7f;
    *(byte *)0x8a0 = bVar10;
  } while( true );
}



/* 1000:1c93 FUN_1000_1c93 */

void __cdecl16far FUN_1000_1c93(uint param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DAT_11dd_08be = param_3;
  DAT_11dd_08c0 = param_1;
  DAT_11dd_08c4 = *(uint *)0x0;
  if (DAT_11dd_08c4 != 0) {
    uVar1 = param_1;
    uVar3 = DAT_11dd_08c4;
    if ((int)param_1 < 0) {
      uVar3 = DAT_11dd_08c4 + param_1;
      if (DAT_11dd_08c4 < -param_1 || uVar3 == 0) {
        DAT_11dd_08d0 = 0;
        return;
      }
      uVar1 = 0;
    }
    uVar2 = 0x140 - uVar1;
    if (uVar1 < 0x141 && uVar2 != 0) {
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      DAT_11dd_08cc = uVar3 + (uVar1 & 3) + 3 >> 2;
      DAT_11dd_08c8 = uVar1 >> 2;
      uVar1 = (uint)(0x200 / (ulong)DAT_11dd_08cc);
      DAT_11dd_08c2 = param_2;
      DAT_11dd_08c6 = *(uint *)0x2;
      if (DAT_11dd_08c6 != 0) {
        uVar3 = DAT_11dd_08c6;
        if ((int)param_2 < 0) {
          uVar3 = DAT_11dd_08c6 + param_2;
          if (DAT_11dd_08c6 < -param_2 || uVar3 == 0) {
            DAT_11dd_08d0 = 0;
            return;
          }
          param_2 = 0;
        }
        uVar2 = 200 - param_2;
        if (param_2 < 0xc9 && uVar2 != 0) {
          if (uVar2 < uVar3) {
            uVar3 = uVar2;
          }
          DAT_11dd_08ce = uVar3;
          if (uVar1 < uVar3) {
            DAT_11dd_08ce = uVar1;
          }
          DAT_11dd_08d0 = 1;
          DAT_11dd_08ca = param_2;
          FUN_1000_1d49();
          return;
        }
      }
    }
  }
  DAT_11dd_08d0 = 0;
  return;
}



/* 1000:1d49 FUN_1000_1d49 */

void __cdecl16near FUN_1000_1d49(void)

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
  int aiStack_12 [5];
  
  iVar4 = DAT_11dd_08cc;
  DAT_11dd_08d2 = in_AX;
  if (DAT_11dd_08d0 != 0) {
    uVar3 = *(undefined2 *)(in_AX * 2 + 0x1fba);
    puVar9 = (undefined1 *)0x8d4;
    iVar7 = DAT_11dd_08ca << 1;
    iVar6 = DAT_11dd_08ce;
    do {
      puVar8 = (undefined1 *)(*(int *)(iVar7 + 0x1e20) + DAT_11dd_08c8);
      for (iVar5 = iVar4; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar1;
      }
      iVar7 = iVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    aiStack_12[4] = 199;
    aiStack_12[3] = 0x13f;
    aiStack_12[2] = 0;
    aiStack_12[1] = 0;
    aiStack_12[0] = DAT_11dd_08d2;
    FUN_1000_0f59(aiStack_12,DAT_11dd_08c0,DAT_11dd_08c2,DAT_11dd_08be);
  }
  return;
}


