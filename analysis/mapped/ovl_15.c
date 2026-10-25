/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_15::0252a0 FUN_ovl_15__0252a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_ovl_15__0252a0(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = _DAT_2a22_4914;
  *(undefined1 *)(_DAT_2a22_4914 + param_1 * 3 + 6) = param_2;
  *(undefined1 *)(iVar1 + param_1 * 3 + 7) = param_3;
  *(undefined1 *)(iVar1 + param_1 * 3 + 8) = param_4;
  return;
}



/* ovl_15::0252e8 FUN_ovl_15__0252e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__0252e8(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_12;
  int local_10;
  int local_c;
  int local_4;
  
  iVar7 = _DAT_2a22_4914;
  uVar8 = (param_2 - param_1) + 1;
  iVar9 = param_1 * 3 + _DAT_2a22_4914;
  iVar10 = param_2 * 3 + _DAT_2a22_4914;
  bVar1 = *(byte *)(iVar10 + 6);
  bVar2 = *(byte *)(iVar9 + 6);
  bVar3 = *(byte *)(iVar10 + 7);
  bVar4 = *(byte *)(iVar9 + 7);
  bVar5 = *(byte *)(iVar10 + 8);
  bVar6 = *(byte *)(iVar9 + 8);
  local_12 = (uint)*(byte *)(iVar9 + 6) << 4;
  local_4 = (uint)*(byte *)(iVar9 + 7) << 4;
  local_10 = (uint)*(byte *)(iVar9 + 8) << 4;
  local_c = param_1;
  while (local_c = local_c + 1, local_c < param_2) {
    local_12 = local_12 + (((uint)bVar1 - (uint)bVar2) * 0x10) / uVar8;
    local_4 = local_4 + (((uint)bVar3 - (uint)bVar4) * 0x10) / uVar8;
    local_10 = local_10 + (((uint)bVar5 - (uint)bVar6) * 0x10) / uVar8;
    *(undefined1 *)(iVar7 + local_c * 3 + 6) = (char)(local_12 >> 4);
    *(undefined1 *)(iVar7 + local_c * 3 + 7) = (char)(local_4 >> 4);
    *(undefined1 *)(iVar7 + local_c * 3 + 8) = (char)(local_10 >> 4);
  }
  FUN_1eea_0004(param_1,(param_2 - param_1) + 1,param_1 * 3 + iVar7 + 6,0x2e67);
  return;
}



/* ovl_15::02540a FUN_ovl_15__02540a */

void __cdecl16far FUN_ovl_15__02540a(int param_1,int param_2)

{
  int *piVar1;
  int local_4;
  
  local_4 = 0;
  do {
    piVar1 = (int *)(local_4 * 2 + param_1);
    piVar1[8] = ((piVar1[3] - *piVar1) * 0x10) / param_2;
    piVar1 = (int *)(local_4 * 2 + param_1);
    piVar1[0xb] = *piVar1 << 4;
    local_4 = local_4 + 1;
  } while (local_4 < 3);
  return;
}



/* ovl_15::025450 FUN_ovl_15__025450 */

void __cdecl16far FUN_ovl_15__025450(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_4;
  
  FUN_ovl_15__0252a0(*(undefined2 *)(param_1 + 0xe),*(int *)(param_1 + 0x16) >> 4,
                     *(int *)(param_1 + 0x18) >> 4,*(int *)(param_1 + 0x1a) >> 4);
  FUN_ovl_15__0252e8(*(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0xe));
  local_4 = 0;
  do {
    iVar2 = local_4 * 2 + param_1;
    piVar1 = (int *)(iVar2 + 0x16);
    *piVar1 = *piVar1 + *(int *)(iVar2 + 0x10);
    local_4 = local_4 + 1;
  } while (local_4 < 3);
  return;
}



/* ovl_15::0254aa FUN_ovl_15__0254aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__0254aa(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x252a;
  if (_DAT_3000_d123 != 0) {
    uVar1 = 0x19c7;
    FUN_19c7_4f54(0x252a,_DAT_3000_d123);
  }
  thunk_EXT_FUN_0000_0000(uVar1);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    uVar1 = 0x7ea2;
  }
  else {
    uVar1 = 0x7eaf;
  }
  FUN_20a6_0232(2,uVar1);
  _DAT_3000_d123 = thunk_EXT_FUN_0000_0000(0x20a6,2,0x28,0,0xee,0xc6);
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* ovl_15::025504 FUN_ovl_15__025504 */

void __cdecl16far FUN_ovl_15__025504(void)

