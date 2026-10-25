/* Decompiled pseudocode; not original source or guaranteed compilable C. */

/* 1000:0010 entry */

/* WARNING: Instruction at (ram,0x000100b0) overlaps instruction at (ram,0x000100af)
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __cdecl16far entry(void)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  byte *pbVar4;
  char *pcVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  byte extraout_AL;
  byte bVar10;
  byte bVar11;
  int in_AX;
  uint uVar12;
  undefined1 extraout_AH;
  uint uVar13;
  byte bVar14;
  undefined1 uVar15;
  uint in_CX;
  undefined2 in_DX;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  char cVar16;
  int in_BX;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint *puVar21;
  int unaff_BP;
  uint uVar22;
  int iVar23;
  char *unaff_SI;
  byte *pbVar24;
  byte *pbVar25;
  int unaff_DI;
  char *pcVar26;
  uint *puVar27;
  uint uVar28;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar29;
  bool bVar30;
  
  DAT_11fe_049e = 0x10;
  pcVar26 = (char *)(unaff_DI + 1);
  uVar17 = in_BX + 1;
  puVar18 = (undefined1 *)0xc;
  uVar22 = unaff_BP + 2;
  bVar10 = (byte)((uint)in_DX >> 8);
  DAT_11fe_049a = in_AX;
  DAT_11fe_049c = in_DX;
  unaff_SI[uVar22] = unaff_SI[uVar22] ^ bVar10;
  cVar16 = (char)(in_AX + -0x696a);
  unaff_SI[uVar17] = unaff_SI[uVar17] + cVar16;
  unaff_SI[uVar17] = unaff_SI[uVar17] + cVar16;
  unaff_SI[uVar17] = unaff_SI[uVar17] + (char)in_DX;
  pcVar26[uVar17] = pcVar26[uVar17] + '\x01';
  *pcVar26 = *pcVar26 + bVar10;
  *(char *)(unaff_BP + 0x540b) = *(char *)(unaff_BP + 0x540b) + (char)in_DX;
  *(uint *)(pcVar26 + unaff_BP + 0x17) = *(uint *)(pcVar26 + unaff_BP + 0x17) | in_CX;
  uVar28 = CONCAT11((char)((uint)(in_AX + -0x696a) >> 8),*(undefined1 *)0x8600);
  uVar12 = uVar28 - 3999;
  bVar29 = false;
  if (uVar28 < 3999) {
    pcVar26[uVar22] = pcVar26[uVar22] << 1 | 1;
    in_CX = in_CX | (uint)pcVar26;
    uVar12 = CONCAT11((char)((uVar12 | 0x1d14) >> 8),
                      *(undefined1 *)(ulong)(uVar17 + ((uVar12 | 0x1d14) & 0xff)));
    uVar28 = uVar12 - 0x5a2;
    if (uVar12 >= 0x5a2) {
      puVar18 = (undefined1 *)0xe;
      uVar28 = *(uint *)0x3606;
      unaff_DS = DAT_11fe_049c;
    }
    uVar12 = (uint)(uVar12 < 0x5a2);
    bVar29 = uVar28 < 0x8f0 || uVar28 - 0x8f0 < uVar12;
    uVar12 = (uVar28 - 0x8f0) - uVar12;
  }
  uVar28 = unaff_DI + 2;
  pcVar5 = unaff_SI + 1;
  *pcVar26 = *unaff_SI;
  puVar19 = puVar18 + bVar29 + uVar12;
  pcVar2 = (char *)0x1623;
  *pcVar2 = *pcVar2 + (char)uVar17;
  bVar29 = *pcVar2 == '\0';
  pcVar9 = (code *)swi(0xb);
  (*pcVar9)();
  LOCK();
  uVar15 = *(undefined1 *)(uVar17 + uVar28);
  *(undefined1 *)(uVar17 + uVar28) = (char)in_CX;
  uVar12 = CONCAT11((char)(in_CX >> 8),uVar15);
  UNLOCK();
  bVar10 = extraout_AL;
  if (!bVar29) {
    *pcVar5 = *pcVar5 + -0x71;
    bVar10 = extraout_AL + 0x90;
  }
  bVar11 = bVar10 + 0x81;
  uVar13 = CONCAT11(extraout_AH,bVar11);
  uVar7 = (uint)(0x7e < bVar10);
  uVar8 = uVar28 - uVar12;
  bVar29 = uVar28 < uVar12 || uVar8 < uVar7;
  bVar30 = SBORROW2(uVar28,uVar12) != SBORROW2(uVar8,uVar7);
  puVar27 = (uint *)(uVar8 - uVar7);
  puVar21 = (uint *)(puVar19 + -2);
  *(undefined2 *)(puVar19 + -2) = unaff_ES;
  puVar20 = (uint *)(puVar19 + -2);
  if (bVar30 == (int)puVar27 < 0) {
    if (puVar27 == (uint *)0x0 || bVar30 != (int)puVar27 < 0) {
      puVar20 = (uint *)(puVar19 + -4);
      *(undefined2 *)(puVar19 + -4) = unaff_DS;
    }
    else {
      if ((POPCOUNT((uint)puVar27 & 0xff) & 1U) != 0) {
        puVar3 = (uint *)0x1f1c;
        bVar29 = *puVar3 < uVar17;
        *puVar3 = *puVar3 - uVar17;
        bVar30 = *puVar3 == 0;
        goto code_r0x00010090;
      }
      uVar13 = CONCAT11((char)bVar11 >> 7,bVar10 + 0x74 + bVar29);
      uVar17 = uVar17 + *(int *)(unaff_BP + 0x2d11) +
               (uint)(0xc < bVar11 || CARRY1(bVar10 + 0x74,bVar29));
      puVar20 = (uint *)(puVar19 + -2);
    }
  }
  uVar22 = uVar22 | *puVar27;
  pcVar5[uVar17 + 5] = pcVar5[uVar17 + 5] | (byte)((uint)extraout_DX >> 8);
  uVar12 = *puVar20;
  puVar21 = puVar20 + 1;
  bVar10 = (byte)uVar17 - *(byte *)0x1e29;
  bVar30 = (byte)uVar17 < *(byte *)0x1e29 || bVar10 < (0xf39e < uVar13);
  uVar17 = CONCAT11((char)(uVar17 >> 8),bVar10 - (0xf39e < uVar13));
  bVar10 = (char)uVar13 + 0x42;
  bVar29 = (byte)((char)uVar13 + 0x61U) < 0x1f || bVar10 < bVar30;
  bVar10 = bVar10 - bVar30;
  uVar13 = (uint)bVar10;
  bVar30 = bVar10 == 0;
code_r0x00010090:
  if (!bVar29 && !bVar30) {
    out(0xf,(char)uVar13);
  }
  *(undefined2 *)((int)puVar21 + -2) = unaff_DS;
  uVar28 = (int)puVar27 - 1;
  *(uint *)(pcVar5 + uVar17) = *(uint *)(pcVar5 + uVar17) | uVar28;
  piVar1 = (int *)(uVar22 + uVar28 + 0x1b);
  *piVar1 = *piVar1 + uVar12;
  pcVar5[uVar17] = pcVar5[uVar17] + (-bVar29 | (byte)uVar12);
  *(char *)(puVar27 + -0x3b) = (char)puVar27[-0x3b] + (char)extraout_DX;
  in(extraout_DX);
  *(undefined2 *)((int)puVar21 + -4) = pcVar5;
  *(uint *)((int)puVar21 + -6) = uVar28;
  *(undefined2 *)((int)puVar21 + -8) = unaff_DS;
  *(undefined2 *)((int)puVar21 + -10) = unaff_ES;
  uVar12 = *(uint *)(uVar22 + 0xc);
  uVar15 = (undefined1)*(undefined2 *)(uVar22 + 0xe);
  uVar28 = *(int *)(uVar22 + 8) + *(int *)(*(int *)(uVar22 + 6) + 2);
  iVar23 = (*(int *)(uVar22 + 10) + *(int *)(*(int *)(uVar22 + 6) + 4)) * 2;
  if (DAT_11fe_026c != 0) {
    uVar12 = uVar12 << 1;
    uVar28 = uVar28 * 2;
  }
  *(undefined2 *)((int)puVar21 + -0xc) = 0xe9;
  FUN_1000_0905();
  bVar29 = (uVar28 & 1) != 0;
  uRam0001009e = uVar28 >> 1;
  if (bVar29) {
    uVar12 = uVar12 - 1;
  }
  uRam0001009c = uVar12 >> 1;
  uVar12 = CONCAT11((char)(((uint)((uVar12 & 1) != 0) << 8 | (uint)bVar29 << 7) >> 1),uVar15);
  do {
    uVar28 = uRam0001009c;
    pbVar24 = (byte *)(*(int *)(iVar23 + 0x2250) + uRam0001009e);
    bVar11 = (byte)((uint)extraout_DX_00 >> 8);
    bVar10 = (byte)extraout_DX_00;
    pbVar25 = pbVar24;
    if ((uVar12 & 0x4000) != 0) {
      pbVar25 = pbVar24 + 1;
      if (((*pbVar24 ^ bVar11) & 0xf) == 0) {
        *pbVar24 = (*pbVar24 ^ bVar10) & 0xf0 ^ bVar10;
      }
      pbVar24 = pbVar25;
    }
    do {
      if (uVar28 == 0) break;
      pbVar4 = pbVar25;
      pbVar25 = pbVar25 + 1;
      bVar6 = *pbVar4;
      bVar14 = bVar6 ^ bVar11;
      uVar17 = CONCAT11(bVar14,bVar6);
      if ((bVar14 & 0xf0) == 0) {
        uVar17 = CONCAT11(bVar14,bVar6 ^ bVar10) & 0xff0f;
        uVar17 = CONCAT11((char)(uVar17 >> 8),(byte)uVar17 ^ bVar10);
      }
      if ((uVar17 & 0xf00) == 0) {
        uVar17 = (uint)(((byte)uVar17 ^ bVar10) & 0xf0 ^ bVar10);
      }
      pbVar4 = pbVar24;
      pbVar24 = pbVar24 + 1;
      *pbVar4 = (byte)uVar17;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    if (((uVar12 & 0x8000) != 0) && (((*pbVar25 ^ bVar11) & 0xf0) == 0)) {
      *pbVar24 = (*pbVar25 ^ bVar10) & 0xf ^ bVar10;
    }
    iVar23 = iVar23 + 2;
    cVar16 = (char)uVar12 + -1;
    uVar12 = CONCAT11((char)(uVar12 >> 8),cVar16);
    if (cVar16 == '\0') {
      return;
    }
  } while( true );
}



/* 1000:06f9 FUN_1000_06f9 */

