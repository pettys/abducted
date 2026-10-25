/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_17::0290a0 FUN_ovl_17__0290a0 */

void __cdecl16far FUN_ovl_17__0290a0(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_3000_d130 = 1;
  if (DAT_2a22_e3c2 == '\0') {
    iVar1 = dispatch_ovl_13_2558_0d62(0,1,0);
    if (iVar1 == 0) {
      DAT_3000_d12f = 5;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d12f = 0xb;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d12f = 0xc;
      return;
    }
    if (iVar1 == 3) {
      DAT_3000_d12f = 0xe;
      return;
    }
    bVar2 = iVar1 == 4;
  }
  else {
    iVar1 = dispatch_ovl_13_2558_0d62(1,1,0);
    if (iVar1 == 0) {
      DAT_3000_d12f = 0xb;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d12f = 0xc;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d12f = 0xe;
      return;
    }
    bVar2 = iVar1 == 3;
  }
  if (bVar2) {
    DAT_3000_d12f = 0xd;
    return;
  }
  return;
}



/* ovl_17::029118 FUN_ovl_17__029118 */

void __cdecl16far FUN_ovl_17__029118(void)

{
  int iVar1;
  
  DAT_3000_d130 = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(2,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12f = 0xb;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12f = 6;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12f = 0xe;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12f = 0xd;
    return;
  }
  return;
}



/* ovl_17::02915c FUN_ovl_17__02915c */

void __cdecl16far FUN_ovl_17__02915c(void)

{
  int iVar1;
  
  DAT_3000_d130 = 3;
  iVar1 = dispatch_ovl_13_2558_0d62(3,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12f = 0xb;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12f = 6;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12f = 0xe;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12f = 0xd;
    return;
  }
  return;
}



/* ovl_17::0291a0 FUN_ovl_17__0291a0 */

void __cdecl16far FUN_ovl_17__0291a0(void)

{
  int iVar1;
  
  DAT_3000_d130 = 4;
  iVar1 = dispatch_ovl_13_2558_0d62(4,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12f = 0xe;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12f = 0xd;
    return;
  }
  return;
}



/* ovl_17::0291ce FUN_ovl_17__0291ce */

void __cdecl16far FUN_ovl_17__0291ce(void)

{
  int iVar1;
  
  DAT_2a22_e3c2 = 1;
  dispatch_ovl_06_22dc_03d6();
  DAT_3000_d130 = 5;
  iVar1 = dispatch_ovl_13_2558_0d62(5,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12f = 0xb;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12f = 0xc;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12f = 0xe;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12f = 0xd;
    return;
  }
  return;
}



/* ovl_17::02921c FUN_ovl_17__02921c */

void __cdecl16far FUN_ovl_17__02921c(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_3000_d130 = 6;
  if (DAT_2a22_e32b == '\x02') {
    iVar1 = dispatch_ovl_13_2558_0d62(7,1,0);
    if (iVar1 == 0) {
      DAT_3000_d12f = 8;
      return;
    }
  }
  else {
    if (DAT_2a22_e32b == '\x03') {
      iVar1 = dispatch_ovl_13_2558_0d62(8,1,0);
      if (iVar1 == 0) {
        DAT_3000_d12f = 0xb;
        return;
      }
      if (iVar1 == 1) {
        DAT_3000_d12f = 0xe;
        return;
      }
      bVar2 = iVar1 == 2;
      goto LAB_ovl_17__029263;
    }
    if (DAT_2a22_e32b != '\x04') {
      iVar1 = dispatch_ovl_13_2558_0d62(6,1,0);
      if (iVar1 == 0) {
        DAT_3000_d12f = 7;
        return;
      }
      if (iVar1 == 1) {
        DAT_3000_d12f = 8;
        return;
      }
      if (iVar1 == 2) {
        DAT_3000_d12f = 0xb;
        return;
      }
      if (iVar1 == 3) {
        DAT_3000_d12f = 0xe;
        return;
      }
      bVar2 = iVar1 == 4;
      goto LAB_ovl_17__029263;
    }
    iVar1 = dispatch_ovl_13_2558_0d62(9,1,0);
    if (iVar1 == 0) {
      DAT_3000_d12f = 7;
      return;
    }
  }
  if (iVar1 == 1) {
    DAT_3000_d12f = 0xb;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12f = 0xe;
    return;
  }
  bVar2 = iVar1 == 3;
LAB_ovl_17__029263:
  if (bVar2) {
    DAT_3000_d12f = 0xd;
    return;
  }
  return;
}



