/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_24::0290a0 FUN_ovl_24__0290a0 */

void __cdecl16far FUN_ovl_24__0290a0(void)

{
  int iVar1;
  
  DAT_2a22_dc7a = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(0,1,(int)DAT_2a22_dc7c);
  if (iVar1 == 0) {
    DAT_2a22_dc7b = 8;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc7b = 0x61;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc7b = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc7b = 7;
    return;
  }
  return;
}



/* ovl_24::0290e6 FUN_ovl_24__0290e6 */

void __cdecl16far FUN_ovl_24__0290e6(void)

{
  int iVar1;
  
  DAT_2a22_dc7a = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(1,1,(int)DAT_2a22_dc7c);
  if (iVar1 == 0) {
    DAT_2a22_dc7b = 8;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc7b = 0x61;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc7b = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc7b = 7;
    return;
  }
  if (iVar1 == 4) {
    DAT_2a22_e492 = 1;
    DAT_2a22_e493 = DAT_2a22_e493 + -1;
    DAT_2a22_dc7b = 3;
    DAT_2a22_dc7c = 1;
    return;
  }
  return;
}



/* ovl_24::029142 FUN_ovl_24__029142 */

void __cdecl16far FUN_ovl_24__029142(void)

{
  int iVar1;
  
  DAT_2a22_dc7a = 3;
  iVar1 = dispatch_ovl_13_2558_0d62(2,1,(int)DAT_2a22_dc7c);
  if (iVar1 == 0) {
    DAT_2a22_dc7b = 8;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc7b = 0x62;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc7b = 0x61;
    DAT_2a22_e492 = 0;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc7b = 99;
    return;
  }
  if (iVar1 == 4) {
    DAT_2a22_dc7b = 7;
    return;
  }
  return;
}



/* ovl_24::02919a FUN_ovl_24__02919a */

void __cdecl16far FUN_ovl_24__02919a(void)

{
  int iVar1;
  
  DAT_2a22_dc7a = 4;
  iVar1 = dispatch_ovl_13_2558_0d62(3,1,(int)DAT_2a22_dc7c);
  if (iVar1 == 0) {
    DAT_2a22_dc7b = 8;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc7b = 0x61;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc7b = 99;
    return;
  }
  return;
}



/* ovl_24::0291d6 FUN_ovl_24__0291d6 */

void __cdecl16far FUN_ovl_24__0291d6(void)

{
  int iVar1;
  
  DAT_2a22_dc7a = 5;
  iVar1 = dispatch_ovl_13_2558_0d62(4,1,(int)DAT_2a22_dc7c);
  if (iVar1 == 0) {
    DAT_2a22_dc7b = 8;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc7b = 0x61;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc7b = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_e492 = 1;
    DAT_2a22_e493 = DAT_2a22_e493 + -1;
    DAT_2a22_dc7b = 6;
    return;
  }
  return;
}



/* ovl_24::029226 FUN_ovl_24__029226 */

void __cdecl16far FUN_ovl_24__029226(void)

{
  int iVar1;
  
  DAT_2a22_dc7a = 6;
  iVar1 = dispatch_ovl_13_2558_0d62(5,1,(int)DAT_2a22_dc7c);
  if (iVar1 == 0) {
    DAT_2a22_dc7b = 8;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc7b = 0x62;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc7b = 0x61;
    DAT_2a22_e492 = 0;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc7b = 99;
    return;
  }
  return;
}



/* ovl_24::029272 FUN_ovl_24__029272 */

void __cdecl16far FUN_ovl_24__029272(void)

{
  dispatch_ovl_13_2558_0d62(6,1,(int)DAT_2a22_dc7c);
  DAT_2a22_dc7b = DAT_2a22_dc7a;
  return;
}



/* ovl_24::02928e FUN_ovl_24__02928e */