void __cdecl16far FUN_1000_06f9(uint param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DAT_11fe_0050 = param_3;
  DAT_11fe_0052 = param_1;
  DAT_11fe_0056 = *(uint *)0x0;
  if (DAT_11fe_0056 != 0) {
    uVar1 = param_1;
    uVar3 = DAT_11fe_0056;
    if ((int)param_1 < 0) {
      uVar3 = DAT_11fe_0056 + param_1;
      if (DAT_11fe_0056 < -param_1 || uVar3 == 0) {
        DAT_11fe_0062 = 0;
        return;
      }
      uVar1 = 0;
    }
    uVar2 = DAT_11fe_0418 * 2 - uVar1;
    if (uVar1 <= (uint)(DAT_11fe_0418 * 2) && uVar2 != 0) {
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      DAT_11fe_005e = uVar3 + (uVar1 & 1) + 1 >> 1;
      DAT_11fe_005a = uVar1 >> 1;
      uVar1 = (uint)(0x200 / (ulong)DAT_11fe_005e);
      DAT_11fe_0054 = param_2;
      DAT_11fe_0058 = *(uint *)0x2;
      if (DAT_11fe_0058 != 0) {
        uVar3 = DAT_11fe_0058;
        if ((int)param_2 < 0) {
          uVar3 = DAT_11fe_0058 + param_2;
          if (DAT_11fe_0058 < -param_2 || uVar3 == 0) {
            DAT_11fe_0062 = 0;
            return;
          }
          param_2 = 0;
        }
        uVar2 = 200 - param_2;
        if (param_2 < 0xc9 && uVar2 != 0) {
          if (uVar2 < uVar3) {
            uVar3 = uVar2;
          }
          DAT_11fe_0060 = uVar3;
          if (uVar1 < uVar3) {
            DAT_11fe_0060 = uVar1;
          }
          DAT_11fe_0062 = 1;
          DAT_11fe_005c = param_2;
          FUN_1000_07ab();
          return;
        }
      }
    }
  }
  DAT_11fe_0062 = 0;
  return;
}



/* 1000:07ab FUN_1000_07ab */