{
  undefined2 uVar1;
  int local_4;
  
  uVar1 = 0x252a;
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_15__02540a(0x7d36,0x40);
    FUN_ovl_15__02540a(0x7d52,0x40);
    FUN_ovl_15__02540a(0x7d8a,0x40);
    FUN_ovl_15__02540a(0x7dc2,0x40);
    local_4 = 0;
    do {
      FUN_ovl_15__025450(0x7d8a);
      FUN_ovl_15__025450(0x7dc2);
      FUN_ovl_15__025450(0x7d52);
      FUN_ovl_15__025450(0x7d36);
      local_4 = local_4 + 1;
    } while (local_4 < 0x40);
    FUN_ovl_15__02540a(0x7d6e,0x40);
    FUN_ovl_15__02540a(0x7da6,0x40);
    FUN_ovl_15__02540a(0x7dde,0x40);
    for (local_4 = 0; local_4 < 0x40; local_4 = local_4 + 1) {
      FUN_ovl_15__025450(0x7da6);
      FUN_ovl_15__025450(0x7dde);
      FUN_ovl_15__025450(0x7d6e);
    }
  }
  else {
    if (DAT_2a22_e326 == DAT_2a22_46f1) {
      thunk_EXT_FUN_0000_0000(0x252a,0,0x7d16);
      FUN_ovl_15__0254aa();
      return;
    }
    local_4 = 0;
    do {
      *(undefined1 *)(local_4 + 0x7cbe) = *(undefined1 *)(local_4 + 0x7cd0);
      thunk_EXT_FUN_0000_0000(uVar1,0x7cbe);
      uVar1 = 0x1951;
      FUN_1951_0006(10);
      local_4 = local_4 + 1;
    } while (local_4 < 0x11);
  }
  return;
}



/* ovl_15::025648 FUN_ovl_15__025648 */

void __cdecl16far FUN_ovl_15__025648(void)

{
  undefined2 uVar1;
  int local_4;
  
  uVar1 = 0x252a;
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_15__02540a(0x7d52,0x40);
    FUN_ovl_15__02540a(0x7d8a,0x40);
    FUN_ovl_15__02540a(0x7dc2,0x40);
    local_4 = 0;
    do {
      FUN_ovl_15__025450(0x7d8a);
      FUN_ovl_15__025450(0x7dc2);
      FUN_ovl_15__025450(0x7d52);
      local_4 = local_4 + 1;
    } while (local_4 < 0x40);
    FUN_ovl_15__02540a(0x7d6e,0x40);
    FUN_ovl_15__02540a(0x7da6,0x40);
    FUN_ovl_15__02540a(0x7dde,0x40);
    for (local_4 = 0; local_4 < 0x40; local_4 = local_4 + 1) {
      FUN_ovl_15__025450(0x7da6);
      FUN_ovl_15__025450(0x7dde);
      FUN_ovl_15__025450(0x7d6e);
    }
  }
  else if (DAT_2a22_e326 == DAT_2a22_46f3) {
    local_4 = 0;
    do {
      *(undefined1 *)(local_4 + 0x7cbe) = *(undefined1 *)(local_4 + 0x7ce2);
      thunk_EXT_FUN_0000_0000(uVar1,0x7cbe);
      uVar1 = 0x1951;
      FUN_1951_0006(10);
      local_4 = local_4 + 1;
    } while (local_4 < 0x11);
  }
  return;
}



/* ovl_15::02575a FUN_ovl_15__02575a */

void __cdecl16far FUN_ovl_15__02575a(void)

{
  undefined2 uVar1;
  int local_4;
  
  uVar1 = 0x252a;
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_15__02540a(0x7dfa,0x40);
    FUN_ovl_15__02540a(0x7e32,0x40);
    FUN_ovl_15__02540a(0x7e6a,0x40);
    local_4 = 0;
    do {
      FUN_ovl_15__025450(0x7e32);
      FUN_ovl_15__025450(0x7e6a);
      FUN_ovl_15__025450(0x7dfa);
      local_4 = local_4 + 1;
    } while (local_4 < 0x40);
    FUN_ovl_15__02540a(0x7e16,0x40);
    FUN_ovl_15__02540a(0x7e4e,0x40);
    FUN_ovl_15__02540a(0x7e86,0x40);
    for (local_4 = 0; local_4 < 0x40; local_4 = local_4 + 1) {
      FUN_ovl_15__025450(0x7e4e);
      FUN_ovl_15__025450(0x7e86);
      FUN_ovl_15__025450(0x7e16);
    }
  }
  else {
    if (DAT_2a22_e326 == DAT_2a22_46f1) {
      thunk_EXT_FUN_0000_0000(0x252a,0,0x7d26);
      FUN_ovl_15__0254aa();
      return;
    }
    local_4 = 0;
    do {
      *(undefined1 *)(local_4 + 0x7cbe) = *(undefined1 *)(local_4 + 0x7cf4);
      thunk_EXT_FUN_0000_0000(uVar1,0x7cbe);
      uVar1 = 0x1951;
      FUN_1951_0006(10);
      local_4 = local_4 + 1;
    } while (local_4 < 0x11);
  }
  return;
}



/* ovl_15::025884 FUN_ovl_15__025884 */

void __cdecl16far FUN_ovl_15__025884(void)

{
  undefined1 uVar1;
  
  uVar1 = DAT_2a22_c11c;
  DAT_2a22_c11c = DAT_2a22_c11a;
  DAT_2a22_c11a = DAT_2a22_c119;
  DAT_2a22_c119 = DAT_2a22_c11b;
  DAT_2a22_c11b = uVar1;
  thunk_EXT_FUN_0000_0000(0x252a,0x7cbe);
  FUN_1951_0006(1);
  return;
}



