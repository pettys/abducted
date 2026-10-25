/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_34::0290a0 FUN_ovl_34__0290a0 */

void __cdecl16far FUN_ovl_34__0290a0(void)

{
  int iVar1;
  
  DAT_3000_d13c = 1;
  DAT_3000_d13d = 0;
  iVar1 = dispatch_ovl_13_2558_0d62(0,1,0);
  if (iVar1 == 0) {
    DAT_3000_d13b = 8;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 0x62;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d13b = 7;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d13b = 0x61;
    return;
  }
  return;
}



/* ovl_34::0290f4 FUN_ovl_34__0290f4 */

void __cdecl16far FUN_ovl_34__0290f4(void)

{
  int iVar1;
  
  DAT_3000_d13c = 2;
  DAT_3000_d13d = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(1,1,1);
  if (iVar1 == 0) {
    DAT_3000_d13b = 0xd;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 5;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d13b = 7;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d13b = 0x61;
    return;
  }
  return;
}



/* ovl_34::029144 FUN_ovl_34__029144 */

void __cdecl16far FUN_ovl_34__029144(void)

{
  int iVar1;
  
  DAT_3000_d13c = 3;
  DAT_3000_d13d = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(2,1,1);
  if (iVar1 == 0) {
    DAT_3000_d13b = 0x12;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 6;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d13b = 7;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d13b = 0x61;
    return;
  }
  return;
}



/* ovl_34::029196 FUN_ovl_34__029196 */

void __cdecl16far FUN_ovl_34__029196(void)

{
  int iVar1;
  
  DAT_3000_d13c = 4;
  DAT_3000_d13d = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(3,1,2);
  if (iVar1 == 0) {
    DAT_3000_d13b = 99;
  }
  else if (iVar1 == 1) {
    DAT_3000_d13b = 0x61;
    return;
  }
  return;
}



/* ovl_34::0291ca FUN_ovl_34__0291ca */

void __cdecl16far FUN_ovl_34__0291ca(void)

{
  int iVar1;
  
  DAT_3000_d13c = 5;
  DAT_3000_d13d = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(4,1,1);
  if (iVar1 == 0) {
    DAT_3000_d13b = 0x62;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 0x61;
    return;
  }
  return;
}



/* ovl_34::0291fc FUN_ovl_34__0291fc */

void __cdecl16far FUN_ovl_34__0291fc(void)

{
  int iVar1;
  
  DAT_3000_d13c = 6;
  DAT_3000_d13d = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(5,1,2);
  if (iVar1 == 0) {
    DAT_3000_d13b = 0x12;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d13b = 0x61;
    return;
  }
  return;
}



/* ovl_34::02923c FUN_ovl_34__02923c */

void __cdecl16far FUN_ovl_34__02923c(void)

{
  int iVar1;
  
  DAT_3000_d13c = 7;
  DAT_3000_d13d = 2;
  DAT_2a22_e56e = DAT_2a22_e56e + '\x06';
  iVar1 = dispatch_ovl_13_2558_0d62(6,1,2);
  if (iVar1 == 0) {
    DAT_3000_d13b = 99;
  }
  else if (iVar1 == 1) {
    DAT_3000_d13b = 0x61;
    return;
  }
  return;
}



/* ovl_34::029274 FUN_ovl_34__029274 */

void __cdecl16far FUN_ovl_34__029274(void)

{
  bool bVar1;
  int local_8;
  int local_4;
  
  bVar1 = false;
  local_4 = 8;
  local_8 = 0;
  while (!bVar1) {
    local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_3000_d13d);
    if (local_8 == 0) {
      local_4 = 9;
    }
    else if (local_8 == 1) {
      local_4 = 10;
    }
    else if (local_8 == 2) {
      local_4 = 0xb;
    }
    else if (local_8 == 3) {
      local_4 = 0xc;
    }
    else if (local_8 == 4) {
      bVar1 = true;
    }
  }
  DAT_3000_d13b = DAT_3000_d13c;
  return;
}



/* ovl_34::0292f6 FUN_ovl_34__0292f6 */

void __cdecl16far FUN_ovl_34__0292f6(void)