void __cdecl16near FUN_1000_07ab(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 in_AX;
  int iVar4;
  undefined2 extraout_DX;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 unaff_ES;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  DAT_11fe_0064 = in_AX;
  if (DAT_11fe_0062 != 0) {
    uStack_a = DAT_11fe_041e;
    uStack_c = 0x7c6;
    FUN_1000_0905();
    iVar3 = DAT_11fe_005e;
    puVar8 = (undefined1 *)0x66;
    iVar6 = DAT_11fe_005c << 1;
    iVar5 = DAT_11fe_0060;
    do {
      puVar7 = (undefined1 *)(*(int *)(iVar6 + 0x2250) + *(int *)0x5a);
      for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar1;
      }
      iVar6 = iVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uStack_c = 199;
    iStack_e = DAT_11fe_0418 * 2 + -1;
    uStack_10 = 0;
    uStack_12 = 0;
    uStack_14 = DAT_11fe_0064;
    FUN_1000_1673(&uStack_14,DAT_11fe_0052,DAT_11fe_0054,DAT_11fe_0050);
    uStack_a = 0x827;
    FUN_1000_0905();
  }
  return;
}



/* 1000:0905 FUN_1000_0905 */

void __cdecl16near FUN_1000_0905(void)

{
  code *pcVar1;
  uint in_AX;
  
  DAT_11fe_041e = in_AX & 7;
  if (*(int *)(DAT_11fe_041e * 2 + 0x23e0) == DAT_11fe_0400) {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
  }
  return;
}



/* 1000:13f3 FUN_1000_13f3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_1000_13f3(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 in_DX;
  int *piVar3;
  
  uVar1 = DAT_1000_121a;
  uVar2 = DAT_1000_121e - DAT_1000_121a;
  if (DAT_1000_121e < DAT_1000_121a || uVar2 == 0) {
    _DAT_1000_1218 = (int *)0x0;
    return 0;
  }
  if (0xfff < uVar2) {
    uVar2 = 0xfff;
  }
  DAT_1000_1220 = uVar2 << 4;
  piVar3 = (int *)_DAT_1000_1218;
  *_DAT_1000_1218 = param_1;
  DAT_1000_1228 = 0x15d8;
  if (DAT_11fe_026e == 1) {
    param_1 = param_1 << 1;
    in_DX = 0x374;
    DAT_1000_1228 = 0x161d;
  }
  if (DAT_1000_0173 != '\0') {
    in_DX = 0x174;
    DAT_1000_1228 = 0x15f2;
  }
  DAT_1000_1230 = param_1 + 1U >> 1;
  DAT_1000_122c = 0xff;
  if ((param_1 + 1U & 1) == 0) {
    DAT_1000_122c = 0xf0;
  }
  DAT_1000_122a = in_DX;
  piVar3[1] = param_2;
  DAT_1000_122e = param_2;
  _DAT_1000_1218 = (int *)CONCAT22(DAT_1000_121a,piVar3 + 2);
  return uVar1;
}



/* 1000:147b FUN_1000_147b */

int __cdecl16far FUN_1000_147b(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1000_121a;
  iVar1 = DAT_1000_1218;
  LOCK();
  DAT_1000_1218 = 0;
  UNLOCK();
  LOCK();
  DAT_1000_121a = (iVar1 + 0xfU >> 4) + DAT_1000_121a;
  UNLOCK();
  return iVar2;
}



/* 1000:1498 FUN_1000_1498 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1000_1498(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  piVar2 = _DAT_1000_1218;
  iVar8 = (int)((ulong)_DAT_1000_1218 >> 0x10);
  piVar6 = (int *)_DAT_1000_1218;
  if (iVar8 != 0) {
    if (DAT_1000_1220 < (uint)(DAT_1000_1230 + 4 + (int)piVar6)) {
      *(int *)0x2 = *(int *)0x2 + -1;
      iVar8 = 0;
      DAT_1000_121e = 0;
    }
    else {
      DAT_1000_1222 = 0;
      DAT_1000_1224 = 0;
      DAT_1000_1226 = 0;
      DAT_1000_122a = DAT_1000_122a ^ 1;
      *_DAT_1000_1218 = 0;
      piVar7 = piVar6 + 2;
      piVar6[1] = 0;
      iVar5 = DAT_1000_1230;
      do {
        while (cVar3 = (*DAT_1000_1228)(), cVar3 != '\0') {
          DAT_1000_1224 = 0;
LAB_1000_151a:
          DAT_1000_1226 = DAT_1000_1226 + 1;
          piVar1 = piVar7;
          piVar7 = (int *)((int)piVar7 + 1);
          *(char *)piVar1 = cVar3;
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) goto LAB_1000_1522;
        }
        if (DAT_1000_1226 != 0) {
          DAT_1000_1224 = DAT_1000_1224 + 1;
          goto LAB_1000_151a;
        }
        DAT_1000_1222 = DAT_1000_1222 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
LAB_1000_1522:
      iVar5 = DAT_1000_1222;
      iVar4 = DAT_1000_1226;
      if (DAT_1000_1224 != 0) {
        iVar4 = DAT_1000_1226 - DAT_1000_1224;
        piVar7 = (int *)((int)piVar7 - DAT_1000_1224);
      }
      *piVar2 = iVar4;
      piVar6[1] = iVar5;
      _DAT_1000_1218 = (int *)CONCAT22(DAT_1000_121a,piVar7);
    }
  }
  return iVar8;
}



/* 1000:154b FUN_1000_154b */

void __cdecl16far
FUN_1000_154b(undefined2 param_1,uint param_2,int param_3,undefined2 param_4,undefined2 param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1000_13f3(param_4,param_5);
  if (((iVar1 != 0) && (DAT_1000_122e != 0)) && (DAT_1000_1230 != 0)) {
    FUN_1000_0905();
    param_3 = param_3 << 1;
    uVar2 = param_2;
    if (DAT_11fe_026c == 0) {
      uVar2 = param_2 >> 1;
    }
    DAT_1000_1228 = 0x15c1;
    if (DAT_11fe_026c == 0 && (param_2 & 1) != 0) {
      DAT_1000_1228 = 0x15c8;
    }
    do {
      FUN_1000_1498(*(int *)(param_3 + 0x2250) + uVar2);
      param_3 = param_3 + 2;
      DAT_1000_122e = DAT_1000_122e + -1;
    } while (DAT_1000_122e != 0);
  }
  FUN_1000_147b();
  return;
}