/* ovl_15::0258c2 FUN_ovl_15__0258c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__0258c2(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_12;
  int local_10 [2];
  undefined1 local_c [2];
  uint local_a;
  int local_8;
  uint local_6;
  undefined2 local_4;
  
  _DAT_3000_d125 = -0x657c;
  FUN_2035_00c6(0x7ebc,0,&local_4);
  FUN_19c7_4f30(0x2035,local_4,local_10,0x2e67,2,local_c);
  FUN_19c7_4f30(0x19c7,local_4,_DAT_3000_d125,0x2e67,local_10[0] << 1,local_c);
  FUN_19c7_4f30(0x19c7,local_4,&local_8,0x2e67,2,local_c);
  uVar2 = 0x1eea;
  local_a = thunk_EXT_FUN_0000_0000(0x19c7);
  local_6 = local_8 + 0xfU >> 4;
  if (local_a < local_6) {
    FUN_19c7_4ec2(0x1eea,local_4);
    uVar2 = 0x1951;
    FUN_1951_00b2(0x7ec7);
  }
  uVar3 = 0x19c7;
  iVar1 = FUN_19c7_4e68(uVar2,local_6,&local_12);
  if (iVar1 != 0) {
    uVar3 = 0x1951;
    FUN_1951_00b2(0x7ee8);
  }
  _DAT_3000_d129 = local_12;
  _DAT_3000_d127 = 0;
  FUN_19c7_4f30(uVar3,local_4,0,local_12,local_8,local_c);
  FUN_19c7_4ec2(0x19c7,local_4);
  FUN_1951_02ac();
  _DAT_3000_d12b = local_10[0] * 2 + _DAT_3000_d125 + 4;
  return;
}



/* ovl_15::0259c8 FUN_ovl_15__0259c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__0259c8(void)

{
  undefined2 uVar1;
  int local_4;
  
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    _DAT_2a22_e337 = 0x7f07;
  }
  else {
    _DAT_2a22_e337 = 0x7f12;
  }
  _DAT_2a22_e339 = 0x19d0;
  _DAT_2a22_e33b = 0x2120;
  _DAT_2a22_e33d = 0x19e4;
  _DAT_2a22_e33f = 0x2120;
  _DAT_2a22_e341 = 3;
  _DAT_2a22_e343 = 0xffff;
  _DAT_2a22_e345 = 0xffff;
  _DAT_2a22_e347 = 0xffff;
  local_4 = 0;
  uVar1 = 0x252a;
  do {
    thunk_EXT_FUN_0000_0000(uVar1,local_4,0);
    local_4 = local_4 + 1;
    uVar1 = 0x1eea;
  } while (local_4 < 3);
  FUN_11e1_002a((undefined *)&DAT_2a22_e337);
  _DAT_2a22_fd3a = 2;
  if (DAT_2a22_e326 != DAT_2a22_46f1) {
    FUN_ovl_15__0254aa();
  }
  FUN_ovl_15__0258c2();
  FUN_20a6_02a8(4,9,0x7f1e);
  return;
}



/* ovl_15::025a6a FUN_ovl_15__025a6a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__025a6a(void)

{
  _DAT_2a22_bd62 = 0;
  _DAT_2a22_bd64 = 0;
  _DAT_2a22_bd66 = 0x13f;
  _DAT_2a22_bd68 = 199;
  _DAT_3000_a390 = 0x9f;
  _DAT_3000_a392 = 99;
  FUN_11e1_0faa();
  *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 0;
  _DAT_3000_a398 = 0;
  _DAT_3000_a396 = 0;
  return;
}



/* ovl_15::025ab0 FUN_ovl_15__025ab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__025ab0(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_4;
  
  _DAT_3000_a396 = 0xffbf;
  _DAT_3000_a394 = 0;
  local_4 = 0;
  *_DAT_2a22_bd72 = 2;
  do {
    iVar1 = FUN_1090_147c();
  } while (iVar1 != 0);
  do {
    if (local_4 != 0) {
      FUN_11e1_0108();
      return;
    }
    uVar3 = 0x1090;
    FUN_1090_147c();
    if (_DAT_2a22_fd3c == 0x34) {
      _DAT_3000_a396 = 0;
    }
    else {
      if (_DAT_2a22_fd3c == 0x142) {
        uVar2 = 0x30;
      }
      else if (_DAT_2a22_fd3c == 0x17c) {
        uVar2 = 0x31;
      }
      else if (_DAT_2a22_fd3c == 0x1b6) {
        uVar2 = 0x32;
      }
      else {
        if (_DAT_2a22_fd3c != 0x1f0) goto LAB_ovl_15__025b0a;
        uVar2 = 0x33;
      }
      uVar3 = 0x1951;
      FUN_1951_017a(uVar2);
    }
LAB_ovl_15__025b0a:
    if (_DAT_2a22_fd3c < 0x34) {
      thunk_EXT_FUN_0000_0000(uVar3,2,0);
      FUN_1897_01ac(_DAT_2a22_bd72,0,0,0,0,0,0,0);
      dispatch_ovl_00_22dc_0000(1,0);
      FUN_1897_01ee();
    }
    local_4 = FUN_11e1_0208();
    FUN_11e1_02ec(0x11e1);
  } while( true );
}



/* ovl_15::025b84 FUN_ovl_15__025b84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__025b84(int param_1,int param_2)

{
  int iVar1;
  
  _DAT_3000_a396 = 0xffbf;
  _DAT_2a22_5b26 = 0;
  do {
    iVar1 = FUN_1090_147c();
  } while (iVar1 != 0);
  if (param_1 <= param_2) {
    return;
  }
  if (DAT_2a22_e326 == DAT_2a22_46f3) {
    FUN_ovl_15__025884();
  }
  *_DAT_2a22_bd72 = *_DAT_2a22_48d4;
  thunk_EXT_FUN_0000_0000(0x1090,*_DAT_2a22_48d4,0);
  FUN_1897_01ac(_DAT_2a22_bd72,0,0,0,0,0,0,0);
  dispatch_ovl_00_22dc_0000(1,0);
  FUN_1897_01ee();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1897,_DAT_2a22_48d4,0x28,param_1,_DAT_3000_d123);
}



/* ovl_15::025c7a FUN_ovl_15__025c7a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__025c7a(int param_1,int *param_2,char *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 uVar5;
  int local_10;
  int local_e;
  int local_c;
  char *local_a;
  char *local_8;
  undefined4 local_6;
  
  if (param_3 != (char *)0x0 || param_4 != 0) {
    local_8 = _DAT_3000_d12b;
    pcVar3 = local_8;
    do {
      local_8 = pcVar3;
      pcVar3 = local_8 + 1;
    } while (*local_8 != '\0');
    local_6 = (char *)CONCAT22(param_4,param_3);
    do {
      pcVar2 = local_6;
      local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
      cVar1 = *pcVar2;
      *local_8 = cVar1;
      local_8 = local_8 + 1;
    } while (cVar1 != '\0');
  }
  local_8 = _DAT_3000_d12b;
  local_c = 0;
  local_e = 0;
  local_10 = 0;
  uVar5 = 0x252a;
  while ((*local_8 != '\0' && (local_c < *(int *)(param_1 + 6)))) {
    iVar4 = thunk_EXT_FUN_0000_0000(uVar5,*(undefined2 *)(param_1 + 0x10),(int)*local_8);
    local_c = local_c + iVar4;
    if (*local_8 == ' ') {
      local_e = local_10;
    }
    local_8 = local_8 + 1;
    local_10 = local_10 + 1;
    uVar5 = 0x1eea;
  }
  if (*(int *)(param_1 + 6) <= local_c) {
    _DAT_3000_d12b[local_e] = '\0';
    thunk_EXT_FUN_0000_0000(uVar5,param_1,0,*param_2,_DAT_3000_d12b);
    iVar4 = thunk_EXT_FUN_0000_0000(0x1eea,*(undefined2 *)(param_1 + 0x10));
    *param_2 = *param_2 + iVar4;
    local_8 = _DAT_3000_d12b;
    local_a = _DAT_3000_d12b + local_e;
    do {
      local_a = local_a + 1;
      cVar1 = *local_a;
      *local_8 = cVar1;
      local_8 = local_8 + 1;
    } while (cVar1 != '\0');
    FUN_ovl_15__025c7a(param_1,param_2,0,0);
  }
  return;
}



/* ovl_15::025d8e FUN_ovl_15__025d8e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __cdecl16far FUN_ovl_15__025d8e(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar3 = _DAT_2a22_47a4 + _DAT_2a22_47a6 + _DAT_2a22_47a8 + _DAT_2a22_47aa;
  if (_DAT_2a22_e5c2 == 1) {
    uVar1 = 0x15 < iVar3;
    bVar5 = SBORROW2(iVar3,0x19);
    iVar2 = iVar3 + -0x19;
    bVar4 = iVar3 == 0x19;
  }
  else {
    if (_DAT_2a22_e5c2 != 2) {
      return 0;
    }
    uVar1 = 0x2d < iVar3;
    bVar5 = SBORROW2(iVar3,0x32);
    iVar2 = iVar3 + -0x32;
    bVar4 = iVar2 == 0;
  }
  if (!bVar4 && bVar5 == iVar2 < 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* ovl_15::025dea FUN_ovl_15__025dea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __cdecl16far FUN_ovl_15__025dea(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_8;
  int local_6;
  
  local_6 = 0;
  local_8 = 0;
  do {
    if ((((undefined *)&DAT_2a22_e3a5)[local_8 * 0x1d] != '\0') &&
       (*(char *)(_DAT_2a22_e5c2 + local_8 * 3 + 0x7c8a) != '\0')) {
      local_6 = local_6 + -1;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x11);
  if (_DAT_2a22_e5c2 == 1) {
    iVar2 = FUN_1000_08be(7);
    iVar3 = FUN_1000_08be(4);
    iVar4 = FUN_1000_08be(2);
    local_6 = local_6 + (-(uint)(iVar4 == 0) - (uint)(iVar3 == 0)) + (3 - (uint)(iVar2 == 0));
    uVar1 = local_6 < 1;
    bVar7 = SBORROW2(local_6,-1);
    local_6 = local_6 + 1;
  }
  else {
    if (_DAT_2a22_e5c2 != 2) {
      return 0;
    }
    iVar2 = FUN_1000_08be(0x12);
    iVar3 = FUN_1000_08be(0xc);
    iVar4 = FUN_1000_08be(2);
    iVar5 = FUN_1000_08be(0xb);
    iVar6 = FUN_1000_08be(9);
    local_6 = local_6 + ((((uint)(iVar5 != 0) - (uint)(iVar6 == 0)) + (uint)(iVar4 != 0)) -
                        (uint)(iVar3 == 0)) + (3 - (uint)(iVar2 == 0));
    uVar1 = local_6 < 2;
    bVar7 = SBORROW2(local_6,-2);
    local_6 = local_6 + 2;
  }
  if (bVar7 != local_6 < 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* ovl_15::025f24 FUN_ovl_15__025f24 */

