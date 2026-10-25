/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_06::022dc0 ovl_06_entry_22dc_0000 */

uint __cdecl16far ovl_06_entry_22dc_0000(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    if ((DAT_2a22_e39e < '\r') || (uVar1 = FUN_19c7_4e32(), (uVar1 & 1) == 0)) {
      return 0;
    }
    return 1;
  }
  if (param_1 == 1) {
    if (DAT_2a22_e3bb < '\x13') {
      return 0;
    }
  }
  else if (param_1 != 2) {
    if (param_1 == 3) {
      return 0;
    }
    if (param_1 == 4) {
      uVar1 = FUN_19c7_4e32();
      return (uint)((uVar1 & 3) == 0);
    }
    if (param_1 != 5) {
      return param_1;
    }
  }
  return 1;
}



/* ovl_06::022e18 FUN_ovl_06__022e18 */

void __cdecl16far FUN_ovl_06__022e18(void)

{
  if (DAT_2a22_f232 != '\0') {
    DAT_2a22_e39e = DAT_2a22_e39e + '\x06';
  }
  if (DAT_2a22_f233 != '\0') {
    DAT_2a22_e39e = DAT_2a22_e39e + '\x14';
  }
  if ((((DAT_2a22_f24a != '\0') || (DAT_2a22_f249 != '\0')) || (DAT_2a22_f278 != '\0')) ||
     (((DAT_2a22_f277 != '\0' || (DAT_2a22_f28f != '\0')) || (DAT_2a22_f28e != '\0')))) {
    DAT_2a22_e39e = DAT_2a22_e39e + -6;
  }
  if (((DAT_2a22_f24b != '\0') || (DAT_2a22_f279 != '\0')) || (DAT_2a22_f290 != '\0')) {
    DAT_2a22_e39e = DAT_2a22_e39e + -2;
  }
  if ((((DAT_2a22_f261 != '\0') || (DAT_2a22_f260 != '\0')) || (DAT_2a22_f2a6 != '\0')) ||
     (DAT_2a22_f2a5 != '\0')) {
    DAT_2a22_e39e = DAT_2a22_e39e + '\x03';
  }
  if (DAT_2a22_e39e < '\x01') {
    DAT_2a22_e39e = '\x01';
  }
  if ('\x18' < DAT_2a22_e39e) {
    DAT_2a22_e39e = '\x18';
  }
  return;
}



/* ovl_06::022eb4 FUN_ovl_06__022eb4 */

void __cdecl16far FUN_ovl_06__022eb4(void)

{
  if ((DAT_2a22_f261 != '\0') || (DAT_2a22_f260 != '\0')) {
    DAT_2a22_e3bb = DAT_2a22_e3bb + -4;
  }
  if ((DAT_2a22_f2a6 != '\0') || (DAT_2a22_f2a5 != '\0')) {
    DAT_2a22_e3bb = DAT_2a22_e3bb + -4;
  }
  if (DAT_2a22_f27b != '\0') {
    DAT_2a22_e3bb = DAT_2a22_e3bb + -9;
  }
  if (DAT_2a22_f24b != '\0') {
    DAT_2a22_e3bb = DAT_2a22_e3bb + '\x04';
  }
  if (DAT_2a22_f24a != '\0') {
    DAT_2a22_e3bb = DAT_2a22_e3bb + '\x18';
  }
  if (DAT_2a22_e3bb < '\x01') {
    DAT_2a22_e3bb = '\x01';
  }
  if ('\x18' < DAT_2a22_e3bb) {
    DAT_2a22_e3bb = '\x18';
  }
  return;
}



/* ovl_06::022f18 FUN_ovl_06__022f18 */

void __cdecl16far FUN_ovl_06__022f18(void)

{
  if (DAT_2a22_f279 != '\0') {
    DAT_2a22_e3f5 = DAT_2a22_e3f5 + '\x06';
  }
  if ((DAT_2a22_f278 != '\0') || (DAT_2a22_f277 != '\0')) {
    DAT_2a22_e3f5 = DAT_2a22_e3f5 + '\f';
  }
  if (DAT_2a22_f27c != '\0') {
    DAT_2a22_e3f5 = DAT_2a22_e3f5 + '\x06';
  }
  if (DAT_2a22_f27d != '\0') {
    DAT_2a22_e3f5 = DAT_2a22_e3f5 + -1;
  }
  if (DAT_2a22_e3f5 < '\x01') {
    DAT_2a22_e3f5 = '\x01';
  }
  if ('\x18' < DAT_2a22_e3f5) {
    DAT_2a22_e3f5 = '\x18';
  }
  return;
}



/* ovl_06::022f68 FUN_ovl_06__022f68 */

void __cdecl16far FUN_ovl_06__022f68(void)

{
  if (DAT_2a22_e3a5 != '\0') {
    DAT_2a22_e32e = 2;
    return;
  }
  if ((DAT_2a22_e39f != '\0') || (DAT_2a22_e3a0 != '\0')) {
    DAT_2a22_e32e = 3;
    return;
  }
  if (((int)DAT_2a22_e413 + (int)DAT_2a22_e414 == 3) &&
     (((int)DAT_2a22_e3f6 + (int)DAT_2a22_e3f7 == 2 &&
      ((int)DAT_2a22_e3bc + (int)DAT_2a22_e3bd == 1)))) {
    DAT_2a22_e32e = 1;
  }
  return;
}



/* ovl_06::022fc4 FUN_ovl_06__022fc4 */