/* 1000:1623 FUN_1000_1623 */

undefined2 __cdecl16far FUN_1000_1623(void)

{
  undefined1 uVar1;
  bool bVar2;
  uint in_stack_0000000a;
  uint in_stack_0000000c;
  
  DAT_1000_123e = (int)in_stack_0000000a >> 0xf;
  DAT_1000_123a = (in_stack_0000000a ^ DAT_1000_123e) - DAT_1000_123e;
  DAT_1000_1240 = (int)in_stack_0000000c >> 0xf;
  DAT_1000_123c = (in_stack_0000000c ^ DAT_1000_1240) - DAT_1000_1240;
  uVar1 = 0;
  bVar2 = true;
  FUN_1000_1749();
  if (!bVar2) {
    FUN_1000_16ae();
    if (!(bool)uVar1) {
      FUN_1000_1968(0x1000);
    }
  }
  return 0x1242;
}



/* 1000:1673 FUN_1000_1673 */

undefined2 __cdecl16far FUN_1000_1673(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined2 in_stack_0000000a;
  
  uVar1 = 0;
  bVar2 = true;
  DAT_1000_123a = *(undefined2 *)0x0;
  DAT_1000_123c = *(undefined2 *)0x2;
  FUN_1000_1749();
  if (!bVar2) {
    FUN_1000_16ae();
    if (!(bool)uVar1) {
      FUN_1000_17a1();
    }
  }
  return 0x1242;
}



/* 1000:16ae FUN_1000_16ae */

void __cdecl16near FUN_1000_16ae(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_DX;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  
  if (unaff_DI < 0) {
    if (DAT_1000_123c <= (uint)-unaff_DI) {
      return;
    }
    DAT_1000_124a = -unaff_DI;
  }
  iVar2 = unaff_DI + DAT_1000_123c + -1;
  iVar1 = *(int *)(unaff_BP + 8);
  if ((-1 < iVar1) && (unaff_DI <= iVar1)) {
    iVar3 = iVar2 - iVar1;
    if (iVar3 != 0 && iVar1 <= iVar2) {
      DAT_1000_124e = iVar3;
    }
    if (in_DX < 0) {
      if (DAT_1000_123a <= (uint)-in_DX) {
        return;
      }
      DAT_1000_124c = -in_DX;
    }
    iVar2 = in_DX + DAT_1000_123a + -1;
    iVar1 = *(int *)(unaff_BP + 6);
    if ((-1 < iVar1) && (in_DX <= iVar1)) {
      iVar3 = iVar2 - iVar1;
      if (iVar3 != 0 && iVar1 <= iVar2) {
        DAT_1000_1250 = iVar3;
      }
      DAT_1000_1242 = DAT_1000_124c + in_DX;
      DAT_1000_1244 = DAT_1000_124a + unaff_DI;
      DAT_1000_1246 = (DAT_1000_123a - DAT_1000_124c) - DAT_1000_1250;
      DAT_1000_1248 = (DAT_1000_123c - DAT_1000_124a) - DAT_1000_124e;
      return;
    }
  }
  return;
}



/* 1000:1749 FUN_1000_1749 */

undefined2 __cdecl16near FUN_1000_1749(void)

{
  undefined2 uVar1;
  int unaff_DS;
  
  DAT_1000_124a = 0;
  DAT_1000_124c = 0;
  DAT_1000_124e = 0;
  DAT_1000_1250 = 0;
  DAT_1000_1242 = 0;
  DAT_1000_1244 = 0;
  DAT_1000_1246 = 0;
  DAT_1000_1248 = 0;
  uVar1 = 0;
  if ((unaff_DS != 0) && (uVar1 = 0, *(int *)0x0 != 0)) {
    uVar1 = *(undefined2 *)0x2;
  }
  return uVar1;
}



/* 1000:177e FUN_1000_177e */

void __cdecl16far FUN_1000_177e(void)

{
  bool bVar1;
  
  bVar1 = true;
  FUN_1000_1749();
  if (!bVar1) {
    FUN_1000_17a1();
  }
  return;
}