void __cdecl16far FUN_ovl_24__02928e(void)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int local_6;
  
  local_6 = 0;
  bVar1 = false;
  do {
    local_6 = dispatch_ovl_13_2558_0d62(7,local_6 + 1,(int)DAT_2a22_dc7c);
    if (local_6 == 0) {
      iVar2 = (int)DAT_2a22_dc7c;
      uVar3 = 8;
LAB_ovl_24__0292d8:
      dispatch_ovl_13_2558_0d62(uVar3,1,iVar2);
    }
    else {
      if (local_6 == 1) {
        iVar2 = FUN_1000_08be(0xf);
        if (iVar2 == 0) {
          iVar2 = (int)DAT_2a22_dc7c;
          uVar3 = 0xb;
        }
        else {
          iVar2 = (int)DAT_2a22_dc7c;
          uVar3 = 9;
        }
        goto LAB_ovl_24__0292d8;
      }
      if (local_6 == 2) {
        iVar2 = (int)DAT_2a22_dc7c;
        uVar3 = 10;
        goto LAB_ovl_24__0292d8;
      }
      if (local_6 == 3) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      DAT_2a22_dc7b = DAT_2a22_dc7a;
      return;
    }
  } while( true );
}



/* ovl_24::029336 FUN_ovl_24__029336 */

void __cdecl16far FUN_ovl_24__029336(void)

{
  dispatch_ovl_12_252a_36c2(8);
  DAT_2a22_dc7b = DAT_2a22_dc7a;
  return;
}



/* ovl_24::02934a FUN_ovl_24__02934a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_24__02934a(void)

{
  _DAT_2a22_e333 = 2;
  DAT_2a22_dc7b = 99;
  return;
}



/* ovl_24::029356 ovl_24_entry_290a_02b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_24_entry_290a_02b6(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  FUN_20a6_02a8(4,9,0x80e4);
  FUN_1000_038c(0x80ef);
  dispatch_ovl_13_2558_00d4(0x80f9,param_1);
  FUN_1951_017a(0x26);
  _DAT_3000_d102 = 0xa03d;
  DAT_2a22_e48b = DAT_2a22_e48b + '\x01';
  if (DAT_2a22_e492 == '\0') {
    DAT_2a22_dc7c = 0;
    iVar2 = FUN_1000_08be(0xf);
    if (iVar2 == 0) {
      if (DAT_2a22_e493 == '\0') {
        DAT_2a22_dc7b = '\x04';
      }
      else {
        DAT_2a22_dc7b = '\x05';
      }
    }
    else if (DAT_2a22_e493 == '\0') {
      DAT_2a22_dc7b = '\x01';
    }
    else {
      DAT_2a22_dc7b = '\x02';
    }
  }
  else {
    DAT_2a22_dc7c = 1;
    iVar2 = FUN_1000_08be(0xf);
    if (iVar2 == 0) {
      DAT_2a22_dc7b = '\x06';
    }
    else {
      DAT_2a22_dc7b = '\x03';
    }
  }
  while (!bVar1) {
    if (DAT_2a22_dc7b == '\x05') {
      FUN_ovl_24__0291d6();
    }
    else if (DAT_2a22_dc7b < '\x06') {
      if (DAT_2a22_dc7b == '\x01') {
        FUN_ovl_24__0290a0();
      }
      else if (DAT_2a22_dc7b == '\x02') {
        FUN_ovl_24__0290e6();
      }
      else if (DAT_2a22_dc7b == '\x03') {
        FUN_ovl_24__029142();
      }
      else if (DAT_2a22_dc7b == '\x04') {
        FUN_ovl_24__02919a();
      }
    }
    else if (DAT_2a22_dc7b == '\x06') {
      FUN_ovl_24__029226();
    }
    else if (DAT_2a22_dc7b == '\a') {
      FUN_ovl_24__029272();
    }
    else if (DAT_2a22_dc7b == '\b') {
      FUN_ovl_24__02928e();
    }
    else if (DAT_2a22_dc7b == 'a') {
      FUN_ovl_24__02934a();
    }
    else if (DAT_2a22_dc7b == 'b') {
      FUN_ovl_24__029336();
      dispatch_ovl_13_2558_0066(param_1);
    }
    else if (DAT_2a22_dc7b == 'c') {
      bVar1 = true;
    }
  }
  dispatch_ovl_07_22dc_0216(8);
  FUN_1000_036e();
  FUN_1951_017a(1);
  return;
}