/* WARNING: Removing unreachable block (ram,0x00025fe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__025f24(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  
  uVar10 = FUN_19c7_4f62(_DAT_2a22_fac5 + _DAT_2a22_ded0,
                         ((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
                         (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0),4,0);
  uVar11 = FUN_19c7_4f62(uVar10,0x1e,0);
  uVar12 = FUN_19c7_4ffe(uVar11,0x1e,0);
  uVar1 = (uint)uVar10 - (uint)uVar12;
  uVar3 = (uint)((uint)uVar10 < (uint)uVar12);
  uVar5 = (int)((ulong)uVar10 >> 0x10) - (int)((ulong)uVar12 >> 0x10);
  lVar13 = FUN_19c7_4f62(uVar11,0xc,0);
  iVar9 = (int)((ulong)lVar13 >> 0x10);
  uVar7 = (uint)lVar13;
  uVar2 = (uint)uVar11 + uVar7 * -0xc;
  uVar4 = (uint)((uint)uVar11 < uVar7 * 0xc);
  uVar6 = (int)((ulong)uVar11 >> 0x10) -
          ((((iVar9 << 1 | (uint)((int)uVar7 < 0)) + iVar9 + (uint)CARRY2(uVar7 * 2,uVar7)) * 2 |
           (uint)((int)(uVar7 * 3) < 0)) << 1 | (uint)((int)(uVar7 * 6) < 0));
  if (lVar13 != 0) {
    uVar8 = FUN_19c7_48e8(uVar7,0xa176,10);
    FUN_19c7_47cc(_DAT_3000_d12b,uVar8);
    FUN_19c7_47cc(_DAT_3000_d12b,0x7f29);
    if (1 < lVar13) {
      FUN_19c7_47cc(_DAT_3000_d12b,0x7f2f);
    }
    if ((uVar2 == 0 && uVar6 == uVar4) && (uVar1 == 0 && uVar5 == uVar3)) {
      uVar8 = 0x7f34;
    }
    else {
      uVar8 = 0x7f31;
    }
    FUN_19c7_47cc(_DAT_3000_d12b,uVar8);
  }
  if (uVar2 != 0 || uVar6 != uVar4) {
    uVar8 = FUN_19c7_48e8(uVar2,0xa176,10);
    FUN_19c7_47cc(_DAT_3000_d12b,uVar8);
    FUN_19c7_47cc(_DAT_3000_d12b,0x7f36);
    if ((-1 < (int)(uVar6 - uVar4)) && ((0 < (int)(uVar6 - uVar4) || (1 < uVar2)))) {
      FUN_19c7_47cc(_DAT_3000_d12b,0x7f3d);
    }
    if (uVar1 == 0 && uVar5 == uVar3) {
      uVar8 = 0x7f42;
    }
    else {
      uVar8 = 0x7f3f;
    }
    FUN_19c7_47cc(_DAT_3000_d12b,uVar8);
  }
  if (uVar1 != 0 || uVar5 != uVar3) {
    uVar8 = FUN_19c7_48e8(uVar1,0xa176,10);
    FUN_19c7_47cc(_DAT_3000_d12b,uVar8);
    FUN_19c7_47cc(_DAT_3000_d12b,0x7f44);
    if ((-1 < (int)(uVar5 - uVar3)) && ((0 < (int)(uVar5 - uVar3) || (1 < uVar1)))) {
      FUN_19c7_47cc(_DAT_3000_d12b,0x7f49);
    }
    FUN_19c7_47cc(_DAT_3000_d12b,0x7f4b);
  }
  return;
}



/* ovl_15::0260fe FUN_ovl_15__0260fe */