/* 1000:17a1 FUN_1000_17a1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_17a1(void)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  int extraout_DX;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  int unaff_BP;
  int iVar13;
  byte *pbVar14;
  byte *unaff_SI;
  byte *pbVar15;
  int unaff_DI;
  int iVar16;
  byte *pbVar17;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar18;
  
  FUN_1000_0905();
  uVar9 = extraout_DX + *(int *)(unaff_BP + 2);
  iVar16 = (unaff_DI + *(int *)(unaff_BP + 4) + DAT_1000_124a) * 2;
  iVar13 = *(int *)unaff_SI;
  if (DAT_11fe_026c != 0) {
    uVar9 = uVar9 * 2;
    iVar13 = iVar13 << 1;
    DAT_1000_124c = DAT_1000_124c << 1;
    DAT_1000_1250 = DAT_1000_1250 << 1;
  }
  uVar6 = uVar9 & 1;
  _DAT_1000_125e = CONCAT11(DAT_1000_125e_1,(char)uVar6);
  uVar7 = 0xffff;
  if (uVar6 != 0) {
    uVar7 = 0xff0;
  }
  DAT_1000_1260 = (byte)((uint)uVar7 >> 8);
  DAT_1000_1261 = (byte)uVar7;
  DAT_1000_125c = uVar9 + DAT_1000_124c >> 1;
  DAT_1000_1262 = 0xff;
  if ((uVar9 + DAT_1000_124c & 1) != 0) {
    DAT_1000_1262 = 0xf;
  }
  uVar9 = (uVar9 + iVar13 + -1) - DAT_1000_1250;
  DAT_1000_1263 = 0xff;
  if ((uVar9 & 1) == 0) {
    DAT_1000_1263 = 0xf0;
  }
  DAT_1000_1234 = ((uVar9 >> 1) - DAT_1000_125c) + 1;
  iVar8 = (*(int *)(unaff_SI + 2) - DAT_1000_124a) - DAT_1000_124e;
  iVar13 = DAT_1000_124a;
  if (DAT_1000_124e <= (uint)(*(int *)(unaff_SI + 2) - DAT_1000_124a) && iVar8 != 0) {
    for (; pbVar14 = unaff_SI + 4, iVar13 != 0; iVar13 = iVar13 + -1) {
      unaff_SI = pbVar14 + *(int *)pbVar14;
    }
    DAT_1000_124c = uVar6 + DAT_1000_124c >> 1;
    _DAT_1000_1232 = iVar8;
    do {
      puVar4 = (uint *)(pbVar14 + 2);
      iVar13 = *(int *)pbVar14;
      pbVar15 = pbVar14 + 4;
      pbVar14 = pbVar15;
      if (iVar13 == 0) goto LAB_1000_18ca;
      pbVar14 = pbVar15 + iVar13;
      pbVar17 = (byte *)(*(int *)(iVar16 + 0x2250) + DAT_1000_125c);
      uVar10 = iVar13 + _DAT_1000_125e;
      uVar6 = *puVar4 - DAT_1000_124c;
      uVar9 = DAT_1000_1234;
      if (uVar6 == 0) {
        bVar5 = DAT_1000_1262 & DAT_1000_1260;
LAB_1000_18a7:
        if (uVar10 == uVar9) {
          bVar12 = DAT_1000_1263 & DAT_1000_1261;
        }
        else {
          bVar12 = DAT_1000_1263;
          if (uVar10 <= uVar9) {
            uVar9 = uVar10;
            bVar12 = DAT_1000_1261;
          }
        }
        if (DAT_1000_125e == '\0') {
          do {
            while( true ) {
              if (uVar9 == 1) {
                bVar5 = bVar5 & bVar12;
              }
              pbVar2 = pbVar15;
              pbVar15 = pbVar15 + 1;
              bVar5 = *pbVar2 & bVar5;
              if (bVar5 == 0) break;
              if ((bVar5 & 0xf0) == 0) {
                uVar6 = CONCAT11(*pbVar17,bVar5 ^ *pbVar17) & 0xff0f;
                *pbVar17 = (byte)uVar6 ^ (byte)(uVar6 >> 8);
              }
              else {
                if ((bVar5 & 0xf) == 0) {
                  uVar6 = CONCAT11(*pbVar17,bVar5 ^ *pbVar17) & 0xfff0;
                  bVar5 = (byte)uVar6 ^ (byte)(uVar6 >> 8);
                }
                *pbVar17 = bVar5;
              }
              bVar5 = 0xff;
              uVar9 = uVar9 - 1;
              pbVar17 = pbVar17 + 1;
              if (uVar9 == 0) goto LAB_1000_18ca;
            }
            pbVar17 = pbVar17 + 1;
            bVar5 = 0xff;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        else {
          bVar11 = pbVar15[-1];
          do {
            while( true ) {
              if ((char)uVar9 == '\x01') {
                bVar5 = bVar5 & bVar12;
              }
              pbVar2 = pbVar15;
              pbVar15 = pbVar15 + 1;
              bVar3 = *pbVar2;
              bVar5 = (byte)(CONCAT11(bVar11,bVar3) >> 4) & bVar5;
              bVar11 = bVar3;
              if (bVar5 == 0) break;
              if ((bVar5 & 0xf0) == 0) {
                uVar6 = CONCAT11(*pbVar17,bVar5 ^ *pbVar17) & 0xff0f;
                *pbVar17 = (byte)uVar6 ^ (byte)(uVar6 >> 8);
              }
              else {
                if ((bVar5 & 0xf) == 0) {
                  uVar6 = CONCAT11(*pbVar17,bVar5 ^ *pbVar17) & 0xfff0;
                  bVar5 = (byte)uVar6 ^ (byte)(uVar6 >> 8);
                }
                *pbVar17 = bVar5;
              }
              bVar5 = 0xff;
              uVar9 = uVar9 - 1;
              pbVar17 = pbVar17 + 1;
              if (uVar9 == 0) goto LAB_1000_18ca;
            }
            pbVar17 = pbVar17 + 1;
            bVar5 = 0xff;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else if (*puVar4 < DAT_1000_124c) {
        pbVar15 = pbVar15 + -uVar6;
        bVar18 = -uVar6 <= uVar10;
        uVar10 = uVar10 + uVar6;
        bVar5 = DAT_1000_1262;
        if (bVar18 && uVar10 != 0) goto LAB_1000_18a7;
      }
      else {
        pbVar17 = pbVar17 + uVar6;
        if (uVar6 <= DAT_1000_1234 && DAT_1000_1234 - uVar6 != 0) {
          uVar9 = DAT_1000_1234 - uVar6;
          bVar5 = DAT_1000_1260;
          goto LAB_1000_18a7;
        }
      }
LAB_1000_18ca:
      iVar16 = iVar16 + 2;
      cVar1 = DAT_1000_1232 + -1;
      _DAT_1000_1232 = CONCAT11(DAT_1000_1232_1,cVar1);
    } while (cVar1 != '\0');
  }
  return;
}



/* 1000:1968 FUN_1000_1968 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000_1968(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_DX;
  uint uVar5;
  uint uVar6;
  int unaff_BP;
  int *unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_1000_0905();
  DAT_1000_1236 = *unaff_SI;
  DAT_1000_1238 = unaff_SI[1];
  iVar2 = (DAT_1000_123a - DAT_1000_124c) - DAT_1000_1250;
  DAT_1000_1258 = unaff_DS;
  DAT_1000_125a = unaff_ES;
  if ((iVar2 == 0 || (int)(DAT_1000_123a - DAT_1000_124c) < DAT_1000_1250) ||
     (iVar3 = (DAT_1000_123c - DAT_1000_124a) - DAT_1000_124e, DAT_1000_1234 = iVar2,
     iVar3 == 0 || DAT_1000_123c - DAT_1000_124a < DAT_1000_124e)) {
    FUN_1000_1a6d();
    return;
  }
  DAT_1000_1256 = 2;
  iVar4 = DAT_1000_124a;
  if (DAT_1000_1240 != 0) {
    DAT_1000_1256 = 0xfffe;
    iVar4 = DAT_1000_124e;
  }
  DAT_1000_1254 = -(DAT_1000_123c + 1U >> 1);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    for (DAT_1000_1254 = DAT_1000_1254 + DAT_1000_1238; -1 < DAT_1000_1254;
        DAT_1000_1254 = DAT_1000_1254 - DAT_1000_123c) {
    }
  }
  uVar5 = extraout_DX + *(int *)(unaff_BP + 2) + DAT_1000_124c;
  uRam00011b04 = DAT_1000_1b3f;
  uRam00011b03 = DAT_1000_1b3e;
  if (DAT_1000_123e != 0) {
    uVar5 = (uVar5 + iVar2) - 1;
    DAT_1000_124c = DAT_1000_1250;
    uRam00011b04 = DAT_1000_1b43;
    uRam00011b03 = DAT_1000_1b42;
  }
  DAT_1000_1252 = -(DAT_1000_123a + 1U >> 1);
  uVar6 = 0;
  bVar1 = false;
  while (DAT_1000_124c = DAT_1000_124c + -1, -1 < (int)DAT_1000_124c) {
    for (DAT_1000_1252 = DAT_1000_1252 + DAT_1000_1236; -1 < DAT_1000_1252;
        DAT_1000_1252 = DAT_1000_1252 - DAT_1000_123a) {
      uVar6 = uVar6 + 1;
      bVar1 = (bool)(bVar1 ^ 1);
    }
  }
  DAT_1000_1262 = 0xf;
  DAT_1000_125c = uVar5 >> 1;
  if ((uVar5 & 1) != 0) {
    DAT_1000_1262 = 0xf0;
  }
  DAT_1000_1260 = 0xf0;
  DAT_1000_124c = uVar6 >> 1;
  if (bVar1) {
    DAT_1000_1260 = 0xf;
  }
  _DAT_1000_1232 = iVar3;
  uRam00011b25 = uRam00011b03;
  uRam00011b26 = uRam00011b04;
  FUN_1000_1a73();
  return;
}



/* 1000:1a6d FUN_1000_1a6d */