/* ovl_17::0292e6 FUN_ovl_17__0292e6 */

void __cdecl16far FUN_ovl_17__0292e6(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_3000_d130 = 7;
  if (DAT_2a22_e3fd == '\0') {
    iVar1 = dispatch_ovl_13_2558_0d62(10,1,0);
    if (iVar1 == 0) {
      DAT_3000_d12f = 0xb;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d12f = 8;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d12f = 0xe;
      return;
    }
    bVar2 = iVar1 == 3;
  }
  else {
    iVar1 = dispatch_ovl_13_2558_0d62(0xb,1,0);
    if (iVar1 == 0) {
      DAT_3000_d12f = 0xb;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d12f = 0xe;
      return;
    }
    bVar2 = iVar1 == 2;
  }
  if (bVar2) {
    DAT_3000_d12f = 0xd;
    return;
  }
  return;
}



/* ovl_17::029352 FUN_ovl_17__029352 */

void __cdecl16far FUN_ovl_17__029352(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_3000_d130 = 8;
  if ((DAT_2a22_e32b < '\x03') || ('\x04' < DAT_2a22_e32b)) {
    iVar1 = dispatch_ovl_13_2558_0d62(0xc,1,0);
    if (iVar1 == 0) {
      DAT_3000_d12f = 0xb;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d12f = 7;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d12f = 0xe;
      return;
    }
    bVar2 = iVar1 == 3;
  }
  else {
    iVar1 = dispatch_ovl_13_2558_0d62(0xd,1,0);
    if (iVar1 == 0) {
      DAT_3000_d12f = 0xb;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d12f = 0xe;
      return;
    }
    bVar2 = iVar1 == 2;
  }
  if (bVar2) {
    DAT_3000_d12f = 0xd;
    return;
  }
  return;
}



/* ovl_17::0293c6 FUN_ovl_17__0293c6 */

void __cdecl16far FUN_ovl_17__0293c6(void)

{
  int iVar1;
  
  DAT_3000_d130 = 9;
  iVar1 = dispatch_ovl_13_2558_0d62(0xe,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12f = 0xc;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12f = 0xb;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12f = 0xe;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12f = 0xd;
    return;
  }
  return;
}



/* ovl_17::02940a FUN_ovl_17__02940a */

void __cdecl16far FUN_ovl_17__02940a(void)

{
  int iVar1;
  
  iVar1 = dispatch_ovl_13_2558_0d62(0xf,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12f = 9;
    DAT_2a22_f27b = 1;
    DAT_2a22_e3fd = 1;
    dispatch_ovl_06_22dc_03d6();
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12f = 0xe;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12f = 0xd;
    return;
  }
  return;
}



/* ovl_17::02944e FUN_ovl_17__02944e */

void __cdecl16far FUN_ovl_17__02944e(void)

{
  dispatch_ovl_12_252a_36c2(1);
  DAT_3000_d12f = DAT_3000_d130;
  return;
}



/* ovl_17::029462 FUN_ovl_17__029462 */

void __cdecl16far FUN_ovl_17__029462(void)

{
  bool bVar1;
  undefined2 uVar2;
  undefined1 local_6;
  undefined1 local_4;
  
  bVar1 = false;
  local_6 = 0x10;
LAB_ovl_17__029470:
  local_4 = 1;
  do {
    if (bVar1) {
      DAT_3000_d12f = DAT_3000_d130;
      return;
    }
    uVar2 = dispatch_ovl_13_2558_0d62(local_6,local_4,0);
    switch(uVar2) {
    case 0:
      goto switchD_ovl_17__029495_caseD_0;
    case 1:
      local_6 = 0x12;
      local_4 = 2;
      break;
    case 2:
      local_4 = 3;
      if (DAT_2a22_e3fd == '\0') {
        local_6 = 0x13;
      }
      else {
        local_6 = 0x14;
      }
      break;
    case 3:
      local_6 = 0x15;
      local_4 = 4;
      break;
    case 4:
      local_6 = 0x16;
      local_4 = 5;
      break;
    case 5:
      local_6 = 0x17;
      local_4 = 6;
      break;
    case 6:
      bVar1 = true;
    }
  } while( true );
switchD_ovl_17__029495_caseD_0:
  local_6 = 0x11;
  goto LAB_ovl_17__029470;
}