{
  bool bVar1;
  int local_8;
  int local_4;
  
  bVar1 = false;
  local_4 = 0xd;
  local_8 = 0;
  while (!bVar1) {
    local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_3000_d13d);
    if (local_8 == 0) {
      local_4 = 0xe;
    }
    else if (local_8 == 1) {
      local_4 = 0xf;
    }
    else if (local_8 == 2) {
      local_4 = 0x10;
    }
    else if (local_8 == 3) {
      local_4 = 0x11;
    }
    else if (local_8 == 4) {
      bVar1 = true;
    }
  }
  DAT_3000_d13b = DAT_3000_d13c;
  return;
}



/* ovl_34::029378 FUN_ovl_34__029378 */

void __cdecl16far FUN_ovl_34__029378(void)

{
  bool bVar1;
  int local_8;
  int local_4;
  
  bVar1 = false;
  local_4 = 0x12;
  local_8 = 0;
  while (!bVar1) {
    local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_3000_d13d);
    if (local_8 == 0) {
      local_4 = 0x13;
    }
    else if (local_8 == 1) {
      local_4 = 0x14;
    }
    else if (local_8 == 2) {
      local_4 = 0x15;
    }
    else if (local_8 == 3) {
      bVar1 = true;
    }
  }
  DAT_3000_d13b = DAT_3000_d13c;
  return;
}



/* ovl_34::0293ee FUN_ovl_34__0293ee */

void __cdecl16far FUN_ovl_34__0293ee(void)

{
  dispatch_ovl_12_252a_36c2(0x10);
  DAT_3000_d13b = DAT_3000_d13c;
  return;
}



/* ovl_34::029402 FUN_ovl_34__029402 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_34__029402(void)

{
  _DAT_2a22_e333 = 2;
  DAT_3000_d13b = 99;
  return;
}



/* ovl_34::02940e ovl_34_entry_290a_036e */

void __cdecl16far ovl_34_entry_290a_036e(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  FUN_20a6_02a8(4,0x11,0x82f2);
  FUN_1000_038c(0x82fd);
  dispatch_ovl_13_2558_00d4(0x8307,param_1);
  FUN_1951_017a(0x2e);
  DAT_2a22_e573 = DAT_2a22_e573 + '\x01';
  iVar2 = (DAT_2a22_e56e + -1) / 6;
  if (iVar2 == 0) {
    DAT_3000_d13b = '\x01';
  }
  else if (iVar2 == 1) {
    DAT_3000_d13b = '\x02';
  }
  else if (iVar2 == 2) {
    DAT_3000_d13b = '\x03';
  }
  else {
    DAT_3000_d13b = '\x04';
  }
  while (!bVar1) {
    if (DAT_3000_d13b == '\x06') {
      FUN_ovl_34__0291fc();
    }
    else if (DAT_3000_d13b < '\a') {
      if (DAT_3000_d13b == '\x01') {
        FUN_ovl_34__0290a0();
      }
      else if (DAT_3000_d13b == '\x02') {
        FUN_ovl_34__0290f4();
      }
      else if (DAT_3000_d13b == '\x03') {
        FUN_ovl_34__029144();
      }
      else if (DAT_3000_d13b == '\x04') {
        FUN_ovl_34__029196();
      }
      else if (DAT_3000_d13b == '\x05') {
        FUN_ovl_34__0291ca();
      }
    }
    else if (DAT_3000_d13b == '\r') {
      FUN_ovl_34__0292f6();
    }
    else if (DAT_3000_d13b < '\x0e') {
      if (DAT_3000_d13b == '\a') {
        FUN_ovl_34__02923c();
      }
      else if (DAT_3000_d13b == '\b') {
        FUN_ovl_34__029274();
      }
    }
    else if (DAT_3000_d13b == '\x12') {
      FUN_ovl_34__029378();
    }
    else if (DAT_3000_d13b == 'a') {
      FUN_ovl_34__029402();
    }
    else if (DAT_3000_d13b == 'b') {
      FUN_ovl_34__0293ee();
      dispatch_ovl_13_2558_0066(param_1);
    }
    else if (DAT_3000_d13b == 'c') {
      bVar1 = true;
    }
  }
  dispatch_ovl_07_22dc_0216(0x10);
  FUN_1000_036e();
  FUN_1951_017a(1);
  return;
}