void __cdecl16far FUN_1000_1a6d(void)

{
  return;
}



/* 1000:1a73 FUN_1000_1a73 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000_1a73(void)

{
  int *piVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  byte bVar11;
  int *unaff_SI;
  int *piVar12;
  byte *pbVar13;
  int unaff_DI;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined2 unaff_DS;
  bool bVar16;
  
  while( true ) {
    iVar8 = *unaff_SI;
    if (iVar8 != 0) break;
LAB_1000_1b47:
    _DAT_1000_1232 = _DAT_1000_1232 + -1;
    if (_DAT_1000_1232 == 0) {
      FUN_1000_1a6d();
      return;
    }
    unaff_DI = unaff_DI + DAT_1000_1256;
    for (DAT_1000_1254 = DAT_1000_1254 + DAT_1000_1238; -1 < DAT_1000_1254;
        DAT_1000_1254 = DAT_1000_1254 - DAT_1000_123c) {
      unaff_SI = (int *)((int)unaff_SI + *unaff_SI + 4);
    }
    unaff_DS = DAT_1000_1258;
  }
  piVar12 = unaff_SI + 2;
  iVar7 = unaff_SI[1];
  pbVar14 = (byte *)(*(int *)(unaff_DI + 0x2250) + DAT_1000_125c);
  puVar15 = (undefined1 *)0x1264;
  iVar10 = ((DAT_1000_1236 + 1U >> 1) - iVar8) - iVar7;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    *puVar2 = 0;
  }
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    piVar1 = piVar12;
    piVar12 = (int *)((int)piVar12 + 1);
    *puVar2 = (char)*piVar1;
  }
  while( true ) {
    uVar5 = DAT_1000_125a;
    iVar8 = DAT_1000_1236;
    if (iVar10 == 0) break;
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    *puVar2 = 0;
    iVar10 = iVar10 + -1;
  }
  pbVar13 = (byte *)(DAT_1000_124c + 0x1264);
  iVar7 = DAT_1000_1234;
  iVar10 = DAT_1000_1252;
  bVar9 = DAT_1000_1260;
  bVar11 = DAT_1000_1262;
  do {
    while( true ) {
      bVar6 = *pbVar13 & bVar9;
      bVar16 = -1 < (char)bVar9;
      bVar9 = ~bVar9 & 0x7f | bVar16 << 7;
      pbVar13 = pbVar13 + bVar16;
      if (bVar6 == 0) break;
      bVar3 = (byte)(bVar6 >> 1 | bVar6 << 7) >> 1;
      bVar4 = (byte)(bVar3 | (bVar6 >> 1) << 7) >> 1;
      bVar6 = bVar6 | (byte)(bVar4 | bVar3 << 7) >> 1 | bVar4 << 7;
      do {
        iVar7 = iVar7 + -1;
        if (iVar7 < 0) goto LAB_1000_1b47;
        *pbVar14 = (*pbVar14 ^ bVar6) & bVar11 ^ bVar6;
        bVar16 = -1 < (char)bVar11;
        bVar11 = ~bVar11 & 0x7f | bVar16 << 7;
        pbVar14 = pbVar14 + !bVar16;
        iVar10 = iVar10 + iVar8;
      } while (iVar10 < 0);
      while (iVar10 = iVar10 - DAT_1000_123a, -1 < iVar10) {
        bVar16 = -1 < (char)bVar9;
        bVar9 = ~bVar9 & 0x7f | bVar16 << 7;
        pbVar13 = pbVar13 + bVar16;
      }
    }
    do {
      iVar7 = iVar7 + -1;
      if (iVar7 < 0) goto LAB_1000_1b47;
      bVar16 = -1 < (char)bVar11;
      bVar11 = ~bVar11 & 0x7f | bVar16 << 7;
      pbVar14 = pbVar14 + !bVar16;
      iVar10 = iVar10 + iVar8;
    } while (iVar10 < 0);
    while (iVar10 = iVar10 - DAT_1000_123a, -1 < iVar10) {
      bVar16 = -1 < (char)bVar9;
      bVar9 = ~bVar9 & 0x7f | bVar16 << 7;
      pbVar13 = pbVar13 + bVar16;
    }
  } while( true );
}



/* 1000:1be2 FUN_1000_1be2 */