/* ovl_17::029508 ovl_17_entry_290a_0468 */

void __cdecl16far ovl_17_entry_290a_0468(void)

{
  FUN_1090_12ec(9,1);
  FUN_1090_12ec(10,1);
  FUN_1090_12ec(1,1);
  return;
}



/* ovl_17::029536 FUN_ovl_17__029536 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_17__029536(void)

{
  _DAT_2a22_e333 = 2;
  DAT_3000_d12f = 0xe;
  return;
}



/* ovl_17::029542 FUN_ovl_17__029542 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_17__029542(int param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1eea_0004(param_2,param_3,
                (param_1 - (uint)*(byte *)(_DAT_2a22_4914 + 4)) * 3 + _DAT_2a22_4914 + 6,0x2e67);
  return;
}



/* ovl_17::02957c FUN_ovl_17__02957c */

void __cdecl16far FUN_ovl_17__02957c(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (param_1 + -1) / 6;
  if (iVar1 == 1) {
    FUN_ovl_17__029542(0x26,0x21,4);
    uVar2 = 0x40;
  }
  else if (iVar1 == 2) {
    FUN_ovl_17__029542(0x2b,0x21,4);
    uVar2 = 0x50;
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    FUN_ovl_17__029542(0x71,0x21,4);
    uVar2 = 0x60;
  }
  FUN_ovl_17__029542(uVar2,0x30,0x10);
  return;
}



/* ovl_17::029602 ovl_17_entry_290a_0562 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_17_entry_290a_0562(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  FUN_20a6_02a8(4,2,0x7fb3);
  FUN_1000_038c(0x7fbe);
  dispatch_ovl_13_2558_00d4(0x7fc9,param_1);
  _DAT_3000_d102 = (undefined *)&DAT_2a22_e3c2;
  FUN_1951_017a(0x1f);
  DAT_2a22_e3c0 = DAT_2a22_e3c0 + '\x01';
  dispatch_ovl_06_22dc_03d6();
  iVar2 = (int)DAT_2a22_e3bb;
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_17__02957c(iVar2);
  }
  if (DAT_2a22_e32b == '\x05') {
    DAT_3000_d12f = 10;
  }
  else {
    iVar3 = (DAT_2a22_e3bb + -1) / 6;
    if (iVar3 == 0) {
      DAT_3000_d12f = 1;
    }
    else if (iVar3 == 1) {
      DAT_3000_d12f = 2;
    }
    else if (iVar3 == 2) {
      DAT_3000_d12f = 3;
    }
    else if (iVar3 == 3) {
      DAT_3000_d12f = 4;
    }
  }
  while (!bVar1) {
    switch(DAT_3000_d12f) {
    case 1:
      FUN_ovl_17__0290a0();
      break;
    case 2:
      FUN_ovl_17__029118();
      break;
    case 3:
      FUN_ovl_17__02915c();
      break;
    case 4:
      FUN_ovl_17__0291a0();
      break;
    case 5:
      FUN_ovl_17__0291ce();
      break;
    case 6:
      FUN_ovl_17__02921c();
      break;
    case 7:
      FUN_ovl_17__0292e6();
      break;
    case 8:
      FUN_ovl_17__029352();
      break;
    case 9:
      FUN_ovl_17__0293c6();
      break;
    case 10:
      FUN_ovl_17__02940a();
      break;
    case 0xb:
      FUN_ovl_17__029462();
      break;
    case 0xc:
      FUN_ovl_17__02944e();
      dispatch_ovl_13_2558_0066(param_1);
      if (DAT_2a22_e326 == DAT_2a22_46f4) {
        FUN_ovl_17__02957c(iVar2);
      }
      break;
    case 0xd:
      FUN_ovl_17__029536();
      break;
    case 0xe:
      bVar1 = true;
    }
  }
  FUN_1000_036e();
  FUN_1951_017a(1);
  return;
}