void __cdecl16far FUN_ovl_06__022fc4(void)

{
  if (DAT_2a22_e3c2 != '\0') {
    DAT_2a22_e32b = 1;
    return;
  }
  if (((DAT_2a22_e3f9 != '\0') || (DAT_2a22_e3fa != '\0')) && (DAT_2a22_e3fd == '\0')) {
    DAT_2a22_e32b = 5;
    return;
  }
  if (((int)DAT_2a22_e3d9 + (int)DAT_2a22_e3da == 1) ||
     (((int)DAT_2a22_e430 + (int)DAT_2a22_e431 == 1 && (DAT_2a22_e3fd != '\0')))) {
    DAT_2a22_e32b = 3;
    return;
  }
  if (((int)DAT_2a22_e3d9 + (int)DAT_2a22_e3da == 1) ||
     ((int)DAT_2a22_e430 + (int)DAT_2a22_e431 == 1)) {
    DAT_2a22_e32b = 2;
    return;
  }
  if (DAT_2a22_e3fd != '\0') {
    DAT_2a22_e32b = 4;
  }
  return;
}



/* ovl_06::023054 FUN_ovl_06__023054 */

void __cdecl16far FUN_ovl_06__023054(void)

{
  if (DAT_2a22_e3fc != '\0') {
    DAT_2a22_e328 = 2;
    return;
  }
  if ((int)DAT_2a22_e3f9 + (int)DAT_2a22_e3fa < 3) {
    DAT_2a22_e328 = 0;
    return;
  }
  DAT_2a22_e328 = 1;
  return;
}



/* ovl_06::023080 FUN_ovl_06__023080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_06__023080(void)

{
  int iVar1;
  int iVar2;
  undefined *local_4;
  
  iVar2 = 0;
  iVar1 = FUN_1000_08be(2,0,0);
  if (iVar1 != 0) {
    local_4 = (undefined *)&DAT_2a22_e5d0;
    for (iVar1 = 0; iVar1 < _DAT_2a22_e5c4; iVar1 = iVar1 + 1) {
      if (local_4[0x2f] != '\0') {
        iVar2 = 1;
      }
      local_4 = local_4 + 0x32;
    }
    if (iVar2 != 0) {
      _DAT_2a22_953a = _DAT_2a22_953a + _DAT_2a22_e5ac;
    }
    if (800 < _DAT_2a22_953a) {
      local_4 = (undefined *)&DAT_2a22_e5d0;
      for (iVar1 = 0; iVar1 < _DAT_2a22_e5c4; iVar1 = iVar1 + 1) {
        if ((local_4[0x2f] == '\x01') && (local_4[10] != '\x02')) {
          _DAT_2a22_953a = 0;
          FUN_19c7_480c(local_4 + 0xe,0x50d2);
          local_4[10] = 2;
          local_4[0x31] = 1;
          local_4[0x2f] = 0;
          local_4[0xd] = DAT_2a22_bd84;
          return;
        }
        local_4 = local_4 + 0x32;
      }
    }
  }
  return;
}



/* ovl_06::023146 FUN_ovl_06__023146 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_06__023146(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_08be(3);
  if (iVar1 != 0) {
    if ('\x12' < DAT_2a22_e3bb) {
      _DAT_2a22_953c = _DAT_2a22_953c + _DAT_2a22_e5ac;
    }
    if (((599 < _DAT_2a22_953c) && ('\x12' < DAT_2a22_e3bb)) && (DAT_2a22_e3bc == '\0')) {
      _DAT_2a22_bd7a = 3;
      _DAT_2a22_953c = 0;
    }
  }
  return;
}



/* ovl_06::023188 ovl_06_entry_22dc_03c8 */

void __cdecl16far ovl_06_entry_22dc_03c8(void)

{
  FUN_ovl_06__023080();
  FUN_ovl_06__023146();
  ovl_06_entry_22dc_03d6();
  return;
}



/* ovl_06::023196 ovl_06_entry_22dc_03d6 */

void __cdecl16far ovl_06_entry_22dc_03d6(void)

{
  FUN_ovl_06__022f68();
  FUN_ovl_06__022e18();
  FUN_ovl_06__022fc4();
  FUN_ovl_06__022eb4();
  FUN_ovl_06__023054();
  FUN_ovl_06__022f18();
  FUN_1000_088c();
  return;
}



/* ovl_06::0231b4 FUN_ovl_06__0231b4 */

void __cdecl16far FUN_ovl_06__0231b4(int param_1)

{
  if (param_1 == 0) {
    dispatch_ovl_16_290a_04c2();
  }
  else {
    if (param_1 == 1) {
      dispatch_ovl_17_290a_0468();
      return;
    }
    if (param_1 == 2) {
      dispatch_ovl_18_290a_0342();
      return;
    }
    if (param_1 == 3) {
      dispatch_ovl_20_290a_0372();
      return;
    }
    if (param_1 == 4) {
      dispatch_ovl_21_290a_0262();
      return;
    }
    if (param_1 != 5) {
      return;
    }
    dispatch_ovl_19_290a_0318();
  }
  return;
}



/* ovl_06::02320a ovl_06_entry_22dc_044a */

void __cdecl16far ovl_06_entry_22dc_044a(void)

{
  FUN_19c7_480c(0xa18e,0x50ee);
  DAT_2a22_e5da = 7;
  DAT_2a22_e5dd = DAT_2a22_bd89;
  DAT_2a22_e601 = 2;
  DAT_2a22_e5ff = 0;
  return;
}