void __cdecl16far FUN_1000_1be2(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar12;
  int iVar13;
  byte *pbVar14;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar15;
  
  *(undefined1 *)0x468 = *(undefined1 *)(unaff_BP + 0xc);
  *(undefined1 *)0x469 = *(undefined1 *)(unaff_BP + 0xe);
  *(undefined1 *)0x46a = *(undefined1 *)(unaff_BP + 10);
  iVar3 = *(int *)0x47e;
  FUN_1000_0905();
  while( true ) {
    puVar1 = unaff_SI;
    unaff_SI = (undefined2 *)((int)unaff_SI + 1);
    bVar4 = (byte)*puVar1;
    if (bVar4 == 0) break;
    if ((char)bVar4 < '\0') {
      *(byte *)0x468 = bVar4 & 0x7f;
    }
    else if ((bVar4 <= *(byte *)0x471) && (*(byte *)0x470 <= bVar4)) {
      uVar9 = (uint)(byte)(bVar4 - *(byte *)0x470);
      cVar6 = *(char *)0x476;
      if (cVar6 == '\0') {
        cVar6 = *(char *)(*(int *)0x46e + uVar9) + *(char *)0x472;
      }
      if ((char)((uint)*puVar1 >> 8) == '\0') {
        cVar6 = cVar6 - *(char *)0x47b;
      }
      *(char *)0x46c = cVar6 - *(char *)0x477;
      puVar12 = (undefined2 *)((uVar9 << (*(byte *)0x475 & 0x1f)) + *(int *)0x473);
      uVar9 = CONCAT11(*(undefined1 *)0x469,*(undefined1 *)0x468) |
              CONCAT11(*(undefined1 *)0x469,*(undefined1 *)0x468) << 4;
      cVar6 = *(char *)0x47c;
      bVar4 = *(byte *)0x477;
      iVar13 = *(int *)0x482 << 1;
      bVar8 = (byte)uVar9;
      if (*(char *)0x46a == '\x01') {
        *(char *)0x46b = cVar6;
        do {
          iVar11 = CONCAT11((char)*puVar12,(char)((uint)*puVar12 >> 8)) << (bVar4 & 0x1f);
          bVar7 = 0xf;
          if ((*(uint *)0x480 & 1) != 0) {
            bVar7 = 0xf0;
          }
          pbVar14 = (byte *)(*(int *)(iVar13 + 0x270) + (*(uint *)0x480 >> 1));
          cVar6 = *(char *)0x46c;
          do {
            bVar15 = iVar11 < 0;
            iVar11 = iVar11 << 1;
            if (bVar15) {
              *pbVar14 = (*pbVar14 ^ bVar8) & bVar7 ^ bVar8;
            }
            else {
              bVar10 = (byte)(uVar9 >> 8);
              *pbVar14 = (*pbVar14 ^ bVar10) & bVar7 ^ bVar10;
            }
            bVar7 = bVar7 ^ 0xff;
            if (-1 < (char)bVar7) {
              pbVar14 = pbVar14 + 1;
            }
            cVar6 = cVar6 + -1;
          } while (cVar6 != '\0');
          iVar13 = iVar13 + 2;
          puVar12 = (undefined2 *)((int)puVar12 + iVar3);
          pcVar2 = (char *)0x46b;
          *pcVar2 = *pcVar2 + -1;
        } while (*pcVar2 != '\0');
      }
      else {
        do {
          iVar11 = CONCAT11((char)*puVar12,(char)((uint)*puVar12 >> 8)) << (bVar4 & 0x1f);
          bVar7 = 0xf;
          if ((*(uint *)0x480 & 1) != 0) {
            bVar7 = 0xf0;
          }
          pbVar14 = (byte *)(*(int *)(iVar13 + 0x270) + (*(uint *)0x480 >> 1));
          cVar5 = *(char *)0x46c;
          do {
            bVar15 = iVar11 < 0;
            iVar11 = iVar11 << 1;
            if (bVar15) {
              *pbVar14 = (*pbVar14 ^ bVar8) & bVar7 ^ bVar8;
            }
            bVar7 = bVar7 ^ 0xff;
            if (-1 < (char)bVar7) {
              pbVar14 = pbVar14 + 1;
            }
            cVar5 = cVar5 + -1;
          } while (cVar5 != '\0');
          iVar13 = iVar13 + 2;
          puVar12 = (undefined2 *)((int)puVar12 + iVar3);
          cVar6 = cVar6 + -1;
        } while (cVar6 != '\0');
      }
      *(undefined1 *)0x477 = 0;
      *(int *)0x480 = *(int *)0x480 + (uint)*(byte *)0x46c;
    }
  }
  *(undefined1 *)(unaff_BP + 0xc) = *(undefined1 *)0x468;
  return;
}



/* 1000:1d36 FUN_1000_1d36 */

void __cdecl16far FUN_1000_1d36(uint param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  if ((param_1 <= DAT_11fe_0490) && (param_1 * 2 != 0)) {
    uVar4 = (uint)(byte)((*(char *)(param_2 + -7) - *(char *)(param_2 + -8)) + 1);
    iVar3 = uVar4 + 8;
    puVar5 = (undefined2 *)(param_2 - iVar3);
    puVar6 = (undefined2 *)((*(int *)(param_1 * 2 + 0x490) + 0x490) - iVar3);
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



/* 1000:1d86 FUN_1000_1d86 */

int __cdecl16far FUN_1000_1d86(uint param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = '\0';
  cVar3 = '\0';
  if ((((-1 < (char)param_2) && (param_1 <= DAT_11fe_0490)) && (param_1 * 2 != 0)) &&
     ((iVar1 = *(int *)(param_1 * 2 + 0x490), *(byte *)(iVar1 + 0x488) <= param_2 &&
      (param_2 <= *(byte *)(iVar1 + 0x489))))) {
    cVar3 = *(char *)(iVar1 + 0x48d);
    cVar2 = *(char *)(iVar1 + 0x48b);
    if (cVar2 == '\0') {
      cVar2 = *(char *)((iVar1 + 0x487) - (uint)(byte)(*(char *)(iVar1 + 0x489) - param_2));
    }
  }
  return (int)(char)(cVar2 + cVar3);
}



/* 1000:1dd7 FUN_1000_1dd7 */

char __cdecl16far FUN_1000_1dd7(uint param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((param_1 <= DAT_11fe_0490) && (param_1 * 2 != 0)) {
    iVar1 = *(int *)(param_1 * 2 + 0x490);
    cVar2 = *(char *)(iVar1 + 0x48c) + *(char *)(iVar1 + 0x48e);
  }
  return cVar2;
}



/* 1000:1e00 FUN_1000_1e00 */

void __cdecl16far FUN_1000_1e00(void)

{
  FUN_1000_1e1a(0x1000);
  return;
}



/* 1000:1e1a FUN_1000_1e1a */

void FUN_1000_1e1a(void)

{
  FUN_1000_1f4b();
  FUN_1000_1e80();
  FUN_1000_1e32();
  FUN_1000_1edf();
  FUN_1000_1f1f();
  return;
}



/* 1000:1e32 FUN_1000_1e32 */

int __cdecl16near FUN_1000_1e32(void)

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
  
  if (*(char *)0x476 == '\0') {
    return in_AX;
  }
  if (-1 < *(int *)(unaff_BP + 6)) {
    iVar3 = *(int *)0x480;
    if (-1 < iVar3) {
      return iVar3;
    }
    *(undefined2 *)0x480 = 0;
    bVar1 = *(byte *)0x476;
    uVar4 = (undefined1)((uint)-iVar3 % (uint)bVar1);
    *(undefined1 *)0x477 = uVar4;
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
      } while ((bVar1 < *(byte *)0x470) || (*(byte *)0x471 < bVar1));
    } while (bVar1 != *(byte *)0x471);
  }
  if ((undefined1 *)*(undefined2 *)0x478 != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x478 = *(undefined1 *)0x47a;
  }
  return *(int *)0x480 - *(int *)(unaff_BP + 2);
}