/* WARNING: Removing unreachable block (ram,0x000261f2) */
/* WARNING: Removing unreachable block (ram,0x000261bb) */
/* WARNING: Removing unreachable block (ram,0x000261ce) */
/* WARNING: Removing unreachable block (ram,0x00026241) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_15__0260fe(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined2 local_1a;
  undefined2 local_18;
  undefined4 local_16;
  uint local_12;
  int local_10;
  int local_e;
  uint local_c;
  long local_6;
  
  local_16._2_2_ = 0;
  local_16._0_2_ = 0;
  local_6 = FUN_19c7_4f62(_DAT_2a22_fac5 + _DAT_2a22_ded0,
                          ((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
                          (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0),4,0);
  lVar3 = CONCAT22(local_16._2_2_,(undefined2)local_16);
  if (_DAT_2a22_e5c2 == 1) {
    local_1a = 0x76c;
    local_e = 100;
  }
  else {
    if (_DAT_2a22_e5c2 != 2) goto LAB_ovl_15__02614e;
    local_1a = 4000;
    local_e = 200;
  }
  local_18 = 0;
  local_c = 0;
LAB_ovl_15__02614e:
  local_6 = local_6 - CONCAT22(local_18,local_1a);
  local_10 = 0;
  for (local_12 = 0; (local_10 < 1 && ((local_10 < 0 || (local_12 < 3)))); local_12 = local_12 + 1)
  {
    if (0 < local_6) {
      iVar4 = local_e;
      uVar1 = local_c;
      cVar5 = (char)local_12;
      lVar2 = local_6;
      if (CONCAT22(local_c,local_e) < local_6) {
        for (; lVar2 = CONCAT22(uVar1,iVar4), cVar5 != '\0'; cVar5 = cVar5 + -1) {
          bVar6 = iVar4 < 0;
          iVar4 = iVar4 << 1;
          uVar1 = uVar1 << 1 | (uint)bVar6;
        }
      }
      else {
        for (; cVar5 != '\0'; cVar5 = cVar5 + -1) {
          lVar2 = CONCAT22((int)((ulong)lVar2 >> 0x10) << 1 | (uint)((int)lVar2 < 0),(int)lVar2 << 1
                          );
        }
      }
      lVar3 = lVar2 + lVar3;
      local_6 = local_6 - CONCAT22(local_c,local_e);
    }
    local_10 = local_10 + (uint)(0xfffe < local_12);
  }
  if (0 < local_6) {
    cVar5 = '\x03';
    lVar2 = local_6;
    do {
      lVar2 = CONCAT22((int)((ulong)lVar2 >> 0x10) << 1 | (uint)((int)lVar2 < 0),(int)lVar2 * 2);
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    lVar3 = lVar3 + lVar2;
  }
  local_16 = 0;
  if (lVar3 != 0) {
    local_16 = lVar3;
    iVar4 = FUN_19c7_4e32();
    local_16 = local_16 + iVar4 % 10;
  }
  FUN_19c7_5032(&local_16,1000,0);
  if (0x60 < local_16) {
    local_16._0_2_ = 0x60;
  }
  return (undefined2)local_16;
}



/* ovl_15::026258 FUN_ovl_15__026258 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_15__026258(void)

{
  int iVar1;
  
  iVar1 = FUN_1090_01ae();
  if (_DAT_2a22_e5c2 == 1) {
    if (0x5f < iVar1) {
      return 1;
    }
  }
  else {
    if (_DAT_2a22_e5c2 != 2) {
      return 0;
    }
    if (0x15e < iVar1) {
      if (iVar1 < 0x191) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}



/* ovl_15::0262a8 FUN_ovl_15__0262a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ovl_15__0262a8(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_4;
  
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    local_4 = _DAT_2a22_4914;
    FUN_ovl_15__0252a0(10,0,0,0);
    FUN_1eea_0004(10,1,local_4 + 0x24,0x2e67);
  }
  _DAT_2a22_48d4[6] = 10;
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    _DAT_2a22_48d4[6] = 1;
  }
  _DAT_2a22_48d4[8] = 4;
  local_c = 0;
  *_DAT_3000_d12b = 0;
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x22) + _DAT_3000_d127,
                     _DAT_3000_d129);
  uVar1 = FUN_19c7_48e8(_DAT_2a22_47a4 + _DAT_2a22_47a6 + _DAT_2a22_47a8 + _DAT_2a22_47aa,0xa176,10)
  ;
  FUN_19c7_47cc(_DAT_3000_d12b,uVar1);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x24) + _DAT_3000_d127,
                     _DAT_3000_d129);
  uVar1 = FUN_19c7_48e8(_DAT_2a22_47a4,0xa176,10);
  FUN_19c7_47cc(_DAT_3000_d12b,uVar1);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x26) + _DAT_3000_d127,
                     _DAT_3000_d129);
  uVar1 = FUN_19c7_48e8(_DAT_2a22_47a8,0xa176,10);
  FUN_19c7_47cc(_DAT_3000_d12b,uVar1);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x28) + _DAT_3000_d127,
                     _DAT_3000_d129);
  uVar1 = FUN_19c7_48e8(_DAT_2a22_47a6,0xa176,10);
  FUN_19c7_47cc(_DAT_3000_d12b,uVar1);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x2a) + _DAT_3000_d127,
                     _DAT_3000_d129);
  uVar1 = FUN_19c7_48e8(_DAT_2a22_47aa,0xa176,10);
  FUN_19c7_47cc(_DAT_3000_d12b,uVar1);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x2c) + _DAT_3000_d127,
                     _DAT_3000_d129);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x2e) + _DAT_3000_d127,
                     _DAT_3000_d129);
  iVar2 = FUN_ovl_15__025d8e();
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,
                     *(int *)(_DAT_3000_d125 + iVar2 * 2 + 0x58) + _DAT_3000_d127,_DAT_3000_d129);
  thunk_EXT_FUN_0000_0000(0x19c7,_DAT_2a22_48d4,0,local_c,_DAT_3000_d12b);
  iVar2 = thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_48d4[8]);
  local_c = local_c + iVar2 * 2;
  *_DAT_3000_d12b = 0;
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x30) + _DAT_3000_d127,
                     _DAT_3000_d129);
  local_8 = 0;
  local_a = 0;
  do {
    iVar2 = FUN_1000_08be(local_a + 2);
    if ((iVar2 == 0) && (*(char *)(_DAT_2a22_e5c2 + local_a * 3 + 0x7c8a) != '\0')) {
      local_8 = local_8 + 1;
    }
    local_a = local_a + 1;
  } while (local_a < 0x11);
  uVar1 = FUN_19c7_48e8(local_8,0xa176,10);
  FUN_19c7_47cc(_DAT_3000_d12b,uVar1);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x32) + _DAT_3000_d127,
                     _DAT_3000_d129);
  if (local_8 == 0) {
    FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,0x7f4d,0x2e67);
  }
  else {
    FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x34) + _DAT_3000_d127,
                       _DAT_3000_d129);
    local_e = 0;
    local_a = 0;
    do {
      iVar2 = FUN_1000_08be(local_a + 2);
      if ((iVar2 == 0) && (*(char *)(_DAT_2a22_e5c2 + local_a * 3 + 0x7c8a) != '\0')) {
        FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,
                           *(int *)(local_a * 2 + _DAT_3000_d125) + _DAT_3000_d127,_DAT_3000_d129);
        if (local_e < local_8 + -2) {
          FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,0x7f50,0x2e67);
        }
        if (local_8 + -2 == local_e) {
          FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,0x7f53,0x2e67);
        }
        if (local_8 + -1 == local_e) {
          FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,0x7f59,0x2e67);
        }
        local_e = local_e + 1;
      }
      local_a = local_a + 1;
    } while (local_a < 0x11);
  }
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x36) + _DAT_3000_d127,
                     _DAT_3000_d129);
  local_8 = 0;
  local_a = 0;
  do {
    if ((((undefined *)&DAT_2a22_e3a5)[local_a * 0x1d] != '\0') &&
       (*(char *)(_DAT_2a22_e5c2 + local_a * 3 + 0x7c8a) != '\0')) {
      local_8 = local_8 + 1;
    }
    local_a = local_a + 1;
  } while (local_a < 0x11);
  uVar1 = FUN_19c7_48e8(local_8,0xa176,10);
  FUN_19c7_47cc(_DAT_3000_d12b,uVar1);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x38) + _DAT_3000_d127,
                     _DAT_3000_d129);
  if (local_8 == 1) {
    uVar1 = 0x7f5c;
  }
  else {
    uVar1 = 0x7f5e;
  }
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,uVar1,0x2e67);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 100) + _DAT_3000_d127,
                     _DAT_3000_d129);
  if (local_8 == 0) {
    FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,0x7f62,0x2e67);
  }
  else {
    FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x3a) + _DAT_3000_d127,
                       _DAT_3000_d129);
    local_e = 0;
    local_a = 0;
    do {
      if ((((undefined *)&DAT_2a22_e3a5)[local_a * 0x1d] != '\0') &&
         (*(char *)(_DAT_2a22_e5c2 + local_a * 3 + 0x7c8a) != '\0')) {
        FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,
                           *(int *)(local_a * 2 + _DAT_3000_d125) + _DAT_3000_d127,_DAT_3000_d129);
        if (local_e < local_8 + -2) {
          FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,0x7f65,0x2e67);
        }
        if (local_8 + -2 == local_e) {
          FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,0x7f68,0x2e67);
        }
        if (local_8 + -1 == local_e) {
          FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,0x7f6e,0x2e67);
        }
        local_e = local_e + 1;
      }
      local_a = local_a + 1;
    } while (local_a < 0x11);
  }
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x3c) + _DAT_3000_d127,
                     _DAT_3000_d129);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,
                     *(int *)(_DAT_3000_d125 + _DAT_2a22_e5c2 * 2 + 0x52) + _DAT_3000_d127,
                     _DAT_3000_d129);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x3e) + _DAT_3000_d127,
                     _DAT_3000_d129);
  iVar2 = FUN_ovl_15__025dea();
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,
                     *(int *)(_DAT_3000_d125 + iVar2 * 2 + 0x5e) + _DAT_3000_d127,_DAT_3000_d129);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x40) + _DAT_3000_d127,
                     _DAT_3000_d129);
  thunk_EXT_FUN_0000_0000(0x19c7,_DAT_2a22_48d4,0,local_c,_DAT_3000_d12b);
  uVar1 = 0x1eea;
  iVar2 = thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_48d4[8]);
  local_c = local_c + iVar2 * 2;
  *_DAT_3000_d12b = 0;
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x42) + _DAT_3000_d127,
                     _DAT_3000_d129);
  FUN_ovl_15__025f24();
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x44) + _DAT_3000_d127,
                     _DAT_3000_d129);
  iVar2 = FUN_ovl_15__0260fe();
  if (iVar2 != 0) {
    FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x66) + _DAT_3000_d127,
                       _DAT_3000_d129);
    uVar1 = FUN_ovl_15__0260fe(0xa176,10);
    uVar3 = FUN_19c7_48e8(uVar1);
    uVar1 = 0x19c7;
    FUN_19c7_47cc(_DAT_3000_d12b,uVar3);
    FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,*(int *)(_DAT_3000_d125 + 0x46) + _DAT_3000_d127,
                       _DAT_3000_d129);
  }
  thunk_EXT_FUN_0000_0000(uVar1,_DAT_2a22_48d4,0,local_c,_DAT_3000_d12b);
  iVar2 = thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_48d4[8]);
  local_c = local_c + iVar2 * 2;
  *_DAT_3000_d12b = 0;
  local_a = FUN_ovl_15__026258();
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,
                     *(int *)(_DAT_3000_d125 + local_a * 4 + 0x48) + _DAT_3000_d127,_DAT_3000_d129);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,
                     *(int *)(_DAT_3000_d125 + _DAT_2a22_e5c2 * 2 + 0x52) + _DAT_3000_d127,
                     _DAT_3000_d129);
  FUN_ovl_15__025c7a(_DAT_2a22_48d4,&local_c,
                     *(int *)(_DAT_3000_d125 + local_a * 4 + 0x4a) + _DAT_3000_d127,_DAT_3000_d129);
  thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_48d4,0,local_c,_DAT_3000_d12b);
  iVar2 = thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_48d4[8]);
  local_c = local_c + iVar2 * 2;
  *_DAT_3000_d12b = 0;
  FUN_19c7_480c(_DAT_3000_d12b,0x7f71);
  thunk_EXT_FUN_0000_0000(0x19c7,_DAT_2a22_48d4,0,local_c,_DAT_3000_d12b);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,*_DAT_2a22_48d4);
}



/* ovl_15::026b38 FUN_ovl_15__026b38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__026b38(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = _DAT_2a22_4914;
  do {
    FUN_ovl_15__0252a0(10,0,iVar1,0,iVar1,iVar2);
    FUN_1eea_0004(10,1,iVar2 + 0x24,0x2e67);
    FUN_1951_0006(1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return;
}



/* ovl_15::026b8c FUN_ovl_15__026b8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_15__026b8c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x3f;
  iVar2 = _DAT_2a22_4914;
  do {
    FUN_ovl_15__0252a0(10,0,iVar1,0,iVar1,iVar2);
    FUN_1eea_0004(10,1,iVar2 + 0x24,0x2e67);
    FUN_1951_0006(1);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}



/* ovl_15::026bdc ovl_15_entry_252a_193c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_15_entry_252a_193c(void)

{
  int iVar1;
  
  _DAT_3000_d123 = 0;
  FUN_ovl_15__0259c8();
  FUN_ovl_15__025a6a();
  FUN_1951_017a(0x2f);
  FUN_ovl_15__025ab0();
  FUN_ovl_15__0262a8(0x1951);
  FUN_1951_017a(0x37);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_15__026b38();
  }
  do {
    iVar1 = FUN_1090_147c();
  } while (iVar1 != 0);
  do {
    iVar1 = FUN_1090_147c();
  } while (iVar1 == 0);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_15__026b8c();
    FUN_ovl_15__0252a0(0x40,0,0,0);
    FUN_ovl_15__0252a0(0x5f,0,0,0);
    FUN_ovl_15__0252e8(0x40,0x5f);
  }
  else if (DAT_2a22_e326 == DAT_2a22_46f1) {
    thunk_EXT_FUN_0000_0000(0x1090,0,0x7d06);
    FUN_ovl_15__0254aa();
  }
  else {
    thunk_EXT_FUN_0000_0000(0x1090,0x7cbe);
  }
  FUN_ovl_15__025b84(0x7d,1);
  iVar1 = FUN_ovl_15__026258();
  if (iVar1 == 0) {
    if (DAT_2a22_5ae4 != '\0') {
      FUN_1951_017a(0x34);
      do {
        iVar1 = (*_DAT_2a22_c0d6)(0x1951);
      } while (iVar1 == 0);
    }
    FUN_ovl_15__02575a();
  }
  else if (iVar1 == 1) {
    if (DAT_2a22_5ae4 != '\0') {
      FUN_1951_017a(0x35);
      do {
        iVar1 = (*_DAT_2a22_c0d6)(0x1951);
      } while (iVar1 == 0);
    }
    FUN_ovl_15__025648();
  }
  else if (iVar1 == 2) {
    if (DAT_2a22_5ae4 != '\0') {
      FUN_1951_017a(0x36);
      do {
        iVar1 = (*_DAT_2a22_c0d6)(0x1951);
      } while (iVar1 == 0);
    }
    FUN_ovl_15__025504();
  }
  do {
    iVar1 = FUN_1090_147c();
  } while (iVar1 != 0);
  _DAT_2a22_5b26 = 0;
  while ((iVar1 = FUN_1090_147c(), iVar1 == 0 && (_DAT_2a22_5b26 < 600))) {
    if (DAT_2a22_e326 == DAT_2a22_46f3) {
      FUN_ovl_15__025884();
    }
    FUN_1951_0006(3);
  }
  FUN_ovl_15__025b84(1,0xff38);
  FUN_1951_017a(1);
  FUN_1000_0332();
  return;
}