/* 1000:1e80 FUN_1000_1e80 */

uint __cdecl16near FUN_1000_1e80(void)

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
  
  if (*(char *)0x476 != '\0') {
    iVar2 = *(int *)(unaff_BP + 6);
    if ((iVar2 < 0) || (iVar2 < *(int *)0x480)) {
      if ((undefined1 *)*(undefined2 *)0x478 != (undefined1 *)0x0) {
        *(undefined1 *)*(undefined2 *)0x478 = *(undefined1 *)0x47a;
      }
      return *(int *)0x480 - *(int *)(unaff_BP + 2);
    }
    iVar3 = *(int *)0x480 + -1;
    pbVar4 = (byte *)(in_BX + -1);
    do {
      pbVar5 = pbVar4;
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar4;
      if (bVar1 == 0) {
        return 0;
      }
    } while (((((char)bVar1 < '\0') || (bVar1 < *(byte *)0x470)) || (*(byte *)0x471 < bVar1)) ||
            (iVar3 = iVar3 + (uint)*(byte *)0x476, iVar3 < iVar2));
    *(char *)0x47b = (char)iVar3 - (char)iVar2;
    pbVar5 = pbVar5 + 2;
    bVar1 = *pbVar5;
    in_AX = (uint)bVar1;
    *pbVar5 = 0;
    *(byte *)0x47a = bVar1;
    *(undefined2 *)0x478 = pbVar5;
  }
  return in_AX;
}



/* 1000:1edf FUN_1000_1edf */

int __cdecl16near FUN_1000_1edf(void)

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
    iVar4 = *(int *)0x482;
    if (iVar4 < 0) {
      puVar1 = (uint *)0x47c;
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + iVar4;
      if (uVar3 < (uint)-iVar4 || *puVar1 == 0) goto LAB_1000_1f34;
      *(undefined2 *)0x482 = 0;
      *(int *)0x473 = *(int *)0x473 + -iVar4 * *(int *)0x47e;
    }
    if (*(uint *)0x482 <= uVar2) {
      uVar3 = (*(uint *)0x482 + *(int *)0x47c) - 1;
      iVar4 = uVar3 - uVar2;
      if (uVar2 <= uVar3 && iVar4 != 0) {
        *(int *)0x47c = *(int *)0x47c - iVar4;
      }
      return iVar4;
    }
  }
LAB_1000_1f34:
  if ((undefined1 *)*(undefined2 *)0x478 != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x478 = *(undefined1 *)0x47a;
  }
  return *(int *)0x480 - *(int *)(unaff_BP + 2);
}



/* 1000:1f1f FUN_1000_1f1f */

int __cdecl16far FUN_1000_1f1f(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)0x480 = *(int *)0x480 + *(int *)(unaff_BP + 2);
  *(int *)0x482 = *(int *)0x482 + *(int *)(unaff_BP + 4);
  FUN_1000_1be2();
  if ((undefined1 *)*(undefined2 *)0x478 != (undefined1 *)0x0) {
    *(undefined1 *)*(undefined2 *)0x478 = *(undefined1 *)0x47a;
  }
  return *(int *)0x480 - *(int *)(unaff_BP + 2);
}



/* 1000:1f4b FUN_1000_1f4b */

/* WARNING: Removing unreachable block (ram,0x00011f3c) */

int __cdecl16far FUN_1000_1f4b(void)

{
  char cVar1;
  int in_CX;
  undefined2 in_DX;
  char *in_BX;
  int unaff_BP;
  int iVar2;
  undefined2 unaff_SS;
  code *in_stack_00000000;
  
  DAT_11fe_0478 = 0;
  DAT_11fe_0477 = 0;
  DAT_11fe_047b = 0;
  if (((*in_BX == '\0') || (DAT_11fe_0490 < *(uint *)(unaff_BP + 0x10))) ||
     (iVar2 = *(uint *)(unaff_BP + 0x10) * 2, iVar2 == 0)) {
    DAT_11fe_0482 = in_DX;
    DAT_11fe_0480 = in_CX;
    DAT_11fe_047b = 0;
    DAT_11fe_0478 = 0;
    DAT_11fe_0477 = 0;
    return in_CX - *(int *)(unaff_BP + 2);
  }
  iVar2 = *(int *)(iVar2 + 0x490);
  DAT_11fe_0473 = iVar2 + 0x490;
  cVar1 = *(char *)(iVar2 + 0x48c);
  if ((*(byte *)(unaff_BP + 10) & 1) != 0) {
    cVar1 = cVar1 + *(char *)(iVar2 + 0x48e);
  }
  DAT_11fe_047c = (int)cVar1;
  DAT_11fe_0472 = *(char *)(iVar2 + 0x48d);
  DAT_11fe_0476 = *(char *)(iVar2 + 0x48b);
  if (DAT_11fe_0476 != '\0') {
    DAT_11fe_0476 = DAT_11fe_0476 + DAT_11fe_0472;
  }
  DAT_11fe_0470 = *(char *)(iVar2 + 0x488);
  DAT_11fe_0471 = *(char *)(iVar2 + 0x489);
  DAT_11fe_0475 = *(char *)(iVar2 + 0x48a) - 1;
  DAT_11fe_046e = (iVar2 + 0x487) - (uint)(byte)(DAT_11fe_0471 - DAT_11fe_0470);
  DAT_11fe_047e = (byte)(DAT_11fe_0471 - DAT_11fe_0470) + 1 << (DAT_11fe_0475 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x00011fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DAT_11fe_0480 = in_CX;
  DAT_11fe_0482 = in_DX;
  iVar2 = (*in_stack_00000000)();
  return iVar2;
}


